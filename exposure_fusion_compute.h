#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_bright_global_wrapper.stencil(hw_input_bright_global_wrapper_s0_x, hw_input_bright_global_wrapper_s0_y, hw_input_bright_global_wrapper_s0_c) = hw_input_bright.stencil(hw_input_bright_global_wrapper_s0_x, hw_input_bright_global_wrapper_s0_y, hw_input_bright_global_wrapper_s0_c)
hw_uint<16> hcompute_hw_input_bright_global_wrapper_stencil(hw_uint<16>& hw_input_bright_stencil) {
  uint16_t _hw_input_bright_stencil_1 = (uint16_t) hw_input_bright_stencil.extract<0, 15>();

  return _hw_input_bright_stencil_1;
}

//store is: binput_gpyr_gpyr_0.stencil(binput_gpyr_gpyr_0_s0_x, binput_gpyr_gpyr_0_s0_y, binput_gpyr_gpyr_0_s0__0) = hw_input_bright_global_wrapper.stencil(binput_gpyr_gpyr_0_s0_x, binput_gpyr_gpyr_0_s0_y, binput_gpyr_gpyr_0_s0__0)
hw_uint<16> hcompute_binput_gpyr_gpyr_0_stencil(hw_uint<16>& hw_input_bright_global_wrapper_stencil) {
  uint16_t _hw_input_bright_global_wrapper_stencil_1 = (uint16_t) hw_input_bright_global_wrapper_stencil.extract<0, 15>();

  return _hw_input_bright_global_wrapper_stencil_1;
}

//store is: binput_gpyr_gpyr_1.stencil(binput_gpyr_gpyr_1_s0_x, binput_gpyr_gpyr_1_s0_y, binput_gpyr_gpyr_1_s0__0) = binput_gpyr_gpyr_0.stencil((binput_gpyr_gpyr_1_s0_x*2), (binput_gpyr_gpyr_1_s0_y*2), binput_gpyr_gpyr_1_s0__0)
hw_uint<16> hcompute_binput_gpyr_gpyr_1_stencil(hw_uint<16>& binput_gpyr_gpyr_0_stencil) {
  uint16_t _binput_gpyr_gpyr_0_stencil_1 = (uint16_t) binput_gpyr_gpyr_0_stencil.extract<0, 15>();

  return _binput_gpyr_gpyr_0_stencil_1;
}

//store is: binput_lpyr_0.stencil(binput_lpyr_0_s0_x, binput_lpyr_0_s0_y, binput_lpyr_0_s0__0) = (binput_gpyr_gpyr_0.stencil(binput_lpyr_0_s0_x, binput_lpyr_0_s0_y, binput_lpyr_0_s0__0) - binput_gpyr_gpyr_1.stencil((binput_lpyr_0_s0_x/2), (binput_lpyr_0_s0_y/2), binput_lpyr_0_s0__0))
hw_uint<16> hcompute_binput_lpyr_0_stencil(hw_uint<16>& binput_gpyr_gpyr_0_stencil, hw_uint<16>& binput_gpyr_gpyr_1_stencil) {
  uint16_t _binput_gpyr_gpyr_0_stencil_2 = (uint16_t) binput_gpyr_gpyr_0_stencil.extract<0, 15>();

  uint16_t _binput_gpyr_gpyr_1_stencil_1 = (uint16_t) binput_gpyr_gpyr_1_stencil.extract<0, 15>();

  uint16_t _1144 = _binput_gpyr_gpyr_0_stencil_2 - _binput_gpyr_gpyr_1_stencil_1;
  return _1144;
}

//store is: hw_input_dark_global_wrapper.stencil(hw_input_dark_global_wrapper_s0_x, hw_input_dark_global_wrapper_s0_y, hw_input_dark_global_wrapper_s0_c) = hw_input_dark.stencil(hw_input_dark_global_wrapper_s0_x, hw_input_dark_global_wrapper_s0_y, hw_input_dark_global_wrapper_s0_c)
hw_uint<16> hcompute_hw_input_dark_global_wrapper_stencil(hw_uint<16>& hw_input_dark_stencil) {
  uint16_t _hw_input_dark_stencil_1 = (uint16_t) hw_input_dark_stencil.extract<0, 15>();

  return _hw_input_dark_stencil_1;
}

