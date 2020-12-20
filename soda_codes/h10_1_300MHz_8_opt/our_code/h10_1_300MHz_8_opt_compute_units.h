#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<32> in_cc_generated_compute(hw_uint<32*1> in) {
  return uint32_t(to_bits(to_float(in.get<32, 0>())));
}

hw_uint<32> h3_0_generated_compute(hw_uint<32*5> in_cc) {
  return uint32_t(to_bits((((((float)0.125f) * to_float(in_cc.get<32, 4>())) + (((float)0.125f) * to_float(in_cc.get<32, 0>()))) + ((((float)0.125f) * to_float(in_cc.get<32, 3>())) + ((((float)0.125f) * to_float(in_cc.get<32, 1>())) + (((float)0.25) * to_float(in_cc.get<32, 2>())))))));
}

hw_uint<32> h3_1_generated_compute(hw_uint<32*5> h3_0) {
  return uint32_t(to_bits((((((float)0.125f) * to_float(h3_0.get<32, 4>())) + (((float)0.125f) * to_float(h3_0.get<32, 0>()))) + ((((float)0.125f) * to_float(h3_0.get<32, 3>())) + ((((float)0.125f) * to_float(h3_0.get<32, 1>())) + (((float)0.25) * to_float(h3_0.get<32, 2>())))))));
}

hw_uint<32> h3_2_generated_compute(hw_uint<32*5> h3_1) {
  return uint32_t(to_bits((((((float)0.125f) * to_float(h3_1.get<32, 4>())) + (((float)0.125f) * to_float(h3_1.get<32, 0>()))) + ((((float)0.125f) * to_float(h3_1.get<32, 3>())) + ((((float)0.125f) * to_float(h3_1.get<32, 1>())) + (((float)0.25) * to_float(h3_1.get<32, 2>())))))));
}

hw_uint<32> h3_3_generated_compute(hw_uint<32*5> h3_2) {
  return uint32_t(to_bits((((((float)0.125f) * to_float(h3_2.get<32, 4>())) + (((float)0.125f) * to_float(h3_2.get<32, 0>()))) + ((((float)0.125f) * to_float(h3_2.get<32, 3>())) + ((((float)0.125f) * to_float(h3_2.get<32, 1>())) + (((float)0.25) * to_float(h3_2.get<32, 2>())))))));
}

hw_uint<32> h3_4_generated_compute(hw_uint<32*5> h3_3) {
  return uint32_t(to_bits((((((float)0.125f) * to_float(h3_3.get<32, 4>())) + (((float)0.125f) * to_float(h3_3.get<32, 0>()))) + ((((float)0.125f) * to_float(h3_3.get<32, 3>())) + ((((float)0.125f) * to_float(h3_3.get<32, 1>())) + (((float)0.25) * to_float(h3_3.get<32, 2>())))))));
}

hw_uint<32> h3_5_generated_compute(hw_uint<32*5> h3_4) {
  return uint32_t(to_bits((((((float)0.125f) * to_float(h3_4.get<32, 4>())) + (((float)0.125f) * to_float(h3_4.get<32, 0>()))) + ((((float)0.125f) * to_float(h3_4.get<32, 3>())) + ((((float)0.125f) * to_float(h3_4.get<32, 1>())) + (((float)0.25) * to_float(h3_4.get<32, 2>())))))));
}

hw_uint<32> h3_6_generated_compute(hw_uint<32*5> h3_5) {
  return uint32_t(to_bits((((((float)0.125f) * to_float(h3_5.get<32, 4>())) + (((float)0.125f) * to_float(h3_5.get<32, 0>()))) + ((((float)0.125f) * to_float(h3_5.get<32, 3>())) + ((((float)0.125f) * to_float(h3_5.get<32, 1>())) + (((float)0.25) * to_float(h3_5.get<32, 2>())))))));
}

hw_uint<32> h3_7_generated_compute(hw_uint<32*5> h3_6) {
  return uint32_t(to_bits((((((float)0.125f) * to_float(h3_6.get<32, 4>())) + (((float)0.125f) * to_float(h3_6.get<32, 0>()))) + ((((float)0.125f) * to_float(h3_6.get<32, 3>())) + ((((float)0.125f) * to_float(h3_6.get<32, 1>())) + (((float)0.25) * to_float(h3_6.get<32, 2>())))))));
}

