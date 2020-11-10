#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: kernel_x.stencil(-1, -1) = 0
hw_uint<32> hcompute_kernel_x_stencil() {
  return 0;
}

//store is: kernel_x.stencil(0, -1) = 0
hw_uint<32> hcompute_kernel_x_stencil_1() {
  return 0;
}

//store is: kernel_x.stencil(1, -1) = 0
hw_uint<32> hcompute_kernel_x_stencil_2() {
  return 0;
}

//store is: kernel_x.stencil(-1, 0) = 0
hw_uint<32> hcompute_kernel_x_stencil_3() {
  return 0;
}

//store is: kernel_x.stencil(0, 0) = 0
hw_uint<32> hcompute_kernel_x_stencil_4() {
  return 0;
}

//store is: kernel_x.stencil(1, 0) = 0
hw_uint<32> hcompute_kernel_x_stencil_5() {
  return 0;
}

//store is: kernel_x.stencil(-1, 1) = 0
hw_uint<32> hcompute_kernel_x_stencil_6() {
  return 0;
}

//store is: kernel_x.stencil(0, 1) = 0
hw_uint<32> hcompute_kernel_x_stencil_7() {
  return 0;
}

//store is: kernel_x.stencil(1, 1) = 0
hw_uint<32> hcompute_kernel_x_stencil_8() {
  return 0;
}

//store is: kernel_x.stencil(-1, -1) = -1
hw_uint<32> hcompute_kernel_x_stencil_9() {
  return -1;
}

//store is: kernel_x.stencil(-1, 0) = -2
hw_uint<32> hcompute_kernel_x_stencil_10() {
  return -2;
}

//store is: kernel_x.stencil(-1, 1) = -1
hw_uint<32> hcompute_kernel_x_stencil_11() {
  return -1;
}

//store is: kernel_x.stencil(1, -1) = 1
hw_uint<32> hcompute_kernel_x_stencil_12() {
  return 1;
}

//store is: kernel_x.stencil(1, 0) = 2
hw_uint<32> hcompute_kernel_x_stencil_13() {
  return 2;
}

//store is: kernel_x.stencil(1, 1) = 1
hw_uint<32> hcompute_kernel_x_stencil_14() {
  return 1;
}

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

//store is: grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y) = (grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y) + (padded16_global_wrapper.stencil((grad_x_s0_x + grad_x_unclamp_s1_r_x), (grad_x_s0_y + grad_x_unclamp_s1_r_y))*int16(kernel_x.stencil(grad_x_unclamp_s1_r_x, grad_x_unclamp_s1_r_y))))
hw_uint<16> hcompute_grad_x_unclamp_stencil_1(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<32>& kernel_x_stencil, hw_uint<16>& padded16_global_wrapper_stencil) {
  int16_t _grad_x_unclamp_stencil_1 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int32_t _kernel_x_stencil_1 = (int32_t) kernel_x_stencil.extract<0, 31>();

  int16_t _padded16_global_wrapper_stencil_1 = (int16_t) padded16_global_wrapper_stencil.extract<0, 15>();

  int16_t _263 = (int16_t)(_kernel_x_stencil_1);
  int16_t _264 = _padded16_global_wrapper_stencil_1 * _263;
  int16_t _265 = _grad_x_unclamp_stencil_1 + _264;
  return _265;
}

//store is: grad_x.stencil(grad_x_s0_x, grad_x_s0_y) = max(min(grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y), (int16)255), (int16)-255)
hw_uint<16> hcompute_grad_x_stencil(hw_uint<16>& grad_x_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_2 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _274 = (int16_t)(255);
  int16_t _275 = min(_grad_x_unclamp_stencil_2, _274);
  int16_t _276 = (int16_t)(-255);
  int16_t _277 = max(_275, _276);
  return _277;
}

