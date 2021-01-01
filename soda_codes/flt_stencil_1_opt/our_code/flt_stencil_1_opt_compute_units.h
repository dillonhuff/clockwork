#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<32> in_cc_generated_compute(hw_uint<32*1> in) {
  return uint32_t(to_bits(to_float(in.get<32, 0>())));
}

hw_uint<32> flt_stencil_1_generated_compute(hw_uint<32*3> in_cc) {
  return uint32_t(to_bits((((((float)0.125) * to_float(in_cc.get<32, 2>())) + (((float)0.125) * to_float(in_cc.get<32, 1>()))) + (((float)0.125) * to_float(in_cc.get<32, 0>())))));
}



// Compute unit banks...
  // in_cc_update_0 unroll factor: 1
hw_uint<32>  in_cc_generated_compute_unrolled_1(hw_uint<32>& in) {
  hw_uint<32> whole_result;

  hw_uint<32> lane_0_in;
  set_at<0, 32, 32>(lane_0_in, in.extract<0, 31>());
  auto result_0 = in_cc_generated_compute(lane_0_in);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // flt_stencil_1_update_0 unroll factor: 1
hw_uint<32>  flt_stencil_1_generated_compute_unrolled_1(hw_uint<96>& in_cc) {
  hw_uint<32> whole_result;

  hw_uint<96> lane_0_in_cc;
  set_at<0, 96, 96>(lane_0_in_cc, in_cc.extract<0, 95>());
  auto result_0 = flt_stencil_1_generated_compute(lane_0_in_cc);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

