#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<16> in_generated_compute(hw_uint<16*1> in_off_chip) {
  return uint16_t(uint16_t(in_off_chip.get<16, 0>()));
}

hw_uint<16> f20_generated_compute(hw_uint<16*5> in) {
  return uint16_t((((uint16_t(in.get<16, 3>()) + uint16_t(in.get<16, 4>())) + (uint16_t(in.get<16, 2>()) + (uint16_t(in.get<16, 0>()) + uint16_t(in.get<16, 1>())))) / 5));
}

hw_uint<16> f10_generated_compute(hw_uint<16*5> in) {
  return uint16_t((((uint16_t(in.get<16, 3>()) + uint16_t(in.get<16, 4>())) + (uint16_t(in.get<16, 2>()) + (uint16_t(in.get<16, 0>()) + uint16_t(in.get<16, 1>())))) / 5));
}

hw_uint<16> f00_generated_compute(hw_uint<16*5> in) {
  return uint16_t((((uint16_t(in.get<16, 3>()) + uint16_t(in.get<16, 4>())) + (uint16_t(in.get<16, 2>()) + (uint16_t(in.get<16, 0>()) + uint16_t(in.get<16, 1>())))) / 5));
}

hw_uint<16> f21_generated_compute(hw_uint<16*5> f20) {
  return uint16_t((((uint16_t(f20.get<16, 3>()) + uint16_t(f20.get<16, 4>())) + (uint16_t(f20.get<16, 2>()) + (uint16_t(f20.get<16, 0>()) + uint16_t(f20.get<16, 1>())))) / 5));
}

hw_uint<16> f11_generated_compute(hw_uint<16*5> f10) {
  return uint16_t((((uint16_t(f10.get<16, 3>()) + uint16_t(f10.get<16, 4>())) + (uint16_t(f10.get<16, 2>()) + (uint16_t(f10.get<16, 0>()) + uint16_t(f10.get<16, 1>())))) / 5));
}

hw_uint<16> f01_generated_compute(hw_uint<16*5> f00) {
  return uint16_t((((uint16_t(f00.get<16, 3>()) + uint16_t(f00.get<16, 4>())) + (uint16_t(f00.get<16, 2>()) + (uint16_t(f00.get<16, 0>()) + uint16_t(f00.get<16, 1>())))) / 5));
}

hw_uint<16> f22_generated_compute(hw_uint<16*5> f21) {
  return uint16_t((((uint16_t(f21.get<16, 3>()) + uint16_t(f21.get<16, 4>())) + (uint16_t(f21.get<16, 2>()) + (uint16_t(f21.get<16, 0>()) + uint16_t(f21.get<16, 1>())))) / 5));
}

hw_uint<16> f12_generated_compute(hw_uint<16*5> f11) {
  return uint16_t((((uint16_t(f11.get<16, 3>()) + uint16_t(f11.get<16, 4>())) + (uint16_t(f11.get<16, 2>()) + (uint16_t(f11.get<16, 0>()) + uint16_t(f11.get<16, 1>())))) / 5));
}

hw_uint<16> f02_generated_compute(hw_uint<16*5> f01) {
  return uint16_t((((uint16_t(f01.get<16, 3>()) + uint16_t(f01.get<16, 4>())) + (uint16_t(f01.get<16, 2>()) + (uint16_t(f01.get<16, 0>()) + uint16_t(f01.get<16, 1>())))) / 5));
}

hw_uint<16> f23_generated_compute(hw_uint<16*5> f22) {
  return uint16_t((((uint16_t(f22.get<16, 3>()) + uint16_t(f22.get<16, 4>())) + (uint16_t(f22.get<16, 2>()) + (uint16_t(f22.get<16, 0>()) + uint16_t(f22.get<16, 1>())))) / 5));
}

hw_uint<16> f13_generated_compute(hw_uint<16*5> f12) {
  return uint16_t((((uint16_t(f12.get<16, 3>()) + uint16_t(f12.get<16, 4>())) + (uint16_t(f12.get<16, 2>()) + (uint16_t(f12.get<16, 0>()) + uint16_t(f12.get<16, 1>())))) / 5));
}

