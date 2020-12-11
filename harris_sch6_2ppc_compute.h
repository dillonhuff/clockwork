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

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*2) + -2), grad_x_unclamp_s1_y) = ((((grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*2) + -2), grad_x_unclamp_s1_y) + (padded16_global_wrapper.stencil(((grad_x_unclamp_s1_x_x*2) + -1), (grad_x_unclamp_s1_y + -1)) + (padded16_global_wrapper.stencil(((grad_x_unclamp_s1_x_x*2) + -1), (grad_x_unclamp_s1_y + 1)) + (padded16_global_wrapper.stencil(((grad_x_unclamp_s1_x_x*2) + -1), grad_x_unclamp_s1_y)*(int16)2)))) - padded16_global_wrapper.stencil(((grad_x_unclamp_s1_x_x*2) + -3), (grad_x_unclamp_s1_y + -1))) - (padded16_global_wrapper.stencil(((grad_x_unclamp_s1_x_x*2) + -3), grad_x_unclamp_s1_y)*(int16)2)) - padded16_global_wrapper.stencil(((grad_x_unclamp_s1_x_x*2) + -3), (grad_x_unclamp_s1_y + 1)))
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

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*2) + -1), grad_x_unclamp_s1_y) = ((((grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*2) + -1), grad_x_unclamp_s1_y) + (padded16_global_wrapper.stencil((grad_x_unclamp_s1_x_x*2), (grad_x_unclamp_s1_y + -1)) + (padded16_global_wrapper.stencil((grad_x_unclamp_s1_x_x*2), (grad_x_unclamp_s1_y + 1)) + (padded16_global_wrapper.stencil((grad_x_unclamp_s1_x_x*2), grad_x_unclamp_s1_y)*(int16)2)))) - padded16_global_wrapper.stencil(((grad_x_unclamp_s1_x_x*2) + -2), (grad_x_unclamp_s1_y + -1))) - (padded16_global_wrapper.stencil(((grad_x_unclamp_s1_x_x*2) + -2), grad_x_unclamp_s1_y)*(int16)2)) - padded16_global_wrapper.stencil(((grad_x_unclamp_s1_x_x*2) + -2), (grad_x_unclamp_s1_y + 1)))
hw_uint<16> hcompute_grad_x_unclamp_stencil_3(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<96>& padded16_global_wrapper_stencil) {
  int16_t _grad_x_unclamp_stencil_2 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _padded16_global_wrapper_stencil_10 = (int16_t) padded16_global_wrapper_stencil.extract<0, 15>();
  int16_t _padded16_global_wrapper_stencil_11 = (int16_t) padded16_global_wrapper_stencil.extract<16, 31>();
  int16_t _padded16_global_wrapper_stencil_12 = (int16_t) padded16_global_wrapper_stencil.extract<32, 47>();
  int16_t _padded16_global_wrapper_stencil_7 = (int16_t) padded16_global_wrapper_stencil.extract<48, 63>();
  int16_t _padded16_global_wrapper_stencil_8 = (int16_t) padded16_global_wrapper_stencil.extract<64, 79>();
  int16_t _padded16_global_wrapper_stencil_9 = (int16_t) padded16_global_wrapper_stencil.extract<80, 95>();

  int16_t _316 = (int16_t)(2);
  int16_t _317 = _padded16_global_wrapper_stencil_9 * _316;
  int16_t _318 = _padded16_global_wrapper_stencil_8 + _317;
  int16_t _319 = _padded16_global_wrapper_stencil_7 + _318;
  int16_t _320 = _grad_x_unclamp_stencil_2 + _319;
  int16_t _321 = _320 - _padded16_global_wrapper_stencil_10;
  int16_t _322 = _padded16_global_wrapper_stencil_11 * _316;
  int16_t _323 = _321 - _322;
  int16_t _324 = _323 - _padded16_global_wrapper_stencil_12;
  return _324;
}

//store is: lxx.stencil(((lxx_s0_x_x*2) + -2), lxx_s0_y) = ((max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*2) + -2), lxx_s0_y), (int16)180), (int16)-180)*max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*2) + -2), lxx_s0_y), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lxx_stencil(hw_uint<16>& grad_x_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_3 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _355 = (int16_t)(180);
  int16_t _356 = min(_grad_x_unclamp_stencil_3, _355);
  int16_t _357 = (int16_t)(-180);
  int16_t _358 = max(_356, _357);
  int16_t _359 = _358 * _358;
  int16_t _360 = (int16_t)(6);
  int16_t _361 = _359 >> _360;
  return _361;
}

