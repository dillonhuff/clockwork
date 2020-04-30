#pragma once

#include "conv_3x3.h"

// Generated compute units...


// Compute unit banks...
  // Img_update_0 unroll factor: 1
hw_uint<32>  id_unrolled_1(hw_uint<32>& Img_off) {
  hw_uint<32> whole_result;

  hw_uint<32> lane_0_Img_off;
  set_at<0, 32, 32>(lane_0_Img_off, Img_off.extract<0, 31>());
  auto result_0 = id(lane_0_Img_off);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // upsample_stencil_update_0 unroll factor: 1
hw_uint<32>  conv_3_3_unrolled_1(hw_uint<288>& Img) {
  hw_uint<32> whole_result;

  hw_uint<288> lane_0_Img;
  set_at<0, 288, 288>(lane_0_Img, Img.extract<0, 287>());
  auto result_0 = conv_3_3(lane_0_Img);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

