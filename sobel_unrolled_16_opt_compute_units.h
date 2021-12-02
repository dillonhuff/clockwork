#pragma once

#include "conv_3x3.h"

// Generated compute units...


// Compute unit banks...
  // img_update_0 unroll factor: 16
hw_uint<512>  id_unrolled_16(hw_uint<512>& off_chip_img) {
  hw_uint<512> whole_result;

  hw_uint<32> lane_0_off_chip_img;
  set_at<0, 32, 32>(lane_0_off_chip_img, off_chip_img.extract<0, 31>());
  auto result_0 = id(lane_0_off_chip_img);
  set_at<0, 512, 32>(whole_result, result_0);

  hw_uint<32> lane_1_off_chip_img;
  set_at<0, 32, 32>(lane_1_off_chip_img, off_chip_img.extract<32, 63>());
  auto result_1 = id(lane_1_off_chip_img);
  set_at<32, 512, 32>(whole_result, result_1);

  hw_uint<32> lane_2_off_chip_img;
  set_at<0, 32, 32>(lane_2_off_chip_img, off_chip_img.extract<64, 95>());
  auto result_2 = id(lane_2_off_chip_img);
  set_at<64, 512, 32>(whole_result, result_2);

  hw_uint<32> lane_3_off_chip_img;
  set_at<0, 32, 32>(lane_3_off_chip_img, off_chip_img.extract<96, 127>());
  auto result_3 = id(lane_3_off_chip_img);
  set_at<96, 512, 32>(whole_result, result_3);

  hw_uint<32> lane_4_off_chip_img;
  set_at<0, 32, 32>(lane_4_off_chip_img, off_chip_img.extract<128, 159>());
  auto result_4 = id(lane_4_off_chip_img);
  set_at<128, 512, 32>(whole_result, result_4);

  hw_uint<32> lane_5_off_chip_img;
  set_at<0, 32, 32>(lane_5_off_chip_img, off_chip_img.extract<160, 191>());
  auto result_5 = id(lane_5_off_chip_img);
  set_at<160, 512, 32>(whole_result, result_5);

  hw_uint<32> lane_6_off_chip_img;
  set_at<0, 32, 32>(lane_6_off_chip_img, off_chip_img.extract<192, 223>());
  auto result_6 = id(lane_6_off_chip_img);
  set_at<192, 512, 32>(whole_result, result_6);

  hw_uint<32> lane_7_off_chip_img;
  set_at<0, 32, 32>(lane_7_off_chip_img, off_chip_img.extract<224, 255>());
  auto result_7 = id(lane_7_off_chip_img);
  set_at<224, 512, 32>(whole_result, result_7);

  hw_uint<32> lane_8_off_chip_img;
  set_at<0, 32, 32>(lane_8_off_chip_img, off_chip_img.extract<256, 287>());
  auto result_8 = id(lane_8_off_chip_img);
  set_at<256, 512, 32>(whole_result, result_8);

  hw_uint<32> lane_9_off_chip_img;
  set_at<0, 32, 32>(lane_9_off_chip_img, off_chip_img.extract<288, 319>());
  auto result_9 = id(lane_9_off_chip_img);
  set_at<288, 512, 32>(whole_result, result_9);

  hw_uint<32> lane_10_off_chip_img;
  set_at<0, 32, 32>(lane_10_off_chip_img, off_chip_img.extract<320, 351>());
  auto result_10 = id(lane_10_off_chip_img);
  set_at<320, 512, 32>(whole_result, result_10);

  hw_uint<32> lane_11_off_chip_img;
  set_at<0, 32, 32>(lane_11_off_chip_img, off_chip_img.extract<352, 383>());
  auto result_11 = id(lane_11_off_chip_img);
  set_at<352, 512, 32>(whole_result, result_11);

  hw_uint<32> lane_12_off_chip_img;
  set_at<0, 32, 32>(lane_12_off_chip_img, off_chip_img.extract<384, 415>());
  auto result_12 = id(lane_12_off_chip_img);
  set_at<384, 512, 32>(whole_result, result_12);

  hw_uint<32> lane_13_off_chip_img;
  set_at<0, 32, 32>(lane_13_off_chip_img, off_chip_img.extract<416, 447>());
  auto result_13 = id(lane_13_off_chip_img);
  set_at<416, 512, 32>(whole_result, result_13);

  hw_uint<32> lane_14_off_chip_img;
  set_at<0, 32, 32>(lane_14_off_chip_img, off_chip_img.extract<448, 479>());
  auto result_14 = id(lane_14_off_chip_img);
  set_at<448, 512, 32>(whole_result, result_14);

  hw_uint<32> lane_15_off_chip_img;
  set_at<0, 32, 32>(lane_15_off_chip_img, off_chip_img.extract<480, 511>());
  auto result_15 = id(lane_15_off_chip_img);
  set_at<480, 512, 32>(whole_result, result_15);
  return whole_result;
}

  // mag_y_update_0 unroll factor: 16
