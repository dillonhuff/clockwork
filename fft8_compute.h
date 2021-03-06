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
  float _341 = float_from_bits(0 /* 0 */);
  return _341;
}

//store is: f1.1.stencil(f1_s0_x, f1_s0_y) = 0.000000f
hw_uint<32> hcompute_f1_1_stencil() {
  float _344 = float_from_bits(0 /* 0 */);
  return _344;
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

  float _349 = _f1_0_stencil_1 * _hw_twi_global_wrapper_stencil_1;
  float _350 = _f1_1_stencil_1 * _hw_twi_global_wrapper_stencil_2;
  float _351 = _349 - _350;
  return _351;
}

//store is: f1.1.stencil(f1_s2_t_x, 0) = ((f1.0.stencil(f1_s2_t_x, 0)*hw_twi_global_wrapper.stencil(f1_s2_t_x, 1, 0)) + (f1.1.stencil(f1_s2_t_x, 0)*hw_twi_global_wrapper.stencil(f1_s2_t_x, 0, 0)))
hw_uint<32> hcompute_f1_1_stencil_2(hw_uint<32>& f1_0_stencil, hw_uint<32>& f1_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f1_0_stencil_2 = (float) f1_0_stencil.extract<0, 31>();

  float _f1_1_stencil_2 = (float) f1_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_3 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_4 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _362 = _f1_0_stencil_2 * _hw_twi_global_wrapper_stencil_3;
  float _363 = _f1_1_stencil_2 * _hw_twi_global_wrapper_stencil_4;
  float _364 = _362 + _363;
  return _364;
}

//store is: f1.0.stencil(f1_s3_t_x, 1) = (f1.0.stencil((((f1_s3_t_x/2)*2) + ((f1_s3_t_x + 1) % 2)), 0) + (f1.0.stencil(f1_s3_t_x, 0)*float32((1 - ((f1_s3_t_x/(((f1_s3_t_x/2)*2) + 1))*2)))))
hw_uint<32> hcompute_f1_0_stencil_3(hw_uint<64>& f1_0_stencil, const int _f1_s3_t_x) {
  float _f1_0_stencil_3 = (float) f1_0_stencil.extract<0, 31>();
  float _f1_0_stencil_4 = (float) f1_0_stencil.extract<32, 63>();

  int32_t _375 = _f1_s3_t_x >> 1;
  int32_t _376 = _375 * 2;
  int32_t _377 = _376 + 1;
  int32_t _378 = _f1_s3_t_x / _377;
  int32_t _379 = _378 * _377;
  int32_t _380 = _f1_s3_t_x - _379;
  int32_t _381 = _380 >> 31;
  int32_t _382 = _377 >> 31;
  int32_t _383 = _381 & _382;
  int32_t _384 = _378 - _383;
  int32_t _385 = ~_382;
  int32_t _386 = _381 & _385;
  int32_t _387 = _384 + _386;
  int32_t _388 = _387 * 2;
  int32_t _389 = 1 - _388;
  float _390 = (float)(_389);
  float _391 = _f1_0_stencil_4 * _390;
  float _392 = _f1_0_stencil_3 + _391;
  return _392;
}

//store is: f1.1.stencil(f1_s3_t_x, 1) = (f1.1.stencil((((f1_s3_t_x/2)*2) + ((f1_s3_t_x + 1) % 2)), 0) + (f1.1.stencil(f1_s3_t_x, 0)*float32((1 - ((f1_s3_t_x/(((f1_s3_t_x/2)*2) + 1))*2)))))
hw_uint<32> hcompute_f1_1_stencil_3(hw_uint<64>& f1_1_stencil, const int _f1_s3_t_x) {
  float _f1_1_stencil_3 = (float) f1_1_stencil.extract<0, 31>();
  float _f1_1_stencil_4 = (float) f1_1_stencil.extract<32, 63>();

  int32_t _426 = _f1_s3_t_x >> 1;
  int32_t _427 = _426 * 2;
  int32_t _428 = _427 + 1;
  int32_t _429 = _f1_s3_t_x / _428;
  int32_t _430 = _429 * _428;
  int32_t _431 = _f1_s3_t_x - _430;
  int32_t _432 = _431 >> 31;
  int32_t _433 = _428 >> 31;
  int32_t _434 = _432 & _433;
  int32_t _435 = _429 - _434;
  int32_t _436 = ~_433;
  int32_t _437 = _432 & _436;
  int32_t _438 = _435 + _437;
  int32_t _439 = _438 * 2;
  int32_t _440 = 1 - _439;
  float _441 = (float)(_440);
  float _442 = _f1_1_stencil_4 * _441;
  float _443 = _f1_1_stencil_3 + _442;
  return _443;
}

