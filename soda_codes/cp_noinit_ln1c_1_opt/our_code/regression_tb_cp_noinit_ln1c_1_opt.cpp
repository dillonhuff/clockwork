#include <fstream>
#include "cp_noinit_ln1c_1_opt.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_cp_noinit_ln1c_1_opt.txt");
  ofstream fout("regression_result_cp_noinit_ln1c_1_opt.txt");
  HWStream<hw_uint<16> > raw_update_0_read;
  HWStream<hw_uint<16> > cp_noinit_ln1c_1_update_0_write;


  // Loading input data
  // cmap    : { raw_update_0[root = 0, raw_0, raw_1] -> raw_oc[0, 0] : -3 <= raw_0 <= 1924 and -3 <= raw_1 <= 1084 }
  // read map: { raw_oc[0, 0] -> raw_update_0[root = 0, raw_0, raw_1] : -3 <= raw_0 <= 1924 and -3 <= raw_1 <= 1084 }
  // rng     : { raw_update_0[root = 0, raw_0, raw_1] : -3 <= raw_0 <= 1924 and -3 <= raw_1 <= 1084 }
  for (int i = 0; i < 2097664; i++) {
    hw_uint<16> in_val;
    set_at<0*16, 16, 16>(in_val, 1*i + 0);
    in_pix << in_val << endl;
    raw_update_0_read.write(in_val);
  }

  cp_noinit_ln1c_1_opt(raw_update_0_read, cp_noinit_ln1c_1_update_0_write);

  for (int i = 0; i < 2073600; i++) {
    hw_uint<16> actual = cp_noinit_ln1c_1_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*16, 15>();
    fout << actual_lane_0 << endl;
  }

  in_pix.close();
  fout.close();
  return 0;
}
