#include "s21_decimal.h"

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  return arithmetic_manager(value_1, value_2, result, ADD);
}

int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  return arithmetic_manager(value_1, value_2, result, SUB);
}

int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  return arithmetic_manager(value_1, value_2, result, MUL);
}

int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  return arithmetic_manager(value_1, value_2, result, DIV);
}

int arithmetic_manager(s21_decimal value_1, s21_decimal value_2,
                       s21_decimal *result, int operation) {
  int status = OK;
  set_decimal_to_zero(result);

  s21_big_decimal big_value_1 = {0};
  s21_big_decimal big_value_2 = {0};
  s21_big_decimal big_result = {0};
  dec_to_big_dec(value_1, &big_value_1);
  dec_to_big_dec(value_2, &big_value_2);
  if (operation == ADD || operation == SUB) {
    status = add_sub_manager(big_value_1, big_value_2, &big_result, operation);
  } else {
    if (operation == MUL) {
      mul_manager(big_value_1, big_value_2, &big_result);
    } else if (operation == DIV) {
      status = div_manager(big_value_1, big_value_2, &big_result);
    }
  }

  if (status == OK) {
    status = big_dec_to_dec(big_result, result);
  }
  return status;
}

int add_sub_manager(s21_big_decimal big_value_1, s21_big_decimal big_value_2,
                    s21_big_decimal *big_result, int operation) {
  int status = OK;

  int scale_1 = get_big_scale(big_value_1);
  int scale_2 = get_big_scale(big_value_2);
  int sign_1 = get_big_sign(big_value_1);
  int sign_2 = get_big_sign(big_value_2);

  int result_scale = scale_1 > scale_2 ? scale_1 : scale_2;
  if (scale_1 != scale_2) {
    normalize(&big_value_1, &big_value_2);
  }

  int greater = 0;
  if (compare_big_mantissas(big_value_1, big_value_2) < 2) {
    greater = 1;
  } else {
    greater = 2;
  }

  if ((operation == ADD && sign_1 == sign_2) ||
      (operation == SUB && sign_1 != sign_2)) {
    status = big_bit_add(big_value_1, big_value_2, big_result);
    set_big_sign(big_result, sign_1);
  } else if (operation == SUB) {
    if (greater == 1) {
      status = big_bit_sub(big_value_1, big_value_2, big_result);
      if (sign_1 == 1) {
        set_big_sign(big_result, 1);
      }
    } else {
      status = big_bit_sub(big_value_2, big_value_1, big_result);
      if (sign_1 == 0) {
        set_big_sign(big_result, 1);
      }
    }
  } else {
    if (greater == 1) {
      status = big_bit_sub(big_value_1, big_value_2, big_result);
      set_big_sign(big_result, sign_1);
    } else {
      status = big_bit_sub(big_value_2, big_value_1, big_result);
      set_big_sign(big_result, sign_2);
    }
  }
  set_big_scale(big_result, result_scale);
  return status;
}

int big_bit_add(s21_big_decimal big_value_1, s21_big_decimal big_value_2,
                s21_big_decimal *big_result) {
  int status = OK;
  int carry = 0;
  for (int i = 0; i < BIG_DEC_BIT_TOP; i++) {
    int cur_bit = get_big_mantissa_bit(big_value_1, i) +
                  get_big_mantissa_bit(big_value_2, i) + carry;
    carry = cur_bit / 2;
    cur_bit %= 2;
    set_big_mantissa_bit(big_result, i, cur_bit);
  }
  if (carry == 1) {
    printf("BIG Overflow\n");
    status = TOO_LARGE;
    set_big_decimal_to_zero(big_result);
  }
  return status;
}

int big_bit_sub(s21_big_decimal big_value_1, s21_big_decimal big_value_2,
                s21_big_decimal *big_result) {
  int status = OK;
  int carry = 0;
  for (int i = 0; i < BIG_DEC_BIT_TOP; i++) {
    int cur_bit = get_big_mantissa_bit(big_value_1, i) -
                  get_big_mantissa_bit(big_value_2, i) - carry;
    carry = cur_bit < 0 ? 1 : 0;
    cur_bit = abs(cur_bit % 2);
    set_big_mantissa_bit(big_result, i, cur_bit);
  }
  if (carry == 1) {
    printf("BIG Overflow\n");
    status = TOO_LARGE;
    set_big_decimal_to_zero(big_result);
  }
  return status;
}

