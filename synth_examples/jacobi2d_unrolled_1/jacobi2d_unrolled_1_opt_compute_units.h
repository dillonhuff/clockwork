#pragma once

#include "conv_3x3.h"

// Generated compute units...


// Compute unit banks...
  // t1_update_0 unroll factor: 1
hw_uint<32>  id_unrolled_1(hw_uint<32>& t1_arg) {
  hw_uint<32> whole_result;

  hw_uint<32> lane_0_t1_arg;
  set_at<0, 32, 32>(lane_0_t1_arg, t1_arg.extract<0, 31>());
  auto result_0 = id(lane_0_t1_arg);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // jacobi2d_unrolled_1_update_0 unroll factor: 1
hw_uint<32>  jacobi2d_compute_unrolled_1(hw_uint<160>& t1) {
  hw_uint<32> whole_result;

  hw_uint<160> lane_0_t1;
  set_at<0, 160, 160>(lane_0_t1, t1.extract<0, 159>());
  auto result_0 = jacobi2d_compute(lane_0_t1);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

