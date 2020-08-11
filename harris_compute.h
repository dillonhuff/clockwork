#pragma once
#include "hw_classes.h"
#include "conv_3x3.h"


//store is: padded16_global_wrapper.stencil(padded16_global_wrapper_s0_x, padded16_global_wrapper_s0_y) = padded16.stencil(padded16_global_wrapper_s0_x, padded16_global_wrapper_s0_y)
hw_uint<16> hcompute_padded16_global_wrapper_stencil(hw_uint<16>& padded16_stencil) {
  int16_t _padded16_stencil_1 = (int16_t) padded16_stencil.extract<0, 15>();

  return _padded16_stencil_1;
}

//store is: grad_x.stencil(grad_x_s0_x, grad_x_s0_y) = max(min(((((padded16_global_wrapper.stencil((grad_x_s0_x + 1), (grad_x_s0_y + -1)) + (padded16_global_wrapper.stencil((grad_x_s0_x + 1), (grad_x_s0_y + 1)) + (padded16_global_wrapper.stencil((grad_x_s0_x + 1), grad_x_s0_y)*(int16)2))) - padded16_global_wrapper.stencil((grad_x_s0_x + -1), (grad_x_s0_y + -1))) - (padded16_global_wrapper.stencil((grad_x_s0_x + -1), grad_x_s0_y)*(int16)2)) - padded16_global_wrapper.stencil((grad_x_s0_x + -1), (grad_x_s0_y + 1))), (int16)255), (int16)-255)
hw_uint<16> hcompute_grad_x_stencil(hw_uint<96>& padded16_global_wrapper_stencil) {
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
  int16_t _265 = _264 - _padded16_global_wrapper_stencil_4;
  int16_t _266 = _padded16_global_wrapper_stencil_5 * _261;
  int16_t _267 = _265 - _266;
  int16_t _268 = _267 - _padded16_global_wrapper_stencil_6;
  int16_t _269 = (int16_t)(255);
  int16_t _270 = min(_268, _269);
  int16_t _271 = (int16_t)(-255);
  int16_t _272 = max(_270, _271);
  return _272;
}

//store is: lxx.stencil(lxx_s0_x, lxx_s0_y) = ((grad_x.stencil(lxx_s0_x, lxx_s0_y)*grad_x.stencil(lxx_s0_x, lxx_s0_y))/(int16)128)
hw_uint<16> hcompute_lxx_stencil(hw_uint<16>& grad_x_stencil) {
  int16_t _grad_x_stencil_1 = (int16_t) grad_x_stencil.extract<0, 15>();

  int16_t _307 = _grad_x_stencil_1 * _grad_x_stencil_1;
  int16_t _308 = (int16_t)(7);
  int16_t _309 = _307 >> _308;
  return _309;
}

//store is: lgxx.stencil(lgxx_s0_x, lgxx_s0_y) = (int16)0
hw_uint<16> hcompute_lgxx_stencil() {
  int16_t _317 = (int16_t)(0);
  return _317;
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

  int16_t _320 = _lxx_stencil_8 + _lxx_stencil_9;
  int16_t _321 = _lxx_stencil_7 + _320;
  int16_t _322 = _lxx_stencil_6 + _321;
  int16_t _323 = _lxx_stencil_5 + _322;
  int16_t _324 = _lxx_stencil_4 + _323;
  int16_t _325 = _lxx_stencil_3 + _324;
  int16_t _326 = _lxx_stencil_2 + _325;
  int16_t _327 = _lgxx_stencil_1 + _326;
  int16_t _328 = _lxx_stencil_1 + _327;
  return _328;
}