//store is: lxx.stencil(((lxx_s0_x_x*2) + -1), lxx_s0_y) = ((max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*2) + -1), lxx_s0_y), (int16)180), (int16)-180)*max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*2) + -1), lxx_s0_y), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lxx_stencil_1(hw_uint<16>& grad_x_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_4 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _379 = (int16_t)(180);
  int16_t _380 = min(_grad_x_unclamp_stencil_4, _379);
  int16_t _381 = (int16_t)(-180);
  int16_t _382 = max(_380, _381);
  int16_t _383 = _382 * _382;
  int16_t _384 = (int16_t)(6);
  int16_t _385 = _383 >> _384;
  return _385;
}

//store is: lgxx.stencil(((lgxx_s0_x_x*2) + -1), lgxx_s0_y) = (int16)0
hw_uint<16> hcompute_lgxx_stencil() {
  int16_t _403 = (int16_t)(0);
  return _403;
}

//store is: lgxx.stencil((lgxx_s0_x_x*2), lgxx_s0_y) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_1() {
  int16_t _408 = (int16_t)(0);
  return _408;
}

//store is: lgxx.stencil(((lgxx_s1_x_x*2) + -1), lgxx_s1_y) = (lxx.stencil(((lgxx_s1_x_x*2) + -2), (lgxx_s1_y + -1)) + (lgxx.stencil(((lgxx_s1_x_x*2) + -1), lgxx_s1_y) + (lxx.stencil(((lgxx_s1_x_x*2) + -1), (lgxx_s1_y + -1)) + (lxx.stencil((lgxx_s1_x_x*2), (lgxx_s1_y + -1)) + (lxx.stencil(((lgxx_s1_x_x*2) + -2), lgxx_s1_y) + (lxx.stencil(((lgxx_s1_x_x*2) + -1), lgxx_s1_y) + (lxx.stencil((lgxx_s1_x_x*2), lgxx_s1_y) + (lxx.stencil(((lgxx_s1_x_x*2) + -2), (lgxx_s1_y + 1)) + (lxx.stencil((lgxx_s1_x_x*2), (lgxx_s1_y + 1)) + lxx.stencil(((lgxx_s1_x_x*2) + -1), (lgxx_s1_y + 1)))))))))))
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

  int16_t _412 = _lxx_stencil_8 + _lxx_stencil_9;
  int16_t _413 = _lxx_stencil_7 + _412;
  int16_t _414 = _lxx_stencil_6 + _413;
  int16_t _415 = _lxx_stencil_5 + _414;
  int16_t _416 = _lxx_stencil_4 + _415;
  int16_t _417 = _lxx_stencil_3 + _416;
  int16_t _418 = _lxx_stencil_2 + _417;
  int16_t _419 = _lgxx_stencil_1 + _418;
  int16_t _420 = _lxx_stencil_1 + _419;
  return _420;
}

