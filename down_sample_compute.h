#pragma once
#include "hw_classes.h"
#include "conv_3x3.h"


//store is: hw_input.stencil(hw_input_s0_x, hw_input_s0_y, hw_input_s0_z) = input_copy.stencil(hw_input_s0_x, hw_input_s0_y, hw_input_s0_z)
hw_uint<16> hcompute_hw_input_stencil(hw_uint<16>& input_copy_stencil) {
  uint16_t _input_copy_stencil_1 = (uint16_t) input_copy_stencil.extract<0, 15>();

  return _input_copy_stencil_1;
}

//store is: avg_pool.stencil(avg_pool_s0_x, avg_pool_s0_y, avg_pool_s0_z) = (uint16)0
hw_uint<16> hcompute_avg_pool_stencil() {
  uint16_t _387 = (uint16_t)(0);
  return _387;
}

//store is: avg_pool.stencil(avg_pool_s1_x, avg_pool_s1_y, avg_pool_s1_z) = (hw_input.stencil((avg_pool_s1_x*2), (avg_pool_s1_y*2), avg_pool_s1_z) + (avg_pool.stencil(avg_pool_s1_x, avg_pool_s1_y, avg_pool_s1_z) + (hw_input.stencil(((avg_pool_s1_x*2) + 1), (avg_pool_s1_y*2), avg_pool_s1_z) + (hw_input.stencil(((avg_pool_s1_x*2) + 1), ((avg_pool_s1_y*2) + 1), avg_pool_s1_z) + hw_input.stencil((avg_pool_s1_x*2), ((avg_pool_s1_y*2) + 1), avg_pool_s1_z)))))
hw_uint<16> hcompute_avg_pool_stencil_1(hw_uint<16>& avg_pool_stencil, hw_uint<64>& hw_input_stencil) {
  uint16_t _avg_pool_stencil_1 = (uint16_t) avg_pool_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();
  uint16_t _hw_input_stencil_2 = (uint16_t) hw_input_stencil.extract<16, 31>();
  uint16_t _hw_input_stencil_3 = (uint16_t) hw_input_stencil.extract<32, 47>();
  uint16_t _hw_input_stencil_4 = (uint16_t) hw_input_stencil.extract<48, 63>();

  uint16_t _390 = _hw_input_stencil_3 + _hw_input_stencil_4;
  uint16_t _391 = _hw_input_stencil_2 + _390;
  uint16_t _392 = _avg_pool_stencil_1 + _391;
  uint16_t _393 = _hw_input_stencil_1 + _392;
  return _393;
}

//store is: hw_output.stencil(hw_output_s0_x_yi, hw_output_s0_y_xo, hw_output_s0_z) = uint8((avg_pool.stencil(hw_output_s0_x_yi, hw_output_s0_y_xo, hw_output_s0_z)/(uint16)4))
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& avg_pool_stencil) {
  uint16_t _avg_pool_stencil_2 = (uint16_t) avg_pool_stencil.extract<0, 15>();

  uint16_t _411 = (uint16_t)(2);
  uint16_t _412 = _avg_pool_stencil_2 >> _411;
  uint16_t _413 = (uint16_t)(_412);
  return _413;
}

