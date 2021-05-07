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

//store is: f3.0.stencil(((f3_s0_x_xo_3*4) + f3_s0_x_xi_3)) = (((hw_twi_global_wrapper.stencil(((f3_s0_x_xi_3*2) + f3_s0_x_xo_3), 0, 0)*(hw_input_global_wrapper.stencil(((f3_s0_x_xi_3*2) + f3_s0_x_xo_3), 0)*float32((1 - (f3_s0_x_xo_3*2))))) - (hw_twi_global_wrapper.stencil(((f3_s0_x_xi_3*2) + f3_s0_x_xo_3), 1, 0)*(hw_input_global_wrapper.stencil(((f3_s0_x_xi_3*2) + f3_s0_x_xo_3), 1)*float32((1 - (f3_s0_x_xo_3*2)))))) + ((hw_input_global_wrapper.stencil(((f3_s0_x_xi_3*2) + ((((f3_s0_x_xi_3*2) + f3_s0_x_xo_3) + 1) % 2)), 0)*hw_twi_global_wrapper.stencil(((f3_s0_x_xi_3*2) + ((((f3_s0_x_xi_3*2) + f3_s0_x_xo_3) + 1) % 2)), 0, 0)) - (hw_input_global_wrapper.stencil(((f3_s0_x_xi_3*2) + ((((f3_s0_x_xi_3*2) + f3_s0_x_xo_3) + 1) % 2)), 1)*hw_twi_global_wrapper.stencil(((f3_s0_x_xi_3*2) + ((((f3_s0_x_xi_3*2) + f3_s0_x_xo_3) + 1) % 2)), 1, 0))))
hw_uint<32> hcompute_f3_0_stencil(hw_uint<128>& hw_input_global_wrapper_stencil, hw_uint<128>& hw_twi_global_wrapper_stencil, const int _f3_s0_x_xo_3) {
  float _hw_input_global_wrapper_stencil_1 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();
  float _hw_input_global_wrapper_stencil_2 = (float) hw_input_global_wrapper_stencil.extract<32, 63>();
  float _hw_input_global_wrapper_stencil_3 = (float) hw_input_global_wrapper_stencil.extract<64, 95>();
  float _hw_input_global_wrapper_stencil_4 = (float) hw_input_global_wrapper_stencil.extract<96, 127>();

  float _hw_twi_global_wrapper_stencil_1 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_2 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();
  float _hw_twi_global_wrapper_stencil_3 = (float) hw_twi_global_wrapper_stencil.extract<64, 95>();
  float _hw_twi_global_wrapper_stencil_4 = (float) hw_twi_global_wrapper_stencil.extract<96, 127>();

  int32_t _309 = _f3_s0_x_xo_3 * 2;
  int32_t _310 = 1 - _309;
  float _311 = (float)(_310);
  float _312 = _hw_input_global_wrapper_stencil_1 * _311;
  float _313 = _hw_twi_global_wrapper_stencil_1 * _312;
  float _314 = _hw_input_global_wrapper_stencil_2 * _311;
  float _315 = _hw_twi_global_wrapper_stencil_2 * _314;
  float _316 = _313 - _315;
  float _317 = _hw_input_global_wrapper_stencil_3 * _hw_twi_global_wrapper_stencil_3;
  float _318 = _hw_input_global_wrapper_stencil_4 * _hw_twi_global_wrapper_stencil_4;
  float _319 = _317 - _318;
  float _320 = _316 + _319;
  return _320;
}

