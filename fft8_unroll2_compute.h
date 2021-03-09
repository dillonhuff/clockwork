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

//store is: f1.0.stencil((f1_s0_x_x*2), f1_s0_y) = 0.000000f
hw_uint<32> hcompute_f1_0_stencil() {
  float _311 = float_from_bits(0 /* 0 */);
  return _311;
}

//store is: f1.1.stencil((f1_s0_x_x*2), f1_s0_y) = 0.000000f
hw_uint<32> hcompute_f1_1_stencil() {
  float _315 = float_from_bits(0 /* 0 */);
  return _315;
}

//store is: f1.0.stencil(((f1_s0_x_x*2) + 1), f1_s0_y) = 0.000000f
hw_uint<32> hcompute_f1_0_stencil_1() {
  float _319 = float_from_bits(0 /* 0 */);
  return _319;
}

//store is: f1.1.stencil(((f1_s0_x_x*2) + 1), f1_s0_y) = 0.000000f
hw_uint<32> hcompute_f1_1_stencil_1() {
  float _324 = float_from_bits(0 /* 0 */);
  return _324;
}

//store is: f1.0.stencil(f1_s1_x, 0) = hw_input_global_wrapper.stencil(f1_s1_x, 0)
hw_uint<32> hcompute_f1_0_stencil_2(hw_uint<32>& hw_input_global_wrapper_stencil) {
  float _hw_input_global_wrapper_stencil_1 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();

  return _hw_input_global_wrapper_stencil_1;
}

//store is: f1.1.stencil(f1_s1_x, 0) = hw_input_global_wrapper.stencil(f1_s1_x, 1)
hw_uint<32> hcompute_f1_1_stencil_2(hw_uint<32>& hw_input_global_wrapper_stencil) {
  float _hw_input_global_wrapper_stencil_2 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();

  return _hw_input_global_wrapper_stencil_2;
}

//store is: f1.0.stencil(f1_s2_t_x, 0) = ((f1.0.stencil(f1_s2_t_x, 0)*hw_twi_global_wrapper.stencil(f1_s2_t_x, 0, 0)) - (f1.1.stencil(f1_s2_t_x, 0)*hw_twi_global_wrapper.stencil(f1_s2_t_x, 1, 0)))
hw_uint<32> hcompute_f1_0_stencil_3(hw_uint<32>& f1_0_stencil, hw_uint<32>& f1_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f1_0_stencil_1 = (float) f1_0_stencil.extract<0, 31>();

  float _f1_1_stencil_1 = (float) f1_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_1 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_2 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _331 = _f1_0_stencil_1 * _hw_twi_global_wrapper_stencil_1;
  float _332 = _f1_1_stencil_1 * _hw_twi_global_wrapper_stencil_2;
  float _333 = _331 - _332;
  return _333;
}

//store is: f1.1.stencil(f1_s2_t_x, 0) = ((f1.0.stencil(f1_s2_t_x, 0)*hw_twi_global_wrapper.stencil(f1_s2_t_x, 1, 0)) + (f1.1.stencil(f1_s2_t_x, 0)*hw_twi_global_wrapper.stencil(f1_s2_t_x, 0, 0)))
hw_uint<32> hcompute_f1_1_stencil_3(hw_uint<32>& f1_0_stencil, hw_uint<32>& f1_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f1_0_stencil_2 = (float) f1_0_stencil.extract<0, 31>();

  float _f1_1_stencil_2 = (float) f1_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_3 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_4 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _344 = _f1_0_stencil_2 * _hw_twi_global_wrapper_stencil_3;
  float _345 = _f1_1_stencil_2 * _hw_twi_global_wrapper_stencil_4;
  float _346 = _344 + _345;
  return _346;
}

