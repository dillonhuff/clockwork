#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: padded16_global_wrapper.stencil(((padded16_global_wrapper_s0_x_x*2) + -3), padded16_global_wrapper_s0_y) = padded16.stencil(((padded16_global_wrapper_s0_x_x*2) + -3), padded16_global_wrapper_s0_y)
hw_uint<16> hcompute_padded16_global_wrapper_stencil(hw_uint<16>& padded16_stencil) {
  int16_t _padded16_stencil_1 = (int16_t) padded16_stencil.extract<0, 15>();

  return _padded16_stencil_1;
}

//store is: padded16_global_wrapper.stencil(((padded16_global_wrapper_s0_x_x*2) + -2), padded16_global_wrapper_s0_y) = padded16.stencil(((padded16_global_wrapper_s0_x_x*2) + -2), padded16_global_wrapper_s0_y)
hw_uint<16> hcompute_padded16_global_wrapper_stencil_1(hw_uint<16>& padded16_stencil) {
  int16_t _padded16_stencil_2 = (int16_t) padded16_stencil.extract<0, 15>();

  return _padded16_stencil_2;
}

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s0_x_x*2) + -2), grad_x_unclamp_s0_y) = (int16)0
hw_uint<16> hcompute_grad_x_unclamp_stencil() {
  int16_t _266 = (int16_t)(0);
  return _266;
}

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s0_x_x*2) + -1), grad_x_unclamp_s0_y) = (int16)0
hw_uint<16> hcompute_grad_x_unclamp_stencil_1() {
  int16_t _271 = (int16_t)(0);
  return _271;
}

//store is: grad_x_unclamp.stencil(grad_x_unclamp_s1_x, grad_x_unclamp_s1_y) = ((((grad_x_unclamp.stencil(grad_x_unclamp_s1_x, grad_x_unclamp_s1_y) + (padded16_global_wrapper.stencil((grad_x_unclamp_s1_x + 1), (grad_x_unclamp_s1_y + -1)) + (padded16_global_wrapper.stencil((grad_x_unclamp_s1_x + 1), (grad_x_unclamp_s1_y + 1)) + (padded16_global_wrapper.stencil((grad_x_unclamp_s1_x + 1), grad_x_unclamp_s1_y)*(int16)2)))) - padded16_global_wrapper.stencil((grad_x_unclamp_s1_x + -1), (grad_x_unclamp_s1_y + -1))) - (padded16_global_wrapper.stencil((grad_x_unclamp_s1_x + -1), grad_x_unclamp_s1_y)*(int16)2)) - padded16_global_wrapper.stencil((grad_x_unclamp_s1_x + -1), (grad_x_unclamp_s1_y + 1)))
hw_uint<16> hcompute_grad_x_unclamp_stencil_2(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<96>& padded16_global_wrapper_stencil) {
  int16_t _grad_x_unclamp_stencil_1 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _padded16_global_wrapper_stencil_1 = (int16_t) padded16_global_wrapper_stencil.extract<0, 15>();
  int16_t _padded16_global_wrapper_stencil_2 = (int16_t) padded16_global_wrapper_stencil.extract<16, 31>();
  int16_t _padded16_global_wrapper_stencil_3 = (int16_t) padded16_global_wrapper_stencil.extract<32, 47>();
  int16_t _padded16_global_wrapper_stencil_4 = (int16_t) padded16_global_wrapper_stencil.extract<48, 63>();
  int16_t _padded16_global_wrapper_stencil_5 = (int16_t) padded16_global_wrapper_stencil.extract<64, 79>();
  int16_t _padded16_global_wrapper_stencil_6 = (int16_t) padded16_global_wrapper_stencil.extract<80, 95>();

  int16_t _276 = (int16_t)(2);
  int16_t _277 = _padded16_global_wrapper_stencil_3 * _276;
  int16_t _278 = _padded16_global_wrapper_stencil_2 + _277;
  int16_t _279 = _padded16_global_wrapper_stencil_1 + _278;
  int16_t _280 = _grad_x_unclamp_stencil_1 + _279;
  int16_t _281 = _280 - _padded16_global_wrapper_stencil_4;
  int16_t _282 = _padded16_global_wrapper_stencil_5 * _276;
  int16_t _283 = _281 - _282;
  int16_t _284 = _283 - _padded16_global_wrapper_stencil_6;
  return _284;
}

