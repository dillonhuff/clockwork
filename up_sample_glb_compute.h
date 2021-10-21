#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.glb.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_1;
}

//store is: hw_input_global_wrapper.glb.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_1(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_2 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_2;
}

//store is: hw_input_global_wrapper.glb.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_2(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_3 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_3;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(0, hw_input_global_wrapper_global_wrapper_s0_x, hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(0, hw_input_global_wrapper_global_wrapper_s0_x, hw_input_global_wrapper_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_1 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_1;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(1, hw_input_global_wrapper_global_wrapper_s0_x, hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(1, hw_input_global_wrapper_global_wrapper_s0_x, hw_input_global_wrapper_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_1(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_2 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_2;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(2, hw_input_global_wrapper_global_wrapper_s0_x, hw_input_global_wrapper_global_wrapper_s0_y) = hw_input_global_wrapper.glb.stencil(2, hw_input_global_wrapper_global_wrapper_s0_x, hw_input_global_wrapper_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_2(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_3 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_3;
}

//store is: nearest_neighbor.stencil(0, (nearest_neighbor_s0_x_x*2), nearest_neighbor_s0_y) = hw_input_global_wrapper_global_wrapper.stencil(0, nearest_neighbor_s0_x_x, (nearest_neighbor_s0_y/2))
hw_uint<16> hcompute_nearest_neighbor_stencil(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil) {
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_1 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_global_wrapper_stencil_1;
}

//store is: nearest_neighbor.stencil(1, (nearest_neighbor_s0_x_x*2), nearest_neighbor_s0_y) = hw_input_global_wrapper_global_wrapper.stencil(1, nearest_neighbor_s0_x_x, (nearest_neighbor_s0_y/2))
hw_uint<16> hcompute_nearest_neighbor_stencil_1(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil) {
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_2 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_global_wrapper_stencil_2;
}

//store is: nearest_neighbor.stencil(2, (nearest_neighbor_s0_x_x*2), nearest_neighbor_s0_y) = hw_input_global_wrapper_global_wrapper.stencil(2, nearest_neighbor_s0_x_x, (nearest_neighbor_s0_y/2))
hw_uint<16> hcompute_nearest_neighbor_stencil_2(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil) {
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_3 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_global_wrapper_stencil_3;
}

//store is: nearest_neighbor.stencil(0, ((nearest_neighbor_s0_x_x*2) + 1), nearest_neighbor_s0_y) = hw_input_global_wrapper_global_wrapper.stencil(0, nearest_neighbor_s0_x_x, (nearest_neighbor_s0_y/2))
hw_uint<16> hcompute_nearest_neighbor_stencil_3(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil) {
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_4 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_global_wrapper_stencil_4;
}

//store is: nearest_neighbor.stencil(1, ((nearest_neighbor_s0_x_x*2) + 1), nearest_neighbor_s0_y) = hw_input_global_wrapper_global_wrapper.stencil(1, nearest_neighbor_s0_x_x, (nearest_neighbor_s0_y/2))
hw_uint<16> hcompute_nearest_neighbor_stencil_4(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil) {
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_5 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_global_wrapper_stencil_5;
}

//store is: nearest_neighbor.stencil(2, ((nearest_neighbor_s0_x_x*2) + 1), nearest_neighbor_s0_y) = hw_input_global_wrapper_global_wrapper.stencil(2, nearest_neighbor_s0_x_x, (nearest_neighbor_s0_y/2))
hw_uint<16> hcompute_nearest_neighbor_stencil_5(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil) {
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_6 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_global_wrapper_stencil_6;
}

//store is: hw_output.glb.stencil(0, (hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi) = nearest_neighbor.stencil(0, (hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_glb_stencil(hw_uint<16>& nearest_neighbor_stencil) {
  uint16_t _nearest_neighbor_stencil_1 = (uint16_t) nearest_neighbor_stencil.extract<0, 15>();

  return _nearest_neighbor_stencil_1;
}

//store is: hw_output.glb.stencil(1, (hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi) = nearest_neighbor.stencil(1, (hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_glb_stencil_1(hw_uint<16>& nearest_neighbor_stencil) {
  uint16_t _nearest_neighbor_stencil_2 = (uint16_t) nearest_neighbor_stencil.extract<0, 15>();

  return _nearest_neighbor_stencil_2;
}