hw_uint<32> h3_8_generated_compute(hw_uint<32*5> h3_7) {
  return uint32_t(to_bits((((((float)0.125f) * to_float(h3_7.get<32, 4>())) + (((float)0.125f) * to_float(h3_7.get<32, 0>()))) + ((((float)0.125f) * to_float(h3_7.get<32, 3>())) + ((((float)0.125f) * to_float(h3_7.get<32, 1>())) + (((float)0.25) * to_float(h3_7.get<32, 2>())))))));
}

hw_uint<32> h3_9_generated_compute(hw_uint<32*5> h3_8) {
  return uint32_t(to_bits((((((float)0.125f) * to_float(h3_8.get<32, 4>())) + (((float)0.125f) * to_float(h3_8.get<32, 0>()))) + ((((float)0.125f) * to_float(h3_8.get<32, 3>())) + ((((float)0.125f) * to_float(h3_8.get<32, 1>())) + (((float)0.25) * to_float(h3_8.get<32, 2>())))))));
}

hw_uint<32> h10_1_300MHz_8_generated_compute(hw_uint<32*1> h3_9) {
  return uint32_t(to_bits(to_float(h3_9.get<32, 0>())));
}



// Compute unit banks...
  // in_cc_update_0 unroll factor: 8
hw_uint<256>  in_cc_generated_compute_unrolled_8(hw_uint<256>& in) {
  hw_uint<256> whole_result;

  hw_uint<32> lane_0_in;
  set_at<0, 32, 32>(lane_0_in, in.extract<0, 31>());
  auto result_0 = in_cc_generated_compute(lane_0_in);
  set_at<0, 256, 32>(whole_result, result_0);

  hw_uint<32> lane_1_in;
  set_at<0, 32, 32>(lane_1_in, in.extract<32, 63>());
  auto result_1 = in_cc_generated_compute(lane_1_in);
  set_at<32, 256, 32>(whole_result, result_1);

  hw_uint<32> lane_2_in;
  set_at<0, 32, 32>(lane_2_in, in.extract<64, 95>());
  auto result_2 = in_cc_generated_compute(lane_2_in);
  set_at<64, 256, 32>(whole_result, result_2);

  hw_uint<32> lane_3_in;
  set_at<0, 32, 32>(lane_3_in, in.extract<96, 127>());
  auto result_3 = in_cc_generated_compute(lane_3_in);
  set_at<96, 256, 32>(whole_result, result_3);

  hw_uint<32> lane_4_in;
  set_at<0, 32, 32>(lane_4_in, in.extract<128, 159>());
  auto result_4 = in_cc_generated_compute(lane_4_in);
  set_at<128, 256, 32>(whole_result, result_4);

  hw_uint<32> lane_5_in;
  set_at<0, 32, 32>(lane_5_in, in.extract<160, 191>());
  auto result_5 = in_cc_generated_compute(lane_5_in);
  set_at<160, 256, 32>(whole_result, result_5);

  hw_uint<32> lane_6_in;
  set_at<0, 32, 32>(lane_6_in, in.extract<192, 223>());
  auto result_6 = in_cc_generated_compute(lane_6_in);
  set_at<192, 256, 32>(whole_result, result_6);

  hw_uint<32> lane_7_in;
  set_at<0, 32, 32>(lane_7_in, in.extract<224, 255>());
  auto result_7 = in_cc_generated_compute(lane_7_in);
  set_at<224, 256, 32>(whole_result, result_7);
  return whole_result;
}

  // h3_0_update_0 unroll factor: 8
