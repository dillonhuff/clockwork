#pragma once

#include "conv_3x3.h"

hw_uint<32>  id_unrolled_1(hw_uint<32>& Img_off) {
  hw_uint<32> whole_result;
  hw_uint<32> lane_0_Img_off;
  // Need offset: 0, 0, 0
  set_at<0, 32>(lane_0_Img_off, Img_off.extract<0, 31>());
  auto result_0 = id(lane_0_Img_off);
  set_at<0, 32>(whole_result, result_0);
   return whole_result;
}

hw_uint<32>  avg_unrolled_1(hw_uint<96>& Img) {
  hw_uint<32> whole_result;
  hw_uint<96> lane_0_Img;
  // Need offset: 0, 0, 0
  set_at<0, 96>(lane_0_Img, Img.extract<0, 31>());
  // Need offset: 0, 0, 1
  set_at<32, 96>(lane_0_Img, Img.extract<32, 63>());
  // Need offset: 0, 0, 2
  set_at<64, 96>(lane_0_Img, Img.extract<64, 95>());
  auto result_0 = avg(lane_0_Img);
  set_at<0, 32>(whole_result, result_0);
   return whole_result;
}

