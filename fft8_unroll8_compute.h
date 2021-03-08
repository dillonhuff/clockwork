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

//store is: f4.0.stencil((hw_output_s0_x_xi + -7)) = 0.000000f
hw_uint<32> hcompute_f4_0_stencil() {
  float _311 = float_from_bits(0 /* 0 */);
  return _311;
}

//store is: f4.1.stencil((hw_output_s0_x_xi + -7)) = 0.000000f
hw_uint<32> hcompute_f4_1_stencil() {
  float _315 = float_from_bits(0 /* 0 */);
  return _315;
}

//store is: f4.0.stencil((hw_output_s0_x_xi + -6)) = 0.000000f
hw_uint<32> hcompute_f4_0_stencil_1() {
  float _319 = float_from_bits(0 /* 0 */);
  return _319;
}

//store is: f4.1.stencil((hw_output_s0_x_xi + -6)) = 0.000000f
hw_uint<32> hcompute_f4_1_stencil_1() {
  float _323 = float_from_bits(0 /* 0 */);
  return _323;
}

//store is: f4.0.stencil((hw_output_s0_x_xi + -5)) = 0.000000f
hw_uint<32> hcompute_f4_0_stencil_2() {
  float _327 = float_from_bits(0 /* 0 */);
  return _327;
}

//store is: f4.1.stencil((hw_output_s0_x_xi + -5)) = 0.000000f
hw_uint<32> hcompute_f4_1_stencil_2() {
  float _331 = float_from_bits(0 /* 0 */);
  return _331;
}

//store is: f4.0.stencil((hw_output_s0_x_xi + -4)) = 0.000000f
hw_uint<32> hcompute_f4_0_stencil_3() {
  float _335 = float_from_bits(0 /* 0 */);
  return _335;
}

//store is: f4.1.stencil((hw_output_s0_x_xi + -4)) = 0.000000f
hw_uint<32> hcompute_f4_1_stencil_3() {
  float _339 = float_from_bits(0 /* 0 */);
  return _339;
}

//store is: f4.0.stencil((hw_output_s0_x_xi + -3)) = 0.000000f
hw_uint<32> hcompute_f4_0_stencil_4() {
  float _343 = float_from_bits(0 /* 0 */);
  return _343;
}

//store is: f4.1.stencil((hw_output_s0_x_xi + -3)) = 0.000000f
hw_uint<32> hcompute_f4_1_stencil_4() {
  float _347 = float_from_bits(0 /* 0 */);
  return _347;
}

//store is: f4.0.stencil((hw_output_s0_x_xi + -2)) = 0.000000f
hw_uint<32> hcompute_f4_0_stencil_5() {
  float _351 = float_from_bits(0 /* 0 */);
  return _351;
}

//store is: f4.1.stencil((hw_output_s0_x_xi + -2)) = 0.000000f
hw_uint<32> hcompute_f4_1_stencil_5() {
  float _355 = float_from_bits(0 /* 0 */);
  return _355;
}

//store is: f4.0.stencil((hw_output_s0_x_xi + -1)) = 0.000000f
hw_uint<32> hcompute_f4_0_stencil_6() {
  float _359 = float_from_bits(0 /* 0 */);
  return _359;
}

//store is: f4.1.stencil((hw_output_s0_x_xi + -1)) = 0.000000f
hw_uint<32> hcompute_f4_1_stencil_6() {
  float _363 = float_from_bits(0 /* 0 */);
  return _363;
}

//store is: f4.0.stencil(hw_output_s0_x_xi) = 0.000000f
hw_uint<32> hcompute_f4_0_stencil_7() {
  float _367 = float_from_bits(0 /* 0 */);
  return _367;
}

//store is: f4.1.stencil(hw_output_s0_x_xi) = 0.000000f
hw_uint<32> hcompute_f4_1_stencil_7() {
  float _370 = float_from_bits(0 /* 0 */);
  return _370;
}

//store is: f3.0.stencil(0) = 0.000000f
hw_uint<32> hcompute_f3_0_stencil() {
  float _373 = float_from_bits(0 /* 0 */);
  return _373;
}

//store is: f3.1.stencil(0) = 0.000000f
hw_uint<32> hcompute_f3_1_stencil() {
  float _376 = float_from_bits(0 /* 0 */);
  return _376;
}

