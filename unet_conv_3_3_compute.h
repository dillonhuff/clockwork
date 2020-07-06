#pragma once
#include "hw_classes.h"
#include "conv_3x3.h"


//store is: hw_input.stencil(hw_input.s0.z, hw_input.s0.x, hw_input.s0.y) = input_copy.stencil(hw_input.s0.z, hw_input.s0.x, hw_input.s0.y)
hw_uint<16> hcompute_hw_input_stencil(hw_uint<16>& input_copy_stencil) {
  uint16_t _input_copy_stencil_1 = (uint16_t) input_copy_stencil.extract<0, 15>();

  return _input_copy_stencil_1;
}

//store is: hw_kernel.stencil(hw_kernel.s0.z, hw_kernel.s0.w, hw_kernel.s0.x, hw_kernel.s0.y) = kernel_copy.stencil(hw_kernel.s0.z, hw_kernel.s0.w, hw_kernel.s0.x, hw_kernel.s0.y)
hw_uint<16> hcompute_hw_kernel_stencil(hw_uint<16>& kernel_copy_stencil) {
  uint16_t _kernel_copy_stencil_1 = (uint16_t) kernel_copy_stencil.extract<0, 15>();

  return _kernel_copy_stencil_1;
}

//store is: conv.stencil(conv.s0.x, conv.s0.y, conv.s0.w) = (uint16)0
hw_uint<16> hcompute_conv_stencil() {
  uint16_t _656 = (uint16_t)(0);
  return _656;
}

//store is: conv.stencil((conv.s1.x.x*3), (conv.s1.y.y*3), conv.s1.w) = (conv.stencil((conv.s1.x.x*3), (conv.s1.y.y*3), conv.s1.w) + (hw_kernel.stencil(conv.s1.r$z, conv.s1.w, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(conv.s1.r$z, ((conv.s1.x.x*3) + conv.s1.r$x), (conv.s1.r$y + (conv.s1.y.y*3)))))
hw_uint<16> hcompute_conv_stencil_1(hw_uint<16>& conv_stencil, hw_uint<16>& hw_input_stencil, hw_uint<16>& hw_kernel_stencil) {
  uint16_t _conv_stencil_1 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();

  uint16_t _hw_kernel_stencil_1 = (uint16_t) hw_kernel_stencil.extract<0, 15>();

  uint16_t _659 = _hw_kernel_stencil_1 * _hw_input_stencil_1;
  uint16_t _660 = _conv_stencil_1 + _659;
  return _660;
}

//store is: conv.stencil(((conv.s1.x.x*3) + 1), (conv.s1.y.y*3), conv.s1.w) = (conv.stencil(((conv.s1.x.x*3) + 1), (conv.s1.y.y*3), conv.s1.w) + (hw_kernel.stencil(conv.s1.r$z, conv.s1.w, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(conv.s1.r$z, (((conv.s1.x.x*3) + conv.s1.r$x) + 1), (conv.s1.r$y + (conv.s1.y.y*3)))))
hw_uint<16> hcompute_conv_stencil_2(hw_uint<16>& conv_stencil, hw_uint<16>& hw_input_stencil, hw_uint<16>& hw_kernel_stencil) {
  uint16_t _conv_stencil_2 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_2 = (uint16_t) hw_input_stencil.extract<0, 15>();

  uint16_t _hw_kernel_stencil_2 = (uint16_t) hw_kernel_stencil.extract<0, 15>();

  uint16_t _672 = _hw_kernel_stencil_2 * _hw_input_stencil_2;
  uint16_t _673 = _conv_stencil_2 + _672;
  return _673;
}

