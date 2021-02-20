#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: dec1_weights_3_im_global_wrapper_global_wrapper.stencil((dec1_weights_3_im_global_wrapper_global_wrapper_s0__0 + 2), 0, 0, dec1_weights_3_im_global_wrapper_global_wrapper_s0__3) = dec1_weights_3_im_global_wrapper.stencil(dec1_weights_3_im_global_wrapper_global_wrapper_s0__0, 0, 0, dec1_weights_3_im_global_wrapper_global_wrapper_s0__3)
hw_uint<32> hcompute_dec1_weights_3_im_global_wrapper_global_wrapper_stencil(hw_uint<32>& dec1_weights_3_im_global_wrapper_stencil) {
  float _dec1_weights_3_im_global_wrapper_stencil_1 = (float) dec1_weights_3_im_global_wrapper_stencil.extract<0, 31>();

  return _dec1_weights_3_im_global_wrapper_stencil_1;
}

//store is: dec2_weights_3_im_global_wrapper_global_wrapper.stencil((dec2_weights_3_im_global_wrapper_global_wrapper_s0__0 + 1), 0, 0, dec2_weights_3_im_global_wrapper_global_wrapper_s0__3) = dec2_weights_3_im_global_wrapper.stencil(dec2_weights_3_im_global_wrapper_global_wrapper_s0__0, 0, 0, dec2_weights_3_im_global_wrapper_global_wrapper_s0__3)
hw_uint<32> hcompute_dec2_weights_3_im_global_wrapper_global_wrapper_stencil(hw_uint<32>& dec2_weights_3_im_global_wrapper_stencil) {
  float _dec2_weights_3_im_global_wrapper_stencil_1 = (float) dec2_weights_3_im_global_wrapper_stencil.extract<0, 31>();

  return _dec2_weights_3_im_global_wrapper_stencil_1;
}

//store is: dec3_weights_3_im_global_wrapper_global_wrapper.stencil((dec3_weights_3_im_global_wrapper_global_wrapper_s0__0 + 1), 0, 0, dec3_weights_3_im_global_wrapper_global_wrapper_s0__3) = dec3_weights_3_im_global_wrapper.stencil(dec3_weights_3_im_global_wrapper_global_wrapper_s0__0, 0, 0, dec3_weights_3_im_global_wrapper_global_wrapper_s0__3)
hw_uint<32> hcompute_dec3_weights_3_im_global_wrapper_global_wrapper_stencil(hw_uint<32>& dec3_weights_3_im_global_wrapper_stencil) {
  float _dec3_weights_3_im_global_wrapper_stencil_1 = (float) dec3_weights_3_im_global_wrapper_stencil.extract<0, 31>();

  return _dec3_weights_3_im_global_wrapper_stencil_1;
}

//store is: input_im_global_wrapper_global_wrapper.stencil(input_im_global_wrapper_global_wrapper_s0__0, input_im_global_wrapper_global_wrapper_s0__1, (input_im_global_wrapper_global_wrapper_s0__2 + 343)) = input_im_global_wrapper.stencil(input_im_global_wrapper_global_wrapper_s0__0, input_im_global_wrapper_global_wrapper_s0__1, input_im_global_wrapper_global_wrapper_s0__2)
hw_uint<32> hcompute_input_im_global_wrapper_global_wrapper_stencil(hw_uint<32>& input_im_global_wrapper_stencil) {
  float _input_im_global_wrapper_stencil_1 = (float) input_im_global_wrapper_stencil.extract<0, 31>();

  return _input_im_global_wrapper_stencil_1;
}

//store is: conv1_weights_im_global_wrapper_global_wrapper.stencil(conv1_weights_im_global_wrapper_global_wrapper_s0__0, conv1_weights_im_global_wrapper_global_wrapper_s0__1, conv1_weights_im_global_wrapper_global_wrapper_s0__2, conv1_weights_im_global_wrapper_global_wrapper_s0__3) = conv1_weights_im_global_wrapper.stencil(conv1_weights_im_global_wrapper_global_wrapper_s0__0, conv1_weights_im_global_wrapper_global_wrapper_s0__1, conv1_weights_im_global_wrapper_global_wrapper_s0__2, conv1_weights_im_global_wrapper_global_wrapper_s0__3)
hw_uint<32> hcompute_conv1_weights_im_global_wrapper_global_wrapper_stencil(hw_uint<32>& conv1_weights_im_global_wrapper_stencil) {
  float _conv1_weights_im_global_wrapper_stencil_1 = (float) conv1_weights_im_global_wrapper_stencil.extract<0, 31>();

  return _conv1_weights_im_global_wrapper_stencil_1;
}

//store is: conv_mu_0_im_global_wrapper_global_wrapper.stencil(conv_mu_0_im_global_wrapper_global_wrapper_s0__0) = conv_mu_0_im_global_wrapper.stencil(conv_mu_0_im_global_wrapper_global_wrapper_s0__0)
hw_uint<32> hcompute_conv_mu_0_im_global_wrapper_global_wrapper_stencil(hw_uint<32>& conv_mu_0_im_global_wrapper_stencil) {
  float _conv_mu_0_im_global_wrapper_stencil_1 = (float) conv_mu_0_im_global_wrapper_stencil.extract<0, 31>();

  return _conv_mu_0_im_global_wrapper_stencil_1;
}

//store is: conv_sigma_0_im_global_wrapper_global_wrapper.stencil(conv_sigma_0_im_global_wrapper_global_wrapper_s0__0) = conv_sigma_0_im_global_wrapper.stencil(conv_sigma_0_im_global_wrapper_global_wrapper_s0__0)
hw_uint<32> hcompute_conv_sigma_0_im_global_wrapper_global_wrapper_stencil(hw_uint<32>& conv_sigma_0_im_global_wrapper_stencil) {
  float _conv_sigma_0_im_global_wrapper_stencil_1 = (float) conv_sigma_0_im_global_wrapper_stencil.extract<0, 31>();

  return _conv_sigma_0_im_global_wrapper_stencil_1;
}

//store is: conv1.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_conv1_stencil() {
  float _9039 = float_from_bits(0 /* 0 */);
  return _9039;
}

//store is: conv1.stencil(0, 0, 0) = (conv1.stencil(0, 0, 0) + (conv1_weights_im_global_wrapper_global_wrapper.stencil(conv1_relu_s0_c, conv1_s1_r_y, conv1_s1_r_z, conv1_s1_r_x)*select((conv1_s1_r_y < 1), 0.000000f, input_im_global_wrapper_global_wrapper.stencil(conv1_s1_r_x, (max(conv1_s1_r_y, 1) + -1), (((conv1_relu_s0_j*2) + conv1_s1_r_z) + 342)))))
hw_uint<32> hcompute_conv1_stencil_1(hw_uint<32>& conv1_stencil, hw_uint<32>& conv1_weights_im_global_wrapper_global_wrapper_stencil, hw_uint<32>& input_im_global_wrapper_global_wrapper_stencil, const int _conv1_s1_r_y) {
  float _conv1_stencil_1 = (float) conv1_stencil.extract<0, 31>();

  float _conv1_weights_im_global_wrapper_global_wrapper_stencil_1 = (float) conv1_weights_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _input_im_global_wrapper_global_wrapper_stencil_1 = (float) input_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9042 = float_from_bits(0 /* 0 */);
  bool _9043 = _conv1_s1_r_y < 1;
  float _9044 = (float)(_9043 ? _9042 : _input_im_global_wrapper_global_wrapper_stencil_1);
  float _9045 = _conv1_weights_im_global_wrapper_global_wrapper_stencil_1 * _9044;
  float _9046 = _conv1_stencil_1 + _9045;
  return _9046;
}

//store is: conv1_relu.stencil(conv1_relu_s0_c, 0, (conv1_relu_s0_j + 171)) = max(((conv1.stencil(0, 0, 0) - conv_mu_0_im_global_wrapper_global_wrapper.stencil(conv1_relu_s0_c))/sqrt_f32((conv_sigma_0_im_global_wrapper_global_wrapper.stencil(conv1_relu_s0_c) + 0.000010f))), 0.000000f)
hw_uint<32> hcompute_conv1_relu_stencil(hw_uint<32>& conv1_stencil, hw_uint<32>& conv_mu_0_im_global_wrapper_global_wrapper_stencil, hw_uint<32>& conv_sigma_0_im_global_wrapper_global_wrapper_stencil) {
  float _conv1_stencil_2 = (float) conv1_stencil.extract<0, 31>();

  float _conv_mu_0_im_global_wrapper_global_wrapper_stencil_1 = (float) conv_mu_0_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _conv_sigma_0_im_global_wrapper_global_wrapper_stencil_1 = (float) conv_sigma_0_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9065 = _conv1_stencil_2 - _conv_mu_0_im_global_wrapper_global_wrapper_stencil_1;
  float _9066 = float_from_bits(925353388 /* 1e-05 */);
  float _9067 = _conv_sigma_0_im_global_wrapper_global_wrapper_stencil_1 + _9066;
  float _9068 = sqrtf(_9067);
  float _9069 = _9065 / _9068;
  float _9070 = float_from_bits(0 /* 0 */);
  float _9071 = max(_9069, _9070);
  return _9071;
}

//store is: conv1.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_conv1_stencil_2() {
  float _9090 = float_from_bits(0 /* 0 */);
  return _9090;
}

//store is: conv1.stencil(0, 0, 0) = (conv1.stencil(0, 0, 0) + (conv1_weights_im_global_wrapper_global_wrapper.stencil(conv1_relu_s0_c_1, conv1_s1_r_y_1, conv1_s1_r_z_1, conv1_s1_r_x_1)*input_im_global_wrapper_global_wrapper.stencil(conv1_s1_r_x_1, (((conv1_relu_s0_i*2) + conv1_s1_r_y_1) + -1), (((conv1_relu_s0_j*2) + conv1_s1_r_z_1) + 342))))
hw_uint<32> hcompute_conv1_stencil_3(hw_uint<32>& conv1_stencil, hw_uint<32>& conv1_weights_im_global_wrapper_global_wrapper_stencil, hw_uint<32>& input_im_global_wrapper_global_wrapper_stencil) {
  float _conv1_stencil_3 = (float) conv1_stencil.extract<0, 31>();

  float _conv1_weights_im_global_wrapper_global_wrapper_stencil_2 = (float) conv1_weights_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _input_im_global_wrapper_global_wrapper_stencil_2 = (float) input_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9093 = _conv1_weights_im_global_wrapper_global_wrapper_stencil_2 * _input_im_global_wrapper_global_wrapper_stencil_2;
  float _9094 = _conv1_stencil_3 + _9093;
  return _9094;
}

//store is: conv1_relu.stencil(conv1_relu_s0_c_1, conv1_relu_s0_i, (conv1_relu_s0_j + 171)) = max(((conv1.stencil(0, 0, 0) - conv_mu_0_im_global_wrapper_global_wrapper.stencil(conv1_relu_s0_c_1))/sqrt_f32((conv_sigma_0_im_global_wrapper_global_wrapper.stencil(conv1_relu_s0_c_1) + 0.000010f))), 0.000000f)
hw_uint<32> hcompute_conv1_relu_stencil_1(hw_uint<32>& conv1_stencil, hw_uint<32>& conv_mu_0_im_global_wrapper_global_wrapper_stencil, hw_uint<32>& conv_sigma_0_im_global_wrapper_global_wrapper_stencil) {
  float _conv1_stencil_4 = (float) conv1_stencil.extract<0, 31>();

  float _conv_mu_0_im_global_wrapper_global_wrapper_stencil_2 = (float) conv_mu_0_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _conv_sigma_0_im_global_wrapper_global_wrapper_stencil_2 = (float) conv_sigma_0_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9108 = _conv1_stencil_4 - _conv_mu_0_im_global_wrapper_global_wrapper_stencil_2;
  float _9109 = float_from_bits(925353388 /* 1e-05 */);
  float _9110 = _conv_sigma_0_im_global_wrapper_global_wrapper_stencil_2 + _9109;
  float _9111 = sqrtf(_9110);
  float _9112 = _9108 / _9111;
  float _9113 = float_from_bits(0 /* 0 */);
  float _9114 = max(_9112, _9113);
  return _9114;
}

//store is: conv2_weights_im_global_wrapper_global_wrapper.stencil(conv2_weights_im_global_wrapper_global_wrapper_s0__0, conv2_weights_im_global_wrapper_global_wrapper_s0__1, conv2_weights_im_global_wrapper_global_wrapper_s0__2, conv2_weights_im_global_wrapper_global_wrapper_s0__3) = conv2_weights_im_global_wrapper.stencil(conv2_weights_im_global_wrapper_global_wrapper_s0__0, conv2_weights_im_global_wrapper_global_wrapper_s0__1, conv2_weights_im_global_wrapper_global_wrapper_s0__2, conv2_weights_im_global_wrapper_global_wrapper_s0__3)
hw_uint<32> hcompute_conv2_weights_im_global_wrapper_global_wrapper_stencil(hw_uint<32>& conv2_weights_im_global_wrapper_stencil) {
  float _conv2_weights_im_global_wrapper_stencil_1 = (float) conv2_weights_im_global_wrapper_stencil.extract<0, 31>();

  return _conv2_weights_im_global_wrapper_stencil_1;
}

//store is: conv_mu_1_im_global_wrapper_global_wrapper.stencil(conv_mu_1_im_global_wrapper_global_wrapper_s0__0) = conv_mu_1_im_global_wrapper.stencil(conv_mu_1_im_global_wrapper_global_wrapper_s0__0)
hw_uint<32> hcompute_conv_mu_1_im_global_wrapper_global_wrapper_stencil(hw_uint<32>& conv_mu_1_im_global_wrapper_stencil) {
  float _conv_mu_1_im_global_wrapper_stencil_1 = (float) conv_mu_1_im_global_wrapper_stencil.extract<0, 31>();

  return _conv_mu_1_im_global_wrapper_stencil_1;
}

//store is: conv_sigma_1_im_global_wrapper_global_wrapper.stencil(conv_sigma_1_im_global_wrapper_global_wrapper_s0__0_2) = conv_sigma_1_im_global_wrapper.stencil(conv_sigma_1_im_global_wrapper_global_wrapper_s0__0_2)
hw_uint<32> hcompute_conv_sigma_1_im_global_wrapper_global_wrapper_stencil(hw_uint<32>& conv_sigma_1_im_global_wrapper_stencil) {
  float _conv_sigma_1_im_global_wrapper_stencil_1 = (float) conv_sigma_1_im_global_wrapper_stencil.extract<0, 31>();

  return _conv_sigma_1_im_global_wrapper_stencil_1;
}

//store is: conv2.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_conv2_stencil() {
  float _9136 = float_from_bits(0 /* 0 */);
  return _9136;
}

//store is: conv2.stencil(0, 0, 0) = (conv2.stencil(0, 0, 0) + (conv2_weights_im_global_wrapper_global_wrapper.stencil(conv2_relu_s0_c, conv2_s1_r_1_y, conv2_s1_r_1_z, conv2_s1_r_1_x)*select((((conv2_relu_s0_i*2) + conv2_s1_r_1_y) < 1), 0.000000f, conv1_relu.stencil(conv2_s1_r_1_x, (max(((conv2_relu_s0_i*2) + conv2_s1_r_1_y), 1) + -1), (((conv2_relu_s0_j*2) + conv2_s1_r_1_z) + 170)))))
hw_uint<32> hcompute_conv2_stencil_1(hw_uint<32>& conv1_relu_stencil, hw_uint<32>& conv2_stencil, hw_uint<32>& conv2_weights_im_global_wrapper_global_wrapper_stencil, const int _conv2_relu_s0_i, const int _conv2_s1_r_1_y) {
  float _conv1_relu_stencil_1 = (float) conv1_relu_stencil.extract<0, 31>();

  float _conv2_stencil_1 = (float) conv2_stencil.extract<0, 31>();

  float _conv2_weights_im_global_wrapper_global_wrapper_stencil_1 = (float) conv2_weights_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9139 = float_from_bits(0 /* 0 */);
  int32_t _9140 = _conv2_relu_s0_i * 2;
  int32_t _9141 = _9140 + _conv2_s1_r_1_y;
  bool _9142 = _9141 < 1;
  float _9143 = (float)(_9142 ? _9139 : _conv1_relu_stencil_1);
  float _9144 = _conv2_weights_im_global_wrapper_global_wrapper_stencil_1 * _9143;
  float _9145 = _conv2_stencil_1 + _9144;
  return _9145;
}

//store is: conv2_relu.stencil(conv2_relu_s0_c, (conv2_relu_s0_i + 16), (conv2_relu_s0_j + 85)) = max(((conv2.stencil(0, 0, 0) - conv_mu_1_im_global_wrapper_global_wrapper.stencil(conv2_relu_s0_c))/sqrt_f32((conv_sigma_1_im_global_wrapper_global_wrapper.stencil(conv2_relu_s0_c) + 0.000010f))), 0.000000f)
hw_uint<32> hcompute_conv2_relu_stencil(hw_uint<32>& conv2_stencil, hw_uint<32>& conv_mu_1_im_global_wrapper_global_wrapper_stencil, hw_uint<32>& conv_sigma_1_im_global_wrapper_global_wrapper_stencil) {
  float _conv2_stencil_2 = (float) conv2_stencil.extract<0, 31>();

  float _conv_mu_1_im_global_wrapper_global_wrapper_stencil_1 = (float) conv_mu_1_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _conv_sigma_1_im_global_wrapper_global_wrapper_stencil_1 = (float) conv_sigma_1_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9168 = _conv2_stencil_2 - _conv_mu_1_im_global_wrapper_global_wrapper_stencil_1;
  float _9169 = float_from_bits(925353388 /* 1e-05 */);
  float _9170 = _conv_sigma_1_im_global_wrapper_global_wrapper_stencil_1 + _9169;
  float _9171 = sqrtf(_9170);
  float _9172 = _9168 / _9171;
  float _9173 = float_from_bits(0 /* 0 */);
  float _9174 = max(_9172, _9173);
  return _9174;
}

//store is: conv2.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_conv2_stencil_2() {
  float _9194 = float_from_bits(0 /* 0 */);
  return _9194;
}

//store is: conv2.stencil(0, 0, 0) = (conv2.stencil(0, 0, 0) + (conv2_weights_im_global_wrapper_global_wrapper.stencil(conv2_relu_s0_c_1, conv2_s1_r_1_y_1, conv2_s1_r_1_z_1, conv2_s1_r_1_x_1)*conv1_relu.stencil(conv2_s1_r_1_x_1, (((conv2_relu_s0_i_1*2) + conv2_s1_r_1_y_1) + -1), (((conv2_relu_s0_j*2) + conv2_s1_r_1_z_1) + 170))))
hw_uint<32> hcompute_conv2_stencil_3(hw_uint<32>& conv1_relu_stencil, hw_uint<32>& conv2_stencil, hw_uint<32>& conv2_weights_im_global_wrapper_global_wrapper_stencil) {
  float _conv1_relu_stencil_2 = (float) conv1_relu_stencil.extract<0, 31>();

  float _conv2_stencil_3 = (float) conv2_stencil.extract<0, 31>();

  float _conv2_weights_im_global_wrapper_global_wrapper_stencil_2 = (float) conv2_weights_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9197 = _conv2_weights_im_global_wrapper_global_wrapper_stencil_2 * _conv1_relu_stencil_2;
  float _9198 = _conv2_stencil_3 + _9197;
  return _9198;
}

//store is: conv2_relu.stencil(conv2_relu_s0_c_1, (conv2_relu_s0_i_1 + 16), (conv2_relu_s0_j + 85)) = max(((conv2.stencil(0, 0, 0) - conv_mu_1_im_global_wrapper_global_wrapper.stencil(conv2_relu_s0_c_1))/sqrt_f32((conv_sigma_1_im_global_wrapper_global_wrapper.stencil(conv2_relu_s0_c_1) + 0.000010f))), 0.000000f)
hw_uint<32> hcompute_conv2_relu_stencil_1(hw_uint<32>& conv2_stencil, hw_uint<32>& conv_mu_1_im_global_wrapper_global_wrapper_stencil, hw_uint<32>& conv_sigma_1_im_global_wrapper_global_wrapper_stencil) {
  float _conv2_stencil_4 = (float) conv2_stencil.extract<0, 31>();

  float _conv_mu_1_im_global_wrapper_global_wrapper_stencil_2 = (float) conv_mu_1_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _conv_sigma_1_im_global_wrapper_global_wrapper_stencil_2 = (float) conv_sigma_1_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9212 = _conv2_stencil_4 - _conv_mu_1_im_global_wrapper_global_wrapper_stencil_2;
  float _9213 = float_from_bits(925353388 /* 1e-05 */);
  float _9214 = _conv_sigma_1_im_global_wrapper_global_wrapper_stencil_2 + _9213;
  float _9215 = sqrtf(_9214);
  float _9216 = _9212 / _9215;
  float _9217 = float_from_bits(0 /* 0 */);
  float _9218 = max(_9216, _9217);
  return _9218;
}

//store is: conv2.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_conv2_stencil_4() {
  float _9238 = float_from_bits(0 /* 0 */);
  return _9238;
}

//store is: conv2.stencil(0, 0, 0) = (conv2.stencil(0, 0, 0) + (conv2_weights_im_global_wrapper_global_wrapper.stencil(conv2_relu_s0_c_2, conv2_s1_r_1_y_2, conv2_s1_r_1_z_2, conv2_s1_r_1_x_2)*select((((conv2_relu_s0_i_2*2) + conv2_s1_r_1_y_2) < 361), conv1_relu.stencil(conv2_s1_r_1_x_2, 359, (((conv2_relu_s0_j*2) + conv2_s1_r_1_z_2) + 170)), 0.000000f)))
hw_uint<32> hcompute_conv2_stencil_5(hw_uint<32>& conv1_relu_stencil, hw_uint<32>& conv2_stencil, hw_uint<32>& conv2_weights_im_global_wrapper_global_wrapper_stencil, const int _conv2_relu_s0_i_2, const int _conv2_s1_r_1_y_2) {
  float _conv1_relu_stencil_3 = (float) conv1_relu_stencil.extract<0, 31>();

  float _conv2_stencil_5 = (float) conv2_stencil.extract<0, 31>();

  float _conv2_weights_im_global_wrapper_global_wrapper_stencil_3 = (float) conv2_weights_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9241 = float_from_bits(0 /* 0 */);
  int32_t _9242 = _conv2_relu_s0_i_2 * 2;
  int32_t _9243 = _9242 + _conv2_s1_r_1_y_2;
  bool _9244 = _9243 < 361;
  float _9245 = (float)(_9244 ? _conv1_relu_stencil_3 : _9241);
  float _9246 = _conv2_weights_im_global_wrapper_global_wrapper_stencil_3 * _9245;
  float _9247 = _conv2_stencil_5 + _9246;
  return _9247;
}

//store is: conv2_relu.stencil(conv2_relu_s0_c_2, (conv2_relu_s0_i_2 + 16), (conv2_relu_s0_j + 85)) = max(((conv2.stencil(0, 0, 0) - conv_mu_1_im_global_wrapper_global_wrapper.stencil(conv2_relu_s0_c_2))/sqrt_f32((conv_sigma_1_im_global_wrapper_global_wrapper.stencil(conv2_relu_s0_c_2) + 0.000010f))), 0.000000f)
hw_uint<32> hcompute_conv2_relu_stencil_2(hw_uint<32>& conv2_stencil, hw_uint<32>& conv_mu_1_im_global_wrapper_global_wrapper_stencil, hw_uint<32>& conv_sigma_1_im_global_wrapper_global_wrapper_stencil) {
  float _conv2_stencil_6 = (float) conv2_stencil.extract<0, 31>();

  float _conv_mu_1_im_global_wrapper_global_wrapper_stencil_3 = (float) conv_mu_1_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _conv_sigma_1_im_global_wrapper_global_wrapper_stencil_3 = (float) conv_sigma_1_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9268 = _conv2_stencil_6 - _conv_mu_1_im_global_wrapper_global_wrapper_stencil_3;
  float _9269 = float_from_bits(925353388 /* 1e-05 */);
  float _9270 = _conv_sigma_1_im_global_wrapper_global_wrapper_stencil_3 + _9269;
  float _9271 = sqrtf(_9270);
  float _9272 = _9268 / _9271;
  float _9273 = float_from_bits(0 /* 0 */);
  float _9274 = max(_9272, _9273);
  return _9274;
}

//store is: enc1_weights_3_im_global_wrapper_global_wrapper.stencil((enc1_weights_3_im_global_wrapper_global_wrapper_s0__0 + 64), 0, 0, enc1_weights_3_im_global_wrapper_global_wrapper_s0__3) = enc1_weights_3_im_global_wrapper.stencil(enc1_weights_3_im_global_wrapper_global_wrapper_s0__0, 0, 0, enc1_weights_3_im_global_wrapper_global_wrapper_s0__3)
hw_uint<32> hcompute_enc1_weights_3_im_global_wrapper_global_wrapper_stencil(hw_uint<32>& enc1_weights_3_im_global_wrapper_stencil) {
  float _enc1_weights_3_im_global_wrapper_stencil_1 = (float) enc1_weights_3_im_global_wrapper_stencil.extract<0, 31>();

  return _enc1_weights_3_im_global_wrapper_stencil_1;
}

//store is: enc1_weights_0_im_global_wrapper_global_wrapper.stencil(enc1_weights_0_im_global_wrapper_global_wrapper_s0__0, enc1_weights_0_im_global_wrapper_global_wrapper_s0__1, enc1_weights_0_im_global_wrapper_global_wrapper_s0__2, enc1_weights_0_im_global_wrapper_global_wrapper_s0__3) = enc1_weights_0_im_global_wrapper.stencil(enc1_weights_0_im_global_wrapper_global_wrapper_s0__0, enc1_weights_0_im_global_wrapper_global_wrapper_s0__1, enc1_weights_0_im_global_wrapper_global_wrapper_s0__2, enc1_weights_0_im_global_wrapper_global_wrapper_s0__3)
hw_uint<32> hcompute_enc1_weights_0_im_global_wrapper_global_wrapper_stencil(hw_uint<32>& enc1_weights_0_im_global_wrapper_stencil) {
  float _enc1_weights_0_im_global_wrapper_stencil_1 = (float) enc1_weights_0_im_global_wrapper_stencil.extract<0, 31>();

  return _enc1_weights_0_im_global_wrapper_stencil_1;
}

//store is: enc1_weights_1_im_global_wrapper_global_wrapper.stencil(enc1_weights_1_im_global_wrapper_global_wrapper_s0__0, 0, enc1_weights_1_im_global_wrapper_global_wrapper_s0__2, enc1_weights_1_im_global_wrapper_global_wrapper_s0__3) = enc1_weights_1_im_global_wrapper.stencil(enc1_weights_1_im_global_wrapper_global_wrapper_s0__0, 0, enc1_weights_1_im_global_wrapper_global_wrapper_s0__2, enc1_weights_1_im_global_wrapper_global_wrapper_s0__3)
hw_uint<32> hcompute_enc1_weights_1_im_global_wrapper_global_wrapper_stencil(hw_uint<32>& enc1_weights_1_im_global_wrapper_stencil) {
  float _enc1_weights_1_im_global_wrapper_stencil_1 = (float) enc1_weights_1_im_global_wrapper_stencil.extract<0, 31>();

  return _enc1_weights_1_im_global_wrapper_stencil_1;
}

//store is: enc1_weights_2_im_global_wrapper_global_wrapper.stencil((enc1_weights_2_im_global_wrapper_global_wrapper_s0__0 + 64), enc1_weights_2_im_global_wrapper_global_wrapper_s0__1, 0, enc1_weights_2_im_global_wrapper_global_wrapper_s0__3) = enc1_weights_2_im_global_wrapper.stencil(enc1_weights_2_im_global_wrapper_global_wrapper_s0__0, enc1_weights_2_im_global_wrapper_global_wrapper_s0__1, 0, enc1_weights_2_im_global_wrapper_global_wrapper_s0__3)
hw_uint<32> hcompute_enc1_weights_2_im_global_wrapper_global_wrapper_stencil(hw_uint<32>& enc1_weights_2_im_global_wrapper_stencil) {
  float _enc1_weights_2_im_global_wrapper_stencil_1 = (float) enc1_weights_2_im_global_wrapper_stencil.extract<0, 31>();

  return _enc1_weights_2_im_global_wrapper_stencil_1;
}

//store is: enc1_conv3x1.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_enc1_conv3x1_stencil() {
  float _9300 = float_from_bits(0 /* 0 */);
  return _9300;
}

//store is: enc1_conv1x3.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_enc1_conv1x3_stencil() {
  float _9303 = float_from_bits(0 /* 0 */);
  return _9303;
}

//store is: enc1_conv3x3.stencil(0, (min((enc1_conv3x1_s1_r_4_y + enc1_sum_s0_i), 1) + -1), 0) = 0.000000f
hw_uint<32> hcompute_enc1_conv3x3_stencil() {
  float _9308 = float_from_bits(0 /* 0 */);
  return _9308;
}

//store is: enc1_conv3x3.stencil(0, (min((enc1_conv3x1_s1_r_4_y + enc1_sum_s0_i), 1) + -1), 0) = (enc1_conv3x3.stencil(0, (min((enc1_conv3x1_s1_r_4_y + enc1_sum_s0_i), 1) + -1), 0) + (enc1_weights_0_im_global_wrapper_global_wrapper.stencil(enc1_conv1x3_s1_r_3_x, enc1_conv3x3_s1_r_2_y, enc1_conv3x3_s1_r_2_z, enc1_conv3x3_s1_r_2_x)*select(((enc1_conv3x3_s1_r_2_y + ((enc1_conv3x1_s1_r_4_y + enc1_sum_s0_i)*2)) < 3), 0.000000f, conv2_relu.stencil(enc1_conv3x3_s1_r_2_x, (max((((enc1_conv3x1_s1_r_4_y + enc1_sum_s0_i)*2) + enc1_conv3x3_s1_r_2_y), 3) + 13), ((((enc1_conv1x3_s1_r_3_z + enc1_sum_s0_j)*2) + enc1_conv3x3_s1_r_2_z) + 82)))))
hw_uint<32> hcompute_enc1_conv3x3_stencil_1(hw_uint<32>& conv2_relu_stencil, hw_uint<32>& enc1_conv3x3_stencil, hw_uint<32>& enc1_weights_0_im_global_wrapper_global_wrapper_stencil, const int _enc1_conv3x1_s1_r_4_y, const int _enc1_conv3x3_s1_r_2_y, const int _enc1_sum_s0_i) {
  float _conv2_relu_stencil_1 = (float) conv2_relu_stencil.extract<0, 31>();

  float _enc1_conv3x3_stencil_1 = (float) enc1_conv3x3_stencil.extract<0, 31>();

  float _enc1_weights_0_im_global_wrapper_global_wrapper_stencil_1 = (float) enc1_weights_0_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9314 = float_from_bits(0 /* 0 */);
  int32_t _9315 = _enc1_conv3x1_s1_r_4_y + _enc1_sum_s0_i;
  int32_t _9316 = _9315 * 2;
  int32_t _9317 = _enc1_conv3x3_s1_r_2_y + _9316;
  bool _9318 = _9317 < 3;
  float _9319 = (float)(_9318 ? _9314 : _conv2_relu_stencil_1);
  float _9320 = _enc1_weights_0_im_global_wrapper_global_wrapper_stencil_1 * _9319;
  float _9321 = _enc1_conv3x3_stencil_1 + _9320;
  return _9321;
}

