#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.glb.stencil((hw_input_global_wrapper_s0_x_x*2), hw_input_global_wrapper_s0_y) = hw_input.stencil((hw_input_global_wrapper_s0_x_x*2), hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_1;
}

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*2) + 1), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*2) + 1), hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_1(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_2 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_2;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil((hw_input_global_wrapper_global_wrapper_s0_x_x*2), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil((hw_input_global_wrapper_global_wrapper_s0_x_x*2), hw_input_global_wrapper_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_1 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_1;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), hw_input_global_wrapper_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_1(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_2 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_2;
}

//store is: blur_unnormalized.stencil((blur_unnormalized_s0_x_x*2), blur_unnormalized_s0_y) = (uint16)0
hw_uint<16> hcompute_blur_unnormalized_stencil() {
  uint16_t _266 = (uint16_t)(0);
  return _266;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*2) + 1), blur_unnormalized_s0_y) = (uint16)0
hw_uint<16> hcompute_blur_unnormalized_stencil_1() {
  uint16_t _270 = (uint16_t)(0);
  return _270;
}

//store is: blur_unnormalized.stencil((blur_unnormalized_s1_x_x*2), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil((blur_unnormalized_s1_x_x*2), blur_unnormalized_s1_y)*(uint16)24) + (blur_unnormalized.stencil((blur_unnormalized_s1_x_x*2), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*2) + 1), blur_unnormalized_s1_y)*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*2) + 2), blur_unnormalized_s1_y)*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil((blur_unnormalized_s1_x_x*2), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*2) + 1), (blur_unnormalized_s1_y + 1))*(uint16)37) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*2) + 2), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil((blur_unnormalized_s1_x_x*2), (blur_unnormalized_s1_y + 2))*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*2) + 2), (blur_unnormalized_s1_y + 2))*(uint16)24) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*2) + 1), (blur_unnormalized_s1_y + 2))*(uint16)30))))))))))
hw_uint<16> hcompute_blur_unnormalized_stencil_2(hw_uint<16>& blur_unnormalized_stencil, hw_uint<144>& hw_input_global_wrapper_global_wrapper_stencil) {
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

  uint16_t _275 = (uint16_t)(24);
  uint16_t _276 = _hw_input_global_wrapper_global_wrapper_stencil_1 * _275;
  uint16_t _277 = (uint16_t)(30);
  uint16_t _278 = _hw_input_global_wrapper_global_wrapper_stencil_2 * _277;
  uint16_t _279 = _hw_input_global_wrapper_global_wrapper_stencil_3 * _275;
  uint16_t _280 = _hw_input_global_wrapper_global_wrapper_stencil_4 * _277;
  uint16_t _281 = (uint16_t)(37);
  uint16_t _282 = _hw_input_global_wrapper_global_wrapper_stencil_5 * _281;
  uint16_t _283 = _hw_input_global_wrapper_global_wrapper_stencil_6 * _277;
  uint16_t _284 = _hw_input_global_wrapper_global_wrapper_stencil_7 * _275;
  uint16_t _285 = _hw_input_global_wrapper_global_wrapper_stencil_8 * _275;
  uint16_t _286 = _hw_input_global_wrapper_global_wrapper_stencil_9 * _277;
  uint16_t _287 = _285 + _286;
  uint16_t _288 = _284 + _287;
  uint16_t _289 = _283 + _288;
  uint16_t _290 = _282 + _289;
  uint16_t _291 = _280 + _290;
  uint16_t _292 = _279 + _291;
  uint16_t _293 = _278 + _292;
  uint16_t _294 = _blur_unnormalized_stencil_1 + _293;
  uint16_t _295 = _276 + _294;
  return _295;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*2) + 1), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*2) + 1), blur_unnormalized_s1_y)*(uint16)24) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*2) + 1), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*2) + 2), blur_unnormalized_s1_y)*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*2) + 3), blur_unnormalized_s1_y)*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*2) + 1), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*2) + 2), (blur_unnormalized_s1_y + 1))*(uint16)37) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*2) + 3), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*2) + 1), (blur_unnormalized_s1_y + 2))*(uint16)24) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*2) + 3), (blur_unnormalized_s1_y + 2))*(uint16)24) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*2) + 2), (blur_unnormalized_s1_y + 2))*(uint16)30))))))))))
