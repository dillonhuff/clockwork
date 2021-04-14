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

//store is: dw_conv.stencil(0, dw_conv_s0_x, dw_conv_s0_y) = (int16)0
hw_uint<16> hcompute_dw_conv_stencil() {
  int16_t _738 = (int16_t)(0);
  return _738;
}

//store is: dw_conv.stencil(1, dw_conv_s0_x, dw_conv_s0_y) = (int16)0
hw_uint<16> hcompute_dw_conv_stencil_1() {
  int16_t _741 = (int16_t)(0);
  return _741;
}

//store is: dw_conv.stencil(2, dw_conv_s0_x, dw_conv_s0_y) = (int16)0
hw_uint<16> hcompute_dw_conv_stencil_2() {
  int16_t _744 = (int16_t)(0);
  return _744;
}

//store is: dw_conv.stencil(3, dw_conv_s0_x, dw_conv_s0_y) = (int16)0
hw_uint<16> hcompute_dw_conv_stencil_3() {
  int16_t _747 = (int16_t)(0);
  return _747;
}

//store is: dw_conv.stencil(0, dw_conv_s1_x, dw_conv_s1_y) = ((hw_filter_dw_global_wrapper.stencil(0, 0, 0)*hw_input_global_wrapper.stencil(0, dw_conv_s1_x, dw_conv_s1_y)) + (dw_conv.stencil(0, dw_conv_s1_x, dw_conv_s1_y) + ((hw_filter_dw_global_wrapper.stencil(0, 1, 0)*hw_input_global_wrapper.stencil(0, (dw_conv_s1_x + 1), dw_conv_s1_y)) + ((hw_filter_dw_global_wrapper.stencil(0, 2, 0)*hw_input_global_wrapper.stencil(0, (dw_conv_s1_x + 2), dw_conv_s1_y)) + ((hw_filter_dw_global_wrapper.stencil(0, 0, 1)*hw_input_global_wrapper.stencil(0, dw_conv_s1_x, (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(0, 1, 1)*hw_input_global_wrapper.stencil(0, (dw_conv_s1_x + 1), (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(0, 2, 1)*hw_input_global_wrapper.stencil(0, (dw_conv_s1_x + 2), (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(0, 0, 2)*hw_input_global_wrapper.stencil(0, dw_conv_s1_x, (dw_conv_s1_y + 2))) + ((hw_filter_dw_global_wrapper.stencil(0, 2, 2)*hw_input_global_wrapper.stencil(0, (dw_conv_s1_x + 2), (dw_conv_s1_y + 2))) + (hw_filter_dw_global_wrapper.stencil(0, 1, 2)*hw_input_global_wrapper.stencil(0, (dw_conv_s1_x + 1), (dw_conv_s1_y + 2))))))))))))
hw_uint<16> hcompute_dw_conv_stencil_4(hw_uint<16>& dw_conv_stencil, hw_uint<144>& hw_filter_dw_global_wrapper_stencil, hw_uint<144>& hw_input_global_wrapper_stencil) {
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

  int16_t _750 = _hw_filter_dw_global_wrapper_stencil_1 * _hw_input_global_wrapper_stencil_1;
  int16_t _751 = _hw_filter_dw_global_wrapper_stencil_2 * _hw_input_global_wrapper_stencil_2;
  int16_t _752 = _hw_filter_dw_global_wrapper_stencil_3 * _hw_input_global_wrapper_stencil_3;
  int16_t _753 = _hw_filter_dw_global_wrapper_stencil_4 * _hw_input_global_wrapper_stencil_4;
  int16_t _754 = _hw_filter_dw_global_wrapper_stencil_5 * _hw_input_global_wrapper_stencil_5;
  int16_t _755 = _hw_filter_dw_global_wrapper_stencil_6 * _hw_input_global_wrapper_stencil_6;
  int16_t _756 = _hw_filter_dw_global_wrapper_stencil_7 * _hw_input_global_wrapper_stencil_7;
  int16_t _757 = _hw_filter_dw_global_wrapper_stencil_8 * _hw_input_global_wrapper_stencil_8;
  int16_t _758 = _hw_filter_dw_global_wrapper_stencil_9 * _hw_input_global_wrapper_stencil_9;
  int16_t _759 = _757 + _758;
  int16_t _760 = _756 + _759;
  int16_t _761 = _755 + _760;
  int16_t _762 = _754 + _761;
  int16_t _763 = _753 + _762;
  int16_t _764 = _752 + _763;
  int16_t _765 = _751 + _764;
  int16_t _766 = _dw_conv_stencil_1 + _765;
  int16_t _767 = _750 + _766;
  return _767;
}

