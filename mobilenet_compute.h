#pragma once

#include "hw_classes.h"

template<int Len>
hw_uint<Len> fma(hw_uint<Len>& src, hw_uint<Len>& a0, hw_uint<Len>& a1) {
  return hw_uint<Len>();
}

template<int Len>
hw_uint<Len> set_zero() {
  return hw_uint<Len>();
}
