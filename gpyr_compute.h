#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_in_global_wrapper.stencil(hw_in_global_wrapper_s0_x, hw_in_global_wrapper_s0_y) = hw_in.stencil(hw_in_global_wrapper_s0_x, hw_in_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_in_global_wrapper_stencil(hw_uint<16>& hw_in_stencil) {
  uint16_t _hw_in_stencil_1 = (uint16_t) (hw_in_stencil.extract<0, 15>());

  return _hw_in_stencil_1;
}

//store is: blur0$1.stencil(blur0_1_s0_x, blur0_1_s0_y) = ((hw_in_global_wrapper.stencil(((blur0_1_s0_x*2) + 1), (blur0_1_s0_y*2)) + (hw_in_global_wrapper.stencil((blur0_1_s0_x*2), (blur0_1_s0_y*2)) + (hw_in_global_wrapper.stencil(((blur0_1_s0_x*2) + 1), ((blur0_1_s0_y*2) + 1)) + hw_in_global_wrapper.stencil((blur0_1_s0_x*2), ((blur0_1_s0_y*2) + 1)))))/(uint16)4)
hw_uint<16> hcompute_blur0_1_stencil(hw_uint<64>& hw_in_global_wrapper_stencil) {
  uint16_t _hw_in_global_wrapper_stencil_1 = (uint16_t) (hw_in_global_wrapper_stencil.extract<0, 15>());
  uint16_t _hw_in_global_wrapper_stencil_2 = (uint16_t) (hw_in_global_wrapper_stencil.extract<16, 31>());
  uint16_t _hw_in_global_wrapper_stencil_3 = (uint16_t) (hw_in_global_wrapper_stencil.extract<32, 47>());
  uint16_t _hw_in_global_wrapper_stencil_4 = (uint16_t) (hw_in_global_wrapper_stencil.extract<48, 63>());

  uint16_t _257 = _hw_in_global_wrapper_stencil_3 + _hw_in_global_wrapper_stencil_4;
  uint16_t _258 = _hw_in_global_wrapper_stencil_2 + _257;
  uint16_t _259 = _hw_in_global_wrapper_stencil_1 + _258;
  uint16_t _260 = (uint16_t)(2);
  uint16_t _261 = _259 >> _260;
  return _261;
}

//store is: blur1$1.stencil(blur1_1_s0_x, blur1_1_s0_y) = ((blur0$1.stencil(((blur1_1_s0_x*2) + 1), (blur1_1_s0_y*2)) + (blur0$1.stencil((blur1_1_s0_x*2), (blur1_1_s0_y*2)) + (blur0$1.stencil(((blur1_1_s0_x*2) + 1), ((blur1_1_s0_y*2) + 1)) + blur0$1.stencil((blur1_1_s0_x*2), ((blur1_1_s0_y*2) + 1)))))/(uint16)4)
hw_uint<16> hcompute_blur1_1_stencil(hw_uint<64>& blur0_1_stencil) {
  uint16_t _blur0_1_stencil_1 = (uint16_t) (blur0_1_stencil.extract<0, 15>());
  uint16_t _blur0_1_stencil_2 = (uint16_t) (blur0_1_stencil.extract<16, 31>());
  uint16_t _blur0_1_stencil_3 = (uint16_t) (blur0_1_stencil.extract<32, 47>());
  uint16_t _blur0_1_stencil_4 = (uint16_t) (blur0_1_stencil.extract<48, 63>());

  uint16_t _280 = _blur0_1_stencil_3 + _blur0_1_stencil_4;
  uint16_t _281 = _blur0_1_stencil_2 + _280;
  uint16_t _282 = _blur0_1_stencil_1 + _281;
  uint16_t _283 = (uint16_t)(2);
  uint16_t _284 = _282 >> _283;
  return _284;
}

//store is: blur2$1.stencil(blur2_1_s0_x, blur2_1_s0_y) = ((blur1$1.stencil(((blur2_1_s0_x*2) + 1), (blur2_1_s0_y*2)) + (blur1$1.stencil((blur2_1_s0_x*2), (blur2_1_s0_y*2)) + (blur1$1.stencil(((blur2_1_s0_x*2) + 1), ((blur2_1_s0_y*2) + 1)) + blur1$1.stencil((blur2_1_s0_x*2), ((blur2_1_s0_y*2) + 1)))))/(uint16)4)
hw_uint<16> hcompute_blur2_1_stencil(hw_uint<64>& blur1_1_stencil) {
  uint16_t _blur1_1_stencil_1 = (uint16_t) (blur1_1_stencil.extract<0, 15>());
  uint16_t _blur1_1_stencil_2 = (uint16_t) (blur1_1_stencil.extract<16, 31>());
  uint16_t _blur1_1_stencil_3 = (uint16_t) (blur1_1_stencil.extract<32, 47>());
  uint16_t _blur1_1_stencil_4 = (uint16_t) (blur1_1_stencil.extract<48, 63>());

  uint16_t _303 = _blur1_1_stencil_3 + _blur1_1_stencil_4;
  uint16_t _304 = _blur1_1_stencil_2 + _303;
  uint16_t _305 = _blur1_1_stencil_1 + _304;
  uint16_t _306 = (uint16_t)(2);
  uint16_t _307 = _305 >> _306;
  return _307;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = blur2$1.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& blur2_1_stencil) {
  uint16_t _blur2_1_stencil_1 = (uint16_t) (blur2_1_stencil.extract<0, 15>());

  return _blur2_1_stencil_1;
}

