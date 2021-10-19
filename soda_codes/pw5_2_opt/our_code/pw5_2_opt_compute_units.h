#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<32> t1_generated_compute(hw_uint<32*1> t1_arg) {
  return uint32_t(uint32_t(t1_arg.get<32, 0>()));
}

hw_uint<32> pw5_2_generated_compute(hw_uint<32*1> t1) {
  return uint32_t(uint32_t(t1.get<32, 0>()));
}



// Compute unit banks...
  // t1_update_0 unroll factor: 1
hw_uint<32>  t1_generated_compute_unrolled_1(hw_uint<32>& t1_arg) {
  hw_uint<32> whole_result;

  hw_uint<32> lane_0_t1_arg;
  set_at<0, 32, 32>(lane_0_t1_arg, t1_arg.extract<0, 31>());
  auto result_0 = t1_generated_compute(lane_0_t1_arg);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // pw5_2_update_0 unroll factor: 1
hw_uint<32>  pw5_2_generated_compute_unrolled_1(hw_uint<32>& t1) {
  hw_uint<32> whole_result;

  hw_uint<32> lane_0_t1;
  set_at<0, 32, 32>(lane_0_t1, t1.extract<0, 31>());
  auto result_0 = pw5_2_generated_compute(lane_0_t1);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

