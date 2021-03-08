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

//store is: f4.0.stencil((hw_output_s0_x_xi + -3)) = 0.000000f
hw_uint<32> hcompute_f4_0_stencil() {
  float _311 = float_from_bits(0 /* 0 */);
  return _311;
}

//store is: f4.1.stencil((hw_output_s0_x_xi + -3)) = 0.000000f
hw_uint<32> hcompute_f4_1_stencil() {
  float _315 = float_from_bits(0 /* 0 */);
  return _315;
}

//store is: f4.0.stencil((hw_output_s0_x_xi + -2)) = 0.000000f
hw_uint<32> hcompute_f4_0_stencil_1() {
  float _319 = float_from_bits(0 /* 0 */);
  return _319;
}

//store is: f4.1.stencil((hw_output_s0_x_xi + -2)) = 0.000000f
hw_uint<32> hcompute_f4_1_stencil_1() {
  float _323 = float_from_bits(0 /* 0 */);
  return _323;
}

//store is: f4.0.stencil((hw_output_s0_x_xi + -1)) = 0.000000f
hw_uint<32> hcompute_f4_0_stencil_2() {
  float _327 = float_from_bits(0 /* 0 */);
  return _327;
}

//store is: f4.1.stencil((hw_output_s0_x_xi + -1)) = 0.000000f
hw_uint<32> hcompute_f4_1_stencil_2() {
  float _331 = float_from_bits(0 /* 0 */);
  return _331;
}

//store is: f4.0.stencil(hw_output_s0_x_xi) = 0.000000f
hw_uint<32> hcompute_f4_0_stencil_3() {
  float _335 = float_from_bits(0 /* 0 */);
  return _335;
}

//store is: f4.1.stencil(hw_output_s0_x_xi) = 0.000000f
hw_uint<32> hcompute_f4_1_stencil_3() {
  float _338 = float_from_bits(0 /* 0 */);
  return _338;
}

//store is: f3.0.stencil((f3_s0_x_x*4)) = 0.000000f
hw_uint<32> hcompute_f3_0_stencil() {
  float _341 = float_from_bits(0 /* 0 */);
  return _341;
}

//store is: f3.1.stencil((f3_s0_x_x*4)) = 0.000000f
hw_uint<32> hcompute_f3_1_stencil() {
  float _345 = float_from_bits(0 /* 0 */);
  return _345;
}

//store is: f3.0.stencil(((f3_s0_x_x*4) + 1)) = 0.000000f
hw_uint<32> hcompute_f3_0_stencil_1() {
  float _349 = float_from_bits(0 /* 0 */);
  return _349;
}

//store is: f3.1.stencil(((f3_s0_x_x*4) + 1)) = 0.000000f
hw_uint<32> hcompute_f3_1_stencil_1() {
  float _354 = float_from_bits(0 /* 0 */);
  return _354;
}

//store is: f3.0.stencil(((f3_s0_x_x*4) + 2)) = 0.000000f
hw_uint<32> hcompute_f3_0_stencil_2() {
  float _359 = float_from_bits(0 /* 0 */);
  return _359;
}

//store is: f3.1.stencil(((f3_s0_x_x*4) + 2)) = 0.000000f
hw_uint<32> hcompute_f3_1_stencil_2() {
  float _364 = float_from_bits(0 /* 0 */);
  return _364;
}

//store is: f3.0.stencil(((f3_s0_x_x*4) + 3)) = 0.000000f
hw_uint<32> hcompute_f3_0_stencil_3() {
  float _369 = float_from_bits(0 /* 0 */);
  return _369;
}

//store is: f3.1.stencil(((f3_s0_x_x*4) + 3)) = 0.000000f
hw_uint<32> hcompute_f3_1_stencil_3() {
  float _374 = float_from_bits(0 /* 0 */);
  return _374;
}

//store is: f2.0.stencil((f2_s0_x_x*4)) = 0.000000f
hw_uint<32> hcompute_f2_0_stencil() {
  float _379 = float_from_bits(0 /* 0 */);
  return _379;
}

//store is: f2.1.stencil((f2_s0_x_x*4)) = 0.000000f
hw_uint<32> hcompute_f2_1_stencil() {
  float _383 = float_from_bits(0 /* 0 */);
  return _383;
}

//store is: f2.0.stencil(((f2_s0_x_x*4) + 1)) = 0.000000f
hw_uint<32> hcompute_f2_0_stencil_1() {
  float _387 = float_from_bits(0 /* 0 */);
  return _387;
}

//store is: f2.1.stencil(((f2_s0_x_x*4) + 1)) = 0.000000f
hw_uint<32> hcompute_f2_1_stencil_1() {
  float _392 = float_from_bits(0 /* 0 */);
  return _392;
}

