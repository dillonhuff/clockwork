#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_bright_global_wrapper.stencil(hw_input_bright_global_wrapper_s0_x, hw_input_bright_global_wrapper_s0_y, hw_input_bright_global_wrapper_s0_c) = hw_input_bright.stencil(hw_input_bright_global_wrapper_s0_x, hw_input_bright_global_wrapper_s0_y, hw_input_bright_global_wrapper_s0_c)
hw_uint<16> hcompute_hw_input_bright_global_wrapper_stencil(hw_uint<16>& hw_input_bright_stencil) {
  uint16_t _hw_input_bright_stencil_1 = (uint16_t) (hw_input_bright_stencil.extract<0, 15>());

  return _hw_input_bright_stencil_1;
}

//store is: binput_gpyr_gpyr_0.stencil(binput_gpyr_gpyr_0_s0_x, binput_gpyr_gpyr_0_s0_y, binput_gpyr_gpyr_0_s0__0) = hw_input_bright_global_wrapper.stencil(binput_gpyr_gpyr_0_s0_x, binput_gpyr_gpyr_0_s0_y, binput_gpyr_gpyr_0_s0__0)
hw_uint<16> hcompute_binput_gpyr_gpyr_0_stencil(hw_uint<16>& hw_input_bright_global_wrapper_stencil) {
  uint16_t _hw_input_bright_global_wrapper_stencil_1 = (uint16_t) (hw_input_bright_global_wrapper_stencil.extract<0, 15>());

  return _hw_input_bright_global_wrapper_stencil_1;
}

//store is: binput_gpyr_gpyr_1.stencil(binput_gpyr_gpyr_1_s0_x, binput_gpyr_gpyr_1_s0_y, binput_gpyr_gpyr_1_s0__0) = ((binput_gpyr_gpyr_0.stencil(((binput_gpyr_gpyr_1_s0_x*2) + 1), (binput_gpyr_gpyr_1_s0_y*2), binput_gpyr_gpyr_1_s0__0) + (binput_gpyr_gpyr_0.stencil((binput_gpyr_gpyr_1_s0_x*2), (binput_gpyr_gpyr_1_s0_y*2), binput_gpyr_gpyr_1_s0__0) + (binput_gpyr_gpyr_0.stencil(((binput_gpyr_gpyr_1_s0_x*2) + 1), ((binput_gpyr_gpyr_1_s0_y*2) + 1), binput_gpyr_gpyr_1_s0__0) + binput_gpyr_gpyr_0.stencil((binput_gpyr_gpyr_1_s0_x*2), ((binput_gpyr_gpyr_1_s0_y*2) + 1), binput_gpyr_gpyr_1_s0__0))))/(uint16)4)
hw_uint<16> hcompute_binput_gpyr_gpyr_1_stencil(hw_uint<64>& binput_gpyr_gpyr_0_stencil) {
  uint16_t _binput_gpyr_gpyr_0_stencil_1 = (uint16_t) (binput_gpyr_gpyr_0_stencil.extract<0, 15>());
  uint16_t _binput_gpyr_gpyr_0_stencil_2 = (uint16_t) (binput_gpyr_gpyr_0_stencil.extract<16, 31>());
  uint16_t _binput_gpyr_gpyr_0_stencil_3 = (uint16_t) (binput_gpyr_gpyr_0_stencil.extract<32, 47>());
  uint16_t _binput_gpyr_gpyr_0_stencil_4 = (uint16_t) (binput_gpyr_gpyr_0_stencil.extract<48, 63>());

  uint16_t _1141 = _binput_gpyr_gpyr_0_stencil_3 + _binput_gpyr_gpyr_0_stencil_4;
  uint16_t _1142 = _binput_gpyr_gpyr_0_stencil_2 + _1141;
  uint16_t _1143 = _binput_gpyr_gpyr_0_stencil_1 + _1142;
  uint16_t _1144 = (uint16_t)(2);
  uint16_t _1145 = _1143 >> _1144;
  return _1145;
}

