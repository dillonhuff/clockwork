#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_bright_global_wrapper.stencil((hw_input_bright_global_wrapper_s0_x + 11), (hw_input_bright_global_wrapper_s0_y + 11), hw_input_bright_global_wrapper_s0_c) = hw_input_bright.stencil(hw_input_bright_global_wrapper_s0_x, hw_input_bright_global_wrapper_s0_y, hw_input_bright_global_wrapper_s0_c)
hw_uint<16> hcompute_hw_input_bright_global_wrapper_stencil(hw_uint<16>& hw_input_bright_stencil) {
  uint16_t _hw_input_bright_stencil_1 = (uint16_t) hw_input_bright_stencil.extract<0, 15>();

  return _hw_input_bright_stencil_1;
}

//store is: binput_gpyr_gpyr_0.stencil((binput_gpyr_gpyr_0_s0_x + 11), (binput_gpyr_gpyr_0_s0_y + 11), binput_gpyr_gpyr_0_s0__0) = hw_input_bright_global_wrapper.stencil((binput_gpyr_gpyr_0_s0_x + 11), (binput_gpyr_gpyr_0_s0_y + 11), binput_gpyr_gpyr_0_s0__0)
hw_uint<16> hcompute_binput_gpyr_gpyr_0_stencil(hw_uint<16>& hw_input_bright_global_wrapper_stencil) {
  uint16_t _hw_input_bright_global_wrapper_stencil_1 = (uint16_t) hw_input_bright_global_wrapper_stencil.extract<0, 15>();

  return _hw_input_bright_global_wrapper_stencil_1;
}

//store is: binput_gpyr_gpyr_1.stencil((binput_gpyr_gpyr_1_s0_x + 5), (binput_gpyr_gpyr_1_s0_y + 5), binput_gpyr_gpyr_1_s0__0) = ((((((((float32((binput_gpyr_gpyr_0.stencil(((binput_gpyr_gpyr_1_s0_x*2) + 11), ((binput_gpyr_gpyr_1_s0_y*2) + 11), binput_gpyr_gpyr_1_s0__0) + binput_gpyr_gpyr_0.stencil(((binput_gpyr_gpyr_1_s0_x*2) + 12), ((binput_gpyr_gpyr_1_s0_y*2) + 11), binput_gpyr_gpyr_1_s0__0)))*3.000000f) + float32(binput_gpyr_gpyr_0.stencil(((binput_gpyr_gpyr_1_s0_x*2) + 10), ((binput_gpyr_gpyr_1_s0_y*2) + 11), binput_gpyr_gpyr_1_s0__0))) + float32(binput_gpyr_gpyr_0.stencil(((binput_gpyr_gpyr_1_s0_x*2) + 13), ((binput_gpyr_gpyr_1_s0_y*2) + 11), binput_gpyr_gpyr_1_s0__0))) + (((float32((binput_gpyr_gpyr_0.stencil(((binput_gpyr_gpyr_1_s0_x*2) + 11), ((binput_gpyr_gpyr_1_s0_y*2) + 12), binput_gpyr_gpyr_1_s0__0) + binput_gpyr_gpyr_0.stencil(((binput_gpyr_gpyr_1_s0_x*2) + 12), ((binput_gpyr_gpyr_1_s0_y*2) + 12), binput_gpyr_gpyr_1_s0__0)))*3.000000f) + float32(binput_gpyr_gpyr_0.stencil(((binput_gpyr_gpyr_1_s0_x*2) + 10), ((binput_gpyr_gpyr_1_s0_y*2) + 12), binput_gpyr_gpyr_1_s0__0))) + float32(binput_gpyr_gpyr_0.stencil(((binput_gpyr_gpyr_1_s0_x*2) + 13), ((binput_gpyr_gpyr_1_s0_y*2) + 12), binput_gpyr_gpyr_1_s0__0))))*3.000000f) + (((float32((binput_gpyr_gpyr_0.stencil(((binput_gpyr_gpyr_1_s0_x*2) + 11), ((binput_gpyr_gpyr_1_s0_y*2) + 10), binput_gpyr_gpyr_1_s0__0) + binput_gpyr_gpyr_0.stencil(((binput_gpyr_gpyr_1_s0_x*2) + 12), ((binput_gpyr_gpyr_1_s0_y*2) + 10), binput_gpyr_gpyr_1_s0__0)))*3.000000f) + float32(binput_gpyr_gpyr_0.stencil(((binput_gpyr_gpyr_1_s0_x*2) + 10), ((binput_gpyr_gpyr_1_s0_y*2) + 10), binput_gpyr_gpyr_1_s0__0))) + float32(binput_gpyr_gpyr_0.stencil(((binput_gpyr_gpyr_1_s0_x*2) + 13), ((binput_gpyr_gpyr_1_s0_y*2) + 10), binput_gpyr_gpyr_1_s0__0)))) + (((float32((binput_gpyr_gpyr_0.stencil(((binput_gpyr_gpyr_1_s0_x*2) + 11), ((binput_gpyr_gpyr_1_s0_y*2) + 13), binput_gpyr_gpyr_1_s0__0) + binput_gpyr_gpyr_0.stencil(((binput_gpyr_gpyr_1_s0_x*2) + 12), ((binput_gpyr_gpyr_1_s0_y*2) + 13), binput_gpyr_gpyr_1_s0__0)))*3.000000f) + float32(binput_gpyr_gpyr_0.stencil(((binput_gpyr_gpyr_1_s0_x*2) + 10), ((binput_gpyr_gpyr_1_s0_y*2) + 13), binput_gpyr_gpyr_1_s0__0))) + float32(binput_gpyr_gpyr_0.stencil(((binput_gpyr_gpyr_1_s0_x*2) + 13), ((binput_gpyr_gpyr_1_s0_y*2) + 13), binput_gpyr_gpyr_1_s0__0))))*0.015625f)
hw_uint<32> hcompute_binput_gpyr_gpyr_1_stencil(hw_uint<256>& binput_gpyr_gpyr_0_stencil) {
  uint16_t _binput_gpyr_gpyr_0_stencil_1 = (uint16_t) binput_gpyr_gpyr_0_stencil.extract<0, 15>();
  uint16_t _binput_gpyr_gpyr_0_stencil_10 = (uint16_t) binput_gpyr_gpyr_0_stencil.extract<16, 31>();
  uint16_t _binput_gpyr_gpyr_0_stencil_11 = (uint16_t) binput_gpyr_gpyr_0_stencil.extract<32, 47>();
  uint16_t _binput_gpyr_gpyr_0_stencil_12 = (uint16_t) binput_gpyr_gpyr_0_stencil.extract<48, 63>();
  uint16_t _binput_gpyr_gpyr_0_stencil_13 = (uint16_t) binput_gpyr_gpyr_0_stencil.extract<64, 79>();
  uint16_t _binput_gpyr_gpyr_0_stencil_14 = (uint16_t) binput_gpyr_gpyr_0_stencil.extract<80, 95>();
  uint16_t _binput_gpyr_gpyr_0_stencil_15 = (uint16_t) binput_gpyr_gpyr_0_stencil.extract<96, 111>();
  uint16_t _binput_gpyr_gpyr_0_stencil_16 = (uint16_t) binput_gpyr_gpyr_0_stencil.extract<112, 127>();
  uint16_t _binput_gpyr_gpyr_0_stencil_2 = (uint16_t) binput_gpyr_gpyr_0_stencil.extract<128, 143>();
  uint16_t _binput_gpyr_gpyr_0_stencil_3 = (uint16_t) binput_gpyr_gpyr_0_stencil.extract<144, 159>();
  uint16_t _binput_gpyr_gpyr_0_stencil_4 = (uint16_t) binput_gpyr_gpyr_0_stencil.extract<160, 175>();
  uint16_t _binput_gpyr_gpyr_0_stencil_5 = (uint16_t) binput_gpyr_gpyr_0_stencil.extract<176, 191>();
  uint16_t _binput_gpyr_gpyr_0_stencil_6 = (uint16_t) binput_gpyr_gpyr_0_stencil.extract<192, 207>();
  uint16_t _binput_gpyr_gpyr_0_stencil_7 = (uint16_t) binput_gpyr_gpyr_0_stencil.extract<208, 223>();
  uint16_t _binput_gpyr_gpyr_0_stencil_8 = (uint16_t) binput_gpyr_gpyr_0_stencil.extract<224, 239>();
  uint16_t _binput_gpyr_gpyr_0_stencil_9 = (uint16_t) binput_gpyr_gpyr_0_stencil.extract<240, 255>();

  uint16_t _603 = _binput_gpyr_gpyr_0_stencil_1 + _binput_gpyr_gpyr_0_stencil_2;
  float _604 = (float)(_603);
  float _605 = float_from_bits(1077936128 /* 3 */);
  float _606 = _604 * _605;
  float _607 = (float)(_binput_gpyr_gpyr_0_stencil_3);
  float _608 = _606 + _607;
  float _609 = (float)(_binput_gpyr_gpyr_0_stencil_4);
  float _610 = _608 + _609;
  uint16_t _611 = _binput_gpyr_gpyr_0_stencil_5 + _binput_gpyr_gpyr_0_stencil_6;
  float _612 = (float)(_611);
  float _613 = _612 * _605;
  float _614 = (float)(_binput_gpyr_gpyr_0_stencil_7);
  float _615 = _613 + _614;
  float _616 = (float)(_binput_gpyr_gpyr_0_stencil_8);
  float _617 = _615 + _616;
  float _618 = _610 + _617;
  float _619 = _618 * _605;
  uint16_t _620 = _binput_gpyr_gpyr_0_stencil_9 + _binput_gpyr_gpyr_0_stencil_10;
  float _621 = (float)(_620);
  float _622 = _621 * _605;
  float _623 = (float)(_binput_gpyr_gpyr_0_stencil_11);
  float _624 = _622 + _623;
  float _625 = (float)(_binput_gpyr_gpyr_0_stencil_12);
  float _626 = _624 + _625;
  float _627 = _619 + _626;
  uint16_t _628 = _binput_gpyr_gpyr_0_stencil_13 + _binput_gpyr_gpyr_0_stencil_14;
  float _629 = (float)(_628);
  float _630 = _629 * _605;
  float _631 = (float)(_binput_gpyr_gpyr_0_stencil_15);
  float _632 = _630 + _631;
  float _633 = (float)(_binput_gpyr_gpyr_0_stencil_16);
  float _634 = _632 + _633;
  float _635 = _627 + _634;
  float _636 = float_from_bits(1015021568 /* 0.015625 */);
  float _637 = _635 * _636;
  return _637;
}

//store is: binput_lpyr_0.stencil(binput_lpyr_0_s0_x, binput_lpyr_0_s0_y, binput_lpyr_0_s0__0) = (float32(binput_gpyr_gpyr_0.stencil((binput_lpyr_0_s0_x + 11), (binput_lpyr_0_s0_y + 11), binput_lpyr_0_s0__0)) - ((((binput_gpyr_gpyr_1.stencil((((binput_lpyr_0_s0_x/2) + ((binput_lpyr_0_s0_x % 2)*2)) + 4), ((binput_lpyr_0_s0_y/2) + 5), binput_lpyr_0_s0__0) + (binput_gpyr_gpyr_1.stencil(((binput_lpyr_0_s0_x/2) + 5), ((binput_lpyr_0_s0_y/2) + 5), binput_lpyr_0_s0__0)*3.000000f))*3.000000f) + (binput_gpyr_gpyr_1.stencil((((binput_lpyr_0_s0_x/2) + ((binput_lpyr_0_s0_x % 2)*2)) + 4), (((binput_lpyr_0_s0_y/2) + ((binput_lpyr_0_s0_y % 2)*2)) + 4), binput_lpyr_0_s0__0) + (binput_gpyr_gpyr_1.stencil(((binput_lpyr_0_s0_x/2) + 5), (((binput_lpyr_0_s0_y/2) + ((binput_lpyr_0_s0_y % 2)*2)) + 4), binput_lpyr_0_s0__0)*3.000000f)))*0.062500f))
hw_uint<32> hcompute_binput_lpyr_0_stencil(hw_uint<16>& binput_gpyr_gpyr_0_stencil, hw_uint<128>& binput_gpyr_gpyr_1_stencil) {
  uint16_t _binput_gpyr_gpyr_0_stencil_17 = (uint16_t) binput_gpyr_gpyr_0_stencil.extract<0, 15>();

  float _binput_gpyr_gpyr_1_stencil_1 = (float) binput_gpyr_gpyr_1_stencil.extract<0, 31>();
  float _binput_gpyr_gpyr_1_stencil_2 = (float) binput_gpyr_gpyr_1_stencil.extract<32, 63>();
  float _binput_gpyr_gpyr_1_stencil_3 = (float) binput_gpyr_gpyr_1_stencil.extract<64, 95>();
  float _binput_gpyr_gpyr_1_stencil_4 = (float) binput_gpyr_gpyr_1_stencil.extract<96, 127>();

  float _736 = (float)(_binput_gpyr_gpyr_0_stencil_17);
  float _737 = float_from_bits(1077936128 /* 3 */);
  float _738 = _binput_gpyr_gpyr_1_stencil_2 * _737;
  float _739 = _binput_gpyr_gpyr_1_stencil_1 + _738;
  float _740 = _739 * _737;
  float _741 = _binput_gpyr_gpyr_1_stencil_4 * _737;
  float _742 = _binput_gpyr_gpyr_1_stencil_3 + _741;
  float _743 = _740 + _742;
  float _744 = float_from_bits(1031798784 /* 0.0625 */);
  float _745 = _743 * _744;
  float _746 = _736 - _745;
  return _746;
}