//store is: lgxx.stencil((lgxx_s1_x_x*2), lgxx_s1_y) = (lxx.stencil(((lgxx_s1_x_x*2) + -1), (lgxx_s1_y + -1)) + (lgxx.stencil((lgxx_s1_x_x*2), lgxx_s1_y) + (lxx.stencil((lgxx_s1_x_x*2), (lgxx_s1_y + -1)) + (lxx.stencil(((lgxx_s1_x_x*2) + 1), (lgxx_s1_y + -1)) + (lxx.stencil(((lgxx_s1_x_x*2) + -1), lgxx_s1_y) + (lxx.stencil((lgxx_s1_x_x*2), lgxx_s1_y) + (lxx.stencil(((lgxx_s1_x_x*2) + 1), lgxx_s1_y) + (lxx.stencil(((lgxx_s1_x_x*2) + -1), (lgxx_s1_y + 1)) + (lxx.stencil(((lgxx_s1_x_x*2) + 1), (lgxx_s1_y + 1)) + lxx.stencil((lgxx_s1_x_x*2), (lgxx_s1_y + 1)))))))))))
hw_uint<16> hcompute_lgxx_stencil_3(hw_uint<16>& lgxx_stencil, hw_uint<144>& lxx_stencil) {
  int16_t _lgxx_stencil_2 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lxx_stencil_10 = (int16_t) lxx_stencil.extract<0, 15>();
  int16_t _lxx_stencil_11 = (int16_t) lxx_stencil.extract<16, 31>();
  int16_t _lxx_stencil_12 = (int16_t) lxx_stencil.extract<32, 47>();
  int16_t _lxx_stencil_13 = (int16_t) lxx_stencil.extract<48, 63>();
  int16_t _lxx_stencil_14 = (int16_t) lxx_stencil.extract<64, 79>();
  int16_t _lxx_stencil_15 = (int16_t) lxx_stencil.extract<80, 95>();
  int16_t _lxx_stencil_16 = (int16_t) lxx_stencil.extract<96, 111>();
  int16_t _lxx_stencil_17 = (int16_t) lxx_stencil.extract<112, 127>();
  int16_t _lxx_stencil_18 = (int16_t) lxx_stencil.extract<128, 143>();

  int16_t _454 = _lxx_stencil_17 + _lxx_stencil_18;
  int16_t _455 = _lxx_stencil_16 + _454;
  int16_t _456 = _lxx_stencil_15 + _455;
  int16_t _457 = _lxx_stencil_14 + _456;
  int16_t _458 = _lxx_stencil_13 + _457;
  int16_t _459 = _lxx_stencil_12 + _458;
  int16_t _460 = _lxx_stencil_11 + _459;
  int16_t _461 = _lgxx_stencil_2 + _460;
  int16_t _462 = _lxx_stencil_10 + _461;
  return _462;
}

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s0_x_x*2) + -2), grad_y_unclamp_s0_y) = (int16)0
hw_uint<16> hcompute_grad_y_unclamp_stencil() {
  int16_t _496 = (int16_t)(0);
  return _496;
}

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s0_x_x*2) + -1), grad_y_unclamp_s0_y) = (int16)0
hw_uint<16> hcompute_grad_y_unclamp_stencil_1() {
  int16_t _501 = (int16_t)(0);
  return _501;
}

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*2) + -2), grad_y_unclamp_s1_y) = ((((grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*2) + -2), grad_y_unclamp_s1_y) + (padded16_global_wrapper.stencil(((grad_y_unclamp_s1_x_x*2) + -3), (grad_y_unclamp_s1_y + 1)) + (padded16_global_wrapper.stencil(((grad_y_unclamp_s1_x_x*2) + -1), (grad_y_unclamp_s1_y + 1)) + (padded16_global_wrapper.stencil(((grad_y_unclamp_s1_x_x*2) + -2), (grad_y_unclamp_s1_y + 1))*(int16)2)))) - padded16_global_wrapper.stencil(((grad_y_unclamp_s1_x_x*2) + -3), (grad_y_unclamp_s1_y + -1))) - (padded16_global_wrapper.stencil(((grad_y_unclamp_s1_x_x*2) + -2), (grad_y_unclamp_s1_y + -1))*(int16)2)) - padded16_global_wrapper.stencil(((grad_y_unclamp_s1_x_x*2) + -1), (grad_y_unclamp_s1_y + -1)))
hw_uint<16> hcompute_grad_y_unclamp_stencil_2(hw_uint<16>& grad_y_unclamp_stencil, hw_uint<96>& padded16_global_wrapper_stencil) {
  int16_t _grad_y_unclamp_stencil_1 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _padded16_global_wrapper_stencil_13 = (int16_t) padded16_global_wrapper_stencil.extract<0, 15>();
  int16_t _padded16_global_wrapper_stencil_14 = (int16_t) padded16_global_wrapper_stencil.extract<16, 31>();
  int16_t _padded16_global_wrapper_stencil_15 = (int16_t) padded16_global_wrapper_stencil.extract<32, 47>();
  int16_t _padded16_global_wrapper_stencil_16 = (int16_t) padded16_global_wrapper_stencil.extract<48, 63>();
  int16_t _padded16_global_wrapper_stencil_17 = (int16_t) padded16_global_wrapper_stencil.extract<64, 79>();
  int16_t _padded16_global_wrapper_stencil_18 = (int16_t) padded16_global_wrapper_stencil.extract<80, 95>();

  int16_t _506 = (int16_t)(2);
  int16_t _507 = _padded16_global_wrapper_stencil_15 * _506;
  int16_t _508 = _padded16_global_wrapper_stencil_14 + _507;
  int16_t _509 = _padded16_global_wrapper_stencil_13 + _508;
  int16_t _510 = _grad_y_unclamp_stencil_1 + _509;
  int16_t _511 = _510 - _padded16_global_wrapper_stencil_16;
  int16_t _512 = _padded16_global_wrapper_stencil_17 * _506;
  int16_t _513 = _511 - _512;
  int16_t _514 = _513 - _padded16_global_wrapper_stencil_18;
  return _514;
}

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*2) + -1), grad_y_unclamp_s1_y) = ((((grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*2) + -1), grad_y_unclamp_s1_y) + (padded16_global_wrapper.stencil(((grad_y_unclamp_s1_x_x*2) + -2), (grad_y_unclamp_s1_y + 1)) + (padded16_global_wrapper.stencil((grad_y_unclamp_s1_x_x*2), (grad_y_unclamp_s1_y + 1)) + (padded16_global_wrapper.stencil(((grad_y_unclamp_s1_x_x*2) + -1), (grad_y_unclamp_s1_y + 1))*(int16)2)))) - padded16_global_wrapper.stencil(((grad_y_unclamp_s1_x_x*2) + -2), (grad_y_unclamp_s1_y + -1))) - (padded16_global_wrapper.stencil(((grad_y_unclamp_s1_x_x*2) + -1), (grad_y_unclamp_s1_y + -1))*(int16)2)) - padded16_global_wrapper.stencil((grad_y_unclamp_s1_x_x*2), (grad_y_unclamp_s1_y + -1)))
hw_uint<16> hcompute_grad_y_unclamp_stencil_3(hw_uint<16>& grad_y_unclamp_stencil, hw_uint<96>& padded16_global_wrapper_stencil) {
  int16_t _grad_y_unclamp_stencil_2 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _padded16_global_wrapper_stencil_19 = (int16_t) padded16_global_wrapper_stencil.extract<0, 15>();
  int16_t _padded16_global_wrapper_stencil_20 = (int16_t) padded16_global_wrapper_stencil.extract<16, 31>();
  int16_t _padded16_global_wrapper_stencil_21 = (int16_t) padded16_global_wrapper_stencil.extract<32, 47>();
  int16_t _padded16_global_wrapper_stencil_22 = (int16_t) padded16_global_wrapper_stencil.extract<48, 63>();
  int16_t _padded16_global_wrapper_stencil_23 = (int16_t) padded16_global_wrapper_stencil.extract<64, 79>();
  int16_t _padded16_global_wrapper_stencil_24 = (int16_t) padded16_global_wrapper_stencil.extract<80, 95>();

  int16_t _546 = (int16_t)(2);
  int16_t _547 = _padded16_global_wrapper_stencil_21 * _546;
  int16_t _548 = _padded16_global_wrapper_stencil_20 + _547;
  int16_t _549 = _padded16_global_wrapper_stencil_19 + _548;
  int16_t _550 = _grad_y_unclamp_stencil_2 + _549;
  int16_t _551 = _550 - _padded16_global_wrapper_stencil_22;
  int16_t _552 = _padded16_global_wrapper_stencil_23 * _546;
  int16_t _553 = _551 - _552;
  int16_t _554 = _553 - _padded16_global_wrapper_stencil_24;
  return _554;
}

