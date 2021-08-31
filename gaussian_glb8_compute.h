#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.glb.stencil((hw_input_global_wrapper_s0_x_x*8), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x + (0*32))*8), hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_1;
}

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*8) + 1), hw_input_global_wrapper_s0_y) = hw_input.stencil((((hw_input_global_wrapper_s0_x_x + (0*32))*8) + 1), hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_1(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_2 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_2;
}

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*8) + 2), hw_input_global_wrapper_s0_y) = hw_input.stencil((((hw_input_global_wrapper_s0_x_x + (0*32))*8) + 2), hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_2(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_3 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_3;
}

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*8) + 3), hw_input_global_wrapper_s0_y) = hw_input.stencil((((hw_input_global_wrapper_s0_x_x + (0*32))*8) + 3), hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_3(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_4 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_4;
}

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*8) + 4), hw_input_global_wrapper_s0_y) = hw_input.stencil((((hw_input_global_wrapper_s0_x_x + (0*32))*8) + 4), hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_4(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_5 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_5;
}

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*8) + 5), hw_input_global_wrapper_s0_y) = hw_input.stencil((((hw_input_global_wrapper_s0_x_x + (0*32))*8) + 5), hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_5(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_6 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_6;
}

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*8) + 6), hw_input_global_wrapper_s0_y) = hw_input.stencil((((hw_input_global_wrapper_s0_x_x + (0*32))*8) + 6), hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_6(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_7 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_7;
}

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*8) + 7), hw_input_global_wrapper_s0_y) = hw_input.stencil((((hw_input_global_wrapper_s0_x_x + (0*32))*8) + 7), hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_7(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_8 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_8;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil((hw_input_global_wrapper_global_wrapper_s0_x_x*8), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil((hw_input_global_wrapper_global_wrapper_s0_x_x*8), hw_input_global_wrapper_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_1 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_1;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 1), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 1), hw_input_global_wrapper_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_1(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_2 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_2;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 2), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 2), hw_input_global_wrapper_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_2(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_3 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_3;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 3), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 3), hw_input_global_wrapper_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_3(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_4 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_4;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 4), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 4), hw_input_global_wrapper_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_4(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_5 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_5;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 5), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 5), hw_input_global_wrapper_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_5(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_6 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_6;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 6), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 6), hw_input_global_wrapper_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_6(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_7 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_7;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 7), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*8) + 7), hw_input_global_wrapper_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_7(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_8 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_8;
}

//store is: blur_unnormalized.stencil((blur_unnormalized_s0_x_x*8), blur_unnormalized_s0_y) = (uint16)0
hw_uint<16> hcompute_blur_unnormalized_stencil() {
  uint16_t _334 = (uint16_t)(0);
  return _334;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*8) + 1), blur_unnormalized_s0_y) = (uint16)0
hw_uint<16> hcompute_blur_unnormalized_stencil_1() {
  uint16_t _338 = (uint16_t)(0);
  return _338;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*8) + 2), blur_unnormalized_s0_y) = (uint16)0
hw_uint<16> hcompute_blur_unnormalized_stencil_2() {
  uint16_t _343 = (uint16_t)(0);
  return _343;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*8) + 3), blur_unnormalized_s0_y) = (uint16)0
hw_uint<16> hcompute_blur_unnormalized_stencil_3() {
  uint16_t _348 = (uint16_t)(0);
  return _348;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*8) + 4), blur_unnormalized_s0_y) = (uint16)0
hw_uint<16> hcompute_blur_unnormalized_stencil_4() {
  uint16_t _353 = (uint16_t)(0);
  return _353;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*8) + 5), blur_unnormalized_s0_y) = (uint16)0
hw_uint<16> hcompute_blur_unnormalized_stencil_5() {
  uint16_t _358 = (uint16_t)(0);
  return _358;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*8) + 6), blur_unnormalized_s0_y) = (uint16)0
hw_uint<16> hcompute_blur_unnormalized_stencil_6() {
  uint16_t _363 = (uint16_t)(0);
  return _363;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*8) + 7), blur_unnormalized_s0_y) = (uint16)0
hw_uint<16> hcompute_blur_unnormalized_stencil_7() {
  uint16_t _368 = (uint16_t)(0);
  return _368;
}