//store is: lxx.stencil(((lxx_s0_x_x*2) + -2), lxx_s0_y) = ((max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*2) + -2), lxx_s0_y), (int16)255), (int16)-255)*max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*2) + -2), lxx_s0_y), (int16)255), (int16)-255))/(int16)128)
hw_uint<16> hcompute_lxx_stencil(hw_uint<16>& grad_x_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_2 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _314 = (int16_t)(255);
  int16_t _315 = min(_grad_x_unclamp_stencil_2, _314);
  int16_t _316 = (int16_t)(-255);
  int16_t _317 = max(_315, _316);
  int16_t _318 = _317 * _317;
  int16_t _319 = (int16_t)(7);
  int16_t _320 = _318 >> _319;
  return _320;
}

//store is: lxx.stencil(((lxx_s0_x_x*2) + -1), lxx_s0_y) = ((max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*2) + -1), lxx_s0_y), (int16)255), (int16)-255)*max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*2) + -1), lxx_s0_y), (int16)255), (int16)-255))/(int16)128)
hw_uint<16> hcompute_lxx_stencil_1(hw_uint<16>& grad_x_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_3 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _338 = (int16_t)(255);
  int16_t _339 = min(_grad_x_unclamp_stencil_3, _338);
  int16_t _340 = (int16_t)(-255);
  int16_t _341 = max(_339, _340);
  int16_t _342 = _341 * _341;
  int16_t _343 = (int16_t)(7);
  int16_t _344 = _342 >> _343;
  return _344;
}

//store is: lgxx.stencil(((lgxx_s0_x_x*2) + -1), lgxx_s0_y) = (int16)0
hw_uint<16> hcompute_lgxx_stencil() {
  int16_t _362 = (int16_t)(0);
  return _362;
}

//store is: lgxx.stencil((lgxx_s0_x_x*2), lgxx_s0_y) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_1() {
  int16_t _367 = (int16_t)(0);
  return _367;
}

//store is: lgxx.stencil(lgxx_s1_x, lgxx_s1_y) = (lxx.stencil((lgxx_s1_x + -1), (lgxx_s1_y + -1)) + (lgxx.stencil(lgxx_s1_x, lgxx_s1_y) + (lxx.stencil(lgxx_s1_x, (lgxx_s1_y + -1)) + (lxx.stencil((lgxx_s1_x + 1), (lgxx_s1_y + -1)) + (lxx.stencil((lgxx_s1_x + -1), lgxx_s1_y) + (lxx.stencil(lgxx_s1_x, lgxx_s1_y) + (lxx.stencil((lgxx_s1_x + 1), lgxx_s1_y) + (lxx.stencil((lgxx_s1_x + -1), (lgxx_s1_y + 1)) + (lxx.stencil((lgxx_s1_x + 1), (lgxx_s1_y + 1)) + lxx.stencil(lgxx_s1_x, (lgxx_s1_y + 1)))))))))))
hw_uint<16> hcompute_lgxx_stencil_2(hw_uint<16>& lgxx_stencil, hw_uint<144>& lxx_stencil) {
  int16_t _lgxx_stencil_1 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lxx_stencil_1 = (int16_t) lxx_stencil.extract<0, 15>();
  int16_t _lxx_stencil_2 = (int16_t) lxx_stencil.extract<16, 31>();
  int16_t _lxx_stencil_3 = (int16_t) lxx_stencil.extract<32, 47>();
  int16_t _lxx_stencil_4 = (int16_t) lxx_stencil.extract<48, 63>();
  int16_t _lxx_stencil_5 = (int16_t) lxx_stencil.extract<64, 79>();
  int16_t _lxx_stencil_6 = (int16_t) lxx_stencil.extract<80, 95>();
  int16_t _lxx_stencil_7 = (int16_t) lxx_stencil.extract<96, 111>();
  int16_t _lxx_stencil_8 = (int16_t) lxx_stencil.extract<112, 127>();
  int16_t _lxx_stencil_9 = (int16_t) lxx_stencil.extract<128, 143>();

  int16_t _371 = _lxx_stencil_8 + _lxx_stencil_9;
  int16_t _372 = _lxx_stencil_7 + _371;
  int16_t _373 = _lxx_stencil_6 + _372;
  int16_t _374 = _lxx_stencil_5 + _373;
  int16_t _375 = _lxx_stencil_4 + _374;
  int16_t _376 = _lxx_stencil_3 + _375;
  int16_t _377 = _lxx_stencil_2 + _376;
  int16_t _378 = _lgxx_stencil_1 + _377;
  int16_t _379 = _lxx_stencil_1 + _378;
  return _379;
}

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s0_x_x*2) + -2), grad_y_unclamp_s0_y) = (int16)0
hw_uint<16> hcompute_grad_y_unclamp_stencil() {
  int16_t _412 = (int16_t)(0);
  return _412;
}

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s0_x_x*2) + -1), grad_y_unclamp_s0_y) = (int16)0
hw_uint<16> hcompute_grad_y_unclamp_stencil_1() {
  int16_t _417 = (int16_t)(0);
  return _417;
}

