#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: input_glb.stencil(input_glb_s0_z, input_glb_s0_x, input_glb_s0_y) = input_host.stencil(input_glb_s0_z, input_glb_s0_x, input_glb_s0_y)
hw_uint<16> hcompute_input_glb_stencil(hw_uint<16>& input_host_stencil) {
  uint16_t _input_host_stencil_1 = (uint16_t) input_host_stencil.extract<0, 15>();

  return _input_host_stencil_1;
}

//store is: kernel_glb.stencil(kernel_glb_s0_z, kernel_glb_s0_w, kernel_glb_s0_x, kernel_glb_s0_y) = kernel_host.stencil(kernel_glb_s0_z, kernel_glb_s0_w, kernel_glb_s0_x, kernel_glb_s0_y)
hw_uint<16> hcompute_kernel_glb_stencil(hw_uint<16>& kernel_host_stencil) {
  uint16_t _kernel_host_stencil_1 = (uint16_t) kernel_host_stencil.extract<0, 15>();

  return _kernel_host_stencil_1;
}

//store is: output_cgra.stencil(output_cgra_s0_w_w_cgra, (((output_glb_s0_x_x_glb*28) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*28))) = (uint16)0
hw_uint<16> hcompute_output_cgra_stencil() {
  uint16_t _675 = (uint16_t)(0);
  return _675;
}

//store is: input_cgra.stencil(input_cgra_s0_z_z_cgra, (((output_glb_s0_x_x_glb*28) + input_cgra_s0_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + input_cgra_s0_y) - (output_glb_s0_y_y_glb*28))) = input_glb.stencil(input_cgra_s0_z_z_cgra, ((output_glb_s0_x_x_glb*28) + input_cgra_s0_x), ((output_glb_s0_y_y_glb*28) + input_cgra_s0_y))
hw_uint<16> hcompute_input_cgra_stencil(hw_uint<16>& input_glb_stencil) {
  uint16_t _input_glb_stencil_1 = (uint16_t) input_glb_stencil.extract<0, 15>();

  return _input_glb_stencil_1;
}

//store is: kernel_cgra.stencil(kernel_cgra_s0_z_z_cgra, kernel_cgra_s0_w_w_cgra, kernel_cgra_s0_x, kernel_cgra_s0_y) = kernel_glb.stencil(kernel_cgra_s0_z_z_cgra, ((output_glb_s0_w_w_glb*16) + kernel_cgra_s0_w_w_cgra), kernel_cgra_s0_x, kernel_cgra_s0_y)
hw_uint<16> hcompute_kernel_cgra_stencil(hw_uint<16>& kernel_glb_stencil) {
  uint16_t _kernel_glb_stencil_1 = (uint16_t) kernel_glb_stencil.extract<0, 15>();

  return _kernel_glb_stencil_1;
}

//store is: output_cgra.stencil(0, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(0, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(6, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(8, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(8, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(9, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(9, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(10, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(10, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(11, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(11, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(12, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(12, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(13, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(13, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(15, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(15, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(14, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(14, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_1(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_1 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_10 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_11 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_12 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_13 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_14 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_15 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_16 = (uint16_t) input_cgra_stencil.extract<112, 127>();
  uint16_t _input_cgra_stencil_2 = (uint16_t) input_cgra_stencil.extract<128, 143>();
  uint16_t _input_cgra_stencil_3 = (uint16_t) input_cgra_stencil.extract<144, 159>();
  uint16_t _input_cgra_stencil_4 = (uint16_t) input_cgra_stencil.extract<160, 175>();
  uint16_t _input_cgra_stencil_5 = (uint16_t) input_cgra_stencil.extract<176, 191>();
  uint16_t _input_cgra_stencil_6 = (uint16_t) input_cgra_stencil.extract<192, 207>();
  uint16_t _input_cgra_stencil_7 = (uint16_t) input_cgra_stencil.extract<208, 223>();
  uint16_t _input_cgra_stencil_8 = (uint16_t) input_cgra_stencil.extract<224, 239>();
  uint16_t _input_cgra_stencil_9 = (uint16_t) input_cgra_stencil.extract<240, 255>();

  uint16_t _kernel_cgra_stencil_1 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_10 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_11 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_12 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_13 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_14 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_15 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_16 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();
  uint16_t _kernel_cgra_stencil_2 = (uint16_t) kernel_cgra_stencil.extract<128, 143>();
  uint16_t _kernel_cgra_stencil_3 = (uint16_t) kernel_cgra_stencil.extract<144, 159>();
  uint16_t _kernel_cgra_stencil_4 = (uint16_t) kernel_cgra_stencil.extract<160, 175>();
  uint16_t _kernel_cgra_stencil_5 = (uint16_t) kernel_cgra_stencil.extract<176, 191>();
  uint16_t _kernel_cgra_stencil_6 = (uint16_t) kernel_cgra_stencil.extract<192, 207>();
  uint16_t _kernel_cgra_stencil_7 = (uint16_t) kernel_cgra_stencil.extract<208, 223>();
  uint16_t _kernel_cgra_stencil_8 = (uint16_t) kernel_cgra_stencil.extract<224, 239>();
  uint16_t _kernel_cgra_stencil_9 = (uint16_t) kernel_cgra_stencil.extract<240, 255>();

  uint16_t _output_cgra_stencil_1 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _698 = _kernel_cgra_stencil_1 * _input_cgra_stencil_1;
  uint16_t _699 = _kernel_cgra_stencil_2 * _input_cgra_stencil_2;
  uint16_t _700 = _kernel_cgra_stencil_3 * _input_cgra_stencil_3;
  uint16_t _701 = _kernel_cgra_stencil_4 * _input_cgra_stencil_4;
  uint16_t _702 = _kernel_cgra_stencil_5 * _input_cgra_stencil_5;
  uint16_t _703 = _kernel_cgra_stencil_6 * _input_cgra_stencil_6;
  uint16_t _704 = _kernel_cgra_stencil_7 * _input_cgra_stencil_7;
  uint16_t _705 = _kernel_cgra_stencil_8 * _input_cgra_stencil_8;
  uint16_t _706 = _kernel_cgra_stencil_9 * _input_cgra_stencil_9;
  uint16_t _707 = _kernel_cgra_stencil_10 * _input_cgra_stencil_10;
  uint16_t _708 = _kernel_cgra_stencil_11 * _input_cgra_stencil_11;
  uint16_t _709 = _kernel_cgra_stencil_12 * _input_cgra_stencil_12;
  uint16_t _710 = _kernel_cgra_stencil_13 * _input_cgra_stencil_13;
  uint16_t _711 = _kernel_cgra_stencil_14 * _input_cgra_stencil_14;
  uint16_t _712 = _kernel_cgra_stencil_15 * _input_cgra_stencil_15;
  uint16_t _713 = _kernel_cgra_stencil_16 * _input_cgra_stencil_16;
  uint16_t _714 = _712 + _713;
  uint16_t _715 = _711 + _714;
  uint16_t _716 = _710 + _715;
  uint16_t _717 = _709 + _716;
  uint16_t _718 = _708 + _717;
  uint16_t _719 = _707 + _718;
  uint16_t _720 = _706 + _719;
  uint16_t _721 = _705 + _720;
  uint16_t _722 = _704 + _721;
  uint16_t _723 = _703 + _722;
  uint16_t _724 = _702 + _723;
  uint16_t _725 = _701 + _724;
  uint16_t _726 = _700 + _725;
  uint16_t _727 = _699 + _726;
  uint16_t _728 = _output_cgra_stencil_1 + _727;
  uint16_t _729 = _698 + _728;
  return _729;
}

//store is: output_cgra.stencil(1, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(1, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(6, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(8, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(8, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(9, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(9, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(10, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(10, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(11, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(11, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(12, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(12, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(13, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(13, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(15, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(15, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(14, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(14, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_2(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_17 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_18 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_19 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_20 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_21 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_22 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_23 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_24 = (uint16_t) input_cgra_stencil.extract<112, 127>();
  uint16_t _input_cgra_stencil_25 = (uint16_t) input_cgra_stencil.extract<128, 143>();
  uint16_t _input_cgra_stencil_26 = (uint16_t) input_cgra_stencil.extract<144, 159>();
  uint16_t _input_cgra_stencil_27 = (uint16_t) input_cgra_stencil.extract<160, 175>();
  uint16_t _input_cgra_stencil_28 = (uint16_t) input_cgra_stencil.extract<176, 191>();
  uint16_t _input_cgra_stencil_29 = (uint16_t) input_cgra_stencil.extract<192, 207>();
  uint16_t _input_cgra_stencil_30 = (uint16_t) input_cgra_stencil.extract<208, 223>();
  uint16_t _input_cgra_stencil_31 = (uint16_t) input_cgra_stencil.extract<224, 239>();
  uint16_t _input_cgra_stencil_32 = (uint16_t) input_cgra_stencil.extract<240, 255>();

  uint16_t _kernel_cgra_stencil_17 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_18 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_19 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_20 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_21 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_22 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_23 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_24 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();
  uint16_t _kernel_cgra_stencil_25 = (uint16_t) kernel_cgra_stencil.extract<128, 143>();
  uint16_t _kernel_cgra_stencil_26 = (uint16_t) kernel_cgra_stencil.extract<144, 159>();
  uint16_t _kernel_cgra_stencil_27 = (uint16_t) kernel_cgra_stencil.extract<160, 175>();
  uint16_t _kernel_cgra_stencil_28 = (uint16_t) kernel_cgra_stencil.extract<176, 191>();
  uint16_t _kernel_cgra_stencil_29 = (uint16_t) kernel_cgra_stencil.extract<192, 207>();
  uint16_t _kernel_cgra_stencil_30 = (uint16_t) kernel_cgra_stencil.extract<208, 223>();
  uint16_t _kernel_cgra_stencil_31 = (uint16_t) kernel_cgra_stencil.extract<224, 239>();
  uint16_t _kernel_cgra_stencil_32 = (uint16_t) kernel_cgra_stencil.extract<240, 255>();

  uint16_t _output_cgra_stencil_2 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _837 = _kernel_cgra_stencil_17 * _input_cgra_stencil_17;
  uint16_t _838 = _kernel_cgra_stencil_18 * _input_cgra_stencil_18;
  uint16_t _839 = _kernel_cgra_stencil_19 * _input_cgra_stencil_19;
  uint16_t _840 = _kernel_cgra_stencil_20 * _input_cgra_stencil_20;
  uint16_t _841 = _kernel_cgra_stencil_21 * _input_cgra_stencil_21;
  uint16_t _842 = _kernel_cgra_stencil_22 * _input_cgra_stencil_22;
  uint16_t _843 = _kernel_cgra_stencil_23 * _input_cgra_stencil_23;
  uint16_t _844 = _kernel_cgra_stencil_24 * _input_cgra_stencil_24;
  uint16_t _845 = _kernel_cgra_stencil_25 * _input_cgra_stencil_25;
  uint16_t _846 = _kernel_cgra_stencil_26 * _input_cgra_stencil_26;
  uint16_t _847 = _kernel_cgra_stencil_27 * _input_cgra_stencil_27;
  uint16_t _848 = _kernel_cgra_stencil_28 * _input_cgra_stencil_28;
  uint16_t _849 = _kernel_cgra_stencil_29 * _input_cgra_stencil_29;
  uint16_t _850 = _kernel_cgra_stencil_30 * _input_cgra_stencil_30;
  uint16_t _851 = _kernel_cgra_stencil_31 * _input_cgra_stencil_31;
  uint16_t _852 = _kernel_cgra_stencil_32 * _input_cgra_stencil_32;
  uint16_t _853 = _851 + _852;
  uint16_t _854 = _850 + _853;
  uint16_t _855 = _849 + _854;
  uint16_t _856 = _848 + _855;
  uint16_t _857 = _847 + _856;
  uint16_t _858 = _846 + _857;
  uint16_t _859 = _845 + _858;
  uint16_t _860 = _844 + _859;
  uint16_t _861 = _843 + _860;
  uint16_t _862 = _842 + _861;
  uint16_t _863 = _841 + _862;
  uint16_t _864 = _840 + _863;
  uint16_t _865 = _839 + _864;
  uint16_t _866 = _838 + _865;
  uint16_t _867 = _output_cgra_stencil_2 + _866;
  uint16_t _868 = _837 + _867;
  return _868;
}

