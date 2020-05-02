#pragma once

#include "conv_3x3.h"

// Generated compute units...


// Compute unit banks...
  // in_update_0 unroll factor: 1
hw_uint<32>  id_unrolled_1(hw_uint<32>& in_off_chip) {
  hw_uint<32> whole_result;

  hw_uint<32> lane_0_in_off_chip;
  set_at<0, 32, 32>(lane_0_in_off_chip, in_off_chip.extract<0, 31>());
  auto result_0 = id(lane_0_in_off_chip);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // dark_update_0 unroll factor: 1
hw_uint<32>  scale_exposure_unrolled_1(hw_uint<32>& in) {
  hw_uint<32> whole_result;

  hw_uint<32> lane_0_in;
  set_at<0, 32, 32>(lane_0_in, in.extract<0, 31>());
  auto result_0 = scale_exposure(lane_0_in);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // dark_weights_update_0 unroll factor: 1
hw_uint<32>  exposure_weight_unrolled_1(hw_uint<32>& dark) {
  hw_uint<32> whole_result;

  hw_uint<32> lane_0_dark;
  set_at<0, 32, 32>(lane_0_dark, dark.extract<0, 31>());
  auto result_0 = exposure_weight(lane_0_dark);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // weight_sums_update_0 unroll factor: 1
hw_uint<32>  add_unrolled_1(hw_uint<32>& dark_weights, hw_uint<32>& bright_weights) {
  hw_uint<32> whole_result;

  hw_uint<32> lane_0_dark_weights;
  set_at<0, 32, 32>(lane_0_dark_weights, dark_weights.extract<0, 31>());
  hw_uint<32> lane_0_bright_weights;
  set_at<0, 32, 32>(lane_0_bright_weights, bright_weights.extract<0, 31>());
  auto result_0 = add(lane_0_dark_weights, lane_0_bright_weights);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // dark_weights_normed_update_0 unroll factor: 1
hw_uint<32>  f_divide_unrolled_1(hw_uint<32>& dark_weights, hw_uint<32>& weight_sums) {
  hw_uint<32> whole_result;

  hw_uint<32> lane_0_dark_weights;
  set_at<0, 32, 32>(lane_0_dark_weights, dark_weights.extract<0, 31>());
  hw_uint<32> lane_0_weight_sums;
  set_at<0, 32, 32>(lane_0_weight_sums, weight_sums.extract<0, 31>());
  auto result_0 = f_divide(lane_0_dark_weights, lane_0_weight_sums);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // dark_gauss_blur_1_update_0 unroll factor: 1
hw_uint<32>  reduce_gauss_unrolled_1(hw_uint<288>& dark) {
  hw_uint<32> whole_result;

  hw_uint<288> lane_0_dark;
  set_at<0, 288, 288>(lane_0_dark, dark.extract<0, 287>());
  auto result_0 = reduce_gauss(lane_0_dark);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // dark_laplace_diff_2_update_0 unroll factor: 1
hw_uint<32>  diff_unrolled_1(hw_uint<32>& dark_gauss_ds_2, hw_uint<32>& dark_laplace_us_2) {
  hw_uint<32> whole_result;

  hw_uint<32> lane_0_dark_gauss_ds_2;
  set_at<0, 32, 32>(lane_0_dark_gauss_ds_2, dark_gauss_ds_2.extract<0, 31>());
  hw_uint<32> lane_0_dark_laplace_us_2;
  set_at<0, 32, 32>(lane_0_dark_laplace_us_2, dark_laplace_us_2.extract<0, 31>());
  auto result_0 = diff(lane_0_dark_gauss_ds_2, lane_0_dark_laplace_us_2);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // fused_level_3_update_0 unroll factor: 1
hw_uint<32>  merge_exposures_unrolled_1(hw_uint<32>& bright_gauss_ds_3, hw_uint<32>& dark_gauss_ds_3, hw_uint<32>& bright_weights_normed_gauss_ds_3, hw_uint<32>& dark_weights_normed_gauss_ds_3) {
  hw_uint<32> whole_result;

  hw_uint<32> lane_0_bright_gauss_ds_3;
  set_at<0, 32, 32>(lane_0_bright_gauss_ds_3, bright_gauss_ds_3.extract<0, 31>());
  hw_uint<32> lane_0_dark_gauss_ds_3;
  set_at<0, 32, 32>(lane_0_dark_gauss_ds_3, dark_gauss_ds_3.extract<0, 31>());
  hw_uint<32> lane_0_bright_weights_normed_gauss_ds_3;
  set_at<0, 32, 32>(lane_0_bright_weights_normed_gauss_ds_3, bright_weights_normed_gauss_ds_3.extract<0, 31>());
  hw_uint<32> lane_0_dark_weights_normed_gauss_ds_3;
  set_at<0, 32, 32>(lane_0_dark_weights_normed_gauss_ds_3, dark_weights_normed_gauss_ds_3.extract<0, 31>());
  auto result_0 = merge_exposures(lane_0_bright_gauss_ds_3, lane_0_dark_gauss_ds_3, lane_0_bright_weights_normed_gauss_ds_3, lane_0_dark_weights_normed_gauss_ds_3);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