//store is: hw_input_dark_global_wrapper.stencil((hw_input_dark_global_wrapper_s0_x + 11), (hw_input_dark_global_wrapper_s0_y + 11), hw_input_dark_global_wrapper_s0_c) = hw_input_dark.stencil(hw_input_dark_global_wrapper_s0_x, hw_input_dark_global_wrapper_s0_y, hw_input_dark_global_wrapper_s0_c)
hw_uint<16> hcompute_hw_input_dark_global_wrapper_stencil(hw_uint<16>& hw_input_dark_stencil) {
  uint16_t _hw_input_dark_stencil_1 = (uint16_t) hw_input_dark_stencil.extract<0, 15>();

  return _hw_input_dark_stencil_1;
}

//store is: weight_sum.stencil((weight_sum_s0_x + 11), (weight_sum_s0_y + 11), weight_sum_s0_c) = ((hw_input_dark_global_wrapper.stencil((weight_sum_s0_x + 11), (weight_sum_s0_y + 11), weight_sum_s0_c) + hw_input_bright_global_wrapper.stencil((weight_sum_s0_x + 11), (weight_sum_s0_y + 11), weight_sum_s0_c))*(uint16)2)
hw_uint<16> hcompute_weight_sum_stencil(hw_uint<16>& hw_input_bright_global_wrapper_stencil, hw_uint<16>& hw_input_dark_global_wrapper_stencil) {
  uint16_t _hw_input_bright_global_wrapper_stencil_2 = (uint16_t) hw_input_bright_global_wrapper_stencil.extract<0, 15>();

  uint16_t _hw_input_dark_global_wrapper_stencil_1 = (uint16_t) hw_input_dark_global_wrapper_stencil.extract<0, 15>();

  uint16_t _791 = _hw_input_dark_global_wrapper_stencil_1 + _hw_input_bright_global_wrapper_stencil_2;
  uint16_t _792 = (uint16_t)(2);
  uint16_t _793 = _791 * _792;
  return _793;
}

//store is: bweight_gpyr_0.stencil((bweight_gpyr_0_s0_x_1 + 11), (bweight_gpyr_0_s0_y + 11), bweight_gpyr_0_s0__0) = ((hw_input_bright_global_wrapper.stencil((bweight_gpyr_0_s0_x_1 + 11), (bweight_gpyr_0_s0_y + 11), bweight_gpyr_0_s0__0)*(uint16)2)/weight_sum.stencil((bweight_gpyr_0_s0_x_1 + 11), (bweight_gpyr_0_s0_y + 11), bweight_gpyr_0_s0__0))
hw_uint<16> hcompute_bweight_gpyr_0_stencil(hw_uint<16>& hw_input_bright_global_wrapper_stencil, hw_uint<16>& weight_sum_stencil) {
  uint16_t _hw_input_bright_global_wrapper_stencil_3 = (uint16_t) hw_input_bright_global_wrapper_stencil.extract<0, 15>();

  uint16_t _weight_sum_stencil_1 = (uint16_t) weight_sum_stencil.extract<0, 15>();

  uint16_t _804 = (uint16_t)(2);
  uint16_t _805 = _hw_input_bright_global_wrapper_stencil_3 * _804;
  uint16_t _806 = _805 / _weight_sum_stencil_1;
  return _806;
}

//store is: dinput_gpyr_gpyr_0.stencil((dinput_gpyr_gpyr_0_s0_x + 11), (dinput_gpyr_gpyr_0_s0_y + 11), dinput_gpyr_gpyr_0_s0__0) = hw_input_dark_global_wrapper.stencil((dinput_gpyr_gpyr_0_s0_x + 11), (dinput_gpyr_gpyr_0_s0_y + 11), dinput_gpyr_gpyr_0_s0__0)
hw_uint<16> hcompute_dinput_gpyr_gpyr_0_stencil(hw_uint<16>& hw_input_dark_global_wrapper_stencil) {
  uint16_t _hw_input_dark_global_wrapper_stencil_2 = (uint16_t) hw_input_dark_global_wrapper_stencil.extract<0, 15>();

  return _hw_input_dark_global_wrapper_stencil_2;
}

//store is: dinput_gpyr_gpyr_1.stencil((dinput_gpyr_gpyr_1_s0_x + 5), (dinput_gpyr_gpyr_1_s0_y + 5), dinput_gpyr_gpyr_1_s0__0) = ((((((((float32((dinput_gpyr_gpyr_0.stencil(((dinput_gpyr_gpyr_1_s0_x*2) + 11), ((dinput_gpyr_gpyr_1_s0_y*2) + 11), dinput_gpyr_gpyr_1_s0__0) + dinput_gpyr_gpyr_0.stencil(((dinput_gpyr_gpyr_1_s0_x*2) + 12), ((dinput_gpyr_gpyr_1_s0_y*2) + 11), dinput_gpyr_gpyr_1_s0__0)))*3.000000f) + float32(dinput_gpyr_gpyr_0.stencil(((dinput_gpyr_gpyr_1_s0_x*2) + 10), ((dinput_gpyr_gpyr_1_s0_y*2) + 11), dinput_gpyr_gpyr_1_s0__0))) + float32(dinput_gpyr_gpyr_0.stencil(((dinput_gpyr_gpyr_1_s0_x*2) + 13), ((dinput_gpyr_gpyr_1_s0_y*2) + 11), dinput_gpyr_gpyr_1_s0__0))) + (((float32((dinput_gpyr_gpyr_0.stencil(((dinput_gpyr_gpyr_1_s0_x*2) + 11), ((dinput_gpyr_gpyr_1_s0_y*2) + 12), dinput_gpyr_gpyr_1_s0__0) + dinput_gpyr_gpyr_0.stencil(((dinput_gpyr_gpyr_1_s0_x*2) + 12), ((dinput_gpyr_gpyr_1_s0_y*2) + 12), dinput_gpyr_gpyr_1_s0__0)))*3.000000f) + float32(dinput_gpyr_gpyr_0.stencil(((dinput_gpyr_gpyr_1_s0_x*2) + 10), ((dinput_gpyr_gpyr_1_s0_y*2) + 12), dinput_gpyr_gpyr_1_s0__0))) + float32(dinput_gpyr_gpyr_0.stencil(((dinput_gpyr_gpyr_1_s0_x*2) + 13), ((dinput_gpyr_gpyr_1_s0_y*2) + 12), dinput_gpyr_gpyr_1_s0__0))))*3.000000f) + (((float32((dinput_gpyr_gpyr_0.stencil(((dinput_gpyr_gpyr_1_s0_x*2) + 11), ((dinput_gpyr_gpyr_1_s0_y*2) + 10), dinput_gpyr_gpyr_1_s0__0) + dinput_gpyr_gpyr_0.stencil(((dinput_gpyr_gpyr_1_s0_x*2) + 12), ((dinput_gpyr_gpyr_1_s0_y*2) + 10), dinput_gpyr_gpyr_1_s0__0)))*3.000000f) + float32(dinput_gpyr_gpyr_0.stencil(((dinput_gpyr_gpyr_1_s0_x*2) + 10), ((dinput_gpyr_gpyr_1_s0_y*2) + 10), dinput_gpyr_gpyr_1_s0__0))) + float32(dinput_gpyr_gpyr_0.stencil(((dinput_gpyr_gpyr_1_s0_x*2) + 13), ((dinput_gpyr_gpyr_1_s0_y*2) + 10), dinput_gpyr_gpyr_1_s0__0)))) + (((float32((dinput_gpyr_gpyr_0.stencil(((dinput_gpyr_gpyr_1_s0_x*2) + 11), ((dinput_gpyr_gpyr_1_s0_y*2) + 13), dinput_gpyr_gpyr_1_s0__0) + dinput_gpyr_gpyr_0.stencil(((dinput_gpyr_gpyr_1_s0_x*2) + 12), ((dinput_gpyr_gpyr_1_s0_y*2) + 13), dinput_gpyr_gpyr_1_s0__0)))*3.000000f) + float32(dinput_gpyr_gpyr_0.stencil(((dinput_gpyr_gpyr_1_s0_x*2) + 10), ((dinput_gpyr_gpyr_1_s0_y*2) + 13), dinput_gpyr_gpyr_1_s0__0))) + float32(dinput_gpyr_gpyr_0.stencil(((dinput_gpyr_gpyr_1_s0_x*2) + 13), ((dinput_gpyr_gpyr_1_s0_y*2) + 13), dinput_gpyr_gpyr_1_s0__0))))*0.015625f)
hw_uint<32> hcompute_dinput_gpyr_gpyr_1_stencil(hw_uint<256>& dinput_gpyr_gpyr_0_stencil) {
  uint16_t _dinput_gpyr_gpyr_0_stencil_1 = (uint16_t) dinput_gpyr_gpyr_0_stencil.extract<0, 15>();
  uint16_t _dinput_gpyr_gpyr_0_stencil_10 = (uint16_t) dinput_gpyr_gpyr_0_stencil.extract<16, 31>();
  uint16_t _dinput_gpyr_gpyr_0_stencil_11 = (uint16_t) dinput_gpyr_gpyr_0_stencil.extract<32, 47>();
  uint16_t _dinput_gpyr_gpyr_0_stencil_12 = (uint16_t) dinput_gpyr_gpyr_0_stencil.extract<48, 63>();
  uint16_t _dinput_gpyr_gpyr_0_stencil_13 = (uint16_t) dinput_gpyr_gpyr_0_stencil.extract<64, 79>();
  uint16_t _dinput_gpyr_gpyr_0_stencil_14 = (uint16_t) dinput_gpyr_gpyr_0_stencil.extract<80, 95>();
  uint16_t _dinput_gpyr_gpyr_0_stencil_15 = (uint16_t) dinput_gpyr_gpyr_0_stencil.extract<96, 111>();
  uint16_t _dinput_gpyr_gpyr_0_stencil_16 = (uint16_t) dinput_gpyr_gpyr_0_stencil.extract<112, 127>();
  uint16_t _dinput_gpyr_gpyr_0_stencil_2 = (uint16_t) dinput_gpyr_gpyr_0_stencil.extract<128, 143>();
  uint16_t _dinput_gpyr_gpyr_0_stencil_3 = (uint16_t) dinput_gpyr_gpyr_0_stencil.extract<144, 159>();
  uint16_t _dinput_gpyr_gpyr_0_stencil_4 = (uint16_t) dinput_gpyr_gpyr_0_stencil.extract<160, 175>();
  uint16_t _dinput_gpyr_gpyr_0_stencil_5 = (uint16_t) dinput_gpyr_gpyr_0_stencil.extract<176, 191>();
  uint16_t _dinput_gpyr_gpyr_0_stencil_6 = (uint16_t) dinput_gpyr_gpyr_0_stencil.extract<192, 207>();
  uint16_t _dinput_gpyr_gpyr_0_stencil_7 = (uint16_t) dinput_gpyr_gpyr_0_stencil.extract<208, 223>();
  uint16_t _dinput_gpyr_gpyr_0_stencil_8 = (uint16_t) dinput_gpyr_gpyr_0_stencil.extract<224, 239>();
  uint16_t _dinput_gpyr_gpyr_0_stencil_9 = (uint16_t) dinput_gpyr_gpyr_0_stencil.extract<240, 255>();

  uint16_t _820 = _dinput_gpyr_gpyr_0_stencil_1 + _dinput_gpyr_gpyr_0_stencil_2;
  float _821 = (float)(_820);
  float _822 = float_from_bits(1077936128 /* 3 */);
  float _823 = _821 * _822;
  float _824 = (float)(_dinput_gpyr_gpyr_0_stencil_3);
  float _825 = _823 + _824;
  float _826 = (float)(_dinput_gpyr_gpyr_0_stencil_4);
  float _827 = _825 + _826;
  uint16_t _828 = _dinput_gpyr_gpyr_0_stencil_5 + _dinput_gpyr_gpyr_0_stencil_6;
  float _829 = (float)(_828);
  float _830 = _829 * _822;
  float _831 = (float)(_dinput_gpyr_gpyr_0_stencil_7);
  float _832 = _830 + _831;
  float _833 = (float)(_dinput_gpyr_gpyr_0_stencil_8);
  float _834 = _832 + _833;
  float _835 = _827 + _834;
  float _836 = _835 * _822;
  uint16_t _837 = _dinput_gpyr_gpyr_0_stencil_9 + _dinput_gpyr_gpyr_0_stencil_10;
  float _838 = (float)(_837);
  float _839 = _838 * _822;
  float _840 = (float)(_dinput_gpyr_gpyr_0_stencil_11);
  float _841 = _839 + _840;
  float _842 = (float)(_dinput_gpyr_gpyr_0_stencil_12);
  float _843 = _841 + _842;
  float _844 = _836 + _843;
  uint16_t _845 = _dinput_gpyr_gpyr_0_stencil_13 + _dinput_gpyr_gpyr_0_stencil_14;
  float _846 = (float)(_845);
  float _847 = _846 * _822;
  float _848 = (float)(_dinput_gpyr_gpyr_0_stencil_15);
  float _849 = _847 + _848;
  float _850 = (float)(_dinput_gpyr_gpyr_0_stencil_16);
  float _851 = _849 + _850;
  float _852 = _844 + _851;
  float _853 = float_from_bits(1015021568 /* 0.015625 */);
  float _854 = _852 * _853;
  return _854;
}

