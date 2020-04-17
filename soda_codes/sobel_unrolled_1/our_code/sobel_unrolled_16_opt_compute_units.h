#pragma once

#include "conv_3x3.h"

  // img_update_0 unroll factor: 16
hw_uint<512>  id_unrolled_16(hw_uint<512>& off_chip_img) {
  hw_uint<512> whole_result;
  hw_uint<32> lane_0_off_chip_img;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_off_chip_img, off_chip_img.extract<0, 31>());
  auto result_0 = id(lane_0_off_chip_img);
  set_at<0, 512>(whole_result, result_0);
  hw_uint<32> lane_1_off_chip_img;
  // Need offset: 1, 0
  set_at<0, 32>(lane_1_off_chip_img, off_chip_img.extract<32, 63>());
  auto result_1 = id(lane_1_off_chip_img);
  set_at<32, 512>(whole_result, result_1);
  hw_uint<32> lane_2_off_chip_img;
  // Need offset: 2, 0
  set_at<0, 32>(lane_2_off_chip_img, off_chip_img.extract<64, 95>());
  auto result_2 = id(lane_2_off_chip_img);
  set_at<64, 512>(whole_result, result_2);
  hw_uint<32> lane_3_off_chip_img;
  // Need offset: 3, 0
  set_at<0, 32>(lane_3_off_chip_img, off_chip_img.extract<96, 127>());
  auto result_3 = id(lane_3_off_chip_img);
  set_at<96, 512>(whole_result, result_3);
  hw_uint<32> lane_4_off_chip_img;
  // Need offset: 4, 0
  set_at<0, 32>(lane_4_off_chip_img, off_chip_img.extract<128, 159>());
  auto result_4 = id(lane_4_off_chip_img);
  set_at<128, 512>(whole_result, result_4);
  hw_uint<32> lane_5_off_chip_img;
  // Need offset: 5, 0
  set_at<0, 32>(lane_5_off_chip_img, off_chip_img.extract<160, 191>());
  auto result_5 = id(lane_5_off_chip_img);
  set_at<160, 512>(whole_result, result_5);
  hw_uint<32> lane_6_off_chip_img;
  // Need offset: 6, 0
  set_at<0, 32>(lane_6_off_chip_img, off_chip_img.extract<192, 223>());
  auto result_6 = id(lane_6_off_chip_img);
  set_at<192, 512>(whole_result, result_6);
  hw_uint<32> lane_7_off_chip_img;
  // Need offset: 7, 0
  set_at<0, 32>(lane_7_off_chip_img, off_chip_img.extract<224, 255>());
  auto result_7 = id(lane_7_off_chip_img);
  set_at<224, 512>(whole_result, result_7);
  hw_uint<32> lane_8_off_chip_img;
  // Need offset: 8, 0
  set_at<0, 32>(lane_8_off_chip_img, off_chip_img.extract<256, 287>());
  auto result_8 = id(lane_8_off_chip_img);
  set_at<256, 512>(whole_result, result_8);
  hw_uint<32> lane_9_off_chip_img;
  // Need offset: 9, 0
  set_at<0, 32>(lane_9_off_chip_img, off_chip_img.extract<288, 319>());
  auto result_9 = id(lane_9_off_chip_img);
  set_at<288, 512>(whole_result, result_9);
  hw_uint<32> lane_10_off_chip_img;
  // Need offset: 10, 0
  set_at<0, 32>(lane_10_off_chip_img, off_chip_img.extract<320, 351>());
  auto result_10 = id(lane_10_off_chip_img);
  set_at<320, 512>(whole_result, result_10);
  hw_uint<32> lane_11_off_chip_img;
  // Need offset: 11, 0
  set_at<0, 32>(lane_11_off_chip_img, off_chip_img.extract<352, 383>());
  auto result_11 = id(lane_11_off_chip_img);
  set_at<352, 512>(whole_result, result_11);
  hw_uint<32> lane_12_off_chip_img;
  // Need offset: 12, 0
  set_at<0, 32>(lane_12_off_chip_img, off_chip_img.extract<384, 415>());
  auto result_12 = id(lane_12_off_chip_img);
  set_at<384, 512>(whole_result, result_12);
  hw_uint<32> lane_13_off_chip_img;
  // Need offset: 13, 0
  set_at<0, 32>(lane_13_off_chip_img, off_chip_img.extract<416, 447>());
  auto result_13 = id(lane_13_off_chip_img);
  set_at<416, 512>(whole_result, result_13);
  hw_uint<32> lane_14_off_chip_img;
  // Need offset: 14, 0
  set_at<0, 32>(lane_14_off_chip_img, off_chip_img.extract<448, 479>());
  auto result_14 = id(lane_14_off_chip_img);
  set_at<448, 512>(whole_result, result_14);
  hw_uint<32> lane_15_off_chip_img;
  // Need offset: 15, 0
  set_at<0, 32>(lane_15_off_chip_img, off_chip_img.extract<480, 511>());
  auto result_15 = id(lane_15_off_chip_img);
  set_at<480, 512>(whole_result, result_15);
  return whole_result;
}

  // mag_y_update_0 unroll factor: 16
