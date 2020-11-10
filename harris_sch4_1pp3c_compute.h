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

//store is: grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y) = ((padded16_global_wrapper.stencil((grad_x_s0_x + -1), (grad_x_s0_y + grad_x_unclamp_s1_r_y))*int16(kernel_x.stencil(-1, grad_x_unclamp_s1_r_y))) + ((padded16_global_wrapper.stencil(grad_x_s0_x, (grad_x_s0_y + grad_x_unclamp_s1_r_y))*int16(kernel_x.stencil(0, grad_x_unclamp_s1_r_y))) + (grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y) + (padded16_global_wrapper.stencil((grad_x_s0_x + 1), (grad_x_s0_y + grad_x_unclamp_s1_r_y))*int16(kernel_x.stencil(1, grad_x_unclamp_s1_r_y))))))
hw_uint<16> hcompute_grad_x_unclamp_stencil_1(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<96>& kernel_x_stencil, hw_uint<48>& padded16_global_wrapper_stencil) {
  int16_t _grad_x_unclamp_stencil_1 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int32_t _kernel_x_stencil_1 = (int32_t) kernel_x_stencil.extract<0, 31>();
  int32_t _kernel_x_stencil_2 = (int32_t) kernel_x_stencil.extract<32, 63>();
  int32_t _kernel_x_stencil_3 = (int32_t) kernel_x_stencil.extract<64, 95>();

  int16_t _padded16_global_wrapper_stencil_1 = (int16_t) padded16_global_wrapper_stencil.extract<0, 15>();
  int16_t _padded16_global_wrapper_stencil_2 = (int16_t) padded16_global_wrapper_stencil.extract<16, 31>();
  int16_t _padded16_global_wrapper_stencil_3 = (int16_t) padded16_global_wrapper_stencil.extract<32, 47>();

  int16_t _263 = (int16_t)(_kernel_x_stencil_1);
  int16_t _264 = _padded16_global_wrapper_stencil_1 * _263;
  int16_t _265 = (int16_t)(_kernel_x_stencil_2);
  int16_t _266 = _padded16_global_wrapper_stencil_2 * _265;
  int16_t _267 = (int16_t)(_kernel_x_stencil_3);
  int16_t _268 = _padded16_global_wrapper_stencil_3 * _267;
  int16_t _269 = _grad_x_unclamp_stencil_1 + _268;
  int16_t _270 = _266 + _269;
  int16_t _271 = _264 + _270;
  return _271;
}

//store is: grad_x.stencil(grad_x_s0_x, grad_x_s0_y) = max(min(grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y), (int16)255), (int16)-255)
hw_uint<16> hcompute_grad_x_stencil(hw_uint<16>& grad_x_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_2 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _291 = (int16_t)(255);
  int16_t _292 = min(_grad_x_unclamp_stencil_2, _291);
  int16_t _293 = (int16_t)(-255);
  int16_t _294 = max(_292, _293);
  return _294;
}

//store is: lxx.stencil(lxx_s0_x, lxx_s0_y) = ((grad_x.stencil(lxx_s0_x, lxx_s0_y)*grad_x.stencil(lxx_s0_x, lxx_s0_y))/(int16)128)
hw_uint<16> hcompute_lxx_stencil(hw_uint<16>& grad_x_stencil) {
  int16_t _grad_x_stencil_1 = (int16_t) grad_x_stencil.extract<0, 15>();

  int16_t _300 = _grad_x_stencil_1 * _grad_x_stencil_1;
  int16_t _301 = (int16_t)(7);
  int16_t _302 = _300 >> _301;
  return _302;
}

//store is: lgxx.stencil(((lgxx_s0_x_x*3) + -1), ((lgxx_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil() {
  int16_t _307 = (int16_t)(0);
  return _307;
}

//store is: lgxx.stencil((lgxx_s0_x_x*3), ((lgxx_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_1() {
  int16_t _313 = (int16_t)(0);
  return _313;
}

//store is: lgxx.stencil(((lgxx_s0_x_x*3) + 1), ((lgxx_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_2() {
  int16_t _318 = (int16_t)(0);
  return _318;
}

//store is: lgxx.stencil(((lgxx_s0_x_x_1*3) + -1), (lgxx_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_3() {
  int16_t _324 = (int16_t)(0);
  return _324;
}

//store is: lgxx.stencil((lgxx_s0_x_x_1*3), (lgxx_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_4() {
  int16_t _329 = (int16_t)(0);
  return _329;
}

//store is: lgxx.stencil(((lgxx_s0_x_x_1*3) + 1), (lgxx_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_5() {
  int16_t _333 = (int16_t)(0);
  return _333;
}

//store is: lgxx.stencil(((lgxx_s0_x_x_2*3) + -1), ((lgxx_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_6() {
  int16_t _338 = (int16_t)(0);
  return _338;
}