//store is: dw_conv.stencil(1, dw_conv_s1_x, dw_conv_s1_y) = ((hw_filter_dw_global_wrapper.stencil(1, 0, 0)*hw_input_global_wrapper.stencil(1, dw_conv_s1_x, dw_conv_s1_y)) + (dw_conv.stencil(1, dw_conv_s1_x, dw_conv_s1_y) + ((hw_filter_dw_global_wrapper.stencil(1, 1, 0)*hw_input_global_wrapper.stencil(1, (dw_conv_s1_x + 1), dw_conv_s1_y)) + ((hw_filter_dw_global_wrapper.stencil(1, 2, 0)*hw_input_global_wrapper.stencil(1, (dw_conv_s1_x + 2), dw_conv_s1_y)) + ((hw_filter_dw_global_wrapper.stencil(1, 0, 1)*hw_input_global_wrapper.stencil(1, dw_conv_s1_x, (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(1, 1, 1)*hw_input_global_wrapper.stencil(1, (dw_conv_s1_x + 1), (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(1, 2, 1)*hw_input_global_wrapper.stencil(1, (dw_conv_s1_x + 2), (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(1, 0, 2)*hw_input_global_wrapper.stencil(1, dw_conv_s1_x, (dw_conv_s1_y + 2))) + ((hw_filter_dw_global_wrapper.stencil(1, 2, 2)*hw_input_global_wrapper.stencil(1, (dw_conv_s1_x + 2), (dw_conv_s1_y + 2))) + (hw_filter_dw_global_wrapper.stencil(1, 1, 2)*hw_input_global_wrapper.stencil(1, (dw_conv_s1_x + 1), (dw_conv_s1_y + 2))))))))))))
hw_uint<16> hcompute_dw_conv_stencil_5(hw_uint<16>& dw_conv_stencil, hw_uint<144>& hw_filter_dw_global_wrapper_stencil, hw_uint<144>& hw_input_global_wrapper_stencil) {
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

  int16_t _827 = _hw_filter_dw_global_wrapper_stencil_10 * _hw_input_global_wrapper_stencil_10;
  int16_t _828 = _hw_filter_dw_global_wrapper_stencil_11 * _hw_input_global_wrapper_stencil_11;
  int16_t _829 = _hw_filter_dw_global_wrapper_stencil_12 * _hw_input_global_wrapper_stencil_12;
  int16_t _830 = _hw_filter_dw_global_wrapper_stencil_13 * _hw_input_global_wrapper_stencil_13;
  int16_t _831 = _hw_filter_dw_global_wrapper_stencil_14 * _hw_input_global_wrapper_stencil_14;
  int16_t _832 = _hw_filter_dw_global_wrapper_stencil_15 * _hw_input_global_wrapper_stencil_15;
  int16_t _833 = _hw_filter_dw_global_wrapper_stencil_16 * _hw_input_global_wrapper_stencil_16;
  int16_t _834 = _hw_filter_dw_global_wrapper_stencil_17 * _hw_input_global_wrapper_stencil_17;
  int16_t _835 = _hw_filter_dw_global_wrapper_stencil_18 * _hw_input_global_wrapper_stencil_18;
  int16_t _836 = _834 + _835;
  int16_t _837 = _833 + _836;
  int16_t _838 = _832 + _837;
  int16_t _839 = _831 + _838;
  int16_t _840 = _830 + _839;
  int16_t _841 = _829 + _840;
  int16_t _842 = _828 + _841;
  int16_t _843 = _dw_conv_stencil_2 + _842;
  int16_t _844 = _827 + _843;
  return _844;
}

//store is: dw_conv.stencil(2, dw_conv_s1_x, dw_conv_s1_y) = ((hw_filter_dw_global_wrapper.stencil(2, 0, 0)*hw_input_global_wrapper.stencil(2, dw_conv_s1_x, dw_conv_s1_y)) + (dw_conv.stencil(2, dw_conv_s1_x, dw_conv_s1_y) + ((hw_filter_dw_global_wrapper.stencil(2, 1, 0)*hw_input_global_wrapper.stencil(2, (dw_conv_s1_x + 1), dw_conv_s1_y)) + ((hw_filter_dw_global_wrapper.stencil(2, 2, 0)*hw_input_global_wrapper.stencil(2, (dw_conv_s1_x + 2), dw_conv_s1_y)) + ((hw_filter_dw_global_wrapper.stencil(2, 0, 1)*hw_input_global_wrapper.stencil(2, dw_conv_s1_x, (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(2, 1, 1)*hw_input_global_wrapper.stencil(2, (dw_conv_s1_x + 1), (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(2, 2, 1)*hw_input_global_wrapper.stencil(2, (dw_conv_s1_x + 2), (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(2, 0, 2)*hw_input_global_wrapper.stencil(2, dw_conv_s1_x, (dw_conv_s1_y + 2))) + ((hw_filter_dw_global_wrapper.stencil(2, 2, 2)*hw_input_global_wrapper.stencil(2, (dw_conv_s1_x + 2), (dw_conv_s1_y + 2))) + (hw_filter_dw_global_wrapper.stencil(2, 1, 2)*hw_input_global_wrapper.stencil(2, (dw_conv_s1_x + 1), (dw_conv_s1_y + 2))))))))))))
hw_uint<16> hcompute_dw_conv_stencil_6(hw_uint<16>& dw_conv_stencil, hw_uint<144>& hw_filter_dw_global_wrapper_stencil, hw_uint<144>& hw_input_global_wrapper_stencil) {
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

  int16_t _904 = _hw_filter_dw_global_wrapper_stencil_19 * _hw_input_global_wrapper_stencil_19;
  int16_t _905 = _hw_filter_dw_global_wrapper_stencil_20 * _hw_input_global_wrapper_stencil_20;
  int16_t _906 = _hw_filter_dw_global_wrapper_stencil_21 * _hw_input_global_wrapper_stencil_21;
  int16_t _907 = _hw_filter_dw_global_wrapper_stencil_22 * _hw_input_global_wrapper_stencil_22;
  int16_t _908 = _hw_filter_dw_global_wrapper_stencil_23 * _hw_input_global_wrapper_stencil_23;
  int16_t _909 = _hw_filter_dw_global_wrapper_stencil_24 * _hw_input_global_wrapper_stencil_24;
  int16_t _910 = _hw_filter_dw_global_wrapper_stencil_25 * _hw_input_global_wrapper_stencil_25;
  int16_t _911 = _hw_filter_dw_global_wrapper_stencil_26 * _hw_input_global_wrapper_stencil_26;
  int16_t _912 = _hw_filter_dw_global_wrapper_stencil_27 * _hw_input_global_wrapper_stencil_27;
  int16_t _913 = _911 + _912;
  int16_t _914 = _910 + _913;
  int16_t _915 = _909 + _914;
  int16_t _916 = _908 + _915;
  int16_t _917 = _907 + _916;
  int16_t _918 = _906 + _917;
  int16_t _919 = _905 + _918;
  int16_t _920 = _dw_conv_stencil_3 + _919;
  int16_t _921 = _904 + _920;
  return _921;
}