//store is: lxx.stencil(lxx_s0_x, lxx_s0_y) = ((grad_x.stencil(lxx_s0_x, lxx_s0_y)*grad_x.stencil(lxx_s0_x, lxx_s0_y))/(int16)128)
hw_uint<16> hcompute_lxx_stencil(hw_uint<16>& grad_x_stencil) {
  int16_t _grad_x_stencil_1 = (int16_t) grad_x_stencil.extract<0, 15>();

  int16_t _283 = _grad_x_stencil_1 * _grad_x_stencil_1;
  int16_t _284 = (int16_t)(7);
  int16_t _285 = _283 >> _284;
  return _285;
}

//store is: lgxx.stencil(((lgxx_s0_x_x*3) + -1), ((lgxx_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil() {
  int16_t _290 = (int16_t)(0);
  return _290;
}

//store is: lgxx.stencil((lgxx_s0_x_x*3), ((lgxx_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_1() {
  int16_t _296 = (int16_t)(0);
  return _296;
}

//store is: lgxx.stencil(((lgxx_s0_x_x*3) + 1), ((lgxx_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_2() {
  int16_t _301 = (int16_t)(0);
  return _301;
}

//store is: lgxx.stencil(((lgxx_s0_x_x_1*3) + -1), (lgxx_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_3() {
  int16_t _307 = (int16_t)(0);
  return _307;
}

//store is: lgxx.stencil((lgxx_s0_x_x_1*3), (lgxx_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_4() {
  int16_t _312 = (int16_t)(0);
  return _312;
}

//store is: lgxx.stencil(((lgxx_s0_x_x_1*3) + 1), (lgxx_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_5() {
  int16_t _316 = (int16_t)(0);
  return _316;
}

//store is: lgxx.stencil(((lgxx_s0_x_x_2*3) + -1), ((lgxx_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_6() {
  int16_t _321 = (int16_t)(0);
  return _321;
}

//store is: lgxx.stencil((lgxx_s0_x_x_2*3), ((lgxx_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_7() {
  int16_t _327 = (int16_t)(0);
  return _327;
}

//store is: lgxx.stencil(((lgxx_s0_x_x_2*3) + 1), ((lgxx_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_8() {
  int16_t _332 = (int16_t)(0);
  return _332;
}

//store is: lgxx.stencil(lgxx_s1_x, lgxx_s1_y) = (lgxx.stencil(lgxx_s1_x, lgxx_s1_y) + lxx.stencil((lgxx_s1_box_x + lgxx_s1_x), (lgxx_s1_box_y + lgxx_s1_y)))
hw_uint<16> hcompute_lgxx_stencil_9(hw_uint<16>& lgxx_stencil, hw_uint<16>& lxx_stencil) {
  int16_t _lgxx_stencil_1 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lxx_stencil_1 = (int16_t) lxx_stencil.extract<0, 15>();

  int16_t _338 = _lgxx_stencil_1 + _lxx_stencil_1;
  return _338;
}

//store is: kernel_y.stencil(-1, -1) = 0
hw_uint<32> hcompute_kernel_y_stencil() {
  return 0;
}

//store is: kernel_y.stencil(0, -1) = 0
hw_uint<32> hcompute_kernel_y_stencil_1() {
  return 0;
}

//store is: kernel_y.stencil(1, -1) = 0
hw_uint<32> hcompute_kernel_y_stencil_2() {
  return 0;
}

//store is: kernel_y.stencil(-1, 0) = 0
hw_uint<32> hcompute_kernel_y_stencil_3() {
  return 0;
}

//store is: kernel_y.stencil(0, 0) = 0
hw_uint<32> hcompute_kernel_y_stencil_4() {
  return 0;
}

//store is: kernel_y.stencil(1, 0) = 0
hw_uint<32> hcompute_kernel_y_stencil_5() {
  return 0;
}

//store is: kernel_y.stencil(-1, 1) = 0
hw_uint<32> hcompute_kernel_y_stencil_6() {
  return 0;
}

