#include <fstream>
#include "cp_noinit_20_4_opt.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_cp_noinit_20_4_opt.txt");
  ofstream fout("regression_result_cp_noinit_20_4_opt.txt");
  HWStream<hw_uint<64> > raw_update_0_read;
  HWStream<hw_uint<64> > cp_noinit_20_4_update_0_write;


  // Loading input data
  // cmap    : { raw_update_0[root = 0, raw_0, raw_1] -> raw_oc[0, 0] : -2 <= raw_0 <= 482 and -3 <= raw_1 <= 1084 }
  // read map: { raw_oc[0, 0] -> raw_update_0[root = 0, raw_0, raw_1] : -2 <= raw_0 <= 482 and -3 <= raw_1 <= 1084 }
  // rng     : { raw_update_0[root = 0, raw_0, raw_1] : -2 <= raw_0 <= 482 and -3 <= raw_1 <= 1084 }
  for (int i = 0; i < 527680; i++) {
    hw_uint<64> in_val;
    set_at<0*16, 64, 16>(in_val, 4*i + 0);
    in_pix << in_val << endl;
    set_at<1*16, 64, 16>(in_val, 4*i + 1);
    in_pix << in_val << endl;
    set_at<2*16, 64, 16>(in_val, 4*i + 2);
    in_pix << in_val << endl;
    set_at<3*16, 64, 16>(in_val, 4*i + 3);
    in_pix << in_val << endl;
    raw_update_0_read.write(in_val);
  }

  cp_noinit_20_4_opt(raw_update_0_read, cp_noinit_20_4_update_0_write);

  for (int i = 0; i < 518400; i++) {
    hw_uint<64> actual = cp_noinit_20_4_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*16, 15>();
    fout << actual_lane_0 << endl;
    auto actual_lane_1 = actual.extract<1*16, 31>();
    fout << actual_lane_1 << endl;
    auto actual_lane_2 = actual.extract<2*16, 47>();
    fout << actual_lane_2 << endl;
    auto actual_lane_3 = actual.extract<3*16, 63>();
    fout << actual_lane_3 << endl;
  }

  in_pix.close();
  fout.close();
  return 0;
}
