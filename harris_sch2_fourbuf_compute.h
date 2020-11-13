#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: padded16_global_wrapper.stencil(padded16_global_wrapper_s0_x, padded16_global_wrapper_s0_y) = padded16.stencil(padded16_global_wrapper_s0_x, padded16_global_wrapper_s0_y)
hw_uint<16> hcompute_padded16_global_wrapper_stencil(hw_uint<16>& padded16_stencil) {
  int16_t _padded16_stencil_1 = (int16_t) padded16_stencil.extract<0, 15>();

  return _padded16_stencil_1;
}

//store is: lgxx.stencil(lgxx_s0_x, lgxx_s0_y) = (int16)0
hw_uint<16> hcompute_lgxx_stencil() {
  int16_t _261 = (int16_t)(0);
  return _261;
}

//store is: lgxx.stencil(lgxx_s1_x, lgxx_s1_y) = (lgxx.stencil(lgxx_s1_x, lgxx_s1_y) + ((max(min(((((padded16_global_wrapper.stencil(((lgxx_s1_box_x + lgxx_s1_x) + 1), ((lgxx_s1_box_y + lgxx_s1_y) + -1)) + (padded16_global_wrapper.stencil(((lgxx_s1_box_x + lgxx_s1_x) + 1), ((lgxx_s1_box_y + lgxx_s1_y) + 1)) + (padded16_global_wrapper.stencil(((lgxx_s1_box_x + lgxx_s1_x) + 1), (lgxx_s1_box_y + lgxx_s1_y))*(int16)2))) - padded16_global_wrapper.stencil(((lgxx_s1_box_x + lgxx_s1_x) + -1), ((lgxx_s1_box_y + lgxx_s1_y) + -1))) - (padded16_global_wrapper.stencil(((lgxx_s1_box_x + lgxx_s1_x) + -1), (lgxx_s1_box_y + lgxx_s1_y))*(int16)2)) - padded16_global_wrapper.stencil(((lgxx_s1_box_x + lgxx_s1_x) + -1), ((lgxx_s1_box_y + lgxx_s1_y) + 1))), (int16)180), (int16)-180)*max(min(((((padded16_global_wrapper.stencil(((lgxx_s1_box_x + lgxx_s1_x) + 1), ((lgxx_s1_box_y + lgxx_s1_y) + -1)) + (padded16_global_wrapper.stencil(((lgxx_s1_box_x + lgxx_s1_x) + 1), ((lgxx_s1_box_y + lgxx_s1_y) + 1)) + (padded16_global_wrapper.stencil(((lgxx_s1_box_x + lgxx_s1_x) + 1), (lgxx_s1_box_y + lgxx_s1_y))*(int16)2))) - padded16_global_wrapper.stencil(((lgxx_s1_box_x + lgxx_s1_x) + -1), ((lgxx_s1_box_y + lgxx_s1_y) + -1))) - (padded16_global_wrapper.stencil(((lgxx_s1_box_x + lgxx_s1_x) + -1), (lgxx_s1_box_y + lgxx_s1_y))*(int16)2)) - padded16_global_wrapper.stencil(((lgxx_s1_box_x + lgxx_s1_x) + -1), ((lgxx_s1_box_y + lgxx_s1_y) + 1))), (int16)180), (int16)-180))/(int16)64))
hw_uint<16> hcompute_lgxx_stencil_1(hw_uint<16>& lgxx_stencil, hw_uint<96>& padded16_global_wrapper_stencil) {
  int16_t _lgxx_stencil_1 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _padded16_global_wrapper_stencil_1 = (int16_t) padded16_global_wrapper_stencil.extract<0, 15>();
  int16_t _padded16_global_wrapper_stencil_2 = (int16_t) padded16_global_wrapper_stencil.extract<16, 31>();
  int16_t _padded16_global_wrapper_stencil_3 = (int16_t) padded16_global_wrapper_stencil.extract<32, 47>();
  int16_t _padded16_global_wrapper_stencil_4 = (int16_t) padded16_global_wrapper_stencil.extract<48, 63>();
  int16_t _padded16_global_wrapper_stencil_5 = (int16_t) padded16_global_wrapper_stencil.extract<64, 79>();
  int16_t _padded16_global_wrapper_stencil_6 = (int16_t) padded16_global_wrapper_stencil.extract<80, 95>();

  int16_t _264 = (int16_t)(2);
  int16_t _265 = _padded16_global_wrapper_stencil_3 * _264;
  int16_t _266 = _padded16_global_wrapper_stencil_2 + _265;
  int16_t _267 = _padded16_global_wrapper_stencil_1 + _266;
  int16_t _268 = _267 - _padded16_global_wrapper_stencil_4;
  int16_t _269 = _padded16_global_wrapper_stencil_5 * _264;
  int16_t _270 = _268 - _269;
  int16_t _271 = _270 - _padded16_global_wrapper_stencil_6;
  int16_t _272 = (int16_t)(180);
  int16_t _273 = min(_271, _272);
  int16_t _274 = (int16_t)(-180);
  int16_t _275 = max(_273, _274);
  int16_t _276 = _275 * _275;
  int16_t _277 = (int16_t)(6);
  int16_t _278 = _276 >> _277;
  int16_t _279 = _lgxx_stencil_1 + _278;
  return _279;
}

