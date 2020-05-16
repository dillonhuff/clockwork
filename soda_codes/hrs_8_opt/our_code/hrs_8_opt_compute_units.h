#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<16> img_generated_compute(hw_uint<16*1> img_oc) {
  return img_oc.get<16, 0>();
}

hw_uint<16> hrs_8_generated_compute(hw_uint<16*1> img) {
  return ((img.get<16, 0>() - hw_uint<16>(30000)) / hw_uint<16>(128));
}



// Compute unit banks...
  // img_update_0 unroll factor: 8
hw_uint<128>  img_generated_compute_unrolled_8(hw_uint<128>& img_oc) {
  hw_uint<128> whole_result;

  hw_uint<16> lane_0_img_oc;
  set_at<0, 16, 16>(lane_0_img_oc, img_oc.extract<0, 15>());
  auto result_0 = img_generated_compute(lane_0_img_oc);
  set_at<0, 128, 16>(whole_result, result_0);

  hw_uint<16> lane_1_img_oc;
  set_at<0, 16, 16>(lane_1_img_oc, img_oc.extract<16, 31>());
  auto result_1 = img_generated_compute(lane_1_img_oc);
  set_at<16, 128, 16>(whole_result, result_1);

  hw_uint<16> lane_2_img_oc;
  set_at<0, 16, 16>(lane_2_img_oc, img_oc.extract<32, 47>());
  auto result_2 = img_generated_compute(lane_2_img_oc);
  set_at<32, 128, 16>(whole_result, result_2);

  hw_uint<16> lane_3_img_oc;
  set_at<0, 16, 16>(lane_3_img_oc, img_oc.extract<48, 63>());
  auto result_3 = img_generated_compute(lane_3_img_oc);
  set_at<48, 128, 16>(whole_result, result_3);

  hw_uint<16> lane_4_img_oc;
  set_at<0, 16, 16>(lane_4_img_oc, img_oc.extract<64, 79>());
  auto result_4 = img_generated_compute(lane_4_img_oc);
  set_at<64, 128, 16>(whole_result, result_4);

  hw_uint<16> lane_5_img_oc;
  set_at<0, 16, 16>(lane_5_img_oc, img_oc.extract<80, 95>());
  auto result_5 = img_generated_compute(lane_5_img_oc);
  set_at<80, 128, 16>(whole_result, result_5);

  hw_uint<16> lane_6_img_oc;
  set_at<0, 16, 16>(lane_6_img_oc, img_oc.extract<96, 111>());
  auto result_6 = img_generated_compute(lane_6_img_oc);
  set_at<96, 128, 16>(whole_result, result_6);

  hw_uint<16> lane_7_img_oc;
  set_at<0, 16, 16>(lane_7_img_oc, img_oc.extract<112, 127>());
  auto result_7 = img_generated_compute(lane_7_img_oc);
  set_at<112, 128, 16>(whole_result, result_7);
  return whole_result;
}

  // hrs_8_update_0 unroll factor: 8
hw_uint<128>  hrs_8_generated_compute_unrolled_8(hw_uint<128>& img) {
  hw_uint<128> whole_result;

  hw_uint<16> lane_0_img;
  set_at<0, 16, 16>(lane_0_img, img.extract<0, 15>());
  auto result_0 = hrs_8_generated_compute(lane_0_img);
  set_at<0, 128, 16>(whole_result, result_0);

  hw_uint<16> lane_1_img;
  set_at<0, 16, 16>(lane_1_img, img.extract<16, 31>());
  auto result_1 = hrs_8_generated_compute(lane_1_img);
  set_at<16, 128, 16>(whole_result, result_1);

  hw_uint<16> lane_2_img;
  set_at<0, 16, 16>(lane_2_img, img.extract<32, 47>());
  auto result_2 = hrs_8_generated_compute(lane_2_img);
  set_at<32, 128, 16>(whole_result, result_2);

  hw_uint<16> lane_3_img;
  set_at<0, 16, 16>(lane_3_img, img.extract<48, 63>());
  auto result_3 = hrs_8_generated_compute(lane_3_img);
  set_at<48, 128, 16>(whole_result, result_3);

  hw_uint<16> lane_4_img;
  set_at<0, 16, 16>(lane_4_img, img.extract<64, 79>());
  auto result_4 = hrs_8_generated_compute(lane_4_img);
  set_at<64, 128, 16>(whole_result, result_4);

  hw_uint<16> lane_5_img;
  set_at<0, 16, 16>(lane_5_img, img.extract<80, 95>());
  auto result_5 = hrs_8_generated_compute(lane_5_img);
  set_at<80, 128, 16>(whole_result, result_5);

  hw_uint<16> lane_6_img;
  set_at<0, 16, 16>(lane_6_img, img.extract<96, 111>());
  auto result_6 = hrs_8_generated_compute(lane_6_img);
  set_at<96, 128, 16>(whole_result, result_6);

  hw_uint<16> lane_7_img;
  set_at<0, 16, 16>(lane_7_img, img.extract<112, 127>());
  auto result_7 = hrs_8_generated_compute(lane_7_img);
  set_at<112, 128, 16>(whole_result, result_7);
  return whole_result;
}

