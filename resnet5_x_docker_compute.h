#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: input_glb.stencil((input_glb_s0_z_z*8), input_glb_s0_x, input_glb_s0_y) = input_host.stencil((input_glb_s0_z_z*8), input_glb_s0_x, input_glb_s0_y)
hw_uint<16> hcompute_input_glb_stencil(hw_uint<16>& input_host_stencil) {
  int16_t _input_host_stencil_1 = (int16_t) (input_host_stencil.extract<0, 15>());

  return _input_host_stencil_1;
}

//store is: input_glb.stencil(((input_glb_s0_z_z*8) + 1), input_glb_s0_x, input_glb_s0_y) = input_host.stencil(((input_glb_s0_z_z*8) + 1), input_glb_s0_x, input_glb_s0_y)
hw_uint<16> hcompute_input_glb_stencil_1(hw_uint<16>& input_host_stencil) {
  int16_t _input_host_stencil_2 = (int16_t) (input_host_stencil.extract<0, 15>());

  return _input_host_stencil_2;
}

//store is: input_glb.stencil(((input_glb_s0_z_z*8) + 2), input_glb_s0_x, input_glb_s0_y) = input_host.stencil(((input_glb_s0_z_z*8) + 2), input_glb_s0_x, input_glb_s0_y)
hw_uint<16> hcompute_input_glb_stencil_2(hw_uint<16>& input_host_stencil) {
  int16_t _input_host_stencil_3 = (int16_t) (input_host_stencil.extract<0, 15>());

  return _input_host_stencil_3;
}

//store is: input_glb.stencil(((input_glb_s0_z_z*8) + 3), input_glb_s0_x, input_glb_s0_y) = input_host.stencil(((input_glb_s0_z_z*8) + 3), input_glb_s0_x, input_glb_s0_y)
hw_uint<16> hcompute_input_glb_stencil_3(hw_uint<16>& input_host_stencil) {
  int16_t _input_host_stencil_4 = (int16_t) (input_host_stencil.extract<0, 15>());

  return _input_host_stencil_4;
}

//store is: input_glb.stencil(((input_glb_s0_z_z*8) + 4), input_glb_s0_x, input_glb_s0_y) = input_host.stencil(((input_glb_s0_z_z*8) + 4), input_glb_s0_x, input_glb_s0_y)
hw_uint<16> hcompute_input_glb_stencil_4(hw_uint<16>& input_host_stencil) {
  int16_t _input_host_stencil_5 = (int16_t) (input_host_stencil.extract<0, 15>());

  return _input_host_stencil_5;
}

//store is: input_glb.stencil(((input_glb_s0_z_z*8) + 5), input_glb_s0_x, input_glb_s0_y) = input_host.stencil(((input_glb_s0_z_z*8) + 5), input_glb_s0_x, input_glb_s0_y)
hw_uint<16> hcompute_input_glb_stencil_5(hw_uint<16>& input_host_stencil) {
  int16_t _input_host_stencil_6 = (int16_t) (input_host_stencil.extract<0, 15>());

  return _input_host_stencil_6;
}

//store is: input_glb.stencil(((input_glb_s0_z_z*8) + 6), input_glb_s0_x, input_glb_s0_y) = input_host.stencil(((input_glb_s0_z_z*8) + 6), input_glb_s0_x, input_glb_s0_y)
hw_uint<16> hcompute_input_glb_stencil_6(hw_uint<16>& input_host_stencil) {
  int16_t _input_host_stencil_7 = (int16_t) (input_host_stencil.extract<0, 15>());

  return _input_host_stencil_7;
}

//store is: input_glb.stencil(((input_glb_s0_z_z*8) + 7), input_glb_s0_x, input_glb_s0_y) = input_host.stencil(((input_glb_s0_z_z*8) + 7), input_glb_s0_x, input_glb_s0_y)
hw_uint<16> hcompute_input_glb_stencil_7(hw_uint<16>& input_host_stencil) {
  int16_t _input_host_stencil_8 = (int16_t) (input_host_stencil.extract<0, 15>());

  return _input_host_stencil_8;
}

//store is: kernel_glb.stencil((kernel_glb_s0_z_z*4), kernel_glb_s0_w, kernel_glb_s0_x, kernel_glb_s0_y) = kernel_host.stencil((kernel_glb_s0_z_z*4), kernel_glb_s0_w, kernel_glb_s0_x, kernel_glb_s0_y)
hw_uint<16> hcompute_kernel_glb_stencil(hw_uint<16>& kernel_host_stencil) {
  int16_t _kernel_host_stencil_1 = (int16_t) (kernel_host_stencil.extract<0, 15>());

  return _kernel_host_stencil_1;
}

//store is: kernel_glb.stencil(((kernel_glb_s0_z_z*4) + 1), kernel_glb_s0_w, kernel_glb_s0_x, kernel_glb_s0_y) = kernel_host.stencil(((kernel_glb_s0_z_z*4) + 1), kernel_glb_s0_w, kernel_glb_s0_x, kernel_glb_s0_y)
hw_uint<16> hcompute_kernel_glb_stencil_1(hw_uint<16>& kernel_host_stencil) {
  int16_t _kernel_host_stencil_2 = (int16_t) (kernel_host_stencil.extract<0, 15>());

  return _kernel_host_stencil_2;
}