hw_uint<512>  sobel_my_unrolled_16(hw_uint<1152>& img) {
  hw_uint<512> whole_result;
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
  set_at<0, 512>(whole_result, result_0);
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
  set_at<32, 512>(whole_result, result_1);
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
  set_at<64, 512>(whole_result, result_2);
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
  set_at<96, 512>(whole_result, result_3);
  hw_uint<192> lane_4_img;
  // Need offset: 3, -1
  set_at<0, 192>(lane_4_img, img.extract<256, 287>());
  // Need offset: 3, 1
  set_at<32, 192>(lane_4_img, img.extract<288, 319>());
  // Need offset: 4, -1
  set_at<64, 192>(lane_4_img, img.extract<320, 351>());
  // Need offset: 4, 1
  set_at<96, 192>(lane_4_img, img.extract<352, 383>());
  // Need offset: 5, -1
  set_at<128, 192>(lane_4_img, img.extract<384, 415>());
  // Need offset: 5, 1
  set_at<160, 192>(lane_4_img, img.extract<416, 447>());
  auto result_4 = sobel_my(lane_4_img);
  set_at<128, 512>(whole_result, result_4);
  hw_uint<192> lane_5_img;
  // Need offset: 4, -1
  set_at<0, 192>(lane_5_img, img.extract<320, 351>());
  // Need offset: 4, 1
  set_at<32, 192>(lane_5_img, img.extract<352, 383>());
  // Need offset: 5, -1
  set_at<64, 192>(lane_5_img, img.extract<384, 415>());
  // Need offset: 5, 1
  set_at<96, 192>(lane_5_img, img.extract<416, 447>());
  // Need offset: 6, -1
  set_at<128, 192>(lane_5_img, img.extract<448, 479>());
  // Need offset: 6, 1
  set_at<160, 192>(lane_5_img, img.extract<480, 511>());
  auto result_5 = sobel_my(lane_5_img);
  set_at<160, 512>(whole_result, result_5);
  hw_uint<192> lane_6_img;
  // Need offset: 5, -1
  set_at<0, 192>(lane_6_img, img.extract<384, 415>());
  // Need offset: 5, 1
  set_at<32, 192>(lane_6_img, img.extract<416, 447>());
  // Need offset: 6, -1
  set_at<64, 192>(lane_6_img, img.extract<448, 479>());
  // Need offset: 6, 1
  set_at<96, 192>(lane_6_img, img.extract<480, 511>());
  // Need offset: 7, -1
  set_at<128, 192>(lane_6_img, img.extract<512, 543>());
  // Need offset: 7, 1
  set_at<160, 192>(lane_6_img, img.extract<544, 575>());
  auto result_6 = sobel_my(lane_6_img);
  set_at<192, 512>(whole_result, result_6);
  hw_uint<192> lane_7_img;
  // Need offset: 6, -1
  set_at<0, 192>(lane_7_img, img.extract<448, 479>());
  // Need offset: 6, 1
  set_at<32, 192>(lane_7_img, img.extract<480, 511>());
  // Need offset: 7, -1
  set_at<64, 192>(lane_7_img, img.extract<512, 543>());
  // Need offset: 7, 1
  set_at<96, 192>(lane_7_img, img.extract<544, 575>());
  // Need offset: 8, -1
  set_at<128, 192>(lane_7_img, img.extract<576, 607>());
  // Need offset: 8, 1
  set_at<160, 192>(lane_7_img, img.extract<608, 639>());
  auto result_7 = sobel_my(lane_7_img);
  set_at<224, 512>(whole_result, result_7);
  hw_uint<192> lane_8_img;
  // Need offset: 7, -1
  set_at<0, 192>(lane_8_img, img.extract<512, 543>());
  // Need offset: 7, 1
  set_at<32, 192>(lane_8_img, img.extract<544, 575>());
  // Need offset: 8, -1
  set_at<64, 192>(lane_8_img, img.extract<576, 607>());
  // Need offset: 8, 1
  set_at<96, 192>(lane_8_img, img.extract<608, 639>());
  // Need offset: 9, -1
  set_at<128, 192>(lane_8_img, img.extract<640, 671>());
  // Need offset: 9, 1
  set_at<160, 192>(lane_8_img, img.extract<672, 703>());
  auto result_8 = sobel_my(lane_8_img);
  set_at<256, 512>(whole_result, result_8);
  hw_uint<192> lane_9_img;
  // Need offset: 8, -1
  set_at<0, 192>(lane_9_img, img.extract<576, 607>());
  // Need offset: 8, 1
  set_at<32, 192>(lane_9_img, img.extract<608, 639>());
  // Need offset: 9, -1
  set_at<64, 192>(lane_9_img, img.extract<640, 671>());
  // Need offset: 9, 1
  set_at<96, 192>(lane_9_img, img.extract<672, 703>());
  // Need offset: 10, -1
  set_at<128, 192>(lane_9_img, img.extract<704, 735>());
  // Need offset: 10, 1
  set_at<160, 192>(lane_9_img, img.extract<736, 767>());
  auto result_9 = sobel_my(lane_9_img);
  set_at<288, 512>(whole_result, result_9);
  hw_uint<192> lane_10_img;
  // Need offset: 9, -1
  set_at<0, 192>(lane_10_img, img.extract<640, 671>());
  // Need offset: 9, 1
  set_at<32, 192>(lane_10_img, img.extract<672, 703>());
  // Need offset: 10, -1
  set_at<64, 192>(lane_10_img, img.extract<704, 735>());
  // Need offset: 10, 1
  set_at<96, 192>(lane_10_img, img.extract<736, 767>());
  // Need offset: 11, -1
  set_at<128, 192>(lane_10_img, img.extract<768, 799>());
  // Need offset: 11, 1
  set_at<160, 192>(lane_10_img, img.extract<800, 831>());
  auto result_10 = sobel_my(lane_10_img);
  set_at<320, 512>(whole_result, result_10);
  hw_uint<192> lane_11_img;
  // Need offset: 10, -1
  set_at<0, 192>(lane_11_img, img.extract<704, 735>());
  // Need offset: 10, 1
  set_at<32, 192>(lane_11_img, img.extract<736, 767>());
  // Need offset: 11, -1
  set_at<64, 192>(lane_11_img, img.extract<768, 799>());
  // Need offset: 11, 1
  set_at<96, 192>(lane_11_img, img.extract<800, 831>());
  // Need offset: 12, -1
  set_at<128, 192>(lane_11_img, img.extract<832, 863>());
  // Need offset: 12, 1
  set_at<160, 192>(lane_11_img, img.extract<864, 895>());
  auto result_11 = sobel_my(lane_11_img);
  set_at<352, 512>(whole_result, result_11);
  hw_uint<192> lane_12_img;
  // Need offset: 11, -1
  set_at<0, 192>(lane_12_img, img.extract<768, 799>());
  // Need offset: 11, 1
  set_at<32, 192>(lane_12_img, img.extract<800, 831>());
  // Need offset: 12, -1
  set_at<64, 192>(lane_12_img, img.extract<832, 863>());
  // Need offset: 12, 1
  set_at<96, 192>(lane_12_img, img.extract<864, 895>());
  // Need offset: 13, -1
  set_at<128, 192>(lane_12_img, img.extract<896, 927>());
  // Need offset: 13, 1
  set_at<160, 192>(lane_12_img, img.extract<928, 959>());
  auto result_12 = sobel_my(lane_12_img);
  set_at<384, 512>(whole_result, result_12);
  hw_uint<192> lane_13_img;
  // Need offset: 12, -1
  set_at<0, 192>(lane_13_img, img.extract<832, 863>());
  // Need offset: 12, 1
  set_at<32, 192>(lane_13_img, img.extract<864, 895>());
  // Need offset: 13, -1
  set_at<64, 192>(lane_13_img, img.extract<896, 927>());
  // Need offset: 13, 1
  set_at<96, 192>(lane_13_img, img.extract<928, 959>());
  // Need offset: 14, -1
  set_at<128, 192>(lane_13_img, img.extract<960, 991>());
  // Need offset: 14, 1
  set_at<160, 192>(lane_13_img, img.extract<992, 1023>());
  auto result_13 = sobel_my(lane_13_img);
  set_at<416, 512>(whole_result, result_13);
  hw_uint<192> lane_14_img;
  // Need offset: 13, -1
  set_at<0, 192>(lane_14_img, img.extract<896, 927>());
  // Need offset: 13, 1
  set_at<32, 192>(lane_14_img, img.extract<928, 959>());
  // Need offset: 14, -1
  set_at<64, 192>(lane_14_img, img.extract<960, 991>());
  // Need offset: 14, 1
  set_at<96, 192>(lane_14_img, img.extract<992, 1023>());
  // Need offset: 15, -1
  set_at<128, 192>(lane_14_img, img.extract<1024, 1055>());
  // Need offset: 15, 1
  set_at<160, 192>(lane_14_img, img.extract<1056, 1087>());
  auto result_14 = sobel_my(lane_14_img);
  set_at<448, 512>(whole_result, result_14);
  hw_uint<192> lane_15_img;
  // Need offset: 14, -1
  set_at<0, 192>(lane_15_img, img.extract<960, 991>());
  // Need offset: 14, 1
  set_at<32, 192>(lane_15_img, img.extract<992, 1023>());
  // Need offset: 15, -1
  set_at<64, 192>(lane_15_img, img.extract<1024, 1055>());
  // Need offset: 15, 1
  set_at<96, 192>(lane_15_img, img.extract<1056, 1087>());
  // Need offset: 16, -1
  set_at<128, 192>(lane_15_img, img.extract<1088, 1119>());
  // Need offset: 16, 1
  set_at<160, 192>(lane_15_img, img.extract<1120, 1151>());
  auto result_15 = sobel_my(lane_15_img);
  set_at<480, 512>(whole_result, result_15);
  return whole_result;
}

  // mag_x_update_0 unroll factor: 16
