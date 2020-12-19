#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<16> input_generated_compute(hw_uint<16*1> input_arg) {
  return uint16_t(uint16_t(input_arg.get<16, 0>()));
}

hw_uint<16> blurx_generated_compute(hw_uint<16*3> input) {
  return uint16_t(((uint16_t(input.get<16, 0>()) + (uint16_t(input.get<16, 1>()) + uint16_t(input.get<16, 2>()))) / 3));
}

hw_uint<16> bxy_noinit_p220_8_generated_compute(hw_uint<16*3> blurx) {
  return uint16_t(((uint16_t(blurx.get<16, 0>()) + (uint16_t(blurx.get<16, 1>()) + uint16_t(blurx.get<16, 2>()))) / 3));
}



// Compute unit banks...
  // input_update_0 unroll factor: 8
hw_uint<128>  input_generated_compute_unrolled_8(hw_uint<128>& input_arg) {
  hw_uint<128> whole_result;

  hw_uint<16> lane_0_input_arg;
  set_at<0, 16, 16>(lane_0_input_arg, input_arg.extract<0, 15>());
  auto result_0 = input_generated_compute(lane_0_input_arg);
  set_at<0, 128, 16>(whole_result, result_0);

  hw_uint<16> lane_1_input_arg;
  set_at<0, 16, 16>(lane_1_input_arg, input_arg.extract<16, 31>());
  auto result_1 = input_generated_compute(lane_1_input_arg);
  set_at<16, 128, 16>(whole_result, result_1);

  hw_uint<16> lane_2_input_arg;
  set_at<0, 16, 16>(lane_2_input_arg, input_arg.extract<32, 47>());
  auto result_2 = input_generated_compute(lane_2_input_arg);
  set_at<32, 128, 16>(whole_result, result_2);

  hw_uint<16> lane_3_input_arg;
  set_at<0, 16, 16>(lane_3_input_arg, input_arg.extract<48, 63>());
  auto result_3 = input_generated_compute(lane_3_input_arg);
  set_at<48, 128, 16>(whole_result, result_3);

  hw_uint<16> lane_4_input_arg;
  set_at<0, 16, 16>(lane_4_input_arg, input_arg.extract<64, 79>());
  auto result_4 = input_generated_compute(lane_4_input_arg);
  set_at<64, 128, 16>(whole_result, result_4);

  hw_uint<16> lane_5_input_arg;
  set_at<0, 16, 16>(lane_5_input_arg, input_arg.extract<80, 95>());
  auto result_5 = input_generated_compute(lane_5_input_arg);
  set_at<80, 128, 16>(whole_result, result_5);

  hw_uint<16> lane_6_input_arg;
  set_at<0, 16, 16>(lane_6_input_arg, input_arg.extract<96, 111>());
  auto result_6 = input_generated_compute(lane_6_input_arg);
  set_at<96, 128, 16>(whole_result, result_6);

  hw_uint<16> lane_7_input_arg;
  set_at<0, 16, 16>(lane_7_input_arg, input_arg.extract<112, 127>());
  auto result_7 = input_generated_compute(lane_7_input_arg);
  set_at<112, 128, 16>(whole_result, result_7);
  return whole_result;
}

  // blurx_update_0 unroll factor: 8
