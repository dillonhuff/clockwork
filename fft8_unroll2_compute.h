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

//store is: f4.0.stencil((hw_output_s0_x_xi + -1)) = 0.000000f
hw_uint<32> hcompute_f4_0_stencil() {
  float _311 = float_from_bits(0 /* 0 */);
  return _311;
}

//store is: f4.1.stencil((hw_output_s0_x_xi + -1)) = 0.000000f
hw_uint<32> hcompute_f4_1_stencil() {
  float _315 = float_from_bits(0 /* 0 */);
  return _315;
}

//store is: f4.0.stencil(hw_output_s0_x_xi) = 0.000000f
hw_uint<32> hcompute_f4_0_stencil_1() {
  float _319 = float_from_bits(0 /* 0 */);
  return _319;
}

//store is: f4.1.stencil(hw_output_s0_x_xi) = 0.000000f
hw_uint<32> hcompute_f4_1_stencil_1() {
  float _322 = float_from_bits(0 /* 0 */);
  return _322;
}

//store is: f3.0.stencil((f3_s0_x_x*2)) = 0.000000f
hw_uint<32> hcompute_f3_0_stencil() {
  float _325 = float_from_bits(0 /* 0 */);
  return _325;
}

//store is: f3.1.stencil((f3_s0_x_x*2)) = 0.000000f
hw_uint<32> hcompute_f3_1_stencil() {
  float _329 = float_from_bits(0 /* 0 */);
  return _329;
}

//store is: f3.0.stencil(((f3_s0_x_x*2) + 1)) = 0.000000f
hw_uint<32> hcompute_f3_0_stencil_1() {
  float _333 = float_from_bits(0 /* 0 */);
  return _333;
}

//store is: f3.1.stencil(((f3_s0_x_x*2) + 1)) = 0.000000f
hw_uint<32> hcompute_f3_1_stencil_1() {
  float _338 = float_from_bits(0 /* 0 */);
  return _338;
}

//store is: f2.0.stencil((f2_s0_x_x*2)) = 0.000000f
hw_uint<32> hcompute_f2_0_stencil() {
  float _343 = float_from_bits(0 /* 0 */);
  return _343;
}

//store is: f2.1.stencil((f2_s0_x_x*2)) = 0.000000f
hw_uint<32> hcompute_f2_1_stencil() {
  float _347 = float_from_bits(0 /* 0 */);
  return _347;
}

//store is: f2.0.stencil(((f2_s0_x_x*2) + 1)) = 0.000000f
hw_uint<32> hcompute_f2_0_stencil_1() {
  float _351 = float_from_bits(0 /* 0 */);
  return _351;
}

//store is: f2.1.stencil(((f2_s0_x_x*2) + 1)) = 0.000000f
hw_uint<32> hcompute_f2_1_stencil_1() {
  float _356 = float_from_bits(0 /* 0 */);
  return _356;
}

//store is: f1.0.stencil((f1_s0_x_x*2)) = hw_input_global_wrapper.stencil((f1_s0_x_x*2), 0)
hw_uint<32> hcompute_f1_0_stencil(hw_uint<32>& hw_input_global_wrapper_stencil) {
  float _hw_input_global_wrapper_stencil_1 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();

  return _hw_input_global_wrapper_stencil_1;
}

//store is: f1.1.stencil((f1_s0_x_x*2)) = hw_input_global_wrapper.stencil((f1_s0_x_x*2), 1)
hw_uint<32> hcompute_f1_1_stencil(hw_uint<32>& hw_input_global_wrapper_stencil) {
  float _hw_input_global_wrapper_stencil_2 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();

  return _hw_input_global_wrapper_stencil_2;
}

//store is: f1.0.stencil(((f1_s0_x_x*2) + 1)) = hw_input_global_wrapper.stencil(((f1_s0_x_x*2) + 1), 0)
hw_uint<32> hcompute_f1_0_stencil_1(hw_uint<32>& hw_input_global_wrapper_stencil) {
  float _hw_input_global_wrapper_stencil_3 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();

  return _hw_input_global_wrapper_stencil_3;
}

//store is: f1.1.stencil(((f1_s0_x_x*2) + 1)) = hw_input_global_wrapper.stencil(((f1_s0_x_x*2) + 1), 1)
hw_uint<32> hcompute_f1_1_stencil_1(hw_uint<32>& hw_input_global_wrapper_stencil) {
  float _hw_input_global_wrapper_stencil_4 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();

  return _hw_input_global_wrapper_stencil_4;
}