hw_uint<256>  h3_0_generated_compute_unrolled_8(hw_uint<1280>& in_cc) {
  hw_uint<256> whole_result;

  hw_uint<160> lane_0_in_cc;
  set_at<0, 160, 160>(lane_0_in_cc, in_cc.extract<0, 159>());
  auto result_0 = h3_0_generated_compute(lane_0_in_cc);
  set_at<0, 256, 32>(whole_result, result_0);

  hw_uint<160> lane_1_in_cc;
  set_at<0, 160, 160>(lane_1_in_cc, in_cc.extract<160, 319>());
  auto result_1 = h3_0_generated_compute(lane_1_in_cc);
  set_at<32, 256, 32>(whole_result, result_1);

  hw_uint<160> lane_2_in_cc;
  set_at<0, 160, 160>(lane_2_in_cc, in_cc.extract<320, 479>());
  auto result_2 = h3_0_generated_compute(lane_2_in_cc);
  set_at<64, 256, 32>(whole_result, result_2);

  hw_uint<160> lane_3_in_cc;
  set_at<0, 160, 160>(lane_3_in_cc, in_cc.extract<480, 639>());
  auto result_3 = h3_0_generated_compute(lane_3_in_cc);
  set_at<96, 256, 32>(whole_result, result_3);

  hw_uint<160> lane_4_in_cc;
  set_at<0, 160, 160>(lane_4_in_cc, in_cc.extract<640, 799>());
  auto result_4 = h3_0_generated_compute(lane_4_in_cc);
  set_at<128, 256, 32>(whole_result, result_4);

  hw_uint<160> lane_5_in_cc;
  set_at<0, 160, 160>(lane_5_in_cc, in_cc.extract<800, 959>());
  auto result_5 = h3_0_generated_compute(lane_5_in_cc);
  set_at<160, 256, 32>(whole_result, result_5);

  hw_uint<160> lane_6_in_cc;
  set_at<0, 160, 160>(lane_6_in_cc, in_cc.extract<960, 1119>());
  auto result_6 = h3_0_generated_compute(lane_6_in_cc);
  set_at<192, 256, 32>(whole_result, result_6);

  hw_uint<160> lane_7_in_cc;
  set_at<0, 160, 160>(lane_7_in_cc, in_cc.extract<1120, 1279>());
  auto result_7 = h3_0_generated_compute(lane_7_in_cc);
  set_at<224, 256, 32>(whole_result, result_7);
  return whole_result;
}

  // h3_1_update_0 unroll factor: 8
hw_uint<256>  h3_1_generated_compute_unrolled_8(hw_uint<1280>& h3_0) {
  hw_uint<256> whole_result;

  hw_uint<160> lane_0_h3_0;
  set_at<0, 160, 160>(lane_0_h3_0, h3_0.extract<0, 159>());
  auto result_0 = h3_1_generated_compute(lane_0_h3_0);
  set_at<0, 256, 32>(whole_result, result_0);

  hw_uint<160> lane_1_h3_0;
  set_at<0, 160, 160>(lane_1_h3_0, h3_0.extract<160, 319>());
  auto result_1 = h3_1_generated_compute(lane_1_h3_0);
  set_at<32, 256, 32>(whole_result, result_1);

  hw_uint<160> lane_2_h3_0;
  set_at<0, 160, 160>(lane_2_h3_0, h3_0.extract<320, 479>());
  auto result_2 = h3_1_generated_compute(lane_2_h3_0);
  set_at<64, 256, 32>(whole_result, result_2);

  hw_uint<160> lane_3_h3_0;
  set_at<0, 160, 160>(lane_3_h3_0, h3_0.extract<480, 639>());
  auto result_3 = h3_1_generated_compute(lane_3_h3_0);
  set_at<96, 256, 32>(whole_result, result_3);

  hw_uint<160> lane_4_h3_0;
  set_at<0, 160, 160>(lane_4_h3_0, h3_0.extract<640, 799>());
  auto result_4 = h3_1_generated_compute(lane_4_h3_0);
  set_at<128, 256, 32>(whole_result, result_4);

  hw_uint<160> lane_5_h3_0;
  set_at<0, 160, 160>(lane_5_h3_0, h3_0.extract<800, 959>());
  auto result_5 = h3_1_generated_compute(lane_5_h3_0);
  set_at<160, 256, 32>(whole_result, result_5);

  hw_uint<160> lane_6_h3_0;
  set_at<0, 160, 160>(lane_6_h3_0, h3_0.extract<960, 1119>());
  auto result_6 = h3_1_generated_compute(lane_6_h3_0);
  set_at<192, 256, 32>(whole_result, result_6);

  hw_uint<160> lane_7_h3_0;
  set_at<0, 160, 160>(lane_7_h3_0, h3_0.extract<1120, 1279>());
  auto result_7 = h3_1_generated_compute(lane_7_h3_0);
  set_at<224, 256, 32>(whole_result, result_7);
  return whole_result;
}

  // h3_2_update_0 unroll factor: 8
