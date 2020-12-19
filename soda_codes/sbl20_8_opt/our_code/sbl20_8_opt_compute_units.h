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

hw_uint<16> sbl20_8_generated_compute(hw_uint<16*1> mag_x, hw_uint<16*1> mag_y) {
  return uint16_t(((uint16_t(mag_x.get<16, 0>()) * uint16_t(mag_x.get<16, 0>())) + (uint16_t(mag_y.get<16, 0>()) * uint16_t(mag_y.get<16, 0>()))));
}



// Compute unit banks...
  // img_update_0 unroll factor: 8
hw_uint<128>  img_generated_compute_unrolled_8(hw_uint<128>& off_chip_img) {
  hw_uint<128> whole_result;

  hw_uint<16> lane_0_off_chip_img;
  set_at<0, 16, 16>(lane_0_off_chip_img, off_chip_img.extract<0, 15>());
  auto result_0 = img_generated_compute(lane_0_off_chip_img);
  set_at<0, 128, 16>(whole_result, result_0);

  hw_uint<16> lane_1_off_chip_img;
  set_at<0, 16, 16>(lane_1_off_chip_img, off_chip_img.extract<16, 31>());
  auto result_1 = img_generated_compute(lane_1_off_chip_img);
  set_at<16, 128, 16>(whole_result, result_1);

  hw_uint<16> lane_2_off_chip_img;
  set_at<0, 16, 16>(lane_2_off_chip_img, off_chip_img.extract<32, 47>());
  auto result_2 = img_generated_compute(lane_2_off_chip_img);
  set_at<32, 128, 16>(whole_result, result_2);

  hw_uint<16> lane_3_off_chip_img;
  set_at<0, 16, 16>(lane_3_off_chip_img, off_chip_img.extract<48, 63>());
  auto result_3 = img_generated_compute(lane_3_off_chip_img);
  set_at<48, 128, 16>(whole_result, result_3);

  hw_uint<16> lane_4_off_chip_img;
  set_at<0, 16, 16>(lane_4_off_chip_img, off_chip_img.extract<64, 79>());
  auto result_4 = img_generated_compute(lane_4_off_chip_img);
  set_at<64, 128, 16>(whole_result, result_4);

  hw_uint<16> lane_5_off_chip_img;
  set_at<0, 16, 16>(lane_5_off_chip_img, off_chip_img.extract<80, 95>());
  auto result_5 = img_generated_compute(lane_5_off_chip_img);
  set_at<80, 128, 16>(whole_result, result_5);

  hw_uint<16> lane_6_off_chip_img;
  set_at<0, 16, 16>(lane_6_off_chip_img, off_chip_img.extract<96, 111>());
  auto result_6 = img_generated_compute(lane_6_off_chip_img);
  set_at<96, 128, 16>(whole_result, result_6);

  hw_uint<16> lane_7_off_chip_img;
  set_at<0, 16, 16>(lane_7_off_chip_img, off_chip_img.extract<112, 127>());
  auto result_7 = img_generated_compute(lane_7_off_chip_img);
  set_at<112, 128, 16>(whole_result, result_7);
  return whole_result;
}

  // mag_y_update_0 unroll factor: 8
hw_uint<128>  mag_y_generated_compute_unrolled_8(hw_uint<768>& img) {
  hw_uint<128> whole_result;

  hw_uint<96> lane_0_img;
  set_at<0, 96, 96>(lane_0_img, img.extract<0, 95>());
  auto result_0 = mag_y_generated_compute(lane_0_img);
  set_at<0, 128, 16>(whole_result, result_0);

  hw_uint<96> lane_1_img;
  set_at<0, 96, 96>(lane_1_img, img.extract<96, 191>());
  auto result_1 = mag_y_generated_compute(lane_1_img);
  set_at<16, 128, 16>(whole_result, result_1);

  hw_uint<96> lane_2_img;
  set_at<0, 96, 96>(lane_2_img, img.extract<192, 287>());
  auto result_2 = mag_y_generated_compute(lane_2_img);
  set_at<32, 128, 16>(whole_result, result_2);

  hw_uint<96> lane_3_img;
  set_at<0, 96, 96>(lane_3_img, img.extract<288, 383>());
  auto result_3 = mag_y_generated_compute(lane_3_img);
  set_at<48, 128, 16>(whole_result, result_3);

  hw_uint<96> lane_4_img;
  set_at<0, 96, 96>(lane_4_img, img.extract<384, 479>());
  auto result_4 = mag_y_generated_compute(lane_4_img);
  set_at<64, 128, 16>(whole_result, result_4);

  hw_uint<96> lane_5_img;
  set_at<0, 96, 96>(lane_5_img, img.extract<480, 575>());
  auto result_5 = mag_y_generated_compute(lane_5_img);
  set_at<80, 128, 16>(whole_result, result_5);

  hw_uint<96> lane_6_img;
  set_at<0, 96, 96>(lane_6_img, img.extract<576, 671>());
  auto result_6 = mag_y_generated_compute(lane_6_img);
  set_at<96, 128, 16>(whole_result, result_6);

  hw_uint<96> lane_7_img;
  set_at<0, 96, 96>(lane_7_img, img.extract<672, 767>());
  auto result_7 = mag_y_generated_compute(lane_7_img);
  set_at<112, 128, 16>(whole_result, result_7);
  return whole_result;
}

  // mag_x_update_0 unroll factor: 8