//store is: binput_gpyr_gpyr_2.stencil(binput_gpyr_gpyr_2_s0_x, binput_gpyr_gpyr_2_s0_y, binput_gpyr_gpyr_2_s0__0) = ((binput_gpyr_gpyr_1.stencil(((binput_gpyr_gpyr_2_s0_x*2) + 1), (binput_gpyr_gpyr_2_s0_y*2), binput_gpyr_gpyr_2_s0__0) + (binput_gpyr_gpyr_1.stencil((binput_gpyr_gpyr_2_s0_x*2), (binput_gpyr_gpyr_2_s0_y*2), binput_gpyr_gpyr_2_s0__0) + (binput_gpyr_gpyr_1.stencil(((binput_gpyr_gpyr_2_s0_x*2) + 1), ((binput_gpyr_gpyr_2_s0_y*2) + 1), binput_gpyr_gpyr_2_s0__0) + binput_gpyr_gpyr_1.stencil((binput_gpyr_gpyr_2_s0_x*2), ((binput_gpyr_gpyr_2_s0_y*2) + 1), binput_gpyr_gpyr_2_s0__0))))/(uint16)4)
hw_uint<16> hcompute_binput_gpyr_gpyr_2_stencil(hw_uint<64>& binput_gpyr_gpyr_1_stencil) {
  uint16_t _binput_gpyr_gpyr_1_stencil_1 = (uint16_t) (binput_gpyr_gpyr_1_stencil.extract<0, 15>());
  uint16_t _binput_gpyr_gpyr_1_stencil_2 = (uint16_t) (binput_gpyr_gpyr_1_stencil.extract<16, 31>());
  uint16_t _binput_gpyr_gpyr_1_stencil_3 = (uint16_t) (binput_gpyr_gpyr_1_stencil.extract<32, 47>());
  uint16_t _binput_gpyr_gpyr_1_stencil_4 = (uint16_t) (binput_gpyr_gpyr_1_stencil.extract<48, 63>());

  uint16_t _1164 = _binput_gpyr_gpyr_1_stencil_3 + _binput_gpyr_gpyr_1_stencil_4;
  uint16_t _1165 = _binput_gpyr_gpyr_1_stencil_2 + _1164;
  uint16_t _1166 = _binput_gpyr_gpyr_1_stencil_1 + _1165;
  uint16_t _1167 = (uint16_t)(2);
  uint16_t _1168 = _1166 >> _1167;
  return _1168;
}

//store is: binput_lpyr_2.stencil(binput_lpyr_2_s0_x, binput_lpyr_2_s0_y, binput_lpyr_2_s0__0) = binput_gpyr_gpyr_2.stencil(binput_lpyr_2_s0_x, binput_lpyr_2_s0_y, binput_lpyr_2_s0__0)
hw_uint<16> hcompute_binput_lpyr_2_stencil(hw_uint<16>& binput_gpyr_gpyr_2_stencil) {
  uint16_t _binput_gpyr_gpyr_2_stencil_1 = (uint16_t) (binput_gpyr_gpyr_2_stencil.extract<0, 15>());

  return _binput_gpyr_gpyr_2_stencil_1;
}

//store is: hw_input_dark_global_wrapper.stencil(hw_input_dark_global_wrapper_s0_x, hw_input_dark_global_wrapper_s0_y, hw_input_dark_global_wrapper_s0_c) = hw_input_dark.stencil(hw_input_dark_global_wrapper_s0_x, hw_input_dark_global_wrapper_s0_y, hw_input_dark_global_wrapper_s0_c)
hw_uint<16> hcompute_hw_input_dark_global_wrapper_stencil(hw_uint<16>& hw_input_dark_stencil) {
  uint16_t _hw_input_dark_stencil_1 = (uint16_t) (hw_input_dark_stencil.extract<0, 15>());

  return _hw_input_dark_stencil_1;
}

//store is: weight_sum.stencil(weight_sum_s0_x, weight_sum_s0_y, weight_sum_s0_c) = ((hw_input_dark_global_wrapper.stencil(weight_sum_s0_x, weight_sum_s0_y, weight_sum_s0_c) + hw_input_bright_global_wrapper.stencil(weight_sum_s0_x, weight_sum_s0_y, weight_sum_s0_c))*(uint16)2)
hw_uint<16> hcompute_weight_sum_stencil(hw_uint<16>& hw_input_bright_global_wrapper_stencil, hw_uint<16>& hw_input_dark_global_wrapper_stencil) {
  uint16_t _hw_input_bright_global_wrapper_stencil_2 = (uint16_t) (hw_input_bright_global_wrapper_stencil.extract<0, 15>());

  uint16_t _hw_input_dark_global_wrapper_stencil_1 = (uint16_t) (hw_input_dark_global_wrapper_stencil.extract<0, 15>());

  uint16_t _1189 = _hw_input_dark_global_wrapper_stencil_1 + _hw_input_bright_global_wrapper_stencil_2;
  uint16_t _1190 = (uint16_t)(2);
  uint16_t _1191 = _1189 * _1190;
  return _1191;
}

