#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: input_glb.stencil(input_glb_s0_z, input_glb_s0_x, input_glb_s0_y) = input_host.stencil(input_glb_s0_z, input_glb_s0_x, input_glb_s0_y)
hw_uint<16> hcompute_input_glb_stencil(hw_uint<16>& input_host_stencil) {
  int16_t _input_host_stencil_1 = (int16_t) input_host_stencil.extract<0, 15>();

  return _input_host_stencil_1;
}

//store is: kernel_glb.stencil(kernel_glb_s0_z, (kernel_glb_s0_w + 48), kernel_glb_s0_x, kernel_glb_s0_y) = kernel_host.stencil(kernel_glb_s0_z, kernel_glb_s0_w, kernel_glb_s0_x, kernel_glb_s0_y)
hw_uint<16> hcompute_kernel_glb_stencil(hw_uint<16>& kernel_host_stencil) {
  int16_t _kernel_host_stencil_1 = (int16_t) kernel_host_stencil.extract<0, 15>();

  return _kernel_host_stencil_1;
}

//store is: output_cgra.stencil(0, (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*14))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil() {
  int16_t _689 = (int16_t)(0);
  return _689;
}

//store is: output_cgra.stencil(1, (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*14))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_1() {
  int16_t _698 = (int16_t)(0);
  return _698;
}

//store is: output_cgra.stencil(2, (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*14))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_2() {
  int16_t _707 = (int16_t)(0);
  return _707;
}

//store is: output_cgra.stencil(3, (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*14))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_3() {
  int16_t _716 = (int16_t)(0);
  return _716;
}

//store is: output_cgra.stencil(4, (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*14))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_4() {
  int16_t _725 = (int16_t)(0);
  return _725;
}

//store is: output_cgra.stencil(5, (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*14))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_5() {
  int16_t _734 = (int16_t)(0);
  return _734;
}

//store is: output_cgra.stencil(6, (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*14))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_6() {
  int16_t _743 = (int16_t)(0);
  return _743;
}

//store is: output_cgra.stencil(7, (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*14))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_7() {
  int16_t _752 = (int16_t)(0);
  return _752;
}

//store is: output_cgra.stencil(8, (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*14))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_8() {
  int16_t _761 = (int16_t)(0);
  return _761;
}

//store is: output_cgra.stencil(9, (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*14))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_9() {
  int16_t _770 = (int16_t)(0);
  return _770;
}

//store is: output_cgra.stencil(10, (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*14))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_10() {
  int16_t _779 = (int16_t)(0);
  return _779;
}

//store is: output_cgra.stencil(11, (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*14))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_11() {
  int16_t _788 = (int16_t)(0);
  return _788;
}

//store is: output_cgra.stencil(12, (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*14))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_12() {
  int16_t _797 = (int16_t)(0);
  return _797;
}

//store is: output_cgra.stencil(13, (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*14))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_13() {
  int16_t _806 = (int16_t)(0);
  return _806;
}

//store is: output_cgra.stencil(14, (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*14))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_14() {
  int16_t _815 = (int16_t)(0);
  return _815;
}

//store is: output_cgra.stencil(15, (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*14))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_15() {
  int16_t _824 = (int16_t)(0);
  return _824;
}

//store is: input_cgra.stencil(input_cgra_s0_z_z_cgra, (((output_glb_s0_x_x_glb*28) + input_cgra_s0_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + input_cgra_s0_y) - (output_glb_s0_y_y_glb*28))) = input_glb.stencil(input_cgra_s0_z_z_cgra, ((output_glb_s0_x_x_glb*28) + input_cgra_s0_x), ((output_glb_s0_y_y_glb*28) + input_cgra_s0_y))
hw_uint<16> hcompute_input_cgra_stencil(hw_uint<16>& input_glb_stencil) {
  int16_t _input_glb_stencil_1 = (int16_t) input_glb_stencil.extract<0, 15>();

  return _input_glb_stencil_1;
}