//store is: output_cgra.stencil(2, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(2, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(6, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(8, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(8, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(9, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(9, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(10, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(10, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(11, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(11, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(12, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(12, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(13, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(13, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(15, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(15, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(14, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(14, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_3(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_33 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_34 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_35 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_36 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_37 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_38 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_39 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_40 = (uint16_t) input_cgra_stencil.extract<112, 127>();
  uint16_t _input_cgra_stencil_41 = (uint16_t) input_cgra_stencil.extract<128, 143>();
  uint16_t _input_cgra_stencil_42 = (uint16_t) input_cgra_stencil.extract<144, 159>();
  uint16_t _input_cgra_stencil_43 = (uint16_t) input_cgra_stencil.extract<160, 175>();
  uint16_t _input_cgra_stencil_44 = (uint16_t) input_cgra_stencil.extract<176, 191>();
  uint16_t _input_cgra_stencil_45 = (uint16_t) input_cgra_stencil.extract<192, 207>();
  uint16_t _input_cgra_stencil_46 = (uint16_t) input_cgra_stencil.extract<208, 223>();
  uint16_t _input_cgra_stencil_47 = (uint16_t) input_cgra_stencil.extract<224, 239>();
  uint16_t _input_cgra_stencil_48 = (uint16_t) input_cgra_stencil.extract<240, 255>();

  uint16_t _kernel_cgra_stencil_33 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_34 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_35 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_36 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_37 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_38 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_39 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_40 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();
  uint16_t _kernel_cgra_stencil_41 = (uint16_t) kernel_cgra_stencil.extract<128, 143>();
  uint16_t _kernel_cgra_stencil_42 = (uint16_t) kernel_cgra_stencil.extract<144, 159>();
  uint16_t _kernel_cgra_stencil_43 = (uint16_t) kernel_cgra_stencil.extract<160, 175>();
  uint16_t _kernel_cgra_stencil_44 = (uint16_t) kernel_cgra_stencil.extract<176, 191>();
  uint16_t _kernel_cgra_stencil_45 = (uint16_t) kernel_cgra_stencil.extract<192, 207>();
  uint16_t _kernel_cgra_stencil_46 = (uint16_t) kernel_cgra_stencil.extract<208, 223>();
  uint16_t _kernel_cgra_stencil_47 = (uint16_t) kernel_cgra_stencil.extract<224, 239>();
  uint16_t _kernel_cgra_stencil_48 = (uint16_t) kernel_cgra_stencil.extract<240, 255>();

  uint16_t _output_cgra_stencil_3 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _976 = _kernel_cgra_stencil_33 * _input_cgra_stencil_33;
  uint16_t _977 = _kernel_cgra_stencil_34 * _input_cgra_stencil_34;
  uint16_t _978 = _kernel_cgra_stencil_35 * _input_cgra_stencil_35;
  uint16_t _979 = _kernel_cgra_stencil_36 * _input_cgra_stencil_36;
  uint16_t _980 = _kernel_cgra_stencil_37 * _input_cgra_stencil_37;
  uint16_t _981 = _kernel_cgra_stencil_38 * _input_cgra_stencil_38;
  uint16_t _982 = _kernel_cgra_stencil_39 * _input_cgra_stencil_39;
  uint16_t _983 = _kernel_cgra_stencil_40 * _input_cgra_stencil_40;
  uint16_t _984 = _kernel_cgra_stencil_41 * _input_cgra_stencil_41;
  uint16_t _985 = _kernel_cgra_stencil_42 * _input_cgra_stencil_42;
  uint16_t _986 = _kernel_cgra_stencil_43 * _input_cgra_stencil_43;
  uint16_t _987 = _kernel_cgra_stencil_44 * _input_cgra_stencil_44;
  uint16_t _988 = _kernel_cgra_stencil_45 * _input_cgra_stencil_45;
  uint16_t _989 = _kernel_cgra_stencil_46 * _input_cgra_stencil_46;
  uint16_t _990 = _kernel_cgra_stencil_47 * _input_cgra_stencil_47;
  uint16_t _991 = _kernel_cgra_stencil_48 * _input_cgra_stencil_48;
  uint16_t _992 = _990 + _991;
  uint16_t _993 = _989 + _992;
  uint16_t _994 = _988 + _993;
  uint16_t _995 = _987 + _994;
  uint16_t _996 = _986 + _995;
  uint16_t _997 = _985 + _996;
  uint16_t _998 = _984 + _997;
  uint16_t _999 = _983 + _998;
  uint16_t _1000 = _982 + _999;
  uint16_t _1001 = _981 + _1000;
  uint16_t _1002 = _980 + _1001;
  uint16_t _1003 = _979 + _1002;
  uint16_t _1004 = _978 + _1003;
  uint16_t _1005 = _977 + _1004;
  uint16_t _1006 = _output_cgra_stencil_3 + _1005;
  uint16_t _1007 = _976 + _1006;
  return _1007;
}

//store is: output_cgra.stencil(3, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(3, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(6, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(8, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(8, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(9, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(9, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(10, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(10, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(11, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(11, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(12, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(12, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(13, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(13, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(15, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(15, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(14, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(14, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_4(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_49 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_50 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_51 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_52 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_53 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_54 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_55 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_56 = (uint16_t) input_cgra_stencil.extract<112, 127>();
  uint16_t _input_cgra_stencil_57 = (uint16_t) input_cgra_stencil.extract<128, 143>();
  uint16_t _input_cgra_stencil_58 = (uint16_t) input_cgra_stencil.extract<144, 159>();
  uint16_t _input_cgra_stencil_59 = (uint16_t) input_cgra_stencil.extract<160, 175>();
  uint16_t _input_cgra_stencil_60 = (uint16_t) input_cgra_stencil.extract<176, 191>();
  uint16_t _input_cgra_stencil_61 = (uint16_t) input_cgra_stencil.extract<192, 207>();
  uint16_t _input_cgra_stencil_62 = (uint16_t) input_cgra_stencil.extract<208, 223>();
  uint16_t _input_cgra_stencil_63 = (uint16_t) input_cgra_stencil.extract<224, 239>();
  uint16_t _input_cgra_stencil_64 = (uint16_t) input_cgra_stencil.extract<240, 255>();

  uint16_t _kernel_cgra_stencil_49 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_50 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_51 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_52 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_53 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_54 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_55 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_56 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();
  uint16_t _kernel_cgra_stencil_57 = (uint16_t) kernel_cgra_stencil.extract<128, 143>();
  uint16_t _kernel_cgra_stencil_58 = (uint16_t) kernel_cgra_stencil.extract<144, 159>();
  uint16_t _kernel_cgra_stencil_59 = (uint16_t) kernel_cgra_stencil.extract<160, 175>();
  uint16_t _kernel_cgra_stencil_60 = (uint16_t) kernel_cgra_stencil.extract<176, 191>();
  uint16_t _kernel_cgra_stencil_61 = (uint16_t) kernel_cgra_stencil.extract<192, 207>();
  uint16_t _kernel_cgra_stencil_62 = (uint16_t) kernel_cgra_stencil.extract<208, 223>();
  uint16_t _kernel_cgra_stencil_63 = (uint16_t) kernel_cgra_stencil.extract<224, 239>();
  uint16_t _kernel_cgra_stencil_64 = (uint16_t) kernel_cgra_stencil.extract<240, 255>();

  uint16_t _output_cgra_stencil_4 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _1115 = _kernel_cgra_stencil_49 * _input_cgra_stencil_49;
  uint16_t _1116 = _kernel_cgra_stencil_50 * _input_cgra_stencil_50;
  uint16_t _1117 = _kernel_cgra_stencil_51 * _input_cgra_stencil_51;
  uint16_t _1118 = _kernel_cgra_stencil_52 * _input_cgra_stencil_52;
  uint16_t _1119 = _kernel_cgra_stencil_53 * _input_cgra_stencil_53;
  uint16_t _1120 = _kernel_cgra_stencil_54 * _input_cgra_stencil_54;
  uint16_t _1121 = _kernel_cgra_stencil_55 * _input_cgra_stencil_55;
  uint16_t _1122 = _kernel_cgra_stencil_56 * _input_cgra_stencil_56;
  uint16_t _1123 = _kernel_cgra_stencil_57 * _input_cgra_stencil_57;
  uint16_t _1124 = _kernel_cgra_stencil_58 * _input_cgra_stencil_58;
  uint16_t _1125 = _kernel_cgra_stencil_59 * _input_cgra_stencil_59;
  uint16_t _1126 = _kernel_cgra_stencil_60 * _input_cgra_stencil_60;
  uint16_t _1127 = _kernel_cgra_stencil_61 * _input_cgra_stencil_61;
  uint16_t _1128 = _kernel_cgra_stencil_62 * _input_cgra_stencil_62;
  uint16_t _1129 = _kernel_cgra_stencil_63 * _input_cgra_stencil_63;
  uint16_t _1130 = _kernel_cgra_stencil_64 * _input_cgra_stencil_64;
  uint16_t _1131 = _1129 + _1130;
  uint16_t _1132 = _1128 + _1131;
  uint16_t _1133 = _1127 + _1132;
  uint16_t _1134 = _1126 + _1133;
  uint16_t _1135 = _1125 + _1134;
  uint16_t _1136 = _1124 + _1135;
  uint16_t _1137 = _1123 + _1136;
  uint16_t _1138 = _1122 + _1137;
  uint16_t _1139 = _1121 + _1138;
  uint16_t _1140 = _1120 + _1139;
  uint16_t _1141 = _1119 + _1140;
  uint16_t _1142 = _1118 + _1141;
  uint16_t _1143 = _1117 + _1142;
  uint16_t _1144 = _1116 + _1143;
  uint16_t _1145 = _output_cgra_stencil_4 + _1144;
  uint16_t _1146 = _1115 + _1145;
  return _1146;
}

