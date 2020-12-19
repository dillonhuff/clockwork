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

hw_uint<32> h10_32_300MHz_32_generated_compute(hw_uint<32*1> h3_9) {
  return uint32_t(to_bits(to_float(h3_9.get<32, 0>())));
}



// Compute unit banks...
  // in_cc_update_0 unroll factor: 32
hw_uint<1024>  in_cc_generated_compute_unrolled_32(hw_uint<1024>& in) {
  hw_uint<1024> whole_result;

  hw_uint<32> lane_0_in;
  set_at<0, 32, 32>(lane_0_in, in.extract<0, 31>());
  auto result_0 = in_cc_generated_compute(lane_0_in);
  set_at<0, 1024, 32>(whole_result, result_0);

  hw_uint<32> lane_1_in;
  set_at<0, 32, 32>(lane_1_in, in.extract<32, 63>());
  auto result_1 = in_cc_generated_compute(lane_1_in);
  set_at<32, 1024, 32>(whole_result, result_1);

  hw_uint<32> lane_2_in;
  set_at<0, 32, 32>(lane_2_in, in.extract<64, 95>());
  auto result_2 = in_cc_generated_compute(lane_2_in);
  set_at<64, 1024, 32>(whole_result, result_2);

  hw_uint<32> lane_3_in;
  set_at<0, 32, 32>(lane_3_in, in.extract<96, 127>());
  auto result_3 = in_cc_generated_compute(lane_3_in);
  set_at<96, 1024, 32>(whole_result, result_3);

  hw_uint<32> lane_4_in;
  set_at<0, 32, 32>(lane_4_in, in.extract<128, 159>());
  auto result_4 = in_cc_generated_compute(lane_4_in);
  set_at<128, 1024, 32>(whole_result, result_4);

  hw_uint<32> lane_5_in;
  set_at<0, 32, 32>(lane_5_in, in.extract<160, 191>());
  auto result_5 = in_cc_generated_compute(lane_5_in);
  set_at<160, 1024, 32>(whole_result, result_5);

  hw_uint<32> lane_6_in;
  set_at<0, 32, 32>(lane_6_in, in.extract<192, 223>());
  auto result_6 = in_cc_generated_compute(lane_6_in);
  set_at<192, 1024, 32>(whole_result, result_6);

  hw_uint<32> lane_7_in;
  set_at<0, 32, 32>(lane_7_in, in.extract<224, 255>());
  auto result_7 = in_cc_generated_compute(lane_7_in);
  set_at<224, 1024, 32>(whole_result, result_7);

  hw_uint<32> lane_8_in;
  set_at<0, 32, 32>(lane_8_in, in.extract<256, 287>());
  auto result_8 = in_cc_generated_compute(lane_8_in);
  set_at<256, 1024, 32>(whole_result, result_8);

  hw_uint<32> lane_9_in;
  set_at<0, 32, 32>(lane_9_in, in.extract<288, 319>());
  auto result_9 = in_cc_generated_compute(lane_9_in);
  set_at<288, 1024, 32>(whole_result, result_9);

  hw_uint<32> lane_10_in;
  set_at<0, 32, 32>(lane_10_in, in.extract<320, 351>());
  auto result_10 = in_cc_generated_compute(lane_10_in);
  set_at<320, 1024, 32>(whole_result, result_10);

  hw_uint<32> lane_11_in;
  set_at<0, 32, 32>(lane_11_in, in.extract<352, 383>());
  auto result_11 = in_cc_generated_compute(lane_11_in);
  set_at<352, 1024, 32>(whole_result, result_11);

  hw_uint<32> lane_12_in;
  set_at<0, 32, 32>(lane_12_in, in.extract<384, 415>());
  auto result_12 = in_cc_generated_compute(lane_12_in);
  set_at<384, 1024, 32>(whole_result, result_12);

  hw_uint<32> lane_13_in;
  set_at<0, 32, 32>(lane_13_in, in.extract<416, 447>());
  auto result_13 = in_cc_generated_compute(lane_13_in);
  set_at<416, 1024, 32>(whole_result, result_13);

  hw_uint<32> lane_14_in;
  set_at<0, 32, 32>(lane_14_in, in.extract<448, 479>());
  auto result_14 = in_cc_generated_compute(lane_14_in);
  set_at<448, 1024, 32>(whole_result, result_14);

  hw_uint<32> lane_15_in;
  set_at<0, 32, 32>(lane_15_in, in.extract<480, 511>());
  auto result_15 = in_cc_generated_compute(lane_15_in);
  set_at<480, 1024, 32>(whole_result, result_15);

  hw_uint<32> lane_16_in;
  set_at<0, 32, 32>(lane_16_in, in.extract<512, 543>());
  auto result_16 = in_cc_generated_compute(lane_16_in);
  set_at<512, 1024, 32>(whole_result, result_16);

  hw_uint<32> lane_17_in;
  set_at<0, 32, 32>(lane_17_in, in.extract<544, 575>());
  auto result_17 = in_cc_generated_compute(lane_17_in);
  set_at<544, 1024, 32>(whole_result, result_17);

  hw_uint<32> lane_18_in;
  set_at<0, 32, 32>(lane_18_in, in.extract<576, 607>());
  auto result_18 = in_cc_generated_compute(lane_18_in);
  set_at<576, 1024, 32>(whole_result, result_18);

  hw_uint<32> lane_19_in;
  set_at<0, 32, 32>(lane_19_in, in.extract<608, 639>());
  auto result_19 = in_cc_generated_compute(lane_19_in);
  set_at<608, 1024, 32>(whole_result, result_19);

  hw_uint<32> lane_20_in;
  set_at<0, 32, 32>(lane_20_in, in.extract<640, 671>());
  auto result_20 = in_cc_generated_compute(lane_20_in);
  set_at<640, 1024, 32>(whole_result, result_20);

  hw_uint<32> lane_21_in;
  set_at<0, 32, 32>(lane_21_in, in.extract<672, 703>());
  auto result_21 = in_cc_generated_compute(lane_21_in);
  set_at<672, 1024, 32>(whole_result, result_21);

  hw_uint<32> lane_22_in;
  set_at<0, 32, 32>(lane_22_in, in.extract<704, 735>());
  auto result_22 = in_cc_generated_compute(lane_22_in);
  set_at<704, 1024, 32>(whole_result, result_22);

  hw_uint<32> lane_23_in;
  set_at<0, 32, 32>(lane_23_in, in.extract<736, 767>());
  auto result_23 = in_cc_generated_compute(lane_23_in);
  set_at<736, 1024, 32>(whole_result, result_23);

  hw_uint<32> lane_24_in;
  set_at<0, 32, 32>(lane_24_in, in.extract<768, 799>());
  auto result_24 = in_cc_generated_compute(lane_24_in);
  set_at<768, 1024, 32>(whole_result, result_24);

  hw_uint<32> lane_25_in;
  set_at<0, 32, 32>(lane_25_in, in.extract<800, 831>());
  auto result_25 = in_cc_generated_compute(lane_25_in);
  set_at<800, 1024, 32>(whole_result, result_25);

  hw_uint<32> lane_26_in;
  set_at<0, 32, 32>(lane_26_in, in.extract<832, 863>());
  auto result_26 = in_cc_generated_compute(lane_26_in);
  set_at<832, 1024, 32>(whole_result, result_26);

  hw_uint<32> lane_27_in;
  set_at<0, 32, 32>(lane_27_in, in.extract<864, 895>());
  auto result_27 = in_cc_generated_compute(lane_27_in);
  set_at<864, 1024, 32>(whole_result, result_27);

  hw_uint<32> lane_28_in;
  set_at<0, 32, 32>(lane_28_in, in.extract<896, 927>());
  auto result_28 = in_cc_generated_compute(lane_28_in);
  set_at<896, 1024, 32>(whole_result, result_28);

  hw_uint<32> lane_29_in;
  set_at<0, 32, 32>(lane_29_in, in.extract<928, 959>());
  auto result_29 = in_cc_generated_compute(lane_29_in);
  set_at<928, 1024, 32>(whole_result, result_29);

  hw_uint<32> lane_30_in;
  set_at<0, 32, 32>(lane_30_in, in.extract<960, 991>());
  auto result_30 = in_cc_generated_compute(lane_30_in);
  set_at<960, 1024, 32>(whole_result, result_30);

  hw_uint<32> lane_31_in;
  set_at<0, 32, 32>(lane_31_in, in.extract<992, 1023>());
  auto result_31 = in_cc_generated_compute(lane_31_in);
  set_at<992, 1024, 32>(whole_result, result_31);
  return whole_result;
}

  // h3_0_update_0 unroll factor: 32
hw_uint<1024>  h3_0_generated_compute_unrolled_32(hw_uint<5120>& in_cc) {
  hw_uint<1024> whole_result;

  hw_uint<160> lane_0_in_cc;
  set_at<0, 160, 160>(lane_0_in_cc, in_cc.extract<0, 159>());
  auto result_0 = h3_0_generated_compute(lane_0_in_cc);
  set_at<0, 1024, 32>(whole_result, result_0);

  hw_uint<160> lane_1_in_cc;
  set_at<0, 160, 160>(lane_1_in_cc, in_cc.extract<160, 319>());
  auto result_1 = h3_0_generated_compute(lane_1_in_cc);
  set_at<32, 1024, 32>(whole_result, result_1);

  hw_uint<160> lane_2_in_cc;
  set_at<0, 160, 160>(lane_2_in_cc, in_cc.extract<320, 479>());
  auto result_2 = h3_0_generated_compute(lane_2_in_cc);
  set_at<64, 1024, 32>(whole_result, result_2);

  hw_uint<160> lane_3_in_cc;
  set_at<0, 160, 160>(lane_3_in_cc, in_cc.extract<480, 639>());
  auto result_3 = h3_0_generated_compute(lane_3_in_cc);
  set_at<96, 1024, 32>(whole_result, result_3);

  hw_uint<160> lane_4_in_cc;
  set_at<0, 160, 160>(lane_4_in_cc, in_cc.extract<640, 799>());
  auto result_4 = h3_0_generated_compute(lane_4_in_cc);
  set_at<128, 1024, 32>(whole_result, result_4);

  hw_uint<160> lane_5_in_cc;
  set_at<0, 160, 160>(lane_5_in_cc, in_cc.extract<800, 959>());
  auto result_5 = h3_0_generated_compute(lane_5_in_cc);
  set_at<160, 1024, 32>(whole_result, result_5);

  hw_uint<160> lane_6_in_cc;
  set_at<0, 160, 160>(lane_6_in_cc, in_cc.extract<960, 1119>());
  auto result_6 = h3_0_generated_compute(lane_6_in_cc);
  set_at<192, 1024, 32>(whole_result, result_6);

  hw_uint<160> lane_7_in_cc;
  set_at<0, 160, 160>(lane_7_in_cc, in_cc.extract<1120, 1279>());
  auto result_7 = h3_0_generated_compute(lane_7_in_cc);
  set_at<224, 1024, 32>(whole_result, result_7);

  hw_uint<160> lane_8_in_cc;
  set_at<0, 160, 160>(lane_8_in_cc, in_cc.extract<1280, 1439>());
  auto result_8 = h3_0_generated_compute(lane_8_in_cc);
  set_at<256, 1024, 32>(whole_result, result_8);

  hw_uint<160> lane_9_in_cc;
  set_at<0, 160, 160>(lane_9_in_cc, in_cc.extract<1440, 1599>());
  auto result_9 = h3_0_generated_compute(lane_9_in_cc);
  set_at<288, 1024, 32>(whole_result, result_9);

  hw_uint<160> lane_10_in_cc;
  set_at<0, 160, 160>(lane_10_in_cc, in_cc.extract<1600, 1759>());
  auto result_10 = h3_0_generated_compute(lane_10_in_cc);
  set_at<320, 1024, 32>(whole_result, result_10);

  hw_uint<160> lane_11_in_cc;
  set_at<0, 160, 160>(lane_11_in_cc, in_cc.extract<1760, 1919>());
  auto result_11 = h3_0_generated_compute(lane_11_in_cc);
  set_at<352, 1024, 32>(whole_result, result_11);

  hw_uint<160> lane_12_in_cc;
  set_at<0, 160, 160>(lane_12_in_cc, in_cc.extract<1920, 2079>());
  auto result_12 = h3_0_generated_compute(lane_12_in_cc);
  set_at<384, 1024, 32>(whole_result, result_12);

  hw_uint<160> lane_13_in_cc;
  set_at<0, 160, 160>(lane_13_in_cc, in_cc.extract<2080, 2239>());
  auto result_13 = h3_0_generated_compute(lane_13_in_cc);
  set_at<416, 1024, 32>(whole_result, result_13);

  hw_uint<160> lane_14_in_cc;
  set_at<0, 160, 160>(lane_14_in_cc, in_cc.extract<2240, 2399>());
  auto result_14 = h3_0_generated_compute(lane_14_in_cc);
  set_at<448, 1024, 32>(whole_result, result_14);

  hw_uint<160> lane_15_in_cc;
  set_at<0, 160, 160>(lane_15_in_cc, in_cc.extract<2400, 2559>());
  auto result_15 = h3_0_generated_compute(lane_15_in_cc);
  set_at<480, 1024, 32>(whole_result, result_15);

  hw_uint<160> lane_16_in_cc;
  set_at<0, 160, 160>(lane_16_in_cc, in_cc.extract<2560, 2719>());
  auto result_16 = h3_0_generated_compute(lane_16_in_cc);
  set_at<512, 1024, 32>(whole_result, result_16);

  hw_uint<160> lane_17_in_cc;
  set_at<0, 160, 160>(lane_17_in_cc, in_cc.extract<2720, 2879>());
  auto result_17 = h3_0_generated_compute(lane_17_in_cc);
  set_at<544, 1024, 32>(whole_result, result_17);

  hw_uint<160> lane_18_in_cc;
  set_at<0, 160, 160>(lane_18_in_cc, in_cc.extract<2880, 3039>());
  auto result_18 = h3_0_generated_compute(lane_18_in_cc);
  set_at<576, 1024, 32>(whole_result, result_18);

  hw_uint<160> lane_19_in_cc;
  set_at<0, 160, 160>(lane_19_in_cc, in_cc.extract<3040, 3199>());
  auto result_19 = h3_0_generated_compute(lane_19_in_cc);
  set_at<608, 1024, 32>(whole_result, result_19);

  hw_uint<160> lane_20_in_cc;
  set_at<0, 160, 160>(lane_20_in_cc, in_cc.extract<3200, 3359>());
  auto result_20 = h3_0_generated_compute(lane_20_in_cc);
  set_at<640, 1024, 32>(whole_result, result_20);

  hw_uint<160> lane_21_in_cc;
  set_at<0, 160, 160>(lane_21_in_cc, in_cc.extract<3360, 3519>());
  auto result_21 = h3_0_generated_compute(lane_21_in_cc);
  set_at<672, 1024, 32>(whole_result, result_21);

  hw_uint<160> lane_22_in_cc;
  set_at<0, 160, 160>(lane_22_in_cc, in_cc.extract<3520, 3679>());
  auto result_22 = h3_0_generated_compute(lane_22_in_cc);
  set_at<704, 1024, 32>(whole_result, result_22);

  hw_uint<160> lane_23_in_cc;
  set_at<0, 160, 160>(lane_23_in_cc, in_cc.extract<3680, 3839>());
  auto result_23 = h3_0_generated_compute(lane_23_in_cc);
  set_at<736, 1024, 32>(whole_result, result_23);

  hw_uint<160> lane_24_in_cc;
  set_at<0, 160, 160>(lane_24_in_cc, in_cc.extract<3840, 3999>());
  auto result_24 = h3_0_generated_compute(lane_24_in_cc);
  set_at<768, 1024, 32>(whole_result, result_24);

  hw_uint<160> lane_25_in_cc;
  set_at<0, 160, 160>(lane_25_in_cc, in_cc.extract<4000, 4159>());
  auto result_25 = h3_0_generated_compute(lane_25_in_cc);
  set_at<800, 1024, 32>(whole_result, result_25);

  hw_uint<160> lane_26_in_cc;
  set_at<0, 160, 160>(lane_26_in_cc, in_cc.extract<4160, 4319>());
  auto result_26 = h3_0_generated_compute(lane_26_in_cc);
  set_at<832, 1024, 32>(whole_result, result_26);

  hw_uint<160> lane_27_in_cc;
  set_at<0, 160, 160>(lane_27_in_cc, in_cc.extract<4320, 4479>());
  auto result_27 = h3_0_generated_compute(lane_27_in_cc);
  set_at<864, 1024, 32>(whole_result, result_27);

  hw_uint<160> lane_28_in_cc;
  set_at<0, 160, 160>(lane_28_in_cc, in_cc.extract<4480, 4639>());
  auto result_28 = h3_0_generated_compute(lane_28_in_cc);
  set_at<896, 1024, 32>(whole_result, result_28);

  hw_uint<160> lane_29_in_cc;
  set_at<0, 160, 160>(lane_29_in_cc, in_cc.extract<4640, 4799>());
  auto result_29 = h3_0_generated_compute(lane_29_in_cc);
  set_at<928, 1024, 32>(whole_result, result_29);

  hw_uint<160> lane_30_in_cc;
  set_at<0, 160, 160>(lane_30_in_cc, in_cc.extract<4800, 4959>());
  auto result_30 = h3_0_generated_compute(lane_30_in_cc);
  set_at<960, 1024, 32>(whole_result, result_30);

  hw_uint<160> lane_31_in_cc;
  set_at<0, 160, 160>(lane_31_in_cc, in_cc.extract<4960, 5119>());
  auto result_31 = h3_0_generated_compute(lane_31_in_cc);
  set_at<992, 1024, 32>(whole_result, result_31);
  return whole_result;
}

  // h3_1_update_0 unroll factor: 32
