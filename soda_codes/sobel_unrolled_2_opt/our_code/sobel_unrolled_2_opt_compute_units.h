#pragma once

#include "conv_3x3.h"

// Generated compute units...


// Compute unit banks...
  // img_update_0 unroll factor: 2
hw_uint<64>  id_unrolled_2(hw_uint<64>& off_chip_img) {
  hw_uint<64> whole_result;

  hw_uint<32> lane_0_off_chip_img;
  set_at<0, 32, 32>(lane_0_off_chip_img, off_chip_img.extract<0, 31>());
  auto result_0 = id(lane_0_off_chip_img);
  set_at<0, 64, 32>(whole_result, result_0);

  hw_uint<32> lane_1_off_chip_img;
  set_at<0, 32, 32>(lane_1_off_chip_img, off_chip_img.extract<32, 63>());
  auto result_1 = id(lane_1_off_chip_img);
  set_at<32, 64, 32>(whole_result, result_1);
  return whole_result;
}

  // mag_y_update_0 unroll factor: 2
hw_uint<64>  sobel_my_unrolled_2(hw_uint<384>& img) {
  hw_uint<64> whole_result;

  hw_uint<192> lane_0_img;
  set_at<0, 192, 192>(lane_0_img, img.extract<0, 191>());
  auto result_0 = sobel_my(lane_0_img);
  set_at<0, 64, 32>(whole_result, result_0);

  hw_uint<192> lane_1_img;
  set_at<0, 192, 192>(lane_1_img, img.extract<192, 383>());
  auto result_1 = sobel_my(lane_1_img);
  set_at<32, 64, 32>(whole_result, result_1);
  return whole_result;
}

  // mag_x_update_0 unroll factor: 2
hw_uint<64>  sobel_mx_unrolled_2(hw_uint<384>& img) {
  hw_uint<64> whole_result;

  hw_uint<192> lane_0_img;
  set_at<0, 192, 192>(lane_0_img, img.extract<0, 191>());
  auto result_0 = sobel_mx(lane_0_img);
  set_at<0, 64, 32>(whole_result, result_0);

  hw_uint<192> lane_1_img;
  set_at<0, 192, 192>(lane_1_img, img.extract<192, 383>());
  auto result_1 = sobel_mx(lane_1_img);
  set_at<32, 64, 32>(whole_result, result_1);
  return whole_result;
}

  // sobel_unrolled_2_update_0 unroll factor: 2
hw_uint<64>  mag_cu_unrolled_2(hw_uint<64>& mag_x, hw_uint<64>& mag_y) {
  hw_uint<64> whole_result;

  hw_uint<32> lane_0_mag_x;
  set_at<0, 32, 32>(lane_0_mag_x, mag_x.extract<0, 31>());
  hw_uint<32> lane_0_mag_y;
  set_at<0, 32, 32>(lane_0_mag_y, mag_y.extract<0, 31>());
  auto result_0 = mag_cu(lane_0_mag_x, lane_0_mag_y);
  set_at<0, 64, 32>(whole_result, result_0);

  hw_uint<32> lane_1_mag_x;
  set_at<0, 32, 32>(lane_1_mag_x, mag_x.extract<32, 63>());
  hw_uint<32> lane_1_mag_y;
  set_at<0, 32, 32>(lane_1_mag_y, mag_y.extract<32, 63>());
  auto result_1 = mag_cu(lane_1_mag_x, lane_1_mag_y);
  set_at<32, 64, 32>(whole_result, result_1);
  return whole_result;
}

