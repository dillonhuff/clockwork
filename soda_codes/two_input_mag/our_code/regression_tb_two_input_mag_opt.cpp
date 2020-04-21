#include <fstream>
#include "two_input_mag_opt.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_two_input_mag_opt.txt");
  ofstream fout("regression_result_two_input_mag_opt.txt");
  HWStream<hw_uint<32> > f_update_0_read;
  HWStream<hw_uint<32> > u_update_0_read;
  HWStream<hw_uint<32> > two_input_mag_update_0_write;


  // Loading input data
  // cmap    : { f_update_0[root = 0, f_0, f_1] -> f_off_chip[0, 0] : -1 <= f_0 <= 30 and -1 <= f_1 <= 30 }
  // read map: { f_off_chip[0, 0] -> f_update_0[root = 0, f_0, f_1] : -1 <= f_0 <= 30 and -1 <= f_1 <= 30 }
  // rng     : { f_update_0[root = 0, f_0, f_1] : -1 <= f_0 <= 30 and -1 <= f_1 <= 30 }
  for (int i = 0; i < 1024; i++) {
    hw_uint<32> in_val;
    in_pix << 1*i + 0 << endl;
    set_at<0*32, 32>(in_val, 1*i + 0);
    f_update_0_read.write(in_val);
  }

  // cmap    : { u_update_0[root = 0, u_0, u_1] -> u_off_chip[0, 0] : -1 <= u_0 <= 30 and -1 <= u_1 <= 30 }
  // read map: { u_off_chip[0, 0] -> u_update_0[root = 0, u_0, u_1] : -1 <= u_0 <= 30 and -1 <= u_1 <= 30 }
  // rng     : { u_update_0[root = 0, u_0, u_1] : -1 <= u_0 <= 30 and -1 <= u_1 <= 30 }
  for (int i = 0; i < 1024; i++) {
    hw_uint<32> in_val;
    in_pix << 1*i + 0 << endl;
    set_at<0*32, 32>(in_val, 1*i + 0);
    u_update_0_read.write(in_val);
  }

  two_input_mag_opt(f_update_0_read, u_update_0_read, two_input_mag_update_0_write);

  for (int i = 0; i < 900; i++) {
    hw_uint<32> actual = two_input_mag_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*32, 31>();
    fout << actual_lane_0 << endl;
  }

  in_pix.close();
  fout.close();
  return 0;
}