//store is: f3.1.stencil(((f3_s0_x_xo_3*4) + f3_s0_x_xi_3)) = (((hw_twi_global_wrapper.stencil(((f3_s0_x_xi_3*2) + f3_s0_x_xo_3), 1, 0)*(hw_input_global_wrapper.stencil(((f3_s0_x_xi_3*2) + f3_s0_x_xo_3), 0)*float32((1 - (f3_s0_x_xo_3*2))))) + (hw_twi_global_wrapper.stencil(((f3_s0_x_xi_3*2) + f3_s0_x_xo_3), 0, 0)*(hw_input_global_wrapper.stencil(((f3_s0_x_xi_3*2) + f3_s0_x_xo_3), 1)*float32((1 - (f3_s0_x_xo_3*2)))))) + ((hw_input_global_wrapper.stencil(((f3_s0_x_xi_3*2) + ((((f3_s0_x_xi_3*2) + f3_s0_x_xo_3) + 1) % 2)), 0)*hw_twi_global_wrapper.stencil(((f3_s0_x_xi_3*2) + ((((f3_s0_x_xi_3*2) + f3_s0_x_xo_3) + 1) % 2)), 1, 0)) + (hw_input_global_wrapper.stencil(((f3_s0_x_xi_3*2) + ((((f3_s0_x_xi_3*2) + f3_s0_x_xo_3) + 1) % 2)), 1)*hw_twi_global_wrapper.stencil(((f3_s0_x_xi_3*2) + ((((f3_s0_x_xi_3*2) + f3_s0_x_xo_3) + 1) % 2)), 0, 0))))
hw_uint<32> hcompute_f3_1_stencil(hw_uint<128>& hw_input_global_wrapper_stencil, hw_uint<128>& hw_twi_global_wrapper_stencil, const int _f3_s0_x_xo_3) {
  float _hw_input_global_wrapper_stencil_5 = (float) hw_input_global_wrapper_stencil.extract<0, 31>();
  float _hw_input_global_wrapper_stencil_6 = (float) hw_input_global_wrapper_stencil.extract<32, 63>();
  float _hw_input_global_wrapper_stencil_7 = (float) hw_input_global_wrapper_stencil.extract<64, 95>();
  float _hw_input_global_wrapper_stencil_8 = (float) hw_input_global_wrapper_stencil.extract<96, 127>();

  float _hw_twi_global_wrapper_stencil_5 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_6 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();
  float _hw_twi_global_wrapper_stencil_7 = (float) hw_twi_global_wrapper_stencil.extract<64, 95>();
  float _hw_twi_global_wrapper_stencil_8 = (float) hw_twi_global_wrapper_stencil.extract<96, 127>();

  int32_t _360 = _f3_s0_x_xo_3 * 2;
  int32_t _361 = 1 - _360;
  float _362 = (float)(_361);
  float _363 = _hw_input_global_wrapper_stencil_5 * _362;
  float _364 = _hw_twi_global_wrapper_stencil_5 * _363;
  float _365 = _hw_input_global_wrapper_stencil_6 * _362;
  float _366 = _hw_twi_global_wrapper_stencil_6 * _365;
  float _367 = _364 + _366;
  float _368 = _hw_input_global_wrapper_stencil_7 * _hw_twi_global_wrapper_stencil_7;
  float _369 = _hw_input_global_wrapper_stencil_8 * _hw_twi_global_wrapper_stencil_8;
  float _370 = _368 + _369;
  float _371 = _367 + _370;
  return _371;
}

