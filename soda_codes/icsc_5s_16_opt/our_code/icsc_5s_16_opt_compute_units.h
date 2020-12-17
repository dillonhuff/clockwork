#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<16> in_generated_compute(hw_uint<16*1> in_off_chip) {
  return uint16_t(uint16_t(in_off_chip.get<16, 0>()));
}

hw_uint<16> stg0_generated_compute(hw_uint<16*4> in) {
  return uint16_t((((uint16_t(in.get<16, 2>()) + uint16_t(in.get<16, 3>())) + (uint16_t(in.get<16, 1>()) + (uint16_t(in.get<16, 0>()) + uint16_t(in.get<16, 2>())))) / 5));
}

hw_uint<16> stg1_generated_compute(hw_uint<16*4> stg0) {
  return uint16_t((((uint16_t(stg0.get<16, 2>()) + uint16_t(stg0.get<16, 3>())) + (uint16_t(stg0.get<16, 1>()) + (uint16_t(stg0.get<16, 0>()) + uint16_t(stg0.get<16, 2>())))) / 5));
}

hw_uint<16> stg2_generated_compute(hw_uint<16*4> stg1) {
  return uint16_t((((uint16_t(stg1.get<16, 2>()) + uint16_t(stg1.get<16, 3>())) + (uint16_t(stg1.get<16, 1>()) + (uint16_t(stg1.get<16, 0>()) + uint16_t(stg1.get<16, 2>())))) / 5));
}

hw_uint<16> stg3_generated_compute(hw_uint<16*4> stg2) {
  return uint16_t((((uint16_t(stg2.get<16, 2>()) + uint16_t(stg2.get<16, 3>())) + (uint16_t(stg2.get<16, 1>()) + (uint16_t(stg2.get<16, 0>()) + uint16_t(stg2.get<16, 2>())))) / 5));
}

hw_uint<16> stg4_generated_compute(hw_uint<16*4> stg3) {
  return uint16_t((((uint16_t(stg3.get<16, 2>()) + uint16_t(stg3.get<16, 3>())) + (uint16_t(stg3.get<16, 1>()) + (uint16_t(stg3.get<16, 0>()) + uint16_t(stg3.get<16, 2>())))) / 5));
}

hw_uint<16> icsc_5s_16_generated_compute(hw_uint<16*1> stg4) {
  return uint16_t(uint16_t(stg4.get<16, 0>()));
}



// Compute unit banks...
  // in_update_0 unroll factor: 16
