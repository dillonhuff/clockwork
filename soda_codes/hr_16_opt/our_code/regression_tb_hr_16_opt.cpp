#include <fstream>
#include "hr_16_opt.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_hr_16_opt.txt");
  ofstream fout("regression_result_hr_16_opt.txt");
  HWStream<hw_uint<512> > img_update_0_read;
  HWStream<hw_uint<512> > hr_16_update_0_write;


  // Loading input data
  // cmap    : { img_update_0[root = 0, img_0, img_1] -> img_oc[0, 0] : -2 <= img_0 <= 121 and -2 <= img_1 <= 1081 }
  // read map: { img_oc[0, 0] -> img_update_0[root = 0, img_0, img_1] : -2 <= img_0 <= 121 and -2 <= img_1 <= 1081 }
  // rng     : { img_update_0[root = 0, img_0, img_1] : -2 <= img_0 <= 121 and -2 <= img_1 <= 1081 }
  for (int i = 0; i < 134416; i++) {
    hw_uint<512> in_val;
    set_at<0*32, 512, 32>(in_val, 16*i + 0);
    in_pix << in_val << endl;
    set_at<1*32, 512, 32>(in_val, 16*i + 1);
    in_pix << in_val << endl;
    set_at<2*32, 512, 32>(in_val, 16*i + 2);
    in_pix << in_val << endl;
    set_at<3*32, 512, 32>(in_val, 16*i + 3);
    in_pix << in_val << endl;
    set_at<4*32, 512, 32>(in_val, 16*i + 4);
    in_pix << in_val << endl;
    set_at<5*32, 512, 32>(in_val, 16*i + 5);
    in_pix << in_val << endl;
    set_at<6*32, 512, 32>(in_val, 16*i + 6);
    in_pix << in_val << endl;
    set_at<7*32, 512, 32>(in_val, 16*i + 7);
    in_pix << in_val << endl;
    set_at<8*32, 512, 32>(in_val, 16*i + 8);
    in_pix << in_val << endl;
    set_at<9*32, 512, 32>(in_val, 16*i + 9);
    in_pix << in_val << endl;
    set_at<10*32, 512, 32>(in_val, 16*i + 10);
    in_pix << in_val << endl;
    set_at<11*32, 512, 32>(in_val, 16*i + 11);
    in_pix << in_val << endl;
    set_at<12*32, 512, 32>(in_val, 16*i + 12);
    in_pix << in_val << endl;
    set_at<13*32, 512, 32>(in_val, 16*i + 13);
    in_pix << in_val << endl;
    set_at<14*32, 512, 32>(in_val, 16*i + 14);
    in_pix << in_val << endl;
    set_at<15*32, 512, 32>(in_val, 16*i + 15);
    in_pix << in_val << endl;
    img_update_0_read.write(in_val);
  }

  hr_16_opt(img_update_0_read, hr_16_update_0_write);

  for (int i = 0; i < 129600; i++) {
    hw_uint<512> actual = hr_16_update_0_write.read();
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
    auto actual_lane_8 = actual.extract<8*32, 287>();
    fout << actual_lane_8 << endl;
    auto actual_lane_9 = actual.extract<9*32, 319>();
    fout << actual_lane_9 << endl;
    auto actual_lane_10 = actual.extract<10*32, 351>();
    fout << actual_lane_10 << endl;
    auto actual_lane_11 = actual.extract<11*32, 383>();
    fout << actual_lane_11 << endl;
    auto actual_lane_12 = actual.extract<12*32, 415>();
    fout << actual_lane_12 << endl;
    auto actual_lane_13 = actual.extract<13*32, 447>();
    fout << actual_lane_13 << endl;
    auto actual_lane_14 = actual.extract<14*32, 479>();
    fout << actual_lane_14 << endl;
    auto actual_lane_15 = actual.extract<15*32, 511>();
    fout << actual_lane_15 << endl;
  }

  in_pix.close();
  fout.close();
  return 0;
}