//store is: lgxx.stencil((lgxx_s0_x_x_2*3), ((lgxx_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_7() {
  int16_t _344 = (int16_t)(0);
  return _344;
}

//store is: lgxx.stencil(((lgxx_s0_x_x_2*3) + 1), ((lgxx_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_8() {
  int16_t _349 = (int16_t)(0);
  return _349;
}

//store is: lgxx.stencil(lgxx_s1_x, lgxx_s1_y) = (lxx.stencil((lgxx_s1_x + -1), (lgxx_s1_box_y + lgxx_s1_y)) + (lxx.stencil(lgxx_s1_x, (lgxx_s1_box_y + lgxx_s1_y)) + (lgxx.stencil(lgxx_s1_x, lgxx_s1_y) + lxx.stencil((lgxx_s1_x + 1), (lgxx_s1_box_y + lgxx_s1_y)))))
hw_uint<16> hcompute_lgxx_stencil_9(hw_uint<16>& lgxx_stencil, hw_uint<48>& lxx_stencil) {
  int16_t _lgxx_stencil_1 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lxx_stencil_1 = (int16_t) lxx_stencil.extract<0, 15>();
  int16_t _lxx_stencil_2 = (int16_t) lxx_stencil.extract<16, 31>();
  int16_t _lxx_stencil_3 = (int16_t) lxx_stencil.extract<32, 47>();

  int16_t _355 = _lgxx_stencil_1 + _lxx_stencil_3;
  int16_t _356 = _lxx_stencil_2 + _355;
  int16_t _357 = _lxx_stencil_1 + _356;
  return _357;
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
  int16_t _368 = (int16_t)(0);
  return _368;
}

//store is: grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) = ((padded16_global_wrapper.stencil((grad_y_s0_x + -1), (grad_y_s0_y + grad_y_unclamp_s1_r_y))*int16(kernel_y.stencil(-1, grad_y_unclamp_s1_r_y))) + ((padded16_global_wrapper.stencil(grad_y_s0_x, (grad_y_s0_y + grad_y_unclamp_s1_r_y))*int16(kernel_y.stencil(0, grad_y_unclamp_s1_r_y))) + (grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) + (padded16_global_wrapper.stencil((grad_y_s0_x + 1), (grad_y_s0_y + grad_y_unclamp_s1_r_y))*int16(kernel_y.stencil(1, grad_y_unclamp_s1_r_y))))))
hw_uint<16> hcompute_grad_y_unclamp_stencil_1(hw_uint<16>& grad_y_unclamp_stencil, hw_uint<96>& kernel_y_stencil, hw_uint<48>& padded16_global_wrapper_stencil) {
  int16_t _grad_y_unclamp_stencil_1 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int32_t _kernel_y_stencil_1 = (int32_t) kernel_y_stencil.extract<0, 31>();
  int32_t _kernel_y_stencil_2 = (int32_t) kernel_y_stencil.extract<32, 63>();
  int32_t _kernel_y_stencil_3 = (int32_t) kernel_y_stencil.extract<64, 95>();

  int16_t _padded16_global_wrapper_stencil_4 = (int16_t) padded16_global_wrapper_stencil.extract<0, 15>();
  int16_t _padded16_global_wrapper_stencil_5 = (int16_t) padded16_global_wrapper_stencil.extract<16, 31>();
  int16_t _padded16_global_wrapper_stencil_6 = (int16_t) padded16_global_wrapper_stencil.extract<32, 47>();

  int16_t _370 = (int16_t)(_kernel_y_stencil_1);
  int16_t _371 = _padded16_global_wrapper_stencil_4 * _370;
  int16_t _372 = (int16_t)(_kernel_y_stencil_2);
  int16_t _373 = _padded16_global_wrapper_stencil_5 * _372;
  int16_t _374 = (int16_t)(_kernel_y_stencil_3);
  int16_t _375 = _padded16_global_wrapper_stencil_6 * _374;
  int16_t _376 = _grad_y_unclamp_stencil_1 + _375;
  int16_t _377 = _373 + _376;
  int16_t _378 = _371 + _377;
  return _378;
}

//store is: grad_y.stencil(grad_y_s0_x, grad_y_s0_y) = max(min(grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y), (int16)255), (int16)-255)
hw_uint<16> hcompute_grad_y_stencil(hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_y_unclamp_stencil_2 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _398 = (int16_t)(255);
  int16_t _399 = min(_grad_y_unclamp_stencil_2, _398);
  int16_t _400 = (int16_t)(-255);
  int16_t _401 = max(_399, _400);
  return _401;
}

