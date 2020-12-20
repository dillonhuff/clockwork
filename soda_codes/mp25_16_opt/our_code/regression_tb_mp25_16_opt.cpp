#include <fstream>
#include "mp25_16_opt.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_mp25_16_opt.txt");
  ofstream fout("regression_result_mp25_16_opt.txt");
  HWStream<hw_uint<512> > in_update_0_read;
  HWStream<hw_uint<256> > mp25_16_update_0_write;


  // Loading input data
  // cmap    : { in_update_0[root = 0, in_0, in_1, in_2] -> in_oc[0, 0] : 0 <= in_0 <= 7 and 0 <= in_1 <= 127 and 0 <= in_2 <= 63 }
  // read map: { in_oc[0, 0] -> in_update_0[root = 0, in_0, in_1, in_2] : 0 <= in_0 <= 7 and 0 <= in_1 <= 127 and 0 <= in_2 <= 63 }
  // rng     : { in_update_0[root = 0, in_0, in_1, in_2] : 0 <= in_0 <= 7 and 0 <= in_1 <= 127 and 0 <= in_2 <= 63 }
  for (int i = 0; i < 65536; i++) {
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
    in_update_0_read.write(in_val);
  }

  mp25_16_opt(in_update_0_read, mp25_16_update_0_write);

  for (int i = 0; i < 32768; i++) {
    hw_uint<256> actual = mp25_16_update_0_write.read();
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
