#pragma once

#include "conv_3x3.h"

// Generated compute units...


// Compute unit banks...
  // in_update_0 unroll factor: 16
hw_uint<256>  id_unrolled_16(hw_uint<256>& in_off_chip) {
  hw_uint<256> whole_result;

  hw_uint<16> lane_0_in_off_chip;
  set_at<0, 16, 16>(lane_0_in_off_chip, in_off_chip.extract<0, 15>());
  auto result_0 = id(lane_0_in_off_chip);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<16> lane_1_in_off_chip;
  set_at<0, 16, 16>(lane_1_in_off_chip, in_off_chip.extract<16, 31>());
  auto result_1 = id(lane_1_in_off_chip);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<16> lane_2_in_off_chip;
  set_at<0, 16, 16>(lane_2_in_off_chip, in_off_chip.extract<32, 47>());
  auto result_2 = id(lane_2_in_off_chip);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<16> lane_3_in_off_chip;
  set_at<0, 16, 16>(lane_3_in_off_chip, in_off_chip.extract<48, 63>());
  auto result_3 = id(lane_3_in_off_chip);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<16> lane_4_in_off_chip;
  set_at<0, 16, 16>(lane_4_in_off_chip, in_off_chip.extract<64, 79>());
  auto result_4 = id(lane_4_in_off_chip);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<16> lane_5_in_off_chip;
  set_at<0, 16, 16>(lane_5_in_off_chip, in_off_chip.extract<80, 95>());
  auto result_5 = id(lane_5_in_off_chip);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<16> lane_6_in_off_chip;
  set_at<0, 16, 16>(lane_6_in_off_chip, in_off_chip.extract<96, 111>());
  auto result_6 = id(lane_6_in_off_chip);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<16> lane_7_in_off_chip;
  set_at<0, 16, 16>(lane_7_in_off_chip, in_off_chip.extract<112, 127>());
  auto result_7 = id(lane_7_in_off_chip);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<16> lane_8_in_off_chip;
  set_at<0, 16, 16>(lane_8_in_off_chip, in_off_chip.extract<128, 143>());
  auto result_8 = id(lane_8_in_off_chip);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<16> lane_9_in_off_chip;
  set_at<0, 16, 16>(lane_9_in_off_chip, in_off_chip.extract<144, 159>());
  auto result_9 = id(lane_9_in_off_chip);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<16> lane_10_in_off_chip;
  set_at<0, 16, 16>(lane_10_in_off_chip, in_off_chip.extract<160, 175>());
  auto result_10 = id(lane_10_in_off_chip);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<16> lane_11_in_off_chip;
  set_at<0, 16, 16>(lane_11_in_off_chip, in_off_chip.extract<176, 191>());
  auto result_11 = id(lane_11_in_off_chip);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<16> lane_12_in_off_chip;
  set_at<0, 16, 16>(lane_12_in_off_chip, in_off_chip.extract<192, 207>());
  auto result_12 = id(lane_12_in_off_chip);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<16> lane_13_in_off_chip;
  set_at<0, 16, 16>(lane_13_in_off_chip, in_off_chip.extract<208, 223>());
  auto result_13 = id(lane_13_in_off_chip);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<16> lane_14_in_off_chip;
  set_at<0, 16, 16>(lane_14_in_off_chip, in_off_chip.extract<224, 239>());
  auto result_14 = id(lane_14_in_off_chip);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<16> lane_15_in_off_chip;
  set_at<0, 16, 16>(lane_15_in_off_chip, in_off_chip.extract<240, 255>());
  auto result_15 = id(lane_15_in_off_chip);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // level_0_update_0 unroll factor: 8
hw_uint<128>  reduce_gauss_unrolled_8(hw_uint<1152>& in) {
  hw_uint<128> whole_result;

  hw_uint<144> lane_0_in;
  set_at<0, 144, 144>(lane_0_in, in.extract<0, 143>());
  auto result_0 = reduce_gauss(lane_0_in);
  set_at<0, 128, 16>(whole_result, result_0);

  hw_uint<144> lane_1_in;
  set_at<0, 144, 144>(lane_1_in, in.extract<144, 287>());
  auto result_1 = reduce_gauss(lane_1_in);
  set_at<16, 128, 16>(whole_result, result_1);

  hw_uint<144> lane_2_in;
  set_at<0, 144, 144>(lane_2_in, in.extract<288, 431>());
  auto result_2 = reduce_gauss(lane_2_in);
  set_at<32, 128, 16>(whole_result, result_2);

  hw_uint<144> lane_3_in;
  set_at<0, 144, 144>(lane_3_in, in.extract<432, 575>());
  auto result_3 = reduce_gauss(lane_3_in);
  set_at<48, 128, 16>(whole_result, result_3);

  hw_uint<144> lane_4_in;
  set_at<0, 144, 144>(lane_4_in, in.extract<576, 719>());
  auto result_4 = reduce_gauss(lane_4_in);
  set_at<64, 128, 16>(whole_result, result_4);

  hw_uint<144> lane_5_in;
  set_at<0, 144, 144>(lane_5_in, in.extract<720, 863>());
  auto result_5 = reduce_gauss(lane_5_in);
  set_at<80, 128, 16>(whole_result, result_5);

  hw_uint<144> lane_6_in;
  set_at<0, 144, 144>(lane_6_in, in.extract<864, 1007>());
  auto result_6 = reduce_gauss(lane_6_in);
  set_at<96, 128, 16>(whole_result, result_6);

  hw_uint<144> lane_7_in;
  set_at<0, 144, 144>(lane_7_in, in.extract<1008, 1151>());
  auto result_7 = reduce_gauss(lane_7_in);
  set_at<112, 128, 16>(whole_result, result_7);
  return whole_result;
}

  // level_1_update_0 unroll factor: 4
hw_uint<64>  reduce_gauss_unrolled_4(hw_uint<576>& level_0) {
  hw_uint<64> whole_result;

  hw_uint<144> lane_0_level_0;
  set_at<0, 144, 144>(lane_0_level_0, level_0.extract<0, 143>());
  auto result_0 = reduce_gauss(lane_0_level_0);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<144> lane_1_level_0;
  set_at<0, 144, 144>(lane_1_level_0, level_0.extract<144, 287>());
  auto result_1 = reduce_gauss(lane_1_level_0);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<144> lane_2_level_0;
  set_at<0, 144, 144>(lane_2_level_0, level_0.extract<288, 431>());
  auto result_2 = reduce_gauss(lane_2_level_0);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<144> lane_3_level_0;
  set_at<0, 144, 144>(lane_3_level_0, level_0.extract<432, 575>());
  auto result_3 = reduce_gauss(lane_3_level_0);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // level_2_update_0 unroll factor: 2
hw_uint<32>  reduce_gauss_unrolled_2(hw_uint<288>& level_1) {
  hw_uint<32> whole_result;

  hw_uint<144> lane_0_level_1;
  set_at<0, 144, 144>(lane_0_level_1, level_1.extract<0, 143>());
  auto result_0 = reduce_gauss(lane_0_level_1);
  set_at<0, 32, 16>(whole_result, result_0);

  hw_uint<144> lane_1_level_1;
  set_at<0, 144, 144>(lane_1_level_1, level_1.extract<144, 287>());
  auto result_1 = reduce_gauss(lane_1_level_1);
  set_at<16, 32, 16>(whole_result, result_1);
  return whole_result;
}

  // level_3_update_0 unroll factor: 1
hw_uint<16>  reduce_gauss_unrolled_1(hw_uint<144>& level_2) {
  hw_uint<16> whole_result;

  hw_uint<144> lane_0_level_2;
  set_at<0, 144, 144>(lane_0_level_2, level_2.extract<0, 143>());
  auto result_0 = reduce_gauss(lane_0_level_2);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // gp64x64_16_update_0 unroll factor: 1
hw_uint<16>  id_unrolled_1(hw_uint<16>& level_3) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_level_3;
  set_at<0, 16, 16>(lane_0_level_3, level_3.extract<0, 15>());
  auto result_0 = id(lane_0_level_3);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