//store is: hw_output.glb.stencil(2, (hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi) = nearest_neighbor.stencil(2, (hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_glb_stencil_2(hw_uint<16>& nearest_neighbor_stencil) {
  uint16_t _nearest_neighbor_stencil_3 = (uint16_t) nearest_neighbor_stencil.extract<0, 15>();

  return _nearest_neighbor_stencil_3;
}

//store is: hw_output.glb.stencil(0, ((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi) = nearest_neighbor.stencil(0, ((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_glb_stencil_3(hw_uint<16>& nearest_neighbor_stencil) {
  uint16_t _nearest_neighbor_stencil_4 = (uint16_t) nearest_neighbor_stencil.extract<0, 15>();

  return _nearest_neighbor_stencil_4;
}

//store is: hw_output.glb.stencil(1, ((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi) = nearest_neighbor.stencil(1, ((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_glb_stencil_4(hw_uint<16>& nearest_neighbor_stencil) {
  uint16_t _nearest_neighbor_stencil_5 = (uint16_t) nearest_neighbor_stencil.extract<0, 15>();

  return _nearest_neighbor_stencil_5;
}

//store is: hw_output.glb.stencil(2, ((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi) = nearest_neighbor.stencil(2, ((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_glb_stencil_5(hw_uint<16>& nearest_neighbor_stencil) {
  uint16_t _nearest_neighbor_stencil_6 = (uint16_t) nearest_neighbor_stencil.extract<0, 15>();

  return _nearest_neighbor_stencil_6;
}

//store is: hw_output_global_wrapper.stencil(0, ((hw_output_global_wrapper_s0_x_xi_xi + (0*64))*2), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.glb.stencil(0, (hw_output_global_wrapper_s0_x_xi_xi*2), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_stencil(hw_uint<16>& hw_output_glb_stencil) {
  uint16_t _hw_output_glb_stencil_1 = (uint16_t) hw_output_glb_stencil.extract<0, 15>();

  return _hw_output_glb_stencil_1;
}

//store is: hw_output_global_wrapper.stencil(1, ((hw_output_global_wrapper_s0_x_xi_xi + (0*64))*2), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.glb.stencil(1, (hw_output_global_wrapper_s0_x_xi_xi*2), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_stencil_1(hw_uint<16>& hw_output_glb_stencil) {
  uint16_t _hw_output_glb_stencil_2 = (uint16_t) hw_output_glb_stencil.extract<0, 15>();

  return _hw_output_glb_stencil_2;
}

//store is: hw_output_global_wrapper.stencil(2, ((hw_output_global_wrapper_s0_x_xi_xi + (0*64))*2), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.glb.stencil(2, (hw_output_global_wrapper_s0_x_xi_xi*2), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_stencil_2(hw_uint<16>& hw_output_glb_stencil) {
  uint16_t _hw_output_glb_stencil_3 = (uint16_t) hw_output_glb_stencil.extract<0, 15>();

  return _hw_output_glb_stencil_3;
}

//store is: hw_output_global_wrapper.stencil(0, (((hw_output_global_wrapper_s0_x_xi_xi + (0*64))*2) + 1), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.glb.stencil(0, ((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_stencil_3(hw_uint<16>& hw_output_glb_stencil) {
  uint16_t _hw_output_glb_stencil_4 = (uint16_t) hw_output_glb_stencil.extract<0, 15>();

  return _hw_output_glb_stencil_4;
}

//store is: hw_output_global_wrapper.stencil(1, (((hw_output_global_wrapper_s0_x_xi_xi + (0*64))*2) + 1), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.glb.stencil(1, ((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_stencil_4(hw_uint<16>& hw_output_glb_stencil) {
  uint16_t _hw_output_glb_stencil_5 = (uint16_t) hw_output_glb_stencil.extract<0, 15>();

  return _hw_output_glb_stencil_5;
}

//store is: hw_output_global_wrapper.stencil(2, (((hw_output_global_wrapper_s0_x_xi_xi + (0*64))*2) + 1), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.glb.stencil(2, ((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_stencil_5(hw_uint<16>& hw_output_glb_stencil) {
  uint16_t _hw_output_glb_stencil_6 = (uint16_t) hw_output_glb_stencil.extract<0, 15>();

  return _hw_output_glb_stencil_6;
}

