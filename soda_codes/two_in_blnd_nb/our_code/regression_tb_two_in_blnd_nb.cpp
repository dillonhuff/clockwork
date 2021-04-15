#include <fstream>
#include "two_in_blnd_nb.h"

int main() {
  srand(234);
  ofstream fout("regression_result_two_in_blnd_nb.txt");
  HWStream<hw_uint<32 > > in0_oc;
  HWStream<hw_uint<32 > > in1_oc;
  HWStream<hw_uint<32 > > out;


  // Loading input data
  srand(1);
  // cmap    : { pw_math_in0_oc03[root = 0, pw_math_in0_oc01, pw_math_in0_oc02] -> in0_oc[pw_math_in0_oc02, pw_math_in0_oc01] : 0 <= pw_math_in0_oc01 <= 70 and 0 <= pw_math_in0_oc02 <= 70 }
  // read map: { in0_oc[i0, i1] -> pw_math_in0_oc03[root = 0, pw_math_in0_oc01 = i1, pw_math_in0_oc02 = i0] : 0 <= i0 <= 70 and 0 <= i1 <= 70 }
  // rng     : { pw_math_in0_oc03[root = 0, pw_math_in0_oc01, pw_math_in0_oc02] : 0 <= pw_math_in0_oc01 <= 70 and 0 <= pw_math_in0_oc02 <= 70 }
  // rng card: { 5041 }
  for (int i = 0; i < 5041; i++) {
    hw_uint<32 > value;
    set_at<0, 32, 32>(value, rand() % 256);
    in0_oc.write(value);
  }

  // cmap    : { pw_math_in1_oc47[root = 0, pw_math_in1_oc45, pw_math_in1_oc46] -> in1_oc[pw_math_in1_oc46, pw_math_in1_oc45] : 0 <= pw_math_in1_oc45 <= 70 and 0 <= pw_math_in1_oc46 <= 70 }
  // read map: { in1_oc[i0, i1] -> pw_math_in1_oc47[root = 0, pw_math_in1_oc45 = i1, pw_math_in1_oc46 = i0] : 0 <= i0 <= 70 and 0 <= i1 <= 70 }
  // rng     : { pw_math_in1_oc47[root = 0, pw_math_in1_oc45, pw_math_in1_oc46] : 0 <= pw_math_in1_oc45 <= 70 and 0 <= pw_math_in1_oc46 <= 70 }
  // rng card: { 5041 }
  for (int i = 0; i < 5041; i++) {
    hw_uint<32 > value;
    set_at<0, 32, 32>(value, rand() % 256);
    in1_oc.write(value);
  }

  two_in_blnd_nb(in0_oc, in1_oc, out);
  for (int i = 0; i < 4096; i++) {
    auto actual = out.read();
    hw_uint<32> actual_lane_0 = actual.extract<0, 31>();
    fout << actual_lane_0 << endl;
  }

  assert(in0_oc.is_empty());
  assert(in1_oc.is_empty());
  assert(out.is_empty());
  return 0;
}