//store is: kernel_cgra.stencil(kernel_cgra_s0_z_z_cgra, kernel_cgra_s0_w_w_cgra, kernel_cgra_s0_x, kernel_cgra_s0_y) = kernel_glb.stencil(kernel_cgra_s0_z_z_cgra, (((output_glb_s0_w_w_glb*16) + kernel_cgra_s0_w_w_cgra) + 48), kernel_cgra_s0_x, kernel_cgra_s0_y)
hw_uint<16> hcompute_kernel_cgra_stencil(hw_uint<16>& kernel_glb_stencil) {
  int16_t _kernel_glb_stencil_1 = (int16_t) kernel_glb_stencil.extract<0, 15>();

  return _kernel_glb_stencil_1;
}

//store is: output_cgra.stencil(0, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) = ((kernel_cgra.stencil(0, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(0, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) + ((kernel_cgra.stencil(2, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(1, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))))))
hw_uint<16> hcompute_output_cgra_stencil_16(hw_uint<48>& input_cgra_stencil, hw_uint<48>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_1 = (int16_t) input_cgra_stencil.extract<0, 15>();
  int16_t _input_cgra_stencil_2 = (int16_t) input_cgra_stencil.extract<16, 31>();
  int16_t _input_cgra_stencil_3 = (int16_t) input_cgra_stencil.extract<32, 47>();

  int16_t _kernel_cgra_stencil_1 = (int16_t) kernel_cgra_stencil.extract<0, 15>();
  int16_t _kernel_cgra_stencil_2 = (int16_t) kernel_cgra_stencil.extract<16, 31>();
  int16_t _kernel_cgra_stencil_3 = (int16_t) kernel_cgra_stencil.extract<32, 47>();

  int16_t _output_cgra_stencil_1 = (int16_t) output_cgra_stencil.extract<0, 15>();

  int16_t _848 = _kernel_cgra_stencil_1 * _input_cgra_stencil_1;
  int16_t _849 = _kernel_cgra_stencil_2 * _input_cgra_stencil_2;
  int16_t _850 = _kernel_cgra_stencil_3 * _input_cgra_stencil_3;
  int16_t _851 = _849 + _850;
  int16_t _852 = _output_cgra_stencil_1 + _851;
  int16_t _853 = _848 + _852;
  return _853;
}

//store is: output_cgra.stencil(1, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) = ((kernel_cgra.stencil(0, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(1, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) + ((kernel_cgra.stencil(2, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(1, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))))))
hw_uint<16> hcompute_output_cgra_stencil_17(hw_uint<48>& input_cgra_stencil, hw_uint<48>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_4 = (int16_t) input_cgra_stencil.extract<0, 15>();
  int16_t _input_cgra_stencil_5 = (int16_t) input_cgra_stencil.extract<16, 31>();
  int16_t _input_cgra_stencil_6 = (int16_t) input_cgra_stencil.extract<32, 47>();

  int16_t _kernel_cgra_stencil_4 = (int16_t) kernel_cgra_stencil.extract<0, 15>();
  int16_t _kernel_cgra_stencil_5 = (int16_t) kernel_cgra_stencil.extract<16, 31>();
  int16_t _kernel_cgra_stencil_6 = (int16_t) kernel_cgra_stencil.extract<32, 47>();

  int16_t _output_cgra_stencil_2 = (int16_t) output_cgra_stencil.extract<0, 15>();

  int16_t _887 = _kernel_cgra_stencil_4 * _input_cgra_stencil_4;
  int16_t _888 = _kernel_cgra_stencil_5 * _input_cgra_stencil_5;
  int16_t _889 = _kernel_cgra_stencil_6 * _input_cgra_stencil_6;
  int16_t _890 = _888 + _889;
  int16_t _891 = _output_cgra_stencil_2 + _890;
  int16_t _892 = _887 + _891;
  return _892;
}

