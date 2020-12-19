#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<16> in_generated_compute(hw_uint<16*1> in_off_chip) {
  return uint16_t(uint16_t(in_off_chip.get<16, 0>()));
}

hw_uint<16> f20_generated_compute(hw_uint<16*5> in) {
  return uint16_t((((uint16_t(in.get<16, 3>()) + uint16_t(in.get<16, 4>())) + (uint16_t(in.get<16, 2>()) + (uint16_t(in.get<16, 0>()) + uint16_t(in.get<16, 1>())))) / 5));
}

hw_uint<16> f10_generated_compute(hw_uint<16*5> in) {
  return uint16_t((((uint16_t(in.get<16, 3>()) + uint16_t(in.get<16, 4>())) + (uint16_t(in.get<16, 2>()) + (uint16_t(in.get<16, 0>()) + uint16_t(in.get<16, 1>())))) / 5));
}

hw_uint<16> f00_generated_compute(hw_uint<16*5> in) {
  return uint16_t((((uint16_t(in.get<16, 3>()) + uint16_t(in.get<16, 4>())) + (uint16_t(in.get<16, 2>()) + (uint16_t(in.get<16, 0>()) + uint16_t(in.get<16, 1>())))) / 5));
}

hw_uint<16> f21_generated_compute(hw_uint<16*5> f20) {
  return uint16_t((((uint16_t(f20.get<16, 3>()) + uint16_t(f20.get<16, 4>())) + (uint16_t(f20.get<16, 2>()) + (uint16_t(f20.get<16, 0>()) + uint16_t(f20.get<16, 1>())))) / 5));
}

hw_uint<16> f11_generated_compute(hw_uint<16*5> f10) {
  return uint16_t((((uint16_t(f10.get<16, 3>()) + uint16_t(f10.get<16, 4>())) + (uint16_t(f10.get<16, 2>()) + (uint16_t(f10.get<16, 0>()) + uint16_t(f10.get<16, 1>())))) / 5));
}

hw_uint<16> f01_generated_compute(hw_uint<16*5> f00) {
  return uint16_t((((uint16_t(f00.get<16, 3>()) + uint16_t(f00.get<16, 4>())) + (uint16_t(f00.get<16, 2>()) + (uint16_t(f00.get<16, 0>()) + uint16_t(f00.get<16, 1>())))) / 5));
}

hw_uint<16> f22_generated_compute(hw_uint<16*5> f21) {
  return uint16_t((((uint16_t(f21.get<16, 3>()) + uint16_t(f21.get<16, 4>())) + (uint16_t(f21.get<16, 2>()) + (uint16_t(f21.get<16, 0>()) + uint16_t(f21.get<16, 1>())))) / 5));
}

hw_uint<16> f12_generated_compute(hw_uint<16*5> f11) {
  return uint16_t((((uint16_t(f11.get<16, 3>()) + uint16_t(f11.get<16, 4>())) + (uint16_t(f11.get<16, 2>()) + (uint16_t(f11.get<16, 0>()) + uint16_t(f11.get<16, 1>())))) / 5));
}

hw_uint<16> f02_generated_compute(hw_uint<16*5> f01) {
  return uint16_t((((uint16_t(f01.get<16, 3>()) + uint16_t(f01.get<16, 4>())) + (uint16_t(f01.get<16, 2>()) + (uint16_t(f01.get<16, 0>()) + uint16_t(f01.get<16, 1>())))) / 5));
}

hw_uint<16> f23_generated_compute(hw_uint<16*5> f22) {
  return uint16_t((((uint16_t(f22.get<16, 3>()) + uint16_t(f22.get<16, 4>())) + (uint16_t(f22.get<16, 2>()) + (uint16_t(f22.get<16, 0>()) + uint16_t(f22.get<16, 1>())))) / 5));
}

hw_uint<16> f13_generated_compute(hw_uint<16*5> f12) {
  return uint16_t((((uint16_t(f12.get<16, 3>()) + uint16_t(f12.get<16, 4>())) + (uint16_t(f12.get<16, 2>()) + (uint16_t(f12.get<16, 0>()) + uint16_t(f12.get<16, 1>())))) / 5));
}

hw_uint<16> f03_generated_compute(hw_uint<16*5> f02) {
  return uint16_t((((uint16_t(f02.get<16, 3>()) + uint16_t(f02.get<16, 4>())) + (uint16_t(f02.get<16, 2>()) + (uint16_t(f02.get<16, 0>()) + uint16_t(f02.get<16, 1>())))) / 5));
}

hw_uint<16> f24_generated_compute(hw_uint<16*5> f23) {
  return uint16_t((((uint16_t(f23.get<16, 3>()) + uint16_t(f23.get<16, 4>())) + (uint16_t(f23.get<16, 2>()) + (uint16_t(f23.get<16, 0>()) + uint16_t(f23.get<16, 1>())))) / 5));
}

hw_uint<16> f14_generated_compute(hw_uint<16*5> f13) {
  return uint16_t((((uint16_t(f13.get<16, 3>()) + uint16_t(f13.get<16, 4>())) + (uint16_t(f13.get<16, 2>()) + (uint16_t(f13.get<16, 0>()) + uint16_t(f13.get<16, 1>())))) / 5));
}

hw_uint<16> f04_generated_compute(hw_uint<16*5> f03) {
  return uint16_t((((uint16_t(f03.get<16, 3>()) + uint16_t(f03.get<16, 4>())) + (uint16_t(f03.get<16, 2>()) + (uint16_t(f03.get<16, 0>()) + uint16_t(f03.get<16, 1>())))) / 5));
}

hw_uint<16> final_generated_compute(hw_uint<16*1> f04, hw_uint<16*1> f14, hw_uint<16*1> f24) {
  return uint16_t(((uint16_t(f04.get<16, 0>()) + (uint16_t(f14.get<16, 0>()) + uint16_t(f24.get<16, 0>()))) / 3));
}

