#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_1 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_1;
}

//store is: hw_input_global_wrapper.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_1(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_2 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_2;
}

//store is: hw_input_global_wrapper.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_2(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_3 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_3;
}

//store is: hw_input_global_wrapper.stencil(3, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(3, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_3(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_4 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_4;
}

//store is: hw_input_global_wrapper.stencil(4, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(4, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_4(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_5 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_5;
}

//store is: hw_input_global_wrapper.stencil(5, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(5, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_5(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_6 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_6;
}

//store is: hw_input_global_wrapper.stencil(6, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(6, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_6(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_7 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_7;
}

//store is: hw_input_global_wrapper.stencil(7, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(7, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_7(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_8 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_8;
}

//store is: hw_kernel_global_wrapper.stencil(hw_kernel_global_wrapper_s0_z, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_y) = hw_kernel.stencil(hw_kernel_global_wrapper_s0_z, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_kernel_global_wrapper_stencil(hw_uint<16>& hw_kernel_stencil) {
  int16_t _hw_kernel_stencil_1 = (int16_t) hw_kernel_stencil.extract<0, 15>();

  return _hw_kernel_stencil_1;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 0) = (int16)0
hw_uint<16> hcompute_conv_stencil() {
  int16_t _678 = (int16_t)(0);
  return _678;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 1) = (int16)0
hw_uint<16> hcompute_conv_stencil_1() {
  int16_t _681 = (int16_t)(0);
  return _681;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 2) = (int16)0
hw_uint<16> hcompute_conv_stencil_2() {
  int16_t _684 = (int16_t)(0);
  return _684;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 3) = (int16)0
hw_uint<16> hcompute_conv_stencil_3() {
  int16_t _687 = (int16_t)(0);
  return _687;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 4) = (int16)0
hw_uint<16> hcompute_conv_stencil_4() {
  int16_t _690 = (int16_t)(0);
  return _690;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 5) = (int16)0
hw_uint<16> hcompute_conv_stencil_5() {
  int16_t _693 = (int16_t)(0);
  return _693;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 6) = (int16)0
hw_uint<16> hcompute_conv_stencil_6() {
  int16_t _696 = (int16_t)(0);
  return _696;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 7) = (int16)0
