#pragma once

#include "conv_3x3.h"

// Generated compute units...


// Compute unit banks...
  // in1_update_0 unroll factor: 32
hw_uint<512>  id_unrolled_32(hw_uint<512>& in1_oc) {
  hw_uint<512> whole_result;

  hw_uint<16> lane_0_in1_oc;
  set_at<0, 16, 16>(lane_0_in1_oc, in1_oc.extract<0, 15>());
  auto result_0 = id(lane_0_in1_oc);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<16> lane_1_in1_oc;
  set_at<0, 16, 16>(lane_1_in1_oc, in1_oc.extract<16, 31>());
  auto result_1 = id(lane_1_in1_oc);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<16> lane_2_in1_oc;
  set_at<0, 16, 16>(lane_2_in1_oc, in1_oc.extract<32, 47>());
  auto result_2 = id(lane_2_in1_oc);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<16> lane_3_in1_oc;
  set_at<0, 16, 16>(lane_3_in1_oc, in1_oc.extract<48, 63>());
  auto result_3 = id(lane_3_in1_oc);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<16> lane_4_in1_oc;
  set_at<0, 16, 16>(lane_4_in1_oc, in1_oc.extract<64, 79>());
  auto result_4 = id(lane_4_in1_oc);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<16> lane_5_in1_oc;
  set_at<0, 16, 16>(lane_5_in1_oc, in1_oc.extract<80, 95>());
  auto result_5 = id(lane_5_in1_oc);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<16> lane_6_in1_oc;
  set_at<0, 16, 16>(lane_6_in1_oc, in1_oc.extract<96, 111>());
  auto result_6 = id(lane_6_in1_oc);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<16> lane_7_in1_oc;
  set_at<0, 16, 16>(lane_7_in1_oc, in1_oc.extract<112, 127>());
  auto result_7 = id(lane_7_in1_oc);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<16> lane_8_in1_oc;
  set_at<0, 16, 16>(lane_8_in1_oc, in1_oc.extract<128, 143>());
  auto result_8 = id(lane_8_in1_oc);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<16> lane_9_in1_oc;
  set_at<0, 16, 16>(lane_9_in1_oc, in1_oc.extract<144, 159>());
  auto result_9 = id(lane_9_in1_oc);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<16> lane_10_in1_oc;
  set_at<0, 16, 16>(lane_10_in1_oc, in1_oc.extract<160, 175>());
  auto result_10 = id(lane_10_in1_oc);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<16> lane_11_in1_oc;
  set_at<0, 16, 16>(lane_11_in1_oc, in1_oc.extract<176, 191>());
  auto result_11 = id(lane_11_in1_oc);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<16> lane_12_in1_oc;
  set_at<0, 16, 16>(lane_12_in1_oc, in1_oc.extract<192, 207>());
  auto result_12 = id(lane_12_in1_oc);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<16> lane_13_in1_oc;
  set_at<0, 16, 16>(lane_13_in1_oc, in1_oc.extract<208, 223>());
  auto result_13 = id(lane_13_in1_oc);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<16> lane_14_in1_oc;
  set_at<0, 16, 16>(lane_14_in1_oc, in1_oc.extract<224, 239>());
  auto result_14 = id(lane_14_in1_oc);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<16> lane_15_in1_oc;
  set_at<0, 16, 16>(lane_15_in1_oc, in1_oc.extract<240, 255>());
  auto result_15 = id(lane_15_in1_oc);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<16> lane_16_in1_oc;
  set_at<0, 16, 16>(lane_16_in1_oc, in1_oc.extract<256, 271>());
  auto result_16 = id(lane_16_in1_oc);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<16> lane_17_in1_oc;
  set_at<0, 16, 16>(lane_17_in1_oc, in1_oc.extract<272, 287>());
  auto result_17 = id(lane_17_in1_oc);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<16> lane_18_in1_oc;
  set_at<0, 16, 16>(lane_18_in1_oc, in1_oc.extract<288, 303>());
  auto result_18 = id(lane_18_in1_oc);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<16> lane_19_in1_oc;
  set_at<0, 16, 16>(lane_19_in1_oc, in1_oc.extract<304, 319>());
  auto result_19 = id(lane_19_in1_oc);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<16> lane_20_in1_oc;
  set_at<0, 16, 16>(lane_20_in1_oc, in1_oc.extract<320, 335>());
  auto result_20 = id(lane_20_in1_oc);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<16> lane_21_in1_oc;
  set_at<0, 16, 16>(lane_21_in1_oc, in1_oc.extract<336, 351>());
  auto result_21 = id(lane_21_in1_oc);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<16> lane_22_in1_oc;
  set_at<0, 16, 16>(lane_22_in1_oc, in1_oc.extract<352, 367>());
  auto result_22 = id(lane_22_in1_oc);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<16> lane_23_in1_oc;
  set_at<0, 16, 16>(lane_23_in1_oc, in1_oc.extract<368, 383>());
  auto result_23 = id(lane_23_in1_oc);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<16> lane_24_in1_oc;
  set_at<0, 16, 16>(lane_24_in1_oc, in1_oc.extract<384, 399>());
  auto result_24 = id(lane_24_in1_oc);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<16> lane_25_in1_oc;
  set_at<0, 16, 16>(lane_25_in1_oc, in1_oc.extract<400, 415>());
  auto result_25 = id(lane_25_in1_oc);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<16> lane_26_in1_oc;
  set_at<0, 16, 16>(lane_26_in1_oc, in1_oc.extract<416, 431>());
  auto result_26 = id(lane_26_in1_oc);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<16> lane_27_in1_oc;
  set_at<0, 16, 16>(lane_27_in1_oc, in1_oc.extract<432, 447>());
  auto result_27 = id(lane_27_in1_oc);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<16> lane_28_in1_oc;
  set_at<0, 16, 16>(lane_28_in1_oc, in1_oc.extract<448, 463>());
  auto result_28 = id(lane_28_in1_oc);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<16> lane_29_in1_oc;
  set_at<0, 16, 16>(lane_29_in1_oc, in1_oc.extract<464, 479>());
  auto result_29 = id(lane_29_in1_oc);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<16> lane_30_in1_oc;
  set_at<0, 16, 16>(lane_30_in1_oc, in1_oc.extract<480, 495>());
  auto result_30 = id(lane_30_in1_oc);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<16> lane_31_in1_oc;
  set_at<0, 16, 16>(lane_31_in1_oc, in1_oc.extract<496, 511>());
  auto result_31 = id(lane_31_in1_oc);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // average_update_0 unroll factor: 32
hw_uint<512>  add_unrolled_32(hw_uint<512>& in0, hw_uint<512>& in1) {
  hw_uint<512> whole_result;

  hw_uint<16> lane_0_in0;
  set_at<0, 16, 16>(lane_0_in0, in0.extract<0, 15>());
  hw_uint<16> lane_0_in1;
  set_at<0, 16, 16>(lane_0_in1, in1.extract<0, 15>());
  auto result_0 = add(lane_0_in0, lane_0_in1);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<16> lane_1_in0;
  set_at<0, 16, 16>(lane_1_in0, in0.extract<16, 31>());
  hw_uint<16> lane_1_in1;
  set_at<0, 16, 16>(lane_1_in1, in1.extract<16, 31>());
  auto result_1 = add(lane_1_in0, lane_1_in1);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<16> lane_2_in0;
  set_at<0, 16, 16>(lane_2_in0, in0.extract<32, 47>());
  hw_uint<16> lane_2_in1;
  set_at<0, 16, 16>(lane_2_in1, in1.extract<32, 47>());
  auto result_2 = add(lane_2_in0, lane_2_in1);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<16> lane_3_in0;
  set_at<0, 16, 16>(lane_3_in0, in0.extract<48, 63>());
  hw_uint<16> lane_3_in1;
  set_at<0, 16, 16>(lane_3_in1, in1.extract<48, 63>());
  auto result_3 = add(lane_3_in0, lane_3_in1);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<16> lane_4_in0;
  set_at<0, 16, 16>(lane_4_in0, in0.extract<64, 79>());
  hw_uint<16> lane_4_in1;
  set_at<0, 16, 16>(lane_4_in1, in1.extract<64, 79>());
  auto result_4 = add(lane_4_in0, lane_4_in1);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<16> lane_5_in0;
  set_at<0, 16, 16>(lane_5_in0, in0.extract<80, 95>());
  hw_uint<16> lane_5_in1;
  set_at<0, 16, 16>(lane_5_in1, in1.extract<80, 95>());
  auto result_5 = add(lane_5_in0, lane_5_in1);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<16> lane_6_in0;
  set_at<0, 16, 16>(lane_6_in0, in0.extract<96, 111>());
  hw_uint<16> lane_6_in1;
  set_at<0, 16, 16>(lane_6_in1, in1.extract<96, 111>());
  auto result_6 = add(lane_6_in0, lane_6_in1);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<16> lane_7_in0;
  set_at<0, 16, 16>(lane_7_in0, in0.extract<112, 127>());
  hw_uint<16> lane_7_in1;
  set_at<0, 16, 16>(lane_7_in1, in1.extract<112, 127>());
  auto result_7 = add(lane_7_in0, lane_7_in1);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<16> lane_8_in0;
  set_at<0, 16, 16>(lane_8_in0, in0.extract<128, 143>());
  hw_uint<16> lane_8_in1;
  set_at<0, 16, 16>(lane_8_in1, in1.extract<128, 143>());
  auto result_8 = add(lane_8_in0, lane_8_in1);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<16> lane_9_in0;
  set_at<0, 16, 16>(lane_9_in0, in0.extract<144, 159>());
  hw_uint<16> lane_9_in1;
  set_at<0, 16, 16>(lane_9_in1, in1.extract<144, 159>());
  auto result_9 = add(lane_9_in0, lane_9_in1);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<16> lane_10_in0;
  set_at<0, 16, 16>(lane_10_in0, in0.extract<160, 175>());
  hw_uint<16> lane_10_in1;
  set_at<0, 16, 16>(lane_10_in1, in1.extract<160, 175>());
  auto result_10 = add(lane_10_in0, lane_10_in1);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<16> lane_11_in0;
  set_at<0, 16, 16>(lane_11_in0, in0.extract<176, 191>());
  hw_uint<16> lane_11_in1;
  set_at<0, 16, 16>(lane_11_in1, in1.extract<176, 191>());
  auto result_11 = add(lane_11_in0, lane_11_in1);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<16> lane_12_in0;
  set_at<0, 16, 16>(lane_12_in0, in0.extract<192, 207>());
  hw_uint<16> lane_12_in1;
  set_at<0, 16, 16>(lane_12_in1, in1.extract<192, 207>());
  auto result_12 = add(lane_12_in0, lane_12_in1);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<16> lane_13_in0;
  set_at<0, 16, 16>(lane_13_in0, in0.extract<208, 223>());
  hw_uint<16> lane_13_in1;
  set_at<0, 16, 16>(lane_13_in1, in1.extract<208, 223>());
  auto result_13 = add(lane_13_in0, lane_13_in1);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<16> lane_14_in0;
  set_at<0, 16, 16>(lane_14_in0, in0.extract<224, 239>());
  hw_uint<16> lane_14_in1;
  set_at<0, 16, 16>(lane_14_in1, in1.extract<224, 239>());
  auto result_14 = add(lane_14_in0, lane_14_in1);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<16> lane_15_in0;
  set_at<0, 16, 16>(lane_15_in0, in0.extract<240, 255>());
  hw_uint<16> lane_15_in1;
  set_at<0, 16, 16>(lane_15_in1, in1.extract<240, 255>());
  auto result_15 = add(lane_15_in0, lane_15_in1);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<16> lane_16_in0;
  set_at<0, 16, 16>(lane_16_in0, in0.extract<256, 271>());
  hw_uint<16> lane_16_in1;
  set_at<0, 16, 16>(lane_16_in1, in1.extract<256, 271>());
  auto result_16 = add(lane_16_in0, lane_16_in1);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<16> lane_17_in0;
  set_at<0, 16, 16>(lane_17_in0, in0.extract<272, 287>());
  hw_uint<16> lane_17_in1;
  set_at<0, 16, 16>(lane_17_in1, in1.extract<272, 287>());
  auto result_17 = add(lane_17_in0, lane_17_in1);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<16> lane_18_in0;
  set_at<0, 16, 16>(lane_18_in0, in0.extract<288, 303>());
  hw_uint<16> lane_18_in1;
  set_at<0, 16, 16>(lane_18_in1, in1.extract<288, 303>());
  auto result_18 = add(lane_18_in0, lane_18_in1);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<16> lane_19_in0;
  set_at<0, 16, 16>(lane_19_in0, in0.extract<304, 319>());
  hw_uint<16> lane_19_in1;
  set_at<0, 16, 16>(lane_19_in1, in1.extract<304, 319>());
  auto result_19 = add(lane_19_in0, lane_19_in1);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<16> lane_20_in0;
  set_at<0, 16, 16>(lane_20_in0, in0.extract<320, 335>());
  hw_uint<16> lane_20_in1;
  set_at<0, 16, 16>(lane_20_in1, in1.extract<320, 335>());
  auto result_20 = add(lane_20_in0, lane_20_in1);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<16> lane_21_in0;
  set_at<0, 16, 16>(lane_21_in0, in0.extract<336, 351>());
  hw_uint<16> lane_21_in1;
  set_at<0, 16, 16>(lane_21_in1, in1.extract<336, 351>());
  auto result_21 = add(lane_21_in0, lane_21_in1);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<16> lane_22_in0;
  set_at<0, 16, 16>(lane_22_in0, in0.extract<352, 367>());
  hw_uint<16> lane_22_in1;
  set_at<0, 16, 16>(lane_22_in1, in1.extract<352, 367>());
  auto result_22 = add(lane_22_in0, lane_22_in1);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<16> lane_23_in0;
  set_at<0, 16, 16>(lane_23_in0, in0.extract<368, 383>());
  hw_uint<16> lane_23_in1;
  set_at<0, 16, 16>(lane_23_in1, in1.extract<368, 383>());
  auto result_23 = add(lane_23_in0, lane_23_in1);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<16> lane_24_in0;
  set_at<0, 16, 16>(lane_24_in0, in0.extract<384, 399>());
  hw_uint<16> lane_24_in1;
  set_at<0, 16, 16>(lane_24_in1, in1.extract<384, 399>());
  auto result_24 = add(lane_24_in0, lane_24_in1);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<16> lane_25_in0;
  set_at<0, 16, 16>(lane_25_in0, in0.extract<400, 415>());
  hw_uint<16> lane_25_in1;
  set_at<0, 16, 16>(lane_25_in1, in1.extract<400, 415>());
  auto result_25 = add(lane_25_in0, lane_25_in1);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<16> lane_26_in0;
  set_at<0, 16, 16>(lane_26_in0, in0.extract<416, 431>());
  hw_uint<16> lane_26_in1;
  set_at<0, 16, 16>(lane_26_in1, in1.extract<416, 431>());
  auto result_26 = add(lane_26_in0, lane_26_in1);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<16> lane_27_in0;
  set_at<0, 16, 16>(lane_27_in0, in0.extract<432, 447>());
  hw_uint<16> lane_27_in1;
  set_at<0, 16, 16>(lane_27_in1, in1.extract<432, 447>());
  auto result_27 = add(lane_27_in0, lane_27_in1);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<16> lane_28_in0;
  set_at<0, 16, 16>(lane_28_in0, in0.extract<448, 463>());
  hw_uint<16> lane_28_in1;
  set_at<0, 16, 16>(lane_28_in1, in1.extract<448, 463>());
  auto result_28 = add(lane_28_in0, lane_28_in1);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<16> lane_29_in0;
  set_at<0, 16, 16>(lane_29_in0, in0.extract<464, 479>());
  hw_uint<16> lane_29_in1;
  set_at<0, 16, 16>(lane_29_in1, in1.extract<464, 479>());
  auto result_29 = add(lane_29_in0, lane_29_in1);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<16> lane_30_in0;
  set_at<0, 16, 16>(lane_30_in0, in0.extract<480, 495>());
  hw_uint<16> lane_30_in1;
  set_at<0, 16, 16>(lane_30_in1, in1.extract<480, 495>());
  auto result_30 = add(lane_30_in0, lane_30_in1);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<16> lane_31_in0;
  set_at<0, 16, 16>(lane_31_in0, in0.extract<496, 511>());
  hw_uint<16> lane_31_in1;
  set_at<0, 16, 16>(lane_31_in1, in1.extract<496, 511>());
  auto result_31 = add(lane_31_in0, lane_31_in1);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