hw_uint<256>  h3_2_generated_compute_unrolled_8(hw_uint<1280>& h3_1) {
  hw_uint<256> whole_result;

  hw_uint<160> lane_0_h3_1;
  set_at<0, 160, 160>(lane_0_h3_1, h3_1.extract<0, 159>());
  auto result_0 = h3_2_generated_compute(lane_0_h3_1);
  set_at<0, 256, 32>(whole_result, result_0);

  hw_uint<160> lane_1_h3_1;
  set_at<0, 160, 160>(lane_1_h3_1, h3_1.extract<160, 319>());
  auto result_1 = h3_2_generated_compute(lane_1_h3_1);
  set_at<32, 256, 32>(whole_result, result_1);

  hw_uint<160> lane_2_h3_1;
  set_at<0, 160, 160>(lane_2_h3_1, h3_1.extract<320, 479>());
  auto result_2 = h3_2_generated_compute(lane_2_h3_1);
  set_at<64, 256, 32>(whole_result, result_2);

  hw_uint<160> lane_3_h3_1;
  set_at<0, 160, 160>(lane_3_h3_1, h3_1.extract<480, 639>());
  auto result_3 = h3_2_generated_compute(lane_3_h3_1);
  set_at<96, 256, 32>(whole_result, result_3);

  hw_uint<160> lane_4_h3_1;
  set_at<0, 160, 160>(lane_4_h3_1, h3_1.extract<640, 799>());
  auto result_4 = h3_2_generated_compute(lane_4_h3_1);
  set_at<128, 256, 32>(whole_result, result_4);

  hw_uint<160> lane_5_h3_1;
  set_at<0, 160, 160>(lane_5_h3_1, h3_1.extract<800, 959>());
  auto result_5 = h3_2_generated_compute(lane_5_h3_1);
  set_at<160, 256, 32>(whole_result, result_5);

  hw_uint<160> lane_6_h3_1;
  set_at<0, 160, 160>(lane_6_h3_1, h3_1.extract<960, 1119>());
  auto result_6 = h3_2_generated_compute(lane_6_h3_1);
  set_at<192, 256, 32>(whole_result, result_6);

  hw_uint<160> lane_7_h3_1;
  set_at<0, 160, 160>(lane_7_h3_1, h3_1.extract<1120, 1279>());
  auto result_7 = h3_2_generated_compute(lane_7_h3_1);
  set_at<224, 256, 32>(whole_result, result_7);
  return whole_result;
}

  // h3_3_update_0 unroll factor: 8
hw_uint<256>  h3_3_generated_compute_unrolled_8(hw_uint<1280>& h3_2) {
  hw_uint<256> whole_result;

  hw_uint<160> lane_0_h3_2;
  set_at<0, 160, 160>(lane_0_h3_2, h3_2.extract<0, 159>());
  auto result_0 = h3_3_generated_compute(lane_0_h3_2);
  set_at<0, 256, 32>(whole_result, result_0);

  hw_uint<160> lane_1_h3_2;
  set_at<0, 160, 160>(lane_1_h3_2, h3_2.extract<160, 319>());
  auto result_1 = h3_3_generated_compute(lane_1_h3_2);
  set_at<32, 256, 32>(whole_result, result_1);

  hw_uint<160> lane_2_h3_2;
  set_at<0, 160, 160>(lane_2_h3_2, h3_2.extract<320, 479>());
  auto result_2 = h3_3_generated_compute(lane_2_h3_2);
  set_at<64, 256, 32>(whole_result, result_2);

  hw_uint<160> lane_3_h3_2;
  set_at<0, 160, 160>(lane_3_h3_2, h3_2.extract<480, 639>());
  auto result_3 = h3_3_generated_compute(lane_3_h3_2);
  set_at<96, 256, 32>(whole_result, result_3);

  hw_uint<160> lane_4_h3_2;
  set_at<0, 160, 160>(lane_4_h3_2, h3_2.extract<640, 799>());
  auto result_4 = h3_3_generated_compute(lane_4_h3_2);
  set_at<128, 256, 32>(whole_result, result_4);

  hw_uint<160> lane_5_h3_2;
  set_at<0, 160, 160>(lane_5_h3_2, h3_2.extract<800, 959>());
  auto result_5 = h3_3_generated_compute(lane_5_h3_2);
  set_at<160, 256, 32>(whole_result, result_5);

  hw_uint<160> lane_6_h3_2;
  set_at<0, 160, 160>(lane_6_h3_2, h3_2.extract<960, 1119>());
  auto result_6 = h3_3_generated_compute(lane_6_h3_2);
  set_at<192, 256, 32>(whole_result, result_6);

  hw_uint<160> lane_7_h3_2;
  set_at<0, 160, 160>(lane_7_h3_2, h3_2.extract<1120, 1279>());
  auto result_7 = h3_3_generated_compute(lane_7_h3_2);
  set_at<224, 256, 32>(whole_result, result_7);
  return whole_result;
}

  // h3_4_update_0 unroll factor: 8
