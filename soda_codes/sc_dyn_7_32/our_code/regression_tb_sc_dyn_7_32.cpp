#include <fstream>
#include "sc_dyn_7_32.h"

int main() {
  srand(234);
  ofstream fout("regression_result_sc_dyn_7_32.txt");
  HWStream<hw_uint<32 > > in_oc;
  HWStream<hw_uint<32 > > out;


  // Loading input data
  srand(1);
  // cmap    : { pw_math_in_oc03[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> in_oc[pw_math_in_oc02, pw_math_in_oc01] : 0 <= pw_math_in_oc01 <= 127 and 0 <= pw_math_in_oc02 <= 127 }
  // read map: { in_oc[i0, i1] -> pw_math_in_oc03[root = 0, pw_math_in_oc01 = i1, pw_math_in_oc02 = i0] : 0 <= i0 <= 127 and 0 <= i1 <= 127 }
  // rng     : { pw_math_in_oc03[root = 0, pw_math_in_oc01, pw_math_in_oc02] : 0 <= pw_math_in_oc01 <= 127 and 0 <= pw_math_in_oc02 <= 127 }
  // rng card: { 16384 }
  for (int i = 0; i < 16384; i++) {
    hw_uint<32 > value;
    set_at<0, 32, 32>(value, rand() % 256);
    in_oc.write(value);
  }

  sc_dyn_7_32(in_oc, out);
  for (int i = 0; i < 16384; i++) {
    auto actual = out.read();
    hw_uint<32> actual_lane_0 = actual.extract<0, 31>();
    fout << actual_lane_0 << endl;
  }

  return 0;
}
