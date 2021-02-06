#include <fstream>
#include "us_multi_kernel.h"

int main() {
  srand(234);
  ofstream fout("regression_result_us_multi_kernel.txt");
  HWStream<hw_uint<32 > > in;
  HWStream<hw_uint<32 > > out;


  // Loading input data
  srand(1);
  // cmap    : { oc_load_in03[root = 0, oc_load_in01, oc_load_in02] -> in[oc_load_in02, oc_load_in01] : 0 <= oc_load_in01 <= 65 and 0 <= oc_load_in02 <= 65 }
  // read map: { in[i0, i1] -> oc_load_in03[root = 0, oc_load_in01 = i1, oc_load_in02 = i0] : 0 <= i0 <= 65 and 0 <= i1 <= 65 }
  // rng     : { oc_load_in03[root = 0, oc_load_in01, oc_load_in02] : 0 <= oc_load_in01 <= 65 and 0 <= oc_load_in02 <= 65 }
  // rng card: { 4356 }
  for (int i = 0; i < 4356; i++) {
    hw_uint<32 > value;
    set_at<0, 32, 32>(value, rand() % 256);
    in.write(value);
  }

  us_multi_kernel(in, out);
  for (int i = 0; i < 4096; i++) {
    auto actual = out.read();
    hw_uint<32> actual_lane_0 = actual.extract<0, 31>();
    fout << actual_lane_0 << endl;
  }

  return 0;
}
