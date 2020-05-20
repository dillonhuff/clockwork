#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<16> img_generated_compute(hw_uint<16*1> img_oc) {
  return uint16_t(uint16_t(img_oc.get<16, 0>()));
}

hw_uint<16> short_path_generated_compute(hw_uint<16*1> img) {
  return uint16_t(uint16_t(img.get<16, 0>()));
}

hw_uint<16> long_path_generated_compute(hw_uint<16*1> img) {
  return uint16_t(((uint16_t(img.get<16, 0>()) * (uint16_t(img.get<16, 0>()) + 1)) / 29));
}

hw_uint<16> dp_generated_compute(hw_uint<16*1> long_path, hw_uint<16*1> short_path) {
  return uint16_t((uint16_t(long_path.get<16, 0>()) + uint16_t(short_path.get<16, 0>())));
}



// Compute unit banks...
  // img_update_0 unroll factor: 1
hw_uint<16>  img_generated_compute_unrolled_1(hw_uint<16>& img_oc) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_img_oc;
  set_at<0, 16, 16>(lane_0_img_oc, img_oc.extract<0, 15>());
  auto result_0 = img_generated_compute(lane_0_img_oc);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // short_path_update_0 unroll factor: 1
hw_uint<16>  short_path_generated_compute_unrolled_1(hw_uint<16>& img) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_img;
  set_at<0, 16, 16>(lane_0_img, img.extract<0, 15>());
  auto result_0 = short_path_generated_compute(lane_0_img);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // long_path_update_0 unroll factor: 1
hw_uint<16>  long_path_generated_compute_unrolled_1(hw_uint<16>& img) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_img;
  set_at<0, 16, 16>(lane_0_img, img.extract<0, 15>());
  auto result_0 = long_path_generated_compute(lane_0_img);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // dp_update_0 unroll factor: 1
hw_uint<16>  dp_generated_compute_unrolled_1(hw_uint<16>& long_path, hw_uint<16>& short_path) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_long_path;
  set_at<0, 16, 16>(lane_0_long_path, long_path.extract<0, 15>());
  hw_uint<16> lane_0_short_path;
  set_at<0, 16, 16>(lane_0_short_path, short_path.extract<0, 15>());
  auto result_0 = dp_generated_compute(lane_0_long_path, lane_0_short_path);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

