#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<16> input_generated_compute(hw_uint<16*1> input_arg) {
  return input_arg.get<16, 0>();
}

hw_uint<16> blurx_generated_compute(hw_uint<16*3> input) {
  return (((input.get<16, 0>() + input.get<16, 1>()) + input.get<16, 2>()) / hw_uint<16>(3));
}

hw_uint<16> bxy_ur_4_generated_compute(hw_uint<16*3> blurx) {
  return (((blurx.get<16, 0>() + blurx.get<16, 1>()) + blurx.get<16, 2>()) / hw_uint<16>(3));
}



// Compute unit banks...
  // input_update_0 unroll factor: 4
hw_uint<64>  input_generated_compute_unrolled_4(hw_uint<64>& input_arg) {
  hw_uint<64> whole_result;
  hw_uint<16> lane_0_input_arg;
  // Need offset: 0, 0
  set_at<0, 16, 16>(lane_0_input_arg, input_arg.extract<0, 15>());
  auto result_0 = input_generated_compute(lane_0_input_arg);
  set_at<0, 64, 16>(whole_result, result_0);
  hw_uint<16> lane_1_input_arg;
  // Need offset: 1, 0
  set_at<0, 16, 16>(lane_1_input_arg, input_arg.extract<16, 31>());
  auto result_1 = input_generated_compute(lane_1_input_arg);
  set_at<16, 64, 16>(whole_result, result_1);
  hw_uint<16> lane_2_input_arg;
  // Need offset: 2, 0
  set_at<0, 16, 16>(lane_2_input_arg, input_arg.extract<32, 47>());
  auto result_2 = input_generated_compute(lane_2_input_arg);
  set_at<32, 64, 16>(whole_result, result_2);
  hw_uint<16> lane_3_input_arg;
  // Need offset: 3, 0
  set_at<0, 16, 16>(lane_3_input_arg, input_arg.extract<48, 63>());
  auto result_3 = input_generated_compute(lane_3_input_arg);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // blurx_update_0 unroll factor: 4
hw_uint<64>  blurx_generated_compute_unrolled_4(hw_uint<192>& input) {
  hw_uint<64> whole_result;
  hw_uint<48> lane_0_input;
  // Need offset: 0, 0
  set_at<0, 48, 16>(lane_0_input, input.extract<0, 15>());
  // Need offset: 0, 1
  set_at<16, 48, 16>(lane_0_input, input.extract<16, 31>());
  // Need offset: 0, 2
  set_at<32, 48, 16>(lane_0_input, input.extract<32, 47>());
  auto result_0 = blurx_generated_compute(lane_0_input);
  set_at<0, 64, 16>(whole_result, result_0);
  hw_uint<48> lane_1_input;
  // Need offset: 1, 0
  set_at<0, 48, 16>(lane_1_input, input.extract<48, 63>());
  // Need offset: 1, 1
  set_at<16, 48, 16>(lane_1_input, input.extract<64, 79>());
  // Need offset: 1, 2
  set_at<32, 48, 16>(lane_1_input, input.extract<80, 95>());
  auto result_1 = blurx_generated_compute(lane_1_input);
  set_at<16, 64, 16>(whole_result, result_1);
  hw_uint<48> lane_2_input;
  // Need offset: 2, 0
  set_at<0, 48, 16>(lane_2_input, input.extract<96, 111>());
  // Need offset: 2, 1
  set_at<16, 48, 16>(lane_2_input, input.extract<112, 127>());
  // Need offset: 2, 2
  set_at<32, 48, 16>(lane_2_input, input.extract<128, 143>());
  auto result_2 = blurx_generated_compute(lane_2_input);
  set_at<32, 64, 16>(whole_result, result_2);
  hw_uint<48> lane_3_input;
  // Need offset: 3, 0
  set_at<0, 48, 16>(lane_3_input, input.extract<144, 159>());
  // Need offset: 3, 1
  set_at<16, 48, 16>(lane_3_input, input.extract<160, 175>());
  // Need offset: 3, 2
  set_at<32, 48, 16>(lane_3_input, input.extract<176, 191>());
  auto result_3 = blurx_generated_compute(lane_3_input);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // bxy_ur_4_update_0 unroll factor: 4
hw_uint<64>  bxy_ur_4_generated_compute_unrolled_4(hw_uint<192>& blurx) {
  hw_uint<64> whole_result;
  hw_uint<48> lane_0_blurx;
  // Need offset: 0, 0
  set_at<0, 48, 16>(lane_0_blurx, blurx.extract<0, 15>());
  // Need offset: 1, 0
  set_at<16, 48, 16>(lane_0_blurx, blurx.extract<16, 31>());
  // Need offset: 2, 0
  set_at<32, 48, 16>(lane_0_blurx, blurx.extract<32, 47>());
  auto result_0 = bxy_ur_4_generated_compute(lane_0_blurx);
  set_at<0, 64, 16>(whole_result, result_0);
  hw_uint<48> lane_1_blurx;
  // Need offset: 1, 0
  set_at<0, 48, 16>(lane_1_blurx, blurx.extract<16, 31>());
  // Need offset: 2, 0
  set_at<16, 48, 16>(lane_1_blurx, blurx.extract<32, 47>());
  // Need offset: 3, 0
  set_at<32, 48, 16>(lane_1_blurx, blurx.extract<48, 63>());
  auto result_1 = bxy_ur_4_generated_compute(lane_1_blurx);
  set_at<16, 64, 16>(whole_result, result_1);
  hw_uint<48> lane_2_blurx;
  // Need offset: 2, 0
  set_at<0, 48, 16>(lane_2_blurx, blurx.extract<32, 47>());
  // Need offset: 3, 0
  set_at<16, 48, 16>(lane_2_blurx, blurx.extract<48, 63>());
  // Need offset: 4, 0
  set_at<32, 48, 16>(lane_2_blurx, blurx.extract<64, 79>());
  auto result_2 = bxy_ur_4_generated_compute(lane_2_blurx);
  set_at<32, 64, 16>(whole_result, result_2);
  hw_uint<48> lane_3_blurx;
  // Need offset: 3, 0
  set_at<0, 48, 16>(lane_3_blurx, blurx.extract<48, 63>());
  // Need offset: 4, 0
  set_at<16, 48, 16>(lane_3_blurx, blurx.extract<64, 79>());
  // Need offset: 5, 0
  set_at<32, 48, 16>(lane_3_blurx, blurx.extract<80, 95>());
  auto result_3 = bxy_ur_4_generated_compute(lane_3_blurx);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

