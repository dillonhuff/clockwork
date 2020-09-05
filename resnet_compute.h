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

//store is: conv.stencil(conv_s1_x, conv_s1_y, 0) = ((hw_kernel_global_wrapper.stencil(0, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 0) + ((hw_kernel_global_wrapper.stencil(1, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
hw_uint<16> hcompute_conv_stencil_3(hw_uint<16>& conv_stencil, hw_uint<128>& hw_input_global_wrapper_stencil, hw_uint<128>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_1 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_1 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_2 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_3 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_input_global_wrapper_stencil_4 = (uint16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  uint16_t _hw_input_global_wrapper_stencil_5 = (uint16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  uint16_t _hw_input_global_wrapper_stencil_6 = (uint16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  uint16_t _hw_input_global_wrapper_stencil_7 = (uint16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  uint16_t _hw_input_global_wrapper_stencil_8 = (uint16_t) hw_input_global_wrapper_stencil.extract<112, 127>();

  uint16_t _hw_kernel_global_wrapper_stencil_1 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_2 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_3 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_kernel_global_wrapper_stencil_4 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<48, 63>();
  uint16_t _hw_kernel_global_wrapper_stencil_5 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<64, 79>();
  uint16_t _hw_kernel_global_wrapper_stencil_6 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<80, 95>();
  uint16_t _hw_kernel_global_wrapper_stencil_7 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<96, 111>();
  uint16_t _hw_kernel_global_wrapper_stencil_8 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<112, 127>();

  uint16_t _675 = _hw_kernel_global_wrapper_stencil_1 * _hw_input_global_wrapper_stencil_1;
  uint16_t _676 = _hw_kernel_global_wrapper_stencil_2 * _hw_input_global_wrapper_stencil_2;
  uint16_t _677 = _hw_kernel_global_wrapper_stencil_3 * _hw_input_global_wrapper_stencil_3;
  uint16_t _678 = _hw_kernel_global_wrapper_stencil_4 * _hw_input_global_wrapper_stencil_4;
  uint16_t _679 = _hw_kernel_global_wrapper_stencil_5 * _hw_input_global_wrapper_stencil_5;
  uint16_t _680 = _hw_kernel_global_wrapper_stencil_6 * _hw_input_global_wrapper_stencil_6;
  uint16_t _681 = _hw_kernel_global_wrapper_stencil_7 * _hw_input_global_wrapper_stencil_7;
  uint16_t _682 = _hw_kernel_global_wrapper_stencil_8 * _hw_input_global_wrapper_stencil_8;
  uint16_t _683 = _681 + _682;
  uint16_t _684 = _680 + _683;
  uint16_t _685 = _679 + _684;
  uint16_t _686 = _678 + _685;
  uint16_t _687 = _677 + _686;
  uint16_t _688 = _676 + _687;
  uint16_t _689 = _conv_stencil_1 + _688;
  uint16_t _690 = _675 + _689;
  return _690;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 1) = ((hw_kernel_global_wrapper.stencil(0, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 1) + ((hw_kernel_global_wrapper.stencil(1, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
hw_uint<16> hcompute_conv_stencil_4(hw_uint<16>& conv_stencil, hw_uint<128>& hw_input_global_wrapper_stencil, hw_uint<128>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_2 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_10 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_11 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_12 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_input_global_wrapper_stencil_13 = (uint16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  uint16_t _hw_input_global_wrapper_stencil_14 = (uint16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  uint16_t _hw_input_global_wrapper_stencil_15 = (uint16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  uint16_t _hw_input_global_wrapper_stencil_16 = (uint16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  uint16_t _hw_input_global_wrapper_stencil_9 = (uint16_t) hw_input_global_wrapper_stencil.extract<112, 127>();

  uint16_t _hw_kernel_global_wrapper_stencil_10 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_11 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_12 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_kernel_global_wrapper_stencil_13 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<48, 63>();
  uint16_t _hw_kernel_global_wrapper_stencil_14 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<64, 79>();
  uint16_t _hw_kernel_global_wrapper_stencil_15 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<80, 95>();
  uint16_t _hw_kernel_global_wrapper_stencil_16 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<96, 111>();
  uint16_t _hw_kernel_global_wrapper_stencil_9 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<112, 127>();

  uint16_t _742 = _hw_kernel_global_wrapper_stencil_9 * _hw_input_global_wrapper_stencil_9;
  uint16_t _743 = _hw_kernel_global_wrapper_stencil_10 * _hw_input_global_wrapper_stencil_10;
  uint16_t _744 = _hw_kernel_global_wrapper_stencil_11 * _hw_input_global_wrapper_stencil_11;
  uint16_t _745 = _hw_kernel_global_wrapper_stencil_12 * _hw_input_global_wrapper_stencil_12;
  uint16_t _746 = _hw_kernel_global_wrapper_stencil_13 * _hw_input_global_wrapper_stencil_13;
  uint16_t _747 = _hw_kernel_global_wrapper_stencil_14 * _hw_input_global_wrapper_stencil_14;
  uint16_t _748 = _hw_kernel_global_wrapper_stencil_15 * _hw_input_global_wrapper_stencil_15;
  uint16_t _749 = _hw_kernel_global_wrapper_stencil_16 * _hw_input_global_wrapper_stencil_16;
  uint16_t _750 = _748 + _749;
  uint16_t _751 = _747 + _750;
  uint16_t _752 = _746 + _751;
  uint16_t _753 = _745 + _752;
  uint16_t _754 = _744 + _753;
  uint16_t _755 = _743 + _754;
  uint16_t _756 = _conv_stencil_2 + _755;
  uint16_t _757 = _742 + _756;
  return _757;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 2) = ((hw_kernel_global_wrapper.stencil(0, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 2) + ((hw_kernel_global_wrapper.stencil(1, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
hw_uint<16> hcompute_conv_stencil_5(hw_uint<16>& conv_stencil, hw_uint<128>& hw_input_global_wrapper_stencil, hw_uint<128>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_3 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_17 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_18 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_19 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_input_global_wrapper_stencil_20 = (uint16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  uint16_t _hw_input_global_wrapper_stencil_21 = (uint16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  uint16_t _hw_input_global_wrapper_stencil_22 = (uint16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  uint16_t _hw_input_global_wrapper_stencil_23 = (uint16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  uint16_t _hw_input_global_wrapper_stencil_24 = (uint16_t) hw_input_global_wrapper_stencil.extract<112, 127>();

  uint16_t _hw_kernel_global_wrapper_stencil_17 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_18 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_19 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_kernel_global_wrapper_stencil_20 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<48, 63>();
  uint16_t _hw_kernel_global_wrapper_stencil_21 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<64, 79>();
  uint16_t _hw_kernel_global_wrapper_stencil_22 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<80, 95>();
  uint16_t _hw_kernel_global_wrapper_stencil_23 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<96, 111>();
  uint16_t _hw_kernel_global_wrapper_stencil_24 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<112, 127>();

  uint16_t _809 = _hw_kernel_global_wrapper_stencil_17 * _hw_input_global_wrapper_stencil_17;
  uint16_t _810 = _hw_kernel_global_wrapper_stencil_18 * _hw_input_global_wrapper_stencil_18;
  uint16_t _811 = _hw_kernel_global_wrapper_stencil_19 * _hw_input_global_wrapper_stencil_19;
  uint16_t _812 = _hw_kernel_global_wrapper_stencil_20 * _hw_input_global_wrapper_stencil_20;
  uint16_t _813 = _hw_kernel_global_wrapper_stencil_21 * _hw_input_global_wrapper_stencil_21;
  uint16_t _814 = _hw_kernel_global_wrapper_stencil_22 * _hw_input_global_wrapper_stencil_22;
  uint16_t _815 = _hw_kernel_global_wrapper_stencil_23 * _hw_input_global_wrapper_stencil_23;
  uint16_t _816 = _hw_kernel_global_wrapper_stencil_24 * _hw_input_global_wrapper_stencil_24;
  uint16_t _817 = _815 + _816;
  uint16_t _818 = _814 + _817;
  uint16_t _819 = _813 + _818;
  uint16_t _820 = _812 + _819;
  uint16_t _821 = _811 + _820;
  uint16_t _822 = _810 + _821;
  uint16_t _823 = _conv_stencil_3 + _822;
  uint16_t _824 = _809 + _823;
  return _824;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w) = conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_4 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_4;
}
