#pragma once

#include "conv_3x3.h"

// Generated compute units...


// Compute unit banks...
  // in_off_chip0_update_0 unroll factor: 1
hw_uint<16>  id_unrolled_1(hw_uint<16>& in_off_chip0_oc) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_in_off_chip0_oc;
  set_at<0, 16, 16>(lane_0_in_off_chip0_oc, in_off_chip0_oc.extract<0, 15>());
  auto result_0 = id(lane_0_in_off_chip0_oc);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

