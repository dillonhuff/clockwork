#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<16> img_generated_compute(hw_uint<16*1> img_oc) {
  return uint16_t(uint16_t(img_oc.get<16, 0>()));
}

hw_uint<16> grad_y_generated_compute(hw_uint<16*6> img) {
  return uint16_t(((uint16_t(img.get<16, 1>()) - uint16_t(img.get<16, 0>())) + (((uint16_t(img.get<16, 3>()) - uint16_t(img.get<16, 2>())) * 2) + (uint16_t(img.get<16, 5>()) - uint16_t(img.get<16, 4>())))));
}

hw_uint<16> grad_x_generated_compute(hw_uint<16*6> img) {
  return uint16_t(((uint16_t(img.get<16, 3>()) - uint16_t(img.get<16, 0>())) + (((uint16_t(img.get<16, 4>()) - uint16_t(img.get<16, 1>())) * 2) + (uint16_t(img.get<16, 5>()) - uint16_t(img.get<16, 2>())))));
}

hw_uint<16> lyy_generated_compute(hw_uint<16*1> grad_y) {
  return uint16_t(((uint16_t(grad_y.get<16, 0>()) * uint16_t(grad_y.get<16, 0>())) / 128));
}

hw_uint<16> lxy_generated_compute(hw_uint<16*1> grad_x, hw_uint<16*1> grad_y) {
  return uint16_t(((uint16_t(grad_x.get<16, 0>()) * uint16_t(grad_y.get<16, 0>())) / 128));
}

hw_uint<16> lxx_generated_compute(hw_uint<16*1> grad_x) {
  return uint16_t(((uint16_t(grad_x.get<16, 0>()) * uint16_t(grad_x.get<16, 0>())) / 128));
}

hw_uint<16> lgyy_a_generated_compute(hw_uint<16*9> lyy) {
  return uint16_t((((uint16_t(lyy.get<16, 0>()) + uint16_t(lyy.get<16, 1>())) + (uint16_t(lyy.get<16, 2>()) + uint16_t(lyy.get<16, 3>()))) + ((uint16_t(lyy.get<16, 4>()) + uint16_t(lyy.get<16, 5>())) + (uint16_t(lyy.get<16, 6>()) + (uint16_t(lyy.get<16, 7>()) + uint16_t(lyy.get<16, 8>()))))));
}

hw_uint<16> lgyy_generated_compute(hw_uint<16*1> lgyy_a) {
  return uint16_t((uint16_t(lgyy_a.get<16, 0>()) / 9));
}

hw_uint<16> lgxy_a_generated_compute(hw_uint<16*9> lxy) {
  return uint16_t((((uint16_t(lxy.get<16, 0>()) + uint16_t(lxy.get<16, 1>())) + (uint16_t(lxy.get<16, 2>()) + uint16_t(lxy.get<16, 3>()))) + ((uint16_t(lxy.get<16, 4>()) + uint16_t(lxy.get<16, 5>())) + (uint16_t(lxy.get<16, 6>()) + (uint16_t(lxy.get<16, 7>()) + uint16_t(lxy.get<16, 8>()))))));
}

hw_uint<16> lgxy_generated_compute(hw_uint<16*1> lgxy_a) {
  return uint16_t((uint16_t(lgxy_a.get<16, 0>()) / 9));
}

hw_uint<16> lgxx_a_generated_compute(hw_uint<16*9> lxx) {
  return uint16_t((((uint16_t(lxx.get<16, 0>()) + uint16_t(lxx.get<16, 1>())) + (uint16_t(lxx.get<16, 2>()) + uint16_t(lxx.get<16, 3>()))) + ((uint16_t(lxx.get<16, 4>()) + uint16_t(lxx.get<16, 5>())) + (uint16_t(lxx.get<16, 6>()) + (uint16_t(lxx.get<16, 7>()) + uint16_t(lxx.get<16, 8>()))))));
}

hw_uint<16> lgxx_generated_compute(hw_uint<16*1> lgxx_a) {
  return uint16_t((uint16_t(lgxx_a.get<16, 0>()) / 9));
}

hw_uint<16> lgyy8_generated_compute(hw_uint<16*1> lgyy) {
  return uint16_t((uint16_t(lgyy.get<16, 0>()) / 64));
}

