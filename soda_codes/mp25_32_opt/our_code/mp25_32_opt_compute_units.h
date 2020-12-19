#pragma once

#include "conv_3x3.h"

// Generated compute units...


// Compute unit banks...
  // in_update_0 unroll factor: 32
hw_uint<1024>  id_unrolled_32(hw_uint<1024>& in_oc) {
  hw_uint<1024> whole_result;

  hw_uint<32> lane_0_in_oc;
  set_at<0, 32, 32>(lane_0_in_oc, in_oc.extract<0, 31>());
  auto result_0 = id(lane_0_in_oc);
  set_at<0, 1024, 32>(whole_result, result_0);

  hw_uint<32> lane_1_in_oc;
  set_at<0, 32, 32>(lane_1_in_oc, in_oc.extract<32, 63>());
  auto result_1 = id(lane_1_in_oc);
  set_at<32, 1024, 32>(whole_result, result_1);

  hw_uint<32> lane_2_in_oc;
  set_at<0, 32, 32>(lane_2_in_oc, in_oc.extract<64, 95>());
  auto result_2 = id(lane_2_in_oc);
  set_at<64, 1024, 32>(whole_result, result_2);

  hw_uint<32> lane_3_in_oc;
  set_at<0, 32, 32>(lane_3_in_oc, in_oc.extract<96, 127>());
  auto result_3 = id(lane_3_in_oc);
  set_at<96, 1024, 32>(whole_result, result_3);

  hw_uint<32> lane_4_in_oc;
  set_at<0, 32, 32>(lane_4_in_oc, in_oc.extract<128, 159>());
  auto result_4 = id(lane_4_in_oc);
  set_at<128, 1024, 32>(whole_result, result_4);

  hw_uint<32> lane_5_in_oc;
  set_at<0, 32, 32>(lane_5_in_oc, in_oc.extract<160, 191>());
  auto result_5 = id(lane_5_in_oc);
  set_at<160, 1024, 32>(whole_result, result_5);

  hw_uint<32> lane_6_in_oc;
  set_at<0, 32, 32>(lane_6_in_oc, in_oc.extract<192, 223>());
  auto result_6 = id(lane_6_in_oc);
  set_at<192, 1024, 32>(whole_result, result_6);

  hw_uint<32> lane_7_in_oc;
  set_at<0, 32, 32>(lane_7_in_oc, in_oc.extract<224, 255>());
  auto result_7 = id(lane_7_in_oc);
  set_at<224, 1024, 32>(whole_result, result_7);

  hw_uint<32> lane_8_in_oc;
  set_at<0, 32, 32>(lane_8_in_oc, in_oc.extract<256, 287>());
  auto result_8 = id(lane_8_in_oc);
  set_at<256, 1024, 32>(whole_result, result_8);

  hw_uint<32> lane_9_in_oc;
  set_at<0, 32, 32>(lane_9_in_oc, in_oc.extract<288, 319>());
  auto result_9 = id(lane_9_in_oc);
  set_at<288, 1024, 32>(whole_result, result_9);

  hw_uint<32> lane_10_in_oc;
  set_at<0, 32, 32>(lane_10_in_oc, in_oc.extract<320, 351>());
  auto result_10 = id(lane_10_in_oc);
  set_at<320, 1024, 32>(whole_result, result_10);

  hw_uint<32> lane_11_in_oc;
  set_at<0, 32, 32>(lane_11_in_oc, in_oc.extract<352, 383>());
  auto result_11 = id(lane_11_in_oc);
  set_at<352, 1024, 32>(whole_result, result_11);

  hw_uint<32> lane_12_in_oc;
  set_at<0, 32, 32>(lane_12_in_oc, in_oc.extract<384, 415>());
  auto result_12 = id(lane_12_in_oc);
  set_at<384, 1024, 32>(whole_result, result_12);

  hw_uint<32> lane_13_in_oc;
  set_at<0, 32, 32>(lane_13_in_oc, in_oc.extract<416, 447>());
  auto result_13 = id(lane_13_in_oc);
  set_at<416, 1024, 32>(whole_result, result_13);

  hw_uint<32> lane_14_in_oc;
  set_at<0, 32, 32>(lane_14_in_oc, in_oc.extract<448, 479>());
  auto result_14 = id(lane_14_in_oc);
  set_at<448, 1024, 32>(whole_result, result_14);

  hw_uint<32> lane_15_in_oc;
  set_at<0, 32, 32>(lane_15_in_oc, in_oc.extract<480, 511>());
  auto result_15 = id(lane_15_in_oc);
  set_at<480, 1024, 32>(whole_result, result_15);

  hw_uint<32> lane_16_in_oc;
  set_at<0, 32, 32>(lane_16_in_oc, in_oc.extract<512, 543>());
  auto result_16 = id(lane_16_in_oc);
  set_at<512, 1024, 32>(whole_result, result_16);

  hw_uint<32> lane_17_in_oc;
  set_at<0, 32, 32>(lane_17_in_oc, in_oc.extract<544, 575>());
  auto result_17 = id(lane_17_in_oc);
  set_at<544, 1024, 32>(whole_result, result_17);

  hw_uint<32> lane_18_in_oc;
  set_at<0, 32, 32>(lane_18_in_oc, in_oc.extract<576, 607>());
  auto result_18 = id(lane_18_in_oc);
  set_at<576, 1024, 32>(whole_result, result_18);

  hw_uint<32> lane_19_in_oc;
  set_at<0, 32, 32>(lane_19_in_oc, in_oc.extract<608, 639>());
  auto result_19 = id(lane_19_in_oc);
  set_at<608, 1024, 32>(whole_result, result_19);

  hw_uint<32> lane_20_in_oc;
  set_at<0, 32, 32>(lane_20_in_oc, in_oc.extract<640, 671>());
  auto result_20 = id(lane_20_in_oc);
  set_at<640, 1024, 32>(whole_result, result_20);

  hw_uint<32> lane_21_in_oc;
  set_at<0, 32, 32>(lane_21_in_oc, in_oc.extract<672, 703>());
  auto result_21 = id(lane_21_in_oc);
  set_at<672, 1024, 32>(whole_result, result_21);

  hw_uint<32> lane_22_in_oc;
  set_at<0, 32, 32>(lane_22_in_oc, in_oc.extract<704, 735>());
  auto result_22 = id(lane_22_in_oc);
  set_at<704, 1024, 32>(whole_result, result_22);

  hw_uint<32> lane_23_in_oc;
  set_at<0, 32, 32>(lane_23_in_oc, in_oc.extract<736, 767>());
  auto result_23 = id(lane_23_in_oc);
  set_at<736, 1024, 32>(whole_result, result_23);

  hw_uint<32> lane_24_in_oc;
  set_at<0, 32, 32>(lane_24_in_oc, in_oc.extract<768, 799>());
  auto result_24 = id(lane_24_in_oc);
  set_at<768, 1024, 32>(whole_result, result_24);

  hw_uint<32> lane_25_in_oc;
  set_at<0, 32, 32>(lane_25_in_oc, in_oc.extract<800, 831>());
  auto result_25 = id(lane_25_in_oc);
  set_at<800, 1024, 32>(whole_result, result_25);

  hw_uint<32> lane_26_in_oc;
  set_at<0, 32, 32>(lane_26_in_oc, in_oc.extract<832, 863>());
  auto result_26 = id(lane_26_in_oc);
  set_at<832, 1024, 32>(whole_result, result_26);

  hw_uint<32> lane_27_in_oc;
  set_at<0, 32, 32>(lane_27_in_oc, in_oc.extract<864, 895>());
  auto result_27 = id(lane_27_in_oc);
  set_at<864, 1024, 32>(whole_result, result_27);

  hw_uint<32> lane_28_in_oc;
  set_at<0, 32, 32>(lane_28_in_oc, in_oc.extract<896, 927>());
  auto result_28 = id(lane_28_in_oc);
  set_at<896, 1024, 32>(whole_result, result_28);

  hw_uint<32> lane_29_in_oc;
  set_at<0, 32, 32>(lane_29_in_oc, in_oc.extract<928, 959>());
  auto result_29 = id(lane_29_in_oc);
  set_at<928, 1024, 32>(whole_result, result_29);

  hw_uint<32> lane_30_in_oc;
  set_at<0, 32, 32>(lane_30_in_oc, in_oc.extract<960, 991>());
  auto result_30 = id(lane_30_in_oc);
  set_at<960, 1024, 32>(whole_result, result_30);

  hw_uint<32> lane_31_in_oc;
  set_at<0, 32, 32>(lane_31_in_oc, in_oc.extract<992, 1023>());
  auto result_31 = id(lane_31_in_oc);
  set_at<992, 1024, 32>(whole_result, result_31);
  return whole_result;
}

  // mp25_32_update_0 unroll factor: 16