//store is: f3.0.stencil(1) = 0.000000f
hw_uint<32> hcompute_f3_0_stencil_1() {
  float _379 = float_from_bits(0 /* 0 */);
  return _379;
}

//store is: f3.1.stencil(1) = 0.000000f
hw_uint<32> hcompute_f3_1_stencil_1() {
  float _382 = float_from_bits(0 /* 0 */);
  return _382;
}

//store is: f3.0.stencil(2) = 0.000000f
hw_uint<32> hcompute_f3_0_stencil_2() {
  float _385 = float_from_bits(0 /* 0 */);
  return _385;
}

//store is: f3.1.stencil(2) = 0.000000f
hw_uint<32> hcompute_f3_1_stencil_2() {
  float _388 = float_from_bits(0 /* 0 */);
  return _388;
}

//store is: f3.0.stencil(3) = 0.000000f
hw_uint<32> hcompute_f3_0_stencil_3() {
  float _391 = float_from_bits(0 /* 0 */);
  return _391;
}

//store is: f3.1.stencil(3) = 0.000000f
hw_uint<32> hcompute_f3_1_stencil_3() {
  float _394 = float_from_bits(0 /* 0 */);
  return _394;
}

//store is: f3.0.stencil(4) = 0.000000f
hw_uint<32> hcompute_f3_0_stencil_4() {
  float _397 = float_from_bits(0 /* 0 */);
  return _397;
}

//store is: f3.1.stencil(4) = 0.000000f
hw_uint<32> hcompute_f3_1_stencil_4() {
  float _400 = float_from_bits(0 /* 0 */);
  return _400;
}

//store is: f3.0.stencil(5) = 0.000000f
hw_uint<32> hcompute_f3_0_stencil_5() {
  float _403 = float_from_bits(0 /* 0 */);
  return _403;
}

//store is: f3.1.stencil(5) = 0.000000f
hw_uint<32> hcompute_f3_1_stencil_5() {
  float _406 = float_from_bits(0 /* 0 */);
  return _406;
}

//store is: f3.0.stencil(6) = 0.000000f
hw_uint<32> hcompute_f3_0_stencil_6() {
  float _409 = float_from_bits(0 /* 0 */);
  return _409;
}

//store is: f3.1.stencil(6) = 0.000000f
hw_uint<32> hcompute_f3_1_stencil_6() {
  float _412 = float_from_bits(0 /* 0 */);
  return _412;
}

//store is: f3.0.stencil(7) = 0.000000f
hw_uint<32> hcompute_f3_0_stencil_7() {
  float _415 = float_from_bits(0 /* 0 */);
  return _415;
}

//store is: f3.1.stencil(7) = 0.000000f
hw_uint<32> hcompute_f3_1_stencil_7() {
  float _418 = float_from_bits(0 /* 0 */);
  return _418;
}

//store is: f2.0.stencil(0) = 0.000000f
hw_uint<32> hcompute_f2_0_stencil() {
  float _421 = float_from_bits(0 /* 0 */);
  return _421;
}

//store is: f2.1.stencil(0) = 0.000000f
hw_uint<32> hcompute_f2_1_stencil() {
  float _424 = float_from_bits(0 /* 0 */);
  return _424;
}

//store is: f2.0.stencil(1) = 0.000000f
hw_uint<32> hcompute_f2_0_stencil_1() {
  float _427 = float_from_bits(0 /* 0 */);
  return _427;
}

//store is: f2.1.stencil(1) = 0.000000f
hw_uint<32> hcompute_f2_1_stencil_1() {
  float _430 = float_from_bits(0 /* 0 */);
  return _430;
}

//store is: f2.0.stencil(2) = 0.000000f
hw_uint<32> hcompute_f2_0_stencil_2() {
  float _433 = float_from_bits(0 /* 0 */);
  return _433;
}

//store is: f2.1.stencil(2) = 0.000000f
hw_uint<32> hcompute_f2_1_stencil_2() {
  float _436 = float_from_bits(0 /* 0 */);
  return _436;
}

//store is: f2.0.stencil(3) = 0.000000f
hw_uint<32> hcompute_f2_0_stencil_3() {
  float _439 = float_from_bits(0 /* 0 */);
  return _439;
}

