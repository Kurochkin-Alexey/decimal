#include "test_other.h"

START_TEST(floor_test) {
  for (size_t i = 0; i < sizeof(arr1) / sizeof(s21_decimal); ++i) {
    s21_decimal tmp;
    int ret = s21_floor(arr1[i], &tmp);
    ck_assert_int_eq(tmp.bits[0], result1[i].bits[0]);
    ck_assert_int_eq(tmp.bits[1], result1[i].bits[1]);
    ck_assert_int_eq(tmp.bits[2], result1[i].bits[2]);
    ck_assert_int_eq(tmp.bits[3], result1[i].bits[3]);
    ck_assert_int_eq(ret, 0);
  }
}
END_TEST

START_TEST(test_negate) {
  for (size_t i = 0; i < sizeof(arr2) / sizeof(s21_decimal); ++i) {
    s21_decimal value = arr2[i];
    s21_decimal tmp;
    int ret = s21_negate(value, &tmp);
    ck_assert_int_eq(result2[i].bits[0], tmp.bits[0]);
    ck_assert_int_eq(result2[i].bits[1], tmp.bits[1]);
    ck_assert_int_eq(result2[i].bits[2], tmp.bits[2]);
    ck_assert_int_eq(result2[i].bits[3], tmp.bits[3]);
    ck_assert_int_eq(ret, 0);
  }
}
END_TEST

START_TEST(test_round) {
  for (size_t i = 0; i < sizeof(arr) / sizeof(s21_decimal); ++i) {
    s21_decimal tmp;
    int ret = s21_round(arr[i], &tmp);
    ck_assert_int_eq(tmp.bits[0], result[i].bits[0]);
    ck_assert_int_eq(tmp.bits[1], result[i].bits[1]);
    ck_assert_int_eq(tmp.bits[2], result[i].bits[2]);
    ck_assert_int_eq(tmp.bits[3], result[i].bits[3]);
    ck_assert_int_eq(ret, 0);
  }
}
END_TEST

START_TEST(test_truncate) {
  for (size_t i = 0; i < sizeof(arr3) / sizeof(s21_decimal); ++i) {
    s21_decimal tmp;
    int ret = s21_truncate(arr3[i], &tmp);
    ck_assert_int_eq(tmp.bits[0], result3[i].bits[0]);
    ck_assert_int_eq(tmp.bits[1], result3[i].bits[1]);
    ck_assert_int_eq(tmp.bits[2], result3[i].bits[2]);
    ck_assert_int_eq(tmp.bits[3], result3[i].bits[3]);
    ck_assert_int_eq(ret, 0);
  }
}
END_TEST

Suite *test_s21_other_suite(void) {
  Suite *s1 = suite_create("S21_other_suite");
  TCase *tc1_1 = tcase_create("S21_other_suite");
  // SRunner *sr = srunner_create(s1);
  // int nf;

  suite_add_tcase(s1, tc1_1);
  tcase_add_test(tc1_1, floor_test);
  tcase_add_test(tc1_1, test_negate);
  tcase_add_test(tc1_1, test_round);
  tcase_add_test(tc1_1, test_truncate);

  // srunner_run_all(sr, CK_ENV);
  // nf = srunner_ntests_failed(sr);
  // srunner_free(sr);

  return s1;
}
