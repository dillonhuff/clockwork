#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: padded16_global_wrapper.stencil((padded16_global_wrapper_s0_x + 3), (padded16_global_wrapper_s0_y + 3)) = padded16.stencil(padded16_global_wrapper_s0_x, padded16_global_wrapper_s0_y)
static hw_uint<16> hcompute_padded16_global_wrapper_stencil(hw_uint<16>& padded16_stencil) {
  int16_t _padded16_stencil_1 = (int16_t) (padded16_stencil.extract<0, 15>());

  return _padded16_stencil_1;
}

//store is: grad_x_unclamp.stencil((grad_x_unclamp_s0_x + 2), (grad_x_unclamp_s0_y + 2)) = (int16)0
static hw_uint<16> hcompute_grad_x_unclamp_stencil() {
  int16_t _263 = (int16_t)(0);
  return _263;
}

//store is: grad_x_unclamp.stencil((grad_x_unclamp_s1_x + 2), (grad_x_unclamp_s1_y + 2)) = ((((grad_x_unclamp.stencil((grad_x_unclamp_s1_x + 2), (grad_x_unclamp_s1_y + 2)) + (padded16_global_wrapper.stencil((grad_x_unclamp_s1_x + 4), (grad_x_unclamp_s1_y + 2)) + (padded16_global_wrapper.stencil((grad_x_unclamp_s1_x + 4), (grad_x_unclamp_s1_y + 4)) + (padded16_global_wrapper.stencil((grad_x_unclamp_s1_x + 4), (grad_x_unclamp_s1_y + 3))*(int16)2)))) - padded16_global_wrapper.stencil((grad_x_unclamp_s1_x + 2), (grad_x_unclamp_s1_y + 2))) - (padded16_global_wrapper.stencil((grad_x_unclamp_s1_x + 2), (grad_x_unclamp_s1_y + 3))*(int16)2)) - padded16_global_wrapper.stencil((grad_x_unclamp_s1_x + 2), (grad_x_unclamp_s1_y + 4)))
static hw_uint<16> hcompute_grad_x_unclamp_stencil_1(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<96>& padded16_global_wrapper_stencil) {
  int16_t _grad_x_unclamp_stencil_1 = (int16_t) (grad_x_unclamp_stencil.extract<0, 15>());

  int16_t _padded16_global_wrapper_stencil_1 = (int16_t) (padded16_global_wrapper_stencil.extract<0, 15>());
  int16_t _padded16_global_wrapper_stencil_2 = (int16_t) (padded16_global_wrapper_stencil.extract<16, 31>());
  int16_t _padded16_global_wrapper_stencil_3 = (int16_t) (padded16_global_wrapper_stencil.extract<32, 47>());
  int16_t _padded16_global_wrapper_stencil_4 = (int16_t) (padded16_global_wrapper_stencil.extract<48, 63>());
  int16_t _padded16_global_wrapper_stencil_5 = (int16_t) (padded16_global_wrapper_stencil.extract<64, 79>());
  int16_t _padded16_global_wrapper_stencil_6 = (int16_t) (padded16_global_wrapper_stencil.extract<80, 95>());

  int16_t _268 = (int16_t)(2);
  int16_t _269 = _padded16_global_wrapper_stencil_3 * _268;
  int16_t _270 = _padded16_global_wrapper_stencil_2 + _269;
  int16_t _271 = _padded16_global_wrapper_stencil_1 + _270;
  int16_t _272 = _grad_x_unclamp_stencil_1 + _271;
  int16_t _273 = _272 - _padded16_global_wrapper_stencil_4;
  int16_t _274 = _padded16_global_wrapper_stencil_5 * _268;
  int16_t _275 = _273 - _274;
  int16_t _276 = _275 - _padded16_global_wrapper_stencil_6;
  return _276;
}

