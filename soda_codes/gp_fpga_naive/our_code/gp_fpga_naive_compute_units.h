#pragma once

#include "conv_3x3.h"

// Generated compute units...


// Compute unit banks...
  // in_update_0 unroll factor: 8
hw_uint<128>  id_unrolled_8(hw_uint<128>& in_off_chip) {
  hw_uint<128> whole_result;

  hw_uint<16> lane_0_in_off_chip;
  set_at<0, 16, 16>(lane_0_in_off_chip, in_off_chip.extract<0, 15>());
  auto result_0 = id(lane_0_in_off_chip);
  set_at<0, 128, 16>(whole_result, result_0);

  hw_uint<16> lane_1_in_off_chip;
  set_at<0, 16, 16>(lane_1_in_off_chip, in_off_chip.extract<16, 31>());
  auto result_1 = id(lane_1_in_off_chip);
  set_at<16, 128, 16>(whole_result, result_1);

  hw_uint<16> lane_2_in_off_chip;
  set_at<0, 16, 16>(lane_2_in_off_chip, in_off_chip.extract<32, 47>());
  auto result_2 = id(lane_2_in_off_chip);
  set_at<32, 128, 16>(whole_result, result_2);

  hw_uint<16> lane_3_in_off_chip;
  set_at<0, 16, 16>(lane_3_in_off_chip, in_off_chip.extract<48, 63>());
  auto result_3 = id(lane_3_in_off_chip);
  set_at<48, 128, 16>(whole_result, result_3);

  hw_uint<16> lane_4_in_off_chip;
  set_at<0, 16, 16>(lane_4_in_off_chip, in_off_chip.extract<64, 79>());
  auto result_4 = id(lane_4_in_off_chip);
  set_at<64, 128, 16>(whole_result, result_4);

  hw_uint<16> lane_5_in_off_chip;
  set_at<0, 16, 16>(lane_5_in_off_chip, in_off_chip.extract<80, 95>());
  auto result_5 = id(lane_5_in_off_chip);
  set_at<80, 128, 16>(whole_result, result_5);

  hw_uint<16> lane_6_in_off_chip;
  set_at<0, 16, 16>(lane_6_in_off_chip, in_off_chip.extract<96, 111>());
  auto result_6 = id(lane_6_in_off_chip);
  set_at<96, 128, 16>(whole_result, result_6);

  hw_uint<16> lane_7_in_off_chip;
  set_at<0, 16, 16>(lane_7_in_off_chip, in_off_chip.extract<112, 127>());
  auto result_7 = id(lane_7_in_off_chip);
  set_at<112, 128, 16>(whole_result, result_7);
  return whole_result;
}

  // in_gauss_blur_1_update_0 unroll factor: 8
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

  // in_gauss_ds_1_update_0 unroll factor: 4
hw_uint<64>  id_unrolled_4(hw_uint<64>& in_gauss_blur_1) {
  hw_uint<64> whole_result;

  hw_uint<16> lane_0_in_gauss_blur_1;
  set_at<0, 16, 16>(lane_0_in_gauss_blur_1, in_gauss_blur_1.extract<0, 15>());
  auto result_0 = id(lane_0_in_gauss_blur_1);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<16> lane_1_in_gauss_blur_1;
  set_at<0, 16, 16>(lane_1_in_gauss_blur_1, in_gauss_blur_1.extract<16, 31>());
  auto result_1 = id(lane_1_in_gauss_blur_1);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<16> lane_2_in_gauss_blur_1;
  set_at<0, 16, 16>(lane_2_in_gauss_blur_1, in_gauss_blur_1.extract<32, 47>());
  auto result_2 = id(lane_2_in_gauss_blur_1);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<16> lane_3_in_gauss_blur_1;
  set_at<0, 16, 16>(lane_3_in_gauss_blur_1, in_gauss_blur_1.extract<48, 63>());
  auto result_3 = id(lane_3_in_gauss_blur_1);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // in_gauss_blur_2_update_0 unroll factor: 4
hw_uint<64>  reduce_gauss_unrolled_4(hw_uint<576>& in_gauss_ds_1) {
  hw_uint<64> whole_result;

  hw_uint<144> lane_0_in_gauss_ds_1;
  set_at<0, 144, 144>(lane_0_in_gauss_ds_1, in_gauss_ds_1.extract<0, 143>());
  auto result_0 = reduce_gauss(lane_0_in_gauss_ds_1);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<144> lane_1_in_gauss_ds_1;
  set_at<0, 144, 144>(lane_1_in_gauss_ds_1, in_gauss_ds_1.extract<144, 287>());
  auto result_1 = reduce_gauss(lane_1_in_gauss_ds_1);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<144> lane_2_in_gauss_ds_1;
  set_at<0, 144, 144>(lane_2_in_gauss_ds_1, in_gauss_ds_1.extract<288, 431>());
  auto result_2 = reduce_gauss(lane_2_in_gauss_ds_1);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<144> lane_3_in_gauss_ds_1;
  set_at<0, 144, 144>(lane_3_in_gauss_ds_1, in_gauss_ds_1.extract<432, 575>());
  auto result_3 = reduce_gauss(lane_3_in_gauss_ds_1);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // in_gauss_ds_2_update_0 unroll factor: 2
hw_uint<32>  id_unrolled_2(hw_uint<32>& in_gauss_blur_2) {
  hw_uint<32> whole_result;

  hw_uint<16> lane_0_in_gauss_blur_2;
  set_at<0, 16, 16>(lane_0_in_gauss_blur_2, in_gauss_blur_2.extract<0, 15>());
  auto result_0 = id(lane_0_in_gauss_blur_2);
  set_at<0, 32, 16>(whole_result, result_0);

  hw_uint<16> lane_1_in_gauss_blur_2;
  set_at<0, 16, 16>(lane_1_in_gauss_blur_2, in_gauss_blur_2.extract<16, 31>());
  auto result_1 = id(lane_1_in_gauss_blur_2);
  set_at<16, 32, 16>(whole_result, result_1);
  return whole_result;
}

  // in_gauss_blur_3_update_0 unroll factor: 2
hw_uint<32>  reduce_gauss_unrolled_2(hw_uint<288>& in_gauss_ds_2) {
  hw_uint<32> whole_result;

  hw_uint<144> lane_0_in_gauss_ds_2;
  set_at<0, 144, 144>(lane_0_in_gauss_ds_2, in_gauss_ds_2.extract<0, 143>());
  auto result_0 = reduce_gauss(lane_0_in_gauss_ds_2);
  set_at<0, 32, 16>(whole_result, result_0);

  hw_uint<144> lane_1_in_gauss_ds_2;
  set_at<0, 144, 144>(lane_1_in_gauss_ds_2, in_gauss_ds_2.extract<144, 287>());
  auto result_1 = reduce_gauss(lane_1_in_gauss_ds_2);
  set_at<16, 32, 16>(whole_result, result_1);
  return whole_result;
}

  // in_gauss_ds_3_update_0 unroll factor: 1
hw_uint<16>  id_unrolled_1(hw_uint<16>& in_gauss_blur_3) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_in_gauss_blur_3;
  set_at<0, 16, 16>(lane_0_in_gauss_blur_3, in_gauss_blur_3.extract<0, 15>());
  auto result_0 = id(lane_0_in_gauss_blur_3);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

