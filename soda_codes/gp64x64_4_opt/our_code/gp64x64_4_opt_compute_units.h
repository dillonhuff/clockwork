#pragma once

#include "conv_3x3.h"

// Generated compute units...


// Compute unit banks...
  // in_update_0 unroll factor: 4
hw_uint<64>  id_unrolled_4(hw_uint<64>& in_off_chip) {
  hw_uint<64> whole_result;

  hw_uint<16> lane_0_in_off_chip;
  set_at<0, 16, 16>(lane_0_in_off_chip, in_off_chip.extract<0, 15>());
  auto result_0 = id(lane_0_in_off_chip);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<16> lane_1_in_off_chip;
  set_at<0, 16, 16>(lane_1_in_off_chip, in_off_chip.extract<16, 31>());
  auto result_1 = id(lane_1_in_off_chip);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<16> lane_2_in_off_chip;
  set_at<0, 16, 16>(lane_2_in_off_chip, in_off_chip.extract<32, 47>());
  auto result_2 = id(lane_2_in_off_chip);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<16> lane_3_in_off_chip;
  set_at<0, 16, 16>(lane_3_in_off_chip, in_off_chip.extract<48, 63>());
  auto result_3 = id(lane_3_in_off_chip);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // level_0_update_0 unroll factor: 2
hw_uint<32>  reduce_gauss_unrolled_2(hw_uint<288>& in) {
  hw_uint<32> whole_result;

  hw_uint<144> lane_0_in;
  set_at<0, 144, 144>(lane_0_in, in.extract<0, 143>());
  auto result_0 = reduce_gauss(lane_0_in);
  set_at<0, 32, 16>(whole_result, result_0);

  hw_uint<144> lane_1_in;
  set_at<0, 144, 144>(lane_1_in, in.extract<144, 287>());
  auto result_1 = reduce_gauss(lane_1_in);
  set_at<16, 32, 16>(whole_result, result_1);
  return whole_result;
}

  // level_1_update_0 unroll factor: 1
hw_uint<16>  reduce_gauss_unrolled_1(hw_uint<144>& level_0) {
  hw_uint<16> whole_result;

  hw_uint<144> lane_0_level_0;
  set_at<0, 144, 144>(lane_0_level_0, level_0.extract<0, 143>());
  auto result_0 = reduce_gauss(lane_0_level_0);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // gp64x64_4_update_0 unroll factor: 1
hw_uint<16>  id_unrolled_1(hw_uint<16>& level_3) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_level_3;
  set_at<0, 16, 16>(lane_0_level_3, level_3.extract<0, 15>());
  auto result_0 = id(lane_0_level_3);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

