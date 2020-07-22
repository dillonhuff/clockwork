#pragma once

#include "conv_3x3.h"

// Generated compute units...


// Compute unit banks...
  // in_off_chip0_update_0 unroll factor: 16
hw_uint<256>  id_unrolled_16(hw_uint<256>& in_off_chip0_oc) {
  hw_uint<256> whole_result;

  hw_uint<16> lane_0_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_0_in_off_chip0_oc, in_off_chip0_oc.extract<0, 15>());
  auto result_0 = id(lane_0_in_off_chip0_oc);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<16> lane_1_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_1_in_off_chip0_oc, in_off_chip0_oc.extract<16, 31>());
  auto result_1 = id(lane_1_in_off_chip0_oc);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<16> lane_2_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_2_in_off_chip0_oc, in_off_chip0_oc.extract<32, 47>());
  auto result_2 = id(lane_2_in_off_chip0_oc);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<16> lane_3_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_3_in_off_chip0_oc, in_off_chip0_oc.extract<48, 63>());
  auto result_3 = id(lane_3_in_off_chip0_oc);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<16> lane_4_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_4_in_off_chip0_oc, in_off_chip0_oc.extract<64, 79>());
  auto result_4 = id(lane_4_in_off_chip0_oc);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<16> lane_5_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_5_in_off_chip0_oc, in_off_chip0_oc.extract<80, 95>());
  auto result_5 = id(lane_5_in_off_chip0_oc);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<16> lane_6_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_6_in_off_chip0_oc, in_off_chip0_oc.extract<96, 111>());
  auto result_6 = id(lane_6_in_off_chip0_oc);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<16> lane_7_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_7_in_off_chip0_oc, in_off_chip0_oc.extract<112, 127>());
  auto result_7 = id(lane_7_in_off_chip0_oc);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<16> lane_8_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_8_in_off_chip0_oc, in_off_chip0_oc.extract<128, 143>());
  auto result_8 = id(lane_8_in_off_chip0_oc);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<16> lane_9_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_9_in_off_chip0_oc, in_off_chip0_oc.extract<144, 159>());
  auto result_9 = id(lane_9_in_off_chip0_oc);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<16> lane_10_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_10_in_off_chip0_oc, in_off_chip0_oc.extract<160, 175>());
  auto result_10 = id(lane_10_in_off_chip0_oc);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<16> lane_11_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_11_in_off_chip0_oc, in_off_chip0_oc.extract<176, 191>());
  auto result_11 = id(lane_11_in_off_chip0_oc);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<16> lane_12_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_12_in_off_chip0_oc, in_off_chip0_oc.extract<192, 207>());
  auto result_12 = id(lane_12_in_off_chip0_oc);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<16> lane_13_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_13_in_off_chip0_oc, in_off_chip0_oc.extract<208, 223>());
  auto result_13 = id(lane_13_in_off_chip0_oc);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<16> lane_14_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_14_in_off_chip0_oc, in_off_chip0_oc.extract<224, 239>());
  auto result_14 = id(lane_14_in_off_chip0_oc);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<16> lane_15_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_15_in_off_chip0_oc, in_off_chip0_oc.extract<240, 255>());
  auto result_15 = id(lane_15_in_off_chip0_oc);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

