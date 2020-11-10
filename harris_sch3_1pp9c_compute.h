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
  _kernel_xa0[0] = 0;
  _kernel_xa0[1] = 0;
  _kernel_xa0[2] = 0;
  _kernel_xa0[3] = 0;
  _kernel_xa0[4] = 0;
  _kernel_xa0[5] = 0;
  _kernel_xa0[6] = 0;
  _kernel_xa0[7] = 0;
  _kernel_xa0[8] = 0;
  _kernel_xa0[0] = -1;
  _kernel_xa0[3] = -2;
  _kernel_xa0[6] = -1;
  _kernel_xa0[2] = 1;
  _kernel_xa0[5] = 2;
  _kernel_xa0[8] = 1;

  int32_t _264 = _grad_x_unclamp_s1_r_y * 3;
  int32_t _265 = _264 + 4;
  int32_t _266 = _grad_x_unclamp_s1_r_x + _265;
  int32_t _267 = ((const int32_t *)_kernel_xa0)[_266];
  int16_t _268 = (int16_t)(_267);
  int16_t _269 = _padded16_global_wrapper_stencil_1 * _268;
  int16_t _270 = _grad_x_unclamp_stencil_1 + _269;
  return _270;
}

//store is: grad_x.stencil(grad_x_s0_x, grad_x_s0_y) = max(min(grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y), (int16)255), (int16)-255)
hw_uint<16> hcompute_grad_x_stencil(hw_uint<16>& grad_x_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_2 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _289 = (int16_t)(255);
  int16_t _290 = min(_grad_x_unclamp_stencil_2, _289);
  int16_t _291 = (int16_t)(-255);
  int16_t _292 = max(_290, _291);
  return _292;
}

//store is: lxx.stencil(lxx_s0_x, lxx_s0_y) = ((grad_x.stencil(lxx_s0_x, lxx_s0_y)*grad_x.stencil(lxx_s0_x, lxx_s0_y))/(int16)128)
hw_uint<16> hcompute_lxx_stencil(hw_uint<16>& grad_x_stencil) {
  int16_t _grad_x_stencil_1 = (int16_t) grad_x_stencil.extract<0, 15>();

  int16_t _302 = _grad_x_stencil_1 * _grad_x_stencil_1;
  int16_t _303 = (int16_t)(7);
  int16_t _304 = _302 >> _303;
  return _304;
}

//store is: lgxx.stencil(((lgxx_s0_x_x*3) + -1), ((lgxx_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil() {
  int16_t _312 = (int16_t)(0);
  return _312;
}

//store is: lgxx.stencil((lgxx_s0_x_x*3), ((lgxx_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_1() {
  int16_t _319 = (int16_t)(0);
  return _319;
}

//store is: lgxx.stencil(((lgxx_s0_x_x*3) + 1), ((lgxx_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_2() {
  int16_t _325 = (int16_t)(0);
  return _325;
}

//store is: lgxx.stencil(((lgxx_s0_x_x_1*3) + -1), (lgxx_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_3() {
  int16_t _332 = (int16_t)(0);
  return _332;
}

//store is: lgxx.stencil((lgxx_s0_x_x_1*3), (lgxx_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_4() {
  int16_t _338 = (int16_t)(0);
  return _338;
}

//store is: lgxx.stencil(((lgxx_s0_x_x_1*3) + 1), (lgxx_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_5() {
  int16_t _343 = (int16_t)(0);
  return _343;
}

//store is: lgxx.stencil(((lgxx_s0_x_x_2*3) + -1), ((lgxx_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_6() {
  int16_t _349 = (int16_t)(0);
  return _349;
}

//store is: lgxx.stencil((lgxx_s0_x_x_2*3), ((lgxx_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_7() {
  int16_t _356 = (int16_t)(0);
  return _356;
}

//store is: lgxx.stencil(((lgxx_s0_x_x_2*3) + 1), ((lgxx_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_8() {
  int16_t _362 = (int16_t)(0);
  return _362;
}

