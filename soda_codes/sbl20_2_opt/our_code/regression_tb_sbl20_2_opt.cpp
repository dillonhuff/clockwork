#include <fstream>
#include "sbl20_2_opt.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_sbl20_2_opt.txt");
  ofstream fout("regression_result_sbl20_2_opt.txt");
  HWStream<hw_uint<32> > img_update_0_read;
  HWStream<hw_uint<32> > sbl20_2_update_0_write;


  // Loading input data
  // cmap    : { img_update_0[root = 0, img_0, img_1] -> off_chip_img[0, 0] : -1 <= img_0 <= 960 and -1 <= img_1 <= 1080 }
  // read map: { off_chip_img[0, 0] -> img_update_0[root = 0, img_0, img_1] : -1 <= img_0 <= 960 and -1 <= img_1 <= 1080 }
  // rng     : { img_update_0[root = 0, img_0, img_1] : -1 <= img_0 <= 960 and -1 <= img_1 <= 1080 }
  for (int i = 0; i < 1040884; i++) {
    hw_uint<32> in_val;
    set_at<0*16, 32, 16>(in_val, 2*i + 0);
    in_pix << in_val << endl;
    set_at<1*16, 32, 16>(in_val, 2*i + 1);
    in_pix << in_val << endl;
    img_update_0_read.write(in_val);
  }

  sbl20_2_opt(img_update_0_read, sbl20_2_update_0_write);

  for (int i = 0; i < 1036800; i++) {
    hw_uint<32> actual = sbl20_2_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*16, 15>();
    fout << actual_lane_0 << endl;
    auto actual_lane_1 = actual.extract<1*16, 31>();
    fout << actual_lane_1 << endl;
  }

  in_pix.close();
  fout.close();
  return 0;
}
