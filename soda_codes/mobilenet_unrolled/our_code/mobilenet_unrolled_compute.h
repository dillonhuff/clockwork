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

  int16_t _1068 = _hw_filter_pw_global_wrapper_stencil_1 * _dw_conv_stencil_5;
  int16_t _1069 = _hw_filter_pw_global_wrapper_stencil_2 * _dw_conv_stencil_6;
  int16_t _1070 = _hw_filter_pw_global_wrapper_stencil_3 * _dw_conv_stencil_7;
  int16_t _1071 = _hw_filter_pw_global_wrapper_stencil_4 * _dw_conv_stencil_8;
  int16_t _1072 = _1070 + _1071;
  int16_t _1073 = _1069 + _1072;
  int16_t _1074 = _pw_conv_reduction_stencil_1 + _1073;
  int16_t _1075 = _1068 + _1074;
  return _1075;
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

  int16_t _1101 = _hw_filter_pw_global_wrapper_stencil_5 * _dw_conv_stencil_9;
  int16_t _1102 = _hw_filter_pw_global_wrapper_stencil_6 * _dw_conv_stencil_10;
  int16_t _1103 = _hw_filter_pw_global_wrapper_stencil_7 * _dw_conv_stencil_11;
  int16_t _1104 = _hw_filter_pw_global_wrapper_stencil_8 * _dw_conv_stencil_12;
  int16_t _1105 = _1103 + _1104;
  int16_t _1106 = _1102 + _1105;
  int16_t _1107 = _pw_conv_reduction_stencil_2 + _1106;
  int16_t _1108 = _1101 + _1107;
  return _1108;
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

  int16_t _1134 = _hw_filter_pw_global_wrapper_stencil_9 * _dw_conv_stencil_13;
  int16_t _1135 = _hw_filter_pw_global_wrapper_stencil_10 * _dw_conv_stencil_14;
  int16_t _1136 = _hw_filter_pw_global_wrapper_stencil_11 * _dw_conv_stencil_15;
  int16_t _1137 = _hw_filter_pw_global_wrapper_stencil_12 * _dw_conv_stencil_16;
  int16_t _1138 = _1136 + _1137;
  int16_t _1139 = _1135 + _1138;
  int16_t _1140 = _pw_conv_reduction_stencil_3 + _1139;
  int16_t _1141 = _1134 + _1140;
  return _1141;
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

