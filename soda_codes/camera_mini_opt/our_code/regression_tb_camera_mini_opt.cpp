#include <fstream>
#include "camera_mini_opt.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_camera_mini_opt.txt");
  ofstream fout("regression_result_camera_mini_opt.txt");
  HWStream<hw_uint<16> > raw_update_0_read;
  HWStream<hw_uint<16> > camera_mini_update_0_write;


  // Loading input data
  // cmap    : { raw_update_0[root = 0, raw_0, raw_1] -> raw_oc[0, 0] : -3 <= raw_0 <= 104 and -3 <= raw_1 <= 34 }
  // read map: { raw_oc[0, 0] -> raw_update_0[root = 0, raw_0, raw_1] : -3 <= raw_0 <= 104 and -3 <= raw_1 <= 34 }
  // rng     : { raw_update_0[root = 0, raw_0, raw_1] : -3 <= raw_0 <= 104 and -3 <= raw_1 <= 34 }
  for (int i = 0; i < 4104; i++) {
    hw_uint<16> in_val;
    set_at<0*16, 16, 16>(in_val, 1*i + 0);
    in_pix << in_val << endl;
    raw_update_0_read.write(in_val);
  }

  camera_mini_opt(raw_update_0_read, camera_mini_update_0_write);

  for (int i = 0; i < 3000; i++) {
    hw_uint<16> actual = camera_mini_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*16, 15>();
    fout << actual_lane_0 << endl;
  }

  in_pix.close();
  fout.close();
  return 0;
}
