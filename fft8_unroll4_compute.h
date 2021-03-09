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

//store is: f1.0.stencil((f1_s0_x_x*4), f1_s0_y) = 0.000000f
hw_uint<32> hcompute_f1_0_stencil() {
  float _311 = float_from_bits(0 /* 0 */);
  return _311;
}

//store is: f1.1.stencil((f1_s0_x_x*4), f1_s0_y) = 0.000000f
hw_uint<32> hcompute_f1_1_stencil() {
  float _315 = float_from_bits(0 /* 0 */);
  return _315;
}

//store is: f1.0.stencil(((f1_s0_x_x*4) + 1), f1_s0_y) = 0.000000f
hw_uint<32> hcompute_f1_0_stencil_1() {
  float _319 = float_from_bits(0 /* 0 */);
  return _319;
}

//store is: f1.1.stencil(((f1_s0_x_x*4) + 1), f1_s0_y) = 0.000000f
hw_uint<32> hcompute_f1_1_stencil_1() {
  float _324 = float_from_bits(0 /* 0 */);
  return _324;
}

//store is: f1.0.stencil(((f1_s0_x_x*4) + 2), f1_s0_y) = 0.000000f
hw_uint<32> hcompute_f1_0_stencil_2() {
  float _329 = float_from_bits(0 /* 0 */);
  return _329;
}

//store is: f1.1.stencil(((f1_s0_x_x*4) + 2), f1_s0_y) = 0.000000f
hw_uint<32> hcompute_f1_1_stencil_2() {
  float _334 = float_from_bits(0 /* 0 */);
  return _334;
}

//store is: f1.0.stencil(((f1_s0_x_x*4) + 3), f1_s0_y) = 0.000000f
hw_uint<32> hcompute_f1_0_stencil_3() {
  float _339 = float_from_bits(0 /* 0 */);
  return _339;
}

//store is: f1.1.stencil(((f1_s0_x_x*4) + 3), f1_s0_y) = 0.000000f
hw_uint<32> hcompute_f1_1_stencil_3() {
  float _344 = float_from_bits(0 /* 0 */);
  return _344;
}

//store is: f1.0.stencil(f1_s1_x, 0) = hw_input_global_wrapper.stencil(f1_s1_x, 0)
hw_uint<32> hcompute_f1_0_stencil_4(hw_uint<32>& hw_input_global_wrapper_stencil) {
  float _hw_input_global_wrapper_stencil_1 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();

  return _hw_input_global_wrapper_stencil_1;
}

//store is: f1.1.stencil(f1_s1_x, 0) = hw_input_global_wrapper.stencil(f1_s1_x, 1)
hw_uint<32> hcompute_f1_1_stencil_4(hw_uint<32>& hw_input_global_wrapper_stencil) {
  float _hw_input_global_wrapper_stencil_2 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();

  return _hw_input_global_wrapper_stencil_2;
}

//store is: f1.0.stencil(f1_s2_t_x, 0) = ((f1.0.stencil(f1_s2_t_x, 0)*hw_twi_global_wrapper.stencil(f1_s2_t_x, 0, 0)) - (f1.1.stencil(f1_s2_t_x, 0)*hw_twi_global_wrapper.stencil(f1_s2_t_x, 1, 0)))
hw_uint<32> hcompute_f1_0_stencil_5(hw_uint<32>& f1_0_stencil, hw_uint<32>& f1_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f1_0_stencil_1 = (float) f1_0_stencil.extract<0, 31>();

  float _f1_1_stencil_1 = (float) f1_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_1 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_2 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _351 = _f1_0_stencil_1 * _hw_twi_global_wrapper_stencil_1;
  float _352 = _f1_1_stencil_1 * _hw_twi_global_wrapper_stencil_2;
  float _353 = _351 - _352;
  return _353;
}

//store is: f1.1.stencil(f1_s2_t_x, 0) = ((f1.0.stencil(f1_s2_t_x, 0)*hw_twi_global_wrapper.stencil(f1_s2_t_x, 1, 0)) + (f1.1.stencil(f1_s2_t_x, 0)*hw_twi_global_wrapper.stencil(f1_s2_t_x, 0, 0)))
hw_uint<32> hcompute_f1_1_stencil_5(hw_uint<32>& f1_0_stencil, hw_uint<32>& f1_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f1_0_stencil_2 = (float) f1_0_stencil.extract<0, 31>();

  float _f1_1_stencil_2 = (float) f1_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_3 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_4 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _364 = _f1_0_stencil_2 * _hw_twi_global_wrapper_stencil_3;
  float _365 = _f1_1_stencil_2 * _hw_twi_global_wrapper_stencil_4;
  float _366 = _364 + _365;
  return _366;
}

