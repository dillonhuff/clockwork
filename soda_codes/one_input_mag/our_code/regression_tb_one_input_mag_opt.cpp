#include <fstream>
#include "one_input_mag_opt.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_one_input_mag_opt.txt");
  ofstream fout("regression_result_one_input_mag_opt.txt");
  HWStream<hw_uint<32> > u_update_0_read;
  HWStream<hw_uint<32> > one_input_mag_update_0_write;


  // Loading input data
  // cmap    : { u_update_0[root = 0, u_0, u_1] -> u_off_chip[0, 0] : -1 <= u_0 <= 30 and -1 <= u_1 <= 30 }
  // read map: { u_off_chip[0, 0] -> u_update_0[root = 0, u_0, u_1] : -1 <= u_0 <= 30 and -1 <= u_1 <= 30 }
  // rng     : { u_update_0[root = 0, u_0, u_1] : -1 <= u_0 <= 30 and -1 <= u_1 <= 30 }
  for (int i = 0; i < 1024; i++) {
    hw_uint<32> in_val;
    in_pix << 1*i + 0 << endl;
    set_at<0*32, 32>(in_val, 1*i + 0);
    u_update_0_read.write(in_val);
  }

  one_input_mag_opt(u_update_0_read, one_input_mag_update_0_write);

  for (int i = 0; i < 900; i++) {
    hw_uint<32> actual = one_input_mag_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*32, 31>();
    fout << actual_lane_0 << endl;
  }

  in_pix.close();
  fout.close();
  return 0;
}
