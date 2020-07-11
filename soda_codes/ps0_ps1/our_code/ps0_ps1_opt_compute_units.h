#pragma once

#include "conv_3x3.h"

// Generated compute units...


// Compute unit banks...
  // in_off_chip0_update_0 unroll factor: 32
hw_uint<512>  id_unrolled_32(hw_uint<512>& in_off_chip0_oc) {
  hw_uint<512> whole_result;

  hw_uint<16> lane_0_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_0_in_off_chip0_oc, in_off_chip0_oc.extract<0, 15>());
  auto result_0 = id(lane_0_in_off_chip0_oc);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<16> lane_1_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_1_in_off_chip0_oc, in_off_chip0_oc.extract<16, 31>());
  auto result_1 = id(lane_1_in_off_chip0_oc);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<16> lane_2_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_2_in_off_chip0_oc, in_off_chip0_oc.extract<32, 47>());
  auto result_2 = id(lane_2_in_off_chip0_oc);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<16> lane_3_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_3_in_off_chip0_oc, in_off_chip0_oc.extract<48, 63>());
  auto result_3 = id(lane_3_in_off_chip0_oc);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<16> lane_4_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_4_in_off_chip0_oc, in_off_chip0_oc.extract<64, 79>());
  auto result_4 = id(lane_4_in_off_chip0_oc);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<16> lane_5_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_5_in_off_chip0_oc, in_off_chip0_oc.extract<80, 95>());
  auto result_5 = id(lane_5_in_off_chip0_oc);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<16> lane_6_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_6_in_off_chip0_oc, in_off_chip0_oc.extract<96, 111>());
  auto result_6 = id(lane_6_in_off_chip0_oc);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<16> lane_7_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_7_in_off_chip0_oc, in_off_chip0_oc.extract<112, 127>());
  auto result_7 = id(lane_7_in_off_chip0_oc);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<16> lane_8_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_8_in_off_chip0_oc, in_off_chip0_oc.extract<128, 143>());
  auto result_8 = id(lane_8_in_off_chip0_oc);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<16> lane_9_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_9_in_off_chip0_oc, in_off_chip0_oc.extract<144, 159>());
  auto result_9 = id(lane_9_in_off_chip0_oc);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<16> lane_10_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_10_in_off_chip0_oc, in_off_chip0_oc.extract<160, 175>());
  auto result_10 = id(lane_10_in_off_chip0_oc);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<16> lane_11_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_11_in_off_chip0_oc, in_off_chip0_oc.extract<176, 191>());
  auto result_11 = id(lane_11_in_off_chip0_oc);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<16> lane_12_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_12_in_off_chip0_oc, in_off_chip0_oc.extract<192, 207>());
  auto result_12 = id(lane_12_in_off_chip0_oc);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<16> lane_13_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_13_in_off_chip0_oc, in_off_chip0_oc.extract<208, 223>());
  auto result_13 = id(lane_13_in_off_chip0_oc);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<16> lane_14_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_14_in_off_chip0_oc, in_off_chip0_oc.extract<224, 239>());
  auto result_14 = id(lane_14_in_off_chip0_oc);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<16> lane_15_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_15_in_off_chip0_oc, in_off_chip0_oc.extract<240, 255>());
  auto result_15 = id(lane_15_in_off_chip0_oc);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<16> lane_16_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_16_in_off_chip0_oc, in_off_chip0_oc.extract<256, 271>());
  auto result_16 = id(lane_16_in_off_chip0_oc);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<16> lane_17_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_17_in_off_chip0_oc, in_off_chip0_oc.extract<272, 287>());
  auto result_17 = id(lane_17_in_off_chip0_oc);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<16> lane_18_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_18_in_off_chip0_oc, in_off_chip0_oc.extract<288, 303>());
  auto result_18 = id(lane_18_in_off_chip0_oc);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<16> lane_19_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_19_in_off_chip0_oc, in_off_chip0_oc.extract<304, 319>());
  auto result_19 = id(lane_19_in_off_chip0_oc);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<16> lane_20_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_20_in_off_chip0_oc, in_off_chip0_oc.extract<320, 335>());
  auto result_20 = id(lane_20_in_off_chip0_oc);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<16> lane_21_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_21_in_off_chip0_oc, in_off_chip0_oc.extract<336, 351>());
  auto result_21 = id(lane_21_in_off_chip0_oc);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<16> lane_22_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_22_in_off_chip0_oc, in_off_chip0_oc.extract<352, 367>());
  auto result_22 = id(lane_22_in_off_chip0_oc);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<16> lane_23_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_23_in_off_chip0_oc, in_off_chip0_oc.extract<368, 383>());
  auto result_23 = id(lane_23_in_off_chip0_oc);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<16> lane_24_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_24_in_off_chip0_oc, in_off_chip0_oc.extract<384, 399>());
  auto result_24 = id(lane_24_in_off_chip0_oc);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<16> lane_25_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_25_in_off_chip0_oc, in_off_chip0_oc.extract<400, 415>());
  auto result_25 = id(lane_25_in_off_chip0_oc);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<16> lane_26_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_26_in_off_chip0_oc, in_off_chip0_oc.extract<416, 431>());
  auto result_26 = id(lane_26_in_off_chip0_oc);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<16> lane_27_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_27_in_off_chip0_oc, in_off_chip0_oc.extract<432, 447>());
  auto result_27 = id(lane_27_in_off_chip0_oc);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<16> lane_28_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_28_in_off_chip0_oc, in_off_chip0_oc.extract<448, 463>());
  auto result_28 = id(lane_28_in_off_chip0_oc);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<16> lane_29_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_29_in_off_chip0_oc, in_off_chip0_oc.extract<464, 479>());
  auto result_29 = id(lane_29_in_off_chip0_oc);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<16> lane_30_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_30_in_off_chip0_oc, in_off_chip0_oc.extract<480, 495>());
  auto result_30 = id(lane_30_in_off_chip0_oc);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<16> lane_31_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_31_in_off_chip0_oc, in_off_chip0_oc.extract<496, 511>());
  auto result_31 = id(lane_31_in_off_chip0_oc);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // in_off_chip0_oc_in_off_chip1_oc_update_0 unroll factor: 64
