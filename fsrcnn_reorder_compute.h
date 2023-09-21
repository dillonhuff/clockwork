#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: input_glb.stencil(input_glb_s0_x, input_glb_s0_y, (input_glb_s0_z_z*8)) = input_host.stencil(input_glb_s0_x, input_glb_s0_y, (input_glb_s0_z_z*8))
hw_uint<16> hcompute_input_glb_stencil(hw_uint<16>& input_host_stencil) {
  int16_t _input_host_stencil_1 = (int16_t) (input_host_stencil.extract<0, 15>());

  return _input_host_stencil_1;
}

//store is: input_glb.stencil(input_glb_s0_x_1, input_glb_s0_y_1, ((input_glb_s0_z_z*8) + 1)) = input_host.stencil(input_glb_s0_x_1, input_glb_s0_y_1, ((input_glb_s0_z_z*8) + 1))
hw_uint<16> hcompute_input_glb_stencil_1(hw_uint<16>& input_host_stencil) {
  int16_t _input_host_stencil_2 = (int16_t) (input_host_stencil.extract<0, 15>());

  return _input_host_stencil_2;
}

//store is: input_glb.stencil(input_glb_s0_x_2, input_glb_s0_y_2, ((input_glb_s0_z_z*8) + 2)) = input_host.stencil(input_glb_s0_x_2, input_glb_s0_y_2, ((input_glb_s0_z_z*8) + 2))
hw_uint<16> hcompute_input_glb_stencil_2(hw_uint<16>& input_host_stencil) {
  int16_t _input_host_stencil_3 = (int16_t) (input_host_stencil.extract<0, 15>());

  return _input_host_stencil_3;
}

//store is: input_glb.stencil(input_glb_s0_x_3, input_glb_s0_y_3, ((input_glb_s0_z_z*8) + 3)) = input_host.stencil(input_glb_s0_x_3, input_glb_s0_y_3, ((input_glb_s0_z_z*8) + 3))
hw_uint<16> hcompute_input_glb_stencil_3(hw_uint<16>& input_host_stencil) {
  int16_t _input_host_stencil_4 = (int16_t) (input_host_stencil.extract<0, 15>());

  return _input_host_stencil_4;
}

//store is: input_glb.stencil(input_glb_s0_x_4, input_glb_s0_y_4, ((input_glb_s0_z_z*8) + 4)) = input_host.stencil(input_glb_s0_x_4, input_glb_s0_y_4, ((input_glb_s0_z_z*8) + 4))
hw_uint<16> hcompute_input_glb_stencil_4(hw_uint<16>& input_host_stencil) {
  int16_t _input_host_stencil_5 = (int16_t) (input_host_stencil.extract<0, 15>());

  return _input_host_stencil_5;
}

//store is: input_glb.stencil(input_glb_s0_x_5, input_glb_s0_y_5, ((input_glb_s0_z_z*8) + 5)) = input_host.stencil(input_glb_s0_x_5, input_glb_s0_y_5, ((input_glb_s0_z_z*8) + 5))
hw_uint<16> hcompute_input_glb_stencil_5(hw_uint<16>& input_host_stencil) {
  int16_t _input_host_stencil_6 = (int16_t) (input_host_stencil.extract<0, 15>());

  return _input_host_stencil_6;
}

//store is: input_glb.stencil(input_glb_s0_x_6, input_glb_s0_y_6, ((input_glb_s0_z_z*8) + 6)) = input_host.stencil(input_glb_s0_x_6, input_glb_s0_y_6, ((input_glb_s0_z_z*8) + 6))
hw_uint<16> hcompute_input_glb_stencil_6(hw_uint<16>& input_host_stencil) {
  int16_t _input_host_stencil_7 = (int16_t) (input_host_stencil.extract<0, 15>());

  return _input_host_stencil_7;
}

//store is: input_glb.stencil(input_glb_s0_x_7, input_glb_s0_y_7, ((input_glb_s0_z_z*8) + 7)) = input_host.stencil(input_glb_s0_x_7, input_glb_s0_y_7, ((input_glb_s0_z_z*8) + 7))
hw_uint<16> hcompute_input_glb_stencil_7(hw_uint<16>& input_host_stencil) {
  int16_t _input_host_stencil_8 = (int16_t) (input_host_stencil.extract<0, 15>());

  return _input_host_stencil_8;
}

//store is: kernel_glb.stencil(kernel_glb_s0_z_z, kernel_glb_s0_w) = kernel_host.stencil(kernel_glb_s0_z_z, kernel_glb_s0_w)
hw_uint<16> hcompute_kernel_glb_stencil(hw_uint<16>& kernel_host_stencil) {
  int16_t _kernel_host_stencil_1 = (int16_t) (kernel_host_stencil.extract<0, 15>());

  return _kernel_host_stencil_1;
}

//store is: kernel_cgra.stencil(kernel_cgra_s0_z, kernel_cgra_s0_w) = kernel_glb.stencil(kernel_cgra_s0_z, kernel_cgra_s0_w)
hw_uint<16> hcompute_kernel_cgra_stencil(hw_uint<16>& kernel_glb_stencil) {
  int16_t _kernel_glb_stencil_1 = (int16_t) (kernel_glb_stencil.extract<0, 15>());

  return _kernel_glb_stencil_1;
}

//store is: kernel1_glb.stencil(kernel1_glb_s0_z_z, kernel1_glb_s0_w, kernel1_glb_s0_x, kernel1_glb_s0_y) = kernel1_host.stencil(kernel1_glb_s0_z_z, kernel1_glb_s0_w, kernel1_glb_s0_x, kernel1_glb_s0_y)
hw_uint<16> hcompute_kernel1_glb_stencil(hw_uint<16>& kernel1_host_stencil) {
  int16_t _kernel1_host_stencil_1 = (int16_t) (kernel1_host_stencil.extract<0, 15>());

  return _kernel1_host_stencil_1;
}

//store is: kernel1_cgra.stencil(kernel1_cgra_s0_z, kernel1_cgra_s0_w, kernel1_cgra_s0_x, kernel1_cgra_s0_y) = kernel1_glb.stencil(kernel1_cgra_s0_z, kernel1_cgra_s0_w, kernel1_cgra_s0_x, kernel1_cgra_s0_y)
hw_uint<16> hcompute_kernel1_cgra_stencil(hw_uint<16>& kernel1_glb_stencil) {
  int16_t _kernel1_glb_stencil_1 = (int16_t) (kernel1_glb_stencil.extract<0, 15>());

  return _kernel1_glb_stencil_1;
}

//store is: kernel2_glb.stencil(kernel2_glb_s0_z_z, kernel2_glb_s0_w) = kernel2_host.stencil(kernel2_glb_s0_z_z, kernel2_glb_s0_w)
hw_uint<16> hcompute_kernel2_glb_stencil(hw_uint<16>& kernel2_host_stencil) {
  int16_t _kernel2_host_stencil_1 = (int16_t) (kernel2_host_stencil.extract<0, 15>());

  return _kernel2_host_stencil_1;
}

//store is: kernel2_cgra.stencil(kernel2_cgra_s0_z, kernel2_cgra_s0_w) = kernel2_glb.stencil(kernel2_cgra_s0_z, kernel2_cgra_s0_w)
hw_uint<16> hcompute_kernel2_cgra_stencil(hw_uint<16>& kernel2_glb_stencil) {
  int16_t _kernel2_glb_stencil_1 = (int16_t) (kernel2_glb_stencil.extract<0, 15>());

  return _kernel2_glb_stencil_1;
}

//store is: input_cgra.stencil((((output_glb_s0_x_x_glb*14) + input_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + input_cgra_s0_y) - (output_glb_s0_y_y_glb*7)), (input_cgra_s0_z_z_glb*8)) = input_glb.stencil(((output_glb_s0_x_x_glb*14) + input_cgra_s0_x), ((output_glb_s0_y_y_glb*7) + input_cgra_s0_y), (input_cgra_s0_z_z_glb*8))
hw_uint<16> hcompute_input_cgra_stencil(hw_uint<16>& input_glb_stencil) {
  int16_t _input_glb_stencil_1 = (int16_t) (input_glb_stencil.extract<0, 15>());

  return _input_glb_stencil_1;
}

//store is: input_cgra.stencil((((output_glb_s0_x_x_glb*14) + input_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + input_cgra_s0_y) - (output_glb_s0_y_y_glb*7)), ((input_cgra_s0_z_z_glb*8) + 1)) = input_glb.stencil(((output_glb_s0_x_x_glb*14) + input_cgra_s0_x), ((output_glb_s0_y_y_glb*7) + input_cgra_s0_y), ((input_cgra_s0_z_z_glb*8) + 1))
hw_uint<16> hcompute_input_cgra_stencil_1(hw_uint<16>& input_glb_stencil) {
  int16_t _input_glb_stencil_2 = (int16_t) (input_glb_stencil.extract<0, 15>());

  return _input_glb_stencil_2;
}

//store is: input_cgra.stencil((((output_glb_s0_x_x_glb*14) + input_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + input_cgra_s0_y) - (output_glb_s0_y_y_glb*7)), ((input_cgra_s0_z_z_glb*8) + 2)) = input_glb.stencil(((output_glb_s0_x_x_glb*14) + input_cgra_s0_x), ((output_glb_s0_y_y_glb*7) + input_cgra_s0_y), ((input_cgra_s0_z_z_glb*8) + 2))
hw_uint<16> hcompute_input_cgra_stencil_2(hw_uint<16>& input_glb_stencil) {
  int16_t _input_glb_stencil_3 = (int16_t) (input_glb_stencil.extract<0, 15>());

  return _input_glb_stencil_3;
}

//store is: input_cgra.stencil((((output_glb_s0_x_x_glb*14) + input_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + input_cgra_s0_y) - (output_glb_s0_y_y_glb*7)), ((input_cgra_s0_z_z_glb*8) + 3)) = input_glb.stencil(((output_glb_s0_x_x_glb*14) + input_cgra_s0_x), ((output_glb_s0_y_y_glb*7) + input_cgra_s0_y), ((input_cgra_s0_z_z_glb*8) + 3))
hw_uint<16> hcompute_input_cgra_stencil_3(hw_uint<16>& input_glb_stencil) {
  int16_t _input_glb_stencil_4 = (int16_t) (input_glb_stencil.extract<0, 15>());

  return _input_glb_stencil_4;
}

//store is: input_cgra.stencil((((output_glb_s0_x_x_glb*14) + input_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + input_cgra_s0_y) - (output_glb_s0_y_y_glb*7)), ((input_cgra_s0_z_z_glb*8) + 4)) = input_glb.stencil(((output_glb_s0_x_x_glb*14) + input_cgra_s0_x), ((output_glb_s0_y_y_glb*7) + input_cgra_s0_y), ((input_cgra_s0_z_z_glb*8) + 4))
hw_uint<16> hcompute_input_cgra_stencil_4(hw_uint<16>& input_glb_stencil) {
  int16_t _input_glb_stencil_5 = (int16_t) (input_glb_stencil.extract<0, 15>());

  return _input_glb_stencil_5;
}

//store is: input_cgra.stencil((((output_glb_s0_x_x_glb*14) + input_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + input_cgra_s0_y) - (output_glb_s0_y_y_glb*7)), ((input_cgra_s0_z_z_glb*8) + 5)) = input_glb.stencil(((output_glb_s0_x_x_glb*14) + input_cgra_s0_x), ((output_glb_s0_y_y_glb*7) + input_cgra_s0_y), ((input_cgra_s0_z_z_glb*8) + 5))
hw_uint<16> hcompute_input_cgra_stencil_5(hw_uint<16>& input_glb_stencil) {
  int16_t _input_glb_stencil_6 = (int16_t) (input_glb_stencil.extract<0, 15>());

  return _input_glb_stencil_6;
}

//store is: input_cgra.stencil((((output_glb_s0_x_x_glb*14) + input_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + input_cgra_s0_y) - (output_glb_s0_y_y_glb*7)), ((input_cgra_s0_z_z_glb*8) + 6)) = input_glb.stencil(((output_glb_s0_x_x_glb*14) + input_cgra_s0_x), ((output_glb_s0_y_y_glb*7) + input_cgra_s0_y), ((input_cgra_s0_z_z_glb*8) + 6))
hw_uint<16> hcompute_input_cgra_stencil_6(hw_uint<16>& input_glb_stencil) {
  int16_t _input_glb_stencil_7 = (int16_t) (input_glb_stencil.extract<0, 15>());

  return _input_glb_stencil_7;
}

//store is: input_cgra.stencil((((output_glb_s0_x_x_glb*14) + input_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + input_cgra_s0_y) - (output_glb_s0_y_y_glb*7)), ((input_cgra_s0_z_z_glb*8) + 7)) = input_glb.stencil(((output_glb_s0_x_x_glb*14) + input_cgra_s0_x), ((output_glb_s0_y_y_glb*7) + input_cgra_s0_y), ((input_cgra_s0_z_z_glb*8) + 7))
hw_uint<16> hcompute_input_cgra_stencil_7(hw_uint<16>& input_glb_stencil) {
  int16_t _input_glb_stencil_8 = (int16_t) (input_glb_stencil.extract<0, 15>());

  return _input_glb_stencil_8;
}

//store is: f1_cgra.stencil(0, (((output_glb_s0_x_x_glb*14) + f1_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s0_y) - (output_glb_s0_y_y_glb*7))) = (int16)0
hw_uint<16> hcompute_f1_cgra_stencil() {
  int16_t _1060 = (int16_t)(0);
  return _1060;
}

//store is: f1_cgra.stencil(1, (((output_glb_s0_x_x_glb*14) + f1_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s0_y) - (output_glb_s0_y_y_glb*7))) = (int16)0
hw_uint<16> hcompute_f1_cgra_stencil_1() {
  int16_t _1069 = (int16_t)(0);
  return _1069;
}

