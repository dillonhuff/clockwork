#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_filter_dw_global_wrapper.stencil(0, hw_filter_dw_global_wrapper_s0_x, hw_filter_dw_global_wrapper_s0_y) = hw_filter_dw.stencil(0, hw_filter_dw_global_wrapper_s0_x, hw_filter_dw_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_filter_dw_global_wrapper_stencil(hw_uint<16>& hw_filter_dw_stencil) {
  int16_t _hw_filter_dw_stencil_1 = (int16_t) hw_filter_dw_stencil.extract<0, 15>();

  return _hw_filter_dw_stencil_1;
}

//store is: hw_filter_dw_global_wrapper.stencil(1, hw_filter_dw_global_wrapper_s0_x, hw_filter_dw_global_wrapper_s0_y) = hw_filter_dw.stencil(1, hw_filter_dw_global_wrapper_s0_x, hw_filter_dw_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_filter_dw_global_wrapper_stencil_1(hw_uint<16>& hw_filter_dw_stencil) {
  int16_t _hw_filter_dw_stencil_2 = (int16_t) hw_filter_dw_stencil.extract<0, 15>();

  return _hw_filter_dw_stencil_2;
}

//store is: hw_filter_dw_global_wrapper.stencil(2, hw_filter_dw_global_wrapper_s0_x, hw_filter_dw_global_wrapper_s0_y) = hw_filter_dw.stencil(2, hw_filter_dw_global_wrapper_s0_x, hw_filter_dw_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_filter_dw_global_wrapper_stencil_2(hw_uint<16>& hw_filter_dw_stencil) {
  int16_t _hw_filter_dw_stencil_3 = (int16_t) hw_filter_dw_stencil.extract<0, 15>();

  return _hw_filter_dw_stencil_3;
}

//store is: hw_filter_dw_global_wrapper.stencil(3, hw_filter_dw_global_wrapper_s0_x, hw_filter_dw_global_wrapper_s0_y) = hw_filter_dw.stencil(3, hw_filter_dw_global_wrapper_s0_x, hw_filter_dw_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_filter_dw_global_wrapper_stencil_3(hw_uint<16>& hw_filter_dw_stencil) {
  int16_t _hw_filter_dw_stencil_4 = (int16_t) hw_filter_dw_stencil.extract<0, 15>();

  return _hw_filter_dw_stencil_4;
}

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

//store is: dw_conv.stencil(dw_conv_s0_c, dw_conv_s0_x, dw_conv_s0_y) = (int16)0
hw_uint<16> hcompute_dw_conv_stencil() {
  int16_t _738 = (int16_t)(0);
  return _738;
}

//store is: dw_conv.stencil(0, dw_conv_s1_x, dw_conv_s1_y) = ((hw_filter_dw_global_wrapper.stencil(0, 0, 0)*hw_input_global_wrapper.stencil(0, dw_conv_s1_x, dw_conv_s1_y)) + (dw_conv.stencil(0, dw_conv_s1_x, dw_conv_s1_y) + ((hw_filter_dw_global_wrapper.stencil(0, 1, 0)*hw_input_global_wrapper.stencil(0, (dw_conv_s1_x + 1), dw_conv_s1_y)) + ((hw_filter_dw_global_wrapper.stencil(0, 2, 0)*hw_input_global_wrapper.stencil(0, (dw_conv_s1_x + 2), dw_conv_s1_y)) + ((hw_filter_dw_global_wrapper.stencil(0, 0, 1)*hw_input_global_wrapper.stencil(0, dw_conv_s1_x, (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(0, 1, 1)*hw_input_global_wrapper.stencil(0, (dw_conv_s1_x + 1), (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(0, 2, 1)*hw_input_global_wrapper.stencil(0, (dw_conv_s1_x + 2), (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(0, 0, 2)*hw_input_global_wrapper.stencil(0, dw_conv_s1_x, (dw_conv_s1_y + 2))) + ((hw_filter_dw_global_wrapper.stencil(0, 2, 2)*hw_input_global_wrapper.stencil(0, (dw_conv_s1_x + 2), (dw_conv_s1_y + 2))) + (hw_filter_dw_global_wrapper.stencil(0, 1, 2)*hw_input_global_wrapper.stencil(0, (dw_conv_s1_x + 1), (dw_conv_s1_y + 2))))))))))))
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

  int16_t _741 = _hw_filter_dw_global_wrapper_stencil_1 * _hw_input_global_wrapper_stencil_1;
  int16_t _742 = _hw_filter_dw_global_wrapper_stencil_2 * _hw_input_global_wrapper_stencil_2;
  int16_t _743 = _hw_filter_dw_global_wrapper_stencil_3 * _hw_input_global_wrapper_stencil_3;
  int16_t _744 = _hw_filter_dw_global_wrapper_stencil_4 * _hw_input_global_wrapper_stencil_4;
  int16_t _745 = _hw_filter_dw_global_wrapper_stencil_5 * _hw_input_global_wrapper_stencil_5;
  int16_t _746 = _hw_filter_dw_global_wrapper_stencil_6 * _hw_input_global_wrapper_stencil_6;
  int16_t _747 = _hw_filter_dw_global_wrapper_stencil_7 * _hw_input_global_wrapper_stencil_7;
  int16_t _748 = _hw_filter_dw_global_wrapper_stencil_8 * _hw_input_global_wrapper_stencil_8;
  int16_t _749 = _hw_filter_dw_global_wrapper_stencil_9 * _hw_input_global_wrapper_stencil_9;
  int16_t _750 = _748 + _749;
  int16_t _751 = _747 + _750;
  int16_t _752 = _746 + _751;
  int16_t _753 = _745 + _752;
  int16_t _754 = _744 + _753;
  int16_t _755 = _743 + _754;
  int16_t _756 = _742 + _755;
  int16_t _757 = _dw_conv_stencil_1 + _756;
  int16_t _758 = _741 + _757;
  return _758;
}

