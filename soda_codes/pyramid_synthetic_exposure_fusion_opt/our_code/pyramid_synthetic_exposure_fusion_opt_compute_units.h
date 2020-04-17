#pragma once

#include "conv_3x3.h"

hw_uint<32>  id_unrolled_1(hw_uint<32>& in_off_chip) {
  hw_uint<32> whole_result;
  hw_uint<32> lane_0_in_off_chip;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_in_off_chip, in_off_chip.extract<0, 31>());
  auto result_0 = id(lane_0_in_off_chip);
  set_at<0, 32>(whole_result, result_0);
   return whole_result;
}

hw_uint<32>  scale_exposure_unrolled_1(hw_uint<32>& in) {
  hw_uint<32> whole_result;
  hw_uint<32> lane_0_in;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_in, in.extract<0, 31>());
  auto result_0 = scale_exposure(lane_0_in);
  set_at<0, 32>(whole_result, result_0);
   return whole_result;
}

hw_uint<32>  exposure_weight_unrolled_1(hw_uint<32>& dark) {
  hw_uint<32> whole_result;
  hw_uint<32> lane_0_dark;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_dark, dark.extract<0, 31>());
  auto result_0 = exposure_weight(lane_0_dark);
  set_at<0, 32>(whole_result, result_0);
   return whole_result;
}

hw_uint<32>  add_unrolled_1(hw_uint<32>& dark_weights, hw_uint<32>& bright_weights) {
  hw_uint<32> whole_result;
  hw_uint<32> lane_0_dark_weights;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_dark_weights, dark_weights.extract<0, 31>());
  hw_uint<32> lane_0_bright_weights;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_bright_weights, bright_weights.extract<0, 31>());
  auto result_0 = add(lane_0_dark_weights, lane_0_bright_weights);
  set_at<0, 32>(whole_result, result_0);
   return whole_result;
}

hw_uint<32>  f_divide_unrolled_1(hw_uint<32>& dark_weights, hw_uint<32>& weight_sums) {
  hw_uint<32> whole_result;
  hw_uint<32> lane_0_dark_weights;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_dark_weights, dark_weights.extract<0, 31>());
  hw_uint<32> lane_0_weight_sums;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_weight_sums, weight_sums.extract<0, 31>());
  auto result_0 = f_divide(lane_0_dark_weights, lane_0_weight_sums);
  set_at<0, 32>(whole_result, result_0);
   return whole_result;
}

hw_uint<32>  reduce_gauss_unrolled_1(hw_uint<288>& dark) {
  hw_uint<32> whole_result;
  hw_uint<288> lane_0_dark;
  // Need offset: 0, 0
  set_at<0, 288>(lane_0_dark, dark.extract<0, 31>());
  // Need offset: 0, 1
  set_at<32, 288>(lane_0_dark, dark.extract<32, 63>());
  // Need offset: 0, 2
  set_at<64, 288>(lane_0_dark, dark.extract<64, 95>());
  // Need offset: 1, 0
  set_at<96, 288>(lane_0_dark, dark.extract<96, 127>());
  // Need offset: 1, 1
  set_at<128, 288>(lane_0_dark, dark.extract<128, 159>());
  // Need offset: 1, 2
  set_at<160, 288>(lane_0_dark, dark.extract<160, 191>());
  // Need offset: 2, 0
  set_at<192, 288>(lane_0_dark, dark.extract<192, 223>());
  // Need offset: 2, 1
  set_at<224, 288>(lane_0_dark, dark.extract<224, 255>());
  // Need offset: 2, 2
  set_at<256, 288>(lane_0_dark, dark.extract<256, 287>());
  auto result_0 = reduce_gauss(lane_0_dark);
  set_at<0, 32>(whole_result, result_0);
   return whole_result;
}

hw_uint<32>  diff_unrolled_1(hw_uint<32>& dark_gauss_ds_2, hw_uint<32>& dark_laplace_us_2) {
  hw_uint<32> whole_result;
  hw_uint<32> lane_0_dark_gauss_ds_2;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_dark_gauss_ds_2, dark_gauss_ds_2.extract<0, 31>());
  hw_uint<32> lane_0_dark_laplace_us_2;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_dark_laplace_us_2, dark_laplace_us_2.extract<0, 31>());
  auto result_0 = diff(lane_0_dark_gauss_ds_2, lane_0_dark_laplace_us_2);
  set_at<0, 32>(whole_result, result_0);
   return whole_result;
}

hw_uint<32>  merge_exposures_unrolled_1(hw_uint<32>& bright_gauss_ds_3, hw_uint<32>& dark_gauss_ds_3, hw_uint<32>& bright_weights_normed_gauss_ds_3, hw_uint<32>& dark_weights_normed_gauss_ds_3) {
  hw_uint<32> whole_result;
  hw_uint<32> lane_0_bright_gauss_ds_3;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_bright_gauss_ds_3, bright_gauss_ds_3.extract<0, 31>());
  hw_uint<32> lane_0_dark_gauss_ds_3;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_dark_gauss_ds_3, dark_gauss_ds_3.extract<0, 31>());
  hw_uint<32> lane_0_bright_weights_normed_gauss_ds_3;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_bright_weights_normed_gauss_ds_3, bright_weights_normed_gauss_ds_3.extract<0, 31>());
  hw_uint<32> lane_0_dark_weights_normed_gauss_ds_3;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_dark_weights_normed_gauss_ds_3, dark_weights_normed_gauss_ds_3.extract<0, 31>());
  auto result_0 = merge_exposures(lane_0_bright_gauss_ds_3, lane_0_dark_gauss_ds_3, lane_0_bright_weights_normed_gauss_ds_3, lane_0_dark_weights_normed_gauss_ds_3);
  set_at<0, 32>(whole_result, result_0);
   return whole_result;
}