//store is: dinput_lpyr_0.stencil(dinput_lpyr_0_s0_x, dinput_lpyr_0_s0_y, dinput_lpyr_0_s0__0) = (float32(dinput_gpyr_gpyr_0.stencil((dinput_lpyr_0_s0_x + 11), (dinput_lpyr_0_s0_y + 11), dinput_lpyr_0_s0__0)) - ((((dinput_gpyr_gpyr_1.stencil((((dinput_lpyr_0_s0_x/2) + ((dinput_lpyr_0_s0_x % 2)*2)) + 4), ((dinput_lpyr_0_s0_y/2) + 5), dinput_lpyr_0_s0__0) + (dinput_gpyr_gpyr_1.stencil(((dinput_lpyr_0_s0_x/2) + 5), ((dinput_lpyr_0_s0_y/2) + 5), dinput_lpyr_0_s0__0)*3.000000f))*3.000000f) + (dinput_gpyr_gpyr_1.stencil((((dinput_lpyr_0_s0_x/2) + ((dinput_lpyr_0_s0_x % 2)*2)) + 4), (((dinput_lpyr_0_s0_y/2) + ((dinput_lpyr_0_s0_y % 2)*2)) + 4), dinput_lpyr_0_s0__0) + (dinput_gpyr_gpyr_1.stencil(((dinput_lpyr_0_s0_x/2) + 5), (((dinput_lpyr_0_s0_y/2) + ((dinput_lpyr_0_s0_y % 2)*2)) + 4), dinput_lpyr_0_s0__0)*3.000000f)))*0.062500f))
hw_uint<32> hcompute_dinput_lpyr_0_stencil(hw_uint<16>& dinput_gpyr_gpyr_0_stencil, hw_uint<128>& dinput_gpyr_gpyr_1_stencil) {
  uint16_t _dinput_gpyr_gpyr_0_stencil_17 = (uint16_t) dinput_gpyr_gpyr_0_stencil.extract<0, 15>();

  float _dinput_gpyr_gpyr_1_stencil_1 = (float) dinput_gpyr_gpyr_1_stencil.extract<0, 31>();
  float _dinput_gpyr_gpyr_1_stencil_2 = (float) dinput_gpyr_gpyr_1_stencil.extract<32, 63>();
  float _dinput_gpyr_gpyr_1_stencil_3 = (float) dinput_gpyr_gpyr_1_stencil.extract<64, 95>();
  float _dinput_gpyr_gpyr_1_stencil_4 = (float) dinput_gpyr_gpyr_1_stencil.extract<96, 127>();

  float _953 = (float)(_dinput_gpyr_gpyr_0_stencil_17);
  float _954 = float_from_bits(1077936128 /* 3 */);
  float _955 = _dinput_gpyr_gpyr_1_stencil_2 * _954;
  float _956 = _dinput_gpyr_gpyr_1_stencil_1 + _955;
  float _957 = _956 * _954;
  float _958 = _dinput_gpyr_gpyr_1_stencil_4 * _954;
  float _959 = _dinput_gpyr_gpyr_1_stencil_3 + _958;
  float _960 = _957 + _959;
  float _961 = float_from_bits(1031798784 /* 0.0625 */);
  float _962 = _960 * _961;
  float _963 = _953 - _962;
  return _963;
}

//store is: dweight_gpyr_0.stencil((dweight_gpyr_0_s0_x + 11), (dweight_gpyr_0_s0_y + 11), dweight_gpyr_0_s0__0) = ((hw_input_dark_global_wrapper.stencil((dweight_gpyr_0_s0_x + 11), (dweight_gpyr_0_s0_y + 11), dweight_gpyr_0_s0__0)*(uint16)2)/weight_sum.stencil((dweight_gpyr_0_s0_x + 11), (dweight_gpyr_0_s0_y + 11), dweight_gpyr_0_s0__0))
hw_uint<16> hcompute_dweight_gpyr_0_stencil(hw_uint<16>& hw_input_dark_global_wrapper_stencil, hw_uint<16>& weight_sum_stencil) {
  uint16_t _hw_input_dark_global_wrapper_stencil_3 = (uint16_t) hw_input_dark_global_wrapper_stencil.extract<0, 15>();

  uint16_t _weight_sum_stencil_2 = (uint16_t) weight_sum_stencil.extract<0, 15>();

  uint16_t _1005 = (uint16_t)(2);
  uint16_t _1006 = _hw_input_dark_global_wrapper_stencil_3 * _1005;
  uint16_t _1007 = _1006 / _weight_sum_stencil_2;
  return _1007;
}

//store is: binput_gpyr_gpyr_2.stencil((binput_gpyr_gpyr_2_s0_x + 2), (binput_gpyr_gpyr_2_s0_y + 2), binput_gpyr_gpyr_2_s0__0) = ((((((binput_gpyr_gpyr_1.stencil(((binput_gpyr_gpyr_2_s0_x*2) + 7), ((binput_gpyr_gpyr_2_s0_y*2) + 5), binput_gpyr_gpyr_2_s0__0) + (binput_gpyr_gpyr_1.stencil(((binput_gpyr_gpyr_2_s0_x*2) + 4), ((binput_gpyr_gpyr_2_s0_y*2) + 5), binput_gpyr_gpyr_2_s0__0) + ((binput_gpyr_gpyr_1.stencil(((binput_gpyr_gpyr_2_s0_x*2) + 5), ((binput_gpyr_gpyr_2_s0_y*2) + 5), binput_gpyr_gpyr_2_s0__0) + binput_gpyr_gpyr_1.stencil(((binput_gpyr_gpyr_2_s0_x*2) + 6), ((binput_gpyr_gpyr_2_s0_y*2) + 5), binput_gpyr_gpyr_2_s0__0))*3.000000f))) + (binput_gpyr_gpyr_1.stencil(((binput_gpyr_gpyr_2_s0_x*2) + 7), ((binput_gpyr_gpyr_2_s0_y*2) + 6), binput_gpyr_gpyr_2_s0__0) + (binput_gpyr_gpyr_1.stencil(((binput_gpyr_gpyr_2_s0_x*2) + 4), ((binput_gpyr_gpyr_2_s0_y*2) + 6), binput_gpyr_gpyr_2_s0__0) + ((binput_gpyr_gpyr_1.stencil(((binput_gpyr_gpyr_2_s0_x*2) + 5), ((binput_gpyr_gpyr_2_s0_y*2) + 6), binput_gpyr_gpyr_2_s0__0) + binput_gpyr_gpyr_1.stencil(((binput_gpyr_gpyr_2_s0_x*2) + 6), ((binput_gpyr_gpyr_2_s0_y*2) + 6), binput_gpyr_gpyr_2_s0__0))*3.000000f))))*3.000000f) + (binput_gpyr_gpyr_1.stencil(((binput_gpyr_gpyr_2_s0_x*2) + 7), ((binput_gpyr_gpyr_2_s0_y*2) + 4), binput_gpyr_gpyr_2_s0__0) + (binput_gpyr_gpyr_1.stencil(((binput_gpyr_gpyr_2_s0_x*2) + 4), ((binput_gpyr_gpyr_2_s0_y*2) + 4), binput_gpyr_gpyr_2_s0__0) + ((binput_gpyr_gpyr_1.stencil(((binput_gpyr_gpyr_2_s0_x*2) + 5), ((binput_gpyr_gpyr_2_s0_y*2) + 4), binput_gpyr_gpyr_2_s0__0) + binput_gpyr_gpyr_1.stencil(((binput_gpyr_gpyr_2_s0_x*2) + 6), ((binput_gpyr_gpyr_2_s0_y*2) + 4), binput_gpyr_gpyr_2_s0__0))*3.000000f)))) + (binput_gpyr_gpyr_1.stencil(((binput_gpyr_gpyr_2_s0_x*2) + 7), ((binput_gpyr_gpyr_2_s0_y*2) + 7), binput_gpyr_gpyr_2_s0__0) + (binput_gpyr_gpyr_1.stencil(((binput_gpyr_gpyr_2_s0_x*2) + 4), ((binput_gpyr_gpyr_2_s0_y*2) + 7), binput_gpyr_gpyr_2_s0__0) + ((binput_gpyr_gpyr_1.stencil(((binput_gpyr_gpyr_2_s0_x*2) + 5), ((binput_gpyr_gpyr_2_s0_y*2) + 7), binput_gpyr_gpyr_2_s0__0) + binput_gpyr_gpyr_1.stencil(((binput_gpyr_gpyr_2_s0_x*2) + 6), ((binput_gpyr_gpyr_2_s0_y*2) + 7), binput_gpyr_gpyr_2_s0__0))*3.000000f))))*0.015625f)
hw_uint<32> hcompute_binput_gpyr_gpyr_2_stencil(hw_uint<512>& binput_gpyr_gpyr_1_stencil) {
  float _binput_gpyr_gpyr_1_stencil_10 = (float) binput_gpyr_gpyr_1_stencil.extract<0, 31>();
  float _binput_gpyr_gpyr_1_stencil_11 = (float) binput_gpyr_gpyr_1_stencil.extract<32, 63>();
  float _binput_gpyr_gpyr_1_stencil_12 = (float) binput_gpyr_gpyr_1_stencil.extract<64, 95>();
  float _binput_gpyr_gpyr_1_stencil_13 = (float) binput_gpyr_gpyr_1_stencil.extract<96, 127>();
  float _binput_gpyr_gpyr_1_stencil_14 = (float) binput_gpyr_gpyr_1_stencil.extract<128, 159>();
  float _binput_gpyr_gpyr_1_stencil_15 = (float) binput_gpyr_gpyr_1_stencil.extract<160, 191>();
  float _binput_gpyr_gpyr_1_stencil_16 = (float) binput_gpyr_gpyr_1_stencil.extract<192, 223>();
  float _binput_gpyr_gpyr_1_stencil_17 = (float) binput_gpyr_gpyr_1_stencil.extract<224, 255>();
  float _binput_gpyr_gpyr_1_stencil_18 = (float) binput_gpyr_gpyr_1_stencil.extract<256, 287>();
  float _binput_gpyr_gpyr_1_stencil_19 = (float) binput_gpyr_gpyr_1_stencil.extract<288, 319>();
  float _binput_gpyr_gpyr_1_stencil_20 = (float) binput_gpyr_gpyr_1_stencil.extract<320, 351>();
  float _binput_gpyr_gpyr_1_stencil_5 = (float) binput_gpyr_gpyr_1_stencil.extract<352, 383>();
  float _binput_gpyr_gpyr_1_stencil_6 = (float) binput_gpyr_gpyr_1_stencil.extract<384, 415>();
  float _binput_gpyr_gpyr_1_stencil_7 = (float) binput_gpyr_gpyr_1_stencil.extract<416, 447>();
  float _binput_gpyr_gpyr_1_stencil_8 = (float) binput_gpyr_gpyr_1_stencil.extract<448, 479>();
  float _binput_gpyr_gpyr_1_stencil_9 = (float) binput_gpyr_gpyr_1_stencil.extract<480, 511>();

  float _1018 = _binput_gpyr_gpyr_1_stencil_7 + _binput_gpyr_gpyr_1_stencil_8;
  float _1019 = float_from_bits(1077936128 /* 3 */);
  float _1020 = _1018 * _1019;
  float _1021 = _binput_gpyr_gpyr_1_stencil_6 + _1020;
  float _1022 = _binput_gpyr_gpyr_1_stencil_5 + _1021;
  float _1023 = _binput_gpyr_gpyr_1_stencil_11 + _binput_gpyr_gpyr_1_stencil_12;
  float _1024 = _1023 * _1019;
  float _1025 = _binput_gpyr_gpyr_1_stencil_10 + _1024;
  float _1026 = _binput_gpyr_gpyr_1_stencil_9 + _1025;
  float _1027 = _1022 + _1026;
  float _1028 = _1027 * _1019;
  float _1029 = _binput_gpyr_gpyr_1_stencil_15 + _binput_gpyr_gpyr_1_stencil_16;
  float _1030 = _1029 * _1019;
  float _1031 = _binput_gpyr_gpyr_1_stencil_14 + _1030;
  float _1032 = _binput_gpyr_gpyr_1_stencil_13 + _1031;
  float _1033 = _1028 + _1032;
  float _1034 = _binput_gpyr_gpyr_1_stencil_19 + _binput_gpyr_gpyr_1_stencil_20;
  float _1035 = _1034 * _1019;
  float _1036 = _binput_gpyr_gpyr_1_stencil_18 + _1035;
  float _1037 = _binput_gpyr_gpyr_1_stencil_17 + _1036;
  float _1038 = _1033 + _1037;
  float _1039 = float_from_bits(1015021568 /* 0.015625 */);
  float _1040 = _1038 * _1039;
  return _1040;
}