hw_uint<1024>  interleave_unrolled_64(hw_uint<1024>& in_off_chip0, hw_uint<1024>& in_off_chip1) {
  hw_uint<1024> whole_result;

  hw_uint<16> lane_0_in_off_chip0;
  set_at<0, 16, 16>(lane_0_in_off_chip0, in_off_chip0.extract<0, 15>());
  hw_uint<16> lane_0_in_off_chip1;
  set_at<0, 16, 16>(lane_0_in_off_chip1, in_off_chip1.extract<0, 15>());
  auto result_0 = interleave(lane_0_in_off_chip0, lane_0_in_off_chip1);
  set_at<0, 1024, 16>(whole_result, result_0);

  hw_uint<16> lane_1_in_off_chip0;
  set_at<0, 16, 16>(lane_1_in_off_chip0, in_off_chip0.extract<16, 31>());
  hw_uint<16> lane_1_in_off_chip1;
  set_at<0, 16, 16>(lane_1_in_off_chip1, in_off_chip1.extract<16, 31>());
  auto result_1 = interleave(lane_1_in_off_chip0, lane_1_in_off_chip1);
  set_at<16, 1024, 16>(whole_result, result_1);

  hw_uint<16> lane_2_in_off_chip0;
  set_at<0, 16, 16>(lane_2_in_off_chip0, in_off_chip0.extract<32, 47>());
  hw_uint<16> lane_2_in_off_chip1;
  set_at<0, 16, 16>(lane_2_in_off_chip1, in_off_chip1.extract<32, 47>());
  auto result_2 = interleave(lane_2_in_off_chip0, lane_2_in_off_chip1);
  set_at<32, 1024, 16>(whole_result, result_2);

  hw_uint<16> lane_3_in_off_chip0;
  set_at<0, 16, 16>(lane_3_in_off_chip0, in_off_chip0.extract<48, 63>());
  hw_uint<16> lane_3_in_off_chip1;
  set_at<0, 16, 16>(lane_3_in_off_chip1, in_off_chip1.extract<48, 63>());
  auto result_3 = interleave(lane_3_in_off_chip0, lane_3_in_off_chip1);
  set_at<48, 1024, 16>(whole_result, result_3);

  hw_uint<16> lane_4_in_off_chip0;
  set_at<0, 16, 16>(lane_4_in_off_chip0, in_off_chip0.extract<64, 79>());
  hw_uint<16> lane_4_in_off_chip1;
  set_at<0, 16, 16>(lane_4_in_off_chip1, in_off_chip1.extract<64, 79>());
  auto result_4 = interleave(lane_4_in_off_chip0, lane_4_in_off_chip1);
  set_at<64, 1024, 16>(whole_result, result_4);

  hw_uint<16> lane_5_in_off_chip0;
  set_at<0, 16, 16>(lane_5_in_off_chip0, in_off_chip0.extract<80, 95>());
  hw_uint<16> lane_5_in_off_chip1;
  set_at<0, 16, 16>(lane_5_in_off_chip1, in_off_chip1.extract<80, 95>());
  auto result_5 = interleave(lane_5_in_off_chip0, lane_5_in_off_chip1);
  set_at<80, 1024, 16>(whole_result, result_5);

  hw_uint<16> lane_6_in_off_chip0;
  set_at<0, 16, 16>(lane_6_in_off_chip0, in_off_chip0.extract<96, 111>());
  hw_uint<16> lane_6_in_off_chip1;
  set_at<0, 16, 16>(lane_6_in_off_chip1, in_off_chip1.extract<96, 111>());
  auto result_6 = interleave(lane_6_in_off_chip0, lane_6_in_off_chip1);
  set_at<96, 1024, 16>(whole_result, result_6);

  hw_uint<16> lane_7_in_off_chip0;
  set_at<0, 16, 16>(lane_7_in_off_chip0, in_off_chip0.extract<112, 127>());
  hw_uint<16> lane_7_in_off_chip1;
  set_at<0, 16, 16>(lane_7_in_off_chip1, in_off_chip1.extract<112, 127>());
  auto result_7 = interleave(lane_7_in_off_chip0, lane_7_in_off_chip1);
  set_at<112, 1024, 16>(whole_result, result_7);

  hw_uint<16> lane_8_in_off_chip0;
  set_at<0, 16, 16>(lane_8_in_off_chip0, in_off_chip0.extract<128, 143>());
  hw_uint<16> lane_8_in_off_chip1;
  set_at<0, 16, 16>(lane_8_in_off_chip1, in_off_chip1.extract<128, 143>());
  auto result_8 = interleave(lane_8_in_off_chip0, lane_8_in_off_chip1);
  set_at<128, 1024, 16>(whole_result, result_8);

  hw_uint<16> lane_9_in_off_chip0;
  set_at<0, 16, 16>(lane_9_in_off_chip0, in_off_chip0.extract<144, 159>());
  hw_uint<16> lane_9_in_off_chip1;
  set_at<0, 16, 16>(lane_9_in_off_chip1, in_off_chip1.extract<144, 159>());
  auto result_9 = interleave(lane_9_in_off_chip0, lane_9_in_off_chip1);
  set_at<144, 1024, 16>(whole_result, result_9);

  hw_uint<16> lane_10_in_off_chip0;
  set_at<0, 16, 16>(lane_10_in_off_chip0, in_off_chip0.extract<160, 175>());
  hw_uint<16> lane_10_in_off_chip1;
  set_at<0, 16, 16>(lane_10_in_off_chip1, in_off_chip1.extract<160, 175>());
  auto result_10 = interleave(lane_10_in_off_chip0, lane_10_in_off_chip1);
  set_at<160, 1024, 16>(whole_result, result_10);

  hw_uint<16> lane_11_in_off_chip0;
  set_at<0, 16, 16>(lane_11_in_off_chip0, in_off_chip0.extract<176, 191>());
  hw_uint<16> lane_11_in_off_chip1;
  set_at<0, 16, 16>(lane_11_in_off_chip1, in_off_chip1.extract<176, 191>());
  auto result_11 = interleave(lane_11_in_off_chip0, lane_11_in_off_chip1);
  set_at<176, 1024, 16>(whole_result, result_11);

  hw_uint<16> lane_12_in_off_chip0;
  set_at<0, 16, 16>(lane_12_in_off_chip0, in_off_chip0.extract<192, 207>());
  hw_uint<16> lane_12_in_off_chip1;
  set_at<0, 16, 16>(lane_12_in_off_chip1, in_off_chip1.extract<192, 207>());
  auto result_12 = interleave(lane_12_in_off_chip0, lane_12_in_off_chip1);
  set_at<192, 1024, 16>(whole_result, result_12);

  hw_uint<16> lane_13_in_off_chip0;
  set_at<0, 16, 16>(lane_13_in_off_chip0, in_off_chip0.extract<208, 223>());
  hw_uint<16> lane_13_in_off_chip1;
  set_at<0, 16, 16>(lane_13_in_off_chip1, in_off_chip1.extract<208, 223>());
  auto result_13 = interleave(lane_13_in_off_chip0, lane_13_in_off_chip1);
  set_at<208, 1024, 16>(whole_result, result_13);

  hw_uint<16> lane_14_in_off_chip0;
  set_at<0, 16, 16>(lane_14_in_off_chip0, in_off_chip0.extract<224, 239>());
  hw_uint<16> lane_14_in_off_chip1;
  set_at<0, 16, 16>(lane_14_in_off_chip1, in_off_chip1.extract<224, 239>());
  auto result_14 = interleave(lane_14_in_off_chip0, lane_14_in_off_chip1);
  set_at<224, 1024, 16>(whole_result, result_14);

  hw_uint<16> lane_15_in_off_chip0;
  set_at<0, 16, 16>(lane_15_in_off_chip0, in_off_chip0.extract<240, 255>());
  hw_uint<16> lane_15_in_off_chip1;
  set_at<0, 16, 16>(lane_15_in_off_chip1, in_off_chip1.extract<240, 255>());
  auto result_15 = interleave(lane_15_in_off_chip0, lane_15_in_off_chip1);
  set_at<240, 1024, 16>(whole_result, result_15);

  hw_uint<16> lane_16_in_off_chip0;
  set_at<0, 16, 16>(lane_16_in_off_chip0, in_off_chip0.extract<256, 271>());
  hw_uint<16> lane_16_in_off_chip1;
  set_at<0, 16, 16>(lane_16_in_off_chip1, in_off_chip1.extract<256, 271>());
  auto result_16 = interleave(lane_16_in_off_chip0, lane_16_in_off_chip1);
  set_at<256, 1024, 16>(whole_result, result_16);

  hw_uint<16> lane_17_in_off_chip0;
  set_at<0, 16, 16>(lane_17_in_off_chip0, in_off_chip0.extract<272, 287>());
  hw_uint<16> lane_17_in_off_chip1;
  set_at<0, 16, 16>(lane_17_in_off_chip1, in_off_chip1.extract<272, 287>());
  auto result_17 = interleave(lane_17_in_off_chip0, lane_17_in_off_chip1);
  set_at<272, 1024, 16>(whole_result, result_17);

  hw_uint<16> lane_18_in_off_chip0;
  set_at<0, 16, 16>(lane_18_in_off_chip0, in_off_chip0.extract<288, 303>());
  hw_uint<16> lane_18_in_off_chip1;
  set_at<0, 16, 16>(lane_18_in_off_chip1, in_off_chip1.extract<288, 303>());
  auto result_18 = interleave(lane_18_in_off_chip0, lane_18_in_off_chip1);
  set_at<288, 1024, 16>(whole_result, result_18);

  hw_uint<16> lane_19_in_off_chip0;
  set_at<0, 16, 16>(lane_19_in_off_chip0, in_off_chip0.extract<304, 319>());
  hw_uint<16> lane_19_in_off_chip1;
  set_at<0, 16, 16>(lane_19_in_off_chip1, in_off_chip1.extract<304, 319>());
  auto result_19 = interleave(lane_19_in_off_chip0, lane_19_in_off_chip1);
  set_at<304, 1024, 16>(whole_result, result_19);

  hw_uint<16> lane_20_in_off_chip0;
  set_at<0, 16, 16>(lane_20_in_off_chip0, in_off_chip0.extract<320, 335>());
  hw_uint<16> lane_20_in_off_chip1;
  set_at<0, 16, 16>(lane_20_in_off_chip1, in_off_chip1.extract<320, 335>());
  auto result_20 = interleave(lane_20_in_off_chip0, lane_20_in_off_chip1);
  set_at<320, 1024, 16>(whole_result, result_20);

  hw_uint<16> lane_21_in_off_chip0;
  set_at<0, 16, 16>(lane_21_in_off_chip0, in_off_chip0.extract<336, 351>());
  hw_uint<16> lane_21_in_off_chip1;
  set_at<0, 16, 16>(lane_21_in_off_chip1, in_off_chip1.extract<336, 351>());
  auto result_21 = interleave(lane_21_in_off_chip0, lane_21_in_off_chip1);
  set_at<336, 1024, 16>(whole_result, result_21);

  hw_uint<16> lane_22_in_off_chip0;
  set_at<0, 16, 16>(lane_22_in_off_chip0, in_off_chip0.extract<352, 367>());
  hw_uint<16> lane_22_in_off_chip1;
  set_at<0, 16, 16>(lane_22_in_off_chip1, in_off_chip1.extract<352, 367>());
  auto result_22 = interleave(lane_22_in_off_chip0, lane_22_in_off_chip1);
  set_at<352, 1024, 16>(whole_result, result_22);

  hw_uint<16> lane_23_in_off_chip0;
  set_at<0, 16, 16>(lane_23_in_off_chip0, in_off_chip0.extract<368, 383>());
  hw_uint<16> lane_23_in_off_chip1;
  set_at<0, 16, 16>(lane_23_in_off_chip1, in_off_chip1.extract<368, 383>());
  auto result_23 = interleave(lane_23_in_off_chip0, lane_23_in_off_chip1);
  set_at<368, 1024, 16>(whole_result, result_23);

  hw_uint<16> lane_24_in_off_chip0;
  set_at<0, 16, 16>(lane_24_in_off_chip0, in_off_chip0.extract<384, 399>());
  hw_uint<16> lane_24_in_off_chip1;
  set_at<0, 16, 16>(lane_24_in_off_chip1, in_off_chip1.extract<384, 399>());
  auto result_24 = interleave(lane_24_in_off_chip0, lane_24_in_off_chip1);
  set_at<384, 1024, 16>(whole_result, result_24);

  hw_uint<16> lane_25_in_off_chip0;
  set_at<0, 16, 16>(lane_25_in_off_chip0, in_off_chip0.extract<400, 415>());
  hw_uint<16> lane_25_in_off_chip1;
  set_at<0, 16, 16>(lane_25_in_off_chip1, in_off_chip1.extract<400, 415>());
  auto result_25 = interleave(lane_25_in_off_chip0, lane_25_in_off_chip1);
  set_at<400, 1024, 16>(whole_result, result_25);

  hw_uint<16> lane_26_in_off_chip0;
  set_at<0, 16, 16>(lane_26_in_off_chip0, in_off_chip0.extract<416, 431>());
  hw_uint<16> lane_26_in_off_chip1;
  set_at<0, 16, 16>(lane_26_in_off_chip1, in_off_chip1.extract<416, 431>());
  auto result_26 = interleave(lane_26_in_off_chip0, lane_26_in_off_chip1);
  set_at<416, 1024, 16>(whole_result, result_26);

  hw_uint<16> lane_27_in_off_chip0;
  set_at<0, 16, 16>(lane_27_in_off_chip0, in_off_chip0.extract<432, 447>());
  hw_uint<16> lane_27_in_off_chip1;
  set_at<0, 16, 16>(lane_27_in_off_chip1, in_off_chip1.extract<432, 447>());
  auto result_27 = interleave(lane_27_in_off_chip0, lane_27_in_off_chip1);
  set_at<432, 1024, 16>(whole_result, result_27);

  hw_uint<16> lane_28_in_off_chip0;
  set_at<0, 16, 16>(lane_28_in_off_chip0, in_off_chip0.extract<448, 463>());
  hw_uint<16> lane_28_in_off_chip1;
  set_at<0, 16, 16>(lane_28_in_off_chip1, in_off_chip1.extract<448, 463>());
  auto result_28 = interleave(lane_28_in_off_chip0, lane_28_in_off_chip1);
  set_at<448, 1024, 16>(whole_result, result_28);

  hw_uint<16> lane_29_in_off_chip0;
  set_at<0, 16, 16>(lane_29_in_off_chip0, in_off_chip0.extract<464, 479>());
  hw_uint<16> lane_29_in_off_chip1;
  set_at<0, 16, 16>(lane_29_in_off_chip1, in_off_chip1.extract<464, 479>());
  auto result_29 = interleave(lane_29_in_off_chip0, lane_29_in_off_chip1);
  set_at<464, 1024, 16>(whole_result, result_29);

  hw_uint<16> lane_30_in_off_chip0;
  set_at<0, 16, 16>(lane_30_in_off_chip0, in_off_chip0.extract<480, 495>());
  hw_uint<16> lane_30_in_off_chip1;
  set_at<0, 16, 16>(lane_30_in_off_chip1, in_off_chip1.extract<480, 495>());
  auto result_30 = interleave(lane_30_in_off_chip0, lane_30_in_off_chip1);
  set_at<480, 1024, 16>(whole_result, result_30);

  hw_uint<16> lane_31_in_off_chip0;
  set_at<0, 16, 16>(lane_31_in_off_chip0, in_off_chip0.extract<496, 511>());
  hw_uint<16> lane_31_in_off_chip1;
  set_at<0, 16, 16>(lane_31_in_off_chip1, in_off_chip1.extract<496, 511>());
  auto result_31 = interleave(lane_31_in_off_chip0, lane_31_in_off_chip1);
  set_at<496, 1024, 16>(whole_result, result_31);

  hw_uint<16> lane_32_in_off_chip0;
  set_at<0, 16, 16>(lane_32_in_off_chip0, in_off_chip0.extract<512, 527>());
  hw_uint<16> lane_32_in_off_chip1;
  set_at<0, 16, 16>(lane_32_in_off_chip1, in_off_chip1.extract<512, 527>());
  auto result_32 = interleave(lane_32_in_off_chip0, lane_32_in_off_chip1);
  set_at<512, 1024, 16>(whole_result, result_32);

  hw_uint<16> lane_33_in_off_chip0;
  set_at<0, 16, 16>(lane_33_in_off_chip0, in_off_chip0.extract<528, 543>());
  hw_uint<16> lane_33_in_off_chip1;
  set_at<0, 16, 16>(lane_33_in_off_chip1, in_off_chip1.extract<528, 543>());
  auto result_33 = interleave(lane_33_in_off_chip0, lane_33_in_off_chip1);
  set_at<528, 1024, 16>(whole_result, result_33);

  hw_uint<16> lane_34_in_off_chip0;
  set_at<0, 16, 16>(lane_34_in_off_chip0, in_off_chip0.extract<544, 559>());
  hw_uint<16> lane_34_in_off_chip1;
  set_at<0, 16, 16>(lane_34_in_off_chip1, in_off_chip1.extract<544, 559>());
  auto result_34 = interleave(lane_34_in_off_chip0, lane_34_in_off_chip1);
  set_at<544, 1024, 16>(whole_result, result_34);

  hw_uint<16> lane_35_in_off_chip0;
  set_at<0, 16, 16>(lane_35_in_off_chip0, in_off_chip0.extract<560, 575>());
  hw_uint<16> lane_35_in_off_chip1;
  set_at<0, 16, 16>(lane_35_in_off_chip1, in_off_chip1.extract<560, 575>());
  auto result_35 = interleave(lane_35_in_off_chip0, lane_35_in_off_chip1);
  set_at<560, 1024, 16>(whole_result, result_35);

  hw_uint<16> lane_36_in_off_chip0;
  set_at<0, 16, 16>(lane_36_in_off_chip0, in_off_chip0.extract<576, 591>());
  hw_uint<16> lane_36_in_off_chip1;
  set_at<0, 16, 16>(lane_36_in_off_chip1, in_off_chip1.extract<576, 591>());
  auto result_36 = interleave(lane_36_in_off_chip0, lane_36_in_off_chip1);
  set_at<576, 1024, 16>(whole_result, result_36);

  hw_uint<16> lane_37_in_off_chip0;
  set_at<0, 16, 16>(lane_37_in_off_chip0, in_off_chip0.extract<592, 607>());
  hw_uint<16> lane_37_in_off_chip1;
  set_at<0, 16, 16>(lane_37_in_off_chip1, in_off_chip1.extract<592, 607>());
  auto result_37 = interleave(lane_37_in_off_chip0, lane_37_in_off_chip1);
  set_at<592, 1024, 16>(whole_result, result_37);

  hw_uint<16> lane_38_in_off_chip0;
  set_at<0, 16, 16>(lane_38_in_off_chip0, in_off_chip0.extract<608, 623>());
  hw_uint<16> lane_38_in_off_chip1;
  set_at<0, 16, 16>(lane_38_in_off_chip1, in_off_chip1.extract<608, 623>());
  auto result_38 = interleave(lane_38_in_off_chip0, lane_38_in_off_chip1);
  set_at<608, 1024, 16>(whole_result, result_38);

  hw_uint<16> lane_39_in_off_chip0;
  set_at<0, 16, 16>(lane_39_in_off_chip0, in_off_chip0.extract<624, 639>());
  hw_uint<16> lane_39_in_off_chip1;
  set_at<0, 16, 16>(lane_39_in_off_chip1, in_off_chip1.extract<624, 639>());
  auto result_39 = interleave(lane_39_in_off_chip0, lane_39_in_off_chip1);
  set_at<624, 1024, 16>(whole_result, result_39);

  hw_uint<16> lane_40_in_off_chip0;
  set_at<0, 16, 16>(lane_40_in_off_chip0, in_off_chip0.extract<640, 655>());
  hw_uint<16> lane_40_in_off_chip1;
  set_at<0, 16, 16>(lane_40_in_off_chip1, in_off_chip1.extract<640, 655>());
  auto result_40 = interleave(lane_40_in_off_chip0, lane_40_in_off_chip1);
  set_at<640, 1024, 16>(whole_result, result_40);

  hw_uint<16> lane_41_in_off_chip0;
  set_at<0, 16, 16>(lane_41_in_off_chip0, in_off_chip0.extract<656, 671>());
  hw_uint<16> lane_41_in_off_chip1;
  set_at<0, 16, 16>(lane_41_in_off_chip1, in_off_chip1.extract<656, 671>());
  auto result_41 = interleave(lane_41_in_off_chip0, lane_41_in_off_chip1);
  set_at<656, 1024, 16>(whole_result, result_41);

  hw_uint<16> lane_42_in_off_chip0;
  set_at<0, 16, 16>(lane_42_in_off_chip0, in_off_chip0.extract<672, 687>());
  hw_uint<16> lane_42_in_off_chip1;
  set_at<0, 16, 16>(lane_42_in_off_chip1, in_off_chip1.extract<672, 687>());
  auto result_42 = interleave(lane_42_in_off_chip0, lane_42_in_off_chip1);
  set_at<672, 1024, 16>(whole_result, result_42);

  hw_uint<16> lane_43_in_off_chip0;
  set_at<0, 16, 16>(lane_43_in_off_chip0, in_off_chip0.extract<688, 703>());
  hw_uint<16> lane_43_in_off_chip1;
  set_at<0, 16, 16>(lane_43_in_off_chip1, in_off_chip1.extract<688, 703>());
  auto result_43 = interleave(lane_43_in_off_chip0, lane_43_in_off_chip1);
  set_at<688, 1024, 16>(whole_result, result_43);

  hw_uint<16> lane_44_in_off_chip0;
  set_at<0, 16, 16>(lane_44_in_off_chip0, in_off_chip0.extract<704, 719>());
  hw_uint<16> lane_44_in_off_chip1;
  set_at<0, 16, 16>(lane_44_in_off_chip1, in_off_chip1.extract<704, 719>());
  auto result_44 = interleave(lane_44_in_off_chip0, lane_44_in_off_chip1);
  set_at<704, 1024, 16>(whole_result, result_44);

  hw_uint<16> lane_45_in_off_chip0;
  set_at<0, 16, 16>(lane_45_in_off_chip0, in_off_chip0.extract<720, 735>());
  hw_uint<16> lane_45_in_off_chip1;
  set_at<0, 16, 16>(lane_45_in_off_chip1, in_off_chip1.extract<720, 735>());
  auto result_45 = interleave(lane_45_in_off_chip0, lane_45_in_off_chip1);
  set_at<720, 1024, 16>(whole_result, result_45);

  hw_uint<16> lane_46_in_off_chip0;
  set_at<0, 16, 16>(lane_46_in_off_chip0, in_off_chip0.extract<736, 751>());
  hw_uint<16> lane_46_in_off_chip1;
  set_at<0, 16, 16>(lane_46_in_off_chip1, in_off_chip1.extract<736, 751>());
  auto result_46 = interleave(lane_46_in_off_chip0, lane_46_in_off_chip1);
  set_at<736, 1024, 16>(whole_result, result_46);

  hw_uint<16> lane_47_in_off_chip0;
  set_at<0, 16, 16>(lane_47_in_off_chip0, in_off_chip0.extract<752, 767>());
  hw_uint<16> lane_47_in_off_chip1;
  set_at<0, 16, 16>(lane_47_in_off_chip1, in_off_chip1.extract<752, 767>());
  auto result_47 = interleave(lane_47_in_off_chip0, lane_47_in_off_chip1);
  set_at<752, 1024, 16>(whole_result, result_47);

  hw_uint<16> lane_48_in_off_chip0;
  set_at<0, 16, 16>(lane_48_in_off_chip0, in_off_chip0.extract<768, 783>());
  hw_uint<16> lane_48_in_off_chip1;
  set_at<0, 16, 16>(lane_48_in_off_chip1, in_off_chip1.extract<768, 783>());
  auto result_48 = interleave(lane_48_in_off_chip0, lane_48_in_off_chip1);
  set_at<768, 1024, 16>(whole_result, result_48);

  hw_uint<16> lane_49_in_off_chip0;
  set_at<0, 16, 16>(lane_49_in_off_chip0, in_off_chip0.extract<784, 799>());
  hw_uint<16> lane_49_in_off_chip1;
  set_at<0, 16, 16>(lane_49_in_off_chip1, in_off_chip1.extract<784, 799>());
  auto result_49 = interleave(lane_49_in_off_chip0, lane_49_in_off_chip1);
  set_at<784, 1024, 16>(whole_result, result_49);

  hw_uint<16> lane_50_in_off_chip0;
  set_at<0, 16, 16>(lane_50_in_off_chip0, in_off_chip0.extract<800, 815>());
  hw_uint<16> lane_50_in_off_chip1;
  set_at<0, 16, 16>(lane_50_in_off_chip1, in_off_chip1.extract<800, 815>());
  auto result_50 = interleave(lane_50_in_off_chip0, lane_50_in_off_chip1);
  set_at<800, 1024, 16>(whole_result, result_50);

  hw_uint<16> lane_51_in_off_chip0;
  set_at<0, 16, 16>(lane_51_in_off_chip0, in_off_chip0.extract<816, 831>());
  hw_uint<16> lane_51_in_off_chip1;
  set_at<0, 16, 16>(lane_51_in_off_chip1, in_off_chip1.extract<816, 831>());
  auto result_51 = interleave(lane_51_in_off_chip0, lane_51_in_off_chip1);
  set_at<816, 1024, 16>(whole_result, result_51);

  hw_uint<16> lane_52_in_off_chip0;
  set_at<0, 16, 16>(lane_52_in_off_chip0, in_off_chip0.extract<832, 847>());
  hw_uint<16> lane_52_in_off_chip1;
  set_at<0, 16, 16>(lane_52_in_off_chip1, in_off_chip1.extract<832, 847>());
  auto result_52 = interleave(lane_52_in_off_chip0, lane_52_in_off_chip1);
  set_at<832, 1024, 16>(whole_result, result_52);

  hw_uint<16> lane_53_in_off_chip0;
  set_at<0, 16, 16>(lane_53_in_off_chip0, in_off_chip0.extract<848, 863>());
  hw_uint<16> lane_53_in_off_chip1;
  set_at<0, 16, 16>(lane_53_in_off_chip1, in_off_chip1.extract<848, 863>());
  auto result_53 = interleave(lane_53_in_off_chip0, lane_53_in_off_chip1);
  set_at<848, 1024, 16>(whole_result, result_53);

  hw_uint<16> lane_54_in_off_chip0;
  set_at<0, 16, 16>(lane_54_in_off_chip0, in_off_chip0.extract<864, 879>());
  hw_uint<16> lane_54_in_off_chip1;
  set_at<0, 16, 16>(lane_54_in_off_chip1, in_off_chip1.extract<864, 879>());
  auto result_54 = interleave(lane_54_in_off_chip0, lane_54_in_off_chip1);
  set_at<864, 1024, 16>(whole_result, result_54);

  hw_uint<16> lane_55_in_off_chip0;
  set_at<0, 16, 16>(lane_55_in_off_chip0, in_off_chip0.extract<880, 895>());
  hw_uint<16> lane_55_in_off_chip1;
  set_at<0, 16, 16>(lane_55_in_off_chip1, in_off_chip1.extract<880, 895>());
  auto result_55 = interleave(lane_55_in_off_chip0, lane_55_in_off_chip1);
  set_at<880, 1024, 16>(whole_result, result_55);

  hw_uint<16> lane_56_in_off_chip0;
  set_at<0, 16, 16>(lane_56_in_off_chip0, in_off_chip0.extract<896, 911>());
  hw_uint<16> lane_56_in_off_chip1;
  set_at<0, 16, 16>(lane_56_in_off_chip1, in_off_chip1.extract<896, 911>());
  auto result_56 = interleave(lane_56_in_off_chip0, lane_56_in_off_chip1);
  set_at<896, 1024, 16>(whole_result, result_56);

  hw_uint<16> lane_57_in_off_chip0;
  set_at<0, 16, 16>(lane_57_in_off_chip0, in_off_chip0.extract<912, 927>());
  hw_uint<16> lane_57_in_off_chip1;
  set_at<0, 16, 16>(lane_57_in_off_chip1, in_off_chip1.extract<912, 927>());
  auto result_57 = interleave(lane_57_in_off_chip0, lane_57_in_off_chip1);
  set_at<912, 1024, 16>(whole_result, result_57);

  hw_uint<16> lane_58_in_off_chip0;
  set_at<0, 16, 16>(lane_58_in_off_chip0, in_off_chip0.extract<928, 943>());
  hw_uint<16> lane_58_in_off_chip1;
  set_at<0, 16, 16>(lane_58_in_off_chip1, in_off_chip1.extract<928, 943>());
  auto result_58 = interleave(lane_58_in_off_chip0, lane_58_in_off_chip1);
  set_at<928, 1024, 16>(whole_result, result_58);

  hw_uint<16> lane_59_in_off_chip0;
  set_at<0, 16, 16>(lane_59_in_off_chip0, in_off_chip0.extract<944, 959>());
  hw_uint<16> lane_59_in_off_chip1;
  set_at<0, 16, 16>(lane_59_in_off_chip1, in_off_chip1.extract<944, 959>());
  auto result_59 = interleave(lane_59_in_off_chip0, lane_59_in_off_chip1);
  set_at<944, 1024, 16>(whole_result, result_59);

  hw_uint<16> lane_60_in_off_chip0;
  set_at<0, 16, 16>(lane_60_in_off_chip0, in_off_chip0.extract<960, 975>());
  hw_uint<16> lane_60_in_off_chip1;
  set_at<0, 16, 16>(lane_60_in_off_chip1, in_off_chip1.extract<960, 975>());
  auto result_60 = interleave(lane_60_in_off_chip0, lane_60_in_off_chip1);
  set_at<960, 1024, 16>(whole_result, result_60);

  hw_uint<16> lane_61_in_off_chip0;
  set_at<0, 16, 16>(lane_61_in_off_chip0, in_off_chip0.extract<976, 991>());
  hw_uint<16> lane_61_in_off_chip1;
  set_at<0, 16, 16>(lane_61_in_off_chip1, in_off_chip1.extract<976, 991>());
  auto result_61 = interleave(lane_61_in_off_chip0, lane_61_in_off_chip1);
  set_at<976, 1024, 16>(whole_result, result_61);

  hw_uint<16> lane_62_in_off_chip0;
  set_at<0, 16, 16>(lane_62_in_off_chip0, in_off_chip0.extract<992, 1007>());
  hw_uint<16> lane_62_in_off_chip1;
  set_at<0, 16, 16>(lane_62_in_off_chip1, in_off_chip1.extract<992, 1007>());
  auto result_62 = interleave(lane_62_in_off_chip0, lane_62_in_off_chip1);
  set_at<992, 1024, 16>(whole_result, result_62);

  hw_uint<16> lane_63_in_off_chip0;
  set_at<0, 16, 16>(lane_63_in_off_chip0, in_off_chip0.extract<1008, 1023>());
  hw_uint<16> lane_63_in_off_chip1;
  set_at<0, 16, 16>(lane_63_in_off_chip1, in_off_chip1.extract<1008, 1023>());
  auto result_63 = interleave(lane_63_in_off_chip0, lane_63_in_off_chip1);
  set_at<1008, 1024, 16>(whole_result, result_63);
  return whole_result;
}

  // in_update_0 unroll factor: 64
