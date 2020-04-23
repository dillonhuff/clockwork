#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<32> img_generated_compute(hw_uint<32*1> off_chip_img) {
  return off_chip_img.get<32, 0>();
}

hw_uint<32> sobel_16_stage_x_unrolled_1_generated_compute(hw_uint<32*6> img) {
  return (((img.get<32, 3>() + img.get<32, 0>()) + ((img.get<32, 4>() + img.get<32, 1>()) + hw_uint<32>(3))) + (img.get<32, 5>() + img.get<32, 2>()));
}



// Compute unit banks...
  // img_update_0 unroll factor: 1
hw_uint<32>  img_generated_compute_unrolled_1(hw_uint<32>& off_chip_img) {
  hw_uint<32> whole_result;
  hw_uint<32> lane_0_off_chip_img;
  // Need offset: 0, 0
  set_at<0, 32, 32>(lane_0_off_chip_img, off_chip_img.extract<0, 31>());
  auto result_0 = img_generated_compute(lane_0_off_chip_img);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // sobel_16_stage_x_unrolled_1_update_0 unroll factor: 1
hw_uint<32>  sobel_16_stage_x_unrolled_1_generated_compute_unrolled_1(hw_uint<192>& img) {
  hw_uint<32> whole_result;
  hw_uint<192> lane_0_img;
  // Need offset: -1, -1
  set_at<0, 192, 32>(lane_0_img, img.extract<0, 31>());
  // Need offset: -1, 0
  set_at<32, 192, 32>(lane_0_img, img.extract<32, 63>());
  // Need offset: -1, 1
  set_at<64, 192, 32>(lane_0_img, img.extract<64, 95>());
  // Need offset: 1, -1
  set_at<96, 192, 32>(lane_0_img, img.extract<96, 127>());
  // Need offset: 1, 0
  set_at<128, 192, 32>(lane_0_img, img.extract<128, 159>());
  // Need offset: 1, 1
  set_at<160, 192, 32>(lane_0_img, img.extract<160, 191>());
  auto result_0 = sobel_16_stage_x_unrolled_1_generated_compute(lane_0_img);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

