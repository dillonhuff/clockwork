#pragma once

#include "conv_3x3.h"

// Generated compute units...


// Compute unit banks...
  // in_off_chip0_update_0 unroll factor: 1
hw_uint<16>  id_unrolled_1(hw_uint<16>& in_off_chip0_oc) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_0_in_off_chip0_oc, in_off_chip0_oc.extract<0, 15>());
  auto result_0 = id(lane_0_in_off_chip0_oc);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // in_off_chip0_oc_in_off_chip1_oc_update_0 unroll factor: 2
hw_uint<32>  interleave_unrolled_2(hw_uint<32>& in_off_chip0, hw_uint<32>& in_off_chip1, int d0) {
  hw_uint<32> whole_result;

  hw_uint<16> lane_0_in_off_chip0;
  set_at<0, 16, 16>(lane_0_in_off_chip0, in_off_chip0.extract<0, 15>());
  hw_uint<16> lane_0_in_off_chip1;
  set_at<0, 16, 16>(lane_0_in_off_chip1, in_off_chip1.extract<0, 15>());
  auto result_0 = interleave(lane_0_in_off_chip0, lane_0_in_off_chip1, d0);
  set_at<0, 32, 16>(whole_result, result_0);

  hw_uint<16> lane_1_in_off_chip0;
  set_at<0, 16, 16>(lane_1_in_off_chip0, in_off_chip0.extract<16, 31>());
  hw_uint<16> lane_1_in_off_chip1;
  set_at<0, 16, 16>(lane_1_in_off_chip1, in_off_chip1.extract<16, 31>());
  auto result_1 = interleave(lane_1_in_off_chip0, lane_1_in_off_chip1, d0);
  set_at<16, 32, 16>(whole_result, result_1);
  return whole_result;
}

  // in_update_0 unroll factor: 2
hw_uint<32>  id_unrolled_2(hw_uint<32>& in_off_chip0_oc_in_off_chip1_oc) {
  hw_uint<32> whole_result;

  hw_uint<16> lane_0_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_0_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<0, 15>());
  auto result_0 = id(lane_0_in_off_chip0_oc_in_off_chip1_oc);
  set_at<0, 32, 16>(whole_result, result_0);

  hw_uint<16> lane_1_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_1_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<16, 31>());
  auto result_1 = id(lane_1_in_off_chip0_oc_in_off_chip1_oc);
  set_at<16, 32, 16>(whole_result, result_1);
  return whole_result;
}

  // dark_update_0 unroll factor: 2
hw_uint<32>  scale_exposure_unrolled_2(hw_uint<32>& in) {
  hw_uint<32> whole_result;

  hw_uint<16> lane_0_in;
  set_at<0, 16, 16>(lane_0_in, in.extract<0, 15>());
  auto result_0 = scale_exposure(lane_0_in);
  set_at<0, 32, 16>(whole_result, result_0);

  hw_uint<16> lane_1_in;
  set_at<0, 16, 16>(lane_1_in, in.extract<16, 31>());
  auto result_1 = scale_exposure(lane_1_in);
  set_at<16, 32, 16>(whole_result, result_1);
  return whole_result;
}

  // dark_weights_update_0 unroll factor: 2
hw_uint<32>  exposure_weight_unrolled_2(hw_uint<32>& dark) {
  hw_uint<32> whole_result;

  hw_uint<16> lane_0_dark;
  set_at<0, 16, 16>(lane_0_dark, dark.extract<0, 15>());
  auto result_0 = exposure_weight(lane_0_dark);
  set_at<0, 32, 16>(whole_result, result_0);

  hw_uint<16> lane_1_dark;
  set_at<0, 16, 16>(lane_1_dark, dark.extract<16, 31>());
  auto result_1 = exposure_weight(lane_1_dark);
  set_at<16, 32, 16>(whole_result, result_1);
  return whole_result;
}

  // weight_sums_update_0 unroll factor: 2