hw_uint<1024>  id_unrolled_64(hw_uint<1024>& in_off_chip0_oc_in_off_chip1_oc) {
  hw_uint<1024> whole_result;

  hw_uint<16> lane_0_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_0_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<0, 15>());
  auto result_0 = id(lane_0_in_off_chip0_oc_in_off_chip1_oc);
  set_at<0, 1024, 16>(whole_result, result_0);

  hw_uint<16> lane_1_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_1_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<16, 31>());
  auto result_1 = id(lane_1_in_off_chip0_oc_in_off_chip1_oc);
  set_at<16, 1024, 16>(whole_result, result_1);

  hw_uint<16> lane_2_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_2_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<32, 47>());
  auto result_2 = id(lane_2_in_off_chip0_oc_in_off_chip1_oc);
  set_at<32, 1024, 16>(whole_result, result_2);

  hw_uint<16> lane_3_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_3_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<48, 63>());
  auto result_3 = id(lane_3_in_off_chip0_oc_in_off_chip1_oc);
  set_at<48, 1024, 16>(whole_result, result_3);

  hw_uint<16> lane_4_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_4_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<64, 79>());
  auto result_4 = id(lane_4_in_off_chip0_oc_in_off_chip1_oc);
  set_at<64, 1024, 16>(whole_result, result_4);

  hw_uint<16> lane_5_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_5_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<80, 95>());
  auto result_5 = id(lane_5_in_off_chip0_oc_in_off_chip1_oc);
  set_at<80, 1024, 16>(whole_result, result_5);

  hw_uint<16> lane_6_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_6_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<96, 111>());
  auto result_6 = id(lane_6_in_off_chip0_oc_in_off_chip1_oc);
  set_at<96, 1024, 16>(whole_result, result_6);

  hw_uint<16> lane_7_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_7_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<112, 127>());
  auto result_7 = id(lane_7_in_off_chip0_oc_in_off_chip1_oc);
  set_at<112, 1024, 16>(whole_result, result_7);

  hw_uint<16> lane_8_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_8_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<128, 143>());
  auto result_8 = id(lane_8_in_off_chip0_oc_in_off_chip1_oc);
  set_at<128, 1024, 16>(whole_result, result_8);

  hw_uint<16> lane_9_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_9_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<144, 159>());
  auto result_9 = id(lane_9_in_off_chip0_oc_in_off_chip1_oc);
  set_at<144, 1024, 16>(whole_result, result_9);

  hw_uint<16> lane_10_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_10_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<160, 175>());
  auto result_10 = id(lane_10_in_off_chip0_oc_in_off_chip1_oc);
  set_at<160, 1024, 16>(whole_result, result_10);

  hw_uint<16> lane_11_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_11_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<176, 191>());
  auto result_11 = id(lane_11_in_off_chip0_oc_in_off_chip1_oc);
  set_at<176, 1024, 16>(whole_result, result_11);

  hw_uint<16> lane_12_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_12_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<192, 207>());
  auto result_12 = id(lane_12_in_off_chip0_oc_in_off_chip1_oc);
  set_at<192, 1024, 16>(whole_result, result_12);

  hw_uint<16> lane_13_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_13_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<208, 223>());
  auto result_13 = id(lane_13_in_off_chip0_oc_in_off_chip1_oc);
  set_at<208, 1024, 16>(whole_result, result_13);

  hw_uint<16> lane_14_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_14_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<224, 239>());
  auto result_14 = id(lane_14_in_off_chip0_oc_in_off_chip1_oc);
  set_at<224, 1024, 16>(whole_result, result_14);

  hw_uint<16> lane_15_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_15_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<240, 255>());
  auto result_15 = id(lane_15_in_off_chip0_oc_in_off_chip1_oc);
  set_at<240, 1024, 16>(whole_result, result_15);

  hw_uint<16> lane_16_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_16_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<256, 271>());
  auto result_16 = id(lane_16_in_off_chip0_oc_in_off_chip1_oc);
  set_at<256, 1024, 16>(whole_result, result_16);

  hw_uint<16> lane_17_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_17_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<272, 287>());
  auto result_17 = id(lane_17_in_off_chip0_oc_in_off_chip1_oc);
  set_at<272, 1024, 16>(whole_result, result_17);

  hw_uint<16> lane_18_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_18_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<288, 303>());
  auto result_18 = id(lane_18_in_off_chip0_oc_in_off_chip1_oc);
  set_at<288, 1024, 16>(whole_result, result_18);

  hw_uint<16> lane_19_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_19_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<304, 319>());
  auto result_19 = id(lane_19_in_off_chip0_oc_in_off_chip1_oc);
  set_at<304, 1024, 16>(whole_result, result_19);

  hw_uint<16> lane_20_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_20_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<320, 335>());
  auto result_20 = id(lane_20_in_off_chip0_oc_in_off_chip1_oc);
  set_at<320, 1024, 16>(whole_result, result_20);

  hw_uint<16> lane_21_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_21_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<336, 351>());
  auto result_21 = id(lane_21_in_off_chip0_oc_in_off_chip1_oc);
  set_at<336, 1024, 16>(whole_result, result_21);

  hw_uint<16> lane_22_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_22_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<352, 367>());
  auto result_22 = id(lane_22_in_off_chip0_oc_in_off_chip1_oc);
  set_at<352, 1024, 16>(whole_result, result_22);

  hw_uint<16> lane_23_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_23_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<368, 383>());
  auto result_23 = id(lane_23_in_off_chip0_oc_in_off_chip1_oc);
  set_at<368, 1024, 16>(whole_result, result_23);

  hw_uint<16> lane_24_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_24_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<384, 399>());
  auto result_24 = id(lane_24_in_off_chip0_oc_in_off_chip1_oc);
  set_at<384, 1024, 16>(whole_result, result_24);

  hw_uint<16> lane_25_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_25_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<400, 415>());
  auto result_25 = id(lane_25_in_off_chip0_oc_in_off_chip1_oc);
  set_at<400, 1024, 16>(whole_result, result_25);

  hw_uint<16> lane_26_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_26_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<416, 431>());
  auto result_26 = id(lane_26_in_off_chip0_oc_in_off_chip1_oc);
  set_at<416, 1024, 16>(whole_result, result_26);

  hw_uint<16> lane_27_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_27_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<432, 447>());
  auto result_27 = id(lane_27_in_off_chip0_oc_in_off_chip1_oc);
  set_at<432, 1024, 16>(whole_result, result_27);

  hw_uint<16> lane_28_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_28_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<448, 463>());
  auto result_28 = id(lane_28_in_off_chip0_oc_in_off_chip1_oc);
  set_at<448, 1024, 16>(whole_result, result_28);

  hw_uint<16> lane_29_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_29_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<464, 479>());
  auto result_29 = id(lane_29_in_off_chip0_oc_in_off_chip1_oc);
  set_at<464, 1024, 16>(whole_result, result_29);

  hw_uint<16> lane_30_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_30_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<480, 495>());
  auto result_30 = id(lane_30_in_off_chip0_oc_in_off_chip1_oc);
  set_at<480, 1024, 16>(whole_result, result_30);

  hw_uint<16> lane_31_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_31_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<496, 511>());
  auto result_31 = id(lane_31_in_off_chip0_oc_in_off_chip1_oc);
  set_at<496, 1024, 16>(whole_result, result_31);

  hw_uint<16> lane_32_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_32_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<512, 527>());
  auto result_32 = id(lane_32_in_off_chip0_oc_in_off_chip1_oc);
  set_at<512, 1024, 16>(whole_result, result_32);

  hw_uint<16> lane_33_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_33_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<528, 543>());
  auto result_33 = id(lane_33_in_off_chip0_oc_in_off_chip1_oc);
  set_at<528, 1024, 16>(whole_result, result_33);

  hw_uint<16> lane_34_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_34_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<544, 559>());
  auto result_34 = id(lane_34_in_off_chip0_oc_in_off_chip1_oc);
  set_at<544, 1024, 16>(whole_result, result_34);

  hw_uint<16> lane_35_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_35_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<560, 575>());
  auto result_35 = id(lane_35_in_off_chip0_oc_in_off_chip1_oc);
  set_at<560, 1024, 16>(whole_result, result_35);

  hw_uint<16> lane_36_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_36_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<576, 591>());
  auto result_36 = id(lane_36_in_off_chip0_oc_in_off_chip1_oc);
  set_at<576, 1024, 16>(whole_result, result_36);

  hw_uint<16> lane_37_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_37_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<592, 607>());
  auto result_37 = id(lane_37_in_off_chip0_oc_in_off_chip1_oc);
  set_at<592, 1024, 16>(whole_result, result_37);

  hw_uint<16> lane_38_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_38_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<608, 623>());
  auto result_38 = id(lane_38_in_off_chip0_oc_in_off_chip1_oc);
  set_at<608, 1024, 16>(whole_result, result_38);

  hw_uint<16> lane_39_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_39_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<624, 639>());
  auto result_39 = id(lane_39_in_off_chip0_oc_in_off_chip1_oc);
  set_at<624, 1024, 16>(whole_result, result_39);

  hw_uint<16> lane_40_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_40_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<640, 655>());
  auto result_40 = id(lane_40_in_off_chip0_oc_in_off_chip1_oc);
  set_at<640, 1024, 16>(whole_result, result_40);

  hw_uint<16> lane_41_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_41_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<656, 671>());
  auto result_41 = id(lane_41_in_off_chip0_oc_in_off_chip1_oc);
  set_at<656, 1024, 16>(whole_result, result_41);

  hw_uint<16> lane_42_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_42_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<672, 687>());
  auto result_42 = id(lane_42_in_off_chip0_oc_in_off_chip1_oc);
  set_at<672, 1024, 16>(whole_result, result_42);

  hw_uint<16> lane_43_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_43_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<688, 703>());
  auto result_43 = id(lane_43_in_off_chip0_oc_in_off_chip1_oc);
  set_at<688, 1024, 16>(whole_result, result_43);

  hw_uint<16> lane_44_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_44_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<704, 719>());
  auto result_44 = id(lane_44_in_off_chip0_oc_in_off_chip1_oc);
  set_at<704, 1024, 16>(whole_result, result_44);

  hw_uint<16> lane_45_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_45_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<720, 735>());
  auto result_45 = id(lane_45_in_off_chip0_oc_in_off_chip1_oc);
  set_at<720, 1024, 16>(whole_result, result_45);

  hw_uint<16> lane_46_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_46_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<736, 751>());
  auto result_46 = id(lane_46_in_off_chip0_oc_in_off_chip1_oc);
  set_at<736, 1024, 16>(whole_result, result_46);

  hw_uint<16> lane_47_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_47_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<752, 767>());
  auto result_47 = id(lane_47_in_off_chip0_oc_in_off_chip1_oc);
  set_at<752, 1024, 16>(whole_result, result_47);

  hw_uint<16> lane_48_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_48_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<768, 783>());
  auto result_48 = id(lane_48_in_off_chip0_oc_in_off_chip1_oc);
  set_at<768, 1024, 16>(whole_result, result_48);

  hw_uint<16> lane_49_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_49_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<784, 799>());
  auto result_49 = id(lane_49_in_off_chip0_oc_in_off_chip1_oc);
  set_at<784, 1024, 16>(whole_result, result_49);

  hw_uint<16> lane_50_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_50_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<800, 815>());
  auto result_50 = id(lane_50_in_off_chip0_oc_in_off_chip1_oc);
  set_at<800, 1024, 16>(whole_result, result_50);

  hw_uint<16> lane_51_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_51_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<816, 831>());
  auto result_51 = id(lane_51_in_off_chip0_oc_in_off_chip1_oc);
  set_at<816, 1024, 16>(whole_result, result_51);

  hw_uint<16> lane_52_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_52_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<832, 847>());
  auto result_52 = id(lane_52_in_off_chip0_oc_in_off_chip1_oc);
  set_at<832, 1024, 16>(whole_result, result_52);

  hw_uint<16> lane_53_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_53_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<848, 863>());
  auto result_53 = id(lane_53_in_off_chip0_oc_in_off_chip1_oc);
  set_at<848, 1024, 16>(whole_result, result_53);

  hw_uint<16> lane_54_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_54_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<864, 879>());
  auto result_54 = id(lane_54_in_off_chip0_oc_in_off_chip1_oc);
  set_at<864, 1024, 16>(whole_result, result_54);

  hw_uint<16> lane_55_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_55_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<880, 895>());
  auto result_55 = id(lane_55_in_off_chip0_oc_in_off_chip1_oc);
  set_at<880, 1024, 16>(whole_result, result_55);

  hw_uint<16> lane_56_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_56_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<896, 911>());
  auto result_56 = id(lane_56_in_off_chip0_oc_in_off_chip1_oc);
  set_at<896, 1024, 16>(whole_result, result_56);

  hw_uint<16> lane_57_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_57_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<912, 927>());
  auto result_57 = id(lane_57_in_off_chip0_oc_in_off_chip1_oc);
  set_at<912, 1024, 16>(whole_result, result_57);

  hw_uint<16> lane_58_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_58_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<928, 943>());
  auto result_58 = id(lane_58_in_off_chip0_oc_in_off_chip1_oc);
  set_at<928, 1024, 16>(whole_result, result_58);

  hw_uint<16> lane_59_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_59_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<944, 959>());
  auto result_59 = id(lane_59_in_off_chip0_oc_in_off_chip1_oc);
  set_at<944, 1024, 16>(whole_result, result_59);

  hw_uint<16> lane_60_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_60_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<960, 975>());
  auto result_60 = id(lane_60_in_off_chip0_oc_in_off_chip1_oc);
  set_at<960, 1024, 16>(whole_result, result_60);

  hw_uint<16> lane_61_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_61_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<976, 991>());
  auto result_61 = id(lane_61_in_off_chip0_oc_in_off_chip1_oc);
  set_at<976, 1024, 16>(whole_result, result_61);

  hw_uint<16> lane_62_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_62_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<992, 1007>());
  auto result_62 = id(lane_62_in_off_chip0_oc_in_off_chip1_oc);
  set_at<992, 1024, 16>(whole_result, result_62);

  hw_uint<16> lane_63_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_63_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<1008, 1023>());
  auto result_63 = id(lane_63_in_off_chip0_oc_in_off_chip1_oc);
  set_at<1008, 1024, 16>(whole_result, result_63);
  return whole_result;
}

  // dark_update_0 unroll factor: 64