hw_uint<1024>  h3_1_generated_compute_unrolled_32(hw_uint<5120>& h3_0) {
  hw_uint<1024> whole_result;

  hw_uint<160> lane_0_h3_0;
  set_at<0, 160, 160>(lane_0_h3_0, h3_0.extract<0, 159>());
  auto result_0 = h3_1_generated_compute(lane_0_h3_0);
  set_at<0, 1024, 32>(whole_result, result_0);

  hw_uint<160> lane_1_h3_0;
  set_at<0, 160, 160>(lane_1_h3_0, h3_0.extract<160, 319>());
  auto result_1 = h3_1_generated_compute(lane_1_h3_0);
  set_at<32, 1024, 32>(whole_result, result_1);

  hw_uint<160> lane_2_h3_0;
  set_at<0, 160, 160>(lane_2_h3_0, h3_0.extract<320, 479>());
  auto result_2 = h3_1_generated_compute(lane_2_h3_0);
  set_at<64, 1024, 32>(whole_result, result_2);

  hw_uint<160> lane_3_h3_0;
  set_at<0, 160, 160>(lane_3_h3_0, h3_0.extract<480, 639>());
  auto result_3 = h3_1_generated_compute(lane_3_h3_0);
  set_at<96, 1024, 32>(whole_result, result_3);

  hw_uint<160> lane_4_h3_0;
  set_at<0, 160, 160>(lane_4_h3_0, h3_0.extract<640, 799>());
  auto result_4 = h3_1_generated_compute(lane_4_h3_0);
  set_at<128, 1024, 32>(whole_result, result_4);

  hw_uint<160> lane_5_h3_0;
  set_at<0, 160, 160>(lane_5_h3_0, h3_0.extract<800, 959>());
  auto result_5 = h3_1_generated_compute(lane_5_h3_0);
  set_at<160, 1024, 32>(whole_result, result_5);

  hw_uint<160> lane_6_h3_0;
  set_at<0, 160, 160>(lane_6_h3_0, h3_0.extract<960, 1119>());
  auto result_6 = h3_1_generated_compute(lane_6_h3_0);
  set_at<192, 1024, 32>(whole_result, result_6);

  hw_uint<160> lane_7_h3_0;
  set_at<0, 160, 160>(lane_7_h3_0, h3_0.extract<1120, 1279>());
  auto result_7 = h3_1_generated_compute(lane_7_h3_0);
  set_at<224, 1024, 32>(whole_result, result_7);

  hw_uint<160> lane_8_h3_0;
  set_at<0, 160, 160>(lane_8_h3_0, h3_0.extract<1280, 1439>());
  auto result_8 = h3_1_generated_compute(lane_8_h3_0);
  set_at<256, 1024, 32>(whole_result, result_8);

  hw_uint<160> lane_9_h3_0;
  set_at<0, 160, 160>(lane_9_h3_0, h3_0.extract<1440, 1599>());
  auto result_9 = h3_1_generated_compute(lane_9_h3_0);
  set_at<288, 1024, 32>(whole_result, result_9);

  hw_uint<160> lane_10_h3_0;
  set_at<0, 160, 160>(lane_10_h3_0, h3_0.extract<1600, 1759>());
  auto result_10 = h3_1_generated_compute(lane_10_h3_0);
  set_at<320, 1024, 32>(whole_result, result_10);

  hw_uint<160> lane_11_h3_0;
  set_at<0, 160, 160>(lane_11_h3_0, h3_0.extract<1760, 1919>());
  auto result_11 = h3_1_generated_compute(lane_11_h3_0);
  set_at<352, 1024, 32>(whole_result, result_11);

  hw_uint<160> lane_12_h3_0;
  set_at<0, 160, 160>(lane_12_h3_0, h3_0.extract<1920, 2079>());
  auto result_12 = h3_1_generated_compute(lane_12_h3_0);
  set_at<384, 1024, 32>(whole_result, result_12);

  hw_uint<160> lane_13_h3_0;
  set_at<0, 160, 160>(lane_13_h3_0, h3_0.extract<2080, 2239>());
  auto result_13 = h3_1_generated_compute(lane_13_h3_0);
  set_at<416, 1024, 32>(whole_result, result_13);

  hw_uint<160> lane_14_h3_0;
  set_at<0, 160, 160>(lane_14_h3_0, h3_0.extract<2240, 2399>());
  auto result_14 = h3_1_generated_compute(lane_14_h3_0);
  set_at<448, 1024, 32>(whole_result, result_14);

  hw_uint<160> lane_15_h3_0;
  set_at<0, 160, 160>(lane_15_h3_0, h3_0.extract<2400, 2559>());
  auto result_15 = h3_1_generated_compute(lane_15_h3_0);
  set_at<480, 1024, 32>(whole_result, result_15);

  hw_uint<160> lane_16_h3_0;
  set_at<0, 160, 160>(lane_16_h3_0, h3_0.extract<2560, 2719>());
  auto result_16 = h3_1_generated_compute(lane_16_h3_0);
  set_at<512, 1024, 32>(whole_result, result_16);

  hw_uint<160> lane_17_h3_0;
  set_at<0, 160, 160>(lane_17_h3_0, h3_0.extract<2720, 2879>());
  auto result_17 = h3_1_generated_compute(lane_17_h3_0);
  set_at<544, 1024, 32>(whole_result, result_17);

  hw_uint<160> lane_18_h3_0;
  set_at<0, 160, 160>(lane_18_h3_0, h3_0.extract<2880, 3039>());
  auto result_18 = h3_1_generated_compute(lane_18_h3_0);
  set_at<576, 1024, 32>(whole_result, result_18);

  hw_uint<160> lane_19_h3_0;
  set_at<0, 160, 160>(lane_19_h3_0, h3_0.extract<3040, 3199>());
  auto result_19 = h3_1_generated_compute(lane_19_h3_0);
  set_at<608, 1024, 32>(whole_result, result_19);

  hw_uint<160> lane_20_h3_0;
  set_at<0, 160, 160>(lane_20_h3_0, h3_0.extract<3200, 3359>());
  auto result_20 = h3_1_generated_compute(lane_20_h3_0);
  set_at<640, 1024, 32>(whole_result, result_20);

  hw_uint<160> lane_21_h3_0;
  set_at<0, 160, 160>(lane_21_h3_0, h3_0.extract<3360, 3519>());
  auto result_21 = h3_1_generated_compute(lane_21_h3_0);
  set_at<672, 1024, 32>(whole_result, result_21);

  hw_uint<160> lane_22_h3_0;
  set_at<0, 160, 160>(lane_22_h3_0, h3_0.extract<3520, 3679>());
  auto result_22 = h3_1_generated_compute(lane_22_h3_0);
  set_at<704, 1024, 32>(whole_result, result_22);

  hw_uint<160> lane_23_h3_0;
  set_at<0, 160, 160>(lane_23_h3_0, h3_0.extract<3680, 3839>());
  auto result_23 = h3_1_generated_compute(lane_23_h3_0);
  set_at<736, 1024, 32>(whole_result, result_23);

  hw_uint<160> lane_24_h3_0;
  set_at<0, 160, 160>(lane_24_h3_0, h3_0.extract<3840, 3999>());
  auto result_24 = h3_1_generated_compute(lane_24_h3_0);
  set_at<768, 1024, 32>(whole_result, result_24);

  hw_uint<160> lane_25_h3_0;
  set_at<0, 160, 160>(lane_25_h3_0, h3_0.extract<4000, 4159>());
  auto result_25 = h3_1_generated_compute(lane_25_h3_0);
  set_at<800, 1024, 32>(whole_result, result_25);

  hw_uint<160> lane_26_h3_0;
  set_at<0, 160, 160>(lane_26_h3_0, h3_0.extract<4160, 4319>());
  auto result_26 = h3_1_generated_compute(lane_26_h3_0);
  set_at<832, 1024, 32>(whole_result, result_26);

  hw_uint<160> lane_27_h3_0;
  set_at<0, 160, 160>(lane_27_h3_0, h3_0.extract<4320, 4479>());
  auto result_27 = h3_1_generated_compute(lane_27_h3_0);
  set_at<864, 1024, 32>(whole_result, result_27);

  hw_uint<160> lane_28_h3_0;
  set_at<0, 160, 160>(lane_28_h3_0, h3_0.extract<4480, 4639>());
  auto result_28 = h3_1_generated_compute(lane_28_h3_0);
  set_at<896, 1024, 32>(whole_result, result_28);

  hw_uint<160> lane_29_h3_0;
  set_at<0, 160, 160>(lane_29_h3_0, h3_0.extract<4640, 4799>());
  auto result_29 = h3_1_generated_compute(lane_29_h3_0);
  set_at<928, 1024, 32>(whole_result, result_29);

  hw_uint<160> lane_30_h3_0;
  set_at<0, 160, 160>(lane_30_h3_0, h3_0.extract<4800, 4959>());
  auto result_30 = h3_1_generated_compute(lane_30_h3_0);
  set_at<960, 1024, 32>(whole_result, result_30);

  hw_uint<160> lane_31_h3_0;
  set_at<0, 160, 160>(lane_31_h3_0, h3_0.extract<4960, 5119>());
  auto result_31 = h3_1_generated_compute(lane_31_h3_0);
  set_at<992, 1024, 32>(whole_result, result_31);
  return whole_result;
}

  // h3_2_update_0 unroll factor: 32
