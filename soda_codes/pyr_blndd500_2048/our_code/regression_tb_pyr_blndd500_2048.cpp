#include <fstream>
#include "pyr_blndd500_2048.h"

int main() {
  srand(234);
  ofstream fout("regression_result_pyr_blndd500_2048.txt");
  HWStream<hw_uint<32 > > in;
  HWStream<hw_uint<32 > > out;


  // Loading input data
  srand(1);
  // cmap    : { pw_math_in03[root = 0, pw_math_in01, pw_math_in02] -> in[pw_math_in02, pw_math_in01] : 0 <= pw_math_in01 <= 2054 and 0 <= pw_math_in02 <= 2054 }
  // read map: { in[i0, i1] -> pw_math_in03[root = 0, pw_math_in01 = i1, pw_math_in02 = i0] : 0 <= i0 <= 2054 and 0 <= i1 <= 2054 }
  // rng     : { pw_math_in03[root = 0, pw_math_in01, pw_math_in02] : 0 <= pw_math_in01 <= 2054 and 0 <= pw_math_in02 <= 2054 }
  // rng card: { 4223025 }
  for (int i = 0; i < 4223025; i++) {
    hw_uint<32 > value;
    set_at<0, 32, 32>(value, rand() % 256);
    in.write(value);
  }

  pyr_blndd500_2048(in, out);
  for (int i = 0; i < 4194304; i++) {
    auto actual = out.read();
    hw_uint<32> actual_lane_0 = actual.extract<0, 31>();
    fout << actual_lane_0 << endl;
  }

  return 0;
}