//store is: bweight_gpyr_0.stencil(bweight_gpyr_0_s0_x_1, bweight_gpyr_0_s0_y, bweight_gpyr_0_s0__0) = select((weight_sum.stencil(bweight_gpyr_0_s0_x_1, bweight_gpyr_0_s0_y, bweight_gpyr_0_s0__0) == (uint16)0), (uint16)0, ((hw_input_bright_global_wrapper.stencil(bweight_gpyr_0_s0_x_1, bweight_gpyr_0_s0_y, bweight_gpyr_0_s0__0)*(uint16)256)/weight_sum.stencil(bweight_gpyr_0_s0_x_1, bweight_gpyr_0_s0_y, bweight_gpyr_0_s0__0)))
hw_uint<16> hcompute_bweight_gpyr_0_stencil(hw_uint<16>& hw_input_bright_global_wrapper_stencil, hw_uint<16>& weight_sum_stencil) {
  uint16_t _hw_input_bright_global_wrapper_stencil_3 = (uint16_t) (hw_input_bright_global_wrapper_stencil.extract<0, 15>());

  uint16_t _weight_sum_stencil_1 = (uint16_t) (weight_sum_stencil.extract<0, 15>());

  uint16_t _1200 = (uint16_t)(0);
  uint16_t _1201 = (uint16_t)(256);
  uint16_t _1202 = _hw_input_bright_global_wrapper_stencil_3 * _1201;
  uint16_t _1203 = _1202 / _weight_sum_stencil_1;
  bool _1204 = _weight_sum_stencil_1 == _1200;
  uint16_t _1205 = (uint16_t)(_1204 ? _1200 : _1203);
  return _1205;
}

//store is: bweight_gpyr_1.stencil(bweight_gpyr_1_s0_x, bweight_gpyr_1_s0_y, bweight_gpyr_1_s0__0) = ((bweight_gpyr_0.stencil(((bweight_gpyr_1_s0_x*2) + 1), (bweight_gpyr_1_s0_y*2), bweight_gpyr_1_s0__0) + (bweight_gpyr_0.stencil((bweight_gpyr_1_s0_x*2), (bweight_gpyr_1_s0_y*2), bweight_gpyr_1_s0__0) + (bweight_gpyr_0.stencil(((bweight_gpyr_1_s0_x*2) + 1), ((bweight_gpyr_1_s0_y*2) + 1), bweight_gpyr_1_s0__0) + bweight_gpyr_0.stencil((bweight_gpyr_1_s0_x*2), ((bweight_gpyr_1_s0_y*2) + 1), bweight_gpyr_1_s0__0))))/(uint16)4)
hw_uint<16> hcompute_bweight_gpyr_1_stencil(hw_uint<64>& bweight_gpyr_0_stencil) {
  uint16_t _bweight_gpyr_0_stencil_1 = (uint16_t) (bweight_gpyr_0_stencil.extract<0, 15>());
  uint16_t _bweight_gpyr_0_stencil_2 = (uint16_t) (bweight_gpyr_0_stencil.extract<16, 31>());
  uint16_t _bweight_gpyr_0_stencil_3 = (uint16_t) (bweight_gpyr_0_stencil.extract<32, 47>());
  uint16_t _bweight_gpyr_0_stencil_4 = (uint16_t) (bweight_gpyr_0_stencil.extract<48, 63>());

  uint16_t _1220 = _bweight_gpyr_0_stencil_3 + _bweight_gpyr_0_stencil_4;
  uint16_t _1221 = _bweight_gpyr_0_stencil_2 + _1220;
  uint16_t _1222 = _bweight_gpyr_0_stencil_1 + _1221;
  uint16_t _1223 = (uint16_t)(2);
  uint16_t _1224 = _1222 >> _1223;
  return _1224;
}

//store is: bweight_gpyr_2.stencil(bweight_gpyr_2_s0_x, bweight_gpyr_2_s0_y, bweight_gpyr_2_s0__0) = ((bweight_gpyr_1.stencil(((bweight_gpyr_2_s0_x*2) + 1), (bweight_gpyr_2_s0_y*2), bweight_gpyr_2_s0__0) + (bweight_gpyr_1.stencil((bweight_gpyr_2_s0_x*2), (bweight_gpyr_2_s0_y*2), bweight_gpyr_2_s0__0) + (bweight_gpyr_1.stencil(((bweight_gpyr_2_s0_x*2) + 1), ((bweight_gpyr_2_s0_y*2) + 1), bweight_gpyr_2_s0__0) + bweight_gpyr_1.stencil((bweight_gpyr_2_s0_x*2), ((bweight_gpyr_2_s0_y*2) + 1), bweight_gpyr_2_s0__0))))/(uint16)4)
hw_uint<16> hcompute_bweight_gpyr_2_stencil(hw_uint<64>& bweight_gpyr_1_stencil) {
  uint16_t _bweight_gpyr_1_stencil_1 = (uint16_t) (bweight_gpyr_1_stencil.extract<0, 15>());
  uint16_t _bweight_gpyr_1_stencil_2 = (uint16_t) (bweight_gpyr_1_stencil.extract<16, 31>());
  uint16_t _bweight_gpyr_1_stencil_3 = (uint16_t) (bweight_gpyr_1_stencil.extract<32, 47>());
  uint16_t _bweight_gpyr_1_stencil_4 = (uint16_t) (bweight_gpyr_1_stencil.extract<48, 63>());

  uint16_t _1243 = _bweight_gpyr_1_stencil_3 + _bweight_gpyr_1_stencil_4;
  uint16_t _1244 = _bweight_gpyr_1_stencil_2 + _1243;
  uint16_t _1245 = _bweight_gpyr_1_stencil_1 + _1244;
  uint16_t _1246 = (uint16_t)(2);
  uint16_t _1247 = _1245 >> _1246;
  return _1247;
}

