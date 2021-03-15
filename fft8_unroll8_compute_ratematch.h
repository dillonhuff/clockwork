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

//store is: f3.0.stencil(0) = 0.000000f
hw_uint<32> hcompute_f3_0_stencil() {
  float _311 = float_from_bits(0 /* 0 */);
  return _311;
}

//store is: f3.1.stencil(0) = 0.000000f
hw_uint<32> hcompute_f3_1_stencil() {
  float _314 = float_from_bits(0 /* 0 */);
  return _314;
}

//store is: f3.0.stencil(1) = 0.000000f
hw_uint<32> hcompute_f3_0_stencil_1() {
  float _317 = float_from_bits(0 /* 0 */);
  return _317;
}

//store is: f3.1.stencil(1) = 0.000000f
hw_uint<32> hcompute_f3_1_stencil_1() {
  float _320 = float_from_bits(0 /* 0 */);
  return _320;
}

//store is: f3.0.stencil(2) = 0.000000f
hw_uint<32> hcompute_f3_0_stencil_2() {
  float _323 = float_from_bits(0 /* 0 */);
  return _323;
}

//store is: f3.1.stencil(2) = 0.000000f
hw_uint<32> hcompute_f3_1_stencil_2() {
  float _326 = float_from_bits(0 /* 0 */);
  return _326;
}

//store is: f3.0.stencil(3) = 0.000000f
hw_uint<32> hcompute_f3_0_stencil_3() {
  float _329 = float_from_bits(0 /* 0 */);
  return _329;
}

//store is: f3.1.stencil(3) = 0.000000f
hw_uint<32> hcompute_f3_1_stencil_3() {
  float _332 = float_from_bits(0 /* 0 */);
  return _332;
}

//store is: f3.0.stencil(4) = 0.000000f
hw_uint<32> hcompute_f3_0_stencil_4() {
  float _335 = float_from_bits(0 /* 0 */);
  return _335;
}

//store is: f3.1.stencil(4) = 0.000000f
hw_uint<32> hcompute_f3_1_stencil_4() {
  float _338 = float_from_bits(0 /* 0 */);
  return _338;
}

//store is: f3.0.stencil(5) = 0.000000f
hw_uint<32> hcompute_f3_0_stencil_5() {
  float _341 = float_from_bits(0 /* 0 */);
  return _341;
}

//store is: f3.1.stencil(5) = 0.000000f
hw_uint<32> hcompute_f3_1_stencil_5() {
  float _344 = float_from_bits(0 /* 0 */);
  return _344;
}

//store is: f3.0.stencil(6) = 0.000000f
hw_uint<32> hcompute_f3_0_stencil_6() {
  float _347 = float_from_bits(0 /* 0 */);
  return _347;
}

//store is: f3.1.stencil(6) = 0.000000f
hw_uint<32> hcompute_f3_1_stencil_6() {
  float _350 = float_from_bits(0 /* 0 */);
  return _350;
}

//store is: f3.0.stencil(7) = 0.000000f
hw_uint<32> hcompute_f3_0_stencil_7() {
  float _353 = float_from_bits(0 /* 0 */);
  return _353;
}

//store is: f3.1.stencil(7) = 0.000000f
hw_uint<32> hcompute_f3_1_stencil_7() {
  float _356 = float_from_bits(0 /* 0 */);
  return _356;
}