hw_uint<256>  h3_4_generated_compute_unrolled_8(hw_uint<1280>& h3_3) {
  hw_uint<256> whole_result;

  hw_uint<160> lane_0_h3_3;
  set_at<0, 160, 160>(lane_0_h3_3, h3_3.extract<0, 159>());
  auto result_0 = h3_4_generated_compute(lane_0_h3_3);
  set_at<0, 256, 32>(whole_result, result_0);

  hw_uint<160> lane_1_h3_3;
  set_at<0, 160, 160>(lane_1_h3_3, h3_3.extract<160, 319>());
  auto result_1 = h3_4_generated_compute(lane_1_h3_3);
  set_at<32, 256, 32>(whole_result, result_1);

  hw_uint<160> lane_2_h3_3;
  set_at<0, 160, 160>(lane_2_h3_3, h3_3.extract<320, 479>());
  auto result_2 = h3_4_generated_compute(lane_2_h3_3);
  set_at<64, 256, 32>(whole_result, result_2);

  hw_uint<160> lane_3_h3_3;
  set_at<0, 160, 160>(lane_3_h3_3, h3_3.extract<480, 639>());
  auto result_3 = h3_4_generated_compute(lane_3_h3_3);
  set_at<96, 256, 32>(whole_result, result_3);

  hw_uint<160> lane_4_h3_3;
  set_at<0, 160, 160>(lane_4_h3_3, h3_3.extract<640, 799>());
  auto result_4 = h3_4_generated_compute(lane_4_h3_3);
  set_at<128, 256, 32>(whole_result, result_4);

  hw_uint<160> lane_5_h3_3;
  set_at<0, 160, 160>(lane_5_h3_3, h3_3.extract<800, 959>());
  auto result_5 = h3_4_generated_compute(lane_5_h3_3);
  set_at<160, 256, 32>(whole_result, result_5);

  hw_uint<160> lane_6_h3_3;
  set_at<0, 160, 160>(lane_6_h3_3, h3_3.extract<960, 1119>());
  auto result_6 = h3_4_generated_compute(lane_6_h3_3);
  set_at<192, 256, 32>(whole_result, result_6);

  hw_uint<160> lane_7_h3_3;
  set_at<0, 160, 160>(lane_7_h3_3, h3_3.extract<1120, 1279>());
  auto result_7 = h3_4_generated_compute(lane_7_h3_3);
  set_at<224, 256, 32>(whole_result, result_7);
  return whole_result;
}

  // h3_5_update_0 unroll factor: 8
hw_uint<256>  h3_5_generated_compute_unrolled_8(hw_uint<1280>& h3_4) {
  hw_uint<256> whole_result;

  hw_uint<160> lane_0_h3_4;
  set_at<0, 160, 160>(lane_0_h3_4, h3_4.extract<0, 159>());
  auto result_0 = h3_5_generated_compute(lane_0_h3_4);
  set_at<0, 256, 32>(whole_result, result_0);

  hw_uint<160> lane_1_h3_4;
  set_at<0, 160, 160>(lane_1_h3_4, h3_4.extract<160, 319>());
  auto result_1 = h3_5_generated_compute(lane_1_h3_4);
  set_at<32, 256, 32>(whole_result, result_1);

  hw_uint<160> lane_2_h3_4;
  set_at<0, 160, 160>(lane_2_h3_4, h3_4.extract<320, 479>());
  auto result_2 = h3_5_generated_compute(lane_2_h3_4);
  set_at<64, 256, 32>(whole_result, result_2);

  hw_uint<160> lane_3_h3_4;
  set_at<0, 160, 160>(lane_3_h3_4, h3_4.extract<480, 639>());
  auto result_3 = h3_5_generated_compute(lane_3_h3_4);
  set_at<96, 256, 32>(whole_result, result_3);

  hw_uint<160> lane_4_h3_4;
  set_at<0, 160, 160>(lane_4_h3_4, h3_4.extract<640, 799>());
  auto result_4 = h3_5_generated_compute(lane_4_h3_4);
  set_at<128, 256, 32>(whole_result, result_4);

  hw_uint<160> lane_5_h3_4;
  set_at<0, 160, 160>(lane_5_h3_4, h3_4.extract<800, 959>());
  auto result_5 = h3_5_generated_compute(lane_5_h3_4);
  set_at<160, 256, 32>(whole_result, result_5);

  hw_uint<160> lane_6_h3_4;
  set_at<0, 160, 160>(lane_6_h3_4, h3_4.extract<960, 1119>());
  auto result_6 = h3_5_generated_compute(lane_6_h3_4);
  set_at<192, 256, 32>(whole_result, result_6);

  hw_uint<160> lane_7_h3_4;
  set_at<0, 160, 160>(lane_7_h3_4, h3_4.extract<1120, 1279>());
  auto result_7 = h3_5_generated_compute(lane_7_h3_4);
  set_at<224, 256, 32>(whole_result, result_7);
  return whole_result;
}

  // h3_6_update_0 unroll factor: 8
