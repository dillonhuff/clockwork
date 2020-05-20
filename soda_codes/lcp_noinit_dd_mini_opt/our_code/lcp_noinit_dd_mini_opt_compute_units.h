#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<16> raw_generated_compute(hw_uint<16*1> raw_oc) {
  return uint16_t(uint16_t(raw_oc.get<16, 0>()));
}

hw_uint<16> denoised_generated_compute(hw_uint<16*25> raw) {
  return uint16_t((((((uint16_t(raw.get<16, 0>()) + (uint16_t(raw.get<16, 1>()) + uint16_t(raw.get<16, 2>()))) + (uint16_t(raw.get<16, 3>()) + (uint16_t(raw.get<16, 4>()) + uint16_t(raw.get<16, 5>())))) + ((uint16_t(raw.get<16, 6>()) + (uint16_t(raw.get<16, 7>()) + uint16_t(raw.get<16, 8>()))) + (uint16_t(raw.get<16, 9>()) + (uint16_t(raw.get<16, 10>()) + uint16_t(raw.get<16, 11>()))))) + (((uint16_t(raw.get<16, 12>()) + (uint16_t(raw.get<16, 13>()) + uint16_t(raw.get<16, 14>()))) + (uint16_t(raw.get<16, 15>()) + (uint16_t(raw.get<16, 16>()) + uint16_t(raw.get<16, 17>())))) + ((uint16_t(raw.get<16, 18>()) + (uint16_t(raw.get<16, 19>()) + uint16_t(raw.get<16, 20>()))) + ((uint16_t(raw.get<16, 21>()) + uint16_t(raw.get<16, 22>())) + (uint16_t(raw.get<16, 23>()) + uint16_t(raw.get<16, 24>())))))) + 25));
}

hw_uint<16> lcp_noinit_dd_mini_generated_compute(hw_uint<16*9> denoised) {
  return uint16_t(((((uint16_t(denoised.get<16, 0>()) + uint16_t(denoised.get<16, 1>())) + (uint16_t(denoised.get<16, 2>()) + uint16_t(denoised.get<16, 3>()))) + ((uint16_t(denoised.get<16, 4>()) + uint16_t(denoised.get<16, 5>())) + (uint16_t(denoised.get<16, 6>()) + (uint16_t(denoised.get<16, 7>()) + uint16_t(denoised.get<16, 8>()))))) + 9));
}



// Compute unit banks...
  // raw_update_0 unroll factor: 1
hw_uint<16>  raw_generated_compute_unrolled_1(hw_uint<16>& raw_oc) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_raw_oc;
  set_at<0, 16, 16>(lane_0_raw_oc, raw_oc.extract<0, 15>());
  auto result_0 = raw_generated_compute(lane_0_raw_oc);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // denoised_update_0 unroll factor: 1
hw_uint<16>  denoised_generated_compute_unrolled_1(hw_uint<400>& raw) {
  hw_uint<16> whole_result;

  hw_uint<400> lane_0_raw;
  set_at<0, 400, 400>(lane_0_raw, raw.extract<0, 399>());
  auto result_0 = denoised_generated_compute(lane_0_raw);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // lcp_noinit_dd_mini_update_0 unroll factor: 1
hw_uint<16>  lcp_noinit_dd_mini_generated_compute_unrolled_1(hw_uint<144>& denoised) {
  hw_uint<16> whole_result;

  hw_uint<144> lane_0_denoised;
  set_at<0, 144, 144>(lane_0_denoised, denoised.extract<0, 143>());
  auto result_0 = lcp_noinit_dd_mini_generated_compute(lane_0_denoised);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

