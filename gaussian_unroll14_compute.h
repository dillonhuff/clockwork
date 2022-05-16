#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.glb.stencil((hw_input_global_wrapper_s0_x_x*14), hw_input_global_wrapper_s0_y) = hw_input.stencil((hw_input_global_wrapper_s0_x_x*14), hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_1 = (uint16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_1;
}

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*14) + 1), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*14) + 1), hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_1(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_2 = (uint16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_2;
}

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*14) + 2), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*14) + 2), hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_2(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_3 = (uint16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_3;
}

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*14) + 3), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*14) + 3), hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_3(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_4 = (uint16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_4;
}

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*14) + 4), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*14) + 4), hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_4(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_5 = (uint16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_5;
}

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*14) + 5), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*14) + 5), hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_5(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_6 = (uint16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_6;
}

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*14) + 6), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*14) + 6), hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_6(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_7 = (uint16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_7;
}

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*14) + 7), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*14) + 7), hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_7(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_8 = (uint16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_8;
}

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*14) + 8), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*14) + 8), hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_8(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_9 = (uint16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_9;
}

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*14) + 9), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*14) + 9), hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_9(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_10 = (uint16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_10;
}

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*14) + 10), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*14) + 10), hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_10(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_11 = (uint16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_11;
}

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*14) + 11), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*14) + 11), hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_11(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_12 = (uint16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_12;
}

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*14) + 12), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*14) + 12), hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_12(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_13 = (uint16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_13;
}

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*14) + 13), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*14) + 13), hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_13(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_14 = (uint16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_14;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil((hw_input_global_wrapper_global_wrapper_s0_x_x*14), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil((hw_input_global_wrapper_global_wrapper_s0_x_x*14), hw_input_global_wrapper_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_1 = (uint16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_1;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 1), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 1), hw_input_global_wrapper_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_1(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_2 = (uint16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_2;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 2), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 2), hw_input_global_wrapper_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_2(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_3 = (uint16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_3;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 3), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 3), hw_input_global_wrapper_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_3(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_4 = (uint16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_4;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 4), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 4), hw_input_global_wrapper_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_4(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_5 = (uint16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_5;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 5), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 5), hw_input_global_wrapper_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_5(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_6 = (uint16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_6;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 6), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 6), hw_input_global_wrapper_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_6(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_7 = (uint16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_7;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 7), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 7), hw_input_global_wrapper_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_7(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_8 = (uint16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_8;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 8), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 8), hw_input_global_wrapper_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_8(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_9 = (uint16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_9;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 9), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 9), hw_input_global_wrapper_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_9(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_10 = (uint16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_10;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 10), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 10), hw_input_global_wrapper_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_10(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_11 = (uint16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_11;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 11), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 11), hw_input_global_wrapper_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_11(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_12 = (uint16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_12;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 12), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 12), hw_input_global_wrapper_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_12(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_13 = (uint16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_13;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 13), hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_global_wrapper_s0_x_x*14) + 13), hw_input_global_wrapper_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_13(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_14 = (uint16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_14;
}

//store is: blur_unnormalized.stencil((blur_unnormalized_s0_x_x*14), blur_unnormalized_s0_y) = (uint16)0
hw_uint<16> hcompute_blur_unnormalized_stencil() {
  uint16_t _338 = (uint16_t)(0);
  return _338;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*14) + 1), blur_unnormalized_s0_y) = (uint16)0
hw_uint<16> hcompute_blur_unnormalized_stencil_1() {
  uint16_t _342 = (uint16_t)(0);
  return _342;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*14) + 2), blur_unnormalized_s0_y) = (uint16)0
hw_uint<16> hcompute_blur_unnormalized_stencil_2() {
  uint16_t _347 = (uint16_t)(0);
  return _347;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*14) + 3), blur_unnormalized_s0_y) = (uint16)0
hw_uint<16> hcompute_blur_unnormalized_stencil_3() {
  uint16_t _352 = (uint16_t)(0);
  return _352;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*14) + 4), blur_unnormalized_s0_y) = (uint16)0
hw_uint<16> hcompute_blur_unnormalized_stencil_4() {
  uint16_t _357 = (uint16_t)(0);
  return _357;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*14) + 5), blur_unnormalized_s0_y) = (uint16)0
hw_uint<16> hcompute_blur_unnormalized_stencil_5() {
  uint16_t _362 = (uint16_t)(0);
  return _362;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*14) + 6), blur_unnormalized_s0_y) = (uint16)0
hw_uint<16> hcompute_blur_unnormalized_stencil_6() {
  uint16_t _367 = (uint16_t)(0);
  return _367;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*14) + 7), blur_unnormalized_s0_y) = (uint16)0
hw_uint<16> hcompute_blur_unnormalized_stencil_7() {
  uint16_t _372 = (uint16_t)(0);
  return _372;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*14) + 8), blur_unnormalized_s0_y) = (uint16)0
hw_uint<16> hcompute_blur_unnormalized_stencil_8() {
  uint16_t _377 = (uint16_t)(0);
  return _377;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*14) + 9), blur_unnormalized_s0_y) = (uint16)0
hw_uint<16> hcompute_blur_unnormalized_stencil_9() {
  uint16_t _382 = (uint16_t)(0);
  return _382;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*14) + 10), blur_unnormalized_s0_y) = (uint16)0
hw_uint<16> hcompute_blur_unnormalized_stencil_10() {
  uint16_t _387 = (uint16_t)(0);
  return _387;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*14) + 11), blur_unnormalized_s0_y) = (uint16)0
hw_uint<16> hcompute_blur_unnormalized_stencil_11() {
  uint16_t _392 = (uint16_t)(0);
  return _392;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*14) + 12), blur_unnormalized_s0_y) = (uint16)0