//store is: f1.0.stencil(f1_s4_t_x, 1) = ((f1.0.stencil(f1_s4_t_x, 1)*hw_twi_global_wrapper.stencil(f1_s4_t_x, 0, 1)) - (f1.1.stencil(f1_s4_t_x, 1)*hw_twi_global_wrapper.stencil(f1_s4_t_x, 1, 1)))
hw_uint<32> hcompute_f1_0_stencil_4(hw_uint<32>& f1_0_stencil, hw_uint<32>& f1_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f1_0_stencil_5 = (float) f1_0_stencil.extract<0, 31>();

  float _f1_1_stencil_5 = (float) f1_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_5 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_6 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _477 = _f1_0_stencil_5 * _hw_twi_global_wrapper_stencil_5;
  float _478 = _f1_1_stencil_5 * _hw_twi_global_wrapper_stencil_6;
  float _479 = _477 - _478;
  return _479;
}

//store is: f1.1.stencil(f1_s4_t_x, 1) = ((f1.0.stencil(f1_s4_t_x, 1)*hw_twi_global_wrapper.stencil(f1_s4_t_x, 1, 1)) + (f1.1.stencil(f1_s4_t_x, 1)*hw_twi_global_wrapper.stencil(f1_s4_t_x, 0, 1)))
hw_uint<32> hcompute_f1_1_stencil_4(hw_uint<32>& f1_0_stencil, hw_uint<32>& f1_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f1_0_stencil_6 = (float) f1_0_stencil.extract<0, 31>();

  float _f1_1_stencil_6 = (float) f1_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_7 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_8 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _490 = _f1_0_stencil_6 * _hw_twi_global_wrapper_stencil_7;
  float _491 = _f1_1_stencil_6 * _hw_twi_global_wrapper_stencil_8;
  float _492 = _490 + _491;
  return _492;
}

//store is: f1.0.stencil(f1_s5_t_x, 2) = (f1.0.stencil((((f1_s5_t_x/4)*4) + ((f1_s5_t_x + 2) % 4)), 1) + (f1.0.stencil(f1_s5_t_x, 1)*float32((1 - ((f1_s5_t_x/(((f1_s5_t_x/4)*4) + 2))*2)))))
hw_uint<32> hcompute_f1_0_stencil_5(hw_uint<64>& f1_0_stencil, const int _f1_s5_t_x) {
  float _f1_0_stencil_7 = (float) f1_0_stencil.extract<0, 31>();
  float _f1_0_stencil_8 = (float) f1_0_stencil.extract<32, 63>();

  int32_t _503 = _f1_s5_t_x >> 2;
  int32_t _504 = _503 * 4;
  int32_t _505 = _504 + 2;
  int32_t _506 = _f1_s5_t_x / _505;
  int32_t _507 = _506 * _505;
  int32_t _508 = _f1_s5_t_x - _507;
  int32_t _509 = _508 >> 31;
  int32_t _510 = _505 >> 31;
  int32_t _511 = _509 & _510;
  int32_t _512 = _506 - _511;
  int32_t _513 = ~_510;
  int32_t _514 = _509 & _513;
  int32_t _515 = _512 + _514;
  int32_t _516 = _515 * 2;
  int32_t _517 = 1 - _516;
  float _518 = (float)(_517);
  float _519 = _f1_0_stencil_8 * _518;
  float _520 = _f1_0_stencil_7 + _519;
  return _520;
}

//store is: f1.1.stencil(f1_s5_t_x, 2) = (f1.1.stencil((((f1_s5_t_x/4)*4) + ((f1_s5_t_x + 2) % 4)), 1) + (f1.1.stencil(f1_s5_t_x, 1)*float32((1 - ((f1_s5_t_x/(((f1_s5_t_x/4)*4) + 2))*2)))))
hw_uint<32> hcompute_f1_1_stencil_5(hw_uint<64>& f1_1_stencil, const int _f1_s5_t_x) {
  float _f1_1_stencil_7 = (float) f1_1_stencil.extract<0, 31>();
  float _f1_1_stencil_8 = (float) f1_1_stencil.extract<32, 63>();

  int32_t _554 = _f1_s5_t_x >> 2;
  int32_t _555 = _554 * 4;
  int32_t _556 = _555 + 2;
  int32_t _557 = _f1_s5_t_x / _556;
  int32_t _558 = _557 * _556;
  int32_t _559 = _f1_s5_t_x - _558;
  int32_t _560 = _559 >> 31;
  int32_t _561 = _556 >> 31;
  int32_t _562 = _560 & _561;
  int32_t _563 = _557 - _562;
  int32_t _564 = ~_561;
  int32_t _565 = _560 & _564;
  int32_t _566 = _563 + _565;
  int32_t _567 = _566 * 2;
  int32_t _568 = 1 - _567;
  float _569 = (float)(_568);
  float _570 = _f1_1_stencil_8 * _569;
  float _571 = _f1_1_stencil_7 + _570;
  return _571;
}

