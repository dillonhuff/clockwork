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

hw_uint<16> cp_4_generated_compute(hw_uint<16*1> blue_diff, hw_uint<16*1> green_diff, hw_uint<16*1> red_diff) {
  return ((red_diff.get<16, 0>() + green_diff.get<16, 0>()) + blue_diff.get<16, 0>());
}



// Compute unit banks...
  // raw_update_0 unroll factor: 4
hw_uint<64>  raw_generated_compute_unrolled_4(hw_uint<64>& raw_oc) {
  hw_uint<64> whole_result;

  hw_uint<16> lane_0_raw_oc;
  set_at<0, 16, 16>(lane_0_raw_oc, raw_oc.extract<0, 15>());
  auto result_0 = raw_generated_compute(lane_0_raw_oc);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<16> lane_1_raw_oc;
  set_at<0, 16, 16>(lane_1_raw_oc, raw_oc.extract<16, 31>());
  auto result_1 = raw_generated_compute(lane_1_raw_oc);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<16> lane_2_raw_oc;
  set_at<0, 16, 16>(lane_2_raw_oc, raw_oc.extract<32, 47>());
  auto result_2 = raw_generated_compute(lane_2_raw_oc);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<16> lane_3_raw_oc;
  set_at<0, 16, 16>(lane_3_raw_oc, raw_oc.extract<48, 63>());
  auto result_3 = raw_generated_compute(lane_3_raw_oc);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // blue_update_0 unroll factor: 4
hw_uint<64>  blue_generated_compute_unrolled_4(hw_uint<576>& raw) {
  hw_uint<64> whole_result;

  hw_uint<144> lane_0_raw;
  set_at<0, 144, 144>(lane_0_raw, raw.extract<0, 143>());
  auto result_0 = blue_generated_compute(lane_0_raw);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<144> lane_1_raw;
  set_at<0, 144, 144>(lane_1_raw, raw.extract<144, 287>());
  auto result_1 = blue_generated_compute(lane_1_raw);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<144> lane_2_raw;
  set_at<0, 144, 144>(lane_2_raw, raw.extract<288, 431>());
  auto result_2 = blue_generated_compute(lane_2_raw);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<144> lane_3_raw;
  set_at<0, 144, 144>(lane_3_raw, raw.extract<432, 575>());
  auto result_3 = blue_generated_compute(lane_3_raw);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // red_update_0 unroll factor: 4
hw_uint<64>  red_generated_compute_unrolled_4(hw_uint<576>& raw) {
  hw_uint<64> whole_result;

  hw_uint<144> lane_0_raw;
  set_at<0, 144, 144>(lane_0_raw, raw.extract<0, 143>());
  auto result_0 = red_generated_compute(lane_0_raw);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<144> lane_1_raw;
  set_at<0, 144, 144>(lane_1_raw, raw.extract<144, 287>());
  auto result_1 = red_generated_compute(lane_1_raw);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<144> lane_2_raw;
  set_at<0, 144, 144>(lane_2_raw, raw.extract<288, 431>());
  auto result_2 = red_generated_compute(lane_2_raw);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<144> lane_3_raw;
  set_at<0, 144, 144>(lane_3_raw, raw.extract<432, 575>());
  auto result_3 = red_generated_compute(lane_3_raw);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // green_update_0 unroll factor: 4
hw_uint<64>  green_generated_compute_unrolled_4(hw_uint<576>& raw) {
  hw_uint<64> whole_result;

  hw_uint<144> lane_0_raw;
  set_at<0, 144, 144>(lane_0_raw, raw.extract<0, 143>());
  auto result_0 = green_generated_compute(lane_0_raw);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<144> lane_1_raw;
  set_at<0, 144, 144>(lane_1_raw, raw.extract<144, 287>());
  auto result_1 = green_generated_compute(lane_1_raw);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<144> lane_2_raw;
  set_at<0, 144, 144>(lane_2_raw, raw.extract<288, 431>());
  auto result_2 = green_generated_compute(lane_2_raw);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<144> lane_3_raw;
  set_at<0, 144, 144>(lane_3_raw, raw.extract<432, 575>());
  auto result_3 = green_generated_compute(lane_3_raw);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // blue_bx_update_0 unroll factor: 4
hw_uint<64>  blue_bx_generated_compute_unrolled_4(hw_uint<192>& blue) {
  hw_uint<64> whole_result;

  hw_uint<48> lane_0_blue;
  set_at<0, 48, 48>(lane_0_blue, blue.extract<0, 47>());
  auto result_0 = blue_bx_generated_compute(lane_0_blue);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<48> lane_1_blue;
  set_at<0, 48, 48>(lane_1_blue, blue.extract<48, 95>());
  auto result_1 = blue_bx_generated_compute(lane_1_blue);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<48> lane_2_blue;
  set_at<0, 48, 48>(lane_2_blue, blue.extract<96, 143>());
  auto result_2 = blue_bx_generated_compute(lane_2_blue);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<48> lane_3_blue;
  set_at<0, 48, 48>(lane_3_blue, blue.extract<144, 191>());
  auto result_3 = blue_bx_generated_compute(lane_3_blue);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // red_bx_update_0 unroll factor: 4
hw_uint<64>  red_bx_generated_compute_unrolled_4(hw_uint<192>& red) {
  hw_uint<64> whole_result;

  hw_uint<48> lane_0_red;
  set_at<0, 48, 48>(lane_0_red, red.extract<0, 47>());
  auto result_0 = red_bx_generated_compute(lane_0_red);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<48> lane_1_red;
  set_at<0, 48, 48>(lane_1_red, red.extract<48, 95>());
  auto result_1 = red_bx_generated_compute(lane_1_red);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<48> lane_2_red;
  set_at<0, 48, 48>(lane_2_red, red.extract<96, 143>());
  auto result_2 = red_bx_generated_compute(lane_2_red);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<48> lane_3_red;
  set_at<0, 48, 48>(lane_3_red, red.extract<144, 191>());
  auto result_3 = red_bx_generated_compute(lane_3_red);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // green_bx_update_0 unroll factor: 4
hw_uint<64>  green_bx_generated_compute_unrolled_4(hw_uint<192>& green) {
  hw_uint<64> whole_result;

  hw_uint<48> lane_0_green;
  set_at<0, 48, 48>(lane_0_green, green.extract<0, 47>());
  auto result_0 = green_bx_generated_compute(lane_0_green);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<48> lane_1_green;
  set_at<0, 48, 48>(lane_1_green, green.extract<48, 95>());
  auto result_1 = green_bx_generated_compute(lane_1_green);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<48> lane_2_green;
  set_at<0, 48, 48>(lane_2_green, green.extract<96, 143>());
  auto result_2 = green_bx_generated_compute(lane_2_green);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<48> lane_3_green;
  set_at<0, 48, 48>(lane_3_green, green.extract<144, 191>());
  auto result_3 = green_bx_generated_compute(lane_3_green);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // blue_by_update_0 unroll factor: 4
hw_uint<64>  blue_by_generated_compute_unrolled_4(hw_uint<192>& blue_bx) {
  hw_uint<64> whole_result;

  hw_uint<48> lane_0_blue_bx;
  set_at<0, 48, 48>(lane_0_blue_bx, blue_bx.extract<0, 47>());
  auto result_0 = blue_by_generated_compute(lane_0_blue_bx);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<48> lane_1_blue_bx;
  set_at<0, 48, 48>(lane_1_blue_bx, blue_bx.extract<48, 95>());
  auto result_1 = blue_by_generated_compute(lane_1_blue_bx);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<48> lane_2_blue_bx;
  set_at<0, 48, 48>(lane_2_blue_bx, blue_bx.extract<96, 143>());
  auto result_2 = blue_by_generated_compute(lane_2_blue_bx);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<48> lane_3_blue_bx;
  set_at<0, 48, 48>(lane_3_blue_bx, blue_bx.extract<144, 191>());
  auto result_3 = blue_by_generated_compute(lane_3_blue_bx);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // red_by_update_0 unroll factor: 4
hw_uint<64>  red_by_generated_compute_unrolled_4(hw_uint<192>& red_bx) {
  hw_uint<64> whole_result;

  hw_uint<48> lane_0_red_bx;
  set_at<0, 48, 48>(lane_0_red_bx, red_bx.extract<0, 47>());
  auto result_0 = red_by_generated_compute(lane_0_red_bx);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<48> lane_1_red_bx;
  set_at<0, 48, 48>(lane_1_red_bx, red_bx.extract<48, 95>());
  auto result_1 = red_by_generated_compute(lane_1_red_bx);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<48> lane_2_red_bx;
  set_at<0, 48, 48>(lane_2_red_bx, red_bx.extract<96, 143>());
  auto result_2 = red_by_generated_compute(lane_2_red_bx);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<48> lane_3_red_bx;
  set_at<0, 48, 48>(lane_3_red_bx, red_bx.extract<144, 191>());
  auto result_3 = red_by_generated_compute(lane_3_red_bx);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // green_by_update_0 unroll factor: 4
hw_uint<64>  green_by_generated_compute_unrolled_4(hw_uint<192>& green_bx) {
  hw_uint<64> whole_result;

  hw_uint<48> lane_0_green_bx;
  set_at<0, 48, 48>(lane_0_green_bx, green_bx.extract<0, 47>());
  auto result_0 = green_by_generated_compute(lane_0_green_bx);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<48> lane_1_green_bx;
  set_at<0, 48, 48>(lane_1_green_bx, green_bx.extract<48, 95>());
  auto result_1 = green_by_generated_compute(lane_1_green_bx);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<48> lane_2_green_bx;
  set_at<0, 48, 48>(lane_2_green_bx, green_bx.extract<96, 143>());
  auto result_2 = green_by_generated_compute(lane_2_green_bx);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<48> lane_3_green_bx;
  set_at<0, 48, 48>(lane_3_green_bx, green_bx.extract<144, 191>());
  auto result_3 = green_by_generated_compute(lane_3_green_bx);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // blue_diff_update_0 unroll factor: 4
hw_uint<64>  blue_diff_generated_compute_unrolled_4(hw_uint<64>& blue, hw_uint<64>& blue_by) {
  hw_uint<64> whole_result;

  hw_uint<16> lane_0_blue;
  set_at<0, 16, 16>(lane_0_blue, blue.extract<0, 15>());
  hw_uint<16> lane_0_blue_by;
  set_at<0, 16, 16>(lane_0_blue_by, blue_by.extract<0, 15>());
  auto result_0 = blue_diff_generated_compute(lane_0_blue, lane_0_blue_by);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<16> lane_1_blue;
  set_at<0, 16, 16>(lane_1_blue, blue.extract<16, 31>());
  hw_uint<16> lane_1_blue_by;
  set_at<0, 16, 16>(lane_1_blue_by, blue_by.extract<16, 31>());
  auto result_1 = blue_diff_generated_compute(lane_1_blue, lane_1_blue_by);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<16> lane_2_blue;
  set_at<0, 16, 16>(lane_2_blue, blue.extract<32, 47>());
  hw_uint<16> lane_2_blue_by;
  set_at<0, 16, 16>(lane_2_blue_by, blue_by.extract<32, 47>());
  auto result_2 = blue_diff_generated_compute(lane_2_blue, lane_2_blue_by);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<16> lane_3_blue;
  set_at<0, 16, 16>(lane_3_blue, blue.extract<48, 63>());
  hw_uint<16> lane_3_blue_by;
  set_at<0, 16, 16>(lane_3_blue_by, blue_by.extract<48, 63>());
  auto result_3 = blue_diff_generated_compute(lane_3_blue, lane_3_blue_by);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // red_diff_update_0 unroll factor: 4
hw_uint<64>  red_diff_generated_compute_unrolled_4(hw_uint<64>& red, hw_uint<64>& red_by) {
  hw_uint<64> whole_result;

  hw_uint<16> lane_0_red;
  set_at<0, 16, 16>(lane_0_red, red.extract<0, 15>());
  hw_uint<16> lane_0_red_by;
  set_at<0, 16, 16>(lane_0_red_by, red_by.extract<0, 15>());
  auto result_0 = red_diff_generated_compute(lane_0_red, lane_0_red_by);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<16> lane_1_red;
  set_at<0, 16, 16>(lane_1_red, red.extract<16, 31>());
  hw_uint<16> lane_1_red_by;
  set_at<0, 16, 16>(lane_1_red_by, red_by.extract<16, 31>());
  auto result_1 = red_diff_generated_compute(lane_1_red, lane_1_red_by);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<16> lane_2_red;
  set_at<0, 16, 16>(lane_2_red, red.extract<32, 47>());
  hw_uint<16> lane_2_red_by;
  set_at<0, 16, 16>(lane_2_red_by, red_by.extract<32, 47>());
  auto result_2 = red_diff_generated_compute(lane_2_red, lane_2_red_by);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<16> lane_3_red;
  set_at<0, 16, 16>(lane_3_red, red.extract<48, 63>());
  hw_uint<16> lane_3_red_by;
  set_at<0, 16, 16>(lane_3_red_by, red_by.extract<48, 63>());
  auto result_3 = red_diff_generated_compute(lane_3_red, lane_3_red_by);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // green_diff_update_0 unroll factor: 4
hw_uint<64>  green_diff_generated_compute_unrolled_4(hw_uint<64>& green, hw_uint<64>& green_by) {
  hw_uint<64> whole_result;

  hw_uint<16> lane_0_green;
  set_at<0, 16, 16>(lane_0_green, green.extract<0, 15>());
  hw_uint<16> lane_0_green_by;
  set_at<0, 16, 16>(lane_0_green_by, green_by.extract<0, 15>());
  auto result_0 = green_diff_generated_compute(lane_0_green, lane_0_green_by);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<16> lane_1_green;
  set_at<0, 16, 16>(lane_1_green, green.extract<16, 31>());
  hw_uint<16> lane_1_green_by;
  set_at<0, 16, 16>(lane_1_green_by, green_by.extract<16, 31>());
  auto result_1 = green_diff_generated_compute(lane_1_green, lane_1_green_by);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<16> lane_2_green;
  set_at<0, 16, 16>(lane_2_green, green.extract<32, 47>());
  hw_uint<16> lane_2_green_by;
  set_at<0, 16, 16>(lane_2_green_by, green_by.extract<32, 47>());
  auto result_2 = green_diff_generated_compute(lane_2_green, lane_2_green_by);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<16> lane_3_green;
  set_at<0, 16, 16>(lane_3_green, green.extract<48, 63>());
  hw_uint<16> lane_3_green_by;
  set_at<0, 16, 16>(lane_3_green_by, green_by.extract<48, 63>());
  auto result_3 = green_diff_generated_compute(lane_3_green, lane_3_green_by);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // cp_4_update_0 unroll factor: 4
hw_uint<64>  cp_4_generated_compute_unrolled_4(hw_uint<64>& blue_diff, hw_uint<64>& green_diff, hw_uint<64>& red_diff) {
  hw_uint<64> whole_result;

  hw_uint<16> lane_0_blue_diff;
  set_at<0, 16, 16>(lane_0_blue_diff, blue_diff.extract<0, 15>());
  hw_uint<16> lane_0_green_diff;
  set_at<0, 16, 16>(lane_0_green_diff, green_diff.extract<0, 15>());
  hw_uint<16> lane_0_red_diff;
  set_at<0, 16, 16>(lane_0_red_diff, red_diff.extract<0, 15>());
  auto result_0 = cp_4_generated_compute(lane_0_blue_diff, lane_0_green_diff, lane_0_red_diff);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<16> lane_1_blue_diff;
  set_at<0, 16, 16>(lane_1_blue_diff, blue_diff.extract<16, 31>());
  hw_uint<16> lane_1_green_diff;
  set_at<0, 16, 16>(lane_1_green_diff, green_diff.extract<16, 31>());
  hw_uint<16> lane_1_red_diff;
  set_at<0, 16, 16>(lane_1_red_diff, red_diff.extract<16, 31>());
  auto result_1 = cp_4_generated_compute(lane_1_blue_diff, lane_1_green_diff, lane_1_red_diff);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<16> lane_2_blue_diff;
  set_at<0, 16, 16>(lane_2_blue_diff, blue_diff.extract<32, 47>());
  hw_uint<16> lane_2_green_diff;
  set_at<0, 16, 16>(lane_2_green_diff, green_diff.extract<32, 47>());
  hw_uint<16> lane_2_red_diff;
  set_at<0, 16, 16>(lane_2_red_diff, red_diff.extract<32, 47>());
  auto result_2 = cp_4_generated_compute(lane_2_blue_diff, lane_2_green_diff, lane_2_red_diff);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<16> lane_3_blue_diff;
  set_at<0, 16, 16>(lane_3_blue_diff, blue_diff.extract<48, 63>());
  hw_uint<16> lane_3_green_diff;
  set_at<0, 16, 16>(lane_3_green_diff, green_diff.extract<48, 63>());
  hw_uint<16> lane_3_red_diff;
  set_at<0, 16, 16>(lane_3_red_diff, red_diff.extract<48, 63>());
  auto result_3 = cp_4_generated_compute(lane_3_blue_diff, lane_3_green_diff, lane_3_red_diff);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