hw_uint<16> hcompute_blur_unnormalized_stencil_12() {
  uint16_t _397 = (uint16_t)(0);
  return _397;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*14) + 13), blur_unnormalized_s0_y) = (uint16)0
hw_uint<16> hcompute_blur_unnormalized_stencil_13() {
  uint16_t _402 = (uint16_t)(0);
  return _402;
}

//store is: blur_unnormalized.stencil((blur_unnormalized_s1_x_x*14), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil((blur_unnormalized_s1_x_x*14), blur_unnormalized_s1_y)*(uint16)50) + (blur_unnormalized.stencil((blur_unnormalized_s1_x_x*14), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 1), blur_unnormalized_s1_y)*(uint16)63) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 1), (blur_unnormalized_s1_y + 1))*(uint16)78) + (hw_input_global_wrapper_global_wrapper.stencil((blur_unnormalized_s1_x_x*14), (blur_unnormalized_s1_y + 1))*(uint16)63)))))
hw_uint<16> hcompute_blur_unnormalized_stencil_14(hw_uint<16>& blur_unnormalized_stencil, hw_uint<64>& hw_input_global_wrapper_global_wrapper_stencil) {
  uint16_t _blur_unnormalized_stencil_1 = (uint16_t) (blur_unnormalized_stencil.extract<0, 15>());

  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_1 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_2 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_3 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_4 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<48, 63>());

  uint16_t _407 = (uint16_t)(50);
  uint16_t _408 = _hw_input_global_wrapper_global_wrapper_stencil_1 * _407;
  uint16_t _409 = (uint16_t)(63);
  uint16_t _410 = _hw_input_global_wrapper_global_wrapper_stencil_2 * _409;
  uint16_t _411 = (uint16_t)(78);
  uint16_t _412 = _hw_input_global_wrapper_global_wrapper_stencil_3 * _411;
  uint16_t _413 = _hw_input_global_wrapper_global_wrapper_stencil_4 * _409;
  uint16_t _414 = _412 + _413;
  uint16_t _415 = _410 + _414;
  uint16_t _416 = _blur_unnormalized_stencil_1 + _415;
  uint16_t _417 = _408 + _416;
  return _417;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 1), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 1), blur_unnormalized_s1_y)*(uint16)50) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 1), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 2), blur_unnormalized_s1_y)*(uint16)63) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 2), (blur_unnormalized_s1_y + 1))*(uint16)78) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 1), (blur_unnormalized_s1_y + 1))*(uint16)63)))))
hw_uint<16> hcompute_blur_unnormalized_stencil_15(hw_uint<16>& blur_unnormalized_stencil, hw_uint<64>& hw_input_global_wrapper_global_wrapper_stencil) {
  uint16_t _blur_unnormalized_stencil_2 = (uint16_t) (blur_unnormalized_stencil.extract<0, 15>());

  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_5 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_6 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_7 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_8 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<48, 63>());

  uint16_t _448 = (uint16_t)(50);
  uint16_t _449 = _hw_input_global_wrapper_global_wrapper_stencil_5 * _448;
  uint16_t _450 = (uint16_t)(63);
  uint16_t _451 = _hw_input_global_wrapper_global_wrapper_stencil_6 * _450;
  uint16_t _452 = (uint16_t)(78);
  uint16_t _453 = _hw_input_global_wrapper_global_wrapper_stencil_7 * _452;
  uint16_t _454 = _hw_input_global_wrapper_global_wrapper_stencil_8 * _450;
  uint16_t _455 = _453 + _454;
  uint16_t _456 = _451 + _455;
  uint16_t _457 = _blur_unnormalized_stencil_2 + _456;
  uint16_t _458 = _449 + _457;
  return _458;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 2), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 2), blur_unnormalized_s1_y)*(uint16)50) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 2), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 3), blur_unnormalized_s1_y)*(uint16)63) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 3), (blur_unnormalized_s1_y + 1))*(uint16)78) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 2), (blur_unnormalized_s1_y + 1))*(uint16)63)))))
hw_uint<16> hcompute_blur_unnormalized_stencil_16(hw_uint<16>& blur_unnormalized_stencil, hw_uint<64>& hw_input_global_wrapper_global_wrapper_stencil) {
  uint16_t _blur_unnormalized_stencil_3 = (uint16_t) (blur_unnormalized_stencil.extract<0, 15>());

  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_10 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_11 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_12 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_9 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<48, 63>());

  uint16_t _490 = (uint16_t)(50);
  uint16_t _491 = _hw_input_global_wrapper_global_wrapper_stencil_9 * _490;
  uint16_t _492 = (uint16_t)(63);
  uint16_t _493 = _hw_input_global_wrapper_global_wrapper_stencil_10 * _492;
  uint16_t _494 = (uint16_t)(78);
  uint16_t _495 = _hw_input_global_wrapper_global_wrapper_stencil_11 * _494;
  uint16_t _496 = _hw_input_global_wrapper_global_wrapper_stencil_12 * _492;
  uint16_t _497 = _495 + _496;
  uint16_t _498 = _493 + _497;
  uint16_t _499 = _blur_unnormalized_stencil_3 + _498;
  uint16_t _500 = _491 + _499;
  return _500;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 3), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 3), blur_unnormalized_s1_y)*(uint16)50) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 3), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 4), blur_unnormalized_s1_y)*(uint16)63) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 4), (blur_unnormalized_s1_y + 1))*(uint16)78) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 3), (blur_unnormalized_s1_y + 1))*(uint16)63)))))
