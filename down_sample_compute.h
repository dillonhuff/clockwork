#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_1;
}

//store is: maximum.stencil(max_pool_s0_x, max_pool_s0_y) = (uint16)0
hw_uint<16> hcompute_maximum_stencil() {
  uint16_t _257 = (uint16_t)(0);
  return _257;
}

//store is: maximum.stencil(max_pool_s0_x, max_pool_s0_y) = max(maximum.stencil(max_pool_s0_x, max_pool_s0_y), hw_input_global_wrapper.stencil(((max_pool_s0_x*2) + maximum_s1_r_x), ((max_pool_s0_y*2) + maximum_s1_r_y)))
hw_uint<16> hcompute_maximum_stencil_1(hw_uint<16>& hw_input_global_wrapper_stencil, hw_uint<16>& maximum_stencil) {
  uint16_t _hw_input_global_wrapper_stencil_1 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();

  uint16_t _maximum_stencil_1 = (uint16_t) maximum_stencil.extract<0, 15>();

  uint16_t _260 = max(_maximum_stencil_1, _hw_input_global_wrapper_stencil_1);
  return _260;
}

//store is: max_pool.stencil(max_pool_s0_x, max_pool_s0_y) = maximum.stencil(max_pool_s0_x, max_pool_s0_y)
hw_uint<16> hcompute_max_pool_stencil(hw_uint<16>& maximum_stencil) {
  uint16_t _maximum_stencil_2 = (uint16_t) maximum_stencil.extract<0, 15>();

  return _maximum_stencil_2;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = max_pool.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& max_pool_stencil) {
  uint16_t _max_pool_stencil_1 = (uint16_t) max_pool_stencil.extract<0, 15>();

  return _max_pool_stencil_1;
}

