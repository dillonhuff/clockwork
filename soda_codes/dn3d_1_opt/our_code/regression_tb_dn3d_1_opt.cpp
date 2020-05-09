#include <fstream>
#include "dn3d_1_opt.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_dn3d_1_opt.txt");
  ofstream fout("regression_result_dn3d_1_opt.txt");
  HWStream<hw_uint<16> > f_update_0_read;
  HWStream<hw_uint<16> > u_update_0_read;
  HWStream<hw_uint<16> > dn3d_1_update_0_write;


  // Loading input data
  // cmap    : { f_update_0[root = 0, f_0, f_1, f_2] -> f_oc[0, 0] : 0 <= f_0 <= 31 and 0 <= f_1 <= 31 and 0 <= f_2 <= 31 }
  // read map: { f_oc[0, 0] -> f_update_0[root = 0, f_0, f_1, f_2] : 0 <= f_0 <= 31 and 0 <= f_1 <= 31 and 0 <= f_2 <= 31 }
  // rng     : { f_update_0[root = 0, f_0, f_1, f_2] : 0 <= f_0 <= 31 and 0 <= f_1 <= 31 and 0 <= f_2 <= 31 }
  for (int i = 0; i < 32768; i++) {
    hw_uint<16> in_val;
    set_at<0*16, 16, 16>(in_val, 1*i + 0);
    in_pix << in_val << endl;
    f_update_0_read.write(in_val);
  }

  // cmap    : { u_update_0[root = 0, u_0, u_1, u_2] -> u_oc[0, 0] : -2 <= u_0 <= 33 and -2 <= u_1 <= 33 and -2 <= u_2 <= 33 }
  // read map: { u_oc[0, 0] -> u_update_0[root = 0, u_0, u_1, u_2] : -2 <= u_0 <= 33 and -2 <= u_1 <= 33 and -2 <= u_2 <= 33 }
  // rng     : { u_update_0[root = 0, u_0, u_1, u_2] : -2 <= u_0 <= 33 and -2 <= u_1 <= 33 and -2 <= u_2 <= 33 }
  for (int i = 0; i < 46656; i++) {
    hw_uint<16> in_val;
    set_at<0*16, 16, 16>(in_val, 1*i + 0);
    in_pix << in_val << endl;
    u_update_0_read.write(in_val);
  }

  dn3d_1_opt(f_update_0_read, u_update_0_read, dn3d_1_update_0_write);

  for (int i = 0; i < 32768; i++) {
    hw_uint<16> actual = dn3d_1_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*16, 15>();
    fout << actual_lane_0 << endl;
  }

  in_pix.close();
  fout.close();
  return 0;
}