//store is: kernel_y.stencil(0, 1) = 0
hw_uint<32> hcompute_kernel_y_stencil_7() {
  return 0;
}

//store is: kernel_y.stencil(1, 1) = 0
hw_uint<32> hcompute_kernel_y_stencil_8() {
  return 0;
}

//store is: kernel_y.stencil(-1, 1) = 1
hw_uint<32> hcompute_kernel_y_stencil_9() {
  return 1;
}

//store is: kernel_y.stencil(0, 1) = 2
hw_uint<32> hcompute_kernel_y_stencil_10() {
  return 2;
}

//store is: kernel_y.stencil(1, 1) = 1
hw_uint<32> hcompute_kernel_y_stencil_11() {
  return 1;
}

//store is: kernel_y.stencil(-1, -1) = -1
hw_uint<32> hcompute_kernel_y_stencil_12() {
  return -1;
}

//store is: kernel_y.stencil(0, -1) = -2
hw_uint<32> hcompute_kernel_y_stencil_13() {
  return -2;
}

//store is: kernel_y.stencil(1, -1) = -1
hw_uint<32> hcompute_kernel_y_stencil_14() {
  return -1;
}

//store is: grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) = (int16)0
hw_uint<16> hcompute_grad_y_unclamp_stencil() {
  int16_t _344 = (int16_t)(0);
  return _344;
}

//store is: grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) = (grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) + (padded16_global_wrapper.stencil((grad_y_s0_x + grad_y_unclamp_s1_r_x), (grad_y_s0_y + grad_y_unclamp_s1_r_y))*int16(kernel_y.stencil(grad_y_unclamp_s1_r_x, grad_y_unclamp_s1_r_y))))
hw_uint<16> hcompute_grad_y_unclamp_stencil_1(hw_uint<16>& grad_y_unclamp_stencil, hw_uint<32>& kernel_y_stencil, hw_uint<16>& padded16_global_wrapper_stencil) {
  int16_t _grad_y_unclamp_stencil_1 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int32_t _kernel_y_stencil_1 = (int32_t) kernel_y_stencil.extract<0, 31>();

  int16_t _padded16_global_wrapper_stencil_2 = (int16_t) padded16_global_wrapper_stencil.extract<0, 15>();

  int16_t _346 = (int16_t)(_kernel_y_stencil_1);
  int16_t _347 = _padded16_global_wrapper_stencil_2 * _346;
  int16_t _348 = _grad_y_unclamp_stencil_1 + _347;
  return _348;
}

//store is: grad_y.stencil(grad_y_s0_x, grad_y_s0_y) = max(min(grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y), (int16)255), (int16)-255)
hw_uint<16> hcompute_grad_y_stencil(hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_y_unclamp_stencil_2 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _357 = (int16_t)(255);
  int16_t _358 = min(_grad_y_unclamp_stencil_2, _357);
  int16_t _359 = (int16_t)(-255);
  int16_t _360 = max(_358, _359);
  return _360;
}

//store is: lxy.stencil(lxy_s0_x, lxy_s0_y) = ((grad_x.stencil(lxy_s0_x, lxy_s0_y)*grad_y.stencil(lxy_s0_x, lxy_s0_y))/(int16)128)
hw_uint<16> hcompute_lxy_stencil(hw_uint<16>& grad_x_stencil, hw_uint<16>& grad_y_stencil) {
  int16_t _grad_x_stencil_2 = (int16_t) grad_x_stencil.extract<0, 15>();

  int16_t _grad_y_stencil_1 = (int16_t) grad_y_stencil.extract<0, 15>();

  int16_t _366 = _grad_x_stencil_2 * _grad_y_stencil_1;
  int16_t _367 = (int16_t)(7);
  int16_t _368 = _366 >> _367;
  return _368;
}

//store is: lgxy.stencil(((lgxy_s0_x_x*3) + -1), ((lgxy_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil() {
  int16_t _374 = (int16_t)(0);
  return _374;
}

