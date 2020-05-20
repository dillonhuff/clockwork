#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<16> f_generated_compute(hw_uint<16*1> f_oc) {
  return uint16_t(uint16_t(f_oc.get<16, 0>()));
}

hw_uint<16> u_generated_compute(hw_uint<16*1> u_oc) {
  return uint16_t(uint16_t(u_oc.get<16, 0>()));
}

hw_uint<16> r0_generated_compute(hw_uint<16*1> f, hw_uint<16*1> u) {
  return uint16_t((uint16_t(u.get<16, 0>()) * uint16_t(f.get<16, 0>())));
}

hw_uint<16> diff_o_generated_compute(hw_uint<16*2> u) {
  return uint16_t((uint16_t(u.get<16, 0>()) - uint16_t(u.get<16, 1>())));
}

hw_uint<16> diff_i_generated_compute(hw_uint<16*2> u) {
  return uint16_t((uint16_t(u.get<16, 1>()) - uint16_t(u.get<16, 0>())));
}

hw_uint<16> r1_generated_compute(hw_uint<16*1> r0) {
  return uint16_t((uint16_t(r0.get<16, 0>()) * uint16_t(r0.get<16, 0>())));
}

hw_uint<16> g_generated_compute(hw_uint<16*1> diff_i, hw_uint<16*1> diff_o) {
  return uint16_t(((uint16_t(diff_i.get<16, 0>()) * uint16_t(diff_i.get<16, 0>())) + (uint16_t(diff_o.get<16, 0>()) * uint16_t(diff_o.get<16, 0>()))));
}

hw_uint<16> dn_reconv_generated_compute(hw_uint<16*1> g, hw_uint<16*1> r1, hw_uint<16*1> u) {
  return uint16_t((uint16_t(u.get<16, 0>()) + (uint16_t(g.get<16, 0>()) + uint16_t(r1.get<16, 0>()))));
}



// Compute unit banks...
  // f_update_0 unroll factor: 1
hw_uint<16>  f_generated_compute_unrolled_1(hw_uint<16>& f_oc) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_f_oc;
  set_at<0, 16, 16>(lane_0_f_oc, f_oc.extract<0, 15>());
  auto result_0 = f_generated_compute(lane_0_f_oc);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // u_update_0 unroll factor: 1
hw_uint<16>  u_generated_compute_unrolled_1(hw_uint<16>& u_oc) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_u_oc;
  set_at<0, 16, 16>(lane_0_u_oc, u_oc.extract<0, 15>());
  auto result_0 = u_generated_compute(lane_0_u_oc);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // r0_update_0 unroll factor: 1
hw_uint<16>  r0_generated_compute_unrolled_1(hw_uint<16>& f, hw_uint<16>& u) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_f;
  set_at<0, 16, 16>(lane_0_f, f.extract<0, 15>());
  hw_uint<16> lane_0_u;
  set_at<0, 16, 16>(lane_0_u, u.extract<0, 15>());
  auto result_0 = r0_generated_compute(lane_0_f, lane_0_u);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // diff_o_update_0 unroll factor: 1
hw_uint<16>  diff_o_generated_compute_unrolled_1(hw_uint<32>& u) {
  hw_uint<16> whole_result;

  hw_uint<32> lane_0_u;
  set_at<0, 32, 32>(lane_0_u, u.extract<0, 31>());
  auto result_0 = diff_o_generated_compute(lane_0_u);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // diff_i_update_0 unroll factor: 1
hw_uint<16>  diff_i_generated_compute_unrolled_1(hw_uint<32>& u) {
  hw_uint<16> whole_result;

  hw_uint<32> lane_0_u;
  set_at<0, 32, 32>(lane_0_u, u.extract<0, 31>());
  auto result_0 = diff_i_generated_compute(lane_0_u);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // r1_update_0 unroll factor: 1
hw_uint<16>  r1_generated_compute_unrolled_1(hw_uint<16>& r0) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_r0;
  set_at<0, 16, 16>(lane_0_r0, r0.extract<0, 15>());
  auto result_0 = r1_generated_compute(lane_0_r0);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // g_update_0 unroll factor: 1
hw_uint<16>  g_generated_compute_unrolled_1(hw_uint<16>& diff_i, hw_uint<16>& diff_o) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_diff_i;
  set_at<0, 16, 16>(lane_0_diff_i, diff_i.extract<0, 15>());
  hw_uint<16> lane_0_diff_o;
  set_at<0, 16, 16>(lane_0_diff_o, diff_o.extract<0, 15>());
  auto result_0 = g_generated_compute(lane_0_diff_i, lane_0_diff_o);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // dn_reconv_update_0 unroll factor: 1
hw_uint<16>  dn_reconv_generated_compute_unrolled_1(hw_uint<16>& g, hw_uint<16>& r1, hw_uint<16>& u) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_g;
  set_at<0, 16, 16>(lane_0_g, g.extract<0, 15>());
  hw_uint<16> lane_0_r1;
  set_at<0, 16, 16>(lane_0_r1, r1.extract<0, 15>());
  hw_uint<16> lane_0_u;
  set_at<0, 16, 16>(lane_0_u, u.extract<0, 15>());
  auto result_0 = dn_reconv_generated_compute(lane_0_g, lane_0_r1, lane_0_u);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