hw_uint<1024>  h3_2_generated_compute_unrolled_32(hw_uint<5120>& h3_1) {
  hw_uint<1024> whole_result;

  hw_uint<160> lane_0_h3_1;
  set_at<0, 160, 160>(lane_0_h3_1, h3_1.extract<0, 159>());
  auto result_0 = h3_2_generated_compute(lane_0_h3_1);
  set_at<0, 1024, 32>(whole_result, result_0);

  hw_uint<160> lane_1_h3_1;
  set_at<0, 160, 160>(lane_1_h3_1, h3_1.extract<160, 319>());
  auto result_1 = h3_2_generated_compute(lane_1_h3_1);
  set_at<32, 1024, 32>(whole_result, result_1);

  hw_uint<160> lane_2_h3_1;
  set_at<0, 160, 160>(lane_2_h3_1, h3_1.extract<320, 479>());
  auto result_2 = h3_2_generated_compute(lane_2_h3_1);
  set_at<64, 1024, 32>(whole_result, result_2);

  hw_uint<160> lane_3_h3_1;
  set_at<0, 160, 160>(lane_3_h3_1, h3_1.extract<480, 639>());
  auto result_3 = h3_2_generated_compute(lane_3_h3_1);
  set_at<96, 1024, 32>(whole_result, result_3);

  hw_uint<160> lane_4_h3_1;
  set_at<0, 160, 160>(lane_4_h3_1, h3_1.extract<640, 799>());
  auto result_4 = h3_2_generated_compute(lane_4_h3_1);
  set_at<128, 1024, 32>(whole_result, result_4);

  hw_uint<160> lane_5_h3_1;
  set_at<0, 160, 160>(lane_5_h3_1, h3_1.extract<800, 959>());
  auto result_5 = h3_2_generated_compute(lane_5_h3_1);
  set_at<160, 1024, 32>(whole_result, result_5);

  hw_uint<160> lane_6_h3_1;
  set_at<0, 160, 160>(lane_6_h3_1, h3_1.extract<960, 1119>());
  auto result_6 = h3_2_generated_compute(lane_6_h3_1);
  set_at<192, 1024, 32>(whole_result, result_6);

  hw_uint<160> lane_7_h3_1;
  set_at<0, 160, 160>(lane_7_h3_1, h3_1.extract<1120, 1279>());
  auto result_7 = h3_2_generated_compute(lane_7_h3_1);
  set_at<224, 1024, 32>(whole_result, result_7);

  hw_uint<160> lane_8_h3_1;
  set_at<0, 160, 160>(lane_8_h3_1, h3_1.extract<1280, 1439>());
  auto result_8 = h3_2_generated_compute(lane_8_h3_1);
  set_at<256, 1024, 32>(whole_result, result_8);

  hw_uint<160> lane_9_h3_1;
  set_at<0, 160, 160>(lane_9_h3_1, h3_1.extract<1440, 1599>());
  auto result_9 = h3_2_generated_compute(lane_9_h3_1);
  set_at<288, 1024, 32>(whole_result, result_9);

  hw_uint<160> lane_10_h3_1;
  set_at<0, 160, 160>(lane_10_h3_1, h3_1.extract<1600, 1759>());
  auto result_10 = h3_2_generated_compute(lane_10_h3_1);
  set_at<320, 1024, 32>(whole_result, result_10);

  hw_uint<160> lane_11_h3_1;
  set_at<0, 160, 160>(lane_11_h3_1, h3_1.extract<1760, 1919>());
  auto result_11 = h3_2_generated_compute(lane_11_h3_1);
  set_at<352, 1024, 32>(whole_result, result_11);

  hw_uint<160> lane_12_h3_1;
  set_at<0, 160, 160>(lane_12_h3_1, h3_1.extract<1920, 2079>());
  auto result_12 = h3_2_generated_compute(lane_12_h3_1);
  set_at<384, 1024, 32>(whole_result, result_12);

  hw_uint<160> lane_13_h3_1;
  set_at<0, 160, 160>(lane_13_h3_1, h3_1.extract<2080, 2239>());
  auto result_13 = h3_2_generated_compute(lane_13_h3_1);
  set_at<416, 1024, 32>(whole_result, result_13);

  hw_uint<160> lane_14_h3_1;
  set_at<0, 160, 160>(lane_14_h3_1, h3_1.extract<2240, 2399>());
  auto result_14 = h3_2_generated_compute(lane_14_h3_1);
  set_at<448, 1024, 32>(whole_result, result_14);

  hw_uint<160> lane_15_h3_1;
  set_at<0, 160, 160>(lane_15_h3_1, h3_1.extract<2400, 2559>());
  auto result_15 = h3_2_generated_compute(lane_15_h3_1);
  set_at<480, 1024, 32>(whole_result, result_15);

  hw_uint<160> lane_16_h3_1;
  set_at<0, 160, 160>(lane_16_h3_1, h3_1.extract<2560, 2719>());
  auto result_16 = h3_2_generated_compute(lane_16_h3_1);
  set_at<512, 1024, 32>(whole_result, result_16);

  hw_uint<160> lane_17_h3_1;
  set_at<0, 160, 160>(lane_17_h3_1, h3_1.extract<2720, 2879>());
  auto result_17 = h3_2_generated_compute(lane_17_h3_1);
  set_at<544, 1024, 32>(whole_result, result_17);

  hw_uint<160> lane_18_h3_1;
  set_at<0, 160, 160>(lane_18_h3_1, h3_1.extract<2880, 3039>());
  auto result_18 = h3_2_generated_compute(lane_18_h3_1);
  set_at<576, 1024, 32>(whole_result, result_18);

  hw_uint<160> lane_19_h3_1;
  set_at<0, 160, 160>(lane_19_h3_1, h3_1.extract<3040, 3199>());
  auto result_19 = h3_2_generated_compute(lane_19_h3_1);
  set_at<608, 1024, 32>(whole_result, result_19);

  hw_uint<160> lane_20_h3_1;
  set_at<0, 160, 160>(lane_20_h3_1, h3_1.extract<3200, 3359>());
  auto result_20 = h3_2_generated_compute(lane_20_h3_1);
  set_at<640, 1024, 32>(whole_result, result_20);

  hw_uint<160> lane_21_h3_1;
  set_at<0, 160, 160>(lane_21_h3_1, h3_1.extract<3360, 3519>());
  auto result_21 = h3_2_generated_compute(lane_21_h3_1);
  set_at<672, 1024, 32>(whole_result, result_21);

  hw_uint<160> lane_22_h3_1;
  set_at<0, 160, 160>(lane_22_h3_1, h3_1.extract<3520, 3679>());
  auto result_22 = h3_2_generated_compute(lane_22_h3_1);
  set_at<704, 1024, 32>(whole_result, result_22);

  hw_uint<160> lane_23_h3_1;
  set_at<0, 160, 160>(lane_23_h3_1, h3_1.extract<3680, 3839>());
  auto result_23 = h3_2_generated_compute(lane_23_h3_1);
  set_at<736, 1024, 32>(whole_result, result_23);

  hw_uint<160> lane_24_h3_1;
  set_at<0, 160, 160>(lane_24_h3_1, h3_1.extract<3840, 3999>());
  auto result_24 = h3_2_generated_compute(lane_24_h3_1);
  set_at<768, 1024, 32>(whole_result, result_24);

  hw_uint<160> lane_25_h3_1;
  set_at<0, 160, 160>(lane_25_h3_1, h3_1.extract<4000, 4159>());
  auto result_25 = h3_2_generated_compute(lane_25_h3_1);
  set_at<800, 1024, 32>(whole_result, result_25);

  hw_uint<160> lane_26_h3_1;
  set_at<0, 160, 160>(lane_26_h3_1, h3_1.extract<4160, 4319>());
  auto result_26 = h3_2_generated_compute(lane_26_h3_1);
  set_at<832, 1024, 32>(whole_result, result_26);

  hw_uint<160> lane_27_h3_1;
  set_at<0, 160, 160>(lane_27_h3_1, h3_1.extract<4320, 4479>());
  auto result_27 = h3_2_generated_compute(lane_27_h3_1);
  set_at<864, 1024, 32>(whole_result, result_27);

  hw_uint<160> lane_28_h3_1;
  set_at<0, 160, 160>(lane_28_h3_1, h3_1.extract<4480, 4639>());
  auto result_28 = h3_2_generated_compute(lane_28_h3_1);
  set_at<896, 1024, 32>(whole_result, result_28);

  hw_uint<160> lane_29_h3_1;
  set_at<0, 160, 160>(lane_29_h3_1, h3_1.extract<4640, 4799>());
  auto result_29 = h3_2_generated_compute(lane_29_h3_1);
  set_at<928, 1024, 32>(whole_result, result_29);

  hw_uint<160> lane_30_h3_1;
  set_at<0, 160, 160>(lane_30_h3_1, h3_1.extract<4800, 4959>());
  auto result_30 = h3_2_generated_compute(lane_30_h3_1);
  set_at<960, 1024, 32>(whole_result, result_30);

  hw_uint<160> lane_31_h3_1;
  set_at<0, 160, 160>(lane_31_h3_1, h3_1.extract<4960, 5119>());
  auto result_31 = h3_2_generated_compute(lane_31_h3_1);
  set_at<992, 1024, 32>(whole_result, result_31);
  return whole_result;
}

  // h3_3_update_0 unroll factor: 32
hw_uint<1024>  h3_3_generated_compute_unrolled_32(hw_uint<5120>& h3_2) {
  hw_uint<1024> whole_result;

  hw_uint<160> lane_0_h3_2;
  set_at<0, 160, 160>(lane_0_h3_2, h3_2.extract<0, 159>());
  auto result_0 = h3_3_generated_compute(lane_0_h3_2);
  set_at<0, 1024, 32>(whole_result, result_0);

  hw_uint<160> lane_1_h3_2;
  set_at<0, 160, 160>(lane_1_h3_2, h3_2.extract<160, 319>());
  auto result_1 = h3_3_generated_compute(lane_1_h3_2);
  set_at<32, 1024, 32>(whole_result, result_1);

  hw_uint<160> lane_2_h3_2;
  set_at<0, 160, 160>(lane_2_h3_2, h3_2.extract<320, 479>());
  auto result_2 = h3_3_generated_compute(lane_2_h3_2);
  set_at<64, 1024, 32>(whole_result, result_2);

  hw_uint<160> lane_3_h3_2;
  set_at<0, 160, 160>(lane_3_h3_2, h3_2.extract<480, 639>());
  auto result_3 = h3_3_generated_compute(lane_3_h3_2);
  set_at<96, 1024, 32>(whole_result, result_3);

  hw_uint<160> lane_4_h3_2;
  set_at<0, 160, 160>(lane_4_h3_2, h3_2.extract<640, 799>());
  auto result_4 = h3_3_generated_compute(lane_4_h3_2);
  set_at<128, 1024, 32>(whole_result, result_4);

  hw_uint<160> lane_5_h3_2;
  set_at<0, 160, 160>(lane_5_h3_2, h3_2.extract<800, 959>());
  auto result_5 = h3_3_generated_compute(lane_5_h3_2);
  set_at<160, 1024, 32>(whole_result, result_5);

  hw_uint<160> lane_6_h3_2;
  set_at<0, 160, 160>(lane_6_h3_2, h3_2.extract<960, 1119>());
  auto result_6 = h3_3_generated_compute(lane_6_h3_2);
  set_at<192, 1024, 32>(whole_result, result_6);

  hw_uint<160> lane_7_h3_2;
  set_at<0, 160, 160>(lane_7_h3_2, h3_2.extract<1120, 1279>());
  auto result_7 = h3_3_generated_compute(lane_7_h3_2);
  set_at<224, 1024, 32>(whole_result, result_7);

  hw_uint<160> lane_8_h3_2;
  set_at<0, 160, 160>(lane_8_h3_2, h3_2.extract<1280, 1439>());
  auto result_8 = h3_3_generated_compute(lane_8_h3_2);
  set_at<256, 1024, 32>(whole_result, result_8);

  hw_uint<160> lane_9_h3_2;
  set_at<0, 160, 160>(lane_9_h3_2, h3_2.extract<1440, 1599>());
  auto result_9 = h3_3_generated_compute(lane_9_h3_2);
  set_at<288, 1024, 32>(whole_result, result_9);

  hw_uint<160> lane_10_h3_2;
  set_at<0, 160, 160>(lane_10_h3_2, h3_2.extract<1600, 1759>());
  auto result_10 = h3_3_generated_compute(lane_10_h3_2);
  set_at<320, 1024, 32>(whole_result, result_10);

  hw_uint<160> lane_11_h3_2;
  set_at<0, 160, 160>(lane_11_h3_2, h3_2.extract<1760, 1919>());
  auto result_11 = h3_3_generated_compute(lane_11_h3_2);
  set_at<352, 1024, 32>(whole_result, result_11);

  hw_uint<160> lane_12_h3_2;
  set_at<0, 160, 160>(lane_12_h3_2, h3_2.extract<1920, 2079>());
  auto result_12 = h3_3_generated_compute(lane_12_h3_2);
  set_at<384, 1024, 32>(whole_result, result_12);

  hw_uint<160> lane_13_h3_2;
  set_at<0, 160, 160>(lane_13_h3_2, h3_2.extract<2080, 2239>());
  auto result_13 = h3_3_generated_compute(lane_13_h3_2);
  set_at<416, 1024, 32>(whole_result, result_13);

  hw_uint<160> lane_14_h3_2;
  set_at<0, 160, 160>(lane_14_h3_2, h3_2.extract<2240, 2399>());
  auto result_14 = h3_3_generated_compute(lane_14_h3_2);
  set_at<448, 1024, 32>(whole_result, result_14);

  hw_uint<160> lane_15_h3_2;
  set_at<0, 160, 160>(lane_15_h3_2, h3_2.extract<2400, 2559>());
  auto result_15 = h3_3_generated_compute(lane_15_h3_2);
  set_at<480, 1024, 32>(whole_result, result_15);

  hw_uint<160> lane_16_h3_2;
  set_at<0, 160, 160>(lane_16_h3_2, h3_2.extract<2560, 2719>());
  auto result_16 = h3_3_generated_compute(lane_16_h3_2);
  set_at<512, 1024, 32>(whole_result, result_16);

  hw_uint<160> lane_17_h3_2;
  set_at<0, 160, 160>(lane_17_h3_2, h3_2.extract<2720, 2879>());
  auto result_17 = h3_3_generated_compute(lane_17_h3_2);
  set_at<544, 1024, 32>(whole_result, result_17);

  hw_uint<160> lane_18_h3_2;
  set_at<0, 160, 160>(lane_18_h3_2, h3_2.extract<2880, 3039>());
  auto result_18 = h3_3_generated_compute(lane_18_h3_2);
  set_at<576, 1024, 32>(whole_result, result_18);

  hw_uint<160> lane_19_h3_2;
  set_at<0, 160, 160>(lane_19_h3_2, h3_2.extract<3040, 3199>());
  auto result_19 = h3_3_generated_compute(lane_19_h3_2);
  set_at<608, 1024, 32>(whole_result, result_19);

  hw_uint<160> lane_20_h3_2;
  set_at<0, 160, 160>(lane_20_h3_2, h3_2.extract<3200, 3359>());
  auto result_20 = h3_3_generated_compute(lane_20_h3_2);
  set_at<640, 1024, 32>(whole_result, result_20);

  hw_uint<160> lane_21_h3_2;
  set_at<0, 160, 160>(lane_21_h3_2, h3_2.extract<3360, 3519>());
  auto result_21 = h3_3_generated_compute(lane_21_h3_2);
  set_at<672, 1024, 32>(whole_result, result_21);

  hw_uint<160> lane_22_h3_2;
  set_at<0, 160, 160>(lane_22_h3_2, h3_2.extract<3520, 3679>());
  auto result_22 = h3_3_generated_compute(lane_22_h3_2);
  set_at<704, 1024, 32>(whole_result, result_22);

  hw_uint<160> lane_23_h3_2;
  set_at<0, 160, 160>(lane_23_h3_2, h3_2.extract<3680, 3839>());
  auto result_23 = h3_3_generated_compute(lane_23_h3_2);
  set_at<736, 1024, 32>(whole_result, result_23);

  hw_uint<160> lane_24_h3_2;
  set_at<0, 160, 160>(lane_24_h3_2, h3_2.extract<3840, 3999>());
  auto result_24 = h3_3_generated_compute(lane_24_h3_2);
  set_at<768, 1024, 32>(whole_result, result_24);

  hw_uint<160> lane_25_h3_2;
  set_at<0, 160, 160>(lane_25_h3_2, h3_2.extract<4000, 4159>());
  auto result_25 = h3_3_generated_compute(lane_25_h3_2);
  set_at<800, 1024, 32>(whole_result, result_25);

  hw_uint<160> lane_26_h3_2;
  set_at<0, 160, 160>(lane_26_h3_2, h3_2.extract<4160, 4319>());
  auto result_26 = h3_3_generated_compute(lane_26_h3_2);
  set_at<832, 1024, 32>(whole_result, result_26);

  hw_uint<160> lane_27_h3_2;
  set_at<0, 160, 160>(lane_27_h3_2, h3_2.extract<4320, 4479>());
  auto result_27 = h3_3_generated_compute(lane_27_h3_2);
  set_at<864, 1024, 32>(whole_result, result_27);

  hw_uint<160> lane_28_h3_2;
  set_at<0, 160, 160>(lane_28_h3_2, h3_2.extract<4480, 4639>());
  auto result_28 = h3_3_generated_compute(lane_28_h3_2);
  set_at<896, 1024, 32>(whole_result, result_28);

  hw_uint<160> lane_29_h3_2;
  set_at<0, 160, 160>(lane_29_h3_2, h3_2.extract<4640, 4799>());
  auto result_29 = h3_3_generated_compute(lane_29_h3_2);
  set_at<928, 1024, 32>(whole_result, result_29);

  hw_uint<160> lane_30_h3_2;
  set_at<0, 160, 160>(lane_30_h3_2, h3_2.extract<4800, 4959>());
  auto result_30 = h3_3_generated_compute(lane_30_h3_2);
  set_at<960, 1024, 32>(whole_result, result_30);

  hw_uint<160> lane_31_h3_2;
  set_at<0, 160, 160>(lane_31_h3_2, h3_2.extract<4960, 5119>());
  auto result_31 = h3_3_generated_compute(lane_31_h3_2);
  set_at<992, 1024, 32>(whole_result, result_31);
  return whole_result;
}

  // h3_4_update_0 unroll factor: 32
