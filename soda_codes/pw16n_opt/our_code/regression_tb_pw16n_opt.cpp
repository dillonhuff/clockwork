#include <fstream>
#include "pw16n_opt.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_pw16n_opt.txt");
  ofstream fout("regression_result_pw16n_opt.txt");
  HWStream<hw_uint<16> > input_update_0_read;
  HWStream<hw_uint<16> > pw16n_update_0_write;


  // Loading input data
  // cmap    : { input_update_0[root = 0, input_0, input_1] -> input_arg[0, 0] : 0 <= input_0 <= 1919 and 0 <= input_1 <= 1079 }
  // read map: { input_arg[0, 0] -> input_update_0[root = 0, input_0, input_1] : 0 <= input_0 <= 1919 and 0 <= input_1 <= 1079 }
  // rng     : { input_update_0[root = 0, input_0, input_1] : 0 <= input_0 <= 1919 and 0 <= input_1 <= 1079 }
  for (int i = 0; i < 2073600; i++) {
    hw_uint<16> in_val;
    set_at<0*16, 16, 16>(in_val, 1*i + 0);
    in_pix << in_val << endl;
    input_update_0_read.write(in_val);
  }

  pw16n_opt(input_update_0_read, pw16n_update_0_write);

  for (int i = 0; i < 2073600; i++) {
    hw_uint<16> actual = pw16n_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*16, 15>();
    fout << actual_lane_0 << endl;
  }

  in_pix.close();
  fout.close();
  return 0;
}
