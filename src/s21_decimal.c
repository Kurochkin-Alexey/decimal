#include "s21_decimal.h"

s21_decimal *s21_reset(s21_decimal *value) {
  for (int x = LOW_BITS; x <= INFO_BITS; x++) {
    value->bits[x] = 0;
  }
  return value;
}

void div_by_ten(s21_decimal *value) {
  int remainder = 0;
  for (int i = HIGH_BITS; i >= LOW_BITS; i--) {
    long initial = remainder * 4294967296 + value->bits[i];
    value->bits[i] = initial / 10;
    remainder = initial - value->bits[i] * 10;
  }
}

// void print_int_binary(unsigned int num) {
//   for (unsigned int i = 1U << (INT_SIZE - 1), counter = 0; i > 0;
//        i >>= 1U, counter++) {
//     if (counter != 0 && counter % 8 == 0) {
//       printf(" ");
//     }
//     if (num & i) {
//       printf("1");
//     } else {
//       printf("0");
//     }
//   }
//   printf("\t(%u)\n", num);
// }

// void print_decimal(s21_decimal dec) {
//   for (int i = INFO_BITS; i >= LOW_BITS; i--) {
//     print_int_binary(dec.bits[i]);
//   }
//   printf("\n");
// }

// Finds which element of a decimal the index belongs to.
int get_decimal_element(unsigned int index) {
  int element = index / INT_SIZE;
  if (element > INFO_BITS || element < LOW_BITS) {
    element = -1;
  }
  return element;
}

int get_bit(unsigned int num, unsigned int index) {
  // printf("getting bits of %u at index [%u]\n", num, index);
  // print_int_binary(num);
  // print_int_binary(1 << index);

  return (num & 1 << index) > 0 ? 1 : 0;
}

int get_mantissa_bit(s21_decimal dec, unsigned int index) {
  int bit = -1;
  int element = get_decimal_element(index);
  if (element >= LOW_BITS) {
    bit = get_bit(dec.bits[element], index % INT_SIZE);
  }
  return bit;
}

void set_bit(unsigned int *num, unsigned int index, unsigned int bit) {
  if (bit == 1) {
    *num |= 1 << index;
  } else if (bit == 0) {
    *num &= ~(1 << index);
  }
}

void set_mantissa_bit(s21_decimal *dec, unsigned int index, unsigned int bit) {
  int element = get_decimal_element(index);
  if (element >= LOW_BITS && element < INFO_BITS) {
    set_bit(&dec->bits[element], index % INT_SIZE, bit);
  }
}

int get_scale(s21_decimal dec) {
  // the 5 lines below do the same thing as the one-liner return:
  // int info_int = dec.bits[INFO_BITS];
  // int byte_shifted_to_scale = UINT8_MAX << SCALE_START;
  // int scale_shifted = info_int & byte_shifted_to_scale;
  // int deshifted_scale = scale_shifted >> SCALE_START;
  // return deshifted_scale;

  return (dec.bits[INFO_BITS] & (UINT8_MAX << SCALE_START)) >> SCALE_START;
}

void set_scale(s21_decimal *dec, unsigned int scale) {
  dec->bits[INFO_BITS] &=
      ~(UINT8_MAX << SCALE_START);  // zeros the current dec scale
  dec->bits[INFO_BITS] |= scale << SCALE_START;
}

int get_sign(s21_decimal dec) {
  return get_bit(dec.bits[INFO_BITS], INT_SIZE - 1);
}

void set_sign(s21_decimal *dec, unsigned int sign) {
  set_bit(&dec->bits[INFO_BITS], INT_SIZE - 1, sign);
}

void set_mantissa_to_zero(s21_decimal *dec) {
  for (int i = LOW_BITS; i < INFO_BITS; i++) {
    dec->bits[i] = 0;
  }
}

void set_decimal_to_zero(s21_decimal *dec) {
  set_mantissa_to_zero(dec);
  dec->bits[INFO_BITS] = 0;
}

void normalizator(s21_decimal *value1, s21_decimal *value2) {
  s21_big_decimal big_value_1 = {0};
  s21_big_decimal big_value_2 = {0};
  dec_to_big_dec(*value1, &big_value_1);
  dec_to_big_dec(*value2, &big_value_2);
  normalize(&big_value_1, &big_value_2);
  big_dec_to_dec(big_value_1, value1);
  big_dec_to_dec(big_value_2, value2);
}

int comparison_of_mantiss(s21_decimal value1,
                          s21_decimal value2) {  // сравнение мантисс
  int res = EQUAL;
  for (int i = HIGH_BITS; i >= LOW_BITS && res == EQUAL; i--) {
    if (value1.bits[i] > value2.bits[i]) {
      res = MORE;
    } else if (value1.bits[i] < value2.bits[i]) {
      res = LESS;
    }
  }
  return res;
}

s21_decimal check_minus_null(s21_decimal value) {  // проверка на -0
  s21_decimal answer;
  s21_decimal null = {{0}};

  if (comparison_of_mantiss(value, null) == 0 &&
      get_sign(value)) {  // если равно -0, то возвращаем 0
    answer = null;
  } else {
    answer = value;
  }
  return answer;
}

int is_zero(s21_decimal dec) {
  int dec_is_zero = 0;
  for (int i = HIGH_BITS; i < LOW_BITS && !dec_is_zero; i--) {
    if (dec.bits[i] != 0) {
      dec_is_zero = 1;
    }
  }
  return dec_is_zero;
}