//store is: lxy.stencil(((lxy_s0_x_x*2) + -2), lxy_s0_y) = ((max(min(grad_x_unclamp.stencil(((lxy_s0_x_x*2) + -2), lxy_s0_y), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lxy_s0_x_x*2) + -2), lxy_s0_y), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lxy_stencil(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_5 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _grad_y_unclamp_stencil_3 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _585 = (int16_t)(180);
  int16_t _586 = min(_grad_x_unclamp_stencil_5, _585);
  int16_t _587 = (int16_t)(-180);
  int16_t _588 = max(_586, _587);
  int16_t _589 = min(_grad_y_unclamp_stencil_3, _585);
  int16_t _590 = max(_589, _587);
  int16_t _591 = _588 * _590;
  int16_t _592 = (int16_t)(6);
  int16_t _593 = _591 >> _592;
  return _593;
}

//store is: lxy.stencil(((lxy_s0_x_x*2) + -1), lxy_s0_y) = ((max(min(grad_x_unclamp.stencil(((lxy_s0_x_x*2) + -1), lxy_s0_y), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lxy_s0_x_x*2) + -1), lxy_s0_y), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lxy_stencil_1(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_6 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _grad_y_unclamp_stencil_4 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _616 = (int16_t)(180);
  int16_t _617 = min(_grad_x_unclamp_stencil_6, _616);
  int16_t _618 = (int16_t)(-180);
  int16_t _619 = max(_617, _618);
  int16_t _620 = min(_grad_y_unclamp_stencil_4, _616);
  int16_t _621 = max(_620, _618);
  int16_t _622 = _619 * _621;
  int16_t _623 = (int16_t)(6);
  int16_t _624 = _622 >> _623;
  return _624;
}

