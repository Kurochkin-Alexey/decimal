#include "s21_decimal.h"

int overflow_checker(s21_decimal src) {
  int found_one = 0;
  for (int i = 1; i <= 2 && !found_one; i++) {
    for (int j = INT_SIZE - 1; j >= 0 && !found_one; j--) {
      if ((src.bits[i] & (1U << j)) != 0) {
        found_one = 1;
      }
    }
  }
  return found_one;
}

int s21_from_decimal_to_int(s21_decimal src, int *dst) {
  int status = overflow_checker(src);
  *dst = 0;
  for (int i = 0; i <= INT_SIZE - 1; i++) {
    *dst += ((src.bits[0] >> i) & 1) * (int)(pow(2, i));
  }
  char scale_2_arr[9];
  scale_2_arr[8] = '\0';

  for (int i = SCALE_END, j = 0; i >= SCALE_START; i--, j++) {
    scale_2_arr[j] = ((src.bits[3] >> i) & 1) + '0';
  }
  int scale_2 = 0;
  sscanf(scale_2_arr, "%d", &scale_2);
  int scale_10 = 0;
  int power = 1;
  while (scale_2 != 0) {
    scale_10 += (scale_2 % 10) * power;
    scale_2 /= 10;
    power *= 2;
  }
  for (int i = 0; i < scale_10; i++) {
    *dst /= 10;
  }
  if (src.bits[3] & (1U << (INT_SIZE - 1))) {
    *dst = -(*dst);
  }
  return status;
}

int s21_from_decimal_to_float(s21_decimal src, float *dst) {
  *dst = 0;
  for (int j = 0; j < 3; j++) {
    for (int i = 0; i <= INT_SIZE - 1; i++) {
      *dst += ((src.bits[j] >> i) & 1) * pow(2, INT_SIZE * j + i);
    }
  }
  char scale_2_arr[9];
  scale_2_arr[8] = '\0';

  for (int i = SCALE_END, j = 0; i >= SCALE_START; i--, j++) {
    scale_2_arr[j] = ((src.bits[3] >> i) & 1) + '0';
  }
  int scale_2 = 0;
  sscanf(scale_2_arr, "%d", &scale_2);
  int scale_10 = 0;
  int power = 1;
  while (scale_2 != 0) {
    scale_10 += (scale_2 % 10) * power;
    scale_2 /= 10;
    power *= 2;
  }
  double result = *dst;

  for (int i = 0; i < scale_10; i++) {
    result /= 10.0;
  }
  *dst = result;
  if (src.bits[3] & (1U << (INT_SIZE - 1))) {
    *dst = -(*dst);
  }
  return 0;
}

int s21_from_float_to_decimal(float src, s21_decimal *dst) {
  set_decimal_to_zero(dst);
  char f_num[100];
  int exponent;
  unsigned int mantissa;
  if (src < 0) {
    set_sign(dst, 1);
    src = -src;
  }
  int mean_zeros = 0;
  sprintf(f_num, "%e", src);
  sscanf(f_num, "%*[^e]e%d", &exponent);
  double float_num = 0;
  sscanf(f_num, "%lf", &float_num);
  if (floorf(float_num) == float_num) {
    int float_num_1 = (int)float_num;
    while (float_num_1 % 10 == 0 && float_num_1 > 0) {
      mean_zeros += 1;
      float_num_1 /= 10;
    }
  }
  char *dot_position = strchr(f_num, '.');
  if (dot_position != NULL) {
    memmove(dot_position, dot_position + 1, strlen(dot_position));
  }
  sscanf(f_num, "%u", &mantissa);
  while (mantissa % 10 == 0 && mantissa > 0) {
    mantissa = mantissa / 10;
  }
  if (mean_zeros != 0) {
    mantissa = mantissa * pow(10, mean_zeros);
  }
  char *exp_position = strchr(f_num, 'e');
  if (exp_position != NULL) {
    *exp_position = '\0';
  }
  for (int i = INT_SIZE - 1; i >= 0; i--) {
    dst->bits[LOW_BITS] |= ((mantissa >> i) & 1) << i;
  }
  if (floorf(src) == src) {
    set_scale(dst, 0);
  } else {
    set_scale(dst, 6 - exponent);
  }
  return 0;
}

int s21_from_int_to_decimal(int src, s21_decimal *dst) {
  set_decimal_to_zero(dst);
  if (src < 0) {
    set_sign(dst, 1);
    src = -src;
  }
  for (int i = INT_SIZE - 1; i >= 0; i--) {
    dst->bits[0] |= ((src >> i) & 1) << i;
  }
  return 0;
}
