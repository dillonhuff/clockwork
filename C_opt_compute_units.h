#pragma once

#include "conv_3x3.h"

hw_uint<32>  id_unrolled_1(hw_uint<32>& B_off) {
  hw_uint<32> whole_result;
  hw_uint<32> lane_0_B_off;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_B_off, B_off.extract<0, 31>());
  auto result_0 = id(lane_0_B_off);
  set_at<0, 32>(whole_result, result_0);
   return whole_result;
}

hw_uint<32>  diff_unrolled_1(hw_uint<32>& A, hw_uint<32>& B) {
  hw_uint<32> whole_result;
  hw_uint<32> lane_0_A;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_A, A.extract<0, 31>());
  hw_uint<32> lane_0_B;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_B, B.extract<0, 31>());
  auto result_0 = diff(lane_0_A, lane_0_B);
  set_at<0, 32>(whole_result, result_0);
   return whole_result;
}

