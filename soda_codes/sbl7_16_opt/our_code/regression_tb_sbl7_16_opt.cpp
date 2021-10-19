#include <fstream>
#include "sbl7_16_opt.h"

int main() {
  srand(234);
  ofstream fout("regression_result_sbl7_16_opt.txt");
  HWStream<hw_uint<16 > > off_chip_img;
  HWStream<hw_uint<16 > > sbl7_16;


  // Loading input data
  srand(1);
  // cmap    : { img_update_0[root = 0, img_0, img_1] -> off_chip_img[img_1, img_0] : -1 <= img_0 <= 1080 and -1 <= img_1 <= 1920 }
  // read map: { off_chip_img[i0, i1] -> img_update_0[root = 0, img_0 = i1, img_1 = i0] : -1 <= i0 <= 1920 and -1 <= i1 <= 1080 }
  // rng     : { img_update_0[root = 0, img_0, img_1] : -1 <= img_0 <= 1080 and -1 <= img_1 <= 1920 }
  // rng card: { 2079604 }
  for (int i = 0; i < 2079604; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    off_chip_img.write(value);
  }

  sbl7_16_opt(off_chip_img, sbl7_16);
  for (int i = 0; i < 2073600; i++) {
    auto actual = sbl7_16.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  assert(off_chip_img.is_empty());
  assert(sbl7_16.is_empty());
  return 0;
}