hw_uint<1024>  h3_4_generated_compute_unrolled_32(hw_uint<5120>& h3_3) {
  hw_uint<1024> whole_result;

  hw_uint<160> lane_0_h3_3;
  set_at<0, 160, 160>(lane_0_h3_3, h3_3.extract<0, 159>());
  auto result_0 = h3_4_generated_compute(lane_0_h3_3);
  set_at<0, 1024, 32>(whole_result, result_0);

  hw_uint<160> lane_1_h3_3;
  set_at<0, 160, 160>(lane_1_h3_3, h3_3.extract<160, 319>());
  auto result_1 = h3_4_generated_compute(lane_1_h3_3);
  set_at<32, 1024, 32>(whole_result, result_1);

  hw_uint<160> lane_2_h3_3;
  set_at<0, 160, 160>(lane_2_h3_3, h3_3.extract<320, 479>());
  auto result_2 = h3_4_generated_compute(lane_2_h3_3);
  set_at<64, 1024, 32>(whole_result, result_2);

  hw_uint<160> lane_3_h3_3;
  set_at<0, 160, 160>(lane_3_h3_3, h3_3.extract<480, 639>());
  auto result_3 = h3_4_generated_compute(lane_3_h3_3);
  set_at<96, 1024, 32>(whole_result, result_3);

  hw_uint<160> lane_4_h3_3;
  set_at<0, 160, 160>(lane_4_h3_3, h3_3.extract<640, 799>());
  auto result_4 = h3_4_generated_compute(lane_4_h3_3);
  set_at<128, 1024, 32>(whole_result, result_4);

  hw_uint<160> lane_5_h3_3;
  set_at<0, 160, 160>(lane_5_h3_3, h3_3.extract<800, 959>());
  auto result_5 = h3_4_generated_compute(lane_5_h3_3);
  set_at<160, 1024, 32>(whole_result, result_5);

  hw_uint<160> lane_6_h3_3;
  set_at<0, 160, 160>(lane_6_h3_3, h3_3.extract<960, 1119>());
  auto result_6 = h3_4_generated_compute(lane_6_h3_3);
  set_at<192, 1024, 32>(whole_result, result_6);

  hw_uint<160> lane_7_h3_3;
  set_at<0, 160, 160>(lane_7_h3_3, h3_3.extract<1120, 1279>());
  auto result_7 = h3_4_generated_compute(lane_7_h3_3);
  set_at<224, 1024, 32>(whole_result, result_7);

  hw_uint<160> lane_8_h3_3;
  set_at<0, 160, 160>(lane_8_h3_3, h3_3.extract<1280, 1439>());
  auto result_8 = h3_4_generated_compute(lane_8_h3_3);
  set_at<256, 1024, 32>(whole_result, result_8);

  hw_uint<160> lane_9_h3_3;
  set_at<0, 160, 160>(lane_9_h3_3, h3_3.extract<1440, 1599>());
  auto result_9 = h3_4_generated_compute(lane_9_h3_3);
  set_at<288, 1024, 32>(whole_result, result_9);

  hw_uint<160> lane_10_h3_3;
  set_at<0, 160, 160>(lane_10_h3_3, h3_3.extract<1600, 1759>());
  auto result_10 = h3_4_generated_compute(lane_10_h3_3);
  set_at<320, 1024, 32>(whole_result, result_10);

  hw_uint<160> lane_11_h3_3;
  set_at<0, 160, 160>(lane_11_h3_3, h3_3.extract<1760, 1919>());
  auto result_11 = h3_4_generated_compute(lane_11_h3_3);
  set_at<352, 1024, 32>(whole_result, result_11);

  hw_uint<160> lane_12_h3_3;
  set_at<0, 160, 160>(lane_12_h3_3, h3_3.extract<1920, 2079>());
  auto result_12 = h3_4_generated_compute(lane_12_h3_3);
  set_at<384, 1024, 32>(whole_result, result_12);

  hw_uint<160> lane_13_h3_3;
  set_at<0, 160, 160>(lane_13_h3_3, h3_3.extract<2080, 2239>());
  auto result_13 = h3_4_generated_compute(lane_13_h3_3);
  set_at<416, 1024, 32>(whole_result, result_13);

  hw_uint<160> lane_14_h3_3;
  set_at<0, 160, 160>(lane_14_h3_3, h3_3.extract<2240, 2399>());
  auto result_14 = h3_4_generated_compute(lane_14_h3_3);
  set_at<448, 1024, 32>(whole_result, result_14);

  hw_uint<160> lane_15_h3_3;
  set_at<0, 160, 160>(lane_15_h3_3, h3_3.extract<2400, 2559>());
  auto result_15 = h3_4_generated_compute(lane_15_h3_3);
  set_at<480, 1024, 32>(whole_result, result_15);

  hw_uint<160> lane_16_h3_3;
  set_at<0, 160, 160>(lane_16_h3_3, h3_3.extract<2560, 2719>());
  auto result_16 = h3_4_generated_compute(lane_16_h3_3);
  set_at<512, 1024, 32>(whole_result, result_16);

  hw_uint<160> lane_17_h3_3;
  set_at<0, 160, 160>(lane_17_h3_3, h3_3.extract<2720, 2879>());
  auto result_17 = h3_4_generated_compute(lane_17_h3_3);
  set_at<544, 1024, 32>(whole_result, result_17);

  hw_uint<160> lane_18_h3_3;
  set_at<0, 160, 160>(lane_18_h3_3, h3_3.extract<2880, 3039>());
  auto result_18 = h3_4_generated_compute(lane_18_h3_3);
  set_at<576, 1024, 32>(whole_result, result_18);

  hw_uint<160> lane_19_h3_3;
  set_at<0, 160, 160>(lane_19_h3_3, h3_3.extract<3040, 3199>());
  auto result_19 = h3_4_generated_compute(lane_19_h3_3);
  set_at<608, 1024, 32>(whole_result, result_19);

  hw_uint<160> lane_20_h3_3;
  set_at<0, 160, 160>(lane_20_h3_3, h3_3.extract<3200, 3359>());
  auto result_20 = h3_4_generated_compute(lane_20_h3_3);
  set_at<640, 1024, 32>(whole_result, result_20);

  hw_uint<160> lane_21_h3_3;
  set_at<0, 160, 160>(lane_21_h3_3, h3_3.extract<3360, 3519>());
  auto result_21 = h3_4_generated_compute(lane_21_h3_3);
  set_at<672, 1024, 32>(whole_result, result_21);

  hw_uint<160> lane_22_h3_3;
  set_at<0, 160, 160>(lane_22_h3_3, h3_3.extract<3520, 3679>());
  auto result_22 = h3_4_generated_compute(lane_22_h3_3);
  set_at<704, 1024, 32>(whole_result, result_22);

  hw_uint<160> lane_23_h3_3;
  set_at<0, 160, 160>(lane_23_h3_3, h3_3.extract<3680, 3839>());
  auto result_23 = h3_4_generated_compute(lane_23_h3_3);
  set_at<736, 1024, 32>(whole_result, result_23);

  hw_uint<160> lane_24_h3_3;
  set_at<0, 160, 160>(lane_24_h3_3, h3_3.extract<3840, 3999>());
  auto result_24 = h3_4_generated_compute(lane_24_h3_3);
  set_at<768, 1024, 32>(whole_result, result_24);

  hw_uint<160> lane_25_h3_3;
  set_at<0, 160, 160>(lane_25_h3_3, h3_3.extract<4000, 4159>());
  auto result_25 = h3_4_generated_compute(lane_25_h3_3);
  set_at<800, 1024, 32>(whole_result, result_25);

  hw_uint<160> lane_26_h3_3;
  set_at<0, 160, 160>(lane_26_h3_3, h3_3.extract<4160, 4319>());
  auto result_26 = h3_4_generated_compute(lane_26_h3_3);
  set_at<832, 1024, 32>(whole_result, result_26);

  hw_uint<160> lane_27_h3_3;
  set_at<0, 160, 160>(lane_27_h3_3, h3_3.extract<4320, 4479>());
  auto result_27 = h3_4_generated_compute(lane_27_h3_3);
  set_at<864, 1024, 32>(whole_result, result_27);

  hw_uint<160> lane_28_h3_3;
  set_at<0, 160, 160>(lane_28_h3_3, h3_3.extract<4480, 4639>());
  auto result_28 = h3_4_generated_compute(lane_28_h3_3);
  set_at<896, 1024, 32>(whole_result, result_28);

  hw_uint<160> lane_29_h3_3;
  set_at<0, 160, 160>(lane_29_h3_3, h3_3.extract<4640, 4799>());
  auto result_29 = h3_4_generated_compute(lane_29_h3_3);
  set_at<928, 1024, 32>(whole_result, result_29);

  hw_uint<160> lane_30_h3_3;
  set_at<0, 160, 160>(lane_30_h3_3, h3_3.extract<4800, 4959>());
  auto result_30 = h3_4_generated_compute(lane_30_h3_3);
  set_at<960, 1024, 32>(whole_result, result_30);

  hw_uint<160> lane_31_h3_3;
  set_at<0, 160, 160>(lane_31_h3_3, h3_3.extract<4960, 5119>());
  auto result_31 = h3_4_generated_compute(lane_31_h3_3);
  set_at<992, 1024, 32>(whole_result, result_31);
  return whole_result;
}

  // h3_5_update_0 unroll factor: 32