//store is: dw_conv.stencil(1, dw_conv_s1_x, dw_conv_s1_y) = ((hw_filter_dw_global_wrapper.stencil(1, 0, 0)*hw_input_global_wrapper.stencil(1, dw_conv_s1_x, dw_conv_s1_y)) + (dw_conv.stencil(1, dw_conv_s1_x, dw_conv_s1_y) + ((hw_filter_dw_global_wrapper.stencil(1, 1, 0)*hw_input_global_wrapper.stencil(1, (dw_conv_s1_x + 1), dw_conv_s1_y)) + ((hw_filter_dw_global_wrapper.stencil(1, 2, 0)*hw_input_global_wrapper.stencil(1, (dw_conv_s1_x + 2), dw_conv_s1_y)) + ((hw_filter_dw_global_wrapper.stencil(1, 0, 1)*hw_input_global_wrapper.stencil(1, dw_conv_s1_x, (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(1, 1, 1)*hw_input_global_wrapper.stencil(1, (dw_conv_s1_x + 1), (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(1, 2, 1)*hw_input_global_wrapper.stencil(1, (dw_conv_s1_x + 2), (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(1, 0, 2)*hw_input_global_wrapper.stencil(1, dw_conv_s1_x, (dw_conv_s1_y + 2))) + ((hw_filter_dw_global_wrapper.stencil(1, 2, 2)*hw_input_global_wrapper.stencil(1, (dw_conv_s1_x + 2), (dw_conv_s1_y + 2))) + (hw_filter_dw_global_wrapper.stencil(1, 1, 2)*hw_input_global_wrapper.stencil(1, (dw_conv_s1_x + 1), (dw_conv_s1_y + 2))))))))))))
hw_uint<16> hcompute_dw_conv_stencil_2(hw_uint<16>& dw_conv_stencil, hw_uint<144>& hw_filter_dw_global_wrapper_stencil, hw_uint<144>& hw_input_global_wrapper_stencil) {
  int16_t _dw_conv_stencil_2 = (int16_t) dw_conv_stencil.extract<0, 15>();

  int16_t _hw_filter_dw_global_wrapper_stencil_10 = (int16_t) hw_filter_dw_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_filter_dw_global_wrapper_stencil_11 = (int16_t) hw_filter_dw_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_filter_dw_global_wrapper_stencil_12 = (int16_t) hw_filter_dw_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_filter_dw_global_wrapper_stencil_13 = (int16_t) hw_filter_dw_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_filter_dw_global_wrapper_stencil_14 = (int16_t) hw_filter_dw_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_filter_dw_global_wrapper_stencil_15 = (int16_t) hw_filter_dw_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_filter_dw_global_wrapper_stencil_16 = (int16_t) hw_filter_dw_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_filter_dw_global_wrapper_stencil_17 = (int16_t) hw_filter_dw_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_filter_dw_global_wrapper_stencil_18 = (int16_t) hw_filter_dw_global_wrapper_stencil.extract<128, 143>();

  int16_t _hw_input_global_wrapper_stencil_10 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_11 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_12 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_13 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_14 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_15 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_16 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_17 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_input_global_wrapper_stencil_18 = (int16_t) hw_input_global_wrapper_stencil.extract<128, 143>();

  int16_t _818 = _hw_filter_dw_global_wrapper_stencil_10 * _hw_input_global_wrapper_stencil_10;
  int16_t _819 = _hw_filter_dw_global_wrapper_stencil_11 * _hw_input_global_wrapper_stencil_11;
  int16_t _820 = _hw_filter_dw_global_wrapper_stencil_12 * _hw_input_global_wrapper_stencil_12;
  int16_t _821 = _hw_filter_dw_global_wrapper_stencil_13 * _hw_input_global_wrapper_stencil_13;
  int16_t _822 = _hw_filter_dw_global_wrapper_stencil_14 * _hw_input_global_wrapper_stencil_14;
  int16_t _823 = _hw_filter_dw_global_wrapper_stencil_15 * _hw_input_global_wrapper_stencil_15;
  int16_t _824 = _hw_filter_dw_global_wrapper_stencil_16 * _hw_input_global_wrapper_stencil_16;
  int16_t _825 = _hw_filter_dw_global_wrapper_stencil_17 * _hw_input_global_wrapper_stencil_17;
  int16_t _826 = _hw_filter_dw_global_wrapper_stencil_18 * _hw_input_global_wrapper_stencil_18;
  int16_t _827 = _825 + _826;
  int16_t _828 = _824 + _827;
  int16_t _829 = _823 + _828;
  int16_t _830 = _822 + _829;
  int16_t _831 = _821 + _830;
  int16_t _832 = _820 + _831;
  int16_t _833 = _819 + _832;
  int16_t _834 = _dw_conv_stencil_2 + _833;
  int16_t _835 = _818 + _834;
  return _835;
}

