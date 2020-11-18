#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: input_gb.stencil(input_gb_s0_z, input_gb_s0_x, input_gb_s0_y) = input_host.stencil(input_gb_s0_z, input_gb_s0_x, input_gb_s0_y)
hw_uint<16> hcompute_input_gb_stencil(hw_uint<16>& input_host_stencil) {
  uint16_t _input_host_stencil_1 = (uint16_t) input_host_stencil.extract<0, 15>();

  return _input_host_stencil_1;
}

//store is: kernel_gb.stencil(kernel_gb_s0_z, kernel_gb_s0_w, kernel_gb_s0_x, kernel_gb_s0_y) = kernel_host.stencil(kernel_gb_s0_z, kernel_gb_s0_w, kernel_gb_s0_x, kernel_gb_s0_y)
hw_uint<16> hcompute_kernel_gb_stencil(hw_uint<16>& kernel_host_stencil) {
  uint16_t _kernel_host_stencil_1 = (uint16_t) kernel_host_stencil.extract<0, 15>();

  return _kernel_host_stencil_1;
}

//store is: output_cgra.stencil(output_cgra_s0_x, output_cgra_s0_y, (output_cgra_s0_w_w_cgra + (output_gb_s0_w_w_gb*3))) = (uint16)0
hw_uint<16> hcompute_output_cgra_stencil() {
  uint16_t _673 = (uint16_t)(0);
  return _673;
}

//store is: input_cgra.stencil((input_cgra_s0_z_z_cgra + (input_cgra_s0_z_z_gb*4)), input_cgra_s0_zz, input_cgra_s0_x, input_cgra_s0_y) = input_gb.stencil((((input_cgra_s0_z_z_cgra + (input_cgra_s0_z_z_gb*4))*4) + input_cgra_s0_zz), input_cgra_s0_x, input_cgra_s0_y)
hw_uint<16> hcompute_input_cgra_stencil(hw_uint<16>& input_gb_stencil) {
  uint16_t _input_gb_stencil_1 = (uint16_t) input_gb_stencil.extract<0, 15>();

  return _input_gb_stencil_1;
}

//store is: kernel_cgra.stencil((kernel_cgra_s0_z_z_cgra + (kernel_cgra_s0_z_z_gb*4)), kernel_cgra_s0_zz, (kernel_cgra_s0_w_w_cgra + (output_gb_s0_w_w_gb*3)), kernel_cgra_s0_x, kernel_cgra_s0_y) = kernel_gb.stencil((((kernel_cgra_s0_z_z_cgra + (kernel_cgra_s0_z_z_gb*4))*4) + kernel_cgra_s0_zz), (kernel_cgra_s0_w_w_cgra + (output_gb_s0_w_w_gb*3)), kernel_cgra_s0_x, kernel_cgra_s0_y)
hw_uint<16> hcompute_kernel_cgra_stencil(hw_uint<16>& kernel_gb_stencil) {
  uint16_t _kernel_gb_stencil_1 = (uint16_t) kernel_gb_stencil.extract<0, 15>();

  return _kernel_gb_stencil_1;
}

