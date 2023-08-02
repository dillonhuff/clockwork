#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: input_glb.stencil(input_glb_s0_z_z, input_glb_s0_x, input_glb_s0_y) = input_host.stencil(input_glb_s0_z_z, input_glb_s0_x, input_glb_s0_y)
hw_uint<16> hcompute_input_glb_stencil(hw_uint<16>& input_host_stencil) {
  int16_t _input_host_stencil_1 = (int16_t) (input_host_stencil.extract<0, 15>());

  return _input_host_stencil_1;
}

//store is: kernel_glb.stencil(kernel_glb_s0_w_w, kernel_glb_s0_z, kernel_glb_s0_x, kernel_glb_s0_y) = kernel_host.stencil(kernel_glb_s0_w_w, kernel_glb_s0_z, kernel_glb_s0_x, kernel_glb_s0_y)
hw_uint<16> hcompute_kernel_glb_stencil(hw_uint<16>& kernel_host_stencil) {
  int16_t _kernel_host_stencil_1 = (int16_t) (kernel_host_stencil.extract<0, 15>());

  return _kernel_host_stencil_1;
}

//store is: output_cgra.stencil(output_cgra_s0_w_w, output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil() {
  int16_t _684 = (int16_t)(0);
  return _684;
}

//store is: input_cgra.stencil(input_cgra_s0_z_z_cgra_z_cgra, input_cgra_s0_x, input_cgra_s0_y) = input_glb.stencil(input_cgra_s0_z_z_cgra_z_cgra, input_cgra_s0_x, input_cgra_s0_y)
hw_uint<16> hcompute_input_cgra_stencil(hw_uint<16>& input_glb_stencil) {
  int16_t _input_glb_stencil_1 = (int16_t) (input_glb_stencil.extract<0, 15>());

  return _input_glb_stencil_1;
}

//store is: kernel_cgra.stencil(kernel_cgra_s0_w_w_cgra_w_cgra, kernel_cgra_s0_z_z_cgra, 0, 0) = kernel_glb.stencil(kernel_cgra_s0_w_w_cgra_w_cgra, kernel_cgra_s0_z_z_cgra, output_cgra_s1_r_x, output_cgra_s1_r_y)
hw_uint<16> hcompute_kernel_cgra_stencil(hw_uint<16>& kernel_glb_stencil) {
  int16_t _kernel_glb_stencil_1 = (int16_t) (kernel_glb_stencil.extract<0, 15>());

  return _kernel_glb_stencil_1;
}

//store is: output_cgra.stencil(output_cgra_s1_w_w, output_cgra_s1_x, output_cgra_s1_y) = (output_cgra.stencil(output_cgra_s1_w_w, output_cgra_s1_x, output_cgra_s1_y) + (kernel_cgra.stencil(output_cgra_s1_w_w, output_cgra_s1_r_z_rz_cgra_rz_cgra, 0, 0)*input_cgra.stencil(output_cgra_s1_r_z_rz_cgra_rz_cgra, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))))
hw_uint<16> hcompute_output_cgra_stencil_1(hw_uint<16>& input_cgra_stencil, hw_uint<16>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_1 = (int16_t) (input_cgra_stencil.extract<0, 15>());

  int16_t _kernel_cgra_stencil_1 = (int16_t) (kernel_cgra_stencil.extract<0, 15>());

  int16_t _output_cgra_stencil_1 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _695 = _kernel_cgra_stencil_1 * _input_cgra_stencil_1;
  int16_t _696 = _output_cgra_stencil_1 + _695;
  return _696;
}

//store is: output_glb.stencil(output_glb_s0_w_w_cgra_w_cgra, output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra) = output_cgra.stencil(output_glb_s0_w_w_cgra_w_cgra, output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
hw_uint<16> hcompute_output_glb_stencil(hw_uint<16>& output_cgra_stencil) {
  int16_t _output_cgra_stencil_2 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  return _output_cgra_stencil_2;
}

//store is: hw_output.stencil(hw_output_s0_w_w, hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil(hw_output_s0_w_w, hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& output_glb_stencil) {
  int16_t _output_glb_stencil_1 = (int16_t) (output_glb_stencil.extract<0, 15>());

  return _output_glb_stencil_1;
}