//store is: output_cgra.stencil(4, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(4, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(6, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(8, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(8, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(9, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(9, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(10, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(10, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(11, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(11, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(12, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(12, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(13, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(13, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(15, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(15, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(14, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(14, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_5(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_65 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_66 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_67 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_68 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_69 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_70 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_71 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_72 = (uint16_t) input_cgra_stencil.extract<112, 127>();
  uint16_t _input_cgra_stencil_73 = (uint16_t) input_cgra_stencil.extract<128, 143>();
  uint16_t _input_cgra_stencil_74 = (uint16_t) input_cgra_stencil.extract<144, 159>();
  uint16_t _input_cgra_stencil_75 = (uint16_t) input_cgra_stencil.extract<160, 175>();
  uint16_t _input_cgra_stencil_76 = (uint16_t) input_cgra_stencil.extract<176, 191>();
  uint16_t _input_cgra_stencil_77 = (uint16_t) input_cgra_stencil.extract<192, 207>();
  uint16_t _input_cgra_stencil_78 = (uint16_t) input_cgra_stencil.extract<208, 223>();
  uint16_t _input_cgra_stencil_79 = (uint16_t) input_cgra_stencil.extract<224, 239>();
  uint16_t _input_cgra_stencil_80 = (uint16_t) input_cgra_stencil.extract<240, 255>();

  uint16_t _kernel_cgra_stencil_65 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_66 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_67 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_68 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_69 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_70 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_71 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_72 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();
  uint16_t _kernel_cgra_stencil_73 = (uint16_t) kernel_cgra_stencil.extract<128, 143>();
  uint16_t _kernel_cgra_stencil_74 = (uint16_t) kernel_cgra_stencil.extract<144, 159>();
  uint16_t _kernel_cgra_stencil_75 = (uint16_t) kernel_cgra_stencil.extract<160, 175>();
  uint16_t _kernel_cgra_stencil_76 = (uint16_t) kernel_cgra_stencil.extract<176, 191>();
  uint16_t _kernel_cgra_stencil_77 = (uint16_t) kernel_cgra_stencil.extract<192, 207>();
  uint16_t _kernel_cgra_stencil_78 = (uint16_t) kernel_cgra_stencil.extract<208, 223>();
  uint16_t _kernel_cgra_stencil_79 = (uint16_t) kernel_cgra_stencil.extract<224, 239>();
  uint16_t _kernel_cgra_stencil_80 = (uint16_t) kernel_cgra_stencil.extract<240, 255>();

  uint16_t _output_cgra_stencil_5 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _1254 = _kernel_cgra_stencil_65 * _input_cgra_stencil_65;
  uint16_t _1255 = _kernel_cgra_stencil_66 * _input_cgra_stencil_66;
  uint16_t _1256 = _kernel_cgra_stencil_67 * _input_cgra_stencil_67;
  uint16_t _1257 = _kernel_cgra_stencil_68 * _input_cgra_stencil_68;
  uint16_t _1258 = _kernel_cgra_stencil_69 * _input_cgra_stencil_69;
  uint16_t _1259 = _kernel_cgra_stencil_70 * _input_cgra_stencil_70;
  uint16_t _1260 = _kernel_cgra_stencil_71 * _input_cgra_stencil_71;
  uint16_t _1261 = _kernel_cgra_stencil_72 * _input_cgra_stencil_72;
  uint16_t _1262 = _kernel_cgra_stencil_73 * _input_cgra_stencil_73;
  uint16_t _1263 = _kernel_cgra_stencil_74 * _input_cgra_stencil_74;
  uint16_t _1264 = _kernel_cgra_stencil_75 * _input_cgra_stencil_75;
  uint16_t _1265 = _kernel_cgra_stencil_76 * _input_cgra_stencil_76;
  uint16_t _1266 = _kernel_cgra_stencil_77 * _input_cgra_stencil_77;
  uint16_t _1267 = _kernel_cgra_stencil_78 * _input_cgra_stencil_78;
  uint16_t _1268 = _kernel_cgra_stencil_79 * _input_cgra_stencil_79;
  uint16_t _1269 = _kernel_cgra_stencil_80 * _input_cgra_stencil_80;
  uint16_t _1270 = _1268 + _1269;
  uint16_t _1271 = _1267 + _1270;
  uint16_t _1272 = _1266 + _1271;
  uint16_t _1273 = _1265 + _1272;
  uint16_t _1274 = _1264 + _1273;
  uint16_t _1275 = _1263 + _1274;
  uint16_t _1276 = _1262 + _1275;
  uint16_t _1277 = _1261 + _1276;
  uint16_t _1278 = _1260 + _1277;
  uint16_t _1279 = _1259 + _1278;
  uint16_t _1280 = _1258 + _1279;
  uint16_t _1281 = _1257 + _1280;
  uint16_t _1282 = _1256 + _1281;
  uint16_t _1283 = _1255 + _1282;
  uint16_t _1284 = _output_cgra_stencil_5 + _1283;
  uint16_t _1285 = _1254 + _1284;
  return _1285;
}

//store is: output_cgra.stencil(5, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(5, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(6, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(8, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(8, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(9, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(9, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(10, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(10, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(11, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(11, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(12, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(12, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(13, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(13, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(15, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(15, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(14, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(14, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_6(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_81 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_82 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_83 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_84 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_85 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_86 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_87 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_88 = (uint16_t) input_cgra_stencil.extract<112, 127>();
  uint16_t _input_cgra_stencil_89 = (uint16_t) input_cgra_stencil.extract<128, 143>();
  uint16_t _input_cgra_stencil_90 = (uint16_t) input_cgra_stencil.extract<144, 159>();
  uint16_t _input_cgra_stencil_91 = (uint16_t) input_cgra_stencil.extract<160, 175>();
  uint16_t _input_cgra_stencil_92 = (uint16_t) input_cgra_stencil.extract<176, 191>();
  uint16_t _input_cgra_stencil_93 = (uint16_t) input_cgra_stencil.extract<192, 207>();
  uint16_t _input_cgra_stencil_94 = (uint16_t) input_cgra_stencil.extract<208, 223>();
  uint16_t _input_cgra_stencil_95 = (uint16_t) input_cgra_stencil.extract<224, 239>();
  uint16_t _input_cgra_stencil_96 = (uint16_t) input_cgra_stencil.extract<240, 255>();

  uint16_t _kernel_cgra_stencil_81 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_82 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_83 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_84 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_85 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_86 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_87 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_88 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();
  uint16_t _kernel_cgra_stencil_89 = (uint16_t) kernel_cgra_stencil.extract<128, 143>();
  uint16_t _kernel_cgra_stencil_90 = (uint16_t) kernel_cgra_stencil.extract<144, 159>();
  uint16_t _kernel_cgra_stencil_91 = (uint16_t) kernel_cgra_stencil.extract<160, 175>();
  uint16_t _kernel_cgra_stencil_92 = (uint16_t) kernel_cgra_stencil.extract<176, 191>();
  uint16_t _kernel_cgra_stencil_93 = (uint16_t) kernel_cgra_stencil.extract<192, 207>();
  uint16_t _kernel_cgra_stencil_94 = (uint16_t) kernel_cgra_stencil.extract<208, 223>();
  uint16_t _kernel_cgra_stencil_95 = (uint16_t) kernel_cgra_stencil.extract<224, 239>();
  uint16_t _kernel_cgra_stencil_96 = (uint16_t) kernel_cgra_stencil.extract<240, 255>();

  uint16_t _output_cgra_stencil_6 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _1393 = _kernel_cgra_stencil_81 * _input_cgra_stencil_81;
  uint16_t _1394 = _kernel_cgra_stencil_82 * _input_cgra_stencil_82;
  uint16_t _1395 = _kernel_cgra_stencil_83 * _input_cgra_stencil_83;
  uint16_t _1396 = _kernel_cgra_stencil_84 * _input_cgra_stencil_84;
  uint16_t _1397 = _kernel_cgra_stencil_85 * _input_cgra_stencil_85;
  uint16_t _1398 = _kernel_cgra_stencil_86 * _input_cgra_stencil_86;
  uint16_t _1399 = _kernel_cgra_stencil_87 * _input_cgra_stencil_87;
  uint16_t _1400 = _kernel_cgra_stencil_88 * _input_cgra_stencil_88;
  uint16_t _1401 = _kernel_cgra_stencil_89 * _input_cgra_stencil_89;
  uint16_t _1402 = _kernel_cgra_stencil_90 * _input_cgra_stencil_90;
  uint16_t _1403 = _kernel_cgra_stencil_91 * _input_cgra_stencil_91;
  uint16_t _1404 = _kernel_cgra_stencil_92 * _input_cgra_stencil_92;
  uint16_t _1405 = _kernel_cgra_stencil_93 * _input_cgra_stencil_93;
  uint16_t _1406 = _kernel_cgra_stencil_94 * _input_cgra_stencil_94;
  uint16_t _1407 = _kernel_cgra_stencil_95 * _input_cgra_stencil_95;
  uint16_t _1408 = _kernel_cgra_stencil_96 * _input_cgra_stencil_96;
  uint16_t _1409 = _1407 + _1408;
  uint16_t _1410 = _1406 + _1409;
  uint16_t _1411 = _1405 + _1410;
  uint16_t _1412 = _1404 + _1411;
  uint16_t _1413 = _1403 + _1412;
  uint16_t _1414 = _1402 + _1413;
  uint16_t _1415 = _1401 + _1414;
  uint16_t _1416 = _1400 + _1415;
  uint16_t _1417 = _1399 + _1416;
  uint16_t _1418 = _1398 + _1417;
  uint16_t _1419 = _1397 + _1418;
  uint16_t _1420 = _1396 + _1419;
  uint16_t _1421 = _1395 + _1420;
  uint16_t _1422 = _1394 + _1421;
  uint16_t _1423 = _output_cgra_stencil_6 + _1422;
  uint16_t _1424 = _1393 + _1423;
  return _1424;
}