hw_uint<256>  h3_6_generated_compute_unrolled_8(hw_uint<1280>& h3_5) {
  hw_uint<256> whole_result;

  hw_uint<160> lane_0_h3_5;
  set_at<0, 160, 160>(lane_0_h3_5, h3_5.extract<0, 159>());
  auto result_0 = h3_6_generated_compute(lane_0_h3_5);
  set_at<0, 256, 32>(whole_result, result_0);

  hw_uint<160> lane_1_h3_5;
  set_at<0, 160, 160>(lane_1_h3_5, h3_5.extract<160, 319>());
  auto result_1 = h3_6_generated_compute(lane_1_h3_5);
  set_at<32, 256, 32>(whole_result, result_1);

  hw_uint<160> lane_2_h3_5;
  set_at<0, 160, 160>(lane_2_h3_5, h3_5.extract<320, 479>());
  auto result_2 = h3_6_generated_compute(lane_2_h3_5);
  set_at<64, 256, 32>(whole_result, result_2);

  hw_uint<160> lane_3_h3_5;
  set_at<0, 160, 160>(lane_3_h3_5, h3_5.extract<480, 639>());
  auto result_3 = h3_6_generated_compute(lane_3_h3_5);
  set_at<96, 256, 32>(whole_result, result_3);

  hw_uint<160> lane_4_h3_5;
  set_at<0, 160, 160>(lane_4_h3_5, h3_5.extract<640, 799>());
  auto result_4 = h3_6_generated_compute(lane_4_h3_5);
  set_at<128, 256, 32>(whole_result, result_4);

  hw_uint<160> lane_5_h3_5;
  set_at<0, 160, 160>(lane_5_h3_5, h3_5.extract<800, 959>());
  auto result_5 = h3_6_generated_compute(lane_5_h3_5);
  set_at<160, 256, 32>(whole_result, result_5);

  hw_uint<160> lane_6_h3_5;
  set_at<0, 160, 160>(lane_6_h3_5, h3_5.extract<960, 1119>());
  auto result_6 = h3_6_generated_compute(lane_6_h3_5);
  set_at<192, 256, 32>(whole_result, result_6);

  hw_uint<160> lane_7_h3_5;
  set_at<0, 160, 160>(lane_7_h3_5, h3_5.extract<1120, 1279>());
  auto result_7 = h3_6_generated_compute(lane_7_h3_5);
  set_at<224, 256, 32>(whole_result, result_7);
  return whole_result;
}

  // h3_7_update_0 unroll factor: 8
hw_uint<256>  h3_7_generated_compute_unrolled_8(hw_uint<1280>& h3_6) {
  hw_uint<256> whole_result;

  hw_uint<160> lane_0_h3_6;
  set_at<0, 160, 160>(lane_0_h3_6, h3_6.extract<0, 159>());
  auto result_0 = h3_7_generated_compute(lane_0_h3_6);
  set_at<0, 256, 32>(whole_result, result_0);

  hw_uint<160> lane_1_h3_6;
  set_at<0, 160, 160>(lane_1_h3_6, h3_6.extract<160, 319>());
  auto result_1 = h3_7_generated_compute(lane_1_h3_6);
  set_at<32, 256, 32>(whole_result, result_1);

  hw_uint<160> lane_2_h3_6;
  set_at<0, 160, 160>(lane_2_h3_6, h3_6.extract<320, 479>());
  auto result_2 = h3_7_generated_compute(lane_2_h3_6);
  set_at<64, 256, 32>(whole_result, result_2);

  hw_uint<160> lane_3_h3_6;
  set_at<0, 160, 160>(lane_3_h3_6, h3_6.extract<480, 639>());
  auto result_3 = h3_7_generated_compute(lane_3_h3_6);
  set_at<96, 256, 32>(whole_result, result_3);

  hw_uint<160> lane_4_h3_6;
  set_at<0, 160, 160>(lane_4_h3_6, h3_6.extract<640, 799>());
  auto result_4 = h3_7_generated_compute(lane_4_h3_6);
  set_at<128, 256, 32>(whole_result, result_4);

  hw_uint<160> lane_5_h3_6;
  set_at<0, 160, 160>(lane_5_h3_6, h3_6.extract<800, 959>());
  auto result_5 = h3_7_generated_compute(lane_5_h3_6);
  set_at<160, 256, 32>(whole_result, result_5);

  hw_uint<160> lane_6_h3_6;
  set_at<0, 160, 160>(lane_6_h3_6, h3_6.extract<960, 1119>());
  auto result_6 = h3_7_generated_compute(lane_6_h3_6);
  set_at<192, 256, 32>(whole_result, result_6);

  hw_uint<160> lane_7_h3_6;
  set_at<0, 160, 160>(lane_7_h3_6, h3_6.extract<1120, 1279>());
  auto result_7 = h3_7_generated_compute(lane_7_h3_6);
  set_at<224, 256, 32>(whole_result, result_7);
  return whole_result;
}

  // h3_8_update_0 unroll factor: 8
