#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: input_cgra.stencil(0, input_cgra_s0_x, input_cgra_s0_y) = input_host.stencil(0, input_cgra_s0_x, input_cgra_s0_y)
hw_uint<16> hcompute_input_cgra_stencil(hw_uint<16>& input_host_stencil) {
  int16_t _input_host_stencil_1 = (int16_t) input_host_stencil.extract<0, 15>();

  return _input_host_stencil_1;
}

//store is: kernel_cgra.stencil(0, 0, kernel_cgra_s0_x, kernel_cgra_s0_y) = kernel_host.stencil(0, 0, kernel_cgra_s0_x, kernel_cgra_s0_y)
hw_uint<16> hcompute_kernel_cgra_stencil(hw_uint<16>& kernel_host_stencil) {
  int16_t _kernel_host_stencil_1 = (int16_t) kernel_host_stencil.extract<0, 15>();

  return _kernel_host_stencil_1;
}

//store is: output_cgra.stencil(0, output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil() {
  int16_t _664 = (int16_t)(0);
  return _664;
}

//store is: input_pond.stencil(0, ((input_pond_s0_x + output_cgra_s1_x) - output_cgra_s1_x), ((input_pond_s0_y + output_cgra_s1_y) - output_cgra_s1_y)) = input_cgra.stencil(0, (input_pond_s0_x + output_cgra_s1_x), (input_pond_s0_y + output_cgra_s1_y))
hw_uint<16> hcompute_input_pond_stencil(hw_uint<16>& input_cgra_stencil) {
  int16_t _input_cgra_stencil_1 = (int16_t) input_cgra_stencil.extract<0, 15>();

  return _input_cgra_stencil_1;
}

//store is: kernel_pond.stencil(0, 0, kernel_pond_s0_x, kernel_pond_s0_y) = kernel_cgra.stencil(0, 0, kernel_pond_s0_x, kernel_pond_s0_y)
hw_uint<16> hcompute_kernel_pond_stencil(hw_uint<16>& kernel_cgra_stencil) {
  int16_t _kernel_cgra_stencil_1 = (int16_t) kernel_cgra_stencil.extract<0, 15>();

  return _kernel_cgra_stencil_1;
}

//store is: output_cgra.stencil(0, output_cgra_s1_x, output_cgra_s1_y) = (output_cgra.stencil(0, output_cgra_s1_x, output_cgra_s1_y) + (kernel_pond.stencil(0, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_pond.stencil(0, output_cgra_s1_r_x, output_cgra_s1_r_y)))
hw_uint<16> hcompute_output_cgra_stencil_1(hw_uint<16>& input_pond_stencil, hw_uint<16>& kernel_pond_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_pond_stencil_1 = (int16_t) input_pond_stencil.extract<0, 15>();

  int16_t _kernel_pond_stencil_1 = (int16_t) kernel_pond_stencil.extract<0, 15>();

  int16_t _output_cgra_stencil_1 = (int16_t) output_cgra_stencil.extract<0, 15>();

  int16_t _673 = _kernel_pond_stencil_1 * _input_pond_stencil_1;
  int16_t _674 = _output_cgra_stencil_1 + _673;
  return _674;
}

//store is: hw_output.stencil(0, hw_output_s0_x_xi, hw_output_s0_y_yi) = output_cgra.stencil(0, hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& output_cgra_stencil) {
  int16_t _output_cgra_stencil_2 = (int16_t) output_cgra_stencil.extract<0, 15>();

  return _output_cgra_stencil_2;
}

