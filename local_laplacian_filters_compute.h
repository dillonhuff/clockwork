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

hw_uint<32> llf_float_average(const hw_uint<32>& pix0, const hw_uint<32>& pix1) {
  float f0 = to_float(pix0);
  float f1 = to_float(pix1);
  float res = (f0 + f1) / 2.0f;
  return to_bits(res);
}

float llf_remap(const float x) {
  float alpha = 2.0;
  float fx = x / 256.0f;
  float exp_pow = -fx * fx / 2.0f;
  float exp_val = exp(exp_pow);
  float res = alpha * fx * exp_val;
  
  return res;
}

hw_uint<32> llf_level_entry(const hw_uint<32>& in, const int k) {
  const float beta = 1.0f;
  const int levels = 8;

  float gray = to_float(in);

  float level = k*(1.0f / (((float) levels) - 1));

  float idx = gray * (float) (levels - 1) * 256.0f;
  int idx_i = clamp_val((int) idx, 0, (levels - 1) * 256);
  float remap_addr = idx_i - 256*k;
  float llf_coeff = llf_remap(remap_addr);
  float res = beta * (gray - level) + level + llf_coeff;
  //float res = gray + llf_remap(idx_i - 256 * k);
  //float res = gray + llf_remap(idx_i - 128 * k);
  //return to_bits(res);
  return to_bits(clamp_val(res, 0.0f, 1.0f));
}

hw_uint<32> llf_level_entry_0(const hw_uint<32>& in) {
  return llf_level_entry(in, 0);
}

hw_uint<32> llf_level_entry_1(const hw_uint<32>& in) {
  return llf_level_entry(in, 1);
}

hw_uint<32> llf_level_entry_2(const hw_uint<32>& in) {
  return llf_level_entry(in, 2);
}

hw_uint<32> llf_level_entry_3(const hw_uint<32>& in) {
  return llf_level_entry(in, 3);
}

hw_uint<32> llf_level_entry_4(const hw_uint<32>& in) {
  return llf_level_entry(in, 4);
}

hw_uint<32> llf_level_entry_5(const hw_uint<32>& in) {
  return llf_level_entry(in, 5);
}

hw_uint<32> llf_level_entry_6(const hw_uint<32>& in) {
  return llf_level_entry(in, 6);
}

hw_uint<32> llf_level_entry_7(const hw_uint<32>& in) {
  return llf_level_entry(in, 7);
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

hw_uint<32> llf_to_color_float_no_scales(
    const hw_uint<32>& original,
    const hw_uint<32>& gray) {

  float original_f = to_float(original);
  float gray_f = to_float(gray);
  float eps = 0.01f;
  float res = ((original_f + eps)) / (gray_f + eps);
  return to_bits(res);
}

hw_uint<32> llf_rescale_gray_float(
    const hw_uint<32>& scales,
    const hw_uint<32>& gray) {
  float gray_f = to_float(gray);
  float scales_f = to_float(scales);
  float res = (scales_f * gray_f);


  return to_bits(res);
}

hw_uint<32> llf_to_color_float(const hw_uint<32>& scales,
    const hw_uint<32>& original,
    const hw_uint<32>& gray) {
  float original_f = to_float(original);
  float gray_f = to_float(gray);
  float scales_f = to_float(scales);
  float eps = 0.01f;
  float res = (scales_f * (original_f + eps)) / (gray_f + eps);
  return to_bits(res);
}


static inline
hw_uint<32> scale_by(const float level_f, const float intensity_0_f, const float intensity_1_f) {
  float res = (1.0 - level_f) * intensity_0_f + level_f * intensity_1_f;
  return to_bits(res);
}

static inline
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

  float intensity_0_f = to_float(intensity_0);
  float intensity_1_f = to_float(intensity_1);
  float intensity_2_f = to_float(intensity_2);
  float intensity_3_f = to_float(intensity_3);
  float intensity_4_f = to_float(intensity_4);
  float intensity_5_f = to_float(intensity_5);
  float intensity_6_f = to_float(intensity_6);
  float intensity_7_f = to_float(intensity_7);

  const int num_levels = 8;

  float gray_f = to_float(gray);
  float level = gray_f * ((float) num_levels - 1);
  int level_i = clamp_val((int) level, 0, num_levels - 2);
  float level_f = level - (float) level_i;
  if (level_i == 0) {
    return scale_by(level_f, intensity_0_f, intensity_1_f);
  }
  if (level_i == 1) {
    return scale_by(level_f, intensity_1_f, intensity_2_f);
  }
  if (level_i == 2) {
    return scale_by(level_f, intensity_2_f, intensity_3_f);
  }
  if (level_i == 3) {
    return scale_by(level_f, intensity_3_f, intensity_4_f);
  }
  if (level_i == 4) {
    return scale_by(level_f, intensity_4_f, intensity_5_f);
  }
  if (level_i == 5) {
    return scale_by(level_f, intensity_5_f, intensity_6_f);
  }
  if (level_i == 6) {
    return scale_by(level_f, intensity_6_f, intensity_7_f);
  }
  assert(false);
  return 0;
}
