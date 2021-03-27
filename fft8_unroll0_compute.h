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

//store is: f1.0.stencil(f1_s0_x, f1_s0_y) = 0.000000f
hw_uint<32> hcompute_f1_0_stencil() {
  float _311 = float_from_bits(0 /* 0 */);
  return _311;
}

//store is: f1.1.stencil(f1_s0_x, f1_s0_y) = 0.000000f
hw_uint<32> hcompute_f1_1_stencil() {
  float _314 = float_from_bits(0 /* 0 */);
  return _314;
}

//store is: f1.0.stencil(f1_s1_x, 0) = hw_input_global_wrapper.stencil(f1_s1_x, 0)
hw_uint<32> hcompute_f1_0_stencil_1(hw_uint<32>& hw_input_global_wrapper_stencil) {
  float _hw_input_global_wrapper_stencil_1 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();

  return _hw_input_global_wrapper_stencil_1;
}

//store is: f1.1.stencil(f1_s1_x, 0) = hw_input_global_wrapper.stencil(f1_s1_x, 1)
hw_uint<32> hcompute_f1_1_stencil_1(hw_uint<32>& hw_input_global_wrapper_stencil) {
  float _hw_input_global_wrapper_stencil_2 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();

  return _hw_input_global_wrapper_stencil_2;
}

//store is: f1.0.stencil(f1_s2_t_x, 0) = ((f1.0.stencil(f1_s2_t_x, 0)*hw_twi_global_wrapper.stencil(f1_s2_t_x, 0, 0)) - (f1.1.stencil(f1_s2_t_x, 0)*hw_twi_global_wrapper.stencil(f1_s2_t_x, 1, 0)))
hw_uint<32> hcompute_f1_0_stencil_2(hw_uint<32>& f1_0_stencil, hw_uint<32>& f1_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f1_0_stencil_1 = (float) f1_0_stencil.extract<0, 31>();

  float _f1_1_stencil_1 = (float) f1_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_1 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_2 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _319 = _f1_0_stencil_1 * _hw_twi_global_wrapper_stencil_1;
  float _320 = _f1_1_stencil_1 * _hw_twi_global_wrapper_stencil_2;
  float _321 = _319 - _320;
  return _321;
}

//store is: f1.1.stencil(f1_s2_t_x, 0) = ((f1.0.stencil(f1_s2_t_x, 0)*hw_twi_global_wrapper.stencil(f1_s2_t_x, 1, 0)) + (f1.1.stencil(f1_s2_t_x, 0)*hw_twi_global_wrapper.stencil(f1_s2_t_x, 0, 0)))
hw_uint<32> hcompute_f1_1_stencil_2(hw_uint<32>& f1_0_stencil, hw_uint<32>& f1_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f1_0_stencil_2 = (float) f1_0_stencil.extract<0, 31>();

  float _f1_1_stencil_2 = (float) f1_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_3 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_4 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _332 = _f1_0_stencil_2 * _hw_twi_global_wrapper_stencil_3;
  float _333 = _f1_1_stencil_2 * _hw_twi_global_wrapper_stencil_4;
  float _334 = _332 + _333;
  return _334;
}