//store is: blur_unnormalized.stencil((blur_unnormalized_s1_x_x*8), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil((blur_unnormalized_s1_x_x*8), blur_unnormalized_s1_y)*(uint16)24) + (blur_unnormalized.stencil((blur_unnormalized_s1_x_x*8), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 1), blur_unnormalized_s1_y)*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 2), blur_unnormalized_s1_y)*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil((blur_unnormalized_s1_x_x*8), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 1), (blur_unnormalized_s1_y + 1))*(uint16)37) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 2), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil((blur_unnormalized_s1_x_x*8), (blur_unnormalized_s1_y + 2))*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 2), (blur_unnormalized_s1_y + 2))*(uint16)24) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 1), (blur_unnormalized_s1_y + 2))*(uint16)30))))))))))
hw_uint<16> hcompute_blur_unnormalized_stencil_8(hw_uint<16>& blur_unnormalized_stencil, hw_uint<144>& hw_input_global_wrapper_global_wrapper_stencil) {
  uint16_t _blur_unnormalized_stencil_1 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_1 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_2 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_3 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_4 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<48, 63>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_5 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<64, 79>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_6 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<80, 95>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_7 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<96, 111>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_8 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<112, 127>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_9 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<128, 143>();

  uint16_t _373 = (uint16_t)(24);
  uint16_t _374 = _hw_input_global_wrapper_global_wrapper_stencil_1 * _373;
  uint16_t _375 = (uint16_t)(30);
  uint16_t _376 = _hw_input_global_wrapper_global_wrapper_stencil_2 * _375;
  uint16_t _377 = _hw_input_global_wrapper_global_wrapper_stencil_3 * _373;
  uint16_t _378 = _hw_input_global_wrapper_global_wrapper_stencil_4 * _375;
  uint16_t _379 = (uint16_t)(37);
  uint16_t _380 = _hw_input_global_wrapper_global_wrapper_stencil_5 * _379;
  uint16_t _381 = _hw_input_global_wrapper_global_wrapper_stencil_6 * _375;
  uint16_t _382 = _hw_input_global_wrapper_global_wrapper_stencil_7 * _373;
  uint16_t _383 = _hw_input_global_wrapper_global_wrapper_stencil_8 * _373;
  uint16_t _384 = _hw_input_global_wrapper_global_wrapper_stencil_9 * _375;
  uint16_t _385 = _383 + _384;
  uint16_t _386 = _382 + _385;
  uint16_t _387 = _381 + _386;
  uint16_t _388 = _380 + _387;
  uint16_t _389 = _378 + _388;
  uint16_t _390 = _377 + _389;
  uint16_t _391 = _376 + _390;
  uint16_t _392 = _blur_unnormalized_stencil_1 + _391;
  uint16_t _393 = _374 + _392;
  return _393;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*8) + 1), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 1), blur_unnormalized_s1_y)*(uint16)24) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*8) + 1), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 2), blur_unnormalized_s1_y)*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 3), blur_unnormalized_s1_y)*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 1), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 2), (blur_unnormalized_s1_y + 1))*(uint16)37) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 3), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 1), (blur_unnormalized_s1_y + 2))*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 3), (blur_unnormalized_s1_y + 2))*(uint16)24) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 2), (blur_unnormalized_s1_y + 2))*(uint16)30))))))))))
