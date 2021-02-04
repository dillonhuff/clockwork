#include <fstream>
#include "sbl_dlb_32_opt.h"

int main() {
  srand(234);
  ofstream fout("regression_result_sbl_dlb_32_opt.txt");
  HWStream<hw_uint<16 > > off_chip_img;
  HWStream<hw_uint<16 > > sbl_dlb_32;


  // Loading input data
  srand(1);
  // cmap    : { img_update_0[root = 0, img_0, img_1] -> off_chip_img[img_1, img_0] : -1 <= img_0 <= 4096 and -1 <= img_1 <= 4096 }
  // read map: { off_chip_img[i0, i1] -> img_update_0[root = 0, img_0 = i1, img_1 = i0] : -1 <= i0 <= 4096 and -1 <= i1 <= 4096 }
  // rng     : { img_update_0[root = 0, img_0, img_1] : -1 <= img_0 <= 4096 and -1 <= img_1 <= 4096 }
  // rng card: { 16793604 }
  for (int i = 0; i < 16793604; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    off_chip_img.write(value);
  }

  sbl_dlb_32_opt(off_chip_img, sbl_dlb_32);
  for (int i = 0; i < 16777216; i++) {
    auto actual = sbl_dlb_32.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  return 0;
}
