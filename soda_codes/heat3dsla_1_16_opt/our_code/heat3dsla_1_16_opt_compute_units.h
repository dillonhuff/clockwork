#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<32> in_cc_generated_compute(hw_uint<32*1> in) {
  return uint32_t(to_bits(to_float(in.get<32, 0>())));
}

hw_uint<32> h3_0_generated_compute(hw_uint<32*7> in_cc) {
  return uint32_t(to_bits(((((((((((((float)0.125) * to_float(in_cc.get<32, 6>())) + (((float)-0.125) * to_float(in_cc.get<32, 3>()))) + (((float)0.125) * to_float(in_cc.get<32, 0>()))) + (((float)0.125) * to_float(in_cc.get<32, 5>()))) + (((float)-0.125) * to_float(in_cc.get<32, 3>()))) + (((float)0.125) * to_float(in_cc.get<32, 1>()))) + (((float)0.125) * to_float(in_cc.get<32, 4>()))) + (((float)-0.125) * to_float(in_cc.get<32, 3>()))) + (((float)0.125) * to_float(in_cc.get<32, 2>()))) + to_float(in_cc.get<32, 3>()))));
}

hw_uint<32> heat3dsla_1_16_generated_compute(hw_uint<32*1> h3_0) {
  return uint32_t(to_bits(to_float(h3_0.get<32, 0>())));
}



// Compute unit banks...
  // in_cc_update_0 unroll factor: 16
hw_uint<512>  in_cc_generated_compute_unrolled_16(hw_uint<512>& in) {
  hw_uint<512> whole_result;

  hw_uint<32> lane_0_in;
  set_at<0, 32, 32>(lane_0_in, in.extract<0, 31>());
  auto result_0 = in_cc_generated_compute(lane_0_in);
  set_at<0, 512, 32>(whole_result, result_0);

  hw_uint<32> lane_1_in;
  set_at<0, 32, 32>(lane_1_in, in.extract<32, 63>());
  auto result_1 = in_cc_generated_compute(lane_1_in);
  set_at<32, 512, 32>(whole_result, result_1);

  hw_uint<32> lane_2_in;
  set_at<0, 32, 32>(lane_2_in, in.extract<64, 95>());
  auto result_2 = in_cc_generated_compute(lane_2_in);
  set_at<64, 512, 32>(whole_result, result_2);

  hw_uint<32> lane_3_in;
  set_at<0, 32, 32>(lane_3_in, in.extract<96, 127>());
  auto result_3 = in_cc_generated_compute(lane_3_in);
  set_at<96, 512, 32>(whole_result, result_3);

  hw_uint<32> lane_4_in;
  set_at<0, 32, 32>(lane_4_in, in.extract<128, 159>());
  auto result_4 = in_cc_generated_compute(lane_4_in);
  set_at<128, 512, 32>(whole_result, result_4);

  hw_uint<32> lane_5_in;
  set_at<0, 32, 32>(lane_5_in, in.extract<160, 191>());
  auto result_5 = in_cc_generated_compute(lane_5_in);
  set_at<160, 512, 32>(whole_result, result_5);

  hw_uint<32> lane_6_in;
  set_at<0, 32, 32>(lane_6_in, in.extract<192, 223>());
  auto result_6 = in_cc_generated_compute(lane_6_in);
  set_at<192, 512, 32>(whole_result, result_6);

  hw_uint<32> lane_7_in;
  set_at<0, 32, 32>(lane_7_in, in.extract<224, 255>());
  auto result_7 = in_cc_generated_compute(lane_7_in);
  set_at<224, 512, 32>(whole_result, result_7);

  hw_uint<32> lane_8_in;
  set_at<0, 32, 32>(lane_8_in, in.extract<256, 287>());
  auto result_8 = in_cc_generated_compute(lane_8_in);
  set_at<256, 512, 32>(whole_result, result_8);

  hw_uint<32> lane_9_in;
  set_at<0, 32, 32>(lane_9_in, in.extract<288, 319>());
  auto result_9 = in_cc_generated_compute(lane_9_in);
  set_at<288, 512, 32>(whole_result, result_9);

  hw_uint<32> lane_10_in;
  set_at<0, 32, 32>(lane_10_in, in.extract<320, 351>());
  auto result_10 = in_cc_generated_compute(lane_10_in);
  set_at<320, 512, 32>(whole_result, result_10);

  hw_uint<32> lane_11_in;
  set_at<0, 32, 32>(lane_11_in, in.extract<352, 383>());
  auto result_11 = in_cc_generated_compute(lane_11_in);
  set_at<352, 512, 32>(whole_result, result_11);

  hw_uint<32> lane_12_in;
  set_at<0, 32, 32>(lane_12_in, in.extract<384, 415>());
  auto result_12 = in_cc_generated_compute(lane_12_in);
  set_at<384, 512, 32>(whole_result, result_12);

  hw_uint<32> lane_13_in;
  set_at<0, 32, 32>(lane_13_in, in.extract<416, 447>());
  auto result_13 = in_cc_generated_compute(lane_13_in);
  set_at<416, 512, 32>(whole_result, result_13);

  hw_uint<32> lane_14_in;
  set_at<0, 32, 32>(lane_14_in, in.extract<448, 479>());
  auto result_14 = in_cc_generated_compute(lane_14_in);
  set_at<448, 512, 32>(whole_result, result_14);

  hw_uint<32> lane_15_in;
  set_at<0, 32, 32>(lane_15_in, in.extract<480, 511>());
  auto result_15 = in_cc_generated_compute(lane_15_in);
  set_at<480, 512, 32>(whole_result, result_15);
  return whole_result;
}

  // h3_0_update_0 unroll factor: 16
