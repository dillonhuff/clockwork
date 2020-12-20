#include <fstream>
#include "gp64x64_32_opt.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_gp64x64_32_opt.txt");
  ofstream fout("regression_result_gp64x64_32_opt.txt");
  HWStream<hw_uint<512> > in_update_0_read;
  HWStream<hw_uint<32> > gp64x64_32_update_0_write;


  // Loading input data
  // cmap    : { in_update_0[root = 0, in_0, in_1] -> in_off_chip[0, 0] : 0 <= in_0 <= 35 and 0 <= in_1 <= 1038 }
  // read map: { in_off_chip[0, 0] -> in_update_0[root = 0, in_0, in_1] : 0 <= in_0 <= 35 and 0 <= in_1 <= 1038 }
  // rng     : { in_update_0[root = 0, in_0, in_1] : 0 <= in_0 <= 35 and 0 <= in_1 <= 1038 }
  for (int i = 0; i < 37404; i++) {
    hw_uint<512> in_val;
    set_at<0*16, 512, 16>(in_val, 32*i + 0);
    in_pix << in_val << endl;
    set_at<1*16, 512, 16>(in_val, 32*i + 1);
    in_pix << in_val << endl;
    set_at<2*16, 512, 16>(in_val, 32*i + 2);
    in_pix << in_val << endl;
    set_at<3*16, 512, 16>(in_val, 32*i + 3);
    in_pix << in_val << endl;
    set_at<4*16, 512, 16>(in_val, 32*i + 4);
    in_pix << in_val << endl;
    set_at<5*16, 512, 16>(in_val, 32*i + 5);
    in_pix << in_val << endl;
    set_at<6*16, 512, 16>(in_val, 32*i + 6);
    in_pix << in_val << endl;
    set_at<7*16, 512, 16>(in_val, 32*i + 7);
    in_pix << in_val << endl;
    set_at<8*16, 512, 16>(in_val, 32*i + 8);
    in_pix << in_val << endl;
    set_at<9*16, 512, 16>(in_val, 32*i + 9);
    in_pix << in_val << endl;
    set_at<10*16, 512, 16>(in_val, 32*i + 10);
    in_pix << in_val << endl;
    set_at<11*16, 512, 16>(in_val, 32*i + 11);
    in_pix << in_val << endl;
    set_at<12*16, 512, 16>(in_val, 32*i + 12);
    in_pix << in_val << endl;
    set_at<13*16, 512, 16>(in_val, 32*i + 13);
    in_pix << in_val << endl;
    set_at<14*16, 512, 16>(in_val, 32*i + 14);
    in_pix << in_val << endl;
    set_at<15*16, 512, 16>(in_val, 32*i + 15);
    in_pix << in_val << endl;
    set_at<16*16, 512, 16>(in_val, 32*i + 16);
    in_pix << in_val << endl;
    set_at<17*16, 512, 16>(in_val, 32*i + 17);
    in_pix << in_val << endl;
    set_at<18*16, 512, 16>(in_val, 32*i + 18);
    in_pix << in_val << endl;
    set_at<19*16, 512, 16>(in_val, 32*i + 19);
    in_pix << in_val << endl;
    set_at<20*16, 512, 16>(in_val, 32*i + 20);
    in_pix << in_val << endl;
    set_at<21*16, 512, 16>(in_val, 32*i + 21);
    in_pix << in_val << endl;
    set_at<22*16, 512, 16>(in_val, 32*i + 22);
    in_pix << in_val << endl;
    set_at<23*16, 512, 16>(in_val, 32*i + 23);
    in_pix << in_val << endl;
    set_at<24*16, 512, 16>(in_val, 32*i + 24);
    in_pix << in_val << endl;
    set_at<25*16, 512, 16>(in_val, 32*i + 25);
    in_pix << in_val << endl;
    set_at<26*16, 512, 16>(in_val, 32*i + 26);
    in_pix << in_val << endl;
    set_at<27*16, 512, 16>(in_val, 32*i + 27);
    in_pix << in_val << endl;
    set_at<28*16, 512, 16>(in_val, 32*i + 28);
    in_pix << in_val << endl;
    set_at<29*16, 512, 16>(in_val, 32*i + 29);
    in_pix << in_val << endl;
    set_at<30*16, 512, 16>(in_val, 32*i + 30);
    in_pix << in_val << endl;
    set_at<31*16, 512, 16>(in_val, 32*i + 31);
    in_pix << in_val << endl;
    in_update_0_read.write(in_val);
  }

  gp64x64_32_opt(in_update_0_read, gp64x64_32_update_0_write);

  for (int i = 0; i < 2048; i++) {
    hw_uint<32> actual = gp64x64_32_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*16, 15>();
    fout << actual_lane_0 << endl;
    auto actual_lane_1 = actual.extract<1*16, 31>();
    fout << actual_lane_1 << endl;
  }

  in_pix.close();
  fout.close();
  return 0;
}