//store is: dw_conv.stencil(2, dw_conv_s1_x, dw_conv_s1_y) = ((hw_filter_dw_global_wrapper.stencil(2, 0, 0)*hw_input_global_wrapper.stencil(2, dw_conv_s1_x, dw_conv_s1_y)) + (dw_conv.stencil(2, dw_conv_s1_x, dw_conv_s1_y) + ((hw_filter_dw_global_wrapper.stencil(2, 1, 0)*hw_input_global_wrapper.stencil(2, (dw_conv_s1_x + 1), dw_conv_s1_y)) + ((hw_filter_dw_global_wrapper.stencil(2, 2, 0)*hw_input_global_wrapper.stencil(2, (dw_conv_s1_x + 2), dw_conv_s1_y)) + ((hw_filter_dw_global_wrapper.stencil(2, 0, 1)*hw_input_global_wrapper.stencil(2, dw_conv_s1_x, (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(2, 1, 1)*hw_input_global_wrapper.stencil(2, (dw_conv_s1_x + 1), (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(2, 2, 1)*hw_input_global_wrapper.stencil(2, (dw_conv_s1_x + 2), (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(2, 0, 2)*hw_input_global_wrapper.stencil(2, dw_conv_s1_x, (dw_conv_s1_y + 2))) + ((hw_filter_dw_global_wrapper.stencil(2, 2, 2)*hw_input_global_wrapper.stencil(2, (dw_conv_s1_x + 2), (dw_conv_s1_y + 2))) + (hw_filter_dw_global_wrapper.stencil(2, 1, 2)*hw_input_global_wrapper.stencil(2, (dw_conv_s1_x + 1), (dw_conv_s1_y + 2))))))))))))
hw_uint<16> hcompute_dw_conv_stencil_3(hw_uint<16>& dw_conv_stencil, hw_uint<144>& hw_filter_dw_global_wrapper_stencil, hw_uint<144>& hw_input_global_wrapper_stencil) {
  int16_t _dw_conv_stencil_3 = (int16_t) dw_conv_stencil.extract<0, 15>();

  int16_t _hw_filter_dw_global_wrapper_stencil_19 = (int16_t) hw_filter_dw_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_filter_dw_global_wrapper_stencil_20 = (int16_t) hw_filter_dw_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_filter_dw_global_wrapper_stencil_21 = (int16_t) hw_filter_dw_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_filter_dw_global_wrapper_stencil_22 = (int16_t) hw_filter_dw_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_filter_dw_global_wrapper_stencil_23 = (int16_t) hw_filter_dw_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_filter_dw_global_wrapper_stencil_24 = (int16_t) hw_filter_dw_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_filter_dw_global_wrapper_stencil_25 = (int16_t) hw_filter_dw_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_filter_dw_global_wrapper_stencil_26 = (int16_t) hw_filter_dw_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_filter_dw_global_wrapper_stencil_27 = (int16_t) hw_filter_dw_global_wrapper_stencil.extract<128, 143>();

  int16_t _hw_input_global_wrapper_stencil_19 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_20 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_21 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_22 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_23 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_24 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_25 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_26 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_input_global_wrapper_stencil_27 = (int16_t) hw_input_global_wrapper_stencil.extract<128, 143>();

  int16_t _895 = _hw_filter_dw_global_wrapper_stencil_19 * _hw_input_global_wrapper_stencil_19;
  int16_t _896 = _hw_filter_dw_global_wrapper_stencil_20 * _hw_input_global_wrapper_stencil_20;
  int16_t _897 = _hw_filter_dw_global_wrapper_stencil_21 * _hw_input_global_wrapper_stencil_21;
  int16_t _898 = _hw_filter_dw_global_wrapper_stencil_22 * _hw_input_global_wrapper_stencil_22;
  int16_t _899 = _hw_filter_dw_global_wrapper_stencil_23 * _hw_input_global_wrapper_stencil_23;
  int16_t _900 = _hw_filter_dw_global_wrapper_stencil_24 * _hw_input_global_wrapper_stencil_24;
  int16_t _901 = _hw_filter_dw_global_wrapper_stencil_25 * _hw_input_global_wrapper_stencil_25;
  int16_t _902 = _hw_filter_dw_global_wrapper_stencil_26 * _hw_input_global_wrapper_stencil_26;
  int16_t _903 = _hw_filter_dw_global_wrapper_stencil_27 * _hw_input_global_wrapper_stencil_27;
  int16_t _904 = _902 + _903;
  int16_t _905 = _901 + _904;
  int16_t _906 = _900 + _905;
  int16_t _907 = _899 + _906;
  int16_t _908 = _898 + _907;
  int16_t _909 = _897 + _908;
  int16_t _910 = _896 + _909;
  int16_t _911 = _dw_conv_stencil_3 + _910;
  int16_t _912 = _895 + _911;
  return _912;
}

