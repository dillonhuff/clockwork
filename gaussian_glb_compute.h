#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.glb.stencil((hw_input_global_wrapper_s0_x_x*4), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x + (0*64))*4), hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_1;
}

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*4) + 1), hw_input_global_wrapper_s0_y) = hw_input.stencil((((hw_input_global_wrapper_s0_x_x + (0*64))*4) + 1), hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_1(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_2 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_2;
}

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*4) + 2), hw_input_global_wrapper_s0_y) = hw_input.stencil((((hw_input_global_wrapper_s0_x_x + (0*64))*4) + 2), hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_2(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_3 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_3;
}

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*4) + 3), hw_input_global_wrapper_s0_y) = hw_input.stencil((((hw_input_global_wrapper_s0_x_x + (0*64))*4) + 3), hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_3(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_4 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_4;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil((hw_input_global_wrapper_global_wrapper_s0_x_x*4), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil((hw_input_global_wrapper_global_wrapper_s0_x_x*4), hw_input_global_wrapper_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_1 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_1;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 1), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 1), hw_input_global_wrapper_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_1(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_2 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_2;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 2), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 2), hw_input_global_wrapper_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_2(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_3 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_3;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 3), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 3), hw_input_global_wrapper_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_3(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_4 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_4;
}

//store is: blur_unnormalized.stencil((blur_unnormalized_s0_x_x*4), blur_unnormalized_s0_y) = (uint16)0
hw_uint<16> hcompute_blur_unnormalized_stencil() {
  uint16_t _294 = (uint16_t)(0);
  return _294;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*4) + 1), blur_unnormalized_s0_y) = (uint16)0
hw_uint<16> hcompute_blur_unnormalized_stencil_1() {
  uint16_t _298 = (uint16_t)(0);
  return _298;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*4) + 2), blur_unnormalized_s0_y) = (uint16)0
hw_uint<16> hcompute_blur_unnormalized_stencil_2() {
  uint16_t _303 = (uint16_t)(0);
  return _303;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*4) + 3), blur_unnormalized_s0_y) = (uint16)0
hw_uint<16> hcompute_blur_unnormalized_stencil_3() {
  uint16_t _308 = (uint16_t)(0);
  return _308;
}

//store is: blur_unnormalized.stencil((blur_unnormalized_s1_x_x*4), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil((blur_unnormalized_s1_x_x*4), blur_unnormalized_s1_y)*(uint16)24) + (blur_unnormalized.stencil((blur_unnormalized_s1_x_x*4), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 1), blur_unnormalized_s1_y)*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 2), blur_unnormalized_s1_y)*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil((blur_unnormalized_s1_x_x*4), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 1), (blur_unnormalized_s1_y + 1))*(uint16)37) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 2), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil((blur_unnormalized_s1_x_x*4), (blur_unnormalized_s1_y + 2))*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 2), (blur_unnormalized_s1_y + 2))*(uint16)24) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 1), (blur_unnormalized_s1_y + 2))*(uint16)30))))))))))
hw_uint<16> hcompute_blur_unnormalized_stencil_4(hw_uint<16>& blur_unnormalized_stencil, hw_uint<144>& hw_input_global_wrapper_global_wrapper_stencil) {
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

  uint16_t _313 = (uint16_t)(24);
  uint16_t _314 = _hw_input_global_wrapper_global_wrapper_stencil_1 * _313;
  uint16_t _315 = (uint16_t)(30);
  uint16_t _316 = _hw_input_global_wrapper_global_wrapper_stencil_2 * _315;
  uint16_t _317 = _hw_input_global_wrapper_global_wrapper_stencil_3 * _313;
  uint16_t _318 = _hw_input_global_wrapper_global_wrapper_stencil_4 * _315;
  uint16_t _319 = (uint16_t)(37);
  uint16_t _320 = _hw_input_global_wrapper_global_wrapper_stencil_5 * _319;
  uint16_t _321 = _hw_input_global_wrapper_global_wrapper_stencil_6 * _315;
  uint16_t _322 = _hw_input_global_wrapper_global_wrapper_stencil_7 * _313;
  uint16_t _323 = _hw_input_global_wrapper_global_wrapper_stencil_8 * _313;
  uint16_t _324 = _hw_input_global_wrapper_global_wrapper_stencil_9 * _315;
  uint16_t _325 = _323 + _324;
  uint16_t _326 = _322 + _325;
  uint16_t _327 = _321 + _326;
  uint16_t _328 = _320 + _327;
  uint16_t _329 = _318 + _328;
  uint16_t _330 = _317 + _329;
  uint16_t _331 = _316 + _330;
  uint16_t _332 = _blur_unnormalized_stencil_1 + _331;
  uint16_t _333 = _314 + _332;
  return _333;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*4) + 1), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 1), blur_unnormalized_s1_y)*(uint16)24) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*4) + 1), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 2), blur_unnormalized_s1_y)*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 3), blur_unnormalized_s1_y)*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 1), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 2), (blur_unnormalized_s1_y + 1))*(uint16)37) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 3), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 1), (blur_unnormalized_s1_y + 2))*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 3), (blur_unnormalized_s1_y + 2))*(uint16)24) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 2), (blur_unnormalized_s1_y + 2))*(uint16)30))))))))))
