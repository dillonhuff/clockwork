#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_z, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_z, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_1;
}

//store is: hw_kernel_global_wrapper.stencil(hw_kernel_global_wrapper_s0_z, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_y) = hw_kernel.stencil(hw_kernel_global_wrapper_s0_z, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_kernel_global_wrapper_stencil(hw_uint<16>& hw_kernel_stencil) {
  uint16_t _hw_kernel_stencil_1 = (uint16_t) hw_kernel_stencil.extract<0, 15>();

  return _hw_kernel_stencil_1;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 0) = (uint16)0
hw_uint<16> hcompute_conv_stencil() {
  uint16_t _666 = (uint16_t)(0);
  return _666;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 1) = (uint16)0
hw_uint<16> hcompute_conv_stencil_1() {
  uint16_t _669 = (uint16_t)(0);
  return _669;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 2) = (uint16)0
hw_uint<16> hcompute_conv_stencil_2() {
  uint16_t _672 = (uint16_t)(0);
  return _672;
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

  uint16_t _675 = _hw_kernel_global_wrapper_stencil_1 * _hw_input_global_wrapper_stencil_1;
  uint16_t _676 = _hw_kernel_global_wrapper_stencil_2 * _hw_input_global_wrapper_stencil_2;
  uint16_t _677 = _hw_kernel_global_wrapper_stencil_3 * _hw_input_global_wrapper_stencil_3;
  uint16_t _678 = _hw_kernel_global_wrapper_stencil_4 * _hw_input_global_wrapper_stencil_4;
  uint16_t _679 = _677 + _678;
  uint16_t _680 = _676 + _679;
  uint16_t _681 = _conv_stencil_1 + _680;
  uint16_t _682 = _675 + _681;
  return _682;
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

  uint16_t _710 = _hw_kernel_global_wrapper_stencil_5 * _hw_input_global_wrapper_stencil_5;
  uint16_t _711 = _hw_kernel_global_wrapper_stencil_6 * _hw_input_global_wrapper_stencil_6;
  uint16_t _712 = _hw_kernel_global_wrapper_stencil_7 * _hw_input_global_wrapper_stencil_7;
  uint16_t _713 = _hw_kernel_global_wrapper_stencil_8 * _hw_input_global_wrapper_stencil_8;
  uint16_t _714 = _712 + _713;
  uint16_t _715 = _711 + _714;
  uint16_t _716 = _conv_stencil_2 + _715;
  uint16_t _717 = _710 + _716;
  return _717;
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

  uint16_t _745 = _hw_kernel_global_wrapper_stencil_9 * _hw_input_global_wrapper_stencil_9;
  uint16_t _746 = _hw_kernel_global_wrapper_stencil_10 * _hw_input_global_wrapper_stencil_10;
  uint16_t _747 = _hw_kernel_global_wrapper_stencil_11 * _hw_input_global_wrapper_stencil_11;
  uint16_t _748 = _hw_kernel_global_wrapper_stencil_12 * _hw_input_global_wrapper_stencil_12;
  uint16_t _749 = _747 + _748;
  uint16_t _750 = _746 + _749;
  uint16_t _751 = _conv_stencil_3 + _750;
  uint16_t _752 = _745 + _751;
  return _752;
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

