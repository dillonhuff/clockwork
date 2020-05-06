#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<32> input_generated_compute(hw_uint<32*1> input_arg) {
  return input_arg.get<32, 0>();
}

hw_uint<32> pw_ur_16_generated_compute(hw_uint<32*1> input) {
  return (input.get<32, 0>() + hw_uint<32>(1));
}



// Compute unit banks...
  // input_update_0 unroll factor: 16
hw_uint<512>  input_generated_compute_unrolled_16(hw_uint<512>& input_arg) {
  hw_uint<512> whole_result;

  hw_uint<32> lane_0_input_arg;
  set_at<0, 32, 32>(lane_0_input_arg, input_arg.extract<0, 31>());
  auto result_0 = input_generated_compute(lane_0_input_arg);
  set_at<0, 512, 32>(whole_result, result_0);

  hw_uint<32> lane_1_input_arg;
  set_at<0, 32, 32>(lane_1_input_arg, input_arg.extract<32, 63>());
  auto result_1 = input_generated_compute(lane_1_input_arg);
  set_at<32, 512, 32>(whole_result, result_1);

  hw_uint<32> lane_2_input_arg;
  set_at<0, 32, 32>(lane_2_input_arg, input_arg.extract<64, 95>());
  auto result_2 = input_generated_compute(lane_2_input_arg);
  set_at<64, 512, 32>(whole_result, result_2);

  hw_uint<32> lane_3_input_arg;
  set_at<0, 32, 32>(lane_3_input_arg, input_arg.extract<96, 127>());
  auto result_3 = input_generated_compute(lane_3_input_arg);
  set_at<96, 512, 32>(whole_result, result_3);

  hw_uint<32> lane_4_input_arg;
  set_at<0, 32, 32>(lane_4_input_arg, input_arg.extract<128, 159>());
  auto result_4 = input_generated_compute(lane_4_input_arg);
  set_at<128, 512, 32>(whole_result, result_4);

  hw_uint<32> lane_5_input_arg;
  set_at<0, 32, 32>(lane_5_input_arg, input_arg.extract<160, 191>());
  auto result_5 = input_generated_compute(lane_5_input_arg);
  set_at<160, 512, 32>(whole_result, result_5);

  hw_uint<32> lane_6_input_arg;
  set_at<0, 32, 32>(lane_6_input_arg, input_arg.extract<192, 223>());
  auto result_6 = input_generated_compute(lane_6_input_arg);
  set_at<192, 512, 32>(whole_result, result_6);

  hw_uint<32> lane_7_input_arg;
  set_at<0, 32, 32>(lane_7_input_arg, input_arg.extract<224, 255>());
  auto result_7 = input_generated_compute(lane_7_input_arg);
  set_at<224, 512, 32>(whole_result, result_7);

  hw_uint<32> lane_8_input_arg;
  set_at<0, 32, 32>(lane_8_input_arg, input_arg.extract<256, 287>());
  auto result_8 = input_generated_compute(lane_8_input_arg);
  set_at<256, 512, 32>(whole_result, result_8);

  hw_uint<32> lane_9_input_arg;
  set_at<0, 32, 32>(lane_9_input_arg, input_arg.extract<288, 319>());
  auto result_9 = input_generated_compute(lane_9_input_arg);
  set_at<288, 512, 32>(whole_result, result_9);

  hw_uint<32> lane_10_input_arg;
  set_at<0, 32, 32>(lane_10_input_arg, input_arg.extract<320, 351>());
  auto result_10 = input_generated_compute(lane_10_input_arg);
  set_at<320, 512, 32>(whole_result, result_10);

  hw_uint<32> lane_11_input_arg;
  set_at<0, 32, 32>(lane_11_input_arg, input_arg.extract<352, 383>());
  auto result_11 = input_generated_compute(lane_11_input_arg);
  set_at<352, 512, 32>(whole_result, result_11);

  hw_uint<32> lane_12_input_arg;
  set_at<0, 32, 32>(lane_12_input_arg, input_arg.extract<384, 415>());
  auto result_12 = input_generated_compute(lane_12_input_arg);
  set_at<384, 512, 32>(whole_result, result_12);

  hw_uint<32> lane_13_input_arg;
  set_at<0, 32, 32>(lane_13_input_arg, input_arg.extract<416, 447>());
  auto result_13 = input_generated_compute(lane_13_input_arg);
  set_at<416, 512, 32>(whole_result, result_13);

  hw_uint<32> lane_14_input_arg;
  set_at<0, 32, 32>(lane_14_input_arg, input_arg.extract<448, 479>());
  auto result_14 = input_generated_compute(lane_14_input_arg);
  set_at<448, 512, 32>(whole_result, result_14);

  hw_uint<32> lane_15_input_arg;
  set_at<0, 32, 32>(lane_15_input_arg, input_arg.extract<480, 511>());
  auto result_15 = input_generated_compute(lane_15_input_arg);
  set_at<480, 512, 32>(whole_result, result_15);
  return whole_result;
}

  // pw_ur_16_update_0 unroll factor: 16