//store is: f1.0.stencil(f1_s3_t_x, 1) = (f1.0.stencil((((f1_s3_t_x/2)*2) + ((f1_s3_t_x + 1) % 2)), 0) + (f1.0.stencil(f1_s3_t_x, 0)*float32((1 - ((f1_s3_t_x/(((f1_s3_t_x/2)*2) + 1))*2)))))
hw_uint<32> hcompute_f1_0_stencil_3(hw_uint<64>& f1_0_stencil, const int _f1_s3_t_x) {
  float _f1_0_stencil_3 = (float) f1_0_stencil.extract<0, 31>();
  float _f1_0_stencil_4 = (float) f1_0_stencil.extract<32, 63>();

  int32_t _345 = _f1_s3_t_x >> 1;
  int32_t _346 = _345 * 2;
  int32_t _347 = _346 + 1;
  int32_t _348 = _f1_s3_t_x / _347;
  int32_t _349 = _348 * _347;
  int32_t _350 = _f1_s3_t_x - _349;
  int32_t _351 = _350 >> 31;
  int32_t _352 = _347 >> 31;
  int32_t _353 = _351 & _352;
  int32_t _354 = _348 - _353;
  int32_t _355 = ~_352;
  int32_t _356 = _351 & _355;
  int32_t _357 = _354 + _356;
  int32_t _358 = _357 * 2;
  int32_t _359 = 1 - _358;
  float _360 = (float)(_359);
  float _361 = _f1_0_stencil_4 * _360;
  float _362 = _f1_0_stencil_3 + _361;
  return _362;
}

//store is: f1.1.stencil(f1_s3_t_x, 1) = (f1.1.stencil((((f1_s3_t_x/2)*2) + ((f1_s3_t_x + 1) % 2)), 0) + (f1.1.stencil(f1_s3_t_x, 0)*float32((1 - ((f1_s3_t_x/(((f1_s3_t_x/2)*2) + 1))*2)))))
hw_uint<32> hcompute_f1_1_stencil_3(hw_uint<64>& f1_1_stencil, const int _f1_s3_t_x) {
  float _f1_1_stencil_3 = (float) f1_1_stencil.extract<0, 31>();
  float _f1_1_stencil_4 = (float) f1_1_stencil.extract<32, 63>();

  int32_t _396 = _f1_s3_t_x >> 1;
  int32_t _397 = _396 * 2;
  int32_t _398 = _397 + 1;
  int32_t _399 = _f1_s3_t_x / _398;
  int32_t _400 = _399 * _398;
  int32_t _401 = _f1_s3_t_x - _400;
  int32_t _402 = _401 >> 31;
  int32_t _403 = _398 >> 31;
  int32_t _404 = _402 & _403;
  int32_t _405 = _399 - _404;
  int32_t _406 = ~_403;
  int32_t _407 = _402 & _406;
  int32_t _408 = _405 + _407;
  int32_t _409 = _408 * 2;
  int32_t _410 = 1 - _409;
  float _411 = (float)(_410);
  float _412 = _f1_1_stencil_4 * _411;
  float _413 = _f1_1_stencil_3 + _412;
  return _413;
}

//store is: f1.0.stencil(f1_s4_t_x, 1) = ((f1.0.stencil(f1_s4_t_x, 1)*hw_twi_global_wrapper.stencil(f1_s4_t_x, 0, 1)) - (f1.1.stencil(f1_s4_t_x, 1)*hw_twi_global_wrapper.stencil(f1_s4_t_x, 1, 1)))
hw_uint<32> hcompute_f1_0_stencil_4(hw_uint<32>& f1_0_stencil, hw_uint<32>& f1_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f1_0_stencil_5 = (float) f1_0_stencil.extract<0, 31>();

  float _f1_1_stencil_5 = (float) f1_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_5 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_6 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _447 = _f1_0_stencil_5 * _hw_twi_global_wrapper_stencil_5;
  float _448 = _f1_1_stencil_5 * _hw_twi_global_wrapper_stencil_6;
  float _449 = _447 - _448;
  return _449;
}

//store is: f1.1.stencil(f1_s4_t_x, 1) = ((f1.0.stencil(f1_s4_t_x, 1)*hw_twi_global_wrapper.stencil(f1_s4_t_x, 1, 1)) + (f1.1.stencil(f1_s4_t_x, 1)*hw_twi_global_wrapper.stencil(f1_s4_t_x, 0, 1)))
hw_uint<32> hcompute_f1_1_stencil_4(hw_uint<32>& f1_0_stencil, hw_uint<32>& f1_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f1_0_stencil_6 = (float) f1_0_stencil.extract<0, 31>();

  float _f1_1_stencil_6 = (float) f1_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_7 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_8 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _460 = _f1_0_stencil_6 * _hw_twi_global_wrapper_stencil_7;
  float _461 = _f1_1_stencil_6 * _hw_twi_global_wrapper_stencil_8;
  float _462 = _460 + _461;
  return _462;
}