//store is: output_cgra.stencil(2, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) = ((kernel_cgra.stencil(0, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(2, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) + ((kernel_cgra.stencil(2, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(1, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))))))
hw_uint<16> hcompute_output_cgra_stencil_18(hw_uint<48>& input_cgra_stencil, hw_uint<48>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_7 = (int16_t) input_cgra_stencil.extract<0, 15>();
  int16_t _input_cgra_stencil_8 = (int16_t) input_cgra_stencil.extract<16, 31>();
  int16_t _input_cgra_stencil_9 = (int16_t) input_cgra_stencil.extract<32, 47>();

  int16_t _kernel_cgra_stencil_7 = (int16_t) kernel_cgra_stencil.extract<0, 15>();
  int16_t _kernel_cgra_stencil_8 = (int16_t) kernel_cgra_stencil.extract<16, 31>();
  int16_t _kernel_cgra_stencil_9 = (int16_t) kernel_cgra_stencil.extract<32, 47>();

  int16_t _output_cgra_stencil_3 = (int16_t) output_cgra_stencil.extract<0, 15>();

  int16_t _926 = _kernel_cgra_stencil_7 * _input_cgra_stencil_7;
  int16_t _927 = _kernel_cgra_stencil_8 * _input_cgra_stencil_8;
  int16_t _928 = _kernel_cgra_stencil_9 * _input_cgra_stencil_9;
  int16_t _929 = _927 + _928;
  int16_t _930 = _output_cgra_stencil_3 + _929;
  int16_t _931 = _926 + _930;
  return _931;
}

//store is: output_cgra.stencil(3, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) = ((kernel_cgra.stencil(0, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(3, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) + ((kernel_cgra.stencil(2, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(1, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))))))
hw_uint<16> hcompute_output_cgra_stencil_19(hw_uint<48>& input_cgra_stencil, hw_uint<48>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_10 = (int16_t) input_cgra_stencil.extract<0, 15>();
  int16_t _input_cgra_stencil_11 = (int16_t) input_cgra_stencil.extract<16, 31>();
  int16_t _input_cgra_stencil_12 = (int16_t) input_cgra_stencil.extract<32, 47>();

  int16_t _kernel_cgra_stencil_10 = (int16_t) kernel_cgra_stencil.extract<0, 15>();
  int16_t _kernel_cgra_stencil_11 = (int16_t) kernel_cgra_stencil.extract<16, 31>();
  int16_t _kernel_cgra_stencil_12 = (int16_t) kernel_cgra_stencil.extract<32, 47>();

  int16_t _output_cgra_stencil_4 = (int16_t) output_cgra_stencil.extract<0, 15>();

  int16_t _965 = _kernel_cgra_stencil_10 * _input_cgra_stencil_10;
  int16_t _966 = _kernel_cgra_stencil_11 * _input_cgra_stencil_11;
  int16_t _967 = _kernel_cgra_stencil_12 * _input_cgra_stencil_12;
  int16_t _968 = _966 + _967;
  int16_t _969 = _output_cgra_stencil_4 + _968;
  int16_t _970 = _965 + _969;
  return _970;
}

