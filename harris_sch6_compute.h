#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: padded16_global_wrapper.stencil(padded16_global_wrapper_s0_x, padded16_global_wrapper_s0_y) = padded16.stencil(padded16_global_wrapper_s0_x, padded16_global_wrapper_s0_y)
hw_uint<16> hcompute_padded16_global_wrapper_stencil(hw_uint<16>& padded16_stencil) {
  int16_t _padded16_stencil_1 = (int16_t) padded16_stencil.extract<0, 15>();

  return _padded16_stencil_1;
}

//store is: grad_x.stencil(((grad_x_s0_x_x*2) + -2), grad_x_s0_y) = max(min(((((grad_x_unclamp.stencil(((grad_x_s0_x_x*2) + -2), grad_x_s0_y) + (padded16_global_wrapper.stencil(((grad_x_s0_x_x*2) + -1), (grad_x_s0_y + -1)) + (padded16_global_wrapper.stencil(((grad_x_s0_x_x*2) + -1), (grad_x_s0_y + 1)) + (padded16_global_wrapper.stencil(((grad_x_s0_x_x*2) + -1), grad_x_s0_y)*(int16)2)))) - padded16_global_wrapper.stencil(((grad_x_s0_x_x*2) + -3), (grad_x_s0_y + -1))) - (padded16_global_wrapper.stencil(((grad_x_s0_x_x*2) + -3), grad_x_s0_y)*(int16)2)) - padded16_global_wrapper.stencil(((grad_x_s0_x_x*2) + -3), (grad_x_s0_y + 1))), (int16)255), (int16)-255)
hw_uint<16> hcompute_grad_x_stencil(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<96>& padded16_global_wrapper_stencil) {
  int16_t _grad_x_unclamp_stencil_1 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _padded16_global_wrapper_stencil_1 = (int16_t) padded16_global_wrapper_stencil.extract<0, 15>();
  int16_t _padded16_global_wrapper_stencil_2 = (int16_t) padded16_global_wrapper_stencil.extract<16, 31>();
  int16_t _padded16_global_wrapper_stencil_3 = (int16_t) padded16_global_wrapper_stencil.extract<32, 47>();
  int16_t _padded16_global_wrapper_stencil_4 = (int16_t) padded16_global_wrapper_stencil.extract<48, 63>();
  int16_t _padded16_global_wrapper_stencil_5 = (int16_t) padded16_global_wrapper_stencil.extract<64, 79>();
  int16_t _padded16_global_wrapper_stencil_6 = (int16_t) padded16_global_wrapper_stencil.extract<80, 95>();

  int16_t _261 = (int16_t)(2);
  int16_t _262 = _padded16_global_wrapper_stencil_3 * _261;
  int16_t _263 = _padded16_global_wrapper_stencil_2 + _262;
  int16_t _264 = _padded16_global_wrapper_stencil_1 + _263;
  int16_t _265 = _grad_x_unclamp_stencil_1 + _264;
  int16_t _266 = _265 - _padded16_global_wrapper_stencil_4;
  int16_t _267 = _padded16_global_wrapper_stencil_5 * _261;
  int16_t _268 = _266 - _267;
  int16_t _269 = _268 - _padded16_global_wrapper_stencil_6;
  int16_t _270 = (int16_t)(255);
  int16_t _271 = min(_269, _270);
  int16_t _272 = (int16_t)(-255);
  int16_t _273 = max(_271, _272);
  return _273;
}