//store is: lgxy.stencil(lgxy_s0_x, lgxy_s0_y) = (int16)0
hw_uint<16> hcompute_lgxy_stencil() {
  int16_t _325 = (int16_t)(0);
  return _325;
}

//store is: lgxy.stencil(lgxy_s1_x, lgxy_s1_y) = (lgxy.stencil(lgxy_s1_x, lgxy_s1_y) + ((max(min(((((padded16_global_wrapper.stencil(((lgxy_s1_box_x + lgxy_s1_x) + 1), ((lgxy_s1_box_y + lgxy_s1_y) + -1)) + (padded16_global_wrapper.stencil(((lgxy_s1_box_x + lgxy_s1_x) + 1), ((lgxy_s1_box_y + lgxy_s1_y) + 1)) + (padded16_global_wrapper.stencil(((lgxy_s1_box_x + lgxy_s1_x) + 1), (lgxy_s1_box_y + lgxy_s1_y))*(int16)2))) - padded16_global_wrapper.stencil(((lgxy_s1_box_x + lgxy_s1_x) + -1), ((lgxy_s1_box_y + lgxy_s1_y) + -1))) - (padded16_global_wrapper.stencil(((lgxy_s1_box_x + lgxy_s1_x) + -1), (lgxy_s1_box_y + lgxy_s1_y))*(int16)2)) - padded16_global_wrapper.stencil(((lgxy_s1_box_x + lgxy_s1_x) + -1), ((lgxy_s1_box_y + lgxy_s1_y) + 1))), (int16)180), (int16)-180)*max(min(((((padded16_global_wrapper.stencil(((lgxy_s1_box_x + lgxy_s1_x) + -1), ((lgxy_s1_box_y + lgxy_s1_y) + 1)) + (padded16_global_wrapper.stencil(((lgxy_s1_box_x + lgxy_s1_x) + 1), ((lgxy_s1_box_y + lgxy_s1_y) + 1)) + (padded16_global_wrapper.stencil((lgxy_s1_box_x + lgxy_s1_x), ((lgxy_s1_box_y + lgxy_s1_y) + 1))*(int16)2))) - padded16_global_wrapper.stencil(((lgxy_s1_box_x + lgxy_s1_x) + -1), ((lgxy_s1_box_y + lgxy_s1_y) + -1))) - (padded16_global_wrapper.stencil((lgxy_s1_box_x + lgxy_s1_x), ((lgxy_s1_box_y + lgxy_s1_y) + -1))*(int16)2)) - padded16_global_wrapper.stencil(((lgxy_s1_box_x + lgxy_s1_x) + 1), ((lgxy_s1_box_y + lgxy_s1_y) + -1))), (int16)180), (int16)-180))/(int16)64))
hw_uint<16> hcompute_lgxy_stencil_1(hw_uint<16>& lgxy_stencil, hw_uint<128>& padded16_global_wrapper_stencil) {
  int16_t _lgxy_stencil_1 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _padded16_global_wrapper_stencil_10 = (int16_t) padded16_global_wrapper_stencil.extract<0, 15>();
  int16_t _padded16_global_wrapper_stencil_11 = (int16_t) padded16_global_wrapper_stencil.extract<16, 31>();
  int16_t _padded16_global_wrapper_stencil_12 = (int16_t) padded16_global_wrapper_stencil.extract<32, 47>();
  int16_t _padded16_global_wrapper_stencil_13 = (int16_t) padded16_global_wrapper_stencil.extract<48, 63>();
  int16_t _padded16_global_wrapper_stencil_14 = (int16_t) padded16_global_wrapper_stencil.extract<64, 79>();
  int16_t _padded16_global_wrapper_stencil_7 = (int16_t) padded16_global_wrapper_stencil.extract<80, 95>();
  int16_t _padded16_global_wrapper_stencil_8 = (int16_t) padded16_global_wrapper_stencil.extract<96, 111>();
  int16_t _padded16_global_wrapper_stencil_9 = (int16_t) padded16_global_wrapper_stencil.extract<112, 127>();

  int16_t _328 = (int16_t)(2);
  int16_t _329 = _padded16_global_wrapper_stencil_9 * _328;
  int16_t _330 = _padded16_global_wrapper_stencil_8 + _329;
  int16_t _331 = _padded16_global_wrapper_stencil_7 + _330;
  int16_t _332 = _331 - _padded16_global_wrapper_stencil_10;
  int16_t _333 = _padded16_global_wrapper_stencil_11 * _328;
  int16_t _334 = _332 - _333;
  int16_t _335 = _334 - _padded16_global_wrapper_stencil_12;
  int16_t _336 = (int16_t)(180);
  int16_t _337 = min(_335, _336);
  int16_t _338 = (int16_t)(-180);
  int16_t _339 = max(_337, _338);
  int16_t _340 = _padded16_global_wrapper_stencil_13 * _328;
  int16_t _341 = _padded16_global_wrapper_stencil_8 + _340;
  int16_t _342 = _padded16_global_wrapper_stencil_12 + _341;
  int16_t _343 = _342 - _padded16_global_wrapper_stencil_10;
  int16_t _344 = _padded16_global_wrapper_stencil_14 * _328;
  int16_t _345 = _343 - _344;
  int16_t _346 = _345 - _padded16_global_wrapper_stencil_7;
  int16_t _347 = min(_346, _336);
  int16_t _348 = max(_347, _338);
  int16_t _349 = _339 * _348;
  int16_t _350 = (int16_t)(6);
  int16_t _351 = _349 >> _350;
  int16_t _352 = _lgxy_stencil_1 + _351;
  return _352;
}