//store is: dinput_gpyr_gpyr_0.stencil(dinput_gpyr_gpyr_0_s0_x, dinput_gpyr_gpyr_0_s0_y, dinput_gpyr_gpyr_0_s0__0) = hw_input_dark_global_wrapper.stencil(dinput_gpyr_gpyr_0_s0_x, dinput_gpyr_gpyr_0_s0_y, dinput_gpyr_gpyr_0_s0__0)
hw_uint<16> hcompute_dinput_gpyr_gpyr_0_stencil(hw_uint<16>& hw_input_dark_global_wrapper_stencil) {
  uint16_t _hw_input_dark_global_wrapper_stencil_2 = (uint16_t) (hw_input_dark_global_wrapper_stencil.extract<0, 15>());

  return _hw_input_dark_global_wrapper_stencil_2;
}

//store is: dinput_gpyr_gpyr_1.stencil(dinput_gpyr_gpyr_1_s0_x, dinput_gpyr_gpyr_1_s0_y, dinput_gpyr_gpyr_1_s0__0) = ((dinput_gpyr_gpyr_0.stencil(((dinput_gpyr_gpyr_1_s0_x*2) + 1), (dinput_gpyr_gpyr_1_s0_y*2), dinput_gpyr_gpyr_1_s0__0) + (dinput_gpyr_gpyr_0.stencil((dinput_gpyr_gpyr_1_s0_x*2), (dinput_gpyr_gpyr_1_s0_y*2), dinput_gpyr_gpyr_1_s0__0) + (dinput_gpyr_gpyr_0.stencil(((dinput_gpyr_gpyr_1_s0_x*2) + 1), ((dinput_gpyr_gpyr_1_s0_y*2) + 1), dinput_gpyr_gpyr_1_s0__0) + dinput_gpyr_gpyr_0.stencil((dinput_gpyr_gpyr_1_s0_x*2), ((dinput_gpyr_gpyr_1_s0_y*2) + 1), dinput_gpyr_gpyr_1_s0__0))))/(uint16)4)
hw_uint<16> hcompute_dinput_gpyr_gpyr_1_stencil(hw_uint<64>& dinput_gpyr_gpyr_0_stencil) {
  uint16_t _dinput_gpyr_gpyr_0_stencil_1 = (uint16_t) (dinput_gpyr_gpyr_0_stencil.extract<0, 15>());
  uint16_t _dinput_gpyr_gpyr_0_stencil_2 = (uint16_t) (dinput_gpyr_gpyr_0_stencil.extract<16, 31>());
  uint16_t _dinput_gpyr_gpyr_0_stencil_3 = (uint16_t) (dinput_gpyr_gpyr_0_stencil.extract<32, 47>());
  uint16_t _dinput_gpyr_gpyr_0_stencil_4 = (uint16_t) (dinput_gpyr_gpyr_0_stencil.extract<48, 63>());

  uint16_t _1267 = _dinput_gpyr_gpyr_0_stencil_3 + _dinput_gpyr_gpyr_0_stencil_4;
  uint16_t _1268 = _dinput_gpyr_gpyr_0_stencil_2 + _1267;
  uint16_t _1269 = _dinput_gpyr_gpyr_0_stencil_1 + _1268;
  uint16_t _1270 = (uint16_t)(2);
  uint16_t _1271 = _1269 >> _1270;
  return _1271;
}

//store is: dinput_gpyr_gpyr_2.stencil(dinput_gpyr_gpyr_2_s0_x, dinput_gpyr_gpyr_2_s0_y, dinput_gpyr_gpyr_2_s0__0) = ((dinput_gpyr_gpyr_1.stencil(((dinput_gpyr_gpyr_2_s0_x*2) + 1), (dinput_gpyr_gpyr_2_s0_y*2), dinput_gpyr_gpyr_2_s0__0) + (dinput_gpyr_gpyr_1.stencil((dinput_gpyr_gpyr_2_s0_x*2), (dinput_gpyr_gpyr_2_s0_y*2), dinput_gpyr_gpyr_2_s0__0) + (dinput_gpyr_gpyr_1.stencil(((dinput_gpyr_gpyr_2_s0_x*2) + 1), ((dinput_gpyr_gpyr_2_s0_y*2) + 1), dinput_gpyr_gpyr_2_s0__0) + dinput_gpyr_gpyr_1.stencil((dinput_gpyr_gpyr_2_s0_x*2), ((dinput_gpyr_gpyr_2_s0_y*2) + 1), dinput_gpyr_gpyr_2_s0__0))))/(uint16)4)
hw_uint<16> hcompute_dinput_gpyr_gpyr_2_stencil(hw_uint<64>& dinput_gpyr_gpyr_1_stencil) {
  uint16_t _dinput_gpyr_gpyr_1_stencil_1 = (uint16_t) (dinput_gpyr_gpyr_1_stencil.extract<0, 15>());
  uint16_t _dinput_gpyr_gpyr_1_stencil_2 = (uint16_t) (dinput_gpyr_gpyr_1_stencil.extract<16, 31>());
  uint16_t _dinput_gpyr_gpyr_1_stencil_3 = (uint16_t) (dinput_gpyr_gpyr_1_stencil.extract<32, 47>());
  uint16_t _dinput_gpyr_gpyr_1_stencil_4 = (uint16_t) (dinput_gpyr_gpyr_1_stencil.extract<48, 63>());

  uint16_t _1290 = _dinput_gpyr_gpyr_1_stencil_3 + _dinput_gpyr_gpyr_1_stencil_4;
  uint16_t _1291 = _dinput_gpyr_gpyr_1_stencil_2 + _1290;
  uint16_t _1292 = _dinput_gpyr_gpyr_1_stencil_1 + _1291;
  uint16_t _1293 = (uint16_t)(2);
  uint16_t _1294 = _1292 >> _1293;
  return _1294;
}

