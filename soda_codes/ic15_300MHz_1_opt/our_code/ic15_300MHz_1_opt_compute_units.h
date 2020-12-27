#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<16> in_generated_compute(hw_uint<16*1> in_off_chip) {
  return uint16_t(uint16_t(in_off_chip.get<16, 0>()));
}

hw_uint<16> stg0_generated_compute(hw_uint<16*4> in) {
  return uint16_t((((uint16_t(in.get<16, 2>()) + uint16_t(in.get<16, 3>())) + (uint16_t(in.get<16, 1>()) + (uint16_t(in.get<16, 0>()) + uint16_t(in.get<16, 2>())))) / 5));
}

hw_uint<16> stg1_generated_compute(hw_uint<16*4> stg0) {
  return uint16_t((((uint16_t(stg0.get<16, 2>()) + uint16_t(stg0.get<16, 3>())) + (uint16_t(stg0.get<16, 1>()) + (uint16_t(stg0.get<16, 0>()) + uint16_t(stg0.get<16, 2>())))) / 5));
}

hw_uint<16> stg2_generated_compute(hw_uint<16*4> stg1) {
  return uint16_t((((uint16_t(stg1.get<16, 2>()) + uint16_t(stg1.get<16, 3>())) + (uint16_t(stg1.get<16, 1>()) + (uint16_t(stg1.get<16, 0>()) + uint16_t(stg1.get<16, 2>())))) / 5));
}

hw_uint<16> stg3_generated_compute(hw_uint<16*4> stg2) {
  return uint16_t((((uint16_t(stg2.get<16, 2>()) + uint16_t(stg2.get<16, 3>())) + (uint16_t(stg2.get<16, 1>()) + (uint16_t(stg2.get<16, 0>()) + uint16_t(stg2.get<16, 2>())))) / 5));
}

hw_uint<16> stg4_generated_compute(hw_uint<16*4> stg3) {
  return uint16_t((((uint16_t(stg3.get<16, 2>()) + uint16_t(stg3.get<16, 3>())) + (uint16_t(stg3.get<16, 1>()) + (uint16_t(stg3.get<16, 0>()) + uint16_t(stg3.get<16, 2>())))) / 5));
}

hw_uint<16> stg5_generated_compute(hw_uint<16*4> stg4) {
  return uint16_t((((uint16_t(stg4.get<16, 2>()) + uint16_t(stg4.get<16, 3>())) + (uint16_t(stg4.get<16, 1>()) + (uint16_t(stg4.get<16, 0>()) + uint16_t(stg4.get<16, 2>())))) / 5));
}

hw_uint<16> stg6_generated_compute(hw_uint<16*4> stg5) {
  return uint16_t((((uint16_t(stg5.get<16, 2>()) + uint16_t(stg5.get<16, 3>())) + (uint16_t(stg5.get<16, 1>()) + (uint16_t(stg5.get<16, 0>()) + uint16_t(stg5.get<16, 2>())))) / 5));
}

hw_uint<16> stg7_generated_compute(hw_uint<16*4> stg6) {
  return uint16_t((((uint16_t(stg6.get<16, 2>()) + uint16_t(stg6.get<16, 3>())) + (uint16_t(stg6.get<16, 1>()) + (uint16_t(stg6.get<16, 0>()) + uint16_t(stg6.get<16, 2>())))) / 5));
}

hw_uint<16> stg8_generated_compute(hw_uint<16*4> stg7) {
  return uint16_t((((uint16_t(stg7.get<16, 2>()) + uint16_t(stg7.get<16, 3>())) + (uint16_t(stg7.get<16, 1>()) + (uint16_t(stg7.get<16, 0>()) + uint16_t(stg7.get<16, 2>())))) / 5));
}

hw_uint<16> stg9_generated_compute(hw_uint<16*4> stg8) {
  return uint16_t((((uint16_t(stg8.get<16, 2>()) + uint16_t(stg8.get<16, 3>())) + (uint16_t(stg8.get<16, 1>()) + (uint16_t(stg8.get<16, 0>()) + uint16_t(stg8.get<16, 2>())))) / 5));
}

hw_uint<16> stg10_generated_compute(hw_uint<16*4> stg9) {
  return uint16_t((((uint16_t(stg9.get<16, 2>()) + uint16_t(stg9.get<16, 3>())) + (uint16_t(stg9.get<16, 1>()) + (uint16_t(stg9.get<16, 0>()) + uint16_t(stg9.get<16, 2>())))) / 5));
}

