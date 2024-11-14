#include "test_compare.h"

START_TEST(is_greater_or_equal_test_1) {
  s21_decimal q1 = {{0, 0, 0, 0}};
  s21_decimal q2 = {{0, 0, 0, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_2) {
  s21_decimal q1 = {{0, 0, 0, 0}};
  s21_decimal q2 = {{1, 0, 0, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_3) {
  s21_decimal q1 = {{1, 0, 0, 0}};
  s21_decimal q2 = {{2, 0, 0, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_4) {
  s21_decimal q1 = {{10600, 0, 0, 0}};
  s21_decimal q2 = {{10700, 0, 0, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_5) {
  s21_decimal q1 = {{1073741823, 0, 0, 0}};
  s21_decimal q2 = {{2147483647, 0, 0, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_6) {
  s21_decimal q1 = {{4294967293, 0, 0, 0}};
  s21_decimal q2 = {{4294967294, 0, 0, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_7) {
  s21_decimal q1 = {{0, 1, 0, 0}};
  s21_decimal q2 = {{0, 2, 0, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_8) {
  s21_decimal q1 = {{0, 10600, 0, 0}};
  s21_decimal q2 = {{0, 10700, 0, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_9) {
  s21_decimal q1 = {{0, 1073741823, 0, 0}};
  s21_decimal q2 = {{0, 2147483647, 0, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_10) {
  s21_decimal q1 = {{0, 4294967293, 0, 0}};
  s21_decimal q2 = {{0, 4294967294, 0, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_11) {
  s21_decimal q1 = {{0, 0, 1, 0}};
  s21_decimal q2 = {{0, 2, 2, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_12) {
  s21_decimal q1 = {{0, 0, 10600, 0}};
  s21_decimal q2 = {{0, 0, 10700, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_13) {
  s21_decimal q1 = {{0, 0, 1073741823, 0}};
  s21_decimal q2 = {{0, 0, 2147483647, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_14) {
  s21_decimal q1 = {{0, 0, 4294967293, 0}};
  s21_decimal q2 = {{0, 0, 4294967294, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_15) {
  s21_decimal q1 = {{0, 1, 0, 0}};
  s21_decimal q2 = {{1, 1, 0, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_16) {
  s21_decimal q1 = {{1, 2, 0, 0}};
  s21_decimal q2 = {{2, 2, 0, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_17) {
  s21_decimal q1 = {{10600, 10700, 0, 0}};
  s21_decimal q2 = {{10700, 10700, 0, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_18) {
  s21_decimal q1 = {{1073741823, 2147483647, 0, 0}};
  s21_decimal q2 = {{2147483647, 2147483647, 0, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_19) {
  s21_decimal q1 = {{4294967293, 4294967294, 0, 0}};
  s21_decimal q2 = {{4294967294, 4294967294, 0, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_20) {
  s21_decimal q1 = {{0, 1, 1, 0}};
  s21_decimal q2 = {{1, 1, 1, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_21) {
  s21_decimal q1 = {{1, 2, 2, 0}};
  s21_decimal q2 = {{2, 2, 2, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_22) {
  s21_decimal q1 = {{10600, 10700, 10700, 0}};
  s21_decimal q2 = {{10700, 10700, 10700, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_23) {
  s21_decimal q1 = {{1073741823, 2147483647, 2147483647, 0}};
  s21_decimal q2 = {{2147483647, 2147483647, 2147483647, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_24) {
  s21_decimal q1 = {{4294967293, 4294967294, 4294967294, 0}};
  s21_decimal q2 = {{4294967294, 4294967294, 4294967294, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_25) {
  s21_decimal q1 = {{0, 1, 1, 0}};
  s21_decimal q2 = {{0, 2, 1, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_26) {
  s21_decimal q1 = {{0, 2, 2, 0}};
  s21_decimal q2 = {{0, 3, 2, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_27) {
  s21_decimal q1 = {{0, 10699, 10700, 0}};
  s21_decimal q2 = {{0, 10700, 10700, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_28) {
  s21_decimal q1 = {{0, 2147483646, 2147483647, 0}};
  s21_decimal q2 = {{0, 2147483647, 2147483647, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_29) {
  s21_decimal q1 = {{0, 4294967293, 4294967294, 0}};
  s21_decimal q2 = {{0, 4294967294, 4294967294, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_30) {
  s21_decimal q1 = {{0, 0, 1, 0}};
  s21_decimal q2 = {{1, 0, 1, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_31) {
  s21_decimal q1 = {{1, 0, 2, 0}};
  s21_decimal q2 = {{2, 0, 2, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_32) {
  s21_decimal q1 = {{10600, 0, 10700, 0}};
  s21_decimal q2 = {{10700, 0, 10700, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_33) {
  s21_decimal q1 = {{1073741823, 0, 2147483647, 0}};
  s21_decimal q2 = {{2147483647, 0, 2147483647, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_34) {
  s21_decimal q1 = {{4294967293, 0, 4294967294, 0}};
  s21_decimal q2 = {{4294967294, 0, 4294967294, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_35) {
  s21_decimal q1 = {{0, 0, 0, 2147483648}};
  s21_decimal q2 = {{0, 0, 0, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_36) {
  s21_decimal q1 = {{0, 0, 0, 2147483648}};
  s21_decimal q2 = {{1, 0, 0, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_37) {
  s21_decimal q1 = {{1, 0, 0, 2147483648}};
  s21_decimal q2 = {{2, 0, 0, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_38) {
  s21_decimal q1 = {{10600, 0, 0, 2147483648}};
  s21_decimal q2 = {{10700, 0, 0, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_39) {
  s21_decimal q1 = {{1073741823, 0, 0, 2147483648}};
  s21_decimal q2 = {{2147483647, 0, 0, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_40) {
  s21_decimal q1 = {{4294967293, 0, 0, 2147483648}};
  s21_decimal q2 = {{4294967294, 0, 0, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_41) {
  s21_decimal q1 = {{0, 1, 0, 2147483648}};
  s21_decimal q2 = {{0, 2, 0, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_42) {
  s21_decimal q1 = {{0, 10600, 0, 2147483648}};
  s21_decimal q2 = {{0, 10700, 0, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_43) {
  s21_decimal q1 = {{0, 1073741823, 0, 2147483648}};
  s21_decimal q2 = {{0, 2147483647, 0, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_44) {
  s21_decimal q1 = {{0, 4294967293, 0, 2147483648}};
  s21_decimal q2 = {{0, 4294967294, 0, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_45) {
  s21_decimal q1 = {{0, 0, 1, 2147483648}};
  s21_decimal q2 = {{0, 2, 2, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_46) {
  s21_decimal q1 = {{0, 0, 10600, 2147483648}};
  s21_decimal q2 = {{0, 0, 10700, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_47) {
  s21_decimal q1 = {{0, 0, 1073741823, 2147483648}};
  s21_decimal q2 = {{0, 0, 2147483647, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_48) {
  s21_decimal q1 = {{0, 0, 4294967293, 2147483648}};
  s21_decimal q2 = {{0, 0, 4294967294, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_49) {
  s21_decimal q1 = {{0, 1, 0, 2147483648}};
  s21_decimal q2 = {{1, 1, 0, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_50) {
  s21_decimal q1 = {{1, 2, 0, 2147483648}};
  s21_decimal q2 = {{2, 2, 0, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_51) {
  s21_decimal q1 = {{10600, 10700, 0, 2147483648}};
  s21_decimal q2 = {{10700, 10700, 0, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_52) {
  s21_decimal q1 = {{1073741823, 2147483647, 0, 2147483648}};
  s21_decimal q2 = {{2147483647, 2147483647, 0, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_53) {
  s21_decimal q1 = {{4294967293, 4294967294, 0, 2147483648}};
  s21_decimal q2 = {{4294967294, 4294967294, 0, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_54) {
  s21_decimal q1 = {{0, 1, 1, 2147483648}};
  s21_decimal q2 = {{1, 1, 1, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_55) {
  s21_decimal q1 = {{1, 2, 2, 2147483648}};
  s21_decimal q2 = {{2, 2, 2, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_56) {
  s21_decimal q1 = {{10600, 10700, 10700, 2147483648}};
  s21_decimal q2 = {{10700, 10700, 10700, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_57) {
  s21_decimal q1 = {{1073741823, 2147483647, 2147483647, 2147483648}};
  s21_decimal q2 = {{2147483647, 2147483647, 2147483647, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_58) {
  s21_decimal q1 = {{4294967293, 4294967294, 4294967294, 2147483648}};
  s21_decimal q2 = {{4294967294, 4294967294, 4294967294, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_59) {
  s21_decimal q1 = {{0, 1, 1, 2147483648}};
  s21_decimal q2 = {{0, 2, 1, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_60) {
  s21_decimal q1 = {{0, 2, 2, 2147483648}};
  s21_decimal q2 = {{0, 3, 2, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_61) {
  s21_decimal q1 = {{0, 10699, 10700, 2147483648}};
  s21_decimal q2 = {{0, 10700, 10700, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_62) {
  s21_decimal q1 = {{0, 2147483646, 2147483647, 2147483648}};
  s21_decimal q2 = {{0, 2147483647, 2147483647, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_63) {
  s21_decimal q1 = {{0, 4294967293, 4294967294, 2147483648}};
  s21_decimal q2 = {{0, 4294967294, 4294967294, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_64) {
  s21_decimal q1 = {{0, 0, 1, 2147483648}};
  s21_decimal q2 = {{1, 0, 1, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_65) {
  s21_decimal q1 = {{1, 0, 2, 2147483648}};
  s21_decimal q2 = {{2, 0, 2, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_66) {
  s21_decimal q1 = {{10600, 0, 10700, 2147483648}};
  s21_decimal q2 = {{10700, 0, 10700, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_67) {
  s21_decimal q1 = {{1073741823, 0, 2147483647, 2147483648}};
  s21_decimal q2 = {{2147483647, 0, 2147483647, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_68) {
  s21_decimal q1 = {{4294967293, 0, 4294967294, 2147483648}};
  s21_decimal q2 = {{4294967294, 0, 4294967294, 0}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_69) {
  s21_decimal q1 = {{0, 0, 0, 2147483648}};
  s21_decimal q2 = {{0, 0, 0, 2147483648}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_70) {
  s21_decimal q1 = {{0, 0, 0, 2147483648}};
  s21_decimal q2 = {{1, 0, 0, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_71) {
  s21_decimal q1 = {{1, 0, 0, 2147483648}};
  s21_decimal q2 = {{2, 0, 0, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_72) {
  s21_decimal q1 = {{10600, 0, 0, 2147483648}};
  s21_decimal q2 = {{10700, 0, 0, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_73) {
  s21_decimal q1 = {{1073741823, 0, 0, 2147483648}};
  s21_decimal q2 = {{2147483647, 0, 0, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_74) {
  s21_decimal q1 = {{4294967293, 0, 0, 2147483648}};
  s21_decimal q2 = {{4294967294, 0, 0, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_75) {
  s21_decimal q1 = {{0, 1, 0, 2147483648}};
  s21_decimal q2 = {{0, 2, 0, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_76) {
  s21_decimal q1 = {{0, 10600, 0, 2147483648}};
  s21_decimal q2 = {{0, 10700, 0, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_77) {
  s21_decimal q1 = {{0, 1073741823, 0, 2147483648}};
  s21_decimal q2 = {{0, 2147483647, 0, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_78) {
  s21_decimal q1 = {{0, 4294967293, 0, 2147483648}};
  s21_decimal q2 = {{0, 4294967294, 0, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_79) {
  s21_decimal q1 = {{0, 0, 1, 2147483648}};
  s21_decimal q2 = {{0, 2, 2, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_80) {
  s21_decimal q1 = {{0, 0, 10600, 2147483648}};
  s21_decimal q2 = {{0, 0, 10700, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_81) {
  s21_decimal q1 = {{0, 0, 1073741823, 2147483648}};
  s21_decimal q2 = {{0, 0, 2147483647, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_82) {
  s21_decimal q1 = {{0, 0, 4294967293, 2147483648}};
  s21_decimal q2 = {{0, 0, 4294967294, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_83) {
  s21_decimal q1 = {{0, 1, 0, 2147483648}};
  s21_decimal q2 = {{1, 1, 0, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_84) {
  s21_decimal q1 = {{1, 2, 0, 2147483648}};
  s21_decimal q2 = {{2, 2, 0, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_85) {
  s21_decimal q1 = {{10600, 10700, 0, 2147483648}};
  s21_decimal q2 = {{10700, 10700, 0, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_86) {
  s21_decimal q1 = {{1073741823, 2147483647, 0, 2147483648}};
  s21_decimal q2 = {{2147483647, 2147483647, 0, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_87) {
  s21_decimal q1 = {{4294967293, 4294967294, 0, 2147483648}};
  s21_decimal q2 = {{4294967294, 4294967294, 0, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_88) {
  s21_decimal q1 = {{0, 1, 1, 2147483648}};
  s21_decimal q2 = {{1, 1, 1, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_89) {
  s21_decimal q1 = {{1, 2, 2, 2147483648}};
  s21_decimal q2 = {{2, 2, 2, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_90) {
  s21_decimal q1 = {{10600, 10700, 10700, 2147483648}};
  s21_decimal q2 = {{10700, 10700, 10700, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_91) {
  s21_decimal q1 = {{1073741823, 2147483647, 2147483647, 2147483648}};
  s21_decimal q2 = {{2147483647, 2147483647, 2147483647, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_92) {
  s21_decimal q1 = {{4294967293, 4294967294, 4294967294, 2147483648}};
  s21_decimal q2 = {{4294967294, 4294967294, 4294967294, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_93) {
  s21_decimal q1 = {{0, 1, 1, 2147483648}};
  s21_decimal q2 = {{0, 2, 1, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_94) {
  s21_decimal q1 = {{0, 2, 2, 2147483648}};
  s21_decimal q2 = {{0, 3, 2, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_95) {
  s21_decimal q1 = {{0, 10699, 10700, 2147483648}};
  s21_decimal q2 = {{0, 10700, 10700, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_96) {
  s21_decimal q1 = {{0, 2147483646, 2147483647, 2147483648}};
  s21_decimal q2 = {{0, 2147483647, 2147483647, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_97) {
  s21_decimal q1 = {{0, 4294967293, 4294967294, 2147483648}};
  s21_decimal q2 = {{0, 4294967294, 4294967294, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_98) {
  s21_decimal q1 = {{0, 0, 1, 2147483648}};
  s21_decimal q2 = {{1, 0, 1, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_99) {
  s21_decimal q1 = {{1, 0, 2, 2147483648}};
  s21_decimal q2 = {{2, 0, 2, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_100) {
  s21_decimal q1 = {{10600, 0, 10700, 2147483648}};
  s21_decimal q2 = {{10700, 0, 10700, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_101) {
  s21_decimal q1 = {{1073741823, 0, 2147483647, 2147483648}};
  s21_decimal q2 = {{2147483647, 0, 2147483647, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_102) {
  s21_decimal q1 = {{4294967293, 0, 4294967294, 2147483648}};
  s21_decimal q2 = {{4294967294, 0, 4294967294, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_103) {
  s21_decimal q1 = {{0, 0, 0, 0}};
  s21_decimal q2 = {{0, 0, 0, 2147483648}};

  ck_assert_int_eq(1, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_104) {
  s21_decimal q1 = {{0, 0, 0, 0}};
  s21_decimal q2 = {{1, 0, 0, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_105) {
  s21_decimal q1 = {{1, 0, 0, 0}};
  s21_decimal q2 = {{2, 0, 0, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_106) {
  s21_decimal q1 = {{10600, 0, 0, 0}};
  s21_decimal q2 = {{10700, 0, 0, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_107) {
  s21_decimal q1 = {{1073741823, 0, 0, 0}};
  s21_decimal q2 = {{2147483647, 0, 0, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_108) {
  s21_decimal q1 = {{4294967293, 0, 0, 0}};
  s21_decimal q2 = {{4294967294, 0, 0, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_109) {
  s21_decimal q1 = {{0, 1, 0, 0}};
  s21_decimal q2 = {{0, 2, 0, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_110) {
  s21_decimal q1 = {{0, 10600, 0, 0}};
  s21_decimal q2 = {{0, 10700, 0, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_111) {
  s21_decimal q1 = {{0, 1073741823, 0, 0}};
  s21_decimal q2 = {{0, 2147483647, 0, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_112) {
  s21_decimal q1 = {{0, 4294967293, 0, 0}};
  s21_decimal q2 = {{0, 4294967294, 0, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_113) {
  s21_decimal q1 = {{0, 0, 1, 0}};
  s21_decimal q2 = {{0, 2, 2, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_114) {
  s21_decimal q1 = {{0, 0, 10600, 0}};
  s21_decimal q2 = {{0, 0, 10700, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_115) {
  s21_decimal q1 = {{0, 0, 1073741823, 0}};
  s21_decimal q2 = {{0, 0, 2147483647, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_116) {
  s21_decimal q1 = {{0, 0, 4294967293, 0}};
  s21_decimal q2 = {{0, 0, 4294967294, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_117) {
  s21_decimal q1 = {{0, 1, 0, 0}};
  s21_decimal q2 = {{1, 1, 0, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_118) {
  s21_decimal q1 = {{1, 2, 0, 0}};
  s21_decimal q2 = {{2, 2, 0, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_119) {
  s21_decimal q1 = {{10600, 10700, 0, 0}};
  s21_decimal q2 = {{10700, 10700, 0, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_120) {
  s21_decimal q1 = {{1073741823, 2147483647, 0, 0}};
  s21_decimal q2 = {{2147483647, 2147483647, 0, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_121) {
  s21_decimal q1 = {{4294967293, 4294967294, 0, 0}};
  s21_decimal q2 = {{4294967294, 4294967294, 0, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_122) {
  s21_decimal q1 = {{0, 1, 1, 0}};
  s21_decimal q2 = {{1, 1, 1, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_123) {
  s21_decimal q1 = {{1, 2, 2, 0}};
  s21_decimal q2 = {{2, 2, 2, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_124) {
  s21_decimal q1 = {{10600, 10700, 10700, 0}};
  s21_decimal q2 = {{10700, 10700, 10700, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_125) {
  s21_decimal q1 = {{1073741823, 2147483647, 2147483647, 0}};
  s21_decimal q2 = {{2147483647, 2147483647, 2147483647, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_126) {
  s21_decimal q1 = {{4294967293, 4294967294, 4294967294, 0}};
  s21_decimal q2 = {{4294967294, 4294967294, 4294967294, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_127) {
  s21_decimal q1 = {{0, 1, 1, 0}};
  s21_decimal q2 = {{0, 2, 1, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_128) {
  s21_decimal q1 = {{0, 2, 2, 0}};
  s21_decimal q2 = {{0, 3, 2, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_129) {
  s21_decimal q1 = {{0, 10699, 10700, 0}};
  s21_decimal q2 = {{0, 10700, 10700, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_130) {
  s21_decimal q1 = {{0, 2147483646, 2147483647, 0}};
  s21_decimal q2 = {{0, 2147483647, 2147483647, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_131) {
  s21_decimal q1 = {{0, 4294967293, 4294967294, 0}};
  s21_decimal q2 = {{0, 4294967294, 4294967294, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_132) {
  s21_decimal q1 = {{0, 0, 1, 0}};
  s21_decimal q2 = {{1, 0, 1, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_133) {
  s21_decimal q1 = {{1, 0, 2, 0}};
  s21_decimal q2 = {{2, 0, 2, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_134) {
  s21_decimal q1 = {{10600, 0, 10700, 0}};
  s21_decimal q2 = {{10700, 0, 10700, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_135) {
  s21_decimal q1 = {{1073741823, 0, 2147483647, 0}};
  s21_decimal q2 = {{2147483647, 0, 2147483647, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

START_TEST(is_greater_or_equal_test_136) {
  s21_decimal q1 = {{4294967293, 0, 4294967294, 0}};
  s21_decimal q2 = {{4294967294, 0, 4294967294, 2147483648}};

  ck_assert_int_eq(0, s21_is_greater_or_equal(q2, q1));
}
END_TEST

Suite *test_s21_is_greater_or_equal_suite() {
  Suite *s1 = suite_create("S21_is_greater_or_equal_suite");
  TCase *tc1_1 = tcase_create("S21_is_greater_or_equal_suite");
  // SRunner *sr = srunner_create(s1);
  // int nf;

  suite_add_tcase(s1, tc1_1);
  tcase_add_test(tc1_1, is_greater_or_equal_test_1);
  tcase_add_test(tc1_1, is_greater_or_equal_test_2);
  tcase_add_test(tc1_1, is_greater_or_equal_test_3);
  tcase_add_test(tc1_1, is_greater_or_equal_test_4);
  tcase_add_test(tc1_1, is_greater_or_equal_test_5);
  tcase_add_test(tc1_1, is_greater_or_equal_test_6);
  tcase_add_test(tc1_1, is_greater_or_equal_test_7);
  tcase_add_test(tc1_1, is_greater_or_equal_test_8);
  tcase_add_test(tc1_1, is_greater_or_equal_test_9);
  tcase_add_test(tc1_1, is_greater_or_equal_test_10);
  tcase_add_test(tc1_1, is_greater_or_equal_test_11);
  tcase_add_test(tc1_1, is_greater_or_equal_test_12);
  tcase_add_test(tc1_1, is_greater_or_equal_test_13);
  tcase_add_test(tc1_1, is_greater_or_equal_test_14);
  tcase_add_test(tc1_1, is_greater_or_equal_test_15);
  tcase_add_test(tc1_1, is_greater_or_equal_test_16);
  tcase_add_test(tc1_1, is_greater_or_equal_test_17);
  tcase_add_test(tc1_1, is_greater_or_equal_test_18);
  tcase_add_test(tc1_1, is_greater_or_equal_test_19);
  tcase_add_test(tc1_1, is_greater_or_equal_test_20);
  tcase_add_test(tc1_1, is_greater_or_equal_test_21);
  tcase_add_test(tc1_1, is_greater_or_equal_test_22);
  tcase_add_test(tc1_1, is_greater_or_equal_test_23);
  tcase_add_test(tc1_1, is_greater_or_equal_test_24);
  tcase_add_test(tc1_1, is_greater_or_equal_test_25);
  tcase_add_test(tc1_1, is_greater_or_equal_test_26);
  tcase_add_test(tc1_1, is_greater_or_equal_test_27);
  tcase_add_test(tc1_1, is_greater_or_equal_test_28);
  tcase_add_test(tc1_1, is_greater_or_equal_test_29);
  tcase_add_test(tc1_1, is_greater_or_equal_test_30);
  tcase_add_test(tc1_1, is_greater_or_equal_test_31);
  tcase_add_test(tc1_1, is_greater_or_equal_test_32);
  tcase_add_test(tc1_1, is_greater_or_equal_test_33);
  tcase_add_test(tc1_1, is_greater_or_equal_test_34);
  tcase_add_test(tc1_1, is_greater_or_equal_test_35);
  tcase_add_test(tc1_1, is_greater_or_equal_test_36);
  tcase_add_test(tc1_1, is_greater_or_equal_test_37);
  tcase_add_test(tc1_1, is_greater_or_equal_test_38);
  tcase_add_test(tc1_1, is_greater_or_equal_test_39);
  tcase_add_test(tc1_1, is_greater_or_equal_test_40);
  tcase_add_test(tc1_1, is_greater_or_equal_test_41);
  tcase_add_test(tc1_1, is_greater_or_equal_test_42);
  tcase_add_test(tc1_1, is_greater_or_equal_test_43);
  tcase_add_test(tc1_1, is_greater_or_equal_test_44);
  tcase_add_test(tc1_1, is_greater_or_equal_test_45);
  tcase_add_test(tc1_1, is_greater_or_equal_test_46);
  tcase_add_test(tc1_1, is_greater_or_equal_test_47);
  tcase_add_test(tc1_1, is_greater_or_equal_test_48);
  tcase_add_test(tc1_1, is_greater_or_equal_test_49);
  tcase_add_test(tc1_1, is_greater_or_equal_test_50);
  tcase_add_test(tc1_1, is_greater_or_equal_test_51);
  tcase_add_test(tc1_1, is_greater_or_equal_test_52);
  tcase_add_test(tc1_1, is_greater_or_equal_test_53);
  tcase_add_test(tc1_1, is_greater_or_equal_test_54);
  tcase_add_test(tc1_1, is_greater_or_equal_test_55);
  tcase_add_test(tc1_1, is_greater_or_equal_test_56);
  tcase_add_test(tc1_1, is_greater_or_equal_test_57);
  tcase_add_test(tc1_1, is_greater_or_equal_test_58);
  tcase_add_test(tc1_1, is_greater_or_equal_test_59);
  tcase_add_test(tc1_1, is_greater_or_equal_test_60);
  tcase_add_test(tc1_1, is_greater_or_equal_test_61);
  tcase_add_test(tc1_1, is_greater_or_equal_test_62);
  tcase_add_test(tc1_1, is_greater_or_equal_test_63);
  tcase_add_test(tc1_1, is_greater_or_equal_test_64);
  tcase_add_test(tc1_1, is_greater_or_equal_test_65);
  tcase_add_test(tc1_1, is_greater_or_equal_test_66);
  tcase_add_test(tc1_1, is_greater_or_equal_test_67);
  tcase_add_test(tc1_1, is_greater_or_equal_test_68);
  tcase_add_test(tc1_1, is_greater_or_equal_test_69);
  tcase_add_test(tc1_1, is_greater_or_equal_test_70);
  tcase_add_test(tc1_1, is_greater_or_equal_test_71);
  tcase_add_test(tc1_1, is_greater_or_equal_test_72);
  tcase_add_test(tc1_1, is_greater_or_equal_test_73);
  tcase_add_test(tc1_1, is_greater_or_equal_test_74);
  tcase_add_test(tc1_1, is_greater_or_equal_test_75);
  tcase_add_test(tc1_1, is_greater_or_equal_test_76);
  tcase_add_test(tc1_1, is_greater_or_equal_test_77);
  tcase_add_test(tc1_1, is_greater_or_equal_test_78);
  tcase_add_test(tc1_1, is_greater_or_equal_test_79);
  tcase_add_test(tc1_1, is_greater_or_equal_test_80);
  tcase_add_test(tc1_1, is_greater_or_equal_test_81);
  tcase_add_test(tc1_1, is_greater_or_equal_test_82);
  tcase_add_test(tc1_1, is_greater_or_equal_test_83);
  tcase_add_test(tc1_1, is_greater_or_equal_test_84);
  tcase_add_test(tc1_1, is_greater_or_equal_test_85);
  tcase_add_test(tc1_1, is_greater_or_equal_test_86);
  tcase_add_test(tc1_1, is_greater_or_equal_test_87);
  tcase_add_test(tc1_1, is_greater_or_equal_test_88);
  tcase_add_test(tc1_1, is_greater_or_equal_test_89);
  tcase_add_test(tc1_1, is_greater_or_equal_test_90);
  tcase_add_test(tc1_1, is_greater_or_equal_test_91);
  tcase_add_test(tc1_1, is_greater_or_equal_test_92);
  tcase_add_test(tc1_1, is_greater_or_equal_test_93);
  tcase_add_test(tc1_1, is_greater_or_equal_test_94);
  tcase_add_test(tc1_1, is_greater_or_equal_test_95);
  tcase_add_test(tc1_1, is_greater_or_equal_test_96);
  tcase_add_test(tc1_1, is_greater_or_equal_test_97);
  tcase_add_test(tc1_1, is_greater_or_equal_test_98);
  tcase_add_test(tc1_1, is_greater_or_equal_test_99);
  tcase_add_test(tc1_1, is_greater_or_equal_test_100);
  tcase_add_test(tc1_1, is_greater_or_equal_test_101);
  tcase_add_test(tc1_1, is_greater_or_equal_test_102);
  tcase_add_test(tc1_1, is_greater_or_equal_test_103);
  tcase_add_test(tc1_1, is_greater_or_equal_test_104);
  tcase_add_test(tc1_1, is_greater_or_equal_test_105);
  tcase_add_test(tc1_1, is_greater_or_equal_test_106);
  tcase_add_test(tc1_1, is_greater_or_equal_test_107);
  tcase_add_test(tc1_1, is_greater_or_equal_test_108);
  tcase_add_test(tc1_1, is_greater_or_equal_test_109);
  tcase_add_test(tc1_1, is_greater_or_equal_test_110);
  tcase_add_test(tc1_1, is_greater_or_equal_test_111);
  tcase_add_test(tc1_1, is_greater_or_equal_test_112);
  tcase_add_test(tc1_1, is_greater_or_equal_test_113);
  tcase_add_test(tc1_1, is_greater_or_equal_test_114);
  tcase_add_test(tc1_1, is_greater_or_equal_test_115);
  tcase_add_test(tc1_1, is_greater_or_equal_test_116);
  tcase_add_test(tc1_1, is_greater_or_equal_test_117);
  tcase_add_test(tc1_1, is_greater_or_equal_test_118);
  tcase_add_test(tc1_1, is_greater_or_equal_test_119);
  tcase_add_test(tc1_1, is_greater_or_equal_test_120);
  tcase_add_test(tc1_1, is_greater_or_equal_test_121);
  tcase_add_test(tc1_1, is_greater_or_equal_test_122);
  tcase_add_test(tc1_1, is_greater_or_equal_test_123);
  tcase_add_test(tc1_1, is_greater_or_equal_test_124);
  tcase_add_test(tc1_1, is_greater_or_equal_test_125);
  tcase_add_test(tc1_1, is_greater_or_equal_test_126);
  tcase_add_test(tc1_1, is_greater_or_equal_test_127);
  tcase_add_test(tc1_1, is_greater_or_equal_test_128);
  tcase_add_test(tc1_1, is_greater_or_equal_test_129);
  tcase_add_test(tc1_1, is_greater_or_equal_test_130);
  tcase_add_test(tc1_1, is_greater_or_equal_test_131);
  tcase_add_test(tc1_1, is_greater_or_equal_test_132);
  tcase_add_test(tc1_1, is_greater_or_equal_test_133);
  tcase_add_test(tc1_1, is_greater_or_equal_test_134);
  tcase_add_test(tc1_1, is_greater_or_equal_test_135);
  tcase_add_test(tc1_1, is_greater_or_equal_test_136);

  // srunner_run_all(sr, CK_ENV);
  // nf = srunner_ntests_failed(sr);
  // srunner_free(sr);

  return s1;
}