//store is: f2.0.stencil(((f2_s0_x_x*4) + 2)) = 0.000000f
hw_uint<32> hcompute_f2_0_stencil_2() {
  float _397 = float_from_bits(0 /* 0 */);
  return _397;
}

//store is: f2.1.stencil(((f2_s0_x_x*4) + 2)) = 0.000000f
hw_uint<32> hcompute_f2_1_stencil_2() {
  float _402 = float_from_bits(0 /* 0 */);
  return _402;
}

//store is: f2.0.stencil(((f2_s0_x_x*4) + 3)) = 0.000000f
hw_uint<32> hcompute_f2_0_stencil_3() {
  float _407 = float_from_bits(0 /* 0 */);
  return _407;
}

//store is: f2.1.stencil(((f2_s0_x_x*4) + 3)) = 0.000000f
hw_uint<32> hcompute_f2_1_stencil_3() {
  float _412 = float_from_bits(0 /* 0 */);
  return _412;
}

//store is: f1.0.stencil((f1_s0_x_x*4)) = hw_input_global_wrapper.stencil((f1_s0_x_x*4), 0)
hw_uint<32> hcompute_f1_0_stencil(hw_uint<32>& hw_input_global_wrapper_stencil) {
  float _hw_input_global_wrapper_stencil_1 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();

  return _hw_input_global_wrapper_stencil_1;
}

//store is: f1.1.stencil((f1_s0_x_x*4)) = hw_input_global_wrapper.stencil((f1_s0_x_x*4), 1)
hw_uint<32> hcompute_f1_1_stencil(hw_uint<32>& hw_input_global_wrapper_stencil) {
  float _hw_input_global_wrapper_stencil_2 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();

  return _hw_input_global_wrapper_stencil_2;
}

//store is: f1.0.stencil(((f1_s0_x_x*4) + 1)) = hw_input_global_wrapper.stencil(((f1_s0_x_x*4) + 1), 0)
hw_uint<32> hcompute_f1_0_stencil_1(hw_uint<32>& hw_input_global_wrapper_stencil) {
  float _hw_input_global_wrapper_stencil_3 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();

  return _hw_input_global_wrapper_stencil_3;
}

//store is: f1.1.stencil(((f1_s0_x_x*4) + 1)) = hw_input_global_wrapper.stencil(((f1_s0_x_x*4) + 1), 1)
hw_uint<32> hcompute_f1_1_stencil_1(hw_uint<32>& hw_input_global_wrapper_stencil) {
  float _hw_input_global_wrapper_stencil_4 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();

  return _hw_input_global_wrapper_stencil_4;
}

//store is: f1.0.stencil(((f1_s0_x_x*4) + 2)) = hw_input_global_wrapper.stencil(((f1_s0_x_x*4) + 2), 0)
hw_uint<32> hcompute_f1_0_stencil_2(hw_uint<32>& hw_input_global_wrapper_stencil) {
  float _hw_input_global_wrapper_stencil_5 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();

  return _hw_input_global_wrapper_stencil_5;
}

//store is: f1.1.stencil(((f1_s0_x_x*4) + 2)) = hw_input_global_wrapper.stencil(((f1_s0_x_x*4) + 2), 1)
hw_uint<32> hcompute_f1_1_stencil_2(hw_uint<32>& hw_input_global_wrapper_stencil) {
  float _hw_input_global_wrapper_stencil_6 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();

  return _hw_input_global_wrapper_stencil_6;
}

//store is: f1.0.stencil(((f1_s0_x_x*4) + 3)) = hw_input_global_wrapper.stencil(((f1_s0_x_x*4) + 3), 0)
hw_uint<32> hcompute_f1_0_stencil_3(hw_uint<32>& hw_input_global_wrapper_stencil) {
  float _hw_input_global_wrapper_stencil_7 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();

  return _hw_input_global_wrapper_stencil_7;
}

//store is: f1.1.stencil(((f1_s0_x_x*4) + 3)) = hw_input_global_wrapper.stencil(((f1_s0_x_x*4) + 3), 1)
hw_uint<32> hcompute_f1_1_stencil_3(hw_uint<32>& hw_input_global_wrapper_stencil) {
  float _hw_input_global_wrapper_stencil_8 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();

  return _hw_input_global_wrapper_stencil_8;
}