hw_uint<512>  sobel_mx_unrolled_16(hw_uint<1728>& img) {
  hw_uint<512> whole_result;
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
  set_at<0, 512>(whole_result, result_0);
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
  set_at<32, 512>(whole_result, result_1);
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
  set_at<64, 512>(whole_result, result_2);
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
  set_at<96, 512>(whole_result, result_3);
  hw_uint<192> lane_4_img;
  // Need offset: 3, -1
  set_at<0, 192>(lane_4_img, img.extract<384, 415>());
  // Need offset: 3, 0
  set_at<32, 192>(lane_4_img, img.extract<416, 447>());
  // Need offset: 3, 1
  set_at<64, 192>(lane_4_img, img.extract<448, 479>());
  // Need offset: 5, -1
  set_at<96, 192>(lane_4_img, img.extract<576, 607>());
  // Need offset: 5, 0
  set_at<128, 192>(lane_4_img, img.extract<608, 639>());
  // Need offset: 5, 1
  set_at<160, 192>(lane_4_img, img.extract<640, 671>());
  auto result_4 = sobel_mx(lane_4_img);
  set_at<128, 512>(whole_result, result_4);
  hw_uint<192> lane_5_img;
  // Need offset: 4, -1
  set_at<0, 192>(lane_5_img, img.extract<480, 511>());
  // Need offset: 4, 0
  set_at<32, 192>(lane_5_img, img.extract<512, 543>());
  // Need offset: 4, 1
  set_at<64, 192>(lane_5_img, img.extract<544, 575>());
  // Need offset: 6, -1
  set_at<96, 192>(lane_5_img, img.extract<672, 703>());
  // Need offset: 6, 0
  set_at<128, 192>(lane_5_img, img.extract<704, 735>());
  // Need offset: 6, 1
  set_at<160, 192>(lane_5_img, img.extract<736, 767>());
  auto result_5 = sobel_mx(lane_5_img);
  set_at<160, 512>(whole_result, result_5);
  hw_uint<192> lane_6_img;
  // Need offset: 5, -1
  set_at<0, 192>(lane_6_img, img.extract<576, 607>());
  // Need offset: 5, 0
  set_at<32, 192>(lane_6_img, img.extract<608, 639>());
  // Need offset: 5, 1
  set_at<64, 192>(lane_6_img, img.extract<640, 671>());
  // Need offset: 7, -1
  set_at<96, 192>(lane_6_img, img.extract<768, 799>());
  // Need offset: 7, 0
  set_at<128, 192>(lane_6_img, img.extract<800, 831>());
  // Need offset: 7, 1
  set_at<160, 192>(lane_6_img, img.extract<832, 863>());
  auto result_6 = sobel_mx(lane_6_img);
  set_at<192, 512>(whole_result, result_6);
  hw_uint<192> lane_7_img;
  // Need offset: 6, -1
  set_at<0, 192>(lane_7_img, img.extract<672, 703>());
  // Need offset: 6, 0
  set_at<32, 192>(lane_7_img, img.extract<704, 735>());
  // Need offset: 6, 1
  set_at<64, 192>(lane_7_img, img.extract<736, 767>());
  // Need offset: 8, -1
  set_at<96, 192>(lane_7_img, img.extract<864, 895>());
  // Need offset: 8, 0
  set_at<128, 192>(lane_7_img, img.extract<896, 927>());
  // Need offset: 8, 1
  set_at<160, 192>(lane_7_img, img.extract<928, 959>());
  auto result_7 = sobel_mx(lane_7_img);
  set_at<224, 512>(whole_result, result_7);
  hw_uint<192> lane_8_img;
  // Need offset: 7, -1
  set_at<0, 192>(lane_8_img, img.extract<768, 799>());
  // Need offset: 7, 0
  set_at<32, 192>(lane_8_img, img.extract<800, 831>());
  // Need offset: 7, 1
  set_at<64, 192>(lane_8_img, img.extract<832, 863>());
  // Need offset: 9, -1
  set_at<96, 192>(lane_8_img, img.extract<960, 991>());
  // Need offset: 9, 0
  set_at<128, 192>(lane_8_img, img.extract<992, 1023>());
  // Need offset: 9, 1
  set_at<160, 192>(lane_8_img, img.extract<1024, 1055>());
  auto result_8 = sobel_mx(lane_8_img);
  set_at<256, 512>(whole_result, result_8);
  hw_uint<192> lane_9_img;
  // Need offset: 8, -1
  set_at<0, 192>(lane_9_img, img.extract<864, 895>());
  // Need offset: 8, 0
  set_at<32, 192>(lane_9_img, img.extract<896, 927>());
  // Need offset: 8, 1
  set_at<64, 192>(lane_9_img, img.extract<928, 959>());
  // Need offset: 10, -1
  set_at<96, 192>(lane_9_img, img.extract<1056, 1087>());
  // Need offset: 10, 0
  set_at<128, 192>(lane_9_img, img.extract<1088, 1119>());
  // Need offset: 10, 1
  set_at<160, 192>(lane_9_img, img.extract<1120, 1151>());
  auto result_9 = sobel_mx(lane_9_img);
  set_at<288, 512>(whole_result, result_9);
  hw_uint<192> lane_10_img;
  // Need offset: 9, -1
  set_at<0, 192>(lane_10_img, img.extract<960, 991>());
  // Need offset: 9, 0
  set_at<32, 192>(lane_10_img, img.extract<992, 1023>());
  // Need offset: 9, 1
  set_at<64, 192>(lane_10_img, img.extract<1024, 1055>());
  // Need offset: 11, -1
  set_at<96, 192>(lane_10_img, img.extract<1152, 1183>());
  // Need offset: 11, 0
  set_at<128, 192>(lane_10_img, img.extract<1184, 1215>());
  // Need offset: 11, 1
  set_at<160, 192>(lane_10_img, img.extract<1216, 1247>());
  auto result_10 = sobel_mx(lane_10_img);
  set_at<320, 512>(whole_result, result_10);
  hw_uint<192> lane_11_img;
  // Need offset: 10, -1
  set_at<0, 192>(lane_11_img, img.extract<1056, 1087>());
  // Need offset: 10, 0
  set_at<32, 192>(lane_11_img, img.extract<1088, 1119>());
  // Need offset: 10, 1
  set_at<64, 192>(lane_11_img, img.extract<1120, 1151>());
  // Need offset: 12, -1
  set_at<96, 192>(lane_11_img, img.extract<1248, 1279>());
  // Need offset: 12, 0
  set_at<128, 192>(lane_11_img, img.extract<1280, 1311>());
  // Need offset: 12, 1
  set_at<160, 192>(lane_11_img, img.extract<1312, 1343>());
  auto result_11 = sobel_mx(lane_11_img);
  set_at<352, 512>(whole_result, result_11);
  hw_uint<192> lane_12_img;
  // Need offset: 11, -1
  set_at<0, 192>(lane_12_img, img.extract<1152, 1183>());
  // Need offset: 11, 0
  set_at<32, 192>(lane_12_img, img.extract<1184, 1215>());
  // Need offset: 11, 1
  set_at<64, 192>(lane_12_img, img.extract<1216, 1247>());
  // Need offset: 13, -1
  set_at<96, 192>(lane_12_img, img.extract<1344, 1375>());
  // Need offset: 13, 0
  set_at<128, 192>(lane_12_img, img.extract<1376, 1407>());
  // Need offset: 13, 1
  set_at<160, 192>(lane_12_img, img.extract<1408, 1439>());
  auto result_12 = sobel_mx(lane_12_img);
  set_at<384, 512>(whole_result, result_12);
  hw_uint<192> lane_13_img;
  // Need offset: 12, -1
  set_at<0, 192>(lane_13_img, img.extract<1248, 1279>());
  // Need offset: 12, 0
  set_at<32, 192>(lane_13_img, img.extract<1280, 1311>());
  // Need offset: 12, 1
  set_at<64, 192>(lane_13_img, img.extract<1312, 1343>());
  // Need offset: 14, -1
  set_at<96, 192>(lane_13_img, img.extract<1440, 1471>());
  // Need offset: 14, 0
  set_at<128, 192>(lane_13_img, img.extract<1472, 1503>());
  // Need offset: 14, 1
  set_at<160, 192>(lane_13_img, img.extract<1504, 1535>());
  auto result_13 = sobel_mx(lane_13_img);
  set_at<416, 512>(whole_result, result_13);
  hw_uint<192> lane_14_img;
  // Need offset: 13, -1
  set_at<0, 192>(lane_14_img, img.extract<1344, 1375>());
  // Need offset: 13, 0
  set_at<32, 192>(lane_14_img, img.extract<1376, 1407>());
  // Need offset: 13, 1
  set_at<64, 192>(lane_14_img, img.extract<1408, 1439>());
  // Need offset: 15, -1
  set_at<96, 192>(lane_14_img, img.extract<1536, 1567>());
  // Need offset: 15, 0
  set_at<128, 192>(lane_14_img, img.extract<1568, 1599>());
  // Need offset: 15, 1
  set_at<160, 192>(lane_14_img, img.extract<1600, 1631>());
  auto result_14 = sobel_mx(lane_14_img);
  set_at<448, 512>(whole_result, result_14);
  hw_uint<192> lane_15_img;
  // Need offset: 14, -1
  set_at<0, 192>(lane_15_img, img.extract<1440, 1471>());
  // Need offset: 14, 0
  set_at<32, 192>(lane_15_img, img.extract<1472, 1503>());
  // Need offset: 14, 1
  set_at<64, 192>(lane_15_img, img.extract<1504, 1535>());
  // Need offset: 16, -1
  set_at<96, 192>(lane_15_img, img.extract<1632, 1663>());
  // Need offset: 16, 0
  set_at<128, 192>(lane_15_img, img.extract<1664, 1695>());
  // Need offset: 16, 1
  set_at<160, 192>(lane_15_img, img.extract<1696, 1727>());
  auto result_15 = sobel_mx(lane_15_img);
  set_at<480, 512>(whole_result, result_15);
  return whole_result;
}

  // sobel_unrolled_16_update_0 unroll factor: 16