//store is: f2.1.stencil(3) = 0.000000f
hw_uint<32> hcompute_f2_1_stencil_3() {
  float _442 = float_from_bits(0 /* 0 */);
  return _442;
}

//store is: f2.0.stencil(4) = 0.000000f
hw_uint<32> hcompute_f2_0_stencil_4() {
  float _445 = float_from_bits(0 /* 0 */);
  return _445;
}

//store is: f2.1.stencil(4) = 0.000000f
hw_uint<32> hcompute_f2_1_stencil_4() {
  float _448 = float_from_bits(0 /* 0 */);
  return _448;
}

//store is: f2.0.stencil(5) = 0.000000f
hw_uint<32> hcompute_f2_0_stencil_5() {
  float _451 = float_from_bits(0 /* 0 */);
  return _451;
}

//store is: f2.1.stencil(5) = 0.000000f
hw_uint<32> hcompute_f2_1_stencil_5() {
  float _454 = float_from_bits(0 /* 0 */);
  return _454;
}

//store is: f2.0.stencil(6) = 0.000000f
hw_uint<32> hcompute_f2_0_stencil_6() {
  float _457 = float_from_bits(0 /* 0 */);
  return _457;
}

//store is: f2.1.stencil(6) = 0.000000f
hw_uint<32> hcompute_f2_1_stencil_6() {
  float _460 = float_from_bits(0 /* 0 */);
  return _460;
}

//store is: f2.0.stencil(7) = 0.000000f
hw_uint<32> hcompute_f2_0_stencil_7() {
  float _463 = float_from_bits(0 /* 0 */);
  return _463;
}

//store is: f2.1.stencil(7) = 0.000000f
hw_uint<32> hcompute_f2_1_stencil_7() {
  float _466 = float_from_bits(0 /* 0 */);
  return _466;
}

//store is: f1.0.stencil(0) = hw_input_global_wrapper.stencil(0, 0)
hw_uint<32> hcompute_f1_0_stencil(hw_uint<32>& hw_input_global_wrapper_stencil) {
  float _hw_input_global_wrapper_stencil_1 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();

  return _hw_input_global_wrapper_stencil_1;
}

//store is: f1.1.stencil(0) = hw_input_global_wrapper.stencil(0, 1)
hw_uint<32> hcompute_f1_1_stencil(hw_uint<32>& hw_input_global_wrapper_stencil) {
  float _hw_input_global_wrapper_stencil_2 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();

  return _hw_input_global_wrapper_stencil_2;
}

//store is: f1.0.stencil(1) = hw_input_global_wrapper.stencil(1, 0)
hw_uint<32> hcompute_f1_0_stencil_1(hw_uint<32>& hw_input_global_wrapper_stencil) {
  float _hw_input_global_wrapper_stencil_3 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();

  return _hw_input_global_wrapper_stencil_3;
}

//store is: f1.1.stencil(1) = hw_input_global_wrapper.stencil(1, 1)
hw_uint<32> hcompute_f1_1_stencil_1(hw_uint<32>& hw_input_global_wrapper_stencil) {
  float _hw_input_global_wrapper_stencil_4 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();

  return _hw_input_global_wrapper_stencil_4;
}

//store is: f1.0.stencil(2) = hw_input_global_wrapper.stencil(2, 0)
hw_uint<32> hcompute_f1_0_stencil_2(hw_uint<32>& hw_input_global_wrapper_stencil) {
  float _hw_input_global_wrapper_stencil_5 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();

  return _hw_input_global_wrapper_stencil_5;
}

//store is: f1.1.stencil(2) = hw_input_global_wrapper.stencil(2, 1)
hw_uint<32> hcompute_f1_1_stencil_2(hw_uint<32>& hw_input_global_wrapper_stencil) {
  float _hw_input_global_wrapper_stencil_6 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();

  return _hw_input_global_wrapper_stencil_6;
}

//store is: f1.0.stencil(3) = hw_input_global_wrapper.stencil(3, 0)
hw_uint<32> hcompute_f1_0_stencil_3(hw_uint<32>& hw_input_global_wrapper_stencil) {
  float _hw_input_global_wrapper_stencil_7 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();

  return _hw_input_global_wrapper_stencil_7;
}