//store is: output_cgra.stencil(output_cgra_s1_x, output_cgra_s1_y, (output_gb_s0_w_w_gb*3)) = ((kernel_cgra.stencil(output_cgra_s1_r_w, 0, (output_gb_s0_w_w_gb*3), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(output_cgra_s1_r_w, 0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(output_cgra_s1_x, output_cgra_s1_y, (output_gb_s0_w_w_gb*3)) + ((kernel_cgra.stencil(output_cgra_s1_r_w, 1, (output_gb_s0_w_w_gb*3), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(output_cgra_s1_r_w, 1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(output_cgra_s1_r_w, 3, (output_gb_s0_w_w_gb*3), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(output_cgra_s1_r_w, 3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(output_cgra_s1_r_w, 2, (output_gb_s0_w_w_gb*3), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(output_cgra_s1_r_w, 2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))
hw_uint<16> hcompute_output_cgra_stencil_1(hw_uint<64>& input_cgra_stencil, hw_uint<64>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_1 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_2 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_3 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_4 = (uint16_t) input_cgra_stencil.extract<48, 63>();

  uint16_t _kernel_cgra_stencil_1 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_2 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_3 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_4 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();

  uint16_t _output_cgra_stencil_1 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _690 = _kernel_cgra_stencil_1 * _input_cgra_stencil_1;
  uint16_t _691 = _kernel_cgra_stencil_2 * _input_cgra_stencil_2;
  uint16_t _692 = _kernel_cgra_stencil_3 * _input_cgra_stencil_3;
  uint16_t _693 = _kernel_cgra_stencil_4 * _input_cgra_stencil_4;
  uint16_t _694 = _692 + _693;
  uint16_t _695 = _691 + _694;
  uint16_t _696 = _output_cgra_stencil_1 + _695;
  uint16_t _697 = _690 + _696;
  return _697;
}

//store is: output_cgra.stencil(output_cgra_s1_x_1, output_cgra_s1_y_1, ((output_gb_s0_w_w_gb*3) + 1)) = ((kernel_cgra.stencil(output_cgra_s1_r_w, 0, ((output_gb_s0_w_w_gb*3) + 1), output_cgra_s1_r_x_1, output_cgra_s1_r_y_1)*input_cgra.stencil(output_cgra_s1_r_w, 0, (output_cgra_s1_r_x_1 + output_cgra_s1_x_1), (output_cgra_s1_r_y_1 + output_cgra_s1_y_1))) + (output_cgra.stencil(output_cgra_s1_x_1, output_cgra_s1_y_1, ((output_gb_s0_w_w_gb*3) + 1)) + ((kernel_cgra.stencil(output_cgra_s1_r_w, 1, ((output_gb_s0_w_w_gb*3) + 1), output_cgra_s1_r_x_1, output_cgra_s1_r_y_1)*input_cgra.stencil(output_cgra_s1_r_w, 1, (output_cgra_s1_r_x_1 + output_cgra_s1_x_1), (output_cgra_s1_r_y_1 + output_cgra_s1_y_1))) + ((kernel_cgra.stencil(output_cgra_s1_r_w, 3, ((output_gb_s0_w_w_gb*3) + 1), output_cgra_s1_r_x_1, output_cgra_s1_r_y_1)*input_cgra.stencil(output_cgra_s1_r_w, 3, (output_cgra_s1_r_x_1 + output_cgra_s1_x_1), (output_cgra_s1_r_y_1 + output_cgra_s1_y_1))) + (kernel_cgra.stencil(output_cgra_s1_r_w, 2, ((output_gb_s0_w_w_gb*3) + 1), output_cgra_s1_r_x_1, output_cgra_s1_r_y_1)*input_cgra.stencil(output_cgra_s1_r_w, 2, (output_cgra_s1_r_x_1 + output_cgra_s1_x_1), (output_cgra_s1_r_y_1 + output_cgra_s1_y_1)))))))
hw_uint<16> hcompute_output_cgra_stencil_2(hw_uint<64>& input_cgra_stencil, hw_uint<64>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_5 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_6 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_7 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_8 = (uint16_t) input_cgra_stencil.extract<48, 63>();

  uint16_t _kernel_cgra_stencil_5 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_6 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_7 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_8 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();

  uint16_t _output_cgra_stencil_2 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _726 = _kernel_cgra_stencil_5 * _input_cgra_stencil_5;
  uint16_t _727 = _kernel_cgra_stencil_6 * _input_cgra_stencil_6;
  uint16_t _728 = _kernel_cgra_stencil_7 * _input_cgra_stencil_7;
  uint16_t _729 = _kernel_cgra_stencil_8 * _input_cgra_stencil_8;
  uint16_t _730 = _728 + _729;
  uint16_t _731 = _727 + _730;
  uint16_t _732 = _output_cgra_stencil_2 + _731;
  uint16_t _733 = _726 + _732;
  return _733;
}