//store is: grad_y_unclamp.stencil(grad_y_unclamp_s1_x, grad_y_unclamp_s1_y) = ((((padded16_global_wrapper.stencil((grad_y_unclamp_s1_x + -1), (grad_y_unclamp_s1_y + -1)) + (grad_y_unclamp.stencil(grad_y_unclamp_s1_x, grad_y_unclamp_s1_y) + (padded16_global_wrapper.stencil((grad_y_unclamp_s1_x + 1), (grad_y_unclamp_s1_y + -1)) + (padded16_global_wrapper.stencil(grad_y_unclamp_s1_x, (grad_y_unclamp_s1_y + -1))*(int16)2)))) - padded16_global_wrapper.stencil((grad_y_unclamp_s1_x + -1), (grad_y_unclamp_s1_y + 1))) - (padded16_global_wrapper.stencil(grad_y_unclamp_s1_x, (grad_y_unclamp_s1_y + 1))*(int16)2)) - padded16_global_wrapper.stencil((grad_y_unclamp_s1_x + 1), (grad_y_unclamp_s1_y + 1)))
hw_uint<16> hcompute_grad_y_unclamp_stencil_2(hw_uint<16>& grad_y_unclamp_stencil, hw_uint<96>& padded16_global_wrapper_stencil) {
  int16_t _grad_y_unclamp_stencil_1 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _padded16_global_wrapper_stencil_10 = (int16_t) padded16_global_wrapper_stencil.extract<0, 15>();
  int16_t _padded16_global_wrapper_stencil_11 = (int16_t) padded16_global_wrapper_stencil.extract<16, 31>();
  int16_t _padded16_global_wrapper_stencil_12 = (int16_t) padded16_global_wrapper_stencil.extract<32, 47>();
  int16_t _padded16_global_wrapper_stencil_7 = (int16_t) padded16_global_wrapper_stencil.extract<48, 63>();
  int16_t _padded16_global_wrapper_stencil_8 = (int16_t) padded16_global_wrapper_stencil.extract<64, 79>();
  int16_t _padded16_global_wrapper_stencil_9 = (int16_t) padded16_global_wrapper_stencil.extract<80, 95>();

  int16_t _422 = (int16_t)(2);
  int16_t _423 = _padded16_global_wrapper_stencil_9 * _422;
  int16_t _424 = _padded16_global_wrapper_stencil_8 + _423;
  int16_t _425 = _grad_y_unclamp_stencil_1 + _424;
  int16_t _426 = _padded16_global_wrapper_stencil_7 + _425;
  int16_t _427 = _426 - _padded16_global_wrapper_stencil_10;
  int16_t _428 = _padded16_global_wrapper_stencil_11 * _422;
  int16_t _429 = _427 - _428;
  int16_t _430 = _429 - _padded16_global_wrapper_stencil_12;
  return _430;
}

