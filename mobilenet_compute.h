#pragma once

#include "hw_classes.h"

#include "conv_3x3.h"

//template<typename T>
//static inline
//T id(const T& v) {
  //return v;
//}

template<typename T>
T max_zero(const T& val) {
  return max(val.to_int(), 0);
}

template<typename T>
T fma(T& src, T& a0, T& a1) {
  //cout << "src = " << src << endl;
  //cout << "a0  = " << a0 << endl;
  //cout << "a1  = " << a1 << endl;
  return src + a0*a1;
}

template<int Len>
hw_uint<Len> fma(hw_uint<Len>& src, hw_uint<Len>& a0, hw_uint<Len>& a1) {
  return hw_uint<Len>();
}

template<int Len>
hw_uint<Len> set_zero() {
  return hw_uint<Len>();
}