hw_uint<16> icfo_16_generated_compute(hw_uint<16*1> final) {
  return uint16_t(uint16_t(final.get<16, 0>()));
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

  // f20_update_0 unroll factor: 16
hw_uint<256>  f20_generated_compute_unrolled_16(hw_uint<1280>& in) {
  hw_uint<256> whole_result;

  hw_uint<80> lane_0_in;
  set_at<0, 80, 80>(lane_0_in, in.extract<0, 79>());
  auto result_0 = f20_generated_compute(lane_0_in);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<80> lane_1_in;
  set_at<0, 80, 80>(lane_1_in, in.extract<80, 159>());
  auto result_1 = f20_generated_compute(lane_1_in);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<80> lane_2_in;
  set_at<0, 80, 80>(lane_2_in, in.extract<160, 239>());
  auto result_2 = f20_generated_compute(lane_2_in);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<80> lane_3_in;
  set_at<0, 80, 80>(lane_3_in, in.extract<240, 319>());
  auto result_3 = f20_generated_compute(lane_3_in);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<80> lane_4_in;
  set_at<0, 80, 80>(lane_4_in, in.extract<320, 399>());
  auto result_4 = f20_generated_compute(lane_4_in);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<80> lane_5_in;
  set_at<0, 80, 80>(lane_5_in, in.extract<400, 479>());
  auto result_5 = f20_generated_compute(lane_5_in);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<80> lane_6_in;
  set_at<0, 80, 80>(lane_6_in, in.extract<480, 559>());
  auto result_6 = f20_generated_compute(lane_6_in);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<80> lane_7_in;
  set_at<0, 80, 80>(lane_7_in, in.extract<560, 639>());
  auto result_7 = f20_generated_compute(lane_7_in);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<80> lane_8_in;
  set_at<0, 80, 80>(lane_8_in, in.extract<640, 719>());
  auto result_8 = f20_generated_compute(lane_8_in);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<80> lane_9_in;
  set_at<0, 80, 80>(lane_9_in, in.extract<720, 799>());
  auto result_9 = f20_generated_compute(lane_9_in);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<80> lane_10_in;
  set_at<0, 80, 80>(lane_10_in, in.extract<800, 879>());
  auto result_10 = f20_generated_compute(lane_10_in);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<80> lane_11_in;
  set_at<0, 80, 80>(lane_11_in, in.extract<880, 959>());
  auto result_11 = f20_generated_compute(lane_11_in);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<80> lane_12_in;
  set_at<0, 80, 80>(lane_12_in, in.extract<960, 1039>());
  auto result_12 = f20_generated_compute(lane_12_in);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<80> lane_13_in;
  set_at<0, 80, 80>(lane_13_in, in.extract<1040, 1119>());
  auto result_13 = f20_generated_compute(lane_13_in);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<80> lane_14_in;
  set_at<0, 80, 80>(lane_14_in, in.extract<1120, 1199>());
  auto result_14 = f20_generated_compute(lane_14_in);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<80> lane_15_in;
  set_at<0, 80, 80>(lane_15_in, in.extract<1200, 1279>());
  auto result_15 = f20_generated_compute(lane_15_in);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // f10_update_0 unroll factor: 16
hw_uint<256>  f10_generated_compute_unrolled_16(hw_uint<1280>& in) {
  hw_uint<256> whole_result;

  hw_uint<80> lane_0_in;
  set_at<0, 80, 80>(lane_0_in, in.extract<0, 79>());
  auto result_0 = f10_generated_compute(lane_0_in);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<80> lane_1_in;
  set_at<0, 80, 80>(lane_1_in, in.extract<80, 159>());
  auto result_1 = f10_generated_compute(lane_1_in);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<80> lane_2_in;
  set_at<0, 80, 80>(lane_2_in, in.extract<160, 239>());
  auto result_2 = f10_generated_compute(lane_2_in);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<80> lane_3_in;
  set_at<0, 80, 80>(lane_3_in, in.extract<240, 319>());
  auto result_3 = f10_generated_compute(lane_3_in);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<80> lane_4_in;
  set_at<0, 80, 80>(lane_4_in, in.extract<320, 399>());
  auto result_4 = f10_generated_compute(lane_4_in);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<80> lane_5_in;
  set_at<0, 80, 80>(lane_5_in, in.extract<400, 479>());
  auto result_5 = f10_generated_compute(lane_5_in);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<80> lane_6_in;
  set_at<0, 80, 80>(lane_6_in, in.extract<480, 559>());
  auto result_6 = f10_generated_compute(lane_6_in);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<80> lane_7_in;
  set_at<0, 80, 80>(lane_7_in, in.extract<560, 639>());
  auto result_7 = f10_generated_compute(lane_7_in);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<80> lane_8_in;
  set_at<0, 80, 80>(lane_8_in, in.extract<640, 719>());
  auto result_8 = f10_generated_compute(lane_8_in);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<80> lane_9_in;
  set_at<0, 80, 80>(lane_9_in, in.extract<720, 799>());
  auto result_9 = f10_generated_compute(lane_9_in);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<80> lane_10_in;
  set_at<0, 80, 80>(lane_10_in, in.extract<800, 879>());
  auto result_10 = f10_generated_compute(lane_10_in);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<80> lane_11_in;
  set_at<0, 80, 80>(lane_11_in, in.extract<880, 959>());
  auto result_11 = f10_generated_compute(lane_11_in);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<80> lane_12_in;
  set_at<0, 80, 80>(lane_12_in, in.extract<960, 1039>());
  auto result_12 = f10_generated_compute(lane_12_in);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<80> lane_13_in;
  set_at<0, 80, 80>(lane_13_in, in.extract<1040, 1119>());
  auto result_13 = f10_generated_compute(lane_13_in);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<80> lane_14_in;
  set_at<0, 80, 80>(lane_14_in, in.extract<1120, 1199>());
  auto result_14 = f10_generated_compute(lane_14_in);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<80> lane_15_in;
  set_at<0, 80, 80>(lane_15_in, in.extract<1200, 1279>());
  auto result_15 = f10_generated_compute(lane_15_in);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // f00_update_0 unroll factor: 16
hw_uint<256>  f00_generated_compute_unrolled_16(hw_uint<1280>& in) {
  hw_uint<256> whole_result;

  hw_uint<80> lane_0_in;
  set_at<0, 80, 80>(lane_0_in, in.extract<0, 79>());
  auto result_0 = f00_generated_compute(lane_0_in);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<80> lane_1_in;
  set_at<0, 80, 80>(lane_1_in, in.extract<80, 159>());
  auto result_1 = f00_generated_compute(lane_1_in);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<80> lane_2_in;
  set_at<0, 80, 80>(lane_2_in, in.extract<160, 239>());
  auto result_2 = f00_generated_compute(lane_2_in);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<80> lane_3_in;
  set_at<0, 80, 80>(lane_3_in, in.extract<240, 319>());
  auto result_3 = f00_generated_compute(lane_3_in);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<80> lane_4_in;
  set_at<0, 80, 80>(lane_4_in, in.extract<320, 399>());
  auto result_4 = f00_generated_compute(lane_4_in);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<80> lane_5_in;
  set_at<0, 80, 80>(lane_5_in, in.extract<400, 479>());
  auto result_5 = f00_generated_compute(lane_5_in);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<80> lane_6_in;
  set_at<0, 80, 80>(lane_6_in, in.extract<480, 559>());
  auto result_6 = f00_generated_compute(lane_6_in);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<80> lane_7_in;
  set_at<0, 80, 80>(lane_7_in, in.extract<560, 639>());
  auto result_7 = f00_generated_compute(lane_7_in);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<80> lane_8_in;
  set_at<0, 80, 80>(lane_8_in, in.extract<640, 719>());
  auto result_8 = f00_generated_compute(lane_8_in);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<80> lane_9_in;
  set_at<0, 80, 80>(lane_9_in, in.extract<720, 799>());
  auto result_9 = f00_generated_compute(lane_9_in);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<80> lane_10_in;
  set_at<0, 80, 80>(lane_10_in, in.extract<800, 879>());
  auto result_10 = f00_generated_compute(lane_10_in);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<80> lane_11_in;
  set_at<0, 80, 80>(lane_11_in, in.extract<880, 959>());
  auto result_11 = f00_generated_compute(lane_11_in);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<80> lane_12_in;
  set_at<0, 80, 80>(lane_12_in, in.extract<960, 1039>());
  auto result_12 = f00_generated_compute(lane_12_in);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<80> lane_13_in;
  set_at<0, 80, 80>(lane_13_in, in.extract<1040, 1119>());
  auto result_13 = f00_generated_compute(lane_13_in);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<80> lane_14_in;
  set_at<0, 80, 80>(lane_14_in, in.extract<1120, 1199>());
  auto result_14 = f00_generated_compute(lane_14_in);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<80> lane_15_in;
  set_at<0, 80, 80>(lane_15_in, in.extract<1200, 1279>());
  auto result_15 = f00_generated_compute(lane_15_in);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // f21_update_0 unroll factor: 16
hw_uint<256>  f21_generated_compute_unrolled_16(hw_uint<1280>& f20) {
  hw_uint<256> whole_result;

  hw_uint<80> lane_0_f20;
  set_at<0, 80, 80>(lane_0_f20, f20.extract<0, 79>());
  auto result_0 = f21_generated_compute(lane_0_f20);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<80> lane_1_f20;
  set_at<0, 80, 80>(lane_1_f20, f20.extract<80, 159>());
  auto result_1 = f21_generated_compute(lane_1_f20);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<80> lane_2_f20;
  set_at<0, 80, 80>(lane_2_f20, f20.extract<160, 239>());
  auto result_2 = f21_generated_compute(lane_2_f20);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<80> lane_3_f20;
  set_at<0, 80, 80>(lane_3_f20, f20.extract<240, 319>());
  auto result_3 = f21_generated_compute(lane_3_f20);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<80> lane_4_f20;
  set_at<0, 80, 80>(lane_4_f20, f20.extract<320, 399>());
  auto result_4 = f21_generated_compute(lane_4_f20);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<80> lane_5_f20;
  set_at<0, 80, 80>(lane_5_f20, f20.extract<400, 479>());
  auto result_5 = f21_generated_compute(lane_5_f20);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<80> lane_6_f20;
  set_at<0, 80, 80>(lane_6_f20, f20.extract<480, 559>());
  auto result_6 = f21_generated_compute(lane_6_f20);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<80> lane_7_f20;
  set_at<0, 80, 80>(lane_7_f20, f20.extract<560, 639>());
  auto result_7 = f21_generated_compute(lane_7_f20);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<80> lane_8_f20;
  set_at<0, 80, 80>(lane_8_f20, f20.extract<640, 719>());
  auto result_8 = f21_generated_compute(lane_8_f20);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<80> lane_9_f20;
  set_at<0, 80, 80>(lane_9_f20, f20.extract<720, 799>());
  auto result_9 = f21_generated_compute(lane_9_f20);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<80> lane_10_f20;
  set_at<0, 80, 80>(lane_10_f20, f20.extract<800, 879>());
  auto result_10 = f21_generated_compute(lane_10_f20);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<80> lane_11_f20;
  set_at<0, 80, 80>(lane_11_f20, f20.extract<880, 959>());
  auto result_11 = f21_generated_compute(lane_11_f20);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<80> lane_12_f20;
  set_at<0, 80, 80>(lane_12_f20, f20.extract<960, 1039>());
  auto result_12 = f21_generated_compute(lane_12_f20);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<80> lane_13_f20;
  set_at<0, 80, 80>(lane_13_f20, f20.extract<1040, 1119>());
  auto result_13 = f21_generated_compute(lane_13_f20);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<80> lane_14_f20;
  set_at<0, 80, 80>(lane_14_f20, f20.extract<1120, 1199>());
  auto result_14 = f21_generated_compute(lane_14_f20);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<80> lane_15_f20;
  set_at<0, 80, 80>(lane_15_f20, f20.extract<1200, 1279>());
  auto result_15 = f21_generated_compute(lane_15_f20);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // f11_update_0 unroll factor: 16
hw_uint<256>  f11_generated_compute_unrolled_16(hw_uint<1280>& f10) {
  hw_uint<256> whole_result;

  hw_uint<80> lane_0_f10;
  set_at<0, 80, 80>(lane_0_f10, f10.extract<0, 79>());
  auto result_0 = f11_generated_compute(lane_0_f10);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<80> lane_1_f10;
  set_at<0, 80, 80>(lane_1_f10, f10.extract<80, 159>());
  auto result_1 = f11_generated_compute(lane_1_f10);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<80> lane_2_f10;
  set_at<0, 80, 80>(lane_2_f10, f10.extract<160, 239>());
  auto result_2 = f11_generated_compute(lane_2_f10);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<80> lane_3_f10;
  set_at<0, 80, 80>(lane_3_f10, f10.extract<240, 319>());
  auto result_3 = f11_generated_compute(lane_3_f10);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<80> lane_4_f10;
  set_at<0, 80, 80>(lane_4_f10, f10.extract<320, 399>());
  auto result_4 = f11_generated_compute(lane_4_f10);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<80> lane_5_f10;
  set_at<0, 80, 80>(lane_5_f10, f10.extract<400, 479>());
  auto result_5 = f11_generated_compute(lane_5_f10);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<80> lane_6_f10;
  set_at<0, 80, 80>(lane_6_f10, f10.extract<480, 559>());
  auto result_6 = f11_generated_compute(lane_6_f10);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<80> lane_7_f10;
  set_at<0, 80, 80>(lane_7_f10, f10.extract<560, 639>());
  auto result_7 = f11_generated_compute(lane_7_f10);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<80> lane_8_f10;
  set_at<0, 80, 80>(lane_8_f10, f10.extract<640, 719>());
  auto result_8 = f11_generated_compute(lane_8_f10);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<80> lane_9_f10;
  set_at<0, 80, 80>(lane_9_f10, f10.extract<720, 799>());
  auto result_9 = f11_generated_compute(lane_9_f10);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<80> lane_10_f10;
  set_at<0, 80, 80>(lane_10_f10, f10.extract<800, 879>());
  auto result_10 = f11_generated_compute(lane_10_f10);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<80> lane_11_f10;
  set_at<0, 80, 80>(lane_11_f10, f10.extract<880, 959>());
  auto result_11 = f11_generated_compute(lane_11_f10);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<80> lane_12_f10;
  set_at<0, 80, 80>(lane_12_f10, f10.extract<960, 1039>());
  auto result_12 = f11_generated_compute(lane_12_f10);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<80> lane_13_f10;
  set_at<0, 80, 80>(lane_13_f10, f10.extract<1040, 1119>());
  auto result_13 = f11_generated_compute(lane_13_f10);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<80> lane_14_f10;
  set_at<0, 80, 80>(lane_14_f10, f10.extract<1120, 1199>());
  auto result_14 = f11_generated_compute(lane_14_f10);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<80> lane_15_f10;
  set_at<0, 80, 80>(lane_15_f10, f10.extract<1200, 1279>());
  auto result_15 = f11_generated_compute(lane_15_f10);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // f01_update_0 unroll factor: 16
hw_uint<256>  f01_generated_compute_unrolled_16(hw_uint<1280>& f00) {
  hw_uint<256> whole_result;

  hw_uint<80> lane_0_f00;
  set_at<0, 80, 80>(lane_0_f00, f00.extract<0, 79>());
  auto result_0 = f01_generated_compute(lane_0_f00);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<80> lane_1_f00;
  set_at<0, 80, 80>(lane_1_f00, f00.extract<80, 159>());
  auto result_1 = f01_generated_compute(lane_1_f00);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<80> lane_2_f00;
  set_at<0, 80, 80>(lane_2_f00, f00.extract<160, 239>());
  auto result_2 = f01_generated_compute(lane_2_f00);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<80> lane_3_f00;
  set_at<0, 80, 80>(lane_3_f00, f00.extract<240, 319>());
  auto result_3 = f01_generated_compute(lane_3_f00);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<80> lane_4_f00;
  set_at<0, 80, 80>(lane_4_f00, f00.extract<320, 399>());
  auto result_4 = f01_generated_compute(lane_4_f00);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<80> lane_5_f00;
  set_at<0, 80, 80>(lane_5_f00, f00.extract<400, 479>());
  auto result_5 = f01_generated_compute(lane_5_f00);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<80> lane_6_f00;
  set_at<0, 80, 80>(lane_6_f00, f00.extract<480, 559>());
  auto result_6 = f01_generated_compute(lane_6_f00);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<80> lane_7_f00;
  set_at<0, 80, 80>(lane_7_f00, f00.extract<560, 639>());
  auto result_7 = f01_generated_compute(lane_7_f00);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<80> lane_8_f00;
  set_at<0, 80, 80>(lane_8_f00, f00.extract<640, 719>());
  auto result_8 = f01_generated_compute(lane_8_f00);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<80> lane_9_f00;
  set_at<0, 80, 80>(lane_9_f00, f00.extract<720, 799>());
  auto result_9 = f01_generated_compute(lane_9_f00);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<80> lane_10_f00;
  set_at<0, 80, 80>(lane_10_f00, f00.extract<800, 879>());
  auto result_10 = f01_generated_compute(lane_10_f00);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<80> lane_11_f00;
  set_at<0, 80, 80>(lane_11_f00, f00.extract<880, 959>());
  auto result_11 = f01_generated_compute(lane_11_f00);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<80> lane_12_f00;
  set_at<0, 80, 80>(lane_12_f00, f00.extract<960, 1039>());
  auto result_12 = f01_generated_compute(lane_12_f00);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<80> lane_13_f00;
  set_at<0, 80, 80>(lane_13_f00, f00.extract<1040, 1119>());
  auto result_13 = f01_generated_compute(lane_13_f00);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<80> lane_14_f00;
  set_at<0, 80, 80>(lane_14_f00, f00.extract<1120, 1199>());
  auto result_14 = f01_generated_compute(lane_14_f00);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<80> lane_15_f00;
  set_at<0, 80, 80>(lane_15_f00, f00.extract<1200, 1279>());
  auto result_15 = f01_generated_compute(lane_15_f00);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // f22_update_0 unroll factor: 16
hw_uint<256>  f22_generated_compute_unrolled_16(hw_uint<1280>& f21) {
  hw_uint<256> whole_result;

  hw_uint<80> lane_0_f21;
  set_at<0, 80, 80>(lane_0_f21, f21.extract<0, 79>());
  auto result_0 = f22_generated_compute(lane_0_f21);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<80> lane_1_f21;
  set_at<0, 80, 80>(lane_1_f21, f21.extract<80, 159>());
  auto result_1 = f22_generated_compute(lane_1_f21);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<80> lane_2_f21;
  set_at<0, 80, 80>(lane_2_f21, f21.extract<160, 239>());
  auto result_2 = f22_generated_compute(lane_2_f21);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<80> lane_3_f21;
  set_at<0, 80, 80>(lane_3_f21, f21.extract<240, 319>());
  auto result_3 = f22_generated_compute(lane_3_f21);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<80> lane_4_f21;
  set_at<0, 80, 80>(lane_4_f21, f21.extract<320, 399>());
  auto result_4 = f22_generated_compute(lane_4_f21);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<80> lane_5_f21;
  set_at<0, 80, 80>(lane_5_f21, f21.extract<400, 479>());
  auto result_5 = f22_generated_compute(lane_5_f21);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<80> lane_6_f21;
  set_at<0, 80, 80>(lane_6_f21, f21.extract<480, 559>());
  auto result_6 = f22_generated_compute(lane_6_f21);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<80> lane_7_f21;
  set_at<0, 80, 80>(lane_7_f21, f21.extract<560, 639>());
  auto result_7 = f22_generated_compute(lane_7_f21);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<80> lane_8_f21;
  set_at<0, 80, 80>(lane_8_f21, f21.extract<640, 719>());
  auto result_8 = f22_generated_compute(lane_8_f21);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<80> lane_9_f21;
  set_at<0, 80, 80>(lane_9_f21, f21.extract<720, 799>());
  auto result_9 = f22_generated_compute(lane_9_f21);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<80> lane_10_f21;
  set_at<0, 80, 80>(lane_10_f21, f21.extract<800, 879>());
  auto result_10 = f22_generated_compute(lane_10_f21);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<80> lane_11_f21;
  set_at<0, 80, 80>(lane_11_f21, f21.extract<880, 959>());
  auto result_11 = f22_generated_compute(lane_11_f21);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<80> lane_12_f21;
  set_at<0, 80, 80>(lane_12_f21, f21.extract<960, 1039>());
  auto result_12 = f22_generated_compute(lane_12_f21);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<80> lane_13_f21;
  set_at<0, 80, 80>(lane_13_f21, f21.extract<1040, 1119>());
  auto result_13 = f22_generated_compute(lane_13_f21);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<80> lane_14_f21;
  set_at<0, 80, 80>(lane_14_f21, f21.extract<1120, 1199>());
  auto result_14 = f22_generated_compute(lane_14_f21);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<80> lane_15_f21;
  set_at<0, 80, 80>(lane_15_f21, f21.extract<1200, 1279>());
  auto result_15 = f22_generated_compute(lane_15_f21);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // f12_update_0 unroll factor: 16
hw_uint<256>  f12_generated_compute_unrolled_16(hw_uint<1280>& f11) {
  hw_uint<256> whole_result;

  hw_uint<80> lane_0_f11;
  set_at<0, 80, 80>(lane_0_f11, f11.extract<0, 79>());
  auto result_0 = f12_generated_compute(lane_0_f11);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<80> lane_1_f11;
  set_at<0, 80, 80>(lane_1_f11, f11.extract<80, 159>());
  auto result_1 = f12_generated_compute(lane_1_f11);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<80> lane_2_f11;
  set_at<0, 80, 80>(lane_2_f11, f11.extract<160, 239>());
  auto result_2 = f12_generated_compute(lane_2_f11);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<80> lane_3_f11;
  set_at<0, 80, 80>(lane_3_f11, f11.extract<240, 319>());
  auto result_3 = f12_generated_compute(lane_3_f11);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<80> lane_4_f11;
  set_at<0, 80, 80>(lane_4_f11, f11.extract<320, 399>());
  auto result_4 = f12_generated_compute(lane_4_f11);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<80> lane_5_f11;
  set_at<0, 80, 80>(lane_5_f11, f11.extract<400, 479>());
  auto result_5 = f12_generated_compute(lane_5_f11);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<80> lane_6_f11;
  set_at<0, 80, 80>(lane_6_f11, f11.extract<480, 559>());
  auto result_6 = f12_generated_compute(lane_6_f11);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<80> lane_7_f11;
  set_at<0, 80, 80>(lane_7_f11, f11.extract<560, 639>());
  auto result_7 = f12_generated_compute(lane_7_f11);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<80> lane_8_f11;
  set_at<0, 80, 80>(lane_8_f11, f11.extract<640, 719>());
  auto result_8 = f12_generated_compute(lane_8_f11);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<80> lane_9_f11;
  set_at<0, 80, 80>(lane_9_f11, f11.extract<720, 799>());
  auto result_9 = f12_generated_compute(lane_9_f11);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<80> lane_10_f11;
  set_at<0, 80, 80>(lane_10_f11, f11.extract<800, 879>());
  auto result_10 = f12_generated_compute(lane_10_f11);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<80> lane_11_f11;
  set_at<0, 80, 80>(lane_11_f11, f11.extract<880, 959>());
  auto result_11 = f12_generated_compute(lane_11_f11);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<80> lane_12_f11;
  set_at<0, 80, 80>(lane_12_f11, f11.extract<960, 1039>());
  auto result_12 = f12_generated_compute(lane_12_f11);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<80> lane_13_f11;
  set_at<0, 80, 80>(lane_13_f11, f11.extract<1040, 1119>());
  auto result_13 = f12_generated_compute(lane_13_f11);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<80> lane_14_f11;
  set_at<0, 80, 80>(lane_14_f11, f11.extract<1120, 1199>());
  auto result_14 = f12_generated_compute(lane_14_f11);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<80> lane_15_f11;
  set_at<0, 80, 80>(lane_15_f11, f11.extract<1200, 1279>());
  auto result_15 = f12_generated_compute(lane_15_f11);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // f02_update_0 unroll factor: 16
hw_uint<256>  f02_generated_compute_unrolled_16(hw_uint<1280>& f01) {
  hw_uint<256> whole_result;

  hw_uint<80> lane_0_f01;
  set_at<0, 80, 80>(lane_0_f01, f01.extract<0, 79>());
  auto result_0 = f02_generated_compute(lane_0_f01);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<80> lane_1_f01;
  set_at<0, 80, 80>(lane_1_f01, f01.extract<80, 159>());
  auto result_1 = f02_generated_compute(lane_1_f01);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<80> lane_2_f01;
  set_at<0, 80, 80>(lane_2_f01, f01.extract<160, 239>());
  auto result_2 = f02_generated_compute(lane_2_f01);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<80> lane_3_f01;
  set_at<0, 80, 80>(lane_3_f01, f01.extract<240, 319>());
  auto result_3 = f02_generated_compute(lane_3_f01);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<80> lane_4_f01;
  set_at<0, 80, 80>(lane_4_f01, f01.extract<320, 399>());
  auto result_4 = f02_generated_compute(lane_4_f01);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<80> lane_5_f01;
  set_at<0, 80, 80>(lane_5_f01, f01.extract<400, 479>());
  auto result_5 = f02_generated_compute(lane_5_f01);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<80> lane_6_f01;
  set_at<0, 80, 80>(lane_6_f01, f01.extract<480, 559>());
  auto result_6 = f02_generated_compute(lane_6_f01);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<80> lane_7_f01;
  set_at<0, 80, 80>(lane_7_f01, f01.extract<560, 639>());
  auto result_7 = f02_generated_compute(lane_7_f01);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<80> lane_8_f01;
  set_at<0, 80, 80>(lane_8_f01, f01.extract<640, 719>());
  auto result_8 = f02_generated_compute(lane_8_f01);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<80> lane_9_f01;
  set_at<0, 80, 80>(lane_9_f01, f01.extract<720, 799>());
  auto result_9 = f02_generated_compute(lane_9_f01);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<80> lane_10_f01;
  set_at<0, 80, 80>(lane_10_f01, f01.extract<800, 879>());
  auto result_10 = f02_generated_compute(lane_10_f01);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<80> lane_11_f01;
  set_at<0, 80, 80>(lane_11_f01, f01.extract<880, 959>());
  auto result_11 = f02_generated_compute(lane_11_f01);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<80> lane_12_f01;
  set_at<0, 80, 80>(lane_12_f01, f01.extract<960, 1039>());
  auto result_12 = f02_generated_compute(lane_12_f01);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<80> lane_13_f01;
  set_at<0, 80, 80>(lane_13_f01, f01.extract<1040, 1119>());
  auto result_13 = f02_generated_compute(lane_13_f01);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<80> lane_14_f01;
  set_at<0, 80, 80>(lane_14_f01, f01.extract<1120, 1199>());
  auto result_14 = f02_generated_compute(lane_14_f01);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<80> lane_15_f01;
  set_at<0, 80, 80>(lane_15_f01, f01.extract<1200, 1279>());
  auto result_15 = f02_generated_compute(lane_15_f01);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // f23_update_0 unroll factor: 16
hw_uint<256>  f23_generated_compute_unrolled_16(hw_uint<1280>& f22) {
  hw_uint<256> whole_result;

  hw_uint<80> lane_0_f22;
  set_at<0, 80, 80>(lane_0_f22, f22.extract<0, 79>());
  auto result_0 = f23_generated_compute(lane_0_f22);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<80> lane_1_f22;
  set_at<0, 80, 80>(lane_1_f22, f22.extract<80, 159>());
  auto result_1 = f23_generated_compute(lane_1_f22);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<80> lane_2_f22;
  set_at<0, 80, 80>(lane_2_f22, f22.extract<160, 239>());
  auto result_2 = f23_generated_compute(lane_2_f22);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<80> lane_3_f22;
  set_at<0, 80, 80>(lane_3_f22, f22.extract<240, 319>());
  auto result_3 = f23_generated_compute(lane_3_f22);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<80> lane_4_f22;
  set_at<0, 80, 80>(lane_4_f22, f22.extract<320, 399>());
  auto result_4 = f23_generated_compute(lane_4_f22);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<80> lane_5_f22;
  set_at<0, 80, 80>(lane_5_f22, f22.extract<400, 479>());
  auto result_5 = f23_generated_compute(lane_5_f22);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<80> lane_6_f22;
  set_at<0, 80, 80>(lane_6_f22, f22.extract<480, 559>());
  auto result_6 = f23_generated_compute(lane_6_f22);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<80> lane_7_f22;
  set_at<0, 80, 80>(lane_7_f22, f22.extract<560, 639>());
  auto result_7 = f23_generated_compute(lane_7_f22);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<80> lane_8_f22;
  set_at<0, 80, 80>(lane_8_f22, f22.extract<640, 719>());
  auto result_8 = f23_generated_compute(lane_8_f22);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<80> lane_9_f22;
  set_at<0, 80, 80>(lane_9_f22, f22.extract<720, 799>());
  auto result_9 = f23_generated_compute(lane_9_f22);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<80> lane_10_f22;
  set_at<0, 80, 80>(lane_10_f22, f22.extract<800, 879>());
  auto result_10 = f23_generated_compute(lane_10_f22);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<80> lane_11_f22;
  set_at<0, 80, 80>(lane_11_f22, f22.extract<880, 959>());
  auto result_11 = f23_generated_compute(lane_11_f22);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<80> lane_12_f22;
  set_at<0, 80, 80>(lane_12_f22, f22.extract<960, 1039>());
  auto result_12 = f23_generated_compute(lane_12_f22);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<80> lane_13_f22;
  set_at<0, 80, 80>(lane_13_f22, f22.extract<1040, 1119>());
  auto result_13 = f23_generated_compute(lane_13_f22);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<80> lane_14_f22;
  set_at<0, 80, 80>(lane_14_f22, f22.extract<1120, 1199>());
  auto result_14 = f23_generated_compute(lane_14_f22);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<80> lane_15_f22;
  set_at<0, 80, 80>(lane_15_f22, f22.extract<1200, 1279>());
  auto result_15 = f23_generated_compute(lane_15_f22);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // f13_update_0 unroll factor: 16
hw_uint<256>  f13_generated_compute_unrolled_16(hw_uint<1280>& f12) {
  hw_uint<256> whole_result;

  hw_uint<80> lane_0_f12;
  set_at<0, 80, 80>(lane_0_f12, f12.extract<0, 79>());
  auto result_0 = f13_generated_compute(lane_0_f12);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<80> lane_1_f12;
  set_at<0, 80, 80>(lane_1_f12, f12.extract<80, 159>());
  auto result_1 = f13_generated_compute(lane_1_f12);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<80> lane_2_f12;
  set_at<0, 80, 80>(lane_2_f12, f12.extract<160, 239>());
  auto result_2 = f13_generated_compute(lane_2_f12);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<80> lane_3_f12;
  set_at<0, 80, 80>(lane_3_f12, f12.extract<240, 319>());
  auto result_3 = f13_generated_compute(lane_3_f12);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<80> lane_4_f12;
  set_at<0, 80, 80>(lane_4_f12, f12.extract<320, 399>());
  auto result_4 = f13_generated_compute(lane_4_f12);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<80> lane_5_f12;
  set_at<0, 80, 80>(lane_5_f12, f12.extract<400, 479>());
  auto result_5 = f13_generated_compute(lane_5_f12);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<80> lane_6_f12;
  set_at<0, 80, 80>(lane_6_f12, f12.extract<480, 559>());
  auto result_6 = f13_generated_compute(lane_6_f12);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<80> lane_7_f12;
  set_at<0, 80, 80>(lane_7_f12, f12.extract<560, 639>());
  auto result_7 = f13_generated_compute(lane_7_f12);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<80> lane_8_f12;
  set_at<0, 80, 80>(lane_8_f12, f12.extract<640, 719>());
  auto result_8 = f13_generated_compute(lane_8_f12);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<80> lane_9_f12;
  set_at<0, 80, 80>(lane_9_f12, f12.extract<720, 799>());
  auto result_9 = f13_generated_compute(lane_9_f12);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<80> lane_10_f12;
  set_at<0, 80, 80>(lane_10_f12, f12.extract<800, 879>());
  auto result_10 = f13_generated_compute(lane_10_f12);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<80> lane_11_f12;
  set_at<0, 80, 80>(lane_11_f12, f12.extract<880, 959>());
  auto result_11 = f13_generated_compute(lane_11_f12);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<80> lane_12_f12;
  set_at<0, 80, 80>(lane_12_f12, f12.extract<960, 1039>());
  auto result_12 = f13_generated_compute(lane_12_f12);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<80> lane_13_f12;
  set_at<0, 80, 80>(lane_13_f12, f12.extract<1040, 1119>());
  auto result_13 = f13_generated_compute(lane_13_f12);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<80> lane_14_f12;
  set_at<0, 80, 80>(lane_14_f12, f12.extract<1120, 1199>());
  auto result_14 = f13_generated_compute(lane_14_f12);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<80> lane_15_f12;
  set_at<0, 80, 80>(lane_15_f12, f12.extract<1200, 1279>());
  auto result_15 = f13_generated_compute(lane_15_f12);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // f03_update_0 unroll factor: 16
hw_uint<256>  f03_generated_compute_unrolled_16(hw_uint<1280>& f02) {
  hw_uint<256> whole_result;

  hw_uint<80> lane_0_f02;
  set_at<0, 80, 80>(lane_0_f02, f02.extract<0, 79>());
  auto result_0 = f03_generated_compute(lane_0_f02);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<80> lane_1_f02;
  set_at<0, 80, 80>(lane_1_f02, f02.extract<80, 159>());
  auto result_1 = f03_generated_compute(lane_1_f02);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<80> lane_2_f02;
  set_at<0, 80, 80>(lane_2_f02, f02.extract<160, 239>());
  auto result_2 = f03_generated_compute(lane_2_f02);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<80> lane_3_f02;
  set_at<0, 80, 80>(lane_3_f02, f02.extract<240, 319>());
  auto result_3 = f03_generated_compute(lane_3_f02);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<80> lane_4_f02;
  set_at<0, 80, 80>(lane_4_f02, f02.extract<320, 399>());
  auto result_4 = f03_generated_compute(lane_4_f02);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<80> lane_5_f02;
  set_at<0, 80, 80>(lane_5_f02, f02.extract<400, 479>());
  auto result_5 = f03_generated_compute(lane_5_f02);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<80> lane_6_f02;
  set_at<0, 80, 80>(lane_6_f02, f02.extract<480, 559>());
  auto result_6 = f03_generated_compute(lane_6_f02);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<80> lane_7_f02;
  set_at<0, 80, 80>(lane_7_f02, f02.extract<560, 639>());
  auto result_7 = f03_generated_compute(lane_7_f02);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<80> lane_8_f02;
  set_at<0, 80, 80>(lane_8_f02, f02.extract<640, 719>());
  auto result_8 = f03_generated_compute(lane_8_f02);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<80> lane_9_f02;
  set_at<0, 80, 80>(lane_9_f02, f02.extract<720, 799>());
  auto result_9 = f03_generated_compute(lane_9_f02);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<80> lane_10_f02;
  set_at<0, 80, 80>(lane_10_f02, f02.extract<800, 879>());
  auto result_10 = f03_generated_compute(lane_10_f02);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<80> lane_11_f02;
  set_at<0, 80, 80>(lane_11_f02, f02.extract<880, 959>());
  auto result_11 = f03_generated_compute(lane_11_f02);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<80> lane_12_f02;
  set_at<0, 80, 80>(lane_12_f02, f02.extract<960, 1039>());
  auto result_12 = f03_generated_compute(lane_12_f02);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<80> lane_13_f02;
  set_at<0, 80, 80>(lane_13_f02, f02.extract<1040, 1119>());
  auto result_13 = f03_generated_compute(lane_13_f02);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<80> lane_14_f02;
  set_at<0, 80, 80>(lane_14_f02, f02.extract<1120, 1199>());
  auto result_14 = f03_generated_compute(lane_14_f02);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<80> lane_15_f02;
  set_at<0, 80, 80>(lane_15_f02, f02.extract<1200, 1279>());
  auto result_15 = f03_generated_compute(lane_15_f02);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // f24_update_0 unroll factor: 16
hw_uint<256>  f24_generated_compute_unrolled_16(hw_uint<1280>& f23) {
  hw_uint<256> whole_result;

  hw_uint<80> lane_0_f23;
  set_at<0, 80, 80>(lane_0_f23, f23.extract<0, 79>());
  auto result_0 = f24_generated_compute(lane_0_f23);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<80> lane_1_f23;
  set_at<0, 80, 80>(lane_1_f23, f23.extract<80, 159>());
  auto result_1 = f24_generated_compute(lane_1_f23);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<80> lane_2_f23;
  set_at<0, 80, 80>(lane_2_f23, f23.extract<160, 239>());
  auto result_2 = f24_generated_compute(lane_2_f23);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<80> lane_3_f23;
  set_at<0, 80, 80>(lane_3_f23, f23.extract<240, 319>());
  auto result_3 = f24_generated_compute(lane_3_f23);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<80> lane_4_f23;
  set_at<0, 80, 80>(lane_4_f23, f23.extract<320, 399>());
  auto result_4 = f24_generated_compute(lane_4_f23);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<80> lane_5_f23;
  set_at<0, 80, 80>(lane_5_f23, f23.extract<400, 479>());
  auto result_5 = f24_generated_compute(lane_5_f23);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<80> lane_6_f23;
  set_at<0, 80, 80>(lane_6_f23, f23.extract<480, 559>());
  auto result_6 = f24_generated_compute(lane_6_f23);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<80> lane_7_f23;
  set_at<0, 80, 80>(lane_7_f23, f23.extract<560, 639>());
  auto result_7 = f24_generated_compute(lane_7_f23);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<80> lane_8_f23;
  set_at<0, 80, 80>(lane_8_f23, f23.extract<640, 719>());
  auto result_8 = f24_generated_compute(lane_8_f23);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<80> lane_9_f23;
  set_at<0, 80, 80>(lane_9_f23, f23.extract<720, 799>());
  auto result_9 = f24_generated_compute(lane_9_f23);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<80> lane_10_f23;
  set_at<0, 80, 80>(lane_10_f23, f23.extract<800, 879>());
  auto result_10 = f24_generated_compute(lane_10_f23);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<80> lane_11_f23;
  set_at<0, 80, 80>(lane_11_f23, f23.extract<880, 959>());
  auto result_11 = f24_generated_compute(lane_11_f23);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<80> lane_12_f23;
  set_at<0, 80, 80>(lane_12_f23, f23.extract<960, 1039>());
  auto result_12 = f24_generated_compute(lane_12_f23);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<80> lane_13_f23;
  set_at<0, 80, 80>(lane_13_f23, f23.extract<1040, 1119>());
  auto result_13 = f24_generated_compute(lane_13_f23);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<80> lane_14_f23;
  set_at<0, 80, 80>(lane_14_f23, f23.extract<1120, 1199>());
  auto result_14 = f24_generated_compute(lane_14_f23);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<80> lane_15_f23;
  set_at<0, 80, 80>(lane_15_f23, f23.extract<1200, 1279>());
  auto result_15 = f24_generated_compute(lane_15_f23);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // f14_update_0 unroll factor: 16
hw_uint<256>  f14_generated_compute_unrolled_16(hw_uint<1280>& f13) {
  hw_uint<256> whole_result;

  hw_uint<80> lane_0_f13;
  set_at<0, 80, 80>(lane_0_f13, f13.extract<0, 79>());
  auto result_0 = f14_generated_compute(lane_0_f13);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<80> lane_1_f13;
  set_at<0, 80, 80>(lane_1_f13, f13.extract<80, 159>());
  auto result_1 = f14_generated_compute(lane_1_f13);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<80> lane_2_f13;
  set_at<0, 80, 80>(lane_2_f13, f13.extract<160, 239>());
  auto result_2 = f14_generated_compute(lane_2_f13);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<80> lane_3_f13;
  set_at<0, 80, 80>(lane_3_f13, f13.extract<240, 319>());
  auto result_3 = f14_generated_compute(lane_3_f13);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<80> lane_4_f13;
  set_at<0, 80, 80>(lane_4_f13, f13.extract<320, 399>());
  auto result_4 = f14_generated_compute(lane_4_f13);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<80> lane_5_f13;
  set_at<0, 80, 80>(lane_5_f13, f13.extract<400, 479>());
  auto result_5 = f14_generated_compute(lane_5_f13);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<80> lane_6_f13;
  set_at<0, 80, 80>(lane_6_f13, f13.extract<480, 559>());
  auto result_6 = f14_generated_compute(lane_6_f13);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<80> lane_7_f13;
  set_at<0, 80, 80>(lane_7_f13, f13.extract<560, 639>());
  auto result_7 = f14_generated_compute(lane_7_f13);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<80> lane_8_f13;
  set_at<0, 80, 80>(lane_8_f13, f13.extract<640, 719>());
  auto result_8 = f14_generated_compute(lane_8_f13);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<80> lane_9_f13;
  set_at<0, 80, 80>(lane_9_f13, f13.extract<720, 799>());
  auto result_9 = f14_generated_compute(lane_9_f13);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<80> lane_10_f13;
  set_at<0, 80, 80>(lane_10_f13, f13.extract<800, 879>());
  auto result_10 = f14_generated_compute(lane_10_f13);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<80> lane_11_f13;
  set_at<0, 80, 80>(lane_11_f13, f13.extract<880, 959>());
  auto result_11 = f14_generated_compute(lane_11_f13);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<80> lane_12_f13;
  set_at<0, 80, 80>(lane_12_f13, f13.extract<960, 1039>());
  auto result_12 = f14_generated_compute(lane_12_f13);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<80> lane_13_f13;
  set_at<0, 80, 80>(lane_13_f13, f13.extract<1040, 1119>());
  auto result_13 = f14_generated_compute(lane_13_f13);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<80> lane_14_f13;
  set_at<0, 80, 80>(lane_14_f13, f13.extract<1120, 1199>());
  auto result_14 = f14_generated_compute(lane_14_f13);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<80> lane_15_f13;
  set_at<0, 80, 80>(lane_15_f13, f13.extract<1200, 1279>());
  auto result_15 = f14_generated_compute(lane_15_f13);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // f04_update_0 unroll factor: 16
hw_uint<256>  f04_generated_compute_unrolled_16(hw_uint<1280>& f03) {
  hw_uint<256> whole_result;

  hw_uint<80> lane_0_f03;
  set_at<0, 80, 80>(lane_0_f03, f03.extract<0, 79>());
  auto result_0 = f04_generated_compute(lane_0_f03);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<80> lane_1_f03;
  set_at<0, 80, 80>(lane_1_f03, f03.extract<80, 159>());
  auto result_1 = f04_generated_compute(lane_1_f03);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<80> lane_2_f03;
  set_at<0, 80, 80>(lane_2_f03, f03.extract<160, 239>());
  auto result_2 = f04_generated_compute(lane_2_f03);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<80> lane_3_f03;
  set_at<0, 80, 80>(lane_3_f03, f03.extract<240, 319>());
  auto result_3 = f04_generated_compute(lane_3_f03);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<80> lane_4_f03;
  set_at<0, 80, 80>(lane_4_f03, f03.extract<320, 399>());
  auto result_4 = f04_generated_compute(lane_4_f03);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<80> lane_5_f03;
  set_at<0, 80, 80>(lane_5_f03, f03.extract<400, 479>());
  auto result_5 = f04_generated_compute(lane_5_f03);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<80> lane_6_f03;
  set_at<0, 80, 80>(lane_6_f03, f03.extract<480, 559>());
  auto result_6 = f04_generated_compute(lane_6_f03);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<80> lane_7_f03;
  set_at<0, 80, 80>(lane_7_f03, f03.extract<560, 639>());
  auto result_7 = f04_generated_compute(lane_7_f03);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<80> lane_8_f03;
  set_at<0, 80, 80>(lane_8_f03, f03.extract<640, 719>());
  auto result_8 = f04_generated_compute(lane_8_f03);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<80> lane_9_f03;
  set_at<0, 80, 80>(lane_9_f03, f03.extract<720, 799>());
  auto result_9 = f04_generated_compute(lane_9_f03);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<80> lane_10_f03;
  set_at<0, 80, 80>(lane_10_f03, f03.extract<800, 879>());
  auto result_10 = f04_generated_compute(lane_10_f03);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<80> lane_11_f03;
  set_at<0, 80, 80>(lane_11_f03, f03.extract<880, 959>());
  auto result_11 = f04_generated_compute(lane_11_f03);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<80> lane_12_f03;
  set_at<0, 80, 80>(lane_12_f03, f03.extract<960, 1039>());
  auto result_12 = f04_generated_compute(lane_12_f03);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<80> lane_13_f03;
  set_at<0, 80, 80>(lane_13_f03, f03.extract<1040, 1119>());
  auto result_13 = f04_generated_compute(lane_13_f03);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<80> lane_14_f03;
  set_at<0, 80, 80>(lane_14_f03, f03.extract<1120, 1199>());
  auto result_14 = f04_generated_compute(lane_14_f03);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<80> lane_15_f03;
  set_at<0, 80, 80>(lane_15_f03, f03.extract<1200, 1279>());
  auto result_15 = f04_generated_compute(lane_15_f03);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // final_update_0 unroll factor: 16
hw_uint<256>  final_generated_compute_unrolled_16(hw_uint<256>& f04, hw_uint<256>& f14, hw_uint<256>& f24) {
  hw_uint<256> whole_result;

  hw_uint<16> lane_0_f04;
  set_at<0, 16, 16>(lane_0_f04, f04.extract<0, 15>());
  hw_uint<16> lane_0_f14;
  set_at<0, 16, 16>(lane_0_f14, f14.extract<0, 15>());
  hw_uint<16> lane_0_f24;
  set_at<0, 16, 16>(lane_0_f24, f24.extract<0, 15>());
  auto result_0 = final_generated_compute(lane_0_f04, lane_0_f14, lane_0_f24);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<16> lane_1_f04;
  set_at<0, 16, 16>(lane_1_f04, f04.extract<16, 31>());
  hw_uint<16> lane_1_f14;
  set_at<0, 16, 16>(lane_1_f14, f14.extract<16, 31>());
  hw_uint<16> lane_1_f24;
  set_at<0, 16, 16>(lane_1_f24, f24.extract<16, 31>());
  auto result_1 = final_generated_compute(lane_1_f04, lane_1_f14, lane_1_f24);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<16> lane_2_f04;
  set_at<0, 16, 16>(lane_2_f04, f04.extract<32, 47>());
  hw_uint<16> lane_2_f14;
  set_at<0, 16, 16>(lane_2_f14, f14.extract<32, 47>());
  hw_uint<16> lane_2_f24;
  set_at<0, 16, 16>(lane_2_f24, f24.extract<32, 47>());
  auto result_2 = final_generated_compute(lane_2_f04, lane_2_f14, lane_2_f24);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<16> lane_3_f04;
  set_at<0, 16, 16>(lane_3_f04, f04.extract<48, 63>());
  hw_uint<16> lane_3_f14;
  set_at<0, 16, 16>(lane_3_f14, f14.extract<48, 63>());
  hw_uint<16> lane_3_f24;
  set_at<0, 16, 16>(lane_3_f24, f24.extract<48, 63>());
  auto result_3 = final_generated_compute(lane_3_f04, lane_3_f14, lane_3_f24);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<16> lane_4_f04;
  set_at<0, 16, 16>(lane_4_f04, f04.extract<64, 79>());
  hw_uint<16> lane_4_f14;
  set_at<0, 16, 16>(lane_4_f14, f14.extract<64, 79>());
  hw_uint<16> lane_4_f24;
  set_at<0, 16, 16>(lane_4_f24, f24.extract<64, 79>());
  auto result_4 = final_generated_compute(lane_4_f04, lane_4_f14, lane_4_f24);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<16> lane_5_f04;
  set_at<0, 16, 16>(lane_5_f04, f04.extract<80, 95>());
  hw_uint<16> lane_5_f14;
  set_at<0, 16, 16>(lane_5_f14, f14.extract<80, 95>());
  hw_uint<16> lane_5_f24;
  set_at<0, 16, 16>(lane_5_f24, f24.extract<80, 95>());
  auto result_5 = final_generated_compute(lane_5_f04, lane_5_f14, lane_5_f24);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<16> lane_6_f04;
  set_at<0, 16, 16>(lane_6_f04, f04.extract<96, 111>());
  hw_uint<16> lane_6_f14;
  set_at<0, 16, 16>(lane_6_f14, f14.extract<96, 111>());
  hw_uint<16> lane_6_f24;
  set_at<0, 16, 16>(lane_6_f24, f24.extract<96, 111>());
  auto result_6 = final_generated_compute(lane_6_f04, lane_6_f14, lane_6_f24);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<16> lane_7_f04;
  set_at<0, 16, 16>(lane_7_f04, f04.extract<112, 127>());
  hw_uint<16> lane_7_f14;
  set_at<0, 16, 16>(lane_7_f14, f14.extract<112, 127>());
  hw_uint<16> lane_7_f24;
  set_at<0, 16, 16>(lane_7_f24, f24.extract<112, 127>());
  auto result_7 = final_generated_compute(lane_7_f04, lane_7_f14, lane_7_f24);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<16> lane_8_f04;
  set_at<0, 16, 16>(lane_8_f04, f04.extract<128, 143>());
  hw_uint<16> lane_8_f14;
  set_at<0, 16, 16>(lane_8_f14, f14.extract<128, 143>());
  hw_uint<16> lane_8_f24;
  set_at<0, 16, 16>(lane_8_f24, f24.extract<128, 143>());
  auto result_8 = final_generated_compute(lane_8_f04, lane_8_f14, lane_8_f24);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<16> lane_9_f04;
  set_at<0, 16, 16>(lane_9_f04, f04.extract<144, 159>());
  hw_uint<16> lane_9_f14;
  set_at<0, 16, 16>(lane_9_f14, f14.extract<144, 159>());
  hw_uint<16> lane_9_f24;
  set_at<0, 16, 16>(lane_9_f24, f24.extract<144, 159>());
  auto result_9 = final_generated_compute(lane_9_f04, lane_9_f14, lane_9_f24);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<16> lane_10_f04;
  set_at<0, 16, 16>(lane_10_f04, f04.extract<160, 175>());
  hw_uint<16> lane_10_f14;
  set_at<0, 16, 16>(lane_10_f14, f14.extract<160, 175>());
  hw_uint<16> lane_10_f24;
  set_at<0, 16, 16>(lane_10_f24, f24.extract<160, 175>());
  auto result_10 = final_generated_compute(lane_10_f04, lane_10_f14, lane_10_f24);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<16> lane_11_f04;
  set_at<0, 16, 16>(lane_11_f04, f04.extract<176, 191>());
  hw_uint<16> lane_11_f14;
  set_at<0, 16, 16>(lane_11_f14, f14.extract<176, 191>());
  hw_uint<16> lane_11_f24;
  set_at<0, 16, 16>(lane_11_f24, f24.extract<176, 191>());
  auto result_11 = final_generated_compute(lane_11_f04, lane_11_f14, lane_11_f24);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<16> lane_12_f04;
  set_at<0, 16, 16>(lane_12_f04, f04.extract<192, 207>());
  hw_uint<16> lane_12_f14;
  set_at<0, 16, 16>(lane_12_f14, f14.extract<192, 207>());
  hw_uint<16> lane_12_f24;
  set_at<0, 16, 16>(lane_12_f24, f24.extract<192, 207>());
  auto result_12 = final_generated_compute(lane_12_f04, lane_12_f14, lane_12_f24);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<16> lane_13_f04;
  set_at<0, 16, 16>(lane_13_f04, f04.extract<208, 223>());
  hw_uint<16> lane_13_f14;
  set_at<0, 16, 16>(lane_13_f14, f14.extract<208, 223>());
  hw_uint<16> lane_13_f24;
  set_at<0, 16, 16>(lane_13_f24, f24.extract<208, 223>());
  auto result_13 = final_generated_compute(lane_13_f04, lane_13_f14, lane_13_f24);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<16> lane_14_f04;
  set_at<0, 16, 16>(lane_14_f04, f04.extract<224, 239>());
  hw_uint<16> lane_14_f14;
  set_at<0, 16, 16>(lane_14_f14, f14.extract<224, 239>());
  hw_uint<16> lane_14_f24;
  set_at<0, 16, 16>(lane_14_f24, f24.extract<224, 239>());
  auto result_14 = final_generated_compute(lane_14_f04, lane_14_f14, lane_14_f24);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<16> lane_15_f04;
  set_at<0, 16, 16>(lane_15_f04, f04.extract<240, 255>());
  hw_uint<16> lane_15_f14;
  set_at<0, 16, 16>(lane_15_f14, f14.extract<240, 255>());
  hw_uint<16> lane_15_f24;
  set_at<0, 16, 16>(lane_15_f24, f24.extract<240, 255>());
  auto result_15 = final_generated_compute(lane_15_f04, lane_15_f14, lane_15_f24);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // icfo_16_update_0 unroll factor: 16
hw_uint<256>  icfo_16_generated_compute_unrolled_16(hw_uint<256>& final) {
  hw_uint<256> whole_result;

  hw_uint<16> lane_0_final;
  set_at<0, 16, 16>(lane_0_final, final.extract<0, 15>());
  auto result_0 = icfo_16_generated_compute(lane_0_final);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<16> lane_1_final;
  set_at<0, 16, 16>(lane_1_final, final.extract<16, 31>());
  auto result_1 = icfo_16_generated_compute(lane_1_final);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<16> lane_2_final;
  set_at<0, 16, 16>(lane_2_final, final.extract<32, 47>());
  auto result_2 = icfo_16_generated_compute(lane_2_final);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<16> lane_3_final;
  set_at<0, 16, 16>(lane_3_final, final.extract<48, 63>());
  auto result_3 = icfo_16_generated_compute(lane_3_final);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<16> lane_4_final;
  set_at<0, 16, 16>(lane_4_final, final.extract<64, 79>());
  auto result_4 = icfo_16_generated_compute(lane_4_final);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<16> lane_5_final;
  set_at<0, 16, 16>(lane_5_final, final.extract<80, 95>());
  auto result_5 = icfo_16_generated_compute(lane_5_final);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<16> lane_6_final;
  set_at<0, 16, 16>(lane_6_final, final.extract<96, 111>());
  auto result_6 = icfo_16_generated_compute(lane_6_final);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<16> lane_7_final;
  set_at<0, 16, 16>(lane_7_final, final.extract<112, 127>());
  auto result_7 = icfo_16_generated_compute(lane_7_final);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<16> lane_8_final;
  set_at<0, 16, 16>(lane_8_final, final.extract<128, 143>());
  auto result_8 = icfo_16_generated_compute(lane_8_final);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<16> lane_9_final;
  set_at<0, 16, 16>(lane_9_final, final.extract<144, 159>());
  auto result_9 = icfo_16_generated_compute(lane_9_final);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<16> lane_10_final;
  set_at<0, 16, 16>(lane_10_final, final.extract<160, 175>());
  auto result_10 = icfo_16_generated_compute(lane_10_final);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<16> lane_11_final;
  set_at<0, 16, 16>(lane_11_final, final.extract<176, 191>());
  auto result_11 = icfo_16_generated_compute(lane_11_final);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<16> lane_12_final;
  set_at<0, 16, 16>(lane_12_final, final.extract<192, 207>());
  auto result_12 = icfo_16_generated_compute(lane_12_final);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<16> lane_13_final;
  set_at<0, 16, 16>(lane_13_final, final.extract<208, 223>());
  auto result_13 = icfo_16_generated_compute(lane_13_final);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<16> lane_14_final;
  set_at<0, 16, 16>(lane_14_final, final.extract<224, 239>());
  auto result_14 = icfo_16_generated_compute(lane_14_final);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<16> lane_15_final;
  set_at<0, 16, 16>(lane_15_final, final.extract<240, 255>());
  auto result_15 = icfo_16_generated_compute(lane_15_final);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

