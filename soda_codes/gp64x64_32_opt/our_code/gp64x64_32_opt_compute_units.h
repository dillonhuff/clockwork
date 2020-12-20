#pragma once

#include "conv_3x3.h"

// Generated compute units...


// Compute unit banks...
  // in_update_0 unroll factor: 32
hw_uint<512>  id_unrolled_32(hw_uint<512>& in_off_chip) {
  hw_uint<512> whole_result;

  hw_uint<16> lane_0_in_off_chip;
  set_at<0, 16, 16>(lane_0_in_off_chip, in_off_chip.extract<0, 15>());
  auto result_0 = id(lane_0_in_off_chip);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<16> lane_1_in_off_chip;
  set_at<0, 16, 16>(lane_1_in_off_chip, in_off_chip.extract<16, 31>());
  auto result_1 = id(lane_1_in_off_chip);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<16> lane_2_in_off_chip;
  set_at<0, 16, 16>(lane_2_in_off_chip, in_off_chip.extract<32, 47>());
  auto result_2 = id(lane_2_in_off_chip);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<16> lane_3_in_off_chip;
  set_at<0, 16, 16>(lane_3_in_off_chip, in_off_chip.extract<48, 63>());
  auto result_3 = id(lane_3_in_off_chip);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<16> lane_4_in_off_chip;
  set_at<0, 16, 16>(lane_4_in_off_chip, in_off_chip.extract<64, 79>());
  auto result_4 = id(lane_4_in_off_chip);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<16> lane_5_in_off_chip;
  set_at<0, 16, 16>(lane_5_in_off_chip, in_off_chip.extract<80, 95>());
  auto result_5 = id(lane_5_in_off_chip);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<16> lane_6_in_off_chip;
  set_at<0, 16, 16>(lane_6_in_off_chip, in_off_chip.extract<96, 111>());
  auto result_6 = id(lane_6_in_off_chip);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<16> lane_7_in_off_chip;
  set_at<0, 16, 16>(lane_7_in_off_chip, in_off_chip.extract<112, 127>());
  auto result_7 = id(lane_7_in_off_chip);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<16> lane_8_in_off_chip;
  set_at<0, 16, 16>(lane_8_in_off_chip, in_off_chip.extract<128, 143>());
  auto result_8 = id(lane_8_in_off_chip);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<16> lane_9_in_off_chip;
  set_at<0, 16, 16>(lane_9_in_off_chip, in_off_chip.extract<144, 159>());
  auto result_9 = id(lane_9_in_off_chip);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<16> lane_10_in_off_chip;
  set_at<0, 16, 16>(lane_10_in_off_chip, in_off_chip.extract<160, 175>());
  auto result_10 = id(lane_10_in_off_chip);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<16> lane_11_in_off_chip;
  set_at<0, 16, 16>(lane_11_in_off_chip, in_off_chip.extract<176, 191>());
  auto result_11 = id(lane_11_in_off_chip);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<16> lane_12_in_off_chip;
  set_at<0, 16, 16>(lane_12_in_off_chip, in_off_chip.extract<192, 207>());
  auto result_12 = id(lane_12_in_off_chip);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<16> lane_13_in_off_chip;
  set_at<0, 16, 16>(lane_13_in_off_chip, in_off_chip.extract<208, 223>());
  auto result_13 = id(lane_13_in_off_chip);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<16> lane_14_in_off_chip;
  set_at<0, 16, 16>(lane_14_in_off_chip, in_off_chip.extract<224, 239>());
  auto result_14 = id(lane_14_in_off_chip);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<16> lane_15_in_off_chip;
  set_at<0, 16, 16>(lane_15_in_off_chip, in_off_chip.extract<240, 255>());
  auto result_15 = id(lane_15_in_off_chip);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<16> lane_16_in_off_chip;
  set_at<0, 16, 16>(lane_16_in_off_chip, in_off_chip.extract<256, 271>());
  auto result_16 = id(lane_16_in_off_chip);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<16> lane_17_in_off_chip;
  set_at<0, 16, 16>(lane_17_in_off_chip, in_off_chip.extract<272, 287>());
  auto result_17 = id(lane_17_in_off_chip);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<16> lane_18_in_off_chip;
  set_at<0, 16, 16>(lane_18_in_off_chip, in_off_chip.extract<288, 303>());
  auto result_18 = id(lane_18_in_off_chip);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<16> lane_19_in_off_chip;
  set_at<0, 16, 16>(lane_19_in_off_chip, in_off_chip.extract<304, 319>());
  auto result_19 = id(lane_19_in_off_chip);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<16> lane_20_in_off_chip;
  set_at<0, 16, 16>(lane_20_in_off_chip, in_off_chip.extract<320, 335>());
  auto result_20 = id(lane_20_in_off_chip);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<16> lane_21_in_off_chip;
  set_at<0, 16, 16>(lane_21_in_off_chip, in_off_chip.extract<336, 351>());
  auto result_21 = id(lane_21_in_off_chip);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<16> lane_22_in_off_chip;
  set_at<0, 16, 16>(lane_22_in_off_chip, in_off_chip.extract<352, 367>());
  auto result_22 = id(lane_22_in_off_chip);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<16> lane_23_in_off_chip;
  set_at<0, 16, 16>(lane_23_in_off_chip, in_off_chip.extract<368, 383>());
  auto result_23 = id(lane_23_in_off_chip);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<16> lane_24_in_off_chip;
  set_at<0, 16, 16>(lane_24_in_off_chip, in_off_chip.extract<384, 399>());
  auto result_24 = id(lane_24_in_off_chip);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<16> lane_25_in_off_chip;
  set_at<0, 16, 16>(lane_25_in_off_chip, in_off_chip.extract<400, 415>());
  auto result_25 = id(lane_25_in_off_chip);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<16> lane_26_in_off_chip;
  set_at<0, 16, 16>(lane_26_in_off_chip, in_off_chip.extract<416, 431>());
  auto result_26 = id(lane_26_in_off_chip);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<16> lane_27_in_off_chip;
  set_at<0, 16, 16>(lane_27_in_off_chip, in_off_chip.extract<432, 447>());
  auto result_27 = id(lane_27_in_off_chip);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<16> lane_28_in_off_chip;
  set_at<0, 16, 16>(lane_28_in_off_chip, in_off_chip.extract<448, 463>());
  auto result_28 = id(lane_28_in_off_chip);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<16> lane_29_in_off_chip;
  set_at<0, 16, 16>(lane_29_in_off_chip, in_off_chip.extract<464, 479>());
  auto result_29 = id(lane_29_in_off_chip);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<16> lane_30_in_off_chip;
  set_at<0, 16, 16>(lane_30_in_off_chip, in_off_chip.extract<480, 495>());
  auto result_30 = id(lane_30_in_off_chip);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<16> lane_31_in_off_chip;
  set_at<0, 16, 16>(lane_31_in_off_chip, in_off_chip.extract<496, 511>());
  auto result_31 = id(lane_31_in_off_chip);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // level_0_update_0 unroll factor: 16
hw_uint<256>  reduce_gauss_unrolled_16(hw_uint<2304>& in) {
  hw_uint<256> whole_result;

  hw_uint<144> lane_0_in;
  set_at<0, 144, 144>(lane_0_in, in.extract<0, 143>());
  auto result_0 = reduce_gauss(lane_0_in);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<144> lane_1_in;
  set_at<0, 144, 144>(lane_1_in, in.extract<144, 287>());
  auto result_1 = reduce_gauss(lane_1_in);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<144> lane_2_in;
  set_at<0, 144, 144>(lane_2_in, in.extract<288, 431>());
  auto result_2 = reduce_gauss(lane_2_in);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<144> lane_3_in;
  set_at<0, 144, 144>(lane_3_in, in.extract<432, 575>());
  auto result_3 = reduce_gauss(lane_3_in);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<144> lane_4_in;
  set_at<0, 144, 144>(lane_4_in, in.extract<576, 719>());
  auto result_4 = reduce_gauss(lane_4_in);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<144> lane_5_in;
  set_at<0, 144, 144>(lane_5_in, in.extract<720, 863>());
  auto result_5 = reduce_gauss(lane_5_in);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<144> lane_6_in;
  set_at<0, 144, 144>(lane_6_in, in.extract<864, 1007>());
  auto result_6 = reduce_gauss(lane_6_in);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<144> lane_7_in;
  set_at<0, 144, 144>(lane_7_in, in.extract<1008, 1151>());
  auto result_7 = reduce_gauss(lane_7_in);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<144> lane_8_in;
  set_at<0, 144, 144>(lane_8_in, in.extract<1152, 1295>());
  auto result_8 = reduce_gauss(lane_8_in);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<144> lane_9_in;
  set_at<0, 144, 144>(lane_9_in, in.extract<1296, 1439>());
  auto result_9 = reduce_gauss(lane_9_in);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<144> lane_10_in;
  set_at<0, 144, 144>(lane_10_in, in.extract<1440, 1583>());
  auto result_10 = reduce_gauss(lane_10_in);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<144> lane_11_in;
  set_at<0, 144, 144>(lane_11_in, in.extract<1584, 1727>());
  auto result_11 = reduce_gauss(lane_11_in);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<144> lane_12_in;
  set_at<0, 144, 144>(lane_12_in, in.extract<1728, 1871>());
  auto result_12 = reduce_gauss(lane_12_in);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<144> lane_13_in;
  set_at<0, 144, 144>(lane_13_in, in.extract<1872, 2015>());
  auto result_13 = reduce_gauss(lane_13_in);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<144> lane_14_in;
  set_at<0, 144, 144>(lane_14_in, in.extract<2016, 2159>());
  auto result_14 = reduce_gauss(lane_14_in);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<144> lane_15_in;
  set_at<0, 144, 144>(lane_15_in, in.extract<2160, 2303>());
  auto result_15 = reduce_gauss(lane_15_in);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // level_1_update_0 unroll factor: 8
hw_uint<128>  reduce_gauss_unrolled_8(hw_uint<1152>& level_0) {
  hw_uint<128> whole_result;

  hw_uint<144> lane_0_level_0;
  set_at<0, 144, 144>(lane_0_level_0, level_0.extract<0, 143>());
  auto result_0 = reduce_gauss(lane_0_level_0);
  set_at<0, 128, 16>(whole_result, result_0);

  hw_uint<144> lane_1_level_0;
  set_at<0, 144, 144>(lane_1_level_0, level_0.extract<144, 287>());
  auto result_1 = reduce_gauss(lane_1_level_0);
  set_at<16, 128, 16>(whole_result, result_1);

  hw_uint<144> lane_2_level_0;
  set_at<0, 144, 144>(lane_2_level_0, level_0.extract<288, 431>());
  auto result_2 = reduce_gauss(lane_2_level_0);
  set_at<32, 128, 16>(whole_result, result_2);

  hw_uint<144> lane_3_level_0;
  set_at<0, 144, 144>(lane_3_level_0, level_0.extract<432, 575>());
  auto result_3 = reduce_gauss(lane_3_level_0);
  set_at<48, 128, 16>(whole_result, result_3);

  hw_uint<144> lane_4_level_0;
  set_at<0, 144, 144>(lane_4_level_0, level_0.extract<576, 719>());
  auto result_4 = reduce_gauss(lane_4_level_0);
  set_at<64, 128, 16>(whole_result, result_4);

  hw_uint<144> lane_5_level_0;
  set_at<0, 144, 144>(lane_5_level_0, level_0.extract<720, 863>());
  auto result_5 = reduce_gauss(lane_5_level_0);
  set_at<80, 128, 16>(whole_result, result_5);

  hw_uint<144> lane_6_level_0;
  set_at<0, 144, 144>(lane_6_level_0, level_0.extract<864, 1007>());
  auto result_6 = reduce_gauss(lane_6_level_0);
  set_at<96, 128, 16>(whole_result, result_6);

  hw_uint<144> lane_7_level_0;
  set_at<0, 144, 144>(lane_7_level_0, level_0.extract<1008, 1151>());
  auto result_7 = reduce_gauss(lane_7_level_0);
  set_at<112, 128, 16>(whole_result, result_7);
  return whole_result;
}

  // level_2_update_0 unroll factor: 4
hw_uint<64>  reduce_gauss_unrolled_4(hw_uint<576>& level_1) {
  hw_uint<64> whole_result;

  hw_uint<144> lane_0_level_1;
  set_at<0, 144, 144>(lane_0_level_1, level_1.extract<0, 143>());
  auto result_0 = reduce_gauss(lane_0_level_1);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<144> lane_1_level_1;
  set_at<0, 144, 144>(lane_1_level_1, level_1.extract<144, 287>());
  auto result_1 = reduce_gauss(lane_1_level_1);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<144> lane_2_level_1;
  set_at<0, 144, 144>(lane_2_level_1, level_1.extract<288, 431>());
  auto result_2 = reduce_gauss(lane_2_level_1);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<144> lane_3_level_1;
  set_at<0, 144, 144>(lane_3_level_1, level_1.extract<432, 575>());
  auto result_3 = reduce_gauss(lane_3_level_1);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // level_3_update_0 unroll factor: 2
hw_uint<32>  reduce_gauss_unrolled_2(hw_uint<288>& level_2) {
  hw_uint<32> whole_result;

  hw_uint<144> lane_0_level_2;
  set_at<0, 144, 144>(lane_0_level_2, level_2.extract<0, 143>());
  auto result_0 = reduce_gauss(lane_0_level_2);
  set_at<0, 32, 16>(whole_result, result_0);

  hw_uint<144> lane_1_level_2;
  set_at<0, 144, 144>(lane_1_level_2, level_2.extract<144, 287>());
  auto result_1 = reduce_gauss(lane_1_level_2);
  set_at<16, 32, 16>(whole_result, result_1);
  return whole_result;
}

  // gp64x64_32_update_0 unroll factor: 2
hw_uint<32>  id_unrolled_2(hw_uint<32>& level_3) {
  hw_uint<32> whole_result;

  hw_uint<16> lane_0_level_3;
  set_at<0, 16, 16>(lane_0_level_3, level_3.extract<0, 15>());
  auto result_0 = id(lane_0_level_3);
  set_at<0, 32, 16>(whole_result, result_0);

  hw_uint<16> lane_1_level_3;
  set_at<0, 16, 16>(lane_1_level_3, level_3.extract<16, 31>());
  auto result_1 = id(lane_1_level_3);
  set_at<16, 32, 16>(whole_result, result_1);
  return whole_result;
}