hw_uint<1024>  h3_5_generated_compute_unrolled_32(hw_uint<5120>& h3_4) {
  hw_uint<1024> whole_result;

  hw_uint<160> lane_0_h3_4;
  set_at<0, 160, 160>(lane_0_h3_4, h3_4.extract<0, 159>());
  auto result_0 = h3_5_generated_compute(lane_0_h3_4);
  set_at<0, 1024, 32>(whole_result, result_0);

  hw_uint<160> lane_1_h3_4;
  set_at<0, 160, 160>(lane_1_h3_4, h3_4.extract<160, 319>());
  auto result_1 = h3_5_generated_compute(lane_1_h3_4);
  set_at<32, 1024, 32>(whole_result, result_1);

  hw_uint<160> lane_2_h3_4;
  set_at<0, 160, 160>(lane_2_h3_4, h3_4.extract<320, 479>());
  auto result_2 = h3_5_generated_compute(lane_2_h3_4);
  set_at<64, 1024, 32>(whole_result, result_2);

  hw_uint<160> lane_3_h3_4;
  set_at<0, 160, 160>(lane_3_h3_4, h3_4.extract<480, 639>());
  auto result_3 = h3_5_generated_compute(lane_3_h3_4);
  set_at<96, 1024, 32>(whole_result, result_3);

  hw_uint<160> lane_4_h3_4;
  set_at<0, 160, 160>(lane_4_h3_4, h3_4.extract<640, 799>());
  auto result_4 = h3_5_generated_compute(lane_4_h3_4);
  set_at<128, 1024, 32>(whole_result, result_4);

  hw_uint<160> lane_5_h3_4;
  set_at<0, 160, 160>(lane_5_h3_4, h3_4.extract<800, 959>());
  auto result_5 = h3_5_generated_compute(lane_5_h3_4);
  set_at<160, 1024, 32>(whole_result, result_5);

  hw_uint<160> lane_6_h3_4;
  set_at<0, 160, 160>(lane_6_h3_4, h3_4.extract<960, 1119>());
  auto result_6 = h3_5_generated_compute(lane_6_h3_4);
  set_at<192, 1024, 32>(whole_result, result_6);

  hw_uint<160> lane_7_h3_4;
  set_at<0, 160, 160>(lane_7_h3_4, h3_4.extract<1120, 1279>());
  auto result_7 = h3_5_generated_compute(lane_7_h3_4);
  set_at<224, 1024, 32>(whole_result, result_7);

  hw_uint<160> lane_8_h3_4;
  set_at<0, 160, 160>(lane_8_h3_4, h3_4.extract<1280, 1439>());
  auto result_8 = h3_5_generated_compute(lane_8_h3_4);
  set_at<256, 1024, 32>(whole_result, result_8);

  hw_uint<160> lane_9_h3_4;
  set_at<0, 160, 160>(lane_9_h3_4, h3_4.extract<1440, 1599>());
  auto result_9 = h3_5_generated_compute(lane_9_h3_4);
  set_at<288, 1024, 32>(whole_result, result_9);

  hw_uint<160> lane_10_h3_4;
  set_at<0, 160, 160>(lane_10_h3_4, h3_4.extract<1600, 1759>());
  auto result_10 = h3_5_generated_compute(lane_10_h3_4);
  set_at<320, 1024, 32>(whole_result, result_10);

  hw_uint<160> lane_11_h3_4;
  set_at<0, 160, 160>(lane_11_h3_4, h3_4.extract<1760, 1919>());
  auto result_11 = h3_5_generated_compute(lane_11_h3_4);
  set_at<352, 1024, 32>(whole_result, result_11);

  hw_uint<160> lane_12_h3_4;
  set_at<0, 160, 160>(lane_12_h3_4, h3_4.extract<1920, 2079>());
  auto result_12 = h3_5_generated_compute(lane_12_h3_4);
  set_at<384, 1024, 32>(whole_result, result_12);

  hw_uint<160> lane_13_h3_4;
  set_at<0, 160, 160>(lane_13_h3_4, h3_4.extract<2080, 2239>());
  auto result_13 = h3_5_generated_compute(lane_13_h3_4);
  set_at<416, 1024, 32>(whole_result, result_13);

  hw_uint<160> lane_14_h3_4;
  set_at<0, 160, 160>(lane_14_h3_4, h3_4.extract<2240, 2399>());
  auto result_14 = h3_5_generated_compute(lane_14_h3_4);
  set_at<448, 1024, 32>(whole_result, result_14);

  hw_uint<160> lane_15_h3_4;
  set_at<0, 160, 160>(lane_15_h3_4, h3_4.extract<2400, 2559>());
  auto result_15 = h3_5_generated_compute(lane_15_h3_4);
  set_at<480, 1024, 32>(whole_result, result_15);

  hw_uint<160> lane_16_h3_4;
  set_at<0, 160, 160>(lane_16_h3_4, h3_4.extract<2560, 2719>());
  auto result_16 = h3_5_generated_compute(lane_16_h3_4);
  set_at<512, 1024, 32>(whole_result, result_16);

  hw_uint<160> lane_17_h3_4;
  set_at<0, 160, 160>(lane_17_h3_4, h3_4.extract<2720, 2879>());
  auto result_17 = h3_5_generated_compute(lane_17_h3_4);
  set_at<544, 1024, 32>(whole_result, result_17);

  hw_uint<160> lane_18_h3_4;
  set_at<0, 160, 160>(lane_18_h3_4, h3_4.extract<2880, 3039>());
  auto result_18 = h3_5_generated_compute(lane_18_h3_4);
  set_at<576, 1024, 32>(whole_result, result_18);

  hw_uint<160> lane_19_h3_4;
  set_at<0, 160, 160>(lane_19_h3_4, h3_4.extract<3040, 3199>());
  auto result_19 = h3_5_generated_compute(lane_19_h3_4);
  set_at<608, 1024, 32>(whole_result, result_19);

  hw_uint<160> lane_20_h3_4;
  set_at<0, 160, 160>(lane_20_h3_4, h3_4.extract<3200, 3359>());
  auto result_20 = h3_5_generated_compute(lane_20_h3_4);
  set_at<640, 1024, 32>(whole_result, result_20);

  hw_uint<160> lane_21_h3_4;
  set_at<0, 160, 160>(lane_21_h3_4, h3_4.extract<3360, 3519>());
  auto result_21 = h3_5_generated_compute(lane_21_h3_4);
  set_at<672, 1024, 32>(whole_result, result_21);

  hw_uint<160> lane_22_h3_4;
  set_at<0, 160, 160>(lane_22_h3_4, h3_4.extract<3520, 3679>());
  auto result_22 = h3_5_generated_compute(lane_22_h3_4);
  set_at<704, 1024, 32>(whole_result, result_22);

  hw_uint<160> lane_23_h3_4;
  set_at<0, 160, 160>(lane_23_h3_4, h3_4.extract<3680, 3839>());
  auto result_23 = h3_5_generated_compute(lane_23_h3_4);
  set_at<736, 1024, 32>(whole_result, result_23);

  hw_uint<160> lane_24_h3_4;
  set_at<0, 160, 160>(lane_24_h3_4, h3_4.extract<3840, 3999>());
  auto result_24 = h3_5_generated_compute(lane_24_h3_4);
  set_at<768, 1024, 32>(whole_result, result_24);

  hw_uint<160> lane_25_h3_4;
  set_at<0, 160, 160>(lane_25_h3_4, h3_4.extract<4000, 4159>());
  auto result_25 = h3_5_generated_compute(lane_25_h3_4);
  set_at<800, 1024, 32>(whole_result, result_25);

  hw_uint<160> lane_26_h3_4;
  set_at<0, 160, 160>(lane_26_h3_4, h3_4.extract<4160, 4319>());
  auto result_26 = h3_5_generated_compute(lane_26_h3_4);
  set_at<832, 1024, 32>(whole_result, result_26);

  hw_uint<160> lane_27_h3_4;
  set_at<0, 160, 160>(lane_27_h3_4, h3_4.extract<4320, 4479>());
  auto result_27 = h3_5_generated_compute(lane_27_h3_4);
  set_at<864, 1024, 32>(whole_result, result_27);

  hw_uint<160> lane_28_h3_4;
  set_at<0, 160, 160>(lane_28_h3_4, h3_4.extract<4480, 4639>());
  auto result_28 = h3_5_generated_compute(lane_28_h3_4);
  set_at<896, 1024, 32>(whole_result, result_28);

  hw_uint<160> lane_29_h3_4;
  set_at<0, 160, 160>(lane_29_h3_4, h3_4.extract<4640, 4799>());
  auto result_29 = h3_5_generated_compute(lane_29_h3_4);
  set_at<928, 1024, 32>(whole_result, result_29);

  hw_uint<160> lane_30_h3_4;
  set_at<0, 160, 160>(lane_30_h3_4, h3_4.extract<4800, 4959>());
  auto result_30 = h3_5_generated_compute(lane_30_h3_4);
  set_at<960, 1024, 32>(whole_result, result_30);

  hw_uint<160> lane_31_h3_4;
  set_at<0, 160, 160>(lane_31_h3_4, h3_4.extract<4960, 5119>());
  auto result_31 = h3_5_generated_compute(lane_31_h3_4);
  set_at<992, 1024, 32>(whole_result, result_31);
  return whole_result;
}

  // h3_6_update_0 unroll factor: 32
hw_uint<1024>  h3_6_generated_compute_unrolled_32(hw_uint<5120>& h3_5) {
  hw_uint<1024> whole_result;

  hw_uint<160> lane_0_h3_5;
  set_at<0, 160, 160>(lane_0_h3_5, h3_5.extract<0, 159>());
  auto result_0 = h3_6_generated_compute(lane_0_h3_5);
  set_at<0, 1024, 32>(whole_result, result_0);

  hw_uint<160> lane_1_h3_5;
  set_at<0, 160, 160>(lane_1_h3_5, h3_5.extract<160, 319>());
  auto result_1 = h3_6_generated_compute(lane_1_h3_5);
  set_at<32, 1024, 32>(whole_result, result_1);

  hw_uint<160> lane_2_h3_5;
  set_at<0, 160, 160>(lane_2_h3_5, h3_5.extract<320, 479>());
  auto result_2 = h3_6_generated_compute(lane_2_h3_5);
  set_at<64, 1024, 32>(whole_result, result_2);

  hw_uint<160> lane_3_h3_5;
  set_at<0, 160, 160>(lane_3_h3_5, h3_5.extract<480, 639>());
  auto result_3 = h3_6_generated_compute(lane_3_h3_5);
  set_at<96, 1024, 32>(whole_result, result_3);

  hw_uint<160> lane_4_h3_5;
  set_at<0, 160, 160>(lane_4_h3_5, h3_5.extract<640, 799>());
  auto result_4 = h3_6_generated_compute(lane_4_h3_5);
  set_at<128, 1024, 32>(whole_result, result_4);

  hw_uint<160> lane_5_h3_5;
  set_at<0, 160, 160>(lane_5_h3_5, h3_5.extract<800, 959>());
  auto result_5 = h3_6_generated_compute(lane_5_h3_5);
  set_at<160, 1024, 32>(whole_result, result_5);

  hw_uint<160> lane_6_h3_5;
  set_at<0, 160, 160>(lane_6_h3_5, h3_5.extract<960, 1119>());
  auto result_6 = h3_6_generated_compute(lane_6_h3_5);
  set_at<192, 1024, 32>(whole_result, result_6);

  hw_uint<160> lane_7_h3_5;
  set_at<0, 160, 160>(lane_7_h3_5, h3_5.extract<1120, 1279>());
  auto result_7 = h3_6_generated_compute(lane_7_h3_5);
  set_at<224, 1024, 32>(whole_result, result_7);

  hw_uint<160> lane_8_h3_5;
  set_at<0, 160, 160>(lane_8_h3_5, h3_5.extract<1280, 1439>());
  auto result_8 = h3_6_generated_compute(lane_8_h3_5);
  set_at<256, 1024, 32>(whole_result, result_8);

  hw_uint<160> lane_9_h3_5;
  set_at<0, 160, 160>(lane_9_h3_5, h3_5.extract<1440, 1599>());
  auto result_9 = h3_6_generated_compute(lane_9_h3_5);
  set_at<288, 1024, 32>(whole_result, result_9);

  hw_uint<160> lane_10_h3_5;
  set_at<0, 160, 160>(lane_10_h3_5, h3_5.extract<1600, 1759>());
  auto result_10 = h3_6_generated_compute(lane_10_h3_5);
  set_at<320, 1024, 32>(whole_result, result_10);

  hw_uint<160> lane_11_h3_5;
  set_at<0, 160, 160>(lane_11_h3_5, h3_5.extract<1760, 1919>());
  auto result_11 = h3_6_generated_compute(lane_11_h3_5);
  set_at<352, 1024, 32>(whole_result, result_11);

  hw_uint<160> lane_12_h3_5;
  set_at<0, 160, 160>(lane_12_h3_5, h3_5.extract<1920, 2079>());
  auto result_12 = h3_6_generated_compute(lane_12_h3_5);
  set_at<384, 1024, 32>(whole_result, result_12);

  hw_uint<160> lane_13_h3_5;
  set_at<0, 160, 160>(lane_13_h3_5, h3_5.extract<2080, 2239>());
  auto result_13 = h3_6_generated_compute(lane_13_h3_5);
  set_at<416, 1024, 32>(whole_result, result_13);

  hw_uint<160> lane_14_h3_5;
  set_at<0, 160, 160>(lane_14_h3_5, h3_5.extract<2240, 2399>());
  auto result_14 = h3_6_generated_compute(lane_14_h3_5);
  set_at<448, 1024, 32>(whole_result, result_14);

  hw_uint<160> lane_15_h3_5;
  set_at<0, 160, 160>(lane_15_h3_5, h3_5.extract<2400, 2559>());
  auto result_15 = h3_6_generated_compute(lane_15_h3_5);
  set_at<480, 1024, 32>(whole_result, result_15);

  hw_uint<160> lane_16_h3_5;
  set_at<0, 160, 160>(lane_16_h3_5, h3_5.extract<2560, 2719>());
  auto result_16 = h3_6_generated_compute(lane_16_h3_5);
  set_at<512, 1024, 32>(whole_result, result_16);

  hw_uint<160> lane_17_h3_5;
  set_at<0, 160, 160>(lane_17_h3_5, h3_5.extract<2720, 2879>());
  auto result_17 = h3_6_generated_compute(lane_17_h3_5);
  set_at<544, 1024, 32>(whole_result, result_17);

  hw_uint<160> lane_18_h3_5;
  set_at<0, 160, 160>(lane_18_h3_5, h3_5.extract<2880, 3039>());
  auto result_18 = h3_6_generated_compute(lane_18_h3_5);
  set_at<576, 1024, 32>(whole_result, result_18);

  hw_uint<160> lane_19_h3_5;
  set_at<0, 160, 160>(lane_19_h3_5, h3_5.extract<3040, 3199>());
  auto result_19 = h3_6_generated_compute(lane_19_h3_5);
  set_at<608, 1024, 32>(whole_result, result_19);

  hw_uint<160> lane_20_h3_5;
  set_at<0, 160, 160>(lane_20_h3_5, h3_5.extract<3200, 3359>());
  auto result_20 = h3_6_generated_compute(lane_20_h3_5);
  set_at<640, 1024, 32>(whole_result, result_20);

  hw_uint<160> lane_21_h3_5;
  set_at<0, 160, 160>(lane_21_h3_5, h3_5.extract<3360, 3519>());
  auto result_21 = h3_6_generated_compute(lane_21_h3_5);
  set_at<672, 1024, 32>(whole_result, result_21);

  hw_uint<160> lane_22_h3_5;
  set_at<0, 160, 160>(lane_22_h3_5, h3_5.extract<3520, 3679>());
  auto result_22 = h3_6_generated_compute(lane_22_h3_5);
  set_at<704, 1024, 32>(whole_result, result_22);

  hw_uint<160> lane_23_h3_5;
  set_at<0, 160, 160>(lane_23_h3_5, h3_5.extract<3680, 3839>());
  auto result_23 = h3_6_generated_compute(lane_23_h3_5);
  set_at<736, 1024, 32>(whole_result, result_23);

  hw_uint<160> lane_24_h3_5;
  set_at<0, 160, 160>(lane_24_h3_5, h3_5.extract<3840, 3999>());
  auto result_24 = h3_6_generated_compute(lane_24_h3_5);
  set_at<768, 1024, 32>(whole_result, result_24);

  hw_uint<160> lane_25_h3_5;
  set_at<0, 160, 160>(lane_25_h3_5, h3_5.extract<4000, 4159>());
  auto result_25 = h3_6_generated_compute(lane_25_h3_5);
  set_at<800, 1024, 32>(whole_result, result_25);

  hw_uint<160> lane_26_h3_5;
  set_at<0, 160, 160>(lane_26_h3_5, h3_5.extract<4160, 4319>());
  auto result_26 = h3_6_generated_compute(lane_26_h3_5);
  set_at<832, 1024, 32>(whole_result, result_26);

  hw_uint<160> lane_27_h3_5;
  set_at<0, 160, 160>(lane_27_h3_5, h3_5.extract<4320, 4479>());
  auto result_27 = h3_6_generated_compute(lane_27_h3_5);
  set_at<864, 1024, 32>(whole_result, result_27);

  hw_uint<160> lane_28_h3_5;
  set_at<0, 160, 160>(lane_28_h3_5, h3_5.extract<4480, 4639>());
  auto result_28 = h3_6_generated_compute(lane_28_h3_5);
  set_at<896, 1024, 32>(whole_result, result_28);

  hw_uint<160> lane_29_h3_5;
  set_at<0, 160, 160>(lane_29_h3_5, h3_5.extract<4640, 4799>());
  auto result_29 = h3_6_generated_compute(lane_29_h3_5);
  set_at<928, 1024, 32>(whole_result, result_29);

  hw_uint<160> lane_30_h3_5;
  set_at<0, 160, 160>(lane_30_h3_5, h3_5.extract<4800, 4959>());
  auto result_30 = h3_6_generated_compute(lane_30_h3_5);
  set_at<960, 1024, 32>(whole_result, result_30);

  hw_uint<160> lane_31_h3_5;
  set_at<0, 160, 160>(lane_31_h3_5, h3_5.extract<4960, 5119>());
  auto result_31 = h3_6_generated_compute(lane_31_h3_5);
  set_at<992, 1024, 32>(whole_result, result_31);
  return whole_result;
}

  // h3_7_update_0 unroll factor: 32