//store is: f1.1.stencil(3) = hw_input_global_wrapper.stencil(3, 1)
hw_uint<32> hcompute_f1_1_stencil_3(hw_uint<32>& hw_input_global_wrapper_stencil) {
  float _hw_input_global_wrapper_stencil_8 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();

  return _hw_input_global_wrapper_stencil_8;
}

//store is: f1.0.stencil(4) = hw_input_global_wrapper.stencil(4, 0)
hw_uint<32> hcompute_f1_0_stencil_4(hw_uint<32>& hw_input_global_wrapper_stencil) {
  float _hw_input_global_wrapper_stencil_9 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();

  return _hw_input_global_wrapper_stencil_9;
}

//store is: f1.1.stencil(4) = hw_input_global_wrapper.stencil(4, 1)
hw_uint<32> hcompute_f1_1_stencil_4(hw_uint<32>& hw_input_global_wrapper_stencil) {
  float _hw_input_global_wrapper_stencil_10 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();

  return _hw_input_global_wrapper_stencil_10;
}

//store is: f1.0.stencil(5) = hw_input_global_wrapper.stencil(5, 0)
hw_uint<32> hcompute_f1_0_stencil_5(hw_uint<32>& hw_input_global_wrapper_stencil) {
  float _hw_input_global_wrapper_stencil_11 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();

  return _hw_input_global_wrapper_stencil_11;
}

//store is: f1.1.stencil(5) = hw_input_global_wrapper.stencil(5, 1)
hw_uint<32> hcompute_f1_1_stencil_5(hw_uint<32>& hw_input_global_wrapper_stencil) {
  float _hw_input_global_wrapper_stencil_12 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();

  return _hw_input_global_wrapper_stencil_12;
}

//store is: f1.0.stencil(6) = hw_input_global_wrapper.stencil(6, 0)
hw_uint<32> hcompute_f1_0_stencil_6(hw_uint<32>& hw_input_global_wrapper_stencil) {
  float _hw_input_global_wrapper_stencil_13 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();

  return _hw_input_global_wrapper_stencil_13;
}

//store is: f1.1.stencil(6) = hw_input_global_wrapper.stencil(6, 1)
hw_uint<32> hcompute_f1_1_stencil_6(hw_uint<32>& hw_input_global_wrapper_stencil) {
  float _hw_input_global_wrapper_stencil_14 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();

  return _hw_input_global_wrapper_stencil_14;
}

//store is: f1.0.stencil(7) = hw_input_global_wrapper.stencil(7, 0)
hw_uint<32> hcompute_f1_0_stencil_7(hw_uint<32>& hw_input_global_wrapper_stencil) {
  float _hw_input_global_wrapper_stencil_15 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();

  return _hw_input_global_wrapper_stencil_15;
}

//store is: f1.1.stencil(7) = hw_input_global_wrapper.stencil(7, 1)
hw_uint<32> hcompute_f1_1_stencil_7(hw_uint<32>& hw_input_global_wrapper_stencil) {
  float _hw_input_global_wrapper_stencil_16 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();

  return _hw_input_global_wrapper_stencil_16;
}

//store is: f1.0.stencil(f1_s1_t_x) = ((f1.0.stencil(f1_s1_t_x)*hw_twi_global_wrapper.stencil(f1_s1_t_x, 0, 0)) - (f1.1.stencil(f1_s1_t_x)*hw_twi_global_wrapper.stencil(f1_s1_t_x, 1, 0)))
hw_uint<32> hcompute_f1_0_stencil_8(hw_uint<32>& f1_0_stencil, hw_uint<32>& f1_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f1_0_stencil_1 = (float) f1_0_stencil.extract<0, 31>();

  float _f1_1_stencil_1 = (float) f1_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_1 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_2 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _485 = _f1_0_stencil_1 * _hw_twi_global_wrapper_stencil_1;
  float _486 = _f1_1_stencil_1 * _hw_twi_global_wrapper_stencil_2;
  float _487 = _485 - _486;
  return _487;
}

