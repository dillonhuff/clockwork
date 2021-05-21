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

//store is: hw_input_global_wrapper.stencil(8, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(8, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_8(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_9 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_9;
}

//store is: hw_input_global_wrapper.stencil(9, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(9, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_9(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_10 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_10;
}

//store is: hw_input_global_wrapper.stencil(10, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(10, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_10(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_11 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_11;
}

//store is: hw_input_global_wrapper.stencil(11, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(11, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_11(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_12 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_12;
}

//store is: hw_input_global_wrapper.stencil(12, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(12, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_12(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_13 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_13;
}

//store is: hw_input_global_wrapper.stencil(13, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(13, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_13(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_14 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_14;
}

//store is: hw_input_global_wrapper.stencil(14, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(14, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_14(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_15 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_15;
}

//store is: hw_input_global_wrapper.stencil(15, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(15, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_15(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_16 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_16;
}

//store is: hw_input_global_wrapper.stencil(16, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(16, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_16(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_17 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_17;
}

//store is: hw_input_global_wrapper.stencil(17, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(17, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_17(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_18 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_18;
}

//store is: hw_input_global_wrapper.stencil(18, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(18, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_18(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_19 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_19;
}

//store is: hw_input_global_wrapper.stencil(19, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(19, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_19(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_20 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_20;
}

//store is: hw_input_global_wrapper.stencil(20, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(20, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_20(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_21 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_21;
}

//store is: hw_input_global_wrapper.stencil(21, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(21, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_21(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_22 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_22;
}

//store is: hw_input_global_wrapper.stencil(22, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(22, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_22(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_23 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_23;
}

//store is: hw_input_global_wrapper.stencil(23, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(23, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_23(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_24 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_24;
}

//store is: hw_input_global_wrapper.stencil(24, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(24, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_24(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_25 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_25;
}

//store is: hw_input_global_wrapper.stencil(25, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(25, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_25(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_26 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_26;
}

//store is: hw_input_global_wrapper.stencil(26, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(26, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_26(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_27 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_27;
}

//store is: hw_input_global_wrapper.stencil(27, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(27, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_27(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_28 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_28;
}

//store is: hw_input_global_wrapper.stencil(28, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(28, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_28(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_29 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_29;
}

//store is: hw_input_global_wrapper.stencil(29, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(29, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_29(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_30 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_30;
}

//store is: hw_input_global_wrapper.stencil(30, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(30, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_30(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_31 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_31;
}

//store is: hw_input_global_wrapper.stencil(31, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(31, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_31(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_32 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_32;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, conv_s0_w) = (int16)0
hw_uint<16> hcompute_conv_stencil() {
  int16_t _418 = (int16_t)(0);
  return _418;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 0) = ((hw_input_global_wrapper.stencil(0, conv_s1_x, conv_s1_y)*(int16)3) + (conv.stencil(conv_s1_x, conv_s1_y, 0) + ((hw_input_global_wrapper.stencil(1, conv_s1_x, conv_s1_y)*(int16)35) + ((hw_input_global_wrapper.stencil(2, conv_s1_x, conv_s1_y)*(int16)67) + ((hw_input_global_wrapper.stencil(3, conv_s1_x, conv_s1_y)*(int16)99) + ((hw_input_global_wrapper.stencil(4, conv_s1_x, conv_s1_y)*(int16)131) + ((hw_input_global_wrapper.stencil(5, conv_s1_x, conv_s1_y)*(int16)163) + ((hw_input_global_wrapper.stencil(6, conv_s1_x, conv_s1_y)*(int16)195) + ((hw_input_global_wrapper.stencil(7, conv_s1_x, conv_s1_y)*(int16)227) + ((hw_input_global_wrapper.stencil(8, conv_s1_x, conv_s1_y)*(int16)259) + ((hw_input_global_wrapper.stencil(9, conv_s1_x, conv_s1_y)*(int16)291) + ((hw_input_global_wrapper.stencil(10, conv_s1_x, conv_s1_y)*(int16)323) + ((hw_input_global_wrapper.stencil(11, conv_s1_x, conv_s1_y)*(int16)355) + ((hw_input_global_wrapper.stencil(12, conv_s1_x, conv_s1_y)*(int16)387) + ((hw_input_global_wrapper.stencil(13, conv_s1_x, conv_s1_y)*(int16)419) + ((hw_input_global_wrapper.stencil(14, conv_s1_x, conv_s1_y)*(int16)451) + ((hw_input_global_wrapper.stencil(15, conv_s1_x, conv_s1_y)*(int16)483) + ((hw_input_global_wrapper.stencil(16, conv_s1_x, conv_s1_y)*(int16)515) + ((hw_input_global_wrapper.stencil(17, conv_s1_x, conv_s1_y)*(int16)547) + ((hw_input_global_wrapper.stencil(18, conv_s1_x, conv_s1_y)*(int16)579) + ((hw_input_global_wrapper.stencil(19, conv_s1_x, conv_s1_y)*(int16)611) + ((hw_input_global_wrapper.stencil(20, conv_s1_x, conv_s1_y)*(int16)643) + ((hw_input_global_wrapper.stencil(21, conv_s1_x, conv_s1_y)*(int16)675) + ((hw_input_global_wrapper.stencil(22, conv_s1_x, conv_s1_y)*(int16)707) + ((hw_input_global_wrapper.stencil(23, conv_s1_x, conv_s1_y)*(int16)739) + ((hw_input_global_wrapper.stencil(24, conv_s1_x, conv_s1_y)*(int16)771) + ((hw_input_global_wrapper.stencil(25, conv_s1_x, conv_s1_y)*(int16)803) + ((hw_input_global_wrapper.stencil(26, conv_s1_x, conv_s1_y)*(int16)835) + ((hw_input_global_wrapper.stencil(27, conv_s1_x, conv_s1_y)*(int16)867) + ((hw_input_global_wrapper.stencil(28, conv_s1_x, conv_s1_y)*(int16)899) + ((hw_input_global_wrapper.stencil(29, conv_s1_x, conv_s1_y)*(int16)931) + ((hw_input_global_wrapper.stencil(31, conv_s1_x, conv_s1_y)*(int16)995) + (hw_input_global_wrapper.stencil(30, conv_s1_x, conv_s1_y)*(int16)963)))))))))))))))))))))))))))))))))
hw_uint<16> hcompute_conv_stencil_1(hw_uint<16>& conv_stencil, hw_uint<512>& hw_input_global_wrapper_stencil) {
  int16_t _conv_stencil_1 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_1 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_10 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_11 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_12 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_13 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_14 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_15 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_16 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_input_global_wrapper_stencil_17 = (int16_t) hw_input_global_wrapper_stencil.extract<128, 143>();
  int16_t _hw_input_global_wrapper_stencil_18 = (int16_t) hw_input_global_wrapper_stencil.extract<144, 159>();
  int16_t _hw_input_global_wrapper_stencil_19 = (int16_t) hw_input_global_wrapper_stencil.extract<160, 175>();
  int16_t _hw_input_global_wrapper_stencil_2 = (int16_t) hw_input_global_wrapper_stencil.extract<176, 191>();
  int16_t _hw_input_global_wrapper_stencil_20 = (int16_t) hw_input_global_wrapper_stencil.extract<192, 207>();
  int16_t _hw_input_global_wrapper_stencil_21 = (int16_t) hw_input_global_wrapper_stencil.extract<208, 223>();
  int16_t _hw_input_global_wrapper_stencil_22 = (int16_t) hw_input_global_wrapper_stencil.extract<224, 239>();
  int16_t _hw_input_global_wrapper_stencil_23 = (int16_t) hw_input_global_wrapper_stencil.extract<240, 255>();
  int16_t _hw_input_global_wrapper_stencil_24 = (int16_t) hw_input_global_wrapper_stencil.extract<256, 271>();
  int16_t _hw_input_global_wrapper_stencil_25 = (int16_t) hw_input_global_wrapper_stencil.extract<272, 287>();
  int16_t _hw_input_global_wrapper_stencil_26 = (int16_t) hw_input_global_wrapper_stencil.extract<288, 303>();
  int16_t _hw_input_global_wrapper_stencil_27 = (int16_t) hw_input_global_wrapper_stencil.extract<304, 319>();
  int16_t _hw_input_global_wrapper_stencil_28 = (int16_t) hw_input_global_wrapper_stencil.extract<320, 335>();
  int16_t _hw_input_global_wrapper_stencil_29 = (int16_t) hw_input_global_wrapper_stencil.extract<336, 351>();
  int16_t _hw_input_global_wrapper_stencil_3 = (int16_t) hw_input_global_wrapper_stencil.extract<352, 367>();
  int16_t _hw_input_global_wrapper_stencil_30 = (int16_t) hw_input_global_wrapper_stencil.extract<368, 383>();
  int16_t _hw_input_global_wrapper_stencil_31 = (int16_t) hw_input_global_wrapper_stencil.extract<384, 399>();
  int16_t _hw_input_global_wrapper_stencil_32 = (int16_t) hw_input_global_wrapper_stencil.extract<400, 415>();
  int16_t _hw_input_global_wrapper_stencil_4 = (int16_t) hw_input_global_wrapper_stencil.extract<416, 431>();
  int16_t _hw_input_global_wrapper_stencil_5 = (int16_t) hw_input_global_wrapper_stencil.extract<432, 447>();
  int16_t _hw_input_global_wrapper_stencil_6 = (int16_t) hw_input_global_wrapper_stencil.extract<448, 463>();
  int16_t _hw_input_global_wrapper_stencil_7 = (int16_t) hw_input_global_wrapper_stencil.extract<464, 479>();
  int16_t _hw_input_global_wrapper_stencil_8 = (int16_t) hw_input_global_wrapper_stencil.extract<480, 495>();
  int16_t _hw_input_global_wrapper_stencil_9 = (int16_t) hw_input_global_wrapper_stencil.extract<496, 511>();

  int16_t _421 = (int16_t)(3);
  int16_t _422 = _hw_input_global_wrapper_stencil_1 * _421;
  int16_t _423 = (int16_t)(35);
  int16_t _424 = _hw_input_global_wrapper_stencil_2 * _423;
  int16_t _425 = (int16_t)(67);
  int16_t _426 = _hw_input_global_wrapper_stencil_3 * _425;
  int16_t _427 = (int16_t)(99);
  int16_t _428 = _hw_input_global_wrapper_stencil_4 * _427;
  int16_t _429 = (int16_t)(131);
  int16_t _430 = _hw_input_global_wrapper_stencil_5 * _429;
  int16_t _431 = (int16_t)(163);
  int16_t _432 = _hw_input_global_wrapper_stencil_6 * _431;
  int16_t _433 = (int16_t)(195);
  int16_t _434 = _hw_input_global_wrapper_stencil_7 * _433;
  int16_t _435 = (int16_t)(227);
  int16_t _436 = _hw_input_global_wrapper_stencil_8 * _435;
  int16_t _437 = (int16_t)(259);
  int16_t _438 = _hw_input_global_wrapper_stencil_9 * _437;
  int16_t _439 = (int16_t)(291);
  int16_t _440 = _hw_input_global_wrapper_stencil_10 * _439;
  int16_t _441 = (int16_t)(323);
  int16_t _442 = _hw_input_global_wrapper_stencil_11 * _441;
  int16_t _443 = (int16_t)(355);
  int16_t _444 = _hw_input_global_wrapper_stencil_12 * _443;
  int16_t _445 = (int16_t)(387);
  int16_t _446 = _hw_input_global_wrapper_stencil_13 * _445;
  int16_t _447 = (int16_t)(419);
  int16_t _448 = _hw_input_global_wrapper_stencil_14 * _447;
  int16_t _449 = (int16_t)(451);
  int16_t _450 = _hw_input_global_wrapper_stencil_15 * _449;
  int16_t _451 = (int16_t)(483);
  int16_t _452 = _hw_input_global_wrapper_stencil_16 * _451;
  int16_t _453 = (int16_t)(515);
  int16_t _454 = _hw_input_global_wrapper_stencil_17 * _453;
  int16_t _455 = (int16_t)(547);
  int16_t _456 = _hw_input_global_wrapper_stencil_18 * _455;
  int16_t _457 = (int16_t)(579);
  int16_t _458 = _hw_input_global_wrapper_stencil_19 * _457;
  int16_t _459 = (int16_t)(611);
  int16_t _460 = _hw_input_global_wrapper_stencil_20 * _459;
  int16_t _461 = (int16_t)(643);
  int16_t _462 = _hw_input_global_wrapper_stencil_21 * _461;
  int16_t _463 = (int16_t)(675);
  int16_t _464 = _hw_input_global_wrapper_stencil_22 * _463;
  int16_t _465 = (int16_t)(707);
  int16_t _466 = _hw_input_global_wrapper_stencil_23 * _465;
  int16_t _467 = (int16_t)(739);
  int16_t _468 = _hw_input_global_wrapper_stencil_24 * _467;
  int16_t _469 = (int16_t)(771);
  int16_t _470 = _hw_input_global_wrapper_stencil_25 * _469;
  int16_t _471 = (int16_t)(803);
  int16_t _472 = _hw_input_global_wrapper_stencil_26 * _471;
  int16_t _473 = (int16_t)(835);
  int16_t _474 = _hw_input_global_wrapper_stencil_27 * _473;
  int16_t _475 = (int16_t)(867);
  int16_t _476 = _hw_input_global_wrapper_stencil_28 * _475;
  int16_t _477 = (int16_t)(899);
  int16_t _478 = _hw_input_global_wrapper_stencil_29 * _477;
  int16_t _479 = (int16_t)(931);
  int16_t _480 = _hw_input_global_wrapper_stencil_30 * _479;
  int16_t _481 = (int16_t)(995);
  int16_t _482 = _hw_input_global_wrapper_stencil_31 * _481;
  int16_t _483 = (int16_t)(963);
  int16_t _484 = _hw_input_global_wrapper_stencil_32 * _483;
  int16_t _485 = _482 + _484;
  int16_t _486 = _480 + _485;
  int16_t _487 = _478 + _486;
  int16_t _488 = _476 + _487;
  int16_t _489 = _474 + _488;
  int16_t _490 = _472 + _489;
  int16_t _491 = _470 + _490;
  int16_t _492 = _468 + _491;
  int16_t _493 = _466 + _492;
  int16_t _494 = _464 + _493;
  int16_t _495 = _462 + _494;
  int16_t _496 = _460 + _495;
  int16_t _497 = _458 + _496;
  int16_t _498 = _456 + _497;
  int16_t _499 = _454 + _498;
  int16_t _500 = _452 + _499;
  int16_t _501 = _450 + _500;
  int16_t _502 = _448 + _501;
  int16_t _503 = _446 + _502;
  int16_t _504 = _444 + _503;
  int16_t _505 = _442 + _504;
  int16_t _506 = _440 + _505;
  int16_t _507 = _438 + _506;
  int16_t _508 = _436 + _507;
  int16_t _509 = _434 + _508;
  int16_t _510 = _432 + _509;
  int16_t _511 = _430 + _510;
  int16_t _512 = _428 + _511;
  int16_t _513 = _426 + _512;
  int16_t _514 = _424 + _513;
  int16_t _515 = _conv_stencil_1 + _514;
  int16_t _516 = _422 + _515;
  return _516;
}

//store is: conv.stencil(conv_s1_x_1, conv_s1_y_1, 1) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_1, conv_s1_y_1)*(int16)4) + (conv.stencil(conv_s1_x_1, conv_s1_y_1, 1) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_1, conv_s1_y_1)*(int16)36) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_1, conv_s1_y_1)*(int16)68) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_1, conv_s1_y_1)*(int16)100) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_1, conv_s1_y_1)*(int16)132) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_1, conv_s1_y_1)*(int16)164) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_1, conv_s1_y_1)*(int16)196) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_1, conv_s1_y_1)*(int16)228) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_1, conv_s1_y_1)*(int16)260) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_1, conv_s1_y_1)*(int16)292) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_1, conv_s1_y_1)*(int16)324) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_1, conv_s1_y_1)*(int16)356) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_1, conv_s1_y_1)*(int16)388) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_1, conv_s1_y_1)*(int16)420) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_1, conv_s1_y_1)*(int16)452) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_1, conv_s1_y_1)*(int16)484) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_1, conv_s1_y_1)*(int16)516) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_1, conv_s1_y_1)*(int16)548) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_1, conv_s1_y_1)*(int16)580) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_1, conv_s1_y_1)*(int16)612) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_1, conv_s1_y_1)*(int16)644) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_1, conv_s1_y_1)*(int16)676) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_1, conv_s1_y_1)*(int16)708) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_1, conv_s1_y_1)*(int16)740) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_1, conv_s1_y_1)*(int16)772) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_1, conv_s1_y_1)*(int16)804) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_1, conv_s1_y_1)*(int16)836) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_1, conv_s1_y_1)*(int16)868) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_1, conv_s1_y_1)*(int16)900) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_1, conv_s1_y_1)*(int16)932) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_1, conv_s1_y_1)*(int16)996) + (hw_input_global_wrapper.stencil(30, conv_s1_x_1, conv_s1_y_1)*(int16)964)))))))))))))))))))))))))))))))))
hw_uint<16> hcompute_conv_stencil_2(hw_uint<16>& conv_stencil, hw_uint<512>& hw_input_global_wrapper_stencil) {
  int16_t _conv_stencil_2 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_33 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_34 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_35 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_36 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_37 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_38 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_39 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_40 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_input_global_wrapper_stencil_41 = (int16_t) hw_input_global_wrapper_stencil.extract<128, 143>();
  int16_t _hw_input_global_wrapper_stencil_42 = (int16_t) hw_input_global_wrapper_stencil.extract<144, 159>();
  int16_t _hw_input_global_wrapper_stencil_43 = (int16_t) hw_input_global_wrapper_stencil.extract<160, 175>();
  int16_t _hw_input_global_wrapper_stencil_44 = (int16_t) hw_input_global_wrapper_stencil.extract<176, 191>();
  int16_t _hw_input_global_wrapper_stencil_45 = (int16_t) hw_input_global_wrapper_stencil.extract<192, 207>();
  int16_t _hw_input_global_wrapper_stencil_46 = (int16_t) hw_input_global_wrapper_stencil.extract<208, 223>();
  int16_t _hw_input_global_wrapper_stencil_47 = (int16_t) hw_input_global_wrapper_stencil.extract<224, 239>();
  int16_t _hw_input_global_wrapper_stencil_48 = (int16_t) hw_input_global_wrapper_stencil.extract<240, 255>();
  int16_t _hw_input_global_wrapper_stencil_49 = (int16_t) hw_input_global_wrapper_stencil.extract<256, 271>();
  int16_t _hw_input_global_wrapper_stencil_50 = (int16_t) hw_input_global_wrapper_stencil.extract<272, 287>();
  int16_t _hw_input_global_wrapper_stencil_51 = (int16_t) hw_input_global_wrapper_stencil.extract<288, 303>();
  int16_t _hw_input_global_wrapper_stencil_52 = (int16_t) hw_input_global_wrapper_stencil.extract<304, 319>();
  int16_t _hw_input_global_wrapper_stencil_53 = (int16_t) hw_input_global_wrapper_stencil.extract<320, 335>();
  int16_t _hw_input_global_wrapper_stencil_54 = (int16_t) hw_input_global_wrapper_stencil.extract<336, 351>();
  int16_t _hw_input_global_wrapper_stencil_55 = (int16_t) hw_input_global_wrapper_stencil.extract<352, 367>();
  int16_t _hw_input_global_wrapper_stencil_56 = (int16_t) hw_input_global_wrapper_stencil.extract<368, 383>();
  int16_t _hw_input_global_wrapper_stencil_57 = (int16_t) hw_input_global_wrapper_stencil.extract<384, 399>();
  int16_t _hw_input_global_wrapper_stencil_58 = (int16_t) hw_input_global_wrapper_stencil.extract<400, 415>();
  int16_t _hw_input_global_wrapper_stencil_59 = (int16_t) hw_input_global_wrapper_stencil.extract<416, 431>();
  int16_t _hw_input_global_wrapper_stencil_60 = (int16_t) hw_input_global_wrapper_stencil.extract<432, 447>();
  int16_t _hw_input_global_wrapper_stencil_61 = (int16_t) hw_input_global_wrapper_stencil.extract<448, 463>();
  int16_t _hw_input_global_wrapper_stencil_62 = (int16_t) hw_input_global_wrapper_stencil.extract<464, 479>();
  int16_t _hw_input_global_wrapper_stencil_63 = (int16_t) hw_input_global_wrapper_stencil.extract<480, 495>();
  int16_t _hw_input_global_wrapper_stencil_64 = (int16_t) hw_input_global_wrapper_stencil.extract<496, 511>();

  int16_t _742 = (int16_t)(4);
  int16_t _743 = _hw_input_global_wrapper_stencil_33 * _742;
  int16_t _744 = (int16_t)(36);
  int16_t _745 = _hw_input_global_wrapper_stencil_34 * _744;
  int16_t _746 = (int16_t)(68);
  int16_t _747 = _hw_input_global_wrapper_stencil_35 * _746;
  int16_t _748 = (int16_t)(100);
  int16_t _749 = _hw_input_global_wrapper_stencil_36 * _748;
  int16_t _750 = (int16_t)(132);
  int16_t _751 = _hw_input_global_wrapper_stencil_37 * _750;
  int16_t _752 = (int16_t)(164);
  int16_t _753 = _hw_input_global_wrapper_stencil_38 * _752;
  int16_t _754 = (int16_t)(196);
  int16_t _755 = _hw_input_global_wrapper_stencil_39 * _754;
  int16_t _756 = (int16_t)(228);
  int16_t _757 = _hw_input_global_wrapper_stencil_40 * _756;
  int16_t _758 = (int16_t)(260);
  int16_t _759 = _hw_input_global_wrapper_stencil_41 * _758;
  int16_t _760 = (int16_t)(292);
  int16_t _761 = _hw_input_global_wrapper_stencil_42 * _760;
  int16_t _762 = (int16_t)(324);
  int16_t _763 = _hw_input_global_wrapper_stencil_43 * _762;
  int16_t _764 = (int16_t)(356);
  int16_t _765 = _hw_input_global_wrapper_stencil_44 * _764;
  int16_t _766 = (int16_t)(388);
  int16_t _767 = _hw_input_global_wrapper_stencil_45 * _766;
  int16_t _768 = (int16_t)(420);
  int16_t _769 = _hw_input_global_wrapper_stencil_46 * _768;
  int16_t _770 = (int16_t)(452);
  int16_t _771 = _hw_input_global_wrapper_stencil_47 * _770;
  int16_t _772 = (int16_t)(484);
  int16_t _773 = _hw_input_global_wrapper_stencil_48 * _772;
  int16_t _774 = (int16_t)(516);
  int16_t _775 = _hw_input_global_wrapper_stencil_49 * _774;
  int16_t _776 = (int16_t)(548);
  int16_t _777 = _hw_input_global_wrapper_stencil_50 * _776;
  int16_t _778 = (int16_t)(580);
  int16_t _779 = _hw_input_global_wrapper_stencil_51 * _778;
  int16_t _780 = (int16_t)(612);
  int16_t _781 = _hw_input_global_wrapper_stencil_52 * _780;
  int16_t _782 = (int16_t)(644);
  int16_t _783 = _hw_input_global_wrapper_stencil_53 * _782;
  int16_t _784 = (int16_t)(676);
  int16_t _785 = _hw_input_global_wrapper_stencil_54 * _784;
  int16_t _786 = (int16_t)(708);
  int16_t _787 = _hw_input_global_wrapper_stencil_55 * _786;
  int16_t _788 = (int16_t)(740);
  int16_t _789 = _hw_input_global_wrapper_stencil_56 * _788;
  int16_t _790 = (int16_t)(772);
  int16_t _791 = _hw_input_global_wrapper_stencil_57 * _790;
  int16_t _792 = (int16_t)(804);
  int16_t _793 = _hw_input_global_wrapper_stencil_58 * _792;
  int16_t _794 = (int16_t)(836);
  int16_t _795 = _hw_input_global_wrapper_stencil_59 * _794;
  int16_t _796 = (int16_t)(868);
  int16_t _797 = _hw_input_global_wrapper_stencil_60 * _796;
  int16_t _798 = (int16_t)(900);
  int16_t _799 = _hw_input_global_wrapper_stencil_61 * _798;
  int16_t _800 = (int16_t)(932);
  int16_t _801 = _hw_input_global_wrapper_stencil_62 * _800;
  int16_t _802 = (int16_t)(996);
  int16_t _803 = _hw_input_global_wrapper_stencil_63 * _802;
  int16_t _804 = (int16_t)(964);
  int16_t _805 = _hw_input_global_wrapper_stencil_64 * _804;
  int16_t _806 = _803 + _805;
  int16_t _807 = _801 + _806;
  int16_t _808 = _799 + _807;
  int16_t _809 = _797 + _808;
  int16_t _810 = _795 + _809;
  int16_t _811 = _793 + _810;
  int16_t _812 = _791 + _811;
  int16_t _813 = _789 + _812;
  int16_t _814 = _787 + _813;
  int16_t _815 = _785 + _814;
  int16_t _816 = _783 + _815;
  int16_t _817 = _781 + _816;
  int16_t _818 = _779 + _817;
  int16_t _819 = _777 + _818;
  int16_t _820 = _775 + _819;
  int16_t _821 = _773 + _820;
  int16_t _822 = _771 + _821;
  int16_t _823 = _769 + _822;
  int16_t _824 = _767 + _823;
  int16_t _825 = _765 + _824;
  int16_t _826 = _763 + _825;
  int16_t _827 = _761 + _826;
  int16_t _828 = _759 + _827;
  int16_t _829 = _757 + _828;
  int16_t _830 = _755 + _829;
  int16_t _831 = _753 + _830;
  int16_t _832 = _751 + _831;
  int16_t _833 = _749 + _832;
  int16_t _834 = _747 + _833;
  int16_t _835 = _745 + _834;
  int16_t _836 = _conv_stencil_2 + _835;
  int16_t _837 = _743 + _836;
  return _837;
}

//store is: conv.stencil(conv_s1_x_2, conv_s1_y_2, 2) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_2, conv_s1_y_2)*(int16)5) + (conv.stencil(conv_s1_x_2, conv_s1_y_2, 2) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_2, conv_s1_y_2)*(int16)37) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_2, conv_s1_y_2)*(int16)69) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_2, conv_s1_y_2)*(int16)101) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_2, conv_s1_y_2)*(int16)133) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_2, conv_s1_y_2)*(int16)165) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_2, conv_s1_y_2)*(int16)197) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_2, conv_s1_y_2)*(int16)229) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_2, conv_s1_y_2)*(int16)261) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_2, conv_s1_y_2)*(int16)293) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_2, conv_s1_y_2)*(int16)325) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_2, conv_s1_y_2)*(int16)357) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_2, conv_s1_y_2)*(int16)389) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_2, conv_s1_y_2)*(int16)421) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_2, conv_s1_y_2)*(int16)453) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_2, conv_s1_y_2)*(int16)485) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_2, conv_s1_y_2)*(int16)517) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_2, conv_s1_y_2)*(int16)549) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_2, conv_s1_y_2)*(int16)581) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_2, conv_s1_y_2)*(int16)613) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_2, conv_s1_y_2)*(int16)645) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_2, conv_s1_y_2)*(int16)677) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_2, conv_s1_y_2)*(int16)709) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_2, conv_s1_y_2)*(int16)741) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_2, conv_s1_y_2)*(int16)773) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_2, conv_s1_y_2)*(int16)805) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_2, conv_s1_y_2)*(int16)837) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_2, conv_s1_y_2)*(int16)869) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_2, conv_s1_y_2)*(int16)901) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_2, conv_s1_y_2)*(int16)933) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_2, conv_s1_y_2)*(int16)997) + (hw_input_global_wrapper.stencil(30, conv_s1_x_2, conv_s1_y_2)*(int16)965)))))))))))))))))))))))))))))))))
hw_uint<16> hcompute_conv_stencil_3(hw_uint<16>& conv_stencil, hw_uint<512>& hw_input_global_wrapper_stencil) {
  int16_t _conv_stencil_3 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_65 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_66 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_67 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_68 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_69 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_70 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_71 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_72 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_input_global_wrapper_stencil_73 = (int16_t) hw_input_global_wrapper_stencil.extract<128, 143>();
  int16_t _hw_input_global_wrapper_stencil_74 = (int16_t) hw_input_global_wrapper_stencil.extract<144, 159>();
  int16_t _hw_input_global_wrapper_stencil_75 = (int16_t) hw_input_global_wrapper_stencil.extract<160, 175>();
  int16_t _hw_input_global_wrapper_stencil_76 = (int16_t) hw_input_global_wrapper_stencil.extract<176, 191>();
  int16_t _hw_input_global_wrapper_stencil_77 = (int16_t) hw_input_global_wrapper_stencil.extract<192, 207>();
  int16_t _hw_input_global_wrapper_stencil_78 = (int16_t) hw_input_global_wrapper_stencil.extract<208, 223>();
  int16_t _hw_input_global_wrapper_stencil_79 = (int16_t) hw_input_global_wrapper_stencil.extract<224, 239>();
  int16_t _hw_input_global_wrapper_stencil_80 = (int16_t) hw_input_global_wrapper_stencil.extract<240, 255>();
  int16_t _hw_input_global_wrapper_stencil_81 = (int16_t) hw_input_global_wrapper_stencil.extract<256, 271>();
  int16_t _hw_input_global_wrapper_stencil_82 = (int16_t) hw_input_global_wrapper_stencil.extract<272, 287>();
  int16_t _hw_input_global_wrapper_stencil_83 = (int16_t) hw_input_global_wrapper_stencil.extract<288, 303>();
  int16_t _hw_input_global_wrapper_stencil_84 = (int16_t) hw_input_global_wrapper_stencil.extract<304, 319>();
  int16_t _hw_input_global_wrapper_stencil_85 = (int16_t) hw_input_global_wrapper_stencil.extract<320, 335>();
  int16_t _hw_input_global_wrapper_stencil_86 = (int16_t) hw_input_global_wrapper_stencil.extract<336, 351>();
  int16_t _hw_input_global_wrapper_stencil_87 = (int16_t) hw_input_global_wrapper_stencil.extract<352, 367>();
  int16_t _hw_input_global_wrapper_stencil_88 = (int16_t) hw_input_global_wrapper_stencil.extract<368, 383>();
  int16_t _hw_input_global_wrapper_stencil_89 = (int16_t) hw_input_global_wrapper_stencil.extract<384, 399>();
  int16_t _hw_input_global_wrapper_stencil_90 = (int16_t) hw_input_global_wrapper_stencil.extract<400, 415>();
  int16_t _hw_input_global_wrapper_stencil_91 = (int16_t) hw_input_global_wrapper_stencil.extract<416, 431>();
  int16_t _hw_input_global_wrapper_stencil_92 = (int16_t) hw_input_global_wrapper_stencil.extract<432, 447>();
  int16_t _hw_input_global_wrapper_stencil_93 = (int16_t) hw_input_global_wrapper_stencil.extract<448, 463>();
  int16_t _hw_input_global_wrapper_stencil_94 = (int16_t) hw_input_global_wrapper_stencil.extract<464, 479>();
  int16_t _hw_input_global_wrapper_stencil_95 = (int16_t) hw_input_global_wrapper_stencil.extract<480, 495>();
  int16_t _hw_input_global_wrapper_stencil_96 = (int16_t) hw_input_global_wrapper_stencil.extract<496, 511>();

  int16_t _1063 = (int16_t)(5);
  int16_t _1064 = _hw_input_global_wrapper_stencil_65 * _1063;
  int16_t _1065 = (int16_t)(37);
  int16_t _1066 = _hw_input_global_wrapper_stencil_66 * _1065;
  int16_t _1067 = (int16_t)(69);
  int16_t _1068 = _hw_input_global_wrapper_stencil_67 * _1067;
  int16_t _1069 = (int16_t)(101);
  int16_t _1070 = _hw_input_global_wrapper_stencil_68 * _1069;
  int16_t _1071 = (int16_t)(133);
  int16_t _1072 = _hw_input_global_wrapper_stencil_69 * _1071;
  int16_t _1073 = (int16_t)(165);
  int16_t _1074 = _hw_input_global_wrapper_stencil_70 * _1073;
  int16_t _1075 = (int16_t)(197);
  int16_t _1076 = _hw_input_global_wrapper_stencil_71 * _1075;
  int16_t _1077 = (int16_t)(229);
  int16_t _1078 = _hw_input_global_wrapper_stencil_72 * _1077;
  int16_t _1079 = (int16_t)(261);
  int16_t _1080 = _hw_input_global_wrapper_stencil_73 * _1079;
  int16_t _1081 = (int16_t)(293);
  int16_t _1082 = _hw_input_global_wrapper_stencil_74 * _1081;
  int16_t _1083 = (int16_t)(325);
  int16_t _1084 = _hw_input_global_wrapper_stencil_75 * _1083;
  int16_t _1085 = (int16_t)(357);
  int16_t _1086 = _hw_input_global_wrapper_stencil_76 * _1085;
  int16_t _1087 = (int16_t)(389);
  int16_t _1088 = _hw_input_global_wrapper_stencil_77 * _1087;
  int16_t _1089 = (int16_t)(421);
  int16_t _1090 = _hw_input_global_wrapper_stencil_78 * _1089;
  int16_t _1091 = (int16_t)(453);
  int16_t _1092 = _hw_input_global_wrapper_stencil_79 * _1091;
  int16_t _1093 = (int16_t)(485);
  int16_t _1094 = _hw_input_global_wrapper_stencil_80 * _1093;
  int16_t _1095 = (int16_t)(517);
  int16_t _1096 = _hw_input_global_wrapper_stencil_81 * _1095;
  int16_t _1097 = (int16_t)(549);
  int16_t _1098 = _hw_input_global_wrapper_stencil_82 * _1097;
  int16_t _1099 = (int16_t)(581);
  int16_t _1100 = _hw_input_global_wrapper_stencil_83 * _1099;
  int16_t _1101 = (int16_t)(613);
  int16_t _1102 = _hw_input_global_wrapper_stencil_84 * _1101;
  int16_t _1103 = (int16_t)(645);
  int16_t _1104 = _hw_input_global_wrapper_stencil_85 * _1103;
  int16_t _1105 = (int16_t)(677);
  int16_t _1106 = _hw_input_global_wrapper_stencil_86 * _1105;
  int16_t _1107 = (int16_t)(709);
  int16_t _1108 = _hw_input_global_wrapper_stencil_87 * _1107;
  int16_t _1109 = (int16_t)(741);
  int16_t _1110 = _hw_input_global_wrapper_stencil_88 * _1109;
  int16_t _1111 = (int16_t)(773);
  int16_t _1112 = _hw_input_global_wrapper_stencil_89 * _1111;
  int16_t _1113 = (int16_t)(805);
  int16_t _1114 = _hw_input_global_wrapper_stencil_90 * _1113;
  int16_t _1115 = (int16_t)(837);
  int16_t _1116 = _hw_input_global_wrapper_stencil_91 * _1115;
  int16_t _1117 = (int16_t)(869);
  int16_t _1118 = _hw_input_global_wrapper_stencil_92 * _1117;
  int16_t _1119 = (int16_t)(901);
  int16_t _1120 = _hw_input_global_wrapper_stencil_93 * _1119;
  int16_t _1121 = (int16_t)(933);
  int16_t _1122 = _hw_input_global_wrapper_stencil_94 * _1121;
  int16_t _1123 = (int16_t)(997);
  int16_t _1124 = _hw_input_global_wrapper_stencil_95 * _1123;
  int16_t _1125 = (int16_t)(965);
  int16_t _1126 = _hw_input_global_wrapper_stencil_96 * _1125;
  int16_t _1127 = _1124 + _1126;
  int16_t _1128 = _1122 + _1127;
  int16_t _1129 = _1120 + _1128;
  int16_t _1130 = _1118 + _1129;
  int16_t _1131 = _1116 + _1130;
  int16_t _1132 = _1114 + _1131;
  int16_t _1133 = _1112 + _1132;
  int16_t _1134 = _1110 + _1133;
  int16_t _1135 = _1108 + _1134;
  int16_t _1136 = _1106 + _1135;
  int16_t _1137 = _1104 + _1136;
  int16_t _1138 = _1102 + _1137;
  int16_t _1139 = _1100 + _1138;
  int16_t _1140 = _1098 + _1139;
  int16_t _1141 = _1096 + _1140;
  int16_t _1142 = _1094 + _1141;
  int16_t _1143 = _1092 + _1142;
  int16_t _1144 = _1090 + _1143;
  int16_t _1145 = _1088 + _1144;
  int16_t _1146 = _1086 + _1145;
  int16_t _1147 = _1084 + _1146;
  int16_t _1148 = _1082 + _1147;
  int16_t _1149 = _1080 + _1148;
  int16_t _1150 = _1078 + _1149;
  int16_t _1151 = _1076 + _1150;
  int16_t _1152 = _1074 + _1151;
  int16_t _1153 = _1072 + _1152;
  int16_t _1154 = _1070 + _1153;
  int16_t _1155 = _1068 + _1154;
  int16_t _1156 = _1066 + _1155;
  int16_t _1157 = _conv_stencil_3 + _1156;
  int16_t _1158 = _1064 + _1157;
  return _1158;
}

//store is: conv.stencil(conv_s1_x_3, conv_s1_y_3, 3) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_3, conv_s1_y_3)*(int16)6) + (conv.stencil(conv_s1_x_3, conv_s1_y_3, 3) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_3, conv_s1_y_3)*(int16)38) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_3, conv_s1_y_3)*(int16)70) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_3, conv_s1_y_3)*(int16)102) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_3, conv_s1_y_3)*(int16)134) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_3, conv_s1_y_3)*(int16)166) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_3, conv_s1_y_3)*(int16)198) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_3, conv_s1_y_3)*(int16)230) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_3, conv_s1_y_3)*(int16)262) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_3, conv_s1_y_3)*(int16)294) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_3, conv_s1_y_3)*(int16)326) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_3, conv_s1_y_3)*(int16)358) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_3, conv_s1_y_3)*(int16)390) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_3, conv_s1_y_3)*(int16)422) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_3, conv_s1_y_3)*(int16)454) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_3, conv_s1_y_3)*(int16)486) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_3, conv_s1_y_3)*(int16)518) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_3, conv_s1_y_3)*(int16)550) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_3, conv_s1_y_3)*(int16)582) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_3, conv_s1_y_3)*(int16)614) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_3, conv_s1_y_3)*(int16)646) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_3, conv_s1_y_3)*(int16)678) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_3, conv_s1_y_3)*(int16)710) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_3, conv_s1_y_3)*(int16)742) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_3, conv_s1_y_3)*(int16)774) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_3, conv_s1_y_3)*(int16)806) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_3, conv_s1_y_3)*(int16)838) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_3, conv_s1_y_3)*(int16)870) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_3, conv_s1_y_3)*(int16)902) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_3, conv_s1_y_3)*(int16)934) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_3, conv_s1_y_3)*(int16)998) + (hw_input_global_wrapper.stencil(30, conv_s1_x_3, conv_s1_y_3)*(int16)966)))))))))))))))))))))))))))))))))
hw_uint<16> hcompute_conv_stencil_4(hw_uint<16>& conv_stencil, hw_uint<512>& hw_input_global_wrapper_stencil) {
  int16_t _conv_stencil_4 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_100 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_101 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_102 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_103 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_104 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_105 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_106 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_107 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_input_global_wrapper_stencil_108 = (int16_t) hw_input_global_wrapper_stencil.extract<128, 143>();
  int16_t _hw_input_global_wrapper_stencil_109 = (int16_t) hw_input_global_wrapper_stencil.extract<144, 159>();
  int16_t _hw_input_global_wrapper_stencil_110 = (int16_t) hw_input_global_wrapper_stencil.extract<160, 175>();
  int16_t _hw_input_global_wrapper_stencil_111 = (int16_t) hw_input_global_wrapper_stencil.extract<176, 191>();
  int16_t _hw_input_global_wrapper_stencil_112 = (int16_t) hw_input_global_wrapper_stencil.extract<192, 207>();
  int16_t _hw_input_global_wrapper_stencil_113 = (int16_t) hw_input_global_wrapper_stencil.extract<208, 223>();
  int16_t _hw_input_global_wrapper_stencil_114 = (int16_t) hw_input_global_wrapper_stencil.extract<224, 239>();
  int16_t _hw_input_global_wrapper_stencil_115 = (int16_t) hw_input_global_wrapper_stencil.extract<240, 255>();
  int16_t _hw_input_global_wrapper_stencil_116 = (int16_t) hw_input_global_wrapper_stencil.extract<256, 271>();
  int16_t _hw_input_global_wrapper_stencil_117 = (int16_t) hw_input_global_wrapper_stencil.extract<272, 287>();
  int16_t _hw_input_global_wrapper_stencil_118 = (int16_t) hw_input_global_wrapper_stencil.extract<288, 303>();
  int16_t _hw_input_global_wrapper_stencil_119 = (int16_t) hw_input_global_wrapper_stencil.extract<304, 319>();
  int16_t _hw_input_global_wrapper_stencil_120 = (int16_t) hw_input_global_wrapper_stencil.extract<320, 335>();
  int16_t _hw_input_global_wrapper_stencil_121 = (int16_t) hw_input_global_wrapper_stencil.extract<336, 351>();
  int16_t _hw_input_global_wrapper_stencil_122 = (int16_t) hw_input_global_wrapper_stencil.extract<352, 367>();
  int16_t _hw_input_global_wrapper_stencil_123 = (int16_t) hw_input_global_wrapper_stencil.extract<368, 383>();
  int16_t _hw_input_global_wrapper_stencil_124 = (int16_t) hw_input_global_wrapper_stencil.extract<384, 399>();
  int16_t _hw_input_global_wrapper_stencil_125 = (int16_t) hw_input_global_wrapper_stencil.extract<400, 415>();
  int16_t _hw_input_global_wrapper_stencil_126 = (int16_t) hw_input_global_wrapper_stencil.extract<416, 431>();
  int16_t _hw_input_global_wrapper_stencil_127 = (int16_t) hw_input_global_wrapper_stencil.extract<432, 447>();
  int16_t _hw_input_global_wrapper_stencil_128 = (int16_t) hw_input_global_wrapper_stencil.extract<448, 463>();
  int16_t _hw_input_global_wrapper_stencil_97 = (int16_t) hw_input_global_wrapper_stencil.extract<464, 479>();
  int16_t _hw_input_global_wrapper_stencil_98 = (int16_t) hw_input_global_wrapper_stencil.extract<480, 495>();
  int16_t _hw_input_global_wrapper_stencil_99 = (int16_t) hw_input_global_wrapper_stencil.extract<496, 511>();

  int16_t _1384 = (int16_t)(6);
  int16_t _1385 = _hw_input_global_wrapper_stencil_97 * _1384;
  int16_t _1386 = (int16_t)(38);
  int16_t _1387 = _hw_input_global_wrapper_stencil_98 * _1386;
  int16_t _1388 = (int16_t)(70);
  int16_t _1389 = _hw_input_global_wrapper_stencil_99 * _1388;
  int16_t _1390 = (int16_t)(102);
  int16_t _1391 = _hw_input_global_wrapper_stencil_100 * _1390;
  int16_t _1392 = (int16_t)(134);
  int16_t _1393 = _hw_input_global_wrapper_stencil_101 * _1392;
  int16_t _1394 = (int16_t)(166);
  int16_t _1395 = _hw_input_global_wrapper_stencil_102 * _1394;
  int16_t _1396 = (int16_t)(198);
  int16_t _1397 = _hw_input_global_wrapper_stencil_103 * _1396;
  int16_t _1398 = (int16_t)(230);
  int16_t _1399 = _hw_input_global_wrapper_stencil_104 * _1398;
  int16_t _1400 = (int16_t)(262);
  int16_t _1401 = _hw_input_global_wrapper_stencil_105 * _1400;
  int16_t _1402 = (int16_t)(294);
  int16_t _1403 = _hw_input_global_wrapper_stencil_106 * _1402;
  int16_t _1404 = (int16_t)(326);
  int16_t _1405 = _hw_input_global_wrapper_stencil_107 * _1404;
  int16_t _1406 = (int16_t)(358);
  int16_t _1407 = _hw_input_global_wrapper_stencil_108 * _1406;
  int16_t _1408 = (int16_t)(390);
  int16_t _1409 = _hw_input_global_wrapper_stencil_109 * _1408;
  int16_t _1410 = (int16_t)(422);
  int16_t _1411 = _hw_input_global_wrapper_stencil_110 * _1410;
  int16_t _1412 = (int16_t)(454);
  int16_t _1413 = _hw_input_global_wrapper_stencil_111 * _1412;
  int16_t _1414 = (int16_t)(486);
  int16_t _1415 = _hw_input_global_wrapper_stencil_112 * _1414;
  int16_t _1416 = (int16_t)(518);
  int16_t _1417 = _hw_input_global_wrapper_stencil_113 * _1416;
  int16_t _1418 = (int16_t)(550);
  int16_t _1419 = _hw_input_global_wrapper_stencil_114 * _1418;
  int16_t _1420 = (int16_t)(582);
  int16_t _1421 = _hw_input_global_wrapper_stencil_115 * _1420;
  int16_t _1422 = (int16_t)(614);
  int16_t _1423 = _hw_input_global_wrapper_stencil_116 * _1422;
  int16_t _1424 = (int16_t)(646);
  int16_t _1425 = _hw_input_global_wrapper_stencil_117 * _1424;
  int16_t _1426 = (int16_t)(678);
  int16_t _1427 = _hw_input_global_wrapper_stencil_118 * _1426;
  int16_t _1428 = (int16_t)(710);
  int16_t _1429 = _hw_input_global_wrapper_stencil_119 * _1428;
  int16_t _1430 = (int16_t)(742);
  int16_t _1431 = _hw_input_global_wrapper_stencil_120 * _1430;
  int16_t _1432 = (int16_t)(774);
  int16_t _1433 = _hw_input_global_wrapper_stencil_121 * _1432;
  int16_t _1434 = (int16_t)(806);
  int16_t _1435 = _hw_input_global_wrapper_stencil_122 * _1434;
  int16_t _1436 = (int16_t)(838);
  int16_t _1437 = _hw_input_global_wrapper_stencil_123 * _1436;
  int16_t _1438 = (int16_t)(870);
  int16_t _1439 = _hw_input_global_wrapper_stencil_124 * _1438;
  int16_t _1440 = (int16_t)(902);
  int16_t _1441 = _hw_input_global_wrapper_stencil_125 * _1440;
  int16_t _1442 = (int16_t)(934);
  int16_t _1443 = _hw_input_global_wrapper_stencil_126 * _1442;
  int16_t _1444 = (int16_t)(998);
  int16_t _1445 = _hw_input_global_wrapper_stencil_127 * _1444;
  int16_t _1446 = (int16_t)(966);
  int16_t _1447 = _hw_input_global_wrapper_stencil_128 * _1446;
  int16_t _1448 = _1445 + _1447;
  int16_t _1449 = _1443 + _1448;
  int16_t _1450 = _1441 + _1449;
  int16_t _1451 = _1439 + _1450;
  int16_t _1452 = _1437 + _1451;
  int16_t _1453 = _1435 + _1452;
  int16_t _1454 = _1433 + _1453;
  int16_t _1455 = _1431 + _1454;
  int16_t _1456 = _1429 + _1455;
  int16_t _1457 = _1427 + _1456;
  int16_t _1458 = _1425 + _1457;
  int16_t _1459 = _1423 + _1458;
  int16_t _1460 = _1421 + _1459;
  int16_t _1461 = _1419 + _1460;
  int16_t _1462 = _1417 + _1461;
  int16_t _1463 = _1415 + _1462;
  int16_t _1464 = _1413 + _1463;
  int16_t _1465 = _1411 + _1464;
  int16_t _1466 = _1409 + _1465;
  int16_t _1467 = _1407 + _1466;
  int16_t _1468 = _1405 + _1467;
  int16_t _1469 = _1403 + _1468;
  int16_t _1470 = _1401 + _1469;
  int16_t _1471 = _1399 + _1470;
  int16_t _1472 = _1397 + _1471;
  int16_t _1473 = _1395 + _1472;
  int16_t _1474 = _1393 + _1473;
  int16_t _1475 = _1391 + _1474;
  int16_t _1476 = _1389 + _1475;
  int16_t _1477 = _1387 + _1476;
  int16_t _1478 = _conv_stencil_4 + _1477;
  int16_t _1479 = _1385 + _1478;
  return _1479;
}

//store is: conv.stencil(conv_s1_x_4, conv_s1_y_4, 4) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_4, conv_s1_y_4)*(int16)7) + (conv.stencil(conv_s1_x_4, conv_s1_y_4, 4) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_4, conv_s1_y_4)*(int16)39) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_4, conv_s1_y_4)*(int16)71) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_4, conv_s1_y_4)*(int16)103) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_4, conv_s1_y_4)*(int16)135) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_4, conv_s1_y_4)*(int16)167) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_4, conv_s1_y_4)*(int16)199) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_4, conv_s1_y_4)*(int16)231) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_4, conv_s1_y_4)*(int16)263) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_4, conv_s1_y_4)*(int16)295) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_4, conv_s1_y_4)*(int16)327) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_4, conv_s1_y_4)*(int16)359) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_4, conv_s1_y_4)*(int16)391) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_4, conv_s1_y_4)*(int16)423) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_4, conv_s1_y_4)*(int16)455) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_4, conv_s1_y_4)*(int16)487) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_4, conv_s1_y_4)*(int16)519) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_4, conv_s1_y_4)*(int16)551) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_4, conv_s1_y_4)*(int16)583) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_4, conv_s1_y_4)*(int16)615) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_4, conv_s1_y_4)*(int16)647) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_4, conv_s1_y_4)*(int16)679) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_4, conv_s1_y_4)*(int16)711) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_4, conv_s1_y_4)*(int16)743) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_4, conv_s1_y_4)*(int16)775) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_4, conv_s1_y_4)*(int16)807) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_4, conv_s1_y_4)*(int16)839) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_4, conv_s1_y_4)*(int16)871) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_4, conv_s1_y_4)*(int16)903) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_4, conv_s1_y_4)*(int16)935) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_4, conv_s1_y_4)*(int16)999) + (hw_input_global_wrapper.stencil(30, conv_s1_x_4, conv_s1_y_4)*(int16)967)))))))))))))))))))))))))))))))))
hw_uint<16> hcompute_conv_stencil_5(hw_uint<16>& conv_stencil, hw_uint<512>& hw_input_global_wrapper_stencil) {
  int16_t _conv_stencil_5 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_129 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_130 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_131 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_132 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_133 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_134 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_135 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_136 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_input_global_wrapper_stencil_137 = (int16_t) hw_input_global_wrapper_stencil.extract<128, 143>();
  int16_t _hw_input_global_wrapper_stencil_138 = (int16_t) hw_input_global_wrapper_stencil.extract<144, 159>();
  int16_t _hw_input_global_wrapper_stencil_139 = (int16_t) hw_input_global_wrapper_stencil.extract<160, 175>();
  int16_t _hw_input_global_wrapper_stencil_140 = (int16_t) hw_input_global_wrapper_stencil.extract<176, 191>();
  int16_t _hw_input_global_wrapper_stencil_141 = (int16_t) hw_input_global_wrapper_stencil.extract<192, 207>();
  int16_t _hw_input_global_wrapper_stencil_142 = (int16_t) hw_input_global_wrapper_stencil.extract<208, 223>();
  int16_t _hw_input_global_wrapper_stencil_143 = (int16_t) hw_input_global_wrapper_stencil.extract<224, 239>();
  int16_t _hw_input_global_wrapper_stencil_144 = (int16_t) hw_input_global_wrapper_stencil.extract<240, 255>();
  int16_t _hw_input_global_wrapper_stencil_145 = (int16_t) hw_input_global_wrapper_stencil.extract<256, 271>();
  int16_t _hw_input_global_wrapper_stencil_146 = (int16_t) hw_input_global_wrapper_stencil.extract<272, 287>();
  int16_t _hw_input_global_wrapper_stencil_147 = (int16_t) hw_input_global_wrapper_stencil.extract<288, 303>();
  int16_t _hw_input_global_wrapper_stencil_148 = (int16_t) hw_input_global_wrapper_stencil.extract<304, 319>();
  int16_t _hw_input_global_wrapper_stencil_149 = (int16_t) hw_input_global_wrapper_stencil.extract<320, 335>();
  int16_t _hw_input_global_wrapper_stencil_150 = (int16_t) hw_input_global_wrapper_stencil.extract<336, 351>();
  int16_t _hw_input_global_wrapper_stencil_151 = (int16_t) hw_input_global_wrapper_stencil.extract<352, 367>();
  int16_t _hw_input_global_wrapper_stencil_152 = (int16_t) hw_input_global_wrapper_stencil.extract<368, 383>();
  int16_t _hw_input_global_wrapper_stencil_153 = (int16_t) hw_input_global_wrapper_stencil.extract<384, 399>();
  int16_t _hw_input_global_wrapper_stencil_154 = (int16_t) hw_input_global_wrapper_stencil.extract<400, 415>();
  int16_t _hw_input_global_wrapper_stencil_155 = (int16_t) hw_input_global_wrapper_stencil.extract<416, 431>();
  int16_t _hw_input_global_wrapper_stencil_156 = (int16_t) hw_input_global_wrapper_stencil.extract<432, 447>();
  int16_t _hw_input_global_wrapper_stencil_157 = (int16_t) hw_input_global_wrapper_stencil.extract<448, 463>();
  int16_t _hw_input_global_wrapper_stencil_158 = (int16_t) hw_input_global_wrapper_stencil.extract<464, 479>();
  int16_t _hw_input_global_wrapper_stencil_159 = (int16_t) hw_input_global_wrapper_stencil.extract<480, 495>();
  int16_t _hw_input_global_wrapper_stencil_160 = (int16_t) hw_input_global_wrapper_stencil.extract<496, 511>();

  int16_t _1705 = (int16_t)(7);
  int16_t _1706 = _hw_input_global_wrapper_stencil_129 * _1705;
  int16_t _1707 = (int16_t)(39);
  int16_t _1708 = _hw_input_global_wrapper_stencil_130 * _1707;
  int16_t _1709 = (int16_t)(71);
  int16_t _1710 = _hw_input_global_wrapper_stencil_131 * _1709;
  int16_t _1711 = (int16_t)(103);
  int16_t _1712 = _hw_input_global_wrapper_stencil_132 * _1711;
  int16_t _1713 = (int16_t)(135);
  int16_t _1714 = _hw_input_global_wrapper_stencil_133 * _1713;
  int16_t _1715 = (int16_t)(167);
  int16_t _1716 = _hw_input_global_wrapper_stencil_134 * _1715;
  int16_t _1717 = (int16_t)(199);
  int16_t _1718 = _hw_input_global_wrapper_stencil_135 * _1717;
  int16_t _1719 = (int16_t)(231);
  int16_t _1720 = _hw_input_global_wrapper_stencil_136 * _1719;
  int16_t _1721 = (int16_t)(263);
  int16_t _1722 = _hw_input_global_wrapper_stencil_137 * _1721;
  int16_t _1723 = (int16_t)(295);
  int16_t _1724 = _hw_input_global_wrapper_stencil_138 * _1723;
  int16_t _1725 = (int16_t)(327);
  int16_t _1726 = _hw_input_global_wrapper_stencil_139 * _1725;
  int16_t _1727 = (int16_t)(359);
  int16_t _1728 = _hw_input_global_wrapper_stencil_140 * _1727;
  int16_t _1729 = (int16_t)(391);
  int16_t _1730 = _hw_input_global_wrapper_stencil_141 * _1729;
  int16_t _1731 = (int16_t)(423);
  int16_t _1732 = _hw_input_global_wrapper_stencil_142 * _1731;
  int16_t _1733 = (int16_t)(455);
  int16_t _1734 = _hw_input_global_wrapper_stencil_143 * _1733;
  int16_t _1735 = (int16_t)(487);
  int16_t _1736 = _hw_input_global_wrapper_stencil_144 * _1735;
  int16_t _1737 = (int16_t)(519);
  int16_t _1738 = _hw_input_global_wrapper_stencil_145 * _1737;
  int16_t _1739 = (int16_t)(551);
  int16_t _1740 = _hw_input_global_wrapper_stencil_146 * _1739;
  int16_t _1741 = (int16_t)(583);
  int16_t _1742 = _hw_input_global_wrapper_stencil_147 * _1741;
  int16_t _1743 = (int16_t)(615);
  int16_t _1744 = _hw_input_global_wrapper_stencil_148 * _1743;
  int16_t _1745 = (int16_t)(647);
  int16_t _1746 = _hw_input_global_wrapper_stencil_149 * _1745;
  int16_t _1747 = (int16_t)(679);
  int16_t _1748 = _hw_input_global_wrapper_stencil_150 * _1747;
  int16_t _1749 = (int16_t)(711);
  int16_t _1750 = _hw_input_global_wrapper_stencil_151 * _1749;
  int16_t _1751 = (int16_t)(743);
  int16_t _1752 = _hw_input_global_wrapper_stencil_152 * _1751;
  int16_t _1753 = (int16_t)(775);
  int16_t _1754 = _hw_input_global_wrapper_stencil_153 * _1753;
  int16_t _1755 = (int16_t)(807);
  int16_t _1756 = _hw_input_global_wrapper_stencil_154 * _1755;
  int16_t _1757 = (int16_t)(839);
  int16_t _1758 = _hw_input_global_wrapper_stencil_155 * _1757;
  int16_t _1759 = (int16_t)(871);
  int16_t _1760 = _hw_input_global_wrapper_stencil_156 * _1759;
  int16_t _1761 = (int16_t)(903);
  int16_t _1762 = _hw_input_global_wrapper_stencil_157 * _1761;
  int16_t _1763 = (int16_t)(935);
  int16_t _1764 = _hw_input_global_wrapper_stencil_158 * _1763;
  int16_t _1765 = (int16_t)(999);
  int16_t _1766 = _hw_input_global_wrapper_stencil_159 * _1765;
  int16_t _1767 = (int16_t)(967);
  int16_t _1768 = _hw_input_global_wrapper_stencil_160 * _1767;
  int16_t _1769 = _1766 + _1768;
  int16_t _1770 = _1764 + _1769;
  int16_t _1771 = _1762 + _1770;
  int16_t _1772 = _1760 + _1771;
  int16_t _1773 = _1758 + _1772;
  int16_t _1774 = _1756 + _1773;
  int16_t _1775 = _1754 + _1774;
  int16_t _1776 = _1752 + _1775;
  int16_t _1777 = _1750 + _1776;
  int16_t _1778 = _1748 + _1777;
  int16_t _1779 = _1746 + _1778;
  int16_t _1780 = _1744 + _1779;
  int16_t _1781 = _1742 + _1780;
  int16_t _1782 = _1740 + _1781;
  int16_t _1783 = _1738 + _1782;
  int16_t _1784 = _1736 + _1783;
  int16_t _1785 = _1734 + _1784;
  int16_t _1786 = _1732 + _1785;
  int16_t _1787 = _1730 + _1786;
  int16_t _1788 = _1728 + _1787;
  int16_t _1789 = _1726 + _1788;
  int16_t _1790 = _1724 + _1789;
  int16_t _1791 = _1722 + _1790;
  int16_t _1792 = _1720 + _1791;
  int16_t _1793 = _1718 + _1792;
  int16_t _1794 = _1716 + _1793;
  int16_t _1795 = _1714 + _1794;
  int16_t _1796 = _1712 + _1795;
  int16_t _1797 = _1710 + _1796;
  int16_t _1798 = _1708 + _1797;
  int16_t _1799 = _conv_stencil_5 + _1798;
  int16_t _1800 = _1706 + _1799;
  return _1800;
}

//store is: conv.stencil(conv_s1_x_5, conv_s1_y_5, 5) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_5, conv_s1_y_5)*(int16)8) + (conv.stencil(conv_s1_x_5, conv_s1_y_5, 5) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_5, conv_s1_y_5)*(int16)40) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_5, conv_s1_y_5)*(int16)72) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_5, conv_s1_y_5)*(int16)104) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_5, conv_s1_y_5)*(int16)136) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_5, conv_s1_y_5)*(int16)168) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_5, conv_s1_y_5)*(int16)200) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_5, conv_s1_y_5)*(int16)232) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_5, conv_s1_y_5)*(int16)264) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_5, conv_s1_y_5)*(int16)296) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_5, conv_s1_y_5)*(int16)328) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_5, conv_s1_y_5)*(int16)360) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_5, conv_s1_y_5)*(int16)392) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_5, conv_s1_y_5)*(int16)424) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_5, conv_s1_y_5)*(int16)456) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_5, conv_s1_y_5)*(int16)488) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_5, conv_s1_y_5)*(int16)520) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_5, conv_s1_y_5)*(int16)552) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_5, conv_s1_y_5)*(int16)584) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_5, conv_s1_y_5)*(int16)616) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_5, conv_s1_y_5)*(int16)648) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_5, conv_s1_y_5)*(int16)680) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_5, conv_s1_y_5)*(int16)712) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_5, conv_s1_y_5)*(int16)744) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_5, conv_s1_y_5)*(int16)776) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_5, conv_s1_y_5)*(int16)808) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_5, conv_s1_y_5)*(int16)840) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_5, conv_s1_y_5)*(int16)872) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_5, conv_s1_y_5)*(int16)904) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_5, conv_s1_y_5)*(int16)936) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_5, conv_s1_y_5)*(int16)1000) + (hw_input_global_wrapper.stencil(30, conv_s1_x_5, conv_s1_y_5)*(int16)968)))))))))))))))))))))))))))))))))
hw_uint<16> hcompute_conv_stencil_6(hw_uint<16>& conv_stencil, hw_uint<512>& hw_input_global_wrapper_stencil) {
  int16_t _conv_stencil_6 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_161 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_162 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_163 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_164 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_165 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_166 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_167 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_168 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_input_global_wrapper_stencil_169 = (int16_t) hw_input_global_wrapper_stencil.extract<128, 143>();
  int16_t _hw_input_global_wrapper_stencil_170 = (int16_t) hw_input_global_wrapper_stencil.extract<144, 159>();
  int16_t _hw_input_global_wrapper_stencil_171 = (int16_t) hw_input_global_wrapper_stencil.extract<160, 175>();
  int16_t _hw_input_global_wrapper_stencil_172 = (int16_t) hw_input_global_wrapper_stencil.extract<176, 191>();
  int16_t _hw_input_global_wrapper_stencil_173 = (int16_t) hw_input_global_wrapper_stencil.extract<192, 207>();
  int16_t _hw_input_global_wrapper_stencil_174 = (int16_t) hw_input_global_wrapper_stencil.extract<208, 223>();
  int16_t _hw_input_global_wrapper_stencil_175 = (int16_t) hw_input_global_wrapper_stencil.extract<224, 239>();
  int16_t _hw_input_global_wrapper_stencil_176 = (int16_t) hw_input_global_wrapper_stencil.extract<240, 255>();
  int16_t _hw_input_global_wrapper_stencil_177 = (int16_t) hw_input_global_wrapper_stencil.extract<256, 271>();
  int16_t _hw_input_global_wrapper_stencil_178 = (int16_t) hw_input_global_wrapper_stencil.extract<272, 287>();
  int16_t _hw_input_global_wrapper_stencil_179 = (int16_t) hw_input_global_wrapper_stencil.extract<288, 303>();
  int16_t _hw_input_global_wrapper_stencil_180 = (int16_t) hw_input_global_wrapper_stencil.extract<304, 319>();
  int16_t _hw_input_global_wrapper_stencil_181 = (int16_t) hw_input_global_wrapper_stencil.extract<320, 335>();
  int16_t _hw_input_global_wrapper_stencil_182 = (int16_t) hw_input_global_wrapper_stencil.extract<336, 351>();
  int16_t _hw_input_global_wrapper_stencil_183 = (int16_t) hw_input_global_wrapper_stencil.extract<352, 367>();
  int16_t _hw_input_global_wrapper_stencil_184 = (int16_t) hw_input_global_wrapper_stencil.extract<368, 383>();
  int16_t _hw_input_global_wrapper_stencil_185 = (int16_t) hw_input_global_wrapper_stencil.extract<384, 399>();
  int16_t _hw_input_global_wrapper_stencil_186 = (int16_t) hw_input_global_wrapper_stencil.extract<400, 415>();
  int16_t _hw_input_global_wrapper_stencil_187 = (int16_t) hw_input_global_wrapper_stencil.extract<416, 431>();
  int16_t _hw_input_global_wrapper_stencil_188 = (int16_t) hw_input_global_wrapper_stencil.extract<432, 447>();
  int16_t _hw_input_global_wrapper_stencil_189 = (int16_t) hw_input_global_wrapper_stencil.extract<448, 463>();
  int16_t _hw_input_global_wrapper_stencil_190 = (int16_t) hw_input_global_wrapper_stencil.extract<464, 479>();
  int16_t _hw_input_global_wrapper_stencil_191 = (int16_t) hw_input_global_wrapper_stencil.extract<480, 495>();
  int16_t _hw_input_global_wrapper_stencil_192 = (int16_t) hw_input_global_wrapper_stencil.extract<496, 511>();

  int16_t _2026 = (int16_t)(8);
  int16_t _2027 = _hw_input_global_wrapper_stencil_161 * _2026;
  int16_t _2028 = (int16_t)(40);
  int16_t _2029 = _hw_input_global_wrapper_stencil_162 * _2028;
  int16_t _2030 = (int16_t)(72);
  int16_t _2031 = _hw_input_global_wrapper_stencil_163 * _2030;
  int16_t _2032 = (int16_t)(104);
  int16_t _2033 = _hw_input_global_wrapper_stencil_164 * _2032;
  int16_t _2034 = (int16_t)(136);
  int16_t _2035 = _hw_input_global_wrapper_stencil_165 * _2034;
  int16_t _2036 = (int16_t)(168);
  int16_t _2037 = _hw_input_global_wrapper_stencil_166 * _2036;
  int16_t _2038 = (int16_t)(200);
  int16_t _2039 = _hw_input_global_wrapper_stencil_167 * _2038;
  int16_t _2040 = (int16_t)(232);
  int16_t _2041 = _hw_input_global_wrapper_stencil_168 * _2040;
  int16_t _2042 = (int16_t)(264);
  int16_t _2043 = _hw_input_global_wrapper_stencil_169 * _2042;
  int16_t _2044 = (int16_t)(296);
  int16_t _2045 = _hw_input_global_wrapper_stencil_170 * _2044;
  int16_t _2046 = (int16_t)(328);
  int16_t _2047 = _hw_input_global_wrapper_stencil_171 * _2046;
  int16_t _2048 = (int16_t)(360);
  int16_t _2049 = _hw_input_global_wrapper_stencil_172 * _2048;
  int16_t _2050 = (int16_t)(392);
  int16_t _2051 = _hw_input_global_wrapper_stencil_173 * _2050;
  int16_t _2052 = (int16_t)(424);
  int16_t _2053 = _hw_input_global_wrapper_stencil_174 * _2052;
  int16_t _2054 = (int16_t)(456);
  int16_t _2055 = _hw_input_global_wrapper_stencil_175 * _2054;
  int16_t _2056 = (int16_t)(488);
  int16_t _2057 = _hw_input_global_wrapper_stencil_176 * _2056;
  int16_t _2058 = (int16_t)(520);
  int16_t _2059 = _hw_input_global_wrapper_stencil_177 * _2058;
  int16_t _2060 = (int16_t)(552);
  int16_t _2061 = _hw_input_global_wrapper_stencil_178 * _2060;
  int16_t _2062 = (int16_t)(584);
  int16_t _2063 = _hw_input_global_wrapper_stencil_179 * _2062;
  int16_t _2064 = (int16_t)(616);
  int16_t _2065 = _hw_input_global_wrapper_stencil_180 * _2064;
  int16_t _2066 = (int16_t)(648);
  int16_t _2067 = _hw_input_global_wrapper_stencil_181 * _2066;
  int16_t _2068 = (int16_t)(680);
  int16_t _2069 = _hw_input_global_wrapper_stencil_182 * _2068;
  int16_t _2070 = (int16_t)(712);
  int16_t _2071 = _hw_input_global_wrapper_stencil_183 * _2070;
  int16_t _2072 = (int16_t)(744);
  int16_t _2073 = _hw_input_global_wrapper_stencil_184 * _2072;
  int16_t _2074 = (int16_t)(776);
  int16_t _2075 = _hw_input_global_wrapper_stencil_185 * _2074;
  int16_t _2076 = (int16_t)(808);
  int16_t _2077 = _hw_input_global_wrapper_stencil_186 * _2076;
  int16_t _2078 = (int16_t)(840);
  int16_t _2079 = _hw_input_global_wrapper_stencil_187 * _2078;
  int16_t _2080 = (int16_t)(872);
  int16_t _2081 = _hw_input_global_wrapper_stencil_188 * _2080;
  int16_t _2082 = (int16_t)(904);
  int16_t _2083 = _hw_input_global_wrapper_stencil_189 * _2082;
  int16_t _2084 = (int16_t)(936);
  int16_t _2085 = _hw_input_global_wrapper_stencil_190 * _2084;
  int16_t _2086 = (int16_t)(1000);
  int16_t _2087 = _hw_input_global_wrapper_stencil_191 * _2086;
  int16_t _2088 = (int16_t)(968);
  int16_t _2089 = _hw_input_global_wrapper_stencil_192 * _2088;
  int16_t _2090 = _2087 + _2089;
  int16_t _2091 = _2085 + _2090;
  int16_t _2092 = _2083 + _2091;
  int16_t _2093 = _2081 + _2092;
  int16_t _2094 = _2079 + _2093;
  int16_t _2095 = _2077 + _2094;
  int16_t _2096 = _2075 + _2095;
  int16_t _2097 = _2073 + _2096;
  int16_t _2098 = _2071 + _2097;
  int16_t _2099 = _2069 + _2098;
  int16_t _2100 = _2067 + _2099;
  int16_t _2101 = _2065 + _2100;
  int16_t _2102 = _2063 + _2101;
  int16_t _2103 = _2061 + _2102;
  int16_t _2104 = _2059 + _2103;
  int16_t _2105 = _2057 + _2104;
  int16_t _2106 = _2055 + _2105;
  int16_t _2107 = _2053 + _2106;
  int16_t _2108 = _2051 + _2107;
  int16_t _2109 = _2049 + _2108;
  int16_t _2110 = _2047 + _2109;
  int16_t _2111 = _2045 + _2110;
  int16_t _2112 = _2043 + _2111;
  int16_t _2113 = _2041 + _2112;
  int16_t _2114 = _2039 + _2113;
  int16_t _2115 = _2037 + _2114;
  int16_t _2116 = _2035 + _2115;
  int16_t _2117 = _2033 + _2116;
  int16_t _2118 = _2031 + _2117;
  int16_t _2119 = _2029 + _2118;
  int16_t _2120 = _conv_stencil_6 + _2119;
  int16_t _2121 = _2027 + _2120;
  return _2121;
}

//store is: conv.stencil(conv_s1_x_6, conv_s1_y_6, 6) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_6, conv_s1_y_6)*(int16)9) + (conv.stencil(conv_s1_x_6, conv_s1_y_6, 6) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_6, conv_s1_y_6)*(int16)41) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_6, conv_s1_y_6)*(int16)73) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_6, conv_s1_y_6)*(int16)105) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_6, conv_s1_y_6)*(int16)137) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_6, conv_s1_y_6)*(int16)169) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_6, conv_s1_y_6)*(int16)201) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_6, conv_s1_y_6)*(int16)233) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_6, conv_s1_y_6)*(int16)265) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_6, conv_s1_y_6)*(int16)297) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_6, conv_s1_y_6)*(int16)329) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_6, conv_s1_y_6)*(int16)361) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_6, conv_s1_y_6)*(int16)393) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_6, conv_s1_y_6)*(int16)425) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_6, conv_s1_y_6)*(int16)457) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_6, conv_s1_y_6)*(int16)489) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_6, conv_s1_y_6)*(int16)521) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_6, conv_s1_y_6)*(int16)553) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_6, conv_s1_y_6)*(int16)585) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_6, conv_s1_y_6)*(int16)617) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_6, conv_s1_y_6)*(int16)649) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_6, conv_s1_y_6)*(int16)681) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_6, conv_s1_y_6)*(int16)713) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_6, conv_s1_y_6)*(int16)745) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_6, conv_s1_y_6)*(int16)777) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_6, conv_s1_y_6)*(int16)809) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_6, conv_s1_y_6)*(int16)841) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_6, conv_s1_y_6)*(int16)873) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_6, conv_s1_y_6)*(int16)905) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_6, conv_s1_y_6)*(int16)937) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_6, conv_s1_y_6)*(int16)1001) + (hw_input_global_wrapper.stencil(30, conv_s1_x_6, conv_s1_y_6)*(int16)969)))))))))))))))))))))))))))))))))
hw_uint<16> hcompute_conv_stencil_7(hw_uint<16>& conv_stencil, hw_uint<512>& hw_input_global_wrapper_stencil) {
  int16_t _conv_stencil_7 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_193 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_194 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_195 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_196 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_197 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_198 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_199 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_200 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_input_global_wrapper_stencil_201 = (int16_t) hw_input_global_wrapper_stencil.extract<128, 143>();
  int16_t _hw_input_global_wrapper_stencil_202 = (int16_t) hw_input_global_wrapper_stencil.extract<144, 159>();
  int16_t _hw_input_global_wrapper_stencil_203 = (int16_t) hw_input_global_wrapper_stencil.extract<160, 175>();
  int16_t _hw_input_global_wrapper_stencil_204 = (int16_t) hw_input_global_wrapper_stencil.extract<176, 191>();
  int16_t _hw_input_global_wrapper_stencil_205 = (int16_t) hw_input_global_wrapper_stencil.extract<192, 207>();
  int16_t _hw_input_global_wrapper_stencil_206 = (int16_t) hw_input_global_wrapper_stencil.extract<208, 223>();
  int16_t _hw_input_global_wrapper_stencil_207 = (int16_t) hw_input_global_wrapper_stencil.extract<224, 239>();
  int16_t _hw_input_global_wrapper_stencil_208 = (int16_t) hw_input_global_wrapper_stencil.extract<240, 255>();
  int16_t _hw_input_global_wrapper_stencil_209 = (int16_t) hw_input_global_wrapper_stencil.extract<256, 271>();
  int16_t _hw_input_global_wrapper_stencil_210 = (int16_t) hw_input_global_wrapper_stencil.extract<272, 287>();
  int16_t _hw_input_global_wrapper_stencil_211 = (int16_t) hw_input_global_wrapper_stencil.extract<288, 303>();
  int16_t _hw_input_global_wrapper_stencil_212 = (int16_t) hw_input_global_wrapper_stencil.extract<304, 319>();
  int16_t _hw_input_global_wrapper_stencil_213 = (int16_t) hw_input_global_wrapper_stencil.extract<320, 335>();
  int16_t _hw_input_global_wrapper_stencil_214 = (int16_t) hw_input_global_wrapper_stencil.extract<336, 351>();
  int16_t _hw_input_global_wrapper_stencil_215 = (int16_t) hw_input_global_wrapper_stencil.extract<352, 367>();
  int16_t _hw_input_global_wrapper_stencil_216 = (int16_t) hw_input_global_wrapper_stencil.extract<368, 383>();
  int16_t _hw_input_global_wrapper_stencil_217 = (int16_t) hw_input_global_wrapper_stencil.extract<384, 399>();
  int16_t _hw_input_global_wrapper_stencil_218 = (int16_t) hw_input_global_wrapper_stencil.extract<400, 415>();
  int16_t _hw_input_global_wrapper_stencil_219 = (int16_t) hw_input_global_wrapper_stencil.extract<416, 431>();
  int16_t _hw_input_global_wrapper_stencil_220 = (int16_t) hw_input_global_wrapper_stencil.extract<432, 447>();
  int16_t _hw_input_global_wrapper_stencil_221 = (int16_t) hw_input_global_wrapper_stencil.extract<448, 463>();
  int16_t _hw_input_global_wrapper_stencil_222 = (int16_t) hw_input_global_wrapper_stencil.extract<464, 479>();
  int16_t _hw_input_global_wrapper_stencil_223 = (int16_t) hw_input_global_wrapper_stencil.extract<480, 495>();
  int16_t _hw_input_global_wrapper_stencil_224 = (int16_t) hw_input_global_wrapper_stencil.extract<496, 511>();

  int16_t _2347 = (int16_t)(9);
  int16_t _2348 = _hw_input_global_wrapper_stencil_193 * _2347;
  int16_t _2349 = (int16_t)(41);
  int16_t _2350 = _hw_input_global_wrapper_stencil_194 * _2349;
  int16_t _2351 = (int16_t)(73);
  int16_t _2352 = _hw_input_global_wrapper_stencil_195 * _2351;
  int16_t _2353 = (int16_t)(105);
  int16_t _2354 = _hw_input_global_wrapper_stencil_196 * _2353;
  int16_t _2355 = (int16_t)(137);
  int16_t _2356 = _hw_input_global_wrapper_stencil_197 * _2355;
  int16_t _2357 = (int16_t)(169);
  int16_t _2358 = _hw_input_global_wrapper_stencil_198 * _2357;
  int16_t _2359 = (int16_t)(201);
  int16_t _2360 = _hw_input_global_wrapper_stencil_199 * _2359;
  int16_t _2361 = (int16_t)(233);
  int16_t _2362 = _hw_input_global_wrapper_stencil_200 * _2361;
  int16_t _2363 = (int16_t)(265);
  int16_t _2364 = _hw_input_global_wrapper_stencil_201 * _2363;
  int16_t _2365 = (int16_t)(297);
  int16_t _2366 = _hw_input_global_wrapper_stencil_202 * _2365;
  int16_t _2367 = (int16_t)(329);
  int16_t _2368 = _hw_input_global_wrapper_stencil_203 * _2367;
  int16_t _2369 = (int16_t)(361);
  int16_t _2370 = _hw_input_global_wrapper_stencil_204 * _2369;
  int16_t _2371 = (int16_t)(393);
  int16_t _2372 = _hw_input_global_wrapper_stencil_205 * _2371;
  int16_t _2373 = (int16_t)(425);
  int16_t _2374 = _hw_input_global_wrapper_stencil_206 * _2373;
  int16_t _2375 = (int16_t)(457);
  int16_t _2376 = _hw_input_global_wrapper_stencil_207 * _2375;
  int16_t _2377 = (int16_t)(489);
  int16_t _2378 = _hw_input_global_wrapper_stencil_208 * _2377;
  int16_t _2379 = (int16_t)(521);
  int16_t _2380 = _hw_input_global_wrapper_stencil_209 * _2379;
  int16_t _2381 = (int16_t)(553);
  int16_t _2382 = _hw_input_global_wrapper_stencil_210 * _2381;
  int16_t _2383 = (int16_t)(585);
  int16_t _2384 = _hw_input_global_wrapper_stencil_211 * _2383;
  int16_t _2385 = (int16_t)(617);
  int16_t _2386 = _hw_input_global_wrapper_stencil_212 * _2385;
  int16_t _2387 = (int16_t)(649);
  int16_t _2388 = _hw_input_global_wrapper_stencil_213 * _2387;
  int16_t _2389 = (int16_t)(681);
  int16_t _2390 = _hw_input_global_wrapper_stencil_214 * _2389;
  int16_t _2391 = (int16_t)(713);
  int16_t _2392 = _hw_input_global_wrapper_stencil_215 * _2391;
  int16_t _2393 = (int16_t)(745);
  int16_t _2394 = _hw_input_global_wrapper_stencil_216 * _2393;
  int16_t _2395 = (int16_t)(777);
  int16_t _2396 = _hw_input_global_wrapper_stencil_217 * _2395;
  int16_t _2397 = (int16_t)(809);
  int16_t _2398 = _hw_input_global_wrapper_stencil_218 * _2397;
  int16_t _2399 = (int16_t)(841);
  int16_t _2400 = _hw_input_global_wrapper_stencil_219 * _2399;
  int16_t _2401 = (int16_t)(873);
  int16_t _2402 = _hw_input_global_wrapper_stencil_220 * _2401;
  int16_t _2403 = (int16_t)(905);
  int16_t _2404 = _hw_input_global_wrapper_stencil_221 * _2403;
  int16_t _2405 = (int16_t)(937);
  int16_t _2406 = _hw_input_global_wrapper_stencil_222 * _2405;
  int16_t _2407 = (int16_t)(1001);
  int16_t _2408 = _hw_input_global_wrapper_stencil_223 * _2407;
  int16_t _2409 = (int16_t)(969);
  int16_t _2410 = _hw_input_global_wrapper_stencil_224 * _2409;
  int16_t _2411 = _2408 + _2410;
  int16_t _2412 = _2406 + _2411;
  int16_t _2413 = _2404 + _2412;
  int16_t _2414 = _2402 + _2413;
  int16_t _2415 = _2400 + _2414;
  int16_t _2416 = _2398 + _2415;
  int16_t _2417 = _2396 + _2416;
  int16_t _2418 = _2394 + _2417;
  int16_t _2419 = _2392 + _2418;
  int16_t _2420 = _2390 + _2419;
  int16_t _2421 = _2388 + _2420;
  int16_t _2422 = _2386 + _2421;
  int16_t _2423 = _2384 + _2422;
  int16_t _2424 = _2382 + _2423;
  int16_t _2425 = _2380 + _2424;
  int16_t _2426 = _2378 + _2425;
  int16_t _2427 = _2376 + _2426;
  int16_t _2428 = _2374 + _2427;
  int16_t _2429 = _2372 + _2428;
  int16_t _2430 = _2370 + _2429;
  int16_t _2431 = _2368 + _2430;
  int16_t _2432 = _2366 + _2431;
  int16_t _2433 = _2364 + _2432;
  int16_t _2434 = _2362 + _2433;
  int16_t _2435 = _2360 + _2434;
  int16_t _2436 = _2358 + _2435;
  int16_t _2437 = _2356 + _2436;
  int16_t _2438 = _2354 + _2437;
  int16_t _2439 = _2352 + _2438;
  int16_t _2440 = _2350 + _2439;
  int16_t _2441 = _conv_stencil_7 + _2440;
  int16_t _2442 = _2348 + _2441;
  return _2442;
}

//store is: conv.stencil(conv_s1_x_7, conv_s1_y_7, 7) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_7, conv_s1_y_7)*(int16)10) + (conv.stencil(conv_s1_x_7, conv_s1_y_7, 7) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_7, conv_s1_y_7)*(int16)42) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_7, conv_s1_y_7)*(int16)74) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_7, conv_s1_y_7)*(int16)106) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_7, conv_s1_y_7)*(int16)138) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_7, conv_s1_y_7)*(int16)170) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_7, conv_s1_y_7)*(int16)202) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_7, conv_s1_y_7)*(int16)234) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_7, conv_s1_y_7)*(int16)266) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_7, conv_s1_y_7)*(int16)298) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_7, conv_s1_y_7)*(int16)330) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_7, conv_s1_y_7)*(int16)362) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_7, conv_s1_y_7)*(int16)394) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_7, conv_s1_y_7)*(int16)426) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_7, conv_s1_y_7)*(int16)458) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_7, conv_s1_y_7)*(int16)490) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_7, conv_s1_y_7)*(int16)522) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_7, conv_s1_y_7)*(int16)554) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_7, conv_s1_y_7)*(int16)586) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_7, conv_s1_y_7)*(int16)618) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_7, conv_s1_y_7)*(int16)650) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_7, conv_s1_y_7)*(int16)682) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_7, conv_s1_y_7)*(int16)714) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_7, conv_s1_y_7)*(int16)746) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_7, conv_s1_y_7)*(int16)778) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_7, conv_s1_y_7)*(int16)810) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_7, conv_s1_y_7)*(int16)842) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_7, conv_s1_y_7)*(int16)874) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_7, conv_s1_y_7)*(int16)906) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_7, conv_s1_y_7)*(int16)938) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_7, conv_s1_y_7)*(int16)1002) + (hw_input_global_wrapper.stencil(30, conv_s1_x_7, conv_s1_y_7)*(int16)970)))))))))))))))))))))))))))))))))
hw_uint<16> hcompute_conv_stencil_8(hw_uint<16>& conv_stencil, hw_uint<512>& hw_input_global_wrapper_stencil) {
  int16_t _conv_stencil_8 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_225 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_226 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_227 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_228 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_229 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_230 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_231 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_232 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_input_global_wrapper_stencil_233 = (int16_t) hw_input_global_wrapper_stencil.extract<128, 143>();
  int16_t _hw_input_global_wrapper_stencil_234 = (int16_t) hw_input_global_wrapper_stencil.extract<144, 159>();
  int16_t _hw_input_global_wrapper_stencil_235 = (int16_t) hw_input_global_wrapper_stencil.extract<160, 175>();
  int16_t _hw_input_global_wrapper_stencil_236 = (int16_t) hw_input_global_wrapper_stencil.extract<176, 191>();
  int16_t _hw_input_global_wrapper_stencil_237 = (int16_t) hw_input_global_wrapper_stencil.extract<192, 207>();
  int16_t _hw_input_global_wrapper_stencil_238 = (int16_t) hw_input_global_wrapper_stencil.extract<208, 223>();
  int16_t _hw_input_global_wrapper_stencil_239 = (int16_t) hw_input_global_wrapper_stencil.extract<224, 239>();
  int16_t _hw_input_global_wrapper_stencil_240 = (int16_t) hw_input_global_wrapper_stencil.extract<240, 255>();
  int16_t _hw_input_global_wrapper_stencil_241 = (int16_t) hw_input_global_wrapper_stencil.extract<256, 271>();
  int16_t _hw_input_global_wrapper_stencil_242 = (int16_t) hw_input_global_wrapper_stencil.extract<272, 287>();
  int16_t _hw_input_global_wrapper_stencil_243 = (int16_t) hw_input_global_wrapper_stencil.extract<288, 303>();
  int16_t _hw_input_global_wrapper_stencil_244 = (int16_t) hw_input_global_wrapper_stencil.extract<304, 319>();
  int16_t _hw_input_global_wrapper_stencil_245 = (int16_t) hw_input_global_wrapper_stencil.extract<320, 335>();
  int16_t _hw_input_global_wrapper_stencil_246 = (int16_t) hw_input_global_wrapper_stencil.extract<336, 351>();
  int16_t _hw_input_global_wrapper_stencil_247 = (int16_t) hw_input_global_wrapper_stencil.extract<352, 367>();
  int16_t _hw_input_global_wrapper_stencil_248 = (int16_t) hw_input_global_wrapper_stencil.extract<368, 383>();
  int16_t _hw_input_global_wrapper_stencil_249 = (int16_t) hw_input_global_wrapper_stencil.extract<384, 399>();
  int16_t _hw_input_global_wrapper_stencil_250 = (int16_t) hw_input_global_wrapper_stencil.extract<400, 415>();
  int16_t _hw_input_global_wrapper_stencil_251 = (int16_t) hw_input_global_wrapper_stencil.extract<416, 431>();
  int16_t _hw_input_global_wrapper_stencil_252 = (int16_t) hw_input_global_wrapper_stencil.extract<432, 447>();
  int16_t _hw_input_global_wrapper_stencil_253 = (int16_t) hw_input_global_wrapper_stencil.extract<448, 463>();
  int16_t _hw_input_global_wrapper_stencil_254 = (int16_t) hw_input_global_wrapper_stencil.extract<464, 479>();
  int16_t _hw_input_global_wrapper_stencil_255 = (int16_t) hw_input_global_wrapper_stencil.extract<480, 495>();
  int16_t _hw_input_global_wrapper_stencil_256 = (int16_t) hw_input_global_wrapper_stencil.extract<496, 511>();

  int16_t _2668 = (int16_t)(10);
  int16_t _2669 = _hw_input_global_wrapper_stencil_225 * _2668;
  int16_t _2670 = (int16_t)(42);
  int16_t _2671 = _hw_input_global_wrapper_stencil_226 * _2670;
  int16_t _2672 = (int16_t)(74);
  int16_t _2673 = _hw_input_global_wrapper_stencil_227 * _2672;
  int16_t _2674 = (int16_t)(106);
  int16_t _2675 = _hw_input_global_wrapper_stencil_228 * _2674;
  int16_t _2676 = (int16_t)(138);
  int16_t _2677 = _hw_input_global_wrapper_stencil_229 * _2676;
  int16_t _2678 = (int16_t)(170);
  int16_t _2679 = _hw_input_global_wrapper_stencil_230 * _2678;
  int16_t _2680 = (int16_t)(202);
  int16_t _2681 = _hw_input_global_wrapper_stencil_231 * _2680;
  int16_t _2682 = (int16_t)(234);
  int16_t _2683 = _hw_input_global_wrapper_stencil_232 * _2682;
  int16_t _2684 = (int16_t)(266);
  int16_t _2685 = _hw_input_global_wrapper_stencil_233 * _2684;
  int16_t _2686 = (int16_t)(298);
  int16_t _2687 = _hw_input_global_wrapper_stencil_234 * _2686;
  int16_t _2688 = (int16_t)(330);
  int16_t _2689 = _hw_input_global_wrapper_stencil_235 * _2688;
  int16_t _2690 = (int16_t)(362);
  int16_t _2691 = _hw_input_global_wrapper_stencil_236 * _2690;
  int16_t _2692 = (int16_t)(394);
  int16_t _2693 = _hw_input_global_wrapper_stencil_237 * _2692;
  int16_t _2694 = (int16_t)(426);
  int16_t _2695 = _hw_input_global_wrapper_stencil_238 * _2694;
  int16_t _2696 = (int16_t)(458);
  int16_t _2697 = _hw_input_global_wrapper_stencil_239 * _2696;
  int16_t _2698 = (int16_t)(490);
  int16_t _2699 = _hw_input_global_wrapper_stencil_240 * _2698;
  int16_t _2700 = (int16_t)(522);
  int16_t _2701 = _hw_input_global_wrapper_stencil_241 * _2700;
  int16_t _2702 = (int16_t)(554);
  int16_t _2703 = _hw_input_global_wrapper_stencil_242 * _2702;
  int16_t _2704 = (int16_t)(586);
  int16_t _2705 = _hw_input_global_wrapper_stencil_243 * _2704;
  int16_t _2706 = (int16_t)(618);
  int16_t _2707 = _hw_input_global_wrapper_stencil_244 * _2706;
  int16_t _2708 = (int16_t)(650);
  int16_t _2709 = _hw_input_global_wrapper_stencil_245 * _2708;
  int16_t _2710 = (int16_t)(682);
  int16_t _2711 = _hw_input_global_wrapper_stencil_246 * _2710;
  int16_t _2712 = (int16_t)(714);
  int16_t _2713 = _hw_input_global_wrapper_stencil_247 * _2712;
  int16_t _2714 = (int16_t)(746);
  int16_t _2715 = _hw_input_global_wrapper_stencil_248 * _2714;
  int16_t _2716 = (int16_t)(778);
  int16_t _2717 = _hw_input_global_wrapper_stencil_249 * _2716;
  int16_t _2718 = (int16_t)(810);
  int16_t _2719 = _hw_input_global_wrapper_stencil_250 * _2718;
  int16_t _2720 = (int16_t)(842);
  int16_t _2721 = _hw_input_global_wrapper_stencil_251 * _2720;
  int16_t _2722 = (int16_t)(874);
  int16_t _2723 = _hw_input_global_wrapper_stencil_252 * _2722;
  int16_t _2724 = (int16_t)(906);
  int16_t _2725 = _hw_input_global_wrapper_stencil_253 * _2724;
  int16_t _2726 = (int16_t)(938);
  int16_t _2727 = _hw_input_global_wrapper_stencil_254 * _2726;
  int16_t _2728 = (int16_t)(1002);
  int16_t _2729 = _hw_input_global_wrapper_stencil_255 * _2728;
  int16_t _2730 = (int16_t)(970);
  int16_t _2731 = _hw_input_global_wrapper_stencil_256 * _2730;
  int16_t _2732 = _2729 + _2731;
  int16_t _2733 = _2727 + _2732;
  int16_t _2734 = _2725 + _2733;
  int16_t _2735 = _2723 + _2734;
  int16_t _2736 = _2721 + _2735;
  int16_t _2737 = _2719 + _2736;
  int16_t _2738 = _2717 + _2737;
  int16_t _2739 = _2715 + _2738;
  int16_t _2740 = _2713 + _2739;
  int16_t _2741 = _2711 + _2740;
  int16_t _2742 = _2709 + _2741;
  int16_t _2743 = _2707 + _2742;
  int16_t _2744 = _2705 + _2743;
  int16_t _2745 = _2703 + _2744;
  int16_t _2746 = _2701 + _2745;
  int16_t _2747 = _2699 + _2746;
  int16_t _2748 = _2697 + _2747;
  int16_t _2749 = _2695 + _2748;
  int16_t _2750 = _2693 + _2749;
  int16_t _2751 = _2691 + _2750;
  int16_t _2752 = _2689 + _2751;
  int16_t _2753 = _2687 + _2752;
  int16_t _2754 = _2685 + _2753;
  int16_t _2755 = _2683 + _2754;
  int16_t _2756 = _2681 + _2755;
  int16_t _2757 = _2679 + _2756;
  int16_t _2758 = _2677 + _2757;
  int16_t _2759 = _2675 + _2758;
  int16_t _2760 = _2673 + _2759;
  int16_t _2761 = _2671 + _2760;
  int16_t _2762 = _conv_stencil_8 + _2761;
  int16_t _2763 = _2669 + _2762;
  return _2763;
}

//store is: conv.stencil(conv_s1_x_8, conv_s1_y_8, 8) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_8, conv_s1_y_8)*(int16)11) + (conv.stencil(conv_s1_x_8, conv_s1_y_8, 8) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_8, conv_s1_y_8)*(int16)43) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_8, conv_s1_y_8)*(int16)75) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_8, conv_s1_y_8)*(int16)107) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_8, conv_s1_y_8)*(int16)139) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_8, conv_s1_y_8)*(int16)171) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_8, conv_s1_y_8)*(int16)203) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_8, conv_s1_y_8)*(int16)235) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_8, conv_s1_y_8)*(int16)267) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_8, conv_s1_y_8)*(int16)299) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_8, conv_s1_y_8)*(int16)331) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_8, conv_s1_y_8)*(int16)363) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_8, conv_s1_y_8)*(int16)395) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_8, conv_s1_y_8)*(int16)427) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_8, conv_s1_y_8)*(int16)459) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_8, conv_s1_y_8)*(int16)491) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_8, conv_s1_y_8)*(int16)523) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_8, conv_s1_y_8)*(int16)555) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_8, conv_s1_y_8)*(int16)587) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_8, conv_s1_y_8)*(int16)619) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_8, conv_s1_y_8)*(int16)651) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_8, conv_s1_y_8)*(int16)683) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_8, conv_s1_y_8)*(int16)715) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_8, conv_s1_y_8)*(int16)747) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_8, conv_s1_y_8)*(int16)779) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_8, conv_s1_y_8)*(int16)811) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_8, conv_s1_y_8)*(int16)843) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_8, conv_s1_y_8)*(int16)875) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_8, conv_s1_y_8)*(int16)907) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_8, conv_s1_y_8)*(int16)939) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_8, conv_s1_y_8)*(int16)1003) + (hw_input_global_wrapper.stencil(30, conv_s1_x_8, conv_s1_y_8)*(int16)971)))))))))))))))))))))))))))))))))
hw_uint<16> hcompute_conv_stencil_9(hw_uint<16>& conv_stencil, hw_uint<512>& hw_input_global_wrapper_stencil) {
  int16_t _conv_stencil_9 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_257 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_258 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_259 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_260 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_261 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_262 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_263 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_264 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_input_global_wrapper_stencil_265 = (int16_t) hw_input_global_wrapper_stencil.extract<128, 143>();
  int16_t _hw_input_global_wrapper_stencil_266 = (int16_t) hw_input_global_wrapper_stencil.extract<144, 159>();
  int16_t _hw_input_global_wrapper_stencil_267 = (int16_t) hw_input_global_wrapper_stencil.extract<160, 175>();
  int16_t _hw_input_global_wrapper_stencil_268 = (int16_t) hw_input_global_wrapper_stencil.extract<176, 191>();
  int16_t _hw_input_global_wrapper_stencil_269 = (int16_t) hw_input_global_wrapper_stencil.extract<192, 207>();
  int16_t _hw_input_global_wrapper_stencil_270 = (int16_t) hw_input_global_wrapper_stencil.extract<208, 223>();
  int16_t _hw_input_global_wrapper_stencil_271 = (int16_t) hw_input_global_wrapper_stencil.extract<224, 239>();
  int16_t _hw_input_global_wrapper_stencil_272 = (int16_t) hw_input_global_wrapper_stencil.extract<240, 255>();
  int16_t _hw_input_global_wrapper_stencil_273 = (int16_t) hw_input_global_wrapper_stencil.extract<256, 271>();
  int16_t _hw_input_global_wrapper_stencil_274 = (int16_t) hw_input_global_wrapper_stencil.extract<272, 287>();
  int16_t _hw_input_global_wrapper_stencil_275 = (int16_t) hw_input_global_wrapper_stencil.extract<288, 303>();
  int16_t _hw_input_global_wrapper_stencil_276 = (int16_t) hw_input_global_wrapper_stencil.extract<304, 319>();
  int16_t _hw_input_global_wrapper_stencil_277 = (int16_t) hw_input_global_wrapper_stencil.extract<320, 335>();
  int16_t _hw_input_global_wrapper_stencil_278 = (int16_t) hw_input_global_wrapper_stencil.extract<336, 351>();
  int16_t _hw_input_global_wrapper_stencil_279 = (int16_t) hw_input_global_wrapper_stencil.extract<352, 367>();
  int16_t _hw_input_global_wrapper_stencil_280 = (int16_t) hw_input_global_wrapper_stencil.extract<368, 383>();
  int16_t _hw_input_global_wrapper_stencil_281 = (int16_t) hw_input_global_wrapper_stencil.extract<384, 399>();
  int16_t _hw_input_global_wrapper_stencil_282 = (int16_t) hw_input_global_wrapper_stencil.extract<400, 415>();
  int16_t _hw_input_global_wrapper_stencil_283 = (int16_t) hw_input_global_wrapper_stencil.extract<416, 431>();
  int16_t _hw_input_global_wrapper_stencil_284 = (int16_t) hw_input_global_wrapper_stencil.extract<432, 447>();
  int16_t _hw_input_global_wrapper_stencil_285 = (int16_t) hw_input_global_wrapper_stencil.extract<448, 463>();
  int16_t _hw_input_global_wrapper_stencil_286 = (int16_t) hw_input_global_wrapper_stencil.extract<464, 479>();
  int16_t _hw_input_global_wrapper_stencil_287 = (int16_t) hw_input_global_wrapper_stencil.extract<480, 495>();
  int16_t _hw_input_global_wrapper_stencil_288 = (int16_t) hw_input_global_wrapper_stencil.extract<496, 511>();

  int16_t _2989 = (int16_t)(11);
  int16_t _2990 = _hw_input_global_wrapper_stencil_257 * _2989;
  int16_t _2991 = (int16_t)(43);
  int16_t _2992 = _hw_input_global_wrapper_stencil_258 * _2991;
  int16_t _2993 = (int16_t)(75);
  int16_t _2994 = _hw_input_global_wrapper_stencil_259 * _2993;
  int16_t _2995 = (int16_t)(107);
  int16_t _2996 = _hw_input_global_wrapper_stencil_260 * _2995;
  int16_t _2997 = (int16_t)(139);
  int16_t _2998 = _hw_input_global_wrapper_stencil_261 * _2997;
  int16_t _2999 = (int16_t)(171);
  int16_t _3000 = _hw_input_global_wrapper_stencil_262 * _2999;
  int16_t _3001 = (int16_t)(203);
  int16_t _3002 = _hw_input_global_wrapper_stencil_263 * _3001;
  int16_t _3003 = (int16_t)(235);
  int16_t _3004 = _hw_input_global_wrapper_stencil_264 * _3003;
  int16_t _3005 = (int16_t)(267);
  int16_t _3006 = _hw_input_global_wrapper_stencil_265 * _3005;
  int16_t _3007 = (int16_t)(299);
  int16_t _3008 = _hw_input_global_wrapper_stencil_266 * _3007;
  int16_t _3009 = (int16_t)(331);
  int16_t _3010 = _hw_input_global_wrapper_stencil_267 * _3009;
  int16_t _3011 = (int16_t)(363);
  int16_t _3012 = _hw_input_global_wrapper_stencil_268 * _3011;
  int16_t _3013 = (int16_t)(395);
  int16_t _3014 = _hw_input_global_wrapper_stencil_269 * _3013;
  int16_t _3015 = (int16_t)(427);
  int16_t _3016 = _hw_input_global_wrapper_stencil_270 * _3015;
  int16_t _3017 = (int16_t)(459);
  int16_t _3018 = _hw_input_global_wrapper_stencil_271 * _3017;
  int16_t _3019 = (int16_t)(491);
  int16_t _3020 = _hw_input_global_wrapper_stencil_272 * _3019;
  int16_t _3021 = (int16_t)(523);
  int16_t _3022 = _hw_input_global_wrapper_stencil_273 * _3021;
  int16_t _3023 = (int16_t)(555);
  int16_t _3024 = _hw_input_global_wrapper_stencil_274 * _3023;
  int16_t _3025 = (int16_t)(587);
  int16_t _3026 = _hw_input_global_wrapper_stencil_275 * _3025;
  int16_t _3027 = (int16_t)(619);
  int16_t _3028 = _hw_input_global_wrapper_stencil_276 * _3027;
  int16_t _3029 = (int16_t)(651);
  int16_t _3030 = _hw_input_global_wrapper_stencil_277 * _3029;
  int16_t _3031 = (int16_t)(683);
  int16_t _3032 = _hw_input_global_wrapper_stencil_278 * _3031;
  int16_t _3033 = (int16_t)(715);
  int16_t _3034 = _hw_input_global_wrapper_stencil_279 * _3033;
  int16_t _3035 = (int16_t)(747);
  int16_t _3036 = _hw_input_global_wrapper_stencil_280 * _3035;
  int16_t _3037 = (int16_t)(779);
  int16_t _3038 = _hw_input_global_wrapper_stencil_281 * _3037;
  int16_t _3039 = (int16_t)(811);
  int16_t _3040 = _hw_input_global_wrapper_stencil_282 * _3039;
  int16_t _3041 = (int16_t)(843);
  int16_t _3042 = _hw_input_global_wrapper_stencil_283 * _3041;
  int16_t _3043 = (int16_t)(875);
  int16_t _3044 = _hw_input_global_wrapper_stencil_284 * _3043;
  int16_t _3045 = (int16_t)(907);
  int16_t _3046 = _hw_input_global_wrapper_stencil_285 * _3045;
  int16_t _3047 = (int16_t)(939);
  int16_t _3048 = _hw_input_global_wrapper_stencil_286 * _3047;
  int16_t _3049 = (int16_t)(1003);
  int16_t _3050 = _hw_input_global_wrapper_stencil_287 * _3049;
  int16_t _3051 = (int16_t)(971);
  int16_t _3052 = _hw_input_global_wrapper_stencil_288 * _3051;
  int16_t _3053 = _3050 + _3052;
  int16_t _3054 = _3048 + _3053;
  int16_t _3055 = _3046 + _3054;
  int16_t _3056 = _3044 + _3055;
  int16_t _3057 = _3042 + _3056;
  int16_t _3058 = _3040 + _3057;
  int16_t _3059 = _3038 + _3058;
  int16_t _3060 = _3036 + _3059;
  int16_t _3061 = _3034 + _3060;
  int16_t _3062 = _3032 + _3061;
  int16_t _3063 = _3030 + _3062;
  int16_t _3064 = _3028 + _3063;
  int16_t _3065 = _3026 + _3064;
  int16_t _3066 = _3024 + _3065;
  int16_t _3067 = _3022 + _3066;
  int16_t _3068 = _3020 + _3067;
  int16_t _3069 = _3018 + _3068;
  int16_t _3070 = _3016 + _3069;
  int16_t _3071 = _3014 + _3070;
  int16_t _3072 = _3012 + _3071;
  int16_t _3073 = _3010 + _3072;
  int16_t _3074 = _3008 + _3073;
  int16_t _3075 = _3006 + _3074;
  int16_t _3076 = _3004 + _3075;
  int16_t _3077 = _3002 + _3076;
  int16_t _3078 = _3000 + _3077;
  int16_t _3079 = _2998 + _3078;
  int16_t _3080 = _2996 + _3079;
  int16_t _3081 = _2994 + _3080;
  int16_t _3082 = _2992 + _3081;
  int16_t _3083 = _conv_stencil_9 + _3082;
  int16_t _3084 = _2990 + _3083;
  return _3084;
}

//store is: conv.stencil(conv_s1_x_9, conv_s1_y_9, 9) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_9, conv_s1_y_9)*(int16)12) + (conv.stencil(conv_s1_x_9, conv_s1_y_9, 9) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_9, conv_s1_y_9)*(int16)44) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_9, conv_s1_y_9)*(int16)76) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_9, conv_s1_y_9)*(int16)108) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_9, conv_s1_y_9)*(int16)140) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_9, conv_s1_y_9)*(int16)172) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_9, conv_s1_y_9)*(int16)204) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_9, conv_s1_y_9)*(int16)236) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_9, conv_s1_y_9)*(int16)268) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_9, conv_s1_y_9)*(int16)300) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_9, conv_s1_y_9)*(int16)332) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_9, conv_s1_y_9)*(int16)364) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_9, conv_s1_y_9)*(int16)396) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_9, conv_s1_y_9)*(int16)428) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_9, conv_s1_y_9)*(int16)460) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_9, conv_s1_y_9)*(int16)492) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_9, conv_s1_y_9)*(int16)524) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_9, conv_s1_y_9)*(int16)556) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_9, conv_s1_y_9)*(int16)588) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_9, conv_s1_y_9)*(int16)620) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_9, conv_s1_y_9)*(int16)652) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_9, conv_s1_y_9)*(int16)684) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_9, conv_s1_y_9)*(int16)716) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_9, conv_s1_y_9)*(int16)748) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_9, conv_s1_y_9)*(int16)780) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_9, conv_s1_y_9)*(int16)812) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_9, conv_s1_y_9)*(int16)844) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_9, conv_s1_y_9)*(int16)876) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_9, conv_s1_y_9)*(int16)908) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_9, conv_s1_y_9)*(int16)940) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_9, conv_s1_y_9)*(int16)1004) + (hw_input_global_wrapper.stencil(30, conv_s1_x_9, conv_s1_y_9)*(int16)972)))))))))))))))))))))))))))))))))
hw_uint<16> hcompute_conv_stencil_10(hw_uint<16>& conv_stencil, hw_uint<512>& hw_input_global_wrapper_stencil) {
  int16_t _conv_stencil_10 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_289 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_290 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_291 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_292 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_293 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_294 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_295 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_296 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_input_global_wrapper_stencil_297 = (int16_t) hw_input_global_wrapper_stencil.extract<128, 143>();
  int16_t _hw_input_global_wrapper_stencil_298 = (int16_t) hw_input_global_wrapper_stencil.extract<144, 159>();
  int16_t _hw_input_global_wrapper_stencil_299 = (int16_t) hw_input_global_wrapper_stencil.extract<160, 175>();
  int16_t _hw_input_global_wrapper_stencil_300 = (int16_t) hw_input_global_wrapper_stencil.extract<176, 191>();
  int16_t _hw_input_global_wrapper_stencil_301 = (int16_t) hw_input_global_wrapper_stencil.extract<192, 207>();
  int16_t _hw_input_global_wrapper_stencil_302 = (int16_t) hw_input_global_wrapper_stencil.extract<208, 223>();
  int16_t _hw_input_global_wrapper_stencil_303 = (int16_t) hw_input_global_wrapper_stencil.extract<224, 239>();
  int16_t _hw_input_global_wrapper_stencil_304 = (int16_t) hw_input_global_wrapper_stencil.extract<240, 255>();
  int16_t _hw_input_global_wrapper_stencil_305 = (int16_t) hw_input_global_wrapper_stencil.extract<256, 271>();
  int16_t _hw_input_global_wrapper_stencil_306 = (int16_t) hw_input_global_wrapper_stencil.extract<272, 287>();
  int16_t _hw_input_global_wrapper_stencil_307 = (int16_t) hw_input_global_wrapper_stencil.extract<288, 303>();
  int16_t _hw_input_global_wrapper_stencil_308 = (int16_t) hw_input_global_wrapper_stencil.extract<304, 319>();
  int16_t _hw_input_global_wrapper_stencil_309 = (int16_t) hw_input_global_wrapper_stencil.extract<320, 335>();
  int16_t _hw_input_global_wrapper_stencil_310 = (int16_t) hw_input_global_wrapper_stencil.extract<336, 351>();
  int16_t _hw_input_global_wrapper_stencil_311 = (int16_t) hw_input_global_wrapper_stencil.extract<352, 367>();
  int16_t _hw_input_global_wrapper_stencil_312 = (int16_t) hw_input_global_wrapper_stencil.extract<368, 383>();
  int16_t _hw_input_global_wrapper_stencil_313 = (int16_t) hw_input_global_wrapper_stencil.extract<384, 399>();
  int16_t _hw_input_global_wrapper_stencil_314 = (int16_t) hw_input_global_wrapper_stencil.extract<400, 415>();
  int16_t _hw_input_global_wrapper_stencil_315 = (int16_t) hw_input_global_wrapper_stencil.extract<416, 431>();
  int16_t _hw_input_global_wrapper_stencil_316 = (int16_t) hw_input_global_wrapper_stencil.extract<432, 447>();
  int16_t _hw_input_global_wrapper_stencil_317 = (int16_t) hw_input_global_wrapper_stencil.extract<448, 463>();
  int16_t _hw_input_global_wrapper_stencil_318 = (int16_t) hw_input_global_wrapper_stencil.extract<464, 479>();
  int16_t _hw_input_global_wrapper_stencil_319 = (int16_t) hw_input_global_wrapper_stencil.extract<480, 495>();
  int16_t _hw_input_global_wrapper_stencil_320 = (int16_t) hw_input_global_wrapper_stencil.extract<496, 511>();

  int16_t _3310 = (int16_t)(12);
  int16_t _3311 = _hw_input_global_wrapper_stencil_289 * _3310;
  int16_t _3312 = (int16_t)(44);
  int16_t _3313 = _hw_input_global_wrapper_stencil_290 * _3312;
  int16_t _3314 = (int16_t)(76);
  int16_t _3315 = _hw_input_global_wrapper_stencil_291 * _3314;
  int16_t _3316 = (int16_t)(108);
  int16_t _3317 = _hw_input_global_wrapper_stencil_292 * _3316;
  int16_t _3318 = (int16_t)(140);
  int16_t _3319 = _hw_input_global_wrapper_stencil_293 * _3318;
  int16_t _3320 = (int16_t)(172);
  int16_t _3321 = _hw_input_global_wrapper_stencil_294 * _3320;
  int16_t _3322 = (int16_t)(204);
  int16_t _3323 = _hw_input_global_wrapper_stencil_295 * _3322;
  int16_t _3324 = (int16_t)(236);
  int16_t _3325 = _hw_input_global_wrapper_stencil_296 * _3324;
  int16_t _3326 = (int16_t)(268);
  int16_t _3327 = _hw_input_global_wrapper_stencil_297 * _3326;
  int16_t _3328 = (int16_t)(300);
  int16_t _3329 = _hw_input_global_wrapper_stencil_298 * _3328;
  int16_t _3330 = (int16_t)(332);
  int16_t _3331 = _hw_input_global_wrapper_stencil_299 * _3330;
  int16_t _3332 = (int16_t)(364);
  int16_t _3333 = _hw_input_global_wrapper_stencil_300 * _3332;
  int16_t _3334 = (int16_t)(396);
  int16_t _3335 = _hw_input_global_wrapper_stencil_301 * _3334;
  int16_t _3336 = (int16_t)(428);
  int16_t _3337 = _hw_input_global_wrapper_stencil_302 * _3336;
  int16_t _3338 = (int16_t)(460);
  int16_t _3339 = _hw_input_global_wrapper_stencil_303 * _3338;
  int16_t _3340 = (int16_t)(492);
  int16_t _3341 = _hw_input_global_wrapper_stencil_304 * _3340;
  int16_t _3342 = (int16_t)(524);
  int16_t _3343 = _hw_input_global_wrapper_stencil_305 * _3342;
  int16_t _3344 = (int16_t)(556);
  int16_t _3345 = _hw_input_global_wrapper_stencil_306 * _3344;
  int16_t _3346 = (int16_t)(588);
  int16_t _3347 = _hw_input_global_wrapper_stencil_307 * _3346;
  int16_t _3348 = (int16_t)(620);
  int16_t _3349 = _hw_input_global_wrapper_stencil_308 * _3348;
  int16_t _3350 = (int16_t)(652);
  int16_t _3351 = _hw_input_global_wrapper_stencil_309 * _3350;
  int16_t _3352 = (int16_t)(684);
  int16_t _3353 = _hw_input_global_wrapper_stencil_310 * _3352;
  int16_t _3354 = (int16_t)(716);
  int16_t _3355 = _hw_input_global_wrapper_stencil_311 * _3354;
  int16_t _3356 = (int16_t)(748);
  int16_t _3357 = _hw_input_global_wrapper_stencil_312 * _3356;
  int16_t _3358 = (int16_t)(780);
  int16_t _3359 = _hw_input_global_wrapper_stencil_313 * _3358;
  int16_t _3360 = (int16_t)(812);
  int16_t _3361 = _hw_input_global_wrapper_stencil_314 * _3360;
  int16_t _3362 = (int16_t)(844);
  int16_t _3363 = _hw_input_global_wrapper_stencil_315 * _3362;
  int16_t _3364 = (int16_t)(876);
  int16_t _3365 = _hw_input_global_wrapper_stencil_316 * _3364;
  int16_t _3366 = (int16_t)(908);
  int16_t _3367 = _hw_input_global_wrapper_stencil_317 * _3366;
  int16_t _3368 = (int16_t)(940);
  int16_t _3369 = _hw_input_global_wrapper_stencil_318 * _3368;
  int16_t _3370 = (int16_t)(1004);
  int16_t _3371 = _hw_input_global_wrapper_stencil_319 * _3370;
  int16_t _3372 = (int16_t)(972);
  int16_t _3373 = _hw_input_global_wrapper_stencil_320 * _3372;
  int16_t _3374 = _3371 + _3373;
  int16_t _3375 = _3369 + _3374;
  int16_t _3376 = _3367 + _3375;
  int16_t _3377 = _3365 + _3376;
  int16_t _3378 = _3363 + _3377;
  int16_t _3379 = _3361 + _3378;
  int16_t _3380 = _3359 + _3379;
  int16_t _3381 = _3357 + _3380;
  int16_t _3382 = _3355 + _3381;
  int16_t _3383 = _3353 + _3382;
  int16_t _3384 = _3351 + _3383;
  int16_t _3385 = _3349 + _3384;
  int16_t _3386 = _3347 + _3385;
  int16_t _3387 = _3345 + _3386;
  int16_t _3388 = _3343 + _3387;
  int16_t _3389 = _3341 + _3388;
  int16_t _3390 = _3339 + _3389;
  int16_t _3391 = _3337 + _3390;
  int16_t _3392 = _3335 + _3391;
  int16_t _3393 = _3333 + _3392;
  int16_t _3394 = _3331 + _3393;
  int16_t _3395 = _3329 + _3394;
  int16_t _3396 = _3327 + _3395;
  int16_t _3397 = _3325 + _3396;
  int16_t _3398 = _3323 + _3397;
  int16_t _3399 = _3321 + _3398;
  int16_t _3400 = _3319 + _3399;
  int16_t _3401 = _3317 + _3400;
  int16_t _3402 = _3315 + _3401;
  int16_t _3403 = _3313 + _3402;
  int16_t _3404 = _conv_stencil_10 + _3403;
  int16_t _3405 = _3311 + _3404;
  return _3405;
}

//store is: conv.stencil(conv_s1_x_10, conv_s1_y_10, 10) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_10, conv_s1_y_10)*(int16)13) + (conv.stencil(conv_s1_x_10, conv_s1_y_10, 10) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_10, conv_s1_y_10)*(int16)45) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_10, conv_s1_y_10)*(int16)77) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_10, conv_s1_y_10)*(int16)109) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_10, conv_s1_y_10)*(int16)141) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_10, conv_s1_y_10)*(int16)173) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_10, conv_s1_y_10)*(int16)205) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_10, conv_s1_y_10)*(int16)237) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_10, conv_s1_y_10)*(int16)269) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_10, conv_s1_y_10)*(int16)301) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_10, conv_s1_y_10)*(int16)333) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_10, conv_s1_y_10)*(int16)365) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_10, conv_s1_y_10)*(int16)397) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_10, conv_s1_y_10)*(int16)429) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_10, conv_s1_y_10)*(int16)461) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_10, conv_s1_y_10)*(int16)493) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_10, conv_s1_y_10)*(int16)525) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_10, conv_s1_y_10)*(int16)557) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_10, conv_s1_y_10)*(int16)589) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_10, conv_s1_y_10)*(int16)621) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_10, conv_s1_y_10)*(int16)653) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_10, conv_s1_y_10)*(int16)685) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_10, conv_s1_y_10)*(int16)717) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_10, conv_s1_y_10)*(int16)749) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_10, conv_s1_y_10)*(int16)781) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_10, conv_s1_y_10)*(int16)813) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_10, conv_s1_y_10)*(int16)845) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_10, conv_s1_y_10)*(int16)877) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_10, conv_s1_y_10)*(int16)909) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_10, conv_s1_y_10)*(int16)941) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_10, conv_s1_y_10)*(int16)1005) + (hw_input_global_wrapper.stencil(30, conv_s1_x_10, conv_s1_y_10)*(int16)973)))))))))))))))))))))))))))))))))
hw_uint<16> hcompute_conv_stencil_11(hw_uint<16>& conv_stencil, hw_uint<512>& hw_input_global_wrapper_stencil) {
  int16_t _conv_stencil_11 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_321 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_322 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_323 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_324 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_325 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_326 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_327 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_328 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_input_global_wrapper_stencil_329 = (int16_t) hw_input_global_wrapper_stencil.extract<128, 143>();
  int16_t _hw_input_global_wrapper_stencil_330 = (int16_t) hw_input_global_wrapper_stencil.extract<144, 159>();
  int16_t _hw_input_global_wrapper_stencil_331 = (int16_t) hw_input_global_wrapper_stencil.extract<160, 175>();
  int16_t _hw_input_global_wrapper_stencil_332 = (int16_t) hw_input_global_wrapper_stencil.extract<176, 191>();
  int16_t _hw_input_global_wrapper_stencil_333 = (int16_t) hw_input_global_wrapper_stencil.extract<192, 207>();
  int16_t _hw_input_global_wrapper_stencil_334 = (int16_t) hw_input_global_wrapper_stencil.extract<208, 223>();
  int16_t _hw_input_global_wrapper_stencil_335 = (int16_t) hw_input_global_wrapper_stencil.extract<224, 239>();
  int16_t _hw_input_global_wrapper_stencil_336 = (int16_t) hw_input_global_wrapper_stencil.extract<240, 255>();
  int16_t _hw_input_global_wrapper_stencil_337 = (int16_t) hw_input_global_wrapper_stencil.extract<256, 271>();
  int16_t _hw_input_global_wrapper_stencil_338 = (int16_t) hw_input_global_wrapper_stencil.extract<272, 287>();
  int16_t _hw_input_global_wrapper_stencil_339 = (int16_t) hw_input_global_wrapper_stencil.extract<288, 303>();
  int16_t _hw_input_global_wrapper_stencil_340 = (int16_t) hw_input_global_wrapper_stencil.extract<304, 319>();
  int16_t _hw_input_global_wrapper_stencil_341 = (int16_t) hw_input_global_wrapper_stencil.extract<320, 335>();
  int16_t _hw_input_global_wrapper_stencil_342 = (int16_t) hw_input_global_wrapper_stencil.extract<336, 351>();
  int16_t _hw_input_global_wrapper_stencil_343 = (int16_t) hw_input_global_wrapper_stencil.extract<352, 367>();
  int16_t _hw_input_global_wrapper_stencil_344 = (int16_t) hw_input_global_wrapper_stencil.extract<368, 383>();
  int16_t _hw_input_global_wrapper_stencil_345 = (int16_t) hw_input_global_wrapper_stencil.extract<384, 399>();
  int16_t _hw_input_global_wrapper_stencil_346 = (int16_t) hw_input_global_wrapper_stencil.extract<400, 415>();
  int16_t _hw_input_global_wrapper_stencil_347 = (int16_t) hw_input_global_wrapper_stencil.extract<416, 431>();
  int16_t _hw_input_global_wrapper_stencil_348 = (int16_t) hw_input_global_wrapper_stencil.extract<432, 447>();
  int16_t _hw_input_global_wrapper_stencil_349 = (int16_t) hw_input_global_wrapper_stencil.extract<448, 463>();
  int16_t _hw_input_global_wrapper_stencil_350 = (int16_t) hw_input_global_wrapper_stencil.extract<464, 479>();
  int16_t _hw_input_global_wrapper_stencil_351 = (int16_t) hw_input_global_wrapper_stencil.extract<480, 495>();
  int16_t _hw_input_global_wrapper_stencil_352 = (int16_t) hw_input_global_wrapper_stencil.extract<496, 511>();

  int16_t _3631 = (int16_t)(13);
  int16_t _3632 = _hw_input_global_wrapper_stencil_321 * _3631;
  int16_t _3633 = (int16_t)(45);
  int16_t _3634 = _hw_input_global_wrapper_stencil_322 * _3633;
  int16_t _3635 = (int16_t)(77);
  int16_t _3636 = _hw_input_global_wrapper_stencil_323 * _3635;
  int16_t _3637 = (int16_t)(109);
  int16_t _3638 = _hw_input_global_wrapper_stencil_324 * _3637;
  int16_t _3639 = (int16_t)(141);
  int16_t _3640 = _hw_input_global_wrapper_stencil_325 * _3639;
  int16_t _3641 = (int16_t)(173);
  int16_t _3642 = _hw_input_global_wrapper_stencil_326 * _3641;
  int16_t _3643 = (int16_t)(205);
  int16_t _3644 = _hw_input_global_wrapper_stencil_327 * _3643;
  int16_t _3645 = (int16_t)(237);
  int16_t _3646 = _hw_input_global_wrapper_stencil_328 * _3645;
  int16_t _3647 = (int16_t)(269);
  int16_t _3648 = _hw_input_global_wrapper_stencil_329 * _3647;
  int16_t _3649 = (int16_t)(301);
  int16_t _3650 = _hw_input_global_wrapper_stencil_330 * _3649;
  int16_t _3651 = (int16_t)(333);
  int16_t _3652 = _hw_input_global_wrapper_stencil_331 * _3651;
  int16_t _3653 = (int16_t)(365);
  int16_t _3654 = _hw_input_global_wrapper_stencil_332 * _3653;
  int16_t _3655 = (int16_t)(397);
  int16_t _3656 = _hw_input_global_wrapper_stencil_333 * _3655;
  int16_t _3657 = (int16_t)(429);
  int16_t _3658 = _hw_input_global_wrapper_stencil_334 * _3657;
  int16_t _3659 = (int16_t)(461);
  int16_t _3660 = _hw_input_global_wrapper_stencil_335 * _3659;
  int16_t _3661 = (int16_t)(493);
  int16_t _3662 = _hw_input_global_wrapper_stencil_336 * _3661;
  int16_t _3663 = (int16_t)(525);
  int16_t _3664 = _hw_input_global_wrapper_stencil_337 * _3663;
  int16_t _3665 = (int16_t)(557);
  int16_t _3666 = _hw_input_global_wrapper_stencil_338 * _3665;
  int16_t _3667 = (int16_t)(589);
  int16_t _3668 = _hw_input_global_wrapper_stencil_339 * _3667;
  int16_t _3669 = (int16_t)(621);
  int16_t _3670 = _hw_input_global_wrapper_stencil_340 * _3669;
  int16_t _3671 = (int16_t)(653);
  int16_t _3672 = _hw_input_global_wrapper_stencil_341 * _3671;
  int16_t _3673 = (int16_t)(685);
  int16_t _3674 = _hw_input_global_wrapper_stencil_342 * _3673;
  int16_t _3675 = (int16_t)(717);
  int16_t _3676 = _hw_input_global_wrapper_stencil_343 * _3675;
  int16_t _3677 = (int16_t)(749);
  int16_t _3678 = _hw_input_global_wrapper_stencil_344 * _3677;
  int16_t _3679 = (int16_t)(781);
  int16_t _3680 = _hw_input_global_wrapper_stencil_345 * _3679;
  int16_t _3681 = (int16_t)(813);
  int16_t _3682 = _hw_input_global_wrapper_stencil_346 * _3681;
  int16_t _3683 = (int16_t)(845);
  int16_t _3684 = _hw_input_global_wrapper_stencil_347 * _3683;
  int16_t _3685 = (int16_t)(877);
  int16_t _3686 = _hw_input_global_wrapper_stencil_348 * _3685;
  int16_t _3687 = (int16_t)(909);
  int16_t _3688 = _hw_input_global_wrapper_stencil_349 * _3687;
  int16_t _3689 = (int16_t)(941);
  int16_t _3690 = _hw_input_global_wrapper_stencil_350 * _3689;
  int16_t _3691 = (int16_t)(1005);
  int16_t _3692 = _hw_input_global_wrapper_stencil_351 * _3691;
  int16_t _3693 = (int16_t)(973);
  int16_t _3694 = _hw_input_global_wrapper_stencil_352 * _3693;
  int16_t _3695 = _3692 + _3694;
  int16_t _3696 = _3690 + _3695;
  int16_t _3697 = _3688 + _3696;
  int16_t _3698 = _3686 + _3697;
  int16_t _3699 = _3684 + _3698;
  int16_t _3700 = _3682 + _3699;
  int16_t _3701 = _3680 + _3700;
  int16_t _3702 = _3678 + _3701;
  int16_t _3703 = _3676 + _3702;
  int16_t _3704 = _3674 + _3703;
  int16_t _3705 = _3672 + _3704;
  int16_t _3706 = _3670 + _3705;
  int16_t _3707 = _3668 + _3706;
  int16_t _3708 = _3666 + _3707;
  int16_t _3709 = _3664 + _3708;
  int16_t _3710 = _3662 + _3709;
  int16_t _3711 = _3660 + _3710;
  int16_t _3712 = _3658 + _3711;
  int16_t _3713 = _3656 + _3712;
  int16_t _3714 = _3654 + _3713;
  int16_t _3715 = _3652 + _3714;
  int16_t _3716 = _3650 + _3715;
  int16_t _3717 = _3648 + _3716;
  int16_t _3718 = _3646 + _3717;
  int16_t _3719 = _3644 + _3718;
  int16_t _3720 = _3642 + _3719;
  int16_t _3721 = _3640 + _3720;
  int16_t _3722 = _3638 + _3721;
  int16_t _3723 = _3636 + _3722;
  int16_t _3724 = _3634 + _3723;
  int16_t _3725 = _conv_stencil_11 + _3724;
  int16_t _3726 = _3632 + _3725;
  return _3726;
}

//store is: conv.stencil(conv_s1_x_11, conv_s1_y_11, 11) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_11, conv_s1_y_11)*(int16)14) + (conv.stencil(conv_s1_x_11, conv_s1_y_11, 11) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_11, conv_s1_y_11)*(int16)46) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_11, conv_s1_y_11)*(int16)78) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_11, conv_s1_y_11)*(int16)110) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_11, conv_s1_y_11)*(int16)142) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_11, conv_s1_y_11)*(int16)174) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_11, conv_s1_y_11)*(int16)206) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_11, conv_s1_y_11)*(int16)238) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_11, conv_s1_y_11)*(int16)270) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_11, conv_s1_y_11)*(int16)302) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_11, conv_s1_y_11)*(int16)334) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_11, conv_s1_y_11)*(int16)366) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_11, conv_s1_y_11)*(int16)398) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_11, conv_s1_y_11)*(int16)430) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_11, conv_s1_y_11)*(int16)462) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_11, conv_s1_y_11)*(int16)494) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_11, conv_s1_y_11)*(int16)526) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_11, conv_s1_y_11)*(int16)558) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_11, conv_s1_y_11)*(int16)590) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_11, conv_s1_y_11)*(int16)622) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_11, conv_s1_y_11)*(int16)654) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_11, conv_s1_y_11)*(int16)686) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_11, conv_s1_y_11)*(int16)718) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_11, conv_s1_y_11)*(int16)750) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_11, conv_s1_y_11)*(int16)782) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_11, conv_s1_y_11)*(int16)814) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_11, conv_s1_y_11)*(int16)846) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_11, conv_s1_y_11)*(int16)878) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_11, conv_s1_y_11)*(int16)910) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_11, conv_s1_y_11)*(int16)942) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_11, conv_s1_y_11)*(int16)1006) + (hw_input_global_wrapper.stencil(30, conv_s1_x_11, conv_s1_y_11)*(int16)974)))))))))))))))))))))))))))))))))
hw_uint<16> hcompute_conv_stencil_12(hw_uint<16>& conv_stencil, hw_uint<512>& hw_input_global_wrapper_stencil) {
  int16_t _conv_stencil_12 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_353 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_354 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_355 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_356 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_357 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_358 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_359 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_360 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_input_global_wrapper_stencil_361 = (int16_t) hw_input_global_wrapper_stencil.extract<128, 143>();
  int16_t _hw_input_global_wrapper_stencil_362 = (int16_t) hw_input_global_wrapper_stencil.extract<144, 159>();
  int16_t _hw_input_global_wrapper_stencil_363 = (int16_t) hw_input_global_wrapper_stencil.extract<160, 175>();
  int16_t _hw_input_global_wrapper_stencil_364 = (int16_t) hw_input_global_wrapper_stencil.extract<176, 191>();
  int16_t _hw_input_global_wrapper_stencil_365 = (int16_t) hw_input_global_wrapper_stencil.extract<192, 207>();
  int16_t _hw_input_global_wrapper_stencil_366 = (int16_t) hw_input_global_wrapper_stencil.extract<208, 223>();
  int16_t _hw_input_global_wrapper_stencil_367 = (int16_t) hw_input_global_wrapper_stencil.extract<224, 239>();
  int16_t _hw_input_global_wrapper_stencil_368 = (int16_t) hw_input_global_wrapper_stencil.extract<240, 255>();
  int16_t _hw_input_global_wrapper_stencil_369 = (int16_t) hw_input_global_wrapper_stencil.extract<256, 271>();
  int16_t _hw_input_global_wrapper_stencil_370 = (int16_t) hw_input_global_wrapper_stencil.extract<272, 287>();
  int16_t _hw_input_global_wrapper_stencil_371 = (int16_t) hw_input_global_wrapper_stencil.extract<288, 303>();
  int16_t _hw_input_global_wrapper_stencil_372 = (int16_t) hw_input_global_wrapper_stencil.extract<304, 319>();
  int16_t _hw_input_global_wrapper_stencil_373 = (int16_t) hw_input_global_wrapper_stencil.extract<320, 335>();
  int16_t _hw_input_global_wrapper_stencil_374 = (int16_t) hw_input_global_wrapper_stencil.extract<336, 351>();
  int16_t _hw_input_global_wrapper_stencil_375 = (int16_t) hw_input_global_wrapper_stencil.extract<352, 367>();
  int16_t _hw_input_global_wrapper_stencil_376 = (int16_t) hw_input_global_wrapper_stencil.extract<368, 383>();
  int16_t _hw_input_global_wrapper_stencil_377 = (int16_t) hw_input_global_wrapper_stencil.extract<384, 399>();
  int16_t _hw_input_global_wrapper_stencil_378 = (int16_t) hw_input_global_wrapper_stencil.extract<400, 415>();
  int16_t _hw_input_global_wrapper_stencil_379 = (int16_t) hw_input_global_wrapper_stencil.extract<416, 431>();
  int16_t _hw_input_global_wrapper_stencil_380 = (int16_t) hw_input_global_wrapper_stencil.extract<432, 447>();
  int16_t _hw_input_global_wrapper_stencil_381 = (int16_t) hw_input_global_wrapper_stencil.extract<448, 463>();
  int16_t _hw_input_global_wrapper_stencil_382 = (int16_t) hw_input_global_wrapper_stencil.extract<464, 479>();
  int16_t _hw_input_global_wrapper_stencil_383 = (int16_t) hw_input_global_wrapper_stencil.extract<480, 495>();
  int16_t _hw_input_global_wrapper_stencil_384 = (int16_t) hw_input_global_wrapper_stencil.extract<496, 511>();

  int16_t _3952 = (int16_t)(14);
  int16_t _3953 = _hw_input_global_wrapper_stencil_353 * _3952;
  int16_t _3954 = (int16_t)(46);
  int16_t _3955 = _hw_input_global_wrapper_stencil_354 * _3954;
  int16_t _3956 = (int16_t)(78);
  int16_t _3957 = _hw_input_global_wrapper_stencil_355 * _3956;
  int16_t _3958 = (int16_t)(110);
  int16_t _3959 = _hw_input_global_wrapper_stencil_356 * _3958;
  int16_t _3960 = (int16_t)(142);
  int16_t _3961 = _hw_input_global_wrapper_stencil_357 * _3960;
  int16_t _3962 = (int16_t)(174);
  int16_t _3963 = _hw_input_global_wrapper_stencil_358 * _3962;
  int16_t _3964 = (int16_t)(206);
  int16_t _3965 = _hw_input_global_wrapper_stencil_359 * _3964;
  int16_t _3966 = (int16_t)(238);
  int16_t _3967 = _hw_input_global_wrapper_stencil_360 * _3966;
  int16_t _3968 = (int16_t)(270);
  int16_t _3969 = _hw_input_global_wrapper_stencil_361 * _3968;
  int16_t _3970 = (int16_t)(302);
  int16_t _3971 = _hw_input_global_wrapper_stencil_362 * _3970;
  int16_t _3972 = (int16_t)(334);
  int16_t _3973 = _hw_input_global_wrapper_stencil_363 * _3972;
  int16_t _3974 = (int16_t)(366);
  int16_t _3975 = _hw_input_global_wrapper_stencil_364 * _3974;
  int16_t _3976 = (int16_t)(398);
  int16_t _3977 = _hw_input_global_wrapper_stencil_365 * _3976;
  int16_t _3978 = (int16_t)(430);
  int16_t _3979 = _hw_input_global_wrapper_stencil_366 * _3978;
  int16_t _3980 = (int16_t)(462);
  int16_t _3981 = _hw_input_global_wrapper_stencil_367 * _3980;
  int16_t _3982 = (int16_t)(494);
  int16_t _3983 = _hw_input_global_wrapper_stencil_368 * _3982;
  int16_t _3984 = (int16_t)(526);
  int16_t _3985 = _hw_input_global_wrapper_stencil_369 * _3984;
  int16_t _3986 = (int16_t)(558);
  int16_t _3987 = _hw_input_global_wrapper_stencil_370 * _3986;
  int16_t _3988 = (int16_t)(590);
  int16_t _3989 = _hw_input_global_wrapper_stencil_371 * _3988;
  int16_t _3990 = (int16_t)(622);
  int16_t _3991 = _hw_input_global_wrapper_stencil_372 * _3990;
  int16_t _3992 = (int16_t)(654);
  int16_t _3993 = _hw_input_global_wrapper_stencil_373 * _3992;
  int16_t _3994 = (int16_t)(686);
  int16_t _3995 = _hw_input_global_wrapper_stencil_374 * _3994;
  int16_t _3996 = (int16_t)(718);
  int16_t _3997 = _hw_input_global_wrapper_stencil_375 * _3996;
  int16_t _3998 = (int16_t)(750);
  int16_t _3999 = _hw_input_global_wrapper_stencil_376 * _3998;
  int16_t _4000 = (int16_t)(782);
  int16_t _4001 = _hw_input_global_wrapper_stencil_377 * _4000;
  int16_t _4002 = (int16_t)(814);
  int16_t _4003 = _hw_input_global_wrapper_stencil_378 * _4002;
  int16_t _4004 = (int16_t)(846);
  int16_t _4005 = _hw_input_global_wrapper_stencil_379 * _4004;
  int16_t _4006 = (int16_t)(878);
  int16_t _4007 = _hw_input_global_wrapper_stencil_380 * _4006;
  int16_t _4008 = (int16_t)(910);
  int16_t _4009 = _hw_input_global_wrapper_stencil_381 * _4008;
  int16_t _4010 = (int16_t)(942);
  int16_t _4011 = _hw_input_global_wrapper_stencil_382 * _4010;
  int16_t _4012 = (int16_t)(1006);
  int16_t _4013 = _hw_input_global_wrapper_stencil_383 * _4012;
  int16_t _4014 = (int16_t)(974);
  int16_t _4015 = _hw_input_global_wrapper_stencil_384 * _4014;
  int16_t _4016 = _4013 + _4015;
  int16_t _4017 = _4011 + _4016;
  int16_t _4018 = _4009 + _4017;
  int16_t _4019 = _4007 + _4018;
  int16_t _4020 = _4005 + _4019;
  int16_t _4021 = _4003 + _4020;
  int16_t _4022 = _4001 + _4021;
  int16_t _4023 = _3999 + _4022;
  int16_t _4024 = _3997 + _4023;
  int16_t _4025 = _3995 + _4024;
  int16_t _4026 = _3993 + _4025;
  int16_t _4027 = _3991 + _4026;
  int16_t _4028 = _3989 + _4027;
  int16_t _4029 = _3987 + _4028;
  int16_t _4030 = _3985 + _4029;
  int16_t _4031 = _3983 + _4030;
  int16_t _4032 = _3981 + _4031;
  int16_t _4033 = _3979 + _4032;
  int16_t _4034 = _3977 + _4033;
  int16_t _4035 = _3975 + _4034;
  int16_t _4036 = _3973 + _4035;
  int16_t _4037 = _3971 + _4036;
  int16_t _4038 = _3969 + _4037;
  int16_t _4039 = _3967 + _4038;
  int16_t _4040 = _3965 + _4039;
  int16_t _4041 = _3963 + _4040;
  int16_t _4042 = _3961 + _4041;
  int16_t _4043 = _3959 + _4042;
  int16_t _4044 = _3957 + _4043;
  int16_t _4045 = _3955 + _4044;
  int16_t _4046 = _conv_stencil_12 + _4045;
  int16_t _4047 = _3953 + _4046;
  return _4047;
}

//store is: conv.stencil(conv_s1_x_12, conv_s1_y_12, 12) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_12, conv_s1_y_12)*(int16)15) + (conv.stencil(conv_s1_x_12, conv_s1_y_12, 12) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_12, conv_s1_y_12)*(int16)47) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_12, conv_s1_y_12)*(int16)79) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_12, conv_s1_y_12)*(int16)111) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_12, conv_s1_y_12)*(int16)143) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_12, conv_s1_y_12)*(int16)175) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_12, conv_s1_y_12)*(int16)207) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_12, conv_s1_y_12)*(int16)239) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_12, conv_s1_y_12)*(int16)271) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_12, conv_s1_y_12)*(int16)303) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_12, conv_s1_y_12)*(int16)335) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_12, conv_s1_y_12)*(int16)367) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_12, conv_s1_y_12)*(int16)399) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_12, conv_s1_y_12)*(int16)431) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_12, conv_s1_y_12)*(int16)463) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_12, conv_s1_y_12)*(int16)495) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_12, conv_s1_y_12)*(int16)527) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_12, conv_s1_y_12)*(int16)559) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_12, conv_s1_y_12)*(int16)591) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_12, conv_s1_y_12)*(int16)623) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_12, conv_s1_y_12)*(int16)655) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_12, conv_s1_y_12)*(int16)687) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_12, conv_s1_y_12)*(int16)719) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_12, conv_s1_y_12)*(int16)751) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_12, conv_s1_y_12)*(int16)783) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_12, conv_s1_y_12)*(int16)815) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_12, conv_s1_y_12)*(int16)847) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_12, conv_s1_y_12)*(int16)879) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_12, conv_s1_y_12)*(int16)911) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_12, conv_s1_y_12)*(int16)943) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_12, conv_s1_y_12)*(int16)1007) + (hw_input_global_wrapper.stencil(30, conv_s1_x_12, conv_s1_y_12)*(int16)975)))))))))))))))))))))))))))))))))
hw_uint<16> hcompute_conv_stencil_13(hw_uint<16>& conv_stencil, hw_uint<512>& hw_input_global_wrapper_stencil) {
  int16_t _conv_stencil_13 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_385 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_386 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_387 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_388 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_389 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_390 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_391 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_392 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_input_global_wrapper_stencil_393 = (int16_t) hw_input_global_wrapper_stencil.extract<128, 143>();
  int16_t _hw_input_global_wrapper_stencil_394 = (int16_t) hw_input_global_wrapper_stencil.extract<144, 159>();
  int16_t _hw_input_global_wrapper_stencil_395 = (int16_t) hw_input_global_wrapper_stencil.extract<160, 175>();
  int16_t _hw_input_global_wrapper_stencil_396 = (int16_t) hw_input_global_wrapper_stencil.extract<176, 191>();
  int16_t _hw_input_global_wrapper_stencil_397 = (int16_t) hw_input_global_wrapper_stencil.extract<192, 207>();
  int16_t _hw_input_global_wrapper_stencil_398 = (int16_t) hw_input_global_wrapper_stencil.extract<208, 223>();
  int16_t _hw_input_global_wrapper_stencil_399 = (int16_t) hw_input_global_wrapper_stencil.extract<224, 239>();
  int16_t _hw_input_global_wrapper_stencil_400 = (int16_t) hw_input_global_wrapper_stencil.extract<240, 255>();
  int16_t _hw_input_global_wrapper_stencil_401 = (int16_t) hw_input_global_wrapper_stencil.extract<256, 271>();
  int16_t _hw_input_global_wrapper_stencil_402 = (int16_t) hw_input_global_wrapper_stencil.extract<272, 287>();
  int16_t _hw_input_global_wrapper_stencil_403 = (int16_t) hw_input_global_wrapper_stencil.extract<288, 303>();
  int16_t _hw_input_global_wrapper_stencil_404 = (int16_t) hw_input_global_wrapper_stencil.extract<304, 319>();
  int16_t _hw_input_global_wrapper_stencil_405 = (int16_t) hw_input_global_wrapper_stencil.extract<320, 335>();
  int16_t _hw_input_global_wrapper_stencil_406 = (int16_t) hw_input_global_wrapper_stencil.extract<336, 351>();
  int16_t _hw_input_global_wrapper_stencil_407 = (int16_t) hw_input_global_wrapper_stencil.extract<352, 367>();
  int16_t _hw_input_global_wrapper_stencil_408 = (int16_t) hw_input_global_wrapper_stencil.extract<368, 383>();
  int16_t _hw_input_global_wrapper_stencil_409 = (int16_t) hw_input_global_wrapper_stencil.extract<384, 399>();
  int16_t _hw_input_global_wrapper_stencil_410 = (int16_t) hw_input_global_wrapper_stencil.extract<400, 415>();
  int16_t _hw_input_global_wrapper_stencil_411 = (int16_t) hw_input_global_wrapper_stencil.extract<416, 431>();
  int16_t _hw_input_global_wrapper_stencil_412 = (int16_t) hw_input_global_wrapper_stencil.extract<432, 447>();
  int16_t _hw_input_global_wrapper_stencil_413 = (int16_t) hw_input_global_wrapper_stencil.extract<448, 463>();
  int16_t _hw_input_global_wrapper_stencil_414 = (int16_t) hw_input_global_wrapper_stencil.extract<464, 479>();
  int16_t _hw_input_global_wrapper_stencil_415 = (int16_t) hw_input_global_wrapper_stencil.extract<480, 495>();
  int16_t _hw_input_global_wrapper_stencil_416 = (int16_t) hw_input_global_wrapper_stencil.extract<496, 511>();

  int16_t _4273 = (int16_t)(15);
  int16_t _4274 = _hw_input_global_wrapper_stencil_385 * _4273;
  int16_t _4275 = (int16_t)(47);
  int16_t _4276 = _hw_input_global_wrapper_stencil_386 * _4275;
  int16_t _4277 = (int16_t)(79);
  int16_t _4278 = _hw_input_global_wrapper_stencil_387 * _4277;
  int16_t _4279 = (int16_t)(111);
  int16_t _4280 = _hw_input_global_wrapper_stencil_388 * _4279;
  int16_t _4281 = (int16_t)(143);
  int16_t _4282 = _hw_input_global_wrapper_stencil_389 * _4281;
  int16_t _4283 = (int16_t)(175);
  int16_t _4284 = _hw_input_global_wrapper_stencil_390 * _4283;
  int16_t _4285 = (int16_t)(207);
  int16_t _4286 = _hw_input_global_wrapper_stencil_391 * _4285;
  int16_t _4287 = (int16_t)(239);
  int16_t _4288 = _hw_input_global_wrapper_stencil_392 * _4287;
  int16_t _4289 = (int16_t)(271);
  int16_t _4290 = _hw_input_global_wrapper_stencil_393 * _4289;
  int16_t _4291 = (int16_t)(303);
  int16_t _4292 = _hw_input_global_wrapper_stencil_394 * _4291;
  int16_t _4293 = (int16_t)(335);
  int16_t _4294 = _hw_input_global_wrapper_stencil_395 * _4293;
  int16_t _4295 = (int16_t)(367);
  int16_t _4296 = _hw_input_global_wrapper_stencil_396 * _4295;
  int16_t _4297 = (int16_t)(399);
  int16_t _4298 = _hw_input_global_wrapper_stencil_397 * _4297;
  int16_t _4299 = (int16_t)(431);
  int16_t _4300 = _hw_input_global_wrapper_stencil_398 * _4299;
  int16_t _4301 = (int16_t)(463);
  int16_t _4302 = _hw_input_global_wrapper_stencil_399 * _4301;
  int16_t _4303 = (int16_t)(495);
  int16_t _4304 = _hw_input_global_wrapper_stencil_400 * _4303;
  int16_t _4305 = (int16_t)(527);
  int16_t _4306 = _hw_input_global_wrapper_stencil_401 * _4305;
  int16_t _4307 = (int16_t)(559);
  int16_t _4308 = _hw_input_global_wrapper_stencil_402 * _4307;
  int16_t _4309 = (int16_t)(591);
  int16_t _4310 = _hw_input_global_wrapper_stencil_403 * _4309;
  int16_t _4311 = (int16_t)(623);
  int16_t _4312 = _hw_input_global_wrapper_stencil_404 * _4311;
  int16_t _4313 = (int16_t)(655);
  int16_t _4314 = _hw_input_global_wrapper_stencil_405 * _4313;
  int16_t _4315 = (int16_t)(687);
  int16_t _4316 = _hw_input_global_wrapper_stencil_406 * _4315;
  int16_t _4317 = (int16_t)(719);
  int16_t _4318 = _hw_input_global_wrapper_stencil_407 * _4317;
  int16_t _4319 = (int16_t)(751);
  int16_t _4320 = _hw_input_global_wrapper_stencil_408 * _4319;
  int16_t _4321 = (int16_t)(783);
  int16_t _4322 = _hw_input_global_wrapper_stencil_409 * _4321;
  int16_t _4323 = (int16_t)(815);
  int16_t _4324 = _hw_input_global_wrapper_stencil_410 * _4323;
  int16_t _4325 = (int16_t)(847);
  int16_t _4326 = _hw_input_global_wrapper_stencil_411 * _4325;
  int16_t _4327 = (int16_t)(879);
  int16_t _4328 = _hw_input_global_wrapper_stencil_412 * _4327;
  int16_t _4329 = (int16_t)(911);
  int16_t _4330 = _hw_input_global_wrapper_stencil_413 * _4329;
  int16_t _4331 = (int16_t)(943);
  int16_t _4332 = _hw_input_global_wrapper_stencil_414 * _4331;
  int16_t _4333 = (int16_t)(1007);
  int16_t _4334 = _hw_input_global_wrapper_stencil_415 * _4333;
  int16_t _4335 = (int16_t)(975);
  int16_t _4336 = _hw_input_global_wrapper_stencil_416 * _4335;
  int16_t _4337 = _4334 + _4336;
  int16_t _4338 = _4332 + _4337;
  int16_t _4339 = _4330 + _4338;
  int16_t _4340 = _4328 + _4339;
  int16_t _4341 = _4326 + _4340;
  int16_t _4342 = _4324 + _4341;
  int16_t _4343 = _4322 + _4342;
  int16_t _4344 = _4320 + _4343;
  int16_t _4345 = _4318 + _4344;
  int16_t _4346 = _4316 + _4345;
  int16_t _4347 = _4314 + _4346;
  int16_t _4348 = _4312 + _4347;
  int16_t _4349 = _4310 + _4348;
  int16_t _4350 = _4308 + _4349;
  int16_t _4351 = _4306 + _4350;
  int16_t _4352 = _4304 + _4351;
  int16_t _4353 = _4302 + _4352;
  int16_t _4354 = _4300 + _4353;
  int16_t _4355 = _4298 + _4354;
  int16_t _4356 = _4296 + _4355;
  int16_t _4357 = _4294 + _4356;
  int16_t _4358 = _4292 + _4357;
  int16_t _4359 = _4290 + _4358;
  int16_t _4360 = _4288 + _4359;
  int16_t _4361 = _4286 + _4360;
  int16_t _4362 = _4284 + _4361;
  int16_t _4363 = _4282 + _4362;
  int16_t _4364 = _4280 + _4363;
  int16_t _4365 = _4278 + _4364;
  int16_t _4366 = _4276 + _4365;
  int16_t _4367 = _conv_stencil_13 + _4366;
  int16_t _4368 = _4274 + _4367;
  return _4368;
}

//store is: conv.stencil(conv_s1_x_13, conv_s1_y_13, 13) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_13, conv_s1_y_13)*(int16)16) + (conv.stencil(conv_s1_x_13, conv_s1_y_13, 13) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_13, conv_s1_y_13)*(int16)48) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_13, conv_s1_y_13)*(int16)80) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_13, conv_s1_y_13)*(int16)112) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_13, conv_s1_y_13)*(int16)144) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_13, conv_s1_y_13)*(int16)176) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_13, conv_s1_y_13)*(int16)208) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_13, conv_s1_y_13)*(int16)240) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_13, conv_s1_y_13)*(int16)272) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_13, conv_s1_y_13)*(int16)304) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_13, conv_s1_y_13)*(int16)336) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_13, conv_s1_y_13)*(int16)368) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_13, conv_s1_y_13)*(int16)400) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_13, conv_s1_y_13)*(int16)432) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_13, conv_s1_y_13)*(int16)464) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_13, conv_s1_y_13)*(int16)496) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_13, conv_s1_y_13)*(int16)528) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_13, conv_s1_y_13)*(int16)560) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_13, conv_s1_y_13)*(int16)592) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_13, conv_s1_y_13)*(int16)624) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_13, conv_s1_y_13)*(int16)656) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_13, conv_s1_y_13)*(int16)688) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_13, conv_s1_y_13)*(int16)720) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_13, conv_s1_y_13)*(int16)752) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_13, conv_s1_y_13)*(int16)784) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_13, conv_s1_y_13)*(int16)816) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_13, conv_s1_y_13)*(int16)848) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_13, conv_s1_y_13)*(int16)880) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_13, conv_s1_y_13)*(int16)912) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_13, conv_s1_y_13)*(int16)944) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_13, conv_s1_y_13)*(int16)1008) + (hw_input_global_wrapper.stencil(30, conv_s1_x_13, conv_s1_y_13)*(int16)976)))))))))))))))))))))))))))))))))
hw_uint<16> hcompute_conv_stencil_14(hw_uint<16>& conv_stencil, hw_uint<512>& hw_input_global_wrapper_stencil) {
  int16_t _conv_stencil_14 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_417 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_418 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_419 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_420 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_421 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_422 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_423 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_424 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_input_global_wrapper_stencil_425 = (int16_t) hw_input_global_wrapper_stencil.extract<128, 143>();
  int16_t _hw_input_global_wrapper_stencil_426 = (int16_t) hw_input_global_wrapper_stencil.extract<144, 159>();
  int16_t _hw_input_global_wrapper_stencil_427 = (int16_t) hw_input_global_wrapper_stencil.extract<160, 175>();
  int16_t _hw_input_global_wrapper_stencil_428 = (int16_t) hw_input_global_wrapper_stencil.extract<176, 191>();
  int16_t _hw_input_global_wrapper_stencil_429 = (int16_t) hw_input_global_wrapper_stencil.extract<192, 207>();
  int16_t _hw_input_global_wrapper_stencil_430 = (int16_t) hw_input_global_wrapper_stencil.extract<208, 223>();
  int16_t _hw_input_global_wrapper_stencil_431 = (int16_t) hw_input_global_wrapper_stencil.extract<224, 239>();
  int16_t _hw_input_global_wrapper_stencil_432 = (int16_t) hw_input_global_wrapper_stencil.extract<240, 255>();
  int16_t _hw_input_global_wrapper_stencil_433 = (int16_t) hw_input_global_wrapper_stencil.extract<256, 271>();
  int16_t _hw_input_global_wrapper_stencil_434 = (int16_t) hw_input_global_wrapper_stencil.extract<272, 287>();
  int16_t _hw_input_global_wrapper_stencil_435 = (int16_t) hw_input_global_wrapper_stencil.extract<288, 303>();
  int16_t _hw_input_global_wrapper_stencil_436 = (int16_t) hw_input_global_wrapper_stencil.extract<304, 319>();
  int16_t _hw_input_global_wrapper_stencil_437 = (int16_t) hw_input_global_wrapper_stencil.extract<320, 335>();
  int16_t _hw_input_global_wrapper_stencil_438 = (int16_t) hw_input_global_wrapper_stencil.extract<336, 351>();
  int16_t _hw_input_global_wrapper_stencil_439 = (int16_t) hw_input_global_wrapper_stencil.extract<352, 367>();
  int16_t _hw_input_global_wrapper_stencil_440 = (int16_t) hw_input_global_wrapper_stencil.extract<368, 383>();
  int16_t _hw_input_global_wrapper_stencil_441 = (int16_t) hw_input_global_wrapper_stencil.extract<384, 399>();
  int16_t _hw_input_global_wrapper_stencil_442 = (int16_t) hw_input_global_wrapper_stencil.extract<400, 415>();
  int16_t _hw_input_global_wrapper_stencil_443 = (int16_t) hw_input_global_wrapper_stencil.extract<416, 431>();
  int16_t _hw_input_global_wrapper_stencil_444 = (int16_t) hw_input_global_wrapper_stencil.extract<432, 447>();
  int16_t _hw_input_global_wrapper_stencil_445 = (int16_t) hw_input_global_wrapper_stencil.extract<448, 463>();
  int16_t _hw_input_global_wrapper_stencil_446 = (int16_t) hw_input_global_wrapper_stencil.extract<464, 479>();
  int16_t _hw_input_global_wrapper_stencil_447 = (int16_t) hw_input_global_wrapper_stencil.extract<480, 495>();
  int16_t _hw_input_global_wrapper_stencil_448 = (int16_t) hw_input_global_wrapper_stencil.extract<496, 511>();

  int16_t _4594 = (int16_t)(16);
  int16_t _4595 = _hw_input_global_wrapper_stencil_417 * _4594;
  int16_t _4596 = (int16_t)(48);
  int16_t _4597 = _hw_input_global_wrapper_stencil_418 * _4596;
  int16_t _4598 = (int16_t)(80);
  int16_t _4599 = _hw_input_global_wrapper_stencil_419 * _4598;
  int16_t _4600 = (int16_t)(112);
  int16_t _4601 = _hw_input_global_wrapper_stencil_420 * _4600;
  int16_t _4602 = (int16_t)(144);
  int16_t _4603 = _hw_input_global_wrapper_stencil_421 * _4602;
  int16_t _4604 = (int16_t)(176);
  int16_t _4605 = _hw_input_global_wrapper_stencil_422 * _4604;
  int16_t _4606 = (int16_t)(208);
  int16_t _4607 = _hw_input_global_wrapper_stencil_423 * _4606;
  int16_t _4608 = (int16_t)(240);
  int16_t _4609 = _hw_input_global_wrapper_stencil_424 * _4608;
  int16_t _4610 = (int16_t)(272);
  int16_t _4611 = _hw_input_global_wrapper_stencil_425 * _4610;
  int16_t _4612 = (int16_t)(304);
  int16_t _4613 = _hw_input_global_wrapper_stencil_426 * _4612;
  int16_t _4614 = (int16_t)(336);
  int16_t _4615 = _hw_input_global_wrapper_stencil_427 * _4614;
  int16_t _4616 = (int16_t)(368);
  int16_t _4617 = _hw_input_global_wrapper_stencil_428 * _4616;
  int16_t _4618 = (int16_t)(400);
  int16_t _4619 = _hw_input_global_wrapper_stencil_429 * _4618;
  int16_t _4620 = (int16_t)(432);
  int16_t _4621 = _hw_input_global_wrapper_stencil_430 * _4620;
  int16_t _4622 = (int16_t)(464);
  int16_t _4623 = _hw_input_global_wrapper_stencil_431 * _4622;
  int16_t _4624 = (int16_t)(496);
  int16_t _4625 = _hw_input_global_wrapper_stencil_432 * _4624;
  int16_t _4626 = (int16_t)(528);
  int16_t _4627 = _hw_input_global_wrapper_stencil_433 * _4626;
  int16_t _4628 = (int16_t)(560);
  int16_t _4629 = _hw_input_global_wrapper_stencil_434 * _4628;
  int16_t _4630 = (int16_t)(592);
  int16_t _4631 = _hw_input_global_wrapper_stencil_435 * _4630;
  int16_t _4632 = (int16_t)(624);
  int16_t _4633 = _hw_input_global_wrapper_stencil_436 * _4632;
  int16_t _4634 = (int16_t)(656);
  int16_t _4635 = _hw_input_global_wrapper_stencil_437 * _4634;
  int16_t _4636 = (int16_t)(688);
  int16_t _4637 = _hw_input_global_wrapper_stencil_438 * _4636;
  int16_t _4638 = (int16_t)(720);
  int16_t _4639 = _hw_input_global_wrapper_stencil_439 * _4638;
  int16_t _4640 = (int16_t)(752);
  int16_t _4641 = _hw_input_global_wrapper_stencil_440 * _4640;
  int16_t _4642 = (int16_t)(784);
  int16_t _4643 = _hw_input_global_wrapper_stencil_441 * _4642;
  int16_t _4644 = (int16_t)(816);
  int16_t _4645 = _hw_input_global_wrapper_stencil_442 * _4644;
  int16_t _4646 = (int16_t)(848);
  int16_t _4647 = _hw_input_global_wrapper_stencil_443 * _4646;
  int16_t _4648 = (int16_t)(880);
  int16_t _4649 = _hw_input_global_wrapper_stencil_444 * _4648;
  int16_t _4650 = (int16_t)(912);
  int16_t _4651 = _hw_input_global_wrapper_stencil_445 * _4650;
  int16_t _4652 = (int16_t)(944);
  int16_t _4653 = _hw_input_global_wrapper_stencil_446 * _4652;
  int16_t _4654 = (int16_t)(1008);
  int16_t _4655 = _hw_input_global_wrapper_stencil_447 * _4654;
  int16_t _4656 = (int16_t)(976);
  int16_t _4657 = _hw_input_global_wrapper_stencil_448 * _4656;
  int16_t _4658 = _4655 + _4657;
  int16_t _4659 = _4653 + _4658;
  int16_t _4660 = _4651 + _4659;
  int16_t _4661 = _4649 + _4660;
  int16_t _4662 = _4647 + _4661;
  int16_t _4663 = _4645 + _4662;
  int16_t _4664 = _4643 + _4663;
  int16_t _4665 = _4641 + _4664;
  int16_t _4666 = _4639 + _4665;
  int16_t _4667 = _4637 + _4666;
  int16_t _4668 = _4635 + _4667;
  int16_t _4669 = _4633 + _4668;
  int16_t _4670 = _4631 + _4669;
  int16_t _4671 = _4629 + _4670;
  int16_t _4672 = _4627 + _4671;
  int16_t _4673 = _4625 + _4672;
  int16_t _4674 = _4623 + _4673;
  int16_t _4675 = _4621 + _4674;
  int16_t _4676 = _4619 + _4675;
  int16_t _4677 = _4617 + _4676;
  int16_t _4678 = _4615 + _4677;
  int16_t _4679 = _4613 + _4678;
  int16_t _4680 = _4611 + _4679;
  int16_t _4681 = _4609 + _4680;
  int16_t _4682 = _4607 + _4681;
  int16_t _4683 = _4605 + _4682;
  int16_t _4684 = _4603 + _4683;
  int16_t _4685 = _4601 + _4684;
  int16_t _4686 = _4599 + _4685;
  int16_t _4687 = _4597 + _4686;
  int16_t _4688 = _conv_stencil_14 + _4687;
  int16_t _4689 = _4595 + _4688;
  return _4689;
}

//store is: conv.stencil(conv_s1_x_14, conv_s1_y_14, 14) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_14, conv_s1_y_14)*(int16)17) + (conv.stencil(conv_s1_x_14, conv_s1_y_14, 14) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_14, conv_s1_y_14)*(int16)49) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_14, conv_s1_y_14)*(int16)81) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_14, conv_s1_y_14)*(int16)113) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_14, conv_s1_y_14)*(int16)145) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_14, conv_s1_y_14)*(int16)177) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_14, conv_s1_y_14)*(int16)209) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_14, conv_s1_y_14)*(int16)241) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_14, conv_s1_y_14)*(int16)273) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_14, conv_s1_y_14)*(int16)305) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_14, conv_s1_y_14)*(int16)337) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_14, conv_s1_y_14)*(int16)369) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_14, conv_s1_y_14)*(int16)401) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_14, conv_s1_y_14)*(int16)433) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_14, conv_s1_y_14)*(int16)465) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_14, conv_s1_y_14)*(int16)497) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_14, conv_s1_y_14)*(int16)529) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_14, conv_s1_y_14)*(int16)561) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_14, conv_s1_y_14)*(int16)593) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_14, conv_s1_y_14)*(int16)625) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_14, conv_s1_y_14)*(int16)657) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_14, conv_s1_y_14)*(int16)689) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_14, conv_s1_y_14)*(int16)721) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_14, conv_s1_y_14)*(int16)753) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_14, conv_s1_y_14)*(int16)785) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_14, conv_s1_y_14)*(int16)817) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_14, conv_s1_y_14)*(int16)849) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_14, conv_s1_y_14)*(int16)881) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_14, conv_s1_y_14)*(int16)913) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_14, conv_s1_y_14)*(int16)945) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_14, conv_s1_y_14)*(int16)1009) + (hw_input_global_wrapper.stencil(30, conv_s1_x_14, conv_s1_y_14)*(int16)977)))))))))))))))))))))))))))))))))
hw_uint<16> hcompute_conv_stencil_15(hw_uint<16>& conv_stencil, hw_uint<512>& hw_input_global_wrapper_stencil) {
  int16_t _conv_stencil_15 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_449 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_450 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_451 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_452 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_453 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_454 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_455 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_456 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_input_global_wrapper_stencil_457 = (int16_t) hw_input_global_wrapper_stencil.extract<128, 143>();
  int16_t _hw_input_global_wrapper_stencil_458 = (int16_t) hw_input_global_wrapper_stencil.extract<144, 159>();
  int16_t _hw_input_global_wrapper_stencil_459 = (int16_t) hw_input_global_wrapper_stencil.extract<160, 175>();
  int16_t _hw_input_global_wrapper_stencil_460 = (int16_t) hw_input_global_wrapper_stencil.extract<176, 191>();
  int16_t _hw_input_global_wrapper_stencil_461 = (int16_t) hw_input_global_wrapper_stencil.extract<192, 207>();
  int16_t _hw_input_global_wrapper_stencil_462 = (int16_t) hw_input_global_wrapper_stencil.extract<208, 223>();
  int16_t _hw_input_global_wrapper_stencil_463 = (int16_t) hw_input_global_wrapper_stencil.extract<224, 239>();
  int16_t _hw_input_global_wrapper_stencil_464 = (int16_t) hw_input_global_wrapper_stencil.extract<240, 255>();
  int16_t _hw_input_global_wrapper_stencil_465 = (int16_t) hw_input_global_wrapper_stencil.extract<256, 271>();
  int16_t _hw_input_global_wrapper_stencil_466 = (int16_t) hw_input_global_wrapper_stencil.extract<272, 287>();
  int16_t _hw_input_global_wrapper_stencil_467 = (int16_t) hw_input_global_wrapper_stencil.extract<288, 303>();
  int16_t _hw_input_global_wrapper_stencil_468 = (int16_t) hw_input_global_wrapper_stencil.extract<304, 319>();
  int16_t _hw_input_global_wrapper_stencil_469 = (int16_t) hw_input_global_wrapper_stencil.extract<320, 335>();
  int16_t _hw_input_global_wrapper_stencil_470 = (int16_t) hw_input_global_wrapper_stencil.extract<336, 351>();
  int16_t _hw_input_global_wrapper_stencil_471 = (int16_t) hw_input_global_wrapper_stencil.extract<352, 367>();
  int16_t _hw_input_global_wrapper_stencil_472 = (int16_t) hw_input_global_wrapper_stencil.extract<368, 383>();
  int16_t _hw_input_global_wrapper_stencil_473 = (int16_t) hw_input_global_wrapper_stencil.extract<384, 399>();
  int16_t _hw_input_global_wrapper_stencil_474 = (int16_t) hw_input_global_wrapper_stencil.extract<400, 415>();
  int16_t _hw_input_global_wrapper_stencil_475 = (int16_t) hw_input_global_wrapper_stencil.extract<416, 431>();
  int16_t _hw_input_global_wrapper_stencil_476 = (int16_t) hw_input_global_wrapper_stencil.extract<432, 447>();
  int16_t _hw_input_global_wrapper_stencil_477 = (int16_t) hw_input_global_wrapper_stencil.extract<448, 463>();
  int16_t _hw_input_global_wrapper_stencil_478 = (int16_t) hw_input_global_wrapper_stencil.extract<464, 479>();
  int16_t _hw_input_global_wrapper_stencil_479 = (int16_t) hw_input_global_wrapper_stencil.extract<480, 495>();
  int16_t _hw_input_global_wrapper_stencil_480 = (int16_t) hw_input_global_wrapper_stencil.extract<496, 511>();

  int16_t _4915 = (int16_t)(17);
  int16_t _4916 = _hw_input_global_wrapper_stencil_449 * _4915;
  int16_t _4917 = (int16_t)(49);
  int16_t _4918 = _hw_input_global_wrapper_stencil_450 * _4917;
  int16_t _4919 = (int16_t)(81);
  int16_t _4920 = _hw_input_global_wrapper_stencil_451 * _4919;
  int16_t _4921 = (int16_t)(113);
  int16_t _4922 = _hw_input_global_wrapper_stencil_452 * _4921;
  int16_t _4923 = (int16_t)(145);
  int16_t _4924 = _hw_input_global_wrapper_stencil_453 * _4923;
  int16_t _4925 = (int16_t)(177);
  int16_t _4926 = _hw_input_global_wrapper_stencil_454 * _4925;
  int16_t _4927 = (int16_t)(209);
  int16_t _4928 = _hw_input_global_wrapper_stencil_455 * _4927;
  int16_t _4929 = (int16_t)(241);
  int16_t _4930 = _hw_input_global_wrapper_stencil_456 * _4929;
  int16_t _4931 = (int16_t)(273);
  int16_t _4932 = _hw_input_global_wrapper_stencil_457 * _4931;
  int16_t _4933 = (int16_t)(305);
  int16_t _4934 = _hw_input_global_wrapper_stencil_458 * _4933;
  int16_t _4935 = (int16_t)(337);
  int16_t _4936 = _hw_input_global_wrapper_stencil_459 * _4935;
  int16_t _4937 = (int16_t)(369);
  int16_t _4938 = _hw_input_global_wrapper_stencil_460 * _4937;
  int16_t _4939 = (int16_t)(401);
  int16_t _4940 = _hw_input_global_wrapper_stencil_461 * _4939;
  int16_t _4941 = (int16_t)(433);
  int16_t _4942 = _hw_input_global_wrapper_stencil_462 * _4941;
  int16_t _4943 = (int16_t)(465);
  int16_t _4944 = _hw_input_global_wrapper_stencil_463 * _4943;
  int16_t _4945 = (int16_t)(497);
  int16_t _4946 = _hw_input_global_wrapper_stencil_464 * _4945;
  int16_t _4947 = (int16_t)(529);
  int16_t _4948 = _hw_input_global_wrapper_stencil_465 * _4947;
  int16_t _4949 = (int16_t)(561);
  int16_t _4950 = _hw_input_global_wrapper_stencil_466 * _4949;
  int16_t _4951 = (int16_t)(593);
  int16_t _4952 = _hw_input_global_wrapper_stencil_467 * _4951;
  int16_t _4953 = (int16_t)(625);
  int16_t _4954 = _hw_input_global_wrapper_stencil_468 * _4953;
  int16_t _4955 = (int16_t)(657);
  int16_t _4956 = _hw_input_global_wrapper_stencil_469 * _4955;
  int16_t _4957 = (int16_t)(689);
  int16_t _4958 = _hw_input_global_wrapper_stencil_470 * _4957;
  int16_t _4959 = (int16_t)(721);
  int16_t _4960 = _hw_input_global_wrapper_stencil_471 * _4959;
  int16_t _4961 = (int16_t)(753);
  int16_t _4962 = _hw_input_global_wrapper_stencil_472 * _4961;
  int16_t _4963 = (int16_t)(785);
  int16_t _4964 = _hw_input_global_wrapper_stencil_473 * _4963;
  int16_t _4965 = (int16_t)(817);
  int16_t _4966 = _hw_input_global_wrapper_stencil_474 * _4965;
  int16_t _4967 = (int16_t)(849);
  int16_t _4968 = _hw_input_global_wrapper_stencil_475 * _4967;
  int16_t _4969 = (int16_t)(881);
  int16_t _4970 = _hw_input_global_wrapper_stencil_476 * _4969;
  int16_t _4971 = (int16_t)(913);
  int16_t _4972 = _hw_input_global_wrapper_stencil_477 * _4971;
  int16_t _4973 = (int16_t)(945);
  int16_t _4974 = _hw_input_global_wrapper_stencil_478 * _4973;
  int16_t _4975 = (int16_t)(1009);
  int16_t _4976 = _hw_input_global_wrapper_stencil_479 * _4975;
  int16_t _4977 = (int16_t)(977);
  int16_t _4978 = _hw_input_global_wrapper_stencil_480 * _4977;
  int16_t _4979 = _4976 + _4978;
  int16_t _4980 = _4974 + _4979;
  int16_t _4981 = _4972 + _4980;
  int16_t _4982 = _4970 + _4981;
  int16_t _4983 = _4968 + _4982;
  int16_t _4984 = _4966 + _4983;
  int16_t _4985 = _4964 + _4984;
  int16_t _4986 = _4962 + _4985;
  int16_t _4987 = _4960 + _4986;
  int16_t _4988 = _4958 + _4987;
  int16_t _4989 = _4956 + _4988;
  int16_t _4990 = _4954 + _4989;
  int16_t _4991 = _4952 + _4990;
  int16_t _4992 = _4950 + _4991;
  int16_t _4993 = _4948 + _4992;
  int16_t _4994 = _4946 + _4993;
  int16_t _4995 = _4944 + _4994;
  int16_t _4996 = _4942 + _4995;
  int16_t _4997 = _4940 + _4996;
  int16_t _4998 = _4938 + _4997;
  int16_t _4999 = _4936 + _4998;
  int16_t _5000 = _4934 + _4999;
  int16_t _5001 = _4932 + _5000;
  int16_t _5002 = _4930 + _5001;
  int16_t _5003 = _4928 + _5002;
  int16_t _5004 = _4926 + _5003;
  int16_t _5005 = _4924 + _5004;
  int16_t _5006 = _4922 + _5005;
  int16_t _5007 = _4920 + _5006;
  int16_t _5008 = _4918 + _5007;
  int16_t _5009 = _conv_stencil_15 + _5008;
  int16_t _5010 = _4916 + _5009;
  return _5010;
}

//store is: conv.stencil(conv_s1_x_15, conv_s1_y_15, 15) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_15, conv_s1_y_15)*(int16)18) + (conv.stencil(conv_s1_x_15, conv_s1_y_15, 15) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_15, conv_s1_y_15)*(int16)50) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_15, conv_s1_y_15)*(int16)82) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_15, conv_s1_y_15)*(int16)114) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_15, conv_s1_y_15)*(int16)146) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_15, conv_s1_y_15)*(int16)178) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_15, conv_s1_y_15)*(int16)210) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_15, conv_s1_y_15)*(int16)242) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_15, conv_s1_y_15)*(int16)274) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_15, conv_s1_y_15)*(int16)306) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_15, conv_s1_y_15)*(int16)338) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_15, conv_s1_y_15)*(int16)370) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_15, conv_s1_y_15)*(int16)402) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_15, conv_s1_y_15)*(int16)434) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_15, conv_s1_y_15)*(int16)466) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_15, conv_s1_y_15)*(int16)498) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_15, conv_s1_y_15)*(int16)530) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_15, conv_s1_y_15)*(int16)562) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_15, conv_s1_y_15)*(int16)594) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_15, conv_s1_y_15)*(int16)626) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_15, conv_s1_y_15)*(int16)658) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_15, conv_s1_y_15)*(int16)690) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_15, conv_s1_y_15)*(int16)722) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_15, conv_s1_y_15)*(int16)754) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_15, conv_s1_y_15)*(int16)786) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_15, conv_s1_y_15)*(int16)818) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_15, conv_s1_y_15)*(int16)850) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_15, conv_s1_y_15)*(int16)882) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_15, conv_s1_y_15)*(int16)914) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_15, conv_s1_y_15)*(int16)946) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_15, conv_s1_y_15)*(int16)1010) + (hw_input_global_wrapper.stencil(30, conv_s1_x_15, conv_s1_y_15)*(int16)978)))))))))))))))))))))))))))))))))
hw_uint<16> hcompute_conv_stencil_16(hw_uint<16>& conv_stencil, hw_uint<512>& hw_input_global_wrapper_stencil) {
  int16_t _conv_stencil_16 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_481 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_482 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_483 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_484 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_485 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_486 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_487 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_488 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_input_global_wrapper_stencil_489 = (int16_t) hw_input_global_wrapper_stencil.extract<128, 143>();
  int16_t _hw_input_global_wrapper_stencil_490 = (int16_t) hw_input_global_wrapper_stencil.extract<144, 159>();
  int16_t _hw_input_global_wrapper_stencil_491 = (int16_t) hw_input_global_wrapper_stencil.extract<160, 175>();
  int16_t _hw_input_global_wrapper_stencil_492 = (int16_t) hw_input_global_wrapper_stencil.extract<176, 191>();
  int16_t _hw_input_global_wrapper_stencil_493 = (int16_t) hw_input_global_wrapper_stencil.extract<192, 207>();
  int16_t _hw_input_global_wrapper_stencil_494 = (int16_t) hw_input_global_wrapper_stencil.extract<208, 223>();
  int16_t _hw_input_global_wrapper_stencil_495 = (int16_t) hw_input_global_wrapper_stencil.extract<224, 239>();
  int16_t _hw_input_global_wrapper_stencil_496 = (int16_t) hw_input_global_wrapper_stencil.extract<240, 255>();
  int16_t _hw_input_global_wrapper_stencil_497 = (int16_t) hw_input_global_wrapper_stencil.extract<256, 271>();
  int16_t _hw_input_global_wrapper_stencil_498 = (int16_t) hw_input_global_wrapper_stencil.extract<272, 287>();
  int16_t _hw_input_global_wrapper_stencil_499 = (int16_t) hw_input_global_wrapper_stencil.extract<288, 303>();
  int16_t _hw_input_global_wrapper_stencil_500 = (int16_t) hw_input_global_wrapper_stencil.extract<304, 319>();
  int16_t _hw_input_global_wrapper_stencil_501 = (int16_t) hw_input_global_wrapper_stencil.extract<320, 335>();
  int16_t _hw_input_global_wrapper_stencil_502 = (int16_t) hw_input_global_wrapper_stencil.extract<336, 351>();
  int16_t _hw_input_global_wrapper_stencil_503 = (int16_t) hw_input_global_wrapper_stencil.extract<352, 367>();
  int16_t _hw_input_global_wrapper_stencil_504 = (int16_t) hw_input_global_wrapper_stencil.extract<368, 383>();
  int16_t _hw_input_global_wrapper_stencil_505 = (int16_t) hw_input_global_wrapper_stencil.extract<384, 399>();
  int16_t _hw_input_global_wrapper_stencil_506 = (int16_t) hw_input_global_wrapper_stencil.extract<400, 415>();
  int16_t _hw_input_global_wrapper_stencil_507 = (int16_t) hw_input_global_wrapper_stencil.extract<416, 431>();
  int16_t _hw_input_global_wrapper_stencil_508 = (int16_t) hw_input_global_wrapper_stencil.extract<432, 447>();
  int16_t _hw_input_global_wrapper_stencil_509 = (int16_t) hw_input_global_wrapper_stencil.extract<448, 463>();
  int16_t _hw_input_global_wrapper_stencil_510 = (int16_t) hw_input_global_wrapper_stencil.extract<464, 479>();
  int16_t _hw_input_global_wrapper_stencil_511 = (int16_t) hw_input_global_wrapper_stencil.extract<480, 495>();
  int16_t _hw_input_global_wrapper_stencil_512 = (int16_t) hw_input_global_wrapper_stencil.extract<496, 511>();

  int16_t _5236 = (int16_t)(18);
  int16_t _5237 = _hw_input_global_wrapper_stencil_481 * _5236;
  int16_t _5238 = (int16_t)(50);
  int16_t _5239 = _hw_input_global_wrapper_stencil_482 * _5238;
  int16_t _5240 = (int16_t)(82);
  int16_t _5241 = _hw_input_global_wrapper_stencil_483 * _5240;
  int16_t _5242 = (int16_t)(114);
  int16_t _5243 = _hw_input_global_wrapper_stencil_484 * _5242;
  int16_t _5244 = (int16_t)(146);
  int16_t _5245 = _hw_input_global_wrapper_stencil_485 * _5244;
  int16_t _5246 = (int16_t)(178);
  int16_t _5247 = _hw_input_global_wrapper_stencil_486 * _5246;
  int16_t _5248 = (int16_t)(210);
  int16_t _5249 = _hw_input_global_wrapper_stencil_487 * _5248;
  int16_t _5250 = (int16_t)(242);
  int16_t _5251 = _hw_input_global_wrapper_stencil_488 * _5250;
  int16_t _5252 = (int16_t)(274);
  int16_t _5253 = _hw_input_global_wrapper_stencil_489 * _5252;
  int16_t _5254 = (int16_t)(306);
  int16_t _5255 = _hw_input_global_wrapper_stencil_490 * _5254;
  int16_t _5256 = (int16_t)(338);
  int16_t _5257 = _hw_input_global_wrapper_stencil_491 * _5256;
  int16_t _5258 = (int16_t)(370);
  int16_t _5259 = _hw_input_global_wrapper_stencil_492 * _5258;
  int16_t _5260 = (int16_t)(402);
  int16_t _5261 = _hw_input_global_wrapper_stencil_493 * _5260;
  int16_t _5262 = (int16_t)(434);
  int16_t _5263 = _hw_input_global_wrapper_stencil_494 * _5262;
  int16_t _5264 = (int16_t)(466);
  int16_t _5265 = _hw_input_global_wrapper_stencil_495 * _5264;
  int16_t _5266 = (int16_t)(498);
  int16_t _5267 = _hw_input_global_wrapper_stencil_496 * _5266;
  int16_t _5268 = (int16_t)(530);
  int16_t _5269 = _hw_input_global_wrapper_stencil_497 * _5268;
  int16_t _5270 = (int16_t)(562);
  int16_t _5271 = _hw_input_global_wrapper_stencil_498 * _5270;
  int16_t _5272 = (int16_t)(594);
  int16_t _5273 = _hw_input_global_wrapper_stencil_499 * _5272;
  int16_t _5274 = (int16_t)(626);
  int16_t _5275 = _hw_input_global_wrapper_stencil_500 * _5274;
  int16_t _5276 = (int16_t)(658);
  int16_t _5277 = _hw_input_global_wrapper_stencil_501 * _5276;
  int16_t _5278 = (int16_t)(690);
  int16_t _5279 = _hw_input_global_wrapper_stencil_502 * _5278;
  int16_t _5280 = (int16_t)(722);
  int16_t _5281 = _hw_input_global_wrapper_stencil_503 * _5280;
  int16_t _5282 = (int16_t)(754);
  int16_t _5283 = _hw_input_global_wrapper_stencil_504 * _5282;
  int16_t _5284 = (int16_t)(786);
  int16_t _5285 = _hw_input_global_wrapper_stencil_505 * _5284;
  int16_t _5286 = (int16_t)(818);
  int16_t _5287 = _hw_input_global_wrapper_stencil_506 * _5286;
  int16_t _5288 = (int16_t)(850);
  int16_t _5289 = _hw_input_global_wrapper_stencil_507 * _5288;
  int16_t _5290 = (int16_t)(882);
  int16_t _5291 = _hw_input_global_wrapper_stencil_508 * _5290;
  int16_t _5292 = (int16_t)(914);
  int16_t _5293 = _hw_input_global_wrapper_stencil_509 * _5292;
  int16_t _5294 = (int16_t)(946);
  int16_t _5295 = _hw_input_global_wrapper_stencil_510 * _5294;
  int16_t _5296 = (int16_t)(1010);
  int16_t _5297 = _hw_input_global_wrapper_stencil_511 * _5296;
  int16_t _5298 = (int16_t)(978);
  int16_t _5299 = _hw_input_global_wrapper_stencil_512 * _5298;
  int16_t _5300 = _5297 + _5299;
  int16_t _5301 = _5295 + _5300;
  int16_t _5302 = _5293 + _5301;
  int16_t _5303 = _5291 + _5302;
  int16_t _5304 = _5289 + _5303;
  int16_t _5305 = _5287 + _5304;
  int16_t _5306 = _5285 + _5305;
  int16_t _5307 = _5283 + _5306;
  int16_t _5308 = _5281 + _5307;
  int16_t _5309 = _5279 + _5308;
  int16_t _5310 = _5277 + _5309;
  int16_t _5311 = _5275 + _5310;
  int16_t _5312 = _5273 + _5311;
  int16_t _5313 = _5271 + _5312;
  int16_t _5314 = _5269 + _5313;
  int16_t _5315 = _5267 + _5314;
  int16_t _5316 = _5265 + _5315;
  int16_t _5317 = _5263 + _5316;
  int16_t _5318 = _5261 + _5317;
  int16_t _5319 = _5259 + _5318;
  int16_t _5320 = _5257 + _5319;
  int16_t _5321 = _5255 + _5320;
  int16_t _5322 = _5253 + _5321;
  int16_t _5323 = _5251 + _5322;
  int16_t _5324 = _5249 + _5323;
  int16_t _5325 = _5247 + _5324;
  int16_t _5326 = _5245 + _5325;
  int16_t _5327 = _5243 + _5326;
  int16_t _5328 = _5241 + _5327;
  int16_t _5329 = _5239 + _5328;
  int16_t _5330 = _conv_stencil_16 + _5329;
  int16_t _5331 = _5237 + _5330;
  return _5331;
}

//store is: conv.stencil(conv_s1_x_16, conv_s1_y_16, 16) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_16, conv_s1_y_16)*(int16)19) + (conv.stencil(conv_s1_x_16, conv_s1_y_16, 16) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_16, conv_s1_y_16)*(int16)51) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_16, conv_s1_y_16)*(int16)83) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_16, conv_s1_y_16)*(int16)115) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_16, conv_s1_y_16)*(int16)147) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_16, conv_s1_y_16)*(int16)179) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_16, conv_s1_y_16)*(int16)211) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_16, conv_s1_y_16)*(int16)243) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_16, conv_s1_y_16)*(int16)275) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_16, conv_s1_y_16)*(int16)307) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_16, conv_s1_y_16)*(int16)339) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_16, conv_s1_y_16)*(int16)371) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_16, conv_s1_y_16)*(int16)403) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_16, conv_s1_y_16)*(int16)435) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_16, conv_s1_y_16)*(int16)467) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_16, conv_s1_y_16)*(int16)499) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_16, conv_s1_y_16)*(int16)531) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_16, conv_s1_y_16)*(int16)563) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_16, conv_s1_y_16)*(int16)595) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_16, conv_s1_y_16)*(int16)627) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_16, conv_s1_y_16)*(int16)659) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_16, conv_s1_y_16)*(int16)691) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_16, conv_s1_y_16)*(int16)723) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_16, conv_s1_y_16)*(int16)755) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_16, conv_s1_y_16)*(int16)787) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_16, conv_s1_y_16)*(int16)819) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_16, conv_s1_y_16)*(int16)851) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_16, conv_s1_y_16)*(int16)883) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_16, conv_s1_y_16)*(int16)915) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_16, conv_s1_y_16)*(int16)947) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_16, conv_s1_y_16)*(int16)1011) + (hw_input_global_wrapper.stencil(30, conv_s1_x_16, conv_s1_y_16)*(int16)979)))))))))))))))))))))))))))))))))
hw_uint<16> hcompute_conv_stencil_17(hw_uint<16>& conv_stencil, hw_uint<512>& hw_input_global_wrapper_stencil) {
  int16_t _conv_stencil_17 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_513 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_514 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_515 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_516 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_517 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_518 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_519 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_520 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_input_global_wrapper_stencil_521 = (int16_t) hw_input_global_wrapper_stencil.extract<128, 143>();
  int16_t _hw_input_global_wrapper_stencil_522 = (int16_t) hw_input_global_wrapper_stencil.extract<144, 159>();
  int16_t _hw_input_global_wrapper_stencil_523 = (int16_t) hw_input_global_wrapper_stencil.extract<160, 175>();
  int16_t _hw_input_global_wrapper_stencil_524 = (int16_t) hw_input_global_wrapper_stencil.extract<176, 191>();
  int16_t _hw_input_global_wrapper_stencil_525 = (int16_t) hw_input_global_wrapper_stencil.extract<192, 207>();
  int16_t _hw_input_global_wrapper_stencil_526 = (int16_t) hw_input_global_wrapper_stencil.extract<208, 223>();
  int16_t _hw_input_global_wrapper_stencil_527 = (int16_t) hw_input_global_wrapper_stencil.extract<224, 239>();
  int16_t _hw_input_global_wrapper_stencil_528 = (int16_t) hw_input_global_wrapper_stencil.extract<240, 255>();
  int16_t _hw_input_global_wrapper_stencil_529 = (int16_t) hw_input_global_wrapper_stencil.extract<256, 271>();
  int16_t _hw_input_global_wrapper_stencil_530 = (int16_t) hw_input_global_wrapper_stencil.extract<272, 287>();
  int16_t _hw_input_global_wrapper_stencil_531 = (int16_t) hw_input_global_wrapper_stencil.extract<288, 303>();
  int16_t _hw_input_global_wrapper_stencil_532 = (int16_t) hw_input_global_wrapper_stencil.extract<304, 319>();
  int16_t _hw_input_global_wrapper_stencil_533 = (int16_t) hw_input_global_wrapper_stencil.extract<320, 335>();
  int16_t _hw_input_global_wrapper_stencil_534 = (int16_t) hw_input_global_wrapper_stencil.extract<336, 351>();
  int16_t _hw_input_global_wrapper_stencil_535 = (int16_t) hw_input_global_wrapper_stencil.extract<352, 367>();
  int16_t _hw_input_global_wrapper_stencil_536 = (int16_t) hw_input_global_wrapper_stencil.extract<368, 383>();
  int16_t _hw_input_global_wrapper_stencil_537 = (int16_t) hw_input_global_wrapper_stencil.extract<384, 399>();
  int16_t _hw_input_global_wrapper_stencil_538 = (int16_t) hw_input_global_wrapper_stencil.extract<400, 415>();
  int16_t _hw_input_global_wrapper_stencil_539 = (int16_t) hw_input_global_wrapper_stencil.extract<416, 431>();
  int16_t _hw_input_global_wrapper_stencil_540 = (int16_t) hw_input_global_wrapper_stencil.extract<432, 447>();
  int16_t _hw_input_global_wrapper_stencil_541 = (int16_t) hw_input_global_wrapper_stencil.extract<448, 463>();
  int16_t _hw_input_global_wrapper_stencil_542 = (int16_t) hw_input_global_wrapper_stencil.extract<464, 479>();
  int16_t _hw_input_global_wrapper_stencil_543 = (int16_t) hw_input_global_wrapper_stencil.extract<480, 495>();
  int16_t _hw_input_global_wrapper_stencil_544 = (int16_t) hw_input_global_wrapper_stencil.extract<496, 511>();

  int16_t _5557 = (int16_t)(19);
  int16_t _5558 = _hw_input_global_wrapper_stencil_513 * _5557;
  int16_t _5559 = (int16_t)(51);
  int16_t _5560 = _hw_input_global_wrapper_stencil_514 * _5559;
  int16_t _5561 = (int16_t)(83);
  int16_t _5562 = _hw_input_global_wrapper_stencil_515 * _5561;
  int16_t _5563 = (int16_t)(115);
  int16_t _5564 = _hw_input_global_wrapper_stencil_516 * _5563;
  int16_t _5565 = (int16_t)(147);
  int16_t _5566 = _hw_input_global_wrapper_stencil_517 * _5565;
  int16_t _5567 = (int16_t)(179);
  int16_t _5568 = _hw_input_global_wrapper_stencil_518 * _5567;
  int16_t _5569 = (int16_t)(211);
  int16_t _5570 = _hw_input_global_wrapper_stencil_519 * _5569;
  int16_t _5571 = (int16_t)(243);
  int16_t _5572 = _hw_input_global_wrapper_stencil_520 * _5571;
  int16_t _5573 = (int16_t)(275);
  int16_t _5574 = _hw_input_global_wrapper_stencil_521 * _5573;
  int16_t _5575 = (int16_t)(307);
  int16_t _5576 = _hw_input_global_wrapper_stencil_522 * _5575;
  int16_t _5577 = (int16_t)(339);
  int16_t _5578 = _hw_input_global_wrapper_stencil_523 * _5577;
  int16_t _5579 = (int16_t)(371);
  int16_t _5580 = _hw_input_global_wrapper_stencil_524 * _5579;
  int16_t _5581 = (int16_t)(403);
  int16_t _5582 = _hw_input_global_wrapper_stencil_525 * _5581;
  int16_t _5583 = (int16_t)(435);
  int16_t _5584 = _hw_input_global_wrapper_stencil_526 * _5583;
  int16_t _5585 = (int16_t)(467);
  int16_t _5586 = _hw_input_global_wrapper_stencil_527 * _5585;
  int16_t _5587 = (int16_t)(499);
  int16_t _5588 = _hw_input_global_wrapper_stencil_528 * _5587;
  int16_t _5589 = (int16_t)(531);
  int16_t _5590 = _hw_input_global_wrapper_stencil_529 * _5589;
  int16_t _5591 = (int16_t)(563);
  int16_t _5592 = _hw_input_global_wrapper_stencil_530 * _5591;
  int16_t _5593 = (int16_t)(595);
  int16_t _5594 = _hw_input_global_wrapper_stencil_531 * _5593;
  int16_t _5595 = (int16_t)(627);
  int16_t _5596 = _hw_input_global_wrapper_stencil_532 * _5595;
  int16_t _5597 = (int16_t)(659);
  int16_t _5598 = _hw_input_global_wrapper_stencil_533 * _5597;
  int16_t _5599 = (int16_t)(691);
  int16_t _5600 = _hw_input_global_wrapper_stencil_534 * _5599;
  int16_t _5601 = (int16_t)(723);
  int16_t _5602 = _hw_input_global_wrapper_stencil_535 * _5601;
  int16_t _5603 = (int16_t)(755);
  int16_t _5604 = _hw_input_global_wrapper_stencil_536 * _5603;
  int16_t _5605 = (int16_t)(787);
  int16_t _5606 = _hw_input_global_wrapper_stencil_537 * _5605;
  int16_t _5607 = (int16_t)(819);
  int16_t _5608 = _hw_input_global_wrapper_stencil_538 * _5607;
  int16_t _5609 = (int16_t)(851);
  int16_t _5610 = _hw_input_global_wrapper_stencil_539 * _5609;
  int16_t _5611 = (int16_t)(883);
  int16_t _5612 = _hw_input_global_wrapper_stencil_540 * _5611;
  int16_t _5613 = (int16_t)(915);
  int16_t _5614 = _hw_input_global_wrapper_stencil_541 * _5613;
  int16_t _5615 = (int16_t)(947);
  int16_t _5616 = _hw_input_global_wrapper_stencil_542 * _5615;
  int16_t _5617 = (int16_t)(1011);
  int16_t _5618 = _hw_input_global_wrapper_stencil_543 * _5617;
  int16_t _5619 = (int16_t)(979);
  int16_t _5620 = _hw_input_global_wrapper_stencil_544 * _5619;
  int16_t _5621 = _5618 + _5620;
  int16_t _5622 = _5616 + _5621;
  int16_t _5623 = _5614 + _5622;
  int16_t _5624 = _5612 + _5623;
  int16_t _5625 = _5610 + _5624;
  int16_t _5626 = _5608 + _5625;
  int16_t _5627 = _5606 + _5626;
  int16_t _5628 = _5604 + _5627;
  int16_t _5629 = _5602 + _5628;
  int16_t _5630 = _5600 + _5629;
  int16_t _5631 = _5598 + _5630;
  int16_t _5632 = _5596 + _5631;
  int16_t _5633 = _5594 + _5632;
  int16_t _5634 = _5592 + _5633;
  int16_t _5635 = _5590 + _5634;
  int16_t _5636 = _5588 + _5635;
  int16_t _5637 = _5586 + _5636;
  int16_t _5638 = _5584 + _5637;
  int16_t _5639 = _5582 + _5638;
  int16_t _5640 = _5580 + _5639;
  int16_t _5641 = _5578 + _5640;
  int16_t _5642 = _5576 + _5641;
  int16_t _5643 = _5574 + _5642;
  int16_t _5644 = _5572 + _5643;
  int16_t _5645 = _5570 + _5644;
  int16_t _5646 = _5568 + _5645;
  int16_t _5647 = _5566 + _5646;
  int16_t _5648 = _5564 + _5647;
  int16_t _5649 = _5562 + _5648;
  int16_t _5650 = _5560 + _5649;
  int16_t _5651 = _conv_stencil_17 + _5650;
  int16_t _5652 = _5558 + _5651;
  return _5652;
}

//store is: conv.stencil(conv_s1_x_17, conv_s1_y_17, 17) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_17, conv_s1_y_17)*(int16)20) + (conv.stencil(conv_s1_x_17, conv_s1_y_17, 17) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_17, conv_s1_y_17)*(int16)52) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_17, conv_s1_y_17)*(int16)84) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_17, conv_s1_y_17)*(int16)116) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_17, conv_s1_y_17)*(int16)148) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_17, conv_s1_y_17)*(int16)180) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_17, conv_s1_y_17)*(int16)212) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_17, conv_s1_y_17)*(int16)244) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_17, conv_s1_y_17)*(int16)276) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_17, conv_s1_y_17)*(int16)308) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_17, conv_s1_y_17)*(int16)340) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_17, conv_s1_y_17)*(int16)372) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_17, conv_s1_y_17)*(int16)404) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_17, conv_s1_y_17)*(int16)436) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_17, conv_s1_y_17)*(int16)468) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_17, conv_s1_y_17)*(int16)500) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_17, conv_s1_y_17)*(int16)532) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_17, conv_s1_y_17)*(int16)564) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_17, conv_s1_y_17)*(int16)596) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_17, conv_s1_y_17)*(int16)628) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_17, conv_s1_y_17)*(int16)660) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_17, conv_s1_y_17)*(int16)692) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_17, conv_s1_y_17)*(int16)724) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_17, conv_s1_y_17)*(int16)756) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_17, conv_s1_y_17)*(int16)788) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_17, conv_s1_y_17)*(int16)820) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_17, conv_s1_y_17)*(int16)852) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_17, conv_s1_y_17)*(int16)884) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_17, conv_s1_y_17)*(int16)916) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_17, conv_s1_y_17)*(int16)948) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_17, conv_s1_y_17)*(int16)1012) + (hw_input_global_wrapper.stencil(30, conv_s1_x_17, conv_s1_y_17)*(int16)980)))))))))))))))))))))))))))))))))
hw_uint<16> hcompute_conv_stencil_18(hw_uint<16>& conv_stencil, hw_uint<512>& hw_input_global_wrapper_stencil) {
  int16_t _conv_stencil_18 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_545 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_546 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_547 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_548 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_549 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_550 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_551 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_552 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_input_global_wrapper_stencil_553 = (int16_t) hw_input_global_wrapper_stencil.extract<128, 143>();
  int16_t _hw_input_global_wrapper_stencil_554 = (int16_t) hw_input_global_wrapper_stencil.extract<144, 159>();
  int16_t _hw_input_global_wrapper_stencil_555 = (int16_t) hw_input_global_wrapper_stencil.extract<160, 175>();
  int16_t _hw_input_global_wrapper_stencil_556 = (int16_t) hw_input_global_wrapper_stencil.extract<176, 191>();
  int16_t _hw_input_global_wrapper_stencil_557 = (int16_t) hw_input_global_wrapper_stencil.extract<192, 207>();
  int16_t _hw_input_global_wrapper_stencil_558 = (int16_t) hw_input_global_wrapper_stencil.extract<208, 223>();
  int16_t _hw_input_global_wrapper_stencil_559 = (int16_t) hw_input_global_wrapper_stencil.extract<224, 239>();
  int16_t _hw_input_global_wrapper_stencil_560 = (int16_t) hw_input_global_wrapper_stencil.extract<240, 255>();
  int16_t _hw_input_global_wrapper_stencil_561 = (int16_t) hw_input_global_wrapper_stencil.extract<256, 271>();
  int16_t _hw_input_global_wrapper_stencil_562 = (int16_t) hw_input_global_wrapper_stencil.extract<272, 287>();
  int16_t _hw_input_global_wrapper_stencil_563 = (int16_t) hw_input_global_wrapper_stencil.extract<288, 303>();
  int16_t _hw_input_global_wrapper_stencil_564 = (int16_t) hw_input_global_wrapper_stencil.extract<304, 319>();
  int16_t _hw_input_global_wrapper_stencil_565 = (int16_t) hw_input_global_wrapper_stencil.extract<320, 335>();
  int16_t _hw_input_global_wrapper_stencil_566 = (int16_t) hw_input_global_wrapper_stencil.extract<336, 351>();
  int16_t _hw_input_global_wrapper_stencil_567 = (int16_t) hw_input_global_wrapper_stencil.extract<352, 367>();
  int16_t _hw_input_global_wrapper_stencil_568 = (int16_t) hw_input_global_wrapper_stencil.extract<368, 383>();
  int16_t _hw_input_global_wrapper_stencil_569 = (int16_t) hw_input_global_wrapper_stencil.extract<384, 399>();
  int16_t _hw_input_global_wrapper_stencil_570 = (int16_t) hw_input_global_wrapper_stencil.extract<400, 415>();
  int16_t _hw_input_global_wrapper_stencil_571 = (int16_t) hw_input_global_wrapper_stencil.extract<416, 431>();
  int16_t _hw_input_global_wrapper_stencil_572 = (int16_t) hw_input_global_wrapper_stencil.extract<432, 447>();
  int16_t _hw_input_global_wrapper_stencil_573 = (int16_t) hw_input_global_wrapper_stencil.extract<448, 463>();
  int16_t _hw_input_global_wrapper_stencil_574 = (int16_t) hw_input_global_wrapper_stencil.extract<464, 479>();
  int16_t _hw_input_global_wrapper_stencil_575 = (int16_t) hw_input_global_wrapper_stencil.extract<480, 495>();
  int16_t _hw_input_global_wrapper_stencil_576 = (int16_t) hw_input_global_wrapper_stencil.extract<496, 511>();

  int16_t _5878 = (int16_t)(20);
  int16_t _5879 = _hw_input_global_wrapper_stencil_545 * _5878;
  int16_t _5880 = (int16_t)(52);
  int16_t _5881 = _hw_input_global_wrapper_stencil_546 * _5880;
  int16_t _5882 = (int16_t)(84);
  int16_t _5883 = _hw_input_global_wrapper_stencil_547 * _5882;
  int16_t _5884 = (int16_t)(116);
  int16_t _5885 = _hw_input_global_wrapper_stencil_548 * _5884;
  int16_t _5886 = (int16_t)(148);
  int16_t _5887 = _hw_input_global_wrapper_stencil_549 * _5886;
  int16_t _5888 = (int16_t)(180);
  int16_t _5889 = _hw_input_global_wrapper_stencil_550 * _5888;
  int16_t _5890 = (int16_t)(212);
  int16_t _5891 = _hw_input_global_wrapper_stencil_551 * _5890;
  int16_t _5892 = (int16_t)(244);
  int16_t _5893 = _hw_input_global_wrapper_stencil_552 * _5892;
  int16_t _5894 = (int16_t)(276);
  int16_t _5895 = _hw_input_global_wrapper_stencil_553 * _5894;
  int16_t _5896 = (int16_t)(308);
  int16_t _5897 = _hw_input_global_wrapper_stencil_554 * _5896;
  int16_t _5898 = (int16_t)(340);
  int16_t _5899 = _hw_input_global_wrapper_stencil_555 * _5898;
  int16_t _5900 = (int16_t)(372);
  int16_t _5901 = _hw_input_global_wrapper_stencil_556 * _5900;
  int16_t _5902 = (int16_t)(404);
  int16_t _5903 = _hw_input_global_wrapper_stencil_557 * _5902;
  int16_t _5904 = (int16_t)(436);
  int16_t _5905 = _hw_input_global_wrapper_stencil_558 * _5904;
  int16_t _5906 = (int16_t)(468);
  int16_t _5907 = _hw_input_global_wrapper_stencil_559 * _5906;
  int16_t _5908 = (int16_t)(500);
  int16_t _5909 = _hw_input_global_wrapper_stencil_560 * _5908;
  int16_t _5910 = (int16_t)(532);
  int16_t _5911 = _hw_input_global_wrapper_stencil_561 * _5910;
  int16_t _5912 = (int16_t)(564);
  int16_t _5913 = _hw_input_global_wrapper_stencil_562 * _5912;
  int16_t _5914 = (int16_t)(596);
  int16_t _5915 = _hw_input_global_wrapper_stencil_563 * _5914;
  int16_t _5916 = (int16_t)(628);
  int16_t _5917 = _hw_input_global_wrapper_stencil_564 * _5916;
  int16_t _5918 = (int16_t)(660);
  int16_t _5919 = _hw_input_global_wrapper_stencil_565 * _5918;
  int16_t _5920 = (int16_t)(692);
  int16_t _5921 = _hw_input_global_wrapper_stencil_566 * _5920;
  int16_t _5922 = (int16_t)(724);
  int16_t _5923 = _hw_input_global_wrapper_stencil_567 * _5922;
  int16_t _5924 = (int16_t)(756);
  int16_t _5925 = _hw_input_global_wrapper_stencil_568 * _5924;
  int16_t _5926 = (int16_t)(788);
  int16_t _5927 = _hw_input_global_wrapper_stencil_569 * _5926;
  int16_t _5928 = (int16_t)(820);
  int16_t _5929 = _hw_input_global_wrapper_stencil_570 * _5928;
  int16_t _5930 = (int16_t)(852);
  int16_t _5931 = _hw_input_global_wrapper_stencil_571 * _5930;
  int16_t _5932 = (int16_t)(884);
  int16_t _5933 = _hw_input_global_wrapper_stencil_572 * _5932;
  int16_t _5934 = (int16_t)(916);
  int16_t _5935 = _hw_input_global_wrapper_stencil_573 * _5934;
  int16_t _5936 = (int16_t)(948);
  int16_t _5937 = _hw_input_global_wrapper_stencil_574 * _5936;
  int16_t _5938 = (int16_t)(1012);
  int16_t _5939 = _hw_input_global_wrapper_stencil_575 * _5938;
  int16_t _5940 = (int16_t)(980);
  int16_t _5941 = _hw_input_global_wrapper_stencil_576 * _5940;
  int16_t _5942 = _5939 + _5941;
  int16_t _5943 = _5937 + _5942;
  int16_t _5944 = _5935 + _5943;
  int16_t _5945 = _5933 + _5944;
  int16_t _5946 = _5931 + _5945;
  int16_t _5947 = _5929 + _5946;
  int16_t _5948 = _5927 + _5947;
  int16_t _5949 = _5925 + _5948;
  int16_t _5950 = _5923 + _5949;
  int16_t _5951 = _5921 + _5950;
  int16_t _5952 = _5919 + _5951;
  int16_t _5953 = _5917 + _5952;
  int16_t _5954 = _5915 + _5953;
  int16_t _5955 = _5913 + _5954;
  int16_t _5956 = _5911 + _5955;
  int16_t _5957 = _5909 + _5956;
  int16_t _5958 = _5907 + _5957;
  int16_t _5959 = _5905 + _5958;
  int16_t _5960 = _5903 + _5959;
  int16_t _5961 = _5901 + _5960;
  int16_t _5962 = _5899 + _5961;
  int16_t _5963 = _5897 + _5962;
  int16_t _5964 = _5895 + _5963;
  int16_t _5965 = _5893 + _5964;
  int16_t _5966 = _5891 + _5965;
  int16_t _5967 = _5889 + _5966;
  int16_t _5968 = _5887 + _5967;
  int16_t _5969 = _5885 + _5968;
  int16_t _5970 = _5883 + _5969;
  int16_t _5971 = _5881 + _5970;
  int16_t _5972 = _conv_stencil_18 + _5971;
  int16_t _5973 = _5879 + _5972;
  return _5973;
}

//store is: conv.stencil(conv_s1_x_18, conv_s1_y_18, 18) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_18, conv_s1_y_18)*(int16)21) + (conv.stencil(conv_s1_x_18, conv_s1_y_18, 18) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_18, conv_s1_y_18)*(int16)53) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_18, conv_s1_y_18)*(int16)85) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_18, conv_s1_y_18)*(int16)117) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_18, conv_s1_y_18)*(int16)149) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_18, conv_s1_y_18)*(int16)181) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_18, conv_s1_y_18)*(int16)213) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_18, conv_s1_y_18)*(int16)245) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_18, conv_s1_y_18)*(int16)277) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_18, conv_s1_y_18)*(int16)309) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_18, conv_s1_y_18)*(int16)341) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_18, conv_s1_y_18)*(int16)373) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_18, conv_s1_y_18)*(int16)405) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_18, conv_s1_y_18)*(int16)437) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_18, conv_s1_y_18)*(int16)469) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_18, conv_s1_y_18)*(int16)501) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_18, conv_s1_y_18)*(int16)533) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_18, conv_s1_y_18)*(int16)565) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_18, conv_s1_y_18)*(int16)597) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_18, conv_s1_y_18)*(int16)629) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_18, conv_s1_y_18)*(int16)661) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_18, conv_s1_y_18)*(int16)693) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_18, conv_s1_y_18)*(int16)725) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_18, conv_s1_y_18)*(int16)757) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_18, conv_s1_y_18)*(int16)789) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_18, conv_s1_y_18)*(int16)821) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_18, conv_s1_y_18)*(int16)853) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_18, conv_s1_y_18)*(int16)885) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_18, conv_s1_y_18)*(int16)917) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_18, conv_s1_y_18)*(int16)949) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_18, conv_s1_y_18)*(int16)1013) + (hw_input_global_wrapper.stencil(30, conv_s1_x_18, conv_s1_y_18)*(int16)981)))))))))))))))))))))))))))))))))
hw_uint<16> hcompute_conv_stencil_19(hw_uint<16>& conv_stencil, hw_uint<512>& hw_input_global_wrapper_stencil) {
  int16_t _conv_stencil_19 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_577 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_578 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_579 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_580 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_581 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_582 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_583 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_584 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_input_global_wrapper_stencil_585 = (int16_t) hw_input_global_wrapper_stencil.extract<128, 143>();
  int16_t _hw_input_global_wrapper_stencil_586 = (int16_t) hw_input_global_wrapper_stencil.extract<144, 159>();
  int16_t _hw_input_global_wrapper_stencil_587 = (int16_t) hw_input_global_wrapper_stencil.extract<160, 175>();
  int16_t _hw_input_global_wrapper_stencil_588 = (int16_t) hw_input_global_wrapper_stencil.extract<176, 191>();
  int16_t _hw_input_global_wrapper_stencil_589 = (int16_t) hw_input_global_wrapper_stencil.extract<192, 207>();
  int16_t _hw_input_global_wrapper_stencil_590 = (int16_t) hw_input_global_wrapper_stencil.extract<208, 223>();
  int16_t _hw_input_global_wrapper_stencil_591 = (int16_t) hw_input_global_wrapper_stencil.extract<224, 239>();
  int16_t _hw_input_global_wrapper_stencil_592 = (int16_t) hw_input_global_wrapper_stencil.extract<240, 255>();
  int16_t _hw_input_global_wrapper_stencil_593 = (int16_t) hw_input_global_wrapper_stencil.extract<256, 271>();
  int16_t _hw_input_global_wrapper_stencil_594 = (int16_t) hw_input_global_wrapper_stencil.extract<272, 287>();
  int16_t _hw_input_global_wrapper_stencil_595 = (int16_t) hw_input_global_wrapper_stencil.extract<288, 303>();
  int16_t _hw_input_global_wrapper_stencil_596 = (int16_t) hw_input_global_wrapper_stencil.extract<304, 319>();
  int16_t _hw_input_global_wrapper_stencil_597 = (int16_t) hw_input_global_wrapper_stencil.extract<320, 335>();
  int16_t _hw_input_global_wrapper_stencil_598 = (int16_t) hw_input_global_wrapper_stencil.extract<336, 351>();
  int16_t _hw_input_global_wrapper_stencil_599 = (int16_t) hw_input_global_wrapper_stencil.extract<352, 367>();
  int16_t _hw_input_global_wrapper_stencil_600 = (int16_t) hw_input_global_wrapper_stencil.extract<368, 383>();
  int16_t _hw_input_global_wrapper_stencil_601 = (int16_t) hw_input_global_wrapper_stencil.extract<384, 399>();
  int16_t _hw_input_global_wrapper_stencil_602 = (int16_t) hw_input_global_wrapper_stencil.extract<400, 415>();
  int16_t _hw_input_global_wrapper_stencil_603 = (int16_t) hw_input_global_wrapper_stencil.extract<416, 431>();
  int16_t _hw_input_global_wrapper_stencil_604 = (int16_t) hw_input_global_wrapper_stencil.extract<432, 447>();
  int16_t _hw_input_global_wrapper_stencil_605 = (int16_t) hw_input_global_wrapper_stencil.extract<448, 463>();
  int16_t _hw_input_global_wrapper_stencil_606 = (int16_t) hw_input_global_wrapper_stencil.extract<464, 479>();
  int16_t _hw_input_global_wrapper_stencil_607 = (int16_t) hw_input_global_wrapper_stencil.extract<480, 495>();
  int16_t _hw_input_global_wrapper_stencil_608 = (int16_t) hw_input_global_wrapper_stencil.extract<496, 511>();

  int16_t _6199 = (int16_t)(21);
  int16_t _6200 = _hw_input_global_wrapper_stencil_577 * _6199;
  int16_t _6201 = (int16_t)(53);
  int16_t _6202 = _hw_input_global_wrapper_stencil_578 * _6201;
  int16_t _6203 = (int16_t)(85);
  int16_t _6204 = _hw_input_global_wrapper_stencil_579 * _6203;
  int16_t _6205 = (int16_t)(117);
  int16_t _6206 = _hw_input_global_wrapper_stencil_580 * _6205;
  int16_t _6207 = (int16_t)(149);
  int16_t _6208 = _hw_input_global_wrapper_stencil_581 * _6207;
  int16_t _6209 = (int16_t)(181);
  int16_t _6210 = _hw_input_global_wrapper_stencil_582 * _6209;
  int16_t _6211 = (int16_t)(213);
  int16_t _6212 = _hw_input_global_wrapper_stencil_583 * _6211;
  int16_t _6213 = (int16_t)(245);
  int16_t _6214 = _hw_input_global_wrapper_stencil_584 * _6213;
  int16_t _6215 = (int16_t)(277);
  int16_t _6216 = _hw_input_global_wrapper_stencil_585 * _6215;
  int16_t _6217 = (int16_t)(309);
  int16_t _6218 = _hw_input_global_wrapper_stencil_586 * _6217;
  int16_t _6219 = (int16_t)(341);
  int16_t _6220 = _hw_input_global_wrapper_stencil_587 * _6219;
  int16_t _6221 = (int16_t)(373);
  int16_t _6222 = _hw_input_global_wrapper_stencil_588 * _6221;
  int16_t _6223 = (int16_t)(405);
  int16_t _6224 = _hw_input_global_wrapper_stencil_589 * _6223;
  int16_t _6225 = (int16_t)(437);
  int16_t _6226 = _hw_input_global_wrapper_stencil_590 * _6225;
  int16_t _6227 = (int16_t)(469);
  int16_t _6228 = _hw_input_global_wrapper_stencil_591 * _6227;
  int16_t _6229 = (int16_t)(501);
  int16_t _6230 = _hw_input_global_wrapper_stencil_592 * _6229;
  int16_t _6231 = (int16_t)(533);
  int16_t _6232 = _hw_input_global_wrapper_stencil_593 * _6231;
  int16_t _6233 = (int16_t)(565);
  int16_t _6234 = _hw_input_global_wrapper_stencil_594 * _6233;
  int16_t _6235 = (int16_t)(597);
  int16_t _6236 = _hw_input_global_wrapper_stencil_595 * _6235;
  int16_t _6237 = (int16_t)(629);
  int16_t _6238 = _hw_input_global_wrapper_stencil_596 * _6237;
  int16_t _6239 = (int16_t)(661);
  int16_t _6240 = _hw_input_global_wrapper_stencil_597 * _6239;
  int16_t _6241 = (int16_t)(693);
  int16_t _6242 = _hw_input_global_wrapper_stencil_598 * _6241;
  int16_t _6243 = (int16_t)(725);
  int16_t _6244 = _hw_input_global_wrapper_stencil_599 * _6243;
  int16_t _6245 = (int16_t)(757);
  int16_t _6246 = _hw_input_global_wrapper_stencil_600 * _6245;
  int16_t _6247 = (int16_t)(789);
  int16_t _6248 = _hw_input_global_wrapper_stencil_601 * _6247;
  int16_t _6249 = (int16_t)(821);
  int16_t _6250 = _hw_input_global_wrapper_stencil_602 * _6249;
  int16_t _6251 = (int16_t)(853);
  int16_t _6252 = _hw_input_global_wrapper_stencil_603 * _6251;
  int16_t _6253 = (int16_t)(885);
  int16_t _6254 = _hw_input_global_wrapper_stencil_604 * _6253;
  int16_t _6255 = (int16_t)(917);
  int16_t _6256 = _hw_input_global_wrapper_stencil_605 * _6255;
  int16_t _6257 = (int16_t)(949);
  int16_t _6258 = _hw_input_global_wrapper_stencil_606 * _6257;
  int16_t _6259 = (int16_t)(1013);
  int16_t _6260 = _hw_input_global_wrapper_stencil_607 * _6259;
  int16_t _6261 = (int16_t)(981);
  int16_t _6262 = _hw_input_global_wrapper_stencil_608 * _6261;
  int16_t _6263 = _6260 + _6262;
  int16_t _6264 = _6258 + _6263;
  int16_t _6265 = _6256 + _6264;
  int16_t _6266 = _6254 + _6265;
  int16_t _6267 = _6252 + _6266;
  int16_t _6268 = _6250 + _6267;
  int16_t _6269 = _6248 + _6268;
  int16_t _6270 = _6246 + _6269;
  int16_t _6271 = _6244 + _6270;
  int16_t _6272 = _6242 + _6271;
  int16_t _6273 = _6240 + _6272;
  int16_t _6274 = _6238 + _6273;
  int16_t _6275 = _6236 + _6274;
  int16_t _6276 = _6234 + _6275;
  int16_t _6277 = _6232 + _6276;
  int16_t _6278 = _6230 + _6277;
  int16_t _6279 = _6228 + _6278;
  int16_t _6280 = _6226 + _6279;
  int16_t _6281 = _6224 + _6280;
  int16_t _6282 = _6222 + _6281;
  int16_t _6283 = _6220 + _6282;
  int16_t _6284 = _6218 + _6283;
  int16_t _6285 = _6216 + _6284;
  int16_t _6286 = _6214 + _6285;
  int16_t _6287 = _6212 + _6286;
  int16_t _6288 = _6210 + _6287;
  int16_t _6289 = _6208 + _6288;
  int16_t _6290 = _6206 + _6289;
  int16_t _6291 = _6204 + _6290;
  int16_t _6292 = _6202 + _6291;
  int16_t _6293 = _conv_stencil_19 + _6292;
  int16_t _6294 = _6200 + _6293;
  return _6294;
}

//store is: conv.stencil(conv_s1_x_19, conv_s1_y_19, 19) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_19, conv_s1_y_19)*(int16)22) + (conv.stencil(conv_s1_x_19, conv_s1_y_19, 19) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_19, conv_s1_y_19)*(int16)54) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_19, conv_s1_y_19)*(int16)86) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_19, conv_s1_y_19)*(int16)118) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_19, conv_s1_y_19)*(int16)150) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_19, conv_s1_y_19)*(int16)182) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_19, conv_s1_y_19)*(int16)214) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_19, conv_s1_y_19)*(int16)246) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_19, conv_s1_y_19)*(int16)278) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_19, conv_s1_y_19)*(int16)310) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_19, conv_s1_y_19)*(int16)342) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_19, conv_s1_y_19)*(int16)374) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_19, conv_s1_y_19)*(int16)406) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_19, conv_s1_y_19)*(int16)438) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_19, conv_s1_y_19)*(int16)470) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_19, conv_s1_y_19)*(int16)502) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_19, conv_s1_y_19)*(int16)534) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_19, conv_s1_y_19)*(int16)566) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_19, conv_s1_y_19)*(int16)598) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_19, conv_s1_y_19)*(int16)630) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_19, conv_s1_y_19)*(int16)662) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_19, conv_s1_y_19)*(int16)694) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_19, conv_s1_y_19)*(int16)726) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_19, conv_s1_y_19)*(int16)758) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_19, conv_s1_y_19)*(int16)790) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_19, conv_s1_y_19)*(int16)822) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_19, conv_s1_y_19)*(int16)854) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_19, conv_s1_y_19)*(int16)886) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_19, conv_s1_y_19)*(int16)918) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_19, conv_s1_y_19)*(int16)950) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_19, conv_s1_y_19)*(int16)1014) + (hw_input_global_wrapper.stencil(30, conv_s1_x_19, conv_s1_y_19)*(int16)982)))))))))))))))))))))))))))))))))
hw_uint<16> hcompute_conv_stencil_20(hw_uint<16>& conv_stencil, hw_uint<512>& hw_input_global_wrapper_stencil) {
  int16_t _conv_stencil_20 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_609 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_610 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_611 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_612 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_613 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_614 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_615 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_616 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_input_global_wrapper_stencil_617 = (int16_t) hw_input_global_wrapper_stencil.extract<128, 143>();
  int16_t _hw_input_global_wrapper_stencil_618 = (int16_t) hw_input_global_wrapper_stencil.extract<144, 159>();
  int16_t _hw_input_global_wrapper_stencil_619 = (int16_t) hw_input_global_wrapper_stencil.extract<160, 175>();
  int16_t _hw_input_global_wrapper_stencil_620 = (int16_t) hw_input_global_wrapper_stencil.extract<176, 191>();
  int16_t _hw_input_global_wrapper_stencil_621 = (int16_t) hw_input_global_wrapper_stencil.extract<192, 207>();
  int16_t _hw_input_global_wrapper_stencil_622 = (int16_t) hw_input_global_wrapper_stencil.extract<208, 223>();
  int16_t _hw_input_global_wrapper_stencil_623 = (int16_t) hw_input_global_wrapper_stencil.extract<224, 239>();
  int16_t _hw_input_global_wrapper_stencil_624 = (int16_t) hw_input_global_wrapper_stencil.extract<240, 255>();
  int16_t _hw_input_global_wrapper_stencil_625 = (int16_t) hw_input_global_wrapper_stencil.extract<256, 271>();
  int16_t _hw_input_global_wrapper_stencil_626 = (int16_t) hw_input_global_wrapper_stencil.extract<272, 287>();
  int16_t _hw_input_global_wrapper_stencil_627 = (int16_t) hw_input_global_wrapper_stencil.extract<288, 303>();
  int16_t _hw_input_global_wrapper_stencil_628 = (int16_t) hw_input_global_wrapper_stencil.extract<304, 319>();
  int16_t _hw_input_global_wrapper_stencil_629 = (int16_t) hw_input_global_wrapper_stencil.extract<320, 335>();
  int16_t _hw_input_global_wrapper_stencil_630 = (int16_t) hw_input_global_wrapper_stencil.extract<336, 351>();
  int16_t _hw_input_global_wrapper_stencil_631 = (int16_t) hw_input_global_wrapper_stencil.extract<352, 367>();
  int16_t _hw_input_global_wrapper_stencil_632 = (int16_t) hw_input_global_wrapper_stencil.extract<368, 383>();
  int16_t _hw_input_global_wrapper_stencil_633 = (int16_t) hw_input_global_wrapper_stencil.extract<384, 399>();
  int16_t _hw_input_global_wrapper_stencil_634 = (int16_t) hw_input_global_wrapper_stencil.extract<400, 415>();
  int16_t _hw_input_global_wrapper_stencil_635 = (int16_t) hw_input_global_wrapper_stencil.extract<416, 431>();
  int16_t _hw_input_global_wrapper_stencil_636 = (int16_t) hw_input_global_wrapper_stencil.extract<432, 447>();
  int16_t _hw_input_global_wrapper_stencil_637 = (int16_t) hw_input_global_wrapper_stencil.extract<448, 463>();
  int16_t _hw_input_global_wrapper_stencil_638 = (int16_t) hw_input_global_wrapper_stencil.extract<464, 479>();
  int16_t _hw_input_global_wrapper_stencil_639 = (int16_t) hw_input_global_wrapper_stencil.extract<480, 495>();
  int16_t _hw_input_global_wrapper_stencil_640 = (int16_t) hw_input_global_wrapper_stencil.extract<496, 511>();

  int16_t _6520 = (int16_t)(22);
  int16_t _6521 = _hw_input_global_wrapper_stencil_609 * _6520;
  int16_t _6522 = (int16_t)(54);
  int16_t _6523 = _hw_input_global_wrapper_stencil_610 * _6522;
  int16_t _6524 = (int16_t)(86);
  int16_t _6525 = _hw_input_global_wrapper_stencil_611 * _6524;
  int16_t _6526 = (int16_t)(118);
  int16_t _6527 = _hw_input_global_wrapper_stencil_612 * _6526;
  int16_t _6528 = (int16_t)(150);
  int16_t _6529 = _hw_input_global_wrapper_stencil_613 * _6528;
  int16_t _6530 = (int16_t)(182);
  int16_t _6531 = _hw_input_global_wrapper_stencil_614 * _6530;
  int16_t _6532 = (int16_t)(214);
  int16_t _6533 = _hw_input_global_wrapper_stencil_615 * _6532;
  int16_t _6534 = (int16_t)(246);
  int16_t _6535 = _hw_input_global_wrapper_stencil_616 * _6534;
  int16_t _6536 = (int16_t)(278);
  int16_t _6537 = _hw_input_global_wrapper_stencil_617 * _6536;
  int16_t _6538 = (int16_t)(310);
  int16_t _6539 = _hw_input_global_wrapper_stencil_618 * _6538;
  int16_t _6540 = (int16_t)(342);
  int16_t _6541 = _hw_input_global_wrapper_stencil_619 * _6540;
  int16_t _6542 = (int16_t)(374);
  int16_t _6543 = _hw_input_global_wrapper_stencil_620 * _6542;
  int16_t _6544 = (int16_t)(406);
  int16_t _6545 = _hw_input_global_wrapper_stencil_621 * _6544;
  int16_t _6546 = (int16_t)(438);
  int16_t _6547 = _hw_input_global_wrapper_stencil_622 * _6546;
  int16_t _6548 = (int16_t)(470);
  int16_t _6549 = _hw_input_global_wrapper_stencil_623 * _6548;
  int16_t _6550 = (int16_t)(502);
  int16_t _6551 = _hw_input_global_wrapper_stencil_624 * _6550;
  int16_t _6552 = (int16_t)(534);
  int16_t _6553 = _hw_input_global_wrapper_stencil_625 * _6552;
  int16_t _6554 = (int16_t)(566);
  int16_t _6555 = _hw_input_global_wrapper_stencil_626 * _6554;
  int16_t _6556 = (int16_t)(598);
  int16_t _6557 = _hw_input_global_wrapper_stencil_627 * _6556;
  int16_t _6558 = (int16_t)(630);
  int16_t _6559 = _hw_input_global_wrapper_stencil_628 * _6558;
  int16_t _6560 = (int16_t)(662);
  int16_t _6561 = _hw_input_global_wrapper_stencil_629 * _6560;
  int16_t _6562 = (int16_t)(694);
  int16_t _6563 = _hw_input_global_wrapper_stencil_630 * _6562;
  int16_t _6564 = (int16_t)(726);
  int16_t _6565 = _hw_input_global_wrapper_stencil_631 * _6564;
  int16_t _6566 = (int16_t)(758);
  int16_t _6567 = _hw_input_global_wrapper_stencil_632 * _6566;
  int16_t _6568 = (int16_t)(790);
  int16_t _6569 = _hw_input_global_wrapper_stencil_633 * _6568;
  int16_t _6570 = (int16_t)(822);
  int16_t _6571 = _hw_input_global_wrapper_stencil_634 * _6570;
  int16_t _6572 = (int16_t)(854);
  int16_t _6573 = _hw_input_global_wrapper_stencil_635 * _6572;
  int16_t _6574 = (int16_t)(886);
  int16_t _6575 = _hw_input_global_wrapper_stencil_636 * _6574;
  int16_t _6576 = (int16_t)(918);
  int16_t _6577 = _hw_input_global_wrapper_stencil_637 * _6576;
  int16_t _6578 = (int16_t)(950);
  int16_t _6579 = _hw_input_global_wrapper_stencil_638 * _6578;
  int16_t _6580 = (int16_t)(1014);
  int16_t _6581 = _hw_input_global_wrapper_stencil_639 * _6580;
  int16_t _6582 = (int16_t)(982);
  int16_t _6583 = _hw_input_global_wrapper_stencil_640 * _6582;
  int16_t _6584 = _6581 + _6583;
  int16_t _6585 = _6579 + _6584;
  int16_t _6586 = _6577 + _6585;
  int16_t _6587 = _6575 + _6586;
  int16_t _6588 = _6573 + _6587;
  int16_t _6589 = _6571 + _6588;
  int16_t _6590 = _6569 + _6589;
  int16_t _6591 = _6567 + _6590;
  int16_t _6592 = _6565 + _6591;
  int16_t _6593 = _6563 + _6592;
  int16_t _6594 = _6561 + _6593;
  int16_t _6595 = _6559 + _6594;
  int16_t _6596 = _6557 + _6595;
  int16_t _6597 = _6555 + _6596;
  int16_t _6598 = _6553 + _6597;
  int16_t _6599 = _6551 + _6598;
  int16_t _6600 = _6549 + _6599;
  int16_t _6601 = _6547 + _6600;
  int16_t _6602 = _6545 + _6601;
  int16_t _6603 = _6543 + _6602;
  int16_t _6604 = _6541 + _6603;
  int16_t _6605 = _6539 + _6604;
  int16_t _6606 = _6537 + _6605;
  int16_t _6607 = _6535 + _6606;
  int16_t _6608 = _6533 + _6607;
  int16_t _6609 = _6531 + _6608;
  int16_t _6610 = _6529 + _6609;
  int16_t _6611 = _6527 + _6610;
  int16_t _6612 = _6525 + _6611;
  int16_t _6613 = _6523 + _6612;
  int16_t _6614 = _conv_stencil_20 + _6613;
  int16_t _6615 = _6521 + _6614;
  return _6615;
}

//store is: conv.stencil(conv_s1_x_20, conv_s1_y_20, 20) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_20, conv_s1_y_20)*(int16)23) + (conv.stencil(conv_s1_x_20, conv_s1_y_20, 20) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_20, conv_s1_y_20)*(int16)55) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_20, conv_s1_y_20)*(int16)87) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_20, conv_s1_y_20)*(int16)119) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_20, conv_s1_y_20)*(int16)151) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_20, conv_s1_y_20)*(int16)183) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_20, conv_s1_y_20)*(int16)215) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_20, conv_s1_y_20)*(int16)247) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_20, conv_s1_y_20)*(int16)279) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_20, conv_s1_y_20)*(int16)311) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_20, conv_s1_y_20)*(int16)343) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_20, conv_s1_y_20)*(int16)375) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_20, conv_s1_y_20)*(int16)407) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_20, conv_s1_y_20)*(int16)439) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_20, conv_s1_y_20)*(int16)471) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_20, conv_s1_y_20)*(int16)503) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_20, conv_s1_y_20)*(int16)535) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_20, conv_s1_y_20)*(int16)567) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_20, conv_s1_y_20)*(int16)599) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_20, conv_s1_y_20)*(int16)631) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_20, conv_s1_y_20)*(int16)663) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_20, conv_s1_y_20)*(int16)695) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_20, conv_s1_y_20)*(int16)727) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_20, conv_s1_y_20)*(int16)759) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_20, conv_s1_y_20)*(int16)791) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_20, conv_s1_y_20)*(int16)823) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_20, conv_s1_y_20)*(int16)855) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_20, conv_s1_y_20)*(int16)887) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_20, conv_s1_y_20)*(int16)919) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_20, conv_s1_y_20)*(int16)951) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_20, conv_s1_y_20)*(int16)1015) + (hw_input_global_wrapper.stencil(30, conv_s1_x_20, conv_s1_y_20)*(int16)983)))))))))))))))))))))))))))))))))
hw_uint<16> hcompute_conv_stencil_21(hw_uint<16>& conv_stencil, hw_uint<512>& hw_input_global_wrapper_stencil) {
  int16_t _conv_stencil_21 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_641 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_642 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_643 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_644 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_645 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_646 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_647 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_648 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_input_global_wrapper_stencil_649 = (int16_t) hw_input_global_wrapper_stencil.extract<128, 143>();
  int16_t _hw_input_global_wrapper_stencil_650 = (int16_t) hw_input_global_wrapper_stencil.extract<144, 159>();
  int16_t _hw_input_global_wrapper_stencil_651 = (int16_t) hw_input_global_wrapper_stencil.extract<160, 175>();
  int16_t _hw_input_global_wrapper_stencil_652 = (int16_t) hw_input_global_wrapper_stencil.extract<176, 191>();
  int16_t _hw_input_global_wrapper_stencil_653 = (int16_t) hw_input_global_wrapper_stencil.extract<192, 207>();
  int16_t _hw_input_global_wrapper_stencil_654 = (int16_t) hw_input_global_wrapper_stencil.extract<208, 223>();
  int16_t _hw_input_global_wrapper_stencil_655 = (int16_t) hw_input_global_wrapper_stencil.extract<224, 239>();
  int16_t _hw_input_global_wrapper_stencil_656 = (int16_t) hw_input_global_wrapper_stencil.extract<240, 255>();
  int16_t _hw_input_global_wrapper_stencil_657 = (int16_t) hw_input_global_wrapper_stencil.extract<256, 271>();
  int16_t _hw_input_global_wrapper_stencil_658 = (int16_t) hw_input_global_wrapper_stencil.extract<272, 287>();
  int16_t _hw_input_global_wrapper_stencil_659 = (int16_t) hw_input_global_wrapper_stencil.extract<288, 303>();
  int16_t _hw_input_global_wrapper_stencil_660 = (int16_t) hw_input_global_wrapper_stencil.extract<304, 319>();
  int16_t _hw_input_global_wrapper_stencil_661 = (int16_t) hw_input_global_wrapper_stencil.extract<320, 335>();
  int16_t _hw_input_global_wrapper_stencil_662 = (int16_t) hw_input_global_wrapper_stencil.extract<336, 351>();
  int16_t _hw_input_global_wrapper_stencil_663 = (int16_t) hw_input_global_wrapper_stencil.extract<352, 367>();
  int16_t _hw_input_global_wrapper_stencil_664 = (int16_t) hw_input_global_wrapper_stencil.extract<368, 383>();
  int16_t _hw_input_global_wrapper_stencil_665 = (int16_t) hw_input_global_wrapper_stencil.extract<384, 399>();
  int16_t _hw_input_global_wrapper_stencil_666 = (int16_t) hw_input_global_wrapper_stencil.extract<400, 415>();
  int16_t _hw_input_global_wrapper_stencil_667 = (int16_t) hw_input_global_wrapper_stencil.extract<416, 431>();
  int16_t _hw_input_global_wrapper_stencil_668 = (int16_t) hw_input_global_wrapper_stencil.extract<432, 447>();
  int16_t _hw_input_global_wrapper_stencil_669 = (int16_t) hw_input_global_wrapper_stencil.extract<448, 463>();
  int16_t _hw_input_global_wrapper_stencil_670 = (int16_t) hw_input_global_wrapper_stencil.extract<464, 479>();
  int16_t _hw_input_global_wrapper_stencil_671 = (int16_t) hw_input_global_wrapper_stencil.extract<480, 495>();
  int16_t _hw_input_global_wrapper_stencil_672 = (int16_t) hw_input_global_wrapper_stencil.extract<496, 511>();

  int16_t _6841 = (int16_t)(23);
  int16_t _6842 = _hw_input_global_wrapper_stencil_641 * _6841;
  int16_t _6843 = (int16_t)(55);
  int16_t _6844 = _hw_input_global_wrapper_stencil_642 * _6843;
  int16_t _6845 = (int16_t)(87);
  int16_t _6846 = _hw_input_global_wrapper_stencil_643 * _6845;
  int16_t _6847 = (int16_t)(119);
  int16_t _6848 = _hw_input_global_wrapper_stencil_644 * _6847;
  int16_t _6849 = (int16_t)(151);
  int16_t _6850 = _hw_input_global_wrapper_stencil_645 * _6849;
  int16_t _6851 = (int16_t)(183);
  int16_t _6852 = _hw_input_global_wrapper_stencil_646 * _6851;
  int16_t _6853 = (int16_t)(215);
  int16_t _6854 = _hw_input_global_wrapper_stencil_647 * _6853;
  int16_t _6855 = (int16_t)(247);
  int16_t _6856 = _hw_input_global_wrapper_stencil_648 * _6855;
  int16_t _6857 = (int16_t)(279);
  int16_t _6858 = _hw_input_global_wrapper_stencil_649 * _6857;
  int16_t _6859 = (int16_t)(311);
  int16_t _6860 = _hw_input_global_wrapper_stencil_650 * _6859;
  int16_t _6861 = (int16_t)(343);
  int16_t _6862 = _hw_input_global_wrapper_stencil_651 * _6861;
  int16_t _6863 = (int16_t)(375);
  int16_t _6864 = _hw_input_global_wrapper_stencil_652 * _6863;
  int16_t _6865 = (int16_t)(407);
  int16_t _6866 = _hw_input_global_wrapper_stencil_653 * _6865;
  int16_t _6867 = (int16_t)(439);
  int16_t _6868 = _hw_input_global_wrapper_stencil_654 * _6867;
  int16_t _6869 = (int16_t)(471);
  int16_t _6870 = _hw_input_global_wrapper_stencil_655 * _6869;
  int16_t _6871 = (int16_t)(503);
  int16_t _6872 = _hw_input_global_wrapper_stencil_656 * _6871;
  int16_t _6873 = (int16_t)(535);
  int16_t _6874 = _hw_input_global_wrapper_stencil_657 * _6873;
  int16_t _6875 = (int16_t)(567);
  int16_t _6876 = _hw_input_global_wrapper_stencil_658 * _6875;
  int16_t _6877 = (int16_t)(599);
  int16_t _6878 = _hw_input_global_wrapper_stencil_659 * _6877;
  int16_t _6879 = (int16_t)(631);
  int16_t _6880 = _hw_input_global_wrapper_stencil_660 * _6879;
  int16_t _6881 = (int16_t)(663);
  int16_t _6882 = _hw_input_global_wrapper_stencil_661 * _6881;
  int16_t _6883 = (int16_t)(695);
  int16_t _6884 = _hw_input_global_wrapper_stencil_662 * _6883;
  int16_t _6885 = (int16_t)(727);
  int16_t _6886 = _hw_input_global_wrapper_stencil_663 * _6885;
  int16_t _6887 = (int16_t)(759);
  int16_t _6888 = _hw_input_global_wrapper_stencil_664 * _6887;
  int16_t _6889 = (int16_t)(791);
  int16_t _6890 = _hw_input_global_wrapper_stencil_665 * _6889;
  int16_t _6891 = (int16_t)(823);
  int16_t _6892 = _hw_input_global_wrapper_stencil_666 * _6891;
  int16_t _6893 = (int16_t)(855);
  int16_t _6894 = _hw_input_global_wrapper_stencil_667 * _6893;
  int16_t _6895 = (int16_t)(887);
  int16_t _6896 = _hw_input_global_wrapper_stencil_668 * _6895;
  int16_t _6897 = (int16_t)(919);
  int16_t _6898 = _hw_input_global_wrapper_stencil_669 * _6897;
  int16_t _6899 = (int16_t)(951);
  int16_t _6900 = _hw_input_global_wrapper_stencil_670 * _6899;
  int16_t _6901 = (int16_t)(1015);
  int16_t _6902 = _hw_input_global_wrapper_stencil_671 * _6901;
  int16_t _6903 = (int16_t)(983);
  int16_t _6904 = _hw_input_global_wrapper_stencil_672 * _6903;
  int16_t _6905 = _6902 + _6904;
  int16_t _6906 = _6900 + _6905;
  int16_t _6907 = _6898 + _6906;
  int16_t _6908 = _6896 + _6907;
  int16_t _6909 = _6894 + _6908;
  int16_t _6910 = _6892 + _6909;
  int16_t _6911 = _6890 + _6910;
  int16_t _6912 = _6888 + _6911;
  int16_t _6913 = _6886 + _6912;
  int16_t _6914 = _6884 + _6913;
  int16_t _6915 = _6882 + _6914;
  int16_t _6916 = _6880 + _6915;
  int16_t _6917 = _6878 + _6916;
  int16_t _6918 = _6876 + _6917;
  int16_t _6919 = _6874 + _6918;
  int16_t _6920 = _6872 + _6919;
  int16_t _6921 = _6870 + _6920;
  int16_t _6922 = _6868 + _6921;
  int16_t _6923 = _6866 + _6922;
  int16_t _6924 = _6864 + _6923;
  int16_t _6925 = _6862 + _6924;
  int16_t _6926 = _6860 + _6925;
  int16_t _6927 = _6858 + _6926;
  int16_t _6928 = _6856 + _6927;
  int16_t _6929 = _6854 + _6928;
  int16_t _6930 = _6852 + _6929;
  int16_t _6931 = _6850 + _6930;
  int16_t _6932 = _6848 + _6931;
  int16_t _6933 = _6846 + _6932;
  int16_t _6934 = _6844 + _6933;
  int16_t _6935 = _conv_stencil_21 + _6934;
  int16_t _6936 = _6842 + _6935;
  return _6936;
}

//store is: conv.stencil(conv_s1_x_21, conv_s1_y_21, 21) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_21, conv_s1_y_21)*(int16)24) + (conv.stencil(conv_s1_x_21, conv_s1_y_21, 21) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_21, conv_s1_y_21)*(int16)56) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_21, conv_s1_y_21)*(int16)88) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_21, conv_s1_y_21)*(int16)120) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_21, conv_s1_y_21)*(int16)152) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_21, conv_s1_y_21)*(int16)184) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_21, conv_s1_y_21)*(int16)216) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_21, conv_s1_y_21)*(int16)248) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_21, conv_s1_y_21)*(int16)280) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_21, conv_s1_y_21)*(int16)312) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_21, conv_s1_y_21)*(int16)344) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_21, conv_s1_y_21)*(int16)376) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_21, conv_s1_y_21)*(int16)408) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_21, conv_s1_y_21)*(int16)440) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_21, conv_s1_y_21)*(int16)472) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_21, conv_s1_y_21)*(int16)504) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_21, conv_s1_y_21)*(int16)536) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_21, conv_s1_y_21)*(int16)568) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_21, conv_s1_y_21)*(int16)600) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_21, conv_s1_y_21)*(int16)632) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_21, conv_s1_y_21)*(int16)664) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_21, conv_s1_y_21)*(int16)696) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_21, conv_s1_y_21)*(int16)728) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_21, conv_s1_y_21)*(int16)760) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_21, conv_s1_y_21)*(int16)792) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_21, conv_s1_y_21)*(int16)824) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_21, conv_s1_y_21)*(int16)856) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_21, conv_s1_y_21)*(int16)888) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_21, conv_s1_y_21)*(int16)920) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_21, conv_s1_y_21)*(int16)952) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_21, conv_s1_y_21)*(int16)1016) + (hw_input_global_wrapper.stencil(30, conv_s1_x_21, conv_s1_y_21)*(int16)984)))))))))))))))))))))))))))))))))
hw_uint<16> hcompute_conv_stencil_22(hw_uint<16>& conv_stencil, hw_uint<512>& hw_input_global_wrapper_stencil) {
  int16_t _conv_stencil_22 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_673 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_674 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_675 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_676 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_677 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_678 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_679 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_680 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_input_global_wrapper_stencil_681 = (int16_t) hw_input_global_wrapper_stencil.extract<128, 143>();
  int16_t _hw_input_global_wrapper_stencil_682 = (int16_t) hw_input_global_wrapper_stencil.extract<144, 159>();
  int16_t _hw_input_global_wrapper_stencil_683 = (int16_t) hw_input_global_wrapper_stencil.extract<160, 175>();
  int16_t _hw_input_global_wrapper_stencil_684 = (int16_t) hw_input_global_wrapper_stencil.extract<176, 191>();
  int16_t _hw_input_global_wrapper_stencil_685 = (int16_t) hw_input_global_wrapper_stencil.extract<192, 207>();
  int16_t _hw_input_global_wrapper_stencil_686 = (int16_t) hw_input_global_wrapper_stencil.extract<208, 223>();
  int16_t _hw_input_global_wrapper_stencil_687 = (int16_t) hw_input_global_wrapper_stencil.extract<224, 239>();
  int16_t _hw_input_global_wrapper_stencil_688 = (int16_t) hw_input_global_wrapper_stencil.extract<240, 255>();
  int16_t _hw_input_global_wrapper_stencil_689 = (int16_t) hw_input_global_wrapper_stencil.extract<256, 271>();
  int16_t _hw_input_global_wrapper_stencil_690 = (int16_t) hw_input_global_wrapper_stencil.extract<272, 287>();
  int16_t _hw_input_global_wrapper_stencil_691 = (int16_t) hw_input_global_wrapper_stencil.extract<288, 303>();
  int16_t _hw_input_global_wrapper_stencil_692 = (int16_t) hw_input_global_wrapper_stencil.extract<304, 319>();
  int16_t _hw_input_global_wrapper_stencil_693 = (int16_t) hw_input_global_wrapper_stencil.extract<320, 335>();
  int16_t _hw_input_global_wrapper_stencil_694 = (int16_t) hw_input_global_wrapper_stencil.extract<336, 351>();
  int16_t _hw_input_global_wrapper_stencil_695 = (int16_t) hw_input_global_wrapper_stencil.extract<352, 367>();
  int16_t _hw_input_global_wrapper_stencil_696 = (int16_t) hw_input_global_wrapper_stencil.extract<368, 383>();
  int16_t _hw_input_global_wrapper_stencil_697 = (int16_t) hw_input_global_wrapper_stencil.extract<384, 399>();
  int16_t _hw_input_global_wrapper_stencil_698 = (int16_t) hw_input_global_wrapper_stencil.extract<400, 415>();
  int16_t _hw_input_global_wrapper_stencil_699 = (int16_t) hw_input_global_wrapper_stencil.extract<416, 431>();
  int16_t _hw_input_global_wrapper_stencil_700 = (int16_t) hw_input_global_wrapper_stencil.extract<432, 447>();
  int16_t _hw_input_global_wrapper_stencil_701 = (int16_t) hw_input_global_wrapper_stencil.extract<448, 463>();
  int16_t _hw_input_global_wrapper_stencil_702 = (int16_t) hw_input_global_wrapper_stencil.extract<464, 479>();
  int16_t _hw_input_global_wrapper_stencil_703 = (int16_t) hw_input_global_wrapper_stencil.extract<480, 495>();
  int16_t _hw_input_global_wrapper_stencil_704 = (int16_t) hw_input_global_wrapper_stencil.extract<496, 511>();

  int16_t _7162 = (int16_t)(24);
  int16_t _7163 = _hw_input_global_wrapper_stencil_673 * _7162;
  int16_t _7164 = (int16_t)(56);
  int16_t _7165 = _hw_input_global_wrapper_stencil_674 * _7164;
  int16_t _7166 = (int16_t)(88);
  int16_t _7167 = _hw_input_global_wrapper_stencil_675 * _7166;
  int16_t _7168 = (int16_t)(120);
  int16_t _7169 = _hw_input_global_wrapper_stencil_676 * _7168;
  int16_t _7170 = (int16_t)(152);
  int16_t _7171 = _hw_input_global_wrapper_stencil_677 * _7170;
  int16_t _7172 = (int16_t)(184);
  int16_t _7173 = _hw_input_global_wrapper_stencil_678 * _7172;
  int16_t _7174 = (int16_t)(216);
  int16_t _7175 = _hw_input_global_wrapper_stencil_679 * _7174;
  int16_t _7176 = (int16_t)(248);
  int16_t _7177 = _hw_input_global_wrapper_stencil_680 * _7176;
  int16_t _7178 = (int16_t)(280);
  int16_t _7179 = _hw_input_global_wrapper_stencil_681 * _7178;
  int16_t _7180 = (int16_t)(312);
  int16_t _7181 = _hw_input_global_wrapper_stencil_682 * _7180;
  int16_t _7182 = (int16_t)(344);
  int16_t _7183 = _hw_input_global_wrapper_stencil_683 * _7182;
  int16_t _7184 = (int16_t)(376);
  int16_t _7185 = _hw_input_global_wrapper_stencil_684 * _7184;
  int16_t _7186 = (int16_t)(408);
  int16_t _7187 = _hw_input_global_wrapper_stencil_685 * _7186;
  int16_t _7188 = (int16_t)(440);
  int16_t _7189 = _hw_input_global_wrapper_stencil_686 * _7188;
  int16_t _7190 = (int16_t)(472);
  int16_t _7191 = _hw_input_global_wrapper_stencil_687 * _7190;
  int16_t _7192 = (int16_t)(504);
  int16_t _7193 = _hw_input_global_wrapper_stencil_688 * _7192;
  int16_t _7194 = (int16_t)(536);
  int16_t _7195 = _hw_input_global_wrapper_stencil_689 * _7194;
  int16_t _7196 = (int16_t)(568);
  int16_t _7197 = _hw_input_global_wrapper_stencil_690 * _7196;
  int16_t _7198 = (int16_t)(600);
  int16_t _7199 = _hw_input_global_wrapper_stencil_691 * _7198;
  int16_t _7200 = (int16_t)(632);
  int16_t _7201 = _hw_input_global_wrapper_stencil_692 * _7200;
  int16_t _7202 = (int16_t)(664);
  int16_t _7203 = _hw_input_global_wrapper_stencil_693 * _7202;
  int16_t _7204 = (int16_t)(696);
  int16_t _7205 = _hw_input_global_wrapper_stencil_694 * _7204;
  int16_t _7206 = (int16_t)(728);
  int16_t _7207 = _hw_input_global_wrapper_stencil_695 * _7206;
  int16_t _7208 = (int16_t)(760);
  int16_t _7209 = _hw_input_global_wrapper_stencil_696 * _7208;
  int16_t _7210 = (int16_t)(792);
  int16_t _7211 = _hw_input_global_wrapper_stencil_697 * _7210;
  int16_t _7212 = (int16_t)(824);
  int16_t _7213 = _hw_input_global_wrapper_stencil_698 * _7212;
  int16_t _7214 = (int16_t)(856);
  int16_t _7215 = _hw_input_global_wrapper_stencil_699 * _7214;
  int16_t _7216 = (int16_t)(888);
  int16_t _7217 = _hw_input_global_wrapper_stencil_700 * _7216;
  int16_t _7218 = (int16_t)(920);
  int16_t _7219 = _hw_input_global_wrapper_stencil_701 * _7218;
  int16_t _7220 = (int16_t)(952);
  int16_t _7221 = _hw_input_global_wrapper_stencil_702 * _7220;
  int16_t _7222 = (int16_t)(1016);
  int16_t _7223 = _hw_input_global_wrapper_stencil_703 * _7222;
  int16_t _7224 = (int16_t)(984);
  int16_t _7225 = _hw_input_global_wrapper_stencil_704 * _7224;
  int16_t _7226 = _7223 + _7225;
  int16_t _7227 = _7221 + _7226;
  int16_t _7228 = _7219 + _7227;
  int16_t _7229 = _7217 + _7228;
  int16_t _7230 = _7215 + _7229;
  int16_t _7231 = _7213 + _7230;
  int16_t _7232 = _7211 + _7231;
  int16_t _7233 = _7209 + _7232;
  int16_t _7234 = _7207 + _7233;
  int16_t _7235 = _7205 + _7234;
  int16_t _7236 = _7203 + _7235;
  int16_t _7237 = _7201 + _7236;
  int16_t _7238 = _7199 + _7237;
  int16_t _7239 = _7197 + _7238;
  int16_t _7240 = _7195 + _7239;
  int16_t _7241 = _7193 + _7240;
  int16_t _7242 = _7191 + _7241;
  int16_t _7243 = _7189 + _7242;
  int16_t _7244 = _7187 + _7243;
  int16_t _7245 = _7185 + _7244;
  int16_t _7246 = _7183 + _7245;
  int16_t _7247 = _7181 + _7246;
  int16_t _7248 = _7179 + _7247;
  int16_t _7249 = _7177 + _7248;
  int16_t _7250 = _7175 + _7249;
  int16_t _7251 = _7173 + _7250;
  int16_t _7252 = _7171 + _7251;
  int16_t _7253 = _7169 + _7252;
  int16_t _7254 = _7167 + _7253;
  int16_t _7255 = _7165 + _7254;
  int16_t _7256 = _conv_stencil_22 + _7255;
  int16_t _7257 = _7163 + _7256;
  return _7257;
}

//store is: conv.stencil(conv_s1_x_22, conv_s1_y_22, 22) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_22, conv_s1_y_22)*(int16)25) + (conv.stencil(conv_s1_x_22, conv_s1_y_22, 22) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_22, conv_s1_y_22)*(int16)57) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_22, conv_s1_y_22)*(int16)89) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_22, conv_s1_y_22)*(int16)121) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_22, conv_s1_y_22)*(int16)153) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_22, conv_s1_y_22)*(int16)185) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_22, conv_s1_y_22)*(int16)217) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_22, conv_s1_y_22)*(int16)249) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_22, conv_s1_y_22)*(int16)281) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_22, conv_s1_y_22)*(int16)313) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_22, conv_s1_y_22)*(int16)345) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_22, conv_s1_y_22)*(int16)377) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_22, conv_s1_y_22)*(int16)409) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_22, conv_s1_y_22)*(int16)441) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_22, conv_s1_y_22)*(int16)473) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_22, conv_s1_y_22)*(int16)505) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_22, conv_s1_y_22)*(int16)537) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_22, conv_s1_y_22)*(int16)569) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_22, conv_s1_y_22)*(int16)601) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_22, conv_s1_y_22)*(int16)633) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_22, conv_s1_y_22)*(int16)665) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_22, conv_s1_y_22)*(int16)697) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_22, conv_s1_y_22)*(int16)729) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_22, conv_s1_y_22)*(int16)761) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_22, conv_s1_y_22)*(int16)793) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_22, conv_s1_y_22)*(int16)825) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_22, conv_s1_y_22)*(int16)857) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_22, conv_s1_y_22)*(int16)889) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_22, conv_s1_y_22)*(int16)921) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_22, conv_s1_y_22)*(int16)953) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_22, conv_s1_y_22)*(int16)1017) + (hw_input_global_wrapper.stencil(30, conv_s1_x_22, conv_s1_y_22)*(int16)985)))))))))))))))))))))))))))))))))
hw_uint<16> hcompute_conv_stencil_23(hw_uint<16>& conv_stencil, hw_uint<512>& hw_input_global_wrapper_stencil) {
  int16_t _conv_stencil_23 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_705 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_706 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_707 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_708 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_709 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_710 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_711 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_712 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_input_global_wrapper_stencil_713 = (int16_t) hw_input_global_wrapper_stencil.extract<128, 143>();
  int16_t _hw_input_global_wrapper_stencil_714 = (int16_t) hw_input_global_wrapper_stencil.extract<144, 159>();
  int16_t _hw_input_global_wrapper_stencil_715 = (int16_t) hw_input_global_wrapper_stencil.extract<160, 175>();
  int16_t _hw_input_global_wrapper_stencil_716 = (int16_t) hw_input_global_wrapper_stencil.extract<176, 191>();
  int16_t _hw_input_global_wrapper_stencil_717 = (int16_t) hw_input_global_wrapper_stencil.extract<192, 207>();
  int16_t _hw_input_global_wrapper_stencil_718 = (int16_t) hw_input_global_wrapper_stencil.extract<208, 223>();
  int16_t _hw_input_global_wrapper_stencil_719 = (int16_t) hw_input_global_wrapper_stencil.extract<224, 239>();
  int16_t _hw_input_global_wrapper_stencil_720 = (int16_t) hw_input_global_wrapper_stencil.extract<240, 255>();
  int16_t _hw_input_global_wrapper_stencil_721 = (int16_t) hw_input_global_wrapper_stencil.extract<256, 271>();
  int16_t _hw_input_global_wrapper_stencil_722 = (int16_t) hw_input_global_wrapper_stencil.extract<272, 287>();
  int16_t _hw_input_global_wrapper_stencil_723 = (int16_t) hw_input_global_wrapper_stencil.extract<288, 303>();
  int16_t _hw_input_global_wrapper_stencil_724 = (int16_t) hw_input_global_wrapper_stencil.extract<304, 319>();
  int16_t _hw_input_global_wrapper_stencil_725 = (int16_t) hw_input_global_wrapper_stencil.extract<320, 335>();
  int16_t _hw_input_global_wrapper_stencil_726 = (int16_t) hw_input_global_wrapper_stencil.extract<336, 351>();
  int16_t _hw_input_global_wrapper_stencil_727 = (int16_t) hw_input_global_wrapper_stencil.extract<352, 367>();
  int16_t _hw_input_global_wrapper_stencil_728 = (int16_t) hw_input_global_wrapper_stencil.extract<368, 383>();
  int16_t _hw_input_global_wrapper_stencil_729 = (int16_t) hw_input_global_wrapper_stencil.extract<384, 399>();
  int16_t _hw_input_global_wrapper_stencil_730 = (int16_t) hw_input_global_wrapper_stencil.extract<400, 415>();
  int16_t _hw_input_global_wrapper_stencil_731 = (int16_t) hw_input_global_wrapper_stencil.extract<416, 431>();
  int16_t _hw_input_global_wrapper_stencil_732 = (int16_t) hw_input_global_wrapper_stencil.extract<432, 447>();
  int16_t _hw_input_global_wrapper_stencil_733 = (int16_t) hw_input_global_wrapper_stencil.extract<448, 463>();
  int16_t _hw_input_global_wrapper_stencil_734 = (int16_t) hw_input_global_wrapper_stencil.extract<464, 479>();
  int16_t _hw_input_global_wrapper_stencil_735 = (int16_t) hw_input_global_wrapper_stencil.extract<480, 495>();
  int16_t _hw_input_global_wrapper_stencil_736 = (int16_t) hw_input_global_wrapper_stencil.extract<496, 511>();

  int16_t _7483 = (int16_t)(25);
  int16_t _7484 = _hw_input_global_wrapper_stencil_705 * _7483;
  int16_t _7485 = (int16_t)(57);
  int16_t _7486 = _hw_input_global_wrapper_stencil_706 * _7485;
  int16_t _7487 = (int16_t)(89);
  int16_t _7488 = _hw_input_global_wrapper_stencil_707 * _7487;
  int16_t _7489 = (int16_t)(121);
  int16_t _7490 = _hw_input_global_wrapper_stencil_708 * _7489;
  int16_t _7491 = (int16_t)(153);
  int16_t _7492 = _hw_input_global_wrapper_stencil_709 * _7491;
  int16_t _7493 = (int16_t)(185);
  int16_t _7494 = _hw_input_global_wrapper_stencil_710 * _7493;
  int16_t _7495 = (int16_t)(217);
  int16_t _7496 = _hw_input_global_wrapper_stencil_711 * _7495;
  int16_t _7497 = (int16_t)(249);
  int16_t _7498 = _hw_input_global_wrapper_stencil_712 * _7497;
  int16_t _7499 = (int16_t)(281);
  int16_t _7500 = _hw_input_global_wrapper_stencil_713 * _7499;
  int16_t _7501 = (int16_t)(313);
  int16_t _7502 = _hw_input_global_wrapper_stencil_714 * _7501;
  int16_t _7503 = (int16_t)(345);
  int16_t _7504 = _hw_input_global_wrapper_stencil_715 * _7503;
  int16_t _7505 = (int16_t)(377);
  int16_t _7506 = _hw_input_global_wrapper_stencil_716 * _7505;
  int16_t _7507 = (int16_t)(409);
  int16_t _7508 = _hw_input_global_wrapper_stencil_717 * _7507;
  int16_t _7509 = (int16_t)(441);
  int16_t _7510 = _hw_input_global_wrapper_stencil_718 * _7509;
  int16_t _7511 = (int16_t)(473);
  int16_t _7512 = _hw_input_global_wrapper_stencil_719 * _7511;
  int16_t _7513 = (int16_t)(505);
  int16_t _7514 = _hw_input_global_wrapper_stencil_720 * _7513;
  int16_t _7515 = (int16_t)(537);
  int16_t _7516 = _hw_input_global_wrapper_stencil_721 * _7515;
  int16_t _7517 = (int16_t)(569);
  int16_t _7518 = _hw_input_global_wrapper_stencil_722 * _7517;
  int16_t _7519 = (int16_t)(601);
  int16_t _7520 = _hw_input_global_wrapper_stencil_723 * _7519;
  int16_t _7521 = (int16_t)(633);
  int16_t _7522 = _hw_input_global_wrapper_stencil_724 * _7521;
  int16_t _7523 = (int16_t)(665);
  int16_t _7524 = _hw_input_global_wrapper_stencil_725 * _7523;
  int16_t _7525 = (int16_t)(697);
  int16_t _7526 = _hw_input_global_wrapper_stencil_726 * _7525;
  int16_t _7527 = (int16_t)(729);
  int16_t _7528 = _hw_input_global_wrapper_stencil_727 * _7527;
  int16_t _7529 = (int16_t)(761);
  int16_t _7530 = _hw_input_global_wrapper_stencil_728 * _7529;
  int16_t _7531 = (int16_t)(793);
  int16_t _7532 = _hw_input_global_wrapper_stencil_729 * _7531;
  int16_t _7533 = (int16_t)(825);
  int16_t _7534 = _hw_input_global_wrapper_stencil_730 * _7533;
  int16_t _7535 = (int16_t)(857);
  int16_t _7536 = _hw_input_global_wrapper_stencil_731 * _7535;
  int16_t _7537 = (int16_t)(889);
  int16_t _7538 = _hw_input_global_wrapper_stencil_732 * _7537;
  int16_t _7539 = (int16_t)(921);
  int16_t _7540 = _hw_input_global_wrapper_stencil_733 * _7539;
  int16_t _7541 = (int16_t)(953);
  int16_t _7542 = _hw_input_global_wrapper_stencil_734 * _7541;
  int16_t _7543 = (int16_t)(1017);
  int16_t _7544 = _hw_input_global_wrapper_stencil_735 * _7543;
  int16_t _7545 = (int16_t)(985);
  int16_t _7546 = _hw_input_global_wrapper_stencil_736 * _7545;
  int16_t _7547 = _7544 + _7546;
  int16_t _7548 = _7542 + _7547;
  int16_t _7549 = _7540 + _7548;
  int16_t _7550 = _7538 + _7549;
  int16_t _7551 = _7536 + _7550;
  int16_t _7552 = _7534 + _7551;
  int16_t _7553 = _7532 + _7552;
  int16_t _7554 = _7530 + _7553;
  int16_t _7555 = _7528 + _7554;
  int16_t _7556 = _7526 + _7555;
  int16_t _7557 = _7524 + _7556;
  int16_t _7558 = _7522 + _7557;
  int16_t _7559 = _7520 + _7558;
  int16_t _7560 = _7518 + _7559;
  int16_t _7561 = _7516 + _7560;
  int16_t _7562 = _7514 + _7561;
  int16_t _7563 = _7512 + _7562;
  int16_t _7564 = _7510 + _7563;
  int16_t _7565 = _7508 + _7564;
  int16_t _7566 = _7506 + _7565;
  int16_t _7567 = _7504 + _7566;
  int16_t _7568 = _7502 + _7567;
  int16_t _7569 = _7500 + _7568;
  int16_t _7570 = _7498 + _7569;
  int16_t _7571 = _7496 + _7570;
  int16_t _7572 = _7494 + _7571;
  int16_t _7573 = _7492 + _7572;
  int16_t _7574 = _7490 + _7573;
  int16_t _7575 = _7488 + _7574;
  int16_t _7576 = _7486 + _7575;
  int16_t _7577 = _conv_stencil_23 + _7576;
  int16_t _7578 = _7484 + _7577;
  return _7578;
}

//store is: conv.stencil(conv_s1_x_23, conv_s1_y_23, 23) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_23, conv_s1_y_23)*(int16)26) + (conv.stencil(conv_s1_x_23, conv_s1_y_23, 23) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_23, conv_s1_y_23)*(int16)58) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_23, conv_s1_y_23)*(int16)90) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_23, conv_s1_y_23)*(int16)122) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_23, conv_s1_y_23)*(int16)154) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_23, conv_s1_y_23)*(int16)186) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_23, conv_s1_y_23)*(int16)218) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_23, conv_s1_y_23)*(int16)250) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_23, conv_s1_y_23)*(int16)282) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_23, conv_s1_y_23)*(int16)314) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_23, conv_s1_y_23)*(int16)346) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_23, conv_s1_y_23)*(int16)378) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_23, conv_s1_y_23)*(int16)410) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_23, conv_s1_y_23)*(int16)442) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_23, conv_s1_y_23)*(int16)474) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_23, conv_s1_y_23)*(int16)506) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_23, conv_s1_y_23)*(int16)538) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_23, conv_s1_y_23)*(int16)570) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_23, conv_s1_y_23)*(int16)602) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_23, conv_s1_y_23)*(int16)634) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_23, conv_s1_y_23)*(int16)666) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_23, conv_s1_y_23)*(int16)698) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_23, conv_s1_y_23)*(int16)730) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_23, conv_s1_y_23)*(int16)762) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_23, conv_s1_y_23)*(int16)794) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_23, conv_s1_y_23)*(int16)826) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_23, conv_s1_y_23)*(int16)858) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_23, conv_s1_y_23)*(int16)890) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_23, conv_s1_y_23)*(int16)922) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_23, conv_s1_y_23)*(int16)954) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_23, conv_s1_y_23)*(int16)1018) + (hw_input_global_wrapper.stencil(30, conv_s1_x_23, conv_s1_y_23)*(int16)986)))))))))))))))))))))))))))))))))
hw_uint<16> hcompute_conv_stencil_24(hw_uint<16>& conv_stencil, hw_uint<512>& hw_input_global_wrapper_stencil) {
  int16_t _conv_stencil_24 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_737 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_738 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_739 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_740 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_741 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_742 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_743 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_744 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_input_global_wrapper_stencil_745 = (int16_t) hw_input_global_wrapper_stencil.extract<128, 143>();
  int16_t _hw_input_global_wrapper_stencil_746 = (int16_t) hw_input_global_wrapper_stencil.extract<144, 159>();
  int16_t _hw_input_global_wrapper_stencil_747 = (int16_t) hw_input_global_wrapper_stencil.extract<160, 175>();
  int16_t _hw_input_global_wrapper_stencil_748 = (int16_t) hw_input_global_wrapper_stencil.extract<176, 191>();
  int16_t _hw_input_global_wrapper_stencil_749 = (int16_t) hw_input_global_wrapper_stencil.extract<192, 207>();
  int16_t _hw_input_global_wrapper_stencil_750 = (int16_t) hw_input_global_wrapper_stencil.extract<208, 223>();
  int16_t _hw_input_global_wrapper_stencil_751 = (int16_t) hw_input_global_wrapper_stencil.extract<224, 239>();
  int16_t _hw_input_global_wrapper_stencil_752 = (int16_t) hw_input_global_wrapper_stencil.extract<240, 255>();
  int16_t _hw_input_global_wrapper_stencil_753 = (int16_t) hw_input_global_wrapper_stencil.extract<256, 271>();
  int16_t _hw_input_global_wrapper_stencil_754 = (int16_t) hw_input_global_wrapper_stencil.extract<272, 287>();
  int16_t _hw_input_global_wrapper_stencil_755 = (int16_t) hw_input_global_wrapper_stencil.extract<288, 303>();
  int16_t _hw_input_global_wrapper_stencil_756 = (int16_t) hw_input_global_wrapper_stencil.extract<304, 319>();
  int16_t _hw_input_global_wrapper_stencil_757 = (int16_t) hw_input_global_wrapper_stencil.extract<320, 335>();
  int16_t _hw_input_global_wrapper_stencil_758 = (int16_t) hw_input_global_wrapper_stencil.extract<336, 351>();
  int16_t _hw_input_global_wrapper_stencil_759 = (int16_t) hw_input_global_wrapper_stencil.extract<352, 367>();
  int16_t _hw_input_global_wrapper_stencil_760 = (int16_t) hw_input_global_wrapper_stencil.extract<368, 383>();
  int16_t _hw_input_global_wrapper_stencil_761 = (int16_t) hw_input_global_wrapper_stencil.extract<384, 399>();
  int16_t _hw_input_global_wrapper_stencil_762 = (int16_t) hw_input_global_wrapper_stencil.extract<400, 415>();
  int16_t _hw_input_global_wrapper_stencil_763 = (int16_t) hw_input_global_wrapper_stencil.extract<416, 431>();
  int16_t _hw_input_global_wrapper_stencil_764 = (int16_t) hw_input_global_wrapper_stencil.extract<432, 447>();
  int16_t _hw_input_global_wrapper_stencil_765 = (int16_t) hw_input_global_wrapper_stencil.extract<448, 463>();
  int16_t _hw_input_global_wrapper_stencil_766 = (int16_t) hw_input_global_wrapper_stencil.extract<464, 479>();
  int16_t _hw_input_global_wrapper_stencil_767 = (int16_t) hw_input_global_wrapper_stencil.extract<480, 495>();
  int16_t _hw_input_global_wrapper_stencil_768 = (int16_t) hw_input_global_wrapper_stencil.extract<496, 511>();

  int16_t _7804 = (int16_t)(26);
  int16_t _7805 = _hw_input_global_wrapper_stencil_737 * _7804;
  int16_t _7806 = (int16_t)(58);
  int16_t _7807 = _hw_input_global_wrapper_stencil_738 * _7806;
  int16_t _7808 = (int16_t)(90);
  int16_t _7809 = _hw_input_global_wrapper_stencil_739 * _7808;
  int16_t _7810 = (int16_t)(122);
  int16_t _7811 = _hw_input_global_wrapper_stencil_740 * _7810;
  int16_t _7812 = (int16_t)(154);
  int16_t _7813 = _hw_input_global_wrapper_stencil_741 * _7812;
  int16_t _7814 = (int16_t)(186);
  int16_t _7815 = _hw_input_global_wrapper_stencil_742 * _7814;
  int16_t _7816 = (int16_t)(218);
  int16_t _7817 = _hw_input_global_wrapper_stencil_743 * _7816;
  int16_t _7818 = (int16_t)(250);
  int16_t _7819 = _hw_input_global_wrapper_stencil_744 * _7818;
  int16_t _7820 = (int16_t)(282);
  int16_t _7821 = _hw_input_global_wrapper_stencil_745 * _7820;
  int16_t _7822 = (int16_t)(314);
  int16_t _7823 = _hw_input_global_wrapper_stencil_746 * _7822;
  int16_t _7824 = (int16_t)(346);
  int16_t _7825 = _hw_input_global_wrapper_stencil_747 * _7824;
  int16_t _7826 = (int16_t)(378);
  int16_t _7827 = _hw_input_global_wrapper_stencil_748 * _7826;
  int16_t _7828 = (int16_t)(410);
  int16_t _7829 = _hw_input_global_wrapper_stencil_749 * _7828;
  int16_t _7830 = (int16_t)(442);
  int16_t _7831 = _hw_input_global_wrapper_stencil_750 * _7830;
  int16_t _7832 = (int16_t)(474);
  int16_t _7833 = _hw_input_global_wrapper_stencil_751 * _7832;
  int16_t _7834 = (int16_t)(506);
  int16_t _7835 = _hw_input_global_wrapper_stencil_752 * _7834;
  int16_t _7836 = (int16_t)(538);
  int16_t _7837 = _hw_input_global_wrapper_stencil_753 * _7836;
  int16_t _7838 = (int16_t)(570);
  int16_t _7839 = _hw_input_global_wrapper_stencil_754 * _7838;
  int16_t _7840 = (int16_t)(602);
  int16_t _7841 = _hw_input_global_wrapper_stencil_755 * _7840;
  int16_t _7842 = (int16_t)(634);
  int16_t _7843 = _hw_input_global_wrapper_stencil_756 * _7842;
  int16_t _7844 = (int16_t)(666);
  int16_t _7845 = _hw_input_global_wrapper_stencil_757 * _7844;
  int16_t _7846 = (int16_t)(698);
  int16_t _7847 = _hw_input_global_wrapper_stencil_758 * _7846;
  int16_t _7848 = (int16_t)(730);
  int16_t _7849 = _hw_input_global_wrapper_stencil_759 * _7848;
  int16_t _7850 = (int16_t)(762);
  int16_t _7851 = _hw_input_global_wrapper_stencil_760 * _7850;
  int16_t _7852 = (int16_t)(794);
  int16_t _7853 = _hw_input_global_wrapper_stencil_761 * _7852;
  int16_t _7854 = (int16_t)(826);
  int16_t _7855 = _hw_input_global_wrapper_stencil_762 * _7854;
  int16_t _7856 = (int16_t)(858);
  int16_t _7857 = _hw_input_global_wrapper_stencil_763 * _7856;
  int16_t _7858 = (int16_t)(890);
  int16_t _7859 = _hw_input_global_wrapper_stencil_764 * _7858;
  int16_t _7860 = (int16_t)(922);
  int16_t _7861 = _hw_input_global_wrapper_stencil_765 * _7860;
  int16_t _7862 = (int16_t)(954);
  int16_t _7863 = _hw_input_global_wrapper_stencil_766 * _7862;
  int16_t _7864 = (int16_t)(1018);
  int16_t _7865 = _hw_input_global_wrapper_stencil_767 * _7864;
  int16_t _7866 = (int16_t)(986);
  int16_t _7867 = _hw_input_global_wrapper_stencil_768 * _7866;
  int16_t _7868 = _7865 + _7867;
  int16_t _7869 = _7863 + _7868;
  int16_t _7870 = _7861 + _7869;
  int16_t _7871 = _7859 + _7870;
  int16_t _7872 = _7857 + _7871;
  int16_t _7873 = _7855 + _7872;
  int16_t _7874 = _7853 + _7873;
  int16_t _7875 = _7851 + _7874;
  int16_t _7876 = _7849 + _7875;
  int16_t _7877 = _7847 + _7876;
  int16_t _7878 = _7845 + _7877;
  int16_t _7879 = _7843 + _7878;
  int16_t _7880 = _7841 + _7879;
  int16_t _7881 = _7839 + _7880;
  int16_t _7882 = _7837 + _7881;
  int16_t _7883 = _7835 + _7882;
  int16_t _7884 = _7833 + _7883;
  int16_t _7885 = _7831 + _7884;
  int16_t _7886 = _7829 + _7885;
  int16_t _7887 = _7827 + _7886;
  int16_t _7888 = _7825 + _7887;
  int16_t _7889 = _7823 + _7888;
  int16_t _7890 = _7821 + _7889;
  int16_t _7891 = _7819 + _7890;
  int16_t _7892 = _7817 + _7891;
  int16_t _7893 = _7815 + _7892;
  int16_t _7894 = _7813 + _7893;
  int16_t _7895 = _7811 + _7894;
  int16_t _7896 = _7809 + _7895;
  int16_t _7897 = _7807 + _7896;
  int16_t _7898 = _conv_stencil_24 + _7897;
  int16_t _7899 = _7805 + _7898;
  return _7899;
}

//store is: conv.stencil(conv_s1_x_24, conv_s1_y_24, 24) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_24, conv_s1_y_24)*(int16)27) + (conv.stencil(conv_s1_x_24, conv_s1_y_24, 24) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_24, conv_s1_y_24)*(int16)59) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_24, conv_s1_y_24)*(int16)91) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_24, conv_s1_y_24)*(int16)123) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_24, conv_s1_y_24)*(int16)155) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_24, conv_s1_y_24)*(int16)187) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_24, conv_s1_y_24)*(int16)219) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_24, conv_s1_y_24)*(int16)251) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_24, conv_s1_y_24)*(int16)283) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_24, conv_s1_y_24)*(int16)315) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_24, conv_s1_y_24)*(int16)347) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_24, conv_s1_y_24)*(int16)379) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_24, conv_s1_y_24)*(int16)411) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_24, conv_s1_y_24)*(int16)443) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_24, conv_s1_y_24)*(int16)475) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_24, conv_s1_y_24)*(int16)507) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_24, conv_s1_y_24)*(int16)539) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_24, conv_s1_y_24)*(int16)571) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_24, conv_s1_y_24)*(int16)603) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_24, conv_s1_y_24)*(int16)635) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_24, conv_s1_y_24)*(int16)667) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_24, conv_s1_y_24)*(int16)699) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_24, conv_s1_y_24)*(int16)731) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_24, conv_s1_y_24)*(int16)763) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_24, conv_s1_y_24)*(int16)795) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_24, conv_s1_y_24)*(int16)827) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_24, conv_s1_y_24)*(int16)859) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_24, conv_s1_y_24)*(int16)891) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_24, conv_s1_y_24)*(int16)923) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_24, conv_s1_y_24)*(int16)955) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_24, conv_s1_y_24)*(int16)1019) + (hw_input_global_wrapper.stencil(30, conv_s1_x_24, conv_s1_y_24)*(int16)987)))))))))))))))))))))))))))))))))
hw_uint<16> hcompute_conv_stencil_25(hw_uint<16>& conv_stencil, hw_uint<512>& hw_input_global_wrapper_stencil) {
  int16_t _conv_stencil_25 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_769 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_770 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_771 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_772 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_773 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_774 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_775 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_776 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_input_global_wrapper_stencil_777 = (int16_t) hw_input_global_wrapper_stencil.extract<128, 143>();
  int16_t _hw_input_global_wrapper_stencil_778 = (int16_t) hw_input_global_wrapper_stencil.extract<144, 159>();
  int16_t _hw_input_global_wrapper_stencil_779 = (int16_t) hw_input_global_wrapper_stencil.extract<160, 175>();
  int16_t _hw_input_global_wrapper_stencil_780 = (int16_t) hw_input_global_wrapper_stencil.extract<176, 191>();
  int16_t _hw_input_global_wrapper_stencil_781 = (int16_t) hw_input_global_wrapper_stencil.extract<192, 207>();
  int16_t _hw_input_global_wrapper_stencil_782 = (int16_t) hw_input_global_wrapper_stencil.extract<208, 223>();
  int16_t _hw_input_global_wrapper_stencil_783 = (int16_t) hw_input_global_wrapper_stencil.extract<224, 239>();
  int16_t _hw_input_global_wrapper_stencil_784 = (int16_t) hw_input_global_wrapper_stencil.extract<240, 255>();
  int16_t _hw_input_global_wrapper_stencil_785 = (int16_t) hw_input_global_wrapper_stencil.extract<256, 271>();
  int16_t _hw_input_global_wrapper_stencil_786 = (int16_t) hw_input_global_wrapper_stencil.extract<272, 287>();
  int16_t _hw_input_global_wrapper_stencil_787 = (int16_t) hw_input_global_wrapper_stencil.extract<288, 303>();
  int16_t _hw_input_global_wrapper_stencil_788 = (int16_t) hw_input_global_wrapper_stencil.extract<304, 319>();
  int16_t _hw_input_global_wrapper_stencil_789 = (int16_t) hw_input_global_wrapper_stencil.extract<320, 335>();
  int16_t _hw_input_global_wrapper_stencil_790 = (int16_t) hw_input_global_wrapper_stencil.extract<336, 351>();
  int16_t _hw_input_global_wrapper_stencil_791 = (int16_t) hw_input_global_wrapper_stencil.extract<352, 367>();
  int16_t _hw_input_global_wrapper_stencil_792 = (int16_t) hw_input_global_wrapper_stencil.extract<368, 383>();
  int16_t _hw_input_global_wrapper_stencil_793 = (int16_t) hw_input_global_wrapper_stencil.extract<384, 399>();
  int16_t _hw_input_global_wrapper_stencil_794 = (int16_t) hw_input_global_wrapper_stencil.extract<400, 415>();
  int16_t _hw_input_global_wrapper_stencil_795 = (int16_t) hw_input_global_wrapper_stencil.extract<416, 431>();
  int16_t _hw_input_global_wrapper_stencil_796 = (int16_t) hw_input_global_wrapper_stencil.extract<432, 447>();
  int16_t _hw_input_global_wrapper_stencil_797 = (int16_t) hw_input_global_wrapper_stencil.extract<448, 463>();
  int16_t _hw_input_global_wrapper_stencil_798 = (int16_t) hw_input_global_wrapper_stencil.extract<464, 479>();
  int16_t _hw_input_global_wrapper_stencil_799 = (int16_t) hw_input_global_wrapper_stencil.extract<480, 495>();
  int16_t _hw_input_global_wrapper_stencil_800 = (int16_t) hw_input_global_wrapper_stencil.extract<496, 511>();

  int16_t _8125 = (int16_t)(27);
  int16_t _8126 = _hw_input_global_wrapper_stencil_769 * _8125;
  int16_t _8127 = (int16_t)(59);
  int16_t _8128 = _hw_input_global_wrapper_stencil_770 * _8127;
  int16_t _8129 = (int16_t)(91);
  int16_t _8130 = _hw_input_global_wrapper_stencil_771 * _8129;
  int16_t _8131 = (int16_t)(123);
  int16_t _8132 = _hw_input_global_wrapper_stencil_772 * _8131;
  int16_t _8133 = (int16_t)(155);
  int16_t _8134 = _hw_input_global_wrapper_stencil_773 * _8133;
  int16_t _8135 = (int16_t)(187);
  int16_t _8136 = _hw_input_global_wrapper_stencil_774 * _8135;
  int16_t _8137 = (int16_t)(219);
  int16_t _8138 = _hw_input_global_wrapper_stencil_775 * _8137;
  int16_t _8139 = (int16_t)(251);
  int16_t _8140 = _hw_input_global_wrapper_stencil_776 * _8139;
  int16_t _8141 = (int16_t)(283);
  int16_t _8142 = _hw_input_global_wrapper_stencil_777 * _8141;
  int16_t _8143 = (int16_t)(315);
  int16_t _8144 = _hw_input_global_wrapper_stencil_778 * _8143;
  int16_t _8145 = (int16_t)(347);
  int16_t _8146 = _hw_input_global_wrapper_stencil_779 * _8145;
  int16_t _8147 = (int16_t)(379);
  int16_t _8148 = _hw_input_global_wrapper_stencil_780 * _8147;
  int16_t _8149 = (int16_t)(411);
  int16_t _8150 = _hw_input_global_wrapper_stencil_781 * _8149;
  int16_t _8151 = (int16_t)(443);
  int16_t _8152 = _hw_input_global_wrapper_stencil_782 * _8151;
  int16_t _8153 = (int16_t)(475);
  int16_t _8154 = _hw_input_global_wrapper_stencil_783 * _8153;
  int16_t _8155 = (int16_t)(507);
  int16_t _8156 = _hw_input_global_wrapper_stencil_784 * _8155;
  int16_t _8157 = (int16_t)(539);
  int16_t _8158 = _hw_input_global_wrapper_stencil_785 * _8157;
  int16_t _8159 = (int16_t)(571);
  int16_t _8160 = _hw_input_global_wrapper_stencil_786 * _8159;
  int16_t _8161 = (int16_t)(603);
  int16_t _8162 = _hw_input_global_wrapper_stencil_787 * _8161;
  int16_t _8163 = (int16_t)(635);
  int16_t _8164 = _hw_input_global_wrapper_stencil_788 * _8163;
  int16_t _8165 = (int16_t)(667);
  int16_t _8166 = _hw_input_global_wrapper_stencil_789 * _8165;
  int16_t _8167 = (int16_t)(699);
  int16_t _8168 = _hw_input_global_wrapper_stencil_790 * _8167;
  int16_t _8169 = (int16_t)(731);
  int16_t _8170 = _hw_input_global_wrapper_stencil_791 * _8169;
  int16_t _8171 = (int16_t)(763);
  int16_t _8172 = _hw_input_global_wrapper_stencil_792 * _8171;
  int16_t _8173 = (int16_t)(795);
  int16_t _8174 = _hw_input_global_wrapper_stencil_793 * _8173;
  int16_t _8175 = (int16_t)(827);
  int16_t _8176 = _hw_input_global_wrapper_stencil_794 * _8175;
  int16_t _8177 = (int16_t)(859);
  int16_t _8178 = _hw_input_global_wrapper_stencil_795 * _8177;
  int16_t _8179 = (int16_t)(891);
  int16_t _8180 = _hw_input_global_wrapper_stencil_796 * _8179;
  int16_t _8181 = (int16_t)(923);
  int16_t _8182 = _hw_input_global_wrapper_stencil_797 * _8181;
  int16_t _8183 = (int16_t)(955);
  int16_t _8184 = _hw_input_global_wrapper_stencil_798 * _8183;
  int16_t _8185 = (int16_t)(1019);
  int16_t _8186 = _hw_input_global_wrapper_stencil_799 * _8185;
  int16_t _8187 = (int16_t)(987);
  int16_t _8188 = _hw_input_global_wrapper_stencil_800 * _8187;
  int16_t _8189 = _8186 + _8188;
  int16_t _8190 = _8184 + _8189;
  int16_t _8191 = _8182 + _8190;
  int16_t _8192 = _8180 + _8191;
  int16_t _8193 = _8178 + _8192;
  int16_t _8194 = _8176 + _8193;
  int16_t _8195 = _8174 + _8194;
  int16_t _8196 = _8172 + _8195;
  int16_t _8197 = _8170 + _8196;
  int16_t _8198 = _8168 + _8197;
  int16_t _8199 = _8166 + _8198;
  int16_t _8200 = _8164 + _8199;
  int16_t _8201 = _8162 + _8200;
  int16_t _8202 = _8160 + _8201;
  int16_t _8203 = _8158 + _8202;
  int16_t _8204 = _8156 + _8203;
  int16_t _8205 = _8154 + _8204;
  int16_t _8206 = _8152 + _8205;
  int16_t _8207 = _8150 + _8206;
  int16_t _8208 = _8148 + _8207;
  int16_t _8209 = _8146 + _8208;
  int16_t _8210 = _8144 + _8209;
  int16_t _8211 = _8142 + _8210;
  int16_t _8212 = _8140 + _8211;
  int16_t _8213 = _8138 + _8212;
  int16_t _8214 = _8136 + _8213;
  int16_t _8215 = _8134 + _8214;
  int16_t _8216 = _8132 + _8215;
  int16_t _8217 = _8130 + _8216;
  int16_t _8218 = _8128 + _8217;
  int16_t _8219 = _conv_stencil_25 + _8218;
  int16_t _8220 = _8126 + _8219;
  return _8220;
}

//store is: conv.stencil(conv_s1_x_25, conv_s1_y_25, 25) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_25, conv_s1_y_25)*(int16)28) + (conv.stencil(conv_s1_x_25, conv_s1_y_25, 25) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_25, conv_s1_y_25)*(int16)60) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_25, conv_s1_y_25)*(int16)92) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_25, conv_s1_y_25)*(int16)124) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_25, conv_s1_y_25)*(int16)156) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_25, conv_s1_y_25)*(int16)188) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_25, conv_s1_y_25)*(int16)220) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_25, conv_s1_y_25)*(int16)252) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_25, conv_s1_y_25)*(int16)284) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_25, conv_s1_y_25)*(int16)316) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_25, conv_s1_y_25)*(int16)348) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_25, conv_s1_y_25)*(int16)380) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_25, conv_s1_y_25)*(int16)412) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_25, conv_s1_y_25)*(int16)444) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_25, conv_s1_y_25)*(int16)476) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_25, conv_s1_y_25)*(int16)508) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_25, conv_s1_y_25)*(int16)540) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_25, conv_s1_y_25)*(int16)572) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_25, conv_s1_y_25)*(int16)604) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_25, conv_s1_y_25)*(int16)636) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_25, conv_s1_y_25)*(int16)668) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_25, conv_s1_y_25)*(int16)700) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_25, conv_s1_y_25)*(int16)732) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_25, conv_s1_y_25)*(int16)764) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_25, conv_s1_y_25)*(int16)796) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_25, conv_s1_y_25)*(int16)828) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_25, conv_s1_y_25)*(int16)860) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_25, conv_s1_y_25)*(int16)892) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_25, conv_s1_y_25)*(int16)924) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_25, conv_s1_y_25)*(int16)956) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_25, conv_s1_y_25)*(int16)1020) + (hw_input_global_wrapper.stencil(30, conv_s1_x_25, conv_s1_y_25)*(int16)988)))))))))))))))))))))))))))))))))
hw_uint<16> hcompute_conv_stencil_26(hw_uint<16>& conv_stencil, hw_uint<512>& hw_input_global_wrapper_stencil) {
  int16_t _conv_stencil_26 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_801 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_802 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_803 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_804 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_805 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_806 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_807 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_808 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_input_global_wrapper_stencil_809 = (int16_t) hw_input_global_wrapper_stencil.extract<128, 143>();
  int16_t _hw_input_global_wrapper_stencil_810 = (int16_t) hw_input_global_wrapper_stencil.extract<144, 159>();
  int16_t _hw_input_global_wrapper_stencil_811 = (int16_t) hw_input_global_wrapper_stencil.extract<160, 175>();
  int16_t _hw_input_global_wrapper_stencil_812 = (int16_t) hw_input_global_wrapper_stencil.extract<176, 191>();
  int16_t _hw_input_global_wrapper_stencil_813 = (int16_t) hw_input_global_wrapper_stencil.extract<192, 207>();
  int16_t _hw_input_global_wrapper_stencil_814 = (int16_t) hw_input_global_wrapper_stencil.extract<208, 223>();
  int16_t _hw_input_global_wrapper_stencil_815 = (int16_t) hw_input_global_wrapper_stencil.extract<224, 239>();
  int16_t _hw_input_global_wrapper_stencil_816 = (int16_t) hw_input_global_wrapper_stencil.extract<240, 255>();
  int16_t _hw_input_global_wrapper_stencil_817 = (int16_t) hw_input_global_wrapper_stencil.extract<256, 271>();
  int16_t _hw_input_global_wrapper_stencil_818 = (int16_t) hw_input_global_wrapper_stencil.extract<272, 287>();
  int16_t _hw_input_global_wrapper_stencil_819 = (int16_t) hw_input_global_wrapper_stencil.extract<288, 303>();
  int16_t _hw_input_global_wrapper_stencil_820 = (int16_t) hw_input_global_wrapper_stencil.extract<304, 319>();
  int16_t _hw_input_global_wrapper_stencil_821 = (int16_t) hw_input_global_wrapper_stencil.extract<320, 335>();
  int16_t _hw_input_global_wrapper_stencil_822 = (int16_t) hw_input_global_wrapper_stencil.extract<336, 351>();
  int16_t _hw_input_global_wrapper_stencil_823 = (int16_t) hw_input_global_wrapper_stencil.extract<352, 367>();
  int16_t _hw_input_global_wrapper_stencil_824 = (int16_t) hw_input_global_wrapper_stencil.extract<368, 383>();
  int16_t _hw_input_global_wrapper_stencil_825 = (int16_t) hw_input_global_wrapper_stencil.extract<384, 399>();
  int16_t _hw_input_global_wrapper_stencil_826 = (int16_t) hw_input_global_wrapper_stencil.extract<400, 415>();
  int16_t _hw_input_global_wrapper_stencil_827 = (int16_t) hw_input_global_wrapper_stencil.extract<416, 431>();
  int16_t _hw_input_global_wrapper_stencil_828 = (int16_t) hw_input_global_wrapper_stencil.extract<432, 447>();
  int16_t _hw_input_global_wrapper_stencil_829 = (int16_t) hw_input_global_wrapper_stencil.extract<448, 463>();
  int16_t _hw_input_global_wrapper_stencil_830 = (int16_t) hw_input_global_wrapper_stencil.extract<464, 479>();
  int16_t _hw_input_global_wrapper_stencil_831 = (int16_t) hw_input_global_wrapper_stencil.extract<480, 495>();
  int16_t _hw_input_global_wrapper_stencil_832 = (int16_t) hw_input_global_wrapper_stencil.extract<496, 511>();

  int16_t _8446 = (int16_t)(28);
  int16_t _8447 = _hw_input_global_wrapper_stencil_801 * _8446;
  int16_t _8448 = (int16_t)(60);
  int16_t _8449 = _hw_input_global_wrapper_stencil_802 * _8448;
  int16_t _8450 = (int16_t)(92);
  int16_t _8451 = _hw_input_global_wrapper_stencil_803 * _8450;
  int16_t _8452 = (int16_t)(124);
  int16_t _8453 = _hw_input_global_wrapper_stencil_804 * _8452;
  int16_t _8454 = (int16_t)(156);
  int16_t _8455 = _hw_input_global_wrapper_stencil_805 * _8454;
  int16_t _8456 = (int16_t)(188);
  int16_t _8457 = _hw_input_global_wrapper_stencil_806 * _8456;
  int16_t _8458 = (int16_t)(220);
  int16_t _8459 = _hw_input_global_wrapper_stencil_807 * _8458;
  int16_t _8460 = (int16_t)(252);
  int16_t _8461 = _hw_input_global_wrapper_stencil_808 * _8460;
  int16_t _8462 = (int16_t)(284);
  int16_t _8463 = _hw_input_global_wrapper_stencil_809 * _8462;
  int16_t _8464 = (int16_t)(316);
  int16_t _8465 = _hw_input_global_wrapper_stencil_810 * _8464;
  int16_t _8466 = (int16_t)(348);
  int16_t _8467 = _hw_input_global_wrapper_stencil_811 * _8466;
  int16_t _8468 = (int16_t)(380);
  int16_t _8469 = _hw_input_global_wrapper_stencil_812 * _8468;
  int16_t _8470 = (int16_t)(412);
  int16_t _8471 = _hw_input_global_wrapper_stencil_813 * _8470;
  int16_t _8472 = (int16_t)(444);
  int16_t _8473 = _hw_input_global_wrapper_stencil_814 * _8472;
  int16_t _8474 = (int16_t)(476);
  int16_t _8475 = _hw_input_global_wrapper_stencil_815 * _8474;
  int16_t _8476 = (int16_t)(508);
  int16_t _8477 = _hw_input_global_wrapper_stencil_816 * _8476;
  int16_t _8478 = (int16_t)(540);
  int16_t _8479 = _hw_input_global_wrapper_stencil_817 * _8478;
  int16_t _8480 = (int16_t)(572);
  int16_t _8481 = _hw_input_global_wrapper_stencil_818 * _8480;
  int16_t _8482 = (int16_t)(604);
  int16_t _8483 = _hw_input_global_wrapper_stencil_819 * _8482;
  int16_t _8484 = (int16_t)(636);
  int16_t _8485 = _hw_input_global_wrapper_stencil_820 * _8484;
  int16_t _8486 = (int16_t)(668);
  int16_t _8487 = _hw_input_global_wrapper_stencil_821 * _8486;
  int16_t _8488 = (int16_t)(700);
  int16_t _8489 = _hw_input_global_wrapper_stencil_822 * _8488;
  int16_t _8490 = (int16_t)(732);
  int16_t _8491 = _hw_input_global_wrapper_stencil_823 * _8490;
  int16_t _8492 = (int16_t)(764);
  int16_t _8493 = _hw_input_global_wrapper_stencil_824 * _8492;
  int16_t _8494 = (int16_t)(796);
  int16_t _8495 = _hw_input_global_wrapper_stencil_825 * _8494;
  int16_t _8496 = (int16_t)(828);
  int16_t _8497 = _hw_input_global_wrapper_stencil_826 * _8496;
  int16_t _8498 = (int16_t)(860);
  int16_t _8499 = _hw_input_global_wrapper_stencil_827 * _8498;
  int16_t _8500 = (int16_t)(892);
  int16_t _8501 = _hw_input_global_wrapper_stencil_828 * _8500;
  int16_t _8502 = (int16_t)(924);
  int16_t _8503 = _hw_input_global_wrapper_stencil_829 * _8502;
  int16_t _8504 = (int16_t)(956);
  int16_t _8505 = _hw_input_global_wrapper_stencil_830 * _8504;
  int16_t _8506 = (int16_t)(1020);
  int16_t _8507 = _hw_input_global_wrapper_stencil_831 * _8506;
  int16_t _8508 = (int16_t)(988);
  int16_t _8509 = _hw_input_global_wrapper_stencil_832 * _8508;
  int16_t _8510 = _8507 + _8509;
  int16_t _8511 = _8505 + _8510;
  int16_t _8512 = _8503 + _8511;
  int16_t _8513 = _8501 + _8512;
  int16_t _8514 = _8499 + _8513;
  int16_t _8515 = _8497 + _8514;
  int16_t _8516 = _8495 + _8515;
  int16_t _8517 = _8493 + _8516;
  int16_t _8518 = _8491 + _8517;
  int16_t _8519 = _8489 + _8518;
  int16_t _8520 = _8487 + _8519;
  int16_t _8521 = _8485 + _8520;
  int16_t _8522 = _8483 + _8521;
  int16_t _8523 = _8481 + _8522;
  int16_t _8524 = _8479 + _8523;
  int16_t _8525 = _8477 + _8524;
  int16_t _8526 = _8475 + _8525;
  int16_t _8527 = _8473 + _8526;
  int16_t _8528 = _8471 + _8527;
  int16_t _8529 = _8469 + _8528;
  int16_t _8530 = _8467 + _8529;
  int16_t _8531 = _8465 + _8530;
  int16_t _8532 = _8463 + _8531;
  int16_t _8533 = _8461 + _8532;
  int16_t _8534 = _8459 + _8533;
  int16_t _8535 = _8457 + _8534;
  int16_t _8536 = _8455 + _8535;
  int16_t _8537 = _8453 + _8536;
  int16_t _8538 = _8451 + _8537;
  int16_t _8539 = _8449 + _8538;
  int16_t _8540 = _conv_stencil_26 + _8539;
  int16_t _8541 = _8447 + _8540;
  return _8541;
}

//store is: conv.stencil(conv_s1_x_26, conv_s1_y_26, 26) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_26, conv_s1_y_26)*(int16)29) + (conv.stencil(conv_s1_x_26, conv_s1_y_26, 26) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_26, conv_s1_y_26)*(int16)61) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_26, conv_s1_y_26)*(int16)93) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_26, conv_s1_y_26)*(int16)125) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_26, conv_s1_y_26)*(int16)157) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_26, conv_s1_y_26)*(int16)189) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_26, conv_s1_y_26)*(int16)221) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_26, conv_s1_y_26)*(int16)253) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_26, conv_s1_y_26)*(int16)285) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_26, conv_s1_y_26)*(int16)317) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_26, conv_s1_y_26)*(int16)349) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_26, conv_s1_y_26)*(int16)381) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_26, conv_s1_y_26)*(int16)413) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_26, conv_s1_y_26)*(int16)445) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_26, conv_s1_y_26)*(int16)477) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_26, conv_s1_y_26)*(int16)509) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_26, conv_s1_y_26)*(int16)541) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_26, conv_s1_y_26)*(int16)573) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_26, conv_s1_y_26)*(int16)605) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_26, conv_s1_y_26)*(int16)637) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_26, conv_s1_y_26)*(int16)669) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_26, conv_s1_y_26)*(int16)701) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_26, conv_s1_y_26)*(int16)733) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_26, conv_s1_y_26)*(int16)765) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_26, conv_s1_y_26)*(int16)797) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_26, conv_s1_y_26)*(int16)829) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_26, conv_s1_y_26)*(int16)861) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_26, conv_s1_y_26)*(int16)893) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_26, conv_s1_y_26)*(int16)925) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_26, conv_s1_y_26)*(int16)957) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_26, conv_s1_y_26)*(int16)1021) + (hw_input_global_wrapper.stencil(30, conv_s1_x_26, conv_s1_y_26)*(int16)989)))))))))))))))))))))))))))))))))
hw_uint<16> hcompute_conv_stencil_27(hw_uint<16>& conv_stencil, hw_uint<512>& hw_input_global_wrapper_stencil) {
  int16_t _conv_stencil_27 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_833 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_834 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_835 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_836 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_837 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_838 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_839 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_840 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_input_global_wrapper_stencil_841 = (int16_t) hw_input_global_wrapper_stencil.extract<128, 143>();
  int16_t _hw_input_global_wrapper_stencil_842 = (int16_t) hw_input_global_wrapper_stencil.extract<144, 159>();
  int16_t _hw_input_global_wrapper_stencil_843 = (int16_t) hw_input_global_wrapper_stencil.extract<160, 175>();
  int16_t _hw_input_global_wrapper_stencil_844 = (int16_t) hw_input_global_wrapper_stencil.extract<176, 191>();
  int16_t _hw_input_global_wrapper_stencil_845 = (int16_t) hw_input_global_wrapper_stencil.extract<192, 207>();
  int16_t _hw_input_global_wrapper_stencil_846 = (int16_t) hw_input_global_wrapper_stencil.extract<208, 223>();
  int16_t _hw_input_global_wrapper_stencil_847 = (int16_t) hw_input_global_wrapper_stencil.extract<224, 239>();
  int16_t _hw_input_global_wrapper_stencil_848 = (int16_t) hw_input_global_wrapper_stencil.extract<240, 255>();
  int16_t _hw_input_global_wrapper_stencil_849 = (int16_t) hw_input_global_wrapper_stencil.extract<256, 271>();
  int16_t _hw_input_global_wrapper_stencil_850 = (int16_t) hw_input_global_wrapper_stencil.extract<272, 287>();
  int16_t _hw_input_global_wrapper_stencil_851 = (int16_t) hw_input_global_wrapper_stencil.extract<288, 303>();
  int16_t _hw_input_global_wrapper_stencil_852 = (int16_t) hw_input_global_wrapper_stencil.extract<304, 319>();
  int16_t _hw_input_global_wrapper_stencil_853 = (int16_t) hw_input_global_wrapper_stencil.extract<320, 335>();
  int16_t _hw_input_global_wrapper_stencil_854 = (int16_t) hw_input_global_wrapper_stencil.extract<336, 351>();
  int16_t _hw_input_global_wrapper_stencil_855 = (int16_t) hw_input_global_wrapper_stencil.extract<352, 367>();
  int16_t _hw_input_global_wrapper_stencil_856 = (int16_t) hw_input_global_wrapper_stencil.extract<368, 383>();
  int16_t _hw_input_global_wrapper_stencil_857 = (int16_t) hw_input_global_wrapper_stencil.extract<384, 399>();
  int16_t _hw_input_global_wrapper_stencil_858 = (int16_t) hw_input_global_wrapper_stencil.extract<400, 415>();
  int16_t _hw_input_global_wrapper_stencil_859 = (int16_t) hw_input_global_wrapper_stencil.extract<416, 431>();
  int16_t _hw_input_global_wrapper_stencil_860 = (int16_t) hw_input_global_wrapper_stencil.extract<432, 447>();
  int16_t _hw_input_global_wrapper_stencil_861 = (int16_t) hw_input_global_wrapper_stencil.extract<448, 463>();
  int16_t _hw_input_global_wrapper_stencil_862 = (int16_t) hw_input_global_wrapper_stencil.extract<464, 479>();
  int16_t _hw_input_global_wrapper_stencil_863 = (int16_t) hw_input_global_wrapper_stencil.extract<480, 495>();
  int16_t _hw_input_global_wrapper_stencil_864 = (int16_t) hw_input_global_wrapper_stencil.extract<496, 511>();

  int16_t _8767 = (int16_t)(29);
  int16_t _8768 = _hw_input_global_wrapper_stencil_833 * _8767;
  int16_t _8769 = (int16_t)(61);
  int16_t _8770 = _hw_input_global_wrapper_stencil_834 * _8769;
  int16_t _8771 = (int16_t)(93);
  int16_t _8772 = _hw_input_global_wrapper_stencil_835 * _8771;
  int16_t _8773 = (int16_t)(125);
  int16_t _8774 = _hw_input_global_wrapper_stencil_836 * _8773;
  int16_t _8775 = (int16_t)(157);
  int16_t _8776 = _hw_input_global_wrapper_stencil_837 * _8775;
  int16_t _8777 = (int16_t)(189);
  int16_t _8778 = _hw_input_global_wrapper_stencil_838 * _8777;
  int16_t _8779 = (int16_t)(221);
  int16_t _8780 = _hw_input_global_wrapper_stencil_839 * _8779;
  int16_t _8781 = (int16_t)(253);
  int16_t _8782 = _hw_input_global_wrapper_stencil_840 * _8781;
  int16_t _8783 = (int16_t)(285);
  int16_t _8784 = _hw_input_global_wrapper_stencil_841 * _8783;
  int16_t _8785 = (int16_t)(317);
  int16_t _8786 = _hw_input_global_wrapper_stencil_842 * _8785;
  int16_t _8787 = (int16_t)(349);
  int16_t _8788 = _hw_input_global_wrapper_stencil_843 * _8787;
  int16_t _8789 = (int16_t)(381);
  int16_t _8790 = _hw_input_global_wrapper_stencil_844 * _8789;
  int16_t _8791 = (int16_t)(413);
  int16_t _8792 = _hw_input_global_wrapper_stencil_845 * _8791;
  int16_t _8793 = (int16_t)(445);
  int16_t _8794 = _hw_input_global_wrapper_stencil_846 * _8793;
  int16_t _8795 = (int16_t)(477);
  int16_t _8796 = _hw_input_global_wrapper_stencil_847 * _8795;
  int16_t _8797 = (int16_t)(509);
  int16_t _8798 = _hw_input_global_wrapper_stencil_848 * _8797;
  int16_t _8799 = (int16_t)(541);
  int16_t _8800 = _hw_input_global_wrapper_stencil_849 * _8799;
  int16_t _8801 = (int16_t)(573);
  int16_t _8802 = _hw_input_global_wrapper_stencil_850 * _8801;
  int16_t _8803 = (int16_t)(605);
  int16_t _8804 = _hw_input_global_wrapper_stencil_851 * _8803;
  int16_t _8805 = (int16_t)(637);
  int16_t _8806 = _hw_input_global_wrapper_stencil_852 * _8805;
  int16_t _8807 = (int16_t)(669);
  int16_t _8808 = _hw_input_global_wrapper_stencil_853 * _8807;
  int16_t _8809 = (int16_t)(701);
  int16_t _8810 = _hw_input_global_wrapper_stencil_854 * _8809;
  int16_t _8811 = (int16_t)(733);
  int16_t _8812 = _hw_input_global_wrapper_stencil_855 * _8811;
  int16_t _8813 = (int16_t)(765);
  int16_t _8814 = _hw_input_global_wrapper_stencil_856 * _8813;
  int16_t _8815 = (int16_t)(797);
  int16_t _8816 = _hw_input_global_wrapper_stencil_857 * _8815;
  int16_t _8817 = (int16_t)(829);
  int16_t _8818 = _hw_input_global_wrapper_stencil_858 * _8817;
  int16_t _8819 = (int16_t)(861);
  int16_t _8820 = _hw_input_global_wrapper_stencil_859 * _8819;
  int16_t _8821 = (int16_t)(893);
  int16_t _8822 = _hw_input_global_wrapper_stencil_860 * _8821;
  int16_t _8823 = (int16_t)(925);
  int16_t _8824 = _hw_input_global_wrapper_stencil_861 * _8823;
  int16_t _8825 = (int16_t)(957);
  int16_t _8826 = _hw_input_global_wrapper_stencil_862 * _8825;
  int16_t _8827 = (int16_t)(1021);
  int16_t _8828 = _hw_input_global_wrapper_stencil_863 * _8827;
  int16_t _8829 = (int16_t)(989);
  int16_t _8830 = _hw_input_global_wrapper_stencil_864 * _8829;
  int16_t _8831 = _8828 + _8830;
  int16_t _8832 = _8826 + _8831;
  int16_t _8833 = _8824 + _8832;
  int16_t _8834 = _8822 + _8833;
  int16_t _8835 = _8820 + _8834;
  int16_t _8836 = _8818 + _8835;
  int16_t _8837 = _8816 + _8836;
  int16_t _8838 = _8814 + _8837;
  int16_t _8839 = _8812 + _8838;
  int16_t _8840 = _8810 + _8839;
  int16_t _8841 = _8808 + _8840;
  int16_t _8842 = _8806 + _8841;
  int16_t _8843 = _8804 + _8842;
  int16_t _8844 = _8802 + _8843;
  int16_t _8845 = _8800 + _8844;
  int16_t _8846 = _8798 + _8845;
  int16_t _8847 = _8796 + _8846;
  int16_t _8848 = _8794 + _8847;
  int16_t _8849 = _8792 + _8848;
  int16_t _8850 = _8790 + _8849;
  int16_t _8851 = _8788 + _8850;
  int16_t _8852 = _8786 + _8851;
  int16_t _8853 = _8784 + _8852;
  int16_t _8854 = _8782 + _8853;
  int16_t _8855 = _8780 + _8854;
  int16_t _8856 = _8778 + _8855;
  int16_t _8857 = _8776 + _8856;
  int16_t _8858 = _8774 + _8857;
  int16_t _8859 = _8772 + _8858;
  int16_t _8860 = _8770 + _8859;
  int16_t _8861 = _conv_stencil_27 + _8860;
  int16_t _8862 = _8768 + _8861;
  return _8862;
}

//store is: conv.stencil(conv_s1_x_27, conv_s1_y_27, 27) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_27, conv_s1_y_27)*(int16)30) + (conv.stencil(conv_s1_x_27, conv_s1_y_27, 27) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_27, conv_s1_y_27)*(int16)62) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_27, conv_s1_y_27)*(int16)94) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_27, conv_s1_y_27)*(int16)126) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_27, conv_s1_y_27)*(int16)158) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_27, conv_s1_y_27)*(int16)190) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_27, conv_s1_y_27)*(int16)222) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_27, conv_s1_y_27)*(int16)254) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_27, conv_s1_y_27)*(int16)286) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_27, conv_s1_y_27)*(int16)318) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_27, conv_s1_y_27)*(int16)350) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_27, conv_s1_y_27)*(int16)382) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_27, conv_s1_y_27)*(int16)414) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_27, conv_s1_y_27)*(int16)446) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_27, conv_s1_y_27)*(int16)478) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_27, conv_s1_y_27)*(int16)510) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_27, conv_s1_y_27)*(int16)542) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_27, conv_s1_y_27)*(int16)574) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_27, conv_s1_y_27)*(int16)606) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_27, conv_s1_y_27)*(int16)638) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_27, conv_s1_y_27)*(int16)670) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_27, conv_s1_y_27)*(int16)702) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_27, conv_s1_y_27)*(int16)734) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_27, conv_s1_y_27)*(int16)766) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_27, conv_s1_y_27)*(int16)798) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_27, conv_s1_y_27)*(int16)830) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_27, conv_s1_y_27)*(int16)862) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_27, conv_s1_y_27)*(int16)894) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_27, conv_s1_y_27)*(int16)926) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_27, conv_s1_y_27)*(int16)958) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_27, conv_s1_y_27)*(int16)1022) + (hw_input_global_wrapper.stencil(30, conv_s1_x_27, conv_s1_y_27)*(int16)990)))))))))))))))))))))))))))))))))
hw_uint<16> hcompute_conv_stencil_28(hw_uint<16>& conv_stencil, hw_uint<512>& hw_input_global_wrapper_stencil) {
  int16_t _conv_stencil_28 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_866 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_867 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_868 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_869 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_870 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_871 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_872 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_873 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_input_global_wrapper_stencil_874 = (int16_t) hw_input_global_wrapper_stencil.extract<128, 143>();
  int16_t _hw_input_global_wrapper_stencil_875 = (int16_t) hw_input_global_wrapper_stencil.extract<144, 159>();
  int16_t _hw_input_global_wrapper_stencil_876 = (int16_t) hw_input_global_wrapper_stencil.extract<160, 175>();
  int16_t _hw_input_global_wrapper_stencil_877 = (int16_t) hw_input_global_wrapper_stencil.extract<176, 191>();
  int16_t _hw_input_global_wrapper_stencil_878 = (int16_t) hw_input_global_wrapper_stencil.extract<192, 207>();
  int16_t _hw_input_global_wrapper_stencil_879 = (int16_t) hw_input_global_wrapper_stencil.extract<208, 223>();
  int16_t _hw_input_global_wrapper_stencil_880 = (int16_t) hw_input_global_wrapper_stencil.extract<224, 239>();
  int16_t _hw_input_global_wrapper_stencil_881 = (int16_t) hw_input_global_wrapper_stencil.extract<240, 255>();
  int16_t _hw_input_global_wrapper_stencil_882 = (int16_t) hw_input_global_wrapper_stencil.extract<256, 271>();
  int16_t _hw_input_global_wrapper_stencil_883 = (int16_t) hw_input_global_wrapper_stencil.extract<272, 287>();
  int16_t _hw_input_global_wrapper_stencil_884 = (int16_t) hw_input_global_wrapper_stencil.extract<288, 303>();
  int16_t _hw_input_global_wrapper_stencil_885 = (int16_t) hw_input_global_wrapper_stencil.extract<304, 319>();
  int16_t _hw_input_global_wrapper_stencil_886 = (int16_t) hw_input_global_wrapper_stencil.extract<320, 335>();
  int16_t _hw_input_global_wrapper_stencil_887 = (int16_t) hw_input_global_wrapper_stencil.extract<336, 351>();
  int16_t _hw_input_global_wrapper_stencil_888 = (int16_t) hw_input_global_wrapper_stencil.extract<352, 367>();
  int16_t _hw_input_global_wrapper_stencil_889 = (int16_t) hw_input_global_wrapper_stencil.extract<368, 383>();
  int16_t _hw_input_global_wrapper_stencil_890 = (int16_t) hw_input_global_wrapper_stencil.extract<384, 399>();
  int16_t _hw_input_global_wrapper_stencil_891 = (int16_t) hw_input_global_wrapper_stencil.extract<400, 415>();
  int16_t _hw_input_global_wrapper_stencil_892 = (int16_t) hw_input_global_wrapper_stencil.extract<416, 431>();
  int16_t _hw_input_global_wrapper_stencil_893 = (int16_t) hw_input_global_wrapper_stencil.extract<432, 447>();
  int16_t _hw_input_global_wrapper_stencil_894 = (int16_t) hw_input_global_wrapper_stencil.extract<448, 463>();
  int16_t _hw_input_global_wrapper_stencil_895 = (int16_t) hw_input_global_wrapper_stencil.extract<464, 479>();
  int16_t _hw_input_global_wrapper_stencil_896 = (int16_t) hw_input_global_wrapper_stencil.extract<480, 495>();
  int16_t _hw_input_global_wrapper_stencil_897 = (int16_t) hw_input_global_wrapper_stencil.extract<496, 511>();

  int16_t _9088 = (int16_t)(30);
  int16_t _9089 = _hw_input_global_wrapper_stencil_866 * _9088;
  int16_t _9090 = (int16_t)(62);
  int16_t _9091 = _hw_input_global_wrapper_stencil_867 * _9090;
  int16_t _9092 = (int16_t)(94);
  int16_t _9093 = _hw_input_global_wrapper_stencil_868 * _9092;
  int16_t _9094 = (int16_t)(126);
  int16_t _9095 = _hw_input_global_wrapper_stencil_869 * _9094;
  int16_t _9096 = (int16_t)(158);
  int16_t _9097 = _hw_input_global_wrapper_stencil_870 * _9096;
  int16_t _9098 = (int16_t)(190);
  int16_t _9099 = _hw_input_global_wrapper_stencil_871 * _9098;
  int16_t _9100 = (int16_t)(222);
  int16_t _9101 = _hw_input_global_wrapper_stencil_872 * _9100;
  int16_t _9102 = (int16_t)(254);
  int16_t _9103 = _hw_input_global_wrapper_stencil_873 * _9102;
  int16_t _9104 = (int16_t)(286);
  int16_t _9105 = _hw_input_global_wrapper_stencil_874 * _9104;
  int16_t _9106 = (int16_t)(318);
  int16_t _9107 = _hw_input_global_wrapper_stencil_875 * _9106;
  int16_t _9108 = (int16_t)(350);
  int16_t _9109 = _hw_input_global_wrapper_stencil_876 * _9108;
  int16_t _9110 = (int16_t)(382);
  int16_t _9111 = _hw_input_global_wrapper_stencil_877 * _9110;
  int16_t _9112 = (int16_t)(414);
  int16_t _9113 = _hw_input_global_wrapper_stencil_878 * _9112;
  int16_t _9114 = (int16_t)(446);
  int16_t _9115 = _hw_input_global_wrapper_stencil_879 * _9114;
  int16_t _9116 = (int16_t)(478);
  int16_t _9117 = _hw_input_global_wrapper_stencil_880 * _9116;
  int16_t _9118 = (int16_t)(510);
  int16_t _9119 = _hw_input_global_wrapper_stencil_881 * _9118;
  int16_t _9120 = (int16_t)(542);
  int16_t _9121 = _hw_input_global_wrapper_stencil_882 * _9120;
  int16_t _9122 = (int16_t)(574);
  int16_t _9123 = _hw_input_global_wrapper_stencil_883 * _9122;
  int16_t _9124 = (int16_t)(606);
  int16_t _9125 = _hw_input_global_wrapper_stencil_884 * _9124;
  int16_t _9126 = (int16_t)(638);
  int16_t _9127 = _hw_input_global_wrapper_stencil_885 * _9126;
  int16_t _9128 = (int16_t)(670);
  int16_t _9129 = _hw_input_global_wrapper_stencil_886 * _9128;
  int16_t _9130 = (int16_t)(702);
  int16_t _9131 = _hw_input_global_wrapper_stencil_887 * _9130;
  int16_t _9132 = (int16_t)(734);
  int16_t _9133 = _hw_input_global_wrapper_stencil_888 * _9132;
  int16_t _9134 = (int16_t)(766);
  int16_t _9135 = _hw_input_global_wrapper_stencil_889 * _9134;
  int16_t _9136 = (int16_t)(798);
  int16_t _9137 = _hw_input_global_wrapper_stencil_890 * _9136;
  int16_t _9138 = (int16_t)(830);
  int16_t _9139 = _hw_input_global_wrapper_stencil_891 * _9138;
  int16_t _9140 = (int16_t)(862);
  int16_t _9141 = _hw_input_global_wrapper_stencil_892 * _9140;
  int16_t _9142 = (int16_t)(894);
  int16_t _9143 = _hw_input_global_wrapper_stencil_893 * _9142;
  int16_t _9144 = (int16_t)(926);
  int16_t _9145 = _hw_input_global_wrapper_stencil_894 * _9144;
  int16_t _9146 = (int16_t)(958);
  int16_t _9147 = _hw_input_global_wrapper_stencil_895 * _9146;
  int16_t _9148 = (int16_t)(1022);
  int16_t _9149 = _hw_input_global_wrapper_stencil_896 * _9148;
  int16_t _9150 = (int16_t)(990);
  int16_t _9151 = _hw_input_global_wrapper_stencil_897 * _9150;
  int16_t _9152 = _9149 + _9151;
  int16_t _9153 = _9147 + _9152;
  int16_t _9154 = _9145 + _9153;
  int16_t _9155 = _9143 + _9154;
  int16_t _9156 = _9141 + _9155;
  int16_t _9157 = _9139 + _9156;
  int16_t _9158 = _9137 + _9157;
  int16_t _9159 = _9135 + _9158;
  int16_t _9160 = _9133 + _9159;
  int16_t _9161 = _9131 + _9160;
  int16_t _9162 = _9129 + _9161;
  int16_t _9163 = _9127 + _9162;
  int16_t _9164 = _9125 + _9163;
  int16_t _9165 = _9123 + _9164;
  int16_t _9166 = _9121 + _9165;
  int16_t _9167 = _9119 + _9166;
  int16_t _9168 = _9117 + _9167;
  int16_t _9169 = _9115 + _9168;
  int16_t _9170 = _9113 + _9169;
  int16_t _9171 = _9111 + _9170;
  int16_t _9172 = _9109 + _9171;
  int16_t _9173 = _9107 + _9172;
  int16_t _9174 = _9105 + _9173;
  int16_t _9175 = _9103 + _9174;
  int16_t _9176 = _9101 + _9175;
  int16_t _9177 = _9099 + _9176;
  int16_t _9178 = _9097 + _9177;
  int16_t _9179 = _9095 + _9178;
  int16_t _9180 = _9093 + _9179;
  int16_t _9181 = _9091 + _9180;
  int16_t _9182 = _conv_stencil_28 + _9181;
  int16_t _9183 = _9089 + _9182;
  return _9183;
}

//store is: conv.stencil(conv_s1_x_28, conv_s1_y_28, 28) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_28, conv_s1_y_28)*(int16)31) + (conv.stencil(conv_s1_x_28, conv_s1_y_28, 28) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_28, conv_s1_y_28)*(int16)63) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_28, conv_s1_y_28)*(int16)95) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_28, conv_s1_y_28)*(int16)127) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_28, conv_s1_y_28)*(int16)159) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_28, conv_s1_y_28)*(int16)191) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_28, conv_s1_y_28)*(int16)223) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_28, conv_s1_y_28)*(int16)255) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_28, conv_s1_y_28)*(int16)287) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_28, conv_s1_y_28)*(int16)319) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_28, conv_s1_y_28)*(int16)351) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_28, conv_s1_y_28)*(int16)383) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_28, conv_s1_y_28)*(int16)415) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_28, conv_s1_y_28)*(int16)447) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_28, conv_s1_y_28)*(int16)479) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_28, conv_s1_y_28)*(int16)511) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_28, conv_s1_y_28)*(int16)543) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_28, conv_s1_y_28)*(int16)575) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_28, conv_s1_y_28)*(int16)607) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_28, conv_s1_y_28)*(int16)639) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_28, conv_s1_y_28)*(int16)671) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_28, conv_s1_y_28)*(int16)703) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_28, conv_s1_y_28)*(int16)735) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_28, conv_s1_y_28)*(int16)767) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_28, conv_s1_y_28)*(int16)799) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_28, conv_s1_y_28)*(int16)831) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_28, conv_s1_y_28)*(int16)863) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_28, conv_s1_y_28)*(int16)895) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_28, conv_s1_y_28)*(int16)927) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_28, conv_s1_y_28)*(int16)959) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_28, conv_s1_y_28)*(int16)1023) + (hw_input_global_wrapper.stencil(30, conv_s1_x_28, conv_s1_y_28)*(int16)991)))))))))))))))))))))))))))))))))
hw_uint<16> hcompute_conv_stencil_29(hw_uint<16>& conv_stencil, hw_uint<512>& hw_input_global_wrapper_stencil) {
  int16_t _conv_stencil_29 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_898 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_899 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_900 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_901 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_902 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_903 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_904 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_905 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_input_global_wrapper_stencil_906 = (int16_t) hw_input_global_wrapper_stencil.extract<128, 143>();
  int16_t _hw_input_global_wrapper_stencil_907 = (int16_t) hw_input_global_wrapper_stencil.extract<144, 159>();
  int16_t _hw_input_global_wrapper_stencil_908 = (int16_t) hw_input_global_wrapper_stencil.extract<160, 175>();
  int16_t _hw_input_global_wrapper_stencil_909 = (int16_t) hw_input_global_wrapper_stencil.extract<176, 191>();
  int16_t _hw_input_global_wrapper_stencil_910 = (int16_t) hw_input_global_wrapper_stencil.extract<192, 207>();
  int16_t _hw_input_global_wrapper_stencil_911 = (int16_t) hw_input_global_wrapper_stencil.extract<208, 223>();
  int16_t _hw_input_global_wrapper_stencil_912 = (int16_t) hw_input_global_wrapper_stencil.extract<224, 239>();
  int16_t _hw_input_global_wrapper_stencil_913 = (int16_t) hw_input_global_wrapper_stencil.extract<240, 255>();
  int16_t _hw_input_global_wrapper_stencil_914 = (int16_t) hw_input_global_wrapper_stencil.extract<256, 271>();
  int16_t _hw_input_global_wrapper_stencil_915 = (int16_t) hw_input_global_wrapper_stencil.extract<272, 287>();
  int16_t _hw_input_global_wrapper_stencil_916 = (int16_t) hw_input_global_wrapper_stencil.extract<288, 303>();
  int16_t _hw_input_global_wrapper_stencil_917 = (int16_t) hw_input_global_wrapper_stencil.extract<304, 319>();
  int16_t _hw_input_global_wrapper_stencil_918 = (int16_t) hw_input_global_wrapper_stencil.extract<320, 335>();
  int16_t _hw_input_global_wrapper_stencil_919 = (int16_t) hw_input_global_wrapper_stencil.extract<336, 351>();
  int16_t _hw_input_global_wrapper_stencil_920 = (int16_t) hw_input_global_wrapper_stencil.extract<352, 367>();
  int16_t _hw_input_global_wrapper_stencil_921 = (int16_t) hw_input_global_wrapper_stencil.extract<368, 383>();
  int16_t _hw_input_global_wrapper_stencil_922 = (int16_t) hw_input_global_wrapper_stencil.extract<384, 399>();
  int16_t _hw_input_global_wrapper_stencil_923 = (int16_t) hw_input_global_wrapper_stencil.extract<400, 415>();
  int16_t _hw_input_global_wrapper_stencil_924 = (int16_t) hw_input_global_wrapper_stencil.extract<416, 431>();
  int16_t _hw_input_global_wrapper_stencil_925 = (int16_t) hw_input_global_wrapper_stencil.extract<432, 447>();
  int16_t _hw_input_global_wrapper_stencil_926 = (int16_t) hw_input_global_wrapper_stencil.extract<448, 463>();
  int16_t _hw_input_global_wrapper_stencil_927 = (int16_t) hw_input_global_wrapper_stencil.extract<464, 479>();
  int16_t _hw_input_global_wrapper_stencil_928 = (int16_t) hw_input_global_wrapper_stencil.extract<480, 495>();
  int16_t _hw_input_global_wrapper_stencil_929 = (int16_t) hw_input_global_wrapper_stencil.extract<496, 511>();

  int16_t _9409 = (int16_t)(31);
  int16_t _9410 = _hw_input_global_wrapper_stencil_898 * _9409;
  int16_t _9411 = (int16_t)(63);
  int16_t _9412 = _hw_input_global_wrapper_stencil_899 * _9411;
  int16_t _9413 = (int16_t)(95);
  int16_t _9414 = _hw_input_global_wrapper_stencil_900 * _9413;
  int16_t _9415 = (int16_t)(127);
  int16_t _9416 = _hw_input_global_wrapper_stencil_901 * _9415;
  int16_t _9417 = (int16_t)(159);
  int16_t _9418 = _hw_input_global_wrapper_stencil_902 * _9417;
  int16_t _9419 = (int16_t)(191);
  int16_t _9420 = _hw_input_global_wrapper_stencil_903 * _9419;
  int16_t _9421 = (int16_t)(223);
  int16_t _9422 = _hw_input_global_wrapper_stencil_904 * _9421;
  int16_t _9423 = (int16_t)(255);
  int16_t _9424 = _hw_input_global_wrapper_stencil_905 * _9423;
  int16_t _9425 = (int16_t)(287);
  int16_t _9426 = _hw_input_global_wrapper_stencil_906 * _9425;
  int16_t _9427 = (int16_t)(319);
  int16_t _9428 = _hw_input_global_wrapper_stencil_907 * _9427;
  int16_t _9429 = (int16_t)(351);
  int16_t _9430 = _hw_input_global_wrapper_stencil_908 * _9429;
  int16_t _9431 = (int16_t)(383);
  int16_t _9432 = _hw_input_global_wrapper_stencil_909 * _9431;
  int16_t _9433 = (int16_t)(415);
  int16_t _9434 = _hw_input_global_wrapper_stencil_910 * _9433;
  int16_t _9435 = (int16_t)(447);
  int16_t _9436 = _hw_input_global_wrapper_stencil_911 * _9435;
  int16_t _9437 = (int16_t)(479);
  int16_t _9438 = _hw_input_global_wrapper_stencil_912 * _9437;
  int16_t _9439 = (int16_t)(511);
  int16_t _9440 = _hw_input_global_wrapper_stencil_913 * _9439;
  int16_t _9441 = (int16_t)(543);
  int16_t _9442 = _hw_input_global_wrapper_stencil_914 * _9441;
  int16_t _9443 = (int16_t)(575);
  int16_t _9444 = _hw_input_global_wrapper_stencil_915 * _9443;
  int16_t _9445 = (int16_t)(607);
  int16_t _9446 = _hw_input_global_wrapper_stencil_916 * _9445;
  int16_t _9447 = (int16_t)(639);
  int16_t _9448 = _hw_input_global_wrapper_stencil_917 * _9447;
  int16_t _9449 = (int16_t)(671);
  int16_t _9450 = _hw_input_global_wrapper_stencil_918 * _9449;
  int16_t _9451 = (int16_t)(703);
  int16_t _9452 = _hw_input_global_wrapper_stencil_919 * _9451;
  int16_t _9453 = (int16_t)(735);
  int16_t _9454 = _hw_input_global_wrapper_stencil_920 * _9453;
  int16_t _9455 = (int16_t)(767);
  int16_t _9456 = _hw_input_global_wrapper_stencil_921 * _9455;
  int16_t _9457 = (int16_t)(799);
  int16_t _9458 = _hw_input_global_wrapper_stencil_922 * _9457;
  int16_t _9459 = (int16_t)(831);
  int16_t _9460 = _hw_input_global_wrapper_stencil_923 * _9459;
  int16_t _9461 = (int16_t)(863);
  int16_t _9462 = _hw_input_global_wrapper_stencil_924 * _9461;
  int16_t _9463 = (int16_t)(895);
  int16_t _9464 = _hw_input_global_wrapper_stencil_925 * _9463;
  int16_t _9465 = (int16_t)(927);
  int16_t _9466 = _hw_input_global_wrapper_stencil_926 * _9465;
  int16_t _9467 = (int16_t)(959);
  int16_t _9468 = _hw_input_global_wrapper_stencil_927 * _9467;
  int16_t _9469 = (int16_t)(1023);
  int16_t _9470 = _hw_input_global_wrapper_stencil_928 * _9469;
  int16_t _9471 = (int16_t)(991);
  int16_t _9472 = _hw_input_global_wrapper_stencil_929 * _9471;
  int16_t _9473 = _9470 + _9472;
  int16_t _9474 = _9468 + _9473;
  int16_t _9475 = _9466 + _9474;
  int16_t _9476 = _9464 + _9475;
  int16_t _9477 = _9462 + _9476;
  int16_t _9478 = _9460 + _9477;
  int16_t _9479 = _9458 + _9478;
  int16_t _9480 = _9456 + _9479;
  int16_t _9481 = _9454 + _9480;
  int16_t _9482 = _9452 + _9481;
  int16_t _9483 = _9450 + _9482;
  int16_t _9484 = _9448 + _9483;
  int16_t _9485 = _9446 + _9484;
  int16_t _9486 = _9444 + _9485;
  int16_t _9487 = _9442 + _9486;
  int16_t _9488 = _9440 + _9487;
  int16_t _9489 = _9438 + _9488;
  int16_t _9490 = _9436 + _9489;
  int16_t _9491 = _9434 + _9490;
  int16_t _9492 = _9432 + _9491;
  int16_t _9493 = _9430 + _9492;
  int16_t _9494 = _9428 + _9493;
  int16_t _9495 = _9426 + _9494;
  int16_t _9496 = _9424 + _9495;
  int16_t _9497 = _9422 + _9496;
  int16_t _9498 = _9420 + _9497;
  int16_t _9499 = _9418 + _9498;
  int16_t _9500 = _9416 + _9499;
  int16_t _9501 = _9414 + _9500;
  int16_t _9502 = _9412 + _9501;
  int16_t _9503 = _conv_stencil_29 + _9502;
  int16_t _9504 = _9410 + _9503;
  return _9504;
}

//store is: conv.stencil(conv_s1_x_29, conv_s1_y_29, 29) = ((hw_input_global_wrapper.stencil(0, conv_s1_x_29, conv_s1_y_29)*(int16)32) + (conv.stencil(conv_s1_x_29, conv_s1_y_29, 29) + ((hw_input_global_wrapper.stencil(1, conv_s1_x_29, conv_s1_y_29)*(int16)64) + ((hw_input_global_wrapper.stencil(2, conv_s1_x_29, conv_s1_y_29)*(int16)96) + ((hw_input_global_wrapper.stencil(3, conv_s1_x_29, conv_s1_y_29)*(int16)128) + ((hw_input_global_wrapper.stencil(4, conv_s1_x_29, conv_s1_y_29)*(int16)160) + ((hw_input_global_wrapper.stencil(5, conv_s1_x_29, conv_s1_y_29)*(int16)192) + ((hw_input_global_wrapper.stencil(6, conv_s1_x_29, conv_s1_y_29)*(int16)224) + ((hw_input_global_wrapper.stencil(7, conv_s1_x_29, conv_s1_y_29)*(int16)256) + ((hw_input_global_wrapper.stencil(8, conv_s1_x_29, conv_s1_y_29)*(int16)288) + ((hw_input_global_wrapper.stencil(9, conv_s1_x_29, conv_s1_y_29)*(int16)320) + ((hw_input_global_wrapper.stencil(10, conv_s1_x_29, conv_s1_y_29)*(int16)352) + ((hw_input_global_wrapper.stencil(11, conv_s1_x_29, conv_s1_y_29)*(int16)384) + ((hw_input_global_wrapper.stencil(12, conv_s1_x_29, conv_s1_y_29)*(int16)416) + ((hw_input_global_wrapper.stencil(13, conv_s1_x_29, conv_s1_y_29)*(int16)448) + ((hw_input_global_wrapper.stencil(14, conv_s1_x_29, conv_s1_y_29)*(int16)480) + ((hw_input_global_wrapper.stencil(15, conv_s1_x_29, conv_s1_y_29)*(int16)512) + ((hw_input_global_wrapper.stencil(16, conv_s1_x_29, conv_s1_y_29)*(int16)544) + ((hw_input_global_wrapper.stencil(17, conv_s1_x_29, conv_s1_y_29)*(int16)576) + ((hw_input_global_wrapper.stencil(18, conv_s1_x_29, conv_s1_y_29)*(int16)608) + ((hw_input_global_wrapper.stencil(19, conv_s1_x_29, conv_s1_y_29)*(int16)640) + ((hw_input_global_wrapper.stencil(20, conv_s1_x_29, conv_s1_y_29)*(int16)672) + ((hw_input_global_wrapper.stencil(21, conv_s1_x_29, conv_s1_y_29)*(int16)704) + ((hw_input_global_wrapper.stencil(22, conv_s1_x_29, conv_s1_y_29)*(int16)736) + ((hw_input_global_wrapper.stencil(23, conv_s1_x_29, conv_s1_y_29)*(int16)768) + ((hw_input_global_wrapper.stencil(24, conv_s1_x_29, conv_s1_y_29)*(int16)800) + ((hw_input_global_wrapper.stencil(25, conv_s1_x_29, conv_s1_y_29)*(int16)832) + ((hw_input_global_wrapper.stencil(26, conv_s1_x_29, conv_s1_y_29)*(int16)864) + ((hw_input_global_wrapper.stencil(27, conv_s1_x_29, conv_s1_y_29)*(int16)896) + ((hw_input_global_wrapper.stencil(28, conv_s1_x_29, conv_s1_y_29)*(int16)928) + ((hw_input_global_wrapper.stencil(29, conv_s1_x_29, conv_s1_y_29)*(int16)960) + ((hw_input_global_wrapper.stencil(31, conv_s1_x_29, conv_s1_y_29)*(int16)1024) + (hw_input_global_wrapper.stencil(30, conv_s1_x_29, conv_s1_y_29)*(int16)992)))))))))))))))))))))))))))))))))
hw_uint<16> hcompute_conv_stencil_30(hw_uint<16>& conv_stencil, hw_uint<512>& hw_input_global_wrapper_stencil) {
  int16_t _conv_stencil_30 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_930 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_931 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_932 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_933 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_934 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_935 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_936 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_937 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_input_global_wrapper_stencil_938 = (int16_t) hw_input_global_wrapper_stencil.extract<128, 143>();
  int16_t _hw_input_global_wrapper_stencil_939 = (int16_t) hw_input_global_wrapper_stencil.extract<144, 159>();
  int16_t _hw_input_global_wrapper_stencil_940 = (int16_t) hw_input_global_wrapper_stencil.extract<160, 175>();
  int16_t _hw_input_global_wrapper_stencil_941 = (int16_t) hw_input_global_wrapper_stencil.extract<176, 191>();
  int16_t _hw_input_global_wrapper_stencil_942 = (int16_t) hw_input_global_wrapper_stencil.extract<192, 207>();
  int16_t _hw_input_global_wrapper_stencil_943 = (int16_t) hw_input_global_wrapper_stencil.extract<208, 223>();
  int16_t _hw_input_global_wrapper_stencil_944 = (int16_t) hw_input_global_wrapper_stencil.extract<224, 239>();
  int16_t _hw_input_global_wrapper_stencil_945 = (int16_t) hw_input_global_wrapper_stencil.extract<240, 255>();
  int16_t _hw_input_global_wrapper_stencil_946 = (int16_t) hw_input_global_wrapper_stencil.extract<256, 271>();
  int16_t _hw_input_global_wrapper_stencil_947 = (int16_t) hw_input_global_wrapper_stencil.extract<272, 287>();
  int16_t _hw_input_global_wrapper_stencil_948 = (int16_t) hw_input_global_wrapper_stencil.extract<288, 303>();
  int16_t _hw_input_global_wrapper_stencil_949 = (int16_t) hw_input_global_wrapper_stencil.extract<304, 319>();
  int16_t _hw_input_global_wrapper_stencil_950 = (int16_t) hw_input_global_wrapper_stencil.extract<320, 335>();
  int16_t _hw_input_global_wrapper_stencil_951 = (int16_t) hw_input_global_wrapper_stencil.extract<336, 351>();
  int16_t _hw_input_global_wrapper_stencil_952 = (int16_t) hw_input_global_wrapper_stencil.extract<352, 367>();
  int16_t _hw_input_global_wrapper_stencil_953 = (int16_t) hw_input_global_wrapper_stencil.extract<368, 383>();
  int16_t _hw_input_global_wrapper_stencil_954 = (int16_t) hw_input_global_wrapper_stencil.extract<384, 399>();
  int16_t _hw_input_global_wrapper_stencil_955 = (int16_t) hw_input_global_wrapper_stencil.extract<400, 415>();
  int16_t _hw_input_global_wrapper_stencil_956 = (int16_t) hw_input_global_wrapper_stencil.extract<416, 431>();
  int16_t _hw_input_global_wrapper_stencil_957 = (int16_t) hw_input_global_wrapper_stencil.extract<432, 447>();
  int16_t _hw_input_global_wrapper_stencil_958 = (int16_t) hw_input_global_wrapper_stencil.extract<448, 463>();
  int16_t _hw_input_global_wrapper_stencil_959 = (int16_t) hw_input_global_wrapper_stencil.extract<464, 479>();
  int16_t _hw_input_global_wrapper_stencil_960 = (int16_t) hw_input_global_wrapper_stencil.extract<480, 495>();
  int16_t _hw_input_global_wrapper_stencil_961 = (int16_t) hw_input_global_wrapper_stencil.extract<496, 511>();

  int16_t _9730 = (int16_t)(32);
  int16_t _9731 = _hw_input_global_wrapper_stencil_930 * _9730;
  int16_t _9732 = (int16_t)(64);
  int16_t _9733 = _hw_input_global_wrapper_stencil_931 * _9732;
  int16_t _9734 = (int16_t)(96);
  int16_t _9735 = _hw_input_global_wrapper_stencil_932 * _9734;
  int16_t _9736 = (int16_t)(128);
  int16_t _9737 = _hw_input_global_wrapper_stencil_933 * _9736;
  int16_t _9738 = (int16_t)(160);
  int16_t _9739 = _hw_input_global_wrapper_stencil_934 * _9738;
  int16_t _9740 = (int16_t)(192);
  int16_t _9741 = _hw_input_global_wrapper_stencil_935 * _9740;
  int16_t _9742 = (int16_t)(224);
  int16_t _9743 = _hw_input_global_wrapper_stencil_936 * _9742;
  int16_t _9744 = (int16_t)(256);
  int16_t _9745 = _hw_input_global_wrapper_stencil_937 * _9744;
  int16_t _9746 = (int16_t)(288);
  int16_t _9747 = _hw_input_global_wrapper_stencil_938 * _9746;
  int16_t _9748 = (int16_t)(320);
  int16_t _9749 = _hw_input_global_wrapper_stencil_939 * _9748;
  int16_t _9750 = (int16_t)(352);
  int16_t _9751 = _hw_input_global_wrapper_stencil_940 * _9750;
  int16_t _9752 = (int16_t)(384);
  int16_t _9753 = _hw_input_global_wrapper_stencil_941 * _9752;
  int16_t _9754 = (int16_t)(416);
  int16_t _9755 = _hw_input_global_wrapper_stencil_942 * _9754;
  int16_t _9756 = (int16_t)(448);
  int16_t _9757 = _hw_input_global_wrapper_stencil_943 * _9756;
  int16_t _9758 = (int16_t)(480);
  int16_t _9759 = _hw_input_global_wrapper_stencil_944 * _9758;
  int16_t _9760 = (int16_t)(512);
  int16_t _9761 = _hw_input_global_wrapper_stencil_945 * _9760;
  int16_t _9762 = (int16_t)(544);
  int16_t _9763 = _hw_input_global_wrapper_stencil_946 * _9762;
  int16_t _9764 = (int16_t)(576);
  int16_t _9765 = _hw_input_global_wrapper_stencil_947 * _9764;
  int16_t _9766 = (int16_t)(608);
  int16_t _9767 = _hw_input_global_wrapper_stencil_948 * _9766;
  int16_t _9768 = (int16_t)(640);
  int16_t _9769 = _hw_input_global_wrapper_stencil_949 * _9768;
  int16_t _9770 = (int16_t)(672);
  int16_t _9771 = _hw_input_global_wrapper_stencil_950 * _9770;
  int16_t _9772 = (int16_t)(704);
  int16_t _9773 = _hw_input_global_wrapper_stencil_951 * _9772;
  int16_t _9774 = (int16_t)(736);
  int16_t _9775 = _hw_input_global_wrapper_stencil_952 * _9774;
  int16_t _9776 = (int16_t)(768);
  int16_t _9777 = _hw_input_global_wrapper_stencil_953 * _9776;
  int16_t _9778 = (int16_t)(800);
  int16_t _9779 = _hw_input_global_wrapper_stencil_954 * _9778;
  int16_t _9780 = (int16_t)(832);
  int16_t _9781 = _hw_input_global_wrapper_stencil_955 * _9780;
  int16_t _9782 = (int16_t)(864);
  int16_t _9783 = _hw_input_global_wrapper_stencil_956 * _9782;
  int16_t _9784 = (int16_t)(896);
  int16_t _9785 = _hw_input_global_wrapper_stencil_957 * _9784;
  int16_t _9786 = (int16_t)(928);
  int16_t _9787 = _hw_input_global_wrapper_stencil_958 * _9786;
  int16_t _9788 = (int16_t)(960);
  int16_t _9789 = _hw_input_global_wrapper_stencil_959 * _9788;
  int16_t _9790 = (int16_t)(1024);
  int16_t _9791 = _hw_input_global_wrapper_stencil_960 * _9790;
  int16_t _9792 = (int16_t)(992);
  int16_t _9793 = _hw_input_global_wrapper_stencil_961 * _9792;
  int16_t _9794 = _9791 + _9793;
  int16_t _9795 = _9789 + _9794;
  int16_t _9796 = _9787 + _9795;
  int16_t _9797 = _9785 + _9796;
  int16_t _9798 = _9783 + _9797;
  int16_t _9799 = _9781 + _9798;
  int16_t _9800 = _9779 + _9799;
  int16_t _9801 = _9777 + _9800;
  int16_t _9802 = _9775 + _9801;
  int16_t _9803 = _9773 + _9802;
  int16_t _9804 = _9771 + _9803;
  int16_t _9805 = _9769 + _9804;
  int16_t _9806 = _9767 + _9805;
  int16_t _9807 = _9765 + _9806;
  int16_t _9808 = _9763 + _9807;
  int16_t _9809 = _9761 + _9808;
  int16_t _9810 = _9759 + _9809;
  int16_t _9811 = _9757 + _9810;
  int16_t _9812 = _9755 + _9811;
  int16_t _9813 = _9753 + _9812;
  int16_t _9814 = _9751 + _9813;
  int16_t _9815 = _9749 + _9814;
  int16_t _9816 = _9747 + _9815;
  int16_t _9817 = _9745 + _9816;
  int16_t _9818 = _9743 + _9817;
  int16_t _9819 = _9741 + _9818;
  int16_t _9820 = _9739 + _9819;
  int16_t _9821 = _9737 + _9820;
  int16_t _9822 = _9735 + _9821;
  int16_t _9823 = _9733 + _9822;
  int16_t _9824 = _conv_stencil_30 + _9823;
  int16_t _9825 = _9731 + _9824;
  return _9825;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0) = conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_31 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_31;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_1, hw_output_s0_y_yi_1, 1) = conv.stencil(hw_output_s0_x_xi_1, hw_output_s0_y_yi_1, 1)
hw_uint<16> hcompute_hw_output_stencil_1(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_32 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_32;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_2, hw_output_s0_y_yi_2, 2) = conv.stencil(hw_output_s0_x_xi_2, hw_output_s0_y_yi_2, 2)
hw_uint<16> hcompute_hw_output_stencil_2(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_33 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_33;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_3, hw_output_s0_y_yi_3, 3) = conv.stencil(hw_output_s0_x_xi_3, hw_output_s0_y_yi_3, 3)
hw_uint<16> hcompute_hw_output_stencil_3(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_34 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_34;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_4, hw_output_s0_y_yi_4, 4) = conv.stencil(hw_output_s0_x_xi_4, hw_output_s0_y_yi_4, 4)
hw_uint<16> hcompute_hw_output_stencil_4(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_35 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_35;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_5, hw_output_s0_y_yi_5, 5) = conv.stencil(hw_output_s0_x_xi_5, hw_output_s0_y_yi_5, 5)
hw_uint<16> hcompute_hw_output_stencil_5(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_36 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_36;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_6, hw_output_s0_y_yi_6, 6) = conv.stencil(hw_output_s0_x_xi_6, hw_output_s0_y_yi_6, 6)
hw_uint<16> hcompute_hw_output_stencil_6(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_37 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_37;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_7, hw_output_s0_y_yi_7, 7) = conv.stencil(hw_output_s0_x_xi_7, hw_output_s0_y_yi_7, 7)
hw_uint<16> hcompute_hw_output_stencil_7(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_38 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_38;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_8, hw_output_s0_y_yi_8, 8) = conv.stencil(hw_output_s0_x_xi_8, hw_output_s0_y_yi_8, 8)
hw_uint<16> hcompute_hw_output_stencil_8(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_39 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_39;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_9, hw_output_s0_y_yi_9, 9) = conv.stencil(hw_output_s0_x_xi_9, hw_output_s0_y_yi_9, 9)
hw_uint<16> hcompute_hw_output_stencil_9(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_40 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_40;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_10, hw_output_s0_y_yi_10, 10) = conv.stencil(hw_output_s0_x_xi_10, hw_output_s0_y_yi_10, 10)
hw_uint<16> hcompute_hw_output_stencil_10(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_41 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_41;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_11, hw_output_s0_y_yi_11, 11) = conv.stencil(hw_output_s0_x_xi_11, hw_output_s0_y_yi_11, 11)
hw_uint<16> hcompute_hw_output_stencil_11(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_42 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_42;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_12, hw_output_s0_y_yi_12, 12) = conv.stencil(hw_output_s0_x_xi_12, hw_output_s0_y_yi_12, 12)
hw_uint<16> hcompute_hw_output_stencil_12(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_43 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_43;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_13, hw_output_s0_y_yi_13, 13) = conv.stencil(hw_output_s0_x_xi_13, hw_output_s0_y_yi_13, 13)
hw_uint<16> hcompute_hw_output_stencil_13(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_44 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_44;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_14, hw_output_s0_y_yi_14, 14) = conv.stencil(hw_output_s0_x_xi_14, hw_output_s0_y_yi_14, 14)
hw_uint<16> hcompute_hw_output_stencil_14(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_45 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_45;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_15, hw_output_s0_y_yi_15, 15) = conv.stencil(hw_output_s0_x_xi_15, hw_output_s0_y_yi_15, 15)
hw_uint<16> hcompute_hw_output_stencil_15(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_46 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_46;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_16, hw_output_s0_y_yi_16, 16) = conv.stencil(hw_output_s0_x_xi_16, hw_output_s0_y_yi_16, 16)
hw_uint<16> hcompute_hw_output_stencil_16(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_47 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_47;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_17, hw_output_s0_y_yi_17, 17) = conv.stencil(hw_output_s0_x_xi_17, hw_output_s0_y_yi_17, 17)
hw_uint<16> hcompute_hw_output_stencil_17(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_48 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_48;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_18, hw_output_s0_y_yi_18, 18) = conv.stencil(hw_output_s0_x_xi_18, hw_output_s0_y_yi_18, 18)
hw_uint<16> hcompute_hw_output_stencil_18(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_49 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_49;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_19, hw_output_s0_y_yi_19, 19) = conv.stencil(hw_output_s0_x_xi_19, hw_output_s0_y_yi_19, 19)
hw_uint<16> hcompute_hw_output_stencil_19(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_50 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_50;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_20, hw_output_s0_y_yi_20, 20) = conv.stencil(hw_output_s0_x_xi_20, hw_output_s0_y_yi_20, 20)
hw_uint<16> hcompute_hw_output_stencil_20(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_51 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_51;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_21, hw_output_s0_y_yi_21, 21) = conv.stencil(hw_output_s0_x_xi_21, hw_output_s0_y_yi_21, 21)
hw_uint<16> hcompute_hw_output_stencil_21(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_52 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_52;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_22, hw_output_s0_y_yi_22, 22) = conv.stencil(hw_output_s0_x_xi_22, hw_output_s0_y_yi_22, 22)
hw_uint<16> hcompute_hw_output_stencil_22(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_53 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_53;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_23, hw_output_s0_y_yi_23, 23) = conv.stencil(hw_output_s0_x_xi_23, hw_output_s0_y_yi_23, 23)
hw_uint<16> hcompute_hw_output_stencil_23(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_54 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_54;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_24, hw_output_s0_y_yi_24, 24) = conv.stencil(hw_output_s0_x_xi_24, hw_output_s0_y_yi_24, 24)
hw_uint<16> hcompute_hw_output_stencil_24(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_55 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_55;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_25, hw_output_s0_y_yi_25, 25) = conv.stencil(hw_output_s0_x_xi_25, hw_output_s0_y_yi_25, 25)
hw_uint<16> hcompute_hw_output_stencil_25(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_56 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_56;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_26, hw_output_s0_y_yi_26, 26) = conv.stencil(hw_output_s0_x_xi_26, hw_output_s0_y_yi_26, 26)
hw_uint<16> hcompute_hw_output_stencil_26(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_57 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_57;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_27, hw_output_s0_y_yi_27, 27) = conv.stencil(hw_output_s0_x_xi_27, hw_output_s0_y_yi_27, 27)
hw_uint<16> hcompute_hw_output_stencil_27(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_58 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_58;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_28, hw_output_s0_y_yi_28, 28) = conv.stencil(hw_output_s0_x_xi_28, hw_output_s0_y_yi_28, 28)
hw_uint<16> hcompute_hw_output_stencil_28(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_59 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_59;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_29, hw_output_s0_y_yi_29, 29) = conv.stencil(hw_output_s0_x_xi_29, hw_output_s0_y_yi_29, 29)
hw_uint<16> hcompute_hw_output_stencil_29(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_60 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_60;
}