//store is: grad_x.stencil(((grad_x_s0_x_x*2) + -1), grad_x_s0_y) = max(min(((((grad_x_unclamp.stencil(((grad_x_s0_x_x*2) + -1), grad_x_s0_y) + (padded16_global_wrapper.stencil((grad_x_s0_x_x*2), (grad_x_s0_y + -1)) + (padded16_global_wrapper.stencil((grad_x_s0_x_x*2), (grad_x_s0_y + 1)) + (padded16_global_wrapper.stencil((grad_x_s0_x_x*2), grad_x_s0_y)*(int16)2)))) - padded16_global_wrapper.stencil(((grad_x_s0_x_x*2) + -2), (grad_x_s0_y + -1))) - (padded16_global_wrapper.stencil(((grad_x_s0_x_x*2) + -2), grad_x_s0_y)*(int16)2)) - padded16_global_wrapper.stencil(((grad_x_s0_x_x*2) + -2), (grad_x_s0_y + 1))), (int16)255), (int16)-255)
hw_uint<16> hcompute_grad_x_stencil_1(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<96>& padded16_global_wrapper_stencil) {
  int16_t _grad_x_unclamp_stencil_2 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _padded16_global_wrapper_stencil_10 = (int16_t) padded16_global_wrapper_stencil.extract<0, 15>();
  int16_t _padded16_global_wrapper_stencil_11 = (int16_t) padded16_global_wrapper_stencil.extract<16, 31>();
  int16_t _padded16_global_wrapper_stencil_12 = (int16_t) padded16_global_wrapper_stencil.extract<32, 47>();
  int16_t _padded16_global_wrapper_stencil_7 = (int16_t) padded16_global_wrapper_stencil.extract<48, 63>();
  int16_t _padded16_global_wrapper_stencil_8 = (int16_t) padded16_global_wrapper_stencil.extract<64, 79>();
  int16_t _padded16_global_wrapper_stencil_9 = (int16_t) padded16_global_wrapper_stencil.extract<80, 95>();

  int16_t _313 = (int16_t)(2);
  int16_t _314 = _padded16_global_wrapper_stencil_9 * _313;
  int16_t _315 = _padded16_global_wrapper_stencil_8 + _314;
  int16_t _316 = _padded16_global_wrapper_stencil_7 + _315;
  int16_t _317 = _grad_x_unclamp_stencil_2 + _316;
  int16_t _318 = _317 - _padded16_global_wrapper_stencil_10;
  int16_t _319 = _padded16_global_wrapper_stencil_11 * _313;
  int16_t _320 = _318 - _319;
  int16_t _321 = _320 - _padded16_global_wrapper_stencil_12;
  int16_t _322 = (int16_t)(255);
  int16_t _323 = min(_321, _322);
  int16_t _324 = (int16_t)(-255);
  int16_t _325 = max(_323, _324);
  return _325;
}

//store is: lxx.stencil(((lxx_s0_x_x*2) + -2), lxx_s0_y) = ((grad_x.stencil(((lxx_s0_x_x*2) + -2), lxx_s0_y)*grad_x.stencil(((lxx_s0_x_x*2) + -2), lxx_s0_y))/(int16)128)
hw_uint<16> hcompute_lxx_stencil(hw_uint<16>& grad_x_stencil) {
  int16_t _grad_x_stencil_1 = (int16_t) grad_x_stencil.extract<0, 15>();

  int16_t _364 = _grad_x_stencil_1 * _grad_x_stencil_1;
  int16_t _365 = (int16_t)(7);
  int16_t _366 = _364 >> _365;
  return _366;
}

//store is: lxx.stencil(((lxx_s0_x_x*2) + -1), lxx_s0_y) = ((grad_x.stencil(((lxx_s0_x_x*2) + -1), lxx_s0_y)*grad_x.stencil(((lxx_s0_x_x*2) + -1), lxx_s0_y))/(int16)128)
hw_uint<16> hcompute_lxx_stencil_1(hw_uint<16>& grad_x_stencil) {
  int16_t _grad_x_stencil_2 = (int16_t) grad_x_stencil.extract<0, 15>();

  int16_t _376 = _grad_x_stencil_2 * _grad_x_stencil_2;
  int16_t _377 = (int16_t)(7);
  int16_t _378 = _376 >> _377;
  return _378;
}

//store is: lgxx.stencil(((lgxx_s0_x_x*2) + -1), lgxx_s0_y) = (int16)0
hw_uint<16> hcompute_lgxx_stencil() {
  int16_t _388 = (int16_t)(0);
  return _388;
}

