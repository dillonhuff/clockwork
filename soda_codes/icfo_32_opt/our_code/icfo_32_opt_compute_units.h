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

hw_uint<16> icfo_32_generated_compute(hw_uint<16*1> final) {
  return uint16_t(uint16_t(final.get<16, 0>()));
}



// Compute unit banks...
  // in_update_0 unroll factor: 32
hw_uint<512>  in_generated_compute_unrolled_32(hw_uint<512>& in_off_chip) {
  hw_uint<512> whole_result;

  hw_uint<16> lane_0_in_off_chip;
  set_at<0, 16, 16>(lane_0_in_off_chip, in_off_chip.extract<0, 15>());
  auto result_0 = in_generated_compute(lane_0_in_off_chip);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<16> lane_1_in_off_chip;
  set_at<0, 16, 16>(lane_1_in_off_chip, in_off_chip.extract<16, 31>());
  auto result_1 = in_generated_compute(lane_1_in_off_chip);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<16> lane_2_in_off_chip;
  set_at<0, 16, 16>(lane_2_in_off_chip, in_off_chip.extract<32, 47>());
  auto result_2 = in_generated_compute(lane_2_in_off_chip);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<16> lane_3_in_off_chip;
  set_at<0, 16, 16>(lane_3_in_off_chip, in_off_chip.extract<48, 63>());
  auto result_3 = in_generated_compute(lane_3_in_off_chip);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<16> lane_4_in_off_chip;
  set_at<0, 16, 16>(lane_4_in_off_chip, in_off_chip.extract<64, 79>());
  auto result_4 = in_generated_compute(lane_4_in_off_chip);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<16> lane_5_in_off_chip;
  set_at<0, 16, 16>(lane_5_in_off_chip, in_off_chip.extract<80, 95>());
  auto result_5 = in_generated_compute(lane_5_in_off_chip);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<16> lane_6_in_off_chip;
  set_at<0, 16, 16>(lane_6_in_off_chip, in_off_chip.extract<96, 111>());
  auto result_6 = in_generated_compute(lane_6_in_off_chip);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<16> lane_7_in_off_chip;
  set_at<0, 16, 16>(lane_7_in_off_chip, in_off_chip.extract<112, 127>());
  auto result_7 = in_generated_compute(lane_7_in_off_chip);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<16> lane_8_in_off_chip;
  set_at<0, 16, 16>(lane_8_in_off_chip, in_off_chip.extract<128, 143>());
  auto result_8 = in_generated_compute(lane_8_in_off_chip);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<16> lane_9_in_off_chip;
  set_at<0, 16, 16>(lane_9_in_off_chip, in_off_chip.extract<144, 159>());
  auto result_9 = in_generated_compute(lane_9_in_off_chip);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<16> lane_10_in_off_chip;
  set_at<0, 16, 16>(lane_10_in_off_chip, in_off_chip.extract<160, 175>());
  auto result_10 = in_generated_compute(lane_10_in_off_chip);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<16> lane_11_in_off_chip;
  set_at<0, 16, 16>(lane_11_in_off_chip, in_off_chip.extract<176, 191>());
  auto result_11 = in_generated_compute(lane_11_in_off_chip);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<16> lane_12_in_off_chip;
  set_at<0, 16, 16>(lane_12_in_off_chip, in_off_chip.extract<192, 207>());
  auto result_12 = in_generated_compute(lane_12_in_off_chip);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<16> lane_13_in_off_chip;
  set_at<0, 16, 16>(lane_13_in_off_chip, in_off_chip.extract<208, 223>());
  auto result_13 = in_generated_compute(lane_13_in_off_chip);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<16> lane_14_in_off_chip;
  set_at<0, 16, 16>(lane_14_in_off_chip, in_off_chip.extract<224, 239>());
  auto result_14 = in_generated_compute(lane_14_in_off_chip);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<16> lane_15_in_off_chip;
  set_at<0, 16, 16>(lane_15_in_off_chip, in_off_chip.extract<240, 255>());
  auto result_15 = in_generated_compute(lane_15_in_off_chip);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<16> lane_16_in_off_chip;
  set_at<0, 16, 16>(lane_16_in_off_chip, in_off_chip.extract<256, 271>());
  auto result_16 = in_generated_compute(lane_16_in_off_chip);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<16> lane_17_in_off_chip;
  set_at<0, 16, 16>(lane_17_in_off_chip, in_off_chip.extract<272, 287>());
  auto result_17 = in_generated_compute(lane_17_in_off_chip);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<16> lane_18_in_off_chip;
  set_at<0, 16, 16>(lane_18_in_off_chip, in_off_chip.extract<288, 303>());
  auto result_18 = in_generated_compute(lane_18_in_off_chip);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<16> lane_19_in_off_chip;
  set_at<0, 16, 16>(lane_19_in_off_chip, in_off_chip.extract<304, 319>());
  auto result_19 = in_generated_compute(lane_19_in_off_chip);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<16> lane_20_in_off_chip;
  set_at<0, 16, 16>(lane_20_in_off_chip, in_off_chip.extract<320, 335>());
  auto result_20 = in_generated_compute(lane_20_in_off_chip);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<16> lane_21_in_off_chip;
  set_at<0, 16, 16>(lane_21_in_off_chip, in_off_chip.extract<336, 351>());
  auto result_21 = in_generated_compute(lane_21_in_off_chip);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<16> lane_22_in_off_chip;
  set_at<0, 16, 16>(lane_22_in_off_chip, in_off_chip.extract<352, 367>());
  auto result_22 = in_generated_compute(lane_22_in_off_chip);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<16> lane_23_in_off_chip;
  set_at<0, 16, 16>(lane_23_in_off_chip, in_off_chip.extract<368, 383>());
  auto result_23 = in_generated_compute(lane_23_in_off_chip);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<16> lane_24_in_off_chip;
  set_at<0, 16, 16>(lane_24_in_off_chip, in_off_chip.extract<384, 399>());
  auto result_24 = in_generated_compute(lane_24_in_off_chip);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<16> lane_25_in_off_chip;
  set_at<0, 16, 16>(lane_25_in_off_chip, in_off_chip.extract<400, 415>());
  auto result_25 = in_generated_compute(lane_25_in_off_chip);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<16> lane_26_in_off_chip;
  set_at<0, 16, 16>(lane_26_in_off_chip, in_off_chip.extract<416, 431>());
  auto result_26 = in_generated_compute(lane_26_in_off_chip);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<16> lane_27_in_off_chip;
  set_at<0, 16, 16>(lane_27_in_off_chip, in_off_chip.extract<432, 447>());
  auto result_27 = in_generated_compute(lane_27_in_off_chip);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<16> lane_28_in_off_chip;
  set_at<0, 16, 16>(lane_28_in_off_chip, in_off_chip.extract<448, 463>());
  auto result_28 = in_generated_compute(lane_28_in_off_chip);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<16> lane_29_in_off_chip;
  set_at<0, 16, 16>(lane_29_in_off_chip, in_off_chip.extract<464, 479>());
  auto result_29 = in_generated_compute(lane_29_in_off_chip);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<16> lane_30_in_off_chip;
  set_at<0, 16, 16>(lane_30_in_off_chip, in_off_chip.extract<480, 495>());
  auto result_30 = in_generated_compute(lane_30_in_off_chip);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<16> lane_31_in_off_chip;
  set_at<0, 16, 16>(lane_31_in_off_chip, in_off_chip.extract<496, 511>());
  auto result_31 = in_generated_compute(lane_31_in_off_chip);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // f20_update_0 unroll factor: 32
hw_uint<512>  f20_generated_compute_unrolled_32(hw_uint<2560>& in) {
  hw_uint<512> whole_result;

  hw_uint<80> lane_0_in;
  set_at<0, 80, 80>(lane_0_in, in.extract<0, 79>());
  auto result_0 = f20_generated_compute(lane_0_in);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<80> lane_1_in;
  set_at<0, 80, 80>(lane_1_in, in.extract<80, 159>());
  auto result_1 = f20_generated_compute(lane_1_in);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<80> lane_2_in;
  set_at<0, 80, 80>(lane_2_in, in.extract<160, 239>());
  auto result_2 = f20_generated_compute(lane_2_in);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<80> lane_3_in;
  set_at<0, 80, 80>(lane_3_in, in.extract<240, 319>());
  auto result_3 = f20_generated_compute(lane_3_in);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<80> lane_4_in;
  set_at<0, 80, 80>(lane_4_in, in.extract<320, 399>());
  auto result_4 = f20_generated_compute(lane_4_in);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<80> lane_5_in;
  set_at<0, 80, 80>(lane_5_in, in.extract<400, 479>());
  auto result_5 = f20_generated_compute(lane_5_in);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<80> lane_6_in;
  set_at<0, 80, 80>(lane_6_in, in.extract<480, 559>());
  auto result_6 = f20_generated_compute(lane_6_in);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<80> lane_7_in;
  set_at<0, 80, 80>(lane_7_in, in.extract<560, 639>());
  auto result_7 = f20_generated_compute(lane_7_in);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<80> lane_8_in;
  set_at<0, 80, 80>(lane_8_in, in.extract<640, 719>());
  auto result_8 = f20_generated_compute(lane_8_in);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<80> lane_9_in;
  set_at<0, 80, 80>(lane_9_in, in.extract<720, 799>());
  auto result_9 = f20_generated_compute(lane_9_in);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<80> lane_10_in;
  set_at<0, 80, 80>(lane_10_in, in.extract<800, 879>());
  auto result_10 = f20_generated_compute(lane_10_in);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<80> lane_11_in;
  set_at<0, 80, 80>(lane_11_in, in.extract<880, 959>());
  auto result_11 = f20_generated_compute(lane_11_in);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<80> lane_12_in;
  set_at<0, 80, 80>(lane_12_in, in.extract<960, 1039>());
  auto result_12 = f20_generated_compute(lane_12_in);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<80> lane_13_in;
  set_at<0, 80, 80>(lane_13_in, in.extract<1040, 1119>());
  auto result_13 = f20_generated_compute(lane_13_in);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<80> lane_14_in;
  set_at<0, 80, 80>(lane_14_in, in.extract<1120, 1199>());
  auto result_14 = f20_generated_compute(lane_14_in);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<80> lane_15_in;
  set_at<0, 80, 80>(lane_15_in, in.extract<1200, 1279>());
  auto result_15 = f20_generated_compute(lane_15_in);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<80> lane_16_in;
  set_at<0, 80, 80>(lane_16_in, in.extract<1280, 1359>());
  auto result_16 = f20_generated_compute(lane_16_in);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<80> lane_17_in;
  set_at<0, 80, 80>(lane_17_in, in.extract<1360, 1439>());
  auto result_17 = f20_generated_compute(lane_17_in);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<80> lane_18_in;
  set_at<0, 80, 80>(lane_18_in, in.extract<1440, 1519>());
  auto result_18 = f20_generated_compute(lane_18_in);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<80> lane_19_in;
  set_at<0, 80, 80>(lane_19_in, in.extract<1520, 1599>());
  auto result_19 = f20_generated_compute(lane_19_in);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<80> lane_20_in;
  set_at<0, 80, 80>(lane_20_in, in.extract<1600, 1679>());
  auto result_20 = f20_generated_compute(lane_20_in);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<80> lane_21_in;
  set_at<0, 80, 80>(lane_21_in, in.extract<1680, 1759>());
  auto result_21 = f20_generated_compute(lane_21_in);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<80> lane_22_in;
  set_at<0, 80, 80>(lane_22_in, in.extract<1760, 1839>());
  auto result_22 = f20_generated_compute(lane_22_in);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<80> lane_23_in;
  set_at<0, 80, 80>(lane_23_in, in.extract<1840, 1919>());
  auto result_23 = f20_generated_compute(lane_23_in);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<80> lane_24_in;
  set_at<0, 80, 80>(lane_24_in, in.extract<1920, 1999>());
  auto result_24 = f20_generated_compute(lane_24_in);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<80> lane_25_in;
  set_at<0, 80, 80>(lane_25_in, in.extract<2000, 2079>());
  auto result_25 = f20_generated_compute(lane_25_in);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<80> lane_26_in;
  set_at<0, 80, 80>(lane_26_in, in.extract<2080, 2159>());
  auto result_26 = f20_generated_compute(lane_26_in);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<80> lane_27_in;
  set_at<0, 80, 80>(lane_27_in, in.extract<2160, 2239>());
  auto result_27 = f20_generated_compute(lane_27_in);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<80> lane_28_in;
  set_at<0, 80, 80>(lane_28_in, in.extract<2240, 2319>());
  auto result_28 = f20_generated_compute(lane_28_in);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<80> lane_29_in;
  set_at<0, 80, 80>(lane_29_in, in.extract<2320, 2399>());
  auto result_29 = f20_generated_compute(lane_29_in);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<80> lane_30_in;
  set_at<0, 80, 80>(lane_30_in, in.extract<2400, 2479>());
  auto result_30 = f20_generated_compute(lane_30_in);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<80> lane_31_in;
  set_at<0, 80, 80>(lane_31_in, in.extract<2480, 2559>());
  auto result_31 = f20_generated_compute(lane_31_in);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // f10_update_0 unroll factor: 32
hw_uint<512>  f10_generated_compute_unrolled_32(hw_uint<2560>& in) {
  hw_uint<512> whole_result;

  hw_uint<80> lane_0_in;
  set_at<0, 80, 80>(lane_0_in, in.extract<0, 79>());
  auto result_0 = f10_generated_compute(lane_0_in);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<80> lane_1_in;
  set_at<0, 80, 80>(lane_1_in, in.extract<80, 159>());
  auto result_1 = f10_generated_compute(lane_1_in);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<80> lane_2_in;
  set_at<0, 80, 80>(lane_2_in, in.extract<160, 239>());
  auto result_2 = f10_generated_compute(lane_2_in);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<80> lane_3_in;
  set_at<0, 80, 80>(lane_3_in, in.extract<240, 319>());
  auto result_3 = f10_generated_compute(lane_3_in);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<80> lane_4_in;
  set_at<0, 80, 80>(lane_4_in, in.extract<320, 399>());
  auto result_4 = f10_generated_compute(lane_4_in);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<80> lane_5_in;
  set_at<0, 80, 80>(lane_5_in, in.extract<400, 479>());
  auto result_5 = f10_generated_compute(lane_5_in);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<80> lane_6_in;
  set_at<0, 80, 80>(lane_6_in, in.extract<480, 559>());
  auto result_6 = f10_generated_compute(lane_6_in);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<80> lane_7_in;
  set_at<0, 80, 80>(lane_7_in, in.extract<560, 639>());
  auto result_7 = f10_generated_compute(lane_7_in);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<80> lane_8_in;
  set_at<0, 80, 80>(lane_8_in, in.extract<640, 719>());
  auto result_8 = f10_generated_compute(lane_8_in);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<80> lane_9_in;
  set_at<0, 80, 80>(lane_9_in, in.extract<720, 799>());
  auto result_9 = f10_generated_compute(lane_9_in);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<80> lane_10_in;
  set_at<0, 80, 80>(lane_10_in, in.extract<800, 879>());
  auto result_10 = f10_generated_compute(lane_10_in);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<80> lane_11_in;
  set_at<0, 80, 80>(lane_11_in, in.extract<880, 959>());
  auto result_11 = f10_generated_compute(lane_11_in);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<80> lane_12_in;
  set_at<0, 80, 80>(lane_12_in, in.extract<960, 1039>());
  auto result_12 = f10_generated_compute(lane_12_in);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<80> lane_13_in;
  set_at<0, 80, 80>(lane_13_in, in.extract<1040, 1119>());
  auto result_13 = f10_generated_compute(lane_13_in);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<80> lane_14_in;
  set_at<0, 80, 80>(lane_14_in, in.extract<1120, 1199>());
  auto result_14 = f10_generated_compute(lane_14_in);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<80> lane_15_in;
  set_at<0, 80, 80>(lane_15_in, in.extract<1200, 1279>());
  auto result_15 = f10_generated_compute(lane_15_in);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<80> lane_16_in;
  set_at<0, 80, 80>(lane_16_in, in.extract<1280, 1359>());
  auto result_16 = f10_generated_compute(lane_16_in);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<80> lane_17_in;
  set_at<0, 80, 80>(lane_17_in, in.extract<1360, 1439>());
  auto result_17 = f10_generated_compute(lane_17_in);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<80> lane_18_in;
  set_at<0, 80, 80>(lane_18_in, in.extract<1440, 1519>());
  auto result_18 = f10_generated_compute(lane_18_in);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<80> lane_19_in;
  set_at<0, 80, 80>(lane_19_in, in.extract<1520, 1599>());
  auto result_19 = f10_generated_compute(lane_19_in);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<80> lane_20_in;
  set_at<0, 80, 80>(lane_20_in, in.extract<1600, 1679>());
  auto result_20 = f10_generated_compute(lane_20_in);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<80> lane_21_in;
  set_at<0, 80, 80>(lane_21_in, in.extract<1680, 1759>());
  auto result_21 = f10_generated_compute(lane_21_in);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<80> lane_22_in;
  set_at<0, 80, 80>(lane_22_in, in.extract<1760, 1839>());
  auto result_22 = f10_generated_compute(lane_22_in);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<80> lane_23_in;
  set_at<0, 80, 80>(lane_23_in, in.extract<1840, 1919>());
  auto result_23 = f10_generated_compute(lane_23_in);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<80> lane_24_in;
  set_at<0, 80, 80>(lane_24_in, in.extract<1920, 1999>());
  auto result_24 = f10_generated_compute(lane_24_in);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<80> lane_25_in;
  set_at<0, 80, 80>(lane_25_in, in.extract<2000, 2079>());
  auto result_25 = f10_generated_compute(lane_25_in);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<80> lane_26_in;
  set_at<0, 80, 80>(lane_26_in, in.extract<2080, 2159>());
  auto result_26 = f10_generated_compute(lane_26_in);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<80> lane_27_in;
  set_at<0, 80, 80>(lane_27_in, in.extract<2160, 2239>());
  auto result_27 = f10_generated_compute(lane_27_in);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<80> lane_28_in;
  set_at<0, 80, 80>(lane_28_in, in.extract<2240, 2319>());
  auto result_28 = f10_generated_compute(lane_28_in);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<80> lane_29_in;
  set_at<0, 80, 80>(lane_29_in, in.extract<2320, 2399>());
  auto result_29 = f10_generated_compute(lane_29_in);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<80> lane_30_in;
  set_at<0, 80, 80>(lane_30_in, in.extract<2400, 2479>());
  auto result_30 = f10_generated_compute(lane_30_in);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<80> lane_31_in;
  set_at<0, 80, 80>(lane_31_in, in.extract<2480, 2559>());
  auto result_31 = f10_generated_compute(lane_31_in);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // f00_update_0 unroll factor: 32
hw_uint<512>  f00_generated_compute_unrolled_32(hw_uint<2560>& in) {
  hw_uint<512> whole_result;

  hw_uint<80> lane_0_in;
  set_at<0, 80, 80>(lane_0_in, in.extract<0, 79>());
  auto result_0 = f00_generated_compute(lane_0_in);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<80> lane_1_in;
  set_at<0, 80, 80>(lane_1_in, in.extract<80, 159>());
  auto result_1 = f00_generated_compute(lane_1_in);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<80> lane_2_in;
  set_at<0, 80, 80>(lane_2_in, in.extract<160, 239>());
  auto result_2 = f00_generated_compute(lane_2_in);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<80> lane_3_in;
  set_at<0, 80, 80>(lane_3_in, in.extract<240, 319>());
  auto result_3 = f00_generated_compute(lane_3_in);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<80> lane_4_in;
  set_at<0, 80, 80>(lane_4_in, in.extract<320, 399>());
  auto result_4 = f00_generated_compute(lane_4_in);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<80> lane_5_in;
  set_at<0, 80, 80>(lane_5_in, in.extract<400, 479>());
  auto result_5 = f00_generated_compute(lane_5_in);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<80> lane_6_in;
  set_at<0, 80, 80>(lane_6_in, in.extract<480, 559>());
  auto result_6 = f00_generated_compute(lane_6_in);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<80> lane_7_in;
  set_at<0, 80, 80>(lane_7_in, in.extract<560, 639>());
  auto result_7 = f00_generated_compute(lane_7_in);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<80> lane_8_in;
  set_at<0, 80, 80>(lane_8_in, in.extract<640, 719>());
  auto result_8 = f00_generated_compute(lane_8_in);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<80> lane_9_in;
  set_at<0, 80, 80>(lane_9_in, in.extract<720, 799>());
  auto result_9 = f00_generated_compute(lane_9_in);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<80> lane_10_in;
  set_at<0, 80, 80>(lane_10_in, in.extract<800, 879>());
  auto result_10 = f00_generated_compute(lane_10_in);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<80> lane_11_in;
  set_at<0, 80, 80>(lane_11_in, in.extract<880, 959>());
  auto result_11 = f00_generated_compute(lane_11_in);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<80> lane_12_in;
  set_at<0, 80, 80>(lane_12_in, in.extract<960, 1039>());
  auto result_12 = f00_generated_compute(lane_12_in);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<80> lane_13_in;
  set_at<0, 80, 80>(lane_13_in, in.extract<1040, 1119>());
  auto result_13 = f00_generated_compute(lane_13_in);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<80> lane_14_in;
  set_at<0, 80, 80>(lane_14_in, in.extract<1120, 1199>());
  auto result_14 = f00_generated_compute(lane_14_in);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<80> lane_15_in;
  set_at<0, 80, 80>(lane_15_in, in.extract<1200, 1279>());
  auto result_15 = f00_generated_compute(lane_15_in);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<80> lane_16_in;
  set_at<0, 80, 80>(lane_16_in, in.extract<1280, 1359>());
  auto result_16 = f00_generated_compute(lane_16_in);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<80> lane_17_in;
  set_at<0, 80, 80>(lane_17_in, in.extract<1360, 1439>());
  auto result_17 = f00_generated_compute(lane_17_in);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<80> lane_18_in;
  set_at<0, 80, 80>(lane_18_in, in.extract<1440, 1519>());
  auto result_18 = f00_generated_compute(lane_18_in);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<80> lane_19_in;
  set_at<0, 80, 80>(lane_19_in, in.extract<1520, 1599>());
  auto result_19 = f00_generated_compute(lane_19_in);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<80> lane_20_in;
  set_at<0, 80, 80>(lane_20_in, in.extract<1600, 1679>());
  auto result_20 = f00_generated_compute(lane_20_in);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<80> lane_21_in;
  set_at<0, 80, 80>(lane_21_in, in.extract<1680, 1759>());
  auto result_21 = f00_generated_compute(lane_21_in);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<80> lane_22_in;
  set_at<0, 80, 80>(lane_22_in, in.extract<1760, 1839>());
  auto result_22 = f00_generated_compute(lane_22_in);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<80> lane_23_in;
  set_at<0, 80, 80>(lane_23_in, in.extract<1840, 1919>());
  auto result_23 = f00_generated_compute(lane_23_in);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<80> lane_24_in;
  set_at<0, 80, 80>(lane_24_in, in.extract<1920, 1999>());
  auto result_24 = f00_generated_compute(lane_24_in);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<80> lane_25_in;
  set_at<0, 80, 80>(lane_25_in, in.extract<2000, 2079>());
  auto result_25 = f00_generated_compute(lane_25_in);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<80> lane_26_in;
  set_at<0, 80, 80>(lane_26_in, in.extract<2080, 2159>());
  auto result_26 = f00_generated_compute(lane_26_in);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<80> lane_27_in;
  set_at<0, 80, 80>(lane_27_in, in.extract<2160, 2239>());
  auto result_27 = f00_generated_compute(lane_27_in);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<80> lane_28_in;
  set_at<0, 80, 80>(lane_28_in, in.extract<2240, 2319>());
  auto result_28 = f00_generated_compute(lane_28_in);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<80> lane_29_in;
  set_at<0, 80, 80>(lane_29_in, in.extract<2320, 2399>());
  auto result_29 = f00_generated_compute(lane_29_in);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<80> lane_30_in;
  set_at<0, 80, 80>(lane_30_in, in.extract<2400, 2479>());
  auto result_30 = f00_generated_compute(lane_30_in);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<80> lane_31_in;
  set_at<0, 80, 80>(lane_31_in, in.extract<2480, 2559>());
  auto result_31 = f00_generated_compute(lane_31_in);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // f21_update_0 unroll factor: 32
hw_uint<512>  f21_generated_compute_unrolled_32(hw_uint<2560>& f20) {
  hw_uint<512> whole_result;

  hw_uint<80> lane_0_f20;
  set_at<0, 80, 80>(lane_0_f20, f20.extract<0, 79>());
  auto result_0 = f21_generated_compute(lane_0_f20);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<80> lane_1_f20;
  set_at<0, 80, 80>(lane_1_f20, f20.extract<80, 159>());
  auto result_1 = f21_generated_compute(lane_1_f20);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<80> lane_2_f20;
  set_at<0, 80, 80>(lane_2_f20, f20.extract<160, 239>());
  auto result_2 = f21_generated_compute(lane_2_f20);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<80> lane_3_f20;
  set_at<0, 80, 80>(lane_3_f20, f20.extract<240, 319>());
  auto result_3 = f21_generated_compute(lane_3_f20);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<80> lane_4_f20;
  set_at<0, 80, 80>(lane_4_f20, f20.extract<320, 399>());
  auto result_4 = f21_generated_compute(lane_4_f20);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<80> lane_5_f20;
  set_at<0, 80, 80>(lane_5_f20, f20.extract<400, 479>());
  auto result_5 = f21_generated_compute(lane_5_f20);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<80> lane_6_f20;
  set_at<0, 80, 80>(lane_6_f20, f20.extract<480, 559>());
  auto result_6 = f21_generated_compute(lane_6_f20);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<80> lane_7_f20;
  set_at<0, 80, 80>(lane_7_f20, f20.extract<560, 639>());
  auto result_7 = f21_generated_compute(lane_7_f20);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<80> lane_8_f20;
  set_at<0, 80, 80>(lane_8_f20, f20.extract<640, 719>());
  auto result_8 = f21_generated_compute(lane_8_f20);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<80> lane_9_f20;
  set_at<0, 80, 80>(lane_9_f20, f20.extract<720, 799>());
  auto result_9 = f21_generated_compute(lane_9_f20);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<80> lane_10_f20;
  set_at<0, 80, 80>(lane_10_f20, f20.extract<800, 879>());
  auto result_10 = f21_generated_compute(lane_10_f20);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<80> lane_11_f20;
  set_at<0, 80, 80>(lane_11_f20, f20.extract<880, 959>());
  auto result_11 = f21_generated_compute(lane_11_f20);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<80> lane_12_f20;
  set_at<0, 80, 80>(lane_12_f20, f20.extract<960, 1039>());
  auto result_12 = f21_generated_compute(lane_12_f20);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<80> lane_13_f20;
  set_at<0, 80, 80>(lane_13_f20, f20.extract<1040, 1119>());
  auto result_13 = f21_generated_compute(lane_13_f20);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<80> lane_14_f20;
  set_at<0, 80, 80>(lane_14_f20, f20.extract<1120, 1199>());
  auto result_14 = f21_generated_compute(lane_14_f20);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<80> lane_15_f20;
  set_at<0, 80, 80>(lane_15_f20, f20.extract<1200, 1279>());
  auto result_15 = f21_generated_compute(lane_15_f20);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<80> lane_16_f20;
  set_at<0, 80, 80>(lane_16_f20, f20.extract<1280, 1359>());
  auto result_16 = f21_generated_compute(lane_16_f20);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<80> lane_17_f20;
  set_at<0, 80, 80>(lane_17_f20, f20.extract<1360, 1439>());
  auto result_17 = f21_generated_compute(lane_17_f20);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<80> lane_18_f20;
  set_at<0, 80, 80>(lane_18_f20, f20.extract<1440, 1519>());
  auto result_18 = f21_generated_compute(lane_18_f20);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<80> lane_19_f20;
  set_at<0, 80, 80>(lane_19_f20, f20.extract<1520, 1599>());
  auto result_19 = f21_generated_compute(lane_19_f20);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<80> lane_20_f20;
  set_at<0, 80, 80>(lane_20_f20, f20.extract<1600, 1679>());
  auto result_20 = f21_generated_compute(lane_20_f20);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<80> lane_21_f20;
  set_at<0, 80, 80>(lane_21_f20, f20.extract<1680, 1759>());
  auto result_21 = f21_generated_compute(lane_21_f20);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<80> lane_22_f20;
  set_at<0, 80, 80>(lane_22_f20, f20.extract<1760, 1839>());
  auto result_22 = f21_generated_compute(lane_22_f20);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<80> lane_23_f20;
  set_at<0, 80, 80>(lane_23_f20, f20.extract<1840, 1919>());
  auto result_23 = f21_generated_compute(lane_23_f20);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<80> lane_24_f20;
  set_at<0, 80, 80>(lane_24_f20, f20.extract<1920, 1999>());
  auto result_24 = f21_generated_compute(lane_24_f20);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<80> lane_25_f20;
  set_at<0, 80, 80>(lane_25_f20, f20.extract<2000, 2079>());
  auto result_25 = f21_generated_compute(lane_25_f20);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<80> lane_26_f20;
  set_at<0, 80, 80>(lane_26_f20, f20.extract<2080, 2159>());
  auto result_26 = f21_generated_compute(lane_26_f20);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<80> lane_27_f20;
  set_at<0, 80, 80>(lane_27_f20, f20.extract<2160, 2239>());
  auto result_27 = f21_generated_compute(lane_27_f20);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<80> lane_28_f20;
  set_at<0, 80, 80>(lane_28_f20, f20.extract<2240, 2319>());
  auto result_28 = f21_generated_compute(lane_28_f20);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<80> lane_29_f20;
  set_at<0, 80, 80>(lane_29_f20, f20.extract<2320, 2399>());
  auto result_29 = f21_generated_compute(lane_29_f20);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<80> lane_30_f20;
  set_at<0, 80, 80>(lane_30_f20, f20.extract<2400, 2479>());
  auto result_30 = f21_generated_compute(lane_30_f20);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<80> lane_31_f20;
  set_at<0, 80, 80>(lane_31_f20, f20.extract<2480, 2559>());
  auto result_31 = f21_generated_compute(lane_31_f20);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // f11_update_0 unroll factor: 32
hw_uint<512>  f11_generated_compute_unrolled_32(hw_uint<2560>& f10) {
  hw_uint<512> whole_result;

  hw_uint<80> lane_0_f10;
  set_at<0, 80, 80>(lane_0_f10, f10.extract<0, 79>());
  auto result_0 = f11_generated_compute(lane_0_f10);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<80> lane_1_f10;
  set_at<0, 80, 80>(lane_1_f10, f10.extract<80, 159>());
  auto result_1 = f11_generated_compute(lane_1_f10);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<80> lane_2_f10;
  set_at<0, 80, 80>(lane_2_f10, f10.extract<160, 239>());
  auto result_2 = f11_generated_compute(lane_2_f10);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<80> lane_3_f10;
  set_at<0, 80, 80>(lane_3_f10, f10.extract<240, 319>());
  auto result_3 = f11_generated_compute(lane_3_f10);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<80> lane_4_f10;
  set_at<0, 80, 80>(lane_4_f10, f10.extract<320, 399>());
  auto result_4 = f11_generated_compute(lane_4_f10);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<80> lane_5_f10;
  set_at<0, 80, 80>(lane_5_f10, f10.extract<400, 479>());
  auto result_5 = f11_generated_compute(lane_5_f10);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<80> lane_6_f10;
  set_at<0, 80, 80>(lane_6_f10, f10.extract<480, 559>());
  auto result_6 = f11_generated_compute(lane_6_f10);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<80> lane_7_f10;
  set_at<0, 80, 80>(lane_7_f10, f10.extract<560, 639>());
  auto result_7 = f11_generated_compute(lane_7_f10);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<80> lane_8_f10;
  set_at<0, 80, 80>(lane_8_f10, f10.extract<640, 719>());
  auto result_8 = f11_generated_compute(lane_8_f10);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<80> lane_9_f10;
  set_at<0, 80, 80>(lane_9_f10, f10.extract<720, 799>());
  auto result_9 = f11_generated_compute(lane_9_f10);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<80> lane_10_f10;
  set_at<0, 80, 80>(lane_10_f10, f10.extract<800, 879>());
  auto result_10 = f11_generated_compute(lane_10_f10);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<80> lane_11_f10;
  set_at<0, 80, 80>(lane_11_f10, f10.extract<880, 959>());
  auto result_11 = f11_generated_compute(lane_11_f10);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<80> lane_12_f10;
  set_at<0, 80, 80>(lane_12_f10, f10.extract<960, 1039>());
  auto result_12 = f11_generated_compute(lane_12_f10);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<80> lane_13_f10;
  set_at<0, 80, 80>(lane_13_f10, f10.extract<1040, 1119>());
  auto result_13 = f11_generated_compute(lane_13_f10);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<80> lane_14_f10;
  set_at<0, 80, 80>(lane_14_f10, f10.extract<1120, 1199>());
  auto result_14 = f11_generated_compute(lane_14_f10);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<80> lane_15_f10;
  set_at<0, 80, 80>(lane_15_f10, f10.extract<1200, 1279>());
  auto result_15 = f11_generated_compute(lane_15_f10);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<80> lane_16_f10;
  set_at<0, 80, 80>(lane_16_f10, f10.extract<1280, 1359>());
  auto result_16 = f11_generated_compute(lane_16_f10);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<80> lane_17_f10;
  set_at<0, 80, 80>(lane_17_f10, f10.extract<1360, 1439>());
  auto result_17 = f11_generated_compute(lane_17_f10);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<80> lane_18_f10;
  set_at<0, 80, 80>(lane_18_f10, f10.extract<1440, 1519>());
  auto result_18 = f11_generated_compute(lane_18_f10);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<80> lane_19_f10;
  set_at<0, 80, 80>(lane_19_f10, f10.extract<1520, 1599>());
  auto result_19 = f11_generated_compute(lane_19_f10);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<80> lane_20_f10;
  set_at<0, 80, 80>(lane_20_f10, f10.extract<1600, 1679>());
  auto result_20 = f11_generated_compute(lane_20_f10);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<80> lane_21_f10;
  set_at<0, 80, 80>(lane_21_f10, f10.extract<1680, 1759>());
  auto result_21 = f11_generated_compute(lane_21_f10);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<80> lane_22_f10;
  set_at<0, 80, 80>(lane_22_f10, f10.extract<1760, 1839>());
  auto result_22 = f11_generated_compute(lane_22_f10);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<80> lane_23_f10;
  set_at<0, 80, 80>(lane_23_f10, f10.extract<1840, 1919>());
  auto result_23 = f11_generated_compute(lane_23_f10);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<80> lane_24_f10;
  set_at<0, 80, 80>(lane_24_f10, f10.extract<1920, 1999>());
  auto result_24 = f11_generated_compute(lane_24_f10);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<80> lane_25_f10;
  set_at<0, 80, 80>(lane_25_f10, f10.extract<2000, 2079>());
  auto result_25 = f11_generated_compute(lane_25_f10);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<80> lane_26_f10;
  set_at<0, 80, 80>(lane_26_f10, f10.extract<2080, 2159>());
  auto result_26 = f11_generated_compute(lane_26_f10);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<80> lane_27_f10;
  set_at<0, 80, 80>(lane_27_f10, f10.extract<2160, 2239>());
  auto result_27 = f11_generated_compute(lane_27_f10);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<80> lane_28_f10;
  set_at<0, 80, 80>(lane_28_f10, f10.extract<2240, 2319>());
  auto result_28 = f11_generated_compute(lane_28_f10);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<80> lane_29_f10;
  set_at<0, 80, 80>(lane_29_f10, f10.extract<2320, 2399>());
  auto result_29 = f11_generated_compute(lane_29_f10);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<80> lane_30_f10;
  set_at<0, 80, 80>(lane_30_f10, f10.extract<2400, 2479>());
  auto result_30 = f11_generated_compute(lane_30_f10);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<80> lane_31_f10;
  set_at<0, 80, 80>(lane_31_f10, f10.extract<2480, 2559>());
  auto result_31 = f11_generated_compute(lane_31_f10);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // f01_update_0 unroll factor: 32
hw_uint<512>  f01_generated_compute_unrolled_32(hw_uint<2560>& f00) {
  hw_uint<512> whole_result;

  hw_uint<80> lane_0_f00;
  set_at<0, 80, 80>(lane_0_f00, f00.extract<0, 79>());
  auto result_0 = f01_generated_compute(lane_0_f00);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<80> lane_1_f00;
  set_at<0, 80, 80>(lane_1_f00, f00.extract<80, 159>());
  auto result_1 = f01_generated_compute(lane_1_f00);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<80> lane_2_f00;
  set_at<0, 80, 80>(lane_2_f00, f00.extract<160, 239>());
  auto result_2 = f01_generated_compute(lane_2_f00);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<80> lane_3_f00;
  set_at<0, 80, 80>(lane_3_f00, f00.extract<240, 319>());
  auto result_3 = f01_generated_compute(lane_3_f00);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<80> lane_4_f00;
  set_at<0, 80, 80>(lane_4_f00, f00.extract<320, 399>());
  auto result_4 = f01_generated_compute(lane_4_f00);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<80> lane_5_f00;
  set_at<0, 80, 80>(lane_5_f00, f00.extract<400, 479>());
  auto result_5 = f01_generated_compute(lane_5_f00);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<80> lane_6_f00;
  set_at<0, 80, 80>(lane_6_f00, f00.extract<480, 559>());
  auto result_6 = f01_generated_compute(lane_6_f00);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<80> lane_7_f00;
  set_at<0, 80, 80>(lane_7_f00, f00.extract<560, 639>());
  auto result_7 = f01_generated_compute(lane_7_f00);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<80> lane_8_f00;
  set_at<0, 80, 80>(lane_8_f00, f00.extract<640, 719>());
  auto result_8 = f01_generated_compute(lane_8_f00);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<80> lane_9_f00;
  set_at<0, 80, 80>(lane_9_f00, f00.extract<720, 799>());
  auto result_9 = f01_generated_compute(lane_9_f00);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<80> lane_10_f00;
  set_at<0, 80, 80>(lane_10_f00, f00.extract<800, 879>());
  auto result_10 = f01_generated_compute(lane_10_f00);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<80> lane_11_f00;
  set_at<0, 80, 80>(lane_11_f00, f00.extract<880, 959>());
  auto result_11 = f01_generated_compute(lane_11_f00);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<80> lane_12_f00;
  set_at<0, 80, 80>(lane_12_f00, f00.extract<960, 1039>());
  auto result_12 = f01_generated_compute(lane_12_f00);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<80> lane_13_f00;
  set_at<0, 80, 80>(lane_13_f00, f00.extract<1040, 1119>());
  auto result_13 = f01_generated_compute(lane_13_f00);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<80> lane_14_f00;
  set_at<0, 80, 80>(lane_14_f00, f00.extract<1120, 1199>());
  auto result_14 = f01_generated_compute(lane_14_f00);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<80> lane_15_f00;
  set_at<0, 80, 80>(lane_15_f00, f00.extract<1200, 1279>());
  auto result_15 = f01_generated_compute(lane_15_f00);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<80> lane_16_f00;
  set_at<0, 80, 80>(lane_16_f00, f00.extract<1280, 1359>());
  auto result_16 = f01_generated_compute(lane_16_f00);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<80> lane_17_f00;
  set_at<0, 80, 80>(lane_17_f00, f00.extract<1360, 1439>());
  auto result_17 = f01_generated_compute(lane_17_f00);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<80> lane_18_f00;
  set_at<0, 80, 80>(lane_18_f00, f00.extract<1440, 1519>());
  auto result_18 = f01_generated_compute(lane_18_f00);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<80> lane_19_f00;
  set_at<0, 80, 80>(lane_19_f00, f00.extract<1520, 1599>());
  auto result_19 = f01_generated_compute(lane_19_f00);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<80> lane_20_f00;
  set_at<0, 80, 80>(lane_20_f00, f00.extract<1600, 1679>());
  auto result_20 = f01_generated_compute(lane_20_f00);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<80> lane_21_f00;
  set_at<0, 80, 80>(lane_21_f00, f00.extract<1680, 1759>());
  auto result_21 = f01_generated_compute(lane_21_f00);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<80> lane_22_f00;
  set_at<0, 80, 80>(lane_22_f00, f00.extract<1760, 1839>());
  auto result_22 = f01_generated_compute(lane_22_f00);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<80> lane_23_f00;
  set_at<0, 80, 80>(lane_23_f00, f00.extract<1840, 1919>());
  auto result_23 = f01_generated_compute(lane_23_f00);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<80> lane_24_f00;
  set_at<0, 80, 80>(lane_24_f00, f00.extract<1920, 1999>());
  auto result_24 = f01_generated_compute(lane_24_f00);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<80> lane_25_f00;
  set_at<0, 80, 80>(lane_25_f00, f00.extract<2000, 2079>());
  auto result_25 = f01_generated_compute(lane_25_f00);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<80> lane_26_f00;
  set_at<0, 80, 80>(lane_26_f00, f00.extract<2080, 2159>());
  auto result_26 = f01_generated_compute(lane_26_f00);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<80> lane_27_f00;
  set_at<0, 80, 80>(lane_27_f00, f00.extract<2160, 2239>());
  auto result_27 = f01_generated_compute(lane_27_f00);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<80> lane_28_f00;
  set_at<0, 80, 80>(lane_28_f00, f00.extract<2240, 2319>());
  auto result_28 = f01_generated_compute(lane_28_f00);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<80> lane_29_f00;
  set_at<0, 80, 80>(lane_29_f00, f00.extract<2320, 2399>());
  auto result_29 = f01_generated_compute(lane_29_f00);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<80> lane_30_f00;
  set_at<0, 80, 80>(lane_30_f00, f00.extract<2400, 2479>());
  auto result_30 = f01_generated_compute(lane_30_f00);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<80> lane_31_f00;
  set_at<0, 80, 80>(lane_31_f00, f00.extract<2480, 2559>());
  auto result_31 = f01_generated_compute(lane_31_f00);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // f22_update_0 unroll factor: 32
hw_uint<512>  f22_generated_compute_unrolled_32(hw_uint<2560>& f21) {
  hw_uint<512> whole_result;

  hw_uint<80> lane_0_f21;
  set_at<0, 80, 80>(lane_0_f21, f21.extract<0, 79>());
  auto result_0 = f22_generated_compute(lane_0_f21);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<80> lane_1_f21;
  set_at<0, 80, 80>(lane_1_f21, f21.extract<80, 159>());
  auto result_1 = f22_generated_compute(lane_1_f21);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<80> lane_2_f21;
  set_at<0, 80, 80>(lane_2_f21, f21.extract<160, 239>());
  auto result_2 = f22_generated_compute(lane_2_f21);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<80> lane_3_f21;
  set_at<0, 80, 80>(lane_3_f21, f21.extract<240, 319>());
  auto result_3 = f22_generated_compute(lane_3_f21);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<80> lane_4_f21;
  set_at<0, 80, 80>(lane_4_f21, f21.extract<320, 399>());
  auto result_4 = f22_generated_compute(lane_4_f21);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<80> lane_5_f21;
  set_at<0, 80, 80>(lane_5_f21, f21.extract<400, 479>());
  auto result_5 = f22_generated_compute(lane_5_f21);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<80> lane_6_f21;
  set_at<0, 80, 80>(lane_6_f21, f21.extract<480, 559>());
  auto result_6 = f22_generated_compute(lane_6_f21);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<80> lane_7_f21;
  set_at<0, 80, 80>(lane_7_f21, f21.extract<560, 639>());
  auto result_7 = f22_generated_compute(lane_7_f21);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<80> lane_8_f21;
  set_at<0, 80, 80>(lane_8_f21, f21.extract<640, 719>());
  auto result_8 = f22_generated_compute(lane_8_f21);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<80> lane_9_f21;
  set_at<0, 80, 80>(lane_9_f21, f21.extract<720, 799>());
  auto result_9 = f22_generated_compute(lane_9_f21);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<80> lane_10_f21;
  set_at<0, 80, 80>(lane_10_f21, f21.extract<800, 879>());
  auto result_10 = f22_generated_compute(lane_10_f21);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<80> lane_11_f21;
  set_at<0, 80, 80>(lane_11_f21, f21.extract<880, 959>());
  auto result_11 = f22_generated_compute(lane_11_f21);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<80> lane_12_f21;
  set_at<0, 80, 80>(lane_12_f21, f21.extract<960, 1039>());
  auto result_12 = f22_generated_compute(lane_12_f21);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<80> lane_13_f21;
  set_at<0, 80, 80>(lane_13_f21, f21.extract<1040, 1119>());
  auto result_13 = f22_generated_compute(lane_13_f21);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<80> lane_14_f21;
  set_at<0, 80, 80>(lane_14_f21, f21.extract<1120, 1199>());
  auto result_14 = f22_generated_compute(lane_14_f21);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<80> lane_15_f21;
  set_at<0, 80, 80>(lane_15_f21, f21.extract<1200, 1279>());
  auto result_15 = f22_generated_compute(lane_15_f21);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<80> lane_16_f21;
  set_at<0, 80, 80>(lane_16_f21, f21.extract<1280, 1359>());
  auto result_16 = f22_generated_compute(lane_16_f21);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<80> lane_17_f21;
  set_at<0, 80, 80>(lane_17_f21, f21.extract<1360, 1439>());
  auto result_17 = f22_generated_compute(lane_17_f21);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<80> lane_18_f21;
  set_at<0, 80, 80>(lane_18_f21, f21.extract<1440, 1519>());
  auto result_18 = f22_generated_compute(lane_18_f21);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<80> lane_19_f21;
  set_at<0, 80, 80>(lane_19_f21, f21.extract<1520, 1599>());
  auto result_19 = f22_generated_compute(lane_19_f21);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<80> lane_20_f21;
  set_at<0, 80, 80>(lane_20_f21, f21.extract<1600, 1679>());
  auto result_20 = f22_generated_compute(lane_20_f21);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<80> lane_21_f21;
  set_at<0, 80, 80>(lane_21_f21, f21.extract<1680, 1759>());
  auto result_21 = f22_generated_compute(lane_21_f21);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<80> lane_22_f21;
  set_at<0, 80, 80>(lane_22_f21, f21.extract<1760, 1839>());
  auto result_22 = f22_generated_compute(lane_22_f21);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<80> lane_23_f21;
  set_at<0, 80, 80>(lane_23_f21, f21.extract<1840, 1919>());
  auto result_23 = f22_generated_compute(lane_23_f21);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<80> lane_24_f21;
  set_at<0, 80, 80>(lane_24_f21, f21.extract<1920, 1999>());
  auto result_24 = f22_generated_compute(lane_24_f21);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<80> lane_25_f21;
  set_at<0, 80, 80>(lane_25_f21, f21.extract<2000, 2079>());
  auto result_25 = f22_generated_compute(lane_25_f21);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<80> lane_26_f21;
  set_at<0, 80, 80>(lane_26_f21, f21.extract<2080, 2159>());
  auto result_26 = f22_generated_compute(lane_26_f21);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<80> lane_27_f21;
  set_at<0, 80, 80>(lane_27_f21, f21.extract<2160, 2239>());
  auto result_27 = f22_generated_compute(lane_27_f21);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<80> lane_28_f21;
  set_at<0, 80, 80>(lane_28_f21, f21.extract<2240, 2319>());
  auto result_28 = f22_generated_compute(lane_28_f21);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<80> lane_29_f21;
  set_at<0, 80, 80>(lane_29_f21, f21.extract<2320, 2399>());
  auto result_29 = f22_generated_compute(lane_29_f21);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<80> lane_30_f21;
  set_at<0, 80, 80>(lane_30_f21, f21.extract<2400, 2479>());
  auto result_30 = f22_generated_compute(lane_30_f21);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<80> lane_31_f21;
  set_at<0, 80, 80>(lane_31_f21, f21.extract<2480, 2559>());
  auto result_31 = f22_generated_compute(lane_31_f21);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // f12_update_0 unroll factor: 32
hw_uint<512>  f12_generated_compute_unrolled_32(hw_uint<2560>& f11) {
  hw_uint<512> whole_result;

  hw_uint<80> lane_0_f11;
  set_at<0, 80, 80>(lane_0_f11, f11.extract<0, 79>());
  auto result_0 = f12_generated_compute(lane_0_f11);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<80> lane_1_f11;
  set_at<0, 80, 80>(lane_1_f11, f11.extract<80, 159>());
  auto result_1 = f12_generated_compute(lane_1_f11);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<80> lane_2_f11;
  set_at<0, 80, 80>(lane_2_f11, f11.extract<160, 239>());
  auto result_2 = f12_generated_compute(lane_2_f11);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<80> lane_3_f11;
  set_at<0, 80, 80>(lane_3_f11, f11.extract<240, 319>());
  auto result_3 = f12_generated_compute(lane_3_f11);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<80> lane_4_f11;
  set_at<0, 80, 80>(lane_4_f11, f11.extract<320, 399>());
  auto result_4 = f12_generated_compute(lane_4_f11);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<80> lane_5_f11;
  set_at<0, 80, 80>(lane_5_f11, f11.extract<400, 479>());
  auto result_5 = f12_generated_compute(lane_5_f11);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<80> lane_6_f11;
  set_at<0, 80, 80>(lane_6_f11, f11.extract<480, 559>());
  auto result_6 = f12_generated_compute(lane_6_f11);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<80> lane_7_f11;
  set_at<0, 80, 80>(lane_7_f11, f11.extract<560, 639>());
  auto result_7 = f12_generated_compute(lane_7_f11);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<80> lane_8_f11;
  set_at<0, 80, 80>(lane_8_f11, f11.extract<640, 719>());
  auto result_8 = f12_generated_compute(lane_8_f11);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<80> lane_9_f11;
  set_at<0, 80, 80>(lane_9_f11, f11.extract<720, 799>());
  auto result_9 = f12_generated_compute(lane_9_f11);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<80> lane_10_f11;
  set_at<0, 80, 80>(lane_10_f11, f11.extract<800, 879>());
  auto result_10 = f12_generated_compute(lane_10_f11);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<80> lane_11_f11;
  set_at<0, 80, 80>(lane_11_f11, f11.extract<880, 959>());
  auto result_11 = f12_generated_compute(lane_11_f11);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<80> lane_12_f11;
  set_at<0, 80, 80>(lane_12_f11, f11.extract<960, 1039>());
  auto result_12 = f12_generated_compute(lane_12_f11);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<80> lane_13_f11;
  set_at<0, 80, 80>(lane_13_f11, f11.extract<1040, 1119>());
  auto result_13 = f12_generated_compute(lane_13_f11);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<80> lane_14_f11;
  set_at<0, 80, 80>(lane_14_f11, f11.extract<1120, 1199>());
  auto result_14 = f12_generated_compute(lane_14_f11);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<80> lane_15_f11;
  set_at<0, 80, 80>(lane_15_f11, f11.extract<1200, 1279>());
  auto result_15 = f12_generated_compute(lane_15_f11);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<80> lane_16_f11;
  set_at<0, 80, 80>(lane_16_f11, f11.extract<1280, 1359>());
  auto result_16 = f12_generated_compute(lane_16_f11);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<80> lane_17_f11;
  set_at<0, 80, 80>(lane_17_f11, f11.extract<1360, 1439>());
  auto result_17 = f12_generated_compute(lane_17_f11);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<80> lane_18_f11;
  set_at<0, 80, 80>(lane_18_f11, f11.extract<1440, 1519>());
  auto result_18 = f12_generated_compute(lane_18_f11);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<80> lane_19_f11;
  set_at<0, 80, 80>(lane_19_f11, f11.extract<1520, 1599>());
  auto result_19 = f12_generated_compute(lane_19_f11);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<80> lane_20_f11;
  set_at<0, 80, 80>(lane_20_f11, f11.extract<1600, 1679>());
  auto result_20 = f12_generated_compute(lane_20_f11);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<80> lane_21_f11;
  set_at<0, 80, 80>(lane_21_f11, f11.extract<1680, 1759>());
  auto result_21 = f12_generated_compute(lane_21_f11);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<80> lane_22_f11;
  set_at<0, 80, 80>(lane_22_f11, f11.extract<1760, 1839>());
  auto result_22 = f12_generated_compute(lane_22_f11);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<80> lane_23_f11;
  set_at<0, 80, 80>(lane_23_f11, f11.extract<1840, 1919>());
  auto result_23 = f12_generated_compute(lane_23_f11);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<80> lane_24_f11;
  set_at<0, 80, 80>(lane_24_f11, f11.extract<1920, 1999>());
  auto result_24 = f12_generated_compute(lane_24_f11);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<80> lane_25_f11;
  set_at<0, 80, 80>(lane_25_f11, f11.extract<2000, 2079>());
  auto result_25 = f12_generated_compute(lane_25_f11);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<80> lane_26_f11;
  set_at<0, 80, 80>(lane_26_f11, f11.extract<2080, 2159>());
  auto result_26 = f12_generated_compute(lane_26_f11);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<80> lane_27_f11;
  set_at<0, 80, 80>(lane_27_f11, f11.extract<2160, 2239>());
  auto result_27 = f12_generated_compute(lane_27_f11);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<80> lane_28_f11;
  set_at<0, 80, 80>(lane_28_f11, f11.extract<2240, 2319>());
  auto result_28 = f12_generated_compute(lane_28_f11);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<80> lane_29_f11;
  set_at<0, 80, 80>(lane_29_f11, f11.extract<2320, 2399>());
  auto result_29 = f12_generated_compute(lane_29_f11);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<80> lane_30_f11;
  set_at<0, 80, 80>(lane_30_f11, f11.extract<2400, 2479>());
  auto result_30 = f12_generated_compute(lane_30_f11);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<80> lane_31_f11;
  set_at<0, 80, 80>(lane_31_f11, f11.extract<2480, 2559>());
  auto result_31 = f12_generated_compute(lane_31_f11);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // f02_update_0 unroll factor: 32
hw_uint<512>  f02_generated_compute_unrolled_32(hw_uint<2560>& f01) {
  hw_uint<512> whole_result;

  hw_uint<80> lane_0_f01;
  set_at<0, 80, 80>(lane_0_f01, f01.extract<0, 79>());
  auto result_0 = f02_generated_compute(lane_0_f01);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<80> lane_1_f01;
  set_at<0, 80, 80>(lane_1_f01, f01.extract<80, 159>());
  auto result_1 = f02_generated_compute(lane_1_f01);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<80> lane_2_f01;
  set_at<0, 80, 80>(lane_2_f01, f01.extract<160, 239>());
  auto result_2 = f02_generated_compute(lane_2_f01);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<80> lane_3_f01;
  set_at<0, 80, 80>(lane_3_f01, f01.extract<240, 319>());
  auto result_3 = f02_generated_compute(lane_3_f01);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<80> lane_4_f01;
  set_at<0, 80, 80>(lane_4_f01, f01.extract<320, 399>());
  auto result_4 = f02_generated_compute(lane_4_f01);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<80> lane_5_f01;
  set_at<0, 80, 80>(lane_5_f01, f01.extract<400, 479>());
  auto result_5 = f02_generated_compute(lane_5_f01);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<80> lane_6_f01;
  set_at<0, 80, 80>(lane_6_f01, f01.extract<480, 559>());
  auto result_6 = f02_generated_compute(lane_6_f01);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<80> lane_7_f01;
  set_at<0, 80, 80>(lane_7_f01, f01.extract<560, 639>());
  auto result_7 = f02_generated_compute(lane_7_f01);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<80> lane_8_f01;
  set_at<0, 80, 80>(lane_8_f01, f01.extract<640, 719>());
  auto result_8 = f02_generated_compute(lane_8_f01);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<80> lane_9_f01;
  set_at<0, 80, 80>(lane_9_f01, f01.extract<720, 799>());
  auto result_9 = f02_generated_compute(lane_9_f01);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<80> lane_10_f01;
  set_at<0, 80, 80>(lane_10_f01, f01.extract<800, 879>());
  auto result_10 = f02_generated_compute(lane_10_f01);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<80> lane_11_f01;
  set_at<0, 80, 80>(lane_11_f01, f01.extract<880, 959>());
  auto result_11 = f02_generated_compute(lane_11_f01);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<80> lane_12_f01;
  set_at<0, 80, 80>(lane_12_f01, f01.extract<960, 1039>());
  auto result_12 = f02_generated_compute(lane_12_f01);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<80> lane_13_f01;
  set_at<0, 80, 80>(lane_13_f01, f01.extract<1040, 1119>());
  auto result_13 = f02_generated_compute(lane_13_f01);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<80> lane_14_f01;
  set_at<0, 80, 80>(lane_14_f01, f01.extract<1120, 1199>());
  auto result_14 = f02_generated_compute(lane_14_f01);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<80> lane_15_f01;
  set_at<0, 80, 80>(lane_15_f01, f01.extract<1200, 1279>());
  auto result_15 = f02_generated_compute(lane_15_f01);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<80> lane_16_f01;
  set_at<0, 80, 80>(lane_16_f01, f01.extract<1280, 1359>());
  auto result_16 = f02_generated_compute(lane_16_f01);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<80> lane_17_f01;
  set_at<0, 80, 80>(lane_17_f01, f01.extract<1360, 1439>());
  auto result_17 = f02_generated_compute(lane_17_f01);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<80> lane_18_f01;
  set_at<0, 80, 80>(lane_18_f01, f01.extract<1440, 1519>());
  auto result_18 = f02_generated_compute(lane_18_f01);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<80> lane_19_f01;
  set_at<0, 80, 80>(lane_19_f01, f01.extract<1520, 1599>());
  auto result_19 = f02_generated_compute(lane_19_f01);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<80> lane_20_f01;
  set_at<0, 80, 80>(lane_20_f01, f01.extract<1600, 1679>());
  auto result_20 = f02_generated_compute(lane_20_f01);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<80> lane_21_f01;
  set_at<0, 80, 80>(lane_21_f01, f01.extract<1680, 1759>());
  auto result_21 = f02_generated_compute(lane_21_f01);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<80> lane_22_f01;
  set_at<0, 80, 80>(lane_22_f01, f01.extract<1760, 1839>());
  auto result_22 = f02_generated_compute(lane_22_f01);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<80> lane_23_f01;
  set_at<0, 80, 80>(lane_23_f01, f01.extract<1840, 1919>());
  auto result_23 = f02_generated_compute(lane_23_f01);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<80> lane_24_f01;
  set_at<0, 80, 80>(lane_24_f01, f01.extract<1920, 1999>());
  auto result_24 = f02_generated_compute(lane_24_f01);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<80> lane_25_f01;
  set_at<0, 80, 80>(lane_25_f01, f01.extract<2000, 2079>());
  auto result_25 = f02_generated_compute(lane_25_f01);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<80> lane_26_f01;
  set_at<0, 80, 80>(lane_26_f01, f01.extract<2080, 2159>());
  auto result_26 = f02_generated_compute(lane_26_f01);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<80> lane_27_f01;
  set_at<0, 80, 80>(lane_27_f01, f01.extract<2160, 2239>());
  auto result_27 = f02_generated_compute(lane_27_f01);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<80> lane_28_f01;
  set_at<0, 80, 80>(lane_28_f01, f01.extract<2240, 2319>());
  auto result_28 = f02_generated_compute(lane_28_f01);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<80> lane_29_f01;
  set_at<0, 80, 80>(lane_29_f01, f01.extract<2320, 2399>());
  auto result_29 = f02_generated_compute(lane_29_f01);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<80> lane_30_f01;
  set_at<0, 80, 80>(lane_30_f01, f01.extract<2400, 2479>());
  auto result_30 = f02_generated_compute(lane_30_f01);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<80> lane_31_f01;
  set_at<0, 80, 80>(lane_31_f01, f01.extract<2480, 2559>());
  auto result_31 = f02_generated_compute(lane_31_f01);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // f23_update_0 unroll factor: 32
hw_uint<512>  f23_generated_compute_unrolled_32(hw_uint<2560>& f22) {
  hw_uint<512> whole_result;

  hw_uint<80> lane_0_f22;
  set_at<0, 80, 80>(lane_0_f22, f22.extract<0, 79>());
  auto result_0 = f23_generated_compute(lane_0_f22);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<80> lane_1_f22;
  set_at<0, 80, 80>(lane_1_f22, f22.extract<80, 159>());
  auto result_1 = f23_generated_compute(lane_1_f22);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<80> lane_2_f22;
  set_at<0, 80, 80>(lane_2_f22, f22.extract<160, 239>());
  auto result_2 = f23_generated_compute(lane_2_f22);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<80> lane_3_f22;
  set_at<0, 80, 80>(lane_3_f22, f22.extract<240, 319>());
  auto result_3 = f23_generated_compute(lane_3_f22);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<80> lane_4_f22;
  set_at<0, 80, 80>(lane_4_f22, f22.extract<320, 399>());
  auto result_4 = f23_generated_compute(lane_4_f22);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<80> lane_5_f22;
  set_at<0, 80, 80>(lane_5_f22, f22.extract<400, 479>());
  auto result_5 = f23_generated_compute(lane_5_f22);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<80> lane_6_f22;
  set_at<0, 80, 80>(lane_6_f22, f22.extract<480, 559>());
  auto result_6 = f23_generated_compute(lane_6_f22);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<80> lane_7_f22;
  set_at<0, 80, 80>(lane_7_f22, f22.extract<560, 639>());
  auto result_7 = f23_generated_compute(lane_7_f22);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<80> lane_8_f22;
  set_at<0, 80, 80>(lane_8_f22, f22.extract<640, 719>());
  auto result_8 = f23_generated_compute(lane_8_f22);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<80> lane_9_f22;
  set_at<0, 80, 80>(lane_9_f22, f22.extract<720, 799>());
  auto result_9 = f23_generated_compute(lane_9_f22);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<80> lane_10_f22;
  set_at<0, 80, 80>(lane_10_f22, f22.extract<800, 879>());
  auto result_10 = f23_generated_compute(lane_10_f22);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<80> lane_11_f22;
  set_at<0, 80, 80>(lane_11_f22, f22.extract<880, 959>());
  auto result_11 = f23_generated_compute(lane_11_f22);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<80> lane_12_f22;
  set_at<0, 80, 80>(lane_12_f22, f22.extract<960, 1039>());
  auto result_12 = f23_generated_compute(lane_12_f22);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<80> lane_13_f22;
  set_at<0, 80, 80>(lane_13_f22, f22.extract<1040, 1119>());
  auto result_13 = f23_generated_compute(lane_13_f22);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<80> lane_14_f22;
  set_at<0, 80, 80>(lane_14_f22, f22.extract<1120, 1199>());
  auto result_14 = f23_generated_compute(lane_14_f22);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<80> lane_15_f22;
  set_at<0, 80, 80>(lane_15_f22, f22.extract<1200, 1279>());
  auto result_15 = f23_generated_compute(lane_15_f22);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<80> lane_16_f22;
  set_at<0, 80, 80>(lane_16_f22, f22.extract<1280, 1359>());
  auto result_16 = f23_generated_compute(lane_16_f22);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<80> lane_17_f22;
  set_at<0, 80, 80>(lane_17_f22, f22.extract<1360, 1439>());
  auto result_17 = f23_generated_compute(lane_17_f22);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<80> lane_18_f22;
  set_at<0, 80, 80>(lane_18_f22, f22.extract<1440, 1519>());
  auto result_18 = f23_generated_compute(lane_18_f22);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<80> lane_19_f22;
  set_at<0, 80, 80>(lane_19_f22, f22.extract<1520, 1599>());
  auto result_19 = f23_generated_compute(lane_19_f22);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<80> lane_20_f22;
  set_at<0, 80, 80>(lane_20_f22, f22.extract<1600, 1679>());
  auto result_20 = f23_generated_compute(lane_20_f22);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<80> lane_21_f22;
  set_at<0, 80, 80>(lane_21_f22, f22.extract<1680, 1759>());
  auto result_21 = f23_generated_compute(lane_21_f22);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<80> lane_22_f22;
  set_at<0, 80, 80>(lane_22_f22, f22.extract<1760, 1839>());
  auto result_22 = f23_generated_compute(lane_22_f22);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<80> lane_23_f22;
  set_at<0, 80, 80>(lane_23_f22, f22.extract<1840, 1919>());
  auto result_23 = f23_generated_compute(lane_23_f22);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<80> lane_24_f22;
  set_at<0, 80, 80>(lane_24_f22, f22.extract<1920, 1999>());
  auto result_24 = f23_generated_compute(lane_24_f22);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<80> lane_25_f22;
  set_at<0, 80, 80>(lane_25_f22, f22.extract<2000, 2079>());
  auto result_25 = f23_generated_compute(lane_25_f22);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<80> lane_26_f22;
  set_at<0, 80, 80>(lane_26_f22, f22.extract<2080, 2159>());
  auto result_26 = f23_generated_compute(lane_26_f22);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<80> lane_27_f22;
  set_at<0, 80, 80>(lane_27_f22, f22.extract<2160, 2239>());
  auto result_27 = f23_generated_compute(lane_27_f22);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<80> lane_28_f22;
  set_at<0, 80, 80>(lane_28_f22, f22.extract<2240, 2319>());
  auto result_28 = f23_generated_compute(lane_28_f22);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<80> lane_29_f22;
  set_at<0, 80, 80>(lane_29_f22, f22.extract<2320, 2399>());
  auto result_29 = f23_generated_compute(lane_29_f22);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<80> lane_30_f22;
  set_at<0, 80, 80>(lane_30_f22, f22.extract<2400, 2479>());
  auto result_30 = f23_generated_compute(lane_30_f22);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<80> lane_31_f22;
  set_at<0, 80, 80>(lane_31_f22, f22.extract<2480, 2559>());
  auto result_31 = f23_generated_compute(lane_31_f22);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // f13_update_0 unroll factor: 32
hw_uint<512>  f13_generated_compute_unrolled_32(hw_uint<2560>& f12) {
  hw_uint<512> whole_result;

  hw_uint<80> lane_0_f12;
  set_at<0, 80, 80>(lane_0_f12, f12.extract<0, 79>());
  auto result_0 = f13_generated_compute(lane_0_f12);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<80> lane_1_f12;
  set_at<0, 80, 80>(lane_1_f12, f12.extract<80, 159>());
  auto result_1 = f13_generated_compute(lane_1_f12);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<80> lane_2_f12;
  set_at<0, 80, 80>(lane_2_f12, f12.extract<160, 239>());
  auto result_2 = f13_generated_compute(lane_2_f12);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<80> lane_3_f12;
  set_at<0, 80, 80>(lane_3_f12, f12.extract<240, 319>());
  auto result_3 = f13_generated_compute(lane_3_f12);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<80> lane_4_f12;
  set_at<0, 80, 80>(lane_4_f12, f12.extract<320, 399>());
  auto result_4 = f13_generated_compute(lane_4_f12);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<80> lane_5_f12;
  set_at<0, 80, 80>(lane_5_f12, f12.extract<400, 479>());
  auto result_5 = f13_generated_compute(lane_5_f12);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<80> lane_6_f12;
  set_at<0, 80, 80>(lane_6_f12, f12.extract<480, 559>());
  auto result_6 = f13_generated_compute(lane_6_f12);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<80> lane_7_f12;
  set_at<0, 80, 80>(lane_7_f12, f12.extract<560, 639>());
  auto result_7 = f13_generated_compute(lane_7_f12);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<80> lane_8_f12;
  set_at<0, 80, 80>(lane_8_f12, f12.extract<640, 719>());
  auto result_8 = f13_generated_compute(lane_8_f12);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<80> lane_9_f12;
  set_at<0, 80, 80>(lane_9_f12, f12.extract<720, 799>());
  auto result_9 = f13_generated_compute(lane_9_f12);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<80> lane_10_f12;
  set_at<0, 80, 80>(lane_10_f12, f12.extract<800, 879>());
  auto result_10 = f13_generated_compute(lane_10_f12);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<80> lane_11_f12;
  set_at<0, 80, 80>(lane_11_f12, f12.extract<880, 959>());
  auto result_11 = f13_generated_compute(lane_11_f12);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<80> lane_12_f12;
  set_at<0, 80, 80>(lane_12_f12, f12.extract<960, 1039>());
  auto result_12 = f13_generated_compute(lane_12_f12);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<80> lane_13_f12;
  set_at<0, 80, 80>(lane_13_f12, f12.extract<1040, 1119>());
  auto result_13 = f13_generated_compute(lane_13_f12);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<80> lane_14_f12;
  set_at<0, 80, 80>(lane_14_f12, f12.extract<1120, 1199>());
  auto result_14 = f13_generated_compute(lane_14_f12);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<80> lane_15_f12;
  set_at<0, 80, 80>(lane_15_f12, f12.extract<1200, 1279>());
  auto result_15 = f13_generated_compute(lane_15_f12);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<80> lane_16_f12;
  set_at<0, 80, 80>(lane_16_f12, f12.extract<1280, 1359>());
  auto result_16 = f13_generated_compute(lane_16_f12);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<80> lane_17_f12;
  set_at<0, 80, 80>(lane_17_f12, f12.extract<1360, 1439>());
  auto result_17 = f13_generated_compute(lane_17_f12);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<80> lane_18_f12;
  set_at<0, 80, 80>(lane_18_f12, f12.extract<1440, 1519>());
  auto result_18 = f13_generated_compute(lane_18_f12);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<80> lane_19_f12;
  set_at<0, 80, 80>(lane_19_f12, f12.extract<1520, 1599>());
  auto result_19 = f13_generated_compute(lane_19_f12);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<80> lane_20_f12;
  set_at<0, 80, 80>(lane_20_f12, f12.extract<1600, 1679>());
  auto result_20 = f13_generated_compute(lane_20_f12);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<80> lane_21_f12;
  set_at<0, 80, 80>(lane_21_f12, f12.extract<1680, 1759>());
  auto result_21 = f13_generated_compute(lane_21_f12);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<80> lane_22_f12;
  set_at<0, 80, 80>(lane_22_f12, f12.extract<1760, 1839>());
  auto result_22 = f13_generated_compute(lane_22_f12);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<80> lane_23_f12;
  set_at<0, 80, 80>(lane_23_f12, f12.extract<1840, 1919>());
  auto result_23 = f13_generated_compute(lane_23_f12);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<80> lane_24_f12;
  set_at<0, 80, 80>(lane_24_f12, f12.extract<1920, 1999>());
  auto result_24 = f13_generated_compute(lane_24_f12);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<80> lane_25_f12;
  set_at<0, 80, 80>(lane_25_f12, f12.extract<2000, 2079>());
  auto result_25 = f13_generated_compute(lane_25_f12);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<80> lane_26_f12;
  set_at<0, 80, 80>(lane_26_f12, f12.extract<2080, 2159>());
  auto result_26 = f13_generated_compute(lane_26_f12);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<80> lane_27_f12;
  set_at<0, 80, 80>(lane_27_f12, f12.extract<2160, 2239>());
  auto result_27 = f13_generated_compute(lane_27_f12);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<80> lane_28_f12;
  set_at<0, 80, 80>(lane_28_f12, f12.extract<2240, 2319>());
  auto result_28 = f13_generated_compute(lane_28_f12);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<80> lane_29_f12;
  set_at<0, 80, 80>(lane_29_f12, f12.extract<2320, 2399>());
  auto result_29 = f13_generated_compute(lane_29_f12);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<80> lane_30_f12;
  set_at<0, 80, 80>(lane_30_f12, f12.extract<2400, 2479>());
  auto result_30 = f13_generated_compute(lane_30_f12);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<80> lane_31_f12;
  set_at<0, 80, 80>(lane_31_f12, f12.extract<2480, 2559>());
  auto result_31 = f13_generated_compute(lane_31_f12);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // f03_update_0 unroll factor: 32
hw_uint<512>  f03_generated_compute_unrolled_32(hw_uint<2560>& f02) {
  hw_uint<512> whole_result;

  hw_uint<80> lane_0_f02;
  set_at<0, 80, 80>(lane_0_f02, f02.extract<0, 79>());
  auto result_0 = f03_generated_compute(lane_0_f02);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<80> lane_1_f02;
  set_at<0, 80, 80>(lane_1_f02, f02.extract<80, 159>());
  auto result_1 = f03_generated_compute(lane_1_f02);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<80> lane_2_f02;
  set_at<0, 80, 80>(lane_2_f02, f02.extract<160, 239>());
  auto result_2 = f03_generated_compute(lane_2_f02);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<80> lane_3_f02;
  set_at<0, 80, 80>(lane_3_f02, f02.extract<240, 319>());
  auto result_3 = f03_generated_compute(lane_3_f02);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<80> lane_4_f02;
  set_at<0, 80, 80>(lane_4_f02, f02.extract<320, 399>());
  auto result_4 = f03_generated_compute(lane_4_f02);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<80> lane_5_f02;
  set_at<0, 80, 80>(lane_5_f02, f02.extract<400, 479>());
  auto result_5 = f03_generated_compute(lane_5_f02);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<80> lane_6_f02;
  set_at<0, 80, 80>(lane_6_f02, f02.extract<480, 559>());
  auto result_6 = f03_generated_compute(lane_6_f02);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<80> lane_7_f02;
  set_at<0, 80, 80>(lane_7_f02, f02.extract<560, 639>());
  auto result_7 = f03_generated_compute(lane_7_f02);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<80> lane_8_f02;
  set_at<0, 80, 80>(lane_8_f02, f02.extract<640, 719>());
  auto result_8 = f03_generated_compute(lane_8_f02);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<80> lane_9_f02;
  set_at<0, 80, 80>(lane_9_f02, f02.extract<720, 799>());
  auto result_9 = f03_generated_compute(lane_9_f02);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<80> lane_10_f02;
  set_at<0, 80, 80>(lane_10_f02, f02.extract<800, 879>());
  auto result_10 = f03_generated_compute(lane_10_f02);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<80> lane_11_f02;
  set_at<0, 80, 80>(lane_11_f02, f02.extract<880, 959>());
  auto result_11 = f03_generated_compute(lane_11_f02);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<80> lane_12_f02;
  set_at<0, 80, 80>(lane_12_f02, f02.extract<960, 1039>());
  auto result_12 = f03_generated_compute(lane_12_f02);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<80> lane_13_f02;
  set_at<0, 80, 80>(lane_13_f02, f02.extract<1040, 1119>());
  auto result_13 = f03_generated_compute(lane_13_f02);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<80> lane_14_f02;
  set_at<0, 80, 80>(lane_14_f02, f02.extract<1120, 1199>());
  auto result_14 = f03_generated_compute(lane_14_f02);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<80> lane_15_f02;
  set_at<0, 80, 80>(lane_15_f02, f02.extract<1200, 1279>());
  auto result_15 = f03_generated_compute(lane_15_f02);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<80> lane_16_f02;
  set_at<0, 80, 80>(lane_16_f02, f02.extract<1280, 1359>());
  auto result_16 = f03_generated_compute(lane_16_f02);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<80> lane_17_f02;
  set_at<0, 80, 80>(lane_17_f02, f02.extract<1360, 1439>());
  auto result_17 = f03_generated_compute(lane_17_f02);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<80> lane_18_f02;
  set_at<0, 80, 80>(lane_18_f02, f02.extract<1440, 1519>());
  auto result_18 = f03_generated_compute(lane_18_f02);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<80> lane_19_f02;
  set_at<0, 80, 80>(lane_19_f02, f02.extract<1520, 1599>());
  auto result_19 = f03_generated_compute(lane_19_f02);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<80> lane_20_f02;
  set_at<0, 80, 80>(lane_20_f02, f02.extract<1600, 1679>());
  auto result_20 = f03_generated_compute(lane_20_f02);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<80> lane_21_f02;
  set_at<0, 80, 80>(lane_21_f02, f02.extract<1680, 1759>());
  auto result_21 = f03_generated_compute(lane_21_f02);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<80> lane_22_f02;
  set_at<0, 80, 80>(lane_22_f02, f02.extract<1760, 1839>());
  auto result_22 = f03_generated_compute(lane_22_f02);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<80> lane_23_f02;
  set_at<0, 80, 80>(lane_23_f02, f02.extract<1840, 1919>());
  auto result_23 = f03_generated_compute(lane_23_f02);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<80> lane_24_f02;
  set_at<0, 80, 80>(lane_24_f02, f02.extract<1920, 1999>());
  auto result_24 = f03_generated_compute(lane_24_f02);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<80> lane_25_f02;
  set_at<0, 80, 80>(lane_25_f02, f02.extract<2000, 2079>());
  auto result_25 = f03_generated_compute(lane_25_f02);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<80> lane_26_f02;
  set_at<0, 80, 80>(lane_26_f02, f02.extract<2080, 2159>());
  auto result_26 = f03_generated_compute(lane_26_f02);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<80> lane_27_f02;
  set_at<0, 80, 80>(lane_27_f02, f02.extract<2160, 2239>());
  auto result_27 = f03_generated_compute(lane_27_f02);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<80> lane_28_f02;
  set_at<0, 80, 80>(lane_28_f02, f02.extract<2240, 2319>());
  auto result_28 = f03_generated_compute(lane_28_f02);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<80> lane_29_f02;
  set_at<0, 80, 80>(lane_29_f02, f02.extract<2320, 2399>());
  auto result_29 = f03_generated_compute(lane_29_f02);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<80> lane_30_f02;
  set_at<0, 80, 80>(lane_30_f02, f02.extract<2400, 2479>());
  auto result_30 = f03_generated_compute(lane_30_f02);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<80> lane_31_f02;
  set_at<0, 80, 80>(lane_31_f02, f02.extract<2480, 2559>());
  auto result_31 = f03_generated_compute(lane_31_f02);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // f24_update_0 unroll factor: 32
hw_uint<512>  f24_generated_compute_unrolled_32(hw_uint<2560>& f23) {
  hw_uint<512> whole_result;

  hw_uint<80> lane_0_f23;
  set_at<0, 80, 80>(lane_0_f23, f23.extract<0, 79>());
  auto result_0 = f24_generated_compute(lane_0_f23);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<80> lane_1_f23;
  set_at<0, 80, 80>(lane_1_f23, f23.extract<80, 159>());
  auto result_1 = f24_generated_compute(lane_1_f23);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<80> lane_2_f23;
  set_at<0, 80, 80>(lane_2_f23, f23.extract<160, 239>());
  auto result_2 = f24_generated_compute(lane_2_f23);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<80> lane_3_f23;
  set_at<0, 80, 80>(lane_3_f23, f23.extract<240, 319>());
  auto result_3 = f24_generated_compute(lane_3_f23);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<80> lane_4_f23;
  set_at<0, 80, 80>(lane_4_f23, f23.extract<320, 399>());
  auto result_4 = f24_generated_compute(lane_4_f23);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<80> lane_5_f23;
  set_at<0, 80, 80>(lane_5_f23, f23.extract<400, 479>());
  auto result_5 = f24_generated_compute(lane_5_f23);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<80> lane_6_f23;
  set_at<0, 80, 80>(lane_6_f23, f23.extract<480, 559>());
  auto result_6 = f24_generated_compute(lane_6_f23);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<80> lane_7_f23;
  set_at<0, 80, 80>(lane_7_f23, f23.extract<560, 639>());
  auto result_7 = f24_generated_compute(lane_7_f23);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<80> lane_8_f23;
  set_at<0, 80, 80>(lane_8_f23, f23.extract<640, 719>());
  auto result_8 = f24_generated_compute(lane_8_f23);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<80> lane_9_f23;
  set_at<0, 80, 80>(lane_9_f23, f23.extract<720, 799>());
  auto result_9 = f24_generated_compute(lane_9_f23);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<80> lane_10_f23;
  set_at<0, 80, 80>(lane_10_f23, f23.extract<800, 879>());
  auto result_10 = f24_generated_compute(lane_10_f23);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<80> lane_11_f23;
  set_at<0, 80, 80>(lane_11_f23, f23.extract<880, 959>());
  auto result_11 = f24_generated_compute(lane_11_f23);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<80> lane_12_f23;
  set_at<0, 80, 80>(lane_12_f23, f23.extract<960, 1039>());
  auto result_12 = f24_generated_compute(lane_12_f23);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<80> lane_13_f23;
  set_at<0, 80, 80>(lane_13_f23, f23.extract<1040, 1119>());
  auto result_13 = f24_generated_compute(lane_13_f23);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<80> lane_14_f23;
  set_at<0, 80, 80>(lane_14_f23, f23.extract<1120, 1199>());
  auto result_14 = f24_generated_compute(lane_14_f23);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<80> lane_15_f23;
  set_at<0, 80, 80>(lane_15_f23, f23.extract<1200, 1279>());
  auto result_15 = f24_generated_compute(lane_15_f23);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<80> lane_16_f23;
  set_at<0, 80, 80>(lane_16_f23, f23.extract<1280, 1359>());
  auto result_16 = f24_generated_compute(lane_16_f23);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<80> lane_17_f23;
  set_at<0, 80, 80>(lane_17_f23, f23.extract<1360, 1439>());
  auto result_17 = f24_generated_compute(lane_17_f23);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<80> lane_18_f23;
  set_at<0, 80, 80>(lane_18_f23, f23.extract<1440, 1519>());
  auto result_18 = f24_generated_compute(lane_18_f23);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<80> lane_19_f23;
  set_at<0, 80, 80>(lane_19_f23, f23.extract<1520, 1599>());
  auto result_19 = f24_generated_compute(lane_19_f23);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<80> lane_20_f23;
  set_at<0, 80, 80>(lane_20_f23, f23.extract<1600, 1679>());
  auto result_20 = f24_generated_compute(lane_20_f23);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<80> lane_21_f23;
  set_at<0, 80, 80>(lane_21_f23, f23.extract<1680, 1759>());
  auto result_21 = f24_generated_compute(lane_21_f23);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<80> lane_22_f23;
  set_at<0, 80, 80>(lane_22_f23, f23.extract<1760, 1839>());
  auto result_22 = f24_generated_compute(lane_22_f23);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<80> lane_23_f23;
  set_at<0, 80, 80>(lane_23_f23, f23.extract<1840, 1919>());
  auto result_23 = f24_generated_compute(lane_23_f23);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<80> lane_24_f23;
  set_at<0, 80, 80>(lane_24_f23, f23.extract<1920, 1999>());
  auto result_24 = f24_generated_compute(lane_24_f23);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<80> lane_25_f23;
  set_at<0, 80, 80>(lane_25_f23, f23.extract<2000, 2079>());
  auto result_25 = f24_generated_compute(lane_25_f23);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<80> lane_26_f23;
  set_at<0, 80, 80>(lane_26_f23, f23.extract<2080, 2159>());
  auto result_26 = f24_generated_compute(lane_26_f23);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<80> lane_27_f23;
  set_at<0, 80, 80>(lane_27_f23, f23.extract<2160, 2239>());
  auto result_27 = f24_generated_compute(lane_27_f23);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<80> lane_28_f23;
  set_at<0, 80, 80>(lane_28_f23, f23.extract<2240, 2319>());
  auto result_28 = f24_generated_compute(lane_28_f23);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<80> lane_29_f23;
  set_at<0, 80, 80>(lane_29_f23, f23.extract<2320, 2399>());
  auto result_29 = f24_generated_compute(lane_29_f23);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<80> lane_30_f23;
  set_at<0, 80, 80>(lane_30_f23, f23.extract<2400, 2479>());
  auto result_30 = f24_generated_compute(lane_30_f23);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<80> lane_31_f23;
  set_at<0, 80, 80>(lane_31_f23, f23.extract<2480, 2559>());
  auto result_31 = f24_generated_compute(lane_31_f23);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // f14_update_0 unroll factor: 32
hw_uint<512>  f14_generated_compute_unrolled_32(hw_uint<2560>& f13) {
  hw_uint<512> whole_result;

  hw_uint<80> lane_0_f13;
  set_at<0, 80, 80>(lane_0_f13, f13.extract<0, 79>());
  auto result_0 = f14_generated_compute(lane_0_f13);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<80> lane_1_f13;
  set_at<0, 80, 80>(lane_1_f13, f13.extract<80, 159>());
  auto result_1 = f14_generated_compute(lane_1_f13);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<80> lane_2_f13;
  set_at<0, 80, 80>(lane_2_f13, f13.extract<160, 239>());
  auto result_2 = f14_generated_compute(lane_2_f13);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<80> lane_3_f13;
  set_at<0, 80, 80>(lane_3_f13, f13.extract<240, 319>());
  auto result_3 = f14_generated_compute(lane_3_f13);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<80> lane_4_f13;
  set_at<0, 80, 80>(lane_4_f13, f13.extract<320, 399>());
  auto result_4 = f14_generated_compute(lane_4_f13);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<80> lane_5_f13;
  set_at<0, 80, 80>(lane_5_f13, f13.extract<400, 479>());
  auto result_5 = f14_generated_compute(lane_5_f13);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<80> lane_6_f13;
  set_at<0, 80, 80>(lane_6_f13, f13.extract<480, 559>());
  auto result_6 = f14_generated_compute(lane_6_f13);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<80> lane_7_f13;
  set_at<0, 80, 80>(lane_7_f13, f13.extract<560, 639>());
  auto result_7 = f14_generated_compute(lane_7_f13);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<80> lane_8_f13;
  set_at<0, 80, 80>(lane_8_f13, f13.extract<640, 719>());
  auto result_8 = f14_generated_compute(lane_8_f13);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<80> lane_9_f13;
  set_at<0, 80, 80>(lane_9_f13, f13.extract<720, 799>());
  auto result_9 = f14_generated_compute(lane_9_f13);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<80> lane_10_f13;
  set_at<0, 80, 80>(lane_10_f13, f13.extract<800, 879>());
  auto result_10 = f14_generated_compute(lane_10_f13);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<80> lane_11_f13;
  set_at<0, 80, 80>(lane_11_f13, f13.extract<880, 959>());
  auto result_11 = f14_generated_compute(lane_11_f13);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<80> lane_12_f13;
  set_at<0, 80, 80>(lane_12_f13, f13.extract<960, 1039>());
  auto result_12 = f14_generated_compute(lane_12_f13);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<80> lane_13_f13;
  set_at<0, 80, 80>(lane_13_f13, f13.extract<1040, 1119>());
  auto result_13 = f14_generated_compute(lane_13_f13);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<80> lane_14_f13;
  set_at<0, 80, 80>(lane_14_f13, f13.extract<1120, 1199>());
  auto result_14 = f14_generated_compute(lane_14_f13);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<80> lane_15_f13;
  set_at<0, 80, 80>(lane_15_f13, f13.extract<1200, 1279>());
  auto result_15 = f14_generated_compute(lane_15_f13);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<80> lane_16_f13;
  set_at<0, 80, 80>(lane_16_f13, f13.extract<1280, 1359>());
  auto result_16 = f14_generated_compute(lane_16_f13);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<80> lane_17_f13;
  set_at<0, 80, 80>(lane_17_f13, f13.extract<1360, 1439>());
  auto result_17 = f14_generated_compute(lane_17_f13);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<80> lane_18_f13;
  set_at<0, 80, 80>(lane_18_f13, f13.extract<1440, 1519>());
  auto result_18 = f14_generated_compute(lane_18_f13);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<80> lane_19_f13;
  set_at<0, 80, 80>(lane_19_f13, f13.extract<1520, 1599>());
  auto result_19 = f14_generated_compute(lane_19_f13);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<80> lane_20_f13;
  set_at<0, 80, 80>(lane_20_f13, f13.extract<1600, 1679>());
  auto result_20 = f14_generated_compute(lane_20_f13);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<80> lane_21_f13;
  set_at<0, 80, 80>(lane_21_f13, f13.extract<1680, 1759>());
  auto result_21 = f14_generated_compute(lane_21_f13);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<80> lane_22_f13;
  set_at<0, 80, 80>(lane_22_f13, f13.extract<1760, 1839>());
  auto result_22 = f14_generated_compute(lane_22_f13);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<80> lane_23_f13;
  set_at<0, 80, 80>(lane_23_f13, f13.extract<1840, 1919>());
  auto result_23 = f14_generated_compute(lane_23_f13);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<80> lane_24_f13;
  set_at<0, 80, 80>(lane_24_f13, f13.extract<1920, 1999>());
  auto result_24 = f14_generated_compute(lane_24_f13);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<80> lane_25_f13;
  set_at<0, 80, 80>(lane_25_f13, f13.extract<2000, 2079>());
  auto result_25 = f14_generated_compute(lane_25_f13);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<80> lane_26_f13;
  set_at<0, 80, 80>(lane_26_f13, f13.extract<2080, 2159>());
  auto result_26 = f14_generated_compute(lane_26_f13);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<80> lane_27_f13;
  set_at<0, 80, 80>(lane_27_f13, f13.extract<2160, 2239>());
  auto result_27 = f14_generated_compute(lane_27_f13);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<80> lane_28_f13;
  set_at<0, 80, 80>(lane_28_f13, f13.extract<2240, 2319>());
  auto result_28 = f14_generated_compute(lane_28_f13);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<80> lane_29_f13;
  set_at<0, 80, 80>(lane_29_f13, f13.extract<2320, 2399>());
  auto result_29 = f14_generated_compute(lane_29_f13);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<80> lane_30_f13;
  set_at<0, 80, 80>(lane_30_f13, f13.extract<2400, 2479>());
  auto result_30 = f14_generated_compute(lane_30_f13);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<80> lane_31_f13;
  set_at<0, 80, 80>(lane_31_f13, f13.extract<2480, 2559>());
  auto result_31 = f14_generated_compute(lane_31_f13);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // f04_update_0 unroll factor: 32
hw_uint<512>  f04_generated_compute_unrolled_32(hw_uint<2560>& f03) {
  hw_uint<512> whole_result;

  hw_uint<80> lane_0_f03;
  set_at<0, 80, 80>(lane_0_f03, f03.extract<0, 79>());
  auto result_0 = f04_generated_compute(lane_0_f03);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<80> lane_1_f03;
  set_at<0, 80, 80>(lane_1_f03, f03.extract<80, 159>());
  auto result_1 = f04_generated_compute(lane_1_f03);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<80> lane_2_f03;
  set_at<0, 80, 80>(lane_2_f03, f03.extract<160, 239>());
  auto result_2 = f04_generated_compute(lane_2_f03);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<80> lane_3_f03;
  set_at<0, 80, 80>(lane_3_f03, f03.extract<240, 319>());
  auto result_3 = f04_generated_compute(lane_3_f03);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<80> lane_4_f03;
  set_at<0, 80, 80>(lane_4_f03, f03.extract<320, 399>());
  auto result_4 = f04_generated_compute(lane_4_f03);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<80> lane_5_f03;
  set_at<0, 80, 80>(lane_5_f03, f03.extract<400, 479>());
  auto result_5 = f04_generated_compute(lane_5_f03);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<80> lane_6_f03;
  set_at<0, 80, 80>(lane_6_f03, f03.extract<480, 559>());
  auto result_6 = f04_generated_compute(lane_6_f03);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<80> lane_7_f03;
  set_at<0, 80, 80>(lane_7_f03, f03.extract<560, 639>());
  auto result_7 = f04_generated_compute(lane_7_f03);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<80> lane_8_f03;
  set_at<0, 80, 80>(lane_8_f03, f03.extract<640, 719>());
  auto result_8 = f04_generated_compute(lane_8_f03);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<80> lane_9_f03;
  set_at<0, 80, 80>(lane_9_f03, f03.extract<720, 799>());
  auto result_9 = f04_generated_compute(lane_9_f03);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<80> lane_10_f03;
  set_at<0, 80, 80>(lane_10_f03, f03.extract<800, 879>());
  auto result_10 = f04_generated_compute(lane_10_f03);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<80> lane_11_f03;
  set_at<0, 80, 80>(lane_11_f03, f03.extract<880, 959>());
  auto result_11 = f04_generated_compute(lane_11_f03);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<80> lane_12_f03;
  set_at<0, 80, 80>(lane_12_f03, f03.extract<960, 1039>());
  auto result_12 = f04_generated_compute(lane_12_f03);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<80> lane_13_f03;
  set_at<0, 80, 80>(lane_13_f03, f03.extract<1040, 1119>());
  auto result_13 = f04_generated_compute(lane_13_f03);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<80> lane_14_f03;
  set_at<0, 80, 80>(lane_14_f03, f03.extract<1120, 1199>());
  auto result_14 = f04_generated_compute(lane_14_f03);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<80> lane_15_f03;
  set_at<0, 80, 80>(lane_15_f03, f03.extract<1200, 1279>());
  auto result_15 = f04_generated_compute(lane_15_f03);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<80> lane_16_f03;
  set_at<0, 80, 80>(lane_16_f03, f03.extract<1280, 1359>());
  auto result_16 = f04_generated_compute(lane_16_f03);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<80> lane_17_f03;
  set_at<0, 80, 80>(lane_17_f03, f03.extract<1360, 1439>());
  auto result_17 = f04_generated_compute(lane_17_f03);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<80> lane_18_f03;
  set_at<0, 80, 80>(lane_18_f03, f03.extract<1440, 1519>());
  auto result_18 = f04_generated_compute(lane_18_f03);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<80> lane_19_f03;
  set_at<0, 80, 80>(lane_19_f03, f03.extract<1520, 1599>());
  auto result_19 = f04_generated_compute(lane_19_f03);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<80> lane_20_f03;
  set_at<0, 80, 80>(lane_20_f03, f03.extract<1600, 1679>());
  auto result_20 = f04_generated_compute(lane_20_f03);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<80> lane_21_f03;
  set_at<0, 80, 80>(lane_21_f03, f03.extract<1680, 1759>());
  auto result_21 = f04_generated_compute(lane_21_f03);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<80> lane_22_f03;
  set_at<0, 80, 80>(lane_22_f03, f03.extract<1760, 1839>());
  auto result_22 = f04_generated_compute(lane_22_f03);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<80> lane_23_f03;
  set_at<0, 80, 80>(lane_23_f03, f03.extract<1840, 1919>());
  auto result_23 = f04_generated_compute(lane_23_f03);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<80> lane_24_f03;
  set_at<0, 80, 80>(lane_24_f03, f03.extract<1920, 1999>());
  auto result_24 = f04_generated_compute(lane_24_f03);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<80> lane_25_f03;
  set_at<0, 80, 80>(lane_25_f03, f03.extract<2000, 2079>());
  auto result_25 = f04_generated_compute(lane_25_f03);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<80> lane_26_f03;
  set_at<0, 80, 80>(lane_26_f03, f03.extract<2080, 2159>());
  auto result_26 = f04_generated_compute(lane_26_f03);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<80> lane_27_f03;
  set_at<0, 80, 80>(lane_27_f03, f03.extract<2160, 2239>());
  auto result_27 = f04_generated_compute(lane_27_f03);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<80> lane_28_f03;
  set_at<0, 80, 80>(lane_28_f03, f03.extract<2240, 2319>());
  auto result_28 = f04_generated_compute(lane_28_f03);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<80> lane_29_f03;
  set_at<0, 80, 80>(lane_29_f03, f03.extract<2320, 2399>());
  auto result_29 = f04_generated_compute(lane_29_f03);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<80> lane_30_f03;
  set_at<0, 80, 80>(lane_30_f03, f03.extract<2400, 2479>());
  auto result_30 = f04_generated_compute(lane_30_f03);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<80> lane_31_f03;
  set_at<0, 80, 80>(lane_31_f03, f03.extract<2480, 2559>());
  auto result_31 = f04_generated_compute(lane_31_f03);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // final_update_0 unroll factor: 32
hw_uint<512>  final_generated_compute_unrolled_32(hw_uint<512>& f04, hw_uint<512>& f14, hw_uint<512>& f24) {
  hw_uint<512> whole_result;

  hw_uint<16> lane_0_f04;
  set_at<0, 16, 16>(lane_0_f04, f04.extract<0, 15>());
  hw_uint<16> lane_0_f14;
  set_at<0, 16, 16>(lane_0_f14, f14.extract<0, 15>());
  hw_uint<16> lane_0_f24;
  set_at<0, 16, 16>(lane_0_f24, f24.extract<0, 15>());
  auto result_0 = final_generated_compute(lane_0_f04, lane_0_f14, lane_0_f24);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<16> lane_1_f04;
  set_at<0, 16, 16>(lane_1_f04, f04.extract<16, 31>());
  hw_uint<16> lane_1_f14;
  set_at<0, 16, 16>(lane_1_f14, f14.extract<16, 31>());
  hw_uint<16> lane_1_f24;
  set_at<0, 16, 16>(lane_1_f24, f24.extract<16, 31>());
  auto result_1 = final_generated_compute(lane_1_f04, lane_1_f14, lane_1_f24);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<16> lane_2_f04;
  set_at<0, 16, 16>(lane_2_f04, f04.extract<32, 47>());
  hw_uint<16> lane_2_f14;
  set_at<0, 16, 16>(lane_2_f14, f14.extract<32, 47>());
  hw_uint<16> lane_2_f24;
  set_at<0, 16, 16>(lane_2_f24, f24.extract<32, 47>());
  auto result_2 = final_generated_compute(lane_2_f04, lane_2_f14, lane_2_f24);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<16> lane_3_f04;
  set_at<0, 16, 16>(lane_3_f04, f04.extract<48, 63>());
  hw_uint<16> lane_3_f14;
  set_at<0, 16, 16>(lane_3_f14, f14.extract<48, 63>());
  hw_uint<16> lane_3_f24;
  set_at<0, 16, 16>(lane_3_f24, f24.extract<48, 63>());
  auto result_3 = final_generated_compute(lane_3_f04, lane_3_f14, lane_3_f24);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<16> lane_4_f04;
  set_at<0, 16, 16>(lane_4_f04, f04.extract<64, 79>());
  hw_uint<16> lane_4_f14;
  set_at<0, 16, 16>(lane_4_f14, f14.extract<64, 79>());
  hw_uint<16> lane_4_f24;
  set_at<0, 16, 16>(lane_4_f24, f24.extract<64, 79>());
  auto result_4 = final_generated_compute(lane_4_f04, lane_4_f14, lane_4_f24);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<16> lane_5_f04;
  set_at<0, 16, 16>(lane_5_f04, f04.extract<80, 95>());
  hw_uint<16> lane_5_f14;
  set_at<0, 16, 16>(lane_5_f14, f14.extract<80, 95>());
  hw_uint<16> lane_5_f24;
  set_at<0, 16, 16>(lane_5_f24, f24.extract<80, 95>());
  auto result_5 = final_generated_compute(lane_5_f04, lane_5_f14, lane_5_f24);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<16> lane_6_f04;
  set_at<0, 16, 16>(lane_6_f04, f04.extract<96, 111>());
  hw_uint<16> lane_6_f14;
  set_at<0, 16, 16>(lane_6_f14, f14.extract<96, 111>());
  hw_uint<16> lane_6_f24;
  set_at<0, 16, 16>(lane_6_f24, f24.extract<96, 111>());
  auto result_6 = final_generated_compute(lane_6_f04, lane_6_f14, lane_6_f24);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<16> lane_7_f04;
  set_at<0, 16, 16>(lane_7_f04, f04.extract<112, 127>());
  hw_uint<16> lane_7_f14;
  set_at<0, 16, 16>(lane_7_f14, f14.extract<112, 127>());
  hw_uint<16> lane_7_f24;
  set_at<0, 16, 16>(lane_7_f24, f24.extract<112, 127>());
  auto result_7 = final_generated_compute(lane_7_f04, lane_7_f14, lane_7_f24);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<16> lane_8_f04;
  set_at<0, 16, 16>(lane_8_f04, f04.extract<128, 143>());
  hw_uint<16> lane_8_f14;
  set_at<0, 16, 16>(lane_8_f14, f14.extract<128, 143>());
  hw_uint<16> lane_8_f24;
  set_at<0, 16, 16>(lane_8_f24, f24.extract<128, 143>());
  auto result_8 = final_generated_compute(lane_8_f04, lane_8_f14, lane_8_f24);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<16> lane_9_f04;
  set_at<0, 16, 16>(lane_9_f04, f04.extract<144, 159>());
  hw_uint<16> lane_9_f14;
  set_at<0, 16, 16>(lane_9_f14, f14.extract<144, 159>());
  hw_uint<16> lane_9_f24;
  set_at<0, 16, 16>(lane_9_f24, f24.extract<144, 159>());
  auto result_9 = final_generated_compute(lane_9_f04, lane_9_f14, lane_9_f24);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<16> lane_10_f04;
  set_at<0, 16, 16>(lane_10_f04, f04.extract<160, 175>());
  hw_uint<16> lane_10_f14;
  set_at<0, 16, 16>(lane_10_f14, f14.extract<160, 175>());
  hw_uint<16> lane_10_f24;
  set_at<0, 16, 16>(lane_10_f24, f24.extract<160, 175>());
  auto result_10 = final_generated_compute(lane_10_f04, lane_10_f14, lane_10_f24);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<16> lane_11_f04;
  set_at<0, 16, 16>(lane_11_f04, f04.extract<176, 191>());
  hw_uint<16> lane_11_f14;
  set_at<0, 16, 16>(lane_11_f14, f14.extract<176, 191>());
  hw_uint<16> lane_11_f24;
  set_at<0, 16, 16>(lane_11_f24, f24.extract<176, 191>());
  auto result_11 = final_generated_compute(lane_11_f04, lane_11_f14, lane_11_f24);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<16> lane_12_f04;
  set_at<0, 16, 16>(lane_12_f04, f04.extract<192, 207>());
  hw_uint<16> lane_12_f14;
  set_at<0, 16, 16>(lane_12_f14, f14.extract<192, 207>());
  hw_uint<16> lane_12_f24;
  set_at<0, 16, 16>(lane_12_f24, f24.extract<192, 207>());
  auto result_12 = final_generated_compute(lane_12_f04, lane_12_f14, lane_12_f24);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<16> lane_13_f04;
  set_at<0, 16, 16>(lane_13_f04, f04.extract<208, 223>());
  hw_uint<16> lane_13_f14;
  set_at<0, 16, 16>(lane_13_f14, f14.extract<208, 223>());
  hw_uint<16> lane_13_f24;
  set_at<0, 16, 16>(lane_13_f24, f24.extract<208, 223>());
  auto result_13 = final_generated_compute(lane_13_f04, lane_13_f14, lane_13_f24);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<16> lane_14_f04;
  set_at<0, 16, 16>(lane_14_f04, f04.extract<224, 239>());
  hw_uint<16> lane_14_f14;
  set_at<0, 16, 16>(lane_14_f14, f14.extract<224, 239>());
  hw_uint<16> lane_14_f24;
  set_at<0, 16, 16>(lane_14_f24, f24.extract<224, 239>());
  auto result_14 = final_generated_compute(lane_14_f04, lane_14_f14, lane_14_f24);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<16> lane_15_f04;
  set_at<0, 16, 16>(lane_15_f04, f04.extract<240, 255>());
  hw_uint<16> lane_15_f14;
  set_at<0, 16, 16>(lane_15_f14, f14.extract<240, 255>());
  hw_uint<16> lane_15_f24;
  set_at<0, 16, 16>(lane_15_f24, f24.extract<240, 255>());
  auto result_15 = final_generated_compute(lane_15_f04, lane_15_f14, lane_15_f24);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<16> lane_16_f04;
  set_at<0, 16, 16>(lane_16_f04, f04.extract<256, 271>());
  hw_uint<16> lane_16_f14;
  set_at<0, 16, 16>(lane_16_f14, f14.extract<256, 271>());
  hw_uint<16> lane_16_f24;
  set_at<0, 16, 16>(lane_16_f24, f24.extract<256, 271>());
  auto result_16 = final_generated_compute(lane_16_f04, lane_16_f14, lane_16_f24);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<16> lane_17_f04;
  set_at<0, 16, 16>(lane_17_f04, f04.extract<272, 287>());
  hw_uint<16> lane_17_f14;
  set_at<0, 16, 16>(lane_17_f14, f14.extract<272, 287>());
  hw_uint<16> lane_17_f24;
  set_at<0, 16, 16>(lane_17_f24, f24.extract<272, 287>());
  auto result_17 = final_generated_compute(lane_17_f04, lane_17_f14, lane_17_f24);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<16> lane_18_f04;
  set_at<0, 16, 16>(lane_18_f04, f04.extract<288, 303>());
  hw_uint<16> lane_18_f14;
  set_at<0, 16, 16>(lane_18_f14, f14.extract<288, 303>());
  hw_uint<16> lane_18_f24;
  set_at<0, 16, 16>(lane_18_f24, f24.extract<288, 303>());
  auto result_18 = final_generated_compute(lane_18_f04, lane_18_f14, lane_18_f24);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<16> lane_19_f04;
  set_at<0, 16, 16>(lane_19_f04, f04.extract<304, 319>());
  hw_uint<16> lane_19_f14;
  set_at<0, 16, 16>(lane_19_f14, f14.extract<304, 319>());
  hw_uint<16> lane_19_f24;
  set_at<0, 16, 16>(lane_19_f24, f24.extract<304, 319>());
  auto result_19 = final_generated_compute(lane_19_f04, lane_19_f14, lane_19_f24);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<16> lane_20_f04;
  set_at<0, 16, 16>(lane_20_f04, f04.extract<320, 335>());
  hw_uint<16> lane_20_f14;
  set_at<0, 16, 16>(lane_20_f14, f14.extract<320, 335>());
  hw_uint<16> lane_20_f24;
  set_at<0, 16, 16>(lane_20_f24, f24.extract<320, 335>());
  auto result_20 = final_generated_compute(lane_20_f04, lane_20_f14, lane_20_f24);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<16> lane_21_f04;
  set_at<0, 16, 16>(lane_21_f04, f04.extract<336, 351>());
  hw_uint<16> lane_21_f14;
  set_at<0, 16, 16>(lane_21_f14, f14.extract<336, 351>());
  hw_uint<16> lane_21_f24;
  set_at<0, 16, 16>(lane_21_f24, f24.extract<336, 351>());
  auto result_21 = final_generated_compute(lane_21_f04, lane_21_f14, lane_21_f24);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<16> lane_22_f04;
  set_at<0, 16, 16>(lane_22_f04, f04.extract<352, 367>());
  hw_uint<16> lane_22_f14;
  set_at<0, 16, 16>(lane_22_f14, f14.extract<352, 367>());
  hw_uint<16> lane_22_f24;
  set_at<0, 16, 16>(lane_22_f24, f24.extract<352, 367>());
  auto result_22 = final_generated_compute(lane_22_f04, lane_22_f14, lane_22_f24);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<16> lane_23_f04;
  set_at<0, 16, 16>(lane_23_f04, f04.extract<368, 383>());
  hw_uint<16> lane_23_f14;
  set_at<0, 16, 16>(lane_23_f14, f14.extract<368, 383>());
  hw_uint<16> lane_23_f24;
  set_at<0, 16, 16>(lane_23_f24, f24.extract<368, 383>());
  auto result_23 = final_generated_compute(lane_23_f04, lane_23_f14, lane_23_f24);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<16> lane_24_f04;
  set_at<0, 16, 16>(lane_24_f04, f04.extract<384, 399>());
  hw_uint<16> lane_24_f14;
  set_at<0, 16, 16>(lane_24_f14, f14.extract<384, 399>());
  hw_uint<16> lane_24_f24;
  set_at<0, 16, 16>(lane_24_f24, f24.extract<384, 399>());
  auto result_24 = final_generated_compute(lane_24_f04, lane_24_f14, lane_24_f24);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<16> lane_25_f04;
  set_at<0, 16, 16>(lane_25_f04, f04.extract<400, 415>());
  hw_uint<16> lane_25_f14;
  set_at<0, 16, 16>(lane_25_f14, f14.extract<400, 415>());
  hw_uint<16> lane_25_f24;
  set_at<0, 16, 16>(lane_25_f24, f24.extract<400, 415>());
  auto result_25 = final_generated_compute(lane_25_f04, lane_25_f14, lane_25_f24);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<16> lane_26_f04;
  set_at<0, 16, 16>(lane_26_f04, f04.extract<416, 431>());
  hw_uint<16> lane_26_f14;
  set_at<0, 16, 16>(lane_26_f14, f14.extract<416, 431>());
  hw_uint<16> lane_26_f24;
  set_at<0, 16, 16>(lane_26_f24, f24.extract<416, 431>());
  auto result_26 = final_generated_compute(lane_26_f04, lane_26_f14, lane_26_f24);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<16> lane_27_f04;
  set_at<0, 16, 16>(lane_27_f04, f04.extract<432, 447>());
  hw_uint<16> lane_27_f14;
  set_at<0, 16, 16>(lane_27_f14, f14.extract<432, 447>());
  hw_uint<16> lane_27_f24;
  set_at<0, 16, 16>(lane_27_f24, f24.extract<432, 447>());
  auto result_27 = final_generated_compute(lane_27_f04, lane_27_f14, lane_27_f24);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<16> lane_28_f04;
  set_at<0, 16, 16>(lane_28_f04, f04.extract<448, 463>());
  hw_uint<16> lane_28_f14;
  set_at<0, 16, 16>(lane_28_f14, f14.extract<448, 463>());
  hw_uint<16> lane_28_f24;
  set_at<0, 16, 16>(lane_28_f24, f24.extract<448, 463>());
  auto result_28 = final_generated_compute(lane_28_f04, lane_28_f14, lane_28_f24);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<16> lane_29_f04;
  set_at<0, 16, 16>(lane_29_f04, f04.extract<464, 479>());
  hw_uint<16> lane_29_f14;
  set_at<0, 16, 16>(lane_29_f14, f14.extract<464, 479>());
  hw_uint<16> lane_29_f24;
  set_at<0, 16, 16>(lane_29_f24, f24.extract<464, 479>());
  auto result_29 = final_generated_compute(lane_29_f04, lane_29_f14, lane_29_f24);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<16> lane_30_f04;
  set_at<0, 16, 16>(lane_30_f04, f04.extract<480, 495>());
  hw_uint<16> lane_30_f14;
  set_at<0, 16, 16>(lane_30_f14, f14.extract<480, 495>());
  hw_uint<16> lane_30_f24;
  set_at<0, 16, 16>(lane_30_f24, f24.extract<480, 495>());
  auto result_30 = final_generated_compute(lane_30_f04, lane_30_f14, lane_30_f24);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<16> lane_31_f04;
  set_at<0, 16, 16>(lane_31_f04, f04.extract<496, 511>());
  hw_uint<16> lane_31_f14;
  set_at<0, 16, 16>(lane_31_f14, f14.extract<496, 511>());
  hw_uint<16> lane_31_f24;
  set_at<0, 16, 16>(lane_31_f24, f24.extract<496, 511>());
  auto result_31 = final_generated_compute(lane_31_f04, lane_31_f14, lane_31_f24);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // icfo_32_update_0 unroll factor: 32
hw_uint<512>  icfo_32_generated_compute_unrolled_32(hw_uint<512>& final) {
  hw_uint<512> whole_result;

  hw_uint<16> lane_0_final;
  set_at<0, 16, 16>(lane_0_final, final.extract<0, 15>());
  auto result_0 = icfo_32_generated_compute(lane_0_final);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<16> lane_1_final;
  set_at<0, 16, 16>(lane_1_final, final.extract<16, 31>());
  auto result_1 = icfo_32_generated_compute(lane_1_final);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<16> lane_2_final;
  set_at<0, 16, 16>(lane_2_final, final.extract<32, 47>());
  auto result_2 = icfo_32_generated_compute(lane_2_final);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<16> lane_3_final;
  set_at<0, 16, 16>(lane_3_final, final.extract<48, 63>());
  auto result_3 = icfo_32_generated_compute(lane_3_final);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<16> lane_4_final;
  set_at<0, 16, 16>(lane_4_final, final.extract<64, 79>());
  auto result_4 = icfo_32_generated_compute(lane_4_final);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<16> lane_5_final;
  set_at<0, 16, 16>(lane_5_final, final.extract<80, 95>());
  auto result_5 = icfo_32_generated_compute(lane_5_final);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<16> lane_6_final;
  set_at<0, 16, 16>(lane_6_final, final.extract<96, 111>());
  auto result_6 = icfo_32_generated_compute(lane_6_final);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<16> lane_7_final;
  set_at<0, 16, 16>(lane_7_final, final.extract<112, 127>());
  auto result_7 = icfo_32_generated_compute(lane_7_final);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<16> lane_8_final;
  set_at<0, 16, 16>(lane_8_final, final.extract<128, 143>());
  auto result_8 = icfo_32_generated_compute(lane_8_final);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<16> lane_9_final;
  set_at<0, 16, 16>(lane_9_final, final.extract<144, 159>());
  auto result_9 = icfo_32_generated_compute(lane_9_final);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<16> lane_10_final;
  set_at<0, 16, 16>(lane_10_final, final.extract<160, 175>());
  auto result_10 = icfo_32_generated_compute(lane_10_final);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<16> lane_11_final;
  set_at<0, 16, 16>(lane_11_final, final.extract<176, 191>());
  auto result_11 = icfo_32_generated_compute(lane_11_final);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<16> lane_12_final;
  set_at<0, 16, 16>(lane_12_final, final.extract<192, 207>());
  auto result_12 = icfo_32_generated_compute(lane_12_final);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<16> lane_13_final;
  set_at<0, 16, 16>(lane_13_final, final.extract<208, 223>());
  auto result_13 = icfo_32_generated_compute(lane_13_final);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<16> lane_14_final;
  set_at<0, 16, 16>(lane_14_final, final.extract<224, 239>());
  auto result_14 = icfo_32_generated_compute(lane_14_final);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<16> lane_15_final;
  set_at<0, 16, 16>(lane_15_final, final.extract<240, 255>());
  auto result_15 = icfo_32_generated_compute(lane_15_final);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<16> lane_16_final;
  set_at<0, 16, 16>(lane_16_final, final.extract<256, 271>());
  auto result_16 = icfo_32_generated_compute(lane_16_final);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<16> lane_17_final;
  set_at<0, 16, 16>(lane_17_final, final.extract<272, 287>());
  auto result_17 = icfo_32_generated_compute(lane_17_final);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<16> lane_18_final;
  set_at<0, 16, 16>(lane_18_final, final.extract<288, 303>());
  auto result_18 = icfo_32_generated_compute(lane_18_final);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<16> lane_19_final;
  set_at<0, 16, 16>(lane_19_final, final.extract<304, 319>());
  auto result_19 = icfo_32_generated_compute(lane_19_final);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<16> lane_20_final;
  set_at<0, 16, 16>(lane_20_final, final.extract<320, 335>());
  auto result_20 = icfo_32_generated_compute(lane_20_final);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<16> lane_21_final;
  set_at<0, 16, 16>(lane_21_final, final.extract<336, 351>());
  auto result_21 = icfo_32_generated_compute(lane_21_final);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<16> lane_22_final;
  set_at<0, 16, 16>(lane_22_final, final.extract<352, 367>());
  auto result_22 = icfo_32_generated_compute(lane_22_final);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<16> lane_23_final;
  set_at<0, 16, 16>(lane_23_final, final.extract<368, 383>());
  auto result_23 = icfo_32_generated_compute(lane_23_final);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<16> lane_24_final;
  set_at<0, 16, 16>(lane_24_final, final.extract<384, 399>());
  auto result_24 = icfo_32_generated_compute(lane_24_final);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<16> lane_25_final;
  set_at<0, 16, 16>(lane_25_final, final.extract<400, 415>());
  auto result_25 = icfo_32_generated_compute(lane_25_final);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<16> lane_26_final;
  set_at<0, 16, 16>(lane_26_final, final.extract<416, 431>());
  auto result_26 = icfo_32_generated_compute(lane_26_final);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<16> lane_27_final;
  set_at<0, 16, 16>(lane_27_final, final.extract<432, 447>());
  auto result_27 = icfo_32_generated_compute(lane_27_final);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<16> lane_28_final;
  set_at<0, 16, 16>(lane_28_final, final.extract<448, 463>());
  auto result_28 = icfo_32_generated_compute(lane_28_final);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<16> lane_29_final;
  set_at<0, 16, 16>(lane_29_final, final.extract<464, 479>());
  auto result_29 = icfo_32_generated_compute(lane_29_final);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<16> lane_30_final;
  set_at<0, 16, 16>(lane_30_final, final.extract<480, 495>());
  auto result_30 = icfo_32_generated_compute(lane_30_final);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<16> lane_31_final;
  set_at<0, 16, 16>(lane_31_final, final.extract<496, 511>());
  auto result_31 = icfo_32_generated_compute(lane_31_final);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

