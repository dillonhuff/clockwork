#pragma once

#include "conv_3x3.h"

// Generated compute units...


// Compute unit banks...
  // in_update_0 unroll factor: 32
hw_uint<512>  id_unrolled_32(hw_uint<512>& in_off_chip) {
  hw_uint<512> whole_result;

  hw_uint<16> lane_0_in_off_chip;
  set_at<0, 16, 16>(lane_0_in_off_chip, in_off_chip.extract<0, 15>());
  auto result_0 = id(lane_0_in_off_chip);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<16> lane_1_in_off_chip;
  set_at<0, 16, 16>(lane_1_in_off_chip, in_off_chip.extract<16, 31>());
  auto result_1 = id(lane_1_in_off_chip);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<16> lane_2_in_off_chip;
  set_at<0, 16, 16>(lane_2_in_off_chip, in_off_chip.extract<32, 47>());
  auto result_2 = id(lane_2_in_off_chip);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<16> lane_3_in_off_chip;
  set_at<0, 16, 16>(lane_3_in_off_chip, in_off_chip.extract<48, 63>());
  auto result_3 = id(lane_3_in_off_chip);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<16> lane_4_in_off_chip;
  set_at<0, 16, 16>(lane_4_in_off_chip, in_off_chip.extract<64, 79>());
  auto result_4 = id(lane_4_in_off_chip);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<16> lane_5_in_off_chip;
  set_at<0, 16, 16>(lane_5_in_off_chip, in_off_chip.extract<80, 95>());
  auto result_5 = id(lane_5_in_off_chip);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<16> lane_6_in_off_chip;
  set_at<0, 16, 16>(lane_6_in_off_chip, in_off_chip.extract<96, 111>());
  auto result_6 = id(lane_6_in_off_chip);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<16> lane_7_in_off_chip;
  set_at<0, 16, 16>(lane_7_in_off_chip, in_off_chip.extract<112, 127>());
  auto result_7 = id(lane_7_in_off_chip);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<16> lane_8_in_off_chip;
  set_at<0, 16, 16>(lane_8_in_off_chip, in_off_chip.extract<128, 143>());
  auto result_8 = id(lane_8_in_off_chip);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<16> lane_9_in_off_chip;
  set_at<0, 16, 16>(lane_9_in_off_chip, in_off_chip.extract<144, 159>());
  auto result_9 = id(lane_9_in_off_chip);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<16> lane_10_in_off_chip;
  set_at<0, 16, 16>(lane_10_in_off_chip, in_off_chip.extract<160, 175>());
  auto result_10 = id(lane_10_in_off_chip);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<16> lane_11_in_off_chip;
  set_at<0, 16, 16>(lane_11_in_off_chip, in_off_chip.extract<176, 191>());
  auto result_11 = id(lane_11_in_off_chip);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<16> lane_12_in_off_chip;
  set_at<0, 16, 16>(lane_12_in_off_chip, in_off_chip.extract<192, 207>());
  auto result_12 = id(lane_12_in_off_chip);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<16> lane_13_in_off_chip;
  set_at<0, 16, 16>(lane_13_in_off_chip, in_off_chip.extract<208, 223>());
  auto result_13 = id(lane_13_in_off_chip);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<16> lane_14_in_off_chip;
  set_at<0, 16, 16>(lane_14_in_off_chip, in_off_chip.extract<224, 239>());
  auto result_14 = id(lane_14_in_off_chip);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<16> lane_15_in_off_chip;
  set_at<0, 16, 16>(lane_15_in_off_chip, in_off_chip.extract<240, 255>());
  auto result_15 = id(lane_15_in_off_chip);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<16> lane_16_in_off_chip;
  set_at<0, 16, 16>(lane_16_in_off_chip, in_off_chip.extract<256, 271>());
  auto result_16 = id(lane_16_in_off_chip);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<16> lane_17_in_off_chip;
  set_at<0, 16, 16>(lane_17_in_off_chip, in_off_chip.extract<272, 287>());
  auto result_17 = id(lane_17_in_off_chip);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<16> lane_18_in_off_chip;
  set_at<0, 16, 16>(lane_18_in_off_chip, in_off_chip.extract<288, 303>());
  auto result_18 = id(lane_18_in_off_chip);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<16> lane_19_in_off_chip;
  set_at<0, 16, 16>(lane_19_in_off_chip, in_off_chip.extract<304, 319>());
  auto result_19 = id(lane_19_in_off_chip);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<16> lane_20_in_off_chip;
  set_at<0, 16, 16>(lane_20_in_off_chip, in_off_chip.extract<320, 335>());
  auto result_20 = id(lane_20_in_off_chip);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<16> lane_21_in_off_chip;
  set_at<0, 16, 16>(lane_21_in_off_chip, in_off_chip.extract<336, 351>());
  auto result_21 = id(lane_21_in_off_chip);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<16> lane_22_in_off_chip;
  set_at<0, 16, 16>(lane_22_in_off_chip, in_off_chip.extract<352, 367>());
  auto result_22 = id(lane_22_in_off_chip);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<16> lane_23_in_off_chip;
  set_at<0, 16, 16>(lane_23_in_off_chip, in_off_chip.extract<368, 383>());
  auto result_23 = id(lane_23_in_off_chip);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<16> lane_24_in_off_chip;
  set_at<0, 16, 16>(lane_24_in_off_chip, in_off_chip.extract<384, 399>());
  auto result_24 = id(lane_24_in_off_chip);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<16> lane_25_in_off_chip;
  set_at<0, 16, 16>(lane_25_in_off_chip, in_off_chip.extract<400, 415>());
  auto result_25 = id(lane_25_in_off_chip);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<16> lane_26_in_off_chip;
  set_at<0, 16, 16>(lane_26_in_off_chip, in_off_chip.extract<416, 431>());
  auto result_26 = id(lane_26_in_off_chip);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<16> lane_27_in_off_chip;
  set_at<0, 16, 16>(lane_27_in_off_chip, in_off_chip.extract<432, 447>());
  auto result_27 = id(lane_27_in_off_chip);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<16> lane_28_in_off_chip;
  set_at<0, 16, 16>(lane_28_in_off_chip, in_off_chip.extract<448, 463>());
  auto result_28 = id(lane_28_in_off_chip);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<16> lane_29_in_off_chip;
  set_at<0, 16, 16>(lane_29_in_off_chip, in_off_chip.extract<464, 479>());
  auto result_29 = id(lane_29_in_off_chip);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<16> lane_30_in_off_chip;
  set_at<0, 16, 16>(lane_30_in_off_chip, in_off_chip.extract<480, 495>());
  auto result_30 = id(lane_30_in_off_chip);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<16> lane_31_in_off_chip;
  set_at<0, 16, 16>(lane_31_in_off_chip, in_off_chip.extract<496, 511>());
  auto result_31 = id(lane_31_in_off_chip);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // dark_update_0 unroll factor: 32
hw_uint<512>  scale_exposure_unrolled_32(hw_uint<512>& in) {
  hw_uint<512> whole_result;

  hw_uint<16> lane_0_in;
  set_at<0, 16, 16>(lane_0_in, in.extract<0, 15>());
  auto result_0 = scale_exposure(lane_0_in);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<16> lane_1_in;
  set_at<0, 16, 16>(lane_1_in, in.extract<16, 31>());
  auto result_1 = scale_exposure(lane_1_in);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<16> lane_2_in;
  set_at<0, 16, 16>(lane_2_in, in.extract<32, 47>());
  auto result_2 = scale_exposure(lane_2_in);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<16> lane_3_in;
  set_at<0, 16, 16>(lane_3_in, in.extract<48, 63>());
  auto result_3 = scale_exposure(lane_3_in);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<16> lane_4_in;
  set_at<0, 16, 16>(lane_4_in, in.extract<64, 79>());
  auto result_4 = scale_exposure(lane_4_in);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<16> lane_5_in;
  set_at<0, 16, 16>(lane_5_in, in.extract<80, 95>());
  auto result_5 = scale_exposure(lane_5_in);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<16> lane_6_in;
  set_at<0, 16, 16>(lane_6_in, in.extract<96, 111>());
  auto result_6 = scale_exposure(lane_6_in);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<16> lane_7_in;
  set_at<0, 16, 16>(lane_7_in, in.extract<112, 127>());
  auto result_7 = scale_exposure(lane_7_in);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<16> lane_8_in;
  set_at<0, 16, 16>(lane_8_in, in.extract<128, 143>());
  auto result_8 = scale_exposure(lane_8_in);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<16> lane_9_in;
  set_at<0, 16, 16>(lane_9_in, in.extract<144, 159>());
  auto result_9 = scale_exposure(lane_9_in);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<16> lane_10_in;
  set_at<0, 16, 16>(lane_10_in, in.extract<160, 175>());
  auto result_10 = scale_exposure(lane_10_in);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<16> lane_11_in;
  set_at<0, 16, 16>(lane_11_in, in.extract<176, 191>());
  auto result_11 = scale_exposure(lane_11_in);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<16> lane_12_in;
  set_at<0, 16, 16>(lane_12_in, in.extract<192, 207>());
  auto result_12 = scale_exposure(lane_12_in);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<16> lane_13_in;
  set_at<0, 16, 16>(lane_13_in, in.extract<208, 223>());
  auto result_13 = scale_exposure(lane_13_in);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<16> lane_14_in;
  set_at<0, 16, 16>(lane_14_in, in.extract<224, 239>());
  auto result_14 = scale_exposure(lane_14_in);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<16> lane_15_in;
  set_at<0, 16, 16>(lane_15_in, in.extract<240, 255>());
  auto result_15 = scale_exposure(lane_15_in);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<16> lane_16_in;
  set_at<0, 16, 16>(lane_16_in, in.extract<256, 271>());
  auto result_16 = scale_exposure(lane_16_in);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<16> lane_17_in;
  set_at<0, 16, 16>(lane_17_in, in.extract<272, 287>());
  auto result_17 = scale_exposure(lane_17_in);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<16> lane_18_in;
  set_at<0, 16, 16>(lane_18_in, in.extract<288, 303>());
  auto result_18 = scale_exposure(lane_18_in);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<16> lane_19_in;
  set_at<0, 16, 16>(lane_19_in, in.extract<304, 319>());
  auto result_19 = scale_exposure(lane_19_in);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<16> lane_20_in;
  set_at<0, 16, 16>(lane_20_in, in.extract<320, 335>());
  auto result_20 = scale_exposure(lane_20_in);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<16> lane_21_in;
  set_at<0, 16, 16>(lane_21_in, in.extract<336, 351>());
  auto result_21 = scale_exposure(lane_21_in);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<16> lane_22_in;
  set_at<0, 16, 16>(lane_22_in, in.extract<352, 367>());
  auto result_22 = scale_exposure(lane_22_in);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<16> lane_23_in;
  set_at<0, 16, 16>(lane_23_in, in.extract<368, 383>());
  auto result_23 = scale_exposure(lane_23_in);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<16> lane_24_in;
  set_at<0, 16, 16>(lane_24_in, in.extract<384, 399>());
  auto result_24 = scale_exposure(lane_24_in);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<16> lane_25_in;
  set_at<0, 16, 16>(lane_25_in, in.extract<400, 415>());
  auto result_25 = scale_exposure(lane_25_in);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<16> lane_26_in;
  set_at<0, 16, 16>(lane_26_in, in.extract<416, 431>());
  auto result_26 = scale_exposure(lane_26_in);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<16> lane_27_in;
  set_at<0, 16, 16>(lane_27_in, in.extract<432, 447>());
  auto result_27 = scale_exposure(lane_27_in);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<16> lane_28_in;
  set_at<0, 16, 16>(lane_28_in, in.extract<448, 463>());
  auto result_28 = scale_exposure(lane_28_in);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<16> lane_29_in;
  set_at<0, 16, 16>(lane_29_in, in.extract<464, 479>());
  auto result_29 = scale_exposure(lane_29_in);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<16> lane_30_in;
  set_at<0, 16, 16>(lane_30_in, in.extract<480, 495>());
  auto result_30 = scale_exposure(lane_30_in);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<16> lane_31_in;
  set_at<0, 16, 16>(lane_31_in, in.extract<496, 511>());
  auto result_31 = scale_exposure(lane_31_in);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // dark_weights_update_0 unroll factor: 32
hw_uint<512>  psef_weight_unrolled_32(hw_uint<512>& dark) {
  hw_uint<512> whole_result;

  hw_uint<16> lane_0_dark;
  set_at<0, 16, 16>(lane_0_dark, dark.extract<0, 15>());
  auto result_0 = psef_weight(lane_0_dark);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<16> lane_1_dark;
  set_at<0, 16, 16>(lane_1_dark, dark.extract<16, 31>());
  auto result_1 = psef_weight(lane_1_dark);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<16> lane_2_dark;
  set_at<0, 16, 16>(lane_2_dark, dark.extract<32, 47>());
  auto result_2 = psef_weight(lane_2_dark);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<16> lane_3_dark;
  set_at<0, 16, 16>(lane_3_dark, dark.extract<48, 63>());
  auto result_3 = psef_weight(lane_3_dark);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<16> lane_4_dark;
  set_at<0, 16, 16>(lane_4_dark, dark.extract<64, 79>());
  auto result_4 = psef_weight(lane_4_dark);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<16> lane_5_dark;
  set_at<0, 16, 16>(lane_5_dark, dark.extract<80, 95>());
  auto result_5 = psef_weight(lane_5_dark);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<16> lane_6_dark;
  set_at<0, 16, 16>(lane_6_dark, dark.extract<96, 111>());
  auto result_6 = psef_weight(lane_6_dark);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<16> lane_7_dark;
  set_at<0, 16, 16>(lane_7_dark, dark.extract<112, 127>());
  auto result_7 = psef_weight(lane_7_dark);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<16> lane_8_dark;
  set_at<0, 16, 16>(lane_8_dark, dark.extract<128, 143>());
  auto result_8 = psef_weight(lane_8_dark);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<16> lane_9_dark;
  set_at<0, 16, 16>(lane_9_dark, dark.extract<144, 159>());
  auto result_9 = psef_weight(lane_9_dark);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<16> lane_10_dark;
  set_at<0, 16, 16>(lane_10_dark, dark.extract<160, 175>());
  auto result_10 = psef_weight(lane_10_dark);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<16> lane_11_dark;
  set_at<0, 16, 16>(lane_11_dark, dark.extract<176, 191>());
  auto result_11 = psef_weight(lane_11_dark);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<16> lane_12_dark;
  set_at<0, 16, 16>(lane_12_dark, dark.extract<192, 207>());
  auto result_12 = psef_weight(lane_12_dark);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<16> lane_13_dark;
  set_at<0, 16, 16>(lane_13_dark, dark.extract<208, 223>());
  auto result_13 = psef_weight(lane_13_dark);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<16> lane_14_dark;
  set_at<0, 16, 16>(lane_14_dark, dark.extract<224, 239>());
  auto result_14 = psef_weight(lane_14_dark);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<16> lane_15_dark;
  set_at<0, 16, 16>(lane_15_dark, dark.extract<240, 255>());
  auto result_15 = psef_weight(lane_15_dark);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<16> lane_16_dark;
  set_at<0, 16, 16>(lane_16_dark, dark.extract<256, 271>());
  auto result_16 = psef_weight(lane_16_dark);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<16> lane_17_dark;
  set_at<0, 16, 16>(lane_17_dark, dark.extract<272, 287>());
  auto result_17 = psef_weight(lane_17_dark);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<16> lane_18_dark;
  set_at<0, 16, 16>(lane_18_dark, dark.extract<288, 303>());
  auto result_18 = psef_weight(lane_18_dark);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<16> lane_19_dark;
  set_at<0, 16, 16>(lane_19_dark, dark.extract<304, 319>());
  auto result_19 = psef_weight(lane_19_dark);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<16> lane_20_dark;
  set_at<0, 16, 16>(lane_20_dark, dark.extract<320, 335>());
  auto result_20 = psef_weight(lane_20_dark);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<16> lane_21_dark;
  set_at<0, 16, 16>(lane_21_dark, dark.extract<336, 351>());
  auto result_21 = psef_weight(lane_21_dark);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<16> lane_22_dark;
  set_at<0, 16, 16>(lane_22_dark, dark.extract<352, 367>());
  auto result_22 = psef_weight(lane_22_dark);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<16> lane_23_dark;
  set_at<0, 16, 16>(lane_23_dark, dark.extract<368, 383>());
  auto result_23 = psef_weight(lane_23_dark);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<16> lane_24_dark;
  set_at<0, 16, 16>(lane_24_dark, dark.extract<384, 399>());
  auto result_24 = psef_weight(lane_24_dark);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<16> lane_25_dark;
  set_at<0, 16, 16>(lane_25_dark, dark.extract<400, 415>());
  auto result_25 = psef_weight(lane_25_dark);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<16> lane_26_dark;
  set_at<0, 16, 16>(lane_26_dark, dark.extract<416, 431>());
  auto result_26 = psef_weight(lane_26_dark);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<16> lane_27_dark;
  set_at<0, 16, 16>(lane_27_dark, dark.extract<432, 447>());
  auto result_27 = psef_weight(lane_27_dark);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<16> lane_28_dark;
  set_at<0, 16, 16>(lane_28_dark, dark.extract<448, 463>());
  auto result_28 = psef_weight(lane_28_dark);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<16> lane_29_dark;
  set_at<0, 16, 16>(lane_29_dark, dark.extract<464, 479>());
  auto result_29 = psef_weight(lane_29_dark);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<16> lane_30_dark;
  set_at<0, 16, 16>(lane_30_dark, dark.extract<480, 495>());
  auto result_30 = psef_weight(lane_30_dark);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<16> lane_31_dark;
  set_at<0, 16, 16>(lane_31_dark, dark.extract<496, 511>());
  auto result_31 = psef_weight(lane_31_dark);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // dark_weights_normed_update_0 unroll factor: 32
hw_uint<512>  psef_normalize_weights_unrolled_32(hw_uint<512>& dark_weights) {
  hw_uint<512> whole_result;

  hw_uint<16> lane_0_dark_weights;
  set_at<0, 16, 16>(lane_0_dark_weights, dark_weights.extract<0, 15>());
  auto result_0 = psef_normalize_weights(lane_0_dark_weights);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<16> lane_1_dark_weights;
  set_at<0, 16, 16>(lane_1_dark_weights, dark_weights.extract<16, 31>());
  auto result_1 = psef_normalize_weights(lane_1_dark_weights);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<16> lane_2_dark_weights;
  set_at<0, 16, 16>(lane_2_dark_weights, dark_weights.extract<32, 47>());
  auto result_2 = psef_normalize_weights(lane_2_dark_weights);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<16> lane_3_dark_weights;
  set_at<0, 16, 16>(lane_3_dark_weights, dark_weights.extract<48, 63>());
  auto result_3 = psef_normalize_weights(lane_3_dark_weights);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<16> lane_4_dark_weights;
  set_at<0, 16, 16>(lane_4_dark_weights, dark_weights.extract<64, 79>());
  auto result_4 = psef_normalize_weights(lane_4_dark_weights);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<16> lane_5_dark_weights;
  set_at<0, 16, 16>(lane_5_dark_weights, dark_weights.extract<80, 95>());
  auto result_5 = psef_normalize_weights(lane_5_dark_weights);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<16> lane_6_dark_weights;
  set_at<0, 16, 16>(lane_6_dark_weights, dark_weights.extract<96, 111>());
  auto result_6 = psef_normalize_weights(lane_6_dark_weights);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<16> lane_7_dark_weights;
  set_at<0, 16, 16>(lane_7_dark_weights, dark_weights.extract<112, 127>());
  auto result_7 = psef_normalize_weights(lane_7_dark_weights);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<16> lane_8_dark_weights;
  set_at<0, 16, 16>(lane_8_dark_weights, dark_weights.extract<128, 143>());
  auto result_8 = psef_normalize_weights(lane_8_dark_weights);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<16> lane_9_dark_weights;
  set_at<0, 16, 16>(lane_9_dark_weights, dark_weights.extract<144, 159>());
  auto result_9 = psef_normalize_weights(lane_9_dark_weights);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<16> lane_10_dark_weights;
  set_at<0, 16, 16>(lane_10_dark_weights, dark_weights.extract<160, 175>());
  auto result_10 = psef_normalize_weights(lane_10_dark_weights);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<16> lane_11_dark_weights;
  set_at<0, 16, 16>(lane_11_dark_weights, dark_weights.extract<176, 191>());
  auto result_11 = psef_normalize_weights(lane_11_dark_weights);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<16> lane_12_dark_weights;
  set_at<0, 16, 16>(lane_12_dark_weights, dark_weights.extract<192, 207>());
  auto result_12 = psef_normalize_weights(lane_12_dark_weights);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<16> lane_13_dark_weights;
  set_at<0, 16, 16>(lane_13_dark_weights, dark_weights.extract<208, 223>());
  auto result_13 = psef_normalize_weights(lane_13_dark_weights);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<16> lane_14_dark_weights;
  set_at<0, 16, 16>(lane_14_dark_weights, dark_weights.extract<224, 239>());
  auto result_14 = psef_normalize_weights(lane_14_dark_weights);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<16> lane_15_dark_weights;
  set_at<0, 16, 16>(lane_15_dark_weights, dark_weights.extract<240, 255>());
  auto result_15 = psef_normalize_weights(lane_15_dark_weights);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<16> lane_16_dark_weights;
  set_at<0, 16, 16>(lane_16_dark_weights, dark_weights.extract<256, 271>());
  auto result_16 = psef_normalize_weights(lane_16_dark_weights);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<16> lane_17_dark_weights;
  set_at<0, 16, 16>(lane_17_dark_weights, dark_weights.extract<272, 287>());
  auto result_17 = psef_normalize_weights(lane_17_dark_weights);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<16> lane_18_dark_weights;
  set_at<0, 16, 16>(lane_18_dark_weights, dark_weights.extract<288, 303>());
  auto result_18 = psef_normalize_weights(lane_18_dark_weights);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<16> lane_19_dark_weights;
  set_at<0, 16, 16>(lane_19_dark_weights, dark_weights.extract<304, 319>());
  auto result_19 = psef_normalize_weights(lane_19_dark_weights);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<16> lane_20_dark_weights;
  set_at<0, 16, 16>(lane_20_dark_weights, dark_weights.extract<320, 335>());
  auto result_20 = psef_normalize_weights(lane_20_dark_weights);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<16> lane_21_dark_weights;
  set_at<0, 16, 16>(lane_21_dark_weights, dark_weights.extract<336, 351>());
  auto result_21 = psef_normalize_weights(lane_21_dark_weights);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<16> lane_22_dark_weights;
  set_at<0, 16, 16>(lane_22_dark_weights, dark_weights.extract<352, 367>());
  auto result_22 = psef_normalize_weights(lane_22_dark_weights);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<16> lane_23_dark_weights;
  set_at<0, 16, 16>(lane_23_dark_weights, dark_weights.extract<368, 383>());
  auto result_23 = psef_normalize_weights(lane_23_dark_weights);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<16> lane_24_dark_weights;
  set_at<0, 16, 16>(lane_24_dark_weights, dark_weights.extract<384, 399>());
  auto result_24 = psef_normalize_weights(lane_24_dark_weights);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<16> lane_25_dark_weights;
  set_at<0, 16, 16>(lane_25_dark_weights, dark_weights.extract<400, 415>());
  auto result_25 = psef_normalize_weights(lane_25_dark_weights);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<16> lane_26_dark_weights;
  set_at<0, 16, 16>(lane_26_dark_weights, dark_weights.extract<416, 431>());
  auto result_26 = psef_normalize_weights(lane_26_dark_weights);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<16> lane_27_dark_weights;
  set_at<0, 16, 16>(lane_27_dark_weights, dark_weights.extract<432, 447>());
  auto result_27 = psef_normalize_weights(lane_27_dark_weights);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<16> lane_28_dark_weights;
  set_at<0, 16, 16>(lane_28_dark_weights, dark_weights.extract<448, 463>());
  auto result_28 = psef_normalize_weights(lane_28_dark_weights);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<16> lane_29_dark_weights;
  set_at<0, 16, 16>(lane_29_dark_weights, dark_weights.extract<464, 479>());
  auto result_29 = psef_normalize_weights(lane_29_dark_weights);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<16> lane_30_dark_weights;
  set_at<0, 16, 16>(lane_30_dark_weights, dark_weights.extract<480, 495>());
  auto result_30 = psef_normalize_weights(lane_30_dark_weights);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<16> lane_31_dark_weights;
  set_at<0, 16, 16>(lane_31_dark_weights, dark_weights.extract<496, 511>());
  auto result_31 = psef_normalize_weights(lane_31_dark_weights);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // dark_gauss_blur_1_update_0 unroll factor: 32
hw_uint<512>  reduce_gauss_unrolled_32(hw_uint<4608>& dark) {
  hw_uint<512> whole_result;

  hw_uint<144> lane_0_dark;
  set_at<0, 144, 144>(lane_0_dark, dark.extract<0, 143>());
  auto result_0 = reduce_gauss(lane_0_dark);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<144> lane_1_dark;
  set_at<0, 144, 144>(lane_1_dark, dark.extract<144, 287>());
  auto result_1 = reduce_gauss(lane_1_dark);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<144> lane_2_dark;
  set_at<0, 144, 144>(lane_2_dark, dark.extract<288, 431>());
  auto result_2 = reduce_gauss(lane_2_dark);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<144> lane_3_dark;
  set_at<0, 144, 144>(lane_3_dark, dark.extract<432, 575>());
  auto result_3 = reduce_gauss(lane_3_dark);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<144> lane_4_dark;
  set_at<0, 144, 144>(lane_4_dark, dark.extract<576, 719>());
  auto result_4 = reduce_gauss(lane_4_dark);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<144> lane_5_dark;
  set_at<0, 144, 144>(lane_5_dark, dark.extract<720, 863>());
  auto result_5 = reduce_gauss(lane_5_dark);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<144> lane_6_dark;
  set_at<0, 144, 144>(lane_6_dark, dark.extract<864, 1007>());
  auto result_6 = reduce_gauss(lane_6_dark);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<144> lane_7_dark;
  set_at<0, 144, 144>(lane_7_dark, dark.extract<1008, 1151>());
  auto result_7 = reduce_gauss(lane_7_dark);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<144> lane_8_dark;
  set_at<0, 144, 144>(lane_8_dark, dark.extract<1152, 1295>());
  auto result_8 = reduce_gauss(lane_8_dark);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<144> lane_9_dark;
  set_at<0, 144, 144>(lane_9_dark, dark.extract<1296, 1439>());
  auto result_9 = reduce_gauss(lane_9_dark);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<144> lane_10_dark;
  set_at<0, 144, 144>(lane_10_dark, dark.extract<1440, 1583>());
  auto result_10 = reduce_gauss(lane_10_dark);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<144> lane_11_dark;
  set_at<0, 144, 144>(lane_11_dark, dark.extract<1584, 1727>());
  auto result_11 = reduce_gauss(lane_11_dark);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<144> lane_12_dark;
  set_at<0, 144, 144>(lane_12_dark, dark.extract<1728, 1871>());
  auto result_12 = reduce_gauss(lane_12_dark);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<144> lane_13_dark;
  set_at<0, 144, 144>(lane_13_dark, dark.extract<1872, 2015>());
  auto result_13 = reduce_gauss(lane_13_dark);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<144> lane_14_dark;
  set_at<0, 144, 144>(lane_14_dark, dark.extract<2016, 2159>());
  auto result_14 = reduce_gauss(lane_14_dark);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<144> lane_15_dark;
  set_at<0, 144, 144>(lane_15_dark, dark.extract<2160, 2303>());
  auto result_15 = reduce_gauss(lane_15_dark);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<144> lane_16_dark;
  set_at<0, 144, 144>(lane_16_dark, dark.extract<2304, 2447>());
  auto result_16 = reduce_gauss(lane_16_dark);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<144> lane_17_dark;
  set_at<0, 144, 144>(lane_17_dark, dark.extract<2448, 2591>());
  auto result_17 = reduce_gauss(lane_17_dark);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<144> lane_18_dark;
  set_at<0, 144, 144>(lane_18_dark, dark.extract<2592, 2735>());
  auto result_18 = reduce_gauss(lane_18_dark);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<144> lane_19_dark;
  set_at<0, 144, 144>(lane_19_dark, dark.extract<2736, 2879>());
  auto result_19 = reduce_gauss(lane_19_dark);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<144> lane_20_dark;
  set_at<0, 144, 144>(lane_20_dark, dark.extract<2880, 3023>());
  auto result_20 = reduce_gauss(lane_20_dark);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<144> lane_21_dark;
  set_at<0, 144, 144>(lane_21_dark, dark.extract<3024, 3167>());
  auto result_21 = reduce_gauss(lane_21_dark);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<144> lane_22_dark;
  set_at<0, 144, 144>(lane_22_dark, dark.extract<3168, 3311>());
  auto result_22 = reduce_gauss(lane_22_dark);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<144> lane_23_dark;
  set_at<0, 144, 144>(lane_23_dark, dark.extract<3312, 3455>());
  auto result_23 = reduce_gauss(lane_23_dark);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<144> lane_24_dark;
  set_at<0, 144, 144>(lane_24_dark, dark.extract<3456, 3599>());
  auto result_24 = reduce_gauss(lane_24_dark);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<144> lane_25_dark;
  set_at<0, 144, 144>(lane_25_dark, dark.extract<3600, 3743>());
  auto result_25 = reduce_gauss(lane_25_dark);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<144> lane_26_dark;
  set_at<0, 144, 144>(lane_26_dark, dark.extract<3744, 3887>());
  auto result_26 = reduce_gauss(lane_26_dark);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<144> lane_27_dark;
  set_at<0, 144, 144>(lane_27_dark, dark.extract<3888, 4031>());
  auto result_27 = reduce_gauss(lane_27_dark);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<144> lane_28_dark;
  set_at<0, 144, 144>(lane_28_dark, dark.extract<4032, 4175>());
  auto result_28 = reduce_gauss(lane_28_dark);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<144> lane_29_dark;
  set_at<0, 144, 144>(lane_29_dark, dark.extract<4176, 4319>());
  auto result_29 = reduce_gauss(lane_29_dark);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<144> lane_30_dark;
  set_at<0, 144, 144>(lane_30_dark, dark.extract<4320, 4463>());
  auto result_30 = reduce_gauss(lane_30_dark);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<144> lane_31_dark;
  set_at<0, 144, 144>(lane_31_dark, dark.extract<4464, 4607>());
  auto result_31 = reduce_gauss(lane_31_dark);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // dark_gauss_ds_1_update_0 unroll factor: 16
hw_uint<256>  id_unrolled_16(hw_uint<256>& dark_gauss_blur_1) {
  hw_uint<256> whole_result;

  hw_uint<16> lane_0_dark_gauss_blur_1;
  set_at<0, 16, 16>(lane_0_dark_gauss_blur_1, dark_gauss_blur_1.extract<0, 15>());
  auto result_0 = id(lane_0_dark_gauss_blur_1);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<16> lane_1_dark_gauss_blur_1;
  set_at<0, 16, 16>(lane_1_dark_gauss_blur_1, dark_gauss_blur_1.extract<16, 31>());
  auto result_1 = id(lane_1_dark_gauss_blur_1);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<16> lane_2_dark_gauss_blur_1;
  set_at<0, 16, 16>(lane_2_dark_gauss_blur_1, dark_gauss_blur_1.extract<32, 47>());
  auto result_2 = id(lane_2_dark_gauss_blur_1);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<16> lane_3_dark_gauss_blur_1;
  set_at<0, 16, 16>(lane_3_dark_gauss_blur_1, dark_gauss_blur_1.extract<48, 63>());
  auto result_3 = id(lane_3_dark_gauss_blur_1);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<16> lane_4_dark_gauss_blur_1;
  set_at<0, 16, 16>(lane_4_dark_gauss_blur_1, dark_gauss_blur_1.extract<64, 79>());
  auto result_4 = id(lane_4_dark_gauss_blur_1);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<16> lane_5_dark_gauss_blur_1;
  set_at<0, 16, 16>(lane_5_dark_gauss_blur_1, dark_gauss_blur_1.extract<80, 95>());
  auto result_5 = id(lane_5_dark_gauss_blur_1);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<16> lane_6_dark_gauss_blur_1;
  set_at<0, 16, 16>(lane_6_dark_gauss_blur_1, dark_gauss_blur_1.extract<96, 111>());
  auto result_6 = id(lane_6_dark_gauss_blur_1);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<16> lane_7_dark_gauss_blur_1;
  set_at<0, 16, 16>(lane_7_dark_gauss_blur_1, dark_gauss_blur_1.extract<112, 127>());
  auto result_7 = id(lane_7_dark_gauss_blur_1);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<16> lane_8_dark_gauss_blur_1;
  set_at<0, 16, 16>(lane_8_dark_gauss_blur_1, dark_gauss_blur_1.extract<128, 143>());
  auto result_8 = id(lane_8_dark_gauss_blur_1);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<16> lane_9_dark_gauss_blur_1;
  set_at<0, 16, 16>(lane_9_dark_gauss_blur_1, dark_gauss_blur_1.extract<144, 159>());
  auto result_9 = id(lane_9_dark_gauss_blur_1);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<16> lane_10_dark_gauss_blur_1;
  set_at<0, 16, 16>(lane_10_dark_gauss_blur_1, dark_gauss_blur_1.extract<160, 175>());
  auto result_10 = id(lane_10_dark_gauss_blur_1);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<16> lane_11_dark_gauss_blur_1;
  set_at<0, 16, 16>(lane_11_dark_gauss_blur_1, dark_gauss_blur_1.extract<176, 191>());
  auto result_11 = id(lane_11_dark_gauss_blur_1);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<16> lane_12_dark_gauss_blur_1;
  set_at<0, 16, 16>(lane_12_dark_gauss_blur_1, dark_gauss_blur_1.extract<192, 207>());
  auto result_12 = id(lane_12_dark_gauss_blur_1);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<16> lane_13_dark_gauss_blur_1;
  set_at<0, 16, 16>(lane_13_dark_gauss_blur_1, dark_gauss_blur_1.extract<208, 223>());
  auto result_13 = id(lane_13_dark_gauss_blur_1);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<16> lane_14_dark_gauss_blur_1;
  set_at<0, 16, 16>(lane_14_dark_gauss_blur_1, dark_gauss_blur_1.extract<224, 239>());
  auto result_14 = id(lane_14_dark_gauss_blur_1);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<16> lane_15_dark_gauss_blur_1;
  set_at<0, 16, 16>(lane_15_dark_gauss_blur_1, dark_gauss_blur_1.extract<240, 255>());
  auto result_15 = id(lane_15_dark_gauss_blur_1);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // dark_gauss_blur_2_update_0 unroll factor: 16
hw_uint<256>  reduce_gauss_unrolled_16(hw_uint<2304>& dark_gauss_ds_1) {
  hw_uint<256> whole_result;

  hw_uint<144> lane_0_dark_gauss_ds_1;
  set_at<0, 144, 144>(lane_0_dark_gauss_ds_1, dark_gauss_ds_1.extract<0, 143>());
  auto result_0 = reduce_gauss(lane_0_dark_gauss_ds_1);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<144> lane_1_dark_gauss_ds_1;
  set_at<0, 144, 144>(lane_1_dark_gauss_ds_1, dark_gauss_ds_1.extract<144, 287>());
  auto result_1 = reduce_gauss(lane_1_dark_gauss_ds_1);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<144> lane_2_dark_gauss_ds_1;
  set_at<0, 144, 144>(lane_2_dark_gauss_ds_1, dark_gauss_ds_1.extract<288, 431>());
  auto result_2 = reduce_gauss(lane_2_dark_gauss_ds_1);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<144> lane_3_dark_gauss_ds_1;
  set_at<0, 144, 144>(lane_3_dark_gauss_ds_1, dark_gauss_ds_1.extract<432, 575>());
  auto result_3 = reduce_gauss(lane_3_dark_gauss_ds_1);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<144> lane_4_dark_gauss_ds_1;
  set_at<0, 144, 144>(lane_4_dark_gauss_ds_1, dark_gauss_ds_1.extract<576, 719>());
  auto result_4 = reduce_gauss(lane_4_dark_gauss_ds_1);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<144> lane_5_dark_gauss_ds_1;
  set_at<0, 144, 144>(lane_5_dark_gauss_ds_1, dark_gauss_ds_1.extract<720, 863>());
  auto result_5 = reduce_gauss(lane_5_dark_gauss_ds_1);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<144> lane_6_dark_gauss_ds_1;
  set_at<0, 144, 144>(lane_6_dark_gauss_ds_1, dark_gauss_ds_1.extract<864, 1007>());
  auto result_6 = reduce_gauss(lane_6_dark_gauss_ds_1);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<144> lane_7_dark_gauss_ds_1;
  set_at<0, 144, 144>(lane_7_dark_gauss_ds_1, dark_gauss_ds_1.extract<1008, 1151>());
  auto result_7 = reduce_gauss(lane_7_dark_gauss_ds_1);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<144> lane_8_dark_gauss_ds_1;
  set_at<0, 144, 144>(lane_8_dark_gauss_ds_1, dark_gauss_ds_1.extract<1152, 1295>());
  auto result_8 = reduce_gauss(lane_8_dark_gauss_ds_1);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<144> lane_9_dark_gauss_ds_1;
  set_at<0, 144, 144>(lane_9_dark_gauss_ds_1, dark_gauss_ds_1.extract<1296, 1439>());
  auto result_9 = reduce_gauss(lane_9_dark_gauss_ds_1);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<144> lane_10_dark_gauss_ds_1;
  set_at<0, 144, 144>(lane_10_dark_gauss_ds_1, dark_gauss_ds_1.extract<1440, 1583>());
  auto result_10 = reduce_gauss(lane_10_dark_gauss_ds_1);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<144> lane_11_dark_gauss_ds_1;
  set_at<0, 144, 144>(lane_11_dark_gauss_ds_1, dark_gauss_ds_1.extract<1584, 1727>());
  auto result_11 = reduce_gauss(lane_11_dark_gauss_ds_1);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<144> lane_12_dark_gauss_ds_1;
  set_at<0, 144, 144>(lane_12_dark_gauss_ds_1, dark_gauss_ds_1.extract<1728, 1871>());
  auto result_12 = reduce_gauss(lane_12_dark_gauss_ds_1);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<144> lane_13_dark_gauss_ds_1;
  set_at<0, 144, 144>(lane_13_dark_gauss_ds_1, dark_gauss_ds_1.extract<1872, 2015>());
  auto result_13 = reduce_gauss(lane_13_dark_gauss_ds_1);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<144> lane_14_dark_gauss_ds_1;
  set_at<0, 144, 144>(lane_14_dark_gauss_ds_1, dark_gauss_ds_1.extract<2016, 2159>());
  auto result_14 = reduce_gauss(lane_14_dark_gauss_ds_1);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<144> lane_15_dark_gauss_ds_1;
  set_at<0, 144, 144>(lane_15_dark_gauss_ds_1, dark_gauss_ds_1.extract<2160, 2303>());
  auto result_15 = reduce_gauss(lane_15_dark_gauss_ds_1);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // dark_gauss_ds_2_update_0 unroll factor: 8
hw_uint<128>  id_unrolled_8(hw_uint<128>& dark_gauss_blur_2) {
  hw_uint<128> whole_result;

  hw_uint<16> lane_0_dark_gauss_blur_2;
  set_at<0, 16, 16>(lane_0_dark_gauss_blur_2, dark_gauss_blur_2.extract<0, 15>());
  auto result_0 = id(lane_0_dark_gauss_blur_2);
  set_at<0, 128, 16>(whole_result, result_0);

  hw_uint<16> lane_1_dark_gauss_blur_2;
  set_at<0, 16, 16>(lane_1_dark_gauss_blur_2, dark_gauss_blur_2.extract<16, 31>());
  auto result_1 = id(lane_1_dark_gauss_blur_2);
  set_at<16, 128, 16>(whole_result, result_1);

  hw_uint<16> lane_2_dark_gauss_blur_2;
  set_at<0, 16, 16>(lane_2_dark_gauss_blur_2, dark_gauss_blur_2.extract<32, 47>());
  auto result_2 = id(lane_2_dark_gauss_blur_2);
  set_at<32, 128, 16>(whole_result, result_2);

  hw_uint<16> lane_3_dark_gauss_blur_2;
  set_at<0, 16, 16>(lane_3_dark_gauss_blur_2, dark_gauss_blur_2.extract<48, 63>());
  auto result_3 = id(lane_3_dark_gauss_blur_2);
  set_at<48, 128, 16>(whole_result, result_3);

  hw_uint<16> lane_4_dark_gauss_blur_2;
  set_at<0, 16, 16>(lane_4_dark_gauss_blur_2, dark_gauss_blur_2.extract<64, 79>());
  auto result_4 = id(lane_4_dark_gauss_blur_2);
  set_at<64, 128, 16>(whole_result, result_4);

  hw_uint<16> lane_5_dark_gauss_blur_2;
  set_at<0, 16, 16>(lane_5_dark_gauss_blur_2, dark_gauss_blur_2.extract<80, 95>());
  auto result_5 = id(lane_5_dark_gauss_blur_2);
  set_at<80, 128, 16>(whole_result, result_5);

  hw_uint<16> lane_6_dark_gauss_blur_2;
  set_at<0, 16, 16>(lane_6_dark_gauss_blur_2, dark_gauss_blur_2.extract<96, 111>());
  auto result_6 = id(lane_6_dark_gauss_blur_2);
  set_at<96, 128, 16>(whole_result, result_6);

  hw_uint<16> lane_7_dark_gauss_blur_2;
  set_at<0, 16, 16>(lane_7_dark_gauss_blur_2, dark_gauss_blur_2.extract<112, 127>());
  auto result_7 = id(lane_7_dark_gauss_blur_2);
  set_at<112, 128, 16>(whole_result, result_7);
  return whole_result;
}

  // dark_gauss_blur_3_update_0 unroll factor: 8
hw_uint<128>  reduce_gauss_unrolled_8(hw_uint<1152>& dark_gauss_ds_2) {
  hw_uint<128> whole_result;

  hw_uint<144> lane_0_dark_gauss_ds_2;
  set_at<0, 144, 144>(lane_0_dark_gauss_ds_2, dark_gauss_ds_2.extract<0, 143>());
  auto result_0 = reduce_gauss(lane_0_dark_gauss_ds_2);
  set_at<0, 128, 16>(whole_result, result_0);

  hw_uint<144> lane_1_dark_gauss_ds_2;
  set_at<0, 144, 144>(lane_1_dark_gauss_ds_2, dark_gauss_ds_2.extract<144, 287>());
  auto result_1 = reduce_gauss(lane_1_dark_gauss_ds_2);
  set_at<16, 128, 16>(whole_result, result_1);

  hw_uint<144> lane_2_dark_gauss_ds_2;
  set_at<0, 144, 144>(lane_2_dark_gauss_ds_2, dark_gauss_ds_2.extract<288, 431>());
  auto result_2 = reduce_gauss(lane_2_dark_gauss_ds_2);
  set_at<32, 128, 16>(whole_result, result_2);

  hw_uint<144> lane_3_dark_gauss_ds_2;
  set_at<0, 144, 144>(lane_3_dark_gauss_ds_2, dark_gauss_ds_2.extract<432, 575>());
  auto result_3 = reduce_gauss(lane_3_dark_gauss_ds_2);
  set_at<48, 128, 16>(whole_result, result_3);

  hw_uint<144> lane_4_dark_gauss_ds_2;
  set_at<0, 144, 144>(lane_4_dark_gauss_ds_2, dark_gauss_ds_2.extract<576, 719>());
  auto result_4 = reduce_gauss(lane_4_dark_gauss_ds_2);
  set_at<64, 128, 16>(whole_result, result_4);

  hw_uint<144> lane_5_dark_gauss_ds_2;
  set_at<0, 144, 144>(lane_5_dark_gauss_ds_2, dark_gauss_ds_2.extract<720, 863>());
  auto result_5 = reduce_gauss(lane_5_dark_gauss_ds_2);
  set_at<80, 128, 16>(whole_result, result_5);

  hw_uint<144> lane_6_dark_gauss_ds_2;
  set_at<0, 144, 144>(lane_6_dark_gauss_ds_2, dark_gauss_ds_2.extract<864, 1007>());
  auto result_6 = reduce_gauss(lane_6_dark_gauss_ds_2);
  set_at<96, 128, 16>(whole_result, result_6);

  hw_uint<144> lane_7_dark_gauss_ds_2;
  set_at<0, 144, 144>(lane_7_dark_gauss_ds_2, dark_gauss_ds_2.extract<1008, 1151>());
  auto result_7 = reduce_gauss(lane_7_dark_gauss_ds_2);
  set_at<112, 128, 16>(whole_result, result_7);
  return whole_result;
}

  // dark_gauss_ds_3_update_0 unroll factor: 4
hw_uint<64>  id_unrolled_4(hw_uint<64>& dark_gauss_blur_3) {
  hw_uint<64> whole_result;

  hw_uint<16> lane_0_dark_gauss_blur_3;
  set_at<0, 16, 16>(lane_0_dark_gauss_blur_3, dark_gauss_blur_3.extract<0, 15>());
  auto result_0 = id(lane_0_dark_gauss_blur_3);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<16> lane_1_dark_gauss_blur_3;
  set_at<0, 16, 16>(lane_1_dark_gauss_blur_3, dark_gauss_blur_3.extract<16, 31>());
  auto result_1 = id(lane_1_dark_gauss_blur_3);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<16> lane_2_dark_gauss_blur_3;
  set_at<0, 16, 16>(lane_2_dark_gauss_blur_3, dark_gauss_blur_3.extract<32, 47>());
  auto result_2 = id(lane_2_dark_gauss_blur_3);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<16> lane_3_dark_gauss_blur_3;
  set_at<0, 16, 16>(lane_3_dark_gauss_blur_3, dark_gauss_blur_3.extract<48, 63>());
  auto result_3 = id(lane_3_dark_gauss_blur_3);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // dark_laplace_diff_2_update_0 unroll factor: 8
hw_uint<128>  diff_unrolled_8(hw_uint<128>& dark_gauss_ds_2, hw_uint<128>& dark_laplace_us_2) {
  hw_uint<128> whole_result;

  hw_uint<16> lane_0_dark_gauss_ds_2;
  set_at<0, 16, 16>(lane_0_dark_gauss_ds_2, dark_gauss_ds_2.extract<0, 15>());
  hw_uint<16> lane_0_dark_laplace_us_2;
  set_at<0, 16, 16>(lane_0_dark_laplace_us_2, dark_laplace_us_2.extract<0, 15>());
  auto result_0 = diff(lane_0_dark_gauss_ds_2, lane_0_dark_laplace_us_2);
  set_at<0, 128, 16>(whole_result, result_0);

  hw_uint<16> lane_1_dark_gauss_ds_2;
  set_at<0, 16, 16>(lane_1_dark_gauss_ds_2, dark_gauss_ds_2.extract<16, 31>());
  hw_uint<16> lane_1_dark_laplace_us_2;
  set_at<0, 16, 16>(lane_1_dark_laplace_us_2, dark_laplace_us_2.extract<16, 31>());
  auto result_1 = diff(lane_1_dark_gauss_ds_2, lane_1_dark_laplace_us_2);
  set_at<16, 128, 16>(whole_result, result_1);

  hw_uint<16> lane_2_dark_gauss_ds_2;
  set_at<0, 16, 16>(lane_2_dark_gauss_ds_2, dark_gauss_ds_2.extract<32, 47>());
  hw_uint<16> lane_2_dark_laplace_us_2;
  set_at<0, 16, 16>(lane_2_dark_laplace_us_2, dark_laplace_us_2.extract<32, 47>());
  auto result_2 = diff(lane_2_dark_gauss_ds_2, lane_2_dark_laplace_us_2);
  set_at<32, 128, 16>(whole_result, result_2);

  hw_uint<16> lane_3_dark_gauss_ds_2;
  set_at<0, 16, 16>(lane_3_dark_gauss_ds_2, dark_gauss_ds_2.extract<48, 63>());
  hw_uint<16> lane_3_dark_laplace_us_2;
  set_at<0, 16, 16>(lane_3_dark_laplace_us_2, dark_laplace_us_2.extract<48, 63>());
  auto result_3 = diff(lane_3_dark_gauss_ds_2, lane_3_dark_laplace_us_2);
  set_at<48, 128, 16>(whole_result, result_3);

  hw_uint<16> lane_4_dark_gauss_ds_2;
  set_at<0, 16, 16>(lane_4_dark_gauss_ds_2, dark_gauss_ds_2.extract<64, 79>());
  hw_uint<16> lane_4_dark_laplace_us_2;
  set_at<0, 16, 16>(lane_4_dark_laplace_us_2, dark_laplace_us_2.extract<64, 79>());
  auto result_4 = diff(lane_4_dark_gauss_ds_2, lane_4_dark_laplace_us_2);
  set_at<64, 128, 16>(whole_result, result_4);

  hw_uint<16> lane_5_dark_gauss_ds_2;
  set_at<0, 16, 16>(lane_5_dark_gauss_ds_2, dark_gauss_ds_2.extract<80, 95>());
  hw_uint<16> lane_5_dark_laplace_us_2;
  set_at<0, 16, 16>(lane_5_dark_laplace_us_2, dark_laplace_us_2.extract<80, 95>());
  auto result_5 = diff(lane_5_dark_gauss_ds_2, lane_5_dark_laplace_us_2);
  set_at<80, 128, 16>(whole_result, result_5);

  hw_uint<16> lane_6_dark_gauss_ds_2;
  set_at<0, 16, 16>(lane_6_dark_gauss_ds_2, dark_gauss_ds_2.extract<96, 111>());
  hw_uint<16> lane_6_dark_laplace_us_2;
  set_at<0, 16, 16>(lane_6_dark_laplace_us_2, dark_laplace_us_2.extract<96, 111>());
  auto result_6 = diff(lane_6_dark_gauss_ds_2, lane_6_dark_laplace_us_2);
  set_at<96, 128, 16>(whole_result, result_6);

  hw_uint<16> lane_7_dark_gauss_ds_2;
  set_at<0, 16, 16>(lane_7_dark_gauss_ds_2, dark_gauss_ds_2.extract<112, 127>());
  hw_uint<16> lane_7_dark_laplace_us_2;
  set_at<0, 16, 16>(lane_7_dark_laplace_us_2, dark_laplace_us_2.extract<112, 127>());
  auto result_7 = diff(lane_7_dark_gauss_ds_2, lane_7_dark_laplace_us_2);
  set_at<112, 128, 16>(whole_result, result_7);
  return whole_result;
}

  // dark_laplace_diff_1_update_0 unroll factor: 16
hw_uint<256>  diff_unrolled_16(hw_uint<256>& dark_gauss_ds_1, hw_uint<256>& dark_laplace_us_1) {
  hw_uint<256> whole_result;

  hw_uint<16> lane_0_dark_gauss_ds_1;
  set_at<0, 16, 16>(lane_0_dark_gauss_ds_1, dark_gauss_ds_1.extract<0, 15>());
  hw_uint<16> lane_0_dark_laplace_us_1;
  set_at<0, 16, 16>(lane_0_dark_laplace_us_1, dark_laplace_us_1.extract<0, 15>());
  auto result_0 = diff(lane_0_dark_gauss_ds_1, lane_0_dark_laplace_us_1);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<16> lane_1_dark_gauss_ds_1;
  set_at<0, 16, 16>(lane_1_dark_gauss_ds_1, dark_gauss_ds_1.extract<16, 31>());
  hw_uint<16> lane_1_dark_laplace_us_1;
  set_at<0, 16, 16>(lane_1_dark_laplace_us_1, dark_laplace_us_1.extract<16, 31>());
  auto result_1 = diff(lane_1_dark_gauss_ds_1, lane_1_dark_laplace_us_1);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<16> lane_2_dark_gauss_ds_1;
  set_at<0, 16, 16>(lane_2_dark_gauss_ds_1, dark_gauss_ds_1.extract<32, 47>());
  hw_uint<16> lane_2_dark_laplace_us_1;
  set_at<0, 16, 16>(lane_2_dark_laplace_us_1, dark_laplace_us_1.extract<32, 47>());
  auto result_2 = diff(lane_2_dark_gauss_ds_1, lane_2_dark_laplace_us_1);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<16> lane_3_dark_gauss_ds_1;
  set_at<0, 16, 16>(lane_3_dark_gauss_ds_1, dark_gauss_ds_1.extract<48, 63>());
  hw_uint<16> lane_3_dark_laplace_us_1;
  set_at<0, 16, 16>(lane_3_dark_laplace_us_1, dark_laplace_us_1.extract<48, 63>());
  auto result_3 = diff(lane_3_dark_gauss_ds_1, lane_3_dark_laplace_us_1);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<16> lane_4_dark_gauss_ds_1;
  set_at<0, 16, 16>(lane_4_dark_gauss_ds_1, dark_gauss_ds_1.extract<64, 79>());
  hw_uint<16> lane_4_dark_laplace_us_1;
  set_at<0, 16, 16>(lane_4_dark_laplace_us_1, dark_laplace_us_1.extract<64, 79>());
  auto result_4 = diff(lane_4_dark_gauss_ds_1, lane_4_dark_laplace_us_1);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<16> lane_5_dark_gauss_ds_1;
  set_at<0, 16, 16>(lane_5_dark_gauss_ds_1, dark_gauss_ds_1.extract<80, 95>());
  hw_uint<16> lane_5_dark_laplace_us_1;
  set_at<0, 16, 16>(lane_5_dark_laplace_us_1, dark_laplace_us_1.extract<80, 95>());
  auto result_5 = diff(lane_5_dark_gauss_ds_1, lane_5_dark_laplace_us_1);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<16> lane_6_dark_gauss_ds_1;
  set_at<0, 16, 16>(lane_6_dark_gauss_ds_1, dark_gauss_ds_1.extract<96, 111>());
  hw_uint<16> lane_6_dark_laplace_us_1;
  set_at<0, 16, 16>(lane_6_dark_laplace_us_1, dark_laplace_us_1.extract<96, 111>());
  auto result_6 = diff(lane_6_dark_gauss_ds_1, lane_6_dark_laplace_us_1);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<16> lane_7_dark_gauss_ds_1;
  set_at<0, 16, 16>(lane_7_dark_gauss_ds_1, dark_gauss_ds_1.extract<112, 127>());
  hw_uint<16> lane_7_dark_laplace_us_1;
  set_at<0, 16, 16>(lane_7_dark_laplace_us_1, dark_laplace_us_1.extract<112, 127>());
  auto result_7 = diff(lane_7_dark_gauss_ds_1, lane_7_dark_laplace_us_1);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<16> lane_8_dark_gauss_ds_1;
  set_at<0, 16, 16>(lane_8_dark_gauss_ds_1, dark_gauss_ds_1.extract<128, 143>());
  hw_uint<16> lane_8_dark_laplace_us_1;
  set_at<0, 16, 16>(lane_8_dark_laplace_us_1, dark_laplace_us_1.extract<128, 143>());
  auto result_8 = diff(lane_8_dark_gauss_ds_1, lane_8_dark_laplace_us_1);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<16> lane_9_dark_gauss_ds_1;
  set_at<0, 16, 16>(lane_9_dark_gauss_ds_1, dark_gauss_ds_1.extract<144, 159>());
  hw_uint<16> lane_9_dark_laplace_us_1;
  set_at<0, 16, 16>(lane_9_dark_laplace_us_1, dark_laplace_us_1.extract<144, 159>());
  auto result_9 = diff(lane_9_dark_gauss_ds_1, lane_9_dark_laplace_us_1);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<16> lane_10_dark_gauss_ds_1;
  set_at<0, 16, 16>(lane_10_dark_gauss_ds_1, dark_gauss_ds_1.extract<160, 175>());
  hw_uint<16> lane_10_dark_laplace_us_1;
  set_at<0, 16, 16>(lane_10_dark_laplace_us_1, dark_laplace_us_1.extract<160, 175>());
  auto result_10 = diff(lane_10_dark_gauss_ds_1, lane_10_dark_laplace_us_1);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<16> lane_11_dark_gauss_ds_1;
  set_at<0, 16, 16>(lane_11_dark_gauss_ds_1, dark_gauss_ds_1.extract<176, 191>());
  hw_uint<16> lane_11_dark_laplace_us_1;
  set_at<0, 16, 16>(lane_11_dark_laplace_us_1, dark_laplace_us_1.extract<176, 191>());
  auto result_11 = diff(lane_11_dark_gauss_ds_1, lane_11_dark_laplace_us_1);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<16> lane_12_dark_gauss_ds_1;
  set_at<0, 16, 16>(lane_12_dark_gauss_ds_1, dark_gauss_ds_1.extract<192, 207>());
  hw_uint<16> lane_12_dark_laplace_us_1;
  set_at<0, 16, 16>(lane_12_dark_laplace_us_1, dark_laplace_us_1.extract<192, 207>());
  auto result_12 = diff(lane_12_dark_gauss_ds_1, lane_12_dark_laplace_us_1);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<16> lane_13_dark_gauss_ds_1;
  set_at<0, 16, 16>(lane_13_dark_gauss_ds_1, dark_gauss_ds_1.extract<208, 223>());
  hw_uint<16> lane_13_dark_laplace_us_1;
  set_at<0, 16, 16>(lane_13_dark_laplace_us_1, dark_laplace_us_1.extract<208, 223>());
  auto result_13 = diff(lane_13_dark_gauss_ds_1, lane_13_dark_laplace_us_1);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<16> lane_14_dark_gauss_ds_1;
  set_at<0, 16, 16>(lane_14_dark_gauss_ds_1, dark_gauss_ds_1.extract<224, 239>());
  hw_uint<16> lane_14_dark_laplace_us_1;
  set_at<0, 16, 16>(lane_14_dark_laplace_us_1, dark_laplace_us_1.extract<224, 239>());
  auto result_14 = diff(lane_14_dark_gauss_ds_1, lane_14_dark_laplace_us_1);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<16> lane_15_dark_gauss_ds_1;
  set_at<0, 16, 16>(lane_15_dark_gauss_ds_1, dark_gauss_ds_1.extract<240, 255>());
  hw_uint<16> lane_15_dark_laplace_us_1;
  set_at<0, 16, 16>(lane_15_dark_laplace_us_1, dark_laplace_us_1.extract<240, 255>());
  auto result_15 = diff(lane_15_dark_gauss_ds_1, lane_15_dark_laplace_us_1);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // dark_laplace_diff_0_update_0 unroll factor: 32
hw_uint<512>  diff_unrolled_32(hw_uint<512>& dark, hw_uint<512>& dark_laplace_us_0) {
  hw_uint<512> whole_result;

  hw_uint<16> lane_0_dark;
  set_at<0, 16, 16>(lane_0_dark, dark.extract<0, 15>());
  hw_uint<16> lane_0_dark_laplace_us_0;
  set_at<0, 16, 16>(lane_0_dark_laplace_us_0, dark_laplace_us_0.extract<0, 15>());
  auto result_0 = diff(lane_0_dark, lane_0_dark_laplace_us_0);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<16> lane_1_dark;
  set_at<0, 16, 16>(lane_1_dark, dark.extract<16, 31>());
  hw_uint<16> lane_1_dark_laplace_us_0;
  set_at<0, 16, 16>(lane_1_dark_laplace_us_0, dark_laplace_us_0.extract<16, 31>());
  auto result_1 = diff(lane_1_dark, lane_1_dark_laplace_us_0);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<16> lane_2_dark;
  set_at<0, 16, 16>(lane_2_dark, dark.extract<32, 47>());
  hw_uint<16> lane_2_dark_laplace_us_0;
  set_at<0, 16, 16>(lane_2_dark_laplace_us_0, dark_laplace_us_0.extract<32, 47>());
  auto result_2 = diff(lane_2_dark, lane_2_dark_laplace_us_0);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<16> lane_3_dark;
  set_at<0, 16, 16>(lane_3_dark, dark.extract<48, 63>());
  hw_uint<16> lane_3_dark_laplace_us_0;
  set_at<0, 16, 16>(lane_3_dark_laplace_us_0, dark_laplace_us_0.extract<48, 63>());
  auto result_3 = diff(lane_3_dark, lane_3_dark_laplace_us_0);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<16> lane_4_dark;
  set_at<0, 16, 16>(lane_4_dark, dark.extract<64, 79>());
  hw_uint<16> lane_4_dark_laplace_us_0;
  set_at<0, 16, 16>(lane_4_dark_laplace_us_0, dark_laplace_us_0.extract<64, 79>());
  auto result_4 = diff(lane_4_dark, lane_4_dark_laplace_us_0);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<16> lane_5_dark;
  set_at<0, 16, 16>(lane_5_dark, dark.extract<80, 95>());
  hw_uint<16> lane_5_dark_laplace_us_0;
  set_at<0, 16, 16>(lane_5_dark_laplace_us_0, dark_laplace_us_0.extract<80, 95>());
  auto result_5 = diff(lane_5_dark, lane_5_dark_laplace_us_0);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<16> lane_6_dark;
  set_at<0, 16, 16>(lane_6_dark, dark.extract<96, 111>());
  hw_uint<16> lane_6_dark_laplace_us_0;
  set_at<0, 16, 16>(lane_6_dark_laplace_us_0, dark_laplace_us_0.extract<96, 111>());
  auto result_6 = diff(lane_6_dark, lane_6_dark_laplace_us_0);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<16> lane_7_dark;
  set_at<0, 16, 16>(lane_7_dark, dark.extract<112, 127>());
  hw_uint<16> lane_7_dark_laplace_us_0;
  set_at<0, 16, 16>(lane_7_dark_laplace_us_0, dark_laplace_us_0.extract<112, 127>());
  auto result_7 = diff(lane_7_dark, lane_7_dark_laplace_us_0);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<16> lane_8_dark;
  set_at<0, 16, 16>(lane_8_dark, dark.extract<128, 143>());
  hw_uint<16> lane_8_dark_laplace_us_0;
  set_at<0, 16, 16>(lane_8_dark_laplace_us_0, dark_laplace_us_0.extract<128, 143>());
  auto result_8 = diff(lane_8_dark, lane_8_dark_laplace_us_0);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<16> lane_9_dark;
  set_at<0, 16, 16>(lane_9_dark, dark.extract<144, 159>());
  hw_uint<16> lane_9_dark_laplace_us_0;
  set_at<0, 16, 16>(lane_9_dark_laplace_us_0, dark_laplace_us_0.extract<144, 159>());
  auto result_9 = diff(lane_9_dark, lane_9_dark_laplace_us_0);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<16> lane_10_dark;
  set_at<0, 16, 16>(lane_10_dark, dark.extract<160, 175>());
  hw_uint<16> lane_10_dark_laplace_us_0;
  set_at<0, 16, 16>(lane_10_dark_laplace_us_0, dark_laplace_us_0.extract<160, 175>());
  auto result_10 = diff(lane_10_dark, lane_10_dark_laplace_us_0);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<16> lane_11_dark;
  set_at<0, 16, 16>(lane_11_dark, dark.extract<176, 191>());
  hw_uint<16> lane_11_dark_laplace_us_0;
  set_at<0, 16, 16>(lane_11_dark_laplace_us_0, dark_laplace_us_0.extract<176, 191>());
  auto result_11 = diff(lane_11_dark, lane_11_dark_laplace_us_0);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<16> lane_12_dark;
  set_at<0, 16, 16>(lane_12_dark, dark.extract<192, 207>());
  hw_uint<16> lane_12_dark_laplace_us_0;
  set_at<0, 16, 16>(lane_12_dark_laplace_us_0, dark_laplace_us_0.extract<192, 207>());
  auto result_12 = diff(lane_12_dark, lane_12_dark_laplace_us_0);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<16> lane_13_dark;
  set_at<0, 16, 16>(lane_13_dark, dark.extract<208, 223>());
  hw_uint<16> lane_13_dark_laplace_us_0;
  set_at<0, 16, 16>(lane_13_dark_laplace_us_0, dark_laplace_us_0.extract<208, 223>());
  auto result_13 = diff(lane_13_dark, lane_13_dark_laplace_us_0);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<16> lane_14_dark;
  set_at<0, 16, 16>(lane_14_dark, dark.extract<224, 239>());
  hw_uint<16> lane_14_dark_laplace_us_0;
  set_at<0, 16, 16>(lane_14_dark_laplace_us_0, dark_laplace_us_0.extract<224, 239>());
  auto result_14 = diff(lane_14_dark, lane_14_dark_laplace_us_0);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<16> lane_15_dark;
  set_at<0, 16, 16>(lane_15_dark, dark.extract<240, 255>());
  hw_uint<16> lane_15_dark_laplace_us_0;
  set_at<0, 16, 16>(lane_15_dark_laplace_us_0, dark_laplace_us_0.extract<240, 255>());
  auto result_15 = diff(lane_15_dark, lane_15_dark_laplace_us_0);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<16> lane_16_dark;
  set_at<0, 16, 16>(lane_16_dark, dark.extract<256, 271>());
  hw_uint<16> lane_16_dark_laplace_us_0;
  set_at<0, 16, 16>(lane_16_dark_laplace_us_0, dark_laplace_us_0.extract<256, 271>());
  auto result_16 = diff(lane_16_dark, lane_16_dark_laplace_us_0);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<16> lane_17_dark;
  set_at<0, 16, 16>(lane_17_dark, dark.extract<272, 287>());
  hw_uint<16> lane_17_dark_laplace_us_0;
  set_at<0, 16, 16>(lane_17_dark_laplace_us_0, dark_laplace_us_0.extract<272, 287>());
  auto result_17 = diff(lane_17_dark, lane_17_dark_laplace_us_0);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<16> lane_18_dark;
  set_at<0, 16, 16>(lane_18_dark, dark.extract<288, 303>());
  hw_uint<16> lane_18_dark_laplace_us_0;
  set_at<0, 16, 16>(lane_18_dark_laplace_us_0, dark_laplace_us_0.extract<288, 303>());
  auto result_18 = diff(lane_18_dark, lane_18_dark_laplace_us_0);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<16> lane_19_dark;
  set_at<0, 16, 16>(lane_19_dark, dark.extract<304, 319>());
  hw_uint<16> lane_19_dark_laplace_us_0;
  set_at<0, 16, 16>(lane_19_dark_laplace_us_0, dark_laplace_us_0.extract<304, 319>());
  auto result_19 = diff(lane_19_dark, lane_19_dark_laplace_us_0);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<16> lane_20_dark;
  set_at<0, 16, 16>(lane_20_dark, dark.extract<320, 335>());
  hw_uint<16> lane_20_dark_laplace_us_0;
  set_at<0, 16, 16>(lane_20_dark_laplace_us_0, dark_laplace_us_0.extract<320, 335>());
  auto result_20 = diff(lane_20_dark, lane_20_dark_laplace_us_0);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<16> lane_21_dark;
  set_at<0, 16, 16>(lane_21_dark, dark.extract<336, 351>());
  hw_uint<16> lane_21_dark_laplace_us_0;
  set_at<0, 16, 16>(lane_21_dark_laplace_us_0, dark_laplace_us_0.extract<336, 351>());
  auto result_21 = diff(lane_21_dark, lane_21_dark_laplace_us_0);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<16> lane_22_dark;
  set_at<0, 16, 16>(lane_22_dark, dark.extract<352, 367>());
  hw_uint<16> lane_22_dark_laplace_us_0;
  set_at<0, 16, 16>(lane_22_dark_laplace_us_0, dark_laplace_us_0.extract<352, 367>());
  auto result_22 = diff(lane_22_dark, lane_22_dark_laplace_us_0);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<16> lane_23_dark;
  set_at<0, 16, 16>(lane_23_dark, dark.extract<368, 383>());
  hw_uint<16> lane_23_dark_laplace_us_0;
  set_at<0, 16, 16>(lane_23_dark_laplace_us_0, dark_laplace_us_0.extract<368, 383>());
  auto result_23 = diff(lane_23_dark, lane_23_dark_laplace_us_0);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<16> lane_24_dark;
  set_at<0, 16, 16>(lane_24_dark, dark.extract<384, 399>());
  hw_uint<16> lane_24_dark_laplace_us_0;
  set_at<0, 16, 16>(lane_24_dark_laplace_us_0, dark_laplace_us_0.extract<384, 399>());
  auto result_24 = diff(lane_24_dark, lane_24_dark_laplace_us_0);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<16> lane_25_dark;
  set_at<0, 16, 16>(lane_25_dark, dark.extract<400, 415>());
  hw_uint<16> lane_25_dark_laplace_us_0;
  set_at<0, 16, 16>(lane_25_dark_laplace_us_0, dark_laplace_us_0.extract<400, 415>());
  auto result_25 = diff(lane_25_dark, lane_25_dark_laplace_us_0);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<16> lane_26_dark;
  set_at<0, 16, 16>(lane_26_dark, dark.extract<416, 431>());
  hw_uint<16> lane_26_dark_laplace_us_0;
  set_at<0, 16, 16>(lane_26_dark_laplace_us_0, dark_laplace_us_0.extract<416, 431>());
  auto result_26 = diff(lane_26_dark, lane_26_dark_laplace_us_0);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<16> lane_27_dark;
  set_at<0, 16, 16>(lane_27_dark, dark.extract<432, 447>());
  hw_uint<16> lane_27_dark_laplace_us_0;
  set_at<0, 16, 16>(lane_27_dark_laplace_us_0, dark_laplace_us_0.extract<432, 447>());
  auto result_27 = diff(lane_27_dark, lane_27_dark_laplace_us_0);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<16> lane_28_dark;
  set_at<0, 16, 16>(lane_28_dark, dark.extract<448, 463>());
  hw_uint<16> lane_28_dark_laplace_us_0;
  set_at<0, 16, 16>(lane_28_dark_laplace_us_0, dark_laplace_us_0.extract<448, 463>());
  auto result_28 = diff(lane_28_dark, lane_28_dark_laplace_us_0);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<16> lane_29_dark;
  set_at<0, 16, 16>(lane_29_dark, dark.extract<464, 479>());
  hw_uint<16> lane_29_dark_laplace_us_0;
  set_at<0, 16, 16>(lane_29_dark_laplace_us_0, dark_laplace_us_0.extract<464, 479>());
  auto result_29 = diff(lane_29_dark, lane_29_dark_laplace_us_0);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<16> lane_30_dark;
  set_at<0, 16, 16>(lane_30_dark, dark.extract<480, 495>());
  hw_uint<16> lane_30_dark_laplace_us_0;
  set_at<0, 16, 16>(lane_30_dark_laplace_us_0, dark_laplace_us_0.extract<480, 495>());
  auto result_30 = diff(lane_30_dark, lane_30_dark_laplace_us_0);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<16> lane_31_dark;
  set_at<0, 16, 16>(lane_31_dark, dark.extract<496, 511>());
  hw_uint<16> lane_31_dark_laplace_us_0;
  set_at<0, 16, 16>(lane_31_dark_laplace_us_0, dark_laplace_us_0.extract<496, 511>());
  auto result_31 = diff(lane_31_dark, lane_31_dark_laplace_us_0);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // fused_level_3_update_0 unroll factor: 4
hw_uint<64>  psef_weighted_merge_unrolled_4(hw_uint<64>& bright_gauss_ds_3, hw_uint<64>& dark_gauss_ds_3, hw_uint<64>& bright_weights_normed_gauss_ds_3, hw_uint<64>& dark_weights_normed_gauss_ds_3) {
  hw_uint<64> whole_result;

  hw_uint<16> lane_0_bright_gauss_ds_3;
  set_at<0, 16, 16>(lane_0_bright_gauss_ds_3, bright_gauss_ds_3.extract<0, 15>());
  hw_uint<16> lane_0_dark_gauss_ds_3;
  set_at<0, 16, 16>(lane_0_dark_gauss_ds_3, dark_gauss_ds_3.extract<0, 15>());
  hw_uint<16> lane_0_bright_weights_normed_gauss_ds_3;
  set_at<0, 16, 16>(lane_0_bright_weights_normed_gauss_ds_3, bright_weights_normed_gauss_ds_3.extract<0, 15>());
  hw_uint<16> lane_0_dark_weights_normed_gauss_ds_3;
  set_at<0, 16, 16>(lane_0_dark_weights_normed_gauss_ds_3, dark_weights_normed_gauss_ds_3.extract<0, 15>());
  auto result_0 = psef_weighted_merge(lane_0_bright_gauss_ds_3, lane_0_dark_gauss_ds_3, lane_0_bright_weights_normed_gauss_ds_3, lane_0_dark_weights_normed_gauss_ds_3);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<16> lane_1_bright_gauss_ds_3;
  set_at<0, 16, 16>(lane_1_bright_gauss_ds_3, bright_gauss_ds_3.extract<16, 31>());
  hw_uint<16> lane_1_dark_gauss_ds_3;
  set_at<0, 16, 16>(lane_1_dark_gauss_ds_3, dark_gauss_ds_3.extract<16, 31>());
  hw_uint<16> lane_1_bright_weights_normed_gauss_ds_3;
  set_at<0, 16, 16>(lane_1_bright_weights_normed_gauss_ds_3, bright_weights_normed_gauss_ds_3.extract<16, 31>());
  hw_uint<16> lane_1_dark_weights_normed_gauss_ds_3;
  set_at<0, 16, 16>(lane_1_dark_weights_normed_gauss_ds_3, dark_weights_normed_gauss_ds_3.extract<16, 31>());
  auto result_1 = psef_weighted_merge(lane_1_bright_gauss_ds_3, lane_1_dark_gauss_ds_3, lane_1_bright_weights_normed_gauss_ds_3, lane_1_dark_weights_normed_gauss_ds_3);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<16> lane_2_bright_gauss_ds_3;
  set_at<0, 16, 16>(lane_2_bright_gauss_ds_3, bright_gauss_ds_3.extract<32, 47>());
  hw_uint<16> lane_2_dark_gauss_ds_3;
  set_at<0, 16, 16>(lane_2_dark_gauss_ds_3, dark_gauss_ds_3.extract<32, 47>());
  hw_uint<16> lane_2_bright_weights_normed_gauss_ds_3;
  set_at<0, 16, 16>(lane_2_bright_weights_normed_gauss_ds_3, bright_weights_normed_gauss_ds_3.extract<32, 47>());
  hw_uint<16> lane_2_dark_weights_normed_gauss_ds_3;
  set_at<0, 16, 16>(lane_2_dark_weights_normed_gauss_ds_3, dark_weights_normed_gauss_ds_3.extract<32, 47>());
  auto result_2 = psef_weighted_merge(lane_2_bright_gauss_ds_3, lane_2_dark_gauss_ds_3, lane_2_bright_weights_normed_gauss_ds_3, lane_2_dark_weights_normed_gauss_ds_3);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<16> lane_3_bright_gauss_ds_3;
  set_at<0, 16, 16>(lane_3_bright_gauss_ds_3, bright_gauss_ds_3.extract<48, 63>());
  hw_uint<16> lane_3_dark_gauss_ds_3;
  set_at<0, 16, 16>(lane_3_dark_gauss_ds_3, dark_gauss_ds_3.extract<48, 63>());
  hw_uint<16> lane_3_bright_weights_normed_gauss_ds_3;
  set_at<0, 16, 16>(lane_3_bright_weights_normed_gauss_ds_3, bright_weights_normed_gauss_ds_3.extract<48, 63>());
  hw_uint<16> lane_3_dark_weights_normed_gauss_ds_3;
  set_at<0, 16, 16>(lane_3_dark_weights_normed_gauss_ds_3, dark_weights_normed_gauss_ds_3.extract<48, 63>());
  auto result_3 = psef_weighted_merge(lane_3_bright_gauss_ds_3, lane_3_dark_gauss_ds_3, lane_3_bright_weights_normed_gauss_ds_3, lane_3_dark_weights_normed_gauss_ds_3);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // fused_level_2_update_0 unroll factor: 8
hw_uint<128>  psef_weighted_merge_unrolled_8(hw_uint<128>& bright_laplace_diff_2, hw_uint<128>& dark_laplace_diff_2, hw_uint<128>& bright_weights_normed_gauss_ds_2, hw_uint<128>& dark_weights_normed_gauss_ds_2) {
  hw_uint<128> whole_result;

  hw_uint<16> lane_0_bright_laplace_diff_2;
  set_at<0, 16, 16>(lane_0_bright_laplace_diff_2, bright_laplace_diff_2.extract<0, 15>());
  hw_uint<16> lane_0_dark_laplace_diff_2;
  set_at<0, 16, 16>(lane_0_dark_laplace_diff_2, dark_laplace_diff_2.extract<0, 15>());
  hw_uint<16> lane_0_bright_weights_normed_gauss_ds_2;
  set_at<0, 16, 16>(lane_0_bright_weights_normed_gauss_ds_2, bright_weights_normed_gauss_ds_2.extract<0, 15>());
  hw_uint<16> lane_0_dark_weights_normed_gauss_ds_2;
  set_at<0, 16, 16>(lane_0_dark_weights_normed_gauss_ds_2, dark_weights_normed_gauss_ds_2.extract<0, 15>());
  auto result_0 = psef_weighted_merge(lane_0_bright_laplace_diff_2, lane_0_dark_laplace_diff_2, lane_0_bright_weights_normed_gauss_ds_2, lane_0_dark_weights_normed_gauss_ds_2);
  set_at<0, 128, 16>(whole_result, result_0);

  hw_uint<16> lane_1_bright_laplace_diff_2;
  set_at<0, 16, 16>(lane_1_bright_laplace_diff_2, bright_laplace_diff_2.extract<16, 31>());
  hw_uint<16> lane_1_dark_laplace_diff_2;
  set_at<0, 16, 16>(lane_1_dark_laplace_diff_2, dark_laplace_diff_2.extract<16, 31>());
  hw_uint<16> lane_1_bright_weights_normed_gauss_ds_2;
  set_at<0, 16, 16>(lane_1_bright_weights_normed_gauss_ds_2, bright_weights_normed_gauss_ds_2.extract<16, 31>());
  hw_uint<16> lane_1_dark_weights_normed_gauss_ds_2;
  set_at<0, 16, 16>(lane_1_dark_weights_normed_gauss_ds_2, dark_weights_normed_gauss_ds_2.extract<16, 31>());
  auto result_1 = psef_weighted_merge(lane_1_bright_laplace_diff_2, lane_1_dark_laplace_diff_2, lane_1_bright_weights_normed_gauss_ds_2, lane_1_dark_weights_normed_gauss_ds_2);
  set_at<16, 128, 16>(whole_result, result_1);

  hw_uint<16> lane_2_bright_laplace_diff_2;
  set_at<0, 16, 16>(lane_2_bright_laplace_diff_2, bright_laplace_diff_2.extract<32, 47>());
  hw_uint<16> lane_2_dark_laplace_diff_2;
  set_at<0, 16, 16>(lane_2_dark_laplace_diff_2, dark_laplace_diff_2.extract<32, 47>());
  hw_uint<16> lane_2_bright_weights_normed_gauss_ds_2;
  set_at<0, 16, 16>(lane_2_bright_weights_normed_gauss_ds_2, bright_weights_normed_gauss_ds_2.extract<32, 47>());
  hw_uint<16> lane_2_dark_weights_normed_gauss_ds_2;
  set_at<0, 16, 16>(lane_2_dark_weights_normed_gauss_ds_2, dark_weights_normed_gauss_ds_2.extract<32, 47>());
  auto result_2 = psef_weighted_merge(lane_2_bright_laplace_diff_2, lane_2_dark_laplace_diff_2, lane_2_bright_weights_normed_gauss_ds_2, lane_2_dark_weights_normed_gauss_ds_2);
  set_at<32, 128, 16>(whole_result, result_2);

  hw_uint<16> lane_3_bright_laplace_diff_2;
  set_at<0, 16, 16>(lane_3_bright_laplace_diff_2, bright_laplace_diff_2.extract<48, 63>());
  hw_uint<16> lane_3_dark_laplace_diff_2;
  set_at<0, 16, 16>(lane_3_dark_laplace_diff_2, dark_laplace_diff_2.extract<48, 63>());
  hw_uint<16> lane_3_bright_weights_normed_gauss_ds_2;
  set_at<0, 16, 16>(lane_3_bright_weights_normed_gauss_ds_2, bright_weights_normed_gauss_ds_2.extract<48, 63>());
  hw_uint<16> lane_3_dark_weights_normed_gauss_ds_2;
  set_at<0, 16, 16>(lane_3_dark_weights_normed_gauss_ds_2, dark_weights_normed_gauss_ds_2.extract<48, 63>());
  auto result_3 = psef_weighted_merge(lane_3_bright_laplace_diff_2, lane_3_dark_laplace_diff_2, lane_3_bright_weights_normed_gauss_ds_2, lane_3_dark_weights_normed_gauss_ds_2);
  set_at<48, 128, 16>(whole_result, result_3);

  hw_uint<16> lane_4_bright_laplace_diff_2;
  set_at<0, 16, 16>(lane_4_bright_laplace_diff_2, bright_laplace_diff_2.extract<64, 79>());
  hw_uint<16> lane_4_dark_laplace_diff_2;
  set_at<0, 16, 16>(lane_4_dark_laplace_diff_2, dark_laplace_diff_2.extract<64, 79>());
  hw_uint<16> lane_4_bright_weights_normed_gauss_ds_2;
  set_at<0, 16, 16>(lane_4_bright_weights_normed_gauss_ds_2, bright_weights_normed_gauss_ds_2.extract<64, 79>());
  hw_uint<16> lane_4_dark_weights_normed_gauss_ds_2;
  set_at<0, 16, 16>(lane_4_dark_weights_normed_gauss_ds_2, dark_weights_normed_gauss_ds_2.extract<64, 79>());
  auto result_4 = psef_weighted_merge(lane_4_bright_laplace_diff_2, lane_4_dark_laplace_diff_2, lane_4_bright_weights_normed_gauss_ds_2, lane_4_dark_weights_normed_gauss_ds_2);
  set_at<64, 128, 16>(whole_result, result_4);

  hw_uint<16> lane_5_bright_laplace_diff_2;
  set_at<0, 16, 16>(lane_5_bright_laplace_diff_2, bright_laplace_diff_2.extract<80, 95>());
  hw_uint<16> lane_5_dark_laplace_diff_2;
  set_at<0, 16, 16>(lane_5_dark_laplace_diff_2, dark_laplace_diff_2.extract<80, 95>());
  hw_uint<16> lane_5_bright_weights_normed_gauss_ds_2;
  set_at<0, 16, 16>(lane_5_bright_weights_normed_gauss_ds_2, bright_weights_normed_gauss_ds_2.extract<80, 95>());
  hw_uint<16> lane_5_dark_weights_normed_gauss_ds_2;
  set_at<0, 16, 16>(lane_5_dark_weights_normed_gauss_ds_2, dark_weights_normed_gauss_ds_2.extract<80, 95>());
  auto result_5 = psef_weighted_merge(lane_5_bright_laplace_diff_2, lane_5_dark_laplace_diff_2, lane_5_bright_weights_normed_gauss_ds_2, lane_5_dark_weights_normed_gauss_ds_2);
  set_at<80, 128, 16>(whole_result, result_5);

  hw_uint<16> lane_6_bright_laplace_diff_2;
  set_at<0, 16, 16>(lane_6_bright_laplace_diff_2, bright_laplace_diff_2.extract<96, 111>());
  hw_uint<16> lane_6_dark_laplace_diff_2;
  set_at<0, 16, 16>(lane_6_dark_laplace_diff_2, dark_laplace_diff_2.extract<96, 111>());
  hw_uint<16> lane_6_bright_weights_normed_gauss_ds_2;
  set_at<0, 16, 16>(lane_6_bright_weights_normed_gauss_ds_2, bright_weights_normed_gauss_ds_2.extract<96, 111>());
  hw_uint<16> lane_6_dark_weights_normed_gauss_ds_2;
  set_at<0, 16, 16>(lane_6_dark_weights_normed_gauss_ds_2, dark_weights_normed_gauss_ds_2.extract<96, 111>());
  auto result_6 = psef_weighted_merge(lane_6_bright_laplace_diff_2, lane_6_dark_laplace_diff_2, lane_6_bright_weights_normed_gauss_ds_2, lane_6_dark_weights_normed_gauss_ds_2);
  set_at<96, 128, 16>(whole_result, result_6);

  hw_uint<16> lane_7_bright_laplace_diff_2;
  set_at<0, 16, 16>(lane_7_bright_laplace_diff_2, bright_laplace_diff_2.extract<112, 127>());
  hw_uint<16> lane_7_dark_laplace_diff_2;
  set_at<0, 16, 16>(lane_7_dark_laplace_diff_2, dark_laplace_diff_2.extract<112, 127>());
  hw_uint<16> lane_7_bright_weights_normed_gauss_ds_2;
  set_at<0, 16, 16>(lane_7_bright_weights_normed_gauss_ds_2, bright_weights_normed_gauss_ds_2.extract<112, 127>());
  hw_uint<16> lane_7_dark_weights_normed_gauss_ds_2;
  set_at<0, 16, 16>(lane_7_dark_weights_normed_gauss_ds_2, dark_weights_normed_gauss_ds_2.extract<112, 127>());
  auto result_7 = psef_weighted_merge(lane_7_bright_laplace_diff_2, lane_7_dark_laplace_diff_2, lane_7_bright_weights_normed_gauss_ds_2, lane_7_dark_weights_normed_gauss_ds_2);
  set_at<112, 128, 16>(whole_result, result_7);
  return whole_result;
}

  // fused_level_1_update_0 unroll factor: 16
hw_uint<256>  psef_weighted_merge_unrolled_16(hw_uint<256>& bright_laplace_diff_1, hw_uint<256>& dark_laplace_diff_1, hw_uint<256>& bright_weights_normed_gauss_ds_1, hw_uint<256>& dark_weights_normed_gauss_ds_1) {
  hw_uint<256> whole_result;

  hw_uint<16> lane_0_bright_laplace_diff_1;
  set_at<0, 16, 16>(lane_0_bright_laplace_diff_1, bright_laplace_diff_1.extract<0, 15>());
  hw_uint<16> lane_0_dark_laplace_diff_1;
  set_at<0, 16, 16>(lane_0_dark_laplace_diff_1, dark_laplace_diff_1.extract<0, 15>());
  hw_uint<16> lane_0_bright_weights_normed_gauss_ds_1;
  set_at<0, 16, 16>(lane_0_bright_weights_normed_gauss_ds_1, bright_weights_normed_gauss_ds_1.extract<0, 15>());
  hw_uint<16> lane_0_dark_weights_normed_gauss_ds_1;
  set_at<0, 16, 16>(lane_0_dark_weights_normed_gauss_ds_1, dark_weights_normed_gauss_ds_1.extract<0, 15>());
  auto result_0 = psef_weighted_merge(lane_0_bright_laplace_diff_1, lane_0_dark_laplace_diff_1, lane_0_bright_weights_normed_gauss_ds_1, lane_0_dark_weights_normed_gauss_ds_1);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<16> lane_1_bright_laplace_diff_1;
  set_at<0, 16, 16>(lane_1_bright_laplace_diff_1, bright_laplace_diff_1.extract<16, 31>());
  hw_uint<16> lane_1_dark_laplace_diff_1;
  set_at<0, 16, 16>(lane_1_dark_laplace_diff_1, dark_laplace_diff_1.extract<16, 31>());
  hw_uint<16> lane_1_bright_weights_normed_gauss_ds_1;
  set_at<0, 16, 16>(lane_1_bright_weights_normed_gauss_ds_1, bright_weights_normed_gauss_ds_1.extract<16, 31>());
  hw_uint<16> lane_1_dark_weights_normed_gauss_ds_1;
  set_at<0, 16, 16>(lane_1_dark_weights_normed_gauss_ds_1, dark_weights_normed_gauss_ds_1.extract<16, 31>());
  auto result_1 = psef_weighted_merge(lane_1_bright_laplace_diff_1, lane_1_dark_laplace_diff_1, lane_1_bright_weights_normed_gauss_ds_1, lane_1_dark_weights_normed_gauss_ds_1);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<16> lane_2_bright_laplace_diff_1;
  set_at<0, 16, 16>(lane_2_bright_laplace_diff_1, bright_laplace_diff_1.extract<32, 47>());
  hw_uint<16> lane_2_dark_laplace_diff_1;
  set_at<0, 16, 16>(lane_2_dark_laplace_diff_1, dark_laplace_diff_1.extract<32, 47>());
  hw_uint<16> lane_2_bright_weights_normed_gauss_ds_1;
  set_at<0, 16, 16>(lane_2_bright_weights_normed_gauss_ds_1, bright_weights_normed_gauss_ds_1.extract<32, 47>());
  hw_uint<16> lane_2_dark_weights_normed_gauss_ds_1;
  set_at<0, 16, 16>(lane_2_dark_weights_normed_gauss_ds_1, dark_weights_normed_gauss_ds_1.extract<32, 47>());
  auto result_2 = psef_weighted_merge(lane_2_bright_laplace_diff_1, lane_2_dark_laplace_diff_1, lane_2_bright_weights_normed_gauss_ds_1, lane_2_dark_weights_normed_gauss_ds_1);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<16> lane_3_bright_laplace_diff_1;
  set_at<0, 16, 16>(lane_3_bright_laplace_diff_1, bright_laplace_diff_1.extract<48, 63>());
  hw_uint<16> lane_3_dark_laplace_diff_1;
  set_at<0, 16, 16>(lane_3_dark_laplace_diff_1, dark_laplace_diff_1.extract<48, 63>());
  hw_uint<16> lane_3_bright_weights_normed_gauss_ds_1;
  set_at<0, 16, 16>(lane_3_bright_weights_normed_gauss_ds_1, bright_weights_normed_gauss_ds_1.extract<48, 63>());
  hw_uint<16> lane_3_dark_weights_normed_gauss_ds_1;
  set_at<0, 16, 16>(lane_3_dark_weights_normed_gauss_ds_1, dark_weights_normed_gauss_ds_1.extract<48, 63>());
  auto result_3 = psef_weighted_merge(lane_3_bright_laplace_diff_1, lane_3_dark_laplace_diff_1, lane_3_bright_weights_normed_gauss_ds_1, lane_3_dark_weights_normed_gauss_ds_1);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<16> lane_4_bright_laplace_diff_1;
  set_at<0, 16, 16>(lane_4_bright_laplace_diff_1, bright_laplace_diff_1.extract<64, 79>());
  hw_uint<16> lane_4_dark_laplace_diff_1;
  set_at<0, 16, 16>(lane_4_dark_laplace_diff_1, dark_laplace_diff_1.extract<64, 79>());
  hw_uint<16> lane_4_bright_weights_normed_gauss_ds_1;
  set_at<0, 16, 16>(lane_4_bright_weights_normed_gauss_ds_1, bright_weights_normed_gauss_ds_1.extract<64, 79>());
  hw_uint<16> lane_4_dark_weights_normed_gauss_ds_1;
  set_at<0, 16, 16>(lane_4_dark_weights_normed_gauss_ds_1, dark_weights_normed_gauss_ds_1.extract<64, 79>());
  auto result_4 = psef_weighted_merge(lane_4_bright_laplace_diff_1, lane_4_dark_laplace_diff_1, lane_4_bright_weights_normed_gauss_ds_1, lane_4_dark_weights_normed_gauss_ds_1);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<16> lane_5_bright_laplace_diff_1;
  set_at<0, 16, 16>(lane_5_bright_laplace_diff_1, bright_laplace_diff_1.extract<80, 95>());
  hw_uint<16> lane_5_dark_laplace_diff_1;
  set_at<0, 16, 16>(lane_5_dark_laplace_diff_1, dark_laplace_diff_1.extract<80, 95>());
  hw_uint<16> lane_5_bright_weights_normed_gauss_ds_1;
  set_at<0, 16, 16>(lane_5_bright_weights_normed_gauss_ds_1, bright_weights_normed_gauss_ds_1.extract<80, 95>());
  hw_uint<16> lane_5_dark_weights_normed_gauss_ds_1;
  set_at<0, 16, 16>(lane_5_dark_weights_normed_gauss_ds_1, dark_weights_normed_gauss_ds_1.extract<80, 95>());
  auto result_5 = psef_weighted_merge(lane_5_bright_laplace_diff_1, lane_5_dark_laplace_diff_1, lane_5_bright_weights_normed_gauss_ds_1, lane_5_dark_weights_normed_gauss_ds_1);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<16> lane_6_bright_laplace_diff_1;
  set_at<0, 16, 16>(lane_6_bright_laplace_diff_1, bright_laplace_diff_1.extract<96, 111>());
  hw_uint<16> lane_6_dark_laplace_diff_1;
  set_at<0, 16, 16>(lane_6_dark_laplace_diff_1, dark_laplace_diff_1.extract<96, 111>());
  hw_uint<16> lane_6_bright_weights_normed_gauss_ds_1;
  set_at<0, 16, 16>(lane_6_bright_weights_normed_gauss_ds_1, bright_weights_normed_gauss_ds_1.extract<96, 111>());
  hw_uint<16> lane_6_dark_weights_normed_gauss_ds_1;
  set_at<0, 16, 16>(lane_6_dark_weights_normed_gauss_ds_1, dark_weights_normed_gauss_ds_1.extract<96, 111>());
  auto result_6 = psef_weighted_merge(lane_6_bright_laplace_diff_1, lane_6_dark_laplace_diff_1, lane_6_bright_weights_normed_gauss_ds_1, lane_6_dark_weights_normed_gauss_ds_1);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<16> lane_7_bright_laplace_diff_1;
  set_at<0, 16, 16>(lane_7_bright_laplace_diff_1, bright_laplace_diff_1.extract<112, 127>());
  hw_uint<16> lane_7_dark_laplace_diff_1;
  set_at<0, 16, 16>(lane_7_dark_laplace_diff_1, dark_laplace_diff_1.extract<112, 127>());
  hw_uint<16> lane_7_bright_weights_normed_gauss_ds_1;
  set_at<0, 16, 16>(lane_7_bright_weights_normed_gauss_ds_1, bright_weights_normed_gauss_ds_1.extract<112, 127>());
  hw_uint<16> lane_7_dark_weights_normed_gauss_ds_1;
  set_at<0, 16, 16>(lane_7_dark_weights_normed_gauss_ds_1, dark_weights_normed_gauss_ds_1.extract<112, 127>());
  auto result_7 = psef_weighted_merge(lane_7_bright_laplace_diff_1, lane_7_dark_laplace_diff_1, lane_7_bright_weights_normed_gauss_ds_1, lane_7_dark_weights_normed_gauss_ds_1);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<16> lane_8_bright_laplace_diff_1;
  set_at<0, 16, 16>(lane_8_bright_laplace_diff_1, bright_laplace_diff_1.extract<128, 143>());
  hw_uint<16> lane_8_dark_laplace_diff_1;
  set_at<0, 16, 16>(lane_8_dark_laplace_diff_1, dark_laplace_diff_1.extract<128, 143>());
  hw_uint<16> lane_8_bright_weights_normed_gauss_ds_1;
  set_at<0, 16, 16>(lane_8_bright_weights_normed_gauss_ds_1, bright_weights_normed_gauss_ds_1.extract<128, 143>());
  hw_uint<16> lane_8_dark_weights_normed_gauss_ds_1;
  set_at<0, 16, 16>(lane_8_dark_weights_normed_gauss_ds_1, dark_weights_normed_gauss_ds_1.extract<128, 143>());
  auto result_8 = psef_weighted_merge(lane_8_bright_laplace_diff_1, lane_8_dark_laplace_diff_1, lane_8_bright_weights_normed_gauss_ds_1, lane_8_dark_weights_normed_gauss_ds_1);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<16> lane_9_bright_laplace_diff_1;
  set_at<0, 16, 16>(lane_9_bright_laplace_diff_1, bright_laplace_diff_1.extract<144, 159>());
  hw_uint<16> lane_9_dark_laplace_diff_1;
  set_at<0, 16, 16>(lane_9_dark_laplace_diff_1, dark_laplace_diff_1.extract<144, 159>());
  hw_uint<16> lane_9_bright_weights_normed_gauss_ds_1;
  set_at<0, 16, 16>(lane_9_bright_weights_normed_gauss_ds_1, bright_weights_normed_gauss_ds_1.extract<144, 159>());
  hw_uint<16> lane_9_dark_weights_normed_gauss_ds_1;
  set_at<0, 16, 16>(lane_9_dark_weights_normed_gauss_ds_1, dark_weights_normed_gauss_ds_1.extract<144, 159>());
  auto result_9 = psef_weighted_merge(lane_9_bright_laplace_diff_1, lane_9_dark_laplace_diff_1, lane_9_bright_weights_normed_gauss_ds_1, lane_9_dark_weights_normed_gauss_ds_1);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<16> lane_10_bright_laplace_diff_1;
  set_at<0, 16, 16>(lane_10_bright_laplace_diff_1, bright_laplace_diff_1.extract<160, 175>());
  hw_uint<16> lane_10_dark_laplace_diff_1;
  set_at<0, 16, 16>(lane_10_dark_laplace_diff_1, dark_laplace_diff_1.extract<160, 175>());
  hw_uint<16> lane_10_bright_weights_normed_gauss_ds_1;
  set_at<0, 16, 16>(lane_10_bright_weights_normed_gauss_ds_1, bright_weights_normed_gauss_ds_1.extract<160, 175>());
  hw_uint<16> lane_10_dark_weights_normed_gauss_ds_1;
  set_at<0, 16, 16>(lane_10_dark_weights_normed_gauss_ds_1, dark_weights_normed_gauss_ds_1.extract<160, 175>());
  auto result_10 = psef_weighted_merge(lane_10_bright_laplace_diff_1, lane_10_dark_laplace_diff_1, lane_10_bright_weights_normed_gauss_ds_1, lane_10_dark_weights_normed_gauss_ds_1);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<16> lane_11_bright_laplace_diff_1;
  set_at<0, 16, 16>(lane_11_bright_laplace_diff_1, bright_laplace_diff_1.extract<176, 191>());
  hw_uint<16> lane_11_dark_laplace_diff_1;
  set_at<0, 16, 16>(lane_11_dark_laplace_diff_1, dark_laplace_diff_1.extract<176, 191>());
  hw_uint<16> lane_11_bright_weights_normed_gauss_ds_1;
  set_at<0, 16, 16>(lane_11_bright_weights_normed_gauss_ds_1, bright_weights_normed_gauss_ds_1.extract<176, 191>());
  hw_uint<16> lane_11_dark_weights_normed_gauss_ds_1;
  set_at<0, 16, 16>(lane_11_dark_weights_normed_gauss_ds_1, dark_weights_normed_gauss_ds_1.extract<176, 191>());
  auto result_11 = psef_weighted_merge(lane_11_bright_laplace_diff_1, lane_11_dark_laplace_diff_1, lane_11_bright_weights_normed_gauss_ds_1, lane_11_dark_weights_normed_gauss_ds_1);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<16> lane_12_bright_laplace_diff_1;
  set_at<0, 16, 16>(lane_12_bright_laplace_diff_1, bright_laplace_diff_1.extract<192, 207>());
  hw_uint<16> lane_12_dark_laplace_diff_1;
  set_at<0, 16, 16>(lane_12_dark_laplace_diff_1, dark_laplace_diff_1.extract<192, 207>());
  hw_uint<16> lane_12_bright_weights_normed_gauss_ds_1;
  set_at<0, 16, 16>(lane_12_bright_weights_normed_gauss_ds_1, bright_weights_normed_gauss_ds_1.extract<192, 207>());
  hw_uint<16> lane_12_dark_weights_normed_gauss_ds_1;
  set_at<0, 16, 16>(lane_12_dark_weights_normed_gauss_ds_1, dark_weights_normed_gauss_ds_1.extract<192, 207>());
  auto result_12 = psef_weighted_merge(lane_12_bright_laplace_diff_1, lane_12_dark_laplace_diff_1, lane_12_bright_weights_normed_gauss_ds_1, lane_12_dark_weights_normed_gauss_ds_1);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<16> lane_13_bright_laplace_diff_1;
  set_at<0, 16, 16>(lane_13_bright_laplace_diff_1, bright_laplace_diff_1.extract<208, 223>());
  hw_uint<16> lane_13_dark_laplace_diff_1;
  set_at<0, 16, 16>(lane_13_dark_laplace_diff_1, dark_laplace_diff_1.extract<208, 223>());
  hw_uint<16> lane_13_bright_weights_normed_gauss_ds_1;
  set_at<0, 16, 16>(lane_13_bright_weights_normed_gauss_ds_1, bright_weights_normed_gauss_ds_1.extract<208, 223>());
  hw_uint<16> lane_13_dark_weights_normed_gauss_ds_1;
  set_at<0, 16, 16>(lane_13_dark_weights_normed_gauss_ds_1, dark_weights_normed_gauss_ds_1.extract<208, 223>());
  auto result_13 = psef_weighted_merge(lane_13_bright_laplace_diff_1, lane_13_dark_laplace_diff_1, lane_13_bright_weights_normed_gauss_ds_1, lane_13_dark_weights_normed_gauss_ds_1);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<16> lane_14_bright_laplace_diff_1;
  set_at<0, 16, 16>(lane_14_bright_laplace_diff_1, bright_laplace_diff_1.extract<224, 239>());
  hw_uint<16> lane_14_dark_laplace_diff_1;
  set_at<0, 16, 16>(lane_14_dark_laplace_diff_1, dark_laplace_diff_1.extract<224, 239>());
  hw_uint<16> lane_14_bright_weights_normed_gauss_ds_1;
  set_at<0, 16, 16>(lane_14_bright_weights_normed_gauss_ds_1, bright_weights_normed_gauss_ds_1.extract<224, 239>());
  hw_uint<16> lane_14_dark_weights_normed_gauss_ds_1;
  set_at<0, 16, 16>(lane_14_dark_weights_normed_gauss_ds_1, dark_weights_normed_gauss_ds_1.extract<224, 239>());
  auto result_14 = psef_weighted_merge(lane_14_bright_laplace_diff_1, lane_14_dark_laplace_diff_1, lane_14_bright_weights_normed_gauss_ds_1, lane_14_dark_weights_normed_gauss_ds_1);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<16> lane_15_bright_laplace_diff_1;
  set_at<0, 16, 16>(lane_15_bright_laplace_diff_1, bright_laplace_diff_1.extract<240, 255>());
  hw_uint<16> lane_15_dark_laplace_diff_1;
  set_at<0, 16, 16>(lane_15_dark_laplace_diff_1, dark_laplace_diff_1.extract<240, 255>());
  hw_uint<16> lane_15_bright_weights_normed_gauss_ds_1;
  set_at<0, 16, 16>(lane_15_bright_weights_normed_gauss_ds_1, bright_weights_normed_gauss_ds_1.extract<240, 255>());
  hw_uint<16> lane_15_dark_weights_normed_gauss_ds_1;
  set_at<0, 16, 16>(lane_15_dark_weights_normed_gauss_ds_1, dark_weights_normed_gauss_ds_1.extract<240, 255>());
  auto result_15 = psef_weighted_merge(lane_15_bright_laplace_diff_1, lane_15_dark_laplace_diff_1, lane_15_bright_weights_normed_gauss_ds_1, lane_15_dark_weights_normed_gauss_ds_1);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // fused_level_0_update_0 unroll factor: 32
hw_uint<512>  psef_weighted_merge_unrolled_32(hw_uint<512>& bright_laplace_diff_0, hw_uint<512>& dark_laplace_diff_0, hw_uint<512>& bright_weights_normed, hw_uint<512>& dark_weights_normed) {
  hw_uint<512> whole_result;

  hw_uint<16> lane_0_bright_laplace_diff_0;
  set_at<0, 16, 16>(lane_0_bright_laplace_diff_0, bright_laplace_diff_0.extract<0, 15>());
  hw_uint<16> lane_0_dark_laplace_diff_0;
  set_at<0, 16, 16>(lane_0_dark_laplace_diff_0, dark_laplace_diff_0.extract<0, 15>());
  hw_uint<16> lane_0_bright_weights_normed;
  set_at<0, 16, 16>(lane_0_bright_weights_normed, bright_weights_normed.extract<0, 15>());
  hw_uint<16> lane_0_dark_weights_normed;
  set_at<0, 16, 16>(lane_0_dark_weights_normed, dark_weights_normed.extract<0, 15>());
  auto result_0 = psef_weighted_merge(lane_0_bright_laplace_diff_0, lane_0_dark_laplace_diff_0, lane_0_bright_weights_normed, lane_0_dark_weights_normed);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<16> lane_1_bright_laplace_diff_0;
  set_at<0, 16, 16>(lane_1_bright_laplace_diff_0, bright_laplace_diff_0.extract<16, 31>());
  hw_uint<16> lane_1_dark_laplace_diff_0;
  set_at<0, 16, 16>(lane_1_dark_laplace_diff_0, dark_laplace_diff_0.extract<16, 31>());
  hw_uint<16> lane_1_bright_weights_normed;
  set_at<0, 16, 16>(lane_1_bright_weights_normed, bright_weights_normed.extract<16, 31>());
  hw_uint<16> lane_1_dark_weights_normed;
  set_at<0, 16, 16>(lane_1_dark_weights_normed, dark_weights_normed.extract<16, 31>());
  auto result_1 = psef_weighted_merge(lane_1_bright_laplace_diff_0, lane_1_dark_laplace_diff_0, lane_1_bright_weights_normed, lane_1_dark_weights_normed);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<16> lane_2_bright_laplace_diff_0;
  set_at<0, 16, 16>(lane_2_bright_laplace_diff_0, bright_laplace_diff_0.extract<32, 47>());
  hw_uint<16> lane_2_dark_laplace_diff_0;
  set_at<0, 16, 16>(lane_2_dark_laplace_diff_0, dark_laplace_diff_0.extract<32, 47>());
  hw_uint<16> lane_2_bright_weights_normed;
  set_at<0, 16, 16>(lane_2_bright_weights_normed, bright_weights_normed.extract<32, 47>());
  hw_uint<16> lane_2_dark_weights_normed;
  set_at<0, 16, 16>(lane_2_dark_weights_normed, dark_weights_normed.extract<32, 47>());
  auto result_2 = psef_weighted_merge(lane_2_bright_laplace_diff_0, lane_2_dark_laplace_diff_0, lane_2_bright_weights_normed, lane_2_dark_weights_normed);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<16> lane_3_bright_laplace_diff_0;
  set_at<0, 16, 16>(lane_3_bright_laplace_diff_0, bright_laplace_diff_0.extract<48, 63>());
  hw_uint<16> lane_3_dark_laplace_diff_0;
  set_at<0, 16, 16>(lane_3_dark_laplace_diff_0, dark_laplace_diff_0.extract<48, 63>());
  hw_uint<16> lane_3_bright_weights_normed;
  set_at<0, 16, 16>(lane_3_bright_weights_normed, bright_weights_normed.extract<48, 63>());
  hw_uint<16> lane_3_dark_weights_normed;
  set_at<0, 16, 16>(lane_3_dark_weights_normed, dark_weights_normed.extract<48, 63>());
  auto result_3 = psef_weighted_merge(lane_3_bright_laplace_diff_0, lane_3_dark_laplace_diff_0, lane_3_bright_weights_normed, lane_3_dark_weights_normed);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<16> lane_4_bright_laplace_diff_0;
  set_at<0, 16, 16>(lane_4_bright_laplace_diff_0, bright_laplace_diff_0.extract<64, 79>());
  hw_uint<16> lane_4_dark_laplace_diff_0;
  set_at<0, 16, 16>(lane_4_dark_laplace_diff_0, dark_laplace_diff_0.extract<64, 79>());
  hw_uint<16> lane_4_bright_weights_normed;
  set_at<0, 16, 16>(lane_4_bright_weights_normed, bright_weights_normed.extract<64, 79>());
  hw_uint<16> lane_4_dark_weights_normed;
  set_at<0, 16, 16>(lane_4_dark_weights_normed, dark_weights_normed.extract<64, 79>());
  auto result_4 = psef_weighted_merge(lane_4_bright_laplace_diff_0, lane_4_dark_laplace_diff_0, lane_4_bright_weights_normed, lane_4_dark_weights_normed);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<16> lane_5_bright_laplace_diff_0;
  set_at<0, 16, 16>(lane_5_bright_laplace_diff_0, bright_laplace_diff_0.extract<80, 95>());
  hw_uint<16> lane_5_dark_laplace_diff_0;
  set_at<0, 16, 16>(lane_5_dark_laplace_diff_0, dark_laplace_diff_0.extract<80, 95>());
  hw_uint<16> lane_5_bright_weights_normed;
  set_at<0, 16, 16>(lane_5_bright_weights_normed, bright_weights_normed.extract<80, 95>());
  hw_uint<16> lane_5_dark_weights_normed;
  set_at<0, 16, 16>(lane_5_dark_weights_normed, dark_weights_normed.extract<80, 95>());
  auto result_5 = psef_weighted_merge(lane_5_bright_laplace_diff_0, lane_5_dark_laplace_diff_0, lane_5_bright_weights_normed, lane_5_dark_weights_normed);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<16> lane_6_bright_laplace_diff_0;
  set_at<0, 16, 16>(lane_6_bright_laplace_diff_0, bright_laplace_diff_0.extract<96, 111>());
  hw_uint<16> lane_6_dark_laplace_diff_0;
  set_at<0, 16, 16>(lane_6_dark_laplace_diff_0, dark_laplace_diff_0.extract<96, 111>());
  hw_uint<16> lane_6_bright_weights_normed;
  set_at<0, 16, 16>(lane_6_bright_weights_normed, bright_weights_normed.extract<96, 111>());
  hw_uint<16> lane_6_dark_weights_normed;
  set_at<0, 16, 16>(lane_6_dark_weights_normed, dark_weights_normed.extract<96, 111>());
  auto result_6 = psef_weighted_merge(lane_6_bright_laplace_diff_0, lane_6_dark_laplace_diff_0, lane_6_bright_weights_normed, lane_6_dark_weights_normed);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<16> lane_7_bright_laplace_diff_0;
  set_at<0, 16, 16>(lane_7_bright_laplace_diff_0, bright_laplace_diff_0.extract<112, 127>());
  hw_uint<16> lane_7_dark_laplace_diff_0;
  set_at<0, 16, 16>(lane_7_dark_laplace_diff_0, dark_laplace_diff_0.extract<112, 127>());
  hw_uint<16> lane_7_bright_weights_normed;
  set_at<0, 16, 16>(lane_7_bright_weights_normed, bright_weights_normed.extract<112, 127>());
  hw_uint<16> lane_7_dark_weights_normed;
  set_at<0, 16, 16>(lane_7_dark_weights_normed, dark_weights_normed.extract<112, 127>());
  auto result_7 = psef_weighted_merge(lane_7_bright_laplace_diff_0, lane_7_dark_laplace_diff_0, lane_7_bright_weights_normed, lane_7_dark_weights_normed);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<16> lane_8_bright_laplace_diff_0;
  set_at<0, 16, 16>(lane_8_bright_laplace_diff_0, bright_laplace_diff_0.extract<128, 143>());
  hw_uint<16> lane_8_dark_laplace_diff_0;
  set_at<0, 16, 16>(lane_8_dark_laplace_diff_0, dark_laplace_diff_0.extract<128, 143>());
  hw_uint<16> lane_8_bright_weights_normed;
  set_at<0, 16, 16>(lane_8_bright_weights_normed, bright_weights_normed.extract<128, 143>());
  hw_uint<16> lane_8_dark_weights_normed;
  set_at<0, 16, 16>(lane_8_dark_weights_normed, dark_weights_normed.extract<128, 143>());
  auto result_8 = psef_weighted_merge(lane_8_bright_laplace_diff_0, lane_8_dark_laplace_diff_0, lane_8_bright_weights_normed, lane_8_dark_weights_normed);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<16> lane_9_bright_laplace_diff_0;
  set_at<0, 16, 16>(lane_9_bright_laplace_diff_0, bright_laplace_diff_0.extract<144, 159>());
  hw_uint<16> lane_9_dark_laplace_diff_0;
  set_at<0, 16, 16>(lane_9_dark_laplace_diff_0, dark_laplace_diff_0.extract<144, 159>());
  hw_uint<16> lane_9_bright_weights_normed;
  set_at<0, 16, 16>(lane_9_bright_weights_normed, bright_weights_normed.extract<144, 159>());
  hw_uint<16> lane_9_dark_weights_normed;
  set_at<0, 16, 16>(lane_9_dark_weights_normed, dark_weights_normed.extract<144, 159>());
  auto result_9 = psef_weighted_merge(lane_9_bright_laplace_diff_0, lane_9_dark_laplace_diff_0, lane_9_bright_weights_normed, lane_9_dark_weights_normed);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<16> lane_10_bright_laplace_diff_0;
  set_at<0, 16, 16>(lane_10_bright_laplace_diff_0, bright_laplace_diff_0.extract<160, 175>());
  hw_uint<16> lane_10_dark_laplace_diff_0;
  set_at<0, 16, 16>(lane_10_dark_laplace_diff_0, dark_laplace_diff_0.extract<160, 175>());
  hw_uint<16> lane_10_bright_weights_normed;
  set_at<0, 16, 16>(lane_10_bright_weights_normed, bright_weights_normed.extract<160, 175>());
  hw_uint<16> lane_10_dark_weights_normed;
  set_at<0, 16, 16>(lane_10_dark_weights_normed, dark_weights_normed.extract<160, 175>());
  auto result_10 = psef_weighted_merge(lane_10_bright_laplace_diff_0, lane_10_dark_laplace_diff_0, lane_10_bright_weights_normed, lane_10_dark_weights_normed);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<16> lane_11_bright_laplace_diff_0;
  set_at<0, 16, 16>(lane_11_bright_laplace_diff_0, bright_laplace_diff_0.extract<176, 191>());
  hw_uint<16> lane_11_dark_laplace_diff_0;
  set_at<0, 16, 16>(lane_11_dark_laplace_diff_0, dark_laplace_diff_0.extract<176, 191>());
  hw_uint<16> lane_11_bright_weights_normed;
  set_at<0, 16, 16>(lane_11_bright_weights_normed, bright_weights_normed.extract<176, 191>());
  hw_uint<16> lane_11_dark_weights_normed;
  set_at<0, 16, 16>(lane_11_dark_weights_normed, dark_weights_normed.extract<176, 191>());
  auto result_11 = psef_weighted_merge(lane_11_bright_laplace_diff_0, lane_11_dark_laplace_diff_0, lane_11_bright_weights_normed, lane_11_dark_weights_normed);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<16> lane_12_bright_laplace_diff_0;
  set_at<0, 16, 16>(lane_12_bright_laplace_diff_0, bright_laplace_diff_0.extract<192, 207>());
  hw_uint<16> lane_12_dark_laplace_diff_0;
  set_at<0, 16, 16>(lane_12_dark_laplace_diff_0, dark_laplace_diff_0.extract<192, 207>());
  hw_uint<16> lane_12_bright_weights_normed;
  set_at<0, 16, 16>(lane_12_bright_weights_normed, bright_weights_normed.extract<192, 207>());
  hw_uint<16> lane_12_dark_weights_normed;
  set_at<0, 16, 16>(lane_12_dark_weights_normed, dark_weights_normed.extract<192, 207>());
  auto result_12 = psef_weighted_merge(lane_12_bright_laplace_diff_0, lane_12_dark_laplace_diff_0, lane_12_bright_weights_normed, lane_12_dark_weights_normed);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<16> lane_13_bright_laplace_diff_0;
  set_at<0, 16, 16>(lane_13_bright_laplace_diff_0, bright_laplace_diff_0.extract<208, 223>());
  hw_uint<16> lane_13_dark_laplace_diff_0;
  set_at<0, 16, 16>(lane_13_dark_laplace_diff_0, dark_laplace_diff_0.extract<208, 223>());
  hw_uint<16> lane_13_bright_weights_normed;
  set_at<0, 16, 16>(lane_13_bright_weights_normed, bright_weights_normed.extract<208, 223>());
  hw_uint<16> lane_13_dark_weights_normed;
  set_at<0, 16, 16>(lane_13_dark_weights_normed, dark_weights_normed.extract<208, 223>());
  auto result_13 = psef_weighted_merge(lane_13_bright_laplace_diff_0, lane_13_dark_laplace_diff_0, lane_13_bright_weights_normed, lane_13_dark_weights_normed);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<16> lane_14_bright_laplace_diff_0;
  set_at<0, 16, 16>(lane_14_bright_laplace_diff_0, bright_laplace_diff_0.extract<224, 239>());
  hw_uint<16> lane_14_dark_laplace_diff_0;
  set_at<0, 16, 16>(lane_14_dark_laplace_diff_0, dark_laplace_diff_0.extract<224, 239>());
  hw_uint<16> lane_14_bright_weights_normed;
  set_at<0, 16, 16>(lane_14_bright_weights_normed, bright_weights_normed.extract<224, 239>());
  hw_uint<16> lane_14_dark_weights_normed;
  set_at<0, 16, 16>(lane_14_dark_weights_normed, dark_weights_normed.extract<224, 239>());
  auto result_14 = psef_weighted_merge(lane_14_bright_laplace_diff_0, lane_14_dark_laplace_diff_0, lane_14_bright_weights_normed, lane_14_dark_weights_normed);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<16> lane_15_bright_laplace_diff_0;
  set_at<0, 16, 16>(lane_15_bright_laplace_diff_0, bright_laplace_diff_0.extract<240, 255>());
  hw_uint<16> lane_15_dark_laplace_diff_0;
  set_at<0, 16, 16>(lane_15_dark_laplace_diff_0, dark_laplace_diff_0.extract<240, 255>());
  hw_uint<16> lane_15_bright_weights_normed;
  set_at<0, 16, 16>(lane_15_bright_weights_normed, bright_weights_normed.extract<240, 255>());
  hw_uint<16> lane_15_dark_weights_normed;
  set_at<0, 16, 16>(lane_15_dark_weights_normed, dark_weights_normed.extract<240, 255>());
  auto result_15 = psef_weighted_merge(lane_15_bright_laplace_diff_0, lane_15_dark_laplace_diff_0, lane_15_bright_weights_normed, lane_15_dark_weights_normed);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<16> lane_16_bright_laplace_diff_0;
  set_at<0, 16, 16>(lane_16_bright_laplace_diff_0, bright_laplace_diff_0.extract<256, 271>());
  hw_uint<16> lane_16_dark_laplace_diff_0;
  set_at<0, 16, 16>(lane_16_dark_laplace_diff_0, dark_laplace_diff_0.extract<256, 271>());
  hw_uint<16> lane_16_bright_weights_normed;
  set_at<0, 16, 16>(lane_16_bright_weights_normed, bright_weights_normed.extract<256, 271>());
  hw_uint<16> lane_16_dark_weights_normed;
  set_at<0, 16, 16>(lane_16_dark_weights_normed, dark_weights_normed.extract<256, 271>());
  auto result_16 = psef_weighted_merge(lane_16_bright_laplace_diff_0, lane_16_dark_laplace_diff_0, lane_16_bright_weights_normed, lane_16_dark_weights_normed);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<16> lane_17_bright_laplace_diff_0;
  set_at<0, 16, 16>(lane_17_bright_laplace_diff_0, bright_laplace_diff_0.extract<272, 287>());
  hw_uint<16> lane_17_dark_laplace_diff_0;
  set_at<0, 16, 16>(lane_17_dark_laplace_diff_0, dark_laplace_diff_0.extract<272, 287>());
  hw_uint<16> lane_17_bright_weights_normed;
  set_at<0, 16, 16>(lane_17_bright_weights_normed, bright_weights_normed.extract<272, 287>());
  hw_uint<16> lane_17_dark_weights_normed;
  set_at<0, 16, 16>(lane_17_dark_weights_normed, dark_weights_normed.extract<272, 287>());
  auto result_17 = psef_weighted_merge(lane_17_bright_laplace_diff_0, lane_17_dark_laplace_diff_0, lane_17_bright_weights_normed, lane_17_dark_weights_normed);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<16> lane_18_bright_laplace_diff_0;
  set_at<0, 16, 16>(lane_18_bright_laplace_diff_0, bright_laplace_diff_0.extract<288, 303>());
  hw_uint<16> lane_18_dark_laplace_diff_0;
  set_at<0, 16, 16>(lane_18_dark_laplace_diff_0, dark_laplace_diff_0.extract<288, 303>());
  hw_uint<16> lane_18_bright_weights_normed;
  set_at<0, 16, 16>(lane_18_bright_weights_normed, bright_weights_normed.extract<288, 303>());
  hw_uint<16> lane_18_dark_weights_normed;
  set_at<0, 16, 16>(lane_18_dark_weights_normed, dark_weights_normed.extract<288, 303>());
  auto result_18 = psef_weighted_merge(lane_18_bright_laplace_diff_0, lane_18_dark_laplace_diff_0, lane_18_bright_weights_normed, lane_18_dark_weights_normed);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<16> lane_19_bright_laplace_diff_0;
  set_at<0, 16, 16>(lane_19_bright_laplace_diff_0, bright_laplace_diff_0.extract<304, 319>());
  hw_uint<16> lane_19_dark_laplace_diff_0;
  set_at<0, 16, 16>(lane_19_dark_laplace_diff_0, dark_laplace_diff_0.extract<304, 319>());
  hw_uint<16> lane_19_bright_weights_normed;
  set_at<0, 16, 16>(lane_19_bright_weights_normed, bright_weights_normed.extract<304, 319>());
  hw_uint<16> lane_19_dark_weights_normed;
  set_at<0, 16, 16>(lane_19_dark_weights_normed, dark_weights_normed.extract<304, 319>());
  auto result_19 = psef_weighted_merge(lane_19_bright_laplace_diff_0, lane_19_dark_laplace_diff_0, lane_19_bright_weights_normed, lane_19_dark_weights_normed);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<16> lane_20_bright_laplace_diff_0;
  set_at<0, 16, 16>(lane_20_bright_laplace_diff_0, bright_laplace_diff_0.extract<320, 335>());
  hw_uint<16> lane_20_dark_laplace_diff_0;
  set_at<0, 16, 16>(lane_20_dark_laplace_diff_0, dark_laplace_diff_0.extract<320, 335>());
  hw_uint<16> lane_20_bright_weights_normed;
  set_at<0, 16, 16>(lane_20_bright_weights_normed, bright_weights_normed.extract<320, 335>());
  hw_uint<16> lane_20_dark_weights_normed;
  set_at<0, 16, 16>(lane_20_dark_weights_normed, dark_weights_normed.extract<320, 335>());
  auto result_20 = psef_weighted_merge(lane_20_bright_laplace_diff_0, lane_20_dark_laplace_diff_0, lane_20_bright_weights_normed, lane_20_dark_weights_normed);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<16> lane_21_bright_laplace_diff_0;
  set_at<0, 16, 16>(lane_21_bright_laplace_diff_0, bright_laplace_diff_0.extract<336, 351>());
  hw_uint<16> lane_21_dark_laplace_diff_0;
  set_at<0, 16, 16>(lane_21_dark_laplace_diff_0, dark_laplace_diff_0.extract<336, 351>());
  hw_uint<16> lane_21_bright_weights_normed;
  set_at<0, 16, 16>(lane_21_bright_weights_normed, bright_weights_normed.extract<336, 351>());
  hw_uint<16> lane_21_dark_weights_normed;
  set_at<0, 16, 16>(lane_21_dark_weights_normed, dark_weights_normed.extract<336, 351>());
  auto result_21 = psef_weighted_merge(lane_21_bright_laplace_diff_0, lane_21_dark_laplace_diff_0, lane_21_bright_weights_normed, lane_21_dark_weights_normed);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<16> lane_22_bright_laplace_diff_0;
  set_at<0, 16, 16>(lane_22_bright_laplace_diff_0, bright_laplace_diff_0.extract<352, 367>());
  hw_uint<16> lane_22_dark_laplace_diff_0;
  set_at<0, 16, 16>(lane_22_dark_laplace_diff_0, dark_laplace_diff_0.extract<352, 367>());
  hw_uint<16> lane_22_bright_weights_normed;
  set_at<0, 16, 16>(lane_22_bright_weights_normed, bright_weights_normed.extract<352, 367>());
  hw_uint<16> lane_22_dark_weights_normed;
  set_at<0, 16, 16>(lane_22_dark_weights_normed, dark_weights_normed.extract<352, 367>());
  auto result_22 = psef_weighted_merge(lane_22_bright_laplace_diff_0, lane_22_dark_laplace_diff_0, lane_22_bright_weights_normed, lane_22_dark_weights_normed);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<16> lane_23_bright_laplace_diff_0;
  set_at<0, 16, 16>(lane_23_bright_laplace_diff_0, bright_laplace_diff_0.extract<368, 383>());
  hw_uint<16> lane_23_dark_laplace_diff_0;
  set_at<0, 16, 16>(lane_23_dark_laplace_diff_0, dark_laplace_diff_0.extract<368, 383>());
  hw_uint<16> lane_23_bright_weights_normed;
  set_at<0, 16, 16>(lane_23_bright_weights_normed, bright_weights_normed.extract<368, 383>());
  hw_uint<16> lane_23_dark_weights_normed;
  set_at<0, 16, 16>(lane_23_dark_weights_normed, dark_weights_normed.extract<368, 383>());
  auto result_23 = psef_weighted_merge(lane_23_bright_laplace_diff_0, lane_23_dark_laplace_diff_0, lane_23_bright_weights_normed, lane_23_dark_weights_normed);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<16> lane_24_bright_laplace_diff_0;
  set_at<0, 16, 16>(lane_24_bright_laplace_diff_0, bright_laplace_diff_0.extract<384, 399>());
  hw_uint<16> lane_24_dark_laplace_diff_0;
  set_at<0, 16, 16>(lane_24_dark_laplace_diff_0, dark_laplace_diff_0.extract<384, 399>());
  hw_uint<16> lane_24_bright_weights_normed;
  set_at<0, 16, 16>(lane_24_bright_weights_normed, bright_weights_normed.extract<384, 399>());
  hw_uint<16> lane_24_dark_weights_normed;
  set_at<0, 16, 16>(lane_24_dark_weights_normed, dark_weights_normed.extract<384, 399>());
  auto result_24 = psef_weighted_merge(lane_24_bright_laplace_diff_0, lane_24_dark_laplace_diff_0, lane_24_bright_weights_normed, lane_24_dark_weights_normed);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<16> lane_25_bright_laplace_diff_0;
  set_at<0, 16, 16>(lane_25_bright_laplace_diff_0, bright_laplace_diff_0.extract<400, 415>());
  hw_uint<16> lane_25_dark_laplace_diff_0;
  set_at<0, 16, 16>(lane_25_dark_laplace_diff_0, dark_laplace_diff_0.extract<400, 415>());
  hw_uint<16> lane_25_bright_weights_normed;
  set_at<0, 16, 16>(lane_25_bright_weights_normed, bright_weights_normed.extract<400, 415>());
  hw_uint<16> lane_25_dark_weights_normed;
  set_at<0, 16, 16>(lane_25_dark_weights_normed, dark_weights_normed.extract<400, 415>());
  auto result_25 = psef_weighted_merge(lane_25_bright_laplace_diff_0, lane_25_dark_laplace_diff_0, lane_25_bright_weights_normed, lane_25_dark_weights_normed);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<16> lane_26_bright_laplace_diff_0;
  set_at<0, 16, 16>(lane_26_bright_laplace_diff_0, bright_laplace_diff_0.extract<416, 431>());
  hw_uint<16> lane_26_dark_laplace_diff_0;
  set_at<0, 16, 16>(lane_26_dark_laplace_diff_0, dark_laplace_diff_0.extract<416, 431>());
  hw_uint<16> lane_26_bright_weights_normed;
  set_at<0, 16, 16>(lane_26_bright_weights_normed, bright_weights_normed.extract<416, 431>());
  hw_uint<16> lane_26_dark_weights_normed;
  set_at<0, 16, 16>(lane_26_dark_weights_normed, dark_weights_normed.extract<416, 431>());
  auto result_26 = psef_weighted_merge(lane_26_bright_laplace_diff_0, lane_26_dark_laplace_diff_0, lane_26_bright_weights_normed, lane_26_dark_weights_normed);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<16> lane_27_bright_laplace_diff_0;
  set_at<0, 16, 16>(lane_27_bright_laplace_diff_0, bright_laplace_diff_0.extract<432, 447>());
  hw_uint<16> lane_27_dark_laplace_diff_0;
  set_at<0, 16, 16>(lane_27_dark_laplace_diff_0, dark_laplace_diff_0.extract<432, 447>());
  hw_uint<16> lane_27_bright_weights_normed;
  set_at<0, 16, 16>(lane_27_bright_weights_normed, bright_weights_normed.extract<432, 447>());
  hw_uint<16> lane_27_dark_weights_normed;
  set_at<0, 16, 16>(lane_27_dark_weights_normed, dark_weights_normed.extract<432, 447>());
  auto result_27 = psef_weighted_merge(lane_27_bright_laplace_diff_0, lane_27_dark_laplace_diff_0, lane_27_bright_weights_normed, lane_27_dark_weights_normed);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<16> lane_28_bright_laplace_diff_0;
  set_at<0, 16, 16>(lane_28_bright_laplace_diff_0, bright_laplace_diff_0.extract<448, 463>());
  hw_uint<16> lane_28_dark_laplace_diff_0;
  set_at<0, 16, 16>(lane_28_dark_laplace_diff_0, dark_laplace_diff_0.extract<448, 463>());
  hw_uint<16> lane_28_bright_weights_normed;
  set_at<0, 16, 16>(lane_28_bright_weights_normed, bright_weights_normed.extract<448, 463>());
  hw_uint<16> lane_28_dark_weights_normed;
  set_at<0, 16, 16>(lane_28_dark_weights_normed, dark_weights_normed.extract<448, 463>());
  auto result_28 = psef_weighted_merge(lane_28_bright_laplace_diff_0, lane_28_dark_laplace_diff_0, lane_28_bright_weights_normed, lane_28_dark_weights_normed);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<16> lane_29_bright_laplace_diff_0;
  set_at<0, 16, 16>(lane_29_bright_laplace_diff_0, bright_laplace_diff_0.extract<464, 479>());
  hw_uint<16> lane_29_dark_laplace_diff_0;
  set_at<0, 16, 16>(lane_29_dark_laplace_diff_0, dark_laplace_diff_0.extract<464, 479>());
  hw_uint<16> lane_29_bright_weights_normed;
  set_at<0, 16, 16>(lane_29_bright_weights_normed, bright_weights_normed.extract<464, 479>());
  hw_uint<16> lane_29_dark_weights_normed;
  set_at<0, 16, 16>(lane_29_dark_weights_normed, dark_weights_normed.extract<464, 479>());
  auto result_29 = psef_weighted_merge(lane_29_bright_laplace_diff_0, lane_29_dark_laplace_diff_0, lane_29_bright_weights_normed, lane_29_dark_weights_normed);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<16> lane_30_bright_laplace_diff_0;
  set_at<0, 16, 16>(lane_30_bright_laplace_diff_0, bright_laplace_diff_0.extract<480, 495>());
  hw_uint<16> lane_30_dark_laplace_diff_0;
  set_at<0, 16, 16>(lane_30_dark_laplace_diff_0, dark_laplace_diff_0.extract<480, 495>());
  hw_uint<16> lane_30_bright_weights_normed;
  set_at<0, 16, 16>(lane_30_bright_weights_normed, bright_weights_normed.extract<480, 495>());
  hw_uint<16> lane_30_dark_weights_normed;
  set_at<0, 16, 16>(lane_30_dark_weights_normed, dark_weights_normed.extract<480, 495>());
  auto result_30 = psef_weighted_merge(lane_30_bright_laplace_diff_0, lane_30_dark_laplace_diff_0, lane_30_bright_weights_normed, lane_30_dark_weights_normed);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<16> lane_31_bright_laplace_diff_0;
  set_at<0, 16, 16>(lane_31_bright_laplace_diff_0, bright_laplace_diff_0.extract<496, 511>());
  hw_uint<16> lane_31_dark_laplace_diff_0;
  set_at<0, 16, 16>(lane_31_dark_laplace_diff_0, dark_laplace_diff_0.extract<496, 511>());
  hw_uint<16> lane_31_bright_weights_normed;
  set_at<0, 16, 16>(lane_31_bright_weights_normed, bright_weights_normed.extract<496, 511>());
  hw_uint<16> lane_31_dark_weights_normed;
  set_at<0, 16, 16>(lane_31_dark_weights_normed, dark_weights_normed.extract<496, 511>());
  auto result_31 = psef_weighted_merge(lane_31_bright_laplace_diff_0, lane_31_dark_laplace_diff_0, lane_31_bright_weights_normed, lane_31_dark_weights_normed);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // final_merged_2_update_0 unroll factor: 8
hw_uint<128>  add_unrolled_8(hw_uint<128>& fused_level_3, hw_uint<128>& fused_level_2) {
  hw_uint<128> whole_result;

  hw_uint<16> lane_0_fused_level_3;
  set_at<0, 16, 16>(lane_0_fused_level_3, fused_level_3.extract<0, 15>());
  hw_uint<16> lane_0_fused_level_2;
  set_at<0, 16, 16>(lane_0_fused_level_2, fused_level_2.extract<0, 15>());
  auto result_0 = add(lane_0_fused_level_3, lane_0_fused_level_2);
  set_at<0, 128, 16>(whole_result, result_0);

  hw_uint<16> lane_1_fused_level_3;
  set_at<0, 16, 16>(lane_1_fused_level_3, fused_level_3.extract<16, 31>());
  hw_uint<16> lane_1_fused_level_2;
  set_at<0, 16, 16>(lane_1_fused_level_2, fused_level_2.extract<16, 31>());
  auto result_1 = add(lane_1_fused_level_3, lane_1_fused_level_2);
  set_at<16, 128, 16>(whole_result, result_1);

  hw_uint<16> lane_2_fused_level_3;
  set_at<0, 16, 16>(lane_2_fused_level_3, fused_level_3.extract<32, 47>());
  hw_uint<16> lane_2_fused_level_2;
  set_at<0, 16, 16>(lane_2_fused_level_2, fused_level_2.extract<32, 47>());
  auto result_2 = add(lane_2_fused_level_3, lane_2_fused_level_2);
  set_at<32, 128, 16>(whole_result, result_2);

  hw_uint<16> lane_3_fused_level_3;
  set_at<0, 16, 16>(lane_3_fused_level_3, fused_level_3.extract<48, 63>());
  hw_uint<16> lane_3_fused_level_2;
  set_at<0, 16, 16>(lane_3_fused_level_2, fused_level_2.extract<48, 63>());
  auto result_3 = add(lane_3_fused_level_3, lane_3_fused_level_2);
  set_at<48, 128, 16>(whole_result, result_3);

  hw_uint<16> lane_4_fused_level_3;
  set_at<0, 16, 16>(lane_4_fused_level_3, fused_level_3.extract<64, 79>());
  hw_uint<16> lane_4_fused_level_2;
  set_at<0, 16, 16>(lane_4_fused_level_2, fused_level_2.extract<64, 79>());
  auto result_4 = add(lane_4_fused_level_3, lane_4_fused_level_2);
  set_at<64, 128, 16>(whole_result, result_4);

  hw_uint<16> lane_5_fused_level_3;
  set_at<0, 16, 16>(lane_5_fused_level_3, fused_level_3.extract<80, 95>());
  hw_uint<16> lane_5_fused_level_2;
  set_at<0, 16, 16>(lane_5_fused_level_2, fused_level_2.extract<80, 95>());
  auto result_5 = add(lane_5_fused_level_3, lane_5_fused_level_2);
  set_at<80, 128, 16>(whole_result, result_5);

  hw_uint<16> lane_6_fused_level_3;
  set_at<0, 16, 16>(lane_6_fused_level_3, fused_level_3.extract<96, 111>());
  hw_uint<16> lane_6_fused_level_2;
  set_at<0, 16, 16>(lane_6_fused_level_2, fused_level_2.extract<96, 111>());
  auto result_6 = add(lane_6_fused_level_3, lane_6_fused_level_2);
  set_at<96, 128, 16>(whole_result, result_6);

  hw_uint<16> lane_7_fused_level_3;
  set_at<0, 16, 16>(lane_7_fused_level_3, fused_level_3.extract<112, 127>());
  hw_uint<16> lane_7_fused_level_2;
  set_at<0, 16, 16>(lane_7_fused_level_2, fused_level_2.extract<112, 127>());
  auto result_7 = add(lane_7_fused_level_3, lane_7_fused_level_2);
  set_at<112, 128, 16>(whole_result, result_7);
  return whole_result;
}

  // final_merged_1_update_0 unroll factor: 16
hw_uint<256>  add_unrolled_16(hw_uint<256>& final_merged_2, hw_uint<256>& fused_level_1) {
  hw_uint<256> whole_result;

  hw_uint<16> lane_0_final_merged_2;
  set_at<0, 16, 16>(lane_0_final_merged_2, final_merged_2.extract<0, 15>());
  hw_uint<16> lane_0_fused_level_1;
  set_at<0, 16, 16>(lane_0_fused_level_1, fused_level_1.extract<0, 15>());
  auto result_0 = add(lane_0_final_merged_2, lane_0_fused_level_1);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<16> lane_1_final_merged_2;
  set_at<0, 16, 16>(lane_1_final_merged_2, final_merged_2.extract<16, 31>());
  hw_uint<16> lane_1_fused_level_1;
  set_at<0, 16, 16>(lane_1_fused_level_1, fused_level_1.extract<16, 31>());
  auto result_1 = add(lane_1_final_merged_2, lane_1_fused_level_1);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<16> lane_2_final_merged_2;
  set_at<0, 16, 16>(lane_2_final_merged_2, final_merged_2.extract<32, 47>());
  hw_uint<16> lane_2_fused_level_1;
  set_at<0, 16, 16>(lane_2_fused_level_1, fused_level_1.extract<32, 47>());
  auto result_2 = add(lane_2_final_merged_2, lane_2_fused_level_1);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<16> lane_3_final_merged_2;
  set_at<0, 16, 16>(lane_3_final_merged_2, final_merged_2.extract<48, 63>());
  hw_uint<16> lane_3_fused_level_1;
  set_at<0, 16, 16>(lane_3_fused_level_1, fused_level_1.extract<48, 63>());
  auto result_3 = add(lane_3_final_merged_2, lane_3_fused_level_1);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<16> lane_4_final_merged_2;
  set_at<0, 16, 16>(lane_4_final_merged_2, final_merged_2.extract<64, 79>());
  hw_uint<16> lane_4_fused_level_1;
  set_at<0, 16, 16>(lane_4_fused_level_1, fused_level_1.extract<64, 79>());
  auto result_4 = add(lane_4_final_merged_2, lane_4_fused_level_1);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<16> lane_5_final_merged_2;
  set_at<0, 16, 16>(lane_5_final_merged_2, final_merged_2.extract<80, 95>());
  hw_uint<16> lane_5_fused_level_1;
  set_at<0, 16, 16>(lane_5_fused_level_1, fused_level_1.extract<80, 95>());
  auto result_5 = add(lane_5_final_merged_2, lane_5_fused_level_1);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<16> lane_6_final_merged_2;
  set_at<0, 16, 16>(lane_6_final_merged_2, final_merged_2.extract<96, 111>());
  hw_uint<16> lane_6_fused_level_1;
  set_at<0, 16, 16>(lane_6_fused_level_1, fused_level_1.extract<96, 111>());
  auto result_6 = add(lane_6_final_merged_2, lane_6_fused_level_1);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<16> lane_7_final_merged_2;
  set_at<0, 16, 16>(lane_7_final_merged_2, final_merged_2.extract<112, 127>());
  hw_uint<16> lane_7_fused_level_1;
  set_at<0, 16, 16>(lane_7_fused_level_1, fused_level_1.extract<112, 127>());
  auto result_7 = add(lane_7_final_merged_2, lane_7_fused_level_1);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<16> lane_8_final_merged_2;
  set_at<0, 16, 16>(lane_8_final_merged_2, final_merged_2.extract<128, 143>());
  hw_uint<16> lane_8_fused_level_1;
  set_at<0, 16, 16>(lane_8_fused_level_1, fused_level_1.extract<128, 143>());
  auto result_8 = add(lane_8_final_merged_2, lane_8_fused_level_1);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<16> lane_9_final_merged_2;
  set_at<0, 16, 16>(lane_9_final_merged_2, final_merged_2.extract<144, 159>());
  hw_uint<16> lane_9_fused_level_1;
  set_at<0, 16, 16>(lane_9_fused_level_1, fused_level_1.extract<144, 159>());
  auto result_9 = add(lane_9_final_merged_2, lane_9_fused_level_1);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<16> lane_10_final_merged_2;
  set_at<0, 16, 16>(lane_10_final_merged_2, final_merged_2.extract<160, 175>());
  hw_uint<16> lane_10_fused_level_1;
  set_at<0, 16, 16>(lane_10_fused_level_1, fused_level_1.extract<160, 175>());
  auto result_10 = add(lane_10_final_merged_2, lane_10_fused_level_1);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<16> lane_11_final_merged_2;
  set_at<0, 16, 16>(lane_11_final_merged_2, final_merged_2.extract<176, 191>());
  hw_uint<16> lane_11_fused_level_1;
  set_at<0, 16, 16>(lane_11_fused_level_1, fused_level_1.extract<176, 191>());
  auto result_11 = add(lane_11_final_merged_2, lane_11_fused_level_1);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<16> lane_12_final_merged_2;
  set_at<0, 16, 16>(lane_12_final_merged_2, final_merged_2.extract<192, 207>());
  hw_uint<16> lane_12_fused_level_1;
  set_at<0, 16, 16>(lane_12_fused_level_1, fused_level_1.extract<192, 207>());
  auto result_12 = add(lane_12_final_merged_2, lane_12_fused_level_1);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<16> lane_13_final_merged_2;
  set_at<0, 16, 16>(lane_13_final_merged_2, final_merged_2.extract<208, 223>());
  hw_uint<16> lane_13_fused_level_1;
  set_at<0, 16, 16>(lane_13_fused_level_1, fused_level_1.extract<208, 223>());
  auto result_13 = add(lane_13_final_merged_2, lane_13_fused_level_1);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<16> lane_14_final_merged_2;
  set_at<0, 16, 16>(lane_14_final_merged_2, final_merged_2.extract<224, 239>());
  hw_uint<16> lane_14_fused_level_1;
  set_at<0, 16, 16>(lane_14_fused_level_1, fused_level_1.extract<224, 239>());
  auto result_14 = add(lane_14_final_merged_2, lane_14_fused_level_1);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<16> lane_15_final_merged_2;
  set_at<0, 16, 16>(lane_15_final_merged_2, final_merged_2.extract<240, 255>());
  hw_uint<16> lane_15_fused_level_1;
  set_at<0, 16, 16>(lane_15_fused_level_1, fused_level_1.extract<240, 255>());
  auto result_15 = add(lane_15_final_merged_2, lane_15_fused_level_1);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // final_merged_0_update_0 unroll factor: 32
hw_uint<512>  add_unrolled_32(hw_uint<512>& final_merged_1, hw_uint<512>& fused_level_0) {
  hw_uint<512> whole_result;

  hw_uint<16> lane_0_final_merged_1;
  set_at<0, 16, 16>(lane_0_final_merged_1, final_merged_1.extract<0, 15>());
  hw_uint<16> lane_0_fused_level_0;
  set_at<0, 16, 16>(lane_0_fused_level_0, fused_level_0.extract<0, 15>());
  auto result_0 = add(lane_0_final_merged_1, lane_0_fused_level_0);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<16> lane_1_final_merged_1;
  set_at<0, 16, 16>(lane_1_final_merged_1, final_merged_1.extract<16, 31>());
  hw_uint<16> lane_1_fused_level_0;
  set_at<0, 16, 16>(lane_1_fused_level_0, fused_level_0.extract<16, 31>());
  auto result_1 = add(lane_1_final_merged_1, lane_1_fused_level_0);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<16> lane_2_final_merged_1;
  set_at<0, 16, 16>(lane_2_final_merged_1, final_merged_1.extract<32, 47>());
  hw_uint<16> lane_2_fused_level_0;
  set_at<0, 16, 16>(lane_2_fused_level_0, fused_level_0.extract<32, 47>());
  auto result_2 = add(lane_2_final_merged_1, lane_2_fused_level_0);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<16> lane_3_final_merged_1;
  set_at<0, 16, 16>(lane_3_final_merged_1, final_merged_1.extract<48, 63>());
  hw_uint<16> lane_3_fused_level_0;
  set_at<0, 16, 16>(lane_3_fused_level_0, fused_level_0.extract<48, 63>());
  auto result_3 = add(lane_3_final_merged_1, lane_3_fused_level_0);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<16> lane_4_final_merged_1;
  set_at<0, 16, 16>(lane_4_final_merged_1, final_merged_1.extract<64, 79>());
  hw_uint<16> lane_4_fused_level_0;
  set_at<0, 16, 16>(lane_4_fused_level_0, fused_level_0.extract<64, 79>());
  auto result_4 = add(lane_4_final_merged_1, lane_4_fused_level_0);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<16> lane_5_final_merged_1;
  set_at<0, 16, 16>(lane_5_final_merged_1, final_merged_1.extract<80, 95>());
  hw_uint<16> lane_5_fused_level_0;
  set_at<0, 16, 16>(lane_5_fused_level_0, fused_level_0.extract<80, 95>());
  auto result_5 = add(lane_5_final_merged_1, lane_5_fused_level_0);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<16> lane_6_final_merged_1;
  set_at<0, 16, 16>(lane_6_final_merged_1, final_merged_1.extract<96, 111>());
  hw_uint<16> lane_6_fused_level_0;
  set_at<0, 16, 16>(lane_6_fused_level_0, fused_level_0.extract<96, 111>());
  auto result_6 = add(lane_6_final_merged_1, lane_6_fused_level_0);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<16> lane_7_final_merged_1;
  set_at<0, 16, 16>(lane_7_final_merged_1, final_merged_1.extract<112, 127>());
  hw_uint<16> lane_7_fused_level_0;
  set_at<0, 16, 16>(lane_7_fused_level_0, fused_level_0.extract<112, 127>());
  auto result_7 = add(lane_7_final_merged_1, lane_7_fused_level_0);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<16> lane_8_final_merged_1;
  set_at<0, 16, 16>(lane_8_final_merged_1, final_merged_1.extract<128, 143>());
  hw_uint<16> lane_8_fused_level_0;
  set_at<0, 16, 16>(lane_8_fused_level_0, fused_level_0.extract<128, 143>());
  auto result_8 = add(lane_8_final_merged_1, lane_8_fused_level_0);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<16> lane_9_final_merged_1;
  set_at<0, 16, 16>(lane_9_final_merged_1, final_merged_1.extract<144, 159>());
  hw_uint<16> lane_9_fused_level_0;
  set_at<0, 16, 16>(lane_9_fused_level_0, fused_level_0.extract<144, 159>());
  auto result_9 = add(lane_9_final_merged_1, lane_9_fused_level_0);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<16> lane_10_final_merged_1;
  set_at<0, 16, 16>(lane_10_final_merged_1, final_merged_1.extract<160, 175>());
  hw_uint<16> lane_10_fused_level_0;
  set_at<0, 16, 16>(lane_10_fused_level_0, fused_level_0.extract<160, 175>());
  auto result_10 = add(lane_10_final_merged_1, lane_10_fused_level_0);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<16> lane_11_final_merged_1;
  set_at<0, 16, 16>(lane_11_final_merged_1, final_merged_1.extract<176, 191>());
  hw_uint<16> lane_11_fused_level_0;
  set_at<0, 16, 16>(lane_11_fused_level_0, fused_level_0.extract<176, 191>());
  auto result_11 = add(lane_11_final_merged_1, lane_11_fused_level_0);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<16> lane_12_final_merged_1;
  set_at<0, 16, 16>(lane_12_final_merged_1, final_merged_1.extract<192, 207>());
  hw_uint<16> lane_12_fused_level_0;
  set_at<0, 16, 16>(lane_12_fused_level_0, fused_level_0.extract<192, 207>());
  auto result_12 = add(lane_12_final_merged_1, lane_12_fused_level_0);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<16> lane_13_final_merged_1;
  set_at<0, 16, 16>(lane_13_final_merged_1, final_merged_1.extract<208, 223>());
  hw_uint<16> lane_13_fused_level_0;
  set_at<0, 16, 16>(lane_13_fused_level_0, fused_level_0.extract<208, 223>());
  auto result_13 = add(lane_13_final_merged_1, lane_13_fused_level_0);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<16> lane_14_final_merged_1;
  set_at<0, 16, 16>(lane_14_final_merged_1, final_merged_1.extract<224, 239>());
  hw_uint<16> lane_14_fused_level_0;
  set_at<0, 16, 16>(lane_14_fused_level_0, fused_level_0.extract<224, 239>());
  auto result_14 = add(lane_14_final_merged_1, lane_14_fused_level_0);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<16> lane_15_final_merged_1;
  set_at<0, 16, 16>(lane_15_final_merged_1, final_merged_1.extract<240, 255>());
  hw_uint<16> lane_15_fused_level_0;
  set_at<0, 16, 16>(lane_15_fused_level_0, fused_level_0.extract<240, 255>());
  auto result_15 = add(lane_15_final_merged_1, lane_15_fused_level_0);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<16> lane_16_final_merged_1;
  set_at<0, 16, 16>(lane_16_final_merged_1, final_merged_1.extract<256, 271>());
  hw_uint<16> lane_16_fused_level_0;
  set_at<0, 16, 16>(lane_16_fused_level_0, fused_level_0.extract<256, 271>());
  auto result_16 = add(lane_16_final_merged_1, lane_16_fused_level_0);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<16> lane_17_final_merged_1;
  set_at<0, 16, 16>(lane_17_final_merged_1, final_merged_1.extract<272, 287>());
  hw_uint<16> lane_17_fused_level_0;
  set_at<0, 16, 16>(lane_17_fused_level_0, fused_level_0.extract<272, 287>());
  auto result_17 = add(lane_17_final_merged_1, lane_17_fused_level_0);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<16> lane_18_final_merged_1;
  set_at<0, 16, 16>(lane_18_final_merged_1, final_merged_1.extract<288, 303>());
  hw_uint<16> lane_18_fused_level_0;
  set_at<0, 16, 16>(lane_18_fused_level_0, fused_level_0.extract<288, 303>());
  auto result_18 = add(lane_18_final_merged_1, lane_18_fused_level_0);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<16> lane_19_final_merged_1;
  set_at<0, 16, 16>(lane_19_final_merged_1, final_merged_1.extract<304, 319>());
  hw_uint<16> lane_19_fused_level_0;
  set_at<0, 16, 16>(lane_19_fused_level_0, fused_level_0.extract<304, 319>());
  auto result_19 = add(lane_19_final_merged_1, lane_19_fused_level_0);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<16> lane_20_final_merged_1;
  set_at<0, 16, 16>(lane_20_final_merged_1, final_merged_1.extract<320, 335>());
  hw_uint<16> lane_20_fused_level_0;
  set_at<0, 16, 16>(lane_20_fused_level_0, fused_level_0.extract<320, 335>());
  auto result_20 = add(lane_20_final_merged_1, lane_20_fused_level_0);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<16> lane_21_final_merged_1;
  set_at<0, 16, 16>(lane_21_final_merged_1, final_merged_1.extract<336, 351>());
  hw_uint<16> lane_21_fused_level_0;
  set_at<0, 16, 16>(lane_21_fused_level_0, fused_level_0.extract<336, 351>());
  auto result_21 = add(lane_21_final_merged_1, lane_21_fused_level_0);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<16> lane_22_final_merged_1;
  set_at<0, 16, 16>(lane_22_final_merged_1, final_merged_1.extract<352, 367>());
  hw_uint<16> lane_22_fused_level_0;
  set_at<0, 16, 16>(lane_22_fused_level_0, fused_level_0.extract<352, 367>());
  auto result_22 = add(lane_22_final_merged_1, lane_22_fused_level_0);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<16> lane_23_final_merged_1;
  set_at<0, 16, 16>(lane_23_final_merged_1, final_merged_1.extract<368, 383>());
  hw_uint<16> lane_23_fused_level_0;
  set_at<0, 16, 16>(lane_23_fused_level_0, fused_level_0.extract<368, 383>());
  auto result_23 = add(lane_23_final_merged_1, lane_23_fused_level_0);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<16> lane_24_final_merged_1;
  set_at<0, 16, 16>(lane_24_final_merged_1, final_merged_1.extract<384, 399>());
  hw_uint<16> lane_24_fused_level_0;
  set_at<0, 16, 16>(lane_24_fused_level_0, fused_level_0.extract<384, 399>());
  auto result_24 = add(lane_24_final_merged_1, lane_24_fused_level_0);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<16> lane_25_final_merged_1;
  set_at<0, 16, 16>(lane_25_final_merged_1, final_merged_1.extract<400, 415>());
  hw_uint<16> lane_25_fused_level_0;
  set_at<0, 16, 16>(lane_25_fused_level_0, fused_level_0.extract<400, 415>());
  auto result_25 = add(lane_25_final_merged_1, lane_25_fused_level_0);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<16> lane_26_final_merged_1;
  set_at<0, 16, 16>(lane_26_final_merged_1, final_merged_1.extract<416, 431>());
  hw_uint<16> lane_26_fused_level_0;
  set_at<0, 16, 16>(lane_26_fused_level_0, fused_level_0.extract<416, 431>());
  auto result_26 = add(lane_26_final_merged_1, lane_26_fused_level_0);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<16> lane_27_final_merged_1;
  set_at<0, 16, 16>(lane_27_final_merged_1, final_merged_1.extract<432, 447>());
  hw_uint<16> lane_27_fused_level_0;
  set_at<0, 16, 16>(lane_27_fused_level_0, fused_level_0.extract<432, 447>());
  auto result_27 = add(lane_27_final_merged_1, lane_27_fused_level_0);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<16> lane_28_final_merged_1;
  set_at<0, 16, 16>(lane_28_final_merged_1, final_merged_1.extract<448, 463>());
  hw_uint<16> lane_28_fused_level_0;
  set_at<0, 16, 16>(lane_28_fused_level_0, fused_level_0.extract<448, 463>());
  auto result_28 = add(lane_28_final_merged_1, lane_28_fused_level_0);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<16> lane_29_final_merged_1;
  set_at<0, 16, 16>(lane_29_final_merged_1, final_merged_1.extract<464, 479>());
  hw_uint<16> lane_29_fused_level_0;
  set_at<0, 16, 16>(lane_29_fused_level_0, fused_level_0.extract<464, 479>());
  auto result_29 = add(lane_29_final_merged_1, lane_29_fused_level_0);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<16> lane_30_final_merged_1;
  set_at<0, 16, 16>(lane_30_final_merged_1, final_merged_1.extract<480, 495>());
  hw_uint<16> lane_30_fused_level_0;
  set_at<0, 16, 16>(lane_30_fused_level_0, fused_level_0.extract<480, 495>());
  auto result_30 = add(lane_30_final_merged_1, lane_30_fused_level_0);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<16> lane_31_final_merged_1;
  set_at<0, 16, 16>(lane_31_final_merged_1, final_merged_1.extract<496, 511>());
  hw_uint<16> lane_31_fused_level_0;
  set_at<0, 16, 16>(lane_31_fused_level_0, fused_level_0.extract<496, 511>());
  auto result_31 = add(lane_31_final_merged_1, lane_31_fused_level_0);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

