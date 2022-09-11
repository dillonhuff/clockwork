#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: input_cgra.stencil(input_cgra_s0_z, input_cgra_s0_x, input_cgra_s0_y) = input_host.stencil(input_cgra_s0_z, input_cgra_s0_x, input_cgra_s0_y)
hw_uint<16> hcompute_input_cgra_stencil(hw_uint<16>& input_host_stencil) {
  int16_t _input_host_stencil_1 = (int16_t) (input_host_stencil.extract<0, 15>());

  return _input_host_stencil_1;
}

//store is: input_pond.stencil(input_pond_s0_z, (((output_cgra_s0_x_x_cgra*4) + input_pond_s0_x) - (output_cgra_s0_x_x_cgra*4)), 0) = input_cgra.stencil(input_pond_s0_z, ((output_cgra_s0_x_x_cgra*4) + input_pond_s0_x), output_cgra_s0_y)
hw_uint<16> hcompute_input_pond_stencil(hw_uint<16>& input_cgra_stencil) {
  int16_t _input_cgra_stencil_1 = (int16_t) (input_cgra_stencil.extract<0, 15>());

  return _input_cgra_stencil_1;
}

//store is: output_pond.stencil((((output_cgra_s0_k_k_cgra*4) + output_pond_s0_k) - (output_cgra_s0_k_k_cgra*4)), (((output_cgra_s0_x_x_cgra*4) + output_pond_s0_x) - (output_cgra_s0_x_x_cgra*4)), 0) = (int16)0
hw_uint<16> hcompute_output_pond_stencil() {
  int16_t _393 = (int16_t)(0);
  return _393;
}

//store is: output_pond.stencil((((output_cgra_s0_k_k_cgra*4) + output_pond_s1_k) - (output_cgra_s0_k_k_cgra*4)), (((output_cgra_s0_x_x_cgra*4) + output_pond_s1_x) - (output_cgra_s0_x_x_cgra*4)), 0) = (input_pond.stencil(output_pond_s1_r_z, (((output_cgra_s0_x_x_cgra*4) + output_pond_s1_x) - (output_cgra_s0_x_x_cgra*4)), 0) + output_pond.stencil((((output_cgra_s0_k_k_cgra*4) + output_pond_s1_k) - (output_cgra_s0_k_k_cgra*4)), (((output_cgra_s0_x_x_cgra*4) + output_pond_s1_x) - (output_cgra_s0_x_x_cgra*4)), 0))
hw_uint<16> hcompute_output_pond_stencil_1(hw_uint<16>& input_pond_stencil, hw_uint<16>& output_pond_stencil) {
  int16_t _input_pond_stencil_1 = (int16_t) (input_pond_stencil.extract<0, 15>());

  int16_t _output_pond_stencil_1 = (int16_t) (output_pond_stencil.extract<0, 15>());

  int16_t _404 = _input_pond_stencil_1 + _output_pond_stencil_1;
  return _404;
}

//store is: output_cgra.stencil(((output_cgra_s0_k_k_cgra*4) + output_cgra_s0_k_k_pond), ((output_cgra_s0_x_x_cgra*4) + output_cgra_s0_x_x_pond), output_cgra_s0_y) = output_pond.stencil(output_cgra_s0_k_k_pond, output_cgra_s0_x_x_pond, 0)
hw_uint<16> hcompute_output_cgra_stencil(hw_uint<16>& output_pond_stencil) {
  int16_t _output_pond_stencil_2 = (int16_t) (output_pond_stencil.extract<0, 15>());

  return _output_pond_stencil_2;
}

//store is: hw_output.stencil(hw_output_s0_k, hw_output_s0_x_xi, hw_output_s0_y_yi) = output_cgra.stencil(hw_output_s0_k, hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& output_cgra_stencil) {
  int16_t _output_cgra_stencil_1 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  return _output_cgra_stencil_1;
}

