#pragma once

#include "conv_3x3.h"

// Generated compute units...


// Compute unit banks...
  // in_update_0 unroll factor: 8
hw_uint<256>  id_unrolled_8(hw_uint<256>& in_oc) {
  hw_uint<256> whole_result;

  hw_uint<32> lane_0_in_oc;
  set_at<0, 32, 32>(lane_0_in_oc, in_oc.extract<0, 31>());
  auto result_0 = id(lane_0_in_oc);
  set_at<0, 256, 32>(whole_result, result_0);

  hw_uint<32> lane_1_in_oc;
  set_at<0, 32, 32>(lane_1_in_oc, in_oc.extract<32, 63>());
  auto result_1 = id(lane_1_in_oc);
  set_at<32, 256, 32>(whole_result, result_1);

  hw_uint<32> lane_2_in_oc;
  set_at<0, 32, 32>(lane_2_in_oc, in_oc.extract<64, 95>());
  auto result_2 = id(lane_2_in_oc);
  set_at<64, 256, 32>(whole_result, result_2);

  hw_uint<32> lane_3_in_oc;
  set_at<0, 32, 32>(lane_3_in_oc, in_oc.extract<96, 127>());
  auto result_3 = id(lane_3_in_oc);
  set_at<96, 256, 32>(whole_result, result_3);

  hw_uint<32> lane_4_in_oc;
  set_at<0, 32, 32>(lane_4_in_oc, in_oc.extract<128, 159>());
  auto result_4 = id(lane_4_in_oc);
  set_at<128, 256, 32>(whole_result, result_4);

  hw_uint<32> lane_5_in_oc;
  set_at<0, 32, 32>(lane_5_in_oc, in_oc.extract<160, 191>());
  auto result_5 = id(lane_5_in_oc);
  set_at<160, 256, 32>(whole_result, result_5);

  hw_uint<32> lane_6_in_oc;
  set_at<0, 32, 32>(lane_6_in_oc, in_oc.extract<192, 223>());
  auto result_6 = id(lane_6_in_oc);
  set_at<192, 256, 32>(whole_result, result_6);

  hw_uint<32> lane_7_in_oc;
  set_at<0, 32, 32>(lane_7_in_oc, in_oc.extract<224, 255>());
  auto result_7 = id(lane_7_in_oc);
  set_at<224, 256, 32>(whole_result, result_7);
  return whole_result;
}

  // mp25_8_update_0 unroll factor: 4
hw_uint<128>  max_pool_2x2_unrolled_4(hw_uint<512>& in) {
  hw_uint<128> whole_result;

  hw_uint<128> lane_0_in;
  set_at<0, 128, 128>(lane_0_in, in.extract<0, 127>());
  auto result_0 = max_pool_2x2(lane_0_in);
  set_at<0, 128, 32>(whole_result, result_0);

  hw_uint<128> lane_1_in;
  set_at<0, 128, 128>(lane_1_in, in.extract<128, 255>());
  auto result_1 = max_pool_2x2(lane_1_in);
  set_at<32, 128, 32>(whole_result, result_1);

  hw_uint<128> lane_2_in;
  set_at<0, 128, 128>(lane_2_in, in.extract<256, 383>());
  auto result_2 = max_pool_2x2(lane_2_in);
  set_at<64, 128, 32>(whole_result, result_2);

  hw_uint<128> lane_3_in;
  set_at<0, 128, 128>(lane_3_in, in.extract<384, 511>());
  auto result_3 = max_pool_2x2(lane_3_in);
  set_at<96, 128, 32>(whole_result, result_3);
  return whole_result;
}

