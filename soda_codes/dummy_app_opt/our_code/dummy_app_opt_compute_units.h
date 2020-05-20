#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<32> dummy_app_generated_compute(hw_uint<32*2> u) {
  return uint32_t((uint32_t(u.get<32, 1>()) - uint32_t(u.get<32, 0>())));
}



// Compute unit banks...
  // u_update_0 unroll factor: 1
hw_uint<32>  id_unrolled_1(hw_uint<32>& u_off_chip) {
  hw_uint<32> whole_result;

  hw_uint<32> lane_0_u_off_chip;
  set_at<0, 32, 32>(lane_0_u_off_chip, u_off_chip.extract<0, 31>());
  auto result_0 = id(lane_0_u_off_chip);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // dummy_app_update_0 unroll factor: 1
hw_uint<32>  dummy_app_generated_compute_unrolled_1(hw_uint<64>& u) {
  hw_uint<32> whole_result;

  hw_uint<64> lane_0_u;
  set_at<0, 64, 64>(lane_0_u, u.extract<0, 63>());
  auto result_0 = dummy_app_generated_compute(lane_0_u);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

