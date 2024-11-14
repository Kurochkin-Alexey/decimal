#include "s21_decimal.h"

// void print_big_decimal(s21_big_decimal big_dec) {
//   for (int i = BIG_DEC_INFO_BITS; i >= LOW_BITS; i--) {
//     if (i == INFO_BITS) {
//       printf("\n");
//     }
//     print_int_binary(big_dec.bits[i]);
//   }
//   printf("\n");
// }

// Finds which element of a decimal the index belongs to.
int get_big_decimal_element(unsigned int index) {
  int element = index / INT_SIZE;
  if (element > BIG_DEC_INFO_BITS || element < LOW_BITS) {
    element = -1;
  }
  return element;
}

int get_big_mantissa_bit(s21_big_decimal big_dec, unsigned int index) {
  int bit = -1;
  int element = get_big_decimal_element(index);
  if (element >= LOW_BITS) {
    bit = get_bit(big_dec.bits[element], index % INT_SIZE);
  }
  return bit;
}

void set_big_mantissa_bit(s21_big_decimal *big_dec, unsigned int index,
                          unsigned int bit) {
  int element = get_big_decimal_element(index);
  if (element >= LOW_BITS) {
    set_bit(&big_dec->bits[element], index % INT_SIZE, bit);
  }
}

int get_big_scale(s21_big_decimal big_dec) {
  // the 5 lines below do the same thing as the one-liner return:
  // int info_int = dec.bits[INFO_BITS];
  // int byte_shifted_to_scale = UINT8_MAX << SCALE_START;
  // int scale_shifted = info_int & byte_shifted_to_scale;
  // int deshifted_scale = scale_shifted >> SCALE_START;
  // return deshifted_scale;

  return (big_dec.bits[BIG_DEC_INFO_BITS] & (UINT8_MAX << SCALE_START)) >>
         SCALE_START;
}

void set_big_scale(s21_big_decimal *big_dec, unsigned int scale) {
  big_dec->bits[BIG_DEC_INFO_BITS] &=
      ~(UINT8_MAX << SCALE_START);  // zeros the current dec scale
  big_dec->bits[BIG_DEC_INFO_BITS] |= scale << SCALE_START;
}

int get_big_sign(s21_big_decimal big_dec) {
  return get_bit(big_dec.bits[BIG_DEC_INFO_BITS], INT_SIZE - 1);
}

void set_big_sign(s21_big_decimal *big_dec, unsigned int sign) {
  set_bit(&big_dec->bits[BIG_DEC_INFO_BITS], INT_SIZE - 1, sign);
}

void set_big_mantissa_to_zero(s21_big_decimal *big_dec) {
  for (int i = LOW_BITS; i < BIG_DEC_INFO_BITS; i++) {
    big_dec->bits[i] = 0;
  }
}

void set_big_decimal_to_zero(s21_big_decimal *big_dec) {
  set_big_mantissa_to_zero(big_dec);
  big_dec->bits[BIG_DEC_INFO_BITS] = 0;
}

void dec_to_big_dec(s21_decimal dec, s21_big_decimal *big_dec) {
  set_big_mantissa_to_zero(big_dec);
  for (int i = LOW_BITS; i < INFO_BITS; i++) {
    big_dec->bits[i] = dec.bits[i];
  }
  set_big_scale(big_dec, get_scale(dec));
  set_big_sign(big_dec, get_sign(dec));
}

int big_dec_to_dec(s21_big_decimal big_dec, s21_decimal *dec) {
  set_decimal_to_zero(dec);
  int status = OK;
  int big_sign = get_big_sign(big_dec);
  int big_scale = get_big_scale(big_dec);
  int scale_fraction = 0;
  s21_big_decimal fraction = {{0}};
  while ((status = get_overflow(big_dec, big_scale)) == TOO_LARGE &&
         big_scale > 0) {
    big_scale--;
    scale_fraction++;
    s21_big_decimal ten = {{10, 0, 0, 0, 0, 0, 0, 0}};
    s21_big_decimal remainder = {{0}};
    big_dec = divide_with_remainder(big_dec, ten, &remainder);
    for (int i = 0; i < scale_fraction - 1; i++) {
      multiply_by_ten(&remainder);
    }
    big_bit_add(fraction, remainder, &fraction);
  }
  set_big_scale(&fraction, scale_fraction);
  bank_round(&big_dec, fraction);

  if (status == OK) {
    for (int i = LOW_BITS; i < INFO_BITS; i++) {
      dec->bits[i] = big_dec.bits[i];
    }
    set_scale(dec, big_scale);
    set_sign(dec, big_sign);
  } else {
    if (big_sign == 1) {
      status = TOO_SMALL;
    }
  }
  return status;
}

