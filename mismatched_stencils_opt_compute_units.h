#pragma once

#include "conv_3x3.h"

hw_uint<32>  id_unrolled_1(hw_uint<32>& off_chip_img1) {
  hw_uint<32> whole_result;
  hw_uint<32> lane_0_off_chip_img1;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_off_chip_img1, off_chip_img1.extract<0, 31>());
  auto result_0 = id(lane_0_off_chip_img1);
  set_at<0, 32>(whole_result, result_0);
   return whole_result;
}

hw_uint<32>  contrived_unrolled_1(hw_uint<96>& img0, hw_uint<64>& img1) {
  hw_uint<32> whole_result;
  hw_uint<96> lane_0_img0;
  // Need offset: 0, 0
  set_at<0, 96>(lane_0_img0, img0.extract<0, 31>());
  // Need offset: 1, 0
  set_at<32, 96>(lane_0_img0, img0.extract<32, 63>());
  // Need offset: 2, 0
  set_at<64, 96>(lane_0_img0, img0.extract<64, 95>());
  hw_uint<64> lane_0_img1;
  // Need offset: 0, 0
  set_at<0, 64>(lane_0_img1, img1.extract<0, 31>());
  // Need offset: 1, 0
  set_at<32, 64>(lane_0_img1, img1.extract<32, 63>());
  auto result_0 = contrived(lane_0_img0, lane_0_img1);
  set_at<0, 32>(whole_result, result_0);
   return whole_result;
}