//store is: lgxx.stencil((lgxx_s0_x_x*2), lgxx_s0_y) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_1() {
  int16_t _393 = (int16_t)(0);
  return _393;
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

  int16_t _397 = _lxx_stencil_8 + _lxx_stencil_9;
  int16_t _398 = _lxx_stencil_7 + _397;
  int16_t _399 = _lxx_stencil_6 + _398;
  int16_t _400 = _lxx_stencil_5 + _399;
  int16_t _401 = _lxx_stencil_4 + _400;
  int16_t _402 = _lxx_stencil_3 + _401;
  int16_t _403 = _lxx_stencil_2 + _402;
  int16_t _404 = _lgxx_stencil_1 + _403;
  int16_t _405 = _lxx_stencil_1 + _404;
  return _405;
}

//store is: grad_y.stencil(((grad_y_s0_x_x*2) + -2), grad_y_s0_y) = max(min(((((padded16_global_wrapper.stencil(((grad_y_s0_x_x*2) + -3), (grad_y_s0_y + -1)) + (grad_y_unclamp.stencil(((grad_y_s0_x_x*2) + -2), grad_y_s0_y) + (padded16_global_wrapper.stencil(((grad_y_s0_x_x*2) + -1), (grad_y_s0_y + -1)) + (padded16_global_wrapper.stencil(((grad_y_s0_x_x*2) + -2), (grad_y_s0_y + -1))*(int16)2)))) - padded16_global_wrapper.stencil(((grad_y_s0_x_x*2) + -3), (grad_y_s0_y + 1))) - (padded16_global_wrapper.stencil(((grad_y_s0_x_x*2) + -2), (grad_y_s0_y + 1))*(int16)2)) - padded16_global_wrapper.stencil(((grad_y_s0_x_x*2) + -1), (grad_y_s0_y + 1))), (int16)255), (int16)-255)
hw_uint<16> hcompute_grad_y_stencil(hw_uint<16>& grad_y_unclamp_stencil, hw_uint<96>& padded16_global_wrapper_stencil) {
  int16_t _grad_y_unclamp_stencil_1 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _padded16_global_wrapper_stencil_13 = (int16_t) padded16_global_wrapper_stencil.extract<0, 15>();
  int16_t _padded16_global_wrapper_stencil_14 = (int16_t) padded16_global_wrapper_stencil.extract<16, 31>();
  int16_t _padded16_global_wrapper_stencil_15 = (int16_t) padded16_global_wrapper_stencil.extract<32, 47>();
  int16_t _padded16_global_wrapper_stencil_16 = (int16_t) padded16_global_wrapper_stencil.extract<48, 63>();
  int16_t _padded16_global_wrapper_stencil_17 = (int16_t) padded16_global_wrapper_stencil.extract<64, 79>();
  int16_t _padded16_global_wrapper_stencil_18 = (int16_t) padded16_global_wrapper_stencil.extract<80, 95>();

  int16_t _438 = (int16_t)(2);
  int16_t _439 = _padded16_global_wrapper_stencil_15 * _438;
  int16_t _440 = _padded16_global_wrapper_stencil_14 + _439;
  int16_t _441 = _grad_y_unclamp_stencil_1 + _440;
  int16_t _442 = _padded16_global_wrapper_stencil_13 + _441;
  int16_t _443 = _442 - _padded16_global_wrapper_stencil_16;
  int16_t _444 = _padded16_global_wrapper_stencil_17 * _438;
  int16_t _445 = _443 - _444;
  int16_t _446 = _445 - _padded16_global_wrapper_stencil_18;
  int16_t _447 = (int16_t)(255);
  int16_t _448 = min(_446, _447);
  int16_t _449 = (int16_t)(-255);
  int16_t _450 = max(_448, _449);
  return _450;
}

