#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<32> img_generated_compute(hw_uint<32*1> img_oc) {
  return img_oc.get<32, 0>();
}

hw_uint<32> grad_y_generated_compute(hw_uint<32*6> img) {
  return (((img.get<32, 1>() - img.get<32, 0>()) + ((img.get<32, 3>() - img.get<32, 2>()) * hw_uint<32>(2))) + (img.get<32, 5>() - img.get<32, 4>()));
}

hw_uint<32> grad_x_generated_compute(hw_uint<32*6> img) {
  return (((img.get<32, 3>() - img.get<32, 0>()) + ((img.get<32, 4>() - img.get<32, 1>()) * hw_uint<32>(2))) + (img.get<32, 5>() - img.get<32, 2>()));
}

hw_uint<32> lyy_generated_compute(hw_uint<32*1> grad_y) {
  return ((grad_y.get<32, 0>() * grad_y.get<32, 0>()) / hw_uint<32>(128));
}

hw_uint<32> lxy_generated_compute(hw_uint<32*1> grad_x, hw_uint<32*1> grad_y) {
  return ((grad_x.get<32, 0>() * grad_y.get<32, 0>()) / hw_uint<32>(128));
}

hw_uint<32> lxx_generated_compute(hw_uint<32*1> grad_x) {
  return ((grad_x.get<32, 0>() * grad_x.get<32, 0>()) / hw_uint<32>(128));
}

hw_uint<32> lgyy_generated_compute(hw_uint<32*9> lyy) {
  return ((((((((lyy.get<32, 0>() + lyy.get<32, 1>()) + lyy.get<32, 2>()) + lyy.get<32, 3>()) + lyy.get<32, 4>()) + lyy.get<32, 5>()) + lyy.get<32, 6>()) + lyy.get<32, 7>()) + lyy.get<32, 8>());
}

hw_uint<32> lgxy_generated_compute(hw_uint<32*9> lxy) {
  return ((((((((lxy.get<32, 0>() + lxy.get<32, 1>()) + lxy.get<32, 2>()) + lxy.get<32, 3>()) + lxy.get<32, 4>()) + lxy.get<32, 5>()) + lxy.get<32, 6>()) + lxy.get<32, 7>()) + lxy.get<32, 8>());
}

hw_uint<32> lgxx_generated_compute(hw_uint<32*9> lxx) {
  return ((((((((lxx.get<32, 0>() + lxx.get<32, 1>()) + lxx.get<32, 2>()) + lxx.get<32, 3>()) + lxx.get<32, 4>()) + lxx.get<32, 5>()) + lxx.get<32, 6>()) + lxx.get<32, 7>()) + lxx.get<32, 8>());
}

hw_uint<32> lgyy8_generated_compute(hw_uint<32*1> lgyy) {
  return (lgyy.get<32, 0>() / hw_uint<32>(64));
}

hw_uint<32> lgxy8_generated_compute(hw_uint<32*1> lgxy) {
  return (lgxy.get<32, 0>() / hw_uint<32>(64));
}

hw_uint<32> lgxx8_generated_compute(hw_uint<32*1> lgxx) {
  return (lgxx.get<32, 0>() / hw_uint<32>(64));
}

hw_uint<32> det_generated_compute(hw_uint<32*1> lgxx8, hw_uint<32*1> lgxy8, hw_uint<32*1> lgyy8) {
  return ((lgxx8.get<32, 0>() * lgyy8.get<32, 0>()) + (lgxy8.get<32, 0>() * lgxy8.get<32, 0>()));
}

hw_uint<32> trace_generated_compute(hw_uint<32*1> lgxx8, hw_uint<32*1> lgyy8) {
  return (lgxx8.get<32, 0>() * lgyy8.get<32, 0>());
}

hw_uint<32> harris_1_generated_compute(hw_uint<32*1> det, hw_uint<32*1> trace) {
  return (det.get<32, 0>() + ((trace.get<32, 0>() * trace.get<32, 0>()) * hw_uint<32>(8)));
}



// Compute unit banks...
  // img_update_0 unroll factor: 1
