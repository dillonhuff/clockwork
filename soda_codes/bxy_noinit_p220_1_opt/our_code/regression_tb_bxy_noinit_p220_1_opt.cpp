#include <fstream>
#include "bxy_noinit_p220_1_opt.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_bxy_noinit_p220_1_opt.txt");
  ofstream fout("regression_result_bxy_noinit_p220_1_opt.txt");
  HWStream<hw_uint<16> > input_update_0_read;
  HWStream<hw_uint<16> > bxy_noinit_p220_1_update_0_write;


  // Loading input data
  // cmap    : { input_update_0[root = 0, input_0, input_1] -> input_arg[0, 0] : 0 <= input_0 <= 1921 and 0 <= input_1 <= 1081 }
  // read map: { input_arg[0, 0] -> input_update_0[root = 0, input_0, input_1] : 0 <= input_0 <= 1921 and 0 <= input_1 <= 1081 }
  // rng     : { input_update_0[root = 0, input_0, input_1] : 0 <= input_0 <= 1921 and 0 <= input_1 <= 1081 }
  for (int i = 0; i < 2079604; i++) {
    hw_uint<16> in_val;
    set_at<0*16, 16, 16>(in_val, 1*i + 0);
    in_pix << in_val << endl;
    input_update_0_read.write(in_val);
  }

  bxy_noinit_p220_1_opt(input_update_0_read, bxy_noinit_p220_1_update_0_write);

  for (int i = 0; i < 2073600; i++) {
    hw_uint<16> actual = bxy_noinit_p220_1_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*16, 15>();
    fout << actual_lane_0 << endl;
  }

  in_pix.close();
  fout.close();
  return 0;
}