hw_uint<128>  blurx_generated_compute_unrolled_8(hw_uint<384>& input) {
  hw_uint<128> whole_result;

  hw_uint<48> lane_0_input;
  set_at<0, 48, 48>(lane_0_input, input.extract<0, 47>());
  auto result_0 = blurx_generated_compute(lane_0_input);
  set_at<0, 128, 16>(whole_result, result_0);

  hw_uint<48> lane_1_input;
  set_at<0, 48, 48>(lane_1_input, input.extract<48, 95>());
  auto result_1 = blurx_generated_compute(lane_1_input);
  set_at<16, 128, 16>(whole_result, result_1);

  hw_uint<48> lane_2_input;
  set_at<0, 48, 48>(lane_2_input, input.extract<96, 143>());
  auto result_2 = blurx_generated_compute(lane_2_input);
  set_at<32, 128, 16>(whole_result, result_2);

  hw_uint<48> lane_3_input;
  set_at<0, 48, 48>(lane_3_input, input.extract<144, 191>());
  auto result_3 = blurx_generated_compute(lane_3_input);
  set_at<48, 128, 16>(whole_result, result_3);

  hw_uint<48> lane_4_input;
  set_at<0, 48, 48>(lane_4_input, input.extract<192, 239>());
  auto result_4 = blurx_generated_compute(lane_4_input);
  set_at<64, 128, 16>(whole_result, result_4);

  hw_uint<48> lane_5_input;
  set_at<0, 48, 48>(lane_5_input, input.extract<240, 287>());
  auto result_5 = blurx_generated_compute(lane_5_input);
  set_at<80, 128, 16>(whole_result, result_5);

  hw_uint<48> lane_6_input;
  set_at<0, 48, 48>(lane_6_input, input.extract<288, 335>());
  auto result_6 = blurx_generated_compute(lane_6_input);
  set_at<96, 128, 16>(whole_result, result_6);

  hw_uint<48> lane_7_input;
  set_at<0, 48, 48>(lane_7_input, input.extract<336, 383>());
  auto result_7 = blurx_generated_compute(lane_7_input);
  set_at<112, 128, 16>(whole_result, result_7);
  return whole_result;
}

  // bxy_noinit_p220_8_update_0 unroll factor: 8
hw_uint<128>  bxy_noinit_p220_8_generated_compute_unrolled_8(hw_uint<384>& blurx) {
  hw_uint<128> whole_result;

  hw_uint<48> lane_0_blurx;
  set_at<0, 48, 48>(lane_0_blurx, blurx.extract<0, 47>());
  auto result_0 = bxy_noinit_p220_8_generated_compute(lane_0_blurx);
  set_at<0, 128, 16>(whole_result, result_0);

  hw_uint<48> lane_1_blurx;
  set_at<0, 48, 48>(lane_1_blurx, blurx.extract<48, 95>());
  auto result_1 = bxy_noinit_p220_8_generated_compute(lane_1_blurx);
  set_at<16, 128, 16>(whole_result, result_1);

  hw_uint<48> lane_2_blurx;
  set_at<0, 48, 48>(lane_2_blurx, blurx.extract<96, 143>());
  auto result_2 = bxy_noinit_p220_8_generated_compute(lane_2_blurx);
  set_at<32, 128, 16>(whole_result, result_2);

  hw_uint<48> lane_3_blurx;
  set_at<0, 48, 48>(lane_3_blurx, blurx.extract<144, 191>());
  auto result_3 = bxy_noinit_p220_8_generated_compute(lane_3_blurx);
  set_at<48, 128, 16>(whole_result, result_3);

  hw_uint<48> lane_4_blurx;
  set_at<0, 48, 48>(lane_4_blurx, blurx.extract<192, 239>());
  auto result_4 = bxy_noinit_p220_8_generated_compute(lane_4_blurx);
  set_at<64, 128, 16>(whole_result, result_4);

  hw_uint<48> lane_5_blurx;
  set_at<0, 48, 48>(lane_5_blurx, blurx.extract<240, 287>());
  auto result_5 = bxy_noinit_p220_8_generated_compute(lane_5_blurx);
  set_at<80, 128, 16>(whole_result, result_5);

  hw_uint<48> lane_6_blurx;
  set_at<0, 48, 48>(lane_6_blurx, blurx.extract<288, 335>());
  auto result_6 = bxy_noinit_p220_8_generated_compute(lane_6_blurx);
  set_at<96, 128, 16>(whole_result, result_6);

  hw_uint<48> lane_7_blurx;
  set_at<0, 48, 48>(lane_7_blurx, blurx.extract<336, 383>());
  auto result_7 = bxy_noinit_p220_8_generated_compute(lane_7_blurx);
  set_at<112, 128, 16>(whole_result, result_7);
  return whole_result;
}

