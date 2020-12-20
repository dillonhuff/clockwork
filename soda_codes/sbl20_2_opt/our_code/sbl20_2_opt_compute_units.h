#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<16> img_generated_compute(hw_uint<16*1> off_chip_img) {
  return uint16_t(uint16_t(off_chip_img.get<16, 0>()));
}

hw_uint<16> mag_y_generated_compute(hw_uint<16*6> img) {
  return uint16_t(((uint16_t(img.get<16, 1>()) - uint16_t(img.get<16, 0>())) + (((uint16_t(img.get<16, 3>()) - uint16_t(img.get<16, 2>())) * 3) + (uint16_t(img.get<16, 5>()) - uint16_t(img.get<16, 4>())))));
}

hw_uint<16> mag_x_generated_compute(hw_uint<16*6> img) {
  return uint16_t(((uint16_t(img.get<16, 3>()) - uint16_t(img.get<16, 0>())) + (((uint16_t(img.get<16, 4>()) - uint16_t(img.get<16, 1>())) * 3) + (uint16_t(img.get<16, 5>()) - uint16_t(img.get<16, 2>())))));
}

hw_uint<16> sbl20_2_generated_compute(hw_uint<16*1> mag_x, hw_uint<16*1> mag_y) {
  return uint16_t(((uint16_t(mag_x.get<16, 0>()) * uint16_t(mag_x.get<16, 0>())) + (uint16_t(mag_y.get<16, 0>()) * uint16_t(mag_y.get<16, 0>()))));
}



// Compute unit banks...
  // img_update_0 unroll factor: 2
hw_uint<32>  img_generated_compute_unrolled_2(hw_uint<32>& off_chip_img) {
  hw_uint<32> whole_result;

  hw_uint<16> lane_0_off_chip_img;
  set_at<0, 16, 16>(lane_0_off_chip_img, off_chip_img.extract<0, 15>());
  auto result_0 = img_generated_compute(lane_0_off_chip_img);
  set_at<0, 32, 16>(whole_result, result_0);

  hw_uint<16> lane_1_off_chip_img;
  set_at<0, 16, 16>(lane_1_off_chip_img, off_chip_img.extract<16, 31>());
  auto result_1 = img_generated_compute(lane_1_off_chip_img);
  set_at<16, 32, 16>(whole_result, result_1);
  return whole_result;
}

  // mag_y_update_0 unroll factor: 2
hw_uint<32>  mag_y_generated_compute_unrolled_2(hw_uint<192>& img) {
  hw_uint<32> whole_result;

  hw_uint<96> lane_0_img;
  set_at<0, 96, 96>(lane_0_img, img.extract<0, 95>());
  auto result_0 = mag_y_generated_compute(lane_0_img);
  set_at<0, 32, 16>(whole_result, result_0);

  hw_uint<96> lane_1_img;
  set_at<0, 96, 96>(lane_1_img, img.extract<96, 191>());
  auto result_1 = mag_y_generated_compute(lane_1_img);
  set_at<16, 32, 16>(whole_result, result_1);
  return whole_result;
}

  // mag_x_update_0 unroll factor: 2
hw_uint<32>  mag_x_generated_compute_unrolled_2(hw_uint<192>& img) {
  hw_uint<32> whole_result;

  hw_uint<96> lane_0_img;
  set_at<0, 96, 96>(lane_0_img, img.extract<0, 95>());
  auto result_0 = mag_x_generated_compute(lane_0_img);
  set_at<0, 32, 16>(whole_result, result_0);

  hw_uint<96> lane_1_img;
  set_at<0, 96, 96>(lane_1_img, img.extract<96, 191>());
  auto result_1 = mag_x_generated_compute(lane_1_img);
  set_at<16, 32, 16>(whole_result, result_1);
  return whole_result;
}

  // sbl20_2_update_0 unroll factor: 2
hw_uint<32>  sbl20_2_generated_compute_unrolled_2(hw_uint<32>& mag_x, hw_uint<32>& mag_y) {
  hw_uint<32> whole_result;

  hw_uint<16> lane_0_mag_x;
  set_at<0, 16, 16>(lane_0_mag_x, mag_x.extract<0, 15>());
  hw_uint<16> lane_0_mag_y;
  set_at<0, 16, 16>(lane_0_mag_y, mag_y.extract<0, 15>());
  auto result_0 = sbl20_2_generated_compute(lane_0_mag_x, lane_0_mag_y);
  set_at<0, 32, 16>(whole_result, result_0);

  hw_uint<16> lane_1_mag_x;
  set_at<0, 16, 16>(lane_1_mag_x, mag_x.extract<16, 31>());
  hw_uint<16> lane_1_mag_y;
  set_at<0, 16, 16>(lane_1_mag_y, mag_y.extract<16, 31>());
  auto result_1 = sbl20_2_generated_compute(lane_1_mag_x, lane_1_mag_y);
  set_at<16, 32, 16>(whole_result, result_1);
  return whole_result;
}

