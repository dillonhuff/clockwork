#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<16> img_generated_compute(hw_uint<16*1> off_chip_img) {
  return off_chip_img.get<16, 0>();
}

hw_uint<16> sobel_16_stage_x_unrolled_1_generated_compute(hw_uint<16*6> img) {
  return (((img.get<16, 3>() - img.get<16, 0>()) + ((img.get<16, 4>() - img.get<16, 1>()) * hw_uint<16>(3))) + (img.get<16, 5>() - img.get<16, 2>()));
}



// Compute unit banks...
  // img_update_0 unroll factor: 1
hw_uint<16>  img_generated_compute_unrolled_1(hw_uint<16>& off_chip_img) {
  hw_uint<16> whole_result;
  hw_uint<16> lane_0_off_chip_img;
  // Need offset: 0, 0
  set_at<0, 16, 16>(lane_0_off_chip_img, off_chip_img.extract<0, 15>());
  auto result_0 = img_generated_compute(lane_0_off_chip_img);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // sobel_16_stage_x_unrolled_1_update_0 unroll factor: 1
hw_uint<16>  sobel_16_stage_x_unrolled_1_generated_compute_unrolled_1(hw_uint<96>& img) {
  hw_uint<16> whole_result;
  hw_uint<96> lane_0_img;
  // Need offset: -1, -1
  set_at<0, 96, 16>(lane_0_img, img.extract<0, 15>());
  // Need offset: -1, 0
  set_at<16, 96, 16>(lane_0_img, img.extract<16, 31>());
  // Need offset: -1, 1
  set_at<32, 96, 16>(lane_0_img, img.extract<32, 47>());
  // Need offset: 1, -1
  set_at<48, 96, 16>(lane_0_img, img.extract<48, 63>());
  // Need offset: 1, 0
  set_at<64, 96, 16>(lane_0_img, img.extract<64, 79>());
  // Need offset: 1, 1
  set_at<80, 96, 16>(lane_0_img, img.extract<80, 95>());
  auto result_0 = sobel_16_stage_x_unrolled_1_generated_compute(lane_0_img);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

