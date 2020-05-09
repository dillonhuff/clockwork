#include <fstream>
#include "sbl_16_opt.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_sbl_16_opt.txt");
  ofstream fout("regression_result_sbl_16_opt.txt");
  HWStream<hw_uint<256> > img_update_0_read;
  HWStream<hw_uint<256> > sbl_16_update_0_write;


  // Loading input data
  // cmap    : { img_update_0[root = 0, img_0, img_1] -> off_chip_img[0, 0] : -1 <= img_0 <= 120 and -1 <= img_1 <= 1080 }
  // read map: { off_chip_img[0, 0] -> img_update_0[root = 0, img_0, img_1] : -1 <= img_0 <= 120 and -1 <= img_1 <= 1080 }
  // rng     : { img_update_0[root = 0, img_0, img_1] : -1 <= img_0 <= 120 and -1 <= img_1 <= 1080 }
  for (int i = 0; i < 132004; i++) {
    hw_uint<256> in_val;
    set_at<0*16, 256, 16>(in_val, 16*i + 0);
    in_pix << in_val << endl;
    set_at<1*16, 256, 16>(in_val, 16*i + 1);
    in_pix << in_val << endl;
    set_at<2*16, 256, 16>(in_val, 16*i + 2);
    in_pix << in_val << endl;
    set_at<3*16, 256, 16>(in_val, 16*i + 3);
    in_pix << in_val << endl;
    set_at<4*16, 256, 16>(in_val, 16*i + 4);
    in_pix << in_val << endl;
    set_at<5*16, 256, 16>(in_val, 16*i + 5);
    in_pix << in_val << endl;
    set_at<6*16, 256, 16>(in_val, 16*i + 6);
    in_pix << in_val << endl;
    set_at<7*16, 256, 16>(in_val, 16*i + 7);
    in_pix << in_val << endl;
    set_at<8*16, 256, 16>(in_val, 16*i + 8);
    in_pix << in_val << endl;
    set_at<9*16, 256, 16>(in_val, 16*i + 9);
    in_pix << in_val << endl;
    set_at<10*16, 256, 16>(in_val, 16*i + 10);
    in_pix << in_val << endl;
    set_at<11*16, 256, 16>(in_val, 16*i + 11);
    in_pix << in_val << endl;
    set_at<12*16, 256, 16>(in_val, 16*i + 12);
    in_pix << in_val << endl;
    set_at<13*16, 256, 16>(in_val, 16*i + 13);
    in_pix << in_val << endl;
    set_at<14*16, 256, 16>(in_val, 16*i + 14);
    in_pix << in_val << endl;
    set_at<15*16, 256, 16>(in_val, 16*i + 15);
    in_pix << in_val << endl;
    img_update_0_read.write(in_val);
  }

  sbl_16_opt(img_update_0_read, sbl_16_update_0_write);

  for (int i = 0; i < 129600; i++) {
    hw_uint<256> actual = sbl_16_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*16, 15>();
    fout << actual_lane_0 << endl;
    auto actual_lane_1 = actual.extract<1*16, 31>();
    fout << actual_lane_1 << endl;
    auto actual_lane_2 = actual.extract<2*16, 47>();
    fout << actual_lane_2 << endl;
    auto actual_lane_3 = actual.extract<3*16, 63>();
    fout << actual_lane_3 << endl;
    auto actual_lane_4 = actual.extract<4*16, 79>();
    fout << actual_lane_4 << endl;
    auto actual_lane_5 = actual.extract<5*16, 95>();
    fout << actual_lane_5 << endl;
    auto actual_lane_6 = actual.extract<6*16, 111>();
    fout << actual_lane_6 << endl;
    auto actual_lane_7 = actual.extract<7*16, 127>();
    fout << actual_lane_7 << endl;
    auto actual_lane_8 = actual.extract<8*16, 143>();
    fout << actual_lane_8 << endl;
    auto actual_lane_9 = actual.extract<9*16, 159>();
    fout << actual_lane_9 << endl;
    auto actual_lane_10 = actual.extract<10*16, 175>();
    fout << actual_lane_10 << endl;
    auto actual_lane_11 = actual.extract<11*16, 191>();
    fout << actual_lane_11 << endl;
    auto actual_lane_12 = actual.extract<12*16, 207>();
    fout << actual_lane_12 << endl;
    auto actual_lane_13 = actual.extract<13*16, 223>();
    fout << actual_lane_13 << endl;
    auto actual_lane_14 = actual.extract<14*16, 239>();
    fout << actual_lane_14 << endl;
    auto actual_lane_15 = actual.extract<15*16, 255>();
    fout << actual_lane_15 << endl;
  }

  in_pix.close();
  fout.close();
  return 0;
}