//store is: f1.1.stencil(f1_s1_t_x) = ((f1.0.stencil(f1_s1_t_x)*hw_twi_global_wrapper.stencil(f1_s1_t_x, 1, 0)) + (f1.1.stencil(f1_s1_t_x)*hw_twi_global_wrapper.stencil(f1_s1_t_x, 0, 0)))
hw_uint<32> hcompute_f1_1_stencil_8(hw_uint<32>& f1_0_stencil, hw_uint<32>& f1_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f1_0_stencil_2 = (float) f1_0_stencil.extract<0, 31>();

  float _f1_1_stencil_2 = (float) f1_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_3 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_4 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _498 = _f1_0_stencil_2 * _hw_twi_global_wrapper_stencil_3;
  float _499 = _f1_1_stencil_2 * _hw_twi_global_wrapper_stencil_4;
  float _500 = _498 + _499;
  return _500;
}

//store is: f2.0.stencil(f2_s1_t_x) = (f1.0.stencil((((f2_s1_t_x/2)*2) + ((f2_s1_t_x + 1) % 2))) + (f1.0.stencil(f2_s1_t_x)*float32((1 - ((f2_s1_t_x/(((f2_s1_t_x/2)*2) + 1))*2)))))
hw_uint<32> hcompute_f2_0_stencil_8(hw_uint<64>& f1_0_stencil, const int _f2_s1_t_x) {
  float _f1_0_stencil_3 = (float) f1_0_stencil.extract<0, 31>();
  float _f1_0_stencil_4 = (float) f1_0_stencil.extract<32, 63>();

  int32_t _511 = _f2_s1_t_x >> 1;
  int32_t _512 = _511 * 2;
  int32_t _513 = _512 + 1;
  int32_t _514 = _f2_s1_t_x / _513;
  int32_t _515 = _514 * _513;
  int32_t _516 = _f2_s1_t_x - _515;
  int32_t _517 = _516 >> 31;
  int32_t _518 = _513 >> 31;
  int32_t _519 = _517 & _518;
  int32_t _520 = _514 - _519;
  int32_t _521 = ~_518;
  int32_t _522 = _517 & _521;
  int32_t _523 = _520 + _522;
  int32_t _524 = _523 * 2;
  int32_t _525 = 1 - _524;
  float _526 = (float)(_525);
  float _527 = _f1_0_stencil_4 * _526;
  float _528 = _f1_0_stencil_3 + _527;
  return _528;
}

//store is: f2.1.stencil(f2_s1_t_x) = (f1.1.stencil((((f2_s1_t_x/2)*2) + ((f2_s1_t_x + 1) % 2))) + (f1.1.stencil(f2_s1_t_x)*float32((1 - ((f2_s1_t_x/(((f2_s1_t_x/2)*2) + 1))*2)))))
hw_uint<32> hcompute_f2_1_stencil_8(hw_uint<64>& f1_1_stencil, const int _f2_s1_t_x) {
  float _f1_1_stencil_3 = (float) f1_1_stencil.extract<0, 31>();
  float _f1_1_stencil_4 = (float) f1_1_stencil.extract<32, 63>();

  int32_t _562 = _f2_s1_t_x >> 1;
  int32_t _563 = _562 * 2;
  int32_t _564 = _563 + 1;
  int32_t _565 = _f2_s1_t_x / _564;
  int32_t _566 = _565 * _564;
  int32_t _567 = _f2_s1_t_x - _566;
  int32_t _568 = _567 >> 31;
  int32_t _569 = _564 >> 31;
  int32_t _570 = _568 & _569;
  int32_t _571 = _565 - _570;
  int32_t _572 = ~_569;
  int32_t _573 = _568 & _572;
  int32_t _574 = _571 + _573;
  int32_t _575 = _574 * 2;
  int32_t _576 = 1 - _575;
  float _577 = (float)(_576);
  float _578 = _f1_1_stencil_4 * _577;
  float _579 = _f1_1_stencil_3 + _578;
  return _579;
}

//store is: f2.0.stencil(f2_s2_t_x) = ((f2.0.stencil(f2_s2_t_x)*hw_twi_global_wrapper.stencil(f2_s2_t_x, 0, 1)) - (f2.1.stencil(f2_s2_t_x)*hw_twi_global_wrapper.stencil(f2_s2_t_x, 1, 1)))
hw_uint<32> hcompute_f2_0_stencil_9(hw_uint<32>& f2_0_stencil, hw_uint<32>& f2_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f2_0_stencil_1 = (float) f2_0_stencil.extract<0, 31>();

  float _f2_1_stencil_1 = (float) f2_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_5 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_6 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _613 = _f2_0_stencil_1 * _hw_twi_global_wrapper_stencil_5;
  float _614 = _f2_1_stencil_1 * _hw_twi_global_wrapper_stencil_6;
  float _615 = _613 - _614;
  return _615;
}

