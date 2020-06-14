#pragma once
#include "hw_classes.h"
#include "conv_3x3.h"


//store is: padded16.stencil(padded16.s0.x, padded16.s0.y) = hw_input_copy.stencil(padded16.s0.x, padded16.s0.y)
hw_uint<16> hcompute_padded16_stencil(hw_uint<16>& hw_input_copy_stencil) {
  return hw_input_copy_stencil;
}

//store is: grad_x.stencil(grad_x.s0.x, grad_x.s0.y) = max(min(((((padded16.stencil((grad_x.s0.x + 1), (grad_x.s0.y + -1)) + (padded16.stencil((grad_x.s0.x + 1), (grad_x.s0.y + 1)) + (padded16.stencil((grad_x.s0.x + 1), grad_x.s0.y)*(int16)2))) - padded16.stencil((grad_x.s0.x + -1), (grad_x.s0.y + -1))) - (padded16.stencil((grad_x.s0.x + -1), grad_x.s0.y)*(int16)2)) - padded16.stencil((grad_x.s0.x + -1), (grad_x.s0.y + 1))), (int16)255), (int16)-255)
hw_uint<16> hcompute_grad_x_stencil(hw_uint<96>& padded16_stencil) {
  hw_uint<16> padded16_stencil_1 = padded16_stencil.extract<0, 15>();
  hw_uint<16> padded16_stencil_2 = padded16_stencil.extract<16, 31>();
  hw_uint<16> padded16_stencil_3 = padded16_stencil.extract<32, 47>();
  hw_uint<16> padded16_stencil_4 = padded16_stencil.extract<48, 63>();
  hw_uint<16> padded16_stencil_5 = padded16_stencil.extract<64, 79>();
  hw_uint<16> padded16_stencil_6 = padded16_stencil.extract<80, 95>();

  return max(min(((((padded16_stencil_1 + (padded16_stencil_2 + (padded16_stencil_3*(int16)2))) - padded16_stencil_4) - (padded16_stencil_5*(int16)2)) - padded16_stencil_6), (int16)255), (int16)-255);
}

//store is: lxx.stencil(lxx.s0.x, lxx.s0.y) = ((int32(grad_x.stencil(lxx.s0.x, lxx.s0.y))*int32(grad_x.stencil(lxx.s0.x, lxx.s0.y)))/128)
hw_uint<16> hcompute_lxx_stencil(hw_uint<16>& grad_x_stencil) {
  return ((int32(grad_x_stencil)*int32(grad_x_stencil))/128);
}

//store is: lgxx.stencil(lgxx.s0.x, lgxx.s0.y) = 0
hw_uint<16> hcompute_lgxx_stencil() {
  return 0;
}

//store is: lgxx.stencil(lgxx.s1.x, lgxx.s1.y) = (lxx.stencil((lgxx.s1.x + -1), (lgxx.s1.y + -1)) + (lgxx.stencil(lgxx.s1.x, lgxx.s1.y) + (lxx.stencil(lgxx.s1.x, (lgxx.s1.y + -1)) + (lxx.stencil((lgxx.s1.x + 1), (lgxx.s1.y + -1)) + (lxx.stencil((lgxx.s1.x + -1), lgxx.s1.y) + (lxx.stencil(lgxx.s1.x, lgxx.s1.y) + (lxx.stencil((lgxx.s1.x + 1), lgxx.s1.y) + (lxx.stencil((lgxx.s1.x + -1), (lgxx.s1.y + 1)) + (lxx.stencil((lgxx.s1.x + 1), (lgxx.s1.y + 1)) + lxx.stencil(lgxx.s1.x, (lgxx.s1.y + 1)))))))))))
hw_uint<16> hcompute_lgxx_stencil_1(hw_uint<16>& lgxx_stencil, hw_uint<144>& lxx_stencil) {
  hw_uint<16> lxx_stencil_1 = lxx_stencil.extract<0, 15>();
  hw_uint<16> lxx_stencil_2 = lxx_stencil.extract<16, 31>();
  hw_uint<16> lxx_stencil_3 = lxx_stencil.extract<32, 47>();
  hw_uint<16> lxx_stencil_4 = lxx_stencil.extract<48, 63>();
  hw_uint<16> lxx_stencil_5 = lxx_stencil.extract<64, 79>();
  hw_uint<16> lxx_stencil_6 = lxx_stencil.extract<80, 95>();
  hw_uint<16> lxx_stencil_7 = lxx_stencil.extract<96, 111>();
  hw_uint<16> lxx_stencil_8 = lxx_stencil.extract<112, 127>();
  hw_uint<16> lxx_stencil_9 = lxx_stencil.extract<128, 143>();

  return (lxx_stencil_1 + (lgxx_stencil + (lxx_stencil_2 + (lxx_stencil_3 + (lxx_stencil_4 + (lxx_stencil_5 + (lxx_stencil_6 + (lxx_stencil_7 + (lxx_stencil_8 + lxx_stencil_9)))))))));
}