hw_uint<512>  sobel_my_unrolled_16(hw_uint<3072>& img) {
  hw_uint<512> whole_result;

  hw_uint<192> lane_0_img;
  set_at<0, 192, 192>(lane_0_img, img.extract<0, 191>());
  auto result_0 = sobel_my(lane_0_img);
  set_at<0, 512, 32>(whole_result, result_0);

  hw_uint<192> lane_1_img;
  set_at<0, 192, 192>(lane_1_img, img.extract<192, 383>());
  auto result_1 = sobel_my(lane_1_img);
  set_at<32, 512, 32>(whole_result, result_1);

  hw_uint<192> lane_2_img;
  set_at<0, 192, 192>(lane_2_img, img.extract<384, 575>());
  auto result_2 = sobel_my(lane_2_img);
  set_at<64, 512, 32>(whole_result, result_2);

  hw_uint<192> lane_3_img;
  set_at<0, 192, 192>(lane_3_img, img.extract<576, 767>());
  auto result_3 = sobel_my(lane_3_img);
  set_at<96, 512, 32>(whole_result, result_3);

  hw_uint<192> lane_4_img;
  set_at<0, 192, 192>(lane_4_img, img.extract<768, 959>());
  auto result_4 = sobel_my(lane_4_img);
  set_at<128, 512, 32>(whole_result, result_4);

  hw_uint<192> lane_5_img;
  set_at<0, 192, 192>(lane_5_img, img.extract<960, 1151>());
  auto result_5 = sobel_my(lane_5_img);
  set_at<160, 512, 32>(whole_result, result_5);

  hw_uint<192> lane_6_img;
  set_at<0, 192, 192>(lane_6_img, img.extract<1152, 1343>());
  auto result_6 = sobel_my(lane_6_img);
  set_at<192, 512, 32>(whole_result, result_6);

  hw_uint<192> lane_7_img;
  set_at<0, 192, 192>(lane_7_img, img.extract<1344, 1535>());
  auto result_7 = sobel_my(lane_7_img);
  set_at<224, 512, 32>(whole_result, result_7);

  hw_uint<192> lane_8_img;
  set_at<0, 192, 192>(lane_8_img, img.extract<1536, 1727>());
  auto result_8 = sobel_my(lane_8_img);
  set_at<256, 512, 32>(whole_result, result_8);

  hw_uint<192> lane_9_img;
  set_at<0, 192, 192>(lane_9_img, img.extract<1728, 1919>());
  auto result_9 = sobel_my(lane_9_img);
  set_at<288, 512, 32>(whole_result, result_9);

  hw_uint<192> lane_10_img;
  set_at<0, 192, 192>(lane_10_img, img.extract<1920, 2111>());
  auto result_10 = sobel_my(lane_10_img);
  set_at<320, 512, 32>(whole_result, result_10);

  hw_uint<192> lane_11_img;
  set_at<0, 192, 192>(lane_11_img, img.extract<2112, 2303>());
  auto result_11 = sobel_my(lane_11_img);
  set_at<352, 512, 32>(whole_result, result_11);

  hw_uint<192> lane_12_img;
  set_at<0, 192, 192>(lane_12_img, img.extract<2304, 2495>());
  auto result_12 = sobel_my(lane_12_img);
  set_at<384, 512, 32>(whole_result, result_12);

  hw_uint<192> lane_13_img;
  set_at<0, 192, 192>(lane_13_img, img.extract<2496, 2687>());
  auto result_13 = sobel_my(lane_13_img);
  set_at<416, 512, 32>(whole_result, result_13);

  hw_uint<192> lane_14_img;
  set_at<0, 192, 192>(lane_14_img, img.extract<2688, 2879>());
  auto result_14 = sobel_my(lane_14_img);
  set_at<448, 512, 32>(whole_result, result_14);

  hw_uint<192> lane_15_img;
  set_at<0, 192, 192>(lane_15_img, img.extract<2880, 3071>());
  auto result_15 = sobel_my(lane_15_img);
  set_at<480, 512, 32>(whole_result, result_15);
  return whole_result;
}

  // mag_x_update_0 unroll factor: 16