//store is: f1.0.stencil(f1_s5_t_x, 2) = (f1.0.stencil((((f1_s5_t_x/4)*4) + ((f1_s5_t_x + 2) % 4)), 1) + (f1.0.stencil(f1_s5_t_x, 1)*float32((1 - ((f1_s5_t_x/(((f1_s5_t_x/4)*4) + 2))*2)))))
hw_uint<32> hcompute_f1_0_stencil_5(hw_uint<64>& f1_0_stencil, const int _f1_s5_t_x) {
  float _f1_0_stencil_7 = (float) f1_0_stencil.extract<0, 31>();
  float _f1_0_stencil_8 = (float) f1_0_stencil.extract<32, 63>();

  int32_t _473 = _f1_s5_t_x >> 2;
  int32_t _474 = _473 * 4;
  int32_t _475 = _474 + 2;
  int32_t _476 = _f1_s5_t_x / _475;
  int32_t _477 = _476 * _475;
  int32_t _478 = _f1_s5_t_x - _477;
  int32_t _479 = _478 >> 31;
  int32_t _480 = _475 >> 31;
  int32_t _481 = _479 & _480;
  int32_t _482 = _476 - _481;
  int32_t _483 = ~_480;
  int32_t _484 = _479 & _483;
  int32_t _485 = _482 + _484;
  int32_t _486 = _485 * 2;
  int32_t _487 = 1 - _486;
  float _488 = (float)(_487);
  float _489 = _f1_0_stencil_8 * _488;
  float _490 = _f1_0_stencil_7 + _489;
  return _490;
}

//store is: f1.1.stencil(f1_s5_t_x, 2) = (f1.1.stencil((((f1_s5_t_x/4)*4) + ((f1_s5_t_x + 2) % 4)), 1) + (f1.1.stencil(f1_s5_t_x, 1)*float32((1 - ((f1_s5_t_x/(((f1_s5_t_x/4)*4) + 2))*2)))))
hw_uint<32> hcompute_f1_1_stencil_5(hw_uint<64>& f1_1_stencil, const int _f1_s5_t_x) {
  float _f1_1_stencil_7 = (float) f1_1_stencil.extract<0, 31>();
  float _f1_1_stencil_8 = (float) f1_1_stencil.extract<32, 63>();

  int32_t _524 = _f1_s5_t_x >> 2;
  int32_t _525 = _524 * 4;
  int32_t _526 = _525 + 2;
  int32_t _527 = _f1_s5_t_x / _526;
  int32_t _528 = _527 * _526;
  int32_t _529 = _f1_s5_t_x - _528;
  int32_t _530 = _529 >> 31;
  int32_t _531 = _526 >> 31;
  int32_t _532 = _530 & _531;
  int32_t _533 = _527 - _532;
  int32_t _534 = ~_531;
  int32_t _535 = _530 & _534;
  int32_t _536 = _533 + _535;
  int32_t _537 = _536 * 2;
  int32_t _538 = 1 - _537;
  float _539 = (float)(_538);
  float _540 = _f1_1_stencil_8 * _539;
  float _541 = _f1_1_stencil_7 + _540;
  return _541;
}

//store is: f1.0.stencil(f1_s6_t_x, 2) = ((f1.0.stencil(f1_s6_t_x, 2)*hw_twi_global_wrapper.stencil(f1_s6_t_x, 0, 2)) - (f1.1.stencil(f1_s6_t_x, 2)*hw_twi_global_wrapper.stencil(f1_s6_t_x, 1, 2)))
hw_uint<32> hcompute_f1_0_stencil_6(hw_uint<32>& f1_0_stencil, hw_uint<32>& f1_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f1_0_stencil_9 = (float) f1_0_stencil.extract<0, 31>();

  float _f1_1_stencil_9 = (float) f1_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_10 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_9 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _575 = _f1_0_stencil_9 * _hw_twi_global_wrapper_stencil_9;
  float _576 = _f1_1_stencil_9 * _hw_twi_global_wrapper_stencil_10;
  float _577 = _575 - _576;
  return _577;
}

