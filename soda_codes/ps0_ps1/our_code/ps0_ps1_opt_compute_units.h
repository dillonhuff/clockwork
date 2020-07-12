#pragma once

#include "conv_3x3.h"

// Generated compute units...


// Compute unit banks...
  // in_off_chip0_update_0 unroll factor: 2
hw_uint<32>  id_unrolled_2(hw_uint<32>& in_off_chip0_oc) {
  hw_uint<32> whole_result;

  hw_uint<16> lane_0_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_0_in_off_chip0_oc, in_off_chip0_oc.extract<0, 15>());
  auto result_0 = id(lane_0_in_off_chip0_oc);
  set_at<0, 32, 16>(whole_result, result_0);

  hw_uint<16> lane_1_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_1_in_off_chip0_oc, in_off_chip0_oc.extract<16, 31>());
  auto result_1 = id(lane_1_in_off_chip0_oc);
  set_at<16, 32, 16>(whole_result, result_1);
  return whole_result;
}

  // in_off_chip0_oc_in_off_chip1_oc_update_0 unroll factor: 4
hw_uint<64>  interleave_unrolled_4(hw_uint<64>& in_off_chip0, hw_uint<64>& in_off_chip1, int d0) {
  hw_uint<64> whole_result;

  hw_uint<16> lane_0_in_off_chip0;
  set_at<0, 16, 16>(lane_0_in_off_chip0, in_off_chip0.extract<0, 15>());
  hw_uint<16> lane_0_in_off_chip1;
  set_at<0, 16, 16>(lane_0_in_off_chip1, in_off_chip1.extract<0, 15>());
  auto result_0 = interleave(lane_0_in_off_chip0, lane_0_in_off_chip1, d0);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<16> lane_1_in_off_chip0;
  set_at<0, 16, 16>(lane_1_in_off_chip0, in_off_chip0.extract<16, 31>());
  hw_uint<16> lane_1_in_off_chip1;
  set_at<0, 16, 16>(lane_1_in_off_chip1, in_off_chip1.extract<16, 31>());
  auto result_1 = interleave(lane_1_in_off_chip0, lane_1_in_off_chip1, d0);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<16> lane_2_in_off_chip0;
  set_at<0, 16, 16>(lane_2_in_off_chip0, in_off_chip0.extract<32, 47>());
  hw_uint<16> lane_2_in_off_chip1;
  set_at<0, 16, 16>(lane_2_in_off_chip1, in_off_chip1.extract<32, 47>());
  auto result_2 = interleave(lane_2_in_off_chip0, lane_2_in_off_chip1, d0);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<16> lane_3_in_off_chip0;
  set_at<0, 16, 16>(lane_3_in_off_chip0, in_off_chip0.extract<48, 63>());
  hw_uint<16> lane_3_in_off_chip1;
  set_at<0, 16, 16>(lane_3_in_off_chip1, in_off_chip1.extract<48, 63>());
  auto result_3 = interleave(lane_3_in_off_chip0, lane_3_in_off_chip1, d0);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // in_update_0 unroll factor: 4
hw_uint<64>  id_unrolled_4(hw_uint<64>& in_off_chip0_oc_in_off_chip1_oc) {
  hw_uint<64> whole_result;

  hw_uint<16> lane_0_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_0_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<0, 15>());
  auto result_0 = id(lane_0_in_off_chip0_oc_in_off_chip1_oc);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<16> lane_1_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_1_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<16, 31>());
  auto result_1 = id(lane_1_in_off_chip0_oc_in_off_chip1_oc);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<16> lane_2_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_2_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<32, 47>());
  auto result_2 = id(lane_2_in_off_chip0_oc_in_off_chip1_oc);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<16> lane_3_in_off_chip0_oc_in_off_chip1_oc;
  set_at<0, 16, 16>(lane_3_in_off_chip0_oc_in_off_chip1_oc, in_off_chip0_oc_in_off_chip1_oc.extract<48, 63>());
  auto result_3 = id(lane_3_in_off_chip0_oc_in_off_chip1_oc);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // dark_update_0 unroll factor: 4
hw_uint<64>  scale_exposure_unrolled_4(hw_uint<64>& in) {
  hw_uint<64> whole_result;

  hw_uint<16> lane_0_in;
  set_at<0, 16, 16>(lane_0_in, in.extract<0, 15>());
  auto result_0 = scale_exposure(lane_0_in);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<16> lane_1_in;
  set_at<0, 16, 16>(lane_1_in, in.extract<16, 31>());
  auto result_1 = scale_exposure(lane_1_in);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<16> lane_2_in;
  set_at<0, 16, 16>(lane_2_in, in.extract<32, 47>());
  auto result_2 = scale_exposure(lane_2_in);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<16> lane_3_in;
  set_at<0, 16, 16>(lane_3_in, in.extract<48, 63>());
  auto result_3 = scale_exposure(lane_3_in);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // ps_update_0 unroll factor: 4
hw_uint<64>  add_unrolled_4(hw_uint<64>& bright, hw_uint<64>& dark) {
  hw_uint<64> whole_result;

  hw_uint<16> lane_0_bright;
  set_at<0, 16, 16>(lane_0_bright, bright.extract<0, 15>());
  hw_uint<16> lane_0_dark;
  set_at<0, 16, 16>(lane_0_dark, dark.extract<0, 15>());
  auto result_0 = add(lane_0_bright, lane_0_dark);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<16> lane_1_bright;
  set_at<0, 16, 16>(lane_1_bright, bright.extract<16, 31>());
  hw_uint<16> lane_1_dark;
  set_at<0, 16, 16>(lane_1_dark, dark.extract<16, 31>());
  auto result_1 = add(lane_1_bright, lane_1_dark);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<16> lane_2_bright;
  set_at<0, 16, 16>(lane_2_bright, bright.extract<32, 47>());
  hw_uint<16> lane_2_dark;
  set_at<0, 16, 16>(lane_2_dark, dark.extract<32, 47>());
  auto result_2 = add(lane_2_bright, lane_2_dark);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<16> lane_3_bright;
  set_at<0, 16, 16>(lane_3_bright, bright.extract<48, 63>());
  hw_uint<16> lane_3_dark;
  set_at<0, 16, 16>(lane_3_dark, dark.extract<48, 63>());
  auto result_3 = add(lane_3_bright, lane_3_dark);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