hw_uint<16> hcompute_blur_unnormalized_stencil_5(hw_uint<16>& blur_unnormalized_stencil, hw_uint<144>& hw_input_global_wrapper_global_wrapper_stencil) {
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

  uint16_t _391 = (uint16_t)(24);
  uint16_t _392 = _hw_input_global_wrapper_global_wrapper_stencil_10 * _391;
  uint16_t _393 = (uint16_t)(30);
  uint16_t _394 = _hw_input_global_wrapper_global_wrapper_stencil_11 * _393;
  uint16_t _395 = _hw_input_global_wrapper_global_wrapper_stencil_12 * _391;
  uint16_t _396 = _hw_input_global_wrapper_global_wrapper_stencil_13 * _393;
  uint16_t _397 = (uint16_t)(37);
  uint16_t _398 = _hw_input_global_wrapper_global_wrapper_stencil_14 * _397;
  uint16_t _399 = _hw_input_global_wrapper_global_wrapper_stencil_15 * _393;
  uint16_t _400 = _hw_input_global_wrapper_global_wrapper_stencil_16 * _391;
  uint16_t _401 = _hw_input_global_wrapper_global_wrapper_stencil_17 * _391;
  uint16_t _402 = _hw_input_global_wrapper_global_wrapper_stencil_18 * _393;
  uint16_t _403 = _401 + _402;
  uint16_t _404 = _400 + _403;
  uint16_t _405 = _399 + _404;
  uint16_t _406 = _398 + _405;
  uint16_t _407 = _396 + _406;
  uint16_t _408 = _395 + _407;
  uint16_t _409 = _394 + _408;
  uint16_t _410 = _blur_unnormalized_stencil_2 + _409;
  uint16_t _411 = _392 + _410;
  return _411;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*4) + 2), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 2), blur_unnormalized_s1_y)*(uint16)24) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*4) + 2), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 3), blur_unnormalized_s1_y)*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 4), blur_unnormalized_s1_y)*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 2), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 3), (blur_unnormalized_s1_y + 1))*(uint16)37) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 4), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 2), (blur_unnormalized_s1_y + 2))*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 4), (blur_unnormalized_s1_y + 2))*(uint16)24) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 3), (blur_unnormalized_s1_y + 2))*(uint16)30))))))))))