//store is: f1.0.stencil(f1_s1_t_x) = ((f1.0.stencil(f1_s1_t_x)*hw_twi_global_wrapper.stencil(f1_s1_t_x, 0, 0)) - (f1.1.stencil(f1_s1_t_x)*hw_twi_global_wrapper.stencil(f1_s1_t_x, 1, 0)))
hw_uint<32> hcompute_f1_0_stencil_2(hw_uint<32>& f1_0_stencil, hw_uint<32>& f1_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f1_0_stencil_1 = (float) f1_0_stencil.extract<0, 31>();

  float _f1_1_stencil_1 = (float) f1_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_1 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_2 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _371 = _f1_0_stencil_1 * _hw_twi_global_wrapper_stencil_1;
  float _372 = _f1_1_stencil_1 * _hw_twi_global_wrapper_stencil_2;
  float _373 = _371 - _372;
  return _373;
}

//store is: f1.1.stencil(f1_s1_t_x) = ((f1.0.stencil(f1_s1_t_x)*hw_twi_global_wrapper.stencil(f1_s1_t_x, 1, 0)) + (f1.1.stencil(f1_s1_t_x)*hw_twi_global_wrapper.stencil(f1_s1_t_x, 0, 0)))
hw_uint<32> hcompute_f1_1_stencil_2(hw_uint<32>& f1_0_stencil, hw_uint<32>& f1_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f1_0_stencil_2 = (float) f1_0_stencil.extract<0, 31>();

  float _f1_1_stencil_2 = (float) f1_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_3 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_4 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _384 = _f1_0_stencil_2 * _hw_twi_global_wrapper_stencil_3;
  float _385 = _f1_1_stencil_2 * _hw_twi_global_wrapper_stencil_4;
  float _386 = _384 + _385;
  return _386;
}

//store is: f2.0.stencil(f2_s1_t_x) = (f1.0.stencil((((f2_s1_t_x/2)*2) + ((f2_s1_t_x + 1) % 2))) + (f1.0.stencil(f2_s1_t_x)*float32((1 - ((f2_s1_t_x/(((f2_s1_t_x/2)*2) + 1))*2)))))
hw_uint<32> hcompute_f2_0_stencil_2(hw_uint<64>& f1_0_stencil, const int _f2_s1_t_x) {
  float _f1_0_stencil_3 = (float) f1_0_stencil.extract<0, 31>();
  float _f1_0_stencil_4 = (float) f1_0_stencil.extract<32, 63>();

  int32_t _397 = _f2_s1_t_x >> 1;
  int32_t _398 = _397 * 2;
  int32_t _399 = _398 + 1;
  int32_t _400 = _f2_s1_t_x / _399;
  int32_t _401 = _400 * _399;
  int32_t _402 = _f2_s1_t_x - _401;
  int32_t _403 = _402 >> 31;
  int32_t _404 = _399 >> 31;
  int32_t _405 = _403 & _404;
  int32_t _406 = _400 - _405;
  int32_t _407 = ~_404;
  int32_t _408 = _403 & _407;
  int32_t _409 = _406 + _408;
  int32_t _410 = _409 * 2;
  int32_t _411 = 1 - _410;
  float _412 = (float)(_411);
  float _413 = _f1_0_stencil_4 * _412;
  float _414 = _f1_0_stencil_3 + _413;
  return _414;
}

//store is: f2.1.stencil(f2_s1_t_x) = (f1.1.stencil((((f2_s1_t_x/2)*2) + ((f2_s1_t_x + 1) % 2))) + (f1.1.stencil(f2_s1_t_x)*float32((1 - ((f2_s1_t_x/(((f2_s1_t_x/2)*2) + 1))*2)))))
hw_uint<32> hcompute_f2_1_stencil_2(hw_uint<64>& f1_1_stencil, const int _f2_s1_t_x) {
  float _f1_1_stencil_3 = (float) f1_1_stencil.extract<0, 31>();
  float _f1_1_stencil_4 = (float) f1_1_stencil.extract<32, 63>();

  int32_t _448 = _f2_s1_t_x >> 1;
  int32_t _449 = _448 * 2;
  int32_t _450 = _449 + 1;
  int32_t _451 = _f2_s1_t_x / _450;
  int32_t _452 = _451 * _450;
  int32_t _453 = _f2_s1_t_x - _452;
  int32_t _454 = _453 >> 31;
  int32_t _455 = _450 >> 31;
  int32_t _456 = _454 & _455;
  int32_t _457 = _451 - _456;
  int32_t _458 = ~_455;
  int32_t _459 = _454 & _458;
  int32_t _460 = _457 + _459;
  int32_t _461 = _460 * 2;
  int32_t _462 = 1 - _461;
  float _463 = (float)(_462);
  float _464 = _f1_1_stencil_4 * _463;
  float _465 = _f1_1_stencil_3 + _464;
  return _465;
}