hw_uint<256>  h3_8_generated_compute_unrolled_8(hw_uint<1280>& h3_7) {
  hw_uint<256> whole_result;

  hw_uint<160> lane_0_h3_7;
  set_at<0, 160, 160>(lane_0_h3_7, h3_7.extract<0, 159>());
  auto result_0 = h3_8_generated_compute(lane_0_h3_7);
  set_at<0, 256, 32>(whole_result, result_0);

  hw_uint<160> lane_1_h3_7;
  set_at<0, 160, 160>(lane_1_h3_7, h3_7.extract<160, 319>());
  auto result_1 = h3_8_generated_compute(lane_1_h3_7);
  set_at<32, 256, 32>(whole_result, result_1);

  hw_uint<160> lane_2_h3_7;
  set_at<0, 160, 160>(lane_2_h3_7, h3_7.extract<320, 479>());
  auto result_2 = h3_8_generated_compute(lane_2_h3_7);
  set_at<64, 256, 32>(whole_result, result_2);

  hw_uint<160> lane_3_h3_7;
  set_at<0, 160, 160>(lane_3_h3_7, h3_7.extract<480, 639>());
  auto result_3 = h3_8_generated_compute(lane_3_h3_7);
  set_at<96, 256, 32>(whole_result, result_3);

  hw_uint<160> lane_4_h3_7;
  set_at<0, 160, 160>(lane_4_h3_7, h3_7.extract<640, 799>());
  auto result_4 = h3_8_generated_compute(lane_4_h3_7);
  set_at<128, 256, 32>(whole_result, result_4);

  hw_uint<160> lane_5_h3_7;
  set_at<0, 160, 160>(lane_5_h3_7, h3_7.extract<800, 959>());
  auto result_5 = h3_8_generated_compute(lane_5_h3_7);
  set_at<160, 256, 32>(whole_result, result_5);

  hw_uint<160> lane_6_h3_7;
  set_at<0, 160, 160>(lane_6_h3_7, h3_7.extract<960, 1119>());
  auto result_6 = h3_8_generated_compute(lane_6_h3_7);
  set_at<192, 256, 32>(whole_result, result_6);

  hw_uint<160> lane_7_h3_7;
  set_at<0, 160, 160>(lane_7_h3_7, h3_7.extract<1120, 1279>());
  auto result_7 = h3_8_generated_compute(lane_7_h3_7);
  set_at<224, 256, 32>(whole_result, result_7);
  return whole_result;
}

  // h3_9_update_0 unroll factor: 8