//store is: f1.0.stencil(f1_s1_t_x) = ((f1.0.stencil(f1_s1_t_x)*hw_twi_global_wrapper.stencil(f1_s1_t_x, 0, 0)) - (f1.1.stencil(f1_s1_t_x)*hw_twi_global_wrapper.stencil(f1_s1_t_x, 1, 0)))
hw_uint<32> hcompute_f1_0_stencil_4(hw_uint<32>& f1_0_stencil, hw_uint<32>& f1_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f1_0_stencil_1 = (float) f1_0_stencil.extract<0, 31>();

  float _f1_1_stencil_1 = (float) f1_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_1 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_2 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _439 = _f1_0_stencil_1 * _hw_twi_global_wrapper_stencil_1;
  float _440 = _f1_1_stencil_1 * _hw_twi_global_wrapper_stencil_2;
  float _441 = _439 - _440;
  return _441;
}

//store is: f1.1.stencil(f1_s1_t_x) = ((f1.0.stencil(f1_s1_t_x)*hw_twi_global_wrapper.stencil(f1_s1_t_x, 1, 0)) + (f1.1.stencil(f1_s1_t_x)*hw_twi_global_wrapper.stencil(f1_s1_t_x, 0, 0)))
hw_uint<32> hcompute_f1_1_stencil_4(hw_uint<32>& f1_0_stencil, hw_uint<32>& f1_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f1_0_stencil_2 = (float) f1_0_stencil.extract<0, 31>();

  float _f1_1_stencil_2 = (float) f1_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_3 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_4 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _452 = _f1_0_stencil_2 * _hw_twi_global_wrapper_stencil_3;
  float _453 = _f1_1_stencil_2 * _hw_twi_global_wrapper_stencil_4;
  float _454 = _452 + _453;
  return _454;
}

//store is: f2.0.stencil(f2_s1_t_x) = (f1.0.stencil((((f2_s1_t_x/2)*2) + ((f2_s1_t_x + 1) % 2))) + (f1.0.stencil(f2_s1_t_x)*float32((1 - ((f2_s1_t_x/(((f2_s1_t_x/2)*2) + 1))*2)))))
hw_uint<32> hcompute_f2_0_stencil_4(hw_uint<64>& f1_0_stencil, const int _f2_s1_t_x) {
  float _f1_0_stencil_3 = (float) f1_0_stencil.extract<0, 31>();
  float _f1_0_stencil_4 = (float) f1_0_stencil.extract<32, 63>();

  int32_t _465 = _f2_s1_t_x >> 1;
  int32_t _466 = _465 * 2;
  int32_t _467 = _466 + 1;
  int32_t _468 = _f2_s1_t_x / _467;
  int32_t _469 = _468 * _467;
  int32_t _470 = _f2_s1_t_x - _469;
  int32_t _471 = _470 >> 31;
  int32_t _472 = _467 >> 31;
  int32_t _473 = _471 & _472;
  int32_t _474 = _468 - _473;
  int32_t _475 = ~_472;
  int32_t _476 = _471 & _475;
  int32_t _477 = _474 + _476;
  int32_t _478 = _477 * 2;
  int32_t _479 = 1 - _478;
  float _480 = (float)(_479);
  float _481 = _f1_0_stencil_4 * _480;
  float _482 = _f1_0_stencil_3 + _481;
  return _482;
}

//store is: f2.1.stencil(f2_s1_t_x) = (f1.1.stencil((((f2_s1_t_x/2)*2) + ((f2_s1_t_x + 1) % 2))) + (f1.1.stencil(f2_s1_t_x)*float32((1 - ((f2_s1_t_x/(((f2_s1_t_x/2)*2) + 1))*2)))))
hw_uint<32> hcompute_f2_1_stencil_4(hw_uint<64>& f1_1_stencil, const int _f2_s1_t_x) {
  float _f1_1_stencil_3 = (float) f1_1_stencil.extract<0, 31>();
  float _f1_1_stencil_4 = (float) f1_1_stencil.extract<32, 63>();

  int32_t _516 = _f2_s1_t_x >> 1;
  int32_t _517 = _516 * 2;
  int32_t _518 = _517 + 1;
  int32_t _519 = _f2_s1_t_x / _518;
  int32_t _520 = _519 * _518;
  int32_t _521 = _f2_s1_t_x - _520;
  int32_t _522 = _521 >> 31;
  int32_t _523 = _518 >> 31;
  int32_t _524 = _522 & _523;
  int32_t _525 = _519 - _524;
  int32_t _526 = ~_523;
  int32_t _527 = _522 & _526;
  int32_t _528 = _525 + _527;
  int32_t _529 = _528 * 2;
  int32_t _530 = 1 - _529;
  float _531 = (float)(_530);
  float _532 = _f1_1_stencil_4 * _531;
  float _533 = _f1_1_stencil_3 + _532;
  return _533;
}

