#pragma once

#include "hw_classes.h"

int max_zero(const int& val) {
  return max(val, 0);
}

int inc(int& src, int& a0) {
  cout << "src = " << src << endl;
  cout << "a0  = " << a0 << endl;
  return src + a0;
}

int fma(int& src, int& a0, int& a1) {
  cout << "src = " << src << endl;
  cout << "a0  = " << a0 << endl;
  cout << "a1  = " << a1 << endl;
  return src + a0*a1;
}

int set_zero() {
  return 0;
}

template<int Len>
hw_uint<Len> fma(hw_uint<Len>& src, hw_uint<Len>& a0, hw_uint<Len>& a1) {
  return hw_uint<Len>();
}

template<int Len>
hw_uint<Len> set_zero() {
  return hw_uint<Len>();
}


