#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<16> f_generated_compute(hw_uint<16*1> f_oc) {
  return f_oc.get<16, 0>();
}

hw_uint<16> u_generated_compute(hw_uint<16*1> u_oc) {
  return u_oc.get<16, 0>();
}

hw_uint<16> r0_generated_compute(hw_uint<16*1> f, hw_uint<16*1> u) {
  return (u.get<16, 0>() * f.get<16, 0>());
}

hw_uint<16> diff_u_generated_compute(hw_uint<16*2> u) {
  return (u.get<16, 1>() - u.get<16, 0>());
}

hw_uint<16> diff_r_generated_compute(hw_uint<16*2> u) {
  return (u.get<16, 0>() - u.get<16, 1>());
}

hw_uint<16> diff_o_generated_compute(hw_uint<16*2> u) {
  return (u.get<16, 0>() - u.get<16, 1>());
}

hw_uint<16> diff_l_generated_compute(hw_uint<16*2> u) {
  return (u.get<16, 1>() - u.get<16, 0>());
}

hw_uint<16> diff_i_generated_compute(hw_uint<16*2> u) {
  return (u.get<16, 1>() - u.get<16, 0>());
}

hw_uint<16> diff_d_generated_compute(hw_uint<16*2> u) {
  return (u.get<16, 0>() - u.get<16, 1>());
}

hw_uint<16> r1_generated_compute(hw_uint<16*1> r0) {
  return (r0.get<16, 0>() * r0.get<16, 0>());
}

hw_uint<16> g_generated_compute(hw_uint<16*1> diff_d, hw_uint<16*1> diff_i, hw_uint<16*1> diff_l, hw_uint<16*1> diff_o, hw_uint<16*1> diff_r, hw_uint<16*1> diff_u) {
  return ((((((diff_u.get<16, 0>() * diff_u.get<16, 0>()) + (diff_d.get<16, 0>() * diff_d.get<16, 0>())) + (diff_l.get<16, 0>() * diff_l.get<16, 0>())) + (diff_r.get<16, 0>() * diff_r.get<16, 0>())) + (diff_i.get<16, 0>() * diff_i.get<16, 0>())) + (diff_o.get<16, 0>() * diff_o.get<16, 0>()));
}

hw_uint<16> dn3d_1_generated_compute(hw_uint<16*1> f, hw_uint<16*6> g, hw_uint<16*1> r1, hw_uint<16*7> u) {
  return ((((((((((((((((((((u.get<16, 3>() + u.get<16, 6>()) + g.get<16, 5>()) + u.get<16, 0>()) + g.get<16, 0>()) + u.get<16, 5>()) + g.get<16, 4>()) + u.get<16, 1>()) + g.get<16, 1>()) + u.get<16, 4>()) + g.get<16, 3>()) + u.get<16, 2>()) + g.get<16, 2>()) + f.get<16, 0>()) + r1.get<16, 0>()) + g.get<16, 5>()) + g.get<16, 0>()) + g.get<16, 4>()) + g.get<16, 1>()) + g.get<16, 3>()) + g.get<16, 2>());
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

  // diff_u_update_0 unroll factor: 1
hw_uint<16>  diff_u_generated_compute_unrolled_1(hw_uint<32>& u) {
  hw_uint<16> whole_result;

  hw_uint<32> lane_0_u;
  set_at<0, 32, 32>(lane_0_u, u.extract<0, 31>());
  auto result_0 = diff_u_generated_compute(lane_0_u);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // diff_r_update_0 unroll factor: 1
hw_uint<16>  diff_r_generated_compute_unrolled_1(hw_uint<32>& u) {
  hw_uint<16> whole_result;

  hw_uint<32> lane_0_u;
  set_at<0, 32, 32>(lane_0_u, u.extract<0, 31>());
  auto result_0 = diff_r_generated_compute(lane_0_u);
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

  // diff_l_update_0 unroll factor: 1
hw_uint<16>  diff_l_generated_compute_unrolled_1(hw_uint<32>& u) {
  hw_uint<16> whole_result;

  hw_uint<32> lane_0_u;
  set_at<0, 32, 32>(lane_0_u, u.extract<0, 31>());
  auto result_0 = diff_l_generated_compute(lane_0_u);
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

  // diff_d_update_0 unroll factor: 1
hw_uint<16>  diff_d_generated_compute_unrolled_1(hw_uint<32>& u) {
  hw_uint<16> whole_result;

  hw_uint<32> lane_0_u;
  set_at<0, 32, 32>(lane_0_u, u.extract<0, 31>());
  auto result_0 = diff_d_generated_compute(lane_0_u);
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
hw_uint<16>  g_generated_compute_unrolled_1(hw_uint<16>& diff_d, hw_uint<16>& diff_i, hw_uint<16>& diff_l, hw_uint<16>& diff_o, hw_uint<16>& diff_r, hw_uint<16>& diff_u) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_diff_d;
  set_at<0, 16, 16>(lane_0_diff_d, diff_d.extract<0, 15>());
  hw_uint<16> lane_0_diff_i;
  set_at<0, 16, 16>(lane_0_diff_i, diff_i.extract<0, 15>());
  hw_uint<16> lane_0_diff_l;
  set_at<0, 16, 16>(lane_0_diff_l, diff_l.extract<0, 15>());
  hw_uint<16> lane_0_diff_o;
  set_at<0, 16, 16>(lane_0_diff_o, diff_o.extract<0, 15>());
  hw_uint<16> lane_0_diff_r;
  set_at<0, 16, 16>(lane_0_diff_r, diff_r.extract<0, 15>());
  hw_uint<16> lane_0_diff_u;
  set_at<0, 16, 16>(lane_0_diff_u, diff_u.extract<0, 15>());
  auto result_0 = g_generated_compute(lane_0_diff_d, lane_0_diff_i, lane_0_diff_l, lane_0_diff_o, lane_0_diff_r, lane_0_diff_u);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // dn3d_1_update_0 unroll factor: 1
hw_uint<16>  dn3d_1_generated_compute_unrolled_1(hw_uint<16>& f, hw_uint<96>& g, hw_uint<16>& r1, hw_uint<112>& u) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_f;
  set_at<0, 16, 16>(lane_0_f, f.extract<0, 15>());
  hw_uint<96> lane_0_g;
  set_at<0, 96, 96>(lane_0_g, g.extract<0, 95>());
  hw_uint<16> lane_0_r1;
  set_at<0, 16, 16>(lane_0_r1, r1.extract<0, 15>());
  hw_uint<112> lane_0_u;
  set_at<0, 112, 112>(lane_0_u, u.extract<0, 111>());
  auto result_0 = dn3d_1_generated_compute(lane_0_f, lane_0_g, lane_0_r1, lane_0_u);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