//store is: binput_lpyr_1.stencil((binput_lpyr_1_s0_x + 1), (binput_lpyr_1_s0_y + 1), binput_lpyr_1_s0__0) = (binput_gpyr_gpyr_1.stencil((binput_lpyr_1_s0_x + 5), (binput_lpyr_1_s0_y + 5), binput_lpyr_1_s0__0) - ((((binput_gpyr_gpyr_2.stencil((((binput_lpyr_1_s0_x/2) + ((binput_lpyr_1_s0_x % 2)*2)) + 1), ((binput_lpyr_1_s0_y/2) + 2), binput_lpyr_1_s0__0) + (binput_gpyr_gpyr_2.stencil(((binput_lpyr_1_s0_x/2) + 2), ((binput_lpyr_1_s0_y/2) + 2), binput_lpyr_1_s0__0)*3.000000f))*3.000000f) + (binput_gpyr_gpyr_2.stencil((((binput_lpyr_1_s0_x/2) + ((binput_lpyr_1_s0_x % 2)*2)) + 1), (((binput_lpyr_1_s0_y/2) + ((binput_lpyr_1_s0_y % 2)*2)) + 1), binput_lpyr_1_s0__0) + (binput_gpyr_gpyr_2.stencil(((binput_lpyr_1_s0_x/2) + 2), (((binput_lpyr_1_s0_y/2) + ((binput_lpyr_1_s0_y % 2)*2)) + 1), binput_lpyr_1_s0__0)*3.000000f)))*0.062500f))
hw_uint<32> hcompute_binput_lpyr_1_stencil(hw_uint<32>& binput_gpyr_gpyr_1_stencil, hw_uint<128>& binput_gpyr_gpyr_2_stencil) {
  float _binput_gpyr_gpyr_1_stencil_21 = (float) binput_gpyr_gpyr_1_stencil.extract<0, 31>();

  float _binput_gpyr_gpyr_2_stencil_1 = (float) binput_gpyr_gpyr_2_stencil.extract<0, 31>();
  float _binput_gpyr_gpyr_2_stencil_2 = (float) binput_gpyr_gpyr_2_stencil.extract<32, 63>();
  float _binput_gpyr_gpyr_2_stencil_3 = (float) binput_gpyr_gpyr_2_stencil.extract<64, 95>();
  float _binput_gpyr_gpyr_2_stencil_4 = (float) binput_gpyr_gpyr_2_stencil.extract<96, 127>();

  float _1115 = float_from_bits(1077936128 /* 3 */);
  float _1116 = _binput_gpyr_gpyr_2_stencil_2 * _1115;
  float _1117 = _binput_gpyr_gpyr_2_stencil_1 + _1116;
  float _1118 = _1117 * _1115;
  float _1119 = _binput_gpyr_gpyr_2_stencil_4 * _1115;
  float _1120 = _binput_gpyr_gpyr_2_stencil_3 + _1119;
  float _1121 = _1118 + _1120;
  float _1122 = float_from_bits(1031798784 /* 0.0625 */);
  float _1123 = _1121 * _1122;
  float _1124 = _binput_gpyr_gpyr_1_stencil_21 - _1123;
  return _1124;
}

//store is: bweight_gpyr_1.stencil((bweight_gpyr_1_s0_x + 5), (bweight_gpyr_1_s0_y + 5), bweight_gpyr_1_s0__0) = ((((((((float32((bweight_gpyr_0.stencil(((bweight_gpyr_1_s0_x*2) + 11), ((bweight_gpyr_1_s0_y*2) + 11), bweight_gpyr_1_s0__0) + bweight_gpyr_0.stencil(((bweight_gpyr_1_s0_x*2) + 12), ((bweight_gpyr_1_s0_y*2) + 11), bweight_gpyr_1_s0__0)))*3.000000f) + float32(bweight_gpyr_0.stencil(((bweight_gpyr_1_s0_x*2) + 10), ((bweight_gpyr_1_s0_y*2) + 11), bweight_gpyr_1_s0__0))) + float32(bweight_gpyr_0.stencil(((bweight_gpyr_1_s0_x*2) + 13), ((bweight_gpyr_1_s0_y*2) + 11), bweight_gpyr_1_s0__0))) + (((float32((bweight_gpyr_0.stencil(((bweight_gpyr_1_s0_x*2) + 11), ((bweight_gpyr_1_s0_y*2) + 12), bweight_gpyr_1_s0__0) + bweight_gpyr_0.stencil(((bweight_gpyr_1_s0_x*2) + 12), ((bweight_gpyr_1_s0_y*2) + 12), bweight_gpyr_1_s0__0)))*3.000000f) + float32(bweight_gpyr_0.stencil(((bweight_gpyr_1_s0_x*2) + 10), ((bweight_gpyr_1_s0_y*2) + 12), bweight_gpyr_1_s0__0))) + float32(bweight_gpyr_0.stencil(((bweight_gpyr_1_s0_x*2) + 13), ((bweight_gpyr_1_s0_y*2) + 12), bweight_gpyr_1_s0__0))))*3.000000f) + (((float32((bweight_gpyr_0.stencil(((bweight_gpyr_1_s0_x*2) + 11), ((bweight_gpyr_1_s0_y*2) + 10), bweight_gpyr_1_s0__0) + bweight_gpyr_0.stencil(((bweight_gpyr_1_s0_x*2) + 12), ((bweight_gpyr_1_s0_y*2) + 10), bweight_gpyr_1_s0__0)))*3.000000f) + float32(bweight_gpyr_0.stencil(((bweight_gpyr_1_s0_x*2) + 10), ((bweight_gpyr_1_s0_y*2) + 10), bweight_gpyr_1_s0__0))) + float32(bweight_gpyr_0.stencil(((bweight_gpyr_1_s0_x*2) + 13), ((bweight_gpyr_1_s0_y*2) + 10), bweight_gpyr_1_s0__0)))) + (((float32((bweight_gpyr_0.stencil(((bweight_gpyr_1_s0_x*2) + 11), ((bweight_gpyr_1_s0_y*2) + 13), bweight_gpyr_1_s0__0) + bweight_gpyr_0.stencil(((bweight_gpyr_1_s0_x*2) + 12), ((bweight_gpyr_1_s0_y*2) + 13), bweight_gpyr_1_s0__0)))*3.000000f) + float32(bweight_gpyr_0.stencil(((bweight_gpyr_1_s0_x*2) + 10), ((bweight_gpyr_1_s0_y*2) + 13), bweight_gpyr_1_s0__0))) + float32(bweight_gpyr_0.stencil(((bweight_gpyr_1_s0_x*2) + 13), ((bweight_gpyr_1_s0_y*2) + 13), bweight_gpyr_1_s0__0))))*0.015625f)
hw_uint<32> hcompute_bweight_gpyr_1_stencil(hw_uint<256>& bweight_gpyr_0_stencil) {
  uint16_t _bweight_gpyr_0_stencil_1 = (uint16_t) bweight_gpyr_0_stencil.extract<0, 15>();
  uint16_t _bweight_gpyr_0_stencil_10 = (uint16_t) bweight_gpyr_0_stencil.extract<16, 31>();
  uint16_t _bweight_gpyr_0_stencil_11 = (uint16_t) bweight_gpyr_0_stencil.extract<32, 47>();
  uint16_t _bweight_gpyr_0_stencil_12 = (uint16_t) bweight_gpyr_0_stencil.extract<48, 63>();
  uint16_t _bweight_gpyr_0_stencil_13 = (uint16_t) bweight_gpyr_0_stencil.extract<64, 79>();
  uint16_t _bweight_gpyr_0_stencil_14 = (uint16_t) bweight_gpyr_0_stencil.extract<80, 95>();
  uint16_t _bweight_gpyr_0_stencil_15 = (uint16_t) bweight_gpyr_0_stencil.extract<96, 111>();
  uint16_t _bweight_gpyr_0_stencil_16 = (uint16_t) bweight_gpyr_0_stencil.extract<112, 127>();
  uint16_t _bweight_gpyr_0_stencil_2 = (uint16_t) bweight_gpyr_0_stencil.extract<128, 143>();
  uint16_t _bweight_gpyr_0_stencil_3 = (uint16_t) bweight_gpyr_0_stencil.extract<144, 159>();
  uint16_t _bweight_gpyr_0_stencil_4 = (uint16_t) bweight_gpyr_0_stencil.extract<160, 175>();
  uint16_t _bweight_gpyr_0_stencil_5 = (uint16_t) bweight_gpyr_0_stencil.extract<176, 191>();
  uint16_t _bweight_gpyr_0_stencil_6 = (uint16_t) bweight_gpyr_0_stencil.extract<192, 207>();
  uint16_t _bweight_gpyr_0_stencil_7 = (uint16_t) bweight_gpyr_0_stencil.extract<208, 223>();
  uint16_t _bweight_gpyr_0_stencil_8 = (uint16_t) bweight_gpyr_0_stencil.extract<224, 239>();
  uint16_t _bweight_gpyr_0_stencil_9 = (uint16_t) bweight_gpyr_0_stencil.extract<240, 255>();

  uint16_t _1166 = _bweight_gpyr_0_stencil_1 + _bweight_gpyr_0_stencil_2;
  float _1167 = (float)(_1166);
  float _1168 = float_from_bits(1077936128 /* 3 */);
  float _1169 = _1167 * _1168;
  float _1170 = (float)(_bweight_gpyr_0_stencil_3);
  float _1171 = _1169 + _1170;
  float _1172 = (float)(_bweight_gpyr_0_stencil_4);
  float _1173 = _1171 + _1172;
  uint16_t _1174 = _bweight_gpyr_0_stencil_5 + _bweight_gpyr_0_stencil_6;
  float _1175 = (float)(_1174);
  float _1176 = _1175 * _1168;
  float _1177 = (float)(_bweight_gpyr_0_stencil_7);
  float _1178 = _1176 + _1177;
  float _1179 = (float)(_bweight_gpyr_0_stencil_8);
  float _1180 = _1178 + _1179;
  float _1181 = _1173 + _1180;
  float _1182 = _1181 * _1168;
  uint16_t _1183 = _bweight_gpyr_0_stencil_9 + _bweight_gpyr_0_stencil_10;
  float _1184 = (float)(_1183);
  float _1185 = _1184 * _1168;
  float _1186 = (float)(_bweight_gpyr_0_stencil_11);
  float _1187 = _1185 + _1186;
  float _1188 = (float)(_bweight_gpyr_0_stencil_12);
  float _1189 = _1187 + _1188;
  float _1190 = _1182 + _1189;
  uint16_t _1191 = _bweight_gpyr_0_stencil_13 + _bweight_gpyr_0_stencil_14;
  float _1192 = (float)(_1191);
  float _1193 = _1192 * _1168;
  float _1194 = (float)(_bweight_gpyr_0_stencil_15);
  float _1195 = _1193 + _1194;
  float _1196 = (float)(_bweight_gpyr_0_stencil_16);
  float _1197 = _1195 + _1196;
  float _1198 = _1190 + _1197;
  float _1199 = float_from_bits(1015021568 /* 0.015625 */);
  float _1200 = _1198 * _1199;
  return _1200;
}

