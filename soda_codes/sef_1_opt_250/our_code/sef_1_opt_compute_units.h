#pragma once

#include "conv_3x3.h"

// Generated compute units...


// Compute unit banks...
  // in_update_0 unroll factor: 1
hw_uint<16>  id_unrolled_1(hw_uint<16>& in_off_chip) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_in_off_chip;
  set_at<0, 16, 16>(lane_0_in_off_chip, in_off_chip.extract<0, 15>());
  auto result_0 = id(lane_0_in_off_chip);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // dark_update_0 unroll factor: 1
hw_uint<16>  scale_exposure_unrolled_1(hw_uint<16>& in) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_in;
  set_at<0, 16, 16>(lane_0_in, in.extract<0, 15>());
  auto result_0 = scale_exposure(lane_0_in);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // dark_weights_update_0 unroll factor: 1
hw_uint<16>  psef_weight_unrolled_1(hw_uint<16>& dark) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_dark;
  set_at<0, 16, 16>(lane_0_dark, dark.extract<0, 15>());
  auto result_0 = psef_weight(lane_0_dark);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // dark_weights_normed_update_0 unroll factor: 1
hw_uint<16>  psef_normalize_weights_unrolled_1(hw_uint<16>& dark_weights) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_dark_weights;
  set_at<0, 16, 16>(lane_0_dark_weights, dark_weights.extract<0, 15>());
  auto result_0 = psef_normalize_weights(lane_0_dark_weights);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // dark_gauss_blur_1_update_0 unroll factor: 1
hw_uint<16>  reduce_gauss_unrolled_1(hw_uint<144>& dark) {
  hw_uint<16> whole_result;

  hw_uint<144> lane_0_dark;
  set_at<0, 144, 144>(lane_0_dark, dark.extract<0, 143>());
  auto result_0 = reduce_gauss(lane_0_dark);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // dark_laplace_diff_2_update_0 unroll factor: 1
hw_uint<16>  diff_unrolled_1(hw_uint<16>& dark_gauss_ds_2, hw_uint<16>& dark_laplace_us_2) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_dark_gauss_ds_2;
  set_at<0, 16, 16>(lane_0_dark_gauss_ds_2, dark_gauss_ds_2.extract<0, 15>());
  hw_uint<16> lane_0_dark_laplace_us_2;
  set_at<0, 16, 16>(lane_0_dark_laplace_us_2, dark_laplace_us_2.extract<0, 15>());
  auto result_0 = diff(lane_0_dark_gauss_ds_2, lane_0_dark_laplace_us_2);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // fused_level_3_update_0 unroll factor: 1
hw_uint<16>  psef_weighted_merge_unrolled_1(hw_uint<16>& bright_gauss_ds_3, hw_uint<16>& dark_gauss_ds_3, hw_uint<16>& bright_weights_normed_gauss_ds_3, hw_uint<16>& dark_weights_normed_gauss_ds_3) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_bright_gauss_ds_3;
  set_at<0, 16, 16>(lane_0_bright_gauss_ds_3, bright_gauss_ds_3.extract<0, 15>());
  hw_uint<16> lane_0_dark_gauss_ds_3;
  set_at<0, 16, 16>(lane_0_dark_gauss_ds_3, dark_gauss_ds_3.extract<0, 15>());
  hw_uint<16> lane_0_bright_weights_normed_gauss_ds_3;
  set_at<0, 16, 16>(lane_0_bright_weights_normed_gauss_ds_3, bright_weights_normed_gauss_ds_3.extract<0, 15>());
  hw_uint<16> lane_0_dark_weights_normed_gauss_ds_3;
  set_at<0, 16, 16>(lane_0_dark_weights_normed_gauss_ds_3, dark_weights_normed_gauss_ds_3.extract<0, 15>());
  auto result_0 = psef_weighted_merge(lane_0_bright_gauss_ds_3, lane_0_dark_gauss_ds_3, lane_0_bright_weights_normed_gauss_ds_3, lane_0_dark_weights_normed_gauss_ds_3);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // final_merged_2_update_0 unroll factor: 1
hw_uint<16>  add_unrolled_1(hw_uint<16>& fused_level_3, hw_uint<16>& fused_level_2) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_fused_level_3;
  set_at<0, 16, 16>(lane_0_fused_level_3, fused_level_3.extract<0, 15>());
  hw_uint<16> lane_0_fused_level_2;
  set_at<0, 16, 16>(lane_0_fused_level_2, fused_level_2.extract<0, 15>());
  auto result_0 = add(lane_0_fused_level_3, lane_0_fused_level_2);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