//store is: kernel_glb.stencil(((kernel_glb_s0_z_z*4) + 2), kernel_glb_s0_w, kernel_glb_s0_x, kernel_glb_s0_y) = kernel_host.stencil(((kernel_glb_s0_z_z*4) + 2), kernel_glb_s0_w, kernel_glb_s0_x, kernel_glb_s0_y)
hw_uint<16> hcompute_kernel_glb_stencil_2(hw_uint<16>& kernel_host_stencil) {
  int16_t _kernel_host_stencil_3 = (int16_t) (kernel_host_stencil.extract<0, 15>());

  return _kernel_host_stencil_3;
}

//store is: kernel_glb.stencil(((kernel_glb_s0_z_z*4) + 3), kernel_glb_s0_w, kernel_glb_s0_x, kernel_glb_s0_y) = kernel_host.stencil(((kernel_glb_s0_z_z*4) + 3), kernel_glb_s0_w, kernel_glb_s0_x, kernel_glb_s0_y)
hw_uint<16> hcompute_kernel_glb_stencil_3(hw_uint<16>& kernel_host_stencil) {
  int16_t _kernel_host_stencil_4 = (int16_t) (kernel_host_stencil.extract<0, 15>());

  return _kernel_host_stencil_4;
}

//store is: output_cgra.stencil(0, output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil() {
  int16_t _722 = (int16_t)(0);
  return _722;
}

//store is: output_cgra.stencil(1, output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_1() {
  int16_t _725 = (int16_t)(0);
  return _725;
}

//store is: output_cgra.stencil(2, output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_2() {
  int16_t _728 = (int16_t)(0);
  return _728;
}

//store is: output_cgra.stencil(3, output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_3() {
  int16_t _731 = (int16_t)(0);
  return _731;
}

//store is: output_cgra.stencil(4, output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_4() {
  int16_t _734 = (int16_t)(0);
  return _734;
}

//store is: output_cgra.stencil(5, output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_5() {
  int16_t _737 = (int16_t)(0);
  return _737;
}

//store is: output_cgra.stencil(6, output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_6() {
  int16_t _740 = (int16_t)(0);
  return _740;
}

//store is: output_cgra.stencil(7, output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_7() {
  int16_t _743 = (int16_t)(0);
  return _743;
}

//store is: input_cgra.stencil(0, input_cgra_s0_x, input_cgra_s0_y) = input_glb.stencil((output_cgra_s1_r_z_rz_glb*8), input_cgra_s0_x, input_cgra_s0_y)
hw_uint<16> hcompute_input_cgra_stencil(hw_uint<16>& input_glb_stencil) {
  int16_t _input_glb_stencil_1 = (int16_t) (input_glb_stencil.extract<0, 15>());

  return _input_glb_stencil_1;
}

//store is: input_cgra.stencil(1, input_cgra_s0_x, input_cgra_s0_y) = input_glb.stencil(((output_cgra_s1_r_z_rz_glb*8) + 1), input_cgra_s0_x, input_cgra_s0_y)
hw_uint<16> hcompute_input_cgra_stencil_1(hw_uint<16>& input_glb_stencil) {
  int16_t _input_glb_stencil_2 = (int16_t) (input_glb_stencil.extract<0, 15>());

  return _input_glb_stencil_2;
}

//store is: input_cgra.stencil(2, input_cgra_s0_x, input_cgra_s0_y) = input_glb.stencil(((output_cgra_s1_r_z_rz_glb*8) + 2), input_cgra_s0_x, input_cgra_s0_y)
hw_uint<16> hcompute_input_cgra_stencil_2(hw_uint<16>& input_glb_stencil) {
  int16_t _input_glb_stencil_3 = (int16_t) (input_glb_stencil.extract<0, 15>());

  return _input_glb_stencil_3;
}

//store is: input_cgra.stencil(3, input_cgra_s0_x, input_cgra_s0_y) = input_glb.stencil(((output_cgra_s1_r_z_rz_glb*8) + 3), input_cgra_s0_x, input_cgra_s0_y)
hw_uint<16> hcompute_input_cgra_stencil_3(hw_uint<16>& input_glb_stencil) {
  int16_t _input_glb_stencil_4 = (int16_t) (input_glb_stencil.extract<0, 15>());

  return _input_glb_stencil_4;
}

//store is: input_cgra.stencil(4, input_cgra_s0_x, input_cgra_s0_y) = input_glb.stencil(((output_cgra_s1_r_z_rz_glb*8) + 4), input_cgra_s0_x, input_cgra_s0_y)
hw_uint<16> hcompute_input_cgra_stencil_4(hw_uint<16>& input_glb_stencil) {
  int16_t _input_glb_stencil_5 = (int16_t) (input_glb_stencil.extract<0, 15>());

  return _input_glb_stencil_5;
}

//store is: input_cgra.stencil(5, input_cgra_s0_x, input_cgra_s0_y) = input_glb.stencil(((output_cgra_s1_r_z_rz_glb*8) + 5), input_cgra_s0_x, input_cgra_s0_y)
hw_uint<16> hcompute_input_cgra_stencil_5(hw_uint<16>& input_glb_stencil) {
  int16_t _input_glb_stencil_6 = (int16_t) (input_glb_stencil.extract<0, 15>());

  return _input_glb_stencil_6;
}

//store is: input_cgra.stencil(6, input_cgra_s0_x, input_cgra_s0_y) = input_glb.stencil(((output_cgra_s1_r_z_rz_glb*8) + 6), input_cgra_s0_x, input_cgra_s0_y)
hw_uint<16> hcompute_input_cgra_stencil_6(hw_uint<16>& input_glb_stencil) {
  int16_t _input_glb_stencil_7 = (int16_t) (input_glb_stencil.extract<0, 15>());

  return _input_glb_stencil_7;
}

