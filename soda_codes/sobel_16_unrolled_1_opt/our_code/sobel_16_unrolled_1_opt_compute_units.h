#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<32> img_generated_compute(hw_uint<32*1> off_chip_img) {
  return off_chip_img.get<32, 0>();
}

hw_uint<32> mag_y_generated_compute(hw_uint<32*6> img) {
  return (((img.get<32, 1>() - img.get<32, 0>()) + ((img.get<32, 3>() - img.get<32, 2>()) * 3)) + (img.get<32, 5>() - img.get<32, 4>()));
}

hw_uint<32> mag_x_generated_compute(hw_uint<32*6> img) {
  return (((img.get<32, 3>() - img.get<32, 0>()) + ((img.get<32, 4>() - img.get<32, 1>()) * 3)) + (img.get<32, 5>() - img.get<32, 2>()));
}

hw_uint<32> sobel_16_unrolled_1_generated_compute(hw_uint<32*1> mag_x, hw_uint<32*1> mag_y) {
  return (65535 - ((mag_x.get<32, 0>() * mag_x.get<32, 0>()) + (mag_y.get<32, 0>() * mag_y.get<32, 0>())));
}



// Compute unit banks...
  // img_update_0 unroll factor: 1
hw_uint<16>  img_generated_compute_unrolled_1(hw_uint<16>& off_chip_img) {
  hw_uint<16> whole_result;
  hw_uint<16> lane_0_off_chip_img;
  // Need offset: 0, 0
  set_at<0, 16>(lane_0_off_chip_img, off_chip_img.extract<0, 15>());
  auto result_0 = img_generated_compute(lane_0_off_chip_img);
  set_at<0, 16>(whole_result, result_0);
  return whole_result;
}

  // mag_y_update_0 unroll factor: 1
hw_uint<16>  mag_y_generated_compute_unrolled_1(hw_uint<96>& img) {
  hw_uint<16> whole_result;
  hw_uint<96> lane_0_img;
  // Need offset: -1, -1
  set_at<0, 96>(lane_0_img, img.extract<0, 15>());
  // Need offset: -1, 1
  set_at<16, 96>(lane_0_img, img.extract<16, 31>());
  // Need offset: 0, -1
  set_at<32, 96>(lane_0_img, img.extract<32, 47>());
  // Need offset: 0, 1
  set_at<48, 96>(lane_0_img, img.extract<48, 63>());
  // Need offset: 1, -1
  set_at<64, 96>(lane_0_img, img.extract<64, 79>());
  // Need offset: 1, 1
  set_at<80, 96>(lane_0_img, img.extract<80, 95>());
  auto result_0 = mag_y_generated_compute(lane_0_img);
  set_at<0, 16>(whole_result, result_0);
  return whole_result;
}

  // mag_x_update_0 unroll factor: 1
hw_uint<16>  mag_x_generated_compute_unrolled_1(hw_uint<96>& img) {
  hw_uint<16> whole_result;
  hw_uint<96> lane_0_img;
  // Need offset: -1, -1
  set_at<0, 96>(lane_0_img, img.extract<0, 15>());
  // Need offset: -1, 0
  set_at<16, 96>(lane_0_img, img.extract<16, 31>());
  // Need offset: -1, 1
  set_at<32, 96>(lane_0_img, img.extract<32, 47>());
  // Need offset: 1, -1
  set_at<48, 96>(lane_0_img, img.extract<48, 63>());
  // Need offset: 1, 0
  set_at<64, 96>(lane_0_img, img.extract<64, 79>());
  // Need offset: 1, 1
  set_at<80, 96>(lane_0_img, img.extract<80, 95>());
  auto result_0 = mag_x_generated_compute(lane_0_img);
  set_at<0, 16>(whole_result, result_0);
  return whole_result;
}

  // sobel_16_unrolled_1_update_0 unroll factor: 1
hw_uint<16>  sobel_16_unrolled_1_generated_compute_unrolled_1(hw_uint<16>& mag_x, hw_uint<16>& mag_y) {
  hw_uint<16> whole_result;
  hw_uint<16> lane_0_mag_x;
  // Need offset: 0, 0
  set_at<0, 16>(lane_0_mag_x, mag_x.extract<0, 15>());
  hw_uint<16> lane_0_mag_y;
  // Need offset: 0, 0
  set_at<0, 16>(lane_0_mag_y, mag_y.extract<0, 15>());
  auto result_0 = sobel_16_unrolled_1_generated_compute(lane_0_mag_x, lane_0_mag_y);
  set_at<0, 16>(whole_result, result_0);
  return whole_result;
}