//store is: lgxx.stencil(lgxx_s1_x, lgxx_s1_y) = (lgxx.stencil(lgxx_s1_x, lgxx_s1_y) + lxx.stencil((lgxx_s1_box_x + lgxx_s1_x), (lgxx_s1_box_y + lgxx_s1_y)))
hw_uint<16> hcompute_lgxx_stencil_9(hw_uint<16>& lgxx_stencil, hw_uint<16>& lxx_stencil) {
  int16_t _lgxx_stencil_1 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lxx_stencil_1 = (int16_t) lxx_stencil.extract<0, 15>();

  int16_t _369 = _lgxx_stencil_1 + _lxx_stencil_1;
  return _369;
}

//store is: grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) = (int16)0
hw_uint<16> hcompute_grad_y_unclamp_stencil() {
  int16_t _376 = (int16_t)(0);
  return _376;
}

//store is: grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) = (grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) + (padded16_global_wrapper.stencil((grad_y_s0_x + grad_y_unclamp_s1_r_x), (grad_y_s0_y + grad_y_unclamp_s1_r_y))*int16(kernel_ya1[(grad_y_unclamp_s1_r_x + ((grad_y_unclamp_s1_r_y*3) + 4))])))
hw_uint<16> hcompute_grad_y_unclamp_stencil_1(hw_uint<16>& grad_y_unclamp_stencil, hw_uint<16>& padded16_global_wrapper_stencil, const int _grad_y_unclamp_s1_r_x, const int _grad_y_unclamp_s1_r_y) {
  int16_t _grad_y_unclamp_stencil_1 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _padded16_global_wrapper_stencil_2 = (int16_t) padded16_global_wrapper_stencil.extract<0, 15>();

  int32_t _kernel_ya1[9];
  // produce kernel_ya1
  _kernel_ya1[0] = 0;
  _kernel_ya1[1] = 0;
  _kernel_ya1[2] = 0;
  _kernel_ya1[3] = 0;
  _kernel_ya1[4] = 0;
  _kernel_ya1[5] = 0;
  _kernel_ya1[6] = 0;
  _kernel_ya1[7] = 0;
  _kernel_ya1[8] = 0;
  _kernel_ya1[6] = 1;
  _kernel_ya1[7] = 2;
  _kernel_ya1[8] = 1;
  _kernel_ya1[0] = -1;
  _kernel_ya1[1] = -2;
  _kernel_ya1[2] = -1;

  int32_t _379 = _grad_y_unclamp_s1_r_y * 3;
  int32_t _380 = _379 + 4;
  int32_t _381 = _grad_y_unclamp_s1_r_x + _380;
  int32_t _382 = ((const int32_t *)_kernel_ya1)[_381];
  int16_t _383 = (int16_t)(_382);
  int16_t _384 = _padded16_global_wrapper_stencil_2 * _383;
  int16_t _385 = _grad_y_unclamp_stencil_1 + _384;
  return _385;
}

//store is: grad_y.stencil(grad_y_s0_x, grad_y_s0_y) = max(min(grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y), (int16)255), (int16)-255)
hw_uint<16> hcompute_grad_y_stencil(hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_y_unclamp_stencil_2 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _404 = (int16_t)(255);
  int16_t _405 = min(_grad_y_unclamp_stencil_2, _404);
  int16_t _406 = (int16_t)(-255);
  int16_t _407 = max(_405, _406);
  return _407;
}

//store is: lxy.stencil(lxy_s0_x, lxy_s0_y) = ((grad_x.stencil(lxy_s0_x, lxy_s0_y)*grad_y.stencil(lxy_s0_x, lxy_s0_y))/(int16)128)
hw_uint<16> hcompute_lxy_stencil(hw_uint<16>& grad_x_stencil, hw_uint<16>& grad_y_stencil) {
  int16_t _grad_x_stencil_2 = (int16_t) grad_x_stencil.extract<0, 15>();

  int16_t _grad_y_stencil_1 = (int16_t) grad_y_stencil.extract<0, 15>();

  int16_t _417 = _grad_x_stencil_2 * _grad_y_stencil_1;
  int16_t _418 = (int16_t)(7);
  int16_t _419 = _417 >> _418;
  return _419;
}

