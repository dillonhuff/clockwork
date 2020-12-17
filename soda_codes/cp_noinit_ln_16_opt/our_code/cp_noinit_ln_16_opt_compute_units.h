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

hw_uint<16> cp_noinit_ln_16_generated_compute(hw_uint<16*1> demosaic_diff) {
  return uint16_t((uint16_t(demosaic_diff.get<16, 0>()) + 20));
}



// Compute unit banks...
  // raw_update_0 unroll factor: 16
hw_uint<256>  raw_generated_compute_unrolled_16(hw_uint<256>& raw_oc) {
  hw_uint<256> whole_result;

  hw_uint<16> lane_0_raw_oc;
  set_at<0, 16, 16>(lane_0_raw_oc, raw_oc.extract<0, 15>());
  auto result_0 = raw_generated_compute(lane_0_raw_oc);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<16> lane_1_raw_oc;
  set_at<0, 16, 16>(lane_1_raw_oc, raw_oc.extract<16, 31>());
  auto result_1 = raw_generated_compute(lane_1_raw_oc);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<16> lane_2_raw_oc;
  set_at<0, 16, 16>(lane_2_raw_oc, raw_oc.extract<32, 47>());
  auto result_2 = raw_generated_compute(lane_2_raw_oc);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<16> lane_3_raw_oc;
  set_at<0, 16, 16>(lane_3_raw_oc, raw_oc.extract<48, 63>());
  auto result_3 = raw_generated_compute(lane_3_raw_oc);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<16> lane_4_raw_oc;
  set_at<0, 16, 16>(lane_4_raw_oc, raw_oc.extract<64, 79>());
  auto result_4 = raw_generated_compute(lane_4_raw_oc);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<16> lane_5_raw_oc;
  set_at<0, 16, 16>(lane_5_raw_oc, raw_oc.extract<80, 95>());
  auto result_5 = raw_generated_compute(lane_5_raw_oc);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<16> lane_6_raw_oc;
  set_at<0, 16, 16>(lane_6_raw_oc, raw_oc.extract<96, 111>());
  auto result_6 = raw_generated_compute(lane_6_raw_oc);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<16> lane_7_raw_oc;
  set_at<0, 16, 16>(lane_7_raw_oc, raw_oc.extract<112, 127>());
  auto result_7 = raw_generated_compute(lane_7_raw_oc);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<16> lane_8_raw_oc;
  set_at<0, 16, 16>(lane_8_raw_oc, raw_oc.extract<128, 143>());
  auto result_8 = raw_generated_compute(lane_8_raw_oc);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<16> lane_9_raw_oc;
  set_at<0, 16, 16>(lane_9_raw_oc, raw_oc.extract<144, 159>());
  auto result_9 = raw_generated_compute(lane_9_raw_oc);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<16> lane_10_raw_oc;
  set_at<0, 16, 16>(lane_10_raw_oc, raw_oc.extract<160, 175>());
  auto result_10 = raw_generated_compute(lane_10_raw_oc);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<16> lane_11_raw_oc;
  set_at<0, 16, 16>(lane_11_raw_oc, raw_oc.extract<176, 191>());
  auto result_11 = raw_generated_compute(lane_11_raw_oc);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<16> lane_12_raw_oc;
  set_at<0, 16, 16>(lane_12_raw_oc, raw_oc.extract<192, 207>());
  auto result_12 = raw_generated_compute(lane_12_raw_oc);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<16> lane_13_raw_oc;
  set_at<0, 16, 16>(lane_13_raw_oc, raw_oc.extract<208, 223>());
  auto result_13 = raw_generated_compute(lane_13_raw_oc);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<16> lane_14_raw_oc;
  set_at<0, 16, 16>(lane_14_raw_oc, raw_oc.extract<224, 239>());
  auto result_14 = raw_generated_compute(lane_14_raw_oc);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<16> lane_15_raw_oc;
  set_at<0, 16, 16>(lane_15_raw_oc, raw_oc.extract<240, 255>());
  auto result_15 = raw_generated_compute(lane_15_raw_oc);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // denoiseb_update_0 unroll factor: 16
hw_uint<256>  denoiseb_generated_compute_unrolled_16(hw_uint<6400>& raw) {
  hw_uint<256> whole_result;

  hw_uint<400> lane_0_raw;
  set_at<0, 400, 400>(lane_0_raw, raw.extract<0, 399>());
  auto result_0 = denoiseb_generated_compute(lane_0_raw);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<400> lane_1_raw;
  set_at<0, 400, 400>(lane_1_raw, raw.extract<400, 799>());
  auto result_1 = denoiseb_generated_compute(lane_1_raw);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<400> lane_2_raw;
  set_at<0, 400, 400>(lane_2_raw, raw.extract<800, 1199>());
  auto result_2 = denoiseb_generated_compute(lane_2_raw);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<400> lane_3_raw;
  set_at<0, 400, 400>(lane_3_raw, raw.extract<1200, 1599>());
  auto result_3 = denoiseb_generated_compute(lane_3_raw);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<400> lane_4_raw;
  set_at<0, 400, 400>(lane_4_raw, raw.extract<1600, 1999>());
  auto result_4 = denoiseb_generated_compute(lane_4_raw);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<400> lane_5_raw;
  set_at<0, 400, 400>(lane_5_raw, raw.extract<2000, 2399>());
  auto result_5 = denoiseb_generated_compute(lane_5_raw);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<400> lane_6_raw;
  set_at<0, 400, 400>(lane_6_raw, raw.extract<2400, 2799>());
  auto result_6 = denoiseb_generated_compute(lane_6_raw);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<400> lane_7_raw;
  set_at<0, 400, 400>(lane_7_raw, raw.extract<2800, 3199>());
  auto result_7 = denoiseb_generated_compute(lane_7_raw);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<400> lane_8_raw;
  set_at<0, 400, 400>(lane_8_raw, raw.extract<3200, 3599>());
  auto result_8 = denoiseb_generated_compute(lane_8_raw);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<400> lane_9_raw;
  set_at<0, 400, 400>(lane_9_raw, raw.extract<3600, 3999>());
  auto result_9 = denoiseb_generated_compute(lane_9_raw);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<400> lane_10_raw;
  set_at<0, 400, 400>(lane_10_raw, raw.extract<4000, 4399>());
  auto result_10 = denoiseb_generated_compute(lane_10_raw);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<400> lane_11_raw;
  set_at<0, 400, 400>(lane_11_raw, raw.extract<4400, 4799>());
  auto result_11 = denoiseb_generated_compute(lane_11_raw);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<400> lane_12_raw;
  set_at<0, 400, 400>(lane_12_raw, raw.extract<4800, 5199>());
  auto result_12 = denoiseb_generated_compute(lane_12_raw);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<400> lane_13_raw;
  set_at<0, 400, 400>(lane_13_raw, raw.extract<5200, 5599>());
  auto result_13 = denoiseb_generated_compute(lane_13_raw);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<400> lane_14_raw;
  set_at<0, 400, 400>(lane_14_raw, raw.extract<5600, 5999>());
  auto result_14 = denoiseb_generated_compute(lane_14_raw);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<400> lane_15_raw;
  set_at<0, 400, 400>(lane_15_raw, raw.extract<6000, 6399>());
  auto result_15 = denoiseb_generated_compute(lane_15_raw);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // denoise_update_0 unroll factor: 16
hw_uint<256>  denoise_generated_compute_unrolled_16(hw_uint<256>& denoiseb) {
  hw_uint<256> whole_result;

  hw_uint<16> lane_0_denoiseb;
  set_at<0, 16, 16>(lane_0_denoiseb, denoiseb.extract<0, 15>());
  auto result_0 = denoise_generated_compute(lane_0_denoiseb);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<16> lane_1_denoiseb;
  set_at<0, 16, 16>(lane_1_denoiseb, denoiseb.extract<16, 31>());
  auto result_1 = denoise_generated_compute(lane_1_denoiseb);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<16> lane_2_denoiseb;
  set_at<0, 16, 16>(lane_2_denoiseb, denoiseb.extract<32, 47>());
  auto result_2 = denoise_generated_compute(lane_2_denoiseb);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<16> lane_3_denoiseb;
  set_at<0, 16, 16>(lane_3_denoiseb, denoiseb.extract<48, 63>());
  auto result_3 = denoise_generated_compute(lane_3_denoiseb);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<16> lane_4_denoiseb;
  set_at<0, 16, 16>(lane_4_denoiseb, denoiseb.extract<64, 79>());
  auto result_4 = denoise_generated_compute(lane_4_denoiseb);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<16> lane_5_denoiseb;
  set_at<0, 16, 16>(lane_5_denoiseb, denoiseb.extract<80, 95>());
  auto result_5 = denoise_generated_compute(lane_5_denoiseb);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<16> lane_6_denoiseb;
  set_at<0, 16, 16>(lane_6_denoiseb, denoiseb.extract<96, 111>());
  auto result_6 = denoise_generated_compute(lane_6_denoiseb);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<16> lane_7_denoiseb;
  set_at<0, 16, 16>(lane_7_denoiseb, denoiseb.extract<112, 127>());
  auto result_7 = denoise_generated_compute(lane_7_denoiseb);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<16> lane_8_denoiseb;
  set_at<0, 16, 16>(lane_8_denoiseb, denoiseb.extract<128, 143>());
  auto result_8 = denoise_generated_compute(lane_8_denoiseb);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<16> lane_9_denoiseb;
  set_at<0, 16, 16>(lane_9_denoiseb, denoiseb.extract<144, 159>());
  auto result_9 = denoise_generated_compute(lane_9_denoiseb);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<16> lane_10_denoiseb;
  set_at<0, 16, 16>(lane_10_denoiseb, denoiseb.extract<160, 175>());
  auto result_10 = denoise_generated_compute(lane_10_denoiseb);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<16> lane_11_denoiseb;
  set_at<0, 16, 16>(lane_11_denoiseb, denoiseb.extract<176, 191>());
  auto result_11 = denoise_generated_compute(lane_11_denoiseb);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<16> lane_12_denoiseb;
  set_at<0, 16, 16>(lane_12_denoiseb, denoiseb.extract<192, 207>());
  auto result_12 = denoise_generated_compute(lane_12_denoiseb);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<16> lane_13_denoiseb;
  set_at<0, 16, 16>(lane_13_denoiseb, denoiseb.extract<208, 223>());
  auto result_13 = denoise_generated_compute(lane_13_denoiseb);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<16> lane_14_denoiseb;
  set_at<0, 16, 16>(lane_14_denoiseb, denoiseb.extract<224, 239>());
  auto result_14 = denoise_generated_compute(lane_14_denoiseb);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<16> lane_15_denoiseb;
  set_at<0, 16, 16>(lane_15_denoiseb, denoiseb.extract<240, 255>());
  auto result_15 = denoise_generated_compute(lane_15_denoiseb);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // demosaicb_update_0 unroll factor: 16
hw_uint<256>  demosaicb_generated_compute_unrolled_16(hw_uint<2304>& denoise) {
  hw_uint<256> whole_result;

  hw_uint<144> lane_0_denoise;
  set_at<0, 144, 144>(lane_0_denoise, denoise.extract<0, 143>());
  auto result_0 = demosaicb_generated_compute(lane_0_denoise);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<144> lane_1_denoise;
  set_at<0, 144, 144>(lane_1_denoise, denoise.extract<144, 287>());
  auto result_1 = demosaicb_generated_compute(lane_1_denoise);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<144> lane_2_denoise;
  set_at<0, 144, 144>(lane_2_denoise, denoise.extract<288, 431>());
  auto result_2 = demosaicb_generated_compute(lane_2_denoise);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<144> lane_3_denoise;
  set_at<0, 144, 144>(lane_3_denoise, denoise.extract<432, 575>());
  auto result_3 = demosaicb_generated_compute(lane_3_denoise);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<144> lane_4_denoise;
  set_at<0, 144, 144>(lane_4_denoise, denoise.extract<576, 719>());
  auto result_4 = demosaicb_generated_compute(lane_4_denoise);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<144> lane_5_denoise;
  set_at<0, 144, 144>(lane_5_denoise, denoise.extract<720, 863>());
  auto result_5 = demosaicb_generated_compute(lane_5_denoise);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<144> lane_6_denoise;
  set_at<0, 144, 144>(lane_6_denoise, denoise.extract<864, 1007>());
  auto result_6 = demosaicb_generated_compute(lane_6_denoise);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<144> lane_7_denoise;
  set_at<0, 144, 144>(lane_7_denoise, denoise.extract<1008, 1151>());
  auto result_7 = demosaicb_generated_compute(lane_7_denoise);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<144> lane_8_denoise;
  set_at<0, 144, 144>(lane_8_denoise, denoise.extract<1152, 1295>());
  auto result_8 = demosaicb_generated_compute(lane_8_denoise);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<144> lane_9_denoise;
  set_at<0, 144, 144>(lane_9_denoise, denoise.extract<1296, 1439>());
  auto result_9 = demosaicb_generated_compute(lane_9_denoise);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<144> lane_10_denoise;
  set_at<0, 144, 144>(lane_10_denoise, denoise.extract<1440, 1583>());
  auto result_10 = demosaicb_generated_compute(lane_10_denoise);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<144> lane_11_denoise;
  set_at<0, 144, 144>(lane_11_denoise, denoise.extract<1584, 1727>());
  auto result_11 = demosaicb_generated_compute(lane_11_denoise);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<144> lane_12_denoise;
  set_at<0, 144, 144>(lane_12_denoise, denoise.extract<1728, 1871>());
  auto result_12 = demosaicb_generated_compute(lane_12_denoise);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<144> lane_13_denoise;
  set_at<0, 144, 144>(lane_13_denoise, denoise.extract<1872, 2015>());
  auto result_13 = demosaicb_generated_compute(lane_13_denoise);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<144> lane_14_denoise;
  set_at<0, 144, 144>(lane_14_denoise, denoise.extract<2016, 2159>());
  auto result_14 = demosaicb_generated_compute(lane_14_denoise);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<144> lane_15_denoise;
  set_at<0, 144, 144>(lane_15_denoise, denoise.extract<2160, 2303>());
  auto result_15 = demosaicb_generated_compute(lane_15_denoise);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // demosaic_update_0 unroll factor: 16
hw_uint<256>  demosaic_generated_compute_unrolled_16(hw_uint<256>& demosaicb) {
  hw_uint<256> whole_result;

  hw_uint<16> lane_0_demosaicb;
  set_at<0, 16, 16>(lane_0_demosaicb, demosaicb.extract<0, 15>());
  auto result_0 = demosaic_generated_compute(lane_0_demosaicb);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<16> lane_1_demosaicb;
  set_at<0, 16, 16>(lane_1_demosaicb, demosaicb.extract<16, 31>());
  auto result_1 = demosaic_generated_compute(lane_1_demosaicb);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<16> lane_2_demosaicb;
  set_at<0, 16, 16>(lane_2_demosaicb, demosaicb.extract<32, 47>());
  auto result_2 = demosaic_generated_compute(lane_2_demosaicb);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<16> lane_3_demosaicb;
  set_at<0, 16, 16>(lane_3_demosaicb, demosaicb.extract<48, 63>());
  auto result_3 = demosaic_generated_compute(lane_3_demosaicb);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<16> lane_4_demosaicb;
  set_at<0, 16, 16>(lane_4_demosaicb, demosaicb.extract<64, 79>());
  auto result_4 = demosaic_generated_compute(lane_4_demosaicb);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<16> lane_5_demosaicb;
  set_at<0, 16, 16>(lane_5_demosaicb, demosaicb.extract<80, 95>());
  auto result_5 = demosaic_generated_compute(lane_5_demosaicb);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<16> lane_6_demosaicb;
  set_at<0, 16, 16>(lane_6_demosaicb, demosaicb.extract<96, 111>());
  auto result_6 = demosaic_generated_compute(lane_6_demosaicb);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<16> lane_7_demosaicb;
  set_at<0, 16, 16>(lane_7_demosaicb, demosaicb.extract<112, 127>());
  auto result_7 = demosaic_generated_compute(lane_7_demosaicb);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<16> lane_8_demosaicb;
  set_at<0, 16, 16>(lane_8_demosaicb, demosaicb.extract<128, 143>());
  auto result_8 = demosaic_generated_compute(lane_8_demosaicb);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<16> lane_9_demosaicb;
  set_at<0, 16, 16>(lane_9_demosaicb, demosaicb.extract<144, 159>());
  auto result_9 = demosaic_generated_compute(lane_9_demosaicb);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<16> lane_10_demosaicb;
  set_at<0, 16, 16>(lane_10_demosaicb, demosaicb.extract<160, 175>());
  auto result_10 = demosaic_generated_compute(lane_10_demosaicb);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<16> lane_11_demosaicb;
  set_at<0, 16, 16>(lane_11_demosaicb, demosaicb.extract<176, 191>());
  auto result_11 = demosaic_generated_compute(lane_11_demosaicb);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<16> lane_12_demosaicb;
  set_at<0, 16, 16>(lane_12_demosaicb, demosaicb.extract<192, 207>());
  auto result_12 = demosaic_generated_compute(lane_12_demosaicb);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<16> lane_13_demosaicb;
  set_at<0, 16, 16>(lane_13_demosaicb, demosaicb.extract<208, 223>());
  auto result_13 = demosaic_generated_compute(lane_13_demosaicb);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<16> lane_14_demosaicb;
  set_at<0, 16, 16>(lane_14_demosaicb, demosaicb.extract<224, 239>());
  auto result_14 = demosaic_generated_compute(lane_14_demosaicb);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<16> lane_15_demosaicb;
  set_at<0, 16, 16>(lane_15_demosaicb, demosaicb.extract<240, 255>());
  auto result_15 = demosaic_generated_compute(lane_15_demosaicb);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // demosaic_bxb_update_0 unroll factor: 16
hw_uint<256>  demosaic_bxb_generated_compute_unrolled_16(hw_uint<768>& demosaic) {
  hw_uint<256> whole_result;

  hw_uint<48> lane_0_demosaic;
  set_at<0, 48, 48>(lane_0_demosaic, demosaic.extract<0, 47>());
  auto result_0 = demosaic_bxb_generated_compute(lane_0_demosaic);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<48> lane_1_demosaic;
  set_at<0, 48, 48>(lane_1_demosaic, demosaic.extract<48, 95>());
  auto result_1 = demosaic_bxb_generated_compute(lane_1_demosaic);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<48> lane_2_demosaic;
  set_at<0, 48, 48>(lane_2_demosaic, demosaic.extract<96, 143>());
  auto result_2 = demosaic_bxb_generated_compute(lane_2_demosaic);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<48> lane_3_demosaic;
  set_at<0, 48, 48>(lane_3_demosaic, demosaic.extract<144, 191>());
  auto result_3 = demosaic_bxb_generated_compute(lane_3_demosaic);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<48> lane_4_demosaic;
  set_at<0, 48, 48>(lane_4_demosaic, demosaic.extract<192, 239>());
  auto result_4 = demosaic_bxb_generated_compute(lane_4_demosaic);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<48> lane_5_demosaic;
  set_at<0, 48, 48>(lane_5_demosaic, demosaic.extract<240, 287>());
  auto result_5 = demosaic_bxb_generated_compute(lane_5_demosaic);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<48> lane_6_demosaic;
  set_at<0, 48, 48>(lane_6_demosaic, demosaic.extract<288, 335>());
  auto result_6 = demosaic_bxb_generated_compute(lane_6_demosaic);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<48> lane_7_demosaic;
  set_at<0, 48, 48>(lane_7_demosaic, demosaic.extract<336, 383>());
  auto result_7 = demosaic_bxb_generated_compute(lane_7_demosaic);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<48> lane_8_demosaic;
  set_at<0, 48, 48>(lane_8_demosaic, demosaic.extract<384, 431>());
  auto result_8 = demosaic_bxb_generated_compute(lane_8_demosaic);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<48> lane_9_demosaic;
  set_at<0, 48, 48>(lane_9_demosaic, demosaic.extract<432, 479>());
  auto result_9 = demosaic_bxb_generated_compute(lane_9_demosaic);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<48> lane_10_demosaic;
  set_at<0, 48, 48>(lane_10_demosaic, demosaic.extract<480, 527>());
  auto result_10 = demosaic_bxb_generated_compute(lane_10_demosaic);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<48> lane_11_demosaic;
  set_at<0, 48, 48>(lane_11_demosaic, demosaic.extract<528, 575>());
  auto result_11 = demosaic_bxb_generated_compute(lane_11_demosaic);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<48> lane_12_demosaic;
  set_at<0, 48, 48>(lane_12_demosaic, demosaic.extract<576, 623>());
  auto result_12 = demosaic_bxb_generated_compute(lane_12_demosaic);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<48> lane_13_demosaic;
  set_at<0, 48, 48>(lane_13_demosaic, demosaic.extract<624, 671>());
  auto result_13 = demosaic_bxb_generated_compute(lane_13_demosaic);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<48> lane_14_demosaic;
  set_at<0, 48, 48>(lane_14_demosaic, demosaic.extract<672, 719>());
  auto result_14 = demosaic_bxb_generated_compute(lane_14_demosaic);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<48> lane_15_demosaic;
  set_at<0, 48, 48>(lane_15_demosaic, demosaic.extract<720, 767>());
  auto result_15 = demosaic_bxb_generated_compute(lane_15_demosaic);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // demosaic_bx_update_0 unroll factor: 16
hw_uint<256>  demosaic_bx_generated_compute_unrolled_16(hw_uint<256>& demosaic_bxb) {
  hw_uint<256> whole_result;

  hw_uint<16> lane_0_demosaic_bxb;
  set_at<0, 16, 16>(lane_0_demosaic_bxb, demosaic_bxb.extract<0, 15>());
  auto result_0 = demosaic_bx_generated_compute(lane_0_demosaic_bxb);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<16> lane_1_demosaic_bxb;
  set_at<0, 16, 16>(lane_1_demosaic_bxb, demosaic_bxb.extract<16, 31>());
  auto result_1 = demosaic_bx_generated_compute(lane_1_demosaic_bxb);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<16> lane_2_demosaic_bxb;
  set_at<0, 16, 16>(lane_2_demosaic_bxb, demosaic_bxb.extract<32, 47>());
  auto result_2 = demosaic_bx_generated_compute(lane_2_demosaic_bxb);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<16> lane_3_demosaic_bxb;
  set_at<0, 16, 16>(lane_3_demosaic_bxb, demosaic_bxb.extract<48, 63>());
  auto result_3 = demosaic_bx_generated_compute(lane_3_demosaic_bxb);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<16> lane_4_demosaic_bxb;
  set_at<0, 16, 16>(lane_4_demosaic_bxb, demosaic_bxb.extract<64, 79>());
  auto result_4 = demosaic_bx_generated_compute(lane_4_demosaic_bxb);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<16> lane_5_demosaic_bxb;
  set_at<0, 16, 16>(lane_5_demosaic_bxb, demosaic_bxb.extract<80, 95>());
  auto result_5 = demosaic_bx_generated_compute(lane_5_demosaic_bxb);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<16> lane_6_demosaic_bxb;
  set_at<0, 16, 16>(lane_6_demosaic_bxb, demosaic_bxb.extract<96, 111>());
  auto result_6 = demosaic_bx_generated_compute(lane_6_demosaic_bxb);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<16> lane_7_demosaic_bxb;
  set_at<0, 16, 16>(lane_7_demosaic_bxb, demosaic_bxb.extract<112, 127>());
  auto result_7 = demosaic_bx_generated_compute(lane_7_demosaic_bxb);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<16> lane_8_demosaic_bxb;
  set_at<0, 16, 16>(lane_8_demosaic_bxb, demosaic_bxb.extract<128, 143>());
  auto result_8 = demosaic_bx_generated_compute(lane_8_demosaic_bxb);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<16> lane_9_demosaic_bxb;
  set_at<0, 16, 16>(lane_9_demosaic_bxb, demosaic_bxb.extract<144, 159>());
  auto result_9 = demosaic_bx_generated_compute(lane_9_demosaic_bxb);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<16> lane_10_demosaic_bxb;
  set_at<0, 16, 16>(lane_10_demosaic_bxb, demosaic_bxb.extract<160, 175>());
  auto result_10 = demosaic_bx_generated_compute(lane_10_demosaic_bxb);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<16> lane_11_demosaic_bxb;
  set_at<0, 16, 16>(lane_11_demosaic_bxb, demosaic_bxb.extract<176, 191>());
  auto result_11 = demosaic_bx_generated_compute(lane_11_demosaic_bxb);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<16> lane_12_demosaic_bxb;
  set_at<0, 16, 16>(lane_12_demosaic_bxb, demosaic_bxb.extract<192, 207>());
  auto result_12 = demosaic_bx_generated_compute(lane_12_demosaic_bxb);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<16> lane_13_demosaic_bxb;
  set_at<0, 16, 16>(lane_13_demosaic_bxb, demosaic_bxb.extract<208, 223>());
  auto result_13 = demosaic_bx_generated_compute(lane_13_demosaic_bxb);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<16> lane_14_demosaic_bxb;
  set_at<0, 16, 16>(lane_14_demosaic_bxb, demosaic_bxb.extract<224, 239>());
  auto result_14 = demosaic_bx_generated_compute(lane_14_demosaic_bxb);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<16> lane_15_demosaic_bxb;
  set_at<0, 16, 16>(lane_15_demosaic_bxb, demosaic_bxb.extract<240, 255>());
  auto result_15 = demosaic_bx_generated_compute(lane_15_demosaic_bxb);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // demosaic_byb_update_0 unroll factor: 16
hw_uint<256>  demosaic_byb_generated_compute_unrolled_16(hw_uint<768>& demosaic_bx) {
  hw_uint<256> whole_result;

  hw_uint<48> lane_0_demosaic_bx;
  set_at<0, 48, 48>(lane_0_demosaic_bx, demosaic_bx.extract<0, 47>());
  auto result_0 = demosaic_byb_generated_compute(lane_0_demosaic_bx);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<48> lane_1_demosaic_bx;
  set_at<0, 48, 48>(lane_1_demosaic_bx, demosaic_bx.extract<48, 95>());
  auto result_1 = demosaic_byb_generated_compute(lane_1_demosaic_bx);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<48> lane_2_demosaic_bx;
  set_at<0, 48, 48>(lane_2_demosaic_bx, demosaic_bx.extract<96, 143>());
  auto result_2 = demosaic_byb_generated_compute(lane_2_demosaic_bx);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<48> lane_3_demosaic_bx;
  set_at<0, 48, 48>(lane_3_demosaic_bx, demosaic_bx.extract<144, 191>());
  auto result_3 = demosaic_byb_generated_compute(lane_3_demosaic_bx);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<48> lane_4_demosaic_bx;
  set_at<0, 48, 48>(lane_4_demosaic_bx, demosaic_bx.extract<192, 239>());
  auto result_4 = demosaic_byb_generated_compute(lane_4_demosaic_bx);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<48> lane_5_demosaic_bx;
  set_at<0, 48, 48>(lane_5_demosaic_bx, demosaic_bx.extract<240, 287>());
  auto result_5 = demosaic_byb_generated_compute(lane_5_demosaic_bx);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<48> lane_6_demosaic_bx;
  set_at<0, 48, 48>(lane_6_demosaic_bx, demosaic_bx.extract<288, 335>());
  auto result_6 = demosaic_byb_generated_compute(lane_6_demosaic_bx);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<48> lane_7_demosaic_bx;
  set_at<0, 48, 48>(lane_7_demosaic_bx, demosaic_bx.extract<336, 383>());
  auto result_7 = demosaic_byb_generated_compute(lane_7_demosaic_bx);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<48> lane_8_demosaic_bx;
  set_at<0, 48, 48>(lane_8_demosaic_bx, demosaic_bx.extract<384, 431>());
  auto result_8 = demosaic_byb_generated_compute(lane_8_demosaic_bx);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<48> lane_9_demosaic_bx;
  set_at<0, 48, 48>(lane_9_demosaic_bx, demosaic_bx.extract<432, 479>());
  auto result_9 = demosaic_byb_generated_compute(lane_9_demosaic_bx);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<48> lane_10_demosaic_bx;
  set_at<0, 48, 48>(lane_10_demosaic_bx, demosaic_bx.extract<480, 527>());
  auto result_10 = demosaic_byb_generated_compute(lane_10_demosaic_bx);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<48> lane_11_demosaic_bx;
  set_at<0, 48, 48>(lane_11_demosaic_bx, demosaic_bx.extract<528, 575>());
  auto result_11 = demosaic_byb_generated_compute(lane_11_demosaic_bx);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<48> lane_12_demosaic_bx;
  set_at<0, 48, 48>(lane_12_demosaic_bx, demosaic_bx.extract<576, 623>());
  auto result_12 = demosaic_byb_generated_compute(lane_12_demosaic_bx);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<48> lane_13_demosaic_bx;
  set_at<0, 48, 48>(lane_13_demosaic_bx, demosaic_bx.extract<624, 671>());
  auto result_13 = demosaic_byb_generated_compute(lane_13_demosaic_bx);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<48> lane_14_demosaic_bx;
  set_at<0, 48, 48>(lane_14_demosaic_bx, demosaic_bx.extract<672, 719>());
  auto result_14 = demosaic_byb_generated_compute(lane_14_demosaic_bx);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<48> lane_15_demosaic_bx;
  set_at<0, 48, 48>(lane_15_demosaic_bx, demosaic_bx.extract<720, 767>());
  auto result_15 = demosaic_byb_generated_compute(lane_15_demosaic_bx);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // demosaic_by_update_0 unroll factor: 16
hw_uint<256>  demosaic_by_generated_compute_unrolled_16(hw_uint<256>& demosaic_byb) {
  hw_uint<256> whole_result;

  hw_uint<16> lane_0_demosaic_byb;
  set_at<0, 16, 16>(lane_0_demosaic_byb, demosaic_byb.extract<0, 15>());
  auto result_0 = demosaic_by_generated_compute(lane_0_demosaic_byb);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<16> lane_1_demosaic_byb;
  set_at<0, 16, 16>(lane_1_demosaic_byb, demosaic_byb.extract<16, 31>());
  auto result_1 = demosaic_by_generated_compute(lane_1_demosaic_byb);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<16> lane_2_demosaic_byb;
  set_at<0, 16, 16>(lane_2_demosaic_byb, demosaic_byb.extract<32, 47>());
  auto result_2 = demosaic_by_generated_compute(lane_2_demosaic_byb);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<16> lane_3_demosaic_byb;
  set_at<0, 16, 16>(lane_3_demosaic_byb, demosaic_byb.extract<48, 63>());
  auto result_3 = demosaic_by_generated_compute(lane_3_demosaic_byb);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<16> lane_4_demosaic_byb;
  set_at<0, 16, 16>(lane_4_demosaic_byb, demosaic_byb.extract<64, 79>());
  auto result_4 = demosaic_by_generated_compute(lane_4_demosaic_byb);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<16> lane_5_demosaic_byb;
  set_at<0, 16, 16>(lane_5_demosaic_byb, demosaic_byb.extract<80, 95>());
  auto result_5 = demosaic_by_generated_compute(lane_5_demosaic_byb);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<16> lane_6_demosaic_byb;
  set_at<0, 16, 16>(lane_6_demosaic_byb, demosaic_byb.extract<96, 111>());
  auto result_6 = demosaic_by_generated_compute(lane_6_demosaic_byb);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<16> lane_7_demosaic_byb;
  set_at<0, 16, 16>(lane_7_demosaic_byb, demosaic_byb.extract<112, 127>());
  auto result_7 = demosaic_by_generated_compute(lane_7_demosaic_byb);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<16> lane_8_demosaic_byb;
  set_at<0, 16, 16>(lane_8_demosaic_byb, demosaic_byb.extract<128, 143>());
  auto result_8 = demosaic_by_generated_compute(lane_8_demosaic_byb);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<16> lane_9_demosaic_byb;
  set_at<0, 16, 16>(lane_9_demosaic_byb, demosaic_byb.extract<144, 159>());
  auto result_9 = demosaic_by_generated_compute(lane_9_demosaic_byb);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<16> lane_10_demosaic_byb;
  set_at<0, 16, 16>(lane_10_demosaic_byb, demosaic_byb.extract<160, 175>());
  auto result_10 = demosaic_by_generated_compute(lane_10_demosaic_byb);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<16> lane_11_demosaic_byb;
  set_at<0, 16, 16>(lane_11_demosaic_byb, demosaic_byb.extract<176, 191>());
  auto result_11 = demosaic_by_generated_compute(lane_11_demosaic_byb);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<16> lane_12_demosaic_byb;
  set_at<0, 16, 16>(lane_12_demosaic_byb, demosaic_byb.extract<192, 207>());
  auto result_12 = demosaic_by_generated_compute(lane_12_demosaic_byb);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<16> lane_13_demosaic_byb;
  set_at<0, 16, 16>(lane_13_demosaic_byb, demosaic_byb.extract<208, 223>());
  auto result_13 = demosaic_by_generated_compute(lane_13_demosaic_byb);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<16> lane_14_demosaic_byb;
  set_at<0, 16, 16>(lane_14_demosaic_byb, demosaic_byb.extract<224, 239>());
  auto result_14 = demosaic_by_generated_compute(lane_14_demosaic_byb);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<16> lane_15_demosaic_byb;
  set_at<0, 16, 16>(lane_15_demosaic_byb, demosaic_byb.extract<240, 255>());
  auto result_15 = demosaic_by_generated_compute(lane_15_demosaic_byb);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // demosaic_diff_update_0 unroll factor: 16
hw_uint<256>  demosaic_diff_generated_compute_unrolled_16(hw_uint<256>& demosaic, hw_uint<256>& demosaic_by) {
  hw_uint<256> whole_result;

  hw_uint<16> lane_0_demosaic;
  set_at<0, 16, 16>(lane_0_demosaic, demosaic.extract<0, 15>());
  hw_uint<16> lane_0_demosaic_by;
  set_at<0, 16, 16>(lane_0_demosaic_by, demosaic_by.extract<0, 15>());
  auto result_0 = demosaic_diff_generated_compute(lane_0_demosaic, lane_0_demosaic_by);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<16> lane_1_demosaic;
  set_at<0, 16, 16>(lane_1_demosaic, demosaic.extract<16, 31>());
  hw_uint<16> lane_1_demosaic_by;
  set_at<0, 16, 16>(lane_1_demosaic_by, demosaic_by.extract<16, 31>());
  auto result_1 = demosaic_diff_generated_compute(lane_1_demosaic, lane_1_demosaic_by);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<16> lane_2_demosaic;
  set_at<0, 16, 16>(lane_2_demosaic, demosaic.extract<32, 47>());
  hw_uint<16> lane_2_demosaic_by;
  set_at<0, 16, 16>(lane_2_demosaic_by, demosaic_by.extract<32, 47>());
  auto result_2 = demosaic_diff_generated_compute(lane_2_demosaic, lane_2_demosaic_by);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<16> lane_3_demosaic;
  set_at<0, 16, 16>(lane_3_demosaic, demosaic.extract<48, 63>());
  hw_uint<16> lane_3_demosaic_by;
  set_at<0, 16, 16>(lane_3_demosaic_by, demosaic_by.extract<48, 63>());
  auto result_3 = demosaic_diff_generated_compute(lane_3_demosaic, lane_3_demosaic_by);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<16> lane_4_demosaic;
  set_at<0, 16, 16>(lane_4_demosaic, demosaic.extract<64, 79>());
  hw_uint<16> lane_4_demosaic_by;
  set_at<0, 16, 16>(lane_4_demosaic_by, demosaic_by.extract<64, 79>());
  auto result_4 = demosaic_diff_generated_compute(lane_4_demosaic, lane_4_demosaic_by);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<16> lane_5_demosaic;
  set_at<0, 16, 16>(lane_5_demosaic, demosaic.extract<80, 95>());
  hw_uint<16> lane_5_demosaic_by;
  set_at<0, 16, 16>(lane_5_demosaic_by, demosaic_by.extract<80, 95>());
  auto result_5 = demosaic_diff_generated_compute(lane_5_demosaic, lane_5_demosaic_by);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<16> lane_6_demosaic;
  set_at<0, 16, 16>(lane_6_demosaic, demosaic.extract<96, 111>());
  hw_uint<16> lane_6_demosaic_by;
  set_at<0, 16, 16>(lane_6_demosaic_by, demosaic_by.extract<96, 111>());
  auto result_6 = demosaic_diff_generated_compute(lane_6_demosaic, lane_6_demosaic_by);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<16> lane_7_demosaic;
  set_at<0, 16, 16>(lane_7_demosaic, demosaic.extract<112, 127>());
  hw_uint<16> lane_7_demosaic_by;
  set_at<0, 16, 16>(lane_7_demosaic_by, demosaic_by.extract<112, 127>());
  auto result_7 = demosaic_diff_generated_compute(lane_7_demosaic, lane_7_demosaic_by);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<16> lane_8_demosaic;
  set_at<0, 16, 16>(lane_8_demosaic, demosaic.extract<128, 143>());
  hw_uint<16> lane_8_demosaic_by;
  set_at<0, 16, 16>(lane_8_demosaic_by, demosaic_by.extract<128, 143>());
  auto result_8 = demosaic_diff_generated_compute(lane_8_demosaic, lane_8_demosaic_by);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<16> lane_9_demosaic;
  set_at<0, 16, 16>(lane_9_demosaic, demosaic.extract<144, 159>());
  hw_uint<16> lane_9_demosaic_by;
  set_at<0, 16, 16>(lane_9_demosaic_by, demosaic_by.extract<144, 159>());
  auto result_9 = demosaic_diff_generated_compute(lane_9_demosaic, lane_9_demosaic_by);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<16> lane_10_demosaic;
  set_at<0, 16, 16>(lane_10_demosaic, demosaic.extract<160, 175>());
  hw_uint<16> lane_10_demosaic_by;
  set_at<0, 16, 16>(lane_10_demosaic_by, demosaic_by.extract<160, 175>());
  auto result_10 = demosaic_diff_generated_compute(lane_10_demosaic, lane_10_demosaic_by);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<16> lane_11_demosaic;
  set_at<0, 16, 16>(lane_11_demosaic, demosaic.extract<176, 191>());
  hw_uint<16> lane_11_demosaic_by;
  set_at<0, 16, 16>(lane_11_demosaic_by, demosaic_by.extract<176, 191>());
  auto result_11 = demosaic_diff_generated_compute(lane_11_demosaic, lane_11_demosaic_by);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<16> lane_12_demosaic;
  set_at<0, 16, 16>(lane_12_demosaic, demosaic.extract<192, 207>());
  hw_uint<16> lane_12_demosaic_by;
  set_at<0, 16, 16>(lane_12_demosaic_by, demosaic_by.extract<192, 207>());
  auto result_12 = demosaic_diff_generated_compute(lane_12_demosaic, lane_12_demosaic_by);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<16> lane_13_demosaic;
  set_at<0, 16, 16>(lane_13_demosaic, demosaic.extract<208, 223>());
  hw_uint<16> lane_13_demosaic_by;
  set_at<0, 16, 16>(lane_13_demosaic_by, demosaic_by.extract<208, 223>());
  auto result_13 = demosaic_diff_generated_compute(lane_13_demosaic, lane_13_demosaic_by);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<16> lane_14_demosaic;
  set_at<0, 16, 16>(lane_14_demosaic, demosaic.extract<224, 239>());
  hw_uint<16> lane_14_demosaic_by;
  set_at<0, 16, 16>(lane_14_demosaic_by, demosaic_by.extract<224, 239>());
  auto result_14 = demosaic_diff_generated_compute(lane_14_demosaic, lane_14_demosaic_by);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<16> lane_15_demosaic;
  set_at<0, 16, 16>(lane_15_demosaic, demosaic.extract<240, 255>());
  hw_uint<16> lane_15_demosaic_by;
  set_at<0, 16, 16>(lane_15_demosaic_by, demosaic_by.extract<240, 255>());
  auto result_15 = demosaic_diff_generated_compute(lane_15_demosaic, lane_15_demosaic_by);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

  // cp_noinit_ln_16_update_0 unroll factor: 16
hw_uint<256>  cp_noinit_ln_16_generated_compute_unrolled_16(hw_uint<256>& demosaic_diff) {
  hw_uint<256> whole_result;

  hw_uint<16> lane_0_demosaic_diff;
  set_at<0, 16, 16>(lane_0_demosaic_diff, demosaic_diff.extract<0, 15>());
  auto result_0 = cp_noinit_ln_16_generated_compute(lane_0_demosaic_diff);
  set_at<0, 256, 16>(whole_result, result_0);

  hw_uint<16> lane_1_demosaic_diff;
  set_at<0, 16, 16>(lane_1_demosaic_diff, demosaic_diff.extract<16, 31>());
  auto result_1 = cp_noinit_ln_16_generated_compute(lane_1_demosaic_diff);
  set_at<16, 256, 16>(whole_result, result_1);

  hw_uint<16> lane_2_demosaic_diff;
  set_at<0, 16, 16>(lane_2_demosaic_diff, demosaic_diff.extract<32, 47>());
  auto result_2 = cp_noinit_ln_16_generated_compute(lane_2_demosaic_diff);
  set_at<32, 256, 16>(whole_result, result_2);

  hw_uint<16> lane_3_demosaic_diff;
  set_at<0, 16, 16>(lane_3_demosaic_diff, demosaic_diff.extract<48, 63>());
  auto result_3 = cp_noinit_ln_16_generated_compute(lane_3_demosaic_diff);
  set_at<48, 256, 16>(whole_result, result_3);

  hw_uint<16> lane_4_demosaic_diff;
  set_at<0, 16, 16>(lane_4_demosaic_diff, demosaic_diff.extract<64, 79>());
  auto result_4 = cp_noinit_ln_16_generated_compute(lane_4_demosaic_diff);
  set_at<64, 256, 16>(whole_result, result_4);

  hw_uint<16> lane_5_demosaic_diff;
  set_at<0, 16, 16>(lane_5_demosaic_diff, demosaic_diff.extract<80, 95>());
  auto result_5 = cp_noinit_ln_16_generated_compute(lane_5_demosaic_diff);
  set_at<80, 256, 16>(whole_result, result_5);

  hw_uint<16> lane_6_demosaic_diff;
  set_at<0, 16, 16>(lane_6_demosaic_diff, demosaic_diff.extract<96, 111>());
  auto result_6 = cp_noinit_ln_16_generated_compute(lane_6_demosaic_diff);
  set_at<96, 256, 16>(whole_result, result_6);

  hw_uint<16> lane_7_demosaic_diff;
  set_at<0, 16, 16>(lane_7_demosaic_diff, demosaic_diff.extract<112, 127>());
  auto result_7 = cp_noinit_ln_16_generated_compute(lane_7_demosaic_diff);
  set_at<112, 256, 16>(whole_result, result_7);

  hw_uint<16> lane_8_demosaic_diff;
  set_at<0, 16, 16>(lane_8_demosaic_diff, demosaic_diff.extract<128, 143>());
  auto result_8 = cp_noinit_ln_16_generated_compute(lane_8_demosaic_diff);
  set_at<128, 256, 16>(whole_result, result_8);

  hw_uint<16> lane_9_demosaic_diff;
  set_at<0, 16, 16>(lane_9_demosaic_diff, demosaic_diff.extract<144, 159>());
  auto result_9 = cp_noinit_ln_16_generated_compute(lane_9_demosaic_diff);
  set_at<144, 256, 16>(whole_result, result_9);

  hw_uint<16> lane_10_demosaic_diff;
  set_at<0, 16, 16>(lane_10_demosaic_diff, demosaic_diff.extract<160, 175>());
  auto result_10 = cp_noinit_ln_16_generated_compute(lane_10_demosaic_diff);
  set_at<160, 256, 16>(whole_result, result_10);

  hw_uint<16> lane_11_demosaic_diff;
  set_at<0, 16, 16>(lane_11_demosaic_diff, demosaic_diff.extract<176, 191>());
  auto result_11 = cp_noinit_ln_16_generated_compute(lane_11_demosaic_diff);
  set_at<176, 256, 16>(whole_result, result_11);

  hw_uint<16> lane_12_demosaic_diff;
  set_at<0, 16, 16>(lane_12_demosaic_diff, demosaic_diff.extract<192, 207>());
  auto result_12 = cp_noinit_ln_16_generated_compute(lane_12_demosaic_diff);
  set_at<192, 256, 16>(whole_result, result_12);

  hw_uint<16> lane_13_demosaic_diff;
  set_at<0, 16, 16>(lane_13_demosaic_diff, demosaic_diff.extract<208, 223>());
  auto result_13 = cp_noinit_ln_16_generated_compute(lane_13_demosaic_diff);
  set_at<208, 256, 16>(whole_result, result_13);

  hw_uint<16> lane_14_demosaic_diff;
  set_at<0, 16, 16>(lane_14_demosaic_diff, demosaic_diff.extract<224, 239>());
  auto result_14 = cp_noinit_ln_16_generated_compute(lane_14_demosaic_diff);
  set_at<224, 256, 16>(whole_result, result_14);

  hw_uint<16> lane_15_demosaic_diff;
  set_at<0, 16, 16>(lane_15_demosaic_diff, demosaic_diff.extract<240, 255>());
  auto result_15 = cp_noinit_ln_16_generated_compute(lane_15_demosaic_diff);
  set_at<240, 256, 16>(whole_result, result_15);
  return whole_result;
}

