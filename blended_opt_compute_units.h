#pragma once

#include "conv_3x3.h"

  // in_update_0 unroll factor: 1
hw_uint<32>  id_unrolled_1(hw_uint<32>& in_off_chip) {
  hw_uint<32> whole_result;
  hw_uint<32> lane_0_in_off_chip;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_in_off_chip, in_off_chip.extract<0, 31>());
  auto result_0 = id(lane_0_in_off_chip);
  set_at<0, 32>(whole_result, result_0);
   return whole_result;
}

  // gauss_blur_1_update_0 unroll factor: 1
hw_uint<32>  reduce_gauss_unrolled_1(hw_uint<288>& in) {
  hw_uint<32> whole_result;
  hw_uint<288> lane_0_in;
  // Need offset: 0, 0
  set_at<0, 288>(lane_0_in, in.extract<0, 31>());
  // Need offset: 0, 1
  set_at<32, 288>(lane_0_in, in.extract<32, 63>());
  // Need offset: 0, 2
  set_at<64, 288>(lane_0_in, in.extract<64, 95>());
  // Need offset: 1, 0
  set_at<96, 288>(lane_0_in, in.extract<96, 127>());
  // Need offset: 1, 1
  set_at<128, 288>(lane_0_in, in.extract<128, 159>());
  // Need offset: 1, 2
  set_at<160, 288>(lane_0_in, in.extract<160, 191>());
  // Need offset: 2, 0
  set_at<192, 288>(lane_0_in, in.extract<192, 223>());
  // Need offset: 2, 1
  set_at<224, 288>(lane_0_in, in.extract<224, 255>());
  // Need offset: 2, 2
  set_at<256, 288>(lane_0_in, in.extract<256, 287>());
  auto result_0 = reduce_gauss(lane_0_in);
  set_at<0, 32>(whole_result, result_0);
   return whole_result;
}

  // laplace_diff_3_update_0 unroll factor: 1
hw_uint<32>  diff_unrolled_1(hw_uint<32>& gauss_ds_3, hw_uint<32>& laplace_us_3) {
  hw_uint<32> whole_result;
  hw_uint<32> lane_0_gauss_ds_3;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_gauss_ds_3, gauss_ds_3.extract<0, 31>());
  hw_uint<32> lane_0_laplace_us_3;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_laplace_us_3, laplace_us_3.extract<0, 31>());
  auto result_0 = diff(lane_0_gauss_ds_3, lane_0_laplace_us_3);
  set_at<0, 32>(whole_result, result_0);
   return whole_result;
}

  // blended_update_0 unroll factor: 1
hw_uint<32>  blend_levels_unrolled_1(hw_uint<32>& blend_us_laplace_diff_0, hw_uint<32>& blend_us_laplace_diff_1, hw_uint<32>& blend_us_laplace_diff_2, hw_uint<32>& blend_us_laplace_diff_3) {
  hw_uint<32> whole_result;
  hw_uint<32> lane_0_blend_us_laplace_diff_0;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_blend_us_laplace_diff_0, blend_us_laplace_diff_0.extract<0, 31>());
  hw_uint<32> lane_0_blend_us_laplace_diff_1;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_blend_us_laplace_diff_1, blend_us_laplace_diff_1.extract<0, 31>());
  hw_uint<32> lane_0_blend_us_laplace_diff_2;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_blend_us_laplace_diff_2, blend_us_laplace_diff_2.extract<0, 31>());
  hw_uint<32> lane_0_blend_us_laplace_diff_3;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_blend_us_laplace_diff_3, blend_us_laplace_diff_3.extract<0, 31>());
  auto result_0 = blend_levels(lane_0_blend_us_laplace_diff_0, lane_0_blend_us_laplace_diff_1, lane_0_blend_us_laplace_diff_2, lane_0_blend_us_laplace_diff_3);
  set_at<0, 32>(whole_result, result_0);
   return whole_result;
}