hw_uint<16> stg11_generated_compute(hw_uint<16*4> stg10) {
  return uint16_t((((uint16_t(stg10.get<16, 2>()) + uint16_t(stg10.get<16, 3>())) + (uint16_t(stg10.get<16, 1>()) + (uint16_t(stg10.get<16, 0>()) + uint16_t(stg10.get<16, 2>())))) / 5));
}

hw_uint<16> stg12_generated_compute(hw_uint<16*4> stg11) {
  return uint16_t((((uint16_t(stg11.get<16, 2>()) + uint16_t(stg11.get<16, 3>())) + (uint16_t(stg11.get<16, 1>()) + (uint16_t(stg11.get<16, 0>()) + uint16_t(stg11.get<16, 2>())))) / 5));
}

hw_uint<16> stg13_generated_compute(hw_uint<16*4> stg12) {
  return uint16_t((((uint16_t(stg12.get<16, 2>()) + uint16_t(stg12.get<16, 3>())) + (uint16_t(stg12.get<16, 1>()) + (uint16_t(stg12.get<16, 0>()) + uint16_t(stg12.get<16, 2>())))) / 5));
}

hw_uint<16> stg14_generated_compute(hw_uint<16*4> stg13) {
  return uint16_t((((uint16_t(stg13.get<16, 2>()) + uint16_t(stg13.get<16, 3>())) + (uint16_t(stg13.get<16, 1>()) + (uint16_t(stg13.get<16, 0>()) + uint16_t(stg13.get<16, 2>())))) / 5));
}

hw_uint<16> ic15_300MHz_1_generated_compute(hw_uint<16*1> stg14) {
  return uint16_t(uint16_t(stg14.get<16, 0>()));
}



// Compute unit banks...
  // in_update_0 unroll factor: 1
hw_uint<16>  in_generated_compute_unrolled_1(hw_uint<16>& in_off_chip) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_in_off_chip;
  set_at<0, 16, 16>(lane_0_in_off_chip, in_off_chip.extract<0, 15>());
  auto result_0 = in_generated_compute(lane_0_in_off_chip);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // stg0_update_0 unroll factor: 1
