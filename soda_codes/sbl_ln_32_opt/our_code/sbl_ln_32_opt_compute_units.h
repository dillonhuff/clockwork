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

hw_uint<16> sbl_ln_32_generated_compute(hw_uint<16*1> mag_x, hw_uint<16*1> mag_y) {
  return uint16_t(((uint16_t(mag_x.get<16, 0>()) * uint16_t(mag_x.get<16, 0>())) + (uint16_t(mag_y.get<16, 0>()) * uint16_t(mag_y.get<16, 0>()))));
}



// Compute unit banks...
  // img_update_0 unroll factor: 32
hw_uint<512>  img_generated_compute_unrolled_32(hw_uint<512>& off_chip_img) {
  hw_uint<512> whole_result;

  hw_uint<16> lane_0_off_chip_img;
  set_at<0, 16, 16>(lane_0_off_chip_img, off_chip_img.extract<0, 15>());
  auto result_0 = img_generated_compute(lane_0_off_chip_img);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<16> lane_1_off_chip_img;
  set_at<0, 16, 16>(lane_1_off_chip_img, off_chip_img.extract<16, 31>());
  auto result_1 = img_generated_compute(lane_1_off_chip_img);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<16> lane_2_off_chip_img;
  set_at<0, 16, 16>(lane_2_off_chip_img, off_chip_img.extract<32, 47>());
  auto result_2 = img_generated_compute(lane_2_off_chip_img);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<16> lane_3_off_chip_img;
  set_at<0, 16, 16>(lane_3_off_chip_img, off_chip_img.extract<48, 63>());
  auto result_3 = img_generated_compute(lane_3_off_chip_img);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<16> lane_4_off_chip_img;
  set_at<0, 16, 16>(lane_4_off_chip_img, off_chip_img.extract<64, 79>());
  auto result_4 = img_generated_compute(lane_4_off_chip_img);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<16> lane_5_off_chip_img;
  set_at<0, 16, 16>(lane_5_off_chip_img, off_chip_img.extract<80, 95>());
  auto result_5 = img_generated_compute(lane_5_off_chip_img);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<16> lane_6_off_chip_img;
  set_at<0, 16, 16>(lane_6_off_chip_img, off_chip_img.extract<96, 111>());
  auto result_6 = img_generated_compute(lane_6_off_chip_img);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<16> lane_7_off_chip_img;
  set_at<0, 16, 16>(lane_7_off_chip_img, off_chip_img.extract<112, 127>());
  auto result_7 = img_generated_compute(lane_7_off_chip_img);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<16> lane_8_off_chip_img;
  set_at<0, 16, 16>(lane_8_off_chip_img, off_chip_img.extract<128, 143>());
  auto result_8 = img_generated_compute(lane_8_off_chip_img);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<16> lane_9_off_chip_img;
  set_at<0, 16, 16>(lane_9_off_chip_img, off_chip_img.extract<144, 159>());
  auto result_9 = img_generated_compute(lane_9_off_chip_img);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<16> lane_10_off_chip_img;
  set_at<0, 16, 16>(lane_10_off_chip_img, off_chip_img.extract<160, 175>());
  auto result_10 = img_generated_compute(lane_10_off_chip_img);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<16> lane_11_off_chip_img;
  set_at<0, 16, 16>(lane_11_off_chip_img, off_chip_img.extract<176, 191>());
  auto result_11 = img_generated_compute(lane_11_off_chip_img);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<16> lane_12_off_chip_img;
  set_at<0, 16, 16>(lane_12_off_chip_img, off_chip_img.extract<192, 207>());
  auto result_12 = img_generated_compute(lane_12_off_chip_img);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<16> lane_13_off_chip_img;
  set_at<0, 16, 16>(lane_13_off_chip_img, off_chip_img.extract<208, 223>());
  auto result_13 = img_generated_compute(lane_13_off_chip_img);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<16> lane_14_off_chip_img;
  set_at<0, 16, 16>(lane_14_off_chip_img, off_chip_img.extract<224, 239>());
  auto result_14 = img_generated_compute(lane_14_off_chip_img);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<16> lane_15_off_chip_img;
  set_at<0, 16, 16>(lane_15_off_chip_img, off_chip_img.extract<240, 255>());
  auto result_15 = img_generated_compute(lane_15_off_chip_img);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<16> lane_16_off_chip_img;
  set_at<0, 16, 16>(lane_16_off_chip_img, off_chip_img.extract<256, 271>());
  auto result_16 = img_generated_compute(lane_16_off_chip_img);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<16> lane_17_off_chip_img;
  set_at<0, 16, 16>(lane_17_off_chip_img, off_chip_img.extract<272, 287>());
  auto result_17 = img_generated_compute(lane_17_off_chip_img);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<16> lane_18_off_chip_img;
  set_at<0, 16, 16>(lane_18_off_chip_img, off_chip_img.extract<288, 303>());
  auto result_18 = img_generated_compute(lane_18_off_chip_img);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<16> lane_19_off_chip_img;
  set_at<0, 16, 16>(lane_19_off_chip_img, off_chip_img.extract<304, 319>());
  auto result_19 = img_generated_compute(lane_19_off_chip_img);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<16> lane_20_off_chip_img;
  set_at<0, 16, 16>(lane_20_off_chip_img, off_chip_img.extract<320, 335>());
  auto result_20 = img_generated_compute(lane_20_off_chip_img);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<16> lane_21_off_chip_img;
  set_at<0, 16, 16>(lane_21_off_chip_img, off_chip_img.extract<336, 351>());
  auto result_21 = img_generated_compute(lane_21_off_chip_img);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<16> lane_22_off_chip_img;
  set_at<0, 16, 16>(lane_22_off_chip_img, off_chip_img.extract<352, 367>());
  auto result_22 = img_generated_compute(lane_22_off_chip_img);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<16> lane_23_off_chip_img;
  set_at<0, 16, 16>(lane_23_off_chip_img, off_chip_img.extract<368, 383>());
  auto result_23 = img_generated_compute(lane_23_off_chip_img);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<16> lane_24_off_chip_img;
  set_at<0, 16, 16>(lane_24_off_chip_img, off_chip_img.extract<384, 399>());
  auto result_24 = img_generated_compute(lane_24_off_chip_img);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<16> lane_25_off_chip_img;
  set_at<0, 16, 16>(lane_25_off_chip_img, off_chip_img.extract<400, 415>());
  auto result_25 = img_generated_compute(lane_25_off_chip_img);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<16> lane_26_off_chip_img;
  set_at<0, 16, 16>(lane_26_off_chip_img, off_chip_img.extract<416, 431>());
  auto result_26 = img_generated_compute(lane_26_off_chip_img);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<16> lane_27_off_chip_img;
  set_at<0, 16, 16>(lane_27_off_chip_img, off_chip_img.extract<432, 447>());
  auto result_27 = img_generated_compute(lane_27_off_chip_img);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<16> lane_28_off_chip_img;
  set_at<0, 16, 16>(lane_28_off_chip_img, off_chip_img.extract<448, 463>());
  auto result_28 = img_generated_compute(lane_28_off_chip_img);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<16> lane_29_off_chip_img;
  set_at<0, 16, 16>(lane_29_off_chip_img, off_chip_img.extract<464, 479>());
  auto result_29 = img_generated_compute(lane_29_off_chip_img);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<16> lane_30_off_chip_img;
  set_at<0, 16, 16>(lane_30_off_chip_img, off_chip_img.extract<480, 495>());
  auto result_30 = img_generated_compute(lane_30_off_chip_img);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<16> lane_31_off_chip_img;
  set_at<0, 16, 16>(lane_31_off_chip_img, off_chip_img.extract<496, 511>());
  auto result_31 = img_generated_compute(lane_31_off_chip_img);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // mag_y_update_0 unroll factor: 32
hw_uint<512>  mag_y_generated_compute_unrolled_32(hw_uint<3072>& img) {
  hw_uint<512> whole_result;

  hw_uint<96> lane_0_img;
  set_at<0, 96, 96>(lane_0_img, img.extract<0, 95>());
  auto result_0 = mag_y_generated_compute(lane_0_img);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<96> lane_1_img;
  set_at<0, 96, 96>(lane_1_img, img.extract<96, 191>());
  auto result_1 = mag_y_generated_compute(lane_1_img);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<96> lane_2_img;
  set_at<0, 96, 96>(lane_2_img, img.extract<192, 287>());
  auto result_2 = mag_y_generated_compute(lane_2_img);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<96> lane_3_img;
  set_at<0, 96, 96>(lane_3_img, img.extract<288, 383>());
  auto result_3 = mag_y_generated_compute(lane_3_img);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<96> lane_4_img;
  set_at<0, 96, 96>(lane_4_img, img.extract<384, 479>());
  auto result_4 = mag_y_generated_compute(lane_4_img);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<96> lane_5_img;
  set_at<0, 96, 96>(lane_5_img, img.extract<480, 575>());
  auto result_5 = mag_y_generated_compute(lane_5_img);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<96> lane_6_img;
  set_at<0, 96, 96>(lane_6_img, img.extract<576, 671>());
  auto result_6 = mag_y_generated_compute(lane_6_img);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<96> lane_7_img;
  set_at<0, 96, 96>(lane_7_img, img.extract<672, 767>());
  auto result_7 = mag_y_generated_compute(lane_7_img);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<96> lane_8_img;
  set_at<0, 96, 96>(lane_8_img, img.extract<768, 863>());
  auto result_8 = mag_y_generated_compute(lane_8_img);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<96> lane_9_img;
  set_at<0, 96, 96>(lane_9_img, img.extract<864, 959>());
  auto result_9 = mag_y_generated_compute(lane_9_img);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<96> lane_10_img;
  set_at<0, 96, 96>(lane_10_img, img.extract<960, 1055>());
  auto result_10 = mag_y_generated_compute(lane_10_img);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<96> lane_11_img;
  set_at<0, 96, 96>(lane_11_img, img.extract<1056, 1151>());
  auto result_11 = mag_y_generated_compute(lane_11_img);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<96> lane_12_img;
  set_at<0, 96, 96>(lane_12_img, img.extract<1152, 1247>());
  auto result_12 = mag_y_generated_compute(lane_12_img);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<96> lane_13_img;
  set_at<0, 96, 96>(lane_13_img, img.extract<1248, 1343>());
  auto result_13 = mag_y_generated_compute(lane_13_img);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<96> lane_14_img;
  set_at<0, 96, 96>(lane_14_img, img.extract<1344, 1439>());
  auto result_14 = mag_y_generated_compute(lane_14_img);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<96> lane_15_img;
  set_at<0, 96, 96>(lane_15_img, img.extract<1440, 1535>());
  auto result_15 = mag_y_generated_compute(lane_15_img);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<96> lane_16_img;
  set_at<0, 96, 96>(lane_16_img, img.extract<1536, 1631>());
  auto result_16 = mag_y_generated_compute(lane_16_img);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<96> lane_17_img;
  set_at<0, 96, 96>(lane_17_img, img.extract<1632, 1727>());
  auto result_17 = mag_y_generated_compute(lane_17_img);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<96> lane_18_img;
  set_at<0, 96, 96>(lane_18_img, img.extract<1728, 1823>());
  auto result_18 = mag_y_generated_compute(lane_18_img);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<96> lane_19_img;
  set_at<0, 96, 96>(lane_19_img, img.extract<1824, 1919>());
  auto result_19 = mag_y_generated_compute(lane_19_img);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<96> lane_20_img;
  set_at<0, 96, 96>(lane_20_img, img.extract<1920, 2015>());
  auto result_20 = mag_y_generated_compute(lane_20_img);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<96> lane_21_img;
  set_at<0, 96, 96>(lane_21_img, img.extract<2016, 2111>());
  auto result_21 = mag_y_generated_compute(lane_21_img);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<96> lane_22_img;
  set_at<0, 96, 96>(lane_22_img, img.extract<2112, 2207>());
  auto result_22 = mag_y_generated_compute(lane_22_img);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<96> lane_23_img;
  set_at<0, 96, 96>(lane_23_img, img.extract<2208, 2303>());
  auto result_23 = mag_y_generated_compute(lane_23_img);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<96> lane_24_img;
  set_at<0, 96, 96>(lane_24_img, img.extract<2304, 2399>());
  auto result_24 = mag_y_generated_compute(lane_24_img);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<96> lane_25_img;
  set_at<0, 96, 96>(lane_25_img, img.extract<2400, 2495>());
  auto result_25 = mag_y_generated_compute(lane_25_img);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<96> lane_26_img;
  set_at<0, 96, 96>(lane_26_img, img.extract<2496, 2591>());
  auto result_26 = mag_y_generated_compute(lane_26_img);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<96> lane_27_img;
  set_at<0, 96, 96>(lane_27_img, img.extract<2592, 2687>());
  auto result_27 = mag_y_generated_compute(lane_27_img);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<96> lane_28_img;
  set_at<0, 96, 96>(lane_28_img, img.extract<2688, 2783>());
  auto result_28 = mag_y_generated_compute(lane_28_img);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<96> lane_29_img;
  set_at<0, 96, 96>(lane_29_img, img.extract<2784, 2879>());
  auto result_29 = mag_y_generated_compute(lane_29_img);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<96> lane_30_img;
  set_at<0, 96, 96>(lane_30_img, img.extract<2880, 2975>());
  auto result_30 = mag_y_generated_compute(lane_30_img);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<96> lane_31_img;
  set_at<0, 96, 96>(lane_31_img, img.extract<2976, 3071>());
  auto result_31 = mag_y_generated_compute(lane_31_img);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // mag_x_update_0 unroll factor: 32
hw_uint<512>  mag_x_generated_compute_unrolled_32(hw_uint<3072>& img) {
  hw_uint<512> whole_result;

  hw_uint<96> lane_0_img;
  set_at<0, 96, 96>(lane_0_img, img.extract<0, 95>());
  auto result_0 = mag_x_generated_compute(lane_0_img);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<96> lane_1_img;
  set_at<0, 96, 96>(lane_1_img, img.extract<96, 191>());
  auto result_1 = mag_x_generated_compute(lane_1_img);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<96> lane_2_img;
  set_at<0, 96, 96>(lane_2_img, img.extract<192, 287>());
  auto result_2 = mag_x_generated_compute(lane_2_img);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<96> lane_3_img;
  set_at<0, 96, 96>(lane_3_img, img.extract<288, 383>());
  auto result_3 = mag_x_generated_compute(lane_3_img);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<96> lane_4_img;
  set_at<0, 96, 96>(lane_4_img, img.extract<384, 479>());
  auto result_4 = mag_x_generated_compute(lane_4_img);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<96> lane_5_img;
  set_at<0, 96, 96>(lane_5_img, img.extract<480, 575>());
  auto result_5 = mag_x_generated_compute(lane_5_img);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<96> lane_6_img;
  set_at<0, 96, 96>(lane_6_img, img.extract<576, 671>());
  auto result_6 = mag_x_generated_compute(lane_6_img);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<96> lane_7_img;
  set_at<0, 96, 96>(lane_7_img, img.extract<672, 767>());
  auto result_7 = mag_x_generated_compute(lane_7_img);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<96> lane_8_img;
  set_at<0, 96, 96>(lane_8_img, img.extract<768, 863>());
  auto result_8 = mag_x_generated_compute(lane_8_img);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<96> lane_9_img;
  set_at<0, 96, 96>(lane_9_img, img.extract<864, 959>());
  auto result_9 = mag_x_generated_compute(lane_9_img);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<96> lane_10_img;
  set_at<0, 96, 96>(lane_10_img, img.extract<960, 1055>());
  auto result_10 = mag_x_generated_compute(lane_10_img);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<96> lane_11_img;
  set_at<0, 96, 96>(lane_11_img, img.extract<1056, 1151>());
  auto result_11 = mag_x_generated_compute(lane_11_img);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<96> lane_12_img;
  set_at<0, 96, 96>(lane_12_img, img.extract<1152, 1247>());
  auto result_12 = mag_x_generated_compute(lane_12_img);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<96> lane_13_img;
  set_at<0, 96, 96>(lane_13_img, img.extract<1248, 1343>());
  auto result_13 = mag_x_generated_compute(lane_13_img);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<96> lane_14_img;
  set_at<0, 96, 96>(lane_14_img, img.extract<1344, 1439>());
  auto result_14 = mag_x_generated_compute(lane_14_img);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<96> lane_15_img;
  set_at<0, 96, 96>(lane_15_img, img.extract<1440, 1535>());
  auto result_15 = mag_x_generated_compute(lane_15_img);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<96> lane_16_img;
  set_at<0, 96, 96>(lane_16_img, img.extract<1536, 1631>());
  auto result_16 = mag_x_generated_compute(lane_16_img);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<96> lane_17_img;
  set_at<0, 96, 96>(lane_17_img, img.extract<1632, 1727>());
  auto result_17 = mag_x_generated_compute(lane_17_img);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<96> lane_18_img;
  set_at<0, 96, 96>(lane_18_img, img.extract<1728, 1823>());
  auto result_18 = mag_x_generated_compute(lane_18_img);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<96> lane_19_img;
  set_at<0, 96, 96>(lane_19_img, img.extract<1824, 1919>());
  auto result_19 = mag_x_generated_compute(lane_19_img);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<96> lane_20_img;
  set_at<0, 96, 96>(lane_20_img, img.extract<1920, 2015>());
  auto result_20 = mag_x_generated_compute(lane_20_img);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<96> lane_21_img;
  set_at<0, 96, 96>(lane_21_img, img.extract<2016, 2111>());
  auto result_21 = mag_x_generated_compute(lane_21_img);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<96> lane_22_img;
  set_at<0, 96, 96>(lane_22_img, img.extract<2112, 2207>());
  auto result_22 = mag_x_generated_compute(lane_22_img);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<96> lane_23_img;
  set_at<0, 96, 96>(lane_23_img, img.extract<2208, 2303>());
  auto result_23 = mag_x_generated_compute(lane_23_img);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<96> lane_24_img;
  set_at<0, 96, 96>(lane_24_img, img.extract<2304, 2399>());
  auto result_24 = mag_x_generated_compute(lane_24_img);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<96> lane_25_img;
  set_at<0, 96, 96>(lane_25_img, img.extract<2400, 2495>());
  auto result_25 = mag_x_generated_compute(lane_25_img);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<96> lane_26_img;
  set_at<0, 96, 96>(lane_26_img, img.extract<2496, 2591>());
  auto result_26 = mag_x_generated_compute(lane_26_img);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<96> lane_27_img;
  set_at<0, 96, 96>(lane_27_img, img.extract<2592, 2687>());
  auto result_27 = mag_x_generated_compute(lane_27_img);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<96> lane_28_img;
  set_at<0, 96, 96>(lane_28_img, img.extract<2688, 2783>());
  auto result_28 = mag_x_generated_compute(lane_28_img);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<96> lane_29_img;
  set_at<0, 96, 96>(lane_29_img, img.extract<2784, 2879>());
  auto result_29 = mag_x_generated_compute(lane_29_img);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<96> lane_30_img;
  set_at<0, 96, 96>(lane_30_img, img.extract<2880, 2975>());
  auto result_30 = mag_x_generated_compute(lane_30_img);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<96> lane_31_img;
  set_at<0, 96, 96>(lane_31_img, img.extract<2976, 3071>());
  auto result_31 = mag_x_generated_compute(lane_31_img);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // sbl_ln_32_update_0 unroll factor: 32
hw_uint<512>  sbl_ln_32_generated_compute_unrolled_32(hw_uint<512>& mag_x, hw_uint<512>& mag_y) {
  hw_uint<512> whole_result;

  hw_uint<16> lane_0_mag_x;
  set_at<0, 16, 16>(lane_0_mag_x, mag_x.extract<0, 15>());
  hw_uint<16> lane_0_mag_y;
  set_at<0, 16, 16>(lane_0_mag_y, mag_y.extract<0, 15>());
  auto result_0 = sbl_ln_32_generated_compute(lane_0_mag_x, lane_0_mag_y);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<16> lane_1_mag_x;
  set_at<0, 16, 16>(lane_1_mag_x, mag_x.extract<16, 31>());
  hw_uint<16> lane_1_mag_y;
  set_at<0, 16, 16>(lane_1_mag_y, mag_y.extract<16, 31>());
  auto result_1 = sbl_ln_32_generated_compute(lane_1_mag_x, lane_1_mag_y);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<16> lane_2_mag_x;
  set_at<0, 16, 16>(lane_2_mag_x, mag_x.extract<32, 47>());
  hw_uint<16> lane_2_mag_y;
  set_at<0, 16, 16>(lane_2_mag_y, mag_y.extract<32, 47>());
  auto result_2 = sbl_ln_32_generated_compute(lane_2_mag_x, lane_2_mag_y);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<16> lane_3_mag_x;
  set_at<0, 16, 16>(lane_3_mag_x, mag_x.extract<48, 63>());
  hw_uint<16> lane_3_mag_y;
  set_at<0, 16, 16>(lane_3_mag_y, mag_y.extract<48, 63>());
  auto result_3 = sbl_ln_32_generated_compute(lane_3_mag_x, lane_3_mag_y);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<16> lane_4_mag_x;
  set_at<0, 16, 16>(lane_4_mag_x, mag_x.extract<64, 79>());
  hw_uint<16> lane_4_mag_y;
  set_at<0, 16, 16>(lane_4_mag_y, mag_y.extract<64, 79>());
  auto result_4 = sbl_ln_32_generated_compute(lane_4_mag_x, lane_4_mag_y);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<16> lane_5_mag_x;
  set_at<0, 16, 16>(lane_5_mag_x, mag_x.extract<80, 95>());
  hw_uint<16> lane_5_mag_y;
  set_at<0, 16, 16>(lane_5_mag_y, mag_y.extract<80, 95>());
  auto result_5 = sbl_ln_32_generated_compute(lane_5_mag_x, lane_5_mag_y);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<16> lane_6_mag_x;
  set_at<0, 16, 16>(lane_6_mag_x, mag_x.extract<96, 111>());
  hw_uint<16> lane_6_mag_y;
  set_at<0, 16, 16>(lane_6_mag_y, mag_y.extract<96, 111>());
  auto result_6 = sbl_ln_32_generated_compute(lane_6_mag_x, lane_6_mag_y);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<16> lane_7_mag_x;
  set_at<0, 16, 16>(lane_7_mag_x, mag_x.extract<112, 127>());
  hw_uint<16> lane_7_mag_y;
  set_at<0, 16, 16>(lane_7_mag_y, mag_y.extract<112, 127>());
  auto result_7 = sbl_ln_32_generated_compute(lane_7_mag_x, lane_7_mag_y);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<16> lane_8_mag_x;
  set_at<0, 16, 16>(lane_8_mag_x, mag_x.extract<128, 143>());
  hw_uint<16> lane_8_mag_y;
  set_at<0, 16, 16>(lane_8_mag_y, mag_y.extract<128, 143>());
  auto result_8 = sbl_ln_32_generated_compute(lane_8_mag_x, lane_8_mag_y);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<16> lane_9_mag_x;
  set_at<0, 16, 16>(lane_9_mag_x, mag_x.extract<144, 159>());
  hw_uint<16> lane_9_mag_y;
  set_at<0, 16, 16>(lane_9_mag_y, mag_y.extract<144, 159>());
  auto result_9 = sbl_ln_32_generated_compute(lane_9_mag_x, lane_9_mag_y);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<16> lane_10_mag_x;
  set_at<0, 16, 16>(lane_10_mag_x, mag_x.extract<160, 175>());
  hw_uint<16> lane_10_mag_y;
  set_at<0, 16, 16>(lane_10_mag_y, mag_y.extract<160, 175>());
  auto result_10 = sbl_ln_32_generated_compute(lane_10_mag_x, lane_10_mag_y);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<16> lane_11_mag_x;
  set_at<0, 16, 16>(lane_11_mag_x, mag_x.extract<176, 191>());
  hw_uint<16> lane_11_mag_y;
  set_at<0, 16, 16>(lane_11_mag_y, mag_y.extract<176, 191>());
  auto result_11 = sbl_ln_32_generated_compute(lane_11_mag_x, lane_11_mag_y);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<16> lane_12_mag_x;
  set_at<0, 16, 16>(lane_12_mag_x, mag_x.extract<192, 207>());
  hw_uint<16> lane_12_mag_y;
  set_at<0, 16, 16>(lane_12_mag_y, mag_y.extract<192, 207>());
  auto result_12 = sbl_ln_32_generated_compute(lane_12_mag_x, lane_12_mag_y);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<16> lane_13_mag_x;
  set_at<0, 16, 16>(lane_13_mag_x, mag_x.extract<208, 223>());
  hw_uint<16> lane_13_mag_y;
  set_at<0, 16, 16>(lane_13_mag_y, mag_y.extract<208, 223>());
  auto result_13 = sbl_ln_32_generated_compute(lane_13_mag_x, lane_13_mag_y);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<16> lane_14_mag_x;
  set_at<0, 16, 16>(lane_14_mag_x, mag_x.extract<224, 239>());
  hw_uint<16> lane_14_mag_y;
  set_at<0, 16, 16>(lane_14_mag_y, mag_y.extract<224, 239>());
  auto result_14 = sbl_ln_32_generated_compute(lane_14_mag_x, lane_14_mag_y);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<16> lane_15_mag_x;
  set_at<0, 16, 16>(lane_15_mag_x, mag_x.extract<240, 255>());
  hw_uint<16> lane_15_mag_y;
  set_at<0, 16, 16>(lane_15_mag_y, mag_y.extract<240, 255>());
  auto result_15 = sbl_ln_32_generated_compute(lane_15_mag_x, lane_15_mag_y);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<16> lane_16_mag_x;
  set_at<0, 16, 16>(lane_16_mag_x, mag_x.extract<256, 271>());
  hw_uint<16> lane_16_mag_y;
  set_at<0, 16, 16>(lane_16_mag_y, mag_y.extract<256, 271>());
  auto result_16 = sbl_ln_32_generated_compute(lane_16_mag_x, lane_16_mag_y);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<16> lane_17_mag_x;
  set_at<0, 16, 16>(lane_17_mag_x, mag_x.extract<272, 287>());
  hw_uint<16> lane_17_mag_y;
  set_at<0, 16, 16>(lane_17_mag_y, mag_y.extract<272, 287>());
  auto result_17 = sbl_ln_32_generated_compute(lane_17_mag_x, lane_17_mag_y);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<16> lane_18_mag_x;
  set_at<0, 16, 16>(lane_18_mag_x, mag_x.extract<288, 303>());
  hw_uint<16> lane_18_mag_y;
  set_at<0, 16, 16>(lane_18_mag_y, mag_y.extract<288, 303>());
  auto result_18 = sbl_ln_32_generated_compute(lane_18_mag_x, lane_18_mag_y);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<16> lane_19_mag_x;
  set_at<0, 16, 16>(lane_19_mag_x, mag_x.extract<304, 319>());
  hw_uint<16> lane_19_mag_y;
  set_at<0, 16, 16>(lane_19_mag_y, mag_y.extract<304, 319>());
  auto result_19 = sbl_ln_32_generated_compute(lane_19_mag_x, lane_19_mag_y);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<16> lane_20_mag_x;
  set_at<0, 16, 16>(lane_20_mag_x, mag_x.extract<320, 335>());
  hw_uint<16> lane_20_mag_y;
  set_at<0, 16, 16>(lane_20_mag_y, mag_y.extract<320, 335>());
  auto result_20 = sbl_ln_32_generated_compute(lane_20_mag_x, lane_20_mag_y);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<16> lane_21_mag_x;
  set_at<0, 16, 16>(lane_21_mag_x, mag_x.extract<336, 351>());
  hw_uint<16> lane_21_mag_y;
  set_at<0, 16, 16>(lane_21_mag_y, mag_y.extract<336, 351>());
  auto result_21 = sbl_ln_32_generated_compute(lane_21_mag_x, lane_21_mag_y);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<16> lane_22_mag_x;
  set_at<0, 16, 16>(lane_22_mag_x, mag_x.extract<352, 367>());
  hw_uint<16> lane_22_mag_y;
  set_at<0, 16, 16>(lane_22_mag_y, mag_y.extract<352, 367>());
  auto result_22 = sbl_ln_32_generated_compute(lane_22_mag_x, lane_22_mag_y);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<16> lane_23_mag_x;
  set_at<0, 16, 16>(lane_23_mag_x, mag_x.extract<368, 383>());
  hw_uint<16> lane_23_mag_y;
  set_at<0, 16, 16>(lane_23_mag_y, mag_y.extract<368, 383>());
  auto result_23 = sbl_ln_32_generated_compute(lane_23_mag_x, lane_23_mag_y);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<16> lane_24_mag_x;
  set_at<0, 16, 16>(lane_24_mag_x, mag_x.extract<384, 399>());
  hw_uint<16> lane_24_mag_y;
  set_at<0, 16, 16>(lane_24_mag_y, mag_y.extract<384, 399>());
  auto result_24 = sbl_ln_32_generated_compute(lane_24_mag_x, lane_24_mag_y);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<16> lane_25_mag_x;
  set_at<0, 16, 16>(lane_25_mag_x, mag_x.extract<400, 415>());
  hw_uint<16> lane_25_mag_y;
  set_at<0, 16, 16>(lane_25_mag_y, mag_y.extract<400, 415>());
  auto result_25 = sbl_ln_32_generated_compute(lane_25_mag_x, lane_25_mag_y);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<16> lane_26_mag_x;
  set_at<0, 16, 16>(lane_26_mag_x, mag_x.extract<416, 431>());
  hw_uint<16> lane_26_mag_y;
  set_at<0, 16, 16>(lane_26_mag_y, mag_y.extract<416, 431>());
  auto result_26 = sbl_ln_32_generated_compute(lane_26_mag_x, lane_26_mag_y);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<16> lane_27_mag_x;
  set_at<0, 16, 16>(lane_27_mag_x, mag_x.extract<432, 447>());
  hw_uint<16> lane_27_mag_y;
  set_at<0, 16, 16>(lane_27_mag_y, mag_y.extract<432, 447>());
  auto result_27 = sbl_ln_32_generated_compute(lane_27_mag_x, lane_27_mag_y);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<16> lane_28_mag_x;
  set_at<0, 16, 16>(lane_28_mag_x, mag_x.extract<448, 463>());
  hw_uint<16> lane_28_mag_y;
  set_at<0, 16, 16>(lane_28_mag_y, mag_y.extract<448, 463>());
  auto result_28 = sbl_ln_32_generated_compute(lane_28_mag_x, lane_28_mag_y);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<16> lane_29_mag_x;
  set_at<0, 16, 16>(lane_29_mag_x, mag_x.extract<464, 479>());
  hw_uint<16> lane_29_mag_y;
  set_at<0, 16, 16>(lane_29_mag_y, mag_y.extract<464, 479>());
  auto result_29 = sbl_ln_32_generated_compute(lane_29_mag_x, lane_29_mag_y);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<16> lane_30_mag_x;
  set_at<0, 16, 16>(lane_30_mag_x, mag_x.extract<480, 495>());
  hw_uint<16> lane_30_mag_y;
  set_at<0, 16, 16>(lane_30_mag_y, mag_y.extract<480, 495>());
  auto result_30 = sbl_ln_32_generated_compute(lane_30_mag_x, lane_30_mag_y);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<16> lane_31_mag_x;
  set_at<0, 16, 16>(lane_31_mag_x, mag_x.extract<496, 511>());
  hw_uint<16> lane_31_mag_y;
  set_at<0, 16, 16>(lane_31_mag_y, mag_y.extract<496, 511>());
  auto result_31 = sbl_ln_32_generated_compute(lane_31_mag_x, lane_31_mag_y);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