//store is: output_cgra.stencil(6, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(6, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(6, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(8, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(8, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(9, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(9, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(10, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(10, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(11, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(11, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(12, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(12, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(13, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(13, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(15, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(15, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(14, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(14, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_7(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_100 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_101 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_102 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_103 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_104 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_105 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_106 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_107 = (uint16_t) input_cgra_stencil.extract<112, 127>();
  uint16_t _input_cgra_stencil_108 = (uint16_t) input_cgra_stencil.extract<128, 143>();
  uint16_t _input_cgra_stencil_109 = (uint16_t) input_cgra_stencil.extract<144, 159>();
  uint16_t _input_cgra_stencil_110 = (uint16_t) input_cgra_stencil.extract<160, 175>();
  uint16_t _input_cgra_stencil_111 = (uint16_t) input_cgra_stencil.extract<176, 191>();
  uint16_t _input_cgra_stencil_112 = (uint16_t) input_cgra_stencil.extract<192, 207>();
  uint16_t _input_cgra_stencil_97 = (uint16_t) input_cgra_stencil.extract<208, 223>();
  uint16_t _input_cgra_stencil_98 = (uint16_t) input_cgra_stencil.extract<224, 239>();
  uint16_t _input_cgra_stencil_99 = (uint16_t) input_cgra_stencil.extract<240, 255>();

  uint16_t _kernel_cgra_stencil_100 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_101 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_102 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_103 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_104 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_105 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_106 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_107 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();
  uint16_t _kernel_cgra_stencil_108 = (uint16_t) kernel_cgra_stencil.extract<128, 143>();
  uint16_t _kernel_cgra_stencil_109 = (uint16_t) kernel_cgra_stencil.extract<144, 159>();
  uint16_t _kernel_cgra_stencil_110 = (uint16_t) kernel_cgra_stencil.extract<160, 175>();
  uint16_t _kernel_cgra_stencil_111 = (uint16_t) kernel_cgra_stencil.extract<176, 191>();
  uint16_t _kernel_cgra_stencil_112 = (uint16_t) kernel_cgra_stencil.extract<192, 207>();
  uint16_t _kernel_cgra_stencil_97 = (uint16_t) kernel_cgra_stencil.extract<208, 223>();
  uint16_t _kernel_cgra_stencil_98 = (uint16_t) kernel_cgra_stencil.extract<224, 239>();
  uint16_t _kernel_cgra_stencil_99 = (uint16_t) kernel_cgra_stencil.extract<240, 255>();

  uint16_t _output_cgra_stencil_7 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _1532 = _kernel_cgra_stencil_97 * _input_cgra_stencil_97;
  uint16_t _1533 = _kernel_cgra_stencil_98 * _input_cgra_stencil_98;
  uint16_t _1534 = _kernel_cgra_stencil_99 * _input_cgra_stencil_99;
  uint16_t _1535 = _kernel_cgra_stencil_100 * _input_cgra_stencil_100;
  uint16_t _1536 = _kernel_cgra_stencil_101 * _input_cgra_stencil_101;
  uint16_t _1537 = _kernel_cgra_stencil_102 * _input_cgra_stencil_102;
  uint16_t _1538 = _kernel_cgra_stencil_103 * _input_cgra_stencil_103;
  uint16_t _1539 = _kernel_cgra_stencil_104 * _input_cgra_stencil_104;
  uint16_t _1540 = _kernel_cgra_stencil_105 * _input_cgra_stencil_105;
  uint16_t _1541 = _kernel_cgra_stencil_106 * _input_cgra_stencil_106;
  uint16_t _1542 = _kernel_cgra_stencil_107 * _input_cgra_stencil_107;
  uint16_t _1543 = _kernel_cgra_stencil_108 * _input_cgra_stencil_108;
  uint16_t _1544 = _kernel_cgra_stencil_109 * _input_cgra_stencil_109;
  uint16_t _1545 = _kernel_cgra_stencil_110 * _input_cgra_stencil_110;
  uint16_t _1546 = _kernel_cgra_stencil_111 * _input_cgra_stencil_111;
  uint16_t _1547 = _kernel_cgra_stencil_112 * _input_cgra_stencil_112;
  uint16_t _1548 = _1546 + _1547;
  uint16_t _1549 = _1545 + _1548;
  uint16_t _1550 = _1544 + _1549;
  uint16_t _1551 = _1543 + _1550;
  uint16_t _1552 = _1542 + _1551;
  uint16_t _1553 = _1541 + _1552;
  uint16_t _1554 = _1540 + _1553;
  uint16_t _1555 = _1539 + _1554;
  uint16_t _1556 = _1538 + _1555;
  uint16_t _1557 = _1537 + _1556;
  uint16_t _1558 = _1536 + _1557;
  uint16_t _1559 = _1535 + _1558;
  uint16_t _1560 = _1534 + _1559;
  uint16_t _1561 = _1533 + _1560;
  uint16_t _1562 = _output_cgra_stencil_7 + _1561;
  uint16_t _1563 = _1532 + _1562;
  return _1563;
}

//store is: output_cgra.stencil(7, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(7, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(6, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(8, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(8, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(9, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(9, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(10, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(10, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(11, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(11, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(12, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(12, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(13, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(13, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(15, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(15, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(14, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(14, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_8(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_113 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_114 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_115 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_116 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_117 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_118 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_119 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_120 = (uint16_t) input_cgra_stencil.extract<112, 127>();
  uint16_t _input_cgra_stencil_121 = (uint16_t) input_cgra_stencil.extract<128, 143>();
  uint16_t _input_cgra_stencil_122 = (uint16_t) input_cgra_stencil.extract<144, 159>();
  uint16_t _input_cgra_stencil_123 = (uint16_t) input_cgra_stencil.extract<160, 175>();
  uint16_t _input_cgra_stencil_124 = (uint16_t) input_cgra_stencil.extract<176, 191>();
  uint16_t _input_cgra_stencil_125 = (uint16_t) input_cgra_stencil.extract<192, 207>();
  uint16_t _input_cgra_stencil_126 = (uint16_t) input_cgra_stencil.extract<208, 223>();
  uint16_t _input_cgra_stencil_127 = (uint16_t) input_cgra_stencil.extract<224, 239>();
  uint16_t _input_cgra_stencil_128 = (uint16_t) input_cgra_stencil.extract<240, 255>();

  uint16_t _kernel_cgra_stencil_113 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_114 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_115 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_116 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_117 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_118 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_119 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_120 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();
  uint16_t _kernel_cgra_stencil_121 = (uint16_t) kernel_cgra_stencil.extract<128, 143>();
  uint16_t _kernel_cgra_stencil_122 = (uint16_t) kernel_cgra_stencil.extract<144, 159>();
  uint16_t _kernel_cgra_stencil_123 = (uint16_t) kernel_cgra_stencil.extract<160, 175>();
  uint16_t _kernel_cgra_stencil_124 = (uint16_t) kernel_cgra_stencil.extract<176, 191>();
  uint16_t _kernel_cgra_stencil_125 = (uint16_t) kernel_cgra_stencil.extract<192, 207>();
  uint16_t _kernel_cgra_stencil_126 = (uint16_t) kernel_cgra_stencil.extract<208, 223>();
  uint16_t _kernel_cgra_stencil_127 = (uint16_t) kernel_cgra_stencil.extract<224, 239>();
  uint16_t _kernel_cgra_stencil_128 = (uint16_t) kernel_cgra_stencil.extract<240, 255>();

  uint16_t _output_cgra_stencil_8 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _1671 = _kernel_cgra_stencil_113 * _input_cgra_stencil_113;
  uint16_t _1672 = _kernel_cgra_stencil_114 * _input_cgra_stencil_114;
  uint16_t _1673 = _kernel_cgra_stencil_115 * _input_cgra_stencil_115;
  uint16_t _1674 = _kernel_cgra_stencil_116 * _input_cgra_stencil_116;
  uint16_t _1675 = _kernel_cgra_stencil_117 * _input_cgra_stencil_117;
  uint16_t _1676 = _kernel_cgra_stencil_118 * _input_cgra_stencil_118;
  uint16_t _1677 = _kernel_cgra_stencil_119 * _input_cgra_stencil_119;
  uint16_t _1678 = _kernel_cgra_stencil_120 * _input_cgra_stencil_120;
  uint16_t _1679 = _kernel_cgra_stencil_121 * _input_cgra_stencil_121;
  uint16_t _1680 = _kernel_cgra_stencil_122 * _input_cgra_stencil_122;
  uint16_t _1681 = _kernel_cgra_stencil_123 * _input_cgra_stencil_123;
  uint16_t _1682 = _kernel_cgra_stencil_124 * _input_cgra_stencil_124;
  uint16_t _1683 = _kernel_cgra_stencil_125 * _input_cgra_stencil_125;
  uint16_t _1684 = _kernel_cgra_stencil_126 * _input_cgra_stencil_126;
  uint16_t _1685 = _kernel_cgra_stencil_127 * _input_cgra_stencil_127;
  uint16_t _1686 = _kernel_cgra_stencil_128 * _input_cgra_stencil_128;
  uint16_t _1687 = _1685 + _1686;
  uint16_t _1688 = _1684 + _1687;
  uint16_t _1689 = _1683 + _1688;
  uint16_t _1690 = _1682 + _1689;
  uint16_t _1691 = _1681 + _1690;
  uint16_t _1692 = _1680 + _1691;
  uint16_t _1693 = _1679 + _1692;
  uint16_t _1694 = _1678 + _1693;
  uint16_t _1695 = _1677 + _1694;
  uint16_t _1696 = _1676 + _1695;
  uint16_t _1697 = _1675 + _1696;
  uint16_t _1698 = _1674 + _1697;
  uint16_t _1699 = _1673 + _1698;
  uint16_t _1700 = _1672 + _1699;
  uint16_t _1701 = _output_cgra_stencil_8 + _1700;
  uint16_t _1702 = _1671 + _1701;
  return _1702;
}