//store is: lgyy.stencil(lgyy_s0_x, lgyy_s0_y) = (int16)0
hw_uint<16> hcompute_lgyy_stencil() {
  int16_t _418 = (int16_t)(0);
  return _418;
}

//store is: lgyy.stencil(lgyy_s1_x, lgyy_s1_y) = (lgyy.stencil(lgyy_s1_x, lgyy_s1_y) + ((max(min(((((padded16_global_wrapper.stencil(((lgyy_s1_box_x + lgyy_s1_x) + -1), ((lgyy_s1_box_y + lgyy_s1_y) + 1)) + (padded16_global_wrapper.stencil(((lgyy_s1_box_x + lgyy_s1_x) + 1), ((lgyy_s1_box_y + lgyy_s1_y) + 1)) + (padded16_global_wrapper.stencil((lgyy_s1_box_x + lgyy_s1_x), ((lgyy_s1_box_y + lgyy_s1_y) + 1))*(int16)2))) - padded16_global_wrapper.stencil(((lgyy_s1_box_x + lgyy_s1_x) + -1), ((lgyy_s1_box_y + lgyy_s1_y) + -1))) - (padded16_global_wrapper.stencil((lgyy_s1_box_x + lgyy_s1_x), ((lgyy_s1_box_y + lgyy_s1_y) + -1))*(int16)2)) - padded16_global_wrapper.stencil(((lgyy_s1_box_x + lgyy_s1_x) + 1), ((lgyy_s1_box_y + lgyy_s1_y) + -1))), (int16)180), (int16)-180)*max(min(((((padded16_global_wrapper.stencil(((lgyy_s1_box_x + lgyy_s1_x) + -1), ((lgyy_s1_box_y + lgyy_s1_y) + 1)) + (padded16_global_wrapper.stencil(((lgyy_s1_box_x + lgyy_s1_x) + 1), ((lgyy_s1_box_y + lgyy_s1_y) + 1)) + (padded16_global_wrapper.stencil((lgyy_s1_box_x + lgyy_s1_x), ((lgyy_s1_box_y + lgyy_s1_y) + 1))*(int16)2))) - padded16_global_wrapper.stencil(((lgyy_s1_box_x + lgyy_s1_x) + -1), ((lgyy_s1_box_y + lgyy_s1_y) + -1))) - (padded16_global_wrapper.stencil((lgyy_s1_box_x + lgyy_s1_x), ((lgyy_s1_box_y + lgyy_s1_y) + -1))*(int16)2)) - padded16_global_wrapper.stencil(((lgyy_s1_box_x + lgyy_s1_x) + 1), ((lgyy_s1_box_y + lgyy_s1_y) + -1))), (int16)180), (int16)-180))/(int16)64))
hw_uint<16> hcompute_lgyy_stencil_1(hw_uint<16>& lgyy_stencil, hw_uint<96>& padded16_global_wrapper_stencil) {
  int16_t _lgyy_stencil_1 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _padded16_global_wrapper_stencil_15 = (int16_t) padded16_global_wrapper_stencil.extract<0, 15>();
  int16_t _padded16_global_wrapper_stencil_16 = (int16_t) padded16_global_wrapper_stencil.extract<16, 31>();
  int16_t _padded16_global_wrapper_stencil_17 = (int16_t) padded16_global_wrapper_stencil.extract<32, 47>();
  int16_t _padded16_global_wrapper_stencil_18 = (int16_t) padded16_global_wrapper_stencil.extract<48, 63>();
  int16_t _padded16_global_wrapper_stencil_19 = (int16_t) padded16_global_wrapper_stencil.extract<64, 79>();
  int16_t _padded16_global_wrapper_stencil_20 = (int16_t) padded16_global_wrapper_stencil.extract<80, 95>();

  int16_t _421 = (int16_t)(2);
  int16_t _422 = _padded16_global_wrapper_stencil_17 * _421;
  int16_t _423 = _padded16_global_wrapper_stencil_16 + _422;
  int16_t _424 = _padded16_global_wrapper_stencil_15 + _423;
  int16_t _425 = _424 - _padded16_global_wrapper_stencil_18;
  int16_t _426 = _padded16_global_wrapper_stencil_19 * _421;
  int16_t _427 = _425 - _426;
  int16_t _428 = _427 - _padded16_global_wrapper_stencil_20;
  int16_t _429 = (int16_t)(180);
  int16_t _430 = min(_428, _429);
  int16_t _431 = (int16_t)(-180);
  int16_t _432 = max(_430, _431);
  int16_t _433 = _432 * _432;
  int16_t _434 = (int16_t)(6);
  int16_t _435 = _433 >> _434;
  int16_t _436 = _lgyy_stencil_1 + _435;
  return _436;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = int16(select((((((((((((((lgxx.stencil((hw_output_s0_x_xi + -1), (hw_output_s0_y_yi + -1))/(int16)64)*(lgyy.stencil((hw_output_s0_x_xi + -1), (hw_output_s0_y_yi + -1))/(int16)64)) - ((lgxy.stencil((hw_output_s0_x_xi + -1), (hw_output_s0_y_yi + -1))/(int16)64)*(lgxy.stencil((hw_output_s0_x_xi + -1), (hw_output_s0_y_yi + -1))/(int16)64))) - ((((lgxx.stencil((hw_output_s0_x_xi + -1), (hw_output_s0_y_yi + -1))/(int16)64) + (lgyy.stencil((hw_output_s0_x_xi + -1), (hw_output_s0_y_yi + -1))/(int16)64))*((lgxx.stencil((hw_output_s0_x_xi + -1), (hw_output_s0_y_yi + -1))/(int16)64) + (lgyy.stencil((hw_output_s0_x_xi + -1), (hw_output_s0_y_yi + -1))/(int16)64)))/(int16)16)) < ((((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)*(lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)) - ((lgxy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)*(lgxy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64))) - ((((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64))*((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)))/(int16)16))) && (((((lgxx.stencil(hw_output_s0_x_xi, (hw_output_s0_y_yi + -1))/(int16)64)*(lgyy.stencil(hw_output_s0_x_xi, (hw_output_s0_y_yi + -1))/(int16)64)) - ((lgxy.stencil(hw_output_s0_x_xi, (hw_output_s0_y_yi + -1))/(int16)64)*(lgxy.stencil(hw_output_s0_x_xi, (hw_output_s0_y_yi + -1))/(int16)64))) - ((((lgxx.stencil(hw_output_s0_x_xi, (hw_output_s0_y_yi + -1))/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, (hw_output_s0_y_yi + -1))/(int16)64))*((lgxx.stencil(hw_output_s0_x_xi, (hw_output_s0_y_yi + -1))/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, (hw_output_s0_y_yi + -1))/(int16)64)))/(int16)16)) < ((((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)*(lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)) - ((lgxy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)*(lgxy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64))) - ((((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64))*((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)))/(int16)16)))) && (((((lgxx.stencil((hw_output_s0_x_xi + 1), (hw_output_s0_y_yi + -1))/(int16)64)*(lgyy.stencil((hw_output_s0_x_xi + 1), (hw_output_s0_y_yi + -1))/(int16)64)) - ((lgxy.stencil((hw_output_s0_x_xi + 1), (hw_output_s0_y_yi + -1))/(int16)64)*(lgxy.stencil((hw_output_s0_x_xi + 1), (hw_output_s0_y_yi + -1))/(int16)64))) - ((((lgxx.stencil((hw_output_s0_x_xi + 1), (hw_output_s0_y_yi + -1))/(int16)64) + (lgyy.stencil((hw_output_s0_x_xi + 1), (hw_output_s0_y_yi + -1))/(int16)64))*((lgxx.stencil((hw_output_s0_x_xi + 1), (hw_output_s0_y_yi + -1))/(int16)64) + (lgyy.stencil((hw_output_s0_x_xi + 1), (hw_output_s0_y_yi + -1))/(int16)64)))/(int16)16)) < ((((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)*(lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)) - ((lgxy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)*(lgxy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64))) - ((((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64))*((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)))/(int16)16)))) && (((((lgxx.stencil((hw_output_s0_x_xi + -1), hw_output_s0_y_yi)/(int16)64)*(lgyy.stencil((hw_output_s0_x_xi + -1), hw_output_s0_y_yi)/(int16)64)) - ((lgxy.stencil((hw_output_s0_x_xi + -1), hw_output_s0_y_yi)/(int16)64)*(lgxy.stencil((hw_output_s0_x_xi + -1), hw_output_s0_y_yi)/(int16)64))) - ((((lgxx.stencil((hw_output_s0_x_xi + -1), hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil((hw_output_s0_x_xi + -1), hw_output_s0_y_yi)/(int16)64))*((lgxx.stencil((hw_output_s0_x_xi + -1), hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil((hw_output_s0_x_xi + -1), hw_output_s0_y_yi)/(int16)64)))/(int16)16)) < ((((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)*(lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)) - ((lgxy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)*(lgxy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64))) - ((((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64))*((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)))/(int16)16)))) && (((((lgxx.stencil((hw_output_s0_x_xi + 1), hw_output_s0_y_yi)/(int16)64)*(lgyy.stencil((hw_output_s0_x_xi + 1), hw_output_s0_y_yi)/(int16)64)) - ((lgxy.stencil((hw_output_s0_x_xi + 1), hw_output_s0_y_yi)/(int16)64)*(lgxy.stencil((hw_output_s0_x_xi + 1), hw_output_s0_y_yi)/(int16)64))) - ((((lgxx.stencil((hw_output_s0_x_xi + 1), hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil((hw_output_s0_x_xi + 1), hw_output_s0_y_yi)/(int16)64))*((lgxx.stencil((hw_output_s0_x_xi + 1), hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil((hw_output_s0_x_xi + 1), hw_output_s0_y_yi)/(int16)64)))/(int16)16)) < ((((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)*(lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)) - ((lgxy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)*(lgxy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64))) - ((((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64))*((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)))/(int16)16)))) && (((((lgxx.stencil((hw_output_s0_x_xi + -1), (hw_output_s0_y_yi + 1))/(int16)64)*(lgyy.stencil((hw_output_s0_x_xi + -1), (hw_output_s0_y_yi + 1))/(int16)64)) - ((lgxy.stencil((hw_output_s0_x_xi + -1), (hw_output_s0_y_yi + 1))/(int16)64)*(lgxy.stencil((hw_output_s0_x_xi + -1), (hw_output_s0_y_yi + 1))/(int16)64))) - ((((lgxx.stencil((hw_output_s0_x_xi + -1), (hw_output_s0_y_yi + 1))/(int16)64) + (lgyy.stencil((hw_output_s0_x_xi + -1), (hw_output_s0_y_yi + 1))/(int16)64))*((lgxx.stencil((hw_output_s0_x_xi + -1), (hw_output_s0_y_yi + 1))/(int16)64) + (lgyy.stencil((hw_output_s0_x_xi + -1), (hw_output_s0_y_yi + 1))/(int16)64)))/(int16)16)) < ((((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)*(lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)) - ((lgxy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)*(lgxy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64))) - ((((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64))*((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)))/(int16)16)))) && (((((lgxx.stencil(hw_output_s0_x_xi, (hw_output_s0_y_yi + 1))/(int16)64)*(lgyy.stencil(hw_output_s0_x_xi, (hw_output_s0_y_yi + 1))/(int16)64)) - ((lgxy.stencil(hw_output_s0_x_xi, (hw_output_s0_y_yi + 1))/(int16)64)*(lgxy.stencil(hw_output_s0_x_xi, (hw_output_s0_y_yi + 1))/(int16)64))) - ((((lgxx.stencil(hw_output_s0_x_xi, (hw_output_s0_y_yi + 1))/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, (hw_output_s0_y_yi + 1))/(int16)64))*((lgxx.stencil(hw_output_s0_x_xi, (hw_output_s0_y_yi + 1))/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, (hw_output_s0_y_yi + 1))/(int16)64)))/(int16)16)) < ((((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)*(lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)) - ((lgxy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)*(lgxy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64))) - ((((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64))*((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)))/(int16)16)))) && (((((lgxx.stencil((hw_output_s0_x_xi + 1), (hw_output_s0_y_yi + 1))/(int16)64)*(lgyy.stencil((hw_output_s0_x_xi + 1), (hw_output_s0_y_yi + 1))/(int16)64)) - ((lgxy.stencil((hw_output_s0_x_xi + 1), (hw_output_s0_y_yi + 1))/(int16)64)*(lgxy.stencil((hw_output_s0_x_xi + 1), (hw_output_s0_y_yi + 1))/(int16)64))) - ((((lgxx.stencil((hw_output_s0_x_xi + 1), (hw_output_s0_y_yi + 1))/(int16)64) + (lgyy.stencil((hw_output_s0_x_xi + 1), (hw_output_s0_y_yi + 1))/(int16)64))*((lgxx.stencil((hw_output_s0_x_xi + 1), (hw_output_s0_y_yi + 1))/(int16)64) + (lgyy.stencil((hw_output_s0_x_xi + 1), (hw_output_s0_y_yi + 1))/(int16)64)))/(int16)16)) < ((((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)*(lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)) - ((lgxy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)*(lgxy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64))) - ((((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64))*((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)))/(int16)16)))) && ((int16)1 <= ((((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)*(lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)) - ((lgxy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)*(lgxy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64))) - ((((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64))*((lgxx.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64) + (lgyy.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)/(int16)64)))/(int16)16)))), 255, 0))
