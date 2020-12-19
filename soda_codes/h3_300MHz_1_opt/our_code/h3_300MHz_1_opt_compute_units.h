#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<32> h3_300MHz_1_generated_compute(hw_uint<32*1> in) {
  return uint32_t(to_bits(to_float(in.get<32, 0>())));
}



// Compute unit banks...
  // h3_300MHz_1_update_0 unroll factor: 1
hw_uint<32>  h3_300MHz_1_generated_compute_unrolled_1(hw_uint<32>& in) {
  hw_uint<32> whole_result;

  hw_uint<32> lane_0_in;
  set_at<0, 32, 32>(lane_0_in, in.extract<0, 31>());
  auto result_0 = h3_300MHz_1_generated_compute(lane_0_in);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

