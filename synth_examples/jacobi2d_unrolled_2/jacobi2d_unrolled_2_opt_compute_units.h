#pragma once

#include "conv_3x3.h"

// Generated compute units...


// Compute unit banks...
  // t1_update_0 unroll factor: 2
hw_uint<64>  id_unrolled_2(hw_uint<64>& t1_arg) {
  hw_uint<64> whole_result;

  hw_uint<32> lane_0_t1_arg;
  set_at<0, 32, 32>(lane_0_t1_arg, t1_arg.extract<0, 31>());
  auto result_0 = id(lane_0_t1_arg);
  set_at<0, 64, 32>(whole_result, result_0);

  hw_uint<32> lane_1_t1_arg;
  set_at<0, 32, 32>(lane_1_t1_arg, t1_arg.extract<32, 63>());
  auto result_1 = id(lane_1_t1_arg);
  set_at<32, 64, 32>(whole_result, result_1);
  return whole_result;
}

  // jacobi2d_unrolled_2_update_0 unroll factor: 2
hw_uint<64>  jacobi2d_compute_unrolled_2(hw_uint<320>& t1) {
  hw_uint<64> whole_result;

  hw_uint<160> lane_0_t1;
  set_at<0, 160, 160>(lane_0_t1, t1.extract<0, 159>());
  auto result_0 = jacobi2d_compute(lane_0_t1);
  set_at<0, 64, 32>(whole_result, result_0);

  hw_uint<160> lane_1_t1;
  set_at<0, 160, 160>(lane_1_t1, t1.extract<160, 319>());
  auto result_1 = jacobi2d_compute(lane_1_t1);
  set_at<32, 64, 32>(whole_result, result_1);
  return whole_result;
}