//store is: f1.0.stencil(f1_s6_t_x, 2) = ((f1.0.stencil(f1_s6_t_x, 2)*hw_twi_global_wrapper.stencil(f1_s6_t_x, 0, 2)) - (f1.1.stencil(f1_s6_t_x, 2)*hw_twi_global_wrapper.stencil(f1_s6_t_x, 1, 2)))
hw_uint<32> hcompute_f1_0_stencil_6(hw_uint<32>& f1_0_stencil, hw_uint<32>& f1_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f1_0_stencil_9 = (float) f1_0_stencil.extract<0, 31>();

  float _f1_1_stencil_9 = (float) f1_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_10 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_9 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _605 = _f1_0_stencil_9 * _hw_twi_global_wrapper_stencil_9;
  float _606 = _f1_1_stencil_9 * _hw_twi_global_wrapper_stencil_10;
  float _607 = _605 - _606;
  return _607;
}

//store is: f1.1.stencil(f1_s6_t_x, 2) = ((f1.0.stencil(f1_s6_t_x, 2)*hw_twi_global_wrapper.stencil(f1_s6_t_x, 1, 2)) + (f1.1.stencil(f1_s6_t_x, 2)*hw_twi_global_wrapper.stencil(f1_s6_t_x, 0, 2)))
hw_uint<32> hcompute_f1_1_stencil_6(hw_uint<32>& f1_0_stencil, hw_uint<32>& f1_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f1_0_stencil_10 = (float) f1_0_stencil.extract<0, 31>();

  float _f1_1_stencil_10 = (float) f1_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_11 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_12 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _618 = _f1_0_stencil_10 * _hw_twi_global_wrapper_stencil_11;
  float _619 = _f1_1_stencil_10 * _hw_twi_global_wrapper_stencil_12;
  float _620 = _618 + _619;
  return _620;
}

//store is: f1.0.stencil(f1_s7_t_x, 3) = (f1.0.stencil(((f1_s7_t_x + 4) % 8), 2) + (f1.0.stencil(f1_s7_t_x, 2)*float32((1 - ((f1_s7_t_x/4)*2)))))
hw_uint<32> hcompute_f1_0_stencil_7(hw_uint<64>& f1_0_stencil, const int _f1_s7_t_x) {
  float _f1_0_stencil_11 = (float) f1_0_stencil.extract<0, 31>();
  float _f1_0_stencil_12 = (float) f1_0_stencil.extract<32, 63>();

  int32_t _631 = _f1_s7_t_x >> 2;
  int32_t _632 = _631 * 2;
  int32_t _633 = 1 - _632;
  float _634 = (float)(_633);
  float _635 = _f1_0_stencil_12 * _634;
  float _636 = _f1_0_stencil_11 + _635;
  return _636;
}

//store is: f1.1.stencil(f1_s7_t_x, 3) = (f1.1.stencil(((f1_s7_t_x + 4) % 8), 2) + (f1.1.stencil(f1_s7_t_x, 2)*float32((1 - ((f1_s7_t_x/4)*2)))))
hw_uint<32> hcompute_f1_1_stencil_7(hw_uint<64>& f1_1_stencil, const int _f1_s7_t_x) {
  float _f1_1_stencil_11 = (float) f1_1_stencil.extract<0, 31>();
  float _f1_1_stencil_12 = (float) f1_1_stencil.extract<32, 63>();

  int32_t _654 = _f1_s7_t_x >> 2;
  int32_t _655 = _654 * 2;
  int32_t _656 = 1 - _655;
  float _657 = (float)(_656);
  float _658 = _f1_1_stencil_12 * _657;
  float _659 = _f1_1_stencil_11 + _658;
  return _659;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = select((hw_output_s0_y_yi == 0), f1.0.stencil(hw_output_s0_x_xi, 3), f1.1.stencil(hw_output_s0_x_xi, 3))
hw_uint<32> hcompute_hw_output_stencil(hw_uint<32>& f1_0_stencil, hw_uint<32>& f1_1_stencil, const int _hw_output_s0_y_yi) {
  float _f1_0_stencil_13 = (float) f1_0_stencil.extract<0, 31>();

  float _f1_1_stencil_13 = (float) f1_1_stencil.extract<0, 31>();

  bool _677 = _hw_output_s0_y_yi == 0;
  float _678 = (float)(_677 ? _f1_0_stencil_13 : _f1_1_stencil_13);
  return _678;
}

