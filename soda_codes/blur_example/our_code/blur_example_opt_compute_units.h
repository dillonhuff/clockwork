#pragma once

#include "conv_3x3.h"

// Generated compute units...


// Compute unit banks...
  // in1_update_0 unroll factor: 32
hw_uint<1024>  id_unrolled_32(hw_uint<1024>& in1_oc) {
  hw_uint<1024> whole_result;

  hw_uint<32> lane_0_in1_oc;
  set_at<0, 32, 32>(lane_0_in1_oc, in1_oc.extract<0, 31>());
  auto result_0 = id(lane_0_in1_oc);
  set_at<0, 1024, 32>(whole_result, result_0);

  hw_uint<32> lane_1_in1_oc;
  set_at<0, 32, 32>(lane_1_in1_oc, in1_oc.extract<32, 63>());
  auto result_1 = id(lane_1_in1_oc);
  set_at<32, 1024, 32>(whole_result, result_1);

  hw_uint<32> lane_2_in1_oc;
  set_at<0, 32, 32>(lane_2_in1_oc, in1_oc.extract<64, 95>());
  auto result_2 = id(lane_2_in1_oc);
  set_at<64, 1024, 32>(whole_result, result_2);

  hw_uint<32> lane_3_in1_oc;
  set_at<0, 32, 32>(lane_3_in1_oc, in1_oc.extract<96, 127>());
  auto result_3 = id(lane_3_in1_oc);
  set_at<96, 1024, 32>(whole_result, result_3);

  hw_uint<32> lane_4_in1_oc;
  set_at<0, 32, 32>(lane_4_in1_oc, in1_oc.extract<128, 159>());
  auto result_4 = id(lane_4_in1_oc);
  set_at<128, 1024, 32>(whole_result, result_4);

  hw_uint<32> lane_5_in1_oc;
  set_at<0, 32, 32>(lane_5_in1_oc, in1_oc.extract<160, 191>());
  auto result_5 = id(lane_5_in1_oc);
  set_at<160, 1024, 32>(whole_result, result_5);

  hw_uint<32> lane_6_in1_oc;
  set_at<0, 32, 32>(lane_6_in1_oc, in1_oc.extract<192, 223>());
  auto result_6 = id(lane_6_in1_oc);
  set_at<192, 1024, 32>(whole_result, result_6);

  hw_uint<32> lane_7_in1_oc;
  set_at<0, 32, 32>(lane_7_in1_oc, in1_oc.extract<224, 255>());
  auto result_7 = id(lane_7_in1_oc);
  set_at<224, 1024, 32>(whole_result, result_7);

  hw_uint<32> lane_8_in1_oc;
  set_at<0, 32, 32>(lane_8_in1_oc, in1_oc.extract<256, 287>());
  auto result_8 = id(lane_8_in1_oc);
  set_at<256, 1024, 32>(whole_result, result_8);

  hw_uint<32> lane_9_in1_oc;
  set_at<0, 32, 32>(lane_9_in1_oc, in1_oc.extract<288, 319>());
  auto result_9 = id(lane_9_in1_oc);
  set_at<288, 1024, 32>(whole_result, result_9);

  hw_uint<32> lane_10_in1_oc;
  set_at<0, 32, 32>(lane_10_in1_oc, in1_oc.extract<320, 351>());
  auto result_10 = id(lane_10_in1_oc);
  set_at<320, 1024, 32>(whole_result, result_10);

  hw_uint<32> lane_11_in1_oc;
  set_at<0, 32, 32>(lane_11_in1_oc, in1_oc.extract<352, 383>());
  auto result_11 = id(lane_11_in1_oc);
  set_at<352, 1024, 32>(whole_result, result_11);

  hw_uint<32> lane_12_in1_oc;
  set_at<0, 32, 32>(lane_12_in1_oc, in1_oc.extract<384, 415>());
  auto result_12 = id(lane_12_in1_oc);
  set_at<384, 1024, 32>(whole_result, result_12);

  hw_uint<32> lane_13_in1_oc;
  set_at<0, 32, 32>(lane_13_in1_oc, in1_oc.extract<416, 447>());
  auto result_13 = id(lane_13_in1_oc);
  set_at<416, 1024, 32>(whole_result, result_13);

  hw_uint<32> lane_14_in1_oc;
  set_at<0, 32, 32>(lane_14_in1_oc, in1_oc.extract<448, 479>());
  auto result_14 = id(lane_14_in1_oc);
  set_at<448, 1024, 32>(whole_result, result_14);

  hw_uint<32> lane_15_in1_oc;
  set_at<0, 32, 32>(lane_15_in1_oc, in1_oc.extract<480, 511>());
  auto result_15 = id(lane_15_in1_oc);
  set_at<480, 1024, 32>(whole_result, result_15);

  hw_uint<32> lane_16_in1_oc;
  set_at<0, 32, 32>(lane_16_in1_oc, in1_oc.extract<512, 543>());
  auto result_16 = id(lane_16_in1_oc);
  set_at<512, 1024, 32>(whole_result, result_16);

  hw_uint<32> lane_17_in1_oc;
  set_at<0, 32, 32>(lane_17_in1_oc, in1_oc.extract<544, 575>());
  auto result_17 = id(lane_17_in1_oc);
  set_at<544, 1024, 32>(whole_result, result_17);

  hw_uint<32> lane_18_in1_oc;
  set_at<0, 32, 32>(lane_18_in1_oc, in1_oc.extract<576, 607>());
  auto result_18 = id(lane_18_in1_oc);
  set_at<576, 1024, 32>(whole_result, result_18);

  hw_uint<32> lane_19_in1_oc;
  set_at<0, 32, 32>(lane_19_in1_oc, in1_oc.extract<608, 639>());
  auto result_19 = id(lane_19_in1_oc);
  set_at<608, 1024, 32>(whole_result, result_19);

  hw_uint<32> lane_20_in1_oc;
  set_at<0, 32, 32>(lane_20_in1_oc, in1_oc.extract<640, 671>());
  auto result_20 = id(lane_20_in1_oc);
  set_at<640, 1024, 32>(whole_result, result_20);

  hw_uint<32> lane_21_in1_oc;
  set_at<0, 32, 32>(lane_21_in1_oc, in1_oc.extract<672, 703>());
  auto result_21 = id(lane_21_in1_oc);
  set_at<672, 1024, 32>(whole_result, result_21);

  hw_uint<32> lane_22_in1_oc;
  set_at<0, 32, 32>(lane_22_in1_oc, in1_oc.extract<704, 735>());
  auto result_22 = id(lane_22_in1_oc);
  set_at<704, 1024, 32>(whole_result, result_22);

  hw_uint<32> lane_23_in1_oc;
  set_at<0, 32, 32>(lane_23_in1_oc, in1_oc.extract<736, 767>());
  auto result_23 = id(lane_23_in1_oc);
  set_at<736, 1024, 32>(whole_result, result_23);

  hw_uint<32> lane_24_in1_oc;
  set_at<0, 32, 32>(lane_24_in1_oc, in1_oc.extract<768, 799>());
  auto result_24 = id(lane_24_in1_oc);
  set_at<768, 1024, 32>(whole_result, result_24);

  hw_uint<32> lane_25_in1_oc;
  set_at<0, 32, 32>(lane_25_in1_oc, in1_oc.extract<800, 831>());
  auto result_25 = id(lane_25_in1_oc);
  set_at<800, 1024, 32>(whole_result, result_25);

  hw_uint<32> lane_26_in1_oc;
  set_at<0, 32, 32>(lane_26_in1_oc, in1_oc.extract<832, 863>());
  auto result_26 = id(lane_26_in1_oc);
  set_at<832, 1024, 32>(whole_result, result_26);

  hw_uint<32> lane_27_in1_oc;
  set_at<0, 32, 32>(lane_27_in1_oc, in1_oc.extract<864, 895>());
  auto result_27 = id(lane_27_in1_oc);
  set_at<864, 1024, 32>(whole_result, result_27);

  hw_uint<32> lane_28_in1_oc;
  set_at<0, 32, 32>(lane_28_in1_oc, in1_oc.extract<896, 927>());
  auto result_28 = id(lane_28_in1_oc);
  set_at<896, 1024, 32>(whole_result, result_28);

  hw_uint<32> lane_29_in1_oc;
  set_at<0, 32, 32>(lane_29_in1_oc, in1_oc.extract<928, 959>());
  auto result_29 = id(lane_29_in1_oc);
  set_at<928, 1024, 32>(whole_result, result_29);

  hw_uint<32> lane_30_in1_oc;
  set_at<0, 32, 32>(lane_30_in1_oc, in1_oc.extract<960, 991>());
  auto result_30 = id(lane_30_in1_oc);
  set_at<960, 1024, 32>(whole_result, result_30);

  hw_uint<32> lane_31_in1_oc;
  set_at<0, 32, 32>(lane_31_in1_oc, in1_oc.extract<992, 1023>());
  auto result_31 = id(lane_31_in1_oc);
  set_at<992, 1024, 32>(whole_result, result_31);
  return whole_result;
}

  // average_update_0 unroll factor: 32
