#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_twi_global_wrapper.stencil(hw_twi_global_wrapper_s0_x, hw_twi_global_wrapper_s0_y, hw_twi_global_wrapper_s0_z) = hw_twi.stencil(hw_twi_global_wrapper_s0_x, hw_twi_global_wrapper_s0_y, hw_twi_global_wrapper_s0_z)
hw_uint<32> hcompute_hw_twi_global_wrapper_stencil(hw_uint<32>& hw_twi_stencil) {
  float _hw_twi_stencil_1 = (float) hw_twi_stencil.extract<0, 31>();

  return _hw_twi_stencil_1;
}

//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<32> hcompute_hw_input_global_wrapper_stencil(hw_uint<32>& hw_input_stencil) {
  float _hw_input_stencil_1 = (float) hw_input_stencil.extract<0, 31>();

  return _hw_input_stencil_1;
}

//store is: f4.0.stencil(hw_output_s0_x_xi) = 0.000000f
hw_uint<32> hcompute_f4_0_stencil() {
  float _341 = float_from_bits(0 /* 0 */);
  return _341;
}

//store is: f4.1.stencil(hw_output_s0_x_xi) = 0.000000f
hw_uint<32> hcompute_f4_1_stencil() {
  float _344 = float_from_bits(0 /* 0 */);
  return _344;
}

//store is: f3.0.stencil(f3_s0_x) = 0.000000f
hw_uint<32> hcompute_f3_0_stencil() {
  float _347 = float_from_bits(0 /* 0 */);
  return _347;
}

//store is: f3.1.stencil(f3_s0_x) = 0.000000f
hw_uint<32> hcompute_f3_1_stencil() {
  float _350 = float_from_bits(0 /* 0 */);
  return _350;
}

//store is: f2.0.stencil(f2_s0_x) = 0.000000f
hw_uint<32> hcompute_f2_0_stencil() {
  float _353 = float_from_bits(0 /* 0 */);
  return _353;
}

//store is: f2.1.stencil(f2_s0_x) = 0.000000f
hw_uint<32> hcompute_f2_1_stencil() {
  float _356 = float_from_bits(0 /* 0 */);
  return _356;
}

//store is: f1.0.stencil(f1_s0_x) = hw_input_global_wrapper.stencil(f1_s0_x, 0)
hw_uint<32> hcompute_f1_0_stencil(hw_uint<32>& hw_input_global_wrapper_stencil) {
  float _hw_input_global_wrapper_stencil_1 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();

  return _hw_input_global_wrapper_stencil_1;
}

//store is: f1.1.stencil(f1_s0_x) = hw_input_global_wrapper.stencil(f1_s0_x, 1)
hw_uint<32> hcompute_f1_1_stencil(hw_uint<32>& hw_input_global_wrapper_stencil) {
  float _hw_input_global_wrapper_stencil_2 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();

  return _hw_input_global_wrapper_stencil_2;
}

//store is: f1.0.stencil(f1_s1_t_x) = ((f1.0.stencil(f1_s1_t_x)*hw_twi_global_wrapper.stencil(f1_s1_t_x, 0, 0)) - (f1.1.stencil(f1_s1_t_x)*hw_twi_global_wrapper.stencil(f1_s1_t_x, 1, 0)))
hw_uint<32> hcompute_f1_0_stencil_1(hw_uint<32>& f1_0_stencil, hw_uint<32>& f1_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f1_0_stencil_1 = (float) f1_0_stencil.extract<0, 31>();

  float _f1_1_stencil_1 = (float) f1_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_1 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_2 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _361 = _f1_0_stencil_1 * _hw_twi_global_wrapper_stencil_1;
  float _362 = _f1_1_stencil_1 * _hw_twi_global_wrapper_stencil_2;
  float _363 = _361 - _362;
  return _363;
}

//store is: f1.1.stencil(f1_s1_t_x) = ((f1.0.stencil(f1_s1_t_x)*hw_twi_global_wrapper.stencil(f1_s1_t_x, 1, 0)) + (f1.1.stencil(f1_s1_t_x)*hw_twi_global_wrapper.stencil(f1_s1_t_x, 0, 0)))
hw_uint<32> hcompute_f1_1_stencil_1(hw_uint<32>& f1_0_stencil, hw_uint<32>& f1_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f1_0_stencil_2 = (float) f1_0_stencil.extract<0, 31>();

  float _f1_1_stencil_2 = (float) f1_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_3 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_4 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _374 = _f1_0_stencil_2 * _hw_twi_global_wrapper_stencil_3;
  float _375 = _f1_1_stencil_2 * _hw_twi_global_wrapper_stencil_4;
  float _376 = _374 + _375;
  return _376;
}

