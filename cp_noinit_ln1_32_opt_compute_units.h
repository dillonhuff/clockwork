#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<16> raw_generated_compute(hw_uint<16*1> raw_oc) {
  return uint16_t(uint16_t(raw_oc.get<16, 0>()));
}

hw_uint<16> denoiseb_generated_compute(hw_uint<16*25> raw) {
  return uint16_t(((((uint16_t(raw.get<16, 0>()) + (uint16_t(raw.get<16, 1>()) + uint16_t(raw.get<16, 2>()))) + (uint16_t(raw.get<16, 3>()) + (uint16_t(raw.get<16, 4>()) + uint16_t(raw.get<16, 5>())))) + ((uint16_t(raw.get<16, 6>()) + (uint16_t(raw.get<16, 7>()) + uint16_t(raw.get<16, 8>()))) + (uint16_t(raw.get<16, 9>()) + (uint16_t(raw.get<16, 10>()) + uint16_t(raw.get<16, 11>()))))) + (((uint16_t(raw.get<16, 12>()) + (uint16_t(raw.get<16, 13>()) + uint16_t(raw.get<16, 14>()))) + (uint16_t(raw.get<16, 15>()) + (uint16_t(raw.get<16, 16>()) + uint16_t(raw.get<16, 17>())))) + ((uint16_t(raw.get<16, 18>()) + (uint16_t(raw.get<16, 19>()) + uint16_t(raw.get<16, 20>()))) + ((uint16_t(raw.get<16, 21>()) + uint16_t(raw.get<16, 22>())) + (uint16_t(raw.get<16, 23>()) + uint16_t(raw.get<16, 24>())))))));
}

hw_uint<16> denoise_generated_compute(hw_uint<16*1> denoiseb) {
  return uint16_t((uint16_t(denoiseb.get<16, 0>()) / 25));
}

hw_uint<16> demosaicb_generated_compute(hw_uint<16*9> denoise) {
  return uint16_t((((uint16_t(denoise.get<16, 0>()) + uint16_t(denoise.get<16, 1>())) + (uint16_t(denoise.get<16, 2>()) + uint16_t(denoise.get<16, 3>()))) + ((uint16_t(denoise.get<16, 4>()) + uint16_t(denoise.get<16, 5>())) + (uint16_t(denoise.get<16, 6>()) + (uint16_t(denoise.get<16, 7>()) + uint16_t(denoise.get<16, 8>()))))));
}

hw_uint<16> demosaic_generated_compute(hw_uint<16*1> demosaicb) {
  return uint16_t((uint16_t(demosaicb.get<16, 0>()) / 9));
}

hw_uint<16> demosaic_bxb_generated_compute(hw_uint<16*3> demosaic) {
  return uint16_t((uint16_t(demosaic.get<16, 0>()) + (uint16_t(demosaic.get<16, 1>()) + uint16_t(demosaic.get<16, 2>()))));
}

hw_uint<16> demosaic_bx_generated_compute(hw_uint<16*1> demosaic_bxb) {
  return uint16_t((uint16_t(demosaic_bxb.get<16, 0>()) / 3));
}

hw_uint<16> demosaic_byb_generated_compute(hw_uint<16*3> demosaic_bx) {
  return uint16_t((uint16_t(demosaic_bx.get<16, 0>()) + (uint16_t(demosaic_bx.get<16, 1>()) + uint16_t(demosaic_bx.get<16, 2>()))));
}

hw_uint<16> demosaic_by_generated_compute(hw_uint<16*1> demosaic_byb) {
  return uint16_t((uint16_t(demosaic_byb.get<16, 0>()) / 3));
}

hw_uint<16> demosaic_diff_generated_compute(hw_uint<16*1> demosaic, hw_uint<16*1> demosaic_by) {
  return uint16_t((uint16_t(demosaic_by.get<16, 0>()) - uint16_t(demosaic.get<16, 0>())));
}

hw_uint<16> cp_noinit_ln1_32_generated_compute(hw_uint<16*1> demosaic_diff) {
  return uint16_t((uint16_t(demosaic_diff.get<16, 0>()) + 20));
}



// Compute unit banks...
  // raw_update_0 unroll factor: 32
