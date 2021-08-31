#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: input_glb.stencil(input_glb_s0_z, input_glb_s0_x, input_glb_s0_y) = input_host.stencil(input_glb_s0_z, input_glb_s0_x, input_glb_s0_y)
hw_uint<16> hcompute_input_glb_stencil(hw_uint<16>& input_host_stencil) {
  uint16_t _input_host_stencil_1 = (uint16_t) input_host_stencil.extract<0, 15>();

  return _input_host_stencil_1;
}

//store is: kernel_glb.stencil(kernel_glb_s0_z, (kernel_glb_s0_w + 56), kernel_glb_s0_x, kernel_glb_s0_y) = kernel_host.stencil(kernel_glb_s0_z, kernel_glb_s0_w, kernel_glb_s0_x, kernel_glb_s0_y)
hw_uint<16> hcompute_kernel_glb_stencil(hw_uint<16>& kernel_host_stencil) {
  uint16_t _kernel_host_stencil_1 = (uint16_t) kernel_host_stencil.extract<0, 15>();

  return _kernel_host_stencil_1;
}

//store is: output_cgra.stencil(0, (((output_glb_s0_x_x_glb*28) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*28))) = (uint16)0
hw_uint<16> hcompute_output_cgra_stencil() {
  uint16_t _700 = (uint16_t)(0);
  return _700;
}

//store is: output_cgra.stencil(1, (((output_glb_s0_x_x_glb*28) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*28))) = (uint16)0
hw_uint<16> hcompute_output_cgra_stencil_1() {
  uint16_t _709 = (uint16_t)(0);
  return _709;
}

//store is: output_cgra.stencil(2, (((output_glb_s0_x_x_glb*28) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*28))) = (uint16)0
hw_uint<16> hcompute_output_cgra_stencil_2() {
  uint16_t _718 = (uint16_t)(0);
  return _718;
}

//store is: output_cgra.stencil(3, (((output_glb_s0_x_x_glb*28) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*28))) = (uint16)0
hw_uint<16> hcompute_output_cgra_stencil_3() {
  uint16_t _727 = (uint16_t)(0);
  return _727;
}

//store is: output_cgra.stencil(4, (((output_glb_s0_x_x_glb*28) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*28))) = (uint16)0
hw_uint<16> hcompute_output_cgra_stencil_4() {
  uint16_t _736 = (uint16_t)(0);
  return _736;
}

//store is: output_cgra.stencil(5, (((output_glb_s0_x_x_glb*28) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*28))) = (uint16)0
hw_uint<16> hcompute_output_cgra_stencil_5() {
  uint16_t _745 = (uint16_t)(0);
  return _745;
}

//store is: output_cgra.stencil(6, (((output_glb_s0_x_x_glb*28) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*28))) = (uint16)0
hw_uint<16> hcompute_output_cgra_stencil_6() {
  uint16_t _754 = (uint16_t)(0);
  return _754;
}

//store is: output_cgra.stencil(7, (((output_glb_s0_x_x_glb*28) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*28))) = (uint16)0
hw_uint<16> hcompute_output_cgra_stencil_7() {
  uint16_t _763 = (uint16_t)(0);
  return _763;
}

//store is: input_cgra.stencil(input_cgra_s0_z_z_cgra, (((output_glb_s0_x_x_glb*28) + input_cgra_s0_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + input_cgra_s0_y) - (output_glb_s0_y_y_glb*28))) = input_glb.stencil(((output_cgra_s1_r_z_rz_glb*8) + input_cgra_s0_z_z_cgra), ((output_glb_s0_x_x_glb*28) + input_cgra_s0_x), ((output_glb_s0_y_y_glb*28) + input_cgra_s0_y))
hw_uint<16> hcompute_input_cgra_stencil(hw_uint<16>& input_glb_stencil) {
  uint16_t _input_glb_stencil_1 = (uint16_t) input_glb_stencil.extract<0, 15>();

  return _input_glb_stencil_1;
}

//store is: kernel_cgra.stencil(kernel_cgra_s0_z_z_cgra, kernel_cgra_s0_w_w_cgra, kernel_cgra_s0_x, kernel_cgra_s0_y) = kernel_glb.stencil(((output_cgra_s1_r_z_rz_glb*8) + kernel_cgra_s0_z_z_cgra), (((output_glb_s0_w_w_glb*8) + kernel_cgra_s0_w_w_cgra) + 56), kernel_cgra_s0_x, kernel_cgra_s0_y)
hw_uint<16> hcompute_kernel_cgra_stencil(hw_uint<16>& kernel_glb_stencil) {
  uint16_t _kernel_glb_stencil_1 = (uint16_t) kernel_glb_stencil.extract<0, 15>();

  return _kernel_glb_stencil_1;
}

