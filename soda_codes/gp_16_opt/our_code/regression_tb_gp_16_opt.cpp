#include <fstream>
#include "gp_16_opt.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_gp_16_opt.txt");
  ofstream fout("regression_result_gp_16_opt.txt");
  HWStream<hw_uint<256> > in_update_0_read;
  HWStream<hw_uint<16> > gp_16_update_0_write;


  // Loading input data
  // cmap    : { in_update_0[root = 0, in_0, in_1] -> in_off_chip[0, 0] : 0 <= in_0 <= 7 and 0 <= in_1 <= 78 }
  // read map: { in_off_chip[0, 0] -> in_update_0[root = 0, in_0, in_1] : 0 <= in_0 <= 7 and 0 <= in_1 <= 78 }
  // rng     : { in_update_0[root = 0, in_0, in_1] : 0 <= in_0 <= 7 and 0 <= in_1 <= 78 }
  for (int i = 0; i < 632; i++) {
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
    in_update_0_read.write(in_val);
  }

  gp_16_opt(in_update_0_read, gp_16_update_0_write);

  for (int i = 0; i < 16; i++) {
    hw_uint<16> actual = gp_16_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*16, 15>();
    fout << actual_lane_0 << endl;
  }

  in_pix.close();
  fout.close();
  return 0;
}
