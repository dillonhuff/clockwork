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

//store is: kernel_glb.stencil((kernel_glb_s0_w_w*8), kernel_glb_s0_z, kernel_glb_s0_x, kernel_glb_s0_y) = kernel_host.stencil((kernel_glb_s0_w_w*8), kernel_glb_s0_z, kernel_glb_s0_x, kernel_glb_s0_y)
hw_uint<16> hcompute_kernel_glb_stencil(hw_uint<16>& kernel_host_stencil) {
  int16_t _kernel_host_stencil_1 = (int16_t) (kernel_host_stencil.extract<0, 15>());

  return _kernel_host_stencil_1;
}

//store is: kernel_glb.stencil(((kernel_glb_s0_w_w*8) + 1), kernel_glb_s0_z, kernel_glb_s0_x, kernel_glb_s0_y) = kernel_host.stencil(((kernel_glb_s0_w_w*8) + 1), kernel_glb_s0_z, kernel_glb_s0_x, kernel_glb_s0_y)
hw_uint<16> hcompute_kernel_glb_stencil_1(hw_uint<16>& kernel_host_stencil) {
  int16_t _kernel_host_stencil_2 = (int16_t) (kernel_host_stencil.extract<0, 15>());

  return _kernel_host_stencil_2;
}

//store is: kernel_glb.stencil(((kernel_glb_s0_w_w*8) + 2), kernel_glb_s0_z, kernel_glb_s0_x, kernel_glb_s0_y) = kernel_host.stencil(((kernel_glb_s0_w_w*8) + 2), kernel_glb_s0_z, kernel_glb_s0_x, kernel_glb_s0_y)
hw_uint<16> hcompute_kernel_glb_stencil_2(hw_uint<16>& kernel_host_stencil) {
  int16_t _kernel_host_stencil_3 = (int16_t) (kernel_host_stencil.extract<0, 15>());

  return _kernel_host_stencil_3;
}

//store is: kernel_glb.stencil(((kernel_glb_s0_w_w*8) + 3), kernel_glb_s0_z, kernel_glb_s0_x, kernel_glb_s0_y) = kernel_host.stencil(((kernel_glb_s0_w_w*8) + 3), kernel_glb_s0_z, kernel_glb_s0_x, kernel_glb_s0_y)
hw_uint<16> hcompute_kernel_glb_stencil_3(hw_uint<16>& kernel_host_stencil) {
  int16_t _kernel_host_stencil_4 = (int16_t) (kernel_host_stencil.extract<0, 15>());

  return _kernel_host_stencil_4;
}

//store is: kernel_glb.stencil(((kernel_glb_s0_w_w*8) + 4), kernel_glb_s0_z, kernel_glb_s0_x, kernel_glb_s0_y) = kernel_host.stencil(((kernel_glb_s0_w_w*8) + 4), kernel_glb_s0_z, kernel_glb_s0_x, kernel_glb_s0_y)
hw_uint<16> hcompute_kernel_glb_stencil_4(hw_uint<16>& kernel_host_stencil) {
  int16_t _kernel_host_stencil_5 = (int16_t) (kernel_host_stencil.extract<0, 15>());

  return _kernel_host_stencil_5;
}

//store is: kernel_glb.stencil(((kernel_glb_s0_w_w*8) + 5), kernel_glb_s0_z, kernel_glb_s0_x, kernel_glb_s0_y) = kernel_host.stencil(((kernel_glb_s0_w_w*8) + 5), kernel_glb_s0_z, kernel_glb_s0_x, kernel_glb_s0_y)
hw_uint<16> hcompute_kernel_glb_stencil_5(hw_uint<16>& kernel_host_stencil) {
  int16_t _kernel_host_stencil_6 = (int16_t) (kernel_host_stencil.extract<0, 15>());

  return _kernel_host_stencil_6;
}

//store is: kernel_glb.stencil(((kernel_glb_s0_w_w*8) + 6), kernel_glb_s0_z, kernel_glb_s0_x, kernel_glb_s0_y) = kernel_host.stencil(((kernel_glb_s0_w_w*8) + 6), kernel_glb_s0_z, kernel_glb_s0_x, kernel_glb_s0_y)
hw_uint<16> hcompute_kernel_glb_stencil_6(hw_uint<16>& kernel_host_stencil) {
  int16_t _kernel_host_stencil_7 = (int16_t) (kernel_host_stencil.extract<0, 15>());

  return _kernel_host_stencil_7;
}

//store is: kernel_glb.stencil(((kernel_glb_s0_w_w*8) + 7), kernel_glb_s0_z, kernel_glb_s0_x, kernel_glb_s0_y) = kernel_host.stencil(((kernel_glb_s0_w_w*8) + 7), kernel_glb_s0_z, kernel_glb_s0_x, kernel_glb_s0_y)
hw_uint<16> hcompute_kernel_glb_stencil_7(hw_uint<16>& kernel_host_stencil) {
  int16_t _kernel_host_stencil_8 = (int16_t) (kernel_host_stencil.extract<0, 15>());

  return _kernel_host_stencil_8;
}

//store is: output_cgra.stencil((output_cgra_s0_w_w*16), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil() {
  int16_t _733 = (int16_t)(0);
  return _733;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*16) + 1), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_1() {
  int16_t _737 = (int16_t)(0);
  return _737;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*16) + 2), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_2() {
  int16_t _742 = (int16_t)(0);
  return _742;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*16) + 3), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_3() {
  int16_t _747 = (int16_t)(0);
  return _747;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*16) + 4), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_4() {
  int16_t _752 = (int16_t)(0);
  return _752;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*16) + 5), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_5() {
  int16_t _757 = (int16_t)(0);
  return _757;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*16) + 6), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_6() {
  int16_t _762 = (int16_t)(0);
  return _762;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*16) + 7), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_7() {
  int16_t _767 = (int16_t)(0);
  return _767;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*16) + 8), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_8() {
  int16_t _772 = (int16_t)(0);
  return _772;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*16) + 9), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_9() {
  int16_t _777 = (int16_t)(0);
  return _777;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*16) + 10), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_10() {
  int16_t _782 = (int16_t)(0);
  return _782;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*16) + 11), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_11() {
  int16_t _787 = (int16_t)(0);
  return _787;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*16) + 12), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_12() {
  int16_t _792 = (int16_t)(0);
  return _792;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*16) + 13), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_13() {
  int16_t _797 = (int16_t)(0);
  return _797;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*16) + 14), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_14() {
  int16_t _802 = (int16_t)(0);
  return _802;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*16) + 15), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_15() {
  int16_t _807 = (int16_t)(0);
  return _807;
}

//store is: input_cgra.stencil((input_cgra_s0_z_z_cgra_z_cgra*8), input_cgra_s0_x, input_cgra_s0_y) = input_glb.stencil((((output_cgra_s1_r_z_rz_glb*2) + input_cgra_s0_z_z_cgra_z_cgra)*8), input_cgra_s0_x, input_cgra_s0_y)
hw_uint<16> hcompute_input_cgra_stencil(hw_uint<16>& input_glb_stencil) {
  int16_t _input_glb_stencil_1 = (int16_t) (input_glb_stencil.extract<0, 15>());

  return _input_glb_stencil_1;
}

//store is: input_cgra.stencil(((input_cgra_s0_z_z_cgra_z_cgra*8) + 1), input_cgra_s0_x, input_cgra_s0_y) = input_glb.stencil(((((output_cgra_s1_r_z_rz_glb*2) + input_cgra_s0_z_z_cgra_z_cgra)*8) + 1), input_cgra_s0_x, input_cgra_s0_y)
hw_uint<16> hcompute_input_cgra_stencil_1(hw_uint<16>& input_glb_stencil) {
  int16_t _input_glb_stencil_2 = (int16_t) (input_glb_stencil.extract<0, 15>());

  return _input_glb_stencil_2;
}

//store is: input_cgra.stencil(((input_cgra_s0_z_z_cgra_z_cgra*8) + 2), input_cgra_s0_x, input_cgra_s0_y) = input_glb.stencil(((((output_cgra_s1_r_z_rz_glb*2) + input_cgra_s0_z_z_cgra_z_cgra)*8) + 2), input_cgra_s0_x, input_cgra_s0_y)
hw_uint<16> hcompute_input_cgra_stencil_2(hw_uint<16>& input_glb_stencil) {
  int16_t _input_glb_stencil_3 = (int16_t) (input_glb_stencil.extract<0, 15>());

  return _input_glb_stencil_3;
}

//store is: input_cgra.stencil(((input_cgra_s0_z_z_cgra_z_cgra*8) + 3), input_cgra_s0_x, input_cgra_s0_y) = input_glb.stencil(((((output_cgra_s1_r_z_rz_glb*2) + input_cgra_s0_z_z_cgra_z_cgra)*8) + 3), input_cgra_s0_x, input_cgra_s0_y)
hw_uint<16> hcompute_input_cgra_stencil_3(hw_uint<16>& input_glb_stencil) {
  int16_t _input_glb_stencil_4 = (int16_t) (input_glb_stencil.extract<0, 15>());

  return _input_glb_stencil_4;
}

//store is: input_cgra.stencil(((input_cgra_s0_z_z_cgra_z_cgra*8) + 4), input_cgra_s0_x, input_cgra_s0_y) = input_glb.stencil(((((output_cgra_s1_r_z_rz_glb*2) + input_cgra_s0_z_z_cgra_z_cgra)*8) + 4), input_cgra_s0_x, input_cgra_s0_y)
hw_uint<16> hcompute_input_cgra_stencil_4(hw_uint<16>& input_glb_stencil) {
  int16_t _input_glb_stencil_5 = (int16_t) (input_glb_stencil.extract<0, 15>());

  return _input_glb_stencil_5;
}

//store is: input_cgra.stencil(((input_cgra_s0_z_z_cgra_z_cgra*8) + 5), input_cgra_s0_x, input_cgra_s0_y) = input_glb.stencil(((((output_cgra_s1_r_z_rz_glb*2) + input_cgra_s0_z_z_cgra_z_cgra)*8) + 5), input_cgra_s0_x, input_cgra_s0_y)
hw_uint<16> hcompute_input_cgra_stencil_5(hw_uint<16>& input_glb_stencil) {
  int16_t _input_glb_stencil_6 = (int16_t) (input_glb_stencil.extract<0, 15>());

  return _input_glb_stencil_6;
}

//store is: input_cgra.stencil(((input_cgra_s0_z_z_cgra_z_cgra*8) + 6), input_cgra_s0_x, input_cgra_s0_y) = input_glb.stencil(((((output_cgra_s1_r_z_rz_glb*2) + input_cgra_s0_z_z_cgra_z_cgra)*8) + 6), input_cgra_s0_x, input_cgra_s0_y)
hw_uint<16> hcompute_input_cgra_stencil_6(hw_uint<16>& input_glb_stencil) {
  int16_t _input_glb_stencil_7 = (int16_t) (input_glb_stencil.extract<0, 15>());

  return _input_glb_stencil_7;
}

//store is: input_cgra.stencil(((input_cgra_s0_z_z_cgra_z_cgra*8) + 7), input_cgra_s0_x, input_cgra_s0_y) = input_glb.stencil(((((output_cgra_s1_r_z_rz_glb*2) + input_cgra_s0_z_z_cgra_z_cgra)*8) + 7), input_cgra_s0_x, input_cgra_s0_y)
hw_uint<16> hcompute_input_cgra_stencil_7(hw_uint<16>& input_glb_stencil) {
  int16_t _input_glb_stencil_8 = (int16_t) (input_glb_stencil.extract<0, 15>());

  return _input_glb_stencil_8;
}

//store is: kernel_cgra.stencil((kernel_cgra_s0_w_w_cgra_w_cgra*8), kernel_cgra_s0_z_z_cgra, kernel_cgra_s0_x, 0) = kernel_glb.stencil((((output_glb_s0_w_w_glb*8) + kernel_cgra_s0_w_w_cgra_w_cgra)*8), ((output_cgra_s1_r_z_rz_glb*16) + kernel_cgra_s0_z_z_cgra), kernel_cgra_s0_x, output_cgra_s1_r_y)
hw_uint<16> hcompute_kernel_cgra_stencil(hw_uint<16>& kernel_glb_stencil) {
  int16_t _kernel_glb_stencil_1 = (int16_t) (kernel_glb_stencil.extract<0, 15>());

  return _kernel_glb_stencil_1;
}

//store is: kernel_cgra.stencil(((kernel_cgra_s0_w_w_cgra_w_cgra*8) + 1), kernel_cgra_s0_z_z_cgra, kernel_cgra_s0_x, 0) = kernel_glb.stencil(((((output_glb_s0_w_w_glb*8) + kernel_cgra_s0_w_w_cgra_w_cgra)*8) + 1), ((output_cgra_s1_r_z_rz_glb*16) + kernel_cgra_s0_z_z_cgra), kernel_cgra_s0_x, output_cgra_s1_r_y)
hw_uint<16> hcompute_kernel_cgra_stencil_1(hw_uint<16>& kernel_glb_stencil) {
  int16_t _kernel_glb_stencil_2 = (int16_t) (kernel_glb_stencil.extract<0, 15>());

  return _kernel_glb_stencil_2;
}

//store is: kernel_cgra.stencil(((kernel_cgra_s0_w_w_cgra_w_cgra*8) + 2), kernel_cgra_s0_z_z_cgra, kernel_cgra_s0_x, 0) = kernel_glb.stencil(((((output_glb_s0_w_w_glb*8) + kernel_cgra_s0_w_w_cgra_w_cgra)*8) + 2), ((output_cgra_s1_r_z_rz_glb*16) + kernel_cgra_s0_z_z_cgra), kernel_cgra_s0_x, output_cgra_s1_r_y)
hw_uint<16> hcompute_kernel_cgra_stencil_2(hw_uint<16>& kernel_glb_stencil) {
  int16_t _kernel_glb_stencil_3 = (int16_t) (kernel_glb_stencil.extract<0, 15>());

  return _kernel_glb_stencil_3;
}

//store is: kernel_cgra.stencil(((kernel_cgra_s0_w_w_cgra_w_cgra*8) + 3), kernel_cgra_s0_z_z_cgra, kernel_cgra_s0_x, 0) = kernel_glb.stencil(((((output_glb_s0_w_w_glb*8) + kernel_cgra_s0_w_w_cgra_w_cgra)*8) + 3), ((output_cgra_s1_r_z_rz_glb*16) + kernel_cgra_s0_z_z_cgra), kernel_cgra_s0_x, output_cgra_s1_r_y)
hw_uint<16> hcompute_kernel_cgra_stencil_3(hw_uint<16>& kernel_glb_stencil) {
  int16_t _kernel_glb_stencil_4 = (int16_t) (kernel_glb_stencil.extract<0, 15>());

  return _kernel_glb_stencil_4;
}

//store is: kernel_cgra.stencil(((kernel_cgra_s0_w_w_cgra_w_cgra*8) + 4), kernel_cgra_s0_z_z_cgra, kernel_cgra_s0_x, 0) = kernel_glb.stencil(((((output_glb_s0_w_w_glb*8) + kernel_cgra_s0_w_w_cgra_w_cgra)*8) + 4), ((output_cgra_s1_r_z_rz_glb*16) + kernel_cgra_s0_z_z_cgra), kernel_cgra_s0_x, output_cgra_s1_r_y)
hw_uint<16> hcompute_kernel_cgra_stencil_4(hw_uint<16>& kernel_glb_stencil) {
  int16_t _kernel_glb_stencil_5 = (int16_t) (kernel_glb_stencil.extract<0, 15>());

  return _kernel_glb_stencil_5;
}

//store is: kernel_cgra.stencil(((kernel_cgra_s0_w_w_cgra_w_cgra*8) + 5), kernel_cgra_s0_z_z_cgra, kernel_cgra_s0_x, 0) = kernel_glb.stencil(((((output_glb_s0_w_w_glb*8) + kernel_cgra_s0_w_w_cgra_w_cgra)*8) + 5), ((output_cgra_s1_r_z_rz_glb*16) + kernel_cgra_s0_z_z_cgra), kernel_cgra_s0_x, output_cgra_s1_r_y)
hw_uint<16> hcompute_kernel_cgra_stencil_5(hw_uint<16>& kernel_glb_stencil) {
  int16_t _kernel_glb_stencil_6 = (int16_t) (kernel_glb_stencil.extract<0, 15>());

  return _kernel_glb_stencil_6;
}

//store is: kernel_cgra.stencil(((kernel_cgra_s0_w_w_cgra_w_cgra*8) + 6), kernel_cgra_s0_z_z_cgra, kernel_cgra_s0_x, 0) = kernel_glb.stencil(((((output_glb_s0_w_w_glb*8) + kernel_cgra_s0_w_w_cgra_w_cgra)*8) + 6), ((output_cgra_s1_r_z_rz_glb*16) + kernel_cgra_s0_z_z_cgra), kernel_cgra_s0_x, output_cgra_s1_r_y)
hw_uint<16> hcompute_kernel_cgra_stencil_6(hw_uint<16>& kernel_glb_stencil) {
  int16_t _kernel_glb_stencil_7 = (int16_t) (kernel_glb_stencil.extract<0, 15>());

  return _kernel_glb_stencil_7;
}