//store is: lgxy.stencil((lgxy_s0_x_x*3), ((lgxy_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_1() {
  int16_t _380 = (int16_t)(0);
  return _380;
}

//store is: lgxy.stencil(((lgxy_s0_x_x*3) + 1), ((lgxy_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_2() {
  int16_t _385 = (int16_t)(0);
  return _385;
}

//store is: lgxy.stencil(((lgxy_s0_x_x_1*3) + -1), (lgxy_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_3() {
  int16_t _391 = (int16_t)(0);
  return _391;
}

//store is: lgxy.stencil((lgxy_s0_x_x_1*3), (lgxy_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_4() {
  int16_t _396 = (int16_t)(0);
  return _396;
}

//store is: lgxy.stencil(((lgxy_s0_x_x_1*3) + 1), (lgxy_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_5() {
  int16_t _400 = (int16_t)(0);
  return _400;
}

//store is: lgxy.stencil(((lgxy_s0_x_x_2*3) + -1), ((lgxy_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_6() {
  int16_t _405 = (int16_t)(0);
  return _405;
}

//store is: lgxy.stencil((lgxy_s0_x_x_2*3), ((lgxy_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_7() {
  int16_t _411 = (int16_t)(0);
  return _411;
}

//store is: lgxy.stencil(((lgxy_s0_x_x_2*3) + 1), ((lgxy_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_8() {
  int16_t _416 = (int16_t)(0);
  return _416;
}

//store is: lgxy.stencil(lgxy_s1_x, lgxy_s1_y) = (lgxy.stencil(lgxy_s1_x, lgxy_s1_y) + lxy.stencil((lgxy_s1_box_x + lgxy_s1_x), (lgxy_s1_box_y + lgxy_s1_y)))
hw_uint<16> hcompute_lgxy_stencil_9(hw_uint<16>& lgxy_stencil, hw_uint<16>& lxy_stencil) {
  int16_t _lgxy_stencil_1 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lxy_stencil_1 = (int16_t) lxy_stencil.extract<0, 15>();

  int16_t _422 = _lgxy_stencil_1 + _lxy_stencil_1;
  return _422;
}

//store is: lyy.stencil(lyy_s0_x, lyy_s0_y) = ((grad_y.stencil(lyy_s0_x, lyy_s0_y)*grad_y.stencil(lyy_s0_x, lyy_s0_y))/(int16)128)
hw_uint<16> hcompute_lyy_stencil(hw_uint<16>& grad_y_stencil) {
  int16_t _grad_y_stencil_2 = (int16_t) grad_y_stencil.extract<0, 15>();

  int16_t _428 = _grad_y_stencil_2 * _grad_y_stencil_2;
  int16_t _429 = (int16_t)(7);
  int16_t _430 = _428 >> _429;
  return _430;
}

//store is: lgyy.stencil(((lgyy_s0_x_x*3) + -1), ((lgyy_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil() {
  int16_t _435 = (int16_t)(0);
  return _435;
}

//store is: lgyy.stencil((lgyy_s0_x_x*3), ((lgyy_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_1() {
  int16_t _441 = (int16_t)(0);
  return _441;
}

//store is: lgyy.stencil(((lgyy_s0_x_x*3) + 1), ((lgyy_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_2() {
  int16_t _446 = (int16_t)(0);
  return _446;
}

//store is: lgyy.stencil(((lgyy_s0_x_x_1*3) + -1), (lgyy_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_3() {
  int16_t _452 = (int16_t)(0);
  return _452;
}

//store is: lgyy.stencil((lgyy_s0_x_x_1*3), (lgyy_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_4() {
  int16_t _457 = (int16_t)(0);
  return _457;
}

//store is: lgyy.stencil(((lgyy_s0_x_x_1*3) + 1), (lgyy_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_5() {
  int16_t _461 = (int16_t)(0);
  return _461;
}

