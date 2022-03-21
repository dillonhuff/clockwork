#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_1 = (int16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_1;
}

//store is: hw_kernel_global_wrapper.stencil(hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_y) = hw_kernel.stencil(hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_kernel_global_wrapper_stencil(hw_uint<16>& hw_kernel_stencil) {
  int16_t _hw_kernel_stencil_1 = (int16_t) (hw_kernel_stencil.extract<0, 15>());

  return _hw_kernel_stencil_1;
}

//store is: mul.stencil((mul_s0_x_x*2), mul_s0_y) = (int16)0
hw_uint<16> hcompute_mul_stencil() {
  int16_t _390 = (int16_t)(0);
  return _390;
}

//store is: mul.stencil(((mul_s0_x_x*2) + 1), mul_s0_y) = (int16)0
hw_uint<16> hcompute_mul_stencil_1() {
  int16_t _394 = (int16_t)(0);
  return _394;
}

//store is: mul.stencil((mul_s1_x_xo*2), mul_s1_y) = ((hw_input_global_wrapper.stencil((mul_s1_r_x_rxo*2), mul_s1_y)*hw_kernel_global_wrapper.stencil((mul_s1_x_xo*2), (mul_s1_r_x_rxo*2))) + (mul.stencil((mul_s1_x_xo*2), mul_s1_y) + (hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*2) + 1), mul_s1_y)*hw_kernel_global_wrapper.stencil((mul_s1_x_xo*2), ((mul_s1_r_x_rxo*2) + 1)))))
hw_uint<16> hcompute_mul_stencil_2(hw_uint<32>& hw_input_global_wrapper_stencil, hw_uint<32>& hw_kernel_global_wrapper_stencil, hw_uint<16>& mul_stencil) {
  int16_t _hw_input_global_wrapper_stencil_1 = (int16_t) (hw_input_global_wrapper_stencil.extract<0, 15>());
  int16_t _hw_input_global_wrapper_stencil_2 = (int16_t) (hw_input_global_wrapper_stencil.extract<16, 31>());

  int16_t _hw_kernel_global_wrapper_stencil_1 = (int16_t) (hw_kernel_global_wrapper_stencil.extract<0, 15>());
  int16_t _hw_kernel_global_wrapper_stencil_2 = (int16_t) (hw_kernel_global_wrapper_stencil.extract<16, 31>());

  int16_t _mul_stencil_1 = (int16_t) (mul_stencil.extract<0, 15>());

  int16_t _399 = _hw_input_global_wrapper_stencil_1 * _hw_kernel_global_wrapper_stencil_1;
  int16_t _400 = _hw_input_global_wrapper_stencil_2 * _hw_kernel_global_wrapper_stencil_2;
  int16_t _401 = _mul_stencil_1 + _400;
  int16_t _402 = _399 + _401;
  return _402;
}

//store is: mul.stencil(((mul_s1_x_xo*2) + 1), mul_s1_y) = ((hw_input_global_wrapper.stencil((mul_s1_r_x_rxo*2), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*2) + 1), (mul_s1_r_x_rxo*2))) + (mul.stencil(((mul_s1_x_xo*2) + 1), mul_s1_y) + (hw_input_global_wrapper.stencil(((mul_s1_r_x_rxo*2) + 1), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_xo*2) + 1), ((mul_s1_r_x_rxo*2) + 1)))))
hw_uint<16> hcompute_mul_stencil_3(hw_uint<32>& hw_input_global_wrapper_stencil, hw_uint<32>& hw_kernel_global_wrapper_stencil, hw_uint<16>& mul_stencil) {
  int16_t _hw_input_global_wrapper_stencil_3 = (int16_t) (hw_input_global_wrapper_stencil.extract<0, 15>());
  int16_t _hw_input_global_wrapper_stencil_4 = (int16_t) (hw_input_global_wrapper_stencil.extract<16, 31>());

  int16_t _hw_kernel_global_wrapper_stencil_3 = (int16_t) (hw_kernel_global_wrapper_stencil.extract<0, 15>());
  int16_t _hw_kernel_global_wrapper_stencil_4 = (int16_t) (hw_kernel_global_wrapper_stencil.extract<16, 31>());

  int16_t _mul_stencil_2 = (int16_t) (mul_stencil.extract<0, 15>());

  int16_t _419 = _hw_input_global_wrapper_stencil_3 * _hw_kernel_global_wrapper_stencil_3;
  int16_t _420 = _hw_input_global_wrapper_stencil_4 * _hw_kernel_global_wrapper_stencil_4;
  int16_t _421 = _mul_stencil_2 + _420;
  int16_t _422 = _419 + _421;
  return _422;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = mul.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& mul_stencil) {
  int16_t _mul_stencil_3 = (int16_t) (mul_stencil.extract<0, 15>());

  return _mul_stencil_3;
}