//store is: output_cgra.stencil(4, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) = ((kernel_cgra.stencil(0, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(4, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) + ((kernel_cgra.stencil(2, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(1, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))))))
hw_uint<16> hcompute_output_cgra_stencil_20(hw_uint<48>& input_cgra_stencil, hw_uint<48>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_13 = (int16_t) input_cgra_stencil.extract<0, 15>();
  int16_t _input_cgra_stencil_14 = (int16_t) input_cgra_stencil.extract<16, 31>();
  int16_t _input_cgra_stencil_15 = (int16_t) input_cgra_stencil.extract<32, 47>();

  int16_t _kernel_cgra_stencil_13 = (int16_t) kernel_cgra_stencil.extract<0, 15>();
  int16_t _kernel_cgra_stencil_14 = (int16_t) kernel_cgra_stencil.extract<16, 31>();
  int16_t _kernel_cgra_stencil_15 = (int16_t) kernel_cgra_stencil.extract<32, 47>();

  int16_t _output_cgra_stencil_5 = (int16_t) output_cgra_stencil.extract<0, 15>();

  int16_t _1004 = _kernel_cgra_stencil_13 * _input_cgra_stencil_13;
  int16_t _1005 = _kernel_cgra_stencil_14 * _input_cgra_stencil_14;
  int16_t _1006 = _kernel_cgra_stencil_15 * _input_cgra_stencil_15;
  int16_t _1007 = _1005 + _1006;
  int16_t _1008 = _output_cgra_stencil_5 + _1007;
  int16_t _1009 = _1004 + _1008;
  return _1009;
}

//store is: output_cgra.stencil(5, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) = ((kernel_cgra.stencil(0, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(5, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) + ((kernel_cgra.stencil(2, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(1, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))))))
hw_uint<16> hcompute_output_cgra_stencil_21(hw_uint<48>& input_cgra_stencil, hw_uint<48>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_16 = (int16_t) input_cgra_stencil.extract<0, 15>();
  int16_t _input_cgra_stencil_17 = (int16_t) input_cgra_stencil.extract<16, 31>();
  int16_t _input_cgra_stencil_18 = (int16_t) input_cgra_stencil.extract<32, 47>();

  int16_t _kernel_cgra_stencil_16 = (int16_t) kernel_cgra_stencil.extract<0, 15>();
  int16_t _kernel_cgra_stencil_17 = (int16_t) kernel_cgra_stencil.extract<16, 31>();
  int16_t _kernel_cgra_stencil_18 = (int16_t) kernel_cgra_stencil.extract<32, 47>();

  int16_t _output_cgra_stencil_6 = (int16_t) output_cgra_stencil.extract<0, 15>();

  int16_t _1043 = _kernel_cgra_stencil_16 * _input_cgra_stencil_16;
  int16_t _1044 = _kernel_cgra_stencil_17 * _input_cgra_stencil_17;
  int16_t _1045 = _kernel_cgra_stencil_18 * _input_cgra_stencil_18;
  int16_t _1046 = _1044 + _1045;
  int16_t _1047 = _output_cgra_stencil_6 + _1046;
  int16_t _1048 = _1043 + _1047;
  return _1048;
}

//store is: output_cgra.stencil(6, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) = ((kernel_cgra.stencil(0, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(6, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) + ((kernel_cgra.stencil(2, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(1, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))))))
hw_uint<16> hcompute_output_cgra_stencil_22(hw_uint<48>& input_cgra_stencil, hw_uint<48>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_19 = (int16_t) input_cgra_stencil.extract<0, 15>();
  int16_t _input_cgra_stencil_20 = (int16_t) input_cgra_stencil.extract<16, 31>();
  int16_t _input_cgra_stencil_21 = (int16_t) input_cgra_stencil.extract<32, 47>();

  int16_t _kernel_cgra_stencil_19 = (int16_t) kernel_cgra_stencil.extract<0, 15>();
  int16_t _kernel_cgra_stencil_20 = (int16_t) kernel_cgra_stencil.extract<16, 31>();
  int16_t _kernel_cgra_stencil_21 = (int16_t) kernel_cgra_stencil.extract<32, 47>();

  int16_t _output_cgra_stencil_7 = (int16_t) output_cgra_stencil.extract<0, 15>();

  int16_t _1082 = _kernel_cgra_stencil_19 * _input_cgra_stencil_19;
  int16_t _1083 = _kernel_cgra_stencil_20 * _input_cgra_stencil_20;
  int16_t _1084 = _kernel_cgra_stencil_21 * _input_cgra_stencil_21;
  int16_t _1085 = _1083 + _1084;
  int16_t _1086 = _output_cgra_stencil_7 + _1085;
  int16_t _1087 = _1082 + _1086;
  return _1087;
}