//store is: f1.0.stencil(f1_s3_t_x, 1) = (f1.0.stencil((((f1_s3_t_x/2)*2) + ((f1_s3_t_x + 1) % 2)), 0) + (f1.0.stencil(f1_s3_t_x, 0)*float32((1 - ((f1_s3_t_x/(((f1_s3_t_x/2)*2) + 1))*2)))))
hw_uint<32> hcompute_f1_0_stencil_4(hw_uint<64>& f1_0_stencil, const int _f1_s3_t_x) {
  float _f1_0_stencil_3 = (float) f1_0_stencil.extract<0, 31>();
  float _f1_0_stencil_4 = (float) f1_0_stencil.extract<32, 63>();

  int32_t _357 = _f1_s3_t_x >> 1;
  int32_t _358 = _357 * 2;
  int32_t _359 = _358 + 1;
  int32_t _360 = _f1_s3_t_x / _359;
  int32_t _361 = _360 * _359;
  int32_t _362 = _f1_s3_t_x - _361;
  int32_t _363 = _362 >> 31;
  int32_t _364 = _359 >> 31;
  int32_t _365 = _363 & _364;
  int32_t _366 = _360 - _365;
  int32_t _367 = ~_364;
  int32_t _368 = _363 & _367;
  int32_t _369 = _366 + _368;
  int32_t _370 = _369 * 2;
  int32_t _371 = 1 - _370;
  float _372 = (float)(_371);
  float _373 = _f1_0_stencil_4 * _372;
  float _374 = _f1_0_stencil_3 + _373;
  return _374;
}

//store is: f1.1.stencil(f1_s3_t_x, 1) = (f1.1.stencil((((f1_s3_t_x/2)*2) + ((f1_s3_t_x + 1) % 2)), 0) + (f1.1.stencil(f1_s3_t_x, 0)*float32((1 - ((f1_s3_t_x/(((f1_s3_t_x/2)*2) + 1))*2)))))
hw_uint<32> hcompute_f1_1_stencil_4(hw_uint<64>& f1_1_stencil, const int _f1_s3_t_x) {
  float _f1_1_stencil_3 = (float) f1_1_stencil.extract<0, 31>();
  float _f1_1_stencil_4 = (float) f1_1_stencil.extract<32, 63>();

  int32_t _408 = _f1_s3_t_x >> 1;
  int32_t _409 = _408 * 2;
  int32_t _410 = _409 + 1;
  int32_t _411 = _f1_s3_t_x / _410;
  int32_t _412 = _411 * _410;
  int32_t _413 = _f1_s3_t_x - _412;
  int32_t _414 = _413 >> 31;
  int32_t _415 = _410 >> 31;
  int32_t _416 = _414 & _415;
  int32_t _417 = _411 - _416;
  int32_t _418 = ~_415;
  int32_t _419 = _414 & _418;
  int32_t _420 = _417 + _419;
  int32_t _421 = _420 * 2;
  int32_t _422 = 1 - _421;
  float _423 = (float)(_422);
  float _424 = _f1_1_stencil_4 * _423;
  float _425 = _f1_1_stencil_3 + _424;
  return _425;
}

//store is: f1.0.stencil(f1_s4_t_x, 1) = ((f1.0.stencil(f1_s4_t_x, 1)*hw_twi_global_wrapper.stencil(f1_s4_t_x, 0, 1)) - (f1.1.stencil(f1_s4_t_x, 1)*hw_twi_global_wrapper.stencil(f1_s4_t_x, 1, 1)))
hw_uint<32> hcompute_f1_0_stencil_5(hw_uint<32>& f1_0_stencil, hw_uint<32>& f1_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f1_0_stencil_5 = (float) f1_0_stencil.extract<0, 31>();

  float _f1_1_stencil_5 = (float) f1_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_5 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_6 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _459 = _f1_0_stencil_5 * _hw_twi_global_wrapper_stencil_5;
  float _460 = _f1_1_stencil_5 * _hw_twi_global_wrapper_stencil_6;
  float _461 = _459 - _460;
  return _461;
}