//store is: grad_y.stencil(((grad_y_s0_x_x*2) + -1), grad_y_s0_y) = max(min(((((padded16_global_wrapper.stencil(((grad_y_s0_x_x*2) + -2), (grad_y_s0_y + -1)) + (grad_y_unclamp.stencil(((grad_y_s0_x_x*2) + -1), grad_y_s0_y) + (padded16_global_wrapper.stencil((grad_y_s0_x_x*2), (grad_y_s0_y + -1)) + (padded16_global_wrapper.stencil(((grad_y_s0_x_x*2) + -1), (grad_y_s0_y + -1))*(int16)2)))) - padded16_global_wrapper.stencil(((grad_y_s0_x_x*2) + -2), (grad_y_s0_y + 1))) - (padded16_global_wrapper.stencil(((grad_y_s0_x_x*2) + -1), (grad_y_s0_y + 1))*(int16)2)) - padded16_global_wrapper.stencil((grad_y_s0_x_x*2), (grad_y_s0_y + 1))), (int16)255), (int16)-255)
hw_uint<16> hcompute_grad_y_stencil_1(hw_uint<16>& grad_y_unclamp_stencil, hw_uint<96>& padded16_global_wrapper_stencil) {
  int16_t _grad_y_unclamp_stencil_2 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _padded16_global_wrapper_stencil_19 = (int16_t) padded16_global_wrapper_stencil.extract<0, 15>();
  int16_t _padded16_global_wrapper_stencil_20 = (int16_t) padded16_global_wrapper_stencil.extract<16, 31>();
  int16_t _padded16_global_wrapper_stencil_21 = (int16_t) padded16_global_wrapper_stencil.extract<32, 47>();
  int16_t _padded16_global_wrapper_stencil_22 = (int16_t) padded16_global_wrapper_stencil.extract<48, 63>();
  int16_t _padded16_global_wrapper_stencil_23 = (int16_t) padded16_global_wrapper_stencil.extract<64, 79>();
  int16_t _padded16_global_wrapper_stencil_24 = (int16_t) padded16_global_wrapper_stencil.extract<80, 95>();

  int16_t _490 = (int16_t)(2);
  int16_t _491 = _padded16_global_wrapper_stencil_21 * _490;
  int16_t _492 = _padded16_global_wrapper_stencil_20 + _491;
  int16_t _493 = _grad_y_unclamp_stencil_2 + _492;
  int16_t _494 = _padded16_global_wrapper_stencil_19 + _493;
  int16_t _495 = _494 - _padded16_global_wrapper_stencil_22;
  int16_t _496 = _padded16_global_wrapper_stencil_23 * _490;
  int16_t _497 = _495 - _496;
  int16_t _498 = _497 - _padded16_global_wrapper_stencil_24;
  int16_t _499 = (int16_t)(255);
  int16_t _500 = min(_498, _499);
  int16_t _501 = (int16_t)(-255);
  int16_t _502 = max(_500, _501);
  return _502;
}

//store is: lxy.stencil(((lxy_s0_x_x*2) + -2), lxy_s0_y) = ((grad_x.stencil(((lxy_s0_x_x*2) + -2), lxy_s0_y)*grad_y.stencil(((lxy_s0_x_x*2) + -2), lxy_s0_y))/(int16)128)
hw_uint<16> hcompute_lxy_stencil(hw_uint<16>& grad_x_stencil, hw_uint<16>& grad_y_stencil) {
  int16_t _grad_x_stencil_3 = (int16_t) grad_x_stencil.extract<0, 15>();

  int16_t _grad_y_stencil_1 = (int16_t) grad_y_stencil.extract<0, 15>();

  int16_t _541 = _grad_x_stencil_3 * _grad_y_stencil_1;
  int16_t _542 = (int16_t)(7);
  int16_t _543 = _541 >> _542;
  return _543;
}

//store is: lxy.stencil(((lxy_s0_x_x*2) + -1), lxy_s0_y) = ((grad_x.stencil(((lxy_s0_x_x*2) + -1), lxy_s0_y)*grad_y.stencil(((lxy_s0_x_x*2) + -1), lxy_s0_y))/(int16)128)
hw_uint<16> hcompute_lxy_stencil_1(hw_uint<16>& grad_x_stencil, hw_uint<16>& grad_y_stencil) {
  int16_t _grad_x_stencil_4 = (int16_t) grad_x_stencil.extract<0, 15>();

  int16_t _grad_y_stencil_2 = (int16_t) grad_y_stencil.extract<0, 15>();

  int16_t _554 = _grad_x_stencil_4 * _grad_y_stencil_2;
  int16_t _555 = (int16_t)(7);
  int16_t _556 = _554 >> _555;
  return _556;
}