hw_uint<16> hcompute_blur_unnormalized_stencil_9(hw_uint<16>& blur_unnormalized_stencil, hw_uint<144>& hw_input_global_wrapper_global_wrapper_stencil) {
  uint16_t _blur_unnormalized_stencil_2 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_10 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_11 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_12 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_13 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<48, 63>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_14 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<64, 79>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_15 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<80, 95>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_16 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<96, 111>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_17 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<112, 127>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_18 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<128, 143>();

  uint16_t _451 = (uint16_t)(24);
  uint16_t _452 = _hw_input_global_wrapper_global_wrapper_stencil_10 * _451;
  uint16_t _453 = (uint16_t)(30);
  uint16_t _454 = _hw_input_global_wrapper_global_wrapper_stencil_11 * _453;
  uint16_t _455 = _hw_input_global_wrapper_global_wrapper_stencil_12 * _451;
  uint16_t _456 = _hw_input_global_wrapper_global_wrapper_stencil_13 * _453;
  uint16_t _457 = (uint16_t)(37);
  uint16_t _458 = _hw_input_global_wrapper_global_wrapper_stencil_14 * _457;
  uint16_t _459 = _hw_input_global_wrapper_global_wrapper_stencil_15 * _453;
  uint16_t _460 = _hw_input_global_wrapper_global_wrapper_stencil_16 * _451;
  uint16_t _461 = _hw_input_global_wrapper_global_wrapper_stencil_17 * _451;
  uint16_t _462 = _hw_input_global_wrapper_global_wrapper_stencil_18 * _453;
  uint16_t _463 = _461 + _462;
  uint16_t _464 = _460 + _463;
  uint16_t _465 = _459 + _464;
  uint16_t _466 = _458 + _465;
  uint16_t _467 = _456 + _466;
  uint16_t _468 = _455 + _467;
  uint16_t _469 = _454 + _468;
  uint16_t _470 = _blur_unnormalized_stencil_2 + _469;
  uint16_t _471 = _452 + _470;
  return _471;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*8) + 2), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 2), blur_unnormalized_s1_y)*(uint16)24) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*8) + 2), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 3), blur_unnormalized_s1_y)*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 4), blur_unnormalized_s1_y)*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 2), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 3), (blur_unnormalized_s1_y + 1))*(uint16)37) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 4), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 2), (blur_unnormalized_s1_y + 2))*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 4), (blur_unnormalized_s1_y + 2))*(uint16)24) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 3), (blur_unnormalized_s1_y + 2))*(uint16)30))))))))))
hw_uint<16> hcompute_blur_unnormalized_stencil_10(hw_uint<16>& blur_unnormalized_stencil, hw_uint<144>& hw_input_global_wrapper_global_wrapper_stencil) {
  uint16_t _blur_unnormalized_stencil_3 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_19 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_20 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_21 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_22 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<48, 63>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_23 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<64, 79>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_24 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<80, 95>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_25 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<96, 111>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_26 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<112, 127>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_27 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<128, 143>();

  uint16_t _530 = (uint16_t)(24);
  uint16_t _531 = _hw_input_global_wrapper_global_wrapper_stencil_19 * _530;
  uint16_t _532 = (uint16_t)(30);
  uint16_t _533 = _hw_input_global_wrapper_global_wrapper_stencil_20 * _532;
  uint16_t _534 = _hw_input_global_wrapper_global_wrapper_stencil_21 * _530;
  uint16_t _535 = _hw_input_global_wrapper_global_wrapper_stencil_22 * _532;
  uint16_t _536 = (uint16_t)(37);
  uint16_t _537 = _hw_input_global_wrapper_global_wrapper_stencil_23 * _536;
  uint16_t _538 = _hw_input_global_wrapper_global_wrapper_stencil_24 * _532;
  uint16_t _539 = _hw_input_global_wrapper_global_wrapper_stencil_25 * _530;
  uint16_t _540 = _hw_input_global_wrapper_global_wrapper_stencil_26 * _530;
  uint16_t _541 = _hw_input_global_wrapper_global_wrapper_stencil_27 * _532;
  uint16_t _542 = _540 + _541;
  uint16_t _543 = _539 + _542;
  uint16_t _544 = _538 + _543;
  uint16_t _545 = _537 + _544;
  uint16_t _546 = _535 + _545;
  uint16_t _547 = _534 + _546;
  uint16_t _548 = _533 + _547;
  uint16_t _549 = _blur_unnormalized_stencil_3 + _548;
  uint16_t _550 = _531 + _549;
  return _550;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*8) + 3), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 3), blur_unnormalized_s1_y)*(uint16)24) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*8) + 3), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 4), blur_unnormalized_s1_y)*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 5), blur_unnormalized_s1_y)*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 3), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 4), (blur_unnormalized_s1_y + 1))*(uint16)37) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 5), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 3), (blur_unnormalized_s1_y + 2))*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 5), (blur_unnormalized_s1_y + 2))*(uint16)24) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 4), (blur_unnormalized_s1_y + 2))*(uint16)30))))))))))