//store is: output_cgra.stencil(0, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(0, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(6, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_8(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_1 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_2 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_3 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_4 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_5 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_6 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_7 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_8 = (uint16_t) input_cgra_stencil.extract<112, 127>();

  uint16_t _kernel_cgra_stencil_1 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_2 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_3 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_4 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_5 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_6 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_7 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_8 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();

  uint16_t _output_cgra_stencil_1 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _791 = _kernel_cgra_stencil_1 * _input_cgra_stencil_1;
  uint16_t _792 = _kernel_cgra_stencil_2 * _input_cgra_stencil_2;
  uint16_t _793 = _kernel_cgra_stencil_3 * _input_cgra_stencil_3;
  uint16_t _794 = _kernel_cgra_stencil_4 * _input_cgra_stencil_4;
  uint16_t _795 = _kernel_cgra_stencil_5 * _input_cgra_stencil_5;
  uint16_t _796 = _kernel_cgra_stencil_6 * _input_cgra_stencil_6;
  uint16_t _797 = _kernel_cgra_stencil_7 * _input_cgra_stencil_7;
  uint16_t _798 = _kernel_cgra_stencil_8 * _input_cgra_stencil_8;
  uint16_t _799 = _797 + _798;
  uint16_t _800 = _796 + _799;
  uint16_t _801 = _795 + _800;
  uint16_t _802 = _794 + _801;
  uint16_t _803 = _793 + _802;
  uint16_t _804 = _792 + _803;
  uint16_t _805 = _output_cgra_stencil_1 + _804;
  uint16_t _806 = _791 + _805;
  return _806;
}

//store is: output_cgra.stencil(1, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(1, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(6, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_9(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_10 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_11 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_12 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_13 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_14 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_15 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_16 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_9 = (uint16_t) input_cgra_stencil.extract<112, 127>();

  uint16_t _kernel_cgra_stencil_10 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_11 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_12 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_13 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_14 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_15 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_16 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_9 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();

  uint16_t _output_cgra_stencil_2 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _866 = _kernel_cgra_stencil_9 * _input_cgra_stencil_9;
  uint16_t _867 = _kernel_cgra_stencil_10 * _input_cgra_stencil_10;
  uint16_t _868 = _kernel_cgra_stencil_11 * _input_cgra_stencil_11;
  uint16_t _869 = _kernel_cgra_stencil_12 * _input_cgra_stencil_12;
  uint16_t _870 = _kernel_cgra_stencil_13 * _input_cgra_stencil_13;
  uint16_t _871 = _kernel_cgra_stencil_14 * _input_cgra_stencil_14;
  uint16_t _872 = _kernel_cgra_stencil_15 * _input_cgra_stencil_15;
  uint16_t _873 = _kernel_cgra_stencil_16 * _input_cgra_stencil_16;
  uint16_t _874 = _872 + _873;
  uint16_t _875 = _871 + _874;
  uint16_t _876 = _870 + _875;
  uint16_t _877 = _869 + _876;
  uint16_t _878 = _868 + _877;
  uint16_t _879 = _867 + _878;
  uint16_t _880 = _output_cgra_stencil_2 + _879;
  uint16_t _881 = _866 + _880;
  return _881;
}

//store is: output_cgra.stencil(2, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(2, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(6, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_10(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_17 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_18 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_19 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_20 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_21 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_22 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_23 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_24 = (uint16_t) input_cgra_stencil.extract<112, 127>();

  uint16_t _kernel_cgra_stencil_17 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_18 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_19 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_20 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_21 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_22 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_23 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_24 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();

  uint16_t _output_cgra_stencil_3 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _941 = _kernel_cgra_stencil_17 * _input_cgra_stencil_17;
  uint16_t _942 = _kernel_cgra_stencil_18 * _input_cgra_stencil_18;
  uint16_t _943 = _kernel_cgra_stencil_19 * _input_cgra_stencil_19;
  uint16_t _944 = _kernel_cgra_stencil_20 * _input_cgra_stencil_20;
  uint16_t _945 = _kernel_cgra_stencil_21 * _input_cgra_stencil_21;
  uint16_t _946 = _kernel_cgra_stencil_22 * _input_cgra_stencil_22;
  uint16_t _947 = _kernel_cgra_stencil_23 * _input_cgra_stencil_23;
  uint16_t _948 = _kernel_cgra_stencil_24 * _input_cgra_stencil_24;
  uint16_t _949 = _947 + _948;
  uint16_t _950 = _946 + _949;
  uint16_t _951 = _945 + _950;
  uint16_t _952 = _944 + _951;
  uint16_t _953 = _943 + _952;
  uint16_t _954 = _942 + _953;
  uint16_t _955 = _output_cgra_stencil_3 + _954;
  uint16_t _956 = _941 + _955;
  return _956;
}