//store is: input_cgra.stencil(7, input_cgra_s0_x, input_cgra_s0_y) = input_glb.stencil(((output_cgra_s1_r_z_rz_glb*8) + 7), input_cgra_s0_x, input_cgra_s0_y)
hw_uint<16> hcompute_input_cgra_stencil_7(hw_uint<16>& input_glb_stencil) {
  int16_t _input_glb_stencil_8 = (int16_t) (input_glb_stencil.extract<0, 15>());

  return _input_glb_stencil_8;
}

//store is: kernel_cgra.stencil((kernel_cgra_s0_z_z_cgra_z_cgra*4), kernel_cgra_s0_w_w_cgra, kernel_cgra_s0_x, kernel_cgra_s0_y) = kernel_glb.stencil((((output_cgra_s1_r_z_rz_glb*2) + kernel_cgra_s0_z_z_cgra_z_cgra)*4), ((output_glb_s0_w_w_glb*8) + kernel_cgra_s0_w_w_cgra), kernel_cgra_s0_x, kernel_cgra_s0_y)
hw_uint<16> hcompute_kernel_cgra_stencil(hw_uint<16>& kernel_glb_stencil) {
  int16_t _kernel_glb_stencil_1 = (int16_t) (kernel_glb_stencil.extract<0, 15>());

  return _kernel_glb_stencil_1;
}

//store is: kernel_cgra.stencil(((kernel_cgra_s0_z_z_cgra_z_cgra*4) + 1), kernel_cgra_s0_w_w_cgra, kernel_cgra_s0_x, kernel_cgra_s0_y) = kernel_glb.stencil(((((output_cgra_s1_r_z_rz_glb*2) + kernel_cgra_s0_z_z_cgra_z_cgra)*4) + 1), ((output_glb_s0_w_w_glb*8) + kernel_cgra_s0_w_w_cgra), kernel_cgra_s0_x, kernel_cgra_s0_y)
hw_uint<16> hcompute_kernel_cgra_stencil_1(hw_uint<16>& kernel_glb_stencil) {
  int16_t _kernel_glb_stencil_2 = (int16_t) (kernel_glb_stencil.extract<0, 15>());

  return _kernel_glb_stencil_2;
}

//store is: kernel_cgra.stencil(((kernel_cgra_s0_z_z_cgra_z_cgra*4) + 2), kernel_cgra_s0_w_w_cgra, kernel_cgra_s0_x, kernel_cgra_s0_y) = kernel_glb.stencil(((((output_cgra_s1_r_z_rz_glb*2) + kernel_cgra_s0_z_z_cgra_z_cgra)*4) + 2), ((output_glb_s0_w_w_glb*8) + kernel_cgra_s0_w_w_cgra), kernel_cgra_s0_x, kernel_cgra_s0_y)
hw_uint<16> hcompute_kernel_cgra_stencil_2(hw_uint<16>& kernel_glb_stencil) {
  int16_t _kernel_glb_stencil_3 = (int16_t) (kernel_glb_stencil.extract<0, 15>());

  return _kernel_glb_stencil_3;
}

//store is: kernel_cgra.stencil(((kernel_cgra_s0_z_z_cgra_z_cgra*4) + 3), kernel_cgra_s0_w_w_cgra, kernel_cgra_s0_x, kernel_cgra_s0_y) = kernel_glb.stencil(((((output_cgra_s1_r_z_rz_glb*2) + kernel_cgra_s0_z_z_cgra_z_cgra)*4) + 3), ((output_glb_s0_w_w_glb*8) + kernel_cgra_s0_w_w_cgra), kernel_cgra_s0_x, kernel_cgra_s0_y)
hw_uint<16> hcompute_kernel_cgra_stencil_3(hw_uint<16>& kernel_glb_stencil) {
  int16_t _kernel_glb_stencil_4 = (int16_t) (kernel_glb_stencil.extract<0, 15>());

  return _kernel_glb_stencil_4;
}

//store is: output_cgra.stencil(0, output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(0, output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
hw_uint<16> hcompute_output_cgra_stencil_8(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_1 = (int16_t) (input_cgra_stencil.extract<0, 15>());
  int16_t _input_cgra_stencil_2 = (int16_t) (input_cgra_stencil.extract<16, 31>());
  int16_t _input_cgra_stencil_3 = (int16_t) (input_cgra_stencil.extract<32, 47>());
  int16_t _input_cgra_stencil_4 = (int16_t) (input_cgra_stencil.extract<48, 63>());
  int16_t _input_cgra_stencil_5 = (int16_t) (input_cgra_stencil.extract<64, 79>());
  int16_t _input_cgra_stencil_6 = (int16_t) (input_cgra_stencil.extract<80, 95>());
  int16_t _input_cgra_stencil_7 = (int16_t) (input_cgra_stencil.extract<96, 111>());
  int16_t _input_cgra_stencil_8 = (int16_t) (input_cgra_stencil.extract<112, 127>());

  int16_t _kernel_cgra_stencil_1 = (int16_t) (kernel_cgra_stencil.extract<0, 15>());
  int16_t _kernel_cgra_stencil_2 = (int16_t) (kernel_cgra_stencil.extract<16, 31>());
  int16_t _kernel_cgra_stencil_3 = (int16_t) (kernel_cgra_stencil.extract<32, 47>());
  int16_t _kernel_cgra_stencil_4 = (int16_t) (kernel_cgra_stencil.extract<48, 63>());
  int16_t _kernel_cgra_stencil_5 = (int16_t) (kernel_cgra_stencil.extract<64, 79>());
  int16_t _kernel_cgra_stencil_6 = (int16_t) (kernel_cgra_stencil.extract<80, 95>());
  int16_t _kernel_cgra_stencil_7 = (int16_t) (kernel_cgra_stencil.extract<96, 111>());
  int16_t _kernel_cgra_stencil_8 = (int16_t) (kernel_cgra_stencil.extract<112, 127>());

  int16_t _output_cgra_stencil_1 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _803 = _kernel_cgra_stencil_1 * _input_cgra_stencil_1;
  int16_t _804 = _kernel_cgra_stencil_2 * _input_cgra_stencil_2;
  int16_t _805 = _kernel_cgra_stencil_3 * _input_cgra_stencil_3;
  int16_t _806 = _kernel_cgra_stencil_4 * _input_cgra_stencil_4;
  int16_t _807 = _kernel_cgra_stencil_5 * _input_cgra_stencil_5;
  int16_t _808 = _kernel_cgra_stencil_6 * _input_cgra_stencil_6;
  int16_t _809 = _kernel_cgra_stencil_7 * _input_cgra_stencil_7;
  int16_t _810 = _kernel_cgra_stencil_8 * _input_cgra_stencil_8;
  int16_t _811 = _809 + _810;
  int16_t _812 = _808 + _811;
  int16_t _813 = _807 + _812;
  int16_t _814 = _806 + _813;
  int16_t _815 = _805 + _814;
  int16_t _816 = _804 + _815;
  int16_t _817 = _output_cgra_stencil_1 + _816;
  int16_t _818 = _803 + _817;
  return _818;
}