//store is: lxx.stencil((lxx_s0_x + 2), (lxx_s0_y + 2)) = ((max(min(grad_x_unclamp.stencil((lxx_s0_x + 2), (lxx_s0_y + 2)), (int16)180), (int16)-180)*max(min(grad_x_unclamp.stencil((lxx_s0_x + 2), (lxx_s0_y + 2)), (int16)180), (int16)-180))/(int16)64)
static hw_uint<16> hcompute_lxx_stencil(hw_uint<16>& grad_x_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_2 = (int16_t) (grad_x_unclamp_stencil.extract<0, 15>());

  int16_t _307 = (int16_t)(180);
  int16_t _308 = min(_grad_x_unclamp_stencil_2, _307);
  int16_t _309 = (int16_t)(-180);
  int16_t _310 = max(_308, _309);
  int16_t _311 = _310 * _310;
  int16_t _312 = (int16_t)(6);
  int16_t _313 = _311 >> _312;
  return _313;
}

//store is: lgxx.stencil((lgxx_s0_x + 1), (lgxx_s0_y + 1)) = (int16)0
static hw_uint<16> hcompute_lgxx_stencil() {
  int16_t _331 = (int16_t)(0);
  return _331;
}

//store is: lgxx.stencil((lgxx_s1_x + 1), (lgxx_s1_y + 1)) = (lxx.stencil((lgxx_s1_x + 1), (lgxx_s1_y + 1)) + (lgxx.stencil((lgxx_s1_x + 1), (lgxx_s1_y + 1)) + (lxx.stencil((lgxx_s1_x + 2), (lgxx_s1_y + 1)) + (lxx.stencil((lgxx_s1_x + 3), (lgxx_s1_y + 1)) + (lxx.stencil((lgxx_s1_x + 1), (lgxx_s1_y + 2)) + (lxx.stencil((lgxx_s1_x + 2), (lgxx_s1_y + 2)) + (lxx.stencil((lgxx_s1_x + 3), (lgxx_s1_y + 2)) + (lxx.stencil((lgxx_s1_x + 1), (lgxx_s1_y + 3)) + (lxx.stencil((lgxx_s1_x + 3), (lgxx_s1_y + 3)) + lxx.stencil((lgxx_s1_x + 2), (lgxx_s1_y + 3)))))))))))
static hw_uint<16> hcompute_lgxx_stencil_1(hw_uint<16>& lgxx_stencil, hw_uint<144>& lxx_stencil) {
  int16_t _lgxx_stencil_1 = (int16_t) (lgxx_stencil.extract<0, 15>());

  int16_t _lxx_stencil_1 = (int16_t) (lxx_stencil.extract<0, 15>());
  int16_t _lxx_stencil_2 = (int16_t) (lxx_stencil.extract<16, 31>());
  int16_t _lxx_stencil_3 = (int16_t) (lxx_stencil.extract<32, 47>());
  int16_t _lxx_stencil_4 = (int16_t) (lxx_stencil.extract<48, 63>());
  int16_t _lxx_stencil_5 = (int16_t) (lxx_stencil.extract<64, 79>());
  int16_t _lxx_stencil_6 = (int16_t) (lxx_stencil.extract<80, 95>());
  int16_t _lxx_stencil_7 = (int16_t) (lxx_stencil.extract<96, 111>());
  int16_t _lxx_stencil_8 = (int16_t) (lxx_stencil.extract<112, 127>());
  int16_t _lxx_stencil_9 = (int16_t) (lxx_stencil.extract<128, 143>());

  int16_t _336 = _lxx_stencil_8 + _lxx_stencil_9;
  int16_t _337 = _lxx_stencil_7 + _336;
  int16_t _338 = _lxx_stencil_6 + _337;
  int16_t _339 = _lxx_stencil_5 + _338;
  int16_t _340 = _lxx_stencil_4 + _339;
  int16_t _341 = _lxx_stencil_3 + _340;
  int16_t _342 = _lxx_stencil_2 + _341;
  int16_t _343 = _lgxx_stencil_1 + _342;
  int16_t _344 = _lxx_stencil_1 + _343;
  return _344;
}

//store is: grad_y_unclamp.stencil((grad_y_unclamp_s0_x + 2), (grad_y_unclamp_s0_y + 2)) = (int16)0
static hw_uint<16> hcompute_grad_y_unclamp_stencil() {
  int16_t _379 = (int16_t)(0);
  return _379;
}

