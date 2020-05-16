#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<16> img_generated_compute(hw_uint<16*1> img_oc) {
  return img_oc.get<16, 0>();
}

hw_uint<16> harris16_mini_generated_compute(hw_uint<16*1> img) {
  return ((img.get<16, 0>() - hw_uint<16>(30000)) / hw_uint<16>(128));
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

  // harris16_mini_update_0 unroll factor: 1
hw_uint<16>  harris16_mini_generated_compute_unrolled_1(hw_uint<16>& img) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_img;
  set_at<0, 16, 16>(lane_0_img, img.extract<0, 15>());
  auto result_0 = harris16_mini_generated_compute(lane_0_img);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

