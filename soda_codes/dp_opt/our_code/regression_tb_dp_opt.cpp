#include <fstream>
#include "dp_opt.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_dp_opt.txt");
  ofstream fout("regression_result_dp_opt.txt");
  HWStream<hw_uint<16> > img_update_0_read;
  HWStream<hw_uint<16> > dp_update_0_write;


  // Loading input data
  // cmap    : { img_update_0[root = 0, img_0, img_1] -> img_oc[0, 0] : 0 <= img_0 <= 31 and 0 <= img_1 <= 31 }
  // read map: { img_oc[0, 0] -> img_update_0[root = 0, img_0, img_1] : 0 <= img_0 <= 31 and 0 <= img_1 <= 31 }
  // rng     : { img_update_0[root = 0, img_0, img_1] : 0 <= img_0 <= 31 and 0 <= img_1 <= 31 }
  for (int i = 0; i < 1024; i++) {
    hw_uint<16> in_val;
    set_at<0*16, 16, 16>(in_val, 1*i + 0);
    in_pix << in_val << endl;
    img_update_0_read.write(in_val);
  }

  dp_opt(img_update_0_read, dp_update_0_write);

  for (int i = 0; i < 1024; i++) {
    hw_uint<16> actual = dp_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*16, 15>();
    fout << actual_lane_0 << endl;
  }

  in_pix.close();
  fout.close();
  return 0;
}