//store is: dinput_lpyr_2.stencil(dinput_lpyr_2_s0_x, dinput_lpyr_2_s0_y, dinput_lpyr_2_s0__0) = dinput_gpyr_gpyr_2.stencil(dinput_lpyr_2_s0_x, dinput_lpyr_2_s0_y, dinput_lpyr_2_s0__0)
hw_uint<16> hcompute_dinput_lpyr_2_stencil(hw_uint<16>& dinput_gpyr_gpyr_2_stencil) {
  uint16_t _dinput_gpyr_gpyr_2_stencil_1 = (uint16_t) (dinput_gpyr_gpyr_2_stencil.extract<0, 15>());

  return _dinput_gpyr_gpyr_2_stencil_1;
}

//store is: dweight_gpyr_0.stencil(dweight_gpyr_0_s0_x, dweight_gpyr_0_s0_y, dweight_gpyr_0_s0__0) = select((weight_sum.stencil(dweight_gpyr_0_s0_x, dweight_gpyr_0_s0_y, dweight_gpyr_0_s0__0) == (uint16)0), (uint16)0, ((hw_input_dark_global_wrapper.stencil(dweight_gpyr_0_s0_x, dweight_gpyr_0_s0_y, dweight_gpyr_0_s0__0)*(uint16)256)/weight_sum.stencil(dweight_gpyr_0_s0_x, dweight_gpyr_0_s0_y, dweight_gpyr_0_s0__0)))
hw_uint<16> hcompute_dweight_gpyr_0_stencil(hw_uint<16>& hw_input_dark_global_wrapper_stencil, hw_uint<16>& weight_sum_stencil) {
  uint16_t _hw_input_dark_global_wrapper_stencil_3 = (uint16_t) (hw_input_dark_global_wrapper_stencil.extract<0, 15>());

  uint16_t _weight_sum_stencil_2 = (uint16_t) (weight_sum_stencil.extract<0, 15>());

  uint16_t _1314 = (uint16_t)(0);
  uint16_t _1315 = (uint16_t)(256);
  uint16_t _1316 = _hw_input_dark_global_wrapper_stencil_3 * _1315;
  uint16_t _1317 = _1316 / _weight_sum_stencil_2;
  bool _1318 = _weight_sum_stencil_2 == _1314;
  uint16_t _1319 = (uint16_t)(_1318 ? _1314 : _1317);
  return _1319;
}

//store is: dweight_gpyr_1.stencil(dweight_gpyr_1_s0_x, dweight_gpyr_1_s0_y, dweight_gpyr_1_s0__0) = ((dweight_gpyr_0.stencil(((dweight_gpyr_1_s0_x*2) + 1), (dweight_gpyr_1_s0_y*2), dweight_gpyr_1_s0__0) + (dweight_gpyr_0.stencil((dweight_gpyr_1_s0_x*2), (dweight_gpyr_1_s0_y*2), dweight_gpyr_1_s0__0) + (dweight_gpyr_0.stencil(((dweight_gpyr_1_s0_x*2) + 1), ((dweight_gpyr_1_s0_y*2) + 1), dweight_gpyr_1_s0__0) + dweight_gpyr_0.stencil((dweight_gpyr_1_s0_x*2), ((dweight_gpyr_1_s0_y*2) + 1), dweight_gpyr_1_s0__0))))/(uint16)4)
hw_uint<16> hcompute_dweight_gpyr_1_stencil(hw_uint<64>& dweight_gpyr_0_stencil) {
  uint16_t _dweight_gpyr_0_stencil_1 = (uint16_t) (dweight_gpyr_0_stencil.extract<0, 15>());
  uint16_t _dweight_gpyr_0_stencil_2 = (uint16_t) (dweight_gpyr_0_stencil.extract<16, 31>());
  uint16_t _dweight_gpyr_0_stencil_3 = (uint16_t) (dweight_gpyr_0_stencil.extract<32, 47>());
  uint16_t _dweight_gpyr_0_stencil_4 = (uint16_t) (dweight_gpyr_0_stencil.extract<48, 63>());

  uint16_t _1334 = _dweight_gpyr_0_stencil_3 + _dweight_gpyr_0_stencil_4;
  uint16_t _1335 = _dweight_gpyr_0_stencil_2 + _1334;
  uint16_t _1336 = _dweight_gpyr_0_stencil_1 + _1335;
  uint16_t _1337 = (uint16_t)(2);
  uint16_t _1338 = _1336 >> _1337;
  return _1338;
}