//store is: dinput_gpyr_gpyr_2.stencil((dinput_gpyr_gpyr_2_s0_x + 2), (dinput_gpyr_gpyr_2_s0_y + 2), dinput_gpyr_gpyr_2_s0__0) = ((((((dinput_gpyr_gpyr_1.stencil(((dinput_gpyr_gpyr_2_s0_x*2) + 7), ((dinput_gpyr_gpyr_2_s0_y*2) + 5), dinput_gpyr_gpyr_2_s0__0) + (dinput_gpyr_gpyr_1.stencil(((dinput_gpyr_gpyr_2_s0_x*2) + 4), ((dinput_gpyr_gpyr_2_s0_y*2) + 5), dinput_gpyr_gpyr_2_s0__0) + ((dinput_gpyr_gpyr_1.stencil(((dinput_gpyr_gpyr_2_s0_x*2) + 5), ((dinput_gpyr_gpyr_2_s0_y*2) + 5), dinput_gpyr_gpyr_2_s0__0) + dinput_gpyr_gpyr_1.stencil(((dinput_gpyr_gpyr_2_s0_x*2) + 6), ((dinput_gpyr_gpyr_2_s0_y*2) + 5), dinput_gpyr_gpyr_2_s0__0))*3.000000f))) + (dinput_gpyr_gpyr_1.stencil(((dinput_gpyr_gpyr_2_s0_x*2) + 7), ((dinput_gpyr_gpyr_2_s0_y*2) + 6), dinput_gpyr_gpyr_2_s0__0) + (dinput_gpyr_gpyr_1.stencil(((dinput_gpyr_gpyr_2_s0_x*2) + 4), ((dinput_gpyr_gpyr_2_s0_y*2) + 6), dinput_gpyr_gpyr_2_s0__0) + ((dinput_gpyr_gpyr_1.stencil(((dinput_gpyr_gpyr_2_s0_x*2) + 5), ((dinput_gpyr_gpyr_2_s0_y*2) + 6), dinput_gpyr_gpyr_2_s0__0) + dinput_gpyr_gpyr_1.stencil(((dinput_gpyr_gpyr_2_s0_x*2) + 6), ((dinput_gpyr_gpyr_2_s0_y*2) + 6), dinput_gpyr_gpyr_2_s0__0))*3.000000f))))*3.000000f) + (dinput_gpyr_gpyr_1.stencil(((dinput_gpyr_gpyr_2_s0_x*2) + 7), ((dinput_gpyr_gpyr_2_s0_y*2) + 4), dinput_gpyr_gpyr_2_s0__0) + (dinput_gpyr_gpyr_1.stencil(((dinput_gpyr_gpyr_2_s0_x*2) + 4), ((dinput_gpyr_gpyr_2_s0_y*2) + 4), dinput_gpyr_gpyr_2_s0__0) + ((dinput_gpyr_gpyr_1.stencil(((dinput_gpyr_gpyr_2_s0_x*2) + 5), ((dinput_gpyr_gpyr_2_s0_y*2) + 4), dinput_gpyr_gpyr_2_s0__0) + dinput_gpyr_gpyr_1.stencil(((dinput_gpyr_gpyr_2_s0_x*2) + 6), ((dinput_gpyr_gpyr_2_s0_y*2) + 4), dinput_gpyr_gpyr_2_s0__0))*3.000000f)))) + (dinput_gpyr_gpyr_1.stencil(((dinput_gpyr_gpyr_2_s0_x*2) + 7), ((dinput_gpyr_gpyr_2_s0_y*2) + 7), dinput_gpyr_gpyr_2_s0__0) + (dinput_gpyr_gpyr_1.stencil(((dinput_gpyr_gpyr_2_s0_x*2) + 4), ((dinput_gpyr_gpyr_2_s0_y*2) + 7), dinput_gpyr_gpyr_2_s0__0) + ((dinput_gpyr_gpyr_1.stencil(((dinput_gpyr_gpyr_2_s0_x*2) + 5), ((dinput_gpyr_gpyr_2_s0_y*2) + 7), dinput_gpyr_gpyr_2_s0__0) + dinput_gpyr_gpyr_1.stencil(((dinput_gpyr_gpyr_2_s0_x*2) + 6), ((dinput_gpyr_gpyr_2_s0_y*2) + 7), dinput_gpyr_gpyr_2_s0__0))*3.000000f))))*0.015625f)
hw_uint<32> hcompute_dinput_gpyr_gpyr_2_stencil(hw_uint<512>& dinput_gpyr_gpyr_1_stencil) {
  float _dinput_gpyr_gpyr_1_stencil_10 = (float) dinput_gpyr_gpyr_1_stencil.extract<0, 31>();
  float _dinput_gpyr_gpyr_1_stencil_11 = (float) dinput_gpyr_gpyr_1_stencil.extract<32, 63>();
  float _dinput_gpyr_gpyr_1_stencil_12 = (float) dinput_gpyr_gpyr_1_stencil.extract<64, 95>();
  float _dinput_gpyr_gpyr_1_stencil_13 = (float) dinput_gpyr_gpyr_1_stencil.extract<96, 127>();
  float _dinput_gpyr_gpyr_1_stencil_14 = (float) dinput_gpyr_gpyr_1_stencil.extract<128, 159>();
  float _dinput_gpyr_gpyr_1_stencil_15 = (float) dinput_gpyr_gpyr_1_stencil.extract<160, 191>();
  float _dinput_gpyr_gpyr_1_stencil_16 = (float) dinput_gpyr_gpyr_1_stencil.extract<192, 223>();
  float _dinput_gpyr_gpyr_1_stencil_17 = (float) dinput_gpyr_gpyr_1_stencil.extract<224, 255>();
  float _dinput_gpyr_gpyr_1_stencil_18 = (float) dinput_gpyr_gpyr_1_stencil.extract<256, 287>();
  float _dinput_gpyr_gpyr_1_stencil_19 = (float) dinput_gpyr_gpyr_1_stencil.extract<288, 319>();
  float _dinput_gpyr_gpyr_1_stencil_20 = (float) dinput_gpyr_gpyr_1_stencil.extract<320, 351>();
  float _dinput_gpyr_gpyr_1_stencil_5 = (float) dinput_gpyr_gpyr_1_stencil.extract<352, 383>();
  float _dinput_gpyr_gpyr_1_stencil_6 = (float) dinput_gpyr_gpyr_1_stencil.extract<384, 415>();
  float _dinput_gpyr_gpyr_1_stencil_7 = (float) dinput_gpyr_gpyr_1_stencil.extract<416, 447>();
  float _dinput_gpyr_gpyr_1_stencil_8 = (float) dinput_gpyr_gpyr_1_stencil.extract<448, 479>();
  float _dinput_gpyr_gpyr_1_stencil_9 = (float) dinput_gpyr_gpyr_1_stencil.extract<480, 511>();

  float _1299 = _dinput_gpyr_gpyr_1_stencil_7 + _dinput_gpyr_gpyr_1_stencil_8;
  float _1300 = float_from_bits(1077936128 /* 3 */);
  float _1301 = _1299 * _1300;
  float _1302 = _dinput_gpyr_gpyr_1_stencil_6 + _1301;
  float _1303 = _dinput_gpyr_gpyr_1_stencil_5 + _1302;
  float _1304 = _dinput_gpyr_gpyr_1_stencil_11 + _dinput_gpyr_gpyr_1_stencil_12;
  float _1305 = _1304 * _1300;
  float _1306 = _dinput_gpyr_gpyr_1_stencil_10 + _1305;
  float _1307 = _dinput_gpyr_gpyr_1_stencil_9 + _1306;
  float _1308 = _1303 + _1307;
  float _1309 = _1308 * _1300;
  float _1310 = _dinput_gpyr_gpyr_1_stencil_15 + _dinput_gpyr_gpyr_1_stencil_16;
  float _1311 = _1310 * _1300;
  float _1312 = _dinput_gpyr_gpyr_1_stencil_14 + _1311;
  float _1313 = _dinput_gpyr_gpyr_1_stencil_13 + _1312;
  float _1314 = _1309 + _1313;
  float _1315 = _dinput_gpyr_gpyr_1_stencil_19 + _dinput_gpyr_gpyr_1_stencil_20;
  float _1316 = _1315 * _1300;
  float _1317 = _dinput_gpyr_gpyr_1_stencil_18 + _1316;
  float _1318 = _dinput_gpyr_gpyr_1_stencil_17 + _1317;
  float _1319 = _1314 + _1318;
  float _1320 = float_from_bits(1015021568 /* 0.015625 */);
  float _1321 = _1319 * _1320;
  return _1321;
}

//store is: dinput_lpyr_1.stencil((dinput_lpyr_1_s0_x + 1), (dinput_lpyr_1_s0_y + 1), dinput_lpyr_1_s0__0) = (dinput_gpyr_gpyr_1.stencil((dinput_lpyr_1_s0_x + 5), (dinput_lpyr_1_s0_y + 5), dinput_lpyr_1_s0__0) - ((((dinput_gpyr_gpyr_2.stencil((((dinput_lpyr_1_s0_x/2) + ((dinput_lpyr_1_s0_x % 2)*2)) + 1), ((dinput_lpyr_1_s0_y/2) + 2), dinput_lpyr_1_s0__0) + (dinput_gpyr_gpyr_2.stencil(((dinput_lpyr_1_s0_x/2) + 2), ((dinput_lpyr_1_s0_y/2) + 2), dinput_lpyr_1_s0__0)*3.000000f))*3.000000f) + (dinput_gpyr_gpyr_2.stencil((((dinput_lpyr_1_s0_x/2) + ((dinput_lpyr_1_s0_x % 2)*2)) + 1), (((dinput_lpyr_1_s0_y/2) + ((dinput_lpyr_1_s0_y % 2)*2)) + 1), dinput_lpyr_1_s0__0) + (dinput_gpyr_gpyr_2.stencil(((dinput_lpyr_1_s0_x/2) + 2), (((dinput_lpyr_1_s0_y/2) + ((dinput_lpyr_1_s0_y % 2)*2)) + 1), dinput_lpyr_1_s0__0)*3.000000f)))*0.062500f))
hw_uint<32> hcompute_dinput_lpyr_1_stencil(hw_uint<32>& dinput_gpyr_gpyr_1_stencil, hw_uint<128>& dinput_gpyr_gpyr_2_stencil) {
  float _dinput_gpyr_gpyr_1_stencil_21 = (float) dinput_gpyr_gpyr_1_stencil.extract<0, 31>();

  float _dinput_gpyr_gpyr_2_stencil_1 = (float) dinput_gpyr_gpyr_2_stencil.extract<0, 31>();
  float _dinput_gpyr_gpyr_2_stencil_2 = (float) dinput_gpyr_gpyr_2_stencil.extract<32, 63>();
  float _dinput_gpyr_gpyr_2_stencil_3 = (float) dinput_gpyr_gpyr_2_stencil.extract<64, 95>();
  float _dinput_gpyr_gpyr_2_stencil_4 = (float) dinput_gpyr_gpyr_2_stencil.extract<96, 127>();

  float _1396 = float_from_bits(1077936128 /* 3 */);
  float _1397 = _dinput_gpyr_gpyr_2_stencil_2 * _1396;
  float _1398 = _dinput_gpyr_gpyr_2_stencil_1 + _1397;
  float _1399 = _1398 * _1396;
  float _1400 = _dinput_gpyr_gpyr_2_stencil_4 * _1396;
  float _1401 = _dinput_gpyr_gpyr_2_stencil_3 + _1400;
  float _1402 = _1399 + _1401;
  float _1403 = float_from_bits(1031798784 /* 0.0625 */);
  float _1404 = _1402 * _1403;
  float _1405 = _dinput_gpyr_gpyr_1_stencil_21 - _1404;
  return _1405;
}

