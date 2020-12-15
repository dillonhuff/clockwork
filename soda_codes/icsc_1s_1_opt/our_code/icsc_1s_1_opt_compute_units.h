#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<16> in_generated_compute(hw_uint<16*1> in_off_chip) {
  return uint16_t(uint16_t(in_off_chip.get<16, 0>()));
}

hw_uint<16> stg0_generated_compute(hw_uint<16*1> in) {
  return uint16_t((uint16_t(in.get<16, 0>()) * 5));
}

hw_uint<16> icsc_1s_1_generated_compute(hw_uint<16*1> stg0) {
  return uint16_t(uint16_t(stg0.get<16, 0>()));
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
hw_uint<16>  stg0_generated_compute_unrolled_1(hw_uint<16>& in) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_in;
  set_at<0, 16, 16>(lane_0_in, in.extract<0, 15>());
  auto result_0 = stg0_generated_compute(lane_0_in);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // icsc_1s_1_update_0 unroll factor: 1
hw_uint<16>  icsc_1s_1_generated_compute_unrolled_1(hw_uint<16>& stg0) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_stg0;
  set_at<0, 16, 16>(lane_0_stg0, stg0.extract<0, 15>());
  auto result_0 = icsc_1s_1_generated_compute(lane_0_stg0);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