//store is: lgxy.stencil(((lgxy_s0_x_x*2) + -1), lgxy_s0_y) = (int16)0
hw_uint<16> hcompute_lgxy_stencil() {
  int16_t _647 = (int16_t)(0);
  return _647;
}

//store is: lgxy.stencil((lgxy_s0_x_x*2), lgxy_s0_y) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_1() {
  int16_t _652 = (int16_t)(0);
  return _652;
}

//store is: lgxy.stencil(((lgxy_s1_x_x*2) + -1), lgxy_s1_y) = (lxy.stencil(((lgxy_s1_x_x*2) + -2), (lgxy_s1_y + -1)) + (lgxy.stencil(((lgxy_s1_x_x*2) + -1), lgxy_s1_y) + (lxy.stencil(((lgxy_s1_x_x*2) + -1), (lgxy_s1_y + -1)) + (lxy.stencil((lgxy_s1_x_x*2), (lgxy_s1_y + -1)) + (lxy.stencil(((lgxy_s1_x_x*2) + -2), lgxy_s1_y) + (lxy.stencil(((lgxy_s1_x_x*2) + -1), lgxy_s1_y) + (lxy.stencil((lgxy_s1_x_x*2), lgxy_s1_y) + (lxy.stencil(((lgxy_s1_x_x*2) + -2), (lgxy_s1_y + 1)) + (lxy.stencil((lgxy_s1_x_x*2), (lgxy_s1_y + 1)) + lxy.stencil(((lgxy_s1_x_x*2) + -1), (lgxy_s1_y + 1)))))))))))
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

  int16_t _656 = _lxy_stencil_8 + _lxy_stencil_9;
  int16_t _657 = _lxy_stencil_7 + _656;
  int16_t _658 = _lxy_stencil_6 + _657;
  int16_t _659 = _lxy_stencil_5 + _658;
  int16_t _660 = _lxy_stencil_4 + _659;
  int16_t _661 = _lxy_stencil_3 + _660;
  int16_t _662 = _lxy_stencil_2 + _661;
  int16_t _663 = _lgxy_stencil_1 + _662;
  int16_t _664 = _lxy_stencil_1 + _663;
  return _664;
}

