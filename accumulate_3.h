#pragma once

#include "hw_classes.h"
#include "conv_3x3.h"

#include <iostream>

using namespace std;

static inline
hw_uint<32> accumulate_3(hw_uint<96>& in) {
  hw_uint<32> a = in.extract<0, 31>();
  hw_uint<32> b = in.extract<32, 63>();
  hw_uint<32> c = in.extract<64, 95>();

  int res = (a + b + c).to_int();
  return res;
}