//store is: lxy.stencil(((lxy_s0_x_x*2) + -2), lxy_s0_y) = ((max(min(grad_x_unclamp.stencil(((lxy_s0_x_x*2) + -2), lxy_s0_y), (int16)255), (int16)-255)*max(min(grad_y_unclamp.stencil(((lxy_s0_x_x*2) + -2), lxy_s0_y), (int16)255), (int16)-255))/(int16)128)
hw_uint<16> hcompute_lxy_stencil(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_4 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _grad_y_unclamp_stencil_2 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _460 = (int16_t)(255);
  int16_t _461 = min(_grad_x_unclamp_stencil_4, _460);
  int16_t _462 = (int16_t)(-255);
  int16_t _463 = max(_461, _462);
  int16_t _464 = min(_grad_y_unclamp_stencil_2, _460);
  int16_t _465 = max(_464, _462);
  int16_t _466 = _463 * _465;
  int16_t _467 = (int16_t)(7);
  int16_t _468 = _466 >> _467;
  return _468;
}

//store is: lxy.stencil(((lxy_s0_x_x*2) + -1), lxy_s0_y) = ((max(min(grad_x_unclamp.stencil(((lxy_s0_x_x*2) + -1), lxy_s0_y), (int16)255), (int16)-255)*max(min(grad_y_unclamp.stencil(((lxy_s0_x_x*2) + -1), lxy_s0_y), (int16)255), (int16)-255))/(int16)128)
hw_uint<16> hcompute_lxy_stencil_1(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_5 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _grad_y_unclamp_stencil_3 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _491 = (int16_t)(255);
  int16_t _492 = min(_grad_x_unclamp_stencil_5, _491);
  int16_t _493 = (int16_t)(-255);
  int16_t _494 = max(_492, _493);
  int16_t _495 = min(_grad_y_unclamp_stencil_3, _491);
  int16_t _496 = max(_495, _493);
  int16_t _497 = _494 * _496;
  int16_t _498 = (int16_t)(7);
  int16_t _499 = _497 >> _498;
  return _499;
}

//store is: lgxy.stencil(((lgxy_s0_x_x*2) + -1), lgxy_s0_y) = (int16)0
hw_uint<16> hcompute_lgxy_stencil() {
  int16_t _522 = (int16_t)(0);
  return _522;
}

//store is: lgxy.stencil((lgxy_s0_x_x*2), lgxy_s0_y) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_1() {
  int16_t _527 = (int16_t)(0);
  return _527;
}

