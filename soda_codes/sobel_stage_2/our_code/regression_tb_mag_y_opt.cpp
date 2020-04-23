#include <fstream>
#include "mag_y_opt.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_mag_y_opt.txt");
  ofstream fout("regression_result_mag_y_opt.txt");
  HWStream<hw_uint<32> > img_update_0_read;
  HWStream<hw_uint<32> > mag_y_update_0_write;


  // Loading input data
  // cmap    : { img_update_0[root = 0, img_0, img_1] -> off_chip_img[0, 0] : -1 <= img_0 <= 32 and -1 <= img_1 <= 32 }
  // read map: { off_chip_img[0, 0] -> img_update_0[root = 0, img_0, img_1] : -1 <= img_0 <= 32 and -1 <= img_1 <= 32 }
  // rng     : { img_update_0[root = 0, img_0, img_1] : -1 <= img_0 <= 32 and -1 <= img_1 <= 32 }
  for (int i = 0; i < 1156; i++) {
    hw_uint<32> in_val;
    set_at<0*32, 32, 32>(in_val, 1*i + 0);
    in_pix << in_val << endl;
    img_update_0_read.write(in_val);
  }

  mag_y_opt(img_update_0_read, mag_y_update_0_write);

  for (int i = 0; i < 1024; i++) {
    hw_uint<32> actual = mag_y_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*32, 31>();
    fout << actual_lane_0 << endl;
  }

  in_pix.close();
  fout.close();
  return 0;
}