//store is: f2.1.stencil(f2_s2_t_x) = ((f2.0.stencil(f2_s2_t_x)*hw_twi_global_wrapper.stencil(f2_s2_t_x, 1, 1)) + (f2.1.stencil(f2_s2_t_x)*hw_twi_global_wrapper.stencil(f2_s2_t_x, 0, 1)))
hw_uint<32> hcompute_f2_1_stencil_9(hw_uint<32>& f2_0_stencil, hw_uint<32>& f2_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f2_0_stencil_2 = (float) f2_0_stencil.extract<0, 31>();

  float _f2_1_stencil_2 = (float) f2_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_7 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_8 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _626 = _f2_0_stencil_2 * _hw_twi_global_wrapper_stencil_7;
  float _627 = _f2_1_stencil_2 * _hw_twi_global_wrapper_stencil_8;
  float _628 = _626 + _627;
  return _628;
}

//store is: f3.0.stencil(f3_s1_t_x) = (f2.0.stencil((((f3_s1_t_x/4)*4) + ((f3_s1_t_x + 2) % 4))) + (f2.0.stencil(f3_s1_t_x)*float32((1 - ((f3_s1_t_x/(((f3_s1_t_x/4)*4) + 2))*2)))))
hw_uint<32> hcompute_f3_0_stencil_8(hw_uint<64>& f2_0_stencil, const int _f3_s1_t_x) {
  float _f2_0_stencil_3 = (float) f2_0_stencil.extract<0, 31>();
  float _f2_0_stencil_4 = (float) f2_0_stencil.extract<32, 63>();

  int32_t _639 = _f3_s1_t_x >> 2;
  int32_t _640 = _639 * 4;
  int32_t _641 = _640 + 2;
  int32_t _642 = _f3_s1_t_x / _641;
  int32_t _643 = _642 * _641;
  int32_t _644 = _f3_s1_t_x - _643;
  int32_t _645 = _644 >> 31;
  int32_t _646 = _641 >> 31;
  int32_t _647 = _645 & _646;
  int32_t _648 = _642 - _647;
  int32_t _649 = ~_646;
  int32_t _650 = _645 & _649;
  int32_t _651 = _648 + _650;
  int32_t _652 = _651 * 2;
  int32_t _653 = 1 - _652;
  float _654 = (float)(_653);
  float _655 = _f2_0_stencil_4 * _654;
  float _656 = _f2_0_stencil_3 + _655;
  return _656;
}

//store is: f3.1.stencil(f3_s1_t_x) = (f2.1.stencil((((f3_s1_t_x/4)*4) + ((f3_s1_t_x + 2) % 4))) + (f2.1.stencil(f3_s1_t_x)*float32((1 - ((f3_s1_t_x/(((f3_s1_t_x/4)*4) + 2))*2)))))
hw_uint<32> hcompute_f3_1_stencil_8(hw_uint<64>& f2_1_stencil, const int _f3_s1_t_x) {
  float _f2_1_stencil_3 = (float) f2_1_stencil.extract<0, 31>();
  float _f2_1_stencil_4 = (float) f2_1_stencil.extract<32, 63>();

  int32_t _690 = _f3_s1_t_x >> 2;
  int32_t _691 = _690 * 4;
  int32_t _692 = _691 + 2;
  int32_t _693 = _f3_s1_t_x / _692;
  int32_t _694 = _693 * _692;
  int32_t _695 = _f3_s1_t_x - _694;
  int32_t _696 = _695 >> 31;
  int32_t _697 = _692 >> 31;
  int32_t _698 = _696 & _697;
  int32_t _699 = _693 - _698;
  int32_t _700 = ~_697;
  int32_t _701 = _696 & _700;
  int32_t _702 = _699 + _701;
  int32_t _703 = _702 * 2;
  int32_t _704 = 1 - _703;
  float _705 = (float)(_704);
  float _706 = _f2_1_stencil_4 * _705;
  float _707 = _f2_1_stencil_3 + _706;
  return _707;
}

