#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: input_cgra.stencil(input_cgra_s0_zz, input_cgra_s0_z, input_cgra_s0_x, input_cgra_s0_y) = input_host.stencil(((input_cgra_s0_z*4) + input_cgra_s0_zz), input_cgra_s0_x, input_cgra_s0_y)
hw_uint<16> hcompute_input_cgra_stencil(hw_uint<16>& input_host_stencil) {
  uint16_t _input_host_stencil_1 = (uint16_t) input_host_stencil.extract<0, 15>();

  return _input_host_stencil_1;
}

//store is: kernel_cgra.stencil(kernel_cgra_s0_z, (kernel_cgra_s0_w + 45), kernel_cgra_s0_x, kernel_cgra_s0_y) = kernel_host.stencil(kernel_cgra_s0_z, kernel_cgra_s0_w, kernel_cgra_s0_x, kernel_cgra_s0_y)
hw_uint<16> hcompute_kernel_cgra_stencil(hw_uint<16>& kernel_host_stencil) {
  uint16_t _kernel_host_stencil_1 = (uint16_t) kernel_host_stencil.extract<0, 15>();

  return _kernel_host_stencil_1;
}

//store is: output_pond.stencil(0, 0, output_pond_s0_w_w_unroll) = (uint16)0
hw_uint<16> hcompute_output_pond_stencil() {
  uint16_t _676 = (uint16_t)(0);
  return _676;
}

//store is: input_pond.stencil(input_pond_s0_zz, input_pond_s0_z, ((input_pond_s0_x + output_cgra_s0_x) - output_cgra_s0_x), ((input_pond_s0_y + output_cgra_s0_y) - output_cgra_s0_y)) = input_cgra.stencil(input_pond_s0_zz, input_pond_s0_z, (input_pond_s0_x + output_cgra_s0_x), (input_pond_s0_y + output_cgra_s0_y))
hw_uint<16> hcompute_input_pond_stencil(hw_uint<16>& input_cgra_stencil) {
  uint16_t _input_cgra_stencil_1 = (uint16_t) input_cgra_stencil.extract<0, 15>();

  return _input_cgra_stencil_1;
}

//store is: kernel_pond.stencil(kernel_pond_s0_zz, kernel_pond_s0_z, kernel_pond_s0_w_w_cgra, kernel_pond_s0_x, kernel_pond_s0_y) = kernel_cgra.stencil(((kernel_pond_s0_z*4) + kernel_pond_s0_zz), (((output_cgra_s0_w_w*3) + kernel_pond_s0_w_w_cgra) + 45), kernel_pond_s0_x, kernel_pond_s0_y)
hw_uint<16> hcompute_kernel_pond_stencil(hw_uint<16>& kernel_cgra_stencil) {
  uint16_t _kernel_cgra_stencil_1 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();

  return _kernel_cgra_stencil_1;
}

//store is: output_pond.stencil(0, 0, 0) = ((kernel_pond.stencil(0, output_pond_s1_r_z, 0, output_pond_s1_r_x, output_pond_s1_r_y)*input_pond.stencil(0, output_pond_s1_r_z, output_pond_s1_r_x, output_pond_s1_r_y)) + ((kernel_pond.stencil(1, output_pond_s1_r_z, 0, output_pond_s1_r_x, output_pond_s1_r_y)*input_pond.stencil(1, output_pond_s1_r_z, output_pond_s1_r_x, output_pond_s1_r_y)) + ((kernel_pond.stencil(2, output_pond_s1_r_z, 0, output_pond_s1_r_x, output_pond_s1_r_y)*input_pond.stencil(2, output_pond_s1_r_z, output_pond_s1_r_x, output_pond_s1_r_y)) + (output_pond.stencil(0, 0, 0) + (kernel_pond.stencil(3, output_pond_s1_r_z, 0, output_pond_s1_r_x, output_pond_s1_r_y)*input_pond.stencil(3, output_pond_s1_r_z, output_pond_s1_r_x, output_pond_s1_r_y))))))
hw_uint<16> hcompute_output_pond_stencil_1(hw_uint<64>& input_pond_stencil, hw_uint<64>& kernel_pond_stencil, hw_uint<16>& output_pond_stencil) {
  uint16_t _input_pond_stencil_1 = (uint16_t) input_pond_stencil.extract<0, 15>();
  uint16_t _input_pond_stencil_2 = (uint16_t) input_pond_stencil.extract<16, 31>();
  uint16_t _input_pond_stencil_3 = (uint16_t) input_pond_stencil.extract<32, 47>();
  uint16_t _input_pond_stencil_4 = (uint16_t) input_pond_stencil.extract<48, 63>();

  uint16_t _kernel_pond_stencil_1 = (uint16_t) kernel_pond_stencil.extract<0, 15>();
  uint16_t _kernel_pond_stencil_2 = (uint16_t) kernel_pond_stencil.extract<16, 31>();
  uint16_t _kernel_pond_stencil_3 = (uint16_t) kernel_pond_stencil.extract<32, 47>();
  uint16_t _kernel_pond_stencil_4 = (uint16_t) kernel_pond_stencil.extract<48, 63>();

  uint16_t _output_pond_stencil_1 = (uint16_t) output_pond_stencil.extract<0, 15>();

  uint16_t _690 = _kernel_pond_stencil_1 * _input_pond_stencil_1;
  uint16_t _691 = _kernel_pond_stencil_2 * _input_pond_stencil_2;
  uint16_t _692 = _kernel_pond_stencil_3 * _input_pond_stencil_3;
  uint16_t _693 = _kernel_pond_stencil_4 * _input_pond_stencil_4;
  uint16_t _694 = _output_pond_stencil_1 + _693;
  uint16_t _695 = _692 + _694;
  uint16_t _696 = _691 + _695;
  uint16_t _697 = _690 + _696;
  return _697;
}