//store is: output_cgra.stencil(7, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) = ((kernel_cgra.stencil(0, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(7, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) + ((kernel_cgra.stencil(2, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(1, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))))))
hw_uint<16> hcompute_output_cgra_stencil_23(hw_uint<48>& input_cgra_stencil, hw_uint<48>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_22 = (int16_t) input_cgra_stencil.extract<0, 15>();
  int16_t _input_cgra_stencil_23 = (int16_t) input_cgra_stencil.extract<16, 31>();
  int16_t _input_cgra_stencil_24 = (int16_t) input_cgra_stencil.extract<32, 47>();

  int16_t _kernel_cgra_stencil_22 = (int16_t) kernel_cgra_stencil.extract<0, 15>();
  int16_t _kernel_cgra_stencil_23 = (int16_t) kernel_cgra_stencil.extract<16, 31>();
  int16_t _kernel_cgra_stencil_24 = (int16_t) kernel_cgra_stencil.extract<32, 47>();

  int16_t _output_cgra_stencil_8 = (int16_t) output_cgra_stencil.extract<0, 15>();

  int16_t _1121 = _kernel_cgra_stencil_22 * _input_cgra_stencil_22;
  int16_t _1122 = _kernel_cgra_stencil_23 * _input_cgra_stencil_23;
  int16_t _1123 = _kernel_cgra_stencil_24 * _input_cgra_stencil_24;
  int16_t _1124 = _1122 + _1123;
  int16_t _1125 = _output_cgra_stencil_8 + _1124;
  int16_t _1126 = _1121 + _1125;
  return _1126;
}

//store is: output_cgra.stencil(8, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) = ((kernel_cgra.stencil(0, 8, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(8, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) + ((kernel_cgra.stencil(2, 8, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(1, 8, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))))))
hw_uint<16> hcompute_output_cgra_stencil_24(hw_uint<48>& input_cgra_stencil, hw_uint<48>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_25 = (int16_t) input_cgra_stencil.extract<0, 15>();
  int16_t _input_cgra_stencil_26 = (int16_t) input_cgra_stencil.extract<16, 31>();
  int16_t _input_cgra_stencil_27 = (int16_t) input_cgra_stencil.extract<32, 47>();

  int16_t _kernel_cgra_stencil_25 = (int16_t) kernel_cgra_stencil.extract<0, 15>();
  int16_t _kernel_cgra_stencil_26 = (int16_t) kernel_cgra_stencil.extract<16, 31>();
  int16_t _kernel_cgra_stencil_27 = (int16_t) kernel_cgra_stencil.extract<32, 47>();

  int16_t _output_cgra_stencil_9 = (int16_t) output_cgra_stencil.extract<0, 15>();

  int16_t _1160 = _kernel_cgra_stencil_25 * _input_cgra_stencil_25;
  int16_t _1161 = _kernel_cgra_stencil_26 * _input_cgra_stencil_26;
  int16_t _1162 = _kernel_cgra_stencil_27 * _input_cgra_stencil_27;
  int16_t _1163 = _1161 + _1162;
  int16_t _1164 = _output_cgra_stencil_9 + _1163;
  int16_t _1165 = _1160 + _1164;
  return _1165;
}

