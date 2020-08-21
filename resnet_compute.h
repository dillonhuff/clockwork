#pragma once
#include "hw_classes.h"
#include "conv_3x3.h"


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

//store is: conv.stencil(conv_s0_x, conv_s0_y, 3) = (uint16)0
hw_uint<16> hcompute_conv_stencil_3() {
  uint16_t _675 = (uint16_t)(0);
  return _675;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 0) = ((hw_kernel_global_wrapper.stencil(0, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 0) + (hw_kernel_global_wrapper.stencil(1, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))
hw_uint<16> hcompute_conv_stencil_4(hw_uint<16>& conv_stencil, hw_uint<32>& hw_input_global_wrapper_stencil, hw_uint<32>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_1 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_1 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_2 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();

  uint16_t _hw_kernel_global_wrapper_stencil_1 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_2 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();

  uint16_t _678 = _hw_kernel_global_wrapper_stencil_1 * _hw_input_global_wrapper_stencil_1;
  uint16_t _679 = _hw_kernel_global_wrapper_stencil_2 * _hw_input_global_wrapper_stencil_2;
  uint16_t _680 = _conv_stencil_1 + _679;
  uint16_t _681 = _678 + _680;
  return _681;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 1) = ((hw_kernel_global_wrapper.stencil(0, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 1) + (hw_kernel_global_wrapper.stencil(1, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))
hw_uint<16> hcompute_conv_stencil_5(hw_uint<16>& conv_stencil, hw_uint<32>& hw_input_global_wrapper_stencil, hw_uint<32>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_2 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_3 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_4 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();

  uint16_t _hw_kernel_global_wrapper_stencil_3 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_4 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();

  uint16_t _697 = _hw_kernel_global_wrapper_stencil_3 * _hw_input_global_wrapper_stencil_3;
  uint16_t _698 = _hw_kernel_global_wrapper_stencil_4 * _hw_input_global_wrapper_stencil_4;
  uint16_t _699 = _conv_stencil_2 + _698;
  uint16_t _700 = _697 + _699;
  return _700;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 2) = ((hw_kernel_global_wrapper.stencil(0, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 2) + (hw_kernel_global_wrapper.stencil(1, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))
hw_uint<16> hcompute_conv_stencil_6(hw_uint<16>& conv_stencil, hw_uint<32>& hw_input_global_wrapper_stencil, hw_uint<32>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_3 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_5 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_6 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();

  uint16_t _hw_kernel_global_wrapper_stencil_5 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_6 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();

  uint16_t _716 = _hw_kernel_global_wrapper_stencil_5 * _hw_input_global_wrapper_stencil_5;
  uint16_t _717 = _hw_kernel_global_wrapper_stencil_6 * _hw_input_global_wrapper_stencil_6;
  uint16_t _718 = _conv_stencil_3 + _717;
  uint16_t _719 = _716 + _718;
  return _719;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 3) = ((hw_kernel_global_wrapper.stencil(0, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 3) + (hw_kernel_global_wrapper.stencil(1, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))
hw_uint<16> hcompute_conv_stencil_7(hw_uint<16>& conv_stencil, hw_uint<32>& hw_input_global_wrapper_stencil, hw_uint<32>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_4 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_7 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_8 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();

  uint16_t _hw_kernel_global_wrapper_stencil_7 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_8 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();

  uint16_t _735 = _hw_kernel_global_wrapper_stencil_7 * _hw_input_global_wrapper_stencil_7;
  uint16_t _736 = _hw_kernel_global_wrapper_stencil_8 * _hw_input_global_wrapper_stencil_8;
  uint16_t _737 = _conv_stencil_4 + _736;
  uint16_t _738 = _735 + _737;
  return _738;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w) = conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_5 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_5;
}

