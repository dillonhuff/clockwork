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

hw_uint<32> hr_16_generated_compute(hw_uint<32*1> det, hw_uint<32*1> trace) {
  return (det.get<32, 0>() + ((trace.get<32, 0>() * trace.get<32, 0>()) * hw_uint<32>(8)));
}



// Compute unit banks...
  // img_update_0 unroll factor: 16
hw_uint<512>  img_generated_compute_unrolled_16(hw_uint<512>& img_oc) {
  hw_uint<512> whole_result;

  hw_uint<32> lane_0_img_oc;
  set_at<0, 32, 32>(lane_0_img_oc, img_oc.extract<0, 31>());
  auto result_0 = img_generated_compute(lane_0_img_oc);
  set_at<0, 512, 32>(whole_result, result_0);

  hw_uint<32> lane_1_img_oc;
  set_at<0, 32, 32>(lane_1_img_oc, img_oc.extract<32, 63>());
  auto result_1 = img_generated_compute(lane_1_img_oc);
  set_at<32, 512, 32>(whole_result, result_1);

  hw_uint<32> lane_2_img_oc;
  set_at<0, 32, 32>(lane_2_img_oc, img_oc.extract<64, 95>());
  auto result_2 = img_generated_compute(lane_2_img_oc);
  set_at<64, 512, 32>(whole_result, result_2);

  hw_uint<32> lane_3_img_oc;
  set_at<0, 32, 32>(lane_3_img_oc, img_oc.extract<96, 127>());
  auto result_3 = img_generated_compute(lane_3_img_oc);
  set_at<96, 512, 32>(whole_result, result_3);

  hw_uint<32> lane_4_img_oc;
  set_at<0, 32, 32>(lane_4_img_oc, img_oc.extract<128, 159>());
  auto result_4 = img_generated_compute(lane_4_img_oc);
  set_at<128, 512, 32>(whole_result, result_4);

  hw_uint<32> lane_5_img_oc;
  set_at<0, 32, 32>(lane_5_img_oc, img_oc.extract<160, 191>());
  auto result_5 = img_generated_compute(lane_5_img_oc);
  set_at<160, 512, 32>(whole_result, result_5);

  hw_uint<32> lane_6_img_oc;
  set_at<0, 32, 32>(lane_6_img_oc, img_oc.extract<192, 223>());
  auto result_6 = img_generated_compute(lane_6_img_oc);
  set_at<192, 512, 32>(whole_result, result_6);

  hw_uint<32> lane_7_img_oc;
  set_at<0, 32, 32>(lane_7_img_oc, img_oc.extract<224, 255>());
  auto result_7 = img_generated_compute(lane_7_img_oc);
  set_at<224, 512, 32>(whole_result, result_7);

  hw_uint<32> lane_8_img_oc;
  set_at<0, 32, 32>(lane_8_img_oc, img_oc.extract<256, 287>());
  auto result_8 = img_generated_compute(lane_8_img_oc);
  set_at<256, 512, 32>(whole_result, result_8);

  hw_uint<32> lane_9_img_oc;
  set_at<0, 32, 32>(lane_9_img_oc, img_oc.extract<288, 319>());
  auto result_9 = img_generated_compute(lane_9_img_oc);
  set_at<288, 512, 32>(whole_result, result_9);

  hw_uint<32> lane_10_img_oc;
  set_at<0, 32, 32>(lane_10_img_oc, img_oc.extract<320, 351>());
  auto result_10 = img_generated_compute(lane_10_img_oc);
  set_at<320, 512, 32>(whole_result, result_10);

  hw_uint<32> lane_11_img_oc;
  set_at<0, 32, 32>(lane_11_img_oc, img_oc.extract<352, 383>());
  auto result_11 = img_generated_compute(lane_11_img_oc);
  set_at<352, 512, 32>(whole_result, result_11);

  hw_uint<32> lane_12_img_oc;
  set_at<0, 32, 32>(lane_12_img_oc, img_oc.extract<384, 415>());
  auto result_12 = img_generated_compute(lane_12_img_oc);
  set_at<384, 512, 32>(whole_result, result_12);

  hw_uint<32> lane_13_img_oc;
  set_at<0, 32, 32>(lane_13_img_oc, img_oc.extract<416, 447>());
  auto result_13 = img_generated_compute(lane_13_img_oc);
  set_at<416, 512, 32>(whole_result, result_13);

  hw_uint<32> lane_14_img_oc;
  set_at<0, 32, 32>(lane_14_img_oc, img_oc.extract<448, 479>());
  auto result_14 = img_generated_compute(lane_14_img_oc);
  set_at<448, 512, 32>(whole_result, result_14);

  hw_uint<32> lane_15_img_oc;
  set_at<0, 32, 32>(lane_15_img_oc, img_oc.extract<480, 511>());
  auto result_15 = img_generated_compute(lane_15_img_oc);
  set_at<480, 512, 32>(whole_result, result_15);
  return whole_result;
}

  // grad_y_update_0 unroll factor: 16
hw_uint<512>  grad_y_generated_compute_unrolled_16(hw_uint<3072>& img) {
  hw_uint<512> whole_result;

  hw_uint<192> lane_0_img;
  set_at<0, 192, 192>(lane_0_img, img.extract<0, 191>());
  auto result_0 = grad_y_generated_compute(lane_0_img);
  set_at<0, 512, 32>(whole_result, result_0);

  hw_uint<192> lane_1_img;
  set_at<0, 192, 192>(lane_1_img, img.extract<192, 383>());
  auto result_1 = grad_y_generated_compute(lane_1_img);
  set_at<32, 512, 32>(whole_result, result_1);

  hw_uint<192> lane_2_img;
  set_at<0, 192, 192>(lane_2_img, img.extract<384, 575>());
  auto result_2 = grad_y_generated_compute(lane_2_img);
  set_at<64, 512, 32>(whole_result, result_2);

  hw_uint<192> lane_3_img;
  set_at<0, 192, 192>(lane_3_img, img.extract<576, 767>());
  auto result_3 = grad_y_generated_compute(lane_3_img);
  set_at<96, 512, 32>(whole_result, result_3);

  hw_uint<192> lane_4_img;
  set_at<0, 192, 192>(lane_4_img, img.extract<768, 959>());
  auto result_4 = grad_y_generated_compute(lane_4_img);
  set_at<128, 512, 32>(whole_result, result_4);

  hw_uint<192> lane_5_img;
  set_at<0, 192, 192>(lane_5_img, img.extract<960, 1151>());
  auto result_5 = grad_y_generated_compute(lane_5_img);
  set_at<160, 512, 32>(whole_result, result_5);

  hw_uint<192> lane_6_img;
  set_at<0, 192, 192>(lane_6_img, img.extract<1152, 1343>());
  auto result_6 = grad_y_generated_compute(lane_6_img);
  set_at<192, 512, 32>(whole_result, result_6);

  hw_uint<192> lane_7_img;
  set_at<0, 192, 192>(lane_7_img, img.extract<1344, 1535>());
  auto result_7 = grad_y_generated_compute(lane_7_img);
  set_at<224, 512, 32>(whole_result, result_7);

  hw_uint<192> lane_8_img;
  set_at<0, 192, 192>(lane_8_img, img.extract<1536, 1727>());
  auto result_8 = grad_y_generated_compute(lane_8_img);
  set_at<256, 512, 32>(whole_result, result_8);

  hw_uint<192> lane_9_img;
  set_at<0, 192, 192>(lane_9_img, img.extract<1728, 1919>());
  auto result_9 = grad_y_generated_compute(lane_9_img);
  set_at<288, 512, 32>(whole_result, result_9);

  hw_uint<192> lane_10_img;
  set_at<0, 192, 192>(lane_10_img, img.extract<1920, 2111>());
  auto result_10 = grad_y_generated_compute(lane_10_img);
  set_at<320, 512, 32>(whole_result, result_10);

  hw_uint<192> lane_11_img;
  set_at<0, 192, 192>(lane_11_img, img.extract<2112, 2303>());
  auto result_11 = grad_y_generated_compute(lane_11_img);
  set_at<352, 512, 32>(whole_result, result_11);

  hw_uint<192> lane_12_img;
  set_at<0, 192, 192>(lane_12_img, img.extract<2304, 2495>());
  auto result_12 = grad_y_generated_compute(lane_12_img);
  set_at<384, 512, 32>(whole_result, result_12);

  hw_uint<192> lane_13_img;
  set_at<0, 192, 192>(lane_13_img, img.extract<2496, 2687>());
  auto result_13 = grad_y_generated_compute(lane_13_img);
  set_at<416, 512, 32>(whole_result, result_13);

  hw_uint<192> lane_14_img;
  set_at<0, 192, 192>(lane_14_img, img.extract<2688, 2879>());
  auto result_14 = grad_y_generated_compute(lane_14_img);
  set_at<448, 512, 32>(whole_result, result_14);

  hw_uint<192> lane_15_img;
  set_at<0, 192, 192>(lane_15_img, img.extract<2880, 3071>());
  auto result_15 = grad_y_generated_compute(lane_15_img);
  set_at<480, 512, 32>(whole_result, result_15);
  return whole_result;
}

  // grad_x_update_0 unroll factor: 16