//store is: f3.0.stencil(f3_s2_t_x) = ((f3.0.stencil(f3_s2_t_x)*hw_twi_global_wrapper.stencil(f3_s2_t_x, 0, 2)) - (f3.1.stencil(f3_s2_t_x)*hw_twi_global_wrapper.stencil(f3_s2_t_x, 1, 2)))
hw_uint<32> hcompute_f3_0_stencil_9(hw_uint<32>& f3_0_stencil, hw_uint<32>& f3_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f3_0_stencil_1 = (float) f3_0_stencil.extract<0, 31>();

  float _f3_1_stencil_1 = (float) f3_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_10 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_9 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _741 = _f3_0_stencil_1 * _hw_twi_global_wrapper_stencil_9;
  float _742 = _f3_1_stencil_1 * _hw_twi_global_wrapper_stencil_10;
  float _743 = _741 - _742;
  return _743;
}

//store is: f3.1.stencil(f3_s2_t_x) = ((f3.0.stencil(f3_s2_t_x)*hw_twi_global_wrapper.stencil(f3_s2_t_x, 1, 2)) + (f3.1.stencil(f3_s2_t_x)*hw_twi_global_wrapper.stencil(f3_s2_t_x, 0, 2)))
hw_uint<32> hcompute_f3_1_stencil_9(hw_uint<32>& f3_0_stencil, hw_uint<32>& f3_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f3_0_stencil_2 = (float) f3_0_stencil.extract<0, 31>();

  float _f3_1_stencil_2 = (float) f3_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_11 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_12 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _754 = _f3_0_stencil_2 * _hw_twi_global_wrapper_stencil_11;
  float _755 = _f3_1_stencil_2 * _hw_twi_global_wrapper_stencil_12;
  float _756 = _754 + _755;
  return _756;
}

//store is: f4.0.stencil(f4_s1_t_x) = (f3.0.stencil(((f4_s1_t_x + 4) % 8)) + (f3.0.stencil(f4_s1_t_x)*float32((1 - ((f4_s1_t_x/4)*2)))))
hw_uint<32> hcompute_f4_0_stencil_8(hw_uint<64>& f3_0_stencil, const int _f4_s1_t_x) {
  float _f3_0_stencil_3 = (float) f3_0_stencil.extract<0, 31>();
  float _f3_0_stencil_4 = (float) f3_0_stencil.extract<32, 63>();

  int32_t _767 = _f4_s1_t_x >> 2;
  int32_t _768 = _767 * 2;
  int32_t _769 = 1 - _768;
  float _770 = (float)(_769);
  float _771 = _f3_0_stencil_4 * _770;
  float _772 = _f3_0_stencil_3 + _771;
  return _772;
}

//store is: f4.1.stencil(f4_s1_t_x) = (f3.1.stencil(((f4_s1_t_x + 4) % 8)) + (f3.1.stencil(f4_s1_t_x)*float32((1 - ((f4_s1_t_x/4)*2)))))
hw_uint<32> hcompute_f4_1_stencil_8(hw_uint<64>& f3_1_stencil, const int _f4_s1_t_x) {
  float _f3_1_stencil_3 = (float) f3_1_stencil.extract<0, 31>();
  float _f3_1_stencil_4 = (float) f3_1_stencil.extract<32, 63>();

  int32_t _790 = _f4_s1_t_x >> 2;
  int32_t _791 = _790 * 2;
  int32_t _792 = 1 - _791;
  float _793 = (float)(_792);
  float _794 = _f3_1_stencil_4 * _793;
  float _795 = _f3_1_stencil_3 + _794;
  return _795;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = select((hw_output_s0_y_yi == 0), f4.0.stencil(hw_output_s0_x_xi), f4.1.stencil(hw_output_s0_x_xi))
hw_uint<32> hcompute_hw_output_stencil(hw_uint<32>& f4_0_stencil, hw_uint<32>& f4_1_stencil, const int _hw_output_s0_y_yi) {
  float _f4_0_stencil_1 = (float) f4_0_stencil.extract<0, 31>();

  float _f4_1_stencil_1 = (float) f4_1_stencil.extract<0, 31>();

  bool _813 = _hw_output_s0_y_yi == 0;
  float _814 = (float)(_813 ? _f4_0_stencil_1 : _f4_1_stencil_1);
  return _814;
}

