#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: input_glb.stencil(input_glb_s0_z_z, input_glb_s0_x, input_glb_s0_y) = input_host.stencil(input_glb_s0_z_z, input_glb_s0_x, input_glb_s0_y)
hw_uint<16> hcompute_input_glb_stencil(hw_uint<16>& input_host_stencil) {
  int16_t _input_host_stencil_1 = (int16_t) (input_host_stencil.extract<0, 15>());

  return _input_host_stencil_1;
}

//store is: input_cgra.stencil(0, (((output_glb_s0_x_x_glb*14) + input_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + input_cgra_s0_y) - (output_glb_s0_y_y_glb*14))) = input_glb.stencil(output_glb_s0_w_w_glb, ((output_glb_s0_x_x_glb*14) + input_cgra_s0_x), ((output_glb_s0_y_y_glb*14) + input_cgra_s0_y))
hw_uint<16> hcompute_input_cgra_stencil(hw_uint<16>& input_glb_stencil) {
  int16_t _input_glb_stencil_1 = (int16_t) (input_glb_stencil.extract<0, 15>());

  return _input_glb_stencil_1;
}

//store is: maximum_func.stencil(0, (((output_glb_s0_x_x_glb*14) + maximum_func_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + maximum_func_s0_y) - (output_glb_s0_y_y_glb*14))) = (int16)-32768
hw_uint<16> hcompute_maximum_func_stencil() {
  int16_t _406 = (int16_t)(-32768);
  return _406;
}

//store is: maximum_func.stencil(0, (((output_glb_s0_x_x_glb*14) + maximum_func_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + maximum_func_s1_y) - (output_glb_s0_y_y_glb*14))) = max(input_cgra.stencil(0, ((((output_glb_s0_x_x_glb*14) + maximum_func_s1_x) - (output_glb_s0_x_x_glb*14)) + 2), ((((output_glb_s0_y_y_glb*14) + maximum_func_s1_y) - (output_glb_s0_y_y_glb*14)) + 2)), max(input_cgra.stencil(0, ((((output_glb_s0_x_x_glb*14) + maximum_func_s1_x) - (output_glb_s0_x_x_glb*14)) + 1), ((((output_glb_s0_y_y_glb*14) + maximum_func_s1_y) - (output_glb_s0_y_y_glb*14)) + 2)), max(input_cgra.stencil(0, (((output_glb_s0_x_x_glb*14) + maximum_func_s1_x) - (output_glb_s0_x_x_glb*14)), ((((output_glb_s0_y_y_glb*14) + maximum_func_s1_y) - (output_glb_s0_y_y_glb*14)) + 2)), max(input_cgra.stencil(0, ((((output_glb_s0_x_x_glb*14) + maximum_func_s1_x) - (output_glb_s0_x_x_glb*14)) + 2), ((((output_glb_s0_y_y_glb*14) + maximum_func_s1_y) - (output_glb_s0_y_y_glb*14)) + 1)), max(input_cgra.stencil(0, ((((output_glb_s0_x_x_glb*14) + maximum_func_s1_x) - (output_glb_s0_x_x_glb*14)) + 1), ((((output_glb_s0_y_y_glb*14) + maximum_func_s1_y) - (output_glb_s0_y_y_glb*14)) + 1)), max(input_cgra.stencil(0, (((output_glb_s0_x_x_glb*14) + maximum_func_s1_x) - (output_glb_s0_x_x_glb*14)), ((((output_glb_s0_y_y_glb*14) + maximum_func_s1_y) - (output_glb_s0_y_y_glb*14)) + 1)), max(input_cgra.stencil(0, ((((output_glb_s0_x_x_glb*14) + maximum_func_s1_x) - (output_glb_s0_x_x_glb*14)) + 2), (((output_glb_s0_y_y_glb*14) + maximum_func_s1_y) - (output_glb_s0_y_y_glb*14))), max(input_cgra.stencil(0, ((((output_glb_s0_x_x_glb*14) + maximum_func_s1_x) - (output_glb_s0_x_x_glb*14)) + 1), (((output_glb_s0_y_y_glb*14) + maximum_func_s1_y) - (output_glb_s0_y_y_glb*14))), max(maximum_func.stencil(0, (((output_glb_s0_x_x_glb*14) + maximum_func_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + maximum_func_s1_y) - (output_glb_s0_y_y_glb*14))), input_cgra.stencil(0, (((output_glb_s0_x_x_glb*14) + maximum_func_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + maximum_func_s1_y) - (output_glb_s0_y_y_glb*14))))))))))))
hw_uint<16> hcompute_maximum_func_stencil_1(hw_uint<144>& input_cgra_stencil, hw_uint<16>& maximum_func_stencil) {
  int16_t _input_cgra_stencil_1 = (int16_t) (input_cgra_stencil.extract<0, 15>());
  int16_t _input_cgra_stencil_2 = (int16_t) (input_cgra_stencil.extract<16, 31>());
  int16_t _input_cgra_stencil_3 = (int16_t) (input_cgra_stencil.extract<32, 47>());
  int16_t _input_cgra_stencil_4 = (int16_t) (input_cgra_stencil.extract<48, 63>());
  int16_t _input_cgra_stencil_5 = (int16_t) (input_cgra_stencil.extract<64, 79>());
  int16_t _input_cgra_stencil_6 = (int16_t) (input_cgra_stencil.extract<80, 95>());
  int16_t _input_cgra_stencil_7 = (int16_t) (input_cgra_stencil.extract<96, 111>());
  int16_t _input_cgra_stencil_8 = (int16_t) (input_cgra_stencil.extract<112, 127>());
  int16_t _input_cgra_stencil_9 = (int16_t) (input_cgra_stencil.extract<128, 143>());

  int16_t _maximum_func_stencil_1 = (int16_t) (maximum_func_stencil.extract<0, 15>());

  int16_t _417 = max(_maximum_func_stencil_1, _input_cgra_stencil_9);
  int16_t _418 = max(_input_cgra_stencil_8, _417);
  int16_t _419 = max(_input_cgra_stencil_7, _418);
  int16_t _420 = max(_input_cgra_stencil_6, _419);
  int16_t _421 = max(_input_cgra_stencil_5, _420);
  int16_t _422 = max(_input_cgra_stencil_4, _421);
  int16_t _423 = max(_input_cgra_stencil_3, _422);
  int16_t _424 = max(_input_cgra_stencil_2, _423);
  int16_t _425 = max(_input_cgra_stencil_1, _424);
  return _425;
}

//store is: output_cgra.stencil(0, (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*14))) = maximum_func.stencil(0, (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*14)))
hw_uint<16> hcompute_output_cgra_stencil(hw_uint<16>& maximum_func_stencil) {
  int16_t _maximum_func_stencil_2 = (int16_t) (maximum_func_stencil.extract<0, 15>());

  return _maximum_func_stencil_2;
}

//store is: output_glb.stencil(output_glb_s0_w_w_glb, ((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra), ((output_glb_s0_y_y_glb*14) + output_glb_s0_y_y_cgra)) = output_cgra.stencil(0, output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
hw_uint<16> hcompute_output_glb_stencil(hw_uint<16>& output_cgra_stencil) {
  int16_t _output_cgra_stencil_1 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  return _output_cgra_stencil_1;
}

//store is: hw_output.stencil(hw_output_s0_w_w, hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil(hw_output_s0_w_w, hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& output_glb_stencil) {
  int16_t _output_glb_stencil_1 = (int16_t) (output_glb_stencil.extract<0, 15>());

  return _output_glb_stencil_1;
}

