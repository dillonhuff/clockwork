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

//store is: grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y) = ((((grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y) + (padded16_global_wrapper.stencil((grad_x_s0_x + 1), (grad_x_s0_y + -1)) + (padded16_global_wrapper.stencil((grad_x_s0_x + 1), (grad_x_s0_y + 1)) + (padded16_global_wrapper.stencil((grad_x_s0_x + 1), grad_x_s0_y)*(int16)2)))) - padded16_global_wrapper.stencil((grad_x_s0_x + -1), (grad_x_s0_y + -1))) - (padded16_global_wrapper.stencil((grad_x_s0_x + -1), grad_x_s0_y)*(int16)2)) - padded16_global_wrapper.stencil((grad_x_s0_x + -1), (grad_x_s0_y + 1)))
hw_uint<16> hcompute_grad_x_unclamp_stencil_1(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<96>& padded16_global_wrapper_stencil) {
  int16_t _grad_x_unclamp_stencil_1 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

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
  int16_t _268 = _grad_x_unclamp_stencil_1 + _267;
  int16_t _269 = _268 - _padded16_global_wrapper_stencil_4;
  int16_t _270 = _padded16_global_wrapper_stencil_5 * _264;
  int16_t _271 = _269 - _270;
  int16_t _272 = _271 - _padded16_global_wrapper_stencil_6;
  return _272;
}

//store is: grad_x.stencil(grad_x_s0_x, grad_x_s0_y) = max(min(grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y), (int16)180), (int16)-180)
hw_uint<16> hcompute_grad_x_stencil(hw_uint<16>& grad_x_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_2 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _302 = (int16_t)(180);
  int16_t _303 = min(_grad_x_unclamp_stencil_2, _302);
  int16_t _304 = (int16_t)(-180);
  int16_t _305 = max(_303, _304);
  return _305;
}

//store is: lxx.stencil(lxx_s0_x, lxx_s0_y) = ((grad_x.stencil(lxx_s0_x, lxx_s0_y)*grad_x.stencil(lxx_s0_x, lxx_s0_y))/(int16)64)
hw_uint<16> hcompute_lxx_stencil(hw_uint<16>& grad_x_stencil) {
  int16_t _grad_x_stencil_1 = (int16_t) grad_x_stencil.extract<0, 15>();

  int16_t _315 = _grad_x_stencil_1 * _grad_x_stencil_1;
  int16_t _316 = (int16_t)(6);
  int16_t _317 = _315 >> _316;
  return _317;
}

//store is: lgxx.stencil(lgxx_s0_x, lgxx_s0_y) = (int16)0
hw_uint<16> hcompute_lgxx_stencil() {
  int16_t _325 = (int16_t)(0);
  return _325;
}

//store is: lgxx.stencil(lgxx_s1_x, lgxx_s1_y) = (lxx.stencil((lgxx_s1_x + -1), (lgxx_s1_y + -1)) + (lgxx.stencil(lgxx_s1_x, lgxx_s1_y) + (lxx.stencil(lgxx_s1_x, (lgxx_s1_y + -1)) + (lxx.stencil((lgxx_s1_x + 1), (lgxx_s1_y + -1)) + (lxx.stencil((lgxx_s1_x + -1), lgxx_s1_y) + (lxx.stencil(lgxx_s1_x, lgxx_s1_y) + (lxx.stencil((lgxx_s1_x + 1), lgxx_s1_y) + (lxx.stencil((lgxx_s1_x + -1), (lgxx_s1_y + 1)) + (lxx.stencil((lgxx_s1_x + 1), (lgxx_s1_y + 1)) + lxx.stencil(lgxx_s1_x, (lgxx_s1_y + 1)))))))))))
hw_uint<16> hcompute_lgxx_stencil_1(hw_uint<16>& lgxx_stencil, hw_uint<144>& lxx_stencil) {
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

  int16_t _328 = _lxx_stencil_8 + _lxx_stencil_9;
  int16_t _329 = _lxx_stencil_7 + _328;
  int16_t _330 = _lxx_stencil_6 + _329;
  int16_t _331 = _lxx_stencil_5 + _330;
  int16_t _332 = _lxx_stencil_4 + _331;
  int16_t _333 = _lxx_stencil_3 + _332;
  int16_t _334 = _lxx_stencil_2 + _333;
  int16_t _335 = _lgxx_stencil_1 + _334;
  int16_t _336 = _lxx_stencil_1 + _335;
  return _336;
}

//store is: grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) = (int16)0
hw_uint<16> hcompute_grad_y_unclamp_stencil() {
  int16_t _369 = (int16_t)(0);
  return _369;
}

