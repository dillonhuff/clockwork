#include <fstream>
#include "h10_32_300MHz_32_opt.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_h10_32_300MHz_32_opt.txt");
  ofstream fout("regression_result_h10_32_300MHz_32_opt.txt");
  HWStream<hw_uint<1024> > in_cc_update_0_read;
  HWStream<hw_uint<1024> > h10_32_300MHz_32_update_0_write;


  // Loading input data
  // cmap    : { in_cc_update_0[root = 0, in_cc_0, in_cc_1] -> in[0, 0] : -10 <= in_cc_0 <= 41 and -10 <= in_cc_1 <= 1033 }
  // read map: { in[0, 0] -> in_cc_update_0[root = 0, in_cc_0, in_cc_1] : -10 <= in_cc_0 <= 41 and -10 <= in_cc_1 <= 1033 }
  // rng     : { in_cc_update_0[root = 0, in_cc_0, in_cc_1] : -10 <= in_cc_0 <= 41 and -10 <= in_cc_1 <= 1033 }
  for (int i = 0; i < 54288; i++) {
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
    in_cc_update_0_read.write(in_val);
  }

  h10_32_300MHz_32_opt(in_cc_update_0_read, h10_32_300MHz_32_update_0_write);

  for (int i = 0; i < 32768; i++) {
    hw_uint<1024> actual = h10_32_300MHz_32_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*32, 31>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_0 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_0 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_1 = actual.extract<1*32, 63>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_1 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_1 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_2 = actual.extract<2*32, 95>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_2 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_2 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_3 = actual.extract<3*32, 127>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_3 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_3 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_4 = actual.extract<4*32, 159>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_4 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_4 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_5 = actual.extract<5*32, 191>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_5 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_5 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_6 = actual.extract<6*32, 223>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_6 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_6 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_7 = actual.extract<7*32, 255>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_7 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_7 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_8 = actual.extract<8*32, 287>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_8 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_8 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_9 = actual.extract<9*32, 319>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_9 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_9 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_10 = actual.extract<10*32, 351>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_10 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_10 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_11 = actual.extract<11*32, 383>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_11 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_11 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_12 = actual.extract<12*32, 415>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_12 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_12 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_13 = actual.extract<13*32, 447>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_13 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_13 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_14 = actual.extract<14*32, 479>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_14 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_14 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_15 = actual.extract<15*32, 511>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_15 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_15 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_16 = actual.extract<16*32, 543>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_16 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_16 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_17 = actual.extract<17*32, 575>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_17 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_17 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_18 = actual.extract<18*32, 607>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_18 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_18 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_19 = actual.extract<19*32, 639>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_19 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_19 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_20 = actual.extract<20*32, 671>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_20 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_20 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_21 = actual.extract<21*32, 703>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_21 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_21 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_22 = actual.extract<22*32, 735>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_22 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_22 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_23 = actual.extract<23*32, 767>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_23 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_23 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_24 = actual.extract<24*32, 799>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_24 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_24 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_25 = actual.extract<25*32, 831>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_25 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_25 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_26 = actual.extract<26*32, 863>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_26 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_26 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_27 = actual.extract<27*32, 895>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_27 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_27 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_28 = actual.extract<28*32, 927>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_28 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_28 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_29 = actual.extract<29*32, 959>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_29 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_29 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_30 = actual.extract<30*32, 991>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_30 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_30 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_31 = actual.extract<31*32, 1023>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_31 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_31 << endl;
#endif // __INT_OUTPUT__
  }

  in_pix.close();
  fout.close();
  return 0;
}
