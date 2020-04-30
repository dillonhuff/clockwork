#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<16> input_generated_compute(hw_uint<16*1> input_arg) {
  return input_arg.get<16, 0>();
}

hw_uint<16> blurx_generated_compute(hw_uint<16*3> input) {
  return (((input.get<16, 0>() + input.get<16, 1>()) + input.get<16, 2>()) / hw_uint<16>(3));
}

hw_uint<16> bxy_ur_2_generated_compute(hw_uint<16*3> blurx) {
  return (((blurx.get<16, 0>() + blurx.get<16, 1>()) + blurx.get<16, 2>()) / hw_uint<16>(3));
}



// Compute unit banks...
  // input_update_0 unroll factor: 2
hw_uint<32>  input_generated_compute_unrolled_2(hw_uint<32>& input_arg) {
  hw_uint<32> whole_result;
  hw_uint<16> lane_0_input_arg;
  // Need offset: 0, 0
  set_at<0, 16, 16>(lane_0_input_arg, input_arg.extract<0, 15>());
  auto result_0 = input_generated_compute(lane_0_input_arg);
  set_at<0, 32, 16>(whole_result, result_0);
  hw_uint<16> lane_1_input_arg;
  // Need offset: 1, 0
  set_at<0, 16, 16>(lane_1_input_arg, input_arg.extract<16, 31>());
  auto result_1 = input_generated_compute(lane_1_input_arg);
  set_at<16, 32, 16>(whole_result, result_1);
  return whole_result;
}

  // blurx_update_0 unroll factor: 2
hw_uint<32>  blurx_generated_compute_unrolled_2(hw_uint<96>& input) {
  hw_uint<32> whole_result;
  hw_uint<48> lane_0_input;
  // Need offset: 0, 0
  set_at<0, 48, 16>(lane_0_input, input.extract<0, 15>());
  // Need offset: 0, 1
  set_at<16, 48, 16>(lane_0_input, input.extract<16, 31>());
  // Need offset: 0, 2
  set_at<32, 48, 16>(lane_0_input, input.extract<32, 47>());
  auto result_0 = blurx_generated_compute(lane_0_input);
  set_at<0, 32, 16>(whole_result, result_0);
  hw_uint<48> lane_1_input;
  // Need offset: 1, 0
  set_at<0, 48, 16>(lane_1_input, input.extract<48, 63>());
  // Need offset: 1, 1
  set_at<16, 48, 16>(lane_1_input, input.extract<64, 79>());
  // Need offset: 1, 2
  set_at<32, 48, 16>(lane_1_input, input.extract<80, 95>());
  auto result_1 = blurx_generated_compute(lane_1_input);
  set_at<16, 32, 16>(whole_result, result_1);
  return whole_result;
}

  // bxy_ur_2_update_0 unroll factor: 2
hw_uint<32>  bxy_ur_2_generated_compute_unrolled_2(hw_uint<96>& blurx) {
  hw_uint<32> whole_result;
  hw_uint<48> lane_0_blurx;
  // Need offset: 0, 0
  set_at<0, 48, 16>(lane_0_blurx, blurx.extract<0, 15>());
  // Need offset: 1, 0
  set_at<16, 48, 16>(lane_0_blurx, blurx.extract<16, 31>());
  // Need offset: 2, 0
  set_at<32, 48, 16>(lane_0_blurx, blurx.extract<32, 47>());
  auto result_0 = bxy_ur_2_generated_compute(lane_0_blurx);
  set_at<0, 32, 16>(whole_result, result_0);
  hw_uint<48> lane_1_blurx;
  // Need offset: 1, 0
  set_at<0, 48, 16>(lane_1_blurx, blurx.extract<16, 31>());
  // Need offset: 2, 0
  set_at<16, 48, 16>(lane_1_blurx, blurx.extract<32, 47>());
  // Need offset: 3, 0
  set_at<32, 48, 16>(lane_1_blurx, blurx.extract<48, 63>());
  auto result_1 = bxy_ur_2_generated_compute(lane_1_blurx);
  set_at<16, 32, 16>(whole_result, result_1);
  return whole_result;
}