hw_uint<16> hcompute_blur_unnormalized_stencil_17(hw_uint<16>& blur_unnormalized_stencil, hw_uint<64>& hw_input_global_wrapper_global_wrapper_stencil) {
  uint16_t _blur_unnormalized_stencil_4 = (uint16_t) (blur_unnormalized_stencil.extract<0, 15>());

  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_13 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_14 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_15 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_16 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<48, 63>());

  uint16_t _532 = (uint16_t)(50);
  uint16_t _533 = _hw_input_global_wrapper_global_wrapper_stencil_13 * _532;
  uint16_t _534 = (uint16_t)(63);
  uint16_t _535 = _hw_input_global_wrapper_global_wrapper_stencil_14 * _534;
  uint16_t _536 = (uint16_t)(78);
  uint16_t _537 = _hw_input_global_wrapper_global_wrapper_stencil_15 * _536;
  uint16_t _538 = _hw_input_global_wrapper_global_wrapper_stencil_16 * _534;
  uint16_t _539 = _537 + _538;
  uint16_t _540 = _535 + _539;
  uint16_t _541 = _blur_unnormalized_stencil_4 + _540;
  uint16_t _542 = _533 + _541;
  return _542;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 4), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 4), blur_unnormalized_s1_y)*(uint16)50) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 4), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 5), blur_unnormalized_s1_y)*(uint16)63) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 5), (blur_unnormalized_s1_y + 1))*(uint16)78) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 4), (blur_unnormalized_s1_y + 1))*(uint16)63)))))
hw_uint<16> hcompute_blur_unnormalized_stencil_18(hw_uint<16>& blur_unnormalized_stencil, hw_uint<64>& hw_input_global_wrapper_global_wrapper_stencil) {
  uint16_t _blur_unnormalized_stencil_5 = (uint16_t) (blur_unnormalized_stencil.extract<0, 15>());

  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_17 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_18 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_19 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_20 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<48, 63>());

  uint16_t _574 = (uint16_t)(50);
  uint16_t _575 = _hw_input_global_wrapper_global_wrapper_stencil_17 * _574;
  uint16_t _576 = (uint16_t)(63);
  uint16_t _577 = _hw_input_global_wrapper_global_wrapper_stencil_18 * _576;
  uint16_t _578 = (uint16_t)(78);
  uint16_t _579 = _hw_input_global_wrapper_global_wrapper_stencil_19 * _578;
  uint16_t _580 = _hw_input_global_wrapper_global_wrapper_stencil_20 * _576;
  uint16_t _581 = _579 + _580;
  uint16_t _582 = _577 + _581;
  uint16_t _583 = _blur_unnormalized_stencil_5 + _582;
  uint16_t _584 = _575 + _583;
  return _584;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 5), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 5), blur_unnormalized_s1_y)*(uint16)50) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 5), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 6), blur_unnormalized_s1_y)*(uint16)63) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 6), (blur_unnormalized_s1_y + 1))*(uint16)78) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 5), (blur_unnormalized_s1_y + 1))*(uint16)63)))))
hw_uint<16> hcompute_blur_unnormalized_stencil_19(hw_uint<16>& blur_unnormalized_stencil, hw_uint<64>& hw_input_global_wrapper_global_wrapper_stencil) {
  uint16_t _blur_unnormalized_stencil_6 = (uint16_t) (blur_unnormalized_stencil.extract<0, 15>());

  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_21 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_22 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_23 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_24 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<48, 63>());

  uint16_t _616 = (uint16_t)(50);
  uint16_t _617 = _hw_input_global_wrapper_global_wrapper_stencil_21 * _616;
  uint16_t _618 = (uint16_t)(63);
  uint16_t _619 = _hw_input_global_wrapper_global_wrapper_stencil_22 * _618;
  uint16_t _620 = (uint16_t)(78);
  uint16_t _621 = _hw_input_global_wrapper_global_wrapper_stencil_23 * _620;
  uint16_t _622 = _hw_input_global_wrapper_global_wrapper_stencil_24 * _618;
  uint16_t _623 = _621 + _622;
  uint16_t _624 = _619 + _623;
  uint16_t _625 = _blur_unnormalized_stencil_6 + _624;
  uint16_t _626 = _617 + _625;
  return _626;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 6), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 6), blur_unnormalized_s1_y)*(uint16)50) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 6), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 7), blur_unnormalized_s1_y)*(uint16)63) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 7), (blur_unnormalized_s1_y + 1))*(uint16)78) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 6), (blur_unnormalized_s1_y + 1))*(uint16)63)))))
hw_uint<16> hcompute_blur_unnormalized_stencil_20(hw_uint<16>& blur_unnormalized_stencil, hw_uint<64>& hw_input_global_wrapper_global_wrapper_stencil) {
  uint16_t _blur_unnormalized_stencil_7 = (uint16_t) (blur_unnormalized_stencil.extract<0, 15>());

  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_25 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_26 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_27 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_28 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<48, 63>());

  uint16_t _658 = (uint16_t)(50);
  uint16_t _659 = _hw_input_global_wrapper_global_wrapper_stencil_25 * _658;
  uint16_t _660 = (uint16_t)(63);
  uint16_t _661 = _hw_input_global_wrapper_global_wrapper_stencil_26 * _660;
  uint16_t _662 = (uint16_t)(78);
  uint16_t _663 = _hw_input_global_wrapper_global_wrapper_stencil_27 * _662;
  uint16_t _664 = _hw_input_global_wrapper_global_wrapper_stencil_28 * _660;
  uint16_t _665 = _663 + _664;
  uint16_t _666 = _661 + _665;
  uint16_t _667 = _blur_unnormalized_stencil_7 + _666;
  uint16_t _668 = _659 + _667;
  return _668;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 7), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 7), blur_unnormalized_s1_y)*(uint16)50) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 7), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 8), blur_unnormalized_s1_y)*(uint16)63) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 8), (blur_unnormalized_s1_y + 1))*(uint16)78) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 7), (blur_unnormalized_s1_y + 1))*(uint16)63)))))