//store is: enc1_conv1x3.stencil(0, 0, 0) = (enc1_conv1x3.stencil(0, 0, 0) + (enc1_weights_1_im_global_wrapper_global_wrapper.stencil(enc1_conv3x1_s1_r_4_x, 0, enc1_conv1x3_s1_r_3_z, enc1_conv1x3_s1_r_3_x)*select(((enc1_conv3x1_s1_r_4_y + enc1_sum_s0_i) < 1), 0.000000f, enc1_conv3x3.stencil(0, 0, 0))))
hw_uint<32> hcompute_enc1_conv1x3_stencil_1(hw_uint<32>& enc1_conv1x3_stencil, hw_uint<32>& enc1_conv3x3_stencil, hw_uint<32>& enc1_weights_1_im_global_wrapper_global_wrapper_stencil, const int _enc1_conv3x1_s1_r_4_y, const int _enc1_sum_s0_i) {
  float _enc1_conv1x3_stencil_1 = (float) enc1_conv1x3_stencil.extract<0, 31>();

  float _enc1_conv3x3_stencil_2 = (float) enc1_conv3x3_stencil.extract<0, 31>();

  float _enc1_weights_1_im_global_wrapper_global_wrapper_stencil_1 = (float) enc1_weights_1_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9350 = float_from_bits(0 /* 0 */);
  int32_t _9351 = _enc1_conv3x1_s1_r_4_y + _enc1_sum_s0_i;
  bool _9352 = _9351 < 1;
  float _9353 = (float)(_9352 ? _9350 : _enc1_conv3x3_stencil_2);
  float _9354 = _enc1_weights_1_im_global_wrapper_global_wrapper_stencil_1 * _9353;
  float _9355 = _enc1_conv1x3_stencil_1 + _9354;
  return _9355;
}

//store is: enc1_conv3x1.stencil(0, 0, 0) = (enc1_conv3x1.stencil(0, 0, 0) + (enc1_weights_2_im_global_wrapper_global_wrapper.stencil((enc1_sum_s0_c + 64), enc1_conv3x1_s1_r_4_y, 0, enc1_conv3x1_s1_r_4_x)*enc1_conv1x3.stencil(0, 0, 0)))
hw_uint<32> hcompute_enc1_conv3x1_stencil_1(hw_uint<32>& enc1_conv1x3_stencil, hw_uint<32>& enc1_conv3x1_stencil, hw_uint<32>& enc1_weights_2_im_global_wrapper_global_wrapper_stencil) {
  float _enc1_conv1x3_stencil_2 = (float) enc1_conv1x3_stencil.extract<0, 31>();

  float _enc1_conv3x1_stencil_1 = (float) enc1_conv3x1_stencil.extract<0, 31>();

  float _enc1_weights_2_im_global_wrapper_global_wrapper_stencil_1 = (float) enc1_weights_2_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9371 = _enc1_weights_2_im_global_wrapper_global_wrapper_stencil_1 * _enc1_conv1x3_stencil_2;
  float _9372 = _enc1_conv3x1_stencil_1 + _9371;
  return _9372;
}

//store is: enc1_conv1x1.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_enc1_conv1x1_stencil() {
  float _9381 = float_from_bits(0 /* 0 */);
  return _9381;
}

//store is: enc1_conv1x1.stencil(0, 0, 0) = (enc1_conv1x1.stencil(0, 0, 0) + (enc1_weights_3_im_global_wrapper_global_wrapper.stencil((enc1_sum_s0_c + 64), 0, 0, enc1_conv1x1_s1_r_5_x)*conv2_relu.stencil(enc1_conv1x1_s1_r_5_x, ((enc1_sum_s0_i*2) + 16), ((enc1_sum_s0_j*2) + 85))))
hw_uint<32> hcompute_enc1_conv1x1_stencil_1(hw_uint<32>& conv2_relu_stencil, hw_uint<32>& enc1_conv1x1_stencil, hw_uint<32>& enc1_weights_3_im_global_wrapper_global_wrapper_stencil) {
  float _conv2_relu_stencil_2 = (float) conv2_relu_stencil.extract<0, 31>();

  float _enc1_conv1x1_stencil_1 = (float) enc1_conv1x1_stencil.extract<0, 31>();

  float _enc1_weights_3_im_global_wrapper_global_wrapper_stencil_1 = (float) enc1_weights_3_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9384 = _enc1_weights_3_im_global_wrapper_global_wrapper_stencil_1 * _conv2_relu_stencil_2;
  float _9385 = _enc1_conv1x1_stencil_1 + _9384;
  return _9385;
}

//store is: enc1_sum.stencil((enc1_sum_s0_c + 64), (enc1_sum_s0_i + 8), (enc1_sum_s0_j + 41)) = (enc1_conv3x1.stencil(0, 0, 0) + enc1_conv1x1.stencil(0, 0, 0))
hw_uint<32> hcompute_enc1_sum_stencil(hw_uint<32>& enc1_conv1x1_stencil, hw_uint<32>& enc1_conv3x1_stencil) {
  float _enc1_conv1x1_stencil_2 = (float) enc1_conv1x1_stencil.extract<0, 31>();

  float _enc1_conv3x1_stencil_2 = (float) enc1_conv3x1_stencil.extract<0, 31>();

  float _9398 = _enc1_conv3x1_stencil_2 + _enc1_conv1x1_stencil_2;
  return _9398;
}

//store is: enc1_conv3x1.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_enc1_conv3x1_stencil_2() {
  float _9406 = float_from_bits(0 /* 0 */);
  return _9406;
}

//store is: enc1_conv1x3.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_enc1_conv1x3_stencil_2() {
  float _9409 = float_from_bits(0 /* 0 */);
  return _9409;
}

//store is: enc1_conv3x3.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_enc1_conv3x3_stencil_2() {
  float _9412 = float_from_bits(0 /* 0 */);
  return _9412;
}

//store is: enc1_conv3x3.stencil(0, 0, 0) = (enc1_conv3x3.stencil(0, 0, 0) + (enc1_weights_0_im_global_wrapper_global_wrapper.stencil(enc1_conv1x3_s1_r_3_x_1, enc1_conv3x3_s1_r_2_y_1, enc1_conv3x3_s1_r_2_z_1, enc1_conv3x3_s1_r_2_x_1)*conv2_relu.stencil(enc1_conv3x3_s1_r_2_x_1, ((((enc1_conv3x1_s1_r_4_y_1 + enc1_sum_s0_i_1)*2) + enc1_conv3x3_s1_r_2_y_1) + 13), ((((enc1_conv1x3_s1_r_3_z_1 + enc1_sum_s0_j)*2) + enc1_conv3x3_s1_r_2_z_1) + 82))))
hw_uint<32> hcompute_enc1_conv3x3_stencil_3(hw_uint<32>& conv2_relu_stencil, hw_uint<32>& enc1_conv3x3_stencil, hw_uint<32>& enc1_weights_0_im_global_wrapper_global_wrapper_stencil) {
  float _conv2_relu_stencil_3 = (float) conv2_relu_stencil.extract<0, 31>();

  float _enc1_conv3x3_stencil_3 = (float) enc1_conv3x3_stencil.extract<0, 31>();

  float _enc1_weights_0_im_global_wrapper_global_wrapper_stencil_2 = (float) enc1_weights_0_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9415 = _enc1_weights_0_im_global_wrapper_global_wrapper_stencil_2 * _conv2_relu_stencil_3;
  float _9416 = _enc1_conv3x3_stencil_3 + _9415;
  return _9416;
}

//store is: enc1_conv1x3.stencil(0, 0, 0) = (enc1_conv1x3.stencil(0, 0, 0) + (enc1_weights_1_im_global_wrapper_global_wrapper.stencil(enc1_conv3x1_s1_r_4_x_1, 0, enc1_conv1x3_s1_r_3_z_1, enc1_conv1x3_s1_r_3_x_1)*enc1_conv3x3.stencil(0, 0, 0)))
hw_uint<32> hcompute_enc1_conv1x3_stencil_3(hw_uint<32>& enc1_conv1x3_stencil, hw_uint<32>& enc1_conv3x3_stencil, hw_uint<32>& enc1_weights_1_im_global_wrapper_global_wrapper_stencil) {
  float _enc1_conv1x3_stencil_3 = (float) enc1_conv1x3_stencil.extract<0, 31>();

  float _enc1_conv3x3_stencil_4 = (float) enc1_conv3x3_stencil.extract<0, 31>();

  float _enc1_weights_1_im_global_wrapper_global_wrapper_stencil_2 = (float) enc1_weights_1_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9432 = _enc1_weights_1_im_global_wrapper_global_wrapper_stencil_2 * _enc1_conv3x3_stencil_4;
  float _9433 = _enc1_conv1x3_stencil_3 + _9432;
  return _9433;
}

//store is: enc1_conv3x1.stencil(0, 0, 0) = (enc1_conv3x1.stencil(0, 0, 0) + (enc1_weights_2_im_global_wrapper_global_wrapper.stencil((enc1_sum_s0_c_1 + 64), enc1_conv3x1_s1_r_4_y_1, 0, enc1_conv3x1_s1_r_4_x_1)*enc1_conv1x3.stencil(0, 0, 0)))
hw_uint<32> hcompute_enc1_conv3x1_stencil_3(hw_uint<32>& enc1_conv1x3_stencil, hw_uint<32>& enc1_conv3x1_stencil, hw_uint<32>& enc1_weights_2_im_global_wrapper_global_wrapper_stencil) {
  float _enc1_conv1x3_stencil_4 = (float) enc1_conv1x3_stencil.extract<0, 31>();

  float _enc1_conv3x1_stencil_3 = (float) enc1_conv3x1_stencil.extract<0, 31>();

  float _enc1_weights_2_im_global_wrapper_global_wrapper_stencil_2 = (float) enc1_weights_2_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9441 = _enc1_weights_2_im_global_wrapper_global_wrapper_stencil_2 * _enc1_conv1x3_stencil_4;
  float _9442 = _enc1_conv3x1_stencil_3 + _9441;
  return _9442;
}

//store is: enc1_conv1x1.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_enc1_conv1x1_stencil_2() {
  float _9451 = float_from_bits(0 /* 0 */);
  return _9451;
}

//store is: enc1_conv1x1.stencil(0, 0, 0) = (enc1_conv1x1.stencil(0, 0, 0) + (enc1_weights_3_im_global_wrapper_global_wrapper.stencil((enc1_sum_s0_c_1 + 64), 0, 0, enc1_conv1x1_s1_r_5_x_1)*conv2_relu.stencil(enc1_conv1x1_s1_r_5_x_1, ((enc1_sum_s0_i_1*2) + 16), ((enc1_sum_s0_j*2) + 85))))
hw_uint<32> hcompute_enc1_conv1x1_stencil_3(hw_uint<32>& conv2_relu_stencil, hw_uint<32>& enc1_conv1x1_stencil, hw_uint<32>& enc1_weights_3_im_global_wrapper_global_wrapper_stencil) {
  float _conv2_relu_stencil_4 = (float) conv2_relu_stencil.extract<0, 31>();

  float _enc1_conv1x1_stencil_3 = (float) enc1_conv1x1_stencil.extract<0, 31>();

  float _enc1_weights_3_im_global_wrapper_global_wrapper_stencil_2 = (float) enc1_weights_3_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9454 = _enc1_weights_3_im_global_wrapper_global_wrapper_stencil_2 * _conv2_relu_stencil_4;
  float _9455 = _enc1_conv1x1_stencil_3 + _9454;
  return _9455;
}

//store is: enc1_sum.stencil((enc1_sum_s0_c_1 + 64), (enc1_sum_s0_i_1 + 8), (enc1_sum_s0_j + 41)) = (enc1_conv3x1.stencil(0, 0, 0) + enc1_conv1x1.stencil(0, 0, 0))
hw_uint<32> hcompute_enc1_sum_stencil_1(hw_uint<32>& enc1_conv1x1_stencil, hw_uint<32>& enc1_conv3x1_stencil) {
  float _enc1_conv1x1_stencil_4 = (float) enc1_conv1x1_stencil.extract<0, 31>();

  float _enc1_conv3x1_stencil_4 = (float) enc1_conv3x1_stencil.extract<0, 31>();

  float _9468 = _enc1_conv3x1_stencil_4 + _enc1_conv1x1_stencil_4;
  return _9468;
}

//store is: enc1_conv3x1.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_enc1_conv3x1_stencil_4() {
  float _9476 = float_from_bits(0 /* 0 */);
  return _9476;
}

//store is: enc1_conv1x3.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_enc1_conv1x3_stencil_4() {
  float _9479 = float_from_bits(0 /* 0 */);
  return _9479;
}

//store is: enc1_conv3x3.stencil(0, (max((enc1_conv3x1_s1_r_4_y_2 + enc1_sum_s0_i_2), 90) + -90), 0) = 0.000000f
hw_uint<32> hcompute_enc1_conv3x3_stencil_4() {
  float _9484 = float_from_bits(0 /* 0 */);
  return _9484;
}

//store is: enc1_conv3x3.stencil(0, (max((enc1_conv3x1_s1_r_4_y_2 + enc1_sum_s0_i_2), 90) + -90), 0) = (enc1_conv3x3.stencil(0, (max((enc1_conv3x1_s1_r_4_y_2 + enc1_sum_s0_i_2), 90) + -90), 0) + (enc1_weights_0_im_global_wrapper_global_wrapper.stencil(enc1_conv1x3_s1_r_3_x_2, enc1_conv3x3_s1_r_2_y_2, enc1_conv3x3_s1_r_2_z_2, enc1_conv3x3_s1_r_2_x_2)*conv2_relu.stencil(enc1_conv3x3_s1_r_2_x_2, (min((((enc1_conv3x1_s1_r_4_y_2 + enc1_sum_s0_i_2)*2) + enc1_conv3x3_s1_r_2_y_2), 182) + 13), ((((enc1_conv1x3_s1_r_3_z_2 + enc1_sum_s0_j)*2) + enc1_conv3x3_s1_r_2_z_2) + 82))))
hw_uint<32> hcompute_enc1_conv3x3_stencil_5(hw_uint<32>& conv2_relu_stencil, hw_uint<32>& enc1_conv3x3_stencil, hw_uint<32>& enc1_weights_0_im_global_wrapper_global_wrapper_stencil) {
  float _conv2_relu_stencil_5 = (float) conv2_relu_stencil.extract<0, 31>();

  float _enc1_conv3x3_stencil_5 = (float) enc1_conv3x3_stencil.extract<0, 31>();

  float _enc1_weights_0_im_global_wrapper_global_wrapper_stencil_3 = (float) enc1_weights_0_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9490 = _enc1_weights_0_im_global_wrapper_global_wrapper_stencil_3 * _conv2_relu_stencil_5;
  float _9491 = _enc1_conv3x3_stencil_5 + _9490;
  return _9491;
}

//store is: enc1_conv1x3.stencil(0, 0, 0) = (enc1_conv1x3.stencil(0, 0, 0) + (enc1_weights_1_im_global_wrapper_global_wrapper.stencil(enc1_conv3x1_s1_r_4_x_2, 0, enc1_conv1x3_s1_r_3_z_2, enc1_conv1x3_s1_r_3_x_2)*select(((enc1_conv3x1_s1_r_4_y_2 + enc1_sum_s0_i_2) < 91), enc1_conv3x3.stencil(0, 0, 0), 0.000000f)))
hw_uint<32> hcompute_enc1_conv1x3_stencil_5(hw_uint<32>& enc1_conv1x3_stencil, hw_uint<32>& enc1_conv3x3_stencil, hw_uint<32>& enc1_weights_1_im_global_wrapper_global_wrapper_stencil, const int _enc1_conv3x1_s1_r_4_y_2, const int _enc1_sum_s0_i_2) {
  float _enc1_conv1x3_stencil_5 = (float) enc1_conv1x3_stencil.extract<0, 31>();

  float _enc1_conv3x3_stencil_6 = (float) enc1_conv3x3_stencil.extract<0, 31>();

  float _enc1_weights_1_im_global_wrapper_global_wrapper_stencil_3 = (float) enc1_weights_1_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9510 = float_from_bits(0 /* 0 */);
  int32_t _9511 = _enc1_conv3x1_s1_r_4_y_2 + _enc1_sum_s0_i_2;
  bool _9512 = _9511 < 91;
  float _9513 = (float)(_9512 ? _enc1_conv3x3_stencil_6 : _9510);
  float _9514 = _enc1_weights_1_im_global_wrapper_global_wrapper_stencil_3 * _9513;
  float _9515 = _enc1_conv1x3_stencil_5 + _9514;
  return _9515;
}

//store is: enc1_conv3x1.stencil(0, 0, 0) = (enc1_conv3x1.stencil(0, 0, 0) + (enc1_weights_2_im_global_wrapper_global_wrapper.stencil((enc1_sum_s0_c_2 + 64), enc1_conv3x1_s1_r_4_y_2, 0, enc1_conv3x1_s1_r_4_x_2)*enc1_conv1x3.stencil(0, 0, 0)))
hw_uint<32> hcompute_enc1_conv3x1_stencil_5(hw_uint<32>& enc1_conv1x3_stencil, hw_uint<32>& enc1_conv3x1_stencil, hw_uint<32>& enc1_weights_2_im_global_wrapper_global_wrapper_stencil) {
  float _enc1_conv1x3_stencil_6 = (float) enc1_conv1x3_stencil.extract<0, 31>();

  float _enc1_conv3x1_stencil_5 = (float) enc1_conv3x1_stencil.extract<0, 31>();

  float _enc1_weights_2_im_global_wrapper_global_wrapper_stencil_3 = (float) enc1_weights_2_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9531 = _enc1_weights_2_im_global_wrapper_global_wrapper_stencil_3 * _enc1_conv1x3_stencil_6;
  float _9532 = _enc1_conv3x1_stencil_5 + _9531;
  return _9532;
}

//store is: enc1_conv1x1.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_enc1_conv1x1_stencil_4() {
  float _9541 = float_from_bits(0 /* 0 */);
  return _9541;
}

//store is: enc1_conv1x1.stencil(0, 0, 0) = (enc1_conv1x1.stencil(0, 0, 0) + (enc1_weights_3_im_global_wrapper_global_wrapper.stencil((enc1_sum_s0_c_2 + 64), 0, 0, enc1_conv1x1_s1_r_5_x_2)*conv2_relu.stencil(enc1_conv1x1_s1_r_5_x_2, ((enc1_sum_s0_i_2*2) + 16), ((enc1_sum_s0_j*2) + 85))))
hw_uint<32> hcompute_enc1_conv1x1_stencil_5(hw_uint<32>& conv2_relu_stencil, hw_uint<32>& enc1_conv1x1_stencil, hw_uint<32>& enc1_weights_3_im_global_wrapper_global_wrapper_stencil) {
  float _conv2_relu_stencil_6 = (float) conv2_relu_stencil.extract<0, 31>();

  float _enc1_conv1x1_stencil_5 = (float) enc1_conv1x1_stencil.extract<0, 31>();

  float _enc1_weights_3_im_global_wrapper_global_wrapper_stencil_3 = (float) enc1_weights_3_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9544 = _enc1_weights_3_im_global_wrapper_global_wrapper_stencil_3 * _conv2_relu_stencil_6;
  float _9545 = _enc1_conv1x1_stencil_5 + _9544;
  return _9545;
}

//store is: enc1_sum.stencil((enc1_sum_s0_c_2 + 64), (enc1_sum_s0_i_2 + 8), (enc1_sum_s0_j + 41)) = (enc1_conv3x1.stencil(0, 0, 0) + enc1_conv1x1.stencil(0, 0, 0))
hw_uint<32> hcompute_enc1_sum_stencil_2(hw_uint<32>& enc1_conv1x1_stencil, hw_uint<32>& enc1_conv3x1_stencil) {
  float _enc1_conv1x1_stencil_6 = (float) enc1_conv1x1_stencil.extract<0, 31>();

  float _enc1_conv3x1_stencil_6 = (float) enc1_conv3x1_stencil.extract<0, 31>();

  float _9558 = _enc1_conv3x1_stencil_6 + _enc1_conv1x1_stencil_6;
  return _9558;
}

//store is: enc2_weights_3_im_global_wrapper_global_wrapper.stencil((enc2_weights_3_im_global_wrapper_global_wrapper_s0__0 + 128), 0, 0, enc2_weights_3_im_global_wrapper_global_wrapper_s0__3) = enc2_weights_3_im_global_wrapper.stencil(enc2_weights_3_im_global_wrapper_global_wrapper_s0__0, 0, 0, enc2_weights_3_im_global_wrapper_global_wrapper_s0__3)
hw_uint<32> hcompute_enc2_weights_3_im_global_wrapper_global_wrapper_stencil(hw_uint<32>& enc2_weights_3_im_global_wrapper_stencil) {
  float _enc2_weights_3_im_global_wrapper_stencil_1 = (float) enc2_weights_3_im_global_wrapper_stencil.extract<0, 31>();

  return _enc2_weights_3_im_global_wrapper_stencil_1;
}

//store is: enc2_weights_0_im_global_wrapper_global_wrapper.stencil(enc2_weights_0_im_global_wrapper_global_wrapper_s0__0, enc2_weights_0_im_global_wrapper_global_wrapper_s0__1, enc2_weights_0_im_global_wrapper_global_wrapper_s0__2, enc2_weights_0_im_global_wrapper_global_wrapper_s0__3) = enc2_weights_0_im_global_wrapper.stencil(enc2_weights_0_im_global_wrapper_global_wrapper_s0__0, enc2_weights_0_im_global_wrapper_global_wrapper_s0__1, enc2_weights_0_im_global_wrapper_global_wrapper_s0__2, enc2_weights_0_im_global_wrapper_global_wrapper_s0__3)
hw_uint<32> hcompute_enc2_weights_0_im_global_wrapper_global_wrapper_stencil(hw_uint<32>& enc2_weights_0_im_global_wrapper_stencil) {
  float _enc2_weights_0_im_global_wrapper_stencil_1 = (float) enc2_weights_0_im_global_wrapper_stencil.extract<0, 31>();

  return _enc2_weights_0_im_global_wrapper_stencil_1;
}

//store is: enc2_weights_1_im_global_wrapper_global_wrapper.stencil(enc2_weights_1_im_global_wrapper_global_wrapper_s0__0, 0, enc2_weights_1_im_global_wrapper_global_wrapper_s0__2, enc2_weights_1_im_global_wrapper_global_wrapper_s0__3) = enc2_weights_1_im_global_wrapper.stencil(enc2_weights_1_im_global_wrapper_global_wrapper_s0__0, 0, enc2_weights_1_im_global_wrapper_global_wrapper_s0__2, enc2_weights_1_im_global_wrapper_global_wrapper_s0__3)
hw_uint<32> hcompute_enc2_weights_1_im_global_wrapper_global_wrapper_stencil(hw_uint<32>& enc2_weights_1_im_global_wrapper_stencil) {
  float _enc2_weights_1_im_global_wrapper_stencil_1 = (float) enc2_weights_1_im_global_wrapper_stencil.extract<0, 31>();

  return _enc2_weights_1_im_global_wrapper_stencil_1;
}

//store is: enc2_weights_2_im_global_wrapper_global_wrapper.stencil((enc2_weights_2_im_global_wrapper_global_wrapper_s0__0 + 128), enc2_weights_2_im_global_wrapper_global_wrapper_s0__1, 0, enc2_weights_2_im_global_wrapper_global_wrapper_s0__3) = enc2_weights_2_im_global_wrapper.stencil(enc2_weights_2_im_global_wrapper_global_wrapper_s0__0, enc2_weights_2_im_global_wrapper_global_wrapper_s0__1, 0, enc2_weights_2_im_global_wrapper_global_wrapper_s0__3)
hw_uint<32> hcompute_enc2_weights_2_im_global_wrapper_global_wrapper_stencil(hw_uint<32>& enc2_weights_2_im_global_wrapper_stencil) {
  float _enc2_weights_2_im_global_wrapper_stencil_1 = (float) enc2_weights_2_im_global_wrapper_stencil.extract<0, 31>();

  return _enc2_weights_2_im_global_wrapper_stencil_1;
}

//store is: enc2_conv3x1.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_enc2_conv3x1_stencil() {
  float _9572 = float_from_bits(0 /* 0 */);
  return _9572;
}

//store is: enc2_conv1x3.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_enc2_conv1x3_stencil() {
  float _9575 = float_from_bits(0 /* 0 */);
  return _9575;
}

//store is: enc2_conv3x3.stencil(0, (min((enc2_conv3x1_s1_r_8_y + enc2_sum_s0_i), 1) + -1), 0) = 0.000000f
hw_uint<32> hcompute_enc2_conv3x3_stencil() {
  float _9580 = float_from_bits(0 /* 0 */);
  return _9580;
}

//store is: enc2_conv3x3.stencil(0, (min((enc2_conv3x1_s1_r_8_y + enc2_sum_s0_i), 1) + -1), 0) = (enc2_conv3x3.stencil(0, (min((enc2_conv3x1_s1_r_8_y + enc2_sum_s0_i), 1) + -1), 0) + (enc2_weights_0_im_global_wrapper_global_wrapper.stencil(enc2_conv1x3_s1_r_7_x, enc2_conv3x3_s1_r_6_y, enc2_conv3x3_s1_r_6_z, enc2_conv3x3_s1_r_6_x)*select(((enc2_conv3x3_s1_r_6_y + ((enc2_conv3x1_s1_r_8_y + enc2_sum_s0_i)*2)) < 3), 0.000000f, enc1_sum.stencil((enc2_conv3x3_s1_r_6_x + 64), (max((((enc2_conv3x1_s1_r_8_y + enc2_sum_s0_i)*2) + enc2_conv3x3_s1_r_6_y), 3) + 5), ((((enc2_conv1x3_s1_r_7_z + enc2_sum_s0_j)*2) + enc2_conv3x3_s1_r_6_z) + 38)))))
hw_uint<32> hcompute_enc2_conv3x3_stencil_1(hw_uint<32>& enc1_sum_stencil, hw_uint<32>& enc2_conv3x3_stencil, hw_uint<32>& enc2_weights_0_im_global_wrapper_global_wrapper_stencil, const int _enc2_conv3x1_s1_r_8_y, const int _enc2_conv3x3_s1_r_6_y, const int _enc2_sum_s0_i) {
  float _enc1_sum_stencil_1 = (float) enc1_sum_stencil.extract<0, 31>();

  float _enc2_conv3x3_stencil_1 = (float) enc2_conv3x3_stencil.extract<0, 31>();

  float _enc2_weights_0_im_global_wrapper_global_wrapper_stencil_1 = (float) enc2_weights_0_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9586 = float_from_bits(0 /* 0 */);
  int32_t _9587 = _enc2_conv3x1_s1_r_8_y + _enc2_sum_s0_i;
  int32_t _9588 = _9587 * 2;
  int32_t _9589 = _enc2_conv3x3_s1_r_6_y + _9588;
  bool _9590 = _9589 < 3;
  float _9591 = (float)(_9590 ? _9586 : _enc1_sum_stencil_1);
  float _9592 = _enc2_weights_0_im_global_wrapper_global_wrapper_stencil_1 * _9591;
  float _9593 = _enc2_conv3x3_stencil_1 + _9592;
  return _9593;
}

//store is: enc2_conv1x3.stencil(0, 0, 0) = (enc2_conv1x3.stencil(0, 0, 0) + (enc2_weights_1_im_global_wrapper_global_wrapper.stencil(enc2_conv3x1_s1_r_8_x, 0, enc2_conv1x3_s1_r_7_z, enc2_conv1x3_s1_r_7_x)*select(((enc2_conv3x1_s1_r_8_y + enc2_sum_s0_i) < 1), 0.000000f, enc2_conv3x3.stencil(0, 0, 0))))
hw_uint<32> hcompute_enc2_conv1x3_stencil_1(hw_uint<32>& enc2_conv1x3_stencil, hw_uint<32>& enc2_conv3x3_stencil, hw_uint<32>& enc2_weights_1_im_global_wrapper_global_wrapper_stencil, const int _enc2_conv3x1_s1_r_8_y, const int _enc2_sum_s0_i) {
  float _enc2_conv1x3_stencil_1 = (float) enc2_conv1x3_stencil.extract<0, 31>();

  float _enc2_conv3x3_stencil_2 = (float) enc2_conv3x3_stencil.extract<0, 31>();

  float _enc2_weights_1_im_global_wrapper_global_wrapper_stencil_1 = (float) enc2_weights_1_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9623 = float_from_bits(0 /* 0 */);
  int32_t _9624 = _enc2_conv3x1_s1_r_8_y + _enc2_sum_s0_i;
  bool _9625 = _9624 < 1;
  float _9626 = (float)(_9625 ? _9623 : _enc2_conv3x3_stencil_2);
  float _9627 = _enc2_weights_1_im_global_wrapper_global_wrapper_stencil_1 * _9626;
  float _9628 = _enc2_conv1x3_stencil_1 + _9627;
  return _9628;
}

//store is: enc2_conv3x1.stencil(0, 0, 0) = (enc2_conv3x1.stencil(0, 0, 0) + (enc2_weights_2_im_global_wrapper_global_wrapper.stencil((enc2_sum_s0_c + 128), enc2_conv3x1_s1_r_8_y, 0, enc2_conv3x1_s1_r_8_x)*enc2_conv1x3.stencil(0, 0, 0)))
hw_uint<32> hcompute_enc2_conv3x1_stencil_1(hw_uint<32>& enc2_conv1x3_stencil, hw_uint<32>& enc2_conv3x1_stencil, hw_uint<32>& enc2_weights_2_im_global_wrapper_global_wrapper_stencil) {
  float _enc2_conv1x3_stencil_2 = (float) enc2_conv1x3_stencil.extract<0, 31>();

  float _enc2_conv3x1_stencil_1 = (float) enc2_conv3x1_stencil.extract<0, 31>();

  float _enc2_weights_2_im_global_wrapper_global_wrapper_stencil_1 = (float) enc2_weights_2_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9644 = _enc2_weights_2_im_global_wrapper_global_wrapper_stencil_1 * _enc2_conv1x3_stencil_2;
  float _9645 = _enc2_conv3x1_stencil_1 + _9644;
  return _9645;
}

//store is: enc2_conv1x1.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_enc2_conv1x1_stencil() {
  float _9654 = float_from_bits(0 /* 0 */);
  return _9654;
}

//store is: enc2_conv1x1.stencil(0, 0, 0) = (enc2_conv1x1.stencil(0, 0, 0) + (enc2_weights_3_im_global_wrapper_global_wrapper.stencil((enc2_sum_s0_c + 128), 0, 0, enc2_conv1x1_s1_r_9_x)*enc1_sum.stencil((enc2_conv1x1_s1_r_9_x + 64), ((enc2_sum_s0_i*2) + 8), ((enc2_sum_s0_j*2) + 41))))
hw_uint<32> hcompute_enc2_conv1x1_stencil_1(hw_uint<32>& enc1_sum_stencil, hw_uint<32>& enc2_conv1x1_stencil, hw_uint<32>& enc2_weights_3_im_global_wrapper_global_wrapper_stencil) {
  float _enc1_sum_stencil_2 = (float) enc1_sum_stencil.extract<0, 31>();

  float _enc2_conv1x1_stencil_1 = (float) enc2_conv1x1_stencil.extract<0, 31>();

  float _enc2_weights_3_im_global_wrapper_global_wrapper_stencil_1 = (float) enc2_weights_3_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9657 = _enc2_weights_3_im_global_wrapper_global_wrapper_stencil_1 * _enc1_sum_stencil_2;
  float _9658 = _enc2_conv1x1_stencil_1 + _9657;
  return _9658;
}

//store is: enc2_sum.stencil((enc2_sum_s0_c + 128), (enc2_sum_s0_i + 4), (enc2_sum_s0_j + 19)) = (enc2_conv3x1.stencil(0, 0, 0) + enc2_conv1x1.stencil(0, 0, 0))
hw_uint<32> hcompute_enc2_sum_stencil(hw_uint<32>& enc2_conv1x1_stencil, hw_uint<32>& enc2_conv3x1_stencil) {
  float _enc2_conv1x1_stencil_2 = (float) enc2_conv1x1_stencil.extract<0, 31>();

  float _enc2_conv3x1_stencil_2 = (float) enc2_conv3x1_stencil.extract<0, 31>();

  float _9672 = _enc2_conv3x1_stencil_2 + _enc2_conv1x1_stencil_2;
  return _9672;
}

//store is: enc2_conv3x1.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_enc2_conv3x1_stencil_2() {
  float _9680 = float_from_bits(0 /* 0 */);
  return _9680;
}

//store is: enc2_conv1x3.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_enc2_conv1x3_stencil_2() {
  float _9683 = float_from_bits(0 /* 0 */);
  return _9683;
}