//store is: output_cgra.stencil(8, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, 8, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(8, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, 8, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, 8, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, 8, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, 8, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, 8, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(6, 8, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, 8, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(8, 8, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(8, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(9, 8, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(9, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(10, 8, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(10, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(11, 8, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(11, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(12, 8, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(12, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(13, 8, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(13, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(15, 8, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(15, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(14, 8, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(14, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_9(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_129 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_130 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_131 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_132 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_133 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_134 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_135 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_136 = (uint16_t) input_cgra_stencil.extract<112, 127>();
  uint16_t _input_cgra_stencil_137 = (uint16_t) input_cgra_stencil.extract<128, 143>();
  uint16_t _input_cgra_stencil_138 = (uint16_t) input_cgra_stencil.extract<144, 159>();
  uint16_t _input_cgra_stencil_139 = (uint16_t) input_cgra_stencil.extract<160, 175>();
  uint16_t _input_cgra_stencil_140 = (uint16_t) input_cgra_stencil.extract<176, 191>();
  uint16_t _input_cgra_stencil_141 = (uint16_t) input_cgra_stencil.extract<192, 207>();
  uint16_t _input_cgra_stencil_142 = (uint16_t) input_cgra_stencil.extract<208, 223>();
  uint16_t _input_cgra_stencil_143 = (uint16_t) input_cgra_stencil.extract<224, 239>();
  uint16_t _input_cgra_stencil_144 = (uint16_t) input_cgra_stencil.extract<240, 255>();

  uint16_t _kernel_cgra_stencil_129 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_130 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_131 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_132 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_133 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_134 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_135 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_136 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();
  uint16_t _kernel_cgra_stencil_137 = (uint16_t) kernel_cgra_stencil.extract<128, 143>();
  uint16_t _kernel_cgra_stencil_138 = (uint16_t) kernel_cgra_stencil.extract<144, 159>();
  uint16_t _kernel_cgra_stencil_139 = (uint16_t) kernel_cgra_stencil.extract<160, 175>();
  uint16_t _kernel_cgra_stencil_140 = (uint16_t) kernel_cgra_stencil.extract<176, 191>();
  uint16_t _kernel_cgra_stencil_141 = (uint16_t) kernel_cgra_stencil.extract<192, 207>();
  uint16_t _kernel_cgra_stencil_142 = (uint16_t) kernel_cgra_stencil.extract<208, 223>();
  uint16_t _kernel_cgra_stencil_143 = (uint16_t) kernel_cgra_stencil.extract<224, 239>();
  uint16_t _kernel_cgra_stencil_144 = (uint16_t) kernel_cgra_stencil.extract<240, 255>();

  uint16_t _output_cgra_stencil_9 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _1810 = _kernel_cgra_stencil_129 * _input_cgra_stencil_129;
  uint16_t _1811 = _kernel_cgra_stencil_130 * _input_cgra_stencil_130;
  uint16_t _1812 = _kernel_cgra_stencil_131 * _input_cgra_stencil_131;
  uint16_t _1813 = _kernel_cgra_stencil_132 * _input_cgra_stencil_132;
  uint16_t _1814 = _kernel_cgra_stencil_133 * _input_cgra_stencil_133;
  uint16_t _1815 = _kernel_cgra_stencil_134 * _input_cgra_stencil_134;
  uint16_t _1816 = _kernel_cgra_stencil_135 * _input_cgra_stencil_135;
  uint16_t _1817 = _kernel_cgra_stencil_136 * _input_cgra_stencil_136;
  uint16_t _1818 = _kernel_cgra_stencil_137 * _input_cgra_stencil_137;
  uint16_t _1819 = _kernel_cgra_stencil_138 * _input_cgra_stencil_138;
  uint16_t _1820 = _kernel_cgra_stencil_139 * _input_cgra_stencil_139;
  uint16_t _1821 = _kernel_cgra_stencil_140 * _input_cgra_stencil_140;
  uint16_t _1822 = _kernel_cgra_stencil_141 * _input_cgra_stencil_141;
  uint16_t _1823 = _kernel_cgra_stencil_142 * _input_cgra_stencil_142;
  uint16_t _1824 = _kernel_cgra_stencil_143 * _input_cgra_stencil_143;
  uint16_t _1825 = _kernel_cgra_stencil_144 * _input_cgra_stencil_144;
  uint16_t _1826 = _1824 + _1825;
  uint16_t _1827 = _1823 + _1826;
  uint16_t _1828 = _1822 + _1827;
  uint16_t _1829 = _1821 + _1828;
  uint16_t _1830 = _1820 + _1829;
  uint16_t _1831 = _1819 + _1830;
  uint16_t _1832 = _1818 + _1831;
  uint16_t _1833 = _1817 + _1832;
  uint16_t _1834 = _1816 + _1833;
  uint16_t _1835 = _1815 + _1834;
  uint16_t _1836 = _1814 + _1835;
  uint16_t _1837 = _1813 + _1836;
  uint16_t _1838 = _1812 + _1837;
  uint16_t _1839 = _1811 + _1838;
  uint16_t _1840 = _output_cgra_stencil_9 + _1839;
  uint16_t _1841 = _1810 + _1840;
  return _1841;
}

//store is: output_cgra.stencil(9, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, 9, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(9, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, 9, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, 9, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, 9, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, 9, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, 9, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(6, 9, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, 9, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(8, 9, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(8, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(9, 9, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(9, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(10, 9, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(10, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(11, 9, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(11, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(12, 9, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(12, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(13, 9, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(13, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(15, 9, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(15, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(14, 9, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(14, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_10(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_145 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_146 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_147 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_148 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_149 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_150 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_151 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_152 = (uint16_t) input_cgra_stencil.extract<112, 127>();
  uint16_t _input_cgra_stencil_153 = (uint16_t) input_cgra_stencil.extract<128, 143>();
  uint16_t _input_cgra_stencil_154 = (uint16_t) input_cgra_stencil.extract<144, 159>();
  uint16_t _input_cgra_stencil_155 = (uint16_t) input_cgra_stencil.extract<160, 175>();
  uint16_t _input_cgra_stencil_156 = (uint16_t) input_cgra_stencil.extract<176, 191>();
  uint16_t _input_cgra_stencil_157 = (uint16_t) input_cgra_stencil.extract<192, 207>();
  uint16_t _input_cgra_stencil_158 = (uint16_t) input_cgra_stencil.extract<208, 223>();
  uint16_t _input_cgra_stencil_159 = (uint16_t) input_cgra_stencil.extract<224, 239>();
  uint16_t _input_cgra_stencil_160 = (uint16_t) input_cgra_stencil.extract<240, 255>();

  uint16_t _kernel_cgra_stencil_145 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_146 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_147 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_148 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_149 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_150 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_151 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_152 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();
  uint16_t _kernel_cgra_stencil_153 = (uint16_t) kernel_cgra_stencil.extract<128, 143>();
  uint16_t _kernel_cgra_stencil_154 = (uint16_t) kernel_cgra_stencil.extract<144, 159>();
  uint16_t _kernel_cgra_stencil_155 = (uint16_t) kernel_cgra_stencil.extract<160, 175>();
  uint16_t _kernel_cgra_stencil_156 = (uint16_t) kernel_cgra_stencil.extract<176, 191>();
  uint16_t _kernel_cgra_stencil_157 = (uint16_t) kernel_cgra_stencil.extract<192, 207>();
  uint16_t _kernel_cgra_stencil_158 = (uint16_t) kernel_cgra_stencil.extract<208, 223>();
  uint16_t _kernel_cgra_stencil_159 = (uint16_t) kernel_cgra_stencil.extract<224, 239>();
  uint16_t _kernel_cgra_stencil_160 = (uint16_t) kernel_cgra_stencil.extract<240, 255>();

  uint16_t _output_cgra_stencil_10 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _1949 = _kernel_cgra_stencil_145 * _input_cgra_stencil_145;
  uint16_t _1950 = _kernel_cgra_stencil_146 * _input_cgra_stencil_146;
  uint16_t _1951 = _kernel_cgra_stencil_147 * _input_cgra_stencil_147;
  uint16_t _1952 = _kernel_cgra_stencil_148 * _input_cgra_stencil_148;
  uint16_t _1953 = _kernel_cgra_stencil_149 * _input_cgra_stencil_149;
  uint16_t _1954 = _kernel_cgra_stencil_150 * _input_cgra_stencil_150;
  uint16_t _1955 = _kernel_cgra_stencil_151 * _input_cgra_stencil_151;
  uint16_t _1956 = _kernel_cgra_stencil_152 * _input_cgra_stencil_152;
  uint16_t _1957 = _kernel_cgra_stencil_153 * _input_cgra_stencil_153;
  uint16_t _1958 = _kernel_cgra_stencil_154 * _input_cgra_stencil_154;
  uint16_t _1959 = _kernel_cgra_stencil_155 * _input_cgra_stencil_155;
  uint16_t _1960 = _kernel_cgra_stencil_156 * _input_cgra_stencil_156;
  uint16_t _1961 = _kernel_cgra_stencil_157 * _input_cgra_stencil_157;
  uint16_t _1962 = _kernel_cgra_stencil_158 * _input_cgra_stencil_158;
  uint16_t _1963 = _kernel_cgra_stencil_159 * _input_cgra_stencil_159;
  uint16_t _1964 = _kernel_cgra_stencil_160 * _input_cgra_stencil_160;
  uint16_t _1965 = _1963 + _1964;
  uint16_t _1966 = _1962 + _1965;
  uint16_t _1967 = _1961 + _1966;
  uint16_t _1968 = _1960 + _1967;
  uint16_t _1969 = _1959 + _1968;
  uint16_t _1970 = _1958 + _1969;
  uint16_t _1971 = _1957 + _1970;
  uint16_t _1972 = _1956 + _1971;
  uint16_t _1973 = _1955 + _1972;
  uint16_t _1974 = _1954 + _1973;
  uint16_t _1975 = _1953 + _1974;
  uint16_t _1976 = _1952 + _1975;
  uint16_t _1977 = _1951 + _1976;
  uint16_t _1978 = _1950 + _1977;
  uint16_t _1979 = _output_cgra_stencil_10 + _1978;
  uint16_t _1980 = _1949 + _1979;
  return _1980;
}