//store is: dweight_gpyr_2.stencil(dweight_gpyr_2_s0_x, dweight_gpyr_2_s0_y, dweight_gpyr_2_s0__0) = ((dweight_gpyr_1.stencil(((dweight_gpyr_2_s0_x*2) + 1), (dweight_gpyr_2_s0_y*2), dweight_gpyr_2_s0__0) + (dweight_gpyr_1.stencil((dweight_gpyr_2_s0_x*2), (dweight_gpyr_2_s0_y*2), dweight_gpyr_2_s0__0) + (dweight_gpyr_1.stencil(((dweight_gpyr_2_s0_x*2) + 1), ((dweight_gpyr_2_s0_y*2) + 1), dweight_gpyr_2_s0__0) + dweight_gpyr_1.stencil((dweight_gpyr_2_s0_x*2), ((dweight_gpyr_2_s0_y*2) + 1), dweight_gpyr_2_s0__0))))/(uint16)4)
hw_uint<16> hcompute_dweight_gpyr_2_stencil(hw_uint<64>& dweight_gpyr_1_stencil) {
  uint16_t _dweight_gpyr_1_stencil_1 = (uint16_t) (dweight_gpyr_1_stencil.extract<0, 15>());
  uint16_t _dweight_gpyr_1_stencil_2 = (uint16_t) (dweight_gpyr_1_stencil.extract<16, 31>());
  uint16_t _dweight_gpyr_1_stencil_3 = (uint16_t) (dweight_gpyr_1_stencil.extract<32, 47>());
  uint16_t _dweight_gpyr_1_stencil_4 = (uint16_t) (dweight_gpyr_1_stencil.extract<48, 63>());

  uint16_t _1357 = _dweight_gpyr_1_stencil_3 + _dweight_gpyr_1_stencil_4;
  uint16_t _1358 = _dweight_gpyr_1_stencil_2 + _1357;
  uint16_t _1359 = _dweight_gpyr_1_stencil_1 + _1358;
  uint16_t _1360 = (uint16_t)(2);
  uint16_t _1361 = _1359 >> _1360;
  return _1361;
}

//store is: merge_pyr_2.stencil(merge_pyr_2_s0_x, merge_pyr_2_s0_y, merge_pyr_2_s0__0) = (((dweight_gpyr_2.stencil(merge_pyr_2_s0_x, merge_pyr_2_s0_y, merge_pyr_2_s0__0)*dinput_lpyr_2.stencil(merge_pyr_2_s0_x, merge_pyr_2_s0_y, merge_pyr_2_s0__0)) + (bweight_gpyr_2.stencil(merge_pyr_2_s0_x, merge_pyr_2_s0_y, merge_pyr_2_s0__0)*binput_lpyr_2.stencil(merge_pyr_2_s0_x, merge_pyr_2_s0_y, merge_pyr_2_s0__0)))/(uint16)128)
hw_uint<16> hcompute_merge_pyr_2_stencil(hw_uint<16>& binput_lpyr_2_stencil, hw_uint<16>& bweight_gpyr_2_stencil, hw_uint<16>& dinput_lpyr_2_stencil, hw_uint<16>& dweight_gpyr_2_stencil) {
  uint16_t _binput_lpyr_2_stencil_1 = (uint16_t) (binput_lpyr_2_stencil.extract<0, 15>());

  uint16_t _bweight_gpyr_2_stencil_1 = (uint16_t) (bweight_gpyr_2_stencil.extract<0, 15>());

  uint16_t _dinput_lpyr_2_stencil_1 = (uint16_t) (dinput_lpyr_2_stencil.extract<0, 15>());

  uint16_t _dweight_gpyr_2_stencil_1 = (uint16_t) (dweight_gpyr_2_stencil.extract<0, 15>());

  uint16_t _1380 = _dweight_gpyr_2_stencil_1 * _dinput_lpyr_2_stencil_1;
  uint16_t _1381 = _bweight_gpyr_2_stencil_1 * _binput_lpyr_2_stencil_1;
  uint16_t _1382 = _1380 + _1381;
  uint16_t _1383 = (uint16_t)(7);
  uint16_t _1384 = _1382 >> _1383;
  return _1384;
}

