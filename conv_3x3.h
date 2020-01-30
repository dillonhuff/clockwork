#pragma once

#include "hw_classes.h"

template<typename T>
static inline
T id(const T& val) {
  return val;
}

static inline
int max_zero(const int& val) {
  return max(val, 0);
}

static inline
int diff(int& src, int& a0) {
  return src - a0;
}

static inline
int inc(int& src, int& a0) {
  return src + a0;
}

int fma(int& src, int& a0, int& a1) {
  return src + a0*a1;
}

int set_zero() {
  return 0;
}
static inline
int conv_3_3(hw_uint<32*9>& in) {
  hw_uint<32> v0 = in.extract<0, 31>();
  hw_uint<32> v1 = in.extract<32, 63>();
  hw_uint<32> v2 = in.extract<64, 95>();
  
  hw_uint<32> v3 = in.extract<96, 127>();
  hw_uint<32> v4 = in.extract<128, 159>();
  hw_uint<32> v5 = in.extract<160, 191>();

  hw_uint<32> v6 = in.extract<192, 223>();
  hw_uint<32> v7 = in.extract<224, 255>();
  hw_uint<32> v8 = in.extract<256, 287>();

  return v0 + v1 + v2 +
    v3 + v4 + v5 +
    v6 + v7 + v8;
}