hw_uint<512>  sobel_mx_unrolled_16(hw_uint<3072>& img) {
  hw_uint<512> whole_result;

  hw_uint<192> lane_0_img;
  set_at<0, 192, 192>(lane_0_img, img.extract<0, 191>());
  auto result_0 = sobel_mx(lane_0_img);
  set_at<0, 512, 32>(whole_result, result_0);

  hw_uint<192> lane_1_img;
  set_at<0, 192, 192>(lane_1_img, img.extract<192, 383>());
  auto result_1 = sobel_mx(lane_1_img);
  set_at<32, 512, 32>(whole_result, result_1);

  hw_uint<192> lane_2_img;
  set_at<0, 192, 192>(lane_2_img, img.extract<384, 575>());
  auto result_2 = sobel_mx(lane_2_img);
  set_at<64, 512, 32>(whole_result, result_2);

  hw_uint<192> lane_3_img;
  set_at<0, 192, 192>(lane_3_img, img.extract<576, 767>());
  auto result_3 = sobel_mx(lane_3_img);
  set_at<96, 512, 32>(whole_result, result_3);

  hw_uint<192> lane_4_img;
  set_at<0, 192, 192>(lane_4_img, img.extract<768, 959>());
  auto result_4 = sobel_mx(lane_4_img);
  set_at<128, 512, 32>(whole_result, result_4);

  hw_uint<192> lane_5_img;
  set_at<0, 192, 192>(lane_5_img, img.extract<960, 1151>());
  auto result_5 = sobel_mx(lane_5_img);
  set_at<160, 512, 32>(whole_result, result_5);

  hw_uint<192> lane_6_img;
  set_at<0, 192, 192>(lane_6_img, img.extract<1152, 1343>());
  auto result_6 = sobel_mx(lane_6_img);
  set_at<192, 512, 32>(whole_result, result_6);

  hw_uint<192> lane_7_img;
  set_at<0, 192, 192>(lane_7_img, img.extract<1344, 1535>());
  auto result_7 = sobel_mx(lane_7_img);
  set_at<224, 512, 32>(whole_result, result_7);

  hw_uint<192> lane_8_img;
  set_at<0, 192, 192>(lane_8_img, img.extract<1536, 1727>());
  auto result_8 = sobel_mx(lane_8_img);
  set_at<256, 512, 32>(whole_result, result_8);

  hw_uint<192> lane_9_img;
  set_at<0, 192, 192>(lane_9_img, img.extract<1728, 1919>());
  auto result_9 = sobel_mx(lane_9_img);
  set_at<288, 512, 32>(whole_result, result_9);

  hw_uint<192> lane_10_img;
  set_at<0, 192, 192>(lane_10_img, img.extract<1920, 2111>());
  auto result_10 = sobel_mx(lane_10_img);
  set_at<320, 512, 32>(whole_result, result_10);

  hw_uint<192> lane_11_img;
  set_at<0, 192, 192>(lane_11_img, img.extract<2112, 2303>());
  auto result_11 = sobel_mx(lane_11_img);
  set_at<352, 512, 32>(whole_result, result_11);

  hw_uint<192> lane_12_img;
  set_at<0, 192, 192>(lane_12_img, img.extract<2304, 2495>());
  auto result_12 = sobel_mx(lane_12_img);
  set_at<384, 512, 32>(whole_result, result_12);

  hw_uint<192> lane_13_img;
  set_at<0, 192, 192>(lane_13_img, img.extract<2496, 2687>());
  auto result_13 = sobel_mx(lane_13_img);
  set_at<416, 512, 32>(whole_result, result_13);

  hw_uint<192> lane_14_img;
  set_at<0, 192, 192>(lane_14_img, img.extract<2688, 2879>());
  auto result_14 = sobel_mx(lane_14_img);
  set_at<448, 512, 32>(whole_result, result_14);

  hw_uint<192> lane_15_img;
  set_at<0, 192, 192>(lane_15_img, img.extract<2880, 3071>());
  auto result_15 = sobel_mx(lane_15_img);
  set_at<480, 512, 32>(whole_result, result_15);
  return whole_result;
}

  // sobel_unrolled_16_update_0 unroll factor: 16
