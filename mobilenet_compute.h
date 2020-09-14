#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_filter_dw_global_wrapper.stencil(hw_filter_dw_global_wrapper_s0_c, hw_filter_dw_global_wrapper_s0_x, hw_filter_dw_global_wrapper_s0_y) = hw_filter_dw.stencil(hw_filter_dw_global_wrapper_s0_c, hw_filter_dw_global_wrapper_s0_x, hw_filter_dw_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_filter_dw_global_wrapper_stencil(hw_uint<16>& hw_filter_dw_stencil) {
  uint16_t _hw_filter_dw_stencil_1 = (uint16_t) hw_filter_dw_stencil.extract<0, 15>();

  return _hw_filter_dw_stencil_1;
}

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_c, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_c, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_1;
}

//store is: dw_conv.stencil(dw_conv_s0_c, dw_conv_s0_x, dw_conv_s0_y) = (int16)0
hw_uint<16> hcompute_dw_conv_stencil() {
  int16_t _732 = (int16_t)(0);
  return _732;
}

//store is: dw_conv.stencil(dw_conv_s1_c, dw_conv_s1_x, dw_conv_s1_y) = (dw_conv.stencil(dw_conv_s1_c, dw_conv_s1_x, dw_conv_s1_y) + int16((hw_filter_dw_global_wrapper.stencil(dw_conv_s1_c, dw_conv_s1_r_dw_x, dw_conv_s1_r_dw_y)*hw_input_global_wrapper.stencil(dw_conv_s1_c, (dw_conv_s1_r_dw_x + dw_conv_s1_x), (dw_conv_s1_r_dw_y + dw_conv_s1_y)))))
hw_uint<16> hcompute_dw_conv_stencil_1(hw_uint<16>& dw_conv_stencil, hw_uint<16>& hw_filter_dw_global_wrapper_stencil, hw_uint<16>& hw_input_global_wrapper_stencil) {
  int16_t _dw_conv_stencil_1 = (int16_t) dw_conv_stencil.extract<0, 15>();

  uint16_t _hw_filter_dw_global_wrapper_stencil_1 = (uint16_t) hw_filter_dw_global_wrapper_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_1 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();

  uint16_t _735 = _hw_filter_dw_global_wrapper_stencil_1 * _hw_input_global_wrapper_stencil_1;
  int16_t _736 = (int16_t)(_735);
  int16_t _737 = _dw_conv_stencil_1 + _736;
  return _737;
}

//store is: hw_filter_pw_global_wrapper.stencil(hw_filter_pw_global_wrapper_s0_k, hw_filter_pw_global_wrapper_s0_c) = hw_filter_pw.stencil(hw_filter_pw_global_wrapper_s0_k, hw_filter_pw_global_wrapper_s0_c)
hw_uint<16> hcompute_hw_filter_pw_global_wrapper_stencil(hw_uint<16>& hw_filter_pw_stencil) {
  uint16_t _hw_filter_pw_stencil_1 = (uint16_t) hw_filter_pw_stencil.extract<0, 15>();

  return _hw_filter_pw_stencil_1;
}

//store is: pw_conv.stencil(pw_conv_s0_k, pw_conv_s0_c, pw_conv_s0_x, pw_conv_s0_y) = (int16)0
hw_uint<16> hcompute_pw_conv_stencil() {
  int16_t _750 = (int16_t)(0);
  return _750;
}

//store is: pw_conv.stencil(pw_conv_s1_k, pw_conv_s1_c, pw_conv_s1_x, pw_conv_s1_y) = (pw_conv.stencil(pw_conv_s1_k, pw_conv_s1_c, pw_conv_s1_x, pw_conv_s1_y) + (dw_conv.stencil(pw_conv_s1_c, pw_conv_s1_x, pw_conv_s1_y)*int16(hw_filter_pw_global_wrapper.stencil(pw_conv_s1_k, pw_conv_s1_c))))
hw_uint<16> hcompute_pw_conv_stencil_1(hw_uint<16>& dw_conv_stencil, hw_uint<16>& hw_filter_pw_global_wrapper_stencil, hw_uint<16>& pw_conv_stencil) {
  int16_t _dw_conv_stencil_2 = (int16_t) dw_conv_stencil.extract<0, 15>();

  uint16_t _hw_filter_pw_global_wrapper_stencil_1 = (uint16_t) hw_filter_pw_global_wrapper_stencil.extract<0, 15>();

  int16_t _pw_conv_stencil_1 = (int16_t) pw_conv_stencil.extract<0, 15>();

  int16_t _753 = (int16_t)(_hw_filter_pw_global_wrapper_stencil_1);
  int16_t _754 = _dw_conv_stencil_2 * _753;
  int16_t _755 = _pw_conv_stencil_1 + _754;
  return _755;
}

//store is: pw_conv_reduction.stencil(pw_conv_reduction_s0_k, pw_conv_reduction_s0_x, pw_conv_reduction_s0_y) = (int16)0
hw_uint<16> hcompute_pw_conv_reduction_stencil() {
  int16_t _765 = (int16_t)(0);
  return _765;
}

//store is: pw_conv_reduction.stencil(pw_conv_reduction_s1_k, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) = (pw_conv_reduction.stencil(pw_conv_reduction_s1_k, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) + pw_conv.stencil(pw_conv_reduction_s1_k, pw_conv_reduction_s1_r_pw_x, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y))
hw_uint<16> hcompute_pw_conv_reduction_stencil_1(hw_uint<16>& pw_conv_stencil, hw_uint<16>& pw_conv_reduction_stencil) {
  int16_t _pw_conv_stencil_2 = (int16_t) pw_conv_stencil.extract<0, 15>();

  int16_t _pw_conv_reduction_stencil_1 = (int16_t) pw_conv_reduction_stencil.extract<0, 15>();

  int16_t _768 = _pw_conv_reduction_stencil_1 + _pw_conv_stencil_2;
  return _768;
}

//store is: hw_output.stencil(hw_output_s0_k, hw_output_s0_x_xi, hw_output_s0_y_yi) = pw_conv_reduction.stencil(hw_output_s0_k, hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& pw_conv_reduction_stencil) {
  int16_t _pw_conv_reduction_stencil_2 = (int16_t) pw_conv_reduction_stencil.extract<0, 15>();

  return _pw_conv_reduction_stencil_2;
}

