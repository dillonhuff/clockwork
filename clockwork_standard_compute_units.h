#pragma once

#include "hw_classes.h"
#include <cstring>

typedef int16_t int16;

template<typename To, typename From>
static inline
To bitcast(From a) {
  return *((To*)((void*) (&a)));
}

template<typename T>
T clamp_val(const T& a, const T& lo, const T& hi) {
  if (a < lo) {
    return lo;
  }
  if (a > hi) {
    return hi;
  }
  return a;
}

static inline
float int_to_float(const hw_uint<32>& in) {
  return (float) in.to_int();
}


static inline
float to_float(const hw_uint<32>& in) {
  int i = in.to_int();
  void* ip = (void*)(&i);
  float* f = (float*) ip;
  return (*f);
}

static inline
hw_uint<16>
max_pool_2x2(const hw_uint<16*4>& in) {
  hw_uint<16> v0 = in.extract<0, 15>();
  hw_uint<16> v1 = in.extract<16, 31>();
  hw_uint<16> v2 = in.extract<32, 47>();
  hw_uint<16> v3 = in.extract<48, 63>();
  return max(max(v0, v1), max(v2, v3));
}

static inline
hw_uint<32> to_bits(const float& f) {
  int* ip = (int*) ((void*)(&f));
  return *ip;
}

static inline
hw_uint<32>
r1_comp2d(const hw_uint<32>& r0) {
  return r0*r0*r0;
}

static inline
hw_uint<32>
comp_r02d(const hw_uint<32>& u,
    const hw_uint<32>& f) {
  return u*f*5;
}


static inline
hw_uint<32>
float_square(const hw_uint<32>& ub) {
  auto u = to_float(ub);
  return to_bits(u*u);
}

static inline
hw_uint<32>
fmag2d(const hw_uint<32>& ub,
    const hw_uint<32>& db,
    const hw_uint<32>& lb,
    const hw_uint<32>& rb) {

  auto u = to_float(ub);
  auto d = to_float(db);
  auto l = to_float(lb);
  auto r = to_float(rb);
  return to_bits(u*u + d*d + l*l + r*r);
}


static inline
hw_uint<32>
mag_dn2d(const hw_uint<32>& u,
    const hw_uint<32>& d,
    const hw_uint<32>& l,
    const hw_uint<32>& r) {

  // TODO: Replace with square root
  return u*u + d*d + l*l + r*r;
}

static inline
hw_uint<32>
diff_qwe2d(const hw_uint<32*2>& in) {
  return in.get<32, 1>() - in.get<32, 0>();
}

static inline
hw_uint<32>
diff_d2d(const hw_uint<32*2>& in) {
  return in.get<32, 0>() - in.get<32, 1>();
}

static inline
hw_uint<32>
diff_l2d(const hw_uint<32*2>& in) {
  return in.get<32, 1>() - in.get<32, 0>();
}

static inline
hw_uint<32>
diff_r2d(const hw_uint<32*2>& in) {
  return in.get<32, 0>() - in.get<32, 1>();
}

static inline
hw_uint<32> float_stencil_1x3(const hw_uint<32*3>& in) {
  hw_uint<32> v0 = in.extract<0, 31>();
  hw_uint<32> v1 = in.extract<32, 63>();
  hw_uint<32> v2 = in.extract<64, 95>();


  float f0 = to_float(v0);
  float f1 = to_float(v1);
  float f2 = to_float(v2);

  float res = (2.7f*f0 + 1.83f*f1 + 2.45f*f2) / 3.0f;
  return to_bits(res);
}

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
  //return dark;
  return (bw*bright) + (dw*dark) / (bw + dw);
}

template<typename T>
static inline
T psef_weighted_merge(T& bright, T& dark, T& bright_weight, T& dark_weight) {

  //return dark;
  return (bright_weight*bright + dark_weight*dark) / (bright_weight + dark_weight);
  //return (bright_weight*bright + dark_weight*dark);
  //return (bright + dark) / 2;
}

template<typename T>
static inline
T psef_normalize_weights(T& bright_weight) {
  return max(1, bright_weight / 100);
}

template<typename T>
static inline
T psef_weight(T& src) {
  auto sv = src.to_int();
  int diff = 128 - sv;
  int abs_diff = diff < 0 ? -diff : diff;
  return 128 - min(128, abs_diff);
  //return abs(128 - sv) > 100 ? 0 : 1;
  //return min(max(0, 128 - src.to_int()), 255);
}