//store is: f4.0.stencil(((f4_s0_x_xo_3*4) + f4_s0_x_xi_3)) = (((hw_twi_global_wrapper.stencil(((f4_s0_x_xi_3*2) + f4_s0_x_xo_3), 0, 1)*(f3.0.stencil(((f4_s0_x_xi_3*2) + f4_s0_x_xo_3))*float32((1 - (f4_s0_x_xo_3*2))))) - (hw_twi_global_wrapper.stencil(((f4_s0_x_xi_3*2) + f4_s0_x_xo_3), 1, 1)*(f3.1.stencil(((f4_s0_x_xi_3*2) + f4_s0_x_xo_3))*float32((1 - (f4_s0_x_xo_3*2)))))) + ((f3.0.stencil(((f4_s0_x_xi_3*2) + ((((f4_s0_x_xi_3*2) + f4_s0_x_xo_3) + 1) % 2)))*hw_twi_global_wrapper.stencil(((f4_s0_x_xi_3*2) + ((((f4_s0_x_xi_3*2) + f4_s0_x_xo_3) + 1) % 2)), 0, 1)) - (f3.1.stencil(((f4_s0_x_xi_3*2) + ((((f4_s0_x_xi_3*2) + f4_s0_x_xo_3) + 1) % 2)))*hw_twi_global_wrapper.stencil(((f4_s0_x_xi_3*2) + ((((f4_s0_x_xi_3*2) + f4_s0_x_xo_3) + 1) % 2)), 1, 1))))
hw_uint<32> hcompute_f4_0_stencil(hw_uint<64>& f3_0_stencil, hw_uint<64>& f3_1_stencil, hw_uint<128>& hw_twi_global_wrapper_stencil, const int _f4_s0_x_xo_3) {
  float _f3_0_stencil_1 = (float) f3_0_stencil.extract<0, 31>();
  float _f3_0_stencil_2 = (float) f3_0_stencil.extract<32, 63>();

  float _f3_1_stencil_1 = (float) f3_1_stencil.extract<0, 31>();
  float _f3_1_stencil_2 = (float) f3_1_stencil.extract<32, 63>();

  float _hw_twi_global_wrapper_stencil_10 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_11 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();
  float _hw_twi_global_wrapper_stencil_12 = (float) hw_twi_global_wrapper_stencil.extract<64, 95>();
  float _hw_twi_global_wrapper_stencil_9 = (float) hw_twi_global_wrapper_stencil.extract<96, 127>();

  int32_t _411 = _f4_s0_x_xo_3 * 2;
  int32_t _412 = 1 - _411;
  float _413 = (float)(_412);
  float _414 = _f3_0_stencil_1 * _413;
  float _415 = _hw_twi_global_wrapper_stencil_9 * _414;
  float _416 = _f3_1_stencil_1 * _413;
  float _417 = _hw_twi_global_wrapper_stencil_10 * _416;
  float _418 = _415 - _417;
  float _419 = _f3_0_stencil_2 * _hw_twi_global_wrapper_stencil_11;
  float _420 = _f3_1_stencil_2 * _hw_twi_global_wrapper_stencil_12;
  float _421 = _419 - _420;
  float _422 = _418 + _421;
  return _422;
}

//store is: f4.1.stencil(((f4_s0_x_xo_3*4) + f4_s0_x_xi_3)) = (((hw_twi_global_wrapper.stencil(((f4_s0_x_xi_3*2) + f4_s0_x_xo_3), 1, 1)*(f3.0.stencil(((f4_s0_x_xi_3*2) + f4_s0_x_xo_3))*float32((1 - (f4_s0_x_xo_3*2))))) + (hw_twi_global_wrapper.stencil(((f4_s0_x_xi_3*2) + f4_s0_x_xo_3), 0, 1)*(f3.1.stencil(((f4_s0_x_xi_3*2) + f4_s0_x_xo_3))*float32((1 - (f4_s0_x_xo_3*2)))))) + ((f3.0.stencil(((f4_s0_x_xi_3*2) + ((((f4_s0_x_xi_3*2) + f4_s0_x_xo_3) + 1) % 2)))*hw_twi_global_wrapper.stencil(((f4_s0_x_xi_3*2) + ((((f4_s0_x_xi_3*2) + f4_s0_x_xo_3) + 1) % 2)), 1, 1)) + (f3.1.stencil(((f4_s0_x_xi_3*2) + ((((f4_s0_x_xi_3*2) + f4_s0_x_xo_3) + 1) % 2)))*hw_twi_global_wrapper.stencil(((f4_s0_x_xi_3*2) + ((((f4_s0_x_xi_3*2) + f4_s0_x_xo_3) + 1) % 2)), 0, 1))))
hw_uint<32> hcompute_f4_1_stencil(hw_uint<64>& f3_0_stencil, hw_uint<64>& f3_1_stencil, hw_uint<128>& hw_twi_global_wrapper_stencil, const int _f4_s0_x_xo_3) {
  float _f3_0_stencil_3 = (float) f3_0_stencil.extract<0, 31>();
  float _f3_0_stencil_4 = (float) f3_0_stencil.extract<32, 63>();

  float _f3_1_stencil_3 = (float) f3_1_stencil.extract<0, 31>();
  float _f3_1_stencil_4 = (float) f3_1_stencil.extract<32, 63>();

  float _hw_twi_global_wrapper_stencil_13 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_14 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();
  float _hw_twi_global_wrapper_stencil_15 = (float) hw_twi_global_wrapper_stencil.extract<64, 95>();
  float _hw_twi_global_wrapper_stencil_16 = (float) hw_twi_global_wrapper_stencil.extract<96, 127>();

  int32_t _462 = _f4_s0_x_xo_3 * 2;
  int32_t _463 = 1 - _462;
  float _464 = (float)(_463);
  float _465 = _f3_0_stencil_3 * _464;
  float _466 = _hw_twi_global_wrapper_stencil_13 * _465;
  float _467 = _f3_1_stencil_3 * _464;
  float _468 = _hw_twi_global_wrapper_stencil_14 * _467;
  float _469 = _466 + _468;
  float _470 = _f3_0_stencil_4 * _hw_twi_global_wrapper_stencil_15;
  float _471 = _f3_1_stencil_4 * _hw_twi_global_wrapper_stencil_16;
  float _472 = _470 + _471;
  float _473 = _469 + _472;
  return _473;
}