hw_uint<256>  in_generated_compute_unrolled_16(hw_uint<256>& in_off_chip) {
  hw_uint<256> whole_result;

  hw_uint<16> lane_0_in_off_chip;
  set_at<0, 16, 16>(lane_0_in_off_chip, in_off_chip.extract<0, 15>());
  auto result_0 = in_generated_compute(lane_0_in_off_chip);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<16> lane_1_in_off_chip;
  set_at<0, 16, 16>(lane_1_in_off_chip, in_off_chip.extract<16, 31>());
  auto result_1 = in_generated_compute(lane_1_in_off_chip);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<16> lane_2_in_off_chip;
  set_at<0, 16, 16>(lane_2_in_off_chip, in_off_chip.extract<32, 47>());
  auto result_2 = in_generated_compute(lane_2_in_off_chip);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<16> lane_3_in_off_chip;
  set_at<0, 16, 16>(lane_3_in_off_chip, in_off_chip.extract<48, 63>());
  auto result_3 = in_generated_compute(lane_3_in_off_chip);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<16> lane_4_in_off_chip;
  set_at<0, 16, 16>(lane_4_in_off_chip, in_off_chip.extract<64, 79>());
  auto result_4 = in_generated_compute(lane_4_in_off_chip);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<16> lane_5_in_off_chip;
  set_at<0, 16, 16>(lane_5_in_off_chip, in_off_chip.extract<80, 95>());
  auto result_5 = in_generated_compute(lane_5_in_off_chip);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<16> lane_6_in_off_chip;
  set_at<0, 16, 16>(lane_6_in_off_chip, in_off_chip.extract<96, 111>());
  auto result_6 = in_generated_compute(lane_6_in_off_chip);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<16> lane_7_in_off_chip;
  set_at<0, 16, 16>(lane_7_in_off_chip, in_off_chip.extract<112, 127>());
  auto result_7 = in_generated_compute(lane_7_in_off_chip);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<16> lane_8_in_off_chip;
  set_at<0, 16, 16>(lane_8_in_off_chip, in_off_chip.extract<128, 143>());
  auto result_8 = in_generated_compute(lane_8_in_off_chip);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<16> lane_9_in_off_chip;
  set_at<0, 16, 16>(lane_9_in_off_chip, in_off_chip.extract<144, 159>());
  auto result_9 = in_generated_compute(lane_9_in_off_chip);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<16> lane_10_in_off_chip;
  set_at<0, 16, 16>(lane_10_in_off_chip, in_off_chip.extract<160, 175>());
  auto result_10 = in_generated_compute(lane_10_in_off_chip);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<16> lane_11_in_off_chip;
  set_at<0, 16, 16>(lane_11_in_off_chip, in_off_chip.extract<176, 191>());
  auto result_11 = in_generated_compute(lane_11_in_off_chip);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<16> lane_12_in_off_chip;
  set_at<0, 16, 16>(lane_12_in_off_chip, in_off_chip.extract<192, 207>());
  auto result_12 = in_generated_compute(lane_12_in_off_chip);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<16> lane_13_in_off_chip;
  set_at<0, 16, 16>(lane_13_in_off_chip, in_off_chip.extract<208, 223>());
  auto result_13 = in_generated_compute(lane_13_in_off_chip);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<16> lane_14_in_off_chip;
  set_at<0, 16, 16>(lane_14_in_off_chip, in_off_chip.extract<224, 239>());
  auto result_14 = in_generated_compute(lane_14_in_off_chip);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<16> lane_15_in_off_chip;
  set_at<0, 16, 16>(lane_15_in_off_chip, in_off_chip.extract<240, 255>());
  auto result_15 = in_generated_compute(lane_15_in_off_chip);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // stg0_update_0 unroll factor: 16
hw_uint<256>  stg0_generated_compute_unrolled_16(hw_uint<1024>& in) {
  hw_uint<256> whole_result;

  hw_uint<64> lane_0_in;
  set_at<0, 64, 64>(lane_0_in, in.extract<0, 63>());
  auto result_0 = stg0_generated_compute(lane_0_in);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<64> lane_1_in;
  set_at<0, 64, 64>(lane_1_in, in.extract<64, 127>());
  auto result_1 = stg0_generated_compute(lane_1_in);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<64> lane_2_in;
  set_at<0, 64, 64>(lane_2_in, in.extract<128, 191>());
  auto result_2 = stg0_generated_compute(lane_2_in);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<64> lane_3_in;
  set_at<0, 64, 64>(lane_3_in, in.extract<192, 255>());
  auto result_3 = stg0_generated_compute(lane_3_in);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<64> lane_4_in;
  set_at<0, 64, 64>(lane_4_in, in.extract<256, 319>());
  auto result_4 = stg0_generated_compute(lane_4_in);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<64> lane_5_in;
  set_at<0, 64, 64>(lane_5_in, in.extract<320, 383>());
  auto result_5 = stg0_generated_compute(lane_5_in);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<64> lane_6_in;
  set_at<0, 64, 64>(lane_6_in, in.extract<384, 447>());
  auto result_6 = stg0_generated_compute(lane_6_in);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<64> lane_7_in;
  set_at<0, 64, 64>(lane_7_in, in.extract<448, 511>());
  auto result_7 = stg0_generated_compute(lane_7_in);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<64> lane_8_in;
  set_at<0, 64, 64>(lane_8_in, in.extract<512, 575>());
  auto result_8 = stg0_generated_compute(lane_8_in);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<64> lane_9_in;
  set_at<0, 64, 64>(lane_9_in, in.extract<576, 639>());
  auto result_9 = stg0_generated_compute(lane_9_in);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<64> lane_10_in;
  set_at<0, 64, 64>(lane_10_in, in.extract<640, 703>());
  auto result_10 = stg0_generated_compute(lane_10_in);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<64> lane_11_in;
  set_at<0, 64, 64>(lane_11_in, in.extract<704, 767>());
  auto result_11 = stg0_generated_compute(lane_11_in);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<64> lane_12_in;
  set_at<0, 64, 64>(lane_12_in, in.extract<768, 831>());
  auto result_12 = stg0_generated_compute(lane_12_in);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<64> lane_13_in;
  set_at<0, 64, 64>(lane_13_in, in.extract<832, 895>());
  auto result_13 = stg0_generated_compute(lane_13_in);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<64> lane_14_in;
  set_at<0, 64, 64>(lane_14_in, in.extract<896, 959>());
  auto result_14 = stg0_generated_compute(lane_14_in);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<64> lane_15_in;
  set_at<0, 64, 64>(lane_15_in, in.extract<960, 1023>());
  auto result_15 = stg0_generated_compute(lane_15_in);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // stg1_update_0 unroll factor: 16
hw_uint<256>  stg1_generated_compute_unrolled_16(hw_uint<1024>& stg0) {
  hw_uint<256> whole_result;

  hw_uint<64> lane_0_stg0;
  set_at<0, 64, 64>(lane_0_stg0, stg0.extract<0, 63>());
  auto result_0 = stg1_generated_compute(lane_0_stg0);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<64> lane_1_stg0;
  set_at<0, 64, 64>(lane_1_stg0, stg0.extract<64, 127>());
  auto result_1 = stg1_generated_compute(lane_1_stg0);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<64> lane_2_stg0;
  set_at<0, 64, 64>(lane_2_stg0, stg0.extract<128, 191>());
  auto result_2 = stg1_generated_compute(lane_2_stg0);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<64> lane_3_stg0;
  set_at<0, 64, 64>(lane_3_stg0, stg0.extract<192, 255>());
  auto result_3 = stg1_generated_compute(lane_3_stg0);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<64> lane_4_stg0;
  set_at<0, 64, 64>(lane_4_stg0, stg0.extract<256, 319>());
  auto result_4 = stg1_generated_compute(lane_4_stg0);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<64> lane_5_stg0;
  set_at<0, 64, 64>(lane_5_stg0, stg0.extract<320, 383>());
  auto result_5 = stg1_generated_compute(lane_5_stg0);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<64> lane_6_stg0;
  set_at<0, 64, 64>(lane_6_stg0, stg0.extract<384, 447>());
  auto result_6 = stg1_generated_compute(lane_6_stg0);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<64> lane_7_stg0;
  set_at<0, 64, 64>(lane_7_stg0, stg0.extract<448, 511>());
  auto result_7 = stg1_generated_compute(lane_7_stg0);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<64> lane_8_stg0;
  set_at<0, 64, 64>(lane_8_stg0, stg0.extract<512, 575>());
  auto result_8 = stg1_generated_compute(lane_8_stg0);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<64> lane_9_stg0;
  set_at<0, 64, 64>(lane_9_stg0, stg0.extract<576, 639>());
  auto result_9 = stg1_generated_compute(lane_9_stg0);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<64> lane_10_stg0;
  set_at<0, 64, 64>(lane_10_stg0, stg0.extract<640, 703>());
  auto result_10 = stg1_generated_compute(lane_10_stg0);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<64> lane_11_stg0;
  set_at<0, 64, 64>(lane_11_stg0, stg0.extract<704, 767>());
  auto result_11 = stg1_generated_compute(lane_11_stg0);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<64> lane_12_stg0;
  set_at<0, 64, 64>(lane_12_stg0, stg0.extract<768, 831>());
  auto result_12 = stg1_generated_compute(lane_12_stg0);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<64> lane_13_stg0;
  set_at<0, 64, 64>(lane_13_stg0, stg0.extract<832, 895>());
  auto result_13 = stg1_generated_compute(lane_13_stg0);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<64> lane_14_stg0;
  set_at<0, 64, 64>(lane_14_stg0, stg0.extract<896, 959>());
  auto result_14 = stg1_generated_compute(lane_14_stg0);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<64> lane_15_stg0;
  set_at<0, 64, 64>(lane_15_stg0, stg0.extract<960, 1023>());
  auto result_15 = stg1_generated_compute(lane_15_stg0);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // stg2_update_0 unroll factor: 16
hw_uint<256>  stg2_generated_compute_unrolled_16(hw_uint<1024>& stg1) {
  hw_uint<256> whole_result;

  hw_uint<64> lane_0_stg1;
  set_at<0, 64, 64>(lane_0_stg1, stg1.extract<0, 63>());
  auto result_0 = stg2_generated_compute(lane_0_stg1);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<64> lane_1_stg1;
  set_at<0, 64, 64>(lane_1_stg1, stg1.extract<64, 127>());
  auto result_1 = stg2_generated_compute(lane_1_stg1);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<64> lane_2_stg1;
  set_at<0, 64, 64>(lane_2_stg1, stg1.extract<128, 191>());
  auto result_2 = stg2_generated_compute(lane_2_stg1);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<64> lane_3_stg1;
  set_at<0, 64, 64>(lane_3_stg1, stg1.extract<192, 255>());
  auto result_3 = stg2_generated_compute(lane_3_stg1);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<64> lane_4_stg1;
  set_at<0, 64, 64>(lane_4_stg1, stg1.extract<256, 319>());
  auto result_4 = stg2_generated_compute(lane_4_stg1);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<64> lane_5_stg1;
  set_at<0, 64, 64>(lane_5_stg1, stg1.extract<320, 383>());
  auto result_5 = stg2_generated_compute(lane_5_stg1);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<64> lane_6_stg1;
  set_at<0, 64, 64>(lane_6_stg1, stg1.extract<384, 447>());
  auto result_6 = stg2_generated_compute(lane_6_stg1);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<64> lane_7_stg1;
  set_at<0, 64, 64>(lane_7_stg1, stg1.extract<448, 511>());
  auto result_7 = stg2_generated_compute(lane_7_stg1);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<64> lane_8_stg1;
  set_at<0, 64, 64>(lane_8_stg1, stg1.extract<512, 575>());
  auto result_8 = stg2_generated_compute(lane_8_stg1);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<64> lane_9_stg1;
  set_at<0, 64, 64>(lane_9_stg1, stg1.extract<576, 639>());
  auto result_9 = stg2_generated_compute(lane_9_stg1);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<64> lane_10_stg1;
  set_at<0, 64, 64>(lane_10_stg1, stg1.extract<640, 703>());
  auto result_10 = stg2_generated_compute(lane_10_stg1);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<64> lane_11_stg1;
  set_at<0, 64, 64>(lane_11_stg1, stg1.extract<704, 767>());
  auto result_11 = stg2_generated_compute(lane_11_stg1);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<64> lane_12_stg1;
  set_at<0, 64, 64>(lane_12_stg1, stg1.extract<768, 831>());
  auto result_12 = stg2_generated_compute(lane_12_stg1);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<64> lane_13_stg1;
  set_at<0, 64, 64>(lane_13_stg1, stg1.extract<832, 895>());
  auto result_13 = stg2_generated_compute(lane_13_stg1);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<64> lane_14_stg1;
  set_at<0, 64, 64>(lane_14_stg1, stg1.extract<896, 959>());
  auto result_14 = stg2_generated_compute(lane_14_stg1);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<64> lane_15_stg1;
  set_at<0, 64, 64>(lane_15_stg1, stg1.extract<960, 1023>());
  auto result_15 = stg2_generated_compute(lane_15_stg1);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // stg3_update_0 unroll factor: 16
hw_uint<256>  stg3_generated_compute_unrolled_16(hw_uint<1024>& stg2) {
  hw_uint<256> whole_result;

  hw_uint<64> lane_0_stg2;
  set_at<0, 64, 64>(lane_0_stg2, stg2.extract<0, 63>());
  auto result_0 = stg3_generated_compute(lane_0_stg2);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<64> lane_1_stg2;
  set_at<0, 64, 64>(lane_1_stg2, stg2.extract<64, 127>());
  auto result_1 = stg3_generated_compute(lane_1_stg2);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<64> lane_2_stg2;
  set_at<0, 64, 64>(lane_2_stg2, stg2.extract<128, 191>());
  auto result_2 = stg3_generated_compute(lane_2_stg2);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<64> lane_3_stg2;
  set_at<0, 64, 64>(lane_3_stg2, stg2.extract<192, 255>());
  auto result_3 = stg3_generated_compute(lane_3_stg2);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<64> lane_4_stg2;
  set_at<0, 64, 64>(lane_4_stg2, stg2.extract<256, 319>());
  auto result_4 = stg3_generated_compute(lane_4_stg2);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<64> lane_5_stg2;
  set_at<0, 64, 64>(lane_5_stg2, stg2.extract<320, 383>());
  auto result_5 = stg3_generated_compute(lane_5_stg2);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<64> lane_6_stg2;
  set_at<0, 64, 64>(lane_6_stg2, stg2.extract<384, 447>());
  auto result_6 = stg3_generated_compute(lane_6_stg2);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<64> lane_7_stg2;
  set_at<0, 64, 64>(lane_7_stg2, stg2.extract<448, 511>());
  auto result_7 = stg3_generated_compute(lane_7_stg2);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<64> lane_8_stg2;
  set_at<0, 64, 64>(lane_8_stg2, stg2.extract<512, 575>());
  auto result_8 = stg3_generated_compute(lane_8_stg2);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<64> lane_9_stg2;
  set_at<0, 64, 64>(lane_9_stg2, stg2.extract<576, 639>());
  auto result_9 = stg3_generated_compute(lane_9_stg2);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<64> lane_10_stg2;
  set_at<0, 64, 64>(lane_10_stg2, stg2.extract<640, 703>());
  auto result_10 = stg3_generated_compute(lane_10_stg2);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<64> lane_11_stg2;
  set_at<0, 64, 64>(lane_11_stg2, stg2.extract<704, 767>());
  auto result_11 = stg3_generated_compute(lane_11_stg2);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<64> lane_12_stg2;
  set_at<0, 64, 64>(lane_12_stg2, stg2.extract<768, 831>());
  auto result_12 = stg3_generated_compute(lane_12_stg2);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<64> lane_13_stg2;
  set_at<0, 64, 64>(lane_13_stg2, stg2.extract<832, 895>());
  auto result_13 = stg3_generated_compute(lane_13_stg2);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<64> lane_14_stg2;
  set_at<0, 64, 64>(lane_14_stg2, stg2.extract<896, 959>());
  auto result_14 = stg3_generated_compute(lane_14_stg2);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<64> lane_15_stg2;
  set_at<0, 64, 64>(lane_15_stg2, stg2.extract<960, 1023>());
  auto result_15 = stg3_generated_compute(lane_15_stg2);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // stg4_update_0 unroll factor: 16
hw_uint<256>  stg4_generated_compute_unrolled_16(hw_uint<1024>& stg3) {
  hw_uint<256> whole_result;

  hw_uint<64> lane_0_stg3;
  set_at<0, 64, 64>(lane_0_stg3, stg3.extract<0, 63>());
  auto result_0 = stg4_generated_compute(lane_0_stg3);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<64> lane_1_stg3;
  set_at<0, 64, 64>(lane_1_stg3, stg3.extract<64, 127>());
  auto result_1 = stg4_generated_compute(lane_1_stg3);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<64> lane_2_stg3;
  set_at<0, 64, 64>(lane_2_stg3, stg3.extract<128, 191>());
  auto result_2 = stg4_generated_compute(lane_2_stg3);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<64> lane_3_stg3;
  set_at<0, 64, 64>(lane_3_stg3, stg3.extract<192, 255>());
  auto result_3 = stg4_generated_compute(lane_3_stg3);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<64> lane_4_stg3;
  set_at<0, 64, 64>(lane_4_stg3, stg3.extract<256, 319>());
  auto result_4 = stg4_generated_compute(lane_4_stg3);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<64> lane_5_stg3;
  set_at<0, 64, 64>(lane_5_stg3, stg3.extract<320, 383>());
  auto result_5 = stg4_generated_compute(lane_5_stg3);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<64> lane_6_stg3;
  set_at<0, 64, 64>(lane_6_stg3, stg3.extract<384, 447>());
  auto result_6 = stg4_generated_compute(lane_6_stg3);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<64> lane_7_stg3;
  set_at<0, 64, 64>(lane_7_stg3, stg3.extract<448, 511>());
  auto result_7 = stg4_generated_compute(lane_7_stg3);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<64> lane_8_stg3;
  set_at<0, 64, 64>(lane_8_stg3, stg3.extract<512, 575>());
  auto result_8 = stg4_generated_compute(lane_8_stg3);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<64> lane_9_stg3;
  set_at<0, 64, 64>(lane_9_stg3, stg3.extract<576, 639>());
  auto result_9 = stg4_generated_compute(lane_9_stg3);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<64> lane_10_stg3;
  set_at<0, 64, 64>(lane_10_stg3, stg3.extract<640, 703>());
  auto result_10 = stg4_generated_compute(lane_10_stg3);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<64> lane_11_stg3;
  set_at<0, 64, 64>(lane_11_stg3, stg3.extract<704, 767>());
  auto result_11 = stg4_generated_compute(lane_11_stg3);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<64> lane_12_stg3;
  set_at<0, 64, 64>(lane_12_stg3, stg3.extract<768, 831>());
  auto result_12 = stg4_generated_compute(lane_12_stg3);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<64> lane_13_stg3;
  set_at<0, 64, 64>(lane_13_stg3, stg3.extract<832, 895>());
  auto result_13 = stg4_generated_compute(lane_13_stg3);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<64> lane_14_stg3;
  set_at<0, 64, 64>(lane_14_stg3, stg3.extract<896, 959>());
  auto result_14 = stg4_generated_compute(lane_14_stg3);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<64> lane_15_stg3;
  set_at<0, 64, 64>(lane_15_stg3, stg3.extract<960, 1023>());
  auto result_15 = stg4_generated_compute(lane_15_stg3);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // icsc_5s_16_update_0 unroll factor: 16
hw_uint<256>  icsc_5s_16_generated_compute_unrolled_16(hw_uint<256>& stg4) {
  hw_uint<256> whole_result;

  hw_uint<16> lane_0_stg4;
  set_at<0, 16, 16>(lane_0_stg4, stg4.extract<0, 15>());
  auto result_0 = icsc_5s_16_generated_compute(lane_0_stg4);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<16> lane_1_stg4;
  set_at<0, 16, 16>(lane_1_stg4, stg4.extract<16, 31>());
  auto result_1 = icsc_5s_16_generated_compute(lane_1_stg4);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<16> lane_2_stg4;
  set_at<0, 16, 16>(lane_2_stg4, stg4.extract<32, 47>());
  auto result_2 = icsc_5s_16_generated_compute(lane_2_stg4);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<16> lane_3_stg4;
  set_at<0, 16, 16>(lane_3_stg4, stg4.extract<48, 63>());
  auto result_3 = icsc_5s_16_generated_compute(lane_3_stg4);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<16> lane_4_stg4;
  set_at<0, 16, 16>(lane_4_stg4, stg4.extract<64, 79>());
  auto result_4 = icsc_5s_16_generated_compute(lane_4_stg4);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<16> lane_5_stg4;
  set_at<0, 16, 16>(lane_5_stg4, stg4.extract<80, 95>());
  auto result_5 = icsc_5s_16_generated_compute(lane_5_stg4);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<16> lane_6_stg4;
  set_at<0, 16, 16>(lane_6_stg4, stg4.extract<96, 111>());
  auto result_6 = icsc_5s_16_generated_compute(lane_6_stg4);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<16> lane_7_stg4;
  set_at<0, 16, 16>(lane_7_stg4, stg4.extract<112, 127>());
  auto result_7 = icsc_5s_16_generated_compute(lane_7_stg4);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<16> lane_8_stg4;
  set_at<0, 16, 16>(lane_8_stg4, stg4.extract<128, 143>());
  auto result_8 = icsc_5s_16_generated_compute(lane_8_stg4);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<16> lane_9_stg4;
  set_at<0, 16, 16>(lane_9_stg4, stg4.extract<144, 159>());
  auto result_9 = icsc_5s_16_generated_compute(lane_9_stg4);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<16> lane_10_stg4;
  set_at<0, 16, 16>(lane_10_stg4, stg4.extract<160, 175>());
  auto result_10 = icsc_5s_16_generated_compute(lane_10_stg4);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<16> lane_11_stg4;
  set_at<0, 16, 16>(lane_11_stg4, stg4.extract<176, 191>());
  auto result_11 = icsc_5s_16_generated_compute(lane_11_stg4);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<16> lane_12_stg4;
  set_at<0, 16, 16>(lane_12_stg4, stg4.extract<192, 207>());
  auto result_12 = icsc_5s_16_generated_compute(lane_12_stg4);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<16> lane_13_stg4;
  set_at<0, 16, 16>(lane_13_stg4, stg4.extract<208, 223>());
  auto result_13 = icsc_5s_16_generated_compute(lane_13_stg4);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<16> lane_14_stg4;
  set_at<0, 16, 16>(lane_14_stg4, stg4.extract<224, 239>());
  auto result_14 = icsc_5s_16_generated_compute(lane_14_stg4);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<16> lane_15_stg4;
  set_at<0, 16, 16>(lane_15_stg4, stg4.extract<240, 255>());
  auto result_15 = icsc_5s_16_generated_compute(lane_15_stg4);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