hw_uint<16> hcompute_blur_unnormalized_stencil_11(hw_uint<16>& blur_unnormalized_stencil, hw_uint<144>& hw_input_global_wrapper_global_wrapper_stencil) {
  uint16_t _blur_unnormalized_stencil_4 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_28 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_29 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_30 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_31 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<48, 63>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_32 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<64, 79>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_33 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<80, 95>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_34 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<96, 111>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_35 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<112, 127>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_36 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<128, 143>();

  uint16_t _609 = (uint16_t)(24);
  uint16_t _610 = _hw_input_global_wrapper_global_wrapper_stencil_28 * _609;
  uint16_t _611 = (uint16_t)(30);
  uint16_t _612 = _hw_input_global_wrapper_global_wrapper_stencil_29 * _611;
  uint16_t _613 = _hw_input_global_wrapper_global_wrapper_stencil_30 * _609;
  uint16_t _614 = _hw_input_global_wrapper_global_wrapper_stencil_31 * _611;
  uint16_t _615 = (uint16_t)(37);
  uint16_t _616 = _hw_input_global_wrapper_global_wrapper_stencil_32 * _615;
  uint16_t _617 = _hw_input_global_wrapper_global_wrapper_stencil_33 * _611;
  uint16_t _618 = _hw_input_global_wrapper_global_wrapper_stencil_34 * _609;
  uint16_t _619 = _hw_input_global_wrapper_global_wrapper_stencil_35 * _609;
  uint16_t _620 = _hw_input_global_wrapper_global_wrapper_stencil_36 * _611;
  uint16_t _621 = _619 + _620;
  uint16_t _622 = _618 + _621;
  uint16_t _623 = _617 + _622;
  uint16_t _624 = _616 + _623;
  uint16_t _625 = _614 + _624;
  uint16_t _626 = _613 + _625;
  uint16_t _627 = _612 + _626;
  uint16_t _628 = _blur_unnormalized_stencil_4 + _627;
  uint16_t _629 = _610 + _628;
  return _629;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*8) + 4), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 4), blur_unnormalized_s1_y)*(uint16)24) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*8) + 4), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 5), blur_unnormalized_s1_y)*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 6), blur_unnormalized_s1_y)*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 4), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 5), (blur_unnormalized_s1_y + 1))*(uint16)37) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 6), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 4), (blur_unnormalized_s1_y + 2))*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 6), (blur_unnormalized_s1_y + 2))*(uint16)24) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 5), (blur_unnormalized_s1_y + 2))*(uint16)30))))))))))
hw_uint<16> hcompute_blur_unnormalized_stencil_12(hw_uint<16>& blur_unnormalized_stencil, hw_uint<144>& hw_input_global_wrapper_global_wrapper_stencil) {
  uint16_t _blur_unnormalized_stencil_5 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_37 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_38 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_39 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_40 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<48, 63>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_41 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<64, 79>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_42 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<80, 95>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_43 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<96, 111>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_44 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<112, 127>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_45 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<128, 143>();

  uint16_t _688 = (uint16_t)(24);
  uint16_t _689 = _hw_input_global_wrapper_global_wrapper_stencil_37 * _688;
  uint16_t _690 = (uint16_t)(30);
  uint16_t _691 = _hw_input_global_wrapper_global_wrapper_stencil_38 * _690;
  uint16_t _692 = _hw_input_global_wrapper_global_wrapper_stencil_39 * _688;
  uint16_t _693 = _hw_input_global_wrapper_global_wrapper_stencil_40 * _690;
  uint16_t _694 = (uint16_t)(37);
  uint16_t _695 = _hw_input_global_wrapper_global_wrapper_stencil_41 * _694;
  uint16_t _696 = _hw_input_global_wrapper_global_wrapper_stencil_42 * _690;
  uint16_t _697 = _hw_input_global_wrapper_global_wrapper_stencil_43 * _688;
  uint16_t _698 = _hw_input_global_wrapper_global_wrapper_stencil_44 * _688;
  uint16_t _699 = _hw_input_global_wrapper_global_wrapper_stencil_45 * _690;
  uint16_t _700 = _698 + _699;
  uint16_t _701 = _697 + _700;
  uint16_t _702 = _696 + _701;
  uint16_t _703 = _695 + _702;
  uint16_t _704 = _693 + _703;
  uint16_t _705 = _692 + _704;
  uint16_t _706 = _691 + _705;
  uint16_t _707 = _blur_unnormalized_stencil_5 + _706;
  uint16_t _708 = _689 + _707;
  return _708;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*8) + 5), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 5), blur_unnormalized_s1_y)*(uint16)24) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*8) + 5), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 6), blur_unnormalized_s1_y)*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 7), blur_unnormalized_s1_y)*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 5), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 6), (blur_unnormalized_s1_y + 1))*(uint16)37) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 7), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 5), (blur_unnormalized_s1_y + 2))*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 7), (blur_unnormalized_s1_y + 2))*(uint16)24) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 6), (blur_unnormalized_s1_y + 2))*(uint16)30))))))))))
