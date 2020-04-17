#pragma once

#include "conv_3x3.h"

  // input_update_0 unroll factor: 1
hw_uint<32>  id_unrolled_1(hw_uint<32>& input_arg) {
  hw_uint<32> whole_result;
  hw_uint<32> lane_0_input_arg;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_input_arg, input_arg.extract<0, 31>());
  auto result_0 = id(lane_0_input_arg);
  set_at<0, 32>(whole_result, result_0);
  return whole_result;
}

  // blurx_update_0 unroll factor: 1
hw_uint<32>  blurx_comp_unrolled_1(hw_uint<96>& input) {
  hw_uint<32> whole_result;
  hw_uint<96> lane_0_input;
  // Need offset: 0, 0
  set_at<0, 96>(lane_0_input, input.extract<0, 31>());
  // Need offset: 0, 1
  set_at<32, 96>(lane_0_input, input.extract<32, 63>());
  // Need offset: 0, 2
  set_at<64, 96>(lane_0_input, input.extract<64, 95>());
  auto result_0 = blurx_comp(lane_0_input);
  set_at<0, 32>(whole_result, result_0);
  return whole_result;
}

  // blur_xy_unrolled_1_update_0 unroll factor: 1
hw_uint<32>  blury_comp_unrolled_1(hw_uint<96>& blurx) {
  hw_uint<32> whole_result;
  hw_uint<96> lane_0_blurx;
  // Need offset: 0, 0
  set_at<0, 96>(lane_0_blurx, blurx.extract<0, 31>());
  // Need offset: 1, 0
  set_at<32, 96>(lane_0_blurx, blurx.extract<32, 63>());
  // Need offset: 2, 0
  set_at<64, 96>(lane_0_blurx, blurx.extract<64, 95>());
  auto result_0 = blury_comp(lane_0_blurx);
  set_at<0, 32>(whole_result, result_0);
  return whole_result;
}