//store is: enc2_conv3x3.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_enc2_conv3x3_stencil_2() {
  float _9686 = float_from_bits(0 /* 0 */);
  return _9686;
}

//store is: enc2_conv3x3.stencil(0, 0, 0) = (enc2_conv3x3.stencil(0, 0, 0) + (enc2_weights_0_im_global_wrapper_global_wrapper.stencil(enc2_conv1x3_s1_r_7_x_1, enc2_conv3x3_s1_r_6_y_1, enc2_conv3x3_s1_r_6_z_1, enc2_conv3x3_s1_r_6_x_1)*enc1_sum.stencil((enc2_conv3x3_s1_r_6_x_1 + 64), ((((enc2_conv3x1_s1_r_8_y_1 + enc2_sum_s0_i_1)*2) + enc2_conv3x3_s1_r_6_y_1) + 5), ((((enc2_conv1x3_s1_r_7_z_1 + enc2_sum_s0_j)*2) + enc2_conv3x3_s1_r_6_z_1) + 38))))
hw_uint<32> hcompute_enc2_conv3x3_stencil_3(hw_uint<32>& enc1_sum_stencil, hw_uint<32>& enc2_conv3x3_stencil, hw_uint<32>& enc2_weights_0_im_global_wrapper_global_wrapper_stencil) {
  float _enc1_sum_stencil_3 = (float) enc1_sum_stencil.extract<0, 31>();

  float _enc2_conv3x3_stencil_3 = (float) enc2_conv3x3_stencil.extract<0, 31>();

  float _enc2_weights_0_im_global_wrapper_global_wrapper_stencil_2 = (float) enc2_weights_0_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9689 = _enc2_weights_0_im_global_wrapper_global_wrapper_stencil_2 * _enc1_sum_stencil_3;
  float _9690 = _enc2_conv3x3_stencil_3 + _9689;
  return _9690;
}

//store is: enc2_conv1x3.stencil(0, 0, 0) = (enc2_conv1x3.stencil(0, 0, 0) + (enc2_weights_1_im_global_wrapper_global_wrapper.stencil(enc2_conv3x1_s1_r_8_x_1, 0, enc2_conv1x3_s1_r_7_z_1, enc2_conv1x3_s1_r_7_x_1)*enc2_conv3x3.stencil(0, 0, 0)))
hw_uint<32> hcompute_enc2_conv1x3_stencil_3(hw_uint<32>& enc2_conv1x3_stencil, hw_uint<32>& enc2_conv3x3_stencil, hw_uint<32>& enc2_weights_1_im_global_wrapper_global_wrapper_stencil) {
  float _enc2_conv1x3_stencil_3 = (float) enc2_conv1x3_stencil.extract<0, 31>();

  float _enc2_conv3x3_stencil_4 = (float) enc2_conv3x3_stencil.extract<0, 31>();

  float _enc2_weights_1_im_global_wrapper_global_wrapper_stencil_2 = (float) enc2_weights_1_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9707 = _enc2_weights_1_im_global_wrapper_global_wrapper_stencil_2 * _enc2_conv3x3_stencil_4;
  float _9708 = _enc2_conv1x3_stencil_3 + _9707;
  return _9708;
}

//store is: enc2_conv3x1.stencil(0, 0, 0) = (enc2_conv3x1.stencil(0, 0, 0) + (enc2_weights_2_im_global_wrapper_global_wrapper.stencil((enc2_sum_s0_c_1 + 128), enc2_conv3x1_s1_r_8_y_1, 0, enc2_conv3x1_s1_r_8_x_1)*enc2_conv1x3.stencil(0, 0, 0)))
hw_uint<32> hcompute_enc2_conv3x1_stencil_3(hw_uint<32>& enc2_conv1x3_stencil, hw_uint<32>& enc2_conv3x1_stencil, hw_uint<32>& enc2_weights_2_im_global_wrapper_global_wrapper_stencil) {
  float _enc2_conv1x3_stencil_4 = (float) enc2_conv1x3_stencil.extract<0, 31>();

  float _enc2_conv3x1_stencil_3 = (float) enc2_conv3x1_stencil.extract<0, 31>();

  float _enc2_weights_2_im_global_wrapper_global_wrapper_stencil_2 = (float) enc2_weights_2_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9716 = _enc2_weights_2_im_global_wrapper_global_wrapper_stencil_2 * _enc2_conv1x3_stencil_4;
  float _9717 = _enc2_conv3x1_stencil_3 + _9716;
  return _9717;
}

//store is: enc2_conv1x1.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_enc2_conv1x1_stencil_2() {
  float _9726 = float_from_bits(0 /* 0 */);
  return _9726;
}

//store is: enc2_conv1x1.stencil(0, 0, 0) = (enc2_conv1x1.stencil(0, 0, 0) + (enc2_weights_3_im_global_wrapper_global_wrapper.stencil((enc2_sum_s0_c_1 + 128), 0, 0, enc2_conv1x1_s1_r_9_x_1)*enc1_sum.stencil((enc2_conv1x1_s1_r_9_x_1 + 64), ((enc2_sum_s0_i_1*2) + 8), ((enc2_sum_s0_j*2) + 41))))
hw_uint<32> hcompute_enc2_conv1x1_stencil_3(hw_uint<32>& enc1_sum_stencil, hw_uint<32>& enc2_conv1x1_stencil, hw_uint<32>& enc2_weights_3_im_global_wrapper_global_wrapper_stencil) {
  float _enc1_sum_stencil_4 = (float) enc1_sum_stencil.extract<0, 31>();

  float _enc2_conv1x1_stencil_3 = (float) enc2_conv1x1_stencil.extract<0, 31>();

  float _enc2_weights_3_im_global_wrapper_global_wrapper_stencil_2 = (float) enc2_weights_3_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9729 = _enc2_weights_3_im_global_wrapper_global_wrapper_stencil_2 * _enc1_sum_stencil_4;
  float _9730 = _enc2_conv1x1_stencil_3 + _9729;
  return _9730;
}

//store is: enc2_sum.stencil((enc2_sum_s0_c_1 + 128), (enc2_sum_s0_i_1 + 4), (enc2_sum_s0_j + 19)) = (enc2_conv3x1.stencil(0, 0, 0) + enc2_conv1x1.stencil(0, 0, 0))
hw_uint<32> hcompute_enc2_sum_stencil_1(hw_uint<32>& enc2_conv1x1_stencil, hw_uint<32>& enc2_conv3x1_stencil) {
  float _enc2_conv1x1_stencil_4 = (float) enc2_conv1x1_stencil.extract<0, 31>();

  float _enc2_conv3x1_stencil_4 = (float) enc2_conv3x1_stencil.extract<0, 31>();

  float _9744 = _enc2_conv3x1_stencil_4 + _enc2_conv1x1_stencil_4;
  return _9744;
}

//store is: enc2_conv3x1.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_enc2_conv3x1_stencil_4() {
  float _9752 = float_from_bits(0 /* 0 */);
  return _9752;
}

//store is: enc2_conv1x3.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_enc2_conv1x3_stencil_4() {
  float _9755 = float_from_bits(0 /* 0 */);
  return _9755;
}

//store is: enc2_conv3x3.stencil(0, (max((enc2_conv3x1_s1_r_8_y_2 + enc2_sum_s0_i_2), 45) + -45), 0) = 0.000000f
hw_uint<32> hcompute_enc2_conv3x3_stencil_4() {
  float _9760 = float_from_bits(0 /* 0 */);
  return _9760;
}

//store is: enc2_conv3x3.stencil(0, (max((enc2_conv3x1_s1_r_8_y_2 + enc2_sum_s0_i_2), 45) + -45), 0) = (enc2_conv3x3.stencil(0, (max((enc2_conv3x1_s1_r_8_y_2 + enc2_sum_s0_i_2), 45) + -45), 0) + (enc2_weights_0_im_global_wrapper_global_wrapper.stencil(enc2_conv1x3_s1_r_7_x_2, enc2_conv3x3_s1_r_6_y_2, enc2_conv3x3_s1_r_6_z_2, enc2_conv3x3_s1_r_6_x_2)*enc1_sum.stencil((enc2_conv3x3_s1_r_6_x_2 + 64), (min((((enc2_conv3x1_s1_r_8_y_2 + enc2_sum_s0_i_2)*2) + enc2_conv3x3_s1_r_6_y_2), 92) + 5), ((((enc2_conv1x3_s1_r_7_z_2 + enc2_sum_s0_j)*2) + enc2_conv3x3_s1_r_6_z_2) + 38))))
hw_uint<32> hcompute_enc2_conv3x3_stencil_5(hw_uint<32>& enc1_sum_stencil, hw_uint<32>& enc2_conv3x3_stencil, hw_uint<32>& enc2_weights_0_im_global_wrapper_global_wrapper_stencil) {
  float _enc1_sum_stencil_5 = (float) enc1_sum_stencil.extract<0, 31>();

  float _enc2_conv3x3_stencil_5 = (float) enc2_conv3x3_stencil.extract<0, 31>();

  float _enc2_weights_0_im_global_wrapper_global_wrapper_stencil_3 = (float) enc2_weights_0_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9766 = _enc2_weights_0_im_global_wrapper_global_wrapper_stencil_3 * _enc1_sum_stencil_5;
  float _9767 = _enc2_conv3x3_stencil_5 + _9766;
  return _9767;
}

//store is: enc2_conv1x3.stencil(0, 0, 0) = (enc2_conv1x3.stencil(0, 0, 0) + (enc2_weights_1_im_global_wrapper_global_wrapper.stencil(enc2_conv3x1_s1_r_8_x_2, 0, enc2_conv1x3_s1_r_7_z_2, enc2_conv1x3_s1_r_7_x_2)*select(((enc2_conv3x1_s1_r_8_y_2 + enc2_sum_s0_i_2) < 46), enc2_conv3x3.stencil(0, 0, 0), 0.000000f)))
hw_uint<32> hcompute_enc2_conv1x3_stencil_5(hw_uint<32>& enc2_conv1x3_stencil, hw_uint<32>& enc2_conv3x3_stencil, hw_uint<32>& enc2_weights_1_im_global_wrapper_global_wrapper_stencil, const int _enc2_conv3x1_s1_r_8_y_2, const int _enc2_sum_s0_i_2) {
  float _enc2_conv1x3_stencil_5 = (float) enc2_conv1x3_stencil.extract<0, 31>();

  float _enc2_conv3x3_stencil_6 = (float) enc2_conv3x3_stencil.extract<0, 31>();

  float _enc2_weights_1_im_global_wrapper_global_wrapper_stencil_3 = (float) enc2_weights_1_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9787 = float_from_bits(0 /* 0 */);
  int32_t _9788 = _enc2_conv3x1_s1_r_8_y_2 + _enc2_sum_s0_i_2;
  bool _9789 = _9788 < 46;
  float _9790 = (float)(_9789 ? _enc2_conv3x3_stencil_6 : _9787);
  float _9791 = _enc2_weights_1_im_global_wrapper_global_wrapper_stencil_3 * _9790;
  float _9792 = _enc2_conv1x3_stencil_5 + _9791;
  return _9792;
}

//store is: enc2_conv3x1.stencil(0, 0, 0) = (enc2_conv3x1.stencil(0, 0, 0) + (enc2_weights_2_im_global_wrapper_global_wrapper.stencil((enc2_sum_s0_c_2 + 128), enc2_conv3x1_s1_r_8_y_2, 0, enc2_conv3x1_s1_r_8_x_2)*enc2_conv1x3.stencil(0, 0, 0)))
hw_uint<32> hcompute_enc2_conv3x1_stencil_5(hw_uint<32>& enc2_conv1x3_stencil, hw_uint<32>& enc2_conv3x1_stencil, hw_uint<32>& enc2_weights_2_im_global_wrapper_global_wrapper_stencil) {
  float _enc2_conv1x3_stencil_6 = (float) enc2_conv1x3_stencil.extract<0, 31>();

  float _enc2_conv3x1_stencil_5 = (float) enc2_conv3x1_stencil.extract<0, 31>();

  float _enc2_weights_2_im_global_wrapper_global_wrapper_stencil_3 = (float) enc2_weights_2_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9808 = _enc2_weights_2_im_global_wrapper_global_wrapper_stencil_3 * _enc2_conv1x3_stencil_6;
  float _9809 = _enc2_conv3x1_stencil_5 + _9808;
  return _9809;
}

//store is: enc2_conv1x1.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_enc2_conv1x1_stencil_4() {
  float _9818 = float_from_bits(0 /* 0 */);
  return _9818;
}

//store is: enc2_conv1x1.stencil(0, 0, 0) = (enc2_conv1x1.stencil(0, 0, 0) + (enc2_weights_3_im_global_wrapper_global_wrapper.stencil((enc2_sum_s0_c_2 + 128), 0, 0, enc2_conv1x1_s1_r_9_x_2)*enc1_sum.stencil((enc2_conv1x1_s1_r_9_x_2 + 64), ((enc2_sum_s0_i_2*2) + 8), ((enc2_sum_s0_j*2) + 41))))
hw_uint<32> hcompute_enc2_conv1x1_stencil_5(hw_uint<32>& enc1_sum_stencil, hw_uint<32>& enc2_conv1x1_stencil, hw_uint<32>& enc2_weights_3_im_global_wrapper_global_wrapper_stencil) {
  float _enc1_sum_stencil_6 = (float) enc1_sum_stencil.extract<0, 31>();

  float _enc2_conv1x1_stencil_5 = (float) enc2_conv1x1_stencil.extract<0, 31>();

  float _enc2_weights_3_im_global_wrapper_global_wrapper_stencil_3 = (float) enc2_weights_3_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9821 = _enc2_weights_3_im_global_wrapper_global_wrapper_stencil_3 * _enc1_sum_stencil_6;
  float _9822 = _enc2_conv1x1_stencil_5 + _9821;
  return _9822;
}

//store is: enc2_sum.stencil((enc2_sum_s0_c_2 + 128), (enc2_sum_s0_i_2 + 4), (enc2_sum_s0_j + 19)) = (enc2_conv3x1.stencil(0, 0, 0) + enc2_conv1x1.stencil(0, 0, 0))
hw_uint<32> hcompute_enc2_sum_stencil_2(hw_uint<32>& enc2_conv1x1_stencil, hw_uint<32>& enc2_conv3x1_stencil) {
  float _enc2_conv1x1_stencil_6 = (float) enc2_conv1x1_stencil.extract<0, 31>();

  float _enc2_conv3x1_stencil_6 = (float) enc2_conv3x1_stencil.extract<0, 31>();

  float _9836 = _enc2_conv3x1_stencil_6 + _enc2_conv1x1_stencil_6;
  return _9836;
}

//store is: enc3_weights_3_im_global_wrapper_global_wrapper.stencil(enc3_weights_3_im_global_wrapper_global_wrapper_s0__0, 0, 0, enc3_weights_3_im_global_wrapper_global_wrapper_s0__3) = enc3_weights_3_im_global_wrapper.stencil(enc3_weights_3_im_global_wrapper_global_wrapper_s0__0, 0, 0, enc3_weights_3_im_global_wrapper_global_wrapper_s0__3)
hw_uint<32> hcompute_enc3_weights_3_im_global_wrapper_global_wrapper_stencil(hw_uint<32>& enc3_weights_3_im_global_wrapper_stencil) {
  float _enc3_weights_3_im_global_wrapper_stencil_1 = (float) enc3_weights_3_im_global_wrapper_stencil.extract<0, 31>();

  return _enc3_weights_3_im_global_wrapper_stencil_1;
}

//store is: enc3_weights_0_im_global_wrapper_global_wrapper.stencil(enc3_weights_0_im_global_wrapper_global_wrapper_s0__0, enc3_weights_0_im_global_wrapper_global_wrapper_s0__1, enc3_weights_0_im_global_wrapper_global_wrapper_s0__2, enc3_weights_0_im_global_wrapper_global_wrapper_s0__3) = enc3_weights_0_im_global_wrapper.stencil(enc3_weights_0_im_global_wrapper_global_wrapper_s0__0, enc3_weights_0_im_global_wrapper_global_wrapper_s0__1, enc3_weights_0_im_global_wrapper_global_wrapper_s0__2, enc3_weights_0_im_global_wrapper_global_wrapper_s0__3)
hw_uint<32> hcompute_enc3_weights_0_im_global_wrapper_global_wrapper_stencil(hw_uint<32>& enc3_weights_0_im_global_wrapper_stencil) {
  float _enc3_weights_0_im_global_wrapper_stencil_1 = (float) enc3_weights_0_im_global_wrapper_stencil.extract<0, 31>();

  return _enc3_weights_0_im_global_wrapper_stencil_1;
}

//store is: enc3_weights_1_im_global_wrapper_global_wrapper.stencil(enc3_weights_1_im_global_wrapper_global_wrapper_s0__0, 0, enc3_weights_1_im_global_wrapper_global_wrapper_s0__2, enc3_weights_1_im_global_wrapper_global_wrapper_s0__3) = enc3_weights_1_im_global_wrapper.stencil(enc3_weights_1_im_global_wrapper_global_wrapper_s0__0, 0, enc3_weights_1_im_global_wrapper_global_wrapper_s0__2, enc3_weights_1_im_global_wrapper_global_wrapper_s0__3)
hw_uint<32> hcompute_enc3_weights_1_im_global_wrapper_global_wrapper_stencil(hw_uint<32>& enc3_weights_1_im_global_wrapper_stencil) {
  float _enc3_weights_1_im_global_wrapper_stencil_1 = (float) enc3_weights_1_im_global_wrapper_stencil.extract<0, 31>();

  return _enc3_weights_1_im_global_wrapper_stencil_1;
}

//store is: enc3_weights_2_im_global_wrapper_global_wrapper.stencil(enc3_weights_2_im_global_wrapper_global_wrapper_s0__0, enc3_weights_2_im_global_wrapper_global_wrapper_s0__1, 0, enc3_weights_2_im_global_wrapper_global_wrapper_s0__3) = enc3_weights_2_im_global_wrapper.stencil(enc3_weights_2_im_global_wrapper_global_wrapper_s0__0, enc3_weights_2_im_global_wrapper_global_wrapper_s0__1, 0, enc3_weights_2_im_global_wrapper_global_wrapper_s0__3)
hw_uint<32> hcompute_enc3_weights_2_im_global_wrapper_global_wrapper_stencil(hw_uint<32>& enc3_weights_2_im_global_wrapper_stencil) {
  float _enc3_weights_2_im_global_wrapper_stencil_1 = (float) enc3_weights_2_im_global_wrapper_stencil.extract<0, 31>();

  return _enc3_weights_2_im_global_wrapper_stencil_1;
}

//store is: enc3_conv3x1.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_enc3_conv3x1_stencil() {
  float _9848 = float_from_bits(0 /* 0 */);
  return _9848;
}

//store is: enc3_conv1x3.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_enc3_conv1x3_stencil() {
  float _9851 = float_from_bits(0 /* 0 */);
  return _9851;
}

//store is: enc3_conv3x3.stencil((max(enc3_conv1x3_s1_r_11_x, 39) + -39), (min((enc3_conv3x1_s1_r_12_y + enc3_sum_s0_i), 1) + -1), 0) = 0.000000f
hw_uint<32> hcompute_enc3_conv3x3_stencil() {
  float _9859 = float_from_bits(0 /* 0 */);
  return _9859;
}

//store is: enc3_conv3x3.stencil((max(enc3_conv1x3_s1_r_11_x, 39) + -39), (min((enc3_conv3x1_s1_r_12_y + enc3_sum_s0_i), 1) + -1), 0) = (enc3_conv3x3.stencil((max(enc3_conv1x3_s1_r_11_x, 39) + -39), (min((enc3_conv3x1_s1_r_12_y + enc3_sum_s0_i), 1) + -1), 0) + (enc3_weights_0_im_global_wrapper_global_wrapper.stencil(enc3_conv1x3_s1_r_11_x, enc3_conv3x3_s1_r_10_y, enc3_conv3x3_s1_r_10_z, enc3_conv3x3_s1_r_10_x)*select(((enc3_conv3x3_s1_r_10_y + ((enc3_conv3x1_s1_r_12_y + enc3_sum_s0_i)*2)) < 3), 0.000000f, enc2_sum.stencil((enc3_conv3x3_s1_r_10_x + 128), (max((((enc3_conv3x1_s1_r_12_y + enc3_sum_s0_i)*2) + enc3_conv3x3_s1_r_10_y), 3) + 1), ((((enc3_conv1x3_s1_r_11_z + enc3_sum_s0_j)*2) + enc3_conv3x3_s1_r_10_z) + 16)))))
hw_uint<32> hcompute_enc3_conv3x3_stencil_1(hw_uint<32>& enc2_sum_stencil, hw_uint<32>& enc3_conv3x3_stencil, hw_uint<32>& enc3_weights_0_im_global_wrapper_global_wrapper_stencil, const int _enc3_conv3x1_s1_r_12_y, const int _enc3_conv3x3_s1_r_10_y, const int _enc3_sum_s0_i) {
  float _enc2_sum_stencil_1 = (float) enc2_sum_stencil.extract<0, 31>();

  float _enc3_conv3x3_stencil_1 = (float) enc3_conv3x3_stencil.extract<0, 31>();

  float _enc3_weights_0_im_global_wrapper_global_wrapper_stencil_1 = (float) enc3_weights_0_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9867 = float_from_bits(0 /* 0 */);
  int32_t _9868 = _enc3_conv3x1_s1_r_12_y + _enc3_sum_s0_i;
  int32_t _9869 = _9868 * 2;
  int32_t _9870 = _enc3_conv3x3_s1_r_10_y + _9869;
  bool _9871 = _9870 < 3;
  float _9872 = (float)(_9871 ? _9867 : _enc2_sum_stencil_1);
  float _9873 = _enc3_weights_0_im_global_wrapper_global_wrapper_stencil_1 * _9872;
  float _9874 = _enc3_conv3x3_stencil_1 + _9873;
  return _9874;
}

//store is: enc3_conv1x3.stencil(0, 0, 0) = (enc3_conv1x3.stencil(0, 0, 0) + (enc3_weights_1_im_global_wrapper_global_wrapper.stencil(enc3_conv3x1_s1_r_12_x, 0, enc3_conv1x3_s1_r_11_z, enc3_conv1x3_s1_r_11_x)*select(((40 <= enc3_conv1x3_s1_r_11_x) || ((enc3_conv3x1_s1_r_12_y + enc3_sum_s0_i) < 1)), 0.000000f, enc3_conv3x3.stencil(0, 0, 0))))
hw_uint<32> hcompute_enc3_conv1x3_stencil_1(hw_uint<32>& enc3_conv1x3_stencil, hw_uint<32>& enc3_conv3x3_stencil, hw_uint<32>& enc3_weights_1_im_global_wrapper_global_wrapper_stencil, const int _enc3_conv1x3_s1_r_11_x, const int _enc3_conv3x1_s1_r_12_y, const int _enc3_sum_s0_i) {
  float _enc3_conv1x3_stencil_1 = (float) enc3_conv1x3_stencil.extract<0, 31>();

  float _enc3_conv3x3_stencil_2 = (float) enc3_conv3x3_stencil.extract<0, 31>();

  float _enc3_weights_1_im_global_wrapper_global_wrapper_stencil_1 = (float) enc3_weights_1_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9906 = float_from_bits(0 /* 0 */);
  bool _9907 = 40 <= _enc3_conv1x3_s1_r_11_x;
  int32_t _9908 = _enc3_conv3x1_s1_r_12_y + _enc3_sum_s0_i;
  bool _9909 = _9908 < 1;
  bool _9910 = _9907 || _9909;
  float _9911 = (float)(_9910 ? _9906 : _enc3_conv3x3_stencil_2);
  float _9912 = _enc3_weights_1_im_global_wrapper_global_wrapper_stencil_1 * _9911;
  float _9913 = _enc3_conv1x3_stencil_1 + _9912;
  return _9913;
}

//store is: enc3_conv3x1.stencil(0, 0, 0) = (enc3_conv3x1.stencil(0, 0, 0) + (enc3_weights_2_im_global_wrapper_global_wrapper.stencil(enc3_sum_s0_c, enc3_conv3x1_s1_r_12_y, 0, enc3_conv3x1_s1_r_12_x)*enc3_conv1x3.stencil(0, 0, 0)))
hw_uint<32> hcompute_enc3_conv3x1_stencil_1(hw_uint<32>& enc3_conv1x3_stencil, hw_uint<32>& enc3_conv3x1_stencil, hw_uint<32>& enc3_weights_2_im_global_wrapper_global_wrapper_stencil) {
  float _enc3_conv1x3_stencil_2 = (float) enc3_conv1x3_stencil.extract<0, 31>();

  float _enc3_conv3x1_stencil_1 = (float) enc3_conv3x1_stencil.extract<0, 31>();

  float _enc3_weights_2_im_global_wrapper_global_wrapper_stencil_1 = (float) enc3_weights_2_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9933 = _enc3_weights_2_im_global_wrapper_global_wrapper_stencil_1 * _enc3_conv1x3_stencil_2;
  float _9934 = _enc3_conv3x1_stencil_1 + _9933;
  return _9934;
}

//store is: enc3_conv1x1.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_enc3_conv1x1_stencil() {
  float _9942 = float_from_bits(0 /* 0 */);
  return _9942;
}

//store is: enc3_conv1x1.stencil(0, 0, 0) = (enc3_conv1x1.stencil(0, 0, 0) + (enc3_weights_3_im_global_wrapper_global_wrapper.stencil(enc3_sum_s0_c, 0, 0, enc3_conv1x1_s1_r_13_x)*enc2_sum.stencil((enc3_conv1x1_s1_r_13_x + 128), ((enc3_sum_s0_i*2) + 4), ((enc3_sum_s0_j*2) + 19))))
hw_uint<32> hcompute_enc3_conv1x1_stencil_1(hw_uint<32>& enc2_sum_stencil, hw_uint<32>& enc3_conv1x1_stencil, hw_uint<32>& enc3_weights_3_im_global_wrapper_global_wrapper_stencil) {
  float _enc2_sum_stencil_2 = (float) enc2_sum_stencil.extract<0, 31>();

  float _enc3_conv1x1_stencil_1 = (float) enc3_conv1x1_stencil.extract<0, 31>();

  float _enc3_weights_3_im_global_wrapper_global_wrapper_stencil_1 = (float) enc3_weights_3_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9945 = _enc3_weights_3_im_global_wrapper_global_wrapper_stencil_1 * _enc2_sum_stencil_2;
  float _9946 = _enc3_conv1x1_stencil_1 + _9945;
  return _9946;
}

//store is: enc3_sum.stencil(enc3_sum_s0_c, (enc3_sum_s0_i + 2), (enc3_sum_s0_j + 8)) = (enc3_conv3x1.stencil(0, 0, 0) + enc3_conv1x1.stencil(0, 0, 0))
hw_uint<32> hcompute_enc3_sum_stencil(hw_uint<32>& enc3_conv1x1_stencil, hw_uint<32>& enc3_conv3x1_stencil) {
  float _enc3_conv1x1_stencil_2 = (float) enc3_conv1x1_stencil.extract<0, 31>();

  float _enc3_conv3x1_stencil_2 = (float) enc3_conv3x1_stencil.extract<0, 31>();

  float _9959 = _enc3_conv3x1_stencil_2 + _enc3_conv1x1_stencil_2;
  return _9959;
}

//store is: enc3_conv3x1.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_enc3_conv3x1_stencil_2() {
  float _9966 = float_from_bits(0 /* 0 */);
  return _9966;
}

//store is: enc3_conv1x3.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_enc3_conv1x3_stencil_2() {
  float _9969 = float_from_bits(0 /* 0 */);
  return _9969;
}

//store is: enc3_conv3x3.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_enc3_conv3x3_stencil_2() {
  float _9972 = float_from_bits(0 /* 0 */);
  return _9972;
}

//store is: enc3_conv3x3.stencil(0, 0, 0) = (enc3_conv3x3.stencil(0, 0, 0) + (enc3_weights_0_im_global_wrapper_global_wrapper.stencil(enc3_conv1x3_s1_r_11_x_1, enc3_conv3x3_s1_r_10_y_1, enc3_conv3x3_s1_r_10_z_1, enc3_conv3x3_s1_r_10_x_1)*enc2_sum.stencil((enc3_conv3x3_s1_r_10_x_1 + 128), ((((enc3_conv3x1_s1_r_12_y_1 + enc3_sum_s0_i_1)*2) + enc3_conv3x3_s1_r_10_y_1) + 1), ((((enc3_conv1x3_s1_r_11_z_1 + enc3_sum_s0_j)*2) + enc3_conv3x3_s1_r_10_z_1) + 16))))
hw_uint<32> hcompute_enc3_conv3x3_stencil_3(hw_uint<32>& enc2_sum_stencil, hw_uint<32>& enc3_conv3x3_stencil, hw_uint<32>& enc3_weights_0_im_global_wrapper_global_wrapper_stencil) {
  float _enc2_sum_stencil_3 = (float) enc2_sum_stencil.extract<0, 31>();

  float _enc3_conv3x3_stencil_3 = (float) enc3_conv3x3_stencil.extract<0, 31>();

  float _enc3_weights_0_im_global_wrapper_global_wrapper_stencil_2 = (float) enc3_weights_0_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9975 = _enc3_weights_0_im_global_wrapper_global_wrapper_stencil_2 * _enc2_sum_stencil_3;
  float _9976 = _enc3_conv3x3_stencil_3 + _9975;
  return _9976;
}

//store is: enc3_conv1x3.stencil(0, 0, 0) = (enc3_conv1x3.stencil(0, 0, 0) + (enc3_weights_1_im_global_wrapper_global_wrapper.stencil(enc3_conv3x1_s1_r_12_x_1, 0, enc3_conv1x3_s1_r_11_z_1, enc3_conv1x3_s1_r_11_x_1)*enc3_conv3x3.stencil(0, 0, 0)))
hw_uint<32> hcompute_enc3_conv1x3_stencil_3(hw_uint<32>& enc3_conv1x3_stencil, hw_uint<32>& enc3_conv3x3_stencil, hw_uint<32>& enc3_weights_1_im_global_wrapper_global_wrapper_stencil) {
  float _enc3_conv1x3_stencil_3 = (float) enc3_conv1x3_stencil.extract<0, 31>();

  float _enc3_conv3x3_stencil_4 = (float) enc3_conv3x3_stencil.extract<0, 31>();

  float _enc3_weights_1_im_global_wrapper_global_wrapper_stencil_2 = (float) enc3_weights_1_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _9993 = _enc3_weights_1_im_global_wrapper_global_wrapper_stencil_2 * _enc3_conv3x3_stencil_4;
  float _9994 = _enc3_conv1x3_stencil_3 + _9993;
  return _9994;
}

//store is: enc3_conv1x3.stencil(0, 0, 0) = enc3_conv1x3.stencil(0, 0, 0)
hw_uint<32> hcompute_enc3_conv1x3_stencil_4(hw_uint<32>& enc3_conv1x3_stencil) {
  float _enc3_conv1x3_stencil_4 = (float) enc3_conv1x3_stencil.extract<0, 31>();

  return _enc3_conv1x3_stencil_4;
}

//store is: enc3_conv3x1.stencil(0, 0, 0) = (enc3_conv3x1.stencil(0, 0, 0) + (enc3_weights_2_im_global_wrapper_global_wrapper.stencil(enc3_sum_s0_c_1, enc3_conv3x1_s1_r_12_y_1, 0, enc3_conv3x1_s1_r_12_x_1)*enc3_conv1x3.stencil(0, 0, 0)))
hw_uint<32> hcompute_enc3_conv3x1_stencil_3(hw_uint<32>& enc3_conv1x3_stencil, hw_uint<32>& enc3_conv3x1_stencil, hw_uint<32>& enc3_weights_2_im_global_wrapper_global_wrapper_stencil) {
  float _enc3_conv1x3_stencil_5 = (float) enc3_conv1x3_stencil.extract<0, 31>();

  float _enc3_conv3x1_stencil_3 = (float) enc3_conv3x1_stencil.extract<0, 31>();

  float _enc3_weights_2_im_global_wrapper_global_wrapper_stencil_2 = (float) enc3_weights_2_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _10003 = _enc3_weights_2_im_global_wrapper_global_wrapper_stencil_2 * _enc3_conv1x3_stencil_5;
  float _10004 = _enc3_conv3x1_stencil_3 + _10003;
  return _10004;
}