hw_uint<32>  add_unrolled_2(hw_uint<32>& dark_weights, hw_uint<32>& bright_weights) {
  hw_uint<32> whole_result;

  hw_uint<16> lane_0_dark_weights;
  set_at<0, 16, 16>(lane_0_dark_weights, dark_weights.extract<0, 15>());
  hw_uint<16> lane_0_bright_weights;
  set_at<0, 16, 16>(lane_0_bright_weights, bright_weights.extract<0, 15>());
  auto result_0 = add(lane_0_dark_weights, lane_0_bright_weights);
  set_at<0, 32, 16>(whole_result, result_0);

  hw_uint<16> lane_1_dark_weights;
  set_at<0, 16, 16>(lane_1_dark_weights, dark_weights.extract<16, 31>());
  hw_uint<16> lane_1_bright_weights;
  set_at<0, 16, 16>(lane_1_bright_weights, bright_weights.extract<16, 31>());
  auto result_1 = add(lane_1_dark_weights, lane_1_bright_weights);
  set_at<16, 32, 16>(whole_result, result_1);
  return whole_result;
}

  // dark_weights_normed_update_0 unroll factor: 2
hw_uint<32>  f_divide_unrolled_2(hw_uint<32>& dark_weights, hw_uint<32>& weight_sums) {
  hw_uint<32> whole_result;

  hw_uint<16> lane_0_dark_weights;
  set_at<0, 16, 16>(lane_0_dark_weights, dark_weights.extract<0, 15>());
  hw_uint<16> lane_0_weight_sums;
  set_at<0, 16, 16>(lane_0_weight_sums, weight_sums.extract<0, 15>());
  auto result_0 = f_divide(lane_0_dark_weights, lane_0_weight_sums);
  set_at<0, 32, 16>(whole_result, result_0);

  hw_uint<16> lane_1_dark_weights;
  set_at<0, 16, 16>(lane_1_dark_weights, dark_weights.extract<16, 31>());
  hw_uint<16> lane_1_weight_sums;
  set_at<0, 16, 16>(lane_1_weight_sums, weight_sums.extract<16, 31>());
  auto result_1 = f_divide(lane_1_dark_weights, lane_1_weight_sums);
  set_at<16, 32, 16>(whole_result, result_1);
  return whole_result;
}

  // dark_gauss_blur_1_update_0 unroll factor: 2
hw_uint<32>  reduce_gauss_unrolled_2(hw_uint<288>& dark) {
  hw_uint<32> whole_result;

  hw_uint<144> lane_0_dark;
  set_at<0, 144, 144>(lane_0_dark, dark.extract<0, 143>());
  auto result_0 = reduce_gauss(lane_0_dark);
  set_at<0, 32, 16>(whole_result, result_0);

  hw_uint<144> lane_1_dark;
  set_at<0, 144, 144>(lane_1_dark, dark.extract<144, 287>());
  auto result_1 = reduce_gauss(lane_1_dark);
  set_at<16, 32, 16>(whole_result, result_1);
  return whole_result;
}

  // dark_gauss_blur_2_update_0 unroll factor: 1
