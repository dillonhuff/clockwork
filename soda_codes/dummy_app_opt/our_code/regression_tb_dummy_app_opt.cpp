#include <fstream>
#include "dummy_app_opt.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_dummy_app_opt.txt");
  ofstream fout("regression_result_dummy_app_opt.txt");
  HWStream<hw_uint<32> > u_update_0_read;
  HWStream<hw_uint<32> > dummy_app_update_0_write;


  // Loading input data
  // cmap    : { u_update_0[root = 0, u_0, u_1] -> u_off_chip[0, 0] : 0 <= u_0 <= 29 and -1 <= u_1 <= 29 }
  // read map: { u_off_chip[0, 0] -> u_update_0[root = 0, u_0, u_1] : 0 <= u_0 <= 29 and -1 <= u_1 <= 29 }
  // rng     : { u_update_0[root = 0, u_0, u_1] : 0 <= u_0 <= 29 and -1 <= u_1 <= 29 }
  for (int i = 0; i < 930; i++) {
    hw_uint<32> in_val;
    set_at<0*32, 32, 32>(in_val, 1*i + 0);
    in_pix << in_val << endl;
    u_update_0_read.write(in_val);
  }

  dummy_app_opt(u_update_0_read, dummy_app_update_0_write);

  for (int i = 0; i < 900; i++) {
    hw_uint<32> actual = dummy_app_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*32, 31>();
    fout << actual_lane_0 << endl;
  }

  in_pix.close();
  fout.close();
  return 0;
}
