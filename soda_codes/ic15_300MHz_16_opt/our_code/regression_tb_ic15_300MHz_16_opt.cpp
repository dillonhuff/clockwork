#include <fstream>
#include "ic15_300MHz_16_opt.h"
#include "clockwork_standard_compute_units.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_ic15_300MHz_16_opt.txt");
  ofstream fout("regression_result_ic15_300MHz_16_opt.txt");
  HWStream<hw_uint<256> > in_update_0_read;
  HWStream<hw_uint<256> > ic15_300MHz_16_update_0_write;


  // Loading input data
  // cmap    : { in_update_0[root = 0, in_0, in_1] -> in_off_chip[0, 0] : -15 <= in_0 <= 134 and 0 <= in_1 <= 1094 }
  // read map: { in_off_chip[0, 0] -> in_update_0[root = 0, in_0, in_1] : -15 <= in_0 <= 134 and 0 <= in_1 <= 1094 }
  // rng     : { in_update_0[root = 0, in_0, in_1] : -15 <= in_0 <= 134 and 0 <= in_1 <= 1094 }
  for (int i = 0; i < 164250; i++) {
    hw_uint<256> in_val;
#ifdef __INT_OUTPUT__
    set_at<0*16, 256, 16>(in_val, (16*i + 0));
#elif __FLOAT_OUTPUT__
    set_at<0*16, 256, 16>(in_val, (to_bits((float)(16*i + 0))));
#else // No specified output type
    set_at<0*16, 256, 16>(in_val, (16*i + 0));
#endif
    in_pix << in_val << endl;
#ifdef __INT_OUTPUT__
    set_at<1*16, 256, 16>(in_val, (16*i + 1));
#elif __FLOAT_OUTPUT__
    set_at<1*16, 256, 16>(in_val, (to_bits((float)(16*i + 1))));
#else // No specified output type
    set_at<1*16, 256, 16>(in_val, (16*i + 1));
#endif
    in_pix << in_val << endl;
#ifdef __INT_OUTPUT__
    set_at<2*16, 256, 16>(in_val, (16*i + 2));
#elif __FLOAT_OUTPUT__
    set_at<2*16, 256, 16>(in_val, (to_bits((float)(16*i + 2))));
#else // No specified output type
    set_at<2*16, 256, 16>(in_val, (16*i + 2));
#endif
    in_pix << in_val << endl;
#ifdef __INT_OUTPUT__
    set_at<3*16, 256, 16>(in_val, (16*i + 3));
#elif __FLOAT_OUTPUT__
    set_at<3*16, 256, 16>(in_val, (to_bits((float)(16*i + 3))));
#else // No specified output type
    set_at<3*16, 256, 16>(in_val, (16*i + 3));
#endif
    in_pix << in_val << endl;
#ifdef __INT_OUTPUT__
    set_at<4*16, 256, 16>(in_val, (16*i + 4));
#elif __FLOAT_OUTPUT__
    set_at<4*16, 256, 16>(in_val, (to_bits((float)(16*i + 4))));
#else // No specified output type
    set_at<4*16, 256, 16>(in_val, (16*i + 4));
#endif
    in_pix << in_val << endl;
#ifdef __INT_OUTPUT__
    set_at<5*16, 256, 16>(in_val, (16*i + 5));
#elif __FLOAT_OUTPUT__
    set_at<5*16, 256, 16>(in_val, (to_bits((float)(16*i + 5))));
#else // No specified output type
    set_at<5*16, 256, 16>(in_val, (16*i + 5));
#endif
    in_pix << in_val << endl;
#ifdef __INT_OUTPUT__
    set_at<6*16, 256, 16>(in_val, (16*i + 6));
#elif __FLOAT_OUTPUT__
    set_at<6*16, 256, 16>(in_val, (to_bits((float)(16*i + 6))));
#else // No specified output type
    set_at<6*16, 256, 16>(in_val, (16*i + 6));
#endif
    in_pix << in_val << endl;
#ifdef __INT_OUTPUT__
    set_at<7*16, 256, 16>(in_val, (16*i + 7));
#elif __FLOAT_OUTPUT__
    set_at<7*16, 256, 16>(in_val, (to_bits((float)(16*i + 7))));
#else // No specified output type
    set_at<7*16, 256, 16>(in_val, (16*i + 7));
#endif
    in_pix << in_val << endl;
#ifdef __INT_OUTPUT__
    set_at<8*16, 256, 16>(in_val, (16*i + 8));
#elif __FLOAT_OUTPUT__
    set_at<8*16, 256, 16>(in_val, (to_bits((float)(16*i + 8))));
#else // No specified output type
    set_at<8*16, 256, 16>(in_val, (16*i + 8));
#endif
    in_pix << in_val << endl;
#ifdef __INT_OUTPUT__
    set_at<9*16, 256, 16>(in_val, (16*i + 9));
#elif __FLOAT_OUTPUT__
    set_at<9*16, 256, 16>(in_val, (to_bits((float)(16*i + 9))));
#else // No specified output type
    set_at<9*16, 256, 16>(in_val, (16*i + 9));
#endif
    in_pix << in_val << endl;
#ifdef __INT_OUTPUT__
    set_at<10*16, 256, 16>(in_val, (16*i + 10));
#elif __FLOAT_OUTPUT__
    set_at<10*16, 256, 16>(in_val, (to_bits((float)(16*i + 10))));
#else // No specified output type
    set_at<10*16, 256, 16>(in_val, (16*i + 10));
#endif
    in_pix << in_val << endl;
#ifdef __INT_OUTPUT__
    set_at<11*16, 256, 16>(in_val, (16*i + 11));
#elif __FLOAT_OUTPUT__
    set_at<11*16, 256, 16>(in_val, (to_bits((float)(16*i + 11))));
#else // No specified output type
    set_at<11*16, 256, 16>(in_val, (16*i + 11));
#endif
    in_pix << in_val << endl;
#ifdef __INT_OUTPUT__
    set_at<12*16, 256, 16>(in_val, (16*i + 12));
#elif __FLOAT_OUTPUT__
    set_at<12*16, 256, 16>(in_val, (to_bits((float)(16*i + 12))));
#else // No specified output type
    set_at<12*16, 256, 16>(in_val, (16*i + 12));
#endif
    in_pix << in_val << endl;
#ifdef __INT_OUTPUT__
    set_at<13*16, 256, 16>(in_val, (16*i + 13));
#elif __FLOAT_OUTPUT__
    set_at<13*16, 256, 16>(in_val, (to_bits((float)(16*i + 13))));
#else // No specified output type
    set_at<13*16, 256, 16>(in_val, (16*i + 13));
#endif
    in_pix << in_val << endl;
#ifdef __INT_OUTPUT__
    set_at<14*16, 256, 16>(in_val, (16*i + 14));
#elif __FLOAT_OUTPUT__
    set_at<14*16, 256, 16>(in_val, (to_bits((float)(16*i + 14))));
#else // No specified output type
    set_at<14*16, 256, 16>(in_val, (16*i + 14));
#endif
    in_pix << in_val << endl;
#ifdef __INT_OUTPUT__
    set_at<15*16, 256, 16>(in_val, (16*i + 15));
#elif __FLOAT_OUTPUT__
    set_at<15*16, 256, 16>(in_val, (to_bits((float)(16*i + 15))));
#else // No specified output type
    set_at<15*16, 256, 16>(in_val, (16*i + 15));
#endif
    in_pix << in_val << endl;
    in_update_0_read.write(in_val);
  }

  ic15_300MHz_16_opt(in_update_0_read, ic15_300MHz_16_update_0_write);

  for (int i = 0; i < 129600; i++) {
    hw_uint<256> actual = ic15_300MHz_16_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*16, 15>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_0 << endl;
#elif __FLOAT_OUTPUT__
    fout << to_float(actual_lane_0) << endl;
#else // No specified output type
    fout << actual_lane_0 << endl;
#endif
    auto actual_lane_1 = actual.extract<1*16, 31>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_1 << endl;
#elif __FLOAT_OUTPUT__
    fout << to_float(actual_lane_1) << endl;
#else // No specified output type
    fout << actual_lane_1 << endl;
#endif
    auto actual_lane_2 = actual.extract<2*16, 47>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_2 << endl;
#elif __FLOAT_OUTPUT__
    fout << to_float(actual_lane_2) << endl;
#else // No specified output type
    fout << actual_lane_2 << endl;
#endif
    auto actual_lane_3 = actual.extract<3*16, 63>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_3 << endl;
#elif __FLOAT_OUTPUT__
    fout << to_float(actual_lane_3) << endl;
#else // No specified output type
    fout << actual_lane_3 << endl;
#endif
    auto actual_lane_4 = actual.extract<4*16, 79>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_4 << endl;
#elif __FLOAT_OUTPUT__
    fout << to_float(actual_lane_4) << endl;
#else // No specified output type
    fout << actual_lane_4 << endl;
#endif
    auto actual_lane_5 = actual.extract<5*16, 95>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_5 << endl;
#elif __FLOAT_OUTPUT__
    fout << to_float(actual_lane_5) << endl;
#else // No specified output type
    fout << actual_lane_5 << endl;
#endif
    auto actual_lane_6 = actual.extract<6*16, 111>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_6 << endl;
#elif __FLOAT_OUTPUT__
    fout << to_float(actual_lane_6) << endl;
#else // No specified output type
    fout << actual_lane_6 << endl;
#endif
    auto actual_lane_7 = actual.extract<7*16, 127>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_7 << endl;
#elif __FLOAT_OUTPUT__
    fout << to_float(actual_lane_7) << endl;
#else // No specified output type
    fout << actual_lane_7 << endl;
#endif
    auto actual_lane_8 = actual.extract<8*16, 143>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_8 << endl;
#elif __FLOAT_OUTPUT__
    fout << to_float(actual_lane_8) << endl;
#else // No specified output type
    fout << actual_lane_8 << endl;
#endif
    auto actual_lane_9 = actual.extract<9*16, 159>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_9 << endl;
#elif __FLOAT_OUTPUT__
    fout << to_float(actual_lane_9) << endl;
#else // No specified output type
    fout << actual_lane_9 << endl;
#endif
    auto actual_lane_10 = actual.extract<10*16, 175>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_10 << endl;
#elif __FLOAT_OUTPUT__
    fout << to_float(actual_lane_10) << endl;
#else // No specified output type
    fout << actual_lane_10 << endl;
#endif
    auto actual_lane_11 = actual.extract<11*16, 191>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_11 << endl;
#elif __FLOAT_OUTPUT__
    fout << to_float(actual_lane_11) << endl;
#else // No specified output type
    fout << actual_lane_11 << endl;
#endif
    auto actual_lane_12 = actual.extract<12*16, 207>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_12 << endl;
#elif __FLOAT_OUTPUT__
    fout << to_float(actual_lane_12) << endl;
#else // No specified output type
    fout << actual_lane_12 << endl;
#endif
    auto actual_lane_13 = actual.extract<13*16, 223>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_13 << endl;
#elif __FLOAT_OUTPUT__
    fout << to_float(actual_lane_13) << endl;
#else // No specified output type
    fout << actual_lane_13 << endl;
#endif
    auto actual_lane_14 = actual.extract<14*16, 239>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_14 << endl;
#elif __FLOAT_OUTPUT__
    fout << to_float(actual_lane_14) << endl;
#else // No specified output type
    fout << actual_lane_14 << endl;
#endif
    auto actual_lane_15 = actual.extract<15*16, 255>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_15 << endl;
#elif __FLOAT_OUTPUT__
    fout << to_float(actual_lane_15) << endl;
#else // No specified output type
    fout << actual_lane_15 << endl;
#endif
  }

  in_pix.close();
  fout.close();
  return 0;
}