//store is: f3.0.stencil(f3_s1_t_x) = (((hw_twi_global_wrapper.stencil(f3_s1_t_x, 0, 0)*(hw_input_global_wrapper.stencil(f3_s1_t_x, 0)*float32((1 - ((f3_s1_t_x/(((f3_s1_t_x/2)*2) + 1))*2))))) - (hw_twi_global_wrapper.stencil(f3_s1_t_x, 1, 0)*(hw_input_global_wrapper.stencil(f3_s1_t_x, 1)*float32((1 - ((f3_s1_t_x/(((f3_s1_t_x/2)*2) + 1))*2)))))) + ((hw_input_global_wrapper.stencil((((f3_s1_t_x/2)*2) + ((f3_s1_t_x + 1) % 2)), 0)*hw_twi_global_wrapper.stencil((((f3_s1_t_x/2)*2) + ((f3_s1_t_x + 1) % 2)), 0, 0)) - (hw_input_global_wrapper.stencil((((f3_s1_t_x/2)*2) + ((f3_s1_t_x + 1) % 2)), 1)*hw_twi_global_wrapper.stencil((((f3_s1_t_x/2)*2) + ((f3_s1_t_x + 1) % 2)), 1, 0))))
hw_uint<32> hcompute_f3_0_stencil_8(hw_uint<128>& hw_input_global_wrapper_stencil, hw_uint<128>& hw_twi_global_wrapper_stencil, const int _f3_s1_t_x) {
  float _hw_input_global_wrapper_stencil_1 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();
  float _hw_input_global_wrapper_stencil_2 = (float) hw_input_global_wrapper_stencil.extract<32, 63>();
  float _hw_input_global_wrapper_stencil_3 = (float) hw_input_global_wrapper_stencil.extract<64, 95>();
  float _hw_input_global_wrapper_stencil_4 = (float) hw_input_global_wrapper_stencil.extract<96, 127>();

  float _hw_twi_global_wrapper_stencil_1 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_2 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();
  float _hw_twi_global_wrapper_stencil_3 = (float) hw_twi_global_wrapper_stencil.extract<64, 95>();
  float _hw_twi_global_wrapper_stencil_4 = (float) hw_twi_global_wrapper_stencil.extract<96, 127>();

  int32_t _359 = _f3_s1_t_x >> 1;
  int32_t _360 = _359 * 2;
  int32_t _361 = _360 + 1;
  int32_t _362 = _f3_s1_t_x / _361;
  int32_t _363 = _362 * _361;
  int32_t _364 = _f3_s1_t_x - _363;
  int32_t _365 = _364 >> 31;
  int32_t _366 = _361 >> 31;
  int32_t _367 = _365 & _366;
  int32_t _368 = _362 - _367;
  int32_t _369 = ~_366;
  int32_t _370 = _365 & _369;
  int32_t _371 = _368 + _370;
  int32_t _372 = _371 * 2;
  int32_t _373 = 1 - _372;
  float _374 = (float)(_373);
  float _375 = _hw_input_global_wrapper_stencil_1 * _374;
  float _376 = _hw_twi_global_wrapper_stencil_1 * _375;
  float _377 = _hw_input_global_wrapper_stencil_2 * _374;
  float _378 = _hw_twi_global_wrapper_stencil_2 * _377;
  float _379 = _376 - _378;
  float _380 = _hw_input_global_wrapper_stencil_3 * _hw_twi_global_wrapper_stencil_3;
  float _381 = _hw_input_global_wrapper_stencil_4 * _hw_twi_global_wrapper_stencil_4;
  float _382 = _380 - _381;
  float _383 = _379 + _382;
  return _383;
}

