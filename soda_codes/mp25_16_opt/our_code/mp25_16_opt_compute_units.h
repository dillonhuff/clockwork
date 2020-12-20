#pragma once

#include "conv_3x3.h"

// Generated compute units...


// Compute unit banks...
  // in_update_0 unroll factor: 16
hw_uint<512>  id_unrolled_16(hw_uint<512>& in_oc) {
  hw_uint<512> whole_result;

  hw_uint<32> lane_0_in_oc;
  set_at<0, 32, 32>(lane_0_in_oc, in_oc.extract<0, 31>());
  auto result_0 = id(lane_0_in_oc);
  set_at<0, 512, 32>(whole_result, result_0);

  hw_uint<32> lane_1_in_oc;
  set_at<0, 32, 32>(lane_1_in_oc, in_oc.extract<32, 63>());
  auto result_1 = id(lane_1_in_oc);
  set_at<32, 512, 32>(whole_result, result_1);

  hw_uint<32> lane_2_in_oc;
  set_at<0, 32, 32>(lane_2_in_oc, in_oc.extract<64, 95>());
  auto result_2 = id(lane_2_in_oc);
  set_at<64, 512, 32>(whole_result, result_2);

  hw_uint<32> lane_3_in_oc;
  set_at<0, 32, 32>(lane_3_in_oc, in_oc.extract<96, 127>());
  auto result_3 = id(lane_3_in_oc);
  set_at<96, 512, 32>(whole_result, result_3);

  hw_uint<32> lane_4_in_oc;
  set_at<0, 32, 32>(lane_4_in_oc, in_oc.extract<128, 159>());
  auto result_4 = id(lane_4_in_oc);
  set_at<128, 512, 32>(whole_result, result_4);

  hw_uint<32> lane_5_in_oc;
  set_at<0, 32, 32>(lane_5_in_oc, in_oc.extract<160, 191>());
  auto result_5 = id(lane_5_in_oc);
  set_at<160, 512, 32>(whole_result, result_5);

  hw_uint<32> lane_6_in_oc;
  set_at<0, 32, 32>(lane_6_in_oc, in_oc.extract<192, 223>());
  auto result_6 = id(lane_6_in_oc);
  set_at<192, 512, 32>(whole_result, result_6);

  hw_uint<32> lane_7_in_oc;
  set_at<0, 32, 32>(lane_7_in_oc, in_oc.extract<224, 255>());
  auto result_7 = id(lane_7_in_oc);
  set_at<224, 512, 32>(whole_result, result_7);

  hw_uint<32> lane_8_in_oc;
  set_at<0, 32, 32>(lane_8_in_oc, in_oc.extract<256, 287>());
  auto result_8 = id(lane_8_in_oc);
  set_at<256, 512, 32>(whole_result, result_8);

  hw_uint<32> lane_9_in_oc;
  set_at<0, 32, 32>(lane_9_in_oc, in_oc.extract<288, 319>());
  auto result_9 = id(lane_9_in_oc);
  set_at<288, 512, 32>(whole_result, result_9);

  hw_uint<32> lane_10_in_oc;
  set_at<0, 32, 32>(lane_10_in_oc, in_oc.extract<320, 351>());
  auto result_10 = id(lane_10_in_oc);
  set_at<320, 512, 32>(whole_result, result_10);

  hw_uint<32> lane_11_in_oc;
  set_at<0, 32, 32>(lane_11_in_oc, in_oc.extract<352, 383>());
  auto result_11 = id(lane_11_in_oc);
  set_at<352, 512, 32>(whole_result, result_11);

  hw_uint<32> lane_12_in_oc;
  set_at<0, 32, 32>(lane_12_in_oc, in_oc.extract<384, 415>());
  auto result_12 = id(lane_12_in_oc);
  set_at<384, 512, 32>(whole_result, result_12);

  hw_uint<32> lane_13_in_oc;
  set_at<0, 32, 32>(lane_13_in_oc, in_oc.extract<416, 447>());
  auto result_13 = id(lane_13_in_oc);
  set_at<416, 512, 32>(whole_result, result_13);

  hw_uint<32> lane_14_in_oc;
  set_at<0, 32, 32>(lane_14_in_oc, in_oc.extract<448, 479>());
  auto result_14 = id(lane_14_in_oc);
  set_at<448, 512, 32>(whole_result, result_14);

  hw_uint<32> lane_15_in_oc;
  set_at<0, 32, 32>(lane_15_in_oc, in_oc.extract<480, 511>());
  auto result_15 = id(lane_15_in_oc);
  set_at<480, 512, 32>(whole_result, result_15);
  return whole_result;
}

  // mp25_16_update_0 unroll factor: 8
hw_uint<256>  max_pool_2x2_unrolled_8(hw_uint<1024>& in) {
  hw_uint<256> whole_result;

  hw_uint<128> lane_0_in;
  set_at<0, 128, 128>(lane_0_in, in.extract<0, 127>());
  auto result_0 = max_pool_2x2(lane_0_in);
  set_at<0, 256, 32>(whole_result, result_0);

  hw_uint<128> lane_1_in;
  set_at<0, 128, 128>(lane_1_in, in.extract<128, 255>());
  auto result_1 = max_pool_2x2(lane_1_in);
  set_at<32, 256, 32>(whole_result, result_1);

  hw_uint<128> lane_2_in;
  set_at<0, 128, 128>(lane_2_in, in.extract<256, 383>());
  auto result_2 = max_pool_2x2(lane_2_in);
  set_at<64, 256, 32>(whole_result, result_2);

  hw_uint<128> lane_3_in;
  set_at<0, 128, 128>(lane_3_in, in.extract<384, 511>());
  auto result_3 = max_pool_2x2(lane_3_in);
  set_at<96, 256, 32>(whole_result, result_3);

  hw_uint<128> lane_4_in;
  set_at<0, 128, 128>(lane_4_in, in.extract<512, 639>());
  auto result_4 = max_pool_2x2(lane_4_in);
  set_at<128, 256, 32>(whole_result, result_4);

  hw_uint<128> lane_5_in;
  set_at<0, 128, 128>(lane_5_in, in.extract<640, 767>());
  auto result_5 = max_pool_2x2(lane_5_in);
  set_at<160, 256, 32>(whole_result, result_5);

  hw_uint<128> lane_6_in;
  set_at<0, 128, 128>(lane_6_in, in.extract<768, 895>());
  auto result_6 = max_pool_2x2(lane_6_in);
  set_at<192, 256, 32>(whole_result, result_6);

  hw_uint<128> lane_7_in;
  set_at<0, 128, 128>(lane_7_in, in.extract<896, 1023>());
  auto result_7 = max_pool_2x2(lane_7_in);
  set_at<224, 256, 32>(whole_result, result_7);
  return whole_result;
}

