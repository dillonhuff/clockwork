#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: padded16_global_wrapper.stencil(padded16_global_wrapper_s0_x, padded16_global_wrapper_s0_y) = padded16.stencil(padded16_global_wrapper_s0_x, padded16_global_wrapper_s0_y)
hw_uint<16> hcompute_padded16_global_wrapper_stencil(hw_uint<16>& padded16_stencil) {
  int16_t _padded16_stencil_1 = (int16_t) padded16_stencil.extract<0, 15>();

  return _padded16_stencil_1;
}

//store is: grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y) = (int16)0
hw_uint<16> hcompute_grad_x_unclamp_stencil() {
  int16_t _261 = (int16_t)(0);
  return _261;
}

//store is: grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y) = (grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y) + (padded16_global_wrapper.stencil((grad_x_s0_x + grad_x_unclamp_s1_r_x), (grad_x_s0_y + grad_x_unclamp_s1_r_y))*int16(kernel_xa0[(grad_x_unclamp_s1_r_x + ((grad_x_unclamp_s1_r_y*3) + 4))])))
hw_uint<16> hcompute_grad_x_unclamp_stencil_1(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<16>& padded16_global_wrapper_stencil, const int _grad_x_unclamp_s1_r_x, const int _grad_x_unclamp_s1_r_y) {
  int16_t _grad_x_unclamp_stencil_1 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _padded16_global_wrapper_stencil_1 = (int16_t) padded16_global_wrapper_stencil.extract<0, 15>();

  int32_t _kernel_xa0[9];
  // produce kernel_xa0
  int32_t _267 = _grad_x_unclamp_s1_r_y * 3;
  int32_t _268 = _267 + 4;
  int32_t _269 = _grad_x_unclamp_s1_r_x + _268;
  _kernel_xa0[_269] = 0;
  _kernel_xa0[0] = -1;
  _kernel_xa0[3] = -2;
  _kernel_xa0[6] = -1;
  _kernel_xa0[2] = 1;
  _kernel_xa0[5] = 2;
  _kernel_xa0[8] = 1;

  int32_t _270 = _grad_x_unclamp_s1_r_y * 3;
  int32_t _271 = _270 + 4;
  int32_t _272 = _grad_x_unclamp_s1_r_x + _271;
  int32_t _273 = ((const int32_t *)_kernel_xa0)[_272];
  int16_t _274 = (int16_t)(_273);
  int16_t _275 = _padded16_global_wrapper_stencil_1 * _274;
  int16_t _276 = _grad_x_unclamp_stencil_1 + _275;
  return _276;
}

//store is: grad_x.stencil(grad_x_s0_x, grad_x_s0_y) = max(min(grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y), (int16)255), (int16)-255)
hw_uint<16> hcompute_grad_x_stencil(hw_uint<16>& grad_x_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_2 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _295 = (int16_t)(255);
  int16_t _296 = min(_grad_x_unclamp_stencil_2, _295);
  int16_t _297 = (int16_t)(-255);
  int16_t _298 = max(_296, _297);
  return _298;
}

//store is: lxx.stencil(lxx_s0_x, lxx_s0_y) = ((grad_x.stencil(lxx_s0_x, lxx_s0_y)*grad_x.stencil(lxx_s0_x, lxx_s0_y))/(int16)128)
hw_uint<16> hcompute_lxx_stencil(hw_uint<16>& grad_x_stencil) {
  int16_t _grad_x_stencil_1 = (int16_t) grad_x_stencil.extract<0, 15>();

  int16_t _308 = _grad_x_stencil_1 * _grad_x_stencil_1;
  int16_t _309 = (int16_t)(7);
  int16_t _310 = _308 >> _309;
  return _310;
}

//store is: lgxx.stencil(lgxx_s0_x, lgxx_s0_y) = (int16)0
hw_uint<16> hcompute_lgxx_stencil() {
  int16_t _318 = (int16_t)(0);
  return _318;
}

//store is: lgxx.stencil(lgxx_s1_x, lgxx_s1_y) = (lgxx.stencil(lgxx_s1_x, lgxx_s1_y) + lxx.stencil((lgxx_s1_box_x + lgxx_s1_x), (lgxx_s1_box_y + lgxx_s1_y)))
hw_uint<16> hcompute_lgxx_stencil_1(hw_uint<16>& lgxx_stencil, hw_uint<16>& lxx_stencil) {
  int16_t _lgxx_stencil_1 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lxx_stencil_1 = (int16_t) lxx_stencil.extract<0, 15>();

  int16_t _321 = _lgxx_stencil_1 + _lxx_stencil_1;
  return _321;
}

//store is: grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) = (int16)0
hw_uint<16> hcompute_grad_y_unclamp_stencil() {
  int16_t _328 = (int16_t)(0);
  return _328;
}