void bank_round(s21_big_decimal *big_dec, s21_big_decimal fraction) {
  s21_big_decimal one = {{1, 0, 0, 0, 0, 0, 0, 0}};
  s21_big_decimal pointfive = {{5, 0, 0, 0, 0, 0, 0, 0}};
  set_big_scale(&pointfive, 1);
  normalize(&fraction, &pointfive);
  int comparison = compare_big_mantissas(fraction, pointfive);
  if ((comparison == EQUAL && !is_even(*big_dec)) || comparison == MORE) {
    big_bit_add(*big_dec, one, big_dec);
  }
}

int get_overflow(s21_big_decimal big_dec, int big_scale) {
  int status = OK;
  if (big_scale > SCALE_MAX) {
    status = TOO_LARGE;
  }
  for (int i = INFO_BITS; i < BIG_DEC_INFO_BITS && status == OK; i++) {
    if (big_dec.bits[i] != 0) {
      status = TOO_LARGE;
    }
  }
  return status;
}

s21_big_decimal copy_big_decimal(s21_big_decimal big_dec) {
  s21_big_decimal new_big_dec;
  for (int i = 0; i < BIG_DEC_SIZE; i++) {
    new_big_dec.bits[i] = big_dec.bits[i];
  }
  return new_big_dec;
}

void shift_left(s21_big_decimal *big_dec, unsigned int shift_value) {
  int full_byte_cycles = shift_value / INT_SIZE;
  for (int i = 0; i < full_byte_cycles; i++) {
    shift_left(big_dec, INT_SIZE - 1);
    shift_left(big_dec, 1);
  }
  shift_value %= INT_SIZE;
  if (shift_value > 0) {
    unsigned carry = 0;
    for (int i = 0; i < BIG_DEC_INFO_BITS; i++) {
      unsigned tmp = big_dec->bits[i];
      big_dec->bits[i] <<= shift_value;
      big_dec->bits[i] |= carry;
      carry = tmp >> (INT_SIZE - shift_value);
    }
  }
}

void multiply_by_ten(s21_big_decimal *big_dec) {
  s21_big_decimal temp_1 = copy_big_decimal(*big_dec);
  s21_big_decimal temp_2 = copy_big_decimal(*big_dec);
  shift_left(&temp_1, 1);                // 2^1
  shift_left(&temp_2, 3);                // 2^3
  big_bit_add(temp_1, temp_2, big_dec);  // 2^1 + 2^3
}

void multiply_by_ten_times_scale(s21_big_decimal *big_dec, unsigned int scale) {
  for (unsigned int i = 0; i < scale; i++) {
    multiply_by_ten(big_dec);
  }
  set_big_scale(big_dec, get_big_scale(*big_dec) + scale);
}

int normalize(s21_big_decimal *first, s21_big_decimal *second) {
  int largest_scale = 0;
  int first_scale = get_big_scale(*first);
  int second_scale = get_big_scale(*second);
  if (first_scale < second_scale) {
    while (first_scale < second_scale) {
      multiply_by_ten(first);
      first_scale++;
    }
    set_big_scale(first, first_scale);
    largest_scale = first_scale;
  } else if (second_scale < first_scale) {
    while (second_scale < first_scale) {
      multiply_by_ten(second);
      second_scale++;
    }
    set_big_scale(second, second_scale);
    largest_scale = second_scale;
  }
  return largest_scale;
}

int compare_big_mantissas(s21_big_decimal first, s21_big_decimal second) {
  int res = EQUAL;
  for (int i = BIG_DEC_INFO_BITS - 1; i >= 0 && res == EQUAL; i--) {
    if (first.bits[i] > second.bits[i]) {
      res = MORE;
    } else if (first.bits[i] < second.bits[i]) {
      res = LESS;
    }
  }
  return res;
}

int is_even(s21_big_decimal big_dec) {
  return get_big_mantissa_bit(big_dec, 0) == 0;
}

int is_big_zero(s21_big_decimal dec) {
  int dec_is_zero = 1;
  for (int i = LOW_BITS; i < BIG_DEC_INFO_BITS && dec_is_zero; i++) {
    if (dec.bits[i] != 0) {
      dec_is_zero = 0;
    }
  }
  return dec_is_zero;
}

int get_most_significant_bit_index(s21_big_decimal dec) {
  int msb_index = -1;
  for (int i = BIG_DEC_BIT_TOP - 1; i >= 0 && msb_index == -1; i--) {
    if (get_big_mantissa_bit(dec, i) == 1) {
      msb_index = i;
    }
  }
  return msb_index;
}