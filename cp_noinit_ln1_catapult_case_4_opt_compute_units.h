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

hw_uint<16> cp_noinit_ln1_catapult_case_4_generated_compute(hw_uint<16*1> demosaic_diff) {
  return uint16_t((uint16_t(demosaic_diff.get<16, 0>()) + 20));
}



// Compute unit banks...
  // raw_update_0 unroll factor: 4
hw_uint<64>  raw_generated_compute_unrolled_4(hw_uint<64>& raw_oc) {
  hw_uint<64> whole_result;

  hw_uint<16> lane_0_raw_oc;
  set_at<0, 16, 16>(lane_0_raw_oc, raw_oc.extract<0, 15>());
  auto result_0 = raw_generated_compute(lane_0_raw_oc);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<16> lane_1_raw_oc;
  set_at<0, 16, 16>(lane_1_raw_oc, raw_oc.extract<16, 31>());
  auto result_1 = raw_generated_compute(lane_1_raw_oc);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<16> lane_2_raw_oc;
  set_at<0, 16, 16>(lane_2_raw_oc, raw_oc.extract<32, 47>());
  auto result_2 = raw_generated_compute(lane_2_raw_oc);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<16> lane_3_raw_oc;
  set_at<0, 16, 16>(lane_3_raw_oc, raw_oc.extract<48, 63>());
  auto result_3 = raw_generated_compute(lane_3_raw_oc);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // denoiseb_update_0 unroll factor: 4
hw_uint<64>  denoiseb_generated_compute_unrolled_4(hw_uint<1600>& raw) {
  hw_uint<64> whole_result;

  hw_uint<400> lane_0_raw;
  set_at<0, 400, 400>(lane_0_raw, raw.extract<0, 399>());
  auto result_0 = denoiseb_generated_compute(lane_0_raw);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<400> lane_1_raw;
  set_at<0, 400, 400>(lane_1_raw, raw.extract<400, 799>());
  auto result_1 = denoiseb_generated_compute(lane_1_raw);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<400> lane_2_raw;
  set_at<0, 400, 400>(lane_2_raw, raw.extract<800, 1199>());
  auto result_2 = denoiseb_generated_compute(lane_2_raw);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<400> lane_3_raw;
  set_at<0, 400, 400>(lane_3_raw, raw.extract<1200, 1599>());
  auto result_3 = denoiseb_generated_compute(lane_3_raw);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // denoise_update_0 unroll factor: 4
hw_uint<64>  denoise_generated_compute_unrolled_4(hw_uint<64>& denoiseb) {
  hw_uint<64> whole_result;

  hw_uint<16> lane_0_denoiseb;
  set_at<0, 16, 16>(lane_0_denoiseb, denoiseb.extract<0, 15>());
  auto result_0 = denoise_generated_compute(lane_0_denoiseb);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<16> lane_1_denoiseb;
  set_at<0, 16, 16>(lane_1_denoiseb, denoiseb.extract<16, 31>());
  auto result_1 = denoise_generated_compute(lane_1_denoiseb);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<16> lane_2_denoiseb;
  set_at<0, 16, 16>(lane_2_denoiseb, denoiseb.extract<32, 47>());
  auto result_2 = denoise_generated_compute(lane_2_denoiseb);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<16> lane_3_denoiseb;
  set_at<0, 16, 16>(lane_3_denoiseb, denoiseb.extract<48, 63>());
  auto result_3 = denoise_generated_compute(lane_3_denoiseb);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // demosaicb_update_0 unroll factor: 4
hw_uint<64>  demosaicb_generated_compute_unrolled_4(hw_uint<576>& denoise) {
  hw_uint<64> whole_result;

  hw_uint<144> lane_0_denoise;
  set_at<0, 144, 144>(lane_0_denoise, denoise.extract<0, 143>());
  auto result_0 = demosaicb_generated_compute(lane_0_denoise);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<144> lane_1_denoise;
  set_at<0, 144, 144>(lane_1_denoise, denoise.extract<144, 287>());
  auto result_1 = demosaicb_generated_compute(lane_1_denoise);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<144> lane_2_denoise;
  set_at<0, 144, 144>(lane_2_denoise, denoise.extract<288, 431>());
  auto result_2 = demosaicb_generated_compute(lane_2_denoise);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<144> lane_3_denoise;
  set_at<0, 144, 144>(lane_3_denoise, denoise.extract<432, 575>());
  auto result_3 = demosaicb_generated_compute(lane_3_denoise);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // demosaic_update_0 unroll factor: 4
hw_uint<64>  demosaic_generated_compute_unrolled_4(hw_uint<64>& demosaicb) {
  hw_uint<64> whole_result;

  hw_uint<16> lane_0_demosaicb;
  set_at<0, 16, 16>(lane_0_demosaicb, demosaicb.extract<0, 15>());
  auto result_0 = demosaic_generated_compute(lane_0_demosaicb);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<16> lane_1_demosaicb;
  set_at<0, 16, 16>(lane_1_demosaicb, demosaicb.extract<16, 31>());
  auto result_1 = demosaic_generated_compute(lane_1_demosaicb);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<16> lane_2_demosaicb;
  set_at<0, 16, 16>(lane_2_demosaicb, demosaicb.extract<32, 47>());
  auto result_2 = demosaic_generated_compute(lane_2_demosaicb);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<16> lane_3_demosaicb;
  set_at<0, 16, 16>(lane_3_demosaicb, demosaicb.extract<48, 63>());
  auto result_3 = demosaic_generated_compute(lane_3_demosaicb);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // demosaic_bxb_update_0 unroll factor: 4
hw_uint<64>  demosaic_bxb_generated_compute_unrolled_4(hw_uint<192>& demosaic) {
  hw_uint<64> whole_result;

  hw_uint<48> lane_0_demosaic;
  set_at<0, 48, 48>(lane_0_demosaic, demosaic.extract<0, 47>());
  auto result_0 = demosaic_bxb_generated_compute(lane_0_demosaic);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<48> lane_1_demosaic;
  set_at<0, 48, 48>(lane_1_demosaic, demosaic.extract<48, 95>());
  auto result_1 = demosaic_bxb_generated_compute(lane_1_demosaic);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<48> lane_2_demosaic;
  set_at<0, 48, 48>(lane_2_demosaic, demosaic.extract<96, 143>());
  auto result_2 = demosaic_bxb_generated_compute(lane_2_demosaic);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<48> lane_3_demosaic;
  set_at<0, 48, 48>(lane_3_demosaic, demosaic.extract<144, 191>());
  auto result_3 = demosaic_bxb_generated_compute(lane_3_demosaic);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // demosaic_bx_update_0 unroll factor: 4
hw_uint<64>  demosaic_bx_generated_compute_unrolled_4(hw_uint<64>& demosaic_bxb) {
  hw_uint<64> whole_result;

  hw_uint<16> lane_0_demosaic_bxb;
  set_at<0, 16, 16>(lane_0_demosaic_bxb, demosaic_bxb.extract<0, 15>());
  auto result_0 = demosaic_bx_generated_compute(lane_0_demosaic_bxb);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<16> lane_1_demosaic_bxb;
  set_at<0, 16, 16>(lane_1_demosaic_bxb, demosaic_bxb.extract<16, 31>());
  auto result_1 = demosaic_bx_generated_compute(lane_1_demosaic_bxb);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<16> lane_2_demosaic_bxb;
  set_at<0, 16, 16>(lane_2_demosaic_bxb, demosaic_bxb.extract<32, 47>());
  auto result_2 = demosaic_bx_generated_compute(lane_2_demosaic_bxb);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<16> lane_3_demosaic_bxb;
  set_at<0, 16, 16>(lane_3_demosaic_bxb, demosaic_bxb.extract<48, 63>());
  auto result_3 = demosaic_bx_generated_compute(lane_3_demosaic_bxb);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // demosaic_byb_update_0 unroll factor: 4
hw_uint<64>  demosaic_byb_generated_compute_unrolled_4(hw_uint<192>& demosaic_bx) {
  hw_uint<64> whole_result;

  hw_uint<48> lane_0_demosaic_bx;
  set_at<0, 48, 48>(lane_0_demosaic_bx, demosaic_bx.extract<0, 47>());
  auto result_0 = demosaic_byb_generated_compute(lane_0_demosaic_bx);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<48> lane_1_demosaic_bx;
  set_at<0, 48, 48>(lane_1_demosaic_bx, demosaic_bx.extract<48, 95>());
  auto result_1 = demosaic_byb_generated_compute(lane_1_demosaic_bx);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<48> lane_2_demosaic_bx;
  set_at<0, 48, 48>(lane_2_demosaic_bx, demosaic_bx.extract<96, 143>());
  auto result_2 = demosaic_byb_generated_compute(lane_2_demosaic_bx);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<48> lane_3_demosaic_bx;
  set_at<0, 48, 48>(lane_3_demosaic_bx, demosaic_bx.extract<144, 191>());
  auto result_3 = demosaic_byb_generated_compute(lane_3_demosaic_bx);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // demosaic_by_update_0 unroll factor: 4
hw_uint<64>  demosaic_by_generated_compute_unrolled_4(hw_uint<64>& demosaic_byb) {
  hw_uint<64> whole_result;

  hw_uint<16> lane_0_demosaic_byb;
  set_at<0, 16, 16>(lane_0_demosaic_byb, demosaic_byb.extract<0, 15>());
  auto result_0 = demosaic_by_generated_compute(lane_0_demosaic_byb);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<16> lane_1_demosaic_byb;
  set_at<0, 16, 16>(lane_1_demosaic_byb, demosaic_byb.extract<16, 31>());
  auto result_1 = demosaic_by_generated_compute(lane_1_demosaic_byb);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<16> lane_2_demosaic_byb;
  set_at<0, 16, 16>(lane_2_demosaic_byb, demosaic_byb.extract<32, 47>());
  auto result_2 = demosaic_by_generated_compute(lane_2_demosaic_byb);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<16> lane_3_demosaic_byb;
  set_at<0, 16, 16>(lane_3_demosaic_byb, demosaic_byb.extract<48, 63>());
  auto result_3 = demosaic_by_generated_compute(lane_3_demosaic_byb);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // demosaic_diff_update_0 unroll factor: 4
hw_uint<64>  demosaic_diff_generated_compute_unrolled_4(hw_uint<64>& demosaic, hw_uint<64>& demosaic_by) {
  hw_uint<64> whole_result;

  hw_uint<16> lane_0_demosaic;
  set_at<0, 16, 16>(lane_0_demosaic, demosaic.extract<0, 15>());
  hw_uint<16> lane_0_demosaic_by;
  set_at<0, 16, 16>(lane_0_demosaic_by, demosaic_by.extract<0, 15>());
  auto result_0 = demosaic_diff_generated_compute(lane_0_demosaic, lane_0_demosaic_by);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<16> lane_1_demosaic;
  set_at<0, 16, 16>(lane_1_demosaic, demosaic.extract<16, 31>());
  hw_uint<16> lane_1_demosaic_by;
  set_at<0, 16, 16>(lane_1_demosaic_by, demosaic_by.extract<16, 31>());
  auto result_1 = demosaic_diff_generated_compute(lane_1_demosaic, lane_1_demosaic_by);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<16> lane_2_demosaic;
  set_at<0, 16, 16>(lane_2_demosaic, demosaic.extract<32, 47>());
  hw_uint<16> lane_2_demosaic_by;
  set_at<0, 16, 16>(lane_2_demosaic_by, demosaic_by.extract<32, 47>());
  auto result_2 = demosaic_diff_generated_compute(lane_2_demosaic, lane_2_demosaic_by);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<16> lane_3_demosaic;
  set_at<0, 16, 16>(lane_3_demosaic, demosaic.extract<48, 63>());
  hw_uint<16> lane_3_demosaic_by;
  set_at<0, 16, 16>(lane_3_demosaic_by, demosaic_by.extract<48, 63>());
  auto result_3 = demosaic_diff_generated_compute(lane_3_demosaic, lane_3_demosaic_by);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

  // cp_noinit_ln1_catapult_case_4_update_0 unroll factor: 4
hw_uint<64>  cp_noinit_ln1_catapult_case_4_generated_compute_unrolled_4(hw_uint<64>& demosaic_diff) {
  hw_uint<64> whole_result;

  hw_uint<16> lane_0_demosaic_diff;
  set_at<0, 16, 16>(lane_0_demosaic_diff, demosaic_diff.extract<0, 15>());
  auto result_0 = cp_noinit_ln1_catapult_case_4_generated_compute(lane_0_demosaic_diff);
  set_at<0, 64, 16>(whole_result, result_0);

  hw_uint<16> lane_1_demosaic_diff;
  set_at<0, 16, 16>(lane_1_demosaic_diff, demosaic_diff.extract<16, 31>());
  auto result_1 = cp_noinit_ln1_catapult_case_4_generated_compute(lane_1_demosaic_diff);
  set_at<16, 64, 16>(whole_result, result_1);

  hw_uint<16> lane_2_demosaic_diff;
  set_at<0, 16, 16>(lane_2_demosaic_diff, demosaic_diff.extract<32, 47>());
  auto result_2 = cp_noinit_ln1_catapult_case_4_generated_compute(lane_2_demosaic_diff);
  set_at<32, 64, 16>(whole_result, result_2);

  hw_uint<16> lane_3_demosaic_diff;
  set_at<0, 16, 16>(lane_3_demosaic_diff, demosaic_diff.extract<48, 63>());
  auto result_3 = cp_noinit_ln1_catapult_case_4_generated_compute(lane_3_demosaic_diff);
  set_at<48, 64, 16>(whole_result, result_3);
  return whole_result;
}

