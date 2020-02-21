#pragma once

#include "hw_classes.h"

static inline
float to_float(const hw_uint<32>& in) {
  int i = in.to_int();
  void* ip = (void*)(&i);
  float* f = (float*) ip;
  return (*f);
}

static inline
hw_uint<32> to_bits(const float& f) {
  int* ip = (int*) ((void*)(&f));
  return *ip;
}

//static inline
//hw_uint<32> jacobi2d_compute(const hw_uint<32*5>& in) {
  //hw_uint<32> v0 = in.extract<0, 31>();
  //hw_uint<32> v1 = in.extract<32, 63>();
  //hw_uint<32> v2 = in.extract<64, 95>();
  //hw_uint<32> v3 = in.extract<96, 127>();
  //hw_uint<32> v4 = in.extract<128, 159>();

  //return to_bits((to_float(v0) + to_float(v1) + to_float(v2) + to_float(v3) + to_float(v4)) * ((float) 0.2));
//}

static inline
hw_uint<32> heat3d_compute(const hw_uint<32*9>& in) {
  hw_uint<32> v0 = in.extract<0, 31>();
  hw_uint<32> v1 = in.extract<32, 63>();
  hw_uint<32> v2 = in.extract<64, 95>();
  hw_uint<32> v3 = in.extract<96, 127>();
  hw_uint<32> v4 = in.extract<128, 159>();
  hw_uint<32> v5 = in.extract<32*5, 32*6 - 1>();
  hw_uint<32> v6 = in.extract<32*6, 32*7 - 1>();
  hw_uint<32> v7 = in.extract<32*7, 32*8 - 1>();
  hw_uint<32> v8 = in.extract<32*8, 32*9 - 1>();
  return (v0 + v1 + v2) / 8 +
    (v3 + v4 + v5) / 8 +
    (v6 + v7 + v8) / 8;
}

static inline
hw_uint<32> jacobi2d_compute(const hw_uint<32*5>& in) {
  hw_uint<32> v0 = in.extract<0, 31>();
  hw_uint<32> v1 = in.extract<32, 63>();
  hw_uint<32> v2 = in.extract<64, 95>();
  hw_uint<32> v3 = in.extract<96, 127>();
  hw_uint<32> v4 = in.extract<128, 159>();

  return (((v0) + (v1) + (v2) + (v3) + (v4)) / 5);
}

template<typename T>
static inline
T plus_one(const T& val) {
  T one(1);
  return val + one;
}

template<typename T>
static inline
T id(const T& val) {
  return val;
}

static inline
int max_zero(const int& val) {
  return max(val, 0);
}

template<typename T>
static inline
T diff(T& src, T& a0) {
  return src - a0;
}

template<typename T>
static inline
T inc(T& src, T& a0) {
  return src + a0;
}
//int inc(int& src, int& a0) {
  //return src + a0;
//}

int fma(int& src, int& a0, int& a1) {
  return src + a0*a1;
}

hw_uint<32> set_zero_32() {
  return hw_uint<32>(0);
}

int set_zero() {
  return 0;
}

static inline
int conv_1_3(hw_uint<32*3>& in) {
  hw_uint<32> v0 = in.extract<0, 31>();
  hw_uint<32> v1 = in.extract<32, 63>();
  hw_uint<32> v2 = in.extract<64, 95>();

  return v0 + v1 + v2;
}

static inline
int conv_1_3_32(hw_uint<32*3>& in) {
  hw_uint<32> v0 = in.extract<0, 31>();
  hw_uint<32> v1 = in.extract<32, 63>();
  hw_uint<32> v2 = in.extract<64, 95>();

  return v0 + v1 + v2;
}

static inline
int conv_1_3_16(hw_uint<16*3>& in) {
  hw_uint<16> v0 = in.extract<0, 15>();
  hw_uint<16> v1 = in.extract<16, 31>();
  hw_uint<16> v2 = in.extract<32, 47>();

  return v0 + v1 + v2;
}

static inline
hw_uint<32> blur_3_32(hw_uint<32*3>& in) {
  return conv_1_3_32(in) / 3;
}

static inline
hw_uint<16> blur_3(hw_uint<16*3>& in) {
  return conv_1_3_16(in) / 3;
}

static inline
int blur_27(hw_uint<16*27>& in) {
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

static inline
hw_uint<32> conv_3_3(hw_uint<32*9>& in) {
  hw_uint<32> v0 = in.extract<0, 31>();
  hw_uint<32> v1 = in.extract<32, 63>();
  hw_uint<32> v2 = in.extract<64, 95>();
  
  hw_uint<32> v3 = in.extract<96, 127>();
  hw_uint<32> v4 = in.extract<128, 159>();
  hw_uint<32> v5 = in.extract<160, 191>();

  hw_uint<32> v6 = in.extract<192, 223>();
  hw_uint<32> v7 = in.extract<224, 255>();
  hw_uint<32> v8 = in.extract<256, 287>();

  return (v0 + v1 + v2 +
    v3 + v4 + v5 +
    v6 + v7 + v8).to_int();
}

static inline
hw_uint<32> mag_cu(hw_uint<32>& a) {
  return a;
}

static inline
hw_uint<32> sobel_my(hw_uint<32>& a) {
  return a;
}

static inline
hw_uint<32> sobel_mx(hw_uint<32>& a) {
  return a;
}