//store is: dw_conv.stencil(3, dw_conv_s1_x, dw_conv_s1_y) = ((hw_filter_dw_global_wrapper.stencil(3, 0, 0)*hw_input_global_wrapper.stencil(3, dw_conv_s1_x, dw_conv_s1_y)) + (dw_conv.stencil(3, dw_conv_s1_x, dw_conv_s1_y) + ((hw_filter_dw_global_wrapper.stencil(3, 1, 0)*hw_input_global_wrapper.stencil(3, (dw_conv_s1_x + 1), dw_conv_s1_y)) + ((hw_filter_dw_global_wrapper.stencil(3, 2, 0)*hw_input_global_wrapper.stencil(3, (dw_conv_s1_x + 2), dw_conv_s1_y)) + ((hw_filter_dw_global_wrapper.stencil(3, 0, 1)*hw_input_global_wrapper.stencil(3, dw_conv_s1_x, (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(3, 1, 1)*hw_input_global_wrapper.stencil(3, (dw_conv_s1_x + 1), (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(3, 2, 1)*hw_input_global_wrapper.stencil(3, (dw_conv_s1_x + 2), (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(3, 0, 2)*hw_input_global_wrapper.stencil(3, dw_conv_s1_x, (dw_conv_s1_y + 2))) + ((hw_filter_dw_global_wrapper.stencil(3, 2, 2)*hw_input_global_wrapper.stencil(3, (dw_conv_s1_x + 2), (dw_conv_s1_y + 2))) + (hw_filter_dw_global_wrapper.stencil(3, 1, 2)*hw_input_global_wrapper.stencil(3, (dw_conv_s1_x + 1), (dw_conv_s1_y + 2))))))))))))
hw_uint<16> hcompute_dw_conv_stencil_4(hw_uint<16>& dw_conv_stencil, hw_uint<144>& hw_filter_dw_global_wrapper_stencil, hw_uint<144>& hw_input_global_wrapper_stencil) {
  int16_t _dw_conv_stencil_4 = (int16_t) dw_conv_stencil.extract<0, 15>();

  int16_t _hw_filter_dw_global_wrapper_stencil_28 = (int16_t) hw_filter_dw_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_filter_dw_global_wrapper_stencil_29 = (int16_t) hw_filter_dw_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_filter_dw_global_wrapper_stencil_30 = (int16_t) hw_filter_dw_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_filter_dw_global_wrapper_stencil_31 = (int16_t) hw_filter_dw_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_filter_dw_global_wrapper_stencil_32 = (int16_t) hw_filter_dw_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_filter_dw_global_wrapper_stencil_33 = (int16_t) hw_filter_dw_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_filter_dw_global_wrapper_stencil_34 = (int16_t) hw_filter_dw_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_filter_dw_global_wrapper_stencil_35 = (int16_t) hw_filter_dw_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_filter_dw_global_wrapper_stencil_36 = (int16_t) hw_filter_dw_global_wrapper_stencil.extract<128, 143>();

  int16_t _hw_input_global_wrapper_stencil_28 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_29 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_30 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_31 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_32 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_33 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_34 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_35 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_input_global_wrapper_stencil_36 = (int16_t) hw_input_global_wrapper_stencil.extract<128, 143>();

  int16_t _972 = _hw_filter_dw_global_wrapper_stencil_28 * _hw_input_global_wrapper_stencil_28;
  int16_t _973 = _hw_filter_dw_global_wrapper_stencil_29 * _hw_input_global_wrapper_stencil_29;
  int16_t _974 = _hw_filter_dw_global_wrapper_stencil_30 * _hw_input_global_wrapper_stencil_30;
  int16_t _975 = _hw_filter_dw_global_wrapper_stencil_31 * _hw_input_global_wrapper_stencil_31;
  int16_t _976 = _hw_filter_dw_global_wrapper_stencil_32 * _hw_input_global_wrapper_stencil_32;
  int16_t _977 = _hw_filter_dw_global_wrapper_stencil_33 * _hw_input_global_wrapper_stencil_33;
  int16_t _978 = _hw_filter_dw_global_wrapper_stencil_34 * _hw_input_global_wrapper_stencil_34;
  int16_t _979 = _hw_filter_dw_global_wrapper_stencil_35 * _hw_input_global_wrapper_stencil_35;
  int16_t _980 = _hw_filter_dw_global_wrapper_stencil_36 * _hw_input_global_wrapper_stencil_36;
  int16_t _981 = _979 + _980;
  int16_t _982 = _978 + _981;
  int16_t _983 = _977 + _982;
  int16_t _984 = _976 + _983;
  int16_t _985 = _975 + _984;
  int16_t _986 = _974 + _985;
  int16_t _987 = _973 + _986;
  int16_t _988 = _dw_conv_stencil_4 + _987;
  int16_t _989 = _972 + _988;
  return _989;
}

