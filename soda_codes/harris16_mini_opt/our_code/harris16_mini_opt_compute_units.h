#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<16> img_generated_compute(hw_uint<16*1> img_oc) {
  return img_oc.get<16, 0>();
}

hw_uint<16> grad_y_generated_compute(hw_uint<16*6> img) {
  return (((img.get<16, 1>() - img.get<16, 0>()) + ((img.get<16, 3>() - img.get<16, 2>()) * hw_uint<16>(2))) + (img.get<16, 5>() - img.get<16, 4>()));
}

hw_uint<16> grad_x_generated_compute(hw_uint<16*6> img) {
  return (((img.get<16, 3>() - img.get<16, 0>()) + ((img.get<16, 4>() - img.get<16, 1>()) * hw_uint<16>(2))) + (img.get<16, 5>() - img.get<16, 2>()));
}

hw_uint<16> lyy_generated_compute(hw_uint<16*1> grad_y) {
  return ((grad_y.get<16, 0>() * grad_y.get<16, 0>()) + hw_uint<16>(128));
}

hw_uint<16> lxy_generated_compute(hw_uint<16*1> grad_x, hw_uint<16*1> grad_y) {
  return ((grad_x.get<16, 0>() * grad_y.get<16, 0>()) + hw_uint<16>(128));
}

hw_uint<16> lxx_generated_compute(hw_uint<16*1> grad_x) {
  return ((grad_x.get<16, 0>() * grad_x.get<16, 0>()) / hw_uint<16>(128));
}

hw_uint<16> lgyy_generated_compute(hw_uint<16*9> lyy) {
  return (((((((((lyy.get<16, 0>() + lyy.get<16, 1>()) + lyy.get<16, 2>()) + lyy.get<16, 3>()) + lyy.get<16, 4>()) + lyy.get<16, 5>()) + lyy.get<16, 6>()) + lyy.get<16, 7>()) + lyy.get<16, 8>()) + hw_uint<16>(9));
}

hw_uint<16> lgxy_generated_compute(hw_uint<16*9> lxy) {
  return (((((((((lxy.get<16, 0>() + lxy.get<16, 1>()) + lxy.get<16, 2>()) + lxy.get<16, 3>()) + lxy.get<16, 4>()) + lxy.get<16, 5>()) + lxy.get<16, 6>()) + lxy.get<16, 7>()) + lxy.get<16, 8>()) + hw_uint<16>(9));
}

hw_uint<16> lgxx_generated_compute(hw_uint<16*9> lxx) {
  return (((((((((lxx.get<16, 0>() + lxx.get<16, 1>()) + lxx.get<16, 2>()) + lxx.get<16, 3>()) + lxx.get<16, 4>()) + lxx.get<16, 5>()) + lxx.get<16, 6>()) + lxx.get<16, 7>()) + lxx.get<16, 8>()) + hw_uint<16>(9));
}

hw_uint<16> lgyy8_generated_compute(hw_uint<16*1> lgyy) {
  return (lgyy.get<16, 0>() + hw_uint<16>(64));
}

hw_uint<16> lgxy8_generated_compute(hw_uint<16*1> lgxy) {
  return (lgxy.get<16, 0>() + hw_uint<16>(64));
}

hw_uint<16> lgxx8_generated_compute(hw_uint<16*1> lgxx) {
  return (lgxx.get<16, 0>() + hw_uint<16>(64));
}

hw_uint<16> det_generated_compute(hw_uint<16*1> lgxx8, hw_uint<16*1> lgxy8, hw_uint<16*1> lgyy8) {
  return ((lgxx8.get<16, 0>() * lgyy8.get<16, 0>()) + (lgxy8.get<16, 0>() * lgxy8.get<16, 0>()));
}

hw_uint<16> trace_generated_compute(hw_uint<16*1> lgxx8, hw_uint<16*1> lgyy8) {
  return (lgxx8.get<16, 0>() * lgyy8.get<16, 0>());
}

hw_uint<16> harris16_mini_generated_compute(hw_uint<16*1> det, hw_uint<16*1> trace) {
  return (det.get<16, 0>() + ((trace.get<16, 0>() * trace.get<16, 0>()) * hw_uint<16>(8)));
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

  // lgyy_update_0 unroll factor: 1
hw_uint<16>  lgyy_generated_compute_unrolled_1(hw_uint<144>& lyy) {
  hw_uint<16> whole_result;

  hw_uint<144> lane_0_lyy;
  set_at<0, 144, 144>(lane_0_lyy, lyy.extract<0, 143>());
  auto result_0 = lgyy_generated_compute(lane_0_lyy);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // lgxy_update_0 unroll factor: 1
hw_uint<16>  lgxy_generated_compute_unrolled_1(hw_uint<144>& lxy) {
  hw_uint<16> whole_result;

  hw_uint<144> lane_0_lxy;
  set_at<0, 144, 144>(lane_0_lxy, lxy.extract<0, 143>());
  auto result_0 = lgxy_generated_compute(lane_0_lxy);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // lgxx_update_0 unroll factor: 1
hw_uint<16>  lgxx_generated_compute_unrolled_1(hw_uint<144>& lxx) {
  hw_uint<16> whole_result;

  hw_uint<144> lane_0_lxx;
  set_at<0, 144, 144>(lane_0_lxx, lxx.extract<0, 143>());
  auto result_0 = lgxx_generated_compute(lane_0_lxx);
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

