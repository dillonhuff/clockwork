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
T merge_exposures(T& bright, T& dark, T& bw, T& dw) {
  return (bw*bright) + (dw*dark);
}

template<typename T>
static inline
T scale_exposure(T& src) {
  return 3*src;
}

template<typename T>
static inline
T exposure_weight(T& src) {
  return 2.0*src;
}

template<typename T>
static inline
T f_divide(T& src, T& a0) {
  return src / a0;
}

template<typename T>
static inline
T add(T& src, T& a0) {
  return src + a0;
}

template<typename T>
static inline
T diff(T& src, T& a0) {
  return src - a0;
}

static inline
hw_uint<32> diff_b(const hw_uint<32*2>& in) {
  hw_uint<32> v0 = in.extract<0, 31>();
  hw_uint<32> v1 = in.extract<32, 63>();
  return diff(v0, v1);
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
hw_uint<32> blury_comp(hw_uint<32*3>& in) {
  hw_uint<32> v0 = in.extract<0, 31>();
  hw_uint<32> v1 = in.extract<32, 63>();
  hw_uint<32> v2 = in.extract<64, 95>();

  return v0 + v1 + v2;
}

static inline
hw_uint<32> blurx_comp(hw_uint<32*3>& in) {
  hw_uint<32> v0 = in.extract<0, 31>();
  hw_uint<32> v1 = in.extract<32, 63>();
  hw_uint<32> v2 = in.extract<64, 95>();

  return v0 + v1 + v2;
}

static inline
int conv_1_3(hw_uint<32*3>& in) {
  hw_uint<32> v0 = in.extract<0, 31>();
  hw_uint<32> v1 = in.extract<32, 63>();
  hw_uint<32> v2 = in.extract<64, 95>();

  return v0 + v1 + v2;
}

static inline
hw_uint<32> avg(hw_uint<32*3>& in) {
  hw_uint<32> v0 = in.extract<0, 31>();
  hw_uint<32> v1 = in.extract<32, 63>();
  hw_uint<32> v2 = in.extract<64, 95>();

  return (v0 + v1 + v2) / 3;
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
hw_uint<32> blend_levels(hw_uint<32>& v0,
    hw_uint<32>& v1,
    hw_uint<32>& v2,
    hw_uint<32>& v3
    ) {

  return (v0 + v1 + v2 + v3) / 4;
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

  //cout << "v0 = " << v0.to_int() << endl;
  //cout << "v3 = " << v3.to_int() << endl;
  //cout << "v6 = " << v6.to_int() << endl;

  //assert(false);

  return (v0 + v1 + v2 +
    v3 + v4 + v5 +
    v6 + v7 + v8).to_int();
}

static inline
hw_uint<32> reduce_gauss(hw_uint<32*9>& in) {
  auto res = conv_3_3(in);
  return res / 9;
}

static inline
hw_uint<32> mag_cu(hw_uint<32>& mx,
    hw_uint<32>& my) {
  return 65535 - (mx*mx + my*my);
}

static inline
hw_uint<32> sobel_my(hw_uint<192>& a) {
  return 0;
}

static inline
hw_uint<32> sobel_mx(hw_uint<192>& a) {
  //auto m1m1 = a.get<32, 0>();
  //auto m10 = a.get<32, 1>();
  //auto m10 = a.get<32, 2>();
  //auto 1m1 = a.get<32, 3>();
  //auto z1 = a.get<32, 4>();
  //auto oneone = a.get<32, 5>();

  hw_uint<32> r0 = a.get<32, 0>() - a.get<32, 1>();
  hw_uint<32> r1 = 3*(a.get<32, 2>() - a.get<32, 3>());
  hw_uint<32> r2 = a.get<32, 4>() - a.get<32, 5>();
  return r0 + r1 + r2;
}

static inline
hw_uint<32> mag_dn2(hw_uint<32>& diff_d_0_c__0_value,
    hw_uint<32>& diff_l_0_c__0_value,
    hw_uint<32>& diff_r_0_c__0_value,
    hw_uint<32>& diff_u_0_c__0_value) {
  return diff_d_0_c__0_value +
    diff_l_0_c__0_value +
    diff_r_0_c__0_value + 
    diff_u_0_c__0_value;
}

static inline
hw_uint<64> id_unroll(hw_uint<64>& v) {
  return v;
}
static inline
hw_uint<64> conv_3_3_unroll(hw_uint<384>& in) {
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
hw_uint<32> comp_r0(hw_uint<32>& a, hw_uint<32>& b) {
  return a + b;
}

static inline
hw_uint<32> r1_comp(hw_uint<32>& a) {
  return a*2;
}

static inline
hw_uint<32>
out_comp_dn2d(hw_uint<32>& a, hw_uint<32>& b, hw_uint<128>& c, hw_uint<128>& d) {
  return a + b + c + d;
}

static inline
hw_uint<32>
contrived(hw_uint<32*3>& in, hw_uint<32*2>& b) {
  return in.extract<0, 31>() +
    in.extract<32, 63>() +
    in.extract<64, 95>() +
    b.extract<0, 31>() +
    b.extract<32, 63>();
}
