#pragma once
#include "hw_classes.h"
#include "conv_3x3.h"


//store is: hw_input.stencil(hw_input_s0_z, hw_input_s0_x, hw_input_s0_y) = input_copy.stencil(hw_input_s0_z, hw_input_s0_x, hw_input_s0_y)
hw_uint<16> hcompute_hw_input_stencil(hw_uint<16>& input_copy_stencil) {
  uint16_t _input_copy_stencil_1 = (uint16_t) input_copy_stencil.extract<0, 15>();

  return _input_copy_stencil_1;
}

//store is: hw_kernel.stencil(hw_kernel_s0_z, hw_kernel_s0_w, hw_kernel_s0_x, hw_kernel_s0_y) = kernel_copy.stencil(hw_kernel_s0_z, hw_kernel_s0_w, hw_kernel_s0_x, hw_kernel_s0_y)
hw_uint<16> hcompute_hw_kernel_stencil(hw_uint<16>& kernel_copy_stencil) {
  uint16_t _kernel_copy_stencil_1 = (uint16_t) kernel_copy_stencil.extract<0, 15>();

  return _kernel_copy_stencil_1;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, conv_s0_w) = (uint16)0
hw_uint<16> hcompute_conv_stencil() {
  uint16_t _666 = (uint16_t)(0);
  return _666;
}

//store is: conv.stencil((conv_s1_x_x*3), (conv_s1_y_y*3), conv_s1_w) = (conv.stencil((conv_s1_x_x*3), (conv_s1_y_y*3), conv_s1_w) + (hw_kernel.stencil(conv_s1_r_z, conv_s1_w, conv_s1_r_x, conv_s1_r_y)*hw_input.stencil(conv_s1_r_z, ((conv_s1_x_x*3) + conv_s1_r_x), (conv_s1_r_y + (conv_s1_y_y*3)))))
hw_uint<16> hcompute_conv_stencil_1(hw_uint<16>& conv_stencil, hw_uint<16>& hw_input_stencil, hw_uint<16>& hw_kernel_stencil) {
  uint16_t _conv_stencil_1 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();

  uint16_t _hw_kernel_stencil_1 = (uint16_t) hw_kernel_stencil.extract<0, 15>();

  uint16_t _669 = _hw_kernel_stencil_1 * _hw_input_stencil_1;
  uint16_t _670 = _conv_stencil_1 + _669;
  return _670;
}

//store is: conv.stencil(((conv_s1_x_x*3) + 1), (conv_s1_y_y*3), conv_s1_w) = (conv.stencil(((conv_s1_x_x*3) + 1), (conv_s1_y_y*3), conv_s1_w) + (hw_kernel.stencil(conv_s1_r_z, conv_s1_w, conv_s1_r_x, conv_s1_r_y)*hw_input.stencil(conv_s1_r_z, (((conv_s1_x_x*3) + conv_s1_r_x) + 1), (conv_s1_r_y + (conv_s1_y_y*3)))))
hw_uint<16> hcompute_conv_stencil_2(hw_uint<16>& conv_stencil, hw_uint<16>& hw_input_stencil, hw_uint<16>& hw_kernel_stencil) {
  uint16_t _conv_stencil_2 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_2 = (uint16_t) hw_input_stencil.extract<0, 15>();

  uint16_t _hw_kernel_stencil_2 = (uint16_t) hw_kernel_stencil.extract<0, 15>();

  uint16_t _682 = _hw_kernel_stencil_2 * _hw_input_stencil_2;
  uint16_t _683 = _conv_stencil_2 + _682;
  return _683;
}