template<typename T>
static inline
T multiply_by_two(T& src) {
  T scaled = 2*src;
  return min(scaled.to_int(), 255);
}

template<typename T>
static inline
T scale_exposure(T& src) {
  T scaled = 3*src;
  return min(scaled.to_int(), 255);
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
T average(T& src, T& a0) {
  //return src + a0;
  return (src + a0) / 2;
}

template<typename T>
static inline
T add(T& src, T& a0) {
  //return src;
  //+ a0;
  return src + a0;
}

template<typename T>
static inline
T diff(T& src, T& a0) {
  //return src;
  return src - a0;
}

static inline
hw_uint<32> add_2(const hw_uint<32*2>& in) {
  hw_uint<32> v0 = in.extract<0, 31>();
  hw_uint<32> v1 = in.extract<32, 63>();
  return v0 + v1;
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

static
hw_uint<16> interleave(hw_uint<16>& src, hw_uint<16>& a0, const int column_index) {
  return (column_index % 2) == 0 ? src : a0;
}

static
hw_uint<16> fmadd_16(hw_uint<16>& src, hw_uint<16>& a0) {
  return src + a0;
}

static
hw_uint<32> fma_32(hw_uint<32>& src, hw_uint<32>& a0, hw_uint<32>& a1) {
  return src + a0*a1;
}

static
int fma(int& src, int& a0, int& a1) {
  return src + a0*a1;
}

static
hw_uint<16> set_zero_16() {
  return hw_uint<16>(0);
}

static
hw_uint<32> set_zero_32() {
  return hw_uint<32>(0);
}

static
int set_zero() {
  return 0;
}

static
hw_uint<16> zero() {
  return 16;
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
hw_uint<32> conv_1_3(hw_uint<32*3>& in) {
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
hw_uint<16> weighted_conv_3_1(hw_uint<16>& base, hw_uint<16*3>& in, hw_uint<16*3>& weights) {
  hw_uint<16> v0 = in.extract<0, 15>();
  hw_uint<16> v1 = in.extract<16, 31>();
  hw_uint<16> v2 = in.extract<32, 47>();


  hw_uint<16> w0 = in.extract<0, 15>();
  hw_uint<16> w1 = in.extract<16, 31>();
  hw_uint<16> w2 = in.extract<32, 47>();


  return (w0*v0 + w1*v1 + w2*v2) + base;
}

static inline
hw_uint<16> weighted_conv_3_3(hw_uint<16*9>& in, hw_uint<16*9>& weights) {
  hw_uint<16> v0 = in.extract<0, 15>();
  hw_uint<16> v1 = in.extract<16, 31>();
  hw_uint<16> v2 = in.extract<32, 47>();

  hw_uint<16> v3 = in.extract<48, 63>();
  hw_uint<16> v4 = in.extract<64, 79>();
  hw_uint<16> v5 = in.extract<80, 95>();

  hw_uint<16> v6 = in.extract<96, 111>();
  hw_uint<16> v7 = in.extract<112, 127>();
  hw_uint<16> v8 = in.extract<128, 143>();

  hw_uint<16> w0 = in.extract<0, 15>();
  hw_uint<16> w1 = in.extract<16, 31>();
  hw_uint<16> w2 = in.extract<32, 47>();

  hw_uint<16> w3 = in.extract<48, 63>();
  hw_uint<16> w4 = in.extract<64, 79>();
  hw_uint<16> w5 = in.extract<80, 95>();

  hw_uint<16> w6 = in.extract<96, 111>();
  hw_uint<16> w7 = in.extract<112, 127>();
  hw_uint<16> w8 = in.extract<128, 143>();

  return (w0*v0 + w1*v1 + w2*v2 +
    w3*v3 + w4*v4 + w5*v5 +
    w6*v6 + w7*v7 + w8*v8);
}

static inline
hw_uint<16> conv_3_3(hw_uint<16*9>& in) {
  hw_uint<16> v0 = in.extract<0, 15>();
  hw_uint<16> v1 = in.extract<16, 31>();
  hw_uint<16> v2 = in.extract<32, 47>();

  hw_uint<16> v3 = in.extract<48, 63>();
  hw_uint<16> v4 = in.extract<64, 79>();
  hw_uint<16> v5 = in.extract<80, 95>();

  hw_uint<16> v6 = in.extract<96, 111>();
  hw_uint<16> v7 = in.extract<112, 127>();
  hw_uint<16> v8 = in.extract<128, 143>();

  return (v0 + v1 + v2 +
    v3 + v4 + v5 +
    v6 + v7 + v8);
}

static inline
hw_uint<32> conv_3_3_float_one(hw_uint<32>& in) {
  hw_uint<32> v0 = in.extract<0, 31>();
  float flt = to_float(v0);
  double val = flt;

  return ((int) (((234.0 + val*3.4) / 9.0) + (15.0 + val*2.1) / 17.2));
}

static inline
hw_uint<32> conv_3_3_float(hw_uint<32*9>& in) {
  hw_uint<32> v0 = in.extract<0, 31>();
  hw_uint<32> v1 = in.extract<32, 63>();
  hw_uint<32> v2 = in.extract<64, 95>();

  hw_uint<32> v3 = in.extract<96, 127>();
  hw_uint<32> v4 = in.extract<128, 159>();
  hw_uint<32> v5 = in.extract<160, 191>();

  hw_uint<32> v6 = in.extract<192, 223>();
  hw_uint<32> v7 = in.extract<224, 255>();
  hw_uint<32> v8 = in.extract<256, 287>();


  //assert(false);

  return ((int)
      ((5.0f*to_float(v0) + 2.0f*to_float(v1) + 3.0f*to_float(v2) +
        1.2f*to_float(v3) + 3.2f*to_float(v4) + 4.1f*to_float(v5) +
        2.5f*to_float(v6) + 93.3f*to_float(v7) + 12.4f*to_float(v8)) / 9.0f));
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


  //assert(false);

  return (v0 + v1 + v2 +
    v3 + v4 + v5 +
    v6 + v7 + v8).to_int();
}

static inline
hw_uint<32> cnn_mac(hw_uint<32*4> & in, hw_uint<32> & psum) {
  hw_uint<32> v0 = in.extract<0, 31>();
  hw_uint<32> v1 = in.extract<32, 63>();
  hw_uint<32> v2 = in.extract<64, 95>();
  hw_uint<32> v3 = in.extract<96, 127>();

  return (psum + v0 + v1 + v2 + v3).to_int();
}

static inline
hw_uint<16> reduce_gauss(hw_uint<16*9>& in) {
  auto res = conv_3_3(in);
  return res / 9;
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
  hw_uint<32> r0 = a.get<32, 1>() - a.get<32, 0>();
  hw_uint<32> r1 = 3*(a.get<32, 3>() - a.get<32, 2>());
  hw_uint<32> r2 = a.get<32, 5>() - a.get<32, 4>();
  return r0 + r1 + r2;
}

static inline
hw_uint<32> sobel_mx(hw_uint<192>& a) {
  hw_uint<32> r0 = a.get<32, 3>() - a.get<32, 0>();
  hw_uint<32> r1 = 3*(a.get<32, 4>() - a.get<32, 1>());
  hw_uint<32> r2 = a.get<32, 5>() - a.get<32, 2>();
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
out_comp_fadd(hw_uint<32>& r1,
    hw_uint<32>& f,
    hw_uint<128>& u,
    hw_uint<128>& g) {

  float prod =
    to_float(u.get<32, 0>()) * to_float(g.get<32, 0>()) +
    to_float(u.get<32, 1>()) * to_float(g.get<32, 1>()) +
    to_float(u.get<32, 2>()) * to_float(g.get<32, 2>()) +
    to_float(u.get<32, 3>()) * to_float(g.get<32, 3>());

  return to_bits(to_float(r1) + to_float(f) + prod);
}

static inline
hw_uint<32>
out_comp_dn2d(hw_uint<32>& r1,
    hw_uint<32>& f,
    hw_uint<128>& u,
    hw_uint<128>& g) {

  auto prod =
    u.get<32, 0>() * g.get<32, 0>() +
    u.get<32, 1>() * g.get<32, 1>() +
    u.get<32, 2>() * g.get<32, 2>() +
    u.get<32, 3>() * g.get<32, 3>();

  return r1 + f + prod;
}

static inline
hw_uint<32> fadd2(const hw_uint<32>& a, const hw_uint<32>& b) {
  return to_bits(to_float(a) +
      to_float(b));
}

static inline
hw_uint<32> fadd(const hw_uint<64>& a) {
  return to_bits(to_float(a.get<32, 0>()) +
      to_float(a.get<32, 1>()));
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

static inline
hw_uint<32> compute_with_variable(const hw_uint<32>& m, const int loop_var) {
  return m + loop_var;
}

template<int Len>
static inline
int16_t to_int16(hw_uint<Len>& v) {
  return v.to_int();
}

template<typename A, typename T>
T select(const A& test, const T& v, const T& u) {
  return test ? v : u;
}

template<typename T>
T uint8(const T& v) {
  return v;
}


static inline
hw_uint<16> blur_3_3(hw_uint<16*9>& in) {
  hw_uint<16> v0 = in.extract<0, 15>();
  hw_uint<16> v1 = in.extract<16, 31>();
  hw_uint<16> v2 = in.extract<32, 47>();

  hw_uint<16> v3 = in.extract<48, 63>();
  hw_uint<16> v4 = in.extract<64, 79>();
  hw_uint<16> v5 = in.extract<80, 95>();

  hw_uint<16> v6 = in.extract<96, 111>();
  hw_uint<16> v7 = in.extract<112, 127>();
  hw_uint<16> v8 = in.extract<128, 143>();

  return (v0 + v1 + v2 +
    v3 + v4 + v5 +
    v6 + v7 + v8) / 9;
}

static inline
hw_uint<32> histogram_inc(hw_uint<64>& ignore, hw_uint<32>& val) {
  return val + 1;
}

static inline
hw_uint<16> as_hblur(const hw_uint<16*2>& in) {
  hw_uint<16> v0 = in.extract<0, 15>();
  hw_uint<16> v1 = in.extract<16, 31>();
  return (v0 + v1) >> 1;
}

static inline
hw_uint<32> blur_1x3_32(const hw_uint<32*3>& in) {
  hw_uint<32> v0 = in.extract<0, 31>();
  hw_uint<32> v1 = in.extract<32, 63>();
  hw_uint<32> v2 = in.extract<64, 95>();

  return v0 + v1 + v2;
}

static inline
hw_uint<32> blur_5x5_32(const hw_uint<32*5*5>& in) {
  hw_uint<32> v0 = in.extract<0, 31>();
  hw_uint<32> v1 = in.extract<32, 63>();
  hw_uint<32> v2 = in.extract<64, 95>();
  hw_uint<32> v3 = in.extract<96, 127>();
  hw_uint<32> v4 = in.extract<128, 159>();
  return v0 + v1 + v2 + v3 + v4;
}

static inline
hw_uint<32> blur_5x1_32(const hw_uint<32*5>& in) {
  hw_uint<32> v0 = in.extract<0, 31>();
  hw_uint<32> v1 = in.extract<32, 63>();
  hw_uint<32> v2 = in.extract<64, 95>();
  hw_uint<32> v3 = in.extract<96, 127>();
  hw_uint<32> v4 = in.extract<128, 159>();
  return v0 + v1 + v2 + v3 + v4;
}

static inline
hw_uint<32> blur_2x2_32(const hw_uint<32*4>& in) {
  hw_uint<32> v0 = in.extract<0, 31>();
  hw_uint<32> v1 = in.extract<32, 63>();
  hw_uint<32> v2 = in.extract<64, 95>();
  hw_uint<32> v3 = in.extract<96, 127>();
  return v0 + v1 + v2 + v3;
}

template<typename A, typename B>
static
inline A reinterpret(const B &b) {
    A a;
    std::memcpy(&a, &b, sizeof(a));
    return a;
}

static
inline float float_from_bits(uint32_t bits) {
    return reinterpret<float, uint32_t>(bits);
}



/** Class that provides a type that implements half precision
 *  floating point using the bfloat16 format.
 *
 *  Copy from Halide Repo. */
struct bfloat16_t {

    static const int mantissa_bits = 7;
    static const uint16_t sign_mask = 0x8000;
    static const uint16_t exponent_mask = 0x7f80;
    static const uint16_t mantissa_mask = 0x007f;

    /// \name Constructors
    /// @{

    /** Construct from a float, double, or int using
     * round-to-nearest-ties-to-even. Out-of-range values become +/-
     * infinity.
     */
    // @{
    explicit bfloat16_t(float value);
    explicit bfloat16_t(double value);
    explicit bfloat16_t(int value);
    bfloat16_t(uint16_t value);
    // @}

    /** Construct a bfloat16_t with the bits initialised to 0. This represents
     * positive zero.*/
    bfloat16_t() = default;

    /// @}

    // Use explicit to avoid accidently raising the precision
    /** Cast to float */
    explicit operator float() const;
    /** Cast to double */
    explicit operator double() const;
    /** Cast to int */
    explicit operator int() const;
    operator uint16_t() const;
    operator hw_uint<16>() const;

    /** \name Convenience "constructors"
     */
    /**@{*/

    /** Get a new bfloat16_t that represents zero
     * \param positive if true then returns positive zero otherwise returns
     *        negative zero.
     */
    static bfloat16_t make_zero(bool positive);

    /** Get a new float16_t that represents infinity
     * \param positive if true then returns positive infinity otherwise returns
     *        negative infinity.
     */
    static bfloat16_t make_infinity(bool positive);

    /** Get a new bfloat16_t that represents NaN (not a number) */
    static bfloat16_t make_nan();

    /** Get a new bfloat16_t with the given raw bits
     *
     * \param bits The bits conformant to IEEE754 binary16
     */
    static bfloat16_t make_from_bits(uint16_t bits);

    /**@}*/

    /** Return a new bfloat16_t with a negated sign bit*/
    bfloat16_t operator-() const;

    /** Arithmetic operators. */
    // @{
    bfloat16_t operator+(bfloat16_t rhs) const;
    bfloat16_t operator-(bfloat16_t rhs) const;
    bfloat16_t operator*(bfloat16_t rhs) const;
    bfloat16_t operator/(bfloat16_t rhs) const;
    bfloat16_t operator+=(bfloat16_t rhs) { return (*this = *this + rhs); }
    bfloat16_t operator-=(bfloat16_t rhs) { return (*this = *this - rhs); }
    bfloat16_t operator*=(bfloat16_t rhs) { return (*this = *this * rhs); }
    bfloat16_t operator/=(bfloat16_t rhs) { return (*this = *this / rhs); }
    // @}

    /** Comparison operators */
    // @{
    bool operator==(bfloat16_t rhs) const;
    bool operator!=(bfloat16_t rhs) const { return !(*this == rhs); }
    bool operator>(bfloat16_t rhs) const;
    bool operator<(bfloat16_t rhs) const;
    bool operator>=(bfloat16_t rhs) const { return (*this > rhs) || (*this == rhs); }
    bool operator<=(bfloat16_t rhs) const { return (*this < rhs) || (*this == rhs); }
    // @}

    /** Properties */
    // @{
    bool is_nan() const;
    bool is_infinity() const;
    bool is_negative() const;
    bool is_zero() const;
    // @}

    /** Returns the bits that represent this bfloat16_t.
     *
     *  An alternative method to access the bits is to cast a pointer
     *  to this instance as a pointer to a uint16_t.
     **/
    uint16_t to_bits() const;

private:
    // The raw bits.
    uint16_t data = 0;
};

//static inline
//bfloat16_t int_to_float(const hw_uint<16>& in) {
//  return (bfloat16_t) in.to_int();
//}
//
//static inline
//bfloat16_t to_float(const hw_uint<16>& in) {
//  int i = in.to_int();
//  void* ip = (void*)(&i);
//  float* f = (float*) ip;
//  return (*f);
//}
//

float bfloat16_to_float(uint16_t b) {
    // Assume little-endian floats
    uint16_t bits[2] = {0, b};
    float ret;
    memcpy(&ret, bits, sizeof(float));
    return ret;
}

union {
  uint32_t val;
  float f;
} union_var;

uint16_t round_to_even(float a) {
  //uint32_t e = reinterpret_cast<uint32_t&>(a);
  union_var.f = a;
  uint32_t e = union_var.val;
  
  // round float to even, comment out this codeblock for truncation
  uint32_t half = 0x00008000;
  uint32_t sum = e + half;
  
  // check if bottom bits are all zero
  uint32_t mantissa_mask = 0x0000ffff;
  bool is_zeroed = (sum & mantissa_mask) == 0;
  
  // clear last bit (round even) on tie
  uint32_t clear_mask = ~( ((uint32_t)is_zeroed) << 16);
  e = sum & clear_mask;

  // clear bottom bits
  e = e >> 16;

  //return bfloat16_t::make_from_bits(float_to_bfloat16( expf(bfloat16_to_float(a.to_bits())) ));
  //return bfloat16_t::make_from_bits( (uint16_t)e );
  return (uint16_t)e;
}

// Similar routines for bfloat. It's somewhat simpler.
uint16_t float_to_bfloat16(float f) {
//    uint16_t ret[2];
//    memcpy(ret, &f, sizeof(float));
//    // Assume little-endian floats
//    return ret[1];
  return round_to_even(f);
}


bfloat16_t::bfloat16_t(float value) : data(float_to_bfloat16(value)) {}

bfloat16_t::bfloat16_t(double value) : data(float_to_bfloat16(value)) {}

bfloat16_t::bfloat16_t(int value) : data(float_to_bfloat16(value)) {}

bfloat16_t::bfloat16_t(uint16_t value) : data(value) {}

bfloat16_t::operator float() const {
    return bfloat16_to_float(data);
}

bfloat16_t::operator double() const {
    return bfloat16_to_float(data);
}

bfloat16_t::operator int() const {
    return bfloat16_to_float(data);
}

bfloat16_t::operator uint16_t() const {
    return data;
}

bfloat16_t::operator hw_uint<16>() const {
    return data;
}

bfloat16_t bfloat16_t::make_from_bits(uint16_t bits) {
    bfloat16_t f;
    f.data = bits;
    return f;
}

bfloat16_t bfloat16_t::make_zero(bool positive) {
    uint16_t bits = positive ? 0 : sign_mask;
    return bfloat16_t::make_from_bits(bits);
}

bfloat16_t bfloat16_t::make_infinity(bool positive) {
    uint16_t bits = exponent_mask | (positive ? 0 : sign_mask);
    return bfloat16_t::make_from_bits(bits);
}

bfloat16_t bfloat16_t::make_nan() {
    uint16_t bits = exponent_mask | mantissa_mask;
    return bfloat16_t::make_from_bits(bits);
}

bfloat16_t bfloat16_t::operator-() const {
    return bfloat16_t(-bfloat16_to_float(data));
}

bfloat16_t bfloat16_t::operator+(bfloat16_t rhs) const {
    return bfloat16_t(bfloat16_to_float(data) + bfloat16_to_float(rhs.data));
}

bfloat16_t bfloat16_t::operator-(bfloat16_t rhs) const {
    return bfloat16_t(bfloat16_to_float(data) - bfloat16_to_float(rhs.data));
}

bfloat16_t bfloat16_t::operator*(bfloat16_t rhs) const {
    return bfloat16_t(bfloat16_to_float(data) * bfloat16_to_float(rhs.data));
}

bfloat16_t bfloat16_t::operator/(bfloat16_t rhs) const {
    return bfloat16_t(bfloat16_to_float(data) / bfloat16_to_float(rhs.data));
}

bool bfloat16_t::operator==(bfloat16_t rhs) const {
    return bfloat16_to_float(data) == bfloat16_to_float(rhs.data);
}

bool bfloat16_t::operator>(bfloat16_t rhs) const {
    return bfloat16_to_float(data) > bfloat16_to_float(rhs.data);
}

bool bfloat16_t::operator<(bfloat16_t rhs) const {
    return bfloat16_to_float(data) < bfloat16_to_float(rhs.data);
}

bool bfloat16_t::is_nan() const {
    return ((data & exponent_mask) == exponent_mask) && (data & mantissa_mask);
}

bool bfloat16_t::is_infinity() const {
    return ((data & exponent_mask) == exponent_mask) && !(data & mantissa_mask);
}

bool bfloat16_t::is_negative() const {
    return data & sign_mask;
}

bool bfloat16_t::is_zero() const {
    return !(data & ~sign_mask);
}

uint16_t bfloat16_t::to_bits() const {
    return data;
}

static
inline bfloat16_t bfloat_from_bits(uint32_t bits) {
    return bfloat16_t(float_from_bits(bits));
}

bfloat16_t exp_bf16(bfloat16_t a) {
  float e = bfloat16_to_float(a.to_bits());
  float result = expf(e);
  bfloat16_t result_bf16 = bfloat16_t::make_from_bits(round_to_even(result));
  return result_bf16;
}
bfloat16_t pow_bf16(bfloat16_t a, bfloat16_t b) {
  float e = bfloat16_to_float(a.to_bits());
  float f = bfloat16_to_float(b.to_bits());
  float result = powf(e, f);
  bfloat16_t result_bf16 = bfloat16_t::make_from_bits(round_to_even(result));
  return result_bf16;
}

bfloat16_t log_bf16(bfloat16_t a) {
  float e = bfloat16_to_float(a.to_bits());
  float result = logf(e);
  bfloat16_t result_bf16 = bfloat16_t::make_from_bits(round_to_even(result));
  return result_bf16;
}
