#include <fstream>
#include "sobel_unrolled_8_opt.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_sobel_unrolled_8_opt.txt");
  ofstream fout("regression_result_sobel_unrolled_8_opt.txt");
  HWStream<hw_uint<256> > img_update_0_read;
  HWStream<hw_uint<256> > sobel_unrolled_8_update_0_write;


  // Loading input data
  // cmap    : { img_update_0[root = 0, img_0, img_1] -> off_chip_img[0, 0] : -1 <= img_0 <= 240 and -1 <= img_1 <= 1080 }
  // read map: { off_chip_img[0, 0] -> img_update_0[root = 0, img_0, img_1] : -1 <= img_0 <= 240 and -1 <= img_1 <= 1080 }
  // rng     : { img_update_0[root = 0, img_0, img_1] : -1 <= img_0 <= 240 and -1 <= img_1 <= 1080 }
  for (int i = 0; i < 261844; i++) {
    hw_uint<256> in_val;
    set_at<0*32, 256, 32>(in_val, 8*i + 0);
    in_pix << in_val << endl;
    set_at<1*32, 256, 32>(in_val, 8*i + 1);
    in_pix << in_val << endl;
    set_at<2*32, 256, 32>(in_val, 8*i + 2);
    in_pix << in_val << endl;
    set_at<3*32, 256, 32>(in_val, 8*i + 3);
    in_pix << in_val << endl;
    set_at<4*32, 256, 32>(in_val, 8*i + 4);
    in_pix << in_val << endl;
    set_at<5*32, 256, 32>(in_val, 8*i + 5);
    in_pix << in_val << endl;
    set_at<6*32, 256, 32>(in_val, 8*i + 6);
    in_pix << in_val << endl;
    set_at<7*32, 256, 32>(in_val, 8*i + 7);
    in_pix << in_val << endl;
    img_update_0_read.write(in_val);
  }

  sobel_unrolled_8_opt(img_update_0_read, sobel_unrolled_8_update_0_write);

  for (int i = 0; i < 259200; i++) {
    hw_uint<256> actual = sobel_unrolled_8_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*32, 31>();
    fout << actual_lane_0 << endl;
    auto actual_lane_1 = actual.extract<1*32, 63>();
    fout << actual_lane_1 << endl;
    auto actual_lane_2 = actual.extract<2*32, 95>();
    fout << actual_lane_2 << endl;
    auto actual_lane_3 = actual.extract<3*32, 127>();
    fout << actual_lane_3 << endl;
    auto actual_lane_4 = actual.extract<4*32, 159>();
    fout << actual_lane_4 << endl;
    auto actual_lane_5 = actual.extract<5*32, 191>();
    fout << actual_lane_5 << endl;
    auto actual_lane_6 = actual.extract<6*32, 223>();
    fout << actual_lane_6 << endl;
    auto actual_lane_7 = actual.extract<7*32, 255>();
    fout << actual_lane_7 << endl;
  }

  in_pix.close();
  fout.close();
  return 0;
}