//store is: output_pond.stencil(0, 0, 1) = ((kernel_pond.stencil(0, output_pond_s1_r_z, 1, output_pond_s1_r_x, output_pond_s1_r_y)*input_pond.stencil(0, output_pond_s1_r_z, output_pond_s1_r_x, output_pond_s1_r_y)) + ((kernel_pond.stencil(1, output_pond_s1_r_z, 1, output_pond_s1_r_x, output_pond_s1_r_y)*input_pond.stencil(1, output_pond_s1_r_z, output_pond_s1_r_x, output_pond_s1_r_y)) + ((kernel_pond.stencil(2, output_pond_s1_r_z, 1, output_pond_s1_r_x, output_pond_s1_r_y)*input_pond.stencil(2, output_pond_s1_r_z, output_pond_s1_r_x, output_pond_s1_r_y)) + (output_pond.stencil(0, 0, 1) + (kernel_pond.stencil(3, output_pond_s1_r_z, 1, output_pond_s1_r_x, output_pond_s1_r_y)*input_pond.stencil(3, output_pond_s1_r_z, output_pond_s1_r_x, output_pond_s1_r_y))))))
hw_uint<16> hcompute_output_pond_stencil_2(hw_uint<64>& input_pond_stencil, hw_uint<64>& kernel_pond_stencil, hw_uint<16>& output_pond_stencil) {
  uint16_t _input_pond_stencil_5 = (uint16_t) input_pond_stencil.extract<0, 15>();
  uint16_t _input_pond_stencil_6 = (uint16_t) input_pond_stencil.extract<16, 31>();
  uint16_t _input_pond_stencil_7 = (uint16_t) input_pond_stencil.extract<32, 47>();
  uint16_t _input_pond_stencil_8 = (uint16_t) input_pond_stencil.extract<48, 63>();

  uint16_t _kernel_pond_stencil_5 = (uint16_t) kernel_pond_stencil.extract<0, 15>();
  uint16_t _kernel_pond_stencil_6 = (uint16_t) kernel_pond_stencil.extract<16, 31>();
  uint16_t _kernel_pond_stencil_7 = (uint16_t) kernel_pond_stencil.extract<32, 47>();
  uint16_t _kernel_pond_stencil_8 = (uint16_t) kernel_pond_stencil.extract<48, 63>();

  uint16_t _output_pond_stencil_2 = (uint16_t) output_pond_stencil.extract<0, 15>();

  uint16_t _723 = _kernel_pond_stencil_5 * _input_pond_stencil_5;
  uint16_t _724 = _kernel_pond_stencil_6 * _input_pond_stencil_6;
  uint16_t _725 = _kernel_pond_stencil_7 * _input_pond_stencil_7;
  uint16_t _726 = _kernel_pond_stencil_8 * _input_pond_stencil_8;
  uint16_t _727 = _output_pond_stencil_2 + _726;
  uint16_t _728 = _725 + _727;
  uint16_t _729 = _724 + _728;
  uint16_t _730 = _723 + _729;
  return _730;
}