hw_uint<32>  img_generated_compute_unrolled_1(hw_uint<32>& img_oc) {
  hw_uint<32> whole_result;

  hw_uint<32> lane_0_img_oc;
  set_at<0, 32, 32>(lane_0_img_oc, img_oc.extract<0, 31>());
  auto result_0 = img_generated_compute(lane_0_img_oc);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // grad_y_update_0 unroll factor: 1
hw_uint<32>  grad_y_generated_compute_unrolled_1(hw_uint<192>& img) {
  hw_uint<32> whole_result;

  hw_uint<192> lane_0_img;
  set_at<0, 192, 192>(lane_0_img, img.extract<0, 191>());
  auto result_0 = grad_y_generated_compute(lane_0_img);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // grad_x_update_0 unroll factor: 1
hw_uint<32>  grad_x_generated_compute_unrolled_1(hw_uint<192>& img) {
  hw_uint<32> whole_result;

  hw_uint<192> lane_0_img;
  set_at<0, 192, 192>(lane_0_img, img.extract<0, 191>());
  auto result_0 = grad_x_generated_compute(lane_0_img);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // lyy_update_0 unroll factor: 1
hw_uint<32>  lyy_generated_compute_unrolled_1(hw_uint<32>& grad_y) {
  hw_uint<32> whole_result;

  hw_uint<32> lane_0_grad_y;
  set_at<0, 32, 32>(lane_0_grad_y, grad_y.extract<0, 31>());
  auto result_0 = lyy_generated_compute(lane_0_grad_y);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // lxy_update_0 unroll factor: 1
hw_uint<32>  lxy_generated_compute_unrolled_1(hw_uint<32>& grad_x, hw_uint<32>& grad_y) {
  hw_uint<32> whole_result;

  hw_uint<32> lane_0_grad_x;
  set_at<0, 32, 32>(lane_0_grad_x, grad_x.extract<0, 31>());
  hw_uint<32> lane_0_grad_y;
  set_at<0, 32, 32>(lane_0_grad_y, grad_y.extract<0, 31>());
  auto result_0 = lxy_generated_compute(lane_0_grad_x, lane_0_grad_y);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // lxx_update_0 unroll factor: 1
hw_uint<32>  lxx_generated_compute_unrolled_1(hw_uint<32>& grad_x) {
  hw_uint<32> whole_result;

  hw_uint<32> lane_0_grad_x;
  set_at<0, 32, 32>(lane_0_grad_x, grad_x.extract<0, 31>());
  auto result_0 = lxx_generated_compute(lane_0_grad_x);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // lgyy_update_0 unroll factor: 1
hw_uint<32>  lgyy_generated_compute_unrolled_1(hw_uint<288>& lyy) {
  hw_uint<32> whole_result;

  hw_uint<288> lane_0_lyy;
  set_at<0, 288, 288>(lane_0_lyy, lyy.extract<0, 287>());
  auto result_0 = lgyy_generated_compute(lane_0_lyy);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // lgxy_update_0 unroll factor: 1
hw_uint<32>  lgxy_generated_compute_unrolled_1(hw_uint<288>& lxy) {
  hw_uint<32> whole_result;

  hw_uint<288> lane_0_lxy;
  set_at<0, 288, 288>(lane_0_lxy, lxy.extract<0, 287>());
  auto result_0 = lgxy_generated_compute(lane_0_lxy);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // lgxx_update_0 unroll factor: 1
hw_uint<32>  lgxx_generated_compute_unrolled_1(hw_uint<288>& lxx) {
  hw_uint<32> whole_result;

  hw_uint<288> lane_0_lxx;
  set_at<0, 288, 288>(lane_0_lxx, lxx.extract<0, 287>());
  auto result_0 = lgxx_generated_compute(lane_0_lxx);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // lgyy8_update_0 unroll factor: 1
hw_uint<32>  lgyy8_generated_compute_unrolled_1(hw_uint<32>& lgyy) {
  hw_uint<32> whole_result;

  hw_uint<32> lane_0_lgyy;
  set_at<0, 32, 32>(lane_0_lgyy, lgyy.extract<0, 31>());
  auto result_0 = lgyy8_generated_compute(lane_0_lgyy);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // lgxy8_update_0 unroll factor: 1
hw_uint<32>  lgxy8_generated_compute_unrolled_1(hw_uint<32>& lgxy) {
  hw_uint<32> whole_result;

  hw_uint<32> lane_0_lgxy;
  set_at<0, 32, 32>(lane_0_lgxy, lgxy.extract<0, 31>());
  auto result_0 = lgxy8_generated_compute(lane_0_lgxy);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // lgxx8_update_0 unroll factor: 1
hw_uint<32>  lgxx8_generated_compute_unrolled_1(hw_uint<32>& lgxx) {
  hw_uint<32> whole_result;

  hw_uint<32> lane_0_lgxx;
  set_at<0, 32, 32>(lane_0_lgxx, lgxx.extract<0, 31>());
  auto result_0 = lgxx8_generated_compute(lane_0_lgxx);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // det_update_0 unroll factor: 1
hw_uint<32>  det_generated_compute_unrolled_1(hw_uint<32>& lgxx8, hw_uint<32>& lgxy8, hw_uint<32>& lgyy8) {
  hw_uint<32> whole_result;

  hw_uint<32> lane_0_lgxx8;
  set_at<0, 32, 32>(lane_0_lgxx8, lgxx8.extract<0, 31>());
  hw_uint<32> lane_0_lgxy8;
  set_at<0, 32, 32>(lane_0_lgxy8, lgxy8.extract<0, 31>());
  hw_uint<32> lane_0_lgyy8;
  set_at<0, 32, 32>(lane_0_lgyy8, lgyy8.extract<0, 31>());
  auto result_0 = det_generated_compute(lane_0_lgxx8, lane_0_lgxy8, lane_0_lgyy8);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // trace_update_0 unroll factor: 1
hw_uint<32>  trace_generated_compute_unrolled_1(hw_uint<32>& lgxx8, hw_uint<32>& lgyy8) {
  hw_uint<32> whole_result;

  hw_uint<32> lane_0_lgxx8;
  set_at<0, 32, 32>(lane_0_lgxx8, lgxx8.extract<0, 31>());
  hw_uint<32> lane_0_lgyy8;
  set_at<0, 32, 32>(lane_0_lgyy8, lgyy8.extract<0, 31>());
  auto result_0 = trace_generated_compute(lane_0_lgxx8, lane_0_lgyy8);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // harris_1_update_0 unroll factor: 1
hw_uint<32>  harris_1_generated_compute_unrolled_1(hw_uint<32>& det, hw_uint<32>& trace) {
  hw_uint<32> whole_result;

  hw_uint<32> lane_0_det;
  set_at<0, 32, 32>(lane_0_det, det.extract<0, 31>());
  hw_uint<32> lane_0_trace;
  set_at<0, 32, 32>(lane_0_trace, trace.extract<0, 31>());
  auto result_0 = harris_1_generated_compute(lane_0_det, lane_0_trace);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