//store is: weight_sum.stencil(weight_sum_s0_x, weight_sum_s0_y, weight_sum_s0_c) = (((hw_input_dark_global_wrapper.stencil(weight_sum_s0_x, weight_sum_s0_y, weight_sum_s0_c) + hw_input_bright_global_wrapper.stencil(weight_sum_s0_x, weight_sum_s0_y, weight_sum_s0_c))*(uint16)2) + (uint16)1)
hw_uint<16> hcompute_weight_sum_stencil(hw_uint<16>& hw_input_bright_global_wrapper_stencil, hw_uint<16>& hw_input_dark_global_wrapper_stencil) {
  uint16_t _hw_input_bright_global_wrapper_stencil_2 = (uint16_t) hw_input_bright_global_wrapper_stencil.extract<0, 15>();

  uint16_t _hw_input_dark_global_wrapper_stencil_1 = (uint16_t) hw_input_dark_global_wrapper_stencil.extract<0, 15>();

  uint16_t _1152 = _hw_input_dark_global_wrapper_stencil_1 + _hw_input_bright_global_wrapper_stencil_2;
  uint16_t _1153 = (uint16_t)(2);
  uint16_t _1154 = _1152 * _1153;
  uint16_t _1155 = (uint16_t)(1);
  uint16_t _1156 = _1154 + _1155;
  return _1156;
}

//store is: bweight_gpyr_0.stencil(bweight_gpyr_0_s0_x_1, bweight_gpyr_0_s0_y, bweight_gpyr_0_s0__0) = ((hw_input_bright_global_wrapper.stencil(bweight_gpyr_0_s0_x_1, bweight_gpyr_0_s0_y, bweight_gpyr_0_s0__0)*(uint16)256)/weight_sum.stencil(bweight_gpyr_0_s0_x_1, bweight_gpyr_0_s0_y, bweight_gpyr_0_s0__0))
hw_uint<16> hcompute_bweight_gpyr_0_stencil(hw_uint<16>& hw_input_bright_global_wrapper_stencil, hw_uint<16>& weight_sum_stencil) {
  uint16_t _hw_input_bright_global_wrapper_stencil_3 = (uint16_t) hw_input_bright_global_wrapper_stencil.extract<0, 15>();

  uint16_t _weight_sum_stencil_1 = (uint16_t) weight_sum_stencil.extract<0, 15>();

  uint16_t _1169 = (uint16_t)(256);
  uint16_t _1170 = _hw_input_bright_global_wrapper_stencil_3 * _1169;
  uint16_t _1171 = _1170 / _weight_sum_stencil_1;
  return _1171;
}

//store is: dinput_gpyr_gpyr_0.stencil(dinput_gpyr_gpyr_0_s0_x, dinput_gpyr_gpyr_0_s0_y, dinput_gpyr_gpyr_0_s0__0) = hw_input_dark_global_wrapper.stencil(dinput_gpyr_gpyr_0_s0_x, dinput_gpyr_gpyr_0_s0_y, dinput_gpyr_gpyr_0_s0__0)
hw_uint<16> hcompute_dinput_gpyr_gpyr_0_stencil(hw_uint<16>& hw_input_dark_global_wrapper_stencil) {
  uint16_t _hw_input_dark_global_wrapper_stencil_2 = (uint16_t) hw_input_dark_global_wrapper_stencil.extract<0, 15>();

  return _hw_input_dark_global_wrapper_stencil_2;
}