hw_uint<512>  grad_x_generated_compute_unrolled_16(hw_uint<3072>& img) {
  hw_uint<512> whole_result;

  hw_uint<192> lane_0_img;
  set_at<0, 192, 192>(lane_0_img, img.extract<0, 191>());
  auto result_0 = grad_x_generated_compute(lane_0_img);
  set_at<0, 512, 32>(whole_result, result_0);

  hw_uint<192> lane_1_img;
  set_at<0, 192, 192>(lane_1_img, img.extract<192, 383>());
  auto result_1 = grad_x_generated_compute(lane_1_img);
  set_at<32, 512, 32>(whole_result, result_1);

  hw_uint<192> lane_2_img;
  set_at<0, 192, 192>(lane_2_img, img.extract<384, 575>());
  auto result_2 = grad_x_generated_compute(lane_2_img);
  set_at<64, 512, 32>(whole_result, result_2);

  hw_uint<192> lane_3_img;
  set_at<0, 192, 192>(lane_3_img, img.extract<576, 767>());
  auto result_3 = grad_x_generated_compute(lane_3_img);
  set_at<96, 512, 32>(whole_result, result_3);

  hw_uint<192> lane_4_img;
  set_at<0, 192, 192>(lane_4_img, img.extract<768, 959>());
  auto result_4 = grad_x_generated_compute(lane_4_img);
  set_at<128, 512, 32>(whole_result, result_4);

  hw_uint<192> lane_5_img;
  set_at<0, 192, 192>(lane_5_img, img.extract<960, 1151>());
  auto result_5 = grad_x_generated_compute(lane_5_img);
  set_at<160, 512, 32>(whole_result, result_5);

  hw_uint<192> lane_6_img;
  set_at<0, 192, 192>(lane_6_img, img.extract<1152, 1343>());
  auto result_6 = grad_x_generated_compute(lane_6_img);
  set_at<192, 512, 32>(whole_result, result_6);

  hw_uint<192> lane_7_img;
  set_at<0, 192, 192>(lane_7_img, img.extract<1344, 1535>());
  auto result_7 = grad_x_generated_compute(lane_7_img);
  set_at<224, 512, 32>(whole_result, result_7);

  hw_uint<192> lane_8_img;
  set_at<0, 192, 192>(lane_8_img, img.extract<1536, 1727>());
  auto result_8 = grad_x_generated_compute(lane_8_img);
  set_at<256, 512, 32>(whole_result, result_8);

  hw_uint<192> lane_9_img;
  set_at<0, 192, 192>(lane_9_img, img.extract<1728, 1919>());
  auto result_9 = grad_x_generated_compute(lane_9_img);
  set_at<288, 512, 32>(whole_result, result_9);

  hw_uint<192> lane_10_img;
  set_at<0, 192, 192>(lane_10_img, img.extract<1920, 2111>());
  auto result_10 = grad_x_generated_compute(lane_10_img);
  set_at<320, 512, 32>(whole_result, result_10);

  hw_uint<192> lane_11_img;
  set_at<0, 192, 192>(lane_11_img, img.extract<2112, 2303>());
  auto result_11 = grad_x_generated_compute(lane_11_img);
  set_at<352, 512, 32>(whole_result, result_11);

  hw_uint<192> lane_12_img;
  set_at<0, 192, 192>(lane_12_img, img.extract<2304, 2495>());
  auto result_12 = grad_x_generated_compute(lane_12_img);
  set_at<384, 512, 32>(whole_result, result_12);

  hw_uint<192> lane_13_img;
  set_at<0, 192, 192>(lane_13_img, img.extract<2496, 2687>());
  auto result_13 = grad_x_generated_compute(lane_13_img);
  set_at<416, 512, 32>(whole_result, result_13);

  hw_uint<192> lane_14_img;
  set_at<0, 192, 192>(lane_14_img, img.extract<2688, 2879>());
  auto result_14 = grad_x_generated_compute(lane_14_img);
  set_at<448, 512, 32>(whole_result, result_14);

  hw_uint<192> lane_15_img;
  set_at<0, 192, 192>(lane_15_img, img.extract<2880, 3071>());
  auto result_15 = grad_x_generated_compute(lane_15_img);
  set_at<480, 512, 32>(whole_result, result_15);
  return whole_result;
}

  // lyy_update_0 unroll factor: 16
hw_uint<512>  lyy_generated_compute_unrolled_16(hw_uint<512>& grad_y) {
  hw_uint<512> whole_result;

  hw_uint<32> lane_0_grad_y;
  set_at<0, 32, 32>(lane_0_grad_y, grad_y.extract<0, 31>());
  auto result_0 = lyy_generated_compute(lane_0_grad_y);
  set_at<0, 512, 32>(whole_result, result_0);

  hw_uint<32> lane_1_grad_y;
  set_at<0, 32, 32>(lane_1_grad_y, grad_y.extract<32, 63>());
  auto result_1 = lyy_generated_compute(lane_1_grad_y);
  set_at<32, 512, 32>(whole_result, result_1);

  hw_uint<32> lane_2_grad_y;
  set_at<0, 32, 32>(lane_2_grad_y, grad_y.extract<64, 95>());
  auto result_2 = lyy_generated_compute(lane_2_grad_y);
  set_at<64, 512, 32>(whole_result, result_2);

  hw_uint<32> lane_3_grad_y;
  set_at<0, 32, 32>(lane_3_grad_y, grad_y.extract<96, 127>());
  auto result_3 = lyy_generated_compute(lane_3_grad_y);
  set_at<96, 512, 32>(whole_result, result_3);

  hw_uint<32> lane_4_grad_y;
  set_at<0, 32, 32>(lane_4_grad_y, grad_y.extract<128, 159>());
  auto result_4 = lyy_generated_compute(lane_4_grad_y);
  set_at<128, 512, 32>(whole_result, result_4);

  hw_uint<32> lane_5_grad_y;
  set_at<0, 32, 32>(lane_5_grad_y, grad_y.extract<160, 191>());
  auto result_5 = lyy_generated_compute(lane_5_grad_y);
  set_at<160, 512, 32>(whole_result, result_5);

  hw_uint<32> lane_6_grad_y;
  set_at<0, 32, 32>(lane_6_grad_y, grad_y.extract<192, 223>());
  auto result_6 = lyy_generated_compute(lane_6_grad_y);
  set_at<192, 512, 32>(whole_result, result_6);

  hw_uint<32> lane_7_grad_y;
  set_at<0, 32, 32>(lane_7_grad_y, grad_y.extract<224, 255>());
  auto result_7 = lyy_generated_compute(lane_7_grad_y);
  set_at<224, 512, 32>(whole_result, result_7);

  hw_uint<32> lane_8_grad_y;
  set_at<0, 32, 32>(lane_8_grad_y, grad_y.extract<256, 287>());
  auto result_8 = lyy_generated_compute(lane_8_grad_y);
  set_at<256, 512, 32>(whole_result, result_8);

  hw_uint<32> lane_9_grad_y;
  set_at<0, 32, 32>(lane_9_grad_y, grad_y.extract<288, 319>());
  auto result_9 = lyy_generated_compute(lane_9_grad_y);
  set_at<288, 512, 32>(whole_result, result_9);

  hw_uint<32> lane_10_grad_y;
  set_at<0, 32, 32>(lane_10_grad_y, grad_y.extract<320, 351>());
  auto result_10 = lyy_generated_compute(lane_10_grad_y);
  set_at<320, 512, 32>(whole_result, result_10);

  hw_uint<32> lane_11_grad_y;
  set_at<0, 32, 32>(lane_11_grad_y, grad_y.extract<352, 383>());
  auto result_11 = lyy_generated_compute(lane_11_grad_y);
  set_at<352, 512, 32>(whole_result, result_11);

  hw_uint<32> lane_12_grad_y;
  set_at<0, 32, 32>(lane_12_grad_y, grad_y.extract<384, 415>());
  auto result_12 = lyy_generated_compute(lane_12_grad_y);
  set_at<384, 512, 32>(whole_result, result_12);

  hw_uint<32> lane_13_grad_y;
  set_at<0, 32, 32>(lane_13_grad_y, grad_y.extract<416, 447>());
  auto result_13 = lyy_generated_compute(lane_13_grad_y);
  set_at<416, 512, 32>(whole_result, result_13);

  hw_uint<32> lane_14_grad_y;
  set_at<0, 32, 32>(lane_14_grad_y, grad_y.extract<448, 479>());
  auto result_14 = lyy_generated_compute(lane_14_grad_y);
  set_at<448, 512, 32>(whole_result, result_14);

  hw_uint<32> lane_15_grad_y;
  set_at<0, 32, 32>(lane_15_grad_y, grad_y.extract<480, 511>());
  auto result_15 = lyy_generated_compute(lane_15_grad_y);
  set_at<480, 512, 32>(whole_result, result_15);
  return whole_result;
}

  // lxy_update_0 unroll factor: 16
