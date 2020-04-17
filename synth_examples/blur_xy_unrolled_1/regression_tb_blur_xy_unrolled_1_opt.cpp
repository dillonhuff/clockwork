#include <fstream>
#include "blur_xy_unrolled_1_opt.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_blur_xy_unrolled_1_opt.txt");
  ofstream fout("regression_result_blur_xy_unrolled_1_opt.txt");
  HWStream<hw_uint<32> > input_update_0_read;
  HWStream<hw_uint<32> > blur_xy_unrolled_1_update_0_write;


  // Loading input data
  // cmap    : { input_update_0[root = 0, input_0, input_1] -> input_arg[0, 0] : 0 <= input_0 <= 1921 and 0 <= input_1 <= 1081 }
  // read map: { input_arg[0, 0] -> input_update_0[root = 0, input_0, input_1] : 0 <= input_0 <= 1921 and 0 <= input_1 <= 1081 }
  // rng     : { input_update_0[root = 0, input_0, input_1] : 0 <= input_0 <= 1921 and 0 <= input_1 <= 1081 }
  for (int i = 0; i < 2079604; i++) {
    hw_uint<32> in_val;
    in_pix << 1*i + 0 << endl;
    set_at<0*32, 32>(in_val, 1*i + 0);
    input_update_0_read.write(in_val);
  }

  blur_xy_unrolled_1_opt(input_update_0_read, blur_xy_unrolled_1_update_0_write);

  for (int i = 0; i < 2073600; i++) {
    hw_uint<32> actual = blur_xy_unrolled_1_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*32, 31>();
    fout << (int) actual_lane_0 << endl;
  }

  in_pix.close();
  fout.close();
  return 0;
}
