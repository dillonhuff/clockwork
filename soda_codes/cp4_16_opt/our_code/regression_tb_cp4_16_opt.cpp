#include <fstream>
#include "cp4_16_opt.h"

int main() {
  srand(234);
  ofstream fout("regression_result_cp4_16_opt.txt");
  HWStream<hw_uint<16 > > raw_oc;
  HWStream<hw_uint<16 > > cp4_16;


  // Loading input data
  srand(1);
  // cmap    : { raw_update_0[root = 0, raw_0, raw_1] -> raw_oc[raw_1, raw_0] : -3 <= raw_0 <= 1084 and -3 <= raw_1 <= 1924 }
  // read map: { raw_oc[i0, i1] -> raw_update_0[root = 0, raw_0 = i1, raw_1 = i0] : -3 <= i0 <= 1924 and -3 <= i1 <= 1084 }
  // rng     : { raw_update_0[root = 0, raw_0, raw_1] : -3 <= raw_0 <= 1084 and -3 <= raw_1 <= 1924 }
  // rng card: { 2097664 }
  for (int i = 0; i < 2097664; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    raw_oc.write(value);
  }

  cp4_16_opt(raw_oc, cp4_16);
  for (int i = 0; i < 2073600; i++) {
    auto actual = cp4_16.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  assert(raw_oc.is_empty());
  assert(cp4_16.is_empty());
  return 0;
}