//store is: f1.1.stencil(f1_s4_t_x, 1) = ((f1.0.stencil(f1_s4_t_x, 1)*hw_twi_global_wrapper.stencil(f1_s4_t_x, 1, 1)) + (f1.1.stencil(f1_s4_t_x, 1)*hw_twi_global_wrapper.stencil(f1_s4_t_x, 0, 1)))
hw_uint<32> hcompute_f1_1_stencil_5(hw_uint<32>& f1_0_stencil, hw_uint<32>& f1_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f1_0_stencil_6 = (float) f1_0_stencil.extract<0, 31>();

  float _f1_1_stencil_6 = (float) f1_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_7 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_8 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _472 = _f1_0_stencil_6 * _hw_twi_global_wrapper_stencil_7;
  float _473 = _f1_1_stencil_6 * _hw_twi_global_wrapper_stencil_8;
  float _474 = _472 + _473;
  return _474;
}

//store is: f1.0.stencil(f1_s5_t_x, 2) = (f1.0.stencil((((f1_s5_t_x/4)*4) + ((f1_s5_t_x + 2) % 4)), 1) + (f1.0.stencil(f1_s5_t_x, 1)*float32((1 - ((f1_s5_t_x/(((f1_s5_t_x/4)*4) + 2))*2)))))
hw_uint<32> hcompute_f1_0_stencil_6(hw_uint<64>& f1_0_stencil, const int _f1_s5_t_x) {
  float _f1_0_stencil_7 = (float) f1_0_stencil.extract<0, 31>();
  float _f1_0_stencil_8 = (float) f1_0_stencil.extract<32, 63>();

  int32_t _485 = _f1_s5_t_x >> 2;
  int32_t _486 = _485 * 4;
  int32_t _487 = _486 + 2;
  int32_t _488 = _f1_s5_t_x / _487;
  int32_t _489 = _488 * _487;
  int32_t _490 = _f1_s5_t_x - _489;
  int32_t _491 = _490 >> 31;
  int32_t _492 = _487 >> 31;
  int32_t _493 = _491 & _492;
  int32_t _494 = _488 - _493;
  int32_t _495 = ~_492;
  int32_t _496 = _491 & _495;
  int32_t _497 = _494 + _496;
  int32_t _498 = _497 * 2;
  int32_t _499 = 1 - _498;
  float _500 = (float)(_499);
  float _501 = _f1_0_stencil_8 * _500;
  float _502 = _f1_0_stencil_7 + _501;
  return _502;
}

//store is: f1.1.stencil(f1_s5_t_x, 2) = (f1.1.stencil((((f1_s5_t_x/4)*4) + ((f1_s5_t_x + 2) % 4)), 1) + (f1.1.stencil(f1_s5_t_x, 1)*float32((1 - ((f1_s5_t_x/(((f1_s5_t_x/4)*4) + 2))*2)))))
hw_uint<32> hcompute_f1_1_stencil_6(hw_uint<64>& f1_1_stencil, const int _f1_s5_t_x) {
  float _f1_1_stencil_7 = (float) f1_1_stencil.extract<0, 31>();
  float _f1_1_stencil_8 = (float) f1_1_stencil.extract<32, 63>();

  int32_t _536 = _f1_s5_t_x >> 2;
  int32_t _537 = _536 * 4;
  int32_t _538 = _537 + 2;
  int32_t _539 = _f1_s5_t_x / _538;
  int32_t _540 = _539 * _538;
  int32_t _541 = _f1_s5_t_x - _540;
  int32_t _542 = _541 >> 31;
  int32_t _543 = _538 >> 31;
  int32_t _544 = _542 & _543;
  int32_t _545 = _539 - _544;
  int32_t _546 = ~_543;
  int32_t _547 = _542 & _546;
  int32_t _548 = _545 + _547;
  int32_t _549 = _548 * 2;
  int32_t _550 = 1 - _549;
  float _551 = (float)(_550);
  float _552 = _f1_1_stencil_8 * _551;
  float _553 = _f1_1_stencil_7 + _552;
  return _553;
}

//store is: f1.0.stencil(f1_s6_t_x, 2) = ((f1.0.stencil(f1_s6_t_x, 2)*hw_twi_global_wrapper.stencil(f1_s6_t_x, 0, 2)) - (f1.1.stencil(f1_s6_t_x, 2)*hw_twi_global_wrapper.stencil(f1_s6_t_x, 1, 2)))
hw_uint<32> hcompute_f1_0_stencil_7(hw_uint<32>& f1_0_stencil, hw_uint<32>& f1_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f1_0_stencil_9 = (float) f1_0_stencil.extract<0, 31>();

  float _f1_1_stencil_9 = (float) f1_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_10 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_9 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _587 = _f1_0_stencil_9 * _hw_twi_global_wrapper_stencil_9;
  float _588 = _f1_1_stencil_9 * _hw_twi_global_wrapper_stencil_10;
  float _589 = _587 - _588;
  return _589;
}

