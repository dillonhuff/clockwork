#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<32> in_cc_generated_compute(hw_uint<32*1> in) {
  return uint32_t(to_bits(to_float(in.get<32, 0>())));
}

hw_uint<32> h3_0_generated_compute(hw_uint<32*7> in_cc) {
  return uint32_t(to_bits(((((((((((((float)0.125) * to_float(in_cc.get<32, 6>())) + (((float)-0.125) * to_float(in_cc.get<32, 3>()))) + (((float)0.125) * to_float(in_cc.get<32, 0>()))) + (((float)0.125) * to_float(in_cc.get<32, 5>()))) + (((float)-0.125) * to_float(in_cc.get<32, 3>()))) + (((float)0.125) * to_float(in_cc.get<32, 1>()))) + (((float)0.125) * to_float(in_cc.get<32, 4>()))) + (((float)-0.125) * to_float(in_cc.get<32, 3>()))) + (((float)0.125) * to_float(in_cc.get<32, 2>()))) + to_float(in_cc.get<32, 3>()))));
}

hw_uint<32> h3_1_generated_compute(hw_uint<32*7> h3_0) {
  return uint32_t(to_bits(((((((((((((float)0.125) * to_float(h3_0.get<32, 6>())) + (((float)-0.125) * to_float(h3_0.get<32, 3>()))) + (((float)0.125) * to_float(h3_0.get<32, 0>()))) + (((float)0.125) * to_float(h3_0.get<32, 5>()))) + (((float)-0.125) * to_float(h3_0.get<32, 3>()))) + (((float)0.125) * to_float(h3_0.get<32, 1>()))) + (((float)0.125) * to_float(h3_0.get<32, 4>()))) + (((float)-0.125) * to_float(h3_0.get<32, 3>()))) + (((float)0.125) * to_float(h3_0.get<32, 2>()))) + to_float(h3_0.get<32, 3>()))));
}

hw_uint<32> h3_2_generated_compute(hw_uint<32*7> h3_1) {
  return uint32_t(to_bits(((((((((((((float)0.125) * to_float(h3_1.get<32, 6>())) + (((float)-0.125) * to_float(h3_1.get<32, 3>()))) + (((float)0.125) * to_float(h3_1.get<32, 0>()))) + (((float)0.125) * to_float(h3_1.get<32, 5>()))) + (((float)-0.125) * to_float(h3_1.get<32, 3>()))) + (((float)0.125) * to_float(h3_1.get<32, 1>()))) + (((float)0.125) * to_float(h3_1.get<32, 4>()))) + (((float)-0.125) * to_float(h3_1.get<32, 3>()))) + (((float)0.125) * to_float(h3_1.get<32, 2>()))) + to_float(h3_1.get<32, 3>()))));
}

hw_uint<32> h3_3_generated_compute(hw_uint<32*7> h3_2) {
  return uint32_t(to_bits(((((((((((((float)0.125) * to_float(h3_2.get<32, 6>())) + (((float)-0.125) * to_float(h3_2.get<32, 3>()))) + (((float)0.125) * to_float(h3_2.get<32, 0>()))) + (((float)0.125) * to_float(h3_2.get<32, 5>()))) + (((float)-0.125) * to_float(h3_2.get<32, 3>()))) + (((float)0.125) * to_float(h3_2.get<32, 1>()))) + (((float)0.125) * to_float(h3_2.get<32, 4>()))) + (((float)-0.125) * to_float(h3_2.get<32, 3>()))) + (((float)0.125) * to_float(h3_2.get<32, 2>()))) + to_float(h3_2.get<32, 3>()))));
}

hw_uint<32> h3_4_generated_compute(hw_uint<32*7> h3_3) {
  return uint32_t(to_bits(((((((((((((float)0.125) * to_float(h3_3.get<32, 6>())) + (((float)-0.125) * to_float(h3_3.get<32, 3>()))) + (((float)0.125) * to_float(h3_3.get<32, 0>()))) + (((float)0.125) * to_float(h3_3.get<32, 5>()))) + (((float)-0.125) * to_float(h3_3.get<32, 3>()))) + (((float)0.125) * to_float(h3_3.get<32, 1>()))) + (((float)0.125) * to_float(h3_3.get<32, 4>()))) + (((float)-0.125) * to_float(h3_3.get<32, 3>()))) + (((float)0.125) * to_float(h3_3.get<32, 2>()))) + to_float(h3_3.get<32, 3>()))));
}

hw_uint<32> h3_5_generated_compute(hw_uint<32*7> h3_4) {
  return uint32_t(to_bits(((((((((((((float)0.125) * to_float(h3_4.get<32, 6>())) + (((float)-0.125) * to_float(h3_4.get<32, 3>()))) + (((float)0.125) * to_float(h3_4.get<32, 0>()))) + (((float)0.125) * to_float(h3_4.get<32, 5>()))) + (((float)-0.125) * to_float(h3_4.get<32, 3>()))) + (((float)0.125) * to_float(h3_4.get<32, 1>()))) + (((float)0.125) * to_float(h3_4.get<32, 4>()))) + (((float)-0.125) * to_float(h3_4.get<32, 3>()))) + (((float)0.125) * to_float(h3_4.get<32, 2>()))) + to_float(h3_4.get<32, 3>()))));
}