//store is: output_cgra.stencil(output_cgra_s1_x_2, output_cgra_s1_y_2, ((output_gb_s0_w_w_gb*3) + 2)) = ((kernel_cgra.stencil(output_cgra_s1_r_w, 0, ((output_gb_s0_w_w_gb*3) + 2), output_cgra_s1_r_x_2, output_cgra_s1_r_y_2)*input_cgra.stencil(output_cgra_s1_r_w, 0, (output_cgra_s1_r_x_2 + output_cgra_s1_x_2), (output_cgra_s1_r_y_2 + output_cgra_s1_y_2))) + (output_cgra.stencil(output_cgra_s1_x_2, output_cgra_s1_y_2, ((output_gb_s0_w_w_gb*3) + 2)) + ((kernel_cgra.stencil(output_cgra_s1_r_w, 1, ((output_gb_s0_w_w_gb*3) + 2), output_cgra_s1_r_x_2, output_cgra_s1_r_y_2)*input_cgra.stencil(output_cgra_s1_r_w, 1, (output_cgra_s1_r_x_2 + output_cgra_s1_x_2), (output_cgra_s1_r_y_2 + output_cgra_s1_y_2))) + ((kernel_cgra.stencil(output_cgra_s1_r_w, 3, ((output_gb_s0_w_w_gb*3) + 2), output_cgra_s1_r_x_2, output_cgra_s1_r_y_2)*input_cgra.stencil(output_cgra_s1_r_w, 3, (output_cgra_s1_r_x_2 + output_cgra_s1_x_2), (output_cgra_s1_r_y_2 + output_cgra_s1_y_2))) + (kernel_cgra.stencil(output_cgra_s1_r_w, 2, ((output_gb_s0_w_w_gb*3) + 2), output_cgra_s1_r_x_2, output_cgra_s1_r_y_2)*input_cgra.stencil(output_cgra_s1_r_w, 2, (output_cgra_s1_r_x_2 + output_cgra_s1_x_2), (output_cgra_s1_r_y_2 + output_cgra_s1_y_2)))))))
hw_uint<16> hcompute_output_cgra_stencil_3(hw_uint<64>& input_cgra_stencil, hw_uint<64>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_10 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_11 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_12 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_9 = (uint16_t) input_cgra_stencil.extract<48, 63>();

  uint16_t _kernel_cgra_stencil_10 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_11 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_12 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_9 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();

  uint16_t _output_cgra_stencil_3 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _763 = _kernel_cgra_stencil_9 * _input_cgra_stencil_9;
  uint16_t _764 = _kernel_cgra_stencil_10 * _input_cgra_stencil_10;
  uint16_t _765 = _kernel_cgra_stencil_11 * _input_cgra_stencil_11;
  uint16_t _766 = _kernel_cgra_stencil_12 * _input_cgra_stencil_12;
  uint16_t _767 = _765 + _766;
  uint16_t _768 = _764 + _767;
  uint16_t _769 = _output_cgra_stencil_3 + _768;
  uint16_t _770 = _763 + _769;
  return _770;
}

//store is: output_gb.stencil(output_gb_s0_x_x_cgra, output_gb_s0_y_y_cgra, (output_gb_s0_w_w_cgra + (output_gb_s0_w_w_gb*3))) = output_cgra.stencil(output_gb_s0_x_x_cgra, output_gb_s0_y_y_cgra, (output_gb_s0_w_w_cgra + (output_gb_s0_w_w_gb*3)))
hw_uint<16> hcompute_output_gb_stencil(hw_uint<16>& output_cgra_stencil) {
  uint16_t _output_cgra_stencil_4 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  return _output_cgra_stencil_4;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w) = output_gb.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& output_gb_stencil) {
  uint16_t _output_gb_stencil_1 = (uint16_t) output_gb_stencil.extract<0, 15>();

  return _output_gb_stencil_1;
}

