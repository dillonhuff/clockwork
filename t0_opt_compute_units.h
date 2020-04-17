#pragma once

#include "conv_3x3.h"

<<<<<<< HEAD
<<<<<<< HEAD
hw_uint<128>  id_unrolled_4(hw_uint<128>& t1_arg) {
  hw_uint<128> whole_result;
=======
=======
  // t1_update_0 unroll factor: 1
>>>>>>> origin/master
hw_uint<32>  id_unrolled_1(hw_uint<32>& t1_arg) {
  hw_uint<32> whole_result;
>>>>>>> origin/master
  hw_uint<32> lane_0_t1_arg;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_t1_arg, t1_arg.extract<0, 31>());
  auto result_0 = id(lane_0_t1_arg);
<<<<<<< HEAD
  set_at<0, 128>(whole_result, result_0);
  hw_uint<32> lane_1_t1_arg;
  // Need offset: 1, 0
  set_at<0, 32>(lane_1_t1_arg, t1_arg.extract<32, 63>());
  auto result_1 = id(lane_1_t1_arg);
  set_at<32, 128>(whole_result, result_1);
  hw_uint<32> lane_2_t1_arg;
  // Need offset: 2, 0
  set_at<0, 32>(lane_2_t1_arg, t1_arg.extract<64, 95>());
  auto result_2 = id(lane_2_t1_arg);
  set_at<64, 128>(whole_result, result_2);
  hw_uint<32> lane_3_t1_arg;
  // Need offset: 3, 0
  set_at<0, 32>(lane_3_t1_arg, t1_arg.extract<96, 127>());
  auto result_3 = id(lane_3_t1_arg);
  set_at<96, 128>(whole_result, result_3);
   return whole_result;
}

hw_uint<128>  jacobi2d_compute_unrolled_4(hw_uint<448>& t1) {
  hw_uint<128> whole_result;
=======
  set_at<0, 32>(whole_result, result_0);
   return whole_result;
}

  // t0_update_0 unroll factor: 1
hw_uint<32>  jacobi2d_compute_unrolled_1(hw_uint<160>& t1) {
  hw_uint<32> whole_result;
>>>>>>> origin/master
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
<<<<<<< HEAD
  set_at<128, 160>(lane_0_t1, t1.extract<160, 191>());
  auto result_0 = jacobi2d_compute(lane_0_t1);
  set_at<0, 128>(whole_result, result_0);
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
  set_at<128, 160>(lane_1_t1, t1.extract<256, 287>());
  auto result_1 = jacobi2d_compute(lane_1_t1);
  set_at<32, 128>(whole_result, result_1);
  hw_uint<160> lane_2_t1;
  // Need offset: 1, 0
  set_at<0, 160>(lane_2_t1, t1.extract<160, 191>());
  // Need offset: 2, -1
  set_at<32, 160>(lane_2_t1, t1.extract<224, 255>());
  // Need offset: 2, 0
  set_at<64, 160>(lane_2_t1, t1.extract<256, 287>());
  // Need offset: 2, 1
  set_at<96, 160>(lane_2_t1, t1.extract<288, 319>());
  // Need offset: 3, 0
  set_at<128, 160>(lane_2_t1, t1.extract<352, 383>());
  auto result_2 = jacobi2d_compute(lane_2_t1);
  set_at<64, 128>(whole_result, result_2);
  hw_uint<160> lane_3_t1;
  // Need offset: 2, 0
  set_at<0, 160>(lane_3_t1, t1.extract<256, 287>());
  // Need offset: 3, -1
  set_at<32, 160>(lane_3_t1, t1.extract<320, 351>());
  // Need offset: 3, 0
  set_at<64, 160>(lane_3_t1, t1.extract<352, 383>());
  // Need offset: 3, 1
  set_at<96, 160>(lane_3_t1, t1.extract<384, 415>());
  // Need offset: 4, 0
  set_at<128, 160>(lane_3_t1, t1.extract<416, 447>());
  auto result_3 = jacobi2d_compute(lane_3_t1);
  set_at<96, 128>(whole_result, result_3);
=======
  set_at<128, 160>(lane_0_t1, t1.extract<128, 159>());
  auto result_0 = jacobi2d_compute(lane_0_t1);
  set_at<0, 32>(whole_result, result_0);
>>>>>>> origin/master
   return whole_result;
}

