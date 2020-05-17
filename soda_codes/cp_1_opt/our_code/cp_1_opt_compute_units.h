#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<16> raw_generated_compute(hw_uint<16*1> raw_oc) {
  return raw_oc.get<16, 0>();
}

hw_uint<16> blue_generated_compute(hw_uint<16*9> raw) {
  return ((((((((raw.get<16, 0>() + raw.get<16, 1>()) + raw.get<16, 2>()) + raw.get<16, 3>()) + raw.get<16, 4>()) + raw.get<16, 5>()) + raw.get<16, 6>()) + raw.get<16, 7>()) + raw.get<16, 8>());
}

hw_uint<16> red_generated_compute(hw_uint<16*9> raw) {
  return ((((((((raw.get<16, 0>() + raw.get<16, 1>()) + raw.get<16, 2>()) + raw.get<16, 3>()) + raw.get<16, 4>()) + raw.get<16, 5>()) + raw.get<16, 6>()) + raw.get<16, 7>()) + raw.get<16, 8>());
}

hw_uint<16> green_generated_compute(hw_uint<16*9> raw) {
  return ((((((((raw.get<16, 0>() + raw.get<16, 1>()) + raw.get<16, 2>()) + raw.get<16, 3>()) + raw.get<16, 4>()) + raw.get<16, 5>()) + raw.get<16, 6>()) + raw.get<16, 7>()) + raw.get<16, 8>());
}

hw_uint<16> blue_bx_generated_compute(hw_uint<16*3> blue) {
  return ((blue.get<16, 0>() + blue.get<16, 1>()) + blue.get<16, 2>());
}

hw_uint<16> red_bx_generated_compute(hw_uint<16*3> red) {
  return ((red.get<16, 0>() + red.get<16, 1>()) + red.get<16, 2>());
}

hw_uint<16> green_bx_generated_compute(hw_uint<16*3> green) {
  return ((green.get<16, 0>() + green.get<16, 1>()) + green.get<16, 2>());
}

hw_uint<16> blue_by_generated_compute(hw_uint<16*3> blue_bx) {
  return ((blue_bx.get<16, 0>() + blue_bx.get<16, 1>()) + blue_bx.get<16, 2>());
}

hw_uint<16> red_by_generated_compute(hw_uint<16*3> red_bx) {
  return ((red_bx.get<16, 0>() + red_bx.get<16, 1>()) + red_bx.get<16, 2>());
}

hw_uint<16> green_by_generated_compute(hw_uint<16*3> green_bx) {
  return ((green_bx.get<16, 0>() + green_bx.get<16, 1>()) + green_bx.get<16, 2>());
}

hw_uint<16> blue_diff_generated_compute(hw_uint<16*1> blue, hw_uint<16*1> blue_by) {
  return (blue_by.get<16, 0>() - blue.get<16, 0>());
}

hw_uint<16> red_diff_generated_compute(hw_uint<16*1> red, hw_uint<16*1> red_by) {
  return (red_by.get<16, 0>() - red.get<16, 0>());
}

hw_uint<16> green_diff_generated_compute(hw_uint<16*1> green, hw_uint<16*1> green_by) {
  return (green_by.get<16, 0>() - green.get<16, 0>());
}

hw_uint<16> cp_1_generated_compute(hw_uint<16*1> blue_diff, hw_uint<16*1> green_diff, hw_uint<16*1> red_diff) {
  return ((red_diff.get<16, 0>() + green_diff.get<16, 0>()) + blue_diff.get<16, 0>());
}



// Compute unit banks...
  // raw_update_0 unroll factor: 1
hw_uint<16>  raw_generated_compute_unrolled_1(hw_uint<16>& raw_oc) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_raw_oc;
  set_at<0, 16, 16>(lane_0_raw_oc, raw_oc.extract<0, 15>());
  auto result_0 = raw_generated_compute(lane_0_raw_oc);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // blue_update_0 unroll factor: 1