//store is: f1_cgra.stencil(2, (((output_glb_s0_x_x_glb*14) + f1_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s0_y) - (output_glb_s0_y_y_glb*7))) = (int16)0
hw_uint<16> hcompute_f1_cgra_stencil_2() {
  int16_t _1078 = (int16_t)(0);
  return _1078;
}

//store is: f1_cgra.stencil(3, (((output_glb_s0_x_x_glb*14) + f1_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s0_y) - (output_glb_s0_y_y_glb*7))) = (int16)0
hw_uint<16> hcompute_f1_cgra_stencil_3() {
  int16_t _1087 = (int16_t)(0);
  return _1087;
}

//store is: f1_cgra.stencil(4, (((output_glb_s0_x_x_glb*14) + f1_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s0_y) - (output_glb_s0_y_y_glb*7))) = (int16)0
hw_uint<16> hcompute_f1_cgra_stencil_4() {
  int16_t _1096 = (int16_t)(0);
  return _1096;
}

//store is: f1_cgra.stencil(5, (((output_glb_s0_x_x_glb*14) + f1_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s0_y) - (output_glb_s0_y_y_glb*7))) = (int16)0
hw_uint<16> hcompute_f1_cgra_stencil_5() {
  int16_t _1105 = (int16_t)(0);
  return _1105;
}

//store is: f1_cgra.stencil(6, (((output_glb_s0_x_x_glb*14) + f1_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s0_y) - (output_glb_s0_y_y_glb*7))) = (int16)0
hw_uint<16> hcompute_f1_cgra_stencil_6() {
  int16_t _1114 = (int16_t)(0);
  return _1114;
}

//store is: f1_cgra.stencil(7, (((output_glb_s0_x_x_glb*14) + f1_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s0_y) - (output_glb_s0_y_y_glb*7))) = (int16)0
hw_uint<16> hcompute_f1_cgra_stencil_7() {
  int16_t _1123 = (int16_t)(0);
  return _1123;
}

//store is: f1_cgra.stencil(0, (((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7))) = ((kernel_cgra.stencil((f1_cgra_s1_r0_0_x_rz_cgra*8), 0)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), (f1_cgra_s1_r0_0_x_rz_cgra*8))) + (f1_cgra.stencil(0, (((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1), 0)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2), 0)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3), 0)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4), 0)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5), 0)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7), 0)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7))) + (kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6), 0)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)))))))))))
hw_uint<16> hcompute_f1_cgra_stencil_8(hw_uint<16>& f1_cgra_stencil, hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil) {
  int16_t _f1_cgra_stencil_1 = (int16_t) (f1_cgra_stencil.extract<0, 15>());

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

  int16_t _1134 = _kernel_cgra_stencil_1 * _input_cgra_stencil_1;
  int16_t _1135 = _kernel_cgra_stencil_2 * _input_cgra_stencil_2;
  int16_t _1136 = _kernel_cgra_stencil_3 * _input_cgra_stencil_3;
  int16_t _1137 = _kernel_cgra_stencil_4 * _input_cgra_stencil_4;
  int16_t _1138 = _kernel_cgra_stencil_5 * _input_cgra_stencil_5;
  int16_t _1139 = _kernel_cgra_stencil_6 * _input_cgra_stencil_6;
  int16_t _1140 = _kernel_cgra_stencil_7 * _input_cgra_stencil_7;
  int16_t _1141 = _kernel_cgra_stencil_8 * _input_cgra_stencil_8;
  int16_t _1142 = _1140 + _1141;
  int16_t _1143 = _1139 + _1142;
  int16_t _1144 = _1138 + _1143;
  int16_t _1145 = _1137 + _1144;
  int16_t _1146 = _1136 + _1145;
  int16_t _1147 = _1135 + _1146;
  int16_t _1148 = _f1_cgra_stencil_1 + _1147;
  int16_t _1149 = _1134 + _1148;
  return _1149;
}

//store is: f1_cgra.stencil(1, (((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7))) = ((kernel_cgra.stencil((f1_cgra_s1_r0_0_x_rz_cgra*8), 1)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), (f1_cgra_s1_r0_0_x_rz_cgra*8))) + (f1_cgra.stencil(1, (((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1), 1)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2), 1)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3), 1)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4), 1)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5), 1)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7), 1)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7))) + (kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6), 1)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)))))))))))
hw_uint<16> hcompute_f1_cgra_stencil_9(hw_uint<16>& f1_cgra_stencil, hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil) {
  int16_t _f1_cgra_stencil_2 = (int16_t) (f1_cgra_stencil.extract<0, 15>());

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

  int16_t _1213 = _kernel_cgra_stencil_9 * _input_cgra_stencil_9;
  int16_t _1214 = _kernel_cgra_stencil_10 * _input_cgra_stencil_10;
  int16_t _1215 = _kernel_cgra_stencil_11 * _input_cgra_stencil_11;
  int16_t _1216 = _kernel_cgra_stencil_12 * _input_cgra_stencil_12;
  int16_t _1217 = _kernel_cgra_stencil_13 * _input_cgra_stencil_13;
  int16_t _1218 = _kernel_cgra_stencil_14 * _input_cgra_stencil_14;
  int16_t _1219 = _kernel_cgra_stencil_15 * _input_cgra_stencil_15;
  int16_t _1220 = _kernel_cgra_stencil_16 * _input_cgra_stencil_16;
  int16_t _1221 = _1219 + _1220;
  int16_t _1222 = _1218 + _1221;
  int16_t _1223 = _1217 + _1222;
  int16_t _1224 = _1216 + _1223;
  int16_t _1225 = _1215 + _1224;
  int16_t _1226 = _1214 + _1225;
  int16_t _1227 = _f1_cgra_stencil_2 + _1226;
  int16_t _1228 = _1213 + _1227;
  return _1228;
}

//store is: f1_cgra.stencil(2, (((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7))) = ((kernel_cgra.stencil((f1_cgra_s1_r0_0_x_rz_cgra*8), 2)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), (f1_cgra_s1_r0_0_x_rz_cgra*8))) + (f1_cgra.stencil(2, (((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1), 2)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2), 2)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3), 2)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4), 2)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5), 2)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7), 2)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7))) + (kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6), 2)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)))))))))))
hw_uint<16> hcompute_f1_cgra_stencil_10(hw_uint<16>& f1_cgra_stencil, hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil) {
  int16_t _f1_cgra_stencil_3 = (int16_t) (f1_cgra_stencil.extract<0, 15>());

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

  int16_t _1292 = _kernel_cgra_stencil_17 * _input_cgra_stencil_17;
  int16_t _1293 = _kernel_cgra_stencil_18 * _input_cgra_stencil_18;
  int16_t _1294 = _kernel_cgra_stencil_19 * _input_cgra_stencil_19;
  int16_t _1295 = _kernel_cgra_stencil_20 * _input_cgra_stencil_20;
  int16_t _1296 = _kernel_cgra_stencil_21 * _input_cgra_stencil_21;
  int16_t _1297 = _kernel_cgra_stencil_22 * _input_cgra_stencil_22;
  int16_t _1298 = _kernel_cgra_stencil_23 * _input_cgra_stencil_23;
  int16_t _1299 = _kernel_cgra_stencil_24 * _input_cgra_stencil_24;
  int16_t _1300 = _1298 + _1299;
  int16_t _1301 = _1297 + _1300;
  int16_t _1302 = _1296 + _1301;
  int16_t _1303 = _1295 + _1302;
  int16_t _1304 = _1294 + _1303;
  int16_t _1305 = _1293 + _1304;
  int16_t _1306 = _f1_cgra_stencil_3 + _1305;
  int16_t _1307 = _1292 + _1306;
  return _1307;
}

//store is: f1_cgra.stencil(3, (((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7))) = ((kernel_cgra.stencil((f1_cgra_s1_r0_0_x_rz_cgra*8), 3)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), (f1_cgra_s1_r0_0_x_rz_cgra*8))) + (f1_cgra.stencil(3, (((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1), 3)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2), 3)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3), 3)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4), 3)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5), 3)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7), 3)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7))) + (kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6), 3)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)))))))))))
hw_uint<16> hcompute_f1_cgra_stencil_11(hw_uint<16>& f1_cgra_stencil, hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil) {
  int16_t _f1_cgra_stencil_4 = (int16_t) (f1_cgra_stencil.extract<0, 15>());

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

  int16_t _1371 = _kernel_cgra_stencil_25 * _input_cgra_stencil_25;
  int16_t _1372 = _kernel_cgra_stencil_26 * _input_cgra_stencil_26;
  int16_t _1373 = _kernel_cgra_stencil_27 * _input_cgra_stencil_27;
  int16_t _1374 = _kernel_cgra_stencil_28 * _input_cgra_stencil_28;
  int16_t _1375 = _kernel_cgra_stencil_29 * _input_cgra_stencil_29;
  int16_t _1376 = _kernel_cgra_stencil_30 * _input_cgra_stencil_30;
  int16_t _1377 = _kernel_cgra_stencil_31 * _input_cgra_stencil_31;
  int16_t _1378 = _kernel_cgra_stencil_32 * _input_cgra_stencil_32;
  int16_t _1379 = _1377 + _1378;
  int16_t _1380 = _1376 + _1379;
  int16_t _1381 = _1375 + _1380;
  int16_t _1382 = _1374 + _1381;
  int16_t _1383 = _1373 + _1382;
  int16_t _1384 = _1372 + _1383;
  int16_t _1385 = _f1_cgra_stencil_4 + _1384;
  int16_t _1386 = _1371 + _1385;
  return _1386;
}

//store is: f1_cgra.stencil(4, (((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7))) = ((kernel_cgra.stencil((f1_cgra_s1_r0_0_x_rz_cgra*8), 4)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), (f1_cgra_s1_r0_0_x_rz_cgra*8))) + (f1_cgra.stencil(4, (((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1), 4)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2), 4)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3), 4)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4), 4)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5), 4)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7), 4)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7))) + (kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6), 4)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)))))))))))
hw_uint<16> hcompute_f1_cgra_stencil_12(hw_uint<16>& f1_cgra_stencil, hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil) {
  int16_t _f1_cgra_stencil_5 = (int16_t) (f1_cgra_stencil.extract<0, 15>());

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

  int16_t _1450 = _kernel_cgra_stencil_33 * _input_cgra_stencil_33;
  int16_t _1451 = _kernel_cgra_stencil_34 * _input_cgra_stencil_34;
  int16_t _1452 = _kernel_cgra_stencil_35 * _input_cgra_stencil_35;
  int16_t _1453 = _kernel_cgra_stencil_36 * _input_cgra_stencil_36;
  int16_t _1454 = _kernel_cgra_stencil_37 * _input_cgra_stencil_37;
  int16_t _1455 = _kernel_cgra_stencil_38 * _input_cgra_stencil_38;
  int16_t _1456 = _kernel_cgra_stencil_39 * _input_cgra_stencil_39;
  int16_t _1457 = _kernel_cgra_stencil_40 * _input_cgra_stencil_40;
  int16_t _1458 = _1456 + _1457;
  int16_t _1459 = _1455 + _1458;
  int16_t _1460 = _1454 + _1459;
  int16_t _1461 = _1453 + _1460;
  int16_t _1462 = _1452 + _1461;
  int16_t _1463 = _1451 + _1462;
  int16_t _1464 = _f1_cgra_stencil_5 + _1463;
  int16_t _1465 = _1450 + _1464;
  return _1465;
}

//store is: f1_cgra.stencil(5, (((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7))) = ((kernel_cgra.stencil((f1_cgra_s1_r0_0_x_rz_cgra*8), 5)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), (f1_cgra_s1_r0_0_x_rz_cgra*8))) + (f1_cgra.stencil(5, (((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1), 5)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2), 5)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3), 5)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4), 5)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5), 5)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7), 5)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7))) + (kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6), 5)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)))))))))))
hw_uint<16> hcompute_f1_cgra_stencil_13(hw_uint<16>& f1_cgra_stencil, hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil) {
  int16_t _f1_cgra_stencil_6 = (int16_t) (f1_cgra_stencil.extract<0, 15>());

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

  int16_t _1529 = _kernel_cgra_stencil_41 * _input_cgra_stencil_41;
  int16_t _1530 = _kernel_cgra_stencil_42 * _input_cgra_stencil_42;
  int16_t _1531 = _kernel_cgra_stencil_43 * _input_cgra_stencil_43;
  int16_t _1532 = _kernel_cgra_stencil_44 * _input_cgra_stencil_44;
  int16_t _1533 = _kernel_cgra_stencil_45 * _input_cgra_stencil_45;
  int16_t _1534 = _kernel_cgra_stencil_46 * _input_cgra_stencil_46;
  int16_t _1535 = _kernel_cgra_stencil_47 * _input_cgra_stencil_47;
  int16_t _1536 = _kernel_cgra_stencil_48 * _input_cgra_stencil_48;
  int16_t _1537 = _1535 + _1536;
  int16_t _1538 = _1534 + _1537;
  int16_t _1539 = _1533 + _1538;
  int16_t _1540 = _1532 + _1539;
  int16_t _1541 = _1531 + _1540;
  int16_t _1542 = _1530 + _1541;
  int16_t _1543 = _f1_cgra_stencil_6 + _1542;
  int16_t _1544 = _1529 + _1543;
  return _1544;
}