//store is: output_cgra.stencil(9, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) = ((kernel_cgra.stencil(0, 9, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(9, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) + ((kernel_cgra.stencil(2, 9, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(1, 9, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))))))
hw_uint<16> hcompute_output_cgra_stencil_25(hw_uint<48>& input_cgra_stencil, hw_uint<48>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_28 = (int16_t) input_cgra_stencil.extract<0, 15>();
  int16_t _input_cgra_stencil_29 = (int16_t) input_cgra_stencil.extract<16, 31>();
  int16_t _input_cgra_stencil_30 = (int16_t) input_cgra_stencil.extract<32, 47>();

  int16_t _kernel_cgra_stencil_28 = (int16_t) kernel_cgra_stencil.extract<0, 15>();
  int16_t _kernel_cgra_stencil_29 = (int16_t) kernel_cgra_stencil.extract<16, 31>();
  int16_t _kernel_cgra_stencil_30 = (int16_t) kernel_cgra_stencil.extract<32, 47>();

  int16_t _output_cgra_stencil_10 = (int16_t) output_cgra_stencil.extract<0, 15>();

  int16_t _1199 = _kernel_cgra_stencil_28 * _input_cgra_stencil_28;
  int16_t _1200 = _kernel_cgra_stencil_29 * _input_cgra_stencil_29;
  int16_t _1201 = _kernel_cgra_stencil_30 * _input_cgra_stencil_30;
  int16_t _1202 = _1200 + _1201;
  int16_t _1203 = _output_cgra_stencil_10 + _1202;
  int16_t _1204 = _1199 + _1203;
  return _1204;
}

//store is: output_cgra.stencil(10, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) = ((kernel_cgra.stencil(0, 10, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(10, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) + ((kernel_cgra.stencil(2, 10, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(1, 10, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))))))
hw_uint<16> hcompute_output_cgra_stencil_26(hw_uint<48>& input_cgra_stencil, hw_uint<48>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_31 = (int16_t) input_cgra_stencil.extract<0, 15>();
  int16_t _input_cgra_stencil_32 = (int16_t) input_cgra_stencil.extract<16, 31>();
  int16_t _input_cgra_stencil_33 = (int16_t) input_cgra_stencil.extract<32, 47>();

  int16_t _kernel_cgra_stencil_31 = (int16_t) kernel_cgra_stencil.extract<0, 15>();
  int16_t _kernel_cgra_stencil_32 = (int16_t) kernel_cgra_stencil.extract<16, 31>();
  int16_t _kernel_cgra_stencil_33 = (int16_t) kernel_cgra_stencil.extract<32, 47>();

  int16_t _output_cgra_stencil_11 = (int16_t) output_cgra_stencil.extract<0, 15>();

  int16_t _1238 = _kernel_cgra_stencil_31 * _input_cgra_stencil_31;
  int16_t _1239 = _kernel_cgra_stencil_32 * _input_cgra_stencil_32;
  int16_t _1240 = _kernel_cgra_stencil_33 * _input_cgra_stencil_33;
  int16_t _1241 = _1239 + _1240;
  int16_t _1242 = _output_cgra_stencil_11 + _1241;
  int16_t _1243 = _1238 + _1242;
  return _1243;
}

//store is: output_cgra.stencil(11, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) = ((kernel_cgra.stencil(0, 11, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(11, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) + ((kernel_cgra.stencil(2, 11, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(1, 11, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))))))
hw_uint<16> hcompute_output_cgra_stencil_27(hw_uint<48>& input_cgra_stencil, hw_uint<48>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_34 = (int16_t) input_cgra_stencil.extract<0, 15>();
  int16_t _input_cgra_stencil_35 = (int16_t) input_cgra_stencil.extract<16, 31>();
  int16_t _input_cgra_stencil_36 = (int16_t) input_cgra_stencil.extract<32, 47>();

  int16_t _kernel_cgra_stencil_34 = (int16_t) kernel_cgra_stencil.extract<0, 15>();
  int16_t _kernel_cgra_stencil_35 = (int16_t) kernel_cgra_stencil.extract<16, 31>();
  int16_t _kernel_cgra_stencil_36 = (int16_t) kernel_cgra_stencil.extract<32, 47>();

  int16_t _output_cgra_stencil_12 = (int16_t) output_cgra_stencil.extract<0, 15>();

  int16_t _1277 = _kernel_cgra_stencil_34 * _input_cgra_stencil_34;
  int16_t _1278 = _kernel_cgra_stencil_35 * _input_cgra_stencil_35;
  int16_t _1279 = _kernel_cgra_stencil_36 * _input_cgra_stencil_36;
  int16_t _1280 = _1278 + _1279;
  int16_t _1281 = _output_cgra_stencil_12 + _1280;
  int16_t _1282 = _1277 + _1281;
  return _1282;
}

