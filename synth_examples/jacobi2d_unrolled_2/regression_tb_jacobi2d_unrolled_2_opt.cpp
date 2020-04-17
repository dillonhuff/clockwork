#include <fstream>
#include "jacobi2d_unrolled_2_opt.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_jacobi2d_unrolled_2_opt.txt");
  ofstream fout("regression_result_jacobi2d_unrolled_2_opt.txt");
  HWStream<hw_uint<64> > t1_update_0_read;
  HWStream<hw_uint<64> > jacobi2d_unrolled_2_update_0_write;


  // Loading input data
  // cmap    : { t1_update_0[root = 0, t1_0, t1_1] -> t1_arg[0, 0] : -1 <= t1_0 <= 8 and -1 <= t1_1 <= 16 }
  // read map: { t1_arg[0, 0] -> t1_update_0[root = 0, t1_0, t1_1] : -1 <= t1_0 <= 8 and -1 <= t1_1 <= 16 }
  // rng     : { t1_update_0[root = 0, t1_0, t1_1] : -1 <= t1_0 <= 8 and -1 <= t1_1 <= 16 }
  for (int i = 0; i < 180; i++) {
    hw_uint<64> in_val;
    in_pix << 2*i + 0 << endl;
    set_at<0*32, 64>(in_val, 2*i + 0);
    in_pix << 2*i + 1 << endl;
    set_at<1*32, 64>(in_val, 2*i + 1);
    t1_update_0_read.write(in_val);
  }

  jacobi2d_unrolled_2_opt(t1_update_0_read, jacobi2d_unrolled_2_update_0_write);

  for (int i = 0; i < 128; i++) {
    hw_uint<64> actual = jacobi2d_unrolled_2_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*32, 31>();
    fout << actual_lane_0 << endl;
    auto actual_lane_1 = actual.extract<1*32, 63>();
    fout << actual_lane_1 << endl;
  }

  in_pix.close();
  fout.close();
  return 0;
}