//store is: f1_cgra.stencil(6, (((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7))) = ((kernel_cgra.stencil((f1_cgra_s1_r0_0_x_rz_cgra*8), 6)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), (f1_cgra_s1_r0_0_x_rz_cgra*8))) + (f1_cgra.stencil(6, (((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1), 6)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2), 6)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3), 6)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4), 6)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5), 6)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7), 6)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7))) + (kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6), 6)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)))))))))))
hw_uint<16> hcompute_f1_cgra_stencil_14(hw_uint<16>& f1_cgra_stencil, hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil) {
  int16_t _f1_cgra_stencil_7 = (int16_t) (f1_cgra_stencil.extract<0, 15>());

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

  int16_t _1608 = _kernel_cgra_stencil_49 * _input_cgra_stencil_49;
  int16_t _1609 = _kernel_cgra_stencil_50 * _input_cgra_stencil_50;
  int16_t _1610 = _kernel_cgra_stencil_51 * _input_cgra_stencil_51;
  int16_t _1611 = _kernel_cgra_stencil_52 * _input_cgra_stencil_52;
  int16_t _1612 = _kernel_cgra_stencil_53 * _input_cgra_stencil_53;
  int16_t _1613 = _kernel_cgra_stencil_54 * _input_cgra_stencil_54;
  int16_t _1614 = _kernel_cgra_stencil_55 * _input_cgra_stencil_55;
  int16_t _1615 = _kernel_cgra_stencil_56 * _input_cgra_stencil_56;
  int16_t _1616 = _1614 + _1615;
  int16_t _1617 = _1613 + _1616;
  int16_t _1618 = _1612 + _1617;
  int16_t _1619 = _1611 + _1618;
  int16_t _1620 = _1610 + _1619;
  int16_t _1621 = _1609 + _1620;
  int16_t _1622 = _f1_cgra_stencil_7 + _1621;
  int16_t _1623 = _1608 + _1622;
  return _1623;
}

//store is: f1_cgra.stencil(7, (((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7))) = ((kernel_cgra.stencil((f1_cgra_s1_r0_0_x_rz_cgra*8), 7)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), (f1_cgra_s1_r0_0_x_rz_cgra*8))) + (f1_cgra.stencil(7, (((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1), 7)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 1))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2), 7)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 2))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3), 7)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 3))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4), 7)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 4))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5), 7)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 5))) + ((kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7), 7)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 7))) + (kernel_cgra.stencil(((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6), 7)*input_cgra.stencil((((output_glb_s0_x_x_glb*14) + f1_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_s1_y) - (output_glb_s0_y_y_glb*7)), ((f1_cgra_s1_r0_0_x_rz_cgra*8) + 6)))))))))))
hw_uint<16> hcompute_f1_cgra_stencil_15(hw_uint<16>& f1_cgra_stencil, hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil) {
  int16_t _f1_cgra_stencil_8 = (int16_t) (f1_cgra_stencil.extract<0, 15>());

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

  int16_t _1687 = _kernel_cgra_stencil_57 * _input_cgra_stencil_57;
  int16_t _1688 = _kernel_cgra_stencil_58 * _input_cgra_stencil_58;
  int16_t _1689 = _kernel_cgra_stencil_59 * _input_cgra_stencil_59;
  int16_t _1690 = _kernel_cgra_stencil_60 * _input_cgra_stencil_60;
  int16_t _1691 = _kernel_cgra_stencil_61 * _input_cgra_stencil_61;
  int16_t _1692 = _kernel_cgra_stencil_62 * _input_cgra_stencil_62;
  int16_t _1693 = _kernel_cgra_stencil_63 * _input_cgra_stencil_63;
  int16_t _1694 = _kernel_cgra_stencil_64 * _input_cgra_stencil_64;
  int16_t _1695 = _1693 + _1694;
  int16_t _1696 = _1692 + _1695;
  int16_t _1697 = _1691 + _1696;
  int16_t _1698 = _1690 + _1697;
  int16_t _1699 = _1689 + _1698;
  int16_t _1700 = _1688 + _1699;
  int16_t _1701 = _f1_cgra_stencil_8 + _1700;
  int16_t _1702 = _1687 + _1701;
  return _1702;
}

//store is: f1_cgra$1.stencil(0, (((output_glb_s0_x_x_glb*14) + f1_cgra_1_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_1_s0_y) - (output_glb_s0_y_y_glb*7))) = (int16)0
hw_uint<16> hcompute_f1_cgra_1_stencil() {
  int16_t _1768 = (int16_t)(0);
  return _1768;
}

//store is: f1_cgra$1.stencil(1, (((output_glb_s0_x_x_glb*14) + f1_cgra_1_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_1_s0_y) - (output_glb_s0_y_y_glb*7))) = (int16)0
hw_uint<16> hcompute_f1_cgra_1_stencil_1() {
  int16_t _1777 = (int16_t)(0);
  return _1777;
}

//store is: f1_cgra$1.stencil(2, (((output_glb_s0_x_x_glb*14) + f1_cgra_1_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_1_s0_y) - (output_glb_s0_y_y_glb*7))) = (int16)0
hw_uint<16> hcompute_f1_cgra_1_stencil_2() {
  int16_t _1786 = (int16_t)(0);
  return _1786;
}

//store is: f1_cgra$1.stencil(3, (((output_glb_s0_x_x_glb*14) + f1_cgra_1_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_1_s0_y) - (output_glb_s0_y_y_glb*7))) = (int16)0
hw_uint<16> hcompute_f1_cgra_1_stencil_3() {
  int16_t _1795 = (int16_t)(0);
  return _1795;
}

//store is: f1_cgra$1.stencil(4, (((output_glb_s0_x_x_glb*14) + f1_cgra_1_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_1_s0_y) - (output_glb_s0_y_y_glb*7))) = (int16)0
hw_uint<16> hcompute_f1_cgra_1_stencil_4() {
  int16_t _1804 = (int16_t)(0);
  return _1804;
}

//store is: f1_cgra$1.stencil(5, (((output_glb_s0_x_x_glb*14) + f1_cgra_1_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_1_s0_y) - (output_glb_s0_y_y_glb*7))) = (int16)0
hw_uint<16> hcompute_f1_cgra_1_stencil_5() {
  int16_t _1813 = (int16_t)(0);
  return _1813;
}

//store is: f1_cgra$1.stencil(6, (((output_glb_s0_x_x_glb*14) + f1_cgra_1_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_1_s0_y) - (output_glb_s0_y_y_glb*7))) = (int16)0
hw_uint<16> hcompute_f1_cgra_1_stencil_6() {
  int16_t _1822 = (int16_t)(0);
  return _1822;
}

//store is: f1_cgra$1.stencil(7, (((output_glb_s0_x_x_glb*14) + f1_cgra_1_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_1_s0_y) - (output_glb_s0_y_y_glb*7))) = (int16)0
hw_uint<16> hcompute_f1_cgra_1_stencil_7() {
  int16_t _1831 = (int16_t)(0);
  return _1831;
}

//store is: f1_cgra$1.stencil(0, (((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y) - (output_glb_s0_y_y_glb*7))) = ((kernel1_cgra.stencil(0, 0, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(0, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + (f1_cgra$1.stencil(0, (((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y) - (output_glb_s0_y_y_glb*7))) + ((kernel1_cgra.stencil(1, 0, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(1, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(2, 0, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(2, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(3, 0, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(3, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(4, 0, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(4, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(5, 0, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(5, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(7, 0, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(7, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + (kernel1_cgra.stencil(6, 0, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(6, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7))))))))))))
hw_uint<16> hcompute_f1_cgra_1_stencil_8(hw_uint<128>& f1_cgra_stencil, hw_uint<16>& f1_cgra_1_stencil, hw_uint<128>& kernel1_cgra_stencil) {
  int16_t _f1_cgra_1_stencil_1 = (int16_t) (f1_cgra_1_stencil.extract<0, 15>());

  int16_t _f1_cgra_stencil_10 = (int16_t) (f1_cgra_stencil.extract<0, 15>());
  int16_t _f1_cgra_stencil_11 = (int16_t) (f1_cgra_stencil.extract<16, 31>());
  int16_t _f1_cgra_stencil_12 = (int16_t) (f1_cgra_stencil.extract<32, 47>());
  int16_t _f1_cgra_stencil_13 = (int16_t) (f1_cgra_stencil.extract<48, 63>());
  int16_t _f1_cgra_stencil_14 = (int16_t) (f1_cgra_stencil.extract<64, 79>());
  int16_t _f1_cgra_stencil_15 = (int16_t) (f1_cgra_stencil.extract<80, 95>());
  int16_t _f1_cgra_stencil_16 = (int16_t) (f1_cgra_stencil.extract<96, 111>());
  int16_t _f1_cgra_stencil_9 = (int16_t) (f1_cgra_stencil.extract<112, 127>());

  int16_t _kernel1_cgra_stencil_1 = (int16_t) (kernel1_cgra_stencil.extract<0, 15>());
  int16_t _kernel1_cgra_stencil_2 = (int16_t) (kernel1_cgra_stencil.extract<16, 31>());
  int16_t _kernel1_cgra_stencil_3 = (int16_t) (kernel1_cgra_stencil.extract<32, 47>());
  int16_t _kernel1_cgra_stencil_4 = (int16_t) (kernel1_cgra_stencil.extract<48, 63>());
  int16_t _kernel1_cgra_stencil_5 = (int16_t) (kernel1_cgra_stencil.extract<64, 79>());
  int16_t _kernel1_cgra_stencil_6 = (int16_t) (kernel1_cgra_stencil.extract<80, 95>());
  int16_t _kernel1_cgra_stencil_7 = (int16_t) (kernel1_cgra_stencil.extract<96, 111>());
  int16_t _kernel1_cgra_stencil_8 = (int16_t) (kernel1_cgra_stencil.extract<112, 127>());

  int16_t _1842 = _kernel1_cgra_stencil_1 * _f1_cgra_stencil_9;
  int16_t _1843 = _kernel1_cgra_stencil_2 * _f1_cgra_stencil_10;
  int16_t _1844 = _kernel1_cgra_stencil_3 * _f1_cgra_stencil_11;
  int16_t _1845 = _kernel1_cgra_stencil_4 * _f1_cgra_stencil_12;
  int16_t _1846 = _kernel1_cgra_stencil_5 * _f1_cgra_stencil_13;
  int16_t _1847 = _kernel1_cgra_stencil_6 * _f1_cgra_stencil_14;
  int16_t _1848 = _kernel1_cgra_stencil_7 * _f1_cgra_stencil_15;
  int16_t _1849 = _kernel1_cgra_stencil_8 * _f1_cgra_stencil_16;
  int16_t _1850 = _1848 + _1849;
  int16_t _1851 = _1847 + _1850;
  int16_t _1852 = _1846 + _1851;
  int16_t _1853 = _1845 + _1852;
  int16_t _1854 = _1844 + _1853;
  int16_t _1855 = _1843 + _1854;
  int16_t _1856 = _f1_cgra_1_stencil_1 + _1855;
  int16_t _1857 = _1842 + _1856;
  return _1857;
}

//store is: f1_cgra$1.stencil(1, (((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y) - (output_glb_s0_y_y_glb*7))) = ((kernel1_cgra.stencil(0, 1, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(0, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + (f1_cgra$1.stencil(1, (((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y) - (output_glb_s0_y_y_glb*7))) + ((kernel1_cgra.stencil(1, 1, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(1, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(2, 1, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(2, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(3, 1, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(3, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(4, 1, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(4, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(5, 1, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(5, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(7, 1, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(7, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + (kernel1_cgra.stencil(6, 1, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(6, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7))))))))))))
hw_uint<16> hcompute_f1_cgra_1_stencil_9(hw_uint<128>& f1_cgra_stencil, hw_uint<16>& f1_cgra_1_stencil, hw_uint<128>& kernel1_cgra_stencil) {
  int16_t _f1_cgra_1_stencil_2 = (int16_t) (f1_cgra_1_stencil.extract<0, 15>());

  int16_t _f1_cgra_stencil_17 = (int16_t) (f1_cgra_stencil.extract<0, 15>());
  int16_t _f1_cgra_stencil_18 = (int16_t) (f1_cgra_stencil.extract<16, 31>());
  int16_t _f1_cgra_stencil_19 = (int16_t) (f1_cgra_stencil.extract<32, 47>());
  int16_t _f1_cgra_stencil_20 = (int16_t) (f1_cgra_stencil.extract<48, 63>());
  int16_t _f1_cgra_stencil_21 = (int16_t) (f1_cgra_stencil.extract<64, 79>());
  int16_t _f1_cgra_stencil_22 = (int16_t) (f1_cgra_stencil.extract<80, 95>());
  int16_t _f1_cgra_stencil_23 = (int16_t) (f1_cgra_stencil.extract<96, 111>());
  int16_t _f1_cgra_stencil_24 = (int16_t) (f1_cgra_stencil.extract<112, 127>());

  int16_t _kernel1_cgra_stencil_10 = (int16_t) (kernel1_cgra_stencil.extract<0, 15>());
  int16_t _kernel1_cgra_stencil_11 = (int16_t) (kernel1_cgra_stencil.extract<16, 31>());
  int16_t _kernel1_cgra_stencil_12 = (int16_t) (kernel1_cgra_stencil.extract<32, 47>());
  int16_t _kernel1_cgra_stencil_13 = (int16_t) (kernel1_cgra_stencil.extract<48, 63>());
  int16_t _kernel1_cgra_stencil_14 = (int16_t) (kernel1_cgra_stencil.extract<64, 79>());
  int16_t _kernel1_cgra_stencil_15 = (int16_t) (kernel1_cgra_stencil.extract<80, 95>());
  int16_t _kernel1_cgra_stencil_16 = (int16_t) (kernel1_cgra_stencil.extract<96, 111>());
  int16_t _kernel1_cgra_stencil_9 = (int16_t) (kernel1_cgra_stencil.extract<112, 127>());

  int16_t _1917 = _kernel1_cgra_stencil_9 * _f1_cgra_stencil_17;
  int16_t _1918 = _kernel1_cgra_stencil_10 * _f1_cgra_stencil_18;
  int16_t _1919 = _kernel1_cgra_stencil_11 * _f1_cgra_stencil_19;
  int16_t _1920 = _kernel1_cgra_stencil_12 * _f1_cgra_stencil_20;
  int16_t _1921 = _kernel1_cgra_stencil_13 * _f1_cgra_stencil_21;
  int16_t _1922 = _kernel1_cgra_stencil_14 * _f1_cgra_stencil_22;
  int16_t _1923 = _kernel1_cgra_stencil_15 * _f1_cgra_stencil_23;
  int16_t _1924 = _kernel1_cgra_stencil_16 * _f1_cgra_stencil_24;
  int16_t _1925 = _1923 + _1924;
  int16_t _1926 = _1922 + _1925;
  int16_t _1927 = _1921 + _1926;
  int16_t _1928 = _1920 + _1927;
  int16_t _1929 = _1919 + _1928;
  int16_t _1930 = _1918 + _1929;
  int16_t _1931 = _f1_cgra_1_stencil_2 + _1930;
  int16_t _1932 = _1917 + _1931;
  return _1932;
}