hw_uint<16> hcompute_blur_unnormalized_stencil_21(hw_uint<16>& blur_unnormalized_stencil, hw_uint<64>& hw_input_global_wrapper_global_wrapper_stencil) {
  uint16_t _blur_unnormalized_stencil_8 = (uint16_t) (blur_unnormalized_stencil.extract<0, 15>());

  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_29 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_30 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_31 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_32 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<48, 63>());

  uint16_t _700 = (uint16_t)(50);
  uint16_t _701 = _hw_input_global_wrapper_global_wrapper_stencil_29 * _700;
  uint16_t _702 = (uint16_t)(63);
  uint16_t _703 = _hw_input_global_wrapper_global_wrapper_stencil_30 * _702;
  uint16_t _704 = (uint16_t)(78);
  uint16_t _705 = _hw_input_global_wrapper_global_wrapper_stencil_31 * _704;
  uint16_t _706 = _hw_input_global_wrapper_global_wrapper_stencil_32 * _702;
  uint16_t _707 = _705 + _706;
  uint16_t _708 = _703 + _707;
  uint16_t _709 = _blur_unnormalized_stencil_8 + _708;
  uint16_t _710 = _701 + _709;
  return _710;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 8), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 8), blur_unnormalized_s1_y)*(uint16)50) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 8), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 9), blur_unnormalized_s1_y)*(uint16)63) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 9), (blur_unnormalized_s1_y + 1))*(uint16)78) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 8), (blur_unnormalized_s1_y + 1))*(uint16)63)))))
hw_uint<16> hcompute_blur_unnormalized_stencil_22(hw_uint<16>& blur_unnormalized_stencil, hw_uint<64>& hw_input_global_wrapper_global_wrapper_stencil) {
  uint16_t _blur_unnormalized_stencil_9 = (uint16_t) (blur_unnormalized_stencil.extract<0, 15>());

  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_33 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_34 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_35 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_36 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<48, 63>());

  uint16_t _742 = (uint16_t)(50);
  uint16_t _743 = _hw_input_global_wrapper_global_wrapper_stencil_33 * _742;
  uint16_t _744 = (uint16_t)(63);
  uint16_t _745 = _hw_input_global_wrapper_global_wrapper_stencil_34 * _744;
  uint16_t _746 = (uint16_t)(78);
  uint16_t _747 = _hw_input_global_wrapper_global_wrapper_stencil_35 * _746;
  uint16_t _748 = _hw_input_global_wrapper_global_wrapper_stencil_36 * _744;
  uint16_t _749 = _747 + _748;
  uint16_t _750 = _745 + _749;
  uint16_t _751 = _blur_unnormalized_stencil_9 + _750;
  uint16_t _752 = _743 + _751;
  return _752;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 9), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 9), blur_unnormalized_s1_y)*(uint16)50) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 9), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 10), blur_unnormalized_s1_y)*(uint16)63) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 10), (blur_unnormalized_s1_y + 1))*(uint16)78) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 9), (blur_unnormalized_s1_y + 1))*(uint16)63)))))
hw_uint<16> hcompute_blur_unnormalized_stencil_23(hw_uint<16>& blur_unnormalized_stencil, hw_uint<64>& hw_input_global_wrapper_global_wrapper_stencil) {
  uint16_t _blur_unnormalized_stencil_10 = (uint16_t) (blur_unnormalized_stencil.extract<0, 15>());

  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_37 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_38 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_39 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_40 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<48, 63>());

  uint16_t _784 = (uint16_t)(50);
  uint16_t _785 = _hw_input_global_wrapper_global_wrapper_stencil_37 * _784;
  uint16_t _786 = (uint16_t)(63);
  uint16_t _787 = _hw_input_global_wrapper_global_wrapper_stencil_38 * _786;
  uint16_t _788 = (uint16_t)(78);
  uint16_t _789 = _hw_input_global_wrapper_global_wrapper_stencil_39 * _788;
  uint16_t _790 = _hw_input_global_wrapper_global_wrapper_stencil_40 * _786;
  uint16_t _791 = _789 + _790;
  uint16_t _792 = _787 + _791;
  uint16_t _793 = _blur_unnormalized_stencil_10 + _792;
  uint16_t _794 = _785 + _793;
  return _794;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 10), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 10), blur_unnormalized_s1_y)*(uint16)50) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 10), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 11), blur_unnormalized_s1_y)*(uint16)63) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 11), (blur_unnormalized_s1_y + 1))*(uint16)78) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 10), (blur_unnormalized_s1_y + 1))*(uint16)63)))))
hw_uint<16> hcompute_blur_unnormalized_stencil_24(hw_uint<16>& blur_unnormalized_stencil, hw_uint<64>& hw_input_global_wrapper_global_wrapper_stencil) {
  uint16_t _blur_unnormalized_stencil_11 = (uint16_t) (blur_unnormalized_stencil.extract<0, 15>());

  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_41 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_42 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_43 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_44 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<48, 63>());

  uint16_t _826 = (uint16_t)(50);
  uint16_t _827 = _hw_input_global_wrapper_global_wrapper_stencil_41 * _826;
  uint16_t _828 = (uint16_t)(63);
  uint16_t _829 = _hw_input_global_wrapper_global_wrapper_stencil_42 * _828;
  uint16_t _830 = (uint16_t)(78);
  uint16_t _831 = _hw_input_global_wrapper_global_wrapper_stencil_43 * _830;
  uint16_t _832 = _hw_input_global_wrapper_global_wrapper_stencil_44 * _828;
  uint16_t _833 = _831 + _832;
  uint16_t _834 = _829 + _833;
  uint16_t _835 = _blur_unnormalized_stencil_11 + _834;
  uint16_t _836 = _827 + _835;
  return _836;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 11), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 11), blur_unnormalized_s1_y)*(uint16)50) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 11), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 12), blur_unnormalized_s1_y)*(uint16)63) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 12), (blur_unnormalized_s1_y + 1))*(uint16)78) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 11), (blur_unnormalized_s1_y + 1))*(uint16)63)))))