hw_uint<16> f03_generated_compute(hw_uint<16*5> f02) {
  return uint16_t((((uint16_t(f02.get<16, 3>()) + uint16_t(f02.get<16, 4>())) + (uint16_t(f02.get<16, 2>()) + (uint16_t(f02.get<16, 0>()) + uint16_t(f02.get<16, 1>())))) / 5));
}

hw_uint<16> f24_generated_compute(hw_uint<16*5> f23) {
  return uint16_t((((uint16_t(f23.get<16, 3>()) + uint16_t(f23.get<16, 4>())) + (uint16_t(f23.get<16, 2>()) + (uint16_t(f23.get<16, 0>()) + uint16_t(f23.get<16, 1>())))) / 5));
}

hw_uint<16> f14_generated_compute(hw_uint<16*5> f13) {
  return uint16_t((((uint16_t(f13.get<16, 3>()) + uint16_t(f13.get<16, 4>())) + (uint16_t(f13.get<16, 2>()) + (uint16_t(f13.get<16, 0>()) + uint16_t(f13.get<16, 1>())))) / 5));
}

hw_uint<16> f04_generated_compute(hw_uint<16*5> f03) {
  return uint16_t((((uint16_t(f03.get<16, 3>()) + uint16_t(f03.get<16, 4>())) + (uint16_t(f03.get<16, 2>()) + (uint16_t(f03.get<16, 0>()) + uint16_t(f03.get<16, 1>())))) / 5));
}

hw_uint<16> final_generated_compute(hw_uint<16*1> f04, hw_uint<16*1> f14, hw_uint<16*1> f24) {
  return uint16_t(((uint16_t(f04.get<16, 0>()) + (uint16_t(f14.get<16, 0>()) + uint16_t(f24.get<16, 0>()))) / 3));
}