//store is: f2.0.stencil(f2_s2_t_x) = ((f2.0.stencil(f2_s2_t_x)*hw_twi_global_wrapper.stencil(f2_s2_t_x, 0, 1)) - (f2.1.stencil(f2_s2_t_x)*hw_twi_global_wrapper.stencil(f2_s2_t_x, 1, 1)))
hw_uint<32> hcompute_f2_0_stencil_5(hw_uint<32>& f2_0_stencil, hw_uint<32>& f2_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f2_0_stencil_1 = (float) f2_0_stencil.extract<0, 31>();

  float _f2_1_stencil_1 = (float) f2_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_5 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_6 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _567 = _f2_0_stencil_1 * _hw_twi_global_wrapper_stencil_5;
  float _568 = _f2_1_stencil_1 * _hw_twi_global_wrapper_stencil_6;
  float _569 = _567 - _568;
  return _569;
}

//store is: f2.1.stencil(f2_s2_t_x) = ((f2.0.stencil(f2_s2_t_x)*hw_twi_global_wrapper.stencil(f2_s2_t_x, 1, 1)) + (f2.1.stencil(f2_s2_t_x)*hw_twi_global_wrapper.stencil(f2_s2_t_x, 0, 1)))
hw_uint<32> hcompute_f2_1_stencil_5(hw_uint<32>& f2_0_stencil, hw_uint<32>& f2_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f2_0_stencil_2 = (float) f2_0_stencil.extract<0, 31>();

  float _f2_1_stencil_2 = (float) f2_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_7 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_8 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _580 = _f2_0_stencil_2 * _hw_twi_global_wrapper_stencil_7;
  float _581 = _f2_1_stencil_2 * _hw_twi_global_wrapper_stencil_8;
  float _582 = _580 + _581;
  return _582;
}

//store is: f3.0.stencil(f3_s1_t_x) = (f2.0.stencil((((f3_s1_t_x/4)*4) + ((f3_s1_t_x + 2) % 4))) + (f2.0.stencil(f3_s1_t_x)*float32((1 - ((f3_s1_t_x/(((f3_s1_t_x/4)*4) + 2))*2)))))
hw_uint<32> hcompute_f3_0_stencil_4(hw_uint<64>& f2_0_stencil, const int _f3_s1_t_x) {
  float _f2_0_stencil_3 = (float) f2_0_stencil.extract<0, 31>();
  float _f2_0_stencil_4 = (float) f2_0_stencil.extract<32, 63>();

  int32_t _593 = _f3_s1_t_x >> 2;
  int32_t _594 = _593 * 4;
  int32_t _595 = _594 + 2;
  int32_t _596 = _f3_s1_t_x / _595;
  int32_t _597 = _596 * _595;
  int32_t _598 = _f3_s1_t_x - _597;
  int32_t _599 = _598 >> 31;
  int32_t _600 = _595 >> 31;
  int32_t _601 = _599 & _600;
  int32_t _602 = _596 - _601;
  int32_t _603 = ~_600;
  int32_t _604 = _599 & _603;
  int32_t _605 = _602 + _604;
  int32_t _606 = _605 * 2;
  int32_t _607 = 1 - _606;
  float _608 = (float)(_607);
  float _609 = _f2_0_stencil_4 * _608;
  float _610 = _f2_0_stencil_3 + _609;
  return _610;
}

//store is: f3.1.stencil(f3_s1_t_x) = (f2.1.stencil((((f3_s1_t_x/4)*4) + ((f3_s1_t_x + 2) % 4))) + (f2.1.stencil(f3_s1_t_x)*float32((1 - ((f3_s1_t_x/(((f3_s1_t_x/4)*4) + 2))*2)))))
hw_uint<32> hcompute_f3_1_stencil_4(hw_uint<64>& f2_1_stencil, const int _f3_s1_t_x) {
  float _f2_1_stencil_3 = (float) f2_1_stencil.extract<0, 31>();
  float _f2_1_stencil_4 = (float) f2_1_stencil.extract<32, 63>();

  int32_t _644 = _f3_s1_t_x >> 2;
  int32_t _645 = _644 * 4;
  int32_t _646 = _645 + 2;
  int32_t _647 = _f3_s1_t_x / _646;
  int32_t _648 = _647 * _646;
  int32_t _649 = _f3_s1_t_x - _648;
  int32_t _650 = _649 >> 31;
  int32_t _651 = _646 >> 31;
  int32_t _652 = _650 & _651;
  int32_t _653 = _647 - _652;
  int32_t _654 = ~_651;
  int32_t _655 = _650 & _654;
  int32_t _656 = _653 + _655;
  int32_t _657 = _656 * 2;
  int32_t _658 = 1 - _657;
  float _659 = (float)(_658);
  float _660 = _f2_1_stencil_4 * _659;
  float _661 = _f2_1_stencil_3 + _660;
  return _661;
}

