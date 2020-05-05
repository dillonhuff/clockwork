#pragma once

#include "conv_3x3.h"

// Generated compute units...


// Compute unit banks...
  // A_update_0 unroll factor: 2
hw_uint<64>  id_unrolled_2(hw_uint<64>& A_oc) {
  hw_uint<64> whole_result;

  hw_uint<32> lane_0_A_oc;
  set_at<0, 32, 32>(lane_0_A_oc, A_oc.extract<0, 31>());
  auto result_0 = id(lane_0_A_oc);
  set_at<0, 64, 32>(whole_result, result_0);

  hw_uint<32> lane_1_A_oc;
  set_at<0, 32, 32>(lane_1_A_oc, A_oc.extract<32, 63>());
  auto result_1 = id(lane_1_A_oc);
  set_at<32, 64, 32>(whole_result, result_1);
  return whole_result;
}

  // B_update_0 unroll factor: 1
hw_uint<32>  id_unrolled_1(hw_uint<32>& A) {
  hw_uint<32> whole_result;

  hw_uint<32> lane_0_A;
  set_at<0, 32, 32>(lane_0_A, A.extract<0, 31>());
  auto result_0 = id(lane_0_A);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