hw_uint<16> hcompute_blur_unnormalized_stencil_6(hw_uint<16>& blur_unnormalized_stencil, hw_uint<144>& hw_input_global_wrapper_global_wrapper_stencil) {
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

  uint16_t _470 = (uint16_t)(24);
  uint16_t _471 = _hw_input_global_wrapper_global_wrapper_stencil_19 * _470;
  uint16_t _472 = (uint16_t)(30);
  uint16_t _473 = _hw_input_global_wrapper_global_wrapper_stencil_20 * _472;
  uint16_t _474 = _hw_input_global_wrapper_global_wrapper_stencil_21 * _470;
  uint16_t _475 = _hw_input_global_wrapper_global_wrapper_stencil_22 * _472;
  uint16_t _476 = (uint16_t)(37);
  uint16_t _477 = _hw_input_global_wrapper_global_wrapper_stencil_23 * _476;
  uint16_t _478 = _hw_input_global_wrapper_global_wrapper_stencil_24 * _472;
  uint16_t _479 = _hw_input_global_wrapper_global_wrapper_stencil_25 * _470;
  uint16_t _480 = _hw_input_global_wrapper_global_wrapper_stencil_26 * _470;
  uint16_t _481 = _hw_input_global_wrapper_global_wrapper_stencil_27 * _472;
  uint16_t _482 = _480 + _481;
  uint16_t _483 = _479 + _482;
  uint16_t _484 = _478 + _483;
  uint16_t _485 = _477 + _484;
  uint16_t _486 = _475 + _485;
  uint16_t _487 = _474 + _486;
  uint16_t _488 = _473 + _487;
  uint16_t _489 = _blur_unnormalized_stencil_3 + _488;
  uint16_t _490 = _471 + _489;
  return _490;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*4) + 3), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 3), blur_unnormalized_s1_y)*(uint16)24) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*4) + 3), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 4), blur_unnormalized_s1_y)*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 5), blur_unnormalized_s1_y)*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 3), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 4), (blur_unnormalized_s1_y + 1))*(uint16)37) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 5), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 3), (blur_unnormalized_s1_y + 2))*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 5), (blur_unnormalized_s1_y + 2))*(uint16)24) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*4) + 4), (blur_unnormalized_s1_y + 2))*(uint16)30))))))))))
hw_uint<16> hcompute_blur_unnormalized_stencil_7(hw_uint<16>& blur_unnormalized_stencil, hw_uint<144>& hw_input_global_wrapper_global_wrapper_stencil) {
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

  uint16_t _549 = (uint16_t)(24);
  uint16_t _550 = _hw_input_global_wrapper_global_wrapper_stencil_28 * _549;
  uint16_t _551 = (uint16_t)(30);
  uint16_t _552 = _hw_input_global_wrapper_global_wrapper_stencil_29 * _551;
  uint16_t _553 = _hw_input_global_wrapper_global_wrapper_stencil_30 * _549;
  uint16_t _554 = _hw_input_global_wrapper_global_wrapper_stencil_31 * _551;
  uint16_t _555 = (uint16_t)(37);
  uint16_t _556 = _hw_input_global_wrapper_global_wrapper_stencil_32 * _555;
  uint16_t _557 = _hw_input_global_wrapper_global_wrapper_stencil_33 * _551;
  uint16_t _558 = _hw_input_global_wrapper_global_wrapper_stencil_34 * _549;
  uint16_t _559 = _hw_input_global_wrapper_global_wrapper_stencil_35 * _549;
  uint16_t _560 = _hw_input_global_wrapper_global_wrapper_stencil_36 * _551;
  uint16_t _561 = _559 + _560;
  uint16_t _562 = _558 + _561;
  uint16_t _563 = _557 + _562;
  uint16_t _564 = _556 + _563;
  uint16_t _565 = _554 + _564;
  uint16_t _566 = _553 + _565;
  uint16_t _567 = _552 + _566;
  uint16_t _568 = _blur_unnormalized_stencil_4 + _567;
  uint16_t _569 = _550 + _568;
  return _569;
}

//store is: blur.stencil((blur_s0_x_x*4), blur_s0_y) = (blur_unnormalized.stencil((blur_s0_x_x*4), blur_s0_y)/(uint16)256)
hw_uint<16> hcompute_blur_stencil(hw_uint<16>& blur_unnormalized_stencil) {
  uint16_t _blur_unnormalized_stencil_5 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _628 = (uint16_t)(8);
  uint16_t _629 = _blur_unnormalized_stencil_5 >> _628;
  return _629;
}

//store is: blur.stencil(((blur_s0_x_x*4) + 1), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*4) + 1), blur_s0_y)/(uint16)256)
hw_uint<16> hcompute_blur_stencil_1(hw_uint<16>& blur_unnormalized_stencil) {
  uint16_t _blur_unnormalized_stencil_6 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _636 = (uint16_t)(8);
  uint16_t _637 = _blur_unnormalized_stencil_6 >> _636;
  return _637;
}