hw_uint<16> hcompute_blur_unnormalized_stencil_3(hw_uint<16>& blur_unnormalized_stencil, hw_uint<144>& hw_input_global_wrapper_global_wrapper_stencil) {
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

  uint16_t _353 = (uint16_t)(24);
  uint16_t _354 = _hw_input_global_wrapper_global_wrapper_stencil_10 * _353;
  uint16_t _355 = (uint16_t)(30);
  uint16_t _356 = _hw_input_global_wrapper_global_wrapper_stencil_11 * _355;
  uint16_t _357 = _hw_input_global_wrapper_global_wrapper_stencil_12 * _353;
  uint16_t _358 = _hw_input_global_wrapper_global_wrapper_stencil_13 * _355;
  uint16_t _359 = (uint16_t)(37);
  uint16_t _360 = _hw_input_global_wrapper_global_wrapper_stencil_14 * _359;
  uint16_t _361 = _hw_input_global_wrapper_global_wrapper_stencil_15 * _355;
  uint16_t _362 = _hw_input_global_wrapper_global_wrapper_stencil_16 * _353;
  uint16_t _363 = _hw_input_global_wrapper_global_wrapper_stencil_17 * _353;
  uint16_t _364 = _hw_input_global_wrapper_global_wrapper_stencil_18 * _355;
  uint16_t _365 = _363 + _364;
  uint16_t _366 = _362 + _365;
  uint16_t _367 = _361 + _366;
  uint16_t _368 = _360 + _367;
  uint16_t _369 = _358 + _368;
  uint16_t _370 = _357 + _369;
  uint16_t _371 = _356 + _370;
  uint16_t _372 = _blur_unnormalized_stencil_2 + _371;
  uint16_t _373 = _354 + _372;
  return _373;
}

//store is: blur.stencil((blur_s0_x_x*2), blur_s0_y) = (blur_unnormalized.stencil((blur_s0_x_x*2), blur_s0_y)/(uint16)256)
hw_uint<16> hcompute_blur_stencil(hw_uint<16>& blur_unnormalized_stencil) {
  uint16_t _blur_unnormalized_stencil_3 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _432 = (uint16_t)(8);
  uint16_t _433 = _blur_unnormalized_stencil_3 >> _432;
  return _433;
}

//store is: blur.stencil(((blur_s0_x_x*2) + 1), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*2) + 1), blur_s0_y)/(uint16)256)
hw_uint<16> hcompute_blur_stencil_1(hw_uint<16>& blur_unnormalized_stencil) {
  uint16_t _blur_unnormalized_stencil_4 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _440 = (uint16_t)(8);
  uint16_t _441 = _blur_unnormalized_stencil_4 >> _440;
  return _441;
}

//store is: hw_output.stencil((hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi) = blur.stencil((hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& blur_stencil) {
  uint16_t _blur_stencil_1 = (uint16_t) blur_stencil.extract<0, 15>();

  return _blur_stencil_1;
}

//store is: hw_output.stencil(((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi) = blur.stencil(((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil_1(hw_uint<16>& blur_stencil) {
  uint16_t _blur_stencil_2 = (uint16_t) blur_stencil.extract<0, 15>();

  return _blur_stencil_2;
}

//store is: hw_output_global_wrapper.glb.stencil((hw_output_global_wrapper_s0_x_xi_xi*2), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil((hw_output_global_wrapper_s0_x_xi_xi*2), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_glb_stencil(hw_uint<16>& hw_output_stencil) {
  uint16_t _hw_output_stencil_1 = (uint16_t) hw_output_stencil.extract<0, 15>();

  return _hw_output_stencil_1;
}

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_glb_stencil_1(hw_uint<16>& hw_output_stencil) {
  uint16_t _hw_output_stencil_2 = (uint16_t) hw_output_stencil.extract<0, 15>();

  return _hw_output_stencil_2;
}