hw_uint<16> hcompute_blur_unnormalized_stencil_25(hw_uint<16>& blur_unnormalized_stencil, hw_uint<64>& hw_input_global_wrapper_global_wrapper_stencil) {
  uint16_t _blur_unnormalized_stencil_12 = (uint16_t) (blur_unnormalized_stencil.extract<0, 15>());

  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_45 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_46 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_47 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_48 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<48, 63>());

  uint16_t _868 = (uint16_t)(50);
  uint16_t _869 = _hw_input_global_wrapper_global_wrapper_stencil_45 * _868;
  uint16_t _870 = (uint16_t)(63);
  uint16_t _871 = _hw_input_global_wrapper_global_wrapper_stencil_46 * _870;
  uint16_t _872 = (uint16_t)(78);
  uint16_t _873 = _hw_input_global_wrapper_global_wrapper_stencil_47 * _872;
  uint16_t _874 = _hw_input_global_wrapper_global_wrapper_stencil_48 * _870;
  uint16_t _875 = _873 + _874;
  uint16_t _876 = _871 + _875;
  uint16_t _877 = _blur_unnormalized_stencil_12 + _876;
  uint16_t _878 = _869 + _877;
  return _878;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 12), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 12), blur_unnormalized_s1_y)*(uint16)50) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 12), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 13), blur_unnormalized_s1_y)*(uint16)63) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 13), (blur_unnormalized_s1_y + 1))*(uint16)78) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 12), (blur_unnormalized_s1_y + 1))*(uint16)63)))))
hw_uint<16> hcompute_blur_unnormalized_stencil_26(hw_uint<16>& blur_unnormalized_stencil, hw_uint<64>& hw_input_global_wrapper_global_wrapper_stencil) {
  uint16_t _blur_unnormalized_stencil_13 = (uint16_t) (blur_unnormalized_stencil.extract<0, 15>());

  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_49 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_50 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_51 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_52 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<48, 63>());

  uint16_t _910 = (uint16_t)(50);
  uint16_t _911 = _hw_input_global_wrapper_global_wrapper_stencil_49 * _910;
  uint16_t _912 = (uint16_t)(63);
  uint16_t _913 = _hw_input_global_wrapper_global_wrapper_stencil_50 * _912;
  uint16_t _914 = (uint16_t)(78);
  uint16_t _915 = _hw_input_global_wrapper_global_wrapper_stencil_51 * _914;
  uint16_t _916 = _hw_input_global_wrapper_global_wrapper_stencil_52 * _912;
  uint16_t _917 = _915 + _916;
  uint16_t _918 = _913 + _917;
  uint16_t _919 = _blur_unnormalized_stencil_13 + _918;
  uint16_t _920 = _911 + _919;
  return _920;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 13), blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 13), blur_unnormalized_s1_y)*(uint16)50) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*14) + 13), blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 14), blur_unnormalized_s1_y)*(uint16)63) + ((hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 14), (blur_unnormalized_s1_y + 1))*(uint16)78) + (hw_input_global_wrapper_global_wrapper.stencil(((blur_unnormalized_s1_x_x*14) + 13), (blur_unnormalized_s1_y + 1))*(uint16)63)))))
hw_uint<16> hcompute_blur_unnormalized_stencil_27(hw_uint<16>& blur_unnormalized_stencil, hw_uint<64>& hw_input_global_wrapper_global_wrapper_stencil) {
  uint16_t _blur_unnormalized_stencil_14 = (uint16_t) (blur_unnormalized_stencil.extract<0, 15>());

  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_53 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_54 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_55 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_56 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<48, 63>());

  uint16_t _952 = (uint16_t)(50);
  uint16_t _953 = _hw_input_global_wrapper_global_wrapper_stencil_53 * _952;
  uint16_t _954 = (uint16_t)(63);
  uint16_t _955 = _hw_input_global_wrapper_global_wrapper_stencil_54 * _954;
  uint16_t _956 = (uint16_t)(78);
  uint16_t _957 = _hw_input_global_wrapper_global_wrapper_stencil_55 * _956;
  uint16_t _958 = _hw_input_global_wrapper_global_wrapper_stencil_56 * _954;
  uint16_t _959 = _957 + _958;
  uint16_t _960 = _955 + _959;
  uint16_t _961 = _blur_unnormalized_stencil_14 + _960;
  uint16_t _962 = _953 + _961;
  return _962;
}

//store is: blur.stencil((blur_s0_x_x*14), blur_s0_y) = (blur_unnormalized.stencil((blur_s0_x_x*14), blur_s0_y)/(uint16)256)
hw_uint<16> hcompute_blur_stencil(hw_uint<16>& blur_unnormalized_stencil) {
  uint16_t _blur_unnormalized_stencil_15 = (uint16_t) (blur_unnormalized_stencil.extract<0, 15>());

  uint16_t _994 = (uint16_t)(8);
  uint16_t _995 = _blur_unnormalized_stencil_15 >> _994;
  return _995;
}

//store is: blur.stencil(((blur_s0_x_x*14) + 1), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*14) + 1), blur_s0_y)/(uint16)256)
hw_uint<16> hcompute_blur_stencil_1(hw_uint<16>& blur_unnormalized_stencil) {
  uint16_t _blur_unnormalized_stencil_16 = (uint16_t) (blur_unnormalized_stencil.extract<0, 15>());

  uint16_t _1002 = (uint16_t)(8);
  uint16_t _1003 = _blur_unnormalized_stencil_16 >> _1002;
  return _1003;
}

