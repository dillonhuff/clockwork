#include <fstream>
#include "pyr_blndd2048_ii1.h"

int main() {
  srand(234);
  ofstream fout("regression_result_pyr_blndd2048_ii1.txt");
  HWStream<hw_uint<32 > > in;
  HWStream<hw_uint<32 > > out;


  // Loading input data
  srand(1);
  // cmap    : { pw_math_in03[root = 0, pw_math_in01, pw_math_in02] -> in[pw_math_in02, pw_math_in01] : 0 <= pw_math_in01 <= 64 and 0 <= pw_math_in02 <= 64 }
  // read map: { in[i0, i1] -> pw_math_in03[root = 0, pw_math_in01 = i1, pw_math_in02 = i0] : 0 <= i0 <= 64 and 0 <= i1 <= 64 }
  // rng     : { pw_math_in03[root = 0, pw_math_in01, pw_math_in02] : 0 <= pw_math_in01 <= 64 and 0 <= pw_math_in02 <= 64 }
  // rng card: { 4225 }
  for (int i = 0; i < 4225; i++) {
    hw_uint<32 > value;
    set_at<0, 32, 32>(value, rand() % 256);
    in.write(value);
  }

  pyr_blndd2048_ii1(in, out);
  for (int i = 0; i < 4096; i++) {
    auto actual = out.read();
    hw_uint<32> actual_lane_0 = actual.extract<0, 31>();
    fout << actual_lane_0 << endl;
  }

  return 0;
}