//store is: f5.0.stencil(((f5_s0_x_xo_3*4) + f5_s0_x_xi_3)) = (((hw_twi_global_wrapper.stencil(((f5_s0_x_xi_3*2) + f5_s0_x_xo_3), 0, 2)*(f4.0.stencil(((f5_s0_x_xi_3*2) + f5_s0_x_xo_3))*float32((1 - (f5_s0_x_xo_3*2))))) - (hw_twi_global_wrapper.stencil(((f5_s0_x_xi_3*2) + f5_s0_x_xo_3), 1, 2)*(f4.1.stencil(((f5_s0_x_xi_3*2) + f5_s0_x_xo_3))*float32((1 - (f5_s0_x_xo_3*2)))))) + ((f4.0.stencil(((f5_s0_x_xi_3*2) + ((((f5_s0_x_xi_3*2) + f5_s0_x_xo_3) + 1) % 2)))*hw_twi_global_wrapper.stencil(((f5_s0_x_xi_3*2) + ((((f5_s0_x_xi_3*2) + f5_s0_x_xo_3) + 1) % 2)), 0, 2)) - (f4.1.stencil(((f5_s0_x_xi_3*2) + ((((f5_s0_x_xi_3*2) + f5_s0_x_xo_3) + 1) % 2)))*hw_twi_global_wrapper.stencil(((f5_s0_x_xi_3*2) + ((((f5_s0_x_xi_3*2) + f5_s0_x_xo_3) + 1) % 2)), 1, 2))))
hw_uint<32> hcompute_f5_0_stencil(hw_uint<64>& f4_0_stencil, hw_uint<64>& f4_1_stencil, hw_uint<128>& hw_twi_global_wrapper_stencil, const int _f5_s0_x_xo_3) {
  float _f4_0_stencil_1 = (float) f4_0_stencil.extract<0, 31>();
  float _f4_0_stencil_2 = (float) f4_0_stencil.extract<32, 63>();

  float _f4_1_stencil_1 = (float) f4_1_stencil.extract<0, 31>();
  float _f4_1_stencil_2 = (float) f4_1_stencil.extract<32, 63>();

  float _hw_twi_global_wrapper_stencil_17 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_18 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();
  float _hw_twi_global_wrapper_stencil_19 = (float) hw_twi_global_wrapper_stencil.extract<64, 95>();
  float _hw_twi_global_wrapper_stencil_20 = (float) hw_twi_global_wrapper_stencil.extract<96, 127>();

  int32_t _513 = _f5_s0_x_xo_3 * 2;
  int32_t _514 = 1 - _513;
  float _515 = (float)(_514);
  float _516 = _f4_0_stencil_1 * _515;
  float _517 = _hw_twi_global_wrapper_stencil_17 * _516;
  float _518 = _f4_1_stencil_1 * _515;
  float _519 = _hw_twi_global_wrapper_stencil_18 * _518;
  float _520 = _517 - _519;
  float _521 = _f4_0_stencil_2 * _hw_twi_global_wrapper_stencil_19;
  float _522 = _f4_1_stencil_2 * _hw_twi_global_wrapper_stencil_20;
  float _523 = _521 - _522;
  float _524 = _520 + _523;
  return _524;
}