//store is: grad_y.stencil(grad_y_s0_x, grad_y_s0_y) = max(min(((((padded16_global_wrapper.stencil((grad_y_s0_x + -1), (grad_y_s0_y + 1)) + (padded16_global_wrapper.stencil((grad_y_s0_x + 1), (grad_y_s0_y + 1)) + (padded16_global_wrapper.stencil(grad_y_s0_x, (grad_y_s0_y + 1))*(int16)2))) - padded16_global_wrapper.stencil((grad_y_s0_x + -1), (grad_y_s0_y + -1))) - (padded16_global_wrapper.stencil(grad_y_s0_x, (grad_y_s0_y + -1))*(int16)2)) - padded16_global_wrapper.stencil((grad_y_s0_x + 1), (grad_y_s0_y + -1))), (int16)255), (int16)-255)
hw_uint<16> hcompute_grad_y_stencil(hw_uint<96>& padded16_global_wrapper_stencil) {
  int16_t _padded16_global_wrapper_stencil_10 = (int16_t) padded16_global_wrapper_stencil.extract<0, 15>();
  int16_t _padded16_global_wrapper_stencil_11 = (int16_t) padded16_global_wrapper_stencil.extract<16, 31>();
  int16_t _padded16_global_wrapper_stencil_12 = (int16_t) padded16_global_wrapper_stencil.extract<32, 47>();
  int16_t _padded16_global_wrapper_stencil_7 = (int16_t) padded16_global_wrapper_stencil.extract<48, 63>();
  int16_t _padded16_global_wrapper_stencil_8 = (int16_t) padded16_global_wrapper_stencil.extract<64, 79>();
  int16_t _padded16_global_wrapper_stencil_9 = (int16_t) padded16_global_wrapper_stencil.extract<80, 95>();

  int16_t _361 = (int16_t)(2);
  int16_t _362 = _padded16_global_wrapper_stencil_9 * _361;
  int16_t _363 = _padded16_global_wrapper_stencil_8 + _362;
  int16_t _364 = _padded16_global_wrapper_stencil_7 + _363;
  int16_t _365 = _364 - _padded16_global_wrapper_stencil_10;
  int16_t _366 = _padded16_global_wrapper_stencil_11 * _361;
  int16_t _367 = _365 - _366;
  int16_t _368 = _367 - _padded16_global_wrapper_stencil_12;
  int16_t _369 = (int16_t)(255);
  int16_t _370 = min(_368, _369);
  int16_t _371 = (int16_t)(-255);
  int16_t _372 = max(_370, _371);
  return _372;
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

//store is: lgxy.stencil(lgxy_s0_x, lgxy_s0_y) = (int16)0
hw_uint<16> hcompute_lgxy_stencil() {
  int16_t _418 = (int16_t)(0);
  return _418;
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

  int16_t _421 = _lxy_stencil_8 + _lxy_stencil_9;
  int16_t _422 = _lxy_stencil_7 + _421;
  int16_t _423 = _lxy_stencil_6 + _422;
  int16_t _424 = _lxy_stencil_5 + _423;
  int16_t _425 = _lxy_stencil_4 + _424;
  int16_t _426 = _lxy_stencil_3 + _425;
  int16_t _427 = _lxy_stencil_2 + _426;
  int16_t _428 = _lgxy_stencil_1 + _427;
  int16_t _429 = _lxy_stencil_1 + _428;
  return _429;
}

//store is: lyy.stencil(lyy_s0_x, lyy_s0_y) = ((grad_y.stencil(lyy_s0_x, lyy_s0_y)*grad_y.stencil(lyy_s0_x, lyy_s0_y))/(int16)128)
hw_uint<16> hcompute_lyy_stencil(hw_uint<16>& grad_y_stencil) {
  int16_t _grad_y_stencil_2 = (int16_t) grad_y_stencil.extract<0, 15>();

  int16_t _462 = _grad_y_stencil_2 * _grad_y_stencil_2;
  int16_t _463 = (int16_t)(7);
  int16_t _464 = _462 >> _463;
  return _464;
}

//store is: lgyy.stencil(lgyy_s0_x, lgyy_s0_y) = (int16)0
hw_uint<16> hcompute_lgyy_stencil() {
  int16_t _472 = (int16_t)(0);
  return _472;
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

  int16_t _475 = _lyy_stencil_8 + _lyy_stencil_9;
  int16_t _476 = _lyy_stencil_7 + _475;
  int16_t _477 = _lyy_stencil_6 + _476;
  int16_t _478 = _lyy_stencil_5 + _477;
  int16_t _479 = _lyy_stencil_4 + _478;
  int16_t _480 = _lyy_stencil_3 + _479;
  int16_t _481 = _lyy_stencil_2 + _480;
  int16_t _482 = _lgyy_stencil_1 + _481;
  int16_t _483 = _lyy_stencil_1 + _482;
  return _483;
}

//store is: cim.stencil(cim_s0_x, cim_s0_y) = ((((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64)*(lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64)) - ((lgxy.stencil(cim_s0_x, cim_s0_y)/(int16)64)*(lgxy.stencil(cim_s0_x, cim_s0_y)/(int16)64))) - ((((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64) + (lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64))*((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64) + (lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64)))/(int16)16))
hw_uint<16> hcompute_cim_stencil(hw_uint<16>& lgxx_stencil, hw_uint<16>& lgxy_stencil, hw_uint<16>& lgyy_stencil) {
  int16_t _lgxx_stencil_2 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lgxy_stencil_2 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lgyy_stencil_2 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _516 = (int16_t)(6);
  int16_t _517 = _lgxx_stencil_2 >> _516;
  int16_t _518 = _lgyy_stencil_2 >> _516;
  int16_t _519 = _517 * _518;
  int16_t _520 = _lgxy_stencil_2 >> _516;
  int16_t _521 = _520 * _520;
  int16_t _522 = _519 - _521;
  int16_t _523 = _517 + _518;
  int16_t _524 = _523 * _523;
  int16_t _525 = (int16_t)(4);
  int16_t _526 = _524 >> _525;
  int16_t _527 = _522 - _526;
  return _527;
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

  bool _555 = _cim_stencil_1 < _cim_stencil_2;
  bool _556 = _cim_stencil_3 < _cim_stencil_2;
  bool _557 = _555 && _556;
  bool _558 = _cim_stencil_4 < _cim_stencil_2;
  bool _559 = _557 && _558;
  bool _560 = _cim_stencil_5 < _cim_stencil_2;
  bool _561 = _559 && _560;
  bool _562 = _cim_stencil_6 < _cim_stencil_2;
  bool _563 = _561 && _562;
  bool _564 = _cim_stencil_7 < _cim_stencil_2;
  bool _565 = _563 && _564;
  bool _566 = _cim_stencil_8 < _cim_stencil_2;
  bool _567 = _565 && _566;
  bool _568 = _cim_stencil_9 < _cim_stencil_2;
  bool _569 = _567 && _568;
  int16_t _570 = (int16_t)(1);
  bool _571 = _570 <= _cim_stencil_2;
  bool _572 = _569 && _571;
  int32_t _573 = (int32_t)(_572 ? 255 : 0);
  int16_t _574 = (int16_t)(_573);
  return _574;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = cim_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& cim_output_stencil) {
  int16_t _cim_output_stencil_1 = (int16_t) cim_output_stencil.extract<0, 15>();

  return _cim_output_stencil_1;
}

