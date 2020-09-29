#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_filter_dw_global_wrapper.stencil(hw_filter_dw_global_wrapper_s0_c, hw_filter_dw_global_wrapper_s0_x, hw_filter_dw_global_wrapper_s0_y) = hw_filter_dw.stencil(hw_filter_dw_global_wrapper_s0_c, hw_filter_dw_global_wrapper_s0_x, hw_filter_dw_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_filter_dw_global_wrapper_stencil(hw_uint<16>& hw_filter_dw_stencil) {
  int16_t _hw_filter_dw_stencil_1 = (int16_t) hw_filter_dw_stencil.extract<0, 15>();

  return _hw_filter_dw_stencil_1;
}

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_c, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_c, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_1 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_1;
}

//store is: dw_conv.stencil(dw_conv_s0_c, dw_conv_s0_x, dw_conv_s0_y) = (int16)0
hw_uint<16> hcompute_dw_conv_stencil() {
  int16_t _732 = (int16_t)(0);
  return _732;
}

//store is: dw_conv.stencil(dw_conv_s1_c, dw_conv_s1_x, dw_conv_s1_y) = ((hw_filter_dw_global_wrapper.stencil(dw_conv_s1_c, 0, 0)*hw_input_global_wrapper.stencil(dw_conv_s1_c, dw_conv_s1_x, dw_conv_s1_y)) + (dw_conv.stencil(dw_conv_s1_c, dw_conv_s1_x, dw_conv_s1_y) + ((hw_filter_dw_global_wrapper.stencil(dw_conv_s1_c, 1, 0)*hw_input_global_wrapper.stencil(dw_conv_s1_c, (dw_conv_s1_x + 1), dw_conv_s1_y)) + ((hw_filter_dw_global_wrapper.stencil(dw_conv_s1_c, 2, 0)*hw_input_global_wrapper.stencil(dw_conv_s1_c, (dw_conv_s1_x + 2), dw_conv_s1_y)) + ((hw_filter_dw_global_wrapper.stencil(dw_conv_s1_c, 0, 1)*hw_input_global_wrapper.stencil(dw_conv_s1_c, dw_conv_s1_x, (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(dw_conv_s1_c, 1, 1)*hw_input_global_wrapper.stencil(dw_conv_s1_c, (dw_conv_s1_x + 1), (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(dw_conv_s1_c, 2, 1)*hw_input_global_wrapper.stencil(dw_conv_s1_c, (dw_conv_s1_x + 2), (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(dw_conv_s1_c, 0, 2)*hw_input_global_wrapper.stencil(dw_conv_s1_c, dw_conv_s1_x, (dw_conv_s1_y + 2))) + ((hw_filter_dw_global_wrapper.stencil(dw_conv_s1_c, 2, 2)*hw_input_global_wrapper.stencil(dw_conv_s1_c, (dw_conv_s1_x + 2), (dw_conv_s1_y + 2))) + (hw_filter_dw_global_wrapper.stencil(dw_conv_s1_c, 1, 2)*hw_input_global_wrapper.stencil(dw_conv_s1_c, (dw_conv_s1_x + 1), (dw_conv_s1_y + 2))))))))))))
hw_uint<16> hcompute_dw_conv_stencil_1(hw_uint<16>& dw_conv_stencil, hw_uint<144>& hw_filter_dw_global_wrapper_stencil, hw_uint<144>& hw_input_global_wrapper_stencil) {
  int16_t _dw_conv_stencil_1 = (int16_t) dw_conv_stencil.extract<0, 15>();

  int16_t _hw_filter_dw_global_wrapper_stencil_1 = (int16_t) hw_filter_dw_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_filter_dw_global_wrapper_stencil_2 = (int16_t) hw_filter_dw_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_filter_dw_global_wrapper_stencil_3 = (int16_t) hw_filter_dw_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_filter_dw_global_wrapper_stencil_4 = (int16_t) hw_filter_dw_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_filter_dw_global_wrapper_stencil_5 = (int16_t) hw_filter_dw_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_filter_dw_global_wrapper_stencil_6 = (int16_t) hw_filter_dw_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_filter_dw_global_wrapper_stencil_7 = (int16_t) hw_filter_dw_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_filter_dw_global_wrapper_stencil_8 = (int16_t) hw_filter_dw_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_filter_dw_global_wrapper_stencil_9 = (int16_t) hw_filter_dw_global_wrapper_stencil.extract<128, 143>();

  int16_t _hw_input_global_wrapper_stencil_1 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_2 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_3 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_4 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_5 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_6 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_7 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_8 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_input_global_wrapper_stencil_9 = (int16_t) hw_input_global_wrapper_stencil.extract<128, 143>();

  int16_t _735 = _hw_filter_dw_global_wrapper_stencil_1 * _hw_input_global_wrapper_stencil_1;
  int16_t _736 = _hw_filter_dw_global_wrapper_stencil_2 * _hw_input_global_wrapper_stencil_2;
  int16_t _737 = _hw_filter_dw_global_wrapper_stencil_3 * _hw_input_global_wrapper_stencil_3;
  int16_t _738 = _hw_filter_dw_global_wrapper_stencil_4 * _hw_input_global_wrapper_stencil_4;
  int16_t _739 = _hw_filter_dw_global_wrapper_stencil_5 * _hw_input_global_wrapper_stencil_5;
  int16_t _740 = _hw_filter_dw_global_wrapper_stencil_6 * _hw_input_global_wrapper_stencil_6;
  int16_t _741 = _hw_filter_dw_global_wrapper_stencil_7 * _hw_input_global_wrapper_stencil_7;
  int16_t _742 = _hw_filter_dw_global_wrapper_stencil_8 * _hw_input_global_wrapper_stencil_8;
  int16_t _743 = _hw_filter_dw_global_wrapper_stencil_9 * _hw_input_global_wrapper_stencil_9;
  int16_t _744 = _742 + _743;
  int16_t _745 = _741 + _744;
  int16_t _746 = _740 + _745;
  int16_t _747 = _739 + _746;
  int16_t _748 = _738 + _747;
  int16_t _749 = _737 + _748;
  int16_t _750 = _736 + _749;
  int16_t _751 = _dw_conv_stencil_1 + _750;
  int16_t _752 = _735 + _751;
  return _752;
}