//store is: output_cgra.stencil(10, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, 10, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(10, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, 10, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, 10, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, 10, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, 10, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, 10, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(6, 10, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, 10, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(8, 10, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(8, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(9, 10, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(9, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(10, 10, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(10, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(11, 10, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(11, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(12, 10, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(12, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(13, 10, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(13, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(15, 10, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(15, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(14, 10, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(14, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_11(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_161 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_162 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_163 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_164 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_165 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_166 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_167 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_168 = (uint16_t) input_cgra_stencil.extract<112, 127>();
  uint16_t _input_cgra_stencil_169 = (uint16_t) input_cgra_stencil.extract<128, 143>();
  uint16_t _input_cgra_stencil_170 = (uint16_t) input_cgra_stencil.extract<144, 159>();
  uint16_t _input_cgra_stencil_171 = (uint16_t) input_cgra_stencil.extract<160, 175>();
  uint16_t _input_cgra_stencil_172 = (uint16_t) input_cgra_stencil.extract<176, 191>();
  uint16_t _input_cgra_stencil_173 = (uint16_t) input_cgra_stencil.extract<192, 207>();
  uint16_t _input_cgra_stencil_174 = (uint16_t) input_cgra_stencil.extract<208, 223>();
  uint16_t _input_cgra_stencil_175 = (uint16_t) input_cgra_stencil.extract<224, 239>();
  uint16_t _input_cgra_stencil_176 = (uint16_t) input_cgra_stencil.extract<240, 255>();

  uint16_t _kernel_cgra_stencil_161 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_162 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_163 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_164 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_165 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_166 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_167 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_168 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();
  uint16_t _kernel_cgra_stencil_169 = (uint16_t) kernel_cgra_stencil.extract<128, 143>();
  uint16_t _kernel_cgra_stencil_170 = (uint16_t) kernel_cgra_stencil.extract<144, 159>();
  uint16_t _kernel_cgra_stencil_171 = (uint16_t) kernel_cgra_stencil.extract<160, 175>();
  uint16_t _kernel_cgra_stencil_172 = (uint16_t) kernel_cgra_stencil.extract<176, 191>();
  uint16_t _kernel_cgra_stencil_173 = (uint16_t) kernel_cgra_stencil.extract<192, 207>();
  uint16_t _kernel_cgra_stencil_174 = (uint16_t) kernel_cgra_stencil.extract<208, 223>();
  uint16_t _kernel_cgra_stencil_175 = (uint16_t) kernel_cgra_stencil.extract<224, 239>();
  uint16_t _kernel_cgra_stencil_176 = (uint16_t) kernel_cgra_stencil.extract<240, 255>();

  uint16_t _output_cgra_stencil_11 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _2088 = _kernel_cgra_stencil_161 * _input_cgra_stencil_161;
  uint16_t _2089 = _kernel_cgra_stencil_162 * _input_cgra_stencil_162;
  uint16_t _2090 = _kernel_cgra_stencil_163 * _input_cgra_stencil_163;
  uint16_t _2091 = _kernel_cgra_stencil_164 * _input_cgra_stencil_164;
  uint16_t _2092 = _kernel_cgra_stencil_165 * _input_cgra_stencil_165;
  uint16_t _2093 = _kernel_cgra_stencil_166 * _input_cgra_stencil_166;
  uint16_t _2094 = _kernel_cgra_stencil_167 * _input_cgra_stencil_167;
  uint16_t _2095 = _kernel_cgra_stencil_168 * _input_cgra_stencil_168;
  uint16_t _2096 = _kernel_cgra_stencil_169 * _input_cgra_stencil_169;
  uint16_t _2097 = _kernel_cgra_stencil_170 * _input_cgra_stencil_170;
  uint16_t _2098 = _kernel_cgra_stencil_171 * _input_cgra_stencil_171;
  uint16_t _2099 = _kernel_cgra_stencil_172 * _input_cgra_stencil_172;
  uint16_t _2100 = _kernel_cgra_stencil_173 * _input_cgra_stencil_173;
  uint16_t _2101 = _kernel_cgra_stencil_174 * _input_cgra_stencil_174;
  uint16_t _2102 = _kernel_cgra_stencil_175 * _input_cgra_stencil_175;
  uint16_t _2103 = _kernel_cgra_stencil_176 * _input_cgra_stencil_176;
  uint16_t _2104 = _2102 + _2103;
  uint16_t _2105 = _2101 + _2104;
  uint16_t _2106 = _2100 + _2105;
  uint16_t _2107 = _2099 + _2106;
  uint16_t _2108 = _2098 + _2107;
  uint16_t _2109 = _2097 + _2108;
  uint16_t _2110 = _2096 + _2109;
  uint16_t _2111 = _2095 + _2110;
  uint16_t _2112 = _2094 + _2111;
  uint16_t _2113 = _2093 + _2112;
  uint16_t _2114 = _2092 + _2113;
  uint16_t _2115 = _2091 + _2114;
  uint16_t _2116 = _2090 + _2115;
  uint16_t _2117 = _2089 + _2116;
  uint16_t _2118 = _output_cgra_stencil_11 + _2117;
  uint16_t _2119 = _2088 + _2118;
  return _2119;
}

//store is: output_cgra.stencil(11, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, 11, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(11, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, 11, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, 11, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, 11, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, 11, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, 11, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(6, 11, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, 11, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(8, 11, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(8, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(9, 11, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(9, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(10, 11, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(10, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(11, 11, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(11, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(12, 11, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(12, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(13, 11, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(13, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(15, 11, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(15, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(14, 11, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(14, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_12(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_177 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_178 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_179 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_180 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_181 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_182 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_183 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_184 = (uint16_t) input_cgra_stencil.extract<112, 127>();
  uint16_t _input_cgra_stencil_185 = (uint16_t) input_cgra_stencil.extract<128, 143>();
  uint16_t _input_cgra_stencil_186 = (uint16_t) input_cgra_stencil.extract<144, 159>();
  uint16_t _input_cgra_stencil_187 = (uint16_t) input_cgra_stencil.extract<160, 175>();
  uint16_t _input_cgra_stencil_188 = (uint16_t) input_cgra_stencil.extract<176, 191>();
  uint16_t _input_cgra_stencil_189 = (uint16_t) input_cgra_stencil.extract<192, 207>();
  uint16_t _input_cgra_stencil_190 = (uint16_t) input_cgra_stencil.extract<208, 223>();
  uint16_t _input_cgra_stencil_191 = (uint16_t) input_cgra_stencil.extract<224, 239>();
  uint16_t _input_cgra_stencil_192 = (uint16_t) input_cgra_stencil.extract<240, 255>();

  uint16_t _kernel_cgra_stencil_177 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_178 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_179 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_180 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_181 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_182 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_183 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_184 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();
  uint16_t _kernel_cgra_stencil_185 = (uint16_t) kernel_cgra_stencil.extract<128, 143>();
  uint16_t _kernel_cgra_stencil_186 = (uint16_t) kernel_cgra_stencil.extract<144, 159>();
  uint16_t _kernel_cgra_stencil_187 = (uint16_t) kernel_cgra_stencil.extract<160, 175>();
  uint16_t _kernel_cgra_stencil_188 = (uint16_t) kernel_cgra_stencil.extract<176, 191>();
  uint16_t _kernel_cgra_stencil_189 = (uint16_t) kernel_cgra_stencil.extract<192, 207>();
  uint16_t _kernel_cgra_stencil_190 = (uint16_t) kernel_cgra_stencil.extract<208, 223>();
  uint16_t _kernel_cgra_stencil_191 = (uint16_t) kernel_cgra_stencil.extract<224, 239>();
  uint16_t _kernel_cgra_stencil_192 = (uint16_t) kernel_cgra_stencil.extract<240, 255>();

  uint16_t _output_cgra_stencil_12 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _2227 = _kernel_cgra_stencil_177 * _input_cgra_stencil_177;
  uint16_t _2228 = _kernel_cgra_stencil_178 * _input_cgra_stencil_178;
  uint16_t _2229 = _kernel_cgra_stencil_179 * _input_cgra_stencil_179;
  uint16_t _2230 = _kernel_cgra_stencil_180 * _input_cgra_stencil_180;
  uint16_t _2231 = _kernel_cgra_stencil_181 * _input_cgra_stencil_181;
  uint16_t _2232 = _kernel_cgra_stencil_182 * _input_cgra_stencil_182;
  uint16_t _2233 = _kernel_cgra_stencil_183 * _input_cgra_stencil_183;
  uint16_t _2234 = _kernel_cgra_stencil_184 * _input_cgra_stencil_184;
  uint16_t _2235 = _kernel_cgra_stencil_185 * _input_cgra_stencil_185;
  uint16_t _2236 = _kernel_cgra_stencil_186 * _input_cgra_stencil_186;
  uint16_t _2237 = _kernel_cgra_stencil_187 * _input_cgra_stencil_187;
  uint16_t _2238 = _kernel_cgra_stencil_188 * _input_cgra_stencil_188;
  uint16_t _2239 = _kernel_cgra_stencil_189 * _input_cgra_stencil_189;
  uint16_t _2240 = _kernel_cgra_stencil_190 * _input_cgra_stencil_190;
  uint16_t _2241 = _kernel_cgra_stencil_191 * _input_cgra_stencil_191;
  uint16_t _2242 = _kernel_cgra_stencil_192 * _input_cgra_stencil_192;
  uint16_t _2243 = _2241 + _2242;
  uint16_t _2244 = _2240 + _2243;
  uint16_t _2245 = _2239 + _2244;
  uint16_t _2246 = _2238 + _2245;
  uint16_t _2247 = _2237 + _2246;
  uint16_t _2248 = _2236 + _2247;
  uint16_t _2249 = _2235 + _2248;
  uint16_t _2250 = _2234 + _2249;
  uint16_t _2251 = _2233 + _2250;
  uint16_t _2252 = _2232 + _2251;
  uint16_t _2253 = _2231 + _2252;
  uint16_t _2254 = _2230 + _2253;
  uint16_t _2255 = _2229 + _2254;
  uint16_t _2256 = _2228 + _2255;
  uint16_t _2257 = _output_cgra_stencil_12 + _2256;
  uint16_t _2258 = _2227 + _2257;
  return _2258;
}

