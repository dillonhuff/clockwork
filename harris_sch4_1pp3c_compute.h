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

//store is: grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y) = ((padded16_global_wrapper.stencil((grad_x_s0_x + -1), (grad_x_s0_y + grad_x_unclamp_s1_r_y))*int16(kernel_xa0[((grad_x_unclamp_s1_r_y*3) + 3)])) + ((padded16_global_wrapper.stencil(grad_x_s0_x, (grad_x_s0_y + grad_x_unclamp_s1_r_y))*int16(kernel_xa0[((grad_x_unclamp_s1_r_y*3) + 4)])) + (grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y) + (padded16_global_wrapper.stencil((grad_x_s0_x + 1), (grad_x_s0_y + grad_x_unclamp_s1_r_y))*int16(kernel_xa0[((grad_x_unclamp_s1_r_y*3) + 5)])))))
hw_uint<16> hcompute_grad_x_unclamp_stencil_1(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<48>& padded16_global_wrapper_stencil, const int _grad_x_unclamp_s1_r_y) {
  int16_t _grad_x_unclamp_stencil_1 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _padded16_global_wrapper_stencil_1 = (int16_t) padded16_global_wrapper_stencil.extract<0, 15>();
  int16_t _padded16_global_wrapper_stencil_2 = (int16_t) padded16_global_wrapper_stencil.extract<16, 31>();
  int16_t _padded16_global_wrapper_stencil_3 = (int16_t) padded16_global_wrapper_stencil.extract<32, 47>();

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
  int32_t _265 = _264 + 3;
  int32_t _266 = ((const int32_t *)_kernel_xa0)[_265];
  int16_t _267 = (int16_t)(_266);
  int16_t _268 = _padded16_global_wrapper_stencil_1 * _267;
  int32_t _269 = _264 + 4;
  int32_t _270 = ((const int32_t *)_kernel_xa0)[_269];
  int16_t _271 = (int16_t)(_270);
  int16_t _272 = _padded16_global_wrapper_stencil_2 * _271;
  int32_t _273 = _264 + 5;
  int32_t _274 = ((const int32_t *)_kernel_xa0)[_273];
  int16_t _275 = (int16_t)(_274);
  int16_t _276 = _padded16_global_wrapper_stencil_3 * _275;
  int16_t _277 = _grad_x_unclamp_stencil_1 + _276;
  int16_t _278 = _272 + _277;
  int16_t _279 = _268 + _278;
  return _279;
}

//store is: grad_x.stencil(grad_x_s0_x, grad_x_s0_y) = max(min(grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y), (int16)255), (int16)-255)
hw_uint<16> hcompute_grad_x_stencil(hw_uint<16>& grad_x_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_2 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _319 = (int16_t)(255);
  int16_t _320 = min(_grad_x_unclamp_stencil_2, _319);
  int16_t _321 = (int16_t)(-255);
  int16_t _322 = max(_320, _321);
  return _322;
}

//store is: lxx.stencil(lxx_s0_x, lxx_s0_y) = ((grad_x.stencil(lxx_s0_x, lxx_s0_y)*grad_x.stencil(lxx_s0_x, lxx_s0_y))/(int16)128)
hw_uint<16> hcompute_lxx_stencil(hw_uint<16>& grad_x_stencil) {
  int16_t _grad_x_stencil_1 = (int16_t) grad_x_stencil.extract<0, 15>();

  int16_t _332 = _grad_x_stencil_1 * _grad_x_stencil_1;
  int16_t _333 = (int16_t)(7);
  int16_t _334 = _332 >> _333;
  return _334;
}

//store is: lgxx.stencil(((lgxx_s0_x_x*3) + -1), ((lgxx_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil() {
  int16_t _342 = (int16_t)(0);
  return _342;
}

//store is: lgxx.stencil((lgxx_s0_x_x*3), ((lgxx_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_1() {
  int16_t _349 = (int16_t)(0);
  return _349;
}

//store is: lgxx.stencil(((lgxx_s0_x_x*3) + 1), ((lgxx_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_2() {
  int16_t _355 = (int16_t)(0);
  return _355;
}

//store is: lgxx.stencil(((lgxx_s0_x_x_1*3) + -1), (lgxx_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_3() {
  int16_t _362 = (int16_t)(0);
  return _362;
}

//store is: lgxx.stencil((lgxx_s0_x_x_1*3), (lgxx_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_4() {
  int16_t _368 = (int16_t)(0);
  return _368;
}

//store is: lgxx.stencil(((lgxx_s0_x_x_1*3) + 1), (lgxx_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_5() {
  int16_t _373 = (int16_t)(0);
  return _373;
}

//store is: lgxx.stencil(((lgxx_s0_x_x_2*3) + -1), ((lgxx_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_6() {
  int16_t _379 = (int16_t)(0);
  return _379;
}