hw_uint<1024>  h3_7_generated_compute_unrolled_32(hw_uint<5120>& h3_6) {
  hw_uint<1024> whole_result;

  hw_uint<160> lane_0_h3_6;
  set_at<0, 160, 160>(lane_0_h3_6, h3_6.extract<0, 159>());
  auto result_0 = h3_7_generated_compute(lane_0_h3_6);
  set_at<0, 1024, 32>(whole_result, result_0);

  hw_uint<160> lane_1_h3_6;
  set_at<0, 160, 160>(lane_1_h3_6, h3_6.extract<160, 319>());
  auto result_1 = h3_7_generated_compute(lane_1_h3_6);
  set_at<32, 1024, 32>(whole_result, result_1);

  hw_uint<160> lane_2_h3_6;
  set_at<0, 160, 160>(lane_2_h3_6, h3_6.extract<320, 479>());
  auto result_2 = h3_7_generated_compute(lane_2_h3_6);
  set_at<64, 1024, 32>(whole_result, result_2);

  hw_uint<160> lane_3_h3_6;
  set_at<0, 160, 160>(lane_3_h3_6, h3_6.extract<480, 639>());
  auto result_3 = h3_7_generated_compute(lane_3_h3_6);
  set_at<96, 1024, 32>(whole_result, result_3);

  hw_uint<160> lane_4_h3_6;
  set_at<0, 160, 160>(lane_4_h3_6, h3_6.extract<640, 799>());
  auto result_4 = h3_7_generated_compute(lane_4_h3_6);
  set_at<128, 1024, 32>(whole_result, result_4);

  hw_uint<160> lane_5_h3_6;
  set_at<0, 160, 160>(lane_5_h3_6, h3_6.extract<800, 959>());
  auto result_5 = h3_7_generated_compute(lane_5_h3_6);
  set_at<160, 1024, 32>(whole_result, result_5);

  hw_uint<160> lane_6_h3_6;
  set_at<0, 160, 160>(lane_6_h3_6, h3_6.extract<960, 1119>());
  auto result_6 = h3_7_generated_compute(lane_6_h3_6);
  set_at<192, 1024, 32>(whole_result, result_6);

  hw_uint<160> lane_7_h3_6;
  set_at<0, 160, 160>(lane_7_h3_6, h3_6.extract<1120, 1279>());
  auto result_7 = h3_7_generated_compute(lane_7_h3_6);
  set_at<224, 1024, 32>(whole_result, result_7);

  hw_uint<160> lane_8_h3_6;
  set_at<0, 160, 160>(lane_8_h3_6, h3_6.extract<1280, 1439>());
  auto result_8 = h3_7_generated_compute(lane_8_h3_6);
  set_at<256, 1024, 32>(whole_result, result_8);

  hw_uint<160> lane_9_h3_6;
  set_at<0, 160, 160>(lane_9_h3_6, h3_6.extract<1440, 1599>());
  auto result_9 = h3_7_generated_compute(lane_9_h3_6);
  set_at<288, 1024, 32>(whole_result, result_9);

  hw_uint<160> lane_10_h3_6;
  set_at<0, 160, 160>(lane_10_h3_6, h3_6.extract<1600, 1759>());
  auto result_10 = h3_7_generated_compute(lane_10_h3_6);
  set_at<320, 1024, 32>(whole_result, result_10);

  hw_uint<160> lane_11_h3_6;
  set_at<0, 160, 160>(lane_11_h3_6, h3_6.extract<1760, 1919>());
  auto result_11 = h3_7_generated_compute(lane_11_h3_6);
  set_at<352, 1024, 32>(whole_result, result_11);

  hw_uint<160> lane_12_h3_6;
  set_at<0, 160, 160>(lane_12_h3_6, h3_6.extract<1920, 2079>());
  auto result_12 = h3_7_generated_compute(lane_12_h3_6);
  set_at<384, 1024, 32>(whole_result, result_12);

  hw_uint<160> lane_13_h3_6;
  set_at<0, 160, 160>(lane_13_h3_6, h3_6.extract<2080, 2239>());
  auto result_13 = h3_7_generated_compute(lane_13_h3_6);
  set_at<416, 1024, 32>(whole_result, result_13);

  hw_uint<160> lane_14_h3_6;
  set_at<0, 160, 160>(lane_14_h3_6, h3_6.extract<2240, 2399>());
  auto result_14 = h3_7_generated_compute(lane_14_h3_6);
  set_at<448, 1024, 32>(whole_result, result_14);

  hw_uint<160> lane_15_h3_6;
  set_at<0, 160, 160>(lane_15_h3_6, h3_6.extract<2400, 2559>());
  auto result_15 = h3_7_generated_compute(lane_15_h3_6);
  set_at<480, 1024, 32>(whole_result, result_15);

  hw_uint<160> lane_16_h3_6;
  set_at<0, 160, 160>(lane_16_h3_6, h3_6.extract<2560, 2719>());
  auto result_16 = h3_7_generated_compute(lane_16_h3_6);
  set_at<512, 1024, 32>(whole_result, result_16);

  hw_uint<160> lane_17_h3_6;
  set_at<0, 160, 160>(lane_17_h3_6, h3_6.extract<2720, 2879>());
  auto result_17 = h3_7_generated_compute(lane_17_h3_6);
  set_at<544, 1024, 32>(whole_result, result_17);

  hw_uint<160> lane_18_h3_6;
  set_at<0, 160, 160>(lane_18_h3_6, h3_6.extract<2880, 3039>());
  auto result_18 = h3_7_generated_compute(lane_18_h3_6);
  set_at<576, 1024, 32>(whole_result, result_18);

  hw_uint<160> lane_19_h3_6;
  set_at<0, 160, 160>(lane_19_h3_6, h3_6.extract<3040, 3199>());
  auto result_19 = h3_7_generated_compute(lane_19_h3_6);
  set_at<608, 1024, 32>(whole_result, result_19);

  hw_uint<160> lane_20_h3_6;
  set_at<0, 160, 160>(lane_20_h3_6, h3_6.extract<3200, 3359>());
  auto result_20 = h3_7_generated_compute(lane_20_h3_6);
  set_at<640, 1024, 32>(whole_result, result_20);

  hw_uint<160> lane_21_h3_6;
  set_at<0, 160, 160>(lane_21_h3_6, h3_6.extract<3360, 3519>());
  auto result_21 = h3_7_generated_compute(lane_21_h3_6);
  set_at<672, 1024, 32>(whole_result, result_21);

  hw_uint<160> lane_22_h3_6;
  set_at<0, 160, 160>(lane_22_h3_6, h3_6.extract<3520, 3679>());
  auto result_22 = h3_7_generated_compute(lane_22_h3_6);
  set_at<704, 1024, 32>(whole_result, result_22);

  hw_uint<160> lane_23_h3_6;
  set_at<0, 160, 160>(lane_23_h3_6, h3_6.extract<3680, 3839>());
  auto result_23 = h3_7_generated_compute(lane_23_h3_6);
  set_at<736, 1024, 32>(whole_result, result_23);

  hw_uint<160> lane_24_h3_6;
  set_at<0, 160, 160>(lane_24_h3_6, h3_6.extract<3840, 3999>());
  auto result_24 = h3_7_generated_compute(lane_24_h3_6);
  set_at<768, 1024, 32>(whole_result, result_24);

  hw_uint<160> lane_25_h3_6;
  set_at<0, 160, 160>(lane_25_h3_6, h3_6.extract<4000, 4159>());
  auto result_25 = h3_7_generated_compute(lane_25_h3_6);
  set_at<800, 1024, 32>(whole_result, result_25);

  hw_uint<160> lane_26_h3_6;
  set_at<0, 160, 160>(lane_26_h3_6, h3_6.extract<4160, 4319>());
  auto result_26 = h3_7_generated_compute(lane_26_h3_6);
  set_at<832, 1024, 32>(whole_result, result_26);

  hw_uint<160> lane_27_h3_6;
  set_at<0, 160, 160>(lane_27_h3_6, h3_6.extract<4320, 4479>());
  auto result_27 = h3_7_generated_compute(lane_27_h3_6);
  set_at<864, 1024, 32>(whole_result, result_27);

  hw_uint<160> lane_28_h3_6;
  set_at<0, 160, 160>(lane_28_h3_6, h3_6.extract<4480, 4639>());
  auto result_28 = h3_7_generated_compute(lane_28_h3_6);
  set_at<896, 1024, 32>(whole_result, result_28);

  hw_uint<160> lane_29_h3_6;
  set_at<0, 160, 160>(lane_29_h3_6, h3_6.extract<4640, 4799>());
  auto result_29 = h3_7_generated_compute(lane_29_h3_6);
  set_at<928, 1024, 32>(whole_result, result_29);

  hw_uint<160> lane_30_h3_6;
  set_at<0, 160, 160>(lane_30_h3_6, h3_6.extract<4800, 4959>());
  auto result_30 = h3_7_generated_compute(lane_30_h3_6);
  set_at<960, 1024, 32>(whole_result, result_30);

  hw_uint<160> lane_31_h3_6;
  set_at<0, 160, 160>(lane_31_h3_6, h3_6.extract<4960, 5119>());
  auto result_31 = h3_7_generated_compute(lane_31_h3_6);
  set_at<992, 1024, 32>(whole_result, result_31);
  return whole_result;
}

  // h3_8_update_0 unroll factor: 32