//store is: f1.0.stencil(f1_s3_t_x, 1) = (f1.0.stencil((((f1_s3_t_x/2)*2) + ((f1_s3_t_x + 1) % 2)), 0) + (f1.0.stencil(f1_s3_t_x, 0)*float32((1 - ((f1_s3_t_x/(((f1_s3_t_x/2)*2) + 1))*2)))))
hw_uint<32> hcompute_f1_0_stencil_6(hw_uint<64>& f1_0_stencil, const int _f1_s3_t_x) {
  float _f1_0_stencil_3 = (float) f1_0_stencil.extract<0, 31>();
  float _f1_0_stencil_4 = (float) f1_0_stencil.extract<32, 63>();

  int32_t _377 = _f1_s3_t_x >> 1;
  int32_t _378 = _377 * 2;
  int32_t _379 = _378 + 1;
  int32_t _380 = _f1_s3_t_x / _379;
  int32_t _381 = _380 * _379;
  int32_t _382 = _f1_s3_t_x - _381;
  int32_t _383 = _382 >> 31;
  int32_t _384 = _379 >> 31;
  int32_t _385 = _383 & _384;
  int32_t _386 = _380 - _385;
  int32_t _387 = ~_384;
  int32_t _388 = _383 & _387;
  int32_t _389 = _386 + _388;
  int32_t _390 = _389 * 2;
  int32_t _391 = 1 - _390;
  float _392 = (float)(_391);
  float _393 = _f1_0_stencil_4 * _392;
  float _394 = _f1_0_stencil_3 + _393;
  return _394;
}

//store is: f1.1.stencil(f1_s3_t_x, 1) = (f1.1.stencil((((f1_s3_t_x/2)*2) + ((f1_s3_t_x + 1) % 2)), 0) + (f1.1.stencil(f1_s3_t_x, 0)*float32((1 - ((f1_s3_t_x/(((f1_s3_t_x/2)*2) + 1))*2)))))
hw_uint<32> hcompute_f1_1_stencil_6(hw_uint<64>& f1_1_stencil, const int _f1_s3_t_x) {
  float _f1_1_stencil_3 = (float) f1_1_stencil.extract<0, 31>();
  float _f1_1_stencil_4 = (float) f1_1_stencil.extract<32, 63>();

  int32_t _428 = _f1_s3_t_x >> 1;
  int32_t _429 = _428 * 2;
  int32_t _430 = _429 + 1;
  int32_t _431 = _f1_s3_t_x / _430;
  int32_t _432 = _431 * _430;
  int32_t _433 = _f1_s3_t_x - _432;
  int32_t _434 = _433 >> 31;
  int32_t _435 = _430 >> 31;
  int32_t _436 = _434 & _435;
  int32_t _437 = _431 - _436;
  int32_t _438 = ~_435;
  int32_t _439 = _434 & _438;
  int32_t _440 = _437 + _439;
  int32_t _441 = _440 * 2;
  int32_t _442 = 1 - _441;
  float _443 = (float)(_442);
  float _444 = _f1_1_stencil_4 * _443;
  float _445 = _f1_1_stencil_3 + _444;
  return _445;
}

//store is: f1.0.stencil(f1_s4_t_x, 1) = ((f1.0.stencil(f1_s4_t_x, 1)*hw_twi_global_wrapper.stencil(f1_s4_t_x, 0, 1)) - (f1.1.stencil(f1_s4_t_x, 1)*hw_twi_global_wrapper.stencil(f1_s4_t_x, 1, 1)))
hw_uint<32> hcompute_f1_0_stencil_7(hw_uint<32>& f1_0_stencil, hw_uint<32>& f1_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f1_0_stencil_5 = (float) f1_0_stencil.extract<0, 31>();

  float _f1_1_stencil_5 = (float) f1_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_5 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_6 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _479 = _f1_0_stencil_5 * _hw_twi_global_wrapper_stencil_5;
  float _480 = _f1_1_stencil_5 * _hw_twi_global_wrapper_stencil_6;
  float _481 = _479 - _480;
  return _481;
}