//store is: enc3_conv1x1.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_enc3_conv1x1_stencil_2() {
  float _10012 = float_from_bits(0 /* 0 */);
  return _10012;
}

//store is: enc3_conv1x1.stencil(0, 0, 0) = (enc3_conv1x1.stencil(0, 0, 0) + (enc3_weights_3_im_global_wrapper_global_wrapper.stencil(enc3_sum_s0_c_1, 0, 0, enc3_conv1x1_s1_r_13_x_1)*enc2_sum.stencil((enc3_conv1x1_s1_r_13_x_1 + 128), ((enc3_sum_s0_i_1*2) + 4), ((enc3_sum_s0_j*2) + 19))))
hw_uint<32> hcompute_enc3_conv1x1_stencil_3(hw_uint<32>& enc2_sum_stencil, hw_uint<32>& enc3_conv1x1_stencil, hw_uint<32>& enc3_weights_3_im_global_wrapper_global_wrapper_stencil) {
  float _enc2_sum_stencil_4 = (float) enc2_sum_stencil.extract<0, 31>();

  float _enc3_conv1x1_stencil_3 = (float) enc3_conv1x1_stencil.extract<0, 31>();

  float _enc3_weights_3_im_global_wrapper_global_wrapper_stencil_2 = (float) enc3_weights_3_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _10015 = _enc3_weights_3_im_global_wrapper_global_wrapper_stencil_2 * _enc2_sum_stencil_4;
  float _10016 = _enc3_conv1x1_stencil_3 + _10015;
  return _10016;
}

//store is: enc3_sum.stencil(enc3_sum_s0_c_1, (enc3_sum_s0_i_1 + 2), (enc3_sum_s0_j + 8)) = (enc3_conv3x1.stencil(0, 0, 0) + enc3_conv1x1.stencil(0, 0, 0))
hw_uint<32> hcompute_enc3_sum_stencil_1(hw_uint<32>& enc3_conv1x1_stencil, hw_uint<32>& enc3_conv3x1_stencil) {
  float _enc3_conv1x1_stencil_4 = (float) enc3_conv1x1_stencil.extract<0, 31>();

  float _enc3_conv3x1_stencil_4 = (float) enc3_conv3x1_stencil.extract<0, 31>();

  float _10029 = _enc3_conv3x1_stencil_4 + _enc3_conv1x1_stencil_4;
  return _10029;
}

//store is: enc3_conv3x1.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_enc3_conv3x1_stencil_4() {
  float _10036 = float_from_bits(0 /* 0 */);
  return _10036;
}

//store is: enc3_conv1x3.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_enc3_conv1x3_stencil_5() {
  float _10039 = float_from_bits(0 /* 0 */);
  return _10039;
}

//store is: enc3_conv3x3.stencil((max(enc3_conv1x3_s1_r_11_x_3, 39) + -39), (max((enc3_conv3x1_s1_r_12_y_2 + enc3_sum_s0_i_2), 23) + -23), 0) = 0.000000f
hw_uint<32> hcompute_enc3_conv3x3_stencil_4() {
  float _10047 = float_from_bits(0 /* 0 */);
  return _10047;
}

//store is: enc3_conv3x3.stencil((max(enc3_conv1x3_s1_r_11_x_3, 39) + -39), (max((enc3_conv3x1_s1_r_12_y_2 + enc3_sum_s0_i_2), 23) + -23), 0) = (enc3_conv3x3.stencil((max(enc3_conv1x3_s1_r_11_x_3, 39) + -39), (max((enc3_conv3x1_s1_r_12_y_2 + enc3_sum_s0_i_2), 23) + -23), 0) + (enc3_weights_0_im_global_wrapper_global_wrapper.stencil(enc3_conv1x3_s1_r_11_x_3, enc3_conv3x3_s1_r_10_y_2, enc3_conv3x3_s1_r_10_z_2, enc3_conv3x3_s1_r_10_x_2)*select(((enc3_conv3x3_s1_r_10_y_2 + ((enc3_conv3x1_s1_r_12_y_2 + enc3_sum_s0_i_2)*2)) < 48), enc2_sum.stencil((enc3_conv3x3_s1_r_10_x_2 + 128), (min((((enc3_conv3x1_s1_r_12_y_2 + enc3_sum_s0_i_2)*2) + enc3_conv3x3_s1_r_10_y_2), 47) + 1), ((((enc3_conv1x3_s1_r_11_z_2 + enc3_sum_s0_j)*2) + enc3_conv3x3_s1_r_10_z_2) + 16)), 0.000000f)))
hw_uint<32> hcompute_enc3_conv3x3_stencil_5(hw_uint<32>& enc2_sum_stencil, hw_uint<32>& enc3_conv3x3_stencil, hw_uint<32>& enc3_weights_0_im_global_wrapper_global_wrapper_stencil, const int _enc3_conv3x1_s1_r_12_y_2, const int _enc3_conv3x3_s1_r_10_y_2, const int _enc3_sum_s0_i_2) {
  float _enc2_sum_stencil_5 = (float) enc2_sum_stencil.extract<0, 31>();

  float _enc3_conv3x3_stencil_5 = (float) enc3_conv3x3_stencil.extract<0, 31>();

  float _enc3_weights_0_im_global_wrapper_global_wrapper_stencil_3 = (float) enc3_weights_0_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _10055 = float_from_bits(0 /* 0 */);
  int32_t _10056 = _enc3_conv3x1_s1_r_12_y_2 + _enc3_sum_s0_i_2;
  int32_t _10057 = _10056 * 2;
  int32_t _10058 = _enc3_conv3x3_s1_r_10_y_2 + _10057;
  bool _10059 = _10058 < 48;
  float _10060 = (float)(_10059 ? _enc2_sum_stencil_5 : _10055);
  float _10061 = _enc3_weights_0_im_global_wrapper_global_wrapper_stencil_3 * _10060;
  float _10062 = _enc3_conv3x3_stencil_5 + _10061;
  return _10062;
}

//store is: enc3_conv1x3.stencil(0, 0, 0) = (enc3_conv1x3.stencil(0, 0, 0) + (enc3_weights_1_im_global_wrapper_global_wrapper.stencil(enc3_conv3x1_s1_r_12_x_2, 0, enc3_conv1x3_s1_r_11_z_2, enc3_conv1x3_s1_r_11_x_3)*select(((40 <= enc3_conv1x3_s1_r_11_x_3) || (24 <= (enc3_conv3x1_s1_r_12_y_2 + enc3_sum_s0_i_2))), 0.000000f, enc3_conv3x3.stencil(0, 0, 0))))
hw_uint<32> hcompute_enc3_conv1x3_stencil_6(hw_uint<32>& enc3_conv1x3_stencil, hw_uint<32>& enc3_conv3x3_stencil, hw_uint<32>& enc3_weights_1_im_global_wrapper_global_wrapper_stencil, const int _enc3_conv1x3_s1_r_11_x_3, const int _enc3_conv3x1_s1_r_12_y_2, const int _enc3_sum_s0_i_2) {
  float _enc3_conv1x3_stencil_6 = (float) enc3_conv1x3_stencil.extract<0, 31>();

  float _enc3_conv3x3_stencil_6 = (float) enc3_conv3x3_stencil.extract<0, 31>();

  float _enc3_weights_1_im_global_wrapper_global_wrapper_stencil_3 = (float) enc3_weights_1_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _10094 = float_from_bits(0 /* 0 */);
  bool _10095 = 40 <= _enc3_conv1x3_s1_r_11_x_3;
  int32_t _10096 = _enc3_conv3x1_s1_r_12_y_2 + _enc3_sum_s0_i_2;
  bool _10097 = 24 <= _10096;
  bool _10098 = _10095 || _10097;
  float _10099 = (float)(_10098 ? _10094 : _enc3_conv3x3_stencil_6);
  float _10100 = _enc3_weights_1_im_global_wrapper_global_wrapper_stencil_3 * _10099;
  float _10101 = _enc3_conv1x3_stencil_6 + _10100;
  return _10101;
}

//store is: enc3_conv3x1.stencil(0, 0, 0) = (enc3_conv3x1.stencil(0, 0, 0) + (enc3_weights_2_im_global_wrapper_global_wrapper.stencil(enc3_sum_s0_c_2, enc3_conv3x1_s1_r_12_y_2, 0, enc3_conv3x1_s1_r_12_x_2)*enc3_conv1x3.stencil(0, 0, 0)))
hw_uint<32> hcompute_enc3_conv3x1_stencil_5(hw_uint<32>& enc3_conv1x3_stencil, hw_uint<32>& enc3_conv3x1_stencil, hw_uint<32>& enc3_weights_2_im_global_wrapper_global_wrapper_stencil) {
  float _enc3_conv1x3_stencil_7 = (float) enc3_conv1x3_stencil.extract<0, 31>();

  float _enc3_conv3x1_stencil_5 = (float) enc3_conv3x1_stencil.extract<0, 31>();

  float _enc3_weights_2_im_global_wrapper_global_wrapper_stencil_3 = (float) enc3_weights_2_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _10121 = _enc3_weights_2_im_global_wrapper_global_wrapper_stencil_3 * _enc3_conv1x3_stencil_7;
  float _10122 = _enc3_conv3x1_stencil_5 + _10121;
  return _10122;
}

//store is: enc3_conv1x1.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_enc3_conv1x1_stencil_4() {
  float _10130 = float_from_bits(0 /* 0 */);
  return _10130;
}

//store is: enc3_conv1x1.stencil(0, 0, 0) = (enc3_conv1x1.stencil(0, 0, 0) + (enc3_weights_3_im_global_wrapper_global_wrapper.stencil(enc3_sum_s0_c_2, 0, 0, enc3_conv1x1_s1_r_13_x_2)*enc2_sum.stencil((enc3_conv1x1_s1_r_13_x_2 + 128), ((enc3_sum_s0_i_2*2) + 4), ((enc3_sum_s0_j*2) + 19))))
hw_uint<32> hcompute_enc3_conv1x1_stencil_5(hw_uint<32>& enc2_sum_stencil, hw_uint<32>& enc3_conv1x1_stencil, hw_uint<32>& enc3_weights_3_im_global_wrapper_global_wrapper_stencil) {
  float _enc2_sum_stencil_6 = (float) enc2_sum_stencil.extract<0, 31>();

  float _enc3_conv1x1_stencil_5 = (float) enc3_conv1x1_stencil.extract<0, 31>();

  float _enc3_weights_3_im_global_wrapper_global_wrapper_stencil_3 = (float) enc3_weights_3_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _10133 = _enc3_weights_3_im_global_wrapper_global_wrapper_stencil_3 * _enc2_sum_stencil_6;
  float _10134 = _enc3_conv1x1_stencil_5 + _10133;
  return _10134;
}

//store is: enc3_sum.stencil(enc3_sum_s0_c_2, (enc3_sum_s0_i_2 + 2), (enc3_sum_s0_j + 8)) = (enc3_conv3x1.stencil(0, 0, 0) + enc3_conv1x1.stencil(0, 0, 0))
hw_uint<32> hcompute_enc3_sum_stencil_2(hw_uint<32>& enc3_conv1x1_stencil, hw_uint<32>& enc3_conv3x1_stencil) {
  float _enc3_conv1x1_stencil_6 = (float) enc3_conv1x1_stencil.extract<0, 31>();

  float _enc3_conv3x1_stencil_6 = (float) enc3_conv3x1_stencil.extract<0, 31>();

  float _10147 = _enc3_conv3x1_stencil_6 + _enc3_conv1x1_stencil_6;
  return _10147;
}

//store is: dec3_weights_0_im_global_wrapper_global_wrapper.stencil(dec3_weights_0_im_global_wrapper_global_wrapper_s0__0, dec3_weights_0_im_global_wrapper_global_wrapper_s0__1, dec3_weights_0_im_global_wrapper_global_wrapper_s0__2, dec3_weights_0_im_global_wrapper_global_wrapper_s0__3) = dec3_weights_0_im_global_wrapper.stencil(dec3_weights_0_im_global_wrapper_global_wrapper_s0__0, dec3_weights_0_im_global_wrapper_global_wrapper_s0__1, dec3_weights_0_im_global_wrapper_global_wrapper_s0__2, dec3_weights_0_im_global_wrapper_global_wrapper_s0__3)
hw_uint<32> hcompute_dec3_weights_0_im_global_wrapper_global_wrapper_stencil(hw_uint<32>& dec3_weights_0_im_global_wrapper_stencil) {
  float _dec3_weights_0_im_global_wrapper_stencil_1 = (float) dec3_weights_0_im_global_wrapper_stencil.extract<0, 31>();

  return _dec3_weights_0_im_global_wrapper_stencil_1;
}

//store is: dec3_weights_1_im_global_wrapper_global_wrapper.stencil(dec3_weights_1_im_global_wrapper_global_wrapper_s0__0, 0, dec3_weights_1_im_global_wrapper_global_wrapper_s0__2, dec3_weights_1_im_global_wrapper_global_wrapper_s0__3) = dec3_weights_1_im_global_wrapper.stencil(dec3_weights_1_im_global_wrapper_global_wrapper_s0__0, 0, dec3_weights_1_im_global_wrapper_global_wrapper_s0__2, dec3_weights_1_im_global_wrapper_global_wrapper_s0__3)
hw_uint<32> hcompute_dec3_weights_1_im_global_wrapper_global_wrapper_stencil(hw_uint<32>& dec3_weights_1_im_global_wrapper_stencil) {
  float _dec3_weights_1_im_global_wrapper_stencil_1 = (float) dec3_weights_1_im_global_wrapper_stencil.extract<0, 31>();

  return _dec3_weights_1_im_global_wrapper_stencil_1;
}

//store is: dec3_weights_2_im_global_wrapper_global_wrapper.stencil((dec3_weights_2_im_global_wrapper_global_wrapper_s0__0 + 1), dec3_weights_2_im_global_wrapper_global_wrapper_s0__1, 0, dec3_weights_2_im_global_wrapper_global_wrapper_s0__3) = dec3_weights_2_im_global_wrapper.stencil(dec3_weights_2_im_global_wrapper_global_wrapper_s0__0, dec3_weights_2_im_global_wrapper_global_wrapper_s0__1, 0, dec3_weights_2_im_global_wrapper_global_wrapper_s0__3)
hw_uint<32> hcompute_dec3_weights_2_im_global_wrapper_global_wrapper_stencil(hw_uint<32>& dec3_weights_2_im_global_wrapper_stencil) {
  float _dec3_weights_2_im_global_wrapper_stencil_1 = (float) dec3_weights_2_im_global_wrapper_stencil.extract<0, 31>();

  return _dec3_weights_2_im_global_wrapper_stencil_1;
}

//store is: dec3_conv3x1.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_dec3_conv3x1_stencil() {
  float _10158 = float_from_bits(0 /* 0 */);
  return _10158;
}

//store is: dec3_conv1x3.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_dec3_conv1x3_stencil_1() {
  float _10161 = float_from_bits(0 /* 0 */);
  return _10161;
}

//store is: dec3_conv3x3.stencil((max(dec3_conv1x3_s1_r_15_x, 39) + -39), (min((dec3_conv3x1_s1_r_16_y + dec3_sum_s0_i), 1) + -1), 0) = 0.000000f
hw_uint<32> hcompute_dec3_conv3x3_stencil() {
  float _10169 = float_from_bits(0 /* 0 */);
  return _10169;
}

//store is: dec3_conv3x3.stencil((max(dec3_conv1x3_s1_r_15_x, 39) + -39), (min((dec3_conv3x1_s1_r_16_y + dec3_sum_s0_i), 1) + -1), 0) = (dec3_conv3x3.stencil((max(dec3_conv1x3_s1_r_15_x, 39) + -39), (min((dec3_conv3x1_s1_r_16_y + dec3_sum_s0_i), 1) + -1), 0) + (dec3_weights_0_im_global_wrapper_global_wrapper.stencil(dec3_conv1x3_s1_r_15_x, dec3_conv3x3_s1_r_14_y, dec3_conv3x3_s1_r_14_z, dec3_conv3x3_s1_r_14_x)*select(((40 <= dec3_conv3x3_s1_r_14_x) || ((dec3_conv3x3_s1_r_14_y + (dec3_conv3x1_s1_r_16_y + dec3_sum_s0_i)) < 2)), 0.000000f, enc3_sum.stencil(min(dec3_conv3x3_s1_r_14_x, 39), max(((dec3_conv3x1_s1_r_16_y + dec3_sum_s0_i) + dec3_conv3x3_s1_r_14_y), 2), (((dec3_conv1x3_s1_r_15_z + dec3_sum_s0_j) + dec3_conv3x3_s1_r_14_z) + 6)))))
hw_uint<32> hcompute_dec3_conv3x3_stencil_1(hw_uint<32>& dec3_conv3x3_stencil, hw_uint<32>& dec3_weights_0_im_global_wrapper_global_wrapper_stencil, hw_uint<32>& enc3_sum_stencil, const int _dec3_conv3x1_s1_r_16_y, const int _dec3_conv3x3_s1_r_14_x, const int _dec3_conv3x3_s1_r_14_y, const int _dec3_sum_s0_i) {
  float _dec3_conv3x3_stencil_1 = (float) dec3_conv3x3_stencil.extract<0, 31>();

  float _dec3_weights_0_im_global_wrapper_global_wrapper_stencil_1 = (float) dec3_weights_0_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _enc3_sum_stencil_1 = (float) enc3_sum_stencil.extract<0, 31>();

  float _10177 = float_from_bits(0 /* 0 */);
  bool _10178 = 40 <= _dec3_conv3x3_s1_r_14_x;
  int32_t _10179 = _dec3_conv3x1_s1_r_16_y + _dec3_sum_s0_i;
  int32_t _10180 = _dec3_conv3x3_s1_r_14_y + _10179;
  bool _10181 = _10180 < 2;
  bool _10182 = _10178 || _10181;
  float _10183 = (float)(_10182 ? _10177 : _enc3_sum_stencil_1);
  float _10184 = _dec3_weights_0_im_global_wrapper_global_wrapper_stencil_1 * _10183;
  float _10185 = _dec3_conv3x3_stencil_1 + _10184;
  return _10185;
}

//store is: dec3_conv1x3.stencil(0, 0, 0) = (dec3_conv1x3.stencil(0, 0, 0) + (dec3_weights_1_im_global_wrapper_global_wrapper.stencil(dec3_conv3x1_s1_r_16_x, 0, dec3_conv1x3_s1_r_15_z, dec3_conv1x3_s1_r_15_x)*select(((40 <= dec3_conv1x3_s1_r_15_x) || ((dec3_conv3x1_s1_r_16_y + dec3_sum_s0_i) < 1)), 0.000000f, dec3_conv3x3.stencil(0, 0, 0))))
hw_uint<32> hcompute_dec3_conv1x3_stencil_2(hw_uint<32>& dec3_conv1x3_stencil, hw_uint<32>& dec3_conv3x3_stencil, hw_uint<32>& dec3_weights_1_im_global_wrapper_global_wrapper_stencil, const int _dec3_conv1x3_s1_r_15_x, const int _dec3_conv3x1_s1_r_16_y, const int _dec3_sum_s0_i) {
  float _dec3_conv1x3_stencil_1 = (float) dec3_conv1x3_stencil.extract<0, 31>();

  float _dec3_conv3x3_stencil_2 = (float) dec3_conv3x3_stencil.extract<0, 31>();

  float _dec3_weights_1_im_global_wrapper_global_wrapper_stencil_7 = (float) dec3_weights_1_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _10217 = float_from_bits(0 /* 0 */);
  bool _10218 = 40 <= _dec3_conv1x3_s1_r_15_x;
  int32_t _10219 = _dec3_conv3x1_s1_r_16_y + _dec3_sum_s0_i;
  bool _10220 = _10219 < 1;
  bool _10221 = _10218 || _10220;
  float _10222 = (float)(_10221 ? _10217 : _dec3_conv3x3_stencil_2);
  float _10223 = _dec3_weights_1_im_global_wrapper_global_wrapper_stencil_7 * _10222;
  float _10224 = _dec3_conv1x3_stencil_1 + _10223;
  return _10224;
}

//store is: dec3_conv3x1.stencil(0, 0, 0) = (dec3_conv3x1.stencil(0, 0, 0) + (dec3_weights_2_im_global_wrapper_global_wrapper.stencil((dec3_sum_s0_c + 1), dec3_conv3x1_s1_r_16_y, 0, dec3_conv3x1_s1_r_16_x)*dec3_conv1x3.stencil(0, 0, 0)))
hw_uint<32> hcompute_dec3_conv3x1_stencil_1(hw_uint<32>& dec3_conv1x3_stencil, hw_uint<32>& dec3_conv3x1_stencil, hw_uint<32>& dec3_weights_2_im_global_wrapper_global_wrapper_stencil) {
  float _dec3_conv1x3_stencil_2 = (float) dec3_conv1x3_stencil.extract<0, 31>();

  float _dec3_conv3x1_stencil_1 = (float) dec3_conv3x1_stencil.extract<0, 31>();

  float _dec3_weights_2_im_global_wrapper_global_wrapper_stencil_1 = (float) dec3_weights_2_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _10244 = _dec3_weights_2_im_global_wrapper_global_wrapper_stencil_1 * _dec3_conv1x3_stencil_2;
  float _10245 = _dec3_conv3x1_stencil_1 + _10244;
  return _10245;
}

//store is: dec3_conv1x1.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_dec3_conv1x1_stencil() {
  float _10254 = float_from_bits(0 /* 0 */);
  return _10254;
}

//store is: dec3_conv1x1.stencil(0, 0, 0) = (dec3_conv1x1.stencil(0, 0, 0) + (dec3_weights_3_im_global_wrapper_global_wrapper.stencil((dec3_sum_s0_c + 1), 0, 0, dec3_conv1x1_s1_r_17_x)*enc3_sum.stencil(dec3_conv1x1_s1_r_17_x, (dec3_sum_s0_i + 2), (dec3_sum_s0_j + 8))))
hw_uint<32> hcompute_dec3_conv1x1_stencil_1(hw_uint<32>& dec3_conv1x1_stencil, hw_uint<32>& dec3_weights_3_im_global_wrapper_global_wrapper_stencil, hw_uint<32>& enc3_sum_stencil) {
  float _dec3_conv1x1_stencil_1 = (float) dec3_conv1x1_stencil.extract<0, 31>();

  float _dec3_weights_3_im_global_wrapper_global_wrapper_stencil_1 = (float) dec3_weights_3_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _enc3_sum_stencil_2 = (float) enc3_sum_stencil.extract<0, 31>();

  float _10257 = _dec3_weights_3_im_global_wrapper_global_wrapper_stencil_1 * _enc3_sum_stencil_2;
  float _10258 = _dec3_conv1x1_stencil_1 + _10257;
  return _10258;
}

//store is: dec3_sum.stencil((dec3_sum_s0_c + 1), (dec3_sum_s0_i + 2), (dec3_sum_s0_j + 6)) = (dec3_conv3x1.stencil(0, 0, 0) + dec3_conv1x1.stencil(0, 0, 0))
hw_uint<32> hcompute_dec3_sum_stencil(hw_uint<32>& dec3_conv1x1_stencil, hw_uint<32>& dec3_conv3x1_stencil) {
  float _dec3_conv1x1_stencil_2 = (float) dec3_conv1x1_stencil.extract<0, 31>();

  float _dec3_conv3x1_stencil_2 = (float) dec3_conv3x1_stencil.extract<0, 31>();

  float _10269 = _dec3_conv3x1_stencil_2 + _dec3_conv1x1_stencil_2;
  return _10269;
}

//store is: dec3_conv3x1.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_dec3_conv3x1_stencil_2() {
  float _10277 = float_from_bits(0 /* 0 */);
  return _10277;
}

//store is: dec3_conv1x3.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_dec3_conv1x3_stencil_3() {
  float _10280 = float_from_bits(0 /* 0 */);
  return _10280;
}

//store is: dec3_conv3x3.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_dec3_conv3x3_stencil_2() {
  float _10283 = float_from_bits(0 /* 0 */);
  return _10283;
}

//store is: dec3_conv3x3.stencil(0, 0, 0) = (dec3_conv3x3.stencil(0, 0, 0) + (dec3_weights_0_im_global_wrapper_global_wrapper.stencil(dec3_conv1x3_s1_r_15_x_1, dec3_conv3x3_s1_r_14_y_1, dec3_conv3x3_s1_r_14_z_1, dec3_conv3x3_s1_r_14_x_1)*enc3_sum.stencil(dec3_conv3x3_s1_r_14_x_1, ((dec3_conv3x1_s1_r_16_y_1 + dec3_sum_s0_i_1) + dec3_conv3x3_s1_r_14_y_1), (((dec3_conv1x3_s1_r_15_z_1 + dec3_sum_s0_j) + dec3_conv3x3_s1_r_14_z_1) + 6))))
hw_uint<32> hcompute_dec3_conv3x3_stencil_3(hw_uint<32>& dec3_conv3x3_stencil, hw_uint<32>& dec3_weights_0_im_global_wrapper_global_wrapper_stencil, hw_uint<32>& enc3_sum_stencil) {
  float _dec3_conv3x3_stencil_3 = (float) dec3_conv3x3_stencil.extract<0, 31>();

  float _dec3_weights_0_im_global_wrapper_global_wrapper_stencil_2 = (float) dec3_weights_0_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _enc3_sum_stencil_3 = (float) enc3_sum_stencil.extract<0, 31>();

  float _10286 = _dec3_weights_0_im_global_wrapper_global_wrapper_stencil_2 * _enc3_sum_stencil_3;
  float _10287 = _dec3_conv3x3_stencil_3 + _10286;
  return _10287;
}

//store is: dec3_conv3x3.stencil(0, 0, 0) = dec3_conv3x3.stencil(0, 0, 0)
hw_uint<32> hcompute_dec3_conv3x3_stencil_4(hw_uint<32>& dec3_conv3x3_stencil) {
  float _dec3_conv3x3_stencil_4 = (float) dec3_conv3x3_stencil.extract<0, 31>();

  return _dec3_conv3x3_stencil_4;
}

//store is: dec3_conv1x3.stencil(0, 0, 0) = (dec3_conv1x3.stencil(0, 0, 0) + (dec3_weights_1_im_global_wrapper_global_wrapper.stencil(dec3_conv3x1_s1_r_16_x_1, 0, dec3_conv1x3_s1_r_15_z_1, dec3_conv1x3_s1_r_15_x_1)*dec3_conv3x3.stencil(0, 0, 0)))
hw_uint<32> hcompute_dec3_conv1x3_stencil_4(hw_uint<32>& dec3_conv1x3_stencil, hw_uint<32>& dec3_conv3x3_stencil, hw_uint<32>& dec3_weights_1_im_global_wrapper_global_wrapper_stencil) {
  float _dec3_conv1x3_stencil_3 = (float) dec3_conv1x3_stencil.extract<0, 31>();

  float _dec3_conv3x3_stencil_5 = (float) dec3_conv3x3_stencil.extract<0, 31>();

  float _dec3_weights_1_im_global_wrapper_global_wrapper_stencil_8 = (float) dec3_weights_1_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _10301 = _dec3_weights_1_im_global_wrapper_global_wrapper_stencil_8 * _dec3_conv3x3_stencil_5;
  float _10302 = _dec3_conv1x3_stencil_3 + _10301;
  return _10302;
}

//store is: dec3_conv1x3.stencil(0, 0, 0) = dec3_conv1x3.stencil(0, 0, 0)
hw_uint<32> hcompute_dec3_conv1x3_stencil_5(hw_uint<32>& dec3_conv1x3_stencil) {
  float _dec3_conv1x3_stencil_4 = (float) dec3_conv1x3_stencil.extract<0, 31>();

  return _dec3_conv1x3_stencil_4;
}

//store is: dec3_conv3x1.stencil(0, 0, 0) = (dec3_conv3x1.stencil(0, 0, 0) + (dec3_weights_2_im_global_wrapper_global_wrapper.stencil((dec3_sum_s0_c_1 + 1), dec3_conv3x1_s1_r_16_y_1, 0, dec3_conv3x1_s1_r_16_x_1)*dec3_conv1x3.stencil(0, 0, 0)))
hw_uint<32> hcompute_dec3_conv3x1_stencil_3(hw_uint<32>& dec3_conv1x3_stencil, hw_uint<32>& dec3_conv3x1_stencil, hw_uint<32>& dec3_weights_2_im_global_wrapper_global_wrapper_stencil) {
  float _dec3_conv1x3_stencil_5 = (float) dec3_conv1x3_stencil.extract<0, 31>();

  float _dec3_conv3x1_stencil_3 = (float) dec3_conv3x1_stencil.extract<0, 31>();

  float _dec3_weights_2_im_global_wrapper_global_wrapper_stencil_2 = (float) dec3_weights_2_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _10311 = _dec3_weights_2_im_global_wrapper_global_wrapper_stencil_2 * _dec3_conv1x3_stencil_5;
  float _10312 = _dec3_conv3x1_stencil_3 + _10311;
  return _10312;
}

//store is: dec3_conv1x1.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_dec3_conv1x1_stencil_2() {
  float _10321 = float_from_bits(0 /* 0 */);
  return _10321;
}

//store is: dec3_conv1x1.stencil(0, 0, 0) = (dec3_conv1x1.stencil(0, 0, 0) + (dec3_weights_3_im_global_wrapper_global_wrapper.stencil((dec3_sum_s0_c_1 + 1), 0, 0, dec3_conv1x1_s1_r_17_x_1)*enc3_sum.stencil(dec3_conv1x1_s1_r_17_x_1, (dec3_sum_s0_i_1 + 2), (dec3_sum_s0_j + 8))))
hw_uint<32> hcompute_dec3_conv1x1_stencil_3(hw_uint<32>& dec3_conv1x1_stencil, hw_uint<32>& dec3_weights_3_im_global_wrapper_global_wrapper_stencil, hw_uint<32>& enc3_sum_stencil) {
  float _dec3_conv1x1_stencil_3 = (float) dec3_conv1x1_stencil.extract<0, 31>();

  float _dec3_weights_3_im_global_wrapper_global_wrapper_stencil_2 = (float) dec3_weights_3_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _enc3_sum_stencil_4 = (float) enc3_sum_stencil.extract<0, 31>();

  float _10324 = _dec3_weights_3_im_global_wrapper_global_wrapper_stencil_2 * _enc3_sum_stencil_4;
  float _10325 = _dec3_conv1x1_stencil_3 + _10324;
  return _10325;
}

//store is: dec3_sum.stencil((dec3_sum_s0_c_1 + 1), (dec3_sum_s0_i_1 + 2), (dec3_sum_s0_j + 6)) = (dec3_conv3x1.stencil(0, 0, 0) + dec3_conv1x1.stencil(0, 0, 0))
hw_uint<32> hcompute_dec3_sum_stencil_1(hw_uint<32>& dec3_conv1x1_stencil, hw_uint<32>& dec3_conv3x1_stencil) {
  float _dec3_conv1x1_stencil_4 = (float) dec3_conv1x1_stencil.extract<0, 31>();

  float _dec3_conv3x1_stencil_4 = (float) dec3_conv3x1_stencil.extract<0, 31>();

  float _10336 = _dec3_conv3x1_stencil_4 + _dec3_conv1x1_stencil_4;
  return _10336;
}

//store is: dec3_conv3x1.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_dec3_conv3x1_stencil_4() {
  float _10344 = float_from_bits(0 /* 0 */);
  return _10344;
}

//store is: dec3_conv1x3.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_dec3_conv1x3_stencil_6() {
  float _10347 = float_from_bits(0 /* 0 */);
  return _10347;
}