//store is: grad_y_unclamp.stencil((grad_y_unclamp_s1_x + 2), (grad_y_unclamp_s1_y + 2)) = ((((grad_y_unclamp.stencil((grad_y_unclamp_s1_x + 2), (grad_y_unclamp_s1_y + 2)) + (padded16_global_wrapper.stencil((grad_y_unclamp_s1_x + 2), (grad_y_unclamp_s1_y + 4)) + (padded16_global_wrapper.stencil((grad_y_unclamp_s1_x + 4), (grad_y_unclamp_s1_y + 4)) + (padded16_global_wrapper.stencil((grad_y_unclamp_s1_x + 3), (grad_y_unclamp_s1_y + 4))*(int16)2)))) - padded16_global_wrapper.stencil((grad_y_unclamp_s1_x + 2), (grad_y_unclamp_s1_y + 2))) - (padded16_global_wrapper.stencil((grad_y_unclamp_s1_x + 3), (grad_y_unclamp_s1_y + 2))*(int16)2)) - padded16_global_wrapper.stencil((grad_y_unclamp_s1_x + 4), (grad_y_unclamp_s1_y + 2)))
static hw_uint<16> hcompute_grad_y_unclamp_stencil_1(hw_uint<16>& grad_y_unclamp_stencil, hw_uint<96>& padded16_global_wrapper_stencil) {
  int16_t _grad_y_unclamp_stencil_1 = (int16_t) (grad_y_unclamp_stencil.extract<0, 15>());

  int16_t _padded16_global_wrapper_stencil_10 = (int16_t) (padded16_global_wrapper_stencil.extract<0, 15>());
  int16_t _padded16_global_wrapper_stencil_11 = (int16_t) (padded16_global_wrapper_stencil.extract<16, 31>());
  int16_t _padded16_global_wrapper_stencil_12 = (int16_t) (padded16_global_wrapper_stencil.extract<32, 47>());
  int16_t _padded16_global_wrapper_stencil_7 = (int16_t) (padded16_global_wrapper_stencil.extract<48, 63>());
  int16_t _padded16_global_wrapper_stencil_8 = (int16_t) (padded16_global_wrapper_stencil.extract<64, 79>());
  int16_t _padded16_global_wrapper_stencil_9 = (int16_t) (padded16_global_wrapper_stencil.extract<80, 95>());

  int16_t _384 = (int16_t)(2);
  int16_t _385 = _padded16_global_wrapper_stencil_9 * _384;
  int16_t _386 = _padded16_global_wrapper_stencil_8 + _385;
  int16_t _387 = _padded16_global_wrapper_stencil_7 + _386;
  int16_t _388 = _grad_y_unclamp_stencil_1 + _387;
  int16_t _389 = _388 - _padded16_global_wrapper_stencil_10;
  int16_t _390 = _padded16_global_wrapper_stencil_11 * _384;
  int16_t _391 = _389 - _390;
  int16_t _392 = _391 - _padded16_global_wrapper_stencil_12;
  return _392;
}

//store is: lxy.stencil((lxy_s0_x + 2), (lxy_s0_y + 2)) = ((max(min(grad_x_unclamp.stencil((lxy_s0_x + 2), (lxy_s0_y + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil((lxy_s0_x + 2), (lxy_s0_y + 2)), (int16)180), (int16)-180))/(int16)64)
static hw_uint<16> hcompute_lxy_stencil(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_3 = (int16_t) (grad_x_unclamp_stencil.extract<0, 15>());

  int16_t _grad_y_unclamp_stencil_2 = (int16_t) (grad_y_unclamp_stencil.extract<0, 15>());

  int16_t _423 = (int16_t)(180);
  int16_t _424 = min(_grad_x_unclamp_stencil_3, _423);
  int16_t _425 = (int16_t)(-180);
  int16_t _426 = max(_424, _425);
  int16_t _427 = min(_grad_y_unclamp_stencil_2, _423);
  int16_t _428 = max(_427, _425);
  int16_t _429 = _426 * _428;
  int16_t _430 = (int16_t)(6);
  int16_t _431 = _429 >> _430;
  return _431;
}

//store is: lgxy.stencil((lgxy_s0_x + 1), (lgxy_s0_y + 1)) = (int16)0
static hw_uint<16> hcompute_lgxy_stencil() {
  int16_t _454 = (int16_t)(0);
  return _454;
}