//store is: lgxy.stencil(lgxy_s1_x, lgxy_s1_y) = (lxy.stencil((lgxy_s1_x + -1), (lgxy_s1_y + -1)) + (lgxy.stencil(lgxy_s1_x, lgxy_s1_y) + (lxy.stencil(lgxy_s1_x, (lgxy_s1_y + -1)) + (lxy.stencil((lgxy_s1_x + 1), (lgxy_s1_y + -1)) + (lxy.stencil((lgxy_s1_x + -1), lgxy_s1_y) + (lxy.stencil(lgxy_s1_x, lgxy_s1_y) + (lxy.stencil((lgxy_s1_x + 1), lgxy_s1_y) + (lxy.stencil((lgxy_s1_x + -1), (lgxy_s1_y + 1)) + (lxy.stencil((lgxy_s1_x + 1), (lgxy_s1_y + 1)) + lxy.stencil(lgxy_s1_x, (lgxy_s1_y + 1)))))))))))
hw_uint<16> hcompute_lgxy_stencil_2(hw_uint<16>& lgxy_stencil, hw_uint<144>& lxy_stencil) {
  int16_t _lgxy_stencil_1 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lxy_stencil_1 = (int16_t) lxy_stencil.extract<0, 15>();
  int16_t _lxy_stencil_2 = (int16_t) lxy_stencil.extract<16, 31>();
  int16_t _lxy_stencil_3 = (int16_t) lxy_stencil.extract<32, 47>();
  int16_t _lxy_stencil_4 = (int16_t) lxy_stencil.extract<48, 63>();
  int16_t _lxy_stencil_5 = (int16_t) lxy_stencil.extract<64, 79>();
  int16_t _lxy_stencil_6 = (int16_t) lxy_stencil.extract<80, 95>();
  int16_t _lxy_stencil_7 = (int16_t) lxy_stencil.extract<96, 111>();
  int16_t _lxy_stencil_8 = (int16_t) lxy_stencil.extract<112, 127>();
  int16_t _lxy_stencil_9 = (int16_t) lxy_stencil.extract<128, 143>();

  int16_t _531 = _lxy_stencil_8 + _lxy_stencil_9;
  int16_t _532 = _lxy_stencil_7 + _531;
  int16_t _533 = _lxy_stencil_6 + _532;
  int16_t _534 = _lxy_stencil_5 + _533;
  int16_t _535 = _lxy_stencil_4 + _534;
  int16_t _536 = _lxy_stencil_3 + _535;
  int16_t _537 = _lxy_stencil_2 + _536;
  int16_t _538 = _lgxy_stencil_1 + _537;
  int16_t _539 = _lxy_stencil_1 + _538;
  return _539;
}

//store is: lyy.stencil(((lyy_s0_x_x*2) + -2), lyy_s0_y) = ((max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*2) + -2), lyy_s0_y), (int16)255), (int16)-255)*max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*2) + -2), lyy_s0_y), (int16)255), (int16)-255))/(int16)128)
hw_uint<16> hcompute_lyy_stencil(hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_y_unclamp_stencil_4 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _572 = (int16_t)(255);
  int16_t _573 = min(_grad_y_unclamp_stencil_4, _572);
  int16_t _574 = (int16_t)(-255);
  int16_t _575 = max(_573, _574);
  int16_t _576 = _575 * _575;
  int16_t _577 = (int16_t)(7);
  int16_t _578 = _576 >> _577;
  return _578;
}

//store is: lyy.stencil(((lyy_s0_x_x*2) + -1), lyy_s0_y) = ((max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*2) + -1), lyy_s0_y), (int16)255), (int16)-255)*max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*2) + -1), lyy_s0_y), (int16)255), (int16)-255))/(int16)128)
hw_uint<16> hcompute_lyy_stencil_1(hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_y_unclamp_stencil_5 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _596 = (int16_t)(255);
  int16_t _597 = min(_grad_y_unclamp_stencil_5, _596);
  int16_t _598 = (int16_t)(-255);
  int16_t _599 = max(_597, _598);
  int16_t _600 = _599 * _599;
  int16_t _601 = (int16_t)(7);
  int16_t _602 = _600 >> _601;
  return _602;
}

//store is: lgyy.stencil(((lgyy_s0_x_x*2) + -1), lgyy_s0_y) = (int16)0
hw_uint<16> hcompute_lgyy_stencil() {
  int16_t _620 = (int16_t)(0);
  return _620;
}

//store is: lgyy.stencil((lgyy_s0_x_x*2), lgyy_s0_y) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_1() {
  int16_t _625 = (int16_t)(0);
  return _625;
}