//store is: conv.stencil(((conv_s1_x_x*3) + 2), (conv_s1_y_y*3), conv_s1_w) = (conv.stencil(((conv_s1_x_x*3) + 2), (conv_s1_y_y*3), conv_s1_w) + (hw_kernel.stencil(conv_s1_r_z, conv_s1_w, conv_s1_r_x, conv_s1_r_y)*hw_input.stencil(conv_s1_r_z, (((conv_s1_x_x*3) + conv_s1_r_x) + 2), (conv_s1_r_y + (conv_s1_y_y*3)))))
hw_uint<16> hcompute_conv_stencil_3(hw_uint<16>& conv_stencil, hw_uint<16>& hw_input_stencil, hw_uint<16>& hw_kernel_stencil) {
  uint16_t _conv_stencil_3 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_3 = (uint16_t) hw_input_stencil.extract<0, 15>();

  uint16_t _hw_kernel_stencil_3 = (uint16_t) hw_kernel_stencil.extract<0, 15>();

  uint16_t _697 = _hw_kernel_stencil_3 * _hw_input_stencil_3;
  uint16_t _698 = _conv_stencil_3 + _697;
  return _698;
}

//store is: conv.stencil((conv_s1_x_x_1*3), ((conv_s1_y_y*3) + 1), conv_s1_w) = (conv.stencil((conv_s1_x_x_1*3), ((conv_s1_y_y*3) + 1), conv_s1_w) + (hw_kernel.stencil(conv_s1_r_z, conv_s1_w, conv_s1_r_x, conv_s1_r_y)*hw_input.stencil(conv_s1_r_z, ((conv_s1_x_x_1*3) + conv_s1_r_x), ((conv_s1_r_y + (conv_s1_y_y*3)) + 1))))
hw_uint<16> hcompute_conv_stencil_4(hw_uint<16>& conv_stencil, hw_uint<16>& hw_input_stencil, hw_uint<16>& hw_kernel_stencil) {
  uint16_t _conv_stencil_4 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_4 = (uint16_t) hw_input_stencil.extract<0, 15>();

  uint16_t _hw_kernel_stencil_4 = (uint16_t) hw_kernel_stencil.extract<0, 15>();

  uint16_t _712 = _hw_kernel_stencil_4 * _hw_input_stencil_4;
  uint16_t _713 = _conv_stencil_4 + _712;
  return _713;
}

//store is: conv.stencil(((conv_s1_x_x_1*3) + 1), ((conv_s1_y_y*3) + 1), conv_s1_w) = (conv.stencil(((conv_s1_x_x_1*3) + 1), ((conv_s1_y_y*3) + 1), conv_s1_w) + (hw_kernel.stencil(conv_s1_r_z, conv_s1_w, conv_s1_r_x, conv_s1_r_y)*hw_input.stencil(conv_s1_r_z, (((conv_s1_x_x_1*3) + conv_s1_r_x) + 1), ((conv_s1_r_y + (conv_s1_y_y*3)) + 1))))
hw_uint<16> hcompute_conv_stencil_5(hw_uint<16>& conv_stencil, hw_uint<16>& hw_input_stencil, hw_uint<16>& hw_kernel_stencil) {
  uint16_t _conv_stencil_5 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_5 = (uint16_t) hw_input_stencil.extract<0, 15>();

  uint16_t _hw_kernel_stencil_5 = (uint16_t) hw_kernel_stencil.extract<0, 15>();

  uint16_t _727 = _hw_kernel_stencil_5 * _hw_input_stencil_5;
  uint16_t _728 = _conv_stencil_5 + _727;
  return _728;
}

//store is: conv.stencil(((conv_s1_x_x_1*3) + 2), ((conv_s1_y_y*3) + 1), conv_s1_w) = (conv.stencil(((conv_s1_x_x_1*3) + 2), ((conv_s1_y_y*3) + 1), conv_s1_w) + (hw_kernel.stencil(conv_s1_r_z, conv_s1_w, conv_s1_r_x, conv_s1_r_y)*hw_input.stencil(conv_s1_r_z, (((conv_s1_x_x_1*3) + conv_s1_r_x) + 2), ((conv_s1_r_y + (conv_s1_y_y*3)) + 1))))
hw_uint<16> hcompute_conv_stencil_6(hw_uint<16>& conv_stencil, hw_uint<16>& hw_input_stencil, hw_uint<16>& hw_kernel_stencil) {
  uint16_t _conv_stencil_6 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_6 = (uint16_t) hw_input_stencil.extract<0, 15>();

  uint16_t _hw_kernel_stencil_6 = (uint16_t) hw_kernel_stencil.extract<0, 15>();

  uint16_t _744 = _hw_kernel_stencil_6 * _hw_input_stencil_6;
  uint16_t _745 = _conv_stencil_6 + _744;
  return _745;
}

