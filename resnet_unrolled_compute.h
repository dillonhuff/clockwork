#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_1;
}

//store is: hw_input_global_wrapper.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_1(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_2 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_2;
}

//store is: hw_input_global_wrapper.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_2(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_3 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_3;
}

//store is: hw_input_global_wrapper.stencil(3, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(3, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_3(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_4 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_4;
}

//store is: hw_kernel_global_wrapper.stencil(hw_kernel_global_wrapper_s0_z, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_y) = hw_kernel.stencil(hw_kernel_global_wrapper_s0_z, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_kernel_global_wrapper_stencil(hw_uint<16>& hw_kernel_stencil) {
  uint16_t _hw_kernel_stencil_1 = (uint16_t) hw_kernel_stencil.extract<0, 15>();

  return _hw_kernel_stencil_1;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 0) = (uint16)0
hw_uint<16> hcompute_conv_stencil() {
  uint16_t _676 = (uint16_t)(0);
  return _676;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 1) = (uint16)0
hw_uint<16> hcompute_conv_stencil_1() {
  uint16_t _679 = (uint16_t)(0);
  return _679;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 2) = (uint16)0
hw_uint<16> hcompute_conv_stencil_2() {
  uint16_t _682 = (uint16_t)(0);
  return _682;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 0) = ((hw_kernel_global_wrapper.stencil(0, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 0) + ((hw_kernel_global_wrapper.stencil(1, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(2, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))
hw_uint<16> hcompute_conv_stencil_3(hw_uint<16>& conv_stencil, hw_uint<64>& hw_input_global_wrapper_stencil, hw_uint<64>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_1 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_1 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_2 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_3 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_input_global_wrapper_stencil_4 = (uint16_t) hw_input_global_wrapper_stencil.extract<48, 63>();

  uint16_t _hw_kernel_global_wrapper_stencil_1 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_2 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_3 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_kernel_global_wrapper_stencil_4 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<48, 63>();

  uint16_t _685 = _hw_kernel_global_wrapper_stencil_1 * _hw_input_global_wrapper_stencil_1;
  uint16_t _686 = _hw_kernel_global_wrapper_stencil_2 * _hw_input_global_wrapper_stencil_2;
  uint16_t _687 = _hw_kernel_global_wrapper_stencil_3 * _hw_input_global_wrapper_stencil_3;
  uint16_t _688 = _hw_kernel_global_wrapper_stencil_4 * _hw_input_global_wrapper_stencil_4;
  uint16_t _689 = _687 + _688;
  uint16_t _690 = _686 + _689;
  uint16_t _691 = _conv_stencil_1 + _690;
  uint16_t _692 = _685 + _691;
  return _692;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 1) = ((hw_kernel_global_wrapper.stencil(0, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 1) + ((hw_kernel_global_wrapper.stencil(1, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(2, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))
hw_uint<16> hcompute_conv_stencil_4(hw_uint<16>& conv_stencil, hw_uint<64>& hw_input_global_wrapper_stencil, hw_uint<64>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_2 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_5 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_6 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_7 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_input_global_wrapper_stencil_8 = (uint16_t) hw_input_global_wrapper_stencil.extract<48, 63>();

  uint16_t _hw_kernel_global_wrapper_stencil_5 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_6 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_7 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_kernel_global_wrapper_stencil_8 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<48, 63>();

  uint16_t _720 = _hw_kernel_global_wrapper_stencil_5 * _hw_input_global_wrapper_stencil_5;
  uint16_t _721 = _hw_kernel_global_wrapper_stencil_6 * _hw_input_global_wrapper_stencil_6;
  uint16_t _722 = _hw_kernel_global_wrapper_stencil_7 * _hw_input_global_wrapper_stencil_7;
  uint16_t _723 = _hw_kernel_global_wrapper_stencil_8 * _hw_input_global_wrapper_stencil_8;
  uint16_t _724 = _722 + _723;
  uint16_t _725 = _721 + _724;
  uint16_t _726 = _conv_stencil_2 + _725;
  uint16_t _727 = _720 + _726;
  return _727;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 2) = ((hw_kernel_global_wrapper.stencil(0, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 2) + ((hw_kernel_global_wrapper.stencil(1, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(2, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))
hw_uint<16> hcompute_conv_stencil_5(hw_uint<16>& conv_stencil, hw_uint<64>& hw_input_global_wrapper_stencil, hw_uint<64>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_3 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_10 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_11 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_12 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_input_global_wrapper_stencil_9 = (uint16_t) hw_input_global_wrapper_stencil.extract<48, 63>();

  uint16_t _hw_kernel_global_wrapper_stencil_10 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_11 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_12 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_kernel_global_wrapper_stencil_9 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<48, 63>();

  uint16_t _755 = _hw_kernel_global_wrapper_stencil_9 * _hw_input_global_wrapper_stencil_9;
  uint16_t _756 = _hw_kernel_global_wrapper_stencil_10 * _hw_input_global_wrapper_stencil_10;
  uint16_t _757 = _hw_kernel_global_wrapper_stencil_11 * _hw_input_global_wrapper_stencil_11;
  uint16_t _758 = _hw_kernel_global_wrapper_stencil_12 * _hw_input_global_wrapper_stencil_12;
  uint16_t _759 = _757 + _758;
  uint16_t _760 = _756 + _759;
  uint16_t _761 = _conv_stencil_3 + _760;
  uint16_t _762 = _755 + _761;
  return _762;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0) = conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_4 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_4;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_1, hw_output_s0_y_yi_1, 1) = conv.stencil(hw_output_s0_x_xi_1, hw_output_s0_y_yi_1, 1)
hw_uint<16> hcompute_hw_output_stencil_1(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_5 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_5;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_2, hw_output_s0_y_yi_2, 2) = conv.stencil(hw_output_s0_x_xi_2, hw_output_s0_y_yi_2, 2)
hw_uint<16> hcompute_hw_output_stencil_2(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_6 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_6;
}