hw_uint<512>  lxy_generated_compute_unrolled_16(hw_uint<512>& grad_x, hw_uint<512>& grad_y) {
  hw_uint<512> whole_result;

  hw_uint<32> lane_0_grad_x;
  set_at<0, 32, 32>(lane_0_grad_x, grad_x.extract<0, 31>());
  hw_uint<32> lane_0_grad_y;
  set_at<0, 32, 32>(lane_0_grad_y, grad_y.extract<0, 31>());
  auto result_0 = lxy_generated_compute(lane_0_grad_x, lane_0_grad_y);
  set_at<0, 512, 32>(whole_result, result_0);

  hw_uint<32> lane_1_grad_x;
  set_at<0, 32, 32>(lane_1_grad_x, grad_x.extract<32, 63>());
  hw_uint<32> lane_1_grad_y;
  set_at<0, 32, 32>(lane_1_grad_y, grad_y.extract<32, 63>());
  auto result_1 = lxy_generated_compute(lane_1_grad_x, lane_1_grad_y);
  set_at<32, 512, 32>(whole_result, result_1);

  hw_uint<32> lane_2_grad_x;
  set_at<0, 32, 32>(lane_2_grad_x, grad_x.extract<64, 95>());
  hw_uint<32> lane_2_grad_y;
  set_at<0, 32, 32>(lane_2_grad_y, grad_y.extract<64, 95>());
  auto result_2 = lxy_generated_compute(lane_2_grad_x, lane_2_grad_y);
  set_at<64, 512, 32>(whole_result, result_2);

  hw_uint<32> lane_3_grad_x;
  set_at<0, 32, 32>(lane_3_grad_x, grad_x.extract<96, 127>());
  hw_uint<32> lane_3_grad_y;
  set_at<0, 32, 32>(lane_3_grad_y, grad_y.extract<96, 127>());
  auto result_3 = lxy_generated_compute(lane_3_grad_x, lane_3_grad_y);
  set_at<96, 512, 32>(whole_result, result_3);

  hw_uint<32> lane_4_grad_x;
  set_at<0, 32, 32>(lane_4_grad_x, grad_x.extract<128, 159>());
  hw_uint<32> lane_4_grad_y;
  set_at<0, 32, 32>(lane_4_grad_y, grad_y.extract<128, 159>());
  auto result_4 = lxy_generated_compute(lane_4_grad_x, lane_4_grad_y);
  set_at<128, 512, 32>(whole_result, result_4);

  hw_uint<32> lane_5_grad_x;
  set_at<0, 32, 32>(lane_5_grad_x, grad_x.extract<160, 191>());
  hw_uint<32> lane_5_grad_y;
  set_at<0, 32, 32>(lane_5_grad_y, grad_y.extract<160, 191>());
  auto result_5 = lxy_generated_compute(lane_5_grad_x, lane_5_grad_y);
  set_at<160, 512, 32>(whole_result, result_5);

  hw_uint<32> lane_6_grad_x;
  set_at<0, 32, 32>(lane_6_grad_x, grad_x.extract<192, 223>());
  hw_uint<32> lane_6_grad_y;
  set_at<0, 32, 32>(lane_6_grad_y, grad_y.extract<192, 223>());
  auto result_6 = lxy_generated_compute(lane_6_grad_x, lane_6_grad_y);
  set_at<192, 512, 32>(whole_result, result_6);

  hw_uint<32> lane_7_grad_x;
  set_at<0, 32, 32>(lane_7_grad_x, grad_x.extract<224, 255>());
  hw_uint<32> lane_7_grad_y;
  set_at<0, 32, 32>(lane_7_grad_y, grad_y.extract<224, 255>());
  auto result_7 = lxy_generated_compute(lane_7_grad_x, lane_7_grad_y);
  set_at<224, 512, 32>(whole_result, result_7);

  hw_uint<32> lane_8_grad_x;
  set_at<0, 32, 32>(lane_8_grad_x, grad_x.extract<256, 287>());
  hw_uint<32> lane_8_grad_y;
  set_at<0, 32, 32>(lane_8_grad_y, grad_y.extract<256, 287>());
  auto result_8 = lxy_generated_compute(lane_8_grad_x, lane_8_grad_y);
  set_at<256, 512, 32>(whole_result, result_8);

  hw_uint<32> lane_9_grad_x;
  set_at<0, 32, 32>(lane_9_grad_x, grad_x.extract<288, 319>());
  hw_uint<32> lane_9_grad_y;
  set_at<0, 32, 32>(lane_9_grad_y, grad_y.extract<288, 319>());
  auto result_9 = lxy_generated_compute(lane_9_grad_x, lane_9_grad_y);
  set_at<288, 512, 32>(whole_result, result_9);

  hw_uint<32> lane_10_grad_x;
  set_at<0, 32, 32>(lane_10_grad_x, grad_x.extract<320, 351>());
  hw_uint<32> lane_10_grad_y;
  set_at<0, 32, 32>(lane_10_grad_y, grad_y.extract<320, 351>());
  auto result_10 = lxy_generated_compute(lane_10_grad_x, lane_10_grad_y);
  set_at<320, 512, 32>(whole_result, result_10);

  hw_uint<32> lane_11_grad_x;
  set_at<0, 32, 32>(lane_11_grad_x, grad_x.extract<352, 383>());
  hw_uint<32> lane_11_grad_y;
  set_at<0, 32, 32>(lane_11_grad_y, grad_y.extract<352, 383>());
  auto result_11 = lxy_generated_compute(lane_11_grad_x, lane_11_grad_y);
  set_at<352, 512, 32>(whole_result, result_11);

  hw_uint<32> lane_12_grad_x;
  set_at<0, 32, 32>(lane_12_grad_x, grad_x.extract<384, 415>());
  hw_uint<32> lane_12_grad_y;
  set_at<0, 32, 32>(lane_12_grad_y, grad_y.extract<384, 415>());
  auto result_12 = lxy_generated_compute(lane_12_grad_x, lane_12_grad_y);
  set_at<384, 512, 32>(whole_result, result_12);

  hw_uint<32> lane_13_grad_x;
  set_at<0, 32, 32>(lane_13_grad_x, grad_x.extract<416, 447>());
  hw_uint<32> lane_13_grad_y;
  set_at<0, 32, 32>(lane_13_grad_y, grad_y.extract<416, 447>());
  auto result_13 = lxy_generated_compute(lane_13_grad_x, lane_13_grad_y);
  set_at<416, 512, 32>(whole_result, result_13);

  hw_uint<32> lane_14_grad_x;
  set_at<0, 32, 32>(lane_14_grad_x, grad_x.extract<448, 479>());
  hw_uint<32> lane_14_grad_y;
  set_at<0, 32, 32>(lane_14_grad_y, grad_y.extract<448, 479>());
  auto result_14 = lxy_generated_compute(lane_14_grad_x, lane_14_grad_y);
  set_at<448, 512, 32>(whole_result, result_14);

  hw_uint<32> lane_15_grad_x;
  set_at<0, 32, 32>(lane_15_grad_x, grad_x.extract<480, 511>());
  hw_uint<32> lane_15_grad_y;
  set_at<0, 32, 32>(lane_15_grad_y, grad_y.extract<480, 511>());
  auto result_15 = lxy_generated_compute(lane_15_grad_x, lane_15_grad_y);
  set_at<480, 512, 32>(whole_result, result_15);
  return whole_result;
}

  // lxx_update_0 unroll factor: 16
hw_uint<512>  lxx_generated_compute_unrolled_16(hw_uint<512>& grad_x) {
  hw_uint<512> whole_result;

  hw_uint<32> lane_0_grad_x;
  set_at<0, 32, 32>(lane_0_grad_x, grad_x.extract<0, 31>());
  auto result_0 = lxx_generated_compute(lane_0_grad_x);
  set_at<0, 512, 32>(whole_result, result_0);

  hw_uint<32> lane_1_grad_x;
  set_at<0, 32, 32>(lane_1_grad_x, grad_x.extract<32, 63>());
  auto result_1 = lxx_generated_compute(lane_1_grad_x);
  set_at<32, 512, 32>(whole_result, result_1);

  hw_uint<32> lane_2_grad_x;
  set_at<0, 32, 32>(lane_2_grad_x, grad_x.extract<64, 95>());
  auto result_2 = lxx_generated_compute(lane_2_grad_x);
  set_at<64, 512, 32>(whole_result, result_2);

  hw_uint<32> lane_3_grad_x;
  set_at<0, 32, 32>(lane_3_grad_x, grad_x.extract<96, 127>());
  auto result_3 = lxx_generated_compute(lane_3_grad_x);
  set_at<96, 512, 32>(whole_result, result_3);

  hw_uint<32> lane_4_grad_x;
  set_at<0, 32, 32>(lane_4_grad_x, grad_x.extract<128, 159>());
  auto result_4 = lxx_generated_compute(lane_4_grad_x);
  set_at<128, 512, 32>(whole_result, result_4);

  hw_uint<32> lane_5_grad_x;
  set_at<0, 32, 32>(lane_5_grad_x, grad_x.extract<160, 191>());
  auto result_5 = lxx_generated_compute(lane_5_grad_x);
  set_at<160, 512, 32>(whole_result, result_5);

  hw_uint<32> lane_6_grad_x;
  set_at<0, 32, 32>(lane_6_grad_x, grad_x.extract<192, 223>());
  auto result_6 = lxx_generated_compute(lane_6_grad_x);
  set_at<192, 512, 32>(whole_result, result_6);

  hw_uint<32> lane_7_grad_x;
  set_at<0, 32, 32>(lane_7_grad_x, grad_x.extract<224, 255>());
  auto result_7 = lxx_generated_compute(lane_7_grad_x);
  set_at<224, 512, 32>(whole_result, result_7);

  hw_uint<32> lane_8_grad_x;
  set_at<0, 32, 32>(lane_8_grad_x, grad_x.extract<256, 287>());
  auto result_8 = lxx_generated_compute(lane_8_grad_x);
  set_at<256, 512, 32>(whole_result, result_8);

  hw_uint<32> lane_9_grad_x;
  set_at<0, 32, 32>(lane_9_grad_x, grad_x.extract<288, 319>());
  auto result_9 = lxx_generated_compute(lane_9_grad_x);
  set_at<288, 512, 32>(whole_result, result_9);

  hw_uint<32> lane_10_grad_x;
  set_at<0, 32, 32>(lane_10_grad_x, grad_x.extract<320, 351>());
  auto result_10 = lxx_generated_compute(lane_10_grad_x);
  set_at<320, 512, 32>(whole_result, result_10);

  hw_uint<32> lane_11_grad_x;
  set_at<0, 32, 32>(lane_11_grad_x, grad_x.extract<352, 383>());
  auto result_11 = lxx_generated_compute(lane_11_grad_x);
  set_at<352, 512, 32>(whole_result, result_11);

  hw_uint<32> lane_12_grad_x;
  set_at<0, 32, 32>(lane_12_grad_x, grad_x.extract<384, 415>());
  auto result_12 = lxx_generated_compute(lane_12_grad_x);
  set_at<384, 512, 32>(whole_result, result_12);

  hw_uint<32> lane_13_grad_x;
  set_at<0, 32, 32>(lane_13_grad_x, grad_x.extract<416, 447>());
  auto result_13 = lxx_generated_compute(lane_13_grad_x);
  set_at<416, 512, 32>(whole_result, result_13);

  hw_uint<32> lane_14_grad_x;
  set_at<0, 32, 32>(lane_14_grad_x, grad_x.extract<448, 479>());
  auto result_14 = lxx_generated_compute(lane_14_grad_x);
  set_at<448, 512, 32>(whole_result, result_14);

  hw_uint<32> lane_15_grad_x;
  set_at<0, 32, 32>(lane_15_grad_x, grad_x.extract<480, 511>());
  auto result_15 = lxx_generated_compute(lane_15_grad_x);
  set_at<480, 512, 32>(whole_result, result_15);
  return whole_result;
}

  // lgyy_update_0 unroll factor: 16