//store is: dec3_conv3x3.stencil((max(dec3_conv1x3_s1_r_15_x_3, 39) + -39), (max((dec3_conv3x1_s1_r_16_y_2 + dec3_sum_s0_i_2), 23) + -23), 0) = 0.000000f
hw_uint<32> hcompute_dec3_conv3x3_stencil_5() {
  float _10355 = float_from_bits(0 /* 0 */);
  return _10355;
}

//store is: dec3_conv3x3.stencil((max(dec3_conv1x3_s1_r_15_x_3, 39) + -39), (max((dec3_conv3x1_s1_r_16_y_2 + dec3_sum_s0_i_2), 23) + -23), 0) = (dec3_conv3x3.stencil((max(dec3_conv1x3_s1_r_15_x_3, 39) + -39), (max((dec3_conv3x1_s1_r_16_y_2 + dec3_sum_s0_i_2), 23) + -23), 0) + (dec3_weights_0_im_global_wrapper_global_wrapper.stencil(dec3_conv1x3_s1_r_15_x_3, dec3_conv3x3_s1_r_14_y_2, dec3_conv3x3_s1_r_14_z_2, dec3_conv3x3_s1_r_14_x_3)*select(((40 <= dec3_conv3x3_s1_r_14_x_3) || (25 <= (dec3_conv3x3_s1_r_14_y_2 + (dec3_conv3x1_s1_r_16_y_2 + dec3_sum_s0_i_2)))), 0.000000f, enc3_sum.stencil(min(dec3_conv3x3_s1_r_14_x_3, 39), min(((dec3_conv3x1_s1_r_16_y_2 + dec3_sum_s0_i_2) + dec3_conv3x3_s1_r_14_y_2), 24), (((dec3_conv1x3_s1_r_15_z_2 + dec3_sum_s0_j) + dec3_conv3x3_s1_r_14_z_2) + 6)))))
hw_uint<32> hcompute_dec3_conv3x3_stencil_6(hw_uint<32>& dec3_conv3x3_stencil, hw_uint<32>& dec3_weights_0_im_global_wrapper_global_wrapper_stencil, hw_uint<32>& enc3_sum_stencil, const int _dec3_conv3x1_s1_r_16_y_2, const int _dec3_conv3x3_s1_r_14_x_3, const int _dec3_conv3x3_s1_r_14_y_2, const int _dec3_sum_s0_i_2) {
  float _dec3_conv3x3_stencil_6 = (float) dec3_conv3x3_stencil.extract<0, 31>();

  float _dec3_weights_0_im_global_wrapper_global_wrapper_stencil_3 = (float) dec3_weights_0_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _enc3_sum_stencil_5 = (float) enc3_sum_stencil.extract<0, 31>();

  float _10363 = float_from_bits(0 /* 0 */);
  bool _10364 = 40 <= _dec3_conv3x3_s1_r_14_x_3;
  int32_t _10365 = _dec3_conv3x1_s1_r_16_y_2 + _dec3_sum_s0_i_2;
  int32_t _10366 = _dec3_conv3x3_s1_r_14_y_2 + _10365;
  bool _10367 = 25 <= _10366;
  bool _10368 = _10364 || _10367;
  float _10369 = (float)(_10368 ? _10363 : _enc3_sum_stencil_5);
  float _10370 = _dec3_weights_0_im_global_wrapper_global_wrapper_stencil_3 * _10369;
  float _10371 = _dec3_conv3x3_stencil_6 + _10370;
  return _10371;
}

//store is: dec3_conv1x3.stencil(0, 0, 0) = (dec3_conv1x3.stencil(0, 0, 0) + (dec3_weights_1_im_global_wrapper_global_wrapper.stencil(dec3_conv3x1_s1_r_16_x_2, 0, dec3_conv1x3_s1_r_15_z_2, dec3_conv1x3_s1_r_15_x_3)*select(((40 <= dec3_conv1x3_s1_r_15_x_3) || (24 <= (dec3_conv3x1_s1_r_16_y_2 + dec3_sum_s0_i_2))), 0.000000f, dec3_conv3x3.stencil(0, 0, 0))))
hw_uint<32> hcompute_dec3_conv1x3_stencil_7(hw_uint<32>& dec3_conv1x3_stencil, hw_uint<32>& dec3_conv3x3_stencil, hw_uint<32>& dec3_weights_1_im_global_wrapper_global_wrapper_stencil, const int _dec3_conv1x3_s1_r_15_x_3, const int _dec3_conv3x1_s1_r_16_y_2, const int _dec3_sum_s0_i_2) {
  float _dec3_conv1x3_stencil_6 = (float) dec3_conv1x3_stencil.extract<0, 31>();

  float _dec3_conv3x3_stencil_7 = (float) dec3_conv3x3_stencil.extract<0, 31>();

  float _dec3_weights_1_im_global_wrapper_global_wrapper_stencil_9 = (float) dec3_weights_1_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _10403 = float_from_bits(0 /* 0 */);
  bool _10404 = 40 <= _dec3_conv1x3_s1_r_15_x_3;
  int32_t _10405 = _dec3_conv3x1_s1_r_16_y_2 + _dec3_sum_s0_i_2;
  bool _10406 = 24 <= _10405;
  bool _10407 = _10404 || _10406;
  float _10408 = (float)(_10407 ? _10403 : _dec3_conv3x3_stencil_7);
  float _10409 = _dec3_weights_1_im_global_wrapper_global_wrapper_stencil_9 * _10408;
  float _10410 = _dec3_conv1x3_stencil_6 + _10409;
  return _10410;
}

//store is: dec3_conv3x1.stencil(0, 0, 0) = (dec3_conv3x1.stencil(0, 0, 0) + (dec3_weights_2_im_global_wrapper_global_wrapper.stencil((dec3_sum_s0_c_2 + 1), dec3_conv3x1_s1_r_16_y_2, 0, dec3_conv3x1_s1_r_16_x_2)*dec3_conv1x3.stencil(0, 0, 0)))
hw_uint<32> hcompute_dec3_conv3x1_stencil_5(hw_uint<32>& dec3_conv1x3_stencil, hw_uint<32>& dec3_conv3x1_stencil, hw_uint<32>& dec3_weights_2_im_global_wrapper_global_wrapper_stencil) {
  float _dec3_conv1x3_stencil_7 = (float) dec3_conv1x3_stencil.extract<0, 31>();

  float _dec3_conv3x1_stencil_5 = (float) dec3_conv3x1_stencil.extract<0, 31>();

  float _dec3_weights_2_im_global_wrapper_global_wrapper_stencil_3 = (float) dec3_weights_2_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _10430 = _dec3_weights_2_im_global_wrapper_global_wrapper_stencil_3 * _dec3_conv1x3_stencil_7;
  float _10431 = _dec3_conv3x1_stencil_5 + _10430;
  return _10431;
}

//store is: dec3_conv1x1.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_dec3_conv1x1_stencil_4() {
  float _10440 = float_from_bits(0 /* 0 */);
  return _10440;
}

//store is: dec3_conv1x1.stencil(0, 0, 0) = (dec3_conv1x1.stencil(0, 0, 0) + (dec3_weights_3_im_global_wrapper_global_wrapper.stencil((dec3_sum_s0_c_2 + 1), 0, 0, dec3_conv1x1_s1_r_17_x_2)*enc3_sum.stencil(dec3_conv1x1_s1_r_17_x_2, (dec3_sum_s0_i_2 + 2), (dec3_sum_s0_j + 8))))
hw_uint<32> hcompute_dec3_conv1x1_stencil_5(hw_uint<32>& dec3_conv1x1_stencil, hw_uint<32>& dec3_weights_3_im_global_wrapper_global_wrapper_stencil, hw_uint<32>& enc3_sum_stencil) {
  float _dec3_conv1x1_stencil_5 = (float) dec3_conv1x1_stencil.extract<0, 31>();

  float _dec3_weights_3_im_global_wrapper_global_wrapper_stencil_3 = (float) dec3_weights_3_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _enc3_sum_stencil_6 = (float) enc3_sum_stencil.extract<0, 31>();

  float _10443 = _dec3_weights_3_im_global_wrapper_global_wrapper_stencil_3 * _enc3_sum_stencil_6;
  float _10444 = _dec3_conv1x1_stencil_5 + _10443;
  return _10444;
}

//store is: dec3_sum.stencil((dec3_sum_s0_c_2 + 1), (dec3_sum_s0_i_2 + 2), (dec3_sum_s0_j + 6)) = (dec3_conv3x1.stencil(0, 0, 0) + dec3_conv1x1.stencil(0, 0, 0))
hw_uint<32> hcompute_dec3_sum_stencil_2(hw_uint<32>& dec3_conv1x1_stencil, hw_uint<32>& dec3_conv3x1_stencil) {
  float _dec3_conv1x1_stencil_6 = (float) dec3_conv1x1_stencil.extract<0, 31>();

  float _dec3_conv3x1_stencil_6 = (float) dec3_conv3x1_stencil.extract<0, 31>();

  float _10455 = _dec3_conv3x1_stencil_6 + _dec3_conv1x1_stencil_6;
  return _10455;
}

//store is: dec2_weights_0_im_global_wrapper_global_wrapper.stencil(dec2_weights_0_im_global_wrapper_global_wrapper_s0__0, dec2_weights_0_im_global_wrapper_global_wrapper_s0__1, dec2_weights_0_im_global_wrapper_global_wrapper_s0__2, dec2_weights_0_im_global_wrapper_global_wrapper_s0__3) = dec2_weights_0_im_global_wrapper.stencil(dec2_weights_0_im_global_wrapper_global_wrapper_s0__0, dec2_weights_0_im_global_wrapper_global_wrapper_s0__1, dec2_weights_0_im_global_wrapper_global_wrapper_s0__2, dec2_weights_0_im_global_wrapper_global_wrapper_s0__3)
hw_uint<32> hcompute_dec2_weights_0_im_global_wrapper_global_wrapper_stencil(hw_uint<32>& dec2_weights_0_im_global_wrapper_stencil) {
  float _dec2_weights_0_im_global_wrapper_stencil_1 = (float) dec2_weights_0_im_global_wrapper_stencil.extract<0, 31>();

  return _dec2_weights_0_im_global_wrapper_stencil_1;
}

//store is: dec2_weights_1_im_global_wrapper_global_wrapper.stencil(dec2_weights_1_im_global_wrapper_global_wrapper_s0__0, 0, dec2_weights_1_im_global_wrapper_global_wrapper_s0__2, dec2_weights_1_im_global_wrapper_global_wrapper_s0__3) = dec2_weights_1_im_global_wrapper.stencil(dec2_weights_1_im_global_wrapper_global_wrapper_s0__0, 0, dec2_weights_1_im_global_wrapper_global_wrapper_s0__2, dec2_weights_1_im_global_wrapper_global_wrapper_s0__3)
hw_uint<32> hcompute_dec2_weights_1_im_global_wrapper_global_wrapper_stencil(hw_uint<32>& dec2_weights_1_im_global_wrapper_stencil) {
  float _dec2_weights_1_im_global_wrapper_stencil_1 = (float) dec2_weights_1_im_global_wrapper_stencil.extract<0, 31>();

  return _dec2_weights_1_im_global_wrapper_stencil_1;
}

//store is: dec2_weights_2_im_global_wrapper_global_wrapper.stencil((dec2_weights_2_im_global_wrapper_global_wrapper_s0__0 + 1), dec2_weights_2_im_global_wrapper_global_wrapper_s0__1, 0, dec2_weights_2_im_global_wrapper_global_wrapper_s0__3) = dec2_weights_2_im_global_wrapper.stencil(dec2_weights_2_im_global_wrapper_global_wrapper_s0__0, dec2_weights_2_im_global_wrapper_global_wrapper_s0__1, 0, dec2_weights_2_im_global_wrapper_global_wrapper_s0__3)
hw_uint<32> hcompute_dec2_weights_2_im_global_wrapper_global_wrapper_stencil(hw_uint<32>& dec2_weights_2_im_global_wrapper_stencil) {
  float _dec2_weights_2_im_global_wrapper_stencil_1 = (float) dec2_weights_2_im_global_wrapper_stencil.extract<0, 31>();

  return _dec2_weights_2_im_global_wrapper_stencil_1;
}

//store is: dec2_conv3x1.stencil((((((dec2_up_s0_x_1/2) + dec2_conv3x1_s0_c) + -1) - (dec2_up_s0_x_1/2)) + 1), (((((dec2_up_s0_y_1/2) + dec2_conv3x1_s0_i) + -1) - (dec2_up_s0_y_1/2)) + 1), 0) = 0.000000f
hw_uint<32> hcompute_dec2_conv3x1_stencil() {
  float _10471 = float_from_bits(0 /* 0 */);
  return _10471;
}

//store is: dec2_conv1x3.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_dec2_conv1x3_stencil() {
  float _10492 = float_from_bits(0 /* 0 */);
  return _10492;
}

//store is: dec2_conv3x3.stencil(0, ((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + dec2_conv3x1_s1_r_20_y) - max(min((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + dec2_conv3x1_s1_r_20_y), 46), 2)), 0) = 0.000000f
hw_uint<32> hcompute_dec2_conv3x3_stencil() {
  float _10503 = float_from_bits(0 /* 0 */);
  return _10503;
}

//store is: dec2_conv3x3.stencil(0, ((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + dec2_conv3x1_s1_r_20_y) - max(min((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + dec2_conv3x1_s1_r_20_y), 46), 2)), 0) = (dec2_conv3x3.stencil(0, ((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + dec2_conv3x1_s1_r_20_y) - max(min((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + dec2_conv3x1_s1_r_20_y), 46), 2)), 0) + (dec2_weights_0_im_global_wrapper_global_wrapper.stencil(dec2_conv1x3_s1_r_19_x_1, dec2_conv3x3_s1_r_18_y, dec2_conv3x3_s1_r_18_z, dec2_conv3x3_s1_r_18_x)*select(((80 <= dec2_conv3x3_s1_r_18_x) || ((dec2_conv3x3_s1_r_18_y + ((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + -1) + dec2_conv3x1_s1_r_20_y)) < 2)), 0.000000f, ((((dec3_sum.stencil(((min(dec2_conv3x3_s1_r_18_x, 79)/2) + ((min(dec2_conv3x3_s1_r_18_x, 79) % 2)*2)), ((max((((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + -1) + dec2_conv3x1_s1_r_20_y) + dec2_conv3x3_s1_r_18_y), 2)/2) + 1), (((dec2_conv1x3_s1_r_19_z + dec2_up_s0__0) + dec2_conv3x3_s1_r_18_z) + 4)) + (dec3_sum.stencil(((min(dec2_conv3x3_s1_r_18_x, 79)/2) + 1), ((max((((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + -1) + dec2_conv3x1_s1_r_20_y) + dec2_conv3x3_s1_r_18_y), 2)/2) + 1), (((dec2_conv1x3_s1_r_19_z + dec2_up_s0__0) + dec2_conv3x3_s1_r_18_z) + 4))*3.000000f))*3.000000f) + (dec3_sum.stencil(((min(dec2_conv3x3_s1_r_18_x, 79)/2) + ((min(dec2_conv3x3_s1_r_18_x, 79) % 2)*2)), ((max((((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + -1) + dec2_conv3x1_s1_r_20_y) + dec2_conv3x3_s1_r_18_y), 2)/2) + ((max((((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + -1) + dec2_conv3x1_s1_r_20_y) + dec2_conv3x3_s1_r_18_y), 2) % 2)*2)), (((dec2_conv1x3_s1_r_19_z + dec2_up_s0__0) + dec2_conv3x3_s1_r_18_z) + 4)) + (dec3_sum.stencil(((min(dec2_conv3x3_s1_r_18_x, 79)/2) + 1), ((max((((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + -1) + dec2_conv3x1_s1_r_20_y) + dec2_conv3x3_s1_r_18_y), 2)/2) + ((max((((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + -1) + dec2_conv3x1_s1_r_20_y) + dec2_conv3x3_s1_r_18_y), 2) % 2)*2)), (((dec2_conv1x3_s1_r_19_z + dec2_up_s0__0) + dec2_conv3x3_s1_r_18_z) + 4))*3.000000f)))*0.062500f))))
hw_uint<32> hcompute_dec2_conv3x3_stencil_1(hw_uint<32>& dec2_conv3x3_stencil, hw_uint<32>& dec2_weights_0_im_global_wrapper_global_wrapper_stencil, hw_uint<128>& dec3_sum_stencil, const int _dec2_conv3x1_s1_i, const int _dec2_conv3x1_s1_r_20_y, const int _dec2_conv3x3_s1_r_18_x, const int _dec2_conv3x3_s1_r_18_y, const int _dec2_up_s0_y_1) {
  float _dec2_conv3x3_stencil_1 = (float) dec2_conv3x3_stencil.extract<0, 31>();

  float _dec2_weights_0_im_global_wrapper_global_wrapper_stencil_1 = (float) dec2_weights_0_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _dec3_sum_stencil_1 = (float) dec3_sum_stencil.extract<0, 31>();
  float _dec3_sum_stencil_2 = (float) dec3_sum_stencil.extract<32, 63>();
  float _dec3_sum_stencil_3 = (float) dec3_sum_stencil.extract<64, 95>();
  float _dec3_sum_stencil_4 = (float) dec3_sum_stencil.extract<96, 127>();

  float _10512 = float_from_bits(0 /* 0 */);
  float _10513 = float_from_bits(1077936128 /* 3 */);
  float _10514 = _dec3_sum_stencil_2 * _10513;
  float _10515 = _dec3_sum_stencil_1 + _10514;
  float _10516 = _10515 * _10513;
  float _10517 = _dec3_sum_stencil_4 * _10513;
  float _10518 = _dec3_sum_stencil_3 + _10517;
  float _10519 = _10516 + _10518;
  float _10520 = float_from_bits(1031798784 /* 0.0625 */);
  float _10521 = _10519 * _10520;
  bool _10522 = 80 <= _dec2_conv3x3_s1_r_18_x;
  int32_t _10523 = _dec2_up_s0_y_1 >> 1;
  int32_t _10524 = _10523 + _dec2_conv3x1_s1_i;
  int32_t _10525 = _10524 + -1;
  int32_t _10526 = _10525 + _dec2_conv3x1_s1_r_20_y;
  int32_t _10527 = _dec2_conv3x3_s1_r_18_y + _10526;
  bool _10528 = _10527 < 2;
  bool _10529 = _10522 || _10528;
  float _10530 = (float)(_10529 ? _10512 : _10521);
  float _10531 = _dec2_weights_0_im_global_wrapper_global_wrapper_stencil_1 * _10530;
  float _10532 = _dec2_conv3x3_stencil_1 + _10531;
  return _10532;
}

//store is: dec2_conv1x3.stencil(0, 0, 0) = (dec2_conv1x3.stencil(0, 0, 0) + (dec2_weights_1_im_global_wrapper_global_wrapper.stencil(dec2_conv3x1_s1_r_20_x, 0, dec2_conv1x3_s1_r_19_z, dec2_conv1x3_s1_r_19_x_1)*select((((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + -1) + dec2_conv3x1_s1_r_20_y) < 1), 0.000000f, dec2_conv3x3.stencil(0, max(((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + dec2_conv3x1_s1_r_20_y) - max(min((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + dec2_conv3x1_s1_r_20_y), 46), 2)), 0), 0))))
hw_uint<32> hcompute_dec2_conv1x3_stencil_1(hw_uint<32>& dec2_conv1x3_stencil, hw_uint<32>& dec2_conv3x3_stencil, hw_uint<32>& dec2_weights_1_im_global_wrapper_global_wrapper_stencil, const int _dec2_conv3x1_s1_i, const int _dec2_conv3x1_s1_r_20_y, const int _dec2_up_s0_y_1) {
  float _dec2_conv1x3_stencil_1 = (float) dec2_conv1x3_stencil.extract<0, 31>();

  float _dec2_conv3x3_stencil_2 = (float) dec2_conv3x3_stencil.extract<0, 31>();

  float _dec2_weights_1_im_global_wrapper_global_wrapper_stencil_1 = (float) dec2_weights_1_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _10602 = float_from_bits(0 /* 0 */);
  int32_t _10603 = _dec2_up_s0_y_1 >> 1;
  int32_t _10604 = _10603 + _dec2_conv3x1_s1_i;
  int32_t _10605 = _10604 + -1;
  int32_t _10606 = _10605 + _dec2_conv3x1_s1_r_20_y;
  bool _10607 = _10606 < 1;
  float _10608 = (float)(_10607 ? _10602 : _dec2_conv3x3_stencil_2);
  float _10609 = _dec2_weights_1_im_global_wrapper_global_wrapper_stencil_1 * _10608;
  float _10610 = _dec2_conv1x3_stencil_1 + _10609;
  return _10610;
}

//store is: dec2_conv3x1.stencil((((((dec2_up_s0_x_1/2) + dec2_conv3x1_s1_c) + -1) - (dec2_up_s0_x_1/2)) + 1), (((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + -1) - (dec2_up_s0_y_1/2)) + 1), 0) = (dec2_conv3x1.stencil((((((dec2_up_s0_x_1/2) + dec2_conv3x1_s1_c) + -1) - (dec2_up_s0_x_1/2)) + 1), (((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + -1) - (dec2_up_s0_y_1/2)) + 1), 0) + (dec2_weights_2_im_global_wrapper_global_wrapper.stencil(((((dec2_up_s0_x_1/2) + dec2_conv3x1_s1_c) + -1) + 1), dec2_conv3x1_s1_r_20_y, 0, dec2_conv3x1_s1_r_20_x)*dec2_conv1x3.stencil(0, 0, 0)))
hw_uint<32> hcompute_dec2_conv3x1_stencil_1(hw_uint<32>& dec2_conv1x3_stencil, hw_uint<32>& dec2_conv3x1_stencil, hw_uint<32>& dec2_weights_2_im_global_wrapper_global_wrapper_stencil) {
  float _dec2_conv1x3_stencil_2 = (float) dec2_conv1x3_stencil.extract<0, 31>();

  float _dec2_conv3x1_stencil_1 = (float) dec2_conv3x1_stencil.extract<0, 31>();

  float _dec2_weights_2_im_global_wrapper_global_wrapper_stencil_1 = (float) dec2_weights_2_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _10638 = _dec2_weights_2_im_global_wrapper_global_wrapper_stencil_1 * _dec2_conv1x3_stencil_2;
  float _10639 = _dec2_conv3x1_stencil_1 + _10638;
  return _10639;
}

//store is: dec2_conv1x3.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_dec2_conv1x3_stencil_2() {
  float _10669 = float_from_bits(0 /* 0 */);
  return _10669;
}

//store is: dec2_conv3x3.stencil(0, (max(((min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)) + dec2_conv3x1_s1_i_1) + dec2_conv3x1_s1_r_20_y_1), 46) + -46), 0) = 0.000000f
hw_uint<32> hcompute_dec2_conv3x3_stencil_2() {
  float _10680 = float_from_bits(0 /* 0 */);
  return _10680;
}

//store is: dec2_conv3x3.stencil(0, (max(((min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)) + dec2_conv3x1_s1_i_1) + dec2_conv3x1_s1_r_20_y_1), 46) + -46), 0) = (dec2_conv3x3.stencil(0, (max(((min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)) + dec2_conv3x1_s1_i_1) + dec2_conv3x1_s1_r_20_y_1), 46) + -46), 0) + ((dec2_weights_0_im_global_wrapper_global_wrapper.stencil(dec2_conv1x3_s1_r_19_x_2, dec2_conv3x3_s1_r_18_y_1, dec2_conv3x3_s1_r_18_z_1, dec2_conv3x3_s1_r_18_x_1)*(((dec3_sum.stencil(((dec2_conv3x3_s1_r_18_x_1/2) + ((dec2_conv3x3_s1_r_18_x_1 % 2)*2)), ((((((min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)) + dec2_conv3x1_s1_i_1) + -1) + dec2_conv3x1_s1_r_20_y_1) + dec2_conv3x3_s1_r_18_y_1)/2) + 1), (((dec2_conv1x3_s1_r_19_z_1 + dec2_up_s0__0) + dec2_conv3x3_s1_r_18_z_1) + 4)) + (dec3_sum.stencil(((dec2_conv3x3_s1_r_18_x_1/2) + 1), ((((((min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)) + dec2_conv3x1_s1_i_1) + -1) + dec2_conv3x1_s1_r_20_y_1) + dec2_conv3x3_s1_r_18_y_1)/2) + 1), (((dec2_conv1x3_s1_r_19_z_1 + dec2_up_s0__0) + dec2_conv3x3_s1_r_18_z_1) + 4))*3.000000f))*3.000000f) + (dec3_sum.stencil(((dec2_conv3x3_s1_r_18_x_1/2) + ((dec2_conv3x3_s1_r_18_x_1 % 2)*2)), ((((((min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)) + dec2_conv3x1_s1_i_1) + -1) + dec2_conv3x1_s1_r_20_y_1) + dec2_conv3x3_s1_r_18_y_1)/2) + ((((((min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)) + dec2_conv3x1_s1_i_1) + -1) + dec2_conv3x1_s1_r_20_y_1) + dec2_conv3x3_s1_r_18_y_1) % 2)*2)), (((dec2_conv1x3_s1_r_19_z_1 + dec2_up_s0__0) + dec2_conv3x3_s1_r_18_z_1) + 4)) + (dec3_sum.stencil(((dec2_conv3x3_s1_r_18_x_1/2) + 1), ((((((min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)) + dec2_conv3x1_s1_i_1) + -1) + dec2_conv3x1_s1_r_20_y_1) + dec2_conv3x3_s1_r_18_y_1)/2) + ((((((min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)) + dec2_conv3x1_s1_i_1) + -1) + dec2_conv3x1_s1_r_20_y_1) + dec2_conv3x3_s1_r_18_y_1) % 2)*2)), (((dec2_conv1x3_s1_r_19_z_1 + dec2_up_s0__0) + dec2_conv3x3_s1_r_18_z_1) + 4))*3.000000f))))*0.062500f))
hw_uint<32> hcompute_dec2_conv3x3_stencil_3(hw_uint<32>& dec2_conv3x3_stencil, hw_uint<32>& dec2_weights_0_im_global_wrapper_global_wrapper_stencil, hw_uint<128>& dec3_sum_stencil) {
  float _dec2_conv3x3_stencil_3 = (float) dec2_conv3x3_stencil.extract<0, 31>();

  float _dec2_weights_0_im_global_wrapper_global_wrapper_stencil_2 = (float) dec2_weights_0_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _dec3_sum_stencil_5 = (float) dec3_sum_stencil.extract<0, 31>();
  float _dec3_sum_stencil_6 = (float) dec3_sum_stencil.extract<32, 63>();
  float _dec3_sum_stencil_7 = (float) dec3_sum_stencil.extract<64, 95>();
  float _dec3_sum_stencil_8 = (float) dec3_sum_stencil.extract<96, 127>();

  float _10691 = float_from_bits(1077936128 /* 3 */);
  float _10692 = _dec3_sum_stencil_6 * _10691;
  float _10693 = _dec3_sum_stencil_5 + _10692;
  float _10694 = _10693 * _10691;
  float _10695 = _dec3_sum_stencil_8 * _10691;
  float _10696 = _dec3_sum_stencil_7 + _10695;
  float _10697 = _10694 + _10696;
  float _10698 = _dec2_weights_0_im_global_wrapper_global_wrapper_stencil_2 * _10697;
  float _10699 = float_from_bits(1031798784 /* 0.0625 */);
  float _10700 = _10698 * _10699;
  float _10701 = _dec2_conv3x3_stencil_3 + _10700;
  return _10701;
}

//store is: dec2_conv3x3.stencil(0, (max(((min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)) + dec2_conv3x1_s1_i_1) + dec2_conv3x1_s1_r_20_y_1), 46) + -46), 0) = dec2_conv3x3.stencil(0, (max(((min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)) + dec2_conv3x1_s1_i_1) + dec2_conv3x1_s1_r_20_y_1), 46) + -46), 0)
hw_uint<32> hcompute_dec2_conv3x3_stencil_4(hw_uint<32>& dec2_conv3x3_stencil) {
  float _dec2_conv3x3_stencil_4 = (float) dec2_conv3x3_stencil.extract<0, 31>();

  return _dec2_conv3x3_stencil_4;
}

//store is: dec2_conv1x3.stencil(0, 0, 0) = (dec2_conv1x3.stencil(0, 0, 0) + (dec2_weights_1_im_global_wrapper_global_wrapper.stencil(dec2_conv3x1_s1_r_20_x_1, 0, dec2_conv1x3_s1_r_19_z_1, dec2_conv1x3_s1_r_19_x_2)*dec2_conv3x3.stencil(0, (max(((min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)) + dec2_conv3x1_s1_i_1) + dec2_conv3x1_s1_r_20_y_1), 46) + -46), 0)))
hw_uint<32> hcompute_dec2_conv1x3_stencil_3(hw_uint<32>& dec2_conv1x3_stencil, hw_uint<32>& dec2_conv3x3_stencil, hw_uint<32>& dec2_weights_1_im_global_wrapper_global_wrapper_stencil) {
  float _dec2_conv1x3_stencil_3 = (float) dec2_conv1x3_stencil.extract<0, 31>();

  float _dec2_conv3x3_stencil_5 = (float) dec2_conv3x3_stencil.extract<0, 31>();

  float _dec2_weights_1_im_global_wrapper_global_wrapper_stencil_2 = (float) dec2_weights_1_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _10763 = _dec2_weights_1_im_global_wrapper_global_wrapper_stencil_2 * _dec2_conv3x3_stencil_5;
  float _10764 = _dec2_conv1x3_stencil_3 + _10763;
  return _10764;
}

//store is: dec2_conv3x1.stencil((((((dec2_up_s0_x_1/2) + dec2_conv3x1_s1_c_1) + -1) - (dec2_up_s0_x_1/2)) + 1), ((((min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)) + dec2_conv3x1_s1_i_1) + -1) - (dec2_up_s0_y_1/2)) + 1), 0) = (dec2_conv3x1.stencil((((((dec2_up_s0_x_1/2) + dec2_conv3x1_s1_c_1) + -1) - (dec2_up_s0_x_1/2)) + 1), ((((min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)) + dec2_conv3x1_s1_i_1) + -1) - (dec2_up_s0_y_1/2)) + 1), 0) + (dec2_weights_2_im_global_wrapper_global_wrapper.stencil(((((dec2_up_s0_x_1/2) + dec2_conv3x1_s1_c_1) + -1) + 1), dec2_conv3x1_s1_r_20_y_1, 0, dec2_conv3x1_s1_r_20_x_1)*dec2_conv1x3.stencil(0, 0, 0)))
hw_uint<32> hcompute_dec2_conv3x1_stencil_2(hw_uint<32>& dec2_conv1x3_stencil, hw_uint<32>& dec2_conv3x1_stencil, hw_uint<32>& dec2_weights_2_im_global_wrapper_global_wrapper_stencil) {
  float _dec2_conv1x3_stencil_4 = (float) dec2_conv1x3_stencil.extract<0, 31>();

  float _dec2_conv3x1_stencil_2 = (float) dec2_conv3x1_stencil.extract<0, 31>();

  float _dec2_weights_2_im_global_wrapper_global_wrapper_stencil_2 = (float) dec2_weights_2_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _10780 = _dec2_weights_2_im_global_wrapper_global_wrapper_stencil_2 * _dec2_conv1x3_stencil_4;
  float _10781 = _dec2_conv3x1_stencil_2 + _10780;
  return _10781;
}

//store is: dec2_conv1x3.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_dec2_conv1x3_stencil_4() {
  float _10814 = float_from_bits(0 /* 0 */);
  return _10814;
}

//store is: dec2_conv3x3.stencil(0, (max(((max(min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)), (min((dec2_up_s0_y_1/2), 41) + 3)) + dec2_conv3x1_s1_i_2) + dec2_conv3x1_s1_r_20_y_2), 46) + -46), 0) = 0.000000f
hw_uint<32> hcompute_dec2_conv3x3_stencil_5() {
  float _10828 = float_from_bits(0 /* 0 */);
  return _10828;
}

