#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: input_cgra.stencil(input_cgra_s0_x, input_cgra_s0_y) = input_host.stencil(input_cgra_s0_x, input_cgra_s0_y)
hw_uint<16> hcompute_input_cgra_stencil(hw_uint<16>& input_host_stencil) {
  uint16_t _input_host_stencil_1 = (uint16_t) input_host_stencil.extract<0, 15>();

  return _input_host_stencil_1;
}

//store is: hw_input.stencil((((output_cgra_s0_x_x_cgra*8) + hw_input_s0_x) - (output_cgra_s0_x_x_cgra*8)), (((output_cgra_s0_y_y_cgra*8) + hw_input_s0_y) - (output_cgra_s0_y_y_cgra*8))) = input_cgra.stencil(((output_cgra_s0_x_x_cgra*8) + hw_input_s0_x), ((output_cgra_s0_y_y_cgra*8) + hw_input_s0_y))
hw_uint<16> hcompute_hw_input_stencil(hw_uint<16>& input_cgra_stencil) {
  uint16_t _input_cgra_stencil_1 = (uint16_t) input_cgra_stencil.extract<0, 15>();

  return _input_cgra_stencil_1;
}

//store is: conv.stencil((((output_cgra_s0_x_x_cgra*8) + conv_s0_x) - (output_cgra_s0_x_x_cgra*8)), (((output_cgra_s0_y_y_cgra*8) + conv_s0_y) - (output_cgra_s0_y_y_cgra*8))) = (uint16)0
hw_uint<16> hcompute_conv_stencil() {
  uint16_t _268 = (uint16_t)(0);
  return _268;
}

//store is: conv.stencil((((output_cgra_s0_x_x_cgra*8) + conv_s1_x) - (output_cgra_s0_x_x_cgra*8)), (((output_cgra_s0_y_y_cgra*8) + conv_s1_y) - (output_cgra_s0_y_y_cgra*8))) = (conv.stencil((((output_cgra_s0_x_x_cgra*8) + conv_s1_x) - (output_cgra_s0_x_x_cgra*8)), (((output_cgra_s0_y_y_cgra*8) + conv_s1_y) - (output_cgra_s0_y_y_cgra*8))) + hw_input.stencil(((conv_s1_r_x + ((output_cgra_s0_x_x_cgra*8) + conv_s1_x)) - (output_cgra_s0_x_x_cgra*8)), ((conv_s1_r_y + ((output_cgra_s0_y_y_cgra*8) + conv_s1_y)) - (output_cgra_s0_y_y_cgra*8))))
hw_uint<16> hcompute_conv_stencil_1(hw_uint<16>& conv_stencil, hw_uint<16>& hw_input_stencil) {
  uint16_t _conv_stencil_1 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();

  uint16_t _279 = _conv_stencil_1 + _hw_input_stencil_1;
  return _279;
}

//store is: output_cgra.stencil(((output_cgra_s0_x_x_cgra*8) + output_cgra_s0_x_x_pond), ((output_cgra_s0_y_y_cgra*8) + output_cgra_s0_y_y_pond)) = conv.stencil(output_cgra_s0_x_x_pond, output_cgra_s0_y_y_pond)
hw_uint<16> hcompute_output_cgra_stencil(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_2 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_2;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = output_cgra.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& output_cgra_stencil) {
  uint16_t _output_cgra_stencil_1 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  return _output_cgra_stencil_1;
}

