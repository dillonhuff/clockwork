#pragma once

#include "conv_3x3.h"

  // u_update_0 unroll factor: 1
hw_uint<32>  id_unrolled_1(hw_uint<32>& u_off_chip) {
  hw_uint<32> whole_result;
  hw_uint<32> lane_0_u_off_chip;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_u_off_chip, u_off_chip.extract<0, 31>());
  auto result_0 = id(lane_0_u_off_chip);
  set_at<0, 32>(whole_result, result_0);
  return whole_result;
}

  // diff_r_update_0 unroll factor: 1
hw_uint<32>  fadd_unrolled_1(hw_uint<64>& u) {
  hw_uint<32> whole_result;
  hw_uint<64> lane_0_u;
  // Need offset: 0, 0
  set_at<0, 64>(lane_0_u, u.extract<0, 31>());
  // Need offset: 1, 0
  set_at<32, 64>(lane_0_u, u.extract<32, 63>());
  auto result_0 = fadd(lane_0_u);
  set_at<0, 32>(whole_result, result_0);
  return whole_result;
}

  // magval_update_0 unroll factor: 1
hw_uint<32>  mag_dn2_unrolled_1(hw_uint<32>& diff_qwe, hw_uint<32>& diff_d, hw_uint<32>& diff_l, hw_uint<32>& diff_r) {
  hw_uint<32> whole_result;
  hw_uint<32> lane_0_diff_qwe;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_diff_qwe, diff_qwe.extract<0, 31>());
  hw_uint<32> lane_0_diff_d;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_diff_d, diff_d.extract<0, 31>());
  hw_uint<32> lane_0_diff_l;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_diff_l, diff_l.extract<0, 31>());
  hw_uint<32> lane_0_diff_r;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_diff_r, diff_r.extract<0, 31>());
  auto result_0 = mag_dn2(lane_0_diff_qwe, lane_0_diff_d, lane_0_diff_l, lane_0_diff_r);
  set_at<0, 32>(whole_result, result_0);
  return whole_result;
}

  // sum_diffs_update_0 unroll factor: 1
hw_uint<32>  fadd2_unrolled_1(hw_uint<32>& magval, hw_uint<32>& f) {
  hw_uint<32> whole_result;
  hw_uint<32> lane_0_magval;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_magval, magval.extract<0, 31>());
  hw_uint<32> lane_0_f;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_f, f.extract<0, 31>());
  auto result_0 = fadd2(lane_0_magval, lane_0_f);
  set_at<0, 32>(whole_result, result_0);
  return whole_result;
}

