#pragma once

#include "conv_3x3.h"

// Generated compute units...


// Compute unit banks...
  // B_update_0 unroll factor: 4
hw_uint<128>  id_unrolled_4(hw_uint<128>& B_off) {
  hw_uint<128> whole_result;

  hw_uint<32> lane_0_B_off;
  set_at<0, 32, 32>(lane_0_B_off, B_off.extract<0, 31>());
  auto result_0 = id(lane_0_B_off);
  set_at<0, 128, 32>(whole_result, result_0);

  hw_uint<32> lane_1_B_off;
  set_at<0, 32, 32>(lane_1_B_off, B_off.extract<32, 63>());
  auto result_1 = id(lane_1_B_off);
  set_at<32, 128, 32>(whole_result, result_1);

  hw_uint<32> lane_2_B_off;
  set_at<0, 32, 32>(lane_2_B_off, B_off.extract<64, 95>());
  auto result_2 = id(lane_2_B_off);
  set_at<64, 128, 32>(whole_result, result_2);

  hw_uint<32> lane_3_B_off;
  set_at<0, 32, 32>(lane_3_B_off, B_off.extract<96, 127>());
  auto result_3 = id(lane_3_B_off);
  set_at<96, 128, 32>(whole_result, result_3);
  return whole_result;
}

  // A_update_0 unroll factor: 1
hw_uint<32>  id_unrolled_1(hw_uint<32>& A_off) {
  hw_uint<32> whole_result;

  hw_uint<32> lane_0_A_off;
  set_at<0, 32, 32>(lane_0_A_off, A_off.extract<0, 31>());
  auto result_0 = id(lane_0_A_off);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // C_update_0 unroll factor: 1
hw_uint<32>  diff_unrolled_1(hw_uint<32>& A, hw_uint<32>& B) {
  hw_uint<32> whole_result;

  hw_uint<32> lane_0_A;
  set_at<0, 32, 32>(lane_0_A, A.extract<0, 31>());
  hw_uint<32> lane_0_B;
  set_at<0, 32, 32>(lane_0_B, B.extract<0, 31>());
  auto result_0 = diff(lane_0_A, lane_0_B);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

