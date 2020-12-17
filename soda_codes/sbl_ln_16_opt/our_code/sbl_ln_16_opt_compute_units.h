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

hw_uint<16> sbl_ln_16_generated_compute(hw_uint<16*1> mag_x, hw_uint<16*1> mag_y) {
  return uint16_t(((uint16_t(mag_x.get<16, 0>()) * uint16_t(mag_x.get<16, 0>())) + (uint16_t(mag_y.get<16, 0>()) * uint16_t(mag_y.get<16, 0>()))));
}



// Compute unit banks...
  // img_update_0 unroll factor: 16
hw_uint<256>  img_generated_compute_unrolled_16(hw_uint<256>& off_chip_img) {
  hw_uint<256> whole_result;

  hw_uint<16> lane_0_off_chip_img;
  set_at<0, 16, 16>(lane_0_off_chip_img, off_chip_img.extract<0, 15>());
  auto result_0 = img_generated_compute(lane_0_off_chip_img);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<16> lane_1_off_chip_img;
  set_at<0, 16, 16>(lane_1_off_chip_img, off_chip_img.extract<16, 31>());
  auto result_1 = img_generated_compute(lane_1_off_chip_img);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<16> lane_2_off_chip_img;
  set_at<0, 16, 16>(lane_2_off_chip_img, off_chip_img.extract<32, 47>());
  auto result_2 = img_generated_compute(lane_2_off_chip_img);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<16> lane_3_off_chip_img;
  set_at<0, 16, 16>(lane_3_off_chip_img, off_chip_img.extract<48, 63>());
  auto result_3 = img_generated_compute(lane_3_off_chip_img);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<16> lane_4_off_chip_img;
  set_at<0, 16, 16>(lane_4_off_chip_img, off_chip_img.extract<64, 79>());
  auto result_4 = img_generated_compute(lane_4_off_chip_img);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<16> lane_5_off_chip_img;
  set_at<0, 16, 16>(lane_5_off_chip_img, off_chip_img.extract<80, 95>());
  auto result_5 = img_generated_compute(lane_5_off_chip_img);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<16> lane_6_off_chip_img;
  set_at<0, 16, 16>(lane_6_off_chip_img, off_chip_img.extract<96, 111>());
  auto result_6 = img_generated_compute(lane_6_off_chip_img);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<16> lane_7_off_chip_img;
  set_at<0, 16, 16>(lane_7_off_chip_img, off_chip_img.extract<112, 127>());
  auto result_7 = img_generated_compute(lane_7_off_chip_img);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<16> lane_8_off_chip_img;
  set_at<0, 16, 16>(lane_8_off_chip_img, off_chip_img.extract<128, 143>());
  auto result_8 = img_generated_compute(lane_8_off_chip_img);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<16> lane_9_off_chip_img;
  set_at<0, 16, 16>(lane_9_off_chip_img, off_chip_img.extract<144, 159>());
  auto result_9 = img_generated_compute(lane_9_off_chip_img);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<16> lane_10_off_chip_img;
  set_at<0, 16, 16>(lane_10_off_chip_img, off_chip_img.extract<160, 175>());
  auto result_10 = img_generated_compute(lane_10_off_chip_img);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<16> lane_11_off_chip_img;
  set_at<0, 16, 16>(lane_11_off_chip_img, off_chip_img.extract<176, 191>());
  auto result_11 = img_generated_compute(lane_11_off_chip_img);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<16> lane_12_off_chip_img;
  set_at<0, 16, 16>(lane_12_off_chip_img, off_chip_img.extract<192, 207>());
  auto result_12 = img_generated_compute(lane_12_off_chip_img);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<16> lane_13_off_chip_img;
  set_at<0, 16, 16>(lane_13_off_chip_img, off_chip_img.extract<208, 223>());
  auto result_13 = img_generated_compute(lane_13_off_chip_img);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<16> lane_14_off_chip_img;
  set_at<0, 16, 16>(lane_14_off_chip_img, off_chip_img.extract<224, 239>());
  auto result_14 = img_generated_compute(lane_14_off_chip_img);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<16> lane_15_off_chip_img;
  set_at<0, 16, 16>(lane_15_off_chip_img, off_chip_img.extract<240, 255>());
  auto result_15 = img_generated_compute(lane_15_off_chip_img);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // mag_y_update_0 unroll factor: 16
hw_uint<256>  mag_y_generated_compute_unrolled_16(hw_uint<1536>& img) {
  hw_uint<256> whole_result;

  hw_uint<96> lane_0_img;
  set_at<0, 96, 96>(lane_0_img, img.extract<0, 95>());
  auto result_0 = mag_y_generated_compute(lane_0_img);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<96> lane_1_img;
  set_at<0, 96, 96>(lane_1_img, img.extract<96, 191>());
  auto result_1 = mag_y_generated_compute(lane_1_img);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<96> lane_2_img;
  set_at<0, 96, 96>(lane_2_img, img.extract<192, 287>());
  auto result_2 = mag_y_generated_compute(lane_2_img);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<96> lane_3_img;
  set_at<0, 96, 96>(lane_3_img, img.extract<288, 383>());
  auto result_3 = mag_y_generated_compute(lane_3_img);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<96> lane_4_img;
  set_at<0, 96, 96>(lane_4_img, img.extract<384, 479>());
  auto result_4 = mag_y_generated_compute(lane_4_img);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<96> lane_5_img;
  set_at<0, 96, 96>(lane_5_img, img.extract<480, 575>());
  auto result_5 = mag_y_generated_compute(lane_5_img);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<96> lane_6_img;
  set_at<0, 96, 96>(lane_6_img, img.extract<576, 671>());
  auto result_6 = mag_y_generated_compute(lane_6_img);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<96> lane_7_img;
  set_at<0, 96, 96>(lane_7_img, img.extract<672, 767>());
  auto result_7 = mag_y_generated_compute(lane_7_img);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<96> lane_8_img;
  set_at<0, 96, 96>(lane_8_img, img.extract<768, 863>());
  auto result_8 = mag_y_generated_compute(lane_8_img);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<96> lane_9_img;
  set_at<0, 96, 96>(lane_9_img, img.extract<864, 959>());
  auto result_9 = mag_y_generated_compute(lane_9_img);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<96> lane_10_img;
  set_at<0, 96, 96>(lane_10_img, img.extract<960, 1055>());
  auto result_10 = mag_y_generated_compute(lane_10_img);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<96> lane_11_img;
  set_at<0, 96, 96>(lane_11_img, img.extract<1056, 1151>());
  auto result_11 = mag_y_generated_compute(lane_11_img);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<96> lane_12_img;
  set_at<0, 96, 96>(lane_12_img, img.extract<1152, 1247>());
  auto result_12 = mag_y_generated_compute(lane_12_img);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<96> lane_13_img;
  set_at<0, 96, 96>(lane_13_img, img.extract<1248, 1343>());
  auto result_13 = mag_y_generated_compute(lane_13_img);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<96> lane_14_img;
  set_at<0, 96, 96>(lane_14_img, img.extract<1344, 1439>());
  auto result_14 = mag_y_generated_compute(lane_14_img);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<96> lane_15_img;
  set_at<0, 96, 96>(lane_15_img, img.extract<1440, 1535>());
  auto result_15 = mag_y_generated_compute(lane_15_img);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // mag_x_update_0 unroll factor: 16
hw_uint<256>  mag_x_generated_compute_unrolled_16(hw_uint<1536>& img) {
  hw_uint<256> whole_result;

  hw_uint<96> lane_0_img;
  set_at<0, 96, 96>(lane_0_img, img.extract<0, 95>());
  auto result_0 = mag_x_generated_compute(lane_0_img);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<96> lane_1_img;
  set_at<0, 96, 96>(lane_1_img, img.extract<96, 191>());
  auto result_1 = mag_x_generated_compute(lane_1_img);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<96> lane_2_img;
  set_at<0, 96, 96>(lane_2_img, img.extract<192, 287>());
  auto result_2 = mag_x_generated_compute(lane_2_img);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<96> lane_3_img;
  set_at<0, 96, 96>(lane_3_img, img.extract<288, 383>());
  auto result_3 = mag_x_generated_compute(lane_3_img);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<96> lane_4_img;
  set_at<0, 96, 96>(lane_4_img, img.extract<384, 479>());
  auto result_4 = mag_x_generated_compute(lane_4_img);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<96> lane_5_img;
  set_at<0, 96, 96>(lane_5_img, img.extract<480, 575>());
  auto result_5 = mag_x_generated_compute(lane_5_img);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<96> lane_6_img;
  set_at<0, 96, 96>(lane_6_img, img.extract<576, 671>());
  auto result_6 = mag_x_generated_compute(lane_6_img);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<96> lane_7_img;
  set_at<0, 96, 96>(lane_7_img, img.extract<672, 767>());
  auto result_7 = mag_x_generated_compute(lane_7_img);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<96> lane_8_img;
  set_at<0, 96, 96>(lane_8_img, img.extract<768, 863>());
  auto result_8 = mag_x_generated_compute(lane_8_img);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<96> lane_9_img;
  set_at<0, 96, 96>(lane_9_img, img.extract<864, 959>());
  auto result_9 = mag_x_generated_compute(lane_9_img);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<96> lane_10_img;
  set_at<0, 96, 96>(lane_10_img, img.extract<960, 1055>());
  auto result_10 = mag_x_generated_compute(lane_10_img);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<96> lane_11_img;
  set_at<0, 96, 96>(lane_11_img, img.extract<1056, 1151>());
  auto result_11 = mag_x_generated_compute(lane_11_img);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<96> lane_12_img;
  set_at<0, 96, 96>(lane_12_img, img.extract<1152, 1247>());
  auto result_12 = mag_x_generated_compute(lane_12_img);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<96> lane_13_img;
  set_at<0, 96, 96>(lane_13_img, img.extract<1248, 1343>());
  auto result_13 = mag_x_generated_compute(lane_13_img);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<96> lane_14_img;
  set_at<0, 96, 96>(lane_14_img, img.extract<1344, 1439>());
  auto result_14 = mag_x_generated_compute(lane_14_img);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<96> lane_15_img;
  set_at<0, 96, 96>(lane_15_img, img.extract<1440, 1535>());
  auto result_15 = mag_x_generated_compute(lane_15_img);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // sbl_ln_16_update_0 unroll factor: 16
hw_uint<256>  sbl_ln_16_generated_compute_unrolled_16(hw_uint<256>& mag_x, hw_uint<256>& mag_y) {
  hw_uint<256> whole_result;

  hw_uint<16> lane_0_mag_x;
  set_at<0, 16, 16>(lane_0_mag_x, mag_x.extract<0, 15>());
  hw_uint<16> lane_0_mag_y;
  set_at<0, 16, 16>(lane_0_mag_y, mag_y.extract<0, 15>());
  auto result_0 = sbl_ln_16_generated_compute(lane_0_mag_x, lane_0_mag_y);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<16> lane_1_mag_x;
  set_at<0, 16, 16>(lane_1_mag_x, mag_x.extract<16, 31>());
  hw_uint<16> lane_1_mag_y;
  set_at<0, 16, 16>(lane_1_mag_y, mag_y.extract<16, 31>());
  auto result_1 = sbl_ln_16_generated_compute(lane_1_mag_x, lane_1_mag_y);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<16> lane_2_mag_x;
  set_at<0, 16, 16>(lane_2_mag_x, mag_x.extract<32, 47>());
  hw_uint<16> lane_2_mag_y;
  set_at<0, 16, 16>(lane_2_mag_y, mag_y.extract<32, 47>());
  auto result_2 = sbl_ln_16_generated_compute(lane_2_mag_x, lane_2_mag_y);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<16> lane_3_mag_x;
  set_at<0, 16, 16>(lane_3_mag_x, mag_x.extract<48, 63>());
  hw_uint<16> lane_3_mag_y;
  set_at<0, 16, 16>(lane_3_mag_y, mag_y.extract<48, 63>());
  auto result_3 = sbl_ln_16_generated_compute(lane_3_mag_x, lane_3_mag_y);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<16> lane_4_mag_x;
  set_at<0, 16, 16>(lane_4_mag_x, mag_x.extract<64, 79>());
  hw_uint<16> lane_4_mag_y;
  set_at<0, 16, 16>(lane_4_mag_y, mag_y.extract<64, 79>());
  auto result_4 = sbl_ln_16_generated_compute(lane_4_mag_x, lane_4_mag_y);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<16> lane_5_mag_x;
  set_at<0, 16, 16>(lane_5_mag_x, mag_x.extract<80, 95>());
  hw_uint<16> lane_5_mag_y;
  set_at<0, 16, 16>(lane_5_mag_y, mag_y.extract<80, 95>());
  auto result_5 = sbl_ln_16_generated_compute(lane_5_mag_x, lane_5_mag_y);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<16> lane_6_mag_x;
  set_at<0, 16, 16>(lane_6_mag_x, mag_x.extract<96, 111>());
  hw_uint<16> lane_6_mag_y;
  set_at<0, 16, 16>(lane_6_mag_y, mag_y.extract<96, 111>());
  auto result_6 = sbl_ln_16_generated_compute(lane_6_mag_x, lane_6_mag_y);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<16> lane_7_mag_x;
  set_at<0, 16, 16>(lane_7_mag_x, mag_x.extract<112, 127>());
  hw_uint<16> lane_7_mag_y;
  set_at<0, 16, 16>(lane_7_mag_y, mag_y.extract<112, 127>());
  auto result_7 = sbl_ln_16_generated_compute(lane_7_mag_x, lane_7_mag_y);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<16> lane_8_mag_x;
  set_at<0, 16, 16>(lane_8_mag_x, mag_x.extract<128, 143>());
  hw_uint<16> lane_8_mag_y;
  set_at<0, 16, 16>(lane_8_mag_y, mag_y.extract<128, 143>());
  auto result_8 = sbl_ln_16_generated_compute(lane_8_mag_x, lane_8_mag_y);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<16> lane_9_mag_x;
  set_at<0, 16, 16>(lane_9_mag_x, mag_x.extract<144, 159>());
  hw_uint<16> lane_9_mag_y;
  set_at<0, 16, 16>(lane_9_mag_y, mag_y.extract<144, 159>());
  auto result_9 = sbl_ln_16_generated_compute(lane_9_mag_x, lane_9_mag_y);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<16> lane_10_mag_x;
  set_at<0, 16, 16>(lane_10_mag_x, mag_x.extract<160, 175>());
  hw_uint<16> lane_10_mag_y;
  set_at<0, 16, 16>(lane_10_mag_y, mag_y.extract<160, 175>());
  auto result_10 = sbl_ln_16_generated_compute(lane_10_mag_x, lane_10_mag_y);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<16> lane_11_mag_x;
  set_at<0, 16, 16>(lane_11_mag_x, mag_x.extract<176, 191>());
  hw_uint<16> lane_11_mag_y;
  set_at<0, 16, 16>(lane_11_mag_y, mag_y.extract<176, 191>());
  auto result_11 = sbl_ln_16_generated_compute(lane_11_mag_x, lane_11_mag_y);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<16> lane_12_mag_x;
  set_at<0, 16, 16>(lane_12_mag_x, mag_x.extract<192, 207>());
  hw_uint<16> lane_12_mag_y;
  set_at<0, 16, 16>(lane_12_mag_y, mag_y.extract<192, 207>());
  auto result_12 = sbl_ln_16_generated_compute(lane_12_mag_x, lane_12_mag_y);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<16> lane_13_mag_x;
  set_at<0, 16, 16>(lane_13_mag_x, mag_x.extract<208, 223>());
  hw_uint<16> lane_13_mag_y;
  set_at<0, 16, 16>(lane_13_mag_y, mag_y.extract<208, 223>());
  auto result_13 = sbl_ln_16_generated_compute(lane_13_mag_x, lane_13_mag_y);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<16> lane_14_mag_x;
  set_at<0, 16, 16>(lane_14_mag_x, mag_x.extract<224, 239>());
  hw_uint<16> lane_14_mag_y;
  set_at<0, 16, 16>(lane_14_mag_y, mag_y.extract<224, 239>());
  auto result_14 = sbl_ln_16_generated_compute(lane_14_mag_x, lane_14_mag_y);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<16> lane_15_mag_x;
  set_at<0, 16, 16>(lane_15_mag_x, mag_x.extract<240, 255>());
  hw_uint<16> lane_15_mag_y;
  set_at<0, 16, 16>(lane_15_mag_y, mag_y.extract<240, 255>());
  auto result_15 = sbl_ln_16_generated_compute(lane_15_mag_x, lane_15_mag_y);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