//store is: f5.1.stencil(((f5_s0_x_xo_3*4) + f5_s0_x_xi_3)) = (((hw_twi_global_wrapper.stencil(((f5_s0_x_xi_3*2) + f5_s0_x_xo_3), 1, 2)*(f4.0.stencil(((f5_s0_x_xi_3*2) + f5_s0_x_xo_3))*float32((1 - (f5_s0_x_xo_3*2))))) + (hw_twi_global_wrapper.stencil(((f5_s0_x_xi_3*2) + f5_s0_x_xo_3), 0, 2)*(f4.1.stencil(((f5_s0_x_xi_3*2) + f5_s0_x_xo_3))*float32((1 - (f5_s0_x_xo_3*2)))))) + ((f4.0.stencil(((f5_s0_x_xi_3*2) + ((((f5_s0_x_xi_3*2) + f5_s0_x_xo_3) + 1) % 2)))*hw_twi_global_wrapper.stencil(((f5_s0_x_xi_3*2) + ((((f5_s0_x_xi_3*2) + f5_s0_x_xo_3) + 1) % 2)), 1, 2)) + (f4.1.stencil(((f5_s0_x_xi_3*2) + ((((f5_s0_x_xi_3*2) + f5_s0_x_xo_3) + 1) % 2)))*hw_twi_global_wrapper.stencil(((f5_s0_x_xi_3*2) + ((((f5_s0_x_xi_3*2) + f5_s0_x_xo_3) + 1) % 2)), 0, 2))))
hw_uint<32> hcompute_f5_1_stencil(hw_uint<64>& f4_0_stencil, hw_uint<64>& f4_1_stencil, hw_uint<128>& hw_twi_global_wrapper_stencil, const int _f5_s0_x_xo_3) {
  float _f4_0_stencil_3 = (float) f4_0_stencil.extract<0, 31>();
  float _f4_0_stencil_4 = (float) f4_0_stencil.extract<32, 63>();

  float _f4_1_stencil_3 = (float) f4_1_stencil.extract<0, 31>();
  float _f4_1_stencil_4 = (float) f4_1_stencil.extract<32, 63>();

  float _hw_twi_global_wrapper_stencil_21 = (float) hw_twi_global_wrapper_stencil.extract<0, 31>();
  float _hw_twi_global_wrapper_stencil_22 = (float) hw_twi_global_wrapper_stencil.extract<32, 63>();
  float _hw_twi_global_wrapper_stencil_23 = (float) hw_twi_global_wrapper_stencil.extract<64, 95>();
  float _hw_twi_global_wrapper_stencil_24 = (float) hw_twi_global_wrapper_stencil.extract<96, 127>();

  int32_t _564 = _f5_s0_x_xo_3 * 2;
  int32_t _565 = 1 - _564;
  float _566 = (float)(_565);
  float _567 = _f4_0_stencil_3 * _566;
  float _568 = _hw_twi_global_wrapper_stencil_21 * _567;
  float _569 = _f4_1_stencil_3 * _566;
  float _570 = _hw_twi_global_wrapper_stencil_22 * _569;
  float _571 = _568 + _570;
  float _572 = _f4_0_stencil_4 * _hw_twi_global_wrapper_stencil_23;
  float _573 = _f4_1_stencil_4 * _hw_twi_global_wrapper_stencil_24;
  float _574 = _572 + _573;
  float _575 = _571 + _574;
  return _575;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = select((hw_output_s0_y_yi == 0), f5.0.stencil(hw_output_s0_x_xi), f5.1.stencil(hw_output_s0_x_xi))
hw_uint<32> hcompute_hw_output_stencil(hw_uint<32>& f5_0_stencil, hw_uint<32>& f5_1_stencil, const int _hw_output_s0_y_yi) {
  float _f5_0_stencil_1 = (float) f5_0_stencil.extract<0, 31>();

  float _f5_1_stencil_1 = (float) f5_1_stencil.extract<0, 31>();

  bool _615 = _hw_output_s0_y_yi == 0;
  float _616 = (float)(_615 ? _f5_0_stencil_1 : _f5_1_stencil_1);
  return _616;
}