//store is: output_cgra.stencil(1, output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(1, output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
hw_uint<16> hcompute_output_cgra_stencil_9(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_10 = (int16_t) (input_cgra_stencil.extract<0, 15>());
  int16_t _input_cgra_stencil_11 = (int16_t) (input_cgra_stencil.extract<16, 31>());
  int16_t _input_cgra_stencil_12 = (int16_t) (input_cgra_stencil.extract<32, 47>());
  int16_t _input_cgra_stencil_13 = (int16_t) (input_cgra_stencil.extract<48, 63>());
  int16_t _input_cgra_stencil_14 = (int16_t) (input_cgra_stencil.extract<64, 79>());
  int16_t _input_cgra_stencil_15 = (int16_t) (input_cgra_stencil.extract<80, 95>());
  int16_t _input_cgra_stencil_16 = (int16_t) (input_cgra_stencil.extract<96, 111>());
  int16_t _input_cgra_stencil_9 = (int16_t) (input_cgra_stencil.extract<112, 127>());

  int16_t _kernel_cgra_stencil_10 = (int16_t) (kernel_cgra_stencil.extract<0, 15>());
  int16_t _kernel_cgra_stencil_11 = (int16_t) (kernel_cgra_stencil.extract<16, 31>());
  int16_t _kernel_cgra_stencil_12 = (int16_t) (kernel_cgra_stencil.extract<32, 47>());
  int16_t _kernel_cgra_stencil_13 = (int16_t) (kernel_cgra_stencil.extract<48, 63>());
  int16_t _kernel_cgra_stencil_14 = (int16_t) (kernel_cgra_stencil.extract<64, 79>());
  int16_t _kernel_cgra_stencil_15 = (int16_t) (kernel_cgra_stencil.extract<80, 95>());
  int16_t _kernel_cgra_stencil_16 = (int16_t) (kernel_cgra_stencil.extract<96, 111>());
  int16_t _kernel_cgra_stencil_9 = (int16_t) (kernel_cgra_stencil.extract<112, 127>());

  int16_t _output_cgra_stencil_2 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _870 = _kernel_cgra_stencil_9 * _input_cgra_stencil_9;
  int16_t _871 = _kernel_cgra_stencil_10 * _input_cgra_stencil_10;
  int16_t _872 = _kernel_cgra_stencil_11 * _input_cgra_stencil_11;
  int16_t _873 = _kernel_cgra_stencil_12 * _input_cgra_stencil_12;
  int16_t _874 = _kernel_cgra_stencil_13 * _input_cgra_stencil_13;
  int16_t _875 = _kernel_cgra_stencil_14 * _input_cgra_stencil_14;
  int16_t _876 = _kernel_cgra_stencil_15 * _input_cgra_stencil_15;
  int16_t _877 = _kernel_cgra_stencil_16 * _input_cgra_stencil_16;
  int16_t _878 = _876 + _877;
  int16_t _879 = _875 + _878;
  int16_t _880 = _874 + _879;
  int16_t _881 = _873 + _880;
  int16_t _882 = _872 + _881;
  int16_t _883 = _871 + _882;
  int16_t _884 = _output_cgra_stencil_2 + _883;
  int16_t _885 = _870 + _884;
  return _885;
}