//store is: lgxy.stencil((lgxy_s1_x + 1), (lgxy_s1_y + 1)) = (lxy.stencil((lgxy_s1_x + 1), (lgxy_s1_y + 1)) + (lgxy.stencil((lgxy_s1_x + 1), (lgxy_s1_y + 1)) + (lxy.stencil((lgxy_s1_x + 2), (lgxy_s1_y + 1)) + (lxy.stencil((lgxy_s1_x + 3), (lgxy_s1_y + 1)) + (lxy.stencil((lgxy_s1_x + 1), (lgxy_s1_y + 2)) + (lxy.stencil((lgxy_s1_x + 2), (lgxy_s1_y + 2)) + (lxy.stencil((lgxy_s1_x + 3), (lgxy_s1_y + 2)) + (lxy.stencil((lgxy_s1_x + 1), (lgxy_s1_y + 3)) + (lxy.stencil((lgxy_s1_x + 3), (lgxy_s1_y + 3)) + lxy.stencil((lgxy_s1_x + 2), (lgxy_s1_y + 3)))))))))))
static hw_uint<16> hcompute_lgxy_stencil_1(hw_uint<16>& lgxy_stencil, hw_uint<144>& lxy_stencil) {
  int16_t _lgxy_stencil_1 = (int16_t) (lgxy_stencil.extract<0, 15>());

  int16_t _lxy_stencil_1 = (int16_t) (lxy_stencil.extract<0, 15>());
  int16_t _lxy_stencil_2 = (int16_t) (lxy_stencil.extract<16, 31>());
  int16_t _lxy_stencil_3 = (int16_t) (lxy_stencil.extract<32, 47>());
  int16_t _lxy_stencil_4 = (int16_t) (lxy_stencil.extract<48, 63>());
  int16_t _lxy_stencil_5 = (int16_t) (lxy_stencil.extract<64, 79>());
  int16_t _lxy_stencil_6 = (int16_t) (lxy_stencil.extract<80, 95>());
  int16_t _lxy_stencil_7 = (int16_t) (lxy_stencil.extract<96, 111>());
  int16_t _lxy_stencil_8 = (int16_t) (lxy_stencil.extract<112, 127>());
  int16_t _lxy_stencil_9 = (int16_t) (lxy_stencil.extract<128, 143>());

  int16_t _459 = _lxy_stencil_8 + _lxy_stencil_9;
  int16_t _460 = _lxy_stencil_7 + _459;
  int16_t _461 = _lxy_stencil_6 + _460;
  int16_t _462 = _lxy_stencil_5 + _461;
  int16_t _463 = _lxy_stencil_4 + _462;
  int16_t _464 = _lxy_stencil_3 + _463;
  int16_t _465 = _lxy_stencil_2 + _464;
  int16_t _466 = _lgxy_stencil_1 + _465;
  int16_t _467 = _lxy_stencil_1 + _466;
  return _467;
}

//store is: lyy.stencil((lyy_s0_x + 2), (lyy_s0_y + 2)) = ((max(min(grad_y_unclamp.stencil((lyy_s0_x + 2), (lyy_s0_y + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil((lyy_s0_x + 2), (lyy_s0_y + 2)), (int16)180), (int16)-180))/(int16)64)
static hw_uint<16> hcompute_lyy_stencil(hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_y_unclamp_stencil_3 = (int16_t) (grad_y_unclamp_stencil.extract<0, 15>());

  int16_t _502 = (int16_t)(180);
  int16_t _503 = min(_grad_y_unclamp_stencil_3, _502);
  int16_t _504 = (int16_t)(-180);
  int16_t _505 = max(_503, _504);
  int16_t _506 = _505 * _505;
  int16_t _507 = (int16_t)(6);
  int16_t _508 = _506 >> _507;
  return _508;
}

//store is: lgyy.stencil((lgyy_s0_x + 1), (lgyy_s0_y + 1)) = (int16)0
static hw_uint<16> hcompute_lgyy_stencil() {
  int16_t _526 = (int16_t)(0);
  return _526;
}