hw_uint<1024>  scale_exposure_unrolled_64(hw_uint<1024>& in) {
  hw_uint<1024> whole_result;

  hw_uint<16> lane_0_in;
  set_at<0, 16, 16>(lane_0_in, in.extract<0, 15>());
  auto result_0 = scale_exposure(lane_0_in);
  set_at<0, 1024, 16>(whole_result, result_0);

  hw_uint<16> lane_1_in;
  set_at<0, 16, 16>(lane_1_in, in.extract<16, 31>());
  auto result_1 = scale_exposure(lane_1_in);
  set_at<16, 1024, 16>(whole_result, result_1);

  hw_uint<16> lane_2_in;
  set_at<0, 16, 16>(lane_2_in, in.extract<32, 47>());
  auto result_2 = scale_exposure(lane_2_in);
  set_at<32, 1024, 16>(whole_result, result_2);

  hw_uint<16> lane_3_in;
  set_at<0, 16, 16>(lane_3_in, in.extract<48, 63>());
  auto result_3 = scale_exposure(lane_3_in);
  set_at<48, 1024, 16>(whole_result, result_3);

  hw_uint<16> lane_4_in;
  set_at<0, 16, 16>(lane_4_in, in.extract<64, 79>());
  auto result_4 = scale_exposure(lane_4_in);
  set_at<64, 1024, 16>(whole_result, result_4);

  hw_uint<16> lane_5_in;
  set_at<0, 16, 16>(lane_5_in, in.extract<80, 95>());
  auto result_5 = scale_exposure(lane_5_in);
  set_at<80, 1024, 16>(whole_result, result_5);

  hw_uint<16> lane_6_in;
  set_at<0, 16, 16>(lane_6_in, in.extract<96, 111>());
  auto result_6 = scale_exposure(lane_6_in);
  set_at<96, 1024, 16>(whole_result, result_6);

  hw_uint<16> lane_7_in;
  set_at<0, 16, 16>(lane_7_in, in.extract<112, 127>());
  auto result_7 = scale_exposure(lane_7_in);
  set_at<112, 1024, 16>(whole_result, result_7);

  hw_uint<16> lane_8_in;
  set_at<0, 16, 16>(lane_8_in, in.extract<128, 143>());
  auto result_8 = scale_exposure(lane_8_in);
  set_at<128, 1024, 16>(whole_result, result_8);

  hw_uint<16> lane_9_in;
  set_at<0, 16, 16>(lane_9_in, in.extract<144, 159>());
  auto result_9 = scale_exposure(lane_9_in);
  set_at<144, 1024, 16>(whole_result, result_9);

  hw_uint<16> lane_10_in;
  set_at<0, 16, 16>(lane_10_in, in.extract<160, 175>());
  auto result_10 = scale_exposure(lane_10_in);
  set_at<160, 1024, 16>(whole_result, result_10);

  hw_uint<16> lane_11_in;
  set_at<0, 16, 16>(lane_11_in, in.extract<176, 191>());
  auto result_11 = scale_exposure(lane_11_in);
  set_at<176, 1024, 16>(whole_result, result_11);

  hw_uint<16> lane_12_in;
  set_at<0, 16, 16>(lane_12_in, in.extract<192, 207>());
  auto result_12 = scale_exposure(lane_12_in);
  set_at<192, 1024, 16>(whole_result, result_12);

  hw_uint<16> lane_13_in;
  set_at<0, 16, 16>(lane_13_in, in.extract<208, 223>());
  auto result_13 = scale_exposure(lane_13_in);
  set_at<208, 1024, 16>(whole_result, result_13);

  hw_uint<16> lane_14_in;
  set_at<0, 16, 16>(lane_14_in, in.extract<224, 239>());
  auto result_14 = scale_exposure(lane_14_in);
  set_at<224, 1024, 16>(whole_result, result_14);

  hw_uint<16> lane_15_in;
  set_at<0, 16, 16>(lane_15_in, in.extract<240, 255>());
  auto result_15 = scale_exposure(lane_15_in);
  set_at<240, 1024, 16>(whole_result, result_15);

  hw_uint<16> lane_16_in;
  set_at<0, 16, 16>(lane_16_in, in.extract<256, 271>());
  auto result_16 = scale_exposure(lane_16_in);
  set_at<256, 1024, 16>(whole_result, result_16);

  hw_uint<16> lane_17_in;
  set_at<0, 16, 16>(lane_17_in, in.extract<272, 287>());
  auto result_17 = scale_exposure(lane_17_in);
  set_at<272, 1024, 16>(whole_result, result_17);

  hw_uint<16> lane_18_in;
  set_at<0, 16, 16>(lane_18_in, in.extract<288, 303>());
  auto result_18 = scale_exposure(lane_18_in);
  set_at<288, 1024, 16>(whole_result, result_18);

  hw_uint<16> lane_19_in;
  set_at<0, 16, 16>(lane_19_in, in.extract<304, 319>());
  auto result_19 = scale_exposure(lane_19_in);
  set_at<304, 1024, 16>(whole_result, result_19);

  hw_uint<16> lane_20_in;
  set_at<0, 16, 16>(lane_20_in, in.extract<320, 335>());
  auto result_20 = scale_exposure(lane_20_in);
  set_at<320, 1024, 16>(whole_result, result_20);

  hw_uint<16> lane_21_in;
  set_at<0, 16, 16>(lane_21_in, in.extract<336, 351>());
  auto result_21 = scale_exposure(lane_21_in);
  set_at<336, 1024, 16>(whole_result, result_21);

  hw_uint<16> lane_22_in;
  set_at<0, 16, 16>(lane_22_in, in.extract<352, 367>());
  auto result_22 = scale_exposure(lane_22_in);
  set_at<352, 1024, 16>(whole_result, result_22);

  hw_uint<16> lane_23_in;
  set_at<0, 16, 16>(lane_23_in, in.extract<368, 383>());
  auto result_23 = scale_exposure(lane_23_in);
  set_at<368, 1024, 16>(whole_result, result_23);

  hw_uint<16> lane_24_in;
  set_at<0, 16, 16>(lane_24_in, in.extract<384, 399>());
  auto result_24 = scale_exposure(lane_24_in);
  set_at<384, 1024, 16>(whole_result, result_24);

  hw_uint<16> lane_25_in;
  set_at<0, 16, 16>(lane_25_in, in.extract<400, 415>());
  auto result_25 = scale_exposure(lane_25_in);
  set_at<400, 1024, 16>(whole_result, result_25);

  hw_uint<16> lane_26_in;
  set_at<0, 16, 16>(lane_26_in, in.extract<416, 431>());
  auto result_26 = scale_exposure(lane_26_in);
  set_at<416, 1024, 16>(whole_result, result_26);

  hw_uint<16> lane_27_in;
  set_at<0, 16, 16>(lane_27_in, in.extract<432, 447>());
  auto result_27 = scale_exposure(lane_27_in);
  set_at<432, 1024, 16>(whole_result, result_27);

  hw_uint<16> lane_28_in;
  set_at<0, 16, 16>(lane_28_in, in.extract<448, 463>());
  auto result_28 = scale_exposure(lane_28_in);
  set_at<448, 1024, 16>(whole_result, result_28);

  hw_uint<16> lane_29_in;
  set_at<0, 16, 16>(lane_29_in, in.extract<464, 479>());
  auto result_29 = scale_exposure(lane_29_in);
  set_at<464, 1024, 16>(whole_result, result_29);

  hw_uint<16> lane_30_in;
  set_at<0, 16, 16>(lane_30_in, in.extract<480, 495>());
  auto result_30 = scale_exposure(lane_30_in);
  set_at<480, 1024, 16>(whole_result, result_30);

  hw_uint<16> lane_31_in;
  set_at<0, 16, 16>(lane_31_in, in.extract<496, 511>());
  auto result_31 = scale_exposure(lane_31_in);
  set_at<496, 1024, 16>(whole_result, result_31);

  hw_uint<16> lane_32_in;
  set_at<0, 16, 16>(lane_32_in, in.extract<512, 527>());
  auto result_32 = scale_exposure(lane_32_in);
  set_at<512, 1024, 16>(whole_result, result_32);

  hw_uint<16> lane_33_in;
  set_at<0, 16, 16>(lane_33_in, in.extract<528, 543>());
  auto result_33 = scale_exposure(lane_33_in);
  set_at<528, 1024, 16>(whole_result, result_33);

  hw_uint<16> lane_34_in;
  set_at<0, 16, 16>(lane_34_in, in.extract<544, 559>());
  auto result_34 = scale_exposure(lane_34_in);
  set_at<544, 1024, 16>(whole_result, result_34);

  hw_uint<16> lane_35_in;
  set_at<0, 16, 16>(lane_35_in, in.extract<560, 575>());
  auto result_35 = scale_exposure(lane_35_in);
  set_at<560, 1024, 16>(whole_result, result_35);

  hw_uint<16> lane_36_in;
  set_at<0, 16, 16>(lane_36_in, in.extract<576, 591>());
  auto result_36 = scale_exposure(lane_36_in);
  set_at<576, 1024, 16>(whole_result, result_36);

  hw_uint<16> lane_37_in;
  set_at<0, 16, 16>(lane_37_in, in.extract<592, 607>());
  auto result_37 = scale_exposure(lane_37_in);
  set_at<592, 1024, 16>(whole_result, result_37);

  hw_uint<16> lane_38_in;
  set_at<0, 16, 16>(lane_38_in, in.extract<608, 623>());
  auto result_38 = scale_exposure(lane_38_in);
  set_at<608, 1024, 16>(whole_result, result_38);

  hw_uint<16> lane_39_in;
  set_at<0, 16, 16>(lane_39_in, in.extract<624, 639>());
  auto result_39 = scale_exposure(lane_39_in);
  set_at<624, 1024, 16>(whole_result, result_39);

  hw_uint<16> lane_40_in;
  set_at<0, 16, 16>(lane_40_in, in.extract<640, 655>());
  auto result_40 = scale_exposure(lane_40_in);
  set_at<640, 1024, 16>(whole_result, result_40);

  hw_uint<16> lane_41_in;
  set_at<0, 16, 16>(lane_41_in, in.extract<656, 671>());
  auto result_41 = scale_exposure(lane_41_in);
  set_at<656, 1024, 16>(whole_result, result_41);

  hw_uint<16> lane_42_in;
  set_at<0, 16, 16>(lane_42_in, in.extract<672, 687>());
  auto result_42 = scale_exposure(lane_42_in);
  set_at<672, 1024, 16>(whole_result, result_42);

  hw_uint<16> lane_43_in;
  set_at<0, 16, 16>(lane_43_in, in.extract<688, 703>());
  auto result_43 = scale_exposure(lane_43_in);
  set_at<688, 1024, 16>(whole_result, result_43);

  hw_uint<16> lane_44_in;
  set_at<0, 16, 16>(lane_44_in, in.extract<704, 719>());
  auto result_44 = scale_exposure(lane_44_in);
  set_at<704, 1024, 16>(whole_result, result_44);

  hw_uint<16> lane_45_in;
  set_at<0, 16, 16>(lane_45_in, in.extract<720, 735>());
  auto result_45 = scale_exposure(lane_45_in);
  set_at<720, 1024, 16>(whole_result, result_45);

  hw_uint<16> lane_46_in;
  set_at<0, 16, 16>(lane_46_in, in.extract<736, 751>());
  auto result_46 = scale_exposure(lane_46_in);
  set_at<736, 1024, 16>(whole_result, result_46);

  hw_uint<16> lane_47_in;
  set_at<0, 16, 16>(lane_47_in, in.extract<752, 767>());
  auto result_47 = scale_exposure(lane_47_in);
  set_at<752, 1024, 16>(whole_result, result_47);

  hw_uint<16> lane_48_in;
  set_at<0, 16, 16>(lane_48_in, in.extract<768, 783>());
  auto result_48 = scale_exposure(lane_48_in);
  set_at<768, 1024, 16>(whole_result, result_48);

  hw_uint<16> lane_49_in;
  set_at<0, 16, 16>(lane_49_in, in.extract<784, 799>());
  auto result_49 = scale_exposure(lane_49_in);
  set_at<784, 1024, 16>(whole_result, result_49);

  hw_uint<16> lane_50_in;
  set_at<0, 16, 16>(lane_50_in, in.extract<800, 815>());
  auto result_50 = scale_exposure(lane_50_in);
  set_at<800, 1024, 16>(whole_result, result_50);

  hw_uint<16> lane_51_in;
  set_at<0, 16, 16>(lane_51_in, in.extract<816, 831>());
  auto result_51 = scale_exposure(lane_51_in);
  set_at<816, 1024, 16>(whole_result, result_51);

  hw_uint<16> lane_52_in;
  set_at<0, 16, 16>(lane_52_in, in.extract<832, 847>());
  auto result_52 = scale_exposure(lane_52_in);
  set_at<832, 1024, 16>(whole_result, result_52);

  hw_uint<16> lane_53_in;
  set_at<0, 16, 16>(lane_53_in, in.extract<848, 863>());
  auto result_53 = scale_exposure(lane_53_in);
  set_at<848, 1024, 16>(whole_result, result_53);

  hw_uint<16> lane_54_in;
  set_at<0, 16, 16>(lane_54_in, in.extract<864, 879>());
  auto result_54 = scale_exposure(lane_54_in);
  set_at<864, 1024, 16>(whole_result, result_54);

  hw_uint<16> lane_55_in;
  set_at<0, 16, 16>(lane_55_in, in.extract<880, 895>());
  auto result_55 = scale_exposure(lane_55_in);
  set_at<880, 1024, 16>(whole_result, result_55);

  hw_uint<16> lane_56_in;
  set_at<0, 16, 16>(lane_56_in, in.extract<896, 911>());
  auto result_56 = scale_exposure(lane_56_in);
  set_at<896, 1024, 16>(whole_result, result_56);

  hw_uint<16> lane_57_in;
  set_at<0, 16, 16>(lane_57_in, in.extract<912, 927>());
  auto result_57 = scale_exposure(lane_57_in);
  set_at<912, 1024, 16>(whole_result, result_57);

  hw_uint<16> lane_58_in;
  set_at<0, 16, 16>(lane_58_in, in.extract<928, 943>());
  auto result_58 = scale_exposure(lane_58_in);
  set_at<928, 1024, 16>(whole_result, result_58);

  hw_uint<16> lane_59_in;
  set_at<0, 16, 16>(lane_59_in, in.extract<944, 959>());
  auto result_59 = scale_exposure(lane_59_in);
  set_at<944, 1024, 16>(whole_result, result_59);

  hw_uint<16> lane_60_in;
  set_at<0, 16, 16>(lane_60_in, in.extract<960, 975>());
  auto result_60 = scale_exposure(lane_60_in);
  set_at<960, 1024, 16>(whole_result, result_60);

  hw_uint<16> lane_61_in;
  set_at<0, 16, 16>(lane_61_in, in.extract<976, 991>());
  auto result_61 = scale_exposure(lane_61_in);
  set_at<976, 1024, 16>(whole_result, result_61);

  hw_uint<16> lane_62_in;
  set_at<0, 16, 16>(lane_62_in, in.extract<992, 1007>());
  auto result_62 = scale_exposure(lane_62_in);
  set_at<992, 1024, 16>(whole_result, result_62);

  hw_uint<16> lane_63_in;
  set_at<0, 16, 16>(lane_63_in, in.extract<1008, 1023>());
  auto result_63 = scale_exposure(lane_63_in);
  set_at<1008, 1024, 16>(whole_result, result_63);
  return whole_result;
}

  // ps_update_0 unroll factor: 64