//store is: hw_filter_pw_global_wrapper.stencil(0, 0) = hw_filter_pw.stencil(0, 0)
hw_uint<16> hcompute_hw_filter_pw_global_wrapper_stencil(hw_uint<16>& hw_filter_pw_stencil) {
  int16_t _hw_filter_pw_stencil_1 = (int16_t) hw_filter_pw_stencil.extract<0, 15>();

  return _hw_filter_pw_stencil_1;
}

//store is: hw_filter_pw_global_wrapper.stencil(1, 0) = hw_filter_pw.stencil(1, 0)
hw_uint<16> hcompute_hw_filter_pw_global_wrapper_stencil_1(hw_uint<16>& hw_filter_pw_stencil) {
  int16_t _hw_filter_pw_stencil_2 = (int16_t) hw_filter_pw_stencil.extract<0, 15>();

  return _hw_filter_pw_stencil_2;
}

//store is: hw_filter_pw_global_wrapper.stencil(2, 0) = hw_filter_pw.stencil(2, 0)
hw_uint<16> hcompute_hw_filter_pw_global_wrapper_stencil_2(hw_uint<16>& hw_filter_pw_stencil) {
  int16_t _hw_filter_pw_stencil_3 = (int16_t) hw_filter_pw_stencil.extract<0, 15>();

  return _hw_filter_pw_stencil_3;
}

