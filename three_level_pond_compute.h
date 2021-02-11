#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: input_cgra.stencil(input_cgra_s0_x, input_cgra_s0_y) = input_host.stencil(input_cgra_s0_x, input_cgra_s0_y)
hw_uint<16> hcompute_input_cgra_stencil(hw_uint<16>& input_host_stencil) {
  uint16_t _input_host_stencil_1 = (uint16_t) input_host_stencil.extract<0, 15>();

  return _input_host_stencil_1;
}

//store is: hw_input.stencil(hw_input_s0_x, hw_input_s0_y) = input_cgra.stencil(hw_input_s0_x, hw_input_s0_y)
hw_uint<16> hcompute_hw_input_stencil(hw_uint<16>& input_cgra_stencil) {
  uint16_t _input_cgra_stencil_1 = (uint16_t) input_cgra_stencil.extract<0, 15>();

  return _input_cgra_stencil_1;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y) = (uint16)0
hw_uint<16> hcompute_conv_stencil() {
  uint16_t _262 = (uint16_t)(0);
  return _262;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y) = (hw_input.stencil(conv_s1_x, conv_s1_y) + (conv.stencil(conv_s1_x, conv_s1_y) + (hw_input.stencil((conv_s1_x + 1), conv_s1_y) + (hw_input.stencil((conv_s1_x + 2), conv_s1_y) + (hw_input.stencil(conv_s1_x, (conv_s1_y + 1)) + (hw_input.stencil((conv_s1_x + 1), (conv_s1_y + 1)) + (hw_input.stencil((conv_s1_x + 2), (conv_s1_y + 1)) + (hw_input.stencil(conv_s1_x, (conv_s1_y + 2)) + (hw_input.stencil((conv_s1_x + 2), (conv_s1_y + 2)) + hw_input.stencil((conv_s1_x + 1), (conv_s1_y + 2)))))))))))
hw_uint<16> hcompute_conv_stencil_1(hw_uint<16>& conv_stencil, hw_uint<144>& hw_input_stencil) {
  uint16_t _conv_stencil_1 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();
  uint16_t _hw_input_stencil_2 = (uint16_t) hw_input_stencil.extract<16, 31>();
  uint16_t _hw_input_stencil_3 = (uint16_t) hw_input_stencil.extract<32, 47>();
  uint16_t _hw_input_stencil_4 = (uint16_t) hw_input_stencil.extract<48, 63>();
  uint16_t _hw_input_stencil_5 = (uint16_t) hw_input_stencil.extract<64, 79>();
  uint16_t _hw_input_stencil_6 = (uint16_t) hw_input_stencil.extract<80, 95>();
  uint16_t _hw_input_stencil_7 = (uint16_t) hw_input_stencil.extract<96, 111>();
  uint16_t _hw_input_stencil_8 = (uint16_t) hw_input_stencil.extract<112, 127>();
  uint16_t _hw_input_stencil_9 = (uint16_t) hw_input_stencil.extract<128, 143>();

  uint16_t _267 = _hw_input_stencil_8 + _hw_input_stencil_9;
  uint16_t _268 = _hw_input_stencil_7 + _267;
  uint16_t _269 = _hw_input_stencil_6 + _268;
  uint16_t _270 = _hw_input_stencil_5 + _269;
  uint16_t _271 = _hw_input_stencil_4 + _270;
  uint16_t _272 = _hw_input_stencil_3 + _271;
  uint16_t _273 = _hw_input_stencil_2 + _272;
  uint16_t _274 = _conv_stencil_1 + _273;
  uint16_t _275 = _hw_input_stencil_1 + _274;
  return _275;
}

//store is: output_cgra.stencil((output_cgra_s0_x_x_pond + (output_cgra_s0_x_x_cgra*8)), (output_cgra_s0_y_y_pond + (output_cgra_s0_y_y_cgra*8))) = conv.stencil((output_cgra_s0_x_x_pond + (output_cgra_s0_x_x_cgra*8)), (output_cgra_s0_y_y_pond + (output_cgra_s0_y_y_cgra*8)))
hw_uint<16> hcompute_output_cgra_stencil(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_2 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_2;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = output_cgra.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& output_cgra_stencil) {
  uint16_t _output_cgra_stencil_1 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  return _output_cgra_stencil_1;
}

