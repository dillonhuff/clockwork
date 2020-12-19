#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<16> input_generated_compute(hw_uint<16*1> input_arg) {
  return uint16_t(uint16_t(input_arg.get<16, 0>()));
}

hw_uint<16> blurx_generated_compute(hw_uint<16*3> input) {
  return uint16_t(((uint16_t(input.get<16, 0>()) + (uint16_t(input.get<16, 1>()) + uint16_t(input.get<16, 2>()))) / 3));
}

hw_uint<16> bxy_noinit_p220_4_generated_compute(hw_uint<16*3> blurx) {
  return uint16_t(((uint16_t(blurx.get<16, 0>()) + (uint16_t(blurx.get<16, 1>()) + uint16_t(blurx.get<16, 2>()))) / 3));
}



// Compute unit banks...
  // input_update_0 unroll factor: 4
hw_uint<64>  input_generated_compute_unrolled_4(hw_uint<64>& input_arg) {
  hw_uint<64> whole_result;

  hw_uint<16> lane_0_input_arg;
  set_at<0, 16, 16>(lane_0_input_arg, input_arg.extract<0, 15>());
  auto result_0 = input_generated_compute(lane_0_input_arg);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<16> lane_1_input_arg;
  set_at<0, 16, 16>(lane_1_input_arg, input_arg.extract<16, 31>());
  auto result_1 = input_generated_compute(lane_1_input_arg);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<16> lane_2_input_arg;
  set_at<0, 16, 16>(lane_2_input_arg, input_arg.extract<32, 47>());
  auto result_2 = input_generated_compute(lane_2_input_arg);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<16> lane_3_input_arg;
  set_at<0, 16, 16>(lane_3_input_arg, input_arg.extract<48, 63>());
  auto result_3 = input_generated_compute(lane_3_input_arg);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // blurx_update_0 unroll factor: 4
hw_uint<64>  blurx_generated_compute_unrolled_4(hw_uint<192>& input) {
  hw_uint<64> whole_result;

  hw_uint<48> lane_0_input;
  set_at<0, 48, 48>(lane_0_input, input.extract<0, 47>());
  auto result_0 = blurx_generated_compute(lane_0_input);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<48> lane_1_input;
  set_at<0, 48, 48>(lane_1_input, input.extract<48, 95>());
  auto result_1 = blurx_generated_compute(lane_1_input);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<48> lane_2_input;
  set_at<0, 48, 48>(lane_2_input, input.extract<96, 143>());
  auto result_2 = blurx_generated_compute(lane_2_input);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<48> lane_3_input;
  set_at<0, 48, 48>(lane_3_input, input.extract<144, 191>());
  auto result_3 = blurx_generated_compute(lane_3_input);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // bxy_noinit_p220_4_update_0 unroll factor: 4
hw_uint<64>  bxy_noinit_p220_4_generated_compute_unrolled_4(hw_uint<192>& blurx) {
  hw_uint<64> whole_result;

  hw_uint<48> lane_0_blurx;
  set_at<0, 48, 48>(lane_0_blurx, blurx.extract<0, 47>());
  auto result_0 = bxy_noinit_p220_4_generated_compute(lane_0_blurx);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<48> lane_1_blurx;
  set_at<0, 48, 48>(lane_1_blurx, blurx.extract<48, 95>());
  auto result_1 = bxy_noinit_p220_4_generated_compute(lane_1_blurx);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<48> lane_2_blurx;
  set_at<0, 48, 48>(lane_2_blurx, blurx.extract<96, 143>());
  auto result_2 = bxy_noinit_p220_4_generated_compute(lane_2_blurx);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<48> lane_3_blurx;
  set_at<0, 48, 48>(lane_3_blurx, blurx.extract<144, 191>());
  auto result_3 = bxy_noinit_p220_4_generated_compute(lane_3_blurx);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