//store is: grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) = ((((grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) + (padded16_global_wrapper.stencil((grad_y_s0_x + -1), (grad_y_s0_y + 1)) + (padded16_global_wrapper.stencil((grad_y_s0_x + 1), (grad_y_s0_y + 1)) + (padded16_global_wrapper.stencil(grad_y_s0_x, (grad_y_s0_y + 1))*(int16)2)))) - padded16_global_wrapper.stencil((grad_y_s0_x + -1), (grad_y_s0_y + -1))) - (padded16_global_wrapper.stencil(grad_y_s0_x, (grad_y_s0_y + -1))*(int16)2)) - padded16_global_wrapper.stencil((grad_y_s0_x + 1), (grad_y_s0_y + -1)))
hw_uint<16> hcompute_grad_y_unclamp_stencil_1(hw_uint<16>& grad_y_unclamp_stencil, hw_uint<96>& padded16_global_wrapper_stencil) {
  int16_t _grad_y_unclamp_stencil_1 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _padded16_global_wrapper_stencil_10 = (int16_t) padded16_global_wrapper_stencil.extract<0, 15>();
  int16_t _padded16_global_wrapper_stencil_11 = (int16_t) padded16_global_wrapper_stencil.extract<16, 31>();
  int16_t _padded16_global_wrapper_stencil_12 = (int16_t) padded16_global_wrapper_stencil.extract<32, 47>();
  int16_t _padded16_global_wrapper_stencil_7 = (int16_t) padded16_global_wrapper_stencil.extract<48, 63>();
  int16_t _padded16_global_wrapper_stencil_8 = (int16_t) padded16_global_wrapper_stencil.extract<64, 79>();
  int16_t _padded16_global_wrapper_stencil_9 = (int16_t) padded16_global_wrapper_stencil.extract<80, 95>();

  int16_t _372 = (int16_t)(2);
  int16_t _373 = _padded16_global_wrapper_stencil_9 * _372;
  int16_t _374 = _padded16_global_wrapper_stencil_8 + _373;
  int16_t _375 = _padded16_global_wrapper_stencil_7 + _374;
  int16_t _376 = _grad_y_unclamp_stencil_1 + _375;
  int16_t _377 = _376 - _padded16_global_wrapper_stencil_10;
  int16_t _378 = _padded16_global_wrapper_stencil_11 * _372;
  int16_t _379 = _377 - _378;
  int16_t _380 = _379 - _padded16_global_wrapper_stencil_12;
  return _380;
}

//store is: grad_y.stencil(grad_y_s0_x, grad_y_s0_y) = max(min(grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y), (int16)180), (int16)-180)
hw_uint<16> hcompute_grad_y_stencil(hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_y_unclamp_stencil_2 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _410 = (int16_t)(180);
  int16_t _411 = min(_grad_y_unclamp_stencil_2, _410);
  int16_t _412 = (int16_t)(-180);
  int16_t _413 = max(_411, _412);
  return _413;
}

//store is: lxy.stencil(lxy_s0_x, lxy_s0_y) = ((grad_x.stencil(lxy_s0_x, lxy_s0_y)*grad_y.stencil(lxy_s0_x, lxy_s0_y))/(int16)64)
hw_uint<16> hcompute_lxy_stencil(hw_uint<16>& grad_x_stencil, hw_uint<16>& grad_y_stencil) {
  int16_t _grad_x_stencil_2 = (int16_t) grad_x_stencil.extract<0, 15>();

  int16_t _grad_y_stencil_1 = (int16_t) grad_y_stencil.extract<0, 15>();

  int16_t _423 = _grad_x_stencil_2 * _grad_y_stencil_1;
  int16_t _424 = (int16_t)(6);
  int16_t _425 = _423 >> _424;
  return _425;
}

//store is: lgxy.stencil(lgxy_s0_x, lgxy_s0_y) = (int16)0
hw_uint<16> hcompute_lgxy_stencil() {
  int16_t _434 = (int16_t)(0);
  return _434;
}

//store is: lgxy.stencil(lgxy_s1_x, lgxy_s1_y) = (lxy.stencil((lgxy_s1_x + -1), (lgxy_s1_y + -1)) + (lgxy.stencil(lgxy_s1_x, lgxy_s1_y) + (lxy.stencil(lgxy_s1_x, (lgxy_s1_y + -1)) + (lxy.stencil((lgxy_s1_x + 1), (lgxy_s1_y + -1)) + (lxy.stencil((lgxy_s1_x + -1), lgxy_s1_y) + (lxy.stencil(lgxy_s1_x, lgxy_s1_y) + (lxy.stencil((lgxy_s1_x + 1), lgxy_s1_y) + (lxy.stencil((lgxy_s1_x + -1), (lgxy_s1_y + 1)) + (lxy.stencil((lgxy_s1_x + 1), (lgxy_s1_y + 1)) + lxy.stencil(lgxy_s1_x, (lgxy_s1_y + 1)))))))))))
hw_uint<16> hcompute_lgxy_stencil_1(hw_uint<16>& lgxy_stencil, hw_uint<144>& lxy_stencil) {
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

  int16_t _437 = _lxy_stencil_8 + _lxy_stencil_9;
  int16_t _438 = _lxy_stencil_7 + _437;
  int16_t _439 = _lxy_stencil_6 + _438;
  int16_t _440 = _lxy_stencil_5 + _439;
  int16_t _441 = _lxy_stencil_4 + _440;
  int16_t _442 = _lxy_stencil_3 + _441;
  int16_t _443 = _lxy_stencil_2 + _442;
  int16_t _444 = _lgxy_stencil_1 + _443;
  int16_t _445 = _lxy_stencil_1 + _444;
  return _445;
}