hw_uint<512>  max_pool_2x2_unrolled_16(hw_uint<2048>& in) {
  hw_uint<512> whole_result;

  hw_uint<128> lane_0_in;
  set_at<0, 128, 128>(lane_0_in, in.extract<0, 127>());
  auto result_0 = max_pool_2x2(lane_0_in);
  set_at<0, 512, 32>(whole_result, result_0);

  hw_uint<128> lane_1_in;
  set_at<0, 128, 128>(lane_1_in, in.extract<128, 255>());
  auto result_1 = max_pool_2x2(lane_1_in);
  set_at<32, 512, 32>(whole_result, result_1);

  hw_uint<128> lane_2_in;
  set_at<0, 128, 128>(lane_2_in, in.extract<256, 383>());
  auto result_2 = max_pool_2x2(lane_2_in);
  set_at<64, 512, 32>(whole_result, result_2);

  hw_uint<128> lane_3_in;
  set_at<0, 128, 128>(lane_3_in, in.extract<384, 511>());
  auto result_3 = max_pool_2x2(lane_3_in);
  set_at<96, 512, 32>(whole_result, result_3);

  hw_uint<128> lane_4_in;
  set_at<0, 128, 128>(lane_4_in, in.extract<512, 639>());
  auto result_4 = max_pool_2x2(lane_4_in);
  set_at<128, 512, 32>(whole_result, result_4);

  hw_uint<128> lane_5_in;
  set_at<0, 128, 128>(lane_5_in, in.extract<640, 767>());
  auto result_5 = max_pool_2x2(lane_5_in);
  set_at<160, 512, 32>(whole_result, result_5);

  hw_uint<128> lane_6_in;
  set_at<0, 128, 128>(lane_6_in, in.extract<768, 895>());
  auto result_6 = max_pool_2x2(lane_6_in);
  set_at<192, 512, 32>(whole_result, result_6);

  hw_uint<128> lane_7_in;
  set_at<0, 128, 128>(lane_7_in, in.extract<896, 1023>());
  auto result_7 = max_pool_2x2(lane_7_in);
  set_at<224, 512, 32>(whole_result, result_7);

  hw_uint<128> lane_8_in;
  set_at<0, 128, 128>(lane_8_in, in.extract<1024, 1151>());
  auto result_8 = max_pool_2x2(lane_8_in);
  set_at<256, 512, 32>(whole_result, result_8);

  hw_uint<128> lane_9_in;
  set_at<0, 128, 128>(lane_9_in, in.extract<1152, 1279>());
  auto result_9 = max_pool_2x2(lane_9_in);
  set_at<288, 512, 32>(whole_result, result_9);

  hw_uint<128> lane_10_in;
  set_at<0, 128, 128>(lane_10_in, in.extract<1280, 1407>());
  auto result_10 = max_pool_2x2(lane_10_in);
  set_at<320, 512, 32>(whole_result, result_10);

  hw_uint<128> lane_11_in;
  set_at<0, 128, 128>(lane_11_in, in.extract<1408, 1535>());
  auto result_11 = max_pool_2x2(lane_11_in);
  set_at<352, 512, 32>(whole_result, result_11);

  hw_uint<128> lane_12_in;
  set_at<0, 128, 128>(lane_12_in, in.extract<1536, 1663>());
  auto result_12 = max_pool_2x2(lane_12_in);
  set_at<384, 512, 32>(whole_result, result_12);

  hw_uint<128> lane_13_in;
  set_at<0, 128, 128>(lane_13_in, in.extract<1664, 1791>());
  auto result_13 = max_pool_2x2(lane_13_in);
  set_at<416, 512, 32>(whole_result, result_13);

  hw_uint<128> lane_14_in;
  set_at<0, 128, 128>(lane_14_in, in.extract<1792, 1919>());
  auto result_14 = max_pool_2x2(lane_14_in);
  set_at<448, 512, 32>(whole_result, result_14);

  hw_uint<128> lane_15_in;
  set_at<0, 128, 128>(lane_15_in, in.extract<1920, 2047>());
  auto result_15 = max_pool_2x2(lane_15_in);
  set_at<480, 512, 32>(whole_result, result_15);
  return whole_result;
}