//store is: dweight_gpyr_1.stencil((dweight_gpyr_1_s0_x + 5), (dweight_gpyr_1_s0_y + 5), dweight_gpyr_1_s0__0) = ((((((((float32((dweight_gpyr_0.stencil(((dweight_gpyr_1_s0_x*2) + 11), ((dweight_gpyr_1_s0_y*2) + 11), dweight_gpyr_1_s0__0) + dweight_gpyr_0.stencil(((dweight_gpyr_1_s0_x*2) + 12), ((dweight_gpyr_1_s0_y*2) + 11), dweight_gpyr_1_s0__0)))*3.000000f) + float32(dweight_gpyr_0.stencil(((dweight_gpyr_1_s0_x*2) + 10), ((dweight_gpyr_1_s0_y*2) + 11), dweight_gpyr_1_s0__0))) + float32(dweight_gpyr_0.stencil(((dweight_gpyr_1_s0_x*2) + 13), ((dweight_gpyr_1_s0_y*2) + 11), dweight_gpyr_1_s0__0))) + (((float32((dweight_gpyr_0.stencil(((dweight_gpyr_1_s0_x*2) + 11), ((dweight_gpyr_1_s0_y*2) + 12), dweight_gpyr_1_s0__0) + dweight_gpyr_0.stencil(((dweight_gpyr_1_s0_x*2) + 12), ((dweight_gpyr_1_s0_y*2) + 12), dweight_gpyr_1_s0__0)))*3.000000f) + float32(dweight_gpyr_0.stencil(((dweight_gpyr_1_s0_x*2) + 10), ((dweight_gpyr_1_s0_y*2) + 12), dweight_gpyr_1_s0__0))) + float32(dweight_gpyr_0.stencil(((dweight_gpyr_1_s0_x*2) + 13), ((dweight_gpyr_1_s0_y*2) + 12), dweight_gpyr_1_s0__0))))*3.000000f) + (((float32((dweight_gpyr_0.stencil(((dweight_gpyr_1_s0_x*2) + 11), ((dweight_gpyr_1_s0_y*2) + 10), dweight_gpyr_1_s0__0) + dweight_gpyr_0.stencil(((dweight_gpyr_1_s0_x*2) + 12), ((dweight_gpyr_1_s0_y*2) + 10), dweight_gpyr_1_s0__0)))*3.000000f) + float32(dweight_gpyr_0.stencil(((dweight_gpyr_1_s0_x*2) + 10), ((dweight_gpyr_1_s0_y*2) + 10), dweight_gpyr_1_s0__0))) + float32(dweight_gpyr_0.stencil(((dweight_gpyr_1_s0_x*2) + 13), ((dweight_gpyr_1_s0_y*2) + 10), dweight_gpyr_1_s0__0)))) + (((float32((dweight_gpyr_0.stencil(((dweight_gpyr_1_s0_x*2) + 11), ((dweight_gpyr_1_s0_y*2) + 13), dweight_gpyr_1_s0__0) + dweight_gpyr_0.stencil(((dweight_gpyr_1_s0_x*2) + 12), ((dweight_gpyr_1_s0_y*2) + 13), dweight_gpyr_1_s0__0)))*3.000000f) + float32(dweight_gpyr_0.stencil(((dweight_gpyr_1_s0_x*2) + 10), ((dweight_gpyr_1_s0_y*2) + 13), dweight_gpyr_1_s0__0))) + float32(dweight_gpyr_0.stencil(((dweight_gpyr_1_s0_x*2) + 13), ((dweight_gpyr_1_s0_y*2) + 13), dweight_gpyr_1_s0__0))))*0.015625f)
hw_uint<32> hcompute_dweight_gpyr_1_stencil(hw_uint<256>& dweight_gpyr_0_stencil) {
  uint16_t _dweight_gpyr_0_stencil_1 = (uint16_t) dweight_gpyr_0_stencil.extract<0, 15>();
  uint16_t _dweight_gpyr_0_stencil_10 = (uint16_t) dweight_gpyr_0_stencil.extract<16, 31>();
  uint16_t _dweight_gpyr_0_stencil_11 = (uint16_t) dweight_gpyr_0_stencil.extract<32, 47>();
  uint16_t _dweight_gpyr_0_stencil_12 = (uint16_t) dweight_gpyr_0_stencil.extract<48, 63>();
  uint16_t _dweight_gpyr_0_stencil_13 = (uint16_t) dweight_gpyr_0_stencil.extract<64, 79>();
  uint16_t _dweight_gpyr_0_stencil_14 = (uint16_t) dweight_gpyr_0_stencil.extract<80, 95>();
  uint16_t _dweight_gpyr_0_stencil_15 = (uint16_t) dweight_gpyr_0_stencil.extract<96, 111>();
  uint16_t _dweight_gpyr_0_stencil_16 = (uint16_t) dweight_gpyr_0_stencil.extract<112, 127>();
  uint16_t _dweight_gpyr_0_stencil_2 = (uint16_t) dweight_gpyr_0_stencil.extract<128, 143>();
  uint16_t _dweight_gpyr_0_stencil_3 = (uint16_t) dweight_gpyr_0_stencil.extract<144, 159>();
  uint16_t _dweight_gpyr_0_stencil_4 = (uint16_t) dweight_gpyr_0_stencil.extract<160, 175>();
  uint16_t _dweight_gpyr_0_stencil_5 = (uint16_t) dweight_gpyr_0_stencil.extract<176, 191>();
  uint16_t _dweight_gpyr_0_stencil_6 = (uint16_t) dweight_gpyr_0_stencil.extract<192, 207>();
  uint16_t _dweight_gpyr_0_stencil_7 = (uint16_t) dweight_gpyr_0_stencil.extract<208, 223>();
  uint16_t _dweight_gpyr_0_stencil_8 = (uint16_t) dweight_gpyr_0_stencil.extract<224, 239>();
  uint16_t _dweight_gpyr_0_stencil_9 = (uint16_t) dweight_gpyr_0_stencil.extract<240, 255>();

  uint16_t _1447 = _dweight_gpyr_0_stencil_1 + _dweight_gpyr_0_stencil_2;
  float _1448 = (float)(_1447);
  float _1449 = float_from_bits(1077936128 /* 3 */);
  float _1450 = _1448 * _1449;
  float _1451 = (float)(_dweight_gpyr_0_stencil_3);
  float _1452 = _1450 + _1451;
  float _1453 = (float)(_dweight_gpyr_0_stencil_4);
  float _1454 = _1452 + _1453;
  uint16_t _1455 = _dweight_gpyr_0_stencil_5 + _dweight_gpyr_0_stencil_6;
  float _1456 = (float)(_1455);
  float _1457 = _1456 * _1449;
  float _1458 = (float)(_dweight_gpyr_0_stencil_7);
  float _1459 = _1457 + _1458;
  float _1460 = (float)(_dweight_gpyr_0_stencil_8);
  float _1461 = _1459 + _1460;
  float _1462 = _1454 + _1461;
  float _1463 = _1462 * _1449;
  uint16_t _1464 = _dweight_gpyr_0_stencil_9 + _dweight_gpyr_0_stencil_10;
  float _1465 = (float)(_1464);
  float _1466 = _1465 * _1449;
  float _1467 = (float)(_dweight_gpyr_0_stencil_11);
  float _1468 = _1466 + _1467;
  float _1469 = (float)(_dweight_gpyr_0_stencil_12);
  float _1470 = _1468 + _1469;
  float _1471 = _1463 + _1470;
  uint16_t _1472 = _dweight_gpyr_0_stencil_13 + _dweight_gpyr_0_stencil_14;
  float _1473 = (float)(_1472);
  float _1474 = _1473 * _1449;
  float _1475 = (float)(_dweight_gpyr_0_stencil_15);
  float _1476 = _1474 + _1475;
  float _1477 = (float)(_dweight_gpyr_0_stencil_16);
  float _1478 = _1476 + _1477;
  float _1479 = _1471 + _1478;
  float _1480 = float_from_bits(1015021568 /* 0.015625 */);
  float _1481 = _1479 * _1480;
  return _1481;
}

//store is: binput_lpyr_2.stencil((binput_lpyr_2_s0_x + 2), (binput_lpyr_2_s0_y + 2), binput_lpyr_2_s0__0) = binput_gpyr_gpyr_2.stencil((binput_lpyr_2_s0_x + 2), (binput_lpyr_2_s0_y + 2), binput_lpyr_2_s0__0)
hw_uint<32> hcompute_binput_lpyr_2_stencil(hw_uint<32>& binput_gpyr_gpyr_2_stencil) {
  float _binput_gpyr_gpyr_2_stencil_5 = (float) binput_gpyr_gpyr_2_stencil.extract<0, 31>();

  return _binput_gpyr_gpyr_2_stencil_5;
}

