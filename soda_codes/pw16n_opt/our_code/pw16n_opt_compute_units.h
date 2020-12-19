#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<16> input_generated_compute(hw_uint<16*1> input_arg) {
  return uint16_t(uint16_t(input_arg.get<16, 0>()));
}

hw_uint<16> pw16n_generated_compute(hw_uint<16*1> input) {
  return uint16_t((uint16_t(input.get<16, 0>()) / 9));
}



// Compute unit banks...
  // input_update_0 unroll factor: 1
hw_uint<16>  input_generated_compute_unrolled_1(hw_uint<16>& input_arg) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_input_arg;
  set_at<0, 16, 16>(lane_0_input_arg, input_arg.extract<0, 15>());
  auto result_0 = input_generated_compute(lane_0_input_arg);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // pw16n_update_0 unroll factor: 1
hw_uint<16>  pw16n_generated_compute_unrolled_1(hw_uint<16>& input) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_input;
  set_at<0, 16, 16>(lane_0_input, input.extract<0, 15>());
  auto result_0 = pw16n_generated_compute(lane_0_input);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