//store is: dinput_gpyr_gpyr_1.stencil(dinput_gpyr_gpyr_1_s0_x, dinput_gpyr_gpyr_1_s0_y, dinput_gpyr_gpyr_1_s0__0) = dinput_gpyr_gpyr_0.stencil((dinput_gpyr_gpyr_1_s0_x*2), (dinput_gpyr_gpyr_1_s0_y*2), dinput_gpyr_gpyr_1_s0__0)
hw_uint<16> hcompute_dinput_gpyr_gpyr_1_stencil(hw_uint<16>& dinput_gpyr_gpyr_0_stencil) {
  uint16_t _dinput_gpyr_gpyr_0_stencil_1 = (uint16_t) dinput_gpyr_gpyr_0_stencil.extract<0, 15>();

  return _dinput_gpyr_gpyr_0_stencil_1;
}

//store is: dinput_lpyr_0.stencil(dinput_lpyr_0_s0_x, dinput_lpyr_0_s0_y, dinput_lpyr_0_s0__0) = (dinput_gpyr_gpyr_0.stencil(dinput_lpyr_0_s0_x, dinput_lpyr_0_s0_y, dinput_lpyr_0_s0__0) - dinput_gpyr_gpyr_1.stencil((dinput_lpyr_0_s0_x/2), (dinput_lpyr_0_s0_y/2), dinput_lpyr_0_s0__0))
hw_uint<16> hcompute_dinput_lpyr_0_stencil(hw_uint<16>& dinput_gpyr_gpyr_0_stencil, hw_uint<16>& dinput_gpyr_gpyr_1_stencil) {
  uint16_t _dinput_gpyr_gpyr_0_stencil_2 = (uint16_t) dinput_gpyr_gpyr_0_stencil.extract<0, 15>();

  uint16_t _dinput_gpyr_gpyr_1_stencil_1 = (uint16_t) dinput_gpyr_gpyr_1_stencil.extract<0, 15>();

  uint16_t _1184 = _dinput_gpyr_gpyr_0_stencil_2 - _dinput_gpyr_gpyr_1_stencil_1;
  return _1184;
}

//store is: dweight_gpyr_0.stencil(dweight_gpyr_0_s0_x, dweight_gpyr_0_s0_y, dweight_gpyr_0_s0__0) = ((hw_input_dark_global_wrapper.stencil(dweight_gpyr_0_s0_x, dweight_gpyr_0_s0_y, dweight_gpyr_0_s0__0)*(uint16)256)/weight_sum.stencil(dweight_gpyr_0_s0_x, dweight_gpyr_0_s0_y, dweight_gpyr_0_s0__0))
hw_uint<16> hcompute_dweight_gpyr_0_stencil(hw_uint<16>& hw_input_dark_global_wrapper_stencil, hw_uint<16>& weight_sum_stencil) {
  uint16_t _hw_input_dark_global_wrapper_stencil_3 = (uint16_t) hw_input_dark_global_wrapper_stencil.extract<0, 15>();

  uint16_t _weight_sum_stencil_2 = (uint16_t) weight_sum_stencil.extract<0, 15>();

  uint16_t _1191 = (uint16_t)(256);
  uint16_t _1192 = _hw_input_dark_global_wrapper_stencil_3 * _1191;
  uint16_t _1193 = _1192 / _weight_sum_stencil_2;
  return _1193;
}

//store is: binput_gpyr_gpyr_2.stencil(binput_gpyr_gpyr_2_s0_x, binput_gpyr_gpyr_2_s0_y, binput_gpyr_gpyr_2_s0__0) = binput_gpyr_gpyr_1.stencil((binput_gpyr_gpyr_2_s0_x*2), (binput_gpyr_gpyr_2_s0_y*2), binput_gpyr_gpyr_2_s0__0)
hw_uint<16> hcompute_binput_gpyr_gpyr_2_stencil(hw_uint<16>& binput_gpyr_gpyr_1_stencil) {
  uint16_t _binput_gpyr_gpyr_1_stencil_2 = (uint16_t) binput_gpyr_gpyr_1_stencil.extract<0, 15>();

  return _binput_gpyr_gpyr_1_stencil_2;
}