//store is: output_cgra.stencil(12, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, 12, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(12, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, 12, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, 12, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, 12, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, 12, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, 12, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(6, 12, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, 12, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(8, 12, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(8, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(9, 12, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(9, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(10, 12, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(10, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(11, 12, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(11, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(12, 12, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(12, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(13, 12, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(13, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(15, 12, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(15, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(14, 12, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(14, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_13(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_193 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_194 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_195 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_196 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_197 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_198 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_199 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_200 = (uint16_t) input_cgra_stencil.extract<112, 127>();
  uint16_t _input_cgra_stencil_201 = (uint16_t) input_cgra_stencil.extract<128, 143>();
  uint16_t _input_cgra_stencil_202 = (uint16_t) input_cgra_stencil.extract<144, 159>();
  uint16_t _input_cgra_stencil_203 = (uint16_t) input_cgra_stencil.extract<160, 175>();
  uint16_t _input_cgra_stencil_204 = (uint16_t) input_cgra_stencil.extract<176, 191>();
  uint16_t _input_cgra_stencil_205 = (uint16_t) input_cgra_stencil.extract<192, 207>();
  uint16_t _input_cgra_stencil_206 = (uint16_t) input_cgra_stencil.extract<208, 223>();
  uint16_t _input_cgra_stencil_207 = (uint16_t) input_cgra_stencil.extract<224, 239>();
  uint16_t _input_cgra_stencil_208 = (uint16_t) input_cgra_stencil.extract<240, 255>();

  uint16_t _kernel_cgra_stencil_193 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_194 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_195 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_196 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_197 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_198 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_199 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_200 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();
  uint16_t _kernel_cgra_stencil_201 = (uint16_t) kernel_cgra_stencil.extract<128, 143>();
  uint16_t _kernel_cgra_stencil_202 = (uint16_t) kernel_cgra_stencil.extract<144, 159>();
  uint16_t _kernel_cgra_stencil_203 = (uint16_t) kernel_cgra_stencil.extract<160, 175>();
  uint16_t _kernel_cgra_stencil_204 = (uint16_t) kernel_cgra_stencil.extract<176, 191>();
  uint16_t _kernel_cgra_stencil_205 = (uint16_t) kernel_cgra_stencil.extract<192, 207>();
  uint16_t _kernel_cgra_stencil_206 = (uint16_t) kernel_cgra_stencil.extract<208, 223>();
  uint16_t _kernel_cgra_stencil_207 = (uint16_t) kernel_cgra_stencil.extract<224, 239>();
  uint16_t _kernel_cgra_stencil_208 = (uint16_t) kernel_cgra_stencil.extract<240, 255>();

  uint16_t _output_cgra_stencil_13 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _2366 = _kernel_cgra_stencil_193 * _input_cgra_stencil_193;
  uint16_t _2367 = _kernel_cgra_stencil_194 * _input_cgra_stencil_194;
  uint16_t _2368 = _kernel_cgra_stencil_195 * _input_cgra_stencil_195;
  uint16_t _2369 = _kernel_cgra_stencil_196 * _input_cgra_stencil_196;
  uint16_t _2370 = _kernel_cgra_stencil_197 * _input_cgra_stencil_197;
  uint16_t _2371 = _kernel_cgra_stencil_198 * _input_cgra_stencil_198;
  uint16_t _2372 = _kernel_cgra_stencil_199 * _input_cgra_stencil_199;
  uint16_t _2373 = _kernel_cgra_stencil_200 * _input_cgra_stencil_200;
  uint16_t _2374 = _kernel_cgra_stencil_201 * _input_cgra_stencil_201;
  uint16_t _2375 = _kernel_cgra_stencil_202 * _input_cgra_stencil_202;
  uint16_t _2376 = _kernel_cgra_stencil_203 * _input_cgra_stencil_203;
  uint16_t _2377 = _kernel_cgra_stencil_204 * _input_cgra_stencil_204;
  uint16_t _2378 = _kernel_cgra_stencil_205 * _input_cgra_stencil_205;
  uint16_t _2379 = _kernel_cgra_stencil_206 * _input_cgra_stencil_206;
  uint16_t _2380 = _kernel_cgra_stencil_207 * _input_cgra_stencil_207;
  uint16_t _2381 = _kernel_cgra_stencil_208 * _input_cgra_stencil_208;
  uint16_t _2382 = _2380 + _2381;
  uint16_t _2383 = _2379 + _2382;
  uint16_t _2384 = _2378 + _2383;
  uint16_t _2385 = _2377 + _2384;
  uint16_t _2386 = _2376 + _2385;
  uint16_t _2387 = _2375 + _2386;
  uint16_t _2388 = _2374 + _2387;
  uint16_t _2389 = _2373 + _2388;
  uint16_t _2390 = _2372 + _2389;
  uint16_t _2391 = _2371 + _2390;
  uint16_t _2392 = _2370 + _2391;
  uint16_t _2393 = _2369 + _2392;
  uint16_t _2394 = _2368 + _2393;
  uint16_t _2395 = _2367 + _2394;
  uint16_t _2396 = _output_cgra_stencil_13 + _2395;
  uint16_t _2397 = _2366 + _2396;
  return _2397;
}

//store is: output_cgra.stencil(13, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, 13, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(13, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, 13, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, 13, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, 13, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, 13, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, 13, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(6, 13, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, 13, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(8, 13, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(8, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(9, 13, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(9, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(10, 13, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(10, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(11, 13, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(11, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(12, 13, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(12, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(13, 13, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(13, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(15, 13, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(15, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(14, 13, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(14, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_14(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_209 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_210 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_211 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_212 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_213 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_214 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_215 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_216 = (uint16_t) input_cgra_stencil.extract<112, 127>();
  uint16_t _input_cgra_stencil_217 = (uint16_t) input_cgra_stencil.extract<128, 143>();
  uint16_t _input_cgra_stencil_218 = (uint16_t) input_cgra_stencil.extract<144, 159>();
  uint16_t _input_cgra_stencil_219 = (uint16_t) input_cgra_stencil.extract<160, 175>();
  uint16_t _input_cgra_stencil_220 = (uint16_t) input_cgra_stencil.extract<176, 191>();
  uint16_t _input_cgra_stencil_221 = (uint16_t) input_cgra_stencil.extract<192, 207>();
  uint16_t _input_cgra_stencil_222 = (uint16_t) input_cgra_stencil.extract<208, 223>();
  uint16_t _input_cgra_stencil_223 = (uint16_t) input_cgra_stencil.extract<224, 239>();
  uint16_t _input_cgra_stencil_224 = (uint16_t) input_cgra_stencil.extract<240, 255>();

  uint16_t _kernel_cgra_stencil_209 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_210 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_211 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_212 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_213 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_214 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_215 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_216 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();
  uint16_t _kernel_cgra_stencil_217 = (uint16_t) kernel_cgra_stencil.extract<128, 143>();
  uint16_t _kernel_cgra_stencil_218 = (uint16_t) kernel_cgra_stencil.extract<144, 159>();
  uint16_t _kernel_cgra_stencil_219 = (uint16_t) kernel_cgra_stencil.extract<160, 175>();
  uint16_t _kernel_cgra_stencil_220 = (uint16_t) kernel_cgra_stencil.extract<176, 191>();
  uint16_t _kernel_cgra_stencil_221 = (uint16_t) kernel_cgra_stencil.extract<192, 207>();
  uint16_t _kernel_cgra_stencil_222 = (uint16_t) kernel_cgra_stencil.extract<208, 223>();
  uint16_t _kernel_cgra_stencil_223 = (uint16_t) kernel_cgra_stencil.extract<224, 239>();
  uint16_t _kernel_cgra_stencil_224 = (uint16_t) kernel_cgra_stencil.extract<240, 255>();

  uint16_t _output_cgra_stencil_14 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _2505 = _kernel_cgra_stencil_209 * _input_cgra_stencil_209;
  uint16_t _2506 = _kernel_cgra_stencil_210 * _input_cgra_stencil_210;
  uint16_t _2507 = _kernel_cgra_stencil_211 * _input_cgra_stencil_211;
  uint16_t _2508 = _kernel_cgra_stencil_212 * _input_cgra_stencil_212;
  uint16_t _2509 = _kernel_cgra_stencil_213 * _input_cgra_stencil_213;
  uint16_t _2510 = _kernel_cgra_stencil_214 * _input_cgra_stencil_214;
  uint16_t _2511 = _kernel_cgra_stencil_215 * _input_cgra_stencil_215;
  uint16_t _2512 = _kernel_cgra_stencil_216 * _input_cgra_stencil_216;
  uint16_t _2513 = _kernel_cgra_stencil_217 * _input_cgra_stencil_217;
  uint16_t _2514 = _kernel_cgra_stencil_218 * _input_cgra_stencil_218;
  uint16_t _2515 = _kernel_cgra_stencil_219 * _input_cgra_stencil_219;
  uint16_t _2516 = _kernel_cgra_stencil_220 * _input_cgra_stencil_220;
  uint16_t _2517 = _kernel_cgra_stencil_221 * _input_cgra_stencil_221;
  uint16_t _2518 = _kernel_cgra_stencil_222 * _input_cgra_stencil_222;
  uint16_t _2519 = _kernel_cgra_stencil_223 * _input_cgra_stencil_223;
  uint16_t _2520 = _kernel_cgra_stencil_224 * _input_cgra_stencil_224;
  uint16_t _2521 = _2519 + _2520;
  uint16_t _2522 = _2518 + _2521;
  uint16_t _2523 = _2517 + _2522;
  uint16_t _2524 = _2516 + _2523;
  uint16_t _2525 = _2515 + _2524;
  uint16_t _2526 = _2514 + _2525;
  uint16_t _2527 = _2513 + _2526;
  uint16_t _2528 = _2512 + _2527;
  uint16_t _2529 = _2511 + _2528;
  uint16_t _2530 = _2510 + _2529;
  uint16_t _2531 = _2509 + _2530;
  uint16_t _2532 = _2508 + _2531;
  uint16_t _2533 = _2507 + _2532;
  uint16_t _2534 = _2506 + _2533;
  uint16_t _2535 = _output_cgra_stencil_14 + _2534;
  uint16_t _2536 = _2505 + _2535;
  return _2536;
}

