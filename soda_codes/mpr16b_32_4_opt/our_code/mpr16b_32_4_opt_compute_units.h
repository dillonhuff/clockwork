#pragma once

#include "conv_3x3.h"

// Generated compute units...


// Compute unit banks...
  // in_update_0 unroll factor: 4
hw_uint<64>  id_unrolled_4(hw_uint<64>& in_oc) {
  hw_uint<64> whole_result;

  hw_uint<16> lane_0_in_oc;
  set_at<0, 16, 16>(lane_0_in_oc, in_oc.extract<0, 15>());
  auto result_0 = id(lane_0_in_oc);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<16> lane_1_in_oc;
  set_at<0, 16, 16>(lane_1_in_oc, in_oc.extract<16, 31>());
  auto result_1 = id(lane_1_in_oc);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<16> lane_2_in_oc;
  set_at<0, 16, 16>(lane_2_in_oc, in_oc.extract<32, 47>());
  auto result_2 = id(lane_2_in_oc);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<16> lane_3_in_oc;
  set_at<0, 16, 16>(lane_3_in_oc, in_oc.extract<48, 63>());
  auto result_3 = id(lane_3_in_oc);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // mpr16b_32_4_update_0 unroll factor: 2
hw_uint<32>  max_pool_2x2_unrolled_2(hw_uint<128>& in) {
  hw_uint<32> whole_result;

  hw_uint<64> lane_0_in;
  set_at<0, 64, 64>(lane_0_in, in.extract<0, 63>());
  auto result_0 = max_pool_2x2(lane_0_in);
  set_at<0, 32, 16>(whole_result, result_0);

  hw_uint<64> lane_1_in;
  set_at<0, 64, 64>(lane_1_in, in.extract<64, 127>());
  auto result_1 = max_pool_2x2(lane_1_in);
  set_at<16, 32, 16>(whole_result, result_1);
  return whole_result;
}