//store is: lgxy.stencil(((lgxy_s0_x_x*3) + -1), ((lgxy_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil() {
  int16_t _428 = (int16_t)(0);
  return _428;
}

//store is: lgxy.stencil((lgxy_s0_x_x*3), ((lgxy_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_1() {
  int16_t _435 = (int16_t)(0);
  return _435;
}

//store is: lgxy.stencil(((lgxy_s0_x_x*3) + 1), ((lgxy_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_2() {
  int16_t _441 = (int16_t)(0);
  return _441;
}

//store is: lgxy.stencil(((lgxy_s0_x_x_1*3) + -1), (lgxy_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_3() {
  int16_t _448 = (int16_t)(0);
  return _448;
}

//store is: lgxy.stencil((lgxy_s0_x_x_1*3), (lgxy_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_4() {
  int16_t _454 = (int16_t)(0);
  return _454;
}

//store is: lgxy.stencil(((lgxy_s0_x_x_1*3) + 1), (lgxy_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_5() {
  int16_t _459 = (int16_t)(0);
  return _459;
}

//store is: lgxy.stencil(((lgxy_s0_x_x_2*3) + -1), ((lgxy_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_6() {
  int16_t _465 = (int16_t)(0);
  return _465;
}

//store is: lgxy.stencil((lgxy_s0_x_x_2*3), ((lgxy_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_7() {
  int16_t _472 = (int16_t)(0);
  return _472;
}

//store is: lgxy.stencil(((lgxy_s0_x_x_2*3) + 1), ((lgxy_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_8() {
  int16_t _478 = (int16_t)(0);
  return _478;
}

//store is: lgxy.stencil(lgxy_s1_x, lgxy_s1_y) = (lgxy.stencil(lgxy_s1_x, lgxy_s1_y) + lxy.stencil((lgxy_s1_box_x + lgxy_s1_x), (lgxy_s1_box_y + lgxy_s1_y)))
hw_uint<16> hcompute_lgxy_stencil_9(hw_uint<16>& lgxy_stencil, hw_uint<16>& lxy_stencil) {
  int16_t _lgxy_stencil_1 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lxy_stencil_1 = (int16_t) lxy_stencil.extract<0, 15>();

  int16_t _485 = _lgxy_stencil_1 + _lxy_stencil_1;
  return _485;
}

//store is: lyy.stencil(lyy_s0_x, lyy_s0_y) = ((grad_y.stencil(lyy_s0_x, lyy_s0_y)*grad_y.stencil(lyy_s0_x, lyy_s0_y))/(int16)128)
hw_uint<16> hcompute_lyy_stencil(hw_uint<16>& grad_y_stencil) {
  int16_t _grad_y_stencil_2 = (int16_t) grad_y_stencil.extract<0, 15>();

  int16_t _492 = _grad_y_stencil_2 * _grad_y_stencil_2;
  int16_t _493 = (int16_t)(7);
  int16_t _494 = _492 >> _493;
  return _494;
}

//store is: lgyy.stencil(((lgyy_s0_x_x*3) + -1), ((lgyy_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil() {
  int16_t _502 = (int16_t)(0);
  return _502;
}

//store is: lgyy.stencil((lgyy_s0_x_x*3), ((lgyy_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_1() {
  int16_t _509 = (int16_t)(0);
  return _509;
}

//store is: lgyy.stencil(((lgyy_s0_x_x*3) + 1), ((lgyy_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_2() {
  int16_t _515 = (int16_t)(0);
  return _515;
}

//store is: lgyy.stencil(((lgyy_s0_x_x_1*3) + -1), (lgyy_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_3() {
  int16_t _522 = (int16_t)(0);
  return _522;
}

//store is: lgyy.stencil((lgyy_s0_x_x_1*3), (lgyy_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_4() {
  int16_t _528 = (int16_t)(0);
  return _528;
}

