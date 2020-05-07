#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<16> input_generated_compute(hw_uint<16*1> input_arg) {
  return input_arg.get<16, 0>();
}

hw_uint<16> pwls_ur_16_generated_compute(hw_uint<16*1> input) {
  return (input.get<16, 0>() + hw_uint<16>(1));
}



// Compute unit banks...
  // input_update_0 unroll factor: 16
hw_uint<256>  input_generated_compute_unrolled_16(hw_uint<256>& input_arg) {
  hw_uint<256> whole_result;

  hw_uint<16> lane_0_input_arg;
  set_at<0, 16, 16>(lane_0_input_arg, input_arg.extract<0, 15>());
  auto result_0 = input_generated_compute(lane_0_input_arg);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<16> lane_1_input_arg;
  set_at<0, 16, 16>(lane_1_input_arg, input_arg.extract<16, 31>());
  auto result_1 = input_generated_compute(lane_1_input_arg);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<16> lane_2_input_arg;
  set_at<0, 16, 16>(lane_2_input_arg, input_arg.extract<32, 47>());
  auto result_2 = input_generated_compute(lane_2_input_arg);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<16> lane_3_input_arg;
  set_at<0, 16, 16>(lane_3_input_arg, input_arg.extract<48, 63>());
  auto result_3 = input_generated_compute(lane_3_input_arg);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<16> lane_4_input_arg;
  set_at<0, 16, 16>(lane_4_input_arg, input_arg.extract<64, 79>());
  auto result_4 = input_generated_compute(lane_4_input_arg);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<16> lane_5_input_arg;
  set_at<0, 16, 16>(lane_5_input_arg, input_arg.extract<80, 95>());
  auto result_5 = input_generated_compute(lane_5_input_arg);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<16> lane_6_input_arg;
  set_at<0, 16, 16>(lane_6_input_arg, input_arg.extract<96, 111>());
  auto result_6 = input_generated_compute(lane_6_input_arg);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<16> lane_7_input_arg;
  set_at<0, 16, 16>(lane_7_input_arg, input_arg.extract<112, 127>());
  auto result_7 = input_generated_compute(lane_7_input_arg);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<16> lane_8_input_arg;
  set_at<0, 16, 16>(lane_8_input_arg, input_arg.extract<128, 143>());
  auto result_8 = input_generated_compute(lane_8_input_arg);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<16> lane_9_input_arg;
  set_at<0, 16, 16>(lane_9_input_arg, input_arg.extract<144, 159>());
  auto result_9 = input_generated_compute(lane_9_input_arg);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<16> lane_10_input_arg;
  set_at<0, 16, 16>(lane_10_input_arg, input_arg.extract<160, 175>());
  auto result_10 = input_generated_compute(lane_10_input_arg);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<16> lane_11_input_arg;
  set_at<0, 16, 16>(lane_11_input_arg, input_arg.extract<176, 191>());
  auto result_11 = input_generated_compute(lane_11_input_arg);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<16> lane_12_input_arg;
  set_at<0, 16, 16>(lane_12_input_arg, input_arg.extract<192, 207>());
  auto result_12 = input_generated_compute(lane_12_input_arg);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<16> lane_13_input_arg;
  set_at<0, 16, 16>(lane_13_input_arg, input_arg.extract<208, 223>());
  auto result_13 = input_generated_compute(lane_13_input_arg);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<16> lane_14_input_arg;
  set_at<0, 16, 16>(lane_14_input_arg, input_arg.extract<224, 239>());
  auto result_14 = input_generated_compute(lane_14_input_arg);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<16> lane_15_input_arg;
  set_at<0, 16, 16>(lane_15_input_arg, input_arg.extract<240, 255>());
  auto result_15 = input_generated_compute(lane_15_input_arg);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // pwls_ur_16_update_0 unroll factor: 16
hw_uint<256>  pwls_ur_16_generated_compute_unrolled_16(hw_uint<256>& input) {
  hw_uint<256> whole_result;

  hw_uint<16> lane_0_input;
  set_at<0, 16, 16>(lane_0_input, input.extract<0, 15>());
  auto result_0 = pwls_ur_16_generated_compute(lane_0_input);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<16> lane_1_input;
  set_at<0, 16, 16>(lane_1_input, input.extract<16, 31>());
  auto result_1 = pwls_ur_16_generated_compute(lane_1_input);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<16> lane_2_input;
  set_at<0, 16, 16>(lane_2_input, input.extract<32, 47>());
  auto result_2 = pwls_ur_16_generated_compute(lane_2_input);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<16> lane_3_input;
  set_at<0, 16, 16>(lane_3_input, input.extract<48, 63>());
  auto result_3 = pwls_ur_16_generated_compute(lane_3_input);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<16> lane_4_input;
  set_at<0, 16, 16>(lane_4_input, input.extract<64, 79>());
  auto result_4 = pwls_ur_16_generated_compute(lane_4_input);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<16> lane_5_input;
  set_at<0, 16, 16>(lane_5_input, input.extract<80, 95>());
  auto result_5 = pwls_ur_16_generated_compute(lane_5_input);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<16> lane_6_input;
  set_at<0, 16, 16>(lane_6_input, input.extract<96, 111>());
  auto result_6 = pwls_ur_16_generated_compute(lane_6_input);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<16> lane_7_input;
  set_at<0, 16, 16>(lane_7_input, input.extract<112, 127>());
  auto result_7 = pwls_ur_16_generated_compute(lane_7_input);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<16> lane_8_input;
  set_at<0, 16, 16>(lane_8_input, input.extract<128, 143>());
  auto result_8 = pwls_ur_16_generated_compute(lane_8_input);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<16> lane_9_input;
  set_at<0, 16, 16>(lane_9_input, input.extract<144, 159>());
  auto result_9 = pwls_ur_16_generated_compute(lane_9_input);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<16> lane_10_input;
  set_at<0, 16, 16>(lane_10_input, input.extract<160, 175>());
  auto result_10 = pwls_ur_16_generated_compute(lane_10_input);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<16> lane_11_input;
  set_at<0, 16, 16>(lane_11_input, input.extract<176, 191>());
  auto result_11 = pwls_ur_16_generated_compute(lane_11_input);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<16> lane_12_input;
  set_at<0, 16, 16>(lane_12_input, input.extract<192, 207>());
  auto result_12 = pwls_ur_16_generated_compute(lane_12_input);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<16> lane_13_input;
  set_at<0, 16, 16>(lane_13_input, input.extract<208, 223>());
  auto result_13 = pwls_ur_16_generated_compute(lane_13_input);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<16> lane_14_input;
  set_at<0, 16, 16>(lane_14_input, input.extract<224, 239>());
  auto result_14 = pwls_ur_16_generated_compute(lane_14_input);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<16> lane_15_input;
  set_at<0, 16, 16>(lane_15_input, input.extract<240, 255>());
  auto result_15 = pwls_ur_16_generated_compute(lane_15_input);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