//store is: binput_lpyr_1.stencil(binput_lpyr_1_s0_x, binput_lpyr_1_s0_y, binput_lpyr_1_s0__0) = (binput_gpyr_gpyr_1.stencil(binput_lpyr_1_s0_x, binput_lpyr_1_s0_y, binput_lpyr_1_s0__0) - binput_gpyr_gpyr_2.stencil((binput_lpyr_1_s0_x/2), (binput_lpyr_1_s0_y/2), binput_lpyr_1_s0__0))
hw_uint<16> hcompute_binput_lpyr_1_stencil(hw_uint<16>& binput_gpyr_gpyr_1_stencil, hw_uint<16>& binput_gpyr_gpyr_2_stencil) {
  uint16_t _binput_gpyr_gpyr_1_stencil_3 = (uint16_t) binput_gpyr_gpyr_1_stencil.extract<0, 15>();

  uint16_t _binput_gpyr_gpyr_2_stencil_1 = (uint16_t) binput_gpyr_gpyr_2_stencil.extract<0, 15>();

  uint16_t _1205 = _binput_gpyr_gpyr_1_stencil_3 - _binput_gpyr_gpyr_2_stencil_1;
  return _1205;
}

//store is: bweight_gpyr_1.stencil(bweight_gpyr_1_s0_x, bweight_gpyr_1_s0_y, bweight_gpyr_1_s0__0) = bweight_gpyr_0.stencil((bweight_gpyr_1_s0_x*2), (bweight_gpyr_1_s0_y*2), bweight_gpyr_1_s0__0)
hw_uint<16> hcompute_bweight_gpyr_1_stencil(hw_uint<16>& bweight_gpyr_0_stencil) {
  uint16_t _bweight_gpyr_0_stencil_1 = (uint16_t) bweight_gpyr_0_stencil.extract<0, 15>();

  return _bweight_gpyr_0_stencil_1;
}

//store is: dinput_gpyr_gpyr_2.stencil(dinput_gpyr_gpyr_2_s0_x, dinput_gpyr_gpyr_2_s0_y, dinput_gpyr_gpyr_2_s0__0) = dinput_gpyr_gpyr_1.stencil((dinput_gpyr_gpyr_2_s0_x*2), (dinput_gpyr_gpyr_2_s0_y*2), dinput_gpyr_gpyr_2_s0__0)
hw_uint<16> hcompute_dinput_gpyr_gpyr_2_stencil(hw_uint<16>& dinput_gpyr_gpyr_1_stencil) {
  uint16_t _dinput_gpyr_gpyr_1_stencil_2 = (uint16_t) dinput_gpyr_gpyr_1_stencil.extract<0, 15>();

  return _dinput_gpyr_gpyr_1_stencil_2;
}

//store is: dinput_lpyr_1.stencil(dinput_lpyr_1_s0_x, dinput_lpyr_1_s0_y, dinput_lpyr_1_s0__0) = (dinput_gpyr_gpyr_1.stencil(dinput_lpyr_1_s0_x, dinput_lpyr_1_s0_y, dinput_lpyr_1_s0__0) - dinput_gpyr_gpyr_2.stencil((dinput_lpyr_1_s0_x/2), (dinput_lpyr_1_s0_y/2), dinput_lpyr_1_s0__0))
hw_uint<16> hcompute_dinput_lpyr_1_stencil(hw_uint<16>& dinput_gpyr_gpyr_1_stencil, hw_uint<16>& dinput_gpyr_gpyr_2_stencil) {
  uint16_t _dinput_gpyr_gpyr_1_stencil_3 = (uint16_t) dinput_gpyr_gpyr_1_stencil.extract<0, 15>();

  uint16_t _dinput_gpyr_gpyr_2_stencil_1 = (uint16_t) dinput_gpyr_gpyr_2_stencil.extract<0, 15>();

  uint16_t _1218 = _dinput_gpyr_gpyr_1_stencil_3 - _dinput_gpyr_gpyr_2_stencil_1;
  return _1218;
}