hw_uint<512>  lgyy_generated_compute_unrolled_16(hw_uint<4608>& lyy) {
  hw_uint<512> whole_result;

  hw_uint<288> lane_0_lyy;
  set_at<0, 288, 288>(lane_0_lyy, lyy.extract<0, 287>());
  auto result_0 = lgyy_generated_compute(lane_0_lyy);
  set_at<0, 512, 32>(whole_result, result_0);

  hw_uint<288> lane_1_lyy;
  set_at<0, 288, 288>(lane_1_lyy, lyy.extract<288, 575>());
  auto result_1 = lgyy_generated_compute(lane_1_lyy);
  set_at<32, 512, 32>(whole_result, result_1);

  hw_uint<288> lane_2_lyy;
  set_at<0, 288, 288>(lane_2_lyy, lyy.extract<576, 863>());
  auto result_2 = lgyy_generated_compute(lane_2_lyy);
  set_at<64, 512, 32>(whole_result, result_2);

  hw_uint<288> lane_3_lyy;
  set_at<0, 288, 288>(lane_3_lyy, lyy.extract<864, 1151>());
  auto result_3 = lgyy_generated_compute(lane_3_lyy);
  set_at<96, 512, 32>(whole_result, result_3);

  hw_uint<288> lane_4_lyy;
  set_at<0, 288, 288>(lane_4_lyy, lyy.extract<1152, 1439>());
  auto result_4 = lgyy_generated_compute(lane_4_lyy);
  set_at<128, 512, 32>(whole_result, result_4);

  hw_uint<288> lane_5_lyy;
  set_at<0, 288, 288>(lane_5_lyy, lyy.extract<1440, 1727>());
  auto result_5 = lgyy_generated_compute(lane_5_lyy);
  set_at<160, 512, 32>(whole_result, result_5);

  hw_uint<288> lane_6_lyy;
  set_at<0, 288, 288>(lane_6_lyy, lyy.extract<1728, 2015>());
  auto result_6 = lgyy_generated_compute(lane_6_lyy);
  set_at<192, 512, 32>(whole_result, result_6);

  hw_uint<288> lane_7_lyy;
  set_at<0, 288, 288>(lane_7_lyy, lyy.extract<2016, 2303>());
  auto result_7 = lgyy_generated_compute(lane_7_lyy);
  set_at<224, 512, 32>(whole_result, result_7);

  hw_uint<288> lane_8_lyy;
  set_at<0, 288, 288>(lane_8_lyy, lyy.extract<2304, 2591>());
  auto result_8 = lgyy_generated_compute(lane_8_lyy);
  set_at<256, 512, 32>(whole_result, result_8);

  hw_uint<288> lane_9_lyy;
  set_at<0, 288, 288>(lane_9_lyy, lyy.extract<2592, 2879>());
  auto result_9 = lgyy_generated_compute(lane_9_lyy);
  set_at<288, 512, 32>(whole_result, result_9);

  hw_uint<288> lane_10_lyy;
  set_at<0, 288, 288>(lane_10_lyy, lyy.extract<2880, 3167>());
  auto result_10 = lgyy_generated_compute(lane_10_lyy);
  set_at<320, 512, 32>(whole_result, result_10);

  hw_uint<288> lane_11_lyy;
  set_at<0, 288, 288>(lane_11_lyy, lyy.extract<3168, 3455>());
  auto result_11 = lgyy_generated_compute(lane_11_lyy);
  set_at<352, 512, 32>(whole_result, result_11);

  hw_uint<288> lane_12_lyy;
  set_at<0, 288, 288>(lane_12_lyy, lyy.extract<3456, 3743>());
  auto result_12 = lgyy_generated_compute(lane_12_lyy);
  set_at<384, 512, 32>(whole_result, result_12);

  hw_uint<288> lane_13_lyy;
  set_at<0, 288, 288>(lane_13_lyy, lyy.extract<3744, 4031>());
  auto result_13 = lgyy_generated_compute(lane_13_lyy);
  set_at<416, 512, 32>(whole_result, result_13);

  hw_uint<288> lane_14_lyy;
  set_at<0, 288, 288>(lane_14_lyy, lyy.extract<4032, 4319>());
  auto result_14 = lgyy_generated_compute(lane_14_lyy);
  set_at<448, 512, 32>(whole_result, result_14);

  hw_uint<288> lane_15_lyy;
  set_at<0, 288, 288>(lane_15_lyy, lyy.extract<4320, 4607>());
  auto result_15 = lgyy_generated_compute(lane_15_lyy);
  set_at<480, 512, 32>(whole_result, result_15);
  return whole_result;
}

  // lgxy_update_0 unroll factor: 16
hw_uint<512>  lgxy_generated_compute_unrolled_16(hw_uint<4608>& lxy) {
  hw_uint<512> whole_result;

  hw_uint<288> lane_0_lxy;
  set_at<0, 288, 288>(lane_0_lxy, lxy.extract<0, 287>());
  auto result_0 = lgxy_generated_compute(lane_0_lxy);
  set_at<0, 512, 32>(whole_result, result_0);

  hw_uint<288> lane_1_lxy;
  set_at<0, 288, 288>(lane_1_lxy, lxy.extract<288, 575>());
  auto result_1 = lgxy_generated_compute(lane_1_lxy);
  set_at<32, 512, 32>(whole_result, result_1);

  hw_uint<288> lane_2_lxy;
  set_at<0, 288, 288>(lane_2_lxy, lxy.extract<576, 863>());
  auto result_2 = lgxy_generated_compute(lane_2_lxy);
  set_at<64, 512, 32>(whole_result, result_2);

  hw_uint<288> lane_3_lxy;
  set_at<0, 288, 288>(lane_3_lxy, lxy.extract<864, 1151>());
  auto result_3 = lgxy_generated_compute(lane_3_lxy);
  set_at<96, 512, 32>(whole_result, result_3);

  hw_uint<288> lane_4_lxy;
  set_at<0, 288, 288>(lane_4_lxy, lxy.extract<1152, 1439>());
  auto result_4 = lgxy_generated_compute(lane_4_lxy);
  set_at<128, 512, 32>(whole_result, result_4);

  hw_uint<288> lane_5_lxy;
  set_at<0, 288, 288>(lane_5_lxy, lxy.extract<1440, 1727>());
  auto result_5 = lgxy_generated_compute(lane_5_lxy);
  set_at<160, 512, 32>(whole_result, result_5);

  hw_uint<288> lane_6_lxy;
  set_at<0, 288, 288>(lane_6_lxy, lxy.extract<1728, 2015>());
  auto result_6 = lgxy_generated_compute(lane_6_lxy);
  set_at<192, 512, 32>(whole_result, result_6);

  hw_uint<288> lane_7_lxy;
  set_at<0, 288, 288>(lane_7_lxy, lxy.extract<2016, 2303>());
  auto result_7 = lgxy_generated_compute(lane_7_lxy);
  set_at<224, 512, 32>(whole_result, result_7);

  hw_uint<288> lane_8_lxy;
  set_at<0, 288, 288>(lane_8_lxy, lxy.extract<2304, 2591>());
  auto result_8 = lgxy_generated_compute(lane_8_lxy);
  set_at<256, 512, 32>(whole_result, result_8);

  hw_uint<288> lane_9_lxy;
  set_at<0, 288, 288>(lane_9_lxy, lxy.extract<2592, 2879>());
  auto result_9 = lgxy_generated_compute(lane_9_lxy);
  set_at<288, 512, 32>(whole_result, result_9);

  hw_uint<288> lane_10_lxy;
  set_at<0, 288, 288>(lane_10_lxy, lxy.extract<2880, 3167>());
  auto result_10 = lgxy_generated_compute(lane_10_lxy);
  set_at<320, 512, 32>(whole_result, result_10);

  hw_uint<288> lane_11_lxy;
  set_at<0, 288, 288>(lane_11_lxy, lxy.extract<3168, 3455>());
  auto result_11 = lgxy_generated_compute(lane_11_lxy);
  set_at<352, 512, 32>(whole_result, result_11);

  hw_uint<288> lane_12_lxy;
  set_at<0, 288, 288>(lane_12_lxy, lxy.extract<3456, 3743>());
  auto result_12 = lgxy_generated_compute(lane_12_lxy);
  set_at<384, 512, 32>(whole_result, result_12);

  hw_uint<288> lane_13_lxy;
  set_at<0, 288, 288>(lane_13_lxy, lxy.extract<3744, 4031>());
  auto result_13 = lgxy_generated_compute(lane_13_lxy);
  set_at<416, 512, 32>(whole_result, result_13);

  hw_uint<288> lane_14_lxy;
  set_at<0, 288, 288>(lane_14_lxy, lxy.extract<4032, 4319>());
  auto result_14 = lgxy_generated_compute(lane_14_lxy);
  set_at<448, 512, 32>(whole_result, result_14);

  hw_uint<288> lane_15_lxy;
  set_at<0, 288, 288>(lane_15_lxy, lxy.extract<4320, 4607>());
  auto result_15 = lgxy_generated_compute(lane_15_lxy);
  set_at<480, 512, 32>(whole_result, result_15);
  return whole_result;
}

  // lgxx_update_0 unroll factor: 16
