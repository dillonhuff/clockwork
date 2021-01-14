#pragma once

#include "conv_3x3.h"

// Generated compute units...


// Compute unit banks...
  // in_update_0 unroll factor: 4
hw_uint<64>  id_unrolled_4(hw_uint<64>& in_off_chip) {
  hw_uint<64> whole_result;

  hw_uint<16> lane_0_in_off_chip;
  set_at<0, 16, 16>(lane_0_in_off_chip, in_off_chip.extract<0, 15>());
  auto result_0 = id(lane_0_in_off_chip);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<16> lane_1_in_off_chip;
  set_at<0, 16, 16>(lane_1_in_off_chip, in_off_chip.extract<16, 31>());
  auto result_1 = id(lane_1_in_off_chip);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<16> lane_2_in_off_chip;
  set_at<0, 16, 16>(lane_2_in_off_chip, in_off_chip.extract<32, 47>());
  auto result_2 = id(lane_2_in_off_chip);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<16> lane_3_in_off_chip;
  set_at<0, 16, 16>(lane_3_in_off_chip, in_off_chip.extract<48, 63>());
  auto result_3 = id(lane_3_in_off_chip);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // dark_update_0 unroll factor: 4
hw_uint<64>  scale_exposure_unrolled_4(hw_uint<64>& in) {
  hw_uint<64> whole_result;

  hw_uint<16> lane_0_in;
  set_at<0, 16, 16>(lane_0_in, in.extract<0, 15>());
  auto result_0 = scale_exposure(lane_0_in);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<16> lane_1_in;
  set_at<0, 16, 16>(lane_1_in, in.extract<16, 31>());
  auto result_1 = scale_exposure(lane_1_in);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<16> lane_2_in;
  set_at<0, 16, 16>(lane_2_in, in.extract<32, 47>());
  auto result_2 = scale_exposure(lane_2_in);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<16> lane_3_in;
  set_at<0, 16, 16>(lane_3_in, in.extract<48, 63>());
  auto result_3 = scale_exposure(lane_3_in);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // dark_weights_update_0 unroll factor: 4
hw_uint<64>  psef_weight_unrolled_4(hw_uint<64>& dark) {
  hw_uint<64> whole_result;

  hw_uint<16> lane_0_dark;
  set_at<0, 16, 16>(lane_0_dark, dark.extract<0, 15>());
  auto result_0 = psef_weight(lane_0_dark);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<16> lane_1_dark;
  set_at<0, 16, 16>(lane_1_dark, dark.extract<16, 31>());
  auto result_1 = psef_weight(lane_1_dark);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<16> lane_2_dark;
  set_at<0, 16, 16>(lane_2_dark, dark.extract<32, 47>());
  auto result_2 = psef_weight(lane_2_dark);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<16> lane_3_dark;
  set_at<0, 16, 16>(lane_3_dark, dark.extract<48, 63>());
  auto result_3 = psef_weight(lane_3_dark);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // dark_weights_normed_update_0 unroll factor: 4
hw_uint<64>  psef_normalize_weights_unrolled_4(hw_uint<64>& dark_weights) {
  hw_uint<64> whole_result;

  hw_uint<16> lane_0_dark_weights;
  set_at<0, 16, 16>(lane_0_dark_weights, dark_weights.extract<0, 15>());
  auto result_0 = psef_normalize_weights(lane_0_dark_weights);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<16> lane_1_dark_weights;
  set_at<0, 16, 16>(lane_1_dark_weights, dark_weights.extract<16, 31>());
  auto result_1 = psef_normalize_weights(lane_1_dark_weights);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<16> lane_2_dark_weights;
  set_at<0, 16, 16>(lane_2_dark_weights, dark_weights.extract<32, 47>());
  auto result_2 = psef_normalize_weights(lane_2_dark_weights);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<16> lane_3_dark_weights;
  set_at<0, 16, 16>(lane_3_dark_weights, dark_weights.extract<48, 63>());
  auto result_3 = psef_normalize_weights(lane_3_dark_weights);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // dark_gauss_blur_1_update_0 unroll factor: 4
hw_uint<64>  reduce_gauss_unrolled_4(hw_uint<576>& dark) {
  hw_uint<64> whole_result;

  hw_uint<144> lane_0_dark;
  set_at<0, 144, 144>(lane_0_dark, dark.extract<0, 143>());
  auto result_0 = reduce_gauss(lane_0_dark);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<144> lane_1_dark;
  set_at<0, 144, 144>(lane_1_dark, dark.extract<144, 287>());
  auto result_1 = reduce_gauss(lane_1_dark);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<144> lane_2_dark;
  set_at<0, 144, 144>(lane_2_dark, dark.extract<288, 431>());
  auto result_2 = reduce_gauss(lane_2_dark);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<144> lane_3_dark;
  set_at<0, 144, 144>(lane_3_dark, dark.extract<432, 575>());
  auto result_3 = reduce_gauss(lane_3_dark);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // dark_gauss_ds_1_update_0 unroll factor: 2
hw_uint<32>  id_unrolled_2(hw_uint<32>& dark_gauss_blur_1) {
  hw_uint<32> whole_result;

  hw_uint<16> lane_0_dark_gauss_blur_1;
  set_at<0, 16, 16>(lane_0_dark_gauss_blur_1, dark_gauss_blur_1.extract<0, 15>());
  auto result_0 = id(lane_0_dark_gauss_blur_1);
  set_at<0, 32, 16>(whole_result, result_0);

  hw_uint<16> lane_1_dark_gauss_blur_1;
  set_at<0, 16, 16>(lane_1_dark_gauss_blur_1, dark_gauss_blur_1.extract<16, 31>());
  auto result_1 = id(lane_1_dark_gauss_blur_1);
  set_at<16, 32, 16>(whole_result, result_1);
  return whole_result;
}

  // dark_gauss_blur_2_update_0 unroll factor: 2
hw_uint<32>  reduce_gauss_unrolled_2(hw_uint<288>& dark_gauss_ds_1) {
  hw_uint<32> whole_result;

  hw_uint<144> lane_0_dark_gauss_ds_1;
  set_at<0, 144, 144>(lane_0_dark_gauss_ds_1, dark_gauss_ds_1.extract<0, 143>());
  auto result_0 = reduce_gauss(lane_0_dark_gauss_ds_1);
  set_at<0, 32, 16>(whole_result, result_0);

  hw_uint<144> lane_1_dark_gauss_ds_1;
  set_at<0, 144, 144>(lane_1_dark_gauss_ds_1, dark_gauss_ds_1.extract<144, 287>());
  auto result_1 = reduce_gauss(lane_1_dark_gauss_ds_1);
  set_at<16, 32, 16>(whole_result, result_1);
  return whole_result;
}

  // dark_gauss_ds_2_update_0 unroll factor: 1
hw_uint<16>  id_unrolled_1(hw_uint<16>& dark_gauss_blur_2) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_dark_gauss_blur_2;
  set_at<0, 16, 16>(lane_0_dark_gauss_blur_2, dark_gauss_blur_2.extract<0, 15>());
  auto result_0 = id(lane_0_dark_gauss_blur_2);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // dark_gauss_blur_3_update_0 unroll factor: 1
hw_uint<16>  reduce_gauss_unrolled_1(hw_uint<144>& dark_gauss_ds_2) {
  hw_uint<16> whole_result;

  hw_uint<144> lane_0_dark_gauss_ds_2;
  set_at<0, 144, 144>(lane_0_dark_gauss_ds_2, dark_gauss_ds_2.extract<0, 143>());
  auto result_0 = reduce_gauss(lane_0_dark_gauss_ds_2);
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

  // dark_laplace_diff_1_update_0 unroll factor: 2
hw_uint<32>  diff_unrolled_2(hw_uint<32>& dark_gauss_ds_1, hw_uint<32>& dark_laplace_us_1) {
  hw_uint<32> whole_result;

  hw_uint<16> lane_0_dark_gauss_ds_1;
  set_at<0, 16, 16>(lane_0_dark_gauss_ds_1, dark_gauss_ds_1.extract<0, 15>());
  hw_uint<16> lane_0_dark_laplace_us_1;
  set_at<0, 16, 16>(lane_0_dark_laplace_us_1, dark_laplace_us_1.extract<0, 15>());
  auto result_0 = diff(lane_0_dark_gauss_ds_1, lane_0_dark_laplace_us_1);
  set_at<0, 32, 16>(whole_result, result_0);

  hw_uint<16> lane_1_dark_gauss_ds_1;
  set_at<0, 16, 16>(lane_1_dark_gauss_ds_1, dark_gauss_ds_1.extract<16, 31>());
  hw_uint<16> lane_1_dark_laplace_us_1;
  set_at<0, 16, 16>(lane_1_dark_laplace_us_1, dark_laplace_us_1.extract<16, 31>());
  auto result_1 = diff(lane_1_dark_gauss_ds_1, lane_1_dark_laplace_us_1);
  set_at<16, 32, 16>(whole_result, result_1);
  return whole_result;
}

  // dark_laplace_diff_0_update_0 unroll factor: 4
hw_uint<64>  diff_unrolled_4(hw_uint<64>& dark, hw_uint<64>& dark_laplace_us_0) {
  hw_uint<64> whole_result;

  hw_uint<16> lane_0_dark;
  set_at<0, 16, 16>(lane_0_dark, dark.extract<0, 15>());
  hw_uint<16> lane_0_dark_laplace_us_0;
  set_at<0, 16, 16>(lane_0_dark_laplace_us_0, dark_laplace_us_0.extract<0, 15>());
  auto result_0 = diff(lane_0_dark, lane_0_dark_laplace_us_0);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<16> lane_1_dark;
  set_at<0, 16, 16>(lane_1_dark, dark.extract<16, 31>());
  hw_uint<16> lane_1_dark_laplace_us_0;
  set_at<0, 16, 16>(lane_1_dark_laplace_us_0, dark_laplace_us_0.extract<16, 31>());
  auto result_1 = diff(lane_1_dark, lane_1_dark_laplace_us_0);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<16> lane_2_dark;
  set_at<0, 16, 16>(lane_2_dark, dark.extract<32, 47>());
  hw_uint<16> lane_2_dark_laplace_us_0;
  set_at<0, 16, 16>(lane_2_dark_laplace_us_0, dark_laplace_us_0.extract<32, 47>());
  auto result_2 = diff(lane_2_dark, lane_2_dark_laplace_us_0);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<16> lane_3_dark;
  set_at<0, 16, 16>(lane_3_dark, dark.extract<48, 63>());
  hw_uint<16> lane_3_dark_laplace_us_0;
  set_at<0, 16, 16>(lane_3_dark_laplace_us_0, dark_laplace_us_0.extract<48, 63>());
  auto result_3 = diff(lane_3_dark, lane_3_dark_laplace_us_0);
  set_at<48, 64, 16>(whole_result, result_3);
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

  // fused_level_1_update_0 unroll factor: 2
hw_uint<32>  psef_weighted_merge_unrolled_2(hw_uint<32>& bright_laplace_diff_1, hw_uint<32>& dark_laplace_diff_1, hw_uint<32>& bright_weights_normed_gauss_ds_1, hw_uint<32>& dark_weights_normed_gauss_ds_1) {
  hw_uint<32> whole_result;

  hw_uint<16> lane_0_bright_laplace_diff_1;
  set_at<0, 16, 16>(lane_0_bright_laplace_diff_1, bright_laplace_diff_1.extract<0, 15>());
  hw_uint<16> lane_0_dark_laplace_diff_1;
  set_at<0, 16, 16>(lane_0_dark_laplace_diff_1, dark_laplace_diff_1.extract<0, 15>());
  hw_uint<16> lane_0_bright_weights_normed_gauss_ds_1;
  set_at<0, 16, 16>(lane_0_bright_weights_normed_gauss_ds_1, bright_weights_normed_gauss_ds_1.extract<0, 15>());
  hw_uint<16> lane_0_dark_weights_normed_gauss_ds_1;
  set_at<0, 16, 16>(lane_0_dark_weights_normed_gauss_ds_1, dark_weights_normed_gauss_ds_1.extract<0, 15>());
  auto result_0 = psef_weighted_merge(lane_0_bright_laplace_diff_1, lane_0_dark_laplace_diff_1, lane_0_bright_weights_normed_gauss_ds_1, lane_0_dark_weights_normed_gauss_ds_1);
  set_at<0, 32, 16>(whole_result, result_0);

  hw_uint<16> lane_1_bright_laplace_diff_1;
  set_at<0, 16, 16>(lane_1_bright_laplace_diff_1, bright_laplace_diff_1.extract<16, 31>());
  hw_uint<16> lane_1_dark_laplace_diff_1;
  set_at<0, 16, 16>(lane_1_dark_laplace_diff_1, dark_laplace_diff_1.extract<16, 31>());
  hw_uint<16> lane_1_bright_weights_normed_gauss_ds_1;
  set_at<0, 16, 16>(lane_1_bright_weights_normed_gauss_ds_1, bright_weights_normed_gauss_ds_1.extract<16, 31>());
  hw_uint<16> lane_1_dark_weights_normed_gauss_ds_1;
  set_at<0, 16, 16>(lane_1_dark_weights_normed_gauss_ds_1, dark_weights_normed_gauss_ds_1.extract<16, 31>());
  auto result_1 = psef_weighted_merge(lane_1_bright_laplace_diff_1, lane_1_dark_laplace_diff_1, lane_1_bright_weights_normed_gauss_ds_1, lane_1_dark_weights_normed_gauss_ds_1);
  set_at<16, 32, 16>(whole_result, result_1);
  return whole_result;
}

  // fused_level_0_update_0 unroll factor: 4
hw_uint<64>  psef_weighted_merge_unrolled_4(hw_uint<64>& bright_laplace_diff_0, hw_uint<64>& dark_laplace_diff_0, hw_uint<64>& bright_weights_normed, hw_uint<64>& dark_weights_normed) {
  hw_uint<64> whole_result;

  hw_uint<16> lane_0_bright_laplace_diff_0;
  set_at<0, 16, 16>(lane_0_bright_laplace_diff_0, bright_laplace_diff_0.extract<0, 15>());
  hw_uint<16> lane_0_dark_laplace_diff_0;
  set_at<0, 16, 16>(lane_0_dark_laplace_diff_0, dark_laplace_diff_0.extract<0, 15>());
  hw_uint<16> lane_0_bright_weights_normed;
  set_at<0, 16, 16>(lane_0_bright_weights_normed, bright_weights_normed.extract<0, 15>());
  hw_uint<16> lane_0_dark_weights_normed;
  set_at<0, 16, 16>(lane_0_dark_weights_normed, dark_weights_normed.extract<0, 15>());
  auto result_0 = psef_weighted_merge(lane_0_bright_laplace_diff_0, lane_0_dark_laplace_diff_0, lane_0_bright_weights_normed, lane_0_dark_weights_normed);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<16> lane_1_bright_laplace_diff_0;
  set_at<0, 16, 16>(lane_1_bright_laplace_diff_0, bright_laplace_diff_0.extract<16, 31>());
  hw_uint<16> lane_1_dark_laplace_diff_0;
  set_at<0, 16, 16>(lane_1_dark_laplace_diff_0, dark_laplace_diff_0.extract<16, 31>());
  hw_uint<16> lane_1_bright_weights_normed;
  set_at<0, 16, 16>(lane_1_bright_weights_normed, bright_weights_normed.extract<16, 31>());
  hw_uint<16> lane_1_dark_weights_normed;
  set_at<0, 16, 16>(lane_1_dark_weights_normed, dark_weights_normed.extract<16, 31>());
  auto result_1 = psef_weighted_merge(lane_1_bright_laplace_diff_0, lane_1_dark_laplace_diff_0, lane_1_bright_weights_normed, lane_1_dark_weights_normed);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<16> lane_2_bright_laplace_diff_0;
  set_at<0, 16, 16>(lane_2_bright_laplace_diff_0, bright_laplace_diff_0.extract<32, 47>());
  hw_uint<16> lane_2_dark_laplace_diff_0;
  set_at<0, 16, 16>(lane_2_dark_laplace_diff_0, dark_laplace_diff_0.extract<32, 47>());
  hw_uint<16> lane_2_bright_weights_normed;
  set_at<0, 16, 16>(lane_2_bright_weights_normed, bright_weights_normed.extract<32, 47>());
  hw_uint<16> lane_2_dark_weights_normed;
  set_at<0, 16, 16>(lane_2_dark_weights_normed, dark_weights_normed.extract<32, 47>());
  auto result_2 = psef_weighted_merge(lane_2_bright_laplace_diff_0, lane_2_dark_laplace_diff_0, lane_2_bright_weights_normed, lane_2_dark_weights_normed);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<16> lane_3_bright_laplace_diff_0;
  set_at<0, 16, 16>(lane_3_bright_laplace_diff_0, bright_laplace_diff_0.extract<48, 63>());
  hw_uint<16> lane_3_dark_laplace_diff_0;
  set_at<0, 16, 16>(lane_3_dark_laplace_diff_0, dark_laplace_diff_0.extract<48, 63>());
  hw_uint<16> lane_3_bright_weights_normed;
  set_at<0, 16, 16>(lane_3_bright_weights_normed, bright_weights_normed.extract<48, 63>());
  hw_uint<16> lane_3_dark_weights_normed;
  set_at<0, 16, 16>(lane_3_dark_weights_normed, dark_weights_normed.extract<48, 63>());
  auto result_3 = psef_weighted_merge(lane_3_bright_laplace_diff_0, lane_3_dark_laplace_diff_0, lane_3_bright_weights_normed, lane_3_dark_weights_normed);
  set_at<48, 64, 16>(whole_result, result_3);
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

  // final_merged_1_update_0 unroll factor: 2
hw_uint<32>  add_unrolled_2(hw_uint<32>& final_merged_2, hw_uint<32>& fused_level_1) {
  hw_uint<32> whole_result;

  hw_uint<16> lane_0_final_merged_2;
  set_at<0, 16, 16>(lane_0_final_merged_2, final_merged_2.extract<0, 15>());
  hw_uint<16> lane_0_fused_level_1;
  set_at<0, 16, 16>(lane_0_fused_level_1, fused_level_1.extract<0, 15>());
  auto result_0 = add(lane_0_final_merged_2, lane_0_fused_level_1);
  set_at<0, 32, 16>(whole_result, result_0);

  hw_uint<16> lane_1_final_merged_2;
  set_at<0, 16, 16>(lane_1_final_merged_2, final_merged_2.extract<16, 31>());
  hw_uint<16> lane_1_fused_level_1;
  set_at<0, 16, 16>(lane_1_fused_level_1, fused_level_1.extract<16, 31>());
  auto result_1 = add(lane_1_final_merged_2, lane_1_fused_level_1);
  set_at<16, 32, 16>(whole_result, result_1);
  return whole_result;
}

  // final_merged_0_update_0 unroll factor: 4
hw_uint<64>  add_unrolled_4(hw_uint<64>& final_merged_1, hw_uint<64>& fused_level_0) {
  hw_uint<64> whole_result;

  hw_uint<16> lane_0_final_merged_1;
  set_at<0, 16, 16>(lane_0_final_merged_1, final_merged_1.extract<0, 15>());
  hw_uint<16> lane_0_fused_level_0;
  set_at<0, 16, 16>(lane_0_fused_level_0, fused_level_0.extract<0, 15>());
  auto result_0 = add(lane_0_final_merged_1, lane_0_fused_level_0);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<16> lane_1_final_merged_1;
  set_at<0, 16, 16>(lane_1_final_merged_1, final_merged_1.extract<16, 31>());
  hw_uint<16> lane_1_fused_level_0;
  set_at<0, 16, 16>(lane_1_fused_level_0, fused_level_0.extract<16, 31>());
  auto result_1 = add(lane_1_final_merged_1, lane_1_fused_level_0);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<16> lane_2_final_merged_1;
  set_at<0, 16, 16>(lane_2_final_merged_1, final_merged_1.extract<32, 47>());
  hw_uint<16> lane_2_fused_level_0;
  set_at<0, 16, 16>(lane_2_fused_level_0, fused_level_0.extract<32, 47>());
  auto result_2 = add(lane_2_final_merged_1, lane_2_fused_level_0);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<16> lane_3_final_merged_1;
  set_at<0, 16, 16>(lane_3_final_merged_1, final_merged_1.extract<48, 63>());
  hw_uint<16> lane_3_fused_level_0;
  set_at<0, 16, 16>(lane_3_fused_level_0, fused_level_0.extract<48, 63>());
  auto result_3 = add(lane_3_final_merged_1, lane_3_fused_level_0);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

