#pragma once

#include "clockwork_standard_compute_units.h"

hw_uint<32> llf_set_zero_float_32() {
  float zero_f = 0.0f;
  return to_bits(zero_f);
}

hw_uint<32> llf_int_to_float(const hw_uint<32>& pix) {
  return to_bits(int_to_float(pix) / 255.0f);
}

hw_uint<32> llf_float_to_int(const hw_uint<32>& pix) {
  float fval = 255.0f * to_float(pix);
  int fi = fval;
  return fi;
}

hw_uint<32> llf_diff_float_32(const hw_uint<32>& a, const hw_uint<32>& b) {
  float fa = to_float(a);
  float fb = to_float(b);
  float res = fa - fb;
  return to_bits(res);
}

hw_uint<32> llf_add_float_32(const hw_uint<32>& a, const hw_uint<32>& b) {
  float fa = to_float(a);
  float fb = to_float(b);
  float res = fa + fb;
  return to_bits(res);
}

hw_uint<32> avg_9_float(const hw_uint<32>& pix) {
  float r = to_float(pix);
  float res = r / 9.0f;
  return to_bits(res);
}

hw_uint<32> llf_to_gray_float(const hw_uint<96>& pix) {
  hw_uint<32> v0 = pix.extract<0, 31>();
  hw_uint<32> v1 = pix.extract<32, 63>();
  hw_uint<32> v2 = pix.extract<64, 95>();
  float r = to_float(v0);
  float g = to_float(v1);
  float b = to_float(v2);

  float res = 0.299f * r + 0.587f * g + 0.114f * b;
  return to_bits(res);
}

hw_uint<32> llf_to_color_float(const hw_uint<32>& scales,
    const hw_uint<32>& original,
    const hw_uint<32>& gray) {
  float original_f = to_float(original);
  float gray_f = to_float(gray);
  float scales_f = to_float(scales);
  //cout << "gray = " << gray_f << endl;
  //cout << "scales = " << scales_f << endl;
  float eps = 0.01f;
  float res = (scales_f * (original_f + eps)) / (gray_f + eps);
  return to_bits(res);

  //return to_bits(to_float(scales) * ((to_float(original) + eps) / (to_float(gray) + eps)));
  //return original;
}


hw_uint<32> llf_interpolate_float(
    const hw_uint<32>& intensity_0,
    const hw_uint<32>& intensity_1,
    const hw_uint<32>& intensity_2,
    const hw_uint<32>& intensity_3,
    const hw_uint<32>& intensity_4,
    const hw_uint<32>& intensity_5,
    const hw_uint<32>& intensity_6,
    const hw_uint<32>& intensity_7,
    const hw_uint<32>& gray) {

  const int num_levels = 8;

  float gray_f = to_float(gray);
  float level = gray_f * ((float) num_levels);
  int level_i = clamp_val((int) level, 0, num_levels - 2);
  cout << "level_i = " << level_i << endl;
  float level_f = level - (float) level_i;
  cout << "level_f = " << level_f << endl << endl;
  return gray;
}