//store is: dw_conv.stencil(3, dw_conv_s1_x, dw_conv_s1_y) = ((hw_filter_dw_global_wrapper.stencil(3, 0, 0)*hw_input_global_wrapper.stencil(3, dw_conv_s1_x, dw_conv_s1_y)) + (dw_conv.stencil(3, dw_conv_s1_x, dw_conv_s1_y) + ((hw_filter_dw_global_wrapper.stencil(3, 1, 0)*hw_input_global_wrapper.stencil(3, (dw_conv_s1_x + 1), dw_conv_s1_y)) + ((hw_filter_dw_global_wrapper.stencil(3, 2, 0)*hw_input_global_wrapper.stencil(3, (dw_conv_s1_x + 2), dw_conv_s1_y)) + ((hw_filter_dw_global_wrapper.stencil(3, 0, 1)*hw_input_global_wrapper.stencil(3, dw_conv_s1_x, (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(3, 1, 1)*hw_input_global_wrapper.stencil(3, (dw_conv_s1_x + 1), (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(3, 2, 1)*hw_input_global_wrapper.stencil(3, (dw_conv_s1_x + 2), (dw_conv_s1_y + 1))) + ((hw_filter_dw_global_wrapper.stencil(3, 0, 2)*hw_input_global_wrapper.stencil(3, dw_conv_s1_x, (dw_conv_s1_y + 2))) + ((hw_filter_dw_global_wrapper.stencil(3, 2, 2)*hw_input_global_wrapper.stencil(3, (dw_conv_s1_x + 2), (dw_conv_s1_y + 2))) + (hw_filter_dw_global_wrapper.stencil(3, 1, 2)*hw_input_global_wrapper.stencil(3, (dw_conv_s1_x + 1), (dw_conv_s1_y + 2))))))))))))
hw_uint<16> hcompute_dw_conv_stencil_7(hw_uint<16>& dw_conv_stencil, hw_uint<144>& hw_filter_dw_global_wrapper_stencil, hw_uint<144>& hw_input_global_wrapper_stencil) {
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

  int16_t _981 = _hw_filter_dw_global_wrapper_stencil_28 * _hw_input_global_wrapper_stencil_28;
  int16_t _982 = _hw_filter_dw_global_wrapper_stencil_29 * _hw_input_global_wrapper_stencil_29;
  int16_t _983 = _hw_filter_dw_global_wrapper_stencil_30 * _hw_input_global_wrapper_stencil_30;
  int16_t _984 = _hw_filter_dw_global_wrapper_stencil_31 * _hw_input_global_wrapper_stencil_31;
  int16_t _985 = _hw_filter_dw_global_wrapper_stencil_32 * _hw_input_global_wrapper_stencil_32;
  int16_t _986 = _hw_filter_dw_global_wrapper_stencil_33 * _hw_input_global_wrapper_stencil_33;
  int16_t _987 = _hw_filter_dw_global_wrapper_stencil_34 * _hw_input_global_wrapper_stencil_34;
  int16_t _988 = _hw_filter_dw_global_wrapper_stencil_35 * _hw_input_global_wrapper_stencil_35;
  int16_t _989 = _hw_filter_dw_global_wrapper_stencil_36 * _hw_input_global_wrapper_stencil_36;
  int16_t _990 = _988 + _989;
  int16_t _991 = _987 + _990;
  int16_t _992 = _986 + _991;
  int16_t _993 = _985 + _992;
  int16_t _994 = _984 + _993;
  int16_t _995 = _983 + _994;
  int16_t _996 = _982 + _995;
  int16_t _997 = _dw_conv_stencil_4 + _996;
  int16_t _998 = _981 + _997;
  return _998;
}