//store is: lgyy.stencil(((lgyy_s0_x_x_2*3) + -1), ((lgyy_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_6() {
  int16_t _466 = (int16_t)(0);
  return _466;
}

//store is: lgyy.stencil((lgyy_s0_x_x_2*3), ((lgyy_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_7() {
  int16_t _472 = (int16_t)(0);
  return _472;
}

//store is: lgyy.stencil(((lgyy_s0_x_x_2*3) + 1), ((lgyy_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_8() {
  int16_t _477 = (int16_t)(0);
  return _477;
}

//store is: lgyy.stencil(lgyy_s1_x, lgyy_s1_y) = (lgyy.stencil(lgyy_s1_x, lgyy_s1_y) + lyy.stencil((lgyy_s1_box_x + lgyy_s1_x), (lgyy_s1_box_y + lgyy_s1_y)))
hw_uint<16> hcompute_lgyy_stencil_9(hw_uint<16>& lgyy_stencil, hw_uint<16>& lyy_stencil) {
  int16_t _lgyy_stencil_1 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _lyy_stencil_1 = (int16_t) lyy_stencil.extract<0, 15>();

  int16_t _483 = _lgyy_stencil_1 + _lyy_stencil_1;
  return _483;
}

//store is: cim.stencil(cim_s0_x, cim_s0_y) = ((((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64)*(lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64)) - ((lgxy.stencil(cim_s0_x, cim_s0_y)/(int16)64)*(lgxy.stencil(cim_s0_x, cim_s0_y)/(int16)64))) - ((((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64) + (lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64))*((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64) + (lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64)))/(int16)16))
hw_uint<16> hcompute_cim_stencil(hw_uint<16>& lgxx_stencil, hw_uint<16>& lgxy_stencil, hw_uint<16>& lgyy_stencil) {
  int16_t _lgxx_stencil_2 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lgxy_stencil_2 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lgyy_stencil_2 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _489 = (int16_t)(6);
  int16_t _490 = _lgxx_stencil_2 >> _489;
  int16_t _491 = _lgyy_stencil_2 >> _489;
  int16_t _492 = _490 * _491;
  int16_t _493 = _lgxy_stencil_2 >> _489;
  int16_t _494 = _493 * _493;
  int16_t _495 = _492 - _494;
  int16_t _496 = _490 + _491;
  int16_t _497 = _496 * _496;
  int16_t _498 = (int16_t)(4);
  int16_t _499 = _497 >> _498;
  int16_t _500 = _495 - _499;
  return _500;
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

  bool _516 = _cim_stencil_1 < _cim_stencil_2;
  bool _517 = _cim_stencil_3 < _cim_stencil_2;
  bool _518 = _516 && _517;
  bool _519 = _cim_stencil_4 < _cim_stencil_2;
  bool _520 = _518 && _519;
  bool _521 = _cim_stencil_5 < _cim_stencil_2;
  bool _522 = _520 && _521;
  bool _523 = _cim_stencil_6 < _cim_stencil_2;
  bool _524 = _522 && _523;
  bool _525 = _cim_stencil_7 < _cim_stencil_2;
  bool _526 = _524 && _525;
  bool _527 = _cim_stencil_8 < _cim_stencil_2;
  bool _528 = _526 && _527;
  bool _529 = _cim_stencil_9 < _cim_stencil_2;
  bool _530 = _528 && _529;
  int16_t _531 = (int16_t)(1);
  bool _532 = _531 <= _cim_stencil_2;
  bool _533 = _530 && _532;
  int32_t _534 = (int32_t)(_533 ? 255 : 0);
  int16_t _535 = (int16_t)(_534);
  return _535;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = cim_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& cim_output_stencil) {
  int16_t _cim_output_stencil_1 = (int16_t) cim_output_stencil.extract<0, 15>();

  return _cim_output_stencil_1;
}

