#include <fstream>
#include "pw5_2_opt.h"

int main() {
  srand(234);
  ofstream fout("regression_result_pw5_2_opt.txt");
  HWStream<hw_uint<32 > > t1_arg;
  HWStream<hw_uint<32 > > pw5_2;


  // Loading input data
  srand(1);
  // cmap    : { t1_update_0[root = 0, t1_0, t1_1] -> t1_arg[t1_1, t1_0] : 0 <= t1_0 <= 1079 and 0 <= t1_1 <= 1919 }
  // read map: { t1_arg[i0, i1] -> t1_update_0[root = 0, t1_0 = i1, t1_1 = i0] : 0 <= i0 <= 1919 and 0 <= i1 <= 1079 }
  // rng     : { t1_update_0[root = 0, t1_0, t1_1] : 0 <= t1_0 <= 1079 and 0 <= t1_1 <= 1919 }
  // rng card: { 2073600 }
  for (int i = 0; i < 2073600; i++) {
    hw_uint<32 > value;
    set_at<0, 32, 32>(value, rand() % 256);
    t1_arg.write(value);
  }

  pw5_2_opt(t1_arg, pw5_2);
  for (int i = 0; i < 2073600; i++) {
    auto actual = pw5_2.read();
    hw_uint<32> actual_lane_0 = actual.extract<0, 31>();
    fout << actual_lane_0 << endl;
  }

  assert(t1_arg.is_empty());
  assert(pw5_2.is_empty());
  return 0;
}
