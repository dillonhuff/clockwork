#include <fstream>
#include "h10_1_300MHz_4_opt.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_h10_1_300MHz_4_opt.txt");
  ofstream fout("regression_result_h10_1_300MHz_4_opt.txt");
  HWStream<hw_uint<128> > in_cc_update_0_read;
  HWStream<hw_uint<128> > h10_1_300MHz_4_update_0_write;


  // Loading input data
  // cmap    : { in_cc_update_0[root = 0, in_cc_0, in_cc_1] -> in[0, 0] : -10 <= in_cc_0 <= 265 and -10 <= in_cc_1 <= 1033 }
  // read map: { in[0, 0] -> in_cc_update_0[root = 0, in_cc_0, in_cc_1] : -10 <= in_cc_0 <= 265 and -10 <= in_cc_1 <= 1033 }
  // rng     : { in_cc_update_0[root = 0, in_cc_0, in_cc_1] : -10 <= in_cc_0 <= 265 and -10 <= in_cc_1 <= 1033 }
  for (int i = 0; i < 288144; i++) {
    hw_uint<128> in_val;
    set_at<0*32, 128, 32>(in_val, 4*i + 0);
    in_pix << in_val << endl;
    set_at<1*32, 128, 32>(in_val, 4*i + 1);
    in_pix << in_val << endl;
    set_at<2*32, 128, 32>(in_val, 4*i + 2);
    in_pix << in_val << endl;
    set_at<3*32, 128, 32>(in_val, 4*i + 3);
    in_pix << in_val << endl;
    in_cc_update_0_read.write(in_val);
  }

  h10_1_300MHz_4_opt(in_cc_update_0_read, h10_1_300MHz_4_update_0_write);

  for (int i = 0; i < 262144; i++) {
    hw_uint<128> actual = h10_1_300MHz_4_update_0_write.read();
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
  }

  in_pix.close();
  fout.close();
  return 0;
}
