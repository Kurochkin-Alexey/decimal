#include "../test_suite.h"

START_TEST(s21_add_1) {
  // 5328717097.5
  s21_decimal dec_1 = {{0x6829b39f, 0xc, 0x0, 0x10000}};
  // -1430364955005375560888676
  s21_decimal dec_2 = {{0xdcd53164, 0x3d55530f, 0x12ee4, 0x80000000}};
  // -1430364955005370232171578.5
  s21_decimal dec_check = {{0x382a3a49, 0x65553e92, 0xbd4ea, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_2) {
  // 63.334259
  s21_decimal dec_1 = {{0x3c66773, 0x0, 0x0, 0x60000}};
  // 738118.7
  s21_decimal dec_2 = {{0x70a0c3, 0x0, 0x0, 0x10000}};
  // 738182.034259
  s21_decimal dec_check = {{0xdf13f353, 0xab, 0x0, 0x60000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_3) {
  // 6255.163
  s21_decimal dec_1 = {{0x5f723b, 0x0, 0x0, 0x30000}};
  // 2323862261617824236965634
  s21_decimal dec_2 = {{0x31260f02, 0xd35c7f77, 0x1ec18, 0x0}};
  // 2323862261617824236971889.163
  s21_decimal dec_check = {{0xfd0a120b, 0xa151e997, 0x78240f9, 0x30000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_4) {
  // 81.9955
  s21_decimal dec_1 = {{0xc82f3, 0x0, 0x0, 0x40000}};
  // -8.519532474431579359022225
  s21_decimal dec_2 = {{0x381c0c91, 0xc7e6e5ed, 0x70c14, 0x80180000}};
  // 73.475967525568420640977775
  s21_decimal dec_check = {{0xf013f36f, 0x2e4b3035, 0x3cc724, 0x180000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_5) {
  // -7148.499
  s21_decimal dec_1 = {{0x6d13d3, 0x0, 0x0, 0x80030000}};
  // -3022982524457039637102532
  s21_decimal dec_2 = {{0x39ddbfc4, 0x360569d4, 0x28024, 0x80000000}};
  // -3022982524457039637109680.499
  s21_decimal dec_check = {{0xaa22973, 0x5256502, 0x9c48d73, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_6) {
  // -78.713105761038571
  s21_decimal dec_1 = {{0x140df0eb, 0x117a527, 0x0, 0x800f0000}};
  // -755404956106963573978
  s21_decimal dec_2 = {{0xb51c5cda, 0xf3598545, 0x28, 0x80000000}};
  // -755404956106963574056.71310576
  s21_decimal dec_check = {{0xe16844f0, 0x96622624, 0xf415a228, 0x80080000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_7) {
  // -8475
  s21_decimal dec_1 = {{0x211b, 0x0, 0x0, 0x80000000}};
  // -628270462792733325
  s21_decimal dec_2 = {{0x3da1928d, 0x8b810a8, 0x0, 0x80000000}};
  // -628270462792741800
  s21_decimal dec_check = {{0x3da1b3a8, 0x8b810a8, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_8) {
  // -687.545978
  s21_decimal dec_1 = {{0x28fb1e7a, 0x0, 0x0, 0x80060000}};
  // 6487181789964983
  s21_decimal dec_2 = {{0xb62f2ab7, 0x170c0e, 0x0, 0x0}};
  // 6487181789964295.454022
  s21_decimal dec_check = {{0xc8bbd46, 0xabbb7b69, 0x15f, 0x60000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_9) {
  // 6145.9505935408351152792633
  s21_decimal dec_1 = {{0x34896439, 0x7e250bbb, 0x32d68e, 0x160000}};
  // 8956
  s21_decimal dec_2 = {{0x22fc, 0x0, 0x0, 0x0}};
  // 15101.9505935408351152792633
  s21_decimal dec_check = {{0x2b896439, 0xd2366b2f, 0x7ceb9f, 0x160000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_10) {
  // -4728934868906743602
  s21_decimal dec_1 = {{0x53251732, 0x41a08d35, 0x0, 0x80000000}};
  // 6.6181654908
  s21_decimal dec_2 = {{0x68bbe97c, 0xf, 0x0, 0xa0000}};
  // -4728934868906743595.3818345092
  s21_decimal dec_check = {{0x7129e84, 0x34a06a96, 0x98ccd519, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_11) {
  // 495502004603036241237
  s21_decimal dec_1 = {{0x81f20d55, 0xdc78bfe7, 0x1a, 0x0}};
  // 778529614553928053.79147
  s21_decimal dec_2 = {{0x27c5c4b, 0x6ae11903, 0x107c, 0x50000}};
  // 496280534217590169290.79147
  s21_decimal dec_check = {{0xfa142f6b, 0x2ab3b9aa, 0x290d26, 0x50000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_13) {
  // 43
  s21_decimal dec_1 = {{0x2b, 0x0, 0x0, 0x0}};
  // -5128338852959
  s21_decimal dec_2 = {{0x8d0cc5f, 0x4aa, 0x0, 0x80000000}};
  // -5128338852916
  s21_decimal dec_check = {{0x8d0cc34, 0x4aa, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_14) {
  // -54921179536648440616.039
  s21_decimal dec_1 = {{0x96fb9467, 0x4879cbb3, 0xba1, 0x80030000}};
  // 2883780528299919476
  s21_decimal dec_2 = {{0x8f814874, 0x28053f1c, 0x0, 0x0}};
  // -52037399008348521140.039
  s21_decimal dec_check = {{0x5f88f47, 0xf3fb4423, 0xb04, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_15) {
  // -61265.44824071419325852301915
  s21_decimal dec_1 = {{0x27663a5b, 0x6786f09e, 0x13cbc254, 0x80170000}};
  // 2
  s21_decimal dec_2 = {{0x2, 0x0, 0x0, 0x0}};
  // -61263.44824071419325852301915
  s21_decimal dec_check = {{0x3a663a5b, 0x61f72e08, 0x13cb97fa, 0x80170000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_16) {
  // 1967339578852197669
  s21_decimal dec_1 = {{0x6e0d4525, 0x1b4d64ec, 0x0, 0x0}};
  // -8693754117065.491703
  s21_decimal dec_2 = {{0xd84744f7, 0x78a66b4e, 0x0, 0x80060000}};
  // 1967330885098080603.508297
  s21_decimal dec_check = {{0x24088e49, 0x389236f3, 0x1a099, 0x60000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_17) {
  // 82
  s21_decimal dec_1 = {{0x52, 0x0, 0x0, 0x0}};
  // -12446035664190100608053310
  s21_decimal dec_2 = {{0xeb7ef03e, 0xf1ff01cd, 0xa4b8c, 0x80000000}};
  // -12446035664190100608053228
  s21_decimal dec_check = {{0xeb7eefec, 0xf1ff01cd, 0xa4b8c, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_18) {
  // 6726
  s21_decimal dec_1 = {{0x1a46, 0x0, 0x0, 0x0}};
  // 3
  s21_decimal dec_2 = {{0x3, 0x0, 0x0, 0x0}};
  // 6729
  s21_decimal dec_check = {{0x1a49, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_19) {
  // -3493097.682892617
  s21_decimal dec_1 = {{0x2e8df749, 0xc68f4, 0x0, 0x80090000}};
  // 1128244240496
  s21_decimal dec_2 = {{0xb098e070, 0x106, 0x0, 0x0}};
  // 1128240747398.317107383
  s21_decimal dec_check = {{0x45ea68b7, 0x297c5615, 0x3d, 0x90000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_20) {
  // 12194820789
  s21_decimal dec_1 = {{0xd6de32b5, 0x2, 0x0, 0x0}};
  // 0.826
  s21_decimal dec_2 = {{0x33a, 0x0, 0x0, 0x30000}};
  // 12194820789.826
  s21_decimal dec_check = {{0x53f61642, 0xb17, 0x0, 0x30000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_22) {
  // 75664846
  s21_decimal dec_1 = {{0x4828dce, 0x0, 0x0, 0x0}};
  // 0.98712939752468
  s21_decimal dec_2 = {{0x65b56c14, 0x59c7, 0x0, 0xe0000}};
  // 75664846.98712939752468
  s21_decimal dec_check = {{0x7d54ec14, 0x2e11b086, 0x19a, 0xe0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_23) {
  // 940
  s21_decimal dec_1 = {{0x3ac, 0x0, 0x0, 0x0}};
  // 75378
  s21_decimal dec_2 = {{0x12672, 0x0, 0x0, 0x0}};
  // 76318
  s21_decimal dec_check = {{0x12a1e, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_24) {
  // 598266131788.386674803
  s21_decimal dec_1 = {{0x99d22873, 0x6e9c451c, 0x20, 0x90000}};
  // -4612825705258177349440383038
  s21_decimal dec_2 = {{0x6276283e, 0x8c014b61, 0xee7a3d6, 0x80000000}};
  // -4612825705258176751174251249.6
  s21_decimal dec_check = {{0xe6367d70, 0x780cec5c, 0x950c6661, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_25) {
  // -64056755.481
  s21_decimal dec_1 = {{0xea148519, 0xe, 0x0, 0x80030000}};
  // 25390.5
  s21_decimal dec_2 = {{0x3dfd1, 0x0, 0x0, 0x10000}};
  // -64031364.981
  s21_decimal dec_check = {{0xe8911775, 0xe, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_26) {
  // -6793868
  s21_decimal dec_1 = {{0x67aa8c, 0x0, 0x0, 0x80000000}};
  // 45776734983321265679665
  s21_decimal dec_2 = {{0x4d20ad31, 0x8fd08bcb, 0x9b1, 0x0}};
  // 45776734983321258885797
  s21_decimal dec_check = {{0x4cb902a5, 0x8fd08bcb, 0x9b1, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_27) {
  // 0.7
  s21_decimal dec_1 = {{0x7, 0x0, 0x0, 0x10000}};
  // -1132141.0
  s21_decimal dec_2 = {{0xacc042, 0x0, 0x0, 0x80010000}};
  // -1132140.3
  s21_decimal dec_check = {{0xacc03b, 0x0, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_28) {
  // -7
  s21_decimal dec_1 = {{0x7, 0x0, 0x0, 0x80000000}};
  // 18861198.456925
  s21_decimal dec_2 = {{0x7708b85d, 0x1127, 0x0, 0x60000}};
  // 18861191.456925
  s21_decimal dec_check = {{0x769de89d, 0x1127, 0x0, 0x60000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_29) {
  // 74139332105732282
  s21_decimal dec_1 = {{0x6a0c00ba, 0x1076554, 0x0, 0x0}};
  // -26457174703678.2998
  s21_decimal dec_2 = {{0x27bb6196, 0x3abf29a, 0x0, 0x80040000}};
  // 74112874931028603.7002
  s21_decimal dec_check = {{0x4d21000a, 0x2d3a3ed4, 0x28, 0x40000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_30) {
  // 77
  s21_decimal dec_1 = {{0x4d, 0x0, 0x0, 0x0}};
  // -80448208296535574719271
  s21_decimal dec_2 = {{0xf3e02b27, 0x1b2a0cd2, 0x1109, 0x80000000}};
  // -80448208296535574719194
  s21_decimal dec_check = {{0xf3e02ada, 0x1b2a0cd2, 0x1109, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_31) {
  // 77881
  s21_decimal dec_1 = {{0x13039, 0x0, 0x0, 0x0}};
  // 0.7
  s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x10000}};
  // 77881.7
  s21_decimal dec_check = {{0xbe241, 0x0, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_33) {
  // -854398010463
  s21_decimal dec_1 = {{0xee17045f, 0xc6, 0x0, 0x80000000}};
  // 7622062058764737531.84
  s21_decimal dec_2 = {{0x3178ee60, 0x51bc69e7, 0x29, 0x20000}};
  // 7622061204366727068.84
  s21_decimal dec_check = {{0x307b3944, 0x51bc1c32, 0x29, 0x20000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_34) {
  // 62743341669
  s21_decimal dec_1 = {{0x9bcb6a65, 0xe, 0x0, 0x0}};
  // 0.55615
  s21_decimal dec_2 = {{0xd93f, 0x0, 0x0, 0x50000}};
  // 62743341669.55615
  s21_decimal dec_check = {{0x4339365f, 0x164a79, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_36) {
  // -5571400
  s21_decimal dec_1 = {{0x550348, 0x0, 0x0, 0x80000000}};
  // -430571806405956714
  s21_decimal dec_2 = {{0xd320146a, 0x5f9b2c6, 0x0, 0x80000000}};
  // -430571806411528114
  s21_decimal dec_check = {{0xd37517b2, 0x5f9b2c6, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_37) {
  // 281113066569.4337889519434
  s21_decimal dec_1 = {{0xb28cc74a, 0xb2e0e867, 0x25347, 0xd0000}};
  // -61326534853
  s21_decimal dec_2 = {{0x4758a8c5, 0xe, 0x0, 0x80000000}};
  // 219786531716.4337889519434
  s21_decimal dec_check = {{0x1b57a74a, 0x84807371, 0x1d16a, 0xd0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_38) {
  // -2729456
  s21_decimal dec_1 = {{0x29a5f0, 0x0, 0x0, 0x80000000}};
  // -416344670
  s21_decimal dec_2 = {{0x18d0ea5e, 0x0, 0x0, 0x80000000}};
  // -419074126
  s21_decimal dec_check = {{0x18fa904e, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_39) {
  // -358747922511086.52596737
  s21_decimal dec_1 = {{0x7b6dbe01, 0xc6c12796, 0x798, 0x80080000}};
  // 489000376070023553221317
  s21_decimal dec_2 = {{0xe43002c5, 0xc37500a7, 0x678c, 0x0}};
  // 489000375711275630710230.47403
  s21_decimal dec_check = {{0xfbf562eb, 0x76435114, 0x9e0129bc, 0x50000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_40) {
  // -4714693.333486522856208661868
  s21_decimal dec_1 = {{0xd1a0fd6c, 0xbd0b1a00, 0xf3be725, 0x80150000}};
  // 668057.321220840
  s21_decimal dec_2 = {{0x37522ae8, 0x25f98, 0x0, 0x90000}};
  // -4046636.012265682856208661868
  s21_decimal dec_check = {{0xe76a7d6c, 0xc9af00cd, 0xd134c81, 0x80150000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_41) {
  // 63596644388859724945
  s21_decimal dec_1 = {{0x48d2c491, 0x7294ab1f, 0x3, 0x0}};
  // 34
  s21_decimal dec_2 = {{0x22, 0x0, 0x0, 0x0}};
  // 63596644388859724979
  s21_decimal dec_check = {{0x48d2c4b3, 0x7294ab1f, 0x3, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_42) {
  // 59.4547579151066
  s21_decimal dec_1 = {{0xe541e2da, 0x21cbc, 0x0, 0xd0000}};
  // 62598865199524791098
  s21_decimal dec_2 = {{0x683cc33a, 0x64bbd83c, 0x3, 0x0}};
  // 62598865199524791157.454757915
  s21_decimal dec_check = {{0x98b7601b, 0x38fc5fd9, 0xca449152, 0x90000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_43) {
  // -39793806863
  s21_decimal dec_1 = {{0x43e54e0f, 0x9, 0x0, 0x80000000}};
  // -53.8981800759126917
  s21_decimal dec_2 = {{0x96a5eb85, 0x77ad917, 0x0, 0x80100000}};
  // -39793806916.8981800759126917
  s21_decimal dec_check = {{0xf0f4eb85, 0xf49419fd, 0x1492aa9, 0x80100000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_44) {
  // -5185349753738112695447
  s21_decimal dec_1 = {{0x47767c97, 0x192effdd, 0x119, 0x80000000}};
  // -14.231569736083812108
  s21_decimal dec_2 = {{0xdb79af0c, 0xc580b145, 0x0, 0x80120000}};
  // -5185349753738112695461.2315697
  s21_decimal dec_check = {{0x2a625631, 0xcce04dd, 0xa78c3536, 0x80070000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_45) {
  // -7255650032661579826550.9934
  s21_decimal dec_1 = {{0x4475782e, 0xc39c42ce, 0x3c046f, 0x80040000}};
  // 60607796272733
  s21_decimal dec_2 = {{0x5a2ade5d, 0x371f, 0x0, 0x0}};
  // -7255649972053783553817.9934
  s21_decimal dec_check = {{0x19e7675e, 0xbb330a1c, 0x3c046f, 0x80040000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_46) {
  // 29533888767
  s21_decimal dec_1 = {{0xe05b60ff, 0x6, 0x0, 0x0}};
  // -6676759675222149869145109201
  s21_decimal dec_2 = {{0x25732d1, 0x40815265, 0x1592e2db, 0x80000000}};
  // -6676759675222149839611220434
  s21_decimal dec_check = {{0x21fbd1d2, 0x4081525e, 0x1592e2db, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_47) {
  // -7878133141.2470873684
  s21_decimal dec_1 = {{0xaca63e54, 0x454f8384, 0x4, 0x800a0000}};
  // -7877512612.7405670
  s21_decimal dec_2 = {{0x51f5ea66, 0x117dd8f, 0x0, 0x80070000}};
  // -15755645753.9876543684
  s21_decimal dec_check = {{0xd541dcc4, 0x8a88fb5c, 0x8, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_48) {
  // 539922456418100613972
  s21_decimal dec_1 = {{0x1369354, 0x44ede57b, 0x1d, 0x0}};
  // -3188562.25555584902930287849
  s21_decimal dec_2 = {{0x119ecce9, 0x9f76063b, 0x107c06e, 0x80140000}};
  // 539922456418097425409.74444415
  s21_decimal dec_check = {{0x1ad1cf7f, 0x1c6e342d, 0xae7556bd, 0x80000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_49) {
  // -5
  s21_decimal dec_1 = {{0x5, 0x0, 0x0, 0x80000000}};
  // 7.547229199411965744869907182
  s21_decimal dec_2 = {{0x29759aee, 0xb66171ba, 0x1862ebf2, 0x1b0000}};
  // 2.547229199411965744869907182
  s21_decimal dec_check = {{0xa1759aee, 0x974ef089, 0x83b04c3, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_50) {
  // 80244889732806
  s21_decimal dec_1 = {{0x7825c6c6, 0x48fb, 0x0, 0x0}};
  // -468625796976929831
  s21_decimal dec_2 = {{0xf164ec27, 0x680e4ad, 0x0, 0x80000000}};
  // -468545552087197025
  s21_decimal dec_check = {{0x793f2561, 0x6809bb2, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_51) {
  // -76900.87749829649345063479
  s21_decimal dec_1 = {{0x3880aa37, 0x7e03fef7, 0x65c70, 0x80140000}};
  // -478032224376995409862320
  s21_decimal dec_2 = {{0xde6c9eb0, 0x2dc6739a, 0x653a, 0x80000000}};
  // -478032224376995409939220.87750
  s21_decimal dec_check = {{0x4800bb46, 0xf0262fa6, 0x9a75e618, 0x80050000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_52) {
  // -9601254.0759652796546941
  s21_decimal dec_1 = {{0x5a7d3f7d, 0xd9aae4a9, 0x1454, 0x80100000}};
  // 310140985002513565877
  s21_decimal dec_2 = {{0x949288b5, 0xd0121ea9, 0x10, 0x0}};
  // 310140985002503964622.92403472
  s21_decimal dec_check = {{0x8a840510, 0x9521af42, 0x643642d0, 0x80000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_53) {
  // 8370873
  s21_decimal dec_1 = {{0x7fbab9, 0x0, 0x0, 0x0}};
  // -466589638506865
  s21_decimal dec_2 = {{0x5da8b971, 0x1a85c, 0x0, 0x80000000}};
  // -466589630135992
  s21_decimal dec_check = {{0x5d28feb8, 0x1a85c, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_54) {
  // -9495
  s21_decimal dec_1 = {{0x2517, 0x0, 0x0, 0x80000000}};
  // -3008674.0846612352328
  s21_decimal dec_2 = {{0xc3908d48, 0xa1899364, 0x1, 0x800d0000}};
  // -3018169.0846612352328
  s21_decimal dec_check = {{0x60fced48, 0xa2dae7ea, 0x1, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_55) {
  // 91383393140
  s21_decimal dec_1 = {{0x46dfeb74, 0x15, 0x0, 0x0}};
  // 74
  s21_decimal dec_2 = {{0x4a, 0x0, 0x0, 0x0}};
  // 91383393214
  s21_decimal dec_check = {{0x46dfebbe, 0x15, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_56) {
  // -3052892008283.76677045911
  s21_decimal dec_1 = {{0x692b5697, 0xc2bfc5e6, 0x40a5, 0x800b0000}};
  // -70982639
  s21_decimal dec_2 = {{0x43b1bef, 0x0, 0x0, 0x80000000}};
  // -3052962990922.76677045911
  s21_decimal dec_check = {{0x12a5ee97, 0x2541df4f, 0x40a6, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_57) {
  // 83869
  s21_decimal dec_1 = {{0x1479d, 0x0, 0x0, 0x0}};
  // 9443492
  s21_decimal dec_2 = {{0x9018a4, 0x0, 0x0, 0x0}};
  // 9527361
  s21_decimal dec_check = {{0x916041, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_58) {
  // 792895.943208
  s21_decimal dec_1 = {{0x9c47f228, 0xb8, 0x0, 0x60000}};
  // -2915809245432044015.5448
  s21_decimal dec_2 = {{0x77a11d38, 0xa9d1e902, 0x62c, 0x80040000}};
  // -2915809245431251119.601592
  s21_decimal dec_check = {{0x1ea777b8, 0x55ff043e, 0x26972, 0x80060000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_59) {
  // 79228162514264337592515750827
  s21_decimal dec_1 = {{0xc2b6ebab, 0xffffffff, 0xffffffff, 0x0}};
  // -63141774
  s21_decimal dec_2 = {{0x3c3778e, 0x0, 0x0, 0x80000000}};
  // 79228162514264337592452609053
  s21_decimal dec_check = {{0xbef3741d, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_60) {
  // -31549072510298.8
  s21_decimal dec_1 = {{0xe899858c, 0x11eef, 0x0, 0x80010000}};
  // 31870849540.09
  s21_decimal dec_2 = {{0xd110999, 0x2e6, 0x0, 0x20000}};
  // -31517201660758.71
  s21_decimal dec_check = {{0x8ee2ddf, 0xb3279, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_61) {
  // -78
  s21_decimal dec_1 = {{0x4e, 0x0, 0x0, 0x80000000}};
  // -133
  s21_decimal dec_2 = {{0x85, 0x0, 0x0, 0x80000000}};
  // -211
  s21_decimal dec_check = {{0xd3, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_62) {
  // 0.67
  s21_decimal dec_1 = {{0x43, 0x0, 0x0, 0x20000}};
  // -49221780022
  s21_decimal dec_2 = {{0x75d8c236, 0xb, 0x0, 0x80000000}};
  // -49221780021.33
  s21_decimal dec_check = {{0x8abdcd5, 0x47a, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_63) {
  // -11165683
  s21_decimal dec_1 = {{0xaa5ff3, 0x0, 0x0, 0x80000000}};
  // 83139243918.03577630
  s21_decimal dec_2 = {{0x6ee8651e, 0x7360fe2f, 0x0, 0x80000}};
  // 83128078235.03577630
  s21_decimal dec_check = {{0x1e04d21e, 0x735d06ac, 0x0, 0x80000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_64) {
  // -50625884612
  s21_decimal dec_1 = {{0xc989b1c4, 0xb, 0x0, 0x80000000}};
  // 19787813608
  s21_decimal dec_2 = {{0x9b7212e8, 0x4, 0x0, 0x0}};
  // -30838071004
  s21_decimal dec_check = {{0x2e179edc, 0x7, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_65) {
  // 577703586471579579227
  s21_decimal dec_1 = {{0x53a9735b, 0x513f6f17, 0x1f, 0x0}};
  // 0.631299558778900
  s21_decimal dec_2 = {{0xe1f2a814, 0x23e29, 0x0, 0xf0000}};
  // 577703586471579579227.63129956
  s21_decimal dec_check = {{0x1f3d4464, 0x8698e0f4, 0xbaaa8549, 0x80000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_66) {
  // -80683404621486.92182558
  s21_decimal dec_1 = {{0xa3d3861e, 0x62b7866c, 0x1b5, 0x80080000}};
  // -3636344759593716809543
  s21_decimal dec_2 = {{0x94b5ff47, 0x206bc4ab, 0xc5, 0x80000000}};
  // -3636344840277121431029.9218256
  s21_decimal dec_check = {{0xa11d3150, 0xde11853a, 0x757f23b7, 0x80070000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_67) {
  // -1401375636.47899765070270878
  s21_decimal dec_1 = {{0xa39e919e, 0x8c35ab58, 0x73eb48, 0x80110000}};
  // -62790356439399
  s21_decimal dec_2 = {{0x84e41167, 0x391b, 0x0, 0x80000000}};
  // -62791757815035.478997650702709
  s21_decimal dec_check = {{0xb9710175, 0xdcbcccff, 0xcae41feb, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_68) {
  // -22516479221647477390809843706
  s21_decimal dec_1 = {{0x2a0547fa, 0x71163fc9, 0x48c131f0, 0x80000000}};
  // -0.6
  s21_decimal dec_2 = {{0x6, 0x0, 0x0, 0x80010000}};
  // -22516479221647477390809843707
  s21_decimal dec_check = {{0x2a0547fb, 0x71163fc9, 0x48c131f0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_69) {
  // -22355.69268040888609349137
  s21_decimal dec_1 = {{0x4afb1e11, 0x73ee7992, 0x1d966, 0x80140000}};
  // -9
  s21_decimal dec_2 = {{0x9, 0x0, 0x0, 0x80000000}};
  // -22364.69268040888609349137
  s21_decimal dec_check = {{0xc68b1e11, 0x3df0c92a, 0x1d997, 0x80140000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_70) {
  // 4381331889266246375761345
  s21_decimal dec_1 = {{0xcc64e5c1, 0x7a465c6c, 0x39fc8, 0x0}};
  // -6278194550496892
  s21_decimal dec_2 = {{0x14035e7c, 0x164dfc, 0x0, 0x80000000}};
  // 4381331882988051825264453
  s21_decimal dec_check = {{0xb8618745, 0x7a300e70, 0x39fc8, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_71) {
  // 254632676.470013179
  s21_decimal dec_1 = {{0xf533bcfb, 0x388a311, 0x0, 0x90000}};
  // -9604218065.7
  s21_decimal dec_2 = {{0x5c8f6031, 0x16, 0x0, 0x80010000}};
  // -9349585389.229986821
  s21_decimal dec_check = {{0x123c5405, 0x81c06660, 0x0, 0x80090000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_72) {
  // -645315218
  s21_decimal dec_1 = {{0x2676ba92, 0x0, 0x0, 0x80000000}};
  // 753478554678071172873083257
  s21_decimal dec_2 = {{0x1db05979, 0x4b8f9d58, 0x26f434a, 0x0}};
  // 753478554678071172227768039
  s21_decimal dec_check = {{0xf7399ee7, 0x4b8f9d57, 0x26f434a, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_73) {
  // -191182840
  s21_decimal dec_1 = {{0xb6537f8, 0x0, 0x0, 0x80000000}};
  // -840998518999988.607935
  s21_decimal dec_2 = {{0xb7ec9bbf, 0x9732f13a, 0x2d, 0x80060000}};
  // -840998710182828.607935
  s21_decimal dec_check = {{0xf13089bf, 0x97339f1b, 0x2d, 0x80060000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_74) {
  // 3179992525563498745
  s21_decimal dec_1 = {{0x8a9c10f9, 0x2c219a5a, 0x0, 0x0}};
  // -693029.527770706594566603
  s21_decimal dec_2 = {{0xeee111cb, 0x34bb1fa6, 0x92c1, 0x80120000}};
  // 3179992525562805715.4722292934
  s21_decimal dec_check = {{0x519964c6, 0x59f7509a, 0x66c0481a, 0xa0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_75) {
  // 43807209649
  s21_decimal dec_1 = {{0x331cf8b1, 0xa, 0x0, 0x0}};
  // -1580524530543.21063029985
  s21_decimal dec_2 = {{0x95faece1, 0xa67ef1e, 0x2178, 0x800b0000}};
  // -1536717320894.21063029985
  s21_decimal dec_check = {{0xeb0484e1, 0x8fb0a398, 0x208a, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_76) {
  // 3
  s21_decimal dec_1 = {{0x3, 0x0, 0x0, 0x0}};
  // 5908753.80612008431267104742
  s21_decimal dec_2 = {{0x6c8847e6, 0x90febc12, 0x1e8c2ba, 0x140000}};
  // 5908756.80612008431267104742
  s21_decimal dec_check = {{0x95b847e6, 0xd454d69a, 0x1e8c2ca, 0x140000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_77) {
  // 89898873
  s21_decimal dec_1 = {{0x55bbf79, 0x0, 0x0, 0x0}};
  // -0.608947
  s21_decimal dec_2 = {{0x94ab3, 0x0, 0x0, 0x80060000}};
  // 89898872.391053
  s21_decimal dec_check = {{0x365ac58d, 0x51c3, 0x0, 0x60000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_78) {
  // 63.22747
  s21_decimal dec_1 = {{0x607a3b, 0x0, 0x0, 0x50000}};
  // 456240475265442527.43846525
  s21_decimal dec_2 = {{0xf5ae0a7d, 0x9281cc44, 0x25bd44, 0x80000}};
  // 456240475265442590.66593525
  s21_decimal dec_check = {{0x6e8b80f5, 0x9281cc46, 0x25bd44, 0x80000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_79) {
  // -51767753.4261
  s21_decimal dec_1 = {{0x87fc4c35, 0x78, 0x0, 0x80040000}};
  // 6220791083504158720.1
  s21_decimal dec_2 = {{0x15d3d001, 0x5f4ee550, 0x3, 0x10000}};
  // 6220791083452390966.6739
  s21_decimal dec_check = {{0xbb6837b3, 0x4c2fc05c, 0xd2c, 0x40000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_80) {
  // 870324336042718922.94155553
  s21_decimal dec_1 = {{0x4b163d21, 0xadf53171, 0x47fdd5, 0x80000}};
  // -23547600
  s21_decimal dec_2 = {{0x1674ed0, 0x0, 0x0, 0x80000000}};
  // 870324336019171322.94155553
  s21_decimal dec_check = {{0x1c16d21, 0xadecd3cd, 0x47fdd5, 0x80000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_81) {
  // -33214169.61102009363
  s21_decimal dec_1 = {{0xe5715413, 0x2e180b20, 0x0, 0x800b0000}};
  // 7616797173.5884448
  s21_decimal dec_2 = {{0xe29452a0, 0x10e9a5d, 0x0, 0x70000}};
  // 7583583003.97742470637
  s21_decimal dec_check = {{0xdc6a35ed, 0x1c55e841, 0x29, 0xb0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_82) {
  // 4.55431557
  s21_decimal dec_1 = {{0x1b255585, 0x0, 0x0, 0x80000}};
  // 7763
  s21_decimal dec_2 = {{0x1e53, 0x0, 0x0, 0x0}};
  // 7767.55431557
  s21_decimal dec_check = {{0xda3b4885, 0xb4, 0x0, 0x80000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_83) {
  // -405497643198
  s21_decimal dec_1 = {{0x698b00be, 0x5e, 0x0, 0x80000000}};
  // -1087.0
  s21_decimal dec_2 = {{0x2a76, 0x0, 0x0, 0x80010000}};
  // -405497644285.0
  s21_decimal dec_check = {{0x1f6e31e2, 0x3b0, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_85) {
  // -1618952568552473
  s21_decimal dec_1 = {{0xc4c1bc19, 0x5c06d, 0x0, 0x80000000}};
  // -78467894589674.7213472367152
  s21_decimal dec_2 = {{0x7c3b8230, 0xe46a21cc, 0x289123a, 0x800d0000}};
  // -1697420463142147.7213472367152
  s21_decimal dec_check = {{0xf2ed2230, 0xe149e5b2, 0x36d8bba4, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_86) {
  // -3
  s21_decimal dec_1 = {{0x3, 0x0, 0x0, 0x80000000}};
  // -85054.79298
  s21_decimal dec_2 = {{0xfaf75082, 0x1, 0x0, 0x80050000}};
  // -85057.79298
  s21_decimal dec_check = {{0xfafbe462, 0x1, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_87) {
  // -66712258334742089
  s21_decimal dec_1 = {{0xc34d649, 0xed0272, 0x0, 0x80000000}};
  // -46425309425857960073524411
  s21_decimal dec_2 = {{0x844874bb, 0x111fca99, 0x2666f1, 0x80000000}};
  // -46425309492570218408266500
  s21_decimal dec_check = {{0x907d4b04, 0x120ccd0b, 0x2666f1, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_88) {
  // 9618
  s21_decimal dec_1 = {{0x2592, 0x0, 0x0, 0x0}};
  // -6.979
  s21_decimal dec_2 = {{0x1b43, 0x0, 0x0, 0x80030000}};
  // 9611.021
  s21_decimal dec_check = {{0x92a70d, 0x0, 0x0, 0x30000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_89) {
  // -0.1000261171
  s21_decimal dec_1 = {{0x3b9ec633, 0x0, 0x0, 0x800a0000}};
  // 437758420964335377064259085
  s21_decimal dec_2 = {{0x2d11ee0d, 0x8d3a1a2e, 0x16a1af3, 0x0}};
  // 437758420964335377064259084.90
  s21_decimal dec_check = {{0x9b00fd0a, 0x2ab23a09, 0x8d728723, 0x20000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_90) {
  // 86377388623656.4271498413
  s21_decimal dec_1 = {{0x9eb184ad, 0x46b505f7, 0xb6e9, 0xa0000}};
  // 64014482
  s21_decimal dec_2 = {{0x3d0c892, 0x0, 0x0, 0x0}};
  // 86377452638138.4271498413
  s21_decimal dec_check = {{0x17998cad, 0x4f97464a, 0xb6e9, 0xa0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_91) {
  // -63962315534807364.70835
  s21_decimal dec_1 = {{0x1c3d7733, 0xbd8b5534, 0x15a, 0x80050000}};
  // -9831952.9
  s21_decimal dec_2 = {{0x5dc3ca9, 0x0, 0x0, 0x80010000}};
  // -63962315544639317.60835
  s21_decimal dec_check = {{0x73f00c3, 0xbd8b5619, 0x15a, 0x80050000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_92) {
  // -512015087732206
  s21_decimal dec_1 = {{0xcd6c85ee, 0x1d1ac, 0x0, 0x80000000}};
  // 266727043743244208761789371
  s21_decimal dec_2 = {{0x24c8dbbb, 0x3aca4ad, 0xdca1a6, 0x0}};
  // 266727043742732193674057165
  s21_decimal dec_check = {{0x575c55cd, 0x3aad300, 0xdca1a6, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_93) {
  // 388821777450721
  s21_decimal dec_1 = {{0x9fed06e1, 0x161a1, 0x0, 0x0}};
  // -1536647585319166
  s21_decimal dec_2 = {{0xa577c8fe, 0x57592, 0x0, 0x80000000}};
  // -1147825807868445
  s21_decimal dec_check = {{0x58ac21d, 0x413f1, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_94) {
  // 1902174931611.44612380
  s21_decimal dec_1 = {{0xef51f61c, 0x4fcc4a36, 0xa, 0x80000}};
  // -8454840
  s21_decimal dec_2 = {{0x8102b8, 0x0, 0x0, 0x80000000}};
  // 1902166476771.44612380
  s21_decimal dec_check = {{0x59d63e1c, 0x4fc94940, 0xa, 0x80000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_95) {
  // 168312143
  s21_decimal dec_1 = {{0xa083d4f, 0x0, 0x0, 0x0}};
  // -228825258.93
  s21_decimal dec_2 = {{0x53e7a2c5, 0x5, 0x0, 0x80020000}};
  // -60513115.93
  s21_decimal dec_check = {{0x68afafe9, 0x1, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_96) {
  // -24775370970
  s21_decimal dec_1 = {{0xc4ba28da, 0x5, 0x0, 0x80000000}};
  // 9186
  s21_decimal dec_2 = {{0x23e2, 0x0, 0x0, 0x0}};
  // -24775361784
  s21_decimal dec_check = {{0xc4ba04f8, 0x5, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_97) {
  // 771221259085776373
  s21_decimal dec_1 = {{0x270985f5, 0xab3eda6, 0x0, 0x0}};
  // -53958543
  s21_decimal dec_2 = {{0x337578f, 0x0, 0x0, 0x80000000}};
  // 771221259031817830
  s21_decimal dec_check = {{0x23d22e66, 0xab3eda6, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_98) {
  // -56.770
  s21_decimal dec_1 = {{0xddc2, 0x0, 0x0, 0x80030000}};
  // -1476578989175049999250
  s21_decimal dec_2 = {{0x6836d392, 0xba65f67, 0x50, 0x80000000}};
  // -1476578989175049999306.770
  s21_decimal dec_check = {{0x162b5012, 0x81e4abef, 0x138ad, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_99) {
  // -9
  s21_decimal dec_1 = {{0x9, 0x0, 0x0, 0x80000000}};
  // -545027953667247
  s21_decimal dec_2 = {{0x35922caf, 0x1efb3, 0x0, 0x80000000}};
  // -545027953667256
  s21_decimal dec_check = {{0x35922cb8, 0x1efb3, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_100) {
  // -624961262886094446.4
  s21_decimal dec_1 = {{0xf70d4050, 0x56bb1592, 0x0, 0x80010000}};
  // 94.06894
  s21_decimal dec_2 = {{0x8f89ae, 0x0, 0x0, 0x50000}};
  // -624961262886094352.33106
  s21_decimal dec_check = {{0x7510ab52, 0xebfabcd2, 0xd3b, 0x80050000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_102) {
  // 967335223.1983822
  s21_decimal dec_1 = {{0xd3931ace, 0x225ddc, 0x0, 0x70000}};
  // -0.4619868673485878
  s21_decimal dec_2 = {{0xff312c36, 0x1069be, 0x0, 0x80100000}};
  // 967335222.7363953326514122
  s21_decimal dec_check = {{0xade15fca, 0x799a02de, 0x80069, 0x100000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_103) {
  // -0.6838956
  s21_decimal dec_1 = {{0x685aac, 0x0, 0x0, 0x80070000}};
  // 1332719.17950545366800323
  s21_decimal dec_2 = {{0x2df2d7c3, 0xaf65e723, 0x1c38, 0x110000}};
  // 1332718.49560985366800323
  s21_decimal dec_check = {{0xe7cda7c3, 0xae72ef31, 0x1c38, 0x110000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_104) {
  // 8
  s21_decimal dec_1 = {{0x8, 0x0, 0x0, 0x0}};
  // -7275.26304153
  s21_decimal dec_2 = {{0x63f26999, 0xa9, 0x0, 0x80080000}};
  // -7267.26304153
  s21_decimal dec_check = {{0x34436199, 0xa9, 0x0, 0x80080000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_105) {
  // -21165806341401
  s21_decimal dec_1 = {{0xc5e4d19, 0x1340, 0x0, 0x80000000}};
  // 13460916937
  s21_decimal dec_2 = {{0x22554ac9, 0x3, 0x0, 0x0}};
  // -21152345424464
  s21_decimal dec_check = {{0xea090250, 0x133c, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_106) {
  // 1009109716584
  s21_decimal dec_1 = {{0xf3a04e68, 0xea, 0x0, 0x0}};
  // 442915187
  s21_decimal dec_2 = {{0x1a665973, 0x0, 0x0, 0x0}};
  // 1009552631771
  s21_decimal dec_check = {{0xe06a7db, 0xeb, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_107) {
  // -777714568513268.9467
  s21_decimal dec_1 = {{0xa8cbc03b, 0x6bedf8cb, 0x0, 0x80040000}};
  // 2640717
  s21_decimal dec_2 = {{0x284b4d, 0x0, 0x0, 0x0}};
  // -777714565872551.9467
  s21_decimal dec_check = {{0x82ce506b, 0x6bedf8c5, 0x0, 0x80040000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_108) {
  // -716390.0293597639668
  s21_decimal dec_1 = {{0x6e3433f4, 0x636b495c, 0x0, 0x800d0000}};
  // -527301448288853616733285
  s21_decimal dec_2 = {{0x708bac65, 0x119c2fe7, 0x6fa9, 0x80000000}};
  // -527301448288853617449675.02936
  s21_decimal dec_check = {{0xcdf20c58, 0xf298862b, 0xaa615a7e, 0x80050000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_109) {
  // 9423
  s21_decimal dec_1 = {{0x24cf, 0x0, 0x0, 0x0}};
  // -9.3
  s21_decimal dec_2 = {{0x5d, 0x0, 0x0, 0x80010000}};
  // 9413.7
  s21_decimal dec_check = {{0x16fb9, 0x0, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_110) {
  // 22751141821189
  s21_decimal dec_1 = {{0x29b9fb05, 0x14b1, 0x0, 0x0}};
  // -89144356850967582997
  s21_decimal dec_2 = {{0xb8951915, 0xd520603f, 0x4, 0x80000000}};
  // -89144334099825761808
  s21_decimal dec_check = {{0x8edb1e10, 0xd5204b8e, 0x4, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_111) {
  // 954592.372070
  s21_decimal dec_1 = {{0x4223a566, 0xde, 0x0, 0x60000}};
  // -70810.155751812
  s21_decimal dec_2 = {{0xc62e1984, 0x4066, 0x0, 0x80090000}};
  // 883782.216318188
  s21_decimal dec_check = {{0x950ffcec, 0x323cb, 0x0, 0x90000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_112) {
  // -47.5414226698966
  s21_decimal dec_1 = {{0x1a82d6, 0x1b063, 0x0, 0x800d0000}};
  // -60441.0
  s21_decimal dec_2 = {{0x938fa, 0x0, 0x0, 0x80010000}};
  // -60488.5414226698966
  s21_decimal dec_check = {{0x54cc22d6, 0x864fc14, 0x0, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_113) {
  // 555085780577078296
  s21_decimal dec_1 = {{0x932acc18, 0x7b40f93, 0x0, 0x0}};
  // 49064600247599578.8182
  s21_decimal dec_2 = {{0xaf287396, 0x9914c3b2, 0x1a, 0x40000}};
  // 604150380824677874.8182
  s21_decimal dec_check = {{0x66ecdd16, 0x82b53857, 0x147, 0x40000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_114) {
  // 67234
  s21_decimal dec_1 = {{0x106a2, 0x0, 0x0, 0x0}};
  // -84256624
  s21_decimal dec_2 = {{0x505a770, 0x0, 0x0, 0x80000000}};
  // -84189390
  s21_decimal dec_check = {{0x504a0ce, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_115) {
  // -7424032276781545055959268494
  s21_decimal dec_1 = {{0xb83a3c8e, 0x278a38bf, 0x17fd03fc, 0x80000000}};
  // -9431.8141313489329333269545
  s21_decimal dec_2 = {{0x2e9cf429, 0xaf9378e1, 0x4e04a4, 0x80160000}};
  // -7424032276781545055959277925.8
  s21_decimal dec_check = {{0x3247cdfa, 0x8b66377d, 0xefe227d9, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_116) {
  // 1894098765937377625015254
  s21_decimal dec_1 = {{0xc99083d6, 0x4cc2beaf, 0x19117, 0x0}};
  // -717366283.240
  s21_decimal dec_2 = {{0x65ccbe8, 0xa7, 0x0, 0x80030000}};
  // 1894098765937376907648970.760
  s21_decimal dec_check = {{0x56263008, 0xd8b8de04, 0x61ec303, 0x30000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_117) {
  // -450748
  s21_decimal dec_1 = {{0x6e0bc, 0x0, 0x0, 0x80000000}};
  // 0.31819143433
  s21_decimal dec_2 = {{0x68919909, 0x7, 0x0, 0xb0000}};
  // -450747.68180856567
  s21_decimal dec_check = {{0x49c0c6f7, 0xa02343, 0x0, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_118) {
  // -664.29007147
  s21_decimal dec_1 = {{0x777a352b, 0xf, 0x0, 0x80080000}};
  // 49
  s21_decimal dec_2 = {{0x31, 0x0, 0x0, 0x0}};
  // -615.29007147
  s21_decimal dec_check = {{0x536a242b, 0xe, 0x0, 0x80080000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_119) {
  // -879634139221542374
  s21_decimal dec_1 = {{0xd09b45e6, 0xc351696, 0x0, 0x80000000}};
  // 90100863741430713164
  s21_decimal dec_2 = {{0xafd9cb4c, 0xe2669232, 0x4, 0x0}};
  // 89221229602209170790
  s21_decimal dec_check = {{0xdf3e8566, 0xd6317b9b, 0x4, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_120) {
  // -7739412.8
  s21_decimal dec_1 = {{0x49cf0d0, 0x0, 0x0, 0x80010000}};
  // -22851131.297628131
  s21_decimal dec_2 = {{0x9bb5ffe3, 0x512efb, 0x0, 0x80090000}};
  // -30590544.097628131
  s21_decimal dec_check = {{0x126ccfe3, 0x6cadf0, 0x0, 0x80090000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_121) {
  // 284960.0940
  s21_decimal dec_1 = {{0xa9d975ac, 0x0, 0x0, 0x40000}};
  // -55.32144502
  s21_decimal dec_2 = {{0x49bdd376, 0x1, 0x0, 0x80080000}};
  // 284904.77255498
  s21_decimal dec_check = {{0x74c6bb4a, 0x19e9, 0x0, 0x80000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_122) {
  // -768656
  s21_decimal dec_1 = {{0xbba90, 0x0, 0x0, 0x80000000}};
  // 719256993
  s21_decimal dec_2 = {{0x2adefda1, 0x0, 0x0, 0x0}};
  // 718488337
  s21_decimal dec_check = {{0x2ad34311, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_123) {
  // -568548761367325266
  s21_decimal dec_1 = {{0xec9aa52, 0x7e3e416, 0x0, 0x80000000}};
  // -847
  s21_decimal dec_2 = {{0x34f, 0x0, 0x0, 0x80000000}};
  // -568548761367326113
  s21_decimal dec_check = {{0xec9ada1, 0x7e3e416, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_124) {
  // -23033136876928745186184348
  s21_decimal dec_1 = {{0x44e6cc9c, 0xda205958, 0x130d74, 0x80000000}};
  // 83534.7208
  s21_decimal dec_2 = {{0x31ca6308, 0x0, 0x0, 0x40000}};
  // -23033136876928745186100813.279
  s21_decimal dec_check = {{0x20949ddf, 0xe5d00cd, 0x4a6c9074, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_125) {
  // -579633225334659.15568012556400
  s21_decimal dec_1 = {{0x6a2a7870, 0xc359aa1f, 0xbb4a22fa, 0x800e0000}};
  // -38489830495942427196224908205
  s21_decimal dec_2 = {{0x1fc32bad, 0x1d6f5466, 0x7c5e0aa4, 0x80000000}};
  // -38489830495943006829450242864
  s21_decimal dec_check = {{0x80422b30, 0x1d716392, 0x7c5e0aa4, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_126) {
  // 15441969556158784345
  s21_decimal dec_1 = {{0xb3da359, 0xd64ce57f, 0x0, 0x0}};
  // -10.9637
  s21_decimal dec_2 = {{0x1ac45, 0x0, 0x0, 0x80040000}};
  // 15441969556158784334.0363
  s21_decimal dec_check = {{0x17bb184b, 0x1bc4b2a7, 0x20b3, 0x40000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_127) {
  // 24625
  s21_decimal dec_1 = {{0x6031, 0x0, 0x0, 0x0}};
  // 757109912.3
  s21_decimal dec_2 = {{0xc345cdf3, 0x1, 0x0, 0x10000}};
  // 757134537.3
  s21_decimal dec_check = {{0xc3498fdd, 0x1, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_128) {
  // -48376698396594647
  s21_decimal dec_1 = {{0xd355d1d7, 0xabde59, 0x0, 0x80000000}};
  // -387295280.5494270
  s21_decimal dec_2 = {{0x18340dfe, 0xdc26e, 0x0, 0x80070000}};
  // -48376698783889927.5494270
  s21_decimal dec_check = {{0xa3b8f37e, 0xf9b0c20, 0x6671, 0x80070000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_129) {
  // 2563534175112138953
  s21_decimal dec_1 = {{0x52210c9, 0x239380c0, 0x0, 0x0}};
  // -2.395100835074603184994407
  s21_decimal dec_2 = {{0x81bab867, 0xad2ae044, 0x1fb2e, 0x80180000}};
  // 2563534175112138950.6048991649
  s21_decimal dec_check = {{0x6ffea1a1, 0xf2de8c17, 0x52d50ec4, 0xa0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_130) {
  // 1563838287
  s21_decimal dec_1 = {{0x5d36474f, 0x0, 0x0, 0x0}};
  // 4768002990141013451274521
  s21_decimal dec_2 = {{0x2b16f919, 0xf5c3a2bb, 0x3f1a9, 0x0}};
  // 4768002990141015015112808
  s21_decimal dec_check = {{0x884d4068, 0xf5c3a2bb, 0x3f1a9, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_131) {
  // -69948
  s21_decimal dec_1 = {{0x1113c, 0x0, 0x0, 0x80000000}};
  // 9662999845.62782
  s21_decimal dec_2 = {{0x3f538a5e, 0x36ed8, 0x0, 0x50000}};
  // 9662929897.62782
  s21_decimal dec_check = {{0x9e675cde, 0x36ed6, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_132) {
  // -6.048803187
  s21_decimal dec_1 = {{0x68896973, 0x1, 0x0, 0x80090000}};
  // -14789.61184888965555743413243
  s21_decimal dec_2 = {{0x1424d3fb, 0x7be2064f, 0x4c75e36, 0x80170000}};
  // -14795.66065207665555743413243
  s21_decimal dec_check = {{0xdf4f93fb, 0x1c984ead, 0x4c7de4d, 0x80170000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_133) {
  // 6416153646929284
  s21_decimal dec_1 = {{0x2ef31584, 0x16cb75, 0x0, 0x0}};
  // -432206455472.657
  s21_decimal dec_2 = {{0xe83f8211, 0x18916, 0x0, 0x80030000}};
  // 6415721440473811.343
  s21_decimal dec_check = {{0x7d4c898f, 0x590938a8, 0x0, 0x30000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_134) {
  // 54528132908006
  s21_decimal dec_1 = {{0xd1fe03e6, 0x3197, 0x0, 0x0}};
  // 4.4350928884157411138
  s21_decimal dec_2 = {{0xbed06f42, 0x677e26d6, 0x2, 0x130000}};
  // 54528132908010.435092888415741
  s21_decimal dec_check = {{0xe5ffedfd, 0x5ac68da, 0xb0309d48, 0xf0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_135) {
  // -79821420052146.57519
  s21_decimal dec_1 = {{0xcf8b3bef, 0x6ec643dc, 0x0, 0x80050000}};
  // -1.4
  s21_decimal dec_2 = {{0xe, 0x0, 0x0, 0x80010000}};
  // -79821420052147.97519
  s21_decimal dec_check = {{0xcf8d5ecf, 0x6ec643dc, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_136) {
  // 832557
  s21_decimal dec_1 = {{0xcb42d, 0x0, 0x0, 0x0}};
  // -62074366579267
  s21_decimal dec_2 = {{0xd091d243, 0x3874, 0x0, 0x80000000}};
  // -62074365746710
  s21_decimal dec_check = {{0xd0851e16, 0x3874, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_137) {
  // -0.8
  s21_decimal dec_1 = {{0x8, 0x0, 0x0, 0x80010000}};
  // 25892.9231040
  s21_decimal dec_2 = {{0x496284c0, 0x3c, 0x0, 0x70000}};
  // 25892.1231040
  s21_decimal dec_check = {{0x48e872c0, 0x3c, 0x0, 0x70000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_138) {
  // 7713006194891
  s21_decimal dec_1 = {{0xd2fe90cb, 0x703, 0x0, 0x0}};
  // 153.70021955885782
  s21_decimal dec_2 = {{0x1adedad6, 0x369af4, 0x0, 0xe0000}};
  // 7713006195044.70021955885782
  s21_decimal dec_check = {{0x6fcf9ad6, 0x5d84d4c2, 0x27e0142, 0xe0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_140) {
  // -23070999184542639298
  s21_decimal dec_1 = {{0xdffda4c2, 0x402ca785, 0x1, 0x80000000}};
  // 16466322924294697
  s21_decimal dec_2 = {{0x90a8d229, 0x3a8008, 0x0, 0x0}};
  // -23054532861618344601
  s21_decimal dec_check = {{0x4f54d299, 0x3ff2277d, 0x1, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_141) {
  // 51748887
  s21_decimal dec_1 = {{0x315a017, 0x0, 0x0, 0x0}};
  // -9511777297884
  s21_decimal dec_2 = {{0xa21b65dc, 0x8a6, 0x0, 0x80000000}};
  // -9511725548997
  s21_decimal dec_check = {{0x9f05c5c5, 0x8a6, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_142) {
  // 3280.027026
  s21_decimal dec_1 = {{0xc3813d92, 0x0, 0x0, 0x60000}};
  // -74
  s21_decimal dec_2 = {{0x4a, 0x0, 0x0, 0x80000000}};
  // 3206.027026
  s21_decimal dec_check = {{0xbf181712, 0x0, 0x0, 0x60000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_143) {
  // 58047895006775253506.827779
  s21_decimal dec_1 = {{0x3285a603, 0xb198254f, 0x30041e, 0x60000}};
  // -7661691613194574
  s21_decimal dec_2 = {{0x96fba94e, 0x1b3844, 0x0, 0x80000000}};
  // 58040233315162058932.827779
  s21_decimal dec_check = {{0xa6633683, 0x5a438c7d, 0x30027f, 0x60000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_144) {
  // 2189339.167055042019
  s21_decimal dec_1 = {{0x712a55e3, 0x1e62185f, 0x0, 0xc0000}};
  // 2.6542
  s21_decimal dec_2 = {{0x67ae, 0x0, 0x0, 0x40000}};
  // 2189341.821255042019
  s21_decimal dec_check = {{0x6bd043e3, 0x1e621ac9, 0x0, 0xc0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_145) {
  // -520177075799180
  s21_decimal dec_1 = {{0x29d2c48c, 0x1d919, 0x0, 0x80000000}};
  // -5922246294257837053529759
  s21_decimal dec_2 = {{0x654b4e9f, 0x9d6ad5dc, 0x4e615, 0x80000000}};
  // -5922246294778014129328939
  s21_decimal dec_check = {{0x8f1e132b, 0x9d6caef5, 0x4e615, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_146) {
  // -48934838114089.916431
  s21_decimal dec_1 = {{0x3393580f, 0xa71b77ff, 0x2, 0x80060000}};
  // -575858384017083854
  s21_decimal dec_2 = {{0x3444cdce, 0x7fddc26, 0x0, 0x80000000}};
  // -575907318855197943.916431
  s21_decimal dec_check = {{0x10e7e78f, 0xff916b0e, 0x79f3, 0x80060000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_147) {
  // -0.87
  s21_decimal dec_1 = {{0x57, 0x0, 0x0, 0x80020000}};
  // 1949
  s21_decimal dec_2 = {{0x79d, 0x0, 0x0, 0x0}};
  // 1948.13
  s21_decimal dec_check = {{0x2f8fd, 0x0, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_148) {
  // 13109262042186569914960680
  s21_decimal dec_1 = {{0x818acb28, 0x84f041a4, 0xad7fe, 0x0}};
  // 43.97007902738093604
  s21_decimal dec_2 = {{0x254a1624, 0x3d054f64, 0x0, 0x110000}};
  // 13109262042186569914960723.970
  s21_decimal dec_check = {{0x62a4002, 0x4a806a9a, 0x2a5bba37, 0x30000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_149) {
  // 987437241314596689.13705244444
  s21_decimal dec_1 = {{0x675cd71c, 0x21c3e0f8, 0x3f0ee4eb, 0xb0000}};
  // 4580478960
  s21_decimal dec_2 = {{0x11048ff0, 0x1, 0x0, 0x0}};
  // 987437245895075649.13705244444
  s21_decimal dec_check = {{0x626e571c, 0xf674e78a, 0x3f0ee503, 0xb0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_150) {
  // -54547501128258097109798111
  s21_decimal dec_1 = {{0x8a600cdf, 0xf61abf90, 0x2d1ee1, 0x80000000}};
  // -42.03
  s21_decimal dec_2 = {{0x106b, 0x0, 0x0, 0x80020000}};
  // -54547501128258097109798153.03
  s21_decimal dec_check = {{0xd851787, 0x2272d476, 0x11a01044, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_151) {
  // -9.431886370917901246426397
  s21_decimal dec_1 = {{0x7d186d1d, 0x95aeda1f, 0x7cd47, 0x80180000}};
  // -304
  s21_decimal dec_2 = {{0x130, 0x0, 0x0, 0x80000000}};
  // -313.431886370917901246426397
  s21_decimal dec_check = {{0xad186d1d, 0x9b42344e, 0x10343c8, 0x80180000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_152) {
  // -961241660554
  s21_decimal dec_1 = {{0xce77bc8a, 0xdf, 0x0, 0x80000000}};
  // 8599586.83
  s21_decimal dec_2 = {{0x3341ed9b, 0x0, 0x0, 0x20000}};
  // -961233060967.17
  s21_decimal dec_check = {{0x7383b84d, 0x576c, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_153) {
  // 50937.698290591125404903
  s21_decimal dec_1 = {{0xf24afce7, 0x56917bcc, 0xac9, 0x120000}};
  // -0.03495706213
  s21_decimal dec_2 = {{0xd05c3e65, 0x0, 0x0, 0x800b0000}};
  // 50937.663333528995404903
  s21_decimal dec_check = {{0xaba49c67, 0x56154a89, 0xac9, 0x120000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_154) {
  // -883.37208647292
  s21_decimal dec_1 = {{0x9bf11e7c, 0x5057, 0x0, 0x800b0000}};
  // 0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
  // -883.37208647292
  s21_decimal dec_check = {{0x9bf11e7c, 0x5057, 0x0, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_155) {
  // -607.9
  s21_decimal dec_1 = {{0x17bf, 0x0, 0x0, 0x80010000}};
  // -73643.96740224475289
  s21_decimal dec_2 = {{0x261fe099, 0x663397d1, 0x0, 0x800e0000}};
  // -74251.86740224475289
  s21_decimal dec_check = {{0xfa054099, 0x670b8fff, 0x0, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_156) {
  // -47680192384501437103.3747675
  s21_decimal dec_1 = {{0x5bbd10db, 0x157a93c9, 0x18a66bc, 0x80070000}};
  // 50523
  s21_decimal dec_2 = {{0xc55b, 0x0, 0x0, 0x0}};
  // -47680192384501386580.3747675
  s21_decimal dec_check = {{0xb9af115b, 0x157a9353, 0x18a66bc, 0x80070000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_157) {
  // 0.80
  s21_decimal dec_1 = {{0x50, 0x0, 0x0, 0x20000}};
  // 79506.7401
  s21_decimal dec_2 = {{0x2f63c409, 0x0, 0x0, 0x40000}};
  // 79507.5401
  s21_decimal dec_check = {{0x2f63e349, 0x0, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_158) {
  // 64265
  s21_decimal dec_1 = {{0xfb09, 0x0, 0x0, 0x0}};
  // -872758447019980469580285388
  s21_decimal dec_2 = {{0x752345cc, 0x37389120, 0x2d1edca, 0x80000000}};
  // -872758447019980469580221123
  s21_decimal dec_check = {{0x75224ac3, 0x37389120, 0x2d1edca, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_159) {
  // 0.27
  s21_decimal dec_1 = {{0x1b, 0x0, 0x0, 0x20000}};
  // 91
  s21_decimal dec_2 = {{0x5b, 0x0, 0x0, 0x0}};
  // 91.27
  s21_decimal dec_check = {{0x23a7, 0x0, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_160) {
  // 8450231037664803411
  s21_decimal dec_1 = {{0x85fdba53, 0x7545405b, 0x0, 0x0}};
  // 9293015113.3
  s21_decimal dec_2 = {{0xa31192dd, 0x15, 0x0, 0x10000}};
  // 8450231046957818524.3
  s21_decimal dec_check = {{0xdefada1b, 0x94b483a8, 0x4, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_161) {
  // -40267776640.92217500043790
  s21_decimal dec_1 = {{0xa0f50a0e, 0xdf8b570, 0x354b4, 0x800e0000}};
  // -3605068.58082
  s21_decimal dec_2 = {{0xefe21a62, 0x53, 0x0, 0x80050000}};
  // -40271381709.50299500043790
  s21_decimal dec_check = {{0x7eba5e0e, 0x99025ad1, 0x354c7, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_162) {
  // -6486018353750134
  s21_decimal dec_1 = {{0xd3fb6076, 0x170aff, 0x0, 0x80000000}};
  // 7736771514826074158029
  s21_decimal dec_2 = {{0xe0f8f3cd, 0x6945fd8f, 0x1a3, 0x0}};
  // 7736765028807720407895
  s21_decimal dec_check = {{0xcfd9357, 0x692ef290, 0x1a3, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_163) {
  // -14855779346085854375539445
  s21_decimal dec_1 = {{0xef8372f5, 0x697c14c7, 0xc49d5, 0x80000000}};
  // 30502219018787658
  s21_decimal dec_2 = {{0x4979db4a, 0x6c5d9b, 0x0, 0x0}};
  // -14855779315583635356751787
  s21_decimal dec_check = {{0xa60997ab, 0x690fb72c, 0xc49d5, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_164) {
  // -79271735691578
  s21_decimal dec_1 = {{0xe3a5893a, 0x4818, 0x0, 0x80000000}};
  // -756083
  s21_decimal dec_2 = {{0xb8973, 0x0, 0x0, 0x80000000}};
  // -79271736447661
  s21_decimal dec_check = {{0xe3b112ad, 0x4818, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_165) {
  // 750402156871219166
  s21_decimal dec_1 = {{0x2efef7de, 0xa69f6c9, 0x0, 0x0}};
  // -3866707008078
  s21_decimal dec_2 = {{0x49b29a4e, 0x384, 0x0, 0x80000000}};
  // 750398290164211088
  s21_decimal dec_check = {{0xe54c5d90, 0xa69f344, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_166) {
  // 877980277359.2548
  s21_decimal dec_1 = {{0x218499e4, 0x1f312f, 0x0, 0x40000}};
  // 36240719725633411
  s21_decimal dec_2 = {{0x19a69f83, 0x80c0be, 0x0, 0x0}};
  // 36241597705910770.2548
  s21_decimal dec_check = {{0x1e3b8714, 0xa58832f9, 0x13, 0x40000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_167) {
  // 9.28835
  s21_decimal dec_1 = {{0xe2c43, 0x0, 0x0, 0x50000}};
  // -3970715835.028117
  s21_decimal dec_2 = {{0x52d9d295, 0xe1b58, 0x0, 0x80060000}};
  // -3970715825.739767
  s21_decimal dec_check = {{0x524c17f7, 0xe1b58, 0x0, 0x80060000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_168) {
  // -71.709609708949848
  s21_decimal dec_1 = {{0x95af1158, 0xfec382, 0x0, 0x800f0000}};
  // -69548374.066856532545385
  s21_decimal dec_2 = {{0x4d0e8f69, 0x3993e2ba, 0xeba, 0x800f0000}};
  // -69548445.776466241495233
  s21_decimal dec_check = {{0xe2bda0c1, 0x3a92a63c, 0xeba, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_169) {
  // -451315809207430
  s21_decimal dec_1 = {{0x267d4486, 0x19a78, 0x0, 0x80000000}};
  // -45408617688354787
  s21_decimal dec_2 = {{0xaf0e4fe3, 0xa152e5, 0x0, 0x80000000}};
  // -45859933497562217
  s21_decimal dec_check = {{0xd58b9469, 0xa2ed5d, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_170) {
  // -62516
  s21_decimal dec_1 = {{0xf434, 0x0, 0x0, 0x80000000}};
  // -2
  s21_decimal dec_2 = {{0x2, 0x0, 0x0, 0x80000000}};
  // -62518
  s21_decimal dec_check = {{0xf436, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_171) {
  // -353384668500148
  s21_decimal dec_1 = {{0xc7a290b4, 0x14166, 0x0, 0x80000000}};
  // 9
  s21_decimal dec_2 = {{0x9, 0x0, 0x0, 0x0}};
  // -353384668500139
  s21_decimal dec_check = {{0xc7a290ab, 0x14166, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_172) {
  // 44098.89621
  s21_decimal dec_1 = {{0x6d99355, 0x1, 0x0, 0x50000}};
  // -32215998560658
  s21_decimal dec_2 = {{0xdf267992, 0x1d4c, 0x0, 0x80000000}};
  // -32215998516559.10379
  s21_decimal dec_check = {{0xe66d3eb, 0x2cb56bff, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_173) {
  // 11589013094069903
  s21_decimal dec_1 = {{0x60c4f68f, 0x292c25, 0x0, 0x0}};
  // 7.87
  s21_decimal dec_2 = {{0x313, 0x0, 0x0, 0x20000}};
  // 11589013094069910.87
  s21_decimal dec_check = {{0xccf052ef, 0x10153e99, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_174) {
  // -847640774066196325609073.310
  s21_decimal dec_1 = {{0x70b56a9e, 0x6fbe0545, 0x2bd26ea, 0x80030000}};
  // 1353938991883282118
  s21_decimal dec_2 = {{0xf2c0e6c6, 0x12ca2856, 0x0, 0x0}};
  // -847639420127204442326955.310
  s21_decimal dec_check = {{0x2f2ff52e, 0xa1071a1, 0x2bd26a1, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_175) {
  // 4.74211286947817503991705
  s21_decimal dec_1 = {{0x37122799, 0xb9dc7f6, 0x646b, 0x170000}};
  // 2356125290147710009182792
  s21_decimal dec_2 = {{0xa7d18a48, 0xced3468b, 0x1f2ed, 0x0}};
  // 2356125290147710009182796.7421
  s21_decimal dec_check = {{0x692a55bd, 0x1cf3af4b, 0x4c21695f, 0x40000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_176) {
  // -41164423259819
  s21_decimal dec_1 = {{0x56d366ab, 0x2570, 0x0, 0x80000000}};
  // -489900809400570175
  s21_decimal dec_2 = {{0xc77f513f, 0x6cc7a30, 0x0, 0x80000000}};
  // -489941973823829994
  s21_decimal dec_check = {{0x1e52b7ea, 0x6cc9fa1, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_177) {
  // 992397126052183146324671006
  s21_decimal dec_1 = {{0xd49ba1e, 0x6fe562, 0x334e444, 0x0}};
  // -9479533104303659201094
  s21_decimal dec_2 = {{0x2f92b246, 0xe2f2eda5, 0x201, 0x80000000}};
  // 992387646519078842665469912
  s21_decimal dec_check = {{0xddb707d8, 0x1d7cf7bc, 0x334e242, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_178) {
  // 9430015623327607721207
  s21_decimal dec_1 = {{0x69dc8cf7, 0x33c17f0d, 0x1ff, 0x0}};
  // -0.293322
  s21_decimal dec_2 = {{0x479ca, 0x0, 0x0, 0x80060000}};
  // 9430015623327607721206.706678
  s21_decimal dec_check = {{0x95ef71f6, 0x44ea6c91, 0x1e78537b, 0x60000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_179) {
  // -528396209631557769204
  s21_decimal dec_1 = {{0xc7d6d7f4, 0xa4f87118, 0x1c, 0x80000000}};
  // 902530.715601870
  s21_decimal dec_2 = {{0xceb3cbce, 0x334d8, 0x0, 0x90000}};
  // -528396209631556866673.28439813
  s21_decimal dec_check = {{0x960c4605, 0x1404e862, 0xaabbe8f8, 0x80080000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_180) {
  // 47073
  s21_decimal dec_1 = {{0xb7e1, 0x0, 0x0, 0x0}};
  // 792.08
  s21_decimal dec_2 = {{0x13568, 0x0, 0x0, 0x20000}};
  // 47865.08
  s21_decimal dec_check = {{0x49094c, 0x0, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_181) {
  // -167499363
  s21_decimal dec_1 = {{0x9fbd663, 0x0, 0x0, 0x80000000}};
  // -554464446009.49162490
  s21_decimal dec_2 = {{0xc1f341fa, 0x1795798, 0x3, 0x80080000}};
  // -554631945372.49162490
  s21_decimal dec_check = {{0x351f44fa, 0x1b4d993, 0x3, 0x80080000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_182) {
  // -571934080945
  s21_decimal dec_1 = {{0x29ed7fb1, 0x85, 0x0, 0x80000000}};
  // 434620350430820430807
  s21_decimal dec_2 = {{0xe0d7f3d7, 0x8f91a9ff, 0x17, 0x0}};
  // 434620349858886349862
  s21_decimal dec_check = {{0xb6ea7426, 0x8f91a97a, 0x17, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_183) {
  // 529.77
  s21_decimal dec_1 = {{0xcef1, 0x0, 0x0, 0x20000}};
  // 803065651243
  s21_decimal dec_2 = {{0xfa71602b, 0xba, 0x0, 0x0}};
  // 803065651772.77
  s21_decimal dec_check = {{0xd44a5fbd, 0x4909, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_184) {
  // -93027450472430
  s21_decimal dec_1 = {{0xa423c7ee, 0x549b, 0x0, 0x80000000}};
  // 5.847682604219
  s21_decimal dec_2 = {{0x850b5cbb, 0x551, 0x0, 0xc0000}};
  // -93027450472424.152317395781
  s21_decimal dec_check = {{0xabd98345, 0x31f55141, 0x4cf354, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_185) {
  // -10
  s21_decimal dec_1 = {{0xa, 0x0, 0x0, 0x80000000}};
  // -637958949
  s21_decimal dec_2 = {{0x26067b25, 0x0, 0x0, 0x80000000}};
  // -637958959
  s21_decimal dec_check = {{0x26067b2f, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_186) {
  // -6117464247.53085
  s21_decimal dec_1 = {{0x50570bbd, 0x22c61, 0x0, 0x80050000}};
  // 23380622362153846389727317999
  s21_decimal dec_2 = {{0x61d44fef, 0xf49cd97b, 0x4b8bff5d, 0x0}};
  // 23380622362153846383609853751
  s21_decimal dec_check = {{0xf5333737, 0xf49cd979, 0x4b8bff5d, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_187) {
  // -4670476555724
  s21_decimal dec_1 = {{0x6e1895cc, 0x43f, 0x0, 0x80000000}};
  // 8909996563.477305
  s21_decimal dec_2 = {{0x3c1db339, 0x1fa798, 0x0, 0x60000}};
  // -4661566559160.522695
  s21_decimal dec_check = {{0x679a57c7, 0x40b13616, 0x0, 0x80060000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_188) {
  // 474.13
  s21_decimal dec_1 = {{0xb935, 0x0, 0x0, 0x20000}};
  // 34637126093285332
  s21_decimal dec_2 = {{0x5cd4a7d4, 0x7b0e48, 0x0, 0x0}};
  // 34637126093285806.13
  s21_decimal dec_check = {{0x43124805, 0x30119444, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_189) {
  // 79
  s21_decimal dec_1 = {{0x4f, 0x0, 0x0, 0x0}};
  // 123013906990
  s21_decimal dec_2 = {{0xa433422e, 0x1c, 0x0, 0x0}};
  // 123013907069
  s21_decimal dec_check = {{0xa433427d, 0x1c, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_190) {
  // 7096.362919758
  s21_decimal dec_1 = {{0x4030e74e, 0x674, 0x0, 0x90000}};
  // -48528411918469483220501
  s21_decimal dec_2 = {{0x5e384e15, 0xbb00d54d, 0xa46, 0x80000000}};
  // -48528411918469483213404.637080
  s21_decimal dec_check = {{0xfe760798, 0x76bbcaec, 0x9ccdc2f1, 0x80060000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_191) {
  // 19934607878089
  s21_decimal dec_1 = {{0x6338a7c9, 0x1221, 0x0, 0x0}};
  // 731240
  s21_decimal dec_2 = {{0xb2868, 0x0, 0x0, 0x0}};
  // 19934608609329
  s21_decimal dec_check = {{0x6343d031, 0x1221, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_192) {
  // -0.7
  s21_decimal dec_1 = {{0x7, 0x0, 0x0, 0x80010000}};
  // -209.304227
  s21_decimal dec_2 = {{0xc79baa3, 0x0, 0x0, 0x80060000}};
  // -210.004227
  s21_decimal dec_check = {{0xc846903, 0x0, 0x0, 0x80060000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_193) {
  // 20
  s21_decimal dec_1 = {{0x14, 0x0, 0x0, 0x0}};
  // -1.8283114
  s21_decimal dec_2 = {{0x116fa6a, 0x0, 0x0, 0x80070000}};
  // 18.1716886
  s21_decimal dec_check = {{0xad4c796, 0x0, 0x0, 0x70000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_194) {
  // 34094191192232849005
  s21_decimal dec_1 = {{0x254a6e6d, 0xd926e640, 0x1, 0x0}};
  // 5.539
  s21_decimal dec_2 = {{0x15a3, 0x0, 0x0, 0x30000}};
  // 34094191192232849010.539
  s21_decimal dec_check = {{0xaabf6f6b, 0x3ff36a91, 0x738, 0x30000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_196) {
  // -95484593782441
  s21_decimal dec_1 = {{0xbd4b3ea9, 0x56d7, 0x0, 0x80000000}};
  // -7503621417873537410079
  s21_decimal dec_2 = {{0x7522a41f, 0xc5aa73aa, 0x196, 0x80000000}};
  // -7503621513358131192520
  s21_decimal dec_check = {{0x326de2c8, 0xc5aaca82, 0x196, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_197) {
  // -9.2
  s21_decimal dec_1 = {{0x5c, 0x0, 0x0, 0x80010000}};
  // -406507904
  s21_decimal dec_2 = {{0x183ad180, 0x0, 0x0, 0x80000000}};
  // -406507913.2
  s21_decimal dec_check = {{0xf24c2f5c, 0x0, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_198) {
  // 79228162514264337591741056253
  s21_decimal dec_1 = {{0x948a04fd, 0xffffffff, 0xffffffff, 0x0}};
  // -2600
  s21_decimal dec_2 = {{0xa28, 0x0, 0x0, 0x80000000}};
  // 79228162514264337591741053653
  s21_decimal dec_check = {{0x9489fad5, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_199) {
  // -950290450
  s21_decimal dec_1 = {{0x38a44812, 0x0, 0x0, 0x80000000}};
  // 718605
  s21_decimal dec_2 = {{0xaf70d, 0x0, 0x0, 0x0}};
  // -949571845
  s21_decimal dec_check = {{0x38995105, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_200) {
  // 449193057600367324820.4961
  s21_decimal dec_1 = {{0x976f88a1, 0xb619728, 0x3b734, 0x40000}};
  // -856260059547695027137
  s21_decimal dec_2 = {{0x972f93c1, 0x6afed37f, 0x2e, 0x80000000}};
  // -407067001947327702316.5039
  s21_decimal dec_check = {{0x1b0c1a6f, 0x76c410d9, 0x35dff, 0x80040000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_201) {
  // -7419937
  s21_decimal dec_1 = {{0x713821, 0x0, 0x0, 0x80000000}};
  // -0.41262
  s21_decimal dec_2 = {{0xa12e, 0x0, 0x0, 0x80050000}};
  // -7419937.41262
  s21_decimal dec_check = {{0xc245fbce, 0xac, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_202) {
  // 8054.79
  s21_decimal dec_1 = {{0xc4a67, 0x0, 0x0, 0x20000}};
  // -87774916
  s21_decimal dec_2 = {{0x53b56c4, 0x0, 0x0, 0x80000000}};
  // -87766861.21
  s21_decimal dec_check = {{0xb219a29, 0x2, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_203) {
  // -651166177797215.1285555
  s21_decimal dec_1 = {{0x8e9d7733, 0xff75decd, 0x160, 0x80070000}};
  // -9244714048
  s21_decimal dec_2 = {{0x27072440, 0x2, 0x0, 0x80000000}};
  // -651175422511263.1285555
  s21_decimal dec_check = {{0xc76d1733, 0xbe4efc, 0x161, 0x80070000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_204) {
  // 0
  s21_decimal dec_1 = {{0x0, 0x0, 0x0, 0x0}};
  // 97354234115977
  s21_decimal dec_2 = {{0xc8ab789, 0x588b, 0x0, 0x0}};
  // 97354234115977
  s21_decimal dec_check = {{0xc8ab789, 0x588b, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_205) {
  // 364.109687985458628936
  s21_decimal dec_1 = {{0x4393c948, 0xbd097816, 0x13, 0x120000}};
  // 9435
  s21_decimal dec_2 = {{0x24db, 0x0, 0x0, 0x0}};
  // 9799.109687985458628936
  s21_decimal dec_check = {{0x861fc948, 0x35f70750, 0x213, 0x120000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_206) {
  // 60830427
  s21_decimal dec_1 = {{0x3a032db, 0x0, 0x0, 0x0}};
  // 0.714532170219562
  s21_decimal dec_2 = {{0xfc2fc02a, 0x289dc, 0x0, 0xf0000}};
  // 60830427.714532170219562
  s21_decimal dec_check = {{0xb6ff402a, 0x9fc4a0f2, 0xce1, 0xf0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_207) {
  // -51.041867417
  s21_decimal dec_1 = {{0xe2551699, 0xb, 0x0, 0x80090000}};
  // -36.10
  s21_decimal dec_2 = {{0xe1a, 0x0, 0x0, 0x80020000}};
  // -87.141867417
  s21_decimal dec_check = {{0x4a0f5f99, 0x14, 0x0, 0x80090000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_208) {
  // -5196714292.41108
  s21_decimal dec_1 = {{0x6ef09914, 0x1d8a3, 0x0, 0x80050000}};
  // -692363206522524108485933
  s21_decimal dec_2 = {{0x5ae6752d, 0x15aa82c0, 0x929d, 0x80000000}};
  // -692363206522529305200225.41108
  s21_decimal dec_check = {{0x557c6334, 0x4dc49b57, 0xdfb6f12f, 0x80050000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_209) {
  // -259803259
  s21_decimal dec_1 = {{0xf7c487b, 0x0, 0x0, 0x80000000}};
  // -31578643724
  s21_decimal dec_2 = {{0x5a3bdd0c, 0x7, 0x0, 0x80000000}};
  // -31838446983
  s21_decimal dec_check = {{0x69b82587, 0x7, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_210) {
  // -7417480445624926
  s21_decimal dec_1 = {{0xbf17025e, 0x1a5a28, 0x0, 0x80000000}};
  // 137702300923622.58517180970
  s21_decimal dec_2 = {{0x47a9c22a, 0xab495d9d, 0xb63f5, 0xb0000}};
  // -7279778144701303.41482819030
  s21_decimal dec_check = {{0x19cf6dd6, 0x66035347, 0x25a2b4c, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_211) {
  // 80.5547
  s21_decimal dec_1 = {{0xc4aab, 0x0, 0x0, 0x40000}};
  // 9425421362958323638
  s21_decimal dec_2 = {{0xa5824fb6, 0x82cdd2ca, 0x0, 0x0}};
  // 9425421362958323718.5547
  s21_decimal dec_check = {{0x3256000b, 0x87fa0be1, 0x13f5, 0x40000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_212) {
  // 330154.6816
  s21_decimal dec_1 = {{0xc4c99b40, 0x0, 0x0, 0x40000}};
  // -75870
  s21_decimal dec_2 = {{0x1285e, 0x0, 0x0, 0x80000000}};
  // 254284.6816
  s21_decimal dec_check = {{0x9790c360, 0x0, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_213) {
  // -42.0
  s21_decimal dec_1 = {{0x1a4, 0x0, 0x0, 0x80010000}};
  // 6533294875765
  s21_decimal dec_2 = {{0x26b86475, 0x5f1, 0x0, 0x0}};
  // 6533294875723.0
  s21_decimal dec_check = {{0x8333eaee, 0x3b6b, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_214) {
  // 90306554259.21500369789354
  s21_decimal dec_1 = {{0x1c5a21aa, 0xcfc4348d, 0x77850, 0xe0000}};
  // -8298
  s21_decimal dec_2 = {{0x206a, 0x0, 0x0, 0x80000000}};
  // 90306545961.21500369789354
  s21_decimal dec_check = {{0x1bba1aa, 0xc44029d9, 0x77850, 0xe0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_215) {
  // -5756944040
  s21_decimal dec_1 = {{0x5723fea8, 0x1, 0x0, 0x80000000}};
  // 6386503164071.693702
  s21_decimal dec_2 = {{0x6366cd86, 0x58a16aca, 0x0, 0x60000}};
  // 6380746220031.693702
  s21_decimal dec_check = {{0x66e7d386, 0x588cf6e1, 0x0, 0x60000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_216) {
  // 221612576271951219664
  s21_decimal dec_1 = {{0x30d04bd0, 0x37e07f7, 0xc, 0x0}};
  // -247441044334886181090
  s21_decimal dec_2 = {{0xe092d8e2, 0x69ef2ed2, 0xd, 0x80000000}};
  // -25828468062934961426
  s21_decimal dec_check = {{0xafc28d12, 0x667126db, 0x1, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_217) {
  // -3065.477965939847
  s21_decimal dec_1 = {{0x353a0487, 0xae409, 0x0, 0x800c0000}};
  // -35012.47
  s21_decimal dec_2 = {{0x356cbf, 0x0, 0x0, 0x80020000}};
  // -38077.947965939847
  s21_decimal dec_check = {{0x22492087, 0x8747b1, 0x0, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_218) {
  // 0.164760950424566849813
  s21_decimal dec_1 = {{0x600d6115, 0xee847b78, 0x8, 0x150000}};
  // 7.1270446
  s21_decimal dec_2 = {{0x43f802e, 0x0, 0x0, 0x70000}};
  // 7.291805550424566849813
  s21_decimal dec_check = {{0x3604e115, 0x4a215278, 0x18b, 0x150000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_220) {
  // 29320278921323.3876
  s21_decimal dec_1 = {{0x223562d4, 0x411aa62, 0x0, 0x40000}};
  // 26902.664345331
  s21_decimal dec_2 = {{0xc3c076f3, 0x1877, 0x0, 0x90000}};
  // 29320278948226.051945331
  s21_decimal dec_check = {{0x79ad3373, 0x749c15ea, 0x635, 0x90000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_221) {
  // -644880241254520099997313910
  s21_decimal dec_1 = {{0x93ad6b76, 0xed9519c5, 0x2156eb3, 0x80000000}};
  // 267872465522945089.14690
  s21_decimal dec_2 = {{0xa16ee802, 0x23b93e65, 0x5ac, 0x50000}};
  // -644880240986647634474368820.85
  s21_decimal dec_check = {{0x336bb0a5, 0x5a7ea65d, 0xd05f3e47, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_222) {
  // -404733544959
  s21_decimal dec_1 = {{0x3bffc9ff, 0x5e, 0x0, 0x80000000}};
  // -74422952173898521.5
  s21_decimal dec_2 = {{0x929c6eff, 0xa5408ce, 0x0, 0x80010000}};
  // -74423356907443480.5
  s21_decimal dec_check = {{0xea9a52f5, 0xa540c7c, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_223) {
  // 8060
  s21_decimal dec_1 = {{0x1f7c, 0x0, 0x0, 0x0}};
  // -62577814431969
  s21_decimal dec_2 = {{0x86668e1, 0x38ea, 0x0, 0x80000000}};
  // -62577814423909
  s21_decimal dec_check = {{0x8664965, 0x38ea, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_224) {
  // 92677458321801472011
  s21_decimal dec_1 = {{0x450be80b, 0x6287951, 0x5, 0x0}};
  // -350431287942339162617358
  s21_decimal dec_2 = {{0x59b1360e, 0xeb0e2705, 0x4a34, 0x80000000}};
  // -350338610484017361145347
  s21_decimal dec_check = {{0x14a54e03, 0xe4e5adb4, 0x4a2f, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_225) {
  // -65677040.8
  s21_decimal dec_1 = {{0x27258568, 0x0, 0x0, 0x80010000}};
  // -277565
  s21_decimal dec_2 = {{0x43c3d, 0x0, 0x0, 0x80000000}};
  // -65954605.8
  s21_decimal dec_check = {{0x274fdfca, 0x0, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_226) {
  // 103768835919449327771.0624360
  s21_decimal dec_1 = {{0x4160a668, 0xab8a52e6, 0x35a5b0e, 0x70000}};
  // 727346.9
  s21_decimal dec_2 = {{0x6efbfd, 0x0, 0x0, 0x10000}};
  // 103768835919450055117.9624360
  s21_decimal dec_check = {{0xbde9dfa8, 0xab8a5983, 0x35a5b0e, 0x70000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_227) {
  // -72593.420
  s21_decimal dec_1 = {{0x453b00c, 0x0, 0x0, 0x80030000}};
  // 488.59299186980017
  s21_decimal dec_2 = {{0x1403b4b1, 0xad9546, 0x0, 0xe0000}};
  // -72104.82700813019983
  s21_decimal dec_check = {{0x490f2b4f, 0x6410c7d0, 0x0, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_228) {
  // 6529605
  s21_decimal dec_1 = {{0x63a245, 0x0, 0x0, 0x0}};
  // -96153807.050670897787
  s21_decimal dec_2 = {{0x60b07a7b, 0x3666f211, 0x5, 0x800c0000}};
  // -89624202.050670897787
  s21_decimal dec_check = {{0x6c132a7b, 0xdbc920ea, 0x4, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_229) {
  // -2771160878093452734630
  s21_decimal dec_1 = {{0xebd070a6, 0x39952862, 0x96, 0x80000000}};
  // -26680517.777638718457807
  s21_decimal dec_2 = {{0x225447cf, 0x5a907752, 0x5a6, 0x800f0000}};
  // -2771160878093479415147.7776387
  s21_decimal dec_check = {{0x58a21003, 0x2afb1e0d, 0x598a816a, 0x80070000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_230) {
  // 963.907195043897
  s21_decimal dec_1 = {{0x21f50039, 0x36cab, 0x0, 0xc0000}};
  // -83361
  s21_decimal dec_2 = {{0x145a1, 0x0, 0x0, 0x80000000}};
  // -82397.092804956103
  s21_decimal dec_check = {{0x272a0fc7, 0x124bbb8, 0x0, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_232) {
  // -641081637706458805011
  s21_decimal dec_1 = {{0xdf253313, 0xc0cb80e5, 0x22, 0x80000000}};
  // -69
  s21_decimal dec_2 = {{0x45, 0x0, 0x0, 0x80000000}};
  // -641081637706458805080
  s21_decimal dec_check = {{0xdf253358, 0xc0cb80e5, 0x22, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_233) {
  // 58.15
  s21_decimal dec_1 = {{0x16b7, 0x0, 0x0, 0x20000}};
  // -42293249650
  s21_decimal dec_2 = {{0xd8dfc672, 0x9, 0x0, 0x80000000}};
  // -42293249591.85
  s21_decimal dec_check = {{0xb7696dd1, 0x3d8, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_234) {
  // -3338023
  s21_decimal dec_1 = {{0x32ef27, 0x0, 0x0, 0x80000000}};
  // -56197306337803718997465232142
  s21_decimal dec_2 = {{0x9a09f30e, 0xf6c95b5e, 0xb5955280, 0x80000000}};
  // -56197306337803718997468570165
  s21_decimal dec_check = {{0x9a3ce235, 0xf6c95b5e, 0xb5955280, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_235) {
  // -63656055614121377558
  s21_decimal dec_1 = {{0x1a36ff16, 0x7367bd51, 0x3, 0x80000000}};
  // 5460284608543552150158394228
  s21_decimal dec_2 = {{0x56174374, 0xbfa4842b, 0x11a4a43d, 0x0}};
  // 5460284544887496536037016670
  s21_decimal dec_check = {{0x3be0445e, 0x4c3cc6da, 0x11a4a43a, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_236) {
  // -408739420493723383358033.5
  s21_decimal dec_1 = {{0xdc2ed72f, 0x157687c8, 0x3618a, 0x80010000}};
  // 2067692827803625
  s21_decimal dec_2 = {{0x40817fe9, 0x7588e, 0x0, 0x0}};
  // -408739418426030555554408.5
  s21_decimal dec_check = {{0x571fd815, 0x152d123a, 0x3618a, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_237) {
  // 29609124361267762702345403736
  s21_decimal dec_1 = {{0x7fe97d58, 0xe4dd2023, 0x5fac17f7, 0x0}};
  // 19788491115407541119663075
  s21_decimal dec_2 = {{0x5922bbe3, 0x40bc87d2, 0x105e60, 0x0}};
  // 29628912852383170243465066811
  s21_decimal dec_check = {{0xd90c393b, 0x2599a7f5, 0x5fbc7658, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_239) {
  // -3024997780
  s21_decimal dec_1 = {{0xb44dcd94, 0x0, 0x0, 0x80000000}};
  // -0.26651081111709
  s21_decimal dec_2 = {{0x3038f89d, 0x183d, 0x0, 0x800e0000}};
  // -3024997780.26651081111709
  s21_decimal dec_check = {{0xdc25f89d, 0x8bbb3ab9, 0x400e, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_240) {
  // 31965698718112843777813
  s21_decimal dec_1 = {{0xe3834715, 0xdd2f1697, 0x6c4, 0x0}};
  // 0.7
  s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x10000}};
  // 31965698718112843777813.7
  s21_decimal dec_check = {{0xe320c6d9, 0xa3d6e1ee, 0x43b0, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_241) {
  // -1001882133262.624
  s21_decimal dec_1 = {{0xdca8f120, 0x38f34, 0x0, 0x80030000}};
  // -97563962108949865
  s21_decimal dec_2 = {{0x18623569, 0x15a9de8, 0x0, 0x80000000}};
  // -97564963991083127.624
  s21_decimal dec_check = {{0x1c499348, 0x49fc61d4, 0x5, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_242) {
  // 8180859
  s21_decimal dec_1 = {{0x7cd47b, 0x0, 0x0, 0x0}};
  // -88403815321468875.251608114
  s21_decimal dec_2 = {{0xd8f36a32, 0x6e6ebc5b, 0x49203c, 0x80090000}};
  // -88403815313288016.251608114
  s21_decimal dec_check = {{0x2e4c5c32, 0x6e51abe9, 0x49203c, 0x80090000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_243) {
  // -61802457394888167579343241
  s21_decimal dec_1 = {{0xda565989, 0xedba4dea, 0x331f2d, 0x80000000}};
  // 579006696658728285138
  s21_decimal dec_2 = {{0xf3da73d2, 0x635502e6, 0x1f, 0x0}};
  // -61801878388191508851058103
  s21_decimal dec_check = {{0xe67be5b7, 0x8a654b03, 0x331f0e, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_244) {
  // 92227.910540562
  s21_decimal dec_1 = {{0x7bd89d12, 0x53e1, 0x0, 0x90000}};
  // -281241020798935.2
  s21_decimal dec_2 = {{0x4768ee68, 0x9fddf, 0x0, 0x80010000}};
  // -281241020706707.289459438
  s21_decimal dec_check = {{0xef38caee, 0x1b354df5, 0x3b8e, 0x80090000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_245) {
  // -1372.194118326
  s21_decimal dec_1 = {{0x7d249ab6, 0x13f, 0x0, 0x80090000}};
  // -11078373102727272
  s21_decimal dec_2 = {{0xbd7a3068, 0x275bb8, 0x0, 0x80000000}};
  // -11078373102728644.194118326
  s21_decimal dec_check = {{0xfde6aab6, 0xcf2ceb6a, 0x929ef, 0x80090000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_246) {
  // 0.24
  s21_decimal dec_1 = {{0x18, 0x0, 0x0, 0x20000}};
  // 38127132842725809510152837198
  s21_decimal dec_2 = {{0x13aa984e, 0xefb3cfc0, 0x7b32066c, 0x0}};
  // 38127132842725809510152837198
  s21_decimal dec_check = {{0x13aa984e, 0xefb3cfc0, 0x7b32066c, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_247) {
  // -80417
  s21_decimal dec_1 = {{0x13a21, 0x0, 0x0, 0x80000000}};
  // 7832890111267464
  s21_decimal dec_2 = {{0xd8a59288, 0x1bd3f8, 0x0, 0x0}};
  // 7832890111187047
  s21_decimal dec_check = {{0xd8a45867, 0x1bd3f8, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_248) {
  // 134142128851
  s21_decimal dec_1 = {{0x3b7e72d3, 0x1f, 0x0, 0x0}};
  // -5041638530.89
  s21_decimal dec_2 = {{0x6281e321, 0x75, 0x0, 0x80020000}};
  // 129100490320.11
  s21_decimal dec_check = {{0xdae2f74b, 0xbbd, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_249) {
  // 310216014924229
  s21_decimal dec_1 = {{0xcb5f89c5, 0x11a23, 0x0, 0x0}};
  // -9960.759
  s21_decimal dec_2 = {{0x97fd37, 0x0, 0x0, 0x80030000}};
  // 310216014914268.241
  s21_decimal dec_check = {{0x6c9a2c51, 0x44e1bd2, 0x0, 0x30000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_250) {
  // 6468042627331.8
  s21_decimal dec_1 = {{0x95d4fa26, 0x3ad3, 0x0, 0x10000}};
  // 5415008350725028278157
  s21_decimal dec_2 = {{0x63296f8d, 0x8c563d0a, 0x125, 0x0}};
  // 5415008357193070905488.8
  s21_decimal dec_check = {{0x757355a8, 0x7b5e9d3b, 0xb77, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_251) {
  // -0.10
  s21_decimal dec_1 = {{0xa, 0x0, 0x0, 0x80020000}};
  // -68525490996785939738
  s21_decimal dec_2 = {{0x7aa7851a, 0xb6fb72ff, 0x3, 0x80000000}};
  // -68525490996785939738.10
  s21_decimal dec_check = {{0xe96ffe32, 0x7a38ebcb, 0x173, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_252) {
  // 40173856.81798
  s21_decimal dec_1 = {{0x5ed8b386, 0x3a7, 0x0, 0x50000}};
  // 34803886
  s21_decimal dec_2 = {{0x21310ae, 0x0, 0x0, 0x0}};
  // 74977742.81798
  s21_decimal dec_check = {{0xb62c3446, 0x6d1, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_253) {
  // 47120060881945570107568489957
  s21_decimal dec_1 = {{0x107d05e5, 0xcaf06c36, 0x9840cd02, 0x0}};
  // -138.36
  s21_decimal dec_2 = {{0x360c, 0x0, 0x0, 0x80020000}};
  // 47120060881945570107568489819
  s21_decimal dec_check = {{0x107d055b, 0xcaf06c36, 0x9840cd02, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_254) {
  // -94626204630016288857639
  s21_decimal dec_1 = {{0x788f9e27, 0xb2638fe1, 0x1409, 0x80000000}};
  // -4
  s21_decimal dec_2 = {{0x4, 0x0, 0x0, 0x80000000}};
  // -94626204630016288857643
  s21_decimal dec_check = {{0x788f9e2b, 0xb2638fe1, 0x1409, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_255) {
  // 4507023999088.90076960864581
  s21_decimal dec_1 = {{0x2bd3945, 0xe688705, 0x174cff2, 0xe0000}};
  // -2611236854550896348.74626
  s21_decimal dec_2 = {{0x1d579502, 0x8b192cd3, 0x374b, 0x80050000}};
  // -2611232347526897259.8454903914
  s21_decimal dec_check = {{0xb3a3e46a, 0x6cb834c, 0x545f9b94, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_256) {
  // 0
  s21_decimal dec_1 = {{0x0, 0x0, 0x0, 0x0}};
  // 475
  s21_decimal dec_2 = {{0x1db, 0x0, 0x0, 0x0}};
  // 475
  s21_decimal dec_check = {{0x1db, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_257) {
  // -8196188
  s21_decimal dec_1 = {{0x7d105c, 0x0, 0x0, 0x80000000}};
  // 854134536
  s21_decimal dec_2 = {{0x32e90f08, 0x0, 0x0, 0x0}};
  // 845938348
  s21_decimal dec_check = {{0x326bfeac, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_258) {
  // -331.62755089900484859826
  s21_decimal dec_1 = {{0x2bca97b2, 0xc1ada275, 0x705, 0x80140000}};
  // 4905367.95
  s21_decimal dec_2 = {{0x1d3cff5b, 0x0, 0x0, 0x20000}};
  // 4905036.32244910099515140174
  s21_decimal dec_check = {{0xf0c1684e, 0x2f41d293, 0x195bc2f, 0x140000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_259) {
  // -65908056.469437170
  s21_decimal dec_1 = {{0x35b27af2, 0xea2707, 0x0, 0x80090000}};
  // -6435841780745462458434
  s21_decimal dec_2 = {{0x6eb9a842, 0xe33f2109, 0x15c, 0x80000000}};
  // -6435841780745528366490.4694372
  s21_decimal dec_check = {{0x338aaa64, 0x3a882142, 0xcff40914, 0x80070000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_260) {
  // 20269.3884610280637389
  s21_decimal dec_1 = {{0x83cb43cd, 0xfcf15622, 0xa, 0x100000}};
  // -49099161441
  s21_decimal dec_2 = {{0x6e89bf61, 0xb, 0x0, 0x80000000}};
  // -49099141171.6115389719362611
  s21_decimal dec_check = {{0xd355bc33, 0xc3416963, 0x1962379, 0x80100000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_261) {
  // -82636370849520377
  s21_decimal dec_1 = {{0x6a035af9, 0x1259557, 0x0, 0x80000000}};
  // 65778.089527
  s21_decimal dec_2 = {{0x50adfe37, 0xf, 0x0, 0x60000}};
  // -82636370849454598.910473
  s21_decimal dec_check = {{0x6233f209, 0xba051552, 0x117f, 0x80060000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_262) {
  // -3.349009991186737
  s21_decimal dec_1 = {{0x26dfb931, 0xbe5e8, 0x0, 0x800f0000}};
  // 423
  s21_decimal dec_2 = {{0x1a7, 0x0, 0x0, 0x0}};
  // 419.650990008813263
  s21_decimal dec_check = {{0x1d1dc6cf, 0x5d2e65a, 0x0, 0xf0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_263) {
  // -60818768860654.74659
  s21_decimal dec_1 = {{0x1976c63, 0x54672ace, 0x0, 0x80050000}};
  // -403632653646
  s21_decimal dec_2 = {{0xfa61854e, 0x5d, 0x0, 0x80000000}};
  // -61222401514300.74659
  s21_decimal dec_check = {{0xf9f9123, 0x54f690fb, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_264) {
  // -81206
  s21_decimal dec_1 = {{0x13d36, 0x0, 0x0, 0x80000000}};
  // -3586508524815729092830221735
  s21_decimal dec_2 = {{0x6348d5a7, 0xb64f7253, 0xb96b0b8, 0x80000000}};
  // -3586508524815729092830302941
  s21_decimal dec_check = {{0x634a12dd, 0xb64f7253, 0xb96b0b8, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_265) {
  // -792328768239
  s21_decimal dec_1 = {{0x7a798aef, 0xb8, 0x0, 0x80000000}};
  // -90477328261421330621
  s21_decimal dec_2 = {{0x306df0bd, 0xe7a00aaf, 0x4, 0x80000000}};
  // -90477329053750098860
  s21_decimal dec_check = {{0xaae77bac, 0xe7a00b67, 0x4, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_266) {
  // 0.753
  s21_decimal dec_1 = {{0x2f1, 0x0, 0x0, 0x30000}};
  // 0.5052225900421242758296
  s21_decimal dec_2 = {{0xd4392498, 0xe1b81097, 0x111, 0x160000}};
  // 1.2582225900421242758296
  s21_decimal dec_check = {{0x77a12498, 0x157610f1, 0x2aa, 0x160000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_267) {
  // -11951239
  s21_decimal dec_1 = {{0xb65c87, 0x0, 0x0, 0x80000000}};
  // -53.503
  s21_decimal dec_2 = {{0xd0ff, 0x0, 0x0, 0x80030000}};
  // -11951292.503
  s21_decimal dec_check = {{0xc85a4057, 0x2, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_268) {
  // -3771.0
  s21_decimal dec_1 = {{0x934e, 0x0, 0x0, 0x80010000}};
  // 915137986599568320463300698
  s21_decimal dec_2 = {{0x4592e85a, 0xa8e63c63, 0x2f4fc01, 0x0}};
  // 915137986599568320463296927.0
  s21_decimal dec_check = {{0xb7bc8036, 0x98fe5be0, 0x1d91d810, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_269) {
  // -1057279034895300605960
  s21_decimal dec_1 = {{0x6a38b808, 0x50b1b088, 0x39, 0x80000000}};
  // 88889
  s21_decimal dec_2 = {{0x15b39, 0x0, 0x0, 0x0}};
  // -1057279034895300517071
  s21_decimal dec_check = {{0x6a375ccf, 0x50b1b088, 0x39, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_270) {
  // -753475659741144844.2
  s21_decimal dec_1 = {{0x59bd867a, 0x6890d534, 0x0, 0x80010000}};
  // 0.7
  s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x10000}};
  // -753475659741144843.5
  s21_decimal dec_check = {{0x59bd8673, 0x6890d534, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_271) {
  // 7127.84007731
  s21_decimal dec_1 = {{0xf53cd233, 0xa5, 0x0, 0x80000}};
  // -746357066250712539
  s21_decimal dec_2 = {{0x2179f5db, 0xa5b97cc, 0x0, 0x80000000}};
  // -746357066250705411.15992269
  s21_decimal dec_check = {{0xcd6fa8cd, 0xc36dd44b, 0x3dbcb9, 0x80080000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_272) {
  // -759053958237544752
  s21_decimal dec_1 = {{0xaa1a6130, 0xa88b38d, 0x0, 0x80000000}};
  // 642722.370
  s21_decimal dec_2 = {{0x264f2a42, 0x0, 0x0, 0x30000}};
  // -759053958236902029.630
  s21_decimal dec_check = {{0x50bc793e, 0x25fd6160, 0x29, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_273) {
  // 8728
  s21_decimal dec_1 = {{0x2218, 0x0, 0x0, 0x0}};
  // -7.7721020118822
  s21_decimal dec_2 = {{0xd5cbb726, 0x46af, 0x0, 0x800d0000}};
  // 8720.2278979881178
  s21_decimal dec_check = {{0xbe3348da, 0x135ce02, 0x0, 0xd0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_274) {
  // 692057.4289337947380653
  s21_decimal dec_1 = {{0xf9c5dbad, 0x2a42f160, 0x177, 0x100000}};
  // 0.8639
  s21_decimal dec_2 = {{0x21bf, 0x0, 0x0, 0x40000}};
  // 692058.2928337947380653
  s21_decimal dec_check = {{0xe7fccbad, 0x2a61a280, 0x177, 0x100000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_275) {
  // 3281749701913975085024.3
  s21_decimal dec_1 = {{0x418f6ec3, 0xa42905b, 0x6f3, 0x10000}};
  // -99138.1054377010826752
  s21_decimal dec_2 = {{0xd9f28e00, 0xbe2d0864, 0x35, 0x80100000}};
  // 3281749701913974985886.1945623
  s21_decimal dec_check = {{0x8ec9317, 0x2f347438, 0x6a09ff4e, 0x70000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_276) {
  // -5609956489848
  s21_decimal dec_1 = {{0x2b76ba78, 0x51a, 0x0, 0x80000000}};
  // 5.7967
  s21_decimal dec_2 = {{0xe26f, 0x0, 0x0, 0x40000}};
  // -5609956489842.2033
  s21_decimal dec_check = {{0xcdd30d11, 0xc74e41, 0x0, 0x80040000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_277) {
  // 95953
  s21_decimal dec_1 = {{0x176d1, 0x0, 0x0, 0x0}};
  // -4
  s21_decimal dec_2 = {{0x4, 0x0, 0x0, 0x80000000}};
  // 95949
  s21_decimal dec_check = {{0x176cd, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_278) {
  // 345431959289
  s21_decimal dec_1 = {{0x6d5966f9, 0x50, 0x0, 0x0}};
  // 427743905898439206368
  s21_decimal dec_2 = {{0x5a9565e0, 0x3023a021, 0x17, 0x0}};
  // 427743906243871165657
  s21_decimal dec_check = {{0xc7eeccd9, 0x3023a071, 0x17, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_279) {
  // 50856652264683
  s21_decimal dec_1 = {{0xfcb154eb, 0x2e40, 0x0, 0x0}};
  // -8768
  s21_decimal dec_2 = {{0x2240, 0x0, 0x0, 0x80000000}};
  // 50856652255915
  s21_decimal dec_check = {{0xfcb132ab, 0x2e40, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_280) {
  // -85280
  s21_decimal dec_1 = {{0x14d20, 0x0, 0x0, 0x80000000}};
  // 93146195133464370.9
  s21_decimal dec_2 = {{0xab17f7fd, 0xced37b5, 0x0, 0x10000}};
  // 93146195133379090.9
  s21_decimal dec_check = {{0xab0af4bd, 0xced37b5, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_281) {
  // 11742636265769.5595
  s21_decimal dec_1 = {{0x997a676b, 0x1a12ea7, 0x0, 0x40000}};
  // 9
  s21_decimal dec_2 = {{0x9, 0x0, 0x0, 0x0}};
  // 11742636265778.5595
  s21_decimal dec_check = {{0x997bc6fb, 0x1a12ea7, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_282) {
  // 86020112729
  s21_decimal dec_1 = {{0x732c159, 0x14, 0x0, 0x0}};
  // -25854997666180660917
  s21_decimal dec_2 = {{0x49407eb5, 0x66cf6764, 0x1, 0x80000000}};
  // -25854997580160548188
  s21_decimal dec_check = {{0x420dbd5c, 0x66cf6750, 0x1, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_283) {
  // -23238673052
  s21_decimal dec_1 = {{0x6922029c, 0x5, 0x0, 0x80000000}};
  // -0.922
  s21_decimal dec_2 = {{0x39a, 0x0, 0x0, 0x80030000}};
  // -23238673052.922
  s21_decimal dec_check = {{0xacda34fa, 0x1522, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_285) {
  // 43270950613094
  s21_decimal dec_1 = {{0xcda3f066, 0x275a, 0x0, 0x0}};
  // 837398
  s21_decimal dec_2 = {{0xcc716, 0x0, 0x0, 0x0}};
  // 43270951450492
  s21_decimal dec_check = {{0xcdb0b77c, 0x275a, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_286) {
  // 7710.9864326373794
  s21_decimal dec_1 = {{0x57da21a2, 0x111f303, 0x0, 0xd0000}};
  // -249308
  s21_decimal dec_2 = {{0x3cddc, 0x0, 0x0, 0x80000000}};
  // -241597.0135673626206
  s21_decimal dec_check = {{0xbcc75e5e, 0x21874009, 0x0, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_287) {
  // -5847152858589936054892765
  s21_decimal dec_1 = {{0x8e06f8dd, 0xcaa6bffa, 0x4d62e, 0x80000000}};
  // 70269
  s21_decimal dec_2 = {{0x1127d, 0x0, 0x0, 0x0}};
  // -5847152858589936054822496
  s21_decimal dec_check = {{0x8e05e660, 0xcaa6bffa, 0x4d62e, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_288) {
  // 902276061.97014157475660270
  s21_decimal dec_1 = {{0x58a741ee, 0x55358e9a, 0x4aa270, 0x110000}};
  // -4640035341753570649011
  s21_decimal dec_2 = {{0x2fd163b3, 0x896d075d, 0xfb, 0x80000000}};
  // -4640035341752668372949.0298584
  s21_decimal dec_check = {{0xa1c346d8, 0xf8089ec8, 0x95ed7906, 0x80070000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_289) {
  // 19312569181041399610
  s21_decimal dec_1 = {{0x821173a, 0xc040759, 0x1, 0x0}};
  // 43530052262723201503425408208
  s21_decimal dec_2 = {{0x5b8b2cd0, 0x95256a30, 0x8ca7371d, 0x0}};
  // 43530052282035770684466807818
  s21_decimal dec_check = {{0x63ac440a, 0xa1297189, 0x8ca7371e, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_290) {
  // -34477540936.08010
  s21_decimal dec_1 = {{0xce05bc4a, 0xc3fb6, 0x0, 0x80050000}};
  // -351360188632922524
  s21_decimal dec_2 = {{0xdfadf99c, 0x4e0483a, 0x0, 0x80000000}};
  // -351360223110463460.08010
  s21_decimal dec_check = {{0xa50565ca, 0xba431545, 0x770, 0x80050000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_291) {
  // 789.691688232347003
  s21_decimal dec_1 = {{0xf2ae57b, 0xaf58c68, 0x0, 0xf0000}};
  // -769244500145641893542
  s21_decimal dec_2 = {{0x1be82ea6, 0xb3697540, 0x29, 0x80000000}};
  // -769244500145641892752.30831177
  s21_decimal dec_check = {{0x90f00249, 0x26f39692, 0xf88e69e7, 0x80080000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_292) {
  // 0.7943
  s21_decimal dec_1 = {{0x1f07, 0x0, 0x0, 0x40000}};
  // 1029.58536
  s21_decimal dec_2 = {{0x62305c8, 0x0, 0x0, 0x50000}};
  // 1030.37966
  s21_decimal dec_check = {{0x6243c0e, 0x0, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_293) {
  // -480489325032643.928911
  s21_decimal dec_1 = {{0x29f2a34f, 0xc20ff60, 0x1a, 0x80060000}};
  // -94505183116
  s21_decimal dec_2 = {{0xf2a78c, 0x16, 0x0, 0x80000000}};
  // -480583830215759.928911
  s21_decimal dec_check = {{0xc7029e4f, 0xd70bf56, 0x1a, 0x80060000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_294) {
  // -592556181445.77066460621
  s21_decimal dec_1 = {{0xcb5d65cd, 0x40e520c5, 0xc8c, 0x800b0000}};
  // -231961074159
  s21_decimal dec_2 = {{0x1f519ef, 0x36, 0x0, 0x80000000}};
  // -824517255604.77066460621
  s21_decimal dec_check = {{0x1707fdcd, 0xb78d3d4a, 0x1175, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_295) {
  // -925367132
  s21_decimal dec_1 = {{0x3727fb5c, 0x0, 0x0, 0x80000000}};
  // 337002347372610646002
  s21_decimal dec_2 = {{0xa140eff2, 0x44d8d96b, 0x12, 0x0}};
  // 337002347371685278870
  s21_decimal dec_check = {{0x6a18f496, 0x44d8d96b, 0x12, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_296) {
  // -0.77922422970
  s21_decimal dec_1 = {{0x2489d0ba, 0x12, 0x0, 0x800b0000}};
  // 78
  s21_decimal dec_2 = {{0x4e, 0x0, 0x0, 0x0}};
  // 77.22077577030
  s21_decimal dec_check = {{0xefb0df46, 0x705, 0x0, 0xb0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_297) {
  // -270194155292083319145158.32603
  s21_decimal dec_1 = {{0xf61bdf1b, 0xcd851dd5, 0x574defca, 0x80050000}};
  // -477
  s21_decimal dec_2 = {{0x1dd, 0x0, 0x0, 0x80000000}};
  // -270194155292083319145635.32603
  s21_decimal dec_check = {{0xf8f3b73b, 0xcd851dd5, 0x574defca, 0x80050000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_298) {
  // 1570781680748078393456
  s21_decimal dec_1 = {{0x48416870, 0x26f99048, 0x55, 0x0}};
  // -5283017266429277495
  s21_decimal dec_2 = {{0x93c5b537, 0x49510c36, 0x0, 0x80000000}};
  // 1565498663481649115961
  s21_decimal dec_check = {{0xb47bb339, 0xdda88411, 0x54, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_299) {
  // 35980287867105382.239353073614
  s21_decimal dec_1 = {{0x27526fce, 0x9bc4fddb, 0x74423251, 0xc0000}};
  // -9409
  s21_decimal dec_2 = {{0x24c1, 0x0, 0x0, 0x80000000}};
  // 35980287867095973.239353073614
  s21_decimal dec_check = {{0xa0a15fce, 0x9ba3906b, 0x74423251, 0xc0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_300) {
  // -40942.7051568
  s21_decimal dec_1 = {{0x53c10430, 0x5f, 0x0, 0x80070000}};
  // 905.08816869148234619
  s21_decimal dec_2 = {{0xfe76937b, 0xe80fe967, 0x4, 0x110000}};
  // -40037.61698810851765381
  s21_decimal dec_check = {{0xd7542c85, 0xb5af43a, 0xd9, 0x80110000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_301) {
  // -245422466383513
  s21_decimal dec_1 = {{0xdeedbe99, 0xdf35, 0x0, 0x80000000}};
  // -1105761046195.90381
  s21_decimal dec_2 = {{0x9c7f42ed, 0x188d861, 0x0, 0x80050000}};
  // -246528227429708.90381
  s21_decimal dec_check = {{0x2173788d, 0x56206bab, 0x1, 0x80050000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_302) {
  // 9031157820244160
  s21_decimal dec_1 = {{0x49c940c0, 0x2015ca, 0x0, 0x0}};
  // 2537913661912004119
  s21_decimal dec_2 = {{0x70e03617, 0x23387b07, 0x0, 0x0}};
  // 2546944819732248279
  s21_decimal dec_check = {{0xbaa976d7, 0x235890d1, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_303) {
  // -287350.4671794603914028645406
  s21_decimal dec_1 = {{0xa3ebfc1e, 0x63edd552, 0x948e848, 0x80160000}};
  // -2
  s21_decimal dec_2 = {{0x2, 0x0, 0x0, 0x80000000}};
  // -287352.4671794603914028645406
  s21_decimal dec_check = {{0x86bfc1e, 0x97af68c8, 0x948ec84, 0x80160000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_304) {
  // -7566078154748027769848915
  s21_decimal dec_1 = {{0x86220453, 0xeb2b3f39, 0x6422d, 0x80000000}};
  // -64058327563.5
  s21_decimal dec_2 = {{0x25bd1473, 0x95, 0x0, 0x80010000}};
  // -7566078154748091828176478.5
  s21_decimal dec_check = {{0x63113fb1, 0x2fb078d4, 0x3e95cb, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_305) {
  // 15971
  s21_decimal dec_1 = {{0x3e63, 0x0, 0x0, 0x0}};
  // 3434291184103.03312
  s21_decimal dec_2 = {{0xb05f2750, 0x4c41af6, 0x0, 0x50000}};
  // 3434291200074.03312
  s21_decimal dec_check = {{0xf90f730, 0x4c41af7, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_306) {
  // -9029
  s21_decimal dec_1 = {{0x2345, 0x0, 0x0, 0x80000000}};
  // -76779862054544679916757004
  s21_decimal dec_2 = {{0xce6b600c, 0xa98198ae, 0x3f82c4, 0x80000000}};
  // -76779862054544679916766033
  s21_decimal dec_check = {{0xce6b8351, 0xa98198ae, 0x3f82c4, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_307) {
  // -6870681.076925449
  s21_decimal dec_1 = {{0x18f48409, 0x1868d9, 0x0, 0x80090000}};
  // -44857
  s21_decimal dec_2 = {{0xaf39, 0x0, 0x0, 0x80000000}};
  // -6915538.076925449
  s21_decimal dec_check = {{0x2e817e09, 0x1891a5, 0x0, 0x80090000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_308) {
  // -6.39
  s21_decimal dec_1 = {{0x27f, 0x0, 0x0, 0x80020000}};
  // -137514079493949.6189425198682
  s21_decimal dec_2 = {{0x292da65a, 0xde0a248d, 0x4717d63, 0x800d0000}};
  // -137514079493956.0089425198682
  s21_decimal dec_check = {{0x9fabe5a, 0xde0a5eab, 0x4717d63, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_309) {
  // 653844340.1701234303
  s21_decimal dec_1 = {{0xb666167f, 0x5abd37a1, 0x0, 0xa0000}};
  // 40516385
  s21_decimal dec_2 = {{0x26a3b21, 0x0, 0x0, 0x0}};
  // 694360725.1701234303
  s21_decimal dec_check = {{0xb17a7a7f, 0x605ca601, 0x0, 0xa0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_310) {
  // 837569040067160607769.61153
  s21_decimal dec_1 = {{0x7d869481, 0xdd3ea400, 0x454836, 0x50000}};
  // 69748048455903956
  s21_decimal dec_2 = {{0x3fdaad4, 0xf7cb7b, 0x0, 0x0}};
  // 837638788115616511725.61153
  s21_decimal dec_check = {{0x6e505101, 0xf81b38f7, 0x4549b0, 0x50000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_311) {
  // 54312557630760381545685
  s21_decimal dec_1 = {{0xd3ff7cd5, 0x4a266ce9, 0xb80, 0x0}};
  // 7175180344564905174506367
  s21_decimal dec_2 = {{0xefae1b7f, 0x4e4dff08, 0x5ef67, 0x0}};
  // 7229492902195665556052052
  s21_decimal dec_check = {{0xc3ad9854, 0x98746bf2, 0x5fae7, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_312) {
  // 481.88480317266958389
  s21_decimal dec_1 = {{0xf8999835, 0x9cbfdf88, 0x2, 0x110000}};
  // 349373.201465310288
  s21_decimal dec_2 = {{0x5f617c50, 0x4d93913, 0x0, 0xc0000}};
  // 349855.08626848295758389
  s21_decimal dec_check = {{0x18e92a35, 0x91770ef3, 0x768, 0x110000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_313) {
  // -334.02828724427941
  s21_decimal dec_1 = {{0x1c9cdca5, 0x76abb2, 0x0, 0x800e0000}};
  // 7173735.3402270948177896788556
  s21_decimal dec_2 = {{0x56bbd24c, 0x5ae9a6e4, 0xe7cbbf78, 0x160000}};
  // 7173401.3119398505383796788556
  s21_decimal dec_check = {{0x15e5cd4c, 0x41fda950, 0xe7c8fc23, 0x160000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_314) {
  // 5190.093121373708479240
  s21_decimal dec_1 = {{0xf63beb08, 0x5b02d398, 0x119, 0x120000}};
  // -2.7681
  s21_decimal dec_2 = {{0x6c21, 0x0, 0x0, 0x80040000}};
  // 5187.325021373708479240
  s21_decimal dec_check = {{0x4379ab08, 0x34988f50, 0x119, 0x120000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_315) {
  // -2162
  s21_decimal dec_1 = {{0x872, 0x0, 0x0, 0x80000000}};
  // 2356007235939754
  s21_decimal dec_2 = {{0xae62edaa, 0x85ec6, 0x0, 0x0}};
  // 2356007235937592
  s21_decimal dec_check = {{0xae62e538, 0x85ec6, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_316) {
  // 134.8
  s21_decimal dec_1 = {{0x544, 0x0, 0x0, 0x10000}};
  // 61210095179003775576777239
  s21_decimal dec_2 = {{0x63112217, 0xe8972097, 0x32a1bd, 0x0}};
  // 61210095179003775576777373.8
  s21_decimal dec_check = {{0xdeab5a2a, 0x15e745e9, 0x1fa516b, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_317) {
  // -467852438565592620549141514
  s21_decimal dec_1 = {{0xe801f40a, 0x83c826e3, 0x182ff9b, 0x80000000}};
  // -37260785800615925.668639
  s21_decimal dec_2 = {{0x5f385b1f, 0xe947658e, 0x7e3, 0x80060000}};
  // -467852438602853406349757439.67
  s21_decimal dec_check = {{0xba86afdf, 0xade4e1c0, 0x972bd8bf, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_318) {
  // 124756138841.0731327381
  s21_decimal dec_1 = {{0x62c56f95, 0xa16468e5, 0x43, 0xa0000}};
  // 222334199485223.07144
  s21_decimal dec_2 = {{0x3dc17e48, 0x348cf9a5, 0x1, 0x50000}};
  // 222458955624064.1445727381
  s21_decimal dec_check = {{0xc2160c95, 0x3dd22c40, 0x1d713, 0xa0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_319) {
  // -7930461659
  s21_decimal dec_1 = {{0xd8b13ddb, 0x1, 0x0, 0x80000000}};
  // 9264625345754151
  s21_decimal dec_2 = {{0xaeb5f427, 0x20ea20, 0x0, 0x0}};
  // 9264617415292492
  s21_decimal dec_check = {{0xd604b64c, 0x20ea1e, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_320) {
  // -280188112935846568985
  s21_decimal dec_1 = {{0x42a6419, 0x30642437, 0xf, 0x80000000}};
  // -0.782094917894292240709805
  s21_decimal dec_2 = {{0x61d5b8ad, 0x7350ec64, 0xa59d, 0x80180000}};
  // -280188112935846568985.78209492
  s21_decimal dec_check = {{0x8f905ad4, 0xbf902b2f, 0x5a889e13, 0x80080000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_321) {
  // 70.168700489459013846
  s21_decimal dec_1 = {{0x50fb98d6, 0xcdc94d53, 0x3, 0x120000}};
  // 6850636860
  s21_decimal dec_2 = {{0x98546c3c, 0x1, 0x0, 0x0}};
  // 6850636930.168700489459013846
  s21_decimal dec_check = {{0xbc6b98d6, 0x214236dc, 0x1622b6cc, 0x120000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_322) {
  // 7971846009607
  s21_decimal dec_1 = {{0x170cb307, 0x740, 0x0, 0x0}};
  // -2.0
  s21_decimal dec_2 = {{0x14, 0x0, 0x0, 0x80010000}};
  // 7971846009605.0
  s21_decimal dec_check = {{0xe67efe32, 0x4880, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_323) {
  // 52467313285806302
  s21_decimal dec_1 = {{0x52b838de, 0xba66be, 0x0, 0x0}};
  // -5612313082671148556051585
  s21_decimal dec_2 = {{0xbf9f6481, 0x1a12844c, 0x4a474, 0x80000000}};
  // -5612313030203835270245283
  s21_decimal dec_check = {{0x6ce72ba3, 0x19581d8e, 0x4a474, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_324) {
  // -4.1890649
  s21_decimal dec_1 = {{0x27f3359, 0x0, 0x0, 0x80070000}};
  // 923
  s21_decimal dec_2 = {{0x39b, 0x0, 0x0, 0x0}};
  // 918.8109351
  s21_decimal dec_check = {{0x23a76c27, 0x2, 0x0, 0x70000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_325) {
  // 18069633
  s21_decimal dec_1 = {{0x113b881, 0x0, 0x0, 0x0}};
  // 471956916.90397
  s21_decimal dec_2 = {{0x9a70299d, 0x2aec, 0x0, 0x50000}};
  // 490026549.90397
  s21_decimal dec_check = {{0x51d8003d, 0x2c91, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_327) {
  // 287468400644436
  s21_decimal dec_1 = {{0x73e79154, 0x10573, 0x0, 0x0}};
  // -79959428077
  s21_decimal dec_2 = {{0x9df40bed, 0x12, 0x0, 0x80000000}};
  // 287388441216359
  s21_decimal dec_check = {{0xd5f38567, 0x10560, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_329) {
  // -95356407255391953
  s21_decimal dec_1 = {{0xad83ded1, 0x152c625, 0x0, 0x80000000}};
  // 10278309273408537739
  s21_decimal dec_2 = {{0xcd1e848b, 0x8ea3e3d3, 0x0, 0x0}};
  // 10182952866153145786
  s21_decimal dec_check = {{0x1f9aa5ba, 0x8d511dae, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_330) {
  // 48
  s21_decimal dec_1 = {{0x30, 0x0, 0x0, 0x0}};
  // -219
  s21_decimal dec_2 = {{0xdb, 0x0, 0x0, 0x80000000}};
  // -171
  s21_decimal dec_check = {{0xab, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_331) {
  // -8158433100832516864
  s21_decimal dec_1 = {{0x12e92b00, 0x713893ae, 0x0, 0x80000000}};
  // 27069364060942157
  s21_decimal dec_2 = {{0x7525ef4d, 0x602b71, 0x0, 0x0}};
  // -8131363736771574707
  s21_decimal dec_check = {{0x9dc33bb3, 0x70d8683c, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_332) {
  // -7594
  s21_decimal dec_1 = {{0x1daa, 0x0, 0x0, 0x80000000}};
  // -49087812082202119453
  s21_decimal dec_2 = {{0xa8c90d1d, 0xa93af102, 0x2, 0x80000000}};
  // -49087812082202127047
  s21_decimal dec_check = {{0xa8c92ac7, 0xa93af102, 0x2, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_333) {
  // -70950201.0749035690673954
  s21_decimal dec_1 = {{0xb53d4722, 0x2e5ab97c, 0x963e, 0x80100000}};
  // -3.15370
  s21_decimal dec_2 = {{0x4cfea, 0x0, 0x0, 0x80050000}};
  // -70950204.2286035690673954
  s21_decimal dec_check = {{0xb7855722, 0x2ecac438, 0x963e, 0x80100000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_334) {
  // 5206225445027106799169
  s21_decimal dec_1 = {{0xd0ac3e41, 0x3ae45a7c, 0x11a, 0x0}};
  // 7.35394
  s21_decimal dec_2 = {{0xb38a2, 0x0, 0x0, 0x50000}};
  // 5206225445027106799176.35394
  s21_decimal dec_check = {{0xd2892742, 0xb092b3e8, 0x1aea61c, 0x50000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_335) {
  // -451044328.916081902353175416
  s21_decimal dec_1 = {{0x558cd378, 0x109d8e76, 0x175185a, 0x80120000}};
  // -56414.870076758352103635
  s21_decimal dec_2 = {{0x139e88d3, 0x41989c05, 0xbf2, 0x80120000}};
  // -451100743.786158660705279051
  s21_decimal dec_check = {{0x692b5c4b, 0x52362a7b, 0x175244c, 0x80120000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_336) {
  // 3
  s21_decimal dec_1 = {{0x3, 0x0, 0x0, 0x0}};
  // 9854298468
  s21_decimal dec_2 = {{0x4b5ca964, 0x2, 0x0, 0x0}};
  // 9854298471
  s21_decimal dec_check = {{0x4b5ca967, 0x2, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_337) {
  // 3
  s21_decimal dec_1 = {{0x3, 0x0, 0x0, 0x0}};
  // 0.1783660340324260231001695139
  s21_decimal dec_2 = {{0xe7f463a3, 0xcc3bf4be, 0x5c368c4, 0x1c0000}};
  // 3.1783660340324260231001695139
  s21_decimal dec_check = {{0x17f463a3, 0x86aafbe2, 0x66b2d3df, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_338) {
  // -890066515812302234394371
  s21_decimal dec_1 = {{0x757d1f03, 0x9a3dc4c7, 0xbc7a, 0x80000000}};
  // -779033541682.6676
  s21_decimal dec_2 = {{0xcf337b34, 0x1bad44, 0x0, 0x80040000}};
  // -890066515813081267936053.6676
  s21_decimal dec_check = {{0x36bee064, 0xcf25ca2, 0x1cc27529, 0x80040000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_339) {
  // 320637880.008667872366
  s21_decimal dec_1 = {{0x3af8bc6e, 0x61be950e, 0x11, 0xc0000}};
  // 1925.0965115698549
  s21_decimal dec_2 = {{0x994dfd75, 0x4464a6, 0x0, 0xd0000}};
  // 320639805.1051794422209
  s21_decimal dec_check = {{0xe70559c1, 0xd1b63734, 0xad, 0xd0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_340) {
  // -84
  s21_decimal dec_1 = {{0x54, 0x0, 0x0, 0x80000000}};
  // -0.38393864
  s21_decimal dec_2 = {{0x249d808, 0x0, 0x0, 0x80080000}};
  // -84.38393864
  s21_decimal dec_check = {{0xf6f7ac08, 0x1, 0x0, 0x80080000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_341) {
  // 51113718720905060712350.418916
  s21_decimal dec_1 = {{0xaacf07e4, 0xd08a72f, 0xa52846f4, 0x60000}};
  // -27082665221
  s21_decimal dec_2 = {{0x4e40ad05, 0x6, 0x0, 0x80000000}};
  // 51113718720877978047129.418916
  s21_decimal dec_check = {{0x4abd7ca4, 0xca86fa5, 0xa52846f4, 0x60000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_342) {
  // 57478491.91013929755588780
  s21_decimal dec_1 = {{0x1abfb8ac, 0x876c98fb, 0x4c127, 0x110000}};
  // -1673468
  s21_decimal dec_2 = {{0x1988fc, 0x0, 0x0, 0x80000000}};
  // 55805023.91013929755588780
  s21_decimal dec_check = {{0xb6e7b8ac, 0xa40b2253, 0x49db7, 0x110000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_343) {
  // -0.06
  s21_decimal dec_1 = {{0x6, 0x0, 0x0, 0x80020000}};
  // -1262228272701167818341083
  s21_decimal dec_2 = {{0xfb757adb, 0x882231b4, 0x10b49, 0x80000000}};
  // -1262228272701167818341083.06
  s21_decimal dec_check = {{0x39e3fd92, 0x2d5b6ab2, 0x6868b9, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_345) {
  // 2815310098013
  s21_decimal dec_1 = {{0x7d8eee5d, 0x28f, 0x0, 0x0}};
  // -618232919101036
  s21_decimal dec_2 = {{0x91880e6c, 0x23247, 0x0, 0x80000000}};
  // -615417609003023
  s21_decimal dec_check = {{0x13f9200f, 0x22fb8, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_346) {
  // 99970284
  s21_decimal dec_1 = {{0x5f56cec, 0x0, 0x0, 0x0}};
  // 24103330.2147284
  s21_decimal dec_2 = {{0xf05a80d4, 0xdb37, 0x0, 0x70000}};
  // 124073614.2147284
  s21_decimal dec_check = {{0x65033ed4, 0x46871, 0x0, 0x70000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_347) {
  // -4.41189618711
  s21_decimal dec_1 = {{0xb8f35417, 0x66, 0x0, 0x800b0000}};
  // -6298.6
  s21_decimal dec_2 = {{0xf60a, 0x0, 0x0, 0x80010000}};
  // -6303.01189618711
  s21_decimal dec_check = {{0x6e823c17, 0x23d41, 0x0, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_348) {
  // -9176550640119082
  s21_decimal dec_1 = {{0x312aed2a, 0x209a06, 0x0, 0x80000000}};
  // -5191087429366075381
  s21_decimal dec_2 = {{0x715c4ff5, 0x480a7283, 0x0, 0x80000000}};
  // -5200263980006194463
  s21_decimal dec_check = {{0xa2873d1f, 0x482b0c89, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_349) {
  // -9419217487184129
  s21_decimal dec_1 = {{0x7862c101, 0x2176ba, 0x0, 0x80000000}};
  // 22804013261966887864337978
  s21_decimal dec_2 = {{0xa2a5863a, 0x9375679, 0x12dcf0, 0x0}};
  // 22804013252547670377153849
  s21_decimal dec_check = {{0x2a42c539, 0x915dfbf, 0x12dcf0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_350) {
  // 7375.050276695885
  s21_decimal dec_1 = {{0xb3f16f4d, 0x1a3391, 0x0, 0xc0000}};
  // 63191.8814400
  s21_decimal dec_2 = {{0x214be4c0, 0x93, 0x0, 0x70000}};
  // 70566.931716695885
  s21_decimal dec_check = {{0x21dce74d, 0xfab440, 0x0, 0xc0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_351) {
  // 498071.61427316611248276
  s21_decimal dec_1 = {{0x50847094, 0xd37b47e, 0xa8c, 0x110000}};
  // -501661647974
  s21_decimal dec_2 = {{0xcd5d4466, 0x74, 0x0, 0x80000000}};
  // -501661149902.38572683388751724
  s21_decimal dec_check = {{0x9c778f6c, 0xe0f36f71, 0xa218700e, 0x80110000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_352) {
  // -786862596114877684177316
  s21_decimal dec_1 = {{0xd3a8d9a4, 0xe8248dc5, 0xa69f, 0x80000000}};
  // 597415678204153474.5
  s21_decimal dec_2 = {{0xda139119, 0x52e877f0, 0x0, 0x10000}};
  // -786861998699199480023841.5
  s21_decimal dec_check = {{0x6a84ef4f, 0xbe8511c9, 0x6823e, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_353) {
  // -56342072.9210306663597964
  s21_decimal dec_1 = {{0x492cc78c, 0x195395d0, 0x774f, 0x80100000}};
  // 4020520722.6287271
  s21_decimal dec_2 = {{0x46d804a7, 0x8ed66c, 0x0, 0x70000}};
  // 3964178649.7076964336402036
  s21_decimal dec_check = {{0x73f4fe74, 0x8d54411b, 0x20ca79, 0x100000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_354) {
  // -31261068392079251
  s21_decimal dec_1 = {{0xaccf1f93, 0x6f0fc6, 0x0, 0x80000000}};
  // 84982592.041016730160809
  s21_decimal dec_2 = {{0x24c18ea9, 0xea61343c, 0x11fe, 0xf0000}};
  // -31261068307096658.958983269839
  s21_decimal dec_check = {{0xbefa8dcf, 0xa37b1e75, 0x65028cb4, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_356) {
  // -74676768227443844725320
  s21_decimal dec_1 = {{0x97623a48, 0x3c57f862, 0xfd0, 0x80000000}};
  // -54467471086668.417
  s21_decimal dec_2 = {{0x59ef4a81, 0xc181e0, 0x0, 0x80030000}};
  // -74676768281911315811988.417
  s21_decimal dec_check = {{0xb1a2f3c1, 0xb863c2ff, 0x3dc56b, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_357) {
  // -6193929035819429
  s21_decimal dec_1 = {{0x7bf1a9a5, 0x160158, 0x0, 0x80000000}};
  // -36170808269.4
  s21_decimal dec_2 = {{0x377b5606, 0x54, 0x0, 0x80010000}};
  // -6193965206627698.4
  s21_decimal dec_check = {{0xeebf678, 0xdc0dc9, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_358) {
  // -8.753187828978
  s21_decimal dec_1 = {{0x2a6b4f2, 0x7f6, 0x0, 0x800c0000}};
  // -25379
  s21_decimal dec_2 = {{0x6323, 0x0, 0x0, 0x80000000}};
  // -25387.753187828978
  s21_decimal dec_check = {{0xea67e4f2, 0x5a3206, 0x0, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_359) {
  // 3
  s21_decimal dec_1 = {{0x3, 0x0, 0x0, 0x0}};
  // -3296439325336021603341
  s21_decimal dec_2 = {{0xe9e5940d, 0xb349151b, 0xb2, 0x80000000}};
  // -3296439325336021603338
  s21_decimal dec_check = {{0xe9e5940a, 0xb349151b, 0xb2, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_360) {
  // -7409985062868906634021602632
  s21_decimal dec_1 = {{0x90ae8548, 0x2991c123, 0x17f1655f, 0x80000000}};
  // 5374124194821702135838108915
  s21_decimal dec_2 = {{0x9b176cf3, 0x5c93ca13, 0x115d5f10, 0x0}};
  // -2035860868047204498183493717
  s21_decimal dec_check = {{0xf5971855, 0xccfdf70f, 0x694064e, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_361) {
  // -53098223502375945612
  s21_decimal dec_1 = {{0xef6a858c, 0xe0e2c8f2, 0x2, 0x80000000}};
  // 0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
  // -53098223502375945612
  s21_decimal dec_check = {{0xef6a858c, 0xe0e2c8f2, 0x2, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_362) {
  // -76770.3379872769419937572530
  s21_decimal dec_1 = {{0x579fe6b2, 0x9d375d76, 0x27b0783, 0x80160000}};
  // 2219947407523702.85949619425
  s21_decimal dec_2 = {{0x34e60ce1, 0x29cb788, 0xb7a137, 0xb0000}};
  // 2219947407446932.5215089173080
  s21_decimal dec_check = {{0x97ae2258, 0xfa90430c, 0x47baf97c, 0xd0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_363) {
  // -52
  s21_decimal dec_1 = {{0x34, 0x0, 0x0, 0x80000000}};
  // -4133484920764561.187868
  s21_decimal dec_2 = {{0x2d55641c, 0x13a06b4b, 0xe0, 0x80060000}};
  // -4133484920764613.187868
  s21_decimal dec_check = {{0x306ed91c, 0x13a06b4b, 0xe0, 0x80060000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_364) {
  // -217496
  s21_decimal dec_1 = {{0x35198, 0x0, 0x0, 0x80000000}};
  // 454584522.6
  s21_decimal dec_2 = {{0xef417ea, 0x1, 0x0, 0x10000}};
  // 454367026.6
  s21_decimal dec_check = {{0xed2e7fa, 0x1, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_365) {
  // -239181968526516037271757
  s21_decimal dec_1 = {{0x5106c0cd, 0x149b4e7c, 0x32a6, 0x80000000}};
  // 92063867819052993159213865
  s21_decimal dec_2 = {{0x2285b329, 0x465c07e3, 0x4c2748, 0x0}};
  // 91824685850526477121942108
  s21_decimal dec_check = {{0xd17ef25c, 0x31c0b966, 0x4bf4a2, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_366) {
  // -3
  s21_decimal dec_1 = {{0x3, 0x0, 0x0, 0x80000000}};
  // 23.68416353750
  s21_decimal dec_2 = {{0x709d8dd6, 0x227, 0x0, 0xb0000}};
  // 20.68416353750
  s21_decimal dec_check = {{0x9738d5d6, 0x1e1, 0x0, 0xb0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_367) {
  // 552416392.18596
  s21_decimal dec_1 = {{0xf2484da4, 0x323d, 0x0, 0x50000}};
  // -139294272500049555
  s21_decimal dec_2 = {{0x1f9ca693, 0x1eedf67, 0x0, 0x80000000}};
  // -139294271947633162.81404
  s21_decimal dec_check = {{0x7563c03c, 0x1da2885e, 0x2f3, 0x80050000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_368) {
  // -1747301.14097295871
  s21_decimal dec_1 = {{0xee5531ff, 0x26cc41c, 0x0, 0x800b0000}};
  // -89.6606329242043
  s21_decimal dec_2 = {{0x6dc201bb, 0x32f75, 0x0, 0x800d0000}};
  // -1747390.8016058829143
  s21_decimal dec_check = {{0x87098957, 0xf27fcac2, 0x0, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_369) {
  // -1428743
  s21_decimal dec_1 = {{0x15cd07, 0x0, 0x0, 0x80000000}};
  // -6387592069871.1793048153869390
  s21_decimal dec_2 = {{0x6575cc4e, 0x8d817022, 0xce64ec57, 0x80100000}};
  // -6387593498614.1793048153869390
  s21_decimal dec_check = {{0xbccc4e, 0x136d6f16, 0xce64ef5e, 0x80100000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_370) {
  // 7833.3
  s21_decimal dec_1 = {{0x131fd, 0x0, 0x0, 0x10000}};
  // -85572680915780.7
  s21_decimal dec_2 = {{0x6c7c10af, 0x30a47, 0x0, 0x80010000}};
  // -85572680907947.4
  s21_decimal dec_check = {{0x6c7adeb2, 0x30a47, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_371) {
  // -6461975046465058999933065
  s21_decimal dec_1 = {{0xca249889, 0x5e83a4d7, 0x55860, 0x80000000}};
  // 36563153.3316766710
  s21_decimal dec_2 = {{0x3e06fbf6, 0x512fbf1, 0x0, 0xa0000}};
  // -6461975046465058963369911.6683
  s21_decimal dec_check = {{0x142ff68b, 0xf6572cf3, 0xd0cc346b, 0x80040000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_372) {
  // 48641465215.6861850565548917
  s21_decimal dec_1 = {{0xa1351b75, 0x213eabb1, 0x1925a4f, 0x100000}};
  // 40166155048537200067530158
  s21_decimal dec_2 = {{0x65b6cdae, 0xa0d1c289, 0x213983, 0x0}};
  // 40166155048537248708995373.686
  s21_decimal dec_check = {{0x8b54da76, 0x336014f2, 0x81c8aa2c, 0x30000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_373) {
  // -0.53
  s21_decimal dec_1 = {{0x35, 0x0, 0x0, 0x80020000}};
  // 25.127
  s21_decimal dec_2 = {{0x6227, 0x0, 0x0, 0x30000}};
  // 24.597
  s21_decimal dec_check = {{0x6015, 0x0, 0x0, 0x30000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_374) {
  // -6547780885
  s21_decimal dec_1 = {{0x86473515, 0x1, 0x0, 0x80000000}};
  // -49583850376966100317000214
  s21_decimal dec_2 = {{0x5f2a5216, 0xea39d847, 0x2903c9, 0x80000000}};
  // -49583850376966106864781099
  s21_decimal dec_check = {{0xe571872b, 0xea39d848, 0x2903c9, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_375) {
  // 2970452518031037723595
  s21_decimal dec_1 = {{0x6c9e73cb, 0x74f4b04, 0xa1, 0x0}};
  // -820734.7
  s21_decimal dec_2 = {{0x7d3bf3, 0x0, 0x0, 0x80010000}};
  // 2970452518031036902860.3
  s21_decimal dec_check = {{0x3db349fb, 0x4918ee2c, 0x64a, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_376) {
  // 1220.533883667603432178
  s21_decimal dec_1 = {{0xaf72a2f2, 0x2a4f6c87, 0x42, 0x120000}};
  // 668731939284879046
  s21_decimal dec_2 = {{0xdb0886c6, 0x947d027, 0x0, 0x0}};
  // 668731939284880266.53388366760
  s21_decimal dec_check = {{0x4e42e3a8, 0xea620521, 0xd81435a2, 0xb0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_377) {
  // 2419877735817053.0
  s21_decimal dec_1 = {{0xe86eb9a2, 0x55f8a8, 0x0, 0x10000}};
  // 78002173.41597997314
  s21_decimal dec_2 = {{0x48ca5902, 0x6c3ff058, 0x0, 0xb0000}};
  // 2419877813819226.41597997314
  s21_decimal dec_check = {{0x814a102, 0xea1a244a, 0xc82ae7, 0xb0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_378) {
  // -3020.0603611
  s21_decimal dec_1 = {{0x818a3db, 0x7, 0x0, 0x80070000}};
  // 60089552905044076820927
  s21_decimal dec_2 = {{0xa9fc79bf, 0x76108f0a, 0xcb9, 0x0}};
  // 60089552905044076817906.939639
  s21_decimal dec_check = {{0x4b036f7, 0x2aa47848, 0xc228e9c6, 0x60000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_379) {
  // -47
  s21_decimal dec_1 = {{0x2f, 0x0, 0x0, 0x80000000}};
  // -198
  s21_decimal dec_2 = {{0xc6, 0x0, 0x0, 0x80000000}};
  // -245
  s21_decimal dec_check = {{0xf5, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_380) {
  // -6931.498631870220
  s21_decimal dec_1 = {{0x49b6b70c, 0x18a029, 0x0, 0x800c0000}};
  // -0.09
  s21_decimal dec_2 = {{0x9, 0x0, 0x0, 0x80020000}};
  // -6931.588631870220
  s21_decimal dec_check = {{0x3e21bb0c, 0x18a03e, 0x0, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_382) {
  // -1070051405002245.703559280
  s21_decimal dec_1 = {{0x66116870, 0x9a579238, 0xe297, 0x80090000}};
  // -86118566972007649
  s21_decimal dec_2 = {{0x60eea4e1, 0x131f461, 0x0, 0x80000000}};
  // -87188618377009894.703559280
  s21_decimal dec_check = {{0xbe84f270, 0x7917b843, 0x481ee8, 0x80090000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_383) {
  // 71124684615729647310
  s21_decimal dec_1 = {{0xc2418ece, 0xdb0da3d2, 0x3, 0x0}};
  // 8.6145729544950746929
  s21_decimal dec_2 = {{0xfba98f31, 0xab831c99, 0x4, 0x130000}};
  // 71124684615729647318.614572954
  s21_decimal dec_check = {{0x1e127f9a, 0xe2d244a3, 0xe5d0f5ce, 0x90000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_384) {
  // 102681664506310692.5494501
  s21_decimal dec_1 = {{0x2e0100e5, 0xd7848926, 0xd96f, 0x70000}};
  // 84122
  s21_decimal dec_2 = {{0x1489a, 0x0, 0x0, 0x0}};
  // 102681664506394814.5494501
  s21_decimal dec_check = {{0xa9f89e5, 0xd78489ea, 0xd96f, 0x70000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_385) {
  // 483798585997771793.06
  s21_decimal dec_1 = {{0xab5896aa, 0x9f67c911, 0x2, 0x20000}};
  // -792151812746020926384
  s21_decimal dec_2 = {{0x3c5433b0, 0xf15094b1, 0x2a, 0x80000000}};
  // -791668014160023154590.94
  s21_decimal dec_check = {{0xe58b9a16, 0xa4124c29, 0x10c3, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_386) {
  // -9342.7766073095083383248589
  s21_decimal dec_1 = {{0xfefad6cd, 0x58eba883, 0x4d4819, 0x80160000}};
  // -3521945740081804160
  s21_decimal dec_2 = {{0x93c6b380, 0x30e076fd, 0x0, 0x80000000}};
  // -3521945740081813502.7766073095
  s21_decimal dec_check = {{0x872d1707, 0x62ea2005, 0x71ccda33, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_387) {
  // -0.6594278
  s21_decimal dec_1 = {{0x649ee6, 0x0, 0x0, 0x80070000}};
  // -0.005195
  s21_decimal dec_2 = {{0x144b, 0x0, 0x0, 0x80060000}};
  // -0.6646228
  s21_decimal dec_check = {{0x6569d4, 0x0, 0x0, 0x80070000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_388) {
  // 1270
  s21_decimal dec_1 = {{0x4f6, 0x0, 0x0, 0x0}};
  // 113.251976951
  s21_decimal dec_2 = {{0x5e5806f7, 0x1a, 0x0, 0x90000}};
  // 1383.251976951
  s21_decimal dec_check = {{0x103e22f7, 0x142, 0x0, 0x90000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_389) {
  // 97095541810855992499940
  s21_decimal dec_1 = {{0xcf9e1ee4, 0x8f538abe, 0x148f, 0x0}};
  // 398955483920849572
  s21_decimal dec_2 = {{0x1c4bdaa4, 0x5895fe6, 0x0, 0x0}};
  // 97095940766339913349512
  s21_decimal dec_check = {{0xebe9f988, 0x94dceaa4, 0x148f, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_390) {
  // 98606682830974
  s21_decimal dec_1 = {{0xa84d787e, 0x59ae, 0x0, 0x0}};
  // -18682828909
  s21_decimal dec_2 = {{0x5995586d, 0x4, 0x0, 0x80000000}};
  // 98588000002065
  s21_decimal dec_check = {{0x4eb82011, 0x59aa, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_391) {
  // 676677266175616.3241521711813
  s21_decimal dec_1 = {{0xf8d00ac5, 0x792657d, 0x15dd57d9, 0xd0000}};
  // 65523422375
  s21_decimal dec_2 = {{0x418014a7, 0xf, 0x0, 0x0}};
  // 676742789597991.3241521711813
  s21_decimal dec_check = {{0x1a166ac5, 0x5917ee6a, 0x15dde299, 0xd0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_392) {
  // 975398.45727339524427
  s21_decimal dec_1 = {{0x9879b14b, 0x49a324e6, 0x5, 0xe0000}};
  // 469.1193442214641
  s21_decimal dec_2 = {{0x96b222f1, 0x10aa9d, 0x0, 0xd0000}};
  // 975867.57661761670837
  s21_decimal dec_check = {{0x7b6f0eb5, 0x4a49cf0e, 0x5, 0xe0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_393) {
  // 991.428629287569763
  s21_decimal dec_1 = {{0xe4d68963, 0xdc24315, 0x0, 0xf0000}};
  // -1456609836223567327683
  s21_decimal dec_2 = {{0x7da571c3, 0xf685b098, 0x4e, 0x80000000}};
  // -1456609836223567326691.5713707
  s21_decimal dec_check = {{0x3922ab, 0x72dc4017, 0x2f10cb4e, 0x80070000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_394) {
  // -26767418990181118110148339
  s21_decimal dec_1 = {{0xbce926f3, 0xb0e899ca, 0x162438, 0x80000000}};
  // -144049538613525549348852514
  s21_decimal dec_2 = {{0x82589322, 0x22b12c54, 0x7727ad, 0x80000000}};
  // -170816957603706667459000853
  s21_decimal dec_check = {{0x3f41ba15, 0xd399c61f, 0x8d4be5, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_395) {
  // 426678896
  s21_decimal dec_1 = {{0x196e9a70, 0x0, 0x0, 0x0}};
  // -4722477142923
  s21_decimal dec_2 = {{0x8992938b, 0x44b, 0x0, 0x80000000}};
  // -4722050464027
  s21_decimal dec_check = {{0x7023f91b, 0x44b, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_396) {
  // -987403494446608478892241.17
  s21_decimal dec_1 = {{0xc7ca11b5, 0x11a99689, 0x51ad15, 0x80020000}};
  // 841299310023927297870448
  s21_decimal dec_2 = {{0x67e20a70, 0xed4eaffb, 0xb226, 0x0}};
  // -146104184422681181021793.17
  s21_decimal dec_check = {{0x337dfdf5, 0x5eecd855, 0xc15e0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_398) {
  // -0.317702826488530886225554059
  s21_decimal dec_1 = {{0x9fafea8b, 0xbbf362c3, 0x106cc30, 0x801b0000}};
  // -14844834534132283.968138401998
  s21_decimal dec_2 = {{0x5e3658ce, 0x9acdd3b3, 0x2ff75bfc, 0x800c0000}};
  // -14844834534132284.285841228487
  s21_decimal dec_check = {{0x56c6c2c7, 0x9acdd3fd, 0x2ff75bfc, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_399) {
  // -24866
  s21_decimal dec_1 = {{0x6122, 0x0, 0x0, 0x80000000}};
  // 65
  s21_decimal dec_2 = {{0x41, 0x0, 0x0, 0x0}};
  // -24801
  s21_decimal dec_check = {{0x60e1, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_400) {
  // 455448092118146881
  s21_decimal dec_1 = {{0x7054df41, 0x65213a0, 0x0, 0x0}};
  // -16
  s21_decimal dec_2 = {{0x10, 0x0, 0x0, 0x80000000}};
  // 455448092118146865
  s21_decimal dec_check = {{0x7054df31, 0x65213a0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_401) {
  // 5919620420178188096460514
  s21_decimal dec_1 = {{0xb76b56e2, 0x441812e5, 0x4e587, 0x0}};
  // -3283.569781200207712
  s21_decimal dec_2 = {{0xa3a53f60, 0x2d919551, 0x0, 0x800f0000}};
  // 5919620420178188096457230.4302
  s21_decimal dec_check = {{0xcefcd3ae, 0xec622d4c, 0xbf45f3d3, 0x40000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_402) {
  // -71498980829793
  s21_decimal dec_1 = {{0x275aaa61, 0x4107, 0x0, 0x80000000}};
  // 4.0
  s21_decimal dec_2 = {{0x28, 0x0, 0x0, 0x10000}};
  // -71498980829789.0
  s21_decimal dec_check = {{0x898aa7a2, 0x28a47, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_403) {
  // 70881887024250586413646257038
  s21_decimal dec_1 = {{0x89ac9b8e, 0x1406cae0, 0xe5081f6b, 0x0}};
  // -11235667143028207495182056669
  s21_decimal dec_2 = {{0x91107cdd, 0x4a2da837, 0x244ded10, 0x80000000}};
  // 59646219881222378918464200369
  s21_decimal dec_check = {{0xf89c1eb1, 0xc9d922a8, 0xc0ba325a, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_404) {
  // -537827325
  s21_decimal dec_1 = {{0x200e97fd, 0x0, 0x0, 0x80000000}};
  // -46.1892436773031178
  s21_decimal dec_2 = {{0x5a4bcd0a, 0x668f8b9, 0x0, 0x80100000}};
  // -537827371.1892436773031178
  s21_decimal dec_check = {{0xa308cd0a, 0xcd5892ca, 0x472e4, 0x80100000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_406) {
  // -80687347
  s21_decimal dec_1 = {{0x4cf30f3, 0x0, 0x0, 0x80000000}};
  // -4448.9335877438339199
  s21_decimal dec_2 = {{0x13c0f87f, 0x6969df44, 0x2, 0x80100000}};
  // -80691795.9335877438339199
  s21_decimal dec_check = {{0x57f3f87f, 0x1c37cd67, 0xaadf, 0x80100000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_407) {
  // -23152
  s21_decimal dec_1 = {{0x5a70, 0x0, 0x0, 0x80000000}};
  // -0.27194
  s21_decimal dec_2 = {{0x6a3a, 0x0, 0x0, 0x80050000}};
  // -23152.27194
  s21_decimal dec_check = {{0x89ff903a, 0x0, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_408) {
  // 1326790.7028398309338993569
  s21_decimal dec_1 = {{0x118b53a1, 0xae64d80f, 0xaf996, 0x130000}};
  // 5604705033760834257339
  s21_decimal dec_2 = {{0x9e3f01bb, 0xd4e83d34, 0x12f, 0x0}};
  // 5604705033760835584129.7028398
  s21_decimal dec_check = {{0x3e6f152e, 0xdf397082, 0xb519088e, 0x70000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_409) {
  // -182858268389931
  s21_decimal dec_1 = {{0x221b22b, 0xa64f, 0x0, 0x80000000}};
  // -432814916
  s21_decimal dec_2 = {{0x19cc3b44, 0x0, 0x0, 0x80000000}};
  // -182858701204847
  s21_decimal dec_check = {{0x1beded6f, 0xa64f, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_410) {
  // -138123980520.6140130341
  s21_decimal dec_1 = {{0x7db99425, 0xe08d8cb6, 0x4a, 0x800a0000}};
  // -163564969626755430399566
  s21_decimal dec_2 = {{0x1a54be4e, 0xdff0f72f, 0x22a2, 0x80000000}};
  // -163564969626893554380086.61401
  s21_decimal dec_check = {{0x16457599, 0xf5d51db, 0x34d9c6f5, 0x80050000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_411) {
  // -859
  s21_decimal dec_1 = {{0x35b, 0x0, 0x0, 0x80000000}};
  // -5.26069
  s21_decimal dec_2 = {{0x806f5, 0x0, 0x0, 0x80050000}};
  // -864.26069
  s21_decimal dec_check = {{0x526c1d5, 0x0, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_412) {
  // 1651368644106438173
  s21_decimal dec_1 = {{0x512ec61d, 0x16ead708, 0x0, 0x0}};
  // -6655.168775
  s21_decimal dec_2 = {{0x8cadd107, 0x1, 0x0, 0x80060000}};
  // 1651368644106431517.831225
  s21_decimal dec_check = {{0x69ca3039, 0xdfa2a8be, 0x15db0, 0x60000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_413) {
  // -78354838
  s21_decimal dec_1 = {{0x4ab9996, 0x0, 0x0, 0x80000000}};
  // -964204913080515381987.4
  s21_decimal dec_2 = {{0x9920ece2, 0xb24fd6b3, 0x20a, 0x80010000}};
  // -964204913080593736825.4
  s21_decimal dec_check = {{0xc7d4ecbe, 0xb24fd6b3, 0x20a, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_414) {
  // -40.9
  s21_decimal dec_1 = {{0x199, 0x0, 0x0, 0x80010000}};
  // -99367613879171
  s21_decimal dec_2 = {{0xd353d383, 0x5a5f, 0x0, 0x80000000}};
  // -99367613879211.9
  s21_decimal dec_check = {{0x414644b7, 0x387be, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_415) {
  // 45903326518590219824141
  s21_decimal dec_1 = {{0x1a792c0d, 0x6ca00669, 0x9b8, 0x0}};
  // 8355094527545
  s21_decimal dec_2 = {{0x5270fe39, 0x799, 0x0, 0x0}};
  // 45903326526945314351686
  s21_decimal dec_check = {{0x6cea2a46, 0x6ca00e02, 0x9b8, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_416) {
  // -358544707012
  s21_decimal dec_1 = {{0x7aee0dc4, 0x53, 0x0, 0x80000000}};
  // 52444.66
  s21_decimal dec_2 = {{0x500632, 0x0, 0x0, 0x20000}};
  // -358544654567.34
  s21_decimal dec_check = {{0x4ad5a5e, 0x209c, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_417) {
  // 6557
  s21_decimal dec_1 = {{0x199d, 0x0, 0x0, 0x0}};
  // -75167365057425367.13
  s21_decimal dec_2 = {{0xcefeb009, 0x6850d006, 0x0, 0x80020000}};
  // -75167365057418810.13
  s21_decimal dec_check = {{0xcef4aeb5, 0x6850d006, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_418) {
  // 446
  s21_decimal dec_1 = {{0x1be, 0x0, 0x0, 0x0}};
  // 22214157849.3146794
  s21_decimal dec_2 = {{0xb3edb6aa, 0x3153496, 0x0, 0x70000}};
  // 22214158295.3146794
  s21_decimal dec_check = {{0xbdc3e9aa, 0x3153497, 0x0, 0x70000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_419) {
  // -9291420335
  s21_decimal dec_1 = {{0x29cfd2af, 0x2, 0x0, 0x80000000}};
  // 0.429127
  s21_decimal dec_2 = {{0x68c47, 0x0, 0x0, 0x60000}};
  // -9291420334.570873
  s21_decimal dec_check = {{0x60803d79, 0x21027f, 0x0, 0x80060000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_420) {
  // -322519938654.03652764
  s21_decimal dec_1 = {{0xcd765a9c, 0xbf96198a, 0x1, 0x80080000}};
  // 5956582144793210164869.625880
  s21_decimal dec_2 = {{0x49487818, 0x1941a9ed, 0x133f2b55, 0x60000}};
  // 5956582144470690226215.5893524
  s21_decimal dec_check = {{0xc848db14, 0xcfce6d83, 0xc077b152, 0x70000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_421) {
  // 2149788627218144437
  s21_decimal dec_1 = {{0xcb831cb5, 0x1dd5955d, 0x0, 0x0}};
  // 628661212561265.8
  s21_decimal dec_2 = {{0xf2967a72, 0x1655a3, 0x0, 0x10000}};
  // 2150417288430705702.8
  s21_decimal dec_check = {{0xe5b59984, 0x2a6e2b4d, 0x1, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_422) {
  // 9749
  s21_decimal dec_1 = {{0x2615, 0x0, 0x0, 0x0}};
  // 991117.410683416
  s21_decimal dec_2 = {{0x8131ca18, 0x3856a, 0x0, 0x90000}};
  // 1000866.410683416
  s21_decimal dec_check = {{0x5ee05c18, 0x38e48, 0x0, 0x90000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_423) {
  // 5530894763634.29
  s21_decimal dec_1 = {{0x2dc484a5, 0x1f708, 0x0, 0x20000}};
  // 38513744402722.6
  s21_decimal dec_2 = {{0xcc8a7b5a, 0x15e47, 0x0, 0x10000}};
  // 44044639166356.89
  s21_decimal dec_check = {{0x2b2d5629, 0xfa5d6, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_424) {
  // 844677972436171612061985
  s21_decimal dec_1 = {{0x62a18121, 0x15aadaff, 0xb2de, 0x0}};
  // -882683486554147513
  s21_decimal dec_2 = {{0x5129cab9, 0xc3febf4, 0x0, 0x80000000}};
  // 844677089752685057914472
  s21_decimal dec_check = {{0x1177b668, 0x96aef0b, 0xb2de, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_425) {
  // 68092
  s21_decimal dec_1 = {{0x109fc, 0x0, 0x0, 0x0}};
  // 433.69046158
  s21_decimal dec_2 = {{0x18ff208e, 0xa, 0x0, 0x80000}};
  // 68525.69046158
  s21_decimal dec_check = {{0x7cf19c8e, 0x63b, 0x0, 0x80000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_426) {
  // 28157229691707924672311282
  s21_decimal dec_1 = {{0x32fe6ff2, 0x7aeadbbd, 0x174a86, 0x0}};
  // -64460797221
  s21_decimal dec_2 = {{0x229b525, 0xf, 0x0, 0x80000000}};
  // 28157229691707860211514061
  s21_decimal dec_check = {{0x30d4bacd, 0x7aeadbae, 0x174a86, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_427) {
  // 873
  s21_decimal dec_1 = {{0x369, 0x0, 0x0, 0x0}};
  // 63411903311779
  s21_decimal dec_2 = {{0x3bf8afa3, 0x39ac, 0x0, 0x0}};
  // 63411903312652
  s21_decimal dec_check = {{0x3bf8b30c, 0x39ac, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_428) {
  // -12507558
  s21_decimal dec_1 = {{0xbed9a6, 0x0, 0x0, 0x80000000}};
  // 476717112707346768
  s21_decimal dec_2 = {{0x31457150, 0x69da3b0, 0x0, 0x0}};
  // 476717112694839210
  s21_decimal dec_check = {{0x308697aa, 0x69da3b0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_429) {
  // -44.4889105784934295275669
  s21_decimal dec_1 = {{0xbf060895, 0x7c9babe4, 0x5e35, 0x80160000}};
  // -51.11392718
  s21_decimal dec_2 = {{0x30a9a9ce, 0x1, 0x0, 0x80080000}};
  // -95.6028377584934295275669
  s21_decimal dec_check = {{0xf5a58895, 0x66f65e10, 0xca72, 0x80160000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_430) {
  // 91022021593.06
  s21_decimal dec_1 = {{0x4586c0ca, 0x847, 0x0, 0x20000}};
  // -5029544302011721460
  s21_decimal dec_2 = {{0x1f7fa6f4, 0x45cc87e5, 0x0, 0x80000000}};
  // -5029544210989699866.94
  s21_decimal dec_check = {{0x8567686, 0x43e50d39, 0x1b, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_431) {
  // -169862050021090642
  s21_decimal dec_1 = {{0x7053a552, 0x25b78a2, 0x0, 0x80000000}};
  // 79228162514264337591914663637
  s21_decimal dec_2 = {{0x9ee30ed5, 0xffffffff, 0xffffffff, 0x0}};
  // 79228162514094475541893572995
  s21_decimal dec_check = {{0x2e8f6983, 0xfda4875d, 0xffffffff, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_432) {
  // 915275407962869867664027840
  s21_decimal dec_1 = {{0xc3e6b0c0, 0x496b658e, 0x2f5191b, 0x0}};
  // -888.2
  s21_decimal dec_2 = {{0x22b2, 0x0, 0x0, 0x80010000}};
  // 915275407962869867664026951.8
  s21_decimal dec_check = {{0xa702c4ce, 0xde31f793, 0x1d92fb10, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_433) {
  // -888615944238570979
  s21_decimal dec_1 = {{0x42169de3, 0xc54ff7e, 0x0, 0x80000000}};
  // 5291365894921930573922952583
  s21_decimal dec_2 = {{0x7297e587, 0xef3b98c8, 0x1118ea4f, 0x0}};
  // 5291365894033314629684381604
  s21_decimal dec_check = {{0x308147a4, 0xe2e6994a, 0x1118ea4f, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_434) {
  // 9500.43603
  s21_decimal dec_1 = {{0x38a083d3, 0x0, 0x0, 0x50000}};
  // 2.0224160804
  s21_decimal dec_2 = {{0xb5743424, 0x4, 0x0, 0xa0000}};
  // 9502.4584460804
  s21_decimal dec_check = {{0xa29a0a04, 0x566c, 0x0, 0xa0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_435) {
  // 7444524.25
  s21_decimal dec_1 = {{0x2c5f7149, 0x0, 0x0, 0x20000}};
  // 7.77
  s21_decimal dec_2 = {{0x309, 0x0, 0x0, 0x20000}};
  // 7444532.02
  s21_decimal dec_check = {{0x2c5f7452, 0x0, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_436) {
  // -4807595
  s21_decimal dec_1 = {{0x495bab, 0x0, 0x0, 0x80000000}};
  // -951136230548991485597299
  s21_decimal dec_2 = {{0x652d673, 0x32c8ac95, 0xc969, 0x80000000}};
  // -951136230548991490404894
  s21_decimal dec_check = {{0x69c321e, 0x32c8ac95, 0xc969, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_437) {
  // 770496014000206483.69817
  s21_decimal dec_1 = {{0xe6ec9e99, 0xde04d708, 0x1050, 0x50000}};
  // -14605166738336709725
  s21_decimal dec_2 = {{0x5be8fc5d, 0xcaaff9c4, 0x0, 0x80000000}};
  // -13834670724336503241.30183
  s21_decimal dec_check = {{0x7b26c987, 0xe67867b5, 0x124f5, 0x80050000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_438) {
  // -8815807849880243
  s21_decimal dec_1 = {{0x374cdab3, 0x1f51ee, 0x0, 0x80000000}};
  // 63380088294535493829
  s21_decimal dec_2 = {{0x74ae78c5, 0x6f934e80, 0x3, 0x0}};
  // 63371272486685613586
  s21_decimal dec_check = {{0x3d619e12, 0x6f73fc92, 0x3, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_439) {
  // -843618145205.6318227581556542
  s21_decimal dec_1 = {{0x9510d73e, 0xe3db8dd8, 0x1b423ee8, 0x80100000}};
  // -12637659325839793168167652329
  s21_decimal dec_2 = {{0xf642cbe9, 0xcf73c003, 0x28d5a074, 0x80000000}};
  // -12637659325839794011785797535
  s21_decimal dec_check = {{0x61d21f9f, 0xcf73c0c8, 0x28d5a074, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_441) {
  // -67137.389094208
  s21_decimal dec_1 = {{0xa43a6540, 0x3d0f, 0x0, 0x80090000}};
  // -32546304041228002286068076881
  s21_decimal dec_2 = {{0x94149151, 0x64c6bf0b, 0x6929abf5, 0x80000000}};
  // -32546304041228002286068144018
  s21_decimal dec_check = {{0x94159792, 0x64c6bf0b, 0x6929abf5, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_442) {
  // 189051674681830736017.37
  s21_decimal dec_1 = {{0x430c38c9, 0xd9e71071, 0x400, 0x20000}};
  // -202349407894
  s21_decimal dec_2 = {{0x1cf6ee96, 0x2f, 0x0, 0x80000000}};
  // 189051674479481328123.37
  s21_decimal dec_check = {{0xf2970631, 0xd9e6fe09, 0x400, 0x20000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_443) {
  // -708
  s21_decimal dec_1 = {{0x2c4, 0x0, 0x0, 0x80000000}};
  // 0.450
  s21_decimal dec_2 = {{0x1c2, 0x0, 0x0, 0x30000}};
  // -707.550
  s21_decimal dec_check = {{0xacbde, 0x0, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_444) {
  // 877424998798
  s21_decimal dec_1 = {{0x4a9af98e, 0xcc, 0x0, 0x0}};
  // -28439272242125
  s21_decimal dec_2 = {{0x88b83bcd, 0x19dd, 0x0, 0x80000000}};
  // -27561847243327
  s21_decimal dec_check = {{0x3e1d423f, 0x1911, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_445) {
  // 64
  s21_decimal dec_1 = {{0x40, 0x0, 0x0, 0x0}};
  // -0.074834259213754654577902328
  s21_decimal dec_2 = {{0xf89fc2f8, 0x521f9bcb, 0x3de6c5, 0x801b0000}};
  // 63.925165740786245345422097672
  s21_decimal dec_check = {{0x7603d08, 0xa200736e, 0xce8da862, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_446) {
  // 342193223
  s21_decimal dec_1 = {{0x14657447, 0x0, 0x0, 0x0}};
  // -2937661344047016139.9
  s21_decimal dec_2 = {{0xb73097f7, 0x97aeb247, 0x1, 0x80010000}};
  // -2937661343704822916.9
  s21_decimal dec_check = {{0xeb3a0d31, 0x97aeb246, 0x1, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_447) {
  // 586370060092965801
  s21_decimal dec_1 = {{0x82c403a9, 0x8233476, 0x0, 0x0}};
  // -111
  s21_decimal dec_2 = {{0x6f, 0x0, 0x0, 0x80000000}};
  // 586370060092965690
  s21_decimal dec_check = {{0x82c4033a, 0x8233476, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_448) {
  // 53390301664.308
  s21_decimal dec_1 = {{0xe5f71434, 0x308e, 0x0, 0x30000}};
  // 3.9431089611930746228056
  s21_decimal dec_2 = {{0x3f800d58, 0x904b6f2f, 0x859, 0x160000}};
  // 53390301668.251108961193074623
  s21_decimal dec_check = {{0xe8e49fbf, 0xeb30eb53, 0xac836c24, 0x120000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_449) {
  // 4745493404.78
  s21_decimal dec_1 = {{0x7d58493e, 0x6e, 0x0, 0x20000}};
  // 72219135765997333058568521
  s21_decimal dec_2 = {{0x18764149, 0x31d3025c, 0x3bbcff, 0x0}};
  // 72219135765997337804061925.78
  s21_decimal dec_check = {{0xb89c9c2, 0x766cec68, 0x1755d3af, 0x20000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_450) {
  // -5990501129332853003346287
  s21_decimal dec_1 = {{0x1381616f, 0xb7890cf9, 0x4f489, 0x80000000}};
  // -9262343212167580094
  s21_decimal dec_2 = {{0xd4ffc9be, 0x808a7413, 0x0, 0x80000000}};
  // -5990510391676065170926381
  s21_decimal dec_check = {{0xe8812b2d, 0x3813810c, 0x4f48a, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_451) {
  // 100757036275167797632482043
  s21_decimal dec_1 = {{0x2cb2bafb, 0xe1922fd9, 0x535821, 0x0}};
  // -9606192685421765
  s21_decimal dec_2 = {{0x6a894c5, 0x2220c8, 0x0, 0x80000000}};
  // 100757036265561604947060278
  s21_decimal dec_check = {{0x260a2636, 0xe1700f11, 0x535821, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_452) {
  // 2159208386293711
  s21_decimal dec_1 = {{0xe0dc6fcf, 0x7abc9, 0x0, 0x0}};
  // 54172556090
  s21_decimal dec_2 = {{0x9cef9b3a, 0xc, 0x0, 0x0}};
  // 2159262558849801
  s21_decimal dec_check = {{0x7dcc0b09, 0x7abd6, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_454) {
  // 9391999756281655039078496
  s21_decimal dec_1 = {{0x6d5bb060, 0x53b56ecc, 0x7c4d5, 0x0}};
  // 85207976825102024402805913
  s21_decimal dec_2 = {{0x119c2499, 0xade974bf, 0x467b7d, 0x0}};
  // 94599976581383679441884409
  s21_decimal dec_check = {{0x7ef7d4f9, 0x19ee38b, 0x4e4053, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_455) {
  // 8594626690051365
  s21_decimal dec_1 = {{0x76d66d25, 0x1e88c4, 0x0, 0x0}};
  // 322
  s21_decimal dec_2 = {{0x142, 0x0, 0x0, 0x0}};
  // 8594626690051687
  s21_decimal dec_check = {{0x76d66e67, 0x1e88c4, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_456) {
  // -316358654028730771671785792
  s21_decimal dec_1 = {{0xc0d6a140, 0xffc6c979, 0x105af8c, 0x80000000}};
  // 60910557805491648209072.63
  s21_decimal dec_2 = {{0x523cc4ff, 0xcba5e4d5, 0x509d4, 0x20000}};
  // -316297743470925280023576719.37
  s21_decimal dec_check = {{0x19a3801, 0x1e00ceba, 0x6633893f, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_457) {
  // -2430045505945249035635015187
  s21_decimal dec_1 = {{0xf5b23e13, 0xd6d75ec8, 0x7da1626, 0x80000000}};
  // -30633938302132139996333763
  s21_decimal dec_2 = {{0x4bbdc6c3, 0x1f7983f4, 0x1956fd, 0x80000000}};
  // -2460679444247381175631348950
  s21_decimal dec_check = {{0x417004d6, 0xf650e2bd, 0x7f36d23, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_458) {
  // 37.1247016425341269
  s21_decimal dec_1 = {{0xc9f4c155, 0x526ef31, 0x0, 0x100000}};
  // 4398277063865
  s21_decimal dec_2 = {{0xdbdf4b9, 0x400, 0x0, 0x0}};
  // 4398277063902.1247016425341269
  s21_decimal dec_check = {{0x806dc155, 0xf01bd565, 0x8e1db1f5, 0x100000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_459) {
  // -724657
  s21_decimal dec_1 = {{0xb0eb1, 0x0, 0x0, 0x80000000}};
  // 2730867310606131
  s21_decimal dec_2 = {{0x97fa3733, 0x9b3b5, 0x0, 0x0}};
  // 2730867309881474
  s21_decimal dec_check = {{0x97ef2882, 0x9b3b5, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_460) {
  // 4841720096149
  s21_decimal dec_1 = {{0x4d01a595, 0x467, 0x0, 0x0}};
  // 2060794295.50
  s21_decimal dec_2 = {{0xfb4a8bae, 0x2f, 0x0, 0x20000}};
  // 4843780890444.50
  s21_decimal dec_check = {{0xfef39e2, 0x1b88a, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_461) {
  // -46171988162288
  s21_decimal dec_1 = {{0x40f3f6f0, 0x29fe, 0x0, 0x80000000}};
  // 8444832132
  s21_decimal dec_2 = {{0xf759e984, 0x1, 0x0, 0x0}};
  // -46163543330156
  s21_decimal dec_check = {{0x499a0d6c, 0x29fc, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_462) {
  // 445907763050528884398800
  s21_decimal dec_1 = {{0xd3401ad0, 0xb55145df, 0x5e6c, 0x0}};
  // -1499776529.7786875978
  s21_decimal dec_2 = {{0xa744704a, 0xd022c413, 0x0, 0x800a0000}};
  // 445907763050527384622270.22131
  s21_decimal dec_check = {{0x4c2ec133, 0x233e1f50, 0x9014a02b, 0x50000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_463) {
  // -9408325034578478909235106.0
  s21_decimal dec_1 = {{0xc61d3c54, 0x38917b48, 0x4dd2e7, 0x80010000}};
  // -9036008145488756802339788
  s21_decimal dec_2 = {{0x16a443cc, 0xfbac3b0c, 0x77972, 0x80000000}};
  // -18444333180067235711574894.0
  s21_decimal dec_check = {{0xa887e24c, 0xd4bc9c1, 0x989165, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_464) {
  // -607886445
  s21_decimal dec_1 = {{0x243b9c6d, 0x0, 0x0, 0x80000000}};
  // -9616358.5
  s21_decimal dec_2 = {{0x5bb5701, 0x0, 0x0, 0x80010000}};
  // -617502803.5
  s21_decimal dec_check = {{0x700f7343, 0x1, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_465) {
  // 391861713699585070036.566
  s21_decimal dec_1 = {{0xc6257656, 0xddb6756e, 0x52fa, 0x30000}};
  // -182155417430644104975775147
  s21_decimal dec_2 = {{0x107675ab, 0xf72576ea, 0x96ace8, 0x80000000}};
  // -182155025568930405390705110.43
  s21_decimal dec_check = {{0x274237c3, 0x414367b0, 0x3adb82b4, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_466) {
  // 90334.45
  s21_decimal dec_1 = {{0x89d6e5, 0x0, 0x0, 0x20000}};
  // 18
  s21_decimal dec_2 = {{0x12, 0x0, 0x0, 0x0}};
  // 90352.45
  s21_decimal dec_check = {{0x89dded, 0x0, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_467) {
  // -8659001.1787840673684840738302
  s21_decimal dec_1 = {{0x4c3f6dfe, 0xcbce2e2e, 0x17c99438, 0x80160000}};
  // -8432
  s21_decimal dec_2 = {{0x20f0, 0x0, 0x0, 0x80000000}};
  // -8667433.1787840673684840738302
  s21_decimal dec_check = {{0x683f6dfe, 0x27c2a37d, 0x180f53ad, 0x80160000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_468) {
  // -60435766
  s21_decimal dec_1 = {{0x39a2d36, 0x0, 0x0, 0x80000000}};
  // 9598602628615650645893093
  s21_decimal dec_2 = {{0xe0e7dfe5, 0x4a880da2, 0x7f095, 0x0}};
  // 9598602628615650585457327
  s21_decimal dec_check = {{0xdd4db2af, 0x4a880da2, 0x7f095, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_469) {
  // -9031056528053383
  s21_decimal dec_1 = {{0xb44d1487, 0x2015b2, 0x0, 0x80000000}};
  // -9664.3
  s21_decimal dec_2 = {{0x17983, 0x0, 0x0, 0x80010000}};
  // -9031056528063047.3
  s21_decimal dec_check = {{0xb0446c9, 0x140d8fb, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_470) {
  // 27089360272254322
  s21_decimal dec_1 = {{0x30386572, 0x603da1, 0x0, 0x0}};
  // -4.779
  s21_decimal dec_2 = {{0x12ab, 0x0, 0x0, 0x80030000}};
  // 27089360272254317.221
  s21_decimal dec_check = {{0x5c4c32a5, 0x77f0bda4, 0x1, 0x30000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_471) {
  // 328046354112.62142086252266244
  s21_decimal dec_1 = {{0x442b0304, 0x6364efe, 0x69ff5bc1, 0x110000}};
  // 22828252775531703224308055933
  s21_decimal dec_2 = {{0x840bbf7d, 0xa9fafbbb, 0x49c3168e, 0x0}};
  // 22828252775531703552354410046
  s21_decimal dec_check = {{0xe521de3e, 0xa9fafc07, 0x49c3168e, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_472) {
  // -0.51
  s21_decimal dec_1 = {{0x33, 0x0, 0x0, 0x80020000}};
  // -6
  s21_decimal dec_2 = {{0x6, 0x0, 0x0, 0x80000000}};
  // -6.51
  s21_decimal dec_check = {{0x28b, 0x0, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_473) {
  // 99.7569068613637380239314273
  s21_decimal dec_1 = {{0x8340cd61, 0x91dbf1ea, 0x3392b77, 0x190000}};
  // 6888270981240473006780658430
  s21_decimal dec_2 = {{0x1a2f32fe, 0x206193c2, 0x1641d81e, 0x0}};
  // 6888270981240473006780658529.8
  s21_decimal dec_check = {{0x5d801d2, 0x43cfc595, 0xde92712d, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_474) {
  // 41.0
  s21_decimal dec_1 = {{0x19a, 0x0, 0x0, 0x10000}};
  // -80455.3420445590
  s21_decimal dec_2 = {{0xb0d41796, 0x2dbbc, 0x0, 0x800a0000}};
  // -80414.3420445590
  s21_decimal dec_check = {{0x3aec9396, 0x2db5d, 0x0, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_475) {
  // 78847075468595.499542106
  s21_decimal dec_1 = {{0x530ea65a, 0x4efb8cfa, 0x10b2, 0x90000}};
  // -5602980
  s21_decimal dec_2 = {{0x557ea4, 0x0, 0x0, 0x80000000}};
  // 78847069865615.499542106
  s21_decimal dec_check = {{0xe2793e5a, 0x4ee7a518, 0x10b2, 0x90000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_476) {
  // 99
  s21_decimal dec_1 = {{0x63, 0x0, 0x0, 0x0}};
  // 7143210
  s21_decimal dec_2 = {{0x6cff2a, 0x0, 0x0, 0x0}};
  // 7143309
  s21_decimal dec_check = {{0x6cff8d, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_477) {
  // -153146952373809
  s21_decimal dec_1 = {{0x4db1d631, 0x8b49, 0x0, 0x80000000}};
  // 5937518968512229834107862
  s21_decimal dec_2 = {{0x8cda2bd6, 0x8c599222, 0x4e951, 0x0}};
  // 5937518968359082881734053
  s21_decimal dec_check = {{0x3f2855a5, 0x8c5906d9, 0x4e951, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_478) {
  // -82.824360021922250
  s21_decimal dec_1 = {{0xddb11ca, 0x1264051, 0x0, 0x800f0000}};
  // 8516
  s21_decimal dec_2 = {{0x2144, 0x0, 0x0, 0x0}};
  // 8433.175639978077750
  s21_decimal dec_check = {{0x4d5eee36, 0x7508a890, 0x0, 0xf0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_479) {
  // -3486005409427596976028738663
  s21_decimal dec_1 = {{0x4d1d6467, 0xe8edf6e9, 0xb438e5b, 0x80000000}};
  // 0.9
  s21_decimal dec_2 = {{0x9, 0x0, 0x0, 0x10000}};
  // -3486005409427596976028738662.1
  s21_decimal dec_check = {{0x325ebfd, 0x194ba51d, 0x70a38f97, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_480) {
  // 0.23
  s21_decimal dec_1 = {{0x17, 0x0, 0x0, 0x20000}};
  // -7495045.8
  s21_decimal dec_2 = {{0x477a73a, 0x0, 0x0, 0x80010000}};
  // -7495045.57
  s21_decimal dec_check = {{0x2cac882d, 0x0, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_481) {
  // -258
  s21_decimal dec_1 = {{0x102, 0x0, 0x0, 0x80000000}};
  // -30.3565
  s21_decimal dec_2 = {{0x4a1cd, 0x0, 0x0, 0x80040000}};
  // -288.3565
  s21_decimal dec_check = {{0x2bffed, 0x0, 0x0, 0x80040000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_483) {
  // -229
  s21_decimal dec_1 = {{0xe5, 0x0, 0x0, 0x80000000}};
  // 3228185536305
  s21_decimal dec_2 = {{0x9eda2731, 0x2ef, 0x0, 0x0}};
  // 3228185536076
  s21_decimal dec_check = {{0x9eda264c, 0x2ef, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_484) {
  // -5000840.29522817331
  s21_decimal dec_1 = {{0x798db133, 0x6f0a7c6, 0x0, 0x800b0000}};
  // -623
  s21_decimal dec_2 = {{0x26f, 0x0, 0x0, 0x80000000}};
  // -5001463.29522817331
  s21_decimal dec_check = {{0xd2ec4933, 0x6f0e06f, 0x0, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_485) {
  // -2203552074089178
  s21_decimal dec_1 = {{0x729ec2da, 0x7d41e, 0x0, 0x80000000}};
  // 6
  s21_decimal dec_2 = {{0x6, 0x0, 0x0, 0x0}};
  // -2203552074089172
  s21_decimal dec_check = {{0x729ec2d4, 0x7d41e, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_487) {
  // -89492788.0317396983
  s21_decimal dec_1 = {{0x65e967f7, 0xc6b6c2a, 0x0, 0x800a0000}};
  // 2304287407287
  s21_decimal dec_2 = {{0x823b7cb7, 0x218, 0x0, 0x0}};
  // 2304197914498.9682603017
  s21_decimal dec_check = {{0xfd069409, 0x1bb27eba, 0x4e1, 0xa0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_488) {
  // -7921574986834275147
  s21_decimal dec_1 = {{0xefe06b4b, 0x6def167a, 0x0, 0x80000000}};
  // 779467559.12726165
  s21_decimal dec_2 = {{0x59927695, 0x114ec29, 0x0, 0x80000}};
  // -7921574986054807587.87273835
  s21_decimal dec_check = {{0xa81746b, 0xc04148a, 0x28f41e0, 0x80080000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_489) {
  // 5327.469769623334120291136
  s21_decimal dec_1 = {{0x6eab7b40, 0xb703efdd, 0x46822, 0x150000}};
  // -5889553037785405945287
  s21_decimal dec_2 = {{0x2de175c7, 0x45f7a3ad, 0x13f, 0x80000000}};
  // -5889553037785405939959.5302304
  s21_decimal dec_check = {{0x927a1da0, 0x448c8d4a, 0xbe4d3dab, 0x80070000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_490) {
  // 5205704299016005130798
  s21_decimal dec_1 = {{0x9cd89a2e, 0x33a8def3, 0x11a, 0x0}};
  // -8456
  s21_decimal dec_2 = {{0x2108, 0x0, 0x0, 0x80000000}};
  // 5205704299016005122342
  s21_decimal dec_check = {{0x9cd87926, 0x33a8def3, 0x11a, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_491) {
  // -97557677154026729
  s21_decimal dec_1 = {{0xc3e0c4e9, 0x15a9830, 0x0, 0x80000000}};
  // 635784369
  s21_decimal dec_2 = {{0x25e54cb1, 0x0, 0x0, 0x0}};
  // -97557676518242360
  s21_decimal dec_check = {{0x9dfb7838, 0x15a9830, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_492) {
  // -699706149080301156182301417
  s21_decimal dec_1 = {{0xdec09ae9, 0x58c26890, 0x242c88a, 0x80000000}};
  // 31767281507912.9
  s21_decimal dec_2 = {{0xf74c2ed9, 0x120eb, 0x0, 0x10000}};
  // -699706149080269388900793504.1
  s21_decimal dec_check = {{0xbc39de41, 0x7796f4bc, 0x169bd567, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_493) {
  // 4
  s21_decimal dec_1 = {{0x4, 0x0, 0x0, 0x0}};
  // 398479
  s21_decimal dec_2 = {{0x6148f, 0x0, 0x0, 0x0}};
  // 398483
  s21_decimal dec_check = {{0x61493, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_494) {
  // -0.69350157013
  s21_decimal dec_1 = {{0x25976ad5, 0x10, 0x0, 0x800b0000}};
  // 170873312089694817
  s21_decimal dec_2 = {{0x3cb36261, 0x25f105f, 0x0, 0x0}};
  // 170873312089694816.30649842987
  s21_decimal dec_check = {{0xc467d2b, 0xefec9404, 0x37364f20, 0xb0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_495) {
  // 23
  s21_decimal dec_1 = {{0x17, 0x0, 0x0, 0x0}};
  // -3193.1482359
  s21_decimal dec_2 = {{0x6f43c0f7, 0x7, 0x0, 0x80070000}};
  // -3170.1482359
  s21_decimal dec_check = {{0x618e3b77, 0x7, 0x0, 0x80070000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_496) {
  // -191226517282585
  s21_decimal dec_1 = {{0x64a25f19, 0xadeb, 0x0, 0x80000000}};
  // 7245159
  s21_decimal dec_2 = {{0x6e8d67, 0x0, 0x0, 0x0}};
  // -191226510037426
  s21_decimal dec_check = {{0x6433d1b2, 0xadeb, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_497) {
  // 41104052699474236
  s21_decimal dec_1 = {{0xbfb293c, 0x9207eb, 0x0, 0x0}};
  // -945
  s21_decimal dec_2 = {{0x3b1, 0x0, 0x0, 0x80000000}};
  // 41104052699473291
  s21_decimal dec_check = {{0xbfb258b, 0x9207eb, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_498) {
  // 1636920677279.64
  s21_decimal dec_1 = {{0x878caa5c, 0x94e0, 0x0, 0x20000}};
  // -5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x80000000}};
  // 1636920677274.64
  s21_decimal dec_check = {{0x878ca868, 0x94e0, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_499) {
  // 39529
  s21_decimal dec_1 = {{0x9a69, 0x0, 0x0, 0x0}};
  // 793968980
  s21_decimal dec_2 = {{0x2f530154, 0x0, 0x0, 0x0}};
  // 794008509
  s21_decimal dec_check = {{0x2f539bbd, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_500) {
  // -119754798134133723860736
  s21_decimal dec_1 = {{0x94a18f00, 0xebad6ee1, 0x195b, 0x80000000}};
  // -55831715739814830911207
  s21_decimal dec_2 = {{0xf895aee7, 0xa4b43840, 0xbd2, 0x80000000}};
  // -175586513873948554771943
  s21_decimal dec_check = {{0x8d373de7, 0x9061a722, 0x252e, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(fail_s21_add_1) {
  // 517772480565172959101224
  s21_decimal dec_1 = {{0xec56c128, 0x809e35d9, 0x6da4, 0x0}};
  // 79228162514264337592138948367
  s21_decimal dec_2 = {{0xac415f0f, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_2) {
  // -79228162514264337592368424632
  s21_decimal dec_1 = {{0xb9eee6b8, 0xffffffff, 0xffffffff, 0x80000000}};
  // -754468025200703620819216
  s21_decimal dec_2 = {{0xc178a910, 0xcb29591f, 0x9fc3, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_3) {
  // -79228162514264337593166381177
  s21_decimal dec_1 = {{0xe97ec079, 0xffffffff, 0xffffffff, 0x80000000}};
  // -21803211308906499
  s21_decimal dec_2 = {{0xb907b803, 0x4d75e7, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_4) {
  // 345302613619602546670
  s21_decimal dec_1 = {{0x6a5edfee, 0xb8095198, 0x12, 0x0}};
  // 79228162514264337592111243926
  s21_decimal dec_2 = {{0xaa9aa296, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_5) {
  // 79228162514264337591674469064
  s21_decimal dec_1 = {{0x9091fac8, 0xffffffff, 0xffffffff, 0x0}};
  // 112572945525.2
  s21_decimal dec_2 = {{0x1ab44c94, 0x106, 0x0, 0x10000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_6) {
  // -65006318591889076342.45219054
  s21_decimal dec_1 = {{0x5f77b2ee, 0x368ac394, 0x15013257, 0x80080000}};
  // -79228162514264337593340386678
  s21_decimal dec_2 = {{0xf3dddd76, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_7) {
  // -11146056030575401200157863
  s21_decimal dec_1 = {{0xd78684a7, 0xe87c8085, 0x93844, 0x80000000}};
  // -79228162514264337592240205292
  s21_decimal dec_2 = {{0xb24a6dec, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_8) {
  // 6421312216947673
  s21_decimal dec_1 = {{0x41aedbd9, 0x16d026, 0x0, 0x0}};
  // 79228162514264337591421025098
  s21_decimal dec_2 = {{0x8176bb4a, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_9) {
  // -76342515722143991960611903.74
  s21_decimal dec_1 = {{0x2dab48e6, 0xfeaa5385, 0x18aae7a6, 0x80020000}};
  // -79228162514264337592678355200
  s21_decimal dec_2 = {{0xcc681100, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_10) {
  // 6266997059.39557928874521
  s21_decimal dec_1 = {{0x188b3219, 0x7589caae, 0x84b5, 0xe0000}};
  // 79228162514264337591779646079
  s21_decimal dec_2 = {{0x96d6da7f, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_11) {
  // 84107360459389552364378.0
  s21_decimal dec_1 = {{0xef327184, 0xb103eb34, 0xb21a, 0x10000}};
  // 79228162514264337591715562732
  s21_decimal dec_2 = {{0x930504ec, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_12) {
  // -79228162514264337592272561822
  s21_decimal dec_1 = {{0xb438269e, 0xffffffff, 0xffffffff, 0x80000000}};
  // -700981018231356
  s21_decimal dec_2 = {{0xdc96023c, 0x27d89, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_13) {
  // -379595078465426
  s21_decimal dec_1 = {{0x5dcf7792, 0x1593d, 0x0, 0x80000000}};
  // -79228162514264337593490881456
  s21_decimal dec_2 = {{0xfcd63bb0, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_14) {
  // -79228162514264337591735056339
  s21_decimal dec_1 = {{0x942e77d3, 0xffffffff, 0xffffffff, 0x80000000}};
  // -849961615781
  s21_decimal dec_2 = {{0xe5a901a5, 0xc5, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_15) {
  // -79228162514264337593384760795
  s21_decimal dec_1 = {{0xf682f5db, 0xffffffff, 0xffffffff, 0x80000000}};
  // -9856994928.1
  s21_decimal dec_2 = {{0xf33a1061, 0x16, 0x0, 0x80010000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_16) {
  // -79228162514264337593138378352
  s21_decimal dec_1 = {{0xe7d37670, 0xffffffff, 0xffffffff, 0x80000000}};
  // -1814894596778903
  s21_decimal dec_2 = {{0x13beeb97, 0x672a3, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_17) {
  // 2397178545061
  s21_decimal dec_1 = {{0x22f9c3a5, 0x22e, 0x0, 0x0}};
  // 79228162514264337592922487684
  s21_decimal dec_2 = {{0xdaf53b84, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_18) {
  // 18197041530019574526788
  s21_decimal dec_1 = {{0xa7753344, 0x76ae5b7e, 0x3da, 0x0}};
  // 79228162514264337593488733445
  s21_decimal dec_2 = {{0xfcb57505, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_19) {
  // 79228162514264337592252096938
  s21_decimal dec_1 = {{0xb2ffe1aa, 0xffffffff, 0xffffffff, 0x0}};
  // 3301071615948356338272492122
  s21_decimal dec_2 = {{0x8bd4da5a, 0xe087cca5, 0xaaa951a, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_20) {
  // 79228162514264337592120320065
  s21_decimal dec_1 = {{0xab252041, 0xffffffff, 0xffffffff, 0x0}};
  // 55580607363380924
  s21_decimal dec_2 = {{0x964b76bc, 0xc57644, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_21) {
  // 79228162514264337592150871793
  s21_decimal dec_1 = {{0xacf74ef1, 0xffffffff, 0xffffffff, 0x0}};
  // 4408903744301136915659378928
  s21_decimal dec_2 = {{0xdfa250f0, 0xe47d652c, 0xe3ef5ae, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_22) {
  // 70656544534343605989514288771
  s21_decimal dec_1 = {{0xf24a1e83, 0x39034c9f, 0xe44db94a, 0x0}};
  // 79228162514264337592421832930
  s21_decimal dec_2 = {{0xbd1dd8e2, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_23) {
  // 9907056395987196274182795.1
  s21_decimal dec_1 = {{0x2cc1696f, 0x8a2b790, 0x51f302, 0x10000}};
  // 79228162514264337592918938379
  s21_decimal dec_2 = {{0xdabf130b, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_24) {
  // 79228162514264337592655695636
  s21_decimal dec_1 = {{0xcb0e4f14, 0xffffffff, 0xffffffff, 0x0}};
  // 939948076510342530
  s21_decimal dec_2 = {{0xa7b5ed82, 0xd0b5dcb, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_25) {
  // -79228162514264337592920134005
  s21_decimal dec_1 = {{0xdad15175, 0xffffffff, 0xffffffff, 0x80000000}};
  // -8200248346.61961012
  s21_decimal dec_2 = {{0x11064d34, 0xb61503e, 0x0, 0x80080000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_26) {
  // 72286414667701144185167
  s21_decimal dec_1 = {{0x613ee94f, 0xa7862e6f, 0xf4e, 0x0}};
  // 79228162514264337591964445762
  s21_decimal dec_2 = {{0xa1daac42, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_27) {
  // -44676902204321675
  s21_decimal dec_1 = {{0xe58daf8b, 0x9eb967, 0x0, 0x80000000}};
  // -79228162514264337593315494978
  s21_decimal dec_2 = {{0xf2620c42, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_28) {
  // -2887428742525
  s21_decimal dec_1 = {{0x482a1d7d, 0x2a0, 0x0, 0x80000000}};
  // -79228162514264337591923766829
  s21_decimal dec_2 = {{0x9f6df62d, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_29) {
  // 30858205732758015
  s21_decimal dec_1 = {{0xe71b61ff, 0x6da15f, 0x0, 0x0}};
  // 79228162514264337592051981167
  s21_decimal dec_2 = {{0xa7125b6f, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_30) {
  // 79228162514264337593343399028
  s21_decimal dec_1 = {{0xf40bd474, 0xffffffff, 0xffffffff, 0x0}};
  // 22444777524.18437
  s21_decimal dec_2 = {{0x3323a085, 0x7f957, 0x0, 0x50000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_31) {
  // 15872301122612
  s21_decimal dec_1 = {{0x8edec434, 0xe6f, 0x0, 0x0}};
  // 79228162514264337593484432615
  s21_decimal dec_2 = {{0xfc73d4e7, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_32) {
  // 38281680890644577.5
  s21_decimal dec_1 = {{0x4ead3cf, 0x55009dc, 0x0, 0x10000}};
  // 79228162514264337593360347496
  s21_decimal dec_2 = {{0xf50e7168, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_33) {
  // -79228162514264337593088540807
  s21_decimal dec_1 = {{0xe4db0087, 0xffffffff, 0xffffffff, 0x80000000}};
  // -9190689340430621485581
  s21_decimal dec_2 = {{0x385a2a0d, 0x3a6fbcc3, 0x1f2, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_34) {
  // 79228162514264337593220715088
  s21_decimal dec_1 = {{0xecbbd250, 0xffffffff, 0xffffffff, 0x0}};
  // 2544378472401147342284956
  s21_decimal dec_2 = {{0xb27ae89c, 0x88af1f0, 0x21acb, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_35) {
  // -79228162514264337591891988220
  s21_decimal dec_1 = {{0x9d890efc, 0xffffffff, 0xffffffff, 0x80000000}};
  // -6903182003463619124984849
  s21_decimal dec_2 = {{0xb90cfc11, 0x3f0af463, 0x5b5ce, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_36) {
  // -79228162514264337593485988696
  s21_decimal dec_1 = {{0xfc8b9358, 0xffffffff, 0xffffffff, 0x80000000}};
  // -7940137774398635515.011921
  s21_decimal dec_2 = {{0x2f6f6351, 0xbb32aaa6, 0x69163, 0x80060000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_37) {
  // -5542658091808744
  s21_decimal dec_1 = {{0xa6ac77e8, 0x13b104, 0x0, 0x80000000}};
  // -79228162514264337592606047851
  s21_decimal dec_2 = {{0xc818be6b, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_38) {
  // -95781798964608
  s21_decimal dec_1 = {{0xf01a6d80, 0x571c, 0x0, 0x80000000}};
  // -79228162514264337593444030919
  s21_decimal dec_2 = {{0xfa0b59c7, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_39) {
  // 79228162514264337593113042508
  s21_decimal dec_1 = {{0xe650de4c, 0xffffffff, 0xffffffff, 0x0}};
  // 9610395509.25
  s21_decimal dec_2 = {{0xc26bc9cd, 0xdf, 0x0, 0x20000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_40) {
  // -79228162514264337593508674898
  s21_decimal dec_1 = {{0xfde5bd52, 0xffffffff, 0xffffffff, 0x80000000}};
  // -117177481488.4982524752164
  s21_decimal dec_2 = {{0x6a683124, 0xa3d50d8, 0xf822, 0x800d0000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_41) {
  // 5865229418.5888
  s21_decimal dec_1 = {{0xd2903a0, 0x3558, 0x0, 0x40000}};
  // 79228162514264337593412958294
  s21_decimal dec_2 = {{0xf8313856, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_42) {
  // -17627057728
  s21_decimal dec_1 = {{0x1aa78e40, 0x4, 0x0, 0x80000000}};
  // -79228162514264337592815380046
  s21_decimal dec_2 = {{0xd492e64e, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_43) {
  // -62248256734379046876943111575
  s21_decimal dec_1 = {{0xe225597, 0x3e11d70d, 0xc9228d17, 0x80000000}};
  // -58008129466878876763255998465
  s21_decimal dec_2 = {{0xf5e00801, 0x7d92feb7, 0xbb6f3337, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_44) {
  // 3155761542837
  s21_decimal dec_1 = {{0xc20bb6b5, 0x2de, 0x0, 0x0}};
  // 79228162514264337591406039930
  s21_decimal dec_2 = {{0x8092137a, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_45) {
  // -79228162514264337593455989436
  s21_decimal dec_1 = {{0xfac1d2bc, 0xffffffff, 0xffffffff, 0x80000000}};
  // -4973638438350
  s21_decimal dec_2 = {{0x3f3cdce, 0x486, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_46) {
  // -9801059721983
  s21_decimal dec_1 = {{0xfcaee2ff, 0x8e9, 0x0, 0x80000000}};
  // -79228162514264337592361914851
  s21_decimal dec_2 = {{0xb98b91e3, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_47) {
  // -548126790583.6361599160733
  s21_decimal dec_1 = {{0x22ac119d, 0x20ea3c2a, 0x488b4, 0x800d0000}};
  // -79228162514264337592727877082
  s21_decimal dec_2 = {{0xcf5bb5da, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_48) {
  // -79228162514264337592075521663
  s21_decimal dec_1 = {{0xa8798e7f, 0xffffffff, 0xffffffff, 0x80000000}};
  // -2945273819148151
  s21_decimal dec_2 = {{0xffc1af77, 0xa76b5, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_49) {
  // 79228162514264337591815464220
  s21_decimal dec_1 = {{0x98f9651c, 0xffffffff, 0xffffffff, 0x0}};
  // 19571736982286220498477
  s21_decimal dec_2 = {{0xf1d9962d, 0xfc69b1e1, 0x424, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_50) {
  // 4480647073882
  s21_decimal dec_1 = {{0x3b60905a, 0x413, 0x0, 0x0}};
  // 79228162514264337592807534096
  s21_decimal dec_2 = {{0xd41b2e10, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_51) {
  // -79228162514264337592831102148
  s21_decimal dec_1 = {{0xd582ccc4, 0xffffffff, 0xffffffff, 0x80000000}};
  // -22574787825
  s21_decimal dec_2 = {{0x418fecf1, 0x5, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_52) {
  // -79228162514264337592999319509
  s21_decimal dec_1 = {{0xdf8997d5, 0xffffffff, 0xffffffff, 0x80000000}};
  // -93161961480156181733
  s21_decimal dec_2 = {{0x7b5574e5, 0xce1c65f, 0x5, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_53) {
  // 79228162514264337592817702570
  s21_decimal dec_1 = {{0xd4b656aa, 0xffffffff, 0xffffffff, 0x0}};
  // 691039372943
  s21_decimal dec_2 = {{0xe528068f, 0xa0, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_54) {
  // 79228162514264337593364799951
  s21_decimal dec_1 = {{0xf55261cf, 0xffffffff, 0xffffffff, 0x0}};
  // 962941268
  s21_decimal dec_2 = {{0x39655154, 0x0, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_55) {
  // 660861729933738857933128
  s21_decimal dec_1 = {{0x2e072948, 0x62dbbb3a, 0x8bf1, 0x0}};
  // 79228162514264337591908603400
  s21_decimal dec_2 = {{0x9e869608, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_56) {
  // 79228162514264337591658644066
  s21_decimal dec_1 = {{0x8fa08262, 0xffffffff, 0xffffffff, 0x0}};
  // 19556591041596108754
  s21_decimal dec_2 = {{0xe3ec2fd2, 0xf66f7ef, 0x1, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_57) {
  // -79228162514264337592487018764
  s21_decimal dec_1 = {{0xc100810c, 0xffffffff, 0xffffffff, 0x80000000}};
  // -8815478625223448309
  s21_decimal dec_2 = {{0x6d7e16f5, 0x7a56df1a, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_58) {
  // 99516339693817764
  s21_decimal dec_1 = {{0x6ccc0fa4, 0x1618d95, 0x0, 0x0}};
  // 79228162514264337592956678038
  s21_decimal dec_2 = {{0xdcfeef96, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_59) {
  // -21179463859851077239
  s21_decimal dec_1 = {{0xbba5a677, 0x25ec922a, 0x1, 0x80000000}};
  // -79228162514264337593358830859
  s21_decimal dec_2 = {{0xf4f74d0b, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_60) {
  // -29410140450225950845
  s21_decimal dec_1 = {{0xfa10907d, 0x9825ceea, 0x1, 0x80000000}};
  // -79228162514264337592275514342
  s21_decimal dec_2 = {{0xb46533e6, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_61) {
  // -79228162514264337591816141768
  s21_decimal dec_1 = {{0x9903bbc8, 0xffffffff, 0xffffffff, 0x80000000}};
  // -59774964436638737279546954
  s21_decimal dec_2 = {{0xc608f64a, 0x50abdc23, 0x3171d7, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_62) {
  // 9669655340874584891574064603
  s21_decimal dec_1 = {{0xd6215db, 0x635b7554, 0x1f3e8d2a, 0x0}};
  // 79228162514264337592499859447
  s21_decimal dec_2 = {{0xc1c46ff7, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_63) {
  // -74652996522419704489932267730
  s21_decimal dec_1 = {{0x1d74a0d2, 0x9ba6b5fd, 0xf13782ea, 0x80000000}};
  // -21854199743758962252941613488
  s21_decimal dec_2 = {{0xdc1fd9b0, 0x17ade16, 0x469d5ece, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_64) {
  // 79228162514264337591618758290
  s21_decimal dec_1 = {{0x8d3fe692, 0xffffffff, 0xffffffff, 0x0}};
  // 8332940972180133842
  s21_decimal dec_2 = {{0x151857d2, 0x73a48daa, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_65) {
  // -79228162514264337591807534374
  s21_decimal dec_1 = {{0x98806526, 0xffffffff, 0xffffffff, 0x80000000}};
  // -6156914038956409.437947080
  s21_decimal dec_2 = {{0xf4ce04c8, 0xfa956636, 0x517c6, 0x80090000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_66) {
  // -58847225789421719196413808305
  s21_decimal dec_1 = {{0xc2094eb1, 0x482425ff, 0xbe2548c6, 0x80000000}};
  // -49435981476818360117904602405
  s21_decimal dec_2 = {{0x521cf525, 0xce54c6eb, 0x9fbc7c45, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_67) {
  // 79228162514264337591654076055
  s21_decimal dec_1 = {{0x8f5ace97, 0xffffffff, 0xffffffff, 0x0}};
  // 6898821146486064345
  s21_decimal dec_2 = {{0xfd4144d9, 0x5fbd8947, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_68) {
  // 840785133722609060012
  s21_decimal dec_1 = {{0x3d6b08ac, 0x943cd873, 0x2d, 0x0}};
  // 79228162514264337591889457753
  s21_decimal dec_2 = {{0x9d627259, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_69) {
  // 79228162514264337593268478773
  s21_decimal dec_1 = {{0xef94a335, 0xffffffff, 0xffffffff, 0x0}};
  // 1669389487526860
  s21_decimal dec_2 = {{0x76553cc, 0x5ee4d, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_70) {
  // -623400230630
  s21_decimal dec_1 = {{0x258c9ee6, 0x91, 0x0, 0x80000000}};
  // -79228162514264337593104584662
  s21_decimal dec_2 = {{0xe5cfcfd6, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_71) {
  // -79228162514264337592632196465
  s21_decimal dec_1 = {{0xc9a7bd71, 0xffffffff, 0xffffffff, 0x80000000}};
  // -42781808806
  s21_decimal dec_2 = {{0xf5fe98a6, 0x9, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_72) {
  // 257391666118804386
  s21_decimal dec_1 = {{0x4b2843a2, 0x392705b, 0x0, 0x0}};
  // 79228162514264337592139596780
  s21_decimal dec_2 = {{0xac4b43ec, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_73) {
  // 79228162514264337592558373477
  s21_decimal dec_1 = {{0xc5414a65, 0xffffffff, 0xffffffff, 0x0}};
  // 141834533059
  s21_decimal dec_2 = {{0x5ff38c3, 0x21, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_74) {
  // 99188468069863874058422
  s21_decimal dec_1 = {{0xb39758b6, 0x4834a83, 0x1501, 0x0}};
  // 79228162514264337591762292291
  s21_decimal dec_2 = {{0x95ce0e43, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_75) {
  // -79228162514264337593406260072
  s21_decimal dec_1 = {{0xf7cb0368, 0xffffffff, 0xffffffff, 0x80000000}};
  // -823973322063975032843919
  s21_decimal dec_2 = {{0x863c6e8f, 0xaeec436c, 0xae7b, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_76) {
  // 7837162929752
  s21_decimal dec_1 = {{0xbb4ffe58, 0x720, 0x0, 0x0}};
  // 79228162514264337592975389677
  s21_decimal dec_2 = {{0xde1c73ed, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_77) {
  // -548966960784775.204973646397
  s21_decimal dec_1 = {{0x83bd123d, 0x93459bea, 0x1c61846, 0x800c0000}};
  // -79228162514264337592677338894
  s21_decimal dec_2 = {{0xcc588f0e, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_78) {
  // -79228162514264337591999355810
  s21_decimal dec_1 = {{0xa3ef5ba2, 0xffffffff, 0xffffffff, 0x80000000}};
  // -755412967115527
  s21_decimal dec_2 = {{0x49904b07, 0x2af0b, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_79) {
  // -81206206782172262935
  s21_decimal dec_1 = {{0xc84b7217, 0x66f666d1, 0x4, 0x80000000}};
  // -79228162514264337591538289687
  s21_decimal dec_2 = {{0x88740c17, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_80) {
  // -79228162514264337592900624394
  s21_decimal dec_1 = {{0xd9a7a00a, 0xffffffff, 0xffffffff, 0x80000000}};
  // -941047723020682.22458012840167
  s21_decimal dec_2 = {{0x3a0730e7, 0x8ecc4780, 0x3011a4a8, 0x800e0000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_81) {
  // -610226889683812892080
  s21_decimal dec_1 = {{0xfb263db0, 0x14996b0b, 0x21, 0x80000000}};
  // -79228162514264337591927194193
  s21_decimal dec_2 = {{0x9fa24251, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_82) {
  // 79228162514264337593116551507
  s21_decimal dec_1 = {{0xe6866953, 0xffffffff, 0xffffffff, 0x0}};
  // 703050618882.7
  s21_decimal dec_2 = {{0xead2f01b, 0x664, 0x0, 0x10000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_83) {
  // 7636997896
  s21_decimal dec_1 = {{0xc7335708, 0x1, 0x0, 0x0}};
  // 79228162514264337593189037251
  s21_decimal dec_2 = {{0xead874c3, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_84) {
  // -5543265267596
  s21_decimal dec_1 = {{0xa45b6f8c, 0x50a, 0x0, 0x80000000}};
  // -79228162514264337593142308466
  s21_decimal dec_2 = {{0xe80f6e72, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_85) {
  // 79228162514264337593356285772
  s21_decimal dec_1 = {{0xf4d0774c, 0xffffffff, 0xffffffff, 0x0}};
  // 212208037620
  s21_decimal dec_2 = {{0x6895aef4, 0x31, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_86) {
  // -79228162514264337592755198555
  s21_decimal dec_1 = {{0xd0fc9a5b, 0xffffffff, 0xffffffff, 0x80000000}};
  // -288853827144118345378116
  s21_decimal dec_2 = {{0xac3ba944, 0xcc1ede68, 0x3d2a, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_87) {
  // 79228162514264337591670380425
  s21_decimal dec_1 = {{0x90539789, 0xffffffff, 0xffffffff, 0x0}};
  // 487654118682226696
  s21_decimal dec_2 = {{0x554f7008, 0x6c47ed6, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_88) {
  // 4459186874885364464334407739
  s21_decimal dec_1 = {{0xa010083b, 0xdd0ce46a, 0xe688d8c, 0x0}};
  // 79228162514264337593083746186
  s21_decimal dec_2 = {{0xe491d78a, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_89) {
  // 79228162514264337593457282392
  s21_decimal dec_1 = {{0xfad58d58, 0xffffffff, 0xffffffff, 0x0}};
  // 563675814
  s21_decimal dec_2 = {{0x219902a6, 0x0, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_90) {
  // 935304087269980
  s21_decimal dec_1 = {{0x73e0f25c, 0x352a7, 0x0, 0x0}};
  // 79228162514264337591599706343
  s21_decimal dec_2 = {{0x8c1d30e7, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_91) {
  // 79228162514264337591477337406
  s21_decimal dec_1 = {{0x84d1fd3e, 0xffffffff, 0xffffffff, 0x0}};
  // 298081128007
  s21_decimal dec_2 = {{0x67050e47, 0x45, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_92) {
  // -4956952833642999852.3636
  s21_decimal dec_1 = {{0xb9d9c4f4, 0x2b655f5d, 0xa7f, 0x80040000}};
  // -79228162514264337592726179614
  s21_decimal dec_2 = {{0xcf41cf1e, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_93) {
  // -79228162514264337592632818646
  s21_decimal dec_1 = {{0xc9b13bd6, 0xffffffff, 0xffffffff, 0x80000000}};
  // -748930749506.8633624030577606
  s21_decimal dec_2 = {{0x613983c6, 0xd4097328, 0x1833028c, 0x80100000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_94) {
  // -4277017503357938
  s21_decimal dec_1 = {{0xbcfc5bf2, 0xf31ec, 0x0, 0x80000000}};
  // -79228162514264337591924514045
  s21_decimal dec_2 = {{0x9f795cfd, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_95) {
  // -9831161458238909388480247226
  s21_decimal dec_1 = {{0xf466f5ba, 0x8dcda72e, 0x1fc4256a, 0x80000000}};
  // -79228162514264337592619234190
  s21_decimal dec_2 = {{0xc8e1f38e, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_96) {
  // 18083195143804004885771746958
  s21_decimal dec_1 = {{0xa5d67e8e, 0x5034795, 0x3a6e1185, 0x0}};
  // 71513452480224177017450524756
  s21_decimal dec_2 = {{0x2af1f054, 0xcc60b1a, 0xe7128a9b, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_97) {
  // -79228162514264337593450865693
  s21_decimal dec_1 = {{0xfa73a41d, 0xffffffff, 0xffffffff, 0x80000000}};
  // -523985678904016
  s21_decimal dec_2 = {{0xec422ad0, 0x1dc8f, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_98) {
  // 5694240263.04
  s21_decimal dec_1 = {{0x94511ac0, 0x84, 0x0, 0x20000}};
  // 79228162514264337592417977262
  s21_decimal dec_2 = {{0xbce303ae, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_99) {
  // 531455476314883674
  s21_decimal dec_1 = {{0x9faf465a, 0x7601bf0, 0x0, 0x0}};
  // 79228162514264337591790216708
  s21_decimal dec_2 = {{0x97782604, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_100) {
  // 79228162514264337592225904894
  s21_decimal dec_1 = {{0xb17038fe, 0xffffffff, 0xffffffff, 0x0}};
  // 176522098005088344789779.67
  s21_decimal dec_2 = {{0x87d273af, 0x35f352f1, 0xe9a00, 0x20000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_101) {
  // 79228162514264337593376887817
  s21_decimal dec_1 = {{0xf60ad409, 0xffffffff, 0xffffffff, 0x0}};
  // 8309073433889903712
  s21_decimal dec_2 = {{0xc7a49460, 0x734fc243, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_102) {
  // -8089562836399445994366738
  s21_decimal dec_1 = {{0x43fbe712, 0x1480647a, 0x6b108, 0x80000000}};
  // -79228162514264337593151464498
  s21_decimal dec_2 = {{0xe89b2432, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_103) {
  // 3030527596302294193835582801
  s21_decimal dec_1 = {{0x4f6ba551, 0x2f35901e, 0x9cacb2e, 0x0}};
  // 79228162514264337592881543840
  s21_decimal dec_2 = {{0xd8847aa0, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_104) {
  // -79228162514264337593410786900
  s21_decimal dec_1 = {{0xf8101654, 0xffffffff, 0xffffffff, 0x80000000}};
  // -242833114973.76363306808
  s21_decimal dec_2 = {{0x8d25df38, 0x66a4ec5d, 0x524, 0x800b0000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_105) {
  // -79228162514264337591547066612
  s21_decimal dec_1 = {{0x88f9f8f4, 0xffffffff, 0xffffffff, 0x80000000}};
  // -161017314117
  s21_decimal dec_2 = {{0x7d613b45, 0x25, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_106) {
  // 79228162514264337593400781818
  s21_decimal dec_1 = {{0xf7776bfa, 0xffffffff, 0xffffffff, 0x0}};
  // 2323708125398598154350
  s21_decimal dec_2 = {{0x484bf86e, 0xf7eda484, 0x7d, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_107) {
  // 61827016231136899564.4903236
  s21_decimal dec_1 = {{0xf840f44, 0xa875ce7b, 0x1ff6bcc, 0x70000}};
  // 79228162514264337591872303873
  s21_decimal dec_2 = {{0x9c5cb301, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_108) {
  // 79228162514264337592550423675
  s21_decimal dec_1 = {{0xc4c7fc7b, 0xffffffff, 0xffffffff, 0x0}};
  // 7560567312316936093
  s21_decimal dec_2 = {{0xb714af9d, 0x68ec87e9, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_109) {
  // 9186411175798539822991
  s21_decimal dec_1 = {{0x467c278f, 0xff10a4b2, 0x1f1, 0x0}};
  // 79228162514264337592059100822
  s21_decimal dec_2 = {{0xa77efe96, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_110) {
  // 403470160.41
  s21_decimal dec_1 = {{0x64de9b69, 0x9, 0x0, 0x20000}};
  // 79228162514264337593514435402
  s21_decimal dec_2 = {{0xfe3da34a, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_111) {
  // 3615033096597734
  s21_decimal dec_1 = {{0x7b92f0e6, 0xcd7da, 0x0, 0x0}};
  // 79228162514264337592544937192
  s21_decimal dec_2 = {{0xc47444e8, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_112) {
  // -52327291240841556195536985652
  s21_decimal dec_1 = {{0x7222de34, 0x2e1b6f27, 0xa9141eee, 0x80000000}};
  // -33621731275114778938592978335
  s21_decimal dec_2 = {{0x1ed3e59f, 0x8f66e21f, 0x6ca33e88, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_113) {
  // 79228162514264337591814247656
  s21_decimal dec_1 = {{0x98e6d4e8, 0xffffffff, 0xffffffff, 0x0}};
  // 70164479856837133047
  s21_decimal dec_2 = {{0xb4d402f7, 0xcdba4eae, 0x3, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_114) {
  // -5923524597450179991906.104599
  s21_decimal dec_1 = {{0x55413517, 0xddc87c3e, 0x1323d31f, 0x80060000}};
  // -79228162514264337592102099761
  s21_decimal dec_2 = {{0xaa0f1b31, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_115) {
  // 79228162514264337593377562798
  s21_decimal dec_1 = {{0xf61520ae, 0xffffffff, 0xffffffff, 0x0}};
  // 9169178883929868738328339
  s21_decimal dec_2 = {{0x4ca97713, 0x2eec4e6d, 0x795a6, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_116) {
  // 3921399203391499803543.28376
  s21_decimal dec_1 = {{0x30d9b738, 0xad70a30c, 0x1445edb, 0x50000}};
  // 79228162514264337593428112592
  s21_decimal dec_2 = {{0xf91874d0, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_117) {
  // -3221216621.0163745589121698548
  s21_decimal dec_1 = {{0xe8eacaf4, 0x46b407d2, 0x68154785, 0x80130000}};
  // -79228162514264337592958647351
  s21_decimal dec_2 = {{0xdd1cfc37, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_118) {
  // -69132207659895696585
  s21_decimal dec_1 = {{0xaa9f2cc9, 0xbf66f096, 0x3, 0x80000000}};
  // -79228162514264337591594154383
  s21_decimal dec_2 = {{0x8bc8798f, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_119) {
  // 9467309318
  s21_decimal dec_1 = {{0x344bad06, 0x2, 0x0, 0x0}};
  // 79228162514264337591657892651
  s21_decimal dec_2 = {{0x8f950b2b, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_120) {
  // -673916985978.8862345105267
  s21_decimal dec_1 = {{0x28cecf73, 0x2150a1c7, 0x59313, 0x800d0000}};
  // -79228162514264337591415785332
  s21_decimal dec_2 = {{0x8126c774, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_121) {
  // -27090933793046039420966002191
  s21_decimal dec_1 = {{0xf83bde0f, 0xa7716738, 0x5789185f, 0x80000000}};
  // -79228162514264337592125006212
  s21_decimal dec_2 = {{0xab6ca184, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_122) {
  // 42569967075571102587793567925
  s21_decimal dec_1 = {{0xfd69f0b5, 0x4c6c69fd, 0x898d0d2b, 0x0}};
  // 79228162514264337592122517470
  s21_decimal dec_2 = {{0xab46a7de, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_123) {
  // 79228162514264337593022854928
  s21_decimal dec_1 = {{0xe0f0b710, 0xffffffff, 0xffffffff, 0x0}};
  // 162760625557273136254079279
  s21_decimal dec_2 = {{0x796ed12f, 0x30f3735f, 0x86a1e7, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_124) {
  // -79228162514264337593045706934
  s21_decimal dec_1 = {{0xe24d68b6, 0xffffffff, 0xffffffff, 0x80000000}};
  // -2160663493220613421
  s21_decimal dec_2 = {{0xd891bd2d, 0x1dfc37ff, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_125) {
  // -6222965484657717900419702629
  s21_decimal dec_1 = {{0xd11e9f65, 0xe36edcf9, 0x141b8432, 0x80000000}};
  // -79228162514264337591461409653
  s21_decimal dec_2 = {{0x83def375, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_126) {
  // 79228162514264337593434202672
  s21_decimal dec_1 = {{0xf9756230, 0xffffffff, 0xffffffff, 0x0}};
  // 660635981871230267405741067
  s21_decimal dec_2 = {{0xab5dac0b, 0x569db832, 0x222771c, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_127) {
  // 67823933854011015256792963055
  s21_decimal dec_1 = {{0x67f917ef, 0x8d354fa7, 0xdb26a4a5, 0x0}};
  // 77798308820866923086965722772
  s21_decimal dec_2 = {{0xfd4e94, 0xf6cf9686, 0xfb6140b3, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_128) {
  // 8918295928394111563467783600
  s21_decimal dec_1 = {{0xe93efdb0, 0x58c92a9, 0x1cd10a9f, 0x0}};
  // 79228162514264337592098133000
  s21_decimal dec_2 = {{0xa9d29408, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_129) {
  // 79228162514264337592286633287
  s21_decimal dec_1 = {{0xb50edd47, 0xffffffff, 0xffffffff, 0x0}};
  // 36941787558426.05095927
  s21_decimal dec_2 = {{0x48f89bf7, 0x430765d7, 0xc8, 0x80000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_130) {
  // 283689280900468103898008
  s21_decimal dec_1 = {{0x6996e398, 0xd3a4c8bf, 0x3c12, 0x0}};
  // 79228162514264337592289127333
  s21_decimal dec_2 = {{0xb534eba5, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_131) {
  // 79228162514264337592143103803
  s21_decimal dec_1 = {{0xac80c73b, 0xffffffff, 0xffffffff, 0x0}};
  // 61043953512787750761621122
  s21_decimal dec_2 = {{0xf6756682, 0x59ccf163, 0x327e8f, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_132) {
  // -19022450198667945666239439368
  s21_decimal dec_1 = {{0x400ea208, 0x91d4eac1, 0x3d770083, 0x80000000}};
  // -79228162514264337592503940824
  s21_decimal dec_2 = {{0xc202b6d8, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_133) {
  // -79228162514264337591801865303
  s21_decimal dec_1 = {{0x9829e457, 0xffffffff, 0xffffffff, 0x80000000}};
  // -973403617583
  s21_decimal dec_2 = {{0xa360792f, 0xe2, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_134) {
  // -79228162514264337591406703389
  s21_decimal dec_1 = {{0x809c331d, 0xffffffff, 0xffffffff, 0x80000000}};
  // -7482054582089.324935
  s21_decimal dec_2 = {{0x33849987, 0x67d59900, 0x0, 0x80060000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_135) {
  // -79228162514264337592196053175
  s21_decimal dec_1 = {{0xafa8b8b7, 0xffffffff, 0xffffffff, 0x80000000}};
  // -7615033379290237937838587286
  s21_decimal dec_2 = {{0x83e1fd96, 0xab36d4e0, 0x189b020a, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_136) {
  // -646005744377206.087240042889
  s21_decimal dec_1 = {{0x2ecec989, 0x93189990, 0x2165d09, 0x800c0000}};
  // -79228162514264337593461174436
  s21_decimal dec_2 = {{0xfb10f0a4, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_137) {
  // 21940115004414044735995424282
  s21_decimal dec_1 = {{0x3590ae1a, 0x9e4de3ba, 0x46e47011, 0x0}};
  // 57612963488852426664929835592
  s21_decimal dec_2 = {{0x26b6ba48, 0xe5a7d8f9, 0xba285390, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_138) {
  // -79228162514264337593489061825
  s21_decimal dec_1 = {{0xfcba77c1, 0xffffffff, 0xffffffff, 0x80000000}};
  // -244432809103065160
  s21_decimal dec_2 = {{0x460a0048, 0x3646658, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_139) {
  // -77806129480715.3706
  s21_decimal dec_1 = {{0x1275fc2a, 0xacc3aa0, 0x0, 0x80040000}};
  // -79228162514264337591910196179
  s21_decimal dec_2 = {{0x9e9ee3d3, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_140) {
  // -375914132628
  s21_decimal dec_1 = {{0x863a7494, 0x57, 0x0, 0x80000000}};
  // -79228162514264337593309888085
  s21_decimal dec_2 = {{0xf20c7e55, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_141) {
  // -41852603230967650370719042972
  s21_decimal dec_1 = {{0x6833cd9c, 0x5c04cffb, 0x873ba977, 0x80000000}};
  // -62950720355519043051748206676
  s21_decimal dec_2 = {{0xba422854, 0x72f5a31e, 0xcb679d8c, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_142) {
  // -649322931541624
  s21_decimal dec_1 = {{0x46add678, 0x24e8e, 0x0, 0x80000000}};
  // -79228162514264337593101907008
  s21_decimal dec_2 = {{0xe5a6f440, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_143) {
  // -98673734710120932971
  s21_decimal dec_1 = {{0x49e3e66b, 0x595f86ec, 0x5, 0x80000000}};
  // -79228162514264337593048089182
  s21_decimal dec_2 = {{0xe271c25e, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_144) {
  // -53916496838647.142
  s21_decimal dec_1 = {{0xa999dd66, 0xbf8cc4, 0x0, 0x80030000}};
  // -79228162514264337593473142921
  s21_decimal dec_2 = {{0xfbc79089, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_145) {
  // 79228162514264337591994910735
  s21_decimal dec_1 = {{0xa3ab880f, 0xffffffff, 0xffffffff, 0x0}};
  // 77467838289733885568.064520216
  s21_decimal dec_2 = {{0x60e98018, 0x9302c75e, 0xfa4fe4d8, 0x90000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_146) {
  // 79228162514264337593067139727
  s21_decimal dec_1 = {{0xe394728f, 0xffffffff, 0xffffffff, 0x0}};
  // 25063367681045013309916606
  s21_decimal dec_2 = {{0x491f85be, 0xe26d4148, 0x14bb5f, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_147) {
  // 79228162514264337591488842345
  s21_decimal dec_1 = {{0x85818a69, 0xffffffff, 0xffffffff, 0x0}};
  // 13144240850676458
  s21_decimal dec_2 = {{0xebf2aea, 0x2eb29e, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_148) {
  // 79228162514264337591827789651
  s21_decimal dec_1 = {{0x99b57753, 0xffffffff, 0xffffffff, 0x0}};
  // 556909238636693510515
  s21_decimal dec_2 = {{0x915d5973, 0x30ab11e8, 0x1e, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_149) {
  // -79228162514264337592745393513
  s21_decimal dec_1 = {{0xd066fd69, 0xffffffff, 0xffffffff, 0x80000000}};
  // -1129420162265626.0902651176061
  s21_decimal dec_2 = {{0xbd18247d, 0xc9e5b631, 0x247e5838, 0x800d0000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_150) {
  // 79228162514264337593245751175
  s21_decimal dec_1 = {{0xee39d787, 0xffffffff, 0xffffffff, 0x0}};
  // 8948296867027058303923478
  s21_decimal dec_2 = {{0x8fb7516, 0x25297467, 0x766e0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_151) {
  // 302411719177110564613687255
  s21_decimal dec_1 = {{0x3c8087d7, 0x255618b2, 0xfa262c, 0x0}};
  // 79228162514264337592179130452
  s21_decimal dec_2 = {{0xaea68054, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_152) {
  // -79228162514264337592689014044
  s21_decimal dec_1 = {{0xcd0ab51c, 0xffffffff, 0xffffffff, 0x80000000}};
  // -67943515659.28
  s21_decimal dec_2 = {{0xeee95c68, 0x62d, 0x0, 0x80020000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_153) {
  // -823646435229111
  s21_decimal dec_1 = {{0x21313db7, 0x2ed1a, 0x0, 0x80000000}};
  // -79228162514264337592232432759
  s21_decimal dec_2 = {{0xb1d3d477, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_154) {
  // -79228162514264337593238732940
  s21_decimal dec_1 = {{0xedcec08c, 0xffffffff, 0xffffffff, 0x80000000}};
  // -796607470969.825138272608
  s21_decimal dec_2 = {{0xa6e76960, 0x2d72bfc9, 0xa8b0, 0x800c0000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_155) {
  // 135165343974.96900300
  s21_decimal dec_1 = {{0xbd26bacc, 0xbb94606b, 0x0, 0x80000}};
  // 79228162514264337592574765631
  s21_decimal dec_2 = {{0xc63b6a3f, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_156) {
  // 8354235144076381
  s21_decimal dec_1 = {{0xf221fc5d, 0x1dae21, 0x0, 0x0}};
  // 79228162514264337592328690165
  s21_decimal dec_2 = {{0xb79099f5, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_157) {
  // 79228162514264337593000312470
  s21_decimal dec_1 = {{0xdf98be96, 0xffffffff, 0xffffffff, 0x0}};
  // 985467201
  s21_decimal dec_2 = {{0x3abd0941, 0x0, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_158) {
  // 917209560013.919193
  s21_decimal dec_1 = {{0x3938d3d9, 0xcba953c, 0x0, 0x60000}};
  // 79228162514264337592313192297
  s21_decimal dec_2 = {{0xb6a41f69, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_159) {
  // -56495824865
  s21_decimal dec_1 = {{0x2769dfe1, 0xd, 0x0, 0x80000000}};
  // -79228162514264337591711162561
  s21_decimal dec_2 = {{0x92c1e0c1, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_160) {
  // -3048564013165476
  s21_decimal dec_1 = {{0x1f146ba4, 0xad4a7, 0x0, 0x80000000}};
  // -79228162514264337592104899212
  s21_decimal dec_2 = {{0xaa39d28c, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_161) {
  // 75852088294428681711.8722
  s21_decimal dec_1 = {{0xcd11ea02, 0x7fdc7df3, 0xa09f, 0x40000}};
  // 79228162514264337591913905574
  s21_decimal dec_2 = {{0x9ed77da6, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_162) {
  // -92594791799373.55100589547759
  s21_decimal dec_1 = {{0xa5660ef, 0x260be2e7, 0x1deb42fc, 0x800e0000}};
  // -79228162514264337591597863388
  s21_decimal dec_2 = {{0x8c0111dc, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_163) {
  // 79228162514264337592237318909
  s21_decimal dec_1 = {{0xb21e62fd, 0xffffffff, 0xffffffff, 0x0}};
  // 23413735013.72329690211971
  s21_decimal dec_2 = {{0xed392683, 0x1ca181a9, 0x1efce, 0xe0000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_164) {
  // -2687705114330085686
  s21_decimal dec_1 = {{0xb8a53936, 0x254ca58f, 0x0, 0x80000000}};
  // -79228162514264337593538161776
  s21_decimal dec_2 = {{0xffa7ac70, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_165) {
  // 79228162514264337591425487874
  s21_decimal dec_1 = {{0x81bad402, 0xffffffff, 0xffffffff, 0x0}};
  // 9563545765028.3894179231648638
  s21_decimal dec_2 = {{0x5d6f4b7e, 0x8ddd9aaa, 0x3503cbe3, 0x100000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_166) {
  // -8065722838427047426288472
  s21_decimal dec_1 = {{0xc2946b58, 0xb6117e4d, 0x6abfb, 0x80000000}};
  // -79228162514264337592100240693
  s21_decimal dec_2 = {{0xa9f2bd35, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

Suite *test_s21_add_suite(void) {
  Suite *c = suite_create("s21_add_cases");
  TCase *tc = tcase_create("s21_add_tc");
  // SRunner *sr = srunner_create(c);
  // int nf;

  suite_add_tcase(c, tc);

  tcase_add_test(tc, s21_add_1);
  tcase_add_test(tc, s21_add_2);
  tcase_add_test(tc, s21_add_3);
  tcase_add_test(tc, s21_add_4);
  tcase_add_test(tc, s21_add_5);
  tcase_add_test(tc, s21_add_6);
  tcase_add_test(tc, s21_add_7);
  tcase_add_test(tc, s21_add_8);
  tcase_add_test(tc, s21_add_9);
  tcase_add_test(tc, s21_add_10);
  tcase_add_test(tc, s21_add_11);
  tcase_add_test(tc, s21_add_13);
  tcase_add_test(tc, s21_add_14);
  tcase_add_test(tc, s21_add_15);
  tcase_add_test(tc, s21_add_16);
  tcase_add_test(tc, s21_add_17);
  tcase_add_test(tc, s21_add_18);
  tcase_add_test(tc, s21_add_19);
  tcase_add_test(tc, s21_add_20);
  tcase_add_test(tc, s21_add_22);
  tcase_add_test(tc, s21_add_23);
  tcase_add_test(tc, s21_add_24);
  tcase_add_test(tc, s21_add_25);
  tcase_add_test(tc, s21_add_26);
  tcase_add_test(tc, s21_add_27);
  tcase_add_test(tc, s21_add_28);
  tcase_add_test(tc, s21_add_29);
  tcase_add_test(tc, s21_add_30);
  tcase_add_test(tc, s21_add_31);
  tcase_add_test(tc, s21_add_33);
  tcase_add_test(tc, s21_add_34);
  tcase_add_test(tc, s21_add_36);
  tcase_add_test(tc, s21_add_37);
  tcase_add_test(tc, s21_add_38);
  tcase_add_test(tc, s21_add_39);
  tcase_add_test(tc, s21_add_40);
  tcase_add_test(tc, s21_add_41);
  tcase_add_test(tc, s21_add_42);
  tcase_add_test(tc, s21_add_43);
  tcase_add_test(tc, s21_add_44);
  tcase_add_test(tc, s21_add_45);
  tcase_add_test(tc, s21_add_46);
  tcase_add_test(tc, s21_add_47);
  tcase_add_test(tc, s21_add_48);
  tcase_add_test(tc, s21_add_49);
  tcase_add_test(tc, s21_add_50);
  tcase_add_test(tc, s21_add_51);
  tcase_add_test(tc, s21_add_52);
  tcase_add_test(tc, s21_add_53);
  tcase_add_test(tc, s21_add_54);
  tcase_add_test(tc, s21_add_55);
  tcase_add_test(tc, s21_add_56);
  tcase_add_test(tc, s21_add_57);
  tcase_add_test(tc, s21_add_58);
  tcase_add_test(tc, s21_add_59);
  tcase_add_test(tc, s21_add_60);
  tcase_add_test(tc, s21_add_61);
  tcase_add_test(tc, s21_add_62);
  tcase_add_test(tc, s21_add_63);
  tcase_add_test(tc, s21_add_64);
  tcase_add_test(tc, s21_add_65);
  tcase_add_test(tc, s21_add_66);
  tcase_add_test(tc, s21_add_67);
  tcase_add_test(tc, s21_add_68);
  tcase_add_test(tc, s21_add_69);
  tcase_add_test(tc, s21_add_70);
  tcase_add_test(tc, s21_add_71);
  tcase_add_test(tc, s21_add_72);
  tcase_add_test(tc, s21_add_73);
  tcase_add_test(tc, s21_add_74);
  tcase_add_test(tc, s21_add_75);
  tcase_add_test(tc, s21_add_76);
  tcase_add_test(tc, s21_add_77);
  tcase_add_test(tc, s21_add_78);
  tcase_add_test(tc, s21_add_79);
  tcase_add_test(tc, s21_add_80);
  tcase_add_test(tc, s21_add_81);
  tcase_add_test(tc, s21_add_82);
  tcase_add_test(tc, s21_add_83);
  tcase_add_test(tc, s21_add_85);
  tcase_add_test(tc, s21_add_86);
  tcase_add_test(tc, s21_add_87);
  tcase_add_test(tc, s21_add_88);
  tcase_add_test(tc, s21_add_89);
  tcase_add_test(tc, s21_add_90);
  tcase_add_test(tc, s21_add_91);
  tcase_add_test(tc, s21_add_92);
  tcase_add_test(tc, s21_add_93);
  tcase_add_test(tc, s21_add_94);
  tcase_add_test(tc, s21_add_95);
  tcase_add_test(tc, s21_add_96);
  tcase_add_test(tc, s21_add_97);
  tcase_add_test(tc, s21_add_98);
  tcase_add_test(tc, s21_add_99);
  tcase_add_test(tc, s21_add_100);
  tcase_add_test(tc, s21_add_102);
  tcase_add_test(tc, s21_add_103);
  tcase_add_test(tc, s21_add_104);
  tcase_add_test(tc, s21_add_105);
  tcase_add_test(tc, s21_add_106);
  tcase_add_test(tc, s21_add_107);
  tcase_add_test(tc, s21_add_108);
  tcase_add_test(tc, s21_add_109);
  tcase_add_test(tc, s21_add_110);
  tcase_add_test(tc, s21_add_111);
  tcase_add_test(tc, s21_add_112);
  tcase_add_test(tc, s21_add_113);
  tcase_add_test(tc, s21_add_114);
  tcase_add_test(tc, s21_add_115);
  tcase_add_test(tc, s21_add_116);
  tcase_add_test(tc, s21_add_117);
  tcase_add_test(tc, s21_add_118);
  tcase_add_test(tc, s21_add_119);
  tcase_add_test(tc, s21_add_120);
  tcase_add_test(tc, s21_add_121);
  tcase_add_test(tc, s21_add_122);
  tcase_add_test(tc, s21_add_123);
  tcase_add_test(tc, s21_add_124);
  tcase_add_test(tc, s21_add_125);
  tcase_add_test(tc, s21_add_126);
  tcase_add_test(tc, s21_add_127);
  tcase_add_test(tc, s21_add_128);
  tcase_add_test(tc, s21_add_129);
  tcase_add_test(tc, s21_add_130);
  tcase_add_test(tc, s21_add_131);
  tcase_add_test(tc, s21_add_132);
  tcase_add_test(tc, s21_add_133);
  tcase_add_test(tc, s21_add_134);
  tcase_add_test(tc, s21_add_135);
  tcase_add_test(tc, s21_add_136);
  tcase_add_test(tc, s21_add_137);
  tcase_add_test(tc, s21_add_138);
  tcase_add_test(tc, s21_add_140);
  tcase_add_test(tc, s21_add_141);
  tcase_add_test(tc, s21_add_142);
  tcase_add_test(tc, s21_add_143);
  tcase_add_test(tc, s21_add_144);
  tcase_add_test(tc, s21_add_145);
  tcase_add_test(tc, s21_add_146);
  tcase_add_test(tc, s21_add_147);
  tcase_add_test(tc, s21_add_148);
  tcase_add_test(tc, s21_add_149);
  tcase_add_test(tc, s21_add_150);
  tcase_add_test(tc, s21_add_151);
  tcase_add_test(tc, s21_add_152);
  tcase_add_test(tc, s21_add_153);
  tcase_add_test(tc, s21_add_154);
  tcase_add_test(tc, s21_add_155);
  tcase_add_test(tc, s21_add_156);
  tcase_add_test(tc, s21_add_157);
  tcase_add_test(tc, s21_add_158);
  tcase_add_test(tc, s21_add_159);
  tcase_add_test(tc, s21_add_160);
  tcase_add_test(tc, s21_add_161);
  tcase_add_test(tc, s21_add_162);
  tcase_add_test(tc, s21_add_163);
  tcase_add_test(tc, s21_add_164);
  tcase_add_test(tc, s21_add_165);
  tcase_add_test(tc, s21_add_166);
  tcase_add_test(tc, s21_add_167);
  tcase_add_test(tc, s21_add_168);
  tcase_add_test(tc, s21_add_169);
  tcase_add_test(tc, s21_add_170);
  tcase_add_test(tc, s21_add_171);
  tcase_add_test(tc, s21_add_172);
  tcase_add_test(tc, s21_add_173);
  tcase_add_test(tc, s21_add_174);
  tcase_add_test(tc, s21_add_175);
  tcase_add_test(tc, s21_add_176);
  tcase_add_test(tc, s21_add_177);
  tcase_add_test(tc, s21_add_178);
  tcase_add_test(tc, s21_add_179);
  tcase_add_test(tc, s21_add_180);
  tcase_add_test(tc, s21_add_181);
  tcase_add_test(tc, s21_add_182);
  tcase_add_test(tc, s21_add_183);
  tcase_add_test(tc, s21_add_184);
  tcase_add_test(tc, s21_add_185);
  tcase_add_test(tc, s21_add_186);
  tcase_add_test(tc, s21_add_187);
  tcase_add_test(tc, s21_add_188);
  tcase_add_test(tc, s21_add_189);
  tcase_add_test(tc, s21_add_190);
  tcase_add_test(tc, s21_add_191);
  tcase_add_test(tc, s21_add_192);
  tcase_add_test(tc, s21_add_193);
  tcase_add_test(tc, s21_add_194);
  tcase_add_test(tc, s21_add_196);
  tcase_add_test(tc, s21_add_197);
  tcase_add_test(tc, s21_add_198);
  tcase_add_test(tc, s21_add_199);
  tcase_add_test(tc, s21_add_200);
  tcase_add_test(tc, s21_add_201);
  tcase_add_test(tc, s21_add_202);
  tcase_add_test(tc, s21_add_203);
  tcase_add_test(tc, s21_add_204);
  tcase_add_test(tc, s21_add_205);
  tcase_add_test(tc, s21_add_206);
  tcase_add_test(tc, s21_add_207);
  tcase_add_test(tc, s21_add_208);
  tcase_add_test(tc, s21_add_209);
  tcase_add_test(tc, s21_add_210);
  tcase_add_test(tc, s21_add_211);
  tcase_add_test(tc, s21_add_212);
  tcase_add_test(tc, s21_add_213);
  tcase_add_test(tc, s21_add_214);
  tcase_add_test(tc, s21_add_215);
  tcase_add_test(tc, s21_add_216);
  tcase_add_test(tc, s21_add_217);
  tcase_add_test(tc, s21_add_218);
  tcase_add_test(tc, s21_add_220);
  tcase_add_test(tc, s21_add_221);
  tcase_add_test(tc, s21_add_222);
  tcase_add_test(tc, s21_add_223);
  tcase_add_test(tc, s21_add_224);
  tcase_add_test(tc, s21_add_225);
  tcase_add_test(tc, s21_add_226);
  tcase_add_test(tc, s21_add_227);
  tcase_add_test(tc, s21_add_228);
  tcase_add_test(tc, s21_add_229);
  tcase_add_test(tc, s21_add_230);
  tcase_add_test(tc, s21_add_232);
  tcase_add_test(tc, s21_add_233);
  tcase_add_test(tc, s21_add_234);
  tcase_add_test(tc, s21_add_235);
  tcase_add_test(tc, s21_add_236);
  tcase_add_test(tc, s21_add_237);
  tcase_add_test(tc, s21_add_239);
  tcase_add_test(tc, s21_add_240);
  tcase_add_test(tc, s21_add_241);
  tcase_add_test(tc, s21_add_242);
  tcase_add_test(tc, s21_add_243);
  tcase_add_test(tc, s21_add_244);
  tcase_add_test(tc, s21_add_245);
  tcase_add_test(tc, s21_add_246);
  tcase_add_test(tc, s21_add_247);
  tcase_add_test(tc, s21_add_248);
  tcase_add_test(tc, s21_add_249);
  tcase_add_test(tc, s21_add_250);
  tcase_add_test(tc, s21_add_251);
  tcase_add_test(tc, s21_add_252);
  tcase_add_test(tc, s21_add_253);
  tcase_add_test(tc, s21_add_254);
  tcase_add_test(tc, s21_add_255);
  tcase_add_test(tc, s21_add_256);
  tcase_add_test(tc, s21_add_257);
  tcase_add_test(tc, s21_add_258);
  tcase_add_test(tc, s21_add_259);
  tcase_add_test(tc, s21_add_260);
  tcase_add_test(tc, s21_add_261);
  tcase_add_test(tc, s21_add_262);
  tcase_add_test(tc, s21_add_263);
  tcase_add_test(tc, s21_add_264);
  tcase_add_test(tc, s21_add_265);
  tcase_add_test(tc, s21_add_266);
  tcase_add_test(tc, s21_add_267);
  tcase_add_test(tc, s21_add_268);
  tcase_add_test(tc, s21_add_269);
  tcase_add_test(tc, s21_add_270);
  tcase_add_test(tc, s21_add_271);
  tcase_add_test(tc, s21_add_272);
  tcase_add_test(tc, s21_add_273);
  tcase_add_test(tc, s21_add_274);
  tcase_add_test(tc, s21_add_275);
  tcase_add_test(tc, s21_add_276);
  tcase_add_test(tc, s21_add_277);
  tcase_add_test(tc, s21_add_278);
  tcase_add_test(tc, s21_add_279);
  tcase_add_test(tc, s21_add_280);
  tcase_add_test(tc, s21_add_281);
  tcase_add_test(tc, s21_add_282);
  tcase_add_test(tc, s21_add_283);
  tcase_add_test(tc, s21_add_285);
  tcase_add_test(tc, s21_add_286);
  tcase_add_test(tc, s21_add_287);
  tcase_add_test(tc, s21_add_288);
  tcase_add_test(tc, s21_add_289);
  tcase_add_test(tc, s21_add_290);
  tcase_add_test(tc, s21_add_291);
  tcase_add_test(tc, s21_add_292);
  tcase_add_test(tc, s21_add_293);
  tcase_add_test(tc, s21_add_294);
  tcase_add_test(tc, s21_add_295);
  tcase_add_test(tc, s21_add_296);
  tcase_add_test(tc, s21_add_297);
  tcase_add_test(tc, s21_add_298);
  tcase_add_test(tc, s21_add_299);
  tcase_add_test(tc, s21_add_300);
  tcase_add_test(tc, s21_add_301);
  tcase_add_test(tc, s21_add_302);
  tcase_add_test(tc, s21_add_303);
  tcase_add_test(tc, s21_add_304);
  tcase_add_test(tc, s21_add_305);
  tcase_add_test(tc, s21_add_306);
  tcase_add_test(tc, s21_add_307);
  tcase_add_test(tc, s21_add_308);
  tcase_add_test(tc, s21_add_309);
  tcase_add_test(tc, s21_add_310);
  tcase_add_test(tc, s21_add_311);
  tcase_add_test(tc, s21_add_312);
  tcase_add_test(tc, s21_add_313);
  tcase_add_test(tc, s21_add_314);
  tcase_add_test(tc, s21_add_315);
  tcase_add_test(tc, s21_add_316);
  tcase_add_test(tc, s21_add_317);
  tcase_add_test(tc, s21_add_318);
  tcase_add_test(tc, s21_add_319);
  tcase_add_test(tc, s21_add_320);
  tcase_add_test(tc, s21_add_321);
  tcase_add_test(tc, s21_add_322);
  tcase_add_test(tc, s21_add_323);
  tcase_add_test(tc, s21_add_324);
  tcase_add_test(tc, s21_add_325);
  tcase_add_test(tc, s21_add_327);
  tcase_add_test(tc, s21_add_329);
  tcase_add_test(tc, s21_add_330);
  tcase_add_test(tc, s21_add_331);
  tcase_add_test(tc, s21_add_332);
  tcase_add_test(tc, s21_add_333);
  tcase_add_test(tc, s21_add_334);
  tcase_add_test(tc, s21_add_335);
  tcase_add_test(tc, s21_add_336);
  tcase_add_test(tc, s21_add_337);
  tcase_add_test(tc, s21_add_338);
  tcase_add_test(tc, s21_add_339);
  tcase_add_test(tc, s21_add_340);
  tcase_add_test(tc, s21_add_341);
  tcase_add_test(tc, s21_add_342);
  tcase_add_test(tc, s21_add_343);
  tcase_add_test(tc, s21_add_345);
  tcase_add_test(tc, s21_add_346);
  tcase_add_test(tc, s21_add_347);
  tcase_add_test(tc, s21_add_348);
  tcase_add_test(tc, s21_add_349);
  tcase_add_test(tc, s21_add_350);
  tcase_add_test(tc, s21_add_351);
  tcase_add_test(tc, s21_add_352);
  tcase_add_test(tc, s21_add_353);
  tcase_add_test(tc, s21_add_354);
  tcase_add_test(tc, s21_add_356);
  tcase_add_test(tc, s21_add_357);
  tcase_add_test(tc, s21_add_358);
  tcase_add_test(tc, s21_add_359);
  tcase_add_test(tc, s21_add_360);
  tcase_add_test(tc, s21_add_361);
  tcase_add_test(tc, s21_add_362);
  tcase_add_test(tc, s21_add_363);
  tcase_add_test(tc, s21_add_364);
  tcase_add_test(tc, s21_add_365);
  tcase_add_test(tc, s21_add_366);
  tcase_add_test(tc, s21_add_367);
  tcase_add_test(tc, s21_add_368);
  tcase_add_test(tc, s21_add_369);
  tcase_add_test(tc, s21_add_370);
  tcase_add_test(tc, s21_add_371);
  tcase_add_test(tc, s21_add_372);
  tcase_add_test(tc, s21_add_373);
  tcase_add_test(tc, s21_add_374);
  tcase_add_test(tc, s21_add_375);
  tcase_add_test(tc, s21_add_376);
  tcase_add_test(tc, s21_add_377);
  tcase_add_test(tc, s21_add_378);
  tcase_add_test(tc, s21_add_379);
  tcase_add_test(tc, s21_add_380);
  tcase_add_test(tc, s21_add_382);
  tcase_add_test(tc, s21_add_383);
  tcase_add_test(tc, s21_add_384);
  tcase_add_test(tc, s21_add_385);
  tcase_add_test(tc, s21_add_386);
  tcase_add_test(tc, s21_add_387);
  tcase_add_test(tc, s21_add_388);
  tcase_add_test(tc, s21_add_389);
  tcase_add_test(tc, s21_add_390);
  tcase_add_test(tc, s21_add_391);
  tcase_add_test(tc, s21_add_392);
  tcase_add_test(tc, s21_add_393);
  tcase_add_test(tc, s21_add_394);
  tcase_add_test(tc, s21_add_395);
  tcase_add_test(tc, s21_add_396);
  tcase_add_test(tc, s21_add_398);
  tcase_add_test(tc, s21_add_399);
  tcase_add_test(tc, s21_add_400);
  tcase_add_test(tc, s21_add_401);
  tcase_add_test(tc, s21_add_402);
  tcase_add_test(tc, s21_add_403);
  tcase_add_test(tc, s21_add_404);
  tcase_add_test(tc, s21_add_406);
  tcase_add_test(tc, s21_add_407);
  tcase_add_test(tc, s21_add_408);
  tcase_add_test(tc, s21_add_409);
  tcase_add_test(tc, s21_add_410);
  tcase_add_test(tc, s21_add_411);
  tcase_add_test(tc, s21_add_412);
  tcase_add_test(tc, s21_add_413);
  tcase_add_test(tc, s21_add_414);
  tcase_add_test(tc, s21_add_415);
  tcase_add_test(tc, s21_add_416);
  tcase_add_test(tc, s21_add_417);
  tcase_add_test(tc, s21_add_418);
  tcase_add_test(tc, s21_add_419);
  tcase_add_test(tc, s21_add_420);
  tcase_add_test(tc, s21_add_421);
  tcase_add_test(tc, s21_add_422);
  tcase_add_test(tc, s21_add_423);
  tcase_add_test(tc, s21_add_424);
  tcase_add_test(tc, s21_add_425);
  tcase_add_test(tc, s21_add_426);
  tcase_add_test(tc, s21_add_427);
  tcase_add_test(tc, s21_add_428);
  tcase_add_test(tc, s21_add_429);
  tcase_add_test(tc, s21_add_430);
  tcase_add_test(tc, s21_add_431);
  tcase_add_test(tc, s21_add_432);
  tcase_add_test(tc, s21_add_433);
  tcase_add_test(tc, s21_add_434);
  tcase_add_test(tc, s21_add_435);
  tcase_add_test(tc, s21_add_436);
  tcase_add_test(tc, s21_add_437);
  tcase_add_test(tc, s21_add_438);
  tcase_add_test(tc, s21_add_439);
  tcase_add_test(tc, s21_add_441);
  tcase_add_test(tc, s21_add_442);
  tcase_add_test(tc, s21_add_443);
  tcase_add_test(tc, s21_add_444);
  tcase_add_test(tc, s21_add_445);
  tcase_add_test(tc, s21_add_446);
  tcase_add_test(tc, s21_add_447);
  tcase_add_test(tc, s21_add_448);
  tcase_add_test(tc, s21_add_449);
  tcase_add_test(tc, s21_add_450);
  tcase_add_test(tc, s21_add_451);
  tcase_add_test(tc, s21_add_452);
  tcase_add_test(tc, s21_add_454);
  tcase_add_test(tc, s21_add_455);
  tcase_add_test(tc, s21_add_456);
  tcase_add_test(tc, s21_add_457);
  tcase_add_test(tc, s21_add_458);
  tcase_add_test(tc, s21_add_459);
  tcase_add_test(tc, s21_add_460);
  tcase_add_test(tc, s21_add_461);
  tcase_add_test(tc, s21_add_462);
  tcase_add_test(tc, s21_add_463);
  tcase_add_test(tc, s21_add_464);
  tcase_add_test(tc, s21_add_465);
  tcase_add_test(tc, s21_add_466);
  tcase_add_test(tc, s21_add_467);
  tcase_add_test(tc, s21_add_468);
  tcase_add_test(tc, s21_add_469);
  tcase_add_test(tc, s21_add_470);
  tcase_add_test(tc, s21_add_471);
  tcase_add_test(tc, s21_add_472);
  tcase_add_test(tc, s21_add_473);
  tcase_add_test(tc, s21_add_474);
  tcase_add_test(tc, s21_add_475);
  tcase_add_test(tc, s21_add_476);
  tcase_add_test(tc, s21_add_477);
  tcase_add_test(tc, s21_add_478);
  tcase_add_test(tc, s21_add_479);
  tcase_add_test(tc, s21_add_480);
  tcase_add_test(tc, s21_add_481);
  tcase_add_test(tc, s21_add_483);
  tcase_add_test(tc, s21_add_484);
  tcase_add_test(tc, s21_add_485);
  tcase_add_test(tc, s21_add_487);
  tcase_add_test(tc, s21_add_488);
  tcase_add_test(tc, s21_add_489);
  tcase_add_test(tc, s21_add_490);
  tcase_add_test(tc, s21_add_491);
  tcase_add_test(tc, s21_add_492);
  tcase_add_test(tc, s21_add_493);
  tcase_add_test(tc, s21_add_494);
  tcase_add_test(tc, s21_add_495);
  tcase_add_test(tc, s21_add_496);
  tcase_add_test(tc, s21_add_497);
  tcase_add_test(tc, s21_add_498);
  tcase_add_test(tc, s21_add_499);
  tcase_add_test(tc, s21_add_500);
  tcase_add_test(tc, fail_s21_add_1);
  tcase_add_test(tc, fail_s21_add_2);
  tcase_add_test(tc, fail_s21_add_3);
  tcase_add_test(tc, fail_s21_add_4);
  tcase_add_test(tc, fail_s21_add_5);
  tcase_add_test(tc, fail_s21_add_6);
  tcase_add_test(tc, fail_s21_add_7);
  tcase_add_test(tc, fail_s21_add_8);
  tcase_add_test(tc, fail_s21_add_9);
  tcase_add_test(tc, fail_s21_add_10);
  tcase_add_test(tc, fail_s21_add_11);
  tcase_add_test(tc, fail_s21_add_12);
  tcase_add_test(tc, fail_s21_add_13);
  tcase_add_test(tc, fail_s21_add_14);
  tcase_add_test(tc, fail_s21_add_15);
  tcase_add_test(tc, fail_s21_add_16);
  tcase_add_test(tc, fail_s21_add_17);
  tcase_add_test(tc, fail_s21_add_18);
  tcase_add_test(tc, fail_s21_add_19);
  tcase_add_test(tc, fail_s21_add_20);
  tcase_add_test(tc, fail_s21_add_21);
  tcase_add_test(tc, fail_s21_add_22);
  tcase_add_test(tc, fail_s21_add_23);
  tcase_add_test(tc, fail_s21_add_24);
  tcase_add_test(tc, fail_s21_add_25);
  tcase_add_test(tc, fail_s21_add_26);
  tcase_add_test(tc, fail_s21_add_27);
  tcase_add_test(tc, fail_s21_add_28);
  tcase_add_test(tc, fail_s21_add_29);
  tcase_add_test(tc, fail_s21_add_30);
  tcase_add_test(tc, fail_s21_add_31);
  tcase_add_test(tc, fail_s21_add_32);
  tcase_add_test(tc, fail_s21_add_33);
  tcase_add_test(tc, fail_s21_add_34);
  tcase_add_test(tc, fail_s21_add_35);
  tcase_add_test(tc, fail_s21_add_36);
  tcase_add_test(tc, fail_s21_add_37);
  tcase_add_test(tc, fail_s21_add_38);
  tcase_add_test(tc, fail_s21_add_39);
  tcase_add_test(tc, fail_s21_add_40);
  tcase_add_test(tc, fail_s21_add_41);
  tcase_add_test(tc, fail_s21_add_42);
  tcase_add_test(tc, fail_s21_add_43);
  tcase_add_test(tc, fail_s21_add_44);
  tcase_add_test(tc, fail_s21_add_45);
  tcase_add_test(tc, fail_s21_add_46);
  tcase_add_test(tc, fail_s21_add_47);
  tcase_add_test(tc, fail_s21_add_48);
  tcase_add_test(tc, fail_s21_add_49);
  tcase_add_test(tc, fail_s21_add_50);
  tcase_add_test(tc, fail_s21_add_51);
  tcase_add_test(tc, fail_s21_add_52);
  tcase_add_test(tc, fail_s21_add_53);
  tcase_add_test(tc, fail_s21_add_54);
  tcase_add_test(tc, fail_s21_add_55);
  tcase_add_test(tc, fail_s21_add_56);
  tcase_add_test(tc, fail_s21_add_57);
  tcase_add_test(tc, fail_s21_add_58);
  tcase_add_test(tc, fail_s21_add_59);
  tcase_add_test(tc, fail_s21_add_60);
  tcase_add_test(tc, fail_s21_add_61);
  tcase_add_test(tc, fail_s21_add_62);
  tcase_add_test(tc, fail_s21_add_63);
  tcase_add_test(tc, fail_s21_add_64);
  tcase_add_test(tc, fail_s21_add_65);
  tcase_add_test(tc, fail_s21_add_66);
  tcase_add_test(tc, fail_s21_add_67);
  tcase_add_test(tc, fail_s21_add_68);
  tcase_add_test(tc, fail_s21_add_69);
  tcase_add_test(tc, fail_s21_add_70);
  tcase_add_test(tc, fail_s21_add_71);
  tcase_add_test(tc, fail_s21_add_72);
  tcase_add_test(tc, fail_s21_add_73);
  tcase_add_test(tc, fail_s21_add_74);
  tcase_add_test(tc, fail_s21_add_75);
  tcase_add_test(tc, fail_s21_add_76);
  tcase_add_test(tc, fail_s21_add_77);
  tcase_add_test(tc, fail_s21_add_78);
  tcase_add_test(tc, fail_s21_add_79);
  tcase_add_test(tc, fail_s21_add_80);
  tcase_add_test(tc, fail_s21_add_81);
  tcase_add_test(tc, fail_s21_add_82);
  tcase_add_test(tc, fail_s21_add_83);
  tcase_add_test(tc, fail_s21_add_84);
  tcase_add_test(tc, fail_s21_add_85);
  tcase_add_test(tc, fail_s21_add_86);
  tcase_add_test(tc, fail_s21_add_87);
  tcase_add_test(tc, fail_s21_add_88);
  tcase_add_test(tc, fail_s21_add_89);
  tcase_add_test(tc, fail_s21_add_90);
  tcase_add_test(tc, fail_s21_add_91);
  tcase_add_test(tc, fail_s21_add_92);
  tcase_add_test(tc, fail_s21_add_93);
  tcase_add_test(tc, fail_s21_add_94);
  tcase_add_test(tc, fail_s21_add_95);
  tcase_add_test(tc, fail_s21_add_96);
  tcase_add_test(tc, fail_s21_add_97);
  tcase_add_test(tc, fail_s21_add_98);
  tcase_add_test(tc, fail_s21_add_99);
  tcase_add_test(tc, fail_s21_add_100);
  tcase_add_test(tc, fail_s21_add_101);
  tcase_add_test(tc, fail_s21_add_102);
  tcase_add_test(tc, fail_s21_add_103);
  tcase_add_test(tc, fail_s21_add_104);
  tcase_add_test(tc, fail_s21_add_105);
  tcase_add_test(tc, fail_s21_add_106);
  tcase_add_test(tc, fail_s21_add_107);
  tcase_add_test(tc, fail_s21_add_108);
  tcase_add_test(tc, fail_s21_add_109);
  tcase_add_test(tc, fail_s21_add_110);
  tcase_add_test(tc, fail_s21_add_111);
  tcase_add_test(tc, fail_s21_add_112);
  tcase_add_test(tc, fail_s21_add_113);
  tcase_add_test(tc, fail_s21_add_114);
  tcase_add_test(tc, fail_s21_add_115);
  tcase_add_test(tc, fail_s21_add_116);
  tcase_add_test(tc, fail_s21_add_117);
  tcase_add_test(tc, fail_s21_add_118);
  tcase_add_test(tc, fail_s21_add_119);
  tcase_add_test(tc, fail_s21_add_120);
  tcase_add_test(tc, fail_s21_add_121);
  tcase_add_test(tc, fail_s21_add_122);
  tcase_add_test(tc, fail_s21_add_123);
  tcase_add_test(tc, fail_s21_add_124);
  tcase_add_test(tc, fail_s21_add_125);
  tcase_add_test(tc, fail_s21_add_126);
  tcase_add_test(tc, fail_s21_add_127);
  tcase_add_test(tc, fail_s21_add_128);
  tcase_add_test(tc, fail_s21_add_129);
  tcase_add_test(tc, fail_s21_add_130);
  tcase_add_test(tc, fail_s21_add_131);
  tcase_add_test(tc, fail_s21_add_132);
  tcase_add_test(tc, fail_s21_add_133);
  tcase_add_test(tc, fail_s21_add_134);
  tcase_add_test(tc, fail_s21_add_135);
  tcase_add_test(tc, fail_s21_add_136);
  tcase_add_test(tc, fail_s21_add_137);
  tcase_add_test(tc, fail_s21_add_138);
  tcase_add_test(tc, fail_s21_add_139);
  tcase_add_test(tc, fail_s21_add_140);
  tcase_add_test(tc, fail_s21_add_141);
  tcase_add_test(tc, fail_s21_add_142);
  tcase_add_test(tc, fail_s21_add_143);
  tcase_add_test(tc, fail_s21_add_144);
  tcase_add_test(tc, fail_s21_add_145);
  tcase_add_test(tc, fail_s21_add_146);
  tcase_add_test(tc, fail_s21_add_147);
  tcase_add_test(tc, fail_s21_add_148);
  tcase_add_test(tc, fail_s21_add_149);
  tcase_add_test(tc, fail_s21_add_150);
  tcase_add_test(tc, fail_s21_add_151);
  tcase_add_test(tc, fail_s21_add_152);
  tcase_add_test(tc, fail_s21_add_153);
  tcase_add_test(tc, fail_s21_add_154);
  tcase_add_test(tc, fail_s21_add_155);
  tcase_add_test(tc, fail_s21_add_156);
  tcase_add_test(tc, fail_s21_add_157);
  tcase_add_test(tc, fail_s21_add_158);
  tcase_add_test(tc, fail_s21_add_159);
  tcase_add_test(tc, fail_s21_add_160);
  tcase_add_test(tc, fail_s21_add_161);
  tcase_add_test(tc, fail_s21_add_162);
  tcase_add_test(tc, fail_s21_add_163);
  tcase_add_test(tc, fail_s21_add_164);
  tcase_add_test(tc, fail_s21_add_165);
  tcase_add_test(tc, fail_s21_add_166);

  // srunner_run_all(sr, CK_ENV);
  // nf = srunner_ntests_failed(sr);
  // srunner_free(sr);

  return c;
}