//store is: lgxy.stencil((lgxy_s1_x_x*2), lgxy_s1_y) = (lxy.stencil(((lgxy_s1_x_x*2) + -1), (lgxy_s1_y + -1)) + (lgxy.stencil((lgxy_s1_x_x*2), lgxy_s1_y) + (lxy.stencil((lgxy_s1_x_x*2), (lgxy_s1_y + -1)) + (lxy.stencil(((lgxy_s1_x_x*2) + 1), (lgxy_s1_y + -1)) + (lxy.stencil(((lgxy_s1_x_x*2) + -1), lgxy_s1_y) + (lxy.stencil((lgxy_s1_x_x*2), lgxy_s1_y) + (lxy.stencil(((lgxy_s1_x_x*2) + 1), lgxy_s1_y) + (lxy.stencil(((lgxy_s1_x_x*2) + -1), (lgxy_s1_y + 1)) + (lxy.stencil(((lgxy_s1_x_x*2) + 1), (lgxy_s1_y + 1)) + lxy.stencil((lgxy_s1_x_x*2), (lgxy_s1_y + 1)))))))))))
hw_uint<16> hcompute_lgxy_stencil_3(hw_uint<16>& lgxy_stencil, hw_uint<144>& lxy_stencil) {
  int16_t _lgxy_stencil_2 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lxy_stencil_10 = (int16_t) lxy_stencil.extract<0, 15>();
  int16_t _lxy_stencil_11 = (int16_t) lxy_stencil.extract<16, 31>();
  int16_t _lxy_stencil_12 = (int16_t) lxy_stencil.extract<32, 47>();
  int16_t _lxy_stencil_13 = (int16_t) lxy_stencil.extract<48, 63>();
  int16_t _lxy_stencil_14 = (int16_t) lxy_stencil.extract<64, 79>();
  int16_t _lxy_stencil_15 = (int16_t) lxy_stencil.extract<80, 95>();
  int16_t _lxy_stencil_16 = (int16_t) lxy_stencil.extract<96, 111>();
  int16_t _lxy_stencil_17 = (int16_t) lxy_stencil.extract<112, 127>();
  int16_t _lxy_stencil_18 = (int16_t) lxy_stencil.extract<128, 143>();

  int16_t _698 = _lxy_stencil_17 + _lxy_stencil_18;
  int16_t _699 = _lxy_stencil_16 + _698;
  int16_t _700 = _lxy_stencil_15 + _699;
  int16_t _701 = _lxy_stencil_14 + _700;
  int16_t _702 = _lxy_stencil_13 + _701;
  int16_t _703 = _lxy_stencil_12 + _702;
  int16_t _704 = _lxy_stencil_11 + _703;
  int16_t _705 = _lgxy_stencil_2 + _704;
  int16_t _706 = _lxy_stencil_10 + _705;
  return _706;
}

//store is: lyy.stencil(((lyy_s0_x_x*2) + -2), lyy_s0_y) = ((max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*2) + -2), lyy_s0_y), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*2) + -2), lyy_s0_y), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lyy_stencil(hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_y_unclamp_stencil_5 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _740 = (int16_t)(180);
  int16_t _741 = min(_grad_y_unclamp_stencil_5, _740);
  int16_t _742 = (int16_t)(-180);
  int16_t _743 = max(_741, _742);
  int16_t _744 = _743 * _743;
  int16_t _745 = (int16_t)(6);
  int16_t _746 = _744 >> _745;
  return _746;
}

//store is: lyy.stencil(((lyy_s0_x_x*2) + -1), lyy_s0_y) = ((max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*2) + -1), lyy_s0_y), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*2) + -1), lyy_s0_y), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lyy_stencil_1(hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_y_unclamp_stencil_6 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _764 = (int16_t)(180);
  int16_t _765 = min(_grad_y_unclamp_stencil_6, _764);
  int16_t _766 = (int16_t)(-180);
  int16_t _767 = max(_765, _766);
  int16_t _768 = _767 * _767;
  int16_t _769 = (int16_t)(6);
  int16_t _770 = _768 >> _769;
  return _770;
}

//store is: lgyy.stencil(((lgyy_s0_x_x*2) + -1), lgyy_s0_y) = (int16)0
hw_uint<16> hcompute_lgyy_stencil() {
  int16_t _788 = (int16_t)(0);
  return _788;
}

//store is: lgyy.stencil((lgyy_s0_x_x*2), lgyy_s0_y) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_1() {
  int16_t _793 = (int16_t)(0);
  return _793;
}