//store is: lgyy.stencil(lgyy_s1_x, lgyy_s1_y) = (lyy.stencil((lgyy_s1_x + -1), (lgyy_s1_y + -1)) + (lgyy.stencil(lgyy_s1_x, lgyy_s1_y) + (lyy.stencil(lgyy_s1_x, (lgyy_s1_y + -1)) + (lyy.stencil((lgyy_s1_x + 1), (lgyy_s1_y + -1)) + (lyy.stencil((lgyy_s1_x + -1), lgyy_s1_y) + (lyy.stencil(lgyy_s1_x, lgyy_s1_y) + (lyy.stencil((lgyy_s1_x + 1), lgyy_s1_y) + (lyy.stencil((lgyy_s1_x + -1), (lgyy_s1_y + 1)) + (lyy.stencil((lgyy_s1_x + 1), (lgyy_s1_y + 1)) + lyy.stencil(lgyy_s1_x, (lgyy_s1_y + 1)))))))))))
hw_uint<16> hcompute_lgyy_stencil_2(hw_uint<16>& lgyy_stencil, hw_uint<144>& lyy_stencil) {
  int16_t _lgyy_stencil_1 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _lyy_stencil_1 = (int16_t) lyy_stencil.extract<0, 15>();
  int16_t _lyy_stencil_2 = (int16_t) lyy_stencil.extract<16, 31>();
  int16_t _lyy_stencil_3 = (int16_t) lyy_stencil.extract<32, 47>();
  int16_t _lyy_stencil_4 = (int16_t) lyy_stencil.extract<48, 63>();
  int16_t _lyy_stencil_5 = (int16_t) lyy_stencil.extract<64, 79>();
  int16_t _lyy_stencil_6 = (int16_t) lyy_stencil.extract<80, 95>();
  int16_t _lyy_stencil_7 = (int16_t) lyy_stencil.extract<96, 111>();
  int16_t _lyy_stencil_8 = (int16_t) lyy_stencil.extract<112, 127>();
  int16_t _lyy_stencil_9 = (int16_t) lyy_stencil.extract<128, 143>();

  int16_t _629 = _lyy_stencil_8 + _lyy_stencil_9;
  int16_t _630 = _lyy_stencil_7 + _629;
  int16_t _631 = _lyy_stencil_6 + _630;
  int16_t _632 = _lyy_stencil_5 + _631;
  int16_t _633 = _lyy_stencil_4 + _632;
  int16_t _634 = _lyy_stencil_3 + _633;
  int16_t _635 = _lyy_stencil_2 + _634;
  int16_t _636 = _lgyy_stencil_1 + _635;
  int16_t _637 = _lyy_stencil_1 + _636;
  return _637;
}

//store is: cim.stencil(((cim_s0_x_x*2) + -1), cim_s0_y) = ((((lgxx.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64)*(lgyy.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64)) - ((lgxy.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64)*(lgxy.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64))) - ((((lgxx.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64) + (lgyy.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64))*((lgxx.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64) + (lgyy.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64)))/(int16)16))
hw_uint<16> hcompute_cim_stencil(hw_uint<16>& lgxx_stencil, hw_uint<16>& lgxy_stencil, hw_uint<16>& lgyy_stencil) {
  int16_t _lgxx_stencil_2 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lgxy_stencil_2 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lgyy_stencil_2 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _670 = (int16_t)(6);
  int16_t _671 = _lgxx_stencil_2 >> _670;
  int16_t _672 = _lgyy_stencil_2 >> _670;
  int16_t _673 = _671 * _672;
  int16_t _674 = _lgxy_stencil_2 >> _670;
  int16_t _675 = _674 * _674;
  int16_t _676 = _673 - _675;
  int16_t _677 = _671 + _672;
  int16_t _678 = _677 * _677;
  int16_t _679 = (int16_t)(4);
  int16_t _680 = _678 >> _679;
  int16_t _681 = _676 - _680;
  return _681;
}

