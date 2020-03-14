#include <fstream>
#include "jacobi2d_unrolled_2_opt.h"

int main() {
  ofstream fout("regression_result_jacobi2d_unrolled_2_opt.txt");
  HWStream<hw_uint<64> > t1_comp_read;
  HWStream<hw_uint<64> > jacobi2d_unrolled_2_comp_write;


  // Loading input data
  // cmap    : { t1_comp[root = 0, t1_0, t1_1] -> t1_arg[0, 0] : -1 <= t1_0 <= 512 and -1 <= t1_1 <= 1024 }
  // read map: { t1_arg[0, 0] -> t1_comp[root = 0, t1_0, t1_1] : -1 <= t1_0 <= 512 and -1 <= t1_1 <= 1024 }
  // rng     : { t1_comp[root = 0, t1_0, t1_1] : -1 <= t1_0 <= 512 and -1 <= t1_1 <= 1024 }
  for (int i = 0; i < 527364; i++) {
    hw_uint<64> in_val;
    set_at<0*32, 64>(in_val, 2*i + 0);
    set_at<1*32, 64>(in_val, 2*i + 1);
    t1_comp_read.write(in_val);
  }

  jacobi2d_unrolled_2_opt(t1_comp_read, jacobi2d_unrolled_2_comp_write);

  for (int i = 0; i < 524288; i++) {
    hw_uint<64> actual = jacobi2d_unrolled_2_comp_write.read();
    auto actual_lane_0 = actual.extract<0*32, 31>();
    fout << (int) actual_lane_0 << endl;
    auto actual_lane_1 = actual.extract<1*32, 63>();
    fout << (int) actual_lane_1 << endl;
  }

  return 0;
}