hw_uint<16>  stg0_generated_compute_unrolled_1(hw_uint<64>& in) {
  hw_uint<16> whole_result;

  hw_uint<64> lane_0_in;
  set_at<0, 64, 64>(lane_0_in, in.extract<0, 63>());
  auto result_0 = stg0_generated_compute(lane_0_in);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // stg1_update_0 unroll factor: 1
hw_uint<16>  stg1_generated_compute_unrolled_1(hw_uint<64>& stg0) {
  hw_uint<16> whole_result;

  hw_uint<64> lane_0_stg0;
  set_at<0, 64, 64>(lane_0_stg0, stg0.extract<0, 63>());
  auto result_0 = stg1_generated_compute(lane_0_stg0);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // stg2_update_0 unroll factor: 1
hw_uint<16>  stg2_generated_compute_unrolled_1(hw_uint<64>& stg1) {
  hw_uint<16> whole_result;

  hw_uint<64> lane_0_stg1;
  set_at<0, 64, 64>(lane_0_stg1, stg1.extract<0, 63>());
  auto result_0 = stg2_generated_compute(lane_0_stg1);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // stg3_update_0 unroll factor: 1
hw_uint<16>  stg3_generated_compute_unrolled_1(hw_uint<64>& stg2) {
  hw_uint<16> whole_result;

  hw_uint<64> lane_0_stg2;
  set_at<0, 64, 64>(lane_0_stg2, stg2.extract<0, 63>());
  auto result_0 = stg3_generated_compute(lane_0_stg2);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // stg4_update_0 unroll factor: 1
hw_uint<16>  stg4_generated_compute_unrolled_1(hw_uint<64>& stg3) {
  hw_uint<16> whole_result;

  hw_uint<64> lane_0_stg3;
  set_at<0, 64, 64>(lane_0_stg3, stg3.extract<0, 63>());
  auto result_0 = stg4_generated_compute(lane_0_stg3);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // stg5_update_0 unroll factor: 1
hw_uint<16>  stg5_generated_compute_unrolled_1(hw_uint<64>& stg4) {
  hw_uint<16> whole_result;

  hw_uint<64> lane_0_stg4;
  set_at<0, 64, 64>(lane_0_stg4, stg4.extract<0, 63>());
  auto result_0 = stg5_generated_compute(lane_0_stg4);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // stg6_update_0 unroll factor: 1
hw_uint<16>  stg6_generated_compute_unrolled_1(hw_uint<64>& stg5) {
  hw_uint<16> whole_result;

  hw_uint<64> lane_0_stg5;
  set_at<0, 64, 64>(lane_0_stg5, stg5.extract<0, 63>());
  auto result_0 = stg6_generated_compute(lane_0_stg5);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // stg7_update_0 unroll factor: 1
hw_uint<16>  stg7_generated_compute_unrolled_1(hw_uint<64>& stg6) {
  hw_uint<16> whole_result;

  hw_uint<64> lane_0_stg6;
  set_at<0, 64, 64>(lane_0_stg6, stg6.extract<0, 63>());
  auto result_0 = stg7_generated_compute(lane_0_stg6);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // stg8_update_0 unroll factor: 1
hw_uint<16>  stg8_generated_compute_unrolled_1(hw_uint<64>& stg7) {
  hw_uint<16> whole_result;

  hw_uint<64> lane_0_stg7;
  set_at<0, 64, 64>(lane_0_stg7, stg7.extract<0, 63>());
  auto result_0 = stg8_generated_compute(lane_0_stg7);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // stg9_update_0 unroll factor: 1
hw_uint<16>  stg9_generated_compute_unrolled_1(hw_uint<64>& stg8) {
  hw_uint<16> whole_result;

  hw_uint<64> lane_0_stg8;
  set_at<0, 64, 64>(lane_0_stg8, stg8.extract<0, 63>());
  auto result_0 = stg9_generated_compute(lane_0_stg8);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // stg10_update_0 unroll factor: 1
hw_uint<16>  stg10_generated_compute_unrolled_1(hw_uint<64>& stg9) {
  hw_uint<16> whole_result;

  hw_uint<64> lane_0_stg9;
  set_at<0, 64, 64>(lane_0_stg9, stg9.extract<0, 63>());
  auto result_0 = stg10_generated_compute(lane_0_stg9);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // stg11_update_0 unroll factor: 1
hw_uint<16>  stg11_generated_compute_unrolled_1(hw_uint<64>& stg10) {
  hw_uint<16> whole_result;

  hw_uint<64> lane_0_stg10;
  set_at<0, 64, 64>(lane_0_stg10, stg10.extract<0, 63>());
  auto result_0 = stg11_generated_compute(lane_0_stg10);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // stg12_update_0 unroll factor: 1
hw_uint<16>  stg12_generated_compute_unrolled_1(hw_uint<64>& stg11) {
  hw_uint<16> whole_result;

  hw_uint<64> lane_0_stg11;
  set_at<0, 64, 64>(lane_0_stg11, stg11.extract<0, 63>());
  auto result_0 = stg12_generated_compute(lane_0_stg11);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // stg13_update_0 unroll factor: 1
hw_uint<16>  stg13_generated_compute_unrolled_1(hw_uint<64>& stg12) {
  hw_uint<16> whole_result;

  hw_uint<64> lane_0_stg12;
  set_at<0, 64, 64>(lane_0_stg12, stg12.extract<0, 63>());
  auto result_0 = stg13_generated_compute(lane_0_stg12);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // stg14_update_0 unroll factor: 1
hw_uint<16>  stg14_generated_compute_unrolled_1(hw_uint<64>& stg13) {
  hw_uint<16> whole_result;

  hw_uint<64> lane_0_stg13;
  set_at<0, 64, 64>(lane_0_stg13, stg13.extract<0, 63>());
  auto result_0 = stg14_generated_compute(lane_0_stg13);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // ic15_300MHz_1_update_0 unroll factor: 1
hw_uint<16>  ic15_300MHz_1_generated_compute_unrolled_1(hw_uint<16>& stg14) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_stg14;
  set_at<0, 16, 16>(lane_0_stg14, stg14.extract<0, 15>());
  auto result_0 = ic15_300MHz_1_generated_compute(lane_0_stg14);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