//store is: lgyy.stencil((lgyy_s1_x + 1), (lgyy_s1_y + 1)) = (lyy.stencil((lgyy_s1_x + 1), (lgyy_s1_y + 1)) + (lgyy.stencil((lgyy_s1_x + 1), (lgyy_s1_y + 1)) + (lyy.stencil((lgyy_s1_x + 2), (lgyy_s1_y + 1)) + (lyy.stencil((lgyy_s1_x + 3), (lgyy_s1_y + 1)) + (lyy.stencil((lgyy_s1_x + 1), (lgyy_s1_y + 2)) + (lyy.stencil((lgyy_s1_x + 2), (lgyy_s1_y + 2)) + (lyy.stencil((lgyy_s1_x + 3), (lgyy_s1_y + 2)) + (lyy.stencil((lgyy_s1_x + 1), (lgyy_s1_y + 3)) + (lyy.stencil((lgyy_s1_x + 3), (lgyy_s1_y + 3)) + lyy.stencil((lgyy_s1_x + 2), (lgyy_s1_y + 3)))))))))))
static hw_uint<16> hcompute_lgyy_stencil_1(hw_uint<16>& lgyy_stencil, hw_uint<144>& lyy_stencil) {
  int16_t _lgyy_stencil_1 = (int16_t) (lgyy_stencil.extract<0, 15>());

  int16_t _lyy_stencil_1 = (int16_t) (lyy_stencil.extract<0, 15>());
  int16_t _lyy_stencil_2 = (int16_t) (lyy_stencil.extract<16, 31>());
  int16_t _lyy_stencil_3 = (int16_t) (lyy_stencil.extract<32, 47>());
  int16_t _lyy_stencil_4 = (int16_t) (lyy_stencil.extract<48, 63>());
  int16_t _lyy_stencil_5 = (int16_t) (lyy_stencil.extract<64, 79>());
  int16_t _lyy_stencil_6 = (int16_t) (lyy_stencil.extract<80, 95>());
  int16_t _lyy_stencil_7 = (int16_t) (lyy_stencil.extract<96, 111>());
  int16_t _lyy_stencil_8 = (int16_t) (lyy_stencil.extract<112, 127>());
  int16_t _lyy_stencil_9 = (int16_t) (lyy_stencil.extract<128, 143>());

  int16_t _531 = _lyy_stencil_8 + _lyy_stencil_9;
  int16_t _532 = _lyy_stencil_7 + _531;
  int16_t _533 = _lyy_stencil_6 + _532;
  int16_t _534 = _lyy_stencil_5 + _533;
  int16_t _535 = _lyy_stencil_4 + _534;
  int16_t _536 = _lyy_stencil_3 + _535;
  int16_t _537 = _lyy_stencil_2 + _536;
  int16_t _538 = _lgyy_stencil_1 + _537;
  int16_t _539 = _lyy_stencil_1 + _538;
  return _539;
}

//store is: cim.stencil((cim_s0_x + 1), (cim_s0_y + 1)) = ((((lgxx.stencil((cim_s0_x + 1), (cim_s0_y + 1))/(int16)64)*(lgyy.stencil((cim_s0_x + 1), (cim_s0_y + 1))/(int16)64)) - ((lgxy.stencil((cim_s0_x + 1), (cim_s0_y + 1))/(int16)64)*(lgxy.stencil((cim_s0_x + 1), (cim_s0_y + 1))/(int16)64))) - ((((lgxx.stencil((cim_s0_x + 1), (cim_s0_y + 1))/(int16)64) + (lgyy.stencil((cim_s0_x + 1), (cim_s0_y + 1))/(int16)64))*((lgxx.stencil((cim_s0_x + 1), (cim_s0_y + 1))/(int16)64) + (lgyy.stencil((cim_s0_x + 1), (cim_s0_y + 1))/(int16)64)))/(int16)16))
static hw_uint<16> hcompute_cim_stencil(hw_uint<16>& lgxx_stencil, hw_uint<16>& lgxy_stencil, hw_uint<16>& lgyy_stencil) {
  int16_t _lgxx_stencil_2 = (int16_t) (lgxx_stencil.extract<0, 15>());

  int16_t _lgxy_stencil_2 = (int16_t) (lgxy_stencil.extract<0, 15>());

  int16_t _lgyy_stencil_2 = (int16_t) (lgyy_stencil.extract<0, 15>());

  int16_t _574 = (int16_t)(6);
  int16_t _575 = _lgxx_stencil_2 >> _574;
  int16_t _576 = _lgyy_stencil_2 >> _574;
  int16_t _577 = _575 * _576;
  int16_t _578 = _lgxy_stencil_2 >> _574;
  int16_t _579 = _578 * _578;
  int16_t _580 = _577 - _579;
  int16_t _581 = _575 + _576;
  int16_t _582 = _581 * _581;
  int16_t _583 = (int16_t)(4);
  int16_t _584 = _582 >> _583;
  int16_t _585 = _580 - _584;
  return _585;
}

