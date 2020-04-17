#include <fstream>
#include "jacobi2d_unrolled_1_opt.h"

int main() {
  ofstream fout("regression_result_jacobi2d_unrolled_1_opt.txt");
  HWStream<hw_uint<32> > t1_update_0_read;
  HWStream<hw_uint<32> > jacobi2d_unrolled_1_update_0_write;


  // Loading input data
  // cmap    : { t1_update_0[root = 0, t1_0, t1_1] -> t1_arg[0, 0] : -1 <= t1_0 <= 16 and -1 <= t1_1 <= 16 }
  // read map: { t1_arg[0, 0] -> t1_update_0[root = 0, t1_0, t1_1] : -1 <= t1_0 <= 16 and -1 <= t1_1 <= 16 }
  // rng     : { t1_update_0[root = 0, t1_0, t1_1] : -1 <= t1_0 <= 16 and -1 <= t1_1 <= 16 }
  for (int i = 0; i < 324; i++) {
    hw_uint<32> in_val;
    set_at<0*32, 32>(in_val, 1*i + 0);
    t1_update_0_read.write(in_val);
  }

  jacobi2d_unrolled_1_opt(t1_update_0_read, jacobi2d_unrolled_1_update_0_write);

  for (int i = 0; i < 256; i++) {
    hw_uint<32> actual = jacobi2d_unrolled_1_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*32, 31>();
    fout << (int) actual_lane_0 << endl;
  }

  return 0;
}