//store is: f2.0.stencil(f2_s1_t_x) = (f1.0.stencil((((f2_s1_t_x/2)*2) + ((f2_s1_t_x + 1) % 2))) + (f1.0.stencil(f2_s1_t_x)*float32((1 - ((f2_s1_t_x/(((f2_s1_t_x/2)*2) + 1))*2)))))
hw_uint<32> hcompute_f2_0_stencil_1(hw_uint<64>& f1_0_stencil, const int _f2_s1_t_x) {
  float _f1_0_stencil_3 = (float) f1_0_stencil.extract<0, 31>();
  float _f1_0_stencil_4 = (float) f1_0_stencil.extract<32, 63>();

  int32_t _387 = _f2_s1_t_x >> 1;
  int32_t _388 = _387 * 2;
  int32_t _389 = _388 + 1;
  int32_t _390 = _f2_s1_t_x / _389;
  int32_t _391 = _390 * _389;
  int32_t _392 = _f2_s1_t_x - _391;
  int32_t _393 = _392 >> 31;
  int32_t _394 = _389 >> 31;
  int32_t _395 = _393 & _394;
  int32_t _396 = _390 - _395;
  int32_t _397 = ~_394;
  int32_t _398 = _393 & _397;
  int32_t _399 = _396 + _398;
  int32_t _400 = _399 * 2;
  int32_t _401 = 1 - _400;
  float _402 = (float)(_401);
  float _403 = _f1_0_stencil_4 * _402;
  float _404 = _f1_0_stencil_3 + _403;
  return _404;
}

//store is: f2.1.stencil(f2_s1_t_x) = (f1.1.stencil((((f2_s1_t_x/2)*2) + ((f2_s1_t_x + 1) % 2))) + (f1.1.stencil(f2_s1_t_x)*float32((1 - ((f2_s1_t_x/(((f2_s1_t_x/2)*2) + 1))*2)))))
hw_uint<32> hcompute_f2_1_stencil_1(hw_uint<64>& f1_1_stencil, const int _f2_s1_t_x) {
  float _f1_1_stencil_3 = (float) f1_1_stencil.extract<0, 31>();
  float _f1_1_stencil_4 = (float) f1_1_stencil.extract<32, 63>();

  int32_t _438 = _f2_s1_t_x >> 1;
  int32_t _439 = _438 * 2;
  int32_t _440 = _439 + 1;
  int32_t _441 = _f2_s1_t_x / _440;
  int32_t _442 = _441 * _440;
  int32_t _443 = _f2_s1_t_x - _442;
  int32_t _444 = _443 >> 31;
  int32_t _445 = _440 >> 31;
  int32_t _446 = _444 & _445;
  int32_t _447 = _441 - _446;
  int32_t _448 = ~_445;
  int32_t _449 = _444 & _448;
  int32_t _450 = _447 + _449;
  int32_t _451 = _450 * 2;
  int32_t _452 = 1 - _451;
  float _453 = (float)(_452);
  float _454 = _f1_1_stencil_4 * _453;
  float _455 = _f1_1_stencil_3 + _454;
  return _455;
}

//store is: f2.0.stencil(f2_s2_t_x) = ((f2.0.stencil(f2_s2_t_x)*hw_twi_global_wrapper.stencil(f2_s2_t_x, 0, 1)) - (f2.1.stencil(f2_s2_t_x)*hw_twi_global_wrapper.stencil(f2_s2_t_x, 1, 1)))
hw_uint<32> hcompute_f2_0_stencil_2(hw_uint<32>& f2_0_stencil, hw_uint<32>& f2_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f2_0_stencil_1 = (float) f2_0_stencil.extract<0, 31>();

  float _f2_1_stencil_1 = (float) f2_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_5 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_6 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _489 = _f2_0_stencil_1 * _hw_twi_global_wrapper_stencil_5;
  float _490 = _f2_1_stencil_1 * _hw_twi_global_wrapper_stencil_6;
  float _491 = _489 - _490;
  return _491;
}

