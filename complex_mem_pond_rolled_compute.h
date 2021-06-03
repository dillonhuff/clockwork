#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: input_cgra.stencil(input_cgra_s0_zz, input_cgra_s0_z, input_cgra_s0_x, input_cgra_s0_y) = input_host.stencil(((input_cgra_s0_z*4) + input_cgra_s0_zz), input_cgra_s0_x, input_cgra_s0_y)
hw_uint<16> hcompute_input_cgra_stencil(hw_uint<16>& input_host_stencil) {
  uint16_t _input_host_stencil_1 = (uint16_t) input_host_stencil.extract<0, 15>();

  return _input_host_stencil_1;
}

//store is: kernel_cgra.stencil(kernel_cgra_s0_z, (kernel_cgra_s0_w + 2), kernel_cgra_s0_x, kernel_cgra_s0_y) = kernel_host.stencil(kernel_cgra_s0_z, kernel_cgra_s0_w, kernel_cgra_s0_x, kernel_cgra_s0_y)
hw_uint<16> hcompute_kernel_cgra_stencil(hw_uint<16>& kernel_host_stencil) {
  uint16_t _kernel_host_stencil_1 = (uint16_t) kernel_host_stencil.extract<0, 15>();

  return _kernel_host_stencil_1;
}

//store is: output_pond.stencil(0, 0, output_pond_s0_w_w_unroll) = (uint16)0
hw_uint<16> hcompute_output_pond_stencil() {
  uint16_t _676 = (uint16_t)(0);
  return _676;
}

//store is: input_pond.stencil(input_pond_s0_zz, input_pond_s0_z, ((input_pond_s0_x + output_cgra_s0_x) - output_cgra_s0_x), ((input_pond_s0_y + output_cgra_s0_y) - output_cgra_s0_y)) = input_cgra.stencil(input_pond_s0_zz, input_pond_s0_z, (input_pond_s0_x + output_cgra_s0_x), (input_pond_s0_y + output_cgra_s0_y))
hw_uint<16> hcompute_input_pond_stencil(hw_uint<16>& input_cgra_stencil) {
  uint16_t _input_cgra_stencil_1 = (uint16_t) input_cgra_stencil.extract<0, 15>();

  return _input_cgra_stencil_1;
}

//store is: kernel_pond.stencil(kernel_pond_s0_zz, kernel_pond_s0_z, kernel_pond_s0_w_w_cgra, kernel_pond_s0_x, kernel_pond_s0_y) = kernel_cgra.stencil(((kernel_pond_s0_z*4) + kernel_pond_s0_zz), (kernel_pond_s0_w_w_cgra + output_cgra_s0_w), kernel_pond_s0_x, kernel_pond_s0_y)
hw_uint<16> hcompute_kernel_pond_stencil(hw_uint<16>& kernel_cgra_stencil) {
  uint16_t _kernel_cgra_stencil_1 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();

  return _kernel_cgra_stencil_1;
}

//store is: output_pond.stencil(0, 0, (output_pond_s1_w_w_unroll + 2)) = (output_pond.stencil(0, 0, (output_pond_s1_w_w_unroll + 2)) + (kernel_pond.stencil(output_pond_s1_r_w, output_pond_s1_r_z, (output_pond_s1_w_w_unroll + 2), output_pond_s1_r_x, output_pond_s1_r_y)*input_pond.stencil(output_pond_s1_r_w, output_pond_s1_r_z, output_pond_s1_r_x, output_pond_s1_r_y)))
hw_uint<16> hcompute_output_pond_stencil_1(hw_uint<16>& input_pond_stencil, hw_uint<16>& kernel_pond_stencil, hw_uint<16>& output_pond_stencil) {
  uint16_t _input_pond_stencil_1 = (uint16_t) input_pond_stencil.extract<0, 15>();

  uint16_t _kernel_pond_stencil_1 = (uint16_t) kernel_pond_stencil.extract<0, 15>();

  uint16_t _output_pond_stencil_1 = (uint16_t) output_pond_stencil.extract<0, 15>();

  uint16_t _688 = _kernel_pond_stencil_1 * _input_pond_stencil_1;
  uint16_t _689 = _output_pond_stencil_1 + _688;
  return _689;
}

//store is: output_cgra.stencil(output_cgra_s0_x, output_cgra_s0_y, output_cgra_s0_w) = output_pond.stencil(0, 0, 2)
hw_uint<16> hcompute_output_cgra_stencil(hw_uint<16>& output_pond_stencil) {
  uint16_t _output_pond_stencil_2 = (uint16_t) output_pond_stencil.extract<0, 15>();

  return _output_pond_stencil_2;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w) = output_cgra.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& output_cgra_stencil) {
  uint16_t _output_cgra_stencil_1 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  return _output_cgra_stencil_1;
}