hw_uint<512>  h3_0_generated_compute_unrolled_16(hw_uint<3584>& in_cc) {
  hw_uint<512> whole_result;

  hw_uint<224> lane_0_in_cc;
  set_at<0, 224, 224>(lane_0_in_cc, in_cc.extract<0, 223>());
  auto result_0 = h3_0_generated_compute(lane_0_in_cc);
  set_at<0, 512, 32>(whole_result, result_0);

  hw_uint<224> lane_1_in_cc;
  set_at<0, 224, 224>(lane_1_in_cc, in_cc.extract<224, 447>());
  auto result_1 = h3_0_generated_compute(lane_1_in_cc);
  set_at<32, 512, 32>(whole_result, result_1);

  hw_uint<224> lane_2_in_cc;
  set_at<0, 224, 224>(lane_2_in_cc, in_cc.extract<448, 671>());
  auto result_2 = h3_0_generated_compute(lane_2_in_cc);
  set_at<64, 512, 32>(whole_result, result_2);

  hw_uint<224> lane_3_in_cc;
  set_at<0, 224, 224>(lane_3_in_cc, in_cc.extract<672, 895>());
  auto result_3 = h3_0_generated_compute(lane_3_in_cc);
  set_at<96, 512, 32>(whole_result, result_3);

  hw_uint<224> lane_4_in_cc;
  set_at<0, 224, 224>(lane_4_in_cc, in_cc.extract<896, 1119>());
  auto result_4 = h3_0_generated_compute(lane_4_in_cc);
  set_at<128, 512, 32>(whole_result, result_4);

  hw_uint<224> lane_5_in_cc;
  set_at<0, 224, 224>(lane_5_in_cc, in_cc.extract<1120, 1343>());
  auto result_5 = h3_0_generated_compute(lane_5_in_cc);
  set_at<160, 512, 32>(whole_result, result_5);

  hw_uint<224> lane_6_in_cc;
  set_at<0, 224, 224>(lane_6_in_cc, in_cc.extract<1344, 1567>());
  auto result_6 = h3_0_generated_compute(lane_6_in_cc);
  set_at<192, 512, 32>(whole_result, result_6);

  hw_uint<224> lane_7_in_cc;
  set_at<0, 224, 224>(lane_7_in_cc, in_cc.extract<1568, 1791>());
  auto result_7 = h3_0_generated_compute(lane_7_in_cc);
  set_at<224, 512, 32>(whole_result, result_7);

  hw_uint<224> lane_8_in_cc;
  set_at<0, 224, 224>(lane_8_in_cc, in_cc.extract<1792, 2015>());
  auto result_8 = h3_0_generated_compute(lane_8_in_cc);
  set_at<256, 512, 32>(whole_result, result_8);

  hw_uint<224> lane_9_in_cc;
  set_at<0, 224, 224>(lane_9_in_cc, in_cc.extract<2016, 2239>());
  auto result_9 = h3_0_generated_compute(lane_9_in_cc);
  set_at<288, 512, 32>(whole_result, result_9);

  hw_uint<224> lane_10_in_cc;
  set_at<0, 224, 224>(lane_10_in_cc, in_cc.extract<2240, 2463>());
  auto result_10 = h3_0_generated_compute(lane_10_in_cc);
  set_at<320, 512, 32>(whole_result, result_10);

  hw_uint<224> lane_11_in_cc;
  set_at<0, 224, 224>(lane_11_in_cc, in_cc.extract<2464, 2687>());
  auto result_11 = h3_0_generated_compute(lane_11_in_cc);
  set_at<352, 512, 32>(whole_result, result_11);

  hw_uint<224> lane_12_in_cc;
  set_at<0, 224, 224>(lane_12_in_cc, in_cc.extract<2688, 2911>());
  auto result_12 = h3_0_generated_compute(lane_12_in_cc);
  set_at<384, 512, 32>(whole_result, result_12);

  hw_uint<224> lane_13_in_cc;
  set_at<0, 224, 224>(lane_13_in_cc, in_cc.extract<2912, 3135>());
  auto result_13 = h3_0_generated_compute(lane_13_in_cc);
  set_at<416, 512, 32>(whole_result, result_13);

  hw_uint<224> lane_14_in_cc;
  set_at<0, 224, 224>(lane_14_in_cc, in_cc.extract<3136, 3359>());
  auto result_14 = h3_0_generated_compute(lane_14_in_cc);
  set_at<448, 512, 32>(whole_result, result_14);

  hw_uint<224> lane_15_in_cc;
  set_at<0, 224, 224>(lane_15_in_cc, in_cc.extract<3360, 3583>());
  auto result_15 = h3_0_generated_compute(lane_15_in_cc);
  set_at<480, 512, 32>(whole_result, result_15);
  return whole_result;
}

  // heat3dsla_1_16_update_0 unroll factor: 16