//store is: lgxx.stencil((lgxx_s0_x_x_2*3), ((lgxx_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_7() {
  int16_t _386 = (int16_t)(0);
  return _386;
}

//store is: lgxx.stencil(((lgxx_s0_x_x_2*3) + 1), ((lgxx_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_8() {
  int16_t _392 = (int16_t)(0);
  return _392;
}

//store is: lgxx.stencil(lgxx_s1_x, lgxx_s1_y) = (lxx.stencil((lgxx_s1_x + -1), (lgxx_s1_box_y + lgxx_s1_y)) + (lxx.stencil(lgxx_s1_x, (lgxx_s1_box_y + lgxx_s1_y)) + (lgxx.stencil(lgxx_s1_x, lgxx_s1_y) + lxx.stencil((lgxx_s1_x + 1), (lgxx_s1_box_y + lgxx_s1_y)))))
hw_uint<16> hcompute_lgxx_stencil_9(hw_uint<16>& lgxx_stencil, hw_uint<48>& lxx_stencil) {
  int16_t _lgxx_stencil_1 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lxx_stencil_1 = (int16_t) lxx_stencil.extract<0, 15>();
  int16_t _lxx_stencil_2 = (int16_t) lxx_stencil.extract<16, 31>();
  int16_t _lxx_stencil_3 = (int16_t) lxx_stencil.extract<32, 47>();

  int16_t _399 = _lgxx_stencil_1 + _lxx_stencil_3;
  int16_t _400 = _lxx_stencil_2 + _399;
  int16_t _401 = _lxx_stencil_1 + _400;
  return _401;
}

//store is: grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) = (int16)0
hw_uint<16> hcompute_grad_y_unclamp_stencil() {
  int16_t _415 = (int16_t)(0);
  return _415;
}

//store is: grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) = ((padded16_global_wrapper.stencil((grad_y_s0_x + -1), (grad_y_s0_y + grad_y_unclamp_s1_r_y))*int16(kernel_ya1[((grad_y_unclamp_s1_r_y*3) + 3)])) + ((padded16_global_wrapper.stencil(grad_y_s0_x, (grad_y_s0_y + grad_y_unclamp_s1_r_y))*int16(kernel_ya1[((grad_y_unclamp_s1_r_y*3) + 4)])) + (grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) + (padded16_global_wrapper.stencil((grad_y_s0_x + 1), (grad_y_s0_y + grad_y_unclamp_s1_r_y))*int16(kernel_ya1[((grad_y_unclamp_s1_r_y*3) + 5)])))))
hw_uint<16> hcompute_grad_y_unclamp_stencil_1(hw_uint<16>& grad_y_unclamp_stencil, hw_uint<48>& padded16_global_wrapper_stencil, const int _grad_y_unclamp_s1_r_y) {
  int16_t _grad_y_unclamp_stencil_1 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _padded16_global_wrapper_stencil_4 = (int16_t) padded16_global_wrapper_stencil.extract<0, 15>();
  int16_t _padded16_global_wrapper_stencil_5 = (int16_t) padded16_global_wrapper_stencil.extract<16, 31>();
  int16_t _padded16_global_wrapper_stencil_6 = (int16_t) padded16_global_wrapper_stencil.extract<32, 47>();

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

  int32_t _418 = _grad_y_unclamp_s1_r_y * 3;
  int32_t _419 = _418 + 3;
  int32_t _420 = ((const int32_t *)_kernel_ya1)[_419];
  int16_t _421 = (int16_t)(_420);
  int16_t _422 = _padded16_global_wrapper_stencil_4 * _421;
  int32_t _423 = _418 + 4;
  int32_t _424 = ((const int32_t *)_kernel_ya1)[_423];
  int16_t _425 = (int16_t)(_424);
  int16_t _426 = _padded16_global_wrapper_stencil_5 * _425;
  int32_t _427 = _418 + 5;
  int32_t _428 = ((const int32_t *)_kernel_ya1)[_427];
  int16_t _429 = (int16_t)(_428);
  int16_t _430 = _padded16_global_wrapper_stencil_6 * _429;
  int16_t _431 = _grad_y_unclamp_stencil_1 + _430;
  int16_t _432 = _426 + _431;
  int16_t _433 = _422 + _432;
  return _433;
}

//store is: grad_y.stencil(grad_y_s0_x, grad_y_s0_y) = max(min(grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y), (int16)255), (int16)-255)
hw_uint<16> hcompute_grad_y_stencil(hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_y_unclamp_stencil_2 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _473 = (int16_t)(255);
  int16_t _474 = min(_grad_y_unclamp_stencil_2, _473);
  int16_t _475 = (int16_t)(-255);
  int16_t _476 = max(_474, _475);
  return _476;
}