//store is: lxy.stencil(lxy_s0_x, lxy_s0_y) = ((grad_x.stencil(lxy_s0_x, lxy_s0_y)*grad_y.stencil(lxy_s0_x, lxy_s0_y))/(int16)128)
hw_uint<16> hcompute_lxy_stencil(hw_uint<16>& grad_x_stencil, hw_uint<16>& grad_y_stencil) {
  int16_t _grad_x_stencil_2 = (int16_t) grad_x_stencil.extract<0, 15>();

  int16_t _grad_y_stencil_1 = (int16_t) grad_y_stencil.extract<0, 15>();

  int16_t _407 = _grad_x_stencil_2 * _grad_y_stencil_1;
  int16_t _408 = (int16_t)(7);
  int16_t _409 = _407 >> _408;
  return _409;
}

//store is: lgxy.stencil(((lgxy_s0_x_x*3) + -1), ((lgxy_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil() {
  int16_t _415 = (int16_t)(0);
  return _415;
}

//store is: lgxy.stencil((lgxy_s0_x_x*3), ((lgxy_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_1() {
  int16_t _421 = (int16_t)(0);
  return _421;
}

//store is: lgxy.stencil(((lgxy_s0_x_x*3) + 1), ((lgxy_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_2() {
  int16_t _426 = (int16_t)(0);
  return _426;
}

//store is: lgxy.stencil(((lgxy_s0_x_x_1*3) + -1), (lgxy_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_3() {
  int16_t _432 = (int16_t)(0);
  return _432;
}

//store is: lgxy.stencil((lgxy_s0_x_x_1*3), (lgxy_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_4() {
  int16_t _437 = (int16_t)(0);
  return _437;
}

//store is: lgxy.stencil(((lgxy_s0_x_x_1*3) + 1), (lgxy_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_5() {
  int16_t _441 = (int16_t)(0);
  return _441;
}

//store is: lgxy.stencil(((lgxy_s0_x_x_2*3) + -1), ((lgxy_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_6() {
  int16_t _446 = (int16_t)(0);
  return _446;
}

//store is: lgxy.stencil((lgxy_s0_x_x_2*3), ((lgxy_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_7() {
  int16_t _452 = (int16_t)(0);
  return _452;
}

//store is: lgxy.stencil(((lgxy_s0_x_x_2*3) + 1), ((lgxy_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_8() {
  int16_t _457 = (int16_t)(0);
  return _457;
}

//store is: lgxy.stencil(lgxy_s1_x, lgxy_s1_y) = (lxy.stencil((lgxy_s1_x + -1), (lgxy_s1_box_y + lgxy_s1_y)) + (lxy.stencil(lgxy_s1_x, (lgxy_s1_box_y + lgxy_s1_y)) + (lgxy.stencil(lgxy_s1_x, lgxy_s1_y) + lxy.stencil((lgxy_s1_x + 1), (lgxy_s1_box_y + lgxy_s1_y)))))
hw_uint<16> hcompute_lgxy_stencil_9(hw_uint<16>& lgxy_stencil, hw_uint<48>& lxy_stencil) {
  int16_t _lgxy_stencil_1 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lxy_stencil_1 = (int16_t) lxy_stencil.extract<0, 15>();
  int16_t _lxy_stencil_2 = (int16_t) lxy_stencil.extract<16, 31>();
  int16_t _lxy_stencil_3 = (int16_t) lxy_stencil.extract<32, 47>();

  int16_t _463 = _lgxy_stencil_1 + _lxy_stencil_3;
  int16_t _464 = _lxy_stencil_2 + _463;
  int16_t _465 = _lxy_stencil_1 + _464;
  return _465;
}

//store is: lyy.stencil(lyy_s0_x, lyy_s0_y) = ((grad_y.stencil(lyy_s0_x, lyy_s0_y)*grad_y.stencil(lyy_s0_x, lyy_s0_y))/(int16)128)
hw_uint<16> hcompute_lyy_stencil(hw_uint<16>& grad_y_stencil) {
  int16_t _grad_y_stencil_2 = (int16_t) grad_y_stencil.extract<0, 15>();

  int16_t _476 = _grad_y_stencil_2 * _grad_y_stencil_2;
  int16_t _477 = (int16_t)(7);
  int16_t _478 = _476 >> _477;
  return _478;
}

//store is: lgyy.stencil(((lgyy_s0_x_x*3) + -1), ((lgyy_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil() {
  int16_t _483 = (int16_t)(0);
  return _483;
}

//store is: lgyy.stencil((lgyy_s0_x_x*3), ((lgyy_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_1() {
  int16_t _489 = (int16_t)(0);
  return _489;
}

//store is: lgyy.stencil(((lgyy_s0_x_x*3) + 1), ((lgyy_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_2() {
  int16_t _494 = (int16_t)(0);
  return _494;
}

//store is: lgyy.stencil(((lgyy_s0_x_x_1*3) + -1), (lgyy_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_3() {
  int16_t _500 = (int16_t)(0);
  return _500;
}