//store is: lgyy.stencil(((lgyy_s0_x_x_1*3) + 1), (lgyy_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_5() {
  int16_t _533 = (int16_t)(0);
  return _533;
}

//store is: lgyy.stencil(((lgyy_s0_x_x_2*3) + -1), ((lgyy_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_6() {
  int16_t _539 = (int16_t)(0);
  return _539;
}

//store is: lgyy.stencil((lgyy_s0_x_x_2*3), ((lgyy_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_7() {
  int16_t _546 = (int16_t)(0);
  return _546;
}

//store is: lgyy.stencil(((lgyy_s0_x_x_2*3) + 1), ((lgyy_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_8() {
  int16_t _552 = (int16_t)(0);
  return _552;
}

//store is: lgyy.stencil(lgyy_s1_x, lgyy_s1_y) = (lgyy.stencil(lgyy_s1_x, lgyy_s1_y) + lyy.stencil((lgyy_s1_box_x + lgyy_s1_x), (lgyy_s1_box_y + lgyy_s1_y)))
hw_uint<16> hcompute_lgyy_stencil_9(hw_uint<16>& lgyy_stencil, hw_uint<16>& lyy_stencil) {
  int16_t _lgyy_stencil_1 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _lyy_stencil_1 = (int16_t) lyy_stencil.extract<0, 15>();

  int16_t _559 = _lgyy_stencil_1 + _lyy_stencil_1;
  return _559;
}

//store is: cim.stencil(cim_s0_x, cim_s0_y) = ((((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64)*(lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64)) - ((lgxy.stencil(cim_s0_x, cim_s0_y)/(int16)64)*(lgxy.stencil(cim_s0_x, cim_s0_y)/(int16)64))) - ((((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64) + (lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64))*((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64) + (lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64)))/(int16)16))
hw_uint<16> hcompute_cim_stencil(hw_uint<16>& lgxx_stencil, hw_uint<16>& lgxy_stencil, hw_uint<16>& lgyy_stencil) {
  int16_t _lgxx_stencil_2 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lgxy_stencil_2 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lgyy_stencil_2 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _566 = (int16_t)(6);
  int16_t _567 = _lgxx_stencil_2 >> _566;
  int16_t _568 = _lgyy_stencil_2 >> _566;
  int16_t _569 = _567 * _568;
  int16_t _570 = _lgxy_stencil_2 >> _566;
  int16_t _571 = _570 * _570;
  int16_t _572 = _569 - _571;
  int16_t _573 = _567 + _568;
  int16_t _574 = _573 * _573;
  int16_t _575 = (int16_t)(4);
  int16_t _576 = _574 >> _575;
  int16_t _577 = _572 - _576;
  return _577;
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

  bool _605 = _cim_stencil_1 < _cim_stencil_2;
  bool _606 = _cim_stencil_3 < _cim_stencil_2;
  bool _607 = _605 && _606;
  bool _608 = _cim_stencil_4 < _cim_stencil_2;
  bool _609 = _607 && _608;
  bool _610 = _cim_stencil_5 < _cim_stencil_2;
  bool _611 = _609 && _610;
  bool _612 = _cim_stencil_6 < _cim_stencil_2;
  bool _613 = _611 && _612;
  bool _614 = _cim_stencil_7 < _cim_stencil_2;
  bool _615 = _613 && _614;
  bool _616 = _cim_stencil_8 < _cim_stencil_2;
  bool _617 = _615 && _616;
  bool _618 = _cim_stencil_9 < _cim_stencil_2;
  bool _619 = _617 && _618;
  int16_t _620 = (int16_t)(1);
  bool _621 = _620 <= _cim_stencil_2;
  bool _622 = _619 && _621;
  int32_t _623 = (int32_t)(_622 ? 255 : 0);
  int16_t _624 = (int16_t)(_623);
  return _624;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = cim_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& cim_output_stencil) {
  int16_t _cim_output_stencil_1 = (int16_t) cim_output_stencil.extract<0, 15>();

  return _cim_output_stencil_1;
}