hw_uint<16> hcompute_hw_output_stencil(hw_uint<144>& lgxx_stencil, hw_uint<144>& lgxy_stencil, hw_uint<144>& lgyy_stencil) {
  int16_t _lgxx_stencil_10 = (int16_t) lgxx_stencil.extract<0, 15>();
  int16_t _lgxx_stencil_2 = (int16_t) lgxx_stencil.extract<16, 31>();
  int16_t _lgxx_stencil_3 = (int16_t) lgxx_stencil.extract<32, 47>();
  int16_t _lgxx_stencil_4 = (int16_t) lgxx_stencil.extract<48, 63>();
  int16_t _lgxx_stencil_5 = (int16_t) lgxx_stencil.extract<64, 79>();
  int16_t _lgxx_stencil_6 = (int16_t) lgxx_stencil.extract<80, 95>();
  int16_t _lgxx_stencil_7 = (int16_t) lgxx_stencil.extract<96, 111>();
  int16_t _lgxx_stencil_8 = (int16_t) lgxx_stencil.extract<112, 127>();
  int16_t _lgxx_stencil_9 = (int16_t) lgxx_stencil.extract<128, 143>();

  int16_t _lgxy_stencil_10 = (int16_t) lgxy_stencil.extract<0, 15>();
  int16_t _lgxy_stencil_2 = (int16_t) lgxy_stencil.extract<16, 31>();
  int16_t _lgxy_stencil_3 = (int16_t) lgxy_stencil.extract<32, 47>();
  int16_t _lgxy_stencil_4 = (int16_t) lgxy_stencil.extract<48, 63>();
  int16_t _lgxy_stencil_5 = (int16_t) lgxy_stencil.extract<64, 79>();
  int16_t _lgxy_stencil_6 = (int16_t) lgxy_stencil.extract<80, 95>();
  int16_t _lgxy_stencil_7 = (int16_t) lgxy_stencil.extract<96, 111>();
  int16_t _lgxy_stencil_8 = (int16_t) lgxy_stencil.extract<112, 127>();
  int16_t _lgxy_stencil_9 = (int16_t) lgxy_stencil.extract<128, 143>();

  int16_t _lgyy_stencil_10 = (int16_t) lgyy_stencil.extract<0, 15>();
  int16_t _lgyy_stencil_2 = (int16_t) lgyy_stencil.extract<16, 31>();
  int16_t _lgyy_stencil_3 = (int16_t) lgyy_stencil.extract<32, 47>();
  int16_t _lgyy_stencil_4 = (int16_t) lgyy_stencil.extract<48, 63>();
  int16_t _lgyy_stencil_5 = (int16_t) lgyy_stencil.extract<64, 79>();
  int16_t _lgyy_stencil_6 = (int16_t) lgyy_stencil.extract<80, 95>();
  int16_t _lgyy_stencil_7 = (int16_t) lgyy_stencil.extract<96, 111>();
  int16_t _lgyy_stencil_8 = (int16_t) lgyy_stencil.extract<112, 127>();
  int16_t _lgyy_stencil_9 = (int16_t) lgyy_stencil.extract<128, 143>();

  int16_t _482 = (int16_t)(6);
  int16_t _483 = _lgxx_stencil_2 >> _482;
  int16_t _484 = _lgyy_stencil_2 >> _482;
  int16_t _485 = _483 * _484;
  int16_t _486 = _lgxy_stencil_2 >> _482;
  int16_t _487 = _486 * _486;
  int16_t _488 = _485 - _487;
  int16_t _489 = _483 + _484;
  int16_t _490 = _489 * _489;
  int16_t _491 = (int16_t)(4);
  int16_t _492 = _490 >> _491;
  int16_t _493 = _488 - _492;
  int16_t _494 = _lgxx_stencil_3 >> _482;
  int16_t _495 = _lgyy_stencil_3 >> _482;
  int16_t _496 = _494 * _495;
  int16_t _497 = _lgxy_stencil_3 >> _482;
  int16_t _498 = _497 * _497;
  int16_t _499 = _496 - _498;
  int16_t _500 = _494 + _495;
  int16_t _501 = _500 * _500;
  int16_t _502 = _501 >> _491;
  int16_t _503 = _499 - _502;
  bool _504 = _493 < _503;
  int16_t _505 = _lgxx_stencil_4 >> _482;
  int16_t _506 = _lgyy_stencil_4 >> _482;
  int16_t _507 = _505 * _506;
  int16_t _508 = _lgxy_stencil_4 >> _482;
  int16_t _509 = _508 * _508;
  int16_t _510 = _507 - _509;
  int16_t _511 = _505 + _506;
  int16_t _512 = _511 * _511;
  int16_t _513 = _512 >> _491;
  int16_t _514 = _510 - _513;
  bool _515 = _514 < _503;
  bool _516 = _504 && _515;
  int16_t _517 = _lgxx_stencil_5 >> _482;
  int16_t _518 = _lgyy_stencil_5 >> _482;
  int16_t _519 = _517 * _518;
  int16_t _520 = _lgxy_stencil_5 >> _482;
  int16_t _521 = _520 * _520;
  int16_t _522 = _519 - _521;
  int16_t _523 = _517 + _518;
  int16_t _524 = _523 * _523;
  int16_t _525 = _524 >> _491;
  int16_t _526 = _522 - _525;
  bool _527 = _526 < _503;
  bool _528 = _516 && _527;
  int16_t _529 = _lgxx_stencil_6 >> _482;
  int16_t _530 = _lgyy_stencil_6 >> _482;
  int16_t _531 = _529 * _530;
  int16_t _532 = _lgxy_stencil_6 >> _482;
  int16_t _533 = _532 * _532;
  int16_t _534 = _531 - _533;
  int16_t _535 = _529 + _530;
  int16_t _536 = _535 * _535;
  int16_t _537 = _536 >> _491;
  int16_t _538 = _534 - _537;
  bool _539 = _538 < _503;
  bool _540 = _528 && _539;
  int16_t _541 = _lgxx_stencil_7 >> _482;
  int16_t _542 = _lgyy_stencil_7 >> _482;
  int16_t _543 = _541 * _542;
  int16_t _544 = _lgxy_stencil_7 >> _482;
  int16_t _545 = _544 * _544;
  int16_t _546 = _543 - _545;
  int16_t _547 = _541 + _542;
  int16_t _548 = _547 * _547;
  int16_t _549 = _548 >> _491;
  int16_t _550 = _546 - _549;
  bool _551 = _550 < _503;
  bool _552 = _540 && _551;
  int16_t _553 = _lgxx_stencil_8 >> _482;
  int16_t _554 = _lgyy_stencil_8 >> _482;
  int16_t _555 = _553 * _554;
  int16_t _556 = _lgxy_stencil_8 >> _482;
  int16_t _557 = _556 * _556;
  int16_t _558 = _555 - _557;
  int16_t _559 = _553 + _554;
  int16_t _560 = _559 * _559;
  int16_t _561 = _560 >> _491;
  int16_t _562 = _558 - _561;
  bool _563 = _562 < _503;
  bool _564 = _552 && _563;
  int16_t _565 = _lgxx_stencil_9 >> _482;
  int16_t _566 = _lgyy_stencil_9 >> _482;
  int16_t _567 = _565 * _566;
  int16_t _568 = _lgxy_stencil_9 >> _482;
  int16_t _569 = _568 * _568;
  int16_t _570 = _567 - _569;
  int16_t _571 = _565 + _566;
  int16_t _572 = _571 * _571;
  int16_t _573 = _572 >> _491;
  int16_t _574 = _570 - _573;
  bool _575 = _574 < _503;
  bool _576 = _564 && _575;
  int16_t _577 = _lgxx_stencil_10 >> _482;
  int16_t _578 = _lgyy_stencil_10 >> _482;
  int16_t _579 = _577 * _578;
  int16_t _580 = _lgxy_stencil_10 >> _482;
  int16_t _581 = _580 * _580;
  int16_t _582 = _579 - _581;
  int16_t _583 = _577 + _578;
  int16_t _584 = _583 * _583;
  int16_t _585 = _584 >> _491;
  int16_t _586 = _582 - _585;
  bool _587 = _586 < _503;
  bool _588 = _576 && _587;
  int16_t _589 = (int16_t)(1);
  bool _590 = _589 <= _503;
  bool _591 = _588 && _590;
  int32_t _592 = (int32_t)(_591 ? 255 : 0);
  int16_t _593 = (int16_t)(_592);
  return _593;
}