//store is: lxy.stencil(lxy_s0_x, lxy_s0_y) = ((grad_x.stencil(lxy_s0_x, lxy_s0_y)*grad_y.stencil(lxy_s0_x, lxy_s0_y))/(int16)128)
hw_uint<16> hcompute_lxy_stencil(hw_uint<16>& grad_x_stencil, hw_uint<16>& grad_y_stencil) {
  int16_t _grad_x_stencil_2 = (int16_t) grad_x_stencil.extract<0, 15>();

  int16_t _grad_y_stencil_1 = (int16_t) grad_y_stencil.extract<0, 15>();

  int16_t _486 = _grad_x_stencil_2 * _grad_y_stencil_1;
  int16_t _487 = (int16_t)(7);
  int16_t _488 = _486 >> _487;
  return _488;
}

//store is: lgxy.stencil(((lgxy_s0_x_x*3) + -1), ((lgxy_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil() {
  int16_t _497 = (int16_t)(0);
  return _497;
}

//store is: lgxy.stencil((lgxy_s0_x_x*3), ((lgxy_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_1() {
  int16_t _504 = (int16_t)(0);
  return _504;
}

//store is: lgxy.stencil(((lgxy_s0_x_x*3) + 1), ((lgxy_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_2() {
  int16_t _510 = (int16_t)(0);
  return _510;
}

//store is: lgxy.stencil(((lgxy_s0_x_x_1*3) + -1), (lgxy_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_3() {
  int16_t _517 = (int16_t)(0);
  return _517;
}

//store is: lgxy.stencil((lgxy_s0_x_x_1*3), (lgxy_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_4() {
  int16_t _523 = (int16_t)(0);
  return _523;
}

//store is: lgxy.stencil(((lgxy_s0_x_x_1*3) + 1), (lgxy_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_5() {
  int16_t _528 = (int16_t)(0);
  return _528;
}

//store is: lgxy.stencil(((lgxy_s0_x_x_2*3) + -1), ((lgxy_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_6() {
  int16_t _534 = (int16_t)(0);
  return _534;
}

//store is: lgxy.stencil((lgxy_s0_x_x_2*3), ((lgxy_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_7() {
  int16_t _541 = (int16_t)(0);
  return _541;
}

//store is: lgxy.stencil(((lgxy_s0_x_x_2*3) + 1), ((lgxy_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_8() {
  int16_t _547 = (int16_t)(0);
  return _547;
}

//store is: lgxy.stencil(lgxy_s1_x, lgxy_s1_y) = (lxy.stencil((lgxy_s1_x + -1), (lgxy_s1_box_y + lgxy_s1_y)) + (lxy.stencil(lgxy_s1_x, (lgxy_s1_box_y + lgxy_s1_y)) + (lgxy.stencil(lgxy_s1_x, lgxy_s1_y) + lxy.stencil((lgxy_s1_x + 1), (lgxy_s1_box_y + lgxy_s1_y)))))
hw_uint<16> hcompute_lgxy_stencil_9(hw_uint<16>& lgxy_stencil, hw_uint<48>& lxy_stencil) {
  int16_t _lgxy_stencil_1 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lxy_stencil_1 = (int16_t) lxy_stencil.extract<0, 15>();
  int16_t _lxy_stencil_2 = (int16_t) lxy_stencil.extract<16, 31>();
  int16_t _lxy_stencil_3 = (int16_t) lxy_stencil.extract<32, 47>();

  int16_t _554 = _lgxy_stencil_1 + _lxy_stencil_3;
  int16_t _555 = _lxy_stencil_2 + _554;
  int16_t _556 = _lxy_stencil_1 + _555;
  return _556;
}

//store is: lyy.stencil(lyy_s0_x, lyy_s0_y) = ((grad_y.stencil(lyy_s0_x, lyy_s0_y)*grad_y.stencil(lyy_s0_x, lyy_s0_y))/(int16)128)
hw_uint<16> hcompute_lyy_stencil(hw_uint<16>& grad_y_stencil) {
  int16_t _grad_y_stencil_2 = (int16_t) grad_y_stencil.extract<0, 15>();

  int16_t _570 = _grad_y_stencil_2 * _grad_y_stencil_2;
  int16_t _571 = (int16_t)(7);
  int16_t _572 = _570 >> _571;
  return _572;
}

//store is: lgyy.stencil(((lgyy_s0_x_x*3) + -1), ((lgyy_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil() {
  int16_t _580 = (int16_t)(0);
  return _580;
}

//store is: lgyy.stencil((lgyy_s0_x_x*3), ((lgyy_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_1() {
  int16_t _587 = (int16_t)(0);
  return _587;
}

//store is: lgyy.stencil(((lgyy_s0_x_x*3) + 1), ((lgyy_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_2() {
  int16_t _593 = (int16_t)(0);
  return _593;
}