//store is: output_cgra.stencil(14, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, 14, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(14, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, 14, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, 14, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, 14, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, 14, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, 14, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(6, 14, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, 14, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(8, 14, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(8, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(9, 14, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(9, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(10, 14, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(10, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(11, 14, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(11, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(12, 14, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(12, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(13, 14, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(13, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(15, 14, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(15, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(14, 14, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(14, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_15(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_225 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_226 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_227 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_228 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_229 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_230 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_231 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_232 = (uint16_t) input_cgra_stencil.extract<112, 127>();
  uint16_t _input_cgra_stencil_233 = (uint16_t) input_cgra_stencil.extract<128, 143>();
  uint16_t _input_cgra_stencil_234 = (uint16_t) input_cgra_stencil.extract<144, 159>();
  uint16_t _input_cgra_stencil_235 = (uint16_t) input_cgra_stencil.extract<160, 175>();
  uint16_t _input_cgra_stencil_236 = (uint16_t) input_cgra_stencil.extract<176, 191>();
  uint16_t _input_cgra_stencil_237 = (uint16_t) input_cgra_stencil.extract<192, 207>();
  uint16_t _input_cgra_stencil_238 = (uint16_t) input_cgra_stencil.extract<208, 223>();
  uint16_t _input_cgra_stencil_239 = (uint16_t) input_cgra_stencil.extract<224, 239>();
  uint16_t _input_cgra_stencil_240 = (uint16_t) input_cgra_stencil.extract<240, 255>();

  uint16_t _kernel_cgra_stencil_225 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_226 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_227 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_228 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_229 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_230 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_231 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_232 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();
  uint16_t _kernel_cgra_stencil_233 = (uint16_t) kernel_cgra_stencil.extract<128, 143>();
  uint16_t _kernel_cgra_stencil_234 = (uint16_t) kernel_cgra_stencil.extract<144, 159>();
  uint16_t _kernel_cgra_stencil_235 = (uint16_t) kernel_cgra_stencil.extract<160, 175>();
  uint16_t _kernel_cgra_stencil_236 = (uint16_t) kernel_cgra_stencil.extract<176, 191>();
  uint16_t _kernel_cgra_stencil_237 = (uint16_t) kernel_cgra_stencil.extract<192, 207>();
  uint16_t _kernel_cgra_stencil_238 = (uint16_t) kernel_cgra_stencil.extract<208, 223>();
  uint16_t _kernel_cgra_stencil_239 = (uint16_t) kernel_cgra_stencil.extract<224, 239>();
  uint16_t _kernel_cgra_stencil_240 = (uint16_t) kernel_cgra_stencil.extract<240, 255>();

  uint16_t _output_cgra_stencil_15 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _2644 = _kernel_cgra_stencil_225 * _input_cgra_stencil_225;
  uint16_t _2645 = _kernel_cgra_stencil_226 * _input_cgra_stencil_226;
  uint16_t _2646 = _kernel_cgra_stencil_227 * _input_cgra_stencil_227;
  uint16_t _2647 = _kernel_cgra_stencil_228 * _input_cgra_stencil_228;
  uint16_t _2648 = _kernel_cgra_stencil_229 * _input_cgra_stencil_229;
  uint16_t _2649 = _kernel_cgra_stencil_230 * _input_cgra_stencil_230;
  uint16_t _2650 = _kernel_cgra_stencil_231 * _input_cgra_stencil_231;
  uint16_t _2651 = _kernel_cgra_stencil_232 * _input_cgra_stencil_232;
  uint16_t _2652 = _kernel_cgra_stencil_233 * _input_cgra_stencil_233;
  uint16_t _2653 = _kernel_cgra_stencil_234 * _input_cgra_stencil_234;
  uint16_t _2654 = _kernel_cgra_stencil_235 * _input_cgra_stencil_235;
  uint16_t _2655 = _kernel_cgra_stencil_236 * _input_cgra_stencil_236;
  uint16_t _2656 = _kernel_cgra_stencil_237 * _input_cgra_stencil_237;
  uint16_t _2657 = _kernel_cgra_stencil_238 * _input_cgra_stencil_238;
  uint16_t _2658 = _kernel_cgra_stencil_239 * _input_cgra_stencil_239;
  uint16_t _2659 = _kernel_cgra_stencil_240 * _input_cgra_stencil_240;
  uint16_t _2660 = _2658 + _2659;
  uint16_t _2661 = _2657 + _2660;
  uint16_t _2662 = _2656 + _2661;
  uint16_t _2663 = _2655 + _2662;
  uint16_t _2664 = _2654 + _2663;
  uint16_t _2665 = _2653 + _2664;
  uint16_t _2666 = _2652 + _2665;
  uint16_t _2667 = _2651 + _2666;
  uint16_t _2668 = _2650 + _2667;
  uint16_t _2669 = _2649 + _2668;
  uint16_t _2670 = _2648 + _2669;
  uint16_t _2671 = _2647 + _2670;
  uint16_t _2672 = _2646 + _2671;
  uint16_t _2673 = _2645 + _2672;
  uint16_t _2674 = _output_cgra_stencil_15 + _2673;
  uint16_t _2675 = _2644 + _2674;
  return _2675;
}

//store is: output_cgra.stencil(15, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, 15, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(15, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, 15, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, 15, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, 15, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, 15, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, 15, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(6, 15, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, 15, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(8, 15, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(8, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(9, 15, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(9, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(10, 15, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(10, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(11, 15, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(11, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(12, 15, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(12, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(13, 15, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(13, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(15, 15, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(15, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(14, 15, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(14, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_16(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_241 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_242 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_243 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_244 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_245 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_246 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_247 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_248 = (uint16_t) input_cgra_stencil.extract<112, 127>();
  uint16_t _input_cgra_stencil_249 = (uint16_t) input_cgra_stencil.extract<128, 143>();
  uint16_t _input_cgra_stencil_250 = (uint16_t) input_cgra_stencil.extract<144, 159>();
  uint16_t _input_cgra_stencil_251 = (uint16_t) input_cgra_stencil.extract<160, 175>();
  uint16_t _input_cgra_stencil_252 = (uint16_t) input_cgra_stencil.extract<176, 191>();
  uint16_t _input_cgra_stencil_253 = (uint16_t) input_cgra_stencil.extract<192, 207>();
  uint16_t _input_cgra_stencil_254 = (uint16_t) input_cgra_stencil.extract<208, 223>();
  uint16_t _input_cgra_stencil_255 = (uint16_t) input_cgra_stencil.extract<224, 239>();
  uint16_t _input_cgra_stencil_256 = (uint16_t) input_cgra_stencil.extract<240, 255>();

  uint16_t _kernel_cgra_stencil_241 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_242 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_243 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_244 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_245 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_246 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_247 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_248 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();
  uint16_t _kernel_cgra_stencil_249 = (uint16_t) kernel_cgra_stencil.extract<128, 143>();
  uint16_t _kernel_cgra_stencil_250 = (uint16_t) kernel_cgra_stencil.extract<144, 159>();
  uint16_t _kernel_cgra_stencil_251 = (uint16_t) kernel_cgra_stencil.extract<160, 175>();
  uint16_t _kernel_cgra_stencil_252 = (uint16_t) kernel_cgra_stencil.extract<176, 191>();
  uint16_t _kernel_cgra_stencil_253 = (uint16_t) kernel_cgra_stencil.extract<192, 207>();
  uint16_t _kernel_cgra_stencil_254 = (uint16_t) kernel_cgra_stencil.extract<208, 223>();
  uint16_t _kernel_cgra_stencil_255 = (uint16_t) kernel_cgra_stencil.extract<224, 239>();
  uint16_t _kernel_cgra_stencil_256 = (uint16_t) kernel_cgra_stencil.extract<240, 255>();

  uint16_t _output_cgra_stencil_16 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _2783 = _kernel_cgra_stencil_241 * _input_cgra_stencil_241;
  uint16_t _2784 = _kernel_cgra_stencil_242 * _input_cgra_stencil_242;
  uint16_t _2785 = _kernel_cgra_stencil_243 * _input_cgra_stencil_243;
  uint16_t _2786 = _kernel_cgra_stencil_244 * _input_cgra_stencil_244;
  uint16_t _2787 = _kernel_cgra_stencil_245 * _input_cgra_stencil_245;
  uint16_t _2788 = _kernel_cgra_stencil_246 * _input_cgra_stencil_246;
  uint16_t _2789 = _kernel_cgra_stencil_247 * _input_cgra_stencil_247;
  uint16_t _2790 = _kernel_cgra_stencil_248 * _input_cgra_stencil_248;
  uint16_t _2791 = _kernel_cgra_stencil_249 * _input_cgra_stencil_249;
  uint16_t _2792 = _kernel_cgra_stencil_250 * _input_cgra_stencil_250;
  uint16_t _2793 = _kernel_cgra_stencil_251 * _input_cgra_stencil_251;
  uint16_t _2794 = _kernel_cgra_stencil_252 * _input_cgra_stencil_252;
  uint16_t _2795 = _kernel_cgra_stencil_253 * _input_cgra_stencil_253;
  uint16_t _2796 = _kernel_cgra_stencil_254 * _input_cgra_stencil_254;
  uint16_t _2797 = _kernel_cgra_stencil_255 * _input_cgra_stencil_255;
  uint16_t _2798 = _kernel_cgra_stencil_256 * _input_cgra_stencil_256;
  uint16_t _2799 = _2797 + _2798;
  uint16_t _2800 = _2796 + _2799;
  uint16_t _2801 = _2795 + _2800;
  uint16_t _2802 = _2794 + _2801;
  uint16_t _2803 = _2793 + _2802;
  uint16_t _2804 = _2792 + _2803;
  uint16_t _2805 = _2791 + _2804;
  uint16_t _2806 = _2790 + _2805;
  uint16_t _2807 = _2789 + _2806;
  uint16_t _2808 = _2788 + _2807;
  uint16_t _2809 = _2787 + _2808;
  uint16_t _2810 = _2786 + _2809;
  uint16_t _2811 = _2785 + _2810;
  uint16_t _2812 = _2784 + _2811;
  uint16_t _2813 = _output_cgra_stencil_16 + _2812;
  uint16_t _2814 = _2783 + _2813;
  return _2814;
}

//store is: output_glb.stencil(((output_glb_s0_w_w_glb*16) + output_glb_s0_w_w_cgra), ((output_glb_s0_x_x_glb*28) + output_glb_s0_x_x_cgra), ((output_glb_s0_y_y_glb*28) + output_glb_s0_y_y_cgra)) = output_cgra.stencil(output_glb_s0_w_w_cgra, output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
hw_uint<16> hcompute_output_glb_stencil(hw_uint<16>& output_cgra_stencil) {
  uint16_t _output_cgra_stencil_17 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  return _output_cgra_stencil_17;
}

//store is: hw_output.stencil(hw_output_s0_w, hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil(hw_output_s0_w, hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& output_glb_stencil) {
  uint16_t _output_glb_stencil_1 = (uint16_t) output_glb_stencil.extract<0, 15>();

  return _output_glb_stencil_1;
}

