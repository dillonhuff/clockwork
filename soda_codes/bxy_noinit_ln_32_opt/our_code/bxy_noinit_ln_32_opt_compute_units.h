#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<16> input_generated_compute(hw_uint<16*1> input_arg) {
  return uint16_t(uint16_t(input_arg.get<16, 0>()));
}

hw_uint<16> blurx_generated_compute(hw_uint<16*3> input) {
  return uint16_t(((uint16_t(input.get<16, 0>()) + (uint16_t(input.get<16, 1>()) + uint16_t(input.get<16, 2>()))) / 3));
}

hw_uint<16> bxy_noinit_ln_32_generated_compute(hw_uint<16*3> blurx) {
  return uint16_t(((uint16_t(blurx.get<16, 0>()) + (uint16_t(blurx.get<16, 1>()) + uint16_t(blurx.get<16, 2>()))) / 3));
}



// Compute unit banks...
  // input_update_0 unroll factor: 32
hw_uint<512>  input_generated_compute_unrolled_32(hw_uint<512>& input_arg) {
  hw_uint<512> whole_result;

  hw_uint<16> lane_0_input_arg;
  set_at<0, 16, 16>(lane_0_input_arg, input_arg.extract<0, 15>());
  auto result_0 = input_generated_compute(lane_0_input_arg);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<16> lane_1_input_arg;
  set_at<0, 16, 16>(lane_1_input_arg, input_arg.extract<16, 31>());
  auto result_1 = input_generated_compute(lane_1_input_arg);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<16> lane_2_input_arg;
  set_at<0, 16, 16>(lane_2_input_arg, input_arg.extract<32, 47>());
  auto result_2 = input_generated_compute(lane_2_input_arg);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<16> lane_3_input_arg;
  set_at<0, 16, 16>(lane_3_input_arg, input_arg.extract<48, 63>());
  auto result_3 = input_generated_compute(lane_3_input_arg);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<16> lane_4_input_arg;
  set_at<0, 16, 16>(lane_4_input_arg, input_arg.extract<64, 79>());
  auto result_4 = input_generated_compute(lane_4_input_arg);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<16> lane_5_input_arg;
  set_at<0, 16, 16>(lane_5_input_arg, input_arg.extract<80, 95>());
  auto result_5 = input_generated_compute(lane_5_input_arg);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<16> lane_6_input_arg;
  set_at<0, 16, 16>(lane_6_input_arg, input_arg.extract<96, 111>());
  auto result_6 = input_generated_compute(lane_6_input_arg);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<16> lane_7_input_arg;
  set_at<0, 16, 16>(lane_7_input_arg, input_arg.extract<112, 127>());
  auto result_7 = input_generated_compute(lane_7_input_arg);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<16> lane_8_input_arg;
  set_at<0, 16, 16>(lane_8_input_arg, input_arg.extract<128, 143>());
  auto result_8 = input_generated_compute(lane_8_input_arg);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<16> lane_9_input_arg;
  set_at<0, 16, 16>(lane_9_input_arg, input_arg.extract<144, 159>());
  auto result_9 = input_generated_compute(lane_9_input_arg);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<16> lane_10_input_arg;
  set_at<0, 16, 16>(lane_10_input_arg, input_arg.extract<160, 175>());
  auto result_10 = input_generated_compute(lane_10_input_arg);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<16> lane_11_input_arg;
  set_at<0, 16, 16>(lane_11_input_arg, input_arg.extract<176, 191>());
  auto result_11 = input_generated_compute(lane_11_input_arg);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<16> lane_12_input_arg;
  set_at<0, 16, 16>(lane_12_input_arg, input_arg.extract<192, 207>());
  auto result_12 = input_generated_compute(lane_12_input_arg);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<16> lane_13_input_arg;
  set_at<0, 16, 16>(lane_13_input_arg, input_arg.extract<208, 223>());
  auto result_13 = input_generated_compute(lane_13_input_arg);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<16> lane_14_input_arg;
  set_at<0, 16, 16>(lane_14_input_arg, input_arg.extract<224, 239>());
  auto result_14 = input_generated_compute(lane_14_input_arg);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<16> lane_15_input_arg;
  set_at<0, 16, 16>(lane_15_input_arg, input_arg.extract<240, 255>());
  auto result_15 = input_generated_compute(lane_15_input_arg);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<16> lane_16_input_arg;
  set_at<0, 16, 16>(lane_16_input_arg, input_arg.extract<256, 271>());
  auto result_16 = input_generated_compute(lane_16_input_arg);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<16> lane_17_input_arg;
  set_at<0, 16, 16>(lane_17_input_arg, input_arg.extract<272, 287>());
  auto result_17 = input_generated_compute(lane_17_input_arg);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<16> lane_18_input_arg;
  set_at<0, 16, 16>(lane_18_input_arg, input_arg.extract<288, 303>());
  auto result_18 = input_generated_compute(lane_18_input_arg);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<16> lane_19_input_arg;
  set_at<0, 16, 16>(lane_19_input_arg, input_arg.extract<304, 319>());
  auto result_19 = input_generated_compute(lane_19_input_arg);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<16> lane_20_input_arg;
  set_at<0, 16, 16>(lane_20_input_arg, input_arg.extract<320, 335>());
  auto result_20 = input_generated_compute(lane_20_input_arg);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<16> lane_21_input_arg;
  set_at<0, 16, 16>(lane_21_input_arg, input_arg.extract<336, 351>());
  auto result_21 = input_generated_compute(lane_21_input_arg);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<16> lane_22_input_arg;
  set_at<0, 16, 16>(lane_22_input_arg, input_arg.extract<352, 367>());
  auto result_22 = input_generated_compute(lane_22_input_arg);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<16> lane_23_input_arg;
  set_at<0, 16, 16>(lane_23_input_arg, input_arg.extract<368, 383>());
  auto result_23 = input_generated_compute(lane_23_input_arg);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<16> lane_24_input_arg;
  set_at<0, 16, 16>(lane_24_input_arg, input_arg.extract<384, 399>());
  auto result_24 = input_generated_compute(lane_24_input_arg);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<16> lane_25_input_arg;
  set_at<0, 16, 16>(lane_25_input_arg, input_arg.extract<400, 415>());
  auto result_25 = input_generated_compute(lane_25_input_arg);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<16> lane_26_input_arg;
  set_at<0, 16, 16>(lane_26_input_arg, input_arg.extract<416, 431>());
  auto result_26 = input_generated_compute(lane_26_input_arg);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<16> lane_27_input_arg;
  set_at<0, 16, 16>(lane_27_input_arg, input_arg.extract<432, 447>());
  auto result_27 = input_generated_compute(lane_27_input_arg);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<16> lane_28_input_arg;
  set_at<0, 16, 16>(lane_28_input_arg, input_arg.extract<448, 463>());
  auto result_28 = input_generated_compute(lane_28_input_arg);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<16> lane_29_input_arg;
  set_at<0, 16, 16>(lane_29_input_arg, input_arg.extract<464, 479>());
  auto result_29 = input_generated_compute(lane_29_input_arg);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<16> lane_30_input_arg;
  set_at<0, 16, 16>(lane_30_input_arg, input_arg.extract<480, 495>());
  auto result_30 = input_generated_compute(lane_30_input_arg);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<16> lane_31_input_arg;
  set_at<0, 16, 16>(lane_31_input_arg, input_arg.extract<496, 511>());
  auto result_31 = input_generated_compute(lane_31_input_arg);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // blurx_update_0 unroll factor: 32
hw_uint<512>  blurx_generated_compute_unrolled_32(hw_uint<1536>& input) {
  hw_uint<512> whole_result;

  hw_uint<48> lane_0_input;
  set_at<0, 48, 48>(lane_0_input, input.extract<0, 47>());
  auto result_0 = blurx_generated_compute(lane_0_input);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<48> lane_1_input;
  set_at<0, 48, 48>(lane_1_input, input.extract<48, 95>());
  auto result_1 = blurx_generated_compute(lane_1_input);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<48> lane_2_input;
  set_at<0, 48, 48>(lane_2_input, input.extract<96, 143>());
  auto result_2 = blurx_generated_compute(lane_2_input);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<48> lane_3_input;
  set_at<0, 48, 48>(lane_3_input, input.extract<144, 191>());
  auto result_3 = blurx_generated_compute(lane_3_input);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<48> lane_4_input;
  set_at<0, 48, 48>(lane_4_input, input.extract<192, 239>());
  auto result_4 = blurx_generated_compute(lane_4_input);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<48> lane_5_input;
  set_at<0, 48, 48>(lane_5_input, input.extract<240, 287>());
  auto result_5 = blurx_generated_compute(lane_5_input);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<48> lane_6_input;
  set_at<0, 48, 48>(lane_6_input, input.extract<288, 335>());
  auto result_6 = blurx_generated_compute(lane_6_input);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<48> lane_7_input;
  set_at<0, 48, 48>(lane_7_input, input.extract<336, 383>());
  auto result_7 = blurx_generated_compute(lane_7_input);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<48> lane_8_input;
  set_at<0, 48, 48>(lane_8_input, input.extract<384, 431>());
  auto result_8 = blurx_generated_compute(lane_8_input);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<48> lane_9_input;
  set_at<0, 48, 48>(lane_9_input, input.extract<432, 479>());
  auto result_9 = blurx_generated_compute(lane_9_input);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<48> lane_10_input;
  set_at<0, 48, 48>(lane_10_input, input.extract<480, 527>());
  auto result_10 = blurx_generated_compute(lane_10_input);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<48> lane_11_input;
  set_at<0, 48, 48>(lane_11_input, input.extract<528, 575>());
  auto result_11 = blurx_generated_compute(lane_11_input);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<48> lane_12_input;
  set_at<0, 48, 48>(lane_12_input, input.extract<576, 623>());
  auto result_12 = blurx_generated_compute(lane_12_input);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<48> lane_13_input;
  set_at<0, 48, 48>(lane_13_input, input.extract<624, 671>());
  auto result_13 = blurx_generated_compute(lane_13_input);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<48> lane_14_input;
  set_at<0, 48, 48>(lane_14_input, input.extract<672, 719>());
  auto result_14 = blurx_generated_compute(lane_14_input);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<48> lane_15_input;
  set_at<0, 48, 48>(lane_15_input, input.extract<720, 767>());
  auto result_15 = blurx_generated_compute(lane_15_input);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<48> lane_16_input;
  set_at<0, 48, 48>(lane_16_input, input.extract<768, 815>());
  auto result_16 = blurx_generated_compute(lane_16_input);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<48> lane_17_input;
  set_at<0, 48, 48>(lane_17_input, input.extract<816, 863>());
  auto result_17 = blurx_generated_compute(lane_17_input);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<48> lane_18_input;
  set_at<0, 48, 48>(lane_18_input, input.extract<864, 911>());
  auto result_18 = blurx_generated_compute(lane_18_input);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<48> lane_19_input;
  set_at<0, 48, 48>(lane_19_input, input.extract<912, 959>());
  auto result_19 = blurx_generated_compute(lane_19_input);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<48> lane_20_input;
  set_at<0, 48, 48>(lane_20_input, input.extract<960, 1007>());
  auto result_20 = blurx_generated_compute(lane_20_input);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<48> lane_21_input;
  set_at<0, 48, 48>(lane_21_input, input.extract<1008, 1055>());
  auto result_21 = blurx_generated_compute(lane_21_input);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<48> lane_22_input;
  set_at<0, 48, 48>(lane_22_input, input.extract<1056, 1103>());
  auto result_22 = blurx_generated_compute(lane_22_input);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<48> lane_23_input;
  set_at<0, 48, 48>(lane_23_input, input.extract<1104, 1151>());
  auto result_23 = blurx_generated_compute(lane_23_input);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<48> lane_24_input;
  set_at<0, 48, 48>(lane_24_input, input.extract<1152, 1199>());
  auto result_24 = blurx_generated_compute(lane_24_input);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<48> lane_25_input;
  set_at<0, 48, 48>(lane_25_input, input.extract<1200, 1247>());
  auto result_25 = blurx_generated_compute(lane_25_input);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<48> lane_26_input;
  set_at<0, 48, 48>(lane_26_input, input.extract<1248, 1295>());
  auto result_26 = blurx_generated_compute(lane_26_input);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<48> lane_27_input;
  set_at<0, 48, 48>(lane_27_input, input.extract<1296, 1343>());
  auto result_27 = blurx_generated_compute(lane_27_input);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<48> lane_28_input;
  set_at<0, 48, 48>(lane_28_input, input.extract<1344, 1391>());
  auto result_28 = blurx_generated_compute(lane_28_input);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<48> lane_29_input;
  set_at<0, 48, 48>(lane_29_input, input.extract<1392, 1439>());
  auto result_29 = blurx_generated_compute(lane_29_input);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<48> lane_30_input;
  set_at<0, 48, 48>(lane_30_input, input.extract<1440, 1487>());
  auto result_30 = blurx_generated_compute(lane_30_input);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<48> lane_31_input;
  set_at<0, 48, 48>(lane_31_input, input.extract<1488, 1535>());
  auto result_31 = blurx_generated_compute(lane_31_input);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // bxy_noinit_ln_32_update_0 unroll factor: 32
hw_uint<512>  bxy_noinit_ln_32_generated_compute_unrolled_32(hw_uint<1536>& blurx) {
  hw_uint<512> whole_result;

  hw_uint<48> lane_0_blurx;
  set_at<0, 48, 48>(lane_0_blurx, blurx.extract<0, 47>());
  auto result_0 = bxy_noinit_ln_32_generated_compute(lane_0_blurx);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<48> lane_1_blurx;
  set_at<0, 48, 48>(lane_1_blurx, blurx.extract<48, 95>());
  auto result_1 = bxy_noinit_ln_32_generated_compute(lane_1_blurx);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<48> lane_2_blurx;
  set_at<0, 48, 48>(lane_2_blurx, blurx.extract<96, 143>());
  auto result_2 = bxy_noinit_ln_32_generated_compute(lane_2_blurx);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<48> lane_3_blurx;
  set_at<0, 48, 48>(lane_3_blurx, blurx.extract<144, 191>());
  auto result_3 = bxy_noinit_ln_32_generated_compute(lane_3_blurx);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<48> lane_4_blurx;
  set_at<0, 48, 48>(lane_4_blurx, blurx.extract<192, 239>());
  auto result_4 = bxy_noinit_ln_32_generated_compute(lane_4_blurx);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<48> lane_5_blurx;
  set_at<0, 48, 48>(lane_5_blurx, blurx.extract<240, 287>());
  auto result_5 = bxy_noinit_ln_32_generated_compute(lane_5_blurx);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<48> lane_6_blurx;
  set_at<0, 48, 48>(lane_6_blurx, blurx.extract<288, 335>());
  auto result_6 = bxy_noinit_ln_32_generated_compute(lane_6_blurx);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<48> lane_7_blurx;
  set_at<0, 48, 48>(lane_7_blurx, blurx.extract<336, 383>());
  auto result_7 = bxy_noinit_ln_32_generated_compute(lane_7_blurx);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<48> lane_8_blurx;
  set_at<0, 48, 48>(lane_8_blurx, blurx.extract<384, 431>());
  auto result_8 = bxy_noinit_ln_32_generated_compute(lane_8_blurx);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<48> lane_9_blurx;
  set_at<0, 48, 48>(lane_9_blurx, blurx.extract<432, 479>());
  auto result_9 = bxy_noinit_ln_32_generated_compute(lane_9_blurx);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<48> lane_10_blurx;
  set_at<0, 48, 48>(lane_10_blurx, blurx.extract<480, 527>());
  auto result_10 = bxy_noinit_ln_32_generated_compute(lane_10_blurx);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<48> lane_11_blurx;
  set_at<0, 48, 48>(lane_11_blurx, blurx.extract<528, 575>());
  auto result_11 = bxy_noinit_ln_32_generated_compute(lane_11_blurx);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<48> lane_12_blurx;
  set_at<0, 48, 48>(lane_12_blurx, blurx.extract<576, 623>());
  auto result_12 = bxy_noinit_ln_32_generated_compute(lane_12_blurx);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<48> lane_13_blurx;
  set_at<0, 48, 48>(lane_13_blurx, blurx.extract<624, 671>());
  auto result_13 = bxy_noinit_ln_32_generated_compute(lane_13_blurx);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<48> lane_14_blurx;
  set_at<0, 48, 48>(lane_14_blurx, blurx.extract<672, 719>());
  auto result_14 = bxy_noinit_ln_32_generated_compute(lane_14_blurx);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<48> lane_15_blurx;
  set_at<0, 48, 48>(lane_15_blurx, blurx.extract<720, 767>());
  auto result_15 = bxy_noinit_ln_32_generated_compute(lane_15_blurx);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<48> lane_16_blurx;
  set_at<0, 48, 48>(lane_16_blurx, blurx.extract<768, 815>());
  auto result_16 = bxy_noinit_ln_32_generated_compute(lane_16_blurx);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<48> lane_17_blurx;
  set_at<0, 48, 48>(lane_17_blurx, blurx.extract<816, 863>());
  auto result_17 = bxy_noinit_ln_32_generated_compute(lane_17_blurx);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<48> lane_18_blurx;
  set_at<0, 48, 48>(lane_18_blurx, blurx.extract<864, 911>());
  auto result_18 = bxy_noinit_ln_32_generated_compute(lane_18_blurx);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<48> lane_19_blurx;
  set_at<0, 48, 48>(lane_19_blurx, blurx.extract<912, 959>());
  auto result_19 = bxy_noinit_ln_32_generated_compute(lane_19_blurx);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<48> lane_20_blurx;
  set_at<0, 48, 48>(lane_20_blurx, blurx.extract<960, 1007>());
  auto result_20 = bxy_noinit_ln_32_generated_compute(lane_20_blurx);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<48> lane_21_blurx;
  set_at<0, 48, 48>(lane_21_blurx, blurx.extract<1008, 1055>());
  auto result_21 = bxy_noinit_ln_32_generated_compute(lane_21_blurx);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<48> lane_22_blurx;
  set_at<0, 48, 48>(lane_22_blurx, blurx.extract<1056, 1103>());
  auto result_22 = bxy_noinit_ln_32_generated_compute(lane_22_blurx);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<48> lane_23_blurx;
  set_at<0, 48, 48>(lane_23_blurx, blurx.extract<1104, 1151>());
  auto result_23 = bxy_noinit_ln_32_generated_compute(lane_23_blurx);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<48> lane_24_blurx;
  set_at<0, 48, 48>(lane_24_blurx, blurx.extract<1152, 1199>());
  auto result_24 = bxy_noinit_ln_32_generated_compute(lane_24_blurx);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<48> lane_25_blurx;
  set_at<0, 48, 48>(lane_25_blurx, blurx.extract<1200, 1247>());
  auto result_25 = bxy_noinit_ln_32_generated_compute(lane_25_blurx);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<48> lane_26_blurx;
  set_at<0, 48, 48>(lane_26_blurx, blurx.extract<1248, 1295>());
  auto result_26 = bxy_noinit_ln_32_generated_compute(lane_26_blurx);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<48> lane_27_blurx;
  set_at<0, 48, 48>(lane_27_blurx, blurx.extract<1296, 1343>());
  auto result_27 = bxy_noinit_ln_32_generated_compute(lane_27_blurx);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<48> lane_28_blurx;
  set_at<0, 48, 48>(lane_28_blurx, blurx.extract<1344, 1391>());
  auto result_28 = bxy_noinit_ln_32_generated_compute(lane_28_blurx);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<48> lane_29_blurx;
  set_at<0, 48, 48>(lane_29_blurx, blurx.extract<1392, 1439>());
  auto result_29 = bxy_noinit_ln_32_generated_compute(lane_29_blurx);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<48> lane_30_blurx;
  set_at<0, 48, 48>(lane_30_blurx, blurx.extract<1440, 1487>());
  auto result_30 = bxy_noinit_ln_32_generated_compute(lane_30_blurx);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<48> lane_31_blurx;
  set_at<0, 48, 48>(lane_31_blurx, blurx.extract<1488, 1535>());
  auto result_31 = bxy_noinit_ln_32_generated_compute(lane_31_blurx);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