//store is: f1.1.stencil(f1_s4_t_x, 1) = ((f1.0.stencil(f1_s4_t_x, 1)*hw_twi_global_wrapper.stencil(f1_s4_t_x, 1, 1)) + (f1.1.stencil(f1_s4_t_x, 1)*hw_twi_global_wrapper.stencil(f1_s4_t_x, 0, 1)))
hw_uint<32> hcompute_f1_1_stencil_7(hw_uint<32>& f1_0_stencil, hw_uint<32>& f1_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f1_0_stencil_6 = (float) f1_0_stencil.extract<0, 31>();

  float _f1_1_stencil_6 = (float) f1_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_7 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_8 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _492 = _f1_0_stencil_6 * _hw_twi_global_wrapper_stencil_7;
  float _493 = _f1_1_stencil_6 * _hw_twi_global_wrapper_stencil_8;
  float _494 = _492 + _493;
  return _494;
}

//store is: f1.0.stencil(f1_s5_t_x, 2) = (f1.0.stencil((((f1_s5_t_x/4)*4) + ((f1_s5_t_x + 2) % 4)), 1) + (f1.0.stencil(f1_s5_t_x, 1)*float32((1 - ((f1_s5_t_x/(((f1_s5_t_x/4)*4) + 2))*2)))))
hw_uint<32> hcompute_f1_0_stencil_8(hw_uint<64>& f1_0_stencil, const int _f1_s5_t_x) {
  float _f1_0_stencil_7 = (float) f1_0_stencil.extract<0, 31>();
  float _f1_0_stencil_8 = (float) f1_0_stencil.extract<32, 63>();

  int32_t _505 = _f1_s5_t_x >> 2;
  int32_t _506 = _505 * 4;
  int32_t _507 = _506 + 2;
  int32_t _508 = _f1_s5_t_x / _507;
  int32_t _509 = _508 * _507;
  int32_t _510 = _f1_s5_t_x - _509;
  int32_t _511 = _510 >> 31;
  int32_t _512 = _507 >> 31;
  int32_t _513 = _511 & _512;
  int32_t _514 = _508 - _513;
  int32_t _515 = ~_512;
  int32_t _516 = _511 & _515;
  int32_t _517 = _514 + _516;
  int32_t _518 = _517 * 2;
  int32_t _519 = 1 - _518;
  float _520 = (float)(_519);
  float _521 = _f1_0_stencil_8 * _520;
  float _522 = _f1_0_stencil_7 + _521;
  return _522;
}

//store is: f1.1.stencil(f1_s5_t_x, 2) = (f1.1.stencil((((f1_s5_t_x/4)*4) + ((f1_s5_t_x + 2) % 4)), 1) + (f1.1.stencil(f1_s5_t_x, 1)*float32((1 - ((f1_s5_t_x/(((f1_s5_t_x/4)*4) + 2))*2)))))
hw_uint<32> hcompute_f1_1_stencil_8(hw_uint<64>& f1_1_stencil, const int _f1_s5_t_x) {
  float _f1_1_stencil_7 = (float) f1_1_stencil.extract<0, 31>();
  float _f1_1_stencil_8 = (float) f1_1_stencil.extract<32, 63>();

  int32_t _556 = _f1_s5_t_x >> 2;
  int32_t _557 = _556 * 4;
  int32_t _558 = _557 + 2;
  int32_t _559 = _f1_s5_t_x / _558;
  int32_t _560 = _559 * _558;
  int32_t _561 = _f1_s5_t_x - _560;
  int32_t _562 = _561 >> 31;
  int32_t _563 = _558 >> 31;
  int32_t _564 = _562 & _563;
  int32_t _565 = _559 - _564;
  int32_t _566 = ~_563;
  int32_t _567 = _562 & _566;
  int32_t _568 = _565 + _567;
  int32_t _569 = _568 * 2;
  int32_t _570 = 1 - _569;
  float _571 = (float)(_570);
  float _572 = _f1_1_stencil_8 * _571;
  float _573 = _f1_1_stencil_7 + _572;
  return _573;
}