//store is: blur.stencil(((blur_s0_x_x*4) + 2), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*4) + 2), blur_s0_y)/(uint16)256)
hw_uint<16> hcompute_blur_stencil_2(hw_uint<16>& blur_unnormalized_stencil) {
  uint16_t _blur_unnormalized_stencil_7 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _645 = (uint16_t)(8);
  uint16_t _646 = _blur_unnormalized_stencil_7 >> _645;
  return _646;
}

//store is: blur.stencil(((blur_s0_x_x*4) + 3), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*4) + 3), blur_s0_y)/(uint16)256)
hw_uint<16> hcompute_blur_stencil_3(hw_uint<16>& blur_unnormalized_stencil) {
  uint16_t _blur_unnormalized_stencil_8 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _654 = (uint16_t)(8);
  uint16_t _655 = _blur_unnormalized_stencil_8 >> _654;
  return _655;
}

//store is: hw_output.stencil((hw_output_s0_x_xi_xi*4), hw_output_s0_y_yi) = blur.stencil((hw_output_s0_x_xi_xi*4), hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& blur_stencil) {
  uint16_t _blur_stencil_1 = (uint16_t) blur_stencil.extract<0, 15>();

  return _blur_stencil_1;
}

//store is: hw_output.stencil(((hw_output_s0_x_xi_xi*4) + 1), hw_output_s0_y_yi) = blur.stencil(((hw_output_s0_x_xi_xi*4) + 1), hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil_1(hw_uint<16>& blur_stencil) {
  uint16_t _blur_stencil_2 = (uint16_t) blur_stencil.extract<0, 15>();

  return _blur_stencil_2;
}

//store is: hw_output.stencil(((hw_output_s0_x_xi_xi*4) + 2), hw_output_s0_y_yi) = blur.stencil(((hw_output_s0_x_xi_xi*4) + 2), hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil_2(hw_uint<16>& blur_stencil) {
  uint16_t _blur_stencil_3 = (uint16_t) blur_stencil.extract<0, 15>();

  return _blur_stencil_3;
}

//store is: hw_output.stencil(((hw_output_s0_x_xi_xi*4) + 3), hw_output_s0_y_yi) = blur.stencil(((hw_output_s0_x_xi_xi*4) + 3), hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil_3(hw_uint<16>& blur_stencil) {
  uint16_t _blur_stencil_4 = (uint16_t) blur_stencil.extract<0, 15>();

  return _blur_stencil_4;
}

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi + (0*64))*4), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.stencil((hw_output_global_wrapper_s0_x_xi_xi*4), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_glb_stencil(hw_uint<16>& hw_output_stencil) {
  uint16_t _hw_output_stencil_1 = (uint16_t) hw_output_stencil.extract<0, 15>();

  return _hw_output_stencil_1;
}

//store is: hw_output_global_wrapper.glb.stencil((((hw_output_global_wrapper_s0_x_xi_xi + (0*64))*4) + 1), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*4) + 1), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_glb_stencil_1(hw_uint<16>& hw_output_stencil) {
  uint16_t _hw_output_stencil_2 = (uint16_t) hw_output_stencil.extract<0, 15>();

  return _hw_output_stencil_2;
}

//store is: hw_output_global_wrapper.glb.stencil((((hw_output_global_wrapper_s0_x_xi_xi + (0*64))*4) + 2), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*4) + 2), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_glb_stencil_2(hw_uint<16>& hw_output_stencil) {
  uint16_t _hw_output_stencil_3 = (uint16_t) hw_output_stencil.extract<0, 15>();

  return _hw_output_stencil_3;
}

//store is: hw_output_global_wrapper.glb.stencil((((hw_output_global_wrapper_s0_x_xi_xi + (0*64))*4) + 3), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*4) + 3), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_glb_stencil_3(hw_uint<16>& hw_output_stencil) {
  uint16_t _hw_output_stencil_4 = (uint16_t) hw_output_stencil.extract<0, 15>();

  return _hw_output_stencil_4;
}