//store is: hw_filter_pw_global_wrapper.stencil(0, 1) = hw_filter_pw.stencil(0, 1)
hw_uint<16> hcompute_hw_filter_pw_global_wrapper_stencil_3(hw_uint<16>& hw_filter_pw_stencil) {
  int16_t _hw_filter_pw_stencil_4 = (int16_t) hw_filter_pw_stencil.extract<0, 15>();

  return _hw_filter_pw_stencil_4;
}

//store is: hw_filter_pw_global_wrapper.stencil(1, 1) = hw_filter_pw.stencil(1, 1)
hw_uint<16> hcompute_hw_filter_pw_global_wrapper_stencil_4(hw_uint<16>& hw_filter_pw_stencil) {
  int16_t _hw_filter_pw_stencil_5 = (int16_t) hw_filter_pw_stencil.extract<0, 15>();

  return _hw_filter_pw_stencil_5;
}

//store is: hw_filter_pw_global_wrapper.stencil(2, 1) = hw_filter_pw.stencil(2, 1)
hw_uint<16> hcompute_hw_filter_pw_global_wrapper_stencil_5(hw_uint<16>& hw_filter_pw_stencil) {
  int16_t _hw_filter_pw_stencil_6 = (int16_t) hw_filter_pw_stencil.extract<0, 15>();

  return _hw_filter_pw_stencil_6;
}

//store is: hw_filter_pw_global_wrapper.stencil(0, 2) = hw_filter_pw.stencil(0, 2)
hw_uint<16> hcompute_hw_filter_pw_global_wrapper_stencil_6(hw_uint<16>& hw_filter_pw_stencil) {
  int16_t _hw_filter_pw_stencil_7 = (int16_t) hw_filter_pw_stencil.extract<0, 15>();

  return _hw_filter_pw_stencil_7;
}

//store is: hw_filter_pw_global_wrapper.stencil(1, 2) = hw_filter_pw.stencil(1, 2)
hw_uint<16> hcompute_hw_filter_pw_global_wrapper_stencil_7(hw_uint<16>& hw_filter_pw_stencil) {
  int16_t _hw_filter_pw_stencil_8 = (int16_t) hw_filter_pw_stencil.extract<0, 15>();

  return _hw_filter_pw_stencil_8;
}

//store is: hw_filter_pw_global_wrapper.stencil(2, 2) = hw_filter_pw.stencil(2, 2)
hw_uint<16> hcompute_hw_filter_pw_global_wrapper_stencil_8(hw_uint<16>& hw_filter_pw_stencil) {
  int16_t _hw_filter_pw_stencil_9 = (int16_t) hw_filter_pw_stencil.extract<0, 15>();

  return _hw_filter_pw_stencil_9;
}

//store is: hw_filter_pw_global_wrapper.stencil(0, 3) = hw_filter_pw.stencil(0, 3)
hw_uint<16> hcompute_hw_filter_pw_global_wrapper_stencil_9(hw_uint<16>& hw_filter_pw_stencil) {
  int16_t _hw_filter_pw_stencil_10 = (int16_t) hw_filter_pw_stencil.extract<0, 15>();

  return _hw_filter_pw_stencil_10;
}

//store is: hw_filter_pw_global_wrapper.stencil(1, 3) = hw_filter_pw.stencil(1, 3)
hw_uint<16> hcompute_hw_filter_pw_global_wrapper_stencil_10(hw_uint<16>& hw_filter_pw_stencil) {
  int16_t _hw_filter_pw_stencil_11 = (int16_t) hw_filter_pw_stencil.extract<0, 15>();

  return _hw_filter_pw_stencil_11;
}

//store is: hw_filter_pw_global_wrapper.stencil(2, 3) = hw_filter_pw.stencil(2, 3)
hw_uint<16> hcompute_hw_filter_pw_global_wrapper_stencil_11(hw_uint<16>& hw_filter_pw_stencil) {
  int16_t _hw_filter_pw_stencil_12 = (int16_t) hw_filter_pw_stencil.extract<0, 15>();

  return _hw_filter_pw_stencil_12;
}

//store is: pw_conv_reduction.stencil(0, pw_conv_reduction_s0_x, pw_conv_reduction_s0_y) = (int16)0
hw_uint<16> hcompute_pw_conv_reduction_stencil() {
  int16_t _1061 = (int16_t)(0);
  return _1061;
}