//store is: f3.1.stencil(f3_s1_t_x) = (((hw_twi_global_wrapper.stencil(f3_s1_t_x, 1, 0)*(hw_input_global_wrapper.stencil(f3_s1_t_x, 0)*float32((1 - ((f3_s1_t_x/(((f3_s1_t_x/2)*2) + 1))*2))))) + (hw_twi_global_wrapper.stencil(f3_s1_t_x, 0, 0)*(hw_input_global_wrapper.stencil(f3_s1_t_x, 1)*float32((1 - ((f3_s1_t_x/(((f3_s1_t_x/2)*2) + 1))*2)))))) + ((hw_input_global_wrapper.stencil((((f3_s1_t_x/2)*2) + ((f3_s1_t_x + 1) % 2)), 0)*hw_twi_global_wrapper.stencil((((f3_s1_t_x/2)*2) + ((f3_s1_t_x + 1) % 2)), 1, 0)) + (hw_input_global_wrapper.stencil((((f3_s1_t_x/2)*2) + ((f3_s1_t_x + 1) % 2)), 1)*hw_twi_global_wrapper.stencil((((f3_s1_t_x/2)*2) + ((f3_s1_t_x + 1) % 2)), 0, 0))))
hw_uint<32> hcompute_f3_1_stencil_8(hw_uint<128>& hw_input_global_wrapper_stencil, hw_uint<128>& hw_twi_global_wrapper_stencil, const int _f3_s1_t_x) {
  float _hw_input_global_wrapper_stencil_5 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();
  float _hw_input_global_wrapper_stencil_6 = (float) hw_input_global_wrapper_stencil.extract<32, 63>();
  float _hw_input_global_wrapper_stencil_7 = (float) hw_input_global_wrapper_stencil.extract<64, 95>();
  float _hw_input_global_wrapper_stencil_8 = (float) hw_input_global_wrapper_stencil.extract<96, 127>();

  float _hw_twi_global_wrapper_stencil_5 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_6 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();
  float _hw_twi_global_wrapper_stencil_7 = (float) hw_twi_global_wrapper_stencil.extract<64, 95>();
  float _hw_twi_global_wrapper_stencil_8 = (float) hw_twi_global_wrapper_stencil.extract<96, 127>();

  int32_t _437 = _f3_s1_t_x >> 1;
  int32_t _438 = _437 * 2;
  int32_t _439 = _438 + 1;
  int32_t _440 = _f3_s1_t_x / _439;
  int32_t _441 = _440 * _439;
  int32_t _442 = _f3_s1_t_x - _441;
  int32_t _443 = _442 >> 31;
  int32_t _444 = _439 >> 31;
  int32_t _445 = _443 & _444;
  int32_t _446 = _440 - _445;
  int32_t _447 = ~_444;
  int32_t _448 = _443 & _447;
  int32_t _449 = _446 + _448;
  int32_t _450 = _449 * 2;
  int32_t _451 = 1 - _450;
  float _452 = (float)(_451);
  float _453 = _hw_input_global_wrapper_stencil_5 * _452;
  float _454 = _hw_twi_global_wrapper_stencil_5 * _453;
  float _455 = _hw_input_global_wrapper_stencil_6 * _452;
  float _456 = _hw_twi_global_wrapper_stencil_6 * _455;
  float _457 = _454 + _456;
  float _458 = _hw_input_global_wrapper_stencil_7 * _hw_twi_global_wrapper_stencil_7;
  float _459 = _hw_input_global_wrapper_stencil_8 * _hw_twi_global_wrapper_stencil_8;
  float _460 = _458 + _459;
  float _461 = _457 + _460;
  return _461;
}

//store is: f4.0.stencil(0) = 0.000000f
hw_uint<32> hcompute_f4_0_stencil() {
  float _515 = float_from_bits(0 /* 0 */);
  return _515;
}

//store is: f4.1.stencil(0) = 0.000000f
hw_uint<32> hcompute_f4_1_stencil() {
  float _518 = float_from_bits(0 /* 0 */);
  return _518;
}

//store is: f4.0.stencil(1) = 0.000000f
hw_uint<32> hcompute_f4_0_stencil_1() {
  float _521 = float_from_bits(0 /* 0 */);
  return _521;
}

//store is: f4.1.stencil(1) = 0.000000f
hw_uint<32> hcompute_f4_1_stencil_1() {
  float _524 = float_from_bits(0 /* 0 */);
  return _524;
}

//store is: f4.0.stencil(2) = 0.000000f
hw_uint<32> hcompute_f4_0_stencil_2() {
  float _527 = float_from_bits(0 /* 0 */);
  return _527;
}

//store is: f4.1.stencil(2) = 0.000000f
hw_uint<32> hcompute_f4_1_stencil_2() {
  float _530 = float_from_bits(0 /* 0 */);
  return _530;
}

//store is: f4.0.stencil(3) = 0.000000f
hw_uint<32> hcompute_f4_0_stencil_3() {
  float _533 = float_from_bits(0 /* 0 */);
  return _533;
}

//store is: f4.1.stencil(3) = 0.000000f
hw_uint<32> hcompute_f4_1_stencil_3() {
  float _536 = float_from_bits(0 /* 0 */);
  return _536;
}

//store is: f4.0.stencil(4) = 0.000000f
hw_uint<32> hcompute_f4_0_stencil_4() {
  float _539 = float_from_bits(0 /* 0 */);
  return _539;
}

//store is: f4.1.stencil(4) = 0.000000f
hw_uint<32> hcompute_f4_1_stencil_4() {
  float _542 = float_from_bits(0 /* 0 */);
  return _542;
}

//store is: f4.0.stencil(5) = 0.000000f
hw_uint<32> hcompute_f4_0_stencil_5() {
  float _545 = float_from_bits(0 /* 0 */);
  return _545;
}

