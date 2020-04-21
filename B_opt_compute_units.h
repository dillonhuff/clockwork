#pragma once

#include "conv_3x3.h"

// Generated compute units...


// Compute unit banks...
  // B_update_0 unroll factor: 1
hw_uint<32>  id_unrolled_1(hw_uint<32>& A) {
  hw_uint<32> whole_result;
  hw_uint<32> lane_0_A;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_A, A.extract<0, 31>());
  auto result_0 = id(lane_0_A);
  set_at<0, 32>(whole_result, result_0);
  return whole_result;
}