//store is: hw_filter_pw_global_wrapper.stencil(hw_filter_pw_global_wrapper_s0_k, hw_filter_pw_global_wrapper_s0_c) = hw_filter_pw.stencil(hw_filter_pw_global_wrapper_s0_k, hw_filter_pw_global_wrapper_s0_c)
hw_uint<16> hcompute_hw_filter_pw_global_wrapper_stencil(hw_uint<16>& hw_filter_pw_stencil) {
  int16_t _hw_filter_pw_stencil_1 = (int16_t) hw_filter_pw_stencil.extract<0, 15>();

  return _hw_filter_pw_stencil_1;
}

//store is: pw_conv_reduction.stencil(0, pw_conv_reduction_s0_x, pw_conv_reduction_s0_y) = (int16)0
hw_uint<16> hcompute_pw_conv_reduction_stencil() {
  int16_t _1059 = (int16_t)(0);
  return _1059;
}

//store is: pw_conv_reduction.stencil(1, pw_conv_reduction_s0_x, pw_conv_reduction_s0_y) = (int16)0
hw_uint<16> hcompute_pw_conv_reduction_stencil_1() {
  int16_t _1062 = (int16_t)(0);
  return _1062;
}

//store is: pw_conv_reduction.stencil(2, pw_conv_reduction_s0_x, pw_conv_reduction_s0_y) = (int16)0
hw_uint<16> hcompute_pw_conv_reduction_stencil_2() {
  int16_t _1065 = (int16_t)(0);
  return _1065;
}

//store is: pw_conv_reduction.stencil(3, pw_conv_reduction_s0_x, pw_conv_reduction_s0_y) = (int16)0
hw_uint<16> hcompute_pw_conv_reduction_stencil_3() {
  int16_t _1068 = (int16_t)(0);
  return _1068;
}

//store is: pw_conv_reduction.stencil(4, pw_conv_reduction_s0_x, pw_conv_reduction_s0_y) = (int16)0
hw_uint<16> hcompute_pw_conv_reduction_stencil_4() {
  int16_t _1071 = (int16_t)(0);
  return _1071;
}

//store is: pw_conv_reduction.stencil(5, pw_conv_reduction_s0_x, pw_conv_reduction_s0_y) = (int16)0
hw_uint<16> hcompute_pw_conv_reduction_stencil_5() {
  int16_t _1074 = (int16_t)(0);
  return _1074;
}

//store is: pw_conv_reduction.stencil(6, pw_conv_reduction_s0_x, pw_conv_reduction_s0_y) = (int16)0
hw_uint<16> hcompute_pw_conv_reduction_stencil_6() {
  int16_t _1077 = (int16_t)(0);
  return _1077;
}

//store is: pw_conv_reduction.stencil(7, pw_conv_reduction_s0_x, pw_conv_reduction_s0_y) = (int16)0
hw_uint<16> hcompute_pw_conv_reduction_stencil_7() {
  int16_t _1080 = (int16_t)(0);
  return _1080;
}

//store is: pw_conv_reduction.stencil(0, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) = ((hw_filter_pw_global_wrapper.stencil(0, 0)*dw_conv.stencil(0, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + (pw_conv_reduction.stencil(0, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) + ((hw_filter_pw_global_wrapper.stencil(0, 1)*dw_conv.stencil(1, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + ((hw_filter_pw_global_wrapper.stencil(0, 3)*dw_conv.stencil(3, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + (hw_filter_pw_global_wrapper.stencil(0, 2)*dw_conv.stencil(2, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y))))))
hw_uint<16> hcompute_pw_conv_reduction_stencil_8(hw_uint<64>& dw_conv_stencil, hw_uint<64>& hw_filter_pw_global_wrapper_stencil, hw_uint<16>& pw_conv_reduction_stencil) {
  int16_t _dw_conv_stencil_5 = (int16_t) dw_conv_stencil.extract<0, 15>();
  int16_t _dw_conv_stencil_6 = (int16_t) dw_conv_stencil.extract<16, 31>();
  int16_t _dw_conv_stencil_7 = (int16_t) dw_conv_stencil.extract<32, 47>();
  int16_t _dw_conv_stencil_8 = (int16_t) dw_conv_stencil.extract<48, 63>();

  int16_t _hw_filter_pw_global_wrapper_stencil_1 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_filter_pw_global_wrapper_stencil_2 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_filter_pw_global_wrapper_stencil_3 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_filter_pw_global_wrapper_stencil_4 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<48, 63>();

  int16_t _pw_conv_reduction_stencil_1 = (int16_t) pw_conv_reduction_stencil.extract<0, 15>();

  int16_t _1083 = _hw_filter_pw_global_wrapper_stencil_1 * _dw_conv_stencil_5;
  int16_t _1084 = _hw_filter_pw_global_wrapper_stencil_2 * _dw_conv_stencil_6;
  int16_t _1085 = _hw_filter_pw_global_wrapper_stencil_3 * _dw_conv_stencil_7;
  int16_t _1086 = _hw_filter_pw_global_wrapper_stencil_4 * _dw_conv_stencil_8;
  int16_t _1087 = _1085 + _1086;
  int16_t _1088 = _1084 + _1087;
  int16_t _1089 = _pw_conv_reduction_stencil_1 + _1088;
  int16_t _1090 = _1083 + _1089;
  return _1090;
}