hw_uint<512>  lgxx_generated_compute_unrolled_16(hw_uint<4608>& lxx) {
  hw_uint<512> whole_result;

  hw_uint<288> lane_0_lxx;
  set_at<0, 288, 288>(lane_0_lxx, lxx.extract<0, 287>());
  auto result_0 = lgxx_generated_compute(lane_0_lxx);
  set_at<0, 512, 32>(whole_result, result_0);

  hw_uint<288> lane_1_lxx;
  set_at<0, 288, 288>(lane_1_lxx, lxx.extract<288, 575>());
  auto result_1 = lgxx_generated_compute(lane_1_lxx);
  set_at<32, 512, 32>(whole_result, result_1);

  hw_uint<288> lane_2_lxx;
  set_at<0, 288, 288>(lane_2_lxx, lxx.extract<576, 863>());
  auto result_2 = lgxx_generated_compute(lane_2_lxx);
  set_at<64, 512, 32>(whole_result, result_2);

  hw_uint<288> lane_3_lxx;
  set_at<0, 288, 288>(lane_3_lxx, lxx.extract<864, 1151>());
  auto result_3 = lgxx_generated_compute(lane_3_lxx);
  set_at<96, 512, 32>(whole_result, result_3);

  hw_uint<288> lane_4_lxx;
  set_at<0, 288, 288>(lane_4_lxx, lxx.extract<1152, 1439>());
  auto result_4 = lgxx_generated_compute(lane_4_lxx);
  set_at<128, 512, 32>(whole_result, result_4);

  hw_uint<288> lane_5_lxx;
  set_at<0, 288, 288>(lane_5_lxx, lxx.extract<1440, 1727>());
  auto result_5 = lgxx_generated_compute(lane_5_lxx);
  set_at<160, 512, 32>(whole_result, result_5);

  hw_uint<288> lane_6_lxx;
  set_at<0, 288, 288>(lane_6_lxx, lxx.extract<1728, 2015>());
  auto result_6 = lgxx_generated_compute(lane_6_lxx);
  set_at<192, 512, 32>(whole_result, result_6);

  hw_uint<288> lane_7_lxx;
  set_at<0, 288, 288>(lane_7_lxx, lxx.extract<2016, 2303>());
  auto result_7 = lgxx_generated_compute(lane_7_lxx);
  set_at<224, 512, 32>(whole_result, result_7);

  hw_uint<288> lane_8_lxx;
  set_at<0, 288, 288>(lane_8_lxx, lxx.extract<2304, 2591>());
  auto result_8 = lgxx_generated_compute(lane_8_lxx);
  set_at<256, 512, 32>(whole_result, result_8);

  hw_uint<288> lane_9_lxx;
  set_at<0, 288, 288>(lane_9_lxx, lxx.extract<2592, 2879>());
  auto result_9 = lgxx_generated_compute(lane_9_lxx);
  set_at<288, 512, 32>(whole_result, result_9);

  hw_uint<288> lane_10_lxx;
  set_at<0, 288, 288>(lane_10_lxx, lxx.extract<2880, 3167>());
  auto result_10 = lgxx_generated_compute(lane_10_lxx);
  set_at<320, 512, 32>(whole_result, result_10);

  hw_uint<288> lane_11_lxx;
  set_at<0, 288, 288>(lane_11_lxx, lxx.extract<3168, 3455>());
  auto result_11 = lgxx_generated_compute(lane_11_lxx);
  set_at<352, 512, 32>(whole_result, result_11);

  hw_uint<288> lane_12_lxx;
  set_at<0, 288, 288>(lane_12_lxx, lxx.extract<3456, 3743>());
  auto result_12 = lgxx_generated_compute(lane_12_lxx);
  set_at<384, 512, 32>(whole_result, result_12);

  hw_uint<288> lane_13_lxx;
  set_at<0, 288, 288>(lane_13_lxx, lxx.extract<3744, 4031>());
  auto result_13 = lgxx_generated_compute(lane_13_lxx);
  set_at<416, 512, 32>(whole_result, result_13);

  hw_uint<288> lane_14_lxx;
  set_at<0, 288, 288>(lane_14_lxx, lxx.extract<4032, 4319>());
  auto result_14 = lgxx_generated_compute(lane_14_lxx);
  set_at<448, 512, 32>(whole_result, result_14);

  hw_uint<288> lane_15_lxx;
  set_at<0, 288, 288>(lane_15_lxx, lxx.extract<4320, 4607>());
  auto result_15 = lgxx_generated_compute(lane_15_lxx);
  set_at<480, 512, 32>(whole_result, result_15);
  return whole_result;
}

  // lgyy8_update_0 unroll factor: 16
hw_uint<512>  lgyy8_generated_compute_unrolled_16(hw_uint<512>& lgyy) {
  hw_uint<512> whole_result;

  hw_uint<32> lane_0_lgyy;
  set_at<0, 32, 32>(lane_0_lgyy, lgyy.extract<0, 31>());
  auto result_0 = lgyy8_generated_compute(lane_0_lgyy);
  set_at<0, 512, 32>(whole_result, result_0);

  hw_uint<32> lane_1_lgyy;
  set_at<0, 32, 32>(lane_1_lgyy, lgyy.extract<32, 63>());
  auto result_1 = lgyy8_generated_compute(lane_1_lgyy);
  set_at<32, 512, 32>(whole_result, result_1);

  hw_uint<32> lane_2_lgyy;
  set_at<0, 32, 32>(lane_2_lgyy, lgyy.extract<64, 95>());
  auto result_2 = lgyy8_generated_compute(lane_2_lgyy);
  set_at<64, 512, 32>(whole_result, result_2);

  hw_uint<32> lane_3_lgyy;
  set_at<0, 32, 32>(lane_3_lgyy, lgyy.extract<96, 127>());
  auto result_3 = lgyy8_generated_compute(lane_3_lgyy);
  set_at<96, 512, 32>(whole_result, result_3);

  hw_uint<32> lane_4_lgyy;
  set_at<0, 32, 32>(lane_4_lgyy, lgyy.extract<128, 159>());
  auto result_4 = lgyy8_generated_compute(lane_4_lgyy);
  set_at<128, 512, 32>(whole_result, result_4);

  hw_uint<32> lane_5_lgyy;
  set_at<0, 32, 32>(lane_5_lgyy, lgyy.extract<160, 191>());
  auto result_5 = lgyy8_generated_compute(lane_5_lgyy);
  set_at<160, 512, 32>(whole_result, result_5);

  hw_uint<32> lane_6_lgyy;
  set_at<0, 32, 32>(lane_6_lgyy, lgyy.extract<192, 223>());
  auto result_6 = lgyy8_generated_compute(lane_6_lgyy);
  set_at<192, 512, 32>(whole_result, result_6);

  hw_uint<32> lane_7_lgyy;
  set_at<0, 32, 32>(lane_7_lgyy, lgyy.extract<224, 255>());
  auto result_7 = lgyy8_generated_compute(lane_7_lgyy);
  set_at<224, 512, 32>(whole_result, result_7);

  hw_uint<32> lane_8_lgyy;
  set_at<0, 32, 32>(lane_8_lgyy, lgyy.extract<256, 287>());
  auto result_8 = lgyy8_generated_compute(lane_8_lgyy);
  set_at<256, 512, 32>(whole_result, result_8);

  hw_uint<32> lane_9_lgyy;
  set_at<0, 32, 32>(lane_9_lgyy, lgyy.extract<288, 319>());
  auto result_9 = lgyy8_generated_compute(lane_9_lgyy);
  set_at<288, 512, 32>(whole_result, result_9);

  hw_uint<32> lane_10_lgyy;
  set_at<0, 32, 32>(lane_10_lgyy, lgyy.extract<320, 351>());
  auto result_10 = lgyy8_generated_compute(lane_10_lgyy);
  set_at<320, 512, 32>(whole_result, result_10);

  hw_uint<32> lane_11_lgyy;
  set_at<0, 32, 32>(lane_11_lgyy, lgyy.extract<352, 383>());
  auto result_11 = lgyy8_generated_compute(lane_11_lgyy);
  set_at<352, 512, 32>(whole_result, result_11);

  hw_uint<32> lane_12_lgyy;
  set_at<0, 32, 32>(lane_12_lgyy, lgyy.extract<384, 415>());
  auto result_12 = lgyy8_generated_compute(lane_12_lgyy);
  set_at<384, 512, 32>(whole_result, result_12);

  hw_uint<32> lane_13_lgyy;
  set_at<0, 32, 32>(lane_13_lgyy, lgyy.extract<416, 447>());
  auto result_13 = lgyy8_generated_compute(lane_13_lgyy);
  set_at<416, 512, 32>(whole_result, result_13);

  hw_uint<32> lane_14_lgyy;
  set_at<0, 32, 32>(lane_14_lgyy, lgyy.extract<448, 479>());
  auto result_14 = lgyy8_generated_compute(lane_14_lgyy);
  set_at<448, 512, 32>(whole_result, result_14);

  hw_uint<32> lane_15_lgyy;
  set_at<0, 32, 32>(lane_15_lgyy, lgyy.extract<480, 511>());
  auto result_15 = lgyy8_generated_compute(lane_15_lgyy);
  set_at<480, 512, 32>(whole_result, result_15);
  return whole_result;
}

  // lgxy8_update_0 unroll factor: 16
hw_uint<512>  lgxy8_generated_compute_unrolled_16(hw_uint<512>& lgxy) {
  hw_uint<512> whole_result;

  hw_uint<32> lane_0_lgxy;
  set_at<0, 32, 32>(lane_0_lgxy, lgxy.extract<0, 31>());
  auto result_0 = lgxy8_generated_compute(lane_0_lgxy);
  set_at<0, 512, 32>(whole_result, result_0);

  hw_uint<32> lane_1_lgxy;
  set_at<0, 32, 32>(lane_1_lgxy, lgxy.extract<32, 63>());
  auto result_1 = lgxy8_generated_compute(lane_1_lgxy);
  set_at<32, 512, 32>(whole_result, result_1);

  hw_uint<32> lane_2_lgxy;
  set_at<0, 32, 32>(lane_2_lgxy, lgxy.extract<64, 95>());
  auto result_2 = lgxy8_generated_compute(lane_2_lgxy);
  set_at<64, 512, 32>(whole_result, result_2);

  hw_uint<32> lane_3_lgxy;
  set_at<0, 32, 32>(lane_3_lgxy, lgxy.extract<96, 127>());
  auto result_3 = lgxy8_generated_compute(lane_3_lgxy);
  set_at<96, 512, 32>(whole_result, result_3);

  hw_uint<32> lane_4_lgxy;
  set_at<0, 32, 32>(lane_4_lgxy, lgxy.extract<128, 159>());
  auto result_4 = lgxy8_generated_compute(lane_4_lgxy);
  set_at<128, 512, 32>(whole_result, result_4);

  hw_uint<32> lane_5_lgxy;
  set_at<0, 32, 32>(lane_5_lgxy, lgxy.extract<160, 191>());
  auto result_5 = lgxy8_generated_compute(lane_5_lgxy);
  set_at<160, 512, 32>(whole_result, result_5);

  hw_uint<32> lane_6_lgxy;
  set_at<0, 32, 32>(lane_6_lgxy, lgxy.extract<192, 223>());
  auto result_6 = lgxy8_generated_compute(lane_6_lgxy);
  set_at<192, 512, 32>(whole_result, result_6);

  hw_uint<32> lane_7_lgxy;
  set_at<0, 32, 32>(lane_7_lgxy, lgxy.extract<224, 255>());
  auto result_7 = lgxy8_generated_compute(lane_7_lgxy);
  set_at<224, 512, 32>(whole_result, result_7);

  hw_uint<32> lane_8_lgxy;
  set_at<0, 32, 32>(lane_8_lgxy, lgxy.extract<256, 287>());
  auto result_8 = lgxy8_generated_compute(lane_8_lgxy);
  set_at<256, 512, 32>(whole_result, result_8);

  hw_uint<32> lane_9_lgxy;
  set_at<0, 32, 32>(lane_9_lgxy, lgxy.extract<288, 319>());
  auto result_9 = lgxy8_generated_compute(lane_9_lgxy);
  set_at<288, 512, 32>(whole_result, result_9);

  hw_uint<32> lane_10_lgxy;
  set_at<0, 32, 32>(lane_10_lgxy, lgxy.extract<320, 351>());
  auto result_10 = lgxy8_generated_compute(lane_10_lgxy);
  set_at<320, 512, 32>(whole_result, result_10);

  hw_uint<32> lane_11_lgxy;
  set_at<0, 32, 32>(lane_11_lgxy, lgxy.extract<352, 383>());
  auto result_11 = lgxy8_generated_compute(lane_11_lgxy);
  set_at<352, 512, 32>(whole_result, result_11);

  hw_uint<32> lane_12_lgxy;
  set_at<0, 32, 32>(lane_12_lgxy, lgxy.extract<384, 415>());
  auto result_12 = lgxy8_generated_compute(lane_12_lgxy);
  set_at<384, 512, 32>(whole_result, result_12);

  hw_uint<32> lane_13_lgxy;
  set_at<0, 32, 32>(lane_13_lgxy, lgxy.extract<416, 447>());
  auto result_13 = lgxy8_generated_compute(lane_13_lgxy);
  set_at<416, 512, 32>(whole_result, result_13);

  hw_uint<32> lane_14_lgxy;
  set_at<0, 32, 32>(lane_14_lgxy, lgxy.extract<448, 479>());
  auto result_14 = lgxy8_generated_compute(lane_14_lgxy);
  set_at<448, 512, 32>(whole_result, result_14);

  hw_uint<32> lane_15_lgxy;
  set_at<0, 32, 32>(lane_15_lgxy, lgxy.extract<480, 511>());
  auto result_15 = lgxy8_generated_compute(lane_15_lgxy);
  set_at<480, 512, 32>(whole_result, result_15);
  return whole_result;
}

  // lgxx8_update_0 unroll factor: 16