//store is: f4.1.stencil(5) = 0.000000f
hw_uint<32> hcompute_f4_1_stencil_5() {
  float _548 = float_from_bits(0 /* 0 */);
  return _548;
}

//store is: f4.0.stencil(6) = 0.000000f
hw_uint<32> hcompute_f4_0_stencil_6() {
  float _551 = float_from_bits(0 /* 0 */);
  return _551;
}

//store is: f4.1.stencil(6) = 0.000000f
hw_uint<32> hcompute_f4_1_stencil_6() {
  float _554 = float_from_bits(0 /* 0 */);
  return _554;
}

//store is: f4.0.stencil(7) = 0.000000f
hw_uint<32> hcompute_f4_0_stencil_7() {
  float _557 = float_from_bits(0 /* 0 */);
  return _557;
}

//store is: f4.1.stencil(7) = 0.000000f
hw_uint<32> hcompute_f4_1_stencil_7() {
  float _560 = float_from_bits(0 /* 0 */);
  return _560;
}

//store is: f4.0.stencil(f4_s1_t_x) = (((hw_twi_global_wrapper.stencil(f4_s1_t_x, 0, 1)*(f3.0.stencil(f4_s1_t_x)*float32((1 - ((f4_s1_t_x/(((f4_s1_t_x/4)*4) + 2))*2))))) - (hw_twi_global_wrapper.stencil(f4_s1_t_x, 1, 1)*(f3.1.stencil(f4_s1_t_x)*float32((1 - ((f4_s1_t_x/(((f4_s1_t_x/4)*4) + 2))*2)))))) + ((f3.0.stencil((((f4_s1_t_x/4)*4) + ((f4_s1_t_x + 2) % 4)))*hw_twi_global_wrapper.stencil((((f4_s1_t_x/4)*4) + ((f4_s1_t_x + 2) % 4)), 0, 1)) - (f3.1.stencil((((f4_s1_t_x/4)*4) + ((f4_s1_t_x + 2) % 4)))*hw_twi_global_wrapper.stencil((((f4_s1_t_x/4)*4) + ((f4_s1_t_x + 2) % 4)), 1, 1))))
hw_uint<32> hcompute_f4_0_stencil_8(hw_uint<64>& f3_0_stencil, hw_uint<64>& f3_1_stencil, hw_uint<128>& hw_twi_global_wrapper_stencil, const int _f4_s1_t_x) {
  float _f3_0_stencil_1 = (float) f3_0_stencil.extract<0, 31>();
  float _f3_0_stencil_2 = (float) f3_0_stencil.extract<32, 63>();

  float _f3_1_stencil_1 = (float) f3_1_stencil.extract<0, 31>();
  float _f3_1_stencil_2 = (float) f3_1_stencil.extract<32, 63>();

  float _hw_twi_global_wrapper_stencil_10 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_11 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();
  float _hw_twi_global_wrapper_stencil_12 = (float) hw_twi_global_wrapper_stencil.extract<64, 95>();
  float _hw_twi_global_wrapper_stencil_13 = (float) hw_twi_global_wrapper_stencil.extract<96, 127>();

  int32_t _563 = _f4_s1_t_x >> 2;
  int32_t _564 = _563 * 4;
  int32_t _565 = _564 + 2;
  int32_t _566 = _f4_s1_t_x / _565;
  int32_t _567 = _566 * _565;
  int32_t _568 = _f4_s1_t_x - _567;
  int32_t _569 = _568 >> 31;
  int32_t _570 = _565 >> 31;
  int32_t _571 = _569 & _570;
  int32_t _572 = _566 - _571;
  int32_t _573 = ~_570;
  int32_t _574 = _569 & _573;
  int32_t _575 = _572 + _574;
  int32_t _576 = _575 * 2;
  int32_t _577 = 1 - _576;
  float _578 = (float)(_577);
  float _579 = _f3_0_stencil_1 * _578;
  float _580 = _hw_twi_global_wrapper_stencil_10 * _579;
  float _581 = _f3_1_stencil_1 * _578;
  float _582 = _hw_twi_global_wrapper_stencil_11 * _581;
  float _583 = _580 - _582;
  float _584 = _f3_0_stencil_2 * _hw_twi_global_wrapper_stencil_12;
  float _585 = _f3_1_stencil_2 * _hw_twi_global_wrapper_stencil_13;
  float _586 = _584 - _585;
  float _587 = _583 + _586;
  return _587;
}