//store is: dec2_conv3x3.stencil(0, (max(((max(min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)), (min((dec2_up_s0_y_1/2), 41) + 3)) + dec2_conv3x1_s1_i_2) + dec2_conv3x1_s1_r_20_y_2), 46) + -46), 0) = (dec2_conv3x3.stencil(0, (max(((max(min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)), (min((dec2_up_s0_y_1/2), 41) + 3)) + dec2_conv3x1_s1_i_2) + dec2_conv3x1_s1_r_20_y_2), 46) + -46), 0) + (dec2_weights_0_im_global_wrapper_global_wrapper.stencil(dec2_conv1x3_s1_r_19_x_3, dec2_conv3x3_s1_r_18_y_2, dec2_conv3x3_s1_r_18_z_2, dec2_conv3x3_s1_r_18_x_3)*select(((80 <= dec2_conv3x3_s1_r_18_x_3) || (47 <= (dec2_conv3x3_s1_r_18_y_2 + (((max(min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)), (min((dec2_up_s0_y_1/2), 41) + 3)) + dec2_conv3x1_s1_i_2) + -1) + dec2_conv3x1_s1_r_20_y_2)))), 0.000000f, ((((dec3_sum.stencil(((min(dec2_conv3x3_s1_r_18_x_3, 79)/2) + ((min(dec2_conv3x3_s1_r_18_x_3, 79) % 2)*2)), ((min(((((max(min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)), (min((dec2_up_s0_y_1/2), 41) + 3)) + dec2_conv3x1_s1_i_2) + -1) + dec2_conv3x1_s1_r_20_y_2) + dec2_conv3x3_s1_r_18_y_2), 46)/2) + 1), (((dec2_conv1x3_s1_r_19_z_2 + dec2_up_s0__0) + dec2_conv3x3_s1_r_18_z_2) + 4)) + (dec3_sum.stencil(((min(dec2_conv3x3_s1_r_18_x_3, 79)/2) + 1), ((min(((((max(min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)), (min((dec2_up_s0_y_1/2), 41) + 3)) + dec2_conv3x1_s1_i_2) + -1) + dec2_conv3x1_s1_r_20_y_2) + dec2_conv3x3_s1_r_18_y_2), 46)/2) + 1), (((dec2_conv1x3_s1_r_19_z_2 + dec2_up_s0__0) + dec2_conv3x3_s1_r_18_z_2) + 4))*3.000000f))*3.000000f) + (dec3_sum.stencil(((min(dec2_conv3x3_s1_r_18_x_3, 79)/2) + ((min(dec2_conv3x3_s1_r_18_x_3, 79) % 2)*2)), ((min(((((max(min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)), (min((dec2_up_s0_y_1/2), 41) + 3)) + dec2_conv3x1_s1_i_2) + -1) + dec2_conv3x1_s1_r_20_y_2) + dec2_conv3x3_s1_r_18_y_2), 46)/2) + ((min(((((max(min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)), (min((dec2_up_s0_y_1/2), 41) + 3)) + dec2_conv3x1_s1_i_2) + -1) + dec2_conv3x1_s1_r_20_y_2) + dec2_conv3x3_s1_r_18_y_2), 46) % 2)*2)), (((dec2_conv1x3_s1_r_19_z_2 + dec2_up_s0__0) + dec2_conv3x3_s1_r_18_z_2) + 4)) + (dec3_sum.stencil(((min(dec2_conv3x3_s1_r_18_x_3, 79)/2) + 1), ((min(((((max(min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)), (min((dec2_up_s0_y_1/2), 41) + 3)) + dec2_conv3x1_s1_i_2) + -1) + dec2_conv3x1_s1_r_20_y_2) + dec2_conv3x3_s1_r_18_y_2), 46)/2) + ((min(((((max(min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)), (min((dec2_up_s0_y_1/2), 41) + 3)) + dec2_conv3x1_s1_i_2) + -1) + dec2_conv3x1_s1_r_20_y_2) + dec2_conv3x3_s1_r_18_y_2), 46) % 2)*2)), (((dec2_conv1x3_s1_r_19_z_2 + dec2_up_s0__0) + dec2_conv3x3_s1_r_18_z_2) + 4))*3.000000f)))*0.062500f))))
hw_uint<32> hcompute_dec2_conv3x3_stencil_6(hw_uint<32>& dec2_conv3x3_stencil, hw_uint<32>& dec2_weights_0_im_global_wrapper_global_wrapper_stencil, hw_uint<128>& dec3_sum_stencil, const int _dec2_conv3x1_s1_i_2, const int _dec2_conv3x1_s1_r_20_y_2, const int _dec2_conv3x3_s1_r_18_x_3, const int _dec2_conv3x3_s1_r_18_y_2, const int _dec2_up_s0_y_1) {
  float _dec2_conv3x3_stencil_6 = (float) dec2_conv3x3_stencil.extract<0, 31>();

  float _dec2_weights_0_im_global_wrapper_global_wrapper_stencil_3 = (float) dec2_weights_0_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _dec3_sum_stencil_10 = (float) dec3_sum_stencil.extract<0, 31>();
  float _dec3_sum_stencil_11 = (float) dec3_sum_stencil.extract<32, 63>();
  float _dec3_sum_stencil_12 = (float) dec3_sum_stencil.extract<64, 95>();
  float _dec3_sum_stencil_9 = (float) dec3_sum_stencil.extract<96, 127>();

  float _10842 = float_from_bits(0 /* 0 */);
  float _10843 = float_from_bits(1077936128 /* 3 */);
  float _10844 = _dec3_sum_stencil_10 * _10843;
  float _10845 = _dec3_sum_stencil_9 + _10844;
  float _10846 = _10845 * _10843;
  float _10847 = _dec3_sum_stencil_12 * _10843;
  float _10848 = _dec3_sum_stencil_11 + _10847;
  float _10849 = _10846 + _10848;
  float _10850 = float_from_bits(1031798784 /* 0.0625 */);
  float _10851 = _10849 * _10850;
  bool _10852 = 80 <= _dec2_conv3x3_s1_r_18_x_3;
  int32_t _10853 = _dec2_up_s0_y_1 >> 1;
  int32_t _10854 = max(_10853, 3);
  int32_t _10855 = _10853 + 3;
  int32_t _10856 = min(_10854, _10855);
  int32_t _10857 = min(_10853, 41);
  int32_t _10858 = _10857 + 3;
  int32_t _10859 = max(_10856, _10858);
  int32_t _10860 = _10859 + _dec2_conv3x1_s1_i_2;
  int32_t _10861 = _10860 + -1;
  int32_t _10862 = _10861 + _dec2_conv3x1_s1_r_20_y_2;
  int32_t _10863 = _dec2_conv3x3_s1_r_18_y_2 + _10862;
  bool _10864 = 47 <= _10863;
  bool _10865 = _10852 || _10864;
  float _10866 = (float)(_10865 ? _10842 : _10851);
  float _10867 = _dec2_weights_0_im_global_wrapper_global_wrapper_stencil_3 * _10866;
  float _10868 = _dec2_conv3x3_stencil_6 + _10867;
  return _10868;
}

//store is: dec2_conv1x3.stencil(0, 0, 0) = (dec2_conv1x3.stencil(0, 0, 0) + (dec2_weights_1_im_global_wrapper_global_wrapper.stencil(dec2_conv3x1_s1_r_20_x_2, 0, dec2_conv1x3_s1_r_19_z_2, dec2_conv1x3_s1_r_19_x_3)*select(((((max(min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)), (min((dec2_up_s0_y_1/2), 41) + 3)) + dec2_conv3x1_s1_i_2) + -1) + dec2_conv3x1_s1_r_20_y_2) < 46), dec2_conv3x3.stencil(0, 0, 0), 0.000000f)))
hw_uint<32> hcompute_dec2_conv1x3_stencil_5(hw_uint<32>& dec2_conv1x3_stencil, hw_uint<32>& dec2_conv3x3_stencil, hw_uint<32>& dec2_weights_1_im_global_wrapper_global_wrapper_stencil, const int _dec2_conv3x1_s1_i_2, const int _dec2_conv3x1_s1_r_20_y_2, const int _dec2_up_s0_y_1) {
  float _dec2_conv1x3_stencil_5 = (float) dec2_conv1x3_stencil.extract<0, 31>();

  float _dec2_conv3x3_stencil_7 = (float) dec2_conv3x3_stencil.extract<0, 31>();

  float _dec2_weights_1_im_global_wrapper_global_wrapper_stencil_3 = (float) dec2_weights_1_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _10949 = float_from_bits(0 /* 0 */);
  int32_t _10950 = _dec2_up_s0_y_1 >> 1;
  int32_t _10951 = max(_10950, 3);
  int32_t _10952 = _10950 + 3;
  int32_t _10953 = min(_10951, _10952);
  int32_t _10954 = min(_10950, 41);
  int32_t _10955 = _10954 + 3;
  int32_t _10956 = max(_10953, _10955);
  int32_t _10957 = _10956 + _dec2_conv3x1_s1_i_2;
  int32_t _10958 = _10957 + -1;
  int32_t _10959 = _10958 + _dec2_conv3x1_s1_r_20_y_2;
  bool _10960 = _10959 < 46;
  float _10961 = (float)(_10960 ? _dec2_conv3x3_stencil_7 : _10949);
  float _10962 = _dec2_weights_1_im_global_wrapper_global_wrapper_stencil_3 * _10961;
  float _10963 = _dec2_conv1x3_stencil_5 + _10962;
  return _10963;
}

//store is: dec2_conv3x1.stencil((((((dec2_up_s0_x_1/2) + dec2_conv3x1_s1_c_2) + -1) - (dec2_up_s0_x_1/2)) + 1), ((((max(min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)), (min((dec2_up_s0_y_1/2), 41) + 3)) + dec2_conv3x1_s1_i_2) + -1) - (dec2_up_s0_y_1/2)) + 1), 0) = (dec2_conv3x1.stencil((((((dec2_up_s0_x_1/2) + dec2_conv3x1_s1_c_2) + -1) - (dec2_up_s0_x_1/2)) + 1), ((((max(min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)), (min((dec2_up_s0_y_1/2), 41) + 3)) + dec2_conv3x1_s1_i_2) + -1) - (dec2_up_s0_y_1/2)) + 1), 0) + (dec2_weights_2_im_global_wrapper_global_wrapper.stencil(((((dec2_up_s0_x_1/2) + dec2_conv3x1_s1_c_2) + -1) + 1), dec2_conv3x1_s1_r_20_y_2, 0, dec2_conv3x1_s1_r_20_x_2)*dec2_conv1x3.stencil(0, 0, 0)))
hw_uint<32> hcompute_dec2_conv3x1_stencil_3(hw_uint<32>& dec2_conv1x3_stencil, hw_uint<32>& dec2_conv3x1_stencil, hw_uint<32>& dec2_weights_2_im_global_wrapper_global_wrapper_stencil) {
  float _dec2_conv1x3_stencil_6 = (float) dec2_conv1x3_stencil.extract<0, 31>();

  float _dec2_conv3x1_stencil_3 = (float) dec2_conv3x1_stencil.extract<0, 31>();

  float _dec2_weights_2_im_global_wrapper_global_wrapper_stencil_3 = (float) dec2_weights_2_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _10998 = _dec2_weights_2_im_global_wrapper_global_wrapper_stencil_3 * _dec2_conv1x3_stencil_6;
  float _10999 = _dec2_conv3x1_stencil_3 + _10998;
  return _10999;
}

//store is: dec2_conv1x1.stencil((((((dec2_up_s0_x_1/2) + dec2_conv1x1_s0_c) + -1) - (dec2_up_s0_x_1/2)) + 1), (((((dec2_up_s0_y_1/2) + dec2_conv1x1_s0_i) + -1) - (dec2_up_s0_y_1/2)) + 1), 0) = 0.000000f
hw_uint<32> hcompute_dec2_conv1x1_stencil() {
  float _11028 = float_from_bits(0 /* 0 */);
  return _11028;
}

//store is: dec2_conv1x1.stencil((((((dec2_up_s0_x_1/2) + dec2_conv1x1_s1_c) + -1) - (dec2_up_s0_x_1/2)) + 1), (((((dec2_up_s0_y_1/2) + dec2_conv1x1_s1_i_3) + -1) - (dec2_up_s0_y_1/2)) + 1), 0) = (dec2_conv1x1.stencil((((((dec2_up_s0_x_1/2) + dec2_conv1x1_s1_c) + -1) - (dec2_up_s0_x_1/2)) + 1), (((((dec2_up_s0_y_1/2) + dec2_conv1x1_s1_i_3) + -1) - (dec2_up_s0_y_1/2)) + 1), 0) + (dec2_weights_3_im_global_wrapper_global_wrapper.stencil(((((dec2_up_s0_x_1/2) + dec2_conv1x1_s1_c) + -1) + 1), 0, 0, dec2_conv1x1_s1_r_21_x)*select((dec2_conv1x1_s1_r_21_x < 128), ((((dec3_sum.stencil(((dec2_conv1x1_s1_r_21_x/2) + ((dec2_conv1x1_s1_r_21_x % 2)*2)), (((((dec2_up_s0_y_1/2) + dec2_conv1x1_s1_i_3) + -1)/2) + 2), (dec2_up_s0__0 + 6)) + (dec3_sum.stencil(((dec2_conv1x1_s1_r_21_x/2) + 1), (((((dec2_up_s0_y_1/2) + dec2_conv1x1_s1_i_3) + -1)/2) + 2), (dec2_up_s0__0 + 6))*3.000000f))*3.000000f) + (dec3_sum.stencil(((dec2_conv1x1_s1_r_21_x/2) + ((dec2_conv1x1_s1_r_21_x % 2)*2)), ((((((dec2_up_s0_y_1/2) + dec2_conv1x1_s1_i_3) + -1)/2) + (((((dec2_up_s0_y_1/2) + dec2_conv1x1_s1_i_3) + -1) % 2)*2)) + 1), (dec2_up_s0__0 + 6)) + (dec3_sum.stencil(((dec2_conv1x1_s1_r_21_x/2) + 1), ((((((dec2_up_s0_y_1/2) + dec2_conv1x1_s1_i_3) + -1)/2) + (((((dec2_up_s0_y_1/2) + dec2_conv1x1_s1_i_3) + -1) % 2)*2)) + 1), (dec2_up_s0__0 + 6))*3.000000f)))*0.062500f), enc2_sum.stencil(dec2_conv1x1_s1_r_21_x, ((((dec2_up_s0_y_1/2) + dec2_conv1x1_s1_i_3) + -1) + 4), (dec2_up_s0__0 + 19)))))
hw_uint<32> hcompute_dec2_conv1x1_stencil_1(hw_uint<32>& dec2_conv1x1_stencil, hw_uint<32>& dec2_weights_3_im_global_wrapper_global_wrapper_stencil, hw_uint<128>& dec3_sum_stencil, hw_uint<32>& enc2_sum_stencil, const int _dec2_conv1x1_s1_r_21_x) {
  float _dec2_conv1x1_stencil_1 = (float) dec2_conv1x1_stencil.extract<0, 31>();

  float _dec2_weights_3_im_global_wrapper_global_wrapper_stencil_1 = (float) dec2_weights_3_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _dec3_sum_stencil_13 = (float) dec3_sum_stencil.extract<0, 31>();
  float _dec3_sum_stencil_14 = (float) dec3_sum_stencil.extract<32, 63>();
  float _dec3_sum_stencil_15 = (float) dec3_sum_stencil.extract<64, 95>();
  float _dec3_sum_stencil_16 = (float) dec3_sum_stencil.extract<96, 127>();

  float _enc2_sum_stencil_7 = (float) enc2_sum_stencil.extract<0, 31>();

  float _11045 = float_from_bits(1077936128 /* 3 */);
  float _11046 = _dec3_sum_stencil_14 * _11045;
  float _11047 = _dec3_sum_stencil_13 + _11046;
  float _11048 = _11047 * _11045;
  float _11049 = _dec3_sum_stencil_16 * _11045;
  float _11050 = _dec3_sum_stencil_15 + _11049;
  float _11051 = _11048 + _11050;
  float _11052 = float_from_bits(1031798784 /* 0.0625 */);
  float _11053 = _11051 * _11052;
  bool _11054 = _dec2_conv1x1_s1_r_21_x < 128;
  float _11055 = (float)(_11054 ? _11053 : _enc2_sum_stencil_7);
  float _11056 = _dec2_weights_3_im_global_wrapper_global_wrapper_stencil_1 * _11055;
  float _11057 = _dec2_conv1x1_stencil_1 + _11056;
  return _11057;
}

//store is: dec2_up.stencil(dec2_up_s0_x_1, (dec2_up_s0_y_1 + 2), (dec2_up_s0__0 + 4)) = ((((((dec2_conv3x1.stencil(1, 1, 0) + dec2_conv1x1.stencil(1, 1, 0))*3.000000f) + (dec2_conv3x1.stencil(((dec2_up_s0_x_1 % 2)*2), 1, 0) + dec2_conv1x1.stencil(((dec2_up_s0_x_1 % 2)*2), 1, 0)))*3.000000f) + (((dec2_conv3x1.stencil(1, ((dec2_up_s0_y_1 % 2)*2), 0) + dec2_conv1x1.stencil(1, ((dec2_up_s0_y_1 % 2)*2), 0))*3.000000f) + (dec2_conv3x1.stencil(((dec2_up_s0_x_1 % 2)*2), ((dec2_up_s0_y_1 % 2)*2), 0) + dec2_conv1x1.stencil(((dec2_up_s0_x_1 % 2)*2), ((dec2_up_s0_y_1 % 2)*2), 0))))*0.062500f)
hw_uint<32> hcompute_dec2_up_stencil(hw_uint<128>& dec2_conv1x1_stencil, hw_uint<128>& dec2_conv3x1_stencil) {
  float _dec2_conv1x1_stencil_2 = (float) dec2_conv1x1_stencil.extract<0, 31>();
  float _dec2_conv1x1_stencil_3 = (float) dec2_conv1x1_stencil.extract<32, 63>();
  float _dec2_conv1x1_stencil_4 = (float) dec2_conv1x1_stencil.extract<64, 95>();
  float _dec2_conv1x1_stencil_5 = (float) dec2_conv1x1_stencil.extract<96, 127>();

  float _dec2_conv3x1_stencil_4 = (float) dec2_conv3x1_stencil.extract<0, 31>();
  float _dec2_conv3x1_stencil_5 = (float) dec2_conv3x1_stencil.extract<32, 63>();
  float _dec2_conv3x1_stencil_6 = (float) dec2_conv3x1_stencil.extract<64, 95>();
  float _dec2_conv3x1_stencil_7 = (float) dec2_conv3x1_stencil.extract<96, 127>();

  float _11116 = _dec2_conv3x1_stencil_4 + _dec2_conv1x1_stencil_2;
  float _11117 = float_from_bits(1077936128 /* 3 */);
  float _11118 = _11116 * _11117;
  float _11119 = _dec2_conv3x1_stencil_5 + _dec2_conv1x1_stencil_3;
  float _11120 = _11118 + _11119;
  float _11121 = _11120 * _11117;
  float _11122 = _dec2_conv3x1_stencil_6 + _dec2_conv1x1_stencil_4;
  float _11123 = _11122 * _11117;
  float _11124 = _dec2_conv3x1_stencil_7 + _dec2_conv1x1_stencil_5;
  float _11125 = _11123 + _11124;
  float _11126 = _11121 + _11125;
  float _11127 = float_from_bits(1031798784 /* 0.0625 */);
  float _11128 = _11126 * _11127;
  return _11128;
}

//store is: dec1_weights_0_im_global_wrapper_global_wrapper.stencil(dec1_weights_0_im_global_wrapper_global_wrapper_s0__0, dec1_weights_0_im_global_wrapper_global_wrapper_s0__1, dec1_weights_0_im_global_wrapper_global_wrapper_s0__2, dec1_weights_0_im_global_wrapper_global_wrapper_s0__3) = dec1_weights_0_im_global_wrapper.stencil(dec1_weights_0_im_global_wrapper_global_wrapper_s0__0, dec1_weights_0_im_global_wrapper_global_wrapper_s0__1, dec1_weights_0_im_global_wrapper_global_wrapper_s0__2, dec1_weights_0_im_global_wrapper_global_wrapper_s0__3)
hw_uint<32> hcompute_dec1_weights_0_im_global_wrapper_global_wrapper_stencil(hw_uint<32>& dec1_weights_0_im_global_wrapper_stencil) {
  float _dec1_weights_0_im_global_wrapper_stencil_1 = (float) dec1_weights_0_im_global_wrapper_stencil.extract<0, 31>();

  return _dec1_weights_0_im_global_wrapper_stencil_1;
}

//store is: dec1_weights_1_im_global_wrapper_global_wrapper.stencil(dec1_weights_1_im_global_wrapper_global_wrapper_s0__0, 0, dec1_weights_1_im_global_wrapper_global_wrapper_s0__2, dec1_weights_1_im_global_wrapper_global_wrapper_s0__3) = dec1_weights_1_im_global_wrapper.stencil(dec1_weights_1_im_global_wrapper_global_wrapper_s0__0, 0, dec1_weights_1_im_global_wrapper_global_wrapper_s0__2, dec1_weights_1_im_global_wrapper_global_wrapper_s0__3)
hw_uint<32> hcompute_dec1_weights_1_im_global_wrapper_global_wrapper_stencil(hw_uint<32>& dec1_weights_1_im_global_wrapper_stencil) {
  float _dec1_weights_1_im_global_wrapper_stencil_1 = (float) dec1_weights_1_im_global_wrapper_stencil.extract<0, 31>();

  return _dec1_weights_1_im_global_wrapper_stencil_1;
}

//store is: dec1_weights_2_im_global_wrapper_global_wrapper.stencil((dec1_weights_2_im_global_wrapper_global_wrapper_s0__0 + 2), dec1_weights_2_im_global_wrapper_global_wrapper_s0__1, 0, dec1_weights_2_im_global_wrapper_global_wrapper_s0__3) = dec1_weights_2_im_global_wrapper.stencil(dec1_weights_2_im_global_wrapper_global_wrapper_s0__0, dec1_weights_2_im_global_wrapper_global_wrapper_s0__1, 0, dec1_weights_2_im_global_wrapper_global_wrapper_s0__3)
hw_uint<32> hcompute_dec1_weights_2_im_global_wrapper_global_wrapper_stencil(hw_uint<32>& dec1_weights_2_im_global_wrapper_stencil) {
  float _dec1_weights_2_im_global_wrapper_stencil_1 = (float) dec1_weights_2_im_global_wrapper_stencil.extract<0, 31>();

  return _dec1_weights_2_im_global_wrapper_stencil_1;
}

//store is: dec1_conv3x1.stencil(((((dec1_up_1_s0_x_3 + -6)/4) + dec1_conv3x1_s0_c) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), ((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv3x1_s0_i) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0) = 0.000000f
hw_uint<32> hcompute_dec1_conv3x1_stencil_2() {
  float _11237 = float_from_bits(0 /* 0 */);
  return _11237;
}

//store is: dec1_conv1x3.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_dec1_conv1x3_stencil() {
  float _11297 = float_from_bits(0 /* 0 */);
  return _11297;
}

//store is: dec1_conv3x3.stencil(0, (((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv3x1_s1_i) + dec1_conv3x1_s1_r_24_y) - max(min(((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv3x1_s1_i) + dec1_conv3x1_s1_r_24_y), 90), 1)), 0) = 0.000000f
hw_uint<32> hcompute_dec1_conv3x3_stencil() {
  float _11308 = float_from_bits(0 /* 0 */);
  return _11308;
}

//store is: dec1_conv3x3.stencil(0, (((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv3x1_s1_i) + dec1_conv3x1_s1_r_24_y) - max(min(((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv3x1_s1_i) + dec1_conv3x1_s1_r_24_y), 90), 1)), 0) = (dec1_conv3x3.stencil(0, (((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv3x1_s1_i) + dec1_conv3x1_s1_r_24_y) - max(min(((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv3x1_s1_i) + dec1_conv3x1_s1_r_24_y), 90), 1)), 0) + (dec1_weights_0_im_global_wrapper_global_wrapper.stencil(dec1_conv1x3_s1_r_23_x, dec1_conv3x3_s1_r_22_y, dec1_conv3x3_s1_r_22_z, dec1_conv3x3_s1_r_22_x)*select(((dec1_conv3x3_s1_r_22_y + ((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv3x1_s1_i) + dec1_conv3x1_s1_r_24_y)) < 2), 0.000000f, select((dec1_conv3x3_s1_r_22_x < 64), dec2_up.stencil(dec1_conv3x3_s1_r_22_x, max(min((((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv3x1_s1_i) + dec1_conv3x1_s1_r_24_y) + dec1_conv3x3_s1_r_22_y), 91), 2), (((dec1_conv1x3_s1_r_23_z + dec1_up_1_s0__0) + dec1_conv3x3_s1_r_22_z) + 2)), enc1_sum.stencil(dec1_conv3x3_s1_r_22_x, (max(min((((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv3x1_s1_i) + dec1_conv3x1_s1_r_24_y) + dec1_conv3x3_s1_r_22_y), 91), 2) + 6), (((dec1_conv1x3_s1_r_23_z + dec1_up_1_s0__0) + dec1_conv3x3_s1_r_22_z) + 39))))))
hw_uint<32> hcompute_dec1_conv3x3_stencil_1(hw_uint<32>& dec1_conv3x3_stencil, hw_uint<32>& dec1_weights_0_im_global_wrapper_global_wrapper_stencil, hw_uint<32>& dec2_up_stencil, hw_uint<32>& enc1_sum_stencil, const int _dec1_conv3x1_s1_i, const int _dec1_conv3x1_s1_r_24_y, const int _dec1_conv3x3_s1_r_22_x, const int _dec1_conv3x3_s1_r_22_y, const int _dec1_up_1_s0_y_3) {
  float _dec1_conv3x3_stencil_1 = (float) dec1_conv3x3_stencil.extract<0, 31>();

  float _dec1_weights_0_im_global_wrapper_global_wrapper_stencil_1 = (float) dec1_weights_0_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _dec2_up_stencil_1 = (float) dec2_up_stencil.extract<0, 31>();

  float _enc1_sum_stencil_7 = (float) enc1_sum_stencil.extract<0, 31>();

  float _11318 = float_from_bits(0 /* 0 */);
  bool _11319 = _dec1_conv3x3_s1_r_22_x < 64;
  float _11320 = (float)(_11319 ? _dec2_up_stencil_1 : _enc1_sum_stencil_7);
  int32_t _11321 = _dec1_up_1_s0_y_3 + -6;
  int32_t _11322 = _11321 >> 2;
  int32_t _11323 = _11322 + _dec1_conv3x1_s1_i;
  int32_t _11324 = _11323 + _dec1_conv3x1_s1_r_24_y;
  int32_t _11325 = _dec1_conv3x3_s1_r_22_y + _11324;
  bool _11326 = _11325 < 2;
  float _11327 = (float)(_11326 ? _11318 : _11320);
  float _11328 = _dec1_weights_0_im_global_wrapper_global_wrapper_stencil_1 * _11327;
  float _11329 = _dec1_conv3x3_stencil_1 + _11328;
  return _11329;
}

//store is: dec1_conv1x3.stencil(0, 0, 0) = (dec1_conv1x3.stencil(0, 0, 0) + (dec1_weights_1_im_global_wrapper_global_wrapper.stencil(dec1_conv3x1_s1_r_24_x, 0, dec1_conv1x3_s1_r_23_z, dec1_conv1x3_s1_r_23_x)*select((((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv3x1_s1_i) + dec1_conv3x1_s1_r_24_y) < 1), 0.000000f, dec1_conv3x3.stencil(0, max((((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv3x1_s1_i) + dec1_conv3x1_s1_r_24_y) - max(min(((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv3x1_s1_i) + dec1_conv3x1_s1_r_24_y), 90), 1)), 0), 0))))
hw_uint<32> hcompute_dec1_conv1x3_stencil_1(hw_uint<32>& dec1_conv1x3_stencil, hw_uint<32>& dec1_conv3x3_stencil, hw_uint<32>& dec1_weights_1_im_global_wrapper_global_wrapper_stencil, const int _dec1_conv3x1_s1_i, const int _dec1_conv3x1_s1_r_24_y, const int _dec1_up_1_s0_y_3) {
  float _dec1_conv1x3_stencil_1 = (float) dec1_conv1x3_stencil.extract<0, 31>();

  float _dec1_conv3x3_stencil_2 = (float) dec1_conv3x3_stencil.extract<0, 31>();

  float _dec1_weights_1_im_global_wrapper_global_wrapper_stencil_1 = (float) dec1_weights_1_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _11370 = float_from_bits(0 /* 0 */);
  int32_t _11371 = _dec1_up_1_s0_y_3 + -6;
  int32_t _11372 = _11371 >> 2;
  int32_t _11373 = _11372 + _dec1_conv3x1_s1_i;
  int32_t _11374 = _11373 + _dec1_conv3x1_s1_r_24_y;
  bool _11375 = _11374 < 1;
  float _11376 = (float)(_11375 ? _11370 : _dec1_conv3x3_stencil_2);
  float _11377 = _dec1_weights_1_im_global_wrapper_global_wrapper_stencil_1 * _11376;
  float _11378 = _dec1_conv1x3_stencil_1 + _11377;
  return _11378;
}

//store is: dec1_conv3x1.stencil(((((dec1_up_1_s0_x_3 + -6)/4) + dec1_conv3x1_s1_c) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), ((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv3x1_s1_i) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0) = (dec1_conv3x1.stencil(((((dec1_up_1_s0_x_3 + -6)/4) + dec1_conv3x1_s1_c) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), ((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv3x1_s1_i) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0) + (dec1_weights_2_im_global_wrapper_global_wrapper.stencil(((((dec1_up_1_s0_x_3 + -6)/4) + dec1_conv3x1_s1_c) + 2), dec1_conv3x1_s1_r_24_y, 0, dec1_conv3x1_s1_r_24_x)*dec1_conv1x3.stencil(0, 0, 0)))
hw_uint<32> hcompute_dec1_conv3x1_stencil_3(hw_uint<32>& dec1_conv1x3_stencil, hw_uint<32>& dec1_conv3x1_stencil, hw_uint<32>& dec1_weights_2_im_global_wrapper_global_wrapper_stencil) {
  float _dec1_conv1x3_stencil_2 = (float) dec1_conv1x3_stencil.extract<0, 31>();

  float _dec1_conv3x1_stencil_1 = (float) dec1_conv3x1_stencil.extract<0, 31>();

  float _dec1_weights_2_im_global_wrapper_global_wrapper_stencil_1 = (float) dec1_weights_2_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _11405 = _dec1_weights_2_im_global_wrapper_global_wrapper_stencil_1 * _dec1_conv1x3_stencil_2;
  float _11406 = _dec1_conv3x1_stencil_1 + _11405;
  return _11406;
}

//store is: dec1_conv1x3.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_dec1_conv1x3_stencil_2() {
  float _11477 = float_from_bits(0 /* 0 */);
  return _11477;
}

//store is: dec1_conv3x3.stencil(0, (max(((min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)) + dec1_conv3x1_s1_i_1) + dec1_conv3x1_s1_r_24_y_1), 90) + -90), 0) = 0.000000f
hw_uint<32> hcompute_dec1_conv3x3_stencil_2() {
  float _11489 = float_from_bits(0 /* 0 */);
  return _11489;
}

