#include <fstream>
#include "harris_mini_opt.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_harris_mini_opt.txt");
  ofstream fout("regression_result_harris_mini_opt.txt");
  HWStream<hw_uint<32> > img_update_0_read;
  HWStream<hw_uint<32> > harris_mini_update_0_write;


  // Loading input data
  // cmap    : { img_update_0[root = 0, img_0, img_1] -> img_oc[0, 0] : -2 <= img_0 <= 33 and -2 <= img_1 <= 33 }
  // read map: { img_oc[0, 0] -> img_update_0[root = 0, img_0, img_1] : -2 <= img_0 <= 33 and -2 <= img_1 <= 33 }
  // rng     : { img_update_0[root = 0, img_0, img_1] : -2 <= img_0 <= 33 and -2 <= img_1 <= 33 }
  for (int i = 0; i < 1296; i++) {
    hw_uint<32> in_val;
    set_at<0*32, 32, 32>(in_val, 1*i + 0);
    in_pix << in_val << endl;
    img_update_0_read.write(in_val);
  }

  harris_mini_opt(img_update_0_read, harris_mini_update_0_write);

  for (int i = 0; i < 1024; i++) {
    hw_uint<32> actual = harris_mini_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*32, 31>();
    fout << actual_lane_0 << endl;
  }

  in_pix.close();
  fout.close();
  return 0;
}
