#include <fstream>
#include "sobel_unrolled_1_opt.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_sobel_unrolled_1_opt.txt");
  ofstream fout("regression_result_sobel_unrolled_1_opt.txt");
  HWStream<hw_uint<32> > img_update_0_read;
  HWStream<hw_uint<32> > sobel_unrolled_1_update_0_write;


  // Loading input data
  // cmap    : { img_update_0[root = 0, img_0, img_1] -> off_chip_img[0, 0] : -1 <= img_0 <= 1920 and -1 <= img_1 <= 1080 }
  // read map: { off_chip_img[0, 0] -> img_update_0[root = 0, img_0, img_1] : -1 <= img_0 <= 1920 and -1 <= img_1 <= 1080 }
  // rng     : { img_update_0[root = 0, img_0, img_1] : -1 <= img_0 <= 1920 and -1 <= img_1 <= 1080 }
  for (int i = 0; i < 2079604; i++) {
    hw_uint<32> in_val;
    set_at<0*32, 32, 32>(in_val, 1*i + 0);
    in_pix << in_val << endl;
    img_update_0_read.write(in_val);
  }

  sobel_unrolled_1_opt(img_update_0_read, sobel_unrolled_1_update_0_write);

  for (int i = 0; i < 2073600; i++) {
    hw_uint<32> actual = sobel_unrolled_1_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*32, 31>();
    fout << actual_lane_0 << endl;
  }

  in_pix.close();
  fout.close();
  return 0;
}
