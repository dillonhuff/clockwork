#pragma once

#include "conv_3x3.h"

// Generated compute units...


// Compute unit banks...
  // in_off_chip0_update_0 unroll factor: 8
hw_uint<128>  id_unrolled_8(hw_uint<128>& in_off_chip0_oc) {
  hw_uint<128> whole_result;

  hw_uint<16> lane_0_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_0_in_off_chip0_oc, in_off_chip0_oc.extract<0, 15>());
  auto result_0 = id(lane_0_in_off_chip0_oc);
  set_at<0, 128, 16>(whole_result, result_0);

  hw_uint<16> lane_1_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_1_in_off_chip0_oc, in_off_chip0_oc.extract<16, 31>());
  auto result_1 = id(lane_1_in_off_chip0_oc);
  set_at<16, 128, 16>(whole_result, result_1);

  hw_uint<16> lane_2_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_2_in_off_chip0_oc, in_off_chip0_oc.extract<32, 47>());
  auto result_2 = id(lane_2_in_off_chip0_oc);
  set_at<32, 128, 16>(whole_result, result_2);

  hw_uint<16> lane_3_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_3_in_off_chip0_oc, in_off_chip0_oc.extract<48, 63>());
  auto result_3 = id(lane_3_in_off_chip0_oc);
  set_at<48, 128, 16>(whole_result, result_3);

  hw_uint<16> lane_4_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_4_in_off_chip0_oc, in_off_chip0_oc.extract<64, 79>());
  auto result_4 = id(lane_4_in_off_chip0_oc);
  set_at<64, 128, 16>(whole_result, result_4);

  hw_uint<16> lane_5_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_5_in_off_chip0_oc, in_off_chip0_oc.extract<80, 95>());
  auto result_5 = id(lane_5_in_off_chip0_oc);
  set_at<80, 128, 16>(whole_result, result_5);

  hw_uint<16> lane_6_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_6_in_off_chip0_oc, in_off_chip0_oc.extract<96, 111>());
  auto result_6 = id(lane_6_in_off_chip0_oc);
  set_at<96, 128, 16>(whole_result, result_6);

  hw_uint<16> lane_7_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_7_in_off_chip0_oc, in_off_chip0_oc.extract<112, 127>());
  auto result_7 = id(lane_7_in_off_chip0_oc);
  set_at<112, 128, 16>(whole_result, result_7);
  return whole_result;
}

