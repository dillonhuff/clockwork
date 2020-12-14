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

hw_uint<16> icsc_5s_1_generated_compute(hw_uint<16*1> stg4) {
  return uint16_t(uint16_t(stg4.get<16, 0>()));
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

  // icsc_5s_1_update_0 unroll factor: 1
hw_uint<16>  icsc_5s_1_generated_compute_unrolled_1(hw_uint<16>& stg4) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_stg4;
  set_at<0, 16, 16>(lane_0_stg4, stg4.extract<0, 15>());
  auto result_0 = icsc_5s_1_generated_compute(lane_0_stg4);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