//store is: blur.stencil(((blur_s0_x_x*14) + 2), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*14) + 2), blur_s0_y)/(uint16)256)
hw_uint<16> hcompute_blur_stencil_2(hw_uint<16>& blur_unnormalized_stencil) {
  uint16_t _blur_unnormalized_stencil_17 = (uint16_t) (blur_unnormalized_stencil.extract<0, 15>());

  uint16_t _1011 = (uint16_t)(8);
  uint16_t _1012 = _blur_unnormalized_stencil_17 >> _1011;
  return _1012;
}

//store is: blur.stencil(((blur_s0_x_x*14) + 3), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*14) + 3), blur_s0_y)/(uint16)256)
hw_uint<16> hcompute_blur_stencil_3(hw_uint<16>& blur_unnormalized_stencil) {
  uint16_t _blur_unnormalized_stencil_18 = (uint16_t) (blur_unnormalized_stencil.extract<0, 15>());

  uint16_t _1020 = (uint16_t)(8);
  uint16_t _1021 = _blur_unnormalized_stencil_18 >> _1020;
  return _1021;
}

//store is: blur.stencil(((blur_s0_x_x*14) + 4), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*14) + 4), blur_s0_y)/(uint16)256)
hw_uint<16> hcompute_blur_stencil_4(hw_uint<16>& blur_unnormalized_stencil) {
  uint16_t _blur_unnormalized_stencil_19 = (uint16_t) (blur_unnormalized_stencil.extract<0, 15>());

  uint16_t _1029 = (uint16_t)(8);
  uint16_t _1030 = _blur_unnormalized_stencil_19 >> _1029;
  return _1030;
}

//store is: blur.stencil(((blur_s0_x_x*14) + 5), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*14) + 5), blur_s0_y)/(uint16)256)
hw_uint<16> hcompute_blur_stencil_5(hw_uint<16>& blur_unnormalized_stencil) {
  uint16_t _blur_unnormalized_stencil_20 = (uint16_t) (blur_unnormalized_stencil.extract<0, 15>());

  uint16_t _1038 = (uint16_t)(8);
  uint16_t _1039 = _blur_unnormalized_stencil_20 >> _1038;
  return _1039;
}

//store is: blur.stencil(((blur_s0_x_x*14) + 6), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*14) + 6), blur_s0_y)/(uint16)256)
hw_uint<16> hcompute_blur_stencil_6(hw_uint<16>& blur_unnormalized_stencil) {
  uint16_t _blur_unnormalized_stencil_21 = (uint16_t) (blur_unnormalized_stencil.extract<0, 15>());

  uint16_t _1047 = (uint16_t)(8);
  uint16_t _1048 = _blur_unnormalized_stencil_21 >> _1047;
  return _1048;
}

//store is: blur.stencil(((blur_s0_x_x*14) + 7), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*14) + 7), blur_s0_y)/(uint16)256)
hw_uint<16> hcompute_blur_stencil_7(hw_uint<16>& blur_unnormalized_stencil) {
  uint16_t _blur_unnormalized_stencil_22 = (uint16_t) (blur_unnormalized_stencil.extract<0, 15>());

  uint16_t _1056 = (uint16_t)(8);
  uint16_t _1057 = _blur_unnormalized_stencil_22 >> _1056;
  return _1057;
}

//store is: blur.stencil(((blur_s0_x_x*14) + 8), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*14) + 8), blur_s0_y)/(uint16)256)
hw_uint<16> hcompute_blur_stencil_8(hw_uint<16>& blur_unnormalized_stencil) {
  uint16_t _blur_unnormalized_stencil_23 = (uint16_t) (blur_unnormalized_stencil.extract<0, 15>());

  uint16_t _1065 = (uint16_t)(8);
  uint16_t _1066 = _blur_unnormalized_stencil_23 >> _1065;
  return _1066;
}

//store is: blur.stencil(((blur_s0_x_x*14) + 9), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*14) + 9), blur_s0_y)/(uint16)256)
hw_uint<16> hcompute_blur_stencil_9(hw_uint<16>& blur_unnormalized_stencil) {
  uint16_t _blur_unnormalized_stencil_24 = (uint16_t) (blur_unnormalized_stencil.extract<0, 15>());

  uint16_t _1074 = (uint16_t)(8);
  uint16_t _1075 = _blur_unnormalized_stencil_24 >> _1074;
  return _1075;
}

//store is: blur.stencil(((blur_s0_x_x*14) + 10), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*14) + 10), blur_s0_y)/(uint16)256)
hw_uint<16> hcompute_blur_stencil_10(hw_uint<16>& blur_unnormalized_stencil) {
  uint16_t _blur_unnormalized_stencil_25 = (uint16_t) (blur_unnormalized_stencil.extract<0, 15>());

  uint16_t _1083 = (uint16_t)(8);
  uint16_t _1084 = _blur_unnormalized_stencil_25 >> _1083;
  return _1084;
}

//store is: blur.stencil(((blur_s0_x_x*14) + 11), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*14) + 11), blur_s0_y)/(uint16)256)
hw_uint<16> hcompute_blur_stencil_11(hw_uint<16>& blur_unnormalized_stencil) {
  uint16_t _blur_unnormalized_stencil_26 = (uint16_t) (blur_unnormalized_stencil.extract<0, 15>());

  uint16_t _1092 = (uint16_t)(8);
  uint16_t _1093 = _blur_unnormalized_stencil_26 >> _1092;
  return _1093;
}

