#include "../test_suite.h"

START_TEST(s21_mul_1) {
  // 65.6032892160182
  s21_decimal dec_1 = {{0x8f7f88b6, 0x254a8, 0x0, 0xd0000}};
  // 17346759637049228539065792
  s21_decimal dec_2 = {{0xca3df5c0, 0xb96568c1, 0xe5951, 0x0}};
  // 1138004489430091439703408603.0
  s21_decimal dec_check = {{0x85bc7e8e, 0xde82a8ca, 0x24c55a3d, 0x10000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_2) {
  // 86674412849619731
  s21_decimal dec_1 = {{0x55046313, 0x133edeb, 0x0, 0x0}};
  // 94.934181
  s21_decimal dec_2 = {{0x5a894a5, 0x0, 0x0, 0x60000}};
  // 8228364397534525323.925311
  s21_decimal dec_check = {{0xb892d73f, 0x871d46a4, 0x6ce6c, 0x60000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_3) {
  // -40055
  s21_decimal dec_1 = {{0x9c77, 0x0, 0x0, 0x80000000}};
  // -9
  s21_decimal dec_2 = {{0x9, 0x0, 0x0, 0x80000000}};
  // 360495
  s21_decimal dec_check = {{0x5802f, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_4) {
  // -42536970622764648208299
  s21_decimal dec_1 = {{0x96397ab, 0xef0d62e0, 0x901, 0x80000000}};
  // -134.78027630836597
  s21_decimal dec_2 = {{0xd9357b75, 0x2fe231, 0x0, 0x800e0000}};
  // 5733144653857065375507769.5370
  s21_decimal dec_check = {{0x8f0e178a, 0x715797a7, 0xb93f7608, 0x40000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_6) {
  // 9.8597871257991361
  s21_decimal dec_1 = {{0xd3f138c1, 0x15e4a3d, 0x0, 0x100000}};
  // 588313875394.854259448425250
  s21_decimal dec_2 = {{0x80e52b22, 0x171f6ea3, 0x1e6a44f, 0xf0000}};
  // 5800649574547.1811745199226744
  s21_decimal dec_check = {{0x40d8ff78, 0x468cc412, 0xbb6dd943, 0x100000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_7) {
  // 34203941140977136143
  s21_decimal dec_1 = {{0x5a4fb20f, 0xdaaccf3f, 0x1, 0x0}};
  // -2437851
  s21_decimal dec_2 = {{0x2532db, 0x0, 0x0, 0x80000000}};
  // -83384112114472252323348693
  s21_decimal dec_check = {{0x8f1f40d5, 0xc677b85a, 0x44f945, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_8) {
  // -3.5544037123614334279581952
  s21_decimal dec_1 = {{0x4c558100, 0x1d08db82, 0x1d66be, 0x80190000}};
  // 5932575147668.76
  s21_decimal dec_2 = {{0x876d921c, 0x21b90, 0x0, 0x20000}};
  // -21086767128737.019662678636018
  s21_decimal dec_check = {{0x43d035f2, 0x9568c5f7, 0x442290a0, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_9) {
  // -37428493.8785
  s21_decimal dec_1 = {{0x251eee21, 0x57, 0x0, 0x80040000}};
  // 1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x0}};
  // -37428493.8785
  s21_decimal dec_check = {{0x251eee21, 0x57, 0x0, 0x80040000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_10) {
  // 46528546.7551257
  s21_decimal dec_1 = {{0xb7033619, 0x1a72c, 0x0, 0x70000}};
  // -36
  s21_decimal dec_2 = {{0x24, 0x0, 0x0, 0x80000000}};
  // -1675027683.1845252
  s21_decimal dec_check = {{0xbc739b84, 0x3b8249, 0x0, 0x80070000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_11) {
  // -584143009206022
  s21_decimal dec_1 = {{0x648fcf06, 0x21346, 0x0, 0x80000000}};
  // 5137157100.7568105541083
  s21_decimal dec_2 = {{0x8cc98ddb, 0xdbc30522, 0xae0, 0xd0000}};
  // -3000834407600166874531899.2979
  s21_decimal dec_check = {{0x1ca58c53, 0xfea31b80, 0x60f65207, 0x80040000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_12) {
  // 2.128239163253
  s21_decimal dec_1 = {{0x84f07775, 0x1ef, 0x0, 0xc0000}};
  // -89273836661355
  s21_decimal dec_2 = {{0xaf526a6b, 0x5131, 0x0, 0x80000000}};
  // -189996075436547.160321187815
  s21_decimal dec_check = {{0x60725fe7, 0xe339d53c, 0x9d293b, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_13) {
  // -799567112867
  s21_decimal dec_1 = {{0x29e9eaa3, 0xba, 0x0, 0x80000000}};
  // 43148846937.86758
  s21_decimal dec_2 = {{0x616b8086, 0xf545d, 0x0, 0x50000}};
  // -34500398969650874674160.15186
  s21_decimal dec_check = {{0xbae35152, 0x9293564a, 0xb25ce5d, 0x80050000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_14) {
  // 994128199398511.0923
  s21_decimal dec_1 = {{0x6778338b, 0x89f6874d, 0x0, 0x40000}};
  // -1390196167
  s21_decimal dec_2 = {{0x52dcb5c7, 0x0, 0x0, 0x80000000}};
  // -1382033212310421826022443.2141
  s21_decimal dec_check = {{0x3c55580d, 0x9df65322, 0x2ca7e929, 0x80040000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_15) {
  // -412.43
  s21_decimal dec_1 = {{0xa11b, 0x0, 0x0, 0x80020000}};
  // 36.109
  s21_decimal dec_2 = {{0x8d0d, 0x0, 0x0, 0x30000}};
  // -14892.43487
  s21_decimal dec_check = {{0x58c40d5f, 0x0, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_16) {
  // -1662906.46
  s21_decimal dec_1 = {{0x9e964d6, 0x0, 0x0, 0x80020000}};
  // 61
  s21_decimal dec_2 = {{0x3d, 0x0, 0x0, 0x0}};
  // -101437294.06
  s21_decimal dec_check = {{0x5c9d06fe, 0x2, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_17) {
  // -7
  s21_decimal dec_1 = {{0x7, 0x0, 0x0, 0x80000000}};
  // 755423144011644521431044070
  s21_decimal dec_2 = {{0x411a0fe6, 0xb1b4a674, 0x270df12, 0x0}};
  // -5287962008081511650017308490
  s21_decimal dec_check = {{0xc7b66f4a, 0xdbf08d2d, 0x11161982, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_18) {
  // -61.25582896563124283472029316
  s21_decimal dec_1 = {{0x6b7f2684, 0x35ae34a4, 0x13caf6a2, 0x801a0000}};
  // -67.24644380522331692146171846
  s21_decimal dec_2 = {{0x5c3d1fc6, 0x53e69bd1, 0x15ba7ed6, 0x801a0000}};
  // 4119.2366602796921107835174279
  s21_decimal dec_check = {{0x4c6ebd87, 0x7518adc, 0x851986ec, 0x190000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_19) {
  // 9323605271593971.03
  s21_decimal dec_1 = {{0xa7ee8aef, 0xcf068f5, 0x0, 0x20000}};
  // -42272
  s21_decimal dec_2 = {{0xa520, 0x0, 0x0, 0x80000000}};
  // -394127442040820343380.16
  s21_decimal dec_check = {{0xbd5d68e0, 0x91b373f1, 0x858, 0x80020000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_20) {
  // 4
  s21_decimal dec_1 = {{0x4, 0x0, 0x0, 0x0}};
  // -660
  s21_decimal dec_2 = {{0x294, 0x0, 0x0, 0x80000000}};
  // -2640
  s21_decimal dec_check = {{0xa50, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_21) {
  // -1346516387
  s21_decimal dec_1 = {{0x504235a3, 0x0, 0x0, 0x80000000}};
  // -8832063553880
  s21_decimal dec_2 = {{0x6002c158, 0x808, 0x0, 0x80000000}};
  // 11892518306324877431560
  s21_decimal dec_check = {{0xc785308, 0xb1d87657, 0x284, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_22) {
  // 9.96481461
  s21_decimal dec_1 = {{0x3b6519b5, 0x0, 0x0, 0x80000}};
  // -73436412321978033
  s21_decimal dec_2 = {{0x2607d6b1, 0x104e607, 0x0, 0x80000000}};
  // -731780234412030727.33746213
  s21_decimal dec_check = {{0x26571425, 0x99832557, 0x3c880c, 0x80080000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_23) {
  // -300.1876337624576095002631
  s21_decimal dec_1 = {{0xe965a007, 0xad6bf12, 0x27bac, 0x80160000}};
  // -35683929786371
  s21_decimal dec_2 = {{0x4ff58803, 0x2074, 0x0, 0x80000000}};
  // 10711874445916389.952334666782
  s21_decimal dec_check = {{0xaeb91c1e, 0x4860b1fd, 0x229ca7a5, 0xc0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_24) {
  // 9185.792
  s21_decimal dec_1 = {{0x8c2a00, 0x0, 0x0, 0x30000}};
  // -330036.809583582
  s21_decimal dec_2 = {{0xaecc4bde, 0x12c2a, 0x0, 0x80090000}};
  // -3031649485.178390866944
  s21_decimal dec_check = {{0x1da6c00, 0x58969867, 0xa4, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_25) {
  // 8338.7
  s21_decimal dec_1 = {{0x145bb, 0x0, 0x0, 0x10000}};
  // -8974645345971751829440
  s21_decimal dec_2 = {{0xcef73fc0, 0x84394873, 0x1e6, 0x80000000}};
  // -74836875146454646980151328.0
  s21_decimal dec_check = {{0x128a5140, 0x4ed2f258, 0x26b093f, 0x80010000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_26) {
  // 14685792949
  s21_decimal dec_1 = {{0x6b576ab5, 0x3, 0x0, 0x0}};
  // 74314169
  s21_decimal dec_2 = {{0x46df1b9, 0x0, 0x0, 0x0}};
  // 1091362499110994381
  s21_decimal dec_check = {{0x20b181cd, 0xf254c69, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_27) {
  // -90.3203570
  s21_decimal dec_1 = {{0x35d5caf2, 0x0, 0x0, 0x80070000}};
  // 2033152884347
  s21_decimal dec_2 = {{0x615afe7b, 0x1d9, 0x0, 0x0}};
  // -183635094349800.7518790
  s21_decimal dec_check = {{0x8289e46, 0x8c7d1db5, 0x63, 0x80070000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_28) {
  // -0.09007728084303
  s21_decimal dec_1 = {{0x466ec54f, 0x831, 0x0, 0x800e0000}};
  // 6371
  s21_decimal dec_2 = {{0x18e3, 0x0, 0x0, 0x0}};
  // -573.88235625094413
  s21_decimal dec_check = {{0xd6b85d0d, 0xcbe24b, 0x0, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_29) {
  // 5.384480524
  s21_decimal dec_1 = {{0x40f0a70c, 0x1, 0x0, 0x90000}};
  // 81.42267124589850702
  s21_decimal dec_2 = {{0x6b84f04e, 0x70ff24cf, 0x0, 0x110000}};
  // 438.41878753559532592986727848
  s21_decimal dec_check = {{0x8c1e25a8, 0x85d401df, 0x8da926f1, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_30) {
  // -452395.1760
  s21_decimal dec_1 = {{0xda60690, 0x1, 0x0, 0x80040000}};
  // 1.4429962527124936083399705791
  s21_decimal dec_2 = {{0x5fc704bf, 0xa2767a4, 0x2ea02f6c, 0x1c0000}};
  // -652804.54371320902334383605797
  s21_decimal dec_check = {{0x76334825, 0x82e7b99c, 0xd2eeb9ea, 0x80170000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_31) {
  // -89.128431
  s21_decimal dec_1 = {{0x54ffdef, 0x0, 0x0, 0x80060000}};
  // 693850839648404613583453
  s21_decimal dec_2 = {{0xee5f525d, 0xbab910eb, 0x92ed, 0x0}};
  // -61841836685894894861854453.452
  s21_decimal dec_check = {{0xca3c2ecc, 0x445d6e2d, 0xc7d25e4c, 0x80030000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_32) {
  // 10703
  s21_decimal dec_1 = {{0x29cf, 0x0, 0x0, 0x0}};
  // -93073.0292386
  s21_decimal dec_2 = {{0xb3d934a2, 0xd8, 0x0, 0x80070000}};
  // -996160631.9407358
  s21_decimal dec_check = {{0x360f80fe, 0x236407, 0x0, 0x80070000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_33) {
  // -0.32
  s21_decimal dec_1 = {{0x20, 0x0, 0x0, 0x80020000}};
  // -27371842361508590379709
  s21_decimal dec_2 = {{0x4cc9e2bd, 0xd49ec58e, 0x5cb, 0x80000000}};
  // 8758989555682748921506.88
  s21_decimal dec_check = {{0x993c57a0, 0x93d8b1c9, 0xb97a, 0x20000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_34) {
  // -3
  s21_decimal dec_1 = {{0x3, 0x0, 0x0, 0x80000000}};
  // -203267706995963598657126
  s21_decimal dec_2 = {{0x621ad666, 0x2a1b1a5c, 0x2b0b, 0x80000000}};
  // 609803120987890795971378
  s21_decimal dec_check = {{0x26508332, 0x7e514f15, 0x8121, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_35) {
  // 96375553824323997
  s21_decimal dec_1 = {{0x3abaf99d, 0x156650e, 0x0, 0x0}};
  // -523752827
  s21_decimal dec_2 = {{0x1f37d57b, 0x0, 0x0, 0x80000000}};
  // -50476968769180354792689519
  s21_decimal dec_check = {{0x6d408f6f, 0xf5c2a719, 0x29c0e9, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_36) {
  // 26008.479159419
  s21_decimal dec_1 = {{0x9229547b, 0x17a7, 0x0, 0x90000}};
  // -66097
  s21_decimal dec_2 = {{0x10231, 0x0, 0x0, 0x80000000}};
  // -1719082447.000117643
  s21_decimal dec_check = {{0xa10d218b, 0x17db6860, 0x0, 0x80090000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_37) {
  // 4
  s21_decimal dec_1 = {{0x4, 0x0, 0x0, 0x0}};
  // 51.04838735670
  s21_decimal dec_2 = {{0x90197736, 0x4a4, 0x0, 0xb0000}};
  // 204.19354942680
  s21_decimal dec_check = {{0x4065dcd8, 0x1292, 0x0, 0xb0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_38) {
  // -732362
  s21_decimal dec_1 = {{0xb2cca, 0x0, 0x0, 0x80000000}};
  // 7
  s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x0}};
  // -5126534
  s21_decimal dec_check = {{0x4e3986, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_39) {
  // -344694292
  s21_decimal dec_1 = {{0x148b9e14, 0x0, 0x0, 0x80000000}};
  // -1435072727
  s21_decimal dec_2 = {{0x558978d7, 0x0, 0x0, 0x80000000}};
  // 494661377601774284
  s21_decimal dec_check = {{0xf00f22cc, 0x6dd63e6, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_40) {
  // 0.26673230253636956808
  s21_decimal dec_1 = {{0x483bb288, 0x722a5998, 0x1, 0x140000}};
  // 570915
  s21_decimal dec_2 = {{0x8b623, 0x0, 0x0, 0x0}};
  // 152281.47250255143196039320
  s21_decimal dec_check = {{0xe5561898, 0x843ec509, 0xc98af, 0x140000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_41) {
  // 651
  s21_decimal dec_1 = {{0x28b, 0x0, 0x0, 0x0}};
  // 698264.35
  s21_decimal dec_2 = {{0x4297783, 0x0, 0x0, 0x20000}};
  // 454570091.85
  s21_decimal dec_check = {{0x9572ea21, 0xa, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_42) {
  // 1047
  s21_decimal dec_1 = {{0x417, 0x0, 0x0, 0x0}};
  // -0.9
  s21_decimal dec_2 = {{0x9, 0x0, 0x0, 0x80010000}};
  // -942.3
  s21_decimal dec_check = {{0x24cf, 0x0, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_43) {
  // 1534
  s21_decimal dec_1 = {{0x5fe, 0x0, 0x0, 0x0}};
  // 8027473470163264809186595
  s21_decimal dec_2 = {{0x5c07b523, 0x3573a83b, 0x6a3e2, 0x0}};
  // 12314144303230448217292236730
  s21_decimal dec_check = {{0x762f67ba, 0x4b0a13b1, 0x27ca057c, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_44) {
  // -756872293129
  s21_decimal dec_1 = {{0x391aab09, 0xb0, 0x0, 0x80000000}};
  // 61901120011178645.93227081631
  s21_decimal dec_2 = {{0x1649679f, 0xfa1e9449, 0x14005733, 0xb0000}};
  // -46851242650114211860834980763
  s21_decimal dec_check = {{0x6c5c939b, 0x3eb63128, 0x97627089, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_45) {
  // 24354018234275
  s21_decimal dec_1 = {{0x5c9b0fa3, 0x1626, 0x0, 0x0}};
  // -8310830
  s21_decimal dec_2 = {{0x7ed02e, 0x0, 0x0, 0x80000000}};
  // -202402105361959698250
  s21_decimal dec_check = {{0x52cb3f4a, 0xf8e4ba74, 0xa, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_46) {
  // 591016528.60545279
  s21_decimal dec_1 = {{0xe06428ff, 0xd1f8a3, 0x0, 0x80000}};
  // -1885.021910685178755
  s21_decimal dec_2 = {{0xc437db83, 0x1a28f170, 0x0, 0x800f0000}};
  // -1114079105998.3722238749349289
  s21_decimal dec_check = {{0x7eba95a9, 0x85a68086, 0x23ff7245, 0x80100000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_47) {
  // 1947576755
  s21_decimal dec_1 = {{0x7415a9b3, 0x0, 0x0, 0x0}};
  // 7.582444991023629
  s21_decimal dec_2 = {{0x8c380a0d, 0x1af031, 0x0, 0xf0000}};
  // 14767393610.583803496143895
  s21_decimal dec_check = {{0xc0e29c17, 0x3008d5c, 0xc371e, 0xf0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_48) {
  // 20732
  s21_decimal dec_1 = {{0x50fc, 0x0, 0x0, 0x0}};
  // -1115645174593879387521000.2397
  s21_decimal dec_2 = {{0xa3185fdd, 0x2427be3, 0x240c668d, 0x80040000}};
  // -23129555759680307462085376969
  s21_decimal dec_check = {{0x2f017bc9, 0x29db23de, 0x4abc51f2, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_49) {
  // -792148631
  s21_decimal dec_1 = {{0x2f373a97, 0x0, 0x0, 0x80000000}};
  // 54533
  s21_decimal dec_2 = {{0xd505, 0x0, 0x0, 0x0}};
  // -43198241294323
  s21_decimal dec_check = {{0xdfd3c7f3, 0x2749, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_50) {
  // -2857.59618
  s21_decimal dec_1 = {{0x11085882, 0x0, 0x0, 0x80050000}};
  // 8061356877794809051440845
  s21_decimal dec_2 = {{0x3e6166cd, 0x8316f22, 0x6ab0f, 0x0}};
  // -23036102619603173169226782168
  s21_decimal dec_check = {{0x285b15d8, 0x49e43eed, 0x4a6f0479, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_52) {
  // 459
  s21_decimal dec_1 = {{0x1cb, 0x0, 0x0, 0x0}};
  // -344930614845310621746
  s21_decimal dec_2 = {{0x5bd1d832, 0xb2dfb6ae, 0x12, 0x80000000}};
  // -158323152213997575381414
  s21_decimal dec_check = {{0xa13ea1a6, 0xb71c8a9e, 0x2186, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_53) {
  // 9518.355170513362691877
  s21_decimal dec_1 = {{0xc3a52725, 0xfdb69d2c, 0x203, 0x120000}};
  // 48281919930633.839203232
  s21_decimal dec_2 = {{0x12c053a0, 0x5e3d6056, 0xa39, 0x90000}};
  // 459564462214060781.14161195272
  s21_decimal dec_check = {{0x11b77908, 0xa5e8f7d0, 0x947e4805, 0xb0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_54) {
  // 24296559463.9253
  s21_decimal dec_1 = {{0xd5f60b95, 0xdcf9, 0x0, 0x40000}};
  // 13544232952641.094032504
  s21_decimal dec_2 = {{0x60861c78, 0x3bfdae01, 0x2de, 0x90000}};
  // 329078261327100882809186.69509
  s21_decimal dec_check = {{0x8a2338c5, 0x3e33b820, 0x6a54b73d, 0x50000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_55) {
  // -96787093624953
  s21_decimal dec_1 = {{0x559879, 0x5807, 0x0, 0x80000000}};
  // -503938757693
  s21_decimal dec_2 = {{0x5517343d, 0x75, 0x0, 0x80000000}};
  // 48774767722074894885513429
  s21_decimal dec_check = {{0x573ce8d5, 0x74d2885a, 0x285875, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_56) {
  // -0.385569259
  s21_decimal dec_1 = {{0x16fb51eb, 0x0, 0x0, 0x80090000}};
  // 5118182590256920
  s21_decimal dec_2 = {{0xbf301718, 0x122ef5, 0x0, 0x0}};
  // -1973413868752061.264022280
  s21_decimal dec_check = {{0x6cfbcb08, 0xfaed7337, 0x1a1e2, 0x80090000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_57) {
  // -8047541013558224884
  s21_decimal dec_1 = {{0x48667f4, 0x6fae9bea, 0x0, 0x80000000}};
  // 7308514408.245625
  s21_decimal dec_2 = {{0x1d23a979, 0x19f70e, 0x0, 0x60000}};
  // -58815569448537887173073367659
  s21_decimal dec_check = {{0x97e6f26b, 0x9a956309, 0xbe0b1948, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_58) {
  // -3.801
  s21_decimal dec_1 = {{0xed9, 0x0, 0x0, 0x80030000}};
  // 2828462841512841
  s21_decimal dec_2 = {{0xd2edc389, 0xa0c78, 0x0, 0x0}};
  // -10750987260590308.641
  s21_decimal dec_check = {{0xcc3c3d21, 0x95332df3, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_59) {
  // 5
  s21_decimal dec_1 = {{0x5, 0x0, 0x0, 0x0}};
  // 0.0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x10000}};
  // 0.0
  s21_decimal dec_check = {{0x0, 0x0, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_61) {
  // 1817905620166115051542
  s21_decimal dec_1 = {{0x437bc816, 0x8c8229dd, 0x62, 0x0}};
  // 21
  s21_decimal dec_2 = {{0x15, 0x0, 0x0, 0x0}};
  // 38176018023488416082382
  s21_decimal dec_check = {{0x892769ce, 0x86ad6f26, 0x815, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_62) {
  // 27220013916258037122681
  s21_decimal dec_1 = {{0xa5b7c679, 0x9993c705, 0x5c3, 0x0}};
  // -0.077
  s21_decimal dec_2 = {{0x4d, 0x0, 0x0, 0x80030000}};
  // -2095941071551868858446.437
  s21_decimal dec_check = {{0xd846b265, 0x3172dcb2, 0x1bbd5, 0x80030000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_64) {
  // -83115907829095098705021
  s21_decimal dec_1 = {{0xe9eb647d, 0xb8eeab9b, 0x1199, 0x80000000}};
  // 682
  s21_decimal dec_2 = {{0x2aa, 0x0, 0x0, 0x0}};
  // -56685049139442857316824322
  s21_decimal dec_check = {{0x2d19b502, 0xabd52d5d, 0x2ee386, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_65) {
  // 0.9
  s21_decimal dec_1 = {{0x9, 0x0, 0x0, 0x10000}};
  // 753198924.545
  s21_decimal dec_2 = {{0x5e278301, 0xaf, 0x0, 0x30000}};
  // 677879032.0905
  s21_decimal dec_check = {{0x4f639b09, 0x62a, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_66) {
  // -221243124
  s21_decimal dec_1 = {{0xd2fe6f4, 0x0, 0x0, 0x80000000}};
  // -9319661152.1680288
  s21_decimal dec_2 = {{0xc0513a0, 0x14b19d3, 0x0, 0x80070000}};
  // 2061910947927094064.6339712
  s21_decimal dec_check = {{0xbed87480, 0x2a23b0e1, 0x110e44, 0x70000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_67) {
  // 45186085
  s21_decimal dec_1 = {{0x2b17c25, 0x0, 0x0, 0x0}};
  // -42788468649
  s21_decimal dec_2 = {{0xf66437a9, 0x9, 0x0, 0x80000000}};
  // -1933443381393549165
  s21_decimal dec_check = {{0xf54ae76d, 0x1ad4f882, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_68) {
  // -66
  s21_decimal dec_1 = {{0x42, 0x0, 0x0, 0x80000000}};
  // -6919704654327908420756694
  s21_decimal dec_2 = {{0x5d6b24d6, 0xf0e2b0b4, 0x5b94d, 0x80000000}};
  // 456700507185641955769941804
  s21_decimal dec_check = {{0x159f7f2c, 0x1a718e80, 0x179c618, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_69) {
  // 7.00349026657087571
  s21_decimal dec_1 = {{0xa8afb053, 0x9b823ba, 0x0, 0x110000}};
  // 2711615399.77
  s21_decimal dec_2 = {{0x227cbd89, 0x3f, 0x0, 0x20000}};
  // 18990772058.972889005410632587
  s21_decimal dec_check = {{0x8a8a438b, 0x2cff5609, 0x3d5ccc68, 0x120000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_70) {
  // 9654.2148498
  s21_decimal dec_1 = {{0x7a5c4792, 0x16, 0x0, 0x70000}};
  // -0.7
  s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x80010000}};
  // -6757.95039486
  s21_decimal dec_check = {{0x5885f4fe, 0x9d, 0x0, 0x80080000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_71) {
  // 97.2103
  s21_decimal dec_1 = {{0xed547, 0x0, 0x0, 0x40000}};
  // 1749189891587
  s21_decimal dec_2 = {{0x43d79603, 0x197, 0x0, 0x0}};
  // 170039274118139.7461
  s21_decimal dec_check = {{0x64c519d5, 0x17990230, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_72) {
  // -1682532
  s21_decimal dec_1 = {{0x19ac64, 0x0, 0x0, 0x80000000}};
  // -249458
  s21_decimal dec_2 = {{0x3ce72, 0x0, 0x0, 0x80000000}};
  // 419721067656
  s21_decimal dec_check = {{0xb9533c88, 0x61, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_73) {
  // -29842508
  s21_decimal dec_1 = {{0x1c75c4c, 0x0, 0x0, 0x80000000}};
  // 603443674.022573955
  s21_decimal dec_2 = {{0x8127783, 0x85fdcd3, 0x0, 0x90000}};
  // -18008272669568055.432679140
  s21_decimal dec_check = {{0x72438ee4, 0x6ae4be5f, 0xee566, 0x80090000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_74) {
  // 7
  s21_decimal dec_1 = {{0x7, 0x0, 0x0, 0x0}};
  // -483034934
  s21_decimal dec_2 = {{0x1cca8736, 0x0, 0x0, 0x80000000}};
  // -3381244538
  s21_decimal dec_check = {{0xc989b27a, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_75) {
  // 9870915
  s21_decimal dec_1 = {{0x969e43, 0x0, 0x0, 0x0}};
  // 871514
  s21_decimal dec_2 = {{0xd4c5a, 0x0, 0x0, 0x0}};
  // 8602640615310
  s21_decimal dec_check = {{0xf556878e, 0x7d2, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_76) {
  // -4774
  s21_decimal dec_1 = {{0x12a6, 0x0, 0x0, 0x80000000}};
  // 25398271651685628194172
  s21_decimal dec_2 = {{0xcb992d7c, 0xd7d31d65, 0x560, 0x0}};
  // -121251348865147188998977128
  s21_decimal dec_check = {{0xca863668, 0xcaf63852, 0x644bf8, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_77) {
  // 6.91
  s21_decimal dec_1 = {{0x2b3, 0x0, 0x0, 0x20000}};
  // 5.47
  s21_decimal dec_2 = {{0x223, 0x0, 0x0, 0x20000}};
  // 37.7977
  s21_decimal dec_check = {{0x5c479, 0x0, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_78) {
  // 6.0847118906413
  s21_decimal dec_1 = {{0x12e8742d, 0x3757, 0x0, 0xd0000}};
  // -3894
  s21_decimal dec_2 = {{0xf36, 0x0, 0x0, 0x80000000}};
  // -23693.8681021572222
  s21_decimal dec_check = {{0x9bd7247e, 0x349c679, 0x0, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_79) {
  // 895962660593710
  s21_decimal dec_1 = {{0x901de02e, 0x32edf, 0x0, 0x0}};
  // 864519.32398384039519406489
  s21_decimal dec_2 = {{0x9ad4999, 0xa56679a5, 0x4782e8, 0x140000}};
  // 774577033651237205335.97147609
  s21_decimal dec_check = {{0xac6ed1d9, 0x35d2a235, 0xfa4782b1, 0x80000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_80) {
  // 30.44
  s21_decimal dec_1 = {{0xbe4, 0x0, 0x0, 0x20000}};
  // 9719120684440257246080
  s21_decimal dec_2 = {{0xdcef3380, 0xdfe50063, 0x20e, 0x0}};
  // 295850033634361430570675.20
  s21_decimal dec_check = {{0xc405e00, 0x3ef8a36f, 0x1878de, 0x20000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_81) {
  // -52863313
  s21_decimal dec_1 = {{0x326a151, 0x0, 0x0, 0x80000000}};
  // -5510712562641231
  s21_decimal dec_2 = {{0xc0c1694f, 0x1393f6, 0x0, 0x80000000}};
  // 291314523051935501058303
  s21_decimal dec_check = {{0x2f2700ff, 0x3122e13e, 0x3db0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_82) {
  // 2594374.948
  s21_decimal dec_1 = {{0x9aa30524, 0x0, 0x0, 0x30000}};
  // 7276978989551
  s21_decimal dec_2 = {{0x4dbf69ef, 0x69e, 0x0, 0x0}};
  // 18879211987613468168.348
  s21_decimal dec_check = {{0xe529909c, 0x71b2ac61, 0x3ff, 0x30000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_83) {
  // -640358885091908.31487
  s21_decimal dec_1 = {{0x8ad67d7f, 0x78ad2d52, 0x3, 0x80050000}};
  // -8360741
  s21_decimal dec_2 = {{0x7f9325, 0x0, 0x0, 0x80000000}};
  // 5353874785302206616374.51867
  s21_decimal dec_check = {{0x7d11105b, 0x5e00d30f, 0x1badcb5, 0x50000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_84) {
  // -3954171622.009854898158
  s21_decimal dec_1 = {{0x6b922fee, 0x5b279c1e, 0xd6, 0x800c0000}};
  // -7074852426785207431
  s21_decimal dec_2 = {{0x48d7b487, 0x622eeccc, 0x0, 0x80000000}};
  // 27975180695901621863192570453
  s21_decimal dec_check = {{0x5d4daa55, 0x4efd689f, 0x5a6486f0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_85) {
  // 5933
  s21_decimal dec_1 = {{0x172d, 0x0, 0x0, 0x0}};
  // -506241539722
  s21_decimal dec_2 = {{0xde58de8a, 0x75, 0x0, 0x80000000}};
  // -3003531055170626
  s21_decimal dec_check = {{0x119d8442, 0xaabb2, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_86) {
  // 98940743727924732
  s21_decimal dec_1 = {{0xbb745fc, 0x15f8215, 0x0, 0x0}};
  // -7.61261791023948111526751067
  s21_decimal dec_2 = {{0xb3eb5b, 0x6206f2e8, 0x275b374, 0x801a0000}};
  // -753198077755614421.60851049610
  s21_decimal dec_check = {{0xd0905c8a, 0x129d773f, 0xf35f15b1, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_87) {
  // 578176590110010795
  s21_decimal dec_1 = {{0x9ef42dab, 0x806188b, 0x0, 0x0}};
  // -80257548
  s21_decimal dec_2 = {{0x4c8a20c, 0x0, 0x0, 0x80000000}};
  // -46403035433230516660230660
  s21_decimal dec_check = {{0x51f05a04, 0x9761809c, 0x266239, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_88) {
  // -735016482.28469197493
  s21_decimal dec_1 = {{0xa7a04ab5, 0xfc0a4fa2, 0x3, 0x800b0000}};
  // -954601233544305
  s21_decimal dec_2 = {{0x6b6d7471, 0x36434, 0x0, 0x80000000}};
  // 701647640664362762683352.35410
  s21_decimal dec_check = {{0x7f560152, 0xa35e04ac, 0xe2b6eeb9, 0x50000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_89) {
  // -77166450471757
  s21_decimal dec_1 = {{0xb6de734d, 0x462e, 0x0, 0x80000000}};
  // 72.97448394042
  s21_decimal dec_2 = {{0x11d1bd3a, 0x6a3, 0x0, 0xb0000}};
  // -5631181900690446.52928071794
  s21_decimal dec_check = {{0xe862f872, 0x407face2, 0x1d1ccea, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_90) {
  // 40.768673587819241120421
  s21_decimal dec_1 = {{0x77e5a2a5, 0x1300526e, 0x8a2, 0x150000}};
  // 673953901438189261562374
  s21_decimal dec_2 = {{0x37cc2206, 0x1d3c853a, 0x8eb7, 0x0}};
  // 27476206620970838610291317.621
  s21_decimal dec_check = {{0xe395db75, 0x817ffd28, 0x58c7c911, 0x30000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_91) {
  // -170005896595756273
  s21_decimal dec_1 = {{0x544fd4f1, 0x25bfb76, 0x0, 0x80000000}};
  // 789844
  s21_decimal dec_2 = {{0xc0d54, 0x0, 0x0, 0x0}};
  // -134278137390778517691412
  s21_decimal dec_check = {{0xb34e1c14, 0x3b7f78d9, 0x1c6f, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_92) {
  // -3
  s21_decimal dec_1 = {{0x3, 0x0, 0x0, 0x80000000}};
  // -1.3054
  s21_decimal dec_2 = {{0x32fe, 0x0, 0x0, 0x80040000}};
  // 3.9162
  s21_decimal dec_check = {{0x98fa, 0x0, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_93) {
  // -13
  s21_decimal dec_1 = {{0xd, 0x0, 0x0, 0x80000000}};
  // -55
  s21_decimal dec_2 = {{0x37, 0x0, 0x0, 0x80000000}};
  // 715
  s21_decimal dec_check = {{0x2cb, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_94) {
  // 70963016.64208860541440245
  s21_decimal dec_1 = {{0x38d150f5, 0x48b7545f, 0x5deb3, 0x110000}};
  // 8724831836384
  s21_decimal dec_2 = {{0x688098e0, 0x7ef, 0x0, 0x0}};
  // 619140386804742280442.98249316
  s21_decimal dec_check = {{0x924ce464, 0x3c701b64, 0xc80e17aa, 0x80000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_95) {
  // -728.668
  s21_decimal dec_1 = {{0xb1e5c, 0x0, 0x0, 0x80030000}};
  // -318691862595
  s21_decimal dec_2 = {{0x3383e843, 0x4a, 0x0, 0x80000000}};
  // 232220562133373.460
  s21_decimal dec_check = {{0xf3805214, 0x339035e, 0x0, 0x30000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_96) {
  // -325.982864
  s21_decimal dec_1 = {{0x136e1a90, 0x0, 0x0, 0x80060000}};
  // -9.6
  s21_decimal dec_2 = {{0x60, 0x0, 0x0, 0x80010000}};
  // 3129.4354944
  s21_decimal dec_check = {{0x4949f600, 0x7, 0x0, 0x70000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_97) {
  // -834
  s21_decimal dec_1 = {{0x342, 0x0, 0x0, 0x80000000}};
  // 84171542674487649036.081049
  s21_decimal dec_2 = {{0x64c71799, 0x78b16472, 0x45a004, 0x60000}};
  // -70199066590522699296091.594866
  s21_decimal dec_check = {{0x509ae072, 0x31e93cac, 0xe2d34e91, 0x80060000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_99) {
  // 922303495162294732668
  s21_decimal dec_1 = {{0xd9c8877c, 0xff883e46, 0x31, 0x0}};
  // -57237
  s21_decimal dec_2 = {{0xdf95, 0x0, 0x0, 0x80000000}};
  // -52789885152604263613718316
  s21_decimal dec_check = {{0x6fbbdf2c, 0x688bf6f2, 0x2baab1, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_100) {
  // -43394542661116059283.85
  s21_decimal dec_1 = {{0x4bb0f1c1, 0x3e06879d, 0xeb, 0x80020000}};
  // 4.69598877735808
  s21_decimal dec_2 = {{0x24b5b80, 0x1ab19, 0x0, 0xe0000}};
  // -203780285335187446527.51869586
  s21_decimal dec_check = {{0x1b1c9692, 0x59c2f4d5, 0x41d84f64, 0x80080000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_101) {
  // -80190189.033394729729837753
  s21_decimal dec_1 = {{0x8a7ecab9, 0xdbac8a14, 0x4254ee, 0x80120000}};
  // -153338619.8720
  s21_decimal dec_2 = {{0x4f08ec0, 0x165, 0x0, 0x80040000}};
  // 12296252913655537.575771768464
  s21_decimal dec_check = {{0xddf00690, 0x1eee8b0f, 0x27bb38d6, 0xc0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_102) {
  // -65.11568243759454340103240
  s21_decimal dec_1 = {{0x33d5bc48, 0xd2620c13, 0x562e0, 0x80170000}};
  // 5278061.84
  s21_decimal dec_2 = {{0x1f75aee8, 0x0, 0x0, 0x20000}};
  // -343684598.65942594091721292704
  s21_decimal dec_check = {{0x1631fba0, 0x94f048d2, 0x6f0cec76, 0x80140000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_103) {
  // -157973757
  s21_decimal dec_1 = {{0x96a7cfd, 0x0, 0x0, 0x80000000}};
  // -8217831068253613390
  s21_decimal dec_2 = {{0xf6ced4e, 0x720b99d1, 0x0, 0x80000000}};
  // 1298201648243346736043806230
  s21_decimal dec_check = {{0x1e44e16, 0x5e137e87, 0x431d8e4, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_104) {
  // -7279853.9
  s21_decimal dec_1 = {{0x456d14b, 0x0, 0x0, 0x80010000}};
  // 331
  s21_decimal dec_2 = {{0x14b, 0x0, 0x0, 0x0}};
  // -2409631640.9
  s21_decimal dec_check = {{0x9c409bf9, 0x5, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_105) {
  // -3283
  s21_decimal dec_1 = {{0xcd3, 0x0, 0x0, 0x80000000}};
  // 5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x0}};
  // -16415
  s21_decimal dec_check = {{0x401f, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_106) {
  // 3728
  s21_decimal dec_1 = {{0xe90, 0x0, 0x0, 0x0}};
  // -323947222
  s21_decimal dec_2 = {{0x134f0ad6, 0x0, 0x0, 0x80000000}};
  // -1207675243616
  s21_decimal dec_check = {{0x2f0dcc60, 0x119, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_107) {
  // 890562
  s21_decimal dec_1 = {{0xd96c2, 0x0, 0x0, 0x0}};
  // 6.68
  s21_decimal dec_2 = {{0x29c, 0x0, 0x0, 0x20000}};
  // 5948954.16
  s21_decimal dec_check = {{0x23756238, 0x0, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_108) {
  // -22056.22
  s21_decimal dec_1 = {{0x21a7b6, 0x0, 0x0, 0x80020000}};
  // 931239320113826727089569
  s21_decimal dec_2 = {{0x37fe55a1, 0x95aece26, 0xc532, 0x0}};
  // -20539619317080987334567493569
  s21_decimal dec_check = {{0xeae77fc1, 0x47bca088, 0x425df992, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_109) {
  // 365093.81495283298719
  s21_decimal dec_1 = {{0xf394b19f, 0xfaab6108, 0x1, 0xe0000}};
  // 46809366372069999173
  s21_decimal dec_2 = {{0x70590245, 0x899c46b5, 0x2, 0x0}};
  // 17089810144303887461818006.118
  s21_decimal dec_check = {{0x44db7a66, 0x4a7bfbd2, 0x37385c10, 0x30000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_110) {
  // -531024336872
  s21_decimal dec_1 = {{0xa38457e8, 0x7b, 0x0, 0x80000000}};
  // -836095471310.7046
  s21_decimal dec_2 = {{0x77a86a66, 0x1db43e, 0x0, 0x80040000}};
  // 443987043214449210890080.0112
  s21_decimal dec_check = {{0x7b611670, 0x677da0de, 0xe589322, 0x40000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_111) {
  // 7.86088615410
  s21_decimal dec_1 = {{0x6885df2, 0xb7, 0x0, 0xb0000}};
  // 576169.5616929098
  s21_decimal dec_2 = {{0x4c8d0d4a, 0x14783b, 0x0, 0xa0000}};
  // 4529203.329925660402960200180
  s21_decimal dec_check = {{0x667a71f4, 0x7f27ac02, 0xea2781c, 0x150000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_112) {
  // 0.10836
  s21_decimal dec_1 = {{0x2a54, 0x0, 0x0, 0x50000}};
  // 0.4
  s21_decimal dec_2 = {{0x4, 0x0, 0x0, 0x10000}};
  // 0.043344
  s21_decimal dec_check = {{0xa950, 0x0, 0x0, 0x60000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_113) {
  // -902533.576180977
  s21_decimal dec_1 = {{0x7934c4f1, 0x334d9, 0x0, 0x80090000}};
  // 2589848766531949780
  s21_decimal dec_2 = {{0x471ed4d4, 0x23f0fdbb, 0x0, 0x0}};
  // -2337425469025972813416465.9553
  s21_decimal dec_check = {{0xc3573d61, 0xc53c808a, 0x4b86baf5, 0x80040000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_114) {
  // 62703475584302
  s21_decimal dec_1 = {{0x4a636d2e, 0x3907, 0x0, 0x0}};
  // -132400511217147
  s21_decimal dec_2 = {{0xe5706dfb, 0x786a, 0x0, 0x80000000}};
  // -8301972222453479991026426394
  s21_decimal dec_check = {{0x2f18a21a, 0xf9944608, 0x1ad33aff, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_115) {
  // -945.33
  s21_decimal dec_1 = {{0x17145, 0x0, 0x0, 0x80020000}};
  // -3.30
  s21_decimal dec_2 = {{0x14a, 0x0, 0x0, 0x80020000}};
  // 3119.5890
  s21_decimal dec_check = {{0x1dc02f2, 0x0, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_116) {
  // -2
  s21_decimal dec_1 = {{0x2, 0x0, 0x0, 0x80000000}};
  // -1260961031746070
  s21_decimal dec_2 = {{0x5e5f7216, 0x47ad6, 0x0, 0x80000000}};
  // 2521922063492140
  s21_decimal dec_check = {{0xbcbee42c, 0x8f5ac, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_117) {
  // -0.040
  s21_decimal dec_1 = {{0x28, 0x0, 0x0, 0x80030000}};
  // 379027040381613815651496646
  s21_decimal dec_2 = {{0x50c9f2c6, 0x7d7077c, 0x1398619, 0x0}};
  // -15161081615264552626059865.840
  s21_decimal dec_check = {{0x9f8deef0, 0x39992b6c, 0x30fcf3e9, 0x80030000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_118) {
  // 12933358350267699065980
  s21_decimal dec_1 = {{0xfa52747c, 0x1e671fb2, 0x2bd, 0x0}};
  // 0.1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x10000}};
  // 1293335835026769906598.0
  s21_decimal dec_check = {{0xfa52747c, 0x1e671fb2, 0x2bd, 0x10000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_119) {
  // -8.41853910944738142938673
  s21_decimal dec_1 = {{0xd2d96631, 0xfdf0f70e, 0xb244, 0x80170000}};
  // 37622.67
  s21_decimal dec_2 = {{0x39685b, 0x0, 0x0, 0x20000}};
  // -316727.91879683271388194524517
  s21_decimal dec_check = {{0x7341cd65, 0x3b50301a, 0x66571e90, 0x80170000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_120) {
  // -87018896249421560648748
  s21_decimal dec_1 = {{0x1fad942c, 0x4dc704fa, 0x126d, 0x80000000}};
  // 265
  s21_decimal dec_2 = {{0x109, 0x0, 0x0, 0x0}};
  // -23060007506096713571918220
  s21_decimal dec_check = {{0xcaae618c, 0x830426ea, 0x131325, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_121) {
  // 2440733.16560947969144
  s21_decimal dec_1 = {{0x9ec4fc78, 0x3b329c41, 0xd, 0xe0000}};
  // -0.4687327045572792986135969
  s21_decimal dec_2 = {{0x7d786da1, 0x821fd168, 0x3e094, 0x80190000}};
  // -1144051.4578187812904355517425
  s21_decimal dec_check = {{0x56053f1, 0x4c62cb, 0x24f75f32, 0x80160000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_122) {
  // 4
  s21_decimal dec_1 = {{0x4, 0x0, 0x0, 0x0}};
  // -2.616
  s21_decimal dec_2 = {{0xa38, 0x0, 0x0, 0x80030000}};
  // -10.464
  s21_decimal dec_check = {{0x28e0, 0x0, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_123) {
  // -60683214019350696
  s21_decimal dec_1 = {{0xc773d0a8, 0xd7970f, 0x0, 0x80000000}};
  // -49001805
  s21_decimal dec_2 = {{0x2ebb54d, 0x0, 0x0, 0x80000000}};
  // 2973587020149489032006280
  s21_decimal dec_check = {{0xba948a88, 0x79b196b5, 0x275ae, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_124) {
  // 60.142844451903
  s21_decimal dec_1 = {{0x18e11c3f, 0x36b3, 0x0, 0xc0000}};
  // -985570647485
  s21_decimal dec_2 = {{0x78969dbd, 0xe5, 0x0, 0x80000000}};
  // -59275022148051.679650413955
  s21_decimal dec_check = {{0x816e7d83, 0x63ac95fa, 0x3107f9, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_125) {
  // -14777
  s21_decimal dec_1 = {{0x39b9, 0x0, 0x0, 0x80000000}};
  // 46975314145220988
  s21_decimal dec_2 = {{0xa0d6997c, 0xa6e3cc, 0x0, 0x0}};
  // -694154217123930539676
  s21_decimal dec_check = {{0x341869c, 0xa1532eb0, 0x25, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_126) {
  // 169270.411881874941939445
  s21_decimal dec_1 = {{0x906e0ef5, 0x2adbb57c, 0x23d8, 0x120000}};
  // -1.02280955
  s21_decimal dec_2 = {{0x618aefb, 0x0, 0x0, 0x80080000}};
  // -173131.39380521516252135986770
  s21_decimal dec_check = {{0x43789652, 0x71fe6bf6, 0x37f117de, 0x80170000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_127) {
  // 89
  s21_decimal dec_1 = {{0x59, 0x0, 0x0, 0x0}};
  // -5353790535890
  s21_decimal dec_2 = {{0x86c878d2, 0x4de, 0x0, 0x80000000}};
  // -476487357694210
  s21_decimal dec_check = {{0xdbb20102, 0x1b15c, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_128) {
  // 25
  s21_decimal dec_1 = {{0x19, 0x0, 0x0, 0x0}};
  // -90782778
  s21_decimal dec_2 = {{0x5693c3a, 0x0, 0x0, 0x80000000}};
  // -2269569450
  s21_decimal dec_check = {{0x8746e1aa, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_129) {
  // -203
  s21_decimal dec_1 = {{0xcb, 0x0, 0x0, 0x80000000}};
  // -259956818868574926178937761
  s21_decimal dec_2 = {{0x3dbceba1, 0x6373d9ad, 0xd707ff, 0x80000000}};
  // 52771234230320710014324365483
  s21_decimal dec_check = {{0xf4ced8ab, 0xdcdd9c5f, 0xaa835783, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_130) {
  // 5280306762888
  s21_decimal dec_1 = {{0x6acf1488, 0x4cd, 0x0, 0x0}};
  // 3.7688981274169726255
  s21_decimal dec_2 = {{0xb93c552f, 0xb0a28c8, 0x2, 0x130000}};
  // 19900938270835.759685142815322
  s21_decimal dec_check = {{0xec3fa25a, 0x6312976c, 0x404dab99, 0xf0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_131) {
  // -298468.15823189665202298777374
  s21_decimal dec_1 = {{0x59216f1e, 0xdd25282e, 0x6070b517, 0x80170000}};
  // 539.128002
  s21_decimal dec_2 = {{0x202270c2, 0x0, 0x0, 0x60000}};
  // -160912541.80818229467564265653
  s21_decimal dec_check = {{0xe6fcd0b5, 0xb00ac48, 0x33fe5f9d, 0x80140000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_132) {
  // 93487.172244258847795531
  s21_decimal dec_1 = {{0xf695294b, 0xf3239fe2, 0x13cb, 0x120000}};
  // -6676823393
  s21_decimal dec_2 = {{0x8df83d61, 0x1, 0x0, 0x80000000}};
  // -624197338585887.78490842786166
  s21_decimal dec_check = {{0x265b2976, 0xc5bf2047, 0xc9b064c8, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_133) {
  // -7701840
  s21_decimal dec_1 = {{0x758550, 0x0, 0x0, 0x80000000}};
  // 270
  s21_decimal dec_2 = {{0x10e, 0x0, 0x0, 0x0}};
  // -2079496800
  s21_decimal dec_check = {{0x7bf29a60, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_134) {
  // 9528157032428676681403128338
  s21_decimal dec_1 = {{0x5326da12, 0xb7948c3a, 0x1ec981bb, 0x0}};
  // 3.40
  s21_decimal dec_2 = {{0x154, 0x0, 0x0, 0x20000}};
  // 32395733910257500716770636349
  s21_decimal dec_check = {{0x811db23d, 0x3cf90ff9, 0x68ad1f7e, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_135) {
  // 8.90
  s21_decimal dec_1 = {{0x37a, 0x0, 0x0, 0x20000}};
  // -93814103675.937305
  s21_decimal dec_2 = {{0x2486a219, 0x14d4b6e, 0x0, 0x80060000}};
  // -834945522715.84201450
  s21_decimal dec_check = {{0xfc0f8aea, 0x86b83cea, 0x4, 0x80080000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_136) {
  // 55713.9
  s21_decimal dec_1 = {{0x88053, 0x0, 0x0, 0x10000}};
  // -0.7
  s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x80010000}};
  // -38999.73
  s21_decimal dec_check = {{0x3b8245, 0x0, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_137) {
  // -79107933354089350.39
  s21_decimal dec_1 = {{0x1893c07f, 0x6dc8c8a0, 0x0, 0x80020000}};
  // 644685.6687170
  s21_decimal dec_2 = {{0x69a4e42, 0x5dd, 0x0, 0x70000}};
  // -50999750915200961602745.274750
  s21_decimal dec_check = {{0x6b4c117e, 0xec8cd289, 0xa4ca0154, 0x80060000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_138) {
  // -8
  s21_decimal dec_1 = {{0x8, 0x0, 0x0, 0x80000000}};
  // 8468689805225
  s21_decimal dec_2 = {{0xc53f5fa9, 0x7b3, 0x0, 0x0}};
  // -67749518441800
  s21_decimal dec_check = {{0x29fafd48, 0x3d9e, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_139) {
  // -750828
  s21_decimal dec_1 = {{0xb74ec, 0x0, 0x0, 0x80000000}};
  // 0.912467998771627435314291111
  s21_decimal dec_2 = {{0xaa92a1a7, 0x545fadf1, 0x2f2c69d, 0x1b0000}};
  // -685106.52258170348400215856629
  s21_decimal dec_check = {{0xbb3415f5, 0xd5da398d, 0xdd5eaeec, 0x80170000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_140) {
  // -61782113255
  s21_decimal dec_1 = {{0x62803be7, 0xe, 0x0, 0x80000000}};
  // -0.002644568162665699
  s21_decimal dec_2 = {{0x81eb84e3, 0x96538, 0x0, 0x80120000}};
  // 163387009.736379478321740245
  s21_decimal dec_check = {{0xdaa539d5, 0x8bacbef9, 0x87268b, 0x120000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_141) {
  // -2620439.0181
  s21_decimal dec_1 = {{0x19e74325, 0x6, 0x0, 0x80040000}};
  // -95298.7
  s21_decimal dec_2 = {{0xe8a9b, 0x0, 0x0, 0x80010000}};
  // 249724431854.20647
  s21_decimal dec_check = {{0x53d9967, 0x58b84e, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_142) {
  // -95333124496082
  s21_decimal dec_1 = {{0x79055ad2, 0x56b4, 0x0, 0x80000000}};
  // -301
  s21_decimal dec_2 = {{0x12d, 0x0, 0x0, 0x80000000}};
  // 28695270473320682
  s21_decimal dec_check = {{0x4b4bc8ea, 0x65f232, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_143) {
  // 26552
  s21_decimal dec_1 = {{0x67b8, 0x0, 0x0, 0x0}};
  // -526
  s21_decimal dec_2 = {{0x20e, 0x0, 0x0, 0x80000000}};
  // -13966352
  s21_decimal dec_check = {{0xd51c10, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_144) {
  // -633268554439.6386053
  s21_decimal dec_1 = {{0x5bff6f05, 0x57e237f3, 0x0, 0x80070000}};
  // -789211393.9
  s21_decimal dec_2 = {{0xd6681a13, 0x1, 0x0, 0x80010000}};
  // 499782758562345217101.06492767
  s21_decimal dec_check = {{0xd43bf5f, 0x53d3400, 0xa17d0f93, 0x80000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_145) {
  // 3848419210376906992824224625
  s21_decimal dec_1 = {{0x748e0b71, 0x6d20a900, 0xc6f5677, 0x0}};
  // -8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x80000000}};
  // -30787353683015255942593797000
  s21_decimal dec_check = {{0xa4705b88, 0x69054803, 0x637ab3bb, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_146) {
  // 20
  s21_decimal dec_1 = {{0x14, 0x0, 0x0, 0x0}};
  // 575072831628426
  s21_decimal dec_2 = {{0x93d9648a, 0x20b06, 0x0, 0x0}};
  // 11501456632568520
  s21_decimal dec_check = {{0x8cfbdac8, 0x28dc83, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_147) {
  // 73101
  s21_decimal dec_1 = {{0x11d8d, 0x0, 0x0, 0x0}};
  // -88600
  s21_decimal dec_2 = {{0x15a18, 0x0, 0x0, 0x80000000}};
  // -6476748600
  s21_decimal dec_check = {{0x820b5738, 0x1, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_148) {
  // 77855263859810218
  s21_decimal dec_1 = {{0x32421faa, 0x11498f3, 0x0, 0x0}};
  // -220
  s21_decimal dec_2 = {{0xdc, 0x0, 0x0, 0x80000000}};
  // -17128158049158247960
  s21_decimal dec_check = {{0x30d33618, 0xedb370ff, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_149) {
  // -9961668637240703
  s21_decimal dec_1 = {{0xb87e2d7f, 0x236415, 0x0, 0x80000000}};
  // -8591.75
  s21_decimal dec_2 = {{0xd1c27, 0x0, 0x0, 0x80020000}};
  // 85588166514012810000.25
  s21_decimal dec_check = {{0x37a5d259, 0xf970fde5, 0x1cf, 0x20000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_150) {
  // -551077.696505456
  s21_decimal dec_1 = {{0xc6580670, 0x1f533, 0x0, 0x80090000}};
  // -0.211
  s21_decimal dec_2 = {{0xd3, 0x0, 0x0, 0x80030000}};
  // 116277.393962651216
  s21_decimal dec_check = {{0x7a8d4e50, 0x19d19ac, 0x0, 0xc0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_151) {
  // 717.0374
  s21_decimal dec_1 = {{0x6d6946, 0x0, 0x0, 0x40000}};
  // -171
  s21_decimal dec_2 = {{0xab, 0x0, 0x0, 0x80000000}};
  // -122613.3954
  s21_decimal dec_check = {{0x491551c2, 0x0, 0x0, 0x80040000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_152) {
  // -6.5706376139
  s21_decimal dec_1 = {{0x4c67bbcb, 0xf, 0x0, 0x800a0000}};
  // 70061
  s21_decimal dec_2 = {{0x111ad, 0x0, 0x0, 0x0}};
  // -460345.4418674479
  s21_decimal dec_check = {{0x415d632f, 0x105ad1, 0x0, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_153) {
  // -91.591892762
  s21_decimal dec_1 = {{0x534d5f1a, 0x15, 0x0, 0x80090000}};
  // -60206048952
  s21_decimal dec_2 = {{0x48f66b8, 0xe, 0x0, 0x80000000}};
  // 5514385979235.306485424
  s21_decimal dec_check = {{0x3b06b6b0, 0xef7a7fa5, 0x12a, 0x90000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_154) {
  // -602.5779
  s21_decimal dec_1 = {{0x5bf233, 0x0, 0x0, 0x80040000}};
  // -167222298833900.9
  s21_decimal dec_2 = {{0xc1348741, 0x5f0e0, 0x0, 0x80010000}};
  // 100764461664504453.13011
  s21_decimal dec_check = {{0x396d63f3, 0x3ec82116, 0x222, 0x50000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_155) {
  // 15775
  s21_decimal dec_1 = {{0x3d9f, 0x0, 0x0, 0x0}};
  // -85159060839.50939
  s21_decimal dec_2 = {{0xe513115b, 0x1e412b, 0x0, 0x80050000}};
  // -1343384184743260.62725
  s21_decimal dec_check = {{0xd1fa7685, 0x4851efd8, 0x7, 0x80050000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_156) {
  // 8551040662475008054825026
  s21_decimal dec_1 = {{0xe1ae9042, 0xd7d98de3, 0x712c0, 0x0}};
  // 579.905552354985891586906336
  s21_decimal dec_2 = {{0xb69018e0, 0xfc27eb1d, 0x1dfafc6, 0x180000}};
  // 4958795958582514025802333909.7
  s21_decimal dec_check = {{0x713ef459, 0x9a8f6600, 0xa03a32e3, 0x10000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_157) {
  // 1508.2218753689853696490
  s21_decimal dec_1 = {{0x127119ea, 0x9bd4df76, 0x331, 0x130000}};
  // -0.0902
  s21_decimal dec_2 = {{0x386, 0x0, 0x0, 0x80040000}};
  // -136.04161315828248034233980
  s21_decimal dec_check = {{0xfa814e7c, 0x100b5a04, 0xb40cb, 0x80170000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_158) {
  // 911.45
  s21_decimal dec_1 = {{0x16409, 0x0, 0x0, 0x20000}};
  // 6
  s21_decimal dec_2 = {{0x6, 0x0, 0x0, 0x0}};
  // 5468.70
  s21_decimal dec_check = {{0x85836, 0x0, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_159) {
  // -0.5775318058944406536976211164
  s21_decimal dec_1 = {{0x466e1cdc, 0x50ab59cf, 0x12a93b2b, 0x801c0000}};
  // 5.0560668968
  s21_decimal dec_2 = {{0xc5a69528, 0xb, 0x0, 0xa0000}};
  // -2.9200394456320045043126946435
  s21_decimal dec_check = {{0x4014ca83, 0x594a8a5c, 0x5e5a000b, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_160) {
  // -3459456881162750
  s21_decimal dec_1 = {{0x928479fe, 0xc4a5b, 0x0, 0x80000000}};
  // 99.343531
  s21_decimal dec_2 = {{0x5ebdcab, 0x0, 0x0, 0x60000}};
  // -343674661916954970.670250
  s21_decimal dec_check = {{0xa97dc4aa, 0xa4087312, 0x48c6, 0x80060000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_161) {
  // 0.3812
  s21_decimal dec_1 = {{0xee4, 0x0, 0x0, 0x40000}};
  // -214.18256
  s21_decimal dec_2 = {{0x146d110, 0x0, 0x0, 0x80050000}};
  // -81.646391872
  s21_decimal dec_check = {{0x2811240, 0x13, 0x0, 0x80090000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_162) {
  // 27
  s21_decimal dec_1 = {{0x1b, 0x0, 0x0, 0x0}};
  // 536530348
  s21_decimal dec_2 = {{0x1ffacdac, 0x0, 0x0, 0x0}};
  // 14486319396
  s21_decimal dec_check = {{0x5f73b124, 0x3, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_163) {
  // -7522892374290878223.003
  s21_decimal dec_1 = {{0xeec4d29b, 0xd11aa46c, 0x197, 0x80030000}};
  // 7847446.19
  s21_decimal dec_2 = {{0x2ec640ab, 0x0, 0x0, 0x20000}};
  // -59035493100409006262858862.709
  s21_decimal dec_check = {{0x8ccd075, 0xa92babc9, 0xbec103ed, 0x80030000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_164) {
  // 5645859.3299279708034300
  s21_decimal dec_1 = {{0x586614fc, 0xa060b33f, 0xbf4, 0x100000}};
  // 3647.8335968327843
  s21_decimal dec_2 = {{0x7163b8a3, 0x8198da, 0x0, 0xd0000}};
  // 20595155346.703083166831600250
  s21_decimal dec_check = {{0xa195e27a, 0x7a855117, 0x428be9c8, 0x120000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_165) {
  // 78.9809881530
  s21_decimal dec_1 = {{0xe45661ba, 0xb7, 0x0, 0xa0000}};
  // -9907655914408
  s21_decimal dec_2 = {{0xce4fb3a8, 0x902, 0x0, 0x80000000}};
  // -782516454399858.6300084240
  s21_decimal dec_check = {{0x136b3010, 0x51a5416, 0x6790b, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_166) {
  // 8
  s21_decimal dec_1 = {{0x8, 0x0, 0x0, 0x0}};
  // -30047860592469195293
  s21_decimal dec_2 = {{0x2a95ba1d, 0xa0ff7202, 0x1, 0x80000000}};
  // -240382884739753562344
  s21_decimal dec_check = {{0x54add0e8, 0x7fb9011, 0xd, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_167) {
  // 2
  s21_decimal dec_1 = {{0x2, 0x0, 0x0, 0x0}};
  // -1579956618182
  s21_decimal dec_2 = {{0xdcc0c3c6, 0x16f, 0x0, 0x80000000}};
  // -3159913236364
  s21_decimal dec_check = {{0xb981878c, 0x2df, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_168) {
  // 64125.153
  s21_decimal dec_1 = {{0x3d278e1, 0x0, 0x0, 0x30000}};
  // -817501
  s21_decimal dec_2 = {{0xc795d, 0x0, 0x0, 0x80000000}};
  // -52422376702.653
  s21_decimal dec_check = {{0x892442bd, 0x2fad, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_169) {
  // 24972542610436.505534184633
  s21_decimal dec_1 = {{0x4383bcb9, 0x3f5e86b1, 0x14a824, 0xc0000}};
  // -50.8242
  s21_decimal dec_2 = {{0x7c152, 0x0, 0x0, 0x80040000}};
  // -1269209500141347.0445705066245
  s21_decimal dec_check = {{0x5a237705, 0xb23d1981, 0x2902a7a8, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_170) {
  // -1.7
  s21_decimal dec_1 = {{0x11, 0x0, 0x0, 0x80010000}};
  // 67781129
  s21_decimal dec_2 = {{0x40a4209, 0x0, 0x0, 0x0}};
  // -115227919.3
  s21_decimal dec_check = {{0x44ae6299, 0x0, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_171) {
  // 0.6
  s21_decimal dec_1 = {{0x6, 0x0, 0x0, 0x10000}};
  // -65652995084293712303674
  s21_decimal dec_2 = {{0x719ad63a, 0xe55b0b0, 0xde7, 0x80000000}};
  // -39391797050576227382204.4
  s21_decimal dec_check = {{0xa9a1055c, 0x56022422, 0x536a, 0x80010000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_172) {
  // 14
  s21_decimal dec_1 = {{0xe, 0x0, 0x0, 0x0}};
  // -2782135.29692
  s21_decimal dec_2 = {{0xc6d1905c, 0x40, 0x0, 0x80050000}};
  // -38949894.15688
  s21_decimal dec_check = {{0xdf75e508, 0x38a, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_173) {
  // 26185413406.6996697
  s21_decimal dec_1 = {{0x9407e5d9, 0x3a24af2, 0x0, 0x70000}};
  // -481237569065.8
  s21_decimal dec_2 = {{0x77f18da2, 0x460, 0x0, 0x80010000}};
  // -12601404692823157561691.797566
  s21_decimal dec_check = {{0x92a0f83e, 0x3765a80e, 0x28b7a33d, 0x80060000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_174) {
  // 82649
  s21_decimal dec_1 = {{0x142d9, 0x0, 0x0, 0x0}};
  // -677446806044839895
  s21_decimal dec_2 = {{0xe4868fd7, 0x966c647, 0x0, 0x80000000}};
  // -55990301072799972481855
  s21_decimal dec_check = {{0xf6fc5b3f, 0x3d848061, 0xbdb, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_175) {
  // -9555125510.931291811591
  s21_decimal dec_1 = {{0xa47faf07, 0xfc011af7, 0x205, 0x800c0000}};
  // 26405637781439
  s21_decimal dec_2 = {{0xaa8f7bf, 0x1804, 0x0, 0x0}};
  // -252309183197838947654582.08042
  s21_decimal dec_check = {{0x1c8b52a, 0xce4264fe, 0x518686c6, 0x80050000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_176) {
  // 0.4041
  s21_decimal dec_1 = {{0xfc9, 0x0, 0x0, 0x40000}};
  // 5.75262204634
  s21_decimal dec_2 = {{0xf04ca2da, 0x85, 0x0, 0xb0000}};
  // 2.324634568925994
  s21_decimal dec_check = {{0x29b6a32a, 0x8423e, 0x0, 0xf0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_177) {
  // 450904969820245286006
  s21_decimal dec_1 = {{0xf9f35c76, 0x7190410d, 0x18, 0x0}};
  // -29452979.933
  s21_decimal dec_2 = {{0xdb88cedd, 0x6, 0x0, 0x80030000}};
  // -13280495027805655025872563718
  s21_decimal dec_check = {{0x3b906e06, 0xa9f3086, 0x2ae95e36, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_178) {
  // 9641581816395
  s21_decimal dec_1 = {{0xdb0f2a4b, 0x8c4, 0x0, 0x0}};
  // 288.796426534
  s21_decimal dec_2 = {{0x3d9bc126, 0x43, 0x0, 0x90000}};
  // 2784454374710068.894224930
  s21_decimal dec_check = {{0x6d8bd222, 0x92f90742, 0x24da1, 0x90000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_179) {
  // 11588729633830077
  s21_decimal dec_1 = {{0x6138f4bd, 0x292be3, 0x0, 0x0}};
  // 28399.327679894065109902056372
  s21_decimal dec_2 = {{0xa9645bb4, 0x622956c2, 0x5bc35f8e, 0x180000}};
  // 329112130264839119362.49678829
  s21_decimal dec_check = {{0xc103cbed, 0x1f52a075, 0x6a578471, 0x80000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_180) {
  // -27985792325148100
  s21_decimal dec_1 = {{0xa4c5dc4, 0x636cee, 0x0, 0x80000000}};
  // 314
  s21_decimal dec_2 = {{0x13a, 0x0, 0x0, 0x0}};
  // -8787538790096503400
  s21_decimal dec_check = {{0xa1ab0268, 0x79f39bf8, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_181) {
  // 6487472324
  s21_decimal dec_1 = {{0x82aef8c4, 0x1, 0x0, 0x0}};
  // -46250936722358
  s21_decimal dec_2 = {{0xa2a763b6, 0x2a10, 0x0, 0x80000000}};
  // -300051671945372797019992
  s21_decimal dec_check = {{0xe274a758, 0xd56f446c, 0x3f89, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_182) {
  // -28280455491188.89678094584565
  s21_decimal dec_1 = {{0xedddcaf5, 0x69818da4, 0x9234df0, 0x800e0000}};
  // -24261813599.41
  s21_decimal dec_2 = {{0xe3ad9945, 0x234, 0x0, 0x80020000}};
  // 686135139633635987349146.68975
  s21_decimal dec_check = {{0x6c2ac9af, 0xc1307a1, 0xddb3c4bd, 0x50000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_183) {
  // 11499767589
  s21_decimal dec_1 = {{0xad708725, 0x2, 0x0, 0x0}};
  // 963.4710638693928
  s21_decimal dec_2 = {{0xe1220e28, 0x223ab7, 0x0, 0xd0000}};
  // 11079693313224.5922505499592
  s21_decimal dec_check = {{0xb8e323c8, 0xc7c41313, 0x5ba629, 0xd0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_184) {
  // -5720.6413
  s21_decimal dec_1 = {{0x368e68d, 0x0, 0x0, 0x80040000}};
  // -192
  s21_decimal dec_2 = {{0xc0, 0x0, 0x0, 0x80000000}};
  // 1098363.1296
  s21_decimal dec_check = {{0x8eace9c0, 0x2, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_185) {
  // -780
  s21_decimal dec_1 = {{0x30c, 0x0, 0x0, 0x80000000}};
  // -61229.072366
  s21_decimal dec_2 = {{0x41897fee, 0xe, 0x0, 0x80060000}};
  // 47758676.445480
  s21_decimal dec_check = {{0xaef1c928, 0x2b6f, 0x0, 0x60000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_186) {
  // 9235205784206.677093293767
  s21_decimal dec_1 = {{0x73969ec7, 0x823c16ac, 0x7a3a1, 0xc0000}};
  // -4525734557585066
  s21_decimal dec_2 = {{0xb0a70eaa, 0x101421, 0x0, 0x80000000}};
  // -41796089963993648258602578005
  s21_decimal dec_check = {{0x747d3055, 0x4a0920e, 0x870cea51, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_187) {
  // 8536199
  s21_decimal dec_1 = {{0x824087, 0x0, 0x0, 0x0}};
  // -46970720370621073357
  s21_decimal dec_2 = {{0xc712c7cd, 0x8bd98550, 0x2, 0x80000000}};
  // -400951416256975235768950043
  s21_decimal dec_check = {{0x22f49d1b, 0xd40e96e7, 0x14ba8c3, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_188) {
  // -26329902018438
  s21_decimal dec_1 = {{0x6874ef86, 0x17f2, 0x0, 0x80000000}};
  // -3350.61905107
  s21_decimal dec_2 = {{0x33eeed3, 0x4e, 0x0, 0x80080000}};
  // 88221471315784809.20362866
  s21_decimal dec_check = {{0x6383ff72, 0x8de6bfdd, 0x74c29, 0x80000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_189) {
  // -71.900447127506
  s21_decimal dec_1 = {{0xa09c37d2, 0x4164, 0x0, 0x800c0000}};
  // 6604.0777084328159291731896081
  s21_decimal dec_2 = {{0xb5dc6711, 0x5f7b507b, 0xd563a683, 0x190000}};
  // -474836.14010111466706770730110
  s21_decimal dec_check = {{0xee021c7e, 0x5c7e1d7e, 0x996d8661, 0x80170000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_190) {
  // -41076485790217431
  s21_decimal dec_1 = {{0xa025b4d7, 0x91eed8, 0x0, 0x80000000}};
  // 49953.19472090
  s21_decimal dec_2 = {{0x103e1fda, 0x48b, 0x0, 0x80000}};
  // -2051901693129013239092.3600079
  s21_decimal dec_check = {{0x848200cf, 0xb565881a, 0x424ceed8, 0x80070000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_191) {
  // -2365730.6
  s21_decimal dec_1 = {{0x168fb5a, 0x0, 0x0, 0x80010000}};
  // -5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x80000000}};
  // 11828653.0
  s21_decimal dec_check = {{0x70ce8c2, 0x0, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_192) {
  // -6003833.4
  s21_decimal dec_1 = {{0x3941cbe, 0x0, 0x0, 0x80010000}};
  // 4291190934475568920273.1
  s21_decimal dec_2 = {{0xf854242b, 0x425f5003, 0x916, 0x10000}};
  // -25763595458181632167537574902
  s21_decimal dec_check = {{0xe3a483f6, 0x570457fd, 0x533f258c, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_193) {
  // -898877245319
  s21_decimal dec_1 = {{0x49424787, 0xd1, 0x0, 0x80000000}};
  // 748.158
  s21_decimal dec_2 = {{0xb6a7e, 0x0, 0x0, 0x30000}};
  // -672502202103372.402
  s21_decimal dec_check = {{0x930a1a72, 0x9553530, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_194) {
  // -69832.3
  s21_decimal dec_1 = {{0xaa7d3, 0x0, 0x0, 0x80010000}};
  // -7645
  s21_decimal dec_2 = {{0x1ddd, 0x0, 0x0, 0x80000000}};
  // 533867933.5
  s21_decimal dec_check = {{0x3e35c827, 0x1, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_195) {
  // -94
  s21_decimal dec_1 = {{0x5e, 0x0, 0x0, 0x80000000}};
  // -612906070825492043075.388
  s21_decimal dec_2 = {{0x84ad0f3c, 0xb465a43f, 0x81c9, 0x80030000}};
  // 57613170657596252049086.472
  s21_decimal dec_check = {{0xb78b9808, 0x3d524f52, 0x2fa810, 0x30000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_196) {
  // -950296675.0
  s21_decimal dec_1 = {{0x366bc3de, 0x2, 0x0, 0x80010000}};
  // 25406518
  s21_decimal dec_2 = {{0x183ac36, 0x0, 0x0, 0x0}};
  // -24143729578727650.0
  s21_decimal dec_check = {{0xfaee78d4, 0x359c1f0, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_197) {
  // 441895655283018172950
  s21_decimal dec_1 = {{0x64c40a16, 0xf488bd37, 0x17, 0x0}};
  // -3472
  s21_decimal dec_2 = {{0xd90, 0x0, 0x0, 0x80000000}};
  // -1534261715142639096482400
  s21_decimal dec_check = {{0xa2c8ca60, 0x7e863f46, 0x144e4, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_198) {
  // 9193.04824964032187391150854
  s21_decimal dec_1 = {{0xd05e0b06, 0x6b8d0472, 0x2f86e5e, 0x170000}};
  // 0.06
  s21_decimal dec_2 = {{0x6, 0x0, 0x0, 0x20000}};
  // 551.5828949784193124346905124
  s21_decimal dec_check = {{0xe2344224, 0x854e1ab0, 0x11d29636, 0x190000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_199) {
  // -975995137.0853660261
  s21_decimal dec_1 = {{0xb4d1b665, 0x8772500f, 0x0, 0x800a0000}};
  // -378010.95039
  s21_decimal dec_2 = {{0xcd1eef7f, 0x8, 0x0, 0x80050000}};
  // 368936849345657.54608707854518
  s21_decimal dec_check = {{0x796a60b6, 0xda43b870, 0x7735bdab, 0xe0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_200) {
  // -4416654475.620337753971
  s21_decimal dec_1 = {{0x6d629f73, 0x6d64c523, 0xef, 0x800c0000}};
  // 7828470
  s21_decimal dec_2 = {{0x7773f6, 0x0, 0x0, 0x0}};
  // -34575647062759545.496829354370
  s21_decimal dec_check = {{0x88dae182, 0x6dc3306, 0x6fb84e0f, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_201) {
  // -62368
  s21_decimal dec_1 = {{0xf3a0, 0x0, 0x0, 0x80000000}};
  // 14224958316927770074428
  s21_decimal dec_2 = {{0xc23a9d3c, 0x22f3fe2f, 0x303, 0x0}};
  // -887182200310151164001925504
  s21_decimal dec_check = {{0x7e23980, 0x72c63337, 0x2dddc23, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_202) {
  // 49724525733650641
  s21_decimal dec_1 = {{0x54faa0d1, 0xb0a831, 0x0, 0x0}};
  // 70333972
  s21_decimal dec_2 = {{0x4313614, 0x0, 0x0, 0x0}};
  // 3497323400663863641876052
  s21_decimal dec_check = {{0x8d81a654, 0x480cba43, 0x2e496, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_203) {
  // 6451021.8
  s21_decimal dec_1 = {{0x3d8590a, 0x0, 0x0, 0x10000}};
  // 3601381323328
  s21_decimal dec_2 = {{0x830df240, 0x346, 0x0, 0x0}};
  // 23232589426901776550.4
  s21_decimal dec_check = {{0x1dc3b680, 0x982b61ec, 0xc, 0x10000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_204) {
  // 60235512
  s21_decimal dec_1 = {{0x3971ef8, 0x0, 0x0, 0x0}};
  // 48970106220365041
  s21_decimal dec_2 = {{0x59e0c4f1, 0xadfa0d, 0x0, 0x0}};
  // 2949739420878073071535992
  s21_decimal dec_check = {{0x65fa0778, 0xb1c5735a, 0x270a1, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_205) {
  // -64740.00360317753491469
  s21_decimal dec_1 = {{0x2a9c000d, 0xf4cda2fc, 0x15e, 0x80110000}};
  // 256292345783202685.40044510646
  s21_decimal dec_2 = {{0xfd1e05b6, 0x72a134d6, 0x52d00186, 0xb0000}};
  // -16592367389471364549448.412560
  s21_decimal dec_check = {{0xc3e9ad90, 0x84624689, 0x359ce276, 0x80060000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_206) {
  // 7797.84015314
  s21_decimal dec_1 = {{0x8ebfcdd2, 0xb5, 0x0, 0x80000}};
  // 7736858108597
  s21_decimal dec_2 = {{0x60ade2b5, 0x709, 0x0, 0x0}};
  // 60330782818364481.23054458
  s21_decimal dec_check = {{0x1839e97a, 0xd4392792, 0x4fd8d, 0x80000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_207) {
  // 5824263
  s21_decimal dec_1 = {{0x58df07, 0x0, 0x0, 0x0}};
  // -77767.8
  s21_decimal dec_2 = {{0xbddce, 0x0, 0x0, 0x80010000}};
  // -452940120131.4
  s21_decimal dec_check = {{0x955982a2, 0x41e, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_208) {
  // -69764407
  s21_decimal dec_1 = {{0x4288537, 0x0, 0x0, 0x80000000}};
  // 8475854734937951674
  s21_decimal dec_2 = {{0x73ca0dba, 0x75a048f9, 0x0, 0x0}};
  // -591312979401088380331267318
  s21_decimal dec_check = {{0xe69a94f6, 0xd8228688, 0x1e91f64, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_210) {
  // -2.813004515742170
  s21_decimal dec_1 = {{0xa6e991da, 0x9fe69, 0x0, 0x800f0000}};
  // 990826360025342534965549
  s21_decimal dec_2 = {{0x4357592d, 0xcdfa9401, 0xd1d0, 0x0}};
  // -2787199025067665664899643.1756
  s21_decimal dec_check = {{0xc3bea78c, 0x105d2932, 0x5a0f2b83, 0x80040000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_211) {
  // 8817
  s21_decimal dec_1 = {{0x2271, 0x0, 0x0, 0x0}};
  // 465.3
  s21_decimal dec_2 = {{0x122d, 0x0, 0x0, 0x10000}};
  // 4102550.1
  s21_decimal dec_check = {{0x271ffdd, 0x0, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_212) {
  // 9203
  s21_decimal dec_1 = {{0x23f3, 0x0, 0x0, 0x0}};
  // 57225.46683266202439
  s21_decimal dec_2 = {{0x9aabfb47, 0x4f6a91e3, 0x0, 0xe0000}};
  // 526645971.26098861046117
  s21_decimal dec_check = {{0x549a3965, 0xf41a9931, 0xb26, 0xe0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_213) {
  // -0.09
  s21_decimal dec_1 = {{0x9, 0x0, 0x0, 0x80020000}};
  // -117747281743450885123972
  s21_decimal dec_2 = {{0x33b8ef84, 0x17ca7dd5, 0x18ef, 0x80000000}};
  // 10597255356910579661157.48
  s21_decimal dec_check = {{0xd1806ba4, 0xd61e6c7e, 0xe067, 0x20000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_214) {
  // -6075.3383756
  s21_decimal dec_1 = {{0x252f114c, 0xe, 0x0, 0x80070000}};
  // 408670
  s21_decimal dec_2 = {{0x63c5e, 0x0, 0x0, 0x0}};
  // -2482808533.9564520
  s21_decimal dec_check = {{0x171e29e8, 0x583503, 0x0, 0x80070000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_215) {
  // -7640241422
  s21_decimal dec_1 = {{0xc764d50e, 0x1, 0x0, 0x80000000}};
  // -81987941737.23154905868140790
  s21_decimal dec_2 = {{0x92ae00f6, 0xbee01a5c, 0x1a7de232, 0x80110000}};
  // 626407668565319120723.36280134
  s21_decimal dec_check = {{0xb4788a46, 0x99b9fad0, 0xca673a57, 0x80000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_216) {
  // -23204671312
  s21_decimal dec_1 = {{0x671b2f50, 0x5, 0x0, 0x80000000}};
  // 73512171657.1952
  s21_decimal dec_2 = {{0xdcc86f30, 0x29c96, 0x0, 0x40000}};
  // -1705825780736536955824.1024
  s21_decimal dec_check = {{0xd51c8f00, 0x238bb7d, 0xe1c3a, 0x80040000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_217) {
  // 166421207
  s21_decimal dec_1 = {{0x9eb62d7, 0x0, 0x0, 0x0}};
  // -432
  s21_decimal dec_2 = {{0x1b0, 0x0, 0x0, 0x80000000}};
  // -71893961424
  s21_decimal dec_check = {{0xbd36cad0, 0x10, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_218) {
  // -2848.777720
  s21_decimal dec_1 = {{0xa9cce5f8, 0x0, 0x0, 0x80060000}};
  // 628387958.570375215845682328
  s21_decimal dec_2 = {{0x89432c98, 0x7e067e97, 0x207ca53, 0x120000}};
  // -1790137615891.5679669413707742
  s21_decimal dec_check = {{0x272b7fde, 0x194ce7b2, 0x39d7abda, 0x80100000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_219) {
  // 30
  s21_decimal dec_1 = {{0x1e, 0x0, 0x0, 0x0}};
  // 32204433741161833.58088
  s21_decimal dec_2 = {{0x4f863a88, 0x94a13a1e, 0xae, 0x50000}};
  // 966133012234855007.42640
  s21_decimal dec_check = {{0x51badbf0, 0x6ae4cf8d, 0x1475, 0x50000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_220) {
  // -3239492784.401237284865
  s21_decimal dec_1 = {{0x34d61801, 0x9cfe53d8, 0xaf, 0x800c0000}};
  // 0.3
  s21_decimal dec_2 = {{0x3, 0x0, 0x0, 0x10000}};
  // -971847835.3203711854595
  s21_decimal dec_check = {{0x9e824803, 0xd6fafb88, 0x20e, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_221) {
  // 86560777.844931
  s21_decimal dec_1 = {{0x6a38c3, 0x4eba, 0x0, 0x60000}};
  // 49438359445441347690
  s21_decimal dec_2 = {{0xdf9c006a, 0xae1855fa, 0x2, 0x0}};
  // 4279422848974694648569758475.1
  s21_decimal dec_check = {{0x78bf1e6f, 0xebd61447, 0x8a468e5e, 0x10000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_222) {
  // -9432
  s21_decimal dec_1 = {{0x24d8, 0x0, 0x0, 0x80000000}};
  // 2350894
  s21_decimal dec_2 = {{0x23df2e, 0x0, 0x0, 0x0}};
  // -22173632208
  s21_decimal dec_check = {{0x29a6c6d0, 0x5, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_223) {
  // 1805432.52
  s21_decimal dec_1 = {{0xac2df14, 0x0, 0x0, 0x20000}};
  // -49011348.5
  s21_decimal dec_2 = {{0x1d3689cd, 0x0, 0x0, 0x80010000}};
  // -88486682430953.220
  s21_decimal dec_check = {{0x39a65704, 0x13a5e2b, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_224) {
  // -13696801420.008533560728808
  s21_decimal dec_1 = {{0x65691ce8, 0x17c0adae, 0xb5469, 0x800f0000}};
  // 264698034232951
  s21_decimal dec_2 = {{0xd04d9e77, 0xf0bd, 0x0, 0x0}};
  // -3625516411155350684340342.9863
  s21_decimal dec_check = {{0xcfab27e7, 0xada12776, 0x752591a0, 0x80040000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_225) {
  // 9926491
  s21_decimal dec_1 = {{0x97775b, 0x0, 0x0, 0x0}};
  // -3
  s21_decimal dec_2 = {{0x3, 0x0, 0x0, 0x80000000}};
  // -29779473
  s21_decimal dec_check = {{0x1c66611, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_226) {
  // 536157908.0667
  s21_decimal dec_1 = {{0x57043bdb, 0x4e0, 0x0, 0x40000}};
  // -510590638672278086
  s21_decimal dec_2 = {{0xbb37246, 0x715fb7b, 0x0, 0x80000000}};
  // -273757208708968911783445036.34
  s21_decimal dec_check = {{0xa63fd952, 0x1443bf56, 0x5874aa62, 0x80020000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_227) {
  // -5.937495
  s21_decimal dec_1 = {{0x5a9957, 0x0, 0x0, 0x80060000}};
  // 1039.2908220
  s21_decimal dec_2 = {{0x6b7731bc, 0x2, 0x0, 0x70000}};
  // -6170.7840591708900
  s21_decimal dec_check = {{0x3e5342e4, 0xdb3af4, 0x0, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_228) {
  // -2908372415703442
  s21_decimal dec_1 = {{0x38b66992, 0xa5526, 0x0, 0x80000000}};
  // 43.4299992711007495268907106
  s21_decimal dec_2 = {{0x5e84b862, 0xc7c75aab, 0x1673e99, 0x190000}};
  // -126310611894090012.15709489688
  s21_decimal dec_check = {{0xa7052a18, 0x1e237bcb, 0x28d02b3f, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_229) {
  // 40965680
  s21_decimal dec_1 = {{0x2711630, 0x0, 0x0, 0x0}};
  // 9.7449
  s21_decimal dec_2 = {{0x17ca9, 0x0, 0x0, 0x40000}};
  // 399206455.0320
  s21_decimal dec_check = {{0x7996e5b0, 0x3a1, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_230) {
  // -25069841.90302547979731
  s21_decimal dec_1 = {{0x37a9add3, 0xe7650682, 0x87, 0x800e0000}};
  // 2055424783.21557207307943540
  s21_decimal dec_2 = {{0x5d067e74, 0x13a38d3d, 0xaa0550, 0x110000}};
  // -51529174358774811.646665691305
  s21_decimal dec_check = {{0xb6f010a9, 0x4ef34dfb, 0xa67fef1b, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_231) {
  // 1.5729187965
  s21_decimal dec_1 = {{0xa9885c7d, 0x3, 0x0, 0xa0000}};
  // -8298518038
  s21_decimal dec_2 = {{0xeea15616, 0x1, 0x0, 0x80000000}};
  // -13052895005.0645012670
  s21_decimal dec_check = {{0xc166f0be, 0x1373fc7f, 0x7, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_232) {
  // -42651758737345643
  s21_decimal dec_1 = {{0x7095cc6b, 0x97878c, 0x0, 0x80000000}};
  // -12367131
  s21_decimal dec_2 = {{0xbcb51b, 0x0, 0x0, 0x80000000}};
  // 527479887685148159260233
  s21_decimal dec_check = {{0xe7e83649, 0xbdf4456b, 0x6fb2, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_233) {
  // 8019182186
  s21_decimal dec_1 = {{0xddfb026a, 0x1, 0x0, 0x0}};
  // 0.624
  s21_decimal dec_2 = {{0x270, 0x0, 0x0, 0x30000}};
  // 5003969684.064
  s21_decimal dec_check = {{0x13d5e260, 0x48d, 0x0, 0x30000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_234) {
  // 37560057
  s21_decimal dec_1 = {{0x23d1ef9, 0x0, 0x0, 0x0}};
  // -88416
  s21_decimal dec_2 = {{0x15960, 0x0, 0x0, 0x80000000}};
  // -3320909999712
  s21_decimal dec_check = {{0x35a92e60, 0x305, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_235) {
  // 5908204542184024
  s21_decimal dec_1 = {{0x10ff4a58, 0x14fd7b, 0x0, 0x0}};
  // -509587.851277435460885
  s21_decimal dec_2 = {{0x1e20dd15, 0x9ff3bad3, 0x1b, 0x800f0000}};
  // -3010749257559141086856.0991229
  s21_decimal dec_check = {{0x80fe13fd, 0xed68214f, 0x6148558a, 0x80070000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_236) {
  // 56209.6802593420808435149018
  s21_decimal dec_1 = {{0x1e6228da, 0xb9d7abc6, 0x1d0f4a0, 0x160000}};
  // -696086628544909065759
  s21_decimal dec_2 = {{0xf696be1f, 0xbc247ca2, 0x25, 0x80000000}};
  // -39126806823312758909595881.766
  s21_decimal dec_check = {{0xdf091126, 0x3480358, 0x7e6cefa0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_237) {
  // -3945342521484248751852534223
  s21_decimal dec_1 = {{0xb25cb9cf, 0xa64e5989, 0xcbf82c6, 0x80000000}};
  // 0.9140857704143196
  s21_decimal dec_2 = {{0xc865d95c, 0x20798f, 0x0, 0x100000}};
  // -3606381458299303798573008020.9
  s21_decimal dec_check = {{0x11012dd1, 0xf324596d, 0x748749c9, 0x80010000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_238) {
  // 81
  s21_decimal dec_1 = {{0x51, 0x0, 0x0, 0x0}};
  // -964304260228218140312
  s21_decimal dec_2 = {{0x1ac8b698, 0x4668ef93, 0x34, 0x80000000}};
  // -78108645078485669365272
  s21_decimal dec_check = {{0x7981c618, 0x4733cd8b, 0x108a, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_239) {
  // -4
  s21_decimal dec_1 = {{0x4, 0x0, 0x0, 0x80000000}};
  // -0.51429
  s21_decimal dec_2 = {{0xc8e5, 0x0, 0x0, 0x80050000}};
  // 2.05716
  s21_decimal dec_check = {{0x32394, 0x0, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_240) {
  // 199178743537.26279106
  s21_decimal dec_1 = {{0xfeb7cdc2, 0x146a8131, 0x1, 0x80000}};
  // -42359
  s21_decimal dec_2 = {{0xa577, 0x0, 0x0, 0x80000000}};
  // -8437012397494914.56651054
  s21_decimal dec_check = {{0xdf0eaf2e, 0x22c74769, 0xb2a9, 0x80080000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_241) {
  // -726636866802932624.5275396348
  s21_decimal dec_1 = {{0x12c68fc, 0xcc4329dd, 0x177a996a, 0x800a0000}};
  // -60743184893
  s21_decimal dec_2 = {{0x249371fd, 0xe, 0x0, 0x80000000}};
  // 44138237550280750206298086807
  s21_decimal dec_check = {{0xa1fbdd97, 0x15b4558c, 0x8e9e4b5c, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_242) {
  // 0.26647378
  s21_decimal dec_1 = {{0x1969b52, 0x0, 0x0, 0x80000}};
  // 8904603030265710700804
  s21_decimal dec_2 = {{0xf69ee904, 0xb830fd6a, 0x1e2, 0x0}};
  // 2372843228874358334829.6909191
  s21_decimal dec_check = {{0x46a20187, 0xdb46ce5c, 0x4cabb2fb, 0x70000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_243) {
  // 47225945602894210829.9906
  s21_decimal dec_1 = {{0xeed59282, 0x3c85607c, 0x6401, 0x40000}};
  // -4166933
  s21_decimal dec_2 = {{0x3f9515, 0x0, 0x0, 0x80000000}};
  // -196787351188904782616445220.83
  s21_decimal dec_check = {{0xc4ff7263, 0x62260109, 0x3f95de40, 0x80020000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_244) {
  // -2.6326635
  s21_decimal dec_1 = {{0x191b66b, 0x0, 0x0, 0x80070000}};
  // -7890.09867447
  s21_decimal dec_2 = {{0xb4a722b7, 0xb7, 0x0, 0x80080000}};
  // 20771.974791675550845
  s21_decimal dec_check = {{0xb5309c7d, 0x2044e104, 0x1, 0xf0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_245) {
  // -180.374291359029545090041
  s21_decimal dec_1 = {{0x76bb3bf9, 0x1c243715, 0x2632, 0x80150000}};
  // -9
  s21_decimal dec_2 = {{0x9, 0x0, 0x0, 0x80000000}};
  // 1623.368622231265905810369
  s21_decimal dec_check = {{0x2c951bc1, 0xfd45efc1, 0x157c2, 0x150000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_246) {
  // 0.568
  s21_decimal dec_1 = {{0x238, 0x0, 0x0, 0x30000}};
  // 147123095103797174.7
  s21_decimal dec_2 = {{0x4b2dad23, 0x146adcc1, 0x0, 0x10000}};
  // 83565918018956795.2296
  s21_decimal dec_check = {{0xcd5825a8, 0x4d19ccde, 0x2d, 0x40000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_247) {
  // 49098700
  s21_decimal dec_1 = {{0x2ed2fcc, 0x0, 0x0, 0x0}};
  // -789167372720265979
  s21_decimal dec_2 = {{0x5751dafb, 0xaf3af8b, 0x0, 0x80000000}};
  // -38747092082980523223127300
  s21_decimal dec_check = {{0x4ccd9504, 0x1218f28f, 0x200d04, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_248) {
  // 4314449797450
  s21_decimal dec_1 = {{0x893f614a, 0x3ec, 0x0, 0x0}};
  // -326740832274445
  s21_decimal dec_2 = {{0x473dc80d, 0x1292b, 0x0, 0x80000000}};
  // -1409706917625123653061165250
  s21_decimal dec_check = {{0x30dbc0c2, 0x220277c0, 0x48e150d, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_249) {
  // -15110361295357.37
  s21_decimal dec_1 = {{0x83be66f9, 0x55e47, 0x0, 0x80020000}};
  // -8994.1
  s21_decimal dec_2 = {{0x15f55, 0x0, 0x0, 0x80010000}};
  // 135904100526573721.517
  s21_decimal dec_check = {{0xcd6797ad, 0x5e0c5b60, 0x7, 0x30000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_250) {
  // 6057
  s21_decimal dec_1 = {{0x17a9, 0x0, 0x0, 0x0}};
  // 9135.6673787
  s21_decimal dec_2 = {{0x454836fb, 0x15, 0x0, 0x70000}};
  // 55334737.3127859
  s21_decimal dec_check = {{0x399cd8b3, 0x1f744, 0x0, 0x70000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_251) {
  // 950040.98173419527
  s21_decimal dec_1 = {{0x53d54007, 0x15185b9, 0x0, 0xb0000}};
  // 1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x0}};
  // 950040.98173419527
  s21_decimal dec_check = {{0x53d54007, 0x15185b9, 0x0, 0xb0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_252) {
  // -8991694582319451324617
  s21_decimal dec_1 = {{0x7345c0c9, 0x70d45694, 0x1e7, 0x80000000}};
  // 51.430
  s21_decimal dec_2 = {{0xc8e6, 0x0, 0x0, 0x30000}};
  // -462442852368689381625052.310
  s21_decimal dec_check = {{0xf483c96, 0x4269c36e, 0x17e8615, 0x80030000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_253) {
  // 59122095627651.39441901454
  s21_decimal dec_1 = {{0x8c0c5f8e, 0x85c99222, 0x4e3f5, 0xb0000}};
  // 60.4671449
  s21_decimal dec_2 = {{0x240a8dd9, 0x0, 0x0, 0x70000}};
  // 3574944323108853.3130216035054
  s21_decimal dec_check = {{0xc07d52ee, 0xd08e3581, 0x73833f10, 0xd0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_254) {
  // -15824905242306955583.9
  s21_decimal dec_1 = {{0x473adc7f, 0x942592bd, 0x8, 0x80010000}};
  // 39232285.63006537471
  s21_decimal dec_2 = {{0x86abbeff, 0x36721b97, 0x0, 0xb0000}};
  // -620847202534905390194281526.31
  s21_decimal dec_check = {{0x354fc537, 0xd976576b, 0xc89b46e4, 0x80020000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_255) {
  // -80174
  s21_decimal dec_1 = {{0x1392e, 0x0, 0x0, 0x80000000}};
  // 81800866294360
  s21_decimal dec_2 = {{0xbf93ea58, 0x4a65, 0x0, 0x0}};
  // -6558302654284018640
  s21_decimal dec_check = {{0x4619b3d0, 0x5b03c584, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_256) {
  // -7687921251268496976420
  s21_decimal dec_1 = {{0x1b5fea24, 0xc356fdad, 0x1a0, 0x80000000}};
  // 535564
  s21_decimal dec_2 = {{0x82c0c, 0x0, 0x0, 0x0}};
  // -4117373857014361314679400880
  s21_decimal dec_check = {{0x15dd29b0, 0x9167fd1, 0xd4dcfd4, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_257) {
  // -223859.1027766145840628962808
  s21_decimal dec_1 = {{0x4dc115f8, 0xc7d0dbba, 0x73bb816, 0x80160000}};
  // -21293555893890682660.42342
  s21_decimal dec_2 = {{0xb0caf3e6, 0x990973ed, 0x1c2e8, 0x80050000}};
  // 4766756317330061560283303.8675
  s21_decimal dec_check = {{0x18419d53, 0x7aa81c2e, 0x9a05af21, 0x40000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_258) {
  // -7548930
  s21_decimal dec_1 = {{0x733002, 0x0, 0x0, 0x80000000}};
  // -339246937540.51677
  s21_decimal dec_2 = {{0x4852fc5d, 0x788654, 0x0, 0x80050000}};
  // 2560951384207733260.55610
  s21_decimal dec_check = {{0x7dbe68ba, 0xf1fd577f, 0x363a, 0x50000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_259) {
  // 52124555179.7448645617968
  s21_decimal dec_1 = {{0x68d12930, 0xc729e27c, 0x6e60, 0xd0000}};
  // -7
  s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x80000000}};
  // -364871886258.2140519325776
  s21_decimal dec_check = {{0xddb82050, 0x72253166, 0x304a5, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_260) {
  // 96318.9688
  s21_decimal dec_1 = {{0x39691bb8, 0x0, 0x0, 0x40000}};
  // 673123021
  s21_decimal dec_2 = {{0x281f0acd, 0x0, 0x0, 0x0}};
  // 64834515258260.7448
  s21_decimal dec_check = {{0x2f886258, 0x8ff627b, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_261) {
  // 643509730843773271382743.2040
  s21_decimal dec_1 = {{0x44307668, 0x192304ea, 0x14cafcdc, 0x40000}};
  // -296.1317892931537488915703366
  s21_decimal dec_2 = {{0x3f57a646, 0xa5968cec, 0x9918b74, 0x80190000}};
  // -190563688022322348410011773.03
  s21_decimal dec_check = {{0x5fa030d7, 0xc0d5941e, 0x3d930f0e, 0x80020000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_262) {
  // 5.631839144371161
  s21_decimal dec_1 = {{0xbba1e3d9, 0x140220, 0x0, 0xf0000}};
  // 11596678082001243060492988977
  s21_decimal dec_2 = {{0x98e67231, 0x818bc5fe, 0x25788c1a, 0x0}};
  // 65310625566885677158336438634
  s21_decimal dec_check = {{0x520a216a, 0x4cdc772f, 0xd307aeea, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_263) {
  // -99
  s21_decimal dec_1 = {{0x63, 0x0, 0x0, 0x80000000}};
  // -11083846991833771578742352
  s21_decimal dec_2 = {{0xb487d650, 0x8ca59e9f, 0x92b18, 0x80000000}};
  // 1097300852191543386295492848
  s21_decimal dec_check = {{0xd087e0f0, 0x640c57c2, 0x38baa7e, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_264) {
  // 53944.619963757222
  s21_decimal dec_1 = {{0x967bb2a6, 0xbfa658, 0x0, 0xc0000}};
  // 71.88928823492862835010219872
  s21_decimal dec_2 = {{0xd642af60, 0x69ea4925, 0x173a8ae4, 0x1a0000}};
  // 3878040.3332982280693909599480
  s21_decimal dec_check = {{0xbdc4b4f8, 0x2c96afa1, 0x7d4e65d5, 0x160000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_265) {
  // -9891.33348
  s21_decimal dec_1 = {{0x3af4fa24, 0x0, 0x0, 0x80050000}};
  // 1609572.61
  s21_decimal dec_2 = {{0x998034d, 0x0, 0x0, 0x20000}};
  // -15920819445.7839828
  s21_decimal dec_check = {{0x63fda8d4, 0x2359f02, 0x0, 0x80070000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_266) {
  // -60488213
  s21_decimal dec_1 = {{0x39afa15, 0x0, 0x0, 0x80000000}};
  // -1240264055
  s21_decimal dec_2 = {{0x49eced77, 0x0, 0x0, 0x80000000}};
  // 75021356335083715
  s21_decimal dec_check = {{0xaeebb0c3, 0x10a8786, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_267) {
  // -0.658414
  s21_decimal dec_1 = {{0xa0bee, 0x0, 0x0, 0x80060000}};
  // 5151
  s21_decimal dec_2 = {{0x141f, 0x0, 0x0, 0x0}};
  // -3391.490514
  s21_decimal dec_check = {{0xca2609d2, 0x0, 0x0, 0x80060000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_268) {
  // -6040501880893198
  s21_decimal dec_1 = {{0xf0e02f0e, 0x1575cd, 0x0, 0x80000000}};
  // -3328.545146638
  s21_decimal dec_2 = {{0xfcc0470e, 0x306, 0x0, 0x80090000}};
  // 20106083218904764547.326768324
  s21_decimal dec_check = {{0x6bcf74c4, 0x4e3829da, 0x40f75cbb, 0x90000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_269) {
  // -849
  s21_decimal dec_1 = {{0x351, 0x0, 0x0, 0x80000000}};
  // 7
  s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x0}};
  // -5943
  s21_decimal dec_check = {{0x1737, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_270) {
  // 46304446567772
  s21_decimal dec_1 = {{0x1816d55c, 0x2a1d, 0x0, 0x0}};
  // -68676272.96
  s21_decimal dec_2 = {{0x9957ad20, 0x1, 0x0, 0x80020000}};
  // -3180016811750045011045.12
  s21_decimal dec_check = {{0xef4dd780, 0xe7da978c, 0x4356, 0x80020000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_271) {
  // 43971673415072995112608.8034
  s21_decimal dec_1 = {{0x3919e962, 0xec16c81b, 0x16bb9a3, 0x40000}};
  // -35
  s21_decimal dec_2 = {{0x23, 0x0, 0x0, 0x80000000}};
  // -1539008569527554828941308.1190
  s21_decimal dec_check = {{0xce8ae866, 0x471d5bb8, 0x31ba6169, 0x80040000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_272) {
  // 789760800030
  s21_decimal dec_1 = {{0xe169751e, 0xb7, 0x0, 0x0}};
  // 12123057260678
  s21_decimal dec_2 = {{0x9e858886, 0xb06, 0x0, 0x0}};
  // 9574315401002557540220340
  s21_decimal dec_check = {{0x60013db4, 0xad8a4ac6, 0x7eb70, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_273) {
  // 723.119456221445211252317593
  s21_decimal dec_1 = {{0x6b67dd99, 0x4524b559, 0x2562680, 0x180000}};
  // -1743278.083726971776112864
  s21_decimal dec_2 = {{0x44cd98e0, 0x4b56028b, 0x17127, 0x80120000}};
  // -1260598299.9474108667925426716
  s21_decimal dec_check = {{0xde9cf21c, 0xb79e3bd8, 0x28bb6cbb, 0x80130000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_274) {
  // 0.076335584562731
  s21_decimal dec_1 = {{0x4366ce2b, 0x456d, 0x0, 0xf0000}};
  // 7.00
  s21_decimal dec_2 = {{0x2bc, 0x0, 0x0, 0x20000}};
  // 0.53434909193911700
  s21_decimal dec_check = {{0x4d1bbd94, 0xbdd6c4, 0x0, 0x110000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_275) {
  // -0.1980072565196139168220898
  s21_decimal dec_1 = {{0xd12b46e2, 0xf2e763d1, 0x1a34b, 0x80190000}};
  // -6279263.72782543751139518
  s21_decimal dec_2 = {{0x5858d0be, 0xf4f5dd37, 0x84f7, 0x80110000}};
  // 1243339.7837098385490050807353
  s21_decimal dec_check = {{0xb29bf639, 0x5163ff19, 0x282caa67, 0x160000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_277) {
  // 2136857067888514008439.3328401
  s21_decimal dec_1 = {{0xdd13f11, 0xa5da8b2d, 0x450baad9, 0x70000}};
  // 0.582027812107
  s21_decimal dec_2 = {{0x838f9d0b, 0x87, 0x0, 0xc0000}};
  // 1243710244008530974527.3654266
  s21_decimal dec_check = {{0x38a4bfa, 0x3f8e2ae0, 0x282fbae2, 0x70000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_278) {
  // 9
  s21_decimal dec_1 = {{0x9, 0x0, 0x0, 0x0}};
  // 22.068793
  s21_decimal dec_2 = {{0x150be39, 0x0, 0x0, 0x60000}};
  // 198.619137
  s21_decimal dec_check = {{0xbd6b001, 0x0, 0x0, 0x60000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_279) {
  // -61777.801428379
  s21_decimal dec_1 = {{0xc3e8bd9b, 0x382f, 0x0, 0x80090000}};
  // 7933084663.8907
  s21_decimal dec_2 = {{0xa6ef033b, 0x4826, 0x0, 0x40000}};
  // -490088529080358.4255835341753
  s21_decimal dec_check = {{0x669183b9, 0xf836108b, 0xfd5ead3, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_280) {
  // -352797707088341381037283
  s21_decimal dec_1 = {{0xe32a3ce3, 0x33b7d27b, 0x4ab5, 0x80000000}};
  // 0.04655230184397340870790292
  s21_decimal dec_2 = {{0x13594c94, 0x88b212cb, 0x3d9c8, 0x1a0000}};
  // -16423545350238184996483.049877
  s21_decimal dec_check = {{0x5e8b2995, 0x6e9f904f, 0x35113d01, 0x80060000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_281) {
  // -7012.0
  s21_decimal dec_1 = {{0x111e8, 0x0, 0x0, 0x80010000}};
  // 5.71490912
  s21_decimal dec_2 = {{0x22104260, 0x0, 0x0, 0x80000}};
  // -40072.942749440
  s21_decimal dec_check = {{0x35848700, 0x2472, 0x0, 0x80090000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_282) {
  // -566962030709118732439
  s21_decimal dec_1 = {{0x4f220897, 0xbc2dc309, 0x1e, 0x80000000}};
  // -537342.7481
  s21_decimal dec_2 = {{0x4047ff19, 0x1, 0x0, 0x80040000}};
  // 304652935649594451417960875.62
  s21_decimal dec_check = {{0x20aae70a, 0x6d484c4f, 0x62704cd9, 0x20000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_283) {
  // 84565320672296
  s21_decimal dec_1 = {{0x65e62428, 0x4ce9, 0x0, 0x0}};
  // -71799543
  s21_decimal dec_2 = {{0x44792f7, 0x0, 0x0, 0x80000000}};
  // -6071751377919305560728
  s21_decimal dec_check = {{0x38c3b298, 0x267a2cb3, 0x149, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_284) {
  // 55873621102042.8770943322986
  s21_decimal dec_1 = {{0xd4b24b6a, 0xb11570c3, 0x1ce2cfe, 0xd0000}};
  // -6.313239872275840760034206
  s21_decimal dec_2 = {{0xb0a4339e, 0x6b53c879, 0x538e1, 0x80180000}};
  // -352743572549849.89443618493059
  s21_decimal dec_check = {{0xbabbd283, 0x71b8dc87, 0x71fa43b2, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_285) {
  // -87043037102356893.5334453
  s21_decimal dec_1 = {{0x1b683235, 0x1ffd942e, 0xb852, 0x80070000}};
  // -138684.73
  s21_decimal dec_2 = {{0xd39db9, 0x0, 0x0, 0x80020000}};
  // 12071540098920348143324.607400
  s21_decimal dec_check = {{0xcd55b3a8, 0x65712ac, 0x2701580c, 0x60000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_286) {
  // 0.0
  s21_decimal dec_1 = {{0x0, 0x0, 0x0, 0x10000}};
  // 0.55515456495954535230
  s21_decimal dec_2 = {{0xb105a33e, 0x26e858c, 0x3, 0x140000}};
  // 0.000000000000000000000
  s21_decimal dec_check = {{0x0, 0x0, 0x0, 0x150000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_287) {
  // -37
  s21_decimal dec_1 = {{0x25, 0x0, 0x0, 0x80000000}};
  // 39546
  s21_decimal dec_2 = {{0x9a7a, 0x0, 0x0, 0x0}};
  // -1463202
  s21_decimal dec_check = {{0x1653a2, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_288) {
  // 81129904791.395253459487
  s21_decimal dec_1 = {{0xb7ed9a1f, 0xf9a831d, 0x112e, 0xc0000}};
  // 590.8
  s21_decimal dec_2 = {{0x1714, 0x0, 0x0, 0x10000}};
  // 47931547750756.3157438649196
  s21_decimal dec_check = {{0xb768d36c, 0x19d9e9d8, 0x18c7b00, 0xd0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_289) {
  // 88244371734.93
  s21_decimal dec_1 = {{0x99716cf5, 0x806, 0x0, 0x20000}};
  // 326354.5
  s21_decimal dec_2 = {{0x31cc39, 0x0, 0x0, 0x10000}};
  // 28798947815367212.685
  s21_decimal dec_check = {{0x67f97e8d, 0x8faa6a74, 0x1, 0x30000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_290) {
  // -949629351588
  s21_decimal dec_1 = {{0x1a51f6a4, 0xdd, 0x0, 0x80000000}};
  // 658124455
  s21_decimal dec_2 = {{0x273a2ea7, 0x0, 0x0, 0x0}};
  // -624974299465855884540
  s21_decimal dec_check = {{0xc2f15cfc, 0xe142be1b, 0x21, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_291) {
  // 5.201
  s21_decimal dec_1 = {{0x1451, 0x0, 0x0, 0x30000}};
  // 0.63897688323619251
  s21_decimal dec_2 = {{0xe67f79b3, 0xe3029b, 0x0, 0x110000}};
  // 3.32331876971143724451
  s21_decimal dec_check = {{0xe3d77da3, 0x4080155, 0x12, 0x140000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_293) {
  // 920936808649.830811850
  s21_decimal dec_1 = {{0x7b0dc8ca, 0xec90cc22, 0x31, 0x90000}};
  // -2.36123000496734305
  s21_decimal dec_2 = {{0x2fe84061, 0x346e09e, 0x0, 0x80110000}};
  // -2174543625262.8490638004924669
  s21_decimal dec_check = {{0x46e130fd, 0x56558b48, 0x4643673d, 0x80100000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_294) {
  // 774184.0611
  s21_decimal dec_1 = {{0xcd731ce3, 0x1, 0x0, 0x40000}};
  // -516236317176169
  s21_decimal dec_2 = {{0xa24e3169, 0x1d583, 0x0, 0x80000000}};
  // -399661928518754200559.9259
  s21_decimal dec_check = {{0xbfe84c1b, 0x2a637193, 0x34e51, 0x80040000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_295) {
  // -47167.71781725637348
  s21_decimal dec_1 = {{0xe857cae4, 0x417556f1, 0x0, 0x800e0000}};
  // -226603.44534285897636734000
  s21_decimal dec_2 = {{0x2a036430, 0xbd194a28, 0x12be83, 0x80140000}};
  // 10688367366.350050127182703404
  s21_decimal dec_check = {{0xa4a62b2c, 0xf22cb541, 0x228935d3, 0x120000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_296) {
  // -390983367415839543
  s21_decimal dec_1 = {{0x17e83b37, 0x56d0d4d, 0x0, 0x80000000}};
  // 509
  s21_decimal dec_2 = {{0x1fd, 0x0, 0x0, 0x0}};
  // -199010534014662327387
  s21_decimal dec_check = {{0x88bdbc5b, 0xc9d37248, 0xa, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_297) {
  // -5835395296950.099460183720785
  s21_decimal dec_1 = {{0x910a8351, 0xe9cabab9, 0x12daed04, 0x800f0000}};
  // -22663555
  s21_decimal dec_2 = {{0x159d183, 0x0, 0x0, 0x80000000}};
  // 132250802259169911371.34406612
  s21_decimal dec_check = {{0xa8f7ebd4, 0x9c995042, 0x2abb87ab, 0x80000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_298) {
  // -9774910.152736324931105060
  s21_decimal dec_1 = {{0x9e093124, 0xf0f0ac17, 0x815ea, 0x80120000}};
  // -5.0212595380737793950657
  s21_decimal dec_2 = {{0x806183c1, 0x7be750c, 0xaa2, 0x80160000}};
  // 49082360.838241495317268930650
  s21_decimal dec_check = {{0x2514205a, 0x93b294d3, 0x9e97fa30, 0x150000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_299) {
  // -8100.15553849373
  s21_decimal dec_1 = {{0x7159881d, 0x2e0b4, 0x0, 0x800b0000}};
  // -236864303499574
  s21_decimal dec_2 = {{0x44ab8936, 0xd76d, 0x0, 0x80000000}};
  // 1918637699863534129.3076566710
  s21_decimal dec_check = {{0xf1cf52b6, 0x33cb13b3, 0x3dfe995d, 0xa0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_300) {
  // 1296286.3091517734
  s21_decimal dec_1 = {{0xc1d78926, 0x2e0da7, 0x0, 0xa0000}};
  // -200833447854398571
  s21_decimal dec_2 = {{0xee60dc6b, 0x2c980f4, 0x0, 0x80000000}};
  // -260337648873403468231049.21508
  s21_decimal dec_check = {{0x9595ffa4, 0x710a3b70, 0x541ea026, 0x80050000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_301) {
  // 262.5105242388906443783925684
  s21_decimal dec_1 = {{0xdc1efb4, 0x570df8f6, 0x87b6fa8, 0x190000}};
  // 156598982188
  s21_decimal dec_2 = {{0x7606d62c, 0x24, 0x0, 0x0}};
  // 41108880909448.578275891740151
  s21_decimal dec_check = {{0x6c8ffdf7, 0x860abda8, 0x84d47823, 0xf0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_302) {
  // 50990224289
  s21_decimal dec_1 = {{0xdf4113a1, 0xb, 0x0, 0x0}};
  // -8876950780965770
  s21_decimal dec_2 = {{0x29fcf38a, 0x1f898a, 0x0, 0x80000000}};
  // -452637711323858324331587530
  s21_decimal dec_check = {{0x3a3267ca, 0x7f91394f, 0x17669c3, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_303) {
  // 68.7
  s21_decimal dec_1 = {{0x2af, 0x0, 0x0, 0x10000}};
  // -881128677576657731640352040
  s21_decimal dec_2 = {{0xdfdbdd28, 0x52c9fcf6, 0x2d8da41, 0x80000000}};
  // -60533540149516386163692185148
  s21_decimal dec_check = {{0x7980a63c, 0xeace2f73, 0xc3982bba, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_304) {
  // 313682467.713398162
  s21_decimal dec_1 = {{0xdc533592, 0x45a6c8a, 0x0, 0x90000}};
  // -28848
  s21_decimal dec_2 = {{0x70b0, 0x0, 0x0, 0x80000000}};
  // -9049111828596.110177376
  s21_decimal dec_check = {{0xe0a4b460, 0x8da75fdb, 0x1ea, 0x80090000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_305) {
  // 95320958406141956177337
  s21_decimal dec_1 = {{0xc439bdb9, 0x5c08ce4d, 0x142f, 0x0}};
  // 730902.06482314288
  s21_decimal dec_2 = {{0xd1f03430, 0x103ab27, 0x0, 0xb0000}};
  // 69670285319970074273805062820
  s21_decimal dec_check = {{0xe3a152a4, 0x146f6ae5, 0xe11de8c7, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_306) {
  // -72.51915441
  s21_decimal dec_1 = {{0xb03f72b1, 0x1, 0x0, 0x80080000}};
  // 4.36533
  s21_decimal dec_2 = {{0x6a935, 0x0, 0x0, 0x50000}};
  // -316.5700403206053
  s21_decimal dec_check = {{0xfff97a5, 0xb3f30, 0x0, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_307) {
  // -0.1
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x80010000}};
  // -988.5892342
  s21_decimal dec_2 = {{0x4d3ebef6, 0x2, 0x0, 0x80070000}};
  // 98.85892342
  s21_decimal dec_check = {{0x4d3ebef6, 0x2, 0x0, 0x80000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_308) {
  // -2.242968
  s21_decimal dec_1 = {{0x223998, 0x0, 0x0, 0x80060000}};
  // -5919123.9797840869724251105222
  s21_decimal dec_2 = {{0xb11227c6, 0xbe5daee, 0xbf41d893, 0x80160000}};
  // 13276405.674688353988366405298
  s21_decimal dec_check = {{0x70b58eb2, 0xc3c9e89f, 0x2ae5fc41, 0x150000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_309) {
  // -4084852285
  s21_decimal dec_1 = {{0xf379e63d, 0x0, 0x0, 0x80000000}};
  // 138363422470154399
  s21_decimal dec_2 = {{0xb63da89f, 0x1eb90cc, 0x0, 0x0}};
  // -565194142437630541057951715
  s21_decimal dec_check = {{0x725707e3, 0xdaf816b6, 0x1d38483, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_310) {
  // -957514813515
  s21_decimal dec_1 = {{0xf054904b, 0xde, 0x0, 0x80000000}};
  // -248142759
  s21_decimal dec_2 = {{0xeca5ba7, 0x0, 0x0, 0x80000000}};
  // 237600367608982587885
  s21_decimal dec_check = {{0xcba2c9ed, 0xe15e137a, 0xc, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_311) {
  // 144.222131399
  s21_decimal dec_1 = {{0x944f14c7, 0x21, 0x0, 0x90000}};
  // -0.13
  s21_decimal dec_2 = {{0xd, 0x0, 0x0, 0x80020000}};
  // -18.74887708187
  s21_decimal dec_check = {{0x88040e1b, 0x1b4, 0x0, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_312) {
  // -95071429.4092783445
  s21_decimal dec_1 = {{0x6495f55, 0xd319d9d, 0x0, 0x800a0000}};
  // 216178733091.080110
  s21_decimal dec_2 = {{0x91e347ae, 0x3000569, 0x0, 0x60000}};
  // -20552421162855847206.801825138
  s21_decimal dec_check = {{0x59d6dd72, 0xbaf2ddbc, 0x42689077, 0x80090000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_313) {
  // 16322059945
  s21_decimal dec_1 = {{0xccdedea9, 0x3, 0x0, 0x0}};
  // 326.05998
  s21_decimal dec_2 = {{0x1f1872e, 0x0, 0x0, 0x50000}};
  // 5321970539225.50110
  s21_decimal dec_check = {{0x9d90215e, 0x762be66, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_314) {
  // 744556
  s21_decimal dec_1 = {{0xb5c6c, 0x0, 0x0, 0x0}};
  // -68
  s21_decimal dec_2 = {{0x44, 0x0, 0x0, 0x80000000}};
  // -50629808
  s21_decimal dec_check = {{0x3048cb0, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_315) {
  // 6507343837161149288
  s21_decimal dec_1 = {{0x15515368, 0x5a4ebabe, 0x0, 0x0}};
  // -0.449
  s21_decimal dec_2 = {{0x1c1, 0x0, 0x0, 0x80030000}};
  // -2921797382885356030.312
  s21_decimal dec_check = {{0x63a34968, 0x64158763, 0x9e, 0x80030000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_316) {
  // 1435266
  s21_decimal dec_1 = {{0x15e682, 0x0, 0x0, 0x0}};
  // 49920829164.1806993028378780
  s21_decimal dec_2 = {{0x457d709c, 0xb74e7a3c, 0x19cef77, 0x100000}};
  // 71649668791156975.565586909806
  s21_decimal dec_check = {{0x99b54a6e, 0xfdcbd2e, 0xe7833788, 0xc0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_317) {
  // -55353767148061599
  s21_decimal dec_1 = {{0x3bd7039f, 0xc4a7f5, 0x0, 0x80000000}};
  // 520.4
  s21_decimal dec_2 = {{0x1454, 0x0, 0x0, 0x10000}};
  // -28806100423851256119.6
  s21_decimal dec_check = {{0x6ed59c2c, 0x9da64524, 0xf, 0x80010000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_319) {
  // -7314729757102293557
  s21_decimal dec_1 = {{0x800fc235, 0x658323f5, 0x0, 0x80000000}};
  // -5.2305479961378024631
  s21_decimal dec_2 = {{0x83fecb7, 0xd5e264e6, 0x2, 0x80130000}};
  // 38260045073300956109.009622543
  s21_decimal dec_check = {{0x6424960f, 0x64b00561, 0x7b9ff7af, 0x90000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_320) {
  // 54021944040958868961594
  s21_decimal dec_1 = {{0xc7c1b93a, 0x89138cb9, 0xb70, 0x0}};
  // 497676
  s21_decimal dec_2 = {{0x7980c, 0x0, 0x0, 0x0}};
  // 26885425022528246069330255544
  s21_decimal dec_check = {{0x73a51eb8, 0xe18d5d9c, 0x56df1a32, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_321) {
  // -787949
  s21_decimal dec_1 = {{0xc05ed, 0x0, 0x0, 0x80000000}};
  // 27292610944513303581769
  s21_decimal dec_2 = {{0xaddf1449, 0x89103b95, 0x5c7, 0x0}};
  // -21505185501118313043951301781
  s21_decimal dec_check = {{0x46573495, 0x353c6c, 0x457cac2a, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_322) {
  // 4571053146812
  s21_decimal dec_1 = {{0x47ffc2bc, 0x428, 0x0, 0x0}};
  // -287645894006595.32677580
  s21_decimal dec_2 = {{0xd5c381cc, 0x54de3a92, 0x617, 0x80080000}};
  // -1314844668966398579140774032.0
  s21_decimal dec_check = {{0x6ba7d5a0, 0x49846847, 0x2a7c23e3, 0x80010000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_323) {
  // 666
  s21_decimal dec_1 = {{0x29a, 0x0, 0x0, 0x0}};
  // 489949695
  s21_decimal dec_2 = {{0x1d3409ff, 0x0, 0x0, 0x0}};
  // 326306496870
  s21_decimal dec_check = {{0xf9620166, 0x4b, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_324) {
  // -3019743204
  s21_decimal dec_1 = {{0xb3fd9fe4, 0x0, 0x0, 0x80000000}};
  // -559226888.9
  s21_decimal dec_2 = {{0x4d534059, 0x1, 0x0, 0x80010000}};
  // 1688721597249838035.6
  s21_decimal dec_check = {{0x66119644, 0xea5b7174, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_325) {
  // -3529731970480557
  s21_decimal dec_1 = {{0xc440b9ad, 0xc8a45, 0x0, 0x80000000}};
  // 4.00370802517202347987209
  s21_decimal dec_2 = {{0x8c9f9109, 0x250ab1f8, 0x54c8, 0x170000}};
  // -14132016216919265.943947759671
  s21_decimal dec_check = {{0x457ed037, 0x32ff9550, 0x2da9bad6, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_326) {
  // 793323
  s21_decimal dec_1 = {{0xc1aeb, 0x0, 0x0, 0x0}};
  // -395658919302448
  s21_decimal dec_2 = {{0x85565530, 0x167d9, 0x0, 0x80000000}};
  // -313885320837775954704
  s21_decimal dec_check = {{0x29271310, 0x408ac44, 0x11, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_327) {
  // 989533504380882989270999883
  s21_decimal dec_1 = {{0x997ca34b, 0xc2855bc0, 0x33285de, 0x0}};
  // 3.50
  s21_decimal dec_2 = {{0x15e, 0x0, 0x0, 0x20000}};
  // 3463367265333090462448499590.5
  s21_decimal dec_check = {{0xfc0a5341, 0x983b8b54, 0x6fe84d74, 0x10000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_328) {
  // -8999047514547.56294
  s21_decimal dec_1 = {{0x82259dc6, 0xc7d1a9a, 0x0, 0x80050000}};
  // -6
  s21_decimal dec_2 = {{0x6, 0x0, 0x0, 0x80000000}};
  // 53994285087285.37764
  s21_decimal dec_check = {{0xce1b2a4, 0x4aee9f9f, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_329) {
  // -327605129030645011
  s21_decimal dec_1 = {{0xe77b513, 0x48be321, 0x0, 0x80000000}};
  // -45160174.18
  s21_decimal dec_2 = {{0xd2cf50a, 0x1, 0x0, 0x80020000}};
  // 14794704689285303254508015.98
  s21_decimal dec_check = {{0x373c41be, 0xd3b7c7fb, 0x4c7ca0e, 0x20000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_330) {
  // -0.10805795854
  s21_decimal dec_1 = {{0x84135c0e, 0x2, 0x0, 0x800b0000}};
  // 509918.833264013
  s21_decimal dec_2 = {{0xbaebc58d, 0x1cfc4, 0x0, 0x90000}};
  // -55100.78814360788962802102
  s21_decimal dec_check = {{0x515a79b6, 0xf8970c65, 0x48ecd, 0x80140000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_331) {
  // -9037743874575
  s21_decimal dec_1 = {{0x4383620f, 0x838, 0x0, 0x80000000}};
  // -70.49
  s21_decimal dec_2 = {{0x1b89, 0x0, 0x0, 0x80020000}};
  // 637070565718791.75
  s21_decimal dec_check = {{0xfca70f07, 0xe2553a, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_332) {
  // -667018326129633633
  s21_decimal dec_1 = {{0x33a1e961, 0x941b9a2, 0x0, 0x80000000}};
  // -59.10
  s21_decimal dec_2 = {{0x1716, 0x0, 0x0, 0x80020000}};
  // 39420783074261347710.30
  s21_decimal dec_check = {{0xfbe1c556, 0xb3538693, 0xd5, 0x20000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_333) {
  // 135744952859
  s21_decimal dec_1 = {{0x9b079a1b, 0x1f, 0x0, 0x0}};
  // -82581900551875
  s21_decimal dec_2 = {{0x98d8e6c3, 0x4b1b, 0x0, 0x80000000}};
  // -11210076197420897959060625
  s21_decimal dec_check = {{0xfa06a491, 0x72c6f91e, 0x945d3, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_334) {
  // 2014
  s21_decimal dec_1 = {{0x7de, 0x0, 0x0, 0x0}};
  // 203242.6720178730283092
  s21_decimal dec_2 = {{0x8975b054, 0x2d9635be, 0x6e, 0x100000}};
  // 409330741.4439962790147288
  s21_decimal dec_check = {{0x6be134d8, 0xa3bad0fd, 0x362ca, 0x100000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_335) {
  // -24638188540592763963259
  s21_decimal dec_1 = {{0x9ba8077b, 0xa38d72f3, 0x537, 0x80000000}};
  // 62964
  s21_decimal dec_2 = {{0xf5f4, 0x0, 0x0, 0x0}};
  // -1551318903269882790182639676
  s21_decimal dec_check = {{0x2b4fd83c, 0x41d4b428, 0x503388e, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_336) {
  // -143261694232973855
  s21_decimal dec_1 = {{0x7aad521f, 0x1fcf7c0, 0x0, 0x80000000}};
  // 42443301.26
  s21_decimal dec_2 = {{0xfcfb568e, 0x0, 0x0, 0x20000}};
  // -6080499247348113953468557.30
  s21_decimal dec_check = {{0x4e1ef732, 0x7806fac0, 0x1f6f794, 0x80020000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_337) {
  // -98759414486250396506.0851671
  s21_decimal dec_1 = {{0xc95167d7, 0xdea44d21, 0x330eb31, 0x80070000}};
  // -2.6682
  s21_decimal dec_2 = {{0x683a, 0x0, 0x0, 0x80040000}};
  // 263509869732213307957.53644286
  s21_decimal dec_check = {{0xfc1420fe, 0x2cd93b2f, 0x5525068a, 0x80000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_338) {
  // -5
  s21_decimal dec_1 = {{0x5, 0x0, 0x0, 0x80000000}};
  // 4707987490360853078260205582
  s21_decimal dec_2 = {{0x7516480e, 0x4112a4ed, 0xf365b21, 0x0}};
  // -23539937451804265391301027910
  s21_decimal dec_check = {{0x496f6846, 0x455d38a3, 0x4c0fc7a6, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_339) {
  // -82392088131274040
  s21_decimal dec_1 = {{0xe95e0538, 0x124b72a, 0x0, 0x80000000}};
  // -66106.58635083851
  s21_decimal dec_2 = {{0xe7acf04b, 0x177c5b, 0x0, 0x800b0000}};
  // 5446659688675964050592.3085953
  s21_decimal dec_check = {{0x93232681, 0xa037c0db, 0xaffdb685, 0x70000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_340) {
  // 8.9
  s21_decimal dec_1 = {{0x59, 0x0, 0x0, 0x10000}};
  // -836021128
  s21_decimal dec_2 = {{0x31d4ab88, 0x0, 0x0, 0x80000000}};
  // -7440588039.2
  s21_decimal dec_check = {{0x52efa248, 0x11, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_341) {
  // -18286.807178576360114253
  s21_decimal dec_1 = {{0x2338084d, 0x546e0142, 0x3df, 0x80120000}};
  // -4080528496510668610148789
  s21_decimal dec_2 = {{0xe1f319b5, 0xe49e49e7, 0x36015, 0x80000000}};
  // 74619837802376696564109669605
  s21_decimal dec_check = {{0x1f45f4e5, 0xcaea667a, 0xf11c1548, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_342) {
  // 3983561.3280
  s21_decimal dec_1 = {{0x46633860, 0x9, 0x0, 0x40000}};
  // 4824914.94493320
  s21_decimal dec_2 = {{0xce22ec88, 0x1b6d2, 0x0, 0x80000}};
  // 19220344585525.145063289600
  s21_decimal dec_check = {{0x996e7300, 0xf7c0411b, 0xfe610, 0xc0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_343) {
  // -885879.6218759
  s21_decimal dec_1 = {{0x9966d987, 0x80e, 0x0, 0x80070000}};
  // 33.01189219407
  s21_decimal dec_2 = {{0x9e35f44f, 0x300, 0x0, 0xb0000}};
  // -29244562.574290706420255913
  s21_decimal dec_check = {{0xb904cca9, 0xe9f03843, 0x1830c6, 0x80120000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_344) {
  // -95.064658948822
  s21_decimal dec_1 = {{0xf73a32d6, 0x5675, 0x0, 0x800c0000}};
  // 215899033326977
  s21_decimal dec_2 = {{0xe9305581, 0xc45b, 0x0, 0x0}};
  // -20524367970609423.278234971094
  s21_decimal dec_check = {{0x3554abd6, 0x219ef9c8, 0x42515bf9, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_346) {
  // -345.96
  s21_decimal dec_1 = {{0x8724, 0x0, 0x0, 0x80020000}};
  // -126099
  s21_decimal dec_2 = {{0x1ec93, 0x0, 0x0, 0x80000000}};
  // 43625210.04
  s21_decimal dec_check = {{0x406c9ac, 0x1, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_347) {
  // -2.7890809
  s21_decimal dec_1 = {{0x1a99479, 0x0, 0x0, 0x80070000}};
  // -8155.346613
  s21_decimal dec_2 = {{0xe618b6b5, 0x1, 0x0, 0x80060000}};
  // 22745.9214711979917
  s21_decimal dec_check = {{0x5dcbff8d, 0x32818f3, 0x0, 0xd0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_348) {
  // -746117566
  s21_decimal dec_1 = {{0x2c78d9be, 0x0, 0x0, 0x80000000}};
  // 70000405396660505
  s21_decimal dec_2 = {{0x71cd2119, 0xf8b0ff, 0x0, 0x0}};
  // -52228532093569600518930830
  s21_decimal dec_check = {{0x2704c18e, 0x65e87ee5, 0x2b33d2, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_349) {
  // -507
  s21_decimal dec_1 = {{0x1fb, 0x0, 0x0, 0x80000000}};
  // 657756970972589049188
  s21_decimal dec_2 = {{0x5e17c564, 0xa8363027, 0x23, 0x0}};
  // -333482784283102647938316
  s21_decimal dec_check = {{0x5913ed0c, 0x23515df7, 0x469e, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_350) {
  // -2441.4377659968
  s21_decimal dec_1 = {{0x6a4ece40, 0x1634, 0x0, 0x800a0000}};
  // -6320.843043819921713049067
  s21_decimal dec_2 = {{0xd816adeb, 0x9687547c, 0x53a7d, 0x80150000}};
  // 15431944.920120123075661183435
  s21_decimal dec_check = {{0x2a7cb9cb, 0x674eaa37, 0x31dd0172, 0x150000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_351) {
  // -8
  s21_decimal dec_1 = {{0x8, 0x0, 0x0, 0x80000000}};
  // 9
  s21_decimal dec_2 = {{0x9, 0x0, 0x0, 0x0}};
  // -72
  s21_decimal dec_check = {{0x48, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_352) {
  // -0.895791576
  s21_decimal dec_1 = {{0x3564b1d8, 0x0, 0x0, 0x80090000}};
  // -24454809
  s21_decimal dec_2 = {{0x1752699, 0x0, 0x0, 0x80000000}};
  // 21906411.894888984
  s21_decimal dec_check = {{0xfb4c5a18, 0x4dd3c3, 0x0, 0x90000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_353) {
  // 8865.2860906732
  s21_decimal dec_1 = {{0x1a485cec, 0x50a1, 0x0, 0xa0000}};
  // 97775
  s21_decimal dec_2 = {{0x17def, 0x0, 0x0, 0x0}};
  // 866803347.5155721300
  s21_decimal dec_check = {{0x3bd9fc54, 0x784b0a85, 0x0, 0xa0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_354) {
  // 51399220281
  s21_decimal dec_1 = {{0xf7a1dc39, 0xb, 0x0, 0x0}};
  // 69816304857121827
  s21_decimal dec_2 = {{0x328a0423, 0xf8098f, 0x0, 0x0}};
  // 3588503632556655017626173387
  s21_decimal dec_check = {{0x3b4bffcb, 0xb831509c, 0xb985733, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_355) {
  // 815950434693920968456207039
  s21_decimal dec_1 = {{0x374efabf, 0xb2604ecf, 0x2a2f039, 0x0}};
  // -0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x80010000}};
  // -407975217346960484228103519.5
  s21_decimal dec_check = {{0x148ae5bb, 0x7be18a0c, 0xd2eb120, 0x80010000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_356) {
  // -880.2432343603658694655930
  s21_decimal dec_1 = {{0xf604ffba, 0xd041d62f, 0x747fc, 0x80160000}};
  // -16
  s21_decimal dec_2 = {{0x10, 0x0, 0x0, 0x80000000}};
  // 14083.8917497658539114494880
  s21_decimal dec_check = {{0x604ffba0, 0x41d62ff, 0x747fcd, 0x160000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_357) {
  // 86.6219
  s21_decimal dec_1 = {{0xd37ab, 0x0, 0x0, 0x40000}};
  // -6000739807342035
  s21_decimal dec_2 = {{0x1c9b2dd3, 0x1551a4, 0x0, 0x80000000}};
  // -519795483517601021.5665
  s21_decimal dec_check = {{0xc636f0f1, 0xc81d3ea5, 0x119, 0x80040000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_358) {
  // 6783521258
  s21_decimal dec_1 = {{0x945451ea, 0x1, 0x0, 0x0}};
  // -58794325
  s21_decimal dec_2 = {{0x3812155, 0x0, 0x0, 0x80000000}};
  // -398832553487260850
  s21_decimal dec_check = {{0x23785cb2, 0x588f018, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_359) {
  // 0.90671
  s21_decimal dec_1 = {{0x1622f, 0x0, 0x0, 0x50000}};
  // 1677311
  s21_decimal dec_2 = {{0x1997ff, 0x0, 0x0, 0x0}};
  // 1520834.65681
  s21_decimal dec_check = {{0x68e185d1, 0x23, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_360) {
  // 61299126332.694014
  s21_decimal dec_1 = {{0xa1a1dfe, 0xd9c73b, 0x0, 0x60000}};
  // -1638.43
  s21_decimal dec_2 = {{0x28003, 0x0, 0x0, 0x80020000}};
  // -100434327557275.85335802
  s21_decimal dec_check = {{0x694959fa, 0x74a0eef2, 0x220, 0x80080000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_361) {
  // -0.6455
  s21_decimal dec_1 = {{0x1937, 0x0, 0x0, 0x80040000}};
  // -63429375323070758397
  s21_decimal dec_2 = {{0x88f7dfd, 0x704268cb, 0x3, 0x80000000}};
  // 40943661771042174545.2635
  s21_decimal dec_check = {{0xda21c65b, 0x9a805774, 0x56b3, 0x40000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_362) {
  // 873772.7
  s21_decimal dec_1 = {{0x8553bf, 0x0, 0x0, 0x10000}};
  // -46116719205004
  s21_decimal dec_2 = {{0x62aa9a8c, 0x29f1, 0x0, 0x80000000}};
  // -40295530254898198590.8
  s21_decimal dec_check = {{0x3820b274, 0xd820d0b8, 0x15, 0x80010000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_363) {
  // 4
  s21_decimal dec_1 = {{0x4, 0x0, 0x0, 0x0}};
  // -0.1815
  s21_decimal dec_2 = {{0x717, 0x0, 0x0, 0x80040000}};
  // -0.7260
  s21_decimal dec_check = {{0x1c5c, 0x0, 0x0, 0x80040000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_365) {
  // 25
  s21_decimal dec_1 = {{0x19, 0x0, 0x0, 0x0}};
  // -0.09
  s21_decimal dec_2 = {{0x9, 0x0, 0x0, 0x80020000}};
  // -2.25
  s21_decimal dec_check = {{0xe1, 0x0, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_366) {
  // 19055829295649
  s21_decimal dec_1 = {{0xc7efa221, 0x1154, 0x0, 0x0}};
  // -976492.3936
  s21_decimal dec_2 = {{0x4608ea20, 0x2, 0x0, 0x80040000}};
  // -18607872360941294075.4464
  s21_decimal dec_check = {{0x1f2e6e20, 0x590ab36e, 0x2767, 0x80040000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_367) {
  // 2455.087074305700446547433180
  s21_decimal dec_1 = {{0xbe6b56dc, 0xfaec29ef, 0x7eecce8, 0x180000}};
  // -51610
  s21_decimal dec_2 = {{0xc99a, 0x0, 0x0, 0x80000000}};
  // -126707043.90491720004631302642
  s21_decimal dec_check = {{0xa55891f2, 0x5ac97f58, 0x28f0f605, 0x80140000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_368) {
  // -30564829297096336.0702758
  s21_decimal dec_1 = {{0xea5e6126, 0x3a275707, 0x40b9, 0x80070000}};
  // 0.50
  s21_decimal dec_2 = {{0x32, 0x0, 0x0, 0x20000}};
  // -15282414648548168.035137900
  s21_decimal dec_check = {{0xc66ef96c, 0x5baeff8b, 0xca42d, 0x80090000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_369) {
  // 19802803.4298784029
  s21_decimal dec_1 = {{0xaff2a91d, 0x2bf8972, 0x0, 0xa0000}};
  // 0.10858243538
  s21_decimal dec_2 = {{0x8733a5d2, 0x2, 0x0, 0xb0000}};
  // 2150236.623767614044146854602
  s21_decimal dec_check = {{0xb7d56aca, 0xf13d023b, 0x6f2a250, 0x150000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_370) {
  // -45.2
  s21_decimal dec_1 = {{0x1c4, 0x0, 0x0, 0x80010000}};
  // -5963797052656067370.25467863
  s21_decimal dec_2 = {{0xef9e85d7, 0x9a9021d6, 0x1ed5050, 0x80080000}};
  // 269563626780054245135.51147408
  s21_decimal dec_check = {{0xe863a190, 0xe3d92cbf, 0x5719c7d4, 0x80000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_371) {
  // -329130302904434853271.29298
  s21_decimal dec_1 = {{0x5897fad2, 0xf27ba240, 0x1b399a, 0x80050000}};
  // 8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x0}};
  // -2633042423235478826170.34384
  s21_decimal dec_check = {{0xc4bfd690, 0x93dd1202, 0xd9ccd7, 0x80050000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_372) {
  // -79818574394792
  s21_decimal dec_1 = {{0x35c5f5a8, 0x4898, 0x0, 0x80000000}};
  // 517762
  s21_decimal dec_2 = {{0x7e682, 0x0, 0x0, 0x0}};
  // -41327024715796295504
  s21_decimal dec_check = {{0xe0d3af50, 0x3d871604, 0x2, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_373) {
  // 999.646549292867
  s21_decimal dec_1 = {{0x5978b743, 0x38d2c, 0x0, 0xc0000}};
  // -7382995.1
  s21_decimal dec_2 = {{0x4668e3f, 0x0, 0x0, 0x80010000}};
  // -7380385575.1611455259517
  s21_decimal dec_check = {{0xb0e437d, 0xea3fe081, 0xfa0, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_374) {
  // 8
  s21_decimal dec_1 = {{0x8, 0x0, 0x0, 0x0}};
  // -79803432759071447121.5
  s21_decimal dec_2 = {{0xd43ff32f, 0x42f378c6, 0x2b, 0x80010000}};
  // -638427462072571576972.0
  s21_decimal dec_check = {{0xa1ff9978, 0x179bc636, 0x15a, 0x80010000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_375) {
  // 5
  s21_decimal dec_1 = {{0x5, 0x0, 0x0, 0x0}};
  // -3236
  s21_decimal dec_2 = {{0xca4, 0x0, 0x0, 0x80000000}};
  // -16180
  s21_decimal dec_check = {{0x3f34, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_376) {
  // -576
  s21_decimal dec_1 = {{0x240, 0x0, 0x0, 0x80000000}};
  // -26044.464670863722314
  s21_decimal dec_2 = {{0xf00b074a, 0x697086a0, 0x1, 0x800f0000}};
  // 15001611.650417504052864
  s21_decimal dec_check = {{0x18d06680, 0x3d2eea1c, 0x32d, 0xf0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_377) {
  // 723169242818582366925
  s21_decimal dec_1 = {{0x21cf4acd, 0x33fd42d4, 0x27, 0x0}};
  // -34664956
  s21_decimal dec_2 = {{0x210f1fc, 0x0, 0x0, 0x80000000}};
  // -25068629982859473731830980300
  s21_decimal dec_check = {{0xb4489ecc, 0x6ebd382f, 0x510048e2, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_378) {
  // 51
  s21_decimal dec_1 = {{0x33, 0x0, 0x0, 0x0}};
  // -0.4680674665553444440321512849
  s21_decimal dec_2 = {{0x804b5591, 0xdf6ae92, 0xf1fc36a, 0x801c0000}};
  // -23.871440794322566645639715530
  s21_decimal dec_check = {{0x27e69aca, 0x7a6a13eb, 0x4d21fe36, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_379) {
  // -65208.493650879570887239
  s21_decimal dec_1 = {{0x8fc1c247, 0xf5a35e11, 0xdce, 0x80120000}};
  // 0.3
  s21_decimal dec_2 = {{0x3, 0x0, 0x0, 0x10000}};
  // -19562.5480952638712661717
  s21_decimal dec_check = {{0xaf4546d5, 0xe0ea1a34, 0x296c, 0x80130000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_380) {
  // -87.98
  s21_decimal dec_1 = {{0x225e, 0x0, 0x0, 0x80020000}};
  // 8661733400287207
  s21_decimal dec_2 = {{0xf67697e7, 0x1ec5cc, 0x0, 0x0}};
  // -762059304557268471.86
  s21_decimal dec_check = {{0x3fb874d2, 0x2191d9fe, 0x4, 0x80020000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_381) {
  // -0.65545
  s21_decimal dec_1 = {{0x10009, 0x0, 0x0, 0x80050000}};
  // -65462614
  s21_decimal dec_2 = {{0x3e6e156, 0x0, 0x0, 0x80000000}};
  // 42907470.34630
  s21_decimal dec_check = {{0x473ec06, 0x3e7, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_382) {
  // -3487846
  s21_decimal dec_1 = {{0x353866, 0x0, 0x0, 0x80000000}};
  // -8167619431430478184.58
  s21_decimal dec_2 = {{0xfb28ecda, 0x46d953e5, 0x2c, 0x80020000}};
  // 28487398763437067614174614.68
  s21_decimal dec_check = {{0xf400edc, 0x238ebc0c, 0x9346c22, 0x20000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_383) {
  // -76895.199621809
  s21_decimal dec_1 = {{0x8f0ef2b1, 0x45ef, 0x0, 0x80090000}};
  // -177602902
  s21_decimal dec_2 = {{0xa960156, 0x0, 0x0, 0x80000000}};
  // 13656810602702.580889718
  s21_decimal dec_check = {{0x3bae3876, 0x5651d646, 0x2e4, 0x90000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_384) {
  // -69919228.36320784069
  s21_decimal dec_1 = {{0x5bd78ec5, 0x61084cc6, 0x0, 0x800b0000}};
  // 93574437186901114944
  s21_decimal dec_2 = {{0xc6580040, 0x129b2ed7, 0x5, 0x0}};
  // -6542652442629586943660135143.4
  s21_decimal dec_check = {{0x6a6cbd0a, 0xeec6e8c, 0xd3678d74, 0x80010000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_385) {
  // -366804228180361349
  s21_decimal dec_1 = {{0x8acd4085, 0x5172680, 0x0, 0x80000000}};
  // -8108238027.39873
  s21_decimal dec_2 = {{0xa0bcdca1, 0x2e170, 0x0, 0x80050000}};
  // 2974135991542646754465173903.7
  s21_decimal dec_check = {{0xb4ff2f9d, 0xa620854c, 0x601979ef, 0x10000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_386) {
  // -2.3
  s21_decimal dec_1 = {{0x17, 0x0, 0x0, 0x80010000}};
  // 0.340757796519
  s21_decimal dec_2 = {{0x56bf56a7, 0x4f, 0x0, 0xc0000}};
  // -0.7837429319937
  s21_decimal dec_check = {{0xcb30c901, 0x720, 0x0, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_387) {
  // 21795568610722418665
  s21_decimal dec_1 = {{0x6fc38fe9, 0x2e796a2c, 0x1, 0x0}};
  // 715
  s21_decimal dec_2 = {{0x2cb, 0x0, 0x0, 0x0}};
  // 15583831556666529345475
  s21_decimal dec_check = {{0x2732efc3, 0xcd1b8a1c, 0x34c, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_388) {
  // -581131788510414.9856053659
  s21_decimal dec_1 = {{0x9a18e99b, 0x2c7e447b, 0x4ce98, 0x800a0000}};
  // -983465
  s21_decimal dec_2 = {{0xf01a9, 0x0, 0x0, 0x80000000}};
  // 571522774387395273818.38117484
  s21_decimal dec_check = {{0xd85aba6c, 0x142b2d5d, 0xb8ab4180, 0x80000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_389) {
  // 813693476170922822
  s21_decimal dec_1 = {{0xcb387b46, 0xb4ad1e7, 0x0, 0x0}};
  // -0.302
  s21_decimal dec_2 = {{0x12e, 0x0, 0x0, 0x80030000}};
  // -245735429803618692.244
  s21_decimal dec_check = {{0xbca16c94, 0x52439f71, 0xd, 0x80030000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_390) {
  // 3.26699877299496339354
  s21_decimal dec_1 = {{0x482ec79a, 0xb5df1f79, 0x11, 0x140000}};
  // 8256.67300
  s21_decimal dec_2 = {{0x3136aee4, 0x0, 0x0, 0x50000}};
  // 26974.540560020643387430092420
  s21_decimal dec_check = {{0x10fb3e84, 0xd94043b7, 0x5728d125, 0x180000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_391) {
  // 5007752.673622307909569992599
  s21_decimal dec_1 = {{0x15b9d797, 0x668bc0f8, 0x102e50e0, 0x150000}};
  // 2507275030523
  s21_decimal dec_2 = {{0xc53ccffb, 0x247, 0x0, 0x0}};
  // 12555813237608006920.940807517
  s21_decimal dec_check = {{0xa45be55d, 0x7a125ecf, 0x2891ecdf, 0x90000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_392) {
  // -47
  s21_decimal dec_1 = {{0x2f, 0x0, 0x0, 0x80000000}};
  // -402145711050619052
  s21_decimal dec_2 = {{0xbf1e78ac, 0x594b564, 0x0, 0x80000000}};
  // 18900848419379095444
  s21_decimal dec_check = {{0x16982794, 0x64d4d7f, 0x1, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_393) {
  // 9.664
  s21_decimal dec_1 = {{0x25c0, 0x0, 0x0, 0x30000}};
  // 1117831324463.556648842
  s21_decimal dec_2 = {{0x4eb6df8a, 0x9906a313, 0x3c, 0x90000}};
  // 10802721919615.811454409088
  s21_decimal dec_check = {{0x77769980, 0xba8c18db, 0x8ef90, 0xc0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_394) {
  // -0.5819820579590
  s21_decimal dec_1 = {{0x8569b06, 0x54b, 0x0, 0x800d0000}};
  // 68129358243857980118
  s21_decimal dec_2 = {{0xa47c5ad6, 0xb17c1a5b, 0x3, 0x0}};
  // -39650064118186429440.798545659
  s21_decimal dec_check = {{0xa490d6fb, 0xce6dd97f, 0x801dc3aa, 0x80090000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_395) {
  // -4866670068569738705850
  s21_decimal dec_1 = {{0x1d35fbba, 0xd29d52a4, 0x107, 0x80000000}};
  // 9387006.766061739
  s21_decimal dec_2 = {{0xd3cb98ab, 0x21596e, 0x0, 0x90000}};
  // -45683464861854284518029460879
  s21_decimal dec_check = {{0x297058f, 0x7e8fc0cd, 0x939c79f8, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_396) {
  // -134
  s21_decimal dec_1 = {{0x86, 0x0, 0x0, 0x80000000}};
  // 0.64643
  s21_decimal dec_2 = {{0xfc83, 0x0, 0x0, 0x50000}};
  // -86.62162
  s21_decimal dec_check = {{0x842c92, 0x0, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_397) {
  // -581107.570895687
  s21_decimal dec_1 = {{0xa656eb47, 0x21083, 0x0, 0x80090000}};
  // -906646.055874
  s21_decimal dec_2 = {{0x1850ebc2, 0xd3, 0x0, 0x80060000}};
  // 526858887191.095452027615438
  s21_decimal dec_check = {{0x60878ce, 0x81196a33, 0x1b3ceb5, 0xf0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_398) {
  // -76038292994189753407613
  s21_decimal dec_1 = {{0xb9d9587d, 0xb4ba212, 0x101a, 0x80000000}};
  // 10.1954465921
  s21_decimal dec_2 = {{0xbcf5b081, 0x17, 0x0, 0xa0000}};
  // -775244355176713226480387.32305
  s21_decimal dec_check = {{0xe8d9f211, 0x72d64d25, 0xfa7eb5c6, 0x80050000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_400) {
  // -959524232324.4612748343
  s21_decimal dec_1 = {{0xe5028437, 0x28bca737, 0x208, 0x800a0000}};
  // -76
  s21_decimal dec_2 = {{0x4c, 0x0, 0x0, 0x80000000}};
  // 72923841656659.0568874068
  s21_decimal dec_check = {{0xfcbf4054, 0x1801a497, 0x9a6c, 0xa0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_401) {
  // 152277239261835906035
  s21_decimal dec_1 = {{0x2ae54bf3, 0x41456e4f, 0x8, 0x0}};
  // 34.8935
  s21_decimal dec_2 = {{0x55307, 0x0, 0x0, 0x40000}};
  // 5313485848182871187232.2725
  s21_decimal dec_check = {{0xffa3dca5, 0x7335858c, 0x2bf3be, 0x40000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_402) {
  // 2233177683293.2
  s21_decimal dec_1 = {{0x85a015a4, 0x144f, 0x0, 0x10000}};
  // 7905985336740
  s21_decimal dec_2 = {{0xc17295a4, 0x730, 0x0, 0x0}};
  // 17655470018451042874152168.0
  s21_decimal dec_check = {{0xe2e5110, 0x79a20812, 0x920ae9, 0x10000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_403) {
  // -41667.590
  s21_decimal dec_1 = {{0x27bcc06, 0x0, 0x0, 0x80030000}};
  // -62226836747.766403429
  s21_decimal dec_2 = {{0x86d71165, 0x5f922254, 0x3, 0x80090000}};
  // 2592842320602863.913854166110
  s21_decimal dec_check = {{0xb06de45e, 0xd872a0e6, 0x860bfb7, 0xc0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_404) {
  // 323174112556219841234.3543958
  s21_decimal dec_1 = {{0x54fa8896, 0x7656f313, 0xa713bcd, 0x70000}};
  // 3
  s21_decimal dec_2 = {{0x3, 0x0, 0x0, 0x0}};
  // 969522337668659523703.0631874
  s21_decimal dec_check = {{0xfeef99c2, 0x6304d939, 0x1f53b368, 0x70000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_405) {
  // 3.71
  s21_decimal dec_1 = {{0x173, 0x0, 0x0, 0x20000}};
  // 28606115862182889959857898
  s21_decimal dec_2 = {{0x4261eea, 0xa5f0eddc, 0x17a994, 0x0}};
  // 106128689848698521751072801.58
  s21_decimal dec_check = {{0x33ecd1e, 0x7c28b5da, 0x224ac26c, 0x20000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_406) {
  // 87410845780553110790112056
  s21_decimal dec_1 = {{0xf94c8338, 0x71d81792, 0x484df7, 0x0}};
  // 5.7
  s21_decimal dec_2 = {{0x39, 0x0, 0x0, 0x10000}};
  // 498241820949152731503638719.2
  s21_decimal dec_check = {{0x82093778, 0x591d3fb9, 0x10195c18, 0x10000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_407) {
  // 9137.0828628142201896779476
  s21_decimal dec_1 = {{0x922d3ed4, 0x8b868986, 0x4b9486, 0x160000}};
  // -245837366182776713.871
  s21_decimal dec_2 = {{0x8208b28f, 0x53adc60a, 0xd, 0x80030000}};
  // -2246236385588033218806.6592957
  s21_decimal dec_check = {{0x33e938bd, 0x95d40521, 0x48946e90, 0x80070000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_408) {
  // 997784285
  s21_decimal dec_1 = {{0x3b78fadd, 0x0, 0x0, 0x0}};
  // -57574.438902
  s21_decimal dec_2 = {{0x67b437f6, 0xd, 0x0, 0x80060000}};
  // -57446870354108.255070
  s21_decimal dec_check = {{0x728a8b5e, 0x1d3c4838, 0x3, 0x80060000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_409) {
  // 3517183611.8748356
  s21_decimal dec_1 = {{0x3df4ccc4, 0x7cf499, 0x0, 0x70000}};
  // 6922153900738999.41
  s21_decimal dec_2 = {{0xd169cba5, 0x99b3e3a, 0x0, 0x20000}};
  // 24346486258554676174436012.502
  s21_decimal dec_check = {{0x672991d6, 0xb217a09f, 0x4eaaf100, 0x30000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_410) {
  // -130931250537.147616234001365
  s21_decimal dec_1 = {{0x131b53d5, 0x505dc79f, 0x6c4dc5, 0x800f0000}};
  // 975250208.21498725832993858
  s21_decimal dec_2 = {{0xbba62c42, 0xf8e9d799, 0x50abb9, 0x110000}};
  // -127690729348201875041.60567192
  s21_decimal dec_check = {{0x578c6f98, 0xd3f0eff7, 0x2942545e, 0x80080000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_411) {
  // 988446
  s21_decimal dec_1 = {{0xf151e, 0x0, 0x0, 0x0}};
  // 0.2246
  s21_decimal dec_2 = {{0x8c6, 0x0, 0x0, 0x40000}};
  // 222004.9716
  s21_decimal dec_check = {{0x84534534, 0x0, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_412) {
  // -9.489571560974270174314013
  s21_decimal dec_1 = {{0xaa8bbe1d, 0xb482a127, 0x7d97e, 0x80180000}};
  // -155
  s21_decimal dec_2 = {{0x9b, 0x0, 0x0, 0x80000000}};
  // 1470.883591951011877018672015
  s21_decimal dec_check = {{0x429c1b8f, 0x4b179304, 0x4c0afb7, 0x180000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_413) {
  // -1256732705563619732
  s21_decimal dec_1 = {{0xbcbc3194, 0x1170cfbc, 0x0, 0x80000000}};
  // 48.89506108148385
  s21_decimal dec_2 = {{0xdab40aa1, 0x115efa, 0x0, 0xe0000}};
  // -61448022401631645447.183807699
  s21_decimal dec_check = {{0x64c634d3, 0x23ac5af7, 0xc68c9ce1, 0x80090000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_414) {
  // -14331
  s21_decimal dec_1 = {{0x37fb, 0x0, 0x0, 0x80000000}};
  // -657.6
  s21_decimal dec_2 = {{0x19b0, 0x0, 0x0, 0x80010000}};
  // 9424065.6
  s21_decimal dec_check = {{0x59dff90, 0x0, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_415) {
  // -216650
  s21_decimal dec_1 = {{0x34e4a, 0x0, 0x0, 0x80000000}};
  // 9631534
  s21_decimal dec_2 = {{0x92f72e, 0x0, 0x0, 0x0}};
  // -2086671841100
  s21_decimal dec_check = {{0xd755774c, 0x1e5, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_416) {
  // 10644771835181025042829996585
  s21_decimal dec_1 = {{0xc860f229, 0x773df063, 0x2265261d, 0x0}};
  // -0.475176436035971
  s21_decimal dec_2 = {{0xa2acf183, 0x1b02b, 0x0, 0x800f0000}};
  // -5058144743057401982362001783.0
  s21_decimal dec_check = {{0x993f4ea6, 0x95a0c573, 0xa36ffe1f, 0x80010000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_417) {
  // 8456444428850
  s21_decimal dec_1 = {{0xeb5dc232, 0x7b0, 0x0, 0x0}};
  // 32110056
  s21_decimal dec_2 = {{0x1e9f5e8, 0x0, 0x0, 0x0}};
  // 271536904171261515600
  s21_decimal dec_check = {{0xf953d750, 0xb854dfad, 0xe, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_418) {
  // 8484.417011707624884710441
  s21_decimal dec_1 = {{0x6eceac29, 0x2af6242f, 0x704a5, 0x150000}};
  // -62429292758668056583685
  s21_decimal dec_2 = {{0x8bc1de05, 0x4c7a5770, 0xd38, 0x80000000}};
  // -529676153510518898071834411.78
  s21_decimal dec_check = {{0xd01ded1a, 0xbfd57227, 0xab25c8d5, 0x80020000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_419) {
  // 521.6055695079381
  s21_decimal dec_1 = {{0x9ad577d5, 0x1287f9, 0x0, 0xd0000}};
  // -776650151031515259587024.17
  s21_decimal dec_2 = {{0xb84ad551, 0xe7b136c3, 0x403e34, 0x80020000}};
  // -405105044337219655988733348.29
  s21_decimal dec_check = {{0x7e09b42d, 0xc6b85e3a, 0x82e580fd, 0x80020000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_420) {
  // 28
  s21_decimal dec_1 = {{0x1c, 0x0, 0x0, 0x0}};
  // 937902975803574622
  s21_decimal dec_2 = {{0x8a8dc95e, 0xd0419c9, 0x0, 0x0}};
  // 26261283322500089416
  s21_decimal dec_check = {{0x27820648, 0x6c72d20b, 0x1, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_421) {
  // -3026
  s21_decimal dec_1 = {{0xbd2, 0x0, 0x0, 0x80000000}};
  // -695068.18655520644046863
  s21_decimal dec_2 = {{0xaa2ea00f, 0xf8e16849, 0xeb7, 0x80110000}};
  // 2103276332.51605468885807438
  s21_decimal dec_check = {{0x9b1ff14e, 0xd862b6bd, 0xadfa9b, 0x110000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_422) {
  // 26497635.055153
  s21_decimal dec_1 = {{0x761ff631, 0x1819, 0x0, 0x60000}};
  // -99143513278595462
  s21_decimal dec_2 = {{0x2c14186, 0x1603a80, 0x0, 0x80000000}};
  // -2627068632941938052586745.5157
  s21_decimal dec_check = {{0xd44fd2b5, 0x8d558e49, 0x54e29a37, 0x80040000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_423) {
  // -7957
  s21_decimal dec_1 = {{0x1f15, 0x0, 0x0, 0x80000000}};
  // -6631.3207268987
  s21_decimal dec_2 = {{0xbf29c67b, 0x3c4f, 0x0, 0x800a0000}};
  // 52765419.0239329559
  s21_decimal dec_check = {{0xbd762d17, 0x7529ab0, 0x0, 0xa0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_424) {
  // 5
  s21_decimal dec_1 = {{0x5, 0x0, 0x0, 0x0}};
  // -93.06310174
  s21_decimal dec_2 = {{0x2ab3061e, 0x2, 0x0, 0x80080000}};
  // -465.31550870
  s21_decimal dec_check = {{0xd57f1e96, 0xa, 0x0, 0x80080000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_425) {
  // -7466992839
  s21_decimal dec_1 = {{0xbd1144c7, 0x1, 0x0, 0x80000000}};
  // -22639.5683736
  s21_decimal dec_2 = {{0xb63bfb98, 0x34, 0x0, 0x80070000}};
  // 169049494923722.0766504
  s21_decimal dec_check = {{0x848cf328, 0xa45487b4, 0x5b, 0x70000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_426) {
  // 6140
  s21_decimal dec_1 = {{0x17fc, 0x0, 0x0, 0x0}};
  // -4.121
  s21_decimal dec_2 = {{0x1019, 0x0, 0x0, 0x80030000}};
  // -25302.940
  s21_decimal dec_check = {{0x182179c, 0x0, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_428) {
  // 0.58504
  s21_decimal dec_1 = {{0xe488, 0x0, 0x0, 0x50000}};
  // 34
  s21_decimal dec_2 = {{0x22, 0x0, 0x0, 0x0}};
  // 19.89136
  s21_decimal dec_check = {{0x1e5a10, 0x0, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_429) {
  // 1687571894816
  s21_decimal dec_1 = {{0xeb1f9220, 0x188, 0x0, 0x0}};
  // 9270857094
  s21_decimal dec_2 = {{0x28960d86, 0x2, 0x0, 0x0}};
  // 15645237872689935424704
  s21_decimal dec_check = {{0x4bb21cc0, 0x214a9930, 0x350, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_430) {
  // 454.199262967547925796141
  s21_decimal dec_1 = {{0x600e952d, 0x30fe7227, 0x602e, 0x150000}};
  // -3212491.01526667632
  s21_decimal dec_2 = {{0x14e91170, 0x4754e5b, 0x0, 0x800b0000}};
  // -1459111051.4239941361968876444
  s21_decimal dec_check = {{0xdd9c0b9c, 0xecfe0d0c, 0x2f257bd5, 0x80130000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_431) {
  // 204496593069994
  s21_decimal dec_1 = {{0x12c9a7aa, 0xb9fd, 0x0, 0x0}};
  // -987848602.6152
  s21_decimal dec_2 = {{0x3a687a8, 0x8fc, 0x0, 0x80040000}};
  // -202011673703762765105048.3088
  s21_decimal dec_check = {{0x61fcad90, 0xbf9f6a0e, 0x687005b, 0x80040000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_432) {
  // 36823924719063333
  s21_decimal dec_1 = {{0x181d9125, 0x82d32a, 0x0, 0x0}};
  // 2756782655.044828752311840200
  s21_decimal dec_2 = {{0xdae16dc8, 0x2ef9b9d3, 0x8e85b6f, 0x120000}};
  // 101515556956190314861269854.88
  s21_decimal dec_check = {{0x77bd9110, 0xf702de1b, 0x20cd2b88, 0x20000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_433) {
  // 254.384791
  s21_decimal dec_1 = {{0xf299a97, 0x0, 0x0, 0x60000}};
  // 963435535499.0152454
  s21_decimal dec_2 = {{0x7e120b06, 0x85b41b26, 0x0, 0x70000}};
  // 245083347339890.0739068927114
  s21_decimal dec_check = {{0x553c1c8a, 0xd01e6b14, 0x7eb482c, 0xd0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_434) {
  // -90260713465180676
  s21_decimal dec_1 = {{0x343f204, 0x140aba4, 0x0, 0x80000000}};
  // -4540431448.2280
  s21_decimal dec_2 = {{0x84093668, 0x294b, 0x0, 0x80040000}};
  // 409822581956802836982360042.13
  s21_decimal dec_check = {{0x8449775, 0x74b747ba, 0x846bbabc, 0x20000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_435) {
  // 0.8
  s21_decimal dec_1 = {{0x8, 0x0, 0x0, 0x10000}};
  // -41010991980
  s21_decimal dec_2 = {{0x8c72136c, 0x9, 0x0, 0x80000000}};
  // -32808793584.0
  s21_decimal dec_check = {{0x63909b60, 0x4c, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_436) {
  // 34640932381181471606095889
  s21_decimal dec_1 = {{0xbc1ac011, 0xb50d06d0, 0x1ca780, 0x0}};
  // 2.9384562005280345394414
  s21_decimal dec_2 = {{0x77018cee, 0xf0b761b8, 0x638, 0x160000}};
  // 101790862547555067341774261.01
  s21_decimal dec_check = {{0xb6079ab5, 0x90f00ca0, 0x20e3f15b, 0x20000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_437) {
  // -373794870381569876789
  s21_decimal dec_1 = {{0x74a7a335, 0x43722629, 0x14, 0x80000000}};
  // 124154
  s21_decimal dec_2 = {{0x1e4fa, 0x0, 0x0, 0x0}};
  // -46408128337353426482861506
  s21_decimal dec_check = {{0xdc4595c2, 0xad9fa508, 0x26634d, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_438) {
  // -57.5447948655795072
  s21_decimal dec_1 = {{0x465b1b80, 0x7fc66dc, 0x0, 0x80100000}};
  // -37382223174417521260
  s21_decimal dec_2 = {{0xe9881a6c, 0x6c855ea, 0x2, 0x80000000}};
  // 2151152364191168644250.0581393
  s21_decimal dec_check = {{0x910d6811, 0x4d3c0464, 0x4581ea51, 0x70000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_439) {
  // 17545572016870261657
  s21_decimal dec_1 = {{0xf6960399, 0xf37e64c9, 0x0, 0x0}};
  // 59657652.3382553035418
  s21_decimal dec_2 = {{0xf297c29a, 0x57299337, 0x20, 0xd0000}};
  // 1046727635458266987463211751.2
  s21_decimal dec_check = {{0x328ccd08, 0x2ea6e4c9, 0x21d253fc, 0x10000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_440) {
  // 17445.42
  s21_decimal dec_1 = {{0x1a9e9e, 0x0, 0x0, 0x20000}};
  // -674655896681
  s21_decimal dec_2 = {{0x14a00469, 0x9d, 0x0, 0x80000000}};
  // -11769655473076651.02
  s21_decimal dec_check = {{0xf02586ce, 0x10556bed, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_442) {
  // 6768272
  s21_decimal dec_1 = {{0x674690, 0x0, 0x0, 0x0}};
  // -826294454334473
  s21_decimal dec_2 = {{0xab6e3409, 0x2ef82, 0x0, 0x80000000}};
  // -5592585619027292240656
  s21_decimal dec_check = {{0x7fd6bb10, 0x2cb76db7, 0x12f, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_443) {
  // 9638109030
  s21_decimal dec_1 = {{0x3e79df66, 0x2, 0x0, 0x0}};
  // 62.9819
  s21_decimal dec_2 = {{0x99c3b, 0x0, 0x0, 0x40000}};
  // 607026419116.5570
  s21_decimal dec_check = {{0x84cea482, 0x1590df, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_444) {
  // 727129685
  s21_decimal dec_1 = {{0x2b571e55, 0x0, 0x0, 0x0}};
  // 86930.70348968265750009
  s21_decimal dec_2 = {{0xa67f95f9, 0x4095f086, 0x1d7, 0x110000}};
  // 63209895045281.351498003329172
  s21_decimal dec_check = {{0xa6773094, 0x88a31109, 0xcc3dffec, 0xf0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_445) {
  // -8
  s21_decimal dec_1 = {{0x8, 0x0, 0x0, 0x80000000}};
  // -94733777976558
  s21_decimal dec_2 = {{0xed2f3cee, 0x5628, 0x0, 0x80000000}};
  // 757870223812464
  s21_decimal dec_check = {{0x6979e770, 0x2b147, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_446) {
  // 787785964011241914797696400
  s21_decimal dec_1 = {{0x324ca590, 0xae85c73e, 0x28ba42a, 0x0}};
  // 2
  s21_decimal dec_2 = {{0x2, 0x0, 0x0, 0x0}};
  // 1575571928022483829595392800
  s21_decimal dec_check = {{0x64994b20, 0x5d0b8e7c, 0x5174855, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_447) {
  // -0.93825
  s21_decimal dec_1 = {{0x16e81, 0x0, 0x0, 0x80050000}};
  // 0.4
  s21_decimal dec_2 = {{0x4, 0x0, 0x0, 0x10000}};
  // -0.375300
  s21_decimal dec_check = {{0x5ba04, 0x0, 0x0, 0x80060000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_448) {
  // 2033081035084709119
  s21_decimal dec_1 = {{0xffcebcff, 0x1c36f46d, 0x0, 0x0}};
  // 0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
  // 0
  s21_decimal dec_check = {{0x0, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_449) {
  // 9692226.863525902452017945601
  s21_decimal dec_1 = {{0x96655c01, 0x15362649, 0x1f5138df, 0x150000}};
  // -7246487591
  s21_decimal dec_2 = {{0xafeca027, 0x1, 0x0, 0x80000000}};
  // -70234601695697302.625624515707
  s21_decimal dec_check = {{0xd567e47b, 0x1b40aa2a, 0xe2f0b36b, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_450) {
  // -33628.8367929360178
  s21_decimal dec_1 = {{0x28867f32, 0x4aabc7d, 0x0, 0x800d0000}};
  // 1160973813160703459.342
  s21_decimal dec_2 = {{0x7e74800e, 0xefbf8bf7, 0x3e, 0x30000}};
  // -39042198883653890456574.218409
  s21_decimal dec_check = {{0x31cbd0a9, 0x69d6d2e0, 0x7e26f332, 0x80060000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_451) {
  // 17118361.30346
  s21_decimal dec_1 = {{0x91626c2a, 0x18e, 0x0, 0x50000}};
  // -63041990589507
  s21_decimal dec_2 = {{0x1b747c43, 0x3956, 0x0, 0x80000000}};
  // -1079175572200506102318.79422
  s21_decimal dec_check = {{0x2a2ea6fe, 0x7fd668d9, 0x59446e, 0x80050000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_452) {
  // 23258814504.479767620374
  s21_decimal dec_1 = {{0xfbab6b16, 0xdce47157, 0x4ec, 0xc0000}};
  // 795
  s21_decimal dec_2 = {{0x31b, 0x0, 0x0, 0x0}};
  // 18490757531061.415258197330
  s21_decimal dec_check = {{0x8d558d52, 0xf96bfc3a, 0xf4b91, 0xc0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_453) {
  // -1
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // 7053331793169362704695
  s21_decimal dec_2 = {{0xecd7d937, 0x5ca457bb, 0x17e, 0x0}};
  // -7053331793169362704695
  s21_decimal dec_check = {{0xecd7d937, 0x5ca457bb, 0x17e, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_455) {
  // -6638180235603
  s21_decimal dec_1 = {{0x925ff953, 0x609, 0x0, 0x80000000}};
  // 89389878583
  s21_decimal dec_2 = {{0xd00d4d37, 0x14, 0x0, 0x0}};
  // -593386125272622503790549
  s21_decimal dec_check = {{0x69d387d5, 0x86bc1104, 0x7da7, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_456) {
  // 3
  s21_decimal dec_1 = {{0x3, 0x0, 0x0, 0x0}};
  // -70
  s21_decimal dec_2 = {{0x46, 0x0, 0x0, 0x80000000}};
  // -210
  s21_decimal dec_check = {{0xd2, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_457) {
  // 2691189.4352031
  s21_decimal dec_1 = {{0xe9e7309f, 0x1879, 0x0, 0x70000}};
  // -19967333.8699635521078034
  s21_decimal dec_2 = {{0x410dc312, 0x5039b0a1, 0x2a48, 0x80100000}};
  // -53735877960018.940776582088570
  s21_decimal dec_check = {{0xdc12077a, 0x3bc1a5f5, 0xada146c5, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_458) {
  // 7.9889
  s21_decimal dec_1 = {{0x13811, 0x0, 0x0, 0x40000}};
  // 34471023048
  s21_decimal dec_2 = {{0x6a211c8, 0x8, 0x0, 0x0}};
  // 275385556028.1672
  s21_decimal dec_check = {{0xf66eee48, 0x9c89d, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_459) {
  // 4.280
  s21_decimal dec_1 = {{0x10b8, 0x0, 0x0, 0x30000}};
  // -996212.3
  s21_decimal dec_2 = {{0x98028b, 0x0, 0x0, 0x80010000}};
  // -4263788.6440
  s21_decimal dec_check = {{0xed6a83e8, 0x9, 0x0, 0x80040000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_460) {
  // -33
  s21_decimal dec_1 = {{0x21, 0x0, 0x0, 0x80000000}};
  // -6.63876099584103491102202
  s21_decimal dec_2 = {{0x446ce5fa, 0xcba4056b, 0x8c94, 0x80170000}};
  // 219.07911286275415206372666
  s21_decimal dec_check = {{0xd209a53a, 0x4024b2d3, 0x121f2e, 0x170000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_461) {
  // -38606.1014409665184883747
  s21_decimal dec_1 = {{0x2ec16423, 0x68d6beac, 0x51c0, 0x80130000}};
  // -31045851641350564586787
  s21_decimal dec_2 = {{0x3263a523, 0xffbdcbd6, 0x692, 0x80000000}};
  // 1198559297787176784637473952.2
  s21_decimal dec_check = {{0xe16a0e42, 0x41bc425f, 0x26ba4009, 0x10000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_462) {
  // 674930777048894
  s21_decimal dec_1 = {{0x9136c73e, 0x265d8, 0x0, 0x0}};
  // 216.53172383
  s21_decimal dec_2 = {{0xaa1309f, 0x5, 0x0, 0x80000}};
  // 146143924620318418.01494402
  s21_decimal dec_check = {{0x305f5f82, 0xcd87382e, 0xc16b7, 0x80000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_463) {
  // -1570265490
  s21_decimal dec_1 = {{0x5d985992, 0x0, 0x0, 0x80000000}};
  // 291389
  s21_decimal dec_2 = {{0x4723d, 0x0, 0x0, 0x0}};
  // -457558090865610
  s21_decimal dec_check = {{0x8b785bca, 0x1a025, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_464) {
  // -0.7599127153
  s21_decimal dec_1 = {{0xc4f17a71, 0x1, 0x0, 0x800a0000}};
  // -8393878650400147221948
  s21_decimal dec_2 = {{0x240badbc, 0x8777fdd, 0x1c7, 0x80000000}};
  // 6378615117124275306950.2564354
  s21_decimal dec_check = {{0xf6020802, 0xb7aeb8ed, 0xce1aaae7, 0x70000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_465) {
  // 9.98
  s21_decimal dec_1 = {{0x3e6, 0x0, 0x0, 0x20000}};
  // 6731538254152553951
  s21_decimal dec_2 = {{0x7eb755df, 0x5d6b3a60, 0x0, 0x0}};
  // 67180751776442488430.98
  s21_decimal dec_check = {{0xfeb8c35a, 0x3005942d, 0x16c, 0x20000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_466) {
  // 3629
  s21_decimal dec_1 = {{0xe2d, 0x0, 0x0, 0x0}};
  // -7367380643266551
  s21_decimal dec_2 = {{0xfa2abff7, 0x1a2c97, 0x0, 0x80000000}};
  // -26736224354414313579
  s21_decimal dec_check = {{0x5003406b, 0x730a2665, 0x1, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_467) {
  // -3397775323602
  s21_decimal dec_1 = {{0x1b30f1d2, 0x317, 0x0, 0x80000000}};
  // -4812
  s21_decimal dec_2 = {{0x12cc, 0x0, 0x0, 0x80000000}};
  // 16350094857172824
  s21_decimal dec_check = {{0x1c017758, 0x3a1653, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_468) {
  // -4879131576
  s21_decimal dec_1 = {{0x22d1a3b8, 0x1, 0x0, 0x80000000}};
  // -138235221
  s21_decimal dec_2 = {{0x83d4d55, 0x0, 0x0, 0x80000000}};
  // 674467831696438296
  s21_decimal dec_check = {{0x60b1b418, 0x95c30eb, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_469) {
  // -48813382626134449435
  s21_decimal dec_1 = {{0xc3f7dd1b, 0xa56bf8df, 0x2, 0x80000000}};
  // 647
  s21_decimal dec_2 = {{0x287, 0x0, 0x0, 0x0}};
  // -31582258559108988784445
  s21_decimal dec_check = {{0x476fcf3d, 0x13e1fd88, 0x6b0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_470) {
  // -833609326803
  s21_decimal dec_1 = {{0x16fce0d3, 0xc2, 0x0, 0x80000000}};
  // -74.70
  s21_decimal dec_2 = {{0x1d2e, 0x0, 0x0, 0x80020000}};
  // 62270616712184.10
  s21_decimal dec_check = {{0xc6e84cea, 0x161f7a, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_471) {
  // -36540377401216.0399817
  s21_decimal dec_1 = {{0xcdeed9c9, 0xcefefc78, 0x13, 0x80070000}};
  // -623757250189210
  s21_decimal dec_2 = {{0xcd52d79a, 0x2374d, 0x0, 0x80000000}};
  // 22792325328658468562959329250
  s21_decimal dec_check = {{0x7833e7e2, 0xddcc1073, 0x49a55e9f, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_472) {
  // 4
  s21_decimal dec_1 = {{0x4, 0x0, 0x0, 0x0}};
  // -41155.519408032176
  s21_decimal dec_2 = {{0x12dcc9b0, 0x9236ba, 0x0, 0x800c0000}};
  // -164622.077632128704
  s21_decimal dec_check = {{0x4b7326c0, 0x248dae8, 0x0, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_473) {
  // 16466545266317652618651
  s21_decimal dec_1 = {{0x51b36d9b, 0xa7389c38, 0x37c, 0x0}};
  // 5458
  s21_decimal dec_2 = {{0x1552, 0x0, 0x0, 0x0}};
  // 89874404063561747992597158
  s21_decimal dec_check = {{0xe376d2a6, 0x34f2a8bd, 0x4a57a5, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_474) {
  // -7172645274843291386334
  s21_decimal dec_1 = {{0xa67101de, 0xd472fb2a, 0x184, 0x80000000}};
  // 3083
  s21_decimal dec_2 = {{0xc0b, 0x0, 0x0, 0x0}};
  // -22113265382341867344067722
  s21_decimal dec_check = {{0x72f17c8a, 0x84b6caa2, 0x124aaa, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_475) {
  // 339264
  s21_decimal dec_1 = {{0x52d40, 0x0, 0x0, 0x0}};
  // -6949704977386078
  s21_decimal dec_2 = {{0x48788a5e, 0x18b0b8, 0x0, 0x80000000}};
  // -2357784709447910366592
  s21_decimal dec_check = {{0x24b1d80, 0xd0d5fd2a, 0x7f, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_476) {
  // -977044213.959477517404447
  s21_decimal dec_1 = {{0x4390c91f, 0xac47ba0a, 0xcee5, 0x800f0000}};
  // 0.610588868
  s21_decimal dec_2 = {{0x2464d8c4, 0x0, 0x0, 0x90000}};
  // -596572320.58746717522343159190
  s21_decimal dec_check = {{0xb17ae596, 0x20d53b8a, 0xc0c34e46, 0x80140000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_477) {
  // 8654517009277
  s21_decimal dec_1 = {{0x9697b7d, 0x7df, 0x0, 0x0}};
  // -6993007639
  s21_decimal dec_2 = {{0xa0d0d417, 0x1, 0x0, 0x80000000}};
  // -60521103557729494867003
  s21_decimal dec_check = {{0xa84d9c3b, 0xdb087734, 0xcd0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_478) {
  // -953413152261365
  s21_decimal dec_1 = {{0xcc43c4f5, 0x3631f, 0x0, 0x80000000}};
  // 837
  s21_decimal dec_2 = {{0x345, 0x0, 0x0, 0x0}};
  // -798006808442762505
  s21_decimal dec_check = {{0xd992f509, 0xb1316f6, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_479) {
  // 41288560114161
  s21_decimal dec_1 = {{0x3df579f1, 0x258d, 0x0, 0x0}};
  // 87506716618
  s21_decimal dec_2 = {{0x5fce87ca, 0x14, 0x0, 0x0}};
  // 3613026329475144355827498
  s21_decimal dec_check = {{0xe5ee4f2a, 0x8cbe97bb, 0x2fd16, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_481) {
  // 947.564458471819145594
  s21_decimal dec_1 = {{0x8629717a, 0x5e193691, 0x33, 0x120000}};
  // -28551814383207688.59506
  s21_decimal dec_2 = {{0xce4e3d72, 0xc79a26c0, 0x9a, 0x80050000}};
  // -27054684534412090412.454342111
  s21_decimal dec_check = {{0x65c76ddf, 0x67ee3206, 0x576b1c4b, 0x80090000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_482) {
  // 81608.2
  s21_decimal dec_1 = {{0xc73d2, 0x0, 0x0, 0x10000}};
  // -41963293.9
  s21_decimal dec_2 = {{0x1903172b, 0x0, 0x0, 0x80010000}};
  // -3424548881249.98
  s21_decimal dec_check = {{0xfdf55246, 0x13775, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_483) {
  // -89570208779
  s21_decimal dec_1 = {{0xdaccec0b, 0x14, 0x0, 0x80000000}};
  // -677104334237.6471443863996
  s21_decimal dec_2 = {{0x9788f9bc, 0xfebe3642, 0x599d2, 0x800d0000}};
  // 60648376582831852524422.970020
  s21_decimal dec_check = {{0x20163aa4, 0x70f6b44a, 0xc3f7294a, 0x60000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_484) {
  // 3102182812931153599
  s21_decimal dec_1 = {{0x11155ebf, 0x2b0d2ad5, 0x0, 0x0}};
  // -313465506
  s21_decimal dec_2 = {{0x12af1aa2, 0x0, 0x0, 0x80000000}};
  // -972427305159967406074256094
  s21_decimal dec_check = {{0x2db65ade, 0xd788ecd6, 0x3245f7d, 0x80000000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_485) {
  // -72.3199582049092098
  s21_decimal dec_1 = {{0x2dbf4202, 0xa095230, 0x0, 0x80100000}};
  // -935152617511948070757934
  s21_decimal dec_2 = {{0xd311262e, 0xb9980033, 0xc606, 0x80000000}};
  // 67630198213675532872169736.284
  s21_decimal dec_check = {{0xd3bac85c, 0x71d244d0, 0xda866387, 0x30000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_486) {
  // -152560669
  s21_decimal dec_1 = {{0x917e41d, 0x0, 0x0, 0x80000000}};
  // -4856938027225126117.5466850
  s21_decimal dec_2 = {{0xda140b62, 0x6160171a, 0x282cf7, 0x80070000}};
  // 740977714725005454102294902.33
  s21_decimal dec_check = {{0x37ee5239, 0x574a3935, 0xef6c3d70, 0x20000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_487) {
  // 8760685150170642675.7
  s21_decimal dec_1 = {{0xa19bb985, 0xbfca0f47, 0x4, 0x10000}};
  // -983
  s21_decimal dec_2 = {{0x3d7, 0x0, 0x0, 0x80000000}};
  // -8611753502617741750213.1
  s21_decimal dec_check = {{0x8cf55db3, 0x70e0ac0d, 0x123c, 0x80010000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_488) {
  // 45.7
  s21_decimal dec_1 = {{0x1c9, 0x0, 0x0, 0x10000}};
  // 60671.9451565
  s21_decimal dec_2 = {{0x434c21ad, 0x8d, 0x0, 0x70000}};
  // 2772707.89365205
  s21_decimal dec_check = {{0x22e81dd5, 0xfc2d, 0x0, 0x80000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_489) {
  // 46684808484466
  s21_decimal dec_1 = {{0xa76d1672, 0x2a75, 0x0, 0x0}};
  // -88779.088
  s21_decimal dec_2 = {{0x54aa950, 0x0, 0x0, 0x80030000}};
  // -4144634720705553647.008
  s21_decimal dec_check = {{0xcdc45a0, 0xae5c7744, 0xe0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_490) {
  // 62535466678647438
  s21_decimal dec_1 = {{0xf53e7a8e, 0xde2bac, 0x0, 0x0}};
  // 4157524.694
  s21_decimal dec_2 = {{0xf7cecad6, 0x0, 0x0, 0x30000}};
  // 259992746967290886004833.972
  s21_decimal dec_check = {{0xef327eb4, 0xdfb9c9d, 0xd70f9b, 0x30000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_491) {
  // 24146643542
  s21_decimal dec_1 = {{0x9f408a56, 0x5, 0x0, 0x0}};
  // -0.81
  s21_decimal dec_2 = {{0x51, 0x0, 0x0, 0x80020000}};
  // -19558781269.02
  s21_decimal dec_check = {{0x636bc536, 0x1c7, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_492) {
  // 50050.227090870223561262123990
  s21_decimal dec_1 = {{0xe73c4bd6, 0x44060ba3, 0xa1b893d7, 0x180000}};
  // -61002951640583
  s21_decimal dec_2 = {{0x5b434607, 0x377b, 0x0, 0x80000000}};
  // -3053211582824553415.8176392675
  s21_decimal dec_check = {{0x43a415e3, 0x940131ee, 0x62a79303, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_494) {
  // 7182669.824339198046370189240
  s21_decimal dec_1 = {{0xd666cfb8, 0x63c575c7, 0x17355d7f, 0x150000}};
  // 750876.3205
  s21_decimal dec_2 = {{0xbf8ea245, 0x1, 0x0, 0x40000}};
  // 5393296689066.1983729792360774
  s21_decimal dec_check = {{0x12c4a146, 0x927d59a6, 0xae444df9, 0x100000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_495) {
  // 15430654028473232580161.091
  s21_decimal dec_1 = {{0x12c42e43, 0x6e57cb7f, 0xcc391, 0x30000}};
  // -4957.91066254183
  s21_decimal dec_2 = {{0x5a630b67, 0x1c2eb, 0x0, 0x800b0000}};
  // -76503804137761482663034094.355
  s21_decimal dec_check = {{0x8ac80313, 0x7a739502, 0xf73276ac, 0x80030000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_496) {
  // 409699046938.565502005
  s21_decimal dec_1 = {{0x15496435, 0x35b76883, 0x16, 0x90000}};
  // -606063982720
  s21_decimal dec_2 = {{0x1c3a7880, 0x8d, 0x0, 0x80000000}};
  // -248303836104175231308746.44535
  s21_decimal dec_check = {{0xf8f2c837, 0xb4021a55, 0x503b3640, 0x80050000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_498) {
  // 70.344826594909805318172497066
  s21_decimal dec_1 = {{0x52b6d4aa, 0xdda95460, 0xe34be072, 0x1b0000}};
  // -47312828874737745276
  s21_decimal dec_2 = {{0xfd967d7c, 0x9098ef2f, 0x2, 0x80000000}};
  // -3328212742908068301994.7843506
  s21_decimal dec_check = {{0xad599fb2, 0x2d6c4a9d, 0x6b8a549f, 0x80070000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_499) {
  // 486835
  s21_decimal dec_1 = {{0x76db3, 0x0, 0x0, 0x0}};
  // 597788
  s21_decimal dec_2 = {{0x91f1c, 0x0, 0x0, 0x0}};
  // 291024120980
  s21_decimal dec_check = {{0xc263ac94, 0x43, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_mul_500) {
  // 280696817.1838325
  s21_decimal dec_1 = {{0x34c73b75, 0x9f8ec, 0x0, 0x70000}};
  // -993.36696
  s21_decimal dec_2 = {{0x5ebc1f8, 0x0, 0x0, 0x80050000}};
  // -278834943967.579451674200
  s21_decimal dec_check = {{0x323bce58, 0xac2f8faa, 0x3b0b, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(fail_s21_mul_1) {
  // 4791106599621777872444388
  s21_decimal dec_1 = {{0x3174dbe4, 0x68c11151, 0x3f68e, 0x0}};
  // -4473836725031951493124
  s21_decimal dec_2 = {{0x82696804, 0x86f4ee03, 0xf2, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_2) {
  // -183532234325
  s21_decimal dec_1 = {{0xbb5fa655, 0x2a, 0x0, 0x80000000}};
  // -262220846540809715773026725
  s21_decimal dec_2 = {{0x7bb331a5, 0x93142e83, 0xd8e76c, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_3) {
  // -3925822442
  s21_decimal dec_1 = {{0xe9ff4bea, 0x0, 0x0, 0x80000000}};
  // -778443858259065063190903
  s21_decimal dec_2 = {{0xc6a5b177, 0x86af6a4b, 0xa4d7, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_4) {
  // 25895355747651981401238279597
  s21_decimal dec_1 = {{0xfca415ad, 0xf1c85df6, 0x53ac22df, 0x0}};
  // 72752025.1
  s21_decimal dec_2 = {{0x2b5d13fb, 0x0, 0x0, 0x10000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_5) {
  // 187067642321977914770984678
  s21_decimal dec_1 = {{0xcb1a0ee6, 0x35da401c, 0x9abd1d, 0x0}};
  // 4362839438302
  s21_decimal dec_2 = {{0xcd7eb3de, 0x3f7, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_6) {
  // 810517023890.6774377062092
  s21_decimal dec_1 = {{0x8d35decc, 0x28b8c554, 0x6b456, 0xd0000}};
  // -4024395838454480959.164240
  s21_decimal dec_2 = {{0x2433cf50, 0xef802f5f, 0x35432, 0x80060000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_7) {
  // 7472850748684814088
  s21_decimal dec_1 = {{0xbedec708, 0x67b4e629, 0x0, 0x0}};
  // -986951398405.58263020545548386
  s21_decimal dec_2 = {{0x6edaa062, 0x71d7a1a0, 0x3ee6b4cb, 0x80110000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_8) {
  // 439015390.248690
  s21_decimal dec_1 = {{0x3c62fef2, 0x18f48, 0x0, 0x60000}};
  // -66828613575273709169805528683
  s21_decimal dec_2 = {{0xc8c28e6b, 0x2013c1a5, 0xd7ef5561, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_9) {
  // 4139219
  s21_decimal dec_1 = {{0x3f28d3, 0x0, 0x0, 0x0}};
  // 97252351437539384185230
  s21_decimal dec_2 = {{0xa0cb518e, 0xf7f3f66, 0x1498, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_10) {
  // 10990718183899526
  s21_decimal dec_1 = {{0xfd2d8186, 0x270bff, 0x0, 0x0}};
  // -225225506461951697.6612
  s21_decimal dec_2 = {{0xcc45de4, 0x18516050, 0x7a, 0x80040000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_11) {
  // -73047960365778269983
  s21_decimal dec_1 = {{0x9106f71f, 0xf5be7ced, 0x3, 0x80000000}};
  // 1290568661467240521.749556
  s21_decimal dec_2 = {{0x95fb5434, 0xde0906a2, 0x11149, 0x60000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_12) {
  // -8797950880175713073197.868645
  s21_decimal dec_1 = {{0xf8d9e665, 0xe2a729a8, 0x1c6d7e90, 0x80060000}};
  // -533793946.0
  s21_decimal dec_2 = {{0x3e2a7e04, 0x1, 0x0, 0x80010000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_13) {
  // 808039621735122215179390
  s21_decimal dec_1 = {{0xd941147e, 0xea6926b1, 0xab1b, 0x0}};
  // 860121309450123980
  s21_decimal dec_2 = {{0x1984bacc, 0xbefc3c6, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_14) {
  // -29463203
  s21_decimal dec_1 = {{0x1c192a3, 0x0, 0x0, 0x80000000}};
  // 7305009804685248337360648.404
  s21_decimal dec_2 = {{0x25fef8d4, 0x36d0eb1, 0x179a8fff, 0x30000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_15) {
  // -1675819.7
  s21_decimal dec_1 = {{0xffb5b5, 0x0, 0x0, 0x80010000}};
  // -15171703642107188565888185045
  s21_decimal dec_2 = {{0xee7b2d5, 0x743596a3, 0x3105bd36, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_16) {
  // 14144526992576729766112433422
  s21_decimal dec_1 = {{0xf8c6950e, 0xb4e24261, 0x2db41418, 0x0}};
  // -427919367932360919.89
  s21_decimal dec_2 = {{0xc3ce3455, 0x51db7fca, 0x2, 0x80020000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_17) {
  // 4495671756671317354
  s21_decimal dec_1 = {{0xc326756a, 0x3e63d5a4, 0x0, 0x0}};
  // -50040657309205753967
  s21_decimal dec_2 = {{0x2a43706f, 0xb67420b2, 0x2, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_18) {
  // 7119
  s21_decimal dec_1 = {{0x1bcf, 0x0, 0x0, 0x0}};
  // 7564615248753250547404336126
  s21_decimal dec_2 = {{0xd0276bfe, 0x55f486f6, 0x18714d96, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_19) {
  // -2494349775667110515
  s21_decimal dec_1 = {{0xc436a273, 0x229db5e7, 0x0, 0x80000000}};
  // -84429193122414064091526
  s21_decimal dec_2 = {{0x8788c186, 0xea6d4bcc, 0x11e0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_20) {
  // -2100515807481
  s21_decimal dec_1 = {{0x107fa0f9, 0x1e9, 0x0, 0x80000000}};
  // 79228162514264337592891476437
  s21_decimal dec_2 = {{0xd91c09d5, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_21) {
  // -478697880648509264426032191
  s21_decimal dec_1 = {{0x9b09dc3f, 0x1bb0c4ba, 0x18bf838, 0x80000000}};
  // 8802656629828875406393653
  s21_decimal dec_2 = {{0xdd61c135, 0xf8da93b3, 0x74808, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_22) {
  // -731575205793593574683421654.1
  s21_decimal dec_1 = {{0x8e8b65d, 0xba9de9e8, 0x17a372c1, 0x80010000}};
  // -7199406027731878413
  s21_decimal dec_2 = {{0x5cc3c20d, 0x63e96da3, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_23) {
  // -360124249878072105014712186
  s21_decimal dec_1 = {{0x7058d77a, 0xb44198ad, 0x129e346, 0x80000000}};
  // 4328490250102.9100514999
  s21_decimal dec_2 = {{0x98c5eeb7, 0x7ab13371, 0x92a, 0xa0000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_24) {
  // 92474.5967803968567146288346
  s21_decimal dec_1 = {{0x3db194da, 0x5d50c44a, 0x2fcee93, 0x160000}};
  // -8494316605342936472881612660
  s21_decimal dec_2 = {{0x9764774, 0xdd58162d, 0x1b725581, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_25) {
  // -829676075899.59881735
  s21_decimal dec_1 = {{0x978fd407, 0x7f682785, 0x4, 0x80080000}};
  // 733795096497196148716445055
  s21_decimal dec_2 = {{0x714f9d7f, 0xe39a5282, 0x25efb27, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_26) {
  // -62933826685
  s21_decimal dec_1 = {{0xa725fc7d, 0xe, 0x0, 0x80000000}};
  // -258404785008399918523.8209109
  s21_decimal dec_2 = {{0x1ef3b255, 0xa4b47337, 0x859796a, 0x80070000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_27) {
  // -182030244802424540
  s21_decimal dec_1 = {{0xfd36edc, 0x286b38b, 0x0, 0x80000000}};
  // 6125209682521783
  s21_decimal dec_2 = {{0x834d2eb7, 0x15c2d8, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_28) {
  // 916807327867632240246440310
  s21_decimal dec_1 = {{0xa2acc176, 0xd4cbdf6c, 0x2f65d80, 0x0}};
  // 833906.1390839726807
  s21_decimal dec_2 = {{0x192d42d7, 0x73ba4c27, 0x0, 0xd0000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_29) {
  // -89279150591
  s21_decimal dec_1 = {{0xc973b9ff, 0x14, 0x0, 0x80000000}};
  // -2654076156475871587046
  s21_decimal dec_2 = {{0xaa63eae6, 0xe0b4aa6a, 0x8f, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_30) {
  // -963105879126785
  s21_decimal dec_1 = {{0x8fce7301, 0x36bf0, 0x0, 0x80000000}};
  // -32952737121661978
  s21_decimal dec_2 = {{0xfe83741a, 0x751256, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_31) {
  // 8041671078062512329943259001
  s21_decimal dec_1 = {{0x93319779, 0xa9970ef7, 0x19fbea16, 0x0}};
  // -8433132631547353066581
  s21_decimal dec_2 = {{0x9f216c55, 0x2939a7bd, 0x1c9, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_32) {
  // 8900128139209060578958.7861579
  s21_decimal dec_1 = {{0x46ba704b, 0xf704c8e0, 0x1f94226b, 0x70000}};
  // -14287877412046.98
  s21_decimal dec_2 = {{0x91c620da, 0x51379, 0x0, 0x80020000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_33) {
  // -653384447713798537541.30717421
  s21_decimal dec_1 = {{0xcb3b5aed, 0x65d0466e, 0xd31eb1dc, 0x80080000}};
  // -256079411281502346891533017
  s21_decimal dec_2 = {{0xed49ad9, 0xb3b6f903, 0xd3d2ec, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_34) {
  // -755061433340850648.01822285322
  s21_decimal dec_1 = {{0x81599e0a, 0xf0db4570, 0xf3f937c7, 0x800b0000}};
  // 2309207669913310558958
  s21_decimal dec_2 = {{0x5e5d7aee, 0x2eb1ad14, 0x7d, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_35) {
  // 83864683968
  s21_decimal dec_1 = {{0x86b985c0, 0x13, 0x0, 0x0}};
  // -66426608103410216327
  s21_decimal dec_2 = {{0x75d9ad87, 0x99dab820, 0x3, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_36) {
  // 69438430661931313668.569
  s21_decimal dec_1 = {{0x107421d9, 0x43ce7274, 0xeb4, 0x30000}};
  // -9219356312.45997671366356
  s21_decimal dec_2 = {{0x3cf2bed4, 0x3b1019ea, 0xc33a, 0x800e0000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_37) {
  // 995206389752179224.83917462639
  s21_decimal dec_1 = {{0x4b149c6f, 0x342efaf0, 0x41918b09, 0xb0000}};
  // -16832578271430752808124553760
  s21_decimal dec_2 = {{0x2a601a20, 0x8558206e, 0x36639518, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_38) {
  // 959
  s21_decimal dec_1 = {{0x3bf, 0x0, 0x0, 0x0}};
  // 4138252060660295534342337957
  s21_decimal dec_2 = {{0xe3075a5, 0xb9183139, 0xd5f14f5, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_39) {
  // -74692442485238544551637301
  s21_decimal dec_1 = {{0xfc7bf135, 0x6ba8539f, 0x3dc8bd, 0x80000000}};
  // -3893906405009144.3565
  s21_decimal dec_2 = {{0xfe2456d, 0x1c635872, 0x2, 0x80040000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_40) {
  // 9686700920205952.47
  s21_decimal dec_1 = {{0x36eba2f, 0xd716851, 0x0, 0x20000}};
  // -194965413532806614
  s21_decimal dec_2 = {{0xb91c2dd6, 0x2b4a802, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_41) {
  // 169318481232818165
  s21_decimal dec_1 = {{0xf7ca6ff5, 0x2598a42, 0x0, 0x0}};
  // 87648596160344332830475
  s21_decimal dec_2 = {{0xea2070b, 0x709e81ab, 0x128f, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_42) {
  // 1486461367463269897079
  s21_decimal dec_1 = {{0x15981377, 0x94cba219, 0x50, 0x0}};
  // 13553558354486
  s21_decimal dec_2 = {{0xaf07fa36, 0xc53, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_43) {
  // -6035354434671382464951
  s21_decimal dec_1 = {{0xc64189b7, 0x2d5e41a7, 0x147, 0x80000000}};
  // 810220845913531719963416
  s21_decimal dec_2 = {{0x510d5318, 0x28fa2056, 0xab92, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_44) {
  // -9468584065678212398085948641
  s21_decimal dec_1 = {{0x791c4e1, 0xb7ef7225, 0x1e983aaa, 0x80000000}};
  // -23835435073199808782269807
  s21_decimal dec_2 = {{0xa1e3fd6f, 0x8640b7da, 0x13b759, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_45) {
  // 8190288220858703362839453
  s21_decimal dec_1 = {{0xa2bed39d, 0x6a039036, 0x6c65c, 0x0}};
  // -8823018721243227429128072729
  s21_decimal dec_2 = {{0xcfb36e19, 0x45c9b7ca, 0x1c823ae3, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_46) {
  // 74498628206537.103579
  s21_decimal dec_1 = {{0xa88a58db, 0x9e04ba4, 0x4, 0x60000}};
  // 99366826833430303377.97
  s21_decimal dec_2 = {{0x4a64105, 0xab2c7db3, 0x21a, 0x20000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_47) {
  // -79964332884072922450777872
  s21_decimal dec_1 = {{0xa9685710, 0x2bf5670f, 0x42251b, 0x80000000}};
  // -385245989528142141.91
  s21_decimal dec_2 = {{0xb0e07c2f, 0x16a2dea2, 0x2, 0x80020000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_48) {
  // 252005761191886945
  s21_decimal dec_1 = {{0x9531c061, 0x37f4de7, 0x0, 0x0}};
  // 3277731731174505368.971
  s21_decimal dec_2 = {{0x128ccd8b, 0xafaa5b56, 0xb1, 0x30000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_49) {
  // -75505065011808209930434
  s21_decimal dec_1 = {{0x93b308c2, 0x23454942, 0xffd, 0x80000000}};
  // 462368536.3
  s21_decimal dec_2 = {{0x1397d6f3, 0x1, 0x0, 0x10000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_50) {
  // -328400440033465573850924929
  s21_decimal dec_1 = {{0xef76c781, 0x86c6ff2c, 0x10fa57f, 0x80000000}};
  // 7456892577340929
  s21_decimal dec_2 = {{0x19335e01, 0x1a7e01, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_51) {
  // 90092839282323336459
  s21_decimal dec_1 = {{0xb53dad0b, 0xe24a0ffe, 0x4, 0x0}};
  // -86240963029.152831242
  s21_decimal dec_2 = {{0x6840170a, 0xacd572f3, 0x4, 0x80090000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_52) {
  // -51002395367255911259
  s21_decimal dec_1 = {{0x3f512b5b, 0xc3cce85d, 0x2, 0x80000000}};
  // 58128045618601371609484090
  s21_decimal dec_2 = {{0xbaee4b3a, 0xaac72505, 0x301517, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_53) {
  // -7716709711508.13929
  s21_decimal dec_1 = {{0xe6eccae9, 0xab586a8, 0x0, 0x80050000}};
  // 68016904969802150377
  s21_decimal dec_2 = {{0x768ef1e9, 0xafec96b3, 0x3, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_54) {
  // 90148782414576080581995
  s21_decimal dec_1 = {{0x646ef56b, 0xf9ac6956, 0x1316, 0x0}};
  // -7875533765518470.755
  s21_decimal dec_2 = {{0xbe52ae63, 0x6d4b843b, 0x0, 0x80030000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_55) {
  // -79228162514264337592351601130
  s21_decimal dec_1 = {{0xb8ee31ea, 0xffffffff, 0xffffffff, 0x80000000}};
  // -6.859671395545754865883
  s21_decimal dec_2 = {{0xf4cb90db, 0xdd106626, 0x173, 0x80150000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_56) {
  // 89962351451684712162285913
  s21_decimal dec_1 = {{0x53445959, 0xd8237558, 0x4a6a44, 0x0}};
  // -52099225491976
  s21_decimal dec_2 = {{0x4bd41a08, 0x2f62, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_57) {
  // -1397895105563370135341162
  s21_decimal dec_1 = {{0x7ff1c86a, 0xba71031, 0x12804, 0x80000000}};
  // 890771365499650390062024
  s21_decimal dec_2 = {{0xf57373c8, 0xcffee4f7, 0xbca0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_58) {
  // 22331177968325850
  s21_decimal dec_1 = {{0x8a37d4da, 0x4f5616, 0x0, 0x0}};
  // -26607667555627969018909020
  s21_decimal dec_2 = {{0x190d15c, 0x8c65db14, 0x160264, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_59) {
  // -52339753940141797167398413031
  s21_decimal dec_1 = {{0x8bc062e7, 0x76822d7f, 0xa91e6e02, 0x80000000}};
  // 39643682006918358621573951
  s21_decimal dec_2 = {{0x8759533f, 0x4ecfff03, 0x20cae0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_60) {
  // -7182995003268917293957
  s21_decimal dec_1 = {{0xa1a2f385, 0x64149a55, 0x185, 0x80000000}};
  // -5206199609495242529965
  s21_decimal dec_2 = {{0x4d51dcad, 0x3a889135, 0x11a, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_61) {
  // -13527969440526.08358708100
  s21_decimal dec_1 = {{0xaa707384, 0x44efc674, 0x11e77, 0x800b0000}};
  // 87850224379651786438
  s21_decimal dec_2 = {{0x738186c6, 0xc32ab19f, 0x4, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_62) {
  // 5322774.355763015021358
  s21_decimal dec_1 = {{0x9d31732e, 0x8c55434c, 0x120, 0xf0000}};
  // 643203118634225327751308
  s21_decimal dec_2 = {{0xf309408c, 0x1c65d1a6, 0x8834, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_63) {
  // 69328998
  s21_decimal dec_1 = {{0x421e066, 0x0, 0x0, 0x0}};
  // 313545488844315094418978
  s21_decimal dec_2 = {{0x15300622, 0x55c324b5, 0x4265, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_64) {
  // -761945736790385.34262
  s21_decimal dec_1 = {{0x9f6b9276, 0x21698110, 0x4, 0x80050000}};
  // -2351167472612622
  s21_decimal dec_2 = {{0xd603350e, 0x85a5f, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_65) {
  // 435745247794023973287745
  s21_decimal dec_1 = {{0x84487741, 0xcc164f65, 0x5c45, 0x0}};
  // -6515827120287684503061060896
  s21_decimal dec_2 = {{0xfd16dd20, 0xf7c1556c, 0x150dc40f, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_66) {
  // 95976051003
  s21_decimal dec_1 = {{0x589e513b, 0x16, 0x0, 0x0}};
  // -9251442584609800208178346532
  s21_decimal dec_2 = {{0x37cdfa24, 0x7164b2a8, 0x1de49d2b, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_67) {
  // -107855431773848176.59
  s21_decimal dec_1 = {{0x25a8f3fb, 0x95adf260, 0x0, 0x80020000}};
  // -321862575887666713158962
  s21_decimal dec_2 = {{0xe64f6532, 0x34880cd1, 0x4428, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_68) {
  // 490718731759962889814.176597
  s21_decimal dec_1 = {{0x53267355, 0xc0af4104, 0x195e9bb, 0x60000}};
  // -253636695597567680955
  s21_decimal dec_2 = {{0x38e7a1bb, 0xbfea8ed2, 0xd, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_69) {
  // 45198992884735009108776069
  s21_decimal dec_1 = {{0xc287d485, 0x50619ac5, 0x256342, 0x0}};
  // -26154539.5
  s21_decimal dec_2 = {{0xf96ddb3, 0x0, 0x0, 0x80010000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_70) {
  // -8869849133
  s21_decimal dec_1 = {{0x10af282d, 0x2, 0x0, 0x80000000}};
  // 818746028962634209407
  s21_decimal dec_2 = {{0x6b7f187f, 0x62623770, 0x2c, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_71) {
  // -295959257384353304255.7460
  s21_decimal dec_1 = {{0x7a482214, 0xd5bcc532, 0x272b7, 0x80040000}};
  // 2634978459590983
  s21_decimal dec_2 = {{0xbb132147, 0x95c7f, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_72) {
  // -7814482703023
  s21_decimal dec_1 = {{0x737732af, 0x71b, 0x0, 0x80000000}};
  // -97102006101064648757
  s21_decimal dec_2 = {{0x97c58835, 0x438fa014, 0x5, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_73) {
  // 244602509580629109238916.92
  s21_decimal dec_1 = {{0xcd4063ec, 0xdc859a68, 0x143ba8, 0x20000}};
  // -293805939
  s21_decimal dec_2 = {{0x11831f73, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_74) {
  // 75073483
  s21_decimal dec_1 = {{0x47987cb, 0x0, 0x0, 0x0}};
  // -792490945214598068975406
  s21_decimal dec_2 = {{0x66d2372e, 0x52d63b2, 0xa7d1, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_75) {
  // -67231908209348756495059032073
  s21_decimal dec_1 = {{0x803e9809, 0xbcd0509, 0xd93cee57, 0x80000000}};
  // -193079
  s21_decimal dec_2 = {{0x2f237, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_76) {
  // -4763886979259051292362466.87
  s21_decimal dec_1 = {{0xb99ab09f, 0xfdb52ae, 0x18a0f3b, 0x80020000}};
  // 850032143369458398249.67909494
  s21_decimal dec_2 = {{0xf5a14076, 0x9e4e5684, 0x12a902ca, 0x80000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_77) {
  // -43142370621661793010
  s21_decimal dec_1 = {{0x98664af2, 0x56b87d80, 0x2, 0x80000000}};
  // -8670997033493280480963
  s21_decimal dec_2 = {{0x8de5ec3, 0xe41c50d, 0x1d6, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_78) {
  // -18311968133061893281726
  s21_decimal dec_1 = {{0xf331d7be, 0xb19bac0d, 0x3e0, 0x80000000}};
  // 3172537678
  s21_decimal dec_2 = {{0xbd19154e, 0x0, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_79) {
  // -313206519586487
  s21_decimal dec_1 = {{0x13575eb7, 0x11cdc, 0x0, 0x80000000}};
  // -8806260695538599886
  s21_decimal dec_2 = {{0xed1007ce, 0x7a361f71, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_80) {
  // -9912984207650754641596741614
  s21_decimal dec_1 = {{0xd92b77ee, 0xaffe2e6b, 0x2007d40e, 0x80000000}};
  // 30939
  s21_decimal dec_2 = {{0x78db, 0x0, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_81) {
  // -79228162514264337592556667027
  s21_decimal dec_1 = {{0xc5274093, 0xffffffff, 0xffffffff, 0x80000000}};
  // 7879362967119157151196.8341
  s21_decimal dec_2 = {{0x90890255, 0x392f2eed, 0x412d33, 0x40000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_82) {
  // 40731038038046071993.8786084
  s21_decimal dec_1 = {{0x5420d324, 0xf6d71915, 0x150eb53, 0x70000}};
  // 27393301493482063488272
  s21_decimal dec_2 = {{0xefe16510, 0xfe6cec63, 0x5cc, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_83) {
  // 80
  s21_decimal dec_1 = {{0x50, 0x0, 0x0, 0x0}};
  // 56232995772227498725600016027
  s21_decimal dec_2 = {{0x6fae369b, 0x14b35f64, 0xb5b2d809, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_84) {
  // -74357555001
  s21_decimal dec_1 = {{0x500e3f39, 0x11, 0x0, 0x80000000}};
  // 411691626329243875515
  s21_decimal dec_2 = {{0x256f78bb, 0x515e78e9, 0x16, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_85) {
  // -4476145774035917924
  s21_decimal dec_1 = {{0xa846dc64, 0x3e1e76dd, 0x0, 0x80000000}};
  // -7354971698760138493777
  s21_decimal dec_2 = {{0x51660f51, 0xb6bc8fb6, 0x18e, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_86) {
  // -672710272125.86931
  s21_decimal dec_1 = {{0x90ae8fb3, 0xeefea4, 0x0, 0x80050000}};
  // 6745889556930442418
  s21_decimal dec_2 = {{0x8edb34b2, 0x5d9e36cf, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_87) {
  // -745377833415460977255392
  s21_decimal dec_1 = {{0x97c223e0, 0x368a658, 0x9dd7, 0x80000000}};
  // 24180008
  s21_decimal dec_2 = {{0x170f528, 0x0, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_88) {
  // -131188793122231.24
  s21_decimal dec_1 = {{0x1d419b94, 0x2e9b8d, 0x0, 0x80020000}};
  // -606582184363607546
  s21_decimal dec_2 = {{0x6a12c5fa, 0x86b0348, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_89) {
  // -766463619.720589638130
  s21_decimal dec_1 = {{0xd1d479f2, 0x8cd1c93c, 0x29, 0x800c0000}};
  // -704144297365027907722
  s21_decimal dec_2 = {{0xb383688a, 0x2bf713bc, 0x26, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_90) {
  // -8871223252405982
  s21_decimal dec_1 = {{0x9eaecede, 0x1f8454, 0x0, 0x80000000}};
  // 91395535206236.65665975676404
  s21_decimal dec_2 = {{0xecd66df4, 0x2160f922, 0x1d880fbd, 0xe0000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_91) {
  // -29360934126767241219435.33123
  s21_decimal dec_1 = {{0xa071e643, 0xd50ca452, 0x97cadf6, 0x80050000}};
  // 91889508378616611513
  s21_decimal dec_2 = {{0xd4b942b9, 0xfb391d04, 0x4, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_92) {
  // 964326481068486890077
  s21_decimal dec_1 = {{0xa59d125d, 0x46b7e14f, 0x34, 0x0}};
  // -962228542936
  s21_decimal dec_2 = {{0x94a5dd8, 0xe0, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_93) {
  // -178865676193603695011239
  s21_decimal dec_1 = {{0x5fc5e5a7, 0x53e67b1d, 0x25e0, 0x80000000}};
  // 715506.0
  s21_decimal dec_2 = {{0x6d2d74, 0x0, 0x0, 0x10000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_94) {
  // 1118280633043266463702332697.0
  s21_decimal dec_1 = {{0xd4e12fa, 0xe5a0f651, 0x24223359, 0x10000}};
  // -27872929
  s21_decimal dec_2 = {{0x1a94ea1, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_95) {
  // 67864673349881750334.49
  s21_decimal dec_1 = {{0x4210c469, 0xe52754ed, 0x16f, 0x20000}};
  // 39368801467935409461196624
  s21_decimal dec_2 = {{0xdfa6f750, 0x1051d88, 0x2090ab, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_96) {
  // -2531
  s21_decimal dec_1 = {{0x9e3, 0x0, 0x0, 0x80000000}};
  // -408497915301250082400269810
  s21_decimal dec_2 = {{0xad1275f2, 0x5c7c3d57, 0x151e6cc, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_97) {
  // -3900906320
  s21_decimal dec_1 = {{0xe8831b50, 0x0, 0x0, 0x80000000}};
  // -25906213566781880089812931333
  s21_decimal dec_2 = {{0x56781305, 0x7fb91991, 0x53b51e1b, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_98) {
  // -86001368814970140164
  s21_decimal dec_1 = {{0x4da6f604, 0xa9823d48, 0x4, 0x80000000}};
  // 950110043914068
  s21_decimal dec_2 = {{0xbbaa3f54, 0x3601e, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_99) {
  // -4136
  s21_decimal dec_1 = {{0x1028, 0x0, 0x0, 0x80000000}};
  // 1392740148762267748809443753
  s21_decimal dec_2 = {{0x53d609a9, 0xbff25a6a, 0x4800c32, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_100) {
  // -8407987541245728863183183
  s21_decimal dec_1 = {{0xc402614f, 0xeafcf7c7, 0x6f475, 0x80000000}};
  // 614427905047662
  s21_decimal dec_2 = {{0xa5053c6e, 0x22ed1, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_101) {
  // 484985999310893153809295683
  s21_decimal dec_1 = {{0x4cc36943, 0xb4328a59, 0x1912bc7, 0x0}};
  // -8799376.101023
  s21_decimal dec_2 = {{0xc3afce9f, 0x800, 0x0, 0x80060000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_102) {
  // -612584
  s21_decimal dec_1 = {{0x958e8, 0x0, 0x0, 0x80000000}};
  // -679203889777429408818917
  s21_decimal dec_2 = {{0xcfbea6e5, 0xb775e822, 0x8fd3, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_103) {
  // 54460434629634547
  s21_decimal dec_1 = {{0xc69a9f3, 0xc17b7a, 0x0, 0x0}};
  // 355070275841906758
  s21_decimal dec_2 = {{0xdddb5846, 0x4ed7688, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_105) {
  // -2701669896737352093
  s21_decimal dec_1 = {{0xff65699d, 0x257e4274, 0x0, 0x80000000}};
  // 921138547489801916
  s21_decimal dec_2 = {{0xe80c86bc, 0xcc88aa0, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_106) {
  // -119713544343142732
  s21_decimal dec_1 = {{0x9560414c, 0x1a94ed5, 0x0, 0x80000000}};
  // 7432171455344738.64
  s21_decimal dec_2 = {{0x5e8fe688, 0xa50700e, 0x0, 0x20000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_107) {
  // 297350197338993965811970280
  s21_decimal dec_1 = {{0x38ed30e8, 0x7f4845ad, 0xf5f65a, 0x0}};
  // -2216380859078226130
  s21_decimal dec_2 = {{0x5530d2, 0x1ec22aa6, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_108) {
  // -98564.19997127476114068
  s21_decimal dec_1 = {{0xfe5f294, 0x514e25d6, 0x216, 0x80110000}};
  // 7391378418634854801363017239
  s21_decimal dec_2 = {{0x4fb99e17, 0xf512dd31, 0x17e20142, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_109) {
  // 5110375410716080785809
  s21_decimal dec_1 = {{0xeef6c991, 0x8b4a01d, 0x115, 0x0}};
  // -62282565.006383
  s21_decimal dec_2 = {{0x4a29b42f, 0x38a5, 0x0, 0x80060000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_110) {
  // -1097488833177980643433677146
  s21_decimal dec_1 = {{0xbb26815a, 0xdc4a367e, 0x38bd24c, 0x80000000}};
  // -731194828622381822
  s21_decimal dec_2 = {{0x95a3c2fe, 0xa25b9d2, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_111) {
  // 5967890747
  s21_decimal dec_1 = {{0x63b6c93b, 0x1, 0x0, 0x0}};
  // 224318576205289131299
  s21_decimal dec_2 = {{0x65a68d23, 0x290bac91, 0xc, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_112) {
  // 290118979628685403520783683
  s21_decimal dec_1 = {{0x4b805543, 0x664e7979, 0xeffb15, 0x0}};
  // -3183166711439549101398522
  s21_decimal dec_2 = {{0xb59259fa, 0xd02da239, 0x2a20f, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_113) {
  // -946928186895141195095
  s21_decimal dec_1 = {{0xc9984d57, 0x5544b8f0, 0x33, 0x80000000}};
  // -29616421233
  s21_decimal dec_2 = {{0xe546b971, 0x6, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_114) {
  // 4125735205372998626407677
  s21_decimal dec_1 = {{0x45d174fd, 0x8dbb3cc9, 0x369a8, 0x0}};
  // 122282265
  s21_decimal dec_2 = {{0x749e119, 0x0, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_115) {
  // 664707117306323627488
  s21_decimal dec_1 = {{0xbd536de0, 0x8aa116b, 0x24, 0x0}};
  // -78590798938071566.6132
  s21_decimal dec_2 = {{0x3b065ad4, 0x9aaa106c, 0x2a, 0x80040000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_116) {
  // -12324297147621194118282
  s21_decimal dec_1 = {{0x3130b48a, 0x19fb0ed6, 0x29c, 0x80000000}};
  // -410996653
  s21_decimal dec_2 = {{0x187f4fad, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_117) {
  // 79228162514264337593389792781
  s21_decimal dec_1 = {{0xf6cfbe0d, 0xffffffff, 0xffffffff, 0x0}};
  // -6659048
  s21_decimal dec_2 = {{0x659be8, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_118) {
  // -897533653543487801192987390
  s21_decimal dec_1 = {{0x3011bafe, 0xda3fbd22, 0x2e66c24, 0x80000000}};
  // -779184713064614783257570
  s21_decimal dec_2 = {{0xface8be2, 0xb01c6ab9, 0xa4ff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_119) {
  // 73392014053.132
  s21_decimal dec_1 = {{0xe8ed4f0c, 0x42bf, 0x0, 0x30000}};
  // -35545049203732763620223
  s21_decimal dec_2 = {{0x90c3b37f, 0xe6a6850d, 0x786, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_120) {
  // 58573880455384157834
  s21_decimal dec_1 = {{0xbb5e4e8a, 0x2ce039ef, 0x3, 0x0}};
  // -61999695309325484889986688
  s21_decimal dec_2 = {{0x4eb3d680, 0x37a6e766, 0x3348f2, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_121) {
  // -985195314691819262568
  s21_decimal dec_1 = {{0x79115268, 0x6854deec, 0x35, 0x80000000}};
  // -1496980430
  s21_decimal dec_2 = {{0x593a1bce, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_122) {
  // 5991252096114568958.3
  s21_decimal dec_1 = {{0x4f3bd5ef, 0x3f740862, 0x3, 0x10000}};
  // 590227501707
  s21_decimal dec_2 = {{0x6c4cf28b, 0x89, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_123) {
  // -69389
  s21_decimal dec_1 = {{0x10f0d, 0x0, 0x0, 0x80000000}};
  // 3396122967676785350435344.691
  s21_decimal dec_2 = {{0xe8df1133, 0xfaa9dde5, 0xaf93502, 0x30000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_124) {
  // -8949893324280399112732193
  s21_decimal dec_1 = {{0x43b07e21, 0xb074f9ec, 0x76736, 0x80000000}};
  // -23377084273745986
  s21_decimal dec_2 = {{0x94056042, 0x530d55, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_125) {
  // 3743606788575.0185763522
  s21_decimal dec_1 = {{0x2c9222c2, 0x69ce754d, 0x7ed, 0xa0000}};
  // 73536805073209824
  s21_decimal dec_2 = {{0xa84e49e0, 0x1054155, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_126) {
  // -37293490723813343513
  s21_decimal dec_1 = {{0x53384119, 0x58d1839, 0x2, 0x80000000}};
  // -62085695358246
  s21_decimal dec_2 = {{0x73d14526, 0x3877, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_127) {
  // -1626987867078627027.0933146
  s21_decimal dec_1 = {{0x26cd489a, 0xe3da207c, 0xd7547, 0x80070000}};
  // 557915000983344593571993704
  s21_decimal dec_2 = {{0xaa88d868, 0xce7185f4, 0x1cd7f18, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_128) {
  // 501069195
  s21_decimal dec_1 = {{0x1dddb58b, 0x0, 0x0, 0x0}};
  // 79228162514264337592399062316
  s21_decimal dec_2 = {{0xbbc2652c, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_129) {
  // 3207664481565562685418463242
  s21_decimal dec_1 = {{0xeb79600a, 0xf9d47de6, 0xa5d515f, 0x0}};
  // -76435193711
  s21_decimal dec_2 = {{0xcbe47f6f, 0x11, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_130) {
  // -468123361.40
  s21_decimal dec_1 = {{0xe63b900c, 0xa, 0x0, 0x80020000}};
  // 740985984480451425145093
  s21_decimal dec_2 = {{0xc1c71105, 0xee42dcf7, 0x9ce8, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_131) {
  // 5164909695159842564788577
  s21_decimal dec_1 = {{0xb7c4d161, 0x50cbc381, 0x445b6, 0x0}};
  // 1406749141353197670874480385
  s21_decimal dec_2 = {{0xd62bff01, 0xc2865d62, 0x48ba2b7, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_132) {
  // 93373901401
  s21_decimal dec_1 = {{0xbd84aa59, 0x15, 0x0, 0x0}};
  // 3878273454338350863194690886
  s21_decimal dec_2 = {{0x6c229546, 0x3bfcbaa3, 0xc880859, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_133) {
  // -34978874721044007.2
  s21_decimal dec_1 = {{0x27e83d88, 0x4dab303, 0x0, 0x80010000}};
  // 920077542450819192378968430
  s21_decimal dec_2 = {{0xaf85496e, 0x84de2c85, 0x2f911ff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_134) {
  // -770271
  s21_decimal dec_1 = {{0xbc0df, 0x0, 0x0, 0x80000000}};
  // 65736604064940462503347481
  s21_decimal dec_2 = {{0x8bffc519, 0x726b6816, 0x366044, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_135) {
  // 5479793410456556234186.4040
  s21_decimal dec_1 = {{0xf4183268, 0xf5cf4c6d, 0x2d53e9, 0x40000}};
  // -121965449019804794385
  s21_decimal dec_2 = {{0xd07abe11, 0x9c9c51ae, 0x6, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_136) {
  // -3257970
  s21_decimal dec_1 = {{0x31b672, 0x0, 0x0, 0x80000000}};
  // -32931697411202967740578.0
  s21_decimal dec_2 = {{0x976b4654, 0x4f1696c8, 0x45bc, 0x80010000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_137) {
  // 151629334124459918898
  s21_decimal dec_1 = {{0x1730632, 0x38479c05, 0x8, 0x0}};
  // 99267601252.278
  s21_decimal dec_2 = {{0x8a1c3fb6, 0x5a48, 0x0, 0x30000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_138) {
  // 88702
  s21_decimal dec_1 = {{0x15a7e, 0x0, 0x0, 0x0}};
  // -62000917127569419189060291
  s21_decimal dec_2 = {{0x922b82c3, 0x73c94ac9, 0x334934, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_139) {
  // -734554854730779514994173
  s21_decimal dec_1 = {{0x18bd7dfd, 0x4c683b3a, 0x9b8c, 0x80000000}};
  // -4130043
  s21_decimal dec_2 = {{0x3f04fb, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_140) {
  // 53374.500271670
  s21_decimal dec_1 = {{0x3820f636, 0x308b, 0x0, 0x90000}};
  // -7805151339512928835983344713
  s21_decimal dec_2 = {{0x9ea38449, 0xf1a3a291, 0x19384515, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_141) {
  // -8248964207097842657056877
  s21_decimal dec_1 = {{0x8e2d86d, 0x3ee67e03, 0x6d2c9, 0x80000000}};
  // -9815427502.8874097362751300842
  s21_decimal dec_2 = {{0xb4b5a4ea, 0x40937063, 0x3d275037, 0x80130000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_142) {
  // 35522995263975332132517
  s21_decimal dec_1 = {{0xbd3236a5, 0xb4972fb0, 0x785, 0x0}};
  // 3503058.4197701
  s21_decimal dec_2 = {{0x31870245, 0x1fdc, 0x0, 0x70000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_143) {
  // -9224.639883920710764590998
  s21_decimal dec_1 = {{0x4e57f796, 0xbae99d20, 0x7a164, 0x80150000}};
  // -287027574624342299833798627
  s21_decimal dec_2 = {{0xd3f00fe3, 0xffa0d51a, 0xed6c73, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_144) {
  // 778180346056601.30842866
  s21_decimal dec_1 = {{0xf2f918f2, 0x862c003a, 0x107a, 0x80000}};
  // -1596910196705833844
  s21_decimal dec_2 = {{0xf4d9b374, 0x16295d5c, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_145) {
  // -13925521839
  s21_decimal dec_1 = {{0x3e0699af, 0x3, 0x0, 0x80000000}};
  // 2697611050735213223812614599
  s21_decimal dec_2 = {{0x51ed49c7, 0x161e6256, 0x8b7695c, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_146) {
  // 38012868396150112697537162
  s21_decimal dec_1 = {{0x9da1528a, 0xb991721d, 0x1f7189, 0x0}};
  // -71363849093353087958
  s21_decimal dec_2 = {{0x5e4a3d6, 0xde5f52a6, 0x3, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_147) {
  // -2570802946391815525311273378
  s21_decimal dec_1 = {{0x3e7159a2, 0xf9bad57b, 0x84e84b2, 0x80000000}};
  // -584249.689
  s21_decimal dec_2 = {{0x22d2f159, 0x0, 0x0, 0x80030000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_148) {
  // -529195518536568
  s21_decimal dec_1 = {{0xeee62b78, 0x1e14c, 0x0, 0x80000000}};
  // -557029115317626574777
  s21_decimal dec_2 = {{0x593b97b9, 0x3254f51d, 0x1e, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_149) {
  // 75690443039772456548932289806
  s21_decimal dec_1 = {{0x24a4850e, 0x16dc63e, 0xf491aac3, 0x0}};
  // -80586.13273
  s21_decimal dec_2 = {{0xe054ae19, 0x1, 0x0, 0x80050000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_150) {
  // 7930954897637.131
  s21_decimal dec_1 = {{0x55673f0b, 0x1c2d29, 0x0, 0x30000}};
  // 25716538342160588696360620187
  s21_decimal dec_2 = {{0xf95c909b, 0xf8077af9, 0x531838d0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_151) {
  // -21139997998963126597179245231
  s21_decimal dec_1 = {{0x929182af, 0xd73b8489, 0x444e98b3, 0x80000000}};
  // 5709.3794
  s21_decimal dec_2 = {{0x3672ea2, 0x0, 0x0, 0x40000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_152) {
  // 4621518912995181
  s21_decimal dec_1 = {{0x3921bf6d, 0x106b3f, 0x0, 0x0}};
  // 5544592341167258
  s21_decimal dec_2 = {{0xeb6c9a, 0x13b2c7, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_153) {
  // -260648344907
  s21_decimal dec_1 = {{0xafda1d4b, 0x3c, 0x0, 0x80000000}};
  // -451159780037046526
  s21_decimal dec_2 = {{0xfa0d30fe, 0x642d76d, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_154) {
  // 478801.42775212071
  s21_decimal dec_1 = {{0x75e95827, 0xaa1abc, 0x0, 0xb0000}};
  // -90026038542136048275248543
  s21_decimal dec_2 = {{0x2079559f, 0x5410de2b, 0x4a77c1, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_155) {
  // -36795867.5993726
  s21_decimal dec_1 = {{0xe2cb47e, 0x14ea8, 0x0, 0x80070000}};
  // -4030350664286821517192629
  s21_decimal dec_2 = {{0xaef96db5, 0xbf4f5fdd, 0x35575, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_156) {
  // -2882812710629402058
  s21_decimal dec_1 = {{0xf30be5ca, 0x2801cee2, 0x0, 0x80000000}};
  // -59875232435366.910418886081
  s21_decimal dec_2 = {{0xb4fa1dc1, 0xdaae7cc9, 0x318712, 0x800c0000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_157) {
  // 83116961790653197010998
  s21_decimal dec_1 = {{0xdf494836, 0xc78f180f, 0x1199, 0x0}};
  // 5145184965.7583719550
  s21_decimal dec_2 = {{0xf514d47e, 0xca09b0a8, 0x2, 0xa0000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_158) {
  // 761116.716720846395850029
  s21_decimal dec_1 = {{0x9f7abd2d, 0x384aa86a, 0xa12c, 0x120000}};
  // -218077180116484984354741
  s21_decimal dec_2 = {{0xf0337b5, 0xfcd4d586, 0x2e2d, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_159) {
  // 711407593964.28204927366
  s21_decimal dec_1 = {{0x73eae986, 0x8c5d0727, 0xf10, 0xb0000}};
  // 7775278263807394081.6132034
  s21_decimal dec_2 = {{0xd3f77c2, 0xcaeb165f, 0x4050ca, 0x70000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_160) {
  // 62946.176
  s21_decimal dec_1 = {{0x3c07b80, 0x0, 0x0, 0x30000}};
  // -7089237768463505904275467
  s21_decimal dec_2 = {{0x787a900b, 0x59784a18, 0x5dd34, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_161) {
  // 402446088008698265719259
  s21_decimal dec_1 = {{0x14bdd1db, 0xa569d927, 0x5538, 0x0}};
  // -491892024655989097898508519
  s21_decimal dec_2 = {{0x16a500e7, 0x168834ab, 0x196e230, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_162) {
  // 257341526808736434546.606
  s21_decimal dec_1 = {{0xa694e7ae, 0x831a6ab3, 0x367e, 0x30000}};
  // -50355794179122711552.056939391
  s21_decimal dec_2 = {{0xc05cd37f, 0x4fd7e63f, 0xa2b55630, 0x80090000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_163) {
  // 263626051041.454
  s21_decimal dec_1 = {{0x392038ae, 0xefc4, 0x0, 0x30000}};
  // 866518832140280062460804
  s21_decimal dec_2 = {{0xd202c384, 0x147be20c, 0xb77e, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_164) {
  // 28454988299921272910781358844
  s21_decimal dec_1 = {{0x659c22fc, 0xa4268465, 0x5bf16a26, 0x0}};
  // 54372
  s21_decimal dec_2 = {{0xd464, 0x0, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_mul_165) {
  // 3640
  s21_decimal dec_1 = {{0xe38, 0x0, 0x0, 0x0}};
  // 3088416978766223087413085433
  s21_decimal dec_2 = {{0xeffdc4f9, 0xe55e7a1b, 0x9faadbb, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_mul(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

Suite *test_s21_mul_suite() {
  Suite *c = suite_create("s21_mul_cases");
  TCase *tc = tcase_create("s21_mul_tc");
  // SRunner *sr = srunner_create(c);
  // int nf;

  suite_add_tcase(c, tc);

  tcase_add_test(tc, s21_mul_1);
  tcase_add_test(tc, s21_mul_2);
  tcase_add_test(tc, s21_mul_3);
  tcase_add_test(tc, s21_mul_4);
  tcase_add_test(tc, s21_mul_6);
  tcase_add_test(tc, s21_mul_7);
  tcase_add_test(tc, s21_mul_8);
  tcase_add_test(tc, s21_mul_9);
  tcase_add_test(tc, s21_mul_10);
  tcase_add_test(tc, s21_mul_11);
  tcase_add_test(tc, s21_mul_12);
  tcase_add_test(tc, s21_mul_13);
  tcase_add_test(tc, s21_mul_14);
  tcase_add_test(tc, s21_mul_15);
  tcase_add_test(tc, s21_mul_16);
  tcase_add_test(tc, s21_mul_17);
  tcase_add_test(tc, s21_mul_18);
  tcase_add_test(tc, s21_mul_19);
  tcase_add_test(tc, s21_mul_20);
  tcase_add_test(tc, s21_mul_21);
  tcase_add_test(tc, s21_mul_22);
  tcase_add_test(tc, s21_mul_23);
  tcase_add_test(tc, s21_mul_24);
  tcase_add_test(tc, s21_mul_25);
  tcase_add_test(tc, s21_mul_26);
  tcase_add_test(tc, s21_mul_27);
  tcase_add_test(tc, s21_mul_28);
  tcase_add_test(tc, s21_mul_29);
  tcase_add_test(tc, s21_mul_30);
  tcase_add_test(tc, s21_mul_31);
  tcase_add_test(tc, s21_mul_32);
  tcase_add_test(tc, s21_mul_33);
  tcase_add_test(tc, s21_mul_34);
  tcase_add_test(tc, s21_mul_35);
  tcase_add_test(tc, s21_mul_36);
  tcase_add_test(tc, s21_mul_37);
  tcase_add_test(tc, s21_mul_38);
  tcase_add_test(tc, s21_mul_39);
  tcase_add_test(tc, s21_mul_40);
  tcase_add_test(tc, s21_mul_41);
  tcase_add_test(tc, s21_mul_42);
  tcase_add_test(tc, s21_mul_43);
  tcase_add_test(tc, s21_mul_44);
  tcase_add_test(tc, s21_mul_45);
  tcase_add_test(tc, s21_mul_46);
  tcase_add_test(tc, s21_mul_47);
  tcase_add_test(tc, s21_mul_48);
  tcase_add_test(tc, s21_mul_49);
  tcase_add_test(tc, s21_mul_50);
  tcase_add_test(tc, s21_mul_52);
  tcase_add_test(tc, s21_mul_53);
  tcase_add_test(tc, s21_mul_54);
  tcase_add_test(tc, s21_mul_55);
  tcase_add_test(tc, s21_mul_56);
  tcase_add_test(tc, s21_mul_57);
  tcase_add_test(tc, s21_mul_58);
  tcase_add_test(tc, s21_mul_59);
  tcase_add_test(tc, s21_mul_61);
  tcase_add_test(tc, s21_mul_62);
  tcase_add_test(tc, s21_mul_64);
  tcase_add_test(tc, s21_mul_65);
  tcase_add_test(tc, s21_mul_66);
  tcase_add_test(tc, s21_mul_67);
  tcase_add_test(tc, s21_mul_68);
  tcase_add_test(tc, s21_mul_69);
  tcase_add_test(tc, s21_mul_70);
  tcase_add_test(tc, s21_mul_71);
  tcase_add_test(tc, s21_mul_72);
  tcase_add_test(tc, s21_mul_73);
  tcase_add_test(tc, s21_mul_74);
  tcase_add_test(tc, s21_mul_75);
  tcase_add_test(tc, s21_mul_76);
  tcase_add_test(tc, s21_mul_77);
  tcase_add_test(tc, s21_mul_78);
  tcase_add_test(tc, s21_mul_79);
  tcase_add_test(tc, s21_mul_80);
  tcase_add_test(tc, s21_mul_81);
  tcase_add_test(tc, s21_mul_82);
  tcase_add_test(tc, s21_mul_83);
  tcase_add_test(tc, s21_mul_84);
  tcase_add_test(tc, s21_mul_85);
  tcase_add_test(tc, s21_mul_86);
  tcase_add_test(tc, s21_mul_87);
  tcase_add_test(tc, s21_mul_88);
  tcase_add_test(tc, s21_mul_89);
  tcase_add_test(tc, s21_mul_90);
  tcase_add_test(tc, s21_mul_91);
  tcase_add_test(tc, s21_mul_92);
  tcase_add_test(tc, s21_mul_93);
  tcase_add_test(tc, s21_mul_94);
  tcase_add_test(tc, s21_mul_95);
  tcase_add_test(tc, s21_mul_96);
  tcase_add_test(tc, s21_mul_97);
  tcase_add_test(tc, s21_mul_99);
  tcase_add_test(tc, s21_mul_100);
  tcase_add_test(tc, s21_mul_101);
  tcase_add_test(tc, s21_mul_102);
  tcase_add_test(tc, s21_mul_103);
  tcase_add_test(tc, s21_mul_104);
  tcase_add_test(tc, s21_mul_105);
  tcase_add_test(tc, s21_mul_106);
  tcase_add_test(tc, s21_mul_107);
  tcase_add_test(tc, s21_mul_108);
  tcase_add_test(tc, s21_mul_109);
  tcase_add_test(tc, s21_mul_110);
  tcase_add_test(tc, s21_mul_111);
  tcase_add_test(tc, s21_mul_112);
  tcase_add_test(tc, s21_mul_113);
  tcase_add_test(tc, s21_mul_114);
  tcase_add_test(tc, s21_mul_115);
  tcase_add_test(tc, s21_mul_116);
  tcase_add_test(tc, s21_mul_117);
  tcase_add_test(tc, s21_mul_118);
  tcase_add_test(tc, s21_mul_119);
  tcase_add_test(tc, s21_mul_120);
  tcase_add_test(tc, s21_mul_121);
  tcase_add_test(tc, s21_mul_122);
  tcase_add_test(tc, s21_mul_123);
  tcase_add_test(tc, s21_mul_124);
  tcase_add_test(tc, s21_mul_125);
  tcase_add_test(tc, s21_mul_126);
  tcase_add_test(tc, s21_mul_127);
  tcase_add_test(tc, s21_mul_128);
  tcase_add_test(tc, s21_mul_129);
  tcase_add_test(tc, s21_mul_130);
  tcase_add_test(tc, s21_mul_131);
  tcase_add_test(tc, s21_mul_132);
  tcase_add_test(tc, s21_mul_133);
  tcase_add_test(tc, s21_mul_134);
  tcase_add_test(tc, s21_mul_135);
  tcase_add_test(tc, s21_mul_136);
  tcase_add_test(tc, s21_mul_137);
  tcase_add_test(tc, s21_mul_138);
  tcase_add_test(tc, s21_mul_139);
  tcase_add_test(tc, s21_mul_140);
  tcase_add_test(tc, s21_mul_141);
  tcase_add_test(tc, s21_mul_142);
  tcase_add_test(tc, s21_mul_143);
  tcase_add_test(tc, s21_mul_144);
  tcase_add_test(tc, s21_mul_145);
  tcase_add_test(tc, s21_mul_146);
  tcase_add_test(tc, s21_mul_147);
  tcase_add_test(tc, s21_mul_148);
  tcase_add_test(tc, s21_mul_149);
  tcase_add_test(tc, s21_mul_150);
  tcase_add_test(tc, s21_mul_151);
  tcase_add_test(tc, s21_mul_152);
  tcase_add_test(tc, s21_mul_153);
  tcase_add_test(tc, s21_mul_154);
  tcase_add_test(tc, s21_mul_155);
  tcase_add_test(tc, s21_mul_156);
  tcase_add_test(tc, s21_mul_157);
  tcase_add_test(tc, s21_mul_158);
  tcase_add_test(tc, s21_mul_159);
  tcase_add_test(tc, s21_mul_160);
  tcase_add_test(tc, s21_mul_161);
  tcase_add_test(tc, s21_mul_162);
  tcase_add_test(tc, s21_mul_163);
  tcase_add_test(tc, s21_mul_164);
  tcase_add_test(tc, s21_mul_165);
  tcase_add_test(tc, s21_mul_166);
  tcase_add_test(tc, s21_mul_167);
  tcase_add_test(tc, s21_mul_168);
  tcase_add_test(tc, s21_mul_169);
  tcase_add_test(tc, s21_mul_170);
  tcase_add_test(tc, s21_mul_171);
  tcase_add_test(tc, s21_mul_172);
  tcase_add_test(tc, s21_mul_173);
  tcase_add_test(tc, s21_mul_174);
  tcase_add_test(tc, s21_mul_175);
  tcase_add_test(tc, s21_mul_176);
  tcase_add_test(tc, s21_mul_177);
  tcase_add_test(tc, s21_mul_178);
  tcase_add_test(tc, s21_mul_179);
  tcase_add_test(tc, s21_mul_180);
  tcase_add_test(tc, s21_mul_181);
  tcase_add_test(tc, s21_mul_182);
  tcase_add_test(tc, s21_mul_183);
  tcase_add_test(tc, s21_mul_184);
  tcase_add_test(tc, s21_mul_185);
  tcase_add_test(tc, s21_mul_186);
  tcase_add_test(tc, s21_mul_187);
  tcase_add_test(tc, s21_mul_188);
  tcase_add_test(tc, s21_mul_189);
  tcase_add_test(tc, s21_mul_190);
  tcase_add_test(tc, s21_mul_191);
  tcase_add_test(tc, s21_mul_192);
  tcase_add_test(tc, s21_mul_193);
  tcase_add_test(tc, s21_mul_194);
  tcase_add_test(tc, s21_mul_195);
  tcase_add_test(tc, s21_mul_196);
  tcase_add_test(tc, s21_mul_197);
  tcase_add_test(tc, s21_mul_198);
  tcase_add_test(tc, s21_mul_199);
  tcase_add_test(tc, s21_mul_200);
  tcase_add_test(tc, s21_mul_201);
  tcase_add_test(tc, s21_mul_202);
  tcase_add_test(tc, s21_mul_203);
  tcase_add_test(tc, s21_mul_204);
  tcase_add_test(tc, s21_mul_205);
  tcase_add_test(tc, s21_mul_206);
  tcase_add_test(tc, s21_mul_207);
  tcase_add_test(tc, s21_mul_208);
  tcase_add_test(tc, s21_mul_210);
  tcase_add_test(tc, s21_mul_211);
  tcase_add_test(tc, s21_mul_212);
  tcase_add_test(tc, s21_mul_213);
  tcase_add_test(tc, s21_mul_214);
  tcase_add_test(tc, s21_mul_215);
  tcase_add_test(tc, s21_mul_216);
  tcase_add_test(tc, s21_mul_217);
  tcase_add_test(tc, s21_mul_218);
  tcase_add_test(tc, s21_mul_219);
  tcase_add_test(tc, s21_mul_220);
  tcase_add_test(tc, s21_mul_221);
  tcase_add_test(tc, s21_mul_222);
  tcase_add_test(tc, s21_mul_223);
  tcase_add_test(tc, s21_mul_224);
  tcase_add_test(tc, s21_mul_225);
  tcase_add_test(tc, s21_mul_226);
  tcase_add_test(tc, s21_mul_227);
  tcase_add_test(tc, s21_mul_228);
  tcase_add_test(tc, s21_mul_229);
  tcase_add_test(tc, s21_mul_230);
  tcase_add_test(tc, s21_mul_231);
  tcase_add_test(tc, s21_mul_232);
  tcase_add_test(tc, s21_mul_233);
  tcase_add_test(tc, s21_mul_234);
  tcase_add_test(tc, s21_mul_235);
  tcase_add_test(tc, s21_mul_236);
  tcase_add_test(tc, s21_mul_237);
  tcase_add_test(tc, s21_mul_238);
  tcase_add_test(tc, s21_mul_239);
  tcase_add_test(tc, s21_mul_240);
  tcase_add_test(tc, s21_mul_241);
  tcase_add_test(tc, s21_mul_242);
  tcase_add_test(tc, s21_mul_243);
  tcase_add_test(tc, s21_mul_244);
  tcase_add_test(tc, s21_mul_245);
  tcase_add_test(tc, s21_mul_246);
  tcase_add_test(tc, s21_mul_247);
  tcase_add_test(tc, s21_mul_248);
  tcase_add_test(tc, s21_mul_249);
  tcase_add_test(tc, s21_mul_250);
  tcase_add_test(tc, s21_mul_251);
  tcase_add_test(tc, s21_mul_252);
  tcase_add_test(tc, s21_mul_253);
  tcase_add_test(tc, s21_mul_254);
  tcase_add_test(tc, s21_mul_255);
  tcase_add_test(tc, s21_mul_256);
  tcase_add_test(tc, s21_mul_257);
  tcase_add_test(tc, s21_mul_258);
  tcase_add_test(tc, s21_mul_259);
  tcase_add_test(tc, s21_mul_260);
  tcase_add_test(tc, s21_mul_261);
  tcase_add_test(tc, s21_mul_262);
  tcase_add_test(tc, s21_mul_263);
  tcase_add_test(tc, s21_mul_264);
  tcase_add_test(tc, s21_mul_265);
  tcase_add_test(tc, s21_mul_266);
  tcase_add_test(tc, s21_mul_267);
  tcase_add_test(tc, s21_mul_268);
  tcase_add_test(tc, s21_mul_269);
  tcase_add_test(tc, s21_mul_270);
  tcase_add_test(tc, s21_mul_271);
  tcase_add_test(tc, s21_mul_272);
  tcase_add_test(tc, s21_mul_273);
  tcase_add_test(tc, s21_mul_274);
  tcase_add_test(tc, s21_mul_275);
  tcase_add_test(tc, s21_mul_277);
  tcase_add_test(tc, s21_mul_278);
  tcase_add_test(tc, s21_mul_279);
  tcase_add_test(tc, s21_mul_280);
  tcase_add_test(tc, s21_mul_281);
  tcase_add_test(tc, s21_mul_282);
  tcase_add_test(tc, s21_mul_283);
  tcase_add_test(tc, s21_mul_284);
  tcase_add_test(tc, s21_mul_285);
  tcase_add_test(tc, s21_mul_286);
  tcase_add_test(tc, s21_mul_287);
  tcase_add_test(tc, s21_mul_288);
  tcase_add_test(tc, s21_mul_289);
  tcase_add_test(tc, s21_mul_290);
  tcase_add_test(tc, s21_mul_291);
  tcase_add_test(tc, s21_mul_293);
  tcase_add_test(tc, s21_mul_294);
  tcase_add_test(tc, s21_mul_295);
  tcase_add_test(tc, s21_mul_296);
  tcase_add_test(tc, s21_mul_297);
  tcase_add_test(tc, s21_mul_298);
  tcase_add_test(tc, s21_mul_299);
  tcase_add_test(tc, s21_mul_300);
  tcase_add_test(tc, s21_mul_301);
  tcase_add_test(tc, s21_mul_302);
  tcase_add_test(tc, s21_mul_303);
  tcase_add_test(tc, s21_mul_304);
  tcase_add_test(tc, s21_mul_305);
  tcase_add_test(tc, s21_mul_306);
  tcase_add_test(tc, s21_mul_307);
  tcase_add_test(tc, s21_mul_308);
  tcase_add_test(tc, s21_mul_309);
  tcase_add_test(tc, s21_mul_310);
  tcase_add_test(tc, s21_mul_311);
  tcase_add_test(tc, s21_mul_312);
  tcase_add_test(tc, s21_mul_313);
  tcase_add_test(tc, s21_mul_314);
  tcase_add_test(tc, s21_mul_315);
  tcase_add_test(tc, s21_mul_316);
  tcase_add_test(tc, s21_mul_317);
  tcase_add_test(tc, s21_mul_319);
  tcase_add_test(tc, s21_mul_320);
  tcase_add_test(tc, s21_mul_321);
  tcase_add_test(tc, s21_mul_322);
  tcase_add_test(tc, s21_mul_323);
  tcase_add_test(tc, s21_mul_324);
  tcase_add_test(tc, s21_mul_325);
  tcase_add_test(tc, s21_mul_326);
  tcase_add_test(tc, s21_mul_327);
  tcase_add_test(tc, s21_mul_328);
  tcase_add_test(tc, s21_mul_329);
  tcase_add_test(tc, s21_mul_330);
  tcase_add_test(tc, s21_mul_331);
  tcase_add_test(tc, s21_mul_332);
  tcase_add_test(tc, s21_mul_333);
  tcase_add_test(tc, s21_mul_334);
  tcase_add_test(tc, s21_mul_335);
  tcase_add_test(tc, s21_mul_336);
  tcase_add_test(tc, s21_mul_337);
  tcase_add_test(tc, s21_mul_338);
  tcase_add_test(tc, s21_mul_339);
  tcase_add_test(tc, s21_mul_340);
  tcase_add_test(tc, s21_mul_341);
  tcase_add_test(tc, s21_mul_342);
  tcase_add_test(tc, s21_mul_343);
  tcase_add_test(tc, s21_mul_344);
  tcase_add_test(tc, s21_mul_346);
  tcase_add_test(tc, s21_mul_347);
  tcase_add_test(tc, s21_mul_348);
  tcase_add_test(tc, s21_mul_349);
  tcase_add_test(tc, s21_mul_350);
  tcase_add_test(tc, s21_mul_351);
  tcase_add_test(tc, s21_mul_352);
  tcase_add_test(tc, s21_mul_353);
  tcase_add_test(tc, s21_mul_354);
  tcase_add_test(tc, s21_mul_355);
  tcase_add_test(tc, s21_mul_356);
  tcase_add_test(tc, s21_mul_357);
  tcase_add_test(tc, s21_mul_358);
  tcase_add_test(tc, s21_mul_359);
  tcase_add_test(tc, s21_mul_360);
  tcase_add_test(tc, s21_mul_361);
  tcase_add_test(tc, s21_mul_362);
  tcase_add_test(tc, s21_mul_363);
  tcase_add_test(tc, s21_mul_365);
  tcase_add_test(tc, s21_mul_366);
  tcase_add_test(tc, s21_mul_367);
  tcase_add_test(tc, s21_mul_368);
  tcase_add_test(tc, s21_mul_369);
  tcase_add_test(tc, s21_mul_370);
  tcase_add_test(tc, s21_mul_371);
  tcase_add_test(tc, s21_mul_372);
  tcase_add_test(tc, s21_mul_373);
  tcase_add_test(tc, s21_mul_374);
  tcase_add_test(tc, s21_mul_375);
  tcase_add_test(tc, s21_mul_376);
  tcase_add_test(tc, s21_mul_377);
  tcase_add_test(tc, s21_mul_378);
  tcase_add_test(tc, s21_mul_379);
  tcase_add_test(tc, s21_mul_380);
  tcase_add_test(tc, s21_mul_381);
  tcase_add_test(tc, s21_mul_382);
  tcase_add_test(tc, s21_mul_383);
  tcase_add_test(tc, s21_mul_384);
  tcase_add_test(tc, s21_mul_385);
  tcase_add_test(tc, s21_mul_386);
  tcase_add_test(tc, s21_mul_387);
  tcase_add_test(tc, s21_mul_388);
  tcase_add_test(tc, s21_mul_389);
  tcase_add_test(tc, s21_mul_390);
  tcase_add_test(tc, s21_mul_391);
  tcase_add_test(tc, s21_mul_392);
  tcase_add_test(tc, s21_mul_393);
  tcase_add_test(tc, s21_mul_394);
  tcase_add_test(tc, s21_mul_395);
  tcase_add_test(tc, s21_mul_396);
  tcase_add_test(tc, s21_mul_397);
  tcase_add_test(tc, s21_mul_398);
  tcase_add_test(tc, s21_mul_400);
  tcase_add_test(tc, s21_mul_401);
  tcase_add_test(tc, s21_mul_402);
  tcase_add_test(tc, s21_mul_403);
  tcase_add_test(tc, s21_mul_404);
  tcase_add_test(tc, s21_mul_405);
  tcase_add_test(tc, s21_mul_406);
  tcase_add_test(tc, s21_mul_407);
  tcase_add_test(tc, s21_mul_408);
  tcase_add_test(tc, s21_mul_409);
  tcase_add_test(tc, s21_mul_410);
  tcase_add_test(tc, s21_mul_411);
  tcase_add_test(tc, s21_mul_412);
  tcase_add_test(tc, s21_mul_413);
  tcase_add_test(tc, s21_mul_414);
  tcase_add_test(tc, s21_mul_415);
  tcase_add_test(tc, s21_mul_416);
  tcase_add_test(tc, s21_mul_417);
  tcase_add_test(tc, s21_mul_418);
  tcase_add_test(tc, s21_mul_419);
  tcase_add_test(tc, s21_mul_420);
  tcase_add_test(tc, s21_mul_421);
  tcase_add_test(tc, s21_mul_422);
  tcase_add_test(tc, s21_mul_423);
  tcase_add_test(tc, s21_mul_424);
  tcase_add_test(tc, s21_mul_425);
  tcase_add_test(tc, s21_mul_426);
  tcase_add_test(tc, s21_mul_428);
  tcase_add_test(tc, s21_mul_429);
  tcase_add_test(tc, s21_mul_430);
  tcase_add_test(tc, s21_mul_431);
  tcase_add_test(tc, s21_mul_432);
  tcase_add_test(tc, s21_mul_433);
  tcase_add_test(tc, s21_mul_434);
  tcase_add_test(tc, s21_mul_435);
  tcase_add_test(tc, s21_mul_436);
  tcase_add_test(tc, s21_mul_437);
  tcase_add_test(tc, s21_mul_438);
  tcase_add_test(tc, s21_mul_439);
  tcase_add_test(tc, s21_mul_440);
  tcase_add_test(tc, s21_mul_442);
  tcase_add_test(tc, s21_mul_443);
  tcase_add_test(tc, s21_mul_444);
  tcase_add_test(tc, s21_mul_445);
  tcase_add_test(tc, s21_mul_446);
  tcase_add_test(tc, s21_mul_447);
  tcase_add_test(tc, s21_mul_448);
  tcase_add_test(tc, s21_mul_449);
  tcase_add_test(tc, s21_mul_450);
  tcase_add_test(tc, s21_mul_451);
  tcase_add_test(tc, s21_mul_452);
  tcase_add_test(tc, s21_mul_453);
  tcase_add_test(tc, s21_mul_455);
  tcase_add_test(tc, s21_mul_456);
  tcase_add_test(tc, s21_mul_457);
  tcase_add_test(tc, s21_mul_458);
  tcase_add_test(tc, s21_mul_459);
  tcase_add_test(tc, s21_mul_460);
  tcase_add_test(tc, s21_mul_461);
  tcase_add_test(tc, s21_mul_462);
  tcase_add_test(tc, s21_mul_463);
  tcase_add_test(tc, s21_mul_464);
  tcase_add_test(tc, s21_mul_465);
  tcase_add_test(tc, s21_mul_466);
  tcase_add_test(tc, s21_mul_467);
  tcase_add_test(tc, s21_mul_468);
  tcase_add_test(tc, s21_mul_469);
  tcase_add_test(tc, s21_mul_470);
  tcase_add_test(tc, s21_mul_471);
  tcase_add_test(tc, s21_mul_472);
  tcase_add_test(tc, s21_mul_473);
  tcase_add_test(tc, s21_mul_474);
  tcase_add_test(tc, s21_mul_475);
  tcase_add_test(tc, s21_mul_476);
  tcase_add_test(tc, s21_mul_477);
  tcase_add_test(tc, s21_mul_478);
  tcase_add_test(tc, s21_mul_479);
  tcase_add_test(tc, s21_mul_481);
  tcase_add_test(tc, s21_mul_482);
  tcase_add_test(tc, s21_mul_483);
  tcase_add_test(tc, s21_mul_484);
  tcase_add_test(tc, s21_mul_485);
  tcase_add_test(tc, s21_mul_486);
  tcase_add_test(tc, s21_mul_487);
  tcase_add_test(tc, s21_mul_488);
  tcase_add_test(tc, s21_mul_489);
  tcase_add_test(tc, s21_mul_490);
  tcase_add_test(tc, s21_mul_491);
  tcase_add_test(tc, s21_mul_492);
  tcase_add_test(tc, s21_mul_494);
  tcase_add_test(tc, s21_mul_495);
  tcase_add_test(tc, s21_mul_496);
  tcase_add_test(tc, s21_mul_498);
  tcase_add_test(tc, s21_mul_499);
  tcase_add_test(tc, s21_mul_500);
  tcase_add_test(tc, fail_s21_mul_1);
  tcase_add_test(tc, fail_s21_mul_2);
  tcase_add_test(tc, fail_s21_mul_3);
  tcase_add_test(tc, fail_s21_mul_4);
  tcase_add_test(tc, fail_s21_mul_5);
  tcase_add_test(tc, fail_s21_mul_6);
  tcase_add_test(tc, fail_s21_mul_7);
  tcase_add_test(tc, fail_s21_mul_8);
  tcase_add_test(tc, fail_s21_mul_9);
  tcase_add_test(tc, fail_s21_mul_10);
  tcase_add_test(tc, fail_s21_mul_11);
  tcase_add_test(tc, fail_s21_mul_12);
  tcase_add_test(tc, fail_s21_mul_13);
  tcase_add_test(tc, fail_s21_mul_14);
  tcase_add_test(tc, fail_s21_mul_15);
  tcase_add_test(tc, fail_s21_mul_16);
  tcase_add_test(tc, fail_s21_mul_17);
  tcase_add_test(tc, fail_s21_mul_18);
  tcase_add_test(tc, fail_s21_mul_19);
  tcase_add_test(tc, fail_s21_mul_20);
  tcase_add_test(tc, fail_s21_mul_21);
  tcase_add_test(tc, fail_s21_mul_22);
  tcase_add_test(tc, fail_s21_mul_23);
  tcase_add_test(tc, fail_s21_mul_24);
  tcase_add_test(tc, fail_s21_mul_25);
  tcase_add_test(tc, fail_s21_mul_26);
  tcase_add_test(tc, fail_s21_mul_27);
  tcase_add_test(tc, fail_s21_mul_28);
  tcase_add_test(tc, fail_s21_mul_29);
  tcase_add_test(tc, fail_s21_mul_30);
  tcase_add_test(tc, fail_s21_mul_31);
  tcase_add_test(tc, fail_s21_mul_32);
  tcase_add_test(tc, fail_s21_mul_33);
  tcase_add_test(tc, fail_s21_mul_34);
  tcase_add_test(tc, fail_s21_mul_35);
  tcase_add_test(tc, fail_s21_mul_36);
  tcase_add_test(tc, fail_s21_mul_37);
  tcase_add_test(tc, fail_s21_mul_38);
  tcase_add_test(tc, fail_s21_mul_39);
  tcase_add_test(tc, fail_s21_mul_40);
  tcase_add_test(tc, fail_s21_mul_41);
  tcase_add_test(tc, fail_s21_mul_42);
  tcase_add_test(tc, fail_s21_mul_43);
  tcase_add_test(tc, fail_s21_mul_44);
  tcase_add_test(tc, fail_s21_mul_45);
  tcase_add_test(tc, fail_s21_mul_46);
  tcase_add_test(tc, fail_s21_mul_47);
  tcase_add_test(tc, fail_s21_mul_48);
  tcase_add_test(tc, fail_s21_mul_49);
  tcase_add_test(tc, fail_s21_mul_50);
  tcase_add_test(tc, fail_s21_mul_51);
  tcase_add_test(tc, fail_s21_mul_52);
  tcase_add_test(tc, fail_s21_mul_53);
  tcase_add_test(tc, fail_s21_mul_54);
  tcase_add_test(tc, fail_s21_mul_55);
  tcase_add_test(tc, fail_s21_mul_56);
  tcase_add_test(tc, fail_s21_mul_57);
  tcase_add_test(tc, fail_s21_mul_58);
  tcase_add_test(tc, fail_s21_mul_59);
  tcase_add_test(tc, fail_s21_mul_60);
  tcase_add_test(tc, fail_s21_mul_61);
  tcase_add_test(tc, fail_s21_mul_62);
  tcase_add_test(tc, fail_s21_mul_63);
  tcase_add_test(tc, fail_s21_mul_64);
  tcase_add_test(tc, fail_s21_mul_65);
  tcase_add_test(tc, fail_s21_mul_66);
  tcase_add_test(tc, fail_s21_mul_67);
  tcase_add_test(tc, fail_s21_mul_68);
  tcase_add_test(tc, fail_s21_mul_69);
  tcase_add_test(tc, fail_s21_mul_70);
  tcase_add_test(tc, fail_s21_mul_71);
  tcase_add_test(tc, fail_s21_mul_72);
  tcase_add_test(tc, fail_s21_mul_73);
  tcase_add_test(tc, fail_s21_mul_74);
  tcase_add_test(tc, fail_s21_mul_75);
  tcase_add_test(tc, fail_s21_mul_76);
  tcase_add_test(tc, fail_s21_mul_77);
  tcase_add_test(tc, fail_s21_mul_78);
  tcase_add_test(tc, fail_s21_mul_79);
  tcase_add_test(tc, fail_s21_mul_80);
  tcase_add_test(tc, fail_s21_mul_81);
  tcase_add_test(tc, fail_s21_mul_82);
  tcase_add_test(tc, fail_s21_mul_83);
  tcase_add_test(tc, fail_s21_mul_84);
  tcase_add_test(tc, fail_s21_mul_85);
  tcase_add_test(tc, fail_s21_mul_86);
  tcase_add_test(tc, fail_s21_mul_87);
  tcase_add_test(tc, fail_s21_mul_88);
  tcase_add_test(tc, fail_s21_mul_89);
  tcase_add_test(tc, fail_s21_mul_90);
  tcase_add_test(tc, fail_s21_mul_91);
  tcase_add_test(tc, fail_s21_mul_92);
  tcase_add_test(tc, fail_s21_mul_93);
  tcase_add_test(tc, fail_s21_mul_94);
  tcase_add_test(tc, fail_s21_mul_95);
  tcase_add_test(tc, fail_s21_mul_96);
  tcase_add_test(tc, fail_s21_mul_97);
  tcase_add_test(tc, fail_s21_mul_98);
  tcase_add_test(tc, fail_s21_mul_99);
  tcase_add_test(tc, fail_s21_mul_100);
  tcase_add_test(tc, fail_s21_mul_101);
  tcase_add_test(tc, fail_s21_mul_102);
  tcase_add_test(tc, fail_s21_mul_103);
  tcase_add_test(tc, fail_s21_mul_105);
  tcase_add_test(tc, fail_s21_mul_106);
  tcase_add_test(tc, fail_s21_mul_107);
  tcase_add_test(tc, fail_s21_mul_108);
  tcase_add_test(tc, fail_s21_mul_109);
  tcase_add_test(tc, fail_s21_mul_110);
  tcase_add_test(tc, fail_s21_mul_111);
  tcase_add_test(tc, fail_s21_mul_112);
  tcase_add_test(tc, fail_s21_mul_113);
  tcase_add_test(tc, fail_s21_mul_114);
  tcase_add_test(tc, fail_s21_mul_115);
  tcase_add_test(tc, fail_s21_mul_116);
  tcase_add_test(tc, fail_s21_mul_117);
  tcase_add_test(tc, fail_s21_mul_118);
  tcase_add_test(tc, fail_s21_mul_119);
  tcase_add_test(tc, fail_s21_mul_120);
  tcase_add_test(tc, fail_s21_mul_121);
  tcase_add_test(tc, fail_s21_mul_122);
  tcase_add_test(tc, fail_s21_mul_123);
  tcase_add_test(tc, fail_s21_mul_124);
  tcase_add_test(tc, fail_s21_mul_125);
  tcase_add_test(tc, fail_s21_mul_126);
  tcase_add_test(tc, fail_s21_mul_127);
  tcase_add_test(tc, fail_s21_mul_128);
  tcase_add_test(tc, fail_s21_mul_129);
  tcase_add_test(tc, fail_s21_mul_130);
  tcase_add_test(tc, fail_s21_mul_131);
  tcase_add_test(tc, fail_s21_mul_132);
  tcase_add_test(tc, fail_s21_mul_133);
  tcase_add_test(tc, fail_s21_mul_134);
  tcase_add_test(tc, fail_s21_mul_135);
  tcase_add_test(tc, fail_s21_mul_136);
  tcase_add_test(tc, fail_s21_mul_137);
  tcase_add_test(tc, fail_s21_mul_138);
  tcase_add_test(tc, fail_s21_mul_139);
  tcase_add_test(tc, fail_s21_mul_140);
  tcase_add_test(tc, fail_s21_mul_141);
  tcase_add_test(tc, fail_s21_mul_142);
  tcase_add_test(tc, fail_s21_mul_143);
  tcase_add_test(tc, fail_s21_mul_144);
  tcase_add_test(tc, fail_s21_mul_145);
  tcase_add_test(tc, fail_s21_mul_146);
  tcase_add_test(tc, fail_s21_mul_147);
  tcase_add_test(tc, fail_s21_mul_148);
  tcase_add_test(tc, fail_s21_mul_149);
  tcase_add_test(tc, fail_s21_mul_150);
  tcase_add_test(tc, fail_s21_mul_151);
  tcase_add_test(tc, fail_s21_mul_152);
  tcase_add_test(tc, fail_s21_mul_153);
  tcase_add_test(tc, fail_s21_mul_154);
  tcase_add_test(tc, fail_s21_mul_155);
  tcase_add_test(tc, fail_s21_mul_156);
  tcase_add_test(tc, fail_s21_mul_157);
  tcase_add_test(tc, fail_s21_mul_158);
  tcase_add_test(tc, fail_s21_mul_159);
  tcase_add_test(tc, fail_s21_mul_160);
  tcase_add_test(tc, fail_s21_mul_161);
  tcase_add_test(tc, fail_s21_mul_162);
  tcase_add_test(tc, fail_s21_mul_163);
  tcase_add_test(tc, fail_s21_mul_164);
  tcase_add_test(tc, fail_s21_mul_165);

  // srunner_run_all(sr, CK_ENV);
  // nf = srunner_ntests_failed(sr);
  // srunner_free(sr);

  return c;
}