//store is: lgxy.stencil(((lgxy_s0_x_x*2) + -1), lgxy_s0_y) = (int16)0
hw_uint<16> hcompute_lgxy_stencil() {
  int16_t _567 = (int16_t)(0);
  return _567;
}

//store is: lgxy.stencil((lgxy_s0_x_x*2), lgxy_s0_y) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_1() {
  int16_t _572 = (int16_t)(0);
  return _572;
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

  int16_t _576 = _lxy_stencil_8 + _lxy_stencil_9;
  int16_t _577 = _lxy_stencil_7 + _576;
  int16_t _578 = _lxy_stencil_6 + _577;
  int16_t _579 = _lxy_stencil_5 + _578;
  int16_t _580 = _lxy_stencil_4 + _579;
  int16_t _581 = _lxy_stencil_3 + _580;
  int16_t _582 = _lxy_stencil_2 + _581;
  int16_t _583 = _lgxy_stencil_1 + _582;
  int16_t _584 = _lxy_stencil_1 + _583;
  return _584;
}

//store is: lyy.stencil(((lyy_s0_x_x*2) + -2), lyy_s0_y) = ((grad_y.stencil(((lyy_s0_x_x*2) + -2), lyy_s0_y)*grad_y.stencil(((lyy_s0_x_x*2) + -2), lyy_s0_y))/(int16)128)
hw_uint<16> hcompute_lyy_stencil(hw_uint<16>& grad_y_stencil) {
  int16_t _grad_y_stencil_3 = (int16_t) grad_y_stencil.extract<0, 15>();

  int16_t _617 = _grad_y_stencil_3 * _grad_y_stencil_3;
  int16_t _618 = (int16_t)(7);
  int16_t _619 = _617 >> _618;
  return _619;
}

//store is: lyy.stencil(((lyy_s0_x_x*2) + -1), lyy_s0_y) = ((grad_y.stencil(((lyy_s0_x_x*2) + -1), lyy_s0_y)*grad_y.stencil(((lyy_s0_x_x*2) + -1), lyy_s0_y))/(int16)128)
hw_uint<16> hcompute_lyy_stencil_1(hw_uint<16>& grad_y_stencil) {
  int16_t _grad_y_stencil_4 = (int16_t) grad_y_stencil.extract<0, 15>();

  int16_t _629 = _grad_y_stencil_4 * _grad_y_stencil_4;
  int16_t _630 = (int16_t)(7);
  int16_t _631 = _629 >> _630;
  return _631;
}

//store is: lgyy.stencil(((lgyy_s0_x_x*2) + -1), lgyy_s0_y) = (int16)0
hw_uint<16> hcompute_lgyy_stencil() {
  int16_t _641 = (int16_t)(0);
  return _641;
}

//store is: lgyy.stencil((lgyy_s0_x_x*2), lgyy_s0_y) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_1() {
  int16_t _646 = (int16_t)(0);
  return _646;
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

  int16_t _650 = _lyy_stencil_8 + _lyy_stencil_9;
  int16_t _651 = _lyy_stencil_7 + _650;
  int16_t _652 = _lyy_stencil_6 + _651;
  int16_t _653 = _lyy_stencil_5 + _652;
  int16_t _654 = _lyy_stencil_4 + _653;
  int16_t _655 = _lyy_stencil_3 + _654;
  int16_t _656 = _lyy_stencil_2 + _655;
  int16_t _657 = _lgyy_stencil_1 + _656;
  int16_t _658 = _lyy_stencil_1 + _657;
  return _658;
}