hw_uint<1024>  h3_8_generated_compute_unrolled_32(hw_uint<5120>& h3_7) {
  hw_uint<1024> whole_result;

  hw_uint<160> lane_0_h3_7;
  set_at<0, 160, 160>(lane_0_h3_7, h3_7.extract<0, 159>());
  auto result_0 = h3_8_generated_compute(lane_0_h3_7);
  set_at<0, 1024, 32>(whole_result, result_0);

  hw_uint<160> lane_1_h3_7;
  set_at<0, 160, 160>(lane_1_h3_7, h3_7.extract<160, 319>());
  auto result_1 = h3_8_generated_compute(lane_1_h3_7);
  set_at<32, 1024, 32>(whole_result, result_1);

  hw_uint<160> lane_2_h3_7;
  set_at<0, 160, 160>(lane_2_h3_7, h3_7.extract<320, 479>());
  auto result_2 = h3_8_generated_compute(lane_2_h3_7);
  set_at<64, 1024, 32>(whole_result, result_2);

  hw_uint<160> lane_3_h3_7;
  set_at<0, 160, 160>(lane_3_h3_7, h3_7.extract<480, 639>());
  auto result_3 = h3_8_generated_compute(lane_3_h3_7);
  set_at<96, 1024, 32>(whole_result, result_3);

  hw_uint<160> lane_4_h3_7;
  set_at<0, 160, 160>(lane_4_h3_7, h3_7.extract<640, 799>());
  auto result_4 = h3_8_generated_compute(lane_4_h3_7);
  set_at<128, 1024, 32>(whole_result, result_4);

  hw_uint<160> lane_5_h3_7;
  set_at<0, 160, 160>(lane_5_h3_7, h3_7.extract<800, 959>());
  auto result_5 = h3_8_generated_compute(lane_5_h3_7);
  set_at<160, 1024, 32>(whole_result, result_5);

  hw_uint<160> lane_6_h3_7;
  set_at<0, 160, 160>(lane_6_h3_7, h3_7.extract<960, 1119>());
  auto result_6 = h3_8_generated_compute(lane_6_h3_7);
  set_at<192, 1024, 32>(whole_result, result_6);

  hw_uint<160> lane_7_h3_7;
  set_at<0, 160, 160>(lane_7_h3_7, h3_7.extract<1120, 1279>());
  auto result_7 = h3_8_generated_compute(lane_7_h3_7);
  set_at<224, 1024, 32>(whole_result, result_7);

  hw_uint<160> lane_8_h3_7;
  set_at<0, 160, 160>(lane_8_h3_7, h3_7.extract<1280, 1439>());
  auto result_8 = h3_8_generated_compute(lane_8_h3_7);
  set_at<256, 1024, 32>(whole_result, result_8);

  hw_uint<160> lane_9_h3_7;
  set_at<0, 160, 160>(lane_9_h3_7, h3_7.extract<1440, 1599>());
  auto result_9 = h3_8_generated_compute(lane_9_h3_7);
  set_at<288, 1024, 32>(whole_result, result_9);

  hw_uint<160> lane_10_h3_7;
  set_at<0, 160, 160>(lane_10_h3_7, h3_7.extract<1600, 1759>());
  auto result_10 = h3_8_generated_compute(lane_10_h3_7);
  set_at<320, 1024, 32>(whole_result, result_10);

  hw_uint<160> lane_11_h3_7;
  set_at<0, 160, 160>(lane_11_h3_7, h3_7.extract<1760, 1919>());
  auto result_11 = h3_8_generated_compute(lane_11_h3_7);
  set_at<352, 1024, 32>(whole_result, result_11);

  hw_uint<160> lane_12_h3_7;
  set_at<0, 160, 160>(lane_12_h3_7, h3_7.extract<1920, 2079>());
  auto result_12 = h3_8_generated_compute(lane_12_h3_7);
  set_at<384, 1024, 32>(whole_result, result_12);

  hw_uint<160> lane_13_h3_7;
  set_at<0, 160, 160>(lane_13_h3_7, h3_7.extract<2080, 2239>());
  auto result_13 = h3_8_generated_compute(lane_13_h3_7);
  set_at<416, 1024, 32>(whole_result, result_13);

  hw_uint<160> lane_14_h3_7;
  set_at<0, 160, 160>(lane_14_h3_7, h3_7.extract<2240, 2399>());
  auto result_14 = h3_8_generated_compute(lane_14_h3_7);
  set_at<448, 1024, 32>(whole_result, result_14);

  hw_uint<160> lane_15_h3_7;
  set_at<0, 160, 160>(lane_15_h3_7, h3_7.extract<2400, 2559>());
  auto result_15 = h3_8_generated_compute(lane_15_h3_7);
  set_at<480, 1024, 32>(whole_result, result_15);

  hw_uint<160> lane_16_h3_7;
  set_at<0, 160, 160>(lane_16_h3_7, h3_7.extract<2560, 2719>());
  auto result_16 = h3_8_generated_compute(lane_16_h3_7);
  set_at<512, 1024, 32>(whole_result, result_16);

  hw_uint<160> lane_17_h3_7;
  set_at<0, 160, 160>(lane_17_h3_7, h3_7.extract<2720, 2879>());
  auto result_17 = h3_8_generated_compute(lane_17_h3_7);
  set_at<544, 1024, 32>(whole_result, result_17);

  hw_uint<160> lane_18_h3_7;
  set_at<0, 160, 160>(lane_18_h3_7, h3_7.extract<2880, 3039>());
  auto result_18 = h3_8_generated_compute(lane_18_h3_7);
  set_at<576, 1024, 32>(whole_result, result_18);

  hw_uint<160> lane_19_h3_7;
  set_at<0, 160, 160>(lane_19_h3_7, h3_7.extract<3040, 3199>());
  auto result_19 = h3_8_generated_compute(lane_19_h3_7);
  set_at<608, 1024, 32>(whole_result, result_19);

  hw_uint<160> lane_20_h3_7;
  set_at<0, 160, 160>(lane_20_h3_7, h3_7.extract<3200, 3359>());
  auto result_20 = h3_8_generated_compute(lane_20_h3_7);
  set_at<640, 1024, 32>(whole_result, result_20);

  hw_uint<160> lane_21_h3_7;
  set_at<0, 160, 160>(lane_21_h3_7, h3_7.extract<3360, 3519>());
  auto result_21 = h3_8_generated_compute(lane_21_h3_7);
  set_at<672, 1024, 32>(whole_result, result_21);

  hw_uint<160> lane_22_h3_7;
  set_at<0, 160, 160>(lane_22_h3_7, h3_7.extract<3520, 3679>());
  auto result_22 = h3_8_generated_compute(lane_22_h3_7);
  set_at<704, 1024, 32>(whole_result, result_22);

  hw_uint<160> lane_23_h3_7;
  set_at<0, 160, 160>(lane_23_h3_7, h3_7.extract<3680, 3839>());
  auto result_23 = h3_8_generated_compute(lane_23_h3_7);
  set_at<736, 1024, 32>(whole_result, result_23);

  hw_uint<160> lane_24_h3_7;
  set_at<0, 160, 160>(lane_24_h3_7, h3_7.extract<3840, 3999>());
  auto result_24 = h3_8_generated_compute(lane_24_h3_7);
  set_at<768, 1024, 32>(whole_result, result_24);

  hw_uint<160> lane_25_h3_7;
  set_at<0, 160, 160>(lane_25_h3_7, h3_7.extract<4000, 4159>());
  auto result_25 = h3_8_generated_compute(lane_25_h3_7);
  set_at<800, 1024, 32>(whole_result, result_25);

  hw_uint<160> lane_26_h3_7;
  set_at<0, 160, 160>(lane_26_h3_7, h3_7.extract<4160, 4319>());
  auto result_26 = h3_8_generated_compute(lane_26_h3_7);
  set_at<832, 1024, 32>(whole_result, result_26);

  hw_uint<160> lane_27_h3_7;
  set_at<0, 160, 160>(lane_27_h3_7, h3_7.extract<4320, 4479>());
  auto result_27 = h3_8_generated_compute(lane_27_h3_7);
  set_at<864, 1024, 32>(whole_result, result_27);

  hw_uint<160> lane_28_h3_7;
  set_at<0, 160, 160>(lane_28_h3_7, h3_7.extract<4480, 4639>());
  auto result_28 = h3_8_generated_compute(lane_28_h3_7);
  set_at<896, 1024, 32>(whole_result, result_28);

  hw_uint<160> lane_29_h3_7;
  set_at<0, 160, 160>(lane_29_h3_7, h3_7.extract<4640, 4799>());
  auto result_29 = h3_8_generated_compute(lane_29_h3_7);
  set_at<928, 1024, 32>(whole_result, result_29);

  hw_uint<160> lane_30_h3_7;
  set_at<0, 160, 160>(lane_30_h3_7, h3_7.extract<4800, 4959>());
  auto result_30 = h3_8_generated_compute(lane_30_h3_7);
  set_at<960, 1024, 32>(whole_result, result_30);

  hw_uint<160> lane_31_h3_7;
  set_at<0, 160, 160>(lane_31_h3_7, h3_7.extract<4960, 5119>());
  auto result_31 = h3_8_generated_compute(lane_31_h3_7);
  set_at<992, 1024, 32>(whole_result, result_31);
  return whole_result;
}

  // h3_9_update_0 unroll factor: 32
hw_uint<1024>  h3_9_generated_compute_unrolled_32(hw_uint<5120>& h3_8) {
  hw_uint<1024> whole_result;

  hw_uint<160> lane_0_h3_8;
  set_at<0, 160, 160>(lane_0_h3_8, h3_8.extract<0, 159>());
  auto result_0 = h3_9_generated_compute(lane_0_h3_8);
  set_at<0, 1024, 32>(whole_result, result_0);

  hw_uint<160> lane_1_h3_8;
  set_at<0, 160, 160>(lane_1_h3_8, h3_8.extract<160, 319>());
  auto result_1 = h3_9_generated_compute(lane_1_h3_8);
  set_at<32, 1024, 32>(whole_result, result_1);

  hw_uint<160> lane_2_h3_8;
  set_at<0, 160, 160>(lane_2_h3_8, h3_8.extract<320, 479>());
  auto result_2 = h3_9_generated_compute(lane_2_h3_8);
  set_at<64, 1024, 32>(whole_result, result_2);

  hw_uint<160> lane_3_h3_8;
  set_at<0, 160, 160>(lane_3_h3_8, h3_8.extract<480, 639>());
  auto result_3 = h3_9_generated_compute(lane_3_h3_8);
  set_at<96, 1024, 32>(whole_result, result_3);

  hw_uint<160> lane_4_h3_8;
  set_at<0, 160, 160>(lane_4_h3_8, h3_8.extract<640, 799>());
  auto result_4 = h3_9_generated_compute(lane_4_h3_8);
  set_at<128, 1024, 32>(whole_result, result_4);

  hw_uint<160> lane_5_h3_8;
  set_at<0, 160, 160>(lane_5_h3_8, h3_8.extract<800, 959>());
  auto result_5 = h3_9_generated_compute(lane_5_h3_8);
  set_at<160, 1024, 32>(whole_result, result_5);

  hw_uint<160> lane_6_h3_8;
  set_at<0, 160, 160>(lane_6_h3_8, h3_8.extract<960, 1119>());
  auto result_6 = h3_9_generated_compute(lane_6_h3_8);
  set_at<192, 1024, 32>(whole_result, result_6);

  hw_uint<160> lane_7_h3_8;
  set_at<0, 160, 160>(lane_7_h3_8, h3_8.extract<1120, 1279>());
  auto result_7 = h3_9_generated_compute(lane_7_h3_8);
  set_at<224, 1024, 32>(whole_result, result_7);

  hw_uint<160> lane_8_h3_8;
  set_at<0, 160, 160>(lane_8_h3_8, h3_8.extract<1280, 1439>());
  auto result_8 = h3_9_generated_compute(lane_8_h3_8);
  set_at<256, 1024, 32>(whole_result, result_8);

  hw_uint<160> lane_9_h3_8;
  set_at<0, 160, 160>(lane_9_h3_8, h3_8.extract<1440, 1599>());
  auto result_9 = h3_9_generated_compute(lane_9_h3_8);
  set_at<288, 1024, 32>(whole_result, result_9);

  hw_uint<160> lane_10_h3_8;
  set_at<0, 160, 160>(lane_10_h3_8, h3_8.extract<1600, 1759>());
  auto result_10 = h3_9_generated_compute(lane_10_h3_8);
  set_at<320, 1024, 32>(whole_result, result_10);

  hw_uint<160> lane_11_h3_8;
  set_at<0, 160, 160>(lane_11_h3_8, h3_8.extract<1760, 1919>());
  auto result_11 = h3_9_generated_compute(lane_11_h3_8);
  set_at<352, 1024, 32>(whole_result, result_11);

  hw_uint<160> lane_12_h3_8;
  set_at<0, 160, 160>(lane_12_h3_8, h3_8.extract<1920, 2079>());
  auto result_12 = h3_9_generated_compute(lane_12_h3_8);
  set_at<384, 1024, 32>(whole_result, result_12);

  hw_uint<160> lane_13_h3_8;
  set_at<0, 160, 160>(lane_13_h3_8, h3_8.extract<2080, 2239>());
  auto result_13 = h3_9_generated_compute(lane_13_h3_8);
  set_at<416, 1024, 32>(whole_result, result_13);

  hw_uint<160> lane_14_h3_8;
  set_at<0, 160, 160>(lane_14_h3_8, h3_8.extract<2240, 2399>());
  auto result_14 = h3_9_generated_compute(lane_14_h3_8);
  set_at<448, 1024, 32>(whole_result, result_14);

  hw_uint<160> lane_15_h3_8;
  set_at<0, 160, 160>(lane_15_h3_8, h3_8.extract<2400, 2559>());
  auto result_15 = h3_9_generated_compute(lane_15_h3_8);
  set_at<480, 1024, 32>(whole_result, result_15);

  hw_uint<160> lane_16_h3_8;
  set_at<0, 160, 160>(lane_16_h3_8, h3_8.extract<2560, 2719>());
  auto result_16 = h3_9_generated_compute(lane_16_h3_8);
  set_at<512, 1024, 32>(whole_result, result_16);

  hw_uint<160> lane_17_h3_8;
  set_at<0, 160, 160>(lane_17_h3_8, h3_8.extract<2720, 2879>());
  auto result_17 = h3_9_generated_compute(lane_17_h3_8);
  set_at<544, 1024, 32>(whole_result, result_17);

  hw_uint<160> lane_18_h3_8;
  set_at<0, 160, 160>(lane_18_h3_8, h3_8.extract<2880, 3039>());
  auto result_18 = h3_9_generated_compute(lane_18_h3_8);
  set_at<576, 1024, 32>(whole_result, result_18);

  hw_uint<160> lane_19_h3_8;
  set_at<0, 160, 160>(lane_19_h3_8, h3_8.extract<3040, 3199>());
  auto result_19 = h3_9_generated_compute(lane_19_h3_8);
  set_at<608, 1024, 32>(whole_result, result_19);

  hw_uint<160> lane_20_h3_8;
  set_at<0, 160, 160>(lane_20_h3_8, h3_8.extract<3200, 3359>());
  auto result_20 = h3_9_generated_compute(lane_20_h3_8);
  set_at<640, 1024, 32>(whole_result, result_20);

  hw_uint<160> lane_21_h3_8;
  set_at<0, 160, 160>(lane_21_h3_8, h3_8.extract<3360, 3519>());
  auto result_21 = h3_9_generated_compute(lane_21_h3_8);
  set_at<672, 1024, 32>(whole_result, result_21);

  hw_uint<160> lane_22_h3_8;
  set_at<0, 160, 160>(lane_22_h3_8, h3_8.extract<3520, 3679>());
  auto result_22 = h3_9_generated_compute(lane_22_h3_8);
  set_at<704, 1024, 32>(whole_result, result_22);

  hw_uint<160> lane_23_h3_8;
  set_at<0, 160, 160>(lane_23_h3_8, h3_8.extract<3680, 3839>());
  auto result_23 = h3_9_generated_compute(lane_23_h3_8);
  set_at<736, 1024, 32>(whole_result, result_23);

  hw_uint<160> lane_24_h3_8;
  set_at<0, 160, 160>(lane_24_h3_8, h3_8.extract<3840, 3999>());
  auto result_24 = h3_9_generated_compute(lane_24_h3_8);
  set_at<768, 1024, 32>(whole_result, result_24);

  hw_uint<160> lane_25_h3_8;
  set_at<0, 160, 160>(lane_25_h3_8, h3_8.extract<4000, 4159>());
  auto result_25 = h3_9_generated_compute(lane_25_h3_8);
  set_at<800, 1024, 32>(whole_result, result_25);

  hw_uint<160> lane_26_h3_8;
  set_at<0, 160, 160>(lane_26_h3_8, h3_8.extract<4160, 4319>());
  auto result_26 = h3_9_generated_compute(lane_26_h3_8);
  set_at<832, 1024, 32>(whole_result, result_26);

  hw_uint<160> lane_27_h3_8;
  set_at<0, 160, 160>(lane_27_h3_8, h3_8.extract<4320, 4479>());
  auto result_27 = h3_9_generated_compute(lane_27_h3_8);
  set_at<864, 1024, 32>(whole_result, result_27);

  hw_uint<160> lane_28_h3_8;
  set_at<0, 160, 160>(lane_28_h3_8, h3_8.extract<4480, 4639>());
  auto result_28 = h3_9_generated_compute(lane_28_h3_8);
  set_at<896, 1024, 32>(whole_result, result_28);

  hw_uint<160> lane_29_h3_8;
  set_at<0, 160, 160>(lane_29_h3_8, h3_8.extract<4640, 4799>());
  auto result_29 = h3_9_generated_compute(lane_29_h3_8);
  set_at<928, 1024, 32>(whole_result, result_29);

  hw_uint<160> lane_30_h3_8;
  set_at<0, 160, 160>(lane_30_h3_8, h3_8.extract<4800, 4959>());
  auto result_30 = h3_9_generated_compute(lane_30_h3_8);
  set_at<960, 1024, 32>(whole_result, result_30);

  hw_uint<160> lane_31_h3_8;
  set_at<0, 160, 160>(lane_31_h3_8, h3_8.extract<4960, 5119>());
  auto result_31 = h3_9_generated_compute(lane_31_h3_8);
  set_at<992, 1024, 32>(whole_result, result_31);
  return whole_result;
}

  // h10_32_300MHz_32_update_0 unroll factor: 32
