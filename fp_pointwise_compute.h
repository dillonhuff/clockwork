#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil(hw_uint<16>& hw_input_stencil) {
  bfloat16_t _hw_input_stencil_1 = bfloat16_t::make_from_bits(hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_1;
}

//store is: product.stencil(product_s0_x, product_s0_y) = (hw_input_global_wrapper.stencil(product_s0_x, product_s0_y)*3.140625h)
hw_uint<16> hcompute_product_stencil(hw_uint<16>& hw_input_global_wrapper_stencil) {
  bfloat16_t _hw_input_global_wrapper_stencil_1 = bfloat16_t::make_from_bits(hw_input_global_wrapper_stencil.extract<0, 15>());

  bfloat16_t _272 = bfloat_from_bits(1078525952 /* 3.14062 */);
  bfloat16_t _273 = _hw_input_global_wrapper_stencil_1 * _272;
  return _273;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = product.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& product_stencil) {
  bfloat16_t _product_stencil_1 = bfloat16_t::make_from_bits(product_stencil.extract<0, 15>());

  return _product_stencil_1;
}