//store is: conv.stencil(((conv.s1.x.x*3) + 2), (conv.s1.y.y*3), conv.s1.w) = (conv.stencil(((conv.s1.x.x*3) + 2), (conv.s1.y.y*3), conv.s1.w) + (hw_kernel.stencil(conv.s1.r$z, conv.s1.w, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(conv.s1.r$z, (((conv.s1.x.x*3) + conv.s1.r$x) + 2), (conv.s1.r$y + (conv.s1.y.y*3)))))
hw_uint<16> hcompute_conv_stencil_3(hw_uint<16>& conv_stencil, hw_uint<16>& hw_input_stencil, hw_uint<16>& hw_kernel_stencil) {
  uint16_t _conv_stencil_3 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_3 = (uint16_t) hw_input_stencil.extract<0, 15>();

  uint16_t _hw_kernel_stencil_3 = (uint16_t) hw_kernel_stencil.extract<0, 15>();

  uint16_t _687 = _hw_kernel_stencil_3 * _hw_input_stencil_3;
  uint16_t _688 = _conv_stencil_3 + _687;
  return _688;
}

//store is: conv.stencil((conv.s1.x.x*3), ((conv.s1.y.y*3) + 1), conv.s1.w) = (conv.stencil((conv.s1.x.x*3), ((conv.s1.y.y*3) + 1), conv.s1.w) + (hw_kernel.stencil(conv.s1.r$z, conv.s1.w, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(conv.s1.r$z, ((conv.s1.x.x*3) + conv.s1.r$x), ((conv.s1.r$y + (conv.s1.y.y*3)) + 1))))
hw_uint<16> hcompute_conv_stencil_4(hw_uint<16>& conv_stencil, hw_uint<16>& hw_input_stencil, hw_uint<16>& hw_kernel_stencil) {
  uint16_t _conv_stencil_4 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_4 = (uint16_t) hw_input_stencil.extract<0, 15>();

  uint16_t _hw_kernel_stencil_4 = (uint16_t) hw_kernel_stencil.extract<0, 15>();

  uint16_t _702 = _hw_kernel_stencil_4 * _hw_input_stencil_4;
  uint16_t _703 = _conv_stencil_4 + _702;
  return _703;
}

//store is: conv.stencil(((conv.s1.x.x*3) + 1), ((conv.s1.y.y*3) + 1), conv.s1.w) = (conv.stencil(((conv.s1.x.x*3) + 1), ((conv.s1.y.y*3) + 1), conv.s1.w) + (hw_kernel.stencil(conv.s1.r$z, conv.s1.w, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(conv.s1.r$z, (((conv.s1.x.x*3) + conv.s1.r$x) + 1), ((conv.s1.r$y + (conv.s1.y.y*3)) + 1))))
hw_uint<16> hcompute_conv_stencil_5(hw_uint<16>& conv_stencil, hw_uint<16>& hw_input_stencil, hw_uint<16>& hw_kernel_stencil) {
  uint16_t _conv_stencil_5 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_5 = (uint16_t) hw_input_stencil.extract<0, 15>();

  uint16_t _hw_kernel_stencil_5 = (uint16_t) hw_kernel_stencil.extract<0, 15>();

  uint16_t _717 = _hw_kernel_stencil_5 * _hw_input_stencil_5;
  uint16_t _718 = _conv_stencil_5 + _717;
  return _718;
}

//store is: conv.stencil(((conv.s1.x.x*3) + 2), ((conv.s1.y.y*3) + 1), conv.s1.w) = (conv.stencil(((conv.s1.x.x*3) + 2), ((conv.s1.y.y*3) + 1), conv.s1.w) + (hw_kernel.stencil(conv.s1.r$z, conv.s1.w, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(conv.s1.r$z, (((conv.s1.x.x*3) + conv.s1.r$x) + 2), ((conv.s1.r$y + (conv.s1.y.y*3)) + 1))))
hw_uint<16> hcompute_conv_stencil_6(hw_uint<16>& conv_stencil, hw_uint<16>& hw_input_stencil, hw_uint<16>& hw_kernel_stencil) {
  uint16_t _conv_stencil_6 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_6 = (uint16_t) hw_input_stencil.extract<0, 15>();

  uint16_t _hw_kernel_stencil_6 = (uint16_t) hw_kernel_stencil.extract<0, 15>();

  uint16_t _734 = _hw_kernel_stencil_6 * _hw_input_stencil_6;
  uint16_t _735 = _conv_stencil_6 + _734;
  return _735;
}

