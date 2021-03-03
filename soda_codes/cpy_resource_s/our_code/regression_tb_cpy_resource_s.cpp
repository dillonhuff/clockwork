#include <fstream>
#include "cpy_resource_s.h"

int main() {
  srand(234);
  ofstream fout("regression_result_cpy_resource_s.txt");
  HWStream<hw_uint<32 > > in;
  HWStream<hw_uint<32 > > out;


  // Loading input data
  srand(1);
  // cmap    : { pw_math_in03[root = 0, pw_math_in01, pw_math_in02] -> in[pw_math_in02, pw_math_in01] : 0 <= pw_math_in01 <= 7 and 0 <= pw_math_in02 <= 7 }
  // read map: { in[i0, i1] -> pw_math_in03[root = 0, pw_math_in01 = i1, pw_math_in02 = i0] : 0 <= i0 <= 7 and 0 <= i1 <= 7 }
  // rng     : { pw_math_in03[root = 0, pw_math_in01, pw_math_in02] : 0 <= pw_math_in01 <= 7 and 0 <= pw_math_in02 <= 7 }
  // rng card: { 64 }
  for (int i = 0; i < 64; i++) {
    hw_uint<32 > value;
    set_at<0, 32, 32>(value, rand() % 256);
    in.write(value);
  }

  cpy_resource_s(in, out);
  for (int i = 0; i < 64; i++) {
    auto actual = out.read();
    hw_uint<32> actual_lane_0 = actual.extract<0, 31>();
    fout << actual_lane_0 << endl;
  }

  assert(in.is_empty());
  assert(out.is_empty());
  return 0;
}