//store is: binput_lpyr_1.stencil(binput_lpyr_1_s0_x, binput_lpyr_1_s0_y, binput_lpyr_1_s0__0) = (binput_gpyr_gpyr_1.stencil(binput_lpyr_1_s0_x, binput_lpyr_1_s0_y, binput_lpyr_1_s0__0) - binput_gpyr_gpyr_2.stencil((binput_lpyr_1_s0_x/2), (binput_lpyr_1_s0_y/2), binput_lpyr_1_s0__0))
hw_uint<16> hcompute_binput_lpyr_1_stencil(hw_uint<16>& binput_gpyr_gpyr_1_stencil, hw_uint<16>& binput_gpyr_gpyr_2_stencil) {
  uint16_t _binput_gpyr_gpyr_1_stencil_5 = (uint16_t) (binput_gpyr_gpyr_1_stencil.extract<0, 15>());

  uint16_t _binput_gpyr_gpyr_2_stencil_2 = (uint16_t) (binput_gpyr_gpyr_2_stencil.extract<0, 15>());

  uint16_t _1399 = _binput_gpyr_gpyr_1_stencil_5 - _binput_gpyr_gpyr_2_stencil_2;
  return _1399;
}

//store is: dinput_lpyr_1.stencil(dinput_lpyr_1_s0_x, dinput_lpyr_1_s0_y, dinput_lpyr_1_s0__0) = (dinput_gpyr_gpyr_1.stencil(dinput_lpyr_1_s0_x, dinput_lpyr_1_s0_y, dinput_lpyr_1_s0__0) - dinput_gpyr_gpyr_2.stencil((dinput_lpyr_1_s0_x/2), (dinput_lpyr_1_s0_y/2), dinput_lpyr_1_s0__0))
hw_uint<16> hcompute_dinput_lpyr_1_stencil(hw_uint<16>& dinput_gpyr_gpyr_1_stencil, hw_uint<16>& dinput_gpyr_gpyr_2_stencil) {
  uint16_t _dinput_gpyr_gpyr_1_stencil_5 = (uint16_t) (dinput_gpyr_gpyr_1_stencil.extract<0, 15>());

  uint16_t _dinput_gpyr_gpyr_2_stencil_2 = (uint16_t) (dinput_gpyr_gpyr_2_stencil.extract<0, 15>());

  uint16_t _1406 = _dinput_gpyr_gpyr_1_stencil_5 - _dinput_gpyr_gpyr_2_stencil_2;
  return _1406;
}

//store is: flattened_1.stencil(flattened_1_s0_x, flattened_1_s0_y, flattened_1_s0__0) = (merge_pyr_2.stencil((flattened_1_s0_x/2), (flattened_1_s0_y/2), flattened_1_s0__0) + (((dweight_gpyr_1.stencil(flattened_1_s0_x, flattened_1_s0_y, flattened_1_s0__0)*dinput_lpyr_1.stencil(flattened_1_s0_x, flattened_1_s0_y, flattened_1_s0__0)) + (bweight_gpyr_1.stencil(flattened_1_s0_x, flattened_1_s0_y, flattened_1_s0__0)*binput_lpyr_1.stencil(flattened_1_s0_x, flattened_1_s0_y, flattened_1_s0__0)))/(uint16)128))
hw_uint<16> hcompute_flattened_1_stencil(hw_uint<16>& binput_lpyr_1_stencil, hw_uint<16>& bweight_gpyr_1_stencil, hw_uint<16>& dinput_lpyr_1_stencil, hw_uint<16>& dweight_gpyr_1_stencil, hw_uint<16>& merge_pyr_2_stencil) {
  uint16_t _binput_lpyr_1_stencil_1 = (uint16_t) (binput_lpyr_1_stencil.extract<0, 15>());

  uint16_t _bweight_gpyr_1_stencil_5 = (uint16_t) (bweight_gpyr_1_stencil.extract<0, 15>());

  uint16_t _dinput_lpyr_1_stencil_1 = (uint16_t) (dinput_lpyr_1_stencil.extract<0, 15>());

  uint16_t _dweight_gpyr_1_stencil_5 = (uint16_t) (dweight_gpyr_1_stencil.extract<0, 15>());

  uint16_t _merge_pyr_2_stencil_1 = (uint16_t) (merge_pyr_2_stencil.extract<0, 15>());

  uint16_t _1413 = _dweight_gpyr_1_stencil_5 * _dinput_lpyr_1_stencil_1;
  uint16_t _1414 = _bweight_gpyr_1_stencil_5 * _binput_lpyr_1_stencil_1;
  uint16_t _1415 = _1413 + _1414;
  uint16_t _1416 = (uint16_t)(7);
  uint16_t _1417 = _1415 >> _1416;
  uint16_t _1418 = _merge_pyr_2_stencil_1 + _1417;
  return _1418;
}