//store is: output_pond.stencil(0, 0, 2) = ((kernel_pond.stencil(0, output_pond_s1_r_z, 2, output_pond_s1_r_x, output_pond_s1_r_y)*input_pond.stencil(0, output_pond_s1_r_z, output_pond_s1_r_x, output_pond_s1_r_y)) + ((kernel_pond.stencil(1, output_pond_s1_r_z, 2, output_pond_s1_r_x, output_pond_s1_r_y)*input_pond.stencil(1, output_pond_s1_r_z, output_pond_s1_r_x, output_pond_s1_r_y)) + ((kernel_pond.stencil(2, output_pond_s1_r_z, 2, output_pond_s1_r_x, output_pond_s1_r_y)*input_pond.stencil(2, output_pond_s1_r_z, output_pond_s1_r_x, output_pond_s1_r_y)) + (output_pond.stencil(0, 0, 2) + (kernel_pond.stencil(3, output_pond_s1_r_z, 2, output_pond_s1_r_x, output_pond_s1_r_y)*input_pond.stencil(3, output_pond_s1_r_z, output_pond_s1_r_x, output_pond_s1_r_y))))))
hw_uint<16> hcompute_output_pond_stencil_3(hw_uint<64>& input_pond_stencil, hw_uint<64>& kernel_pond_stencil, hw_uint<16>& output_pond_stencil) {
  uint16_t _input_pond_stencil_10 = (uint16_t) input_pond_stencil.extract<0, 15>();
  uint16_t _input_pond_stencil_11 = (uint16_t) input_pond_stencil.extract<16, 31>();
  uint16_t _input_pond_stencil_12 = (uint16_t) input_pond_stencil.extract<32, 47>();
  uint16_t _input_pond_stencil_9 = (uint16_t) input_pond_stencil.extract<48, 63>();

  uint16_t _kernel_pond_stencil_10 = (uint16_t) kernel_pond_stencil.extract<0, 15>();
  uint16_t _kernel_pond_stencil_11 = (uint16_t) kernel_pond_stencil.extract<16, 31>();
  uint16_t _kernel_pond_stencil_12 = (uint16_t) kernel_pond_stencil.extract<32, 47>();
  uint16_t _kernel_pond_stencil_9 = (uint16_t) kernel_pond_stencil.extract<48, 63>();

  uint16_t _output_pond_stencil_3 = (uint16_t) output_pond_stencil.extract<0, 15>();

  uint16_t _756 = _kernel_pond_stencil_9 * _input_pond_stencil_9;
  uint16_t _757 = _kernel_pond_stencil_10 * _input_pond_stencil_10;
  uint16_t _758 = _kernel_pond_stencil_11 * _input_pond_stencil_11;
  uint16_t _759 = _kernel_pond_stencil_12 * _input_pond_stencil_12;
  uint16_t _760 = _output_pond_stencil_3 + _759;
  uint16_t _761 = _758 + _760;
  uint16_t _762 = _757 + _761;
  uint16_t _763 = _756 + _762;
  return _763;
}

//store is: output_cgra.stencil(output_cgra_s0_x, output_cgra_s0_y, (output_cgra_s0_w_w*3)) = output_pond.stencil(0, 0, 0)
hw_uint<16> hcompute_output_cgra_stencil(hw_uint<16>& output_pond_stencil) {
  uint16_t _output_pond_stencil_4 = (uint16_t) output_pond_stencil.extract<0, 15>();

  return _output_pond_stencil_4;
}

//store is: output_cgra.stencil(output_cgra_s0_x, output_cgra_s0_y, ((output_cgra_s0_w_w*3) + 1)) = output_pond.stencil(0, 0, 1)
hw_uint<16> hcompute_output_cgra_stencil_1(hw_uint<16>& output_pond_stencil) {
  uint16_t _output_pond_stencil_5 = (uint16_t) output_pond_stencil.extract<0, 15>();

  return _output_pond_stencil_5;
}

//store is: output_cgra.stencil(output_cgra_s0_x, output_cgra_s0_y, ((output_cgra_s0_w_w*3) + 2)) = output_pond.stencil(0, 0, 2)
hw_uint<16> hcompute_output_cgra_stencil_2(hw_uint<16>& output_pond_stencil) {
  uint16_t _output_pond_stencil_6 = (uint16_t) output_pond_stencil.extract<0, 15>();

  return _output_pond_stencil_6;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w) = output_cgra.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& output_cgra_stencil) {
  uint16_t _output_cgra_stencil_1 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  return _output_cgra_stencil_1;
}