hw_uint<512>  mag_cu_unrolled_16(hw_uint<512>& mag_x, hw_uint<512>& mag_y) {
  hw_uint<512> whole_result;
  hw_uint<32> lane_0_mag_x;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_mag_x, mag_x.extract<0, 31>());
  hw_uint<32> lane_0_mag_y;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_mag_y, mag_y.extract<0, 31>());
  auto result_0 = mag_cu(lane_0_mag_x, lane_0_mag_y);
  set_at<0, 512>(whole_result, result_0);
  hw_uint<32> lane_1_mag_x;
  // Need offset: 1, 0
  set_at<0, 32>(lane_1_mag_x, mag_x.extract<32, 63>());
  hw_uint<32> lane_1_mag_y;
  // Need offset: 1, 0
  set_at<0, 32>(lane_1_mag_y, mag_y.extract<32, 63>());
  auto result_1 = mag_cu(lane_1_mag_x, lane_1_mag_y);
  set_at<32, 512>(whole_result, result_1);
  hw_uint<32> lane_2_mag_x;
  // Need offset: 2, 0
  set_at<0, 32>(lane_2_mag_x, mag_x.extract<64, 95>());
  hw_uint<32> lane_2_mag_y;
  // Need offset: 2, 0
  set_at<0, 32>(lane_2_mag_y, mag_y.extract<64, 95>());
  auto result_2 = mag_cu(lane_2_mag_x, lane_2_mag_y);
  set_at<64, 512>(whole_result, result_2);
  hw_uint<32> lane_3_mag_x;
  // Need offset: 3, 0
  set_at<0, 32>(lane_3_mag_x, mag_x.extract<96, 127>());
  hw_uint<32> lane_3_mag_y;
  // Need offset: 3, 0
  set_at<0, 32>(lane_3_mag_y, mag_y.extract<96, 127>());
  auto result_3 = mag_cu(lane_3_mag_x, lane_3_mag_y);
  set_at<96, 512>(whole_result, result_3);
  hw_uint<32> lane_4_mag_x;
  // Need offset: 4, 0
  set_at<0, 32>(lane_4_mag_x, mag_x.extract<128, 159>());
  hw_uint<32> lane_4_mag_y;
  // Need offset: 4, 0
  set_at<0, 32>(lane_4_mag_y, mag_y.extract<128, 159>());
  auto result_4 = mag_cu(lane_4_mag_x, lane_4_mag_y);
  set_at<128, 512>(whole_result, result_4);
  hw_uint<32> lane_5_mag_x;
  // Need offset: 5, 0
  set_at<0, 32>(lane_5_mag_x, mag_x.extract<160, 191>());
  hw_uint<32> lane_5_mag_y;
  // Need offset: 5, 0
  set_at<0, 32>(lane_5_mag_y, mag_y.extract<160, 191>());
  auto result_5 = mag_cu(lane_5_mag_x, lane_5_mag_y);
  set_at<160, 512>(whole_result, result_5);
  hw_uint<32> lane_6_mag_x;
  // Need offset: 6, 0
  set_at<0, 32>(lane_6_mag_x, mag_x.extract<192, 223>());
  hw_uint<32> lane_6_mag_y;
  // Need offset: 6, 0
  set_at<0, 32>(lane_6_mag_y, mag_y.extract<192, 223>());
  auto result_6 = mag_cu(lane_6_mag_x, lane_6_mag_y);
  set_at<192, 512>(whole_result, result_6);
  hw_uint<32> lane_7_mag_x;
  // Need offset: 7, 0
  set_at<0, 32>(lane_7_mag_x, mag_x.extract<224, 255>());
  hw_uint<32> lane_7_mag_y;
  // Need offset: 7, 0
  set_at<0, 32>(lane_7_mag_y, mag_y.extract<224, 255>());
  auto result_7 = mag_cu(lane_7_mag_x, lane_7_mag_y);
  set_at<224, 512>(whole_result, result_7);
  hw_uint<32> lane_8_mag_x;
  // Need offset: 8, 0
  set_at<0, 32>(lane_8_mag_x, mag_x.extract<256, 287>());
  hw_uint<32> lane_8_mag_y;
  // Need offset: 8, 0
  set_at<0, 32>(lane_8_mag_y, mag_y.extract<256, 287>());
  auto result_8 = mag_cu(lane_8_mag_x, lane_8_mag_y);
  set_at<256, 512>(whole_result, result_8);
  hw_uint<32> lane_9_mag_x;
  // Need offset: 9, 0
  set_at<0, 32>(lane_9_mag_x, mag_x.extract<288, 319>());
  hw_uint<32> lane_9_mag_y;
  // Need offset: 9, 0
  set_at<0, 32>(lane_9_mag_y, mag_y.extract<288, 319>());
  auto result_9 = mag_cu(lane_9_mag_x, lane_9_mag_y);
  set_at<288, 512>(whole_result, result_9);
  hw_uint<32> lane_10_mag_x;
  // Need offset: 10, 0
  set_at<0, 32>(lane_10_mag_x, mag_x.extract<320, 351>());
  hw_uint<32> lane_10_mag_y;
  // Need offset: 10, 0
  set_at<0, 32>(lane_10_mag_y, mag_y.extract<320, 351>());
  auto result_10 = mag_cu(lane_10_mag_x, lane_10_mag_y);
  set_at<320, 512>(whole_result, result_10);
  hw_uint<32> lane_11_mag_x;
  // Need offset: 11, 0
  set_at<0, 32>(lane_11_mag_x, mag_x.extract<352, 383>());
  hw_uint<32> lane_11_mag_y;
  // Need offset: 11, 0
  set_at<0, 32>(lane_11_mag_y, mag_y.extract<352, 383>());
  auto result_11 = mag_cu(lane_11_mag_x, lane_11_mag_y);
  set_at<352, 512>(whole_result, result_11);
  hw_uint<32> lane_12_mag_x;
  // Need offset: 12, 0
  set_at<0, 32>(lane_12_mag_x, mag_x.extract<384, 415>());
  hw_uint<32> lane_12_mag_y;
  // Need offset: 12, 0
  set_at<0, 32>(lane_12_mag_y, mag_y.extract<384, 415>());
  auto result_12 = mag_cu(lane_12_mag_x, lane_12_mag_y);
  set_at<384, 512>(whole_result, result_12);
  hw_uint<32> lane_13_mag_x;
  // Need offset: 13, 0
  set_at<0, 32>(lane_13_mag_x, mag_x.extract<416, 447>());
  hw_uint<32> lane_13_mag_y;
  // Need offset: 13, 0
  set_at<0, 32>(lane_13_mag_y, mag_y.extract<416, 447>());
  auto result_13 = mag_cu(lane_13_mag_x, lane_13_mag_y);
  set_at<416, 512>(whole_result, result_13);
  hw_uint<32> lane_14_mag_x;
  // Need offset: 14, 0
  set_at<0, 32>(lane_14_mag_x, mag_x.extract<448, 479>());
  hw_uint<32> lane_14_mag_y;
  // Need offset: 14, 0
  set_at<0, 32>(lane_14_mag_y, mag_y.extract<448, 479>());
  auto result_14 = mag_cu(lane_14_mag_x, lane_14_mag_y);
  set_at<448, 512>(whole_result, result_14);
  hw_uint<32> lane_15_mag_x;
  // Need offset: 15, 0
  set_at<0, 32>(lane_15_mag_x, mag_x.extract<480, 511>());
  hw_uint<32> lane_15_mag_y;
  // Need offset: 15, 0
  set_at<0, 32>(lane_15_mag_y, mag_y.extract<480, 511>());
  auto result_15 = mag_cu(lane_15_mag_x, lane_15_mag_y);
  set_at<480, 512>(whole_result, result_15);
  return whole_result;
}