//store is: dweight_gpyr_1.stencil(dweight_gpyr_1_s0_x, dweight_gpyr_1_s0_y, dweight_gpyr_1_s0__0) = dweight_gpyr_0.stencil((dweight_gpyr_1_s0_x*2), (dweight_gpyr_1_s0_y*2), dweight_gpyr_1_s0__0)
hw_uint<16> hcompute_dweight_gpyr_1_stencil(hw_uint<16>& dweight_gpyr_0_stencil) {
  uint16_t _dweight_gpyr_0_stencil_1 = (uint16_t) dweight_gpyr_0_stencil.extract<0, 15>();

  return _dweight_gpyr_0_stencil_1;
}

//store is: binput_lpyr_2.stencil(binput_lpyr_2_s0_x, binput_lpyr_2_s0_y, binput_lpyr_2_s0__0) = binput_gpyr_gpyr_2.stencil(binput_lpyr_2_s0_x, binput_lpyr_2_s0_y, binput_lpyr_2_s0__0)
hw_uint<16> hcompute_binput_lpyr_2_stencil(hw_uint<16>& binput_gpyr_gpyr_2_stencil) {
  uint16_t _binput_gpyr_gpyr_2_stencil_2 = (uint16_t) binput_gpyr_gpyr_2_stencil.extract<0, 15>();

  return _binput_gpyr_gpyr_2_stencil_2;
}

//store is: bweight_gpyr_2.stencil(bweight_gpyr_2_s0_x, bweight_gpyr_2_s0_y, bweight_gpyr_2_s0__0) = bweight_gpyr_1.stencil((bweight_gpyr_2_s0_x*2), (bweight_gpyr_2_s0_y*2), bweight_gpyr_2_s0__0)
hw_uint<16> hcompute_bweight_gpyr_2_stencil(hw_uint<16>& bweight_gpyr_1_stencil) {
  uint16_t _bweight_gpyr_1_stencil_1 = (uint16_t) bweight_gpyr_1_stencil.extract<0, 15>();

  return _bweight_gpyr_1_stencil_1;
}

//store is: dinput_lpyr_2.stencil(dinput_lpyr_2_s0_x, dinput_lpyr_2_s0_y, dinput_lpyr_2_s0__0) = dinput_gpyr_gpyr_2.stencil(dinput_lpyr_2_s0_x, dinput_lpyr_2_s0_y, dinput_lpyr_2_s0__0)
hw_uint<16> hcompute_dinput_lpyr_2_stencil(hw_uint<16>& dinput_gpyr_gpyr_2_stencil) {
  uint16_t _dinput_gpyr_gpyr_2_stencil_2 = (uint16_t) dinput_gpyr_gpyr_2_stencil.extract<0, 15>();

  return _dinput_gpyr_gpyr_2_stencil_2;
}

//store is: dweight_gpyr_2.stencil(dweight_gpyr_2_s0_x, dweight_gpyr_2_s0_y, dweight_gpyr_2_s0__0) = dweight_gpyr_1.stencil((dweight_gpyr_2_s0_x*2), (dweight_gpyr_2_s0_y*2), dweight_gpyr_2_s0__0)
hw_uint<16> hcompute_dweight_gpyr_2_stencil(hw_uint<16>& dweight_gpyr_1_stencil) {
  uint16_t _dweight_gpyr_1_stencil_1 = (uint16_t) dweight_gpyr_1_stencil.extract<0, 15>();

  return _dweight_gpyr_1_stencil_1;
}

