#pragma once

#include "conv_3x3.h"

// Generated compute units...


// Compute unit banks...
  // in_update_0 unroll factor: 2
hw_uint<32>  id_unrolled_2(hw_uint<32>& in_oc) {
  hw_uint<32> whole_result;

  hw_uint<16> lane_0_in_oc;
  set_at<0, 16, 16>(lane_0_in_oc, in_oc.extract<0, 15>());
  auto result_0 = id(lane_0_in_oc);
  set_at<0, 32, 16>(whole_result, result_0);

  hw_uint<16> lane_1_in_oc;
  set_at<0, 16, 16>(lane_1_in_oc, in_oc.extract<16, 31>());
  auto result_1 = id(lane_1_in_oc);
  set_at<16, 32, 16>(whole_result, result_1);
  return whole_result;
}

  // mpr16b_32_2_update_0 unroll factor: 1
hw_uint<16>  max_pool_2x2_unrolled_1(hw_uint<64>& in) {
  hw_uint<16> whole_result;

  hw_uint<64> lane_0_in;
  set_at<0, 64, 64>(lane_0_in, in.extract<0, 63>());
  auto result_0 = max_pool_2x2(lane_0_in);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

