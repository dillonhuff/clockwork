#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: input_gb.stencil(input_gb_s0_c, input_gb_s0_x, input_gb_s0_y) = input_host.stencil(input_gb_s0_c, input_gb_s0_x, input_gb_s0_y)
hw_uint<16> hcompute_input_gb_stencil(hw_uint<16>& input_host_stencil) {
  uint16_t _input_host_stencil_1 = (uint16_t) input_host_stencil.extract<0, 15>();

  return _input_host_stencil_1;
}

//store is: hw_input.stencil(hw_input_s0_c, (((output_gb_s0_x_x_gb*62) + hw_input_s0_x) - (output_gb_s0_x_x_gb*62)), (((output_gb_s0_y_y_gb*62) + hw_input_s0_y) - (output_gb_s0_y_y_gb*62))) = input_gb.stencil(hw_input_s0_c, ((output_gb_s0_x_x_gb*62) + hw_input_s0_x), ((output_gb_s0_y_y_gb*62) + hw_input_s0_y))
hw_uint<16> hcompute_hw_input_stencil(hw_uint<16>& input_glb_stencil) {
  uint16_t _input_gb_stencil_1 = (uint16_t) input_glb_stencil.extract<0, 15>();

  return _input_gb_stencil_1;
}

//store is: conv.stencil((((output_gb_s0_x_x_gb*62) + conv_s0_x) - (output_gb_s0_x_x_gb*62)), (((output_gb_s0_y_y_gb*62) + conv_s0_y) - (output_gb_s0_y_y_gb*62))) = (uint16)0
hw_uint<16> hcompute_conv_stencil() {
  uint16_t _337 = (uint16_t)(0);
  return _337;
}

//store is: conv.stencil((((output_gb_s0_x_x_gb*62) + conv_s1_x) - (output_gb_s0_x_x_gb*62)), (((output_gb_s0_y_y_gb*62) + conv_s1_y) - (output_gb_s0_y_y_gb*62))) = (hw_input.stencil(0, (((output_gb_s0_x_x_gb*62) + conv_s1_x) - (output_gb_s0_x_x_gb*62)), (((output_gb_s0_y_y_gb*62) + conv_s1_y) - (output_gb_s0_y_y_gb*62))) + (conv.stencil((((output_gb_s0_x_x_gb*62) + conv_s1_x) - (output_gb_s0_x_x_gb*62)), (((output_gb_s0_y_y_gb*62) + conv_s1_y) - (output_gb_s0_y_y_gb*62))) + (hw_input.stencil(1, (((output_gb_s0_x_x_gb*62) + conv_s1_x) - (output_gb_s0_x_x_gb*62)), (((output_gb_s0_y_y_gb*62) + conv_s1_y) - (output_gb_s0_y_y_gb*62))) + (hw_input.stencil(2, (((output_gb_s0_x_x_gb*62) + conv_s1_x) - (output_gb_s0_x_x_gb*62)), (((output_gb_s0_y_y_gb*62) + conv_s1_y) - (output_gb_s0_y_y_gb*62))) + (hw_input.stencil(3, (((output_gb_s0_x_x_gb*62) + conv_s1_x) - (output_gb_s0_x_x_gb*62)), (((output_gb_s0_y_y_gb*62) + conv_s1_y) - (output_gb_s0_y_y_gb*62))) + (hw_input.stencil(4, (((output_gb_s0_x_x_gb*62) + conv_s1_x) - (output_gb_s0_x_x_gb*62)), (((output_gb_s0_y_y_gb*62) + conv_s1_y) - (output_gb_s0_y_y_gb*62))) + (hw_input.stencil(5, (((output_gb_s0_x_x_gb*62) + conv_s1_x) - (output_gb_s0_x_x_gb*62)), (((output_gb_s0_y_y_gb*62) + conv_s1_y) - (output_gb_s0_y_y_gb*62))) + (hw_input.stencil(7, (((output_gb_s0_x_x_gb*62) + conv_s1_x) - (output_gb_s0_x_x_gb*62)), (((output_gb_s0_y_y_gb*62) + conv_s1_y) - (output_gb_s0_y_y_gb*62))) + hw_input.stencil(6, (((output_gb_s0_x_x_gb*62) + conv_s1_x) - (output_gb_s0_x_x_gb*62)), (((output_gb_s0_y_y_gb*62) + conv_s1_y) - (output_gb_s0_y_y_gb*62)))))))))))
hw_uint<16> hcompute_conv_stencil_1(hw_uint<16>& conv_stencil, hw_uint<128>& hw_input_stencil) {
  uint16_t _conv_stencil_1 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();
  uint16_t _hw_input_stencil_2 = (uint16_t) hw_input_stencil.extract<16, 31>();
  uint16_t _hw_input_stencil_3 = (uint16_t) hw_input_stencil.extract<32, 47>();
  uint16_t _hw_input_stencil_4 = (uint16_t) hw_input_stencil.extract<48, 63>();
  uint16_t _hw_input_stencil_5 = (uint16_t) hw_input_stencil.extract<64, 79>();
  uint16_t _hw_input_stencil_6 = (uint16_t) hw_input_stencil.extract<80, 95>();
  uint16_t _hw_input_stencil_7 = (uint16_t) hw_input_stencil.extract<96, 111>();
  uint16_t _hw_input_stencil_8 = (uint16_t) hw_input_stencil.extract<112, 127>();

  uint16_t _348 = _hw_input_stencil_7 + _hw_input_stencil_8;
  uint16_t _349 = _hw_input_stencil_6 + _348;
  uint16_t _350 = _hw_input_stencil_5 + _349;
  uint16_t _351 = _hw_input_stencil_4 + _350;
  uint16_t _352 = _hw_input_stencil_3 + _351;
  uint16_t _353 = _hw_input_stencil_2 + _352;
  uint16_t _354 = _conv_stencil_1 + _353;
  uint16_t _355 = _hw_input_stencil_1 + _354;
  return _355;
}

//store is: output_gb.stencil(((output_gb_s0_x_x_gb*62) + output_gb_s0_x_x_cgra), ((output_gb_s0_y_y_gb*62) + output_gb_s0_y_y_cgra)) = conv.stencil(output_gb_s0_x_x_cgra, output_gb_s0_y_y_cgra)
hw_uint<16> hcompute_output_gb_stencil(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_2 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_2;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = output_gb.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& output_glb_stencil) {
  uint16_t _output_gb_stencil_1 = (uint16_t) output_glb_stencil.extract<0, 15>();

  return _output_gb_stencil_1;
}