//store is: pw_conv_reduction.stencil(1, pw_conv_reduction_s0_x, pw_conv_reduction_s0_y) = (int16)0
hw_uint<16> hcompute_pw_conv_reduction_stencil_1() {
  int16_t _1064 = (int16_t)(0);
  return _1064;
}

//store is: pw_conv_reduction.stencil(2, pw_conv_reduction_s0_x, pw_conv_reduction_s0_y) = (int16)0
hw_uint<16> hcompute_pw_conv_reduction_stencil_2() {
  int16_t _1067 = (int16_t)(0);
  return _1067;
}

//store is: pw_conv_reduction.stencil(0, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) = ((hw_filter_pw_global_wrapper.stencil(0, 0)*dw_conv.stencil(0, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + (pw_conv_reduction.stencil(0, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) + ((hw_filter_pw_global_wrapper.stencil(0, 1)*dw_conv.stencil(1, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + ((hw_filter_pw_global_wrapper.stencil(0, 3)*dw_conv.stencil(3, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + (hw_filter_pw_global_wrapper.stencil(0, 2)*dw_conv.stencil(2, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y))))))
hw_uint<16> hcompute_pw_conv_reduction_stencil_3(hw_uint<64>& dw_conv_stencil, hw_uint<64>& hw_filter_pw_global_wrapper_stencil, hw_uint<16>& pw_conv_reduction_stencil) {
  int16_t _dw_conv_stencil_5 = (int16_t) dw_conv_stencil.extract<0, 15>();
  int16_t _dw_conv_stencil_6 = (int16_t) dw_conv_stencil.extract<16, 31>();
  int16_t _dw_conv_stencil_7 = (int16_t) dw_conv_stencil.extract<32, 47>();
  int16_t _dw_conv_stencil_8 = (int16_t) dw_conv_stencil.extract<48, 63>();

  int16_t _hw_filter_pw_global_wrapper_stencil_1 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_filter_pw_global_wrapper_stencil_2 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_filter_pw_global_wrapper_stencil_3 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_filter_pw_global_wrapper_stencil_4 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<48, 63>();

  int16_t _pw_conv_reduction_stencil_1 = (int16_t) pw_conv_reduction_stencil.extract<0, 15>();

  int16_t _1070 = _hw_filter_pw_global_wrapper_stencil_1 * _dw_conv_stencil_5;
  int16_t _1071 = _hw_filter_pw_global_wrapper_stencil_2 * _dw_conv_stencil_6;
  int16_t _1072 = _hw_filter_pw_global_wrapper_stencil_3 * _dw_conv_stencil_7;
  int16_t _1073 = _hw_filter_pw_global_wrapper_stencil_4 * _dw_conv_stencil_8;
  int16_t _1074 = _1072 + _1073;
  int16_t _1075 = _1071 + _1074;
  int16_t _1076 = _pw_conv_reduction_stencil_1 + _1075;
  int16_t _1077 = _1070 + _1076;
  return _1077;
}

//store is: pw_conv_reduction.stencil(1, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) = ((hw_filter_pw_global_wrapper.stencil(1, 0)*dw_conv.stencil(0, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + (pw_conv_reduction.stencil(1, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) + ((hw_filter_pw_global_wrapper.stencil(1, 1)*dw_conv.stencil(1, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + ((hw_filter_pw_global_wrapper.stencil(1, 3)*dw_conv.stencil(3, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + (hw_filter_pw_global_wrapper.stencil(1, 2)*dw_conv.stencil(2, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y))))))
hw_uint<16> hcompute_pw_conv_reduction_stencil_4(hw_uint<64>& dw_conv_stencil, hw_uint<64>& hw_filter_pw_global_wrapper_stencil, hw_uint<16>& pw_conv_reduction_stencil) {
  int16_t _dw_conv_stencil_10 = (int16_t) dw_conv_stencil.extract<0, 15>();
  int16_t _dw_conv_stencil_11 = (int16_t) dw_conv_stencil.extract<16, 31>();
  int16_t _dw_conv_stencil_12 = (int16_t) dw_conv_stencil.extract<32, 47>();
  int16_t _dw_conv_stencil_9 = (int16_t) dw_conv_stencil.extract<48, 63>();

  int16_t _hw_filter_pw_global_wrapper_stencil_5 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_filter_pw_global_wrapper_stencil_6 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_filter_pw_global_wrapper_stencil_7 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_filter_pw_global_wrapper_stencil_8 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<48, 63>();

  int16_t _pw_conv_reduction_stencil_2 = (int16_t) pw_conv_reduction_stencil.extract<0, 15>();

  int16_t _1103 = _hw_filter_pw_global_wrapper_stencil_5 * _dw_conv_stencil_9;
  int16_t _1104 = _hw_filter_pw_global_wrapper_stencil_6 * _dw_conv_stencil_10;
  int16_t _1105 = _hw_filter_pw_global_wrapper_stencil_7 * _dw_conv_stencil_11;
  int16_t _1106 = _hw_filter_pw_global_wrapper_stencil_8 * _dw_conv_stencil_12;
  int16_t _1107 = _1105 + _1106;
  int16_t _1108 = _1104 + _1107;
  int16_t _1109 = _pw_conv_reduction_stencil_2 + _1108;
  int16_t _1110 = _1103 + _1109;
  return _1110;
}