hw_uint<16> hcompute_blur_unnormalized_stencil_13(hw_uint<16>& blur_unnormalized_stencil, hw_uint<144>& hw_input_global_wrapper_global_wrapper_stencil) {
  uint16_t _blur_unnormalized_stencil_6 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_46 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_47 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_48 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_49 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<48, 63>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_50 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<64, 79>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_51 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<80, 95>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_52 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<96, 111>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_53 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<112, 127>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_54 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<128, 143>();

  uint16_t _767 = (uint16_t)(24);
  uint16_t _768 = _hw_input_global_wrapper_global_wrapper_stencil_46 * _767;
  uint16_t _769 = (uint16_t)(30);
  uint16_t _770 = _hw_input_global_wrapper_global_wrapper_stencil_47 * _769;
  uint16_t _771 = _hw_input_global_wrapper_global_wrapper_stencil_48 * _767;
  uint16_t _772 = _hw_input_global_wrapper_global_wrapper_stencil_49 * _769;
  uint16_t _773 = (uint16_t)(37);
  uint16_t _774 = _hw_input_global_wrapper_global_wrapper_stencil_50 * _773;
  uint16_t _775 = _hw_input_global_wrapper_global_wrapper_stencil_51 * _769;
  uint16_t _776 = _hw_input_global_wrapper_global_wrapper_stencil_52 * _767;
  uint16_t _777 = _hw_input_global_wrapper_global_wrapper_stencil_53 * _767;
  uint16_t _778 = _hw_input_global_wrapper_global_wrapper_stencil_54 * _769;
  uint16_t _779 = _777 + _778;
  uint16_t _780 = _776 + _779;
  uint16_t _781 = _775 + _780;
  uint16_t _782 = _774 + _781;
  uint16_t _783 = _772 + _782;
  uint16_t _784 = _771 + _783;
  uint16_t _785 = _770 + _784;
  uint16_t _786 = _blur_unnormalized_stencil_6 + _785;
  uint16_t _787 = _768 + _786;
  return _787;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*8) + 6), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 6), blur_unnormalized_s1_y)*(uint16)24) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*8) + 6), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 7), blur_unnormalized_s1_y)*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 8), blur_unnormalized_s1_y)*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 6), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 7), (blur_unnormalized_s1_y + 1))*(uint16)37) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 8), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 6), (blur_unnormalized_s1_y + 2))*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 8), (blur_unnormalized_s1_y + 2))*(uint16)24) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 7), (blur_unnormalized_s1_y + 2))*(uint16)30))))))))))
hw_uint<16> hcompute_blur_unnormalized_stencil_14(hw_uint<16>& blur_unnormalized_stencil, hw_uint<144>& hw_input_global_wrapper_global_wrapper_stencil) {
  uint16_t _blur_unnormalized_stencil_7 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_55 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_56 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_57 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_58 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<48, 63>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_59 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<64, 79>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_60 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<80, 95>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_61 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<96, 111>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_62 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<112, 127>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_63 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<128, 143>();

  uint16_t _846 = (uint16_t)(24);
  uint16_t _847 = _hw_input_global_wrapper_global_wrapper_stencil_55 * _846;
  uint16_t _848 = (uint16_t)(30);
  uint16_t _849 = _hw_input_global_wrapper_global_wrapper_stencil_56 * _848;
  uint16_t _850 = _hw_input_global_wrapper_global_wrapper_stencil_57 * _846;
  uint16_t _851 = _hw_input_global_wrapper_global_wrapper_stencil_58 * _848;
  uint16_t _852 = (uint16_t)(37);
  uint16_t _853 = _hw_input_global_wrapper_global_wrapper_stencil_59 * _852;
  uint16_t _854 = _hw_input_global_wrapper_global_wrapper_stencil_60 * _848;
  uint16_t _855 = _hw_input_global_wrapper_global_wrapper_stencil_61 * _846;
  uint16_t _856 = _hw_input_global_wrapper_global_wrapper_stencil_62 * _846;
  uint16_t _857 = _hw_input_global_wrapper_global_wrapper_stencil_63 * _848;
  uint16_t _858 = _856 + _857;
  uint16_t _859 = _855 + _858;
  uint16_t _860 = _854 + _859;
  uint16_t _861 = _853 + _860;
  uint16_t _862 = _851 + _861;
  uint16_t _863 = _850 + _862;
  uint16_t _864 = _849 + _863;
  uint16_t _865 = _blur_unnormalized_stencil_7 + _864;
  uint16_t _866 = _847 + _865;
  return _866;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*8) + 7), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 7), blur_unnormalized_s1_y)*(uint16)24) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*8) + 7), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 8), blur_unnormalized_s1_y)*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 9), blur_unnormalized_s1_y)*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 7), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 8), (blur_unnormalized_s1_y + 1))*(uint16)37) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 9), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 7), (blur_unnormalized_s1_y + 2))*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 9), (blur_unnormalized_s1_y + 2))*(uint16)24) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*8) + 8), (blur_unnormalized_s1_y + 2))*(uint16)30))))))))))