//store is: pw_conv_reduction.stencil(1, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) = ((hw_filter_pw_global_wrapper.stencil(1, 0)*dw_conv.stencil(0, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + (pw_conv_reduction.stencil(1, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) + ((hw_filter_pw_global_wrapper.stencil(1, 1)*dw_conv.stencil(1, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + ((hw_filter_pw_global_wrapper.stencil(1, 3)*dw_conv.stencil(3, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + (hw_filter_pw_global_wrapper.stencil(1, 2)*dw_conv.stencil(2, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y))))))
hw_uint<16> hcompute_pw_conv_reduction_stencil_9(hw_uint<64>& dw_conv_stencil, hw_uint<64>& hw_filter_pw_global_wrapper_stencil, hw_uint<16>& pw_conv_reduction_stencil) {
  int16_t _dw_conv_stencil_10 = (int16_t) dw_conv_stencil.extract<0, 15>();
  int16_t _dw_conv_stencil_11 = (int16_t) dw_conv_stencil.extract<16, 31>();
  int16_t _dw_conv_stencil_12 = (int16_t) dw_conv_stencil.extract<32, 47>();
  int16_t _dw_conv_stencil_9 = (int16_t) dw_conv_stencil.extract<48, 63>();

  int16_t _hw_filter_pw_global_wrapper_stencil_5 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_filter_pw_global_wrapper_stencil_6 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_filter_pw_global_wrapper_stencil_7 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_filter_pw_global_wrapper_stencil_8 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<48, 63>();

  int16_t _pw_conv_reduction_stencil_2 = (int16_t) pw_conv_reduction_stencil.extract<0, 15>();

  int16_t _1116 = _hw_filter_pw_global_wrapper_stencil_5 * _dw_conv_stencil_9;
  int16_t _1117 = _hw_filter_pw_global_wrapper_stencil_6 * _dw_conv_stencil_10;
  int16_t _1118 = _hw_filter_pw_global_wrapper_stencil_7 * _dw_conv_stencil_11;
  int16_t _1119 = _hw_filter_pw_global_wrapper_stencil_8 * _dw_conv_stencil_12;
  int16_t _1120 = _1118 + _1119;
  int16_t _1121 = _1117 + _1120;
  int16_t _1122 = _pw_conv_reduction_stencil_2 + _1121;
  int16_t _1123 = _1116 + _1122;
  return _1123;
}

//store is: pw_conv_reduction.stencil(2, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) = ((hw_filter_pw_global_wrapper.stencil(2, 0)*dw_conv.stencil(0, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + (pw_conv_reduction.stencil(2, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) + ((hw_filter_pw_global_wrapper.stencil(2, 1)*dw_conv.stencil(1, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + ((hw_filter_pw_global_wrapper.stencil(2, 3)*dw_conv.stencil(3, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + (hw_filter_pw_global_wrapper.stencil(2, 2)*dw_conv.stencil(2, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y))))))
hw_uint<16> hcompute_pw_conv_reduction_stencil_10(hw_uint<64>& dw_conv_stencil, hw_uint<64>& hw_filter_pw_global_wrapper_stencil, hw_uint<16>& pw_conv_reduction_stencil) {
  int16_t _dw_conv_stencil_13 = (int16_t) dw_conv_stencil.extract<0, 15>();
  int16_t _dw_conv_stencil_14 = (int16_t) dw_conv_stencil.extract<16, 31>();
  int16_t _dw_conv_stencil_15 = (int16_t) dw_conv_stencil.extract<32, 47>();
  int16_t _dw_conv_stencil_16 = (int16_t) dw_conv_stencil.extract<48, 63>();

  int16_t _hw_filter_pw_global_wrapper_stencil_10 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_filter_pw_global_wrapper_stencil_11 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_filter_pw_global_wrapper_stencil_12 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_filter_pw_global_wrapper_stencil_9 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<48, 63>();

  int16_t _pw_conv_reduction_stencil_3 = (int16_t) pw_conv_reduction_stencil.extract<0, 15>();

  int16_t _1149 = _hw_filter_pw_global_wrapper_stencil_9 * _dw_conv_stencil_13;
  int16_t _1150 = _hw_filter_pw_global_wrapper_stencil_10 * _dw_conv_stencil_14;
  int16_t _1151 = _hw_filter_pw_global_wrapper_stencil_11 * _dw_conv_stencil_15;
  int16_t _1152 = _hw_filter_pw_global_wrapper_stencil_12 * _dw_conv_stencil_16;
  int16_t _1153 = _1151 + _1152;
  int16_t _1154 = _1150 + _1153;
  int16_t _1155 = _pw_conv_reduction_stencil_3 + _1154;
  int16_t _1156 = _1149 + _1155;
  return _1156;
}

