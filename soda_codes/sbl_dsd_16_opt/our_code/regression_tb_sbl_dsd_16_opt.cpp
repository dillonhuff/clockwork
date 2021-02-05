#include <fstream>
#include "sbl_dsd_16_opt.h"

int main() {
  srand(234);
  ofstream fout("regression_result_sbl_dsd_16_opt.txt");
  HWStream<hw_uint<16 > > off_chip_img;
  HWStream<hw_uint<16 > > sbl_dsd_16;


  // Loading input data
  srand(1);
  // cmap    : { img_update_0[root = 0, img_0, img_1] -> off_chip_img[img_1, img_0] : -1 <= img_0 <= 1080 and -1 <= img_1 <= 1080 }
  // read map: { off_chip_img[i0, i1] -> img_update_0[root = 0, img_0 = i1, img_1 = i0] : -1 <= i0 <= 1080 and -1 <= i1 <= 1080 }
  // rng     : { img_update_0[root = 0, img_0, img_1] : -1 <= img_0 <= 1080 and -1 <= img_1 <= 1080 }
  // rng card: { 1170724 }
  for (int i = 0; i < 1170724; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    off_chip_img.write(value);
  }

  sbl_dsd_16_opt(off_chip_img, sbl_dsd_16);
  for (int i = 0; i < 1166400; i++) {
    auto actual = sbl_dsd_16.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  return 0;
}