//store is: bweight_gpyr_2.stencil((bweight_gpyr_2_s0_x + 2), (bweight_gpyr_2_s0_y + 2), bweight_gpyr_2_s0__0) = ((((((bweight_gpyr_1.stencil(((bweight_gpyr_2_s0_x*2) + 7), ((bweight_gpyr_2_s0_y*2) + 5), bweight_gpyr_2_s0__0) + (bweight_gpyr_1.stencil(((bweight_gpyr_2_s0_x*2) + 4), ((bweight_gpyr_2_s0_y*2) + 5), bweight_gpyr_2_s0__0) + ((bweight_gpyr_1.stencil(((bweight_gpyr_2_s0_x*2) + 5), ((bweight_gpyr_2_s0_y*2) + 5), bweight_gpyr_2_s0__0) + bweight_gpyr_1.stencil(((bweight_gpyr_2_s0_x*2) + 6), ((bweight_gpyr_2_s0_y*2) + 5), bweight_gpyr_2_s0__0))*3.000000f))) + (bweight_gpyr_1.stencil(((bweight_gpyr_2_s0_x*2) + 7), ((bweight_gpyr_2_s0_y*2) + 6), bweight_gpyr_2_s0__0) + (bweight_gpyr_1.stencil(((bweight_gpyr_2_s0_x*2) + 4), ((bweight_gpyr_2_s0_y*2) + 6), bweight_gpyr_2_s0__0) + ((bweight_gpyr_1.stencil(((bweight_gpyr_2_s0_x*2) + 5), ((bweight_gpyr_2_s0_y*2) + 6), bweight_gpyr_2_s0__0) + bweight_gpyr_1.stencil(((bweight_gpyr_2_s0_x*2) + 6), ((bweight_gpyr_2_s0_y*2) + 6), bweight_gpyr_2_s0__0))*3.000000f))))*3.000000f) + (bweight_gpyr_1.stencil(((bweight_gpyr_2_s0_x*2) + 7), ((bweight_gpyr_2_s0_y*2) + 4), bweight_gpyr_2_s0__0) + (bweight_gpyr_1.stencil(((bweight_gpyr_2_s0_x*2) + 4), ((bweight_gpyr_2_s0_y*2) + 4), bweight_gpyr_2_s0__0) + ((bweight_gpyr_1.stencil(((bweight_gpyr_2_s0_x*2) + 5), ((bweight_gpyr_2_s0_y*2) + 4), bweight_gpyr_2_s0__0) + bweight_gpyr_1.stencil(((bweight_gpyr_2_s0_x*2) + 6), ((bweight_gpyr_2_s0_y*2) + 4), bweight_gpyr_2_s0__0))*3.000000f)))) + (bweight_gpyr_1.stencil(((bweight_gpyr_2_s0_x*2) + 7), ((bweight_gpyr_2_s0_y*2) + 7), bweight_gpyr_2_s0__0) + (bweight_gpyr_1.stencil(((bweight_gpyr_2_s0_x*2) + 4), ((bweight_gpyr_2_s0_y*2) + 7), bweight_gpyr_2_s0__0) + ((bweight_gpyr_1.stencil(((bweight_gpyr_2_s0_x*2) + 5), ((bweight_gpyr_2_s0_y*2) + 7), bweight_gpyr_2_s0__0) + bweight_gpyr_1.stencil(((bweight_gpyr_2_s0_x*2) + 6), ((bweight_gpyr_2_s0_y*2) + 7), bweight_gpyr_2_s0__0))*3.000000f))))*0.015625f)
hw_uint<32> hcompute_bweight_gpyr_2_stencil(hw_uint<512>& bweight_gpyr_1_stencil) {
  float _bweight_gpyr_1_stencil_1 = (float) bweight_gpyr_1_stencil.extract<0, 31>();
  float _bweight_gpyr_1_stencil_10 = (float) bweight_gpyr_1_stencil.extract<32, 63>();
  float _bweight_gpyr_1_stencil_11 = (float) bweight_gpyr_1_stencil.extract<64, 95>();
  float _bweight_gpyr_1_stencil_12 = (float) bweight_gpyr_1_stencil.extract<96, 127>();
  float _bweight_gpyr_1_stencil_13 = (float) bweight_gpyr_1_stencil.extract<128, 159>();
  float _bweight_gpyr_1_stencil_14 = (float) bweight_gpyr_1_stencil.extract<160, 191>();
  float _bweight_gpyr_1_stencil_15 = (float) bweight_gpyr_1_stencil.extract<192, 223>();
  float _bweight_gpyr_1_stencil_16 = (float) bweight_gpyr_1_stencil.extract<224, 255>();
  float _bweight_gpyr_1_stencil_2 = (float) bweight_gpyr_1_stencil.extract<256, 287>();
  float _bweight_gpyr_1_stencil_3 = (float) bweight_gpyr_1_stencil.extract<288, 319>();
  float _bweight_gpyr_1_stencil_4 = (float) bweight_gpyr_1_stencil.extract<320, 351>();
  float _bweight_gpyr_1_stencil_5 = (float) bweight_gpyr_1_stencil.extract<352, 383>();
  float _bweight_gpyr_1_stencil_6 = (float) bweight_gpyr_1_stencil.extract<384, 415>();
  float _bweight_gpyr_1_stencil_7 = (float) bweight_gpyr_1_stencil.extract<416, 447>();
  float _bweight_gpyr_1_stencil_8 = (float) bweight_gpyr_1_stencil.extract<448, 479>();
  float _bweight_gpyr_1_stencil_9 = (float) bweight_gpyr_1_stencil.extract<480, 511>();

  float _1583 = _bweight_gpyr_1_stencil_3 + _bweight_gpyr_1_stencil_4;
  float _1584 = float_from_bits(1077936128 /* 3 */);
  float _1585 = _1583 * _1584;
  float _1586 = _bweight_gpyr_1_stencil_2 + _1585;
  float _1587 = _bweight_gpyr_1_stencil_1 + _1586;
  float _1588 = _bweight_gpyr_1_stencil_7 + _bweight_gpyr_1_stencil_8;
  float _1589 = _1588 * _1584;
  float _1590 = _bweight_gpyr_1_stencil_6 + _1589;
  float _1591 = _bweight_gpyr_1_stencil_5 + _1590;
  float _1592 = _1587 + _1591;
  float _1593 = _1592 * _1584;
  float _1594 = _bweight_gpyr_1_stencil_11 + _bweight_gpyr_1_stencil_12;
  float _1595 = _1594 * _1584;
  float _1596 = _bweight_gpyr_1_stencil_10 + _1595;
  float _1597 = _bweight_gpyr_1_stencil_9 + _1596;
  float _1598 = _1593 + _1597;
  float _1599 = _bweight_gpyr_1_stencil_15 + _bweight_gpyr_1_stencil_16;
  float _1600 = _1599 * _1584;
  float _1601 = _bweight_gpyr_1_stencil_14 + _1600;
  float _1602 = _bweight_gpyr_1_stencil_13 + _1601;
  float _1603 = _1598 + _1602;
  float _1604 = float_from_bits(1015021568 /* 0.015625 */);
  float _1605 = _1603 * _1604;
  return _1605;
}

//store is: dinput_lpyr_2.stencil((dinput_lpyr_2_s0_x + 2), (dinput_lpyr_2_s0_y + 2), dinput_lpyr_2_s0__0) = dinput_gpyr_gpyr_2.stencil((dinput_lpyr_2_s0_x + 2), (dinput_lpyr_2_s0_y + 2), dinput_lpyr_2_s0__0)
hw_uint<32> hcompute_dinput_lpyr_2_stencil(hw_uint<32>& dinput_gpyr_gpyr_2_stencil) {
  float _dinput_gpyr_gpyr_2_stencil_5 = (float) dinput_gpyr_gpyr_2_stencil.extract<0, 31>();

  return _dinput_gpyr_gpyr_2_stencil_5;
}

//store is: dweight_gpyr_2.stencil((dweight_gpyr_2_s0_x + 2), (dweight_gpyr_2_s0_y + 2), dweight_gpyr_2_s0__0) = ((((((dweight_gpyr_1.stencil(((dweight_gpyr_2_s0_x*2) + 7), ((dweight_gpyr_2_s0_y*2) + 5), dweight_gpyr_2_s0__0) + (dweight_gpyr_1.stencil(((dweight_gpyr_2_s0_x*2) + 4), ((dweight_gpyr_2_s0_y*2) + 5), dweight_gpyr_2_s0__0) + ((dweight_gpyr_1.stencil(((dweight_gpyr_2_s0_x*2) + 5), ((dweight_gpyr_2_s0_y*2) + 5), dweight_gpyr_2_s0__0) + dweight_gpyr_1.stencil(((dweight_gpyr_2_s0_x*2) + 6), ((dweight_gpyr_2_s0_y*2) + 5), dweight_gpyr_2_s0__0))*3.000000f))) + (dweight_gpyr_1.stencil(((dweight_gpyr_2_s0_x*2) + 7), ((dweight_gpyr_2_s0_y*2) + 6), dweight_gpyr_2_s0__0) + (dweight_gpyr_1.stencil(((dweight_gpyr_2_s0_x*2) + 4), ((dweight_gpyr_2_s0_y*2) + 6), dweight_gpyr_2_s0__0) + ((dweight_gpyr_1.stencil(((dweight_gpyr_2_s0_x*2) + 5), ((dweight_gpyr_2_s0_y*2) + 6), dweight_gpyr_2_s0__0) + dweight_gpyr_1.stencil(((dweight_gpyr_2_s0_x*2) + 6), ((dweight_gpyr_2_s0_y*2) + 6), dweight_gpyr_2_s0__0))*3.000000f))))*3.000000f) + (dweight_gpyr_1.stencil(((dweight_gpyr_2_s0_x*2) + 7), ((dweight_gpyr_2_s0_y*2) + 4), dweight_gpyr_2_s0__0) + (dweight_gpyr_1.stencil(((dweight_gpyr_2_s0_x*2) + 4), ((dweight_gpyr_2_s0_y*2) + 4), dweight_gpyr_2_s0__0) + ((dweight_gpyr_1.stencil(((dweight_gpyr_2_s0_x*2) + 5), ((dweight_gpyr_2_s0_y*2) + 4), dweight_gpyr_2_s0__0) + dweight_gpyr_1.stencil(((dweight_gpyr_2_s0_x*2) + 6), ((dweight_gpyr_2_s0_y*2) + 4), dweight_gpyr_2_s0__0))*3.000000f)))) + (dweight_gpyr_1.stencil(((dweight_gpyr_2_s0_x*2) + 7), ((dweight_gpyr_2_s0_y*2) + 7), dweight_gpyr_2_s0__0) + (dweight_gpyr_1.stencil(((dweight_gpyr_2_s0_x*2) + 4), ((dweight_gpyr_2_s0_y*2) + 7), dweight_gpyr_2_s0__0) + ((dweight_gpyr_1.stencil(((dweight_gpyr_2_s0_x*2) + 5), ((dweight_gpyr_2_s0_y*2) + 7), dweight_gpyr_2_s0__0) + dweight_gpyr_1.stencil(((dweight_gpyr_2_s0_x*2) + 6), ((dweight_gpyr_2_s0_y*2) + 7), dweight_gpyr_2_s0__0))*3.000000f))))*0.015625f)
hw_uint<32> hcompute_dweight_gpyr_2_stencil(hw_uint<512>& dweight_gpyr_1_stencil) {
  float _dweight_gpyr_1_stencil_1 = (float) dweight_gpyr_1_stencil.extract<0, 31>();
  float _dweight_gpyr_1_stencil_10 = (float) dweight_gpyr_1_stencil.extract<32, 63>();
  float _dweight_gpyr_1_stencil_11 = (float) dweight_gpyr_1_stencil.extract<64, 95>();
  float _dweight_gpyr_1_stencil_12 = (float) dweight_gpyr_1_stencil.extract<96, 127>();
  float _dweight_gpyr_1_stencil_13 = (float) dweight_gpyr_1_stencil.extract<128, 159>();
  float _dweight_gpyr_1_stencil_14 = (float) dweight_gpyr_1_stencil.extract<160, 191>();
  float _dweight_gpyr_1_stencil_15 = (float) dweight_gpyr_1_stencil.extract<192, 223>();
  float _dweight_gpyr_1_stencil_16 = (float) dweight_gpyr_1_stencil.extract<224, 255>();
  float _dweight_gpyr_1_stencil_2 = (float) dweight_gpyr_1_stencil.extract<256, 287>();
  float _dweight_gpyr_1_stencil_3 = (float) dweight_gpyr_1_stencil.extract<288, 319>();
  float _dweight_gpyr_1_stencil_4 = (float) dweight_gpyr_1_stencil.extract<320, 351>();
  float _dweight_gpyr_1_stencil_5 = (float) dweight_gpyr_1_stencil.extract<352, 383>();
  float _dweight_gpyr_1_stencil_6 = (float) dweight_gpyr_1_stencil.extract<384, 415>();
  float _dweight_gpyr_1_stencil_7 = (float) dweight_gpyr_1_stencil.extract<416, 447>();
  float _dweight_gpyr_1_stencil_8 = (float) dweight_gpyr_1_stencil.extract<448, 479>();
  float _dweight_gpyr_1_stencil_9 = (float) dweight_gpyr_1_stencil.extract<480, 511>();

  float _1683 = _dweight_gpyr_1_stencil_3 + _dweight_gpyr_1_stencil_4;
  float _1684 = float_from_bits(1077936128 /* 3 */);
  float _1685 = _1683 * _1684;
  float _1686 = _dweight_gpyr_1_stencil_2 + _1685;
  float _1687 = _dweight_gpyr_1_stencil_1 + _1686;
  float _1688 = _dweight_gpyr_1_stencil_7 + _dweight_gpyr_1_stencil_8;
  float _1689 = _1688 * _1684;
  float _1690 = _dweight_gpyr_1_stencil_6 + _1689;
  float _1691 = _dweight_gpyr_1_stencil_5 + _1690;
  float _1692 = _1687 + _1691;
  float _1693 = _1692 * _1684;
  float _1694 = _dweight_gpyr_1_stencil_11 + _dweight_gpyr_1_stencil_12;
  float _1695 = _1694 * _1684;
  float _1696 = _dweight_gpyr_1_stencil_10 + _1695;
  float _1697 = _dweight_gpyr_1_stencil_9 + _1696;
  float _1698 = _1693 + _1697;
  float _1699 = _dweight_gpyr_1_stencil_15 + _dweight_gpyr_1_stencil_16;
  float _1700 = _1699 * _1684;
  float _1701 = _dweight_gpyr_1_stencil_14 + _1700;
  float _1702 = _dweight_gpyr_1_stencil_13 + _1701;
  float _1703 = _1698 + _1702;
  float _1704 = float_from_bits(1015021568 /* 0.015625 */);
  float _1705 = _1703 * _1704;
  return _1705;
}

