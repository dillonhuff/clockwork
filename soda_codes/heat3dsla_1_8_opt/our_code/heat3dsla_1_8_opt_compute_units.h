#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<32> in_cc_generated_compute(hw_uint<32*1> in) {
  return uint32_t(to_bits(to_float(in.get<32, 0>())));
}

hw_uint<32> h3_0_generated_compute(hw_uint<32*7> in_cc) {
  return uint32_t(to_bits(((((((((((((float)0.125) * to_float(in_cc.get<32, 6>())) + (((float)-0.125) * to_float(in_cc.get<32, 3>()))) + (((float)0.125) * to_float(in_cc.get<32, 0>()))) + (((float)0.125) * to_float(in_cc.get<32, 5>()))) + (((float)-0.125) * to_float(in_cc.get<32, 3>()))) + (((float)0.125) * to_float(in_cc.get<32, 1>()))) + (((float)0.125) * to_float(in_cc.get<32, 4>()))) + (((float)-0.125) * to_float(in_cc.get<32, 3>()))) + (((float)0.125) * to_float(in_cc.get<32, 2>()))) + to_float(in_cc.get<32, 3>()))));
}

hw_uint<32> heat3dsla_1_8_generated_compute(hw_uint<32*1> h3_0) {
  return uint32_t(to_bits(to_float(h3_0.get<32, 0>())));
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
hw_uint<256>  h3_0_generated_compute_unrolled_8(hw_uint<1792>& in_cc) {
  hw_uint<256> whole_result;

  hw_uint<224> lane_0_in_cc;
  set_at<0, 224, 224>(lane_0_in_cc, in_cc.extract<0, 223>());
  auto result_0 = h3_0_generated_compute(lane_0_in_cc);
  set_at<0, 256, 32>(whole_result, result_0);

  hw_uint<224> lane_1_in_cc;
  set_at<0, 224, 224>(lane_1_in_cc, in_cc.extract<224, 447>());
  auto result_1 = h3_0_generated_compute(lane_1_in_cc);
  set_at<32, 256, 32>(whole_result, result_1);

  hw_uint<224> lane_2_in_cc;
  set_at<0, 224, 224>(lane_2_in_cc, in_cc.extract<448, 671>());
  auto result_2 = h3_0_generated_compute(lane_2_in_cc);
  set_at<64, 256, 32>(whole_result, result_2);

  hw_uint<224> lane_3_in_cc;
  set_at<0, 224, 224>(lane_3_in_cc, in_cc.extract<672, 895>());
  auto result_3 = h3_0_generated_compute(lane_3_in_cc);
  set_at<96, 256, 32>(whole_result, result_3);

  hw_uint<224> lane_4_in_cc;
  set_at<0, 224, 224>(lane_4_in_cc, in_cc.extract<896, 1119>());
  auto result_4 = h3_0_generated_compute(lane_4_in_cc);
  set_at<128, 256, 32>(whole_result, result_4);

  hw_uint<224> lane_5_in_cc;
  set_at<0, 224, 224>(lane_5_in_cc, in_cc.extract<1120, 1343>());
  auto result_5 = h3_0_generated_compute(lane_5_in_cc);
  set_at<160, 256, 32>(whole_result, result_5);

  hw_uint<224> lane_6_in_cc;
  set_at<0, 224, 224>(lane_6_in_cc, in_cc.extract<1344, 1567>());
  auto result_6 = h3_0_generated_compute(lane_6_in_cc);
  set_at<192, 256, 32>(whole_result, result_6);

  hw_uint<224> lane_7_in_cc;
  set_at<0, 224, 224>(lane_7_in_cc, in_cc.extract<1568, 1791>());
  auto result_7 = h3_0_generated_compute(lane_7_in_cc);
  set_at<224, 256, 32>(whole_result, result_7);
  return whole_result;
}

  // heat3dsla_1_8_update_0 unroll factor: 8
hw_uint<256>  heat3dsla_1_8_generated_compute_unrolled_8(hw_uint<256>& h3_0) {
  hw_uint<256> whole_result;

  hw_uint<32> lane_0_h3_0;
  set_at<0, 32, 32>(lane_0_h3_0, h3_0.extract<0, 31>());
  auto result_0 = heat3dsla_1_8_generated_compute(lane_0_h3_0);
  set_at<0, 256, 32>(whole_result, result_0);

  hw_uint<32> lane_1_h3_0;
  set_at<0, 32, 32>(lane_1_h3_0, h3_0.extract<32, 63>());
  auto result_1 = heat3dsla_1_8_generated_compute(lane_1_h3_0);
  set_at<32, 256, 32>(whole_result, result_1);

  hw_uint<32> lane_2_h3_0;
  set_at<0, 32, 32>(lane_2_h3_0, h3_0.extract<64, 95>());
  auto result_2 = heat3dsla_1_8_generated_compute(lane_2_h3_0);
  set_at<64, 256, 32>(whole_result, result_2);

  hw_uint<32> lane_3_h3_0;
  set_at<0, 32, 32>(lane_3_h3_0, h3_0.extract<96, 127>());
  auto result_3 = heat3dsla_1_8_generated_compute(lane_3_h3_0);
  set_at<96, 256, 32>(whole_result, result_3);

  hw_uint<32> lane_4_h3_0;
  set_at<0, 32, 32>(lane_4_h3_0, h3_0.extract<128, 159>());
  auto result_4 = heat3dsla_1_8_generated_compute(lane_4_h3_0);
  set_at<128, 256, 32>(whole_result, result_4);

  hw_uint<32> lane_5_h3_0;
  set_at<0, 32, 32>(lane_5_h3_0, h3_0.extract<160, 191>());
  auto result_5 = heat3dsla_1_8_generated_compute(lane_5_h3_0);
  set_at<160, 256, 32>(whole_result, result_5);

  hw_uint<32> lane_6_h3_0;
  set_at<0, 32, 32>(lane_6_h3_0, h3_0.extract<192, 223>());
  auto result_6 = heat3dsla_1_8_generated_compute(lane_6_h3_0);
  set_at<192, 256, 32>(whole_result, result_6);

  hw_uint<32> lane_7_h3_0;
  set_at<0, 32, 32>(lane_7_h3_0, h3_0.extract<224, 255>());
  auto result_7 = heat3dsla_1_8_generated_compute(lane_7_h3_0);
  set_at<224, 256, 32>(whole_result, result_7);
  return whole_result;
}