//store is: lgyy.stencil(((lgyy_s0_x_x_1*3) + -1), (lgyy_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_3() {
  int16_t _600 = (int16_t)(0);
  return _600;
}

//store is: lgyy.stencil((lgyy_s0_x_x_1*3), (lgyy_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_4() {
  int16_t _606 = (int16_t)(0);
  return _606;
}

//store is: lgyy.stencil(((lgyy_s0_x_x_1*3) + 1), (lgyy_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_5() {
  int16_t _611 = (int16_t)(0);
  return _611;
}

//store is: lgyy.stencil(((lgyy_s0_x_x_2*3) + -1), ((lgyy_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_6() {
  int16_t _617 = (int16_t)(0);
  return _617;
}

//store is: lgyy.stencil((lgyy_s0_x_x_2*3), ((lgyy_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_7() {
  int16_t _624 = (int16_t)(0);
  return _624;
}

//store is: lgyy.stencil(((lgyy_s0_x_x_2*3) + 1), ((lgyy_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_8() {
  int16_t _630 = (int16_t)(0);
  return _630;
}

//store is: lgyy.stencil(lgyy_s1_x, lgyy_s1_y) = (lyy.stencil((lgyy_s1_x + -1), (lgyy_s1_box_y + lgyy_s1_y)) + (lyy.stencil(lgyy_s1_x, (lgyy_s1_box_y + lgyy_s1_y)) + (lgyy.stencil(lgyy_s1_x, lgyy_s1_y) + lyy.stencil((lgyy_s1_x + 1), (lgyy_s1_box_y + lgyy_s1_y)))))
hw_uint<16> hcompute_lgyy_stencil_9(hw_uint<16>& lgyy_stencil, hw_uint<48>& lyy_stencil) {
  int16_t _lgyy_stencil_1 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _lyy_stencil_1 = (int16_t) lyy_stencil.extract<0, 15>();
  int16_t _lyy_stencil_2 = (int16_t) lyy_stencil.extract<16, 31>();
  int16_t _lyy_stencil_3 = (int16_t) lyy_stencil.extract<32, 47>();

  int16_t _637 = _lgyy_stencil_1 + _lyy_stencil_3;
  int16_t _638 = _lyy_stencil_2 + _637;
  int16_t _639 = _lyy_stencil_1 + _638;
  return _639;
}

//store is: cim.stencil(cim_s0_x, cim_s0_y) = ((((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64)*(lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64)) - ((lgxy.stencil(cim_s0_x, cim_s0_y)/(int16)64)*(lgxy.stencil(cim_s0_x, cim_s0_y)/(int16)64))) - ((((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64) + (lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64))*((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64) + (lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64)))/(int16)16))
hw_uint<16> hcompute_cim_stencil(hw_uint<16>& lgxx_stencil, hw_uint<16>& lgxy_stencil, hw_uint<16>& lgyy_stencil) {
  int16_t _lgxx_stencil_2 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lgxy_stencil_2 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lgyy_stencil_2 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _653 = (int16_t)(6);
  int16_t _654 = _lgxx_stencil_2 >> _653;
  int16_t _655 = _lgyy_stencil_2 >> _653;
  int16_t _656 = _654 * _655;
  int16_t _657 = _lgxy_stencil_2 >> _653;
  int16_t _658 = _657 * _657;
  int16_t _659 = _656 - _658;
  int16_t _660 = _654 + _655;
  int16_t _661 = _660 * _660;
  int16_t _662 = (int16_t)(4);
  int16_t _663 = _661 >> _662;
  int16_t _664 = _659 - _663;
  return _664;
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

  bool _692 = _cim_stencil_1 < _cim_stencil_2;
  bool _693 = _cim_stencil_3 < _cim_stencil_2;
  bool _694 = _692 && _693;
  bool _695 = _cim_stencil_4 < _cim_stencil_2;
  bool _696 = _694 && _695;
  bool _697 = _cim_stencil_5 < _cim_stencil_2;
  bool _698 = _696 && _697;
  bool _699 = _cim_stencil_6 < _cim_stencil_2;
  bool _700 = _698 && _699;
  bool _701 = _cim_stencil_7 < _cim_stencil_2;
  bool _702 = _700 && _701;
  bool _703 = _cim_stencil_8 < _cim_stencil_2;
  bool _704 = _702 && _703;
  bool _705 = _cim_stencil_9 < _cim_stencil_2;
  bool _706 = _704 && _705;
  int16_t _707 = (int16_t)(1);
  bool _708 = _707 <= _cim_stencil_2;
  bool _709 = _706 && _708;
  int32_t _710 = (int32_t)(_709 ? 255 : 0);
  int16_t _711 = (int16_t)(_710);
  return _711;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = cim_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& cim_output_stencil) {
  int16_t _cim_output_stencil_1 = (int16_t) cim_output_stencil.extract<0, 15>();

  return _cim_output_stencil_1;
}