//store is: lgyy.stencil(((lgyy_s1_x_x*2) + -1), lgyy_s1_y) = (lyy.stencil(((lgyy_s1_x_x*2) + -2), (lgyy_s1_y + -1)) + (lgyy.stencil(((lgyy_s1_x_x*2) + -1), lgyy_s1_y) + (lyy.stencil(((lgyy_s1_x_x*2) + -1), (lgyy_s1_y + -1)) + (lyy.stencil((lgyy_s1_x_x*2), (lgyy_s1_y + -1)) + (lyy.stencil(((lgyy_s1_x_x*2) + -2), lgyy_s1_y) + (lyy.stencil(((lgyy_s1_x_x*2) + -1), lgyy_s1_y) + (lyy.stencil((lgyy_s1_x_x*2), lgyy_s1_y) + (lyy.stencil(((lgyy_s1_x_x*2) + -2), (lgyy_s1_y + 1)) + (lyy.stencil((lgyy_s1_x_x*2), (lgyy_s1_y + 1)) + lyy.stencil(((lgyy_s1_x_x*2) + -1), (lgyy_s1_y + 1)))))))))))
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

  int16_t _797 = _lyy_stencil_8 + _lyy_stencil_9;
  int16_t _798 = _lyy_stencil_7 + _797;
  int16_t _799 = _lyy_stencil_6 + _798;
  int16_t _800 = _lyy_stencil_5 + _799;
  int16_t _801 = _lyy_stencil_4 + _800;
  int16_t _802 = _lyy_stencil_3 + _801;
  int16_t _803 = _lyy_stencil_2 + _802;
  int16_t _804 = _lgyy_stencil_1 + _803;
  int16_t _805 = _lyy_stencil_1 + _804;
  return _805;
}

//store is: lgyy.stencil((lgyy_s1_x_x*2), lgyy_s1_y) = (lyy.stencil(((lgyy_s1_x_x*2) + -1), (lgyy_s1_y + -1)) + (lgyy.stencil((lgyy_s1_x_x*2), lgyy_s1_y) + (lyy.stencil((lgyy_s1_x_x*2), (lgyy_s1_y + -1)) + (lyy.stencil(((lgyy_s1_x_x*2) + 1), (lgyy_s1_y + -1)) + (lyy.stencil(((lgyy_s1_x_x*2) + -1), lgyy_s1_y) + (lyy.stencil((lgyy_s1_x_x*2), lgyy_s1_y) + (lyy.stencil(((lgyy_s1_x_x*2) + 1), lgyy_s1_y) + (lyy.stencil(((lgyy_s1_x_x*2) + -1), (lgyy_s1_y + 1)) + (lyy.stencil(((lgyy_s1_x_x*2) + 1), (lgyy_s1_y + 1)) + lyy.stencil((lgyy_s1_x_x*2), (lgyy_s1_y + 1)))))))))))
hw_uint<16> hcompute_lgyy_stencil_3(hw_uint<16>& lgyy_stencil, hw_uint<144>& lyy_stencil) {
  int16_t _lgyy_stencil_2 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _lyy_stencil_10 = (int16_t) lyy_stencil.extract<0, 15>();
  int16_t _lyy_stencil_11 = (int16_t) lyy_stencil.extract<16, 31>();
  int16_t _lyy_stencil_12 = (int16_t) lyy_stencil.extract<32, 47>();
  int16_t _lyy_stencil_13 = (int16_t) lyy_stencil.extract<48, 63>();
  int16_t _lyy_stencil_14 = (int16_t) lyy_stencil.extract<64, 79>();
  int16_t _lyy_stencil_15 = (int16_t) lyy_stencil.extract<80, 95>();
  int16_t _lyy_stencil_16 = (int16_t) lyy_stencil.extract<96, 111>();
  int16_t _lyy_stencil_17 = (int16_t) lyy_stencil.extract<112, 127>();
  int16_t _lyy_stencil_18 = (int16_t) lyy_stencil.extract<128, 143>();

  int16_t _839 = _lyy_stencil_17 + _lyy_stencil_18;
  int16_t _840 = _lyy_stencil_16 + _839;
  int16_t _841 = _lyy_stencil_15 + _840;
  int16_t _842 = _lyy_stencil_14 + _841;
  int16_t _843 = _lyy_stencil_13 + _842;
  int16_t _844 = _lyy_stencil_12 + _843;
  int16_t _845 = _lyy_stencil_11 + _844;
  int16_t _846 = _lgyy_stencil_2 + _845;
  int16_t _847 = _lyy_stencil_10 + _846;
  return _847;
}