hw_uint<32> h3_6_generated_compute(hw_uint<32*7> h3_5) {
  return uint32_t(to_bits(((((((((((((float)0.125) * to_float(h3_5.get<32, 6>())) + (((float)-0.125) * to_float(h3_5.get<32, 3>()))) + (((float)0.125) * to_float(h3_5.get<32, 0>()))) + (((float)0.125) * to_float(h3_5.get<32, 5>()))) + (((float)-0.125) * to_float(h3_5.get<32, 3>()))) + (((float)0.125) * to_float(h3_5.get<32, 1>()))) + (((float)0.125) * to_float(h3_5.get<32, 4>()))) + (((float)-0.125) * to_float(h3_5.get<32, 3>()))) + (((float)0.125) * to_float(h3_5.get<32, 2>()))) + to_float(h3_5.get<32, 3>()))));
}

hw_uint<32> h3_7_generated_compute(hw_uint<32*7> h3_6) {
  return uint32_t(to_bits(((((((((((((float)0.125) * to_float(h3_6.get<32, 6>())) + (((float)-0.125) * to_float(h3_6.get<32, 3>()))) + (((float)0.125) * to_float(h3_6.get<32, 0>()))) + (((float)0.125) * to_float(h3_6.get<32, 5>()))) + (((float)-0.125) * to_float(h3_6.get<32, 3>()))) + (((float)0.125) * to_float(h3_6.get<32, 1>()))) + (((float)0.125) * to_float(h3_6.get<32, 4>()))) + (((float)-0.125) * to_float(h3_6.get<32, 3>()))) + (((float)0.125) * to_float(h3_6.get<32, 2>()))) + to_float(h3_6.get<32, 3>()))));
}

hw_uint<32> heat3dla_8_1_generated_compute(hw_uint<32*1> h3_7) {
  return uint32_t(to_bits(to_float(h3_7.get<32, 0>())));
}



// Compute unit banks...
  // in_cc_update_0 unroll factor: 1
hw_uint<32>  in_cc_generated_compute_unrolled_1(hw_uint<32>& in) {
  hw_uint<32> whole_result;

  hw_uint<32> lane_0_in;
  set_at<0, 32, 32>(lane_0_in, in.extract<0, 31>());
  auto result_0 = in_cc_generated_compute(lane_0_in);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // h3_0_update_0 unroll factor: 1
hw_uint<32>  h3_0_generated_compute_unrolled_1(hw_uint<224>& in_cc) {
  hw_uint<32> whole_result;

  hw_uint<224> lane_0_in_cc;
  set_at<0, 224, 224>(lane_0_in_cc, in_cc.extract<0, 223>());
  auto result_0 = h3_0_generated_compute(lane_0_in_cc);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // h3_1_update_0 unroll factor: 1
hw_uint<32>  h3_1_generated_compute_unrolled_1(hw_uint<224>& h3_0) {
  hw_uint<32> whole_result;

  hw_uint<224> lane_0_h3_0;
  set_at<0, 224, 224>(lane_0_h3_0, h3_0.extract<0, 223>());
  auto result_0 = h3_1_generated_compute(lane_0_h3_0);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // h3_2_update_0 unroll factor: 1
hw_uint<32>  h3_2_generated_compute_unrolled_1(hw_uint<224>& h3_1) {
  hw_uint<32> whole_result;

  hw_uint<224> lane_0_h3_1;
  set_at<0, 224, 224>(lane_0_h3_1, h3_1.extract<0, 223>());
  auto result_0 = h3_2_generated_compute(lane_0_h3_1);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // h3_3_update_0 unroll factor: 1
hw_uint<32>  h3_3_generated_compute_unrolled_1(hw_uint<224>& h3_2) {
  hw_uint<32> whole_result;

  hw_uint<224> lane_0_h3_2;
  set_at<0, 224, 224>(lane_0_h3_2, h3_2.extract<0, 223>());
  auto result_0 = h3_3_generated_compute(lane_0_h3_2);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // h3_4_update_0 unroll factor: 1
hw_uint<32>  h3_4_generated_compute_unrolled_1(hw_uint<224>& h3_3) {
  hw_uint<32> whole_result;

  hw_uint<224> lane_0_h3_3;
  set_at<0, 224, 224>(lane_0_h3_3, h3_3.extract<0, 223>());
  auto result_0 = h3_4_generated_compute(lane_0_h3_3);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // h3_5_update_0 unroll factor: 1
hw_uint<32>  h3_5_generated_compute_unrolled_1(hw_uint<224>& h3_4) {
  hw_uint<32> whole_result;

  hw_uint<224> lane_0_h3_4;
  set_at<0, 224, 224>(lane_0_h3_4, h3_4.extract<0, 223>());
  auto result_0 = h3_5_generated_compute(lane_0_h3_4);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // h3_6_update_0 unroll factor: 1
hw_uint<32>  h3_6_generated_compute_unrolled_1(hw_uint<224>& h3_5) {
  hw_uint<32> whole_result;

  hw_uint<224> lane_0_h3_5;
  set_at<0, 224, 224>(lane_0_h3_5, h3_5.extract<0, 223>());
  auto result_0 = h3_6_generated_compute(lane_0_h3_5);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // h3_7_update_0 unroll factor: 1
hw_uint<32>  h3_7_generated_compute_unrolled_1(hw_uint<224>& h3_6) {
  hw_uint<32> whole_result;

  hw_uint<224> lane_0_h3_6;
  set_at<0, 224, 224>(lane_0_h3_6, h3_6.extract<0, 223>());
  auto result_0 = h3_7_generated_compute(lane_0_h3_6);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // heat3dla_8_1_update_0 unroll factor: 1
hw_uint<32>  heat3dla_8_1_generated_compute_unrolled_1(hw_uint<32>& h3_7) {
  hw_uint<32> whole_result;

  hw_uint<32> lane_0_h3_7;
  set_at<0, 32, 32>(lane_0_h3_7, h3_7.extract<0, 31>());
  auto result_0 = heat3dla_8_1_generated_compute(lane_0_h3_7);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

