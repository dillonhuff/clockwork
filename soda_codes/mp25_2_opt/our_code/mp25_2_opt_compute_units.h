#pragma once

#include "conv_3x3.h"

// Generated compute units...


// Compute unit banks...
  // in_update_0 unroll factor: 2
hw_uint<64>  id_unrolled_2(hw_uint<64>& in_oc) {
  hw_uint<64> whole_result;

  hw_uint<32> lane_0_in_oc;
  set_at<0, 32, 32>(lane_0_in_oc, in_oc.extract<0, 31>());
  auto result_0 = id(lane_0_in_oc);
  set_at<0, 64, 32>(whole_result, result_0);

  hw_uint<32> lane_1_in_oc;
  set_at<0, 32, 32>(lane_1_in_oc, in_oc.extract<32, 63>());
  auto result_1 = id(lane_1_in_oc);
  set_at<32, 64, 32>(whole_result, result_1);
  return whole_result;
}

  // mp25_2_update_0 unroll factor: 1
hw_uint<32>  max_pool_2x2_unrolled_1(hw_uint<128>& in) {
  hw_uint<32> whole_result;

  hw_uint<128> lane_0_in;
  set_at<0, 128, 128>(lane_0_in, in.extract<0, 127>());
  auto result_0 = max_pool_2x2(lane_0_in);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