//store is: output_cgra.stencil(2, output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(2, output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
hw_uint<16> hcompute_output_cgra_stencil_10(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_17 = (int16_t) (input_cgra_stencil.extract<0, 15>());
  int16_t _input_cgra_stencil_18 = (int16_t) (input_cgra_stencil.extract<16, 31>());
  int16_t _input_cgra_stencil_19 = (int16_t) (input_cgra_stencil.extract<32, 47>());
  int16_t _input_cgra_stencil_20 = (int16_t) (input_cgra_stencil.extract<48, 63>());
  int16_t _input_cgra_stencil_21 = (int16_t) (input_cgra_stencil.extract<64, 79>());
  int16_t _input_cgra_stencil_22 = (int16_t) (input_cgra_stencil.extract<80, 95>());
  int16_t _input_cgra_stencil_23 = (int16_t) (input_cgra_stencil.extract<96, 111>());
  int16_t _input_cgra_stencil_24 = (int16_t) (input_cgra_stencil.extract<112, 127>());

  int16_t _kernel_cgra_stencil_17 = (int16_t) (kernel_cgra_stencil.extract<0, 15>());
  int16_t _kernel_cgra_stencil_18 = (int16_t) (kernel_cgra_stencil.extract<16, 31>());
  int16_t _kernel_cgra_stencil_19 = (int16_t) (kernel_cgra_stencil.extract<32, 47>());
  int16_t _kernel_cgra_stencil_20 = (int16_t) (kernel_cgra_stencil.extract<48, 63>());
  int16_t _kernel_cgra_stencil_21 = (int16_t) (kernel_cgra_stencil.extract<64, 79>());
  int16_t _kernel_cgra_stencil_22 = (int16_t) (kernel_cgra_stencil.extract<80, 95>());
  int16_t _kernel_cgra_stencil_23 = (int16_t) (kernel_cgra_stencil.extract<96, 111>());
  int16_t _kernel_cgra_stencil_24 = (int16_t) (kernel_cgra_stencil.extract<112, 127>());

  int16_t _output_cgra_stencil_3 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _937 = _kernel_cgra_stencil_17 * _input_cgra_stencil_17;
  int16_t _938 = _kernel_cgra_stencil_18 * _input_cgra_stencil_18;
  int16_t _939 = _kernel_cgra_stencil_19 * _input_cgra_stencil_19;
  int16_t _940 = _kernel_cgra_stencil_20 * _input_cgra_stencil_20;
  int16_t _941 = _kernel_cgra_stencil_21 * _input_cgra_stencil_21;
  int16_t _942 = _kernel_cgra_stencil_22 * _input_cgra_stencil_22;
  int16_t _943 = _kernel_cgra_stencil_23 * _input_cgra_stencil_23;
  int16_t _944 = _kernel_cgra_stencil_24 * _input_cgra_stencil_24;
  int16_t _945 = _943 + _944;
  int16_t _946 = _942 + _945;
  int16_t _947 = _941 + _946;
  int16_t _948 = _940 + _947;
  int16_t _949 = _939 + _948;
  int16_t _950 = _938 + _949;
  int16_t _951 = _output_cgra_stencil_3 + _950;
  int16_t _952 = _937 + _951;
  return _952;
}

//store is: output_cgra.stencil(3, output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(3, output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
hw_uint<16> hcompute_output_cgra_stencil_11(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_25 = (int16_t) (input_cgra_stencil.extract<0, 15>());
  int16_t _input_cgra_stencil_26 = (int16_t) (input_cgra_stencil.extract<16, 31>());
  int16_t _input_cgra_stencil_27 = (int16_t) (input_cgra_stencil.extract<32, 47>());
  int16_t _input_cgra_stencil_28 = (int16_t) (input_cgra_stencil.extract<48, 63>());
  int16_t _input_cgra_stencil_29 = (int16_t) (input_cgra_stencil.extract<64, 79>());
  int16_t _input_cgra_stencil_30 = (int16_t) (input_cgra_stencil.extract<80, 95>());
  int16_t _input_cgra_stencil_31 = (int16_t) (input_cgra_stencil.extract<96, 111>());
  int16_t _input_cgra_stencil_32 = (int16_t) (input_cgra_stencil.extract<112, 127>());

  int16_t _kernel_cgra_stencil_25 = (int16_t) (kernel_cgra_stencil.extract<0, 15>());
  int16_t _kernel_cgra_stencil_26 = (int16_t) (kernel_cgra_stencil.extract<16, 31>());
  int16_t _kernel_cgra_stencil_27 = (int16_t) (kernel_cgra_stencil.extract<32, 47>());
  int16_t _kernel_cgra_stencil_28 = (int16_t) (kernel_cgra_stencil.extract<48, 63>());
  int16_t _kernel_cgra_stencil_29 = (int16_t) (kernel_cgra_stencil.extract<64, 79>());
  int16_t _kernel_cgra_stencil_30 = (int16_t) (kernel_cgra_stencil.extract<80, 95>());
  int16_t _kernel_cgra_stencil_31 = (int16_t) (kernel_cgra_stencil.extract<96, 111>());
  int16_t _kernel_cgra_stencil_32 = (int16_t) (kernel_cgra_stencil.extract<112, 127>());

  int16_t _output_cgra_stencil_4 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _1004 = _kernel_cgra_stencil_25 * _input_cgra_stencil_25;
  int16_t _1005 = _kernel_cgra_stencil_26 * _input_cgra_stencil_26;
  int16_t _1006 = _kernel_cgra_stencil_27 * _input_cgra_stencil_27;
  int16_t _1007 = _kernel_cgra_stencil_28 * _input_cgra_stencil_28;
  int16_t _1008 = _kernel_cgra_stencil_29 * _input_cgra_stencil_29;
  int16_t _1009 = _kernel_cgra_stencil_30 * _input_cgra_stencil_30;
  int16_t _1010 = _kernel_cgra_stencil_31 * _input_cgra_stencil_31;
  int16_t _1011 = _kernel_cgra_stencil_32 * _input_cgra_stencil_32;
  int16_t _1012 = _1010 + _1011;
  int16_t _1013 = _1009 + _1012;
  int16_t _1014 = _1008 + _1013;
  int16_t _1015 = _1007 + _1014;
  int16_t _1016 = _1006 + _1015;
  int16_t _1017 = _1005 + _1016;
  int16_t _1018 = _output_cgra_stencil_4 + _1017;
  int16_t _1019 = _1004 + _1018;
  return _1019;
}

