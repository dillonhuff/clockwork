#pragma once

#include "conv_3x3.h"

hw_uint<32>  id_unrolled_1(hw_uint<32>& Img_off) {
  hw_uint<32> whole_result;
  hw_uint<32> lane_0_Img_off;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_Img_off, Img_off.extract<0, 31>());
  auto result_0 = id(lane_0_Img_off);
  set_at<0, 32>(whole_result, result_0);
   return whole_result;
}

hw_uint<32>  conv_3_3_unrolled_1(hw_uint<288>& Img) {
  hw_uint<32> whole_result;
  hw_uint<288> lane_0_Img;
  // Need offset: -1, -1
  set_at<0, 288>(lane_0_Img, Img.extract<0, 31>());
  // Need offset: -1, 0
  set_at<32, 288>(lane_0_Img, Img.extract<32, 63>());
  // Need offset: -1, 1
  set_at<64, 288>(lane_0_Img, Img.extract<64, 95>());
  // Need offset: 0, -1
  set_at<96, 288>(lane_0_Img, Img.extract<96, 127>());
  // Need offset: 0, 0
  set_at<128, 288>(lane_0_Img, Img.extract<128, 159>());
  // Need offset: 0, 1
  set_at<160, 288>(lane_0_Img, Img.extract<160, 191>());
  // Need offset: 1, -1
  set_at<192, 288>(lane_0_Img, Img.extract<192, 223>());
  // Need offset: 1, 0
  set_at<224, 288>(lane_0_Img, Img.extract<224, 255>());
  // Need offset: 1, 1
  set_at<256, 288>(lane_0_Img, Img.extract<256, 287>());
  auto result_0 = conv_3_3(lane_0_Img);
  set_at<0, 32>(whole_result, result_0);
   return whole_result;
}