//store is: cim.stencil((cim_s0_x_x*2), cim_s0_y) = ((((lgxx.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64)*(lgyy.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64)) - ((lgxy.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64)*(lgxy.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64))) - ((((lgxx.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64) + (lgyy.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64))*((lgxx.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64) + (lgyy.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64)))/(int16)16))
hw_uint<16> hcompute_cim_stencil_1(hw_uint<16>& lgxx_stencil, hw_uint<16>& lgxy_stencil, hw_uint<16>& lgyy_stencil) {
  int16_t _lgxx_stencil_3 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lgxy_stencil_3 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lgyy_stencil_3 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _711 = (int16_t)(6);
  int16_t _712 = _lgxx_stencil_3 >> _711;
  int16_t _713 = _lgyy_stencil_3 >> _711;
  int16_t _714 = _712 * _713;
  int16_t _715 = _lgxy_stencil_3 >> _711;
  int16_t _716 = _715 * _715;
  int16_t _717 = _714 - _716;
  int16_t _718 = _712 + _713;
  int16_t _719 = _718 * _718;
  int16_t _720 = (int16_t)(4);
  int16_t _721 = _719 >> _720;
  int16_t _722 = _717 - _721;
  return _722;
}

//store is: cim_output.stencil((cim_output_s0_x_x*2), cim_output_s0_y) = int16(select((((((((((cim.stencil(((cim_output_s0_x_x*2) + -1), (cim_output_s0_y + -1)) < cim.stencil((cim_output_s0_x_x*2), cim_output_s0_y)) && (cim.stencil((cim_output_s0_x_x*2), (cim_output_s0_y + -1)) < cim.stencil((cim_output_s0_x_x*2), cim_output_s0_y))) && (cim.stencil(((cim_output_s0_x_x*2) + 1), (cim_output_s0_y + -1)) < cim.stencil((cim_output_s0_x_x*2), cim_output_s0_y))) && (cim.stencil(((cim_output_s0_x_x*2) + -1), cim_output_s0_y) < cim.stencil((cim_output_s0_x_x*2), cim_output_s0_y))) && (cim.stencil(((cim_output_s0_x_x*2) + 1), cim_output_s0_y) < cim.stencil((cim_output_s0_x_x*2), cim_output_s0_y))) && (cim.stencil(((cim_output_s0_x_x*2) + -1), (cim_output_s0_y + 1)) < cim.stencil((cim_output_s0_x_x*2), cim_output_s0_y))) && (cim.stencil((cim_output_s0_x_x*2), (cim_output_s0_y + 1)) < cim.stencil((cim_output_s0_x_x*2), cim_output_s0_y))) && (cim.stencil(((cim_output_s0_x_x*2) + 1), (cim_output_s0_y + 1)) < cim.stencil((cim_output_s0_x_x*2), cim_output_s0_y))) && ((int16)1 <= cim.stencil((cim_output_s0_x_x*2), cim_output_s0_y))), 255, 0))
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

  bool _751 = _cim_stencil_1 < _cim_stencil_2;
  bool _752 = _cim_stencil_3 < _cim_stencil_2;
  bool _753 = _751 && _752;
  bool _754 = _cim_stencil_4 < _cim_stencil_2;
  bool _755 = _753 && _754;
  bool _756 = _cim_stencil_5 < _cim_stencil_2;
  bool _757 = _755 && _756;
  bool _758 = _cim_stencil_6 < _cim_stencil_2;
  bool _759 = _757 && _758;
  bool _760 = _cim_stencil_7 < _cim_stencil_2;
  bool _761 = _759 && _760;
  bool _762 = _cim_stencil_8 < _cim_stencil_2;
  bool _763 = _761 && _762;
  bool _764 = _cim_stencil_9 < _cim_stencil_2;
  bool _765 = _763 && _764;
  int16_t _766 = (int16_t)(1);
  bool _767 = _766 <= _cim_stencil_2;
  bool _768 = _765 && _767;
  int32_t _769 = (int32_t)(_768 ? 255 : 0);
  int16_t _770 = (int16_t)(_769);
  return _770;
}