hw_uint<16> hcompute_blur_unnormalized_stencil_15(hw_uint<16>& blur_unnormalized_stencil, hw_uint<144>& hw_input_global_wrapper_global_wrapper_stencil) {
  uint16_t _blur_unnormalized_stencil_8 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_64 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_65 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_66 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_67 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<48, 63>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_68 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<64, 79>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_69 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<80, 95>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_70 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<96, 111>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_71 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<112, 127>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_72 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<128, 143>();

  uint16_t _925 = (uint16_t)(24);
  uint16_t _926 = _hw_input_global_wrapper_global_wrapper_stencil_64 * _925;
  uint16_t _927 = (uint16_t)(30);
  uint16_t _928 = _hw_input_global_wrapper_global_wrapper_stencil_65 * _927;
  uint16_t _929 = _hw_input_global_wrapper_global_wrapper_stencil_66 * _925;
  uint16_t _930 = _hw_input_global_wrapper_global_wrapper_stencil_67 * _927;
  uint16_t _931 = (uint16_t)(37);
  uint16_t _932 = _hw_input_global_wrapper_global_wrapper_stencil_68 * _931;
  uint16_t _933 = _hw_input_global_wrapper_global_wrapper_stencil_69 * _927;
  uint16_t _934 = _hw_input_global_wrapper_global_wrapper_stencil_70 * _925;
  uint16_t _935 = _hw_input_global_wrapper_global_wrapper_stencil_71 * _925;
  uint16_t _936 = _hw_input_global_wrapper_global_wrapper_stencil_72 * _927;
  uint16_t _937 = _935 + _936;
  uint16_t _938 = _934 + _937;
  uint16_t _939 = _933 + _938;
  uint16_t _940 = _932 + _939;
  uint16_t _941 = _930 + _940;
  uint16_t _942 = _929 + _941;
  uint16_t _943 = _928 + _942;
  uint16_t _944 = _blur_unnormalized_stencil_8 + _943;
  uint16_t _945 = _926 + _944;
  return _945;
}

//store is: blur.stencil((blur_s0_x_x*8), blur_s0_y) = (blur_unnormalized.stencil((blur_s0_x_x*8), blur_s0_y)/(uint16)256)
hw_uint<16> hcompute_blur_stencil(hw_uint<16>& blur_unnormalized_stencil) {
  uint16_t _blur_unnormalized_stencil_9 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _1004 = (uint16_t)(8);
  uint16_t _1005 = _blur_unnormalized_stencil_9 >> _1004;
  return _1005;
}

//store is: blur.stencil(((blur_s0_x_x*8) + 1), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*8) + 1), blur_s0_y)/(uint16)256)
hw_uint<16> hcompute_blur_stencil_1(hw_uint<16>& blur_unnormalized_stencil) {
  uint16_t _blur_unnormalized_stencil_10 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _1012 = (uint16_t)(8);
  uint16_t _1013 = _blur_unnormalized_stencil_10 >> _1012;
  return _1013;
}

//store is: blur.stencil(((blur_s0_x_x*8) + 2), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*8) + 2), blur_s0_y)/(uint16)256)
hw_uint<16> hcompute_blur_stencil_2(hw_uint<16>& blur_unnormalized_stencil) {
  uint16_t _blur_unnormalized_stencil_11 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _1021 = (uint16_t)(8);
  uint16_t _1022 = _blur_unnormalized_stencil_11 >> _1021;
  return _1022;
}