//store is: pw_conv_reduction.stencil(3, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) = ((hw_filter_pw_global_wrapper.stencil(3, 0)*dw_conv.stencil(0, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + (pw_conv_reduction.stencil(3, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) + ((hw_filter_pw_global_wrapper.stencil(3, 1)*dw_conv.stencil(1, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + ((hw_filter_pw_global_wrapper.stencil(3, 3)*dw_conv.stencil(3, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + (hw_filter_pw_global_wrapper.stencil(3, 2)*dw_conv.stencil(2, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y))))))
hw_uint<16> hcompute_pw_conv_reduction_stencil_11(hw_uint<64>& dw_conv_stencil, hw_uint<64>& hw_filter_pw_global_wrapper_stencil, hw_uint<16>& pw_conv_reduction_stencil) {
  int16_t _dw_conv_stencil_17 = (int16_t) dw_conv_stencil.extract<0, 15>();
  int16_t _dw_conv_stencil_18 = (int16_t) dw_conv_stencil.extract<16, 31>();
  int16_t _dw_conv_stencil_19 = (int16_t) dw_conv_stencil.extract<32, 47>();
  int16_t _dw_conv_stencil_20 = (int16_t) dw_conv_stencil.extract<48, 63>();

  int16_t _hw_filter_pw_global_wrapper_stencil_13 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_filter_pw_global_wrapper_stencil_14 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_filter_pw_global_wrapper_stencil_15 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_filter_pw_global_wrapper_stencil_16 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<48, 63>();

  int16_t _pw_conv_reduction_stencil_4 = (int16_t) pw_conv_reduction_stencil.extract<0, 15>();

  int16_t _1182 = _hw_filter_pw_global_wrapper_stencil_13 * _dw_conv_stencil_17;
  int16_t _1183 = _hw_filter_pw_global_wrapper_stencil_14 * _dw_conv_stencil_18;
  int16_t _1184 = _hw_filter_pw_global_wrapper_stencil_15 * _dw_conv_stencil_19;
  int16_t _1185 = _hw_filter_pw_global_wrapper_stencil_16 * _dw_conv_stencil_20;
  int16_t _1186 = _1184 + _1185;
  int16_t _1187 = _1183 + _1186;
  int16_t _1188 = _pw_conv_reduction_stencil_4 + _1187;
  int16_t _1189 = _1182 + _1188;
  return _1189;
}

//store is: pw_conv_reduction.stencil(4, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) = ((hw_filter_pw_global_wrapper.stencil(4, 0)*dw_conv.stencil(0, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + (pw_conv_reduction.stencil(4, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) + ((hw_filter_pw_global_wrapper.stencil(4, 1)*dw_conv.stencil(1, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + ((hw_filter_pw_global_wrapper.stencil(4, 3)*dw_conv.stencil(3, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + (hw_filter_pw_global_wrapper.stencil(4, 2)*dw_conv.stencil(2, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y))))))
hw_uint<16> hcompute_pw_conv_reduction_stencil_12(hw_uint<64>& dw_conv_stencil, hw_uint<64>& hw_filter_pw_global_wrapper_stencil, hw_uint<16>& pw_conv_reduction_stencil) {
  int16_t _dw_conv_stencil_21 = (int16_t) dw_conv_stencil.extract<0, 15>();
  int16_t _dw_conv_stencil_22 = (int16_t) dw_conv_stencil.extract<16, 31>();
  int16_t _dw_conv_stencil_23 = (int16_t) dw_conv_stencil.extract<32, 47>();
  int16_t _dw_conv_stencil_24 = (int16_t) dw_conv_stencil.extract<48, 63>();

  int16_t _hw_filter_pw_global_wrapper_stencil_17 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_filter_pw_global_wrapper_stencil_18 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_filter_pw_global_wrapper_stencil_19 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_filter_pw_global_wrapper_stencil_20 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<48, 63>();

  int16_t _pw_conv_reduction_stencil_5 = (int16_t) pw_conv_reduction_stencil.extract<0, 15>();

  int16_t _1215 = _hw_filter_pw_global_wrapper_stencil_17 * _dw_conv_stencil_21;
  int16_t _1216 = _hw_filter_pw_global_wrapper_stencil_18 * _dw_conv_stencil_22;
  int16_t _1217 = _hw_filter_pw_global_wrapper_stencil_19 * _dw_conv_stencil_23;
  int16_t _1218 = _hw_filter_pw_global_wrapper_stencil_20 * _dw_conv_stencil_24;
  int16_t _1219 = _1217 + _1218;
  int16_t _1220 = _1216 + _1219;
  int16_t _1221 = _pw_conv_reduction_stencil_5 + _1220;
  int16_t _1222 = _1215 + _1221;
  return _1222;
}