hw_uint<512>  mag_cu_unrolled_16(hw_uint<512>& mag_x, hw_uint<512>& mag_y) {
  hw_uint<512> whole_result;

  hw_uint<32> lane_0_mag_x;
  set_at<0, 32, 32>(lane_0_mag_x, mag_x.extract<0, 31>());
  hw_uint<32> lane_0_mag_y;
  set_at<0, 32, 32>(lane_0_mag_y, mag_y.extract<0, 31>());
  auto result_0 = mag_cu(lane_0_mag_x, lane_0_mag_y);
  set_at<0, 512, 32>(whole_result, result_0);

  hw_uint<32> lane_1_mag_x;
  set_at<0, 32, 32>(lane_1_mag_x, mag_x.extract<32, 63>());
  hw_uint<32> lane_1_mag_y;
  set_at<0, 32, 32>(lane_1_mag_y, mag_y.extract<32, 63>());
  auto result_1 = mag_cu(lane_1_mag_x, lane_1_mag_y);
  set_at<32, 512, 32>(whole_result, result_1);

  hw_uint<32> lane_2_mag_x;
  set_at<0, 32, 32>(lane_2_mag_x, mag_x.extract<64, 95>());
  hw_uint<32> lane_2_mag_y;
  set_at<0, 32, 32>(lane_2_mag_y, mag_y.extract<64, 95>());
  auto result_2 = mag_cu(lane_2_mag_x, lane_2_mag_y);
  set_at<64, 512, 32>(whole_result, result_2);

  hw_uint<32> lane_3_mag_x;
  set_at<0, 32, 32>(lane_3_mag_x, mag_x.extract<96, 127>());
  hw_uint<32> lane_3_mag_y;
  set_at<0, 32, 32>(lane_3_mag_y, mag_y.extract<96, 127>());
  auto result_3 = mag_cu(lane_3_mag_x, lane_3_mag_y);
  set_at<96, 512, 32>(whole_result, result_3);

  hw_uint<32> lane_4_mag_x;
  set_at<0, 32, 32>(lane_4_mag_x, mag_x.extract<128, 159>());
  hw_uint<32> lane_4_mag_y;
  set_at<0, 32, 32>(lane_4_mag_y, mag_y.extract<128, 159>());
  auto result_4 = mag_cu(lane_4_mag_x, lane_4_mag_y);
  set_at<128, 512, 32>(whole_result, result_4);

  hw_uint<32> lane_5_mag_x;
  set_at<0, 32, 32>(lane_5_mag_x, mag_x.extract<160, 191>());
  hw_uint<32> lane_5_mag_y;
  set_at<0, 32, 32>(lane_5_mag_y, mag_y.extract<160, 191>());
  auto result_5 = mag_cu(lane_5_mag_x, lane_5_mag_y);
  set_at<160, 512, 32>(whole_result, result_5);

  hw_uint<32> lane_6_mag_x;
  set_at<0, 32, 32>(lane_6_mag_x, mag_x.extract<192, 223>());
  hw_uint<32> lane_6_mag_y;
  set_at<0, 32, 32>(lane_6_mag_y, mag_y.extract<192, 223>());
  auto result_6 = mag_cu(lane_6_mag_x, lane_6_mag_y);
  set_at<192, 512, 32>(whole_result, result_6);

  hw_uint<32> lane_7_mag_x;
  set_at<0, 32, 32>(lane_7_mag_x, mag_x.extract<224, 255>());
  hw_uint<32> lane_7_mag_y;
  set_at<0, 32, 32>(lane_7_mag_y, mag_y.extract<224, 255>());
  auto result_7 = mag_cu(lane_7_mag_x, lane_7_mag_y);
  set_at<224, 512, 32>(whole_result, result_7);

  hw_uint<32> lane_8_mag_x;
  set_at<0, 32, 32>(lane_8_mag_x, mag_x.extract<256, 287>());
  hw_uint<32> lane_8_mag_y;
  set_at<0, 32, 32>(lane_8_mag_y, mag_y.extract<256, 287>());
  auto result_8 = mag_cu(lane_8_mag_x, lane_8_mag_y);
  set_at<256, 512, 32>(whole_result, result_8);

  hw_uint<32> lane_9_mag_x;
  set_at<0, 32, 32>(lane_9_mag_x, mag_x.extract<288, 319>());
  hw_uint<32> lane_9_mag_y;
  set_at<0, 32, 32>(lane_9_mag_y, mag_y.extract<288, 319>());
  auto result_9 = mag_cu(lane_9_mag_x, lane_9_mag_y);
  set_at<288, 512, 32>(whole_result, result_9);

  hw_uint<32> lane_10_mag_x;
  set_at<0, 32, 32>(lane_10_mag_x, mag_x.extract<320, 351>());
  hw_uint<32> lane_10_mag_y;
  set_at<0, 32, 32>(lane_10_mag_y, mag_y.extract<320, 351>());
  auto result_10 = mag_cu(lane_10_mag_x, lane_10_mag_y);
  set_at<320, 512, 32>(whole_result, result_10);

  hw_uint<32> lane_11_mag_x;
  set_at<0, 32, 32>(lane_11_mag_x, mag_x.extract<352, 383>());
  hw_uint<32> lane_11_mag_y;
  set_at<0, 32, 32>(lane_11_mag_y, mag_y.extract<352, 383>());
  auto result_11 = mag_cu(lane_11_mag_x, lane_11_mag_y);
  set_at<352, 512, 32>(whole_result, result_11);

  hw_uint<32> lane_12_mag_x;
  set_at<0, 32, 32>(lane_12_mag_x, mag_x.extract<384, 415>());
  hw_uint<32> lane_12_mag_y;
  set_at<0, 32, 32>(lane_12_mag_y, mag_y.extract<384, 415>());
  auto result_12 = mag_cu(lane_12_mag_x, lane_12_mag_y);
  set_at<384, 512, 32>(whole_result, result_12);

  hw_uint<32> lane_13_mag_x;
  set_at<0, 32, 32>(lane_13_mag_x, mag_x.extract<416, 447>());
  hw_uint<32> lane_13_mag_y;
  set_at<0, 32, 32>(lane_13_mag_y, mag_y.extract<416, 447>());
  auto result_13 = mag_cu(lane_13_mag_x, lane_13_mag_y);
  set_at<416, 512, 32>(whole_result, result_13);

  hw_uint<32> lane_14_mag_x;
  set_at<0, 32, 32>(lane_14_mag_x, mag_x.extract<448, 479>());
  hw_uint<32> lane_14_mag_y;
  set_at<0, 32, 32>(lane_14_mag_y, mag_y.extract<448, 479>());
  auto result_14 = mag_cu(lane_14_mag_x, lane_14_mag_y);
  set_at<448, 512, 32>(whole_result, result_14);

  hw_uint<32> lane_15_mag_x;
  set_at<0, 32, 32>(lane_15_mag_x, mag_x.extract<480, 511>());
  hw_uint<32> lane_15_mag_y;
  set_at<0, 32, 32>(lane_15_mag_y, mag_y.extract<480, 511>());
  auto result_15 = mag_cu(lane_15_mag_x, lane_15_mag_y);
  set_at<480, 512, 32>(whole_result, result_15);
  return whole_result;
}

