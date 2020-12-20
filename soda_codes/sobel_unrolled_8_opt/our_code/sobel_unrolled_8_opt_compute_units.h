#pragma once

#include "conv_3x3.h"

// Generated compute units...


// Compute unit banks...
  // img_update_0 unroll factor: 8
hw_uint<256>  id_unrolled_8(hw_uint<256>& off_chip_img) {
  hw_uint<256> whole_result;

  hw_uint<32> lane_0_off_chip_img;
  set_at<0, 32, 32>(lane_0_off_chip_img, off_chip_img.extract<0, 31>());
  auto result_0 = id(lane_0_off_chip_img);
  set_at<0, 256, 32>(whole_result, result_0);

  hw_uint<32> lane_1_off_chip_img;
  set_at<0, 32, 32>(lane_1_off_chip_img, off_chip_img.extract<32, 63>());
  auto result_1 = id(lane_1_off_chip_img);
  set_at<32, 256, 32>(whole_result, result_1);

  hw_uint<32> lane_2_off_chip_img;
  set_at<0, 32, 32>(lane_2_off_chip_img, off_chip_img.extract<64, 95>());
  auto result_2 = id(lane_2_off_chip_img);
  set_at<64, 256, 32>(whole_result, result_2);

  hw_uint<32> lane_3_off_chip_img;
  set_at<0, 32, 32>(lane_3_off_chip_img, off_chip_img.extract<96, 127>());
  auto result_3 = id(lane_3_off_chip_img);
  set_at<96, 256, 32>(whole_result, result_3);

  hw_uint<32> lane_4_off_chip_img;
  set_at<0, 32, 32>(lane_4_off_chip_img, off_chip_img.extract<128, 159>());
  auto result_4 = id(lane_4_off_chip_img);
  set_at<128, 256, 32>(whole_result, result_4);

  hw_uint<32> lane_5_off_chip_img;
  set_at<0, 32, 32>(lane_5_off_chip_img, off_chip_img.extract<160, 191>());
  auto result_5 = id(lane_5_off_chip_img);
  set_at<160, 256, 32>(whole_result, result_5);

  hw_uint<32> lane_6_off_chip_img;
  set_at<0, 32, 32>(lane_6_off_chip_img, off_chip_img.extract<192, 223>());
  auto result_6 = id(lane_6_off_chip_img);
  set_at<192, 256, 32>(whole_result, result_6);

  hw_uint<32> lane_7_off_chip_img;
  set_at<0, 32, 32>(lane_7_off_chip_img, off_chip_img.extract<224, 255>());
  auto result_7 = id(lane_7_off_chip_img);
  set_at<224, 256, 32>(whole_result, result_7);
  return whole_result;
}

  // mag_y_update_0 unroll factor: 8
hw_uint<256>  sobel_my_unrolled_8(hw_uint<1536>& img) {
  hw_uint<256> whole_result;

  hw_uint<192> lane_0_img;
  set_at<0, 192, 192>(lane_0_img, img.extract<0, 191>());
  auto result_0 = sobel_my(lane_0_img);
  set_at<0, 256, 32>(whole_result, result_0);

  hw_uint<192> lane_1_img;
  set_at<0, 192, 192>(lane_1_img, img.extract<192, 383>());
  auto result_1 = sobel_my(lane_1_img);
  set_at<32, 256, 32>(whole_result, result_1);

  hw_uint<192> lane_2_img;
  set_at<0, 192, 192>(lane_2_img, img.extract<384, 575>());
  auto result_2 = sobel_my(lane_2_img);
  set_at<64, 256, 32>(whole_result, result_2);

  hw_uint<192> lane_3_img;
  set_at<0, 192, 192>(lane_3_img, img.extract<576, 767>());
  auto result_3 = sobel_my(lane_3_img);
  set_at<96, 256, 32>(whole_result, result_3);

  hw_uint<192> lane_4_img;
  set_at<0, 192, 192>(lane_4_img, img.extract<768, 959>());
  auto result_4 = sobel_my(lane_4_img);
  set_at<128, 256, 32>(whole_result, result_4);

  hw_uint<192> lane_5_img;
  set_at<0, 192, 192>(lane_5_img, img.extract<960, 1151>());
  auto result_5 = sobel_my(lane_5_img);
  set_at<160, 256, 32>(whole_result, result_5);

  hw_uint<192> lane_6_img;
  set_at<0, 192, 192>(lane_6_img, img.extract<1152, 1343>());
  auto result_6 = sobel_my(lane_6_img);
  set_at<192, 256, 32>(whole_result, result_6);

  hw_uint<192> lane_7_img;
  set_at<0, 192, 192>(lane_7_img, img.extract<1344, 1535>());
  auto result_7 = sobel_my(lane_7_img);
  set_at<224, 256, 32>(whole_result, result_7);
  return whole_result;
}

  // mag_x_update_0 unroll factor: 8
