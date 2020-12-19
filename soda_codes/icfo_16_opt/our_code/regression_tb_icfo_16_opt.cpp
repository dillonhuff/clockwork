#include <fstream>
#include "icfo_16_opt.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_icfo_16_opt.txt");
  ofstream fout("regression_result_icfo_16_opt.txt");
  HWStream<hw_uint<256> > in_update_0_read;
  HWStream<hw_uint<256> > icfo_16_update_0_write;


  // Loading input data
  // cmap    : { in_update_0[root = 0, in_0, in_1] -> in_off_chip[0, 0] : -5 <= in_0 <= 124 and -5 <= in_1 <= 1084 }
  // read map: { in_off_chip[0, 0] -> in_update_0[root = 0, in_0, in_1] : -5 <= in_0 <= 124 and -5 <= in_1 <= 1084 }
  // rng     : { in_update_0[root = 0, in_0, in_1] : -5 <= in_0 <= 124 and -5 <= in_1 <= 1084 }
  for (int i = 0; i < 141700; i++) {
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

  icfo_16_opt(in_update_0_read, icfo_16_update_0_write);

  for (int i = 0; i < 129600; i++) {
    hw_uint<256> actual = icfo_16_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*16, 15>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_0 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_0 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_1 = actual.extract<1*16, 31>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_1 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_1 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_2 = actual.extract<2*16, 47>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_2 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_2 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_3 = actual.extract<3*16, 63>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_3 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_3 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_4 = actual.extract<4*16, 79>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_4 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_4 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_5 = actual.extract<5*16, 95>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_5 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_5 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_6 = actual.extract<6*16, 111>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_6 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_6 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_7 = actual.extract<7*16, 127>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_7 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_7 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_8 = actual.extract<8*16, 143>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_8 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_8 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_9 = actual.extract<9*16, 159>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_9 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_9 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_10 = actual.extract<10*16, 175>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_10 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_10 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_11 = actual.extract<11*16, 191>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_11 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_11 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_12 = actual.extract<12*16, 207>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_12 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_12 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_13 = actual.extract<13*16, 223>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_13 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_13 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_14 = actual.extract<14*16, 239>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_14 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_14 << endl;
#endif // __INT_OUTPUT__
    auto actual_lane_15 = actual.extract<15*16, 255>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_15 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_15 << endl;
#endif // __INT_OUTPUT__
  }

  in_pix.close();
  fout.close();
  return 0;
}
