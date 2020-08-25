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
hw_uint<1024>  interleave_unrolled_64(hw_uint<1024>& in_off_chip0, hw_uint<1024>& in_off_chip1, int d0) {
  hw_uint<1024> whole_result;

  hw_uint<16> lane_0_in_off_chip0;
  set_at<0, 16, 16>(lane_0_in_off_chip0, in_off_chip0.extract<0, 15>());
  hw_uint<16> lane_0_in_off_chip1;
  set_at<0, 16, 16>(lane_0_in_off_chip1, in_off_chip1.extract<0, 15>());
  auto result_0 = interleave(lane_0_in_off_chip0, lane_0_in_off_chip1, d0);
  set_at<0, 1024, 16>(whole_result, result_0);

  hw_uint<16> lane_1_in_off_chip0;
  set_at<0, 16, 16>(lane_1_in_off_chip0, in_off_chip0.extract<16, 31>());
  hw_uint<16> lane_1_in_off_chip1;
  set_at<0, 16, 16>(lane_1_in_off_chip1, in_off_chip1.extract<16, 31>());
  auto result_1 = interleave(lane_1_in_off_chip0, lane_1_in_off_chip1, d0);
  set_at<16, 1024, 16>(whole_result, result_1);

  hw_uint<16> lane_2_in_off_chip0;
  set_at<0, 16, 16>(lane_2_in_off_chip0, in_off_chip0.extract<32, 47>());
  hw_uint<16> lane_2_in_off_chip1;
  set_at<0, 16, 16>(lane_2_in_off_chip1, in_off_chip1.extract<32, 47>());
  auto result_2 = interleave(lane_2_in_off_chip0, lane_2_in_off_chip1, d0);
  set_at<32, 1024, 16>(whole_result, result_2);

  hw_uint<16> lane_3_in_off_chip0;
  set_at<0, 16, 16>(lane_3_in_off_chip0, in_off_chip0.extract<48, 63>());
  hw_uint<16> lane_3_in_off_chip1;
  set_at<0, 16, 16>(lane_3_in_off_chip1, in_off_chip1.extract<48, 63>());
  auto result_3 = interleave(lane_3_in_off_chip0, lane_3_in_off_chip1, d0);
  set_at<48, 1024, 16>(whole_result, result_3);

  hw_uint<16> lane_4_in_off_chip0;
  set_at<0, 16, 16>(lane_4_in_off_chip0, in_off_chip0.extract<64, 79>());
  hw_uint<16> lane_4_in_off_chip1;
  set_at<0, 16, 16>(lane_4_in_off_chip1, in_off_chip1.extract<64, 79>());
  auto result_4 = interleave(lane_4_in_off_chip0, lane_4_in_off_chip1, d0);
  set_at<64, 1024, 16>(whole_result, result_4);

  hw_uint<16> lane_5_in_off_chip0;
  set_at<0, 16, 16>(lane_5_in_off_chip0, in_off_chip0.extract<80, 95>());
  hw_uint<16> lane_5_in_off_chip1;
  set_at<0, 16, 16>(lane_5_in_off_chip1, in_off_chip1.extract<80, 95>());
  auto result_5 = interleave(lane_5_in_off_chip0, lane_5_in_off_chip1, d0);
  set_at<80, 1024, 16>(whole_result, result_5);

  hw_uint<16> lane_6_in_off_chip0;
  set_at<0, 16, 16>(lane_6_in_off_chip0, in_off_chip0.extract<96, 111>());
  hw_uint<16> lane_6_in_off_chip1;
  set_at<0, 16, 16>(lane_6_in_off_chip1, in_off_chip1.extract<96, 111>());
  auto result_6 = interleave(lane_6_in_off_chip0, lane_6_in_off_chip1, d0);
  set_at<96, 1024, 16>(whole_result, result_6);

  hw_uint<16> lane_7_in_off_chip0;
  set_at<0, 16, 16>(lane_7_in_off_chip0, in_off_chip0.extract<112, 127>());
  hw_uint<16> lane_7_in_off_chip1;
  set_at<0, 16, 16>(lane_7_in_off_chip1, in_off_chip1.extract<112, 127>());
  auto result_7 = interleave(lane_7_in_off_chip0, lane_7_in_off_chip1, d0);
  set_at<112, 1024, 16>(whole_result, result_7);

  hw_uint<16> lane_8_in_off_chip0;
  set_at<0, 16, 16>(lane_8_in_off_chip0, in_off_chip0.extract<128, 143>());
  hw_uint<16> lane_8_in_off_chip1;
  set_at<0, 16, 16>(lane_8_in_off_chip1, in_off_chip1.extract<128, 143>());
  auto result_8 = interleave(lane_8_in_off_chip0, lane_8_in_off_chip1, d0);
  set_at<128, 1024, 16>(whole_result, result_8);

  hw_uint<16> lane_9_in_off_chip0;
  set_at<0, 16, 16>(lane_9_in_off_chip0, in_off_chip0.extract<144, 159>());
  hw_uint<16> lane_9_in_off_chip1;
  set_at<0, 16, 16>(lane_9_in_off_chip1, in_off_chip1.extract<144, 159>());
  auto result_9 = interleave(lane_9_in_off_chip0, lane_9_in_off_chip1, d0);
  set_at<144, 1024, 16>(whole_result, result_9);

  hw_uint<16> lane_10_in_off_chip0;
  set_at<0, 16, 16>(lane_10_in_off_chip0, in_off_chip0.extract<160, 175>());
  hw_uint<16> lane_10_in_off_chip1;
  set_at<0, 16, 16>(lane_10_in_off_chip1, in_off_chip1.extract<160, 175>());
  auto result_10 = interleave(lane_10_in_off_chip0, lane_10_in_off_chip1, d0);
  set_at<160, 1024, 16>(whole_result, result_10);

  hw_uint<16> lane_11_in_off_chip0;
  set_at<0, 16, 16>(lane_11_in_off_chip0, in_off_chip0.extract<176, 191>());
  hw_uint<16> lane_11_in_off_chip1;
  set_at<0, 16, 16>(lane_11_in_off_chip1, in_off_chip1.extract<176, 191>());
  auto result_11 = interleave(lane_11_in_off_chip0, lane_11_in_off_chip1, d0);
  set_at<176, 1024, 16>(whole_result, result_11);

  hw_uint<16> lane_12_in_off_chip0;
  set_at<0, 16, 16>(lane_12_in_off_chip0, in_off_chip0.extract<192, 207>());
  hw_uint<16> lane_12_in_off_chip1;
  set_at<0, 16, 16>(lane_12_in_off_chip1, in_off_chip1.extract<192, 207>());
  auto result_12 = interleave(lane_12_in_off_chip0, lane_12_in_off_chip1, d0);
  set_at<192, 1024, 16>(whole_result, result_12);

  hw_uint<16> lane_13_in_off_chip0;
  set_at<0, 16, 16>(lane_13_in_off_chip0, in_off_chip0.extract<208, 223>());
  hw_uint<16> lane_13_in_off_chip1;
  set_at<0, 16, 16>(lane_13_in_off_chip1, in_off_chip1.extract<208, 223>());
  auto result_13 = interleave(lane_13_in_off_chip0, lane_13_in_off_chip1, d0);
  set_at<208, 1024, 16>(whole_result, result_13);

  hw_uint<16> lane_14_in_off_chip0;
  set_at<0, 16, 16>(lane_14_in_off_chip0, in_off_chip0.extract<224, 239>());
  hw_uint<16> lane_14_in_off_chip1;
  set_at<0, 16, 16>(lane_14_in_off_chip1, in_off_chip1.extract<224, 239>());
  auto result_14 = interleave(lane_14_in_off_chip0, lane_14_in_off_chip1, d0);
  set_at<224, 1024, 16>(whole_result, result_14);

  hw_uint<16> lane_15_in_off_chip0;
  set_at<0, 16, 16>(lane_15_in_off_chip0, in_off_chip0.extract<240, 255>());
  hw_uint<16> lane_15_in_off_chip1;
  set_at<0, 16, 16>(lane_15_in_off_chip1, in_off_chip1.extract<240, 255>());
  auto result_15 = interleave(lane_15_in_off_chip0, lane_15_in_off_chip1, d0);
  set_at<240, 1024, 16>(whole_result, result_15);

  hw_uint<16> lane_16_in_off_chip0;
  set_at<0, 16, 16>(lane_16_in_off_chip0, in_off_chip0.extract<256, 271>());
  hw_uint<16> lane_16_in_off_chip1;
  set_at<0, 16, 16>(lane_16_in_off_chip1, in_off_chip1.extract<256, 271>());
  auto result_16 = interleave(lane_16_in_off_chip0, lane_16_in_off_chip1, d0);
  set_at<256, 1024, 16>(whole_result, result_16);

  hw_uint<16> lane_17_in_off_chip0;
  set_at<0, 16, 16>(lane_17_in_off_chip0, in_off_chip0.extract<272, 287>());
  hw_uint<16> lane_17_in_off_chip1;
  set_at<0, 16, 16>(lane_17_in_off_chip1, in_off_chip1.extract<272, 287>());
  auto result_17 = interleave(lane_17_in_off_chip0, lane_17_in_off_chip1, d0);
  set_at<272, 1024, 16>(whole_result, result_17);

  hw_uint<16> lane_18_in_off_chip0;
  set_at<0, 16, 16>(lane_18_in_off_chip0, in_off_chip0.extract<288, 303>());
  hw_uint<16> lane_18_in_off_chip1;
  set_at<0, 16, 16>(lane_18_in_off_chip1, in_off_chip1.extract<288, 303>());
  auto result_18 = interleave(lane_18_in_off_chip0, lane_18_in_off_chip1, d0);
  set_at<288, 1024, 16>(whole_result, result_18);

  hw_uint<16> lane_19_in_off_chip0;
  set_at<0, 16, 16>(lane_19_in_off_chip0, in_off_chip0.extract<304, 319>());
  hw_uint<16> lane_19_in_off_chip1;
  set_at<0, 16, 16>(lane_19_in_off_chip1, in_off_chip1.extract<304, 319>());
  auto result_19 = interleave(lane_19_in_off_chip0, lane_19_in_off_chip1, d0);
  set_at<304, 1024, 16>(whole_result, result_19);

  hw_uint<16> lane_20_in_off_chip0;
  set_at<0, 16, 16>(lane_20_in_off_chip0, in_off_chip0.extract<320, 335>());
  hw_uint<16> lane_20_in_off_chip1;
  set_at<0, 16, 16>(lane_20_in_off_chip1, in_off_chip1.extract<320, 335>());
  auto result_20 = interleave(lane_20_in_off_chip0, lane_20_in_off_chip1, d0);
  set_at<320, 1024, 16>(whole_result, result_20);

  hw_uint<16> lane_21_in_off_chip0;
  set_at<0, 16, 16>(lane_21_in_off_chip0, in_off_chip0.extract<336, 351>());
  hw_uint<16> lane_21_in_off_chip1;
  set_at<0, 16, 16>(lane_21_in_off_chip1, in_off_chip1.extract<336, 351>());
  auto result_21 = interleave(lane_21_in_off_chip0, lane_21_in_off_chip1, d0);
  set_at<336, 1024, 16>(whole_result, result_21);

  hw_uint<16> lane_22_in_off_chip0;
  set_at<0, 16, 16>(lane_22_in_off_chip0, in_off_chip0.extract<352, 367>());
  hw_uint<16> lane_22_in_off_chip1;
  set_at<0, 16, 16>(lane_22_in_off_chip1, in_off_chip1.extract<352, 367>());
  auto result_22 = interleave(lane_22_in_off_chip0, lane_22_in_off_chip1, d0);
  set_at<352, 1024, 16>(whole_result, result_22);

  hw_uint<16> lane_23_in_off_chip0;
  set_at<0, 16, 16>(lane_23_in_off_chip0, in_off_chip0.extract<368, 383>());
  hw_uint<16> lane_23_in_off_chip1;
  set_at<0, 16, 16>(lane_23_in_off_chip1, in_off_chip1.extract<368, 383>());
  auto result_23 = interleave(lane_23_in_off_chip0, lane_23_in_off_chip1, d0);
  set_at<368, 1024, 16>(whole_result, result_23);

  hw_uint<16> lane_24_in_off_chip0;
  set_at<0, 16, 16>(lane_24_in_off_chip0, in_off_chip0.extract<384, 399>());
  hw_uint<16> lane_24_in_off_chip1;
  set_at<0, 16, 16>(lane_24_in_off_chip1, in_off_chip1.extract<384, 399>());
  auto result_24 = interleave(lane_24_in_off_chip0, lane_24_in_off_chip1, d0);
  set_at<384, 1024, 16>(whole_result, result_24);

  hw_uint<16> lane_25_in_off_chip0;
  set_at<0, 16, 16>(lane_25_in_off_chip0, in_off_chip0.extract<400, 415>());
  hw_uint<16> lane_25_in_off_chip1;
  set_at<0, 16, 16>(lane_25_in_off_chip1, in_off_chip1.extract<400, 415>());
  auto result_25 = interleave(lane_25_in_off_chip0, lane_25_in_off_chip1, d0);
  set_at<400, 1024, 16>(whole_result, result_25);

  hw_uint<16> lane_26_in_off_chip0;
  set_at<0, 16, 16>(lane_26_in_off_chip0, in_off_chip0.extract<416, 431>());
  hw_uint<16> lane_26_in_off_chip1;
  set_at<0, 16, 16>(lane_26_in_off_chip1, in_off_chip1.extract<416, 431>());
  auto result_26 = interleave(lane_26_in_off_chip0, lane_26_in_off_chip1, d0);
  set_at<416, 1024, 16>(whole_result, result_26);

  hw_uint<16> lane_27_in_off_chip0;
  set_at<0, 16, 16>(lane_27_in_off_chip0, in_off_chip0.extract<432, 447>());
  hw_uint<16> lane_27_in_off_chip1;
  set_at<0, 16, 16>(lane_27_in_off_chip1, in_off_chip1.extract<432, 447>());
  auto result_27 = interleave(lane_27_in_off_chip0, lane_27_in_off_chip1, d0);
  set_at<432, 1024, 16>(whole_result, result_27);

  hw_uint<16> lane_28_in_off_chip0;
  set_at<0, 16, 16>(lane_28_in_off_chip0, in_off_chip0.extract<448, 463>());
  hw_uint<16> lane_28_in_off_chip1;
  set_at<0, 16, 16>(lane_28_in_off_chip1, in_off_chip1.extract<448, 463>());
  auto result_28 = interleave(lane_28_in_off_chip0, lane_28_in_off_chip1, d0);
  set_at<448, 1024, 16>(whole_result, result_28);

  hw_uint<16> lane_29_in_off_chip0;
  set_at<0, 16, 16>(lane_29_in_off_chip0, in_off_chip0.extract<464, 479>());
  hw_uint<16> lane_29_in_off_chip1;
  set_at<0, 16, 16>(lane_29_in_off_chip1, in_off_chip1.extract<464, 479>());
  auto result_29 = interleave(lane_29_in_off_chip0, lane_29_in_off_chip1, d0);
  set_at<464, 1024, 16>(whole_result, result_29);

  hw_uint<16> lane_30_in_off_chip0;
  set_at<0, 16, 16>(lane_30_in_off_chip0, in_off_chip0.extract<480, 495>());
  hw_uint<16> lane_30_in_off_chip1;
  set_at<0, 16, 16>(lane_30_in_off_chip1, in_off_chip1.extract<480, 495>());
  auto result_30 = interleave(lane_30_in_off_chip0, lane_30_in_off_chip1, d0);
  set_at<480, 1024, 16>(whole_result, result_30);

  hw_uint<16> lane_31_in_off_chip0;
  set_at<0, 16, 16>(lane_31_in_off_chip0, in_off_chip0.extract<496, 511>());
  hw_uint<16> lane_31_in_off_chip1;
  set_at<0, 16, 16>(lane_31_in_off_chip1, in_off_chip1.extract<496, 511>());
  auto result_31 = interleave(lane_31_in_off_chip0, lane_31_in_off_chip1, d0);
  set_at<496, 1024, 16>(whole_result, result_31);

  hw_uint<16> lane_32_in_off_chip0;
  set_at<0, 16, 16>(lane_32_in_off_chip0, in_off_chip0.extract<512, 527>());
  hw_uint<16> lane_32_in_off_chip1;
  set_at<0, 16, 16>(lane_32_in_off_chip1, in_off_chip1.extract<512, 527>());
  auto result_32 = interleave(lane_32_in_off_chip0, lane_32_in_off_chip1, d0);
  set_at<512, 1024, 16>(whole_result, result_32);

  hw_uint<16> lane_33_in_off_chip0;
  set_at<0, 16, 16>(lane_33_in_off_chip0, in_off_chip0.extract<528, 543>());
  hw_uint<16> lane_33_in_off_chip1;
  set_at<0, 16, 16>(lane_33_in_off_chip1, in_off_chip1.extract<528, 543>());
  auto result_33 = interleave(lane_33_in_off_chip0, lane_33_in_off_chip1, d0);
  set_at<528, 1024, 16>(whole_result, result_33);

  hw_uint<16> lane_34_in_off_chip0;
  set_at<0, 16, 16>(lane_34_in_off_chip0, in_off_chip0.extract<544, 559>());
  hw_uint<16> lane_34_in_off_chip1;
  set_at<0, 16, 16>(lane_34_in_off_chip1, in_off_chip1.extract<544, 559>());
  auto result_34 = interleave(lane_34_in_off_chip0, lane_34_in_off_chip1, d0);
  set_at<544, 1024, 16>(whole_result, result_34);

  hw_uint<16> lane_35_in_off_chip0;
  set_at<0, 16, 16>(lane_35_in_off_chip0, in_off_chip0.extract<560, 575>());
  hw_uint<16> lane_35_in_off_chip1;
  set_at<0, 16, 16>(lane_35_in_off_chip1, in_off_chip1.extract<560, 575>());
  auto result_35 = interleave(lane_35_in_off_chip0, lane_35_in_off_chip1, d0);
  set_at<560, 1024, 16>(whole_result, result_35);

  hw_uint<16> lane_36_in_off_chip0;
  set_at<0, 16, 16>(lane_36_in_off_chip0, in_off_chip0.extract<576, 591>());
  hw_uint<16> lane_36_in_off_chip1;
  set_at<0, 16, 16>(lane_36_in_off_chip1, in_off_chip1.extract<576, 591>());
  auto result_36 = interleave(lane_36_in_off_chip0, lane_36_in_off_chip1, d0);
  set_at<576, 1024, 16>(whole_result, result_36);

  hw_uint<16> lane_37_in_off_chip0;
  set_at<0, 16, 16>(lane_37_in_off_chip0, in_off_chip0.extract<592, 607>());
  hw_uint<16> lane_37_in_off_chip1;
  set_at<0, 16, 16>(lane_37_in_off_chip1, in_off_chip1.extract<592, 607>());
  auto result_37 = interleave(lane_37_in_off_chip0, lane_37_in_off_chip1, d0);
  set_at<592, 1024, 16>(whole_result, result_37);

  hw_uint<16> lane_38_in_off_chip0;
  set_at<0, 16, 16>(lane_38_in_off_chip0, in_off_chip0.extract<608, 623>());
  hw_uint<16> lane_38_in_off_chip1;
  set_at<0, 16, 16>(lane_38_in_off_chip1, in_off_chip1.extract<608, 623>());
  auto result_38 = interleave(lane_38_in_off_chip0, lane_38_in_off_chip1, d0);
  set_at<608, 1024, 16>(whole_result, result_38);

  hw_uint<16> lane_39_in_off_chip0;
  set_at<0, 16, 16>(lane_39_in_off_chip0, in_off_chip0.extract<624, 639>());
  hw_uint<16> lane_39_in_off_chip1;
  set_at<0, 16, 16>(lane_39_in_off_chip1, in_off_chip1.extract<624, 639>());
  auto result_39 = interleave(lane_39_in_off_chip0, lane_39_in_off_chip1, d0);
  set_at<624, 1024, 16>(whole_result, result_39);

  hw_uint<16> lane_40_in_off_chip0;
  set_at<0, 16, 16>(lane_40_in_off_chip0, in_off_chip0.extract<640, 655>());
  hw_uint<16> lane_40_in_off_chip1;
  set_at<0, 16, 16>(lane_40_in_off_chip1, in_off_chip1.extract<640, 655>());
  auto result_40 = interleave(lane_40_in_off_chip0, lane_40_in_off_chip1, d0);
  set_at<640, 1024, 16>(whole_result, result_40);

  hw_uint<16> lane_41_in_off_chip0;
  set_at<0, 16, 16>(lane_41_in_off_chip0, in_off_chip0.extract<656, 671>());
  hw_uint<16> lane_41_in_off_chip1;
  set_at<0, 16, 16>(lane_41_in_off_chip1, in_off_chip1.extract<656, 671>());
  auto result_41 = interleave(lane_41_in_off_chip0, lane_41_in_off_chip1, d0);
  set_at<656, 1024, 16>(whole_result, result_41);

  hw_uint<16> lane_42_in_off_chip0;
  set_at<0, 16, 16>(lane_42_in_off_chip0, in_off_chip0.extract<672, 687>());
  hw_uint<16> lane_42_in_off_chip1;
  set_at<0, 16, 16>(lane_42_in_off_chip1, in_off_chip1.extract<672, 687>());
  auto result_42 = interleave(lane_42_in_off_chip0, lane_42_in_off_chip1, d0);
  set_at<672, 1024, 16>(whole_result, result_42);

  hw_uint<16> lane_43_in_off_chip0;
  set_at<0, 16, 16>(lane_43_in_off_chip0, in_off_chip0.extract<688, 703>());
  hw_uint<16> lane_43_in_off_chip1;
  set_at<0, 16, 16>(lane_43_in_off_chip1, in_off_chip1.extract<688, 703>());
  auto result_43 = interleave(lane_43_in_off_chip0, lane_43_in_off_chip1, d0);
  set_at<688, 1024, 16>(whole_result, result_43);

  hw_uint<16> lane_44_in_off_chip0;
  set_at<0, 16, 16>(lane_44_in_off_chip0, in_off_chip0.extract<704, 719>());
  hw_uint<16> lane_44_in_off_chip1;
  set_at<0, 16, 16>(lane_44_in_off_chip1, in_off_chip1.extract<704, 719>());
  auto result_44 = interleave(lane_44_in_off_chip0, lane_44_in_off_chip1, d0);
  set_at<704, 1024, 16>(whole_result, result_44);

  hw_uint<16> lane_45_in_off_chip0;
  set_at<0, 16, 16>(lane_45_in_off_chip0, in_off_chip0.extract<720, 735>());
  hw_uint<16> lane_45_in_off_chip1;
  set_at<0, 16, 16>(lane_45_in_off_chip1, in_off_chip1.extract<720, 735>());
  auto result_45 = interleave(lane_45_in_off_chip0, lane_45_in_off_chip1, d0);
  set_at<720, 1024, 16>(whole_result, result_45);

  hw_uint<16> lane_46_in_off_chip0;
  set_at<0, 16, 16>(lane_46_in_off_chip0, in_off_chip0.extract<736, 751>());
  hw_uint<16> lane_46_in_off_chip1;
  set_at<0, 16, 16>(lane_46_in_off_chip1, in_off_chip1.extract<736, 751>());
  auto result_46 = interleave(lane_46_in_off_chip0, lane_46_in_off_chip1, d0);
  set_at<736, 1024, 16>(whole_result, result_46);

  hw_uint<16> lane_47_in_off_chip0;
  set_at<0, 16, 16>(lane_47_in_off_chip0, in_off_chip0.extract<752, 767>());
  hw_uint<16> lane_47_in_off_chip1;
  set_at<0, 16, 16>(lane_47_in_off_chip1, in_off_chip1.extract<752, 767>());
  auto result_47 = interleave(lane_47_in_off_chip0, lane_47_in_off_chip1, d0);
  set_at<752, 1024, 16>(whole_result, result_47);

  hw_uint<16> lane_48_in_off_chip0;
  set_at<0, 16, 16>(lane_48_in_off_chip0, in_off_chip0.extract<768, 783>());
  hw_uint<16> lane_48_in_off_chip1;
  set_at<0, 16, 16>(lane_48_in_off_chip1, in_off_chip1.extract<768, 783>());
  auto result_48 = interleave(lane_48_in_off_chip0, lane_48_in_off_chip1, d0);
  set_at<768, 1024, 16>(whole_result, result_48);

  hw_uint<16> lane_49_in_off_chip0;
  set_at<0, 16, 16>(lane_49_in_off_chip0, in_off_chip0.extract<784, 799>());
  hw_uint<16> lane_49_in_off_chip1;
  set_at<0, 16, 16>(lane_49_in_off_chip1, in_off_chip1.extract<784, 799>());
  auto result_49 = interleave(lane_49_in_off_chip0, lane_49_in_off_chip1, d0);
  set_at<784, 1024, 16>(whole_result, result_49);

  hw_uint<16> lane_50_in_off_chip0;
  set_at<0, 16, 16>(lane_50_in_off_chip0, in_off_chip0.extract<800, 815>());
  hw_uint<16> lane_50_in_off_chip1;
  set_at<0, 16, 16>(lane_50_in_off_chip1, in_off_chip1.extract<800, 815>());
  auto result_50 = interleave(lane_50_in_off_chip0, lane_50_in_off_chip1, d0);
  set_at<800, 1024, 16>(whole_result, result_50);

  hw_uint<16> lane_51_in_off_chip0;
  set_at<0, 16, 16>(lane_51_in_off_chip0, in_off_chip0.extract<816, 831>());
  hw_uint<16> lane_51_in_off_chip1;
  set_at<0, 16, 16>(lane_51_in_off_chip1, in_off_chip1.extract<816, 831>());
  auto result_51 = interleave(lane_51_in_off_chip0, lane_51_in_off_chip1, d0);
  set_at<816, 1024, 16>(whole_result, result_51);

  hw_uint<16> lane_52_in_off_chip0;
  set_at<0, 16, 16>(lane_52_in_off_chip0, in_off_chip0.extract<832, 847>());
  hw_uint<16> lane_52_in_off_chip1;
  set_at<0, 16, 16>(lane_52_in_off_chip1, in_off_chip1.extract<832, 847>());
  auto result_52 = interleave(lane_52_in_off_chip0, lane_52_in_off_chip1, d0);
  set_at<832, 1024, 16>(whole_result, result_52);

  hw_uint<16> lane_53_in_off_chip0;
  set_at<0, 16, 16>(lane_53_in_off_chip0, in_off_chip0.extract<848, 863>());
  hw_uint<16> lane_53_in_off_chip1;
  set_at<0, 16, 16>(lane_53_in_off_chip1, in_off_chip1.extract<848, 863>());
  auto result_53 = interleave(lane_53_in_off_chip0, lane_53_in_off_chip1, d0);
  set_at<848, 1024, 16>(whole_result, result_53);

  hw_uint<16> lane_54_in_off_chip0;
  set_at<0, 16, 16>(lane_54_in_off_chip0, in_off_chip0.extract<864, 879>());
  hw_uint<16> lane_54_in_off_chip1;
  set_at<0, 16, 16>(lane_54_in_off_chip1, in_off_chip1.extract<864, 879>());
  auto result_54 = interleave(lane_54_in_off_chip0, lane_54_in_off_chip1, d0);
  set_at<864, 1024, 16>(whole_result, result_54);

  hw_uint<16> lane_55_in_off_chip0;
  set_at<0, 16, 16>(lane_55_in_off_chip0, in_off_chip0.extract<880, 895>());
  hw_uint<16> lane_55_in_off_chip1;
  set_at<0, 16, 16>(lane_55_in_off_chip1, in_off_chip1.extract<880, 895>());
  auto result_55 = interleave(lane_55_in_off_chip0, lane_55_in_off_chip1, d0);
  set_at<880, 1024, 16>(whole_result, result_55);

  hw_uint<16> lane_56_in_off_chip0;
  set_at<0, 16, 16>(lane_56_in_off_chip0, in_off_chip0.extract<896, 911>());
  hw_uint<16> lane_56_in_off_chip1;
  set_at<0, 16, 16>(lane_56_in_off_chip1, in_off_chip1.extract<896, 911>());
  auto result_56 = interleave(lane_56_in_off_chip0, lane_56_in_off_chip1, d0);
  set_at<896, 1024, 16>(whole_result, result_56);

  hw_uint<16> lane_57_in_off_chip0;
  set_at<0, 16, 16>(lane_57_in_off_chip0, in_off_chip0.extract<912, 927>());
  hw_uint<16> lane_57_in_off_chip1;
  set_at<0, 16, 16>(lane_57_in_off_chip1, in_off_chip1.extract<912, 927>());
  auto result_57 = interleave(lane_57_in_off_chip0, lane_57_in_off_chip1, d0);
  set_at<912, 1024, 16>(whole_result, result_57);

  hw_uint<16> lane_58_in_off_chip0;
  set_at<0, 16, 16>(lane_58_in_off_chip0, in_off_chip0.extract<928, 943>());
  hw_uint<16> lane_58_in_off_chip1;
  set_at<0, 16, 16>(lane_58_in_off_chip1, in_off_chip1.extract<928, 943>());
  auto result_58 = interleave(lane_58_in_off_chip0, lane_58_in_off_chip1, d0);
  set_at<928, 1024, 16>(whole_result, result_58);

  hw_uint<16> lane_59_in_off_chip0;
  set_at<0, 16, 16>(lane_59_in_off_chip0, in_off_chip0.extract<944, 959>());
  hw_uint<16> lane_59_in_off_chip1;
  set_at<0, 16, 16>(lane_59_in_off_chip1, in_off_chip1.extract<944, 959>());
  auto result_59 = interleave(lane_59_in_off_chip0, lane_59_in_off_chip1, d0);
  set_at<944, 1024, 16>(whole_result, result_59);

  hw_uint<16> lane_60_in_off_chip0;
  set_at<0, 16, 16>(lane_60_in_off_chip0, in_off_chip0.extract<960, 975>());
  hw_uint<16> lane_60_in_off_chip1;
  set_at<0, 16, 16>(lane_60_in_off_chip1, in_off_chip1.extract<960, 975>());
  auto result_60 = interleave(lane_60_in_off_chip0, lane_60_in_off_chip1, d0);
  set_at<960, 1024, 16>(whole_result, result_60);

  hw_uint<16> lane_61_in_off_chip0;
  set_at<0, 16, 16>(lane_61_in_off_chip0, in_off_chip0.extract<976, 991>());
  hw_uint<16> lane_61_in_off_chip1;
  set_at<0, 16, 16>(lane_61_in_off_chip1, in_off_chip1.extract<976, 991>());
  auto result_61 = interleave(lane_61_in_off_chip0, lane_61_in_off_chip1, d0);
  set_at<976, 1024, 16>(whole_result, result_61);

  hw_uint<16> lane_62_in_off_chip0;
  set_at<0, 16, 16>(lane_62_in_off_chip0, in_off_chip0.extract<992, 1007>());
  hw_uint<16> lane_62_in_off_chip1;
  set_at<0, 16, 16>(lane_62_in_off_chip1, in_off_chip1.extract<992, 1007>());
  auto result_62 = interleave(lane_62_in_off_chip0, lane_62_in_off_chip1, d0);
  set_at<992, 1024, 16>(whole_result, result_62);

  hw_uint<16> lane_63_in_off_chip0;
  set_at<0, 16, 16>(lane_63_in_off_chip0, in_off_chip0.extract<1008, 1023>());
  hw_uint<16> lane_63_in_off_chip1;
  set_at<0, 16, 16>(lane_63_in_off_chip1, in_off_chip1.extract<1008, 1023>());
  auto result_63 = interleave(lane_63_in_off_chip0, lane_63_in_off_chip1, d0);
  set_at<1008, 1024, 16>(whole_result, result_63);
  return whole_result;
}

  // af32_update_0 unroll factor: 64
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