//store is: f1_cgra$1.stencil(2, (((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y) - (output_glb_s0_y_y_glb*7))) = ((kernel1_cgra.stencil(0, 2, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(0, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + (f1_cgra$1.stencil(2, (((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y) - (output_glb_s0_y_y_glb*7))) + ((kernel1_cgra.stencil(1, 2, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(1, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(2, 2, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(2, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(3, 2, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(3, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(4, 2, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(4, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(5, 2, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(5, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(7, 2, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(7, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + (kernel1_cgra.stencil(6, 2, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(6, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7))))))))))))
hw_uint<16> hcompute_f1_cgra_1_stencil_10(hw_uint<128>& f1_cgra_stencil, hw_uint<16>& f1_cgra_1_stencil, hw_uint<128>& kernel1_cgra_stencil) {
  int16_t _f1_cgra_1_stencil_3 = (int16_t) (f1_cgra_1_stencil.extract<0, 15>());

  int16_t _f1_cgra_stencil_25 = (int16_t) (f1_cgra_stencil.extract<0, 15>());
  int16_t _f1_cgra_stencil_26 = (int16_t) (f1_cgra_stencil.extract<16, 31>());
  int16_t _f1_cgra_stencil_27 = (int16_t) (f1_cgra_stencil.extract<32, 47>());
  int16_t _f1_cgra_stencil_28 = (int16_t) (f1_cgra_stencil.extract<48, 63>());
  int16_t _f1_cgra_stencil_29 = (int16_t) (f1_cgra_stencil.extract<64, 79>());
  int16_t _f1_cgra_stencil_30 = (int16_t) (f1_cgra_stencil.extract<80, 95>());
  int16_t _f1_cgra_stencil_31 = (int16_t) (f1_cgra_stencil.extract<96, 111>());
  int16_t _f1_cgra_stencil_32 = (int16_t) (f1_cgra_stencil.extract<112, 127>());

  int16_t _kernel1_cgra_stencil_17 = (int16_t) (kernel1_cgra_stencil.extract<0, 15>());
  int16_t _kernel1_cgra_stencil_18 = (int16_t) (kernel1_cgra_stencil.extract<16, 31>());
  int16_t _kernel1_cgra_stencil_19 = (int16_t) (kernel1_cgra_stencil.extract<32, 47>());
  int16_t _kernel1_cgra_stencil_20 = (int16_t) (kernel1_cgra_stencil.extract<48, 63>());
  int16_t _kernel1_cgra_stencil_21 = (int16_t) (kernel1_cgra_stencil.extract<64, 79>());
  int16_t _kernel1_cgra_stencil_22 = (int16_t) (kernel1_cgra_stencil.extract<80, 95>());
  int16_t _kernel1_cgra_stencil_23 = (int16_t) (kernel1_cgra_stencil.extract<96, 111>());
  int16_t _kernel1_cgra_stencil_24 = (int16_t) (kernel1_cgra_stencil.extract<112, 127>());

  int16_t _1992 = _kernel1_cgra_stencil_17 * _f1_cgra_stencil_25;
  int16_t _1993 = _kernel1_cgra_stencil_18 * _f1_cgra_stencil_26;
  int16_t _1994 = _kernel1_cgra_stencil_19 * _f1_cgra_stencil_27;
  int16_t _1995 = _kernel1_cgra_stencil_20 * _f1_cgra_stencil_28;
  int16_t _1996 = _kernel1_cgra_stencil_21 * _f1_cgra_stencil_29;
  int16_t _1997 = _kernel1_cgra_stencil_22 * _f1_cgra_stencil_30;
  int16_t _1998 = _kernel1_cgra_stencil_23 * _f1_cgra_stencil_31;
  int16_t _1999 = _kernel1_cgra_stencil_24 * _f1_cgra_stencil_32;
  int16_t _2000 = _1998 + _1999;
  int16_t _2001 = _1997 + _2000;
  int16_t _2002 = _1996 + _2001;
  int16_t _2003 = _1995 + _2002;
  int16_t _2004 = _1994 + _2003;
  int16_t _2005 = _1993 + _2004;
  int16_t _2006 = _f1_cgra_1_stencil_3 + _2005;
  int16_t _2007 = _1992 + _2006;
  return _2007;
}

//store is: f1_cgra$1.stencil(3, (((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y) - (output_glb_s0_y_y_glb*7))) = ((kernel1_cgra.stencil(0, 3, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(0, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + (f1_cgra$1.stencil(3, (((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y) - (output_glb_s0_y_y_glb*7))) + ((kernel1_cgra.stencil(1, 3, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(1, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(2, 3, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(2, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(3, 3, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(3, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(4, 3, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(4, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(5, 3, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(5, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(7, 3, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(7, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + (kernel1_cgra.stencil(6, 3, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(6, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7))))))))))))
hw_uint<16> hcompute_f1_cgra_1_stencil_11(hw_uint<128>& f1_cgra_stencil, hw_uint<16>& f1_cgra_1_stencil, hw_uint<128>& kernel1_cgra_stencil) {
  int16_t _f1_cgra_1_stencil_4 = (int16_t) (f1_cgra_1_stencil.extract<0, 15>());

  int16_t _f1_cgra_stencil_33 = (int16_t) (f1_cgra_stencil.extract<0, 15>());
  int16_t _f1_cgra_stencil_34 = (int16_t) (f1_cgra_stencil.extract<16, 31>());
  int16_t _f1_cgra_stencil_35 = (int16_t) (f1_cgra_stencil.extract<32, 47>());
  int16_t _f1_cgra_stencil_36 = (int16_t) (f1_cgra_stencil.extract<48, 63>());
  int16_t _f1_cgra_stencil_37 = (int16_t) (f1_cgra_stencil.extract<64, 79>());
  int16_t _f1_cgra_stencil_38 = (int16_t) (f1_cgra_stencil.extract<80, 95>());
  int16_t _f1_cgra_stencil_39 = (int16_t) (f1_cgra_stencil.extract<96, 111>());
  int16_t _f1_cgra_stencil_40 = (int16_t) (f1_cgra_stencil.extract<112, 127>());

  int16_t _kernel1_cgra_stencil_25 = (int16_t) (kernel1_cgra_stencil.extract<0, 15>());
  int16_t _kernel1_cgra_stencil_26 = (int16_t) (kernel1_cgra_stencil.extract<16, 31>());
  int16_t _kernel1_cgra_stencil_27 = (int16_t) (kernel1_cgra_stencil.extract<32, 47>());
  int16_t _kernel1_cgra_stencil_28 = (int16_t) (kernel1_cgra_stencil.extract<48, 63>());
  int16_t _kernel1_cgra_stencil_29 = (int16_t) (kernel1_cgra_stencil.extract<64, 79>());
  int16_t _kernel1_cgra_stencil_30 = (int16_t) (kernel1_cgra_stencil.extract<80, 95>());
  int16_t _kernel1_cgra_stencil_31 = (int16_t) (kernel1_cgra_stencil.extract<96, 111>());
  int16_t _kernel1_cgra_stencil_32 = (int16_t) (kernel1_cgra_stencil.extract<112, 127>());

  int16_t _2067 = _kernel1_cgra_stencil_25 * _f1_cgra_stencil_33;
  int16_t _2068 = _kernel1_cgra_stencil_26 * _f1_cgra_stencil_34;
  int16_t _2069 = _kernel1_cgra_stencil_27 * _f1_cgra_stencil_35;
  int16_t _2070 = _kernel1_cgra_stencil_28 * _f1_cgra_stencil_36;
  int16_t _2071 = _kernel1_cgra_stencil_29 * _f1_cgra_stencil_37;
  int16_t _2072 = _kernel1_cgra_stencil_30 * _f1_cgra_stencil_38;
  int16_t _2073 = _kernel1_cgra_stencil_31 * _f1_cgra_stencil_39;
  int16_t _2074 = _kernel1_cgra_stencil_32 * _f1_cgra_stencil_40;
  int16_t _2075 = _2073 + _2074;
  int16_t _2076 = _2072 + _2075;
  int16_t _2077 = _2071 + _2076;
  int16_t _2078 = _2070 + _2077;
  int16_t _2079 = _2069 + _2078;
  int16_t _2080 = _2068 + _2079;
  int16_t _2081 = _f1_cgra_1_stencil_4 + _2080;
  int16_t _2082 = _2067 + _2081;
  return _2082;
}

//store is: f1_cgra$1.stencil(4, (((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y) - (output_glb_s0_y_y_glb*7))) = ((kernel1_cgra.stencil(0, 4, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(0, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + (f1_cgra$1.stencil(4, (((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y) - (output_glb_s0_y_y_glb*7))) + ((kernel1_cgra.stencil(1, 4, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(1, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(2, 4, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(2, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(3, 4, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(3, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(4, 4, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(4, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(5, 4, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(5, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(7, 4, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(7, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + (kernel1_cgra.stencil(6, 4, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(6, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7))))))))))))
hw_uint<16> hcompute_f1_cgra_1_stencil_12(hw_uint<128>& f1_cgra_stencil, hw_uint<16>& f1_cgra_1_stencil, hw_uint<128>& kernel1_cgra_stencil) {
  int16_t _f1_cgra_1_stencil_5 = (int16_t) (f1_cgra_1_stencil.extract<0, 15>());

  int16_t _f1_cgra_stencil_41 = (int16_t) (f1_cgra_stencil.extract<0, 15>());
  int16_t _f1_cgra_stencil_42 = (int16_t) (f1_cgra_stencil.extract<16, 31>());
  int16_t _f1_cgra_stencil_43 = (int16_t) (f1_cgra_stencil.extract<32, 47>());
  int16_t _f1_cgra_stencil_44 = (int16_t) (f1_cgra_stencil.extract<48, 63>());
  int16_t _f1_cgra_stencil_45 = (int16_t) (f1_cgra_stencil.extract<64, 79>());
  int16_t _f1_cgra_stencil_46 = (int16_t) (f1_cgra_stencil.extract<80, 95>());
  int16_t _f1_cgra_stencil_47 = (int16_t) (f1_cgra_stencil.extract<96, 111>());
  int16_t _f1_cgra_stencil_48 = (int16_t) (f1_cgra_stencil.extract<112, 127>());

  int16_t _kernel1_cgra_stencil_33 = (int16_t) (kernel1_cgra_stencil.extract<0, 15>());
  int16_t _kernel1_cgra_stencil_34 = (int16_t) (kernel1_cgra_stencil.extract<16, 31>());
  int16_t _kernel1_cgra_stencil_35 = (int16_t) (kernel1_cgra_stencil.extract<32, 47>());
  int16_t _kernel1_cgra_stencil_36 = (int16_t) (kernel1_cgra_stencil.extract<48, 63>());
  int16_t _kernel1_cgra_stencil_37 = (int16_t) (kernel1_cgra_stencil.extract<64, 79>());
  int16_t _kernel1_cgra_stencil_38 = (int16_t) (kernel1_cgra_stencil.extract<80, 95>());
  int16_t _kernel1_cgra_stencil_39 = (int16_t) (kernel1_cgra_stencil.extract<96, 111>());
  int16_t _kernel1_cgra_stencil_40 = (int16_t) (kernel1_cgra_stencil.extract<112, 127>());

  int16_t _2142 = _kernel1_cgra_stencil_33 * _f1_cgra_stencil_41;
  int16_t _2143 = _kernel1_cgra_stencil_34 * _f1_cgra_stencil_42;
  int16_t _2144 = _kernel1_cgra_stencil_35 * _f1_cgra_stencil_43;
  int16_t _2145 = _kernel1_cgra_stencil_36 * _f1_cgra_stencil_44;
  int16_t _2146 = _kernel1_cgra_stencil_37 * _f1_cgra_stencil_45;
  int16_t _2147 = _kernel1_cgra_stencil_38 * _f1_cgra_stencil_46;
  int16_t _2148 = _kernel1_cgra_stencil_39 * _f1_cgra_stencil_47;
  int16_t _2149 = _kernel1_cgra_stencil_40 * _f1_cgra_stencil_48;
  int16_t _2150 = _2148 + _2149;
  int16_t _2151 = _2147 + _2150;
  int16_t _2152 = _2146 + _2151;
  int16_t _2153 = _2145 + _2152;
  int16_t _2154 = _2144 + _2153;
  int16_t _2155 = _2143 + _2154;
  int16_t _2156 = _f1_cgra_1_stencil_5 + _2155;
  int16_t _2157 = _2142 + _2156;
  return _2157;
}