//store is: cim.stencil(((cim_s0_x_x*2) + -1), cim_s0_y) = ((((lgxx.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64)*(lgyy.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64)) - ((lgxy.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64)*(lgxy.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64))) - ((((lgxx.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64) + (lgyy.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64))*((lgxx.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64) + (lgyy.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64)))/(int16)16))
hw_uint<16> hcompute_cim_stencil(hw_uint<16>& lgxx_stencil, hw_uint<16>& lgxy_stencil, hw_uint<16>& lgyy_stencil) {
  int16_t _lgxx_stencil_2 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lgxy_stencil_2 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lgyy_stencil_2 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _691 = (int16_t)(6);
  int16_t _692 = _lgxx_stencil_2 >> _691;
  int16_t _693 = _lgyy_stencil_2 >> _691;
  int16_t _694 = _692 * _693;
  int16_t _695 = _lgxy_stencil_2 >> _691;
  int16_t _696 = _695 * _695;
  int16_t _697 = _694 - _696;
  int16_t _698 = _692 + _693;
  int16_t _699 = _698 * _698;
  int16_t _700 = (int16_t)(4);
  int16_t _701 = _699 >> _700;
  int16_t _702 = _697 - _701;
  return _702;
}

//store is: cim.stencil((cim_s0_x_x*2), cim_s0_y) = ((((lgxx.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64)*(lgyy.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64)) - ((lgxy.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64)*(lgxy.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64))) - ((((lgxx.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64) + (lgyy.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64))*((lgxx.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64) + (lgyy.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64)))/(int16)16))
hw_uint<16> hcompute_cim_stencil_1(hw_uint<16>& lgxx_stencil, hw_uint<16>& lgxy_stencil, hw_uint<16>& lgyy_stencil) {
  int16_t _lgxx_stencil_3 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lgxy_stencil_3 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lgyy_stencil_3 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _732 = (int16_t)(6);
  int16_t _733 = _lgxx_stencil_3 >> _732;
  int16_t _734 = _lgyy_stencil_3 >> _732;
  int16_t _735 = _733 * _734;
  int16_t _736 = _lgxy_stencil_3 >> _732;
  int16_t _737 = _736 * _736;
  int16_t _738 = _735 - _737;
  int16_t _739 = _733 + _734;
  int16_t _740 = _739 * _739;
  int16_t _741 = (int16_t)(4);
  int16_t _742 = _740 >> _741;
  int16_t _743 = _738 - _742;
  return _743;
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

  bool _772 = _cim_stencil_1 < _cim_stencil_2;
  bool _773 = _cim_stencil_3 < _cim_stencil_2;
  bool _774 = _772 && _773;
  bool _775 = _cim_stencil_4 < _cim_stencil_2;
  bool _776 = _774 && _775;
  bool _777 = _cim_stencil_5 < _cim_stencil_2;
  bool _778 = _776 && _777;
  bool _779 = _cim_stencil_6 < _cim_stencil_2;
  bool _780 = _778 && _779;
  bool _781 = _cim_stencil_7 < _cim_stencil_2;
  bool _782 = _780 && _781;
  bool _783 = _cim_stencil_8 < _cim_stencil_2;
  bool _784 = _782 && _783;
  bool _785 = _cim_stencil_9 < _cim_stencil_2;
  bool _786 = _784 && _785;
  int16_t _787 = (int16_t)(1);
  bool _788 = _787 <= _cim_stencil_2;
  bool _789 = _786 && _788;
  int32_t _790 = (int32_t)(_789 ? 255 : 0);
  int16_t _791 = (int16_t)(_790);
  return _791;
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

  bool _846 = _cim_stencil_10 < _cim_stencil_11;
  bool _847 = _cim_stencil_12 < _cim_stencil_11;
  bool _848 = _846 && _847;
  bool _849 = _cim_stencil_13 < _cim_stencil_11;
  bool _850 = _848 && _849;
  bool _851 = _cim_stencil_14 < _cim_stencil_11;
  bool _852 = _850 && _851;
  bool _853 = _cim_stencil_15 < _cim_stencil_11;
  bool _854 = _852 && _853;
  bool _855 = _cim_stencil_16 < _cim_stencil_11;
  bool _856 = _854 && _855;
  bool _857 = _cim_stencil_17 < _cim_stencil_11;
  bool _858 = _856 && _857;
  bool _859 = _cim_stencil_18 < _cim_stencil_11;
  bool _860 = _858 && _859;
  int16_t _861 = (int16_t)(1);
  bool _862 = _861 <= _cim_stencil_11;
  bool _863 = _860 && _862;
  int32_t _864 = (int32_t)(_863 ? 255 : 0);
  int16_t _865 = (int16_t)(_864);
  return _865;
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

