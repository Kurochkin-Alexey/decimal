#include "test_suite.h"

int main(void) {
  int failed = 0;
  Suite *s21_decimal_test[] = {test_s21_add_suite(),
                               test_s21_sub_suite(),
                               test_s21_mul_suite(),
                               test_s21_div_suite(),
                               test_s21_is_equal_suite(),
                               test_s21_is_less_suite(),
                               test_s21_is_less_or_equal_suite(),
                               test_s21_is_greater_suite(),
                               test_s21_is_greater_or_equal_suite(),
                               test_s21_is_not_equal_suite(),
                               test_s21_converters_suite(),
                               test_s21_other_suite(),
                               NULL};

  for (int i = 0; s21_decimal_test[i] != NULL; i++) {
    SRunner *sr = srunner_create(s21_decimal_test[i]);

    srunner_set_fork_status(sr, CK_NOFORK);
    srunner_run_all(sr, CK_NORMAL);

    failed += srunner_ntests_failed(sr);
    srunner_free(sr);
  }
  printf("========= FAILED: %d =========\n", failed);

  return failed == 0 ? 0 : 1;
}