//store is: dec1_conv3x3.stencil(0, (max(((min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)) + dec1_conv3x1_s1_i_1) + dec1_conv3x1_s1_r_24_y_1), 90) + -90), 0) = (dec1_conv3x3.stencil(0, (max(((min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)) + dec1_conv3x1_s1_i_1) + dec1_conv3x1_s1_r_24_y_1), 90) + -90), 0) + (dec1_weights_0_im_global_wrapper_global_wrapper.stencil(dec1_conv1x3_s1_r_23_x_1, dec1_conv3x3_s1_r_22_y_1, dec1_conv3x3_s1_r_22_z_1, dec1_conv3x3_s1_r_22_x_1)*select((dec1_conv3x3_s1_r_22_x_1 < 64), dec2_up.stencil(dec1_conv3x3_s1_r_22_x_1, min((((min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)) + dec1_conv3x1_s1_i_1) + dec1_conv3x1_s1_r_24_y_1) + dec1_conv3x3_s1_r_22_y_1), 91), (((dec1_conv1x3_s1_r_23_z_1 + dec1_up_1_s0__0) + dec1_conv3x3_s1_r_22_z_1) + 2)), enc1_sum.stencil(dec1_conv3x3_s1_r_22_x_1, (min((((min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)) + dec1_conv3x1_s1_i_1) + dec1_conv3x1_s1_r_24_y_1) + dec1_conv3x3_s1_r_22_y_1), 91) + 6), (((dec1_conv1x3_s1_r_23_z_1 + dec1_up_1_s0__0) + dec1_conv3x3_s1_r_22_z_1) + 39)))))
hw_uint<32> hcompute_dec1_conv3x3_stencil_3(hw_uint<32>& dec1_conv3x3_stencil, hw_uint<32>& dec1_weights_0_im_global_wrapper_global_wrapper_stencil, hw_uint<32>& dec2_up_stencil, hw_uint<32>& enc1_sum_stencil, const int _dec1_conv3x3_s1_r_22_x_1) {
  float _dec1_conv3x3_stencil_3 = (float) dec1_conv3x3_stencil.extract<0, 31>();

  float _dec1_weights_0_im_global_wrapper_global_wrapper_stencil_2 = (float) dec1_weights_0_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _dec2_up_stencil_2 = (float) dec2_up_stencil.extract<0, 31>();

  float _enc1_sum_stencil_8 = (float) enc1_sum_stencil.extract<0, 31>();

  bool _11502 = _dec1_conv3x3_s1_r_22_x_1 < 64;
  float _11503 = (float)(_11502 ? _dec2_up_stencil_2 : _enc1_sum_stencil_8);
  float _11504 = _dec1_weights_0_im_global_wrapper_global_wrapper_stencil_2 * _11503;
  float _11505 = _dec1_conv3x3_stencil_3 + _11504;
  return _11505;
}

//store is: dec1_conv1x3.stencil(0, 0, 0) = (dec1_conv1x3.stencil(0, 0, 0) + (dec1_weights_1_im_global_wrapper_global_wrapper.stencil(dec1_conv3x1_s1_r_24_x_1, 0, dec1_conv1x3_s1_r_23_z_1, dec1_conv1x3_s1_r_23_x_1)*dec1_conv3x3.stencil(0, (max(((min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)) + dec1_conv3x1_s1_i_1) + dec1_conv3x1_s1_r_24_y_1), 90) + -90), 0)))
hw_uint<32> hcompute_dec1_conv1x3_stencil_3(hw_uint<32>& dec1_conv1x3_stencil, hw_uint<32>& dec1_conv3x3_stencil, hw_uint<32>& dec1_weights_1_im_global_wrapper_global_wrapper_stencil) {
  float _dec1_conv1x3_stencil_3 = (float) dec1_conv1x3_stencil.extract<0, 31>();

  float _dec1_conv3x3_stencil_4 = (float) dec1_conv3x3_stencil.extract<0, 31>();

  float _dec1_weights_1_im_global_wrapper_global_wrapper_stencil_2 = (float) dec1_weights_1_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _11535 = _dec1_weights_1_im_global_wrapper_global_wrapper_stencil_2 * _dec1_conv3x3_stencil_4;
  float _11536 = _dec1_conv1x3_stencil_3 + _11535;
  return _11536;
}

//store is: dec1_conv3x1.stencil(((((dec1_up_1_s0_x_3 + -6)/4) + dec1_conv3x1_s1_c_1) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), ((min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)) + dec1_conv3x1_s1_i_1) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0) = (dec1_conv3x1.stencil(((((dec1_up_1_s0_x_3 + -6)/4) + dec1_conv3x1_s1_c_1) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), ((min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)) + dec1_conv3x1_s1_i_1) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0) + (dec1_weights_2_im_global_wrapper_global_wrapper.stencil(((((dec1_up_1_s0_x_3 + -6)/4) + dec1_conv3x1_s1_c_1) + 2), dec1_conv3x1_s1_r_24_y_1, 0, dec1_conv3x1_s1_r_24_x_1)*dec1_conv1x3.stencil(0, 0, 0)))
hw_uint<32> hcompute_dec1_conv3x1_stencil_4(hw_uint<32>& dec1_conv1x3_stencil, hw_uint<32>& dec1_conv3x1_stencil, hw_uint<32>& dec1_weights_2_im_global_wrapper_global_wrapper_stencil) {
  float _dec1_conv1x3_stencil_4 = (float) dec1_conv1x3_stencil.extract<0, 31>();

  float _dec1_conv3x1_stencil_2 = (float) dec1_conv3x1_stencil.extract<0, 31>();

  float _dec1_weights_2_im_global_wrapper_global_wrapper_stencil_2 = (float) dec1_weights_2_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _11554 = _dec1_weights_2_im_global_wrapper_global_wrapper_stencil_2 * _dec1_conv1x3_stencil_4;
  float _11555 = _dec1_conv3x1_stencil_2 + _11554;
  return _11555;
}

//store is: dec1_conv1x3.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_dec1_conv1x3_stencil_4() {
  float _11630 = float_from_bits(0 /* 0 */);
  return _11630;
}

//store is: dec1_conv3x3.stencil(0, (max(((max(min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)), (min(((dec1_up_1_s0_y_3 + 6)/4), 87) + 1)) + dec1_conv3x1_s1_i_2) + dec1_conv3x1_s1_r_24_y_2), 90) + -90), 0) = 0.000000f
hw_uint<32> hcompute_dec1_conv3x3_stencil_4() {
  float _11647 = float_from_bits(0 /* 0 */);
  return _11647;
}

//store is: dec1_conv3x3.stencil(0, (max(((max(min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)), (min(((dec1_up_1_s0_y_3 + 6)/4), 87) + 1)) + dec1_conv3x1_s1_i_2) + dec1_conv3x1_s1_r_24_y_2), 90) + -90), 0) = (dec1_conv3x3.stencil(0, (max(((max(min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)), (min(((dec1_up_1_s0_y_3 + 6)/4), 87) + 1)) + dec1_conv3x1_s1_i_2) + dec1_conv3x1_s1_r_24_y_2), 90) + -90), 0) + (dec1_weights_0_im_global_wrapper_global_wrapper.stencil(dec1_conv1x3_s1_r_23_x_2, dec1_conv3x3_s1_r_22_y_2, dec1_conv3x3_s1_r_22_z_2, dec1_conv3x3_s1_r_22_x_2)*select(((dec1_conv3x3_s1_r_22_y_2 + ((max(min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)), (min(((dec1_up_1_s0_y_3 + 6)/4), 87) + 1)) + dec1_conv3x1_s1_i_2) + dec1_conv3x1_s1_r_24_y_2)) < 92), select((dec1_conv3x3_s1_r_22_x_2 < 64), dec2_up.stencil(dec1_conv3x3_s1_r_22_x_2, min((((max(min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)), (min(((dec1_up_1_s0_y_3 + 6)/4), 87) + 1)) + dec1_conv3x1_s1_i_2) + dec1_conv3x1_s1_r_24_y_2) + dec1_conv3x3_s1_r_22_y_2), 91), (((dec1_conv1x3_s1_r_23_z_2 + dec1_up_1_s0__0) + dec1_conv3x3_s1_r_22_z_2) + 2)), enc1_sum.stencil(dec1_conv3x3_s1_r_22_x_2, (min((((max(min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)), (min(((dec1_up_1_s0_y_3 + 6)/4), 87) + 1)) + dec1_conv3x1_s1_i_2) + dec1_conv3x1_s1_r_24_y_2) + dec1_conv3x3_s1_r_22_y_2), 91) + 6), (((dec1_conv1x3_s1_r_23_z_2 + dec1_up_1_s0__0) + dec1_conv3x3_s1_r_22_z_2) + 39))), 0.000000f)))
hw_uint<32> hcompute_dec1_conv3x3_stencil_5(hw_uint<32>& dec1_conv3x3_stencil, hw_uint<32>& dec1_weights_0_im_global_wrapper_global_wrapper_stencil, hw_uint<32>& dec2_up_stencil, hw_uint<32>& enc1_sum_stencil, const int _dec1_conv3x1_s1_i_2, const int _dec1_conv3x1_s1_r_24_y_2, const int _dec1_conv3x3_s1_r_22_x_2, const int _dec1_conv3x3_s1_r_22_y_2, const int _dec1_up_1_s0_y_3) {
  float _dec1_conv3x3_stencil_5 = (float) dec1_conv3x3_stencil.extract<0, 31>();

  float _dec1_weights_0_im_global_wrapper_global_wrapper_stencil_3 = (float) dec1_weights_0_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _dec2_up_stencil_3 = (float) dec2_up_stencil.extract<0, 31>();

  float _enc1_sum_stencil_9 = (float) enc1_sum_stencil.extract<0, 31>();

  bool _11665 = _dec1_conv3x3_s1_r_22_x_2 < 64;
  float _11666 = (float)(_11665 ? _dec2_up_stencil_3 : _enc1_sum_stencil_9);
  float _11667 = float_from_bits(0 /* 0 */);
  int32_t _11668 = _dec1_up_1_s0_y_3 + -6;
  int32_t _11669 = _11668 >> 2;
  int32_t _11670 = max(_11669, 2);
  int32_t _11671 = _dec1_up_1_s0_y_3 + 10;
  int32_t _11672 = _11671 >> 2;
  int32_t _11673 = min(_11670, _11672);
  int32_t _11674 = _dec1_up_1_s0_y_3 + 6;
  int32_t _11675 = _11674 >> 2;
  int32_t _11676 = min(_11675, 87);
  int32_t _11677 = _11676 + 1;
  int32_t _11678 = max(_11673, _11677);
  int32_t _11679 = _11678 + _dec1_conv3x1_s1_i_2;
  int32_t _11680 = _11679 + _dec1_conv3x1_s1_r_24_y_2;
  int32_t _11681 = _dec1_conv3x3_s1_r_22_y_2 + _11680;
  bool _11682 = _11681 < 92;
  float _11683 = (float)(_11682 ? _11666 : _11667);
  float _11684 = _dec1_weights_0_im_global_wrapper_global_wrapper_stencil_3 * _11683;
  float _11685 = _dec1_conv3x3_stencil_5 + _11684;
  return _11685;
}

//store is: dec1_conv1x3.stencil(0, 0, 0) = (dec1_conv1x3.stencil(0, 0, 0) + (dec1_weights_1_im_global_wrapper_global_wrapper.stencil(dec1_conv3x1_s1_r_24_x_2, 0, dec1_conv1x3_s1_r_23_z_2, dec1_conv1x3_s1_r_23_x_2)*select((((max(min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)), (min(((dec1_up_1_s0_y_3 + 6)/4), 87) + 1)) + dec1_conv3x1_s1_i_2) + dec1_conv3x1_s1_r_24_y_2) < 91), dec1_conv3x3.stencil(0, 0, 0), 0.000000f)))
hw_uint<32> hcompute_dec1_conv1x3_stencil_5(hw_uint<32>& dec1_conv1x3_stencil, hw_uint<32>& dec1_conv3x3_stencil, hw_uint<32>& dec1_weights_1_im_global_wrapper_global_wrapper_stencil, const int _dec1_conv3x1_s1_i_2, const int _dec1_conv3x1_s1_r_24_y_2, const int _dec1_up_1_s0_y_3) {
  float _dec1_conv1x3_stencil_5 = (float) dec1_conv1x3_stencil.extract<0, 31>();

  float _dec1_conv3x3_stencil_6 = (float) dec1_conv3x3_stencil.extract<0, 31>();

  float _dec1_weights_1_im_global_wrapper_global_wrapper_stencil_3 = (float) dec1_weights_1_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _11742 = float_from_bits(0 /* 0 */);
  int32_t _11743 = _dec1_up_1_s0_y_3 + -6;
  int32_t _11744 = _11743 >> 2;
  int32_t _11745 = max(_11744, 2);
  int32_t _11746 = _dec1_up_1_s0_y_3 + 10;
  int32_t _11747 = _11746 >> 2;
  int32_t _11748 = min(_11745, _11747);
  int32_t _11749 = _dec1_up_1_s0_y_3 + 6;
  int32_t _11750 = _11749 >> 2;
  int32_t _11751 = min(_11750, 87);
  int32_t _11752 = _11751 + 1;
  int32_t _11753 = max(_11748, _11752);
  int32_t _11754 = _11753 + _dec1_conv3x1_s1_i_2;
  int32_t _11755 = _11754 + _dec1_conv3x1_s1_r_24_y_2;
  bool _11756 = _11755 < 91;
  float _11757 = (float)(_11756 ? _dec1_conv3x3_stencil_6 : _11742);
  float _11758 = _dec1_weights_1_im_global_wrapper_global_wrapper_stencil_3 * _11757;
  float _11759 = _dec1_conv1x3_stencil_5 + _11758;
  return _11759;
}

//store is: dec1_conv3x1.stencil(((((dec1_up_1_s0_x_3 + -6)/4) + dec1_conv3x1_s1_c_2) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), ((max(min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)), (min(((dec1_up_1_s0_y_3 + 6)/4), 87) + 1)) + dec1_conv3x1_s1_i_2) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0) = (dec1_conv3x1.stencil(((((dec1_up_1_s0_x_3 + -6)/4) + dec1_conv3x1_s1_c_2) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), ((max(min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)), (min(((dec1_up_1_s0_y_3 + 6)/4), 87) + 1)) + dec1_conv3x1_s1_i_2) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0) + (dec1_weights_2_im_global_wrapper_global_wrapper.stencil(((((dec1_up_1_s0_x_3 + -6)/4) + dec1_conv3x1_s1_c_2) + 2), dec1_conv3x1_s1_r_24_y_2, 0, dec1_conv3x1_s1_r_24_x_2)*dec1_conv1x3.stencil(0, 0, 0)))
hw_uint<32> hcompute_dec1_conv3x1_stencil_5(hw_uint<32>& dec1_conv1x3_stencil, hw_uint<32>& dec1_conv3x1_stencil, hw_uint<32>& dec1_weights_2_im_global_wrapper_global_wrapper_stencil) {
  float _dec1_conv1x3_stencil_6 = (float) dec1_conv1x3_stencil.extract<0, 31>();

  float _dec1_conv3x1_stencil_3 = (float) dec1_conv3x1_stencil.extract<0, 31>();

  float _dec1_weights_2_im_global_wrapper_global_wrapper_stencil_3 = (float) dec1_weights_2_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _11800 = _dec1_weights_2_im_global_wrapper_global_wrapper_stencil_3 * _dec1_conv1x3_stencil_6;
  float _11801 = _dec1_conv3x1_stencil_3 + _11800;
  return _11801;
}

//store is: dec1_conv1x1.stencil(((((dec1_up_1_s0_x_3 + -6)/4) + dec1_conv1x1_s0_c) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), ((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv1x1_s0_i) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0) = 0.000000f
hw_uint<32> hcompute_dec1_conv1x1_stencil() {
  float _11931 = float_from_bits(0 /* 0 */);
  return _11931;
}

//store is: dec1_conv1x1.stencil(((((dec1_up_1_s0_x_3 + -6)/4) + dec1_conv1x1_s1_c) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), ((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv1x1_s1_i) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0) = (dec1_conv1x1.stencil(((((dec1_up_1_s0_x_3 + -6)/4) + dec1_conv1x1_s1_c) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), ((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv1x1_s1_i) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0) + (dec1_weights_3_im_global_wrapper_global_wrapper.stencil(((((dec1_up_1_s0_x_3 + -6)/4) + dec1_conv1x1_s1_c) + 2), 0, 0, dec1_conv1x1_s1_r_25_x)*select((dec1_conv1x1_s1_r_25_x < 64), dec2_up.stencil(dec1_conv1x1_s1_r_25_x, ((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv1x1_s1_i) + 2), (dec1_up_1_s0__0 + 4)), enc1_sum.stencil(dec1_conv1x1_s1_r_25_x, ((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv1x1_s1_i) + 8), (dec1_up_1_s0__0 + 41)))))
hw_uint<32> hcompute_dec1_conv1x1_stencil_1(hw_uint<32>& dec1_conv1x1_stencil, hw_uint<32>& dec1_weights_3_im_global_wrapper_global_wrapper_stencil, hw_uint<32>& dec2_up_stencil, hw_uint<32>& enc1_sum_stencil, const int _dec1_conv1x1_s1_r_25_x) {
  float _dec1_conv1x1_stencil_1 = (float) dec1_conv1x1_stencil.extract<0, 31>();

  float _dec1_weights_3_im_global_wrapper_global_wrapper_stencil_1 = (float) dec1_weights_3_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _dec2_up_stencil_4 = (float) dec2_up_stencil.extract<0, 31>();

  float _enc1_sum_stencil_10 = (float) enc1_sum_stencil.extract<0, 31>();

  bool _11986 = _dec1_conv1x1_s1_r_25_x < 64;
  float _11987 = (float)(_11986 ? _dec2_up_stencil_4 : _enc1_sum_stencil_10);
  float _11988 = _dec1_weights_3_im_global_wrapper_global_wrapper_stencil_1 * _11987;
  float _11989 = _dec1_conv1x1_stencil_1 + _11988;
  return _11989;
}

//store is: dec1_up$1.stencil(dec1_up_1_s0_x_3, dec1_up_1_s0_y_3, (dec1_up_1_s0__0 + 2)) = ((((((((((dec1_conv3x1.stencil(max(((dec1_up_1_s0_x_3/4) - min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1))), 0), max(((dec1_up_1_s0_y_3/4) - min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1))), 0), 0) + dec1_conv1x1.stencil(max(((dec1_up_1_s0_x_3/4) - min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1))), 0), max(((dec1_up_1_s0_y_3/4) - min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1))), 0), 0))*3.000000f) + (dec1_conv3x1.stencil(((((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))) + -1), max(((dec1_up_1_s0_y_3/4) - min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1))), 0), 0) + dec1_conv1x1.stencil(((((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))) + -1), max(((dec1_up_1_s0_y_3/4) - min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1))), 0), 0)))*3.000000f) + (((dec1_conv3x1.stencil(max(((dec1_up_1_s0_x_3/4) - min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1))), 0), ((((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))) + -1), 0) + dec1_conv1x1.stencil(max(((dec1_up_1_s0_x_3/4) - min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1))), 0), ((((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))) + -1), 0))*3.000000f) + (dec1_conv3x1.stencil(((((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))) + -1), ((((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))) + -1), 0) + dec1_conv1x1.stencil(((((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))) + -1), ((((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))) + -1), 0))))*3.000000f) + (((((dec1_conv3x1.stencil(((((dec1_up_1_s0_x_3 + -2)/4) + (dec1_up_1_s0_x_3 % 2)) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), max(((dec1_up_1_s0_y_3/4) - min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1))), 0), 0) + dec1_conv1x1.stencil(((((dec1_up_1_s0_x_3 + -2)/4) + (dec1_up_1_s0_x_3 % 2)) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), max(((dec1_up_1_s0_y_3/4) - min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1))), 0), 0))*3.000000f) + (dec1_conv3x1.stencil((((dec1_up_1_s0_x_3 % 2) + (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), max(((dec1_up_1_s0_y_3/4) - min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1))), 0), 0) + dec1_conv1x1.stencil((((dec1_up_1_s0_x_3 % 2) + (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), max(((dec1_up_1_s0_y_3/4) - min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1))), 0), 0)))*3.000000f) + (((dec1_conv3x1.stencil(((((dec1_up_1_s0_x_3 + -2)/4) + (dec1_up_1_s0_x_3 % 2)) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), ((((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))) + -1), 0) + dec1_conv1x1.stencil(((((dec1_up_1_s0_x_3 + -2)/4) + (dec1_up_1_s0_x_3 % 2)) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), ((((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))) + -1), 0))*3.000000f) + (dec1_conv3x1.stencil((((dec1_up_1_s0_x_3 % 2) + (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), ((((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))) + -1), 0) + dec1_conv1x1.stencil((((dec1_up_1_s0_x_3 % 2) + (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), ((((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))) + -1), 0)))))*3.000000f) + (((((((dec1_conv3x1.stencil(max(((dec1_up_1_s0_x_3/4) - min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1))), 0), ((((dec1_up_1_s0_y_3 + -2)/4) + (dec1_up_1_s0_y_3 % 2)) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0) + dec1_conv1x1.stencil(max(((dec1_up_1_s0_x_3/4) - min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1))), 0), ((((dec1_up_1_s0_y_3 + -2)/4) + (dec1_up_1_s0_y_3 % 2)) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0))*3.000000f) + (dec1_conv3x1.stencil(((((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))) + -1), ((((dec1_up_1_s0_y_3 + -2)/4) + (dec1_up_1_s0_y_3 % 2)) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0) + dec1_conv1x1.stencil(((((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))) + -1), ((((dec1_up_1_s0_y_3 + -2)/4) + (dec1_up_1_s0_y_3 % 2)) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0)))*3.000000f) + (((dec1_conv3x1.stencil(max(((dec1_up_1_s0_x_3/4) - min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1))), 0), (((dec1_up_1_s0_y_3 % 2) + (((dec1_up_1_s0_y_3 + -6)/4) + ((((dec1_up_1_s0_y_3/2) + 1) % 2)*2))) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0) + dec1_conv1x1.stencil(max(((dec1_up_1_s0_x_3/4) - min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1))), 0), (((dec1_up_1_s0_y_3 % 2) + (((dec1_up_1_s0_y_3 + -6)/4) + ((((dec1_up_1_s0_y_3/2) + 1) % 2)*2))) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0))*3.000000f) + (dec1_conv3x1.stencil(((((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))) + -1), (((dec1_up_1_s0_y_3 % 2) + (((dec1_up_1_s0_y_3 + -6)/4) + ((((dec1_up_1_s0_y_3/2) + 1) % 2)*2))) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0) + dec1_conv1x1.stencil(((((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))) + -1), (((dec1_up_1_s0_y_3 % 2) + (((dec1_up_1_s0_y_3 + -6)/4) + ((((dec1_up_1_s0_y_3/2) + 1) % 2)*2))) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0))))*3.000000f) + (((((dec1_conv3x1.stencil(((((dec1_up_1_s0_x_3 + -2)/4) + (dec1_up_1_s0_x_3 % 2)) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), ((((dec1_up_1_s0_y_3 + -2)/4) + (dec1_up_1_s0_y_3 % 2)) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0) + dec1_conv1x1.stencil(((((dec1_up_1_s0_x_3 + -2)/4) + (dec1_up_1_s0_x_3 % 2)) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), ((((dec1_up_1_s0_y_3 + -2)/4) + (dec1_up_1_s0_y_3 % 2)) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0))*3.000000f) + (dec1_conv3x1.stencil((((dec1_up_1_s0_x_3 % 2) + (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), ((((dec1_up_1_s0_y_3 + -2)/4) + (dec1_up_1_s0_y_3 % 2)) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0) + dec1_conv1x1.stencil((((dec1_up_1_s0_x_3 % 2) + (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), ((((dec1_up_1_s0_y_3 + -2)/4) + (dec1_up_1_s0_y_3 % 2)) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0)))*3.000000f) + (((dec1_conv3x1.stencil(((((dec1_up_1_s0_x_3 + -2)/4) + (dec1_up_1_s0_x_3 % 2)) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), (((dec1_up_1_s0_y_3 % 2) + (((dec1_up_1_s0_y_3 + -6)/4) + ((((dec1_up_1_s0_y_3/2) + 1) % 2)*2))) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0) + dec1_conv1x1.stencil(((((dec1_up_1_s0_x_3 + -2)/4) + (dec1_up_1_s0_x_3 % 2)) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), (((dec1_up_1_s0_y_3 % 2) + (((dec1_up_1_s0_y_3 + -6)/4) + ((((dec1_up_1_s0_y_3/2) + 1) % 2)*2))) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0))*3.000000f) + (dec1_conv3x1.stencil((((dec1_up_1_s0_x_3 % 2) + (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), (((dec1_up_1_s0_y_3 % 2) + (((dec1_up_1_s0_y_3 + -6)/4) + ((((dec1_up_1_s0_y_3/2) + 1) % 2)*2))) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0) + dec1_conv1x1.stencil((((dec1_up_1_s0_x_3 % 2) + (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), (((dec1_up_1_s0_y_3 % 2) + (((dec1_up_1_s0_y_3 + -6)/4) + ((((dec1_up_1_s0_y_3/2) + 1) % 2)*2))) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0))))))*0.003906f)
hw_uint<32> hcompute_dec1_up_1_stencil(hw_uint<512>& dec1_conv1x1_stencil, hw_uint<512>& dec1_conv3x1_stencil) {
  float _dec1_conv1x1_stencil_10 = (float) dec1_conv1x1_stencil.extract<0, 31>();
  float _dec1_conv1x1_stencil_11 = (float) dec1_conv1x1_stencil.extract<32, 63>();
  float _dec1_conv1x1_stencil_12 = (float) dec1_conv1x1_stencil.extract<64, 95>();
  float _dec1_conv1x1_stencil_13 = (float) dec1_conv1x1_stencil.extract<96, 127>();
  float _dec1_conv1x1_stencil_14 = (float) dec1_conv1x1_stencil.extract<128, 159>();
  float _dec1_conv1x1_stencil_15 = (float) dec1_conv1x1_stencil.extract<160, 191>();
  float _dec1_conv1x1_stencil_16 = (float) dec1_conv1x1_stencil.extract<192, 223>();
  float _dec1_conv1x1_stencil_17 = (float) dec1_conv1x1_stencil.extract<224, 255>();
  float _dec1_conv1x1_stencil_2 = (float) dec1_conv1x1_stencil.extract<256, 287>();
  float _dec1_conv1x1_stencil_3 = (float) dec1_conv1x1_stencil.extract<288, 319>();
  float _dec1_conv1x1_stencil_4 = (float) dec1_conv1x1_stencil.extract<320, 351>();
  float _dec1_conv1x1_stencil_5 = (float) dec1_conv1x1_stencil.extract<352, 383>();
  float _dec1_conv1x1_stencil_6 = (float) dec1_conv1x1_stencil.extract<384, 415>();
  float _dec1_conv1x1_stencil_7 = (float) dec1_conv1x1_stencil.extract<416, 447>();
  float _dec1_conv1x1_stencil_8 = (float) dec1_conv1x1_stencil.extract<448, 479>();
  float _dec1_conv1x1_stencil_9 = (float) dec1_conv1x1_stencil.extract<480, 511>();

  float _dec1_conv3x1_stencil_10 = (float) dec1_conv3x1_stencil.extract<0, 31>();
  float _dec1_conv3x1_stencil_11 = (float) dec1_conv3x1_stencil.extract<32, 63>();
  float _dec1_conv3x1_stencil_12 = (float) dec1_conv3x1_stencil.extract<64, 95>();
  float _dec1_conv3x1_stencil_13 = (float) dec1_conv3x1_stencil.extract<96, 127>();
  float _dec1_conv3x1_stencil_14 = (float) dec1_conv3x1_stencil.extract<128, 159>();
  float _dec1_conv3x1_stencil_15 = (float) dec1_conv3x1_stencil.extract<160, 191>();
  float _dec1_conv3x1_stencil_16 = (float) dec1_conv3x1_stencil.extract<192, 223>();
  float _dec1_conv3x1_stencil_17 = (float) dec1_conv3x1_stencil.extract<224, 255>();
  float _dec1_conv3x1_stencil_18 = (float) dec1_conv3x1_stencil.extract<256, 287>();
  float _dec1_conv3x1_stencil_19 = (float) dec1_conv3x1_stencil.extract<288, 319>();
  float _dec1_conv3x1_stencil_4 = (float) dec1_conv3x1_stencil.extract<320, 351>();
  float _dec1_conv3x1_stencil_5 = (float) dec1_conv3x1_stencil.extract<352, 383>();
  float _dec1_conv3x1_stencil_6 = (float) dec1_conv3x1_stencil.extract<384, 415>();
  float _dec1_conv3x1_stencil_7 = (float) dec1_conv3x1_stencil.extract<416, 447>();
  float _dec1_conv3x1_stencil_8 = (float) dec1_conv3x1_stencil.extract<448, 479>();
  float _dec1_conv3x1_stencil_9 = (float) dec1_conv3x1_stencil.extract<480, 511>();

  float _12055 = _dec1_conv3x1_stencil_4 + _dec1_conv1x1_stencil_2;
  float _12056 = float_from_bits(1077936128 /* 3 */);
  float _12057 = _12055 * _12056;
  float _12058 = _dec1_conv3x1_stencil_5 + _dec1_conv1x1_stencil_3;
  float _12059 = _12057 + _12058;
  float _12060 = _12059 * _12056;
  float _12061 = _dec1_conv3x1_stencil_6 + _dec1_conv1x1_stencil_4;
  float _12062 = _12061 * _12056;
  float _12063 = _dec1_conv3x1_stencil_7 + _dec1_conv1x1_stencil_5;
  float _12064 = _12062 + _12063;
  float _12065 = _12060 + _12064;
  float _12066 = _12065 * _12056;
  float _12067 = _dec1_conv3x1_stencil_8 + _dec1_conv1x1_stencil_6;
  float _12068 = _12067 * _12056;
  float _12069 = _dec1_conv3x1_stencil_9 + _dec1_conv1x1_stencil_7;
  float _12070 = _12068 + _12069;
  float _12071 = _12070 * _12056;
  float _12072 = _dec1_conv3x1_stencil_10 + _dec1_conv1x1_stencil_8;
  float _12073 = _12072 * _12056;
  float _12074 = _dec1_conv3x1_stencil_11 + _dec1_conv1x1_stencil_9;
  float _12075 = _12073 + _12074;
  float _12076 = _12071 + _12075;
  float _12077 = _12066 + _12076;
  float _12078 = _12077 * _12056;
  float _12079 = _dec1_conv3x1_stencil_12 + _dec1_conv1x1_stencil_10;
  float _12080 = _12079 * _12056;
  float _12081 = _dec1_conv3x1_stencil_13 + _dec1_conv1x1_stencil_11;
  float _12082 = _12080 + _12081;
  float _12083 = _12082 * _12056;
  float _12084 = _dec1_conv3x1_stencil_14 + _dec1_conv1x1_stencil_12;
  float _12085 = _12084 * _12056;
  float _12086 = _dec1_conv3x1_stencil_15 + _dec1_conv1x1_stencil_13;
  float _12087 = _12085 + _12086;
  float _12088 = _12083 + _12087;
  float _12089 = _12088 * _12056;
  float _12090 = _dec1_conv3x1_stencil_16 + _dec1_conv1x1_stencil_14;
  float _12091 = _12090 * _12056;
  float _12092 = _dec1_conv3x1_stencil_17 + _dec1_conv1x1_stencil_15;
  float _12093 = _12091 + _12092;
  float _12094 = _12093 * _12056;
  float _12095 = _dec1_conv3x1_stencil_18 + _dec1_conv1x1_stencil_16;
  float _12096 = _12095 * _12056;
  float _12097 = _dec1_conv3x1_stencil_19 + _dec1_conv1x1_stencil_17;
  float _12098 = _12096 + _12097;
  float _12099 = _12094 + _12098;
  float _12100 = _12089 + _12099;
  float _12101 = _12078 + _12100;
  float _12102 = float_from_bits(998244352 /* 0.00390625 */);
  float _12103 = _12101 * _12102;
  return _12103;
}

//store is: conv3_weights_im_global_wrapper_global_wrapper.stencil(conv3_weights_im_global_wrapper_global_wrapper_s0__0_1, conv3_weights_im_global_wrapper_global_wrapper_s0__1, conv3_weights_im_global_wrapper_global_wrapper_s0__2, conv3_weights_im_global_wrapper_global_wrapper_s0__3) = conv3_weights_im_global_wrapper.stencil(conv3_weights_im_global_wrapper_global_wrapper_s0__0_1, conv3_weights_im_global_wrapper_global_wrapper_s0__1, conv3_weights_im_global_wrapper_global_wrapper_s0__2, conv3_weights_im_global_wrapper_global_wrapper_s0__3)
hw_uint<32> hcompute_conv3_weights_im_global_wrapper_global_wrapper_stencil(hw_uint<32>& conv3_weights_im_global_wrapper_stencil) {
  float _conv3_weights_im_global_wrapper_stencil_1 = (float) conv3_weights_im_global_wrapper_stencil.extract<0, 31>();

  return _conv3_weights_im_global_wrapper_stencil_1;
}

