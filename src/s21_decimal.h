#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INT_SIZE __INT_WIDTH__
#define LOW_BIT_TOP INT_SIZE
#define MID_BIT_TOP (INT_SIZE * 2)
#define HIGH_BIT_TOP (INT_SIZE * 3)
#define INFO_BIT_TOP (INT_SIZE * 4)
#define SCALE_START 16
#define SCALE_END 23

#define BIG_DEC_SIZE 8
#define BIG_DEC_INFO_BITS (BIG_DEC_SIZE - 1)
#define BIG_DEC_BIT_TOP ((BIG_DEC_SIZE - 1) * INT_SIZE)

#define SCALE_MAX 28

typedef struct {
  unsigned int bits[4];
} s21_decimal;

typedef struct {
  unsigned int bits[8];
} s21_big_decimal;

enum ArithmeticStatus { OK, TOO_LARGE, TOO_SMALL, DIVISION_BY_ZERO };

enum DecimalElem { LOW_BITS, MID_BITS, HIGH_BITS, INFO_BITS };

enum comparison { EQUAL, MORE, LESS };

enum Operation { ADD, SUB, MUL, DIV };

// Helper functions for decimal

// void print_int_binary(unsigned int num);
// void print_decimal(s21_decimal num);

int get_decimal_element(unsigned int index);
int get_bit(unsigned int num, unsigned int index);
int get_mantissa_bit(s21_decimal dec, unsigned int index);
void set_bit(unsigned int *num, unsigned int index, unsigned int bit);
void set_mantissa_bit(s21_decimal *dec, unsigned int index, unsigned int bit);

int get_scale(s21_decimal dec);
void set_scale(s21_decimal *dec, unsigned int scale);
int get_sign(s21_decimal dec);
void set_sign(s21_decimal *dec, unsigned int sign);
void set_mantissa_to_zero(s21_decimal *dec);
void set_decimal_to_zero(s21_decimal *dec);
s21_decimal abs_dec(s21_decimal value);
void div_by_ten(s21_decimal *value);
s21_decimal *s21_reset(s21_decimal *value);
int is_zero(s21_decimal dec);

// Helper functions for big decimal

// void print_big_decimal(s21_big_decimal big_dec);

int get_big_decimal_element(unsigned int index);
int get_big_mantissa_bit(s21_big_decimal big_dec, unsigned int index);
void set_big_mantissa_bit(s21_big_decimal *big_dec, unsigned int index,
                          unsigned int bit);

int get_big_scale(s21_big_decimal big_dec);
void set_big_scale(s21_big_decimal *big_dec, unsigned int scale);
int get_big_sign(s21_big_decimal big_dec);
void set_big_sign(s21_big_decimal *big_dec, unsigned int sign);
void set_big_mantissa_to_zero(s21_big_decimal *big_dec);
void set_big_decimal_to_zero(s21_big_decimal *big_dec);
int is_big_zero(s21_big_decimal dec);

void dec_to_big_dec(s21_decimal dec, s21_big_decimal *big_dec);
int big_dec_to_dec(s21_big_decimal big_dec, s21_decimal *dec);
int get_overflow(s21_big_decimal big_dec, int big_scale);

s21_big_decimal copy_big_decimal(s21_big_decimal big_dec);
void shift_left(s21_big_decimal *big_dec, unsigned int shift);
int normalize(s21_big_decimal *first, s21_big_decimal *second);
int compare_big_mantissas(s21_big_decimal first, s21_big_decimal second);
void multiply_by_ten(s21_big_decimal *big_dec);
void multiply_by_ten_times_scale(s21_big_decimal *big_dec, unsigned int scale);
s21_big_decimal copy_big_decimal(s21_big_decimal big_dec);
int is_even(s21_big_decimal big_dec);
int get_most_significant_bit_index(s21_big_decimal dec);

void bank_round(s21_big_decimal *big_dec, s21_big_decimal fraction);
int compare_big_mantissas(s21_big_decimal first, s21_big_decimal second);

// Converters

int s21_from_int_to_decimal(int src, s21_decimal *dst);
int s21_from_decimal_to_int(s21_decimal src, int *dst);
int s21_from_float_to_decimal(float src, s21_decimal *dst);
int s21_from_decimal_to_float(s21_decimal src, float *dst);

int overflow_checker(s21_decimal src);

// Arithmetics

int arithmetic_manager(s21_decimal value_1, s21_decimal value_2,
                       s21_decimal *result, int operation);
int add_sub_manager(s21_big_decimal big_value_1, s21_big_decimal big_value_2,
                    s21_big_decimal *big_result, int operation);
int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int big_bit_add(s21_big_decimal big_value_1, s21_big_decimal big_value_2,
                s21_big_decimal *big_result);
int big_bit_sub(s21_big_decimal big_value_1, s21_big_decimal big_value_2,
                s21_big_decimal *big_result);

int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
void big_bit_mul(s21_big_decimal big_value_1, s21_big_decimal big_value_2,
                 s21_big_decimal *big_result);
void mul_manager(s21_big_decimal big_value_1, s21_big_decimal big_value_2,
                 s21_big_decimal *big_result);
int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
s21_big_decimal divide_with_remainder(s21_big_decimal value_1,
                                      s21_big_decimal value_2,
                                      s21_big_decimal *remainder);
int div_manager(s21_big_decimal big_value_1, s21_big_decimal big_value_2,
                s21_big_decimal *big_result);
void big_bit_div(s21_big_decimal big_value_1, s21_big_decimal big_value_2,
                 s21_big_decimal *big_result);

// Comparisons

s21_decimal check_minus_null(s21_decimal value);
void normalizator(s21_decimal *value1, s21_decimal *value2);
int comparison_of_mantiss(s21_decimal value1, s21_decimal value2);

int s21_is_less(s21_decimal, s21_decimal);              // <
int s21_is_less_or_equal(s21_decimal, s21_decimal);     // <=
int s21_is_greater(s21_decimal, s21_decimal);           // >
int s21_is_greater_or_equal(s21_decimal, s21_decimal);  // >=
int s21_is_equal(s21_decimal, s21_decimal);             // ==
int s21_is_not_equal(s21_decimal, s21_decimal);         // !=

// Other functions

int s21_floor(s21_decimal value, s21_decimal *result);
int s21_round(s21_decimal value, s21_decimal *result);
int s21_truncate(s21_decimal value, s21_decimal *result);
int s21_negate(s21_decimal value, s21_decimal *result);