hw_uint<256>  h3_9_generated_compute_unrolled_8(hw_uint<1280>& h3_8) {
  hw_uint<256> whole_result;

  hw_uint<160> lane_0_h3_8;
  set_at<0, 160, 160>(lane_0_h3_8, h3_8.extract<0, 159>());
  auto result_0 = h3_9_generated_compute(lane_0_h3_8);
  set_at<0, 256, 32>(whole_result, result_0);

  hw_uint<160> lane_1_h3_8;
  set_at<0, 160, 160>(lane_1_h3_8, h3_8.extract<160, 319>());
  auto result_1 = h3_9_generated_compute(lane_1_h3_8);
  set_at<32, 256, 32>(whole_result, result_1);

  hw_uint<160> lane_2_h3_8;
  set_at<0, 160, 160>(lane_2_h3_8, h3_8.extract<320, 479>());
  auto result_2 = h3_9_generated_compute(lane_2_h3_8);
  set_at<64, 256, 32>(whole_result, result_2);

  hw_uint<160> lane_3_h3_8;
  set_at<0, 160, 160>(lane_3_h3_8, h3_8.extract<480, 639>());
  auto result_3 = h3_9_generated_compute(lane_3_h3_8);
  set_at<96, 256, 32>(whole_result, result_3);

  hw_uint<160> lane_4_h3_8;
  set_at<0, 160, 160>(lane_4_h3_8, h3_8.extract<640, 799>());
  auto result_4 = h3_9_generated_compute(lane_4_h3_8);
  set_at<128, 256, 32>(whole_result, result_4);

  hw_uint<160> lane_5_h3_8;
  set_at<0, 160, 160>(lane_5_h3_8, h3_8.extract<800, 959>());
  auto result_5 = h3_9_generated_compute(lane_5_h3_8);
  set_at<160, 256, 32>(whole_result, result_5);

  hw_uint<160> lane_6_h3_8;
  set_at<0, 160, 160>(lane_6_h3_8, h3_8.extract<960, 1119>());
  auto result_6 = h3_9_generated_compute(lane_6_h3_8);
  set_at<192, 256, 32>(whole_result, result_6);

  hw_uint<160> lane_7_h3_8;
  set_at<0, 160, 160>(lane_7_h3_8, h3_8.extract<1120, 1279>());
  auto result_7 = h3_9_generated_compute(lane_7_h3_8);
  set_at<224, 256, 32>(whole_result, result_7);
  return whole_result;
}

  // h10_1_300MHz_8_update_0 unroll factor: 8
hw_uint<256>  h10_1_300MHz_8_generated_compute_unrolled_8(hw_uint<256>& h3_9) {
  hw_uint<256> whole_result;

  hw_uint<32> lane_0_h3_9;
  set_at<0, 32, 32>(lane_0_h3_9, h3_9.extract<0, 31>());
  auto result_0 = h10_1_300MHz_8_generated_compute(lane_0_h3_9);
  set_at<0, 256, 32>(whole_result, result_0);

  hw_uint<32> lane_1_h3_9;
  set_at<0, 32, 32>(lane_1_h3_9, h3_9.extract<32, 63>());
  auto result_1 = h10_1_300MHz_8_generated_compute(lane_1_h3_9);
  set_at<32, 256, 32>(whole_result, result_1);

  hw_uint<32> lane_2_h3_9;
  set_at<0, 32, 32>(lane_2_h3_9, h3_9.extract<64, 95>());
  auto result_2 = h10_1_300MHz_8_generated_compute(lane_2_h3_9);
  set_at<64, 256, 32>(whole_result, result_2);

  hw_uint<32> lane_3_h3_9;
  set_at<0, 32, 32>(lane_3_h3_9, h3_9.extract<96, 127>());
  auto result_3 = h10_1_300MHz_8_generated_compute(lane_3_h3_9);
  set_at<96, 256, 32>(whole_result, result_3);

  hw_uint<32> lane_4_h3_9;
  set_at<0, 32, 32>(lane_4_h3_9, h3_9.extract<128, 159>());
  auto result_4 = h10_1_300MHz_8_generated_compute(lane_4_h3_9);
  set_at<128, 256, 32>(whole_result, result_4);

  hw_uint<32> lane_5_h3_9;
  set_at<0, 32, 32>(lane_5_h3_9, h3_9.extract<160, 191>());
  auto result_5 = h10_1_300MHz_8_generated_compute(lane_5_h3_9);
  set_at<160, 256, 32>(whole_result, result_5);

  hw_uint<32> lane_6_h3_9;
  set_at<0, 32, 32>(lane_6_h3_9, h3_9.extract<192, 223>());
  auto result_6 = h10_1_300MHz_8_generated_compute(lane_6_h3_9);
  set_at<192, 256, 32>(whole_result, result_6);

  hw_uint<32> lane_7_h3_9;
  set_at<0, 32, 32>(lane_7_h3_9, h3_9.extract<224, 255>());
  auto result_7 = h10_1_300MHz_8_generated_compute(lane_7_h3_9);
  set_at<224, 256, 32>(whole_result, result_7);
  return whole_result;
}