//store is: pw_conv_reduction.stencil(5, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) = ((hw_filter_pw_global_wrapper.stencil(5, 0)*dw_conv.stencil(0, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + (pw_conv_reduction.stencil(5, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) + ((hw_filter_pw_global_wrapper.stencil(5, 1)*dw_conv.stencil(1, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + ((hw_filter_pw_global_wrapper.stencil(5, 3)*dw_conv.stencil(3, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + (hw_filter_pw_global_wrapper.stencil(5, 2)*dw_conv.stencil(2, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y))))))
hw_uint<16> hcompute_pw_conv_reduction_stencil_13(hw_uint<64>& dw_conv_stencil, hw_uint<64>& hw_filter_pw_global_wrapper_stencil, hw_uint<16>& pw_conv_reduction_stencil) {
  int16_t _dw_conv_stencil_25 = (int16_t) dw_conv_stencil.extract<0, 15>();
  int16_t _dw_conv_stencil_26 = (int16_t) dw_conv_stencil.extract<16, 31>();
  int16_t _dw_conv_stencil_27 = (int16_t) dw_conv_stencil.extract<32, 47>();
  int16_t _dw_conv_stencil_28 = (int16_t) dw_conv_stencil.extract<48, 63>();

  int16_t _hw_filter_pw_global_wrapper_stencil_21 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_filter_pw_global_wrapper_stencil_22 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_filter_pw_global_wrapper_stencil_23 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_filter_pw_global_wrapper_stencil_24 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<48, 63>();

  int16_t _pw_conv_reduction_stencil_6 = (int16_t) pw_conv_reduction_stencil.extract<0, 15>();

  int16_t _1248 = _hw_filter_pw_global_wrapper_stencil_21 * _dw_conv_stencil_25;
  int16_t _1249 = _hw_filter_pw_global_wrapper_stencil_22 * _dw_conv_stencil_26;
  int16_t _1250 = _hw_filter_pw_global_wrapper_stencil_23 * _dw_conv_stencil_27;
  int16_t _1251 = _hw_filter_pw_global_wrapper_stencil_24 * _dw_conv_stencil_28;
  int16_t _1252 = _1250 + _1251;
  int16_t _1253 = _1249 + _1252;
  int16_t _1254 = _pw_conv_reduction_stencil_6 + _1253;
  int16_t _1255 = _1248 + _1254;
  return _1255;
}

//store is: pw_conv_reduction.stencil(6, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) = ((hw_filter_pw_global_wrapper.stencil(6, 0)*dw_conv.stencil(0, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + (pw_conv_reduction.stencil(6, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) + ((hw_filter_pw_global_wrapper.stencil(6, 1)*dw_conv.stencil(1, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + ((hw_filter_pw_global_wrapper.stencil(6, 3)*dw_conv.stencil(3, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + (hw_filter_pw_global_wrapper.stencil(6, 2)*dw_conv.stencil(2, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y))))))
hw_uint<16> hcompute_pw_conv_reduction_stencil_14(hw_uint<64>& dw_conv_stencil, hw_uint<64>& hw_filter_pw_global_wrapper_stencil, hw_uint<16>& pw_conv_reduction_stencil) {
  int16_t _dw_conv_stencil_29 = (int16_t) dw_conv_stencil.extract<0, 15>();
  int16_t _dw_conv_stencil_30 = (int16_t) dw_conv_stencil.extract<16, 31>();
  int16_t _dw_conv_stencil_31 = (int16_t) dw_conv_stencil.extract<32, 47>();
  int16_t _dw_conv_stencil_32 = (int16_t) dw_conv_stencil.extract<48, 63>();

  int16_t _hw_filter_pw_global_wrapper_stencil_25 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_filter_pw_global_wrapper_stencil_26 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_filter_pw_global_wrapper_stencil_27 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_filter_pw_global_wrapper_stencil_28 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<48, 63>();

  int16_t _pw_conv_reduction_stencil_7 = (int16_t) pw_conv_reduction_stencil.extract<0, 15>();

  int16_t _1281 = _hw_filter_pw_global_wrapper_stencil_25 * _dw_conv_stencil_29;
  int16_t _1282 = _hw_filter_pw_global_wrapper_stencil_26 * _dw_conv_stencil_30;
  int16_t _1283 = _hw_filter_pw_global_wrapper_stencil_27 * _dw_conv_stencil_31;
  int16_t _1284 = _hw_filter_pw_global_wrapper_stencil_28 * _dw_conv_stencil_32;
  int16_t _1285 = _1283 + _1284;
  int16_t _1286 = _1282 + _1285;
  int16_t _1287 = _pw_conv_reduction_stencil_7 + _1286;
  int16_t _1288 = _1281 + _1287;
  return _1288;
}