//store is: merge_pyr_2.stencil(merge_pyr_2_s0_x, merge_pyr_2_s0_y, merge_pyr_2_s0__0) = (((dweight_gpyr_2.stencil(merge_pyr_2_s0_x, merge_pyr_2_s0_y, merge_pyr_2_s0__0)*dinput_lpyr_2.stencil(merge_pyr_2_s0_x, merge_pyr_2_s0_y, merge_pyr_2_s0__0)) + (bweight_gpyr_2.stencil(merge_pyr_2_s0_x, merge_pyr_2_s0_y, merge_pyr_2_s0__0)*binput_lpyr_2.stencil(merge_pyr_2_s0_x, merge_pyr_2_s0_y, merge_pyr_2_s0__0)))/(uint16)128)
hw_uint<16> hcompute_merge_pyr_2_stencil(hw_uint<16>& binput_lpyr_2_stencil, hw_uint<16>& bweight_gpyr_2_stencil, hw_uint<16>& dinput_lpyr_2_stencil, hw_uint<16>& dweight_gpyr_2_stencil) {
  uint16_t _binput_lpyr_2_stencil_1 = (uint16_t) binput_lpyr_2_stencil.extract<0, 15>();

  uint16_t _bweight_gpyr_2_stencil_1 = (uint16_t) bweight_gpyr_2_stencil.extract<0, 15>();

  uint16_t _dinput_lpyr_2_stencil_1 = (uint16_t) dinput_lpyr_2_stencil.extract<0, 15>();

  uint16_t _dweight_gpyr_2_stencil_1 = (uint16_t) dweight_gpyr_2_stencil.extract<0, 15>();

  uint16_t _1236 = _dweight_gpyr_2_stencil_1 * _dinput_lpyr_2_stencil_1;
  uint16_t _1237 = _bweight_gpyr_2_stencil_1 * _binput_lpyr_2_stencil_1;
  uint16_t _1238 = _1236 + _1237;
  uint16_t _1239 = (uint16_t)(7);
  uint16_t _1240 = _1238 >> _1239;
  return _1240;
}

//store is: merge_pyr_1.stencil(merge_pyr_1_s0_x, merge_pyr_1_s0_y, merge_pyr_1_s0__0) = (((dweight_gpyr_1.stencil(merge_pyr_1_s0_x, merge_pyr_1_s0_y, merge_pyr_1_s0__0)*dinput_lpyr_1.stencil(merge_pyr_1_s0_x, merge_pyr_1_s0_y, merge_pyr_1_s0__0)) + (bweight_gpyr_1.stencil(merge_pyr_1_s0_x, merge_pyr_1_s0_y, merge_pyr_1_s0__0)*binput_lpyr_1.stencil(merge_pyr_1_s0_x, merge_pyr_1_s0_y, merge_pyr_1_s0__0)))/(uint16)128)
hw_uint<16> hcompute_merge_pyr_1_stencil(hw_uint<16>& binput_lpyr_1_stencil, hw_uint<16>& bweight_gpyr_1_stencil, hw_uint<16>& dinput_lpyr_1_stencil, hw_uint<16>& dweight_gpyr_1_stencil) {
  uint16_t _binput_lpyr_1_stencil_1 = (uint16_t) binput_lpyr_1_stencil.extract<0, 15>();

  uint16_t _bweight_gpyr_1_stencil_2 = (uint16_t) bweight_gpyr_1_stencil.extract<0, 15>();

  uint16_t _dinput_lpyr_1_stencil_1 = (uint16_t) dinput_lpyr_1_stencil.extract<0, 15>();

  uint16_t _dweight_gpyr_1_stencil_2 = (uint16_t) dweight_gpyr_1_stencil.extract<0, 15>();

  uint16_t _1255 = _dweight_gpyr_1_stencil_2 * _dinput_lpyr_1_stencil_1;
  uint16_t _1256 = _bweight_gpyr_1_stencil_2 * _binput_lpyr_1_stencil_1;
  uint16_t _1257 = _1255 + _1256;
  uint16_t _1258 = (uint16_t)(7);
  uint16_t _1259 = _1257 >> _1258;
  return _1259;
}