//store is: grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) = (grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) + (padded16_global_wrapper.stencil((grad_y_s0_x + grad_y_unclamp_s1_r_x), (grad_y_s0_y + grad_y_unclamp_s1_r_y))*int16(kernel_ya1[(grad_y_unclamp_s1_r_x + ((grad_y_unclamp_s1_r_y*3) + 4))])))
hw_uint<16> hcompute_grad_y_unclamp_stencil_1(hw_uint<16>& grad_y_unclamp_stencil, hw_uint<16>& padded16_global_wrapper_stencil, const int _grad_y_unclamp_s1_r_x, const int _grad_y_unclamp_s1_r_y) {
  int16_t _grad_y_unclamp_stencil_1 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _padded16_global_wrapper_stencil_2 = (int16_t) padded16_global_wrapper_stencil.extract<0, 15>();

  int32_t _kernel_ya1[9];
  // produce kernel_ya1
  int32_t _334 = _grad_y_unclamp_s1_r_y * 3;
  int32_t _335 = _334 + 4;
  int32_t _336 = _grad_y_unclamp_s1_r_x + _335;
  _kernel_ya1[_336] = 0;
  _kernel_ya1[6] = -1;
  _kernel_ya1[7] = -2;
  _kernel_ya1[8] = -1;
  _kernel_ya1[0] = 1;
  _kernel_ya1[1] = 2;
  _kernel_ya1[2] = 1;

  int32_t _337 = _grad_y_unclamp_s1_r_y * 3;
  int32_t _338 = _337 + 4;
  int32_t _339 = _grad_y_unclamp_s1_r_x + _338;
  int32_t _340 = ((const int32_t *)_kernel_ya1)[_339];
  int16_t _341 = (int16_t)(_340);
  int16_t _342 = _padded16_global_wrapper_stencil_2 * _341;
  int16_t _343 = _grad_y_unclamp_stencil_1 + _342;
  return _343;
}

//store is: grad_y.stencil(grad_y_s0_x, grad_y_s0_y) = max(min(grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y), (int16)255), (int16)-255)
hw_uint<16> hcompute_grad_y_stencil(hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_y_unclamp_stencil_2 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _362 = (int16_t)(255);
  int16_t _363 = min(_grad_y_unclamp_stencil_2, _362);
  int16_t _364 = (int16_t)(-255);
  int16_t _365 = max(_363, _364);
  return _365;
}

//store is: lxy.stencil(lxy_s0_x, lxy_s0_y) = ((grad_x.stencil(lxy_s0_x, lxy_s0_y)*grad_y.stencil(lxy_s0_x, lxy_s0_y))/(int16)128)
hw_uint<16> hcompute_lxy_stencil(hw_uint<16>& grad_x_stencil, hw_uint<16>& grad_y_stencil) {
  int16_t _grad_x_stencil_2 = (int16_t) grad_x_stencil.extract<0, 15>();

  int16_t _grad_y_stencil_1 = (int16_t) grad_y_stencil.extract<0, 15>();

  int16_t _375 = _grad_x_stencil_2 * _grad_y_stencil_1;
  int16_t _376 = (int16_t)(7);
  int16_t _377 = _375 >> _376;
  return _377;
}

//store is: lgxy.stencil(lgxy_s0_x, lgxy_s0_y) = (int16)0
hw_uint<16> hcompute_lgxy_stencil() {
  int16_t _386 = (int16_t)(0);
  return _386;
}

//store is: lgxy.stencil(lgxy_s1_x, lgxy_s1_y) = (lgxy.stencil(lgxy_s1_x, lgxy_s1_y) + lxy.stencil((lgxy_s1_box_x + lgxy_s1_x), (lgxy_s1_box_y + lgxy_s1_y)))
hw_uint<16> hcompute_lgxy_stencil_1(hw_uint<16>& lgxy_stencil, hw_uint<16>& lxy_stencil) {
  int16_t _lgxy_stencil_1 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lxy_stencil_1 = (int16_t) lxy_stencil.extract<0, 15>();

  int16_t _389 = _lgxy_stencil_1 + _lxy_stencil_1;
  return _389;
}

//store is: lyy.stencil(lyy_s0_x, lyy_s0_y) = ((grad_y.stencil(lyy_s0_x, lyy_s0_y)*grad_y.stencil(lyy_s0_x, lyy_s0_y))/(int16)128)
hw_uint<16> hcompute_lyy_stencil(hw_uint<16>& grad_y_stencil) {
  int16_t _grad_y_stencil_2 = (int16_t) grad_y_stencil.extract<0, 15>();

  int16_t _396 = _grad_y_stencil_2 * _grad_y_stencil_2;
  int16_t _397 = (int16_t)(7);
  int16_t _398 = _396 >> _397;
  return _398;
}

//store is: lgyy.stencil(lgyy_s0_x, lgyy_s0_y) = (int16)0
hw_uint<16> hcompute_lgyy_stencil() {
  int16_t _406 = (int16_t)(0);
  return _406;
}