//store is: pw_conv_reduction.stencil(2, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) = ((hw_filter_pw_global_wrapper.stencil(2, 0)*dw_conv.stencil(0, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + (pw_conv_reduction.stencil(2, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) + ((hw_filter_pw_global_wrapper.stencil(2, 1)*dw_conv.stencil(1, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + ((hw_filter_pw_global_wrapper.stencil(2, 3)*dw_conv.stencil(3, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + (hw_filter_pw_global_wrapper.stencil(2, 2)*dw_conv.stencil(2, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y))))))
hw_uint<16> hcompute_pw_conv_reduction_stencil_5(hw_uint<64>& dw_conv_stencil, hw_uint<64>& hw_filter_pw_global_wrapper_stencil, hw_uint<16>& pw_conv_reduction_stencil) {
  int16_t _dw_conv_stencil_13 = (int16_t) dw_conv_stencil.extract<0, 15>();
  int16_t _dw_conv_stencil_14 = (int16_t) dw_conv_stencil.extract<16, 31>();
  int16_t _dw_conv_stencil_15 = (int16_t) dw_conv_stencil.extract<32, 47>();
  int16_t _dw_conv_stencil_16 = (int16_t) dw_conv_stencil.extract<48, 63>();

  int16_t _hw_filter_pw_global_wrapper_stencil_10 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_filter_pw_global_wrapper_stencil_11 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_filter_pw_global_wrapper_stencil_12 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_filter_pw_global_wrapper_stencil_9 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<48, 63>();

  int16_t _pw_conv_reduction_stencil_3 = (int16_t) pw_conv_reduction_stencil.extract<0, 15>();

  int16_t _1136 = _hw_filter_pw_global_wrapper_stencil_9 * _dw_conv_stencil_13;
  int16_t _1137 = _hw_filter_pw_global_wrapper_stencil_10 * _dw_conv_stencil_14;
  int16_t _1138 = _hw_filter_pw_global_wrapper_stencil_11 * _dw_conv_stencil_15;
  int16_t _1139 = _hw_filter_pw_global_wrapper_stencil_12 * _dw_conv_stencil_16;
  int16_t _1140 = _1138 + _1139;
  int16_t _1141 = _1137 + _1140;
  int16_t _1142 = _pw_conv_reduction_stencil_3 + _1141;
  int16_t _1143 = _1136 + _1142;
  return _1143;
}

//store is: hw_output.stencil(0, hw_output_s0_x_xi, hw_output_s0_y_yi) = pw_conv_reduction.stencil(0, hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& pw_conv_reduction_stencil) {
  int16_t _pw_conv_reduction_stencil_4 = (int16_t) pw_conv_reduction_stencil.extract<0, 15>();

  return _pw_conv_reduction_stencil_4;
}

//store is: hw_output.stencil(1, hw_output_s0_x_xi, hw_output_s0_y_yi) = pw_conv_reduction.stencil(1, hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil_1(hw_uint<16>& pw_conv_reduction_stencil) {
  int16_t _pw_conv_reduction_stencil_5 = (int16_t) pw_conv_reduction_stencil.extract<0, 15>();

  return _pw_conv_reduction_stencil_5;
}

//store is: hw_output.stencil(2, hw_output_s0_x_xi, hw_output_s0_y_yi) = pw_conv_reduction.stencil(2, hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil_2(hw_uint<16>& pw_conv_reduction_stencil) {
  int16_t _pw_conv_reduction_stencil_6 = (int16_t) pw_conv_reduction_stencil.extract<0, 15>();

  return _pw_conv_reduction_stencil_6;
}

