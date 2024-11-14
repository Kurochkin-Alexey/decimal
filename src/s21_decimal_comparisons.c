#include "s21_decimal.h"

int s21_is_equal(s21_decimal value1, s21_decimal value2) {
  s21_decimal a = value1;
  s21_decimal b = value2;
  int res = 0, sign_a = get_sign(a), sign_b = get_sign(b);
  s21_decimal null = {{0, 0, 0, 0}};
  normalizator(&a, &b);
  int comparison = comparison_of_mantiss(a, b);
  int comparwnull = comparison_of_mantiss(a, null);
  if (comparison == EQUAL && comparwnull == EQUAL) {
    res = 1;
  } else if (sign_a == sign_b) {
    if (comparison == EQUAL) {
      res = 1;
    }
  }
  return res;
}

int s21_is_greater(s21_decimal value1, s21_decimal value2) {
  s21_decimal a = value1;
  s21_decimal b = value2;
  a = check_minus_null(a);
  b = check_minus_null(b);
  int res = 0, sign_a = get_sign(a), sign_b = get_sign(b);
  normalizator(&a, &b);
  int comparison = comparison_of_mantiss(a, b);
  if (sign_a == 0 && sign_b == 1)
    res = 1;
  else if (sign_a == sign_b) {
    if (comparison == LESS && sign_a)
      res = 1;
    else if (comparison == MORE && !sign_a && !sign_b)
      res = 1;
  }
  return res;
}

int s21_is_greater_or_equal(s21_decimal value1, s21_decimal value2) {
  return s21_is_greater(value1, value2) || s21_is_equal(value1, value2);
}

int s21_is_less(s21_decimal value1, s21_decimal value2) {
  s21_decimal a = value1;
  s21_decimal b = value2;
  a = check_minus_null(a);
  b = check_minus_null(b);
  int res = 0, sign_a = get_sign(a), sign_b = get_sign(b);
  normalizator(&a, &b);
  int comparison = comparison_of_mantiss(a, b);
  if (sign_a == 1 && sign_b == 0)
    res = 1;
  else if (sign_a == sign_b) {
    if (comparison == MORE && sign_a)
      res = 1;
    else if (comparison == LESS && !sign_a && !sign_b)
      res = 1;
  }
  return res;
}

int s21_is_less_or_equal(s21_decimal value1, s21_decimal value2) {
  return s21_is_less(value1, value2) || s21_is_equal(value1, value2);
}

int s21_is_not_equal(s21_decimal value1, s21_decimal value2) {
  int res = 1;
  if (s21_is_equal(value1, value2)) {
    res = 0;
  }
  return res;
}