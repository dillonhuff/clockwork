#pragma once

#include "clockwork_standard_compute_units.h"

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
  float eps = 0.01f;
  return to_bits(to_float(scales) * ((to_float(original) + eps) / (to_float(gray) + eps)));
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
  return gray;
}