//store is: f3.0.stencil(f3_s2_t_x) = ((f3.0.stencil(f3_s2_t_x)*hw_twi_global_wrapper.stencil(f3_s2_t_x, 0, 2)) - (f3.1.stencil(f3_s2_t_x)*hw_twi_global_wrapper.stencil(f3_s2_t_x, 1, 2)))
hw_uint<32> hcompute_f3_0_stencil_5(hw_uint<32>& f3_0_stencil, hw_uint<32>& f3_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f3_0_stencil_1 = (float) f3_0_stencil.extract<0, 31>();

  float _f3_1_stencil_1 = (float) f3_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_10 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_9 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _695 = _f3_0_stencil_1 * _hw_twi_global_wrapper_stencil_9;
  float _696 = _f3_1_stencil_1 * _hw_twi_global_wrapper_stencil_10;
  float _697 = _695 - _696;
  return _697;
}

//store is: f3.1.stencil(f3_s2_t_x) = ((f3.0.stencil(f3_s2_t_x)*hw_twi_global_wrapper.stencil(f3_s2_t_x, 1, 2)) + (f3.1.stencil(f3_s2_t_x)*hw_twi_global_wrapper.stencil(f3_s2_t_x, 0, 2)))
hw_uint<32> hcompute_f3_1_stencil_5(hw_uint<32>& f3_0_stencil, hw_uint<32>& f3_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f3_0_stencil_2 = (float) f3_0_stencil.extract<0, 31>();

  float _f3_1_stencil_2 = (float) f3_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_11 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_12 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _708 = _f3_0_stencil_2 * _hw_twi_global_wrapper_stencil_11;
  float _709 = _f3_1_stencil_2 * _hw_twi_global_wrapper_stencil_12;
  float _710 = _708 + _709;
  return _710;
}

//store is: f4.0.stencil(f4_s1_t_x) = (f3.0.stencil(((f4_s1_t_x + 4) % 8)) + (f3.0.stencil(f4_s1_t_x)*float32((1 - ((f4_s1_t_x/4)*2)))))
hw_uint<32> hcompute_f4_0_stencil_4(hw_uint<64>& f3_0_stencil, const int _f4_s1_t_x) {
  float _f3_0_stencil_3 = (float) f3_0_stencil.extract<0, 31>();
  float _f3_0_stencil_4 = (float) f3_0_stencil.extract<32, 63>();

  int32_t _721 = _f4_s1_t_x >> 2;
  int32_t _722 = _721 * 2;
  int32_t _723 = 1 - _722;
  float _724 = (float)(_723);
  float _725 = _f3_0_stencil_4 * _724;
  float _726 = _f3_0_stencil_3 + _725;
  return _726;
}

//store is: f4.1.stencil(f4_s1_t_x) = (f3.1.stencil(((f4_s1_t_x + 4) % 8)) + (f3.1.stencil(f4_s1_t_x)*float32((1 - ((f4_s1_t_x/4)*2)))))
hw_uint<32> hcompute_f4_1_stencil_4(hw_uint<64>& f3_1_stencil, const int _f4_s1_t_x) {
  float _f3_1_stencil_3 = (float) f3_1_stencil.extract<0, 31>();
  float _f3_1_stencil_4 = (float) f3_1_stencil.extract<32, 63>();

  int32_t _744 = _f4_s1_t_x >> 2;
  int32_t _745 = _744 * 2;
  int32_t _746 = 1 - _745;
  float _747 = (float)(_746);
  float _748 = _f3_1_stencil_4 * _747;
  float _749 = _f3_1_stencil_3 + _748;
  return _749;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = select((hw_output_s0_y_yi == 0), f4.0.stencil(hw_output_s0_x_xi), f4.1.stencil(hw_output_s0_x_xi))
hw_uint<32> hcompute_hw_output_stencil(hw_uint<32>& f4_0_stencil, hw_uint<32>& f4_1_stencil, const int _hw_output_s0_y_yi) {
  float _f4_0_stencil_1 = (float) f4_0_stencil.extract<0, 31>();

  float _f4_1_stencil_1 = (float) f4_1_stencil.extract<0, 31>();

  bool _767 = _hw_output_s0_y_yi == 0;
  float _768 = (float)(_767 ? _f4_0_stencil_1 : _f4_1_stencil_1);
  return _768;
}