//store is: blur.stencil(((blur_s0_x_x*8) + 3), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*8) + 3), blur_s0_y)/(uint16)256)
hw_uint<16> hcompute_blur_stencil_3(hw_uint<16>& blur_unnormalized_stencil) {
  uint16_t _blur_unnormalized_stencil_12 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _1030 = (uint16_t)(8);
  uint16_t _1031 = _blur_unnormalized_stencil_12 >> _1030;
  return _1031;
}

//store is: blur.stencil(((blur_s0_x_x*8) + 4), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*8) + 4), blur_s0_y)/(uint16)256)
hw_uint<16> hcompute_blur_stencil_4(hw_uint<16>& blur_unnormalized_stencil) {
  uint16_t _blur_unnormalized_stencil_13 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _1039 = (uint16_t)(8);
  uint16_t _1040 = _blur_unnormalized_stencil_13 >> _1039;
  return _1040;
}

//store is: blur.stencil(((blur_s0_x_x*8) + 5), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*8) + 5), blur_s0_y)/(uint16)256)
hw_uint<16> hcompute_blur_stencil_5(hw_uint<16>& blur_unnormalized_stencil) {
  uint16_t _blur_unnormalized_stencil_14 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _1048 = (uint16_t)(8);
  uint16_t _1049 = _blur_unnormalized_stencil_14 >> _1048;
  return _1049;
}

//store is: blur.stencil(((blur_s0_x_x*8) + 6), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*8) + 6), blur_s0_y)/(uint16)256)
hw_uint<16> hcompute_blur_stencil_6(hw_uint<16>& blur_unnormalized_stencil) {
  uint16_t _blur_unnormalized_stencil_15 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _1057 = (uint16_t)(8);
  uint16_t _1058 = _blur_unnormalized_stencil_15 >> _1057;
  return _1058;
}

//store is: blur.stencil(((blur_s0_x_x*8) + 7), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*8) + 7), blur_s0_y)/(uint16)256)
hw_uint<16> hcompute_blur_stencil_7(hw_uint<16>& blur_unnormalized_stencil) {
  uint16_t _blur_unnormalized_stencil_16 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _1066 = (uint16_t)(8);
  uint16_t _1067 = _blur_unnormalized_stencil_16 >> _1066;
  return _1067;
}

//store is: hw_output.stencil((hw_output_s0_x_xi_xi*8), hw_output_s0_y_yi) = blur.stencil((hw_output_s0_x_xi_xi*8), hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& blur_stencil) {
  uint16_t _blur_stencil_1 = (uint16_t) blur_stencil.extract<0, 15>();

  return _blur_stencil_1;
}

//store is: hw_output.stencil(((hw_output_s0_x_xi_xi*8) + 1), hw_output_s0_y_yi) = blur.stencil(((hw_output_s0_x_xi_xi*8) + 1), hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil_1(hw_uint<16>& blur_stencil) {
  uint16_t _blur_stencil_2 = (uint16_t) blur_stencil.extract<0, 15>();

  return _blur_stencil_2;
}

//store is: hw_output.stencil(((hw_output_s0_x_xi_xi*8) + 2), hw_output_s0_y_yi) = blur.stencil(((hw_output_s0_x_xi_xi*8) + 2), hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil_2(hw_uint<16>& blur_stencil) {
  uint16_t _blur_stencil_3 = (uint16_t) blur_stencil.extract<0, 15>();

  return _blur_stencil_3;
}

//store is: hw_output.stencil(((hw_output_s0_x_xi_xi*8) + 3), hw_output_s0_y_yi) = blur.stencil(((hw_output_s0_x_xi_xi*8) + 3), hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil_3(hw_uint<16>& blur_stencil) {
  uint16_t _blur_stencil_4 = (uint16_t) blur_stencil.extract<0, 15>();

  return _blur_stencil_4;
}

//store is: hw_output.stencil(((hw_output_s0_x_xi_xi*8) + 4), hw_output_s0_y_yi) = blur.stencil(((hw_output_s0_x_xi_xi*8) + 4), hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil_4(hw_uint<16>& blur_stencil) {
  uint16_t _blur_stencil_5 = (uint16_t) blur_stencil.extract<0, 15>();

  return _blur_stencil_5;
}

