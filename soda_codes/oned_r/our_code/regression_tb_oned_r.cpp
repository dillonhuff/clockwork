#include <fstream>
#include "oned_r.h"

int main() {
  srand(234);
  ofstream fout("regression_result_oned_r.txt");
  HWStream<hw_uint<32 > > in;
  HWStream<hw_uint<32 > > out;


  // Loading input data
  srand(1);
  // cmap    : { pw_math_in02[root = 0, pw_math_in01] -> in[pw_math_in01] : 0 <= pw_math_in01 <= 260 }
  // read map: { in[i0] -> pw_math_in02[root = 0, pw_math_in01 = i0] : 0 <= i0 <= 260 }
  // rng     : { pw_math_in02[root = 0, pw_math_in01] : 0 <= pw_math_in01 <= 260 }
  // rng card: { 261 }
  for (int i = 0; i < 261; i++) {
    hw_uint<32 > value;
    set_at<0, 32, 32>(value, rand() % 256);
    in.write(value);
  }

  oned_r(in, out);
  for (int i = 0; i < 128; i++) {
    auto actual = out.read();
    hw_uint<32> actual_lane_0 = actual.extract<0, 31>();
    fout << actual_lane_0 << endl;
  }

  assert(in.is_empty());
  assert(out.is_empty());
  return 0;
}