//store is: lyy.stencil(lyy_s0_x, lyy_s0_y) = ((grad_y.stencil(lyy_s0_x, lyy_s0_y)*grad_y.stencil(lyy_s0_x, lyy_s0_y))/(int16)64)
hw_uint<16> hcompute_lyy_stencil(hw_uint<16>& grad_y_stencil) {
  int16_t _grad_y_stencil_2 = (int16_t) grad_y_stencil.extract<0, 15>();

  int16_t _478 = _grad_y_stencil_2 * _grad_y_stencil_2;
  int16_t _479 = (int16_t)(6);
  int16_t _480 = _478 >> _479;
  return _480;
}

//store is: lgyy.stencil(lgyy_s0_x, lgyy_s0_y) = (int16)0
hw_uint<16> hcompute_lgyy_stencil() {
  int16_t _488 = (int16_t)(0);
  return _488;
}

//store is: lgyy.stencil(lgyy_s1_x, lgyy_s1_y) = (lyy.stencil((lgyy_s1_x + -1), (lgyy_s1_y + -1)) + (lgyy.stencil(lgyy_s1_x, lgyy_s1_y) + (lyy.stencil(lgyy_s1_x, (lgyy_s1_y + -1)) + (lyy.stencil((lgyy_s1_x + 1), (lgyy_s1_y + -1)) + (lyy.stencil((lgyy_s1_x + -1), lgyy_s1_y) + (lyy.stencil(lgyy_s1_x, lgyy_s1_y) + (lyy.stencil((lgyy_s1_x + 1), lgyy_s1_y) + (lyy.stencil((lgyy_s1_x + -1), (lgyy_s1_y + 1)) + (lyy.stencil((lgyy_s1_x + 1), (lgyy_s1_y + 1)) + lyy.stencil(lgyy_s1_x, (lgyy_s1_y + 1)))))))))))
hw_uint<16> hcompute_lgyy_stencil_1(hw_uint<16>& lgyy_stencil, hw_uint<144>& lyy_stencil) {
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

  int16_t _491 = _lyy_stencil_8 + _lyy_stencil_9;
  int16_t _492 = _lyy_stencil_7 + _491;
  int16_t _493 = _lyy_stencil_6 + _492;
  int16_t _494 = _lyy_stencil_5 + _493;
  int16_t _495 = _lyy_stencil_4 + _494;
  int16_t _496 = _lyy_stencil_3 + _495;
  int16_t _497 = _lyy_stencil_2 + _496;
  int16_t _498 = _lgyy_stencil_1 + _497;
  int16_t _499 = _lyy_stencil_1 + _498;
  return _499;
}

//store is: cim.stencil((cim_s0_x_xi + -1), (cim_s0_y_yi + -1)) = ((((lgxx.stencil((cim_s0_x_xi + -1), (cim_s0_y_yi + -1))/(int16)64)*(lgyy.stencil((cim_s0_x_xi + -1), (cim_s0_y_yi + -1))/(int16)64)) - ((lgxy.stencil((cim_s0_x_xi + -1), (cim_s0_y_yi + -1))/(int16)64)*(lgxy.stencil((cim_s0_x_xi + -1), (cim_s0_y_yi + -1))/(int16)64))) - ((((lgxx.stencil((cim_s0_x_xi + -1), (cim_s0_y_yi + -1))/(int16)64) + (lgyy.stencil((cim_s0_x_xi + -1), (cim_s0_y_yi + -1))/(int16)64))*((lgxx.stencil((cim_s0_x_xi + -1), (cim_s0_y_yi + -1))/(int16)64) + (lgyy.stencil((cim_s0_x_xi + -1), (cim_s0_y_yi + -1))/(int16)64)))/(int16)16))
hw_uint<16> hcompute_cim_stencil(hw_uint<16>& lgxx_stencil, hw_uint<16>& lgxy_stencil, hw_uint<16>& lgyy_stencil) {
  int16_t _lgxx_stencil_2 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lgxy_stencil_2 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lgyy_stencil_2 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _532 = (int16_t)(6);
  int16_t _533 = _lgxx_stencil_2 >> _532;
  int16_t _534 = _lgyy_stencil_2 >> _532;
  int16_t _535 = _533 * _534;
  int16_t _536 = _lgxy_stencil_2 >> _532;
  int16_t _537 = _536 * _536;
  int16_t _538 = _535 - _537;
  int16_t _539 = _533 + _534;
  int16_t _540 = _539 * _539;
  int16_t _541 = (int16_t)(4);
  int16_t _542 = _540 >> _541;
  int16_t _543 = _538 - _542;
  return _543;
}