//store is: f1.1.stencil(f1_s6_t_x, 2) = ((f1.0.stencil(f1_s6_t_x, 2)*hw_twi_global_wrapper.stencil(f1_s6_t_x, 1, 2)) + (f1.1.stencil(f1_s6_t_x, 2)*hw_twi_global_wrapper.stencil(f1_s6_t_x, 0, 2)))
hw_uint<32> hcompute_f1_1_stencil_7(hw_uint<32>& f1_0_stencil, hw_uint<32>& f1_1_stencil, hw_uint<64>& hw_twi_global_wrapper_stencil) {
  float _f1_0_stencil_10 = (float) f1_0_stencil.extract<0, 31>();

  float _f1_1_stencil_10 = (float) f1_1_stencil.extract<0, 31>();

  float _hw_twi_global_wrapper_stencil_11 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_12 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();

  float _600 = _f1_0_stencil_10 * _hw_twi_global_wrapper_stencil_11;
  float _601 = _f1_1_stencil_10 * _hw_twi_global_wrapper_stencil_12;
  float _602 = _600 + _601;
  return _602;
}

//store is: f1.0.stencil(f1_s7_t_x, 3) = (f1.0.stencil(((f1_s7_t_x + 4) % 8), 2) + (f1.0.stencil(f1_s7_t_x, 2)*float32((1 - ((f1_s7_t_x/4)*2)))))
hw_uint<32> hcompute_f1_0_stencil_8(hw_uint<64>& f1_0_stencil, const int _f1_s7_t_x) {
  float _f1_0_stencil_11 = (float) f1_0_stencil.extract<0, 31>();
  float _f1_0_stencil_12 = (float) f1_0_stencil.extract<32, 63>();

  int32_t _613 = _f1_s7_t_x >> 2;
  int32_t _614 = _613 * 2;
  int32_t _615 = 1 - _614;
  float _616 = (float)(_615);
  float _617 = _f1_0_stencil_12 * _616;
  float _618 = _f1_0_stencil_11 + _617;
  return _618;
}

//store is: f1.1.stencil(f1_s7_t_x, 3) = (f1.1.stencil(((f1_s7_t_x + 4) % 8), 2) + (f1.1.stencil(f1_s7_t_x, 2)*float32((1 - ((f1_s7_t_x/4)*2)))))
hw_uint<32> hcompute_f1_1_stencil_8(hw_uint<64>& f1_1_stencil, const int _f1_s7_t_x) {
  float _f1_1_stencil_11 = (float) f1_1_stencil.extract<0, 31>();
  float _f1_1_stencil_12 = (float) f1_1_stencil.extract<32, 63>();

  int32_t _636 = _f1_s7_t_x >> 2;
  int32_t _637 = _636 * 2;
  int32_t _638 = 1 - _637;
  float _639 = (float)(_638);
  float _640 = _f1_1_stencil_12 * _639;
  float _641 = _f1_1_stencil_11 + _640;
  return _641;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = select((hw_output_s0_y_yi == 0), f1.0.stencil(hw_output_s0_x_xi, 3), f1.1.stencil(hw_output_s0_x_xi, 3))
hw_uint<32> hcompute_hw_output_stencil(hw_uint<32>& f1_0_stencil, hw_uint<32>& f1_1_stencil, const int _hw_output_s0_y_yi) {
  float _f1_0_stencil_13 = (float) f1_0_stencil.extract<0, 31>();

  float _f1_1_stencil_13 = (float) f1_1_stencil.extract<0, 31>();

  bool _659 = _hw_output_s0_y_yi == 0;
  float _660 = (float)(_659 ? _f1_0_stencil_13 : _f1_1_stencil_13);
  return _660;
}