//store is: lgyy.stencil((lgyy_s0_x_x_1*3), (lgyy_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_4() {
  int16_t _505 = (int16_t)(0);
  return _505;
}

//store is: lgyy.stencil(((lgyy_s0_x_x_1*3) + 1), (lgyy_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_5() {
  int16_t _509 = (int16_t)(0);
  return _509;
}

//store is: lgyy.stencil(((lgyy_s0_x_x_2*3) + -1), ((lgyy_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_6() {
  int16_t _514 = (int16_t)(0);
  return _514;
}

//store is: lgyy.stencil((lgyy_s0_x_x_2*3), ((lgyy_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_7() {
  int16_t _520 = (int16_t)(0);
  return _520;
}

//store is: lgyy.stencil(((lgyy_s0_x_x_2*3) + 1), ((lgyy_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_8() {
  int16_t _525 = (int16_t)(0);
  return _525;
}

//store is: lgyy.stencil(lgyy_s1_x, lgyy_s1_y) = (lyy.stencil((lgyy_s1_x + -1), (lgyy_s1_box_y + lgyy_s1_y)) + (lyy.stencil(lgyy_s1_x, (lgyy_s1_box_y + lgyy_s1_y)) + (lgyy.stencil(lgyy_s1_x, lgyy_s1_y) + lyy.stencil((lgyy_s1_x + 1), (lgyy_s1_box_y + lgyy_s1_y)))))
hw_uint<16> hcompute_lgyy_stencil_9(hw_uint<16>& lgyy_stencil, hw_uint<48>& lyy_stencil) {
  int16_t _lgyy_stencil_1 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _lyy_stencil_1 = (int16_t) lyy_stencil.extract<0, 15>();
  int16_t _lyy_stencil_2 = (int16_t) lyy_stencil.extract<16, 31>();
  int16_t _lyy_stencil_3 = (int16_t) lyy_stencil.extract<32, 47>();

  int16_t _531 = _lgyy_stencil_1 + _lyy_stencil_3;
  int16_t _532 = _lyy_stencil_2 + _531;
  int16_t _533 = _lyy_stencil_1 + _532;
  return _533;
}

//store is: cim.stencil(cim_s0_x, cim_s0_y) = ((((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64)*(lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64)) - ((lgxy.stencil(cim_s0_x, cim_s0_y)/(int16)64)*(lgxy.stencil(cim_s0_x, cim_s0_y)/(int16)64))) - ((((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64) + (lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64))*((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64) + (lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64)))/(int16)16))
hw_uint<16> hcompute_cim_stencil(hw_uint<16>& lgxx_stencil, hw_uint<16>& lgxy_stencil, hw_uint<16>& lgyy_stencil) {
  int16_t _lgxx_stencil_2 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lgxy_stencil_2 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lgyy_stencil_2 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _544 = (int16_t)(6);
  int16_t _545 = _lgxx_stencil_2 >> _544;
  int16_t _546 = _lgyy_stencil_2 >> _544;
  int16_t _547 = _545 * _546;
  int16_t _548 = _lgxy_stencil_2 >> _544;
  int16_t _549 = _548 * _548;
  int16_t _550 = _547 - _549;
  int16_t _551 = _545 + _546;
  int16_t _552 = _551 * _551;
  int16_t _553 = (int16_t)(4);
  int16_t _554 = _552 >> _553;
  int16_t _555 = _550 - _554;
  return _555;
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

  bool _571 = _cim_stencil_1 < _cim_stencil_2;
  bool _572 = _cim_stencil_3 < _cim_stencil_2;
  bool _573 = _571 && _572;
  bool _574 = _cim_stencil_4 < _cim_stencil_2;
  bool _575 = _573 && _574;
  bool _576 = _cim_stencil_5 < _cim_stencil_2;
  bool _577 = _575 && _576;
  bool _578 = _cim_stencil_6 < _cim_stencil_2;
  bool _579 = _577 && _578;
  bool _580 = _cim_stencil_7 < _cim_stencil_2;
  bool _581 = _579 && _580;
  bool _582 = _cim_stencil_8 < _cim_stencil_2;
  bool _583 = _581 && _582;
  bool _584 = _cim_stencil_9 < _cim_stencil_2;
  bool _585 = _583 && _584;
  int16_t _586 = (int16_t)(1);
  bool _587 = _586 <= _cim_stencil_2;
  bool _588 = _585 && _587;
  int32_t _589 = (int32_t)(_588 ? 255 : 0);
  int16_t _590 = (int16_t)(_589);
  return _590;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = cim_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& cim_output_stencil) {
  int16_t _cim_output_stencil_1 = (int16_t) cim_output_stencil.extract<0, 15>();

  return _cim_output_stencil_1;
}