hw_uint<16> lgxy8_generated_compute(hw_uint<16*1> lgxy) {
  return uint16_t((uint16_t(lgxy.get<16, 0>()) / 64));
}

hw_uint<16> lgxx8_generated_compute(hw_uint<16*1> lgxx) {
  return uint16_t((uint16_t(lgxx.get<16, 0>()) / 64));
}

hw_uint<16> det_generated_compute(hw_uint<16*1> lgxx8, hw_uint<16*1> lgxy8, hw_uint<16*1> lgyy8) {
  return uint16_t(((uint16_t(lgxx8.get<16, 0>()) * uint16_t(lgyy8.get<16, 0>())) + (uint16_t(lgxy8.get<16, 0>()) * uint16_t(lgxy8.get<16, 0>()))));
}

hw_uint<16> trace_generated_compute(hw_uint<16*1> lgxx8, hw_uint<16*1> lgyy8) {
  return uint16_t((uint16_t(lgxx8.get<16, 0>()) * uint16_t(lgyy8.get<16, 0>())));
}

hw_uint<16> harris16_mini_generated_compute(hw_uint<16*1> det, hw_uint<16*1> trace) {
  return uint16_t((uint16_t(det.get<16, 0>()) + ((uint16_t(trace.get<16, 0>()) * uint16_t(trace.get<16, 0>())) + 8)));
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

  // grad_y_update_0 unroll factor: 1
hw_uint<16>  grad_y_generated_compute_unrolled_1(hw_uint<96>& img) {
  hw_uint<16> whole_result;

  hw_uint<96> lane_0_img;
  set_at<0, 96, 96>(lane_0_img, img.extract<0, 95>());
  auto result_0 = grad_y_generated_compute(lane_0_img);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // grad_x_update_0 unroll factor: 1
hw_uint<16>  grad_x_generated_compute_unrolled_1(hw_uint<96>& img) {
  hw_uint<16> whole_result;

  hw_uint<96> lane_0_img;
  set_at<0, 96, 96>(lane_0_img, img.extract<0, 95>());
  auto result_0 = grad_x_generated_compute(lane_0_img);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // lyy_update_0 unroll factor: 1
hw_uint<16>  lyy_generated_compute_unrolled_1(hw_uint<16>& grad_y) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_grad_y;
  set_at<0, 16, 16>(lane_0_grad_y, grad_y.extract<0, 15>());
  auto result_0 = lyy_generated_compute(lane_0_grad_y);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // lxy_update_0 unroll factor: 1
hw_uint<16>  lxy_generated_compute_unrolled_1(hw_uint<16>& grad_x, hw_uint<16>& grad_y) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_grad_x;
  set_at<0, 16, 16>(lane_0_grad_x, grad_x.extract<0, 15>());
  hw_uint<16> lane_0_grad_y;
  set_at<0, 16, 16>(lane_0_grad_y, grad_y.extract<0, 15>());
  auto result_0 = lxy_generated_compute(lane_0_grad_x, lane_0_grad_y);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // lxx_update_0 unroll factor: 1
hw_uint<16>  lxx_generated_compute_unrolled_1(hw_uint<16>& grad_x) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_grad_x;
  set_at<0, 16, 16>(lane_0_grad_x, grad_x.extract<0, 15>());
  auto result_0 = lxx_generated_compute(lane_0_grad_x);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // lgyy_a_update_0 unroll factor: 1
hw_uint<16>  lgyy_a_generated_compute_unrolled_1(hw_uint<144>& lyy) {
  hw_uint<16> whole_result;

  hw_uint<144> lane_0_lyy;
  set_at<0, 144, 144>(lane_0_lyy, lyy.extract<0, 143>());
  auto result_0 = lgyy_a_generated_compute(lane_0_lyy);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // lgyy_update_0 unroll factor: 1
hw_uint<16>  lgyy_generated_compute_unrolled_1(hw_uint<16>& lgyy_a) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_lgyy_a;
  set_at<0, 16, 16>(lane_0_lgyy_a, lgyy_a.extract<0, 15>());
  auto result_0 = lgyy_generated_compute(lane_0_lgyy_a);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // lgxy_a_update_0 unroll factor: 1
hw_uint<16>  lgxy_a_generated_compute_unrolled_1(hw_uint<144>& lxy) {
  hw_uint<16> whole_result;

  hw_uint<144> lane_0_lxy;
  set_at<0, 144, 144>(lane_0_lxy, lxy.extract<0, 143>());
  auto result_0 = lgxy_a_generated_compute(lane_0_lxy);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // lgxy_update_0 unroll factor: 1
hw_uint<16>  lgxy_generated_compute_unrolled_1(hw_uint<16>& lgxy_a) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_lgxy_a;
  set_at<0, 16, 16>(lane_0_lgxy_a, lgxy_a.extract<0, 15>());
  auto result_0 = lgxy_generated_compute(lane_0_lgxy_a);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // lgxx_a_update_0 unroll factor: 1
hw_uint<16>  lgxx_a_generated_compute_unrolled_1(hw_uint<144>& lxx) {
  hw_uint<16> whole_result;

  hw_uint<144> lane_0_lxx;
  set_at<0, 144, 144>(lane_0_lxx, lxx.extract<0, 143>());
  auto result_0 = lgxx_a_generated_compute(lane_0_lxx);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // lgxx_update_0 unroll factor: 1
hw_uint<16>  lgxx_generated_compute_unrolled_1(hw_uint<16>& lgxx_a) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_lgxx_a;
  set_at<0, 16, 16>(lane_0_lgxx_a, lgxx_a.extract<0, 15>());
  auto result_0 = lgxx_generated_compute(lane_0_lgxx_a);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // lgyy8_update_0 unroll factor: 1
hw_uint<16>  lgyy8_generated_compute_unrolled_1(hw_uint<16>& lgyy) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_lgyy;
  set_at<0, 16, 16>(lane_0_lgyy, lgyy.extract<0, 15>());
  auto result_0 = lgyy8_generated_compute(lane_0_lgyy);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // lgxy8_update_0 unroll factor: 1
hw_uint<16>  lgxy8_generated_compute_unrolled_1(hw_uint<16>& lgxy) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_lgxy;
  set_at<0, 16, 16>(lane_0_lgxy, lgxy.extract<0, 15>());
  auto result_0 = lgxy8_generated_compute(lane_0_lgxy);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // lgxx8_update_0 unroll factor: 1
hw_uint<16>  lgxx8_generated_compute_unrolled_1(hw_uint<16>& lgxx) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_lgxx;
  set_at<0, 16, 16>(lane_0_lgxx, lgxx.extract<0, 15>());
  auto result_0 = lgxx8_generated_compute(lane_0_lgxx);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // det_update_0 unroll factor: 1
hw_uint<16>  det_generated_compute_unrolled_1(hw_uint<16>& lgxx8, hw_uint<16>& lgxy8, hw_uint<16>& lgyy8) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_lgxx8;
  set_at<0, 16, 16>(lane_0_lgxx8, lgxx8.extract<0, 15>());
  hw_uint<16> lane_0_lgxy8;
  set_at<0, 16, 16>(lane_0_lgxy8, lgxy8.extract<0, 15>());
  hw_uint<16> lane_0_lgyy8;
  set_at<0, 16, 16>(lane_0_lgyy8, lgyy8.extract<0, 15>());
  auto result_0 = det_generated_compute(lane_0_lgxx8, lane_0_lgxy8, lane_0_lgyy8);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // trace_update_0 unroll factor: 1
hw_uint<16>  trace_generated_compute_unrolled_1(hw_uint<16>& lgxx8, hw_uint<16>& lgyy8) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_lgxx8;
  set_at<0, 16, 16>(lane_0_lgxx8, lgxx8.extract<0, 15>());
  hw_uint<16> lane_0_lgyy8;
  set_at<0, 16, 16>(lane_0_lgyy8, lgyy8.extract<0, 15>());
  auto result_0 = trace_generated_compute(lane_0_lgxx8, lane_0_lgyy8);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // harris16_mini_update_0 unroll factor: 1
hw_uint<16>  harris16_mini_generated_compute_unrolled_1(hw_uint<16>& det, hw_uint<16>& trace) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_det;
  set_at<0, 16, 16>(lane_0_det, det.extract<0, 15>());
  hw_uint<16> lane_0_trace;
  set_at<0, 16, 16>(lane_0_trace, trace.extract<0, 15>());
  auto result_0 = harris16_mini_generated_compute(lane_0_det, lane_0_trace);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

