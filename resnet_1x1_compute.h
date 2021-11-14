#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: input_glb.stencil(input_glb_s0_z, input_glb_s0_x, input_glb_s0_y) = input_host.stencil(input_glb_s0_z, input_glb_s0_x, input_glb_s0_y)
hw_uint<16> hcompute_input_glb_stencil(hw_uint<16>& input_host_stencil) {
  int16_t _input_host_stencil_1 = (int16_t) input_host_stencil.extract<0, 15>();

  return _input_host_stencil_1;
}

//store is: kernel_glb.stencil(kernel_glb_s0_z, kernel_glb_s0_w, 0, 0) = kernel_host.stencil(kernel_glb_s0_z, kernel_glb_s0_w, 0, 0)
hw_uint<16> hcompute_kernel_glb_stencil(hw_uint<16>& kernel_host_stencil) {
  int16_t _kernel_host_stencil_1 = (int16_t) kernel_host_stencil.extract<0, 15>();

  return _kernel_host_stencil_1;
}

//store is: output_cgra.stencil((output_cgra_s0_w_w*8), (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*14))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil() {
  int16_t _663 = (int16_t)(0);
  return _663;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 1), (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*14))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_1() {
  int16_t _673 = (int16_t)(0);
  return _673;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 2), (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*14))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_2() {
  int16_t _684 = (int16_t)(0);
  return _684;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 3), (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*14))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_3() {
  int16_t _695 = (int16_t)(0);
  return _695;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 4), (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*14))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_4() {
  int16_t _706 = (int16_t)(0);
  return _706;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 5), (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*14))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_5() {
  int16_t _717 = (int16_t)(0);
  return _717;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 6), (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*14))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_6() {
  int16_t _728 = (int16_t)(0);
  return _728;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 7), (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*14))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_7() {
  int16_t _739 = (int16_t)(0);
  return _739;
}

//store is: input_cgra.stencil(input_cgra_s0_z_z_cgra, (((output_glb_s0_x_x_glb*14) + input_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + input_cgra_s0_y) - (output_glb_s0_y_y_glb*14))) = input_glb.stencil(((output_cgra_s1_r_z_rz_glb*8) + input_cgra_s0_z_z_cgra), ((output_glb_s0_x_x_glb*14) + input_cgra_s0_x), ((output_glb_s0_y_y_glb*14) + input_cgra_s0_y))
hw_uint<16> hcompute_input_cgra_stencil(hw_uint<16>& input_glb_stencil) {
  int16_t _input_glb_stencil_1 = (int16_t) input_glb_stencil.extract<0, 15>();

  return _input_glb_stencil_1;
}

//store is: kernel_cgra.stencil(kernel_cgra_s0_z_z_cgra, kernel_cgra_s0_w_w_cgra, 0, 0) = kernel_glb.stencil(((output_cgra_s1_r_z_rz_glb*8) + kernel_cgra_s0_z_z_cgra), kernel_cgra_s0_w_w_cgra, 0, 0)
hw_uint<16> hcompute_kernel_cgra_stencil(hw_uint<16>& kernel_glb_stencil) {
  int16_t _kernel_glb_stencil_1 = (int16_t) kernel_glb_stencil.extract<0, 15>();

  return _kernel_glb_stencil_1;
}