hw_uint<512>  raw_generated_compute_unrolled_32(hw_uint<512>& raw_oc) {
  hw_uint<512> whole_result;

  hw_uint<16> lane_0_raw_oc;
  set_at<0, 16, 16>(lane_0_raw_oc, raw_oc.extract<0, 15>());
  auto result_0 = raw_generated_compute(lane_0_raw_oc);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<16> lane_1_raw_oc;
  set_at<0, 16, 16>(lane_1_raw_oc, raw_oc.extract<16, 31>());
  auto result_1 = raw_generated_compute(lane_1_raw_oc);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<16> lane_2_raw_oc;
  set_at<0, 16, 16>(lane_2_raw_oc, raw_oc.extract<32, 47>());
  auto result_2 = raw_generated_compute(lane_2_raw_oc);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<16> lane_3_raw_oc;
  set_at<0, 16, 16>(lane_3_raw_oc, raw_oc.extract<48, 63>());
  auto result_3 = raw_generated_compute(lane_3_raw_oc);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<16> lane_4_raw_oc;
  set_at<0, 16, 16>(lane_4_raw_oc, raw_oc.extract<64, 79>());
  auto result_4 = raw_generated_compute(lane_4_raw_oc);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<16> lane_5_raw_oc;
  set_at<0, 16, 16>(lane_5_raw_oc, raw_oc.extract<80, 95>());
  auto result_5 = raw_generated_compute(lane_5_raw_oc);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<16> lane_6_raw_oc;
  set_at<0, 16, 16>(lane_6_raw_oc, raw_oc.extract<96, 111>());
  auto result_6 = raw_generated_compute(lane_6_raw_oc);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<16> lane_7_raw_oc;
  set_at<0, 16, 16>(lane_7_raw_oc, raw_oc.extract<112, 127>());
  auto result_7 = raw_generated_compute(lane_7_raw_oc);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<16> lane_8_raw_oc;
  set_at<0, 16, 16>(lane_8_raw_oc, raw_oc.extract<128, 143>());
  auto result_8 = raw_generated_compute(lane_8_raw_oc);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<16> lane_9_raw_oc;
  set_at<0, 16, 16>(lane_9_raw_oc, raw_oc.extract<144, 159>());
  auto result_9 = raw_generated_compute(lane_9_raw_oc);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<16> lane_10_raw_oc;
  set_at<0, 16, 16>(lane_10_raw_oc, raw_oc.extract<160, 175>());
  auto result_10 = raw_generated_compute(lane_10_raw_oc);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<16> lane_11_raw_oc;
  set_at<0, 16, 16>(lane_11_raw_oc, raw_oc.extract<176, 191>());
  auto result_11 = raw_generated_compute(lane_11_raw_oc);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<16> lane_12_raw_oc;
  set_at<0, 16, 16>(lane_12_raw_oc, raw_oc.extract<192, 207>());
  auto result_12 = raw_generated_compute(lane_12_raw_oc);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<16> lane_13_raw_oc;
  set_at<0, 16, 16>(lane_13_raw_oc, raw_oc.extract<208, 223>());
  auto result_13 = raw_generated_compute(lane_13_raw_oc);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<16> lane_14_raw_oc;
  set_at<0, 16, 16>(lane_14_raw_oc, raw_oc.extract<224, 239>());
  auto result_14 = raw_generated_compute(lane_14_raw_oc);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<16> lane_15_raw_oc;
  set_at<0, 16, 16>(lane_15_raw_oc, raw_oc.extract<240, 255>());
  auto result_15 = raw_generated_compute(lane_15_raw_oc);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<16> lane_16_raw_oc;
  set_at<0, 16, 16>(lane_16_raw_oc, raw_oc.extract<256, 271>());
  auto result_16 = raw_generated_compute(lane_16_raw_oc);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<16> lane_17_raw_oc;
  set_at<0, 16, 16>(lane_17_raw_oc, raw_oc.extract<272, 287>());
  auto result_17 = raw_generated_compute(lane_17_raw_oc);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<16> lane_18_raw_oc;
  set_at<0, 16, 16>(lane_18_raw_oc, raw_oc.extract<288, 303>());
  auto result_18 = raw_generated_compute(lane_18_raw_oc);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<16> lane_19_raw_oc;
  set_at<0, 16, 16>(lane_19_raw_oc, raw_oc.extract<304, 319>());
  auto result_19 = raw_generated_compute(lane_19_raw_oc);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<16> lane_20_raw_oc;
  set_at<0, 16, 16>(lane_20_raw_oc, raw_oc.extract<320, 335>());
  auto result_20 = raw_generated_compute(lane_20_raw_oc);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<16> lane_21_raw_oc;
  set_at<0, 16, 16>(lane_21_raw_oc, raw_oc.extract<336, 351>());
  auto result_21 = raw_generated_compute(lane_21_raw_oc);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<16> lane_22_raw_oc;
  set_at<0, 16, 16>(lane_22_raw_oc, raw_oc.extract<352, 367>());
  auto result_22 = raw_generated_compute(lane_22_raw_oc);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<16> lane_23_raw_oc;
  set_at<0, 16, 16>(lane_23_raw_oc, raw_oc.extract<368, 383>());
  auto result_23 = raw_generated_compute(lane_23_raw_oc);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<16> lane_24_raw_oc;
  set_at<0, 16, 16>(lane_24_raw_oc, raw_oc.extract<384, 399>());
  auto result_24 = raw_generated_compute(lane_24_raw_oc);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<16> lane_25_raw_oc;
  set_at<0, 16, 16>(lane_25_raw_oc, raw_oc.extract<400, 415>());
  auto result_25 = raw_generated_compute(lane_25_raw_oc);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<16> lane_26_raw_oc;
  set_at<0, 16, 16>(lane_26_raw_oc, raw_oc.extract<416, 431>());
  auto result_26 = raw_generated_compute(lane_26_raw_oc);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<16> lane_27_raw_oc;
  set_at<0, 16, 16>(lane_27_raw_oc, raw_oc.extract<432, 447>());
  auto result_27 = raw_generated_compute(lane_27_raw_oc);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<16> lane_28_raw_oc;
  set_at<0, 16, 16>(lane_28_raw_oc, raw_oc.extract<448, 463>());
  auto result_28 = raw_generated_compute(lane_28_raw_oc);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<16> lane_29_raw_oc;
  set_at<0, 16, 16>(lane_29_raw_oc, raw_oc.extract<464, 479>());
  auto result_29 = raw_generated_compute(lane_29_raw_oc);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<16> lane_30_raw_oc;
  set_at<0, 16, 16>(lane_30_raw_oc, raw_oc.extract<480, 495>());
  auto result_30 = raw_generated_compute(lane_30_raw_oc);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<16> lane_31_raw_oc;
  set_at<0, 16, 16>(lane_31_raw_oc, raw_oc.extract<496, 511>());
  auto result_31 = raw_generated_compute(lane_31_raw_oc);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // denoiseb_update_0 unroll factor: 32
hw_uint<512>  denoiseb_generated_compute_unrolled_32(hw_uint<12800>& raw) {
  hw_uint<512> whole_result;

  hw_uint<400> lane_0_raw;
  set_at<0, 400, 400>(lane_0_raw, raw.extract<0, 399>());
  auto result_0 = denoiseb_generated_compute(lane_0_raw);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<400> lane_1_raw;
  set_at<0, 400, 400>(lane_1_raw, raw.extract<400, 799>());
  auto result_1 = denoiseb_generated_compute(lane_1_raw);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<400> lane_2_raw;
  set_at<0, 400, 400>(lane_2_raw, raw.extract<800, 1199>());
  auto result_2 = denoiseb_generated_compute(lane_2_raw);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<400> lane_3_raw;
  set_at<0, 400, 400>(lane_3_raw, raw.extract<1200, 1599>());
  auto result_3 = denoiseb_generated_compute(lane_3_raw);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<400> lane_4_raw;
  set_at<0, 400, 400>(lane_4_raw, raw.extract<1600, 1999>());
  auto result_4 = denoiseb_generated_compute(lane_4_raw);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<400> lane_5_raw;
  set_at<0, 400, 400>(lane_5_raw, raw.extract<2000, 2399>());
  auto result_5 = denoiseb_generated_compute(lane_5_raw);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<400> lane_6_raw;
  set_at<0, 400, 400>(lane_6_raw, raw.extract<2400, 2799>());
  auto result_6 = denoiseb_generated_compute(lane_6_raw);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<400> lane_7_raw;
  set_at<0, 400, 400>(lane_7_raw, raw.extract<2800, 3199>());
  auto result_7 = denoiseb_generated_compute(lane_7_raw);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<400> lane_8_raw;
  set_at<0, 400, 400>(lane_8_raw, raw.extract<3200, 3599>());
  auto result_8 = denoiseb_generated_compute(lane_8_raw);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<400> lane_9_raw;
  set_at<0, 400, 400>(lane_9_raw, raw.extract<3600, 3999>());
  auto result_9 = denoiseb_generated_compute(lane_9_raw);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<400> lane_10_raw;
  set_at<0, 400, 400>(lane_10_raw, raw.extract<4000, 4399>());
  auto result_10 = denoiseb_generated_compute(lane_10_raw);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<400> lane_11_raw;
  set_at<0, 400, 400>(lane_11_raw, raw.extract<4400, 4799>());
  auto result_11 = denoiseb_generated_compute(lane_11_raw);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<400> lane_12_raw;
  set_at<0, 400, 400>(lane_12_raw, raw.extract<4800, 5199>());
  auto result_12 = denoiseb_generated_compute(lane_12_raw);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<400> lane_13_raw;
  set_at<0, 400, 400>(lane_13_raw, raw.extract<5200, 5599>());
  auto result_13 = denoiseb_generated_compute(lane_13_raw);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<400> lane_14_raw;
  set_at<0, 400, 400>(lane_14_raw, raw.extract<5600, 5999>());
  auto result_14 = denoiseb_generated_compute(lane_14_raw);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<400> lane_15_raw;
  set_at<0, 400, 400>(lane_15_raw, raw.extract<6000, 6399>());
  auto result_15 = denoiseb_generated_compute(lane_15_raw);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<400> lane_16_raw;
  set_at<0, 400, 400>(lane_16_raw, raw.extract<6400, 6799>());
  auto result_16 = denoiseb_generated_compute(lane_16_raw);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<400> lane_17_raw;
  set_at<0, 400, 400>(lane_17_raw, raw.extract<6800, 7199>());
  auto result_17 = denoiseb_generated_compute(lane_17_raw);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<400> lane_18_raw;
  set_at<0, 400, 400>(lane_18_raw, raw.extract<7200, 7599>());
  auto result_18 = denoiseb_generated_compute(lane_18_raw);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<400> lane_19_raw;
  set_at<0, 400, 400>(lane_19_raw, raw.extract<7600, 7999>());
  auto result_19 = denoiseb_generated_compute(lane_19_raw);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<400> lane_20_raw;
  set_at<0, 400, 400>(lane_20_raw, raw.extract<8000, 8399>());
  auto result_20 = denoiseb_generated_compute(lane_20_raw);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<400> lane_21_raw;
  set_at<0, 400, 400>(lane_21_raw, raw.extract<8400, 8799>());
  auto result_21 = denoiseb_generated_compute(lane_21_raw);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<400> lane_22_raw;
  set_at<0, 400, 400>(lane_22_raw, raw.extract<8800, 9199>());
  auto result_22 = denoiseb_generated_compute(lane_22_raw);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<400> lane_23_raw;
  set_at<0, 400, 400>(lane_23_raw, raw.extract<9200, 9599>());
  auto result_23 = denoiseb_generated_compute(lane_23_raw);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<400> lane_24_raw;
  set_at<0, 400, 400>(lane_24_raw, raw.extract<9600, 9999>());
  auto result_24 = denoiseb_generated_compute(lane_24_raw);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<400> lane_25_raw;
  set_at<0, 400, 400>(lane_25_raw, raw.extract<10000, 10399>());
  auto result_25 = denoiseb_generated_compute(lane_25_raw);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<400> lane_26_raw;
  set_at<0, 400, 400>(lane_26_raw, raw.extract<10400, 10799>());
  auto result_26 = denoiseb_generated_compute(lane_26_raw);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<400> lane_27_raw;
  set_at<0, 400, 400>(lane_27_raw, raw.extract<10800, 11199>());
  auto result_27 = denoiseb_generated_compute(lane_27_raw);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<400> lane_28_raw;
  set_at<0, 400, 400>(lane_28_raw, raw.extract<11200, 11599>());
  auto result_28 = denoiseb_generated_compute(lane_28_raw);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<400> lane_29_raw;
  set_at<0, 400, 400>(lane_29_raw, raw.extract<11600, 11999>());
  auto result_29 = denoiseb_generated_compute(lane_29_raw);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<400> lane_30_raw;
  set_at<0, 400, 400>(lane_30_raw, raw.extract<12000, 12399>());
  auto result_30 = denoiseb_generated_compute(lane_30_raw);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<400> lane_31_raw;
  set_at<0, 400, 400>(lane_31_raw, raw.extract<12400, 12799>());
  auto result_31 = denoiseb_generated_compute(lane_31_raw);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // denoise_update_0 unroll factor: 32
hw_uint<512>  denoise_generated_compute_unrolled_32(hw_uint<512>& denoiseb) {
  hw_uint<512> whole_result;

  hw_uint<16> lane_0_denoiseb;
  set_at<0, 16, 16>(lane_0_denoiseb, denoiseb.extract<0, 15>());
  auto result_0 = denoise_generated_compute(lane_0_denoiseb);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<16> lane_1_denoiseb;
  set_at<0, 16, 16>(lane_1_denoiseb, denoiseb.extract<16, 31>());
  auto result_1 = denoise_generated_compute(lane_1_denoiseb);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<16> lane_2_denoiseb;
  set_at<0, 16, 16>(lane_2_denoiseb, denoiseb.extract<32, 47>());
  auto result_2 = denoise_generated_compute(lane_2_denoiseb);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<16> lane_3_denoiseb;
  set_at<0, 16, 16>(lane_3_denoiseb, denoiseb.extract<48, 63>());
  auto result_3 = denoise_generated_compute(lane_3_denoiseb);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<16> lane_4_denoiseb;
  set_at<0, 16, 16>(lane_4_denoiseb, denoiseb.extract<64, 79>());
  auto result_4 = denoise_generated_compute(lane_4_denoiseb);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<16> lane_5_denoiseb;
  set_at<0, 16, 16>(lane_5_denoiseb, denoiseb.extract<80, 95>());
  auto result_5 = denoise_generated_compute(lane_5_denoiseb);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<16> lane_6_denoiseb;
  set_at<0, 16, 16>(lane_6_denoiseb, denoiseb.extract<96, 111>());
  auto result_6 = denoise_generated_compute(lane_6_denoiseb);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<16> lane_7_denoiseb;
  set_at<0, 16, 16>(lane_7_denoiseb, denoiseb.extract<112, 127>());
  auto result_7 = denoise_generated_compute(lane_7_denoiseb);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<16> lane_8_denoiseb;
  set_at<0, 16, 16>(lane_8_denoiseb, denoiseb.extract<128, 143>());
  auto result_8 = denoise_generated_compute(lane_8_denoiseb);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<16> lane_9_denoiseb;
  set_at<0, 16, 16>(lane_9_denoiseb, denoiseb.extract<144, 159>());
  auto result_9 = denoise_generated_compute(lane_9_denoiseb);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<16> lane_10_denoiseb;
  set_at<0, 16, 16>(lane_10_denoiseb, denoiseb.extract<160, 175>());
  auto result_10 = denoise_generated_compute(lane_10_denoiseb);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<16> lane_11_denoiseb;
  set_at<0, 16, 16>(lane_11_denoiseb, denoiseb.extract<176, 191>());
  auto result_11 = denoise_generated_compute(lane_11_denoiseb);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<16> lane_12_denoiseb;
  set_at<0, 16, 16>(lane_12_denoiseb, denoiseb.extract<192, 207>());
  auto result_12 = denoise_generated_compute(lane_12_denoiseb);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<16> lane_13_denoiseb;
  set_at<0, 16, 16>(lane_13_denoiseb, denoiseb.extract<208, 223>());
  auto result_13 = denoise_generated_compute(lane_13_denoiseb);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<16> lane_14_denoiseb;
  set_at<0, 16, 16>(lane_14_denoiseb, denoiseb.extract<224, 239>());
  auto result_14 = denoise_generated_compute(lane_14_denoiseb);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<16> lane_15_denoiseb;
  set_at<0, 16, 16>(lane_15_denoiseb, denoiseb.extract<240, 255>());
  auto result_15 = denoise_generated_compute(lane_15_denoiseb);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<16> lane_16_denoiseb;
  set_at<0, 16, 16>(lane_16_denoiseb, denoiseb.extract<256, 271>());
  auto result_16 = denoise_generated_compute(lane_16_denoiseb);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<16> lane_17_denoiseb;
  set_at<0, 16, 16>(lane_17_denoiseb, denoiseb.extract<272, 287>());
  auto result_17 = denoise_generated_compute(lane_17_denoiseb);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<16> lane_18_denoiseb;
  set_at<0, 16, 16>(lane_18_denoiseb, denoiseb.extract<288, 303>());
  auto result_18 = denoise_generated_compute(lane_18_denoiseb);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<16> lane_19_denoiseb;
  set_at<0, 16, 16>(lane_19_denoiseb, denoiseb.extract<304, 319>());
  auto result_19 = denoise_generated_compute(lane_19_denoiseb);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<16> lane_20_denoiseb;
  set_at<0, 16, 16>(lane_20_denoiseb, denoiseb.extract<320, 335>());
  auto result_20 = denoise_generated_compute(lane_20_denoiseb);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<16> lane_21_denoiseb;
  set_at<0, 16, 16>(lane_21_denoiseb, denoiseb.extract<336, 351>());
  auto result_21 = denoise_generated_compute(lane_21_denoiseb);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<16> lane_22_denoiseb;
  set_at<0, 16, 16>(lane_22_denoiseb, denoiseb.extract<352, 367>());
  auto result_22 = denoise_generated_compute(lane_22_denoiseb);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<16> lane_23_denoiseb;
  set_at<0, 16, 16>(lane_23_denoiseb, denoiseb.extract<368, 383>());
  auto result_23 = denoise_generated_compute(lane_23_denoiseb);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<16> lane_24_denoiseb;
  set_at<0, 16, 16>(lane_24_denoiseb, denoiseb.extract<384, 399>());
  auto result_24 = denoise_generated_compute(lane_24_denoiseb);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<16> lane_25_denoiseb;
  set_at<0, 16, 16>(lane_25_denoiseb, denoiseb.extract<400, 415>());
  auto result_25 = denoise_generated_compute(lane_25_denoiseb);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<16> lane_26_denoiseb;
  set_at<0, 16, 16>(lane_26_denoiseb, denoiseb.extract<416, 431>());
  auto result_26 = denoise_generated_compute(lane_26_denoiseb);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<16> lane_27_denoiseb;
  set_at<0, 16, 16>(lane_27_denoiseb, denoiseb.extract<432, 447>());
  auto result_27 = denoise_generated_compute(lane_27_denoiseb);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<16> lane_28_denoiseb;
  set_at<0, 16, 16>(lane_28_denoiseb, denoiseb.extract<448, 463>());
  auto result_28 = denoise_generated_compute(lane_28_denoiseb);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<16> lane_29_denoiseb;
  set_at<0, 16, 16>(lane_29_denoiseb, denoiseb.extract<464, 479>());
  auto result_29 = denoise_generated_compute(lane_29_denoiseb);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<16> lane_30_denoiseb;
  set_at<0, 16, 16>(lane_30_denoiseb, denoiseb.extract<480, 495>());
  auto result_30 = denoise_generated_compute(lane_30_denoiseb);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<16> lane_31_denoiseb;
  set_at<0, 16, 16>(lane_31_denoiseb, denoiseb.extract<496, 511>());
  auto result_31 = denoise_generated_compute(lane_31_denoiseb);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // demosaicb_update_0 unroll factor: 32
hw_uint<512>  demosaicb_generated_compute_unrolled_32(hw_uint<4608>& denoise) {
  hw_uint<512> whole_result;

  hw_uint<144> lane_0_denoise;
  set_at<0, 144, 144>(lane_0_denoise, denoise.extract<0, 143>());
  auto result_0 = demosaicb_generated_compute(lane_0_denoise);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<144> lane_1_denoise;
  set_at<0, 144, 144>(lane_1_denoise, denoise.extract<144, 287>());
  auto result_1 = demosaicb_generated_compute(lane_1_denoise);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<144> lane_2_denoise;
  set_at<0, 144, 144>(lane_2_denoise, denoise.extract<288, 431>());
  auto result_2 = demosaicb_generated_compute(lane_2_denoise);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<144> lane_3_denoise;
  set_at<0, 144, 144>(lane_3_denoise, denoise.extract<432, 575>());
  auto result_3 = demosaicb_generated_compute(lane_3_denoise);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<144> lane_4_denoise;
  set_at<0, 144, 144>(lane_4_denoise, denoise.extract<576, 719>());
  auto result_4 = demosaicb_generated_compute(lane_4_denoise);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<144> lane_5_denoise;
  set_at<0, 144, 144>(lane_5_denoise, denoise.extract<720, 863>());
  auto result_5 = demosaicb_generated_compute(lane_5_denoise);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<144> lane_6_denoise;
  set_at<0, 144, 144>(lane_6_denoise, denoise.extract<864, 1007>());
  auto result_6 = demosaicb_generated_compute(lane_6_denoise);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<144> lane_7_denoise;
  set_at<0, 144, 144>(lane_7_denoise, denoise.extract<1008, 1151>());
  auto result_7 = demosaicb_generated_compute(lane_7_denoise);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<144> lane_8_denoise;
  set_at<0, 144, 144>(lane_8_denoise, denoise.extract<1152, 1295>());
  auto result_8 = demosaicb_generated_compute(lane_8_denoise);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<144> lane_9_denoise;
  set_at<0, 144, 144>(lane_9_denoise, denoise.extract<1296, 1439>());
  auto result_9 = demosaicb_generated_compute(lane_9_denoise);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<144> lane_10_denoise;
  set_at<0, 144, 144>(lane_10_denoise, denoise.extract<1440, 1583>());
  auto result_10 = demosaicb_generated_compute(lane_10_denoise);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<144> lane_11_denoise;
  set_at<0, 144, 144>(lane_11_denoise, denoise.extract<1584, 1727>());
  auto result_11 = demosaicb_generated_compute(lane_11_denoise);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<144> lane_12_denoise;
  set_at<0, 144, 144>(lane_12_denoise, denoise.extract<1728, 1871>());
  auto result_12 = demosaicb_generated_compute(lane_12_denoise);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<144> lane_13_denoise;
  set_at<0, 144, 144>(lane_13_denoise, denoise.extract<1872, 2015>());
  auto result_13 = demosaicb_generated_compute(lane_13_denoise);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<144> lane_14_denoise;
  set_at<0, 144, 144>(lane_14_denoise, denoise.extract<2016, 2159>());
  auto result_14 = demosaicb_generated_compute(lane_14_denoise);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<144> lane_15_denoise;
  set_at<0, 144, 144>(lane_15_denoise, denoise.extract<2160, 2303>());
  auto result_15 = demosaicb_generated_compute(lane_15_denoise);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<144> lane_16_denoise;
  set_at<0, 144, 144>(lane_16_denoise, denoise.extract<2304, 2447>());
  auto result_16 = demosaicb_generated_compute(lane_16_denoise);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<144> lane_17_denoise;
  set_at<0, 144, 144>(lane_17_denoise, denoise.extract<2448, 2591>());
  auto result_17 = demosaicb_generated_compute(lane_17_denoise);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<144> lane_18_denoise;
  set_at<0, 144, 144>(lane_18_denoise, denoise.extract<2592, 2735>());
  auto result_18 = demosaicb_generated_compute(lane_18_denoise);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<144> lane_19_denoise;
  set_at<0, 144, 144>(lane_19_denoise, denoise.extract<2736, 2879>());
  auto result_19 = demosaicb_generated_compute(lane_19_denoise);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<144> lane_20_denoise;
  set_at<0, 144, 144>(lane_20_denoise, denoise.extract<2880, 3023>());
  auto result_20 = demosaicb_generated_compute(lane_20_denoise);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<144> lane_21_denoise;
  set_at<0, 144, 144>(lane_21_denoise, denoise.extract<3024, 3167>());
  auto result_21 = demosaicb_generated_compute(lane_21_denoise);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<144> lane_22_denoise;
  set_at<0, 144, 144>(lane_22_denoise, denoise.extract<3168, 3311>());
  auto result_22 = demosaicb_generated_compute(lane_22_denoise);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<144> lane_23_denoise;
  set_at<0, 144, 144>(lane_23_denoise, denoise.extract<3312, 3455>());
  auto result_23 = demosaicb_generated_compute(lane_23_denoise);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<144> lane_24_denoise;
  set_at<0, 144, 144>(lane_24_denoise, denoise.extract<3456, 3599>());
  auto result_24 = demosaicb_generated_compute(lane_24_denoise);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<144> lane_25_denoise;
  set_at<0, 144, 144>(lane_25_denoise, denoise.extract<3600, 3743>());
  auto result_25 = demosaicb_generated_compute(lane_25_denoise);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<144> lane_26_denoise;
  set_at<0, 144, 144>(lane_26_denoise, denoise.extract<3744, 3887>());
  auto result_26 = demosaicb_generated_compute(lane_26_denoise);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<144> lane_27_denoise;
  set_at<0, 144, 144>(lane_27_denoise, denoise.extract<3888, 4031>());
  auto result_27 = demosaicb_generated_compute(lane_27_denoise);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<144> lane_28_denoise;
  set_at<0, 144, 144>(lane_28_denoise, denoise.extract<4032, 4175>());
  auto result_28 = demosaicb_generated_compute(lane_28_denoise);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<144> lane_29_denoise;
  set_at<0, 144, 144>(lane_29_denoise, denoise.extract<4176, 4319>());
  auto result_29 = demosaicb_generated_compute(lane_29_denoise);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<144> lane_30_denoise;
  set_at<0, 144, 144>(lane_30_denoise, denoise.extract<4320, 4463>());
  auto result_30 = demosaicb_generated_compute(lane_30_denoise);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<144> lane_31_denoise;
  set_at<0, 144, 144>(lane_31_denoise, denoise.extract<4464, 4607>());
  auto result_31 = demosaicb_generated_compute(lane_31_denoise);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // demosaic_update_0 unroll factor: 32
hw_uint<512>  demosaic_generated_compute_unrolled_32(hw_uint<512>& demosaicb) {
  hw_uint<512> whole_result;

  hw_uint<16> lane_0_demosaicb;
  set_at<0, 16, 16>(lane_0_demosaicb, demosaicb.extract<0, 15>());
  auto result_0 = demosaic_generated_compute(lane_0_demosaicb);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<16> lane_1_demosaicb;
  set_at<0, 16, 16>(lane_1_demosaicb, demosaicb.extract<16, 31>());
  auto result_1 = demosaic_generated_compute(lane_1_demosaicb);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<16> lane_2_demosaicb;
  set_at<0, 16, 16>(lane_2_demosaicb, demosaicb.extract<32, 47>());
  auto result_2 = demosaic_generated_compute(lane_2_demosaicb);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<16> lane_3_demosaicb;
  set_at<0, 16, 16>(lane_3_demosaicb, demosaicb.extract<48, 63>());
  auto result_3 = demosaic_generated_compute(lane_3_demosaicb);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<16> lane_4_demosaicb;
  set_at<0, 16, 16>(lane_4_demosaicb, demosaicb.extract<64, 79>());
  auto result_4 = demosaic_generated_compute(lane_4_demosaicb);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<16> lane_5_demosaicb;
  set_at<0, 16, 16>(lane_5_demosaicb, demosaicb.extract<80, 95>());
  auto result_5 = demosaic_generated_compute(lane_5_demosaicb);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<16> lane_6_demosaicb;
  set_at<0, 16, 16>(lane_6_demosaicb, demosaicb.extract<96, 111>());
  auto result_6 = demosaic_generated_compute(lane_6_demosaicb);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<16> lane_7_demosaicb;
  set_at<0, 16, 16>(lane_7_demosaicb, demosaicb.extract<112, 127>());
  auto result_7 = demosaic_generated_compute(lane_7_demosaicb);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<16> lane_8_demosaicb;
  set_at<0, 16, 16>(lane_8_demosaicb, demosaicb.extract<128, 143>());
  auto result_8 = demosaic_generated_compute(lane_8_demosaicb);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<16> lane_9_demosaicb;
  set_at<0, 16, 16>(lane_9_demosaicb, demosaicb.extract<144, 159>());
  auto result_9 = demosaic_generated_compute(lane_9_demosaicb);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<16> lane_10_demosaicb;
  set_at<0, 16, 16>(lane_10_demosaicb, demosaicb.extract<160, 175>());
  auto result_10 = demosaic_generated_compute(lane_10_demosaicb);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<16> lane_11_demosaicb;
  set_at<0, 16, 16>(lane_11_demosaicb, demosaicb.extract<176, 191>());
  auto result_11 = demosaic_generated_compute(lane_11_demosaicb);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<16> lane_12_demosaicb;
  set_at<0, 16, 16>(lane_12_demosaicb, demosaicb.extract<192, 207>());
  auto result_12 = demosaic_generated_compute(lane_12_demosaicb);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<16> lane_13_demosaicb;
  set_at<0, 16, 16>(lane_13_demosaicb, demosaicb.extract<208, 223>());
  auto result_13 = demosaic_generated_compute(lane_13_demosaicb);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<16> lane_14_demosaicb;
  set_at<0, 16, 16>(lane_14_demosaicb, demosaicb.extract<224, 239>());
  auto result_14 = demosaic_generated_compute(lane_14_demosaicb);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<16> lane_15_demosaicb;
  set_at<0, 16, 16>(lane_15_demosaicb, demosaicb.extract<240, 255>());
  auto result_15 = demosaic_generated_compute(lane_15_demosaicb);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<16> lane_16_demosaicb;
  set_at<0, 16, 16>(lane_16_demosaicb, demosaicb.extract<256, 271>());
  auto result_16 = demosaic_generated_compute(lane_16_demosaicb);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<16> lane_17_demosaicb;
  set_at<0, 16, 16>(lane_17_demosaicb, demosaicb.extract<272, 287>());
  auto result_17 = demosaic_generated_compute(lane_17_demosaicb);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<16> lane_18_demosaicb;
  set_at<0, 16, 16>(lane_18_demosaicb, demosaicb.extract<288, 303>());
  auto result_18 = demosaic_generated_compute(lane_18_demosaicb);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<16> lane_19_demosaicb;
  set_at<0, 16, 16>(lane_19_demosaicb, demosaicb.extract<304, 319>());
  auto result_19 = demosaic_generated_compute(lane_19_demosaicb);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<16> lane_20_demosaicb;
  set_at<0, 16, 16>(lane_20_demosaicb, demosaicb.extract<320, 335>());
  auto result_20 = demosaic_generated_compute(lane_20_demosaicb);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<16> lane_21_demosaicb;
  set_at<0, 16, 16>(lane_21_demosaicb, demosaicb.extract<336, 351>());
  auto result_21 = demosaic_generated_compute(lane_21_demosaicb);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<16> lane_22_demosaicb;
  set_at<0, 16, 16>(lane_22_demosaicb, demosaicb.extract<352, 367>());
  auto result_22 = demosaic_generated_compute(lane_22_demosaicb);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<16> lane_23_demosaicb;
  set_at<0, 16, 16>(lane_23_demosaicb, demosaicb.extract<368, 383>());
  auto result_23 = demosaic_generated_compute(lane_23_demosaicb);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<16> lane_24_demosaicb;
  set_at<0, 16, 16>(lane_24_demosaicb, demosaicb.extract<384, 399>());
  auto result_24 = demosaic_generated_compute(lane_24_demosaicb);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<16> lane_25_demosaicb;
  set_at<0, 16, 16>(lane_25_demosaicb, demosaicb.extract<400, 415>());
  auto result_25 = demosaic_generated_compute(lane_25_demosaicb);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<16> lane_26_demosaicb;
  set_at<0, 16, 16>(lane_26_demosaicb, demosaicb.extract<416, 431>());
  auto result_26 = demosaic_generated_compute(lane_26_demosaicb);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<16> lane_27_demosaicb;
  set_at<0, 16, 16>(lane_27_demosaicb, demosaicb.extract<432, 447>());
  auto result_27 = demosaic_generated_compute(lane_27_demosaicb);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<16> lane_28_demosaicb;
  set_at<0, 16, 16>(lane_28_demosaicb, demosaicb.extract<448, 463>());
  auto result_28 = demosaic_generated_compute(lane_28_demosaicb);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<16> lane_29_demosaicb;
  set_at<0, 16, 16>(lane_29_demosaicb, demosaicb.extract<464, 479>());
  auto result_29 = demosaic_generated_compute(lane_29_demosaicb);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<16> lane_30_demosaicb;
  set_at<0, 16, 16>(lane_30_demosaicb, demosaicb.extract<480, 495>());
  auto result_30 = demosaic_generated_compute(lane_30_demosaicb);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<16> lane_31_demosaicb;
  set_at<0, 16, 16>(lane_31_demosaicb, demosaicb.extract<496, 511>());
  auto result_31 = demosaic_generated_compute(lane_31_demosaicb);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // demosaic_bxb_update_0 unroll factor: 32
hw_uint<512>  demosaic_bxb_generated_compute_unrolled_32(hw_uint<1536>& demosaic) {
  hw_uint<512> whole_result;

  hw_uint<48> lane_0_demosaic;
  set_at<0, 48, 48>(lane_0_demosaic, demosaic.extract<0, 47>());
  auto result_0 = demosaic_bxb_generated_compute(lane_0_demosaic);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<48> lane_1_demosaic;
  set_at<0, 48, 48>(lane_1_demosaic, demosaic.extract<48, 95>());
  auto result_1 = demosaic_bxb_generated_compute(lane_1_demosaic);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<48> lane_2_demosaic;
  set_at<0, 48, 48>(lane_2_demosaic, demosaic.extract<96, 143>());
  auto result_2 = demosaic_bxb_generated_compute(lane_2_demosaic);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<48> lane_3_demosaic;
  set_at<0, 48, 48>(lane_3_demosaic, demosaic.extract<144, 191>());
  auto result_3 = demosaic_bxb_generated_compute(lane_3_demosaic);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<48> lane_4_demosaic;
  set_at<0, 48, 48>(lane_4_demosaic, demosaic.extract<192, 239>());
  auto result_4 = demosaic_bxb_generated_compute(lane_4_demosaic);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<48> lane_5_demosaic;
  set_at<0, 48, 48>(lane_5_demosaic, demosaic.extract<240, 287>());
  auto result_5 = demosaic_bxb_generated_compute(lane_5_demosaic);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<48> lane_6_demosaic;
  set_at<0, 48, 48>(lane_6_demosaic, demosaic.extract<288, 335>());
  auto result_6 = demosaic_bxb_generated_compute(lane_6_demosaic);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<48> lane_7_demosaic;
  set_at<0, 48, 48>(lane_7_demosaic, demosaic.extract<336, 383>());
  auto result_7 = demosaic_bxb_generated_compute(lane_7_demosaic);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<48> lane_8_demosaic;
  set_at<0, 48, 48>(lane_8_demosaic, demosaic.extract<384, 431>());
  auto result_8 = demosaic_bxb_generated_compute(lane_8_demosaic);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<48> lane_9_demosaic;
  set_at<0, 48, 48>(lane_9_demosaic, demosaic.extract<432, 479>());
  auto result_9 = demosaic_bxb_generated_compute(lane_9_demosaic);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<48> lane_10_demosaic;
  set_at<0, 48, 48>(lane_10_demosaic, demosaic.extract<480, 527>());
  auto result_10 = demosaic_bxb_generated_compute(lane_10_demosaic);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<48> lane_11_demosaic;
  set_at<0, 48, 48>(lane_11_demosaic, demosaic.extract<528, 575>());
  auto result_11 = demosaic_bxb_generated_compute(lane_11_demosaic);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<48> lane_12_demosaic;
  set_at<0, 48, 48>(lane_12_demosaic, demosaic.extract<576, 623>());
  auto result_12 = demosaic_bxb_generated_compute(lane_12_demosaic);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<48> lane_13_demosaic;
  set_at<0, 48, 48>(lane_13_demosaic, demosaic.extract<624, 671>());
  auto result_13 = demosaic_bxb_generated_compute(lane_13_demosaic);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<48> lane_14_demosaic;
  set_at<0, 48, 48>(lane_14_demosaic, demosaic.extract<672, 719>());
  auto result_14 = demosaic_bxb_generated_compute(lane_14_demosaic);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<48> lane_15_demosaic;
  set_at<0, 48, 48>(lane_15_demosaic, demosaic.extract<720, 767>());
  auto result_15 = demosaic_bxb_generated_compute(lane_15_demosaic);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<48> lane_16_demosaic;
  set_at<0, 48, 48>(lane_16_demosaic, demosaic.extract<768, 815>());
  auto result_16 = demosaic_bxb_generated_compute(lane_16_demosaic);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<48> lane_17_demosaic;
  set_at<0, 48, 48>(lane_17_demosaic, demosaic.extract<816, 863>());
  auto result_17 = demosaic_bxb_generated_compute(lane_17_demosaic);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<48> lane_18_demosaic;
  set_at<0, 48, 48>(lane_18_demosaic, demosaic.extract<864, 911>());
  auto result_18 = demosaic_bxb_generated_compute(lane_18_demosaic);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<48> lane_19_demosaic;
  set_at<0, 48, 48>(lane_19_demosaic, demosaic.extract<912, 959>());
  auto result_19 = demosaic_bxb_generated_compute(lane_19_demosaic);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<48> lane_20_demosaic;
  set_at<0, 48, 48>(lane_20_demosaic, demosaic.extract<960, 1007>());
  auto result_20 = demosaic_bxb_generated_compute(lane_20_demosaic);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<48> lane_21_demosaic;
  set_at<0, 48, 48>(lane_21_demosaic, demosaic.extract<1008, 1055>());
  auto result_21 = demosaic_bxb_generated_compute(lane_21_demosaic);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<48> lane_22_demosaic;
  set_at<0, 48, 48>(lane_22_demosaic, demosaic.extract<1056, 1103>());
  auto result_22 = demosaic_bxb_generated_compute(lane_22_demosaic);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<48> lane_23_demosaic;
  set_at<0, 48, 48>(lane_23_demosaic, demosaic.extract<1104, 1151>());
  auto result_23 = demosaic_bxb_generated_compute(lane_23_demosaic);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<48> lane_24_demosaic;
  set_at<0, 48, 48>(lane_24_demosaic, demosaic.extract<1152, 1199>());
  auto result_24 = demosaic_bxb_generated_compute(lane_24_demosaic);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<48> lane_25_demosaic;
  set_at<0, 48, 48>(lane_25_demosaic, demosaic.extract<1200, 1247>());
  auto result_25 = demosaic_bxb_generated_compute(lane_25_demosaic);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<48> lane_26_demosaic;
  set_at<0, 48, 48>(lane_26_demosaic, demosaic.extract<1248, 1295>());
  auto result_26 = demosaic_bxb_generated_compute(lane_26_demosaic);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<48> lane_27_demosaic;
  set_at<0, 48, 48>(lane_27_demosaic, demosaic.extract<1296, 1343>());
  auto result_27 = demosaic_bxb_generated_compute(lane_27_demosaic);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<48> lane_28_demosaic;
  set_at<0, 48, 48>(lane_28_demosaic, demosaic.extract<1344, 1391>());
  auto result_28 = demosaic_bxb_generated_compute(lane_28_demosaic);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<48> lane_29_demosaic;
  set_at<0, 48, 48>(lane_29_demosaic, demosaic.extract<1392, 1439>());
  auto result_29 = demosaic_bxb_generated_compute(lane_29_demosaic);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<48> lane_30_demosaic;
  set_at<0, 48, 48>(lane_30_demosaic, demosaic.extract<1440, 1487>());
  auto result_30 = demosaic_bxb_generated_compute(lane_30_demosaic);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<48> lane_31_demosaic;
  set_at<0, 48, 48>(lane_31_demosaic, demosaic.extract<1488, 1535>());
  auto result_31 = demosaic_bxb_generated_compute(lane_31_demosaic);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // demosaic_bx_update_0 unroll factor: 32
hw_uint<512>  demosaic_bx_generated_compute_unrolled_32(hw_uint<512>& demosaic_bxb) {
  hw_uint<512> whole_result;

  hw_uint<16> lane_0_demosaic_bxb;
  set_at<0, 16, 16>(lane_0_demosaic_bxb, demosaic_bxb.extract<0, 15>());
  auto result_0 = demosaic_bx_generated_compute(lane_0_demosaic_bxb);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<16> lane_1_demosaic_bxb;
  set_at<0, 16, 16>(lane_1_demosaic_bxb, demosaic_bxb.extract<16, 31>());
  auto result_1 = demosaic_bx_generated_compute(lane_1_demosaic_bxb);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<16> lane_2_demosaic_bxb;
  set_at<0, 16, 16>(lane_2_demosaic_bxb, demosaic_bxb.extract<32, 47>());
  auto result_2 = demosaic_bx_generated_compute(lane_2_demosaic_bxb);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<16> lane_3_demosaic_bxb;
  set_at<0, 16, 16>(lane_3_demosaic_bxb, demosaic_bxb.extract<48, 63>());
  auto result_3 = demosaic_bx_generated_compute(lane_3_demosaic_bxb);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<16> lane_4_demosaic_bxb;
  set_at<0, 16, 16>(lane_4_demosaic_bxb, demosaic_bxb.extract<64, 79>());
  auto result_4 = demosaic_bx_generated_compute(lane_4_demosaic_bxb);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<16> lane_5_demosaic_bxb;
  set_at<0, 16, 16>(lane_5_demosaic_bxb, demosaic_bxb.extract<80, 95>());
  auto result_5 = demosaic_bx_generated_compute(lane_5_demosaic_bxb);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<16> lane_6_demosaic_bxb;
  set_at<0, 16, 16>(lane_6_demosaic_bxb, demosaic_bxb.extract<96, 111>());
  auto result_6 = demosaic_bx_generated_compute(lane_6_demosaic_bxb);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<16> lane_7_demosaic_bxb;
  set_at<0, 16, 16>(lane_7_demosaic_bxb, demosaic_bxb.extract<112, 127>());
  auto result_7 = demosaic_bx_generated_compute(lane_7_demosaic_bxb);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<16> lane_8_demosaic_bxb;
  set_at<0, 16, 16>(lane_8_demosaic_bxb, demosaic_bxb.extract<128, 143>());
  auto result_8 = demosaic_bx_generated_compute(lane_8_demosaic_bxb);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<16> lane_9_demosaic_bxb;
  set_at<0, 16, 16>(lane_9_demosaic_bxb, demosaic_bxb.extract<144, 159>());
  auto result_9 = demosaic_bx_generated_compute(lane_9_demosaic_bxb);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<16> lane_10_demosaic_bxb;
  set_at<0, 16, 16>(lane_10_demosaic_bxb, demosaic_bxb.extract<160, 175>());
  auto result_10 = demosaic_bx_generated_compute(lane_10_demosaic_bxb);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<16> lane_11_demosaic_bxb;
  set_at<0, 16, 16>(lane_11_demosaic_bxb, demosaic_bxb.extract<176, 191>());
  auto result_11 = demosaic_bx_generated_compute(lane_11_demosaic_bxb);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<16> lane_12_demosaic_bxb;
  set_at<0, 16, 16>(lane_12_demosaic_bxb, demosaic_bxb.extract<192, 207>());
  auto result_12 = demosaic_bx_generated_compute(lane_12_demosaic_bxb);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<16> lane_13_demosaic_bxb;
  set_at<0, 16, 16>(lane_13_demosaic_bxb, demosaic_bxb.extract<208, 223>());
  auto result_13 = demosaic_bx_generated_compute(lane_13_demosaic_bxb);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<16> lane_14_demosaic_bxb;
  set_at<0, 16, 16>(lane_14_demosaic_bxb, demosaic_bxb.extract<224, 239>());
  auto result_14 = demosaic_bx_generated_compute(lane_14_demosaic_bxb);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<16> lane_15_demosaic_bxb;
  set_at<0, 16, 16>(lane_15_demosaic_bxb, demosaic_bxb.extract<240, 255>());
  auto result_15 = demosaic_bx_generated_compute(lane_15_demosaic_bxb);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<16> lane_16_demosaic_bxb;
  set_at<0, 16, 16>(lane_16_demosaic_bxb, demosaic_bxb.extract<256, 271>());
  auto result_16 = demosaic_bx_generated_compute(lane_16_demosaic_bxb);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<16> lane_17_demosaic_bxb;
  set_at<0, 16, 16>(lane_17_demosaic_bxb, demosaic_bxb.extract<272, 287>());
  auto result_17 = demosaic_bx_generated_compute(lane_17_demosaic_bxb);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<16> lane_18_demosaic_bxb;
  set_at<0, 16, 16>(lane_18_demosaic_bxb, demosaic_bxb.extract<288, 303>());
  auto result_18 = demosaic_bx_generated_compute(lane_18_demosaic_bxb);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<16> lane_19_demosaic_bxb;
  set_at<0, 16, 16>(lane_19_demosaic_bxb, demosaic_bxb.extract<304, 319>());
  auto result_19 = demosaic_bx_generated_compute(lane_19_demosaic_bxb);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<16> lane_20_demosaic_bxb;
  set_at<0, 16, 16>(lane_20_demosaic_bxb, demosaic_bxb.extract<320, 335>());
  auto result_20 = demosaic_bx_generated_compute(lane_20_demosaic_bxb);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<16> lane_21_demosaic_bxb;
  set_at<0, 16, 16>(lane_21_demosaic_bxb, demosaic_bxb.extract<336, 351>());
  auto result_21 = demosaic_bx_generated_compute(lane_21_demosaic_bxb);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<16> lane_22_demosaic_bxb;
  set_at<0, 16, 16>(lane_22_demosaic_bxb, demosaic_bxb.extract<352, 367>());
  auto result_22 = demosaic_bx_generated_compute(lane_22_demosaic_bxb);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<16> lane_23_demosaic_bxb;
  set_at<0, 16, 16>(lane_23_demosaic_bxb, demosaic_bxb.extract<368, 383>());
  auto result_23 = demosaic_bx_generated_compute(lane_23_demosaic_bxb);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<16> lane_24_demosaic_bxb;
  set_at<0, 16, 16>(lane_24_demosaic_bxb, demosaic_bxb.extract<384, 399>());
  auto result_24 = demosaic_bx_generated_compute(lane_24_demosaic_bxb);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<16> lane_25_demosaic_bxb;
  set_at<0, 16, 16>(lane_25_demosaic_bxb, demosaic_bxb.extract<400, 415>());
  auto result_25 = demosaic_bx_generated_compute(lane_25_demosaic_bxb);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<16> lane_26_demosaic_bxb;
  set_at<0, 16, 16>(lane_26_demosaic_bxb, demosaic_bxb.extract<416, 431>());
  auto result_26 = demosaic_bx_generated_compute(lane_26_demosaic_bxb);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<16> lane_27_demosaic_bxb;
  set_at<0, 16, 16>(lane_27_demosaic_bxb, demosaic_bxb.extract<432, 447>());
  auto result_27 = demosaic_bx_generated_compute(lane_27_demosaic_bxb);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<16> lane_28_demosaic_bxb;
  set_at<0, 16, 16>(lane_28_demosaic_bxb, demosaic_bxb.extract<448, 463>());
  auto result_28 = demosaic_bx_generated_compute(lane_28_demosaic_bxb);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<16> lane_29_demosaic_bxb;
  set_at<0, 16, 16>(lane_29_demosaic_bxb, demosaic_bxb.extract<464, 479>());
  auto result_29 = demosaic_bx_generated_compute(lane_29_demosaic_bxb);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<16> lane_30_demosaic_bxb;
  set_at<0, 16, 16>(lane_30_demosaic_bxb, demosaic_bxb.extract<480, 495>());
  auto result_30 = demosaic_bx_generated_compute(lane_30_demosaic_bxb);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<16> lane_31_demosaic_bxb;
  set_at<0, 16, 16>(lane_31_demosaic_bxb, demosaic_bxb.extract<496, 511>());
  auto result_31 = demosaic_bx_generated_compute(lane_31_demosaic_bxb);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // demosaic_byb_update_0 unroll factor: 32
hw_uint<512>  demosaic_byb_generated_compute_unrolled_32(hw_uint<1536>& demosaic_bx) {
  hw_uint<512> whole_result;

  hw_uint<48> lane_0_demosaic_bx;
  set_at<0, 48, 48>(lane_0_demosaic_bx, demosaic_bx.extract<0, 47>());
  auto result_0 = demosaic_byb_generated_compute(lane_0_demosaic_bx);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<48> lane_1_demosaic_bx;
  set_at<0, 48, 48>(lane_1_demosaic_bx, demosaic_bx.extract<48, 95>());
  auto result_1 = demosaic_byb_generated_compute(lane_1_demosaic_bx);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<48> lane_2_demosaic_bx;
  set_at<0, 48, 48>(lane_2_demosaic_bx, demosaic_bx.extract<96, 143>());
  auto result_2 = demosaic_byb_generated_compute(lane_2_demosaic_bx);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<48> lane_3_demosaic_bx;
  set_at<0, 48, 48>(lane_3_demosaic_bx, demosaic_bx.extract<144, 191>());
  auto result_3 = demosaic_byb_generated_compute(lane_3_demosaic_bx);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<48> lane_4_demosaic_bx;
  set_at<0, 48, 48>(lane_4_demosaic_bx, demosaic_bx.extract<192, 239>());
  auto result_4 = demosaic_byb_generated_compute(lane_4_demosaic_bx);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<48> lane_5_demosaic_bx;
  set_at<0, 48, 48>(lane_5_demosaic_bx, demosaic_bx.extract<240, 287>());
  auto result_5 = demosaic_byb_generated_compute(lane_5_demosaic_bx);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<48> lane_6_demosaic_bx;
  set_at<0, 48, 48>(lane_6_demosaic_bx, demosaic_bx.extract<288, 335>());
  auto result_6 = demosaic_byb_generated_compute(lane_6_demosaic_bx);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<48> lane_7_demosaic_bx;
  set_at<0, 48, 48>(lane_7_demosaic_bx, demosaic_bx.extract<336, 383>());
  auto result_7 = demosaic_byb_generated_compute(lane_7_demosaic_bx);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<48> lane_8_demosaic_bx;
  set_at<0, 48, 48>(lane_8_demosaic_bx, demosaic_bx.extract<384, 431>());
  auto result_8 = demosaic_byb_generated_compute(lane_8_demosaic_bx);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<48> lane_9_demosaic_bx;
  set_at<0, 48, 48>(lane_9_demosaic_bx, demosaic_bx.extract<432, 479>());
  auto result_9 = demosaic_byb_generated_compute(lane_9_demosaic_bx);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<48> lane_10_demosaic_bx;
  set_at<0, 48, 48>(lane_10_demosaic_bx, demosaic_bx.extract<480, 527>());
  auto result_10 = demosaic_byb_generated_compute(lane_10_demosaic_bx);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<48> lane_11_demosaic_bx;
  set_at<0, 48, 48>(lane_11_demosaic_bx, demosaic_bx.extract<528, 575>());
  auto result_11 = demosaic_byb_generated_compute(lane_11_demosaic_bx);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<48> lane_12_demosaic_bx;
  set_at<0, 48, 48>(lane_12_demosaic_bx, demosaic_bx.extract<576, 623>());
  auto result_12 = demosaic_byb_generated_compute(lane_12_demosaic_bx);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<48> lane_13_demosaic_bx;
  set_at<0, 48, 48>(lane_13_demosaic_bx, demosaic_bx.extract<624, 671>());
  auto result_13 = demosaic_byb_generated_compute(lane_13_demosaic_bx);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<48> lane_14_demosaic_bx;
  set_at<0, 48, 48>(lane_14_demosaic_bx, demosaic_bx.extract<672, 719>());
  auto result_14 = demosaic_byb_generated_compute(lane_14_demosaic_bx);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<48> lane_15_demosaic_bx;
  set_at<0, 48, 48>(lane_15_demosaic_bx, demosaic_bx.extract<720, 767>());
  auto result_15 = demosaic_byb_generated_compute(lane_15_demosaic_bx);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<48> lane_16_demosaic_bx;
  set_at<0, 48, 48>(lane_16_demosaic_bx, demosaic_bx.extract<768, 815>());
  auto result_16 = demosaic_byb_generated_compute(lane_16_demosaic_bx);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<48> lane_17_demosaic_bx;
  set_at<0, 48, 48>(lane_17_demosaic_bx, demosaic_bx.extract<816, 863>());
  auto result_17 = demosaic_byb_generated_compute(lane_17_demosaic_bx);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<48> lane_18_demosaic_bx;
  set_at<0, 48, 48>(lane_18_demosaic_bx, demosaic_bx.extract<864, 911>());
  auto result_18 = demosaic_byb_generated_compute(lane_18_demosaic_bx);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<48> lane_19_demosaic_bx;
  set_at<0, 48, 48>(lane_19_demosaic_bx, demosaic_bx.extract<912, 959>());
  auto result_19 = demosaic_byb_generated_compute(lane_19_demosaic_bx);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<48> lane_20_demosaic_bx;
  set_at<0, 48, 48>(lane_20_demosaic_bx, demosaic_bx.extract<960, 1007>());
  auto result_20 = demosaic_byb_generated_compute(lane_20_demosaic_bx);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<48> lane_21_demosaic_bx;
  set_at<0, 48, 48>(lane_21_demosaic_bx, demosaic_bx.extract<1008, 1055>());
  auto result_21 = demosaic_byb_generated_compute(lane_21_demosaic_bx);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<48> lane_22_demosaic_bx;
  set_at<0, 48, 48>(lane_22_demosaic_bx, demosaic_bx.extract<1056, 1103>());
  auto result_22 = demosaic_byb_generated_compute(lane_22_demosaic_bx);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<48> lane_23_demosaic_bx;
  set_at<0, 48, 48>(lane_23_demosaic_bx, demosaic_bx.extract<1104, 1151>());
  auto result_23 = demosaic_byb_generated_compute(lane_23_demosaic_bx);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<48> lane_24_demosaic_bx;
  set_at<0, 48, 48>(lane_24_demosaic_bx, demosaic_bx.extract<1152, 1199>());
  auto result_24 = demosaic_byb_generated_compute(lane_24_demosaic_bx);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<48> lane_25_demosaic_bx;
  set_at<0, 48, 48>(lane_25_demosaic_bx, demosaic_bx.extract<1200, 1247>());
  auto result_25 = demosaic_byb_generated_compute(lane_25_demosaic_bx);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<48> lane_26_demosaic_bx;
  set_at<0, 48, 48>(lane_26_demosaic_bx, demosaic_bx.extract<1248, 1295>());
  auto result_26 = demosaic_byb_generated_compute(lane_26_demosaic_bx);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<48> lane_27_demosaic_bx;
  set_at<0, 48, 48>(lane_27_demosaic_bx, demosaic_bx.extract<1296, 1343>());
  auto result_27 = demosaic_byb_generated_compute(lane_27_demosaic_bx);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<48> lane_28_demosaic_bx;
  set_at<0, 48, 48>(lane_28_demosaic_bx, demosaic_bx.extract<1344, 1391>());
  auto result_28 = demosaic_byb_generated_compute(lane_28_demosaic_bx);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<48> lane_29_demosaic_bx;
  set_at<0, 48, 48>(lane_29_demosaic_bx, demosaic_bx.extract<1392, 1439>());
  auto result_29 = demosaic_byb_generated_compute(lane_29_demosaic_bx);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<48> lane_30_demosaic_bx;
  set_at<0, 48, 48>(lane_30_demosaic_bx, demosaic_bx.extract<1440, 1487>());
  auto result_30 = demosaic_byb_generated_compute(lane_30_demosaic_bx);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<48> lane_31_demosaic_bx;
  set_at<0, 48, 48>(lane_31_demosaic_bx, demosaic_bx.extract<1488, 1535>());
  auto result_31 = demosaic_byb_generated_compute(lane_31_demosaic_bx);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // demosaic_by_update_0 unroll factor: 32
hw_uint<512>  demosaic_by_generated_compute_unrolled_32(hw_uint<512>& demosaic_byb) {
  hw_uint<512> whole_result;

  hw_uint<16> lane_0_demosaic_byb;
  set_at<0, 16, 16>(lane_0_demosaic_byb, demosaic_byb.extract<0, 15>());
  auto result_0 = demosaic_by_generated_compute(lane_0_demosaic_byb);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<16> lane_1_demosaic_byb;
  set_at<0, 16, 16>(lane_1_demosaic_byb, demosaic_byb.extract<16, 31>());
  auto result_1 = demosaic_by_generated_compute(lane_1_demosaic_byb);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<16> lane_2_demosaic_byb;
  set_at<0, 16, 16>(lane_2_demosaic_byb, demosaic_byb.extract<32, 47>());
  auto result_2 = demosaic_by_generated_compute(lane_2_demosaic_byb);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<16> lane_3_demosaic_byb;
  set_at<0, 16, 16>(lane_3_demosaic_byb, demosaic_byb.extract<48, 63>());
  auto result_3 = demosaic_by_generated_compute(lane_3_demosaic_byb);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<16> lane_4_demosaic_byb;
  set_at<0, 16, 16>(lane_4_demosaic_byb, demosaic_byb.extract<64, 79>());
  auto result_4 = demosaic_by_generated_compute(lane_4_demosaic_byb);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<16> lane_5_demosaic_byb;
  set_at<0, 16, 16>(lane_5_demosaic_byb, demosaic_byb.extract<80, 95>());
  auto result_5 = demosaic_by_generated_compute(lane_5_demosaic_byb);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<16> lane_6_demosaic_byb;
  set_at<0, 16, 16>(lane_6_demosaic_byb, demosaic_byb.extract<96, 111>());
  auto result_6 = demosaic_by_generated_compute(lane_6_demosaic_byb);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<16> lane_7_demosaic_byb;
  set_at<0, 16, 16>(lane_7_demosaic_byb, demosaic_byb.extract<112, 127>());
  auto result_7 = demosaic_by_generated_compute(lane_7_demosaic_byb);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<16> lane_8_demosaic_byb;
  set_at<0, 16, 16>(lane_8_demosaic_byb, demosaic_byb.extract<128, 143>());
  auto result_8 = demosaic_by_generated_compute(lane_8_demosaic_byb);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<16> lane_9_demosaic_byb;
  set_at<0, 16, 16>(lane_9_demosaic_byb, demosaic_byb.extract<144, 159>());
  auto result_9 = demosaic_by_generated_compute(lane_9_demosaic_byb);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<16> lane_10_demosaic_byb;
  set_at<0, 16, 16>(lane_10_demosaic_byb, demosaic_byb.extract<160, 175>());
  auto result_10 = demosaic_by_generated_compute(lane_10_demosaic_byb);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<16> lane_11_demosaic_byb;
  set_at<0, 16, 16>(lane_11_demosaic_byb, demosaic_byb.extract<176, 191>());
  auto result_11 = demosaic_by_generated_compute(lane_11_demosaic_byb);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<16> lane_12_demosaic_byb;
  set_at<0, 16, 16>(lane_12_demosaic_byb, demosaic_byb.extract<192, 207>());
  auto result_12 = demosaic_by_generated_compute(lane_12_demosaic_byb);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<16> lane_13_demosaic_byb;
  set_at<0, 16, 16>(lane_13_demosaic_byb, demosaic_byb.extract<208, 223>());
  auto result_13 = demosaic_by_generated_compute(lane_13_demosaic_byb);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<16> lane_14_demosaic_byb;
  set_at<0, 16, 16>(lane_14_demosaic_byb, demosaic_byb.extract<224, 239>());
  auto result_14 = demosaic_by_generated_compute(lane_14_demosaic_byb);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<16> lane_15_demosaic_byb;
  set_at<0, 16, 16>(lane_15_demosaic_byb, demosaic_byb.extract<240, 255>());
  auto result_15 = demosaic_by_generated_compute(lane_15_demosaic_byb);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<16> lane_16_demosaic_byb;
  set_at<0, 16, 16>(lane_16_demosaic_byb, demosaic_byb.extract<256, 271>());
  auto result_16 = demosaic_by_generated_compute(lane_16_demosaic_byb);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<16> lane_17_demosaic_byb;
  set_at<0, 16, 16>(lane_17_demosaic_byb, demosaic_byb.extract<272, 287>());
  auto result_17 = demosaic_by_generated_compute(lane_17_demosaic_byb);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<16> lane_18_demosaic_byb;
  set_at<0, 16, 16>(lane_18_demosaic_byb, demosaic_byb.extract<288, 303>());
  auto result_18 = demosaic_by_generated_compute(lane_18_demosaic_byb);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<16> lane_19_demosaic_byb;
  set_at<0, 16, 16>(lane_19_demosaic_byb, demosaic_byb.extract<304, 319>());
  auto result_19 = demosaic_by_generated_compute(lane_19_demosaic_byb);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<16> lane_20_demosaic_byb;
  set_at<0, 16, 16>(lane_20_demosaic_byb, demosaic_byb.extract<320, 335>());
  auto result_20 = demosaic_by_generated_compute(lane_20_demosaic_byb);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<16> lane_21_demosaic_byb;
  set_at<0, 16, 16>(lane_21_demosaic_byb, demosaic_byb.extract<336, 351>());
  auto result_21 = demosaic_by_generated_compute(lane_21_demosaic_byb);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<16> lane_22_demosaic_byb;
  set_at<0, 16, 16>(lane_22_demosaic_byb, demosaic_byb.extract<352, 367>());
  auto result_22 = demosaic_by_generated_compute(lane_22_demosaic_byb);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<16> lane_23_demosaic_byb;
  set_at<0, 16, 16>(lane_23_demosaic_byb, demosaic_byb.extract<368, 383>());
  auto result_23 = demosaic_by_generated_compute(lane_23_demosaic_byb);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<16> lane_24_demosaic_byb;
  set_at<0, 16, 16>(lane_24_demosaic_byb, demosaic_byb.extract<384, 399>());
  auto result_24 = demosaic_by_generated_compute(lane_24_demosaic_byb);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<16> lane_25_demosaic_byb;
  set_at<0, 16, 16>(lane_25_demosaic_byb, demosaic_byb.extract<400, 415>());
  auto result_25 = demosaic_by_generated_compute(lane_25_demosaic_byb);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<16> lane_26_demosaic_byb;
  set_at<0, 16, 16>(lane_26_demosaic_byb, demosaic_byb.extract<416, 431>());
  auto result_26 = demosaic_by_generated_compute(lane_26_demosaic_byb);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<16> lane_27_demosaic_byb;
  set_at<0, 16, 16>(lane_27_demosaic_byb, demosaic_byb.extract<432, 447>());
  auto result_27 = demosaic_by_generated_compute(lane_27_demosaic_byb);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<16> lane_28_demosaic_byb;
  set_at<0, 16, 16>(lane_28_demosaic_byb, demosaic_byb.extract<448, 463>());
  auto result_28 = demosaic_by_generated_compute(lane_28_demosaic_byb);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<16> lane_29_demosaic_byb;
  set_at<0, 16, 16>(lane_29_demosaic_byb, demosaic_byb.extract<464, 479>());
  auto result_29 = demosaic_by_generated_compute(lane_29_demosaic_byb);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<16> lane_30_demosaic_byb;
  set_at<0, 16, 16>(lane_30_demosaic_byb, demosaic_byb.extract<480, 495>());
  auto result_30 = demosaic_by_generated_compute(lane_30_demosaic_byb);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<16> lane_31_demosaic_byb;
  set_at<0, 16, 16>(lane_31_demosaic_byb, demosaic_byb.extract<496, 511>());
  auto result_31 = demosaic_by_generated_compute(lane_31_demosaic_byb);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // demosaic_diff_update_0 unroll factor: 32
hw_uint<512>  demosaic_diff_generated_compute_unrolled_32(hw_uint<512>& demosaic, hw_uint<512>& demosaic_by) {
  hw_uint<512> whole_result;

  hw_uint<16> lane_0_demosaic;
  set_at<0, 16, 16>(lane_0_demosaic, demosaic.extract<0, 15>());
  hw_uint<16> lane_0_demosaic_by;
  set_at<0, 16, 16>(lane_0_demosaic_by, demosaic_by.extract<0, 15>());
  auto result_0 = demosaic_diff_generated_compute(lane_0_demosaic, lane_0_demosaic_by);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<16> lane_1_demosaic;
  set_at<0, 16, 16>(lane_1_demosaic, demosaic.extract<16, 31>());
  hw_uint<16> lane_1_demosaic_by;
  set_at<0, 16, 16>(lane_1_demosaic_by, demosaic_by.extract<16, 31>());
  auto result_1 = demosaic_diff_generated_compute(lane_1_demosaic, lane_1_demosaic_by);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<16> lane_2_demosaic;
  set_at<0, 16, 16>(lane_2_demosaic, demosaic.extract<32, 47>());
  hw_uint<16> lane_2_demosaic_by;
  set_at<0, 16, 16>(lane_2_demosaic_by, demosaic_by.extract<32, 47>());
  auto result_2 = demosaic_diff_generated_compute(lane_2_demosaic, lane_2_demosaic_by);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<16> lane_3_demosaic;
  set_at<0, 16, 16>(lane_3_demosaic, demosaic.extract<48, 63>());
  hw_uint<16> lane_3_demosaic_by;
  set_at<0, 16, 16>(lane_3_demosaic_by, demosaic_by.extract<48, 63>());
  auto result_3 = demosaic_diff_generated_compute(lane_3_demosaic, lane_3_demosaic_by);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<16> lane_4_demosaic;
  set_at<0, 16, 16>(lane_4_demosaic, demosaic.extract<64, 79>());
  hw_uint<16> lane_4_demosaic_by;
  set_at<0, 16, 16>(lane_4_demosaic_by, demosaic_by.extract<64, 79>());
  auto result_4 = demosaic_diff_generated_compute(lane_4_demosaic, lane_4_demosaic_by);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<16> lane_5_demosaic;
  set_at<0, 16, 16>(lane_5_demosaic, demosaic.extract<80, 95>());
  hw_uint<16> lane_5_demosaic_by;
  set_at<0, 16, 16>(lane_5_demosaic_by, demosaic_by.extract<80, 95>());
  auto result_5 = demosaic_diff_generated_compute(lane_5_demosaic, lane_5_demosaic_by);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<16> lane_6_demosaic;
  set_at<0, 16, 16>(lane_6_demosaic, demosaic.extract<96, 111>());
  hw_uint<16> lane_6_demosaic_by;
  set_at<0, 16, 16>(lane_6_demosaic_by, demosaic_by.extract<96, 111>());
  auto result_6 = demosaic_diff_generated_compute(lane_6_demosaic, lane_6_demosaic_by);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<16> lane_7_demosaic;
  set_at<0, 16, 16>(lane_7_demosaic, demosaic.extract<112, 127>());
  hw_uint<16> lane_7_demosaic_by;
  set_at<0, 16, 16>(lane_7_demosaic_by, demosaic_by.extract<112, 127>());
  auto result_7 = demosaic_diff_generated_compute(lane_7_demosaic, lane_7_demosaic_by);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<16> lane_8_demosaic;
  set_at<0, 16, 16>(lane_8_demosaic, demosaic.extract<128, 143>());
  hw_uint<16> lane_8_demosaic_by;
  set_at<0, 16, 16>(lane_8_demosaic_by, demosaic_by.extract<128, 143>());
  auto result_8 = demosaic_diff_generated_compute(lane_8_demosaic, lane_8_demosaic_by);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<16> lane_9_demosaic;
  set_at<0, 16, 16>(lane_9_demosaic, demosaic.extract<144, 159>());
  hw_uint<16> lane_9_demosaic_by;
  set_at<0, 16, 16>(lane_9_demosaic_by, demosaic_by.extract<144, 159>());
  auto result_9 = demosaic_diff_generated_compute(lane_9_demosaic, lane_9_demosaic_by);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<16> lane_10_demosaic;
  set_at<0, 16, 16>(lane_10_demosaic, demosaic.extract<160, 175>());
  hw_uint<16> lane_10_demosaic_by;
  set_at<0, 16, 16>(lane_10_demosaic_by, demosaic_by.extract<160, 175>());
  auto result_10 = demosaic_diff_generated_compute(lane_10_demosaic, lane_10_demosaic_by);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<16> lane_11_demosaic;
  set_at<0, 16, 16>(lane_11_demosaic, demosaic.extract<176, 191>());
  hw_uint<16> lane_11_demosaic_by;
  set_at<0, 16, 16>(lane_11_demosaic_by, demosaic_by.extract<176, 191>());
  auto result_11 = demosaic_diff_generated_compute(lane_11_demosaic, lane_11_demosaic_by);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<16> lane_12_demosaic;
  set_at<0, 16, 16>(lane_12_demosaic, demosaic.extract<192, 207>());
  hw_uint<16> lane_12_demosaic_by;
  set_at<0, 16, 16>(lane_12_demosaic_by, demosaic_by.extract<192, 207>());
  auto result_12 = demosaic_diff_generated_compute(lane_12_demosaic, lane_12_demosaic_by);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<16> lane_13_demosaic;
  set_at<0, 16, 16>(lane_13_demosaic, demosaic.extract<208, 223>());
  hw_uint<16> lane_13_demosaic_by;
  set_at<0, 16, 16>(lane_13_demosaic_by, demosaic_by.extract<208, 223>());
  auto result_13 = demosaic_diff_generated_compute(lane_13_demosaic, lane_13_demosaic_by);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<16> lane_14_demosaic;
  set_at<0, 16, 16>(lane_14_demosaic, demosaic.extract<224, 239>());
  hw_uint<16> lane_14_demosaic_by;
  set_at<0, 16, 16>(lane_14_demosaic_by, demosaic_by.extract<224, 239>());
  auto result_14 = demosaic_diff_generated_compute(lane_14_demosaic, lane_14_demosaic_by);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<16> lane_15_demosaic;
  set_at<0, 16, 16>(lane_15_demosaic, demosaic.extract<240, 255>());
  hw_uint<16> lane_15_demosaic_by;
  set_at<0, 16, 16>(lane_15_demosaic_by, demosaic_by.extract<240, 255>());
  auto result_15 = demosaic_diff_generated_compute(lane_15_demosaic, lane_15_demosaic_by);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<16> lane_16_demosaic;
  set_at<0, 16, 16>(lane_16_demosaic, demosaic.extract<256, 271>());
  hw_uint<16> lane_16_demosaic_by;
  set_at<0, 16, 16>(lane_16_demosaic_by, demosaic_by.extract<256, 271>());
  auto result_16 = demosaic_diff_generated_compute(lane_16_demosaic, lane_16_demosaic_by);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<16> lane_17_demosaic;
  set_at<0, 16, 16>(lane_17_demosaic, demosaic.extract<272, 287>());
  hw_uint<16> lane_17_demosaic_by;
  set_at<0, 16, 16>(lane_17_demosaic_by, demosaic_by.extract<272, 287>());
  auto result_17 = demosaic_diff_generated_compute(lane_17_demosaic, lane_17_demosaic_by);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<16> lane_18_demosaic;
  set_at<0, 16, 16>(lane_18_demosaic, demosaic.extract<288, 303>());
  hw_uint<16> lane_18_demosaic_by;
  set_at<0, 16, 16>(lane_18_demosaic_by, demosaic_by.extract<288, 303>());
  auto result_18 = demosaic_diff_generated_compute(lane_18_demosaic, lane_18_demosaic_by);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<16> lane_19_demosaic;
  set_at<0, 16, 16>(lane_19_demosaic, demosaic.extract<304, 319>());
  hw_uint<16> lane_19_demosaic_by;
  set_at<0, 16, 16>(lane_19_demosaic_by, demosaic_by.extract<304, 319>());
  auto result_19 = demosaic_diff_generated_compute(lane_19_demosaic, lane_19_demosaic_by);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<16> lane_20_demosaic;
  set_at<0, 16, 16>(lane_20_demosaic, demosaic.extract<320, 335>());
  hw_uint<16> lane_20_demosaic_by;
  set_at<0, 16, 16>(lane_20_demosaic_by, demosaic_by.extract<320, 335>());
  auto result_20 = demosaic_diff_generated_compute(lane_20_demosaic, lane_20_demosaic_by);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<16> lane_21_demosaic;
  set_at<0, 16, 16>(lane_21_demosaic, demosaic.extract<336, 351>());
  hw_uint<16> lane_21_demosaic_by;
  set_at<0, 16, 16>(lane_21_demosaic_by, demosaic_by.extract<336, 351>());
  auto result_21 = demosaic_diff_generated_compute(lane_21_demosaic, lane_21_demosaic_by);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<16> lane_22_demosaic;
  set_at<0, 16, 16>(lane_22_demosaic, demosaic.extract<352, 367>());
  hw_uint<16> lane_22_demosaic_by;
  set_at<0, 16, 16>(lane_22_demosaic_by, demosaic_by.extract<352, 367>());
  auto result_22 = demosaic_diff_generated_compute(lane_22_demosaic, lane_22_demosaic_by);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<16> lane_23_demosaic;
  set_at<0, 16, 16>(lane_23_demosaic, demosaic.extract<368, 383>());
  hw_uint<16> lane_23_demosaic_by;
  set_at<0, 16, 16>(lane_23_demosaic_by, demosaic_by.extract<368, 383>());
  auto result_23 = demosaic_diff_generated_compute(lane_23_demosaic, lane_23_demosaic_by);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<16> lane_24_demosaic;
  set_at<0, 16, 16>(lane_24_demosaic, demosaic.extract<384, 399>());
  hw_uint<16> lane_24_demosaic_by;
  set_at<0, 16, 16>(lane_24_demosaic_by, demosaic_by.extract<384, 399>());
  auto result_24 = demosaic_diff_generated_compute(lane_24_demosaic, lane_24_demosaic_by);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<16> lane_25_demosaic;
  set_at<0, 16, 16>(lane_25_demosaic, demosaic.extract<400, 415>());
  hw_uint<16> lane_25_demosaic_by;
  set_at<0, 16, 16>(lane_25_demosaic_by, demosaic_by.extract<400, 415>());
  auto result_25 = demosaic_diff_generated_compute(lane_25_demosaic, lane_25_demosaic_by);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<16> lane_26_demosaic;
  set_at<0, 16, 16>(lane_26_demosaic, demosaic.extract<416, 431>());
  hw_uint<16> lane_26_demosaic_by;
  set_at<0, 16, 16>(lane_26_demosaic_by, demosaic_by.extract<416, 431>());
  auto result_26 = demosaic_diff_generated_compute(lane_26_demosaic, lane_26_demosaic_by);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<16> lane_27_demosaic;
  set_at<0, 16, 16>(lane_27_demosaic, demosaic.extract<432, 447>());
  hw_uint<16> lane_27_demosaic_by;
  set_at<0, 16, 16>(lane_27_demosaic_by, demosaic_by.extract<432, 447>());
  auto result_27 = demosaic_diff_generated_compute(lane_27_demosaic, lane_27_demosaic_by);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<16> lane_28_demosaic;
  set_at<0, 16, 16>(lane_28_demosaic, demosaic.extract<448, 463>());
  hw_uint<16> lane_28_demosaic_by;
  set_at<0, 16, 16>(lane_28_demosaic_by, demosaic_by.extract<448, 463>());
  auto result_28 = demosaic_diff_generated_compute(lane_28_demosaic, lane_28_demosaic_by);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<16> lane_29_demosaic;
  set_at<0, 16, 16>(lane_29_demosaic, demosaic.extract<464, 479>());
  hw_uint<16> lane_29_demosaic_by;
  set_at<0, 16, 16>(lane_29_demosaic_by, demosaic_by.extract<464, 479>());
  auto result_29 = demosaic_diff_generated_compute(lane_29_demosaic, lane_29_demosaic_by);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<16> lane_30_demosaic;
  set_at<0, 16, 16>(lane_30_demosaic, demosaic.extract<480, 495>());
  hw_uint<16> lane_30_demosaic_by;
  set_at<0, 16, 16>(lane_30_demosaic_by, demosaic_by.extract<480, 495>());
  auto result_30 = demosaic_diff_generated_compute(lane_30_demosaic, lane_30_demosaic_by);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<16> lane_31_demosaic;
  set_at<0, 16, 16>(lane_31_demosaic, demosaic.extract<496, 511>());
  hw_uint<16> lane_31_demosaic_by;
  set_at<0, 16, 16>(lane_31_demosaic_by, demosaic_by.extract<496, 511>());
  auto result_31 = demosaic_diff_generated_compute(lane_31_demosaic, lane_31_demosaic_by);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

  // cp_noinit_ln1_32_update_0 unroll factor: 32
hw_uint<512>  cp_noinit_ln1_32_generated_compute_unrolled_32(hw_uint<512>& demosaic_diff) {
  hw_uint<512> whole_result;

  hw_uint<16> lane_0_demosaic_diff;
  set_at<0, 16, 16>(lane_0_demosaic_diff, demosaic_diff.extract<0, 15>());
  auto result_0 = cp_noinit_ln1_32_generated_compute(lane_0_demosaic_diff);
  set_at<0, 512, 16>(whole_result, result_0);

  hw_uint<16> lane_1_demosaic_diff;
  set_at<0, 16, 16>(lane_1_demosaic_diff, demosaic_diff.extract<16, 31>());
  auto result_1 = cp_noinit_ln1_32_generated_compute(lane_1_demosaic_diff);
  set_at<16, 512, 16>(whole_result, result_1);

  hw_uint<16> lane_2_demosaic_diff;
  set_at<0, 16, 16>(lane_2_demosaic_diff, demosaic_diff.extract<32, 47>());
  auto result_2 = cp_noinit_ln1_32_generated_compute(lane_2_demosaic_diff);
  set_at<32, 512, 16>(whole_result, result_2);

  hw_uint<16> lane_3_demosaic_diff;
  set_at<0, 16, 16>(lane_3_demosaic_diff, demosaic_diff.extract<48, 63>());
  auto result_3 = cp_noinit_ln1_32_generated_compute(lane_3_demosaic_diff);
  set_at<48, 512, 16>(whole_result, result_3);

  hw_uint<16> lane_4_demosaic_diff;
  set_at<0, 16, 16>(lane_4_demosaic_diff, demosaic_diff.extract<64, 79>());
  auto result_4 = cp_noinit_ln1_32_generated_compute(lane_4_demosaic_diff);
  set_at<64, 512, 16>(whole_result, result_4);

  hw_uint<16> lane_5_demosaic_diff;
  set_at<0, 16, 16>(lane_5_demosaic_diff, demosaic_diff.extract<80, 95>());
  auto result_5 = cp_noinit_ln1_32_generated_compute(lane_5_demosaic_diff);
  set_at<80, 512, 16>(whole_result, result_5);

  hw_uint<16> lane_6_demosaic_diff;
  set_at<0, 16, 16>(lane_6_demosaic_diff, demosaic_diff.extract<96, 111>());
  auto result_6 = cp_noinit_ln1_32_generated_compute(lane_6_demosaic_diff);
  set_at<96, 512, 16>(whole_result, result_6);

  hw_uint<16> lane_7_demosaic_diff;
  set_at<0, 16, 16>(lane_7_demosaic_diff, demosaic_diff.extract<112, 127>());
  auto result_7 = cp_noinit_ln1_32_generated_compute(lane_7_demosaic_diff);
  set_at<112, 512, 16>(whole_result, result_7);

  hw_uint<16> lane_8_demosaic_diff;
  set_at<0, 16, 16>(lane_8_demosaic_diff, demosaic_diff.extract<128, 143>());
  auto result_8 = cp_noinit_ln1_32_generated_compute(lane_8_demosaic_diff);
  set_at<128, 512, 16>(whole_result, result_8);

  hw_uint<16> lane_9_demosaic_diff;
  set_at<0, 16, 16>(lane_9_demosaic_diff, demosaic_diff.extract<144, 159>());
  auto result_9 = cp_noinit_ln1_32_generated_compute(lane_9_demosaic_diff);
  set_at<144, 512, 16>(whole_result, result_9);

  hw_uint<16> lane_10_demosaic_diff;
  set_at<0, 16, 16>(lane_10_demosaic_diff, demosaic_diff.extract<160, 175>());
  auto result_10 = cp_noinit_ln1_32_generated_compute(lane_10_demosaic_diff);
  set_at<160, 512, 16>(whole_result, result_10);

  hw_uint<16> lane_11_demosaic_diff;
  set_at<0, 16, 16>(lane_11_demosaic_diff, demosaic_diff.extract<176, 191>());
  auto result_11 = cp_noinit_ln1_32_generated_compute(lane_11_demosaic_diff);
  set_at<176, 512, 16>(whole_result, result_11);

  hw_uint<16> lane_12_demosaic_diff;
  set_at<0, 16, 16>(lane_12_demosaic_diff, demosaic_diff.extract<192, 207>());
  auto result_12 = cp_noinit_ln1_32_generated_compute(lane_12_demosaic_diff);
  set_at<192, 512, 16>(whole_result, result_12);

  hw_uint<16> lane_13_demosaic_diff;
  set_at<0, 16, 16>(lane_13_demosaic_diff, demosaic_diff.extract<208, 223>());
  auto result_13 = cp_noinit_ln1_32_generated_compute(lane_13_demosaic_diff);
  set_at<208, 512, 16>(whole_result, result_13);

  hw_uint<16> lane_14_demosaic_diff;
  set_at<0, 16, 16>(lane_14_demosaic_diff, demosaic_diff.extract<224, 239>());
  auto result_14 = cp_noinit_ln1_32_generated_compute(lane_14_demosaic_diff);
  set_at<224, 512, 16>(whole_result, result_14);

  hw_uint<16> lane_15_demosaic_diff;
  set_at<0, 16, 16>(lane_15_demosaic_diff, demosaic_diff.extract<240, 255>());
  auto result_15 = cp_noinit_ln1_32_generated_compute(lane_15_demosaic_diff);
  set_at<240, 512, 16>(whole_result, result_15);

  hw_uint<16> lane_16_demosaic_diff;
  set_at<0, 16, 16>(lane_16_demosaic_diff, demosaic_diff.extract<256, 271>());
  auto result_16 = cp_noinit_ln1_32_generated_compute(lane_16_demosaic_diff);
  set_at<256, 512, 16>(whole_result, result_16);

  hw_uint<16> lane_17_demosaic_diff;
  set_at<0, 16, 16>(lane_17_demosaic_diff, demosaic_diff.extract<272, 287>());
  auto result_17 = cp_noinit_ln1_32_generated_compute(lane_17_demosaic_diff);
  set_at<272, 512, 16>(whole_result, result_17);

  hw_uint<16> lane_18_demosaic_diff;
  set_at<0, 16, 16>(lane_18_demosaic_diff, demosaic_diff.extract<288, 303>());
  auto result_18 = cp_noinit_ln1_32_generated_compute(lane_18_demosaic_diff);
  set_at<288, 512, 16>(whole_result, result_18);

  hw_uint<16> lane_19_demosaic_diff;
  set_at<0, 16, 16>(lane_19_demosaic_diff, demosaic_diff.extract<304, 319>());
  auto result_19 = cp_noinit_ln1_32_generated_compute(lane_19_demosaic_diff);
  set_at<304, 512, 16>(whole_result, result_19);

  hw_uint<16> lane_20_demosaic_diff;
  set_at<0, 16, 16>(lane_20_demosaic_diff, demosaic_diff.extract<320, 335>());
  auto result_20 = cp_noinit_ln1_32_generated_compute(lane_20_demosaic_diff);
  set_at<320, 512, 16>(whole_result, result_20);

  hw_uint<16> lane_21_demosaic_diff;
  set_at<0, 16, 16>(lane_21_demosaic_diff, demosaic_diff.extract<336, 351>());
  auto result_21 = cp_noinit_ln1_32_generated_compute(lane_21_demosaic_diff);
  set_at<336, 512, 16>(whole_result, result_21);

  hw_uint<16> lane_22_demosaic_diff;
  set_at<0, 16, 16>(lane_22_demosaic_diff, demosaic_diff.extract<352, 367>());
  auto result_22 = cp_noinit_ln1_32_generated_compute(lane_22_demosaic_diff);
  set_at<352, 512, 16>(whole_result, result_22);

  hw_uint<16> lane_23_demosaic_diff;
  set_at<0, 16, 16>(lane_23_demosaic_diff, demosaic_diff.extract<368, 383>());
  auto result_23 = cp_noinit_ln1_32_generated_compute(lane_23_demosaic_diff);
  set_at<368, 512, 16>(whole_result, result_23);

  hw_uint<16> lane_24_demosaic_diff;
  set_at<0, 16, 16>(lane_24_demosaic_diff, demosaic_diff.extract<384, 399>());
  auto result_24 = cp_noinit_ln1_32_generated_compute(lane_24_demosaic_diff);
  set_at<384, 512, 16>(whole_result, result_24);

  hw_uint<16> lane_25_demosaic_diff;
  set_at<0, 16, 16>(lane_25_demosaic_diff, demosaic_diff.extract<400, 415>());
  auto result_25 = cp_noinit_ln1_32_generated_compute(lane_25_demosaic_diff);
  set_at<400, 512, 16>(whole_result, result_25);

  hw_uint<16> lane_26_demosaic_diff;
  set_at<0, 16, 16>(lane_26_demosaic_diff, demosaic_diff.extract<416, 431>());
  auto result_26 = cp_noinit_ln1_32_generated_compute(lane_26_demosaic_diff);
  set_at<416, 512, 16>(whole_result, result_26);

  hw_uint<16> lane_27_demosaic_diff;
  set_at<0, 16, 16>(lane_27_demosaic_diff, demosaic_diff.extract<432, 447>());
  auto result_27 = cp_noinit_ln1_32_generated_compute(lane_27_demosaic_diff);
  set_at<432, 512, 16>(whole_result, result_27);

  hw_uint<16> lane_28_demosaic_diff;
  set_at<0, 16, 16>(lane_28_demosaic_diff, demosaic_diff.extract<448, 463>());
  auto result_28 = cp_noinit_ln1_32_generated_compute(lane_28_demosaic_diff);
  set_at<448, 512, 16>(whole_result, result_28);

  hw_uint<16> lane_29_demosaic_diff;
  set_at<0, 16, 16>(lane_29_demosaic_diff, demosaic_diff.extract<464, 479>());
  auto result_29 = cp_noinit_ln1_32_generated_compute(lane_29_demosaic_diff);
  set_at<464, 512, 16>(whole_result, result_29);

  hw_uint<16> lane_30_demosaic_diff;
  set_at<0, 16, 16>(lane_30_demosaic_diff, demosaic_diff.extract<480, 495>());
  auto result_30 = cp_noinit_ln1_32_generated_compute(lane_30_demosaic_diff);
  set_at<480, 512, 16>(whole_result, result_30);

  hw_uint<16> lane_31_demosaic_diff;
  set_at<0, 16, 16>(lane_31_demosaic_diff, demosaic_diff.extract<496, 511>());
  auto result_31 = cp_noinit_ln1_32_generated_compute(lane_31_demosaic_diff);
  set_at<496, 512, 16>(whole_result, result_31);
  return whole_result;
}