hw_uint<16>  blue_generated_compute_unrolled_1(hw_uint<144>& raw) {
  hw_uint<16> whole_result;

  hw_uint<144> lane_0_raw;
  set_at<0, 144, 144>(lane_0_raw, raw.extract<0, 143>());
  auto result_0 = blue_generated_compute(lane_0_raw);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // red_update_0 unroll factor: 1
hw_uint<16>  red_generated_compute_unrolled_1(hw_uint<144>& raw) {
  hw_uint<16> whole_result;

  hw_uint<144> lane_0_raw;
  set_at<0, 144, 144>(lane_0_raw, raw.extract<0, 143>());
  auto result_0 = red_generated_compute(lane_0_raw);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // green_update_0 unroll factor: 1
hw_uint<16>  green_generated_compute_unrolled_1(hw_uint<144>& raw) {
  hw_uint<16> whole_result;

  hw_uint<144> lane_0_raw;
  set_at<0, 144, 144>(lane_0_raw, raw.extract<0, 143>());
  auto result_0 = green_generated_compute(lane_0_raw);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // blue_bx_update_0 unroll factor: 1
hw_uint<16>  blue_bx_generated_compute_unrolled_1(hw_uint<48>& blue) {
  hw_uint<16> whole_result;

  hw_uint<48> lane_0_blue;
  set_at<0, 48, 48>(lane_0_blue, blue.extract<0, 47>());
  auto result_0 = blue_bx_generated_compute(lane_0_blue);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // red_bx_update_0 unroll factor: 1
hw_uint<16>  red_bx_generated_compute_unrolled_1(hw_uint<48>& red) {
  hw_uint<16> whole_result;

  hw_uint<48> lane_0_red;
  set_at<0, 48, 48>(lane_0_red, red.extract<0, 47>());
  auto result_0 = red_bx_generated_compute(lane_0_red);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // green_bx_update_0 unroll factor: 1
hw_uint<16>  green_bx_generated_compute_unrolled_1(hw_uint<48>& green) {
  hw_uint<16> whole_result;

  hw_uint<48> lane_0_green;
  set_at<0, 48, 48>(lane_0_green, green.extract<0, 47>());
  auto result_0 = green_bx_generated_compute(lane_0_green);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // blue_by_update_0 unroll factor: 1
hw_uint<16>  blue_by_generated_compute_unrolled_1(hw_uint<48>& blue_bx) {
  hw_uint<16> whole_result;

  hw_uint<48> lane_0_blue_bx;
  set_at<0, 48, 48>(lane_0_blue_bx, blue_bx.extract<0, 47>());
  auto result_0 = blue_by_generated_compute(lane_0_blue_bx);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // red_by_update_0 unroll factor: 1
hw_uint<16>  red_by_generated_compute_unrolled_1(hw_uint<48>& red_bx) {
  hw_uint<16> whole_result;

  hw_uint<48> lane_0_red_bx;
  set_at<0, 48, 48>(lane_0_red_bx, red_bx.extract<0, 47>());
  auto result_0 = red_by_generated_compute(lane_0_red_bx);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // green_by_update_0 unroll factor: 1
hw_uint<16>  green_by_generated_compute_unrolled_1(hw_uint<48>& green_bx) {
  hw_uint<16> whole_result;

  hw_uint<48> lane_0_green_bx;
  set_at<0, 48, 48>(lane_0_green_bx, green_bx.extract<0, 47>());
  auto result_0 = green_by_generated_compute(lane_0_green_bx);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // blue_diff_update_0 unroll factor: 1
hw_uint<16>  blue_diff_generated_compute_unrolled_1(hw_uint<16>& blue, hw_uint<16>& blue_by) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_blue;
  set_at<0, 16, 16>(lane_0_blue, blue.extract<0, 15>());
  hw_uint<16> lane_0_blue_by;
  set_at<0, 16, 16>(lane_0_blue_by, blue_by.extract<0, 15>());
  auto result_0 = blue_diff_generated_compute(lane_0_blue, lane_0_blue_by);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // red_diff_update_0 unroll factor: 1
hw_uint<16>  red_diff_generated_compute_unrolled_1(hw_uint<16>& red, hw_uint<16>& red_by) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_red;
  set_at<0, 16, 16>(lane_0_red, red.extract<0, 15>());
  hw_uint<16> lane_0_red_by;
  set_at<0, 16, 16>(lane_0_red_by, red_by.extract<0, 15>());
  auto result_0 = red_diff_generated_compute(lane_0_red, lane_0_red_by);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // green_diff_update_0 unroll factor: 1
hw_uint<16>  green_diff_generated_compute_unrolled_1(hw_uint<16>& green, hw_uint<16>& green_by) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_green;
  set_at<0, 16, 16>(lane_0_green, green.extract<0, 15>());
  hw_uint<16> lane_0_green_by;
  set_at<0, 16, 16>(lane_0_green_by, green_by.extract<0, 15>());
  auto result_0 = green_diff_generated_compute(lane_0_green, lane_0_green_by);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // cp_1_update_0 unroll factor: 1
hw_uint<16>  cp_1_generated_compute_unrolled_1(hw_uint<16>& blue_diff, hw_uint<16>& green_diff, hw_uint<16>& red_diff) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_blue_diff;
  set_at<0, 16, 16>(lane_0_blue_diff, blue_diff.extract<0, 15>());
  hw_uint<16> lane_0_green_diff;
  set_at<0, 16, 16>(lane_0_green_diff, green_diff.extract<0, 15>());
  hw_uint<16> lane_0_red_diff;
  set_at<0, 16, 16>(lane_0_red_diff, red_diff.extract<0, 15>());
  auto result_0 = cp_1_generated_compute(lane_0_blue_diff, lane_0_green_diff, lane_0_red_diff);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