//store is: lgyy.stencil(lgyy_s1_x, lgyy_s1_y) = (lgyy.stencil(lgyy_s1_x, lgyy_s1_y) + lyy.stencil((lgyy_s1_box_x + lgyy_s1_x), (lgyy_s1_box_y + lgyy_s1_y)))
hw_uint<16> hcompute_lgyy_stencil_1(hw_uint<16>& lgyy_stencil, hw_uint<16>& lyy_stencil) {
  int16_t _lgyy_stencil_1 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _lyy_stencil_1 = (int16_t) lyy_stencil.extract<0, 15>();

  int16_t _409 = _lgyy_stencil_1 + _lyy_stencil_1;
  return _409;
}

//store is: cim.stencil(cim_s0_x, cim_s0_y) = ((((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64)*(lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64)) - ((lgxy.stencil(cim_s0_x, cim_s0_y)/(int16)64)*(lgxy.stencil(cim_s0_x, cim_s0_y)/(int16)64))) - ((((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64) + (lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64))*((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64) + (lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64)))/(int16)16))
hw_uint<16> hcompute_cim_stencil(hw_uint<16>& lgxx_stencil, hw_uint<16>& lgxy_stencil, hw_uint<16>& lgyy_stencil) {
  int16_t _lgxx_stencil_2 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lgxy_stencil_2 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lgyy_stencil_2 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _416 = (int16_t)(6);
  int16_t _417 = _lgxx_stencil_2 >> _416;
  int16_t _418 = _lgyy_stencil_2 >> _416;
  int16_t _419 = _417 * _418;
  int16_t _420 = _lgxy_stencil_2 >> _416;
  int16_t _421 = _420 * _420;
  int16_t _422 = _419 - _421;
  int16_t _423 = _417 + _418;
  int16_t _424 = _423 * _423;
  int16_t _425 = (int16_t)(4);
  int16_t _426 = _424 >> _425;
  int16_t _427 = _422 - _426;
  return _427;
}

//store is: cim_output.stencil(cim_output_s0_x, cim_output_s0_y) = int16(select((((((((((cim.stencil((cim_output_s0_x + -1), (cim_output_s0_y + -1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y)) && (cim.stencil(cim_output_s0_x, (cim_output_s0_y + -1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + -1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + -1), cim_output_s0_y) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + 1), cim_output_s0_y) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + -1), (cim_output_s0_y + 1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil(cim_output_s0_x, (cim_output_s0_y + 1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + 1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && ((int16)1 <= cim.stencil(cim_output_s0_x, cim_output_s0_y))), 255, 0))
hw_uint<16> hcompute_cim_output_stencil(hw_uint<144>& cim_stencil) {
  int16_t _cim_stencil_1 = (int16_t) cim_stencil.extract<0, 15>();
  int16_t _cim_stencil_2 = (int16_t) cim_stencil.extract<16, 31>();
  int16_t _cim_stencil_3 = (int16_t) cim_stencil.extract<32, 47>();
  int16_t _cim_stencil_4 = (int16_t) cim_stencil.extract<48, 63>();
  int16_t _cim_stencil_5 = (int16_t) cim_stencil.extract<64, 79>();
  int16_t _cim_stencil_6 = (int16_t) cim_stencil.extract<80, 95>();
  int16_t _cim_stencil_7 = (int16_t) cim_stencil.extract<96, 111>();
  int16_t _cim_stencil_8 = (int16_t) cim_stencil.extract<112, 127>();
  int16_t _cim_stencil_9 = (int16_t) cim_stencil.extract<128, 143>();

  bool _455 = _cim_stencil_1 < _cim_stencil_2;
  bool _456 = _cim_stencil_3 < _cim_stencil_2;
  bool _457 = _455 && _456;
  bool _458 = _cim_stencil_4 < _cim_stencil_2;
  bool _459 = _457 && _458;
  bool _460 = _cim_stencil_5 < _cim_stencil_2;
  bool _461 = _459 && _460;
  bool _462 = _cim_stencil_6 < _cim_stencil_2;
  bool _463 = _461 && _462;
  bool _464 = _cim_stencil_7 < _cim_stencil_2;
  bool _465 = _463 && _464;
  bool _466 = _cim_stencil_8 < _cim_stencil_2;
  bool _467 = _465 && _466;
  bool _468 = _cim_stencil_9 < _cim_stencil_2;
  bool _469 = _467 && _468;
  int16_t _470 = (int16_t)(1);
  bool _471 = _470 <= _cim_stencil_2;
  bool _472 = _469 && _471;
  int32_t _473 = (int32_t)(_472 ? 255 : 0);
  int16_t _474 = (int16_t)(_473);
  return _474;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = cim_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& cim_output_stencil) {
  int16_t _cim_output_stencil_1 = (int16_t) cim_output_stencil.extract<0, 15>();

  return _cim_output_stencil_1;
}