//store is: grad_y.stencil(grad_y.s0.x, grad_y.s0.y) = max(min(((((padded16.stencil((grad_y.s0.x + -1), (grad_y.s0.y + 1)) + (padded16.stencil((grad_y.s0.x + 1), (grad_y.s0.y + 1)) + (padded16.stencil(grad_y.s0.x, (grad_y.s0.y + 1))*(int16)2))) - padded16.stencil((grad_y.s0.x + -1), (grad_y.s0.y + -1))) - (padded16.stencil(grad_y.s0.x, (grad_y.s0.y + -1))*(int16)2)) - padded16.stencil((grad_y.s0.x + 1), (grad_y.s0.y + -1))), (int16)255), (int16)-255)
hw_uint<16> hcompute_grad_y_stencil(hw_uint<96>& padded16_stencil) {
  hw_uint<16> padded16_stencil_10 = padded16_stencil.extract<0, 15>();
  hw_uint<16> padded16_stencil_11 = padded16_stencil.extract<16, 31>();
  hw_uint<16> padded16_stencil_12 = padded16_stencil.extract<32, 47>();
  hw_uint<16> padded16_stencil_7 = padded16_stencil.extract<48, 63>();
  hw_uint<16> padded16_stencil_8 = padded16_stencil.extract<64, 79>();
  hw_uint<16> padded16_stencil_9 = padded16_stencil.extract<80, 95>();

  return max(min(((((padded16_stencil_7 + (padded16_stencil_8 + (padded16_stencil_9*(int16)2))) - padded16_stencil_10) - (padded16_stencil_11*(int16)2)) - padded16_stencil_12), (int16)255), (int16)-255);
}

//store is: lxy.stencil(lxy.s0.x, lxy.s0.y) = ((int32(grad_x.stencil(lxy.s0.x, lxy.s0.y))*int32(grad_y.stencil(lxy.s0.x, lxy.s0.y)))/128)
hw_uint<16> hcompute_lxy_stencil(hw_uint<16>& grad_x_stencil, hw_uint<16>& grad_y_stencil) {
  return ((int32(grad_x_stencil)*int32(grad_y_stencil))/128);
}

//store is: lgxy.stencil(lgxy.s0.x, lgxy.s0.y) = 0
hw_uint<16> hcompute_lgxy_stencil() {
  return 0;
}

