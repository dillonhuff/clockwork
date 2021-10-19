#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: input_gb.stencil(input_gb_s0_x, input_gb_s0_y) = input_host.stencil(input_gb_s0_x, input_gb_s0_y)
hw_uint<16> hcompute_input_gb_stencil(hw_uint<16>& input_host_stencil) {
  uint16_t _input_host_stencil_1 = (uint16_t) input_host_stencil.extract<0, 15>();

  return _input_host_stencil_1;
}

//store is: hw_input.stencil((((output_gb_s0_x_x_gb*62) + hw_input_s0_x) - (output_gb_s0_x_x_gb*62)), (((output_gb_s0_y_y_gb*62) + hw_input_s0_y) - (output_gb_s0_y_y_gb*62))) = input_gb.stencil(((output_gb_s0_x_x_gb*62) + hw_input_s0_x), ((output_gb_s0_y_y_gb*62) + hw_input_s0_y))
hw_uint<16> hcompute_hw_input_stencil(hw_uint<16>& input_glb_stencil) {
  uint16_t _input_gb_stencil_1 = (uint16_t) input_glb_stencil.extract<0, 15>();

  return _input_gb_stencil_1;
}

//store is: conv.stencil((((output_gb_s0_x_x_gb*62) + conv_s0_x) - (output_gb_s0_x_x_gb*62)), (((output_gb_s0_y_y_gb*62) + conv_s0_y) - (output_gb_s0_y_y_gb*62))) = (uint16)0
hw_uint<16> hcompute_conv_stencil() {
  uint16_t _268 = (uint16_t)(0);
  return _268;
}

//store is: conv.stencil((((output_gb_s0_x_x_gb*62) + conv_s1_x) - (output_gb_s0_x_x_gb*62)), (((output_gb_s0_y_y_gb*62) + conv_s1_y) - (output_gb_s0_y_y_gb*62))) = (hw_input.stencil((((output_gb_s0_x_x_gb*62) + conv_s1_x) - (output_gb_s0_x_x_gb*62)), (((output_gb_s0_y_y_gb*62) + conv_s1_y) - (output_gb_s0_y_y_gb*62))) + (conv.stencil((((output_gb_s0_x_x_gb*62) + conv_s1_x) - (output_gb_s0_x_x_gb*62)), (((output_gb_s0_y_y_gb*62) + conv_s1_y) - (output_gb_s0_y_y_gb*62))) + (hw_input.stencil(((((output_gb_s0_x_x_gb*62) + conv_s1_x) - (output_gb_s0_x_x_gb*62)) + 1), (((output_gb_s0_y_y_gb*62) + conv_s1_y) - (output_gb_s0_y_y_gb*62))) + (hw_input.stencil(((((output_gb_s0_x_x_gb*62) + conv_s1_x) - (output_gb_s0_x_x_gb*62)) + 2), (((output_gb_s0_y_y_gb*62) + conv_s1_y) - (output_gb_s0_y_y_gb*62))) + (hw_input.stencil((((output_gb_s0_x_x_gb*62) + conv_s1_x) - (output_gb_s0_x_x_gb*62)), ((((output_gb_s0_y_y_gb*62) + conv_s1_y) - (output_gb_s0_y_y_gb*62)) + 1)) + (hw_input.stencil(((((output_gb_s0_x_x_gb*62) + conv_s1_x) - (output_gb_s0_x_x_gb*62)) + 1), ((((output_gb_s0_y_y_gb*62) + conv_s1_y) - (output_gb_s0_y_y_gb*62)) + 1)) + (hw_input.stencil(((((output_gb_s0_x_x_gb*62) + conv_s1_x) - (output_gb_s0_x_x_gb*62)) + 2), ((((output_gb_s0_y_y_gb*62) + conv_s1_y) - (output_gb_s0_y_y_gb*62)) + 1)) + (hw_input.stencil((((output_gb_s0_x_x_gb*62) + conv_s1_x) - (output_gb_s0_x_x_gb*62)), ((((output_gb_s0_y_y_gb*62) + conv_s1_y) - (output_gb_s0_y_y_gb*62)) + 2)) + (hw_input.stencil(((((output_gb_s0_x_x_gb*62) + conv_s1_x) - (output_gb_s0_x_x_gb*62)) + 2), ((((output_gb_s0_y_y_gb*62) + conv_s1_y) - (output_gb_s0_y_y_gb*62)) + 2)) + hw_input.stencil(((((output_gb_s0_x_x_gb*62) + conv_s1_x) - (output_gb_s0_x_x_gb*62)) + 1), ((((output_gb_s0_y_y_gb*62) + conv_s1_y) - (output_gb_s0_y_y_gb*62)) + 2)))))))))))
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

  uint16_t _279 = _hw_input_stencil_8 + _hw_input_stencil_9;
  uint16_t _280 = _hw_input_stencil_7 + _279;
  uint16_t _281 = _hw_input_stencil_6 + _280;
  uint16_t _282 = _hw_input_stencil_5 + _281;
  uint16_t _283 = _hw_input_stencil_4 + _282;
  uint16_t _284 = _hw_input_stencil_3 + _283;
  uint16_t _285 = _hw_input_stencil_2 + _284;
  uint16_t _286 = _conv_stencil_1 + _285;
  uint16_t _287 = _hw_input_stencil_1 + _286;
  return _287;
}

//store is: output_gb.stencil(((output_gb_s0_x_x_gb*62) + output_gb_s0_x_x_cgra), ((output_gb_s0_y_y_gb*62) + output_gb_s0_y_y_cgra)) = conv.stencil(output_gb_s0_x_x_cgra, output_gb_s0_y_y_cgra)
hw_uint<16> hcompute_output_gb_stencil(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_2 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_2;
}

//store is: hw_output.stencil(hw_output_s0_x_x_host_1, hw_output_s0_y_y_host_1) = output_gb.stencil(hw_output_s0_x_x_host_1, hw_output_s0_y_y_host_1)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& output_glb_stencil) {
  uint16_t _output_gb_stencil_1 = (uint16_t) output_glb_stencil.extract<0, 15>();

  return _output_gb_stencil_1;
}