//store is: conv.stencil((conv_s1_x_x_2*3), ((conv_s1_y_y*3) + 2), conv_s1_w) = (conv.stencil((conv_s1_x_x_2*3), ((conv_s1_y_y*3) + 2), conv_s1_w) + (hw_kernel.stencil(conv_s1_r_z, conv_s1_w, conv_s1_r_x, conv_s1_r_y)*hw_input.stencil(conv_s1_r_z, ((conv_s1_x_x_2*3) + conv_s1_r_x), ((conv_s1_r_y + (conv_s1_y_y*3)) + 2))))
hw_uint<16> hcompute_conv_stencil_7(hw_uint<16>& conv_stencil, hw_uint<16>& hw_input_stencil, hw_uint<16>& hw_kernel_stencil) {
  uint16_t _conv_stencil_7 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_7 = (uint16_t) hw_input_stencil.extract<0, 15>();

  uint16_t _hw_kernel_stencil_7 = (uint16_t) hw_kernel_stencil.extract<0, 15>();

  uint16_t _761 = _hw_kernel_stencil_7 * _hw_input_stencil_7;
  uint16_t _762 = _conv_stencil_7 + _761;
  return _762;
}

//store is: conv.stencil(((conv_s1_x_x_2*3) + 1), ((conv_s1_y_y*3) + 2), conv_s1_w) = (conv.stencil(((conv_s1_x_x_2*3) + 1), ((conv_s1_y_y*3) + 2), conv_s1_w) + (hw_kernel.stencil(conv_s1_r_z, conv_s1_w, conv_s1_r_x, conv_s1_r_y)*hw_input.stencil(conv_s1_r_z, (((conv_s1_x_x_2*3) + conv_s1_r_x) + 1), ((conv_s1_r_y + (conv_s1_y_y*3)) + 2))))
hw_uint<16> hcompute_conv_stencil_8(hw_uint<16>& conv_stencil, hw_uint<16>& hw_input_stencil, hw_uint<16>& hw_kernel_stencil) {
  uint16_t _conv_stencil_8 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_8 = (uint16_t) hw_input_stencil.extract<0, 15>();

  uint16_t _hw_kernel_stencil_8 = (uint16_t) hw_kernel_stencil.extract<0, 15>();

  uint16_t _776 = _hw_kernel_stencil_8 * _hw_input_stencil_8;
  uint16_t _777 = _conv_stencil_8 + _776;
  return _777;
}

//store is: conv.stencil(((conv_s1_x_x_2*3) + 2), ((conv_s1_y_y*3) + 2), conv_s1_w) = (conv.stencil(((conv_s1_x_x_2*3) + 2), ((conv_s1_y_y*3) + 2), conv_s1_w) + (hw_kernel.stencil(conv_s1_r_z, conv_s1_w, conv_s1_r_x, conv_s1_r_y)*hw_input.stencil(conv_s1_r_z, (((conv_s1_x_x_2*3) + conv_s1_r_x) + 2), ((conv_s1_r_y + (conv_s1_y_y*3)) + 2))))
hw_uint<16> hcompute_conv_stencil_9(hw_uint<16>& conv_stencil, hw_uint<16>& hw_input_stencil, hw_uint<16>& hw_kernel_stencil) {
  uint16_t _conv_stencil_9 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_9 = (uint16_t) hw_input_stencil.extract<0, 15>();

  uint16_t _hw_kernel_stencil_9 = (uint16_t) hw_kernel_stencil.extract<0, 15>();

  uint16_t _793 = _hw_kernel_stencil_9 * _hw_input_stencil_9;
  uint16_t _794 = _conv_stencil_9 + _793;
  return _794;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w) = conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_10 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_10;
}

