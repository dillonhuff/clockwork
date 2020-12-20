#include <fstream>
#include "mp25_32_opt.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_mp25_32_opt.txt");
  ofstream fout("regression_result_mp25_32_opt.txt");
  HWStream<hw_uint<1024> > in_update_0_read;
  HWStream<hw_uint<512> > mp25_32_update_0_write;


  // Loading input data
  // cmap    : { in_update_0[root = 0, in_0, in_1, in_2] -> in_oc[0, 0] : 0 <= in_0 <= 3 and 0 <= in_1 <= 127 and 0 <= in_2 <= 63 }
  // read map: { in_oc[0, 0] -> in_update_0[root = 0, in_0, in_1, in_2] : 0 <= in_0 <= 3 and 0 <= in_1 <= 127 and 0 <= in_2 <= 63 }
  // rng     : { in_update_0[root = 0, in_0, in_1, in_2] : 0 <= in_0 <= 3 and 0 <= in_1 <= 127 and 0 <= in_2 <= 63 }
  for (int i = 0; i < 32768; i++) {
    hw_uint<1024> in_val;
    set_at<0*32, 1024, 32>(in_val, 32*i + 0);
    in_pix << in_val << endl;
    set_at<1*32, 1024, 32>(in_val, 32*i + 1);
    in_pix << in_val << endl;
    set_at<2*32, 1024, 32>(in_val, 32*i + 2);
    in_pix << in_val << endl;
    set_at<3*32, 1024, 32>(in_val, 32*i + 3);
    in_pix << in_val << endl;
    set_at<4*32, 1024, 32>(in_val, 32*i + 4);
    in_pix << in_val << endl;
    set_at<5*32, 1024, 32>(in_val, 32*i + 5);
    in_pix << in_val << endl;
    set_at<6*32, 1024, 32>(in_val, 32*i + 6);
    in_pix << in_val << endl;
    set_at<7*32, 1024, 32>(in_val, 32*i + 7);
    in_pix << in_val << endl;
    set_at<8*32, 1024, 32>(in_val, 32*i + 8);
    in_pix << in_val << endl;
    set_at<9*32, 1024, 32>(in_val, 32*i + 9);
    in_pix << in_val << endl;
    set_at<10*32, 1024, 32>(in_val, 32*i + 10);
    in_pix << in_val << endl;
    set_at<11*32, 1024, 32>(in_val, 32*i + 11);
    in_pix << in_val << endl;
    set_at<12*32, 1024, 32>(in_val, 32*i + 12);
    in_pix << in_val << endl;
    set_at<13*32, 1024, 32>(in_val, 32*i + 13);
    in_pix << in_val << endl;
    set_at<14*32, 1024, 32>(in_val, 32*i + 14);
    in_pix << in_val << endl;
    set_at<15*32, 1024, 32>(in_val, 32*i + 15);
    in_pix << in_val << endl;
    set_at<16*32, 1024, 32>(in_val, 32*i + 16);
    in_pix << in_val << endl;
    set_at<17*32, 1024, 32>(in_val, 32*i + 17);
    in_pix << in_val << endl;
    set_at<18*32, 1024, 32>(in_val, 32*i + 18);
    in_pix << in_val << endl;
    set_at<19*32, 1024, 32>(in_val, 32*i + 19);
    in_pix << in_val << endl;
    set_at<20*32, 1024, 32>(in_val, 32*i + 20);
    in_pix << in_val << endl;
    set_at<21*32, 1024, 32>(in_val, 32*i + 21);
    in_pix << in_val << endl;
    set_at<22*32, 1024, 32>(in_val, 32*i + 22);
    in_pix << in_val << endl;
    set_at<23*32, 1024, 32>(in_val, 32*i + 23);
    in_pix << in_val << endl;
    set_at<24*32, 1024, 32>(in_val, 32*i + 24);
    in_pix << in_val << endl;
    set_at<25*32, 1024, 32>(in_val, 32*i + 25);
    in_pix << in_val << endl;
    set_at<26*32, 1024, 32>(in_val, 32*i + 26);
    in_pix << in_val << endl;
    set_at<27*32, 1024, 32>(in_val, 32*i + 27);
    in_pix << in_val << endl;
    set_at<28*32, 1024, 32>(in_val, 32*i + 28);
    in_pix << in_val << endl;
    set_at<29*32, 1024, 32>(in_val, 32*i + 29);
    in_pix << in_val << endl;
    set_at<30*32, 1024, 32>(in_val, 32*i + 30);
    in_pix << in_val << endl;
    set_at<31*32, 1024, 32>(in_val, 32*i + 31);
    in_pix << in_val << endl;
    in_update_0_read.write(in_val);
  }

  mp25_32_opt(in_update_0_read, mp25_32_update_0_write);

  for (int i = 0; i < 16384; i++) {
    hw_uint<512> actual = mp25_32_update_0_write.read();
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
