#pragma once

#include "conv_3x3.h"

hw_uint<32>  id_unrolled_1(hw_uint<32>& t1_arg) {
  hw_uint<32> whole_result;
  hw_uint<32> lane_0_t1_arg;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_t1_arg, t1_arg.extract<0, 31>());
  auto result_0 = id(lane_0_t1_arg);
  set_at<0, 32>(whole_result, result_0);
   return whole_result;
}

hw_uint<32>  jacobi2d_compute_unrolled_1(hw_uint<160>& t1) {
  hw_uint<32> whole_result;
  hw_uint<160> lane_0_t1;
  // Need offset: -1, 0
  set_at<0, 160>(lane_0_t1, t1.extract<0, 31>());
  // Need offset: 0, -1
  set_at<32, 160>(lane_0_t1, t1.extract<32, 63>());
  // Need offset: 0, 0
  set_at<64, 160>(lane_0_t1, t1.extract<64, 95>());
  // Need offset: 0, 1
  set_at<96, 160>(lane_0_t1, t1.extract<96, 127>());
  // Need offset: 1, 0
  set_at<128, 160>(lane_0_t1, t1.extract<128, 159>());
  auto result_0 = jacobi2d_compute(lane_0_t1);
  set_at<0, 32>(whole_result, result_0);
   return whole_result;
}