//store is: output_cgra.stencil(4, output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(4, output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
hw_uint<16> hcompute_output_cgra_stencil_12(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_33 = (int16_t) (input_cgra_stencil.extract<0, 15>());
  int16_t _input_cgra_stencil_34 = (int16_t) (input_cgra_stencil.extract<16, 31>());
  int16_t _input_cgra_stencil_35 = (int16_t) (input_cgra_stencil.extract<32, 47>());
  int16_t _input_cgra_stencil_36 = (int16_t) (input_cgra_stencil.extract<48, 63>());
  int16_t _input_cgra_stencil_37 = (int16_t) (input_cgra_stencil.extract<64, 79>());
  int16_t _input_cgra_stencil_38 = (int16_t) (input_cgra_stencil.extract<80, 95>());
  int16_t _input_cgra_stencil_39 = (int16_t) (input_cgra_stencil.extract<96, 111>());
  int16_t _input_cgra_stencil_40 = (int16_t) (input_cgra_stencil.extract<112, 127>());

  int16_t _kernel_cgra_stencil_33 = (int16_t) (kernel_cgra_stencil.extract<0, 15>());
  int16_t _kernel_cgra_stencil_34 = (int16_t) (kernel_cgra_stencil.extract<16, 31>());
  int16_t _kernel_cgra_stencil_35 = (int16_t) (kernel_cgra_stencil.extract<32, 47>());
  int16_t _kernel_cgra_stencil_36 = (int16_t) (kernel_cgra_stencil.extract<48, 63>());
  int16_t _kernel_cgra_stencil_37 = (int16_t) (kernel_cgra_stencil.extract<64, 79>());
  int16_t _kernel_cgra_stencil_38 = (int16_t) (kernel_cgra_stencil.extract<80, 95>());
  int16_t _kernel_cgra_stencil_39 = (int16_t) (kernel_cgra_stencil.extract<96, 111>());
  int16_t _kernel_cgra_stencil_40 = (int16_t) (kernel_cgra_stencil.extract<112, 127>());

  int16_t _output_cgra_stencil_5 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _1071 = _kernel_cgra_stencil_33 * _input_cgra_stencil_33;
  int16_t _1072 = _kernel_cgra_stencil_34 * _input_cgra_stencil_34;
  int16_t _1073 = _kernel_cgra_stencil_35 * _input_cgra_stencil_35;
  int16_t _1074 = _kernel_cgra_stencil_36 * _input_cgra_stencil_36;
  int16_t _1075 = _kernel_cgra_stencil_37 * _input_cgra_stencil_37;
  int16_t _1076 = _kernel_cgra_stencil_38 * _input_cgra_stencil_38;
  int16_t _1077 = _kernel_cgra_stencil_39 * _input_cgra_stencil_39;
  int16_t _1078 = _kernel_cgra_stencil_40 * _input_cgra_stencil_40;
  int16_t _1079 = _1077 + _1078;
  int16_t _1080 = _1076 + _1079;
  int16_t _1081 = _1075 + _1080;
  int16_t _1082 = _1074 + _1081;
  int16_t _1083 = _1073 + _1082;
  int16_t _1084 = _1072 + _1083;
  int16_t _1085 = _output_cgra_stencil_5 + _1084;
  int16_t _1086 = _1071 + _1085;
  return _1086;
}

//store is: output_cgra.stencil(5, output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(5, output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
hw_uint<16> hcompute_output_cgra_stencil_13(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_41 = (int16_t) (input_cgra_stencil.extract<0, 15>());
  int16_t _input_cgra_stencil_42 = (int16_t) (input_cgra_stencil.extract<16, 31>());
  int16_t _input_cgra_stencil_43 = (int16_t) (input_cgra_stencil.extract<32, 47>());
  int16_t _input_cgra_stencil_44 = (int16_t) (input_cgra_stencil.extract<48, 63>());
  int16_t _input_cgra_stencil_45 = (int16_t) (input_cgra_stencil.extract<64, 79>());
  int16_t _input_cgra_stencil_46 = (int16_t) (input_cgra_stencil.extract<80, 95>());
  int16_t _input_cgra_stencil_47 = (int16_t) (input_cgra_stencil.extract<96, 111>());
  int16_t _input_cgra_stencil_48 = (int16_t) (input_cgra_stencil.extract<112, 127>());

  int16_t _kernel_cgra_stencil_41 = (int16_t) (kernel_cgra_stencil.extract<0, 15>());
  int16_t _kernel_cgra_stencil_42 = (int16_t) (kernel_cgra_stencil.extract<16, 31>());
  int16_t _kernel_cgra_stencil_43 = (int16_t) (kernel_cgra_stencil.extract<32, 47>());
  int16_t _kernel_cgra_stencil_44 = (int16_t) (kernel_cgra_stencil.extract<48, 63>());
  int16_t _kernel_cgra_stencil_45 = (int16_t) (kernel_cgra_stencil.extract<64, 79>());
  int16_t _kernel_cgra_stencil_46 = (int16_t) (kernel_cgra_stencil.extract<80, 95>());
  int16_t _kernel_cgra_stencil_47 = (int16_t) (kernel_cgra_stencil.extract<96, 111>());
  int16_t _kernel_cgra_stencil_48 = (int16_t) (kernel_cgra_stencil.extract<112, 127>());

  int16_t _output_cgra_stencil_6 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _1138 = _kernel_cgra_stencil_41 * _input_cgra_stencil_41;
  int16_t _1139 = _kernel_cgra_stencil_42 * _input_cgra_stencil_42;
  int16_t _1140 = _kernel_cgra_stencil_43 * _input_cgra_stencil_43;
  int16_t _1141 = _kernel_cgra_stencil_44 * _input_cgra_stencil_44;
  int16_t _1142 = _kernel_cgra_stencil_45 * _input_cgra_stencil_45;
  int16_t _1143 = _kernel_cgra_stencil_46 * _input_cgra_stencil_46;
  int16_t _1144 = _kernel_cgra_stencil_47 * _input_cgra_stencil_47;
  int16_t _1145 = _kernel_cgra_stencil_48 * _input_cgra_stencil_48;
  int16_t _1146 = _1144 + _1145;
  int16_t _1147 = _1143 + _1146;
  int16_t _1148 = _1142 + _1147;
  int16_t _1149 = _1141 + _1148;
  int16_t _1150 = _1140 + _1149;
  int16_t _1151 = _1139 + _1150;
  int16_t _1152 = _output_cgra_stencil_6 + _1151;
  int16_t _1153 = _1138 + _1152;
  return _1153;
}

