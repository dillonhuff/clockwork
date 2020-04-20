#pragma once

#include "conv_3x3.h"

  // img_update_0 unroll factor: 4
hw_uint<128>  id_unrolled_4(hw_uint<128>& off_chip_img) {
  hw_uint<128> whole_result;
  hw_uint<32> lane_0_off_chip_img;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_off_chip_img, off_chip_img.extract<0, 31>());
  auto result_0 = id(lane_0_off_chip_img);
  set_at<0, 128>(whole_result, result_0);
  hw_uint<32> lane_1_off_chip_img;
  // Need offset: 1, 0
  set_at<0, 32>(lane_1_off_chip_img, off_chip_img.extract<32, 63>());
  auto result_1 = id(lane_1_off_chip_img);
  set_at<32, 128>(whole_result, result_1);
  hw_uint<32> lane_2_off_chip_img;
  // Need offset: 2, 0
  set_at<0, 32>(lane_2_off_chip_img, off_chip_img.extract<64, 95>());
  auto result_2 = id(lane_2_off_chip_img);
  set_at<64, 128>(whole_result, result_2);
  hw_uint<32> lane_3_off_chip_img;
  // Need offset: 3, 0
  set_at<0, 32>(lane_3_off_chip_img, off_chip_img.extract<96, 127>());
  auto result_3 = id(lane_3_off_chip_img);
  set_at<96, 128>(whole_result, result_3);
  return whole_result;
}

  // mag_y_update_0 unroll factor: 4
hw_uint<128>  sobel_my_unrolled_4(hw_uint<384>& img) {
  hw_uint<128> whole_result;
  hw_uint<192> lane_0_img;
  // Need offset: -1, -1
  set_at<0, 192>(lane_0_img, img.extract<0, 31>());
  // Need offset: -1, 1
  set_at<32, 192>(lane_0_img, img.extract<32, 63>());
  // Need offset: 0, -1
  set_at<64, 192>(lane_0_img, img.extract<64, 95>());
  // Need offset: 0, 1
  set_at<96, 192>(lane_0_img, img.extract<96, 127>());
  // Need offset: 1, -1
  set_at<128, 192>(lane_0_img, img.extract<128, 159>());
  // Need offset: 1, 1
  set_at<160, 192>(lane_0_img, img.extract<160, 191>());
  auto result_0 = sobel_my(lane_0_img);
  set_at<0, 128>(whole_result, result_0);
  hw_uint<192> lane_1_img;
  // Need offset: 0, -1
  set_at<0, 192>(lane_1_img, img.extract<64, 95>());
  // Need offset: 0, 1
  set_at<32, 192>(lane_1_img, img.extract<96, 127>());
  // Need offset: 1, -1
  set_at<64, 192>(lane_1_img, img.extract<128, 159>());
  // Need offset: 1, 1
  set_at<96, 192>(lane_1_img, img.extract<160, 191>());
  // Need offset: 2, -1
  set_at<128, 192>(lane_1_img, img.extract<192, 223>());
  // Need offset: 2, 1
  set_at<160, 192>(lane_1_img, img.extract<224, 255>());
  auto result_1 = sobel_my(lane_1_img);
  set_at<32, 128>(whole_result, result_1);
  hw_uint<192> lane_2_img;
  // Need offset: 1, -1
  set_at<0, 192>(lane_2_img, img.extract<128, 159>());
  // Need offset: 1, 1
  set_at<32, 192>(lane_2_img, img.extract<160, 191>());
  // Need offset: 2, -1
  set_at<64, 192>(lane_2_img, img.extract<192, 223>());
  // Need offset: 2, 1
  set_at<96, 192>(lane_2_img, img.extract<224, 255>());
  // Need offset: 3, -1
  set_at<128, 192>(lane_2_img, img.extract<256, 287>());
  // Need offset: 3, 1
  set_at<160, 192>(lane_2_img, img.extract<288, 319>());
  auto result_2 = sobel_my(lane_2_img);
  set_at<64, 128>(whole_result, result_2);
  hw_uint<192> lane_3_img;
  // Need offset: 2, -1
  set_at<0, 192>(lane_3_img, img.extract<192, 223>());
  // Need offset: 2, 1
  set_at<32, 192>(lane_3_img, img.extract<224, 255>());
  // Need offset: 3, -1
  set_at<64, 192>(lane_3_img, img.extract<256, 287>());
  // Need offset: 3, 1
  set_at<96, 192>(lane_3_img, img.extract<288, 319>());
  // Need offset: 4, -1
  set_at<128, 192>(lane_3_img, img.extract<320, 351>());
  // Need offset: 4, 1
  set_at<160, 192>(lane_3_img, img.extract<352, 383>());
  auto result_3 = sobel_my(lane_3_img);
  set_at<96, 128>(whole_result, result_3);
  return whole_result;
}

  // mag_x_update_0 unroll factor: 4