//store is: blur.stencil(((blur_s0_x_x*14) + 12), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*14) + 12), blur_s0_y)/(uint16)256)
hw_uint<16> hcompute_blur_stencil_12(hw_uint<16>& blur_unnormalized_stencil) {
  uint16_t _blur_unnormalized_stencil_27 = (uint16_t) (blur_unnormalized_stencil.extract<0, 15>());

  uint16_t _1101 = (uint16_t)(8);
  uint16_t _1102 = _blur_unnormalized_stencil_27 >> _1101;
  return _1102;
}

//store is: blur.stencil(((blur_s0_x_x*14) + 13), blur_s0_y) = (blur_unnormalized.stencil(((blur_s0_x_x*14) + 13), blur_s0_y)/(uint16)256)
hw_uint<16> hcompute_blur_stencil_13(hw_uint<16>& blur_unnormalized_stencil) {
  uint16_t _blur_unnormalized_stencil_28 = (uint16_t) (blur_unnormalized_stencil.extract<0, 15>());

  uint16_t _1110 = (uint16_t)(8);
  uint16_t _1111 = _blur_unnormalized_stencil_28 >> _1110;
  return _1111;
}

//store is: hw_output.stencil((hw_output_s0_x_xii_xii*14), hw_output_s0_y_yii) = blur.stencil((hw_output_s0_x_xii_xii*14), hw_output_s0_y_yii)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& blur_stencil) {
  uint16_t _blur_stencil_1 = (uint16_t) (blur_stencil.extract<0, 15>());

  return _blur_stencil_1;
}

//store is: hw_output.stencil(((hw_output_s0_x_xii_xii*14) + 1), hw_output_s0_y_yii) = blur.stencil(((hw_output_s0_x_xii_xii*14) + 1), hw_output_s0_y_yii)
hw_uint<16> hcompute_hw_output_stencil_1(hw_uint<16>& blur_stencil) {
  uint16_t _blur_stencil_2 = (uint16_t) (blur_stencil.extract<0, 15>());

  return _blur_stencil_2;
}

//store is: hw_output.stencil(((hw_output_s0_x_xii_xii*14) + 2), hw_output_s0_y_yii) = blur.stencil(((hw_output_s0_x_xii_xii*14) + 2), hw_output_s0_y_yii)
hw_uint<16> hcompute_hw_output_stencil_2(hw_uint<16>& blur_stencil) {
  uint16_t _blur_stencil_3 = (uint16_t) (blur_stencil.extract<0, 15>());

  return _blur_stencil_3;
}

//store is: hw_output.stencil(((hw_output_s0_x_xii_xii*14) + 3), hw_output_s0_y_yii) = blur.stencil(((hw_output_s0_x_xii_xii*14) + 3), hw_output_s0_y_yii)
hw_uint<16> hcompute_hw_output_stencil_3(hw_uint<16>& blur_stencil) {
  uint16_t _blur_stencil_4 = (uint16_t) (blur_stencil.extract<0, 15>());

  return _blur_stencil_4;
}

//store is: hw_output.stencil(((hw_output_s0_x_xii_xii*14) + 4), hw_output_s0_y_yii) = blur.stencil(((hw_output_s0_x_xii_xii*14) + 4), hw_output_s0_y_yii)
hw_uint<16> hcompute_hw_output_stencil_4(hw_uint<16>& blur_stencil) {
  uint16_t _blur_stencil_5 = (uint16_t) (blur_stencil.extract<0, 15>());

  return _blur_stencil_5;
}

//store is: hw_output.stencil(((hw_output_s0_x_xii_xii*14) + 5), hw_output_s0_y_yii) = blur.stencil(((hw_output_s0_x_xii_xii*14) + 5), hw_output_s0_y_yii)
hw_uint<16> hcompute_hw_output_stencil_5(hw_uint<16>& blur_stencil) {
  uint16_t _blur_stencil_6 = (uint16_t) (blur_stencil.extract<0, 15>());

  return _blur_stencil_6;
}

//store is: hw_output.stencil(((hw_output_s0_x_xii_xii*14) + 6), hw_output_s0_y_yii) = blur.stencil(((hw_output_s0_x_xii_xii*14) + 6), hw_output_s0_y_yii)
hw_uint<16> hcompute_hw_output_stencil_6(hw_uint<16>& blur_stencil) {
  uint16_t _blur_stencil_7 = (uint16_t) (blur_stencil.extract<0, 15>());

  return _blur_stencil_7;
}

//store is: hw_output.stencil(((hw_output_s0_x_xii_xii*14) + 7), hw_output_s0_y_yii) = blur.stencil(((hw_output_s0_x_xii_xii*14) + 7), hw_output_s0_y_yii)
hw_uint<16> hcompute_hw_output_stencil_7(hw_uint<16>& blur_stencil) {
  uint16_t _blur_stencil_8 = (uint16_t) (blur_stencil.extract<0, 15>());

  return _blur_stencil_8;
}

//store is: hw_output.stencil(((hw_output_s0_x_xii_xii*14) + 8), hw_output_s0_y_yii) = blur.stencil(((hw_output_s0_x_xii_xii*14) + 8), hw_output_s0_y_yii)
hw_uint<16> hcompute_hw_output_stencil_8(hw_uint<16>& blur_stencil) {
  uint16_t _blur_stencil_9 = (uint16_t) (blur_stencil.extract<0, 15>());

  return _blur_stencil_9;
}

//store is: hw_output.stencil(((hw_output_s0_x_xii_xii*14) + 9), hw_output_s0_y_yii) = blur.stencil(((hw_output_s0_x_xii_xii*14) + 9), hw_output_s0_y_yii)
hw_uint<16> hcompute_hw_output_stencil_9(hw_uint<16>& blur_stencil) {
  uint16_t _blur_stencil_10 = (uint16_t) (blur_stencil.extract<0, 15>());

  return _blur_stencil_10;
}