hw_uint<512>  lgxx8_generated_compute_unrolled_16(hw_uint<512>& lgxx) {
  hw_uint<512> whole_result;

  hw_uint<32> lane_0_lgxx;
  set_at<0, 32, 32>(lane_0_lgxx, lgxx.extract<0, 31>());
  auto result_0 = lgxx8_generated_compute(lane_0_lgxx);
  set_at<0, 512, 32>(whole_result, result_0);

  hw_uint<32> lane_1_lgxx;
  set_at<0, 32, 32>(lane_1_lgxx, lgxx.extract<32, 63>());
  auto result_1 = lgxx8_generated_compute(lane_1_lgxx);
  set_at<32, 512, 32>(whole_result, result_1);

  hw_uint<32> lane_2_lgxx;
  set_at<0, 32, 32>(lane_2_lgxx, lgxx.extract<64, 95>());
  auto result_2 = lgxx8_generated_compute(lane_2_lgxx);
  set_at<64, 512, 32>(whole_result, result_2);

  hw_uint<32> lane_3_lgxx;
  set_at<0, 32, 32>(lane_3_lgxx, lgxx.extract<96, 127>());
  auto result_3 = lgxx8_generated_compute(lane_3_lgxx);
  set_at<96, 512, 32>(whole_result, result_3);

  hw_uint<32> lane_4_lgxx;
  set_at<0, 32, 32>(lane_4_lgxx, lgxx.extract<128, 159>());
  auto result_4 = lgxx8_generated_compute(lane_4_lgxx);
  set_at<128, 512, 32>(whole_result, result_4);

  hw_uint<32> lane_5_lgxx;
  set_at<0, 32, 32>(lane_5_lgxx, lgxx.extract<160, 191>());
  auto result_5 = lgxx8_generated_compute(lane_5_lgxx);
  set_at<160, 512, 32>(whole_result, result_5);

  hw_uint<32> lane_6_lgxx;
  set_at<0, 32, 32>(lane_6_lgxx, lgxx.extract<192, 223>());
  auto result_6 = lgxx8_generated_compute(lane_6_lgxx);
  set_at<192, 512, 32>(whole_result, result_6);

  hw_uint<32> lane_7_lgxx;
  set_at<0, 32, 32>(lane_7_lgxx, lgxx.extract<224, 255>());
  auto result_7 = lgxx8_generated_compute(lane_7_lgxx);
  set_at<224, 512, 32>(whole_result, result_7);

  hw_uint<32> lane_8_lgxx;
  set_at<0, 32, 32>(lane_8_lgxx, lgxx.extract<256, 287>());
  auto result_8 = lgxx8_generated_compute(lane_8_lgxx);
  set_at<256, 512, 32>(whole_result, result_8);

  hw_uint<32> lane_9_lgxx;
  set_at<0, 32, 32>(lane_9_lgxx, lgxx.extract<288, 319>());
  auto result_9 = lgxx8_generated_compute(lane_9_lgxx);
  set_at<288, 512, 32>(whole_result, result_9);

  hw_uint<32> lane_10_lgxx;
  set_at<0, 32, 32>(lane_10_lgxx, lgxx.extract<320, 351>());
  auto result_10 = lgxx8_generated_compute(lane_10_lgxx);
  set_at<320, 512, 32>(whole_result, result_10);

  hw_uint<32> lane_11_lgxx;
  set_at<0, 32, 32>(lane_11_lgxx, lgxx.extract<352, 383>());
  auto result_11 = lgxx8_generated_compute(lane_11_lgxx);
  set_at<352, 512, 32>(whole_result, result_11);

  hw_uint<32> lane_12_lgxx;
  set_at<0, 32, 32>(lane_12_lgxx, lgxx.extract<384, 415>());
  auto result_12 = lgxx8_generated_compute(lane_12_lgxx);
  set_at<384, 512, 32>(whole_result, result_12);

  hw_uint<32> lane_13_lgxx;
  set_at<0, 32, 32>(lane_13_lgxx, lgxx.extract<416, 447>());
  auto result_13 = lgxx8_generated_compute(lane_13_lgxx);
  set_at<416, 512, 32>(whole_result, result_13);

  hw_uint<32> lane_14_lgxx;
  set_at<0, 32, 32>(lane_14_lgxx, lgxx.extract<448, 479>());
  auto result_14 = lgxx8_generated_compute(lane_14_lgxx);
  set_at<448, 512, 32>(whole_result, result_14);

  hw_uint<32> lane_15_lgxx;
  set_at<0, 32, 32>(lane_15_lgxx, lgxx.extract<480, 511>());
  auto result_15 = lgxx8_generated_compute(lane_15_lgxx);
  set_at<480, 512, 32>(whole_result, result_15);
  return whole_result;
}

  // det_update_0 unroll factor: 16