//store is: conv.stencil((conv.s1.x.x*3), ((conv.s1.y.y*3) + 2), conv.s1.w) = (conv.stencil((conv.s1.x.x*3), ((conv.s1.y.y*3) + 2), conv.s1.w) + (hw_kernel.stencil(conv.s1.r$z, conv.s1.w, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(conv.s1.r$z, ((conv.s1.x.x*3) + conv.s1.r$x), ((conv.s1.r$y + (conv.s1.y.y*3)) + 2))))
hw_uint<16> hcompute_conv_stencil_7(hw_uint<16>& conv_stencil, hw_uint<16>& hw_input_stencil, hw_uint<16>& hw_kernel_stencil) {
  uint16_t _conv_stencil_7 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_7 = (uint16_t) hw_input_stencil.extract<0, 15>();

  uint16_t _hw_kernel_stencil_7 = (uint16_t) hw_kernel_stencil.extract<0, 15>();

  uint16_t _751 = _hw_kernel_stencil_7 * _hw_input_stencil_7;
  uint16_t _752 = _conv_stencil_7 + _751;
  return _752;
}

//store is: conv.stencil(((conv.s1.x.x*3) + 1), ((conv.s1.y.y*3) + 2), conv.s1.w) = (conv.stencil(((conv.s1.x.x*3) + 1), ((conv.s1.y.y*3) + 2), conv.s1.w) + (hw_kernel.stencil(conv.s1.r$z, conv.s1.w, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(conv.s1.r$z, (((conv.s1.x.x*3) + conv.s1.r$x) + 1), ((conv.s1.r$y + (conv.s1.y.y*3)) + 2))))
hw_uint<16> hcompute_conv_stencil_8(hw_uint<16>& conv_stencil, hw_uint<16>& hw_input_stencil, hw_uint<16>& hw_kernel_stencil) {
  uint16_t _conv_stencil_8 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_8 = (uint16_t) hw_input_stencil.extract<0, 15>();

  uint16_t _hw_kernel_stencil_8 = (uint16_t) hw_kernel_stencil.extract<0, 15>();

  uint16_t _766 = _hw_kernel_stencil_8 * _hw_input_stencil_8;
  uint16_t _767 = _conv_stencil_8 + _766;
  return _767;
}

//store is: conv.stencil(((conv.s1.x.x*3) + 2), ((conv.s1.y.y*3) + 2), conv.s1.w) = (conv.stencil(((conv.s1.x.x*3) + 2), ((conv.s1.y.y*3) + 2), conv.s1.w) + (hw_kernel.stencil(conv.s1.r$z, conv.s1.w, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(conv.s1.r$z, (((conv.s1.x.x*3) + conv.s1.r$x) + 2), ((conv.s1.r$y + (conv.s1.y.y*3)) + 2))))
hw_uint<16> hcompute_conv_stencil_9(hw_uint<16>& conv_stencil, hw_uint<16>& hw_input_stencil, hw_uint<16>& hw_kernel_stencil) {
  uint16_t _conv_stencil_9 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_9 = (uint16_t) hw_input_stencil.extract<0, 15>();

  uint16_t _hw_kernel_stencil_9 = (uint16_t) hw_kernel_stencil.extract<0, 15>();

  uint16_t _783 = _hw_kernel_stencil_9 * _hw_input_stencil_9;
  uint16_t _784 = _conv_stencil_9 + _783;
  return _784;
}

//store is: hw_output.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi, hw_output.s0.w) = uint8(conv.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi, hw_output.s0.w))
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_10 = (uint16_t) conv_stencil.extract<0, 15>();

  uint8_t _800 = (uint8_t)(_conv_stencil_10);
  return _800;
}

