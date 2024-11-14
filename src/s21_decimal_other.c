#include "s21_decimal.h"

int s21_truncate(s21_decimal value, s21_decimal *result) {
  int error = 0;
  if (result == NULL) {
    error = 1;
  } else {
    *result = value;
    int int_pow = get_scale(value);
    if (int_pow) {
      set_scale(result, 0);
      for (int i = 0; i < int_pow; i++) {
        div_by_ten(result);
      }
    }
  }
  return error;
}

int s21_negate(s21_decimal value, s21_decimal *result) {
  int error = 0;
  if (result == NULL) {
    error = 1;
  } else {
    *result = value;
    set_sign(result, !get_sign(value));
  }
  return error;
}

int s21_round(s21_decimal value, s21_decimal *result) {
  int error = 0;
  int zero_value = is_zero(value);

  error = s21_truncate(value, result);  // result is int part
  if (!error && !zero_value && get_scale(value)) {
    s21_decimal diff = {0};
    s21_sub(value, *result, &diff);  // diff is floating part
    s21_decimal zerohalf = {0};
    s21_from_int_to_decimal(5, &zerohalf);
    set_scale(&zerohalf, 1);  // zerohalf is 0.5 decimal
    if (s21_is_greater_or_equal(abs_dec(diff),
                                zerohalf)) {  // |difference| >= 0.5
      int i = 0;
      while (get_mantissa_bit(*result, i)) {
        set_mantissa_bit(result, i, 0);
        i++;
      }
      set_mantissa_bit(result, i, 1);
    }
  }
  return error;
}

int s21_floor(s21_decimal value, s21_decimal *result) {
  if (!s21_truncate(value, s21_reset(result)) && get_sign(value) &&
      !s21_is_equal(*result, value)) {
    s21_sub(*result, ((s21_decimal){{1, 0, 0, 0}}), result);
  }
  return 0;
}

s21_decimal abs_dec(s21_decimal value) {
  if (get_sign(value)) {
    set_sign(&value, 0);
  }
  return value;
}