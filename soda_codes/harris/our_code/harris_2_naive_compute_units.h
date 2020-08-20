#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<16> img_generated_compute(hw_uint<16*1> img_oc) {
  return uint16_t(uint16_t(img_oc.get<16, 0>()));
}

hw_uint<16> grad_x_generated_compute(hw_uint<16*3> img) {
  return uint16_t((uint16_t(img.get<16, 0>()) + (uint16_t(img.get<16, 1>()) + uint16_t(img.get<16, 2>()))));
}

hw_uint<16> harris_2_generated_compute(hw_uint<16*3> grad_x) {
  return uint16_t((uint16_t(grad_x.get<16, 0>()) + (uint16_t(grad_x.get<16, 1>()) + uint16_t(grad_x.get<16, 2>()))));
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

  // grad_x_update_0 unroll factor: 1
hw_uint<16>  grad_x_generated_compute_unrolled_1(hw_uint<48>& img) {
  hw_uint<16> whole_result;

  hw_uint<48> lane_0_img;
  set_at<0, 48, 48>(lane_0_img, img.extract<0, 47>());
  auto result_0 = grad_x_generated_compute(lane_0_img);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // harris_2_update_0 unroll factor: 1
hw_uint<16>  harris_2_generated_compute_unrolled_1(hw_uint<48>& grad_x) {
  hw_uint<16> whole_result;

  hw_uint<48> lane_0_grad_x;
  set_at<0, 48, 48>(lane_0_grad_x, grad_x.extract<0, 47>());
  auto result_0 = harris_2_generated_compute(lane_0_grad_x);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