//store is: lgxy.stencil(lgxy.s1.x, lgxy.s1.y) = (lxy.stencil((lgxy.s1.x + -1), (lgxy.s1.y + -1)) + (lgxy.stencil(lgxy.s1.x, lgxy.s1.y) + (lxy.stencil(lgxy.s1.x, (lgxy.s1.y + -1)) + (lxy.stencil((lgxy.s1.x + 1), (lgxy.s1.y + -1)) + (lxy.stencil((lgxy.s1.x + -1), lgxy.s1.y) + (lxy.stencil(lgxy.s1.x, lgxy.s1.y) + (lxy.stencil((lgxy.s1.x + 1), lgxy.s1.y) + (lxy.stencil((lgxy.s1.x + -1), (lgxy.s1.y + 1)) + (lxy.stencil((lgxy.s1.x + 1), (lgxy.s1.y + 1)) + lxy.stencil(lgxy.s1.x, (lgxy.s1.y + 1)))))))))))
hw_uint<16> hcompute_lgxy_stencil_1(hw_uint<16>& lgxy_stencil, hw_uint<144>& lxy_stencil) {
  hw_uint<16> lxy_stencil_1 = lxy_stencil.extract<0, 15>();
  hw_uint<16> lxy_stencil_2 = lxy_stencil.extract<16, 31>();
  hw_uint<16> lxy_stencil_3 = lxy_stencil.extract<32, 47>();
  hw_uint<16> lxy_stencil_4 = lxy_stencil.extract<48, 63>();
  hw_uint<16> lxy_stencil_5 = lxy_stencil.extract<64, 79>();
  hw_uint<16> lxy_stencil_6 = lxy_stencil.extract<80, 95>();
  hw_uint<16> lxy_stencil_7 = lxy_stencil.extract<96, 111>();
  hw_uint<16> lxy_stencil_8 = lxy_stencil.extract<112, 127>();
  hw_uint<16> lxy_stencil_9 = lxy_stencil.extract<128, 143>();

  return (lxy_stencil_1 + (lgxy_stencil + (lxy_stencil_2 + (lxy_stencil_3 + (lxy_stencil_4 + (lxy_stencil_5 + (lxy_stencil_6 + (lxy_stencil_7 + (lxy_stencil_8 + lxy_stencil_9)))))))));
}

//store is: lyy.stencil(lyy.s0.x, lyy.s0.y) = ((int32(grad_y.stencil(lyy.s0.x, lyy.s0.y))*int32(grad_y.stencil(lyy.s0.x, lyy.s0.y)))/128)
hw_uint<16> hcompute_lyy_stencil(hw_uint<16>& grad_y_stencil) {
  return ((int32(grad_y_stencil)*int32(grad_y_stencil))/128);
}

//store is: lgyy.stencil(lgyy.s0.x, lgyy.s0.y) = 0
hw_uint<16> hcompute_lgyy_stencil() {
  return 0;
}

//store is: lgyy.stencil(lgyy.s1.x, lgyy.s1.y) = (lyy.stencil((lgyy.s1.x + -1), (lgyy.s1.y + -1)) + (lgyy.stencil(lgyy.s1.x, lgyy.s1.y) + (lyy.stencil(lgyy.s1.x, (lgyy.s1.y + -1)) + (lyy.stencil((lgyy.s1.x + 1), (lgyy.s1.y + -1)) + (lyy.stencil((lgyy.s1.x + -1), lgyy.s1.y) + (lyy.stencil(lgyy.s1.x, lgyy.s1.y) + (lyy.stencil((lgyy.s1.x + 1), lgyy.s1.y) + (lyy.stencil((lgyy.s1.x + -1), (lgyy.s1.y + 1)) + (lyy.stencil((lgyy.s1.x + 1), (lgyy.s1.y + 1)) + lyy.stencil(lgyy.s1.x, (lgyy.s1.y + 1)))))))))))
hw_uint<16> hcompute_lgyy_stencil_1(hw_uint<16>& lgyy_stencil, hw_uint<144>& lyy_stencil) {
  hw_uint<16> lyy_stencil_1 = lyy_stencil.extract<0, 15>();
  hw_uint<16> lyy_stencil_2 = lyy_stencil.extract<16, 31>();
  hw_uint<16> lyy_stencil_3 = lyy_stencil.extract<32, 47>();
  hw_uint<16> lyy_stencil_4 = lyy_stencil.extract<48, 63>();
  hw_uint<16> lyy_stencil_5 = lyy_stencil.extract<64, 79>();
  hw_uint<16> lyy_stencil_6 = lyy_stencil.extract<80, 95>();
  hw_uint<16> lyy_stencil_7 = lyy_stencil.extract<96, 111>();
  hw_uint<16> lyy_stencil_8 = lyy_stencil.extract<112, 127>();
  hw_uint<16> lyy_stencil_9 = lyy_stencil.extract<128, 143>();

  return (lyy_stencil_1 + (lgyy_stencil + (lyy_stencil_2 + (lyy_stencil_3 + (lyy_stencil_4 + (lyy_stencil_5 + (lyy_stencil_6 + (lyy_stencil_7 + (lyy_stencil_8 + lyy_stencil_9)))))))));
}