hw_uint<512>  det_generated_compute_unrolled_16(hw_uint<512>& lgxx8, hw_uint<512>& lgxy8, hw_uint<512>& lgyy8) {
  hw_uint<512> whole_result;

  hw_uint<32> lane_0_lgxx8;
  set_at<0, 32, 32>(lane_0_lgxx8, lgxx8.extract<0, 31>());
  hw_uint<32> lane_0_lgxy8;
  set_at<0, 32, 32>(lane_0_lgxy8, lgxy8.extract<0, 31>());
  hw_uint<32> lane_0_lgyy8;
  set_at<0, 32, 32>(lane_0_lgyy8, lgyy8.extract<0, 31>());
  auto result_0 = det_generated_compute(lane_0_lgxx8, lane_0_lgxy8, lane_0_lgyy8);
  set_at<0, 512, 32>(whole_result, result_0);

  hw_uint<32> lane_1_lgxx8;
  set_at<0, 32, 32>(lane_1_lgxx8, lgxx8.extract<32, 63>());
  hw_uint<32> lane_1_lgxy8;
  set_at<0, 32, 32>(lane_1_lgxy8, lgxy8.extract<32, 63>());
  hw_uint<32> lane_1_lgyy8;
  set_at<0, 32, 32>(lane_1_lgyy8, lgyy8.extract<32, 63>());
  auto result_1 = det_generated_compute(lane_1_lgxx8, lane_1_lgxy8, lane_1_lgyy8);
  set_at<32, 512, 32>(whole_result, result_1);

  hw_uint<32> lane_2_lgxx8;
  set_at<0, 32, 32>(lane_2_lgxx8, lgxx8.extract<64, 95>());
  hw_uint<32> lane_2_lgxy8;
  set_at<0, 32, 32>(lane_2_lgxy8, lgxy8.extract<64, 95>());
  hw_uint<32> lane_2_lgyy8;
  set_at<0, 32, 32>(lane_2_lgyy8, lgyy8.extract<64, 95>());
  auto result_2 = det_generated_compute(lane_2_lgxx8, lane_2_lgxy8, lane_2_lgyy8);
  set_at<64, 512, 32>(whole_result, result_2);

  hw_uint<32> lane_3_lgxx8;
  set_at<0, 32, 32>(lane_3_lgxx8, lgxx8.extract<96, 127>());
  hw_uint<32> lane_3_lgxy8;
  set_at<0, 32, 32>(lane_3_lgxy8, lgxy8.extract<96, 127>());
  hw_uint<32> lane_3_lgyy8;
  set_at<0, 32, 32>(lane_3_lgyy8, lgyy8.extract<96, 127>());
  auto result_3 = det_generated_compute(lane_3_lgxx8, lane_3_lgxy8, lane_3_lgyy8);
  set_at<96, 512, 32>(whole_result, result_3);

  hw_uint<32> lane_4_lgxx8;
  set_at<0, 32, 32>(lane_4_lgxx8, lgxx8.extract<128, 159>());
  hw_uint<32> lane_4_lgxy8;
  set_at<0, 32, 32>(lane_4_lgxy8, lgxy8.extract<128, 159>());
  hw_uint<32> lane_4_lgyy8;
  set_at<0, 32, 32>(lane_4_lgyy8, lgyy8.extract<128, 159>());
  auto result_4 = det_generated_compute(lane_4_lgxx8, lane_4_lgxy8, lane_4_lgyy8);
  set_at<128, 512, 32>(whole_result, result_4);

  hw_uint<32> lane_5_lgxx8;
  set_at<0, 32, 32>(lane_5_lgxx8, lgxx8.extract<160, 191>());
  hw_uint<32> lane_5_lgxy8;
  set_at<0, 32, 32>(lane_5_lgxy8, lgxy8.extract<160, 191>());
  hw_uint<32> lane_5_lgyy8;
  set_at<0, 32, 32>(lane_5_lgyy8, lgyy8.extract<160, 191>());
  auto result_5 = det_generated_compute(lane_5_lgxx8, lane_5_lgxy8, lane_5_lgyy8);
  set_at<160, 512, 32>(whole_result, result_5);

  hw_uint<32> lane_6_lgxx8;
  set_at<0, 32, 32>(lane_6_lgxx8, lgxx8.extract<192, 223>());
  hw_uint<32> lane_6_lgxy8;
  set_at<0, 32, 32>(lane_6_lgxy8, lgxy8.extract<192, 223>());
  hw_uint<32> lane_6_lgyy8;
  set_at<0, 32, 32>(lane_6_lgyy8, lgyy8.extract<192, 223>());
  auto result_6 = det_generated_compute(lane_6_lgxx8, lane_6_lgxy8, lane_6_lgyy8);
  set_at<192, 512, 32>(whole_result, result_6);

  hw_uint<32> lane_7_lgxx8;
  set_at<0, 32, 32>(lane_7_lgxx8, lgxx8.extract<224, 255>());
  hw_uint<32> lane_7_lgxy8;
  set_at<0, 32, 32>(lane_7_lgxy8, lgxy8.extract<224, 255>());
  hw_uint<32> lane_7_lgyy8;
  set_at<0, 32, 32>(lane_7_lgyy8, lgyy8.extract<224, 255>());
  auto result_7 = det_generated_compute(lane_7_lgxx8, lane_7_lgxy8, lane_7_lgyy8);
  set_at<224, 512, 32>(whole_result, result_7);

  hw_uint<32> lane_8_lgxx8;
  set_at<0, 32, 32>(lane_8_lgxx8, lgxx8.extract<256, 287>());
  hw_uint<32> lane_8_lgxy8;
  set_at<0, 32, 32>(lane_8_lgxy8, lgxy8.extract<256, 287>());
  hw_uint<32> lane_8_lgyy8;
  set_at<0, 32, 32>(lane_8_lgyy8, lgyy8.extract<256, 287>());
  auto result_8 = det_generated_compute(lane_8_lgxx8, lane_8_lgxy8, lane_8_lgyy8);
  set_at<256, 512, 32>(whole_result, result_8);

  hw_uint<32> lane_9_lgxx8;
  set_at<0, 32, 32>(lane_9_lgxx8, lgxx8.extract<288, 319>());
  hw_uint<32> lane_9_lgxy8;
  set_at<0, 32, 32>(lane_9_lgxy8, lgxy8.extract<288, 319>());
  hw_uint<32> lane_9_lgyy8;
  set_at<0, 32, 32>(lane_9_lgyy8, lgyy8.extract<288, 319>());
  auto result_9 = det_generated_compute(lane_9_lgxx8, lane_9_lgxy8, lane_9_lgyy8);
  set_at<288, 512, 32>(whole_result, result_9);

  hw_uint<32> lane_10_lgxx8;
  set_at<0, 32, 32>(lane_10_lgxx8, lgxx8.extract<320, 351>());
  hw_uint<32> lane_10_lgxy8;
  set_at<0, 32, 32>(lane_10_lgxy8, lgxy8.extract<320, 351>());
  hw_uint<32> lane_10_lgyy8;
  set_at<0, 32, 32>(lane_10_lgyy8, lgyy8.extract<320, 351>());
  auto result_10 = det_generated_compute(lane_10_lgxx8, lane_10_lgxy8, lane_10_lgyy8);
  set_at<320, 512, 32>(whole_result, result_10);

  hw_uint<32> lane_11_lgxx8;
  set_at<0, 32, 32>(lane_11_lgxx8, lgxx8.extract<352, 383>());
  hw_uint<32> lane_11_lgxy8;
  set_at<0, 32, 32>(lane_11_lgxy8, lgxy8.extract<352, 383>());
  hw_uint<32> lane_11_lgyy8;
  set_at<0, 32, 32>(lane_11_lgyy8, lgyy8.extract<352, 383>());
  auto result_11 = det_generated_compute(lane_11_lgxx8, lane_11_lgxy8, lane_11_lgyy8);
  set_at<352, 512, 32>(whole_result, result_11);

  hw_uint<32> lane_12_lgxx8;
  set_at<0, 32, 32>(lane_12_lgxx8, lgxx8.extract<384, 415>());
  hw_uint<32> lane_12_lgxy8;
  set_at<0, 32, 32>(lane_12_lgxy8, lgxy8.extract<384, 415>());
  hw_uint<32> lane_12_lgyy8;
  set_at<0, 32, 32>(lane_12_lgyy8, lgyy8.extract<384, 415>());
  auto result_12 = det_generated_compute(lane_12_lgxx8, lane_12_lgxy8, lane_12_lgyy8);
  set_at<384, 512, 32>(whole_result, result_12);

  hw_uint<32> lane_13_lgxx8;
  set_at<0, 32, 32>(lane_13_lgxx8, lgxx8.extract<416, 447>());
  hw_uint<32> lane_13_lgxy8;
  set_at<0, 32, 32>(lane_13_lgxy8, lgxy8.extract<416, 447>());
  hw_uint<32> lane_13_lgyy8;
  set_at<0, 32, 32>(lane_13_lgyy8, lgyy8.extract<416, 447>());
  auto result_13 = det_generated_compute(lane_13_lgxx8, lane_13_lgxy8, lane_13_lgyy8);
  set_at<416, 512, 32>(whole_result, result_13);

  hw_uint<32> lane_14_lgxx8;
  set_at<0, 32, 32>(lane_14_lgxx8, lgxx8.extract<448, 479>());
  hw_uint<32> lane_14_lgxy8;
  set_at<0, 32, 32>(lane_14_lgxy8, lgxy8.extract<448, 479>());
  hw_uint<32> lane_14_lgyy8;
  set_at<0, 32, 32>(lane_14_lgyy8, lgyy8.extract<448, 479>());
  auto result_14 = det_generated_compute(lane_14_lgxx8, lane_14_lgxy8, lane_14_lgyy8);
  set_at<448, 512, 32>(whole_result, result_14);

  hw_uint<32> lane_15_lgxx8;
  set_at<0, 32, 32>(lane_15_lgxx8, lgxx8.extract<480, 511>());
  hw_uint<32> lane_15_lgxy8;
  set_at<0, 32, 32>(lane_15_lgxy8, lgxy8.extract<480, 511>());
  hw_uint<32> lane_15_lgyy8;
  set_at<0, 32, 32>(lane_15_lgyy8, lgyy8.extract<480, 511>());
  auto result_15 = det_generated_compute(lane_15_lgxx8, lane_15_lgxy8, lane_15_lgyy8);
  set_at<480, 512, 32>(whole_result, result_15);
  return whole_result;
}

  // trace_update_0 unroll factor: 16
hw_uint<512>  trace_generated_compute_unrolled_16(hw_uint<512>& lgxx8, hw_uint<512>& lgyy8) {
  hw_uint<512> whole_result;

  hw_uint<32> lane_0_lgxx8;
  set_at<0, 32, 32>(lane_0_lgxx8, lgxx8.extract<0, 31>());
  hw_uint<32> lane_0_lgyy8;
  set_at<0, 32, 32>(lane_0_lgyy8, lgyy8.extract<0, 31>());
  auto result_0 = trace_generated_compute(lane_0_lgxx8, lane_0_lgyy8);
  set_at<0, 512, 32>(whole_result, result_0);

  hw_uint<32> lane_1_lgxx8;
  set_at<0, 32, 32>(lane_1_lgxx8, lgxx8.extract<32, 63>());
  hw_uint<32> lane_1_lgyy8;
  set_at<0, 32, 32>(lane_1_lgyy8, lgyy8.extract<32, 63>());
  auto result_1 = trace_generated_compute(lane_1_lgxx8, lane_1_lgyy8);
  set_at<32, 512, 32>(whole_result, result_1);

  hw_uint<32> lane_2_lgxx8;
  set_at<0, 32, 32>(lane_2_lgxx8, lgxx8.extract<64, 95>());
  hw_uint<32> lane_2_lgyy8;
  set_at<0, 32, 32>(lane_2_lgyy8, lgyy8.extract<64, 95>());
  auto result_2 = trace_generated_compute(lane_2_lgxx8, lane_2_lgyy8);
  set_at<64, 512, 32>(whole_result, result_2);

  hw_uint<32> lane_3_lgxx8;
  set_at<0, 32, 32>(lane_3_lgxx8, lgxx8.extract<96, 127>());
  hw_uint<32> lane_3_lgyy8;
  set_at<0, 32, 32>(lane_3_lgyy8, lgyy8.extract<96, 127>());
  auto result_3 = trace_generated_compute(lane_3_lgxx8, lane_3_lgyy8);
  set_at<96, 512, 32>(whole_result, result_3);

  hw_uint<32> lane_4_lgxx8;
  set_at<0, 32, 32>(lane_4_lgxx8, lgxx8.extract<128, 159>());
  hw_uint<32> lane_4_lgyy8;
  set_at<0, 32, 32>(lane_4_lgyy8, lgyy8.extract<128, 159>());
  auto result_4 = trace_generated_compute(lane_4_lgxx8, lane_4_lgyy8);
  set_at<128, 512, 32>(whole_result, result_4);

  hw_uint<32> lane_5_lgxx8;
  set_at<0, 32, 32>(lane_5_lgxx8, lgxx8.extract<160, 191>());
  hw_uint<32> lane_5_lgyy8;
  set_at<0, 32, 32>(lane_5_lgyy8, lgyy8.extract<160, 191>());
  auto result_5 = trace_generated_compute(lane_5_lgxx8, lane_5_lgyy8);
  set_at<160, 512, 32>(whole_result, result_5);

  hw_uint<32> lane_6_lgxx8;
  set_at<0, 32, 32>(lane_6_lgxx8, lgxx8.extract<192, 223>());
  hw_uint<32> lane_6_lgyy8;
  set_at<0, 32, 32>(lane_6_lgyy8, lgyy8.extract<192, 223>());
  auto result_6 = trace_generated_compute(lane_6_lgxx8, lane_6_lgyy8);
  set_at<192, 512, 32>(whole_result, result_6);

  hw_uint<32> lane_7_lgxx8;
  set_at<0, 32, 32>(lane_7_lgxx8, lgxx8.extract<224, 255>());
  hw_uint<32> lane_7_lgyy8;
  set_at<0, 32, 32>(lane_7_lgyy8, lgyy8.extract<224, 255>());
  auto result_7 = trace_generated_compute(lane_7_lgxx8, lane_7_lgyy8);
  set_at<224, 512, 32>(whole_result, result_7);

  hw_uint<32> lane_8_lgxx8;
  set_at<0, 32, 32>(lane_8_lgxx8, lgxx8.extract<256, 287>());
  hw_uint<32> lane_8_lgyy8;
  set_at<0, 32, 32>(lane_8_lgyy8, lgyy8.extract<256, 287>());
  auto result_8 = trace_generated_compute(lane_8_lgxx8, lane_8_lgyy8);
  set_at<256, 512, 32>(whole_result, result_8);

  hw_uint<32> lane_9_lgxx8;
  set_at<0, 32, 32>(lane_9_lgxx8, lgxx8.extract<288, 319>());
  hw_uint<32> lane_9_lgyy8;
  set_at<0, 32, 32>(lane_9_lgyy8, lgyy8.extract<288, 319>());
  auto result_9 = trace_generated_compute(lane_9_lgxx8, lane_9_lgyy8);
  set_at<288, 512, 32>(whole_result, result_9);

  hw_uint<32> lane_10_lgxx8;
  set_at<0, 32, 32>(lane_10_lgxx8, lgxx8.extract<320, 351>());
  hw_uint<32> lane_10_lgyy8;
  set_at<0, 32, 32>(lane_10_lgyy8, lgyy8.extract<320, 351>());
  auto result_10 = trace_generated_compute(lane_10_lgxx8, lane_10_lgyy8);
  set_at<320, 512, 32>(whole_result, result_10);

  hw_uint<32> lane_11_lgxx8;
  set_at<0, 32, 32>(lane_11_lgxx8, lgxx8.extract<352, 383>());
  hw_uint<32> lane_11_lgyy8;
  set_at<0, 32, 32>(lane_11_lgyy8, lgyy8.extract<352, 383>());
  auto result_11 = trace_generated_compute(lane_11_lgxx8, lane_11_lgyy8);
  set_at<352, 512, 32>(whole_result, result_11);

  hw_uint<32> lane_12_lgxx8;
  set_at<0, 32, 32>(lane_12_lgxx8, lgxx8.extract<384, 415>());
  hw_uint<32> lane_12_lgyy8;
  set_at<0, 32, 32>(lane_12_lgyy8, lgyy8.extract<384, 415>());
  auto result_12 = trace_generated_compute(lane_12_lgxx8, lane_12_lgyy8);
  set_at<384, 512, 32>(whole_result, result_12);

  hw_uint<32> lane_13_lgxx8;
  set_at<0, 32, 32>(lane_13_lgxx8, lgxx8.extract<416, 447>());
  hw_uint<32> lane_13_lgyy8;
  set_at<0, 32, 32>(lane_13_lgyy8, lgyy8.extract<416, 447>());
  auto result_13 = trace_generated_compute(lane_13_lgxx8, lane_13_lgyy8);
  set_at<416, 512, 32>(whole_result, result_13);

  hw_uint<32> lane_14_lgxx8;
  set_at<0, 32, 32>(lane_14_lgxx8, lgxx8.extract<448, 479>());
  hw_uint<32> lane_14_lgyy8;
  set_at<0, 32, 32>(lane_14_lgyy8, lgyy8.extract<448, 479>());
  auto result_14 = trace_generated_compute(lane_14_lgxx8, lane_14_lgyy8);
  set_at<448, 512, 32>(whole_result, result_14);

  hw_uint<32> lane_15_lgxx8;
  set_at<0, 32, 32>(lane_15_lgxx8, lgxx8.extract<480, 511>());
  hw_uint<32> lane_15_lgyy8;
  set_at<0, 32, 32>(lane_15_lgyy8, lgyy8.extract<480, 511>());
  auto result_15 = trace_generated_compute(lane_15_lgxx8, lane_15_lgyy8);
  set_at<480, 512, 32>(whole_result, result_15);
  return whole_result;
}

  // hr_16_update_0 unroll factor: 16