hw_uint<256>  sobel_mx_unrolled_8(hw_uint<1536>& img) {
  hw_uint<256> whole_result;

  hw_uint<192> lane_0_img;
  set_at<0, 192, 192>(lane_0_img, img.extract<0, 191>());
  auto result_0 = sobel_mx(lane_0_img);
  set_at<0, 256, 32>(whole_result, result_0);

  hw_uint<192> lane_1_img;
  set_at<0, 192, 192>(lane_1_img, img.extract<192, 383>());
  auto result_1 = sobel_mx(lane_1_img);
  set_at<32, 256, 32>(whole_result, result_1);

  hw_uint<192> lane_2_img;
  set_at<0, 192, 192>(lane_2_img, img.extract<384, 575>());
  auto result_2 = sobel_mx(lane_2_img);
  set_at<64, 256, 32>(whole_result, result_2);

  hw_uint<192> lane_3_img;
  set_at<0, 192, 192>(lane_3_img, img.extract<576, 767>());
  auto result_3 = sobel_mx(lane_3_img);
  set_at<96, 256, 32>(whole_result, result_3);

  hw_uint<192> lane_4_img;
  set_at<0, 192, 192>(lane_4_img, img.extract<768, 959>());
  auto result_4 = sobel_mx(lane_4_img);
  set_at<128, 256, 32>(whole_result, result_4);

  hw_uint<192> lane_5_img;
  set_at<0, 192, 192>(lane_5_img, img.extract<960, 1151>());
  auto result_5 = sobel_mx(lane_5_img);
  set_at<160, 256, 32>(whole_result, result_5);

  hw_uint<192> lane_6_img;
  set_at<0, 192, 192>(lane_6_img, img.extract<1152, 1343>());
  auto result_6 = sobel_mx(lane_6_img);
  set_at<192, 256, 32>(whole_result, result_6);

  hw_uint<192> lane_7_img;
  set_at<0, 192, 192>(lane_7_img, img.extract<1344, 1535>());
  auto result_7 = sobel_mx(lane_7_img);
  set_at<224, 256, 32>(whole_result, result_7);
  return whole_result;
}

  // sobel_unrolled_8_update_0 unroll factor: 8
hw_uint<256>  mag_cu_unrolled_8(hw_uint<256>& mag_x, hw_uint<256>& mag_y) {
  hw_uint<256> whole_result;

  hw_uint<32> lane_0_mag_x;
  set_at<0, 32, 32>(lane_0_mag_x, mag_x.extract<0, 31>());
  hw_uint<32> lane_0_mag_y;
  set_at<0, 32, 32>(lane_0_mag_y, mag_y.extract<0, 31>());
  auto result_0 = mag_cu(lane_0_mag_x, lane_0_mag_y);
  set_at<0, 256, 32>(whole_result, result_0);

  hw_uint<32> lane_1_mag_x;
  set_at<0, 32, 32>(lane_1_mag_x, mag_x.extract<32, 63>());
  hw_uint<32> lane_1_mag_y;
  set_at<0, 32, 32>(lane_1_mag_y, mag_y.extract<32, 63>());
  auto result_1 = mag_cu(lane_1_mag_x, lane_1_mag_y);
  set_at<32, 256, 32>(whole_result, result_1);

  hw_uint<32> lane_2_mag_x;
  set_at<0, 32, 32>(lane_2_mag_x, mag_x.extract<64, 95>());
  hw_uint<32> lane_2_mag_y;
  set_at<0, 32, 32>(lane_2_mag_y, mag_y.extract<64, 95>());
  auto result_2 = mag_cu(lane_2_mag_x, lane_2_mag_y);
  set_at<64, 256, 32>(whole_result, result_2);

  hw_uint<32> lane_3_mag_x;
  set_at<0, 32, 32>(lane_3_mag_x, mag_x.extract<96, 127>());
  hw_uint<32> lane_3_mag_y;
  set_at<0, 32, 32>(lane_3_mag_y, mag_y.extract<96, 127>());
  auto result_3 = mag_cu(lane_3_mag_x, lane_3_mag_y);
  set_at<96, 256, 32>(whole_result, result_3);

  hw_uint<32> lane_4_mag_x;
  set_at<0, 32, 32>(lane_4_mag_x, mag_x.extract<128, 159>());
  hw_uint<32> lane_4_mag_y;
  set_at<0, 32, 32>(lane_4_mag_y, mag_y.extract<128, 159>());
  auto result_4 = mag_cu(lane_4_mag_x, lane_4_mag_y);
  set_at<128, 256, 32>(whole_result, result_4);

  hw_uint<32> lane_5_mag_x;
  set_at<0, 32, 32>(lane_5_mag_x, mag_x.extract<160, 191>());
  hw_uint<32> lane_5_mag_y;
  set_at<0, 32, 32>(lane_5_mag_y, mag_y.extract<160, 191>());
  auto result_5 = mag_cu(lane_5_mag_x, lane_5_mag_y);
  set_at<160, 256, 32>(whole_result, result_5);

  hw_uint<32> lane_6_mag_x;
  set_at<0, 32, 32>(lane_6_mag_x, mag_x.extract<192, 223>());
  hw_uint<32> lane_6_mag_y;
  set_at<0, 32, 32>(lane_6_mag_y, mag_y.extract<192, 223>());
  auto result_6 = mag_cu(lane_6_mag_x, lane_6_mag_y);
  set_at<192, 256, 32>(whole_result, result_6);

  hw_uint<32> lane_7_mag_x;
  set_at<0, 32, 32>(lane_7_mag_x, mag_x.extract<224, 255>());
  hw_uint<32> lane_7_mag_y;
  set_at<0, 32, 32>(lane_7_mag_y, mag_y.extract<224, 255>());
  auto result_7 = mag_cu(lane_7_mag_x, lane_7_mag_y);
  set_at<224, 256, 32>(whole_result, result_7);
  return whole_result;
}