//store is: hw_output.stencil(((hw_output_s0_x_xi_xi*8) + 5), hw_output_s0_y_yi) = blur.stencil(((hw_output_s0_x_xi_xi*8) + 5), hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil_5(hw_uint<16>& blur_stencil) {
  uint16_t _blur_stencil_6 = (uint16_t) blur_stencil.extract<0, 15>();

  return _blur_stencil_6;
}

//store is: hw_output.stencil(((hw_output_s0_x_xi_xi*8) + 6), hw_output_s0_y_yi) = blur.stencil(((hw_output_s0_x_xi_xi*8) + 6), hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil_6(hw_uint<16>& blur_stencil) {
  uint16_t _blur_stencil_7 = (uint16_t) blur_stencil.extract<0, 15>();

  return _blur_stencil_7;
}

//store is: hw_output.stencil(((hw_output_s0_x_xi_xi*8) + 7), hw_output_s0_y_yi) = blur.stencil(((hw_output_s0_x_xi_xi*8) + 7), hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil_7(hw_uint<16>& blur_stencil) {
  uint16_t _blur_stencil_8 = (uint16_t) blur_stencil.extract<0, 15>();

  return _blur_stencil_8;
}

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi + (0*32))*8), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.stencil((hw_output_global_wrapper_s0_x_xi_xi*8), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_glb_stencil(hw_uint<16>& hw_output_stencil) {
  uint16_t _hw_output_stencil_1 = (uint16_t) hw_output_stencil.extract<0, 15>();

  return _hw_output_stencil_1;
}

//store is: hw_output_global_wrapper.glb.stencil((((hw_output_global_wrapper_s0_x_xi_xi + (0*32))*8) + 1), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*8) + 1), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_glb_stencil_1(hw_uint<16>& hw_output_stencil) {
  uint16_t _hw_output_stencil_2 = (uint16_t) hw_output_stencil.extract<0, 15>();

  return _hw_output_stencil_2;
}

//store is: hw_output_global_wrapper.glb.stencil((((hw_output_global_wrapper_s0_x_xi_xi + (0*32))*8) + 2), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*8) + 2), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_glb_stencil_2(hw_uint<16>& hw_output_stencil) {
  uint16_t _hw_output_stencil_3 = (uint16_t) hw_output_stencil.extract<0, 15>();

  return _hw_output_stencil_3;
}

//store is: hw_output_global_wrapper.glb.stencil((((hw_output_global_wrapper_s0_x_xi_xi + (0*32))*8) + 3), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*8) + 3), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_glb_stencil_3(hw_uint<16>& hw_output_stencil) {
  uint16_t _hw_output_stencil_4 = (uint16_t) hw_output_stencil.extract<0, 15>();

  return _hw_output_stencil_4;
}

//store is: hw_output_global_wrapper.glb.stencil((((hw_output_global_wrapper_s0_x_xi_xi + (0*32))*8) + 4), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*8) + 4), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_glb_stencil_4(hw_uint<16>& hw_output_stencil) {
  uint16_t _hw_output_stencil_5 = (uint16_t) hw_output_stencil.extract<0, 15>();

  return _hw_output_stencil_5;
}

//store is: hw_output_global_wrapper.glb.stencil((((hw_output_global_wrapper_s0_x_xi_xi + (0*32))*8) + 5), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*8) + 5), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_glb_stencil_5(hw_uint<16>& hw_output_stencil) {
  uint16_t _hw_output_stencil_6 = (uint16_t) hw_output_stencil.extract<0, 15>();

  return _hw_output_stencil_6;
}

//store is: hw_output_global_wrapper.glb.stencil((((hw_output_global_wrapper_s0_x_xi_xi + (0*32))*8) + 6), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*8) + 6), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_glb_stencil_6(hw_uint<16>& hw_output_stencil) {
  uint16_t _hw_output_stencil_7 = (uint16_t) hw_output_stencil.extract<0, 15>();

  return _hw_output_stencil_7;
}

//store is: hw_output_global_wrapper.glb.stencil((((hw_output_global_wrapper_s0_x_xi_xi + (0*32))*8) + 7), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*8) + 7), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_glb_stencil_7(hw_uint<16>& hw_output_stencil) {
  uint16_t _hw_output_stencil_8 = (uint16_t) hw_output_stencil.extract<0, 15>();

  return _hw_output_stencil_8;
}