//store is: f4.1.stencil(f4_s1_t_x) = (((hw_twi_global_wrapper.stencil(f4_s1_t_x, 1, 1)*(f3.0.stencil(f4_s1_t_x)*float32((1 - ((f4_s1_t_x/(((f4_s1_t_x/4)*4) + 2))*2))))) + (hw_twi_global_wrapper.stencil(f4_s1_t_x, 0, 1)*(f3.1.stencil(f4_s1_t_x)*float32((1 - ((f4_s1_t_x/(((f4_s1_t_x/4)*4) + 2))*2)))))) + ((f3.0.stencil((((f4_s1_t_x/4)*4) + ((f4_s1_t_x + 2) % 4)))*hw_twi_global_wrapper.stencil((((f4_s1_t_x/4)*4) + ((f4_s1_t_x + 2) % 4)), 1, 1)) + (f3.1.stencil((((f4_s1_t_x/4)*4) + ((f4_s1_t_x + 2) % 4)))*hw_twi_global_wrapper.stencil((((f4_s1_t_x/4)*4) + ((f4_s1_t_x + 2) % 4)), 0, 1))))
hw_uint<32> hcompute_f4_1_stencil_8(hw_uint<64>& f3_0_stencil, hw_uint<64>& f3_1_stencil, hw_uint<128>& hw_twi_global_wrapper_stencil, const int _f4_s1_t_x) {
  float _f3_0_stencil_3 = (float) f3_0_stencil.extract<0, 31>();
  float _f3_0_stencil_4 = (float) f3_0_stencil.extract<32, 63>();

  float _f3_1_stencil_3 = (float) f3_1_stencil.extract<0, 31>();
  float _f3_1_stencil_4 = (float) f3_1_stencil.extract<32, 63>();

  float _hw_twi_global_wrapper_stencil_14 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_15 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();
  float _hw_twi_global_wrapper_stencil_16 = (float) hw_twi_global_wrapper_stencil.extract<64, 95>();
  float _hw_twi_global_wrapper_stencil_17 = (float) hw_twi_global_wrapper_stencil.extract<96, 127>();

  int32_t _641 = _f4_s1_t_x >> 2;
  int32_t _642 = _641 * 4;
  int32_t _643 = _642 + 2;
  int32_t _644 = _f4_s1_t_x / _643;
  int32_t _645 = _644 * _643;
  int32_t _646 = _f4_s1_t_x - _645;
  int32_t _647 = _646 >> 31;
  int32_t _648 = _643 >> 31;
  int32_t _649 = _647 & _648;
  int32_t _650 = _644 - _649;
  int32_t _651 = ~_648;
  int32_t _652 = _647 & _651;
  int32_t _653 = _650 + _652;
  int32_t _654 = _653 * 2;
  int32_t _655 = 1 - _654;
  float _656 = (float)(_655);
  float _657 = _f3_0_stencil_3 * _656;
  float _658 = _hw_twi_global_wrapper_stencil_14 * _657;
  float _659 = _f3_1_stencil_3 * _656;
  float _660 = _hw_twi_global_wrapper_stencil_15 * _659;
  float _661 = _658 + _660;
  float _662 = _f3_0_stencil_4 * _hw_twi_global_wrapper_stencil_16;
  float _663 = _f3_1_stencil_4 * _hw_twi_global_wrapper_stencil_17;
  float _664 = _662 + _663;
  float _665 = _661 + _664;
  return _665;
}

//store is: f5.0.stencil(0) = 0.000000f
hw_uint<32> hcompute_f5_0_stencil() {
  float _719 = float_from_bits(0 /* 0 */);
  return _719;
}

//store is: f5.1.stencil(0) = 0.000000f
hw_uint<32> hcompute_f5_1_stencil() {
  float _722 = float_from_bits(0 /* 0 */);
  return _722;
}

//store is: f5.0.stencil(1) = 0.000000f
hw_uint<32> hcompute_f5_0_stencil_1() {
  float _725 = float_from_bits(0 /* 0 */);
  return _725;
}