//store is: output_cgra.stencil(6, output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(6, output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
hw_uint<16> hcompute_output_cgra_stencil_14(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_49 = (int16_t) (input_cgra_stencil.extract<0, 15>());
  int16_t _input_cgra_stencil_50 = (int16_t) (input_cgra_stencil.extract<16, 31>());
  int16_t _input_cgra_stencil_51 = (int16_t) (input_cgra_stencil.extract<32, 47>());
  int16_t _input_cgra_stencil_52 = (int16_t) (input_cgra_stencil.extract<48, 63>());
  int16_t _input_cgra_stencil_53 = (int16_t) (input_cgra_stencil.extract<64, 79>());
  int16_t _input_cgra_stencil_54 = (int16_t) (input_cgra_stencil.extract<80, 95>());
  int16_t _input_cgra_stencil_55 = (int16_t) (input_cgra_stencil.extract<96, 111>());
  int16_t _input_cgra_stencil_56 = (int16_t) (input_cgra_stencil.extract<112, 127>());

  int16_t _kernel_cgra_stencil_49 = (int16_t) (kernel_cgra_stencil.extract<0, 15>());
  int16_t _kernel_cgra_stencil_50 = (int16_t) (kernel_cgra_stencil.extract<16, 31>());
  int16_t _kernel_cgra_stencil_51 = (int16_t) (kernel_cgra_stencil.extract<32, 47>());
  int16_t _kernel_cgra_stencil_52 = (int16_t) (kernel_cgra_stencil.extract<48, 63>());
  int16_t _kernel_cgra_stencil_53 = (int16_t) (kernel_cgra_stencil.extract<64, 79>());
  int16_t _kernel_cgra_stencil_54 = (int16_t) (kernel_cgra_stencil.extract<80, 95>());
  int16_t _kernel_cgra_stencil_55 = (int16_t) (kernel_cgra_stencil.extract<96, 111>());
  int16_t _kernel_cgra_stencil_56 = (int16_t) (kernel_cgra_stencil.extract<112, 127>());

  int16_t _output_cgra_stencil_7 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _1205 = _kernel_cgra_stencil_49 * _input_cgra_stencil_49;
  int16_t _1206 = _kernel_cgra_stencil_50 * _input_cgra_stencil_50;
  int16_t _1207 = _kernel_cgra_stencil_51 * _input_cgra_stencil_51;
  int16_t _1208 = _kernel_cgra_stencil_52 * _input_cgra_stencil_52;
  int16_t _1209 = _kernel_cgra_stencil_53 * _input_cgra_stencil_53;
  int16_t _1210 = _kernel_cgra_stencil_54 * _input_cgra_stencil_54;
  int16_t _1211 = _kernel_cgra_stencil_55 * _input_cgra_stencil_55;
  int16_t _1212 = _kernel_cgra_stencil_56 * _input_cgra_stencil_56;
  int16_t _1213 = _1211 + _1212;
  int16_t _1214 = _1210 + _1213;
  int16_t _1215 = _1209 + _1214;
  int16_t _1216 = _1208 + _1215;
  int16_t _1217 = _1207 + _1216;
  int16_t _1218 = _1206 + _1217;
  int16_t _1219 = _output_cgra_stencil_7 + _1218;
  int16_t _1220 = _1205 + _1219;
  return _1220;
}