hw_uint<16> hcompute_conv_stencil_7() {
  int16_t _699 = (int16_t)(0);
  return _699;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 0) = ((hw_kernel_global_wrapper.stencil(0, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 0) + ((hw_kernel_global_wrapper.stencil(1, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
hw_uint<16> hcompute_conv_stencil_8(hw_uint<16>& conv_stencil, hw_uint<128>& hw_input_global_wrapper_stencil, hw_uint<128>& hw_kernel_global_wrapper_stencil) {
  int16_t _conv_stencil_1 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_1 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_2 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_3 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_4 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_5 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_6 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_7 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_8 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();

  int16_t _hw_kernel_global_wrapper_stencil_1 = (int16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_kernel_global_wrapper_stencil_2 = (int16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_kernel_global_wrapper_stencil_3 = (int16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_kernel_global_wrapper_stencil_4 = (int16_t) hw_kernel_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_kernel_global_wrapper_stencil_5 = (int16_t) hw_kernel_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_kernel_global_wrapper_stencil_6 = (int16_t) hw_kernel_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_kernel_global_wrapper_stencil_7 = (int16_t) hw_kernel_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_kernel_global_wrapper_stencil_8 = (int16_t) hw_kernel_global_wrapper_stencil.extract<112, 127>();

  int16_t _702 = _hw_kernel_global_wrapper_stencil_1 * _hw_input_global_wrapper_stencil_1;
  int16_t _703 = _hw_kernel_global_wrapper_stencil_2 * _hw_input_global_wrapper_stencil_2;
  int16_t _704 = _hw_kernel_global_wrapper_stencil_3 * _hw_input_global_wrapper_stencil_3;
  int16_t _705 = _hw_kernel_global_wrapper_stencil_4 * _hw_input_global_wrapper_stencil_4;
  int16_t _706 = _hw_kernel_global_wrapper_stencil_5 * _hw_input_global_wrapper_stencil_5;
  int16_t _707 = _hw_kernel_global_wrapper_stencil_6 * _hw_input_global_wrapper_stencil_6;
  int16_t _708 = _hw_kernel_global_wrapper_stencil_7 * _hw_input_global_wrapper_stencil_7;
  int16_t _709 = _hw_kernel_global_wrapper_stencil_8 * _hw_input_global_wrapper_stencil_8;
  int16_t _710 = _708 + _709;
  int16_t _711 = _707 + _710;
  int16_t _712 = _706 + _711;
  int16_t _713 = _705 + _712;
  int16_t _714 = _704 + _713;
  int16_t _715 = _703 + _714;
  int16_t _716 = _conv_stencil_1 + _715;
  int16_t _717 = _702 + _716;
  return _717;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 1) = ((hw_kernel_global_wrapper.stencil(0, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 1) + ((hw_kernel_global_wrapper.stencil(1, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
hw_uint<16> hcompute_conv_stencil_9(hw_uint<16>& conv_stencil, hw_uint<128>& hw_input_global_wrapper_stencil, hw_uint<128>& hw_kernel_global_wrapper_stencil) {
  int16_t _conv_stencil_2 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_10 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_11 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_12 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_13 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_14 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_15 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_16 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_9 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();

  int16_t _hw_kernel_global_wrapper_stencil_10 = (int16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_kernel_global_wrapper_stencil_11 = (int16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_kernel_global_wrapper_stencil_12 = (int16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_kernel_global_wrapper_stencil_13 = (int16_t) hw_kernel_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_kernel_global_wrapper_stencil_14 = (int16_t) hw_kernel_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_kernel_global_wrapper_stencil_15 = (int16_t) hw_kernel_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_kernel_global_wrapper_stencil_16 = (int16_t) hw_kernel_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_kernel_global_wrapper_stencil_9 = (int16_t) hw_kernel_global_wrapper_stencil.extract<112, 127>();

  int16_t _769 = _hw_kernel_global_wrapper_stencil_9 * _hw_input_global_wrapper_stencil_9;
  int16_t _770 = _hw_kernel_global_wrapper_stencil_10 * _hw_input_global_wrapper_stencil_10;
  int16_t _771 = _hw_kernel_global_wrapper_stencil_11 * _hw_input_global_wrapper_stencil_11;
  int16_t _772 = _hw_kernel_global_wrapper_stencil_12 * _hw_input_global_wrapper_stencil_12;
  int16_t _773 = _hw_kernel_global_wrapper_stencil_13 * _hw_input_global_wrapper_stencil_13;
  int16_t _774 = _hw_kernel_global_wrapper_stencil_14 * _hw_input_global_wrapper_stencil_14;
  int16_t _775 = _hw_kernel_global_wrapper_stencil_15 * _hw_input_global_wrapper_stencil_15;
  int16_t _776 = _hw_kernel_global_wrapper_stencil_16 * _hw_input_global_wrapper_stencil_16;
  int16_t _777 = _775 + _776;
  int16_t _778 = _774 + _777;
  int16_t _779 = _773 + _778;
  int16_t _780 = _772 + _779;
  int16_t _781 = _771 + _780;
  int16_t _782 = _770 + _781;
  int16_t _783 = _conv_stencil_2 + _782;
  int16_t _784 = _769 + _783;
  return _784;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 2) = ((hw_kernel_global_wrapper.stencil(0, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 2) + ((hw_kernel_global_wrapper.stencil(1, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
hw_uint<16> hcompute_conv_stencil_10(hw_uint<16>& conv_stencil, hw_uint<128>& hw_input_global_wrapper_stencil, hw_uint<128>& hw_kernel_global_wrapper_stencil) {
  int16_t _conv_stencil_3 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_17 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_18 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_19 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_20 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_21 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_22 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_23 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_24 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();

  int16_t _hw_kernel_global_wrapper_stencil_17 = (int16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_kernel_global_wrapper_stencil_18 = (int16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_kernel_global_wrapper_stencil_19 = (int16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_kernel_global_wrapper_stencil_20 = (int16_t) hw_kernel_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_kernel_global_wrapper_stencil_21 = (int16_t) hw_kernel_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_kernel_global_wrapper_stencil_22 = (int16_t) hw_kernel_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_kernel_global_wrapper_stencil_23 = (int16_t) hw_kernel_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_kernel_global_wrapper_stencil_24 = (int16_t) hw_kernel_global_wrapper_stencil.extract<112, 127>();

  int16_t _836 = _hw_kernel_global_wrapper_stencil_17 * _hw_input_global_wrapper_stencil_17;
  int16_t _837 = _hw_kernel_global_wrapper_stencil_18 * _hw_input_global_wrapper_stencil_18;
  int16_t _838 = _hw_kernel_global_wrapper_stencil_19 * _hw_input_global_wrapper_stencil_19;
  int16_t _839 = _hw_kernel_global_wrapper_stencil_20 * _hw_input_global_wrapper_stencil_20;
  int16_t _840 = _hw_kernel_global_wrapper_stencil_21 * _hw_input_global_wrapper_stencil_21;
  int16_t _841 = _hw_kernel_global_wrapper_stencil_22 * _hw_input_global_wrapper_stencil_22;
  int16_t _842 = _hw_kernel_global_wrapper_stencil_23 * _hw_input_global_wrapper_stencil_23;
  int16_t _843 = _hw_kernel_global_wrapper_stencil_24 * _hw_input_global_wrapper_stencil_24;
  int16_t _844 = _842 + _843;
  int16_t _845 = _841 + _844;
  int16_t _846 = _840 + _845;
  int16_t _847 = _839 + _846;
  int16_t _848 = _838 + _847;
  int16_t _849 = _837 + _848;
  int16_t _850 = _conv_stencil_3 + _849;
  int16_t _851 = _836 + _850;
  return _851;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 3) = ((hw_kernel_global_wrapper.stencil(0, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 3) + ((hw_kernel_global_wrapper.stencil(1, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
hw_uint<16> hcompute_conv_stencil_11(hw_uint<16>& conv_stencil, hw_uint<128>& hw_input_global_wrapper_stencil, hw_uint<128>& hw_kernel_global_wrapper_stencil) {
  int16_t _conv_stencil_4 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_25 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_26 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_27 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_28 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_29 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_30 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_31 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_32 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();

  int16_t _hw_kernel_global_wrapper_stencil_25 = (int16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_kernel_global_wrapper_stencil_26 = (int16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_kernel_global_wrapper_stencil_27 = (int16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_kernel_global_wrapper_stencil_28 = (int16_t) hw_kernel_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_kernel_global_wrapper_stencil_29 = (int16_t) hw_kernel_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_kernel_global_wrapper_stencil_30 = (int16_t) hw_kernel_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_kernel_global_wrapper_stencil_31 = (int16_t) hw_kernel_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_kernel_global_wrapper_stencil_32 = (int16_t) hw_kernel_global_wrapper_stencil.extract<112, 127>();

  int16_t _903 = _hw_kernel_global_wrapper_stencil_25 * _hw_input_global_wrapper_stencil_25;
  int16_t _904 = _hw_kernel_global_wrapper_stencil_26 * _hw_input_global_wrapper_stencil_26;
  int16_t _905 = _hw_kernel_global_wrapper_stencil_27 * _hw_input_global_wrapper_stencil_27;
  int16_t _906 = _hw_kernel_global_wrapper_stencil_28 * _hw_input_global_wrapper_stencil_28;
  int16_t _907 = _hw_kernel_global_wrapper_stencil_29 * _hw_input_global_wrapper_stencil_29;
  int16_t _908 = _hw_kernel_global_wrapper_stencil_30 * _hw_input_global_wrapper_stencil_30;
  int16_t _909 = _hw_kernel_global_wrapper_stencil_31 * _hw_input_global_wrapper_stencil_31;
  int16_t _910 = _hw_kernel_global_wrapper_stencil_32 * _hw_input_global_wrapper_stencil_32;
  int16_t _911 = _909 + _910;
  int16_t _912 = _908 + _911;
  int16_t _913 = _907 + _912;
  int16_t _914 = _906 + _913;
  int16_t _915 = _905 + _914;
  int16_t _916 = _904 + _915;
  int16_t _917 = _conv_stencil_4 + _916;
  int16_t _918 = _903 + _917;
  return _918;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 4) = ((hw_kernel_global_wrapper.stencil(0, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 4) + ((hw_kernel_global_wrapper.stencil(1, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
hw_uint<16> hcompute_conv_stencil_12(hw_uint<16>& conv_stencil, hw_uint<128>& hw_input_global_wrapper_stencil, hw_uint<128>& hw_kernel_global_wrapper_stencil) {
  int16_t _conv_stencil_5 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_33 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_34 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_35 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_36 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_37 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_38 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_39 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_40 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();

  int16_t _hw_kernel_global_wrapper_stencil_33 = (int16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_kernel_global_wrapper_stencil_34 = (int16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_kernel_global_wrapper_stencil_35 = (int16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_kernel_global_wrapper_stencil_36 = (int16_t) hw_kernel_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_kernel_global_wrapper_stencil_37 = (int16_t) hw_kernel_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_kernel_global_wrapper_stencil_38 = (int16_t) hw_kernel_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_kernel_global_wrapper_stencil_39 = (int16_t) hw_kernel_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_kernel_global_wrapper_stencil_40 = (int16_t) hw_kernel_global_wrapper_stencil.extract<112, 127>();

  int16_t _970 = _hw_kernel_global_wrapper_stencil_33 * _hw_input_global_wrapper_stencil_33;
  int16_t _971 = _hw_kernel_global_wrapper_stencil_34 * _hw_input_global_wrapper_stencil_34;
  int16_t _972 = _hw_kernel_global_wrapper_stencil_35 * _hw_input_global_wrapper_stencil_35;
  int16_t _973 = _hw_kernel_global_wrapper_stencil_36 * _hw_input_global_wrapper_stencil_36;
  int16_t _974 = _hw_kernel_global_wrapper_stencil_37 * _hw_input_global_wrapper_stencil_37;
  int16_t _975 = _hw_kernel_global_wrapper_stencil_38 * _hw_input_global_wrapper_stencil_38;
  int16_t _976 = _hw_kernel_global_wrapper_stencil_39 * _hw_input_global_wrapper_stencil_39;
  int16_t _977 = _hw_kernel_global_wrapper_stencil_40 * _hw_input_global_wrapper_stencil_40;
  int16_t _978 = _976 + _977;
  int16_t _979 = _975 + _978;
  int16_t _980 = _974 + _979;
  int16_t _981 = _973 + _980;
  int16_t _982 = _972 + _981;
  int16_t _983 = _971 + _982;
  int16_t _984 = _conv_stencil_5 + _983;
  int16_t _985 = _970 + _984;
  return _985;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 5) = ((hw_kernel_global_wrapper.stencil(0, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 5) + ((hw_kernel_global_wrapper.stencil(1, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
hw_uint<16> hcompute_conv_stencil_13(hw_uint<16>& conv_stencil, hw_uint<128>& hw_input_global_wrapper_stencil, hw_uint<128>& hw_kernel_global_wrapper_stencil) {
  int16_t _conv_stencil_6 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_41 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_42 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_43 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_44 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_45 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_46 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_47 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_48 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();

  int16_t _hw_kernel_global_wrapper_stencil_41 = (int16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_kernel_global_wrapper_stencil_42 = (int16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_kernel_global_wrapper_stencil_43 = (int16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_kernel_global_wrapper_stencil_44 = (int16_t) hw_kernel_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_kernel_global_wrapper_stencil_45 = (int16_t) hw_kernel_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_kernel_global_wrapper_stencil_46 = (int16_t) hw_kernel_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_kernel_global_wrapper_stencil_47 = (int16_t) hw_kernel_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_kernel_global_wrapper_stencil_48 = (int16_t) hw_kernel_global_wrapper_stencil.extract<112, 127>();

  int16_t _1037 = _hw_kernel_global_wrapper_stencil_41 * _hw_input_global_wrapper_stencil_41;
  int16_t _1038 = _hw_kernel_global_wrapper_stencil_42 * _hw_input_global_wrapper_stencil_42;
  int16_t _1039 = _hw_kernel_global_wrapper_stencil_43 * _hw_input_global_wrapper_stencil_43;
  int16_t _1040 = _hw_kernel_global_wrapper_stencil_44 * _hw_input_global_wrapper_stencil_44;
  int16_t _1041 = _hw_kernel_global_wrapper_stencil_45 * _hw_input_global_wrapper_stencil_45;
  int16_t _1042 = _hw_kernel_global_wrapper_stencil_46 * _hw_input_global_wrapper_stencil_46;
  int16_t _1043 = _hw_kernel_global_wrapper_stencil_47 * _hw_input_global_wrapper_stencil_47;
  int16_t _1044 = _hw_kernel_global_wrapper_stencil_48 * _hw_input_global_wrapper_stencil_48;
  int16_t _1045 = _1043 + _1044;
  int16_t _1046 = _1042 + _1045;
  int16_t _1047 = _1041 + _1046;
  int16_t _1048 = _1040 + _1047;
  int16_t _1049 = _1039 + _1048;
  int16_t _1050 = _1038 + _1049;
  int16_t _1051 = _conv_stencil_6 + _1050;
  int16_t _1052 = _1037 + _1051;
  return _1052;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 6) = ((hw_kernel_global_wrapper.stencil(0, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 6) + ((hw_kernel_global_wrapper.stencil(1, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
hw_uint<16> hcompute_conv_stencil_14(hw_uint<16>& conv_stencil, hw_uint<128>& hw_input_global_wrapper_stencil, hw_uint<128>& hw_kernel_global_wrapper_stencil) {
  int16_t _conv_stencil_7 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_49 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_50 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_51 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_52 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_53 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_54 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_55 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_56 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();

  int16_t _hw_kernel_global_wrapper_stencil_49 = (int16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_kernel_global_wrapper_stencil_50 = (int16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_kernel_global_wrapper_stencil_51 = (int16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_kernel_global_wrapper_stencil_52 = (int16_t) hw_kernel_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_kernel_global_wrapper_stencil_53 = (int16_t) hw_kernel_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_kernel_global_wrapper_stencil_54 = (int16_t) hw_kernel_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_kernel_global_wrapper_stencil_55 = (int16_t) hw_kernel_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_kernel_global_wrapper_stencil_56 = (int16_t) hw_kernel_global_wrapper_stencil.extract<112, 127>();

  int16_t _1104 = _hw_kernel_global_wrapper_stencil_49 * _hw_input_global_wrapper_stencil_49;
  int16_t _1105 = _hw_kernel_global_wrapper_stencil_50 * _hw_input_global_wrapper_stencil_50;
  int16_t _1106 = _hw_kernel_global_wrapper_stencil_51 * _hw_input_global_wrapper_stencil_51;
  int16_t _1107 = _hw_kernel_global_wrapper_stencil_52 * _hw_input_global_wrapper_stencil_52;
  int16_t _1108 = _hw_kernel_global_wrapper_stencil_53 * _hw_input_global_wrapper_stencil_53;
  int16_t _1109 = _hw_kernel_global_wrapper_stencil_54 * _hw_input_global_wrapper_stencil_54;
  int16_t _1110 = _hw_kernel_global_wrapper_stencil_55 * _hw_input_global_wrapper_stencil_55;
  int16_t _1111 = _hw_kernel_global_wrapper_stencil_56 * _hw_input_global_wrapper_stencil_56;
  int16_t _1112 = _1110 + _1111;
  int16_t _1113 = _1109 + _1112;
  int16_t _1114 = _1108 + _1113;
  int16_t _1115 = _1107 + _1114;
  int16_t _1116 = _1106 + _1115;
  int16_t _1117 = _1105 + _1116;
  int16_t _1118 = _conv_stencil_7 + _1117;
  int16_t _1119 = _1104 + _1118;
  return _1119;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 7) = ((hw_kernel_global_wrapper.stencil(0, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 7) + ((hw_kernel_global_wrapper.stencil(1, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(2, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(3, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(3, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(4, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(4, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(5, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(5, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + ((hw_kernel_global_wrapper.stencil(7, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(7, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))) + (hw_kernel_global_wrapper.stencil(6, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(6, (conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y)))))))))))
hw_uint<16> hcompute_conv_stencil_15(hw_uint<16>& conv_stencil, hw_uint<128>& hw_input_global_wrapper_stencil, hw_uint<128>& hw_kernel_global_wrapper_stencil) {
  int16_t _conv_stencil_8 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_57 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_58 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_59 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_60 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_61 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_62 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_63 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_64 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();

  int16_t _hw_kernel_global_wrapper_stencil_57 = (int16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_kernel_global_wrapper_stencil_58 = (int16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_kernel_global_wrapper_stencil_59 = (int16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_kernel_global_wrapper_stencil_60 = (int16_t) hw_kernel_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_kernel_global_wrapper_stencil_61 = (int16_t) hw_kernel_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_kernel_global_wrapper_stencil_62 = (int16_t) hw_kernel_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_kernel_global_wrapper_stencil_63 = (int16_t) hw_kernel_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_kernel_global_wrapper_stencil_64 = (int16_t) hw_kernel_global_wrapper_stencil.extract<112, 127>();

  int16_t _1171 = _hw_kernel_global_wrapper_stencil_57 * _hw_input_global_wrapper_stencil_57;
  int16_t _1172 = _hw_kernel_global_wrapper_stencil_58 * _hw_input_global_wrapper_stencil_58;
  int16_t _1173 = _hw_kernel_global_wrapper_stencil_59 * _hw_input_global_wrapper_stencil_59;
  int16_t _1174 = _hw_kernel_global_wrapper_stencil_60 * _hw_input_global_wrapper_stencil_60;
  int16_t _1175 = _hw_kernel_global_wrapper_stencil_61 * _hw_input_global_wrapper_stencil_61;
  int16_t _1176 = _hw_kernel_global_wrapper_stencil_62 * _hw_input_global_wrapper_stencil_62;
  int16_t _1177 = _hw_kernel_global_wrapper_stencil_63 * _hw_input_global_wrapper_stencil_63;
  int16_t _1178 = _hw_kernel_global_wrapper_stencil_64 * _hw_input_global_wrapper_stencil_64;
  int16_t _1179 = _1177 + _1178;
  int16_t _1180 = _1176 + _1179;
  int16_t _1181 = _1175 + _1180;
  int16_t _1182 = _1174 + _1181;
  int16_t _1183 = _1173 + _1182;
  int16_t _1184 = _1172 + _1183;
  int16_t _1185 = _conv_stencil_8 + _1184;
  int16_t _1186 = _1171 + _1185;
  return _1186;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0) = conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_9 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_9;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_1, hw_output_s0_y_yi_1, 1) = conv.stencil(hw_output_s0_x_xi_1, hw_output_s0_y_yi_1, 1)
hw_uint<16> hcompute_hw_output_stencil_1(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_10 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_10;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_2, hw_output_s0_y_yi_2, 2) = conv.stencil(hw_output_s0_x_xi_2, hw_output_s0_y_yi_2, 2)
hw_uint<16> hcompute_hw_output_stencil_2(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_11 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_11;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_3, hw_output_s0_y_yi_3, 3) = conv.stencil(hw_output_s0_x_xi_3, hw_output_s0_y_yi_3, 3)
hw_uint<16> hcompute_hw_output_stencil_3(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_12 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_12;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_4, hw_output_s0_y_yi_4, 4) = conv.stencil(hw_output_s0_x_xi_4, hw_output_s0_y_yi_4, 4)
hw_uint<16> hcompute_hw_output_stencil_4(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_13 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_13;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_5, hw_output_s0_y_yi_5, 5) = conv.stencil(hw_output_s0_x_xi_5, hw_output_s0_y_yi_5, 5)
hw_uint<16> hcompute_hw_output_stencil_5(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_14 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_14;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_6, hw_output_s0_y_yi_6, 6) = conv.stencil(hw_output_s0_x_xi_6, hw_output_s0_y_yi_6, 6)
hw_uint<16> hcompute_hw_output_stencil_6(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_15 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_15;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_7, hw_output_s0_y_yi_7, 7) = conv.stencil(hw_output_s0_x_xi_7, hw_output_s0_y_yi_7, 7)
hw_uint<16> hcompute_hw_output_stencil_7(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_16 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_16;
}