hw_uint<512>  pw_ur_16_generated_compute_unrolled_16(hw_uint<512>& input) {
  hw_uint<512> whole_result;

  hw_uint<32> lane_0_input;
  set_at<0, 32, 32>(lane_0_input, input.extract<0, 31>());
  auto result_0 = pw_ur_16_generated_compute(lane_0_input);
  set_at<0, 512, 32>(whole_result, result_0);

  hw_uint<32> lane_1_input;
  set_at<0, 32, 32>(lane_1_input, input.extract<32, 63>());
  auto result_1 = pw_ur_16_generated_compute(lane_1_input);
  set_at<32, 512, 32>(whole_result, result_1);

  hw_uint<32> lane_2_input;
  set_at<0, 32, 32>(lane_2_input, input.extract<64, 95>());
  auto result_2 = pw_ur_16_generated_compute(lane_2_input);
  set_at<64, 512, 32>(whole_result, result_2);

  hw_uint<32> lane_3_input;
  set_at<0, 32, 32>(lane_3_input, input.extract<96, 127>());
  auto result_3 = pw_ur_16_generated_compute(lane_3_input);
  set_at<96, 512, 32>(whole_result, result_3);

  hw_uint<32> lane_4_input;
  set_at<0, 32, 32>(lane_4_input, input.extract<128, 159>());
  auto result_4 = pw_ur_16_generated_compute(lane_4_input);
  set_at<128, 512, 32>(whole_result, result_4);

  hw_uint<32> lane_5_input;
  set_at<0, 32, 32>(lane_5_input, input.extract<160, 191>());
  auto result_5 = pw_ur_16_generated_compute(lane_5_input);
  set_at<160, 512, 32>(whole_result, result_5);

  hw_uint<32> lane_6_input;
  set_at<0, 32, 32>(lane_6_input, input.extract<192, 223>());
  auto result_6 = pw_ur_16_generated_compute(lane_6_input);
  set_at<192, 512, 32>(whole_result, result_6);

  hw_uint<32> lane_7_input;
  set_at<0, 32, 32>(lane_7_input, input.extract<224, 255>());
  auto result_7 = pw_ur_16_generated_compute(lane_7_input);
  set_at<224, 512, 32>(whole_result, result_7);

  hw_uint<32> lane_8_input;
  set_at<0, 32, 32>(lane_8_input, input.extract<256, 287>());
  auto result_8 = pw_ur_16_generated_compute(lane_8_input);
  set_at<256, 512, 32>(whole_result, result_8);

  hw_uint<32> lane_9_input;
  set_at<0, 32, 32>(lane_9_input, input.extract<288, 319>());
  auto result_9 = pw_ur_16_generated_compute(lane_9_input);
  set_at<288, 512, 32>(whole_result, result_9);

  hw_uint<32> lane_10_input;
  set_at<0, 32, 32>(lane_10_input, input.extract<320, 351>());
  auto result_10 = pw_ur_16_generated_compute(lane_10_input);
  set_at<320, 512, 32>(whole_result, result_10);

  hw_uint<32> lane_11_input;
  set_at<0, 32, 32>(lane_11_input, input.extract<352, 383>());
  auto result_11 = pw_ur_16_generated_compute(lane_11_input);
  set_at<352, 512, 32>(whole_result, result_11);

  hw_uint<32> lane_12_input;
  set_at<0, 32, 32>(lane_12_input, input.extract<384, 415>());
  auto result_12 = pw_ur_16_generated_compute(lane_12_input);
  set_at<384, 512, 32>(whole_result, result_12);

  hw_uint<32> lane_13_input;
  set_at<0, 32, 32>(lane_13_input, input.extract<416, 447>());
  auto result_13 = pw_ur_16_generated_compute(lane_13_input);
  set_at<416, 512, 32>(whole_result, result_13);

  hw_uint<32> lane_14_input;
  set_at<0, 32, 32>(lane_14_input, input.extract<448, 479>());
  auto result_14 = pw_ur_16_generated_compute(lane_14_input);
  set_at<448, 512, 32>(whole_result, result_14);

  hw_uint<32> lane_15_input;
  set_at<0, 32, 32>(lane_15_input, input.extract<480, 511>());
  auto result_15 = pw_ur_16_generated_compute(lane_15_input);
  set_at<480, 512, 32>(whole_result, result_15);
  return whole_result;
}

