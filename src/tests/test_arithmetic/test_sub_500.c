#include "../test_suite.h"

START_TEST(s21_sub_0) {
  // 79,228,162,514,264,337,593,543,950,335
  s21_decimal dec_1 = {{0xffffffff, 0xffffffff, 0xffffffff, 0x0}};
  // 0.6
  s21_decimal dec_2 = {{6, 0x0, 0x0, 0x10000}};
  // 79,228,162,514,264,337,593,543,950,334
  s21_decimal dec_check = {{0xfffffffe, 0xffffffff, 0xffffffff, 0x0}};
  // print_decimal(dec_check);
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_1) {
  // -0.6
  s21_decimal dec_1 = {{0x6, 0x0, 0x0, 0x80010000}};
  // 1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x0}};
  // -1.6
  s21_decimal dec_check = {{0x10, 0x0, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_2) {
  // -46564458248570
  s21_decimal dec_1 = {{0xa1fe397a, 0x2a59, 0x0, 0x80000000}};
  // -355930646529042
  s21_decimal dec_2 = {{0x8fc04412, 0x143b7, 0x0, 0x80000000}};
  // 309366188280472
  s21_decimal dec_check = {{0xedc20a98, 0x1195d, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_3) {
  // -886.13920771
  s21_decimal dec_1 = {{0xa1cd2003, 0x14, 0x0, 0x80080000}};
  // 29983.298962
  s21_decimal dec_2 = {{0xfb24d592, 0x6, 0x0, 0x60000}};
  // -30869.43816971
  s21_decimal dec_check = {{0xbc308d0b, 0x2ce, 0x0, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_5) {
  // 3332166174063022154882609816
  s21_decimal dec_1 = {{0x8879f298, 0x4006079e, 0xac44da2, 0x0}};
  // 10738606759190699486
  s21_decimal dec_2 = {{0xb02b9dde, 0x950731f3, 0x0, 0x0}};
  // 3332166163324415395691910330
  s21_decimal dec_check = {{0xd84e54ba, 0xaafed5aa, 0xac44da1, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_6) {
  // 636
  s21_decimal dec_1 = {{0x27c, 0x0, 0x0, 0x0}};
  // 38
  s21_decimal dec_2 = {{0x26, 0x0, 0x0, 0x0}};
  // 598
  s21_decimal dec_check = {{0x256, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_7) {
  // -27368489922959.766
  s21_decimal dec_1 = {{0x1fe59996, 0x613b7f, 0x0, 0x80030000}};
  // 145669616703003811939817
  s21_decimal dec_2 = {{0xdb1485e9, 0xc407d8ac, 0x1ed8, 0x0}};
  // -145669616730372301862776.766
  s21_decimal dec_check = {{0xe810afbe, 0xbf079eb6, 0x787ebd, 0x80030000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_8) {
  // 689.1990599409408563206
  s21_decimal dec_1 = {{0xe94e5806, 0x9d9546d4, 0x175, 0x130000}};
  // 2476803198.2
  s21_decimal dec_2 = {{0xc44a2cee, 0x5, 0x0, 0x10000}};
  // -2476802509.0009400590591436794
  s21_decimal dec_check = {{0xe5a9a7fa, 0x89c667dd, 0x5007a152, 0x80130000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_9) {
  // 0.495
  s21_decimal dec_1 = {{0x1ef, 0x0, 0x0, 0x30000}};
  // 5578001947336388150236185
  s21_decimal dec_2 = {{0x74231419, 0x176aad85, 0x49d30, 0x0}};
  // -5578001947336388150236184.505
  s21_decimal dec_check = {{0xa9067fb9, 0x78b5d14d, 0x120603db, 0x80030000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_10) {
  // 0
  s21_decimal dec_1 = {{0x0, 0x0, 0x0, 0x0}};
  // -7141.45077340824186897
  s21_decimal dec_2 = {{0x81b0b011, 0xb6c0fc23, 0x26, 0x80110000}};
  // 7141.45077340824186897
  s21_decimal dec_check = {{0x81b0b011, 0xb6c0fc23, 0x26, 0x110000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_11) {
  // -749616714171995696104
  s21_decimal dec_1 = {{0x5d54abe8, 0xa3058de6, 0x28, 0x80000000}};
  // -2182076501553367814876358273
  s21_decimal dec_2 = {{0x780ae681, 0x2cf9cad7, 0x70cf8ac, 0x80000000}};
  // 2182075751936653642880662169
  s21_decimal dec_check = {{0x1ab63a99, 0x89f43cf1, 0x70cf883, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_12) {
  // 59370.810879721
  s21_decimal dec_1 = {{0x5817aee9, 0x35ff, 0x0, 0x90000}};
  // -648493921974
  s21_decimal dec_2 = {{0xfd3ff6b6, 0x96, 0x0, 0x80000000}};
  // 648493981344.810879721
  s21_decimal dec_check = {{0x2c3f4ae9, 0x27a9702a, 0x23, 0x90000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_13) {
  // -828442615
  s21_decimal dec_1 = {{0x316107f7, 0x0, 0x0, 0x80000000}};
  // -0.9371953447342
  s21_decimal dec_2 = {{0x13f4c1ae, 0x886, 0x0, 0x800d0000}};
  // -828442614.0628046552658
  s21_decimal dec_check = {{0x5f039e52, 0x19821221, 0x1c1, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_14) {
  // -613883545772276933925117
  s21_decimal dec_1 = {{0xf9f318fd, 0xb1964176, 0x81fe, 0x80000000}};
  // 534202116296518580747216
  s21_decimal dec_2 = {{0xbd46bbd0, 0x279dcf91, 0x711f, 0x0}};
  // -1148085662068795514672333
  s21_decimal dec_check = {{0xb739d4cd, 0xd9341108, 0xf31d, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_16) {
  // -681536137647
  s21_decimal dec_1 = {{0xaeb829af, 0x9e, 0x0, 0x80000000}};
  // 506780519878851374757
  s21_decimal dec_2 = {{0xa2b92ea5, 0x78fe15ca, 0x1b, 0x0}};
  // -506780520560387512404
  s21_decimal dec_check = {{0x51715854, 0x78fe1669, 0x1b, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_17) {
  // 70996233452898.810929248
  s21_decimal dec_1 = {{0xd2392060, 0xb6a9bb3e, 0xf08, 0x90000}};
  // -3949877818238010855.258
  s21_decimal dec_2 = {{0x7f930f5a, 0x1f90f456, 0xd6, 0x80030000}};
  // 3949948814471463754.068929248
  s21_decimal dec_check = {{0x87382ae0, 0x4af69760, 0xcc35232, 0x90000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_18) {
  // -7673039856.5270005830479983040
  s21_decimal dec_1 = {{0xd37f31c0, 0x1d914b1, 0xf7ede5e9, 0x80130000}};
  // -29776283
  s21_decimal dec_2 = {{0x1c6599b, 0x0, 0x0, 0x80000000}};
  // -7643263573.5270005830479983040
  s21_decimal dec_check = {{0xac0731c0, 0xa60dbb90, 0xf6f7982d, 0x80130000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_19) {
  // 28168174021087016500
  s21_decimal dec_1 = {{0xe2473634, 0x86e97507, 0x1, 0x0}};
  // 920698597407917.2162
  s21_decimal dec_2 = {{0x74fe2e42, 0x7fc5c8f6, 0x0, 0x40000}};
  // 28167253322489608582.7838
  s21_decimal dec_check = {{0x88b720fe, 0x7fa5bb00, 0x3ba5, 0x40000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_20) {
  // 3.312717
  s21_decimal dec_1 = {{0x328c4d, 0x0, 0x0, 0x60000}};
  // 15843.254195079405583
  s21_decimal dec_2 = {{0xcfece00f, 0xdbde8bbf, 0x0, 0xf0000}};
  // -15839.941478079405583
  s21_decimal dec_check = {{0xc7e61e0f, 0xdbd2c6d9, 0x0, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_21) {
  // -91068731077176837560
  s21_decimal dec_1 = {{0x70b3c5b8, 0xefd52069, 0x4, 0x80000000}};
  // -876
  s21_decimal dec_2 = {{0x36c, 0x0, 0x0, 0x80000000}};
  // -91068731077176836684
  s21_decimal dec_check = {{0x70b3c24c, 0xefd52069, 0x4, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_23) {
  // 17480818
  s21_decimal dec_1 = {{0x10abc72, 0x0, 0x0, 0x0}};
  // 85202393738391447062613107
  s21_decimal dec_2 = {{0xfb1e8c73, 0x504edef, 0x467a4f, 0x0}};
  // -85202393738391447045132289
  s21_decimal dec_check = {{0xfa13d001, 0x504edef, 0x467a4f, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_24) {
  // -845088845225830.85
  s21_decimal dec_1 = {{0xfa55442d, 0x12c3c61, 0x0, 0x80020000}};
  // 70661990135886971
  s21_decimal dec_2 = {{0xa52bf47b, 0xfb0ab4, 0x0, 0x0}};
  // -71507078981112801.85
  s21_decimal dec_check = {{0x7f80c439, 0x633c6af2, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_25) {
  // -48813028784
  s21_decimal dec_1 = {{0x5d7bb5b0, 0xb, 0x0, 0x80000000}};
  // -2896961438313
  s21_decimal dec_2 = {{0x805b8269, 0x2a2, 0x0, 0x80000000}};
  // 2848148409529
  s21_decimal dec_check = {{0x22dfccb9, 0x297, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_26) {
  // 446308446548851
  s21_decimal dec_1 = {{0x486ab373, 0x195ea, 0x0, 0x0}};
  // 4.877558390775059
  s21_decimal dec_2 = {{0xf40dd13, 0x11541d, 0x0, 0xf0000}};
  // 446308446548846.12244160922494
  s21_decimal dec_check = {{0xe024437e, 0xbc04c8b7, 0x9035c4f8, 0xe0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_27) {
  // 85.3183834200739
  s21_decimal dec_1 = {{0x575d9aa3, 0x307f7, 0x0, 0xd0000}};
  // -487052827661817551
  s21_decimal dec_2 = {{0x5ba1d6cf, 0x6c25bf7, 0x0, 0x80000000}};
  // 487052827661817636.31838342007
  s21_decimal dec_check = {{0x5f472b77, 0x54ac4069, 0x9d6010cd, 0xb0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_28) {
  // 52241602745906974488
  s21_decimal dec_1 = {{0xd6db4f18, 0xd4ff74e8, 0x2, 0x0}};
  // -0.811
  s21_decimal dec_2 = {{0x32b, 0x0, 0x0, 0x80030000}};
  // 52241602745906974488.811
  s21_decimal dec_check = {{0x48acf8eb, 0x5e0ad87, 0xb10, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_30) {
  // 668283.9773096
  s21_decimal dec_1 = {{0xf84a6fa8, 0x613, 0x0, 0x70000}};
  // 506245605113965828417.3549
  s21_decimal dec_2 = {{0xc7d688ed, 0x4add35d1, 0x43004, 0x40000}};
  // -506245605113965160133.3775904
  s21_decimal dec_check = {{0xa5bc6e20, 0x701a3560, 0x105b90c4, 0x80070000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_31) {
  // 830290058293
  s21_decimal dec_1 = {{0x5124dc35, 0xc1, 0x0, 0x0}};
  // 7436715.2
  s21_decimal dec_2 = {{0x46ec0b0, 0x0, 0x0, 0x10000}};
  // 830282621577.8
  s21_decimal dec_check = {{0x2701d962, 0x78d, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_32) {
  // -33982918696737878523.529204
  s21_decimal dec_1 = {{0xb24c47f4, 0xb6c37748, 0x1c1c29, 0x80060000}};
  // 1550.28
  s21_decimal dec_2 = {{0x25d94, 0x0, 0x0, 0x20000}};
  // -33982918696737880073.809204
  s21_decimal dec_check = {{0xeb3ad34, 0xb6c37749, 0x1c1c29, 0x80060000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_33) {
  // 911.3016075373
  s21_decimal dec_1 = {{0xca16046d, 0x849, 0x0, 0xa0000}};
  // -570694952095247586132
  s21_decimal dec_2 = {{0x59cd5354, 0xeffbc342, 0x1e, 0x80000000}};
  // 570694952095247587043.30160754
  s21_decimal dec_check = {{0x1168ba72, 0x70de4524, 0xb866c7ae, 0x80000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_34) {
  // -95240873526502
  s21_decimal dec_1 = {{0xfe6f44e6, 0x569e, 0x0, 0x80000000}};
  // -92694647205981.8673
  s21_decimal dec_2 = {{0xb8ed52b1, 0xcdd2ce7, 0x0, 0x80040000}};
  // -2546226320520.1327
  s21_decimal dec_check = {{0x218605af, 0x5a75cb, 0x0, 0x80040000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_35) {
  // 3723032753956
  s21_decimal dec_1 = {{0xd60b7724, 0x362, 0x0, 0x0}};
  // -6928371133.327438810
  s21_decimal dec_2 = {{0x720d73da, 0x602684d6, 0x0, 0x80090000}};
  // 3729961125089.327438810
  s21_decimal dec_check = {{0x75b7dbda, 0x339be916, 0xca, 0x90000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_36) {
  // 0.388090
  s21_decimal dec_1 = {{0x5ebfa, 0x0, 0x0, 0x60000}};
  // 57
  s21_decimal dec_2 = {{0x39, 0x0, 0x0, 0x0}};
  // -56.611910
  s21_decimal dec_check = {{0x35fd446, 0x0, 0x0, 0x80060000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_37) {
  // 520503.590461
  s21_decimal dec_1 = {{0x306e7e3d, 0x79, 0x0, 0x60000}};
  // -70150694974911829
  s21_decimal dec_2 = {{0x76b9f555, 0xf939af, 0x0, 0x80000000}};
  // 70150694975432332.590461
  s21_decimal dec_check = {{0x3026bd7d, 0xe0759dd8, 0xeda, 0x60000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_38) {
  // 657488106854220.94
  s21_decimal dec_1 = {{0xe94f1a0e, 0xe99631, 0x0, 0x20000}};
  // -9.586022276036
  s21_decimal dec_2 = {{0xeb73dbc4, 0x8b7, 0x0, 0x800c0000}};
  // 657488106854230.526022276036
  s21_decimal dec_check = {{0x154253c4, 0xb115ab91, 0x21fdc85, 0xc0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_39) {
  // -3.1
  s21_decimal dec_1 = {{0x1f, 0x0, 0x0, 0x80010000}};
  // 270023820082881317824.28569
  s21_decimal dec_2 = {{0x8e364799, 0xfd10ab2, 0x1655fa, 0x50000}};
  // -270023820082881317827.38569
  s21_decimal dec_check = {{0x8e3b0289, 0xfd10ab2, 0x1655fa, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_40) {
  // -972842.59569404030
  s21_decimal dec_1 = {{0xc5df087e, 0x1599f84, 0x0, 0x800b0000}};
  // 61304356334526
  s21_decimal dec_2 = {{0x8861ebbe, 0x37c1, 0x0, 0x0}};
  // -61304357307368.59569404030
  s21_decimal dec_check = {{0x9d17387e, 0x963d989f, 0x5122b, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_41) {
  // -778306211326
  s21_decimal dec_1 = {{0x36aa4dfe, 0xb5, 0x0, 0x80000000}};
  // -0.8033638
  s21_decimal dec_2 = {{0x7a9566, 0x0, 0x0, 0x80070000}};
  // -778306211325.1966362
  s21_decimal dec_check = {{0x6d2f3d9a, 0x6c02fdc1, 0x0, 0x80070000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_42) {
  // -9976743683271.4192
  s21_decimal dec_1 = {{0x8890add0, 0x16271f4, 0x0, 0x80040000}};
  // -72401
  s21_decimal dec_2 = {{0x11ad1, 0x0, 0x0, 0x80000000}};
  // -9976743610870.4192
  s21_decimal dec_check = {{0x5d6929c0, 0x16271f4, 0x0, 0x80040000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_43) {
  // 53544635943
  s21_decimal dec_1 = {{0x77824e27, 0xc, 0x0, 0x0}};
  // 634774
  s21_decimal dec_2 = {{0x9af96, 0x0, 0x0, 0x0}};
  // 53544001169
  s21_decimal dec_check = {{0x77789e91, 0xc, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_44) {
  // -561
  s21_decimal dec_1 = {{0x231, 0x0, 0x0, 0x80000000}};
  // 93111431696411924
  s21_decimal dec_2 = {{0x92caed14, 0x14acc5a, 0x0, 0x0}};
  // -93111431696412485
  s21_decimal dec_check = {{0x92caef45, 0x14acc5a, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_45) {
  // -1263059673132157964.62057512
  s21_decimal dec_1 = {{0x43857828, 0x353bca6c, 0x687a54, 0x80080000}};
  // 0.7
  s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x10000}};
  // -1263059673132157965.32057512
  s21_decimal dec_check = {{0x47b195a8, 0x353bca6c, 0x687a54, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_46) {
  // 3671928.048173
  s21_decimal dec_1 = {{0xeff78a2d, 0x356, 0x0, 0x60000}};
  // -17514891532187317111260219147
  s21_decimal dec_2 = {{0xf1b4870b, 0x8094f219, 0x3897fa8c, 0x80000000}};
  // 17514891532187317111263891075
  s21_decimal dec_check = {{0xf1ec8e83, 0x8094f219, 0x3897fa8c, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_47) {
  // -60750002066743199.1544411762
  s21_decimal dec_1 = {{0xd30c7672, 0x1c10c5cc, 0x1f68322, 0x800a0000}};
  // -18.01272696
  s21_decimal dec_2 = {{0x6b5d3d78, 0x0, 0x0, 0x80080000}};
  // -60750002066743181.1417142162
  s21_decimal dec_check = {{0xe2a07392, 0x1c10c5a2, 0x1f68322, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_48) {
  // 8
  s21_decimal dec_1 = {{0x8, 0x0, 0x0, 0x0}};
  // 7442427224992912
  s21_decimal dec_2 = {{0x1f032c90, 0x1a70d9, 0x0, 0x0}};
  // -7442427224992904
  s21_decimal dec_check = {{0x1f032c88, 0x1a70d9, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_49) {
  // -8272954730103751875.58
  s21_decimal dec_1 = {{0xf02cdc66, 0xd907f180, 0x2c, 0x80020000}};
  // 99375410804634.3091
  s21_decimal dec_2 = {{0x9c2ffbb3, 0xdca8618, 0x0, 0x40000}};
  // -8273054105514556509.8891
  s21_decimal dec_check = {{0x6db6138b, 0xd4e4dc76, 0x1184, 0x80040000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_50) {
  // 906783242694
  s21_decimal dec_1 = {{0x207e39c6, 0xd3, 0x0, 0x0}};
  // 94227.4494
  s21_decimal dec_2 = {{0x3829f7be, 0x0, 0x0, 0x40000}};
  // 906783148466.5506
  s21_decimal dec_check = {{0xa86cea2, 0x203725, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_51) {
  // -25814685466337992
  s21_decimal dec_1 = {{0xd535a2c8, 0x5bb651, 0x0, 0x80000000}};
  // -14058838112179462807313
  s21_decimal dec_2 = {{0x4c371f11, 0x2192781c, 0x2fa, 0x80000000}};
  // 14058812297493996469321
  s21_decimal dec_check = {{0x77017c49, 0x2136c1ca, 0x2fa, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_52) {
  // -660436875
  s21_decimal dec_1 = {{0x275d778b, 0x0, 0x0, 0x80000000}};
  // 100.58983128
  s21_decimal dec_2 = {{0x578fe6d8, 0x2, 0x0, 0x80000}};
  // -660436975.58983128
  s21_decimal dec_check = {{0x9ca811d8, 0xeaa264, 0x0, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_53) {
  // -47426406108571
  s21_decimal dec_1 = {{0x5216cd9b, 0x2b22, 0x0, 0x80000000}};
  // -4318702974806120
  s21_decimal dec_2 = {{0x64b42868, 0xf57d6, 0x0, 0x80000000}};
  // 4271276568697549
  s21_decimal dec_check = {{0x129d5acd, 0xf2cb4, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_55) {
  // 4893716005832763789778919434
  s21_decimal dec_1 = {{0x5908a00a, 0x40a7030c, 0xfcffcac, 0x0}};
  // 82068312084.8349312221
  s21_decimal dec_2 = {{0xfcd634dd, 0x7d44263e, 0x2c, 0xa0000}};
  // 4893716005832763707710607349.2
  s21_decimal dec_check = {{0x65cf9f94, 0x86861dbc, 0x9e1fdeba, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_56) {
  // 3759
  s21_decimal dec_1 = {{0xeaf, 0x0, 0x0, 0x0}};
  // 305673868681119055972
  s21_decimal dec_2 = {{0x3180c064, 0x9213bc09, 0x10, 0x0}};
  // -305673868681119052213
  s21_decimal dec_check = {{0x3180b1b5, 0x9213bc09, 0x10, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_57) {
  // 64346486772925.106
  s21_decimal dec_1 = {{0xeea502b2, 0xe49ac9, 0x0, 0x30000}};
  // -99927051970309349
  s21_decimal dec_2 = {{0xd4246ce5, 0x163031f, 0x0, 0x80000000}};
  // 99991398457082274.106
  s21_decimal dec_check = {{0x9cee613a, 0x6ba8cf1e, 0x5, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_58) {
  // 56047829892.5957589
  s21_decimal dec_1 = {{0x17cc01d5, 0x7c7380b, 0x0, 0x70000}};
  // 18572833467831.90010460107
  s21_decimal dec_2 = {{0x48d277cb, 0x882f8667, 0x1894b, 0xb0000}};
  // -18516785637939.30434570107
  s21_decimal dec_check = {{0xb7cae77b, 0xb2325515, 0x1881b, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_59) {
  // -290.91095246753147180925423916
  s21_decimal dec_1 = {{0xe11d912c, 0x535c23cd, 0x5dff9709, 0x801a0000}};
  // -200550291944.16020
  s21_decimal dec_2 = {{0x5b17df94, 0x473ff1, 0x0, 0x80050000}};
  // 200550291653.24924753246852819
  s21_decimal dec_check = {{0x429696d3, 0x83e8da5c, 0x40cd219d, 0x110000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_60) {
  // -6936794.453790314026559004014
  s21_decimal dec_1 = {{0x4642dd6e, 0xd8204c49, 0x1669fb5c, 0x80150000}};
  // 1437
  s21_decimal dec_2 = {{0x59d, 0x0, 0x0, 0x0}};
  // -6938231.453790314026559004014
  s21_decimal dec_check = {{0xee62dd6e, 0xc534bbfb, 0x166b2ba8, 0x80150000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_61) {
  // 19704.161413
  s21_decimal dec_1 = {{0x9675a485, 0x4, 0x0, 0x60000}};
  // 4387897387728219363662042
  s21_decimal dec_2 = {{0x75d4d8da, 0x64de8e16, 0x3a12c, 0x0}};
  // -4387897387728219363642337.8386
  s21_decimal dec_check = {{0xbe9825d2, 0x358e4d5a, 0x8dc7d624, 0x80040000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_62) {
  // -632.976456746008
  s21_decimal dec_1 = {{0x50db0418, 0x23fb0, 0x0, 0x800c0000}};
  // 1869928.3493881812953
  s21_decimal dec_2 = {{0xbf2697d9, 0x3813343, 0x1, 0xd0000}};
  // -1870561.3258449273033
  s21_decimal dec_check = {{0xe7b4c0c9, 0x397b026, 0x1, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_63) {
  // 694.94353676777
  s21_decimal dec_1 = {{0x6a43c9e9, 0x3f34, 0x0, 0xb0000}};
  // -37249117521483389682105
  s21_decimal dec_2 = {{0x9c4f41b9, 0x47595781, 0x7e3, 0x80000000}};
  // 37249117521483389682799.943537
  s21_decimal dec_check = {{0x86051f71, 0xff7d7358, 0x785bbf72, 0x60000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_64) {
  // 77286.11540
  s21_decimal dec_1 = {{0xcca940d4, 0x1, 0x0, 0x50000}};
  // 708160473763120705134686
  s21_decimal dec_2 = {{0xa64f605e, 0x74c9ec90, 0x95f5, 0x0}};
  // -708160473763120705057399.88460
  s21_decimal dec_check = {{0x11c22dec, 0x9c9837c3, 0xe4d1a954, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_65) {
  // -85300.2050330141086581867
  s21_decimal dec_1 = {{0x3ede046b, 0x557440b5, 0xb4a1, 0x80130000}};
  // -38010969
  s21_decimal dec_2 = {{0x2440059, 0x0, 0x0, 0x80000000}};
  // 37925668.7949669858913418133
  s21_decimal dec_check = {{0xb2c9fb95, 0x400f5d7e, 0x139b6ba, 0x130000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_66) {
  // 763355
  s21_decimal dec_1 = {{0xba5db, 0x0, 0x0, 0x0}};
  // -1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x80000000}};
  // 763356
  s21_decimal dec_check = {{0xba5dc, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_67) {
  // 9280.68654884
  s21_decimal dec_1 = {{0x1533d724, 0xd8, 0x0, 0x80000}};
  // 656773961193
  s21_decimal dec_2 = {{0xeac755e9, 0x98, 0x0, 0x0}};
  // -656773951912.31345116
  s21_decimal dec_check = {{0xe24af1dc, 0x8f74faf3, 0x3, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_68) {
  // -491
  s21_decimal dec_1 = {{0x1eb, 0x0, 0x0, 0x80000000}};
  // 2408965768.6073427
  s21_decimal dec_2 = {{0x8123a053, 0x55956a, 0x0, 0x70000}};
  // -2408966259.6073427
  s21_decimal dec_check = {{0xa5cc47d3, 0x55956b, 0x0, 0x80070000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_69) {
  // 84428027672
  s21_decimal dec_1 = {{0xa84d7718, 0x13, 0x0, 0x0}};
  // 973165386915
  s21_decimal dec_2 = {{0x952d5ca3, 0xe2, 0x0, 0x0}};
  // -888737359243
  s21_decimal dec_check = {{0xecdfe58b, 0xce, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_70) {
  // 6996.01590275536
  s21_decimal dec_1 = {{0xb045cdd0, 0x27c48, 0x0, 0xb0000}};
  // -265318018927.4763067438
  s21_decimal dec_2 = {{0x89ea802e, 0xd4458cfe, 0x8f, 0x800a0000}};
  // 265318025923.49220949916
  s21_decimal dec_check = {{0x136ecf9c, 0x4ab9fe3a, 0x59e, 0xb0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_71) {
  // -0.9006154820795148
  s21_decimal dec_1 = {{0xd2e2bb0c, 0x1fff0c, 0x0, 0x80100000}};
  // 7
  s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x0}};
  // -7.9006154820795148
  s21_decimal dec_check = {{0xe129bb0c, 0x118afad, 0x0, 0x80100000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_72) {
  // -5585818543243372
  s21_decimal dec_1 = {{0xba0cc06c, 0x13d845, 0x0, 0x80000000}};
  // 0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
  // -5585818543243372
  s21_decimal dec_check = {{0xba0cc06c, 0x13d845, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_73) {
  // -8.5
  s21_decimal dec_1 = {{0x55, 0x0, 0x0, 0x80010000}};
  // 279264774.0
  s21_decimal dec_2 = {{0xa6746c3c, 0x0, 0x0, 0x10000}};
  // -279264782.5
  s21_decimal dec_check = {{0xa6746c91, 0x0, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_74) {
  // 5996754891633631176.2
  s21_decimal dec_1 = {{0x89163dd2, 0x40378804, 0x3, 0x10000}};
  // -97482999684699603
  s21_decimal dec_2 = {{0x8fd895d3, 0x15a5445, 0x0, 0x80000000}};
  // 6094237891318330779.2
  s21_decimal dec_check = {{0x278c1810, 0x4dbed2bc, 0x3, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_75) {
  // -525824
  s21_decimal dec_1 = {{0x80600, 0x0, 0x0, 0x80000000}};
  // 109
  s21_decimal dec_2 = {{0x6d, 0x0, 0x0, 0x0}};
  // -525933
  s21_decimal dec_check = {{0x8066d, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_76) {
  // -85405145434687161765.635381814
  s21_decimal dec_1 = {{0xcd155a36, 0x161f3bc9, 0x13f57b03, 0x80090000}};
  // 41250
  s21_decimal dec_2 = {{0xa122, 0x0, 0x0, 0x0}};
  // -85405145434687203015.635381814
  s21_decimal dec_check = {{0x10ae2e36, 0x161f614e, 0x13f57b03, 0x80090000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_77) {
  // -5181312427
  s21_decimal dec_1 = {{0x34d48dab, 0x1, 0x0, 0x80000000}};
  // -7633242589.539324348
  s21_decimal dec_2 = {{0x49dfd1bc, 0x69eeb9b1, 0x0, 0x80090000}};
  // 2451930162.539324348
  s21_decimal dec_check = {{0xf038e3bc, 0x2207017d, 0x0, 0x90000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_78) {
  // 0
  s21_decimal dec_1 = {{0x0, 0x0, 0x0, 0x0}};
  // 2208760.462482343277281231
  s21_decimal dec_2 = {{0xbecebfcf, 0x25044136, 0x1d3b9, 0x120000}};
  // -2208760.462482343277281231
  s21_decimal dec_check = {{0xbecebfcf, 0x25044136, 0x1d3b9, 0x80120000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_79) {
  // 249802067741111703995468
  s21_decimal dec_1 = {{0x94b6844c, 0xcc170e76, 0x34e5, 0x0}};
  // -89647772707326435029064329
  s21_decimal dec_2 = {{0x8d169a89, 0x7f13511c, 0x4a27a7, 0x80000000}};
  // 89897574775067546733059797
  s21_decimal dec_check = {{0x21cd1ed5, 0x4b2a5f93, 0x4a5c8d, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_80) {
  // -5285540057100034624402711295
  s21_decimal dec_1 = {{0xa08762ff, 0xa2234614, 0x111418a4, 0x80000000}};
  // -97.6629954
  s21_decimal dec_2 = {{0x3a3630c2, 0x0, 0x0, 0x80070000}};
  // -5285540057100034624402711197.3
  s21_decimal dec_check = {{0x4549da25, 0x5560bcce, 0xaac8f66e, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_81) {
  // 68512866
  s21_decimal dec_1 = {{0x4156c62, 0x0, 0x0, 0x0}};
  // -773045541257076552019.172
  s21_decimal dec_2 = {{0x29c0ace4, 0xe1fcc27f, 0xa3b2, 0x80030000}};
  // 773045541257145064885.172
  s21_decimal dec_check = {{0x1d700bb4, 0xe1fcc28f, 0xa3b2, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_82) {
  // -881593360000241929328445
  s21_decimal dec_1 = {{0xee84973d, 0x45953669, 0xbaaf, 0x80000000}};
  // 97870043382962567
  s21_decimal dec_2 = {{0x31fe5987, 0x15bb449, 0x0, 0x0}};
  // -881593457870285312291012
  s21_decimal dec_check = {{0x2082f0c4, 0x46f0eab3, 0xbaaf, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_83) {
  // -0.198304688303
  s21_decimal dec_1 = {{0x2be168af, 0x2e, 0x0, 0x800c0000}};
  // -70
  s21_decimal dec_2 = {{0x46, 0x0, 0x0, 0x80000000}};
  // 69.801695311697
  s21_decimal dec_check = {{0xf940f751, 0x3f7b, 0x0, 0xc0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_84) {
  // 883754468262.15960
  s21_decimal dec_1 = {{0x2af16a18, 0x139f900, 0x0, 0x50000}};
  // 23846
  s21_decimal dec_2 = {{0x5d26, 0x0, 0x0, 0x0}};
  // 883754444416.15960
  s21_decimal dec_check = {{0x9ccf4e58, 0x139f8ff, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_85) {
  // 46070761394609.08
  s21_decimal dec_1 = {{0x80bee92c, 0x105e1c, 0x0, 0x20000}};
  // -524925113815884507459523408
  s21_decimal dec_2 = {{0xdc229350, 0x70879a4a, 0x1b23537, 0x80000000}};
  // 524925113815930578220918017.08
  s21_decimal dec_check = {{0x7e40746c, 0xf508a35a, 0xa99cc9a7, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_86) {
  // 472934800
  s21_decimal dec_1 = {{0x1c306990, 0x0, 0x0, 0x0}};
  // 19650542843.4042247840
  s21_decimal dec_2 = {{0xc7085aa0, 0xa70f8607, 0xa, 0xa0000}};
  // -19177608043.4042247840
  s21_decimal dec_check = {{0xdfd41aa0, 0x656d8114, 0xa, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_87) {
  // -43
  s21_decimal dec_1 = {{0x2b, 0x0, 0x0, 0x80000000}};
  // -742680393032699049
  s21_decimal dec_2 = {{0xf05c8ca9, 0xa4e87e1, 0x0, 0x80000000}};
  // 742680393032699006
  s21_decimal dec_check = {{0xf05c8c7e, 0xa4e87e1, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_88) {
  // -343505609534241747308
  s21_decimal dec_1 = {{0x9283b16c, 0x9f1913e6, 0x12, 0x80000000}};
  // -2
  s21_decimal dec_2 = {{0x2, 0x0, 0x0, 0x80000000}};
  // -343505609534241747306
  s21_decimal dec_check = {{0x9283b16a, 0x9f1913e6, 0x12, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_89) {
  // -427535731786.5159019738975500
  s21_decimal dec_1 = {{0xbcb84d0c, 0x9beb5f28, 0xdd07e20, 0x80100000}};
  // 1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x0}};
  // -427535731787.5159019738975500
  s21_decimal dec_check = {{0x2c794d0c, 0x9c0ee61b, 0xdd07e20, 0x80100000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_91) {
  // 153
  s21_decimal dec_1 = {{0x99, 0x0, 0x0, 0x0}};
  // 950831342258
  s21_decimal dec_2 = {{0x61f6e2b2, 0xdd, 0x0, 0x0}};
  // -950831342105
  s21_decimal dec_check = {{0x61f6e219, 0xdd, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_92) {
  // 91842.43442759
  s21_decimal dec_1 = {{0x5f916447, 0x85a, 0x0, 0x80000}};
  // -37327673132015233764946.1
  s21_decimal dec_2 = {{0xa01b8f35, 0x5f4556cb, 0x4f0b, 0x80010000}};
  // 37327673132015233856788.534428
  s21_decimal dec_check = {{0x6fa0949c, 0x2d907543, 0x789cba3f, 0x60000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_93) {
  // 156139253610370093629
  s21_decimal dec_1 = {{0xbcbcd23d, 0x76de0fe5, 0x8, 0x0}};
  // -2520089.966
  s21_decimal dec_2 = {{0x9635856e, 0x0, 0x0, 0x80030000}};
  // 156139253610372613718.966
  s21_decimal dec_check = {{0xd7cac3b6, 0x536e1969, 0x2110, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_94) {
  // -433604295360329472682762
  s21_decimal dec_1 = {{0x1b862b0a, 0xbc675034, 0x5bd1, 0x80000000}};
  // 9.9702109053274
  s21_decimal dec_2 = {{0xb4cb215a, 0x5aad, 0x0, 0xd0000}};
  // -433604295360329472682771.97021
  s21_decimal dec_check = {{0x997b58dd, 0x24c1827f, 0x8c1ae81b, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_95) {
  // -3341115535247437915.951
  s21_decimal dec_1 = {{0x9aa6e72f, 0x1f4add51, 0xb5, 0x80030000}};
  // -7405
  s21_decimal dec_2 = {{0x1ced, 0x0, 0x0, 0x80000000}};
  // -3341115535247430510.951
  s21_decimal dec_check = {{0x9a35e967, 0x1f4add51, 0xb5, 0x80030000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_96) {
  // -45549942830375858412.9422687
  s21_decimal dec_1 = {{0x9c92855f, 0x7c949238, 0x178c7c1, 0x80070000}};
  // 84715475718.4824101
  s21_decimal dec_2 = {{0x63c8a325, 0xbc1b2c3, 0x0, 0x70000}};
  // -45549942915091334131.4246788
  s21_decimal dec_check = {{0x5b2884, 0x885644fc, 0x178c7c1, 0x80070000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_97) {
  // -77822779688770763808
  s21_decimal dec_1 = {{0xdeaa7c20, 0x38020dcd, 0x4, 0x80000000}};
  // -63.97
  s21_decimal dec_2 = {{0x18fd, 0x0, 0x0, 0x80020000}};
  // -77822779688770763744.03
  s21_decimal dec_check = {{0xfa986383, 0xe0cd646a, 0x1a5, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_98) {
  // -357466.2
  s21_decimal dec_1 = {{0x368b86, 0x0, 0x0, 0x80010000}};
  // -375581289825.25
  s21_decimal dec_2 = {{0xaeefb9fd, 0x2228, 0x0, 0x80020000}};
  // 375580932359.05
  s21_decimal dec_check = {{0xacce46c1, 0x2228, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_99) {
  // -51
  s21_decimal dec_1 = {{0x33, 0x0, 0x0, 0x80000000}};
  // -2.59103356897312545156
  s21_decimal dec_2 = {{0x47929984, 0xbc80a4f, 0xe, 0x80140000}};
  // -48.40896643102687454844
  s21_decimal dec_check = {{0x749d667c, 0x6cefb8bb, 0x106, 0x80140000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_100) {
  // -817765.042532257577574265
  s21_decimal dec_1 = {{0x9adc1f79, 0x21bca633, 0xad2b, 0x80120000}};
  // 4308.612
  s21_decimal dec_2 = {{0x41be84, 0x0, 0x0, 0x30000}};
  // -822073.654532257577574265
  s21_decimal dec_check = {{0x64361f79, 0xb3bd7032, 0xae14, 0x80120000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_101) {
  // 751.46811966674874
  s21_decimal dec_1 = {{0x9946d7ba, 0x10af9a0, 0x0, 0xe0000}};
  // -6.291088000
  s21_decimal dec_2 = {{0x76fa6280, 0x1, 0x0, 0x80090000}};
  // 757.75920766674874
  s21_decimal dec_check = {{0x67d367ba, 0x10d35cc, 0x0, 0xe0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_102) {
  // -875.720313
  s21_decimal dec_1 = {{0x34326e79, 0x0, 0x0, 0x80060000}};
  // 5228
  s21_decimal dec_2 = {{0x146c, 0x0, 0x0, 0x0}};
  // -6103.720313
  s21_decimal dec_check = {{0x6bcf6179, 0x1, 0x0, 0x80060000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_103) {
  // 3997181
  s21_decimal dec_1 = {{0x3cfdfd, 0x0, 0x0, 0x0}};
  // 27482436242
  s21_decimal dec_2 = {{0x6614b292, 0x6, 0x0, 0x0}};
  // -27478439061
  s21_decimal dec_check = {{0x65d7b495, 0x6, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_104) {
  // 39944989389427051271763695
  s21_decimal dec_1 = {{0x234f36ef, 0x36bb5bbd, 0x210aae, 0x0}};
  // -8217791224267008075507110
  s21_decimal dec_2 = {{0xcaca25a6, 0x5adbfae8, 0x6cc2f, 0x80000000}};
  // 48162780613694059347270805
  s21_decimal dec_check = {{0xee195c95, 0x919756a5, 0x27d6dd, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_105) {
  // 897
  s21_decimal dec_1 = {{0x381, 0x0, 0x0, 0x0}};
  // 4934546035190
  s21_decimal dec_2 = {{0xe9dd11f6, 0x47c, 0x0, 0x0}};
  // -4934546034293
  s21_decimal dec_check = {{0xe9dd0e75, 0x47c, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_106) {
  // -784419670889182845959894
  s21_decimal dec_1 = {{0x5db7ed6, 0x79beb02d, 0xa61b, 0x80000000}};
  // 33536252826666.63740503411772
  s21_decimal dec_2 = {{0x6f1ecc3c, 0xdbc50d80, 0xad60dc6, 0xe0000}};
  // -784419670922719098786560.63741
  s21_decimal dec_check = {{0x2f86d8fd, 0xc61d2b7d, 0xfd75aca4, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_107) {
  // 4924
  s21_decimal dec_1 = {{0x133c, 0x0, 0x0, 0x0}};
  // 769914597420350187001941
  s21_decimal dec_2 = {{0xc245855, 0x2769c372, 0xa309, 0x0}};
  // -769914597420350186997017
  s21_decimal dec_check = {{0xc244519, 0x2769c372, 0xa309, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_108) {
  // 369.084550914309243
  s21_decimal dec_1 = {{0x8d54fc7b, 0x51f4071, 0x0, 0xf0000}};
  // 346032612.301803264646618
  s21_decimal dec_2 = {{0xc7ab9dda, 0x772b0922, 0x4946, 0xf0000}};
  // -346032243.217252350337375
  s21_decimal dec_check = {{0x3a56a15f, 0x720bc8b1, 0x4946, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_109) {
  // 679724
  s21_decimal dec_1 = {{0xa5f2c, 0x0, 0x0, 0x0}};
  // -761594
  s21_decimal dec_2 = {{0xb9efa, 0x0, 0x0, 0x80000000}};
  // 1441318
  s21_decimal dec_check = {{0x15fe26, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_110) {
  // 3.75323240
  s21_decimal dec_1 = {{0x165efa68, 0x0, 0x0, 0x80000}};
  // 21974057884108.45
  s21_decimal dec_2 = {{0x677213dd, 0x7ce87, 0x0, 0x20000}};
  // -21974057884104.69676760
  s21_decimal dec_check = {{0x5937f6d8, 0x1f219a34, 0x77, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_111) {
  // 4100468124560244211
  s21_decimal dec_1 = {{0xb939bdf3, 0x38e7ca08, 0x0, 0x0}};
  // -8974
  s21_decimal dec_2 = {{0x230e, 0x0, 0x0, 0x80000000}};
  // 4100468124560253185
  s21_decimal dec_check = {{0xb939e101, 0x38e7ca08, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_113) {
  // 7551813549403704
  s21_decimal dec_1 = {{0x9c05ae38, 0x1ad455, 0x0, 0x0}};
  // 0.83472241
  s21_decimal dec_2 = {{0x4f9af71, 0x0, 0x0, 0x80000}};
  // 7551813549403703.16527759
  s21_decimal dec_check = {{0xccbd888f, 0x7699abf7, 0x9fea, 0x80000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_114) {
  // -35394125447417905
  s21_decimal dec_1 = {{0x26dd031, 0x7dbec5, 0x0, 0x80000000}};
  // 56165699321.338
  s21_decimal dec_2 = {{0x188e7dfa, 0x3315, 0x0, 0x30000}};
  // -35394181613117226.338
  s21_decimal dec_check = {{0x9583bd62, 0xeb3164a6, 0x1, 0x80030000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_115) {
  // 47444353908896526435801812155
  s21_decimal dec_1 = {{0x9f06ccbb, 0x284b46a, 0x994d0cbb, 0x0}};
  // -62739433.99978768279
  s21_decimal dec_2 = {{0x10a41797, 0x57118648, 0x0, 0x800b0000}};
  // 47444353908896526435864551589
  s21_decimal dec_check = {{0xa2c420a5, 0x284b46a, 0x994d0cbb, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_116) {
  // 0.0122
  s21_decimal dec_1 = {{0x7a, 0x0, 0x0, 0x40000}};
  // 76583712878
  s21_decimal dec_2 = {{0xd4beb86e, 0x11, 0x0, 0x0}};
  // -76583712877.9878
  s21_decimal dec_check = {{0x5a044866, 0x2b886, 0x0, 0x80040000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_117) {
  // -25395061080162.119462050343
  s21_decimal dec_1 = {{0xfbae5a27, 0x5097757, 0x15019d, 0x800c0000}};
  // -0.9
  s21_decimal dec_2 = {{0x9, 0x0, 0x0, 0x80010000}};
  // -25395061080161.219462050343
  s21_decimal dec_check = {{0x6f803227, 0x5097686, 0x15019d, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_118) {
  // -129309.53474956
  s21_decimal dec_1 = {{0xb8e3738c, 0xbc2, 0x0, 0x80080000}};
  // -22081.06303633727061
  s21_decimal dec_2 = {{0xee639e55, 0x1ea4c4fb, 0x0, 0x800e0000}};
  // -107228.47171322272939
  s21_decimal dec_check = {{0xb3775cab, 0x94cf34b0, 0x0, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_119) {
  // 8069007661765053555438028
  s21_decimal dec_1 = {{0xfacc71cc, 0xc8264c7a, 0x6acad, 0x0}};
  // -5333372.5
  s21_decimal dec_2 = {{0x32dcedd, 0x0, 0x0, 0x80010000}};
  // 8069007661765053560771400.5
  s21_decimal dec_check = {{0xcf2a40d5, 0xd17efccd, 0x42bec9, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_120) {
  // 288.467
  s21_decimal dec_1 = {{0x466d3, 0x0, 0x0, 0x30000}};
  // 0.13081852188045077
  s21_decimal dec_2 = {{0x10ac2f15, 0x2e79e0, 0x0, 0x110000}};
  // 288.33618147811954923
  s21_decimal dec_check = {{0x399690eb, 0x902596f0, 0x1, 0x110000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_121) {
  // -8.0989
  s21_decimal dec_1 = {{0x13c5d, 0x0, 0x0, 0x80040000}};
  // 537295472845108874
  s21_decimal dec_2 = {{0xc65bb68a, 0x774db62, 0x0, 0x0}};
  // -537295472845108882.0989
  s21_decimal dec_check = {{0x5e8baafd, 0x44b9c264, 0x123, 0x80040000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_122) {
  // -777101289186549.98487369
  s21_decimal dec_1 = {{0xa1932149, 0xacadfd9b, 0x1074, 0x80080000}};
  // -344300026605996064081.2692247
  s21_decimal dec_2 = {{0xd90d3317, 0x6aa0fc7a, 0xb1ffbaa, 0x80070000}};
  // 344299249504706877531.28435101
  s21_decimal dec_check = {{0xd8f0dd9d, 0x7d9bdf30, 0x6f3fc433, 0x80000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_123) {
  // 79228162514264337592357992400
  s21_decimal dec_1 = {{0xb94fb7d0, 0xffffffff, 0xffffffff, 0x0}};
  // 0.75572
  s21_decimal dec_2 = {{0x12734, 0x0, 0x0, 0x50000}};
  // 79228162514264337592357992399
  s21_decimal dec_check = {{0xb94fb7cf, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_124) {
  // 139.674840308723257
  s21_decimal dec_1 = {{0xf8a92e39, 0x1f03986, 0x0, 0xf0000}};
  // -3
  s21_decimal dec_2 = {{0x3, 0x0, 0x0, 0x80000000}};
  // 142.674840308723257
  s21_decimal dec_check = {{0xe6fcae39, 0x1fae202, 0x0, 0xf0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_125) {
  // -299097
  s21_decimal dec_1 = {{0x49059, 0x0, 0x0, 0x80000000}};
  // 690521867733256344255752325
  s21_decimal dec_2 = {{0x85f66885, 0x750ecf60, 0x23b2fb1, 0x0}};
  // -690521867733256344256051422
  s21_decimal dec_check = {{0x85faf8de, 0x750ecf60, 0x23b2fb1, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_126) {
  // 27812468799569.5
  s21_decimal dec_1 = {{0xf33b332f, 0xfcf3, 0x0, 0x10000}};
  // 6610
  s21_decimal dec_2 = {{0x19d2, 0x0, 0x0, 0x0}};
  // 27812468792959.5
  s21_decimal dec_check = {{0xf33a30fb, 0xfcf3, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_127) {
  // -9760073437148
  s21_decimal dec_1 = {{0x71b5cfdc, 0x8e0, 0x0, 0x80000000}};
  // -531248
  s21_decimal dec_2 = {{0x81b30, 0x0, 0x0, 0x80000000}};
  // -9760072905900
  s21_decimal dec_check = {{0x71adb4ac, 0x8e0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_128) {
  // 1688.96355
  s21_decimal dec_1 = {{0xa112763, 0x0, 0x0, 0x50000}};
  // 6333
  s21_decimal dec_2 = {{0x18bd, 0x0, 0x0, 0x0}};
  // -4644.03645
  s21_decimal dec_check = {{0x1bae3cbd, 0x0, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_129) {
  // 94617
  s21_decimal dec_1 = {{0x17199, 0x0, 0x0, 0x0}};
  // 69832004.303212263056505350598
  s21_decimal dec_2 = {{0x73cca9c6, 0xba5da690, 0xe1a3ae1a, 0x150000}};
  // -69737387.303212263056505350598
  s21_decimal dec_check = {{0xc62ca9c6, 0xe15a9569, 0xe1556a2c, 0x80150000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_130) {
  // -19949932959961249108193489841
  s21_decimal dec_1 = {{0x2da4b3b1, 0xce774bc2, 0x407632a0, 0x80000000}};
  // -821
  s21_decimal dec_2 = {{0x335, 0x0, 0x0, 0x80000000}};
  // -19949932959961249108193489020
  s21_decimal dec_check = {{0x2da4b07c, 0xce774bc2, 0x407632a0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_131) {
  // 1556887
  s21_decimal dec_1 = {{0x17c197, 0x0, 0x0, 0x0}};
  // -23245018337292863178874814405
  s21_decimal dec_2 = {{0x5f83ffc5, 0x9b4d4cf, 0x4b1bd419, 0x80000000}};
  // 23245018337292863178876371292
  s21_decimal dec_check = {{0x5f9bc15c, 0x9b4d4cf, 0x4b1bd419, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_132) {
  // 190381633494598168
  s21_decimal dec_1 = {{0x44344218, 0x2a45f16, 0x0, 0x0}};
  // 49712366252665.7850516093
  s21_decimal dec_2 = {{0xd114227d, 0x20b3e9f2, 0x6945, 0xa0000}};
  // 190331921128345502.2149483907
  s21_decimal dec_check = {{0x70d13d83, 0x30ba82ea, 0x6266385, 0xa0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_133) {
  // -647991267.5307
  s21_decimal dec_1 = {{0xb8e4a7eb, 0x5e4, 0x0, 0x80040000}};
  // -79046589638.482563739536
  s21_decimal dec_2 = {{0x3274af90, 0x1fcc456b, 0x10bd, 0x800c0000}};
  // 78398598370.951863739536
  s21_decimal dec_check = {{0xeff82490, 0xff1cd4cd, 0x1099, 0xc0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_134) {
  // -67
  s21_decimal dec_1 = {{0x43, 0x0, 0x0, 0x80000000}};
  // -50.896919210544
  s21_decimal dec_2 = {{0x5cca2a30, 0x2e4a, 0x0, 0x800c0000}};
  // -16.103080789456
  s21_decimal dec_check = {{0x4a6905d0, 0xea5, 0x0, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_136) {
  // 9541566008680
  s21_decimal dec_1 = {{0x91a70d68, 0x8ad, 0x0, 0x0}};
  // 6
  s21_decimal dec_2 = {{0x6, 0x0, 0x0, 0x0}};
  // 9541566008674
  s21_decimal dec_check = {{0x91a70d62, 0x8ad, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_137) {
  // 2541523912375816422371
  s21_decimal dec_1 = {{0x298c03e3, 0xc6bac4bc, 0x89, 0x0}};
  // 3087496331488054867
  s21_decimal dec_2 = {{0x23aace53, 0x2ad8fd8e, 0x0, 0x0}};
  // 2538436416044328367504
  s21_decimal dec_check = {{0x5e13590, 0x9be1c72e, 0x89, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_138) {
  // 46.04497211930345
  s21_decimal dec_1 = {{0xcafb6e9, 0x105bc4, 0x0, 0xe0000}};
  // 42340086914196
  s21_decimal dec_2 = {{0x11d71c94, 0x2682, 0x0, 0x0}};
  // -42340086914149.95502788069655
  s21_decimal dec_check = {{0x98fd4917, 0x13e6437a, 0xdae4a37, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_139) {
  // 48787708.3054220
  s21_decimal dec_1 = {{0xbc3ac08c, 0x1bbb8, 0x0, 0x70000}};
  // -694.239101540066772310615
  s21_decimal dec_2 = {{0xe68ada57, 0xc6f06649, 0x9302, 0x80150000}};
  // 48788402.544523540066772310615
  s21_decimal dec_check = {{0x1965da57, 0x8b21f245, 0x9da4d219, 0x150000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_140) {
  // 4849082413
  s21_decimal dec_1 = {{0x2107202d, 0x1, 0x0, 0x0}};
  // -8556814637426806987665998444
  s21_decimal dec_2 = {{0xf810826c, 0xf90290e3, 0x1ba607fa, 0x80000000}};
  // 8556814637426806992515080857
  s21_decimal dec_check = {{0x1917a299, 0xf90290e5, 0x1ba607fa, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_141) {
  // 0.2924264
  s21_decimal dec_1 = {{0x2c9ee8, 0x0, 0x0, 0x70000}};
  // -13157945234933182630875276
  s21_decimal dec_2 = {{0xbdee508c, 0xa3f50e13, 0xae24d, 0x80000000}};
  // 13157945234933182630875276.292
  s21_decimal dec_check = {{0xeaeaa404, 0x753efd1d, 0x2a83ff48, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_142) {
  // -57.078652917
  s21_decimal dec_1 = {{0x4a271ff5, 0xd, 0x0, 0x80090000}};
  // -206604919
  s21_decimal dec_2 = {{0xc508a77, 0x0, 0x0, 0x80000000}};
  // 206604861.921347083
  s21_decimal dec_check = {{0xfbb0c60b, 0x2de0206, 0x0, 0x90000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_143) {
  // -8983233414
  s21_decimal dec_1 = {{0x17714386, 0x2, 0x0, 0x80000000}};
  // -6315902328098.2675107776020038
  s21_decimal dec_2 = {{0x55bbe46, 0xaa4a71a8, 0xcc13eb68, 0x80100000}};
  // 6306919094684.2675107776020038
  s21_decimal dec_check = {{0x355be46, 0x12d0b051, 0xcbc99cac, 0x100000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_144) {
  // 1887749327790104
  s21_decimal dec_1 = {{0xe41ba018, 0x6b4e5, 0x0, 0x0}};
  // 99
  s21_decimal dec_2 = {{0x63, 0x0, 0x0, 0x0}};
  // 1887749327790005
  s21_decimal dec_check = {{0xe41b9fb5, 0x6b4e5, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_145) {
  // 677128
  s21_decimal dec_1 = {{0xa5508, 0x0, 0x0, 0x0}};
  // 271234493482.0
  s21_decimal dec_2 = {{0x845b39a4, 0x277, 0x0, 0x10000}};
  // -271233816354.0
  s21_decimal dec_check = {{0x83f3e754, 0x277, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_146) {
  // 32631763937512904570
  s21_decimal dec_1 = {{0x21dbd77a, 0xc4db5069, 0x1, 0x0}};
  // -71
  s21_decimal dec_2 = {{0x47, 0x0, 0x0, 0x80000000}};
  // 32631763937512904641
  s21_decimal dec_check = {{0x21dbd7c1, 0xc4db5069, 0x1, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_147) {
  // -72368355.3432334
  s21_decimal dec_1 = {{0xb521d30e, 0x2922f, 0x0, 0x80070000}};
  // 37913363.1435488286889
  s21_decimal dec_2 = {{0xf426d8a9, 0x8d893d0d, 0x14, 0xd0000}};
  // -110281718.4867822286889
  s21_decimal dec_check = {{0x52d73829, 0xc8a9b2a9, 0x3b, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_148) {
  // -2342661533201174268.0
  s21_decimal dec_1 = {{0x624795d8, 0x451c0e86, 0x1, 0x80010000}};
  // -39787356024356760556209767
  s21_decimal dec_2 = {{0xf0c50667, 0xe45709ab, 0x20e94c, 0x80000000}};
  // 39787353681695227355035499.0
  s21_decimal dec_check = {{0x56aaa2e, 0xa64a5231, 0x1491cff, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_149) {
  // -677549301515124
  s21_decimal dec_1 = {{0x3d6f4374, 0x2683a, 0x0, 0x80000000}};
  // 87793732
  s21_decimal dec_2 = {{0x53ba044, 0x0, 0x0, 0x0}};
  // -677549389308856
  s21_decimal dec_check = {{0x42aae3b8, 0x2683a, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_150) {
  // 823317.676588
  s21_decimal dec_1 = {{0xb18ec22c, 0xbf, 0x0, 0x60000}};
  // -96402347947
  s21_decimal dec_2 = {{0x720717ab, 0x16, 0x0, 0x80000000}};
  // 96403171264.676588
  s21_decimal dec_check = {{0x6a73c2ec, 0x1567e2c, 0x0, 0x60000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_151) {
  // 6
  s21_decimal dec_1 = {{0x6, 0x0, 0x0, 0x0}};
  // 396210246827703
  s21_decimal dec_2 = {{0xe304beb7, 0x16859, 0x0, 0x0}};
  // -396210246827697
  s21_decimal dec_check = {{0xe304beb1, 0x16859, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_152) {
  // 1964155509455318587016139933
  s21_decimal dec_1 = {{0x776ed49d, 0x85c546e8, 0x658b61b, 0x0}};
  // 748317095153377.224415
  s21_decimal dec_2 = {{0xc13c26df, 0x90fc6149, 0x28, 0x60000}};
  // 1964155509454570269920986555.8
  s21_decimal dec_check = {{0x27f83956, 0x399a2f2d, 0x3f771d13, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_153) {
  // 8365347.8759
  s21_decimal dec_1 = {{0x7a22c967, 0x13, 0x0, 0x40000}};
  // 1611312474832263953
  s21_decimal dec_2 = {{0xa4885b11, 0x165c8828, 0x0, 0x0}};
  // -1611312474823898605.1241
  s21_decimal dec_check = {{0x94427ea9, 0x7e86b387, 0x369, 0x80040000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_154) {
  // 2510856375794466007
  s21_decimal dec_1 = {{0x1940fcd7, 0x22d85a92, 0x0, 0x0}};
  // 415995477063506
  s21_decimal dec_2 = {{0x7ea37752, 0x17a58, 0x0, 0x0}};
  // 2510440380317402501
  s21_decimal dec_check = {{0x9a9d8585, 0x22d6e039, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_155) {
  // 5490635300933726976624900225
  s21_decimal dec_1 = {{0x8fd3881, 0x1474281b, 0x11bdbf40, 0x0}};
  // 8297021717
  s21_decimal dec_2 = {{0xee8a8115, 0x1, 0x0, 0x0}};
  // 5490635300933726968327878508
  s21_decimal dec_check = {{0x1a72b76c, 0x14742819, 0x11bdbf40, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_156) {
  // 4227706814681147
  s21_decimal dec_1 = {{0xb2e7503b, 0xf0513, 0x0, 0x0}};
  // 7992841198995505547458667757
  s21_decimal dec_2 = {{0x6b2c64ed, 0x9d37877b, 0x19d385f5, 0x0}};
  // -7992841198991277840643986610
  s21_decimal dec_check = {{0xb84514b2, 0x9d288267, 0x19d385f5, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_157) {
  // 66444080311.9718663
  s21_decimal dec_1 = {{0xdc39e107, 0x9389163, 0x0, 0x70000}};
  // -2297699
  s21_decimal dec_2 = {{0x230f63, 0x0, 0x0, 0x80000000}};
  // 66446378010.9718663
  s21_decimal dec_check = {{0x9b8d9487, 0x938a649, 0x0, 0x70000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_158) {
  // 4.977459713
  s21_decimal dec_1 = {{0x28ae0201, 0x1, 0x0, 0x90000}};
  // 15360533772485066410543492
  s21_decimal dec_2 = {{0x3ce5c984, 0x344f2f4c, 0xcb4b8, 0x0}};
  // -15360533772485066410543487.023
  s21_decimal dec_check = {{0xe19b182f, 0x5550c1cd, 0x31a1ef8c, 0x80030000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_159) {
  // -277675969997.5570
  s21_decimal dec_1 = {{0xbf8b2d92, 0x9dd72, 0x0, 0x80040000}};
  // -29655584837185810812928133312
  s21_decimal dec_2 = {{0x89f608c0, 0x571ac19e, 0x5fd2865b, 0x80000000}};
  // 29655584837185810535252163314
  s21_decimal dec_check = {{0xe32efaf2, 0x571ac15d, 0x5fd2865b, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_160) {
  // -402157654252866
  s21_decimal dec_1 = {{0xa0201d42, 0x16dc2, 0x0, 0x80000000}};
  // 5686801419934423994419147
  s21_decimal dec_2 = {{0xb0c947cb, 0x1f69391f, 0x4b43a, 0x0}};
  // -5686801420336581648672013
  s21_decimal dec_check = {{0x50e9650d, 0x1f6aa6e2, 0x4b43a, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_161) {
  // 814362947.2602502470
  s21_decimal dec_1 = {{0xc8dfb546, 0x7103fbdb, 0x0, 0xa0000}};
  // -5623930162444594
  s21_decimal dec_2 = {{0x4792f932, 0x13faef, 0x0, 0x80000000}};
  // 5623930976807541.2602502470
  s21_decimal dec_check = {{0xcbf63d46, 0x176b5713, 0x2e8523, 0xa0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_162) {
  // -74768527104728695399
  s21_decimal dec_1 = {{0xd8850267, 0xd9f2b42, 0x4, 0x80000000}};
  // -0.439743877210
  s21_decimal dec_2 = {{0x62c7105a, 0x66, 0x0, 0x800c0000}};
  // -74768527104728695398.560256123
  s21_decimal dec_check = {{0x8a5507b, 0x63fa66a, 0xf1971378, 0x80090000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_163) {
  // -452976120.5
  s21_decimal dec_1 = {{0xdfeabb5, 0x1, 0x0, 0x80010000}};
  // -766515.12713274119
  s21_decimal dec_2 = {{0xac56307, 0x1105225, 0x0, 0x800b0000}};
  // -452209605.37286725881
  s21_decimal dec_check = {{0x8aeed0f9, 0x73912004, 0x2, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_164) {
  // 680136690006608280
  s21_decimal dec_1 = {{0x4e8dc998, 0x97054b7, 0x0, 0x0}};
  // -154891054478021360.3108
  s21_decimal dec_2 = {{0x7167cb24, 0xf773adff, 0x53, 0x80040000}};
  // 835027744484629640.3108
  s21_decimal dec_check = {{0xf3fa8ca4, 0xab60e66b, 0x1c4, 0x40000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_165) {
  // 72109554141.488252475737628711
  s21_decimal dec_1 = {{0xf65fe027, 0xdbaea07f, 0xe8ffa00a, 0x120000}};
  // 911.75692870578
  s21_decimal dec_2 = {{0x7ec923b2, 0x52ec, 0x0, 0xb0000}};
  // 72109553229.731323769957628711
  s21_decimal dec_check = {{0x8533bb27, 0x6e835089, 0xe8ff9fd9, 0x120000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_166) {
  // 8986532826588
  s21_decimal dec_1 = {{0x5718cddc, 0x82c, 0x0, 0x0}};
  // 479368123.2687839
  s21_decimal dec_2 = {{0xe30a72df, 0x1107d3, 0x0, 0x70000}};
  // 8986053458464.7312161
  s21_decimal dec_check = {{0x6c9b6321, 0xdf10c01a, 0x4, 0x70000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_167) {
  // -43793612527894321
  s21_decimal dec_1 = {{0xfe27ff31, 0x9b960e, 0x0, 0x80000000}};
  // 2288151589
  s21_decimal dec_2 = {{0x88626c25, 0x0, 0x0, 0x0}};
  // -43793614816045910
  s21_decimal dec_check = {{0x868a6b56, 0x9b960f, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_168) {
  // -4383338999.0
  s21_decimal dec_1 = {{0x34ac73a6, 0xa, 0x0, 0x80010000}};
  // -72818275324050.07
  s21_decimal dec_2 = {{0x9762790f, 0x19dec8, 0x0, 0x80020000}};
  // 72813891985051.07
  s21_decimal dec_check = {{0x88a5f493, 0x19de62, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_169) {
  // 357650612308
  s21_decimal dec_1 = {{0x45a34054, 0x53, 0x0, 0x0}};
  // 6498761064548.4002653
  s21_decimal dec_2 = {{0x1d77dd5d, 0x85e25f90, 0x3, 0x70000}};
  // -6141110452240.4002653
  s21_decimal dec_check = {{0x72467b5d, 0x54401231, 0x3, 0x80070000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_170) {
  // 460.189203732
  s21_decimal dec_1 = {{0x2569fd14, 0x6b, 0x0, 0x90000}};
  // -6024
  s21_decimal dec_2 = {{0x1788, 0x0, 0x0, 0x80000000}};
  // 6484.189203732
  s21_decimal dec_check = {{0xb7cb4d14, 0x5e5, 0x0, 0x90000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_171) {
  // -0.463059427
  s21_decimal dec_1 = {{0x1b99b9e3, 0x0, 0x0, 0x80090000}};
  // 73884428278156.0
  s21_decimal dec_2 = {{0x9704ff78, 0x29ff9, 0x0, 0x10000}};
  // -73884428278156.463059427
  s21_decimal dec_check = {{0x55fa31e3, 0x486afe81, 0xfa5, 0x80090000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_172) {
  // -73268886
  s21_decimal dec_1 = {{0x45dfe96, 0x0, 0x0, 0x80000000}};
  // 88734.208359
  s21_decimal dec_2 = {{0xa8f89167, 0x14, 0x0, 0x60000}};
  // -73357620.208359
  s21_decimal dec_check = {{0xe6e4e2e7, 0x42b7, 0x0, 0x80060000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_173) {
  // 880
  s21_decimal dec_1 = {{0x370, 0x0, 0x0, 0x0}};
  // 5383.54
  s21_decimal dec_2 = {{0x836f2, 0x0, 0x0, 0x20000}};
  // -4503.54
  s21_decimal dec_check = {{0x6df32, 0x0, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_174) {
  // -63595.26064185421950804
  s21_decimal dec_1 = {{0xda1d6f54, 0xc0273d29, 0x158, 0x80110000}};
  // -78182771.37240443508
  s21_decimal dec_2 = {{0x20c64a74, 0x6c8019a2, 0x0, 0x800b0000}};
  // 78119176.11176258086049196
  s21_decimal dec_check = {{0xd37315ac, 0xe6fae36f, 0x6763c, 0x110000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_175) {
  // -148
  s21_decimal dec_1 = {{0x94, 0x0, 0x0, 0x80000000}};
  // -8.190346733665
  s21_decimal dec_2 = {{0xf6b52861, 0x772, 0x0, 0x800c0000}};
  // -139.809653266335
  s21_decimal dec_check = {{0xf8b8179f, 0x7f27, 0x0, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_176) {
  // -9091670
  s21_decimal dec_1 = {{0x8aba56, 0x0, 0x0, 0x80000000}};
  // 2753304729163467830458216579
  s21_decimal dec_2 = {{0x996e7083, 0x71952920, 0x8e57af4, 0x0}};
  // -2753304729163467830467308249
  s21_decimal dec_check = {{0x99f92ad9, 0x71952920, 0x8e57af4, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_177) {
  // -15355603830760894271746
  s21_decimal dec_1 = {{0xe29a9102, 0x6dcfc699, 0x340, 0x80000000}};
  // 6638750702890886374377721009
  s21_decimal dec_2 = {{0xe2fd0cb1, 0xbbb2e46b, 0x15737224, 0x0}};
  // -6638766058494717135271992755
  s21_decimal dec_check = {{0xc5979db3, 0x2982ab05, 0x15737565, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_178) {
  // -8744087523
  s21_decimal dec_1 = {{0x9302fe3, 0x2, 0x0, 0x80000000}};
  // -454530513106
  s21_decimal dec_2 = {{0xd42138d2, 0x69, 0x0, 0x80000000}};
  // 445786425583
  s21_decimal dec_check = {{0xcaf108ef, 0x67, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_179) {
  // 612319876052399200999475033
  s21_decimal dec_1 = {{0xc9a68759, 0xfe5cc931, 0x1fa7fc6, 0x0}};
  // -930295760607407382069787.622
  s21_decimal dec_2 = {{0x17783be6, 0x3c380d6b, 0x30185ca, 0x80030000}};
  // 613250171813006608381544820.62
  s21_decimal dec_check = {{0x4765b18e, 0xc8aa98ca, 0xc626dd82, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_180) {
  // -176883990853181223
  s21_decimal dec_1 = {{0x7141df27, 0x2746b0d, 0x0, 0x80000000}};
  // -930387795089353567.479
  s21_decimal dec_2 = {{0x5bd76cf7, 0x6fb9723a, 0x32, 0x80030000}};
  // 753503804236172344.479
  s21_decimal dec_check = {{0xf287bc9f, 0xd8f745b7, 0x28, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_181) {
  // -8368
  s21_decimal dec_1 = {{0x20b0, 0x0, 0x0, 0x80000000}};
  // 9358079989.6927912
  s21_decimal dec_2 = {{0xdfa73ea8, 0x14c773d, 0x0, 0x70000}};
  // -9358088357.6927912
  s21_decimal dec_check = {{0x5b5eb6a8, 0x14c7751, 0x0, 0x80070000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_183) {
  // -221
  s21_decimal dec_1 = {{0xdd, 0x0, 0x0, 0x80000000}};
  // 995178550158.12517542989194205
  s21_decimal dec_2 = {{0xb7e0e3dd, 0x764a2c3b, 0x418f3d82, 0x110000}};
  // -995178550379.12517542989194205
  s21_decimal dec_check = {{0x7802e3dd, 0xa8fd2524, 0x418f3d83, 0x80110000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_184) {
  // -853063272876076232375435
  s21_decimal dec_1 = {{0x74447c8b, 0xa7166ddd, 0xb4a4, 0x80000000}};
  // 3921837
  s21_decimal dec_2 = {{0x3bd7ad, 0x0, 0x0, 0x0}};
  // -853063272876076236297272
  s21_decimal dec_check = {{0x74805438, 0xa7166ddd, 0xb4a4, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_185) {
  // 4415339203.852036476018689
  s21_decimal dec_1 = {{0xefb0a001, 0x49211b9, 0x3a6fc, 0xf0000}};
  // -21208558127
  s21_decimal dec_2 = {{0xf020ea2f, 0x4, 0x0, 0x80000000}};
  // 25623897330.852036476018689
  s21_decimal dec_check = {{0xa1222001, 0x41f77f67, 0x153212, 0xf0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_186) {
  // 41691956
  s21_decimal dec_1 = {{0x27c2b34, 0x0, 0x0, 0x0}};
  // -92417171437.180754
  s21_decimal dec_2 = {{0x82a8d752, 0x14854ed, 0x0, 0x80060000}};
  // 92458863393.180754
  s21_decimal dec_check = {{0xace30c52, 0x1487ad8, 0x0, 0x60000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_187) {
  // -5749267429038
  s21_decimal dec_1 = {{0x9b0af6ae, 0x53a, 0x0, 0x80000000}};
  // 8282.55365834
  s21_decimal dec_2 = {{0xd7ddeaca, 0xc0, 0x0, 0x80000}};
  // -5749267437320.55365834
  s21_decimal dec_check = {{0xf532d8ca, 0x2ab61b54, 0x1f, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_188) {
  // 8534.1297053795081581164
  s21_decimal dec_1 = {{0x3258f26c, 0x5c6968db, 0x1212, 0x130000}};
  // -3
  s21_decimal dec_2 = {{0x3, 0x0, 0x0, 0x80000000}};
  // 8537.1297053795081581164
  s21_decimal dec_check = {{0xd010f26c, 0xfcbed1e8, 0x1213, 0x130000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_189) {
  // 63650275127353209261116841
  s21_decimal dec_1 = {{0x60afcda9, 0x54205cf0, 0x34a678, 0x0}};
  // -0.146
  s21_decimal dec_2 = {{0x92, 0x0, 0x0, 0x80030000}};
  // 63650275127353209261116841.146
  s21_decimal dec_check = {{0xaebb5cba, 0x9e6b0af9, 0xcdaa4608, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_190) {
  // -3245683042362491307062
  s21_decimal dec_1 = {{0xb56a8436, 0xf2e68aa9, 0xaf, 0x80000000}};
  // -5559094154432542
  s21_decimal dec_2 = {{0x7859101e, 0x13bff7, 0x0, 0x80000000}};
  // -3245677483268336874520
  s21_decimal dec_check = {{0x3d117418, 0xf2d2cab2, 0xaf, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_191) {
  // 7387209927110924370106
  s21_decimal dec_1 = {{0x7deb00ba, 0x7621c197, 0x190, 0x0}};
  // -560362479576598469936
  s21_decimal dec_2 = {{0x4c3c5d30, 0x6097723f, 0x1e, 0x80000000}};
  // 7947572406687522840042
  s21_decimal dec_check = {{0xca275dea, 0xd6b933d6, 0x1ae, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_192) {
  // -251993560342542941853
  s21_decimal dec_1 = {{0x2f3bfe9d, 0xa91cf803, 0xd, 0x80000000}};
  // -9
  s21_decimal dec_2 = {{0x9, 0x0, 0x0, 0x80000000}};
  // -251993560342542941844
  s21_decimal dec_check = {{0x2f3bfe94, 0xa91cf803, 0xd, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_193) {
  // 436.474
  s21_decimal dec_1 = {{0x6a8fa, 0x0, 0x0, 0x30000}};
  // 6478617
  s21_decimal dec_2 = {{0x62db19, 0x0, 0x0, 0x0}};
  // -6478180.526
  s21_decimal dec_check = {{0x822130ae, 0x1, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_194) {
  // -210071445683249.54573323203663
  s21_decimal dec_1 = {{0x85f1744f, 0xef4bb5dd, 0x43e0b3e4, 0x800e0000}};
  // -4004941638.43483725817625
  s21_decimal dec_2 = {{0xa3356719, 0xd5062aa0, 0x54ce, 0x800e0000}};
  // -210067440741611.11089597386038
  s21_decimal dec_check = {{0xe2bc0d36, 0x1a458b3c, 0x43e05f16, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_195) {
  // 669844462602835536402098271
  s21_decimal dec_1 = {{0xc032a85f, 0x143ddd49, 0x22a1515, 0x0}};
  // -20970626102284713969
  s21_decimal dec_2 = {{0x3836fff1, 0x2306a155, 0x1, 0x80000000}};
  // 669844483573461638686812240
  s21_decimal dec_check = {{0xf869a850, 0x37447e9e, 0x22a1516, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_196) {
  // 153085560146275269690818037
  s21_decimal dec_1 = {{0x80387df5, 0xd826824b, 0x7ea120, 0x0}};
  // -8081548157164688906719144
  s21_decimal dec_2 = {{0x78350fa8, 0x9a7bd80e, 0x6af55, 0x80000000}};
  // 161167108303439958597537181
  s21_decimal dec_check = {{0xf86d8d9d, 0x72a25a59, 0x855076, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_197) {
  // 773343822.582976796
  s21_decimal dec_1 = {{0xfa4d111c, 0xabb781b, 0x0, 0x90000}};
  // 190174
  s21_decimal dec_2 = {{0x2e6de, 0x0, 0x0, 0x0}};
  // 773153648.582976796
  s21_decimal dec_check = {{0xa495e51c, 0xabacb25, 0x0, 0x90000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_198) {
  // -5556013980248111502
  s21_decimal dec_1 = {{0x2bcaf98e, 0x4d1aed47, 0x0, 0x80000000}};
  // 56
  s21_decimal dec_2 = {{0x38, 0x0, 0x0, 0x0}};
  // -5556013980248111558
  s21_decimal dec_check = {{0x2bcaf9c6, 0x4d1aed47, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_199) {
  // -6588917507055280762552812
  s21_decimal dec_1 = {{0x1a0a81ec, 0xef0bcdab, 0x57341, 0x80000000}};
  // -1876.09251426626736376899222
  s21_decimal dec_2 = {{0xf619e696, 0xe614e631, 0x9b2fcd, 0x80170000}};
  // -6588917507055280762550935.9075
  s21_decimal dec_check = {{0x3954cde3, 0xbd11eba9, 0xd4e63f89, 0x80040000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_200) {
  // 45260893985908339771154332
  s21_decimal dec_1 = {{0xa47b9f9c, 0xfaba79d3, 0x25705d, 0x0}};
  // -4429319
  s21_decimal dec_2 = {{0x439607, 0x0, 0x0, 0x80000000}};
  // 45260893985908339775583651
  s21_decimal dec_check = {{0xa4bf35a3, 0xfaba79d3, 0x25705d, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_201) {
  // 68627648305807339898600
  s21_decimal dec_1 = {{0x84bd46e8, 0x4ff0e144, 0xe88, 0x0}};
  // 968
  s21_decimal dec_2 = {{0x3c8, 0x0, 0x0, 0x0}};
  // 68627648305807339897632
  s21_decimal dec_check = {{0x84bd4320, 0x4ff0e144, 0xe88, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_202) {
  // 48367569016753540746909154
  s21_decimal dec_1 = {{0x119715e2, 0x2b9825c9, 0x28023b, 0x0}};
  // -47164537052039752.898
  s21_decimal dec_2 = {{0x76942cc2, 0x8e8a188f, 0x2, 0x80030000}};
  // 48367569063918077798948906.898
  s21_decimal dec_check = {{0x2cc1a792, 0xd8ddb1fc, 0x9c48b724, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_203) {
  // -45439138437977427772
  s21_decimal dec_1 = {{0x97714f3c, 0x76983fa9, 0x2, 0x80000000}};
  // 62
  s21_decimal dec_2 = {{0x3e, 0x0, 0x0, 0x0}};
  // -45439138437977427834
  s21_decimal dec_check = {{0x97714f7a, 0x76983fa9, 0x2, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_204) {
  // -909.4903675110616956
  s21_decimal dec_1 = {{0xa55cef7c, 0x7e3796b4, 0x0, 0x80100000}};
  // -120075968300680159131.16270
  s21_decimal dec_2 = {{0xc31a226e, 0x20e3b444, 0x9eeb5, 0x80050000}};
  // 120075968300680158221.67233249
  s21_decimal dec_check = {{0xf11a52e1, 0x79782c84, 0x26cc7388, 0x80000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_205) {
  // 0.81
  s21_decimal dec_1 = {{0x51, 0x0, 0x0, 0x20000}};
  // 4443476786483.87
  s21_decimal dec_2 = {{0xc18ae843, 0x19421, 0x0, 0x20000}};
  // -4443476786483.06
  s21_decimal dec_check = {{0xc18ae7f2, 0x19421, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_206) {
  // 900945995617.9721
  s21_decimal dec_1 = {{0x5c4e6309, 0x20020e, 0x0, 0x40000}};
  // 276.8510219
  s21_decimal dec_2 = {{0xa5041d0b, 0x0, 0x0, 0x70000}};
  // 900945995341.1210781
  s21_decimal dec_check = {{0xed2ebe1d, 0x7d080817, 0x0, 0x70000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_207) {
  // 0.7
  s21_decimal dec_1 = {{0x7, 0x0, 0x0, 0x10000}};
  // 5924107037195678208197422
  s21_decimal dec_2 = {{0x5813832e, 0x7c69b930, 0x4e67a, 0x0}};
  // -5924107037195678208197421.3
  s21_decimal dec_check = {{0x70c31fc5, 0xdc213be3, 0x3100c8, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_208) {
  // 92699293
  s21_decimal dec_1 = {{0x5867a9d, 0x0, 0x0, 0x0}};
  // -5.5
  s21_decimal dec_2 = {{0x37, 0x0, 0x0, 0x80010000}};
  // 92699298.5
  s21_decimal dec_check = {{0x3740ca59, 0x0, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_209) {
  // 4.562978362563
  s21_decimal dec_1 = {{0x66b454c3, 0x426, 0x0, 0xc0000}};
  // -85
  s21_decimal dec_2 = {{0x55, 0x0, 0x0, 0x80000000}};
  // 89.562978362563
  s21_decimal dec_check = {{0x182a4c3, 0x5175, 0x0, 0xc0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_210) {
  // -20208625382480432304449
  s21_decimal dec_1 = {{0xd8ab9141, 0x8303d37a, 0x447, 0x80000000}};
  // -0.6996079430063327172749
  s21_decimal dec_2 = {{0x3dea588d, 0x421b16d3, 0x17b, 0x80160000}};
  // -20208625382480432304448.300392
  s21_decimal dec_check = {{0xe91b6568, 0x21ad3c9f, 0x414c2ee1, 0x80060000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_211) {
  // 5.84343
  s21_decimal dec_1 = {{0x8ea97, 0x0, 0x0, 0x50000}};
  // -4.223460829720
  s21_decimal dec_2 = {{0x59e1ea18, 0x3d7, 0x0, 0x800c0000}};
  // 10.066890829720
  s21_decimal dec_check = {{0xe173af98, 0x927, 0x0, 0xc0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_212) {
  // 6042.20536
  s21_decimal dec_1 = {{0x2403ac78, 0x0, 0x0, 0x50000}};
  // 168733013831741
  s21_decimal dec_2 = {{0x3759f03d, 0x9976, 0x0, 0x0}};
  // -168733013825698.79464
  s21_decimal dec_check = {{0x782f67a8, 0xea2a0235, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_213) {
  // -934605737026865957
  s21_decimal dec_1 = {{0x50874b25, 0xcf862f7, 0x0, 0x80000000}};
  // -295452353627457613568618
  s21_decimal dec_2 = {{0xa8d19a6a, 0x81122a83, 0x3e90, 0x80000000}};
  // 295451419021720586702661
  s21_decimal dec_check = {{0x584a4f45, 0x7419c78c, 0x3e90, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_214) {
  // 36280756944676060.7198510
  s21_decimal dec_1 = {{0x46f92d2e, 0xd676bef1, 0x4cd3, 0x70000}};
  // -40562522601060.306
  s21_decimal dec_2 = {{0x3ed477d2, 0x901b66, 0x0, 0x80030000}};
  // 36321319467277121.0258510
  s21_decimal dec_check = {{0x9281a84e, 0xd3a508e7, 0x4ce9, 0x70000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_215) {
  // 0.0
  s21_decimal dec_1 = {{0x0, 0x0, 0x0, 0x10000}};
  // -31133.97400419043
  s21_decimal dec_2 = {{0x5218bae3, 0xb0f9e, 0x0, 0x800b0000}};
  // 31133.97400419043
  s21_decimal dec_check = {{0x5218bae3, 0xb0f9e, 0x0, 0xb0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_217) {
  // 93559928
  s21_decimal dec_1 = {{0x5939c78, 0x0, 0x0, 0x0}};
  // 224520990396254.451
  s21_decimal dec_2 = {{0xb53008f3, 0x31da8a6, 0x0, 0x30000}};
  // -224520896836326.451
  s21_decimal dec_check = {{0xec94d433, 0x31da890, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_218) {
  // 16435539212
  s21_decimal dec_1 = {{0xd3a26d0c, 0x3, 0x0, 0x0}};
  // 38042069392437.020033835
  s21_decimal dec_2 = {{0x48d5832b, 0x43c44ce6, 0x80e, 0x90000}};
  // -38025633853225.020033835
  s21_decimal dec_check = {{0xc1920b2b, 0x5fad8910, 0x80d, 0x80090000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_219) {
  // 61814885601
  s21_decimal dec_1 = {{0x64744ce1, 0xe, 0x0, 0x0}};
  // 21
  s21_decimal dec_2 = {{0x15, 0x0, 0x0, 0x0}};
  // 61814885580
  s21_decimal dec_check = {{0x64744ccc, 0xe, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_220) {
  // -40948836544486383.4
  s21_decimal dec_1 = {{0xb1ff175a, 0x5aecb7f, 0x0, 0x80010000}};
  // 65208429469414451630
  s21_decimal dec_2 = {{0x58fe9ae, 0x88f2e11d, 0x3, 0x0}};
  // -65249378305958938013.4
  s21_decimal dec_check = {{0xe99e3826, 0x5f2b96a1, 0x23, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_221) {
  // -959933.947670363247935
  s21_decimal dec_1 = {{0x4a6a153f, 0x9c27775, 0x34, 0x800f0000}};
  // -98869
  s21_decimal dec_2 = {{0x18235, 0x0, 0x0, 0x80000000}};
  // -861064.947670363247935
  s21_decimal dec_check = {{0xe051953f, 0xadad37c9, 0x2e, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_222) {
  // 7.1
  s21_decimal dec_1 = {{0x47, 0x0, 0x0, 0x10000}};
  // -2813128949200299
  s21_decimal dec_2 = {{0x9fb975ab, 0x9fe86, 0x0, 0x80000000}};
  // 2813128949200306.1
  s21_decimal dec_check = {{0x3d3e98f5, 0x63f142, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_224) {
  // 940364478606501944712853
  s21_decimal dec_1 = {{0x5d4b5e95, 0x42b23413, 0xc721, 0x0}};
  // 38192774159.6
  s21_decimal dec_2 = {{0xecaad89c, 0x58, 0x0, 0x10000}};
  // 940364478606463751938693.4
  s21_decimal dec_check = {{0xb846d936, 0x9af60868, 0x7c74c, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_225) {
  // -5672.8160
  s21_decimal dec_1 = {{0x3619a60, 0x0, 0x0, 0x80040000}};
  // -610.7368053307327962846023834
  s21_decimal dec_2 = {{0xcfaf509a, 0x94062188, 0x13bbe57d, 0x80190000}};
  // -5062.0791946692672037153976166
  s21_decimal dec_check = {{0xec50af66, 0x13b94b36, 0xa39089a6, 0x80190000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_226) {
  // 2
  s21_decimal dec_1 = {{0x2, 0x0, 0x0, 0x0}};
  // -1928921033618841.86
  s21_decimal dec_2 = {{0x94dcf01a, 0x2ad4a58, 0x0, 0x80020000}};
  // 1928921033618843.86
  s21_decimal dec_check = {{0x94dcf0e2, 0x2ad4a58, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_227) {
  // -116427346.816803274550853
  s21_decimal dec_1 = {{0x9d9cee45, 0x8a039f5c, 0x18a7, 0x800f0000}};
  // -0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x80010000}};
  // -116427346.316803274550853
  s21_decimal dec_check = {{0x4b39ae45, 0x8a01d89d, 0x18a7, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_228) {
  // 32.91
  s21_decimal dec_1 = {{0xcdb, 0x0, 0x0, 0x20000}};
  // 21
  s21_decimal dec_2 = {{0x15, 0x0, 0x0, 0x0}};
  // 11.91
  s21_decimal dec_check = {{0x4a7, 0x0, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_229) {
  // 7450257013961596150665806.1111
  s21_decimal dec_1 = {{0x69370b37, 0xe675f6c, 0xf0bb14e4, 0x40000}};
  // 2
  s21_decimal dec_2 = {{0x2, 0x0, 0x0, 0x0}};
  // 7450257013961596150665804.1111
  s21_decimal dec_check = {{0x6936bd17, 0xe675f6c, 0xf0bb14e4, 0x40000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_230) {
  // 36282
  s21_decimal dec_1 = {{0x8dba, 0x0, 0x0, 0x0}};
  // 2
  s21_decimal dec_2 = {{0x2, 0x0, 0x0, 0x0}};
  // 36280
  s21_decimal dec_check = {{0x8db8, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_231) {
  // 62395154638.37
  s21_decimal dec_1 = {{0xc01a509d, 0x5ac, 0x0, 0x20000}};
  // 0.5428
  s21_decimal dec_2 = {{0x1534, 0x0, 0x0, 0x40000}};
  // 62395154637.8272
  s21_decimal dec_check = {{0xa476820, 0x2377b, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_232) {
  // 7107.59079370042505846
  s21_decimal dec_1 = {{0x8f0dfa76, 0x87c380ec, 0x26, 0x110000}};
  // 913984213318260128423.75617302
  s21_decimal dec_2 = {{0x13219b16, 0x7c4dc615, 0x2753008c, 0x80000}};
  // -913984213318260121316.16537932
  s21_decimal dec_check = {{0x9696bd4c, 0x7c4dc56f, 0x2753008c, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_233) {
  // -201836675608595
  s21_decimal dec_1 = {{0xc35a3013, 0xb791, 0x0, 0x80000000}};
  // -57075808075323275607
  s21_decimal dec_2 = {{0x3e03f957, 0x1816010b, 0x3, 0x80000000}};
  // 57075606238647667012
  s21_decimal dec_check = {{0x7aa9c944, 0x18154979, 0x3, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_234) {
  // 7857443992649013222617
  s21_decimal dec_1 = {{0xb3755cd9, 0xf3f0c0ca, 0x1a9, 0x0}};
  // 5.5130
  s21_decimal dec_2 = {{0xd75a, 0x0, 0x0, 0x40000}};
  // 7857443992649013222611.4870
  s21_decimal dec_check = {{0x187a0536, 0xec6aee02, 0x40fec8, 0x40000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_235) {
  // -75120279351784378275380041773
  s21_decimal dec_1 = {{0x4c0b982d, 0x8bcf3016, 0xf2ba09e7, 0x80000000}};
  // -2
  s21_decimal dec_2 = {{0x2, 0x0, 0x0, 0x80000000}};
  // -75120279351784378275380041771
  s21_decimal dec_check = {{0x4c0b982b, 0x8bcf3016, 0xf2ba09e7, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_236) {
  // 4326928266291338362
  s21_decimal dec_1 = {{0x48e45c7a, 0x3c0c5655, 0x0, 0x0}};
  // -98053548130674458
  s21_decimal dec_2 = {{0xb94ba71a, 0x15c5b2e, 0x0, 0x80000000}};
  // 4424981814422012820
  s21_decimal dec_check = {{0x2300394, 0x3d68b184, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_237) {
  // 0.3
  s21_decimal dec_1 = {{0x3, 0x0, 0x0, 0x10000}};
  // 0.2457026595
  s21_decimal dec_2 = {{0x92734023, 0x0, 0x0, 0xa0000}};
  // 0.0542973405
  s21_decimal dec_check = {{0x205d1ddd, 0x0, 0x0, 0xa0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_238) {
  // -4685.587663405723298633160
  s21_decimal dec_1 = {{0x979915c8, 0x37590019, 0x3e036, 0x80150000}};
  // -4
  s21_decimal dec_2 = {{0x4, 0x0, 0x0, 0x80000000}};
  // -4681.587663405723298633160
  s21_decimal dec_check = {{0x1d1915c8, 0x60324902, 0x3df5d, 0x80150000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_239) {
  // -2537007482595518409608012
  s21_decimal dec_1 = {{0x5c0b4c, 0x7382a2e6, 0x2193b, 0x80000000}};
  // 3970357849485
  s21_decimal dec_2 = {{0x6bc4ed8d, 0x39c, 0x0, 0x0}};
  // -2537007482599488767457497
  s21_decimal dec_check = {{0x6c20f8d9, 0x7382a682, 0x2193b, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_240) {
  // -819874128593676
  s21_decimal dec_1 = {{0xd232030c, 0x2e9ab, 0x0, 0x80000000}};
  // 62255124586980
  s21_decimal dec_2 = {{0xe69621e4, 0x389e, 0x0, 0x0}};
  // -882129253180656
  s21_decimal dec_check = {{0xb8c824f0, 0x3224a, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_241) {
  // -62.47298964192
  s21_decimal dec_1 = {{0x90091ae0, 0x5ae, 0x0, 0x800b0000}};
  // 414973871
  s21_decimal dec_2 = {{0x18bbffaf, 0x0, 0x0, 0x0}};
  // -414973933.47298964192
  s21_decimal dec_check = {{0x269b2e0, 0x3fe45b63, 0x2, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_242) {
  // -225604.76674637973057731671
  s21_decimal dec_1 = {{0x92087c57, 0xe4223ef7, 0x12a95d, 0x80140000}};
  // -93647
  s21_decimal dec_2 = {{0x16dcf, 0x0, 0x0, 0x80000000}};
  // -131957.76674637973057731671
  s21_decimal dec_check = {{0xa8187c57, 0x7ca66206, 0xaea50, 0x80140000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_243) {
  // -7796025596
  s21_decimal dec_1 = {{0xd0ade8fc, 0x1, 0x0, 0x80000000}};
  // -6936959.488645840376
  s21_decimal dec_2 = {{0xbe02bdf8, 0x604507e6, 0x0, 0x800c0000}};
  // -7789088636.511354159624
  s21_decimal dec_check = {{0xfaf90208, 0x3f51be8b, 0x1a6, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_244) {
  // -192
  s21_decimal dec_1 = {{0xc0, 0x0, 0x0, 0x80000000}};
  // 1438864857.98028188178248
  s21_decimal dec_2 = {{0x4635d748, 0x1a1e4a08, 0x1e78, 0xe0000}};
  // -1438865049.98028188178248
  s21_decimal dec_check = {{0xa1e5d748, 0x1a628054, 0x1e78, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_245) {
  // 48090918141463128.68047
  s21_decimal dec_1 = {{0x3dd990cf, 0xb38e454e, 0x104, 0x50000}};
  // 0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
  // 48090918141463128.68047
  s21_decimal dec_check = {{0x3dd990cf, 0xb38e454e, 0x104, 0x50000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_246) {
  // -217556145963.74759213
  s21_decimal dec_1 = {{0x8f38872d, 0x2deb7835, 0x1, 0x80080000}};
  // -566991607832.69730332
  s21_decimal dec_2 = {{0xcd8d181c, 0x12dbe253, 0x3, 0x80080000}};
  // 349435461868.94971119
  s21_decimal dec_check = {{0x3e5490ef, 0xe4f06a1e, 0x1, 0x80000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_249) {
  // 18111553221933088
  s21_decimal dec_1 = {{0x981fb820, 0x40585c, 0x0, 0x0}};
  // 9450950
  s21_decimal dec_2 = {{0x9035c6, 0x0, 0x0, 0x0}};
  // 18111553212482138
  s21_decimal dec_check = {{0x978f825a, 0x40585c, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_250) {
  // -366870001.047
  s21_decimal dec_1 = {{0x6b27f597, 0x55, 0x0, 0x80030000}};
  // -9650034.46593
  s21_decimal dec_2 = {{0xaeb00941, 0xe0, 0x0, 0x80050000}};
  // -357219966.58107
  s21_decimal dec_check = {{0x2cebe5bb, 0x207d, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_251) {
  // -357835356.4
  s21_decimal dec_1 = {{0xd549579c, 0x0, 0x0, 0x80010000}};
  // 738640.9
  s21_decimal dec_2 = {{0x70b529, 0x0, 0x0, 0x10000}};
  // -358573997.3
  s21_decimal dec_check = {{0xd5ba0cc5, 0x0, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_253) {
  // -7343210934317048575.8970662115
  s21_decimal dec_1 = {{0xe7d18ce3, 0xbfda37, 0xed459e00, 0x800a0000}};
  // 68492143370334989
  s21_decimal dec_2 = {{0xd37e730d, 0xf3553d, 0x0, 0x0}};
  // -7411703077687383564.8970662115
  s21_decimal dec_check = {{0xbbd820e3, 0x52b564dd, 0xef7c2bc1, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_254) {
  // -350
  s21_decimal dec_1 = {{0x15e, 0x0, 0x0, 0x80000000}};
  // -16155
  s21_decimal dec_2 = {{0x3f1b, 0x0, 0x0, 0x80000000}};
  // 15805
  s21_decimal dec_check = {{0x3dbd, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_255) {
  // -3919
  s21_decimal dec_1 = {{0xf4f, 0x0, 0x0, 0x80000000}};
  // 979
  s21_decimal dec_2 = {{0x3d3, 0x0, 0x0, 0x0}};
  // -4898
  s21_decimal dec_check = {{0x1322, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_256) {
  // -10126448065
  s21_decimal dec_1 = {{0x5b9555c1, 0x2, 0x0, 0x80000000}};
  // -7171215016896
  s21_decimal dec_2 = {{0xadb943c0, 0x685, 0x0, 0x80000000}};
  // 7161088568831
  s21_decimal dec_check = {{0x5223edff, 0x683, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_257) {
  // -289155041094199381149
  s21_decimal dec_1 = {{0xb93b8c9d, 0xacd511dd, 0xf, 0x80000000}};
  // -517041492906659
  s21_decimal dec_2 = {{0x1a84d2a3, 0x1d63f, 0x0, 0x80000000}};
  // -289154524052706474490
  s21_decimal dec_check = {{0x9eb6b9fa, 0xacd33b9e, 0xf, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_258) {
  // -738972424436312018600079
  s21_decimal dec_1 = {{0x1095408f, 0xc6808d1f, 0x9c7b, 0x80000000}};
  // -64745800945640
  s21_decimal dec_2 = {{0xce774fe8, 0x3ae2, 0x0, 0x80000000}};
  // -738972424371566217654439
  s21_decimal dec_check = {{0x421df0a7, 0xc680523c, 0x9c7b, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_259) {
  // 62774
  s21_decimal dec_1 = {{0xf536, 0x0, 0x0, 0x0}};
  // 38513576451907642694162500
  s21_decimal dec_2 = {{0xf7b1d844, 0x29b8389c, 0x1fdb91, 0x0}};
  // -38513576451907642694099726
  s21_decimal dec_check = {{0xf7b0e30e, 0x29b8389c, 0x1fdb91, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_260) {
  // -73
  s21_decimal dec_1 = {{0x49, 0x0, 0x0, 0x80000000}};
  // -337789035
  s21_decimal dec_2 = {{0x1422406b, 0x0, 0x0, 0x80000000}};
  // 337788962
  s21_decimal dec_check = {{0x14224022, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_261) {
  // -1286384644940726
  s21_decimal dec_1 = {{0xc3ce63b6, 0x491f5, 0x0, 0x80000000}};
  // -8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x80000000}};
  // -1286384644940718
  s21_decimal dec_check = {{0xc3ce63ae, 0x491f5, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_262) {
  // -4189.0815641482962874172
  s21_decimal dec_1 = {{0x115b2f3c, 0xe7d9bee0, 0x8de, 0x80130000}};
  // -0.4520836137185
  s21_decimal dec_2 = {{0x96d500e1, 0x41c, 0x0, 0x800d0000}};
  // -4188.6294805345777874172
  s21_decimal dec_check = {{0x64b1f4fc, 0xa91c825c, 0x8de, 0x80130000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_263) {
  // -3938496582.6833419649593280
  s21_decimal dec_1 = {{0xbd96afc0, 0x469014d4, 0x209417, 0x80100000}};
  // -7735033
  s21_decimal dec_2 = {{0x7606f9, 0x0, 0x0, 0x80000000}};
  // -3930761549.6833419649593280
  s21_decimal dec_check = {{0x84ddafc0, 0x1b18a171, 0x2083b6, 0x80100000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_264) {
  // 56935984346391193
  s21_decimal dec_1 = {{0xe1e76299, 0xca46f9, 0x0, 0x0}};
  // -7853.7220
  s21_decimal dec_2 = {{0x4ae6204, 0x0, 0x0, 0x80040000}};
  // 56935984346399046.7220
  s21_decimal dec_check = {{0x6329da94, 0xdd748108, 0x1e, 0x40000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_265) {
  // 48229208459157162013577
  s21_decimal dec_1 = {{0x3745b389, 0x82b89c4e, 0xa36, 0x0}};
  // 49396912081135
  s21_decimal dec_2 = {{0x1d65c8ef, 0x2ced, 0x0, 0x0}};
  // 48229208409760249932442
  s21_decimal dec_check = {{0x19dfea9a, 0x82b86f61, 0xa36, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_266) {
  // 1
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x0}};
  // 99058
  s21_decimal dec_2 = {{0x182f2, 0x0, 0x0, 0x0}};
  // -99057
  s21_decimal dec_check = {{0x182f1, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_267) {
  // -8578824045849
  s21_decimal dec_1 = {{0x69c28519, 0x7cd, 0x0, 0x80000000}};
  // 2484427099954181263
  s21_decimal dec_2 = {{0xcb1f748f, 0x227a7548, 0x0, 0x0}};
  // -2484435678778227112
  s21_decimal dec_check = {{0x34e1f9a8, 0x227a7d16, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_268) {
  // 9066467749.450
  s21_decimal dec_1 = {{0xf396ee4a, 0x83e, 0x0, 0x30000}};
  // 228166029987
  s21_decimal dec_2 = {{0x1fc152a3, 0x35, 0x0, 0x0}};
  // -219099562237.550
  s21_decimal dec_check = {{0x1793de6e, 0xc745, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_269) {
  // 54049344491626.2
  s21_decimal dec_1 = {{0x6fc9a426, 0x1eb93, 0x0, 0x10000}};
  // -8155666684120620
  s21_decimal dec_2 = {{0x1f9d0e2c, 0x1cf989, 0x0, 0x80000000}};
  // 8209716028612246.2
  s21_decimal dec_check = {{0xabec31de, 0x123aaee, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_270) {
  // 6040062
  s21_decimal dec_1 = {{0x5c29fe, 0x0, 0x0, 0x0}};
  // 0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
  // 6040062
  s21_decimal dec_check = {{0x5c29fe, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_271) {
  // 83425941
  s21_decimal dec_1 = {{0x4f8fa95, 0x0, 0x0, 0x0}};
  // 4432779408073511699
  s21_decimal dec_2 = {{0xc1e35313, 0x3d846562, 0x0, 0x0}};
  // -4432779407990085758
  s21_decimal dec_check = {{0xbcea587e, 0x3d846562, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_272) {
  // 5.83871
  s21_decimal dec_1 = {{0x8e8bf, 0x0, 0x0, 0x50000}};
  // -1216446572617
  s21_decimal dec_2 = {{0x39dda849, 0x11b, 0x0, 0x80000000}};
  // 1216446572622.83871
  s21_decimal dec_check = {{0xd8f14c5f, 0x1b02b2b, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_273) {
  // -19064148959910114.233912726
  s21_decimal dec_1 = {{0x20078d96, 0x96009021, 0xfc4fd, 0x80090000}};
  // 8.3318086
  s21_decimal dec_2 = {{0x4f75546, 0x0, 0x0, 0x70000}};
  // -19064148959910122.565721326
  s21_decimal dec_check = {{0x10a4dcee, 0x96009023, 0xfc4fd, 0x80090000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_274) {
  // 70867193778305787051182717
  s21_decimal dec_1 = {{0x8c150a7d, 0x45ca6489, 0x3a9eb6, 0x0}};
  // 0.91247798574038223376344907
  s21_decimal dec_2 = {{0xd8efe74b, 0x128a6b1e, 0x4b7a79, 0x1a0000}};
  // 70867193778305787051182716.088
  s21_decimal dec_check = {{0x3230f4b8, 0x9e98b94b, 0xe4fbf800, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_276) {
  // 48612317.41091844098
  s21_decimal dec_1 = {{0x3aa21002, 0x43769083, 0x0, 0xb0000}};
  // 24027443987255809748
  s21_decimal dec_2 = {{0xe8fa56d4, 0x4d72a100, 0x1, 0x0}};
  // -24027443987207197430.589081559
  s21_decimal dec_check = {{0x790ec7d7, 0x829bdbcb, 0x4da3092c, 0x80090000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_277) {
  // 399094655
  s21_decimal dec_1 = {{0x17c9b37f, 0x0, 0x0, 0x0}};
  // -1443607478893
  s21_decimal dec_2 = {{0x1db6026d, 0x150, 0x0, 0x80000000}};
  // 1444006573548
  s21_decimal dec_check = {{0x357fb5ec, 0x150, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_278) {
  // 8076537773169028697.7325430
  s21_decimal dec_1 = {{0x8f471976, 0xe660dd8e, 0x42cebb, 0x70000}};
  // -38802231574568869.5
  s21_decimal dec_2 = {{0x86f23c77, 0x562883d, 0x0, 0x80010000}};
  // 8115340004743597567.2325430
  s21_decimal dec_check = {{0x4a65e536, 0xa1bdb1ec, 0x4320e6, 0x70000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_280) {
  // 58.253503
  s21_decimal dec_1 = {{0x378e0bf, 0x0, 0x0, 0x60000}};
  // -4420249137659628461193
  s21_decimal dec_2 = {{0xc0e39c89, 0x9f479337, 0xef, 0x80000000}};
  // 4420249137659628461251.253503
  s21_decimal dec_check = {{0x16c254ff, 0xe61d7b01, 0xe485829, 0x60000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_281) {
  // -6621303397521
  s21_decimal dec_1 = {{0xa46fdc91, 0x605, 0x0, 0x80000000}};
  // -332889.449940422484306973
  s21_decimal dec_2 = {{0x2e082c1d, 0xf92654eb, 0x467d, 0x80120000}};
  // -6621303064631.5500595775156930
  s21_decimal dec_check = {{0xbb232c2, 0xade1da12, 0xd5f2229f, 0x80100000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_282) {
  // -179508
  s21_decimal dec_1 = {{0x2bd34, 0x0, 0x0, 0x80000000}};
  // -904240913329203720
  s21_decimal dec_2 = {{0xde5caa08, 0xc8c8251, 0x0, 0x80000000}};
  // 904240913329024212
  s21_decimal dec_check = {{0xde59ecd4, 0xc8c8251, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_283) {
  // 71573.6380192667944333560
  s21_decimal dec_1 = {{0x9f67b0f8, 0x259c535d, 0x9790, 0x130000}};
  // -3812.7889965088
  s21_decimal dec_2 = {{0x57566020, 0x22ad, 0x0, 0x800a0000}};
  // 75386.4270157755944333560
  s21_decimal dec_check = {{0xfa80f0f8, 0x10608c64, 0x9fa3, 0x130000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_284) {
  // -3615175415891142623943210848
  s21_decimal dec_1 = {{0xc1d43760, 0xfdc3c092, 0xbae672b, 0x80000000}};
  // 25988996765231975634331379
  s21_decimal dec_2 = {{0x9a0466f3, 0x56722440, 0x157f62, 0x0}};
  // -3641164412656374599577542227
  s21_decimal dec_check = {{0x5bd89e53, 0x5435e4d3, 0xbc3e68e, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_285) {
  // 69967
  s21_decimal dec_1 = {{0x1114f, 0x0, 0x0, 0x0}};
  // 7923503165
  s21_decimal dec_2 = {{0xd847103d, 0x1, 0x0, 0x0}};
  // -7923433198
  s21_decimal dec_check = {{0xd845feee, 0x1, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_286) {
  // 10328.75508308433564343620390
  s21_decimal dec_1 = {{0x6ed25326, 0x80316472, 0x3565fe5, 0x170000}};
  // 1152151497606.362915
  s21_decimal dec_2 = {{0xc642f723, 0xffd43ae, 0x0, 0x60000}};
  // -1152151487277.6078319156643566
  s21_decimal dec_check = {{0x5e16c6ee, 0xc4f6fc94, 0x253a5fac, 0x80100000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_287) {
  // 89729298995724571
  s21_decimal dec_1 = {{0x7095c11b, 0x13ec852, 0x0, 0x0}};
  // -41343422754166
  s21_decimal dec_2 = {{0x406ed76, 0x259a, 0x0, 0x80000000}};
  // 89770642418478737
  s21_decimal dec_check = {{0x749cae91, 0x13eedec, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_288) {
  // 3911269591343988683981
  s21_decimal dec_1 = {{0x6db334cd, 0x7c4fa88, 0xd4, 0x0}};
  // -30312460824.98693809
  s21_decimal dec_2 = {{0x76210ab1, 0x2a112640, 0x0, 0x80080000}};
  // 3911269591374301144805.9869381
  s21_decimal dec_check = {{0xd9ac38c5, 0x127f411e, 0x7e614386, 0x70000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_289) {
  // -15091019544489
  s21_decimal dec_1 = {{0xa6dbf7a9, 0xdb9, 0x0, 0x80000000}};
  // 33156708756.3476750
  s21_decimal dec_2 = {{0x696e8f0e, 0x499f682, 0x0, 0x70000}};
  // -15124176253245.3476750
  s21_decimal dec_check = {{0xc6df698e, 0x32e6adb5, 0x8, 0x80070000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_290) {
  // -2469
  s21_decimal dec_1 = {{0x9a5, 0x0, 0x0, 0x80000000}};
  // -68.728029900779
  s21_decimal dec_2 = {{0xfdceefeb, 0x3e81, 0x0, 0x800c0000}};
  // -2400.271970099221
  s21_decimal dec_check = {{0xde246015, 0x88708, 0x0, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_291) {
  // -3092648811458582069869
  s21_decimal dec_1 = {{0x46ccc26d, 0xa71fbc77, 0xa7, 0x80000000}};
  // 8659592858
  s21_decimal dec_2 = {{0x426e69a, 0x2, 0x0, 0x0}};
  // -3092648811467241662727
  s21_decimal dec_check = {{0x4af3a907, 0xa71fbc79, 0xa7, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_292) {
  // 84257763092.9
  s21_decimal dec_1 = {{0x2d8a56d1, 0xc4, 0x0, 0x10000}};
  // 4
  s21_decimal dec_2 = {{0x4, 0x0, 0x0, 0x0}};
  // 84257763088.9
  s21_decimal dec_check = {{0x2d8a56a9, 0xc4, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_294) {
  // 19
  s21_decimal dec_1 = {{0x13, 0x0, 0x0, 0x0}};
  // 835.249177
  s21_decimal dec_2 = {{0x31c8e419, 0x0, 0x0, 0x60000}};
  // -816.249177
  s21_decimal dec_check = {{0x30a6f959, 0x0, 0x0, 0x80060000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_295) {
  // 67795319303774147
  s21_decimal dec_1 = {{0xd4891fc3, 0xf0db7b, 0x0, 0x0}};
  // 7911286679
  s21_decimal dec_2 = {{0xd78ca797, 0x1, 0x0, 0x0}};
  // 67795311392487468
  s21_decimal dec_check = {{0xfcfc782c, 0xf0db79, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_296) {
  // 1694250
  s21_decimal dec_1 = {{0x19da2a, 0x0, 0x0, 0x0}};
  // -743386268785852169551
  s21_decimal dec_2 = {{0xdbc63d4f, 0x4c8e90d4, 0x28, 0x80000000}};
  // 743386268785853863801
  s21_decimal dec_check = {{0xdbe01779, 0x4c8e90d4, 0x28, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_297) {
  // 9335577616305246
  s21_decimal dec_1 = {{0x8b97cc5e, 0x212aa8, 0x0, 0x0}};
  // -575612532
  s21_decimal dec_2 = {{0x224f2674, 0x0, 0x0, 0x80000000}};
  // 9335578191917778
  s21_decimal dec_check = {{0xade6f2d2, 0x212aa8, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_298) {
  // 48
  s21_decimal dec_1 = {{0x30, 0x0, 0x0, 0x0}};
  // 16623539377819997774116466.951
  s21_decimal dec_2 = {{0x16f6b107, 0x643bdfe8, 0x35b6ab63, 0x30000}};
  // -16623539377819997774116418.951
  s21_decimal dec_check = {{0x16f5f587, 0x643bdfe8, 0x35b6ab63, 0x80030000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_299) {
  // 760397258357169481593281836
  s21_decimal dec_1 = {{0x33e25d2c, 0xf91fea1f, 0x274fc61, 0x0}};
  // 4456203855289020099992118070
  s21_decimal dec_2 = {{0xe8d66336, 0xc10d465, 0xe6615df, 0x0}};
  // -3695806596931850618398836234
  s21_decimal dec_check = {{0xb4f4060a, 0x12f0ea46, 0xbf1197d, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_300) {
  // -1.993382797286
  s21_decimal dec_1 = {{0x1edf9fe6, 0x1d0, 0x0, 0x800c0000}};
  // 11417302.8822497529
  s21_decimal dec_2 = {{0xc9e538f9, 0x1959fc3, 0x0, 0xa0000}};
  // -11417304.875632550186
  s21_decimal dec_check = {{0xfc69e12a, 0x9e726a4a, 0x0, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_301) {
  // 79228162514264337592452589960
  s21_decimal dec_1 = {{0xbef32988, 0xffffffff, 0xffffffff, 0x0}};
  // 1052796079455784879598
  s21_decimal dec_2 = {{0xf5fb45ee, 0x127b084f, 0x39, 0x0}};
  // 79228161461468258136667710362
  s21_decimal dec_check = {{0xc8f7e39a, 0xed84f7af, 0xffffffc6, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_302) {
  // -3946063638489493467708625
  s21_decimal dec_1 = {{0x7ad23cd1, 0x89d9e0ff, 0x3439c, 0x80000000}};
  // -7.01040337788660
  s21_decimal dec_2 = {{0xac4e9ef4, 0x27d97, 0x0, 0x800e0000}};
  // -3946063638489493467708617.9896
  s21_decimal dec_check = {{0xb4669238, 0xcee4fbad, 0x7f8112c8, 0x80040000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_303) {
  // 582268789808226204984394
  s21_decimal dec_1 = {{0x811244a, 0xdab64a51, 0x7b4c, 0x0}};
  // 1062.6265298095
  s21_decimal dec_2 = {{0x1ec4b4af, 0x9aa, 0x0, 0xa0000}};
  // 582268789808226204983331.37347
  s21_decimal dec_check = {{0x21a9f9c3, 0x6725e4ef, 0xbc24253a, 0x50000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_304) {
  // 2168416
  s21_decimal dec_1 = {{0x211660, 0x0, 0x0, 0x0}};
  // -6
  s21_decimal dec_2 = {{0x6, 0x0, 0x0, 0x80000000}};
  // 2168422
  s21_decimal dec_check = {{0x211666, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_305) {
  // -8695521440712337349227.24233
  s21_decimal dec_1 = {{0x1057e389, 0x2f402d0e, 0x2cf46d4, 0x80050000}};
  // 276615717049
  s21_decimal dec_2 = {{0x6794e0b9, 0x40, 0x0, 0x0}};
  // -8695521440988953066276.24233
  s21_decimal dec_check = {{0x9bbe2d29, 0x2fa2731b, 0x2cf46d4, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_306) {
  // 4196128190
  s21_decimal dec_1 = {{0xfa1bd5be, 0x0, 0x0, 0x0}};
  // -80121791948952
  s21_decimal dec_2 = {{0xcef2a898, 0x48de, 0x0, 0x80000000}};
  // 80125988077142
  s21_decimal dec_check = {{0xc90e7e56, 0x48df, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_307) {
  // 3.08925130
  s21_decimal dec_1 = {{0x1269d2ca, 0x0, 0x0, 0x80000}};
  // 53667
  s21_decimal dec_2 = {{0xd1a3, 0x0, 0x0, 0x0}};
  // -53663.91074870
  s21_decimal dec_check = {{0x75d57036, 0x4e1, 0x0, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_308) {
  // 3512914335640224085009
  s21_decimal dec_1 = {{0x4e93411, 0x6f7ad00c, 0xbe, 0x0}};
  // -581727.1820
  s21_decimal dec_2 = {{0x5abc860c, 0x1, 0x0, 0x80040000}};
  // 3512914335640224666736.1820
  s21_decimal dec_check = {{0x303e5e1c, 0xad5ed581, 0x1d0ee2, 0x40000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_309) {
  // -14251968792150.7321589026
  s21_decimal dec_1 = {{0x2dbd2d22, 0x1fcc6f1, 0x1e2e, 0x800a0000}};
  // 4800.697843571581418018
  s21_decimal dec_2 = {{0x83e67a22, 0x3f10e58a, 0x104, 0x120000}};
  // -14251968796951.430002474181418
  s21_decimal dec_check = {{0xb10f632a, 0x97af43ab, 0x2e0cf3c8, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_310) {
  // -855818007859137617
  s21_decimal dec_1 = {{0x9ed38c51, 0xbe079f1, 0x0, 0x80000000}};
  // 3245001901694895068366455850
  s21_decimal dec_2 = {{0xd8bb442a, 0x93ad1795, 0xa7c33e1, 0x0}};
  // -3245001902550713076225593467
  s21_decimal dec_check = {{0x778ed07b, 0x9f8d9187, 0xa7c33e1, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_311) {
  // 31
  s21_decimal dec_1 = {{0x1f, 0x0, 0x0, 0x0}};
  // -2738103866505.48995602978083
  s21_decimal dec_2 = {{0xdbef1523, 0xcd830f3a, 0xe27d9a, 0x800e0000}};
  // 2738103866536.48995602978083
  s21_decimal dec_check = {{0xdabcd523, 0xcd8e12a9, 0xe27d9a, 0xe0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_312) {
  // -5640013.305063132277493396
  s21_decimal dec_1 = {{0xa68bce94, 0xbbe183bd, 0x4aa51, 0x80120000}};
  // -44039033.73779
  s21_decimal dec_2 = {{0x5d18a1d3, 0x401, 0x0, 0x80050000}};
  // 38399020.432726867722506604
  s21_decimal dec_check = {{0x188e116c, 0x1197e380, 0x1fc34f, 0x120000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_313) {
  // -247761591614326763604158.0
  s21_decimal dec_1 = {{0xe22bd76c, 0xd3f41894, 0x20ca7, 0x80010000}};
  // 60311836.5
  s21_decimal dec_2 = {{0x23f2db1d, 0x0, 0x0, 0x10000}};
  // -247761591614326823915994.5
  s21_decimal dec_check = {{0x61eb289, 0xd3f41895, 0x20ca7, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_314) {
  // 910323938
  s21_decimal dec_1 = {{0x364270e2, 0x0, 0x0, 0x0}};
  // 959249854912
  s21_decimal dec_2 = {{0x57bf31c0, 0xdf, 0x0, 0x0}};
  // -958339530974
  s21_decimal dec_check = {{0x217cc0de, 0xdf, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_315) {
  // -20
  s21_decimal dec_1 = {{0x14, 0x0, 0x0, 0x80000000}};
  // -301
  s21_decimal dec_2 = {{0x12d, 0x0, 0x0, 0x80000000}};
  // 281
  s21_decimal dec_check = {{0x119, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_316) {
  // -88004544149341189618604
  s21_decimal dec_1 = {{0x7eeebbac, 0xbc63cbc4, 0x12a2, 0x80000000}};
  // 5031994
  s21_decimal dec_2 = {{0x4cc83a, 0x0, 0x0, 0x0}};
  // -88004544149341194650598
  s21_decimal dec_check = {{0x7f3b83e6, 0xbc63cbc4, 0x12a2, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_317) {
  // 3031009
  s21_decimal dec_1 = {{0x2e3fe1, 0x0, 0x0, 0x0}};
  // -757201549
  s21_decimal dec_2 = {{0x2d21fa8d, 0x0, 0x0, 0x80000000}};
  // 760232558
  s21_decimal dec_check = {{0x2d503a6e, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_318) {
  // -4678881376716019
  s21_decimal dec_1 = {{0xf667c4f3, 0x109f6a, 0x0, 0x80000000}};
  // 817.5585249282563002
  s21_decimal dec_2 = {{0xd6691bba, 0x71758377, 0x0, 0x100000}};
  // -4678881376716836.5585249282563
  s21_decimal dec_check = {{0x5feb2a03, 0xb81c3fa7, 0x972eccb4, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_319) {
  // 730456888520
  s21_decimal dec_1 = {{0x129f94c8, 0xaa, 0x0, 0x0}};
  // -0.6604112267212513508137
  s21_decimal dec_2 = {{0x817a7b29, 0x277fcf1, 0x166, 0x80160000}};
  // 730456888520.66041122672125135
  s21_decimal dec_check = {{0xf540a4cf, 0x349c48df, 0xec05fa47, 0x110000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_320) {
  // 3651014333091452293
  s21_decimal dec_1 = {{0x29c69585, 0x32ab0231, 0x0, 0x0}};
  // -331648016854
  s21_decimal dec_2 = {{0x37c321d6, 0x4d, 0x0, 0x80000000}};
  // 3651014664739469147
  s21_decimal dec_check = {{0x6189b75b, 0x32ab027e, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_321) {
  // 7057302119514942001123306
  s21_decimal dec_1 = {{0x4fec0fea, 0x1d4f6db2, 0x5d671, 0x0}};
  // 7598.9
  s21_decimal dec_2 = {{0x128d5, 0x0, 0x0, 0x10000}};
  // 7057302119514942001115707.1
  s21_decimal dec_check = {{0x1f37764f, 0x251a48f7, 0x3a606b, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_322) {
  // 52136133114712165835
  s21_decimal dec_1 = {{0xb8e60dcb, 0xd388c0d6, 0x2, 0x0}};
  // -0.152445593824518609432189
  s21_decimal dec_2 = {{0xa75ee7d, 0x179a7407, 0x2048, 0x80180000}};
  // 52136133114712165835.152445594
  s21_decimal dec_check = {{0xa516509a, 0x65f1ad77, 0xa875ff9f, 0x90000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_323) {
  // 6.4022757772671326977921
  s21_decimal dec_1 = {{0xd9897f81, 0xae3f4b22, 0xd8e, 0x160000}};
  // -28.544
  s21_decimal dec_2 = {{0x6f80, 0x0, 0x0, 0x80030000}};
  // 34.9462757772671326977921
  s21_decimal dec_check = {{0x65897f81, 0x69ffc533, 0x4a00, 0x160000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_324) {
  // -4928118432564210
  s21_decimal dec_1 = {{0xfc9583f2, 0x118218, 0x0, 0x80000000}};
  // -7.6
  s21_decimal dec_2 = {{0x4c, 0x0, 0x0, 0x80010000}};
  // -4928118432564202.4
  s21_decimal dec_check = {{0xddd72728, 0xaf14f9, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_325) {
  // -794943090297531.71
  s21_decimal dec_1 = {{0x23623153, 0x11a6ba7, 0x0, 0x80020000}};
  // -895368283.3212939614
  s21_decimal dec_2 = {{0x212b9d5e, 0x7c41df19, 0x0, 0x800a0000}};
  // -794942194929248.3887060386
  s21_decimal dec_check = {{0xff9d55a2, 0x701ceef, 0x6935b, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_326) {
  // -6718105185488259165
  s21_decimal dec_1 = {{0x78bcc85d, 0x5d3b8112, 0x0, 0x80000000}};
  // -495822
  s21_decimal dec_2 = {{0x790ce, 0x0, 0x0, 0x80000000}};
  // -6718105185487763343
  s21_decimal dec_check = {{0x78b5378f, 0x5d3b8112, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_327) {
  // 172573810312364.19723822339
  s21_decimal dec_1 = {{0x5258503, 0x8011f228, 0xe4664, 0xb0000}};
  // -6296936439343474190.9843905315
  s21_decimal dec_2 = {{0xce3c8b23, 0xc508d0d1, 0xcb770993, 0x800a0000}};
  // 6297109013153786555.1816287549
  s21_decimal dec_check = {{0x6859e53d, 0x383dcf6f, 0xcb787704, 0xa0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_328) {
  // -236572203784
  s21_decimal dec_1 = {{0x14cd5b08, 0x37, 0x0, 0x80000000}};
  // 83422154329006
  s21_decimal dec_2 = {{0x3be00bae, 0x4bdf, 0x0, 0x0}};
  // -83658726532790
  s21_decimal dec_check = {{0x50ad66b6, 0x4c16, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_329) {
  // -5587859625462266010645080.1
  s21_decimal dec_1 = {{0xabf8f771, 0xc5d1f7e6, 0x2e38c0, 0x80010000}};
  // 61928199306496681690384018646
  s21_decimal dec_2 = {{0xb5afacd6, 0x4f9a74d6, 0xc819ce4b, 0x0}};
  // -61933787166122143956394663726
  s21_decimal dec_check = {{0xfa155f2e, 0xc9c90da0, 0xc81e6d91, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_330) {
  // 59
  s21_decimal dec_1 = {{0x3b, 0x0, 0x0, 0x0}};
  // 492760.47086557823
  s21_decimal dec_2 = {{0xc2879a7f, 0xaf104d, 0x0, 0xb0000}};
  // -492701.47086557823
  s21_decimal dec_check = {{0xf20227f, 0xaf0af0, 0x0, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_331) {
  // -110424.808801002021908114544
  s21_decimal dec_1 = {{0x8ed3ec70, 0xe1423ff4, 0x5b575c, 0x80150000}};
  // 3089725760260.2674014554
  s21_decimal dec_2 = {{0x65bdc95a, 0xf195b8e1, 0x68a, 0xa0000}};
  // -3089725870685.0762024574219081
  s21_decimal dec_check = {{0x172b7349, 0xb0d29430, 0x63d59d06, 0x80100000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_332) {
  // 526169.196
  s21_decimal dec_1 = {{0x1f5cb46c, 0x0, 0x0, 0x30000}};
  // 8778629918939016209045
  s21_decimal dec_2 = {{0xb0422295, 0xe3f69819, 0x1db, 0x0}};
  // -8778629918939015682875.804
  s21_decimal dec_check = {{0x62fa619c, 0x7b422458, 0x742f2, 0x80030000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_333) {
  // -6115639337978
  s21_decimal dec_1 = {{0xe882a3fa, 0x58f, 0x0, 0x80000000}};
  // 0.53907
  s21_decimal dec_2 = {{0xd293, 0x0, 0x0, 0x50000}};
  // -6115639337978.53907
  s21_decimal dec_check = {{0x57762ad3, 0x87cb628, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_334) {
  // 5310.7
  s21_decimal dec_1 = {{0xcf73, 0x0, 0x0, 0x10000}};
  // -7711299147.1
  s21_decimal dec_2 = {{0xf44adeef, 0x11, 0x0, 0x80010000}};
  // 7711304457.8
  s21_decimal dec_check = {{0xf44bae62, 0x11, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_335) {
  // 222091983721997826669485786
  s21_decimal dec_1 = {{0x35191eda, 0x8fe91472, 0xb7b5ce, 0x0}};
  // 681100988695314810168428
  s21_decimal dec_2 = {{0x210a646c, 0x8eff2eb1, 0x903a, 0x0}};
  // 221410882733302511859317358
  s21_decimal dec_check = {{0x140eba6e, 0xe9e5c1, 0xb72594, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_336) {
  // 596253
  s21_decimal dec_1 = {{0x9191d, 0x0, 0x0, 0x0}};
  // -9757
  s21_decimal dec_2 = {{0x261d, 0x0, 0x0, 0x80000000}};
  // 606010
  s21_decimal dec_check = {{0x93f3a, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_337) {
  // 936514791
  s21_decimal dec_1 = {{0x37d214e7, 0x0, 0x0, 0x0}};
  // -78418983290238967017.268836252
  s21_decimal dec_2 = {{0x7afff79c, 0x5e7be419, 0xfd62a9a2, 0x80090000}};
  // 78418983291175481808.268836252
  s21_decimal dec_check = {{0xf743d9c, 0x6b7b0f57, 0xfd62a9a2, 0x90000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_338) {
  // -0.139047
  s21_decimal dec_1 = {{0x21f27, 0x0, 0x0, 0x80060000}};
  // -6154275315
  s21_decimal dec_2 = {{0x6ed2c9f3, 0x1, 0x0, 0x80000000}};
  // 6154275314.860953
  s21_decimal dec_check = {{0xe1fe0399, 0x15dd47, 0x0, 0x60000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_339) {
  // 381
  s21_decimal dec_1 = {{0x17d, 0x0, 0x0, 0x0}};
  // 52011051.2864
  s21_decimal dec_2 = {{0x19009ae0, 0x79, 0x0, 0x40000}};
  // -52010670.2864
  s21_decimal dec_check = {{0x18c67810, 0x79, 0x0, 0x80040000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_340) {
  // 1.131575870271302608963798
  s21_decimal dec_1 = {{0x10b548d6, 0xd9d0e9d7, 0xef9e, 0x180000}};
  // 61344670071116
  s21_decimal dec_2 = {{0xeb44b94c, 0x37ca, 0x0, 0x0}};
  // -61344670071114.868424129728697
  s21_decimal dec_check = {{0xd3a550b9, 0x13517dbc, 0xc6371f2c, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_341) {
  // -0.5
  s21_decimal dec_1 = {{0x5, 0x0, 0x0, 0x80010000}};
  // -261937951
  s21_decimal dec_2 = {{0xf9cdb1f, 0x0, 0x0, 0x80000000}};
  // 261937950.5
  s21_decimal dec_check = {{0x9c208f31, 0x0, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_342) {
  // -1048567220
  s21_decimal dec_1 = {{0x3e7fddb4, 0x0, 0x0, 0x80000000}};
  // 64312280997071266835189492
  s21_decimal dec_2 = {{0x7bd5cef4, 0xbd1d2817, 0x3532a7, 0x0}};
  // -64312280997071267883756712
  s21_decimal dec_check = {{0xba55aca8, 0xbd1d2817, 0x3532a7, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_343) {
  // 824292
  s21_decimal dec_1 = {{0xc93e4, 0x0, 0x0, 0x0}};
  // -9302103.96736210714549405
  s21_decimal dec_2 = {{0x5e74dc9d, 0xce80a5ad, 0xc4fa, 0x80110000}};
  // 10126395.96736210714549405
  s21_decimal dec_check = {{0xeb5cdc9d, 0x4d73050e, 0xd66f, 0x110000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_344) {
  // -191.2594026111809394559585092
  s21_decimal dec_1 = {{0x54ae8b44, 0xe8df8c35, 0x62e0f89, 0x80190000}};
  // -4563934140.96162287582754
  s21_decimal dec_2 = {{0x8584fe22, 0x22f52c84, 0x60a5, 0x800e0000}};
  // 4563933949.7022202646466005440
  s21_decimal dec_check = {{0xe5b209c0, 0xac7ac0d7, 0x9377fa0f, 0x130000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_345) {
  // -842.092142
  s21_decimal dec_1 = {{0x32314e6e, 0x0, 0x0, 0x80060000}};
  // 376473040734137425436459
  s21_decimal dec_2 = {{0xb23d9f2b, 0xa4f9840a, 0x4fb8, 0x0}};
  // -376473040734137425437301.09214
  s21_decimal dec_check = {{0x4c03eb1e, 0x3b1ad239, 0x79a51ebb, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_346) {
  // 3046653769366733328
  s21_decimal dec_1 = {{0x1cb58210, 0x2a47e376, 0x0, 0x0}};
  // 54808383093563969.6328609738
  s21_decimal dec_2 = {{0x4183cfca, 0x29e6da5, 0x1c55d44, 0xa0000}};
  // 2991845386273169358.3671390262
  s21_decimal dec_check = {{0x3d027036, 0xc4e09286, 0x60abf709, 0xa0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_347) {
  // 0
  s21_decimal dec_1 = {{0x0, 0x0, 0x0, 0x0}};
  // -8486130623902818447006057975
  s21_decimal dec_2 = {{0x6e1345f7, 0xebeb5f4e, 0x1b6b900e, 0x80000000}};
  // 8486130623902818447006057975
  s21_decimal dec_check = {{0x6e1345f7, 0xebeb5f4e, 0x1b6b900e, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_348) {
  // 20072631760730879751934160
  s21_decimal dec_1 = {{0x29c4d0d0, 0x8c51dfbd, 0x109a8b, 0x0}};
  // -2726621643209
  s21_decimal dec_2 = {{0xd75081c9, 0x27a, 0x0, 0x80000000}};
  // 20072631760733606373577369
  s21_decimal dec_check = {{0x1155299, 0x8c51e238, 0x109a8b, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_349) {
  // 0.02757517699923
  s21_decimal dec_1 = {{0x8dceb53, 0x282, 0x0, 0xe0000}};
  // -121456916185846719893802
  s21_decimal dec_2 = {{0xc9bad12a, 0x314f84b4, 0x19b8, 0x80000000}};
  // 121456916185846719893802.02758
  s21_decimal dec_check = {{0xaf68c106, 0xf5de5c50, 0x273eae3d, 0x50000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_350) {
  // 424154
  s21_decimal dec_1 = {{0x678da, 0x0, 0x0, 0x0}};
  // 3
  s21_decimal dec_2 = {{0x3, 0x0, 0x0, 0x0}};
  // 424151
  s21_decimal dec_check = {{0x678d7, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_351) {
  // -7
  s21_decimal dec_1 = {{0x7, 0x0, 0x0, 0x80000000}};
  // 525791939018
  s21_decimal dec_2 = {{0x6ba449ca, 0x7a, 0x0, 0x0}};
  // -525791939025
  s21_decimal dec_check = {{0x6ba449d1, 0x7a, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_352) {
  // 2230828611422519
  s21_decimal dec_1 = {{0x42f04937, 0x7eced, 0x0, 0x0}};
  // 409524392827622226.0
  s21_decimal dec_2 = {{0xbd7ac134, 0x38d53aa7, 0x0, 0x10000}};
  // -407293564216199707.0
  s21_decimal dec_check = {{0x2017e50e, 0x3885f963, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_353) {
  // -70289306
  s21_decimal dec_1 = {{0x430879a, 0x0, 0x0, 0x80000000}};
  // -531909125896.10
  s21_decimal dec_2 = {{0x79733f2a, 0x3060, 0x0, 0x80020000}};
  // 531838836590.10
  s21_decimal dec_check = {{0xd67e4702, 0x305e, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_354) {
  // 2082027066568036103829601.3
  s21_decimal dec_1 = {{0x259c33cd, 0x22664a9b, 0x1138dd, 0x10000}};
  // 6960706908914109268
  s21_decimal dec_2 = {{0xe36ecb54, 0x6099660d, 0x0, 0x0}};
  // 2082020105861127189720333.3
  s21_decimal dec_check = {{0x43484285, 0x5c684e10, 0x1138d9, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_355) {
  // 49649877062257
  s21_decimal dec_1 = {{0x3491271, 0x2d28, 0x0, 0x0}};
  // 18741
  s21_decimal dec_2 = {{0x4935, 0x0, 0x0, 0x0}};
  // 49649877043516
  s21_decimal dec_check = {{0x348c93c, 0x2d28, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_356) {
  // 707891515556098168866253523
  s21_decimal dec_1 = {{0xcf90aad3, 0xf3d6f7b1, 0x2498ddb, 0x0}};
  // -63508604741808784993824036152
  s21_decimal dec_2 = {{0xa805538, 0xa12e6d10, 0xcd351629, 0x80000000}};
  // 64216496257364883162690289675
  s21_decimal dec_check = {{0xda11000b, 0x950564c1, 0xcf7ea405, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_357) {
  // -832618432981994
  s21_decimal dec_1 = {{0x15ee6bea, 0x2f543, 0x0, 0x80000000}};
  // -38002357
  s21_decimal dec_2 = {{0x243deb5, 0x0, 0x0, 0x80000000}};
  // -832618394979637
  s21_decimal dec_check = {{0x13aa8d35, 0x2f543, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_358) {
  // -26390015.30432
  s21_decimal dec_1 = {{0x70bfb040, 0x266, 0x0, 0x80050000}};
  // 0.89061353930542
  s21_decimal dec_2 = {{0x365d3f2e, 0x5100, 0x0, 0xe0000}};
  // -26390016.19493353930542
  s21_decimal dec_check = {{0x3defbf2e, 0xf8126e6, 0x8f, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_359) {
  // 440.63
  s21_decimal dec_1 = {{0xac1f, 0x0, 0x0, 0x20000}};
  // -8008327.842720927157
  s21_decimal dec_2 = {{0x36404db5, 0x6f234bbe, 0x0, 0x800c0000}};
  // 8008768.472720927157
  s21_decimal dec_check = {{0x60e0e9b5, 0x6f24dc7e, 0x0, 0xc0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_360) {
  // -8
  s21_decimal dec_1 = {{0x8, 0x0, 0x0, 0x80000000}};
  // 8202745425933941905963670
  s21_decimal dec_2 = {{0xad5a3a96, 0xb8766f0a, 0x6c8ff, 0x0}};
  // -8202745425933941905963678
  s21_decimal dec_check = {{0xad5a3a9e, 0xb8766f0a, 0x6c8ff, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_361) {
  // -635198821015884809430268976
  s21_decimal dec_1 = {{0xc5de7c30, 0x15d515c6, 0x20d6c95, 0x80000000}};
  // -1878641
  s21_decimal dec_2 = {{0x1caa71, 0x0, 0x0, 0x80000000}};
  // -635198821015884809428390335
  s21_decimal dec_check = {{0xc5c1d1bf, 0x15d515c6, 0x20d6c95, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_362) {
  // -43876.21132718718
  s21_decimal dec_1 = {{0xa706527e, 0xf9684, 0x0, 0x800b0000}};
  // -234727600238712.380643
  s21_decimal dec_2 = {{0xe858dce3, 0xb97ff4c6, 0xc, 0x80060000}};
  // 234727600194836.16931581282
  s21_decimal dec_check = {{0xf1058d62, 0xded06bc3, 0x136a8c, 0xb0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_363) {
  // 216467201000111.374
  s21_decimal dec_1 = {{0xbd227d0e, 0x3010bc5, 0x0, 0x30000}};
  // 97.491
  s21_decimal dec_2 = {{0x17cd3, 0x0, 0x0, 0x30000}};
  // 216467201000013.883
  s21_decimal dec_check = {{0xbd21003b, 0x3010bc5, 0x0, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_364) {
  // -642574069674120704
  s21_decimal dec_1 = {{0x3ccd9600, 0x8eae1b6, 0x0, 0x80000000}};
  // 349.576123425036
  s21_decimal dec_2 = {{0x8a8a10c, 0x13df0, 0x0, 0xc0000}};
  // -642574069674121053.57612342504
  s21_decimal dec_check = {{0xa800dce8, 0x9e1f99d8, 0xcfa07b33, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_365) {
  // 33
  s21_decimal dec_1 = {{0x21, 0x0, 0x0, 0x0}};
  // -964054315788112991.259
  s21_decimal dec_2 = {{0x3cbb941b, 0x42f0f46e, 0x34, 0x80030000}};
  // 964054315788113024.259
  s21_decimal dec_check = {{0x3cbc1503, 0x42f0f46e, 0x34, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_366) {
  // 127700023001452778.3354
  s21_decimal dec_1 = {{0x6c0cc1ba, 0x39f02f5c, 0x45, 0x40000}};
  // -6343851844990
  s21_decimal dec_2 = {{0xb09257e, 0x5c5, 0x0, 0x80000000}};
  // 127706366853297768.3354
  s21_decimal dec_check = {{0x81554b9a, 0x3ad1905b, 0x45, 0x40000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_367) {
  // 420953.53052
  s21_decimal dec_1 = {{0xcd141cdc, 0x9, 0x0, 0x50000}};
  // -3494789802691744
  s21_decimal dec_2 = {{0x28c10ca0, 0xc6a7e, 0x0, 0x80000000}};
  // 3494789803112697.53052
  s21_decimal dec_check = {{0x5ef7c0dc, 0xf1fec0f9, 0x12, 0x50000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_368) {
  // 1759.7623754083191
  s21_decimal dec_1 = {{0x10c0cb77, 0x3e84f2, 0x0, 0xd0000}};
  // -356
  s21_decimal dec_2 = {{0x164, 0x0, 0x0, 0x80000000}};
  // 2115.7623754083191
  s21_decimal dec_check = {{0x28274b77, 0x4b2abf, 0x0, 0xd0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_369) {
  // -436991
  s21_decimal dec_1 = {{0x6aaff, 0x0, 0x0, 0x80000000}};
  // -607631086.58052153
  s21_decimal dec_2 = {{0xb302fc39, 0xd7dfb9, 0x0, 0x80080000}};
  // 607194095.58052153
  s21_decimal dec_check = {{0x35addd39, 0xd7b7fb, 0x0, 0x80000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_370) {
  // 8077962485273828062.424770
  s21_decimal dec_1 = {{0xc05c6ec2, 0x394a4505, 0x6ae93, 0x60000}};
  // 43379887975
  s21_decimal dec_2 = {{0x19a48f67, 0xa, 0x0, 0x0}};
  // 8077962441893940087.424770
  s21_decimal dec_check = {{0x83370702, 0x38b0273e, 0x6ae93, 0x60000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_371) {
  // 67.04
  s21_decimal dec_1 = {{0x1a30, 0x0, 0x0, 0x20000}};
  // 117086537344897500648
  s21_decimal dec_2 = {{0x371fc5e8, 0x58e6f15d, 0x6, 0x0}};
  // -117086537344897500580.96
  s21_decimal dec_check = {{0x88693470, 0xba364869, 0x27a, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_372) {
  // 233379883600
  s21_decimal dec_1 = {{0x56866a50, 0x36, 0x0, 0x0}};
  // -2142.751789612685624061181228
  s21_decimal dec_2 = {{0x51bbbd2c, 0x450f3dc8, 0x6ec7157, 0x80180000}};
  // 233379885742.75178961268562406
  s21_decimal dec_check = {{0xf8cad9e6, 0xaefd3a90, 0x4b68bb4f, 0x110000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_373) {
  // -226347998240876248949.7
  s21_decimal dec_1 = {{0xe1b57a99, 0xb4184b91, 0x7a, 0x80010000}};
  // -264032475381.510519908
  s21_decimal dec_2 = {{0x9a013c64, 0x502fc974, 0xe, 0x80090000}};
  // -226347997976843773568.18948009
  s21_decimal dec_check = {{0x1f379fa9, 0xb8a01933, 0x4923114b, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_374) {
  // -5503393876099677.410
  s21_decimal dec_1 = {{0x73fb3ce2, 0x4c5ffb92, 0x0, 0x80030000}};
  // -835413.2
  s21_decimal dec_2 = {{0x7f7954, 0x0, 0x0, 0x80010000}};
  // -5503393875264264.210
  s21_decimal dec_check = {{0x422fd812, 0x4c5ffb92, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_375) {
  // -2773663905286
  s21_decimal dec_1 = {{0xcb407606, 0x285, 0x0, 0x80000000}};
  // 9.2789988288
  s21_decimal dec_2 = {{0x9ab6dbc0, 0x15, 0x0, 0xa0000}};
  // -2773663905295.2789988288
  s21_decimal dec_check = {{0xe1633c0, 0x9b30f7a6, 0x5df, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_376) {
  // -8999447668641
  s21_decimal dec_1 = {{0x58e1a7a1, 0x82f, 0x0, 0x80000000}};
  // 864651726.41860562444
  s21_decimal dec_2 = {{0xd8ec2e0c, 0xaff20067, 0x4, 0xb0000}};
  // -9000312320367.41860562444
  s21_decimal dec_check = {{0xe50c160c, 0xca756793, 0xbe96, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_377) {
  // 449.42807764644200150
  s21_decimal dec_1 = {{0x7448fed6, 0x6fb4ed8b, 0x2, 0x110000}};
  // 2501507087906216856138995390
  s21_decimal dec_2 = {{0x967ed6be, 0xf5b4d2e1, 0x81532ba, 0x0}};
  // -2501507087906216856138994940.6
  s21_decimal dec_check = {{0xe0f451de, 0x99103ccf, 0x50d3fb4d, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_378) {
  // -8
  s21_decimal dec_1 = {{0x8, 0x0, 0x0, 0x80000000}};
  // 69301779095
  s21_decimal dec_2 = {{0x22b53a97, 0x10, 0x0, 0x0}};
  // -69301779103
  s21_decimal dec_check = {{0x22b53a9f, 0x10, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_379) {
  // 2295.49730
  s21_decimal dec_1 = {{0xdaea6a2, 0x0, 0x0, 0x50000}};
  // 79228162514264337592662286054
  s21_decimal dec_2 = {{0xcb72dee6, 0xffffffff, 0xffffffff, 0x0}};
  // -79228162514264337592662283759
  s21_decimal dec_check = {{0xcb72d5ef, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_380) {
  // 42405027235778646767506
  s21_decimal dec_1 = {{0x36dff792, 0xc7f84f7a, 0x8fa, 0x0}};
  // -25
  s21_decimal dec_2 = {{0x19, 0x0, 0x0, 0x80000000}};
  // 42405027235778646767531
  s21_decimal dec_check = {{0x36dff7ab, 0xc7f84f7a, 0x8fa, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_381) {
  // -29830.35
  s21_decimal dec_1 = {{0x2d847b, 0x0, 0x0, 0x80020000}};
  // -9305219344960
  s21_decimal dec_2 = {{0x8a4b2a40, 0x876, 0x0, 0x80000000}};
  // 9305219315129.65
  s21_decimal dec_check = {{0x52efc85, 0x34e4e, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_382) {
  // -0.1
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x80010000}};
  // 5.78909647958777387616168
  s21_decimal dec_2 = {{0x369d07a8, 0xc14117bd, 0x7a96, 0x170000}};
  // -5.88909647958777387616168
  s21_decimal dec_check = {{0xe8dd07a8, 0xdb21e177, 0x7cb4, 0x80170000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_383) {
  // -0.0853
  s21_decimal dec_1 = {{0x355, 0x0, 0x0, 0x80040000}};
  // -9033449.029410402868674
  s21_decimal dec_2 = {{0xc481dc2, 0xb449eefc, 0x1e9, 0x800f0000}};
  // 9033448.944110402868674
  s21_decimal dec_check = {{0x981515c2, 0xb449a167, 0x1e9, 0xf0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_384) {
  // 6498768411893734498153
  s21_decimal dec_1 = {{0xa782df69, 0x4c876eaa, 0x160, 0x0}};
  // 0.0656181149936693111
  s21_decimal dec_2 = {{0x7e48af77, 0x91b3947, 0x0, 0x130000}};
  // 6498768411893734498152.9343819
  s21_decimal dec_check = {{0x16a5374b, 0x53e2c92f, 0xd1fc8d67, 0x70000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_385) {
  // 14.846319510
  s21_decimal dec_1 = {{0x74e8db96, 0x3, 0x0, 0x90000}};
  // 354943370575948196595.1
  s21_decimal dec_2 = {{0xb84aad7f, 0x6a49adae, 0xc0, 0x10000}};
  // -354943370575948196580.25368049
  s21_decimal dec_check = {{0x91e979f1, 0x7058a3ae, 0x72b03a3b, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_386) {
  // 26.714
  s21_decimal dec_1 = {{0x685a, 0x0, 0x0, 0x30000}};
  // -45920084411479673859
  s21_decimal dec_2 = {{0x2a32cc03, 0x7d44e97a, 0x2, 0x80000000}};
  // 45920084411479673885.714
  s21_decimal dec_check = {{0xd66d5412, 0x55300534, 0x9b9, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_387) {
  // 32586359934827732556
  s21_decimal dec_1 = {{0xf66d9e4c, 0xc43a01b5, 0x1, 0x0}};
  // 57
  s21_decimal dec_2 = {{0x39, 0x0, 0x0, 0x0}};
  // 32586359934827732499
  s21_decimal dec_check = {{0xf66d9e13, 0xc43a01b5, 0x1, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_388) {
  // 48.496
  s21_decimal dec_1 = {{0xbd70, 0x0, 0x0, 0x30000}};
  // -47160787.96
  s21_decimal dec_2 = {{0x1919a6cc, 0x1, 0x0, 0x80020000}};
  // 47160836.456
  s21_decimal dec_check = {{0xfb014168, 0xa, 0x0, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_389) {
  // 598265
  s21_decimal dec_1 = {{0x920f9, 0x0, 0x0, 0x0}};
  // -1348742377169776142
  s21_decimal dec_2 = {{0xccb86e0e, 0x12b7b20b, 0x0, 0x80000000}};
  // 1348742377170374407
  s21_decimal dec_check = {{0xccc18f07, 0x12b7b20b, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_390) {
  // -872.6
  s21_decimal dec_1 = {{0x2216, 0x0, 0x0, 0x80010000}};
  // 16
  s21_decimal dec_2 = {{0x10, 0x0, 0x0, 0x0}};
  // -888.6
  s21_decimal dec_check = {{0x22b6, 0x0, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_391) {
  // -7112232.299035
  s21_decimal dec_1 = {{0xf2146a1b, 0x677, 0x0, 0x80060000}};
  // 1022706160006440
  s21_decimal dec_2 = {{0x55607528, 0x3a225, 0x0, 0x0}};
  // -1022706167118672.299035
  s21_decimal dec_check = {{0x5be041b, 0x70e63077, 0x37, 0x80060000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_392) {
  // -7
  s21_decimal dec_1 = {{0x7, 0x0, 0x0, 0x80000000}};
  // 2643845386180631.857809389354
  s21_decimal dec_2 = {{0x25c0f72a, 0x9215860f, 0x88af009, 0xc0000}};
  // -2643845386180638.857809389354
  s21_decimal dec_check = {{0xf644672a, 0x92158c6c, 0x88af009, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_393) {
  // 503.01718205
  s21_decimal dec_1 = {{0xb6374ebd, 0xb, 0x0, 0x80000}};
  // -60650983664315959.3
  s21_decimal dec_2 = {{0xa5e54e29, 0x86ac17b, 0x0, 0x80010000}};
  // 60650983664316462.31718205
  s21_decimal dec_check = {{0x6d02693d, 0xa429b139, 0x50455, 0x80000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_394) {
  // -32786441.878029809622
  s21_decimal dec_1 = {{0x94f537d6, 0xc700d72d, 0x1, 0x800c0000}};
  // -5781154376
  s21_decimal dec_2 = {{0x58956a48, 0x1, 0x0, 0x80000000}};
  // 5748367934.121970190378
  s21_decimal dec_check = {{0xe217482a, 0x9ea163ec, 0x137, 0xc0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_395) {
  // 899557946846561
  s21_decimal dec_1 = {{0xa7e06d61, 0x33224, 0x0, 0x0}};
  // -5682876.2
  s21_decimal dec_2 = {{0x363235a, 0x0, 0x0, 0x80010000}};
  // 899557952529437.2
  s21_decimal dec_check = {{0x92276924, 0x1ff56e, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_396) {
  // 276554688236409033261456
  s21_decimal dec_1 = {{0x5cd30190, 0xf47d57a, 0x3a90, 0x0}};
  // -88.1304
  s21_decimal dec_2 = {{0xd7298, 0x0, 0x0, 0x80040000}};
  // 276554688236409033261544.1304
  s21_decimal dec_check = {{0xf27a7b98, 0xe602fbc9, 0x8ef9b54, 0x40000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_397) {
  // -70915727.42055629
  s21_decimal dec_1 = {{0x723066cd, 0x1931bf, 0x0, 0x80080000}};
  // -51180129999617446336158
  s21_decimal dec_2 = {{0xa703569e, 0x7afbeeb3, 0xad6, 0x80000000}};
  // 51180129999617375420430.579444
  s21_decimal dec_check = {{0x55ae76f4, 0xaf0c86ab, 0xa55f3616, 0x60000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_398) {
  // 34799615.55910
  s21_decimal dec_1 = {{0x3ddf53c6, 0x32a, 0x0, 0x50000}};
  // 4846243969.0
  s21_decimal dec_2 = {{0x4896250a, 0xb, 0x0, 0x10000}};
  // -4811444353.44090
  s21_decimal dec_check = {{0x2b2782da, 0x1b599, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_399) {
  // 8356093403652959
  s21_decimal dec_1 = {{0x9b08e35f, 0x1dafd2, 0x0, 0x0}};
  // -501.750002145
  s21_decimal dec_2 = {{0xd2a171e1, 0x74, 0x0, 0x80090000}};
  // 8356093403653460.750002145
  s21_decimal dec_check = {{0x823067e1, 0xbb287e89, 0x6e978, 0x90000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_401) {
  // 876973
  s21_decimal dec_1 = {{0xd61ad, 0x0, 0x0, 0x0}};
  // -92546446553856755
  s21_decimal dec_2 = {{0xb8113af3, 0x148ca80, 0x0, 0x80000000}};
  // 92546446554733728
  s21_decimal dec_check = {{0xb81e9ca0, 0x148ca80, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_402) {
  // -52453936
  s21_decimal dec_1 = {{0x3206230, 0x0, 0x0, 0x80000000}};
  // 32331735900507180
  s21_decimal dec_2 = {{0xe1524c2c, 0x72dd8a, 0x0, 0x0}};
  // -32331735952961116
  s21_decimal dec_check = {{0xe472ae5c, 0x72dd8a, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_403) {
  // -49182
  s21_decimal dec_1 = {{0xc01e, 0x0, 0x0, 0x80000000}};
  // -75820.963149039061798382
  s21_decimal dec_2 = {{0x18398dee, 0x433ceb5f, 0x100e, 0x80120000}};
  // 26638.963149039061798382
  s21_decimal dec_check = {{0x7a818dee, 0x19e0c4c6, 0x5a4, 0x120000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_404) {
  // -527317
  s21_decimal dec_1 = {{0x80bd5, 0x0, 0x0, 0x80000000}};
  // -885
  s21_decimal dec_2 = {{0x375, 0x0, 0x0, 0x80000000}};
  // -526432
  s21_decimal dec_check = {{0x80860, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_405) {
  // -959785491597814
  s21_decimal dec_1 = {{0x794989f6, 0x368eb, 0x0, 0x80000000}};
  // 4.25733646636
  s21_decimal dec_2 = {{0x1fb3e92c, 0x63, 0x0, 0xb0000}};
  // -959785491597818.25733646636
  s21_decimal dec_check = {{0x8c1ed92c, 0x9357621a, 0x4f643f, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_406) {
  // -381761
  s21_decimal dec_1 = {{0x5d341, 0x0, 0x0, 0x80000000}};
  // 74.0317
  s21_decimal dec_2 = {{0xb4bdd, 0x0, 0x0, 0x40000}};
  // -381835.0317
  s21_decimal dec_check = {{0xe39766ed, 0x0, 0x0, 0x80040000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_407) {
  // -102316.014
  s21_decimal dec_1 = {{0x61937ee, 0x0, 0x0, 0x80030000}};
  // 4512164033
  s21_decimal dec_2 = {{0xcf228c1, 0x1, 0x0, 0x0}};
  // -4512266349.014
  s21_decimal dec_check = {{0x980869d6, 0x41a, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_408) {
  // 1978293023493465949999
  s21_decimal dec_1 = {{0xf189c72f, 0x3e54af6b, 0x6b, 0x0}};
  // 0.6167636661463424
  s21_decimal dec_2 = {{0xd04f6980, 0x15e96e, 0x0, 0x100000}};
  // 1978293023493465949998.3832363
  s21_decimal dec_check = {{0xc323052b, 0xf1385f4d, 0x3fec0e6c, 0x70000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_410) {
  // 850064387
  s21_decimal dec_1 = {{0x32aaf403, 0x0, 0x0, 0x0}};
  // 1098.08198
  s21_decimal dec_2 = {{0x68b8a46, 0x0, 0x0, 0x50000}};
  // 850063288.91802
  s21_decimal dec_check = {{0x1409899a, 0x4d50, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_411) {
  // 2591151398776571383029639096
  s21_decimal dec_1 = {{0x10f27b8, 0xca2493a4, 0x85f59a6, 0x0}};
  // 410088167785859952555695
  s21_decimal dec_2 = {{0xdb6e36af, 0xec933501, 0x56d6, 0x0}};
  // 2590741310608785523077083401
  s21_decimal dec_check = {{0x25a0f109, 0xdd915ea2, 0x85f02cf, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_412) {
  // -26801.25452968255031413174
  s21_decimal dec_1 = {{0xb68109b6, 0xe455a965, 0x23789, 0x80140000}};
  // 66232797225286258402.81
  s21_decimal dec_2 = {{0xf686d099, 0xc7877ff, 0x167, 0x20000}};
  // -66232797225286285204.064529683
  s21_decimal dec_check = {{0x43bb6d13, 0x128672da, 0xd6027c5c, 0x80090000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_413) {
  // -2659229131197306
  s21_decimal dec_1 = {{0x7bdcb7a, 0x9728e, 0x0, 0x80000000}};
  // 182805472922048567629584470
  s21_decimal dec_2 = {{0x9eb81856, 0x8b51c1ab, 0x973690, 0x0}};
  // -182805472924707796760781776
  s21_decimal dec_check = {{0xa675e3d0, 0x8b5b3439, 0x973690, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_414) {
  // -78002236614046045076.93169728
  s21_decimal dec_1 = {{0x8e26bc40, 0xfa777725, 0x1934319b, 0x80080000}};
  // -87.500533429
  s21_decimal dec_2 = {{0x5f702eb5, 0x14, 0x0, 0x80090000}};
  // -78002236614046044989.431163851
  s21_decimal dec_check = {{0x2e132bcb, 0xc8aaa763, 0xfc09f017, 0x80090000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_415) {
  // 2846.47
  s21_decimal dec_1 = {{0x457e7, 0x0, 0x0, 0x20000}};
  // 39598197
  s21_decimal dec_2 = {{0x25c3875, 0x0, 0x0, 0x0}};
  // -39595350.53
  s21_decimal dec_check = {{0xec01b5cd, 0x0, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_416) {
  // 821521616488
  s21_decimal dec_1 = {{0x46810e68, 0xbf, 0x0, 0x0}};
  // 714724029385944623
  s21_decimal dec_2 = {{0xcbfc2e2f, 0x9eb35b7, 0x0, 0x0}};
  // -714723207864328135
  s21_decimal dec_check = {{0x857b1fc7, 0x9eb34f8, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_417) {
  // -33240330528473017640749884752
  s21_decimal dec_1 = {{0xd1e3e550, 0xa7c3f944, 0x6b67c1c8, 0x80000000}};
  // 41585727079702203.0
  s21_decimal dec_2 = {{0x71eb34e, 0x5c56bfc, 0x0, 0x10000}};
  // -33240330528514603367829586955
  s21_decimal dec_check = {{0x6c33c40b, 0xa857b744, 0x6b67c1c8, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_418) {
  // 7268951.512850
  s21_decimal dec_1 = {{0x6f45d712, 0x69c, 0x0, 0x60000}};
  // 795669346819876.416944016
  s21_decimal dec_2 = {{0xda147790, 0x525c3fcd, 0xa87d, 0x90000}};
  // -795669339550924.904094016
  s21_decimal dec_check = {{0x31445940, 0x52426cbb, 0xa87d, 0x80090000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_419) {
  // 2528.20489500074
  s21_decimal dec_1 = {{0x5b77f5aa, 0xe5f0, 0x0, 0xb0000}};
  // 337084
  s21_decimal dec_2 = {{0x524bc, 0x0, 0x0, 0x0}};
  // -334555.79510499926
  s21_decimal dec_check = {{0x1c7a6a56, 0x76dbac, 0x0, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_420) {
  // -776637924510496219806
  s21_decimal dec_1 = {{0xc8c4629e, 0x1a042d89, 0x2a, 0x80000000}};
  // 23304395872907708405530152434
  s21_decimal dec_2 = {{0x4c2cdf2, 0xb18527e5, 0x4b4cf1c7, 0x0}};
  // -23304396649545632916026372240
  s21_decimal dec_check = {{0xcd873090, 0xcb89556e, 0x4b4cf1f1, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_421) {
  // -6055137263.0638
  s21_decimal dec_1 = {{0x370e6a6e, 0x3712, 0x0, 0x80040000}};
  // 237586271.8601310905035
  s21_decimal dec_2 = {{0x2cfe22cb, 0xcbb7fab5, 0x80, 0xd0000}};
  // -6292723534.9239310905035
  s21_decimal dec_check = {{0xed24eecb, 0x4ad1cb59, 0xd53, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_422) {
  // 0.5
  s21_decimal dec_1 = {{0x5, 0x0, 0x0, 0x10000}};
  // -392929332283980089
  s21_decimal dec_2 = {{0x589e3939, 0x573f725, 0x0, 0x80000000}};
  // 392929332283980089.5
  s21_decimal dec_check = {{0x762e3c3f, 0x3687a775, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_423) {
  // -1230504829
  s21_decimal dec_1 = {{0x4958037d, 0x0, 0x0, 0x80000000}};
  // 5.59622924366046869
  s21_decimal dec_2 = {{0xaf00e695, 0x7c42e15, 0x0, 0x110000}};
  // -1230504834.59622924366046869
  s21_decimal dec_check = {{0xf962e695, 0x131a0463, 0x65c8f4, 0x80110000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_424) {
  // 807287.10
  s21_decimal dec_1 = {{0x4cfd286, 0x0, 0x0, 0x20000}};
  // 1520843530522476723245751464
  s21_decimal dec_2 = {{0x5a611ca8, 0xfd7a7340, 0x4ea0324, 0x0}};
  // -1520843530522476723244944176.9
  s21_decimal dec_check = {{0x874fefe9, 0xe6c88083, 0x31241f71, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_425) {
  // -159965440215561285749413
  s21_decimal dec_1 = {{0xbc5d4aa5, 0xbe6f96d3, 0x21df, 0x80000000}};
  // 475.97405
  s21_decimal dec_2 = {{0x2d6475d, 0x0, 0x0, 0x50000}};
  // -159965440215561285749888.97405
  s21_decimal dec_check = {{0xdcdc4c7d, 0x584d54b, 0x33b007f5, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_426) {
  // 56466156
  s21_decimal dec_1 = {{0x35d9aec, 0x0, 0x0, 0x0}};
  // -34227045891598982
  s21_decimal dec_2 = {{0x20146a86, 0x799951, 0x0, 0x80000000}};
  // 34227045948065138
  s21_decimal dec_check = {{0x23720572, 0x799951, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_427) {
  // 1472
  s21_decimal dec_1 = {{0x5c0, 0x0, 0x0, 0x0}};
  // 855
  s21_decimal dec_2 = {{0x357, 0x0, 0x0, 0x0}};
  // 617
  s21_decimal dec_check = {{0x269, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_428) {
  // 4249228.66400
  s21_decimal dec_1 = {{0xef6062e0, 0x62, 0x0, 0x50000}};
  // 915374365668
  s21_decimal dec_2 = {{0x20905be4, 0xd5, 0x0, 0x0}};
  // -915370116439.33600
  s21_decimal dec_check = {{0x56d663a0, 0x145346d, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_429) {
  // 72448912596020748
  s21_decimal dec_1 = {{0xf3a62e0c, 0x10163e6, 0x0, 0x0}};
  // -31933190
  s21_decimal dec_2 = {{0x1e74306, 0x0, 0x0, 0x80000000}};
  // 72448912627953938
  s21_decimal dec_check = {{0xf58d7112, 0x10163e6, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_430) {
  // -870312330734392811113502001.56
  s21_decimal dec_1 = {{0x98b5475c, 0x9da24ba3, 0x19368c76, 0x80020000}};
  // 0.98
  s21_decimal dec_2 = {{0x62, 0x0, 0x0, 0x20000}};
  // -870312330734392811113502002.54
  s21_decimal dec_check = {{0x98b547be, 0x9da24ba3, 0x19368c76, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_431) {
  // 6583733332.503493929890290097
  s21_decimal dec_1 = {{0x627d19b1, 0x1bb7f832, 0x1545efc3, 0x120000}};
  // 6111118218869267018.1475920
  s21_decimal dec_2 = {{0xbf5b0650, 0xd319701f, 0x328ccb, 0x70000}};
  // -6111118212285533685.6440980701
  s21_decimal dec_check = {{0xf5dec4dd, 0x9b0ca2c, 0xc575fc2d, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_432) {
  // -8915082998
  s21_decimal dec_1 = {{0x13615ef6, 0x2, 0x0, 0x80000000}};
  // -60583593881140562597039789
  s21_decimal dec_2 = {{0xcfcccead, 0x34846c22, 0x321d13, 0x80000000}};
  // 60583593881140553681956791
  s21_decimal dec_check = {{0xbc6b6fb7, 0x34846c20, 0x321d13, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_433) {
  // 94
  s21_decimal dec_1 = {{0x5e, 0x0, 0x0, 0x0}};
  // 243541
  s21_decimal dec_2 = {{0x3b755, 0x0, 0x0, 0x0}};
  // -243447
  s21_decimal dec_check = {{0x3b6f7, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_434) {
  // 637504828580248
  s21_decimal dec_1 = {{0xa8d9a198, 0x243ce, 0x0, 0x0}};
  // 54234509696669062006748964917
  s21_decimal dec_2 = {{0x82fb6835, 0xd73a9542, 0xaf3dbc25, 0x0}};
  // -54234509696668424501920384669
  s21_decimal dec_check = {{0xda21c69d, 0xd7385173, 0xaf3dbc25, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_435) {
  // -70263069
  s21_decimal dec_1 = {{0x430211d, 0x0, 0x0, 0x80000000}};
  // -3817.443944822192747935
  s21_decimal dec_2 = {{0x84b0359f, 0xf1ad5221, 0xce, 0x80120000}};
  // -70259251.556055177807252065
  s21_decimal dec_check = {{0x55a3ca61, 0xa8a17b8c, 0x3a1df9, 0x80120000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_436) {
  // 37998007126462588182739201.816
  s21_decimal dec_1 = {{0xfd0eaf18, 0xd4de8d84, 0x7ac736fd, 0x30000}};
  // 8910858.7
  s21_decimal dec_2 = {{0x54fb06b, 0x0, 0x0, 0x10000}};
  // 37998007126462588173828343.116
  s21_decimal dec_check = {{0xe9edc54c, 0xd4de8d82, 0x7ac736fd, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_437) {
  // -7454975128168929.07249577
  s21_decimal dec_1 = {{0x19525fa9, 0x804b4bdc, 0x9ddd, 0x80080000}};
  // 318620
  s21_decimal dec_2 = {{0x4dc9c, 0x0, 0x0, 0x0}};
  // -7454975128487549.07249577
  s21_decimal dec_check = {{0x8c837ba9, 0x804b68d6, 0x9ddd, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_438) {
  // 2422757527
  s21_decimal dec_1 = {{0x90685897, 0x0, 0x0, 0x0}};
  // 295309397.34178384569
  s21_decimal dec_2 = {{0x32bcab9, 0x99d2f93a, 0x1, 0xb0000}};
  // 2127448129.65821615431
  s21_decimal dec_check = {{0xdab70d47, 0x886d6838, 0xb, 0xb0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_440) {
  // 3.0
  s21_decimal dec_1 = {{0x1e, 0x0, 0x0, 0x10000}};
  // 0.538841
  s21_decimal dec_2 = {{0x838d9, 0x0, 0x0, 0x60000}};
  // 2.461159
  s21_decimal dec_check = {{0x258de7, 0x0, 0x0, 0x60000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_441) {
  // 630544.174563
  s21_decimal dec_1 = {{0xcf5c8de3, 0x92, 0x0, 0x60000}};
  // 415106165398.78
  s21_decimal dec_2 = {{0xf18da2e6, 0x25c0, 0x0, 0x20000}};
  // -415105534854.605437
  s21_decimal dec_check = {{0xdd4eaa7d, 0x5c2c048, 0x0, 0x80060000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_442) {
  // -726197311533927951003316
  s21_decimal dec_1 = {{0x20b46eb4, 0x3c3231da, 0x99c7, 0x80000000}};
  // 773304647679
  s21_decimal dec_2 = {{0xc8c7fff, 0xb4, 0x0, 0x0}};
  // -726197311534701255650995
  s21_decimal dec_check = {{0x2d40eeb3, 0x3c32328e, 0x99c7, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_443) {
  // -893822494.98946428259
  s21_decimal dec_1 = {{0x1209dd63, 0xd86d8a5a, 0x4, 0x800b0000}};
  // 1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x0}};
  // -893822495.98946428259
  s21_decimal dec_check = {{0x5a80c563, 0xd86d8a71, 0x4, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_444) {
  // -84653974081
  s21_decimal dec_1 = {{0xb5c52241, 0x13, 0x0, 0x80000000}};
  // 22902118.83442228731947241
  s21_decimal dec_2 = {{0x29d1a8e9, 0xa28da81b, 0x1e4f8, 0x110000}};
  // -84676876199.83442228731947241
  s21_decimal dec_check = {{0x3ddba8e9, 0xacfcd549, 0x1b5c4e99, 0x80110000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_445) {
  // -95.4184149950
  s21_decimal dec_1 = {{0x29ceabbe, 0xde, 0x0, 0x800a0000}};
  // -74691561.041
  s21_decimal dec_2 = {{0x63f6c651, 0x11, 0x0, 0x80030000}};
  // 74691465.6225850050
  s21_decimal dec_check = {{0x29dff2c2, 0xa5d92ec, 0x0, 0xa0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_446) {
  // -50
  s21_decimal dec_1 = {{0x32, 0x0, 0x0, 0x80000000}};
  // -510791066142550
  s21_decimal dec_2 = {{0xd00d4756, 0x1d08f, 0x0, 0x80000000}};
  // 510791066142500
  s21_decimal dec_check = {{0xd00d4724, 0x1d08f, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_447) {
  // 92441552335830.64415432596
  s21_decimal dec_1 = {{0x6f136f94, 0xa8cb4e48, 0x7a586, 0xb0000}};
  // 8478.23
  s21_decimal dec_2 = {{0xcefcf, 0x0, 0x0, 0x20000}};
  // 92441552327352.41415432596
  s21_decimal dec_check = {{0x42541994, 0xa8c84b31, 0x7a586, 0xb0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_448) {
  // -94358416.121
  s21_decimal dec_1 = {{0xf8332af9, 0x15, 0x0, 0x80030000}};
  // 7038324124
  s21_decimal dec_2 = {{0xa3844d9c, 0x1, 0x0, 0x0}};
  // -7132682540.121
  s21_decimal dec_check = {{0xb5025459, 0x67c, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_449) {
  // -50501795866982188051
  s21_decimal dec_1 = {{0x62c38413, 0xbcda6bc5, 0x2, 0x80000000}};
  // 1126
  s21_decimal dec_2 = {{0x466, 0x0, 0x0, 0x0}};
  // -50501795866982189177
  s21_decimal dec_check = {{0x62c38879, 0xbcda6bc5, 0x2, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_450) {
  // 861353711.20
  s21_decimal dec_1 = {{0xe117570, 0x14, 0x0, 0x20000}};
  // -3157536077513940.1631
  s21_decimal dec_2 = {{0xe0fc9f9f, 0xb6323754, 0x1, 0x80040000}};
  // 3157536938867651.3631
  s21_decimal dec_check = {{0x5fce7f5f, 0xb6323f2a, 0x1, 0x40000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_451) {
  // -5775758630288
  s21_decimal dec_1 = {{0xc60a9d90, 0x540, 0x0, 0x80000000}};
  // 304887.970312554589
  s21_decimal dec_2 = {{0x5ec5085d, 0x43b2dfe, 0x0, 0xc0000}};
  // -5775758935175.970312554589
  s21_decimal dec_check = {{0xd66e085d, 0x84ee7431, 0x4c710, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_452) {
  // -126181623.833345
  s21_decimal dec_1 = {{0xf2dda301, 0x72c2, 0x0, 0x80060000}};
  // 171.22444540
  s21_decimal dec_2 = {{0xfc93c4fc, 0x3, 0x0, 0x80000}};
  // -126181795.05779040
  s21_decimal dec_check = {{0xdb277160, 0x2cd42a, 0x0, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_453) {
  // 268529413
  s21_decimal dec_1 = {{0x10016f05, 0x0, 0x0, 0x0}};
  // 341450381384
  s21_decimal dec_2 = {{0x80075848, 0x4f, 0x0, 0x0}};
  // -341181851971
  s21_decimal dec_check = {{0x7005e943, 0x4f, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_454) {
  // -60994543579471554745
  s21_decimal dec_1 = {{0xfb7c28b9, 0x4e782638, 0x3, 0x80000000}};
  // -43273
  s21_decimal dec_2 = {{0xa909, 0x0, 0x0, 0x80000000}};
  // -60994543579471511472
  s21_decimal dec_check = {{0xfb7b7fb0, 0x4e782638, 0x3, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_455) {
  // 7419157.543
  s21_decimal dec_1 = {{0xba375c27, 0x1, 0x0, 0x30000}};
  // -993
  s21_decimal dec_2 = {{0x3e1, 0x0, 0x0, 0x80000000}};
  // 7420150.543
  s21_decimal dec_check = {{0xba46830f, 0x1, 0x0, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_456) {
  // 12188298.90
  s21_decimal dec_1 = {{0x48a5de42, 0x0, 0x0, 0x20000}};
  // -741697.297
  s21_decimal dec_2 = {{0x2c356711, 0x0, 0x0, 0x80030000}};
  // 12929996.197
  s21_decimal dec_check = {{0x2b015a5, 0x3, 0x0, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_457) {
  // 804.9334481924858923
  s21_decimal dec_1 = {{0x696f242b, 0x6fb4fb10, 0x0, 0x100000}};
  // -0.873157
  s21_decimal dec_2 = {{0xd52c5, 0x0, 0x0, 0x80060000}};
  // 805.8066051924858923
  s21_decimal dec_check = {{0x799d982b, 0x6fd40061, 0x0, 0x100000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_458) {
  // 2427
  s21_decimal dec_1 = {{0x97b, 0x0, 0x0, 0x0}};
  // -51461733040232592139338046370
  s21_decimal dec_2 = {{0x3f8adba2, 0x1abe04ff, 0xa64825da, 0x80000000}};
  // 51461733040232592139338048797
  s21_decimal dec_check = {{0x3f8ae51d, 0x1abe04ff, 0xa64825da, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_459) {
  // -53465246948839364137489284427
  s21_decimal dec_1 = {{0xa9503d4b, 0xb8645ae5, 0xacc16a6c, 0x80000000}};
  // 835634486.4
  s21_decimal dec_2 = {{0xf213b420, 0x1, 0x0, 0x10000}};
  // -53465246948839364138324918913
  s21_decimal dec_check = {{0xdb1f0281, 0xb8645ae5, 0xacc16a6c, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_460) {
  // -397200
  s21_decimal dec_1 = {{0x60f90, 0x0, 0x0, 0x80000000}};
  // -6859
  s21_decimal dec_2 = {{0x1acb, 0x0, 0x0, 0x80000000}};
  // -390341
  s21_decimal dec_check = {{0x5f4c5, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_461) {
  // -140.40
  s21_decimal dec_1 = {{0x36d8, 0x0, 0x0, 0x80020000}};
  // 9531709480
  s21_decimal dec_2 = {{0x38225828, 0x2, 0x0, 0x0}};
  // -9531709620.40
  s21_decimal dec_check = {{0xed6aa678, 0xdd, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_462) {
  // 1800160491
  s21_decimal dec_1 = {{0x6b4c44eb, 0x0, 0x0, 0x0}};
  // 6569242296
  s21_decimal dec_2 = {{0x878eaeb8, 0x1, 0x0, 0x0}};
  // -4769081805
  s21_decimal dec_check = {{0x1c4269cd, 0x1, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_463) {
  // -2436474
  s21_decimal dec_1 = {{0x252d7a, 0x0, 0x0, 0x80000000}};
  // 212894486.41518216980855
  s21_decimal dec_2 = {{0xafd4a977, 0x1a736720, 0x482, 0xe0000}};
  // -215330960.41518216980855
  s21_decimal dec_check = {{0x47572977, 0x4fbcda87, 0x48f, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_464) {
  // -3953666374168622997641
  s21_decimal dec_1 = {{0x57692089, 0x54249be2, 0xd6, 0x80000000}};
  // 8937238988822896
  s21_decimal dec_2 = {{0x1b339970, 0x1fc05f, 0x0, 0x0}};
  // -3953675311407611820537
  s21_decimal dec_check = {{0x729cb9f9, 0x54445c41, 0xd6, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_465) {
  // 83806515.910515
  s21_decimal dec_1 = {{0xb99c5773, 0x4c38, 0x0, 0x60000}};
  // -2054
  s21_decimal dec_2 = {{0x806, 0x0, 0x0, 0x80000000}};
  // 83808569.910515
  s21_decimal dec_check = {{0x3409e4f3, 0x4c39, 0x0, 0x60000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_466) {
  // -27
  s21_decimal dec_1 = {{0x1b, 0x0, 0x0, 0x80000000}};
  // -916155
  s21_decimal dec_2 = {{0xdfabb, 0x0, 0x0, 0x80000000}};
  // 916128
  s21_decimal dec_check = {{0xdfaa0, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_467) {
  // -974595770357838866
  s21_decimal dec_1 = {{0x83c6f412, 0xd8675b0, 0x0, 0x80000000}};
  // 283048825112955206734306019
  s21_decimal dec_2 = {{0xa731dae3, 0x8e2b34ea, 0xea21eb, 0x0}};
  // -283048826087550977092144885
  s21_decimal dec_check = {{0x2af8cef5, 0x9bb1aa9b, 0xea21eb, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_468) {
  // 1364980856564549.09
  s21_decimal dec_1 = {{0x2412e6fd, 0x1e4f049, 0x0, 0x20000}};
  // 41970615449160
  s21_decimal dec_2 = {{0xb9ff648, 0x262c, 0x0, 0x0}};
  // 1323010241115389.09
  s21_decimal dec_check = {{0x9996b2dd, 0x1d60714, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_469) {
  // 41874410214313928704745
  s21_decimal dec_1 = {{0xe28842e9, 0x42df5c8, 0x8de, 0x0}};
  // -273080184405695704712522792
  s21_decimal dec_2 = {{0xa12aac28, 0x75b37a76, 0xe1e2fa, 0x80000000}};
  // 273122058815910018641227537
  s21_decimal dec_check = {{0x83b2ef11, 0x79e1703f, 0xe1ebd8, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_470) {
  // 23
  s21_decimal dec_1 = {{0x17, 0x0, 0x0, 0x0}};
  // -0.7
  s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x80010000}};
  // 23.7
  s21_decimal dec_check = {{0xed, 0x0, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_472) {
  // 674089334546405587208049
  s21_decimal dec_1 = {{0x44ecc771, 0x74bf9398, 0x8ebe, 0x0}};
  // -0.7
  s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x80010000}};
  // 674089334546405587208049.7
  s21_decimal dec_check = {{0xb13fca71, 0x8f7bc3f2, 0x59370, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_473) {
  // -83721978643434811.92
  s21_decimal dec_1 = {{0x8d7a2b68, 0x74300599, 0x0, 0x80020000}};
  // -12088748
  s21_decimal dec_2 = {{0xb875ac, 0x0, 0x0, 0x80000000}};
  // -83721978631346063.92
  s21_decimal dec_check = {{0x456c3438, 0x74300599, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_475) {
  // -5377362256500332320351726
  s21_decimal dec_1 = {{0x2ac165ee, 0x645c88c5, 0x472b3, 0x80000000}};
  // 75291724214.50510262377
  s21_decimal dec_2 = {{0x49566069, 0x2841da0b, 0x198, 0xb0000}};
  // -5377362256500407612075940.5051
  s21_decimal dec_check = {{0x576109fb, 0x5ea1429c, 0xadc07f80, 0x80040000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_476) {
  // 772062
  s21_decimal dec_1 = {{0xbc7de, 0x0, 0x0, 0x0}};
  // 207145912732
  s21_decimal dec_2 = {{0x3adbc99c, 0x30, 0x0, 0x0}};
  // -207145140670
  s21_decimal dec_check = {{0x3ad001be, 0x30, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_478) {
  // -466245627.333390407511603267
  s21_decimal dec_1 = {{0x464c7843, 0x1a7441bf, 0x181ab5a, 0x80120000}};
  // -194
  s21_decimal dec_2 = {{0xc2, 0x0, 0x0, 0x80000000}};
  // -466245433.333390407511603267
  s21_decimal dec_check = {{0x6c847843, 0x9629cd9a, 0x181ab4f, 0x80120000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_479) {
  // -56841845675759727
  s21_decimal dec_1 = {{0x83e1986f, 0xc9f15b, 0x0, 0x80000000}};
  // -414622
  s21_decimal dec_2 = {{0x6539e, 0x0, 0x0, 0x80000000}};
  // -56841845675345105
  s21_decimal dec_check = {{0x83db44d1, 0xc9f15b, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_480) {
  // 184
  s21_decimal dec_1 = {{0xb8, 0x0, 0x0, 0x0}};
  // 9813144405532585259
  s21_decimal dec_2 = {{0x3561ad2b, 0x882f4ad8, 0x0, 0x0}};
  // -9813144405532585075
  s21_decimal dec_check = {{0x3561ac73, 0x882f4ad8, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_481) {
  // -34.1681238774
  s21_decimal dec_1 = {{0x8dc9f2f6, 0x4f, 0x0, 0x800a0000}};
  // -63985558646066631086
  s21_decimal dec_2 = {{0x1db9d1ae, 0x77fa5e94, 0x3, 0x80000000}};
  // 63985558646066631051.831876123
  s21_decimal dec_check = {{0xe78b1a1b, 0x96949487, 0xcebf9d14, 0x90000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_482) {
  // 0.0896797526763457226
  s21_decimal dec_1 = {{0x622f4aca, 0xc721099, 0x0, 0x130000}};
  // -9762.532
  s21_decimal dec_2 = {{0x94f6e4, 0x0, 0x0, 0x80030000}};
  // 9762.6216797526763457226
  s21_decimal dec_check = {{0x60134aca, 0x53ebd37c, 0x14ac, 0x130000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_483) {
  // -66777733596
  s21_decimal dec_1 = {{0x8c4359dc, 0xf, 0x0, 0x80000000}};
  // -821.85276599923
  s21_decimal dec_2 = {{0x4037ae73, 0x4abf, 0x0, 0x800b0000}};
  // -66777732774.14723400077
  s21_decimal dec_check = {{0x149fb18d, 0xb87773, 0x16a, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_484) {
  // 933945.64719
  s21_decimal dec_1 = {{0xbebff66f, 0x15, 0x0, 0x50000}};
  // 1385338689255256867097914520
  s21_decimal dec_2 = {{0x263dac98, 0xd370b526, 0x479ece0, 0x0}};
  // -1385338689255256867096980574.4
  s21_decimal dec_check = {{0x7dda3bb0, 0x4267137d, 0x2cc340c8, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_485) {
  // 956884106933830850588
  s21_decimal dec_1 = {{0x8fe2981c, 0xdf6f4177, 0x33, 0x0}};
  // 2
  s21_decimal dec_2 = {{0x2, 0x0, 0x0, 0x0}};
  // 956884106933830850586
  s21_decimal dec_check = {{0x8fe2981a, 0xdf6f4177, 0x33, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_486) {
  // -581341094789504129988563555
  s21_decimal dec_1 = {{0x27841263, 0xe57387aa, 0x1e0dfc3, 0x80000000}};
  // -12555255154007911
  s21_decimal dec_2 = {{0x2384df67, 0x2c9af0, 0x0, 0x80000000}};
  // -581341094776948874834555644
  s21_decimal dec_check = {{0x3ff32fc, 0xe546ecba, 0x1e0dfc3, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_487) {
  // -44472341746
  s21_decimal dec_1 = {{0x5ac214f2, 0xa, 0x0, 0x80000000}};
  // 608074316
  s21_decimal dec_2 = {{0x243e7a4c, 0x0, 0x0, 0x0}};
  // -45080416062
  s21_decimal dec_check = {{0x7f008f3e, 0xa, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_488) {
  // 567
  s21_decimal dec_1 = {{0x237, 0x0, 0x0, 0x0}};
  // -0.471090218764537
  s21_decimal dec_2 = {{0x3d2588f9, 0x1ac74, 0x0, 0x800f0000}};
  // 567.471090218764537
  s21_decimal dec_check = {{0x30cb08f9, 0x7e00ff3, 0x0, 0xf0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_489) {
  // 759.155046
  s21_decimal dec_1 = {{0x2d3fc966, 0x0, 0x0, 0x60000}};
  // 7312878917078706700266575
  s21_decimal dec_2 = {{0x62e9ac4f, 0xf5e01e08, 0x60c8f, 0x0}};
  // -7312878917078706700265815.8450
  s21_decimal dec_check = {{0xc766f772, 0x82952797, 0xec4ab774, 0x80040000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_490) {
  // 5027614924882823416685973
  s21_decimal dec_1 = {{0x2e54a595, 0x8d1b5f6d, 0x428a3, 0x0}};
  // -733534390348882321
  s21_decimal dec_2 = {{0x3f472191, 0xa2e09a4, 0x0, 0x80000000}};
  // 5027615658417213765568294
  s21_decimal dec_check = {{0x6d9bc726, 0x97496911, 0x428a3, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_491) {
  // 4395055032593800
  s21_decimal dec_1 = {{0x7dfc6d88, 0xf9d47, 0x0, 0x0}};
  // 60929885935
  s21_decimal dec_2 = {{0x2fb446ef, 0xe, 0x0, 0x0}};
  // 4394994102707865
  s21_decimal dec_check = {{0x4e482699, 0xf9d39, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_492) {
  // 6.557185227113593585359
  s21_decimal dec_1 = {{0x80d83ecf, 0x7739a69a, 0x163, 0x150000}};
  // 57300961468.8030
  s21_decimal dec_2 = {{0x32894f1e, 0x20926, 0x0, 0x40000}};
  // -57300961462.245814772886406415
  s21_decimal dec_check = {{0xeb88050f, 0x24cd0f44, 0xb9263e91, 0x80120000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_494) {
  // -2004268067850643141558
  s21_decimal dec_1 = {{0x901973b6, 0xa6ce94a4, 0x6c, 0x80000000}};
  // 730432110509861914056241
  s21_decimal dec_2 = {{0x94909631, 0xcdd67189, 0x9aac, 0x0}};
  // -732436378577712557197799
  s21_decimal dec_check = {{0x24aa09e7, 0x74a5062e, 0x9b19, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_495) {
  // -0.09
  s21_decimal dec_1 = {{0x9, 0x0, 0x0, 0x80020000}};
  // -38997.0216137706
  s21_decimal dec_2 = {{0x434b3ea, 0x162ad, 0x0, 0x800a0000}};
  // 38996.9316137706
  s21_decimal dec_check = {{0xce8fcaea, 0x162ac, 0x0, 0xa0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_496) {
  // -51387943
  s21_decimal dec_1 = {{0x3101e27, 0x0, 0x0, 0x80000000}};
  // 4.253193489183
  s21_decimal dec_2 = {{0x46164b1f, 0x3de, 0x0, 0xc0000}};
  // -51387947.253193489183
  s21_decimal dec_check = {{0x31bbb1f, 0xc926a9c3, 0x2, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_497) {
  // -550029650966.10803660519255416
  s21_decimal dec_1 = {{0x7d622d78, 0x8b63b7e1, 0xb1b962e8, 0x80110000}};
  // 416739694868495191450
  s21_decimal dec_2 = {{0x5955cd9a, 0x976cd080, 0x16, 0x0}};
  // -416739695418524842416.10803661
  s21_decimal dec_check = {{0x80c889cd, 0xab26c3fc, 0x86a7e64f, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_498) {
  // 5
  s21_decimal dec_1 = {{0x5, 0x0, 0x0, 0x0}};
  // 1538.474122488
  s21_decimal dec_2 = {{0x34341cf8, 0x166, 0x0, 0x90000}};
  // -1533.474122488
  s21_decimal dec_check = {{0xa2e2af8, 0x165, 0x0, 0x80090000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_499) {
  // -704212744572.2012
  s21_decimal dec_1 = {{0x10dd839c, 0x1904c7, 0x0, 0x80040000}};
  // -77
  s21_decimal dec_2 = {{0x4d, 0x0, 0x0, 0x80000000}};
  // -704212744495.2012
  s21_decimal dec_check = {{0x10d1c3cc, 0x1904c7, 0x0, 0x80040000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_500) {
  // -2790
  s21_decimal dec_1 = {{0xae6, 0x0, 0x0, 0x80000000}};
  // -54287990
  s21_decimal dec_2 = {{0x33c5e76, 0x0, 0x0, 0x80000000}};
  // 54285200
  s21_decimal dec_check = {{0x33c5390, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(fail_s21_sub_1) {
  // -7899506493431690865849958
  s21_decimal dec_1 = {{0x3d82b666, 0x1ae6fcf7, 0x688c9, 0x80000000}};
  // 79228162514264337592516888983
  s21_decimal dec_2 = {{0xc2c84997, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_2) {
  // 79228162514264337592197447781
  s21_decimal dec_1 = {{0xafbe0065, 0xffffffff, 0xffffffff, 0x0}};
  // -28926058423179594341
  s21_decimal dec_2 = {{0x9d0ca65, 0x916e00e1, 0x1, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_3) {
  // -79228162514264337591665928379
  s21_decimal dec_1 = {{0x900fa8bb, 0xffffffff, 0xffffffff, 0x80000000}};
  // 4902493910198766842666611
  s21_decimal dec_2 = {{0x3fbde73, 0xba36ffd3, 0x40e24, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_4) {
  // -79228162514264337592993405267
  s21_decimal dec_1 = {{0xdf2f5953, 0xffffffff, 0xffffffff, 0x80000000}};
  // 830391577
  s21_decimal dec_2 = {{0x317ec519, 0x0, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_5) {
  // -5355247777.559
  s21_decimal dec_1 = {{0xdda43717, 0x4de, 0x0, 0x80030000}};
  // 79228162514264337591437113894
  s21_decimal dec_2 = {{0x826c3a26, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_6) {
  // -6356631916293.21320964
  s21_decimal dec_1 = {{0x20c1ba04, 0x759950e6, 0x22, 0x80080000}};
  // 79228162514264337591906056600
  s21_decimal dec_2 = {{0x9e5fb998, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_7) {
  // 79228162514264337592502763328
  s21_decimal dec_1 = {{0xc1f0bf40, 0xffffffff, 0xffffffff, 0x0}};
  // -2630607130102.0209792899
  s21_decimal dec_2 = {{0x1f824783, 0xe1358bd, 0x592, 0x800a0000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_8) {
  // 1902455334567322278643764
  s21_decimal dec_1 = {{0x895b4834, 0x4f726c9f, 0x192dc, 0x0}};
  // -79228162514264337592364979039
  s21_decimal dec_2 = {{0xb9ba535f, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_9) {
  // 79228162514264337591843384344
  s21_decimal dec_1 = {{0x9aa36c18, 0xffffffff, 0xffffffff, 0x0}};
  // -77246692114637220
  s21_decimal dec_2 = {{0xb9121a4, 0x1126f75, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_10) {
  // -29485548796767546736405354288
  s21_decimal dec_1 = {{0x2639730, 0x1e7fb6f6, 0x5f45dfd3, 0x80000000}};
  // 71524052243056597324575581799
  s21_decimal dec_2 = {{0x82fca667, 0x582cd2fa, 0xe71b4f31, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_11) {
  // 79228162514264337592928723069
  s21_decimal dec_1 = {{0xdb54607d, 0xffffffff, 0xffffffff, 0x0}};
  // -50262116607
  s21_decimal dec_2 = {{0xb3db08ff, 0xb, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_12) {
  // 79228162514264337593093425850
  s21_decimal dec_1 = {{0xe5258aba, 0xffffffff, 0xffffffff, 0x0}};
  // -6910515867887353262692
  s21_decimal dec_2 = {{0x7df0f264, 0x9eac405c, 0x176, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_13) {
  // 79228162514264337591761790787
  s21_decimal dec_1 = {{0x95c66743, 0xffffffff, 0xffffffff, 0x0}};
  // -154957183651.8
  s21_decimal dec_2 = {{0xc9adca66, 0x168, 0x0, 0x80010000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_14) {
  // -9999622909016520878.680967
  s21_decimal dec_1 = {{0xc6476b87, 0xa4e3b5b8, 0x84580, 0x80060000}};
  // 79228162514264337592073353269
  s21_decimal dec_2 = {{0xa8587835, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_15) {
  // -79228162514264337591948381616
  s21_decimal dec_1 = {{0xa0e58db0, 0xffffffff, 0xffffffff, 0x80000000}};
  // 99359736908023760.912369640204
  s21_decimal dec_2 = {{0xc704e30c, 0xa9d3014c, 0x410c72b2, 0xc0000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_16) {
  // 79228162514264337593321275999
  s21_decimal dec_1 = {{0xf2ba425f, 0xffffffff, 0xffffffff, 0x0}};
  // -63151415152328
  s21_decimal dec_2 = {{0x95aacec8, 0x396f, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_17) {
  // -253390715867
  s21_decimal dec_1 = {{0xff437bdb, 0x3a, 0x0, 0x80000000}};
  // 79228162514264337593256399694
  s21_decimal dec_2 = {{0xeedc534e, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_18) {
  // 2841746158455064
  s21_decimal dec_1 = {{0x96510918, 0xa188d, 0x0, 0x0}};
  // -79228162514264337592736903465
  s21_decimal dec_2 = {{0xcfe57129, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_19) {
  // 302654714711347450295976
  s21_decimal dec_1 = {{0x4fef36a8, 0xf1e8e891, 0x4016, 0x0}};
  // -79228162514264337593269126793
  s21_decimal dec_2 = {{0xef9e8689, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_20) {
  // 1635446755534039823995966
  s21_decimal dec_1 = {{0x4384d43e, 0xbf0b55ef, 0x15a51, 0x0}};
  // -79228162514264337593531024754
  s21_decimal dec_2 = {{0xff3ac572, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_21) {
  // 69473548288014
  s21_decimal dec_1 = {{0x922ac00e, 0x3f2f, 0x0, 0x0}};
  // -79228162514264337593235639196
  s21_decimal dec_2 = {{0xed9f8b9c, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_22) {
  // -77344324553147868998306164056
  s21_decimal dec_1 = {{0x86d8ed58, 0x7f51e036, 0xf9e9b9cb, 0x80000000}};
  // 79228162514264337593265608968
  s21_decimal dec_2 = {{0xef68d908, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_23) {
  // -25973254267896.3
  s21_decimal dec_1 = {{0xb1f167b3, 0xec39, 0x0, 0x80010000}};
  // 79228162514264337593134902749
  s21_decimal dec_2 = {{0xe79e6ddd, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_24) {
  // 85132880142
  s21_decimal dec_1 = {{0xd250a90e, 0x13, 0x0, 0x0}};
  // -79228162514264337591693771769
  s21_decimal dec_2 = {{0x91b883f9, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_25) {
  // -79228162514264337593470205360
  s21_decimal dec_1 = {{0xfb9abdb0, 0xffffffff, 0xffffffff, 0x80000000}};
  // 7650285754928920569230286
  s21_decimal dec_2 = {{0x80c6b3ce, 0xd26044c2, 0x65402, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_26) {
  // 79228162514264337591972595437
  s21_decimal dec_1 = {{0xa25706ed, 0xffffffff, 0xffffffff, 0x0}};
  // -187074125511
  s21_decimal dec_2 = {{0x8e7c9ec7, 0x2b, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_27) {
  // -997030488899581
  s21_decimal dec_1 = {{0x401efffd, 0x38acb, 0x0, 0x80000000}};
  // 79228162514264337592273498160
  s21_decimal dec_2 = {{0xb4467030, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_28) {
  // -79228162514264337593502932112
  s21_decimal dec_1 = {{0xfd8e1c90, 0xffffffff, 0xffffffff, 0x80000000}};
  // 603197429482008835180.43108
  s21_decimal dec_2 = {{0x5705f3e4, 0xd141cda7, 0x31e533, 0x50000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_29) {
  // 79228162514264337593224685800
  s21_decimal dec_1 = {{0xecf868e8, 0xffffffff, 0xffffffff, 0x0}};
  // -72329499750840030
  s21_decimal dec_2 = {{0xfb6e36de, 0x100f74b, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_30) {
  // -79228162514264337592334091262
  s21_decimal dec_1 = {{0xb7e303fe, 0xffffffff, 0xffffffff, 0x80000000}};
  // 258157935914595619300336095
  s21_decimal dec_2 = {{0xe1e261df, 0xbf86afdc, 0xd58b11, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_31) {
  // -43582174488183535410266430786
  s21_decimal dec_1 = {{0x1a02dd42, 0x1627dde7, 0x8cd2546d, 0x80000000}};
  // 62591273246310291285538484454
  s21_decimal dec_2 = {{0xdd23b0e6, 0x9d3a6843, 0xca3e49a9, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_32) {
  // -1976531201061256837991781
  s21_decimal dec_1 = {{0x6f580d65, 0xf89a9618, 0x1a28b, 0x80000000}};
  // 79228162514264337592762557043
  s21_decimal dec_2 = {{0xd16ce273, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_33) {
  // -79228162514264337592686396095
  s21_decimal dec_1 = {{0xcce2c2bf, 0xffffffff, 0xffffffff, 0x80000000}};
  // 1488346285765610
  s21_decimal dec_2 = {{0x9faa73ea, 0x549a4, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_34) {
  // 74750854904224376
  s21_decimal dec_1 = {{0xa9391a78, 0x1099181, 0x0, 0x0}};
  // -79228162514264337592926435853
  s21_decimal dec_2 = {{0xdb317a0d, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_35) {
  // -752136331785
  s21_decimal dec_1 = {{0x1ed1a209, 0xaf, 0x0, 0x80000000}};
  // 79228162514264337592243790059
  s21_decimal dec_2 = {{0xb28120eb, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_36) {
  // 1200281511437725057034.940
  s21_decimal dec_1 = {{0x1862abc, 0x6420189d, 0xfe2b, 0x30000}};
  // -79228162514264337591806607353
  s21_decimal dec_2 = {{0x98723ff9, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_37) {
  // -79228162514264337593039215155
  s21_decimal dec_1 = {{0xe1ea5a33, 0xffffffff, 0xffffffff, 0x80000000}};
  // 18243454355821561205613188643
  s21_decimal dec_2 = {{0x603cd623, 0x4fa3d772, 0x3af2a1ba, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_38) {
  // 26550873366
  s21_decimal dec_1 = {{0x2e8e2d16, 0x6, 0x0, 0x0}};
  // -79228162514264337592048810417
  s21_decimal dec_2 = {{0xa6e1f9b1, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_39) {
  // 79228162514264337593381933083
  s21_decimal dec_1 = {{0xf657d01b, 0xffffffff, 0xffffffff, 0x0}};
  // -1711983236961000802
  s21_decimal dec_2 = {{0xfc7bdd62, 0x17c22fae, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_40) {
  // 79228162514264337591872260968
  s21_decimal dec_1 = {{0x9c5c0b68, 0xffffffff, 0xffffffff, 0x0}};
  // -5664292568
  s21_decimal dec_2 = {{0x519e3ed8, 0x1, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_41) {
  // -114086148689742955660058
  s21_decimal dec_1 = {{0xed75c31a, 0x9f5d02ff, 0x1828, 0x80000000}};
  // 79228162514264337591817064562
  s21_decimal dec_2 = {{0x9911d072, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_42) {
  // 88062402228888.05
  s21_decimal dec_1 = {{0x944ac365, 0x1f493a, 0x0, 0x20000}};
  // -79228162514264337592862358667
  s21_decimal dec_2 = {{0xd75fbc8b, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_43) {
  // -79228162514264337592413501246
  s21_decimal dec_1 = {{0xbc9eb73e, 0xffffffff, 0xffffffff, 0x80000000}};
  // 23819271267253174179057
  s21_decimal dec_2 = {{0xadf094f1, 0x3ecad9a8, 0x50b, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_44) {
  // 79228162514264337593356108453
  s21_decimal dec_1 = {{0xf4cdc2a5, 0xffffffff, 0xffffffff, 0x0}};
  // -11601034320.40
  s21_decimal dec_2 = {{0x1b8d8f68, 0x10e, 0x0, 0x80020000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_45) {
  // -72010212606677549
  s21_decimal dec_1 = {{0x269f122d, 0xffd4e8, 0x0, 0x80000000}};
  // 79228162514264337592068956928
  s21_decimal dec_2 = {{0xa8156300, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_46) {
  // 33089110315
  s21_decimal dec_1 = {{0xb443c12b, 0x7, 0x0, 0x0}};
  // -79228162514264337592441694126
  s21_decimal dec_2 = {{0xbe4ce7ae, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_47) {
  // 8671519200
  s21_decimal dec_1 = {{0x4dce1e0, 0x2, 0x0, 0x0}};
  // -79228162514264337592097398452
  s21_decimal dec_2 = {{0xa9c75eb4, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_48) {
  // 79228162514264337593217753791
  s21_decimal dec_1 = {{0xec8ea2bf, 0xffffffff, 0xffffffff, 0x0}};
  // -58555724396315.43817974381
  s21_decimal dec_2 = {{0x223b26d, 0x37cf7c78, 0x4d7f7, 0x800b0000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_49) {
  // -79228162514264337593133311452
  s21_decimal dec_1 = {{0xe78625dc, 0xffffffff, 0xffffffff, 0x80000000}};
  // 6580324213
  s21_decimal dec_2 = {{0x8837c775, 0x1, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_50) {
  // 981900230151813501998
  s21_decimal dec_1 = {{0x2124942e, 0x3a9a60fe, 0x35, 0x0}};
  // -79228162514264337592662445028
  s21_decimal dec_2 = {{0xcb754be4, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_51) {
  // -79228162514264337592335515204
  s21_decimal dec_1 = {{0xb7f8be44, 0xffffffff, 0xffffffff, 0x80000000}};
  // 4670134652049283
  s21_decimal dec_2 = {{0x74fd1783, 0x109776, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_52) {
  // 601290143929428490177015
  s21_decimal dec_1 = {{0xbec9c9f7, 0x1074418, 0x7f54, 0x0}};
  // -79228162514264337592493547821
  s21_decimal dec_2 = {{0xc164212d, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_53) {
  // 71571324663
  s21_decimal dec_1 = {{0xa9fbbef7, 0x10, 0x0, 0x0}};
  // -79228162514264337592920116100
  s21_decimal dec_2 = {{0xdad10b84, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_54) {
  // 79228162514264337591820413222
  s21_decimal dec_1 = {{0x9944e926, 0xffffffff, 0xffffffff, 0x0}};
  // -9124281925761
  s21_decimal dec_2 = {{0x69954081, 0x84c, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_55) {
  // 79228162514264337592147257306
  s21_decimal dec_1 = {{0xacc027da, 0xffffffff, 0xffffffff, 0x0}};
  // -8151768214784678
  s21_decimal dec_2 = {{0x70bbcaa6, 0x1cf5fd, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_56) {
  // 79228162514264337593072225515
  s21_decimal dec_1 = {{0xe3e20ceb, 0xffffffff, 0xffffffff, 0x0}};
  // -4425488282699730
  s21_decimal dec_2 = {{0x490c47d2, 0xfb8f5, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_57) {
  // -65890303866
  s21_decimal dec_1 = {{0x575e3f7a, 0xf, 0x0, 0x80000000}};
  // 79228162514264337592817577174
  s21_decimal dec_2 = {{0xd4b46cd6, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_58) {
  // -3473786625879
  s21_decimal dec_1 = {{0xcdd15f57, 0x328, 0x0, 0x80000000}};
  // 79228162514264337593457338641
  s21_decimal dec_2 = {{0xfad66911, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_59) {
  // -41449097937795528894593072335
  s21_decimal dec_1 = {{0x236b7ccf, 0x960bcf62, 0x85ede3e5, 0x80000000}};
  // 79228162514264337591810979993
  s21_decimal dec_2 = {{0x98b4f899, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_60) {
  // 7325184528
  s21_decimal dec_1 = {{0xb49d7210, 0x1, 0x0, 0x0}};
  // -79228162514264337591509118683
  s21_decimal dec_2 = {{0x86b6eedb, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_61) {
  // -465946976237207632660
  s21_decimal dec_1 = {{0xe2233b14, 0x42503231, 0x19, 0x80000000}};
  // 79228162514264337592243005802
  s21_decimal dec_2 = {{0xb275296a, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_62) {
  // -79228162514264337592790674102
  s21_decimal dec_1 = {{0xd319eab6, 0xffffffff, 0xffffffff, 0x80000000}};
  // 478595780209293841690173408
  s21_decimal dec_2 = {{0xf02e9fe0, 0x3b75c19c, 0x18be299, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_63) {
  // 79228162514264337593043836956
  s21_decimal dec_1 = {{0xe230e01c, 0xffffffff, 0xffffffff, 0x0}};
  // -5822115469
  s21_decimal dec_2 = {{0x5b066e8d, 0x1, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_64) {
  // -79228162514264337592069575610
  s21_decimal dec_1 = {{0xa81ed3ba, 0xffffffff, 0xffffffff, 0x80000000}};
  // 9228666050592191407003830365
  s21_decimal dec_2 = {{0xdf48885d, 0xf4cac95, 0x1dd1c60d, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_65) {
  // -79228162514264337592651537726
  s21_decimal dec_1 = {{0xcacedd3e, 0xffffffff, 0xffffffff, 0x80000000}};
  // 7340525810218399873729592965
  s21_decimal dec_2 = {{0x892c7e85, 0x87ff0a04, 0x17b7f0cd, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_66) {
  // 79228162514264337591773917775
  s21_decimal dec_1 = {{0x967f724f, 0xffffffff, 0xffffffff, 0x0}};
  // -11061621989122303298957477
  s21_decimal dec_2 = {{0x8c40f0a5, 0xbac679a7, 0x92663, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_67) {
  // 5237651402278100540119115
  s21_decimal dec_1 = {{0xfe08d84b, 0xa6c5a97a, 0x4551d, 0x0}};
  // -79228162514264337593109250505
  s21_decimal dec_2 = {{0xe61701c9, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_68) {
  // 94752920073.1
  s21_decimal dec_1 = {{0x9d24345b, 0xdc, 0x0, 0x10000}};
  // -79228162514264337591732514254
  s21_decimal dec_2 = {{0x9407adce, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_69) {
  // -79228162514264337593329255296
  s21_decimal dec_1 = {{0xf3340380, 0xffffffff, 0xffffffff, 0x80000000}};
  // 372735365289858097513891.8121
  s21_decimal dec_2 = {{0xd644ee9, 0x679bcd94, 0xc0b31d6, 0x40000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_70) {
  // 79228162514264337592691697263
  s21_decimal dec_1 = {{0xcd33a66f, 0xffffffff, 0xffffffff, 0x0}};
  // -375617751384123491
  s21_decimal dec_2 = {{0xd294e863, 0x536765a, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_71) {
  // 79228162514264337593170253516
  s21_decimal dec_1 = {{0xe9b9d6cc, 0xffffffff, 0xffffffff, 0x0}};
  // -726032913846737085
  s21_decimal dec_2 = {{0xa51398bd, 0xa136316, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_72) {
  // -761097120308
  s21_decimal dec_1 = {{0x34ec6a34, 0xb1, 0x0, 0x80000000}};
  // 79228162514264337592859617091
  s21_decimal dec_2 = {{0xd735e743, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_73) {
  // -42479908912063056
  s21_decimal dec_1 = {{0x88cb6250, 0x96eb40, 0x0, 0x80000000}};
  // 79228162514264337593093449266
  s21_decimal dec_2 = {{0xe525e632, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_74) {
  // 79228162514264337591912177173
  s21_decimal dec_1 = {{0x9ebd1e15, 0xffffffff, 0xffffffff, 0x0}};
  // -8389227249688017427709
  s21_decimal dec_2 = {{0x718cdcfd, 0xc7ea678f, 0x1c6, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_75) {
  // 79228162514264337592020978651
  s21_decimal dec_1 = {{0xa5394bdb, 0xffffffff, 0xffffffff, 0x0}};
  // -6308721434679383707516835
  s21_decimal dec_2 = {{0xc0367fa3, 0x7968ba34, 0x537ec, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_76) {
  // -79228162514264337592928048694
  s21_decimal dec_1 = {{0xdb4a1636, 0xffffffff, 0xffffffff, 0x80000000}};
  // 4556382272738.110722684578
  s21_decimal dec_2 = {{0xad0e36a2, 0xfa5a3367, 0x3c4d9, 0xc0000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_77) {
  // -79228162514264337591511410627
  s21_decimal dec_1 = {{0x86d9e7c3, 0xffffffff, 0xffffffff, 0x80000000}};
  // 4781312784
  s21_decimal dec_2 = {{0x1cfd0b10, 0x1, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_78) {
  // 79228162514264337592756590793
  s21_decimal dec_1 = {{0xd111d8c9, 0xffffffff, 0xffffffff, 0x0}};
  // -381383358040643968441064
  s21_decimal dec_2 = {{0x59a01ae8, 0xd550fa55, 0x50c2, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_79) {
  // 79228162514264337592298375694
  s21_decimal dec_1 = {{0xb5c20a0e, 0xffffffff, 0xffffffff, 0x0}};
  // -40077027579
  s21_decimal dec_2 = {{0x54c6e8fb, 0x9, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_80) {
  // 79228162514264337593390945994
  s21_decimal dec_1 = {{0xf6e156ca, 0xffffffff, 0xffffffff, 0x0}};
  // -7110521374630779941123027648
  s21_decimal dec_2 = {{0xd7cc72c0, 0x180e1cf1, 0x16f9af78, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_81) {
  // -79228162514264337592442637332
  s21_decimal dec_1 = {{0xbe5b4c14, 0xffffffff, 0xffffffff, 0x80000000}};
  // 388397436518876.95
  s21_decimal dec_2 = {{0x8389ba4f, 0x89fc8a, 0x0, 0x20000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_82) {
  // 345832959993793749434.0672
  s21_decimal dec_1 = {{0x70657440, 0x6c5b800b, 0x2dc54, 0x40000}};
  // -79228162514264337592646981455
  s21_decimal dec_2 = {{0xca89574f, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_83) {
  // 333916341347
  s21_decimal dec_1 = {{0xbef70463, 0x4d, 0x0, 0x0}};
  // -79228162514264337592771431314
  s21_decimal dec_2 = {{0xd1f44b92, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_84) {
  // -3892522002
  s21_decimal dec_1 = {{0xe8032c12, 0x0, 0x0, 0x80000000}};
  // 79228162514264337592089518752
  s21_decimal dec_2 = {{0xa94f22a0, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_85) {
  // 16463908105077
  s21_decimal dec_1 = {{0x4d64eb75, 0xef9, 0x0, 0x0}};
  // -79228162514264337591887210377
  s21_decimal dec_2 = {{0x9d402789, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_86) {
  // -79228162514264337592905665928
  s21_decimal dec_1 = {{0xd9f48d88, 0xffffffff, 0xffffffff, 0x80000000}};
  // 357677089128198
  s21_decimal dec_2 = {{0x2fd77f06, 0x1454e, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_87) {
  // -79228162514264337593496245571
  s21_decimal dec_1 = {{0xfd281543, 0xffffffff, 0xffffffff, 0x80000000}};
  // 717712435
  s21_decimal dec_2 = {{0x2ac76c33, 0x0, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_88) {
  // -10287899700033.01
  s21_decimal dec_1 = {{0xd4b5e565, 0x3a7ad, 0x0, 0x80020000}};
  // 79228162514264337591471911529
  s21_decimal dec_2 = {{0x847f3269, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_89) {
  // -9103376225235093573
  s21_decimal dec_1 = {{0xf1dfc845, 0x7e55b071, 0x0, 0x80000000}};
  // 79228162514264337591919717321
  s21_decimal dec_2 = {{0x9f302bc9, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_90) {
  // -6397778296264.6027155
  s21_decimal dec_1 = {{0xbd8e0b93, 0x77debea2, 0x3, 0x80070000}};
  // 79228162514264337592717569838
  s21_decimal dec_2 = {{0xcebe6f2e, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_91) {
  // 522447729770620673879
  s21_decimal dec_1 = {{0xff1e5f57, 0x526b322d, 0x1c, 0x0}};
  // -79228162514264337592428475381
  s21_decimal dec_2 = {{0xbd8333f5, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_92) {
  // 79228162514264337591651880785
  s21_decimal dec_1 = {{0x8f394f51, 0xffffffff, 0xffffffff, 0x0}};
  // -3600888099136655
  s21_decimal dec_2 = {{0x1806648f, 0xccafd, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_93) {
  // 79228162514264337592371706970
  s21_decimal dec_1 = {{0xba20fc5a, 0xffffffff, 0xffffffff, 0x0}};
  // -474357230769829727903874
  s21_decimal dec_2 = {{0xa0832082, 0xf4fe64d6, 0x6472, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_94) {
  // -28897306861735.961
  s21_decimal dec_1 = {{0x8e759019, 0x66a9f2, 0x0, 0x80030000}};
  // 79228162514264337593293946241
  s21_decimal dec_2 = {{0xf1193d81, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_95) {
  // 3401412466
  s21_decimal dec_1 = {{0xcabd6f72, 0x0, 0x0, 0x0}};
  // -79228162514264337591570979557
  s21_decimal dec_2 = {{0x8a66dae5, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_96) {
  // 7362242657
  s21_decimal dec_1 = {{0xb6d2e861, 0x1, 0x0, 0x0}};
  // -79228162514264337592226206067
  s21_decimal dec_2 = {{0xb174d173, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_97) {
  // 9031480078142.8585442
  s21_decimal dec_1 = {{0x6938f3e2, 0xe55ea0cd, 0x4, 0x70000}};
  // -79228162514264337593246597198
  s21_decimal dec_2 = {{0xee46c04e, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_98) {
  // 24300304175754644170300269
  s21_decimal dec_1 = {{0xafa55b6d, 0x21043769, 0x1419ca, 0x0}};
  // -79228162514264337592011723368
  s21_decimal dec_2 = {{0xa4ac1268, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_99) {
  // 79228162514264337592592917304
  s21_decimal dec_1 = {{0xc7506338, 0xffffffff, 0xffffffff, 0x0}};
  // -266175054931946309287782.3363
  s21_decimal dec_2 = {{0x41088d83, 0x68ca0100, 0x899bf9a, 0x80040000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_100) {
  // -426404958706726.1993
  s21_decimal dec_1 = {{0xedcb9429, 0x3b2cf281, 0x0, 0x80040000}};
  // 79228162514264337591884633287
  s21_decimal dec_2 = {{0x9d18d4c7, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_101) {
  // 79228162514264337592315707583
  s21_decimal dec_1 = {{0xb6ca80bf, 0xffffffff, 0xffffffff, 0x0}};
  // -79228162514264337591496698282
  s21_decimal dec_2 = {{0x85f969aa, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_102) {
  // -20443204680230207865870770330
  s21_decimal dec_1 = {{0x59da609a, 0x57f447af, 0x420e38fa, 0x80000000}};
  // 62646291596252481575251372670
  s21_decimal dec_2 = {{0xe7e06a7e, 0x57430f39, 0xca6bcc40, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_103) {
  // 7360687533688884997788818
  s21_decimal dec_1 = {{0x483a1492, 0xabb65015, 0x616af, 0x0}};
  // -79228162514264337592372519310
  s21_decimal dec_2 = {{0xba2d618e, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_104) {
  // -79228162514264337591662525577
  s21_decimal dec_1 = {{0x8fdbbc89, 0xffffffff, 0xffffffff, 0x80000000}};
  // 24149777454460176
  s21_decimal dec_2 = {{0x3a93ed10, 0x55cc18, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_105) {
  // -79228162514264337591577826720
  s21_decimal dec_1 = {{0x8acf55a0, 0xffffffff, 0xffffffff, 0x80000000}};
  // 57805054141
  s21_decimal dec_2 = {{0x757320bd, 0xd, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_106) {
  // -40869448370280133943
  s21_decimal dec_1 = {{0xd4b6f537, 0x372d72c1, 0x2, 0x80000000}};
  // 79228162514264337591657255337
  s21_decimal dec_2 = {{0x8f8b51a9, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_107) {
  // -416697806157124396017
  s21_decimal dec_1 = {{0xb7fae3f1, 0x96d7fef0, 0x16, 0x80000000}};
  // 79228162514264337592079565646
  s21_decimal dec_2 = {{0xa8b7434e, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_108) {
  // 79228162514264337592232750417
  s21_decimal dec_1 = {{0xb1d8ad51, 0xffffffff, 0xffffffff, 0x0}};
  // -8832386646232.033747
  s21_decimal dec_2 = {{0xd79069d3, 0x7a92f0db, 0x0, 0x80060000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_109) {
  // 79228162514264337591615657679
  s21_decimal dec_1 = {{0x8d1096cf, 0xffffffff, 0xffffffff, 0x0}};
  // -59461827563
  s21_decimal dec_2 = {{0xd8337beb, 0xd, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_110) {
  // 79228162514264337593184373777
  s21_decimal dec_1 = {{0xea914c11, 0xffffffff, 0xffffffff, 0x0}};
  // -7400279815137
  s21_decimal dec_2 = {{0x30cb3e1, 0x6bb, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_111) {
  // -79228162514264337592202901808
  s21_decimal dec_1 = {{0xb0113930, 0xffffffff, 0xffffffff, 0x80000000}};
  // 8771662373
  s21_decimal dec_2 = {{0xad4f225, 0x2, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_112) {
  // -2822326117508901
  s21_decimal dec_1 = {{0x1aca725, 0xa06e4, 0x0, 0x80000000}};
  // 79228162514264337591701012819
  s21_decimal dec_2 = {{0x92270153, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_113) {
  // -79228162514264337593097888095
  s21_decimal dec_1 = {{0xe569a15f, 0xffffffff, 0xffffffff, 0x80000000}};
  // 7196148088814457073
  s21_decimal dec_2 = {{0x58e450f1, 0x63ddda8f, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_114) {
  // -79228162514264337592529500726
  s21_decimal dec_1 = {{0xc388ba36, 0xffffffff, 0xffffffff, 0x80000000}};
  // 234343708435402220529045653
  s21_decimal dec_2 = {{0xa3fcd095, 0xe3c34a30, 0xc1d835, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_115) {
  // 57848383757.1467
  s21_decimal dec_1 = {{0xc3a5918b, 0x20e20, 0x0, 0x40000}};
  // -79228162514264337591995907032
  s21_decimal dec_2 = {{0xa3babbd8, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_116) {
  // 874929548518431009
  s21_decimal dec_1 = {{0xeeef1921, 0xc245fc9, 0x0, 0x0}};
  // -79228162514264337591708302066
  s21_decimal dec_2 = {{0x92963af2, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_117) {
  // 79228162514264337591567152366
  s21_decimal dec_1 = {{0x8a2c74ee, 0xffffffff, 0xffffffff, 0x0}};
  // -14739671291429
  s21_decimal dec_2 = {{0xd8df1625, 0xd67, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_118) {
  // 79228162514264337593212196894
  s21_decimal dec_1 = {{0xec39d81e, 0xffffffff, 0xffffffff, 0x0}};
  // -743853668106040316260
  s21_decimal dec_2 = {{0x6bd91164, 0x530b1a09, 0x28, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_119) {
  // -79228162514264337592464868731
  s21_decimal dec_1 = {{0xbfae857b, 0xffffffff, 0xffffffff, 0x80000000}};
  // 790821806379.2689683
  s21_decimal dec_2 = {{0xf2b0d213, 0x6dbfa26d, 0x0, 0x70000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_120) {
  // 337154145.4
  s21_decimal dec_1 = {{0xc8f5a3ce, 0x0, 0x0, 0x10000}};
  // -79228162514264337593543655741
  s21_decimal dec_2 = {{0xfffb813d, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_121) {
  // -79228162514264337592662870012
  s21_decimal dec_1 = {{0xcb7bc7fc, 0xffffffff, 0xffffffff, 0x80000000}};
  // 918770055391265507
  s21_decimal dec_2 = {{0x5ddcc2e3, 0xcc0207f, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_122) {
  // 26242573979018536218953682576
  s21_decimal dec_1 = {{0xfbc28e90, 0xfbb13e55, 0x54cb5931, 0x0}};
  // -79228162514264337592016090873
  s21_decimal dec_2 = {{0xa4eeb6f9, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_123) {
  // 79228162514264337592255488644
  s21_decimal dec_1 = {{0xb333a284, 0xffffffff, 0xffffffff, 0x0}};
  // -336851710113.393249755
  s21_decimal dec_2 = {{0x9ba98ddb, 0x42c1ada1, 0x12, 0x80090000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_124) {
  // -648657871769
  s21_decimal dec_1 = {{0x705a399, 0x97, 0x0, 0x80000000}};
  // 79228162514264337592080607356
  s21_decimal dec_2 = {{0xa8c7287c, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_125) {
  // -79228162514264337593110664750
  s21_decimal dec_1 = {{0xe62c962e, 0xffffffff, 0xffffffff, 0x80000000}};
  // 1418526665408005
  s21_decimal dec_2 = {{0x79fefe05, 0x50a24, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_126) {
  // 4214040572712360302146570104
  s21_decimal dec_1 = {{0xabf94778, 0x319f7fd8, 0xd9dc5cd, 0x0}};
  // -78363498131392824492480280284
  s21_decimal dec_2 = {{0x23c836dc, 0xe188c827, 0xfd34c431, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_127) {
  // -79228162514264337593400274003
  s21_decimal dec_1 = {{0xf76fac53, 0xffffffff, 0xffffffff, 0x80000000}};
  // 3150424908514.77518765304
  s21_decimal dec_2 = {{0xd8434cf8, 0x7cd6a6c3, 0x42b6, 0xb0000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_128) {
  // 79228162514264337592356478675
  s21_decimal dec_1 = {{0xb9389ed3, 0xffffffff, 0xffffffff, 0x0}};
  // -5502672549480015.475714
  s21_decimal dec_2 = {{0xe96a3402, 0x4cec0957, 0x12a, 0x80060000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_129) {
  // 79228162514264337593523391738
  s21_decimal dec_1 = {{0xfec64cfa, 0xffffffff, 0xffffffff, 0x0}};
  // -142865018715351347728119.57
  s21_decimal dec_2 = {{0x80dbd8b5, 0xd17d363a, 0xbd148, 0x80020000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_130) {
  // -79228162514264337591714651028
  s21_decimal dec_1 = {{0x92f71b94, 0xffffffff, 0xffffffff, 0x80000000}};
  // 50221450683.188721306527760928
  s21_decimal dec_2 = {{0x7f2e8220, 0xcde95531, 0xa24635d8, 0x120000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_131) {
  // 513459080784863963173
  s21_decimal dec_1 = {{0x106a2825, 0xd5ad198d, 0x1b, 0x0}};
  // -79228162514264337592460338004
  s21_decimal dec_2 = {{0xbf696354, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_132) {
  // 79228162514264337593487832597
  s21_decimal dec_1 = {{0xfca7b615, 0xffffffff, 0xffffffff, 0x0}};
  // -1080106846293581483090442094
  s21_decimal dec_2 = {{0x3ef4f76e, 0x76a146ee, 0x37d7185, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_133) {
  // -532590860127647805915130.5
  s21_decimal dec_1 = {{0xe3537fc9, 0x1573cbd2, 0x467ce, 0x80010000}};
  // 79228162514264337592774430788
  s21_decimal dec_2 = {{0xd2221044, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_134) {
  // 179198859841549293
  s21_decimal dec_1 = {{0xe102b3ed, 0x27ca469, 0x0, 0x0}};
  // -79228162514264337593479676290
  s21_decimal dec_2 = {{0xfc2b4182, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_135) {
  // 8333176028931
  s21_decimal dec_1 = {{0x37ff3f03, 0x794, 0x0, 0x0}};
  // -79228162514264337592024258045
  s21_decimal dec_2 = {{0xa56b55fd, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_136) {
  // -64956463709604044448752136736
  s21_decimal dec_1 = {{0x43bef220, 0x8be29e45, 0xd1e2ba39, 0x80000000}};
  // 21737360459736822274212241380
  s21_decimal dec_2 = {{0x17501fe4, 0xba34276e, 0x463cb91f, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_137) {
  // -2238022618373.2252532
  s21_decimal dec_1 = {{0x7a41cf74, 0x36968923, 0x1, 0x80070000}};
  // 79228162514264337591664910307
  s21_decimal dec_2 = {{0x90001fe3, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_138) {
  // -90844084299.4404617
  s21_decimal dec_1 = {{0x32234d09, 0xc9b6e22, 0x0, 0x80070000}};
  // 79228162514264337591823878049
  s21_decimal dec_2 = {{0x9979c7a1, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_139) {
  // 79228162514264337592197770737
  s21_decimal dec_1 = {{0xafc2edf1, 0xffffffff, 0xffffffff, 0x0}};
  // -266498185312522313142.780
  s21_decimal dec_2 = {{0xcbb011fc, 0xe54455d6, 0x386e, 0x80030000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_140) {
  // -801205268543541289148039
  s21_decimal dec_1 = {{0x2ef7de87, 0x6cb514e8, 0xa9a9, 0x80000000}};
  // 79228162514264337592915725483
  s21_decimal dec_2 = {{0xda8e0cab, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_141) {
  // 54337960013028256
  s21_decimal dec_1 = {{0x34655ba0, 0xc10c16, 0x0, 0x0}};
  // -79228162514264337591928480590
  s21_decimal dec_2 = {{0x9fb5e34e, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_142) {
  // 79228162514264337593012904410
  s21_decimal dec_1 = {{0xe058e1da, 0xffffffff, 0xffffffff, 0x0}};
  // -27122285604399915176104
  s21_decimal dec_2 = {{0x83c390a8, 0x4d53112c, 0x5be, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_143) {
  // -79228162514264337592265477116
  s21_decimal dec_1 = {{0xb3cc0bfc, 0xffffffff, 0xffffffff, 0x80000000}};
  // 839081240154705697929
  s21_decimal dec_2 = {{0x1b771c89, 0x7c976647, 0x2d, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_144) {
  // 79228162514264337593295456823
  s21_decimal dec_1 = {{0xf1304a37, 0xffffffff, 0xffffffff, 0x0}};
  // -314876230374.484932026527
  s21_decimal dec_2 = {{0x761fe09f, 0x7982c7d3, 0x42ad, 0x800c0000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_145) {
  // 79228162514264337592171424220
  s21_decimal dec_1 = {{0xae30e9dc, 0xffffffff, 0xffffffff, 0x0}};
  // -63374113576770736
  s21_decimal dec_2 = {{0xa7b2dcb0, 0xe1266b, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_146) {
  // 2881726042498.276286415
  s21_decimal dec_1 = {{0xfdfc5fcf, 0x37fb879c, 0x9c, 0x90000}};
  // -79228162514264337591463214508
  s21_decimal dec_2 = {{0x83fa7dac, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_147) {
  // -8856348148404
  s21_decimal dec_1 = {{0x77c42b4, 0x80e, 0x0, 0x80000000}};
  // 79228162514264337592714393676
  s21_decimal dec_2 = {{0xce8df84c, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_148) {
  // -1303055241609916263120
  s21_decimal dec_1 = {{0x95dd2ad0, 0xa3862e5c, 0x46, 0x80000000}};
  // 79228162514264337592245867893
  s21_decimal dec_2 = {{0xb2a0d575, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_149) {
  // 79228162514264337591411411471
  s21_decimal dec_1 = {{0x80e40a0f, 0xffffffff, 0xffffffff, 0x0}};
  // -8984064360954995691495911
  s21_decimal dec_2 = {{0x921821e7, 0x1ada638e, 0x76e73, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_150) {
  // 7371348386953
  s21_decimal dec_1 = {{0x469a2489, 0x6b4, 0x0, 0x0}};
  // -79228162514264337592418235873
  s21_decimal dec_2 = {{0xbce6f5e1, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_151) {
  // 1210498796
  s21_decimal dec_1 = {{0x4826beec, 0x0, 0x0, 0x0}};
  // -79228162514264337593045723121
  s21_decimal dec_2 = {{0xe24da7f1, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_152) {
  // -819193928060546596.1953
  s21_decimal dec_1 = {{0xc9d265e1, 0x15febcf4, 0x1bc, 0x80040000}};
  // 79228162514264337592543255030
  s21_decimal dec_2 = {{0xc45a99f6, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_153) {
  // -1533990956300.69841198222
  s21_decimal dec_1 = {{0xa936fc8e, 0xc8195c4e, 0x207b, 0x800b0000}};
  // 79228162514264337593397821674
  s21_decimal dec_2 = {{0xf74a40ea, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_154) {
  // -58789304585247.1663253474
  s21_decimal dec_1 = {{0xde43d7e2, 0xbef1abf8, 0x7c7d, 0x800a0000}};
  // 79228162514264337591625921103
  s21_decimal dec_2 = {{0x8dad324f, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_155) {
  // 7422485357876490358386191407.2
  s21_decimal dec_1 = {{0x6e6b39d8, 0x20326338, 0xefd55c1f, 0x10000}};
  // -79228162514264337592331723828
  s21_decimal dec_2 = {{0xb7bee434, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_156) {
  // -79228162514264337592820656569
  s21_decimal dec_1 = {{0xd4e369b9, 0xffffffff, 0xffffffff, 0x80000000}};
  // 7922214740373
  s21_decimal dec_2 = {{0x88cba195, 0x734, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_157) {
  // 79228162514264337592821006309
  s21_decimal dec_1 = {{0xd4e8bfe5, 0xffffffff, 0xffffffff, 0x0}};
  // -1413663516.0136985136
  s21_decimal dec_2 = {{0x6f432a30, 0xc42f6ac7, 0x0, 0x800a0000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_158) {
  // -7304468868569
  s21_decimal dec_1 = {{0xb445add9, 0x6a4, 0x0, 0x80000000}};
  // 79228162514264337593134820112
  s21_decimal dec_2 = {{0xe79d2b10, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_159) {
  // 79228162514264337593137953654
  s21_decimal dec_1 = {{0xe7ccfb76, 0xffffffff, 0xffffffff, 0x0}};
  // -4056922642
  s21_decimal dec_2 = {{0xf1cfba12, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_160) {
  // 4956502650
  s21_decimal dec_1 = {{0x276e3a7a, 0x1, 0x0, 0x0}};
  // -79228162514264337592471055359
  s21_decimal dec_2 = {{0xc00cebff, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_161) {
  // 79228162514264337593457501528
  s21_decimal dec_1 = {{0xfad8e558, 0xffffffff, 0xffffffff, 0x0}};
  // -36752347858257
  s21_decimal dec_2 = {{0x12a38551, 0x216d, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_162) {
  // -79228162514264337593270710428
  s21_decimal dec_1 = {{0xefb6b09c, 0xffffffff, 0xffffffff, 0x80000000}};
  // 688229772609.564018
  s21_decimal dec_2 = {{0xf03dad72, 0x98d1554, 0x0, 0x60000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_163) {
  // 61627214976822089010054811310
  s21_decimal dec_1 = {{0x3c11ceae, 0x1ae6ee74, 0xc720d662, 0x0}};
  // -72904818573486074497214151796
  s21_decimal dec_2 = {{0xdae77c74, 0x1a0cccce, 0xeb9173d6, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_164) {
  // 79228162514264337591452082060
  s21_decimal dec_1 = {{0x83509f8c, 0xffffffff, 0xffffffff, 0x0}};
  // -5008583119.921232449658
  s21_decimal dec_2 = {{0x2ac3907a, 0x840dc2f5, 0x10f, 0x800c0000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_165) {
  // 2280061860092
  s21_decimal dec_1 = {{0xde46f8fc, 0x212, 0x0, 0x0}};
  // -79228162514264337592767310554
  s21_decimal dec_2 = {{0xd1b56ada, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_166) {
  // 79228162514264337593151685850
  s21_decimal dec_1 = {{0xe89e84da, 0xffffffff, 0xffffffff, 0x0}};
  // -7752274435
  s21_decimal dec_2 = {{0xce125203, 0x1, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

Suite *test_s21_sub_suite() {
  Suite *c = suite_create("s21_sub_cases");
  TCase *tc = tcase_create("s21_sub_tc");
  // SRunner *sr = srunner_create(c);
  // int nf;

  suite_add_tcase(c, tc);

  tcase_add_test(tc, s21_sub_0);
  tcase_add_test(tc, s21_sub_1);
  tcase_add_test(tc, s21_sub_2);
  tcase_add_test(tc, s21_sub_3);
  tcase_add_test(tc, s21_sub_5);
  tcase_add_test(tc, s21_sub_6);
  tcase_add_test(tc, s21_sub_7);
  tcase_add_test(tc, s21_sub_8);
  tcase_add_test(tc, s21_sub_9);
  tcase_add_test(tc, s21_sub_10);
  tcase_add_test(tc, s21_sub_11);
  tcase_add_test(tc, s21_sub_12);
  tcase_add_test(tc, s21_sub_13);
  tcase_add_test(tc, s21_sub_14);
  tcase_add_test(tc, s21_sub_16);
  tcase_add_test(tc, s21_sub_17);
  tcase_add_test(tc, s21_sub_18);
  tcase_add_test(tc, s21_sub_19);
  tcase_add_test(tc, s21_sub_20);
  tcase_add_test(tc, s21_sub_21);
  tcase_add_test(tc, s21_sub_23);
  tcase_add_test(tc, s21_sub_24);
  tcase_add_test(tc, s21_sub_25);
  tcase_add_test(tc, s21_sub_26);
  tcase_add_test(tc, s21_sub_27);
  tcase_add_test(tc, s21_sub_28);
  tcase_add_test(tc, s21_sub_30);
  tcase_add_test(tc, s21_sub_31);
  tcase_add_test(tc, s21_sub_32);
  tcase_add_test(tc, s21_sub_33);
  tcase_add_test(tc, s21_sub_34);
  tcase_add_test(tc, s21_sub_35);
  tcase_add_test(tc, s21_sub_36);
  tcase_add_test(tc, s21_sub_37);
  tcase_add_test(tc, s21_sub_38);
  tcase_add_test(tc, s21_sub_39);
  tcase_add_test(tc, s21_sub_40);
  tcase_add_test(tc, s21_sub_41);
  tcase_add_test(tc, s21_sub_42);
  tcase_add_test(tc, s21_sub_43);
  tcase_add_test(tc, s21_sub_44);
  tcase_add_test(tc, s21_sub_45);
  tcase_add_test(tc, s21_sub_46);
  tcase_add_test(tc, s21_sub_47);
  tcase_add_test(tc, s21_sub_48);
  tcase_add_test(tc, s21_sub_49);
  tcase_add_test(tc, s21_sub_50);
  tcase_add_test(tc, s21_sub_51);
  tcase_add_test(tc, s21_sub_52);
  tcase_add_test(tc, s21_sub_53);
  tcase_add_test(tc, s21_sub_55);
  tcase_add_test(tc, s21_sub_56);
  tcase_add_test(tc, s21_sub_57);
  tcase_add_test(tc, s21_sub_58);
  tcase_add_test(tc, s21_sub_59);
  tcase_add_test(tc, s21_sub_60);
  tcase_add_test(tc, s21_sub_61);
  tcase_add_test(tc, s21_sub_62);
  tcase_add_test(tc, s21_sub_63);
  tcase_add_test(tc, s21_sub_64);
  tcase_add_test(tc, s21_sub_65);
  tcase_add_test(tc, s21_sub_66);
  tcase_add_test(tc, s21_sub_67);
  tcase_add_test(tc, s21_sub_68);
  tcase_add_test(tc, s21_sub_69);
  tcase_add_test(tc, s21_sub_70);
  tcase_add_test(tc, s21_sub_71);
  tcase_add_test(tc, s21_sub_72);
  tcase_add_test(tc, s21_sub_73);
  tcase_add_test(tc, s21_sub_74);
  tcase_add_test(tc, s21_sub_75);
  tcase_add_test(tc, s21_sub_76);
  tcase_add_test(tc, s21_sub_77);
  tcase_add_test(tc, s21_sub_78);
  tcase_add_test(tc, s21_sub_79);
  tcase_add_test(tc, s21_sub_80);
  tcase_add_test(tc, s21_sub_81);
  tcase_add_test(tc, s21_sub_82);
  tcase_add_test(tc, s21_sub_83);
  tcase_add_test(tc, s21_sub_84);
  tcase_add_test(tc, s21_sub_85);
  tcase_add_test(tc, s21_sub_86);
  tcase_add_test(tc, s21_sub_87);
  tcase_add_test(tc, s21_sub_88);
  tcase_add_test(tc, s21_sub_89);
  tcase_add_test(tc, s21_sub_91);
  tcase_add_test(tc, s21_sub_92);
  tcase_add_test(tc, s21_sub_93);
  tcase_add_test(tc, s21_sub_94);
  tcase_add_test(tc, s21_sub_95);
  tcase_add_test(tc, s21_sub_96);
  tcase_add_test(tc, s21_sub_97);
  tcase_add_test(tc, s21_sub_98);
  tcase_add_test(tc, s21_sub_99);
  tcase_add_test(tc, s21_sub_100);
  tcase_add_test(tc, s21_sub_101);
  tcase_add_test(tc, s21_sub_102);
  tcase_add_test(tc, s21_sub_103);
  tcase_add_test(tc, s21_sub_104);
  tcase_add_test(tc, s21_sub_105);
  tcase_add_test(tc, s21_sub_106);
  tcase_add_test(tc, s21_sub_107);
  tcase_add_test(tc, s21_sub_108);
  tcase_add_test(tc, s21_sub_109);
  tcase_add_test(tc, s21_sub_110);
  tcase_add_test(tc, s21_sub_111);
  tcase_add_test(tc, s21_sub_113);
  tcase_add_test(tc, s21_sub_114);
  tcase_add_test(tc, s21_sub_115);
  tcase_add_test(tc, s21_sub_116);
  tcase_add_test(tc, s21_sub_117);
  tcase_add_test(tc, s21_sub_118);
  tcase_add_test(tc, s21_sub_119);
  tcase_add_test(tc, s21_sub_120);
  tcase_add_test(tc, s21_sub_121);
  tcase_add_test(tc, s21_sub_122);
  tcase_add_test(tc, s21_sub_123);
  tcase_add_test(tc, s21_sub_124);
  tcase_add_test(tc, s21_sub_125);
  tcase_add_test(tc, s21_sub_126);
  tcase_add_test(tc, s21_sub_127);
  tcase_add_test(tc, s21_sub_128);
  tcase_add_test(tc, s21_sub_129);
  tcase_add_test(tc, s21_sub_130);
  tcase_add_test(tc, s21_sub_131);
  tcase_add_test(tc, s21_sub_132);
  tcase_add_test(tc, s21_sub_133);
  tcase_add_test(tc, s21_sub_134);
  tcase_add_test(tc, s21_sub_136);
  tcase_add_test(tc, s21_sub_137);
  tcase_add_test(tc, s21_sub_138);
  tcase_add_test(tc, s21_sub_139);
  tcase_add_test(tc, s21_sub_140);
  tcase_add_test(tc, s21_sub_141);
  tcase_add_test(tc, s21_sub_142);
  tcase_add_test(tc, s21_sub_143);
  tcase_add_test(tc, s21_sub_144);
  tcase_add_test(tc, s21_sub_145);
  tcase_add_test(tc, s21_sub_146);
  tcase_add_test(tc, s21_sub_147);
  tcase_add_test(tc, s21_sub_148);
  tcase_add_test(tc, s21_sub_149);
  tcase_add_test(tc, s21_sub_150);
  tcase_add_test(tc, s21_sub_151);
  tcase_add_test(tc, s21_sub_152);
  tcase_add_test(tc, s21_sub_153);
  tcase_add_test(tc, s21_sub_154);
  tcase_add_test(tc, s21_sub_155);
  tcase_add_test(tc, s21_sub_156);
  tcase_add_test(tc, s21_sub_157);
  tcase_add_test(tc, s21_sub_158);
  tcase_add_test(tc, s21_sub_159);
  tcase_add_test(tc, s21_sub_160);
  tcase_add_test(tc, s21_sub_161);
  tcase_add_test(tc, s21_sub_162);
  tcase_add_test(tc, s21_sub_163);
  tcase_add_test(tc, s21_sub_164);
  tcase_add_test(tc, s21_sub_165);
  tcase_add_test(tc, s21_sub_166);
  tcase_add_test(tc, s21_sub_167);
  tcase_add_test(tc, s21_sub_168);
  tcase_add_test(tc, s21_sub_169);
  tcase_add_test(tc, s21_sub_170);
  tcase_add_test(tc, s21_sub_171);
  tcase_add_test(tc, s21_sub_172);
  tcase_add_test(tc, s21_sub_173);
  tcase_add_test(tc, s21_sub_174);
  tcase_add_test(tc, s21_sub_175);
  tcase_add_test(tc, s21_sub_176);
  tcase_add_test(tc, s21_sub_177);
  tcase_add_test(tc, s21_sub_178);
  tcase_add_test(tc, s21_sub_179);
  tcase_add_test(tc, s21_sub_180);
  tcase_add_test(tc, s21_sub_181);
  tcase_add_test(tc, s21_sub_183);
  tcase_add_test(tc, s21_sub_184);
  tcase_add_test(tc, s21_sub_185);
  tcase_add_test(tc, s21_sub_186);
  tcase_add_test(tc, s21_sub_187);
  tcase_add_test(tc, s21_sub_188);
  tcase_add_test(tc, s21_sub_189);
  tcase_add_test(tc, s21_sub_190);
  tcase_add_test(tc, s21_sub_191);
  tcase_add_test(tc, s21_sub_192);
  tcase_add_test(tc, s21_sub_193);
  tcase_add_test(tc, s21_sub_194);
  tcase_add_test(tc, s21_sub_195);
  tcase_add_test(tc, s21_sub_196);
  tcase_add_test(tc, s21_sub_197);
  tcase_add_test(tc, s21_sub_198);
  tcase_add_test(tc, s21_sub_199);
  tcase_add_test(tc, s21_sub_200);
  tcase_add_test(tc, s21_sub_201);
  tcase_add_test(tc, s21_sub_202);
  tcase_add_test(tc, s21_sub_203);
  tcase_add_test(tc, s21_sub_204);
  tcase_add_test(tc, s21_sub_205);
  tcase_add_test(tc, s21_sub_206);
  tcase_add_test(tc, s21_sub_207);
  tcase_add_test(tc, s21_sub_208);
  tcase_add_test(tc, s21_sub_209);
  tcase_add_test(tc, s21_sub_210);
  tcase_add_test(tc, s21_sub_211);
  tcase_add_test(tc, s21_sub_212);
  tcase_add_test(tc, s21_sub_213);
  tcase_add_test(tc, s21_sub_214);
  tcase_add_test(tc, s21_sub_215);
  tcase_add_test(tc, s21_sub_217);
  tcase_add_test(tc, s21_sub_218);
  tcase_add_test(tc, s21_sub_219);
  tcase_add_test(tc, s21_sub_220);
  tcase_add_test(tc, s21_sub_221);
  tcase_add_test(tc, s21_sub_222);
  tcase_add_test(tc, s21_sub_224);
  tcase_add_test(tc, s21_sub_225);
  tcase_add_test(tc, s21_sub_226);
  tcase_add_test(tc, s21_sub_227);
  tcase_add_test(tc, s21_sub_228);
  tcase_add_test(tc, s21_sub_229);
  tcase_add_test(tc, s21_sub_230);
  tcase_add_test(tc, s21_sub_231);
  tcase_add_test(tc, s21_sub_232);
  tcase_add_test(tc, s21_sub_233);
  tcase_add_test(tc, s21_sub_234);
  tcase_add_test(tc, s21_sub_235);
  tcase_add_test(tc, s21_sub_236);
  tcase_add_test(tc, s21_sub_237);
  tcase_add_test(tc, s21_sub_238);
  tcase_add_test(tc, s21_sub_239);
  tcase_add_test(tc, s21_sub_240);
  tcase_add_test(tc, s21_sub_241);
  tcase_add_test(tc, s21_sub_242);
  tcase_add_test(tc, s21_sub_243);
  tcase_add_test(tc, s21_sub_244);
  tcase_add_test(tc, s21_sub_245);
  tcase_add_test(tc, s21_sub_246);
  tcase_add_test(tc, s21_sub_249);
  tcase_add_test(tc, s21_sub_250);
  tcase_add_test(tc, s21_sub_251);
  tcase_add_test(tc, s21_sub_253);
  tcase_add_test(tc, s21_sub_254);
  tcase_add_test(tc, s21_sub_255);
  tcase_add_test(tc, s21_sub_256);
  tcase_add_test(tc, s21_sub_257);
  tcase_add_test(tc, s21_sub_258);
  tcase_add_test(tc, s21_sub_259);
  tcase_add_test(tc, s21_sub_260);
  tcase_add_test(tc, s21_sub_261);
  tcase_add_test(tc, s21_sub_262);
  tcase_add_test(tc, s21_sub_263);
  tcase_add_test(tc, s21_sub_264);
  tcase_add_test(tc, s21_sub_265);
  tcase_add_test(tc, s21_sub_266);
  tcase_add_test(tc, s21_sub_267);
  tcase_add_test(tc, s21_sub_268);
  tcase_add_test(tc, s21_sub_269);
  tcase_add_test(tc, s21_sub_270);
  tcase_add_test(tc, s21_sub_271);
  tcase_add_test(tc, s21_sub_272);
  tcase_add_test(tc, s21_sub_273);
  tcase_add_test(tc, s21_sub_274);
  tcase_add_test(tc, s21_sub_276);
  tcase_add_test(tc, s21_sub_277);
  tcase_add_test(tc, s21_sub_278);
  tcase_add_test(tc, s21_sub_280);
  tcase_add_test(tc, s21_sub_281);
  tcase_add_test(tc, s21_sub_282);
  tcase_add_test(tc, s21_sub_283);
  tcase_add_test(tc, s21_sub_284);
  tcase_add_test(tc, s21_sub_285);
  tcase_add_test(tc, s21_sub_286);
  tcase_add_test(tc, s21_sub_287);
  tcase_add_test(tc, s21_sub_288);
  tcase_add_test(tc, s21_sub_289);
  tcase_add_test(tc, s21_sub_290);
  tcase_add_test(tc, s21_sub_291);
  tcase_add_test(tc, s21_sub_292);
  tcase_add_test(tc, s21_sub_294);
  tcase_add_test(tc, s21_sub_295);
  tcase_add_test(tc, s21_sub_296);
  tcase_add_test(tc, s21_sub_297);
  tcase_add_test(tc, s21_sub_298);
  tcase_add_test(tc, s21_sub_299);
  tcase_add_test(tc, s21_sub_300);
  tcase_add_test(tc, s21_sub_301);
  tcase_add_test(tc, s21_sub_302);
  tcase_add_test(tc, s21_sub_303);
  tcase_add_test(tc, s21_sub_304);
  tcase_add_test(tc, s21_sub_305);
  tcase_add_test(tc, s21_sub_306);
  tcase_add_test(tc, s21_sub_307);
  tcase_add_test(tc, s21_sub_308);
  tcase_add_test(tc, s21_sub_309);
  tcase_add_test(tc, s21_sub_310);
  tcase_add_test(tc, s21_sub_311);
  tcase_add_test(tc, s21_sub_312);
  tcase_add_test(tc, s21_sub_313);
  tcase_add_test(tc, s21_sub_314);
  tcase_add_test(tc, s21_sub_315);
  tcase_add_test(tc, s21_sub_316);
  tcase_add_test(tc, s21_sub_317);
  tcase_add_test(tc, s21_sub_318);
  tcase_add_test(tc, s21_sub_319);
  tcase_add_test(tc, s21_sub_320);
  tcase_add_test(tc, s21_sub_321);
  tcase_add_test(tc, s21_sub_322);
  tcase_add_test(tc, s21_sub_323);
  tcase_add_test(tc, s21_sub_324);
  tcase_add_test(tc, s21_sub_325);
  tcase_add_test(tc, s21_sub_326);
  tcase_add_test(tc, s21_sub_327);
  tcase_add_test(tc, s21_sub_328);
  tcase_add_test(tc, s21_sub_329);
  tcase_add_test(tc, s21_sub_330);
  tcase_add_test(tc, s21_sub_331);
  tcase_add_test(tc, s21_sub_332);
  tcase_add_test(tc, s21_sub_333);
  tcase_add_test(tc, s21_sub_334);
  tcase_add_test(tc, s21_sub_335);
  tcase_add_test(tc, s21_sub_336);
  tcase_add_test(tc, s21_sub_337);
  tcase_add_test(tc, s21_sub_338);
  tcase_add_test(tc, s21_sub_339);
  tcase_add_test(tc, s21_sub_340);
  tcase_add_test(tc, s21_sub_341);
  tcase_add_test(tc, s21_sub_342);
  tcase_add_test(tc, s21_sub_343);
  tcase_add_test(tc, s21_sub_344);
  tcase_add_test(tc, s21_sub_345);
  tcase_add_test(tc, s21_sub_346);
  tcase_add_test(tc, s21_sub_347);
  tcase_add_test(tc, s21_sub_348);
  tcase_add_test(tc, s21_sub_349);
  tcase_add_test(tc, s21_sub_350);
  tcase_add_test(tc, s21_sub_351);
  tcase_add_test(tc, s21_sub_352);
  tcase_add_test(tc, s21_sub_353);
  tcase_add_test(tc, s21_sub_354);
  tcase_add_test(tc, s21_sub_355);
  tcase_add_test(tc, s21_sub_356);
  tcase_add_test(tc, s21_sub_357);
  tcase_add_test(tc, s21_sub_358);
  tcase_add_test(tc, s21_sub_359);
  tcase_add_test(tc, s21_sub_360);
  tcase_add_test(tc, s21_sub_361);
  tcase_add_test(tc, s21_sub_362);
  tcase_add_test(tc, s21_sub_363);
  tcase_add_test(tc, s21_sub_364);
  tcase_add_test(tc, s21_sub_365);
  tcase_add_test(tc, s21_sub_366);
  tcase_add_test(tc, s21_sub_367);
  tcase_add_test(tc, s21_sub_368);
  tcase_add_test(tc, s21_sub_369);
  tcase_add_test(tc, s21_sub_370);
  tcase_add_test(tc, s21_sub_371);
  tcase_add_test(tc, s21_sub_372);
  tcase_add_test(tc, s21_sub_373);
  tcase_add_test(tc, s21_sub_374);
  tcase_add_test(tc, s21_sub_375);
  tcase_add_test(tc, s21_sub_376);
  tcase_add_test(tc, s21_sub_377);
  tcase_add_test(tc, s21_sub_378);
  tcase_add_test(tc, s21_sub_379);
  tcase_add_test(tc, s21_sub_380);
  tcase_add_test(tc, s21_sub_381);
  tcase_add_test(tc, s21_sub_382);
  tcase_add_test(tc, s21_sub_383);
  tcase_add_test(tc, s21_sub_384);
  tcase_add_test(tc, s21_sub_385);
  tcase_add_test(tc, s21_sub_386);
  tcase_add_test(tc, s21_sub_387);
  tcase_add_test(tc, s21_sub_388);
  tcase_add_test(tc, s21_sub_389);
  tcase_add_test(tc, s21_sub_390);
  tcase_add_test(tc, s21_sub_391);
  tcase_add_test(tc, s21_sub_392);
  tcase_add_test(tc, s21_sub_393);
  tcase_add_test(tc, s21_sub_394);
  tcase_add_test(tc, s21_sub_395);
  tcase_add_test(tc, s21_sub_396);
  tcase_add_test(tc, s21_sub_397);
  tcase_add_test(tc, s21_sub_398);
  tcase_add_test(tc, s21_sub_399);
  tcase_add_test(tc, s21_sub_401);
  tcase_add_test(tc, s21_sub_402);
  tcase_add_test(tc, s21_sub_403);
  tcase_add_test(tc, s21_sub_404);
  tcase_add_test(tc, s21_sub_405);
  tcase_add_test(tc, s21_sub_406);
  tcase_add_test(tc, s21_sub_407);
  tcase_add_test(tc, s21_sub_408);
  tcase_add_test(tc, s21_sub_410);
  tcase_add_test(tc, s21_sub_411);
  tcase_add_test(tc, s21_sub_412);
  tcase_add_test(tc, s21_sub_413);
  tcase_add_test(tc, s21_sub_414);
  tcase_add_test(tc, s21_sub_415);
  tcase_add_test(tc, s21_sub_416);
  tcase_add_test(tc, s21_sub_417);
  tcase_add_test(tc, s21_sub_418);
  tcase_add_test(tc, s21_sub_419);
  tcase_add_test(tc, s21_sub_420);
  tcase_add_test(tc, s21_sub_421);
  tcase_add_test(tc, s21_sub_422);
  tcase_add_test(tc, s21_sub_423);
  tcase_add_test(tc, s21_sub_424);
  tcase_add_test(tc, s21_sub_425);
  tcase_add_test(tc, s21_sub_426);
  tcase_add_test(tc, s21_sub_427);
  tcase_add_test(tc, s21_sub_428);
  tcase_add_test(tc, s21_sub_429);
  tcase_add_test(tc, s21_sub_430);
  tcase_add_test(tc, s21_sub_431);
  tcase_add_test(tc, s21_sub_432);
  tcase_add_test(tc, s21_sub_433);
  tcase_add_test(tc, s21_sub_434);
  tcase_add_test(tc, s21_sub_435);
  tcase_add_test(tc, s21_sub_436);
  tcase_add_test(tc, s21_sub_437);
  tcase_add_test(tc, s21_sub_438);
  tcase_add_test(tc, s21_sub_440);
  tcase_add_test(tc, s21_sub_441);
  tcase_add_test(tc, s21_sub_442);
  tcase_add_test(tc, s21_sub_443);
  tcase_add_test(tc, s21_sub_444);
  tcase_add_test(tc, s21_sub_445);
  tcase_add_test(tc, s21_sub_446);
  tcase_add_test(tc, s21_sub_447);
  tcase_add_test(tc, s21_sub_448);
  tcase_add_test(tc, s21_sub_449);
  tcase_add_test(tc, s21_sub_450);
  tcase_add_test(tc, s21_sub_451);
  tcase_add_test(tc, s21_sub_452);
  tcase_add_test(tc, s21_sub_453);
  tcase_add_test(tc, s21_sub_454);
  tcase_add_test(tc, s21_sub_455);
  tcase_add_test(tc, s21_sub_456);
  tcase_add_test(tc, s21_sub_457);
  tcase_add_test(tc, s21_sub_458);
  tcase_add_test(tc, s21_sub_459);
  tcase_add_test(tc, s21_sub_460);
  tcase_add_test(tc, s21_sub_461);
  tcase_add_test(tc, s21_sub_462);
  tcase_add_test(tc, s21_sub_463);
  tcase_add_test(tc, s21_sub_464);
  tcase_add_test(tc, s21_sub_465);
  tcase_add_test(tc, s21_sub_466);
  tcase_add_test(tc, s21_sub_467);
  tcase_add_test(tc, s21_sub_468);
  tcase_add_test(tc, s21_sub_469);
  tcase_add_test(tc, s21_sub_470);
  tcase_add_test(tc, s21_sub_472);
  tcase_add_test(tc, s21_sub_473);
  tcase_add_test(tc, s21_sub_475);
  tcase_add_test(tc, s21_sub_476);
  tcase_add_test(tc, s21_sub_478);
  tcase_add_test(tc, s21_sub_479);
  tcase_add_test(tc, s21_sub_480);
  tcase_add_test(tc, s21_sub_481);
  tcase_add_test(tc, s21_sub_482);
  tcase_add_test(tc, s21_sub_483);
  tcase_add_test(tc, s21_sub_484);
  tcase_add_test(tc, s21_sub_485);
  tcase_add_test(tc, s21_sub_486);
  tcase_add_test(tc, s21_sub_487);
  tcase_add_test(tc, s21_sub_488);
  tcase_add_test(tc, s21_sub_489);
  tcase_add_test(tc, s21_sub_490);
  tcase_add_test(tc, s21_sub_491);
  tcase_add_test(tc, s21_sub_492);
  tcase_add_test(tc, s21_sub_494);
  tcase_add_test(tc, s21_sub_495);
  tcase_add_test(tc, s21_sub_496);
  tcase_add_test(tc, s21_sub_497);
  tcase_add_test(tc, s21_sub_498);
  tcase_add_test(tc, s21_sub_499);
  tcase_add_test(tc, s21_sub_500);
  tcase_add_test(tc, fail_s21_sub_1);
  tcase_add_test(tc, fail_s21_sub_2);
  tcase_add_test(tc, fail_s21_sub_3);
  tcase_add_test(tc, fail_s21_sub_4);
  tcase_add_test(tc, fail_s21_sub_5);
  tcase_add_test(tc, fail_s21_sub_6);
  tcase_add_test(tc, fail_s21_sub_7);
  tcase_add_test(tc, fail_s21_sub_8);
  tcase_add_test(tc, fail_s21_sub_9);
  tcase_add_test(tc, fail_s21_sub_10);
  tcase_add_test(tc, fail_s21_sub_11);
  tcase_add_test(tc, fail_s21_sub_12);
  tcase_add_test(tc, fail_s21_sub_13);
  tcase_add_test(tc, fail_s21_sub_14);
  tcase_add_test(tc, fail_s21_sub_15);
  tcase_add_test(tc, fail_s21_sub_16);
  tcase_add_test(tc, fail_s21_sub_17);
  tcase_add_test(tc, fail_s21_sub_18);
  tcase_add_test(tc, fail_s21_sub_19);
  tcase_add_test(tc, fail_s21_sub_20);
  tcase_add_test(tc, fail_s21_sub_21);
  tcase_add_test(tc, fail_s21_sub_22);
  tcase_add_test(tc, fail_s21_sub_23);
  tcase_add_test(tc, fail_s21_sub_24);
  tcase_add_test(tc, fail_s21_sub_25);
  tcase_add_test(tc, fail_s21_sub_26);
  tcase_add_test(tc, fail_s21_sub_27);
  tcase_add_test(tc, fail_s21_sub_28);
  tcase_add_test(tc, fail_s21_sub_29);
  tcase_add_test(tc, fail_s21_sub_30);
  tcase_add_test(tc, fail_s21_sub_31);
  tcase_add_test(tc, fail_s21_sub_32);
  tcase_add_test(tc, fail_s21_sub_33);
  tcase_add_test(tc, fail_s21_sub_34);
  tcase_add_test(tc, fail_s21_sub_35);
  tcase_add_test(tc, fail_s21_sub_36);
  tcase_add_test(tc, fail_s21_sub_37);
  tcase_add_test(tc, fail_s21_sub_38);
  tcase_add_test(tc, fail_s21_sub_39);
  tcase_add_test(tc, fail_s21_sub_40);
  tcase_add_test(tc, fail_s21_sub_41);
  tcase_add_test(tc, fail_s21_sub_42);
  tcase_add_test(tc, fail_s21_sub_43);
  tcase_add_test(tc, fail_s21_sub_44);
  tcase_add_test(tc, fail_s21_sub_45);
  tcase_add_test(tc, fail_s21_sub_46);
  tcase_add_test(tc, fail_s21_sub_47);
  tcase_add_test(tc, fail_s21_sub_48);
  tcase_add_test(tc, fail_s21_sub_49);
  tcase_add_test(tc, fail_s21_sub_50);
  tcase_add_test(tc, fail_s21_sub_51);
  tcase_add_test(tc, fail_s21_sub_52);
  tcase_add_test(tc, fail_s21_sub_53);
  tcase_add_test(tc, fail_s21_sub_54);
  tcase_add_test(tc, fail_s21_sub_55);
  tcase_add_test(tc, fail_s21_sub_56);
  tcase_add_test(tc, fail_s21_sub_57);
  tcase_add_test(tc, fail_s21_sub_58);
  tcase_add_test(tc, fail_s21_sub_59);
  tcase_add_test(tc, fail_s21_sub_60);
  tcase_add_test(tc, fail_s21_sub_61);
  tcase_add_test(tc, fail_s21_sub_62);
  tcase_add_test(tc, fail_s21_sub_63);
  tcase_add_test(tc, fail_s21_sub_64);
  tcase_add_test(tc, fail_s21_sub_65);
  tcase_add_test(tc, fail_s21_sub_66);
  tcase_add_test(tc, fail_s21_sub_67);
  tcase_add_test(tc, fail_s21_sub_68);
  tcase_add_test(tc, fail_s21_sub_69);
  tcase_add_test(tc, fail_s21_sub_70);
  tcase_add_test(tc, fail_s21_sub_71);
  tcase_add_test(tc, fail_s21_sub_72);
  tcase_add_test(tc, fail_s21_sub_73);
  tcase_add_test(tc, fail_s21_sub_74);
  tcase_add_test(tc, fail_s21_sub_75);
  tcase_add_test(tc, fail_s21_sub_76);
  tcase_add_test(tc, fail_s21_sub_77);
  tcase_add_test(tc, fail_s21_sub_78);
  tcase_add_test(tc, fail_s21_sub_79);
  tcase_add_test(tc, fail_s21_sub_80);
  tcase_add_test(tc, fail_s21_sub_81);
  tcase_add_test(tc, fail_s21_sub_82);
  tcase_add_test(tc, fail_s21_sub_83);
  tcase_add_test(tc, fail_s21_sub_84);
  tcase_add_test(tc, fail_s21_sub_85);
  tcase_add_test(tc, fail_s21_sub_86);
  tcase_add_test(tc, fail_s21_sub_87);
  tcase_add_test(tc, fail_s21_sub_88);
  tcase_add_test(tc, fail_s21_sub_89);
  tcase_add_test(tc, fail_s21_sub_90);
  tcase_add_test(tc, fail_s21_sub_91);
  tcase_add_test(tc, fail_s21_sub_92);
  tcase_add_test(tc, fail_s21_sub_93);
  tcase_add_test(tc, fail_s21_sub_94);
  tcase_add_test(tc, fail_s21_sub_95);
  tcase_add_test(tc, fail_s21_sub_96);
  tcase_add_test(tc, fail_s21_sub_97);
  tcase_add_test(tc, fail_s21_sub_98);
  tcase_add_test(tc, fail_s21_sub_99);
  tcase_add_test(tc, fail_s21_sub_100);
  tcase_add_test(tc, fail_s21_sub_101);
  tcase_add_test(tc, fail_s21_sub_102);
  tcase_add_test(tc, fail_s21_sub_103);
  tcase_add_test(tc, fail_s21_sub_104);
  tcase_add_test(tc, fail_s21_sub_105);
  tcase_add_test(tc, fail_s21_sub_106);
  tcase_add_test(tc, fail_s21_sub_107);
  tcase_add_test(tc, fail_s21_sub_108);
  tcase_add_test(tc, fail_s21_sub_109);
  tcase_add_test(tc, fail_s21_sub_110);
  tcase_add_test(tc, fail_s21_sub_111);
  tcase_add_test(tc, fail_s21_sub_112);
  tcase_add_test(tc, fail_s21_sub_113);
  tcase_add_test(tc, fail_s21_sub_114);
  tcase_add_test(tc, fail_s21_sub_115);
  tcase_add_test(tc, fail_s21_sub_116);
  tcase_add_test(tc, fail_s21_sub_117);
  tcase_add_test(tc, fail_s21_sub_118);
  tcase_add_test(tc, fail_s21_sub_119);
  tcase_add_test(tc, fail_s21_sub_120);
  tcase_add_test(tc, fail_s21_sub_121);
  tcase_add_test(tc, fail_s21_sub_122);
  tcase_add_test(tc, fail_s21_sub_123);
  tcase_add_test(tc, fail_s21_sub_124);
  tcase_add_test(tc, fail_s21_sub_125);
  tcase_add_test(tc, fail_s21_sub_126);
  tcase_add_test(tc, fail_s21_sub_127);
  tcase_add_test(tc, fail_s21_sub_128);
  tcase_add_test(tc, fail_s21_sub_129);
  tcase_add_test(tc, fail_s21_sub_130);
  tcase_add_test(tc, fail_s21_sub_131);
  tcase_add_test(tc, fail_s21_sub_132);
  tcase_add_test(tc, fail_s21_sub_133);
  tcase_add_test(tc, fail_s21_sub_134);
  tcase_add_test(tc, fail_s21_sub_135);
  tcase_add_test(tc, fail_s21_sub_136);
  tcase_add_test(tc, fail_s21_sub_137);
  tcase_add_test(tc, fail_s21_sub_138);
  tcase_add_test(tc, fail_s21_sub_139);
  tcase_add_test(tc, fail_s21_sub_140);
  tcase_add_test(tc, fail_s21_sub_141);
  tcase_add_test(tc, fail_s21_sub_142);
  tcase_add_test(tc, fail_s21_sub_143);
  tcase_add_test(tc, fail_s21_sub_144);
  tcase_add_test(tc, fail_s21_sub_145);
  tcase_add_test(tc, fail_s21_sub_146);
  tcase_add_test(tc, fail_s21_sub_147);
  tcase_add_test(tc, fail_s21_sub_148);
  tcase_add_test(tc, fail_s21_sub_149);
  tcase_add_test(tc, fail_s21_sub_150);
  tcase_add_test(tc, fail_s21_sub_151);
  tcase_add_test(tc, fail_s21_sub_152);
  tcase_add_test(tc, fail_s21_sub_153);
  tcase_add_test(tc, fail_s21_sub_154);
  tcase_add_test(tc, fail_s21_sub_155);
  tcase_add_test(tc, fail_s21_sub_156);
  tcase_add_test(tc, fail_s21_sub_157);
  tcase_add_test(tc, fail_s21_sub_158);
  tcase_add_test(tc, fail_s21_sub_159);
  tcase_add_test(tc, fail_s21_sub_160);
  tcase_add_test(tc, fail_s21_sub_161);
  tcase_add_test(tc, fail_s21_sub_162);
  tcase_add_test(tc, fail_s21_sub_163);
  tcase_add_test(tc, fail_s21_sub_164);
  tcase_add_test(tc, fail_s21_sub_165);
  tcase_add_test(tc, fail_s21_sub_166);

  // srunner_run_all(sr, CK_ENV);
  // nf = srunner_ntests_failed(sr);
  // srunner_free(sr);

  return c;
}