hw_uint<1024>  add_unrolled_64(hw_uint<1024>& bright, hw_uint<1024>& dark) {
  hw_uint<1024> whole_result;

  hw_uint<16> lane_0_bright;
  set_at<0, 16, 16>(lane_0_bright, bright.extract<0, 15>());
  hw_uint<16> lane_0_dark;
  set_at<0, 16, 16>(lane_0_dark, dark.extract<0, 15>());
  auto result_0 = add(lane_0_bright, lane_0_dark);
  set_at<0, 1024, 16>(whole_result, result_0);

  hw_uint<16> lane_1_bright;
  set_at<0, 16, 16>(lane_1_bright, bright.extract<16, 31>());
  hw_uint<16> lane_1_dark;
  set_at<0, 16, 16>(lane_1_dark, dark.extract<16, 31>());
  auto result_1 = add(lane_1_bright, lane_1_dark);
  set_at<16, 1024, 16>(whole_result, result_1);

  hw_uint<16> lane_2_bright;
  set_at<0, 16, 16>(lane_2_bright, bright.extract<32, 47>());
  hw_uint<16> lane_2_dark;
  set_at<0, 16, 16>(lane_2_dark, dark.extract<32, 47>());
  auto result_2 = add(lane_2_bright, lane_2_dark);
  set_at<32, 1024, 16>(whole_result, result_2);

  hw_uint<16> lane_3_bright;
  set_at<0, 16, 16>(lane_3_bright, bright.extract<48, 63>());
  hw_uint<16> lane_3_dark;
  set_at<0, 16, 16>(lane_3_dark, dark.extract<48, 63>());
  auto result_3 = add(lane_3_bright, lane_3_dark);
  set_at<48, 1024, 16>(whole_result, result_3);

  hw_uint<16> lane_4_bright;
  set_at<0, 16, 16>(lane_4_bright, bright.extract<64, 79>());
  hw_uint<16> lane_4_dark;
  set_at<0, 16, 16>(lane_4_dark, dark.extract<64, 79>());
  auto result_4 = add(lane_4_bright, lane_4_dark);
  set_at<64, 1024, 16>(whole_result, result_4);

  hw_uint<16> lane_5_bright;
  set_at<0, 16, 16>(lane_5_bright, bright.extract<80, 95>());
  hw_uint<16> lane_5_dark;
  set_at<0, 16, 16>(lane_5_dark, dark.extract<80, 95>());
  auto result_5 = add(lane_5_bright, lane_5_dark);
  set_at<80, 1024, 16>(whole_result, result_5);

  hw_uint<16> lane_6_bright;
  set_at<0, 16, 16>(lane_6_bright, bright.extract<96, 111>());
  hw_uint<16> lane_6_dark;
  set_at<0, 16, 16>(lane_6_dark, dark.extract<96, 111>());
  auto result_6 = add(lane_6_bright, lane_6_dark);
  set_at<96, 1024, 16>(whole_result, result_6);

  hw_uint<16> lane_7_bright;
  set_at<0, 16, 16>(lane_7_bright, bright.extract<112, 127>());
  hw_uint<16> lane_7_dark;
  set_at<0, 16, 16>(lane_7_dark, dark.extract<112, 127>());
  auto result_7 = add(lane_7_bright, lane_7_dark);
  set_at<112, 1024, 16>(whole_result, result_7);

  hw_uint<16> lane_8_bright;
  set_at<0, 16, 16>(lane_8_bright, bright.extract<128, 143>());
  hw_uint<16> lane_8_dark;
  set_at<0, 16, 16>(lane_8_dark, dark.extract<128, 143>());
  auto result_8 = add(lane_8_bright, lane_8_dark);
  set_at<128, 1024, 16>(whole_result, result_8);

  hw_uint<16> lane_9_bright;
  set_at<0, 16, 16>(lane_9_bright, bright.extract<144, 159>());
  hw_uint<16> lane_9_dark;
  set_at<0, 16, 16>(lane_9_dark, dark.extract<144, 159>());
  auto result_9 = add(lane_9_bright, lane_9_dark);
  set_at<144, 1024, 16>(whole_result, result_9);

  hw_uint<16> lane_10_bright;
  set_at<0, 16, 16>(lane_10_bright, bright.extract<160, 175>());
  hw_uint<16> lane_10_dark;
  set_at<0, 16, 16>(lane_10_dark, dark.extract<160, 175>());
  auto result_10 = add(lane_10_bright, lane_10_dark);
  set_at<160, 1024, 16>(whole_result, result_10);

  hw_uint<16> lane_11_bright;
  set_at<0, 16, 16>(lane_11_bright, bright.extract<176, 191>());
  hw_uint<16> lane_11_dark;
  set_at<0, 16, 16>(lane_11_dark, dark.extract<176, 191>());
  auto result_11 = add(lane_11_bright, lane_11_dark);
  set_at<176, 1024, 16>(whole_result, result_11);

  hw_uint<16> lane_12_bright;
  set_at<0, 16, 16>(lane_12_bright, bright.extract<192, 207>());
  hw_uint<16> lane_12_dark;
  set_at<0, 16, 16>(lane_12_dark, dark.extract<192, 207>());
  auto result_12 = add(lane_12_bright, lane_12_dark);
  set_at<192, 1024, 16>(whole_result, result_12);

  hw_uint<16> lane_13_bright;
  set_at<0, 16, 16>(lane_13_bright, bright.extract<208, 223>());
  hw_uint<16> lane_13_dark;
  set_at<0, 16, 16>(lane_13_dark, dark.extract<208, 223>());
  auto result_13 = add(lane_13_bright, lane_13_dark);
  set_at<208, 1024, 16>(whole_result, result_13);

  hw_uint<16> lane_14_bright;
  set_at<0, 16, 16>(lane_14_bright, bright.extract<224, 239>());
  hw_uint<16> lane_14_dark;
  set_at<0, 16, 16>(lane_14_dark, dark.extract<224, 239>());
  auto result_14 = add(lane_14_bright, lane_14_dark);
  set_at<224, 1024, 16>(whole_result, result_14);

  hw_uint<16> lane_15_bright;
  set_at<0, 16, 16>(lane_15_bright, bright.extract<240, 255>());
  hw_uint<16> lane_15_dark;
  set_at<0, 16, 16>(lane_15_dark, dark.extract<240, 255>());
  auto result_15 = add(lane_15_bright, lane_15_dark);
  set_at<240, 1024, 16>(whole_result, result_15);

  hw_uint<16> lane_16_bright;
  set_at<0, 16, 16>(lane_16_bright, bright.extract<256, 271>());
  hw_uint<16> lane_16_dark;
  set_at<0, 16, 16>(lane_16_dark, dark.extract<256, 271>());
  auto result_16 = add(lane_16_bright, lane_16_dark);
  set_at<256, 1024, 16>(whole_result, result_16);

  hw_uint<16> lane_17_bright;
  set_at<0, 16, 16>(lane_17_bright, bright.extract<272, 287>());
  hw_uint<16> lane_17_dark;
  set_at<0, 16, 16>(lane_17_dark, dark.extract<272, 287>());
  auto result_17 = add(lane_17_bright, lane_17_dark);
  set_at<272, 1024, 16>(whole_result, result_17);

  hw_uint<16> lane_18_bright;
  set_at<0, 16, 16>(lane_18_bright, bright.extract<288, 303>());
  hw_uint<16> lane_18_dark;
  set_at<0, 16, 16>(lane_18_dark, dark.extract<288, 303>());
  auto result_18 = add(lane_18_bright, lane_18_dark);
  set_at<288, 1024, 16>(whole_result, result_18);

  hw_uint<16> lane_19_bright;
  set_at<0, 16, 16>(lane_19_bright, bright.extract<304, 319>());
  hw_uint<16> lane_19_dark;
  set_at<0, 16, 16>(lane_19_dark, dark.extract<304, 319>());
  auto result_19 = add(lane_19_bright, lane_19_dark);
  set_at<304, 1024, 16>(whole_result, result_19);

  hw_uint<16> lane_20_bright;
  set_at<0, 16, 16>(lane_20_bright, bright.extract<320, 335>());
  hw_uint<16> lane_20_dark;
  set_at<0, 16, 16>(lane_20_dark, dark.extract<320, 335>());
  auto result_20 = add(lane_20_bright, lane_20_dark);
  set_at<320, 1024, 16>(whole_result, result_20);

  hw_uint<16> lane_21_bright;
  set_at<0, 16, 16>(lane_21_bright, bright.extract<336, 351>());
  hw_uint<16> lane_21_dark;
  set_at<0, 16, 16>(lane_21_dark, dark.extract<336, 351>());
  auto result_21 = add(lane_21_bright, lane_21_dark);
  set_at<336, 1024, 16>(whole_result, result_21);

  hw_uint<16> lane_22_bright;
  set_at<0, 16, 16>(lane_22_bright, bright.extract<352, 367>());
  hw_uint<16> lane_22_dark;
  set_at<0, 16, 16>(lane_22_dark, dark.extract<352, 367>());
  auto result_22 = add(lane_22_bright, lane_22_dark);
  set_at<352, 1024, 16>(whole_result, result_22);

  hw_uint<16> lane_23_bright;
  set_at<0, 16, 16>(lane_23_bright, bright.extract<368, 383>());
  hw_uint<16> lane_23_dark;
  set_at<0, 16, 16>(lane_23_dark, dark.extract<368, 383>());
  auto result_23 = add(lane_23_bright, lane_23_dark);
  set_at<368, 1024, 16>(whole_result, result_23);

  hw_uint<16> lane_24_bright;
  set_at<0, 16, 16>(lane_24_bright, bright.extract<384, 399>());
  hw_uint<16> lane_24_dark;
  set_at<0, 16, 16>(lane_24_dark, dark.extract<384, 399>());
  auto result_24 = add(lane_24_bright, lane_24_dark);
  set_at<384, 1024, 16>(whole_result, result_24);

  hw_uint<16> lane_25_bright;
  set_at<0, 16, 16>(lane_25_bright, bright.extract<400, 415>());
  hw_uint<16> lane_25_dark;
  set_at<0, 16, 16>(lane_25_dark, dark.extract<400, 415>());
  auto result_25 = add(lane_25_bright, lane_25_dark);
  set_at<400, 1024, 16>(whole_result, result_25);

  hw_uint<16> lane_26_bright;
  set_at<0, 16, 16>(lane_26_bright, bright.extract<416, 431>());
  hw_uint<16> lane_26_dark;
  set_at<0, 16, 16>(lane_26_dark, dark.extract<416, 431>());
  auto result_26 = add(lane_26_bright, lane_26_dark);
  set_at<416, 1024, 16>(whole_result, result_26);

  hw_uint<16> lane_27_bright;
  set_at<0, 16, 16>(lane_27_bright, bright.extract<432, 447>());
  hw_uint<16> lane_27_dark;
  set_at<0, 16, 16>(lane_27_dark, dark.extract<432, 447>());
  auto result_27 = add(lane_27_bright, lane_27_dark);
  set_at<432, 1024, 16>(whole_result, result_27);

  hw_uint<16> lane_28_bright;
  set_at<0, 16, 16>(lane_28_bright, bright.extract<448, 463>());
  hw_uint<16> lane_28_dark;
  set_at<0, 16, 16>(lane_28_dark, dark.extract<448, 463>());
  auto result_28 = add(lane_28_bright, lane_28_dark);
  set_at<448, 1024, 16>(whole_result, result_28);

  hw_uint<16> lane_29_bright;
  set_at<0, 16, 16>(lane_29_bright, bright.extract<464, 479>());
  hw_uint<16> lane_29_dark;
  set_at<0, 16, 16>(lane_29_dark, dark.extract<464, 479>());
  auto result_29 = add(lane_29_bright, lane_29_dark);
  set_at<464, 1024, 16>(whole_result, result_29);

  hw_uint<16> lane_30_bright;
  set_at<0, 16, 16>(lane_30_bright, bright.extract<480, 495>());
  hw_uint<16> lane_30_dark;
  set_at<0, 16, 16>(lane_30_dark, dark.extract<480, 495>());
  auto result_30 = add(lane_30_bright, lane_30_dark);
  set_at<480, 1024, 16>(whole_result, result_30);

  hw_uint<16> lane_31_bright;
  set_at<0, 16, 16>(lane_31_bright, bright.extract<496, 511>());
  hw_uint<16> lane_31_dark;
  set_at<0, 16, 16>(lane_31_dark, dark.extract<496, 511>());
  auto result_31 = add(lane_31_bright, lane_31_dark);
  set_at<496, 1024, 16>(whole_result, result_31);

  hw_uint<16> lane_32_bright;
  set_at<0, 16, 16>(lane_32_bright, bright.extract<512, 527>());
  hw_uint<16> lane_32_dark;
  set_at<0, 16, 16>(lane_32_dark, dark.extract<512, 527>());
  auto result_32 = add(lane_32_bright, lane_32_dark);
  set_at<512, 1024, 16>(whole_result, result_32);

  hw_uint<16> lane_33_bright;
  set_at<0, 16, 16>(lane_33_bright, bright.extract<528, 543>());
  hw_uint<16> lane_33_dark;
  set_at<0, 16, 16>(lane_33_dark, dark.extract<528, 543>());
  auto result_33 = add(lane_33_bright, lane_33_dark);
  set_at<528, 1024, 16>(whole_result, result_33);

  hw_uint<16> lane_34_bright;
  set_at<0, 16, 16>(lane_34_bright, bright.extract<544, 559>());
  hw_uint<16> lane_34_dark;
  set_at<0, 16, 16>(lane_34_dark, dark.extract<544, 559>());
  auto result_34 = add(lane_34_bright, lane_34_dark);
  set_at<544, 1024, 16>(whole_result, result_34);

  hw_uint<16> lane_35_bright;
  set_at<0, 16, 16>(lane_35_bright, bright.extract<560, 575>());
  hw_uint<16> lane_35_dark;
  set_at<0, 16, 16>(lane_35_dark, dark.extract<560, 575>());
  auto result_35 = add(lane_35_bright, lane_35_dark);
  set_at<560, 1024, 16>(whole_result, result_35);

  hw_uint<16> lane_36_bright;
  set_at<0, 16, 16>(lane_36_bright, bright.extract<576, 591>());
  hw_uint<16> lane_36_dark;
  set_at<0, 16, 16>(lane_36_dark, dark.extract<576, 591>());
  auto result_36 = add(lane_36_bright, lane_36_dark);
  set_at<576, 1024, 16>(whole_result, result_36);

  hw_uint<16> lane_37_bright;
  set_at<0, 16, 16>(lane_37_bright, bright.extract<592, 607>());
  hw_uint<16> lane_37_dark;
  set_at<0, 16, 16>(lane_37_dark, dark.extract<592, 607>());
  auto result_37 = add(lane_37_bright, lane_37_dark);
  set_at<592, 1024, 16>(whole_result, result_37);

  hw_uint<16> lane_38_bright;
  set_at<0, 16, 16>(lane_38_bright, bright.extract<608, 623>());
  hw_uint<16> lane_38_dark;
  set_at<0, 16, 16>(lane_38_dark, dark.extract<608, 623>());
  auto result_38 = add(lane_38_bright, lane_38_dark);
  set_at<608, 1024, 16>(whole_result, result_38);

  hw_uint<16> lane_39_bright;
  set_at<0, 16, 16>(lane_39_bright, bright.extract<624, 639>());
  hw_uint<16> lane_39_dark;
  set_at<0, 16, 16>(lane_39_dark, dark.extract<624, 639>());
  auto result_39 = add(lane_39_bright, lane_39_dark);
  set_at<624, 1024, 16>(whole_result, result_39);

  hw_uint<16> lane_40_bright;
  set_at<0, 16, 16>(lane_40_bright, bright.extract<640, 655>());
  hw_uint<16> lane_40_dark;
  set_at<0, 16, 16>(lane_40_dark, dark.extract<640, 655>());
  auto result_40 = add(lane_40_bright, lane_40_dark);
  set_at<640, 1024, 16>(whole_result, result_40);

  hw_uint<16> lane_41_bright;
  set_at<0, 16, 16>(lane_41_bright, bright.extract<656, 671>());
  hw_uint<16> lane_41_dark;
  set_at<0, 16, 16>(lane_41_dark, dark.extract<656, 671>());
  auto result_41 = add(lane_41_bright, lane_41_dark);
  set_at<656, 1024, 16>(whole_result, result_41);

  hw_uint<16> lane_42_bright;
  set_at<0, 16, 16>(lane_42_bright, bright.extract<672, 687>());
  hw_uint<16> lane_42_dark;
  set_at<0, 16, 16>(lane_42_dark, dark.extract<672, 687>());
  auto result_42 = add(lane_42_bright, lane_42_dark);
  set_at<672, 1024, 16>(whole_result, result_42);

  hw_uint<16> lane_43_bright;
  set_at<0, 16, 16>(lane_43_bright, bright.extract<688, 703>());
  hw_uint<16> lane_43_dark;
  set_at<0, 16, 16>(lane_43_dark, dark.extract<688, 703>());
  auto result_43 = add(lane_43_bright, lane_43_dark);
  set_at<688, 1024, 16>(whole_result, result_43);

  hw_uint<16> lane_44_bright;
  set_at<0, 16, 16>(lane_44_bright, bright.extract<704, 719>());
  hw_uint<16> lane_44_dark;
  set_at<0, 16, 16>(lane_44_dark, dark.extract<704, 719>());
  auto result_44 = add(lane_44_bright, lane_44_dark);
  set_at<704, 1024, 16>(whole_result, result_44);

  hw_uint<16> lane_45_bright;
  set_at<0, 16, 16>(lane_45_bright, bright.extract<720, 735>());
  hw_uint<16> lane_45_dark;
  set_at<0, 16, 16>(lane_45_dark, dark.extract<720, 735>());
  auto result_45 = add(lane_45_bright, lane_45_dark);
  set_at<720, 1024, 16>(whole_result, result_45);

  hw_uint<16> lane_46_bright;
  set_at<0, 16, 16>(lane_46_bright, bright.extract<736, 751>());
  hw_uint<16> lane_46_dark;
  set_at<0, 16, 16>(lane_46_dark, dark.extract<736, 751>());
  auto result_46 = add(lane_46_bright, lane_46_dark);
  set_at<736, 1024, 16>(whole_result, result_46);

  hw_uint<16> lane_47_bright;
  set_at<0, 16, 16>(lane_47_bright, bright.extract<752, 767>());
  hw_uint<16> lane_47_dark;
  set_at<0, 16, 16>(lane_47_dark, dark.extract<752, 767>());
  auto result_47 = add(lane_47_bright, lane_47_dark);
  set_at<752, 1024, 16>(whole_result, result_47);

  hw_uint<16> lane_48_bright;
  set_at<0, 16, 16>(lane_48_bright, bright.extract<768, 783>());
  hw_uint<16> lane_48_dark;
  set_at<0, 16, 16>(lane_48_dark, dark.extract<768, 783>());
  auto result_48 = add(lane_48_bright, lane_48_dark);
  set_at<768, 1024, 16>(whole_result, result_48);

  hw_uint<16> lane_49_bright;
  set_at<0, 16, 16>(lane_49_bright, bright.extract<784, 799>());
  hw_uint<16> lane_49_dark;
  set_at<0, 16, 16>(lane_49_dark, dark.extract<784, 799>());
  auto result_49 = add(lane_49_bright, lane_49_dark);
  set_at<784, 1024, 16>(whole_result, result_49);

  hw_uint<16> lane_50_bright;
  set_at<0, 16, 16>(lane_50_bright, bright.extract<800, 815>());
  hw_uint<16> lane_50_dark;
  set_at<0, 16, 16>(lane_50_dark, dark.extract<800, 815>());
  auto result_50 = add(lane_50_bright, lane_50_dark);
  set_at<800, 1024, 16>(whole_result, result_50);

  hw_uint<16> lane_51_bright;
  set_at<0, 16, 16>(lane_51_bright, bright.extract<816, 831>());
  hw_uint<16> lane_51_dark;
  set_at<0, 16, 16>(lane_51_dark, dark.extract<816, 831>());
  auto result_51 = add(lane_51_bright, lane_51_dark);
  set_at<816, 1024, 16>(whole_result, result_51);

  hw_uint<16> lane_52_bright;
  set_at<0, 16, 16>(lane_52_bright, bright.extract<832, 847>());
  hw_uint<16> lane_52_dark;
  set_at<0, 16, 16>(lane_52_dark, dark.extract<832, 847>());
  auto result_52 = add(lane_52_bright, lane_52_dark);
  set_at<832, 1024, 16>(whole_result, result_52);

  hw_uint<16> lane_53_bright;
  set_at<0, 16, 16>(lane_53_bright, bright.extract<848, 863>());
  hw_uint<16> lane_53_dark;
  set_at<0, 16, 16>(lane_53_dark, dark.extract<848, 863>());
  auto result_53 = add(lane_53_bright, lane_53_dark);
  set_at<848, 1024, 16>(whole_result, result_53);

  hw_uint<16> lane_54_bright;
  set_at<0, 16, 16>(lane_54_bright, bright.extract<864, 879>());
  hw_uint<16> lane_54_dark;
  set_at<0, 16, 16>(lane_54_dark, dark.extract<864, 879>());
  auto result_54 = add(lane_54_bright, lane_54_dark);
  set_at<864, 1024, 16>(whole_result, result_54);

  hw_uint<16> lane_55_bright;
  set_at<0, 16, 16>(lane_55_bright, bright.extract<880, 895>());
  hw_uint<16> lane_55_dark;
  set_at<0, 16, 16>(lane_55_dark, dark.extract<880, 895>());
  auto result_55 = add(lane_55_bright, lane_55_dark);
  set_at<880, 1024, 16>(whole_result, result_55);

  hw_uint<16> lane_56_bright;
  set_at<0, 16, 16>(lane_56_bright, bright.extract<896, 911>());
  hw_uint<16> lane_56_dark;
  set_at<0, 16, 16>(lane_56_dark, dark.extract<896, 911>());
  auto result_56 = add(lane_56_bright, lane_56_dark);
  set_at<896, 1024, 16>(whole_result, result_56);

  hw_uint<16> lane_57_bright;
  set_at<0, 16, 16>(lane_57_bright, bright.extract<912, 927>());
  hw_uint<16> lane_57_dark;
  set_at<0, 16, 16>(lane_57_dark, dark.extract<912, 927>());
  auto result_57 = add(lane_57_bright, lane_57_dark);
  set_at<912, 1024, 16>(whole_result, result_57);

  hw_uint<16> lane_58_bright;
  set_at<0, 16, 16>(lane_58_bright, bright.extract<928, 943>());
  hw_uint<16> lane_58_dark;
  set_at<0, 16, 16>(lane_58_dark, dark.extract<928, 943>());
  auto result_58 = add(lane_58_bright, lane_58_dark);
  set_at<928, 1024, 16>(whole_result, result_58);

  hw_uint<16> lane_59_bright;
  set_at<0, 16, 16>(lane_59_bright, bright.extract<944, 959>());
  hw_uint<16> lane_59_dark;
  set_at<0, 16, 16>(lane_59_dark, dark.extract<944, 959>());
  auto result_59 = add(lane_59_bright, lane_59_dark);
  set_at<944, 1024, 16>(whole_result, result_59);

  hw_uint<16> lane_60_bright;
  set_at<0, 16, 16>(lane_60_bright, bright.extract<960, 975>());
  hw_uint<16> lane_60_dark;
  set_at<0, 16, 16>(lane_60_dark, dark.extract<960, 975>());
  auto result_60 = add(lane_60_bright, lane_60_dark);
  set_at<960, 1024, 16>(whole_result, result_60);

  hw_uint<16> lane_61_bright;
  set_at<0, 16, 16>(lane_61_bright, bright.extract<976, 991>());
  hw_uint<16> lane_61_dark;
  set_at<0, 16, 16>(lane_61_dark, dark.extract<976, 991>());
  auto result_61 = add(lane_61_bright, lane_61_dark);
  set_at<976, 1024, 16>(whole_result, result_61);

  hw_uint<16> lane_62_bright;
  set_at<0, 16, 16>(lane_62_bright, bright.extract<992, 1007>());
  hw_uint<16> lane_62_dark;
  set_at<0, 16, 16>(lane_62_dark, dark.extract<992, 1007>());
  auto result_62 = add(lane_62_bright, lane_62_dark);
  set_at<992, 1024, 16>(whole_result, result_62);

  hw_uint<16> lane_63_bright;
  set_at<0, 16, 16>(lane_63_bright, bright.extract<1008, 1023>());
  hw_uint<16> lane_63_dark;
  set_at<0, 16, 16>(lane_63_dark, dark.extract<1008, 1023>());
  auto result_63 = add(lane_63_bright, lane_63_dark);
  set_at<1008, 1024, 16>(whole_result, result_63);
  return whole_result;
}