//store is: output_cgra.stencil(12, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) = ((kernel_cgra.stencil(0, 12, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(12, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) + ((kernel_cgra.stencil(2, 12, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(1, 12, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))))))
hw_uint<16> hcompute_output_cgra_stencil_28(hw_uint<48>& input_cgra_stencil, hw_uint<48>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_37 = (int16_t) input_cgra_stencil.extract<0, 15>();
  int16_t _input_cgra_stencil_38 = (int16_t) input_cgra_stencil.extract<16, 31>();
  int16_t _input_cgra_stencil_39 = (int16_t) input_cgra_stencil.extract<32, 47>();

  int16_t _kernel_cgra_stencil_37 = (int16_t) kernel_cgra_stencil.extract<0, 15>();
  int16_t _kernel_cgra_stencil_38 = (int16_t) kernel_cgra_stencil.extract<16, 31>();
  int16_t _kernel_cgra_stencil_39 = (int16_t) kernel_cgra_stencil.extract<32, 47>();

  int16_t _output_cgra_stencil_13 = (int16_t) output_cgra_stencil.extract<0, 15>();

  int16_t _1316 = _kernel_cgra_stencil_37 * _input_cgra_stencil_37;
  int16_t _1317 = _kernel_cgra_stencil_38 * _input_cgra_stencil_38;
  int16_t _1318 = _kernel_cgra_stencil_39 * _input_cgra_stencil_39;
  int16_t _1319 = _1317 + _1318;
  int16_t _1320 = _output_cgra_stencil_13 + _1319;
  int16_t _1321 = _1316 + _1320;
  return _1321;
}

//store is: output_cgra.stencil(13, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) = ((kernel_cgra.stencil(0, 13, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(13, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) + ((kernel_cgra.stencil(2, 13, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(1, 13, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))))))
hw_uint<16> hcompute_output_cgra_stencil_29(hw_uint<48>& input_cgra_stencil, hw_uint<48>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_40 = (int16_t) input_cgra_stencil.extract<0, 15>();
  int16_t _input_cgra_stencil_41 = (int16_t) input_cgra_stencil.extract<16, 31>();
  int16_t _input_cgra_stencil_42 = (int16_t) input_cgra_stencil.extract<32, 47>();

  int16_t _kernel_cgra_stencil_40 = (int16_t) kernel_cgra_stencil.extract<0, 15>();
  int16_t _kernel_cgra_stencil_41 = (int16_t) kernel_cgra_stencil.extract<16, 31>();
  int16_t _kernel_cgra_stencil_42 = (int16_t) kernel_cgra_stencil.extract<32, 47>();

  int16_t _output_cgra_stencil_14 = (int16_t) output_cgra_stencil.extract<0, 15>();

  int16_t _1355 = _kernel_cgra_stencil_40 * _input_cgra_stencil_40;
  int16_t _1356 = _kernel_cgra_stencil_41 * _input_cgra_stencil_41;
  int16_t _1357 = _kernel_cgra_stencil_42 * _input_cgra_stencil_42;
  int16_t _1358 = _1356 + _1357;
  int16_t _1359 = _output_cgra_stencil_14 + _1358;
  int16_t _1360 = _1355 + _1359;
  return _1360;
}