//store is: f1.1.stencil(f1_s6_t_x, 2) = ((f1.0.stencil(f1_s6_t_x, 2)*hw_twi_global_wrapper.stencil(f1_s6_t_x, 1, 2)) + (f1.1.stencil(f1_s6_t_x, 2)*hw_twi_global_wrapper.stencil(f1_s6_t_x, 0, 2)))
hw_uint<32> hcompute_f1_1_stencil_6(hw_uint<32>& f1_0_stencil, hw_uint<32>& f1_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f1_0_stencil_10 = (float) f1_0_stencil.extract<0, 31>();

  float _f1_1_stencil_10 = (float) f1_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_11 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_12 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _588 = _f1_0_stencil_10 * _hw_twi_global_wrapper_stencil_11;
  float _589 = _f1_1_stencil_10 * _hw_twi_global_wrapper_stencil_12;
  float _590 = _588 + _589;
  return _590;
}

//store is: f1.0.stencil(f1_s7_t_x, 3) = (f1.0.stencil(((f1_s7_t_x + 4) % 8), 2) + (f1.0.stencil(f1_s7_t_x, 2)*float32((1 - ((f1_s7_t_x/4)*2)))))
hw_uint<32> hcompute_f1_0_stencil_7(hw_uint<64>& f1_0_stencil, const int _f1_s7_t_x) {
  float _f1_0_stencil_11 = (float) f1_0_stencil.extract<0, 31>();
  float _f1_0_stencil_12 = (float) f1_0_stencil.extract<32, 63>();

  int32_t _601 = _f1_s7_t_x >> 2;
  int32_t _602 = _601 * 2;
  int32_t _603 = 1 - _602;
  float _604 = (float)(_603);
  float _605 = _f1_0_stencil_12 * _604;
  float _606 = _f1_0_stencil_11 + _605;
  return _606;
}

//store is: f1.1.stencil(f1_s7_t_x, 3) = (f1.1.stencil(((f1_s7_t_x + 4) % 8), 2) + (f1.1.stencil(f1_s7_t_x, 2)*float32((1 - ((f1_s7_t_x/4)*2)))))
hw_uint<32> hcompute_f1_1_stencil_7(hw_uint<64>& f1_1_stencil, const int _f1_s7_t_x) {
  float _f1_1_stencil_11 = (float) f1_1_stencil.extract<0, 31>();
  float _f1_1_stencil_12 = (float) f1_1_stencil.extract<32, 63>();

  int32_t _624 = _f1_s7_t_x >> 2;
  int32_t _625 = _624 * 2;
  int32_t _626 = 1 - _625;
  float _627 = (float)(_626);
  float _628 = _f1_1_stencil_12 * _627;
  float _629 = _f1_1_stencil_11 + _628;
  return _629;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = select((hw_output_s0_y_yi == 0), f1.0.stencil(hw_output_s0_x_xi, 3), f1.1.stencil(hw_output_s0_x_xi, 3))
hw_uint<32> hcompute_hw_output_stencil(hw_uint<32>& f1_0_stencil, hw_uint<32>& f1_1_stencil, const int _hw_output_s0_y_yi) {
  float _f1_0_stencil_13 = (float) f1_0_stencil.extract<0, 31>();

  float _f1_1_stencil_13 = (float) f1_1_stencil.extract<0, 31>();

  bool _647 = _hw_output_s0_y_yi == 0;
  float _648 = (float)(_647 ? _f1_0_stencil_13 : _f1_1_stencil_13);
  return _648;
}