//store is: f5.1.stencil(1) = 0.000000f
hw_uint<32> hcompute_f5_1_stencil_1() {
  float _728 = float_from_bits(0 /* 0 */);
  return _728;
}

//store is: f5.0.stencil(2) = 0.000000f
hw_uint<32> hcompute_f5_0_stencil_2() {
  float _731 = float_from_bits(0 /* 0 */);
  return _731;
}

//store is: f5.1.stencil(2) = 0.000000f
hw_uint<32> hcompute_f5_1_stencil_2() {
  float _734 = float_from_bits(0 /* 0 */);
  return _734;
}

//store is: f5.0.stencil(3) = 0.000000f
hw_uint<32> hcompute_f5_0_stencil_3() {
  float _737 = float_from_bits(0 /* 0 */);
  return _737;
}

//store is: f5.1.stencil(3) = 0.000000f
hw_uint<32> hcompute_f5_1_stencil_3() {
  float _740 = float_from_bits(0 /* 0 */);
  return _740;
}

//store is: f5.0.stencil(4) = 0.000000f
hw_uint<32> hcompute_f5_0_stencil_4() {
  float _743 = float_from_bits(0 /* 0 */);
  return _743;
}

//store is: f5.1.stencil(4) = 0.000000f
hw_uint<32> hcompute_f5_1_stencil_4() {
  float _746 = float_from_bits(0 /* 0 */);
  return _746;
}

//store is: f5.0.stencil(5) = 0.000000f
hw_uint<32> hcompute_f5_0_stencil_5() {
  float _749 = float_from_bits(0 /* 0 */);
  return _749;
}

//store is: f5.1.stencil(5) = 0.000000f
hw_uint<32> hcompute_f5_1_stencil_5() {
  float _752 = float_from_bits(0 /* 0 */);
  return _752;
}

//store is: f5.0.stencil(6) = 0.000000f
hw_uint<32> hcompute_f5_0_stencil_6() {
  float _755 = float_from_bits(0 /* 0 */);
  return _755;
}

//store is: f5.1.stencil(6) = 0.000000f
hw_uint<32> hcompute_f5_1_stencil_6() {
  float _758 = float_from_bits(0 /* 0 */);
  return _758;
}

//store is: f5.0.stencil(7) = 0.000000f
hw_uint<32> hcompute_f5_0_stencil_7() {
  float _761 = float_from_bits(0 /* 0 */);
  return _761;
}

//store is: f5.1.stencil(7) = 0.000000f
hw_uint<32> hcompute_f5_1_stencil_7() {
  float _764 = float_from_bits(0 /* 0 */);
  return _764;
}

//store is: f5.0.stencil(f5_s1_t_x) = (((hw_twi_global_wrapper.stencil(f5_s1_t_x, 0, 2)*(f4.0.stencil(f5_s1_t_x)*float32((1 - ((f5_s1_t_x/4)*2))))) - (hw_twi_global_wrapper.stencil(f5_s1_t_x, 1, 2)*(f4.1.stencil(f5_s1_t_x)*float32((1 - ((f5_s1_t_x/4)*2)))))) + ((f4.0.stencil(((f5_s1_t_x + 4) % 8))*hw_twi_global_wrapper.stencil(((f5_s1_t_x + 4) % 8), 0, 2)) - (f4.1.stencil(((f5_s1_t_x + 4) % 8))*hw_twi_global_wrapper.stencil(((f5_s1_t_x + 4) % 8), 1, 2))))
hw_uint<32> hcompute_f5_0_stencil_8(hw_uint<64>& f4_0_stencil, hw_uint<64>& f4_1_stencil, hw_uint<128>& hw_twi_global_wrapper_stencil, const int _f5_s1_t_x) {
  float _f4_0_stencil_1 = (float) f4_0_stencil.extract<0, 31>();
  float _f4_0_stencil_2 = (float) f4_0_stencil.extract<32, 63>();

  float _f4_1_stencil_1 = (float) f4_1_stencil.extract<0, 31>();
  float _f4_1_stencil_2 = (float) f4_1_stencil.extract<32, 63>();

  float _hw_twi_global_wrapper_stencil_18 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_19 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();
  float _hw_twi_global_wrapper_stencil_20 = (float) hw_twi_global_wrapper_stencil.extract<64, 95>();
  float _hw_twi_global_wrapper_stencil_21 = (float) hw_twi_global_wrapper_stencil.extract<96, 127>();

  int32_t _767 = _f5_s1_t_x >> 2;
  int32_t _768 = _767 * 2;
  int32_t _769 = 1 - _768;
  float _770 = (float)(_769);
  float _771 = _f4_0_stencil_1 * _770;
  float _772 = _hw_twi_global_wrapper_stencil_18 * _771;
  float _773 = _f4_1_stencil_1 * _770;
  float _774 = _hw_twi_global_wrapper_stencil_19 * _773;
  float _775 = _772 - _774;
  float _776 = _f4_0_stencil_2 * _hw_twi_global_wrapper_stencil_20;
  float _777 = _f4_1_stencil_2 * _hw_twi_global_wrapper_stencil_21;
  float _778 = _776 - _777;
  float _779 = _775 + _778;
  return _779;
}