//store is: output_cgra.stencil(14, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) = ((kernel_cgra.stencil(0, 14, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(14, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) + ((kernel_cgra.stencil(2, 14, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(1, 14, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))))))
hw_uint<16> hcompute_output_cgra_stencil_30(hw_uint<48>& input_cgra_stencil, hw_uint<48>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_43 = (int16_t) input_cgra_stencil.extract<0, 15>();
  int16_t _input_cgra_stencil_44 = (int16_t) input_cgra_stencil.extract<16, 31>();
  int16_t _input_cgra_stencil_45 = (int16_t) input_cgra_stencil.extract<32, 47>();

  int16_t _kernel_cgra_stencil_43 = (int16_t) kernel_cgra_stencil.extract<0, 15>();
  int16_t _kernel_cgra_stencil_44 = (int16_t) kernel_cgra_stencil.extract<16, 31>();
  int16_t _kernel_cgra_stencil_45 = (int16_t) kernel_cgra_stencil.extract<32, 47>();

  int16_t _output_cgra_stencil_15 = (int16_t) output_cgra_stencil.extract<0, 15>();

  int16_t _1394 = _kernel_cgra_stencil_43 * _input_cgra_stencil_43;
  int16_t _1395 = _kernel_cgra_stencil_44 * _input_cgra_stencil_44;
  int16_t _1396 = _kernel_cgra_stencil_45 * _input_cgra_stencil_45;
  int16_t _1397 = _1395 + _1396;
  int16_t _1398 = _output_cgra_stencil_15 + _1397;
  int16_t _1399 = _1394 + _1398;
  return _1399;
}

//store is: output_cgra.stencil(15, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) = ((kernel_cgra.stencil(0, 15, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(15, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) + ((kernel_cgra.stencil(2, 15, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(1, 15, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))))))
hw_uint<16> hcompute_output_cgra_stencil_31(hw_uint<48>& input_cgra_stencil, hw_uint<48>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_46 = (int16_t) input_cgra_stencil.extract<0, 15>();
  int16_t _input_cgra_stencil_47 = (int16_t) input_cgra_stencil.extract<16, 31>();
  int16_t _input_cgra_stencil_48 = (int16_t) input_cgra_stencil.extract<32, 47>();

  int16_t _kernel_cgra_stencil_46 = (int16_t) kernel_cgra_stencil.extract<0, 15>();
  int16_t _kernel_cgra_stencil_47 = (int16_t) kernel_cgra_stencil.extract<16, 31>();
  int16_t _kernel_cgra_stencil_48 = (int16_t) kernel_cgra_stencil.extract<32, 47>();

  int16_t _output_cgra_stencil_16 = (int16_t) output_cgra_stencil.extract<0, 15>();

  int16_t _1433 = _kernel_cgra_stencil_46 * _input_cgra_stencil_46;
  int16_t _1434 = _kernel_cgra_stencil_47 * _input_cgra_stencil_47;
  int16_t _1435 = _kernel_cgra_stencil_48 * _input_cgra_stencil_48;
  int16_t _1436 = _1434 + _1435;
  int16_t _1437 = _output_cgra_stencil_16 + _1436;
  int16_t _1438 = _1433 + _1437;
  return _1438;
}

//store is: output_glb.stencil(((output_glb_s0_w_w_glb*16) + output_glb_s0_w_w_cgra), ((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra), ((output_glb_s0_y_y_glb*14) + output_glb_s0_y_y_cgra)) = output_cgra.stencil(output_glb_s0_w_w_cgra, output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
hw_uint<16> hcompute_output_glb_stencil(hw_uint<16>& output_cgra_stencil) {
  int16_t _output_cgra_stencil_17 = (int16_t) output_cgra_stencil.extract<0, 15>();

  return _output_cgra_stencil_17;
}

//store is: hw_output.stencil(hw_output_s0_w, hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil(hw_output_s0_w, hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& output_glb_stencil) {
  int16_t _output_glb_stencil_1 = (int16_t) output_glb_stencil.extract<0, 15>();

  return _output_glb_stencil_1;
}