//store is: conv_mu_8_im_global_wrapper_global_wrapper.stencil(conv_mu_8_im_global_wrapper_global_wrapper_s0__0) = conv_mu_8_im_global_wrapper.stencil(conv_mu_8_im_global_wrapper_global_wrapper_s0__0)
hw_uint<32> hcompute_conv_mu_8_im_global_wrapper_global_wrapper_stencil(hw_uint<32>& conv_mu_8_im_global_wrapper_stencil) {
  float _conv_mu_8_im_global_wrapper_stencil_1 = (float) conv_mu_8_im_global_wrapper_stencil.extract<0, 31>();

  return _conv_mu_8_im_global_wrapper_stencil_1;
}

//store is: conv_sigma_8_im_global_wrapper_global_wrapper.stencil(conv_sigma_8_im_global_wrapper_global_wrapper_s0__0) = conv_sigma_8_im_global_wrapper.stencil(conv_sigma_8_im_global_wrapper_global_wrapper_s0__0)
hw_uint<32> hcompute_conv_sigma_8_im_global_wrapper_global_wrapper_stencil(hw_uint<32>& conv_sigma_8_im_global_wrapper_stencil) {
  float _conv_sigma_8_im_global_wrapper_stencil_1 = (float) conv_sigma_8_im_global_wrapper_stencil.extract<0, 31>();

  return _conv_sigma_8_im_global_wrapper_stencil_1;
}

//store is: conv3.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_conv3_stencil() {
  float _12302 = float_from_bits(0 /* 0 */);
  return _12302;
}

//store is: conv3.stencil(0, 0, 0) = (conv3.stencil(0, 0, 0) + (conv3_weights_im_global_wrapper_global_wrapper.stencil(conv3_relu_s0_c, conv3_s1_r_26_y, conv3_s1_r_26_z, conv3_s1_r_26_x)*select((conv3_s1_r_26_y < 1), 0.000000f, dec1_up$1.stencil(conv3_s1_r_26_x, (max(conv3_s1_r_26_y, 1) + -1), ((conv3_s1_r_26_z + conv3_relu_s0_j) + 1)))))
hw_uint<32> hcompute_conv3_stencil_1(hw_uint<32>& conv3_stencil, hw_uint<32>& conv3_weights_im_global_wrapper_global_wrapper_stencil, hw_uint<32>& dec1_up_1_stencil, const int _conv3_s1_r_26_y) {
  float _conv3_stencil_1 = (float) conv3_stencil.extract<0, 31>();

  float _conv3_weights_im_global_wrapper_global_wrapper_stencil_1 = (float) conv3_weights_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _dec1_up_1_stencil_1 = (float) dec1_up_1_stencil.extract<0, 31>();

  float _12305 = float_from_bits(0 /* 0 */);
  bool _12306 = _conv3_s1_r_26_y < 1;
  float _12307 = (float)(_12306 ? _12305 : _dec1_up_1_stencil_1);
  float _12308 = _conv3_weights_im_global_wrapper_global_wrapper_stencil_1 * _12307;
  float _12309 = _conv3_stencil_1 + _12308;
  return _12309;
}

//store is: conv3_relu.stencil(conv3_relu_s0_c, 0, (conv3_relu_s0_j + 1)) = max(((conv3.stencil(0, 0, 0) - conv_mu_8_im_global_wrapper_global_wrapper.stencil(conv3_relu_s0_c))/sqrt_f32((conv_sigma_8_im_global_wrapper_global_wrapper.stencil(conv3_relu_s0_c) + 0.000010f))), 0.000000f)
hw_uint<32> hcompute_conv3_relu_stencil(hw_uint<32>& conv3_stencil, hw_uint<32>& conv_mu_8_im_global_wrapper_global_wrapper_stencil, hw_uint<32>& conv_sigma_8_im_global_wrapper_global_wrapper_stencil) {
  float _conv3_stencil_2 = (float) conv3_stencil.extract<0, 31>();

  float _conv_mu_8_im_global_wrapper_global_wrapper_stencil_1 = (float) conv_mu_8_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _conv_sigma_8_im_global_wrapper_global_wrapper_stencil_1 = (float) conv_sigma_8_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _12327 = _conv3_stencil_2 - _conv_mu_8_im_global_wrapper_global_wrapper_stencil_1;
  float _12328 = float_from_bits(925353388 /* 1e-05 */);
  float _12329 = _conv_sigma_8_im_global_wrapper_global_wrapper_stencil_1 + _12328;
  float _12330 = sqrtf(_12329);
  float _12331 = _12327 / _12330;
  float _12332 = float_from_bits(0 /* 0 */);
  float _12333 = max(_12331, _12332);
  return _12333;
}

//store is: conv3.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_conv3_stencil_2() {
  float _12352 = float_from_bits(0 /* 0 */);
  return _12352;
}

//store is: conv3.stencil(0, 0, 0) = (conv3.stencil(0, 0, 0) + (conv3_weights_im_global_wrapper_global_wrapper.stencil(conv3_relu_s0_c_1, conv3_s1_r_26_y_1, conv3_s1_r_26_z_1, conv3_s1_r_26_x_1)*dec1_up$1.stencil(conv3_s1_r_26_x_1, ((conv3_s1_r_26_y_1 + conv3_relu_s0_i) + -1), ((conv3_s1_r_26_z_1 + conv3_relu_s0_j) + 1))))
hw_uint<32> hcompute_conv3_stencil_3(hw_uint<32>& conv3_stencil, hw_uint<32>& conv3_weights_im_global_wrapper_global_wrapper_stencil, hw_uint<32>& dec1_up_1_stencil) {
  float _conv3_stencil_3 = (float) conv3_stencil.extract<0, 31>();

  float _conv3_weights_im_global_wrapper_global_wrapper_stencil_2 = (float) conv3_weights_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _dec1_up_1_stencil_2 = (float) dec1_up_1_stencil.extract<0, 31>();

  float _12355 = _conv3_weights_im_global_wrapper_global_wrapper_stencil_2 * _dec1_up_1_stencil_2;
  float _12356 = _conv3_stencil_3 + _12355;
  return _12356;
}

//store is: conv3_relu.stencil(conv3_relu_s0_c_1, conv3_relu_s0_i, (conv3_relu_s0_j + 1)) = max(((conv3.stencil(0, 0, 0) - conv_mu_8_im_global_wrapper_global_wrapper.stencil(conv3_relu_s0_c_1))/sqrt_f32((conv_sigma_8_im_global_wrapper_global_wrapper.stencil(conv3_relu_s0_c_1) + 0.000010f))), 0.000000f)
hw_uint<32> hcompute_conv3_relu_stencil_1(hw_uint<32>& conv3_stencil, hw_uint<32>& conv_mu_8_im_global_wrapper_global_wrapper_stencil, hw_uint<32>& conv_sigma_8_im_global_wrapper_global_wrapper_stencil) {
  float _conv3_stencil_4 = (float) conv3_stencil.extract<0, 31>();

  float _conv_mu_8_im_global_wrapper_global_wrapper_stencil_2 = (float) conv_mu_8_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _conv_sigma_8_im_global_wrapper_global_wrapper_stencil_2 = (float) conv_sigma_8_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _12368 = _conv3_stencil_4 - _conv_mu_8_im_global_wrapper_global_wrapper_stencil_2;
  float _12369 = float_from_bits(925353388 /* 1e-05 */);
  float _12370 = _conv_sigma_8_im_global_wrapper_global_wrapper_stencil_2 + _12369;
  float _12371 = sqrtf(_12370);
  float _12372 = _12368 / _12371;
  float _12373 = float_from_bits(0 /* 0 */);
  float _12374 = max(_12372, _12373);
  return _12374;
}

//store is: conv3.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_conv3_stencil_4() {
  float _12393 = float_from_bits(0 /* 0 */);
  return _12393;
}

//store is: conv3.stencil(0, 0, 0) = (conv3.stencil(0, 0, 0) + (conv3_weights_im_global_wrapper_global_wrapper.stencil(conv3_relu_s0_c_2, conv3_s1_r_26_y_2, conv3_s1_r_26_z_2, conv3_s1_r_26_x_2)*select((conv3_s1_r_26_y_2 < 2), dec1_up$1.stencil(conv3_s1_r_26_x_2, (min(conv3_s1_r_26_y_2, 1) + 358), ((conv3_s1_r_26_z_2 + conv3_relu_s0_j) + 1)), 0.000000f)))
hw_uint<32> hcompute_conv3_stencil_5(hw_uint<32>& conv3_stencil, hw_uint<32>& conv3_weights_im_global_wrapper_global_wrapper_stencil, hw_uint<32>& dec1_up_1_stencil, const int _conv3_s1_r_26_y_2) {
  float _conv3_stencil_5 = (float) conv3_stencil.extract<0, 31>();

  float _conv3_weights_im_global_wrapper_global_wrapper_stencil_3 = (float) conv3_weights_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _dec1_up_1_stencil_3 = (float) dec1_up_1_stencil.extract<0, 31>();

  float _12396 = float_from_bits(0 /* 0 */);
  bool _12397 = _conv3_s1_r_26_y_2 < 2;
  float _12398 = (float)(_12397 ? _dec1_up_1_stencil_3 : _12396);
  float _12399 = _conv3_weights_im_global_wrapper_global_wrapper_stencil_3 * _12398;
  float _12400 = _conv3_stencil_5 + _12399;
  return _12400;
}

//store is: conv3_relu.stencil(conv3_relu_s0_c_2, 359, (conv3_relu_s0_j + 1)) = max(((conv3.stencil(0, 0, 0) - conv_mu_8_im_global_wrapper_global_wrapper.stencil(conv3_relu_s0_c_2))/sqrt_f32((conv_sigma_8_im_global_wrapper_global_wrapper.stencil(conv3_relu_s0_c_2) + 0.000010f))), 0.000000f)
hw_uint<32> hcompute_conv3_relu_stencil_2(hw_uint<32>& conv3_stencil, hw_uint<32>& conv_mu_8_im_global_wrapper_global_wrapper_stencil, hw_uint<32>& conv_sigma_8_im_global_wrapper_global_wrapper_stencil) {
  float _conv3_stencil_6 = (float) conv3_stencil.extract<0, 31>();

  float _conv_mu_8_im_global_wrapper_global_wrapper_stencil_3 = (float) conv_mu_8_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _conv_sigma_8_im_global_wrapper_global_wrapper_stencil_3 = (float) conv_sigma_8_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _12418 = _conv3_stencil_6 - _conv_mu_8_im_global_wrapper_global_wrapper_stencil_3;
  float _12419 = float_from_bits(925353388 /* 1e-05 */);
  float _12420 = _conv_sigma_8_im_global_wrapper_global_wrapper_stencil_3 + _12419;
  float _12421 = sqrtf(_12420);
  float _12422 = _12418 / _12421;
  float _12423 = float_from_bits(0 /* 0 */);
  float _12424 = max(_12422, _12423);
  return _12424;
}

//store is: conv4_weights_im_global_wrapper_global_wrapper.stencil((conv4_weights_im_global_wrapper_global_wrapper_s0__0 + 1), conv4_weights_im_global_wrapper_global_wrapper_s0__1, conv4_weights_im_global_wrapper_global_wrapper_s0__2, conv4_weights_im_global_wrapper_global_wrapper_s0__3) = conv4_weights_im_global_wrapper.stencil(conv4_weights_im_global_wrapper_global_wrapper_s0__0, conv4_weights_im_global_wrapper_global_wrapper_s0__1, conv4_weights_im_global_wrapper_global_wrapper_s0__2, conv4_weights_im_global_wrapper_global_wrapper_s0__3)
hw_uint<32> hcompute_conv4_weights_im_global_wrapper_global_wrapper_stencil_8(hw_uint<32>& conv4_weights_im_global_wrapper_stencil) {
  float _conv4_weights_im_global_wrapper_stencil_1 = (float) conv4_weights_im_global_wrapper_stencil.extract<0, 31>();

  return _conv4_weights_im_global_wrapper_stencil_1;
}

//store is: conv_mu_9_im_global_wrapper_global_wrapper.stencil((conv_mu_9_im_global_wrapper_global_wrapper_s0__0 + 1)) = conv_mu_9_im_global_wrapper.stencil(conv_mu_9_im_global_wrapper_global_wrapper_s0__0)
hw_uint<32> hcompute_conv_mu_9_im_global_wrapper_global_wrapper_stencil(hw_uint<32>& conv_mu_9_im_global_wrapper_stencil) {
  float _conv_mu_9_im_global_wrapper_stencil_1 = (float) conv_mu_9_im_global_wrapper_stencil.extract<0, 31>();

  return _conv_mu_9_im_global_wrapper_stencil_1;
}

//store is: conv_sigma_9_im_global_wrapper_global_wrapper.stencil((conv_sigma_9_im_global_wrapper_global_wrapper_s0__0 + 1)) = conv_sigma_9_im_global_wrapper.stencil(conv_sigma_9_im_global_wrapper_global_wrapper_s0__0)
hw_uint<32> hcompute_conv_sigma_9_im_global_wrapper_global_wrapper_stencil(hw_uint<32>& conv_sigma_9_im_global_wrapper_stencil) {
  float _conv_sigma_9_im_global_wrapper_stencil_1 = (float) conv_sigma_9_im_global_wrapper_stencil.extract<0, 31>();

  return _conv_sigma_9_im_global_wrapper_stencil_1;
}

//store is: conv4.stencil((((((conv4_up_s0_x_4/2) + conv4_s0_c) + -1) - (conv4_up_s0_x_4/2)) + 1), (((((conv4_up_s0_y_4/2) + conv4_s0_i) + -1) - (conv4_up_s0_y_4/2)) + 1), 0) = 0.000000f
hw_uint<32> hcompute_conv4_stencil() {
  float _12453 = float_from_bits(0 /* 0 */);
  return _12453;
}

//store is: conv4.stencil((((((conv4_up_s0_x_4/2) + conv4_s1_c) + -1) - (conv4_up_s0_x_4/2)) + 1), (((((conv4_up_s0_y_4/2) + conv4_s1_i) + -1) - (conv4_up_s0_y_4/2)) + 1), 0) = (conv4.stencil((((((conv4_up_s0_x_4/2) + conv4_s1_c) + -1) - (conv4_up_s0_x_4/2)) + 1), (((((conv4_up_s0_y_4/2) + conv4_s1_i) + -1) - (conv4_up_s0_y_4/2)) + 1), 0) + (conv4_weights_im_global_wrapper_global_wrapper.stencil(((((conv4_up_s0_x_4/2) + conv4_s1_c) + -1) + 1), conv4_s1_r_27_y, conv4_s1_r_27_z, conv4_s1_r_27_x)*select((((((conv4_up_s0_y_4/2) + conv4_s1_i) + -1) + conv4_s1_r_27_y) < 1), 0.000000f, conv3_relu.stencil(conv4_s1_r_27_x, (max(((((conv4_up_s0_y_4/2) + conv4_s1_i) + -1) + conv4_s1_r_27_y), 1) + -1), (conv4_s1_r_27_z + conv4_up_s0__0)))))
hw_uint<32> hcompute_conv4_stencil_1(hw_uint<32>& conv3_relu_stencil, hw_uint<32>& conv4_stencil, hw_uint<32>& conv4_weights_im_global_wrapper_global_wrapper_stencil, const int _conv4_s1_i, const int _conv4_s1_r_27_y, const int _conv4_up_s0_y_4) {
  float _conv3_relu_stencil_1 = (float) conv3_relu_stencil.extract<0, 31>();

  float _conv4_stencil_1 = (float) conv4_stencil.extract<0, 31>();

  float _conv4_weights_im_global_wrapper_global_wrapper_stencil_1 = (float) conv4_weights_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _12474 = float_from_bits(0 /* 0 */);
  int32_t _12475 = _conv4_up_s0_y_4 >> 1;
  int32_t _12476 = _12475 + _conv4_s1_i;
  int32_t _12477 = _12476 + -1;
  int32_t _12478 = _12477 + _conv4_s1_r_27_y;
  bool _12479 = _12478 < 1;
  float _12480 = (float)(_12479 ? _12474 : _conv3_relu_stencil_1);
  float _12481 = _conv4_weights_im_global_wrapper_global_wrapper_stencil_1 * _12480;
  float _12482 = _conv4_stencil_1 + _12481;
  return _12482;
}

//store is: conv4.stencil((((((conv4_up_s0_x_4/2) + conv4_s1_c_1) + -1) - (conv4_up_s0_x_4/2)) + 1), ((((min(max((conv4_up_s0_y_4/2), 2), ((conv4_up_s0_y_4/2) + 3)) + conv4_s1_i_1) + -1) - (conv4_up_s0_y_4/2)) + 1), 0) = (conv4.stencil((((((conv4_up_s0_x_4/2) + conv4_s1_c_1) + -1) - (conv4_up_s0_x_4/2)) + 1), ((((min(max((conv4_up_s0_y_4/2), 2), ((conv4_up_s0_y_4/2) + 3)) + conv4_s1_i_1) + -1) - (conv4_up_s0_y_4/2)) + 1), 0) + (conv4_weights_im_global_wrapper_global_wrapper.stencil(((((conv4_up_s0_x_4/2) + conv4_s1_c_1) + -1) + 1), conv4_s1_r_27_y_1, conv4_s1_r_27_z_1, conv4_s1_r_27_x_1)*conv3_relu.stencil(conv4_s1_r_27_x_1, ((((min(max((conv4_up_s0_y_4/2), 2), ((conv4_up_s0_y_4/2) + 3)) + conv4_s1_i_1) + -1) + conv4_s1_r_27_y_1) + -1), (conv4_s1_r_27_z_1 + conv4_up_s0__0))))
hw_uint<32> hcompute_conv4_stencil_2(hw_uint<32>& conv3_relu_stencil, hw_uint<32>& conv4_stencil, hw_uint<32>& conv4_weights_im_global_wrapper_global_wrapper_stencil) {
  float _conv3_relu_stencil_2 = (float) conv3_relu_stencil.extract<0, 31>();

  float _conv4_stencil_2 = (float) conv4_stencil.extract<0, 31>();

  float _conv4_weights_im_global_wrapper_global_wrapper_stencil_2 = (float) conv4_weights_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _12527 = _conv4_weights_im_global_wrapper_global_wrapper_stencil_2 * _conv3_relu_stencil_2;
  float _12528 = _conv4_stencil_2 + _12527;
  return _12528;
}

//store is: conv4.stencil((((((conv4_up_s0_x_4/2) + conv4_s1_c_2) + -1) - (conv4_up_s0_x_4/2)) + 1), ((((max(min(max((conv4_up_s0_y_4/2), 2), ((conv4_up_s0_y_4/2) + 3)), (min((conv4_up_s0_y_4/2), 357) + 3)) + conv4_s1_i_2) + -1) - (conv4_up_s0_y_4/2)) + 1), 0) = (conv4.stencil((((((conv4_up_s0_x_4/2) + conv4_s1_c_2) + -1) - (conv4_up_s0_x_4/2)) + 1), ((((max(min(max((conv4_up_s0_y_4/2), 2), ((conv4_up_s0_y_4/2) + 3)), (min((conv4_up_s0_y_4/2), 357) + 3)) + conv4_s1_i_2) + -1) - (conv4_up_s0_y_4/2)) + 1), 0) + (conv4_weights_im_global_wrapper_global_wrapper.stencil(((((conv4_up_s0_x_4/2) + conv4_s1_c_2) + -1) + 1), conv4_s1_r_27_y_2, conv4_s1_r_27_z_2, conv4_s1_r_27_x_2)*select(((((max(min(max((conv4_up_s0_y_4/2), 2), ((conv4_up_s0_y_4/2) + 3)), (min((conv4_up_s0_y_4/2), 357) + 3)) + conv4_s1_i_2) + -1) + conv4_s1_r_27_y_2) < 361), conv3_relu.stencil(conv4_s1_r_27_x_2, (min((((max(min(max((conv4_up_s0_y_4/2), 2), ((conv4_up_s0_y_4/2) + 3)), (min((conv4_up_s0_y_4/2), 357) + 3)) + conv4_s1_i_2) + -1) + conv4_s1_r_27_y_2), 360) + -1), (conv4_s1_r_27_z_2 + conv4_up_s0__0)), 0.000000f)))
hw_uint<32> hcompute_conv4_stencil_3(hw_uint<32>& conv3_relu_stencil, hw_uint<32>& conv4_stencil, hw_uint<32>& conv4_weights_im_global_wrapper_global_wrapper_stencil, const int _conv4_s1_i_2, const int _conv4_s1_r_27_y_2, const int _conv4_up_s0_y_4) {
  float _conv3_relu_stencil_3 = (float) conv3_relu_stencil.extract<0, 31>();

  float _conv4_stencil_3 = (float) conv4_stencil.extract<0, 31>();

  float _conv4_weights_im_global_wrapper_global_wrapper_stencil_3 = (float) conv4_weights_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _12564 = float_from_bits(0 /* 0 */);
  int32_t _12565 = _conv4_up_s0_y_4 >> 1;
  int32_t _12566 = max(_12565, 2);
  int32_t _12567 = _12565 + 3;
  int32_t _12568 = min(_12566, _12567);
  int32_t _12569 = min(_12565, 357);
  int32_t _12570 = _12569 + 3;
  int32_t _12571 = max(_12568, _12570);
  int32_t _12572 = _12571 + _conv4_s1_i_2;
  int32_t _12573 = _12572 + -1;
  int32_t _12574 = _12573 + _conv4_s1_r_27_y_2;
  bool _12575 = _12574 < 361;
  float _12576 = (float)(_12575 ? _conv3_relu_stencil_3 : _12564);
  float _12577 = _conv4_weights_im_global_wrapper_global_wrapper_stencil_3 * _12576;
  float _12578 = _conv4_stencil_3 + _12577;
  return _12578;
}

//store is: conv4_up.stencil(conv4_up_s0_x_4, conv4_up_s0_y_4, conv4_up_s0__0) = ((((max(((conv4.stencil(((conv4_up_s0_x_4 % 2)*2), 1, 0) - conv_mu_9_im_global_wrapper_global_wrapper.stencil(((conv4_up_s0_x_4/2) + ((conv4_up_s0_x_4 % 2)*2))))/sqrt_f32((conv_sigma_9_im_global_wrapper_global_wrapper.stencil(((conv4_up_s0_x_4/2) + ((conv4_up_s0_x_4 % 2)*2))) + 0.000010f))), 0.000000f) + (max(((conv4.stencil(1, 1, 0) - conv_mu_9_im_global_wrapper_global_wrapper.stencil(((conv4_up_s0_x_4/2) + 1)))/sqrt_f32((conv_sigma_9_im_global_wrapper_global_wrapper.stencil(((conv4_up_s0_x_4/2) + 1)) + 0.000010f))), 0.000000f)*3.000000f))*3.000000f) + (max(((conv4.stencil(((conv4_up_s0_x_4 % 2)*2), ((conv4_up_s0_y_4 % 2)*2), 0) - conv_mu_9_im_global_wrapper_global_wrapper.stencil(((conv4_up_s0_x_4/2) + ((conv4_up_s0_x_4 % 2)*2))))/sqrt_f32((conv_sigma_9_im_global_wrapper_global_wrapper.stencil(((conv4_up_s0_x_4/2) + ((conv4_up_s0_x_4 % 2)*2))) + 0.000010f))), 0.000000f) + (max(((conv4.stencil(1, ((conv4_up_s0_y_4 % 2)*2), 0) - conv_mu_9_im_global_wrapper_global_wrapper.stencil(((conv4_up_s0_x_4/2) + 1)))/sqrt_f32((conv_sigma_9_im_global_wrapper_global_wrapper.stencil(((conv4_up_s0_x_4/2) + 1)) + 0.000010f))), 0.000000f)*3.000000f)))*0.062500f)
hw_uint<32> hcompute_conv4_up_stencil(hw_uint<128>& conv4_stencil, hw_uint<64>& conv_mu_9_im_global_wrapper_global_wrapper_stencil, hw_uint<64>& conv_sigma_9_im_global_wrapper_global_wrapper_stencil) {
  float _conv4_stencil_4 = (float) conv4_stencil.extract<0, 31>();
  float _conv4_stencil_5 = (float) conv4_stencil.extract<32, 63>();
  float _conv4_stencil_6 = (float) conv4_stencil.extract<64, 95>();
  float _conv4_stencil_7 = (float) conv4_stencil.extract<96, 127>();

  float _conv_mu_9_im_global_wrapper_global_wrapper_stencil_1 = (float) conv_mu_9_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();
  float _conv_mu_9_im_global_wrapper_global_wrapper_stencil_2 = (float) conv_mu_9_im_global_wrapper_global_wrapper_stencil.extract<32, 63>();

  float _conv_sigma_9_im_global_wrapper_global_wrapper_stencil_1 = (float) conv_sigma_9_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();
  float _conv_sigma_9_im_global_wrapper_global_wrapper_stencil_2 = (float) conv_sigma_9_im_global_wrapper_global_wrapper_stencil.extract<32, 63>();

  float _12624 = _conv4_stencil_4 - _conv_mu_9_im_global_wrapper_global_wrapper_stencil_1;
  float _12625 = float_from_bits(925353388 /* 1e-05 */);
  float _12626 = _conv_sigma_9_im_global_wrapper_global_wrapper_stencil_1 + _12625;
  float _12627 = sqrtf(_12626);
  float _12628 = _12624 / _12627;
  float _12629 = float_from_bits(0 /* 0 */);
  float _12630 = max(_12628, _12629);
  float _12631 = _conv4_stencil_5 - _conv_mu_9_im_global_wrapper_global_wrapper_stencil_2;
  float _12632 = _conv_sigma_9_im_global_wrapper_global_wrapper_stencil_2 + _12625;
  float _12633 = sqrtf(_12632);
  float _12634 = _12631 / _12633;
  float _12635 = max(_12634, _12629);
  float _12636 = float_from_bits(1077936128 /* 3 */);
  float _12637 = _12635 * _12636;
  float _12638 = _12630 + _12637;
  float _12639 = _12638 * _12636;
  float _12640 = _conv4_stencil_6 - _conv_mu_9_im_global_wrapper_global_wrapper_stencil_1;
  float _12641 = _12640 / _12627;
  float _12642 = max(_12641, _12629);
  float _12643 = _conv4_stencil_7 - _conv_mu_9_im_global_wrapper_global_wrapper_stencil_2;
  float _12644 = _12643 / _12633;
  float _12645 = max(_12644, _12629);
  float _12646 = _12645 * _12636;
  float _12647 = _12642 + _12646;
  float _12648 = _12639 + _12647;
  float _12649 = float_from_bits(1031798784 /* 0.0625 */);
  float _12650 = _12648 * _12649;
  return _12650;
}

//store is: conv5_weights_im_global_wrapper_global_wrapper.stencil(conv5_weights_im_global_wrapper_global_wrapper_s0__0, 0, 0, conv5_weights_im_global_wrapper_global_wrapper_s0__3) = conv5_weights_im_global_wrapper.stencil(conv5_weights_im_global_wrapper_global_wrapper_s0__0, 0, 0, conv5_weights_im_global_wrapper_global_wrapper_s0__3)
hw_uint<32> hcompute_conv5_weights_im_global_wrapper_global_wrapper_stencil(hw_uint<32>& conv5_weights_im_global_wrapper_stencil) {
  float _conv5_weights_im_global_wrapper_stencil_1 = (float) conv5_weights_im_global_wrapper_stencil.extract<0, 31>();

  return _conv5_weights_im_global_wrapper_stencil_1;
}

//store is: conv_mu_10_im_global_wrapper_global_wrapper.stencil(conv_mu_10_im_global_wrapper_global_wrapper_s0__0) = conv_mu_10_im_global_wrapper.stencil(conv_mu_10_im_global_wrapper_global_wrapper_s0__0)
hw_uint<32> hcompute_conv_mu_10_im_global_wrapper_global_wrapper_stencil(hw_uint<32>& conv_mu_10_im_global_wrapper_stencil) {
  float _conv_mu_10_im_global_wrapper_stencil_1 = (float) conv_mu_10_im_global_wrapper_stencil.extract<0, 31>();

  return _conv_mu_10_im_global_wrapper_stencil_1;
}

//store is: conv_sigma_10_im_global_wrapper_global_wrapper.stencil(conv_sigma_10_im_global_wrapper_global_wrapper_s0__0) = conv_sigma_10_im_global_wrapper.stencil(conv_sigma_10_im_global_wrapper_global_wrapper_s0__0)
hw_uint<32> hcompute_conv_sigma_10_im_global_wrapper_global_wrapper_stencil(hw_uint<32>& conv_sigma_10_im_global_wrapper_stencil) {
  float _conv_sigma_10_im_global_wrapper_stencil_1 = (float) conv_sigma_10_im_global_wrapper_stencil.extract<0, 31>();

  return _conv_sigma_10_im_global_wrapper_stencil_1;
}

//store is: conv5.stencil(0, 0, 0) = 0.000000f
hw_uint<32> hcompute_conv5_stencil() {
  float _12723 = float_from_bits(0 /* 0 */);
  return _12723;
}

//store is: conv5.stencil(0, 0, 0) = (conv5.stencil(0, 0, 0) + (conv5_weights_im_global_wrapper_global_wrapper.stencil(conv5_relu_s0_c, 0, 0, conv5_s1_r_28_x)*conv4_up.stencil(conv5_s1_r_28_x, conv5_relu_s0_i_xi, conv5_relu_s0_j_yi)))
hw_uint<32> hcompute_conv5_stencil_1(hw_uint<32>& conv4_up_stencil, hw_uint<32>& conv5_stencil, hw_uint<32>& conv5_weights_im_global_wrapper_global_wrapper_stencil) {
  float _conv4_up_stencil_1 = (float) conv4_up_stencil.extract<0, 31>();

  float _conv5_stencil_3 = (float) conv5_stencil.extract<0, 31>();

  float _conv5_weights_im_global_wrapper_global_wrapper_stencil_1 = (float) conv5_weights_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _12726 = _conv5_weights_im_global_wrapper_global_wrapper_stencil_1 * _conv4_up_stencil_1;
  float _12727 = _conv5_stencil_3 + _12726;
  return _12727;
}

//store is: conv5_relu.stencil(conv5_relu_s0_c, conv5_relu_s0_i_xi, conv5_relu_s0_j_yi) = max(((conv5.stencil(0, 0, 0) - conv_mu_10_im_global_wrapper_global_wrapper.stencil(conv5_relu_s0_c))/sqrt_f32((conv_sigma_10_im_global_wrapper_global_wrapper.stencil(conv5_relu_s0_c) + 0.000010f))), 0.000000f)
hw_uint<32> hcompute_conv5_relu_stencil(hw_uint<32>& conv5_stencil, hw_uint<32>& conv_mu_10_im_global_wrapper_global_wrapper_stencil, hw_uint<32>& conv_sigma_10_im_global_wrapper_global_wrapper_stencil) {
  float _conv5_stencil_4 = (float) conv5_stencil.extract<0, 31>();

  float _conv_mu_10_im_global_wrapper_global_wrapper_stencil_1 = (float) conv_mu_10_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _conv_sigma_10_im_global_wrapper_global_wrapper_stencil_1 = (float) conv_sigma_10_im_global_wrapper_global_wrapper_stencil.extract<0, 31>();

  float _12735 = _conv5_stencil_4 - _conv_mu_10_im_global_wrapper_global_wrapper_stencil_1;
  float _12736 = float_from_bits(925353388 /* 1e-05 */);
  float _12737 = _conv_sigma_10_im_global_wrapper_global_wrapper_stencil_1 + _12736;
  float _12738 = sqrtf(_12737);
  float _12739 = _12735 / _12738;
  float _12740 = float_from_bits(0 /* 0 */);
  float _12741 = max(_12739, _12740);
  return _12741;
}