//store is: merge_pyr_1.stencil(merge_pyr_1_s1_x, merge_pyr_1_s1_y, merge_pyr_1_s1__0) = (merge_pyr_1.stencil(merge_pyr_1_s1_x, merge_pyr_1_s1_y, merge_pyr_1_s1__0) + merge_pyr_2.stencil((merge_pyr_1_s1_x/2), (merge_pyr_1_s1_y/2), merge_pyr_1_s1__0))
hw_uint<16> hcompute_merge_pyr_1_stencil_1(hw_uint<16>& merge_pyr_1_stencil, hw_uint<16>& merge_pyr_2_stencil) {
  uint16_t _merge_pyr_1_stencil_1 = (uint16_t) merge_pyr_1_stencil.extract<0, 15>();

  uint16_t _merge_pyr_2_stencil_1 = (uint16_t) merge_pyr_2_stencil.extract<0, 15>();

  uint16_t _1274 = _merge_pyr_1_stencil_1 + _merge_pyr_2_stencil_1;
  return _1274;
}

//store is: merge_pyr_0.stencil(merge_pyr_0_s0_x, merge_pyr_0_s0_y, merge_pyr_0_s0__0) = (((dweight_gpyr_0.stencil(merge_pyr_0_s0_x, merge_pyr_0_s0_y, merge_pyr_0_s0__0)*dinput_lpyr_0.stencil(merge_pyr_0_s0_x, merge_pyr_0_s0_y, merge_pyr_0_s0__0)) + (bweight_gpyr_0.stencil(merge_pyr_0_s0_x, merge_pyr_0_s0_y, merge_pyr_0_s0__0)*binput_lpyr_0.stencil(merge_pyr_0_s0_x, merge_pyr_0_s0_y, merge_pyr_0_s0__0)))/(uint16)128)
hw_uint<16> hcompute_merge_pyr_0_stencil(hw_uint<16>& binput_lpyr_0_stencil, hw_uint<16>& bweight_gpyr_0_stencil, hw_uint<16>& dinput_lpyr_0_stencil, hw_uint<16>& dweight_gpyr_0_stencil) {
  uint16_t _binput_lpyr_0_stencil_1 = (uint16_t) binput_lpyr_0_stencil.extract<0, 15>();

  uint16_t _bweight_gpyr_0_stencil_2 = (uint16_t) bweight_gpyr_0_stencil.extract<0, 15>();

  uint16_t _dinput_lpyr_0_stencil_1 = (uint16_t) dinput_lpyr_0_stencil.extract<0, 15>();

  uint16_t _dweight_gpyr_0_stencil_2 = (uint16_t) dweight_gpyr_0_stencil.extract<0, 15>();

  uint16_t _1281 = _dweight_gpyr_0_stencil_2 * _dinput_lpyr_0_stencil_1;
  uint16_t _1282 = _bweight_gpyr_0_stencil_2 * _binput_lpyr_0_stencil_1;
  uint16_t _1283 = _1281 + _1282;
  uint16_t _1284 = (uint16_t)(7);
  uint16_t _1285 = _1283 >> _1284;
  return _1285;
}

//store is: merge_pyr_0.stencil(merge_pyr_0_s1_x, merge_pyr_0_s1_y, merge_pyr_0_s1__0) = (merge_pyr_0.stencil(merge_pyr_0_s1_x, merge_pyr_0_s1_y, merge_pyr_0_s1__0) + merge_pyr_1.stencil((merge_pyr_0_s1_x/2), (merge_pyr_0_s1_y/2), merge_pyr_0_s1__0))
hw_uint<16> hcompute_merge_pyr_0_stencil_1(hw_uint<16>& merge_pyr_0_stencil, hw_uint<16>& merge_pyr_1_stencil) {
  uint16_t _merge_pyr_0_stencil_1 = (uint16_t) merge_pyr_0_stencil.extract<0, 15>();

  uint16_t _merge_pyr_1_stencil_2 = (uint16_t) merge_pyr_1_stencil.extract<0, 15>();

  uint16_t _1300 = _merge_pyr_0_stencil_1 + _merge_pyr_1_stencil_2;
  return _1300;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_c) = merge_pyr_0.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_c)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& merge_pyr_0_stencil) {
  uint16_t _merge_pyr_0_stencil_2 = (uint16_t) merge_pyr_0_stencil.extract<0, 15>();

  return _merge_pyr_0_stencil_2;
}

