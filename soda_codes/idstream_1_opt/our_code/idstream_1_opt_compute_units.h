#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<16> in_generated_compute(hw_uint<16*1> in_off_chip) {
  return uint16_t(uint16_t(in_off_chip.get<16, 0>()));
}

hw_uint<16> idstream_1_generated_compute(hw_uint<16*1> in) {
  return uint16_t(uint16_t(in.get<16, 0>()));
}



// Compute unit banks...
  // in_update_0 unroll factor: 1
hw_uint<16>  in_generated_compute_unrolled_1(hw_uint<16>& in_off_chip) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_in_off_chip;
  set_at<0, 16, 16>(lane_0_in_off_chip, in_off_chip.extract<0, 15>());
  auto result_0 = in_generated_compute(lane_0_in_off_chip);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // idstream_1_update_0 unroll factor: 1
hw_uint<16>  idstream_1_generated_compute_unrolled_1(hw_uint<16>& in) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_in;
  set_at<0, 16, 16>(lane_0_in, in.extract<0, 15>());
  auto result_0 = idstream_1_generated_compute(lane_0_in);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

