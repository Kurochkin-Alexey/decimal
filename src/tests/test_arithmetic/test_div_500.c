#include "../test_suite.h"

START_TEST(s21_div_1) {
  // -5436561167617324494944346
  s21_decimal dec_1 = {{0xac5cf85a, 0x9249d466, 0x47f3c, 0x80000000}};
  // 16579685267346
  s21_decimal dec_2 = {{0x42403792, 0xf14, 0x0, 0x0}};
  // -327904968034.87176690591640340
  s21_decimal dec_check = {{0xac3cab14, 0x8f9cfe6f, 0x69f3a9c9, 0x80110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_2) {
  // 4224.70474227
  s21_decimal dec_1 = {{0x5d33d9f3, 0x62, 0x0, 0x80000}};
  // -7.095854102301
  s21_decimal dec_2 = {{0x21dcf71d, 0x674, 0x0, 0x800c0000}};
  // -595.37649469146197435414378052
  s21_decimal dec_check = {{0x3bc67644, 0xf4d9140e, 0xc06063ac, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_3) {
  // 33111579
  s21_decimal dec_1 = {{0x1f93e1b, 0x0, 0x0, 0x0}};
  // -9709.9715211680304
  s21_decimal dec_2 = {{0x30fbda30, 0x158f7ad, 0x0, 0x800d0000}};
  // -3410.0593320810221114145627186
  s21_decimal dec_check = {{0x23cbdc32, 0x12c778a3, 0x6e2f5984, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_4) {
  // -1342070
  s21_decimal dec_1 = {{0x147a76, 0x0, 0x0, 0x80000000}};
  // -3
  s21_decimal dec_2 = {{0x3, 0x0, 0x0, 0x80000000}};
  // 447356.66666666666666666666667
  s21_decimal dec_check = {{0xdfaaaaab, 0x611e46ac, 0x908c79e5, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_6) {
  // 9697998311140793677
  s21_decimal dec_1 = {{0xefe29d4d, 0x86963614, 0x0, 0x0}};
  // 62491435642.9317
  s21_decimal dec_2 = {{0x363ae205, 0x2385b, 0x0, 0x40000}};
  // 155189238.51508151055889769178
  s21_decimal dec_check = {{0xe4d8a2da, 0xb8dc5cb5, 0x3224f3f3, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_9) {
  // 3694862155369411370400562
  s21_decimal dec_1 = {{0x1929bb32, 0xe0f8a9c8, 0x30e6a, 0x0}};
  // -269021193789827480.7175072
  s21_decimal dec_2 = {{0x460157a0, 0xae6ea4c3, 0x239ac, 0x80070000}};
  // -13734464.944260185198392983020
  s21_decimal dec_check = {{0x5ec73dec, 0x864f1e97, 0x2c60e214, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_10) {
  // -95444692180742702750312670
  s21_decimal dec_1 = {{0x27fd28de, 0x21776d85, 0x4ef333, 0x80000000}};
  // -4475750381.9984461580
  s21_decimal dec_2 = {{0xbf5cdf0c, 0x6d229896, 0x2, 0x800a0000}};
  // 21324847016630570.930094976257
  s21_decimal dec_check = {{0x5b9fad01, 0x2ae77b90, 0x44e78001, 0xc0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_11) {
  // 89375081938468965
  s21_decimal dec_1 = {{0xdab6c065, 0x13d8629, 0x0, 0x0}};
  // 47444
  s21_decimal dec_2 = {{0xb954, 0x0, 0x0, 0x0}};
  // 1883801575298.6460880195599022
  s21_decimal dec_check = {{0xc400baae, 0x3c36516a, 0x3cde7100, 0x100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_12) {
  // 7605763414693519743068770
  s21_decimal dec_1 = {{0x8d1d2a62, 0x42c91a21, 0x64a95, 0x0}};
  // 105090310746403581.307776
  s21_decimal dec_2 = {{0x5179ab80, 0xf5087f86, 0x1640, 0x60000}};
  // 72373593.347223073912226885239
  s21_decimal dec_check = {{0xfb1cae77, 0xe1d058c3, 0xe9da0884, 0x150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_13) {
  // 5349191679374
  s21_decimal dec_1 = {{0x74ab7d8e, 0x4dd, 0x0, 0x0}};
  // -832271871
  s21_decimal dec_2 = {{0x319b75ff, 0x0, 0x0, 0x80000000}};
  // -6427.2167133881183399985411738
  s21_decimal dec_check = {{0x736df69a, 0xd863aac1, 0xcfacb0c9, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_15) {
  // -9569172222018
  s21_decimal dec_1 = {{0xff1c7042, 0x8b3, 0x0, 0x80000000}};
  // 815.6424
  s21_decimal dec_2 = {{0x7c7508, 0x0, 0x0, 0x40000}};
  // -11732068149.005005134603105479
  s21_decimal dec_check = {{0x99c634c7, 0xbeb5c15a, 0x25e88a10, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_16) {
  // -5074919482691422.70285844
  s21_decimal dec_1 = {{0xb4281814, 0x31927f34, 0x6b77, 0x80080000}};
  // 7310505
  s21_decimal dec_2 = {{0x6f8ca9, 0x0, 0x0, 0x0}};
  // -694195473.86827896333542484411
  s21_decimal dec_check = {{0x574de9bb, 0x7ceb095a, 0xe04e80f4, 0x80140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_17) {
  // 124404330951585689926796308
  s21_decimal dec_1 = {{0xc4d68414, 0x4b51b917, 0x66e7a4, 0x0}};
  // -5580390498959631142.44554
  s21_decimal dec_2 = {{0xf62289ca, 0x5b85dec6, 0x762b, 0x80050000}};
  // -22293122.851309197927803454632
  s21_decimal dec_check = {{0x4aaf04a8, 0x58023697, 0x48087063, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_18) {
  // -1003945443.052678007
  s21_decimal dec_1 = {{0xb306eb77, 0xdeebb0f, 0x0, 0x80090000}};
  // 680.1641926402319
  s21_decimal dec_2 = {{0xaae9a10f, 0x182a0e, 0x0, 0xd0000}};
  // -1476033.9546185253806628910573
  s21_decimal dec_check = {{0x828fb5ed, 0x21405456, 0x2fb1777a, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_19) {
  // 1844693184560734244
  s21_decimal dec_1 = {{0x8153a024, 0x1999aaad, 0x0, 0x0}};
  // -0.7
  s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x80010000}};
  // -2635275977943906062.8571428571
  s21_decimal dec_check = {{0x1a8816db, 0x315cd293, 0x55267df2, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_20) {
  // 68567166109937
  s21_decimal dec_1 = {{0x899448f1, 0x3e5c, 0x0, 0x0}};
  // -536.946271
  s21_decimal dec_2 = {{0x2001265f, 0x0, 0x0, 0x80060000}};
  // -127698374703.74573101374606622
  s21_decimal dec_check = {{0xfd918d1e, 0x6222eeb1, 0x2942f644, 0x80110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_21) {
  // -4494319717259638805304840
  s21_decimal dec_1 = {{0x11131608, 0x8f60693f, 0x3b7b5, 0x80000000}};
  // -20910068969428100549512.747536
  s21_decimal dec_2 = {{0xa7df5a10, 0x2c7d1b36, 0x43906756, 0x80060000}};
  // 214.93567160541797092819857352
  s21_decimal dec_check = {{0xa1bdefc8, 0x7f0215bc, 0x45730fe2, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_22) {
  // -438199409926611159939.77021
  s21_decimal dec_1 = {{0x7939f0bd, 0xc2d8dba2, 0x243f3b, 0x80050000}};
  // 663848.5
  s21_decimal dec_2 = {{0x654b95, 0x0, 0x0, 0x10000}};
  // -660089478136368.70451581981431
  s21_decimal dec_check = {{0x24f092f7, 0x26c020ef, 0xd5495267, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_23) {
  // -37217453524.4523459989691
  s21_decimal dec_1 = {{0x2f4650bb, 0x9f3a43b2, 0x4ecf, 0x800d0000}};
  // -970.0862881408764707059
  s21_decimal dec_2 = {{0x55c580f3, 0xe2844144, 0x20d, 0x80130000}};
  // 38365095.950152845252069318981
  s21_decimal dec_check = {{0x32aa6145, 0xd6a9b6e8, 0x7bf6dd12, 0x150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_24) {
  // 9973.8244651492
  s21_decimal dec_1 = {{0x1ea499e4, 0x5ab6, 0x0, 0xa0000}};
  // -2.574
  s21_decimal dec_2 = {{0xa0e, 0x0, 0x0, 0x80030000}};
  // -3874.8346795451437451437451437
  s21_decimal dec_check = {{0xf708a8ad, 0xcae1e0ac, 0x7d33e198, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_25) {
  // -900013807604089
  s21_decimal dec_1 = {{0xcb4b9179, 0x3328e, 0x0, 0x80000000}};
  // 54196314448042
  s21_decimal dec_2 = {{0x901220aa, 0x314a, 0x0, 0x0}};
  // -16.606550035186103415356768609
  s21_decimal dec_check = {{0xc83fc161, 0x482a9c0f, 0x35a89dc1, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_27) {
  // -6879927806566479657710121389.2
  s21_decimal dec_1 = {{0x532770c4, 0x361e974b, 0xde4d6dd1, 0x80010000}};
  // -0.495
  s21_decimal dec_2 = {{0x1ef, 0x0, 0x0, 0x80030000}};
  // 13898844053669655874161861392
  s21_decimal dec_check = {{0x5e5fe310, 0xe6bb30aa, 0x2ce8dab5, 0x0}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_28) {
  // 31820590.6190
  s21_decimal dec_1 = {{0x168ccd0e, 0x4a, 0x0, 0x40000}};
  // -6.95963
  s21_decimal dec_2 = {{0xa9e9b, 0x0, 0x0, 0x80050000}};
  // -4572167.0001135117815171208814
  s21_decimal dec_check = {{0x673f566e, 0x3eab3f77, 0x93bc1439, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_29) {
  // -5809928081933.6718631
  s21_decimal dec_1 = {{0xfe3b2927, 0x264a1c14, 0x3, 0x80070000}};
  // -23405
  s21_decimal dec_2 = {{0x5b6d, 0x0, 0x0, 0x80000000}};
  // 248234483.31269693924802392651
  s21_decimal dec_check = {{0x7739724b, 0x779b4f67, 0x503579a6, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_30) {
  // 939887972.87449926354292
  s21_decimal dec_1 = {{0xaccc574, 0x2495c6f2, 0x13e7, 0xe0000}};
  // 0.22907802493429878
  s21_decimal dec_2 = {{0x6634a876, 0x516286, 0x0, 0x110000}};
  // 4102916345.3983238811035290921
  s21_decimal dec_check = {{0x95f6cd29, 0x9a83dc0d, 0x8492874f, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_31) {
  // 10529327293317374843390.5753
  s21_decimal dec_1 = {{0x2d7f6859, 0xc35b5c65, 0x5718b7, 0x40000}};
  // 3125778966691471052255
  s21_decimal dec_2 = {{0x80b24ddf, 0x72e5b11e, 0xa9, 0x0}};
  // 3.3685450588536986933504841303
  s21_decimal dec_check = {{0xe0851657, 0x7655bcec, 0x6cd7f39f, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_32) {
  // 328230694409397
  s21_decimal dec_1 = {{0x29f1d4b5, 0x12a86, 0x0, 0x0}};
  // -250153270851.328334188
  s21_decimal dec_2 = {{0x6f80d96c, 0x8f92f278, 0xd, 0x80090000}};
  // -1312.1183396577365534404357852
  s21_decimal dec_check = {{0xf3c9aedc, 0x351e6ca6, 0x2a6596a9, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_34) {
  // 6680844186247539174.5061
  s21_decimal dec_1 = {{0x462cbc25, 0xb16143a0, 0xe25, 0x40000}};
  // 3935.36
  s21_decimal dec_2 = {{0x60140, 0x0, 0x0, 0x20000}};
  // 1697644989593719.2974736999919
  s21_decimal dec_check = {{0x866cc5ef, 0xe9cf67f1, 0x36da9718, 0xd0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_35) {
  // 7303925
  s21_decimal dec_1 = {{0x6f72f5, 0x0, 0x0, 0x0}};
  // 627695.556498845622
  s21_decimal dec_2 = {{0x70346fb6, 0x8b605c8, 0x0, 0xc0000}};
  // 11.636094798471673507603156234
  s21_decimal dec_check = {{0xdb1e0d0a, 0xfccdac33, 0x259926ea, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_36) {
  // -9915775654785294070919758210
  s21_decimal dec_1 = {{0x303c8182, 0x5700b541, 0x200a232b, 0x80000000}};
  // -91.0927215873955490
  s21_decimal dec_2 = {{0xfe6716a2, 0xca44379, 0x0, 0x80100000}};
  // 108853654627850471720316046.81
  s21_decimal dec_check = {{0x827667c9, 0x270afb73, 0x232c29cc, 0x20000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_37) {
  // -433643483586775397.3155723368
  s21_decimal dec_1 = {{0x70cd7868, 0x7e965fe9, 0xe0303cb, 0x800a0000}};
  // -223924739578.67538
  s21_decimal dec_2 = {{0x1fe6a012, 0x4f8dd6, 0x0, 0x80050000}};
  // 1936559.0617753777815065896959
  s21_decimal dec_check = {{0x2456a7ff, 0xf6307d47, 0x3e92d752, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_38) {
  // -9525904951986620103074
  s21_decimal dec_1 = {{0xa0fa79a2, 0x667cd36c, 0x204, 0x80000000}};
  // -263153624480855724015
  s21_decimal dec_2 = {{0xb9f18fef, 0x43fd7b37, 0xe, 0x80000000}};
  // 36.199026218161111633796733589
  s21_decimal dec_check = {{0x540b1a95, 0x6126f28b, 0x74f721f7, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_39) {
  // -53630904391552664302322741
  s21_decimal dec_1 = {{0x26790435, 0x27164f9e, 0x2c5cc9, 0x80000000}};
  // 2694505297.25
  s21_decimal dec_2 = {{0xbc80cbbd, 0x3e, 0x0, 0x20000}};
  // -19903803657869266.154890555578
  s21_decimal dec_check = {{0x600970ba, 0x544f9668, 0x40500a5e, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_40) {
  // -76855262779809.5554
  s21_decimal dec_1 = {{0x31936c2, 0xaaa728b, 0x0, 0x80040000}};
  // -4582524770.3477623
  s21_decimal dec_2 = {{0xeb1c2d77, 0xa2cdd1, 0x0, 0x80070000}};
  // 16771.379671991844319282287401
  s21_decimal dec_check = {{0xfc4b5329, 0xcc321575, 0x3630f5c9, 0x180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_41) {
  // -777950327
  s21_decimal dec_1 = {{0x2e5e9477, 0x0, 0x0, 0x80000000}};
  // 540694
  s21_decimal dec_2 = {{0x84016, 0x0, 0x0, 0x0}};
  // -1438.7996297351181999430361720
  s21_decimal dec_check = {{0x6412e278, 0x2a4280fd, 0x2e7d78ba, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_43) {
  // 19886669315921874
  s21_decimal dec_1 = {{0x45757d2, 0x46a6d2, 0x0, 0x0}};
  // -7850.37309408079
  s21_decimal dec_2 = {{0xbdf6734f, 0x2c9fc, 0x0, 0x800b0000}};
  // -2533213272489.7489693393103822
  s21_decimal dec_check = {{0xa1952bce, 0xb3851e5a, 0x51da3fc2, 0x80100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_44) {
  // -249170653615608
  s21_decimal dec_1 = {{0x904c15f8, 0xe29e, 0x0, 0x80000000}};
  // -9537642.076879494
  s21_decimal dec_2 = {{0x57fcba86, 0x21e26f, 0x0, 0x80090000}};
  // 26124974.244905942085957838933
  s21_decimal dec_check = {{0x18a7e855, 0x9f6c20e1, 0x546a127b, 0x150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_45) {
  // 963921894398763999
  s21_decimal dec_1 = {{0x1adc23df, 0xd6089db, 0x0, 0x0}};
  // 0.2116161464960920
  s21_decimal dec_2 = {{0x3c680798, 0x784a3, 0x0, 0x100000}};
  // 4555048895650148936.4574587509
  s21_decimal dec_check = {{0xb28aca75, 0x3885ff3d, 0x932e7b3a, 0xa0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_46) {
  // 749101493459561
  s21_decimal dec_1 = {{0xc86b1a69, 0x2a94d, 0x0, 0x0}};
  // -141689.053733602111
  s21_decimal dec_2 = {{0x945a433f, 0x1f76171, 0x0, 0x800c0000}};
  // -5286939772.1294024206373333517
  s21_decimal dec_check = {{0x8c03aa0d, 0x5f11504c, 0xaad48a71, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_47) {
  // -345170027566110508218014490
  s21_decimal dec_1 = {{0x78bf5b1a, 0xb02e1118, 0x11d8498, 0x80000000}};
  // 79.871376313741
  s21_decimal dec_2 = {{0x81034d8d, 0x48a4, 0x0, 0xc0000}};
  // -4321573553587654480146556.9561
  s21_decimal dec_check = {{0x7f6e1119, 0xad857f34, 0x8ba337f5, 0x80040000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_48) {
  // -19338666368151126953177
  s21_decimal dec_1 = {{0x11764cd9, 0x59e88930, 0x418, 0x80000000}};
  // -5106088574720541530652
  s21_decimal dec_2 = {{0xda7d1a1c, 0xcd36b97d, 0x114, 0x80000000}};
  // 3.7873738547924701156375725646
  s21_decimal dec_check = {{0x7217064e, 0xb0bde83f, 0x7a606c18, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_49) {
  // 57614273212643487330444
  s21_decimal dec_1 = {{0xaead308c, 0x46a88965, 0xc33, 0x0}};
  // -56658305
  s21_decimal dec_2 = {{0x3608981, 0x0, 0x0, 0x80000000}};
  // -1016872516970698.0703083863875
  s21_decimal dec_check = {{0xda829f43, 0x52cef7f, 0x20db5f50, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_51) {
  // -70144329728838
  s21_decimal dec_1 = {{0xbfdb4346, 0x3fcb, 0x0, 0x80000000}};
  // -2.6
  s21_decimal dec_2 = {{0x1a, 0x0, 0x0, 0x80010000}};
  // 26978588357245.384615384615385
  s21_decimal dec_check = {{0x594c89d9, 0x60399d06, 0x572c2a4d, 0xf0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_52) {
  // -713751805012236306540601
  s21_decimal dec_1 = {{0x3ae0e839, 0x9018ef7e, 0x9724, 0x80000000}};
  // 57011279706121719.6
  s21_decimal dec_2 = {{0x7ebcfbac, 0x7e97291, 0x0, 0x10000}};
  // -12519484.015995444071008898552
  s21_decimal dec_check = {{0xc29d0df8, 0x6d4f3e57, 0x2873dfdc, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_54) {
  // -4508254669995571841709952
  s21_decimal dec_1 = {{0x9b6db780, 0xf9b19c08, 0x3baa8, 0x80000000}};
  // 59733627031167
  s21_decimal dec_2 = {{0xd19ece7f, 0x3653, 0x0, 0x0}};
  // -75472642363.459965308451724541
  s21_decimal dec_check = {{0x4b509cfd, 0xaf2a62f2, 0xf3dd81ac, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_55) {
  // 9191415545827633190019.8
  s21_decimal dec_1 = {{0x50104d26, 0xad255f3c, 0x1376, 0x10000}};
  // 756
  s21_decimal dec_2 = {{0x2f4, 0x0, 0x0, 0x0}};
  // 12157957071200573002.671693122
  s21_decimal dec_check = {{0x95a39d42, 0x7aa38d30, 0x2748d38d, 0x90000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_56) {
  // -20170106283696172084419351
  s21_decimal dec_1 = {{0x12e2db17, 0xa710f284, 0x10af2f, 0x80000000}};
  // -9046.70753089
  s21_decimal dec_2 = {{0xa2943141, 0xd2, 0x0, 0x80080000}};
  // 2229552156386763468768.3035458
  s21_decimal dec_check = {{0x75b38142, 0xcfe81502, 0x480a6c55, 0x70000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_58) {
  // 9344546169108769687
  s21_decimal dec_1 = {{0x34f72b97, 0x81ae7f3b, 0x0, 0x0}};
  // 47.092667033426
  s21_decimal dec_2 = {{0x9db0a752, 0x2ad4, 0x0, 0xc0000}};
  // 198428901095707432.30522245359
  s21_decimal dec_check = {{0xb910c0ef, 0x42672670, 0x401da76c, 0xb0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_60) {
  // 530704.63
  s21_decimal dec_1 = {{0x329ca7f, 0x0, 0x0, 0x20000}};
  // 189
  s21_decimal dec_2 = {{0xbd, 0x0, 0x0, 0x0}};
  // 2807.9610052910052910052910053
  s21_decimal dec_check = {{0x5713a3e5, 0x18759a45, 0x5abae8b7, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_61) {
  // 223896498861.370334520179958
  s21_decimal dec_1 = {{0x78aa7cf6, 0x861c54c7, 0xb933ed, 0xf0000}};
  // -7.0
  s21_decimal dec_2 = {{0x46, 0x0, 0x0, 0x80010000}};
  // -31985214123.052904931454279714
  s21_decimal dec_check = {{0x55fee022, 0xfb3d062b, 0x67598c8b, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_62) {
  // 7475114253.05393173089
  s21_decimal dec_1 = {{0x79e71261, 0x85ce10d4, 0x28, 0xb0000}};
  // -3853583.6127193229665
  s21_decimal dec_2 = {{0x3c046961, 0x16cacac9, 0x2, 0x800d0000}};
  // -1939.7825515920326660123547787
  s21_decimal dec_check = {{0xbac8588b, 0x4af38754, 0x3ead8154, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_63) {
  // 88349740476717075657
  s21_decimal dec_1 = {{0xd8ac0cc9, 0xca1954dd, 0x4, 0x0}};
  // 47771963.8822893867
  s21_decimal dec_2 = {{0xfe44392b, 0x6a1337a, 0x0, 0xa0000}};
  // 1849405661747.7931269860514610
  s21_decimal dec_check = {{0x501a5b32, 0x2310c511, 0x3bc1ecd2, 0x100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_64) {
  // -845764581592727608640
  s21_decimal dec_1 = {{0xe168dd40, 0xd95765e7, 0x2d, 0x80000000}};
  // -73
  s21_decimal dec_2 = {{0x49, 0x0, 0x0, 0x80000000}};
  // 11585816186201748063.561643836
  s21_decimal dec_check = {{0x9c5ef73c, 0xf47333ab, 0x256f9001, 0x90000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_65) {
  // -6920864324567395212424209
  s21_decimal dec_1 = {{0x4fcf7411, 0xce8b0352, 0x5b98c, 0x80000000}};
  // 35765768209769559049.4346
  s21_decimal dec_2 = {{0x8c8cb08a, 0xa96b843d, 0x4bbc, 0x40000}};
  // -193505.26134307760053527210266
  s21_decimal dec_check = {{0xbba3691a, 0xad7dc223, 0x3e86614b, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_69) {
  // -495331679859300041763625609
  s21_decimal dec_1 = {{0xf2e89a89, 0x2b935da7, 0x199ba90, 0x80000000}};
  // -1.3
  s21_decimal dec_2 = {{0xd, 0x0, 0x0, 0x80010000}};
  // 381024369122538493664327391.54
  s21_decimal dec_check = {{0x736e6f52, 0xdce55f63, 0x7b1d98db, 0x20000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_70) {
  // 42872009678860.728877678
  s21_decimal dec_1 = {{0x1273426e, 0x18a73948, 0x914, 0x90000}};
  // 2672
  s21_decimal dec_2 = {{0xa70, 0x0, 0x0, 0x0}};
  // 16044913801.968835657813622754
  s21_decimal dec_check = {{0xb23a7fe2, 0x1265a259, 0x33d80aa8, 0x120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_71) {
  // -5514137235917.792676766
  s21_decimal dec_1 = {{0x825d0b9e, 0xec06c8ea, 0x12a, 0x80090000}};
  // -860791
  s21_decimal dec_2 = {{0xd2277, 0x0, 0x0, 0x80000000}};
  // 6405895.5494629854131444218167
  s21_decimal dec_check = {{0xd0e37937, 0xb8b3fde1, 0xcefc5377, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_72) {
  // -865196270006678
  s21_decimal dec_1 = {{0x3455b196, 0x312e4, 0x0, 0x80000000}};
  // -76983633827846.15
  s21_decimal dec_2 = {{0xe6c86267, 0x1b599e, 0x0, 0x80020000}};
  // 11.238703955459729985500827838
  s21_decimal dec_check = {{0xdfcb50be, 0x38b71415, 0x24507022, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_73) {
  // 288862970507447993
  s21_decimal dec_1 = {{0x59dc4eb9, 0x4023f57, 0x0, 0x0}};
  // -1510838172.920148001
  s21_decimal dec_2 = {{0x42017021, 0x14f79350, 0x0, 0x80090000}};
  // -191193852.31651490996844471196
  s21_decimal dec_check = {{0xa23a39c, 0x3cb88947, 0x3dc72f4e, 0x80140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_74) {
  // 3042421219355863222955065
  s21_decimal dec_1 = {{0x8381ac39, 0xfc1aadb0, 0x28441, 0x0}};
  // 2561173038981
  s21_decimal dec_2 = {{0x51cf2785, 0x254, 0x0, 0x0}};
  // 1187901470556.7628579490303991
  s21_decimal dec_check = {{0x73050ff7, 0x89c66b4b, 0x26621735, 0x100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_75) {
  // -23956941079661176344726
  s21_decimal dec_1 = {{0x5792d096, 0xb55846a3, 0x512, 0x80000000}};
  // -0.58455
  s21_decimal dec_2 = {{0xe457, 0x0, 0x0, 0x80050000}};
  // 40983561850416861422848.344881
  s21_decimal dec_check = {{0x83188331, 0xb8865a59, 0x846ccecb, 0x60000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_76) {
  // -268504957936562
  s21_decimal dec_1 = {{0x2ea363b2, 0xf434, 0x0, 0x80000000}};
  // -0.749569097360658678609
  s21_decimal dec_2 = {{0x88404351, 0xa25c62a9, 0x28, 0x80150000}};
  // 358212416816550.78036068830249
  s21_decimal dec_check = {{0xb2af0c29, 0x9e72a798, 0x73bea2fa, 0xe0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_77) {
  // 5123691851153881517305
  s21_decimal dec_1 = {{0x3eb94cf9, 0xc1822024, 0x115, 0x0}};
  // 1392000588135289
  s21_decimal dec_2 = {{0x64953b79, 0x4f204, 0x0, 0x0}};
  // 3680811.5562778111431859044648
  s21_decimal dec_check = {{0xc7090128, 0xe9bf6516, 0x76eef5a6, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_78) {
  // 485358371.1
  s21_decimal dec_1 = {{0x214bcf5f, 0x1, 0x0, 0x10000}};
  // -6.17514448715
  s21_decimal dec_2 = {{0xc6bab74b, 0x8f, 0x0, 0x800b0000}};
  // -78598706.817304984944460661048
  s21_decimal dec_check = {{0xddcf8138, 0x4b2d9ade, 0xfdf75392, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_79) {
  // -336399984073760.69415634
  s21_decimal dec_1 = {{0x84fb52d2, 0xa0c27f28, 0x71f, 0x80080000}};
  // 457.24
  s21_decimal dec_2 = {{0xb29c, 0x0, 0x0, 0x20000}};
  // -735718624953.54888932801154755
  s21_decimal dec_check = {{0x32708ec3, 0x903cdea3, 0xedb937e1, 0x80110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_80) {
  // -8.464
  s21_decimal dec_1 = {{0x2110, 0x0, 0x0, 0x80030000}};
  // 0.40898260
  s21_decimal dec_2 = {{0x2700ed4, 0x0, 0x0, 0x80000}};
  // -20.695256962032125572090352988
  s21_decimal dec_check = {{0x7d6ed55c, 0xeb46d4e5, 0x42deb71f, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_81) {
  // -192622809871023080986606.8130
  s21_decimal dec_1 = {{0x3b62e0a2, 0x7759b7f2, 0x63956aa, 0x80040000}};
  // -87156494864589642189
  s21_decimal dec_2 = {{0xf005d9cd, 0xb98a124d, 0x4, 0x80000000}};
  // 2210.0798129880140229845378352
  s21_decimal dec_check = {{0x5c9ae530, 0x4dd1b442, 0x47695a0b, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_82) {
  // -68259.889378117772314935956256
  s21_decimal dec_1 = {{0xaa6a1320, 0xde68074a, 0xdc8f41d1, 0x80180000}};
  // -0.6551361
  s21_decimal dec_2 = {{0x63f741, 0x0, 0x0, 0x80070000}};
  // 104191.92191991522420293425482
  s21_decimal dec_check = {{0xbf08d94a, 0x814ba823, 0x21aa8dc4, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_84) {
  // -3914200006134
  s21_decimal dec_1 = {{0x58803df6, 0x38f, 0x0, 0x80000000}};
  // -92852297.983392787638
  s21_decimal dec_2 = {{0x36d8acb6, 0x895a110, 0x5, 0x800c0000}};
  // 42155.122610256550390758000320
  s21_decimal dec_check = {{0x1ba646c0, 0xc58ab978, 0x8835e66f, 0x180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_85) {
  // -351781024741628566507129087.2
  s21_decimal dec_1 = {{0x1c6559f8, 0xa1cc69a1, 0xb5ddd4b, 0x80010000}};
  // -0.649
  s21_decimal dec_2 = {{0x289, 0x0, 0x0, 0x80030000}};
  // 542035477259828299702818316.18
  s21_decimal dec_check = {{0xee559cc2, 0xbeefc81, 0xaf241fb2, 0x20000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_86) {
  // -82529111656661638862
  s21_decimal dec_1 = {{0x33dddece, 0x79524dcb, 0x4, 0x80000000}};
  // -427637527
  s21_decimal dec_2 = {{0x197d3b17, 0x0, 0x0, 0x80000000}};
  // 192988469079.47262276165954912
  s21_decimal dec_check = {{0xde0bed60, 0x33fcfd8f, 0x3e5ba1cb, 0x110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_87) {
  // -8675643390922455911866
  s21_decimal dec_1 = {{0xea5e0dba, 0x4ebcf283, 0x1d6, 0x80000000}};
  // 33
  s21_decimal dec_2 = {{0x21, 0x0, 0x0, 0x0}};
  // -262898284573407754905.03030303
  s21_decimal dec_check = {{0xfb9bb61f, 0x62d13ea4, 0x54f26fb8, 0x80080000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_88) {
  // 39833652982230999494509
  s21_decimal dec_1 = {{0xba21ef6d, 0x62fbd399, 0x86f, 0x0}};
  // 98343305764560727413.18982483
  s21_decimal dec_2 = {{0x2f4e7b53, 0xcbf58152, 0x1fc6c480, 0x80000}};
  // 405.04691877650474161177844101
  s21_decimal dec_check = {{0x34075985, 0x7af062b3, 0x82e0b222, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_89) {
  // -1150743993081
  s21_decimal dec_1 = {{0xedafdaf9, 0x10b, 0x0, 0x80000000}};
  // -21612056133
  s21_decimal dec_2 = {{0x82dce45, 0x5, 0x0, 0x80000000}};
  // 53.245465678941099574276216785
  s21_decimal dec_check = {{0x6f7957d1, 0x349ca551, 0xac0b9dee, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_90) {
  // 26928800.20914343
  s21_decimal dec_1 = {{0xfd11c0a7, 0x99128, 0x0, 0x80000}};
  // 0.51023
  s21_decimal dec_2 = {{0xc74f, 0x0, 0x0, 0x50000}};
  // 52777767.299342316210336514905
  s21_decimal dec_check = {{0xe2234359, 0x3e7b380e, 0xaa88bef2, 0x150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_91) {
  // 2282815349274
  s21_decimal dec_1 = {{0x8265e21a, 0x213, 0x0, 0x0}};
  // -8189
  s21_decimal dec_2 = {{0x1ffd, 0x0, 0x0, 0x80000000}};
  // -278766070.24960312614482842838
  s21_decimal dec_check = {{0x165394d6, 0xe63aa3ce, 0x5a12fd26, 0x80140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_92) {
  // -5962035387211355
  s21_decimal dec_1 = {{0x89649e5b, 0x152e70, 0x0, 0x80000000}};
  // -2738010101647790.804
  s21_decimal dec_2 = {{0x4c25d2d4, 0x25ff5dae, 0x0, 0x80030000}};
  // 2.1775067168756168782153604533
  s21_decimal dec_check = {{0xcf015db5, 0x84e7bc90, 0x465be9d4, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_94) {
  // 85602094144274327701
  s21_decimal dec_1 = {{0xbb046895, 0xa3f7bb15, 0x4, 0x0}};
  // 362194375088584.5
  s21_decimal dec_2 = {{0x7eab01d5, 0xcde23, 0x0, 0x10000}};
  // 236342.96949901003824097197884
  s21_decimal dec_check = {{0xcd48ff3c, 0xe99a40f2, 0x4c5dd50c, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_95) {
  // -61477024470.1
  s21_decimal dec_1 = {{0x23297c5d, 0x8f, 0x0, 0x80010000}};
  // 581511.74114247
  s21_decimal dec_2 = {{0x60138bc7, 0x34e3, 0x0, 0x80000}};
  // -105719.31763461706066670132352
  s21_decimal dec_check = {{0x60701c80, 0x4403e7ac, 0x2228e5a1, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_96) {
  // 54803540087969380823256
  s21_decimal dec_1 = {{0x8ed3f0d8, 0xe7e68468, 0xb9a, 0x0}};
  // 0.020569580201277444905
  s21_decimal dec_2 = {{0xf40cd329, 0x1d75d435, 0x1, 0x150000}};
  // 2664300367421493798570754.7284
  s21_decimal dec_check = {{0xd2fe1a94, 0x41936a50, 0x5616937b, 0x40000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_97) {
  // -75930132302
  s21_decimal dec_1 = {{0xadc9df4e, 0x11, 0x0, 0x80000000}};
  // -1075
  s21_decimal dec_2 = {{0x433, 0x0, 0x0, 0x80000000}};
  // 70632681.211162790697674418605
  s21_decimal dec_check = {{0x2ab29ad, 0xe1852e04, 0xe439fc08, 0x150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_98) {
  // -431285253659
  s21_decimal dec_1 = {{0x6a9ab61b, 0x64, 0x0, 0x80000000}};
  // -95163
  s21_decimal dec_2 = {{0x173bb, 0x0, 0x0, 0x80000000}};
  // 4532068.6995891260258713995986
  s21_decimal dec_check = {{0xe57e0ad2, 0xf95adcb7, 0x927064c4, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_99) {
  // -21160159584592598
  s21_decimal dec_1 = {{0x936e22d6, 0x4b2d0d, 0x0, 0x80000000}};
  // -737.25457
  s21_decimal dec_2 = {{0x464f611, 0x0, 0x0, 0x80050000}};
  // 28701293210827.568013583150797
  s21_decimal dec_check = {{0x9f416ecd, 0x9dbb0ceb, 0x5cbd273e, 0xf0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_100) {
  // 41240
  s21_decimal dec_1 = {{0xa118, 0x0, 0x0, 0x0}};
  // 120.8915882288
  s21_decimal dec_2 = {{0x79007130, 0x119, 0x0, 0xa0000}};
  // 341.13208871033258412550511581
  s21_decimal dec_check = {{0xe219dbdd, 0x6bda7357, 0x6e39c8f6, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_101) {
  // -29327513732837
  s21_decimal dec_1 = {{0x5809c6e5, 0x1aac, 0x0, 0x80000000}};
  // 9231.32
  s21_decimal dec_2 = {{0xe15fc, 0x0, 0x0, 0x20000}};
  // -3176957762.5775078753634366483
  s21_decimal dec_check = {{0x42183413, 0xa6576cc, 0x66a72dbe, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_104) {
  // 56653235.3757143476759
  s21_decimal dec_1 = {{0x479aa17, 0xb6373e20, 0x1e, 0xd0000}};
  // 382.5
  s21_decimal dec_2 = {{0xef1, 0x0, 0x0, 0x10000}};
  // 148113.03366199829457751633987
  s21_decimal dec_check = {{0xd049f043, 0x594a0a02, 0x2fdb9f7c, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_105) {
  // -4884858703369565.91022
  s21_decimal dec_1 = {{0x5fd26bae, 0x7b1a6ef6, 0x1a, 0x80050000}};
  // 94898450336333.357787334958
  s21_decimal dec_2 = {{0x760f492e, 0x4d0edc8c, 0x4e7f87, 0xc0000}};
  // -51.474588742565812589253968771
  s21_decimal dec_check = {{0x2d454383, 0x1fd7d6de, 0xa652c827, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_106) {
  // -3037845642214.7035351997069
  s21_decimal dec_1 = {{0xb583da8d, 0x6c27ce83, 0x1920e3, 0x800d0000}};
  // 91.915296127302143367
  s21_decimal dec_2 = {{0xf4ae8d87, 0xfb94bad6, 0x4, 0x120000}};
  // -33050490725.801560019716553166
  s21_decimal dec_check = {{0xd7d039ce, 0x54d04c5f, 0x6acab9a4, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_107) {
  // -22966171489
  s21_decimal dec_1 = {{0x58e3f761, 0x5, 0x0, 0x80000000}};
  // -889.60380707699340
  s21_decimal dec_2 = {{0xb32a7a8c, 0x13c0cfe, 0x0, 0x800e0000}};
  // 25816179.411889954481802922386
  s21_decimal dec_check = {{0x118d4992, 0x2ead500f, 0x536aa4a2, 0x150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_108) {
  // -252065821085135376206
  s21_decimal dec_1 = {{0x64a98f4e, 0xaa1db0c6, 0xd, 0x80000000}};
  // -414775517126
  s21_decimal dec_2 = {{0x928c1fc6, 0x60, 0x0, 0x80000000}};
  // 607716248.13275352735265966905
  s21_decimal dec_check = {{0x1709cb39, 0x66bf48a6, 0xc45d1c1e, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_109) {
  // -34126863083.166926247691936
  s21_decimal dec_1 = {{0x36ea06a0, 0xf46a1e75, 0x1c3aa4, 0x800f0000}};
  // 48.520010180856
  s21_decimal dec_2 = {{0xf1f8a8f8, 0x2c20, 0x0, 0xc0000}};
  // -703356469.95869721619681843156
  s21_decimal dec_check = {{0x30917d4, 0xce05b865, 0xe3444897, 0x80140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_110) {
  // 9174319319563873096612618125
  s21_decimal dec_1 = {{0x9afa9f8d, 0xde0a46ad, 0x1da4d1ae, 0x0}};
  // 69.351
  s21_decimal dec_2 = {{0x10ee7, 0x0, 0x0, 0x30000}};
  // 132288205210651224879419447.81
  s21_decimal dec_check = {{0xb7af55cd, 0x6b00d4b6, 0x2abe9fb5, 0x20000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_111) {
  // -16487751273669.9931663964
  s21_decimal dec_1 = {{0xeecf9e5c, 0x722d386, 0x22ea, 0x800a0000}};
  // -568644.0375
  s21_decimal dec_2 = {{0x52f031b7, 0x1, 0x0, 0x80040000}};
  // 28994854.753348210683377472326
  s21_decimal dec_check = {{0x1299d346, 0xb95de99e, 0x5daffb51, 0x150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_112) {
  // 3615570809485739113337.2390684
  s21_decimal dec_1 = {{0xb6731d1c, 0x35b5da55, 0x74d34cff, 0x70000}};
  // 8529119.825265481816
  s21_decimal dec_2 = {{0xb7b0d858, 0x765d854a, 0x0, 0xc0000}};
  // 423909017994503.19921156479720
  s21_decimal dec_check = {{0x680c5ae8, 0x3aabebb6, 0x88f8ee9f, 0xe0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_114) {
  // 9506349908
  s21_decimal dec_1 = {{0x369f6354, 0x2, 0x0, 0x0}};
  // -51337
  s21_decimal dec_2 = {{0xc889, 0x0, 0x0, 0x80000000}};
  // -185175.40775658881508463681166
  s21_decimal dec_check = {{0x83491e8e, 0xe72558ad, 0x3bd559c8, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_117) {
  // -841624299210027747544850
  s21_decimal dec_1 = {{0xb8808f12, 0x8b7036df, 0xb238, 0x80000000}};
  // 8235.7
  s21_decimal dec_2 = {{0x141b5, 0x0, 0x0, 0x10000}};
  // -102192199717088741399.61994730
  s21_decimal dec_check = {{0x6d112dea, 0xb8c162a1, 0x21052400, 0x80080000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_118) {
  // -49298908
  s21_decimal dec_1 = {{0x2f03ddc, 0x0, 0x0, 0x80000000}};
  // -8067
  s21_decimal dec_2 = {{0x1f83, 0x0, 0x0, 0x80000000}};
  // 6111.1823478368662451964794843
  s21_decimal dec_check = {{0x537ad7db, 0xfd69f4a9, 0xc57683fc, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_119) {
  // 15359069824513301
  s21_decimal dec_1 = {{0x1cf87515, 0x3690fe, 0x0, 0x0}};
  // 77990933808
  s21_decimal dec_2 = {{0x289f3530, 0x12, 0x0, 0x0}};
  // 196934.04187626009249026223687
  s21_decimal dec_check = {{0x9dd2e47, 0x3165fd61, 0x3fa2008c, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_120) {
  // 3895842119962702537528
  s21_decimal dec_1 = {{0xc5a26338, 0x31ab970c, 0xd3, 0x0}};
  // 1.30379736368220738019
  s21_decimal dec_2 = {{0x8e011e3, 0x1161df72, 0x7, 0x140000}};
  // 2988073322191722261199.2315920
  s21_decimal dec_check = {{0xc9360810, 0xbbade180, 0x608cc361, 0x70000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_121) {
  // -94023226518655023379474790
  s21_decimal dec_1 = {{0xd2296966, 0x52a1c8a0, 0x4dc631, 0x80000000}};
  // 6006
  s21_decimal dec_2 = {{0x1776, 0x0, 0x0, 0x0}};
  // -15654882870238931631614.184149
  s21_decimal dec_check = {{0x5b0fcad5, 0xe55d7ff4, 0x32956a64, 0x80060000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_122) {
  // -65856670.204208660595289
  s21_decimal dec_1 = {{0x852fc259, 0x18e51322, 0xdf2, 0x800f0000}};
  // -0.625754800397202441
  s21_decimal dec_2 = {{0xf22bb409, 0x8af20ac, 0x0, 0x80120000}};
  // 105243571.70317456137009182634
  s21_decimal dec_check = {{0xefbb37aa, 0x6750f5af, 0x22018b51, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_124) {
  // -341383857.20
  s21_decimal dec_1 = {{0xf2ce6d38, 0x7, 0x0, 0x80020000}};
  // 0.1664402267131905082
  s21_decimal dec_2 = {{0x27c0843a, 0x1719250b, 0x0, 0x130000}};
  // -2051089835.3213134785297523566
  s21_decimal dec_check = {{0xdb14236e, 0xb58af8ee, 0x424637ab, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_125) {
  // -92630908340430552807.788797
  s21_decimal dec_1 = {{0x2b3c50fd, 0x9a64c356, 0x4c9f5b, 0x80060000}};
  // 429
  s21_decimal dec_2 = {{0x1ad, 0x0, 0x0, 0x0}};
  // -215922863264406883.00183868765
  s21_decimal dec_check = {{0xcd39555d, 0x33eada05, 0x45c4b87b, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_126) {
  // -7939895729529462
  s21_decimal dec_1 = {{0x8832276, 0x1c354b, 0x0, 0x80000000}};
  // 71344.797883196
  s21_decimal dec_2 = {{0x41559b3c, 0x40e3, 0x0, 0x90000}};
  // -111289063324.95986256220967626
  s21_decimal dec_check = {{0xb776d2ca, 0x276c0190, 0x23f59d95, 0x80110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_127) {
  // 5388581888.903174
  s21_decimal dec_1 = {{0xfd54c806, 0x1324e2, 0x0, 0x60000}};
  // 2907539
  s21_decimal dec_2 = {{0x2c5d93, 0x0, 0x0, 0x0}};
  // 1853.3137092583019522695998231
  s21_decimal dec_check = {{0x8bf9ab17, 0xf000a3a7, 0x3be2406e, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_129) {
  // -247689905833615721813.78671
  s21_decimal dec_1 = {{0xa234066f, 0xab8796e6, 0x147d09, 0x80050000}};
  // 42164320231.4935791393
  s21_decimal dec_2 = {{0x43e8ef21, 0xdb79928b, 0x16, 0xa0000}};
  // -5874395803.6968415934401428289
  s21_decimal dec_check = {{0xd0a33b41, 0x3434505e, 0xbdcfdcfa, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_133) {
  // 7867527
  s21_decimal dec_1 = {{0x780c87, 0x0, 0x0, 0x0}};
  // 51
  s21_decimal dec_2 = {{0x33, 0x0, 0x0, 0x0}};
  // 154265.23529411764705882352941
  s21_decimal dec_check = {{0xb9ad2d2d, 0x396ef54b, 0x31d8856c, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_135) {
  // -10886832435350269572530
  s21_decimal dec_1 = {{0x6da3b5b2, 0x2d26830a, 0x24e, 0x80000000}};
  // 427832648
  s21_decimal dec_2 = {{0x19803548, 0x0, 0x0, 0x0}};
  // -25446474190885.660442935621874
  s21_decimal dec_check = {{0x9342f8f2, 0xfe236520, 0x5238d481, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_136) {
  // 8
  s21_decimal dec_1 = {{0x8, 0x0, 0x0, 0x0}};
  // 0.75
  s21_decimal dec_2 = {{0x4b, 0x0, 0x0, 0x20000}};
  // 10.666666666666666666666666667
  s21_decimal dec_check = {{0xaaaaaaab, 0xa8b00289, 0x22774286, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_137) {
  // 76812697506803924571
  s21_decimal dec_1 = {{0x4c94be5b, 0x29fd8569, 0x4, 0x0}};
  // 492
  s21_decimal dec_2 = {{0x1ec, 0x0, 0x0, 0x0}};
  // 156123368916268139.37195121951
  s21_decimal dec_check = {{0xb9d37d1f, 0xc61c4696, 0x327238ee, 0xb0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_138) {
  // 2928724631706471934136141751
  s21_decimal dec_1 = {{0xc9f3c7b7, 0x6a578ac7, 0x9769590, 0x0}};
  // 8.3850149
  s21_decimal dec_2 = {{0x4ff73a5, 0x0, 0x0, 0x70000}};
  // 349280790390303532333155633.51
  s21_decimal dec_check = {{0x7d2b0757, 0xbe3c3107, 0x70dbd46e, 0x20000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_139) {
  // -853382.4492232
  s21_decimal dec_1 = {{0xef93d2c8, 0x7c2, 0x0, 0x80070000}};
  // -251
  s21_decimal dec_2 = {{0xfb, 0x0, 0x0, 0x80000000}};
  // 3399.9300765864541832669322709
  s21_decimal dec_check = {{0xa60c5dd5, 0xaabb4e1c, 0x6ddb8ffb, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_141) {
  // -37148112339950356570
  s21_decimal dec_1 = {{0xa30bc85a, 0x3889b5a, 0x2, 0x80000000}};
  // -5.4
  s21_decimal dec_2 = {{0x36, 0x0, 0x0, 0x80010000}};
  // 6879280062953769735.1851851852
  s21_decimal dec_check = {{0x3a80404c, 0xb20249fe, 0xde48122a, 0xa0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_142) {
  // 7278886808540042147
  s21_decimal dec_1 = {{0xb74e53a3, 0x6503ccfc, 0x0, 0x0}};
  // 139039003529
  s21_decimal dec_2 = {{0x5f5ed389, 0x20, 0x0, 0x0}};
  // 52351402.295700799383423924049
  s21_decimal dec_check = {{0xde47b751, 0x15442d3f, 0xa92810a5, 0x150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_143) {
  // 5800696798.65500849133260044
  s21_decimal dec_1 = {{0x88bf0d0c, 0x5aeb97a6, 0x1dfd288, 0x110000}};
  // -0.864
  s21_decimal dec_2 = {{0x360, 0x0, 0x0, 0x80030000}};
  // -6713769442.8877413094127319907
  s21_decimal dec_check = {{0xb6ac3b63, 0xc5d8f870, 0xd8eeffcb, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_144) {
  // 73.015672166448686105086320
  s21_decimal dec_1 = {{0x137fc970, 0x84f88e25, 0x3c65ab, 0x180000}};
  // -6.5
  s21_decimal dec_2 = {{0x41, 0x0, 0x0, 0x80010000}};
  // -11.233180333299797862320972308
  s21_decimal dec_check = {{0x6a42214, 0x1072f648, 0x244bde76, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_145) {
  // -7848044417513
  s21_decimal dec_1 = {{0x43e651e9, 0x723, 0x0, 0x80000000}};
  // 51.693738211
  s21_decimal dec_2 = {{0x92fd8e3, 0xc, 0x0, 0x90000}};
  // -151818086466.86342851607706495
  s21_decimal dec_check = {{0x648cbb7f, 0xd98e4aa3, 0x310e1907, 0x80110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_146) {
  // 928044490664731252955.4311752
  s21_decimal dec_1 = {{0xac268a48, 0x78905859, 0x1dfc9aa6, 0x70000}};
  // 201754395947706999
  s21_decimal dec_2 = {{0xde562a77, 0x2ccc68d, 0x0, 0x0}};
  // 4599.8724652585631312889444168
  s21_decimal dec_check = {{0xe34ef748, 0xfeaacad1, 0x94a140d3, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_147) {
  // 5463398909038314939122332704
  s21_decimal dec_1 = {{0x21ce3420, 0x511427bc, 0x11a737b8, 0x0}};
  // 77757840997.87
  s21_decimal dec_2 = {{0x70d95fcb, 0x712, 0x0, 0x20000}};
  // 70261710445226641.289727494491
  s21_decimal dec_check = {{0x5b38c95b, 0x5cf4b90b, 0xe3071feb, 0xc0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_148) {
  // -471.0886492072
  s21_decimal dec_1 = {{0xd6b747a8, 0x448, 0x0, 0x800a0000}};
  // 0.114
  s21_decimal dec_2 = {{0x72, 0x0, 0x0, 0x30000}};
  // -4132.3565719929824561403508772
  s21_decimal dec_check = {{0xe1dfb824, 0x6b76285d, 0x85860d6a, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_149) {
  // 460113
  s21_decimal dec_1 = {{0x70551, 0x0, 0x0, 0x0}};
  // 80912.3
  s21_decimal dec_2 = {{0xc58a3, 0x0, 0x0, 0x10000}};
  // 5.6865643418862150748402900424
  s21_decimal dec_check = {{0xeb8c5dc8, 0xb9cf3f1e, 0xb7be2862, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_153) {
  // 5264496035275
  s21_decimal dec_1 = {{0xbc6a85cb, 0x4c9, 0x0, 0x0}};
  // 3841894472
  s21_decimal dec_2 = {{0xe4fea848, 0x0, 0x0, 0x0}};
  // 1370.2864754987471191530426815
  s21_decimal dec_check = {{0xc3a251bf, 0xd4e5437a, 0x2c46be7a, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_155) {
  // 6927099.81915476413307
  s21_decimal dec_1 = {{0xd73c4b7b, 0x8d483a6a, 0x25, 0xe0000}};
  // -641.185253
  s21_decimal dec_2 = {{0x2637b5e5, 0x0, 0x0, 0x80060000}};
  // -10803.585682521560010161369073
  s21_decimal dec_check = {{0x9dbfaff1, 0x61939797, 0x22e88441, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_156) {
  // 4145848502164620757552
  s21_decimal dec_1 = {{0x6b82ca30, 0xbf34af12, 0xe0, 0x0}};
  // -375954521138379815
  s21_decimal dec_2 = {{0x2427bc27, 0x537a8a5, 0x0, 0x80000000}};
  // -11027.526652987459776827703367
  s21_decimal dec_check = {{0x1e3d4047, 0xb72da73b, 0x23a1c199, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_157) {
  // -9898029014003788835
  s21_decimal dec_1 = {{0x3c34ac23, 0x895cdcf2, 0x0, 0x80000000}};
  // 62315830.176941694
  s21_decimal dec_2 = {{0xd994867e, 0xdd63ea, 0x0, 0x90000}};
  // -158836510496.59432601128507355
  s21_decimal dec_check = {{0xd9797db, 0xc08b0039, 0x3352a5f0, 0x80110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_158) {
  // 571225319057459509099214
  s21_decimal dec_1 = {{0x56be7ace, 0x2fc4b14f, 0x78f6, 0x0}};
  // -977346441505906575
  s21_decimal dec_2 = {{0xc739f8f, 0xd903b69, 0x0, 0x80000000}};
  // -584465.54343341037225438018248
  s21_decimal dec_check = {{0xd0a6fac8, 0xaac88840, 0xbcd9db4b, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_159) {
  // -40.2426819339944542247711
  s21_decimal dec_1 = {{0xcc629b1f, 0x9a01c902, 0x5537, 0x80160000}};
  // 8.2220092892
  s21_decimal dec_2 = {{0x24b30ddc, 0x13, 0x0, 0xa0000}};
  // -4.8945069895329758033388795457
  s21_decimal dec_check = {{0x32b47641, 0xa608a235, 0x9e2669b3, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_160) {
  // -7026684.8206509571870
  s21_decimal dec_1 = {{0x734bff1e, 0xcf25fe27, 0x3, 0x800d0000}};
  // -504660.2
  s21_decimal dec_2 = {{0x4d014a, 0x0, 0x0, 0x80010000}};
  // 13.923596155692398938929600551
  s21_decimal dec_check = {{0x86cd9827, 0xa667476, 0x2cfd542c, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_161) {
  // -310005573725860694670757.7981
  s21_decimal dec_1 = {{0x32381c7d, 0x42129fe7, 0xa044e56, 0x80040000}};
  // -7726788.60
  s21_decimal dec_2 = {{0x2e0e24cc, 0x0, 0x0, 0x80020000}};
  // 40120882008582542.904144911911
  s21_decimal dec_check = {{0x4a5b5e27, 0xc9781ded, 0x81a3373b, 0xc0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_162) {
  // -7632364498.630555193672377504
  s21_decimal dec_1 = {{0x9626a4a0, 0x87e419bf, 0x18a9580c, 0x80120000}};
  // -63
  s21_decimal dec_2 = {{0x3f, 0x0, 0x0, 0x80000000}};
  // 121148642.83540563799479964292
  s21_decimal dec_check = {{0x57fc5284, 0xc77230ff, 0x27252e4c, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_163) {
  // -74307566565257999253898251
  s21_decimal dec_1 = {{0x66f2040b, 0x414ec556, 0x3d773d, 0x80000000}};
  // 63524194347153
  s21_decimal dec_2 = {{0x6109e891, 0x39c6, 0x0, 0x0}};
  // -1169752207468.7797089481996214
  s21_decimal dec_check = {{0xb24737b6, 0x4dbe26ce, 0x25cbf6a6, 0x80100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_164) {
  // 454070421162857220
  s21_decimal dec_1 = {{0x6c6c9304, 0x64d2ea4, 0x0, 0x0}};
  // 930.51
  s21_decimal dec_2 = {{0x16b7b, 0x0, 0x0, 0x20000}};
  // 487980162666556.21111003643163
  s21_decimal dec_check = {{0x7a867d1b, 0x76ecc71e, 0x9dacc5e2, 0xe0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_165) {
  // -9634661718028745610879814677
  s21_decimal dec_1 = {{0x44efcc15, 0x4ae04267, 0x1f219afa, 0x80000000}};
  // 7932001740879.511819679627528
  s21_decimal dec_2 = {{0x4b72f908, 0xfb240735, 0x19a132b3, 0xf0000}};
  // -1214657035231618.6445436397898
  s21_decimal dec_check = {{0x26c7a94a, 0x362255de, 0x273f6852, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_166) {
  // 12665.723176615067091036892
  s21_decimal dec_1 = {{0x58fd6adc, 0x3aad75fc, 0xa7a12, 0x150000}};
  // 8125.216
  s21_decimal dec_2 = {{0x7bfb20, 0x0, 0x0, 0x30000}};
  // 1.5588167965768623370796409597
  s21_decimal dec_check = {{0xc0b622fd, 0xad81f78b, 0x325e3af6, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_167) {
  // 28075463.1308462497937
  s21_decimal dec_1 = {{0x5aaba091, 0x3840d1ac, 0xf, 0xd0000}};
  // 84
  s21_decimal dec_2 = {{0x54, 0x0, 0x0, 0x0}};
  // 334231.70393864583087738095238
  s21_decimal dec_check = {{0x8d348686, 0x9e7aa16d, 0x6bfeffa1, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_169) {
  // -1879761570521058853145362
  s21_decimal dec_1 = {{0xfa764b12, 0x14347942, 0x18e0e, 0x80000000}};
  // -122704496821621198
  s21_decimal dec_2 = {{0xf96551ce, 0x1b3ef16, 0x0, 0x80000000}};
  // 15319418.759800779093328182857
  s21_decimal dec_check = {{0xbb1ebe49, 0x7913bbf, 0x317fed1b, 0x150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_170) {
  // 706502701157.72713
  s21_decimal dec_1 = {{0xdd893929, 0xfb000b, 0x0, 0x50000}};
  // 898.6699
  s21_decimal dec_2 = {{0x89204b, 0x0, 0x0, 0x40000}};
  // 786164865.60607752635311364050
  s21_decimal dec_check = {{0x298a97d2, 0x1c02e8ca, 0xfe060894, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_171) {
  // 78929787183563074308804512705
  s21_decimal dec_1 = {{0xbdcd0bc1, 0xe970ffb5, 0xff093090, 0x0}};
  // -787456072535249599265564903
  s21_decimal dec_2 = {{0x4a84e8e7, 0x3a9e802e, 0x28b5e4f, 0x80000000}};
  // -100.23389232296493563657446599
  s21_decimal dec_check = {{0xc6bde4c7, 0x10f16788, 0x2063273b, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_172) {
  // -206733822943
  s21_decimal dec_1 = {{0x224bcbdf, 0x30, 0x0, 0x80000000}};
  // -3.551534
  s21_decimal dec_2 = {{0x36312e, 0x0, 0x0, 0x80060000}};
  // 58209726541.545146407158146311
  s21_decimal dec_check = {{0xf651e507, 0xce78045f, 0xbc15f50e, 0x120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_173) {
  // -61026697.298893170802904
  s21_decimal dec_1 = {{0x2a0000d8, 0x438e440b, 0xcec, 0x800f0000}};
  // 36265045.8291118689545682
  s21_decimal dec_2 = {{0xf75cedd2, 0x521bcb4b, 0x4ccb, 0x100000}};
  // -1.6827966407780964534004387885
  s21_decimal dec_check = {{0xea3e902d, 0xe436c2d5, 0x365fc47e, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_174) {
  // 488727060
  s21_decimal dec_1 = {{0x1d216214, 0x0, 0x0, 0x0}};
  // 18.0149143
  s21_decimal dec_2 = {{0xabcdb97, 0x0, 0x0, 0x70000}};
  // 27129024.976821566117580698122
  s21_decimal dec_check = {{0x9b24f20a, 0xdd3a6bad, 0x57a89a7e, 0x150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_175) {
  // 514969044184261387939
  s21_decimal dec_1 = {{0x3d56e6a3, 0xeaa19143, 0x1b, 0x0}};
  // 95.527
  s21_decimal dec_2 = {{0x17527, 0x0, 0x0, 0x30000}};
  // 5390821905683852606.4777497461
  s21_decimal dec_check = {{0x86b80b75, 0xcffc1208, 0xae2fd56a, 0xa0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_176) {
  // -9556246040
  s21_decimal dec_1 = {{0x3998be18, 0x2, 0x0, 0x80000000}};
  // 0.7
  s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x10000}};
  // -13651780057.142857142857142857
  s21_decimal dec_check = {{0x4d649249, 0xcffb5013, 0x2c1c7cdf, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_177) {
  // 778994850246086
  s21_decimal dec_1 = {{0xdf54adc6, 0x2c47d, 0x0, 0x0}};
  // 433200975490480
  s21_decimal dec_2 = {{0x7642adb0, 0x189fe, 0x0, 0x0}};
  // 1.7982296770317525439767673935
  s21_decimal dec_check = {{0x66487c4f, 0x3b9d246e, 0x3a1a9b75, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_178) {
  // -8123344001936500907917
  s21_decimal dec_1 = {{0xad3adf8d, 0x5e0b5a70, 0x1b8, 0x80000000}};
  // -31
  s21_decimal dec_2 = {{0x1f, 0x0, 0x0, 0x80000000}};
  // 262043354901177448642.48387097
  s21_decimal dec_check = {{0x1c6ed619, 0x58a2bdad, 0x54abb7e1, 0x80000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_179) {
  // 4361179761429519991173277372
  s21_decimal dec_1 = {{0xecf3e6bc, 0x98da8f9a, 0xe177bbc, 0x0}};
  // -8962411614
  s21_decimal dec_2 = {{0x16338c5e, 0x2, 0x0, 0x80000000}};
  // -486607840529998669.52699382816
  s21_decimal dec_check = {{0x889c8c20, 0x4169e838, 0x9d3b41d5, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_180) {
  // 643909989032990049437
  s21_decimal dec_1 = {{0xb50b849d, 0xe80bd371, 0x22, 0x0}};
  // 4.4869
  s21_decimal dec_2 = {{0xaf45, 0x0, 0x0, 0x40000}};
  // 143508878966099099475.58447926
  s21_decimal dec_check = {{0xb192cb36, 0xbae29374, 0x2e5ec6b7, 0x80000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_181) {
  // 3481433657488984377055629
  s21_decimal dec_1 = {{0xbb4ad98d, 0xe590cc2d, 0x2e138, 0x0}};
  // -777275
  s21_decimal dec_2 = {{0xbdc3b, 0x0, 0x0, 0x80000000}};
  // -4479024357516946225.0241278827
  s21_decimal dec_check = {{0xcdf4436b, 0x8486cd22, 0x90b99f01, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_182) {
  // 274570811
  s21_decimal dec_1 = {{0x105d9e3b, 0x0, 0x0, 0x0}};
  // 11431
  s21_decimal dec_2 = {{0x2ca7, 0x0, 0x0, 0x0}};
  // 24019.841746128947598635290001
  s21_decimal dec_check = {{0x3b53cd91, 0x320f9f0f, 0x4d9cbf56, 0x180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_184) {
  // 459411188
  s21_decimal dec_1 = {{0x1b620ef4, 0x0, 0x0, 0x0}};
  // 9561425
  s21_decimal dec_2 = {{0x91e551, 0x0, 0x0, 0x0}};
  // 48.048401571941420865613650685
  s21_decimal dec_check = {{0xdbb6dafd, 0x700fc6eb, 0x9b40b4cc, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_186) {
  // 507917832.069716
  s21_decimal dec_1 = {{0xd5f4a254, 0x1cdf2, 0x0, 0x60000}};
  // 925.98
  s21_decimal dec_2 = {{0x169b6, 0x0, 0x0, 0x20000}};
  // 548519.22511254670727229529795
  s21_decimal dec_check = {{0x6710dec3, 0x95df97b3, 0xb13c7265, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_187) {
  // 52219944185971555725414306
  s21_decimal dec_1 = {{0x6cf70fa2, 0xd8bfb328, 0x2b3200, 0x0}};
  // -49226766.538048206935
  s21_decimal dec_2 = {{0xd72f857, 0xab289b5a, 0x2, 0x800c0000}};
  // -1060803864613164684.8501595640
  s21_decimal dec_check = {{0x5ad4bdf8, 0x4c1c3f93, 0x2246c38f, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_188) {
  // 21768855833613745476
  s21_decimal dec_1 = {{0x593cbd44, 0x2e1a830b, 0x1, 0x0}};
  // 0.610576592753118214
  s21_decimal dec_2 = {{0x1737cc06, 0x879342d, 0x0, 0x120000}};
  // 35652948527648207904.150462491
  s21_decimal dec_check = {{0x4ed9201b, 0x75a1f7c3, 0x73336d84, 0x90000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_189) {
  // 504895392654146434178
  s21_decimal dec_1 = {{0x89c47482, 0x5ed4c491, 0x1b, 0x0}};
  // 7.303209
  s21_decimal dec_2 = {{0x6f7029, 0x0, 0x0, 0x60000}};
  // 69133362150000970008.937167210
  s21_decimal dec_check = {{0xddf8f96a, 0xb6814127, 0xdf61c6df, 0x90000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_190) {
  // -271347786477098772
  s21_decimal dec_1 = {{0xc78e5714, 0x3c4055f, 0x0, 0x80000000}};
  // -0.780164430
  s21_decimal dec_2 = {{0x2e805d4e, 0x0, 0x0, 0x80090000}};
  // 347808456836591193.98714447927
  s21_decimal dec_check = {{0xa2dd9837, 0x8e291d26, 0x70620a8e, 0xb0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_191) {
  // -7774070185811514
  s21_decimal dec_1 = {{0xc3e25e3a, 0x1b9e79, 0x0, 0x80000000}};
  // 35631283316330
  s21_decimal dec_2 = {{0xdfc266a, 0x2068, 0x0, 0x0}};
  // -218.18103257169571936535356005
  s21_decimal dec_check = {{0x38d4a265, 0x8bfc1a0a, 0x467f8313, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_194) {
  // -75570708782
  s21_decimal dec_1 = {{0x985d812e, 0x11, 0x0, 0x80000000}};
  // -685.74
  s21_decimal dec_2 = {{0x10bde, 0x0, 0x0, 0x80020000}};
  // 110203151.02225333216671041503
  s21_decimal dec_check = {{0xc7e07df, 0xc3efae9a, 0x239bca7e, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_195) {
  // 692777518422529974504305
  s21_decimal dec_1 = {{0x2db48b71, 0x8b6610b0, 0x92b3, 0x0}};
  // 319.7815485570033004
  s21_decimal dec_2 = {{0xcaa5256c, 0x2c60ec3d, 0x0, 0x100000}};
  // 2166408667256289586875.6826690
  s21_decimal dec_check = {{0x3f091a42, 0xc3edd438, 0x46001ccb, 0x70000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_196) {
  // 8
  s21_decimal dec_1 = {{0x8, 0x0, 0x0, 0x0}};
  // 6
  s21_decimal dec_2 = {{0x6, 0x0, 0x0, 0x0}};
  // 1.3333333333333333333333333333
  s21_decimal dec_check = {{0x15555555, 0x52dc032c, 0x2b151328, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_197) {
  // -781512711781124132
  s21_decimal dec_1 = {{0xb52a8824, 0xad87dab, 0x0, 0x80000000}};
  // -7282.6
  s21_decimal dec_2 = {{0x11c7a, 0x0, 0x0, 0x80010000}};
  // 107312321393612.73885700162030
  s21_decimal dec_check = {{0xc71481ee, 0xf2745c78, 0x22acaacb, 0xe0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_198) {
  // -289177714
  s21_decimal dec_1 = {{0x113c8072, 0x0, 0x0, 0x80000000}};
  // 872
  s21_decimal dec_2 = {{0x368, 0x0, 0x0, 0x0}};
  // -331625.81880733944954128440367
  s21_decimal dec_check = {{0x86641c2f, 0x41920e7, 0x6b2771de, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_199) {
  // 995113364222510
  s21_decimal dec_1 = {{0xe295f22e, 0x3890c, 0x0, 0x0}};
  // -665431.619
  s21_decimal dec_2 = {{0x27a9ae43, 0x0, 0x0, 0x80030000}};
  // -1495440456.7038014465014473561
  s21_decimal dec_check = {{0x187fa359, 0xfd90a2fe, 0x3051fe57, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_200) {
  // 809787607972092
  s21_decimal dec_1 = {{0x5eb778fc, 0x2e07f, 0x0, 0x0}};
  // 168203.42748
  s21_decimal dec_2 = {{0xea920fdc, 0x3, 0x0, 0x50000}};
  // 4814334761.8072687325955077500
  s21_decimal dec_check = {{0x2c81b57c, 0xe97659cc, 0x9b8f3e67, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_202) {
  // 91539275.7884253
  s21_decimal dec_1 = {{0x7c29e55d, 0x3408b, 0x0, 0x70000}};
  // -67721
  s21_decimal dec_2 = {{0x10889, 0x0, 0x0, 0x80000000}};
  // -1351.7118144803724103306212253
  s21_decimal dec_check = {{0xfdfc739d, 0xeabea410, 0x2bad191a, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_204) {
  // -55689067988875
  s21_decimal dec_1 = {{0x1f1d878b, 0x32a6, 0x0, 0x80000000}};
  // 0.775
  s21_decimal dec_2 = {{0x307, 0x0, 0x0, 0x30000}};
  // -71856861921129.032258064516129
  s21_decimal dec_check = {{0x59648421, 0x24d9f471, 0xe82e9a62, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_205) {
  // 63012669.968
  s21_decimal dec_1 = {{0xabd90a10, 0xe, 0x0, 0x30000}};
  // -89.756238316
  s21_decimal dec_2 = {{0xe5e381ec, 0x14, 0x0, 0x80090000}};
  // -702042.23294379444011190572542
  s21_decimal dec_check = {{0x4161d5fe, 0xabd29e04, 0xe2d7928a, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_206) {
  // -6878122438360799
  s21_decimal dec_1 = {{0xaca8fedf, 0x186f9d, 0x0, 0x80000000}};
  // 97
  s21_decimal dec_2 = {{0x61, 0x0, 0x0, 0x0}};
  // -70908478745987.618556701030928
  s21_decimal dec_check = {{0x8a83ba10, 0x33bccd9e, 0xe51e1e6f, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_208) {
  // -1077547425186190339048
  s21_decimal dec_1 = {{0xabae2be8, 0x69f97a1d, 0x3a, 0x80000000}};
  // 5450090
  s21_decimal dec_2 = {{0x53296a, 0x0, 0x0, 0x0}};
  // -197711858920896.78134636308758
  s21_decimal dec_check = {{0xc2de916, 0xd7467bf4, 0x3fe25776, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_209) {
  // -46235739248279714624.1788
  s21_decimal dec_1 = {{0x7b8e7afc, 0x71c8c4a6, 0x61e8, 0x80040000}};
  // 8705620528423376.02
  s21_decimal dec_2 = {{0x1a9a3542, 0xc14db93, 0x0, 0x20000}};
  // -5311.0216666718413399708787729
  s21_decimal dec_check = {{0xcaade411, 0x8fc4da3a, 0xab9bbdd6, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_210) {
  // 69842506890723352530925873
  s21_decimal dec_1 = {{0xf7a83931, 0xe298641e, 0x39c5b9, 0x0}};
  // 0.4733050
  s21_decimal dec_2 = {{0x48387a, 0x0, 0x0, 0x70000}};
  // 147563425044576652541016623.53
  s21_decimal dec_check = {{0xcb64ba91, 0x104bfd3c, 0x2fae2912, 0x20000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_211) {
  // 14720812071.07242129
  s21_decimal dec_1 = {{0xf627c891, 0x146de20e, 0x0, 0x80000}};
  // -7128556
  s21_decimal dec_2 = {{0x6cc5ec, 0x0, 0x0, 0x80000000}};
  // -2065.0482469482488865907765893
  s21_decimal dec_check = {{0xf1f77285, 0xd07862dc, 0x42b9adc1, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_212) {
  // -90718
  s21_decimal dec_1 = {{0x1625e, 0x0, 0x0, 0x80000000}};
  // -8625.216
  s21_decimal dec_2 = {{0x839c40, 0x0, 0x0, 0x80030000}};
  // 10.517765584073488710311718570
  s21_decimal dec_check = {{0xe61aeaa, 0xcc1b05ff, 0x21fc177e, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_214) {
  // -9109159344927867068497054919
  s21_decimal dec_1 = {{0xb14cccc7, 0x907aa4ce, 0x1d6eeb85, 0x80000000}};
  // -7966138585332876859325
  s21_decimal dec_2 = {{0xfaec57bd, 0xd86184f2, 0x1af, 0x80000000}};
  // 1143484.9202472451588111122282
  s21_decimal dec_check = {{0xaa76bf6a, 0x5e44e0a9, 0x24f2af81, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_215) {
  // 233320758081385681440492726
  s21_decimal dec_1 = {{0xb284cb6, 0xa3cfd768, 0xc0ff97, 0x0}};
  // 10147003756113720816669251
  s21_decimal dec_2 = {{0x611f9243, 0x2d032f6e, 0x864b6, 0x0}};
  // 22.994054569143768313034255492
  s21_decimal dec_check = {{0xf1612c84, 0xe7e23977, 0x4a4c3c73, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_216) {
  // 807441193408352517885943
  s21_decimal dec_1 = {{0x5a100ff7, 0x798ca61b, 0xaafb, 0x0}};
  // 1.968205
  s21_decimal dec_2 = {{0x1e084d, 0x0, 0x0, 0x60000}};
  // 410242425666204748939232.95592
  s21_decimal dec_check = {{0xb6b0a168, 0xc3de54e9, 0x848e7545, 0x50000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_217) {
  // -38261135813649171110751003776
  s21_decimal dec_1 = {{0x22b66480, 0x8bcb24e2, 0x7ba0dea8, 0x80000000}};
  // -10944.20896
  s21_decimal dec_2 = {{0x413b89a0, 0x0, 0x0, 0x80050000}};
  // 3496016564878268836594929.5413
  s21_decimal dec_check = {{0xc87d1b35, 0x57d9a566, 0x70f65f09, 0x40000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_218) {
  // 84153466519379271076673
  s21_decimal dec_1 = {{0x718dcb41, 0xf7f39f33, 0x11d1, 0x0}};
  // 1236398975019449
  s21_decimal dec_2 = {{0x91b4e9b9, 0x4647f, 0x0, 0x0}};
  // 68063358.365413969078892243271
  s21_decimal dec_check = {{0x53b22947, 0x5272b632, 0xdbecb0c2, 0x150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_220) {
  // -34.35031117615217
  s21_decimal dec_1 = {{0x818ed071, 0xc3424, 0x0, 0x800e0000}};
  // 0.836861
  s21_decimal dec_2 = {{0xcc4fd, 0x0, 0x0, 0x60000}};
  // -41.046614881267223589102610828
  s21_decimal dec_check = {{0x58f4e98c, 0x5f4e43bb, 0x84a0f6cb, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_221) {
  // -34297793496763376655438177
  s21_decimal dec_1 = {{0xe95c9161, 0x1c6ca048, 0x1c5ed7, 0x80000000}};
  // 55.2975977087823926653
  s21_decimal dec_2 = {{0x7c4a557d, 0xfa15515e, 0x1d, 0x130000}};
  // -620240207854747071648114.27007
  s21_decimal dec_check = {{0xb10efcbf, 0x184a9507, 0xc8691148, 0x80050000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_223) {
  // -93272565891935
  s21_decimal dec_1 = {{0xb628435f, 0x54d4, 0x0, 0x80000000}};
  // 2016
  s21_decimal dec_2 = {{0x7e0, 0x0, 0x0, 0x0}};
  // -46266153716.237599206349206349
  s21_decimal dec_check = {{0x58abf34d, 0x95abf2cd, 0x957e7722, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_224) {
  // 2942446619838989107275360
  s21_decimal dec_1 = {{0xdea52660, 0x59d37138, 0x26f16, 0x0}};
  // -2303465626860396608511401
  s21_decimal dec_2 = {{0x6da05da9, 0x1f313196, 0x1e7c7, 0x80000000}};
  // -1.2773998385422047615485605703
  s21_decimal dec_check = {{0x9d75f747, 0xa406c04, 0x29466760, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_227) {
  // -8761516100685519449
  s21_decimal dec_1 = {{0x1b39da59, 0x79972879, 0x0, 0x80000000}};
  // -5399738
  s21_decimal dec_2 = {{0x5264ba, 0x0, 0x0, 0x80000000}};
  // 1622581706869.0220616259529629
  s21_decimal dec_check = {{0x4cfceb9d, 0xcfb264db, 0x346dae69, 0x100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_228) {
  // -42647878961863006267552
  s21_decimal dec_1 = {{0xe396a8a0, 0xf236f5aa, 0x907, 0x80000000}};
  // 74748923016989.536
  s21_decimal dec_2 = {{0xdbc54b60, 0x1098fbf, 0x0, 0x30000}};
  // -570548407.12781445111806279512
  s21_decimal dec_check = {{0x5cdbf58, 0x94a25ccc, 0xb85aa878, 0x80140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_229) {
  // 1843589033579832014
  s21_decimal dec_1 = {{0x5254e2ce, 0x1995be75, 0x0, 0x0}};
  // 37
  s21_decimal dec_2 = {{0x25, 0x0, 0x0, 0x0}};
  // 49826730637292757.135135135135
  s21_decimal dec_check = {{0x6f44d59f, 0x3d79fab6, 0xa0ffb4a0, 0xc0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_230) {
  // -64796398824193695
  s21_decimal dec_1 = {{0x3ea3fe9f, 0xe633fb, 0x0, 0x80000000}};
  // 0.92369813669
  s21_decimal dec_2 = {{0x81ab80a5, 0x15, 0x0, 0xb0000}};
  // -70148889827131751.426722692353
  s21_decimal dec_check = {{0xda20fd01, 0x66b047c1, 0xe2a9cd39, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_231) {
  // -562068
  s21_decimal dec_1 = {{0x89394, 0x0, 0x0, 0x80000000}};
  // 1304
  s21_decimal dec_2 = {{0x518, 0x0, 0x0, 0x0}};
  // -431.03374233128834355828220859
  s21_decimal dec_check = {{0x54c5e3bb, 0x402ddc97, 0x8b464687, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_232) {
  // 3271251936422331779107479987
  s21_decimal dec_1 = {{0x6a8f61b3, 0xcf923ea5, 0xa91ea8a, 0x0}};
  // -505209715065838412584282
  s21_decimal dec_2 = {{0x3bdd555a, 0x79396097, 0x6afb, 0x80000000}};
  // -6475.0376702396262856415486247
  s21_decimal dec_check = {{0x978ba127, 0x7fe879a3, 0xd138419a, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_233) {
  // -46694939354450546233.6248
  s21_decimal dec_1 = {{0x4857aaf8, 0x6099c0cf, 0x62e1, 0x80040000}};
  // -46587565985
  s21_decimal dec_2 = {{0xd8d5d7a1, 0xa, 0x0, 0x80000000}};
  // 1002304764.5263355827930532740
  s21_decimal dec_check = {{0x12a80b84, 0x9894466e, 0x2062dee5, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_234) {
  // -3403841232128456756070396644
  s21_decimal dec_1 = {{0x6bd332e4, 0xeef7eb60, 0xaff976a, 0x80000000}};
  // -1087698256030.67489242
  s21_decimal dec_2 = {{0x4806abda, 0xe57c0c19, 0x5, 0x80080000}};
  // 3129398445990027.2152319580246
  s21_decimal dec_check = {{0xe47b5856, 0xdb8a00c6, 0x651dc6f8, 0xd0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_236) {
  // -6037860697923777121741680
  s21_decimal dec_1 = {{0x86b3eb70, 0x159434ab, 0x4fe91, 0x80000000}};
  // -7826444997233925
  s21_decimal dec_2 = {{0x39ea0d05, 0x1bce1c, 0x0, 0x80000000}};
  // 771469128.07254361209654460893
  s21_decimal dec_check = {{0x8a53c1dd, 0x4f0a1f41, 0xf9466e3b, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_237) {
  // 64733
  s21_decimal dec_1 = {{0xfcdd, 0x0, 0x0, 0x0}};
  // 4587
  s21_decimal dec_2 = {{0x11eb, 0x0, 0x0, 0x0}};
  // 14.112273817309788532810115544
  s21_decimal dec_check = {{0x3c66e9d8, 0x9266a5ae, 0x2d996638, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_240) {
  // 858025207444581248413
  s21_decimal dec_1 = {{0x911ded9d, 0x837de428, 0x2e, 0x0}};
  // 109.468881163790797
  s21_decimal dec_2 = {{0xfba29cd, 0x184e95e, 0x0, 0xf0000}};
  // 7838074147855561223.7476126780
  s21_decimal dec_check = {{0x7d77e03c, 0x9a8e52dc, 0xfd43079d, 0xa0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_241) {
  // -57649080083402.206
  s21_decimal dec_1 = {{0x6bffcdde, 0xcccf88, 0x0, 0x80030000}};
  // 30.2395888864636924160163
  s21_decimal dec_2 = {{0x715168a3, 0xe9fac84d, 0x4008, 0x160000}};
  // -1906410841094.7335837128191440
  s21_decimal dec_check = {{0x30adedd0, 0xc84c480e, 0x3d9975fb, 0x80100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_242) {
  // 905806616816328.4567
  s21_decimal dec_1 = {{0x315b3657, 0x7db4b730, 0x0, 0x40000}};
  // -36344685.35141049803643437
  s21_decimal dec_2 = {{0x50569a2d, 0xef1ff733, 0x301a0, 0x80110000}};
  // -24922670.482857133303569215834
  s21_decimal dec_check = {{0x2f6e715a, 0x152c05dc, 0x50878cc2, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_243) {
  // 142270160723906
  s21_decimal dec_1 = {{0xda645fc2, 0x8164, 0x0, 0x0}};
  // -0.984587658793708415
  s21_decimal dec_2 = {{0x54a1eb7f, 0xda9f542, 0x0, 0x80120000}};
  // -144497200887335.67662878037674
  s21_decimal dec_check = {{0xd9ef16aa, 0x99c22246, 0x2eb0873f, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_244) {
  // -20003453241814045781
  s21_decimal dec_1 = {{0x97765455, 0x159a8abd, 0x1, 0x80000000}};
  // 541827472226
  s21_decimal dec_2 = {{0x276f1b62, 0x7e, 0x0, 0x0}};
  // -36918492.079468548193215474516
  s21_decimal dec_check = {{0xe21e6b54, 0xdf57dc81, 0x774a42c9, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_245) {
  // -776.9036576418709140328
  s21_decimal dec_1 = {{0x6147368, 0x290a8422, 0x1a5, 0x80130000}};
  // 2.40
  s21_decimal dec_2 = {{0xf0, 0x0, 0x0, 0x20000}};
  // -323.70985735077954751366666667
  s21_decimal dec_check = {{0xcf7f99ab, 0xf93356a1, 0x6898a6dc, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_247) {
  // -3011766580675590078573.2822528
  s21_decimal dec_1 = {{0x92832600, 0xe4d3d020, 0x6150bfce, 0x80070000}};
  // 97220448143998596
  s21_decimal dec_2 = {{0x8486fe84, 0x159657b, 0x0, 0x0}};
  // -30978.735833584058496441902647
  s21_decimal dec_check = {{0xc43be637, 0x94d152bd, 0x6419027a, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_248) {
  // 453423278826950108939108
  s21_decimal dec_1 = {{0xca688364, 0x200cf99e, 0x6004, 0x0}};
  // 873551231.053833
  s21_decimal dec_2 = {{0x7ed1f009, 0x31a7d, 0x0, 0x60000}};
  // 519057455027509.07229001673070
  s21_decimal dec_check = {{0xf2a2e96e, 0xed98bb74, 0xa7b76d25, 0xe0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_249) {
  // 1771.0972766
  s21_decimal dec_1 = {{0x1fa7ff5e, 0x4, 0x0, 0x70000}};
  // 99.8060
  s21_decimal dec_2 = {{0xf3aac, 0x0, 0x0, 0x40000}};
  // 17.745398839749113279762739715
  s21_decimal dec_check = {{0xbf453203, 0xaf13368d, 0x3956a65e, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_250) {
  // 3.6206
  s21_decimal dec_1 = {{0x8d6e, 0x0, 0x0, 0x40000}};
  // 0.6
  s21_decimal dec_2 = {{0x6, 0x0, 0x0, 0x10000}};
  // 6.0343333333333333333333333333
  s21_decimal dec_check = {{0xf7555555, 0xc0378fa2, 0xc2fad5de, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_251) {
  // 2284193433162145617331087.8076
  s21_decimal dec_1 = {{0x58b7217c, 0x4e46532e, 0x49ce67bd, 0x40000}};
  // 51.273
  s21_decimal dec_2 = {{0xc849, 0x0, 0x0, 0x30000}};
  // 44549634957231790949058.721112
  s21_decimal dec_check = {{0x1adfb558, 0x340e5a58, 0x8ff29826, 0x60000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_252) {
  // -97988465274966674417
  s21_decimal dec_1 = {{0xa0168bf1, 0x4fdcf600, 0x5, 0x80000000}};
  // -6941863411.1622252
  s21_decimal dec_2 = {{0x43041c6c, 0xf69fe1, 0x0, 0x80070000}};
  // 14115585322.149285193562744356
  s21_decimal dec_check = {{0xfef06624, 0x9be3574d, 0x2d9c2375, 0x120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_253) {
  // -3556733981952105
  s21_decimal dec_1 = {{0xa98e0869, 0xca2d4, 0x0, 0x80000000}};
  // 13.64
  s21_decimal dec_2 = {{0x554, 0x0, 0x0, 0x20000}};
  // -260757623310271.62756598240469
  s21_decimal dec_check = {{0xebb494d5, 0x6cff0971, 0x54415d74, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_254) {
  // -5757871216945992335760
  s21_decimal dec_1 = {{0xa0008190, 0x2283d54d, 0x138, 0x80000000}};
  // -4.7
  s21_decimal dec_2 = {{0x2f, 0x0, 0x0, 0x80010000}};
  // 1225078982328934539523.4042553
  s21_decimal dec_check = {{0xfbedf2b9, 0xdbe076a, 0x27959da7, 0x70000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_255) {
  // -99424678.8674380649383
  s21_decimal dec_1 = {{0xd95453a7, 0xe5f22a8d, 0x35, 0x800d0000}};
  // -691
  s21_decimal dec_2 = {{0x2b3, 0x0, 0x0, 0x80000000}};
  // 143885.20820179170034486251809
  s21_decimal dec_check = {{0x89429121, 0x9ac4570f, 0x2e7de7cc, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_256) {
  // -79228162514264337591691762717
  s21_decimal dec_1 = {{0x9199dc1d, 0xffffffff, 0xffffffff, 0x80000000}};
  // 495923594908174790964
  s21_decimal dec_2 = {{0x9c7a3134, 0xe2528a0d, 0x1a, 0x0}};
  // -159758808.26749980217456113790
  s21_decimal dec_check = {{0xe7b2b87e, 0xfc914f79, 0x339ef05a, 0x80140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_257) {
  // -23293449968297.5253125695571
  s21_decimal dec_1 = {{0x349c8853, 0x87b841d3, 0xc0adcc, 0x800d0000}};
  // -587919862
  s21_decimal dec_2 = {{0x230af1f6, 0x0, 0x0, 0x80000000}};
  // 39620.110620276212598120315078
  s21_decimal dec_check = {{0x5462f8c6, 0x6e544ccd, 0x8004fcc4, 0x180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_260) {
  // 42323
  s21_decimal dec_1 = {{0xa553, 0x0, 0x0, 0x0}};
  // 6460.81002
  s21_decimal dec_2 = {{0x268269ea, 0x0, 0x0, 0x50000}};
  // 6.5507265914003767595692281322
  s21_decimal dec_check = {{0x948d4dea, 0xe09efbef, 0xd3aa5720, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_262) {
  // 689261149703
  s21_decimal dec_1 = {{0x7b2a7e07, 0xa0, 0x0, 0x0}};
  // 221
  s21_decimal dec_2 = {{0xdd, 0x0, 0x0, 0x0}};
  // 3118828731.6877828054298642534
  s21_decimal dec_check = {{0x6f27c866, 0x40c80870, 0x64c658bb, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_265) {
  // -593819419917935712533925090
  s21_decimal dec_1 = {{0xebc6cce2, 0x41c7d42e, 0x1eb3227, 0x80000000}};
  // 346100849541
  s21_decimal dec_2 = {{0x9537db85, 0x50, 0x0, 0x0}};
  // -1715741006430526.9244081225120
  s21_decimal dec_check = {{0x20903da0, 0x4c16b65a, 0x377046e7, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_266) {
  // 71461032163683704136726
  s21_decimal dec_1 = {{0x5b4e6416, 0xe90a7818, 0xf21, 0x0}};
  // -26248642833307594
  s21_decimal dec_2 = {{0x67ea57ca, 0x5d4100, 0x0, 0x80000000}};
  // -2722465.7906124166886113675019
  s21_decimal dec_check = {{0x1c34070b, 0x59878818, 0x57f7b58e, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_267) {
  // -84889272832174558723
  s21_decimal dec_1 = {{0xd2fb8e03, 0x9a1347e0, 0x4, 0x80000000}};
  // 1609783181517194.2701431
  s21_decimal dec_2 = {{0x3950d977, 0xaa4b49ee, 0x368, 0x70000}};
  // -52733.358011709260188834855390
  s21_decimal dec_check = {{0xeadff9de, 0xf0037994, 0xaa6402e9, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_268) {
  // -655103
  s21_decimal dec_1 = {{0x9feff, 0x0, 0x0, 0x80000000}};
  // -1071
  s21_decimal dec_2 = {{0x42f, 0x0, 0x0, 0x80000000}};
  // 611.67413632119514472455648926
  s21_decimal dec_check = {{0x423cb69e, 0x435f3b0c, 0xc5a47fa9, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_269) {
  // -1891648943399704339
  s21_decimal dec_1 = {{0xf151713, 0x1a407cb1, 0x0, 0x80000000}};
  // -8.962765769855198684982386412
  s21_decimal dec_2 = {{0xa0459eec, 0xf531777e, 0x1cf5d379, 0x801b0000}};
  // 211056385046004117.66618388287
  s21_decimal dec_check = {{0x84e0f73f, 0xeb486e9a, 0x44322ccb, 0xb0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_270) {
  // 714477698911
  s21_decimal dec_1 = {{0x5a307f5f, 0xa6, 0x0, 0x0}};
  // -3474879789
  s21_decimal dec_2 = {{0xcf1e752d, 0x0, 0x0, 0x80000000}};
  // -205.61220597406974068995628211
  s21_decimal dec_check = {{0xdfb9cb3, 0x87a5d43, 0x426fd7d2, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_271) {
  // 64971867392914767501
  s21_decimal dec_1 = {{0x7c783e8d, 0x85aa7128, 0x3, 0x0}};
  // -92997.10
  s21_decimal dec_2 = {{0x8de6fe, 0x0, 0x0, 0x80020000}};
  // -698644015704949.58983667232634
  s21_decimal dec_check = {{0x1527af7a, 0x1b44a3f1, 0xe1be7a7e, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_272) {
  // 66541794053.0021154913745828
  s21_decimal dec_1 = {{0x24e37ba4, 0xd63043b0, 0x2266bba, 0x100000}};
  // -0.612462247883268
  s21_decimal dec_2 = {{0xfab93204, 0x22d07, 0x0, 0x800f0000}};
  // -108646360298.90388023032275215
  s21_decimal dec_check = {{0xfcede10f, 0x57f4597f, 0x231b042b, 0x80110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_273) {
  // 7446245897716167
  s21_decimal dec_1 = {{0x39a4c1c7, 0x1a7452, 0x0, 0x0}};
  // -1792513
  s21_decimal dec_2 = {{0x1b5a01, 0x0, 0x0, 0x80000000}};
  // -4154081949.5959956775766758735
  s21_decimal dec_check = {{0xa38a954f, 0x37a77802, 0x8639c2b1, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_274) {
  // -9573
  s21_decimal dec_1 = {{0x2565, 0x0, 0x0, 0x80000000}};
  // -39
  s21_decimal dec_2 = {{0x27, 0x0, 0x0, 0x80000000}};
  // 245.46153846153846153846153846
  s21_decimal dec_check = {{0x62276276, 0x4ee44bbf, 0x4f501a42, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_276) {
  // -8510704155093545.63740
  s21_decimal dec_1 = {{0xcf2dc89c, 0x22f981bd, 0x2e, 0x80050000}};
  // -524774786153.069
  s21_decimal dec_2 = {{0xa6b73a6d, 0x1dd47, 0x0, 0x80030000}};
  // 16217.822158496578029991492955
  s21_decimal dec_check = {{0x775ffd5b, 0xdc7ca88c, 0x3467116c, 0x180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_278) {
  // -1778518509188289454711129246
  s21_decimal dec_1 = {{0x6a96449e, 0x92c91c3f, 0x5bf27f1, 0x80000000}};
  // -9684677.682185029
  s21_decimal dec_2 = {{0xbd02c345, 0x226829, 0x0, 0x80090000}};
  // 183642509080077639376.67735388
  s21_decimal dec_check = {{0xf5ae5f5c, 0x86cbb3dc, 0x3b568d64, 0x80000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_279) {
  // -577862151700392818
  s21_decimal dec_1 = {{0xb93eab72, 0x804fa90, 0x0, 0x80000000}};
  // -7.7
  s21_decimal dec_2 = {{0x4d, 0x0, 0x0, 0x80010000}};
  // 75047032688362703.636363636364
  s21_decimal dec_check = {{0x53f26e8c, 0xf736820f, 0xf27d7351, 0xc0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_280) {
  // 1441451847900670
  s21_decimal dec_1 = {{0x295addfe, 0x51efe, 0x0, 0x0}};
  // 342.769047
  s21_decimal dec_2 = {{0x146e3d97, 0x0, 0x0, 0x60000}};
  // 4205315096321.0222421279480349
  s21_decimal dec_check = {{0x2c1b9a1d, 0xb56b6b1d, 0x87e18d19, 0x100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_281) {
  // 33577887126976167072
  s21_decimal dec_1 = {{0x4f937ca0, 0xd1fc9e70, 0x1, 0x0}};
  // 179.98260
  s21_decimal dec_2 = {{0x112a1b4, 0x0, 0x0, 0x50000}};
  // 186561851684419310.93339022772
  s21_decimal dec_check = {{0x84ec25b4, 0x7eeead15, 0x3c4808e0, 0xb0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_282) {
  // -963862921.768888134151
  s21_decimal dec_1 = {{0x8cb36a07, 0x4048fc95, 0x34, 0x800c0000}};
  // 0.841475789
  s21_decimal dec_2 = {{0x3227e6cd, 0x0, 0x0, 0x90000}};
  // -1145443439.2156803148985193203
  s21_decimal dec_check = {{0x554cd2f3, 0xa0e26037, 0x2502e2d4, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_284) {
  // -19927523607.4367393606351931
  s21_decimal dec_1 = {{0xbbd73c3b, 0x31979aa4, 0xa4d62c, 0x80100000}};
  // -78.471
  s21_decimal dec_2 = {{0x13287, 0x0, 0x0, 0x80030000}};
  // 253947618.96033871571198523149
  s21_decimal dec_check = {{0xd2e5b70d, 0xdf2147ac, 0x520e0e00, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_285) {
  // -57556844551712856502
  s21_decimal dec_1 = {{0xa938d9b6, 0x1ec2fd2b, 0x3, 0x80000000}};
  // -27356.430
  s21_decimal dec_2 = {{0x1a16d0e, 0x0, 0x0, 0x80030000}};
  // 2103960368794936.1997161179291
  s21_decimal dec_check = {{0x348289b, 0x55df2a19, 0x43fb8d61, 0xd0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_286) {
  // 6346215309701245
  s21_decimal dec_1 = {{0x6533f07d, 0x168bd9, 0x0, 0x0}};
  // 11613.3484781026884008
  s21_decimal dec_2 = {{0x555739a8, 0x4bad051b, 0x6, 0x100000}};
  // 546458699802.83648817362211989
  s21_decimal dec_check = {{0xccc59495, 0x7fcb6111, 0xb0920113, 0x110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_287) {
  // -9051029619043112291950529032
  s21_decimal dec_1 = {{0xe1160a08, 0xcf52f3b1, 0x1d3ed612, 0x80000000}};
  // -66139100
  s21_decimal dec_2 = {{0x3f133dc, 0x0, 0x0, 0x80000000}};
  // 136848394051977004403.60587054
  s21_decimal dec_check = {{0x2b358f2e, 0xa959fb37, 0x2c37d576, 0x80000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_288) {
  // 402503547481977060351
  s21_decimal dec_1 = {{0x31d0fbff, 0xd1dbdbe1, 0x15, 0x0}};
  // 558595971.7
  s21_decimal dec_2 = {{0x4cf2fb25, 0x1, 0x0, 0x10000}};
  // 720562925394.93274034829564096
  s21_decimal dec_check = {{0xdcfc98c0, 0xa0e43d2e, 0xe8d39175, 0x110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_289) {
  // 92755425861572
  s21_decimal dec_1 = {{0x4e359fc4, 0x545c, 0x0, 0x0}};
  // -22020659
  s21_decimal dec_2 = {{0x1500233, 0x0, 0x0, 0x80000000}};
  // -4212200.2734601176104675159812
  s21_decimal dec_check = {{0xde95af04, 0xb6f9b45d, 0x881a8107, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_290) {
  // -14442444936
  s21_decimal dec_1 = {{0x5cd63888, 0x3, 0x0, 0x80000000}};
  // 203382717.4
  s21_decimal dec_2 = {{0x7939bd66, 0x0, 0x0, 0x10000}};
  // -71.011171060299738133010115834
  s21_decimal dec_check = {{0xa304ecfa, 0xb741269f, 0xe5731060, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_291) {
  // 6669065292693956
  s21_decimal dec_1 = {{0xc3c141c4, 0x17b17a, 0x0, 0x0}};
  // -6
  s21_decimal dec_2 = {{0x6, 0x0, 0x0, 0x80000000}};
  // -1111510882115659.3333333333333
  s21_decimal dec_check = {{0xa1bb1555, 0x90c723cd, 0x23ea33d8, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_292) {
  // 192435186996382373818118
  s21_decimal dec_1 = {{0x7898af06, 0xeeb11fe4, 0x28bf, 0x0}};
  // -94486
  s21_decimal dec_2 = {{0x17116, 0x0, 0x0, 0x80000000}};
  // -2036652911504163302.6915945219
  s21_decimal dec_check = {{0xfccbcb03, 0xa0391217, 0x41cecc4b, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_293) {
  // -226797025553392
  s21_decimal dec_1 = {{0x4c24ebf0, 0xce45, 0x0, 0x80000000}};
  // -72.0
  s21_decimal dec_2 = {{0x2d0, 0x0, 0x0, 0x80010000}};
  // 3149958688241.5555555555555556
  s21_decimal dec_check = {{0xb51c38e4, 0x83fa920a, 0x65c7d8fa, 0x100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_294) {
  // -23120538681912569135425
  s21_decimal dec_1 = {{0xe4dc8141, 0x5dee0955, 0x4e5, 0x80000000}};
  // 57278.0384864
  s21_decimal dec_2 = {{0x5c5f1260, 0x85, 0x0, 0x70000}};
  // -403654512146086680.33581106051
  s21_decimal dec_check = {{0xf634c383, 0x3068271, 0x826d84c7, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_296) {
  // 9087152204428543018934076
  s21_decimal dec_1 = {{0xf5581f3c, 0x821203f1, 0x78447, 0x0}};
  // 785.288762852
  s21_decimal dec_2 = {{0xd6db95e4, 0xb6, 0x0, 0x90000}};
  // 11571733398331028406536.702479
  s21_decimal dec_check = {{0xb6c70a0f, 0x7ea34015, 0x2563e9dc, 0x60000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_297) {
  // 666476859.491630175
  s21_decimal dec_1 = {{0x2d043c5f, 0x93fcd2c, 0x0, 0x90000}};
  // -4131935.1266130
  s21_decimal dec_2 = {{0x69412b52, 0x2594, 0x0, 0x80070000}};
  // -161.29896502947996900301013560
  s21_decimal dec_check = {{0x89b50238, 0x85ebb68a, 0x341e5671, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_299) {
  // -1225173910174.407986
  s21_decimal dec_1 = {{0x18059d32, 0x1100b12e, 0x0, 0x80060000}};
  // -73361655161.2
  s21_decimal dec_2 = {{0xcef436bc, 0xaa, 0x0, 0x80010000}};
  // 16.700467123898618230839295286
  s21_decimal dec_check = {{0x5cc9bd36, 0xdcd8ae5e, 0x35f64d78, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_301) {
  // 3045432956667664343
  s21_decimal dec_1 = {{0x817197d7, 0x2a438d23, 0x0, 0x0}};
  // 2056131972155130
  s21_decimal dec_2 = {{0x87cfc6fa, 0x74e0a, 0x0, 0x0}};
  // 1481.1466374289198909143034605
  s21_decimal dec_check = {{0xaf3eaaed, 0x8f6e5a7, 0x2fdbc201, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_302) {
  // 93470503434491974530
  s21_decimal dec_1 = {{0x4dd2d382, 0x1129efa5, 0x5, 0x0}};
  // 9117.4
  s21_decimal dec_2 = {{0x16426, 0x0, 0x0, 0x10000}};
  // 10251881395407898.581832539979
  s21_decimal dec_check = {{0xb16f9f4b, 0xc5a021d, 0x21202854, 0xc0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_303) {
  // 13277956587
  s21_decimal dec_1 = {{0x176d89eb, 0x3, 0x0, 0x0}};
  // -43767701.342
  s21_decimal dec_2 = {{0x30c21f5e, 0xa, 0x0, 0x80030000}};
  // -303.37340504236892578638817198
  s21_decimal dec_check = {{0xea1167ae, 0x1b36e4fc, 0x620675bc, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_306) {
  // -89453135496115605940047635
  s21_decimal dec_1 = {{0xb718f13, 0x3128a501, 0x49fe70, 0x80000000}};
  // 54753742639.909090
  s21_decimal dec_2 = {{0x242cc8e2, 0xc2863d, 0x0, 0x60000}};
  // -1633735543603090.7427722203280
  s21_decimal dec_check = {{0x897d9090, 0xd214ba20, 0x34c9f194, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_307) {
  // 16483943265097979445805050
  s21_decimal dec_1 = {{0xe0c67ffa, 0x5ade7c27, 0xda29c, 0x0}};
  // 76879377867781216285914
  s21_decimal dec_2 = {{0x8f5234da, 0xa3b15e58, 0x1047, 0x0}};
  // 214.41306787689430178394235174
  s21_decimal dec_check = {{0x454b6126, 0x1ce4441, 0x4547d552, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_309) {
  // -918872342750020
  s21_decimal dec_1 = {{0xa3956344, 0x343b5, 0x0, 0x80000000}};
  // 344377965800536
  s21_decimal dec_2 = {{0xbe51ec58, 0x13935, 0x0, 0x0}};
  // -2.6682088693276956456371528841
  s21_decimal dec_check = {{0x22faa489, 0x62953a05, 0x5636e80e, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_310) {
  // 36518404701671233062146
  s21_decimal dec_1 = {{0x9cb28502, 0xaaabe95e, 0x7bb, 0x0}};
  // 0.006
  s21_decimal dec_2 = {{0x6, 0x0, 0x0, 0x30000}};
  // 6086400783611872177024333.3333
  s21_decimal dec_check = {{0xa7659cd5, 0x1acfdc2f, 0xc4a986fc, 0x40000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_311) {
  // 50314101.38024313459684004614
  s21_decimal dec_1 = {{0x46e1d306, 0x1d967eac, 0x1041e28a, 0x140000}};
  // -731061
  s21_decimal dec_2 = {{0xb27b5, 0x0, 0x0, 0x80000000}};
  // -68.823396926170503688255899494
  s21_decimal dec_check = {{0x8d9b0766, 0x42624c3d, 0xde61612f, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_312) {
  // 46.96
  s21_decimal dec_1 = {{0x1258, 0x0, 0x0, 0x20000}};
  // 0.914
  s21_decimal dec_2 = {{0x392, 0x0, 0x0, 0x30000}};
  // 51.378555798687089715536105033
  s21_decimal dec_check = {{0x17f28e49, 0xce226b74, 0xa6035862, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_313) {
  // -6878756262288982
  s21_decimal dec_1 = {{0x3f829e56, 0x187031, 0x0, 0x80000000}};
  // 62682956548066
  s21_decimal dec_2 = {{0x835bc7e2, 0x3902, 0x0, 0x0}};
  // -109.73886110515980371984191388
  s21_decimal dec_check = {{0x86e90f9c, 0x14dcf2fa, 0x237562c6, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_314) {
  // 4751614829909617
  s21_decimal dec_1 = {{0x8a0bd671, 0x10e191, 0x0, 0x0}};
  // -63364
  s21_decimal dec_2 = {{0xf784, 0x0, 0x0, 0x80000000}};
  // -74989186760.772946783662647560
  s21_decimal dec_check = {{0xe49e2908, 0xf29379bf, 0xf24d99f7, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_316) {
  // -248091.2
  s21_decimal dec_1 = {{0x25db10, 0x0, 0x0, 0x80010000}};
  // 71894
  s21_decimal dec_2 = {{0x118d6, 0x0, 0x0, 0x0}};
  // -3.4507914429576877069018276908
  s21_decimal dec_check = {{0x4ebb242c, 0x9fe2f4dc, 0x6f80471d, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_317) {
  // -9177570031567328707547713690
  s21_decimal dec_1 = {{0x929f509a, 0x5172cb37, 0x1da7820c, 0x80000000}};
  // -39407963559054585703014.3166
  s21_decimal dec_2 = {{0xb2483cbe, 0xda1b3fbd, 0x145f99b, 0x80040000}};
  // 232886.17839423069721728035812
  s21_decimal dec_check = {{0xbf2eabe4, 0xc8cbb528, 0x4b3fe4a6, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_318) {
  // -4751060991260343.055142054
  s21_decimal dec_1 = {{0x8a8bcca6, 0x884c7751, 0x3ee13, 0x80090000}};
  // -3906577326217
  s21_decimal dec_2 = {{0x92276089, 0x38d, 0x0, 0x80000000}};
  // 1216.1697042001503259968036223
  s21_decimal dec_check = {{0xb56e5d7f, 0xb3d254b6, 0x274beb85, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_319) {
  // 9385083376734231381900278984
  s21_decimal dec_1 = {{0x8edc3cc8, 0x4cf6e615, 0x1e5328b5, 0x0}};
  // 8926364056513621599549278
  s21_decimal dec_2 = {{0x3559775e, 0x2a458771, 0x7623b, 0x0}};
  // 1051.3892686110958618521420547
  s21_decimal dec_check = {{0x8634c303, 0x93faf1b5, 0x21f8e360, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_320) {
  // 699433278678468785915029926
  s21_decimal dec_1 = {{0xddfe9a6, 0x3394760, 0x2428ec2, 0x0}};
  // -5937354519873120978834.170486
  s21_decimal dec_2 = {{0x83562276, 0x769137b0, 0x132f43b9, 0x80060000}};
  // -117802.17541960344497391989199
  s21_decimal dec_check = {{0x6d00f1cf, 0x91382142, 0x26105e18, 0x80170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_321) {
  // 7444693737122023266282883
  s21_decimal dec_1 = {{0xc71b6d83, 0xa7fa5a94, 0x62879, 0x0}};
  // -498873811824049790
  s21_decimal dec_2 = {{0xb5847e7e, 0x6ec5b16, 0x0, 0x80000000}};
  // -14922999.685835840576926561892
  s21_decimal dec_check = {{0xb784b664, 0xf81c919c, 0x30380419, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_322) {
  // 35339151478432318.7534
  s21_decimal dec_1 = {{0xcc9b34e, 0x284ade59, 0x13, 0x40000}};
  // 668
  s21_decimal dec_2 = {{0x29c, 0x0, 0x0, 0x0}};
  // 52902921374898.680768562874251
  s21_decimal dec_check = {{0xa862478b, 0x4655f25e, 0xaaf0455a, 0xf0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_323) {
  // -673998227633424161821463718
  s21_decimal dec_1 = {{0xdff094a6, 0x21f08f4e, 0x22d84ad, 0x80000000}};
  // -901561788848887
  s21_decimal dec_2 = {{0x362adaf7, 0x333f7, 0x0, 0x80000000}};
  // 747589611682.61609944036668199
  s21_decimal dec_check = {{0xfe43f327, 0x91c67fbf, 0xf18f29cd, 0x110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_324) {
  // 5025476805020714068098871
  s21_decimal dec_1 = {{0x236c3f37, 0xa4bbb115, 0x4282f, 0x0}};
  // 14025763266308387796
  s21_decimal dec_2 = {{0x808b3d4, 0xc2a58561, 0x0, 0x0}};
  // 358303.26732324997971268732515
  s21_decimal dec_check = {{0xade20663, 0x33de465e, 0x73c626d0, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_325) {
  // 977884265203221
  s21_decimal dec_1 = {{0x6c424615, 0x37961, 0x0, 0x0}};
  // 313912
  s21_decimal dec_2 = {{0x4ca38, 0x0, 0x0, 0x0}};
  // 3115154136.2012952674634929534
  s21_decimal dec_check = {{0xcd09957e, 0xc5f011f, 0x64a7f379, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_326) {
  // -209793745759826501567
  s21_decimal dec_1 = {{0xd1125fbf, 0x5f791c3b, 0xb, 0x80000000}};
  // 3
  s21_decimal dec_2 = {{0x3, 0x0, 0x0, 0x0}};
  // -69931248586608833855.666666667
  s21_decimal dec_check = {{0x5f263cab, 0x1c7b66b2, 0xe1f5c5e6, 0x80090000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_327) {
  // 32459484589186061.866127628431
  s21_decimal dec_1 = {{0xbf5c988f, 0x77bf6165, 0x68e1db39, 0xc0000}};
  // -933
  s21_decimal dec_2 = {{0x3a5, 0x0, 0x0, 0x80000000}};
  // -34790444361399.851946546225542
  s21_decimal dec_check = {{0xe426e186, 0xeb150324, 0x7069fb27, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_328) {
  // -13534300063555699132987900958
  s21_decimal dec_1 = {{0x82d8841e, 0x9950d247, 0x2bbb4f84, 0x80000000}};
  // 60074233977091
  s21_decimal dec_2 = {{0x1f605903, 0x36a3, 0x0, 0x0}};
  // -225292927891796.91942574043616
  s21_decimal dec_check = {{0x1cd431e0, 0x545c2e89, 0x48cbcb51, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_329) {
  // -4497
  s21_decimal dec_1 = {{0x1191, 0x0, 0x0, 0x80000000}};
  // -35.607
  s21_decimal dec_2 = {{0x8b17, 0x0, 0x0, 0x80030000}};
  // 126.29539135563231948774117449
  s21_decimal dec_check = {{0x9e711049, 0x69d5bf89, 0x28cee8f0, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_331) {
  // 3904353882940604703569984063
  s21_decimal dec_1 = {{0x7f81ba3f, 0x1a10efa4, 0xc9d9b18, 0x0}};
  // -990509292588
  s21_decimal dec_2 = {{0x9ef45c2c, 0xe6, 0x0, 0x80000000}};
  // -3941764011864360.6471020768602
  s21_decimal dec_check = {{0x396ded5a, 0x8b548a83, 0x7f5d81f8, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_332) {
  // 559165996.543962532711
  s21_decimal dec_1 = {{0xb0304b67, 0x4ffcaf44, 0x1e, 0xc0000}};
  // -768800.353562240087760
  s21_decimal dec_2 = {{0x3809f6d0, 0xad3f8849, 0x29, 0x800f0000}};
  // -727.32276195382095408616197358
  s21_decimal dec_check = {{0xe8c4cee, 0xade0686, 0xeb02ba91, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_333) {
  // -6863246556
  s21_decimal dec_1 = {{0x9914d4dc, 0x1, 0x0, 0x80000000}};
  // 65.15
  s21_decimal dec_2 = {{0x1973, 0x0, 0x0, 0x20000}};
  // -105345304.00613967766692248657
  s21_decimal dec_check = {{0xa6bb3c51, 0x52b0f6d9, 0x2209f595, 0x80140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_334) {
  // 7.8
  s21_decimal dec_1 = {{0x4e, 0x0, 0x0, 0x10000}};
  // 1.573
  s21_decimal dec_2 = {{0x625, 0x0, 0x0, 0x30000}};
  // 4.9586776859504132231404958678
  s21_decimal dec_check = {{0x6043b3d6, 0xe1a479d0, 0xa039386f, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_335) {
  // 590616879732075
  s21_decimal dec_1 = {{0xb550956b, 0x21929, 0x0, 0x0}};
  // -8603780.7750617284
  s21_decimal dec_2 = {{0x283a98c4, 0x131aaee, 0x0, 0x800a0000}};
  // -68646202.776806290689863862851
  s21_decimal dec_check = {{0x426a4a43, 0x2cb8a3a3, 0xddcecedd, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_336) {
  // -903302402918.240550
  s21_decimal dec_1 = {{0xe2b2d126, 0xc892cbf, 0x0, 0x80060000}};
  // -31621054282
  s21_decimal dec_2 = {{0x5cc2ff4a, 0x7, 0x0, 0x80000000}};
  // 28.566485951495845510974161896
  s21_decimal dec_check = {{0x68b243e8, 0x71c5a22a, 0x5c4da4b2, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_338) {
  // 9288078756961889397
  s21_decimal dec_1 = {{0x4a90ac75, 0x80e5e26b, 0x0, 0x0}};
  // 5424.677267449
  s21_decimal dec_2 = {{0x7f627f9, 0x4ef, 0x0, 0x90000}};
  // 1712190108100142.5846598729980
  s21_decimal dec_check = {{0xc8c980fc, 0x7486d969, 0x3752e795, 0xd0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_339) {
  // -650219048382758746538426063.0
  s21_decimal dec_1 = {{0x71377416, 0x6c8cb7a1, 0x15027c64, 0x80010000}};
  // -2.5354949466
  s21_decimal dec_2 = {{0xe745d35a, 0x5, 0x0, 0x800a0000}};
  // 256446596059943709665931172.87
  s21_decimal dec_check = {{0x87f29c67, 0xdf9eddca, 0x52dcc3e6, 0x20000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_340) {
  // -6048017048517270871126555479
  s21_decimal dec_1 = {{0xa987bb57, 0x295df0ec, 0x138acd6d, 0x80000000}};
  // -369744323267.826
  s21_decimal dec_2 = {{0xcf0bccf2, 0x15047, 0x0, 0x80030000}};
  // 16357295211632936.751744941762
  s21_decimal dec_check = {{0xd3d7fec2, 0x38d244e5, 0x34da6ffe, 0xc0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_341) {
  // -30113557536757
  s21_decimal dec_1 = {{0x5be65ff5, 0x1b63, 0x0, 0x80000000}};
  // -6891
  s21_decimal dec_2 = {{0x1aeb, 0x0, 0x0, 0x80000000}};
  // 4369983679.6919169931795095052
  s21_decimal dec_check = {{0xe94dde0c, 0x9fc43407, 0x8d33a863, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_342) {
  // -448834417665565826
  s21_decimal dec_1 = {{0x5bece482, 0x63a9486, 0x0, 0x80000000}};
  // -2.510424
  s21_decimal dec_2 = {{0x264e58, 0x0, 0x0, 0x80060000}};
  // 178788291406378295.45925309828
  s21_decimal dec_check = {{0xc4f07584, 0xc9f105a2, 0x39c50555, 0xb0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_343) {
  // -50890220416085567374909
  s21_decimal dec_1 = {{0x7fee863d, 0xc3ae307c, 0xac6, 0x80000000}};
  // 264.41020987
  s21_decimal dec_2 = {{0x2801f63b, 0x6, 0x0, 0x80000}};
  // -192466926451540081654.21906595
  s21_decimal dec_check = {{0xbdef7aa3, 0xf3aba3fc, 0x3e307db2, 0x80080000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_344) {
  // 2107829219604984495386419
  s21_decimal dec_1 = {{0x4174af33, 0xa6a510e6, 0x1be59, 0x0}};
  // 90213
  s21_decimal dec_2 = {{0x16065, 0x0, 0x0, 0x0}};
  // 23365027430691635300.748439804
  s21_decimal dec_check = {{0x491330fc, 0x6e7188d, 0x4b7f1903, 0x90000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_345) {
  // -74365518119912
  s21_decimal dec_1 = {{0x924a83e8, 0x43a2, 0x0, 0x80000000}};
  // -2998.042
  s21_decimal dec_2 = {{0x2dbf1a, 0x0, 0x0, 0x80030000}};
  // 24804695237.729157897054144005
  s21_decimal dec_check = {{0x3f094605, 0x3ab605c3, 0x5025f687, 0x120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_346) {
  // 65631406921804078393
  s21_decimal dec_1 = {{0x833edd39, 0x8ed198dd, 0x3, 0x0}};
  // -5.71
  s21_decimal dec_2 = {{0x23b, 0x0, 0x0, 0x80020000}};
  // -11494116798914899893.695271454
  s21_decimal dec_check = {{0x70f7d21e, 0x35939772, 0x2523b5e8, 0x80090000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_348) {
  // 8125214664
  s21_decimal dec_1 = {{0xe44cefc8, 0x1, 0x0, 0x0}};
  // -7.784726813497
  s21_decimal dec_2 = {{0x85e05b39, 0x714, 0x0, 0x800c0000}};
  // -1043737931.8067615596226368830
  s21_decimal dec_check = {{0x3471553e, 0x95d04326, 0x21b9990a, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_350) {
  // 173849893706405924298
  s21_decimal dec_1 = {{0xd1be4dca, 0x6ca6e53a, 0x9, 0x0}};
  // 79.183382
  s21_decimal dec_2 = {{0x4b83e16, 0x0, 0x0, 0x60000}};
  // 2195535089754134577.1010387003
  s21_decimal dec_check = {{0xd4dfec3b, 0xa2ffe96, 0x46f10a65, 0xa0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_351) {
  // -109779.1108180398167
  s21_decimal dec_1 = {{0x50acd057, 0xf3c2332, 0x0, 0x800d0000}};
  // -650.17553531100888
  s21_decimal dec_2 = {{0xd662ded8, 0xe6fd1e, 0x0, 0x800e0000}};
  // 168.84534230517827142857641914
  s21_decimal dec_check = {{0x32adcfba, 0xb4e7f990, 0x368e8f32, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_352) {
  // -682086722655.1056611715145
  s21_decimal dec_1 = {{0x1b00a849, 0xf4090ccb, 0x5a45f, 0x800d0000}};
  // -32.760575
  s21_decimal dec_2 = {{0x1f3e2ff, 0x0, 0x0, 0x80060000}};
  // 20820352593.173522173268158450
  s21_decimal dec_check = {{0xf8f167f2, 0xabf10da1, 0x43463127, 0x120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_354) {
  // -43545584922346.95302
  s21_decimal dec_1 = {{0x934f4286, 0x3c6e7fe0, 0x0, 0x80050000}};
  // -2304383532.24281782
  s21_decimal dec_2 = {{0x1a8f2eb6, 0x332ae76, 0x0, 0x80080000}};
  // 18896.847817674155131933395617
  s21_decimal dec_check = {{0xe3e98aa1, 0xda3e5d85, 0x3d0f1b2c, 0x180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_356) {
  // -9324260469.562733596767180
  s21_decimal dec_1 = {{0xecdbf3cc, 0x2c42ea0f, 0x7b67d, 0x800f0000}};
  // -77416.7035613110
  s21_decimal dec_2 = {{0xcf278fb6, 0x2c019, 0x0, 0x800a0000}};
  // 120442.48903181836141779615355
  s21_decimal dec_check = {{0x96d5fe7b, 0x56dc0a17, 0x26eac4e9, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_357) {
  // -6076
  s21_decimal dec_1 = {{0x17bc, 0x0, 0x0, 0x80000000}};
  // 184.3049
  s21_decimal dec_2 = {{0x1c1f69, 0x0, 0x0, 0x40000}};
  // -32.967110478343223647336560233
  s21_decimal dec_check = {{0x167a7669, 0xf394bc7, 0x6a85c130, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_360) {
  // -9850549492586833326
  s21_decimal dec_1 = {{0xb40ae5ae, 0x88b42e92, 0x0, 0x80000000}};
  // 603416204509
  s21_decimal dec_2 = {{0x7e6894dd, 0x8c, 0x0, 0x0}};
  // -16324635.332924526404566716044
  s21_decimal dec_check = {{0x6a3b0e8c, 0xa646ef38, 0x34bf6bfe, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_361) {
  // -47981232691578474432429
  s21_decimal dec_1 = {{0x4ec587ad, 0x115db586, 0xa29, 0x80000000}};
  // -455
  s21_decimal dec_2 = {{0x1c7, 0x0, 0x0, 0x80000000}};
  // 105453258662809833917.42637363
  s21_decimal dec_check = {{0xa702b533, 0xb081311c, 0x2212e39c, 0x80000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_363) {
  // 22937984385272196707
  s21_decimal dec_1 = {{0x8b9b2e63, 0x3e541744, 0x1, 0x0}};
  // 6.94
  s21_decimal dec_2 = {{0x2b6, 0x0, 0x0, 0x20000}};
  // 3305185069923947652.3054755043
  s21_decimal dec_check = {{0x39056ce3, 0xa39bfd59, 0x6acbd9a0, 0xa0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_364) {
  // -859002008711073637222562883
  s21_decimal dec_1 = {{0xd72bbc43, 0x3360f038, 0x2c68cc0, 0x80000000}};
  // -2756084779.70485
  s21_decimal dec_2 = {{0x196d3035, 0xfaaa, 0x0, 0x80050000}};
  // 311674740572771653.60008135764
  s21_decimal dec_check = {{0xc3d80454, 0x3074552f, 0x64b5215a, 0xb0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_365) {
  // -263756115
  s21_decimal dec_1 = {{0xfb89953, 0x0, 0x0, 0x80000000}};
  // 130078.3
  s21_decimal dec_2 = {{0x13d92f, 0x0, 0x0, 0x10000}};
  // -2027.6719099188719409770884152
  s21_decimal dec_check = {{0x58a96c38, 0xe9332277, 0x41848248, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_366) {
  // -3468976330385698.9598311
  s21_decimal dec_1 = {{0x68f0f267, 0x892c9a9d, 0x758, 0x80070000}};
  // 0.3
  s21_decimal dec_2 = {{0x3, 0x0, 0x0, 0x10000}};
  // -11563254434618996.532770333333
  s21_decimal dec_check = {{0xda416295, 0xf369762c, 0x255ce65e, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_367) {
  // -25141861
  s21_decimal dec_1 = {{0x17fa265, 0x0, 0x0, 0x80000000}};
  // 24.67765746
  s21_decimal dec_2 = {{0x93171df2, 0x0, 0x0, 0x80000}};
  // -1018810.6809065012445472204881
  s21_decimal dec_check = {{0xfb9da851, 0xcb8dcb06, 0x20eb6788, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_368) {
  // -969547.6510002762551205
  s21_decimal dec_1 = {{0xeab10fa5, 0x97c40502, 0x20d, 0x80100000}};
  // -641.3719613780650926570262143
  s21_decimal dec_2 = {{0xf6a0ce7f, 0xf2dd9597, 0x14b94df4, 0x80190000}};
  // 1511.6776369785265826871076929
  s21_decimal dec_check = {{0x910b6841, 0xe104b19, 0x30d84de9, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_370) {
  // -2941
  s21_decimal dec_1 = {{0xb7d, 0x0, 0x0, 0x80000000}};
  // 7.123
  s21_decimal dec_2 = {{0x1bd3, 0x0, 0x0, 0x30000}};
  // -412.88782816229116945107398568
  s21_decimal dec_check = {{0xb0a62fa8, 0x6e9040cf, 0x856947d9, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_372) {
  // -9.4
  s21_decimal dec_1 = {{0x5e, 0x0, 0x0, 0x80010000}};
  // 0.2980521479
  s21_decimal dec_2 = {{0xb1a72607, 0x0, 0x0, 0xa0000}};
  // -31.538105214909608775880926977
  s21_decimal dec_check = {{0x722de701, 0x810ac777, 0x65e7b58d, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_373) {
  // 59569315842864011
  s21_decimal dec_1 = {{0x2653b38b, 0xd3a1fa, 0x0, 0x0}};
  // -3
  s21_decimal dec_2 = {{0x3, 0x0, 0x0, 0x80000000}};
  // -19856438614288003.666666666667
  s21_decimal dec_check = {{0x5453aab, 0x2bfb7455, 0x4028dc6e, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_374) {
  // 4278917569673025181694550745
  s21_decimal dec_1 = {{0x362fe2d9, 0x3f0d26ec, 0xdd3700a, 0x0}};
  // 0.3545914298
  s21_decimal dec_2 = {{0xd35a5bba, 0x0, 0x0, 0xa0000}};
  // 12067177066536719725577955142
  s21_decimal dec_check = {{0x426ce746, 0x90b8b4eb, 0x26fdbc23, 0x0}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_375) {
  // 676674962944069793.742065463
  s21_decimal dec_1 = {{0x6340f37, 0x3e993806, 0x22fbb7f, 0x90000}};
  // 14812622.984
  s21_decimal dec_2 = {{0x72e6b088, 0x3, 0x0, 0x30000}};
  // 45682318632.897555812257312969
  s21_decimal dec_check = {{0xf74f30c9, 0x4c522554, 0x939b873f, 0x120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_377) {
  // -6053966503568
  s21_decimal dec_1 = {{0x8c85de90, 0x581, 0x0, 0x80000000}};
  // -259.8658183946
  s21_decimal dec_2 = {{0xc19130a, 0x25d, 0x0, 0x800a0000}};
  // 23296509486.966067066362648494
  s21_decimal dec_check = {{0x4bb7d7ae, 0xdad9fc97, 0x4b466bc5, 0x120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_378) {
  // -69452404452249875
  s21_decimal dec_1 = {{0x82c5113, 0xf6be98, 0x0, 0x80000000}};
  // -14278.556618
  s21_decimal dec_2 = {{0x53117bca, 0x3, 0x0, 0x80060000}};
  // 4864105407173.7179422514651824
  s21_decimal dec_check = {{0x7232a2b0, 0xd3ff7ac3, 0x9d2aefd8, 0x100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_380) {
  // 247784623550144410360436
  s21_decimal dec_1 = {{0xe7d91a74, 0x6e6d7ba7, 0x3478, 0x0}};
  // -62.746816261353791
  s21_decimal dec_2 = {{0x9e0b713f, 0xdeebe5, 0x0, 0x800f0000}};
  // -3948959298876120297394.2123359
  s21_decimal dec_check = {{0x18ba8b5f, 0x72fc482f, 0x7f990695, 0x80070000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_382) {
  // 4415330314561.13451834514
  s21_decimal dec_1 = {{0x29239c92, 0x8db87f13, 0x5d7f, 0xb0000}};
  // 1714.7056128883
  s21_decimal dec_2 = {{0x5c308373, 0xf98, 0x0, 0xa0000}};
  // 2574978632.7017520713148360741
  s21_decimal dec_check = {{0xf8676825, 0xd6e94131, 0x5333b959, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_383) {
  // -9129084034
  s21_decimal dec_1 = {{0x2022c482, 0x2, 0x0, 0x80000000}};
  // 1829.2951362131
  s21_decimal dec_2 = {{0x28de2a53, 0x10a3, 0x0, 0xa0000}};
  // -4990492.7057852987175914913947
  s21_decimal dec_check = {{0x8d03409b, 0xb1578b9b, 0xa140635c, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_384) {
  // 8452489181357446
  s21_decimal dec_1 = {{0x7f1f6586, 0x1e077e, 0x0, 0x0}};
  // 7558
  s21_decimal dec_2 = {{0x1d86, 0x0, 0x0, 0x0}};
  // 1118349984302.3876686954220693
  s21_decimal dec_check = {{0x9b7dcc95, 0x4a362e7d, 0x2422c635, 0x100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_385) {
  // 9849359695844064746196706378
  s21_decimal dec_1 = {{0xe058244a, 0xfdc38cd7, 0x1fd3330a, 0x0}};
  // -837492
  s21_decimal dec_2 = {{0xcc774, 0x0, 0x0, 0x80000000}};
  // -11760541827079022541345.715993
  s21_decimal dec_check = {{0x5254f719, 0xed21142e, 0x26001799, 0x80060000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_386) {
  // 7990612079362663449729
  s21_decimal dec_1 = {{0x64ff0481, 0x2c04d61a, 0x1b1, 0x0}};
  // 43.93035149210300032130
  s21_decimal dec_2 = {{0xb515a482, 0x259c10e8, 0xee, 0x140000}};
  // 181892741759625355443.89221435
  s21_decimal dec_check = {{0x389dbc3b, 0xe02acf4a, 0x3ac5d0a0, 0x80000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_387) {
  // -6083209824192434855
  s21_decimal dec_1 = {{0xd92812a7, 0x546be71a, 0x0, 0x80000000}};
  // -78.406679476342368732633
  s21_decimal dec_2 = {{0x718385d9, 0x6f42af57, 0x109a, 0x80150000}};
  // 77585351972824209.495084662743
  s21_decimal dec_check = {{0xbd167fd7, 0x1973ffed, 0xfab11956, 0xc0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_388) {
  // 89255890992784
  s21_decimal dec_1 = {{0x81ad3e90, 0x512d, 0x0, 0x0}};
  // 6.9
  s21_decimal dec_2 = {{0x45, 0x0, 0x0, 0x10000}};
  // 12935636375765.797101449275362
  s21_decimal dec_check = {{0x39e467e2, 0xdec7be9, 0x29cc1b8d, 0xf0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_389) {
  // -44057060333324709035.85
  s21_decimal dec_1 = {{0x89377321, 0xd57416e2, 0xee, 0x80020000}};
  // -93870032542
  s21_decimal dec_2 = {{0xdb17069e, 0x15, 0x0, 0x80000000}};
  // 469341057.42013442494764614204
  s21_decimal dec_check = {{0x46cf023c, 0x75304aab, 0x97a6fb7a, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_390) {
  // 685887056237870018.615
  s21_decimal dec_1 = {{0xb89d7037, 0x2e9853a9, 0x25, 0x30000}};
  // 138833695
  s21_decimal dec_2 = {{0x8466f1f, 0x0, 0x0, 0x0}};
  // 4940350080.2731643684553666889
  s21_decimal dec_check = {{0x12c2b149, 0xef803d14, 0x9fa19e38, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_391) {
  // -288749951072983050113147
  s21_decimal dec_1 = {{0x1c0507b, 0x2a8cee12, 0x3d25, 0x80000000}};
  // 6653641.482725729
  s21_decimal dec_2 = {{0xa10a6961, 0x17a373, 0x0, 0x90000}};
  // -43397281296661301.618806140874
  s21_decimal dec_check = {{0x1c94afca, 0x1719befa, 0x8c3963c5, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_392) {
  // -10100283740190772255
  s21_decimal dec_1 = {{0x50b98c1f, 0x8c2b6a8c, 0x0, 0x80000000}};
  // 8908531928.3195247931865
  s21_decimal dec_2 = {{0xd55531d9, 0x532865d0, 0x12dd, 0xd0000}};
  // -1133776454.0173854971012201969
  s21_decimal dec_check = {{0x330e3df1, 0x477eed15, 0x24a26107, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_393) {
  // 13313848481308320754352608
  s21_decimal dec_1 = {{0xf7e0c1e0, 0x2c210576, 0xb0351, 0x0}};
  // -551
  s21_decimal dec_2 = {{0x227, 0x0, 0x0, 0x80000000}};
  // -24163064394388966886302.373866
  s21_decimal dec_check = {{0xa5957ea, 0x83e3064d, 0x4e1337e9, 0x80060000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_395) {
  // 6101720917678908.1742601344
  s21_decimal dec_1 = {{0x7fb36c80, 0x89949c2a, 0x3278e5, 0xa0000}};
  // 439201654
  s21_decimal dec_2 = {{0x1a2daf76, 0x0, 0x0, 0x0}};
  // 13892754.870360547809458236694
  s21_decimal dec_check = {{0xe065ad16, 0x9cd832bb, 0x2ce3d146, 0x150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_396) {
  // 14241295374950521375
  s21_decimal dec_1 = {{0x9d56da1f, 0xc5a33eb0, 0x0, 0x0}};
  // 97.278531695320
  s21_decimal dec_2 = {{0x6c5372d8, 0x5879, 0x0, 0xc0000}};
  // 146397104548769210.34251424566
  s21_decimal dec_check = {{0xb0b7d336, 0xfc9ff0e4, 0x2f4daf45, 0xb0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_398) {
  // 13858334507163668710775404
  s21_decimal dec_1 = {{0x22355a6c, 0xd1a8fe4d, 0xb769d, 0x0}};
  // 93.232
  s21_decimal dec_2 = {{0x16c30, 0x0, 0x0, 0x30000}};
  // 148643539848589204466013.85790
  s21_decimal dec_check = {{0xe0fed73e, 0x261d054f, 0x30078164, 0x50000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_399) {
  // -664976152874562
  s21_decimal dec_1 = {{0xd3604e42, 0x25cca, 0x0, 0x80000000}};
  // 0.13150938673723806
  s21_decimal dec_2 = {{0x841c399e, 0x2eb8b5, 0x0, 0x110000}};
  // -5056491930900838.5033218219834
  s21_decimal dec_check = {{0xee7adf3a, 0x51ada9bb, 0xa3625228, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_400) {
  // 734710964915676425122002
  s21_decimal dec_1 = {{0x919e70d2, 0xc2df0548, 0x9b94, 0x0}};
  // -21
  s21_decimal dec_2 = {{0x15, 0x0, 0x0, 0x80000000}};
  // -34986236424556020243904.857143
  s21_decimal dec_check = {{0xa9000437, 0xee0480c2, 0x710befbc, 0x80060000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_401) {
  // -71044691982962053662583
  s21_decimal dec_1 = {{0xf764c777, 0x57290397, 0xf0b, 0x80000000}};
  // -659936275293441
  s21_decimal dec_2 = {{0x63436501, 0x25835, 0x0, 0x80000000}};
  // 107653866.96067282449017703370
  s21_decimal dec_check = {{0xdb718bca, 0x2d172a4b, 0x22c8eb4e, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_403) {
  // -715830613266950991744315962
  s21_decimal dec_1 = {{0x838fb23a, 0x4d41a5eb, 0x2501f07, 0x80000000}};
  // -64289805360195602
  s21_decimal dec_2 = {{0xc32c6812, 0xe4673c, 0x0, 0x80000000}};
  // 11134434289.486128164697618185
  s21_decimal dec_check = {{0x1d413709, 0x4d8ab441, 0x23fa302c, 0x120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_404) {
  // 82995651750390
  s21_decimal dec_1 = {{0xee5729f6, 0x4b7b, 0x0, 0x0}};
  // -2074606
  s21_decimal dec_2 = {{0x1fa7ee, 0x0, 0x0, 0x80000000}};
  // -40005500.683209245514569995459
  s21_decimal dec_check = {{0xa415d4c3, 0x9af4459e, 0x8143c649, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_405) {
  // -44842740.16171625257171
  s21_decimal dec_1 = {{0x8fff98d3, 0x17cda301, 0xf3, 0x800e0000}};
  // 893313
  s21_decimal dec_2 = {{0xda181, 0x0, 0x0, 0x0}};
  // -50.198239767826341463417637491
  s21_decimal dec_check = {{0x2b4a73, 0x8fafecdc, 0xa23302be, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_406) {
  // 965649868917030991.65
  s21_decimal dec_1 = {{0x6c371f1d, 0x3c1bbff4, 0x5, 0x20000}};
  // 23857742
  s21_decimal dec_2 = {{0x16c0a4e, 0x0, 0x0, 0x0}};
  // 40475325322.783312505014095634
  s21_decimal dec_check = {{0xe1648f12, 0x59d8932c, 0x82c86786, 0x120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_407) {
  // -991878198
  s21_decimal dec_1 = {{0x3b1edc36, 0x0, 0x0, 0x80000000}};
  // 64625557
  s21_decimal dec_2 = {{0x3da1b95, 0x0, 0x0, 0x0}};
  // -15.348079676899341850159991658
  s21_decimal dec_check = {{0x1ddcb6a, 0x757043b4, 0x3197a24a, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_408) {
  // 669800
  s21_decimal dec_1 = {{0xa3868, 0x0, 0x0, 0x0}};
  // 444.34023131796234
  s21_decimal dec_2 = {{0x34b6530a, 0x9ddc82, 0x0, 0xe0000}};
  // 1507.4034552606209318040518790
  s21_decimal dec_check = {{0x58364086, 0x80bb7814, 0x30b4f2fa, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_409) {
  // -323498170570133
  s21_decimal dec_1 = {{0x498ad595, 0x12638, 0x0, 0x80000000}};
  // 668
  s21_decimal dec_2 = {{0x29c, 0x0, 0x0, 0x0}};
  // -484278698458.28293413173652695
  s21_decimal dec_check = {{0xcb36ecd7, 0xc8dc7beb, 0x9c7a9854, 0x80110000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_410) {
  // 24353363533611.3774567365
  s21_decimal dec_1 = {{0x23969fc5, 0xfc1d81b2, 0x3391, 0xa0000}};
  // -17372938.24703
  s21_decimal dec_2 = {{0x7ec802bf, 0x194, 0x0, 0x80050000}};
  // -1401798.7738933406854882317812
  s21_decimal dec_check = {{0x1254d5f4, 0x5766b7d, 0x2d4b685e, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_412) {
  // 731224235380959
  s21_decimal dec_1 = {{0x68cd10df, 0x2990b, 0x0, 0x0}};
  // -18103114733
  s21_decimal dec_2 = {{0x37079bed, 0x4, 0x0, 0x80000000}};
  // -40392.178150869094422813323060
  s21_decimal dec_check = {{0x83e7af34, 0x21335b01, 0x8283a06d, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_413) {
  // 634020017805891097438744980
  s21_decimal dec_1 = {{0x2aa07194, 0x9045393, 0x20c72f6, 0x0}};
  // 31856731746310888329139
  s21_decimal dec_2 = {{0x39f38fb3, 0xf4f6a312, 0x6be, 0x0}};
  // 19902.230487887780522488073662
  s21_decimal dec_check = {{0x6a658dbe, 0x9d1f4902, 0x404ebd3c, 0x180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_415) {
  // 27680155836964288386486.4422
  s21_decimal dec_1 = {{0x951c26a6, 0x8bed2024, 0xe4f702, 0x40000}};
  // -388
  s21_decimal dec_2 = {{0x184, 0x0, 0x0, 0x80000000}};
  // -71340607827227547387.851655155
  s21_decimal dec_check = {{0x8fe347f3, 0xa2c5642b, 0xe6839153, 0x80090000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_416) {
  // -59203777576
  s21_decimal dec_1 = {{0xc8d1f428, 0xd, 0x0, 0x80000000}};
  // -4885261.07841
  s21_decimal dec_2 = {{0xbe6cd4c1, 0x71, 0x0, 0x80050000}};
  // 12118.856418471903185442511921
  s21_decimal dec_check = {{0x36f51c31, 0xd8ec60cd, 0x27287baa, 0x180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_417) {
  // 928506230468262268.652
  s21_decimal dec_1 = {{0x8dc08eec, 0x559cc92c, 0x32, 0x30000}};
  // -0.3729
  s21_decimal dec_2 = {{0xe91, 0x0, 0x0, 0x80040000}};
  // -2489960392781609730.8983641727
  s21_decimal dec_check = {{0x651b467f, 0xa0daedfe, 0x50747839, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_418) {
  // 98645397016238301604
  s21_decimal dec_1 = {{0xc84321a4, 0x58fad9f0, 0x5, 0x0}};
  // -92395012931.3923621070529678
  s21_decimal dec_2 = {{0xbaa7648e, 0xdf9f1171, 0x2fc460c, 0x80100000}};
  // -1067648500.5688255417851809416
  s21_decimal dec_check = {{0x2ddf8e88, 0xe2411be7, 0x227f61a3, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_419) {
  // -7294805979678544201282
  s21_decimal dec_1 = {{0xa7078642, 0x73c4fcfa, 0x18b, 0x80000000}};
  // 50209223802100137102
  s21_decimal dec_2 = {{0x34443c8e, 0xb8caff07, 0x2, 0x0}};
  // -145.28816474899217892333067710
  s21_decimal dec_check = {{0xf5581dbe, 0x495486b2, 0x2ef1f48f, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_420) {
  // 953413514316000228317284811
  s21_decimal dec_1 = {{0x25b349cb, 0x2cc7b613, 0x314a52a, 0x0}};
  // 79429542925162
  s21_decimal dec_2 = {{0xa1b0d36a, 0x483d, 0x0, 0x0}};
  // 12003260741589.565178492399104
  s21_decimal dec_check = {{0x5deeae00, 0xa5a64b05, 0x26c8dd54, 0xf0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_421) {
  // 4043962320615
  s21_decimal dec_1 = {{0x8ef006e7, 0x3ad, 0x0, 0x0}};
  // 53.2540616317421642149
  s21_decimal dec_2 = {{0x38261a5, 0xde7c5505, 0x1c, 0x130000}};
  // 75937162287.816749824141288586
  s21_decimal dec_check = {{0xda9e48a, 0x3de41bdd, 0xf55dbf98, 0x120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_423) {
  // 720473813961010
  s21_decimal dec_1 = {{0x61c04932, 0x28f44, 0x0, 0x0}};
  // 5172549
  s21_decimal dec_2 = {{0x4eed45, 0x0, 0x0, 0x0}};
  // 139287963.04510793421193303340
  s21_decimal dec_check = {{0x7015552c, 0xac455cff, 0x2d01a158, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_424) {
  // -7765549598948086634672
  s21_decimal dec_1 = {{0x21d5d8b0, 0xf8a64899, 0x1a4, 0x80000000}};
  // 44.804826371825
  s21_decimal dec_2 = {{0xefc296f1, 0x28bf, 0x0, 0xc0000}};
  // -173319488719888516951.26440586
  s21_decimal dec_check = {{0x2849ea8a, 0x559b4a6, 0x3800a6ef, 0x80080000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_425) {
  // 998603082014116400627808
  s21_decimal dec_1 = {{0xaeec8060, 0x61ad29f4, 0xd376, 0x0}};
  // -702
  s21_decimal dec_2 = {{0x2be, 0x0, 0x0, 0x80000000}};
  // -1422511512840621653315.9658120
  s21_decimal dec_check = {{0xc5bf4288, 0x4dc0b5ae, 0x2df6bd4c, 0x80070000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_427) {
  // 0.7523189745058960832
  s21_decimal dec_1 = {{0xac19d5c0, 0x6867bd36, 0x0, 0x130000}};
  // 0.1083
  s21_decimal dec_2 = {{0x43b, 0x0, 0x0, 0x40000}};
  // 6.9466202632123368716528162512
  s21_decimal dec_check = {{0x302e96d0, 0x67400dd2, 0xe0751896, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_428) {
  // -402166104621444
  s21_decimal dec_1 = {{0x97ce8184, 0x16dc4, 0x0, 0x80000000}};
  // -50946
  s21_decimal dec_2 = {{0xc702, 0x0, 0x0, 0x80000000}};
  // 7893968213.8233423625014721470
  s21_decimal dec_check = {{0x6857bbbe, 0x7ab975b4, 0xff115fe7, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_430) {
  // 64378919501735762160544
  s21_decimal dec_1 = {{0xcc1d6ba0, 0xfcfbf0b1, 0xda1, 0x0}};
  // 0.18837225
  s21_decimal dec_2 = {{0x11f6ee9, 0x0, 0x0, 0x80000}};
  // 341764349588305932325722.07424
  s21_decimal dec_check = {{0x47c75140, 0x8239155a, 0x6e6e159b, 0x50000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_431) {
  // -252033.3547119655333702723
  s21_decimal dec_1 = {{0xb5e0ac43, 0x8e2bfde5, 0x215b3, 0x80130000}};
  // 0.033029492417489811280
  s21_decimal dec_2 = {{0x1ff03750, 0xca60545b, 0x1, 0x150000}};
  // -7630554.8848976125491934878900
  s21_decimal dec_check = {{0x4dbb5cb4, 0xbce94cd3, 0xf68e787b, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_432) {
  // 323.835318496
  s21_decimal dec_1 = {{0x6616d0e0, 0x4b, 0x0, 0x90000}};
  // -11.21217688563
  s21_decimal dec_2 = {{0xdc833f3, 0x105, 0x0, 0x800b0000}};
  // -28.882466072314738225291717284
  s21_decimal dec_check = {{0xf91feaa4, 0x1dfbf2d3, 0x5d530417, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_433) {
  // 4690058209990
  s21_decimal dec_1 = {{0xfd40eac6, 0x443, 0x0, 0x0}};
  // -665030751086.95897
  s21_decimal dec_2 = {{0xc8532f59, 0xec4431, 0x0, 0x80050000}};
  // -7.0523929943455068428504878278
  s21_decimal dec_check = {{0xf4834cc6, 0xd8710f44, 0xe3e0070e, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_434) {
  // -1403665982229831348183
  s21_decimal dec_1 = {{0x9cddefd7, 0x17c755e5, 0x4c, 0x80000000}};
  // -760280849.6629903
  s21_decimal dec_2 = {{0xcbbca88f, 0x1b02b6, 0x0, 0x80070000}};
  // 1846246663784.8821030690750426
  s21_decimal dec_check = {{0x8d47ffda, 0xe8eb6692, 0x3ba7cb61, 0x100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_435) {
  // 96558168790846
  s21_decimal dec_1 = {{0xb359d73e, 0x57d1, 0x0, 0x0}};
  // 0.48685653431860
  s21_decimal dec_2 = {{0x83141634, 0x2c47, 0x0, 0xe0000}};
  // 198329819945803.82763285847267
  s21_decimal dec_check = {{0xdcd19ce3, 0x44fdc4aa, 0x4015754c, 0xe0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_436) {
  // -14746622937
  s21_decimal dec_1 = {{0x6ef79bd9, 0x3, 0x0, 0x80000000}};
  // 9834270
  s21_decimal dec_2 = {{0x960f1e, 0x0, 0x0, 0x0}};
  // -1499.5137348272927222864533921
  s21_decimal dec_check = {{0x1aefd9a1, 0x7c5d7fe6, 0x3073afd8, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_437) {
  // 3183065076712763
  s21_decimal dec_1 = {{0x1731c53b, 0xb4efb, 0x0, 0x0}};
  // 254941898108685.5
  s21_decimal dec_2 = {{0xdcc05687, 0x90eae, 0x0, 0x10000}};
  // 12.485452961347982520195302876
  s21_decimal dec_check = {{0x7e2d45dc, 0x42093313, 0x2857b981, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_439) {
  // 9956369860100
  s21_decimal dec_1 = {{0x25e38604, 0x90e, 0x0, 0x0}};
  // -74473
  s21_decimal dec_2 = {{0x122e9, 0x0, 0x0, 0x80000000}};
  // -133691000.22961341694305318706
  s21_decimal dec_check = {{0xa6ef3732, 0x741ad985, 0x2b32a90c, 0x80140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_440) {
  // 79513.008809032
  s21_decimal dec_1 = {{0x10a52448, 0x4851, 0x0, 0x90000}};
  // 4844.5356679238456
  s21_decimal dec_2 = {{0x93e21338, 0xac1ccb, 0x0, 0xd0000}};
  // 16.412926699145920414558384067
  s21_decimal dec_check = {{0xfc06efc3, 0x33f5aa5a, 0x3508746b, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_441) {
  // -3374788694163654358318184
  s21_decimal dec_1 = {{0xd293bc68, 0xa964d105, 0x2caa3, 0x80000000}};
  // -1695253772540607
  s21_decimal dec_2 = {{0x6ea9abf, 0x605d3, 0x0, 0x80000000}};
  // 1990727729.8701996413881124710
  s21_decimal dec_check = {{0x43838766, 0xc6b544ae, 0x4052e9f0, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_442) {
  // 81732410840319887293647
  s21_decimal dec_1 = {{0x30da3ccf, 0xb90dfe66, 0x114e, 0x0}};
  // 0.4560210180761753
  s21_decimal dec_2 = {{0xabece899, 0x10337c, 0x0, 0x100000}};
  // 179229481976786929007778.02011
  s21_decimal dec_check = {{0x68e4b91b, 0xa9d5e076, 0x39e983e8, 0x50000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_443) {
  // -4133849830.68746
  s21_decimal dec_1 = {{0xb112404a, 0x177f8, 0x0, 0x80050000}};
  // 897511.5818708195731387
  s21_decimal dec_2 = {{0xdb35e7bb, 0x8ac0bce9, 0x1e6, 0x100000}};
  // -4605.9013768609532059987915942
  s21_decimal dec_check = {{0x1feab4a6, 0x85f7b1e6, 0x94d31f8b, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_444) {
  // -1222067180.51036060490
  s21_decimal dec_1 = {{0xa6525b4a, 0x9ff57a96, 0x6, 0x800b0000}};
  // -6544
  s21_decimal dec_2 = {{0x1990, 0x0, 0x0, 0x80000000}};
  // 186746.20729070302642114914425
  s21_decimal dec_check = {{0x734be879, 0x3d73729a, 0x3c5748c2, 0x170000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_445) {
  // -771276709325030407607602
  s21_decimal dec_1 = {{0x576d1532, 0xfe835bf9, 0xa352, 0x80000000}};
  // -58553.46604594
  s21_decimal dec_2 = {{0x4ddaba32, 0x553, 0x0, 0x80080000}};
  // 13172178547379253777.069304172
  s21_decimal dec_check = {{0x6fdce96c, 0xdf2cc980, 0x2a8fc54d, 0x90000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_448) {
  // -66425063349062901938.715
  s21_decimal dec_1 = {{0x6163ba1b, 0xe8ef2ce7, 0xe10, 0x80030000}};
  // 24972376987.86
  s21_decimal dec_2 = {{0x6ef748e2, 0x245, 0x0, 0x20000}};
  // -2659941557.8803168177135098580
  s21_decimal dec_check = {{0xc1311ad4, 0xde8128ca, 0x55f28557, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_449) {
  // -2048298777346395.560607
  s21_decimal dec_1 = {{0xfed75a9f, 0x9db15a4, 0x6f, 0x80060000}};
  // -1.047034
  s21_decimal dec_2 = {{0xff9fa, 0x0, 0x0, 0x80060000}};
  // 1956286784714150.2191972753511
  s21_decimal dec_check = {{0xe535a067, 0xfef21f36, 0x3f360666, 0xd0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_450) {
  // 305815155488608.850874567967
  s21_decimal dec_1 = {{0x28698d1f, 0xcc48e1fc, 0xfcf6e0, 0xc0000}};
  // -0.665670453423011
  s21_decimal dec_2 = {{0x7ae9eba3, 0x25d6c, 0x0, 0x800f0000}};
  // -459409237583020.21236826175301
  s21_decimal dec_check = {{0x389df745, 0x3cb28252, 0x94717103, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_452) {
  // -5500.27761360281191
  s21_decimal dec_1 = {{0xb47b9e67, 0x7a21755, 0x0, 0x800e0000}};
  // -163.5118
  s21_decimal dec_2 = {{0x18f32e, 0x0, 0x0, 0x80040000}};
  // 33.638413946900541184183649131
  s21_decimal dec_check = {{0x6a88436b, 0x2831999, 0x6cb10b3a, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_454) {
  // 494198161897827731659410635
  s21_decimal dec_1 = {{0xcab1cccb, 0x9d47a23, 0x198ca88, 0x0}};
  // -88112
  s21_decimal dec_2 = {{0x15830, 0x0, 0x0, 0x80000000}};
  // -5608749794554972440296.5615921
  s21_decimal dec_check = {{0x26e51531, 0x17917fd5, 0xb53a7dac, 0x80070000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_455) {
  // 45772
  s21_decimal dec_1 = {{0xb2cc, 0x0, 0x0, 0x0}};
  // 28.2196
  s21_decimal dec_2 = {{0x44e54, 0x0, 0x0, 0x40000}};
  // 1621.9932245673220031467490680
  s21_decimal dec_check = {{0x2b800d78, 0xea949372, 0x3468d040, 0x190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_456) {
  // -608035492.97774051066408301
  s21_decimal dec_1 = {{0xfe786d6d, 0x31dd28c, 0x324ba7, 0x80110000}};
  // 8528479.40185963696406277860
  s21_decimal dec_2 = {{0x2bfa2ee4, 0x7a3b8131, 0x2c17593, 0x140000}};
  // -71.294713198833337940322406220
  s21_decimal dec_check = {{0xc7bdcf4c, 0xd865d148, 0xe65d9ac2, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_457) {
  // -7050583070668448
  s21_decimal dec_1 = {{0xcb62f6a0, 0x190c77, 0x0, 0x80000000}};
  // 102829891636
  s21_decimal dec_2 = {{0xf123a034, 0x17, 0x0, 0x0}};
  // -68565.501319658008396580977216
  s21_decimal dec_check = {{0xbb2afa40, 0x6aa2cde2, 0xdd8c0daa, 0x80180000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_458) {
  // 6996273510043198836826881634
  s21_decimal dec_1 = {{0xb19ebe62, 0xf1d010fa, 0x169b2e8a, 0x0}};
  // -0.51667566
  s21_decimal dec_2 = {{0x314626e, 0x0, 0x0, 0x80080000}};
  // -13540938835870841751722698983
  s21_decimal dec_check = {{0xa86ea8e7, 0x2acf4549, 0x2bc0cd55, 0x80000000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_459) {
  // -741838342053.04284582888312
  s21_decimal dec_1 = {{0xbb95c378, 0xb5df0d92, 0x3d5d09, 0x800e0000}};
  // -0.19
  s21_decimal dec_2 = {{0x13, 0x0, 0x0, 0x80020000}};
  // 3904412326594.9623464678058947
  s21_decimal dec_check = {{0xc3e6ebc3, 0x63001dab, 0x7e288ab3, 0x100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_460) {
  // -9546419718797239651
  s21_decimal dec_1 = {{0xb7b1a563, 0x847bb227, 0x0, 0x80000000}};
  // -17859543959561243
  s21_decimal dec_2 = {{0x1d8f641b, 0x3f7329, 0x0, 0x80000000}};
  // 534.52763073978107281304254110
  s21_decimal dec_check = {{0x6cc0f69e, 0x820c5589, 0xacb716dc, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_461) {
  // 8307803573712779.7054936
  s21_decimal dec_1 = {{0xa5faddd8, 0xab59f89e, 0x1197, 0x70000}};
  // 39295363.420259
  s21_decimal dec_2 = {{0x2a2d9063, 0x23bd, 0x0, 0x60000}};
  // 211419436.05055535255707545162
  s21_decimal dec_check = {{0xb0a96e4a, 0x5bbd9357, 0x445034b3, 0x140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_463) {
  // 314457509009652990542460
  s21_decimal dec_1 = {{0x383027c, 0xc695a8fe, 0x4296, 0x0}};
  // -7
  s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x80000000}};
  // -44922501287093284363208.571429
  s21_decimal dec_check = {{0x66613a25, 0x728d6b95, 0x912705aa, 0x80060000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_464) {
  // 1941145444736121293077248426
  s21_decimal dec_1 = {{0x988879aa, 0x6a274cc9, 0x645ad89, 0x0}};
  // 7049.6912788
  s21_decimal dec_2 = {{0x69f18594, 0x10, 0x0, 0x70000}};
  // 275351837118538827365429.68430
  s21_decimal dec_check = {{0x21976a6e, 0x24c0a43, 0x58f891f4, 0x50000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_465) {
  // 99375525569610662178
  s21_decimal dec_1 = {{0xd0644122, 0x631cc9fd, 0x5, 0x0}};
  // 51637129.29932919717208069508
  s21_decimal dec_2 = {{0xe6091584, 0xd613b24d, 0x10af52be, 0x140000}};
  // 1924497486944.9533968296388301
  s21_decimal dec_check = {{0x15fb26cd, 0x24f13e72, 0x3e2f11f2, 0x100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_466) {
  // 95393887.33981599
  s21_decimal dec_1 = {{0x4dd039f, 0x21e406, 0x0, 0x80000}};
  // 552679.19
  s21_decimal dec_2 = {{0x34b524f, 0x0, 0x0, 0x20000}};
  // 172.60264013163945977412321242
  s21_decimal dec_check = {{0x7317ffda, 0x98b948f, 0x37c55b13, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_467) {
  // 367996692697402807948604549
  s21_decimal dec_1 = {{0x18f2f485, 0xaf3b6849, 0x1306654, 0x0}};
  // 46457208614035727329702517
  s21_decimal dec_2 = {{0xf9c2b275, 0x5349f922, 0x266db2, 0x0}};
  // 7.9211968104821314940512393787
  s21_decimal dec_check = {{0x56965a3b, 0x4e13ad6b, 0xfff29ab3, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_468) {
  // 82262893982800852484083161
  s21_decimal dec_1 = {{0x62d7cdd9, 0x6b266979, 0x440bd8, 0x0}};
  // 25336270791552111
  s21_decimal dec_2 = {{0x3c76ac6f, 0x5a0334, 0x0, 0x0}};
  // 3246843020.4112683355492983698
  s21_decimal dec_check = {{0xd8b22392, 0x39827876, 0x68e94188, 0x130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_470) {
  // 12785355027194.79697652071861
  s21_decimal dec_1 = {{0x56203db5, 0x7b7f9211, 0x421946c, 0xe0000}};
  // 881429000853
  s21_decimal dec_2 = {{0x39433295, 0xcd, 0x0, 0x0}};
  // 14.505257955912287819129546566
  s21_decimal dec_check = {{0x59cde746, 0x69c360dd, 0x2ede77d9, 0x1b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_471) {
  // 973947147624541216
  s21_decimal dec_1 = {{0x442a6c20, 0xd8427c5, 0x0, 0x0}};
  // 8131.78596233213
  s21_decimal dec_2 = {{0xe55e0ffd, 0x2e394, 0x0, 0xb0000}};
  // 119770386497632.44685024597496
  s21_decimal dec_check = {{0x18dc95f8, 0x33682953, 0x26b32c96, 0xe0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_472) {
  // -13331.0
  s21_decimal dec_1 = {{0x208be, 0x0, 0x0, 0x80010000}};
  // 7794
  s21_decimal dec_2 = {{0x1e72, 0x0, 0x0, 0x0}};
  // -1.7104182704644598409032589171
  s21_decimal dec_check = {{0xe1eb5f73, 0x5925d023, 0x37443f92, 0x801c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_473) {
  // 3857458.843256726479685021
  s21_decimal dec_1 = {{0x5cfc59d, 0x434dd91f, 0x330d9, 0x120000}};
  // -626
  s21_decimal dec_2 = {{0x272, 0x0, 0x0, 0x80000000}};
  // -6162.0748294835886256949217252
  s21_decimal dec_check = {{0x266ec7e4, 0x927a189d, 0xc71b7d02, 0x80190000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_475) {
  // 60645141518
  s21_decimal dec_1 = {{0x1ebb6c0e, 0xe, 0x0, 0x0}};
  // -82075299
  s21_decimal dec_2 = {{0x4e45ea3, 0x0, 0x0, 0x80000000}};
  // -738.89638243048008877798909998
  s21_decimal dec_check = {{0xe2f0e82e, 0x5d31460c, 0xeec01383, 0x801a0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_476) {
  // -4715719465748645328
  s21_decimal dec_1 = {{0x8057c5d0, 0x417199de, 0x0, 0x80000000}};
  // 325716197488566996
  s21_decimal dec_2 = {{0xe8e5a2d4, 0x4852d27, 0x0, 0x0}};
  // -14.478001100679595071399770388
  s21_decimal dec_check = {{0x7593b914, 0x54891b18, 0x2ec7ebfc, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_477) {
  // -89.64318922067851
  s21_decimal dec_1 = {{0x2500cf8b, 0x1fd900, 0x0, 0x800e0000}};
  // 4.1155127687166004
  s21_decimal dec_2 = {{0xde7ab834, 0x92365e, 0x0, 0x100000}};
  // -21.781778907864556653445108582
  s21_decimal dec_check = {{0xef57d366, 0xa012a57d, 0x46617718, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_478) {
  // -7192321437396632752469
  s21_decimal dec_1 = {{0x95325155, 0xe582c0c2, 0x185, 0x80000000}};
  // -142428.82
  s21_decimal dec_2 = {{0xd95442, 0x0, 0x0, 0x80020000}};
  // 50497655161340469.944699394406
  s21_decimal dec_check = {{0x20c51966, 0x91450118, 0xa32aae6b, 0xc0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_479) {
  // -895785712867206395363
  s21_decimal dec_1 = {{0xcfe675e3, 0x8f8627c6, 0x30, 0x80000000}};
  // -7265.015153
  s21_decimal dec_2 = {{0xb1075571, 0x1, 0x0, 0x80060000}};
  // 123301286233009787.55205632811
  s21_decimal dec_check = {{0x6354932b, 0x53af9e5, 0x27d73e4c, 0xb0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_480) {
  // -8559948020006
  s21_decimal dec_1 = {{0x4a93926, 0x7c9, 0x0, 0x80000000}};
  // 481.0
  s21_decimal dec_2 = {{0x12ca, 0x0, 0x0, 0x10000}};
  // -17796149729.742203742203742204
  s21_decimal dec_check = {{0x47e907fc, 0xf174f70d, 0x3980a149, 0x80120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_481) {
  // -8171720039798682451332691
  s21_decimal dec_1 = {{0x602a4e53, 0xd4bcb890, 0x6c26d, 0x80000000}};
  // 29074127011
  s21_decimal dec_2 = {{0xc4f3f8a3, 0x6, 0x0, 0x0}};
  // -281065018279206.36276581652854
  s21_decimal dec_check = {{0x5228d976, 0x23d4ed79, 0x5ad12745, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_482) {
  // 7015480931299270892866828529
  s21_decimal dec_1 = {{0x909cf8f1, 0x5656ff3c, 0x16ab11df, 0x0}};
  // -956847122739323079
  s21_decimal dec_2 = {{0x773b60c7, 0xd476763, 0x0, 0x80000000}};
  // -7331872317.5076326103557219891
  s21_decimal dec_check = {{0x22da2633, 0x8398f55f, 0xece7d38b, 0x80130000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_483) {
  // -42422658536521763.49716605
  s21_decimal dec_1 = {{0xead4607d, 0xb15760dc, 0x38255, 0x80080000}};
  // 150227015
  s21_decimal dec_2 = {{0x8f44847, 0x0, 0x0, 0x0}};
  // -282390344.61625802454482670777
  s21_decimal dec_check = {{0xf655d4b9, 0x9c00ba52, 0x5b3ec825, 0x80140000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_484) {
  // 5116703884842506197360
  s21_decimal dec_1 = {{0x22cd1970, 0x6087e1ce, 0x115, 0x0}};
  // 95449610
  s21_decimal dec_2 = {{0x5b0720a, 0x0, 0x0, 0x0}};
  // 53606336210724.236561678984335
  s21_decimal dec_check = {{0x7841e48f, 0xeeca9b83, 0xad361f3c, 0xf0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_485) {
  // -8983822899382079
  s21_decimal dec_1 = {{0x44a4873f, 0x1feabd, 0x0, 0x80000000}};
  // 432.08
  s21_decimal dec_2 = {{0xa8c8, 0x0, 0x0, 0x20000}};
  // -20792035964131.825124976856138
  s21_decimal dec_check = {{0xaf278c4a, 0x22ab18bc, 0x432ec4e0, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_486) {
  // 8044568.660919652
  s21_decimal dec_1 = {{0x1967c564, 0x1c947e, 0x0, 0x90000}};
  // 7.2764899
  s21_decimal dec_2 = {{0x4564de3, 0x0, 0x0, 0x70000}};
  // 1105556.2189290817266165654954
  s21_decimal dec_check = {{0x236ea5aa, 0x2f131974, 0x23b8f25b, 0x160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_489) {
  // -957959364217
  s21_decimal dec_1 = {{0xad3de79, 0xdf, 0x0, 0x80000000}};
  // 0.3095918
  s21_decimal dec_2 = {{0x2f3d6e, 0x0, 0x0, 0x70000}};
  // -3094265947021.2066340258366016
  s21_decimal dec_check = {{0x8562c240, 0x11044f1, 0x63fb2b03, 0x80100000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_490) {
  // -68.450572228163760262774409482
  s21_decimal dec_1 = {{0x878e490a, 0xe1ef1318, 0xdd2cfc7b, 0x801b0000}};
  // 5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x0}};
  // -13.690114445632752052554881896
  s21_decimal dec_check = {{0x8182db68, 0x2d2fd09e, 0x2c3c327f, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_492) {
  // -79228162514264337593088999200
  s21_decimal dec_1 = {{0xe4e1ff20, 0xffffffff, 0xffffffff, 0x80000000}};
  // -4
  s21_decimal dec_2 = {{0x4, 0x0, 0x0, 0x80000000}};
  // 19807040628566084398272249800
  s21_decimal dec_check = {{0xf9387fc8, 0xffffffff, 0x3fffffff, 0x0}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_494) {
  // -56027190680
  s21_decimal dec_1 = {{0xb7b1598, 0xd, 0x0, 0x80000000}};
  // -1.59297309767354
  s21_decimal dec_2 = {{0x4b8ff6ba, 0x90e1, 0x0, 0x800e0000}};
  // 35171460686.828293854728967188
  s21_decimal dec_check = {{0x2d3a5414, 0x4eb0f0e4, 0x71a52680, 0x120000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_495) {
  // 6359697476569058586
  s21_decimal dec_1 = {{0xe9d8cd1a, 0x58422f28, 0x0, 0x0}};
  // -198906208392.127
  s21_decimal dec_2 = {{0x75e513bf, 0xb4e7, 0x0, 0x80030000}};
  // -31973348.282982929541539260492
  s21_decimal dec_check = {{0xdd57684c, 0x8095f6a3, 0x674fbbdb, 0x80150000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_496) {
  // 79228162514264337591437208306
  s21_decimal dec_1 = {{0x826daaf2, 0xffffffff, 0xffffffff, 0x0}};
  // -757.518277163
  s21_decimal dec_2 = {{0x5f9b9a2b, 0xb0, 0x0, 0x80090000}};
  // -104589110128119473268568718.86
  s21_decimal dec_check = {{0xe7b1bfce, 0x189e34dc, 0x21cb688e, 0x80020000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_497) {
  // -557563117.295
  s21_decimal dec_1 = {{0xd159feef, 0x81, 0x0, 0x80030000}};
  // 283
  s21_decimal dec_2 = {{0x11b, 0x0, 0x0, 0x0}};
  // -1970187.6936219081272084805654
  s21_decimal dec_check = {{0x7dae3816, 0xd085a26a, 0x3fa902b8, 0x80160000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_498) {
  // 6052.29935367
  s21_decimal dec_1 = {{0xea83eb07, 0x8c, 0x0, 0x80000}};
  // -84
  s21_decimal dec_2 = {{0x54, 0x0, 0x0, 0x80000000}};
  // -72.051182781785714285714285714
  s21_decimal dec_check = {{0x23c72492, 0x1bad3c35, 0xe8cf576d, 0x801b0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_div_499) {
  // 8756
  s21_decimal dec_1 = {{0x2234, 0x0, 0x0, 0x0}};
  // 1272.07163414963
  s21_decimal dec_2 = {{0xb9c9c9b3, 0x73b1, 0x0, 0xb0000}};
  // 6.8832601599935195019529613038
  s21_decimal dec_check = {{0x8762eeee, 0x9fbb0347, 0xde68fe59, 0x1c0000}};
  s21_decimal result;
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(fail_s21_div_1) {
  // -47209163
  s21_decimal dec_1 = {{0x2d05acb, 0x0, 0x0, 0x80000000}};
  // -6697850967632.1
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x80010000}};
  s21_decimal result;
  // overflow
  int check = 3;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_div_2) {
  // -79228162514264337593268412274
  s21_decimal dec_1 = {{0xef939f72, 0xffffffff, 0xffffffff, 0x80000000}};
  // 0.8605820593
  s21_decimal dec_2 = {{0xf266b1, 0x2, 0x0, 0xa0000}};
  s21_decimal result;
  // overflow
  int check = 2;  // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_div_3) {
  // 79228162514264337593268412274
  s21_decimal dec_1 = {{0xef939f72, 0xffffffff, 0xffffffff, 0x0}};
  // 0.8605820593
  s21_decimal dec_2 = {{0xf266b1, 0x2, 0x0, 0xa0000}};
  s21_decimal result;
  // overflow
  int check = 1;  // Результат слишком велик или положительная бесконечность.
  int return_value = s21_div(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

Suite *test_s21_div_suite(void) {
  Suite *c = suite_create("s21_div_cases");
  TCase *tc = tcase_create("s21_div_tc");
  // SRunner *sr = srunner_create(c);
  // int nf;

  suite_add_tcase(c, tc);

  tcase_add_test(tc, s21_div_1);
  tcase_add_test(tc, s21_div_2);
  tcase_add_test(tc, s21_div_3);
  tcase_add_test(tc, s21_div_4);
  tcase_add_test(tc, s21_div_6);
  tcase_add_test(tc, s21_div_9);
  tcase_add_test(tc, s21_div_10);
  tcase_add_test(tc, s21_div_11);
  tcase_add_test(tc, s21_div_12);
  tcase_add_test(tc, s21_div_13);
  tcase_add_test(tc, s21_div_15);
  tcase_add_test(tc, s21_div_16);
  tcase_add_test(tc, s21_div_17);
  tcase_add_test(tc, s21_div_18);
  tcase_add_test(tc, s21_div_19);
  tcase_add_test(tc, s21_div_20);
  tcase_add_test(tc, s21_div_21);
  tcase_add_test(tc, s21_div_22);
  tcase_add_test(tc, s21_div_23);
  tcase_add_test(tc, s21_div_24);
  tcase_add_test(tc, s21_div_25);
  tcase_add_test(tc, s21_div_27);
  tcase_add_test(tc, s21_div_28);
  tcase_add_test(tc, s21_div_29);
  tcase_add_test(tc, s21_div_30);
  tcase_add_test(tc, s21_div_31);
  tcase_add_test(tc, s21_div_32);
  tcase_add_test(tc, s21_div_34);
  tcase_add_test(tc, s21_div_35);
  tcase_add_test(tc, s21_div_36);
  tcase_add_test(tc, s21_div_37);
  tcase_add_test(tc, s21_div_38);
  tcase_add_test(tc, s21_div_39);
  tcase_add_test(tc, s21_div_40);
  tcase_add_test(tc, s21_div_41);
  tcase_add_test(tc, s21_div_43);
  tcase_add_test(tc, s21_div_44);
  tcase_add_test(tc, s21_div_45);
  tcase_add_test(tc, s21_div_46);
  tcase_add_test(tc, s21_div_47);
  tcase_add_test(tc, s21_div_48);
  tcase_add_test(tc, s21_div_49);
  tcase_add_test(tc, s21_div_51);
  tcase_add_test(tc, s21_div_52);
  tcase_add_test(tc, s21_div_54);
  tcase_add_test(tc, s21_div_55);
  tcase_add_test(tc, s21_div_56);
  tcase_add_test(tc, s21_div_58);
  tcase_add_test(tc, s21_div_60);
  tcase_add_test(tc, s21_div_61);
  tcase_add_test(tc, s21_div_62);
  tcase_add_test(tc, s21_div_63);
  tcase_add_test(tc, s21_div_64);
  tcase_add_test(tc, s21_div_65);
  tcase_add_test(tc, s21_div_69);
  tcase_add_test(tc, s21_div_70);
  tcase_add_test(tc, s21_div_71);
  tcase_add_test(tc, s21_div_72);
  tcase_add_test(tc, s21_div_73);
  tcase_add_test(tc, s21_div_74);
  tcase_add_test(tc, s21_div_75);
  tcase_add_test(tc, s21_div_76);
  tcase_add_test(tc, s21_div_77);
  tcase_add_test(tc, s21_div_78);
  tcase_add_test(tc, s21_div_79);
  tcase_add_test(tc, s21_div_80);
  tcase_add_test(tc, s21_div_81);
  tcase_add_test(tc, s21_div_82);
  tcase_add_test(tc, s21_div_84);
  tcase_add_test(tc, s21_div_85);
  tcase_add_test(tc, s21_div_86);
  tcase_add_test(tc, s21_div_87);
  tcase_add_test(tc, s21_div_88);
  tcase_add_test(tc, s21_div_89);
  tcase_add_test(tc, s21_div_90);
  tcase_add_test(tc, s21_div_91);
  tcase_add_test(tc, s21_div_92);
  tcase_add_test(tc, s21_div_94);
  tcase_add_test(tc, s21_div_95);
  tcase_add_test(tc, s21_div_96);
  tcase_add_test(tc, s21_div_97);
  tcase_add_test(tc, s21_div_98);
  tcase_add_test(tc, s21_div_99);
  tcase_add_test(tc, s21_div_100);
  tcase_add_test(tc, s21_div_101);
  tcase_add_test(tc, s21_div_104);
  tcase_add_test(tc, s21_div_105);
  tcase_add_test(tc, s21_div_106);
  tcase_add_test(tc, s21_div_107);
  tcase_add_test(tc, s21_div_108);
  tcase_add_test(tc, s21_div_109);
  tcase_add_test(tc, s21_div_110);
  tcase_add_test(tc, s21_div_111);
  tcase_add_test(tc, s21_div_112);
  tcase_add_test(tc, s21_div_114);
  tcase_add_test(tc, s21_div_117);
  tcase_add_test(tc, s21_div_118);
  tcase_add_test(tc, s21_div_119);
  tcase_add_test(tc, s21_div_120);
  tcase_add_test(tc, s21_div_121);
  tcase_add_test(tc, s21_div_122);
  tcase_add_test(tc, s21_div_124);
  tcase_add_test(tc, s21_div_125);
  tcase_add_test(tc, s21_div_126);
  tcase_add_test(tc, s21_div_127);
  tcase_add_test(tc, s21_div_129);
  tcase_add_test(tc, s21_div_133);
  tcase_add_test(tc, s21_div_135);
  tcase_add_test(tc, s21_div_136);
  tcase_add_test(tc, s21_div_137);
  tcase_add_test(tc, s21_div_138);
  tcase_add_test(tc, s21_div_139);
  tcase_add_test(tc, s21_div_141);
  tcase_add_test(tc, s21_div_142);
  tcase_add_test(tc, s21_div_143);
  tcase_add_test(tc, s21_div_144);
  tcase_add_test(tc, s21_div_145);
  tcase_add_test(tc, s21_div_146);
  tcase_add_test(tc, s21_div_147);
  tcase_add_test(tc, s21_div_148);
  tcase_add_test(tc, s21_div_149);
  tcase_add_test(tc, s21_div_153);
  tcase_add_test(tc, s21_div_155);
  tcase_add_test(tc, s21_div_156);
  tcase_add_test(tc, s21_div_157);
  tcase_add_test(tc, s21_div_158);
  tcase_add_test(tc, s21_div_159);
  tcase_add_test(tc, s21_div_160);
  tcase_add_test(tc, s21_div_161);
  tcase_add_test(tc, s21_div_162);
  tcase_add_test(tc, s21_div_163);
  tcase_add_test(tc, s21_div_164);
  tcase_add_test(tc, s21_div_165);
  tcase_add_test(tc, s21_div_166);
  tcase_add_test(tc, s21_div_167);
  tcase_add_test(tc, s21_div_169);
  tcase_add_test(tc, s21_div_170);
  tcase_add_test(tc, s21_div_171);
  tcase_add_test(tc, s21_div_172);
  tcase_add_test(tc, s21_div_173);
  tcase_add_test(tc, s21_div_174);
  tcase_add_test(tc, s21_div_175);
  tcase_add_test(tc, s21_div_176);
  tcase_add_test(tc, s21_div_177);
  tcase_add_test(tc, s21_div_178);
  tcase_add_test(tc, s21_div_179);
  tcase_add_test(tc, s21_div_180);
  tcase_add_test(tc, s21_div_181);
  tcase_add_test(tc, s21_div_182);
  tcase_add_test(tc, s21_div_184);
  tcase_add_test(tc, s21_div_186);
  tcase_add_test(tc, s21_div_187);
  tcase_add_test(tc, s21_div_188);
  tcase_add_test(tc, s21_div_189);
  tcase_add_test(tc, s21_div_190);
  tcase_add_test(tc, s21_div_191);
  tcase_add_test(tc, s21_div_194);
  tcase_add_test(tc, s21_div_195);
  tcase_add_test(tc, s21_div_196);
  tcase_add_test(tc, s21_div_197);
  tcase_add_test(tc, s21_div_198);
  tcase_add_test(tc, s21_div_199);
  tcase_add_test(tc, s21_div_200);
  tcase_add_test(tc, s21_div_202);
  tcase_add_test(tc, s21_div_204);
  tcase_add_test(tc, s21_div_205);
  tcase_add_test(tc, s21_div_206);
  tcase_add_test(tc, s21_div_208);
  tcase_add_test(tc, s21_div_209);
  tcase_add_test(tc, s21_div_210);
  tcase_add_test(tc, s21_div_211);
  tcase_add_test(tc, s21_div_212);
  tcase_add_test(tc, s21_div_214);
  tcase_add_test(tc, s21_div_215);
  tcase_add_test(tc, s21_div_216);
  tcase_add_test(tc, s21_div_217);
  tcase_add_test(tc, s21_div_218);
  tcase_add_test(tc, s21_div_220);
  tcase_add_test(tc, s21_div_221);
  tcase_add_test(tc, s21_div_223);
  tcase_add_test(tc, s21_div_224);
  tcase_add_test(tc, s21_div_227);
  tcase_add_test(tc, s21_div_228);
  tcase_add_test(tc, s21_div_229);
  tcase_add_test(tc, s21_div_230);
  tcase_add_test(tc, s21_div_231);
  tcase_add_test(tc, s21_div_232);
  tcase_add_test(tc, s21_div_233);
  tcase_add_test(tc, s21_div_234);
  tcase_add_test(tc, s21_div_236);
  tcase_add_test(tc, s21_div_237);
  tcase_add_test(tc, s21_div_240);
  tcase_add_test(tc, s21_div_241);
  tcase_add_test(tc, s21_div_242);
  tcase_add_test(tc, s21_div_243);
  tcase_add_test(tc, s21_div_244);
  tcase_add_test(tc, s21_div_245);
  tcase_add_test(tc, s21_div_247);
  tcase_add_test(tc, s21_div_248);
  tcase_add_test(tc, s21_div_249);
  tcase_add_test(tc, s21_div_250);
  tcase_add_test(tc, s21_div_251);
  tcase_add_test(tc, s21_div_252);
  tcase_add_test(tc, s21_div_253);
  tcase_add_test(tc, s21_div_254);
  tcase_add_test(tc, s21_div_255);
  tcase_add_test(tc, s21_div_256);
  tcase_add_test(tc, s21_div_257);
  tcase_add_test(tc, s21_div_260);
  tcase_add_test(tc, s21_div_262);
  tcase_add_test(tc, s21_div_265);
  tcase_add_test(tc, s21_div_266);
  tcase_add_test(tc, s21_div_267);
  tcase_add_test(tc, s21_div_268);
  tcase_add_test(tc, s21_div_269);
  tcase_add_test(tc, s21_div_270);
  tcase_add_test(tc, s21_div_271);
  tcase_add_test(tc, s21_div_272);
  tcase_add_test(tc, s21_div_273);
  tcase_add_test(tc, s21_div_274);
  tcase_add_test(tc, s21_div_276);
  tcase_add_test(tc, s21_div_278);
  tcase_add_test(tc, s21_div_279);
  tcase_add_test(tc, s21_div_280);
  tcase_add_test(tc, s21_div_281);
  tcase_add_test(tc, s21_div_282);
  tcase_add_test(tc, s21_div_284);
  tcase_add_test(tc, s21_div_285);
  tcase_add_test(tc, s21_div_286);
  tcase_add_test(tc, s21_div_287);
  tcase_add_test(tc, s21_div_288);
  tcase_add_test(tc, s21_div_289);
  tcase_add_test(tc, s21_div_290);
  tcase_add_test(tc, s21_div_291);
  tcase_add_test(tc, s21_div_292);
  tcase_add_test(tc, s21_div_293);
  tcase_add_test(tc, s21_div_294);
  tcase_add_test(tc, s21_div_296);
  tcase_add_test(tc, s21_div_297);
  tcase_add_test(tc, s21_div_299);
  tcase_add_test(tc, s21_div_301);
  tcase_add_test(tc, s21_div_302);
  tcase_add_test(tc, s21_div_303);
  tcase_add_test(tc, s21_div_306);
  tcase_add_test(tc, s21_div_307);
  tcase_add_test(tc, s21_div_309);
  tcase_add_test(tc, s21_div_310);
  tcase_add_test(tc, s21_div_311);
  tcase_add_test(tc, s21_div_312);
  tcase_add_test(tc, s21_div_313);
  tcase_add_test(tc, s21_div_314);
  tcase_add_test(tc, s21_div_316);
  tcase_add_test(tc, s21_div_317);
  tcase_add_test(tc, s21_div_318);
  tcase_add_test(tc, s21_div_319);
  tcase_add_test(tc, s21_div_320);
  tcase_add_test(tc, s21_div_321);
  tcase_add_test(tc, s21_div_322);
  tcase_add_test(tc, s21_div_323);
  tcase_add_test(tc, s21_div_324);
  tcase_add_test(tc, s21_div_325);
  tcase_add_test(tc, s21_div_326);
  tcase_add_test(tc, s21_div_327);
  tcase_add_test(tc, s21_div_328);
  tcase_add_test(tc, s21_div_329);
  tcase_add_test(tc, s21_div_331);
  tcase_add_test(tc, s21_div_332);
  tcase_add_test(tc, s21_div_333);
  tcase_add_test(tc, s21_div_334);
  tcase_add_test(tc, s21_div_335);
  tcase_add_test(tc, s21_div_336);
  tcase_add_test(tc, s21_div_338);
  tcase_add_test(tc, s21_div_339);
  tcase_add_test(tc, s21_div_340);
  tcase_add_test(tc, s21_div_341);
  tcase_add_test(tc, s21_div_342);
  tcase_add_test(tc, s21_div_343);
  tcase_add_test(tc, s21_div_344);
  tcase_add_test(tc, s21_div_345);
  tcase_add_test(tc, s21_div_346);
  tcase_add_test(tc, s21_div_348);
  tcase_add_test(tc, s21_div_350);
  tcase_add_test(tc, s21_div_351);
  tcase_add_test(tc, s21_div_352);
  tcase_add_test(tc, s21_div_354);
  tcase_add_test(tc, s21_div_356);
  tcase_add_test(tc, s21_div_357);
  tcase_add_test(tc, s21_div_360);
  tcase_add_test(tc, s21_div_361);
  tcase_add_test(tc, s21_div_363);
  tcase_add_test(tc, s21_div_364);
  tcase_add_test(tc, s21_div_365);
  tcase_add_test(tc, s21_div_366);
  tcase_add_test(tc, s21_div_367);
  tcase_add_test(tc, s21_div_368);
  tcase_add_test(tc, s21_div_370);
  tcase_add_test(tc, s21_div_372);
  tcase_add_test(tc, s21_div_373);
  tcase_add_test(tc, s21_div_374);
  tcase_add_test(tc, s21_div_375);
  tcase_add_test(tc, s21_div_377);
  tcase_add_test(tc, s21_div_378);
  tcase_add_test(tc, s21_div_380);
  tcase_add_test(tc, s21_div_382);
  tcase_add_test(tc, s21_div_383);
  tcase_add_test(tc, s21_div_384);
  tcase_add_test(tc, s21_div_385);
  tcase_add_test(tc, s21_div_386);
  tcase_add_test(tc, s21_div_387);
  tcase_add_test(tc, s21_div_388);
  tcase_add_test(tc, s21_div_389);
  tcase_add_test(tc, s21_div_390);
  tcase_add_test(tc, s21_div_391);
  tcase_add_test(tc, s21_div_392);
  tcase_add_test(tc, s21_div_393);
  tcase_add_test(tc, s21_div_395);
  tcase_add_test(tc, s21_div_396);
  tcase_add_test(tc, s21_div_398);
  tcase_add_test(tc, s21_div_399);
  tcase_add_test(tc, s21_div_400);
  tcase_add_test(tc, s21_div_401);
  tcase_add_test(tc, s21_div_403);
  tcase_add_test(tc, s21_div_404);
  tcase_add_test(tc, s21_div_405);
  tcase_add_test(tc, s21_div_406);
  tcase_add_test(tc, s21_div_407);
  tcase_add_test(tc, s21_div_408);
  tcase_add_test(tc, s21_div_409);
  tcase_add_test(tc, s21_div_410);
  tcase_add_test(tc, s21_div_412);
  tcase_add_test(tc, s21_div_413);
  tcase_add_test(tc, s21_div_415);
  tcase_add_test(tc, s21_div_416);
  tcase_add_test(tc, s21_div_417);
  tcase_add_test(tc, s21_div_418);
  tcase_add_test(tc, s21_div_419);
  tcase_add_test(tc, s21_div_420);
  tcase_add_test(tc, s21_div_421);
  tcase_add_test(tc, s21_div_423);
  tcase_add_test(tc, s21_div_424);
  tcase_add_test(tc, s21_div_425);
  tcase_add_test(tc, s21_div_427);
  tcase_add_test(tc, s21_div_428);
  tcase_add_test(tc, s21_div_430);
  tcase_add_test(tc, s21_div_431);
  tcase_add_test(tc, s21_div_432);
  tcase_add_test(tc, s21_div_433);
  tcase_add_test(tc, s21_div_434);
  tcase_add_test(tc, s21_div_435);
  tcase_add_test(tc, s21_div_436);
  tcase_add_test(tc, s21_div_437);
  tcase_add_test(tc, s21_div_439);
  tcase_add_test(tc, s21_div_440);
  tcase_add_test(tc, s21_div_441);
  tcase_add_test(tc, s21_div_442);
  tcase_add_test(tc, s21_div_443);
  tcase_add_test(tc, s21_div_444);
  tcase_add_test(tc, s21_div_445);
  tcase_add_test(tc, s21_div_448);
  tcase_add_test(tc, s21_div_449);
  tcase_add_test(tc, s21_div_450);
  tcase_add_test(tc, s21_div_452);
  tcase_add_test(tc, s21_div_454);
  tcase_add_test(tc, s21_div_455);
  tcase_add_test(tc, s21_div_456);
  tcase_add_test(tc, s21_div_457);
  tcase_add_test(tc, s21_div_458);
  tcase_add_test(tc, s21_div_459);
  tcase_add_test(tc, s21_div_460);
  tcase_add_test(tc, s21_div_461);
  tcase_add_test(tc, s21_div_463);
  tcase_add_test(tc, s21_div_464);
  tcase_add_test(tc, s21_div_465);
  tcase_add_test(tc, s21_div_466);
  tcase_add_test(tc, s21_div_467);
  tcase_add_test(tc, s21_div_468);
  tcase_add_test(tc, s21_div_470);
  tcase_add_test(tc, s21_div_471);
  tcase_add_test(tc, s21_div_472);
  tcase_add_test(tc, s21_div_473);
  tcase_add_test(tc, s21_div_475);
  tcase_add_test(tc, s21_div_476);
  tcase_add_test(tc, s21_div_477);
  tcase_add_test(tc, s21_div_478);
  tcase_add_test(tc, s21_div_479);
  tcase_add_test(tc, s21_div_480);
  tcase_add_test(tc, s21_div_481);
  tcase_add_test(tc, s21_div_482);
  tcase_add_test(tc, s21_div_483);
  tcase_add_test(tc, s21_div_484);
  tcase_add_test(tc, s21_div_485);
  tcase_add_test(tc, s21_div_486);
  tcase_add_test(tc, s21_div_489);
  tcase_add_test(tc, s21_div_490);
  tcase_add_test(tc, s21_div_492);
  tcase_add_test(tc, s21_div_494);
  tcase_add_test(tc, s21_div_495);
  tcase_add_test(tc, s21_div_496);
  tcase_add_test(tc, s21_div_497);
  tcase_add_test(tc, s21_div_498);
  tcase_add_test(tc, s21_div_499);

  tcase_add_test(tc, fail_s21_div_1);
  tcase_add_test(tc, fail_s21_div_2);
  tcase_add_test(tc, fail_s21_div_3);

  // srunner_run_all(sr, CK_ENV);
  // nf = srunner_ntests_failed(sr);
  // srunner_free(sr);

  return c;
}