//store is: f2.0.stencil(f2_s2_t_x) = ((f2.0.stencil(f2_s2_t_x)*hw_twi_global_wrapper.stencil(f2_s2_t_x, 0, 1)) - (f2.1.stencil(f2_s2_t_x)*hw_twi_global_wrapper.stencil(f2_s2_t_x, 1, 1)))
hw_uint<32> hcompute_f2_0_stencil_3(hw_uint<32>& f2_0_stencil, hw_uint<32>& f2_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f2_0_stencil_1 = (float) f2_0_stencil.extract<0, 31>();

  float _f2_1_stencil_1 = (float) f2_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_5 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_6 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _499 = _f2_0_stencil_1 * _hw_twi_global_wrapper_stencil_5;
  float _500 = _f2_1_stencil_1 * _hw_twi_global_wrapper_stencil_6;
  float _501 = _499 - _500;
  return _501;
}

//store is: f2.1.stencil(f2_s2_t_x) = ((f2.0.stencil(f2_s2_t_x)*hw_twi_global_wrapper.stencil(f2_s2_t_x, 1, 1)) + (f2.1.stencil(f2_s2_t_x)*hw_twi_global_wrapper.stencil(f2_s2_t_x, 0, 1)))
hw_uint<32> hcompute_f2_1_stencil_3(hw_uint<32>& f2_0_stencil, hw_uint<32>& f2_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f2_0_stencil_2 = (float) f2_0_stencil.extract<0, 31>();

  float _f2_1_stencil_2 = (float) f2_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_7 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_8 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _512 = _f2_0_stencil_2 * _hw_twi_global_wrapper_stencil_7;
  float _513 = _f2_1_stencil_2 * _hw_twi_global_wrapper_stencil_8;
  float _514 = _512 + _513;
  return _514;
}

//store is: f3.0.stencil(f3_s1_t_x) = (f2.0.stencil((((f3_s1_t_x/4)*4) + ((f3_s1_t_x + 2) % 4))) + (f2.0.stencil(f3_s1_t_x)*float32((1 - ((f3_s1_t_x/(((f3_s1_t_x/4)*4) + 2))*2)))))
hw_uint<32> hcompute_f3_0_stencil_2(hw_uint<64>& f2_0_stencil, const int _f3_s1_t_x) {
  float _f2_0_stencil_3 = (float) f2_0_stencil.extract<0, 31>();
  float _f2_0_stencil_4 = (float) f2_0_stencil.extract<32, 63>();

  int32_t _525 = _f3_s1_t_x >> 2;
  int32_t _526 = _525 * 4;
  int32_t _527 = _526 + 2;
  int32_t _528 = _f3_s1_t_x / _527;
  int32_t _529 = _528 * _527;
  int32_t _530 = _f3_s1_t_x - _529;
  int32_t _531 = _530 >> 31;
  int32_t _532 = _527 >> 31;
  int32_t _533 = _531 & _532;
  int32_t _534 = _528 - _533;
  int32_t _535 = ~_532;
  int32_t _536 = _531 & _535;
  int32_t _537 = _534 + _536;
  int32_t _538 = _537 * 2;
  int32_t _539 = 1 - _538;
  float _540 = (float)(_539);
  float _541 = _f2_0_stencil_4 * _540;
  float _542 = _f2_0_stencil_3 + _541;
  return _542;
}

//store is: f3.1.stencil(f3_s1_t_x) = (f2.1.stencil((((f3_s1_t_x/4)*4) + ((f3_s1_t_x + 2) % 4))) + (f2.1.stencil(f3_s1_t_x)*float32((1 - ((f3_s1_t_x/(((f3_s1_t_x/4)*4) + 2))*2)))))
hw_uint<32> hcompute_f3_1_stencil_2(hw_uint<64>& f2_1_stencil, const int _f3_s1_t_x) {
  float _f2_1_stencil_3 = (float) f2_1_stencil.extract<0, 31>();
  float _f2_1_stencil_4 = (float) f2_1_stencil.extract<32, 63>();

  int32_t _576 = _f3_s1_t_x >> 2;
  int32_t _577 = _576 * 4;
  int32_t _578 = _577 + 2;
  int32_t _579 = _f3_s1_t_x / _578;
  int32_t _580 = _579 * _578;
  int32_t _581 = _f3_s1_t_x - _580;
  int32_t _582 = _581 >> 31;
  int32_t _583 = _578 >> 31;
  int32_t _584 = _582 & _583;
  int32_t _585 = _579 - _584;
  int32_t _586 = ~_583;
  int32_t _587 = _582 & _586;
  int32_t _588 = _585 + _587;
  int32_t _589 = _588 * 2;
  int32_t _590 = 1 - _589;
  float _591 = (float)(_590);
  float _592 = _f2_1_stencil_4 * _591;
  float _593 = _f2_1_stencil_3 + _592;
  return _593;
}