//store is: pw_conv_reduction.stencil(7, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) = ((hw_filter_pw_global_wrapper.stencil(7, 0)*dw_conv.stencil(0, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + (pw_conv_reduction.stencil(7, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) + ((hw_filter_pw_global_wrapper.stencil(7, 1)*dw_conv.stencil(1, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + ((hw_filter_pw_global_wrapper.stencil(7, 3)*dw_conv.stencil(3, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y)) + (hw_filter_pw_global_wrapper.stencil(7, 2)*dw_conv.stencil(2, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y))))))
hw_uint<16> hcompute_pw_conv_reduction_stencil_15(hw_uint<64>& dw_conv_stencil, hw_uint<64>& hw_filter_pw_global_wrapper_stencil, hw_uint<16>& pw_conv_reduction_stencil) {
  int16_t _dw_conv_stencil_33 = (int16_t) dw_conv_stencil.extract<0, 15>();
  int16_t _dw_conv_stencil_34 = (int16_t) dw_conv_stencil.extract<16, 31>();
  int16_t _dw_conv_stencil_35 = (int16_t) dw_conv_stencil.extract<32, 47>();
  int16_t _dw_conv_stencil_36 = (int16_t) dw_conv_stencil.extract<48, 63>();

  int16_t _hw_filter_pw_global_wrapper_stencil_29 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_filter_pw_global_wrapper_stencil_30 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_filter_pw_global_wrapper_stencil_31 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_filter_pw_global_wrapper_stencil_32 = (int16_t) hw_filter_pw_global_wrapper_stencil.extract<48, 63>();

  int16_t _pw_conv_reduction_stencil_8 = (int16_t) pw_conv_reduction_stencil.extract<0, 15>();

  int16_t _1314 = _hw_filter_pw_global_wrapper_stencil_29 * _dw_conv_stencil_33;
  int16_t _1315 = _hw_filter_pw_global_wrapper_stencil_30 * _dw_conv_stencil_34;
  int16_t _1316 = _hw_filter_pw_global_wrapper_stencil_31 * _dw_conv_stencil_35;
  int16_t _1317 = _hw_filter_pw_global_wrapper_stencil_32 * _dw_conv_stencil_36;
  int16_t _1318 = _1316 + _1317;
  int16_t _1319 = _1315 + _1318;
  int16_t _1320 = _pw_conv_reduction_stencil_8 + _1319;
  int16_t _1321 = _1314 + _1320;
  return _1321;
}

//store is: hw_output.stencil(0, hw_output_s0_x_xi, hw_output_s0_y_yi) = pw_conv_reduction.stencil(0, hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& pw_conv_reduction_stencil) {
  int16_t _pw_conv_reduction_stencil_9 = (int16_t) pw_conv_reduction_stencil.extract<0, 15>();

  return _pw_conv_reduction_stencil_9;
}

//store is: hw_output.stencil(1, hw_output_s0_x_xi, hw_output_s0_y_yi) = pw_conv_reduction.stencil(1, hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil_1(hw_uint<16>& pw_conv_reduction_stencil) {
  int16_t _pw_conv_reduction_stencil_10 = (int16_t) pw_conv_reduction_stencil.extract<0, 15>();

  return _pw_conv_reduction_stencil_10;
}

//store is: hw_output.stencil(2, hw_output_s0_x_xi, hw_output_s0_y_yi) = pw_conv_reduction.stencil(2, hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil_2(hw_uint<16>& pw_conv_reduction_stencil) {
  int16_t _pw_conv_reduction_stencil_11 = (int16_t) pw_conv_reduction_stencil.extract<0, 15>();

  return _pw_conv_reduction_stencil_11;
}

//store is: hw_output.stencil(3, hw_output_s0_x_xi, hw_output_s0_y_yi) = pw_conv_reduction.stencil(3, hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil_3(hw_uint<16>& pw_conv_reduction_stencil) {
  int16_t _pw_conv_reduction_stencil_12 = (int16_t) pw_conv_reduction_stencil.extract<0, 15>();

  return _pw_conv_reduction_stencil_12;
}

//store is: hw_output.stencil(4, hw_output_s0_x_xi, hw_output_s0_y_yi) = pw_conv_reduction.stencil(4, hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil_4(hw_uint<16>& pw_conv_reduction_stencil) {
  int16_t _pw_conv_reduction_stencil_13 = (int16_t) pw_conv_reduction_stencil.extract<0, 15>();

  return _pw_conv_reduction_stencil_13;
}

//store is: hw_output.stencil(5, hw_output_s0_x_xi, hw_output_s0_y_yi) = pw_conv_reduction.stencil(5, hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil_5(hw_uint<16>& pw_conv_reduction_stencil) {
  int16_t _pw_conv_reduction_stencil_14 = (int16_t) pw_conv_reduction_stencil.extract<0, 15>();

  return _pw_conv_reduction_stencil_14;
}

//store is: hw_output.stencil(6, hw_output_s0_x_xi, hw_output_s0_y_yi) = pw_conv_reduction.stencil(6, hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil_6(hw_uint<16>& pw_conv_reduction_stencil) {
  int16_t _pw_conv_reduction_stencil_15 = (int16_t) pw_conv_reduction_stencil.extract<0, 15>();

  return _pw_conv_reduction_stencil_15;
}

//store is: hw_output.stencil(7, hw_output_s0_x_xi, hw_output_s0_y_yi) = pw_conv_reduction.stencil(7, hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil_7(hw_uint<16>& pw_conv_reduction_stencil) {
  int16_t _pw_conv_reduction_stencil_16 = (int16_t) pw_conv_reduction_stencil.extract<0, 15>();

  return _pw_conv_reduction_stencil_16;
}

