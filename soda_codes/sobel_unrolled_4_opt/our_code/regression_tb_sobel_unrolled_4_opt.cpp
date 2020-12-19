#include <fstream>
#include "sobel_unrolled_4_opt.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_sobel_unrolled_4_opt.txt");
  ofstream fout("regression_result_sobel_unrolled_4_opt.txt");
  HWStream<hw_uint<128> > img_update_0_read;
  HWStream<hw_uint<128> > sobel_unrolled_4_update_0_write;


  // Loading input data
  // cmap    : { img_update_0[root = 0, img_0, img_1] -> off_chip_img[0, 0] : -1 <= img_0 <= 480 and -1 <= img_1 <= 1080 }
  // read map: { off_chip_img[0, 0] -> img_update_0[root = 0, img_0, img_1] : -1 <= img_0 <= 480 and -1 <= img_1 <= 1080 }
  // rng     : { img_update_0[root = 0, img_0, img_1] : -1 <= img_0 <= 480 and -1 <= img_1 <= 1080 }
  for (int i = 0; i < 521524; i++) {
    hw_uint<128> in_val;
    set_at<0*32, 128, 32>(in_val, 4*i + 0);
    in_pix << in_val << endl;
    set_at<1*32, 128, 32>(in_val, 4*i + 1);
    in_pix << in_val << endl;
    set_at<2*32, 128, 32>(in_val, 4*i + 2);
    in_pix << in_val << endl;
    set_at<3*32, 128, 32>(in_val, 4*i + 3);
    in_pix << in_val << endl;
    img_update_0_read.write(in_val);
  }

  sobel_unrolled_4_opt(img_update_0_read, sobel_unrolled_4_update_0_write);

  for (int i = 0; i < 518400; i++) {
    hw_uint<128> actual = sobel_unrolled_4_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*32, 31>();
    fout << actual_lane_0 << endl;
    auto actual_lane_1 = actual.extract<1*32, 63>();
    fout << actual_lane_1 << endl;
    auto actual_lane_2 = actual.extract<2*32, 95>();
    fout << actual_lane_2 << endl;
    auto actual_lane_3 = actual.extract<3*32, 127>();
    fout << actual_lane_3 << endl;
  }

  in_pix.close();
  fout.close();
  return 0;
}
