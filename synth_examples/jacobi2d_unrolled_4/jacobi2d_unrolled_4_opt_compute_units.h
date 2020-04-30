#pragma once

#include "conv_3x3.h"

// Generated compute units...


// Compute unit banks...
  // t1_update_0 unroll factor: 4
hw_uint<128>  id_unrolled_4(hw_uint<128>& t1_arg) {
  hw_uint<128> whole_result;

  hw_uint<32> lane_0_t1_arg;
  set_at<0, 32, 32>(lane_0_t1_arg, t1_arg.extract<0, 31>());
  auto result_0 = id(lane_0_t1_arg);
  set_at<0, 128, 32>(whole_result, result_0);

  hw_uint<32> lane_1_t1_arg;
  set_at<0, 32, 32>(lane_1_t1_arg, t1_arg.extract<32, 63>());
  auto result_1 = id(lane_1_t1_arg);
  set_at<32, 128, 32>(whole_result, result_1);

  hw_uint<32> lane_2_t1_arg;
  set_at<0, 32, 32>(lane_2_t1_arg, t1_arg.extract<64, 95>());
  auto result_2 = id(lane_2_t1_arg);
  set_at<64, 128, 32>(whole_result, result_2);

  hw_uint<32> lane_3_t1_arg;
  set_at<0, 32, 32>(lane_3_t1_arg, t1_arg.extract<96, 127>());
  auto result_3 = id(lane_3_t1_arg);
  set_at<96, 128, 32>(whole_result, result_3);
  return whole_result;
}

  // jacobi2d_unrolled_4_update_0 unroll factor: 4
hw_uint<128>  jacobi2d_compute_unrolled_4(hw_uint<640>& t1) {
  hw_uint<128> whole_result;

  hw_uint<160> lane_0_t1;
  set_at<0, 160, 160>(lane_0_t1, t1.extract<0, 159>());
  auto result_0 = jacobi2d_compute(lane_0_t1);
  set_at<0, 128, 32>(whole_result, result_0);

  hw_uint<160> lane_1_t1;
  set_at<0, 160, 160>(lane_1_t1, t1.extract<160, 319>());
  auto result_1 = jacobi2d_compute(lane_1_t1);
  set_at<32, 128, 32>(whole_result, result_1);

  hw_uint<160> lane_2_t1;
  set_at<0, 160, 160>(lane_2_t1, t1.extract<320, 479>());
  auto result_2 = jacobi2d_compute(lane_2_t1);
  set_at<64, 128, 32>(whole_result, result_2);

  hw_uint<160> lane_3_t1;
  set_at<0, 160, 160>(lane_3_t1, t1.extract<480, 639>());
  auto result_3 = jacobi2d_compute(lane_3_t1);
  set_at<96, 128, 32>(whole_result, result_3);
  return whole_result;
}