//store is: f2.1.stencil(f2_s2_t_x) = ((f2.0.stencil(f2_s2_t_x)*hw_twi_global_wrapper.stencil(f2_s2_t_x, 1, 1)) + (f2.1.stencil(f2_s2_t_x)*hw_twi_global_wrapper.stencil(f2_s2_t_x, 0, 1)))
hw_uint<32> hcompute_f2_1_stencil_2(hw_uint<32>& f2_0_stencil, hw_uint<32>& f2_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f2_0_stencil_2 = (float) f2_0_stencil.extract<0, 31>();

  float _f2_1_stencil_2 = (float) f2_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_7 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_8 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _502 = _f2_0_stencil_2 * _hw_twi_global_wrapper_stencil_7;
  float _503 = _f2_1_stencil_2 * _hw_twi_global_wrapper_stencil_8;
  float _504 = _502 + _503;
  return _504;
}

//store is: f3.0.stencil(f3_s1_t_x) = (f2.0.stencil((((f3_s1_t_x/4)*4) + ((f3_s1_t_x + 2) % 4))) + (f2.0.stencil(f3_s1_t_x)*float32((1 - ((f3_s1_t_x/(((f3_s1_t_x/4)*4) + 2))*2)))))
hw_uint<32> hcompute_f3_0_stencil_1(hw_uint<64>& f2_0_stencil, const int _f3_s1_t_x) {
  float _f2_0_stencil_3 = (float) f2_0_stencil.extract<0, 31>();
  float _f2_0_stencil_4 = (float) f2_0_stencil.extract<32, 63>();

  int32_t _515 = _f3_s1_t_x >> 2;
  int32_t _516 = _515 * 4;
  int32_t _517 = _516 + 2;
  int32_t _518 = _f3_s1_t_x / _517;
  int32_t _519 = _518 * _517;
  int32_t _520 = _f3_s1_t_x - _519;
  int32_t _521 = _520 >> 31;
  int32_t _522 = _517 >> 31;
  int32_t _523 = _521 & _522;
  int32_t _524 = _518 - _523;
  int32_t _525 = ~_522;
  int32_t _526 = _521 & _525;
  int32_t _527 = _524 + _526;
  int32_t _528 = _527 * 2;
  int32_t _529 = 1 - _528;
  float _530 = (float)(_529);
  float _531 = _f2_0_stencil_4 * _530;
  float _532 = _f2_0_stencil_3 + _531;
  return _532;
}

//store is: f3.1.stencil(f3_s1_t_x) = (f2.1.stencil((((f3_s1_t_x/4)*4) + ((f3_s1_t_x + 2) % 4))) + (f2.1.stencil(f3_s1_t_x)*float32((1 - ((f3_s1_t_x/(((f3_s1_t_x/4)*4) + 2))*2)))))
hw_uint<32> hcompute_f3_1_stencil_1(hw_uint<64>& f2_1_stencil, const int _f3_s1_t_x) {
  float _f2_1_stencil_3 = (float) f2_1_stencil.extract<0, 31>();
  float _f2_1_stencil_4 = (float) f2_1_stencil.extract<32, 63>();

  int32_t _566 = _f3_s1_t_x >> 2;
  int32_t _567 = _566 * 4;
  int32_t _568 = _567 + 2;
  int32_t _569 = _f3_s1_t_x / _568;
  int32_t _570 = _569 * _568;
  int32_t _571 = _f3_s1_t_x - _570;
  int32_t _572 = _571 >> 31;
  int32_t _573 = _568 >> 31;
  int32_t _574 = _572 & _573;
  int32_t _575 = _569 - _574;
  int32_t _576 = ~_573;
  int32_t _577 = _572 & _576;
  int32_t _578 = _575 + _577;
  int32_t _579 = _578 * 2;
  int32_t _580 = 1 - _579;
  float _581 = (float)(_580);
  float _582 = _f2_1_stencil_4 * _581;
  float _583 = _f2_1_stencil_3 + _582;
  return _583;
}