//store is: cim.stencil(((cim_s0_x_x*2) + -1), cim_s0_y) = ((((lgxx.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64)*(lgyy.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64)) - ((lgxy.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64)*(lgxy.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64))) - ((((lgxx.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64) + (lgyy.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64))*((lgxx.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64) + (lgyy.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64)))/(int16)16))
hw_uint<16> hcompute_cim_stencil(hw_uint<16>& lgxx_stencil, hw_uint<16>& lgxy_stencil, hw_uint<16>& lgyy_stencil) {
  int16_t _lgxx_stencil_3 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lgxy_stencil_3 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lgyy_stencil_3 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _881 = (int16_t)(6);
  int16_t _882 = _lgxx_stencil_3 >> _881;
  int16_t _883 = _lgyy_stencil_3 >> _881;
  int16_t _884 = _882 * _883;
  int16_t _885 = _lgxy_stencil_3 >> _881;
  int16_t _886 = _885 * _885;
  int16_t _887 = _884 - _886;
  int16_t _888 = _882 + _883;
  int16_t _889 = _888 * _888;
  int16_t _890 = (int16_t)(4);
  int16_t _891 = _889 >> _890;
  int16_t _892 = _887 - _891;
  return _892;
}

//store is: cim.stencil((cim_s0_x_x*2), cim_s0_y) = ((((lgxx.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64)*(lgyy.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64)) - ((lgxy.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64)*(lgxy.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64))) - ((((lgxx.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64) + (lgyy.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64))*((lgxx.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64) + (lgyy.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64)))/(int16)16))
hw_uint<16> hcompute_cim_stencil_1(hw_uint<16>& lgxx_stencil, hw_uint<16>& lgxy_stencil, hw_uint<16>& lgyy_stencil) {
  int16_t _lgxx_stencil_4 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lgxy_stencil_4 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lgyy_stencil_4 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _922 = (int16_t)(6);
  int16_t _923 = _lgxx_stencil_4 >> _922;
  int16_t _924 = _lgyy_stencil_4 >> _922;
  int16_t _925 = _923 * _924;
  int16_t _926 = _lgxy_stencil_4 >> _922;
  int16_t _927 = _926 * _926;
  int16_t _928 = _925 - _927;
  int16_t _929 = _923 + _924;
  int16_t _930 = _929 * _929;
  int16_t _931 = (int16_t)(4);
  int16_t _932 = _930 >> _931;
  int16_t _933 = _928 - _932;
  return _933;
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

  bool _962 = _cim_stencil_1 < _cim_stencil_2;
  bool _963 = _cim_stencil_3 < _cim_stencil_2;
  bool _964 = _962 && _963;
  bool _965 = _cim_stencil_4 < _cim_stencil_2;
  bool _966 = _964 && _965;
  bool _967 = _cim_stencil_5 < _cim_stencil_2;
  bool _968 = _966 && _967;
  bool _969 = _cim_stencil_6 < _cim_stencil_2;
  bool _970 = _968 && _969;
  bool _971 = _cim_stencil_7 < _cim_stencil_2;
  bool _972 = _970 && _971;
  bool _973 = _cim_stencil_8 < _cim_stencil_2;
  bool _974 = _972 && _973;
  bool _975 = _cim_stencil_9 < _cim_stencil_2;
  bool _976 = _974 && _975;
  int16_t _977 = (int16_t)(1);
  bool _978 = _977 <= _cim_stencil_2;
  bool _979 = _976 && _978;
  int32_t _980 = (int32_t)(_979 ? 255 : 0);
  int16_t _981 = (int16_t)(_980);
  return _981;
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

  bool _1036 = _cim_stencil_10 < _cim_stencil_11;
  bool _1037 = _cim_stencil_12 < _cim_stencil_11;
  bool _1038 = _1036 && _1037;
  bool _1039 = _cim_stencil_13 < _cim_stencil_11;
  bool _1040 = _1038 && _1039;
  bool _1041 = _cim_stencil_14 < _cim_stencil_11;
  bool _1042 = _1040 && _1041;
  bool _1043 = _cim_stencil_15 < _cim_stencil_11;
  bool _1044 = _1042 && _1043;
  bool _1045 = _cim_stencil_16 < _cim_stencil_11;
  bool _1046 = _1044 && _1045;
  bool _1047 = _cim_stencil_17 < _cim_stencil_11;
  bool _1048 = _1046 && _1047;
  bool _1049 = _cim_stencil_18 < _cim_stencil_11;
  bool _1050 = _1048 && _1049;
  int16_t _1051 = (int16_t)(1);
  bool _1052 = _1051 <= _cim_stencil_11;
  bool _1053 = _1050 && _1052;
  int32_t _1054 = (int32_t)(_1053 ? 255 : 0);
  int16_t _1055 = (int16_t)(_1054);
  return _1055;
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