//store is: output_cgra.stencil(3, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(3, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(6, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_11(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_25 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_26 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_27 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_28 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_29 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_30 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_31 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_32 = (uint16_t) input_cgra_stencil.extract<112, 127>();

  uint16_t _kernel_cgra_stencil_25 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_26 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_27 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_28 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_29 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_30 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_31 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_32 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();

  uint16_t _output_cgra_stencil_4 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _1016 = _kernel_cgra_stencil_25 * _input_cgra_stencil_25;
  uint16_t _1017 = _kernel_cgra_stencil_26 * _input_cgra_stencil_26;
  uint16_t _1018 = _kernel_cgra_stencil_27 * _input_cgra_stencil_27;
  uint16_t _1019 = _kernel_cgra_stencil_28 * _input_cgra_stencil_28;
  uint16_t _1020 = _kernel_cgra_stencil_29 * _input_cgra_stencil_29;
  uint16_t _1021 = _kernel_cgra_stencil_30 * _input_cgra_stencil_30;
  uint16_t _1022 = _kernel_cgra_stencil_31 * _input_cgra_stencil_31;
  uint16_t _1023 = _kernel_cgra_stencil_32 * _input_cgra_stencil_32;
  uint16_t _1024 = _1022 + _1023;
  uint16_t _1025 = _1021 + _1024;
  uint16_t _1026 = _1020 + _1025;
  uint16_t _1027 = _1019 + _1026;
  uint16_t _1028 = _1018 + _1027;
  uint16_t _1029 = _1017 + _1028;
  uint16_t _1030 = _output_cgra_stencil_4 + _1029;
  uint16_t _1031 = _1016 + _1030;
  return _1031;
}

//store is: output_cgra.stencil(4, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(4, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(6, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_12(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_33 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_34 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_35 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_36 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_37 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_38 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_39 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_40 = (uint16_t) input_cgra_stencil.extract<112, 127>();

  uint16_t _kernel_cgra_stencil_33 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_34 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_35 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_36 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_37 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_38 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_39 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_40 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();

  uint16_t _output_cgra_stencil_5 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _1091 = _kernel_cgra_stencil_33 * _input_cgra_stencil_33;
  uint16_t _1092 = _kernel_cgra_stencil_34 * _input_cgra_stencil_34;
  uint16_t _1093 = _kernel_cgra_stencil_35 * _input_cgra_stencil_35;
  uint16_t _1094 = _kernel_cgra_stencil_36 * _input_cgra_stencil_36;
  uint16_t _1095 = _kernel_cgra_stencil_37 * _input_cgra_stencil_37;
  uint16_t _1096 = _kernel_cgra_stencil_38 * _input_cgra_stencil_38;
  uint16_t _1097 = _kernel_cgra_stencil_39 * _input_cgra_stencil_39;
  uint16_t _1098 = _kernel_cgra_stencil_40 * _input_cgra_stencil_40;
  uint16_t _1099 = _1097 + _1098;
  uint16_t _1100 = _1096 + _1099;
  uint16_t _1101 = _1095 + _1100;
  uint16_t _1102 = _1094 + _1101;
  uint16_t _1103 = _1093 + _1102;
  uint16_t _1104 = _1092 + _1103;
  uint16_t _1105 = _output_cgra_stencil_5 + _1104;
  uint16_t _1106 = _1091 + _1105;
  return _1106;
}

//store is: output_cgra.stencil(5, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(5, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(6, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_13(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_41 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_42 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_43 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_44 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_45 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_46 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_47 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_48 = (uint16_t) input_cgra_stencil.extract<112, 127>();

  uint16_t _kernel_cgra_stencil_41 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_42 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_43 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_44 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_45 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_46 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_47 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_48 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();

  uint16_t _output_cgra_stencil_6 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _1166 = _kernel_cgra_stencil_41 * _input_cgra_stencil_41;
  uint16_t _1167 = _kernel_cgra_stencil_42 * _input_cgra_stencil_42;
  uint16_t _1168 = _kernel_cgra_stencil_43 * _input_cgra_stencil_43;
  uint16_t _1169 = _kernel_cgra_stencil_44 * _input_cgra_stencil_44;
  uint16_t _1170 = _kernel_cgra_stencil_45 * _input_cgra_stencil_45;
  uint16_t _1171 = _kernel_cgra_stencil_46 * _input_cgra_stencil_46;
  uint16_t _1172 = _kernel_cgra_stencil_47 * _input_cgra_stencil_47;
  uint16_t _1173 = _kernel_cgra_stencil_48 * _input_cgra_stencil_48;
  uint16_t _1174 = _1172 + _1173;
  uint16_t _1175 = _1171 + _1174;
  uint16_t _1176 = _1170 + _1175;
  uint16_t _1177 = _1169 + _1176;
  uint16_t _1178 = _1168 + _1177;
  uint16_t _1179 = _1167 + _1178;
  uint16_t _1180 = _output_cgra_stencil_6 + _1179;
  uint16_t _1181 = _1166 + _1180;
  return _1181;
}