//store is: f5.1.stencil(f5_s1_t_x) = (((hw_twi_global_wrapper.stencil(f5_s1_t_x, 1, 2)*(f4.0.stencil(f5_s1_t_x)*float32((1 - ((f5_s1_t_x/4)*2))))) + (hw_twi_global_wrapper.stencil(f5_s1_t_x, 0, 2)*(f4.1.stencil(f5_s1_t_x)*float32((1 - ((f5_s1_t_x/4)*2)))))) + ((f4.0.stencil(((f5_s1_t_x + 4) % 8))*hw_twi_global_wrapper.stencil(((f5_s1_t_x + 4) % 8), 1, 2)) + (f4.1.stencil(((f5_s1_t_x + 4) % 8))*hw_twi_global_wrapper.stencil(((f5_s1_t_x + 4) % 8), 0, 2))))
hw_uint<32> hcompute_f5_1_stencil_8(hw_uint<64>& f4_0_stencil, hw_uint<64>& f4_1_stencil, hw_uint<128>& hw_twi_global_wrapper_stencil, const int _f5_s1_t_x) {
  float _f4_0_stencil_3 = (float) f4_0_stencil.extract<0, 31>();
  float _f4_0_stencil_4 = (float) f4_0_stencil.extract<32, 63>();

  float _f4_1_stencil_3 = (float) f4_1_stencil.extract<0, 31>();
  float _f4_1_stencil_4 = (float) f4_1_stencil.extract<32, 63>();

  float _hw_twi_global_wrapper_stencil_22 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_23 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();
  float _hw_twi_global_wrapper_stencil_24 = (float) hw_twi_global_wrapper_stencil.extract<64, 95>();
  float _hw_twi_global_wrapper_stencil_25 = (float) hw_twi_global_wrapper_stencil.extract<96, 127>();

  int32_t _817 = _f5_s1_t_x >> 2;
  int32_t _818 = _817 * 2;
  int32_t _819 = 1 - _818;
  float _820 = (float)(_819);
  float _821 = _f4_0_stencil_3 * _820;
  float _822 = _hw_twi_global_wrapper_stencil_22 * _821;
  float _823 = _f4_1_stencil_3 * _820;
  float _824 = _hw_twi_global_wrapper_stencil_23 * _823;
  float _825 = _822 + _824;
  float _826 = _f4_0_stencil_4 * _hw_twi_global_wrapper_stencil_24;
  float _827 = _f4_1_stencil_4 * _hw_twi_global_wrapper_stencil_25;
  float _828 = _826 + _827;
  float _829 = _825 + _828;
  return _829;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = select((hw_output_s0_y_yi == 0), f5.0.stencil(hw_output_s0_x_xi), f5.1.stencil(hw_output_s0_x_xi))
hw_uint<32> hcompute_hw_output_stencil(hw_uint<32>& f5_0_stencil, hw_uint<32>& f5_1_stencil, const int _hw_output_s0_y_yi) {
  float _f5_0_stencil_1 = (float) f5_0_stencil.extract<0, 31>();

  float _f5_1_stencil_1 = (float) f5_1_stencil.extract<0, 31>();

  bool _867 = _hw_output_s0_y_yi == 0;
  float _868 = (float)(_867 ? _f5_0_stencil_1 : _f5_1_stencil_1);
  return _868;
}