//store is: f1.0.stencil(f1_s6_t_x, 2) = ((f1.0.stencil(f1_s6_t_x, 2)*hw_twi_global_wrapper.stencil(f1_s6_t_x, 0, 2)) - (f1.1.stencil(f1_s6_t_x, 2)*hw_twi_global_wrapper.stencil(f1_s6_t_x, 1, 2)))
hw_uint<32> hcompute_f1_0_stencil_9(hw_uint<32>& f1_0_stencil, hw_uint<32>& f1_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f1_0_stencil_9 = (float) f1_0_stencil.extract<0, 31>();

  float _f1_1_stencil_9 = (float) f1_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_10 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_9 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _607 = _f1_0_stencil_9 * _hw_twi_global_wrapper_stencil_9;
  float _608 = _f1_1_stencil_9 * _hw_twi_global_wrapper_stencil_10;
  float _609 = _607 - _608;
  return _609;
}

//store is: f1.1.stencil(f1_s6_t_x, 2) = ((f1.0.stencil(f1_s6_t_x, 2)*hw_twi_global_wrapper.stencil(f1_s6_t_x, 1, 2)) + (f1.1.stencil(f1_s6_t_x, 2)*hw_twi_global_wrapper.stencil(f1_s6_t_x, 0, 2)))
hw_uint<32> hcompute_f1_1_stencil_9(hw_uint<32>& f1_0_stencil, hw_uint<32>& f1_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f1_0_stencil_10 = (float) f1_0_stencil.extract<0, 31>();

  float _f1_1_stencil_10 = (float) f1_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_11 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_12 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _620 = _f1_0_stencil_10 * _hw_twi_global_wrapper_stencil_11;
  float _621 = _f1_1_stencil_10 * _hw_twi_global_wrapper_stencil_12;
  float _622 = _620 + _621;
  return _622;
}

//store is: f1.0.stencil(f1_s7_t_x, 3) = (f1.0.stencil(((f1_s7_t_x + 4) % 8), 2) + (f1.0.stencil(f1_s7_t_x, 2)*float32((1 - ((f1_s7_t_x/4)*2)))))
hw_uint<32> hcompute_f1_0_stencil_10(hw_uint<64>& f1_0_stencil, const int _f1_s7_t_x) {
  float _f1_0_stencil_11 = (float) f1_0_stencil.extract<0, 31>();
  float _f1_0_stencil_12 = (float) f1_0_stencil.extract<32, 63>();

  int32_t _633 = _f1_s7_t_x >> 2;
  int32_t _634 = _633 * 2;
  int32_t _635 = 1 - _634;
  float _636 = (float)(_635);
  float _637 = _f1_0_stencil_12 * _636;
  float _638 = _f1_0_stencil_11 + _637;
  return _638;
}

//store is: f1.1.stencil(f1_s7_t_x, 3) = (f1.1.stencil(((f1_s7_t_x + 4) % 8), 2) + (f1.1.stencil(f1_s7_t_x, 2)*float32((1 - ((f1_s7_t_x/4)*2)))))
hw_uint<32> hcompute_f1_1_stencil_10(hw_uint<64>& f1_1_stencil, const int _f1_s7_t_x) {
  float _f1_1_stencil_11 = (float) f1_1_stencil.extract<0, 31>();
  float _f1_1_stencil_12 = (float) f1_1_stencil.extract<32, 63>();

  int32_t _656 = _f1_s7_t_x >> 2;
  int32_t _657 = _656 * 2;
  int32_t _658 = 1 - _657;
  float _659 = (float)(_658);
  float _660 = _f1_1_stencil_12 * _659;
  float _661 = _f1_1_stencil_11 + _660;
  return _661;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = select((hw_output_s0_y_yi == 0), f1.0.stencil(hw_output_s0_x_xi, 3), f1.1.stencil(hw_output_s0_x_xi, 3))
hw_uint<32> hcompute_hw_output_stencil(hw_uint<32>& f1_0_stencil, hw_uint<32>& f1_1_stencil, const int _hw_output_s0_y_yi) {
  float _f1_0_stencil_13 = (float) f1_0_stencil.extract<0, 31>();

  float _f1_1_stencil_13 = (float) f1_1_stencil.extract<0, 31>();

  bool _679 = _hw_output_s0_y_yi == 0;
  float _680 = (float)(_679 ? _f1_0_stencil_13 : _f1_1_stencil_13);
  return _680;
}