hw_uint<1024>  h10_32_300MHz_32_generated_compute_unrolled_32(hw_uint<1024>& h3_9) {
  hw_uint<1024> whole_result;

  hw_uint<32> lane_0_h3_9;
  set_at<0, 32, 32>(lane_0_h3_9, h3_9.extract<0, 31>());
  auto result_0 = h10_32_300MHz_32_generated_compute(lane_0_h3_9);
  set_at<0, 1024, 32>(whole_result, result_0);

  hw_uint<32> lane_1_h3_9;
  set_at<0, 32, 32>(lane_1_h3_9, h3_9.extract<32, 63>());
  auto result_1 = h10_32_300MHz_32_generated_compute(lane_1_h3_9);
  set_at<32, 1024, 32>(whole_result, result_1);

  hw_uint<32> lane_2_h3_9;
  set_at<0, 32, 32>(lane_2_h3_9, h3_9.extract<64, 95>());
  auto result_2 = h10_32_300MHz_32_generated_compute(lane_2_h3_9);
  set_at<64, 1024, 32>(whole_result, result_2);

  hw_uint<32> lane_3_h3_9;
  set_at<0, 32, 32>(lane_3_h3_9, h3_9.extract<96, 127>());
  auto result_3 = h10_32_300MHz_32_generated_compute(lane_3_h3_9);
  set_at<96, 1024, 32>(whole_result, result_3);

  hw_uint<32> lane_4_h3_9;
  set_at<0, 32, 32>(lane_4_h3_9, h3_9.extract<128, 159>());
  auto result_4 = h10_32_300MHz_32_generated_compute(lane_4_h3_9);
  set_at<128, 1024, 32>(whole_result, result_4);

  hw_uint<32> lane_5_h3_9;
  set_at<0, 32, 32>(lane_5_h3_9, h3_9.extract<160, 191>());
  auto result_5 = h10_32_300MHz_32_generated_compute(lane_5_h3_9);
  set_at<160, 1024, 32>(whole_result, result_5);

  hw_uint<32> lane_6_h3_9;
  set_at<0, 32, 32>(lane_6_h3_9, h3_9.extract<192, 223>());
  auto result_6 = h10_32_300MHz_32_generated_compute(lane_6_h3_9);
  set_at<192, 1024, 32>(whole_result, result_6);

  hw_uint<32> lane_7_h3_9;
  set_at<0, 32, 32>(lane_7_h3_9, h3_9.extract<224, 255>());
  auto result_7 = h10_32_300MHz_32_generated_compute(lane_7_h3_9);
  set_at<224, 1024, 32>(whole_result, result_7);

  hw_uint<32> lane_8_h3_9;
  set_at<0, 32, 32>(lane_8_h3_9, h3_9.extract<256, 287>());
  auto result_8 = h10_32_300MHz_32_generated_compute(lane_8_h3_9);
  set_at<256, 1024, 32>(whole_result, result_8);

  hw_uint<32> lane_9_h3_9;
  set_at<0, 32, 32>(lane_9_h3_9, h3_9.extract<288, 319>());
  auto result_9 = h10_32_300MHz_32_generated_compute(lane_9_h3_9);
  set_at<288, 1024, 32>(whole_result, result_9);

  hw_uint<32> lane_10_h3_9;
  set_at<0, 32, 32>(lane_10_h3_9, h3_9.extract<320, 351>());
  auto result_10 = h10_32_300MHz_32_generated_compute(lane_10_h3_9);
  set_at<320, 1024, 32>(whole_result, result_10);

  hw_uint<32> lane_11_h3_9;
  set_at<0, 32, 32>(lane_11_h3_9, h3_9.extract<352, 383>());
  auto result_11 = h10_32_300MHz_32_generated_compute(lane_11_h3_9);
  set_at<352, 1024, 32>(whole_result, result_11);

  hw_uint<32> lane_12_h3_9;
  set_at<0, 32, 32>(lane_12_h3_9, h3_9.extract<384, 415>());
  auto result_12 = h10_32_300MHz_32_generated_compute(lane_12_h3_9);
  set_at<384, 1024, 32>(whole_result, result_12);

  hw_uint<32> lane_13_h3_9;
  set_at<0, 32, 32>(lane_13_h3_9, h3_9.extract<416, 447>());
  auto result_13 = h10_32_300MHz_32_generated_compute(lane_13_h3_9);
  set_at<416, 1024, 32>(whole_result, result_13);

  hw_uint<32> lane_14_h3_9;
  set_at<0, 32, 32>(lane_14_h3_9, h3_9.extract<448, 479>());
  auto result_14 = h10_32_300MHz_32_generated_compute(lane_14_h3_9);
  set_at<448, 1024, 32>(whole_result, result_14);

  hw_uint<32> lane_15_h3_9;
  set_at<0, 32, 32>(lane_15_h3_9, h3_9.extract<480, 511>());
  auto result_15 = h10_32_300MHz_32_generated_compute(lane_15_h3_9);
  set_at<480, 1024, 32>(whole_result, result_15);

  hw_uint<32> lane_16_h3_9;
  set_at<0, 32, 32>(lane_16_h3_9, h3_9.extract<512, 543>());
  auto result_16 = h10_32_300MHz_32_generated_compute(lane_16_h3_9);
  set_at<512, 1024, 32>(whole_result, result_16);

  hw_uint<32> lane_17_h3_9;
  set_at<0, 32, 32>(lane_17_h3_9, h3_9.extract<544, 575>());
  auto result_17 = h10_32_300MHz_32_generated_compute(lane_17_h3_9);
  set_at<544, 1024, 32>(whole_result, result_17);

  hw_uint<32> lane_18_h3_9;
  set_at<0, 32, 32>(lane_18_h3_9, h3_9.extract<576, 607>());
  auto result_18 = h10_32_300MHz_32_generated_compute(lane_18_h3_9);
  set_at<576, 1024, 32>(whole_result, result_18);

  hw_uint<32> lane_19_h3_9;
  set_at<0, 32, 32>(lane_19_h3_9, h3_9.extract<608, 639>());
  auto result_19 = h10_32_300MHz_32_generated_compute(lane_19_h3_9);
  set_at<608, 1024, 32>(whole_result, result_19);

  hw_uint<32> lane_20_h3_9;
  set_at<0, 32, 32>(lane_20_h3_9, h3_9.extract<640, 671>());
  auto result_20 = h10_32_300MHz_32_generated_compute(lane_20_h3_9);
  set_at<640, 1024, 32>(whole_result, result_20);

  hw_uint<32> lane_21_h3_9;
  set_at<0, 32, 32>(lane_21_h3_9, h3_9.extract<672, 703>());
  auto result_21 = h10_32_300MHz_32_generated_compute(lane_21_h3_9);
  set_at<672, 1024, 32>(whole_result, result_21);

  hw_uint<32> lane_22_h3_9;
  set_at<0, 32, 32>(lane_22_h3_9, h3_9.extract<704, 735>());
  auto result_22 = h10_32_300MHz_32_generated_compute(lane_22_h3_9);
  set_at<704, 1024, 32>(whole_result, result_22);

  hw_uint<32> lane_23_h3_9;
  set_at<0, 32, 32>(lane_23_h3_9, h3_9.extract<736, 767>());
  auto result_23 = h10_32_300MHz_32_generated_compute(lane_23_h3_9);
  set_at<736, 1024, 32>(whole_result, result_23);

  hw_uint<32> lane_24_h3_9;
  set_at<0, 32, 32>(lane_24_h3_9, h3_9.extract<768, 799>());
  auto result_24 = h10_32_300MHz_32_generated_compute(lane_24_h3_9);
  set_at<768, 1024, 32>(whole_result, result_24);

  hw_uint<32> lane_25_h3_9;
  set_at<0, 32, 32>(lane_25_h3_9, h3_9.extract<800, 831>());
  auto result_25 = h10_32_300MHz_32_generated_compute(lane_25_h3_9);
  set_at<800, 1024, 32>(whole_result, result_25);

  hw_uint<32> lane_26_h3_9;
  set_at<0, 32, 32>(lane_26_h3_9, h3_9.extract<832, 863>());
  auto result_26 = h10_32_300MHz_32_generated_compute(lane_26_h3_9);
  set_at<832, 1024, 32>(whole_result, result_26);

  hw_uint<32> lane_27_h3_9;
  set_at<0, 32, 32>(lane_27_h3_9, h3_9.extract<864, 895>());
  auto result_27 = h10_32_300MHz_32_generated_compute(lane_27_h3_9);
  set_at<864, 1024, 32>(whole_result, result_27);

  hw_uint<32> lane_28_h3_9;
  set_at<0, 32, 32>(lane_28_h3_9, h3_9.extract<896, 927>());
  auto result_28 = h10_32_300MHz_32_generated_compute(lane_28_h3_9);
  set_at<896, 1024, 32>(whole_result, result_28);

  hw_uint<32> lane_29_h3_9;
  set_at<0, 32, 32>(lane_29_h3_9, h3_9.extract<928, 959>());
  auto result_29 = h10_32_300MHz_32_generated_compute(lane_29_h3_9);
  set_at<928, 1024, 32>(whole_result, result_29);

  hw_uint<32> lane_30_h3_9;
  set_at<0, 32, 32>(lane_30_h3_9, h3_9.extract<960, 991>());
  auto result_30 = h10_32_300MHz_32_generated_compute(lane_30_h3_9);
  set_at<960, 1024, 32>(whole_result, result_30);

  hw_uint<32> lane_31_h3_9;
  set_at<0, 32, 32>(lane_31_h3_9, h3_9.extract<992, 1023>());
  auto result_31 = h10_32_300MHz_32_generated_compute(lane_31_h3_9);
  set_at<992, 1024, 32>(whole_result, result_31);
  return whole_result;
}