//store is: f1_cgra$1.stencil(5, (((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y) - (output_glb_s0_y_y_glb*7))) = ((kernel1_cgra.stencil(0, 5, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(0, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + (f1_cgra$1.stencil(5, (((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y) - (output_glb_s0_y_y_glb*7))) + ((kernel1_cgra.stencil(1, 5, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(1, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(2, 5, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(2, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(3, 5, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(3, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(4, 5, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(4, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(5, 5, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(5, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(7, 5, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(7, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + (kernel1_cgra.stencil(6, 5, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(6, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7))))))))))))
hw_uint<16> hcompute_f1_cgra_1_stencil_13(hw_uint<128>& f1_cgra_stencil, hw_uint<16>& f1_cgra_1_stencil, hw_uint<128>& kernel1_cgra_stencil) {
  int16_t _f1_cgra_1_stencil_6 = (int16_t) (f1_cgra_1_stencil.extract<0, 15>());

  int16_t _f1_cgra_stencil_49 = (int16_t) (f1_cgra_stencil.extract<0, 15>());
  int16_t _f1_cgra_stencil_50 = (int16_t) (f1_cgra_stencil.extract<16, 31>());
  int16_t _f1_cgra_stencil_51 = (int16_t) (f1_cgra_stencil.extract<32, 47>());
  int16_t _f1_cgra_stencil_52 = (int16_t) (f1_cgra_stencil.extract<48, 63>());
  int16_t _f1_cgra_stencil_53 = (int16_t) (f1_cgra_stencil.extract<64, 79>());
  int16_t _f1_cgra_stencil_54 = (int16_t) (f1_cgra_stencil.extract<80, 95>());
  int16_t _f1_cgra_stencil_55 = (int16_t) (f1_cgra_stencil.extract<96, 111>());
  int16_t _f1_cgra_stencil_56 = (int16_t) (f1_cgra_stencil.extract<112, 127>());

  int16_t _kernel1_cgra_stencil_41 = (int16_t) (kernel1_cgra_stencil.extract<0, 15>());
  int16_t _kernel1_cgra_stencil_42 = (int16_t) (kernel1_cgra_stencil.extract<16, 31>());
  int16_t _kernel1_cgra_stencil_43 = (int16_t) (kernel1_cgra_stencil.extract<32, 47>());
  int16_t _kernel1_cgra_stencil_44 = (int16_t) (kernel1_cgra_stencil.extract<48, 63>());
  int16_t _kernel1_cgra_stencil_45 = (int16_t) (kernel1_cgra_stencil.extract<64, 79>());
  int16_t _kernel1_cgra_stencil_46 = (int16_t) (kernel1_cgra_stencil.extract<80, 95>());
  int16_t _kernel1_cgra_stencil_47 = (int16_t) (kernel1_cgra_stencil.extract<96, 111>());
  int16_t _kernel1_cgra_stencil_48 = (int16_t) (kernel1_cgra_stencil.extract<112, 127>());

  int16_t _2217 = _kernel1_cgra_stencil_41 * _f1_cgra_stencil_49;
  int16_t _2218 = _kernel1_cgra_stencil_42 * _f1_cgra_stencil_50;
  int16_t _2219 = _kernel1_cgra_stencil_43 * _f1_cgra_stencil_51;
  int16_t _2220 = _kernel1_cgra_stencil_44 * _f1_cgra_stencil_52;
  int16_t _2221 = _kernel1_cgra_stencil_45 * _f1_cgra_stencil_53;
  int16_t _2222 = _kernel1_cgra_stencil_46 * _f1_cgra_stencil_54;
  int16_t _2223 = _kernel1_cgra_stencil_47 * _f1_cgra_stencil_55;
  int16_t _2224 = _kernel1_cgra_stencil_48 * _f1_cgra_stencil_56;
  int16_t _2225 = _2223 + _2224;
  int16_t _2226 = _2222 + _2225;
  int16_t _2227 = _2221 + _2226;
  int16_t _2228 = _2220 + _2227;
  int16_t _2229 = _2219 + _2228;
  int16_t _2230 = _2218 + _2229;
  int16_t _2231 = _f1_cgra_1_stencil_6 + _2230;
  int16_t _2232 = _2217 + _2231;
  return _2232;
}

//store is: f1_cgra$1.stencil(6, (((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y) - (output_glb_s0_y_y_glb*7))) = ((kernel1_cgra.stencil(0, 6, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(0, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + (f1_cgra$1.stencil(6, (((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y) - (output_glb_s0_y_y_glb*7))) + ((kernel1_cgra.stencil(1, 6, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(1, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(2, 6, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(2, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(3, 6, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(3, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(4, 6, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(4, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(5, 6, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(5, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(7, 6, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(7, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + (kernel1_cgra.stencil(6, 6, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(6, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7))))))))))))
hw_uint<16> hcompute_f1_cgra_1_stencil_14(hw_uint<128>& f1_cgra_stencil, hw_uint<16>& f1_cgra_1_stencil, hw_uint<128>& kernel1_cgra_stencil) {
  int16_t _f1_cgra_1_stencil_7 = (int16_t) (f1_cgra_1_stencil.extract<0, 15>());

  int16_t _f1_cgra_stencil_57 = (int16_t) (f1_cgra_stencil.extract<0, 15>());
  int16_t _f1_cgra_stencil_58 = (int16_t) (f1_cgra_stencil.extract<16, 31>());
  int16_t _f1_cgra_stencil_59 = (int16_t) (f1_cgra_stencil.extract<32, 47>());
  int16_t _f1_cgra_stencil_60 = (int16_t) (f1_cgra_stencil.extract<48, 63>());
  int16_t _f1_cgra_stencil_61 = (int16_t) (f1_cgra_stencil.extract<64, 79>());
  int16_t _f1_cgra_stencil_62 = (int16_t) (f1_cgra_stencil.extract<80, 95>());
  int16_t _f1_cgra_stencil_63 = (int16_t) (f1_cgra_stencil.extract<96, 111>());
  int16_t _f1_cgra_stencil_64 = (int16_t) (f1_cgra_stencil.extract<112, 127>());

  int16_t _kernel1_cgra_stencil_49 = (int16_t) (kernel1_cgra_stencil.extract<0, 15>());
  int16_t _kernel1_cgra_stencil_50 = (int16_t) (kernel1_cgra_stencil.extract<16, 31>());
  int16_t _kernel1_cgra_stencil_51 = (int16_t) (kernel1_cgra_stencil.extract<32, 47>());
  int16_t _kernel1_cgra_stencil_52 = (int16_t) (kernel1_cgra_stencil.extract<48, 63>());
  int16_t _kernel1_cgra_stencil_53 = (int16_t) (kernel1_cgra_stencil.extract<64, 79>());
  int16_t _kernel1_cgra_stencil_54 = (int16_t) (kernel1_cgra_stencil.extract<80, 95>());
  int16_t _kernel1_cgra_stencil_55 = (int16_t) (kernel1_cgra_stencil.extract<96, 111>());
  int16_t _kernel1_cgra_stencil_56 = (int16_t) (kernel1_cgra_stencil.extract<112, 127>());

  int16_t _2292 = _kernel1_cgra_stencil_49 * _f1_cgra_stencil_57;
  int16_t _2293 = _kernel1_cgra_stencil_50 * _f1_cgra_stencil_58;
  int16_t _2294 = _kernel1_cgra_stencil_51 * _f1_cgra_stencil_59;
  int16_t _2295 = _kernel1_cgra_stencil_52 * _f1_cgra_stencil_60;
  int16_t _2296 = _kernel1_cgra_stencil_53 * _f1_cgra_stencil_61;
  int16_t _2297 = _kernel1_cgra_stencil_54 * _f1_cgra_stencil_62;
  int16_t _2298 = _kernel1_cgra_stencil_55 * _f1_cgra_stencil_63;
  int16_t _2299 = _kernel1_cgra_stencil_56 * _f1_cgra_stencil_64;
  int16_t _2300 = _2298 + _2299;
  int16_t _2301 = _2297 + _2300;
  int16_t _2302 = _2296 + _2301;
  int16_t _2303 = _2295 + _2302;
  int16_t _2304 = _2294 + _2303;
  int16_t _2305 = _2293 + _2304;
  int16_t _2306 = _f1_cgra_1_stencil_7 + _2305;
  int16_t _2307 = _2292 + _2306;
  return _2307;
}

//store is: f1_cgra$1.stencil(7, (((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y) - (output_glb_s0_y_y_glb*7))) = ((kernel1_cgra.stencil(0, 7, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(0, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + (f1_cgra$1.stencil(7, (((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y) - (output_glb_s0_y_y_glb*7))) + ((kernel1_cgra.stencil(1, 7, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(1, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(2, 7, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(2, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(3, 7, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(3, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(4, 7, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(4, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(5, 7, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(5, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + ((kernel1_cgra.stencil(7, 7, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(7, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7)))) + (kernel1_cgra.stencil(6, 7, f1_cgra_1_s1_r1_0_x, f1_cgra_1_s1_r1_0_y)*f1_cgra.stencil(6, ((f1_cgra_1_s1_r1_0_x + ((output_glb_s0_x_x_glb*14) + f1_cgra_1_s1_x)) - (output_glb_s0_x_x_glb*14)), ((f1_cgra_1_s1_r1_0_y + ((output_glb_s0_y_y_glb*7) + f1_cgra_1_s1_y)) - (output_glb_s0_y_y_glb*7))))))))))))
hw_uint<16> hcompute_f1_cgra_1_stencil_15(hw_uint<128>& f1_cgra_stencil, hw_uint<16>& f1_cgra_1_stencil, hw_uint<128>& kernel1_cgra_stencil) {
  int16_t _f1_cgra_1_stencil_8 = (int16_t) (f1_cgra_1_stencil.extract<0, 15>());

  int16_t _f1_cgra_stencil_65 = (int16_t) (f1_cgra_stencil.extract<0, 15>());
  int16_t _f1_cgra_stencil_66 = (int16_t) (f1_cgra_stencil.extract<16, 31>());
  int16_t _f1_cgra_stencil_67 = (int16_t) (f1_cgra_stencil.extract<32, 47>());
  int16_t _f1_cgra_stencil_68 = (int16_t) (f1_cgra_stencil.extract<48, 63>());
  int16_t _f1_cgra_stencil_69 = (int16_t) (f1_cgra_stencil.extract<64, 79>());
  int16_t _f1_cgra_stencil_70 = (int16_t) (f1_cgra_stencil.extract<80, 95>());
  int16_t _f1_cgra_stencil_71 = (int16_t) (f1_cgra_stencil.extract<96, 111>());
  int16_t _f1_cgra_stencil_72 = (int16_t) (f1_cgra_stencil.extract<112, 127>());

  int16_t _kernel1_cgra_stencil_57 = (int16_t) (kernel1_cgra_stencil.extract<0, 15>());
  int16_t _kernel1_cgra_stencil_58 = (int16_t) (kernel1_cgra_stencil.extract<16, 31>());
  int16_t _kernel1_cgra_stencil_59 = (int16_t) (kernel1_cgra_stencil.extract<32, 47>());
  int16_t _kernel1_cgra_stencil_60 = (int16_t) (kernel1_cgra_stencil.extract<48, 63>());
  int16_t _kernel1_cgra_stencil_61 = (int16_t) (kernel1_cgra_stencil.extract<64, 79>());
  int16_t _kernel1_cgra_stencil_62 = (int16_t) (kernel1_cgra_stencil.extract<80, 95>());
  int16_t _kernel1_cgra_stencil_63 = (int16_t) (kernel1_cgra_stencil.extract<96, 111>());
  int16_t _kernel1_cgra_stencil_64 = (int16_t) (kernel1_cgra_stencil.extract<112, 127>());

  int16_t _2367 = _kernel1_cgra_stencil_57 * _f1_cgra_stencil_65;
  int16_t _2368 = _kernel1_cgra_stencil_58 * _f1_cgra_stencil_66;
  int16_t _2369 = _kernel1_cgra_stencil_59 * _f1_cgra_stencil_67;
  int16_t _2370 = _kernel1_cgra_stencil_60 * _f1_cgra_stencil_68;
  int16_t _2371 = _kernel1_cgra_stencil_61 * _f1_cgra_stencil_69;
  int16_t _2372 = _kernel1_cgra_stencil_62 * _f1_cgra_stencil_70;
  int16_t _2373 = _kernel1_cgra_stencil_63 * _f1_cgra_stencil_71;
  int16_t _2374 = _kernel1_cgra_stencil_64 * _f1_cgra_stencil_72;
  int16_t _2375 = _2373 + _2374;
  int16_t _2376 = _2372 + _2375;
  int16_t _2377 = _2371 + _2376;
  int16_t _2378 = _2370 + _2377;
  int16_t _2379 = _2369 + _2378;
  int16_t _2380 = _2368 + _2379;
  int16_t _2381 = _f1_cgra_1_stencil_8 + _2380;
  int16_t _2382 = _2367 + _2381;
  return _2382;
}

//store is: output_cgra.stencil((output_cgra_s0_w_w*8), (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*7))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil() {
  int16_t _2444 = (int16_t)(0);
  return _2444;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 1), (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*7))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_1() {
  int16_t _2454 = (int16_t)(0);
  return _2454;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 2), (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*7))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_2() {
  int16_t _2465 = (int16_t)(0);
  return _2465;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 3), (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*7))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_3() {
  int16_t _2476 = (int16_t)(0);
  return _2476;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 4), (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*7))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_4() {
  int16_t _2487 = (int16_t)(0);
  return _2487;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 5), (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*7))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_5() {
  int16_t _2498 = (int16_t)(0);
  return _2498;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 6), (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*7))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_6() {
  int16_t _2509 = (int16_t)(0);
  return _2509;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 7), (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*7))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_7() {
  int16_t _2520 = (int16_t)(0);
  return _2520;
}