//store is: kernel_cgra.stencil(((kernel_cgra_s0_w_w_cgra_w_cgra*8) + 7), kernel_cgra_s0_z_z_cgra, kernel_cgra_s0_x, 0) = kernel_glb.stencil(((((output_glb_s0_w_w_glb*8) + kernel_cgra_s0_w_w_cgra_w_cgra)*8) + 7), ((output_cgra_s1_r_z_rz_glb*16) + kernel_cgra_s0_z_z_cgra), kernel_cgra_s0_x, output_cgra_s1_r_y)
hw_uint<16> hcompute_kernel_cgra_stencil_7(hw_uint<16>& kernel_glb_stencil) {
  int16_t _kernel_glb_stencil_8 = (int16_t) (kernel_glb_stencil.extract<0, 15>());

  return _kernel_glb_stencil_8;
}

//store is: output_cgra.stencil((output_cgra_s1_w_w*16), output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil((output_cgra_s1_w_w*16), 0, output_cgra_s1_r_x, 0)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil((output_cgra_s1_w_w*16), output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil((output_cgra_s1_w_w*16), 1, output_cgra_s1_r_x, 0)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil((output_cgra_s1_w_w*16), 2, output_cgra_s1_r_x, 0)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil((output_cgra_s1_w_w*16), 3, output_cgra_s1_r_x, 0)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil((output_cgra_s1_w_w*16), 4, output_cgra_s1_r_x, 0)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil((output_cgra_s1_w_w*16), 5, output_cgra_s1_r_x, 0)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil((output_cgra_s1_w_w*16), 6, output_cgra_s1_r_x, 0)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil((output_cgra_s1_w_w*16), 7, output_cgra_s1_r_x, 0)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil((output_cgra_s1_w_w*16), 8, output_cgra_s1_r_x, 0)*input_cgra.stencil(8, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil((output_cgra_s1_w_w*16), 9, output_cgra_s1_r_x, 0)*input_cgra.stencil(9, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil((output_cgra_s1_w_w*16), 10, output_cgra_s1_r_x, 0)*input_cgra.stencil(10, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil((output_cgra_s1_w_w*16), 11, output_cgra_s1_r_x, 0)*input_cgra.stencil(11, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil((output_cgra_s1_w_w*16), 12, output_cgra_s1_r_x, 0)*input_cgra.stencil(12, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil((output_cgra_s1_w_w*16), 13, output_cgra_s1_r_x, 0)*input_cgra.stencil(13, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil((output_cgra_s1_w_w*16), 15, output_cgra_s1_r_x, 0)*input_cgra.stencil(15, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil((output_cgra_s1_w_w*16), 14, output_cgra_s1_r_x, 0)*input_cgra.stencil(14, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_16(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_1 = (int16_t) (input_cgra_stencil.extract<0, 15>());
  int16_t _input_cgra_stencil_10 = (int16_t) (input_cgra_stencil.extract<16, 31>());
  int16_t _input_cgra_stencil_11 = (int16_t) (input_cgra_stencil.extract<32, 47>());
  int16_t _input_cgra_stencil_12 = (int16_t) (input_cgra_stencil.extract<48, 63>());
  int16_t _input_cgra_stencil_13 = (int16_t) (input_cgra_stencil.extract<64, 79>());
  int16_t _input_cgra_stencil_14 = (int16_t) (input_cgra_stencil.extract<80, 95>());
  int16_t _input_cgra_stencil_15 = (int16_t) (input_cgra_stencil.extract<96, 111>());
  int16_t _input_cgra_stencil_16 = (int16_t) (input_cgra_stencil.extract<112, 127>());
  int16_t _input_cgra_stencil_2 = (int16_t) (input_cgra_stencil.extract<128, 143>());
  int16_t _input_cgra_stencil_3 = (int16_t) (input_cgra_stencil.extract<144, 159>());
  int16_t _input_cgra_stencil_4 = (int16_t) (input_cgra_stencil.extract<160, 175>());
  int16_t _input_cgra_stencil_5 = (int16_t) (input_cgra_stencil.extract<176, 191>());
  int16_t _input_cgra_stencil_6 = (int16_t) (input_cgra_stencil.extract<192, 207>());
  int16_t _input_cgra_stencil_7 = (int16_t) (input_cgra_stencil.extract<208, 223>());
  int16_t _input_cgra_stencil_8 = (int16_t) (input_cgra_stencil.extract<224, 239>());
  int16_t _input_cgra_stencil_9 = (int16_t) (input_cgra_stencil.extract<240, 255>());

  int16_t _kernel_cgra_stencil_1 = (int16_t) (kernel_cgra_stencil.extract<0, 15>());
  int16_t _kernel_cgra_stencil_10 = (int16_t) (kernel_cgra_stencil.extract<16, 31>());
  int16_t _kernel_cgra_stencil_11 = (int16_t) (kernel_cgra_stencil.extract<32, 47>());
  int16_t _kernel_cgra_stencil_12 = (int16_t) (kernel_cgra_stencil.extract<48, 63>());
  int16_t _kernel_cgra_stencil_13 = (int16_t) (kernel_cgra_stencil.extract<64, 79>());
  int16_t _kernel_cgra_stencil_14 = (int16_t) (kernel_cgra_stencil.extract<80, 95>());
  int16_t _kernel_cgra_stencil_15 = (int16_t) (kernel_cgra_stencil.extract<96, 111>());
  int16_t _kernel_cgra_stencil_16 = (int16_t) (kernel_cgra_stencil.extract<112, 127>());
  int16_t _kernel_cgra_stencil_2 = (int16_t) (kernel_cgra_stencil.extract<128, 143>());
  int16_t _kernel_cgra_stencil_3 = (int16_t) (kernel_cgra_stencil.extract<144, 159>());
  int16_t _kernel_cgra_stencil_4 = (int16_t) (kernel_cgra_stencil.extract<160, 175>());
  int16_t _kernel_cgra_stencil_5 = (int16_t) (kernel_cgra_stencil.extract<176, 191>());
  int16_t _kernel_cgra_stencil_6 = (int16_t) (kernel_cgra_stencil.extract<192, 207>());
  int16_t _kernel_cgra_stencil_7 = (int16_t) (kernel_cgra_stencil.extract<208, 223>());
  int16_t _kernel_cgra_stencil_8 = (int16_t) (kernel_cgra_stencil.extract<224, 239>());
  int16_t _kernel_cgra_stencil_9 = (int16_t) (kernel_cgra_stencil.extract<240, 255>());

  int16_t _output_cgra_stencil_1 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _941 = _kernel_cgra_stencil_1 * _input_cgra_stencil_1;
  int16_t _942 = _kernel_cgra_stencil_2 * _input_cgra_stencil_2;
  int16_t _943 = _kernel_cgra_stencil_3 * _input_cgra_stencil_3;
  int16_t _944 = _kernel_cgra_stencil_4 * _input_cgra_stencil_4;
  int16_t _945 = _kernel_cgra_stencil_5 * _input_cgra_stencil_5;
  int16_t _946 = _kernel_cgra_stencil_6 * _input_cgra_stencil_6;
  int16_t _947 = _kernel_cgra_stencil_7 * _input_cgra_stencil_7;
  int16_t _948 = _kernel_cgra_stencil_8 * _input_cgra_stencil_8;
  int16_t _949 = _kernel_cgra_stencil_9 * _input_cgra_stencil_9;
  int16_t _950 = _kernel_cgra_stencil_10 * _input_cgra_stencil_10;
  int16_t _951 = _kernel_cgra_stencil_11 * _input_cgra_stencil_11;
  int16_t _952 = _kernel_cgra_stencil_12 * _input_cgra_stencil_12;
  int16_t _953 = _kernel_cgra_stencil_13 * _input_cgra_stencil_13;
  int16_t _954 = _kernel_cgra_stencil_14 * _input_cgra_stencil_14;
  int16_t _955 = _kernel_cgra_stencil_15 * _input_cgra_stencil_15;
  int16_t _956 = _kernel_cgra_stencil_16 * _input_cgra_stencil_16;
  int16_t _957 = _955 + _956;
  int16_t _958 = _954 + _957;
  int16_t _959 = _953 + _958;
  int16_t _960 = _952 + _959;
  int16_t _961 = _951 + _960;
  int16_t _962 = _950 + _961;
  int16_t _963 = _949 + _962;
  int16_t _964 = _948 + _963;
  int16_t _965 = _947 + _964;
  int16_t _966 = _946 + _965;
  int16_t _967 = _945 + _966;
  int16_t _968 = _944 + _967;
  int16_t _969 = _943 + _968;
  int16_t _970 = _942 + _969;
  int16_t _971 = _output_cgra_stencil_1 + _970;
  int16_t _972 = _941 + _971;
  return _972;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w*16) + 1), output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 1), 0, output_cgra_s1_r_x, 0)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(((output_cgra_s1_w_w*16) + 1), output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 1), 1, output_cgra_s1_r_x, 0)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 1), 2, output_cgra_s1_r_x, 0)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 1), 3, output_cgra_s1_r_x, 0)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 1), 4, output_cgra_s1_r_x, 0)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 1), 5, output_cgra_s1_r_x, 0)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 1), 6, output_cgra_s1_r_x, 0)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 1), 7, output_cgra_s1_r_x, 0)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 1), 8, output_cgra_s1_r_x, 0)*input_cgra.stencil(8, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 1), 9, output_cgra_s1_r_x, 0)*input_cgra.stencil(9, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 1), 10, output_cgra_s1_r_x, 0)*input_cgra.stencil(10, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 1), 11, output_cgra_s1_r_x, 0)*input_cgra.stencil(11, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 1), 12, output_cgra_s1_r_x, 0)*input_cgra.stencil(12, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 1), 13, output_cgra_s1_r_x, 0)*input_cgra.stencil(13, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 1), 15, output_cgra_s1_r_x, 0)*input_cgra.stencil(15, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 1), 14, output_cgra_s1_r_x, 0)*input_cgra.stencil(14, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_17(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_17 = (int16_t) (input_cgra_stencil.extract<0, 15>());
  int16_t _input_cgra_stencil_18 = (int16_t) (input_cgra_stencil.extract<16, 31>());
  int16_t _input_cgra_stencil_19 = (int16_t) (input_cgra_stencil.extract<32, 47>());
  int16_t _input_cgra_stencil_20 = (int16_t) (input_cgra_stencil.extract<48, 63>());
  int16_t _input_cgra_stencil_21 = (int16_t) (input_cgra_stencil.extract<64, 79>());
  int16_t _input_cgra_stencil_22 = (int16_t) (input_cgra_stencil.extract<80, 95>());
  int16_t _input_cgra_stencil_23 = (int16_t) (input_cgra_stencil.extract<96, 111>());
  int16_t _input_cgra_stencil_24 = (int16_t) (input_cgra_stencil.extract<112, 127>());
  int16_t _input_cgra_stencil_25 = (int16_t) (input_cgra_stencil.extract<128, 143>());
  int16_t _input_cgra_stencil_26 = (int16_t) (input_cgra_stencil.extract<144, 159>());
  int16_t _input_cgra_stencil_27 = (int16_t) (input_cgra_stencil.extract<160, 175>());
  int16_t _input_cgra_stencil_28 = (int16_t) (input_cgra_stencil.extract<176, 191>());
  int16_t _input_cgra_stencil_29 = (int16_t) (input_cgra_stencil.extract<192, 207>());
  int16_t _input_cgra_stencil_30 = (int16_t) (input_cgra_stencil.extract<208, 223>());
  int16_t _input_cgra_stencil_31 = (int16_t) (input_cgra_stencil.extract<224, 239>());
  int16_t _input_cgra_stencil_32 = (int16_t) (input_cgra_stencil.extract<240, 255>());

  int16_t _kernel_cgra_stencil_17 = (int16_t) (kernel_cgra_stencil.extract<0, 15>());
  int16_t _kernel_cgra_stencil_18 = (int16_t) (kernel_cgra_stencil.extract<16, 31>());
  int16_t _kernel_cgra_stencil_19 = (int16_t) (kernel_cgra_stencil.extract<32, 47>());
  int16_t _kernel_cgra_stencil_20 = (int16_t) (kernel_cgra_stencil.extract<48, 63>());
  int16_t _kernel_cgra_stencil_21 = (int16_t) (kernel_cgra_stencil.extract<64, 79>());
  int16_t _kernel_cgra_stencil_22 = (int16_t) (kernel_cgra_stencil.extract<80, 95>());
  int16_t _kernel_cgra_stencil_23 = (int16_t) (kernel_cgra_stencil.extract<96, 111>());
  int16_t _kernel_cgra_stencil_24 = (int16_t) (kernel_cgra_stencil.extract<112, 127>());
  int16_t _kernel_cgra_stencil_25 = (int16_t) (kernel_cgra_stencil.extract<128, 143>());
  int16_t _kernel_cgra_stencil_26 = (int16_t) (kernel_cgra_stencil.extract<144, 159>());
  int16_t _kernel_cgra_stencil_27 = (int16_t) (kernel_cgra_stencil.extract<160, 175>());
  int16_t _kernel_cgra_stencil_28 = (int16_t) (kernel_cgra_stencil.extract<176, 191>());
  int16_t _kernel_cgra_stencil_29 = (int16_t) (kernel_cgra_stencil.extract<192, 207>());
  int16_t _kernel_cgra_stencil_30 = (int16_t) (kernel_cgra_stencil.extract<208, 223>());
  int16_t _kernel_cgra_stencil_31 = (int16_t) (kernel_cgra_stencil.extract<224, 239>());
  int16_t _kernel_cgra_stencil_32 = (int16_t) (kernel_cgra_stencil.extract<240, 255>());

  int16_t _output_cgra_stencil_2 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _1073 = _kernel_cgra_stencil_17 * _input_cgra_stencil_17;
  int16_t _1074 = _kernel_cgra_stencil_18 * _input_cgra_stencil_18;
  int16_t _1075 = _kernel_cgra_stencil_19 * _input_cgra_stencil_19;
  int16_t _1076 = _kernel_cgra_stencil_20 * _input_cgra_stencil_20;
  int16_t _1077 = _kernel_cgra_stencil_21 * _input_cgra_stencil_21;
  int16_t _1078 = _kernel_cgra_stencil_22 * _input_cgra_stencil_22;
  int16_t _1079 = _kernel_cgra_stencil_23 * _input_cgra_stencil_23;
  int16_t _1080 = _kernel_cgra_stencil_24 * _input_cgra_stencil_24;
  int16_t _1081 = _kernel_cgra_stencil_25 * _input_cgra_stencil_25;
  int16_t _1082 = _kernel_cgra_stencil_26 * _input_cgra_stencil_26;
  int16_t _1083 = _kernel_cgra_stencil_27 * _input_cgra_stencil_27;
  int16_t _1084 = _kernel_cgra_stencil_28 * _input_cgra_stencil_28;
  int16_t _1085 = _kernel_cgra_stencil_29 * _input_cgra_stencil_29;
  int16_t _1086 = _kernel_cgra_stencil_30 * _input_cgra_stencil_30;
  int16_t _1087 = _kernel_cgra_stencil_31 * _input_cgra_stencil_31;
  int16_t _1088 = _kernel_cgra_stencil_32 * _input_cgra_stencil_32;
  int16_t _1089 = _1087 + _1088;
  int16_t _1090 = _1086 + _1089;
  int16_t _1091 = _1085 + _1090;
  int16_t _1092 = _1084 + _1091;
  int16_t _1093 = _1083 + _1092;
  int16_t _1094 = _1082 + _1093;
  int16_t _1095 = _1081 + _1094;
  int16_t _1096 = _1080 + _1095;
  int16_t _1097 = _1079 + _1096;
  int16_t _1098 = _1078 + _1097;
  int16_t _1099 = _1077 + _1098;
  int16_t _1100 = _1076 + _1099;
  int16_t _1101 = _1075 + _1100;
  int16_t _1102 = _1074 + _1101;
  int16_t _1103 = _output_cgra_stencil_2 + _1102;
  int16_t _1104 = _1073 + _1103;
  return _1104;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w*16) + 2), output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 2), 0, output_cgra_s1_r_x, 0)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(((output_cgra_s1_w_w*16) + 2), output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 2), 1, output_cgra_s1_r_x, 0)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 2), 2, output_cgra_s1_r_x, 0)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 2), 3, output_cgra_s1_r_x, 0)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 2), 4, output_cgra_s1_r_x, 0)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 2), 5, output_cgra_s1_r_x, 0)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 2), 6, output_cgra_s1_r_x, 0)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 2), 7, output_cgra_s1_r_x, 0)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 2), 8, output_cgra_s1_r_x, 0)*input_cgra.stencil(8, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 2), 9, output_cgra_s1_r_x, 0)*input_cgra.stencil(9, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 2), 10, output_cgra_s1_r_x, 0)*input_cgra.stencil(10, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 2), 11, output_cgra_s1_r_x, 0)*input_cgra.stencil(11, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 2), 12, output_cgra_s1_r_x, 0)*input_cgra.stencil(12, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 2), 13, output_cgra_s1_r_x, 0)*input_cgra.stencil(13, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 2), 15, output_cgra_s1_r_x, 0)*input_cgra.stencil(15, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 2), 14, output_cgra_s1_r_x, 0)*input_cgra.stencil(14, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_18(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_33 = (int16_t) (input_cgra_stencil.extract<0, 15>());
  int16_t _input_cgra_stencil_34 = (int16_t) (input_cgra_stencil.extract<16, 31>());
  int16_t _input_cgra_stencil_35 = (int16_t) (input_cgra_stencil.extract<32, 47>());
  int16_t _input_cgra_stencil_36 = (int16_t) (input_cgra_stencil.extract<48, 63>());
  int16_t _input_cgra_stencil_37 = (int16_t) (input_cgra_stencil.extract<64, 79>());
  int16_t _input_cgra_stencil_38 = (int16_t) (input_cgra_stencil.extract<80, 95>());
  int16_t _input_cgra_stencil_39 = (int16_t) (input_cgra_stencil.extract<96, 111>());
  int16_t _input_cgra_stencil_40 = (int16_t) (input_cgra_stencil.extract<112, 127>());
  int16_t _input_cgra_stencil_41 = (int16_t) (input_cgra_stencil.extract<128, 143>());
  int16_t _input_cgra_stencil_42 = (int16_t) (input_cgra_stencil.extract<144, 159>());
  int16_t _input_cgra_stencil_43 = (int16_t) (input_cgra_stencil.extract<160, 175>());
  int16_t _input_cgra_stencil_44 = (int16_t) (input_cgra_stencil.extract<176, 191>());
  int16_t _input_cgra_stencil_45 = (int16_t) (input_cgra_stencil.extract<192, 207>());
  int16_t _input_cgra_stencil_46 = (int16_t) (input_cgra_stencil.extract<208, 223>());
  int16_t _input_cgra_stencil_47 = (int16_t) (input_cgra_stencil.extract<224, 239>());
  int16_t _input_cgra_stencil_48 = (int16_t) (input_cgra_stencil.extract<240, 255>());

  int16_t _kernel_cgra_stencil_33 = (int16_t) (kernel_cgra_stencil.extract<0, 15>());
  int16_t _kernel_cgra_stencil_34 = (int16_t) (kernel_cgra_stencil.extract<16, 31>());
  int16_t _kernel_cgra_stencil_35 = (int16_t) (kernel_cgra_stencil.extract<32, 47>());
  int16_t _kernel_cgra_stencil_36 = (int16_t) (kernel_cgra_stencil.extract<48, 63>());
  int16_t _kernel_cgra_stencil_37 = (int16_t) (kernel_cgra_stencil.extract<64, 79>());
  int16_t _kernel_cgra_stencil_38 = (int16_t) (kernel_cgra_stencil.extract<80, 95>());
  int16_t _kernel_cgra_stencil_39 = (int16_t) (kernel_cgra_stencil.extract<96, 111>());
  int16_t _kernel_cgra_stencil_40 = (int16_t) (kernel_cgra_stencil.extract<112, 127>());
  int16_t _kernel_cgra_stencil_41 = (int16_t) (kernel_cgra_stencil.extract<128, 143>());
  int16_t _kernel_cgra_stencil_42 = (int16_t) (kernel_cgra_stencil.extract<144, 159>());
  int16_t _kernel_cgra_stencil_43 = (int16_t) (kernel_cgra_stencil.extract<160, 175>());
  int16_t _kernel_cgra_stencil_44 = (int16_t) (kernel_cgra_stencil.extract<176, 191>());
  int16_t _kernel_cgra_stencil_45 = (int16_t) (kernel_cgra_stencil.extract<192, 207>());
  int16_t _kernel_cgra_stencil_46 = (int16_t) (kernel_cgra_stencil.extract<208, 223>());
  int16_t _kernel_cgra_stencil_47 = (int16_t) (kernel_cgra_stencil.extract<224, 239>());
  int16_t _kernel_cgra_stencil_48 = (int16_t) (kernel_cgra_stencil.extract<240, 255>());

  int16_t _output_cgra_stencil_3 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _1206 = _kernel_cgra_stencil_33 * _input_cgra_stencil_33;
  int16_t _1207 = _kernel_cgra_stencil_34 * _input_cgra_stencil_34;
  int16_t _1208 = _kernel_cgra_stencil_35 * _input_cgra_stencil_35;
  int16_t _1209 = _kernel_cgra_stencil_36 * _input_cgra_stencil_36;
  int16_t _1210 = _kernel_cgra_stencil_37 * _input_cgra_stencil_37;
  int16_t _1211 = _kernel_cgra_stencil_38 * _input_cgra_stencil_38;
  int16_t _1212 = _kernel_cgra_stencil_39 * _input_cgra_stencil_39;
  int16_t _1213 = _kernel_cgra_stencil_40 * _input_cgra_stencil_40;
  int16_t _1214 = _kernel_cgra_stencil_41 * _input_cgra_stencil_41;
  int16_t _1215 = _kernel_cgra_stencil_42 * _input_cgra_stencil_42;
  int16_t _1216 = _kernel_cgra_stencil_43 * _input_cgra_stencil_43;
  int16_t _1217 = _kernel_cgra_stencil_44 * _input_cgra_stencil_44;
  int16_t _1218 = _kernel_cgra_stencil_45 * _input_cgra_stencil_45;
  int16_t _1219 = _kernel_cgra_stencil_46 * _input_cgra_stencil_46;
  int16_t _1220 = _kernel_cgra_stencil_47 * _input_cgra_stencil_47;
  int16_t _1221 = _kernel_cgra_stencil_48 * _input_cgra_stencil_48;
  int16_t _1222 = _1220 + _1221;
  int16_t _1223 = _1219 + _1222;
  int16_t _1224 = _1218 + _1223;
  int16_t _1225 = _1217 + _1224;
  int16_t _1226 = _1216 + _1225;
  int16_t _1227 = _1215 + _1226;
  int16_t _1228 = _1214 + _1227;
  int16_t _1229 = _1213 + _1228;
  int16_t _1230 = _1212 + _1229;
  int16_t _1231 = _1211 + _1230;
  int16_t _1232 = _1210 + _1231;
  int16_t _1233 = _1209 + _1232;
  int16_t _1234 = _1208 + _1233;
  int16_t _1235 = _1207 + _1234;
  int16_t _1236 = _output_cgra_stencil_3 + _1235;
  int16_t _1237 = _1206 + _1236;
  return _1237;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w*16) + 3), output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 3), 0, output_cgra_s1_r_x, 0)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(((output_cgra_s1_w_w*16) + 3), output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 3), 1, output_cgra_s1_r_x, 0)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 3), 2, output_cgra_s1_r_x, 0)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 3), 3, output_cgra_s1_r_x, 0)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 3), 4, output_cgra_s1_r_x, 0)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 3), 5, output_cgra_s1_r_x, 0)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 3), 6, output_cgra_s1_r_x, 0)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 3), 7, output_cgra_s1_r_x, 0)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 3), 8, output_cgra_s1_r_x, 0)*input_cgra.stencil(8, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 3), 9, output_cgra_s1_r_x, 0)*input_cgra.stencil(9, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 3), 10, output_cgra_s1_r_x, 0)*input_cgra.stencil(10, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 3), 11, output_cgra_s1_r_x, 0)*input_cgra.stencil(11, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 3), 12, output_cgra_s1_r_x, 0)*input_cgra.stencil(12, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 3), 13, output_cgra_s1_r_x, 0)*input_cgra.stencil(13, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 3), 15, output_cgra_s1_r_x, 0)*input_cgra.stencil(15, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 3), 14, output_cgra_s1_r_x, 0)*input_cgra.stencil(14, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_19(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_49 = (int16_t) (input_cgra_stencil.extract<0, 15>());
  int16_t _input_cgra_stencil_50 = (int16_t) (input_cgra_stencil.extract<16, 31>());
  int16_t _input_cgra_stencil_51 = (int16_t) (input_cgra_stencil.extract<32, 47>());
  int16_t _input_cgra_stencil_52 = (int16_t) (input_cgra_stencil.extract<48, 63>());
  int16_t _input_cgra_stencil_53 = (int16_t) (input_cgra_stencil.extract<64, 79>());
  int16_t _input_cgra_stencil_54 = (int16_t) (input_cgra_stencil.extract<80, 95>());
  int16_t _input_cgra_stencil_55 = (int16_t) (input_cgra_stencil.extract<96, 111>());
  int16_t _input_cgra_stencil_56 = (int16_t) (input_cgra_stencil.extract<112, 127>());
  int16_t _input_cgra_stencil_57 = (int16_t) (input_cgra_stencil.extract<128, 143>());
  int16_t _input_cgra_stencil_58 = (int16_t) (input_cgra_stencil.extract<144, 159>());
  int16_t _input_cgra_stencil_59 = (int16_t) (input_cgra_stencil.extract<160, 175>());
  int16_t _input_cgra_stencil_60 = (int16_t) (input_cgra_stencil.extract<176, 191>());
  int16_t _input_cgra_stencil_61 = (int16_t) (input_cgra_stencil.extract<192, 207>());
  int16_t _input_cgra_stencil_62 = (int16_t) (input_cgra_stencil.extract<208, 223>());
  int16_t _input_cgra_stencil_63 = (int16_t) (input_cgra_stencil.extract<224, 239>());
  int16_t _input_cgra_stencil_64 = (int16_t) (input_cgra_stencil.extract<240, 255>());

  int16_t _kernel_cgra_stencil_49 = (int16_t) (kernel_cgra_stencil.extract<0, 15>());
  int16_t _kernel_cgra_stencil_50 = (int16_t) (kernel_cgra_stencil.extract<16, 31>());
  int16_t _kernel_cgra_stencil_51 = (int16_t) (kernel_cgra_stencil.extract<32, 47>());
  int16_t _kernel_cgra_stencil_52 = (int16_t) (kernel_cgra_stencil.extract<48, 63>());
  int16_t _kernel_cgra_stencil_53 = (int16_t) (kernel_cgra_stencil.extract<64, 79>());
  int16_t _kernel_cgra_stencil_54 = (int16_t) (kernel_cgra_stencil.extract<80, 95>());
  int16_t _kernel_cgra_stencil_55 = (int16_t) (kernel_cgra_stencil.extract<96, 111>());
  int16_t _kernel_cgra_stencil_56 = (int16_t) (kernel_cgra_stencil.extract<112, 127>());
  int16_t _kernel_cgra_stencil_57 = (int16_t) (kernel_cgra_stencil.extract<128, 143>());
  int16_t _kernel_cgra_stencil_58 = (int16_t) (kernel_cgra_stencil.extract<144, 159>());
  int16_t _kernel_cgra_stencil_59 = (int16_t) (kernel_cgra_stencil.extract<160, 175>());
  int16_t _kernel_cgra_stencil_60 = (int16_t) (kernel_cgra_stencil.extract<176, 191>());
  int16_t _kernel_cgra_stencil_61 = (int16_t) (kernel_cgra_stencil.extract<192, 207>());
  int16_t _kernel_cgra_stencil_62 = (int16_t) (kernel_cgra_stencil.extract<208, 223>());
  int16_t _kernel_cgra_stencil_63 = (int16_t) (kernel_cgra_stencil.extract<224, 239>());
  int16_t _kernel_cgra_stencil_64 = (int16_t) (kernel_cgra_stencil.extract<240, 255>());

  int16_t _output_cgra_stencil_4 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _1339 = _kernel_cgra_stencil_49 * _input_cgra_stencil_49;
  int16_t _1340 = _kernel_cgra_stencil_50 * _input_cgra_stencil_50;
  int16_t _1341 = _kernel_cgra_stencil_51 * _input_cgra_stencil_51;
  int16_t _1342 = _kernel_cgra_stencil_52 * _input_cgra_stencil_52;
  int16_t _1343 = _kernel_cgra_stencil_53 * _input_cgra_stencil_53;
  int16_t _1344 = _kernel_cgra_stencil_54 * _input_cgra_stencil_54;
  int16_t _1345 = _kernel_cgra_stencil_55 * _input_cgra_stencil_55;
  int16_t _1346 = _kernel_cgra_stencil_56 * _input_cgra_stencil_56;
  int16_t _1347 = _kernel_cgra_stencil_57 * _input_cgra_stencil_57;
  int16_t _1348 = _kernel_cgra_stencil_58 * _input_cgra_stencil_58;
  int16_t _1349 = _kernel_cgra_stencil_59 * _input_cgra_stencil_59;
  int16_t _1350 = _kernel_cgra_stencil_60 * _input_cgra_stencil_60;
  int16_t _1351 = _kernel_cgra_stencil_61 * _input_cgra_stencil_61;
  int16_t _1352 = _kernel_cgra_stencil_62 * _input_cgra_stencil_62;
  int16_t _1353 = _kernel_cgra_stencil_63 * _input_cgra_stencil_63;
  int16_t _1354 = _kernel_cgra_stencil_64 * _input_cgra_stencil_64;
  int16_t _1355 = _1353 + _1354;
  int16_t _1356 = _1352 + _1355;
  int16_t _1357 = _1351 + _1356;
  int16_t _1358 = _1350 + _1357;
  int16_t _1359 = _1349 + _1358;
  int16_t _1360 = _1348 + _1359;
  int16_t _1361 = _1347 + _1360;
  int16_t _1362 = _1346 + _1361;
  int16_t _1363 = _1345 + _1362;
  int16_t _1364 = _1344 + _1363;
  int16_t _1365 = _1343 + _1364;
  int16_t _1366 = _1342 + _1365;
  int16_t _1367 = _1341 + _1366;
  int16_t _1368 = _1340 + _1367;
  int16_t _1369 = _output_cgra_stencil_4 + _1368;
  int16_t _1370 = _1339 + _1369;
  return _1370;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w*16) + 4), output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 4), 0, output_cgra_s1_r_x, 0)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(((output_cgra_s1_w_w*16) + 4), output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 4), 1, output_cgra_s1_r_x, 0)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 4), 2, output_cgra_s1_r_x, 0)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 4), 3, output_cgra_s1_r_x, 0)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 4), 4, output_cgra_s1_r_x, 0)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 4), 5, output_cgra_s1_r_x, 0)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 4), 6, output_cgra_s1_r_x, 0)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 4), 7, output_cgra_s1_r_x, 0)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 4), 8, output_cgra_s1_r_x, 0)*input_cgra.stencil(8, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 4), 9, output_cgra_s1_r_x, 0)*input_cgra.stencil(9, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 4), 10, output_cgra_s1_r_x, 0)*input_cgra.stencil(10, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 4), 11, output_cgra_s1_r_x, 0)*input_cgra.stencil(11, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 4), 12, output_cgra_s1_r_x, 0)*input_cgra.stencil(12, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 4), 13, output_cgra_s1_r_x, 0)*input_cgra.stencil(13, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 4), 15, output_cgra_s1_r_x, 0)*input_cgra.stencil(15, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 4), 14, output_cgra_s1_r_x, 0)*input_cgra.stencil(14, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_20(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_65 = (int16_t) (input_cgra_stencil.extract<0, 15>());
  int16_t _input_cgra_stencil_66 = (int16_t) (input_cgra_stencil.extract<16, 31>());
  int16_t _input_cgra_stencil_67 = (int16_t) (input_cgra_stencil.extract<32, 47>());
  int16_t _input_cgra_stencil_68 = (int16_t) (input_cgra_stencil.extract<48, 63>());
  int16_t _input_cgra_stencil_69 = (int16_t) (input_cgra_stencil.extract<64, 79>());
  int16_t _input_cgra_stencil_70 = (int16_t) (input_cgra_stencil.extract<80, 95>());
  int16_t _input_cgra_stencil_71 = (int16_t) (input_cgra_stencil.extract<96, 111>());
  int16_t _input_cgra_stencil_72 = (int16_t) (input_cgra_stencil.extract<112, 127>());
  int16_t _input_cgra_stencil_73 = (int16_t) (input_cgra_stencil.extract<128, 143>());
  int16_t _input_cgra_stencil_74 = (int16_t) (input_cgra_stencil.extract<144, 159>());
  int16_t _input_cgra_stencil_75 = (int16_t) (input_cgra_stencil.extract<160, 175>());
  int16_t _input_cgra_stencil_76 = (int16_t) (input_cgra_stencil.extract<176, 191>());
  int16_t _input_cgra_stencil_77 = (int16_t) (input_cgra_stencil.extract<192, 207>());
  int16_t _input_cgra_stencil_78 = (int16_t) (input_cgra_stencil.extract<208, 223>());
  int16_t _input_cgra_stencil_79 = (int16_t) (input_cgra_stencil.extract<224, 239>());
  int16_t _input_cgra_stencil_80 = (int16_t) (input_cgra_stencil.extract<240, 255>());

  int16_t _kernel_cgra_stencil_65 = (int16_t) (kernel_cgra_stencil.extract<0, 15>());
  int16_t _kernel_cgra_stencil_66 = (int16_t) (kernel_cgra_stencil.extract<16, 31>());
  int16_t _kernel_cgra_stencil_67 = (int16_t) (kernel_cgra_stencil.extract<32, 47>());
  int16_t _kernel_cgra_stencil_68 = (int16_t) (kernel_cgra_stencil.extract<48, 63>());
  int16_t _kernel_cgra_stencil_69 = (int16_t) (kernel_cgra_stencil.extract<64, 79>());
  int16_t _kernel_cgra_stencil_70 = (int16_t) (kernel_cgra_stencil.extract<80, 95>());
  int16_t _kernel_cgra_stencil_71 = (int16_t) (kernel_cgra_stencil.extract<96, 111>());
  int16_t _kernel_cgra_stencil_72 = (int16_t) (kernel_cgra_stencil.extract<112, 127>());
  int16_t _kernel_cgra_stencil_73 = (int16_t) (kernel_cgra_stencil.extract<128, 143>());
  int16_t _kernel_cgra_stencil_74 = (int16_t) (kernel_cgra_stencil.extract<144, 159>());
  int16_t _kernel_cgra_stencil_75 = (int16_t) (kernel_cgra_stencil.extract<160, 175>());
  int16_t _kernel_cgra_stencil_76 = (int16_t) (kernel_cgra_stencil.extract<176, 191>());
  int16_t _kernel_cgra_stencil_77 = (int16_t) (kernel_cgra_stencil.extract<192, 207>());
  int16_t _kernel_cgra_stencil_78 = (int16_t) (kernel_cgra_stencil.extract<208, 223>());
  int16_t _kernel_cgra_stencil_79 = (int16_t) (kernel_cgra_stencil.extract<224, 239>());
  int16_t _kernel_cgra_stencil_80 = (int16_t) (kernel_cgra_stencil.extract<240, 255>());

  int16_t _output_cgra_stencil_5 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _1472 = _kernel_cgra_stencil_65 * _input_cgra_stencil_65;
  int16_t _1473 = _kernel_cgra_stencil_66 * _input_cgra_stencil_66;
  int16_t _1474 = _kernel_cgra_stencil_67 * _input_cgra_stencil_67;
  int16_t _1475 = _kernel_cgra_stencil_68 * _input_cgra_stencil_68;
  int16_t _1476 = _kernel_cgra_stencil_69 * _input_cgra_stencil_69;
  int16_t _1477 = _kernel_cgra_stencil_70 * _input_cgra_stencil_70;
  int16_t _1478 = _kernel_cgra_stencil_71 * _input_cgra_stencil_71;
  int16_t _1479 = _kernel_cgra_stencil_72 * _input_cgra_stencil_72;
  int16_t _1480 = _kernel_cgra_stencil_73 * _input_cgra_stencil_73;
  int16_t _1481 = _kernel_cgra_stencil_74 * _input_cgra_stencil_74;
  int16_t _1482 = _kernel_cgra_stencil_75 * _input_cgra_stencil_75;
  int16_t _1483 = _kernel_cgra_stencil_76 * _input_cgra_stencil_76;
  int16_t _1484 = _kernel_cgra_stencil_77 * _input_cgra_stencil_77;
  int16_t _1485 = _kernel_cgra_stencil_78 * _input_cgra_stencil_78;
  int16_t _1486 = _kernel_cgra_stencil_79 * _input_cgra_stencil_79;
  int16_t _1487 = _kernel_cgra_stencil_80 * _input_cgra_stencil_80;
  int16_t _1488 = _1486 + _1487;
  int16_t _1489 = _1485 + _1488;
  int16_t _1490 = _1484 + _1489;
  int16_t _1491 = _1483 + _1490;
  int16_t _1492 = _1482 + _1491;
  int16_t _1493 = _1481 + _1492;
  int16_t _1494 = _1480 + _1493;
  int16_t _1495 = _1479 + _1494;
  int16_t _1496 = _1478 + _1495;
  int16_t _1497 = _1477 + _1496;
  int16_t _1498 = _1476 + _1497;
  int16_t _1499 = _1475 + _1498;
  int16_t _1500 = _1474 + _1499;
  int16_t _1501 = _1473 + _1500;
  int16_t _1502 = _output_cgra_stencil_5 + _1501;
  int16_t _1503 = _1472 + _1502;
  return _1503;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w*16) + 5), output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 5), 0, output_cgra_s1_r_x, 0)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(((output_cgra_s1_w_w*16) + 5), output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 5), 1, output_cgra_s1_r_x, 0)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 5), 2, output_cgra_s1_r_x, 0)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 5), 3, output_cgra_s1_r_x, 0)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 5), 4, output_cgra_s1_r_x, 0)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 5), 5, output_cgra_s1_r_x, 0)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 5), 6, output_cgra_s1_r_x, 0)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 5), 7, output_cgra_s1_r_x, 0)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 5), 8, output_cgra_s1_r_x, 0)*input_cgra.stencil(8, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 5), 9, output_cgra_s1_r_x, 0)*input_cgra.stencil(9, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 5), 10, output_cgra_s1_r_x, 0)*input_cgra.stencil(10, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 5), 11, output_cgra_s1_r_x, 0)*input_cgra.stencil(11, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 5), 12, output_cgra_s1_r_x, 0)*input_cgra.stencil(12, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 5), 13, output_cgra_s1_r_x, 0)*input_cgra.stencil(13, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 5), 15, output_cgra_s1_r_x, 0)*input_cgra.stencil(15, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 5), 14, output_cgra_s1_r_x, 0)*input_cgra.stencil(14, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_21(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_81 = (int16_t) (input_cgra_stencil.extract<0, 15>());
  int16_t _input_cgra_stencil_82 = (int16_t) (input_cgra_stencil.extract<16, 31>());
  int16_t _input_cgra_stencil_83 = (int16_t) (input_cgra_stencil.extract<32, 47>());
  int16_t _input_cgra_stencil_84 = (int16_t) (input_cgra_stencil.extract<48, 63>());
  int16_t _input_cgra_stencil_85 = (int16_t) (input_cgra_stencil.extract<64, 79>());
  int16_t _input_cgra_stencil_86 = (int16_t) (input_cgra_stencil.extract<80, 95>());
  int16_t _input_cgra_stencil_87 = (int16_t) (input_cgra_stencil.extract<96, 111>());
  int16_t _input_cgra_stencil_88 = (int16_t) (input_cgra_stencil.extract<112, 127>());
  int16_t _input_cgra_stencil_89 = (int16_t) (input_cgra_stencil.extract<128, 143>());
  int16_t _input_cgra_stencil_90 = (int16_t) (input_cgra_stencil.extract<144, 159>());
  int16_t _input_cgra_stencil_91 = (int16_t) (input_cgra_stencil.extract<160, 175>());
  int16_t _input_cgra_stencil_92 = (int16_t) (input_cgra_stencil.extract<176, 191>());
  int16_t _input_cgra_stencil_93 = (int16_t) (input_cgra_stencil.extract<192, 207>());
  int16_t _input_cgra_stencil_94 = (int16_t) (input_cgra_stencil.extract<208, 223>());
  int16_t _input_cgra_stencil_95 = (int16_t) (input_cgra_stencil.extract<224, 239>());
  int16_t _input_cgra_stencil_96 = (int16_t) (input_cgra_stencil.extract<240, 255>());

  int16_t _kernel_cgra_stencil_81 = (int16_t) (kernel_cgra_stencil.extract<0, 15>());
  int16_t _kernel_cgra_stencil_82 = (int16_t) (kernel_cgra_stencil.extract<16, 31>());
  int16_t _kernel_cgra_stencil_83 = (int16_t) (kernel_cgra_stencil.extract<32, 47>());
  int16_t _kernel_cgra_stencil_84 = (int16_t) (kernel_cgra_stencil.extract<48, 63>());
  int16_t _kernel_cgra_stencil_85 = (int16_t) (kernel_cgra_stencil.extract<64, 79>());
  int16_t _kernel_cgra_stencil_86 = (int16_t) (kernel_cgra_stencil.extract<80, 95>());
  int16_t _kernel_cgra_stencil_87 = (int16_t) (kernel_cgra_stencil.extract<96, 111>());
  int16_t _kernel_cgra_stencil_88 = (int16_t) (kernel_cgra_stencil.extract<112, 127>());
  int16_t _kernel_cgra_stencil_89 = (int16_t) (kernel_cgra_stencil.extract<128, 143>());
  int16_t _kernel_cgra_stencil_90 = (int16_t) (kernel_cgra_stencil.extract<144, 159>());
  int16_t _kernel_cgra_stencil_91 = (int16_t) (kernel_cgra_stencil.extract<160, 175>());
  int16_t _kernel_cgra_stencil_92 = (int16_t) (kernel_cgra_stencil.extract<176, 191>());
  int16_t _kernel_cgra_stencil_93 = (int16_t) (kernel_cgra_stencil.extract<192, 207>());
  int16_t _kernel_cgra_stencil_94 = (int16_t) (kernel_cgra_stencil.extract<208, 223>());
  int16_t _kernel_cgra_stencil_95 = (int16_t) (kernel_cgra_stencil.extract<224, 239>());
  int16_t _kernel_cgra_stencil_96 = (int16_t) (kernel_cgra_stencil.extract<240, 255>());

  int16_t _output_cgra_stencil_6 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _1605 = _kernel_cgra_stencil_81 * _input_cgra_stencil_81;
  int16_t _1606 = _kernel_cgra_stencil_82 * _input_cgra_stencil_82;
  int16_t _1607 = _kernel_cgra_stencil_83 * _input_cgra_stencil_83;
  int16_t _1608 = _kernel_cgra_stencil_84 * _input_cgra_stencil_84;
  int16_t _1609 = _kernel_cgra_stencil_85 * _input_cgra_stencil_85;
  int16_t _1610 = _kernel_cgra_stencil_86 * _input_cgra_stencil_86;
  int16_t _1611 = _kernel_cgra_stencil_87 * _input_cgra_stencil_87;
  int16_t _1612 = _kernel_cgra_stencil_88 * _input_cgra_stencil_88;
  int16_t _1613 = _kernel_cgra_stencil_89 * _input_cgra_stencil_89;
  int16_t _1614 = _kernel_cgra_stencil_90 * _input_cgra_stencil_90;
  int16_t _1615 = _kernel_cgra_stencil_91 * _input_cgra_stencil_91;
  int16_t _1616 = _kernel_cgra_stencil_92 * _input_cgra_stencil_92;
  int16_t _1617 = _kernel_cgra_stencil_93 * _input_cgra_stencil_93;
  int16_t _1618 = _kernel_cgra_stencil_94 * _input_cgra_stencil_94;
  int16_t _1619 = _kernel_cgra_stencil_95 * _input_cgra_stencil_95;
  int16_t _1620 = _kernel_cgra_stencil_96 * _input_cgra_stencil_96;
  int16_t _1621 = _1619 + _1620;
  int16_t _1622 = _1618 + _1621;
  int16_t _1623 = _1617 + _1622;
  int16_t _1624 = _1616 + _1623;
  int16_t _1625 = _1615 + _1624;
  int16_t _1626 = _1614 + _1625;
  int16_t _1627 = _1613 + _1626;
  int16_t _1628 = _1612 + _1627;
  int16_t _1629 = _1611 + _1628;
  int16_t _1630 = _1610 + _1629;
  int16_t _1631 = _1609 + _1630;
  int16_t _1632 = _1608 + _1631;
  int16_t _1633 = _1607 + _1632;
  int16_t _1634 = _1606 + _1633;
  int16_t _1635 = _output_cgra_stencil_6 + _1634;
  int16_t _1636 = _1605 + _1635;
  return _1636;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w*16) + 6), output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 6), 0, output_cgra_s1_r_x, 0)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(((output_cgra_s1_w_w*16) + 6), output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 6), 1, output_cgra_s1_r_x, 0)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 6), 2, output_cgra_s1_r_x, 0)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 6), 3, output_cgra_s1_r_x, 0)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 6), 4, output_cgra_s1_r_x, 0)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 6), 5, output_cgra_s1_r_x, 0)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 6), 6, output_cgra_s1_r_x, 0)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 6), 7, output_cgra_s1_r_x, 0)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 6), 8, output_cgra_s1_r_x, 0)*input_cgra.stencil(8, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 6), 9, output_cgra_s1_r_x, 0)*input_cgra.stencil(9, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 6), 10, output_cgra_s1_r_x, 0)*input_cgra.stencil(10, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 6), 11, output_cgra_s1_r_x, 0)*input_cgra.stencil(11, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 6), 12, output_cgra_s1_r_x, 0)*input_cgra.stencil(12, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 6), 13, output_cgra_s1_r_x, 0)*input_cgra.stencil(13, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 6), 15, output_cgra_s1_r_x, 0)*input_cgra.stencil(15, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 6), 14, output_cgra_s1_r_x, 0)*input_cgra.stencil(14, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_22(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_100 = (int16_t) (input_cgra_stencil.extract<0, 15>());
  int16_t _input_cgra_stencil_101 = (int16_t) (input_cgra_stencil.extract<16, 31>());
  int16_t _input_cgra_stencil_102 = (int16_t) (input_cgra_stencil.extract<32, 47>());
  int16_t _input_cgra_stencil_103 = (int16_t) (input_cgra_stencil.extract<48, 63>());
  int16_t _input_cgra_stencil_104 = (int16_t) (input_cgra_stencil.extract<64, 79>());
  int16_t _input_cgra_stencil_105 = (int16_t) (input_cgra_stencil.extract<80, 95>());
  int16_t _input_cgra_stencil_106 = (int16_t) (input_cgra_stencil.extract<96, 111>());
  int16_t _input_cgra_stencil_107 = (int16_t) (input_cgra_stencil.extract<112, 127>());
  int16_t _input_cgra_stencil_108 = (int16_t) (input_cgra_stencil.extract<128, 143>());
  int16_t _input_cgra_stencil_109 = (int16_t) (input_cgra_stencil.extract<144, 159>());
  int16_t _input_cgra_stencil_110 = (int16_t) (input_cgra_stencil.extract<160, 175>());
  int16_t _input_cgra_stencil_111 = (int16_t) (input_cgra_stencil.extract<176, 191>());
  int16_t _input_cgra_stencil_112 = (int16_t) (input_cgra_stencil.extract<192, 207>());
  int16_t _input_cgra_stencil_97 = (int16_t) (input_cgra_stencil.extract<208, 223>());
  int16_t _input_cgra_stencil_98 = (int16_t) (input_cgra_stencil.extract<224, 239>());
  int16_t _input_cgra_stencil_99 = (int16_t) (input_cgra_stencil.extract<240, 255>());

  int16_t _kernel_cgra_stencil_100 = (int16_t) (kernel_cgra_stencil.extract<0, 15>());
  int16_t _kernel_cgra_stencil_101 = (int16_t) (kernel_cgra_stencil.extract<16, 31>());
  int16_t _kernel_cgra_stencil_102 = (int16_t) (kernel_cgra_stencil.extract<32, 47>());
  int16_t _kernel_cgra_stencil_103 = (int16_t) (kernel_cgra_stencil.extract<48, 63>());
  int16_t _kernel_cgra_stencil_104 = (int16_t) (kernel_cgra_stencil.extract<64, 79>());
  int16_t _kernel_cgra_stencil_105 = (int16_t) (kernel_cgra_stencil.extract<80, 95>());
  int16_t _kernel_cgra_stencil_106 = (int16_t) (kernel_cgra_stencil.extract<96, 111>());
  int16_t _kernel_cgra_stencil_107 = (int16_t) (kernel_cgra_stencil.extract<112, 127>());
  int16_t _kernel_cgra_stencil_108 = (int16_t) (kernel_cgra_stencil.extract<128, 143>());
  int16_t _kernel_cgra_stencil_109 = (int16_t) (kernel_cgra_stencil.extract<144, 159>());
  int16_t _kernel_cgra_stencil_110 = (int16_t) (kernel_cgra_stencil.extract<160, 175>());
  int16_t _kernel_cgra_stencil_111 = (int16_t) (kernel_cgra_stencil.extract<176, 191>());
  int16_t _kernel_cgra_stencil_112 = (int16_t) (kernel_cgra_stencil.extract<192, 207>());
  int16_t _kernel_cgra_stencil_97 = (int16_t) (kernel_cgra_stencil.extract<208, 223>());
  int16_t _kernel_cgra_stencil_98 = (int16_t) (kernel_cgra_stencil.extract<224, 239>());
  int16_t _kernel_cgra_stencil_99 = (int16_t) (kernel_cgra_stencil.extract<240, 255>());

  int16_t _output_cgra_stencil_7 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _1738 = _kernel_cgra_stencil_97 * _input_cgra_stencil_97;
  int16_t _1739 = _kernel_cgra_stencil_98 * _input_cgra_stencil_98;
  int16_t _1740 = _kernel_cgra_stencil_99 * _input_cgra_stencil_99;
  int16_t _1741 = _kernel_cgra_stencil_100 * _input_cgra_stencil_100;
  int16_t _1742 = _kernel_cgra_stencil_101 * _input_cgra_stencil_101;
  int16_t _1743 = _kernel_cgra_stencil_102 * _input_cgra_stencil_102;
  int16_t _1744 = _kernel_cgra_stencil_103 * _input_cgra_stencil_103;
  int16_t _1745 = _kernel_cgra_stencil_104 * _input_cgra_stencil_104;
  int16_t _1746 = _kernel_cgra_stencil_105 * _input_cgra_stencil_105;
  int16_t _1747 = _kernel_cgra_stencil_106 * _input_cgra_stencil_106;
  int16_t _1748 = _kernel_cgra_stencil_107 * _input_cgra_stencil_107;
  int16_t _1749 = _kernel_cgra_stencil_108 * _input_cgra_stencil_108;
  int16_t _1750 = _kernel_cgra_stencil_109 * _input_cgra_stencil_109;
  int16_t _1751 = _kernel_cgra_stencil_110 * _input_cgra_stencil_110;
  int16_t _1752 = _kernel_cgra_stencil_111 * _input_cgra_stencil_111;
  int16_t _1753 = _kernel_cgra_stencil_112 * _input_cgra_stencil_112;
  int16_t _1754 = _1752 + _1753;
  int16_t _1755 = _1751 + _1754;
  int16_t _1756 = _1750 + _1755;
  int16_t _1757 = _1749 + _1756;
  int16_t _1758 = _1748 + _1757;
  int16_t _1759 = _1747 + _1758;
  int16_t _1760 = _1746 + _1759;
  int16_t _1761 = _1745 + _1760;
  int16_t _1762 = _1744 + _1761;
  int16_t _1763 = _1743 + _1762;
  int16_t _1764 = _1742 + _1763;
  int16_t _1765 = _1741 + _1764;
  int16_t _1766 = _1740 + _1765;
  int16_t _1767 = _1739 + _1766;
  int16_t _1768 = _output_cgra_stencil_7 + _1767;
  int16_t _1769 = _1738 + _1768;
  return _1769;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w*16) + 7), output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 7), 0, output_cgra_s1_r_x, 0)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(((output_cgra_s1_w_w*16) + 7), output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 7), 1, output_cgra_s1_r_x, 0)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 7), 2, output_cgra_s1_r_x, 0)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 7), 3, output_cgra_s1_r_x, 0)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 7), 4, output_cgra_s1_r_x, 0)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 7), 5, output_cgra_s1_r_x, 0)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 7), 6, output_cgra_s1_r_x, 0)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 7), 7, output_cgra_s1_r_x, 0)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 7), 8, output_cgra_s1_r_x, 0)*input_cgra.stencil(8, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 7), 9, output_cgra_s1_r_x, 0)*input_cgra.stencil(9, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 7), 10, output_cgra_s1_r_x, 0)*input_cgra.stencil(10, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 7), 11, output_cgra_s1_r_x, 0)*input_cgra.stencil(11, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 7), 12, output_cgra_s1_r_x, 0)*input_cgra.stencil(12, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 7), 13, output_cgra_s1_r_x, 0)*input_cgra.stencil(13, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 7), 15, output_cgra_s1_r_x, 0)*input_cgra.stencil(15, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 7), 14, output_cgra_s1_r_x, 0)*input_cgra.stencil(14, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_23(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_113 = (int16_t) (input_cgra_stencil.extract<0, 15>());
  int16_t _input_cgra_stencil_114 = (int16_t) (input_cgra_stencil.extract<16, 31>());
  int16_t _input_cgra_stencil_115 = (int16_t) (input_cgra_stencil.extract<32, 47>());
  int16_t _input_cgra_stencil_116 = (int16_t) (input_cgra_stencil.extract<48, 63>());
  int16_t _input_cgra_stencil_117 = (int16_t) (input_cgra_stencil.extract<64, 79>());
  int16_t _input_cgra_stencil_118 = (int16_t) (input_cgra_stencil.extract<80, 95>());
  int16_t _input_cgra_stencil_119 = (int16_t) (input_cgra_stencil.extract<96, 111>());
  int16_t _input_cgra_stencil_120 = (int16_t) (input_cgra_stencil.extract<112, 127>());
  int16_t _input_cgra_stencil_121 = (int16_t) (input_cgra_stencil.extract<128, 143>());
  int16_t _input_cgra_stencil_122 = (int16_t) (input_cgra_stencil.extract<144, 159>());
  int16_t _input_cgra_stencil_123 = (int16_t) (input_cgra_stencil.extract<160, 175>());
  int16_t _input_cgra_stencil_124 = (int16_t) (input_cgra_stencil.extract<176, 191>());
  int16_t _input_cgra_stencil_125 = (int16_t) (input_cgra_stencil.extract<192, 207>());
  int16_t _input_cgra_stencil_126 = (int16_t) (input_cgra_stencil.extract<208, 223>());
  int16_t _input_cgra_stencil_127 = (int16_t) (input_cgra_stencil.extract<224, 239>());
  int16_t _input_cgra_stencil_128 = (int16_t) (input_cgra_stencil.extract<240, 255>());

  int16_t _kernel_cgra_stencil_113 = (int16_t) (kernel_cgra_stencil.extract<0, 15>());
  int16_t _kernel_cgra_stencil_114 = (int16_t) (kernel_cgra_stencil.extract<16, 31>());
  int16_t _kernel_cgra_stencil_115 = (int16_t) (kernel_cgra_stencil.extract<32, 47>());
  int16_t _kernel_cgra_stencil_116 = (int16_t) (kernel_cgra_stencil.extract<48, 63>());
  int16_t _kernel_cgra_stencil_117 = (int16_t) (kernel_cgra_stencil.extract<64, 79>());
  int16_t _kernel_cgra_stencil_118 = (int16_t) (kernel_cgra_stencil.extract<80, 95>());
  int16_t _kernel_cgra_stencil_119 = (int16_t) (kernel_cgra_stencil.extract<96, 111>());
  int16_t _kernel_cgra_stencil_120 = (int16_t) (kernel_cgra_stencil.extract<112, 127>());
  int16_t _kernel_cgra_stencil_121 = (int16_t) (kernel_cgra_stencil.extract<128, 143>());
  int16_t _kernel_cgra_stencil_122 = (int16_t) (kernel_cgra_stencil.extract<144, 159>());
  int16_t _kernel_cgra_stencil_123 = (int16_t) (kernel_cgra_stencil.extract<160, 175>());
  int16_t _kernel_cgra_stencil_124 = (int16_t) (kernel_cgra_stencil.extract<176, 191>());
  int16_t _kernel_cgra_stencil_125 = (int16_t) (kernel_cgra_stencil.extract<192, 207>());
  int16_t _kernel_cgra_stencil_126 = (int16_t) (kernel_cgra_stencil.extract<208, 223>());
  int16_t _kernel_cgra_stencil_127 = (int16_t) (kernel_cgra_stencil.extract<224, 239>());
  int16_t _kernel_cgra_stencil_128 = (int16_t) (kernel_cgra_stencil.extract<240, 255>());

  int16_t _output_cgra_stencil_8 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _1871 = _kernel_cgra_stencil_113 * _input_cgra_stencil_113;
  int16_t _1872 = _kernel_cgra_stencil_114 * _input_cgra_stencil_114;
  int16_t _1873 = _kernel_cgra_stencil_115 * _input_cgra_stencil_115;
  int16_t _1874 = _kernel_cgra_stencil_116 * _input_cgra_stencil_116;
  int16_t _1875 = _kernel_cgra_stencil_117 * _input_cgra_stencil_117;
  int16_t _1876 = _kernel_cgra_stencil_118 * _input_cgra_stencil_118;
  int16_t _1877 = _kernel_cgra_stencil_119 * _input_cgra_stencil_119;
  int16_t _1878 = _kernel_cgra_stencil_120 * _input_cgra_stencil_120;
  int16_t _1879 = _kernel_cgra_stencil_121 * _input_cgra_stencil_121;
  int16_t _1880 = _kernel_cgra_stencil_122 * _input_cgra_stencil_122;
  int16_t _1881 = _kernel_cgra_stencil_123 * _input_cgra_stencil_123;
  int16_t _1882 = _kernel_cgra_stencil_124 * _input_cgra_stencil_124;
  int16_t _1883 = _kernel_cgra_stencil_125 * _input_cgra_stencil_125;
  int16_t _1884 = _kernel_cgra_stencil_126 * _input_cgra_stencil_126;
  int16_t _1885 = _kernel_cgra_stencil_127 * _input_cgra_stencil_127;
  int16_t _1886 = _kernel_cgra_stencil_128 * _input_cgra_stencil_128;
  int16_t _1887 = _1885 + _1886;
  int16_t _1888 = _1884 + _1887;
  int16_t _1889 = _1883 + _1888;
  int16_t _1890 = _1882 + _1889;
  int16_t _1891 = _1881 + _1890;
  int16_t _1892 = _1880 + _1891;
  int16_t _1893 = _1879 + _1892;
  int16_t _1894 = _1878 + _1893;
  int16_t _1895 = _1877 + _1894;
  int16_t _1896 = _1876 + _1895;
  int16_t _1897 = _1875 + _1896;
  int16_t _1898 = _1874 + _1897;
  int16_t _1899 = _1873 + _1898;
  int16_t _1900 = _1872 + _1899;
  int16_t _1901 = _output_cgra_stencil_8 + _1900;
  int16_t _1902 = _1871 + _1901;
  return _1902;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w*16) + 8), output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 8), 0, output_cgra_s1_r_x, 0)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(((output_cgra_s1_w_w*16) + 8), output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 8), 1, output_cgra_s1_r_x, 0)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 8), 2, output_cgra_s1_r_x, 0)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 8), 3, output_cgra_s1_r_x, 0)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 8), 4, output_cgra_s1_r_x, 0)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 8), 5, output_cgra_s1_r_x, 0)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 8), 6, output_cgra_s1_r_x, 0)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 8), 7, output_cgra_s1_r_x, 0)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 8), 8, output_cgra_s1_r_x, 0)*input_cgra.stencil(8, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 8), 9, output_cgra_s1_r_x, 0)*input_cgra.stencil(9, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 8), 10, output_cgra_s1_r_x, 0)*input_cgra.stencil(10, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 8), 11, output_cgra_s1_r_x, 0)*input_cgra.stencil(11, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 8), 12, output_cgra_s1_r_x, 0)*input_cgra.stencil(12, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 8), 13, output_cgra_s1_r_x, 0)*input_cgra.stencil(13, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 8), 15, output_cgra_s1_r_x, 0)*input_cgra.stencil(15, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 8), 14, output_cgra_s1_r_x, 0)*input_cgra.stencil(14, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_24(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_129 = (int16_t) (input_cgra_stencil.extract<0, 15>());
  int16_t _input_cgra_stencil_130 = (int16_t) (input_cgra_stencil.extract<16, 31>());
  int16_t _input_cgra_stencil_131 = (int16_t) (input_cgra_stencil.extract<32, 47>());
  int16_t _input_cgra_stencil_132 = (int16_t) (input_cgra_stencil.extract<48, 63>());
  int16_t _input_cgra_stencil_133 = (int16_t) (input_cgra_stencil.extract<64, 79>());
  int16_t _input_cgra_stencil_134 = (int16_t) (input_cgra_stencil.extract<80, 95>());
  int16_t _input_cgra_stencil_135 = (int16_t) (input_cgra_stencil.extract<96, 111>());
  int16_t _input_cgra_stencil_136 = (int16_t) (input_cgra_stencil.extract<112, 127>());
  int16_t _input_cgra_stencil_137 = (int16_t) (input_cgra_stencil.extract<128, 143>());
  int16_t _input_cgra_stencil_138 = (int16_t) (input_cgra_stencil.extract<144, 159>());
  int16_t _input_cgra_stencil_139 = (int16_t) (input_cgra_stencil.extract<160, 175>());
  int16_t _input_cgra_stencil_140 = (int16_t) (input_cgra_stencil.extract<176, 191>());
  int16_t _input_cgra_stencil_141 = (int16_t) (input_cgra_stencil.extract<192, 207>());
  int16_t _input_cgra_stencil_142 = (int16_t) (input_cgra_stencil.extract<208, 223>());
  int16_t _input_cgra_stencil_143 = (int16_t) (input_cgra_stencil.extract<224, 239>());
  int16_t _input_cgra_stencil_144 = (int16_t) (input_cgra_stencil.extract<240, 255>());

  int16_t _kernel_cgra_stencil_129 = (int16_t) (kernel_cgra_stencil.extract<0, 15>());
  int16_t _kernel_cgra_stencil_130 = (int16_t) (kernel_cgra_stencil.extract<16, 31>());
  int16_t _kernel_cgra_stencil_131 = (int16_t) (kernel_cgra_stencil.extract<32, 47>());
  int16_t _kernel_cgra_stencil_132 = (int16_t) (kernel_cgra_stencil.extract<48, 63>());
  int16_t _kernel_cgra_stencil_133 = (int16_t) (kernel_cgra_stencil.extract<64, 79>());
  int16_t _kernel_cgra_stencil_134 = (int16_t) (kernel_cgra_stencil.extract<80, 95>());
  int16_t _kernel_cgra_stencil_135 = (int16_t) (kernel_cgra_stencil.extract<96, 111>());
  int16_t _kernel_cgra_stencil_136 = (int16_t) (kernel_cgra_stencil.extract<112, 127>());
  int16_t _kernel_cgra_stencil_137 = (int16_t) (kernel_cgra_stencil.extract<128, 143>());
  int16_t _kernel_cgra_stencil_138 = (int16_t) (kernel_cgra_stencil.extract<144, 159>());
  int16_t _kernel_cgra_stencil_139 = (int16_t) (kernel_cgra_stencil.extract<160, 175>());
  int16_t _kernel_cgra_stencil_140 = (int16_t) (kernel_cgra_stencil.extract<176, 191>());
  int16_t _kernel_cgra_stencil_141 = (int16_t) (kernel_cgra_stencil.extract<192, 207>());
  int16_t _kernel_cgra_stencil_142 = (int16_t) (kernel_cgra_stencil.extract<208, 223>());
  int16_t _kernel_cgra_stencil_143 = (int16_t) (kernel_cgra_stencil.extract<224, 239>());
  int16_t _kernel_cgra_stencil_144 = (int16_t) (kernel_cgra_stencil.extract<240, 255>());

  int16_t _output_cgra_stencil_9 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _2004 = _kernel_cgra_stencil_129 * _input_cgra_stencil_129;
  int16_t _2005 = _kernel_cgra_stencil_130 * _input_cgra_stencil_130;
  int16_t _2006 = _kernel_cgra_stencil_131 * _input_cgra_stencil_131;
  int16_t _2007 = _kernel_cgra_stencil_132 * _input_cgra_stencil_132;
  int16_t _2008 = _kernel_cgra_stencil_133 * _input_cgra_stencil_133;
  int16_t _2009 = _kernel_cgra_stencil_134 * _input_cgra_stencil_134;
  int16_t _2010 = _kernel_cgra_stencil_135 * _input_cgra_stencil_135;
  int16_t _2011 = _kernel_cgra_stencil_136 * _input_cgra_stencil_136;
  int16_t _2012 = _kernel_cgra_stencil_137 * _input_cgra_stencil_137;
  int16_t _2013 = _kernel_cgra_stencil_138 * _input_cgra_stencil_138;
  int16_t _2014 = _kernel_cgra_stencil_139 * _input_cgra_stencil_139;
  int16_t _2015 = _kernel_cgra_stencil_140 * _input_cgra_stencil_140;
  int16_t _2016 = _kernel_cgra_stencil_141 * _input_cgra_stencil_141;
  int16_t _2017 = _kernel_cgra_stencil_142 * _input_cgra_stencil_142;
  int16_t _2018 = _kernel_cgra_stencil_143 * _input_cgra_stencil_143;
  int16_t _2019 = _kernel_cgra_stencil_144 * _input_cgra_stencil_144;
  int16_t _2020 = _2018 + _2019;
  int16_t _2021 = _2017 + _2020;
  int16_t _2022 = _2016 + _2021;
  int16_t _2023 = _2015 + _2022;
  int16_t _2024 = _2014 + _2023;
  int16_t _2025 = _2013 + _2024;
  int16_t _2026 = _2012 + _2025;
  int16_t _2027 = _2011 + _2026;
  int16_t _2028 = _2010 + _2027;
  int16_t _2029 = _2009 + _2028;
  int16_t _2030 = _2008 + _2029;
  int16_t _2031 = _2007 + _2030;
  int16_t _2032 = _2006 + _2031;
  int16_t _2033 = _2005 + _2032;
  int16_t _2034 = _output_cgra_stencil_9 + _2033;
  int16_t _2035 = _2004 + _2034;
  return _2035;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w*16) + 9), output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 9), 0, output_cgra_s1_r_x, 0)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(((output_cgra_s1_w_w*16) + 9), output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 9), 1, output_cgra_s1_r_x, 0)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 9), 2, output_cgra_s1_r_x, 0)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 9), 3, output_cgra_s1_r_x, 0)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 9), 4, output_cgra_s1_r_x, 0)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 9), 5, output_cgra_s1_r_x, 0)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 9), 6, output_cgra_s1_r_x, 0)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 9), 7, output_cgra_s1_r_x, 0)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 9), 8, output_cgra_s1_r_x, 0)*input_cgra.stencil(8, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 9), 9, output_cgra_s1_r_x, 0)*input_cgra.stencil(9, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 9), 10, output_cgra_s1_r_x, 0)*input_cgra.stencil(10, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 9), 11, output_cgra_s1_r_x, 0)*input_cgra.stencil(11, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 9), 12, output_cgra_s1_r_x, 0)*input_cgra.stencil(12, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 9), 13, output_cgra_s1_r_x, 0)*input_cgra.stencil(13, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 9), 15, output_cgra_s1_r_x, 0)*input_cgra.stencil(15, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 9), 14, output_cgra_s1_r_x, 0)*input_cgra.stencil(14, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_25(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_145 = (int16_t) (input_cgra_stencil.extract<0, 15>());
  int16_t _input_cgra_stencil_146 = (int16_t) (input_cgra_stencil.extract<16, 31>());
  int16_t _input_cgra_stencil_147 = (int16_t) (input_cgra_stencil.extract<32, 47>());
  int16_t _input_cgra_stencil_148 = (int16_t) (input_cgra_stencil.extract<48, 63>());
  int16_t _input_cgra_stencil_149 = (int16_t) (input_cgra_stencil.extract<64, 79>());
  int16_t _input_cgra_stencil_150 = (int16_t) (input_cgra_stencil.extract<80, 95>());
  int16_t _input_cgra_stencil_151 = (int16_t) (input_cgra_stencil.extract<96, 111>());
  int16_t _input_cgra_stencil_152 = (int16_t) (input_cgra_stencil.extract<112, 127>());
  int16_t _input_cgra_stencil_153 = (int16_t) (input_cgra_stencil.extract<128, 143>());
  int16_t _input_cgra_stencil_154 = (int16_t) (input_cgra_stencil.extract<144, 159>());
  int16_t _input_cgra_stencil_155 = (int16_t) (input_cgra_stencil.extract<160, 175>());
  int16_t _input_cgra_stencil_156 = (int16_t) (input_cgra_stencil.extract<176, 191>());
  int16_t _input_cgra_stencil_157 = (int16_t) (input_cgra_stencil.extract<192, 207>());
  int16_t _input_cgra_stencil_158 = (int16_t) (input_cgra_stencil.extract<208, 223>());
  int16_t _input_cgra_stencil_159 = (int16_t) (input_cgra_stencil.extract<224, 239>());
  int16_t _input_cgra_stencil_160 = (int16_t) (input_cgra_stencil.extract<240, 255>());

  int16_t _kernel_cgra_stencil_145 = (int16_t) (kernel_cgra_stencil.extract<0, 15>());
  int16_t _kernel_cgra_stencil_146 = (int16_t) (kernel_cgra_stencil.extract<16, 31>());
  int16_t _kernel_cgra_stencil_147 = (int16_t) (kernel_cgra_stencil.extract<32, 47>());
  int16_t _kernel_cgra_stencil_148 = (int16_t) (kernel_cgra_stencil.extract<48, 63>());
  int16_t _kernel_cgra_stencil_149 = (int16_t) (kernel_cgra_stencil.extract<64, 79>());
  int16_t _kernel_cgra_stencil_150 = (int16_t) (kernel_cgra_stencil.extract<80, 95>());
  int16_t _kernel_cgra_stencil_151 = (int16_t) (kernel_cgra_stencil.extract<96, 111>());
  int16_t _kernel_cgra_stencil_152 = (int16_t) (kernel_cgra_stencil.extract<112, 127>());
  int16_t _kernel_cgra_stencil_153 = (int16_t) (kernel_cgra_stencil.extract<128, 143>());
  int16_t _kernel_cgra_stencil_154 = (int16_t) (kernel_cgra_stencil.extract<144, 159>());
  int16_t _kernel_cgra_stencil_155 = (int16_t) (kernel_cgra_stencil.extract<160, 175>());
  int16_t _kernel_cgra_stencil_156 = (int16_t) (kernel_cgra_stencil.extract<176, 191>());
  int16_t _kernel_cgra_stencil_157 = (int16_t) (kernel_cgra_stencil.extract<192, 207>());
  int16_t _kernel_cgra_stencil_158 = (int16_t) (kernel_cgra_stencil.extract<208, 223>());
  int16_t _kernel_cgra_stencil_159 = (int16_t) (kernel_cgra_stencil.extract<224, 239>());
  int16_t _kernel_cgra_stencil_160 = (int16_t) (kernel_cgra_stencil.extract<240, 255>());

  int16_t _output_cgra_stencil_10 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _2137 = _kernel_cgra_stencil_145 * _input_cgra_stencil_145;
  int16_t _2138 = _kernel_cgra_stencil_146 * _input_cgra_stencil_146;
  int16_t _2139 = _kernel_cgra_stencil_147 * _input_cgra_stencil_147;
  int16_t _2140 = _kernel_cgra_stencil_148 * _input_cgra_stencil_148;
  int16_t _2141 = _kernel_cgra_stencil_149 * _input_cgra_stencil_149;
  int16_t _2142 = _kernel_cgra_stencil_150 * _input_cgra_stencil_150;
  int16_t _2143 = _kernel_cgra_stencil_151 * _input_cgra_stencil_151;
  int16_t _2144 = _kernel_cgra_stencil_152 * _input_cgra_stencil_152;
  int16_t _2145 = _kernel_cgra_stencil_153 * _input_cgra_stencil_153;
  int16_t _2146 = _kernel_cgra_stencil_154 * _input_cgra_stencil_154;
  int16_t _2147 = _kernel_cgra_stencil_155 * _input_cgra_stencil_155;
  int16_t _2148 = _kernel_cgra_stencil_156 * _input_cgra_stencil_156;
  int16_t _2149 = _kernel_cgra_stencil_157 * _input_cgra_stencil_157;
  int16_t _2150 = _kernel_cgra_stencil_158 * _input_cgra_stencil_158;
  int16_t _2151 = _kernel_cgra_stencil_159 * _input_cgra_stencil_159;
  int16_t _2152 = _kernel_cgra_stencil_160 * _input_cgra_stencil_160;
  int16_t _2153 = _2151 + _2152;
  int16_t _2154 = _2150 + _2153;
  int16_t _2155 = _2149 + _2154;
  int16_t _2156 = _2148 + _2155;
  int16_t _2157 = _2147 + _2156;
  int16_t _2158 = _2146 + _2157;
  int16_t _2159 = _2145 + _2158;
  int16_t _2160 = _2144 + _2159;
  int16_t _2161 = _2143 + _2160;
  int16_t _2162 = _2142 + _2161;
  int16_t _2163 = _2141 + _2162;
  int16_t _2164 = _2140 + _2163;
  int16_t _2165 = _2139 + _2164;
  int16_t _2166 = _2138 + _2165;
  int16_t _2167 = _output_cgra_stencil_10 + _2166;
  int16_t _2168 = _2137 + _2167;
  return _2168;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w*16) + 10), output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 10), 0, output_cgra_s1_r_x, 0)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(((output_cgra_s1_w_w*16) + 10), output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 10), 1, output_cgra_s1_r_x, 0)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 10), 2, output_cgra_s1_r_x, 0)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 10), 3, output_cgra_s1_r_x, 0)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 10), 4, output_cgra_s1_r_x, 0)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 10), 5, output_cgra_s1_r_x, 0)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 10), 6, output_cgra_s1_r_x, 0)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 10), 7, output_cgra_s1_r_x, 0)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 10), 8, output_cgra_s1_r_x, 0)*input_cgra.stencil(8, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 10), 9, output_cgra_s1_r_x, 0)*input_cgra.stencil(9, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 10), 10, output_cgra_s1_r_x, 0)*input_cgra.stencil(10, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 10), 11, output_cgra_s1_r_x, 0)*input_cgra.stencil(11, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 10), 12, output_cgra_s1_r_x, 0)*input_cgra.stencil(12, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 10), 13, output_cgra_s1_r_x, 0)*input_cgra.stencil(13, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 10), 15, output_cgra_s1_r_x, 0)*input_cgra.stencil(15, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 10), 14, output_cgra_s1_r_x, 0)*input_cgra.stencil(14, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_26(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_161 = (int16_t) (input_cgra_stencil.extract<0, 15>());
  int16_t _input_cgra_stencil_162 = (int16_t) (input_cgra_stencil.extract<16, 31>());
  int16_t _input_cgra_stencil_163 = (int16_t) (input_cgra_stencil.extract<32, 47>());
  int16_t _input_cgra_stencil_164 = (int16_t) (input_cgra_stencil.extract<48, 63>());
  int16_t _input_cgra_stencil_165 = (int16_t) (input_cgra_stencil.extract<64, 79>());
  int16_t _input_cgra_stencil_166 = (int16_t) (input_cgra_stencil.extract<80, 95>());
  int16_t _input_cgra_stencil_167 = (int16_t) (input_cgra_stencil.extract<96, 111>());
  int16_t _input_cgra_stencil_168 = (int16_t) (input_cgra_stencil.extract<112, 127>());
  int16_t _input_cgra_stencil_169 = (int16_t) (input_cgra_stencil.extract<128, 143>());
  int16_t _input_cgra_stencil_170 = (int16_t) (input_cgra_stencil.extract<144, 159>());
  int16_t _input_cgra_stencil_171 = (int16_t) (input_cgra_stencil.extract<160, 175>());
  int16_t _input_cgra_stencil_172 = (int16_t) (input_cgra_stencil.extract<176, 191>());
  int16_t _input_cgra_stencil_173 = (int16_t) (input_cgra_stencil.extract<192, 207>());
  int16_t _input_cgra_stencil_174 = (int16_t) (input_cgra_stencil.extract<208, 223>());
  int16_t _input_cgra_stencil_175 = (int16_t) (input_cgra_stencil.extract<224, 239>());
  int16_t _input_cgra_stencil_176 = (int16_t) (input_cgra_stencil.extract<240, 255>());

  int16_t _kernel_cgra_stencil_161 = (int16_t) (kernel_cgra_stencil.extract<0, 15>());
  int16_t _kernel_cgra_stencil_162 = (int16_t) (kernel_cgra_stencil.extract<16, 31>());
  int16_t _kernel_cgra_stencil_163 = (int16_t) (kernel_cgra_stencil.extract<32, 47>());
  int16_t _kernel_cgra_stencil_164 = (int16_t) (kernel_cgra_stencil.extract<48, 63>());
  int16_t _kernel_cgra_stencil_165 = (int16_t) (kernel_cgra_stencil.extract<64, 79>());
  int16_t _kernel_cgra_stencil_166 = (int16_t) (kernel_cgra_stencil.extract<80, 95>());
  int16_t _kernel_cgra_stencil_167 = (int16_t) (kernel_cgra_stencil.extract<96, 111>());
  int16_t _kernel_cgra_stencil_168 = (int16_t) (kernel_cgra_stencil.extract<112, 127>());
  int16_t _kernel_cgra_stencil_169 = (int16_t) (kernel_cgra_stencil.extract<128, 143>());
  int16_t _kernel_cgra_stencil_170 = (int16_t) (kernel_cgra_stencil.extract<144, 159>());
  int16_t _kernel_cgra_stencil_171 = (int16_t) (kernel_cgra_stencil.extract<160, 175>());
  int16_t _kernel_cgra_stencil_172 = (int16_t) (kernel_cgra_stencil.extract<176, 191>());
  int16_t _kernel_cgra_stencil_173 = (int16_t) (kernel_cgra_stencil.extract<192, 207>());
  int16_t _kernel_cgra_stencil_174 = (int16_t) (kernel_cgra_stencil.extract<208, 223>());
  int16_t _kernel_cgra_stencil_175 = (int16_t) (kernel_cgra_stencil.extract<224, 239>());
  int16_t _kernel_cgra_stencil_176 = (int16_t) (kernel_cgra_stencil.extract<240, 255>());

  int16_t _output_cgra_stencil_11 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _2270 = _kernel_cgra_stencil_161 * _input_cgra_stencil_161;
  int16_t _2271 = _kernel_cgra_stencil_162 * _input_cgra_stencil_162;
  int16_t _2272 = _kernel_cgra_stencil_163 * _input_cgra_stencil_163;
  int16_t _2273 = _kernel_cgra_stencil_164 * _input_cgra_stencil_164;
  int16_t _2274 = _kernel_cgra_stencil_165 * _input_cgra_stencil_165;
  int16_t _2275 = _kernel_cgra_stencil_166 * _input_cgra_stencil_166;
  int16_t _2276 = _kernel_cgra_stencil_167 * _input_cgra_stencil_167;
  int16_t _2277 = _kernel_cgra_stencil_168 * _input_cgra_stencil_168;
  int16_t _2278 = _kernel_cgra_stencil_169 * _input_cgra_stencil_169;
  int16_t _2279 = _kernel_cgra_stencil_170 * _input_cgra_stencil_170;
  int16_t _2280 = _kernel_cgra_stencil_171 * _input_cgra_stencil_171;
  int16_t _2281 = _kernel_cgra_stencil_172 * _input_cgra_stencil_172;
  int16_t _2282 = _kernel_cgra_stencil_173 * _input_cgra_stencil_173;
  int16_t _2283 = _kernel_cgra_stencil_174 * _input_cgra_stencil_174;
  int16_t _2284 = _kernel_cgra_stencil_175 * _input_cgra_stencil_175;
  int16_t _2285 = _kernel_cgra_stencil_176 * _input_cgra_stencil_176;
  int16_t _2286 = _2284 + _2285;
  int16_t _2287 = _2283 + _2286;
  int16_t _2288 = _2282 + _2287;
  int16_t _2289 = _2281 + _2288;
  int16_t _2290 = _2280 + _2289;
  int16_t _2291 = _2279 + _2290;
  int16_t _2292 = _2278 + _2291;
  int16_t _2293 = _2277 + _2292;
  int16_t _2294 = _2276 + _2293;
  int16_t _2295 = _2275 + _2294;
  int16_t _2296 = _2274 + _2295;
  int16_t _2297 = _2273 + _2296;
  int16_t _2298 = _2272 + _2297;
  int16_t _2299 = _2271 + _2298;
  int16_t _2300 = _output_cgra_stencil_11 + _2299;
  int16_t _2301 = _2270 + _2300;
  return _2301;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w*16) + 11), output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 11), 0, output_cgra_s1_r_x, 0)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(((output_cgra_s1_w_w*16) + 11), output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 11), 1, output_cgra_s1_r_x, 0)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 11), 2, output_cgra_s1_r_x, 0)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 11), 3, output_cgra_s1_r_x, 0)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 11), 4, output_cgra_s1_r_x, 0)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 11), 5, output_cgra_s1_r_x, 0)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 11), 6, output_cgra_s1_r_x, 0)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 11), 7, output_cgra_s1_r_x, 0)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 11), 8, output_cgra_s1_r_x, 0)*input_cgra.stencil(8, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 11), 9, output_cgra_s1_r_x, 0)*input_cgra.stencil(9, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 11), 10, output_cgra_s1_r_x, 0)*input_cgra.stencil(10, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 11), 11, output_cgra_s1_r_x, 0)*input_cgra.stencil(11, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 11), 12, output_cgra_s1_r_x, 0)*input_cgra.stencil(12, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 11), 13, output_cgra_s1_r_x, 0)*input_cgra.stencil(13, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 11), 15, output_cgra_s1_r_x, 0)*input_cgra.stencil(15, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 11), 14, output_cgra_s1_r_x, 0)*input_cgra.stencil(14, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_27(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_177 = (int16_t) (input_cgra_stencil.extract<0, 15>());
  int16_t _input_cgra_stencil_178 = (int16_t) (input_cgra_stencil.extract<16, 31>());
  int16_t _input_cgra_stencil_179 = (int16_t) (input_cgra_stencil.extract<32, 47>());
  int16_t _input_cgra_stencil_180 = (int16_t) (input_cgra_stencil.extract<48, 63>());
  int16_t _input_cgra_stencil_181 = (int16_t) (input_cgra_stencil.extract<64, 79>());
  int16_t _input_cgra_stencil_182 = (int16_t) (input_cgra_stencil.extract<80, 95>());
  int16_t _input_cgra_stencil_183 = (int16_t) (input_cgra_stencil.extract<96, 111>());
  int16_t _input_cgra_stencil_184 = (int16_t) (input_cgra_stencil.extract<112, 127>());
  int16_t _input_cgra_stencil_185 = (int16_t) (input_cgra_stencil.extract<128, 143>());
  int16_t _input_cgra_stencil_186 = (int16_t) (input_cgra_stencil.extract<144, 159>());
  int16_t _input_cgra_stencil_187 = (int16_t) (input_cgra_stencil.extract<160, 175>());
  int16_t _input_cgra_stencil_188 = (int16_t) (input_cgra_stencil.extract<176, 191>());
  int16_t _input_cgra_stencil_189 = (int16_t) (input_cgra_stencil.extract<192, 207>());
  int16_t _input_cgra_stencil_190 = (int16_t) (input_cgra_stencil.extract<208, 223>());
  int16_t _input_cgra_stencil_191 = (int16_t) (input_cgra_stencil.extract<224, 239>());
  int16_t _input_cgra_stencil_192 = (int16_t) (input_cgra_stencil.extract<240, 255>());

  int16_t _kernel_cgra_stencil_177 = (int16_t) (kernel_cgra_stencil.extract<0, 15>());
  int16_t _kernel_cgra_stencil_178 = (int16_t) (kernel_cgra_stencil.extract<16, 31>());
  int16_t _kernel_cgra_stencil_179 = (int16_t) (kernel_cgra_stencil.extract<32, 47>());
  int16_t _kernel_cgra_stencil_180 = (int16_t) (kernel_cgra_stencil.extract<48, 63>());
  int16_t _kernel_cgra_stencil_181 = (int16_t) (kernel_cgra_stencil.extract<64, 79>());
  int16_t _kernel_cgra_stencil_182 = (int16_t) (kernel_cgra_stencil.extract<80, 95>());
  int16_t _kernel_cgra_stencil_183 = (int16_t) (kernel_cgra_stencil.extract<96, 111>());
  int16_t _kernel_cgra_stencil_184 = (int16_t) (kernel_cgra_stencil.extract<112, 127>());
  int16_t _kernel_cgra_stencil_185 = (int16_t) (kernel_cgra_stencil.extract<128, 143>());
  int16_t _kernel_cgra_stencil_186 = (int16_t) (kernel_cgra_stencil.extract<144, 159>());
  int16_t _kernel_cgra_stencil_187 = (int16_t) (kernel_cgra_stencil.extract<160, 175>());
  int16_t _kernel_cgra_stencil_188 = (int16_t) (kernel_cgra_stencil.extract<176, 191>());
  int16_t _kernel_cgra_stencil_189 = (int16_t) (kernel_cgra_stencil.extract<192, 207>());
  int16_t _kernel_cgra_stencil_190 = (int16_t) (kernel_cgra_stencil.extract<208, 223>());
  int16_t _kernel_cgra_stencil_191 = (int16_t) (kernel_cgra_stencil.extract<224, 239>());
  int16_t _kernel_cgra_stencil_192 = (int16_t) (kernel_cgra_stencil.extract<240, 255>());

  int16_t _output_cgra_stencil_12 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _2403 = _kernel_cgra_stencil_177 * _input_cgra_stencil_177;
  int16_t _2404 = _kernel_cgra_stencil_178 * _input_cgra_stencil_178;
  int16_t _2405 = _kernel_cgra_stencil_179 * _input_cgra_stencil_179;
  int16_t _2406 = _kernel_cgra_stencil_180 * _input_cgra_stencil_180;
  int16_t _2407 = _kernel_cgra_stencil_181 * _input_cgra_stencil_181;
  int16_t _2408 = _kernel_cgra_stencil_182 * _input_cgra_stencil_182;
  int16_t _2409 = _kernel_cgra_stencil_183 * _input_cgra_stencil_183;
  int16_t _2410 = _kernel_cgra_stencil_184 * _input_cgra_stencil_184;
  int16_t _2411 = _kernel_cgra_stencil_185 * _input_cgra_stencil_185;
  int16_t _2412 = _kernel_cgra_stencil_186 * _input_cgra_stencil_186;
  int16_t _2413 = _kernel_cgra_stencil_187 * _input_cgra_stencil_187;
  int16_t _2414 = _kernel_cgra_stencil_188 * _input_cgra_stencil_188;
  int16_t _2415 = _kernel_cgra_stencil_189 * _input_cgra_stencil_189;
  int16_t _2416 = _kernel_cgra_stencil_190 * _input_cgra_stencil_190;
  int16_t _2417 = _kernel_cgra_stencil_191 * _input_cgra_stencil_191;
  int16_t _2418 = _kernel_cgra_stencil_192 * _input_cgra_stencil_192;
  int16_t _2419 = _2417 + _2418;
  int16_t _2420 = _2416 + _2419;
  int16_t _2421 = _2415 + _2420;
  int16_t _2422 = _2414 + _2421;
  int16_t _2423 = _2413 + _2422;
  int16_t _2424 = _2412 + _2423;
  int16_t _2425 = _2411 + _2424;
  int16_t _2426 = _2410 + _2425;
  int16_t _2427 = _2409 + _2426;
  int16_t _2428 = _2408 + _2427;
  int16_t _2429 = _2407 + _2428;
  int16_t _2430 = _2406 + _2429;
  int16_t _2431 = _2405 + _2430;
  int16_t _2432 = _2404 + _2431;
  int16_t _2433 = _output_cgra_stencil_12 + _2432;
  int16_t _2434 = _2403 + _2433;
  return _2434;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w*16) + 12), output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 12), 0, output_cgra_s1_r_x, 0)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(((output_cgra_s1_w_w*16) + 12), output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 12), 1, output_cgra_s1_r_x, 0)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 12), 2, output_cgra_s1_r_x, 0)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 12), 3, output_cgra_s1_r_x, 0)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 12), 4, output_cgra_s1_r_x, 0)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 12), 5, output_cgra_s1_r_x, 0)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 12), 6, output_cgra_s1_r_x, 0)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 12), 7, output_cgra_s1_r_x, 0)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 12), 8, output_cgra_s1_r_x, 0)*input_cgra.stencil(8, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 12), 9, output_cgra_s1_r_x, 0)*input_cgra.stencil(9, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 12), 10, output_cgra_s1_r_x, 0)*input_cgra.stencil(10, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 12), 11, output_cgra_s1_r_x, 0)*input_cgra.stencil(11, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 12), 12, output_cgra_s1_r_x, 0)*input_cgra.stencil(12, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 12), 13, output_cgra_s1_r_x, 0)*input_cgra.stencil(13, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 12), 15, output_cgra_s1_r_x, 0)*input_cgra.stencil(15, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 12), 14, output_cgra_s1_r_x, 0)*input_cgra.stencil(14, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_28(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_193 = (int16_t) (input_cgra_stencil.extract<0, 15>());
  int16_t _input_cgra_stencil_194 = (int16_t) (input_cgra_stencil.extract<16, 31>());
  int16_t _input_cgra_stencil_195 = (int16_t) (input_cgra_stencil.extract<32, 47>());
  int16_t _input_cgra_stencil_196 = (int16_t) (input_cgra_stencil.extract<48, 63>());
  int16_t _input_cgra_stencil_197 = (int16_t) (input_cgra_stencil.extract<64, 79>());
  int16_t _input_cgra_stencil_198 = (int16_t) (input_cgra_stencil.extract<80, 95>());
  int16_t _input_cgra_stencil_199 = (int16_t) (input_cgra_stencil.extract<96, 111>());
  int16_t _input_cgra_stencil_200 = (int16_t) (input_cgra_stencil.extract<112, 127>());
  int16_t _input_cgra_stencil_201 = (int16_t) (input_cgra_stencil.extract<128, 143>());
  int16_t _input_cgra_stencil_202 = (int16_t) (input_cgra_stencil.extract<144, 159>());
  int16_t _input_cgra_stencil_203 = (int16_t) (input_cgra_stencil.extract<160, 175>());
  int16_t _input_cgra_stencil_204 = (int16_t) (input_cgra_stencil.extract<176, 191>());
  int16_t _input_cgra_stencil_205 = (int16_t) (input_cgra_stencil.extract<192, 207>());
  int16_t _input_cgra_stencil_206 = (int16_t) (input_cgra_stencil.extract<208, 223>());
  int16_t _input_cgra_stencil_207 = (int16_t) (input_cgra_stencil.extract<224, 239>());
  int16_t _input_cgra_stencil_208 = (int16_t) (input_cgra_stencil.extract<240, 255>());

  int16_t _kernel_cgra_stencil_193 = (int16_t) (kernel_cgra_stencil.extract<0, 15>());
  int16_t _kernel_cgra_stencil_194 = (int16_t) (kernel_cgra_stencil.extract<16, 31>());
  int16_t _kernel_cgra_stencil_195 = (int16_t) (kernel_cgra_stencil.extract<32, 47>());
  int16_t _kernel_cgra_stencil_196 = (int16_t) (kernel_cgra_stencil.extract<48, 63>());
  int16_t _kernel_cgra_stencil_197 = (int16_t) (kernel_cgra_stencil.extract<64, 79>());
  int16_t _kernel_cgra_stencil_198 = (int16_t) (kernel_cgra_stencil.extract<80, 95>());
  int16_t _kernel_cgra_stencil_199 = (int16_t) (kernel_cgra_stencil.extract<96, 111>());
  int16_t _kernel_cgra_stencil_200 = (int16_t) (kernel_cgra_stencil.extract<112, 127>());
  int16_t _kernel_cgra_stencil_201 = (int16_t) (kernel_cgra_stencil.extract<128, 143>());
  int16_t _kernel_cgra_stencil_202 = (int16_t) (kernel_cgra_stencil.extract<144, 159>());
  int16_t _kernel_cgra_stencil_203 = (int16_t) (kernel_cgra_stencil.extract<160, 175>());
  int16_t _kernel_cgra_stencil_204 = (int16_t) (kernel_cgra_stencil.extract<176, 191>());
  int16_t _kernel_cgra_stencil_205 = (int16_t) (kernel_cgra_stencil.extract<192, 207>());
  int16_t _kernel_cgra_stencil_206 = (int16_t) (kernel_cgra_stencil.extract<208, 223>());
  int16_t _kernel_cgra_stencil_207 = (int16_t) (kernel_cgra_stencil.extract<224, 239>());
  int16_t _kernel_cgra_stencil_208 = (int16_t) (kernel_cgra_stencil.extract<240, 255>());

  int16_t _output_cgra_stencil_13 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _2536 = _kernel_cgra_stencil_193 * _input_cgra_stencil_193;
  int16_t _2537 = _kernel_cgra_stencil_194 * _input_cgra_stencil_194;
  int16_t _2538 = _kernel_cgra_stencil_195 * _input_cgra_stencil_195;
  int16_t _2539 = _kernel_cgra_stencil_196 * _input_cgra_stencil_196;
  int16_t _2540 = _kernel_cgra_stencil_197 * _input_cgra_stencil_197;
  int16_t _2541 = _kernel_cgra_stencil_198 * _input_cgra_stencil_198;
  int16_t _2542 = _kernel_cgra_stencil_199 * _input_cgra_stencil_199;
  int16_t _2543 = _kernel_cgra_stencil_200 * _input_cgra_stencil_200;
  int16_t _2544 = _kernel_cgra_stencil_201 * _input_cgra_stencil_201;
  int16_t _2545 = _kernel_cgra_stencil_202 * _input_cgra_stencil_202;
  int16_t _2546 = _kernel_cgra_stencil_203 * _input_cgra_stencil_203;
  int16_t _2547 = _kernel_cgra_stencil_204 * _input_cgra_stencil_204;
  int16_t _2548 = _kernel_cgra_stencil_205 * _input_cgra_stencil_205;
  int16_t _2549 = _kernel_cgra_stencil_206 * _input_cgra_stencil_206;
  int16_t _2550 = _kernel_cgra_stencil_207 * _input_cgra_stencil_207;
  int16_t _2551 = _kernel_cgra_stencil_208 * _input_cgra_stencil_208;
  int16_t _2552 = _2550 + _2551;
  int16_t _2553 = _2549 + _2552;
  int16_t _2554 = _2548 + _2553;
  int16_t _2555 = _2547 + _2554;
  int16_t _2556 = _2546 + _2555;
  int16_t _2557 = _2545 + _2556;
  int16_t _2558 = _2544 + _2557;
  int16_t _2559 = _2543 + _2558;
  int16_t _2560 = _2542 + _2559;
  int16_t _2561 = _2541 + _2560;
  int16_t _2562 = _2540 + _2561;
  int16_t _2563 = _2539 + _2562;
  int16_t _2564 = _2538 + _2563;
  int16_t _2565 = _2537 + _2564;
  int16_t _2566 = _output_cgra_stencil_13 + _2565;
  int16_t _2567 = _2536 + _2566;
  return _2567;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w*16) + 13), output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 13), 0, output_cgra_s1_r_x, 0)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(((output_cgra_s1_w_w*16) + 13), output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 13), 1, output_cgra_s1_r_x, 0)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 13), 2, output_cgra_s1_r_x, 0)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 13), 3, output_cgra_s1_r_x, 0)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 13), 4, output_cgra_s1_r_x, 0)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 13), 5, output_cgra_s1_r_x, 0)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 13), 6, output_cgra_s1_r_x, 0)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 13), 7, output_cgra_s1_r_x, 0)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 13), 8, output_cgra_s1_r_x, 0)*input_cgra.stencil(8, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 13), 9, output_cgra_s1_r_x, 0)*input_cgra.stencil(9, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 13), 10, output_cgra_s1_r_x, 0)*input_cgra.stencil(10, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 13), 11, output_cgra_s1_r_x, 0)*input_cgra.stencil(11, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 13), 12, output_cgra_s1_r_x, 0)*input_cgra.stencil(12, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 13), 13, output_cgra_s1_r_x, 0)*input_cgra.stencil(13, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 13), 15, output_cgra_s1_r_x, 0)*input_cgra.stencil(15, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 13), 14, output_cgra_s1_r_x, 0)*input_cgra.stencil(14, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_29(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_209 = (int16_t) (input_cgra_stencil.extract<0, 15>());
  int16_t _input_cgra_stencil_210 = (int16_t) (input_cgra_stencil.extract<16, 31>());
  int16_t _input_cgra_stencil_211 = (int16_t) (input_cgra_stencil.extract<32, 47>());
  int16_t _input_cgra_stencil_212 = (int16_t) (input_cgra_stencil.extract<48, 63>());
  int16_t _input_cgra_stencil_213 = (int16_t) (input_cgra_stencil.extract<64, 79>());
  int16_t _input_cgra_stencil_214 = (int16_t) (input_cgra_stencil.extract<80, 95>());
  int16_t _input_cgra_stencil_215 = (int16_t) (input_cgra_stencil.extract<96, 111>());
  int16_t _input_cgra_stencil_216 = (int16_t) (input_cgra_stencil.extract<112, 127>());
  int16_t _input_cgra_stencil_217 = (int16_t) (input_cgra_stencil.extract<128, 143>());
  int16_t _input_cgra_stencil_218 = (int16_t) (input_cgra_stencil.extract<144, 159>());
  int16_t _input_cgra_stencil_219 = (int16_t) (input_cgra_stencil.extract<160, 175>());
  int16_t _input_cgra_stencil_220 = (int16_t) (input_cgra_stencil.extract<176, 191>());
  int16_t _input_cgra_stencil_221 = (int16_t) (input_cgra_stencil.extract<192, 207>());
  int16_t _input_cgra_stencil_222 = (int16_t) (input_cgra_stencil.extract<208, 223>());
  int16_t _input_cgra_stencil_223 = (int16_t) (input_cgra_stencil.extract<224, 239>());
  int16_t _input_cgra_stencil_224 = (int16_t) (input_cgra_stencil.extract<240, 255>());

  int16_t _kernel_cgra_stencil_209 = (int16_t) (kernel_cgra_stencil.extract<0, 15>());
  int16_t _kernel_cgra_stencil_210 = (int16_t) (kernel_cgra_stencil.extract<16, 31>());
  int16_t _kernel_cgra_stencil_211 = (int16_t) (kernel_cgra_stencil.extract<32, 47>());
  int16_t _kernel_cgra_stencil_212 = (int16_t) (kernel_cgra_stencil.extract<48, 63>());
  int16_t _kernel_cgra_stencil_213 = (int16_t) (kernel_cgra_stencil.extract<64, 79>());
  int16_t _kernel_cgra_stencil_214 = (int16_t) (kernel_cgra_stencil.extract<80, 95>());
  int16_t _kernel_cgra_stencil_215 = (int16_t) (kernel_cgra_stencil.extract<96, 111>());
  int16_t _kernel_cgra_stencil_216 = (int16_t) (kernel_cgra_stencil.extract<112, 127>());
  int16_t _kernel_cgra_stencil_217 = (int16_t) (kernel_cgra_stencil.extract<128, 143>());
  int16_t _kernel_cgra_stencil_218 = (int16_t) (kernel_cgra_stencil.extract<144, 159>());
  int16_t _kernel_cgra_stencil_219 = (int16_t) (kernel_cgra_stencil.extract<160, 175>());
  int16_t _kernel_cgra_stencil_220 = (int16_t) (kernel_cgra_stencil.extract<176, 191>());
  int16_t _kernel_cgra_stencil_221 = (int16_t) (kernel_cgra_stencil.extract<192, 207>());
  int16_t _kernel_cgra_stencil_222 = (int16_t) (kernel_cgra_stencil.extract<208, 223>());
  int16_t _kernel_cgra_stencil_223 = (int16_t) (kernel_cgra_stencil.extract<224, 239>());
  int16_t _kernel_cgra_stencil_224 = (int16_t) (kernel_cgra_stencil.extract<240, 255>());

  int16_t _output_cgra_stencil_14 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _2669 = _kernel_cgra_stencil_209 * _input_cgra_stencil_209;
  int16_t _2670 = _kernel_cgra_stencil_210 * _input_cgra_stencil_210;
  int16_t _2671 = _kernel_cgra_stencil_211 * _input_cgra_stencil_211;
  int16_t _2672 = _kernel_cgra_stencil_212 * _input_cgra_stencil_212;
  int16_t _2673 = _kernel_cgra_stencil_213 * _input_cgra_stencil_213;
  int16_t _2674 = _kernel_cgra_stencil_214 * _input_cgra_stencil_214;
  int16_t _2675 = _kernel_cgra_stencil_215 * _input_cgra_stencil_215;
  int16_t _2676 = _kernel_cgra_stencil_216 * _input_cgra_stencil_216;
  int16_t _2677 = _kernel_cgra_stencil_217 * _input_cgra_stencil_217;
  int16_t _2678 = _kernel_cgra_stencil_218 * _input_cgra_stencil_218;
  int16_t _2679 = _kernel_cgra_stencil_219 * _input_cgra_stencil_219;
  int16_t _2680 = _kernel_cgra_stencil_220 * _input_cgra_stencil_220;
  int16_t _2681 = _kernel_cgra_stencil_221 * _input_cgra_stencil_221;
  int16_t _2682 = _kernel_cgra_stencil_222 * _input_cgra_stencil_222;
  int16_t _2683 = _kernel_cgra_stencil_223 * _input_cgra_stencil_223;
  int16_t _2684 = _kernel_cgra_stencil_224 * _input_cgra_stencil_224;
  int16_t _2685 = _2683 + _2684;
  int16_t _2686 = _2682 + _2685;
  int16_t _2687 = _2681 + _2686;
  int16_t _2688 = _2680 + _2687;
  int16_t _2689 = _2679 + _2688;
  int16_t _2690 = _2678 + _2689;
  int16_t _2691 = _2677 + _2690;
  int16_t _2692 = _2676 + _2691;
  int16_t _2693 = _2675 + _2692;
  int16_t _2694 = _2674 + _2693;
  int16_t _2695 = _2673 + _2694;
  int16_t _2696 = _2672 + _2695;
  int16_t _2697 = _2671 + _2696;
  int16_t _2698 = _2670 + _2697;
  int16_t _2699 = _output_cgra_stencil_14 + _2698;
  int16_t _2700 = _2669 + _2699;
  return _2700;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w*16) + 14), output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 14), 0, output_cgra_s1_r_x, 0)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(((output_cgra_s1_w_w*16) + 14), output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 14), 1, output_cgra_s1_r_x, 0)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 14), 2, output_cgra_s1_r_x, 0)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 14), 3, output_cgra_s1_r_x, 0)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 14), 4, output_cgra_s1_r_x, 0)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 14), 5, output_cgra_s1_r_x, 0)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 14), 6, output_cgra_s1_r_x, 0)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 14), 7, output_cgra_s1_r_x, 0)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 14), 8, output_cgra_s1_r_x, 0)*input_cgra.stencil(8, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 14), 9, output_cgra_s1_r_x, 0)*input_cgra.stencil(9, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 14), 10, output_cgra_s1_r_x, 0)*input_cgra.stencil(10, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 14), 11, output_cgra_s1_r_x, 0)*input_cgra.stencil(11, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 14), 12, output_cgra_s1_r_x, 0)*input_cgra.stencil(12, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 14), 13, output_cgra_s1_r_x, 0)*input_cgra.stencil(13, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 14), 15, output_cgra_s1_r_x, 0)*input_cgra.stencil(15, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 14), 14, output_cgra_s1_r_x, 0)*input_cgra.stencil(14, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_30(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_225 = (int16_t) (input_cgra_stencil.extract<0, 15>());
  int16_t _input_cgra_stencil_226 = (int16_t) (input_cgra_stencil.extract<16, 31>());
  int16_t _input_cgra_stencil_227 = (int16_t) (input_cgra_stencil.extract<32, 47>());
  int16_t _input_cgra_stencil_228 = (int16_t) (input_cgra_stencil.extract<48, 63>());
  int16_t _input_cgra_stencil_229 = (int16_t) (input_cgra_stencil.extract<64, 79>());
  int16_t _input_cgra_stencil_230 = (int16_t) (input_cgra_stencil.extract<80, 95>());
  int16_t _input_cgra_stencil_231 = (int16_t) (input_cgra_stencil.extract<96, 111>());
  int16_t _input_cgra_stencil_232 = (int16_t) (input_cgra_stencil.extract<112, 127>());
  int16_t _input_cgra_stencil_233 = (int16_t) (input_cgra_stencil.extract<128, 143>());
  int16_t _input_cgra_stencil_234 = (int16_t) (input_cgra_stencil.extract<144, 159>());
  int16_t _input_cgra_stencil_235 = (int16_t) (input_cgra_stencil.extract<160, 175>());
  int16_t _input_cgra_stencil_236 = (int16_t) (input_cgra_stencil.extract<176, 191>());
  int16_t _input_cgra_stencil_237 = (int16_t) (input_cgra_stencil.extract<192, 207>());
  int16_t _input_cgra_stencil_238 = (int16_t) (input_cgra_stencil.extract<208, 223>());
  int16_t _input_cgra_stencil_239 = (int16_t) (input_cgra_stencil.extract<224, 239>());
  int16_t _input_cgra_stencil_240 = (int16_t) (input_cgra_stencil.extract<240, 255>());

  int16_t _kernel_cgra_stencil_225 = (int16_t) (kernel_cgra_stencil.extract<0, 15>());
  int16_t _kernel_cgra_stencil_226 = (int16_t) (kernel_cgra_stencil.extract<16, 31>());
  int16_t _kernel_cgra_stencil_227 = (int16_t) (kernel_cgra_stencil.extract<32, 47>());
  int16_t _kernel_cgra_stencil_228 = (int16_t) (kernel_cgra_stencil.extract<48, 63>());
  int16_t _kernel_cgra_stencil_229 = (int16_t) (kernel_cgra_stencil.extract<64, 79>());
  int16_t _kernel_cgra_stencil_230 = (int16_t) (kernel_cgra_stencil.extract<80, 95>());
  int16_t _kernel_cgra_stencil_231 = (int16_t) (kernel_cgra_stencil.extract<96, 111>());
  int16_t _kernel_cgra_stencil_232 = (int16_t) (kernel_cgra_stencil.extract<112, 127>());
  int16_t _kernel_cgra_stencil_233 = (int16_t) (kernel_cgra_stencil.extract<128, 143>());
  int16_t _kernel_cgra_stencil_234 = (int16_t) (kernel_cgra_stencil.extract<144, 159>());
  int16_t _kernel_cgra_stencil_235 = (int16_t) (kernel_cgra_stencil.extract<160, 175>());
  int16_t _kernel_cgra_stencil_236 = (int16_t) (kernel_cgra_stencil.extract<176, 191>());
  int16_t _kernel_cgra_stencil_237 = (int16_t) (kernel_cgra_stencil.extract<192, 207>());
  int16_t _kernel_cgra_stencil_238 = (int16_t) (kernel_cgra_stencil.extract<208, 223>());
  int16_t _kernel_cgra_stencil_239 = (int16_t) (kernel_cgra_stencil.extract<224, 239>());
  int16_t _kernel_cgra_stencil_240 = (int16_t) (kernel_cgra_stencil.extract<240, 255>());

  int16_t _output_cgra_stencil_15 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _2802 = _kernel_cgra_stencil_225 * _input_cgra_stencil_225;
  int16_t _2803 = _kernel_cgra_stencil_226 * _input_cgra_stencil_226;
  int16_t _2804 = _kernel_cgra_stencil_227 * _input_cgra_stencil_227;
  int16_t _2805 = _kernel_cgra_stencil_228 * _input_cgra_stencil_228;
  int16_t _2806 = _kernel_cgra_stencil_229 * _input_cgra_stencil_229;
  int16_t _2807 = _kernel_cgra_stencil_230 * _input_cgra_stencil_230;
  int16_t _2808 = _kernel_cgra_stencil_231 * _input_cgra_stencil_231;
  int16_t _2809 = _kernel_cgra_stencil_232 * _input_cgra_stencil_232;
  int16_t _2810 = _kernel_cgra_stencil_233 * _input_cgra_stencil_233;
  int16_t _2811 = _kernel_cgra_stencil_234 * _input_cgra_stencil_234;
  int16_t _2812 = _kernel_cgra_stencil_235 * _input_cgra_stencil_235;
  int16_t _2813 = _kernel_cgra_stencil_236 * _input_cgra_stencil_236;
  int16_t _2814 = _kernel_cgra_stencil_237 * _input_cgra_stencil_237;
  int16_t _2815 = _kernel_cgra_stencil_238 * _input_cgra_stencil_238;
  int16_t _2816 = _kernel_cgra_stencil_239 * _input_cgra_stencil_239;
  int16_t _2817 = _kernel_cgra_stencil_240 * _input_cgra_stencil_240;
  int16_t _2818 = _2816 + _2817;
  int16_t _2819 = _2815 + _2818;
  int16_t _2820 = _2814 + _2819;
  int16_t _2821 = _2813 + _2820;
  int16_t _2822 = _2812 + _2821;
  int16_t _2823 = _2811 + _2822;
  int16_t _2824 = _2810 + _2823;
  int16_t _2825 = _2809 + _2824;
  int16_t _2826 = _2808 + _2825;
  int16_t _2827 = _2807 + _2826;
  int16_t _2828 = _2806 + _2827;
  int16_t _2829 = _2805 + _2828;
  int16_t _2830 = _2804 + _2829;
  int16_t _2831 = _2803 + _2830;
  int16_t _2832 = _output_cgra_stencil_15 + _2831;
  int16_t _2833 = _2802 + _2832;
  return _2833;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w*16) + 15), output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 15), 0, output_cgra_s1_r_x, 0)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(((output_cgra_s1_w_w*16) + 15), output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 15), 1, output_cgra_s1_r_x, 0)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 15), 2, output_cgra_s1_r_x, 0)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 15), 3, output_cgra_s1_r_x, 0)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 15), 4, output_cgra_s1_r_x, 0)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 15), 5, output_cgra_s1_r_x, 0)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 15), 6, output_cgra_s1_r_x, 0)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 15), 7, output_cgra_s1_r_x, 0)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 15), 8, output_cgra_s1_r_x, 0)*input_cgra.stencil(8, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 15), 9, output_cgra_s1_r_x, 0)*input_cgra.stencil(9, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 15), 10, output_cgra_s1_r_x, 0)*input_cgra.stencil(10, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 15), 11, output_cgra_s1_r_x, 0)*input_cgra.stencil(11, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 15), 12, output_cgra_s1_r_x, 0)*input_cgra.stencil(12, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 15), 13, output_cgra_s1_r_x, 0)*input_cgra.stencil(13, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 15), 15, output_cgra_s1_r_x, 0)*input_cgra.stencil(15, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(((output_cgra_s1_w_w*16) + 15), 14, output_cgra_s1_r_x, 0)*input_cgra.stencil(14, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_31(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_241 = (int16_t) (input_cgra_stencil.extract<0, 15>());
  int16_t _input_cgra_stencil_242 = (int16_t) (input_cgra_stencil.extract<16, 31>());
  int16_t _input_cgra_stencil_243 = (int16_t) (input_cgra_stencil.extract<32, 47>());
  int16_t _input_cgra_stencil_244 = (int16_t) (input_cgra_stencil.extract<48, 63>());
  int16_t _input_cgra_stencil_245 = (int16_t) (input_cgra_stencil.extract<64, 79>());
  int16_t _input_cgra_stencil_246 = (int16_t) (input_cgra_stencil.extract<80, 95>());
  int16_t _input_cgra_stencil_247 = (int16_t) (input_cgra_stencil.extract<96, 111>());
  int16_t _input_cgra_stencil_248 = (int16_t) (input_cgra_stencil.extract<112, 127>());
  int16_t _input_cgra_stencil_249 = (int16_t) (input_cgra_stencil.extract<128, 143>());
  int16_t _input_cgra_stencil_250 = (int16_t) (input_cgra_stencil.extract<144, 159>());
  int16_t _input_cgra_stencil_251 = (int16_t) (input_cgra_stencil.extract<160, 175>());
  int16_t _input_cgra_stencil_252 = (int16_t) (input_cgra_stencil.extract<176, 191>());
  int16_t _input_cgra_stencil_253 = (int16_t) (input_cgra_stencil.extract<192, 207>());
  int16_t _input_cgra_stencil_254 = (int16_t) (input_cgra_stencil.extract<208, 223>());
  int16_t _input_cgra_stencil_255 = (int16_t) (input_cgra_stencil.extract<224, 239>());
  int16_t _input_cgra_stencil_256 = (int16_t) (input_cgra_stencil.extract<240, 255>());

  int16_t _kernel_cgra_stencil_241 = (int16_t) (kernel_cgra_stencil.extract<0, 15>());
  int16_t _kernel_cgra_stencil_242 = (int16_t) (kernel_cgra_stencil.extract<16, 31>());
  int16_t _kernel_cgra_stencil_243 = (int16_t) (kernel_cgra_stencil.extract<32, 47>());
  int16_t _kernel_cgra_stencil_244 = (int16_t) (kernel_cgra_stencil.extract<48, 63>());
  int16_t _kernel_cgra_stencil_245 = (int16_t) (kernel_cgra_stencil.extract<64, 79>());
  int16_t _kernel_cgra_stencil_246 = (int16_t) (kernel_cgra_stencil.extract<80, 95>());
  int16_t _kernel_cgra_stencil_247 = (int16_t) (kernel_cgra_stencil.extract<96, 111>());
  int16_t _kernel_cgra_stencil_248 = (int16_t) (kernel_cgra_stencil.extract<112, 127>());
  int16_t _kernel_cgra_stencil_249 = (int16_t) (kernel_cgra_stencil.extract<128, 143>());
  int16_t _kernel_cgra_stencil_250 = (int16_t) (kernel_cgra_stencil.extract<144, 159>());
  int16_t _kernel_cgra_stencil_251 = (int16_t) (kernel_cgra_stencil.extract<160, 175>());
  int16_t _kernel_cgra_stencil_252 = (int16_t) (kernel_cgra_stencil.extract<176, 191>());
  int16_t _kernel_cgra_stencil_253 = (int16_t) (kernel_cgra_stencil.extract<192, 207>());
  int16_t _kernel_cgra_stencil_254 = (int16_t) (kernel_cgra_stencil.extract<208, 223>());
  int16_t _kernel_cgra_stencil_255 = (int16_t) (kernel_cgra_stencil.extract<224, 239>());
  int16_t _kernel_cgra_stencil_256 = (int16_t) (kernel_cgra_stencil.extract<240, 255>());

  int16_t _output_cgra_stencil_16 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _2935 = _kernel_cgra_stencil_241 * _input_cgra_stencil_241;
  int16_t _2936 = _kernel_cgra_stencil_242 * _input_cgra_stencil_242;
  int16_t _2937 = _kernel_cgra_stencil_243 * _input_cgra_stencil_243;
  int16_t _2938 = _kernel_cgra_stencil_244 * _input_cgra_stencil_244;
  int16_t _2939 = _kernel_cgra_stencil_245 * _input_cgra_stencil_245;
  int16_t _2940 = _kernel_cgra_stencil_246 * _input_cgra_stencil_246;
  int16_t _2941 = _kernel_cgra_stencil_247 * _input_cgra_stencil_247;
  int16_t _2942 = _kernel_cgra_stencil_248 * _input_cgra_stencil_248;
  int16_t _2943 = _kernel_cgra_stencil_249 * _input_cgra_stencil_249;
  int16_t _2944 = _kernel_cgra_stencil_250 * _input_cgra_stencil_250;
  int16_t _2945 = _kernel_cgra_stencil_251 * _input_cgra_stencil_251;
  int16_t _2946 = _kernel_cgra_stencil_252 * _input_cgra_stencil_252;
  int16_t _2947 = _kernel_cgra_stencil_253 * _input_cgra_stencil_253;
  int16_t _2948 = _kernel_cgra_stencil_254 * _input_cgra_stencil_254;
  int16_t _2949 = _kernel_cgra_stencil_255 * _input_cgra_stencil_255;
  int16_t _2950 = _kernel_cgra_stencil_256 * _input_cgra_stencil_256;
  int16_t _2951 = _2949 + _2950;
  int16_t _2952 = _2948 + _2951;
  int16_t _2953 = _2947 + _2952;
  int16_t _2954 = _2946 + _2953;
  int16_t _2955 = _2945 + _2954;
  int16_t _2956 = _2944 + _2955;
  int16_t _2957 = _2943 + _2956;
  int16_t _2958 = _2942 + _2957;
  int16_t _2959 = _2941 + _2958;
  int16_t _2960 = _2940 + _2959;
  int16_t _2961 = _2939 + _2960;
  int16_t _2962 = _2938 + _2961;
  int16_t _2963 = _2937 + _2962;
  int16_t _2964 = _2936 + _2963;
  int16_t _2965 = _output_cgra_stencil_16 + _2964;
  int16_t _2966 = _2935 + _2965;
  return _2966;
}

//store is: output_glb.stencil((((output_glb_s0_w_w_glb*16) + output_glb_s0_w_w_cgra_w_cgra)*4), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra) = output_cgra.stencil((output_glb_s0_w_w_cgra_w_cgra*4), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
hw_uint<16> hcompute_output_glb_stencil(hw_uint<16>& output_cgra_stencil) {
  int16_t _output_cgra_stencil_17 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  return _output_cgra_stencil_17;
}

//store is: output_glb.stencil(((((output_glb_s0_w_w_glb*16) + output_glb_s0_w_w_cgra_w_cgra)*4) + 1), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra) = output_cgra.stencil(((output_glb_s0_w_w_cgra_w_cgra*4) + 1), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
hw_uint<16> hcompute_output_glb_stencil_1(hw_uint<16>& output_cgra_stencil) {
  int16_t _output_cgra_stencil_18 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  return _output_cgra_stencil_18;
}

//store is: output_glb.stencil(((((output_glb_s0_w_w_glb*16) + output_glb_s0_w_w_cgra_w_cgra)*4) + 2), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra) = output_cgra.stencil(((output_glb_s0_w_w_cgra_w_cgra*4) + 2), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
hw_uint<16> hcompute_output_glb_stencil_2(hw_uint<16>& output_cgra_stencil) {
  int16_t _output_cgra_stencil_19 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  return _output_cgra_stencil_19;
}

//store is: output_glb.stencil(((((output_glb_s0_w_w_glb*16) + output_glb_s0_w_w_cgra_w_cgra)*4) + 3), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra) = output_cgra.stencil(((output_glb_s0_w_w_cgra_w_cgra*4) + 3), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
hw_uint<16> hcompute_output_glb_stencil_3(hw_uint<16>& output_cgra_stencil) {
  int16_t _output_cgra_stencil_20 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  return _output_cgra_stencil_20;
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

