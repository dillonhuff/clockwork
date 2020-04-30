#pragma once

#include "conv_3x3.h"

// Generated compute units...


// Compute unit banks...
  // f_update_0 unroll factor: 1
hw_uint<32>  id_unrolled_1(hw_uint<32>& f_off_chip) {
  hw_uint<32> whole_result;

  hw_uint<32> lane_0_f_off_chip;
  set_at<0, 32, 32>(lane_0_f_off_chip, f_off_chip.extract<0, 31>());
  auto result_0 = id(lane_0_f_off_chip);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // r0_update_0 unroll factor: 1
hw_uint<32>  fadd2_unrolled_1(hw_uint<32>& u, hw_uint<32>& f) {
  hw_uint<32> whole_result;

  hw_uint<32> lane_0_u;
  set_at<0, 32, 32>(lane_0_u, u.extract<0, 31>());
  hw_uint<32> lane_0_f;
  set_at<0, 32, 32>(lane_0_f, f.extract<0, 31>());
  auto result_0 = fadd2(lane_0_u, lane_0_f);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // diff_r_update_0 unroll factor: 1
hw_uint<32>  fadd_unrolled_1(hw_uint<64>& u) {
  hw_uint<32> whole_result;

  hw_uint<64> lane_0_u;
  set_at<0, 64, 64>(lane_0_u, u.extract<0, 63>());
  auto result_0 = fadd(lane_0_u);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // g_update_0 unroll factor: 1
hw_uint<32>  fmag2d_unrolled_1(hw_uint<32>& diff_qwe, hw_uint<32>& diff_d, hw_uint<32>& diff_l, hw_uint<32>& diff_r) {
  hw_uint<32> whole_result;

  hw_uint<32> lane_0_diff_qwe;
  set_at<0, 32, 32>(lane_0_diff_qwe, diff_qwe.extract<0, 31>());
  hw_uint<32> lane_0_diff_d;
  set_at<0, 32, 32>(lane_0_diff_d, diff_d.extract<0, 31>());
  hw_uint<32> lane_0_diff_l;
  set_at<0, 32, 32>(lane_0_diff_l, diff_l.extract<0, 31>());
  hw_uint<32> lane_0_diff_r;
  set_at<0, 32, 32>(lane_0_diff_r, diff_r.extract<0, 31>());
  auto result_0 = fmag2d(lane_0_diff_qwe, lane_0_diff_d, lane_0_diff_l, lane_0_diff_r);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // sum_denoise2d_update_0 unroll factor: 1
hw_uint<32>  out_comp_fadd_unrolled_1(hw_uint<32>& r1, hw_uint<32>& f, hw_uint<128>& u, hw_uint<128>& g) {
  hw_uint<32> whole_result;

  hw_uint<32> lane_0_r1;
  set_at<0, 32, 32>(lane_0_r1, r1.extract<0, 31>());
  hw_uint<32> lane_0_f;
  set_at<0, 32, 32>(lane_0_f, f.extract<0, 31>());
  hw_uint<128> lane_0_u;
  set_at<0, 128, 128>(lane_0_u, u.extract<0, 127>());
  hw_uint<128> lane_0_g;
  set_at<0, 128, 128>(lane_0_g, g.extract<0, 127>());
  auto result_0 = out_comp_fadd(lane_0_r1, lane_0_f, lane_0_u, lane_0_g);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

