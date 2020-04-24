#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<16> input_generated_compute(hw_uint<16*1> input_arg) {
  return input_arg.get<16, 0>();
}

hw_uint<16> blurx_generated_compute(hw_uint<16*3> input) {
  return (((input.get<16, 0>() + input.get<16, 1>()) + input.get<16, 2>()) / hw_uint<16>(3));
}

hw_uint<16> blur_xy_16_unrolled_16_generated_compute(hw_uint<16*3> blurx) {
  return (((blurx.get<16, 0>() + blurx.get<16, 1>()) + blurx.get<16, 2>()) / hw_uint<16>(3));
}



// Compute unit banks...
  // input_update_0 unroll factor: 16
hw_uint<256>  input_generated_compute_unrolled_16(hw_uint<256>& input_arg) {
  hw_uint<256> whole_result;
  hw_uint<16> lane_0_input_arg;
  // Need offset: 0, 0
  set_at<0, 16, 16>(lane_0_input_arg, input_arg.extract<0, 15>());
  auto result_0 = input_generated_compute(lane_0_input_arg);
  set_at<0, 256, 16>(whole_result, result_0);
  hw_uint<16> lane_1_input_arg;
  // Need offset: 1, 0
  set_at<0, 16, 16>(lane_1_input_arg, input_arg.extract<16, 31>());
  auto result_1 = input_generated_compute(lane_1_input_arg);
  set_at<16, 256, 16>(whole_result, result_1);
  hw_uint<16> lane_2_input_arg;
  // Need offset: 2, 0
  set_at<0, 16, 16>(lane_2_input_arg, input_arg.extract<32, 47>());
  auto result_2 = input_generated_compute(lane_2_input_arg);
  set_at<32, 256, 16>(whole_result, result_2);
  hw_uint<16> lane_3_input_arg;
  // Need offset: 3, 0
  set_at<0, 16, 16>(lane_3_input_arg, input_arg.extract<48, 63>());
  auto result_3 = input_generated_compute(lane_3_input_arg);
  set_at<48, 256, 16>(whole_result, result_3);
  hw_uint<16> lane_4_input_arg;
  // Need offset: 4, 0
  set_at<0, 16, 16>(lane_4_input_arg, input_arg.extract<64, 79>());
  auto result_4 = input_generated_compute(lane_4_input_arg);
  set_at<64, 256, 16>(whole_result, result_4);
  hw_uint<16> lane_5_input_arg;
  // Need offset: 5, 0
  set_at<0, 16, 16>(lane_5_input_arg, input_arg.extract<80, 95>());
  auto result_5 = input_generated_compute(lane_5_input_arg);
  set_at<80, 256, 16>(whole_result, result_5);
  hw_uint<16> lane_6_input_arg;
  // Need offset: 6, 0
  set_at<0, 16, 16>(lane_6_input_arg, input_arg.extract<96, 111>());
  auto result_6 = input_generated_compute(lane_6_input_arg);
  set_at<96, 256, 16>(whole_result, result_6);
  hw_uint<16> lane_7_input_arg;
  // Need offset: 7, 0
  set_at<0, 16, 16>(lane_7_input_arg, input_arg.extract<112, 127>());
  auto result_7 = input_generated_compute(lane_7_input_arg);
  set_at<112, 256, 16>(whole_result, result_7);
  hw_uint<16> lane_8_input_arg;
  // Need offset: 8, 0
  set_at<0, 16, 16>(lane_8_input_arg, input_arg.extract<128, 143>());
  auto result_8 = input_generated_compute(lane_8_input_arg);
  set_at<128, 256, 16>(whole_result, result_8);
  hw_uint<16> lane_9_input_arg;
  // Need offset: 9, 0
  set_at<0, 16, 16>(lane_9_input_arg, input_arg.extract<144, 159>());
  auto result_9 = input_generated_compute(lane_9_input_arg);
  set_at<144, 256, 16>(whole_result, result_9);
  hw_uint<16> lane_10_input_arg;
  // Need offset: 10, 0
  set_at<0, 16, 16>(lane_10_input_arg, input_arg.extract<160, 175>());
  auto result_10 = input_generated_compute(lane_10_input_arg);
  set_at<160, 256, 16>(whole_result, result_10);
  hw_uint<16> lane_11_input_arg;
  // Need offset: 11, 0
  set_at<0, 16, 16>(lane_11_input_arg, input_arg.extract<176, 191>());
  auto result_11 = input_generated_compute(lane_11_input_arg);
  set_at<176, 256, 16>(whole_result, result_11);
  hw_uint<16> lane_12_input_arg;
  // Need offset: 12, 0
  set_at<0, 16, 16>(lane_12_input_arg, input_arg.extract<192, 207>());
  auto result_12 = input_generated_compute(lane_12_input_arg);
  set_at<192, 256, 16>(whole_result, result_12);
  hw_uint<16> lane_13_input_arg;
  // Need offset: 13, 0
  set_at<0, 16, 16>(lane_13_input_arg, input_arg.extract<208, 223>());
  auto result_13 = input_generated_compute(lane_13_input_arg);
  set_at<208, 256, 16>(whole_result, result_13);
  hw_uint<16> lane_14_input_arg;
  // Need offset: 14, 0
  set_at<0, 16, 16>(lane_14_input_arg, input_arg.extract<224, 239>());
  auto result_14 = input_generated_compute(lane_14_input_arg);
  set_at<224, 256, 16>(whole_result, result_14);
  hw_uint<16> lane_15_input_arg;
  // Need offset: 15, 0
  set_at<0, 16, 16>(lane_15_input_arg, input_arg.extract<240, 255>());
  auto result_15 = input_generated_compute(lane_15_input_arg);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // blurx_update_0 unroll factor: 16
hw_uint<256>  blurx_generated_compute_unrolled_16(hw_uint<768>& input) {
  hw_uint<256> whole_result;
  hw_uint<48> lane_0_input;
  // Need offset: 0, 0
  set_at<0, 48, 16>(lane_0_input, input.extract<0, 15>());
  // Need offset: 0, 1
  set_at<16, 48, 16>(lane_0_input, input.extract<16, 31>());
  // Need offset: 0, 2
  set_at<32, 48, 16>(lane_0_input, input.extract<32, 47>());
  auto result_0 = blurx_generated_compute(lane_0_input);
  set_at<0, 256, 16>(whole_result, result_0);
  hw_uint<48> lane_1_input;
  // Need offset: 1, 0
  set_at<0, 48, 16>(lane_1_input, input.extract<48, 63>());
  // Need offset: 1, 1
  set_at<16, 48, 16>(lane_1_input, input.extract<64, 79>());
  // Need offset: 1, 2
  set_at<32, 48, 16>(lane_1_input, input.extract<80, 95>());
  auto result_1 = blurx_generated_compute(lane_1_input);
  set_at<16, 256, 16>(whole_result, result_1);
  hw_uint<48> lane_2_input;
  // Need offset: 2, 0
  set_at<0, 48, 16>(lane_2_input, input.extract<96, 111>());
  // Need offset: 2, 1
  set_at<16, 48, 16>(lane_2_input, input.extract<112, 127>());
  // Need offset: 2, 2
  set_at<32, 48, 16>(lane_2_input, input.extract<128, 143>());
  auto result_2 = blurx_generated_compute(lane_2_input);
  set_at<32, 256, 16>(whole_result, result_2);
  hw_uint<48> lane_3_input;
  // Need offset: 3, 0
  set_at<0, 48, 16>(lane_3_input, input.extract<144, 159>());
  // Need offset: 3, 1
  set_at<16, 48, 16>(lane_3_input, input.extract<160, 175>());
  // Need offset: 3, 2
  set_at<32, 48, 16>(lane_3_input, input.extract<176, 191>());
  auto result_3 = blurx_generated_compute(lane_3_input);
  set_at<48, 256, 16>(whole_result, result_3);
  hw_uint<48> lane_4_input;
  // Need offset: 4, 0
  set_at<0, 48, 16>(lane_4_input, input.extract<192, 207>());
  // Need offset: 4, 1
  set_at<16, 48, 16>(lane_4_input, input.extract<208, 223>());
  // Need offset: 4, 2
  set_at<32, 48, 16>(lane_4_input, input.extract<224, 239>());
  auto result_4 = blurx_generated_compute(lane_4_input);
  set_at<64, 256, 16>(whole_result, result_4);
  hw_uint<48> lane_5_input;
  // Need offset: 5, 0
  set_at<0, 48, 16>(lane_5_input, input.extract<240, 255>());
  // Need offset: 5, 1
  set_at<16, 48, 16>(lane_5_input, input.extract<256, 271>());
  // Need offset: 5, 2
  set_at<32, 48, 16>(lane_5_input, input.extract<272, 287>());
  auto result_5 = blurx_generated_compute(lane_5_input);
  set_at<80, 256, 16>(whole_result, result_5);
  hw_uint<48> lane_6_input;
  // Need offset: 6, 0
  set_at<0, 48, 16>(lane_6_input, input.extract<288, 303>());
  // Need offset: 6, 1
  set_at<16, 48, 16>(lane_6_input, input.extract<304, 319>());
  // Need offset: 6, 2
  set_at<32, 48, 16>(lane_6_input, input.extract<320, 335>());
  auto result_6 = blurx_generated_compute(lane_6_input);
  set_at<96, 256, 16>(whole_result, result_6);
  hw_uint<48> lane_7_input;
  // Need offset: 7, 0
  set_at<0, 48, 16>(lane_7_input, input.extract<336, 351>());
  // Need offset: 7, 1
  set_at<16, 48, 16>(lane_7_input, input.extract<352, 367>());
  // Need offset: 7, 2
  set_at<32, 48, 16>(lane_7_input, input.extract<368, 383>());
  auto result_7 = blurx_generated_compute(lane_7_input);
  set_at<112, 256, 16>(whole_result, result_7);
  hw_uint<48> lane_8_input;
  // Need offset: 8, 0
  set_at<0, 48, 16>(lane_8_input, input.extract<384, 399>());
  // Need offset: 8, 1
  set_at<16, 48, 16>(lane_8_input, input.extract<400, 415>());
  // Need offset: 8, 2
  set_at<32, 48, 16>(lane_8_input, input.extract<416, 431>());
  auto result_8 = blurx_generated_compute(lane_8_input);
  set_at<128, 256, 16>(whole_result, result_8);
  hw_uint<48> lane_9_input;
  // Need offset: 9, 0
  set_at<0, 48, 16>(lane_9_input, input.extract<432, 447>());
  // Need offset: 9, 1
  set_at<16, 48, 16>(lane_9_input, input.extract<448, 463>());
  // Need offset: 9, 2
  set_at<32, 48, 16>(lane_9_input, input.extract<464, 479>());
  auto result_9 = blurx_generated_compute(lane_9_input);
  set_at<144, 256, 16>(whole_result, result_9);
  hw_uint<48> lane_10_input;
  // Need offset: 10, 0
  set_at<0, 48, 16>(lane_10_input, input.extract<480, 495>());
  // Need offset: 10, 1
  set_at<16, 48, 16>(lane_10_input, input.extract<496, 511>());
  // Need offset: 10, 2
  set_at<32, 48, 16>(lane_10_input, input.extract<512, 527>());
  auto result_10 = blurx_generated_compute(lane_10_input);
  set_at<160, 256, 16>(whole_result, result_10);
  hw_uint<48> lane_11_input;
  // Need offset: 11, 0
  set_at<0, 48, 16>(lane_11_input, input.extract<528, 543>());
  // Need offset: 11, 1
  set_at<16, 48, 16>(lane_11_input, input.extract<544, 559>());
  // Need offset: 11, 2
  set_at<32, 48, 16>(lane_11_input, input.extract<560, 575>());
  auto result_11 = blurx_generated_compute(lane_11_input);
  set_at<176, 256, 16>(whole_result, result_11);
  hw_uint<48> lane_12_input;
  // Need offset: 12, 0
  set_at<0, 48, 16>(lane_12_input, input.extract<576, 591>());
  // Need offset: 12, 1
  set_at<16, 48, 16>(lane_12_input, input.extract<592, 607>());
  // Need offset: 12, 2
  set_at<32, 48, 16>(lane_12_input, input.extract<608, 623>());
  auto result_12 = blurx_generated_compute(lane_12_input);
  set_at<192, 256, 16>(whole_result, result_12);
  hw_uint<48> lane_13_input;
  // Need offset: 13, 0
  set_at<0, 48, 16>(lane_13_input, input.extract<624, 639>());
  // Need offset: 13, 1
  set_at<16, 48, 16>(lane_13_input, input.extract<640, 655>());
  // Need offset: 13, 2
  set_at<32, 48, 16>(lane_13_input, input.extract<656, 671>());
  auto result_13 = blurx_generated_compute(lane_13_input);
  set_at<208, 256, 16>(whole_result, result_13);
  hw_uint<48> lane_14_input;
  // Need offset: 14, 0
  set_at<0, 48, 16>(lane_14_input, input.extract<672, 687>());
  // Need offset: 14, 1
  set_at<16, 48, 16>(lane_14_input, input.extract<688, 703>());
  // Need offset: 14, 2
  set_at<32, 48, 16>(lane_14_input, input.extract<704, 719>());
  auto result_14 = blurx_generated_compute(lane_14_input);
  set_at<224, 256, 16>(whole_result, result_14);
  hw_uint<48> lane_15_input;
  // Need offset: 15, 0
  set_at<0, 48, 16>(lane_15_input, input.extract<720, 735>());
  // Need offset: 15, 1
  set_at<16, 48, 16>(lane_15_input, input.extract<736, 751>());
  // Need offset: 15, 2
  set_at<32, 48, 16>(lane_15_input, input.extract<752, 767>());
  auto result_15 = blurx_generated_compute(lane_15_input);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // blur_xy_16_unrolled_16_update_0 unroll factor: 16
hw_uint<256>  blur_xy_16_unrolled_16_generated_compute_unrolled_16(hw_uint<288>& blurx) {
  hw_uint<256> whole_result;
  hw_uint<48> lane_0_blurx;
  // Need offset: 0, 0
  set_at<0, 48, 16>(lane_0_blurx, blurx.extract<0, 15>());
  // Need offset: 1, 0
  set_at<16, 48, 16>(lane_0_blurx, blurx.extract<16, 31>());
  // Need offset: 2, 0
  set_at<32, 48, 16>(lane_0_blurx, blurx.extract<32, 47>());
  auto result_0 = blur_xy_16_unrolled_16_generated_compute(lane_0_blurx);
  set_at<0, 256, 16>(whole_result, result_0);
  hw_uint<48> lane_1_blurx;
  // Need offset: 1, 0
  set_at<0, 48, 16>(lane_1_blurx, blurx.extract<16, 31>());
  // Need offset: 2, 0
  set_at<16, 48, 16>(lane_1_blurx, blurx.extract<32, 47>());
  // Need offset: 3, 0
  set_at<32, 48, 16>(lane_1_blurx, blurx.extract<48, 63>());
  auto result_1 = blur_xy_16_unrolled_16_generated_compute(lane_1_blurx);
  set_at<16, 256, 16>(whole_result, result_1);
  hw_uint<48> lane_2_blurx;
  // Need offset: 2, 0
  set_at<0, 48, 16>(lane_2_blurx, blurx.extract<32, 47>());
  // Need offset: 3, 0
  set_at<16, 48, 16>(lane_2_blurx, blurx.extract<48, 63>());
  // Need offset: 4, 0
  set_at<32, 48, 16>(lane_2_blurx, blurx.extract<64, 79>());
  auto result_2 = blur_xy_16_unrolled_16_generated_compute(lane_2_blurx);
  set_at<32, 256, 16>(whole_result, result_2);
  hw_uint<48> lane_3_blurx;
  // Need offset: 3, 0
  set_at<0, 48, 16>(lane_3_blurx, blurx.extract<48, 63>());
  // Need offset: 4, 0
  set_at<16, 48, 16>(lane_3_blurx, blurx.extract<64, 79>());
  // Need offset: 5, 0
  set_at<32, 48, 16>(lane_3_blurx, blurx.extract<80, 95>());
  auto result_3 = blur_xy_16_unrolled_16_generated_compute(lane_3_blurx);
  set_at<48, 256, 16>(whole_result, result_3);
  hw_uint<48> lane_4_blurx;
  // Need offset: 4, 0
  set_at<0, 48, 16>(lane_4_blurx, blurx.extract<64, 79>());
  // Need offset: 5, 0
  set_at<16, 48, 16>(lane_4_blurx, blurx.extract<80, 95>());
  // Need offset: 6, 0
  set_at<32, 48, 16>(lane_4_blurx, blurx.extract<96, 111>());
  auto result_4 = blur_xy_16_unrolled_16_generated_compute(lane_4_blurx);
  set_at<64, 256, 16>(whole_result, result_4);
  hw_uint<48> lane_5_blurx;
  // Need offset: 5, 0
  set_at<0, 48, 16>(lane_5_blurx, blurx.extract<80, 95>());
  // Need offset: 6, 0
  set_at<16, 48, 16>(lane_5_blurx, blurx.extract<96, 111>());
  // Need offset: 7, 0
  set_at<32, 48, 16>(lane_5_blurx, blurx.extract<112, 127>());
  auto result_5 = blur_xy_16_unrolled_16_generated_compute(lane_5_blurx);
  set_at<80, 256, 16>(whole_result, result_5);
  hw_uint<48> lane_6_blurx;
  // Need offset: 6, 0
  set_at<0, 48, 16>(lane_6_blurx, blurx.extract<96, 111>());
  // Need offset: 7, 0
  set_at<16, 48, 16>(lane_6_blurx, blurx.extract<112, 127>());
  // Need offset: 8, 0
  set_at<32, 48, 16>(lane_6_blurx, blurx.extract<128, 143>());
  auto result_6 = blur_xy_16_unrolled_16_generated_compute(lane_6_blurx);
  set_at<96, 256, 16>(whole_result, result_6);
  hw_uint<48> lane_7_blurx;
  // Need offset: 7, 0
  set_at<0, 48, 16>(lane_7_blurx, blurx.extract<112, 127>());
  // Need offset: 8, 0
  set_at<16, 48, 16>(lane_7_blurx, blurx.extract<128, 143>());
  // Need offset: 9, 0
  set_at<32, 48, 16>(lane_7_blurx, blurx.extract<144, 159>());
  auto result_7 = blur_xy_16_unrolled_16_generated_compute(lane_7_blurx);
  set_at<112, 256, 16>(whole_result, result_7);
  hw_uint<48> lane_8_blurx;
  // Need offset: 8, 0
  set_at<0, 48, 16>(lane_8_blurx, blurx.extract<128, 143>());
  // Need offset: 9, 0
  set_at<16, 48, 16>(lane_8_blurx, blurx.extract<144, 159>());
  // Need offset: 10, 0
  set_at<32, 48, 16>(lane_8_blurx, blurx.extract<160, 175>());
  auto result_8 = blur_xy_16_unrolled_16_generated_compute(lane_8_blurx);
  set_at<128, 256, 16>(whole_result, result_8);
  hw_uint<48> lane_9_blurx;
  // Need offset: 9, 0
  set_at<0, 48, 16>(lane_9_blurx, blurx.extract<144, 159>());
  // Need offset: 10, 0
  set_at<16, 48, 16>(lane_9_blurx, blurx.extract<160, 175>());
  // Need offset: 11, 0
  set_at<32, 48, 16>(lane_9_blurx, blurx.extract<176, 191>());
  auto result_9 = blur_xy_16_unrolled_16_generated_compute(lane_9_blurx);
  set_at<144, 256, 16>(whole_result, result_9);
  hw_uint<48> lane_10_blurx;
  // Need offset: 10, 0
  set_at<0, 48, 16>(lane_10_blurx, blurx.extract<160, 175>());
  // Need offset: 11, 0
  set_at<16, 48, 16>(lane_10_blurx, blurx.extract<176, 191>());
  // Need offset: 12, 0
  set_at<32, 48, 16>(lane_10_blurx, blurx.extract<192, 207>());
  auto result_10 = blur_xy_16_unrolled_16_generated_compute(lane_10_blurx);
  set_at<160, 256, 16>(whole_result, result_10);
  hw_uint<48> lane_11_blurx;
  // Need offset: 11, 0
  set_at<0, 48, 16>(lane_11_blurx, blurx.extract<176, 191>());
  // Need offset: 12, 0
  set_at<16, 48, 16>(lane_11_blurx, blurx.extract<192, 207>());
  // Need offset: 13, 0
  set_at<32, 48, 16>(lane_11_blurx, blurx.extract<208, 223>());
  auto result_11 = blur_xy_16_unrolled_16_generated_compute(lane_11_blurx);
  set_at<176, 256, 16>(whole_result, result_11);
  hw_uint<48> lane_12_blurx;
  // Need offset: 12, 0
  set_at<0, 48, 16>(lane_12_blurx, blurx.extract<192, 207>());
  // Need offset: 13, 0
  set_at<16, 48, 16>(lane_12_blurx, blurx.extract<208, 223>());
  // Need offset: 14, 0
  set_at<32, 48, 16>(lane_12_blurx, blurx.extract<224, 239>());
  auto result_12 = blur_xy_16_unrolled_16_generated_compute(lane_12_blurx);
  set_at<192, 256, 16>(whole_result, result_12);
  hw_uint<48> lane_13_blurx;
  // Need offset: 13, 0
  set_at<0, 48, 16>(lane_13_blurx, blurx.extract<208, 223>());
  // Need offset: 14, 0
  set_at<16, 48, 16>(lane_13_blurx, blurx.extract<224, 239>());
  // Need offset: 15, 0
  set_at<32, 48, 16>(lane_13_blurx, blurx.extract<240, 255>());
  auto result_13 = blur_xy_16_unrolled_16_generated_compute(lane_13_blurx);
  set_at<208, 256, 16>(whole_result, result_13);
  hw_uint<48> lane_14_blurx;
  // Need offset: 14, 0
  set_at<0, 48, 16>(lane_14_blurx, blurx.extract<224, 239>());
  // Need offset: 15, 0
  set_at<16, 48, 16>(lane_14_blurx, blurx.extract<240, 255>());
  // Need offset: 16, 0
  set_at<32, 48, 16>(lane_14_blurx, blurx.extract<256, 271>());
  auto result_14 = blur_xy_16_unrolled_16_generated_compute(lane_14_blurx);
  set_at<224, 256, 16>(whole_result, result_14);
  hw_uint<48> lane_15_blurx;
  // Need offset: 15, 0
  set_at<0, 48, 16>(lane_15_blurx, blurx.extract<240, 255>());
  // Need offset: 16, 0
  set_at<16, 48, 16>(lane_15_blurx, blurx.extract<256, 271>());
  // Need offset: 17, 0
  set_at<32, 48, 16>(lane_15_blurx, blurx.extract<272, 287>());
  auto result_15 = blur_xy_16_unrolled_16_generated_compute(lane_15_blurx);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