void mul_manager(s21_big_decimal big_value_1, s21_big_decimal big_value_2,
                 s21_big_decimal *big_result) {
  int scale_1 = get_big_scale(big_value_1);
  int scale_2 = get_big_scale(big_value_2);
  int sign_1 = get_big_sign(big_value_1);
  int sign_2 = get_big_sign(big_value_2);
  big_bit_mul(big_value_1, big_value_2, big_result);
  set_big_scale(big_result, scale_1 + scale_2);
  set_big_sign(big_result, sign_1 ^ sign_2);
}

void big_bit_mul(s21_big_decimal big_value_1, s21_big_decimal big_value_2,
                 s21_big_decimal *big_result) {
  for (int i = BIG_DEC_BIT_TOP; i >= 0; i--) {
    int bit_2 = get_big_mantissa_bit(big_value_2, i);
    if (bit_2 == 1) {
      big_bit_add(*big_result, big_value_1, big_result);
    }
    if (i > 0) {
      shift_left(big_result, 1);
    }
  }
}

int div_manager(s21_big_decimal big_value_1, s21_big_decimal big_value_2,
                s21_big_decimal *big_result) {
  int status = OK;
  if (is_big_zero(big_value_2)) {
    status = DIVISION_BY_ZERO;
  } else {
    int sign_1 = get_big_sign(big_value_1);
    int sign_2 = get_big_sign(big_value_2);

    big_bit_div(big_value_1, big_value_2, big_result);

    int result_sign = sign_1 ^ sign_2;
    set_big_sign(big_result, result_sign);
  }
  return status;
}

void big_bit_div(s21_big_decimal big_value_1, s21_big_decimal big_value_2,
                 s21_big_decimal *big_result) {
  int scale_dif = get_big_scale(big_value_1) - get_big_scale(big_value_2);
  s21_big_decimal total_sum = {0};
  s21_big_decimal cur_sum = {0};
  while (!is_big_zero(big_value_1) &&
         get_big_scale(total_sum) <= SCALE_MAX + 10) {
    while (compare_big_mantissas(big_value_1, big_value_2) == LESS) {
      multiply_by_ten_times_scale(&big_value_1, 1);
      multiply_by_ten_times_scale(&total_sum, 1);
    }
    set_big_decimal_to_zero(&cur_sum);
    s21_big_decimal part_next = big_value_2;
    s21_big_decimal part = big_value_2;
    int msb1 = get_most_significant_bit_index(big_value_1);
    int msb2 = get_most_significant_bit_index(big_value_2);
    int msb_ind_difference = msb1 - msb2;
    int power_of_two = 0;
    while (compare_big_mantissas(big_value_1, part_next) != LESS) {
      if (power_of_two == 0 && (msb_ind_difference > 1)) {
        power_of_two = msb_ind_difference - 1;
        shift_left(&part_next, power_of_two);
      }
      part = part_next;
      shift_left(&part_next, 1);
      power_of_two++;
    }
    power_of_two--;
    set_big_mantissa_bit(&cur_sum, power_of_two, 1);
    big_bit_add(total_sum, cur_sum, &total_sum);

    if (compare_big_mantissas(big_value_1, part) != LESS) {
      big_bit_sub(big_value_1, part, &big_value_1);
    }
  }
  set_big_scale(&total_sum, get_big_scale(total_sum) + scale_dif);

  *big_result = total_sum;
}

s21_big_decimal divide_with_remainder(s21_big_decimal value_1,
                                      s21_big_decimal value_2,
                                      s21_big_decimal *remainder) {
  s21_big_decimal one = {{1, 0, 0, 0, 0, 0, 0, 0}};
  s21_big_decimal result = {{0}};
  while (compare_big_mantissas(value_1, value_2) == LESS) {
    multiply_by_ten(&value_1);
    set_big_scale(&result, get_big_scale(result) + 1);
  }

  while (compare_big_mantissas(value_1, value_2) < LESS) {
    int breaker = 0;
    s21_big_decimal prev_i_shift = value_2;
    s21_big_decimal cur_i_shift = prev_i_shift;
    for (int i = 1; i < BIG_DEC_BIT_TOP && !breaker; i++) {
      shift_left(&cur_i_shift, 1);
      if (compare_big_mantissas(cur_i_shift, value_1) < LESS) {
        s21_big_decimal prev_one_shift = one;
        shift_left(&prev_one_shift, i - 1);
        big_bit_add(result, prev_one_shift, &result);
        big_bit_sub(value_1, prev_i_shift, &value_1);
        breaker = 1;
      }
      prev_i_shift = cur_i_shift;
    }
  }
  *remainder = value_1;
  return result;
}