#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<16> img_generated_compute(hw_uint<16*1> img_oc) {
  return img_oc.get<16, 0>();
}

hw_uint<16> hrs_16_generated_compute(hw_uint<16*1> img) {
  return ((img.get<16, 0>() - hw_uint<16>(30000)) / hw_uint<16>(128));
}



// Compute unit banks...
  // img_update_0 unroll factor: 16
hw_uint<256>  img_generated_compute_unrolled_16(hw_uint<256>& img_oc) {
  hw_uint<256> whole_result;

  hw_uint<16> lane_0_img_oc;
  set_at<0, 16, 16>(lane_0_img_oc, img_oc.extract<0, 15>());
  auto result_0 = img_generated_compute(lane_0_img_oc);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<16> lane_1_img_oc;
  set_at<0, 16, 16>(lane_1_img_oc, img_oc.extract<16, 31>());
  auto result_1 = img_generated_compute(lane_1_img_oc);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<16> lane_2_img_oc;
  set_at<0, 16, 16>(lane_2_img_oc, img_oc.extract<32, 47>());
  auto result_2 = img_generated_compute(lane_2_img_oc);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<16> lane_3_img_oc;
  set_at<0, 16, 16>(lane_3_img_oc, img_oc.extract<48, 63>());
  auto result_3 = img_generated_compute(lane_3_img_oc);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<16> lane_4_img_oc;
  set_at<0, 16, 16>(lane_4_img_oc, img_oc.extract<64, 79>());
  auto result_4 = img_generated_compute(lane_4_img_oc);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<16> lane_5_img_oc;
  set_at<0, 16, 16>(lane_5_img_oc, img_oc.extract<80, 95>());
  auto result_5 = img_generated_compute(lane_5_img_oc);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<16> lane_6_img_oc;
  set_at<0, 16, 16>(lane_6_img_oc, img_oc.extract<96, 111>());
  auto result_6 = img_generated_compute(lane_6_img_oc);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<16> lane_7_img_oc;
  set_at<0, 16, 16>(lane_7_img_oc, img_oc.extract<112, 127>());
  auto result_7 = img_generated_compute(lane_7_img_oc);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<16> lane_8_img_oc;
  set_at<0, 16, 16>(lane_8_img_oc, img_oc.extract<128, 143>());
  auto result_8 = img_generated_compute(lane_8_img_oc);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<16> lane_9_img_oc;
  set_at<0, 16, 16>(lane_9_img_oc, img_oc.extract<144, 159>());
  auto result_9 = img_generated_compute(lane_9_img_oc);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<16> lane_10_img_oc;
  set_at<0, 16, 16>(lane_10_img_oc, img_oc.extract<160, 175>());
  auto result_10 = img_generated_compute(lane_10_img_oc);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<16> lane_11_img_oc;
  set_at<0, 16, 16>(lane_11_img_oc, img_oc.extract<176, 191>());
  auto result_11 = img_generated_compute(lane_11_img_oc);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<16> lane_12_img_oc;
  set_at<0, 16, 16>(lane_12_img_oc, img_oc.extract<192, 207>());
  auto result_12 = img_generated_compute(lane_12_img_oc);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<16> lane_13_img_oc;
  set_at<0, 16, 16>(lane_13_img_oc, img_oc.extract<208, 223>());
  auto result_13 = img_generated_compute(lane_13_img_oc);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<16> lane_14_img_oc;
  set_at<0, 16, 16>(lane_14_img_oc, img_oc.extract<224, 239>());
  auto result_14 = img_generated_compute(lane_14_img_oc);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<16> lane_15_img_oc;
  set_at<0, 16, 16>(lane_15_img_oc, img_oc.extract<240, 255>());
  auto result_15 = img_generated_compute(lane_15_img_oc);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // hrs_16_update_0 unroll factor: 16
hw_uint<256>  hrs_16_generated_compute_unrolled_16(hw_uint<256>& img) {
  hw_uint<256> whole_result;

  hw_uint<16> lane_0_img;
  set_at<0, 16, 16>(lane_0_img, img.extract<0, 15>());
  auto result_0 = hrs_16_generated_compute(lane_0_img);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<16> lane_1_img;
  set_at<0, 16, 16>(lane_1_img, img.extract<16, 31>());
  auto result_1 = hrs_16_generated_compute(lane_1_img);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<16> lane_2_img;
  set_at<0, 16, 16>(lane_2_img, img.extract<32, 47>());
  auto result_2 = hrs_16_generated_compute(lane_2_img);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<16> lane_3_img;
  set_at<0, 16, 16>(lane_3_img, img.extract<48, 63>());
  auto result_3 = hrs_16_generated_compute(lane_3_img);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<16> lane_4_img;
  set_at<0, 16, 16>(lane_4_img, img.extract<64, 79>());
  auto result_4 = hrs_16_generated_compute(lane_4_img);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<16> lane_5_img;
  set_at<0, 16, 16>(lane_5_img, img.extract<80, 95>());
  auto result_5 = hrs_16_generated_compute(lane_5_img);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<16> lane_6_img;
  set_at<0, 16, 16>(lane_6_img, img.extract<96, 111>());
  auto result_6 = hrs_16_generated_compute(lane_6_img);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<16> lane_7_img;
  set_at<0, 16, 16>(lane_7_img, img.extract<112, 127>());
  auto result_7 = hrs_16_generated_compute(lane_7_img);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<16> lane_8_img;
  set_at<0, 16, 16>(lane_8_img, img.extract<128, 143>());
  auto result_8 = hrs_16_generated_compute(lane_8_img);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<16> lane_9_img;
  set_at<0, 16, 16>(lane_9_img, img.extract<144, 159>());
  auto result_9 = hrs_16_generated_compute(lane_9_img);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<16> lane_10_img;
  set_at<0, 16, 16>(lane_10_img, img.extract<160, 175>());
  auto result_10 = hrs_16_generated_compute(lane_10_img);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<16> lane_11_img;
  set_at<0, 16, 16>(lane_11_img, img.extract<176, 191>());
  auto result_11 = hrs_16_generated_compute(lane_11_img);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<16> lane_12_img;
  set_at<0, 16, 16>(lane_12_img, img.extract<192, 207>());
  auto result_12 = hrs_16_generated_compute(lane_12_img);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<16> lane_13_img;
  set_at<0, 16, 16>(lane_13_img, img.extract<208, 223>());
  auto result_13 = hrs_16_generated_compute(lane_13_img);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<16> lane_14_img;
  set_at<0, 16, 16>(lane_14_img, img.extract<224, 239>());
  auto result_14 = hrs_16_generated_compute(lane_14_img);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<16> lane_15_img;
  set_at<0, 16, 16>(lane_15_img, img.extract<240, 255>());
  auto result_15 = hrs_16_generated_compute(lane_15_img);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

