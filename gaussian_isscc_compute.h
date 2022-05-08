#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.glb.stencil(hw_input_global_wrapper_s0_x_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_1;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(hw_input_global_wrapper_global_wrapper_s0_x_x, hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(hw_input_global_wrapper_global_wrapper_s0_x_x, hw_input_global_wrapper_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_1 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_1;
}

//store is: blur_unnormalized.stencil(blur_unnormalized_s0_x_x, blur_unnormalized_s0_y) = (uint16)0
hw_uint<16> hcompute_blur_unnormalized_stencil() {
  uint16_t _258 = (uint16_t)(0);
  return _258;
}

//store is: blur_unnormalized.stencil(blur_unnormalized_s1_x_x, blur_unnormalized_s1_y) = ((hw_input_global_wrapper_global_wrapper.stencil(blur_unnormalized_s1_x_x, blur_unnormalized_s1_y)*(uint16)50) + (blur_unnormalized.stencil(blur_unnormalized_s1_x_x, blur_unnormalized_s1_y) + ((hw_input_global_wrapper_global_wrapper.stencil((blur_unnormalized_s1_x_x + 1), blur_unnormalized_s1_y)*(uint16)63) + ((hw_input_global_wrapper_global_wrapper.stencil((blur_unnormalized_s1_x_x + 1), (blur_unnormalized_s1_y + 1))*(uint16)78) + (hw_input_global_wrapper_global_wrapper.stencil(blur_unnormalized_s1_x_x, (blur_unnormalized_s1_y + 1))*(uint16)63)))))
hw_uint<16> hcompute_blur_unnormalized_stencil_1(hw_uint<16>& blur_unnormalized_stencil, hw_uint<64>& hw_input_global_wrapper_global_wrapper_stencil) {
  uint16_t _blur_unnormalized_stencil_1 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_1 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_2 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_3 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_4 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<48, 63>();

  uint16_t _261 = (uint16_t)(50);
  uint16_t _262 = _hw_input_global_wrapper_global_wrapper_stencil_1 * _261;
  uint16_t _263 = (uint16_t)(63);
  uint16_t _264 = _hw_input_global_wrapper_global_wrapper_stencil_2 * _263;
  uint16_t _265 = (uint16_t)(78);
  uint16_t _266 = _hw_input_global_wrapper_global_wrapper_stencil_3 * _265;
  uint16_t _267 = _hw_input_global_wrapper_global_wrapper_stencil_4 * _263;
  uint16_t _268 = _266 + _267;
  uint16_t _269 = _264 + _268;
  uint16_t _270 = _blur_unnormalized_stencil_1 + _269;
  uint16_t _271 = _262 + _270;
  return _271;
}

//store is: blur.stencil(blur_s0_x_x, blur_s0_y) = (blur_unnormalized.stencil(blur_s0_x_x, blur_s0_y)/(uint16)256)
hw_uint<16> hcompute_blur_stencil(hw_uint<16>& blur_unnormalized_stencil) {
  uint16_t _blur_unnormalized_stencil_2 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _301 = (uint16_t)(8);
  uint16_t _302 = _blur_unnormalized_stencil_2 >> _301;
  return _302;
}

//store is: hw_output.stencil(hw_output_s0_x_xii_xii, hw_output_s0_y_yii) = blur.stencil(hw_output_s0_x_xii_xii, hw_output_s0_y_yii)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& blur_stencil) {
  uint16_t _blur_stencil_1 = (uint16_t) blur_stencil.extract<0, 15>();

  return _blur_stencil_1;
}

//store is: hw_output_global_wrapper.glb.stencil(hw_output_global_wrapper_s0_x_xi_xi, hw_output_global_wrapper_s0_y_yi) = hw_output.stencil(hw_output_global_wrapper_s0_x_xi_xi, hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_glb_stencil(hw_uint<16>& hw_output_stencil) {
  uint16_t _hw_output_stencil_1 = (uint16_t) hw_output_stencil.extract<0, 15>();

  return _hw_output_stencil_1;
}