//store is: output_cgra.stencil((output_cgra_s1_w_w_cgra*8), (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) = ((kernel_cgra.stencil(0, (output_cgra_s1_w_w_cgra*8), 0, 0)*input_cgra.stencil(0, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + (output_cgra.stencil((output_cgra_s1_w_w_cgra*8), (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) + ((kernel_cgra.stencil(1, (output_cgra_s1_w_w_cgra*8), 0, 0)*input_cgra.stencil(1, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(2, (output_cgra_s1_w_w_cgra*8), 0, 0)*input_cgra.stencil(2, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(3, (output_cgra_s1_w_w_cgra*8), 0, 0)*input_cgra.stencil(3, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(4, (output_cgra_s1_w_w_cgra*8), 0, 0)*input_cgra.stencil(4, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(5, (output_cgra_s1_w_w_cgra*8), 0, 0)*input_cgra.stencil(5, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(7, (output_cgra_s1_w_w_cgra*8), 0, 0)*input_cgra.stencil(7, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + (kernel_cgra.stencil(6, (output_cgra_s1_w_w_cgra*8), 0, 0)*input_cgra.stencil(6, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_8(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_1 = (int16_t) input_cgra_stencil.extract<0, 15>();
  int16_t _input_cgra_stencil_2 = (int16_t) input_cgra_stencil.extract<16, 31>();
  int16_t _input_cgra_stencil_3 = (int16_t) input_cgra_stencil.extract<32, 47>();
  int16_t _input_cgra_stencil_4 = (int16_t) input_cgra_stencil.extract<48, 63>();
  int16_t _input_cgra_stencil_5 = (int16_t) input_cgra_stencil.extract<64, 79>();
  int16_t _input_cgra_stencil_6 = (int16_t) input_cgra_stencil.extract<80, 95>();
  int16_t _input_cgra_stencil_7 = (int16_t) input_cgra_stencil.extract<96, 111>();
  int16_t _input_cgra_stencil_8 = (int16_t) input_cgra_stencil.extract<112, 127>();

  int16_t _kernel_cgra_stencil_1 = (int16_t) kernel_cgra_stencil.extract<0, 15>();
  int16_t _kernel_cgra_stencil_2 = (int16_t) kernel_cgra_stencil.extract<16, 31>();
  int16_t _kernel_cgra_stencil_3 = (int16_t) kernel_cgra_stencil.extract<32, 47>();
  int16_t _kernel_cgra_stencil_4 = (int16_t) kernel_cgra_stencil.extract<48, 63>();
  int16_t _kernel_cgra_stencil_5 = (int16_t) kernel_cgra_stencil.extract<64, 79>();
  int16_t _kernel_cgra_stencil_6 = (int16_t) kernel_cgra_stencil.extract<80, 95>();
  int16_t _kernel_cgra_stencil_7 = (int16_t) kernel_cgra_stencil.extract<96, 111>();
  int16_t _kernel_cgra_stencil_8 = (int16_t) kernel_cgra_stencil.extract<112, 127>();

  int16_t _output_cgra_stencil_1 = (int16_t) output_cgra_stencil.extract<0, 15>();

  int16_t _766 = _kernel_cgra_stencil_1 * _input_cgra_stencil_1;
  int16_t _767 = _kernel_cgra_stencil_2 * _input_cgra_stencil_2;
  int16_t _768 = _kernel_cgra_stencil_3 * _input_cgra_stencil_3;
  int16_t _769 = _kernel_cgra_stencil_4 * _input_cgra_stencil_4;
  int16_t _770 = _kernel_cgra_stencil_5 * _input_cgra_stencil_5;
  int16_t _771 = _kernel_cgra_stencil_6 * _input_cgra_stencil_6;
  int16_t _772 = _kernel_cgra_stencil_7 * _input_cgra_stencil_7;
  int16_t _773 = _kernel_cgra_stencil_8 * _input_cgra_stencil_8;
  int16_t _774 = _772 + _773;
  int16_t _775 = _771 + _774;
  int16_t _776 = _770 + _775;
  int16_t _777 = _769 + _776;
  int16_t _778 = _768 + _777;
  int16_t _779 = _767 + _778;
  int16_t _780 = _output_cgra_stencil_1 + _779;
  int16_t _781 = _766 + _780;
  return _781;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w_cgra*8) + 1), (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) = ((kernel_cgra.stencil(0, ((output_cgra_s1_w_w_cgra*8) + 1), 0, 0)*input_cgra.stencil(0, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + (output_cgra.stencil(((output_cgra_s1_w_w_cgra*8) + 1), (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) + ((kernel_cgra.stencil(1, ((output_cgra_s1_w_w_cgra*8) + 1), 0, 0)*input_cgra.stencil(1, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(2, ((output_cgra_s1_w_w_cgra*8) + 1), 0, 0)*input_cgra.stencil(2, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(3, ((output_cgra_s1_w_w_cgra*8) + 1), 0, 0)*input_cgra.stencil(3, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(4, ((output_cgra_s1_w_w_cgra*8) + 1), 0, 0)*input_cgra.stencil(4, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(5, ((output_cgra_s1_w_w_cgra*8) + 1), 0, 0)*input_cgra.stencil(5, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(7, ((output_cgra_s1_w_w_cgra*8) + 1), 0, 0)*input_cgra.stencil(7, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + (kernel_cgra.stencil(6, ((output_cgra_s1_w_w_cgra*8) + 1), 0, 0)*input_cgra.stencil(6, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_9(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_10 = (int16_t) input_cgra_stencil.extract<0, 15>();
  int16_t _input_cgra_stencil_11 = (int16_t) input_cgra_stencil.extract<16, 31>();
  int16_t _input_cgra_stencil_12 = (int16_t) input_cgra_stencil.extract<32, 47>();
  int16_t _input_cgra_stencil_13 = (int16_t) input_cgra_stencil.extract<48, 63>();
  int16_t _input_cgra_stencil_14 = (int16_t) input_cgra_stencil.extract<64, 79>();
  int16_t _input_cgra_stencil_15 = (int16_t) input_cgra_stencil.extract<80, 95>();
  int16_t _input_cgra_stencil_16 = (int16_t) input_cgra_stencil.extract<96, 111>();
  int16_t _input_cgra_stencil_9 = (int16_t) input_cgra_stencil.extract<112, 127>();

  int16_t _kernel_cgra_stencil_10 = (int16_t) kernel_cgra_stencil.extract<0, 15>();
  int16_t _kernel_cgra_stencil_11 = (int16_t) kernel_cgra_stencil.extract<16, 31>();
  int16_t _kernel_cgra_stencil_12 = (int16_t) kernel_cgra_stencil.extract<32, 47>();
  int16_t _kernel_cgra_stencil_13 = (int16_t) kernel_cgra_stencil.extract<48, 63>();
  int16_t _kernel_cgra_stencil_14 = (int16_t) kernel_cgra_stencil.extract<64, 79>();
  int16_t _kernel_cgra_stencil_15 = (int16_t) kernel_cgra_stencil.extract<80, 95>();
  int16_t _kernel_cgra_stencil_16 = (int16_t) kernel_cgra_stencil.extract<96, 111>();
  int16_t _kernel_cgra_stencil_9 = (int16_t) kernel_cgra_stencil.extract<112, 127>();

  int16_t _output_cgra_stencil_2 = (int16_t) output_cgra_stencil.extract<0, 15>();

  int16_t _838 = _kernel_cgra_stencil_9 * _input_cgra_stencil_9;
  int16_t _839 = _kernel_cgra_stencil_10 * _input_cgra_stencil_10;
  int16_t _840 = _kernel_cgra_stencil_11 * _input_cgra_stencil_11;
  int16_t _841 = _kernel_cgra_stencil_12 * _input_cgra_stencil_12;
  int16_t _842 = _kernel_cgra_stencil_13 * _input_cgra_stencil_13;
  int16_t _843 = _kernel_cgra_stencil_14 * _input_cgra_stencil_14;
  int16_t _844 = _kernel_cgra_stencil_15 * _input_cgra_stencil_15;
  int16_t _845 = _kernel_cgra_stencil_16 * _input_cgra_stencil_16;
  int16_t _846 = _844 + _845;
  int16_t _847 = _843 + _846;
  int16_t _848 = _842 + _847;
  int16_t _849 = _841 + _848;
  int16_t _850 = _840 + _849;
  int16_t _851 = _839 + _850;
  int16_t _852 = _output_cgra_stencil_2 + _851;
  int16_t _853 = _838 + _852;
  return _853;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w_cgra*8) + 2), (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) = ((kernel_cgra.stencil(0, ((output_cgra_s1_w_w_cgra*8) + 2), 0, 0)*input_cgra.stencil(0, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + (output_cgra.stencil(((output_cgra_s1_w_w_cgra*8) + 2), (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) + ((kernel_cgra.stencil(1, ((output_cgra_s1_w_w_cgra*8) + 2), 0, 0)*input_cgra.stencil(1, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(2, ((output_cgra_s1_w_w_cgra*8) + 2), 0, 0)*input_cgra.stencil(2, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(3, ((output_cgra_s1_w_w_cgra*8) + 2), 0, 0)*input_cgra.stencil(3, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(4, ((output_cgra_s1_w_w_cgra*8) + 2), 0, 0)*input_cgra.stencil(4, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(5, ((output_cgra_s1_w_w_cgra*8) + 2), 0, 0)*input_cgra.stencil(5, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(7, ((output_cgra_s1_w_w_cgra*8) + 2), 0, 0)*input_cgra.stencil(7, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + (kernel_cgra.stencil(6, ((output_cgra_s1_w_w_cgra*8) + 2), 0, 0)*input_cgra.stencil(6, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_10(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_17 = (int16_t) input_cgra_stencil.extract<0, 15>();
  int16_t _input_cgra_stencil_18 = (int16_t) input_cgra_stencil.extract<16, 31>();
  int16_t _input_cgra_stencil_19 = (int16_t) input_cgra_stencil.extract<32, 47>();
  int16_t _input_cgra_stencil_20 = (int16_t) input_cgra_stencil.extract<48, 63>();
  int16_t _input_cgra_stencil_21 = (int16_t) input_cgra_stencil.extract<64, 79>();
  int16_t _input_cgra_stencil_22 = (int16_t) input_cgra_stencil.extract<80, 95>();
  int16_t _input_cgra_stencil_23 = (int16_t) input_cgra_stencil.extract<96, 111>();
  int16_t _input_cgra_stencil_24 = (int16_t) input_cgra_stencil.extract<112, 127>();

  int16_t _kernel_cgra_stencil_17 = (int16_t) kernel_cgra_stencil.extract<0, 15>();
  int16_t _kernel_cgra_stencil_18 = (int16_t) kernel_cgra_stencil.extract<16, 31>();
  int16_t _kernel_cgra_stencil_19 = (int16_t) kernel_cgra_stencil.extract<32, 47>();
  int16_t _kernel_cgra_stencil_20 = (int16_t) kernel_cgra_stencil.extract<48, 63>();
  int16_t _kernel_cgra_stencil_21 = (int16_t) kernel_cgra_stencil.extract<64, 79>();
  int16_t _kernel_cgra_stencil_22 = (int16_t) kernel_cgra_stencil.extract<80, 95>();
  int16_t _kernel_cgra_stencil_23 = (int16_t) kernel_cgra_stencil.extract<96, 111>();
  int16_t _kernel_cgra_stencil_24 = (int16_t) kernel_cgra_stencil.extract<112, 127>();

  int16_t _output_cgra_stencil_3 = (int16_t) output_cgra_stencil.extract<0, 15>();

  int16_t _911 = _kernel_cgra_stencil_17 * _input_cgra_stencil_17;
  int16_t _912 = _kernel_cgra_stencil_18 * _input_cgra_stencil_18;
  int16_t _913 = _kernel_cgra_stencil_19 * _input_cgra_stencil_19;
  int16_t _914 = _kernel_cgra_stencil_20 * _input_cgra_stencil_20;
  int16_t _915 = _kernel_cgra_stencil_21 * _input_cgra_stencil_21;
  int16_t _916 = _kernel_cgra_stencil_22 * _input_cgra_stencil_22;
  int16_t _917 = _kernel_cgra_stencil_23 * _input_cgra_stencil_23;
  int16_t _918 = _kernel_cgra_stencil_24 * _input_cgra_stencil_24;
  int16_t _919 = _917 + _918;
  int16_t _920 = _916 + _919;
  int16_t _921 = _915 + _920;
  int16_t _922 = _914 + _921;
  int16_t _923 = _913 + _922;
  int16_t _924 = _912 + _923;
  int16_t _925 = _output_cgra_stencil_3 + _924;
  int16_t _926 = _911 + _925;
  return _926;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w_cgra*8) + 3), (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) = ((kernel_cgra.stencil(0, ((output_cgra_s1_w_w_cgra*8) + 3), 0, 0)*input_cgra.stencil(0, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + (output_cgra.stencil(((output_cgra_s1_w_w_cgra*8) + 3), (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) + ((kernel_cgra.stencil(1, ((output_cgra_s1_w_w_cgra*8) + 3), 0, 0)*input_cgra.stencil(1, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(2, ((output_cgra_s1_w_w_cgra*8) + 3), 0, 0)*input_cgra.stencil(2, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(3, ((output_cgra_s1_w_w_cgra*8) + 3), 0, 0)*input_cgra.stencil(3, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(4, ((output_cgra_s1_w_w_cgra*8) + 3), 0, 0)*input_cgra.stencil(4, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(5, ((output_cgra_s1_w_w_cgra*8) + 3), 0, 0)*input_cgra.stencil(5, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(7, ((output_cgra_s1_w_w_cgra*8) + 3), 0, 0)*input_cgra.stencil(7, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + (kernel_cgra.stencil(6, ((output_cgra_s1_w_w_cgra*8) + 3), 0, 0)*input_cgra.stencil(6, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_11(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_25 = (int16_t) input_cgra_stencil.extract<0, 15>();
  int16_t _input_cgra_stencil_26 = (int16_t) input_cgra_stencil.extract<16, 31>();
  int16_t _input_cgra_stencil_27 = (int16_t) input_cgra_stencil.extract<32, 47>();
  int16_t _input_cgra_stencil_28 = (int16_t) input_cgra_stencil.extract<48, 63>();
  int16_t _input_cgra_stencil_29 = (int16_t) input_cgra_stencil.extract<64, 79>();
  int16_t _input_cgra_stencil_30 = (int16_t) input_cgra_stencil.extract<80, 95>();
  int16_t _input_cgra_stencil_31 = (int16_t) input_cgra_stencil.extract<96, 111>();
  int16_t _input_cgra_stencil_32 = (int16_t) input_cgra_stencil.extract<112, 127>();

  int16_t _kernel_cgra_stencil_25 = (int16_t) kernel_cgra_stencil.extract<0, 15>();
  int16_t _kernel_cgra_stencil_26 = (int16_t) kernel_cgra_stencil.extract<16, 31>();
  int16_t _kernel_cgra_stencil_27 = (int16_t) kernel_cgra_stencil.extract<32, 47>();
  int16_t _kernel_cgra_stencil_28 = (int16_t) kernel_cgra_stencil.extract<48, 63>();
  int16_t _kernel_cgra_stencil_29 = (int16_t) kernel_cgra_stencil.extract<64, 79>();
  int16_t _kernel_cgra_stencil_30 = (int16_t) kernel_cgra_stencil.extract<80, 95>();
  int16_t _kernel_cgra_stencil_31 = (int16_t) kernel_cgra_stencil.extract<96, 111>();
  int16_t _kernel_cgra_stencil_32 = (int16_t) kernel_cgra_stencil.extract<112, 127>();

  int16_t _output_cgra_stencil_4 = (int16_t) output_cgra_stencil.extract<0, 15>();

  int16_t _984 = _kernel_cgra_stencil_25 * _input_cgra_stencil_25;
  int16_t _985 = _kernel_cgra_stencil_26 * _input_cgra_stencil_26;
  int16_t _986 = _kernel_cgra_stencil_27 * _input_cgra_stencil_27;
  int16_t _987 = _kernel_cgra_stencil_28 * _input_cgra_stencil_28;
  int16_t _988 = _kernel_cgra_stencil_29 * _input_cgra_stencil_29;
  int16_t _989 = _kernel_cgra_stencil_30 * _input_cgra_stencil_30;
  int16_t _990 = _kernel_cgra_stencil_31 * _input_cgra_stencil_31;
  int16_t _991 = _kernel_cgra_stencil_32 * _input_cgra_stencil_32;
  int16_t _992 = _990 + _991;
  int16_t _993 = _989 + _992;
  int16_t _994 = _988 + _993;
  int16_t _995 = _987 + _994;
  int16_t _996 = _986 + _995;
  int16_t _997 = _985 + _996;
  int16_t _998 = _output_cgra_stencil_4 + _997;
  int16_t _999 = _984 + _998;
  return _999;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w_cgra*8) + 4), (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) = ((kernel_cgra.stencil(0, ((output_cgra_s1_w_w_cgra*8) + 4), 0, 0)*input_cgra.stencil(0, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + (output_cgra.stencil(((output_cgra_s1_w_w_cgra*8) + 4), (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) + ((kernel_cgra.stencil(1, ((output_cgra_s1_w_w_cgra*8) + 4), 0, 0)*input_cgra.stencil(1, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(2, ((output_cgra_s1_w_w_cgra*8) + 4), 0, 0)*input_cgra.stencil(2, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(3, ((output_cgra_s1_w_w_cgra*8) + 4), 0, 0)*input_cgra.stencil(3, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(4, ((output_cgra_s1_w_w_cgra*8) + 4), 0, 0)*input_cgra.stencil(4, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(5, ((output_cgra_s1_w_w_cgra*8) + 4), 0, 0)*input_cgra.stencil(5, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(7, ((output_cgra_s1_w_w_cgra*8) + 4), 0, 0)*input_cgra.stencil(7, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + (kernel_cgra.stencil(6, ((output_cgra_s1_w_w_cgra*8) + 4), 0, 0)*input_cgra.stencil(6, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_12(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_33 = (int16_t) input_cgra_stencil.extract<0, 15>();
  int16_t _input_cgra_stencil_34 = (int16_t) input_cgra_stencil.extract<16, 31>();
  int16_t _input_cgra_stencil_35 = (int16_t) input_cgra_stencil.extract<32, 47>();
  int16_t _input_cgra_stencil_36 = (int16_t) input_cgra_stencil.extract<48, 63>();
  int16_t _input_cgra_stencil_37 = (int16_t) input_cgra_stencil.extract<64, 79>();
  int16_t _input_cgra_stencil_38 = (int16_t) input_cgra_stencil.extract<80, 95>();
  int16_t _input_cgra_stencil_39 = (int16_t) input_cgra_stencil.extract<96, 111>();
  int16_t _input_cgra_stencil_40 = (int16_t) input_cgra_stencil.extract<112, 127>();

  int16_t _kernel_cgra_stencil_33 = (int16_t) kernel_cgra_stencil.extract<0, 15>();
  int16_t _kernel_cgra_stencil_34 = (int16_t) kernel_cgra_stencil.extract<16, 31>();
  int16_t _kernel_cgra_stencil_35 = (int16_t) kernel_cgra_stencil.extract<32, 47>();
  int16_t _kernel_cgra_stencil_36 = (int16_t) kernel_cgra_stencil.extract<48, 63>();
  int16_t _kernel_cgra_stencil_37 = (int16_t) kernel_cgra_stencil.extract<64, 79>();
  int16_t _kernel_cgra_stencil_38 = (int16_t) kernel_cgra_stencil.extract<80, 95>();
  int16_t _kernel_cgra_stencil_39 = (int16_t) kernel_cgra_stencil.extract<96, 111>();
  int16_t _kernel_cgra_stencil_40 = (int16_t) kernel_cgra_stencil.extract<112, 127>();

  int16_t _output_cgra_stencil_5 = (int16_t) output_cgra_stencil.extract<0, 15>();

  int16_t _1057 = _kernel_cgra_stencil_33 * _input_cgra_stencil_33;
  int16_t _1058 = _kernel_cgra_stencil_34 * _input_cgra_stencil_34;
  int16_t _1059 = _kernel_cgra_stencil_35 * _input_cgra_stencil_35;
  int16_t _1060 = _kernel_cgra_stencil_36 * _input_cgra_stencil_36;
  int16_t _1061 = _kernel_cgra_stencil_37 * _input_cgra_stencil_37;
  int16_t _1062 = _kernel_cgra_stencil_38 * _input_cgra_stencil_38;
  int16_t _1063 = _kernel_cgra_stencil_39 * _input_cgra_stencil_39;
  int16_t _1064 = _kernel_cgra_stencil_40 * _input_cgra_stencil_40;
  int16_t _1065 = _1063 + _1064;
  int16_t _1066 = _1062 + _1065;
  int16_t _1067 = _1061 + _1066;
  int16_t _1068 = _1060 + _1067;
  int16_t _1069 = _1059 + _1068;
  int16_t _1070 = _1058 + _1069;
  int16_t _1071 = _output_cgra_stencil_5 + _1070;
  int16_t _1072 = _1057 + _1071;
  return _1072;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w_cgra*8) + 5), (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) = ((kernel_cgra.stencil(0, ((output_cgra_s1_w_w_cgra*8) + 5), 0, 0)*input_cgra.stencil(0, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + (output_cgra.stencil(((output_cgra_s1_w_w_cgra*8) + 5), (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) + ((kernel_cgra.stencil(1, ((output_cgra_s1_w_w_cgra*8) + 5), 0, 0)*input_cgra.stencil(1, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(2, ((output_cgra_s1_w_w_cgra*8) + 5), 0, 0)*input_cgra.stencil(2, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(3, ((output_cgra_s1_w_w_cgra*8) + 5), 0, 0)*input_cgra.stencil(3, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(4, ((output_cgra_s1_w_w_cgra*8) + 5), 0, 0)*input_cgra.stencil(4, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(5, ((output_cgra_s1_w_w_cgra*8) + 5), 0, 0)*input_cgra.stencil(5, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(7, ((output_cgra_s1_w_w_cgra*8) + 5), 0, 0)*input_cgra.stencil(7, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + (kernel_cgra.stencil(6, ((output_cgra_s1_w_w_cgra*8) + 5), 0, 0)*input_cgra.stencil(6, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_13(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_41 = (int16_t) input_cgra_stencil.extract<0, 15>();
  int16_t _input_cgra_stencil_42 = (int16_t) input_cgra_stencil.extract<16, 31>();
  int16_t _input_cgra_stencil_43 = (int16_t) input_cgra_stencil.extract<32, 47>();
  int16_t _input_cgra_stencil_44 = (int16_t) input_cgra_stencil.extract<48, 63>();
  int16_t _input_cgra_stencil_45 = (int16_t) input_cgra_stencil.extract<64, 79>();
  int16_t _input_cgra_stencil_46 = (int16_t) input_cgra_stencil.extract<80, 95>();
  int16_t _input_cgra_stencil_47 = (int16_t) input_cgra_stencil.extract<96, 111>();
  int16_t _input_cgra_stencil_48 = (int16_t) input_cgra_stencil.extract<112, 127>();

  int16_t _kernel_cgra_stencil_41 = (int16_t) kernel_cgra_stencil.extract<0, 15>();
  int16_t _kernel_cgra_stencil_42 = (int16_t) kernel_cgra_stencil.extract<16, 31>();
  int16_t _kernel_cgra_stencil_43 = (int16_t) kernel_cgra_stencil.extract<32, 47>();
  int16_t _kernel_cgra_stencil_44 = (int16_t) kernel_cgra_stencil.extract<48, 63>();
  int16_t _kernel_cgra_stencil_45 = (int16_t) kernel_cgra_stencil.extract<64, 79>();
  int16_t _kernel_cgra_stencil_46 = (int16_t) kernel_cgra_stencil.extract<80, 95>();
  int16_t _kernel_cgra_stencil_47 = (int16_t) kernel_cgra_stencil.extract<96, 111>();
  int16_t _kernel_cgra_stencil_48 = (int16_t) kernel_cgra_stencil.extract<112, 127>();

  int16_t _output_cgra_stencil_6 = (int16_t) output_cgra_stencil.extract<0, 15>();

  int16_t _1130 = _kernel_cgra_stencil_41 * _input_cgra_stencil_41;
  int16_t _1131 = _kernel_cgra_stencil_42 * _input_cgra_stencil_42;
  int16_t _1132 = _kernel_cgra_stencil_43 * _input_cgra_stencil_43;
  int16_t _1133 = _kernel_cgra_stencil_44 * _input_cgra_stencil_44;
  int16_t _1134 = _kernel_cgra_stencil_45 * _input_cgra_stencil_45;
  int16_t _1135 = _kernel_cgra_stencil_46 * _input_cgra_stencil_46;
  int16_t _1136 = _kernel_cgra_stencil_47 * _input_cgra_stencil_47;
  int16_t _1137 = _kernel_cgra_stencil_48 * _input_cgra_stencil_48;
  int16_t _1138 = _1136 + _1137;
  int16_t _1139 = _1135 + _1138;
  int16_t _1140 = _1134 + _1139;
  int16_t _1141 = _1133 + _1140;
  int16_t _1142 = _1132 + _1141;
  int16_t _1143 = _1131 + _1142;
  int16_t _1144 = _output_cgra_stencil_6 + _1143;
  int16_t _1145 = _1130 + _1144;
  return _1145;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w_cgra*8) + 6), (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) = ((kernel_cgra.stencil(0, ((output_cgra_s1_w_w_cgra*8) + 6), 0, 0)*input_cgra.stencil(0, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + (output_cgra.stencil(((output_cgra_s1_w_w_cgra*8) + 6), (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) + ((kernel_cgra.stencil(1, ((output_cgra_s1_w_w_cgra*8) + 6), 0, 0)*input_cgra.stencil(1, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(2, ((output_cgra_s1_w_w_cgra*8) + 6), 0, 0)*input_cgra.stencil(2, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(3, ((output_cgra_s1_w_w_cgra*8) + 6), 0, 0)*input_cgra.stencil(3, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(4, ((output_cgra_s1_w_w_cgra*8) + 6), 0, 0)*input_cgra.stencil(4, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(5, ((output_cgra_s1_w_w_cgra*8) + 6), 0, 0)*input_cgra.stencil(5, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(7, ((output_cgra_s1_w_w_cgra*8) + 6), 0, 0)*input_cgra.stencil(7, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + (kernel_cgra.stencil(6, ((output_cgra_s1_w_w_cgra*8) + 6), 0, 0)*input_cgra.stencil(6, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_14(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_49 = (int16_t) input_cgra_stencil.extract<0, 15>();
  int16_t _input_cgra_stencil_50 = (int16_t) input_cgra_stencil.extract<16, 31>();
  int16_t _input_cgra_stencil_51 = (int16_t) input_cgra_stencil.extract<32, 47>();
  int16_t _input_cgra_stencil_52 = (int16_t) input_cgra_stencil.extract<48, 63>();
  int16_t _input_cgra_stencil_53 = (int16_t) input_cgra_stencil.extract<64, 79>();
  int16_t _input_cgra_stencil_54 = (int16_t) input_cgra_stencil.extract<80, 95>();
  int16_t _input_cgra_stencil_55 = (int16_t) input_cgra_stencil.extract<96, 111>();
  int16_t _input_cgra_stencil_56 = (int16_t) input_cgra_stencil.extract<112, 127>();

  int16_t _kernel_cgra_stencil_49 = (int16_t) kernel_cgra_stencil.extract<0, 15>();
  int16_t _kernel_cgra_stencil_50 = (int16_t) kernel_cgra_stencil.extract<16, 31>();
  int16_t _kernel_cgra_stencil_51 = (int16_t) kernel_cgra_stencil.extract<32, 47>();
  int16_t _kernel_cgra_stencil_52 = (int16_t) kernel_cgra_stencil.extract<48, 63>();
  int16_t _kernel_cgra_stencil_53 = (int16_t) kernel_cgra_stencil.extract<64, 79>();
  int16_t _kernel_cgra_stencil_54 = (int16_t) kernel_cgra_stencil.extract<80, 95>();
  int16_t _kernel_cgra_stencil_55 = (int16_t) kernel_cgra_stencil.extract<96, 111>();
  int16_t _kernel_cgra_stencil_56 = (int16_t) kernel_cgra_stencil.extract<112, 127>();

  int16_t _output_cgra_stencil_7 = (int16_t) output_cgra_stencil.extract<0, 15>();

  int16_t _1203 = _kernel_cgra_stencil_49 * _input_cgra_stencil_49;
  int16_t _1204 = _kernel_cgra_stencil_50 * _input_cgra_stencil_50;
  int16_t _1205 = _kernel_cgra_stencil_51 * _input_cgra_stencil_51;
  int16_t _1206 = _kernel_cgra_stencil_52 * _input_cgra_stencil_52;
  int16_t _1207 = _kernel_cgra_stencil_53 * _input_cgra_stencil_53;
  int16_t _1208 = _kernel_cgra_stencil_54 * _input_cgra_stencil_54;
  int16_t _1209 = _kernel_cgra_stencil_55 * _input_cgra_stencil_55;
  int16_t _1210 = _kernel_cgra_stencil_56 * _input_cgra_stencil_56;
  int16_t _1211 = _1209 + _1210;
  int16_t _1212 = _1208 + _1211;
  int16_t _1213 = _1207 + _1212;
  int16_t _1214 = _1206 + _1213;
  int16_t _1215 = _1205 + _1214;
  int16_t _1216 = _1204 + _1215;
  int16_t _1217 = _output_cgra_stencil_7 + _1216;
  int16_t _1218 = _1203 + _1217;
  return _1218;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w_cgra*8) + 7), (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) = ((kernel_cgra.stencil(0, ((output_cgra_s1_w_w_cgra*8) + 7), 0, 0)*input_cgra.stencil(0, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + (output_cgra.stencil(((output_cgra_s1_w_w_cgra*8) + 7), (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) + ((kernel_cgra.stencil(1, ((output_cgra_s1_w_w_cgra*8) + 7), 0, 0)*input_cgra.stencil(1, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(2, ((output_cgra_s1_w_w_cgra*8) + 7), 0, 0)*input_cgra.stencil(2, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(3, ((output_cgra_s1_w_w_cgra*8) + 7), 0, 0)*input_cgra.stencil(3, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(4, ((output_cgra_s1_w_w_cgra*8) + 7), 0, 0)*input_cgra.stencil(4, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(5, ((output_cgra_s1_w_w_cgra*8) + 7), 0, 0)*input_cgra.stencil(5, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + ((kernel_cgra.stencil(7, ((output_cgra_s1_w_w_cgra*8) + 7), 0, 0)*input_cgra.stencil(7, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14)))) + (kernel_cgra.stencil(6, ((output_cgra_s1_w_w_cgra*8) + 7), 0, 0)*input_cgra.stencil(6, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_15(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_57 = (int16_t) input_cgra_stencil.extract<0, 15>();
  int16_t _input_cgra_stencil_58 = (int16_t) input_cgra_stencil.extract<16, 31>();
  int16_t _input_cgra_stencil_59 = (int16_t) input_cgra_stencil.extract<32, 47>();
  int16_t _input_cgra_stencil_60 = (int16_t) input_cgra_stencil.extract<48, 63>();
  int16_t _input_cgra_stencil_61 = (int16_t) input_cgra_stencil.extract<64, 79>();
  int16_t _input_cgra_stencil_62 = (int16_t) input_cgra_stencil.extract<80, 95>();
  int16_t _input_cgra_stencil_63 = (int16_t) input_cgra_stencil.extract<96, 111>();
  int16_t _input_cgra_stencil_64 = (int16_t) input_cgra_stencil.extract<112, 127>();

  int16_t _kernel_cgra_stencil_57 = (int16_t) kernel_cgra_stencil.extract<0, 15>();
  int16_t _kernel_cgra_stencil_58 = (int16_t) kernel_cgra_stencil.extract<16, 31>();
  int16_t _kernel_cgra_stencil_59 = (int16_t) kernel_cgra_stencil.extract<32, 47>();
  int16_t _kernel_cgra_stencil_60 = (int16_t) kernel_cgra_stencil.extract<48, 63>();
  int16_t _kernel_cgra_stencil_61 = (int16_t) kernel_cgra_stencil.extract<64, 79>();
  int16_t _kernel_cgra_stencil_62 = (int16_t) kernel_cgra_stencil.extract<80, 95>();
  int16_t _kernel_cgra_stencil_63 = (int16_t) kernel_cgra_stencil.extract<96, 111>();
  int16_t _kernel_cgra_stencil_64 = (int16_t) kernel_cgra_stencil.extract<112, 127>();

  int16_t _output_cgra_stencil_8 = (int16_t) output_cgra_stencil.extract<0, 15>();

  int16_t _1276 = _kernel_cgra_stencil_57 * _input_cgra_stencil_57;
  int16_t _1277 = _kernel_cgra_stencil_58 * _input_cgra_stencil_58;
  int16_t _1278 = _kernel_cgra_stencil_59 * _input_cgra_stencil_59;
  int16_t _1279 = _kernel_cgra_stencil_60 * _input_cgra_stencil_60;
  int16_t _1280 = _kernel_cgra_stencil_61 * _input_cgra_stencil_61;
  int16_t _1281 = _kernel_cgra_stencil_62 * _input_cgra_stencil_62;
  int16_t _1282 = _kernel_cgra_stencil_63 * _input_cgra_stencil_63;
  int16_t _1283 = _kernel_cgra_stencil_64 * _input_cgra_stencil_64;
  int16_t _1284 = _1282 + _1283;
  int16_t _1285 = _1281 + _1284;
  int16_t _1286 = _1280 + _1285;
  int16_t _1287 = _1279 + _1286;
  int16_t _1288 = _1278 + _1287;
  int16_t _1289 = _1277 + _1288;
  int16_t _1290 = _output_cgra_stencil_8 + _1289;
  int16_t _1291 = _1276 + _1290;
  return _1291;
}

//store is: output_glb.stencil(((output_glb_s0_w_w_cgra_w_cgra*8) + output_glb_s0_w_w_cgra_w_unroll), ((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra), ((output_glb_s0_y_y_glb*14) + output_glb_s0_y_y_cgra)) = output_cgra.stencil(((output_glb_s0_w_w_cgra_w_cgra*8) + output_glb_s0_w_w_cgra_w_unroll), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
hw_uint<16> hcompute_output_glb_stencil(hw_uint<16>& output_cgra_stencil) {
  int16_t _output_cgra_stencil_9 = (int16_t) output_cgra_stencil.extract<0, 15>();

  return _output_cgra_stencil_9;
}

//store is: hw_output.stencil(hw_output_s0_w, hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil(hw_output_s0_w, hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& output_glb_stencil) {
  int16_t _output_glb_stencil_1 = (int16_t) output_glb_stencil.extract<0, 15>();

  return _output_glb_stencil_1;
}

