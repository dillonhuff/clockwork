#include <fstream>
#include "gp_2_opt.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_gp_2_opt.txt");
  ofstream fout("regression_result_gp_2_opt.txt");
  HWStream<hw_uint<32> > in_update_0_read;
  HWStream<hw_uint<16> > gp_2_update_0_write;


  // Loading input data
  // cmap    : { in_update_0[root = 0, in_0, in_1] -> in_off_chip[0, 0] : 0 <= in_0 <= 39 and 0 <= in_1 <= 78 }
  // read map: { in_off_chip[0, 0] -> in_update_0[root = 0, in_0, in_1] : 0 <= in_0 <= 39 and 0 <= in_1 <= 78 }
  // rng     : { in_update_0[root = 0, in_0, in_1] : 0 <= in_0 <= 39 and 0 <= in_1 <= 78 }
  for (int i = 0; i < 3160; i++) {
    hw_uint<32> in_val;
    set_at<0*16, 32, 16>(in_val, 2*i + 0);
    in_pix << in_val << endl;
    set_at<1*16, 32, 16>(in_val, 2*i + 1);
    in_pix << in_val << endl;
    in_update_0_read.write(in_val);
  }

  gp_2_opt(in_update_0_read, gp_2_update_0_write);

  for (int i = 0; i < 16; i++) {
    hw_uint<16> actual = gp_2_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*16, 15>();
    fout << actual_lane_0 << endl;
  }

  in_pix.close();
  fout.close();
  return 0;
}