//store is: f3.0.stencil(f3_s2_t_x) = ((f3.0.stencil(f3_s2_t_x)*hw_twi_global_wrapper.stencil(f3_s2_t_x, 0, 2)) - (f3.1.stencil(f3_s2_t_x)*hw_twi_global_wrapper.stencil(f3_s2_t_x, 1, 2)))
hw_uint<32> hcompute_f3_0_stencil_2(hw_uint<32>& f3_0_stencil, hw_uint<32>& f3_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f3_0_stencil_1 = (float) f3_0_stencil.extract<0, 31>();

  float _f3_1_stencil_1 = (float) f3_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_10 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_9 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _617 = _f3_0_stencil_1 * _hw_twi_global_wrapper_stencil_9;
  float _618 = _f3_1_stencil_1 * _hw_twi_global_wrapper_stencil_10;
  float _619 = _617 - _618;
  return _619;
}

//store is: f3.1.stencil(f3_s2_t_x) = ((f3.0.stencil(f3_s2_t_x)*hw_twi_global_wrapper.stencil(f3_s2_t_x, 1, 2)) + (f3.1.stencil(f3_s2_t_x)*hw_twi_global_wrapper.stencil(f3_s2_t_x, 0, 2)))
hw_uint<32> hcompute_f3_1_stencil_2(hw_uint<32>& f3_0_stencil, hw_uint<32>& f3_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f3_0_stencil_2 = (float) f3_0_stencil.extract<0, 31>();

  float _f3_1_stencil_2 = (float) f3_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_11 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_12 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _630 = _f3_0_stencil_2 * _hw_twi_global_wrapper_stencil_11;
  float _631 = _f3_1_stencil_2 * _hw_twi_global_wrapper_stencil_12;
  float _632 = _630 + _631;
  return _632;
}

//store is: f4.0.stencil(f4_s1_t_x) = (f3.0.stencil(((f4_s1_t_x + 4) % 8)) + (f3.0.stencil(f4_s1_t_x)*float32((1 - ((f4_s1_t_x/4)*2)))))
hw_uint<32> hcompute_f4_0_stencil_1(hw_uint<64>& f3_0_stencil, const int _f4_s1_t_x) {
  float _f3_0_stencil_3 = (float) f3_0_stencil.extract<0, 31>();
  float _f3_0_stencil_4 = (float) f3_0_stencil.extract<32, 63>();

  int32_t _643 = _f4_s1_t_x >> 2;
  int32_t _644 = _643 * 2;
  int32_t _645 = 1 - _644;
  float _646 = (float)(_645);
  float _647 = _f3_0_stencil_4 * _646;
  float _648 = _f3_0_stencil_3 + _647;
  return _648;
}

//store is: f4.1.stencil(f4_s1_t_x) = (f3.1.stencil(((f4_s1_t_x + 4) % 8)) + (f3.1.stencil(f4_s1_t_x)*float32((1 - ((f4_s1_t_x/4)*2)))))
hw_uint<32> hcompute_f4_1_stencil_1(hw_uint<64>& f3_1_stencil, const int _f4_s1_t_x) {
  float _f3_1_stencil_3 = (float) f3_1_stencil.extract<0, 31>();
  float _f3_1_stencil_4 = (float) f3_1_stencil.extract<32, 63>();

  int32_t _666 = _f4_s1_t_x >> 2;
  int32_t _667 = _666 * 2;
  int32_t _668 = 1 - _667;
  float _669 = (float)(_668);
  float _670 = _f3_1_stencil_4 * _669;
  float _671 = _f3_1_stencil_3 + _670;
  return _671;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = select((hw_output_s0_y_yi == 0), f4.0.stencil(hw_output_s0_x_xi), f4.1.stencil(hw_output_s0_x_xi))
hw_uint<32> hcompute_hw_output_stencil(hw_uint<32>& f4_0_stencil, hw_uint<32>& f4_1_stencil, const int _hw_output_s0_y_yi) {
  float _f4_0_stencil_1 = (float) f4_0_stencil.extract<0, 31>();

  float _f4_1_stencil_1 = (float) f4_1_stencil.extract<0, 31>();

  bool _689 = _hw_output_s0_y_yi == 0;
  float _690 = (float)(_689 ? _f4_0_stencil_1 : _f4_1_stencil_1);
  return _690;
}