hw_uint<16>  reduce_gauss_unrolled_1(hw_uint<144>& dark_gauss_ds_1) {
  hw_uint<16> whole_result;

  hw_uint<144> lane_0_dark_gauss_ds_1;
  set_at<0, 144, 144>(lane_0_dark_gauss_ds_1, dark_gauss_ds_1.extract<0, 143>());
  auto result_0 = reduce_gauss(lane_0_dark_gauss_ds_1);
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

  // dark_laplace_diff_0_update_0 unroll factor: 2
hw_uint<32>  diff_unrolled_2(hw_uint<32>& dark, hw_uint<32>& dark_laplace_us_0) {
  hw_uint<32> whole_result;

  hw_uint<16> lane_0_dark;
  set_at<0, 16, 16>(lane_0_dark, dark.extract<0, 15>());
  hw_uint<16> lane_0_dark_laplace_us_0;
  set_at<0, 16, 16>(lane_0_dark_laplace_us_0, dark_laplace_us_0.extract<0, 15>());
  auto result_0 = diff(lane_0_dark, lane_0_dark_laplace_us_0);
  set_at<0, 32, 16>(whole_result, result_0);

  hw_uint<16> lane_1_dark;
  set_at<0, 16, 16>(lane_1_dark, dark.extract<16, 31>());
  hw_uint<16> lane_1_dark_laplace_us_0;
  set_at<0, 16, 16>(lane_1_dark_laplace_us_0, dark_laplace_us_0.extract<16, 31>());
  auto result_1 = diff(lane_1_dark, lane_1_dark_laplace_us_0);
  set_at<16, 32, 16>(whole_result, result_1);
  return whole_result;
}

  // fused_level_3_update_0 unroll factor: 1
hw_uint<16>  merge_exposures_unrolled_1(hw_uint<16>& bright_gauss_ds_3, hw_uint<16>& dark_gauss_ds_3, hw_uint<16>& bright_weights_normed_gauss_ds_3, hw_uint<16>& dark_weights_normed_gauss_ds_3) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_bright_gauss_ds_3;
  set_at<0, 16, 16>(lane_0_bright_gauss_ds_3, bright_gauss_ds_3.extract<0, 15>());
  hw_uint<16> lane_0_dark_gauss_ds_3;
  set_at<0, 16, 16>(lane_0_dark_gauss_ds_3, dark_gauss_ds_3.extract<0, 15>());
  hw_uint<16> lane_0_bright_weights_normed_gauss_ds_3;
  set_at<0, 16, 16>(lane_0_bright_weights_normed_gauss_ds_3, bright_weights_normed_gauss_ds_3.extract<0, 15>());
  hw_uint<16> lane_0_dark_weights_normed_gauss_ds_3;
  set_at<0, 16, 16>(lane_0_dark_weights_normed_gauss_ds_3, dark_weights_normed_gauss_ds_3.extract<0, 15>());
  auto result_0 = merge_exposures(lane_0_bright_gauss_ds_3, lane_0_dark_gauss_ds_3, lane_0_bright_weights_normed_gauss_ds_3, lane_0_dark_weights_normed_gauss_ds_3);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // fused_level_0_update_0 unroll factor: 2
hw_uint<32>  merge_exposures_unrolled_2(hw_uint<32>& bright_laplace_diff_0, hw_uint<32>& dark_laplace_diff_0, hw_uint<32>& bright_weights_normed, hw_uint<32>& dark_weights_normed) {
  hw_uint<32> whole_result;

  hw_uint<16> lane_0_bright_laplace_diff_0;
  set_at<0, 16, 16>(lane_0_bright_laplace_diff_0, bright_laplace_diff_0.extract<0, 15>());
  hw_uint<16> lane_0_dark_laplace_diff_0;
  set_at<0, 16, 16>(lane_0_dark_laplace_diff_0, dark_laplace_diff_0.extract<0, 15>());
  hw_uint<16> lane_0_bright_weights_normed;
  set_at<0, 16, 16>(lane_0_bright_weights_normed, bright_weights_normed.extract<0, 15>());
  hw_uint<16> lane_0_dark_weights_normed;
  set_at<0, 16, 16>(lane_0_dark_weights_normed, dark_weights_normed.extract<0, 15>());
  auto result_0 = merge_exposures(lane_0_bright_laplace_diff_0, lane_0_dark_laplace_diff_0, lane_0_bright_weights_normed, lane_0_dark_weights_normed);
  set_at<0, 32, 16>(whole_result, result_0);

  hw_uint<16> lane_1_bright_laplace_diff_0;
  set_at<0, 16, 16>(lane_1_bright_laplace_diff_0, bright_laplace_diff_0.extract<16, 31>());
  hw_uint<16> lane_1_dark_laplace_diff_0;
  set_at<0, 16, 16>(lane_1_dark_laplace_diff_0, dark_laplace_diff_0.extract<16, 31>());
  hw_uint<16> lane_1_bright_weights_normed;
  set_at<0, 16, 16>(lane_1_bright_weights_normed, bright_weights_normed.extract<16, 31>());
  hw_uint<16> lane_1_dark_weights_normed;
  set_at<0, 16, 16>(lane_1_dark_weights_normed, dark_weights_normed.extract<16, 31>());
  auto result_1 = merge_exposures(lane_1_bright_laplace_diff_0, lane_1_dark_laplace_diff_0, lane_1_bright_weights_normed, lane_1_dark_weights_normed);
  set_at<16, 32, 16>(whole_result, result_1);
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