//store is: merge_pyr_2.stencil((merge_pyr_2_s0_x + 2), (merge_pyr_2_s0_y + 2), merge_pyr_2_s0__0) = ((dweight_gpyr_2.stencil((merge_pyr_2_s0_x + 2), (merge_pyr_2_s0_y + 2), merge_pyr_2_s0__0)*dinput_lpyr_2.stencil((merge_pyr_2_s0_x + 2), (merge_pyr_2_s0_y + 2), merge_pyr_2_s0__0)) + (bweight_gpyr_2.stencil((merge_pyr_2_s0_x + 2), (merge_pyr_2_s0_y + 2), merge_pyr_2_s0__0)*binput_lpyr_2.stencil((merge_pyr_2_s0_x + 2), (merge_pyr_2_s0_y + 2), merge_pyr_2_s0__0)))
hw_uint<32> hcompute_merge_pyr_2_stencil(hw_uint<32>& binput_lpyr_2_stencil, hw_uint<32>& bweight_gpyr_2_stencil, hw_uint<32>& dinput_lpyr_2_stencil, hw_uint<32>& dweight_gpyr_2_stencil) {
  float _binput_lpyr_2_stencil_1 = (float) binput_lpyr_2_stencil.extract<0, 31>();

  float _bweight_gpyr_2_stencil_1 = (float) bweight_gpyr_2_stencil.extract<0, 31>();

  float _dinput_lpyr_2_stencil_1 = (float) dinput_lpyr_2_stencil.extract<0, 31>();

  float _dweight_gpyr_2_stencil_1 = (float) dweight_gpyr_2_stencil.extract<0, 31>();

  float _1780 = _dweight_gpyr_2_stencil_1 * _dinput_lpyr_2_stencil_1;
  float _1781 = _bweight_gpyr_2_stencil_1 * _binput_lpyr_2_stencil_1;
  float _1782 = _1780 + _1781;
  return _1782;
}

//store is: merge_pyr_1.stencil((merge_pyr_1_s0_x + 1), (merge_pyr_1_s0_y + 1), merge_pyr_1_s0__0) = ((dweight_gpyr_1.stencil((merge_pyr_1_s0_x + 5), (merge_pyr_1_s0_y + 5), merge_pyr_1_s0__0)*dinput_lpyr_1.stencil((merge_pyr_1_s0_x + 1), (merge_pyr_1_s0_y + 1), merge_pyr_1_s0__0)) + (bweight_gpyr_1.stencil((merge_pyr_1_s0_x + 5), (merge_pyr_1_s0_y + 5), merge_pyr_1_s0__0)*binput_lpyr_1.stencil((merge_pyr_1_s0_x + 1), (merge_pyr_1_s0_y + 1), merge_pyr_1_s0__0)))
hw_uint<32> hcompute_merge_pyr_1_stencil(hw_uint<32>& binput_lpyr_1_stencil, hw_uint<32>& bweight_gpyr_1_stencil, hw_uint<32>& dinput_lpyr_1_stencil, hw_uint<32>& dweight_gpyr_1_stencil) {
  float _binput_lpyr_1_stencil_1 = (float) binput_lpyr_1_stencil.extract<0, 31>();

  float _bweight_gpyr_1_stencil_17 = (float) bweight_gpyr_1_stencil.extract<0, 31>();

  float _dinput_lpyr_1_stencil_1 = (float) dinput_lpyr_1_stencil.extract<0, 31>();

  float _dweight_gpyr_1_stencil_17 = (float) dweight_gpyr_1_stencil.extract<0, 31>();

  float _1795 = _dweight_gpyr_1_stencil_17 * _dinput_lpyr_1_stencil_1;
  float _1796 = _bweight_gpyr_1_stencil_17 * _binput_lpyr_1_stencil_1;
  float _1797 = _1795 + _1796;
  return _1797;
}

//store is: merge_pyr_1.stencil((merge_pyr_1_s1_x + 1), (merge_pyr_1_s1_y + 1), merge_pyr_1_s1__0) = ((merge_pyr_1.stencil((merge_pyr_1_s1_x + 1), (merge_pyr_1_s1_y + 1), merge_pyr_1_s1__0)*(((merge_pyr_2.stencil((((merge_pyr_1_s1_x/2) + ((merge_pyr_1_s1_x % 2)*2)) + 1), ((merge_pyr_1_s1_y/2) + 2), merge_pyr_1_s1__0) + (merge_pyr_2.stencil(((merge_pyr_1_s1_x/2) + 2), ((merge_pyr_1_s1_y/2) + 2), merge_pyr_1_s1__0)*3.000000f))*3.000000f) + (merge_pyr_2.stencil((((merge_pyr_1_s1_x/2) + ((merge_pyr_1_s1_x % 2)*2)) + 1), (((merge_pyr_1_s1_y/2) + ((merge_pyr_1_s1_y % 2)*2)) + 1), merge_pyr_1_s1__0) + (merge_pyr_2.stencil(((merge_pyr_1_s1_x/2) + 2), (((merge_pyr_1_s1_y/2) + ((merge_pyr_1_s1_y % 2)*2)) + 1), merge_pyr_1_s1__0)*3.000000f))))*0.062500f)
hw_uint<32> hcompute_merge_pyr_1_stencil_1(hw_uint<32>& merge_pyr_1_stencil, hw_uint<128>& merge_pyr_2_stencil) {
  float _merge_pyr_1_stencil_1 = (float) merge_pyr_1_stencil.extract<0, 31>();

  float _merge_pyr_2_stencil_1 = (float) merge_pyr_2_stencil.extract<0, 31>();
  float _merge_pyr_2_stencil_2 = (float) merge_pyr_2_stencil.extract<32, 63>();
  float _merge_pyr_2_stencil_3 = (float) merge_pyr_2_stencil.extract<64, 95>();
  float _merge_pyr_2_stencil_4 = (float) merge_pyr_2_stencil.extract<96, 127>();

  float _1812 = float_from_bits(1077936128 /* 3 */);
  float _1813 = _merge_pyr_2_stencil_2 * _1812;
  float _1814 = _merge_pyr_2_stencil_1 + _1813;
  float _1815 = _1814 * _1812;
  float _1816 = _merge_pyr_2_stencil_4 * _1812;
  float _1817 = _merge_pyr_2_stencil_3 + _1816;
  float _1818 = _1815 + _1817;
  float _1819 = _merge_pyr_1_stencil_1 * _1818;
  float _1820 = float_from_bits(1031798784 /* 0.0625 */);
  float _1821 = _1819 * _1820;
  return _1821;
}

//store is: merge_pyr_0.stencil(merge_pyr_0_s0_x, merge_pyr_0_s0_y, merge_pyr_0_s0__0) = ((dinput_lpyr_0.stencil(merge_pyr_0_s0_x, merge_pyr_0_s0_y, merge_pyr_0_s0__0)*float32(dweight_gpyr_0.stencil((merge_pyr_0_s0_x + 11), (merge_pyr_0_s0_y + 11), merge_pyr_0_s0__0))) + (binput_lpyr_0.stencil(merge_pyr_0_s0_x, merge_pyr_0_s0_y, merge_pyr_0_s0__0)*float32(bweight_gpyr_0.stencil((merge_pyr_0_s0_x + 11), (merge_pyr_0_s0_y + 11), merge_pyr_0_s0__0))))
hw_uint<32> hcompute_merge_pyr_0_stencil(hw_uint<32>& binput_lpyr_0_stencil, hw_uint<16>& bweight_gpyr_0_stencil, hw_uint<32>& dinput_lpyr_0_stencil, hw_uint<16>& dweight_gpyr_0_stencil) {
  float _binput_lpyr_0_stencil_1 = (float) binput_lpyr_0_stencil.extract<0, 31>();

  uint16_t _bweight_gpyr_0_stencil_17 = (uint16_t) bweight_gpyr_0_stencil.extract<0, 15>();

  float _dinput_lpyr_0_stencil_1 = (float) dinput_lpyr_0_stencil.extract<0, 31>();

  uint16_t _dweight_gpyr_0_stencil_17 = (uint16_t) dweight_gpyr_0_stencil.extract<0, 15>();

  float _1861 = (float)(_dweight_gpyr_0_stencil_17);
  float _1862 = _dinput_lpyr_0_stencil_1 * _1861;
  float _1863 = (float)(_bweight_gpyr_0_stencil_17);
  float _1864 = _binput_lpyr_0_stencil_1 * _1863;
  float _1865 = _1862 + _1864;
  return _1865;
}

//store is: merge_pyr_0.stencil(merge_pyr_0_s1_x, merge_pyr_0_s1_y, merge_pyr_0_s1__0) = ((merge_pyr_0.stencil(merge_pyr_0_s1_x, merge_pyr_0_s1_y, merge_pyr_0_s1__0)*(((merge_pyr_1.stencil(((merge_pyr_0_s1_x/2) + ((merge_pyr_0_s1_x % 2)*2)), ((merge_pyr_0_s1_y/2) + 1), merge_pyr_0_s1__0) + (merge_pyr_1.stencil(((merge_pyr_0_s1_x/2) + 1), ((merge_pyr_0_s1_y/2) + 1), merge_pyr_0_s1__0)*3.000000f))*3.000000f) + (merge_pyr_1.stencil(((merge_pyr_0_s1_x/2) + ((merge_pyr_0_s1_x % 2)*2)), ((merge_pyr_0_s1_y/2) + ((merge_pyr_0_s1_y % 2)*2)), merge_pyr_0_s1__0) + (merge_pyr_1.stencil(((merge_pyr_0_s1_x/2) + 1), ((merge_pyr_0_s1_y/2) + ((merge_pyr_0_s1_y % 2)*2)), merge_pyr_0_s1__0)*3.000000f))))*0.062500f)
hw_uint<32> hcompute_merge_pyr_0_stencil_1(hw_uint<32>& merge_pyr_0_stencil, hw_uint<128>& merge_pyr_1_stencil) {
  float _merge_pyr_0_stencil_1 = (float) merge_pyr_0_stencil.extract<0, 31>();

  float _merge_pyr_1_stencil_2 = (float) merge_pyr_1_stencil.extract<0, 31>();
  float _merge_pyr_1_stencil_3 = (float) merge_pyr_1_stencil.extract<32, 63>();
  float _merge_pyr_1_stencil_4 = (float) merge_pyr_1_stencil.extract<64, 95>();
  float _merge_pyr_1_stencil_5 = (float) merge_pyr_1_stencil.extract<96, 127>();

  float _1882 = float_from_bits(1077936128 /* 3 */);
  float _1883 = _merge_pyr_1_stencil_3 * _1882;
  float _1884 = _merge_pyr_1_stencil_2 + _1883;
  float _1885 = _1884 * _1882;
  float _1886 = _merge_pyr_1_stencil_5 * _1882;
  float _1887 = _merge_pyr_1_stencil_4 + _1886;
  float _1888 = _1885 + _1887;
  float _1889 = _merge_pyr_0_stencil_1 * _1888;
  float _1890 = float_from_bits(1031798784 /* 0.0625 */);
  float _1891 = _1889 * _1890;
  return _1891;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_c) = merge_pyr_0.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_c)
hw_uint<32> hcompute_hw_output_stencil(hw_uint<32>& merge_pyr_0_stencil) {
  float _merge_pyr_0_stencil_2 = (float) merge_pyr_0_stencil.extract<0, 31>();

  return _merge_pyr_0_stencil_2;
}

