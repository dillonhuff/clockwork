#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<32> in_cc_generated_compute(hw_uint<32*1> in) {
  return uint32_t(to_bits(to_float(in.get<32, 0>())));
}

hw_uint<32> h3_0_generated_compute(hw_uint<32*7> in_cc) {
  return uint32_t(to_bits(((((((((((((float)0.125) * to_float(in_cc.get<32, 6>())) + (((float)-0.125) * to_float(in_cc.get<32, 3>()))) + (((float)0.125) * to_float(in_cc.get<32, 0>()))) + (((float)0.125) * to_float(in_cc.get<32, 5>()))) + (((float)-0.125) * to_float(in_cc.get<32, 3>()))) + (((float)0.125) * to_float(in_cc.get<32, 1>()))) + (((float)0.125) * to_float(in_cc.get<32, 4>()))) + (((float)-0.125) * to_float(in_cc.get<32, 3>()))) + (((float)0.125) * to_float(in_cc.get<32, 2>()))) + to_float(in_cc.get<32, 3>()))));
}

hw_uint<32> heat3dsla_1_1_generated_compute(hw_uint<32*1> h3_0) {
  return uint32_t(to_bits(to_float(h3_0.get<32, 0>())));
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

  // heat3dsla_1_1_update_0 unroll factor: 1
hw_uint<32>  heat3dsla_1_1_generated_compute_unrolled_1(hw_uint<32>& h3_0) {
  hw_uint<32> whole_result;

  hw_uint<32> lane_0_h3_0;
  set_at<0, 32, 32>(lane_0_h3_0, h3_0.extract<0, 31>());
  auto result_0 = heat3dsla_1_1_generated_compute(lane_0_h3_0);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