//store is: cim.stencil(cim.s0.x, cim.s0.y) = ((((lgxx.stencil(cim.s0.x, cim.s0.y)/64)*(lgyy.stencil(cim.s0.x, cim.s0.y)/64)) - ((lgxy.stencil(cim.s0.x, cim.s0.y)/64)*(lgxy.stencil(cim.s0.x, cim.s0.y)/64))) - ((((lgxx.stencil(cim.s0.x, cim.s0.y)/64) + (lgyy.stencil(cim.s0.x, cim.s0.y)/64))*((lgxx.stencil(cim.s0.x, cim.s0.y)/64) + (lgyy.stencil(cim.s0.x, cim.s0.y)/64)))/16))
hw_uint<16> hcompute_cim_stencil(hw_uint<16>& lgxx_stencil, hw_uint<16>& lgxy_stencil, hw_uint<16>& lgyy_stencil) {
  return ((((lgxx_stencil/64)*(lgyy_stencil/64)) - ((lgxy_stencil/64)*(lgxy_stencil/64))) - ((((lgxx_stencil/64) + (lgyy_stencil/64))*((lgxx_stencil/64) + (lgyy_stencil/64)))/16));
}

//store is: cim_output.stencil(cim_output.s0.x, cim_output.s0.y) = uint8(select((((((((((cim.stencil((cim_output.s0.x + -1), (cim_output.s0.y + -1)) < cim.stencil(cim_output.s0.x, cim_output.s0.y)) && (cim.stencil(cim_output.s0.x, (cim_output.s0.y + -1)) < cim.stencil(cim_output.s0.x, cim_output.s0.y))) && (cim.stencil((cim_output.s0.x + 1), (cim_output.s0.y + -1)) < cim.stencil(cim_output.s0.x, cim_output.s0.y))) && (cim.stencil((cim_output.s0.x + -1), cim_output.s0.y) < cim.stencil(cim_output.s0.x, cim_output.s0.y))) && (cim.stencil((cim_output.s0.x + 1), cim_output.s0.y) < cim.stencil(cim_output.s0.x, cim_output.s0.y))) && (cim.stencil((cim_output.s0.x + -1), (cim_output.s0.y + 1)) < cim.stencil(cim_output.s0.x, cim_output.s0.y))) && (cim.stencil(cim_output.s0.x, (cim_output.s0.y + 1)) < cim.stencil(cim_output.s0.x, cim_output.s0.y))) && (cim.stencil((cim_output.s0.x + 1), (cim_output.s0.y + 1)) < cim.stencil(cim_output.s0.x, cim_output.s0.y))) && (1 <= cim.stencil(cim_output.s0.x, cim_output.s0.y))), 255, 0))
hw_uint<16> hcompute_cim_output_stencil(hw_uint<144>& cim_stencil) {
  hw_uint<16> cim_stencil_1 = cim_stencil.extract<0, 15>();
  hw_uint<16> cim_stencil_2 = cim_stencil.extract<16, 31>();
  hw_uint<16> cim_stencil_3 = cim_stencil.extract<32, 47>();
  hw_uint<16> cim_stencil_4 = cim_stencil.extract<48, 63>();
  hw_uint<16> cim_stencil_5 = cim_stencil.extract<64, 79>();
  hw_uint<16> cim_stencil_6 = cim_stencil.extract<80, 95>();
  hw_uint<16> cim_stencil_7 = cim_stencil.extract<96, 111>();
  hw_uint<16> cim_stencil_8 = cim_stencil.extract<112, 127>();
  hw_uint<16> cim_stencil_9 = cim_stencil.extract<128, 143>();

  return uint8(select((((((((((cim_stencil_1 < cim_stencil_2) && (cim_stencil_3 < cim_stencil_2)) && (cim_stencil_4 < cim_stencil_2)) && (cim_stencil_5 < cim_stencil_2)) && (cim_stencil_6 < cim_stencil_2)) && (cim_stencil_7 < cim_stencil_2)) && (cim_stencil_8 < cim_stencil_2)) && (cim_stencil_9 < cim_stencil_2)) && (1 <= cim_stencil_2)), 255, 0));
}

//store is: hw_output.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi) = cim_output.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& cim_output_stencil) {
  return cim_output_stencil;
}