hw_uint<128>  sobel_mx_unrolled_4(hw_uint<576>& img) {
  hw_uint<128> whole_result;
  hw_uint<192> lane_0_img;
  // Need offset: -1, -1
  set_at<0, 192>(lane_0_img, img.extract<0, 31>());
  // Need offset: -1, 0
  set_at<32, 192>(lane_0_img, img.extract<32, 63>());
  // Need offset: -1, 1
  set_at<64, 192>(lane_0_img, img.extract<64, 95>());
  // Need offset: 1, -1
  set_at<96, 192>(lane_0_img, img.extract<192, 223>());
  // Need offset: 1, 0
  set_at<128, 192>(lane_0_img, img.extract<224, 255>());
  // Need offset: 1, 1
  set_at<160, 192>(lane_0_img, img.extract<256, 287>());
  auto result_0 = sobel_mx(lane_0_img);
  set_at<0, 128>(whole_result, result_0);
  hw_uint<192> lane_1_img;
  // Need offset: 0, -1
  set_at<0, 192>(lane_1_img, img.extract<96, 127>());
  // Need offset: 0, 0
  set_at<32, 192>(lane_1_img, img.extract<128, 159>());
  // Need offset: 0, 1
  set_at<64, 192>(lane_1_img, img.extract<160, 191>());
  // Need offset: 2, -1
  set_at<96, 192>(lane_1_img, img.extract<288, 319>());
  // Need offset: 2, 0
  set_at<128, 192>(lane_1_img, img.extract<320, 351>());
  // Need offset: 2, 1
  set_at<160, 192>(lane_1_img, img.extract<352, 383>());
  auto result_1 = sobel_mx(lane_1_img);
  set_at<32, 128>(whole_result, result_1);
  hw_uint<192> lane_2_img;
  // Need offset: 1, -1
  set_at<0, 192>(lane_2_img, img.extract<192, 223>());
  // Need offset: 1, 0
  set_at<32, 192>(lane_2_img, img.extract<224, 255>());
  // Need offset: 1, 1
  set_at<64, 192>(lane_2_img, img.extract<256, 287>());
  // Need offset: 3, -1
  set_at<96, 192>(lane_2_img, img.extract<384, 415>());
  // Need offset: 3, 0
  set_at<128, 192>(lane_2_img, img.extract<416, 447>());
  // Need offset: 3, 1
  set_at<160, 192>(lane_2_img, img.extract<448, 479>());
  auto result_2 = sobel_mx(lane_2_img);
  set_at<64, 128>(whole_result, result_2);
  hw_uint<192> lane_3_img;
  // Need offset: 2, -1
  set_at<0, 192>(lane_3_img, img.extract<288, 319>());
  // Need offset: 2, 0
  set_at<32, 192>(lane_3_img, img.extract<320, 351>());
  // Need offset: 2, 1
  set_at<64, 192>(lane_3_img, img.extract<352, 383>());
  // Need offset: 4, -1
  set_at<96, 192>(lane_3_img, img.extract<480, 511>());
  // Need offset: 4, 0
  set_at<128, 192>(lane_3_img, img.extract<512, 543>());
  // Need offset: 4, 1
  set_at<160, 192>(lane_3_img, img.extract<544, 575>());
  auto result_3 = sobel_mx(lane_3_img);
  set_at<96, 128>(whole_result, result_3);
  return whole_result;
}

  // sobel_unrolled_4_update_0 unroll factor: 4
hw_uint<128>  mag_cu_unrolled_4(hw_uint<128>& mag_x, hw_uint<128>& mag_y) {
  hw_uint<128> whole_result;
  hw_uint<32> lane_0_mag_x;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_mag_x, mag_x.extract<0, 31>());
  hw_uint<32> lane_0_mag_y;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_mag_y, mag_y.extract<0, 31>());
  auto result_0 = mag_cu(lane_0_mag_x, lane_0_mag_y);
  set_at<0, 128>(whole_result, result_0);
  hw_uint<32> lane_1_mag_x;
  // Need offset: 1, 0
  set_at<0, 32>(lane_1_mag_x, mag_x.extract<32, 63>());
  hw_uint<32> lane_1_mag_y;
  // Need offset: 1, 0
  set_at<0, 32>(lane_1_mag_y, mag_y.extract<32, 63>());
  auto result_1 = mag_cu(lane_1_mag_x, lane_1_mag_y);
  set_at<32, 128>(whole_result, result_1);
  hw_uint<32> lane_2_mag_x;
  // Need offset: 2, 0
  set_at<0, 32>(lane_2_mag_x, mag_x.extract<64, 95>());
  hw_uint<32> lane_2_mag_y;
  // Need offset: 2, 0
  set_at<0, 32>(lane_2_mag_y, mag_y.extract<64, 95>());
  auto result_2 = mag_cu(lane_2_mag_x, lane_2_mag_y);
  set_at<64, 128>(whole_result, result_2);
  hw_uint<32> lane_3_mag_x;
  // Need offset: 3, 0
  set_at<0, 32>(lane_3_mag_x, mag_x.extract<96, 127>());
  hw_uint<32> lane_3_mag_y;
  // Need offset: 3, 0
  set_at<0, 32>(lane_3_mag_y, mag_y.extract<96, 127>());
  auto result_3 = mag_cu(lane_3_mag_x, lane_3_mag_y);
  set_at<96, 128>(whole_result, result_3);
  return whole_result;
}