hw_uint<128>  mag_x_generated_compute_unrolled_8(hw_uint<768>& img) {
  hw_uint<128> whole_result;

  hw_uint<96> lane_0_img;
  set_at<0, 96, 96>(lane_0_img, img.extract<0, 95>());
  auto result_0 = mag_x_generated_compute(lane_0_img);
  set_at<0, 128, 16>(whole_result, result_0);

  hw_uint<96> lane_1_img;
  set_at<0, 96, 96>(lane_1_img, img.extract<96, 191>());
  auto result_1 = mag_x_generated_compute(lane_1_img);
  set_at<16, 128, 16>(whole_result, result_1);

  hw_uint<96> lane_2_img;
  set_at<0, 96, 96>(lane_2_img, img.extract<192, 287>());
  auto result_2 = mag_x_generated_compute(lane_2_img);
  set_at<32, 128, 16>(whole_result, result_2);

  hw_uint<96> lane_3_img;
  set_at<0, 96, 96>(lane_3_img, img.extract<288, 383>());
  auto result_3 = mag_x_generated_compute(lane_3_img);
  set_at<48, 128, 16>(whole_result, result_3);

  hw_uint<96> lane_4_img;
  set_at<0, 96, 96>(lane_4_img, img.extract<384, 479>());
  auto result_4 = mag_x_generated_compute(lane_4_img);
  set_at<64, 128, 16>(whole_result, result_4);

  hw_uint<96> lane_5_img;
  set_at<0, 96, 96>(lane_5_img, img.extract<480, 575>());
  auto result_5 = mag_x_generated_compute(lane_5_img);
  set_at<80, 128, 16>(whole_result, result_5);

  hw_uint<96> lane_6_img;
  set_at<0, 96, 96>(lane_6_img, img.extract<576, 671>());
  auto result_6 = mag_x_generated_compute(lane_6_img);
  set_at<96, 128, 16>(whole_result, result_6);

  hw_uint<96> lane_7_img;
  set_at<0, 96, 96>(lane_7_img, img.extract<672, 767>());
  auto result_7 = mag_x_generated_compute(lane_7_img);
  set_at<112, 128, 16>(whole_result, result_7);
  return whole_result;
}

  // sbl20_8_update_0 unroll factor: 8
hw_uint<128>  sbl20_8_generated_compute_unrolled_8(hw_uint<128>& mag_x, hw_uint<128>& mag_y) {
  hw_uint<128> whole_result;

  hw_uint<16> lane_0_mag_x;
  set_at<0, 16, 16>(lane_0_mag_x, mag_x.extract<0, 15>());
  hw_uint<16> lane_0_mag_y;
  set_at<0, 16, 16>(lane_0_mag_y, mag_y.extract<0, 15>());
  auto result_0 = sbl20_8_generated_compute(lane_0_mag_x, lane_0_mag_y);
  set_at<0, 128, 16>(whole_result, result_0);

  hw_uint<16> lane_1_mag_x;
  set_at<0, 16, 16>(lane_1_mag_x, mag_x.extract<16, 31>());
  hw_uint<16> lane_1_mag_y;
  set_at<0, 16, 16>(lane_1_mag_y, mag_y.extract<16, 31>());
  auto result_1 = sbl20_8_generated_compute(lane_1_mag_x, lane_1_mag_y);
  set_at<16, 128, 16>(whole_result, result_1);

  hw_uint<16> lane_2_mag_x;
  set_at<0, 16, 16>(lane_2_mag_x, mag_x.extract<32, 47>());
  hw_uint<16> lane_2_mag_y;
  set_at<0, 16, 16>(lane_2_mag_y, mag_y.extract<32, 47>());
  auto result_2 = sbl20_8_generated_compute(lane_2_mag_x, lane_2_mag_y);
  set_at<32, 128, 16>(whole_result, result_2);

  hw_uint<16> lane_3_mag_x;
  set_at<0, 16, 16>(lane_3_mag_x, mag_x.extract<48, 63>());
  hw_uint<16> lane_3_mag_y;
  set_at<0, 16, 16>(lane_3_mag_y, mag_y.extract<48, 63>());
  auto result_3 = sbl20_8_generated_compute(lane_3_mag_x, lane_3_mag_y);
  set_at<48, 128, 16>(whole_result, result_3);

  hw_uint<16> lane_4_mag_x;
  set_at<0, 16, 16>(lane_4_mag_x, mag_x.extract<64, 79>());
  hw_uint<16> lane_4_mag_y;
  set_at<0, 16, 16>(lane_4_mag_y, mag_y.extract<64, 79>());
  auto result_4 = sbl20_8_generated_compute(lane_4_mag_x, lane_4_mag_y);
  set_at<64, 128, 16>(whole_result, result_4);

  hw_uint<16> lane_5_mag_x;
  set_at<0, 16, 16>(lane_5_mag_x, mag_x.extract<80, 95>());
  hw_uint<16> lane_5_mag_y;
  set_at<0, 16, 16>(lane_5_mag_y, mag_y.extract<80, 95>());
  auto result_5 = sbl20_8_generated_compute(lane_5_mag_x, lane_5_mag_y);
  set_at<80, 128, 16>(whole_result, result_5);

  hw_uint<16> lane_6_mag_x;
  set_at<0, 16, 16>(lane_6_mag_x, mag_x.extract<96, 111>());
  hw_uint<16> lane_6_mag_y;
  set_at<0, 16, 16>(lane_6_mag_y, mag_y.extract<96, 111>());
  auto result_6 = sbl20_8_generated_compute(lane_6_mag_x, lane_6_mag_y);
  set_at<96, 128, 16>(whole_result, result_6);

  hw_uint<16> lane_7_mag_x;
  set_at<0, 16, 16>(lane_7_mag_x, mag_x.extract<112, 127>());
  hw_uint<16> lane_7_mag_y;
  set_at<0, 16, 16>(lane_7_mag_y, mag_y.extract<112, 127>());
  auto result_7 = sbl20_8_generated_compute(lane_7_mag_x, lane_7_mag_y);
  set_at<112, 128, 16>(whole_result, result_7);
  return whole_result;
}