//store is: output_cgra.stencil(6, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(6, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(6, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_14(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_49 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_50 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_51 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_52 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_53 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_54 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_55 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_56 = (uint16_t) input_cgra_stencil.extract<112, 127>();

  uint16_t _kernel_cgra_stencil_49 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_50 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_51 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_52 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_53 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_54 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_55 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_56 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();

  uint16_t _output_cgra_stencil_7 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _1241 = _kernel_cgra_stencil_49 * _input_cgra_stencil_49;
  uint16_t _1242 = _kernel_cgra_stencil_50 * _input_cgra_stencil_50;
  uint16_t _1243 = _kernel_cgra_stencil_51 * _input_cgra_stencil_51;
  uint16_t _1244 = _kernel_cgra_stencil_52 * _input_cgra_stencil_52;
  uint16_t _1245 = _kernel_cgra_stencil_53 * _input_cgra_stencil_53;
  uint16_t _1246 = _kernel_cgra_stencil_54 * _input_cgra_stencil_54;
  uint16_t _1247 = _kernel_cgra_stencil_55 * _input_cgra_stencil_55;
  uint16_t _1248 = _kernel_cgra_stencil_56 * _input_cgra_stencil_56;
  uint16_t _1249 = _1247 + _1248;
  uint16_t _1250 = _1246 + _1249;
  uint16_t _1251 = _1245 + _1250;
  uint16_t _1252 = _1244 + _1251;
  uint16_t _1253 = _1243 + _1252;
  uint16_t _1254 = _1242 + _1253;
  uint16_t _1255 = _output_cgra_stencil_7 + _1254;
  uint16_t _1256 = _1241 + _1255;
  return _1256;
}

//store is: output_cgra.stencil(7, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(7, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(6, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_15(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_57 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_58 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_59 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_60 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_61 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_62 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_63 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_64 = (uint16_t) input_cgra_stencil.extract<112, 127>();

  uint16_t _kernel_cgra_stencil_57 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_58 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_59 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_60 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_61 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_62 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_63 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_64 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();

  uint16_t _output_cgra_stencil_8 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _1316 = _kernel_cgra_stencil_57 * _input_cgra_stencil_57;
  uint16_t _1317 = _kernel_cgra_stencil_58 * _input_cgra_stencil_58;
  uint16_t _1318 = _kernel_cgra_stencil_59 * _input_cgra_stencil_59;
  uint16_t _1319 = _kernel_cgra_stencil_60 * _input_cgra_stencil_60;
  uint16_t _1320 = _kernel_cgra_stencil_61 * _input_cgra_stencil_61;
  uint16_t _1321 = _kernel_cgra_stencil_62 * _input_cgra_stencil_62;
  uint16_t _1322 = _kernel_cgra_stencil_63 * _input_cgra_stencil_63;
  uint16_t _1323 = _kernel_cgra_stencil_64 * _input_cgra_stencil_64;
  uint16_t _1324 = _1322 + _1323;
  uint16_t _1325 = _1321 + _1324;
  uint16_t _1326 = _1320 + _1325;
  uint16_t _1327 = _1319 + _1326;
  uint16_t _1328 = _1318 + _1327;
  uint16_t _1329 = _1317 + _1328;
  uint16_t _1330 = _output_cgra_stencil_8 + _1329;
  uint16_t _1331 = _1316 + _1330;
  return _1331;
}

//store is: output_glb.stencil(((output_glb_s0_w_w_glb*8) + output_glb_s0_w_w_cgra), ((output_glb_s0_x_x_glb*28) + output_glb_s0_x_x_cgra), ((output_glb_s0_y_y_glb*28) + output_glb_s0_y_y_cgra)) = output_cgra.stencil(output_glb_s0_w_w_cgra, output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
hw_uint<16> hcompute_output_glb_stencil(hw_uint<16>& output_cgra_stencil) {
  uint16_t _output_cgra_stencil_9 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  return _output_cgra_stencil_9;
}

//store is: hw_output.stencil(hw_output_s0_w, hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil(hw_output_s0_w, hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& output_glb_stencil) {
  uint16_t _output_glb_stencil_1 = (uint16_t) output_glb_stencil.extract<0, 15>();

  return _output_glb_stencil_1;
}