hw_uint<512>  heat3dsla_1_16_generated_compute_unrolled_16(hw_uint<512>& h3_0) {
  hw_uint<512> whole_result;

  hw_uint<32> lane_0_h3_0;
  set_at<0, 32, 32>(lane_0_h3_0, h3_0.extract<0, 31>());
  auto result_0 = heat3dsla_1_16_generated_compute(lane_0_h3_0);
  set_at<0, 512, 32>(whole_result, result_0);

  hw_uint<32> lane_1_h3_0;
  set_at<0, 32, 32>(lane_1_h3_0, h3_0.extract<32, 63>());
  auto result_1 = heat3dsla_1_16_generated_compute(lane_1_h3_0);
  set_at<32, 512, 32>(whole_result, result_1);

  hw_uint<32> lane_2_h3_0;
  set_at<0, 32, 32>(lane_2_h3_0, h3_0.extract<64, 95>());
  auto result_2 = heat3dsla_1_16_generated_compute(lane_2_h3_0);
  set_at<64, 512, 32>(whole_result, result_2);

  hw_uint<32> lane_3_h3_0;
  set_at<0, 32, 32>(lane_3_h3_0, h3_0.extract<96, 127>());
  auto result_3 = heat3dsla_1_16_generated_compute(lane_3_h3_0);
  set_at<96, 512, 32>(whole_result, result_3);

  hw_uint<32> lane_4_h3_0;
  set_at<0, 32, 32>(lane_4_h3_0, h3_0.extract<128, 159>());
  auto result_4 = heat3dsla_1_16_generated_compute(lane_4_h3_0);
  set_at<128, 512, 32>(whole_result, result_4);

  hw_uint<32> lane_5_h3_0;
  set_at<0, 32, 32>(lane_5_h3_0, h3_0.extract<160, 191>());
  auto result_5 = heat3dsla_1_16_generated_compute(lane_5_h3_0);
  set_at<160, 512, 32>(whole_result, result_5);

  hw_uint<32> lane_6_h3_0;
  set_at<0, 32, 32>(lane_6_h3_0, h3_0.extract<192, 223>());
  auto result_6 = heat3dsla_1_16_generated_compute(lane_6_h3_0);
  set_at<192, 512, 32>(whole_result, result_6);

  hw_uint<32> lane_7_h3_0;
  set_at<0, 32, 32>(lane_7_h3_0, h3_0.extract<224, 255>());
  auto result_7 = heat3dsla_1_16_generated_compute(lane_7_h3_0);
  set_at<224, 512, 32>(whole_result, result_7);

  hw_uint<32> lane_8_h3_0;
  set_at<0, 32, 32>(lane_8_h3_0, h3_0.extract<256, 287>());
  auto result_8 = heat3dsla_1_16_generated_compute(lane_8_h3_0);
  set_at<256, 512, 32>(whole_result, result_8);

  hw_uint<32> lane_9_h3_0;
  set_at<0, 32, 32>(lane_9_h3_0, h3_0.extract<288, 319>());
  auto result_9 = heat3dsla_1_16_generated_compute(lane_9_h3_0);
  set_at<288, 512, 32>(whole_result, result_9);

  hw_uint<32> lane_10_h3_0;
  set_at<0, 32, 32>(lane_10_h3_0, h3_0.extract<320, 351>());
  auto result_10 = heat3dsla_1_16_generated_compute(lane_10_h3_0);
  set_at<320, 512, 32>(whole_result, result_10);

  hw_uint<32> lane_11_h3_0;
  set_at<0, 32, 32>(lane_11_h3_0, h3_0.extract<352, 383>());
  auto result_11 = heat3dsla_1_16_generated_compute(lane_11_h3_0);
  set_at<352, 512, 32>(whole_result, result_11);

  hw_uint<32> lane_12_h3_0;
  set_at<0, 32, 32>(lane_12_h3_0, h3_0.extract<384, 415>());
  auto result_12 = heat3dsla_1_16_generated_compute(lane_12_h3_0);
  set_at<384, 512, 32>(whole_result, result_12);

  hw_uint<32> lane_13_h3_0;
  set_at<0, 32, 32>(lane_13_h3_0, h3_0.extract<416, 447>());
  auto result_13 = heat3dsla_1_16_generated_compute(lane_13_h3_0);
  set_at<416, 512, 32>(whole_result, result_13);

  hw_uint<32> lane_14_h3_0;
  set_at<0, 32, 32>(lane_14_h3_0, h3_0.extract<448, 479>());
  auto result_14 = heat3dsla_1_16_generated_compute(lane_14_h3_0);
  set_at<448, 512, 32>(whole_result, result_14);

  hw_uint<32> lane_15_h3_0;
  set_at<0, 32, 32>(lane_15_h3_0, h3_0.extract<480, 511>());
  auto result_15 = heat3dsla_1_16_generated_compute(lane_15_h3_0);
  set_at<480, 512, 32>(whole_result, result_15);
  return whole_result;
}