//store is: output_cgra.stencil(7, output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(7, output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
hw_uint<16> hcompute_output_cgra_stencil_15(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_57 = (int16_t) (input_cgra_stencil.extract<0, 15>());
  int16_t _input_cgra_stencil_58 = (int16_t) (input_cgra_stencil.extract<16, 31>());
  int16_t _input_cgra_stencil_59 = (int16_t) (input_cgra_stencil.extract<32, 47>());
  int16_t _input_cgra_stencil_60 = (int16_t) (input_cgra_stencil.extract<48, 63>());
  int16_t _input_cgra_stencil_61 = (int16_t) (input_cgra_stencil.extract<64, 79>());
  int16_t _input_cgra_stencil_62 = (int16_t) (input_cgra_stencil.extract<80, 95>());
  int16_t _input_cgra_stencil_63 = (int16_t) (input_cgra_stencil.extract<96, 111>());
  int16_t _input_cgra_stencil_64 = (int16_t) (input_cgra_stencil.extract<112, 127>());

  int16_t _kernel_cgra_stencil_57 = (int16_t) (kernel_cgra_stencil.extract<0, 15>());
  int16_t _kernel_cgra_stencil_58 = (int16_t) (kernel_cgra_stencil.extract<16, 31>());
  int16_t _kernel_cgra_stencil_59 = (int16_t) (kernel_cgra_stencil.extract<32, 47>());
  int16_t _kernel_cgra_stencil_60 = (int16_t) (kernel_cgra_stencil.extract<48, 63>());
  int16_t _kernel_cgra_stencil_61 = (int16_t) (kernel_cgra_stencil.extract<64, 79>());
  int16_t _kernel_cgra_stencil_62 = (int16_t) (kernel_cgra_stencil.extract<80, 95>());
  int16_t _kernel_cgra_stencil_63 = (int16_t) (kernel_cgra_stencil.extract<96, 111>());
  int16_t _kernel_cgra_stencil_64 = (int16_t) (kernel_cgra_stencil.extract<112, 127>());

  int16_t _output_cgra_stencil_8 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _1272 = _kernel_cgra_stencil_57 * _input_cgra_stencil_57;
  int16_t _1273 = _kernel_cgra_stencil_58 * _input_cgra_stencil_58;
  int16_t _1274 = _kernel_cgra_stencil_59 * _input_cgra_stencil_59;
  int16_t _1275 = _kernel_cgra_stencil_60 * _input_cgra_stencil_60;
  int16_t _1276 = _kernel_cgra_stencil_61 * _input_cgra_stencil_61;
  int16_t _1277 = _kernel_cgra_stencil_62 * _input_cgra_stencil_62;
  int16_t _1278 = _kernel_cgra_stencil_63 * _input_cgra_stencil_63;
  int16_t _1279 = _kernel_cgra_stencil_64 * _input_cgra_stencil_64;
  int16_t _1280 = _1278 + _1279;
  int16_t _1281 = _1277 + _1280;
  int16_t _1282 = _1276 + _1281;
  int16_t _1283 = _1275 + _1282;
  int16_t _1284 = _1274 + _1283;
  int16_t _1285 = _1273 + _1284;
  int16_t _1286 = _output_cgra_stencil_8 + _1285;
  int16_t _1287 = _1272 + _1286;
  return _1287;
}

//store is: output_glb.stencil((((output_glb_s0_w_w_glb*2) + output_glb_s0_w_w_cgra_w_cgra)*4), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra) = output_cgra.stencil((output_glb_s0_w_w_cgra_w_cgra*4), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
hw_uint<16> hcompute_output_glb_stencil(hw_uint<16>& output_cgra_stencil) {
  int16_t _output_cgra_stencil_9 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  return _output_cgra_stencil_9;
}

//store is: output_glb.stencil(((((output_glb_s0_w_w_glb*2) + output_glb_s0_w_w_cgra_w_cgra)*4) + 1), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra) = output_cgra.stencil(((output_glb_s0_w_w_cgra_w_cgra*4) + 1), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
hw_uint<16> hcompute_output_glb_stencil_1(hw_uint<16>& output_cgra_stencil) {
  int16_t _output_cgra_stencil_10 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  return _output_cgra_stencil_10;
}

//store is: output_glb.stencil(((((output_glb_s0_w_w_glb*2) + output_glb_s0_w_w_cgra_w_cgra)*4) + 2), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra) = output_cgra.stencil(((output_glb_s0_w_w_cgra_w_cgra*4) + 2), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
hw_uint<16> hcompute_output_glb_stencil_2(hw_uint<16>& output_cgra_stencil) {
  int16_t _output_cgra_stencil_11 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  return _output_cgra_stencil_11;
}

//store is: output_glb.stencil(((((output_glb_s0_w_w_glb*2) + output_glb_s0_w_w_cgra_w_cgra)*4) + 3), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra) = output_cgra.stencil(((output_glb_s0_w_w_cgra_w_cgra*4) + 3), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
hw_uint<16> hcompute_output_glb_stencil_3(hw_uint<16>& output_cgra_stencil) {
  int16_t _output_cgra_stencil_12 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  return _output_cgra_stencil_12;
}

//store is: hw_output.stencil((hw_output_s0_w_w*4), hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil((hw_output_s0_w_w*4), hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& output_glb_stencil) {
  int16_t _output_glb_stencil_1 = (int16_t) (output_glb_stencil.extract<0, 15>());

  return _output_glb_stencil_1;
}

//store is: hw_output.stencil(((hw_output_s0_w_w*4) + 1), hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil(((hw_output_s0_w_w*4) + 1), hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil_1(hw_uint<16>& output_glb_stencil) {
  int16_t _output_glb_stencil_2 = (int16_t) (output_glb_stencil.extract<0, 15>());

  return _output_glb_stencil_2;
}

//store is: hw_output.stencil(((hw_output_s0_w_w*4) + 2), hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil(((hw_output_s0_w_w*4) + 2), hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil_2(hw_uint<16>& output_glb_stencil) {
  int16_t _output_glb_stencil_3 = (int16_t) (output_glb_stencil.extract<0, 15>());

  return _output_glb_stencil_3;
}

//store is: hw_output.stencil(((hw_output_s0_w_w*4) + 3), hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil(((hw_output_s0_w_w*4) + 3), hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil_3(hw_uint<16>& output_glb_stencil) {
  int16_t _output_glb_stencil_4 = (int16_t) (output_glb_stencil.extract<0, 15>());

  return _output_glb_stencil_4;
}