hw_uint<512>  hr_16_generated_compute_unrolled_16(hw_uint<512>& det, hw_uint<512>& trace) {
  hw_uint<512> whole_result;

  hw_uint<32> lane_0_det;
  set_at<0, 32, 32>(lane_0_det, det.extract<0, 31>());
  hw_uint<32> lane_0_trace;
  set_at<0, 32, 32>(lane_0_trace, trace.extract<0, 31>());
  auto result_0 = hr_16_generated_compute(lane_0_det, lane_0_trace);
  set_at<0, 512, 32>(whole_result, result_0);

  hw_uint<32> lane_1_det;
  set_at<0, 32, 32>(lane_1_det, det.extract<32, 63>());
  hw_uint<32> lane_1_trace;
  set_at<0, 32, 32>(lane_1_trace, trace.extract<32, 63>());
  auto result_1 = hr_16_generated_compute(lane_1_det, lane_1_trace);
  set_at<32, 512, 32>(whole_result, result_1);

  hw_uint<32> lane_2_det;
  set_at<0, 32, 32>(lane_2_det, det.extract<64, 95>());
  hw_uint<32> lane_2_trace;
  set_at<0, 32, 32>(lane_2_trace, trace.extract<64, 95>());
  auto result_2 = hr_16_generated_compute(lane_2_det, lane_2_trace);
  set_at<64, 512, 32>(whole_result, result_2);

  hw_uint<32> lane_3_det;
  set_at<0, 32, 32>(lane_3_det, det.extract<96, 127>());
  hw_uint<32> lane_3_trace;
  set_at<0, 32, 32>(lane_3_trace, trace.extract<96, 127>());
  auto result_3 = hr_16_generated_compute(lane_3_det, lane_3_trace);
  set_at<96, 512, 32>(whole_result, result_3);

  hw_uint<32> lane_4_det;
  set_at<0, 32, 32>(lane_4_det, det.extract<128, 159>());
  hw_uint<32> lane_4_trace;
  set_at<0, 32, 32>(lane_4_trace, trace.extract<128, 159>());
  auto result_4 = hr_16_generated_compute(lane_4_det, lane_4_trace);
  set_at<128, 512, 32>(whole_result, result_4);

  hw_uint<32> lane_5_det;
  set_at<0, 32, 32>(lane_5_det, det.extract<160, 191>());
  hw_uint<32> lane_5_trace;
  set_at<0, 32, 32>(lane_5_trace, trace.extract<160, 191>());
  auto result_5 = hr_16_generated_compute(lane_5_det, lane_5_trace);
  set_at<160, 512, 32>(whole_result, result_5);

  hw_uint<32> lane_6_det;
  set_at<0, 32, 32>(lane_6_det, det.extract<192, 223>());
  hw_uint<32> lane_6_trace;
  set_at<0, 32, 32>(lane_6_trace, trace.extract<192, 223>());
  auto result_6 = hr_16_generated_compute(lane_6_det, lane_6_trace);
  set_at<192, 512, 32>(whole_result, result_6);

  hw_uint<32> lane_7_det;
  set_at<0, 32, 32>(lane_7_det, det.extract<224, 255>());
  hw_uint<32> lane_7_trace;
  set_at<0, 32, 32>(lane_7_trace, trace.extract<224, 255>());
  auto result_7 = hr_16_generated_compute(lane_7_det, lane_7_trace);
  set_at<224, 512, 32>(whole_result, result_7);

  hw_uint<32> lane_8_det;
  set_at<0, 32, 32>(lane_8_det, det.extract<256, 287>());
  hw_uint<32> lane_8_trace;
  set_at<0, 32, 32>(lane_8_trace, trace.extract<256, 287>());
  auto result_8 = hr_16_generated_compute(lane_8_det, lane_8_trace);
  set_at<256, 512, 32>(whole_result, result_8);

  hw_uint<32> lane_9_det;
  set_at<0, 32, 32>(lane_9_det, det.extract<288, 319>());
  hw_uint<32> lane_9_trace;
  set_at<0, 32, 32>(lane_9_trace, trace.extract<288, 319>());
  auto result_9 = hr_16_generated_compute(lane_9_det, lane_9_trace);
  set_at<288, 512, 32>(whole_result, result_9);

  hw_uint<32> lane_10_det;
  set_at<0, 32, 32>(lane_10_det, det.extract<320, 351>());
  hw_uint<32> lane_10_trace;
  set_at<0, 32, 32>(lane_10_trace, trace.extract<320, 351>());
  auto result_10 = hr_16_generated_compute(lane_10_det, lane_10_trace);
  set_at<320, 512, 32>(whole_result, result_10);

  hw_uint<32> lane_11_det;
  set_at<0, 32, 32>(lane_11_det, det.extract<352, 383>());
  hw_uint<32> lane_11_trace;
  set_at<0, 32, 32>(lane_11_trace, trace.extract<352, 383>());
  auto result_11 = hr_16_generated_compute(lane_11_det, lane_11_trace);
  set_at<352, 512, 32>(whole_result, result_11);

  hw_uint<32> lane_12_det;
  set_at<0, 32, 32>(lane_12_det, det.extract<384, 415>());
  hw_uint<32> lane_12_trace;
  set_at<0, 32, 32>(lane_12_trace, trace.extract<384, 415>());
  auto result_12 = hr_16_generated_compute(lane_12_det, lane_12_trace);
  set_at<384, 512, 32>(whole_result, result_12);

  hw_uint<32> lane_13_det;
  set_at<0, 32, 32>(lane_13_det, det.extract<416, 447>());
  hw_uint<32> lane_13_trace;
  set_at<0, 32, 32>(lane_13_trace, trace.extract<416, 447>());
  auto result_13 = hr_16_generated_compute(lane_13_det, lane_13_trace);
  set_at<416, 512, 32>(whole_result, result_13);

  hw_uint<32> lane_14_det;
  set_at<0, 32, 32>(lane_14_det, det.extract<448, 479>());
  hw_uint<32> lane_14_trace;
  set_at<0, 32, 32>(lane_14_trace, trace.extract<448, 479>());
  auto result_14 = hr_16_generated_compute(lane_14_det, lane_14_trace);
  set_at<448, 512, 32>(whole_result, result_14);

  hw_uint<32> lane_15_det;
  set_at<0, 32, 32>(lane_15_det, det.extract<480, 511>());
  hw_uint<32> lane_15_trace;
  set_at<0, 32, 32>(lane_15_trace, trace.extract<480, 511>());
  auto result_15 = hr_16_generated_compute(lane_15_det, lane_15_trace);
  set_at<480, 512, 32>(whole_result, result_15);
  return whole_result;
}