//store is: output_cgra.stencil((output_cgra_s1_w_w*8), (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7))) = ((kernel2_cgra.stencil(0, (output_cgra_s1_w_w*8))*f1_cgra$1.stencil(0, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + (output_cgra.stencil((output_cgra_s1_w_w*8), (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7))) + ((kernel2_cgra.stencil(1, (output_cgra_s1_w_w*8))*f1_cgra$1.stencil(1, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(2, (output_cgra_s1_w_w*8))*f1_cgra$1.stencil(2, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(3, (output_cgra_s1_w_w*8))*f1_cgra$1.stencil(3, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(4, (output_cgra_s1_w_w*8))*f1_cgra$1.stencil(4, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(5, (output_cgra_s1_w_w*8))*f1_cgra$1.stencil(5, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(7, (output_cgra_s1_w_w*8))*f1_cgra$1.stencil(7, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + (kernel2_cgra.stencil(6, (output_cgra_s1_w_w*8))*f1_cgra$1.stencil(6, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_8(hw_uint<128>& f1_cgra_1_stencil, hw_uint<128>& kernel2_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _f1_cgra_1_stencil_10 = (int16_t) (f1_cgra_1_stencil.extract<0, 15>());
  int16_t _f1_cgra_1_stencil_11 = (int16_t) (f1_cgra_1_stencil.extract<16, 31>());
  int16_t _f1_cgra_1_stencil_12 = (int16_t) (f1_cgra_1_stencil.extract<32, 47>());
  int16_t _f1_cgra_1_stencil_13 = (int16_t) (f1_cgra_1_stencil.extract<48, 63>());
  int16_t _f1_cgra_1_stencil_14 = (int16_t) (f1_cgra_1_stencil.extract<64, 79>());
  int16_t _f1_cgra_1_stencil_15 = (int16_t) (f1_cgra_1_stencil.extract<80, 95>());
  int16_t _f1_cgra_1_stencil_16 = (int16_t) (f1_cgra_1_stencil.extract<96, 111>());
  int16_t _f1_cgra_1_stencil_9 = (int16_t) (f1_cgra_1_stencil.extract<112, 127>());

  int16_t _kernel2_cgra_stencil_1 = (int16_t) (kernel2_cgra_stencil.extract<0, 15>());
  int16_t _kernel2_cgra_stencil_2 = (int16_t) (kernel2_cgra_stencil.extract<16, 31>());
  int16_t _kernel2_cgra_stencil_3 = (int16_t) (kernel2_cgra_stencil.extract<32, 47>());
  int16_t _kernel2_cgra_stencil_4 = (int16_t) (kernel2_cgra_stencil.extract<48, 63>());
  int16_t _kernel2_cgra_stencil_5 = (int16_t) (kernel2_cgra_stencil.extract<64, 79>());
  int16_t _kernel2_cgra_stencil_6 = (int16_t) (kernel2_cgra_stencil.extract<80, 95>());
  int16_t _kernel2_cgra_stencil_7 = (int16_t) (kernel2_cgra_stencil.extract<96, 111>());
  int16_t _kernel2_cgra_stencil_8 = (int16_t) (kernel2_cgra_stencil.extract<112, 127>());

  int16_t _output_cgra_stencil_1 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _2533 = _kernel2_cgra_stencil_1 * _f1_cgra_1_stencil_9;
  int16_t _2534 = _kernel2_cgra_stencil_2 * _f1_cgra_1_stencil_10;
  int16_t _2535 = _kernel2_cgra_stencil_3 * _f1_cgra_1_stencil_11;
  int16_t _2536 = _kernel2_cgra_stencil_4 * _f1_cgra_1_stencil_12;
  int16_t _2537 = _kernel2_cgra_stencil_5 * _f1_cgra_1_stencil_13;
  int16_t _2538 = _kernel2_cgra_stencil_6 * _f1_cgra_1_stencil_14;
  int16_t _2539 = _kernel2_cgra_stencil_7 * _f1_cgra_1_stencil_15;
  int16_t _2540 = _kernel2_cgra_stencil_8 * _f1_cgra_1_stencil_16;
  int16_t _2541 = _2539 + _2540;
  int16_t _2542 = _2538 + _2541;
  int16_t _2543 = _2537 + _2542;
  int16_t _2544 = _2536 + _2543;
  int16_t _2545 = _2535 + _2544;
  int16_t _2546 = _2534 + _2545;
  int16_t _2547 = _output_cgra_stencil_1 + _2546;
  int16_t _2548 = _2533 + _2547;
  return _2548;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w*8) + 1), (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7))) = ((kernel2_cgra.stencil(0, ((output_cgra_s1_w_w*8) + 1))*f1_cgra$1.stencil(0, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + (output_cgra.stencil(((output_cgra_s1_w_w*8) + 1), (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7))) + ((kernel2_cgra.stencil(1, ((output_cgra_s1_w_w*8) + 1))*f1_cgra$1.stencil(1, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(2, ((output_cgra_s1_w_w*8) + 1))*f1_cgra$1.stencil(2, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(3, ((output_cgra_s1_w_w*8) + 1))*f1_cgra$1.stencil(3, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(4, ((output_cgra_s1_w_w*8) + 1))*f1_cgra$1.stencil(4, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(5, ((output_cgra_s1_w_w*8) + 1))*f1_cgra$1.stencil(5, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(7, ((output_cgra_s1_w_w*8) + 1))*f1_cgra$1.stencil(7, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + (kernel2_cgra.stencil(6, ((output_cgra_s1_w_w*8) + 1))*f1_cgra$1.stencil(6, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_9(hw_uint<128>& f1_cgra_1_stencil, hw_uint<128>& kernel2_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _f1_cgra_1_stencil_17 = (int16_t) (f1_cgra_1_stencil.extract<0, 15>());
  int16_t _f1_cgra_1_stencil_18 = (int16_t) (f1_cgra_1_stencil.extract<16, 31>());
  int16_t _f1_cgra_1_stencil_19 = (int16_t) (f1_cgra_1_stencil.extract<32, 47>());
  int16_t _f1_cgra_1_stencil_20 = (int16_t) (f1_cgra_1_stencil.extract<48, 63>());
  int16_t _f1_cgra_1_stencil_21 = (int16_t) (f1_cgra_1_stencil.extract<64, 79>());
  int16_t _f1_cgra_1_stencil_22 = (int16_t) (f1_cgra_1_stencil.extract<80, 95>());
  int16_t _f1_cgra_1_stencil_23 = (int16_t) (f1_cgra_1_stencil.extract<96, 111>());
  int16_t _f1_cgra_1_stencil_24 = (int16_t) (f1_cgra_1_stencil.extract<112, 127>());

  int16_t _kernel2_cgra_stencil_10 = (int16_t) (kernel2_cgra_stencil.extract<0, 15>());
  int16_t _kernel2_cgra_stencil_11 = (int16_t) (kernel2_cgra_stencil.extract<16, 31>());
  int16_t _kernel2_cgra_stencil_12 = (int16_t) (kernel2_cgra_stencil.extract<32, 47>());
  int16_t _kernel2_cgra_stencil_13 = (int16_t) (kernel2_cgra_stencil.extract<48, 63>());
  int16_t _kernel2_cgra_stencil_14 = (int16_t) (kernel2_cgra_stencil.extract<64, 79>());
  int16_t _kernel2_cgra_stencil_15 = (int16_t) (kernel2_cgra_stencil.extract<80, 95>());
  int16_t _kernel2_cgra_stencil_16 = (int16_t) (kernel2_cgra_stencil.extract<96, 111>());
  int16_t _kernel2_cgra_stencil_9 = (int16_t) (kernel2_cgra_stencil.extract<112, 127>());

  int16_t _output_cgra_stencil_2 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _2605 = _kernel2_cgra_stencil_9 * _f1_cgra_1_stencil_17;
  int16_t _2606 = _kernel2_cgra_stencil_10 * _f1_cgra_1_stencil_18;
  int16_t _2607 = _kernel2_cgra_stencil_11 * _f1_cgra_1_stencil_19;
  int16_t _2608 = _kernel2_cgra_stencil_12 * _f1_cgra_1_stencil_20;
  int16_t _2609 = _kernel2_cgra_stencil_13 * _f1_cgra_1_stencil_21;
  int16_t _2610 = _kernel2_cgra_stencil_14 * _f1_cgra_1_stencil_22;
  int16_t _2611 = _kernel2_cgra_stencil_15 * _f1_cgra_1_stencil_23;
  int16_t _2612 = _kernel2_cgra_stencil_16 * _f1_cgra_1_stencil_24;
  int16_t _2613 = _2611 + _2612;
  int16_t _2614 = _2610 + _2613;
  int16_t _2615 = _2609 + _2614;
  int16_t _2616 = _2608 + _2615;
  int16_t _2617 = _2607 + _2616;
  int16_t _2618 = _2606 + _2617;
  int16_t _2619 = _output_cgra_stencil_2 + _2618;
  int16_t _2620 = _2605 + _2619;
  return _2620;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w*8) + 2), (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7))) = ((kernel2_cgra.stencil(0, ((output_cgra_s1_w_w*8) + 2))*f1_cgra$1.stencil(0, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + (output_cgra.stencil(((output_cgra_s1_w_w*8) + 2), (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7))) + ((kernel2_cgra.stencil(1, ((output_cgra_s1_w_w*8) + 2))*f1_cgra$1.stencil(1, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(2, ((output_cgra_s1_w_w*8) + 2))*f1_cgra$1.stencil(2, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(3, ((output_cgra_s1_w_w*8) + 2))*f1_cgra$1.stencil(3, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(4, ((output_cgra_s1_w_w*8) + 2))*f1_cgra$1.stencil(4, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(5, ((output_cgra_s1_w_w*8) + 2))*f1_cgra$1.stencil(5, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(7, ((output_cgra_s1_w_w*8) + 2))*f1_cgra$1.stencil(7, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + (kernel2_cgra.stencil(6, ((output_cgra_s1_w_w*8) + 2))*f1_cgra$1.stencil(6, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_10(hw_uint<128>& f1_cgra_1_stencil, hw_uint<128>& kernel2_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _f1_cgra_1_stencil_25 = (int16_t) (f1_cgra_1_stencil.extract<0, 15>());
  int16_t _f1_cgra_1_stencil_26 = (int16_t) (f1_cgra_1_stencil.extract<16, 31>());
  int16_t _f1_cgra_1_stencil_27 = (int16_t) (f1_cgra_1_stencil.extract<32, 47>());
  int16_t _f1_cgra_1_stencil_28 = (int16_t) (f1_cgra_1_stencil.extract<48, 63>());
  int16_t _f1_cgra_1_stencil_29 = (int16_t) (f1_cgra_1_stencil.extract<64, 79>());
  int16_t _f1_cgra_1_stencil_30 = (int16_t) (f1_cgra_1_stencil.extract<80, 95>());
  int16_t _f1_cgra_1_stencil_31 = (int16_t) (f1_cgra_1_stencil.extract<96, 111>());
  int16_t _f1_cgra_1_stencil_32 = (int16_t) (f1_cgra_1_stencil.extract<112, 127>());

  int16_t _kernel2_cgra_stencil_17 = (int16_t) (kernel2_cgra_stencil.extract<0, 15>());
  int16_t _kernel2_cgra_stencil_18 = (int16_t) (kernel2_cgra_stencil.extract<16, 31>());
  int16_t _kernel2_cgra_stencil_19 = (int16_t) (kernel2_cgra_stencil.extract<32, 47>());
  int16_t _kernel2_cgra_stencil_20 = (int16_t) (kernel2_cgra_stencil.extract<48, 63>());
  int16_t _kernel2_cgra_stencil_21 = (int16_t) (kernel2_cgra_stencil.extract<64, 79>());
  int16_t _kernel2_cgra_stencil_22 = (int16_t) (kernel2_cgra_stencil.extract<80, 95>());
  int16_t _kernel2_cgra_stencil_23 = (int16_t) (kernel2_cgra_stencil.extract<96, 111>());
  int16_t _kernel2_cgra_stencil_24 = (int16_t) (kernel2_cgra_stencil.extract<112, 127>());

  int16_t _output_cgra_stencil_3 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _2678 = _kernel2_cgra_stencil_17 * _f1_cgra_1_stencil_25;
  int16_t _2679 = _kernel2_cgra_stencil_18 * _f1_cgra_1_stencil_26;
  int16_t _2680 = _kernel2_cgra_stencil_19 * _f1_cgra_1_stencil_27;
  int16_t _2681 = _kernel2_cgra_stencil_20 * _f1_cgra_1_stencil_28;
  int16_t _2682 = _kernel2_cgra_stencil_21 * _f1_cgra_1_stencil_29;
  int16_t _2683 = _kernel2_cgra_stencil_22 * _f1_cgra_1_stencil_30;
  int16_t _2684 = _kernel2_cgra_stencil_23 * _f1_cgra_1_stencil_31;
  int16_t _2685 = _kernel2_cgra_stencil_24 * _f1_cgra_1_stencil_32;
  int16_t _2686 = _2684 + _2685;
  int16_t _2687 = _2683 + _2686;
  int16_t _2688 = _2682 + _2687;
  int16_t _2689 = _2681 + _2688;
  int16_t _2690 = _2680 + _2689;
  int16_t _2691 = _2679 + _2690;
  int16_t _2692 = _output_cgra_stencil_3 + _2691;
  int16_t _2693 = _2678 + _2692;
  return _2693;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w*8) + 3), (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7))) = ((kernel2_cgra.stencil(0, ((output_cgra_s1_w_w*8) + 3))*f1_cgra$1.stencil(0, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + (output_cgra.stencil(((output_cgra_s1_w_w*8) + 3), (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7))) + ((kernel2_cgra.stencil(1, ((output_cgra_s1_w_w*8) + 3))*f1_cgra$1.stencil(1, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(2, ((output_cgra_s1_w_w*8) + 3))*f1_cgra$1.stencil(2, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(3, ((output_cgra_s1_w_w*8) + 3))*f1_cgra$1.stencil(3, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(4, ((output_cgra_s1_w_w*8) + 3))*f1_cgra$1.stencil(4, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(5, ((output_cgra_s1_w_w*8) + 3))*f1_cgra$1.stencil(5, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(7, ((output_cgra_s1_w_w*8) + 3))*f1_cgra$1.stencil(7, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + (kernel2_cgra.stencil(6, ((output_cgra_s1_w_w*8) + 3))*f1_cgra$1.stencil(6, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_11(hw_uint<128>& f1_cgra_1_stencil, hw_uint<128>& kernel2_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _f1_cgra_1_stencil_33 = (int16_t) (f1_cgra_1_stencil.extract<0, 15>());
  int16_t _f1_cgra_1_stencil_34 = (int16_t) (f1_cgra_1_stencil.extract<16, 31>());
  int16_t _f1_cgra_1_stencil_35 = (int16_t) (f1_cgra_1_stencil.extract<32, 47>());
  int16_t _f1_cgra_1_stencil_36 = (int16_t) (f1_cgra_1_stencil.extract<48, 63>());
  int16_t _f1_cgra_1_stencil_37 = (int16_t) (f1_cgra_1_stencil.extract<64, 79>());
  int16_t _f1_cgra_1_stencil_38 = (int16_t) (f1_cgra_1_stencil.extract<80, 95>());
  int16_t _f1_cgra_1_stencil_39 = (int16_t) (f1_cgra_1_stencil.extract<96, 111>());
  int16_t _f1_cgra_1_stencil_40 = (int16_t) (f1_cgra_1_stencil.extract<112, 127>());

  int16_t _kernel2_cgra_stencil_25 = (int16_t) (kernel2_cgra_stencil.extract<0, 15>());
  int16_t _kernel2_cgra_stencil_26 = (int16_t) (kernel2_cgra_stencil.extract<16, 31>());
  int16_t _kernel2_cgra_stencil_27 = (int16_t) (kernel2_cgra_stencil.extract<32, 47>());
  int16_t _kernel2_cgra_stencil_28 = (int16_t) (kernel2_cgra_stencil.extract<48, 63>());
  int16_t _kernel2_cgra_stencil_29 = (int16_t) (kernel2_cgra_stencil.extract<64, 79>());
  int16_t _kernel2_cgra_stencil_30 = (int16_t) (kernel2_cgra_stencil.extract<80, 95>());
  int16_t _kernel2_cgra_stencil_31 = (int16_t) (kernel2_cgra_stencil.extract<96, 111>());
  int16_t _kernel2_cgra_stencil_32 = (int16_t) (kernel2_cgra_stencil.extract<112, 127>());

  int16_t _output_cgra_stencil_4 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _2751 = _kernel2_cgra_stencil_25 * _f1_cgra_1_stencil_33;
  int16_t _2752 = _kernel2_cgra_stencil_26 * _f1_cgra_1_stencil_34;
  int16_t _2753 = _kernel2_cgra_stencil_27 * _f1_cgra_1_stencil_35;
  int16_t _2754 = _kernel2_cgra_stencil_28 * _f1_cgra_1_stencil_36;
  int16_t _2755 = _kernel2_cgra_stencil_29 * _f1_cgra_1_stencil_37;
  int16_t _2756 = _kernel2_cgra_stencil_30 * _f1_cgra_1_stencil_38;
  int16_t _2757 = _kernel2_cgra_stencil_31 * _f1_cgra_1_stencil_39;
  int16_t _2758 = _kernel2_cgra_stencil_32 * _f1_cgra_1_stencil_40;
  int16_t _2759 = _2757 + _2758;
  int16_t _2760 = _2756 + _2759;
  int16_t _2761 = _2755 + _2760;
  int16_t _2762 = _2754 + _2761;
  int16_t _2763 = _2753 + _2762;
  int16_t _2764 = _2752 + _2763;
  int16_t _2765 = _output_cgra_stencil_4 + _2764;
  int16_t _2766 = _2751 + _2765;
  return _2766;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w*8) + 4), (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7))) = ((kernel2_cgra.stencil(0, ((output_cgra_s1_w_w*8) + 4))*f1_cgra$1.stencil(0, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + (output_cgra.stencil(((output_cgra_s1_w_w*8) + 4), (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7))) + ((kernel2_cgra.stencil(1, ((output_cgra_s1_w_w*8) + 4))*f1_cgra$1.stencil(1, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(2, ((output_cgra_s1_w_w*8) + 4))*f1_cgra$1.stencil(2, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(3, ((output_cgra_s1_w_w*8) + 4))*f1_cgra$1.stencil(3, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(4, ((output_cgra_s1_w_w*8) + 4))*f1_cgra$1.stencil(4, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(5, ((output_cgra_s1_w_w*8) + 4))*f1_cgra$1.stencil(5, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(7, ((output_cgra_s1_w_w*8) + 4))*f1_cgra$1.stencil(7, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + (kernel2_cgra.stencil(6, ((output_cgra_s1_w_w*8) + 4))*f1_cgra$1.stencil(6, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_12(hw_uint<128>& f1_cgra_1_stencil, hw_uint<128>& kernel2_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _f1_cgra_1_stencil_41 = (int16_t) (f1_cgra_1_stencil.extract<0, 15>());
  int16_t _f1_cgra_1_stencil_42 = (int16_t) (f1_cgra_1_stencil.extract<16, 31>());
  int16_t _f1_cgra_1_stencil_43 = (int16_t) (f1_cgra_1_stencil.extract<32, 47>());
  int16_t _f1_cgra_1_stencil_44 = (int16_t) (f1_cgra_1_stencil.extract<48, 63>());
  int16_t _f1_cgra_1_stencil_45 = (int16_t) (f1_cgra_1_stencil.extract<64, 79>());
  int16_t _f1_cgra_1_stencil_46 = (int16_t) (f1_cgra_1_stencil.extract<80, 95>());
  int16_t _f1_cgra_1_stencil_47 = (int16_t) (f1_cgra_1_stencil.extract<96, 111>());
  int16_t _f1_cgra_1_stencil_48 = (int16_t) (f1_cgra_1_stencil.extract<112, 127>());

  int16_t _kernel2_cgra_stencil_33 = (int16_t) (kernel2_cgra_stencil.extract<0, 15>());
  int16_t _kernel2_cgra_stencil_34 = (int16_t) (kernel2_cgra_stencil.extract<16, 31>());
  int16_t _kernel2_cgra_stencil_35 = (int16_t) (kernel2_cgra_stencil.extract<32, 47>());
  int16_t _kernel2_cgra_stencil_36 = (int16_t) (kernel2_cgra_stencil.extract<48, 63>());
  int16_t _kernel2_cgra_stencil_37 = (int16_t) (kernel2_cgra_stencil.extract<64, 79>());
  int16_t _kernel2_cgra_stencil_38 = (int16_t) (kernel2_cgra_stencil.extract<80, 95>());
  int16_t _kernel2_cgra_stencil_39 = (int16_t) (kernel2_cgra_stencil.extract<96, 111>());
  int16_t _kernel2_cgra_stencil_40 = (int16_t) (kernel2_cgra_stencil.extract<112, 127>());

  int16_t _output_cgra_stencil_5 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _2824 = _kernel2_cgra_stencil_33 * _f1_cgra_1_stencil_41;
  int16_t _2825 = _kernel2_cgra_stencil_34 * _f1_cgra_1_stencil_42;
  int16_t _2826 = _kernel2_cgra_stencil_35 * _f1_cgra_1_stencil_43;
  int16_t _2827 = _kernel2_cgra_stencil_36 * _f1_cgra_1_stencil_44;
  int16_t _2828 = _kernel2_cgra_stencil_37 * _f1_cgra_1_stencil_45;
  int16_t _2829 = _kernel2_cgra_stencil_38 * _f1_cgra_1_stencil_46;
  int16_t _2830 = _kernel2_cgra_stencil_39 * _f1_cgra_1_stencil_47;
  int16_t _2831 = _kernel2_cgra_stencil_40 * _f1_cgra_1_stencil_48;
  int16_t _2832 = _2830 + _2831;
  int16_t _2833 = _2829 + _2832;
  int16_t _2834 = _2828 + _2833;
  int16_t _2835 = _2827 + _2834;
  int16_t _2836 = _2826 + _2835;
  int16_t _2837 = _2825 + _2836;
  int16_t _2838 = _output_cgra_stencil_5 + _2837;
  int16_t _2839 = _2824 + _2838;
  return _2839;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w*8) + 5), (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7))) = ((kernel2_cgra.stencil(0, ((output_cgra_s1_w_w*8) + 5))*f1_cgra$1.stencil(0, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + (output_cgra.stencil(((output_cgra_s1_w_w*8) + 5), (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7))) + ((kernel2_cgra.stencil(1, ((output_cgra_s1_w_w*8) + 5))*f1_cgra$1.stencil(1, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(2, ((output_cgra_s1_w_w*8) + 5))*f1_cgra$1.stencil(2, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(3, ((output_cgra_s1_w_w*8) + 5))*f1_cgra$1.stencil(3, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(4, ((output_cgra_s1_w_w*8) + 5))*f1_cgra$1.stencil(4, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(5, ((output_cgra_s1_w_w*8) + 5))*f1_cgra$1.stencil(5, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(7, ((output_cgra_s1_w_w*8) + 5))*f1_cgra$1.stencil(7, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + (kernel2_cgra.stencil(6, ((output_cgra_s1_w_w*8) + 5))*f1_cgra$1.stencil(6, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_13(hw_uint<128>& f1_cgra_1_stencil, hw_uint<128>& kernel2_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _f1_cgra_1_stencil_49 = (int16_t) (f1_cgra_1_stencil.extract<0, 15>());
  int16_t _f1_cgra_1_stencil_50 = (int16_t) (f1_cgra_1_stencil.extract<16, 31>());
  int16_t _f1_cgra_1_stencil_51 = (int16_t) (f1_cgra_1_stencil.extract<32, 47>());
  int16_t _f1_cgra_1_stencil_52 = (int16_t) (f1_cgra_1_stencil.extract<48, 63>());
  int16_t _f1_cgra_1_stencil_53 = (int16_t) (f1_cgra_1_stencil.extract<64, 79>());
  int16_t _f1_cgra_1_stencil_54 = (int16_t) (f1_cgra_1_stencil.extract<80, 95>());
  int16_t _f1_cgra_1_stencil_55 = (int16_t) (f1_cgra_1_stencil.extract<96, 111>());
  int16_t _f1_cgra_1_stencil_56 = (int16_t) (f1_cgra_1_stencil.extract<112, 127>());

  int16_t _kernel2_cgra_stencil_41 = (int16_t) (kernel2_cgra_stencil.extract<0, 15>());
  int16_t _kernel2_cgra_stencil_42 = (int16_t) (kernel2_cgra_stencil.extract<16, 31>());
  int16_t _kernel2_cgra_stencil_43 = (int16_t) (kernel2_cgra_stencil.extract<32, 47>());
  int16_t _kernel2_cgra_stencil_44 = (int16_t) (kernel2_cgra_stencil.extract<48, 63>());
  int16_t _kernel2_cgra_stencil_45 = (int16_t) (kernel2_cgra_stencil.extract<64, 79>());
  int16_t _kernel2_cgra_stencil_46 = (int16_t) (kernel2_cgra_stencil.extract<80, 95>());
  int16_t _kernel2_cgra_stencil_47 = (int16_t) (kernel2_cgra_stencil.extract<96, 111>());
  int16_t _kernel2_cgra_stencil_48 = (int16_t) (kernel2_cgra_stencil.extract<112, 127>());

  int16_t _output_cgra_stencil_6 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _2897 = _kernel2_cgra_stencil_41 * _f1_cgra_1_stencil_49;
  int16_t _2898 = _kernel2_cgra_stencil_42 * _f1_cgra_1_stencil_50;
  int16_t _2899 = _kernel2_cgra_stencil_43 * _f1_cgra_1_stencil_51;
  int16_t _2900 = _kernel2_cgra_stencil_44 * _f1_cgra_1_stencil_52;
  int16_t _2901 = _kernel2_cgra_stencil_45 * _f1_cgra_1_stencil_53;
  int16_t _2902 = _kernel2_cgra_stencil_46 * _f1_cgra_1_stencil_54;
  int16_t _2903 = _kernel2_cgra_stencil_47 * _f1_cgra_1_stencil_55;
  int16_t _2904 = _kernel2_cgra_stencil_48 * _f1_cgra_1_stencil_56;
  int16_t _2905 = _2903 + _2904;
  int16_t _2906 = _2902 + _2905;
  int16_t _2907 = _2901 + _2906;
  int16_t _2908 = _2900 + _2907;
  int16_t _2909 = _2899 + _2908;
  int16_t _2910 = _2898 + _2909;
  int16_t _2911 = _output_cgra_stencil_6 + _2910;
  int16_t _2912 = _2897 + _2911;
  return _2912;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w*8) + 6), (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7))) = ((kernel2_cgra.stencil(0, ((output_cgra_s1_w_w*8) + 6))*f1_cgra$1.stencil(0, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + (output_cgra.stencil(((output_cgra_s1_w_w*8) + 6), (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7))) + ((kernel2_cgra.stencil(1, ((output_cgra_s1_w_w*8) + 6))*f1_cgra$1.stencil(1, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(2, ((output_cgra_s1_w_w*8) + 6))*f1_cgra$1.stencil(2, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(3, ((output_cgra_s1_w_w*8) + 6))*f1_cgra$1.stencil(3, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(4, ((output_cgra_s1_w_w*8) + 6))*f1_cgra$1.stencil(4, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(5, ((output_cgra_s1_w_w*8) + 6))*f1_cgra$1.stencil(5, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(7, ((output_cgra_s1_w_w*8) + 6))*f1_cgra$1.stencil(7, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + (kernel2_cgra.stencil(6, ((output_cgra_s1_w_w*8) + 6))*f1_cgra$1.stencil(6, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_14(hw_uint<128>& f1_cgra_1_stencil, hw_uint<128>& kernel2_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _f1_cgra_1_stencil_57 = (int16_t) (f1_cgra_1_stencil.extract<0, 15>());
  int16_t _f1_cgra_1_stencil_58 = (int16_t) (f1_cgra_1_stencil.extract<16, 31>());
  int16_t _f1_cgra_1_stencil_59 = (int16_t) (f1_cgra_1_stencil.extract<32, 47>());
  int16_t _f1_cgra_1_stencil_60 = (int16_t) (f1_cgra_1_stencil.extract<48, 63>());
  int16_t _f1_cgra_1_stencil_61 = (int16_t) (f1_cgra_1_stencil.extract<64, 79>());
  int16_t _f1_cgra_1_stencil_62 = (int16_t) (f1_cgra_1_stencil.extract<80, 95>());
  int16_t _f1_cgra_1_stencil_63 = (int16_t) (f1_cgra_1_stencil.extract<96, 111>());
  int16_t _f1_cgra_1_stencil_64 = (int16_t) (f1_cgra_1_stencil.extract<112, 127>());

  int16_t _kernel2_cgra_stencil_49 = (int16_t) (kernel2_cgra_stencil.extract<0, 15>());
  int16_t _kernel2_cgra_stencil_50 = (int16_t) (kernel2_cgra_stencil.extract<16, 31>());
  int16_t _kernel2_cgra_stencil_51 = (int16_t) (kernel2_cgra_stencil.extract<32, 47>());
  int16_t _kernel2_cgra_stencil_52 = (int16_t) (kernel2_cgra_stencil.extract<48, 63>());
  int16_t _kernel2_cgra_stencil_53 = (int16_t) (kernel2_cgra_stencil.extract<64, 79>());
  int16_t _kernel2_cgra_stencil_54 = (int16_t) (kernel2_cgra_stencil.extract<80, 95>());
  int16_t _kernel2_cgra_stencil_55 = (int16_t) (kernel2_cgra_stencil.extract<96, 111>());
  int16_t _kernel2_cgra_stencil_56 = (int16_t) (kernel2_cgra_stencil.extract<112, 127>());

  int16_t _output_cgra_stencil_7 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _2970 = _kernel2_cgra_stencil_49 * _f1_cgra_1_stencil_57;
  int16_t _2971 = _kernel2_cgra_stencil_50 * _f1_cgra_1_stencil_58;
  int16_t _2972 = _kernel2_cgra_stencil_51 * _f1_cgra_1_stencil_59;
  int16_t _2973 = _kernel2_cgra_stencil_52 * _f1_cgra_1_stencil_60;
  int16_t _2974 = _kernel2_cgra_stencil_53 * _f1_cgra_1_stencil_61;
  int16_t _2975 = _kernel2_cgra_stencil_54 * _f1_cgra_1_stencil_62;
  int16_t _2976 = _kernel2_cgra_stencil_55 * _f1_cgra_1_stencil_63;
  int16_t _2977 = _kernel2_cgra_stencil_56 * _f1_cgra_1_stencil_64;
  int16_t _2978 = _2976 + _2977;
  int16_t _2979 = _2975 + _2978;
  int16_t _2980 = _2974 + _2979;
  int16_t _2981 = _2973 + _2980;
  int16_t _2982 = _2972 + _2981;
  int16_t _2983 = _2971 + _2982;
  int16_t _2984 = _output_cgra_stencil_7 + _2983;
  int16_t _2985 = _2970 + _2984;
  return _2985;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w*8) + 7), (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7))) = ((kernel2_cgra.stencil(0, ((output_cgra_s1_w_w*8) + 7))*f1_cgra$1.stencil(0, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + (output_cgra.stencil(((output_cgra_s1_w_w*8) + 7), (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7))) + ((kernel2_cgra.stencil(1, ((output_cgra_s1_w_w*8) + 7))*f1_cgra$1.stencil(1, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(2, ((output_cgra_s1_w_w*8) + 7))*f1_cgra$1.stencil(2, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(3, ((output_cgra_s1_w_w*8) + 7))*f1_cgra$1.stencil(3, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(4, ((output_cgra_s1_w_w*8) + 7))*f1_cgra$1.stencil(4, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(5, ((output_cgra_s1_w_w*8) + 7))*f1_cgra$1.stencil(5, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + ((kernel2_cgra.stencil(7, ((output_cgra_s1_w_w*8) + 7))*f1_cgra$1.stencil(7, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7)))) + (kernel2_cgra.stencil(6, ((output_cgra_s1_w_w*8) + 7))*f1_cgra$1.stencil(6, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*7) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*7))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_15(hw_uint<128>& f1_cgra_1_stencil, hw_uint<128>& kernel2_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _f1_cgra_1_stencil_65 = (int16_t) (f1_cgra_1_stencil.extract<0, 15>());
  int16_t _f1_cgra_1_stencil_66 = (int16_t) (f1_cgra_1_stencil.extract<16, 31>());
  int16_t _f1_cgra_1_stencil_67 = (int16_t) (f1_cgra_1_stencil.extract<32, 47>());
  int16_t _f1_cgra_1_stencil_68 = (int16_t) (f1_cgra_1_stencil.extract<48, 63>());
  int16_t _f1_cgra_1_stencil_69 = (int16_t) (f1_cgra_1_stencil.extract<64, 79>());
  int16_t _f1_cgra_1_stencil_70 = (int16_t) (f1_cgra_1_stencil.extract<80, 95>());
  int16_t _f1_cgra_1_stencil_71 = (int16_t) (f1_cgra_1_stencil.extract<96, 111>());
  int16_t _f1_cgra_1_stencil_72 = (int16_t) (f1_cgra_1_stencil.extract<112, 127>());

  int16_t _kernel2_cgra_stencil_57 = (int16_t) (kernel2_cgra_stencil.extract<0, 15>());
  int16_t _kernel2_cgra_stencil_58 = (int16_t) (kernel2_cgra_stencil.extract<16, 31>());
  int16_t _kernel2_cgra_stencil_59 = (int16_t) (kernel2_cgra_stencil.extract<32, 47>());
  int16_t _kernel2_cgra_stencil_60 = (int16_t) (kernel2_cgra_stencil.extract<48, 63>());
  int16_t _kernel2_cgra_stencil_61 = (int16_t) (kernel2_cgra_stencil.extract<64, 79>());
  int16_t _kernel2_cgra_stencil_62 = (int16_t) (kernel2_cgra_stencil.extract<80, 95>());
  int16_t _kernel2_cgra_stencil_63 = (int16_t) (kernel2_cgra_stencil.extract<96, 111>());
  int16_t _kernel2_cgra_stencil_64 = (int16_t) (kernel2_cgra_stencil.extract<112, 127>());

  int16_t _output_cgra_stencil_8 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _3043 = _kernel2_cgra_stencil_57 * _f1_cgra_1_stencil_65;
  int16_t _3044 = _kernel2_cgra_stencil_58 * _f1_cgra_1_stencil_66;
  int16_t _3045 = _kernel2_cgra_stencil_59 * _f1_cgra_1_stencil_67;
  int16_t _3046 = _kernel2_cgra_stencil_60 * _f1_cgra_1_stencil_68;
  int16_t _3047 = _kernel2_cgra_stencil_61 * _f1_cgra_1_stencil_69;
  int16_t _3048 = _kernel2_cgra_stencil_62 * _f1_cgra_1_stencil_70;
  int16_t _3049 = _kernel2_cgra_stencil_63 * _f1_cgra_1_stencil_71;
  int16_t _3050 = _kernel2_cgra_stencil_64 * _f1_cgra_1_stencil_72;
  int16_t _3051 = _3049 + _3050;
  int16_t _3052 = _3048 + _3051;
  int16_t _3053 = _3047 + _3052;
  int16_t _3054 = _3046 + _3053;
  int16_t _3055 = _3045 + _3054;
  int16_t _3056 = _3044 + _3055;
  int16_t _3057 = _output_cgra_stencil_8 + _3056;
  int16_t _3058 = _3043 + _3057;
  return _3058;
}

//store is: output_glb.stencil((output_glb_s0_w_w*8), ((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra), ((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)) = output_cgra.stencil((output_glb_s0_w_w*8), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
hw_uint<16> hcompute_output_glb_stencil(hw_uint<16>& output_cgra_stencil) {
  int16_t _output_cgra_stencil_9 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  return _output_cgra_stencil_9;
}

//store is: output_glb.stencil(((output_glb_s0_w_w*8) + 1), ((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra), ((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)) = output_cgra.stencil(((output_glb_s0_w_w*8) + 1), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
hw_uint<16> hcompute_output_glb_stencil_1(hw_uint<16>& output_cgra_stencil) {
  int16_t _output_cgra_stencil_10 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  return _output_cgra_stencil_10;
}

//store is: output_glb.stencil(((output_glb_s0_w_w*8) + 2), ((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra), ((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)) = output_cgra.stencil(((output_glb_s0_w_w*8) + 2), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
hw_uint<16> hcompute_output_glb_stencil_2(hw_uint<16>& output_cgra_stencil) {
  int16_t _output_cgra_stencil_11 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  return _output_cgra_stencil_11;
}

//store is: output_glb.stencil(((output_glb_s0_w_w*8) + 3), ((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra), ((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)) = output_cgra.stencil(((output_glb_s0_w_w*8) + 3), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
hw_uint<16> hcompute_output_glb_stencil_3(hw_uint<16>& output_cgra_stencil) {
  int16_t _output_cgra_stencil_12 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  return _output_cgra_stencil_12;
}

//store is: output_glb.stencil(((output_glb_s0_w_w*8) + 4), ((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra), ((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)) = output_cgra.stencil(((output_glb_s0_w_w*8) + 4), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
hw_uint<16> hcompute_output_glb_stencil_4(hw_uint<16>& output_cgra_stencil) {
  int16_t _output_cgra_stencil_13 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  return _output_cgra_stencil_13;
}

//store is: output_glb.stencil(((output_glb_s0_w_w*8) + 5), ((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra), ((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)) = output_cgra.stencil(((output_glb_s0_w_w*8) + 5), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
hw_uint<16> hcompute_output_glb_stencil_5(hw_uint<16>& output_cgra_stencil) {
  int16_t _output_cgra_stencil_14 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  return _output_cgra_stencil_14;
}

//store is: output_glb.stencil(((output_glb_s0_w_w*8) + 6), ((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra), ((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)) = output_cgra.stencil(((output_glb_s0_w_w*8) + 6), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
hw_uint<16> hcompute_output_glb_stencil_6(hw_uint<16>& output_cgra_stencil) {
  int16_t _output_cgra_stencil_15 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  return _output_cgra_stencil_15;
}

//store is: output_glb.stencil(((output_glb_s0_w_w*8) + 7), ((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra), ((output_glb_s0_y_y_glb*7) + output_glb_s0_y_y_cgra)) = output_cgra.stencil(((output_glb_s0_w_w*8) + 7), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
hw_uint<16> hcompute_output_glb_stencil_7(hw_uint<16>& output_cgra_stencil) {
  int16_t _output_cgra_stencil_16 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  return _output_cgra_stencil_16;
}

//store is: hw_output.stencil((hw_output_s0_w_w*8), hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil((hw_output_s0_w_w*8), hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& output_glb_stencil) {
  int16_t _output_glb_stencil_1 = (int16_t) (output_glb_stencil.extract<0, 15>());

  return _output_glb_stencil_1;
}

//store is: hw_output.stencil(((hw_output_s0_w_w*8) + 1), hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil(((hw_output_s0_w_w*8) + 1), hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil_1(hw_uint<16>& output_glb_stencil) {
  int16_t _output_glb_stencil_2 = (int16_t) (output_glb_stencil.extract<0, 15>());

  return _output_glb_stencil_2;
}

//store is: hw_output.stencil(((hw_output_s0_w_w*8) + 2), hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil(((hw_output_s0_w_w*8) + 2), hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil_2(hw_uint<16>& output_glb_stencil) {
  int16_t _output_glb_stencil_3 = (int16_t) (output_glb_stencil.extract<0, 15>());

  return _output_glb_stencil_3;
}

//store is: hw_output.stencil(((hw_output_s0_w_w*8) + 3), hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil(((hw_output_s0_w_w*8) + 3), hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil_3(hw_uint<16>& output_glb_stencil) {
  int16_t _output_glb_stencil_4 = (int16_t) (output_glb_stencil.extract<0, 15>());

  return _output_glb_stencil_4;
}

//store is: hw_output.stencil(((hw_output_s0_w_w*8) + 4), hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil(((hw_output_s0_w_w*8) + 4), hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil_4(hw_uint<16>& output_glb_stencil) {
  int16_t _output_glb_stencil_5 = (int16_t) (output_glb_stencil.extract<0, 15>());

  return _output_glb_stencil_5;
}

//store is: hw_output.stencil(((hw_output_s0_w_w*8) + 5), hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil(((hw_output_s0_w_w*8) + 5), hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil_5(hw_uint<16>& output_glb_stencil) {
  int16_t _output_glb_stencil_6 = (int16_t) (output_glb_stencil.extract<0, 15>());

  return _output_glb_stencil_6;
}

//store is: hw_output.stencil(((hw_output_s0_w_w*8) + 6), hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil(((hw_output_s0_w_w*8) + 6), hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil_6(hw_uint<16>& output_glb_stencil) {
  int16_t _output_glb_stencil_7 = (int16_t) (output_glb_stencil.extract<0, 15>());

  return _output_glb_stencil_7;
}

//store is: hw_output.stencil(((hw_output_s0_w_w*8) + 7), hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil(((hw_output_s0_w_w*8) + 7), hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil_7(hw_uint<16>& output_glb_stencil) {
  int16_t _output_glb_stencil_8 = (int16_t) (output_glb_stencil.extract<0, 15>());

  return _output_glb_stencil_8;
}

