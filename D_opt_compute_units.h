#pragma once

#include "conv_3x3.h"

// Generated compute units...
hw_uint<32> C_generated_compute(hw_uint<32*1> C_oc) {
  return uint32_t(uint32_t(C_oc.get<32, 0>()));
}

hw_uint<32> B_generated_compute(hw_uint<32*3> C) {
  return uint32_t((uint32_t(C.get<32, 0>()) + (uint32_t(C.get<32, 1>()) + uint32_t(C.get<32, 2>()))));
}

hw_uint<32> A_generated_compute(hw_uint<32*3> C) {
  return uint32_t((uint32_t(C.get<32, 0>()) + (uint32_t(C.get<32, 1>()) + uint32_t(C.get<32, 2>()))));
}

hw_uint<32> D_generated_compute(hw_uint<32*3> A, hw_uint<32*3> B) {
  return uint32_t(((uint32_t(A.get<32, 0>()) + (uint32_t(A.get<32, 1>()) + uint32_t(A.get<32, 2>()))) + (uint32_t(B.get<32, 0>()) + (uint32_t(B.get<32, 1>()) + uint32_t(B.get<32, 2>())))));
}



// Compute unit banks...
  // C_update_0 unroll factor: 1
hw_uint<32>  C_generated_compute_unrolled_1(hw_uint<32>& C_oc) {
  hw_uint<32> whole_result;

  hw_uint<32> lane_0_C_oc;
  set_at<0, 32, 32>(lane_0_C_oc, C_oc.extract<0, 31>());
  auto result_0 = C_generated_compute(lane_0_C_oc);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // B_update_0 unroll factor: 1
hw_uint<32>  B_generated_compute_unrolled_1(hw_uint<96>& C) {
  hw_uint<32> whole_result;

  hw_uint<96> lane_0_C;
  set_at<0, 96, 96>(lane_0_C, C.extract<0, 95>());
  auto result_0 = B_generated_compute(lane_0_C);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // A_update_0 unroll factor: 1
hw_uint<32>  A_generated_compute_unrolled_1(hw_uint<96>& C) {
  hw_uint<32> whole_result;

  hw_uint<96> lane_0_C;
  set_at<0, 96, 96>(lane_0_C, C.extract<0, 95>());
  auto result_0 = A_generated_compute(lane_0_C);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

  // D_update_0 unroll factor: 1
hw_uint<32>  D_generated_compute_unrolled_1(hw_uint<96>& A, hw_uint<96>& B) {
  hw_uint<32> whole_result;

  hw_uint<96> lane_0_A;
  set_at<0, 96, 96>(lane_0_A, A.extract<0, 95>());
  hw_uint<96> lane_0_B;
  set_at<0, 96, 96>(lane_0_B, B.extract<0, 95>());
  auto result_0 = D_generated_compute(lane_0_A, lane_0_B);
  set_at<0, 32, 32>(whole_result, result_0);
  return whole_result;
}