//store is: cim_output.stencil(cim_output_s0_x, cim_output_s0_y) = int16(select((((((((((cim.stencil(cim_output_s0_x, cim_output_s0_y) < cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + 1))) && (cim.stencil((cim_output_s0_x + 1), cim_output_s0_y) < cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + 1)))) && (cim.stencil((cim_output_s0_x + 2), cim_output_s0_y) < cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + 1)))) && (cim.stencil(cim_output_s0_x, (cim_output_s0_y + 1)) < cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + 1)))) && (cim.stencil((cim_output_s0_x + 2), (cim_output_s0_y + 1)) < cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + 1)))) && (cim.stencil(cim_output_s0_x, (cim_output_s0_y + 2)) < cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + 1)))) && (cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + 2)) < cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + 1)))) && (cim.stencil((cim_output_s0_x + 2), (cim_output_s0_y + 2)) < cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + 1)))) && ((int16)1 <= cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + 1)))), 255, 0))
static hw_uint<16> hcompute_cim_output_stencil(hw_uint<144>& cim_stencil) {
  int16_t _cim_stencil_1 = (int16_t) (cim_stencil.extract<0, 15>());
  int16_t _cim_stencil_2 = (int16_t) (cim_stencil.extract<16, 31>());
  int16_t _cim_stencil_3 = (int16_t) (cim_stencil.extract<32, 47>());
  int16_t _cim_stencil_4 = (int16_t) (cim_stencil.extract<48, 63>());
  int16_t _cim_stencil_5 = (int16_t) (cim_stencil.extract<64, 79>());
  int16_t _cim_stencil_6 = (int16_t) (cim_stencil.extract<80, 95>());
  int16_t _cim_stencil_7 = (int16_t) (cim_stencil.extract<96, 111>());
  int16_t _cim_stencil_8 = (int16_t) (cim_stencil.extract<112, 127>());
  int16_t _cim_stencil_9 = (int16_t) (cim_stencil.extract<128, 143>());

  bool _615 = _cim_stencil_1 < _cim_stencil_2;
  bool _616 = _cim_stencil_3 < _cim_stencil_2;
  bool _617 = _615 && _616;
  bool _618 = _cim_stencil_4 < _cim_stencil_2;
  bool _619 = _617 && _618;
  bool _620 = _cim_stencil_5 < _cim_stencil_2;
  bool _621 = _619 && _620;
  bool _622 = _cim_stencil_6 < _cim_stencil_2;
  bool _623 = _621 && _622;
  bool _624 = _cim_stencil_7 < _cim_stencil_2;
  bool _625 = _623 && _624;
  bool _626 = _cim_stencil_8 < _cim_stencil_2;
  bool _627 = _625 && _626;
  bool _628 = _cim_stencil_9 < _cim_stencil_2;
  bool _629 = _627 && _628;
  int16_t _630 = (int16_t)(1);
  bool _631 = _630 <= _cim_stencil_2;
  bool _632 = _629 && _631;
  int32_t _633 = (int32_t)(_632 ? 255 : 0);
  int16_t _634 = (int16_t)(_633);
  return _634;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = cim_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
static hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& cim_output_stencil) {
  int16_t _cim_output_stencil_1 = (int16_t) (cim_output_stencil.extract<0, 15>());

  return _cim_output_stencil_1;
}