//store is: f3.0.stencil(f3_s2_t_x) = ((f3.0.stencil(f3_s2_t_x)*hw_twi_global_wrapper.stencil(f3_s2_t_x, 0, 2)) - (f3.1.stencil(f3_s2_t_x)*hw_twi_global_wrapper.stencil(f3_s2_t_x, 1, 2)))
hw_uint<32> hcompute_f3_0_stencil_3(hw_uint<32>& f3_0_stencil, hw_uint<32>& f3_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f3_0_stencil_1 = (float) f3_0_stencil.extract<0, 31>();

  float _f3_1_stencil_1 = (float) f3_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_10 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_9 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _627 = _f3_0_stencil_1 * _hw_twi_global_wrapper_stencil_9;
  float _628 = _f3_1_stencil_1 * _hw_twi_global_wrapper_stencil_10;
  float _629 = _627 - _628;
  return _629;
}

//store is: f3.1.stencil(f3_s2_t_x) = ((f3.0.stencil(f3_s2_t_x)*hw_twi_global_wrapper.stencil(f3_s2_t_x, 1, 2)) + (f3.1.stencil(f3_s2_t_x)*hw_twi_global_wrapper.stencil(f3_s2_t_x, 0, 2)))
hw_uint<32> hcompute_f3_1_stencil_3(hw_uint<32>& f3_0_stencil, hw_uint<32>& f3_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f3_0_stencil_2 = (float) f3_0_stencil.extract<0, 31>();

  float _f3_1_stencil_2 = (float) f3_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_11 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_12 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _640 = _f3_0_stencil_2 * _hw_twi_global_wrapper_stencil_11;
  float _641 = _f3_1_stencil_2 * _hw_twi_global_wrapper_stencil_12;
  float _642 = _640 + _641;
  return _642;
}

//store is: f4.0.stencil(f4_s1_t_x) = (f3.0.stencil(((f4_s1_t_x + 4) % 8)) + (f3.0.stencil(f4_s1_t_x)*float32((1 - ((f4_s1_t_x/4)*2)))))
hw_uint<32> hcompute_f4_0_stencil_2(hw_uint<64>& f3_0_stencil, const int _f4_s1_t_x) {
  float _f3_0_stencil_3 = (float) f3_0_stencil.extract<0, 31>();
  float _f3_0_stencil_4 = (float) f3_0_stencil.extract<32, 63>();

  int32_t _653 = _f4_s1_t_x >> 2;
  int32_t _654 = _653 * 2;
  int32_t _655 = 1 - _654;
  float _656 = (float)(_655);
  float _657 = _f3_0_stencil_4 * _656;
  float _658 = _f3_0_stencil_3 + _657;
  return _658;
}

//store is: f4.1.stencil(f4_s1_t_x) = (f3.1.stencil(((f4_s1_t_x + 4) % 8)) + (f3.1.stencil(f4_s1_t_x)*float32((1 - ((f4_s1_t_x/4)*2)))))
hw_uint<32> hcompute_f4_1_stencil_2(hw_uint<64>& f3_1_stencil, const int _f4_s1_t_x) {
  float _f3_1_stencil_3 = (float) f3_1_stencil.extract<0, 31>();
  float _f3_1_stencil_4 = (float) f3_1_stencil.extract<32, 63>();

  int32_t _676 = _f4_s1_t_x >> 2;
  int32_t _677 = _676 * 2;
  int32_t _678 = 1 - _677;
  float _679 = (float)(_678);
  float _680 = _f3_1_stencil_4 * _679;
  float _681 = _f3_1_stencil_3 + _680;
  return _681;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = select((hw_output_s0_y_yi == 0), f4.0.stencil(hw_output_s0_x_xi), f4.1.stencil(hw_output_s0_x_xi))
hw_uint<32> hcompute_hw_output_stencil(hw_uint<32>& f4_0_stencil, hw_uint<32>& f4_1_stencil, const int _hw_output_s0_y_yi) {
  float _f4_0_stencil_1 = (float) f4_0_stencil.extract<0, 31>();

  float _f4_1_stencil_1 = (float) f4_1_stencil.extract<0, 31>();

  bool _699 = _hw_output_s0_y_yi == 0;
  float _700 = (float)(_699 ? _f4_0_stencil_1 : _f4_1_stencil_1);
  return _700;
}