//store is: hw_output.stencil(((hw_output_s0_x_xii_xii*14) + 10), hw_output_s0_y_yii) = blur.stencil(((hw_output_s0_x_xii_xii*14) + 10), hw_output_s0_y_yii)
hw_uint<16> hcompute_hw_output_stencil_10(hw_uint<16>& blur_stencil) {
  uint16_t _blur_stencil_11 = (uint16_t) (blur_stencil.extract<0, 15>());

  return _blur_stencil_11;
}

//store is: hw_output.stencil(((hw_output_s0_x_xii_xii*14) + 11), hw_output_s0_y_yii) = blur.stencil(((hw_output_s0_x_xii_xii*14) + 11), hw_output_s0_y_yii)
hw_uint<16> hcompute_hw_output_stencil_11(hw_uint<16>& blur_stencil) {
  uint16_t _blur_stencil_12 = (uint16_t) (blur_stencil.extract<0, 15>());

  return _blur_stencil_12;
}

//store is: hw_output.stencil(((hw_output_s0_x_xii_xii*14) + 12), hw_output_s0_y_yii) = blur.stencil(((hw_output_s0_x_xii_xii*14) + 12), hw_output_s0_y_yii)
hw_uint<16> hcompute_hw_output_stencil_12(hw_uint<16>& blur_stencil) {
  uint16_t _blur_stencil_13 = (uint16_t) (blur_stencil.extract<0, 15>());

  return _blur_stencil_13;
}

//store is: hw_output.stencil(((hw_output_s0_x_xii_xii*14) + 13), hw_output_s0_y_yii) = blur.stencil(((hw_output_s0_x_xii_xii*14) + 13), hw_output_s0_y_yii)
hw_uint<16> hcompute_hw_output_stencil_13(hw_uint<16>& blur_stencil) {
  uint16_t _blur_stencil_14 = (uint16_t) (blur_stencil.extract<0, 15>());

  return _blur_stencil_14;
}

//store is: hw_output_global_wrapper.glb.stencil((hw_output_global_wrapper_s0_x_xi_xi*14), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil((hw_output_global_wrapper_s0_x_xi_xi*14), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_glb_stencil(hw_uint<16>& hw_output_stencil) {
  uint16_t _hw_output_stencil_1 = (uint16_t) (hw_output_stencil.extract<0, 15>());

  return _hw_output_stencil_1;
}

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 1), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 1), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_glb_stencil_1(hw_uint<16>& hw_output_stencil) {
  uint16_t _hw_output_stencil_2 = (uint16_t) (hw_output_stencil.extract<0, 15>());

  return _hw_output_stencil_2;
}

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 2), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 2), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_glb_stencil_2(hw_uint<16>& hw_output_stencil) {
  uint16_t _hw_output_stencil_3 = (uint16_t) (hw_output_stencil.extract<0, 15>());

  return _hw_output_stencil_3;
}

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 3), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 3), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_glb_stencil_3(hw_uint<16>& hw_output_stencil) {
  uint16_t _hw_output_stencil_4 = (uint16_t) (hw_output_stencil.extract<0, 15>());

  return _hw_output_stencil_4;
}

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 4), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 4), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_glb_stencil_4(hw_uint<16>& hw_output_stencil) {
  uint16_t _hw_output_stencil_5 = (uint16_t) (hw_output_stencil.extract<0, 15>());

  return _hw_output_stencil_5;
}

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 5), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 5), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_glb_stencil_5(hw_uint<16>& hw_output_stencil) {
  uint16_t _hw_output_stencil_6 = (uint16_t) (hw_output_stencil.extract<0, 15>());

  return _hw_output_stencil_6;
}

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 6), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 6), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_glb_stencil_6(hw_uint<16>& hw_output_stencil) {
  uint16_t _hw_output_stencil_7 = (uint16_t) (hw_output_stencil.extract<0, 15>());

  return _hw_output_stencil_7;
}

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 7), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 7), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_glb_stencil_7(hw_uint<16>& hw_output_stencil) {
  uint16_t _hw_output_stencil_8 = (uint16_t) (hw_output_stencil.extract<0, 15>());

  return _hw_output_stencil_8;
}

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 8), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 8), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_glb_stencil_8(hw_uint<16>& hw_output_stencil) {
  uint16_t _hw_output_stencil_9 = (uint16_t) (hw_output_stencil.extract<0, 15>());

  return _hw_output_stencil_9;
}

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 9), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 9), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_glb_stencil_9(hw_uint<16>& hw_output_stencil) {
  uint16_t _hw_output_stencil_10 = (uint16_t) (hw_output_stencil.extract<0, 15>());

  return _hw_output_stencil_10;
}

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 10), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 10), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_glb_stencil_10(hw_uint<16>& hw_output_stencil) {
  uint16_t _hw_output_stencil_11 = (uint16_t) (hw_output_stencil.extract<0, 15>());

  return _hw_output_stencil_11;
}

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 11), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 11), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_glb_stencil_11(hw_uint<16>& hw_output_stencil) {
  uint16_t _hw_output_stencil_12 = (uint16_t) (hw_output_stencil.extract<0, 15>());

  return _hw_output_stencil_12;
}

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 12), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 12), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_glb_stencil_12(hw_uint<16>& hw_output_stencil) {
  uint16_t _hw_output_stencil_13 = (uint16_t) (hw_output_stencil.extract<0, 15>());

  return _hw_output_stencil_13;
}

//store is: hw_output_global_wrapper.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 13), hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(((hw_output_global_wrapper_s0_x_xi_xi*14) + 13), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_glb_stencil_13(hw_uint<16>& hw_output_stencil) {
  uint16_t _hw_output_stencil_14 = (uint16_t) (hw_output_stencil.extract<0, 15>());

  return _hw_output_stencil_14;
}