//store is: binput_lpyr_0.stencil(binput_lpyr_0_s0_x, binput_lpyr_0_s0_y, binput_lpyr_0_s0__0) = (binput_gpyr_gpyr_0.stencil(binput_lpyr_0_s0_x, binput_lpyr_0_s0_y, binput_lpyr_0_s0__0) - binput_gpyr_gpyr_1.stencil((binput_lpyr_0_s0_x/2), (binput_lpyr_0_s0_y/2), binput_lpyr_0_s0__0))
hw_uint<16> hcompute_binput_lpyr_0_stencil(hw_uint<16>& binput_gpyr_gpyr_0_stencil, hw_uint<16>& binput_gpyr_gpyr_1_stencil) {
  uint16_t _binput_gpyr_gpyr_0_stencil_5 = (uint16_t) (binput_gpyr_gpyr_0_stencil.extract<0, 15>());

  uint16_t _binput_gpyr_gpyr_1_stencil_6 = (uint16_t) (binput_gpyr_gpyr_1_stencil.extract<0, 15>());

  uint16_t _1438 = _binput_gpyr_gpyr_0_stencil_5 - _binput_gpyr_gpyr_1_stencil_6;
  return _1438;
}

//store is: dinput_lpyr_0.stencil(dinput_lpyr_0_s0_x, dinput_lpyr_0_s0_y, dinput_lpyr_0_s0__0) = (dinput_gpyr_gpyr_0.stencil(dinput_lpyr_0_s0_x, dinput_lpyr_0_s0_y, dinput_lpyr_0_s0__0) - dinput_gpyr_gpyr_1.stencil((dinput_lpyr_0_s0_x/2), (dinput_lpyr_0_s0_y/2), dinput_lpyr_0_s0__0))
hw_uint<16> hcompute_dinput_lpyr_0_stencil(hw_uint<16>& dinput_gpyr_gpyr_0_stencil, hw_uint<16>& dinput_gpyr_gpyr_1_stencil) {
  uint16_t _dinput_gpyr_gpyr_0_stencil_5 = (uint16_t) (dinput_gpyr_gpyr_0_stencil.extract<0, 15>());

  uint16_t _dinput_gpyr_gpyr_1_stencil_6 = (uint16_t) (dinput_gpyr_gpyr_1_stencil.extract<0, 15>());

  uint16_t _1445 = _dinput_gpyr_gpyr_0_stencil_5 - _dinput_gpyr_gpyr_1_stencil_6;
  return _1445;
}

//store is: flattened_0.stencil(flattened_0_s0_x, flattened_0_s0_y, flattened_0_s0__0) = (flattened_1.stencil((flattened_0_s0_x/2), (flattened_0_s0_y/2), flattened_0_s0__0) + (((dweight_gpyr_0.stencil(flattened_0_s0_x, flattened_0_s0_y, flattened_0_s0__0)*dinput_lpyr_0.stencil(flattened_0_s0_x, flattened_0_s0_y, flattened_0_s0__0)) + (bweight_gpyr_0.stencil(flattened_0_s0_x, flattened_0_s0_y, flattened_0_s0__0)*binput_lpyr_0.stencil(flattened_0_s0_x, flattened_0_s0_y, flattened_0_s0__0)))/(uint16)128))
hw_uint<16> hcompute_flattened_0_stencil(hw_uint<16>& binput_lpyr_0_stencil, hw_uint<16>& bweight_gpyr_0_stencil, hw_uint<16>& dinput_lpyr_0_stencil, hw_uint<16>& dweight_gpyr_0_stencil, hw_uint<16>& flattened_1_stencil) {
  uint16_t _binput_lpyr_0_stencil_1 = (uint16_t) (binput_lpyr_0_stencil.extract<0, 15>());

  uint16_t _bweight_gpyr_0_stencil_5 = (uint16_t) (bweight_gpyr_0_stencil.extract<0, 15>());

  uint16_t _dinput_lpyr_0_stencil_1 = (uint16_t) (dinput_lpyr_0_stencil.extract<0, 15>());

  uint16_t _dweight_gpyr_0_stencil_5 = (uint16_t) (dweight_gpyr_0_stencil.extract<0, 15>());

  uint16_t _flattened_1_stencil_1 = (uint16_t) (flattened_1_stencil.extract<0, 15>());

  uint16_t _1452 = _dweight_gpyr_0_stencil_5 * _dinput_lpyr_0_stencil_1;
  uint16_t _1453 = _bweight_gpyr_0_stencil_5 * _binput_lpyr_0_stencil_1;
  uint16_t _1454 = _1452 + _1453;
  uint16_t _1455 = (uint16_t)(7);
  uint16_t _1456 = _1454 >> _1455;
  uint16_t _1457 = _flattened_1_stencil_1 + _1456;
  return _1457;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_c) = flattened_0.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_c)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& flattened_0_stencil) {
  uint16_t _flattened_0_stencil_1 = (uint16_t) (flattened_0_stencil.extract<0, 15>());

  return _flattened_0_stencil_1;
}