hw_uint<16> icfo_1_generated_compute(hw_uint<16*1> final) {
  return uint16_t(uint16_t(final.get<16, 0>()));
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

  // f20_update_0 unroll factor: 1
hw_uint<16>  f20_generated_compute_unrolled_1(hw_uint<80>& in) {
  hw_uint<16> whole_result;

  hw_uint<80> lane_0_in;
  set_at<0, 80, 80>(lane_0_in, in.extract<0, 79>());
  auto result_0 = f20_generated_compute(lane_0_in);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // f10_update_0 unroll factor: 1
hw_uint<16>  f10_generated_compute_unrolled_1(hw_uint<80>& in) {
  hw_uint<16> whole_result;

  hw_uint<80> lane_0_in;
  set_at<0, 80, 80>(lane_0_in, in.extract<0, 79>());
  auto result_0 = f10_generated_compute(lane_0_in);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // f00_update_0 unroll factor: 1
hw_uint<16>  f00_generated_compute_unrolled_1(hw_uint<80>& in) {
  hw_uint<16> whole_result;

  hw_uint<80> lane_0_in;
  set_at<0, 80, 80>(lane_0_in, in.extract<0, 79>());
  auto result_0 = f00_generated_compute(lane_0_in);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // f21_update_0 unroll factor: 1
hw_uint<16>  f21_generated_compute_unrolled_1(hw_uint<80>& f20) {
  hw_uint<16> whole_result;

  hw_uint<80> lane_0_f20;
  set_at<0, 80, 80>(lane_0_f20, f20.extract<0, 79>());
  auto result_0 = f21_generated_compute(lane_0_f20);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // f11_update_0 unroll factor: 1
hw_uint<16>  f11_generated_compute_unrolled_1(hw_uint<80>& f10) {
  hw_uint<16> whole_result;

  hw_uint<80> lane_0_f10;
  set_at<0, 80, 80>(lane_0_f10, f10.extract<0, 79>());
  auto result_0 = f11_generated_compute(lane_0_f10);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // f01_update_0 unroll factor: 1
hw_uint<16>  f01_generated_compute_unrolled_1(hw_uint<80>& f00) {
  hw_uint<16> whole_result;

  hw_uint<80> lane_0_f00;
  set_at<0, 80, 80>(lane_0_f00, f00.extract<0, 79>());
  auto result_0 = f01_generated_compute(lane_0_f00);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // f22_update_0 unroll factor: 1
hw_uint<16>  f22_generated_compute_unrolled_1(hw_uint<80>& f21) {
  hw_uint<16> whole_result;

  hw_uint<80> lane_0_f21;
  set_at<0, 80, 80>(lane_0_f21, f21.extract<0, 79>());
  auto result_0 = f22_generated_compute(lane_0_f21);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // f12_update_0 unroll factor: 1
hw_uint<16>  f12_generated_compute_unrolled_1(hw_uint<80>& f11) {
  hw_uint<16> whole_result;

  hw_uint<80> lane_0_f11;
  set_at<0, 80, 80>(lane_0_f11, f11.extract<0, 79>());
  auto result_0 = f12_generated_compute(lane_0_f11);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // f02_update_0 unroll factor: 1
hw_uint<16>  f02_generated_compute_unrolled_1(hw_uint<80>& f01) {
  hw_uint<16> whole_result;

  hw_uint<80> lane_0_f01;
  set_at<0, 80, 80>(lane_0_f01, f01.extract<0, 79>());
  auto result_0 = f02_generated_compute(lane_0_f01);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // f23_update_0 unroll factor: 1
hw_uint<16>  f23_generated_compute_unrolled_1(hw_uint<80>& f22) {
  hw_uint<16> whole_result;

  hw_uint<80> lane_0_f22;
  set_at<0, 80, 80>(lane_0_f22, f22.extract<0, 79>());
  auto result_0 = f23_generated_compute(lane_0_f22);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // f13_update_0 unroll factor: 1
hw_uint<16>  f13_generated_compute_unrolled_1(hw_uint<80>& f12) {
  hw_uint<16> whole_result;

  hw_uint<80> lane_0_f12;
  set_at<0, 80, 80>(lane_0_f12, f12.extract<0, 79>());
  auto result_0 = f13_generated_compute(lane_0_f12);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // f03_update_0 unroll factor: 1
hw_uint<16>  f03_generated_compute_unrolled_1(hw_uint<80>& f02) {
  hw_uint<16> whole_result;

  hw_uint<80> lane_0_f02;
  set_at<0, 80, 80>(lane_0_f02, f02.extract<0, 79>());
  auto result_0 = f03_generated_compute(lane_0_f02);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // f24_update_0 unroll factor: 1
hw_uint<16>  f24_generated_compute_unrolled_1(hw_uint<80>& f23) {
  hw_uint<16> whole_result;

  hw_uint<80> lane_0_f23;
  set_at<0, 80, 80>(lane_0_f23, f23.extract<0, 79>());
  auto result_0 = f24_generated_compute(lane_0_f23);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // f14_update_0 unroll factor: 1
hw_uint<16>  f14_generated_compute_unrolled_1(hw_uint<80>& f13) {
  hw_uint<16> whole_result;

  hw_uint<80> lane_0_f13;
  set_at<0, 80, 80>(lane_0_f13, f13.extract<0, 79>());
  auto result_0 = f14_generated_compute(lane_0_f13);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // f04_update_0 unroll factor: 1
hw_uint<16>  f04_generated_compute_unrolled_1(hw_uint<80>& f03) {
  hw_uint<16> whole_result;

  hw_uint<80> lane_0_f03;
  set_at<0, 80, 80>(lane_0_f03, f03.extract<0, 79>());
  auto result_0 = f04_generated_compute(lane_0_f03);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // final_update_0 unroll factor: 1
hw_uint<16>  final_generated_compute_unrolled_1(hw_uint<16>& f04, hw_uint<16>& f14, hw_uint<16>& f24) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_f04;
  set_at<0, 16, 16>(lane_0_f04, f04.extract<0, 15>());
  hw_uint<16> lane_0_f14;
  set_at<0, 16, 16>(lane_0_f14, f14.extract<0, 15>());
  hw_uint<16> lane_0_f24;
  set_at<0, 16, 16>(lane_0_f24, f24.extract<0, 15>());
  auto result_0 = final_generated_compute(lane_0_f04, lane_0_f14, lane_0_f24);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // icfo_1_update_0 unroll factor: 1
hw_uint<16>  icfo_1_generated_compute_unrolled_1(hw_uint<16>& final) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_final;
  set_at<0, 16, 16>(lane_0_final, final.extract<0, 15>());
  auto result_0 = icfo_1_generated_compute(lane_0_final);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