//store is: cim_output.stencil(((cim_output_s0_x_x*2) + 1), cim_output_s0_y) = int16(select((((((((((cim.stencil((cim_output_s0_x_x*2), (cim_output_s0_y + -1)) < cim.stencil(((cim_output_s0_x_x*2) + 1), cim_output_s0_y)) && (cim.stencil(((cim_output_s0_x_x*2) + 1), (cim_output_s0_y + -1)) < cim.stencil(((cim_output_s0_x_x*2) + 1), cim_output_s0_y))) && (cim.stencil(((cim_output_s0_x_x*2) + 2), (cim_output_s0_y + -1)) < cim.stencil(((cim_output_s0_x_x*2) + 1), cim_output_s0_y))) && (cim.stencil((cim_output_s0_x_x*2), cim_output_s0_y) < cim.stencil(((cim_output_s0_x_x*2) + 1), cim_output_s0_y))) && (cim.stencil(((cim_output_s0_x_x*2) + 2), cim_output_s0_y) < cim.stencil(((cim_output_s0_x_x*2) + 1), cim_output_s0_y))) && (cim.stencil((cim_output_s0_x_x*2), (cim_output_s0_y + 1)) < cim.stencil(((cim_output_s0_x_x*2) + 1), cim_output_s0_y))) && (cim.stencil(((cim_output_s0_x_x*2) + 1), (cim_output_s0_y + 1)) < cim.stencil(((cim_output_s0_x_x*2) + 1), cim_output_s0_y))) && (cim.stencil(((cim_output_s0_x_x*2) + 2), (cim_output_s0_y + 1)) < cim.stencil(((cim_output_s0_x_x*2) + 1), cim_output_s0_y))) && ((int16)1 <= cim.stencil(((cim_output_s0_x_x*2) + 1), cim_output_s0_y))), 255, 0))
hw_uint<16> hcompute_cim_output_stencil_1(hw_uint<144>& cim_stencil) {
  int16_t _cim_stencil_10 = (int16_t) cim_stencil.extract<0, 15>();
  int16_t _cim_stencil_11 = (int16_t) cim_stencil.extract<16, 31>();
  int16_t _cim_stencil_12 = (int16_t) cim_stencil.extract<32, 47>();
  int16_t _cim_stencil_13 = (int16_t) cim_stencil.extract<48, 63>();
  int16_t _cim_stencil_14 = (int16_t) cim_stencil.extract<64, 79>();
  int16_t _cim_stencil_15 = (int16_t) cim_stencil.extract<80, 95>();
  int16_t _cim_stencil_16 = (int16_t) cim_stencil.extract<96, 111>();
  int16_t _cim_stencil_17 = (int16_t) cim_stencil.extract<112, 127>();
  int16_t _cim_stencil_18 = (int16_t) cim_stencil.extract<128, 143>();

  bool _825 = _cim_stencil_10 < _cim_stencil_11;
  bool _826 = _cim_stencil_12 < _cim_stencil_11;
  bool _827 = _825 && _826;
  bool _828 = _cim_stencil_13 < _cim_stencil_11;
  bool _829 = _827 && _828;
  bool _830 = _cim_stencil_14 < _cim_stencil_11;
  bool _831 = _829 && _830;
  bool _832 = _cim_stencil_15 < _cim_stencil_11;
  bool _833 = _831 && _832;
  bool _834 = _cim_stencil_16 < _cim_stencil_11;
  bool _835 = _833 && _834;
  bool _836 = _cim_stencil_17 < _cim_stencil_11;
  bool _837 = _835 && _836;
  bool _838 = _cim_stencil_18 < _cim_stencil_11;
  bool _839 = _837 && _838;
  int16_t _840 = (int16_t)(1);
  bool _841 = _840 <= _cim_stencil_11;
  bool _842 = _839 && _841;
  int32_t _843 = (int32_t)(_842 ? 255 : 0);
  int16_t _844 = (int16_t)(_843);
  return _844;
}

//store is: hw_output.stencil((hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi) = cim_output.stencil((hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& cim_output_stencil) {
  int16_t _cim_output_stencil_1 = (int16_t) cim_output_stencil.extract<0, 15>();

  return _cim_output_stencil_1;
}

//store is: hw_output.stencil(((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi) = cim_output.stencil(((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil_1(hw_uint<16>& cim_output_stencil) {
  int16_t _cim_output_stencil_2 = (int16_t) cim_output_stencil.extract<0, 15>();

  return _cim_output_stencil_2;
}

