#pragma once

#include "conv_3x3.h"

  // t1_update_0 unroll factor: 2
hw_uint<64>  id_unrolled_2(hw_uint<64>& t1_arg) {
  hw_uint<64> whole_result;
  hw_uint<32> lane_0_t1_arg;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_t1_arg, t1_arg.extract<0, 31>());
  auto result_0 = id(lane_0_t1_arg);
  set_at<0, 64>(whole_result, result_0);
  hw_uint<32> lane_1_t1_arg;
  // Need offset: 1, 0
  set_at<0, 32>(lane_1_t1_arg, t1_arg.extract<32, 63>());
  auto result_1 = id(lane_1_t1_arg);
  set_at<32, 64>(whole_result, result_1);
  return whole_result;
}

  // jacobi2d_unrolled_2_update_0 unroll factor: 2
hw_uint<64>  jacobi2d_compute_unrolled_2(hw_uint<256>& t1) {
  hw_uint<64> whole_result;
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
  set_at<128, 160>(lane_0_t1, t1.extract<160, 191>());
  auto result_0 = jacobi2d_compute(lane_0_t1);
  set_at<0, 64>(whole_result, result_0);
  hw_uint<160> lane_1_t1;
  // Need offset: 0, 0
  set_at<0, 160>(lane_1_t1, t1.extract<64, 95>());
  // Need offset: 1, -1
  set_at<32, 160>(lane_1_t1, t1.extract<128, 159>());
  // Need offset: 1, 0
  set_at<64, 160>(lane_1_t1, t1.extract<160, 191>());
  // Need offset: 1, 1
  set_at<96, 160>(lane_1_t1, t1.extract<192, 223>());
  // Need offset: 2, 0
  set_at<128, 160>(lane_1_t1, t1.extract<224, 255>());
  auto result_1 = jacobi2d_compute(lane_1_t1);
  set_at<32, 64>(whole_result, result_1);
  return whole_result;
}