//store is: hw_filter_pw_global_wrapper.stencil(hw_filter_pw_global_wrapper_s0_k, hw_filter_pw_global_wrapper_s0_c) = hw_filter_pw.stencil(hw_filter_pw_global_wrapper_s0_k, hw_filter_pw_global_wrapper_s0_c)
hw_uint<16> hcompute_hw_filter_pw_global_wrapper_stencil(hw_uint<16>& hw_filter_pw_stencil) {
  int16_t _hw_filter_pw_stencil_1 = (int16_t) hw_filter_pw_stencil.extract<0, 15>();

  return _hw_filter_pw_stencil_1;
}

//store is: pw_conv.stencil(pw_conv_s0_k, pw_conv_s0_c, pw_conv_s0_x, pw_conv_s0_y) = (int16)0
hw_uint<16> hcompute_pw_conv_stencil() {
  int16_t _813 = (int16_t)(0);
  return _813;
}

//store is: pw_conv.stencil(pw_conv_s1_k, pw_conv_s1_c, pw_conv_s1_x, pw_conv_s1_y) = (pw_conv.stencil(pw_conv_s1_k, pw_conv_s1_c, pw_conv_s1_x, pw_conv_s1_y) + (hw_filter_pw_global_wrapper.stencil(pw_conv_s1_k, pw_conv_s1_c)*dw_conv.stencil(pw_conv_s1_c, pw_conv_s1_x, pw_conv_s1_y)))
hw_uint<16> hcompute_pw_conv_stencil_1(hw_uint<16>& dw_conv_stencil, hw_uint<16>& hw_filter_pw_global_wrapper_stencil, hw_uint<16>& pw_conv_stencil) {
  int16_t _dw_conv_stencil_2 = (int16_t) dw_conv_stencil.extract<0, 15>();

  int16_t _hw_filter_pw_global_wrapper_stencil_1 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<0, 15>();

  int16_t _pw_conv_stencil_1 = (int16_t) pw_conv_stencil.extract<0, 15>();

  int16_t _816 = _hw_filter_pw_global_wrapper_stencil_1 * _dw_conv_stencil_2;
  int16_t _817 = _pw_conv_stencil_1 + _816;
  return _817;
}

//store is: pw_conv_reduction.stencil(pw_conv_reduction_s0_k, pw_conv_reduction_s0_x, pw_conv_reduction_s0_y) = (int16)0
hw_uint<16> hcompute_pw_conv_reduction_stencil() {
  int16_t _825 = (int16_t)(0);
  return _825;
}

//store is: pw_conv_reduction.stencil(pw_conv_reduction_s1_k, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) = (pw_conv_reduction.stencil(pw_conv_reduction_s1_k, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) + pw_conv.stencil(pw_conv_reduction_s1_k, pw_conv_reduction_s1_r_pw_x, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y))
hw_uint<16> hcompute_pw_conv_reduction_stencil_1(hw_uint<16>& pw_conv_stencil, hw_uint<16>& pw_conv_reduction_stencil) {
  int16_t _pw_conv_stencil_2 = (int16_t) pw_conv_stencil.extract<0, 15>();

  int16_t _pw_conv_reduction_stencil_1 = (int16_t) pw_conv_reduction_stencil.extract<0, 15>();

  int16_t _828 = _pw_conv_reduction_stencil_1 + _pw_conv_stencil_2;
  return _828;
}

//store is: hw_output.stencil(hw_output_s0_k, hw_output_s0_x_xi, hw_output_s0_y_yi) = pw_conv_reduction.stencil(hw_output_s0_k, hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& pw_conv_reduction_stencil) {
  int16_t _pw_conv_reduction_stencil_2 = (int16_t) pw_conv_reduction_stencil.extract<0, 15>();

  return _pw_conv_reduction_stencil_2;
}

