#pragma once

#include "hw_classes.h"

static inline
int accumulate_3(hw_uint<96>& in) {
  cout << "Value = " << in.val << endl;
  int vals[3];
  for (int i = 0; i < 3; i++) {
    int start = i*32;
    bsim::static_quad_value_bit_vector<32> bv;
    for (int p = 0; p < 32; p++) {
      bv.set(p, in.val.get(start + p));
    }

    cout << "\t" << bv.to_type<int>() << endl;
    vals[i] = bv.to_type<int>();

  }
  return vals[0] + vals[1] + vals[2];
}