hw_uint<1024>  add_unrolled_32(hw_uint<1024>& in0, hw_uint<1024>& in1) {
  hw_uint<1024> whole_result;

  hw_uint<32> lane_0_in0;
  set_at<0, 32, 32>(lane_0_in0, in0.extract<0, 31>());
  hw_uint<32> lane_0_in1;
  set_at<0, 32, 32>(lane_0_in1, in1.extract<0, 31>());
  auto result_0 = add(lane_0_in0, lane_0_in1);
  set_at<0, 1024, 32>(whole_result, result_0);

  hw_uint<32> lane_1_in0;
  set_at<0, 32, 32>(lane_1_in0, in0.extract<32, 63>());
  hw_uint<32> lane_1_in1;
  set_at<0, 32, 32>(lane_1_in1, in1.extract<32, 63>());
  auto result_1 = add(lane_1_in0, lane_1_in1);
  set_at<32, 1024, 32>(whole_result, result_1);

  hw_uint<32> lane_2_in0;
  set_at<0, 32, 32>(lane_2_in0, in0.extract<64, 95>());
  hw_uint<32> lane_2_in1;
  set_at<0, 32, 32>(lane_2_in1, in1.extract<64, 95>());
  auto result_2 = add(lane_2_in0, lane_2_in1);
  set_at<64, 1024, 32>(whole_result, result_2);

  hw_uint<32> lane_3_in0;
  set_at<0, 32, 32>(lane_3_in0, in0.extract<96, 127>());
  hw_uint<32> lane_3_in1;
  set_at<0, 32, 32>(lane_3_in1, in1.extract<96, 127>());
  auto result_3 = add(lane_3_in0, lane_3_in1);
  set_at<96, 1024, 32>(whole_result, result_3);

  hw_uint<32> lane_4_in0;
  set_at<0, 32, 32>(lane_4_in0, in0.extract<128, 159>());
  hw_uint<32> lane_4_in1;
  set_at<0, 32, 32>(lane_4_in1, in1.extract<128, 159>());
  auto result_4 = add(lane_4_in0, lane_4_in1);
  set_at<128, 1024, 32>(whole_result, result_4);

  hw_uint<32> lane_5_in0;
  set_at<0, 32, 32>(lane_5_in0, in0.extract<160, 191>());
  hw_uint<32> lane_5_in1;
  set_at<0, 32, 32>(lane_5_in1, in1.extract<160, 191>());
  auto result_5 = add(lane_5_in0, lane_5_in1);
  set_at<160, 1024, 32>(whole_result, result_5);

  hw_uint<32> lane_6_in0;
  set_at<0, 32, 32>(lane_6_in0, in0.extract<192, 223>());
  hw_uint<32> lane_6_in1;
  set_at<0, 32, 32>(lane_6_in1, in1.extract<192, 223>());
  auto result_6 = add(lane_6_in0, lane_6_in1);
  set_at<192, 1024, 32>(whole_result, result_6);

  hw_uint<32> lane_7_in0;
  set_at<0, 32, 32>(lane_7_in0, in0.extract<224, 255>());
  hw_uint<32> lane_7_in1;
  set_at<0, 32, 32>(lane_7_in1, in1.extract<224, 255>());
  auto result_7 = add(lane_7_in0, lane_7_in1);
  set_at<224, 1024, 32>(whole_result, result_7);

  hw_uint<32> lane_8_in0;
  set_at<0, 32, 32>(lane_8_in0, in0.extract<256, 287>());
  hw_uint<32> lane_8_in1;
  set_at<0, 32, 32>(lane_8_in1, in1.extract<256, 287>());
  auto result_8 = add(lane_8_in0, lane_8_in1);
  set_at<256, 1024, 32>(whole_result, result_8);

  hw_uint<32> lane_9_in0;
  set_at<0, 32, 32>(lane_9_in0, in0.extract<288, 319>());
  hw_uint<32> lane_9_in1;
  set_at<0, 32, 32>(lane_9_in1, in1.extract<288, 319>());
  auto result_9 = add(lane_9_in0, lane_9_in1);
  set_at<288, 1024, 32>(whole_result, result_9);

  hw_uint<32> lane_10_in0;
  set_at<0, 32, 32>(lane_10_in0, in0.extract<320, 351>());
  hw_uint<32> lane_10_in1;
  set_at<0, 32, 32>(lane_10_in1, in1.extract<320, 351>());
  auto result_10 = add(lane_10_in0, lane_10_in1);
  set_at<320, 1024, 32>(whole_result, result_10);

  hw_uint<32> lane_11_in0;
  set_at<0, 32, 32>(lane_11_in0, in0.extract<352, 383>());
  hw_uint<32> lane_11_in1;
  set_at<0, 32, 32>(lane_11_in1, in1.extract<352, 383>());
  auto result_11 = add(lane_11_in0, lane_11_in1);
  set_at<352, 1024, 32>(whole_result, result_11);

  hw_uint<32> lane_12_in0;
  set_at<0, 32, 32>(lane_12_in0, in0.extract<384, 415>());
  hw_uint<32> lane_12_in1;
  set_at<0, 32, 32>(lane_12_in1, in1.extract<384, 415>());
  auto result_12 = add(lane_12_in0, lane_12_in1);
  set_at<384, 1024, 32>(whole_result, result_12);

  hw_uint<32> lane_13_in0;
  set_at<0, 32, 32>(lane_13_in0, in0.extract<416, 447>());
  hw_uint<32> lane_13_in1;
  set_at<0, 32, 32>(lane_13_in1, in1.extract<416, 447>());
  auto result_13 = add(lane_13_in0, lane_13_in1);
  set_at<416, 1024, 32>(whole_result, result_13);

  hw_uint<32> lane_14_in0;
  set_at<0, 32, 32>(lane_14_in0, in0.extract<448, 479>());
  hw_uint<32> lane_14_in1;
  set_at<0, 32, 32>(lane_14_in1, in1.extract<448, 479>());
  auto result_14 = add(lane_14_in0, lane_14_in1);
  set_at<448, 1024, 32>(whole_result, result_14);

  hw_uint<32> lane_15_in0;
  set_at<0, 32, 32>(lane_15_in0, in0.extract<480, 511>());
  hw_uint<32> lane_15_in1;
  set_at<0, 32, 32>(lane_15_in1, in1.extract<480, 511>());
  auto result_15 = add(lane_15_in0, lane_15_in1);
  set_at<480, 1024, 32>(whole_result, result_15);

  hw_uint<32> lane_16_in0;
  set_at<0, 32, 32>(lane_16_in0, in0.extract<512, 543>());
  hw_uint<32> lane_16_in1;
  set_at<0, 32, 32>(lane_16_in1, in1.extract<512, 543>());
  auto result_16 = add(lane_16_in0, lane_16_in1);
  set_at<512, 1024, 32>(whole_result, result_16);

  hw_uint<32> lane_17_in0;
  set_at<0, 32, 32>(lane_17_in0, in0.extract<544, 575>());
  hw_uint<32> lane_17_in1;
  set_at<0, 32, 32>(lane_17_in1, in1.extract<544, 575>());
  auto result_17 = add(lane_17_in0, lane_17_in1);
  set_at<544, 1024, 32>(whole_result, result_17);

  hw_uint<32> lane_18_in0;
  set_at<0, 32, 32>(lane_18_in0, in0.extract<576, 607>());
  hw_uint<32> lane_18_in1;
  set_at<0, 32, 32>(lane_18_in1, in1.extract<576, 607>());
  auto result_18 = add(lane_18_in0, lane_18_in1);
  set_at<576, 1024, 32>(whole_result, result_18);

  hw_uint<32> lane_19_in0;
  set_at<0, 32, 32>(lane_19_in0, in0.extract<608, 639>());
  hw_uint<32> lane_19_in1;
  set_at<0, 32, 32>(lane_19_in1, in1.extract<608, 639>());
  auto result_19 = add(lane_19_in0, lane_19_in1);
  set_at<608, 1024, 32>(whole_result, result_19);

  hw_uint<32> lane_20_in0;
  set_at<0, 32, 32>(lane_20_in0, in0.extract<640, 671>());
  hw_uint<32> lane_20_in1;
  set_at<0, 32, 32>(lane_20_in1, in1.extract<640, 671>());
  auto result_20 = add(lane_20_in0, lane_20_in1);
  set_at<640, 1024, 32>(whole_result, result_20);

  hw_uint<32> lane_21_in0;
  set_at<0, 32, 32>(lane_21_in0, in0.extract<672, 703>());
  hw_uint<32> lane_21_in1;
  set_at<0, 32, 32>(lane_21_in1, in1.extract<672, 703>());
  auto result_21 = add(lane_21_in0, lane_21_in1);
  set_at<672, 1024, 32>(whole_result, result_21);

  hw_uint<32> lane_22_in0;
  set_at<0, 32, 32>(lane_22_in0, in0.extract<704, 735>());
  hw_uint<32> lane_22_in1;
  set_at<0, 32, 32>(lane_22_in1, in1.extract<704, 735>());
  auto result_22 = add(lane_22_in0, lane_22_in1);
  set_at<704, 1024, 32>(whole_result, result_22);

  hw_uint<32> lane_23_in0;
  set_at<0, 32, 32>(lane_23_in0, in0.extract<736, 767>());
  hw_uint<32> lane_23_in1;
  set_at<0, 32, 32>(lane_23_in1, in1.extract<736, 767>());
  auto result_23 = add(lane_23_in0, lane_23_in1);
  set_at<736, 1024, 32>(whole_result, result_23);

  hw_uint<32> lane_24_in0;
  set_at<0, 32, 32>(lane_24_in0, in0.extract<768, 799>());
  hw_uint<32> lane_24_in1;
  set_at<0, 32, 32>(lane_24_in1, in1.extract<768, 799>());
  auto result_24 = add(lane_24_in0, lane_24_in1);
  set_at<768, 1024, 32>(whole_result, result_24);

  hw_uint<32> lane_25_in0;
  set_at<0, 32, 32>(lane_25_in0, in0.extract<800, 831>());
  hw_uint<32> lane_25_in1;
  set_at<0, 32, 32>(lane_25_in1, in1.extract<800, 831>());
  auto result_25 = add(lane_25_in0, lane_25_in1);
  set_at<800, 1024, 32>(whole_result, result_25);

  hw_uint<32> lane_26_in0;
  set_at<0, 32, 32>(lane_26_in0, in0.extract<832, 863>());
  hw_uint<32> lane_26_in1;
  set_at<0, 32, 32>(lane_26_in1, in1.extract<832, 863>());
  auto result_26 = add(lane_26_in0, lane_26_in1);
  set_at<832, 1024, 32>(whole_result, result_26);

  hw_uint<32> lane_27_in0;
  set_at<0, 32, 32>(lane_27_in0, in0.extract<864, 895>());
  hw_uint<32> lane_27_in1;
  set_at<0, 32, 32>(lane_27_in1, in1.extract<864, 895>());
  auto result_27 = add(lane_27_in0, lane_27_in1);
  set_at<864, 1024, 32>(whole_result, result_27);

  hw_uint<32> lane_28_in0;
  set_at<0, 32, 32>(lane_28_in0, in0.extract<896, 927>());
  hw_uint<32> lane_28_in1;
  set_at<0, 32, 32>(lane_28_in1, in1.extract<896, 927>());
  auto result_28 = add(lane_28_in0, lane_28_in1);
  set_at<896, 1024, 32>(whole_result, result_28);

  hw_uint<32> lane_29_in0;
  set_at<0, 32, 32>(lane_29_in0, in0.extract<928, 959>());
  hw_uint<32> lane_29_in1;
  set_at<0, 32, 32>(lane_29_in1, in1.extract<928, 959>());
  auto result_29 = add(lane_29_in0, lane_29_in1);
  set_at<928, 1024, 32>(whole_result, result_29);

  hw_uint<32> lane_30_in0;
  set_at<0, 32, 32>(lane_30_in0, in0.extract<960, 991>());
  hw_uint<32> lane_30_in1;
  set_at<0, 32, 32>(lane_30_in1, in1.extract<960, 991>());
  auto result_30 = add(lane_30_in0, lane_30_in1);
  set_at<960, 1024, 32>(whole_result, result_30);

  hw_uint<32> lane_31_in0;
  set_at<0, 32, 32>(lane_31_in0, in0.extract<992, 1023>());
  hw_uint<32> lane_31_in1;
  set_at<0, 32, 32>(lane_31_in1, in1.extract<992, 1023>());
  auto result_31 = add(lane_31_in0, lane_31_in1);
  set_at<992, 1024, 32>(whole_result, result_31);
  return whole_result;
}

