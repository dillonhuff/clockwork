#include <fstream>
#include "h10_1_300MHz_2_opt.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_h10_1_300MHz_2_opt.txt");
  ofstream fout("regression_result_h10_1_300MHz_2_opt.txt");
  HWStream<hw_uint<64> > in_cc_update_0_read;
  HWStream<hw_uint<64> > h10_1_300MHz_2_update_0_write;


  // Loading input data
  // cmap    : { in_cc_update_0[root = 0, in_cc_0, in_cc_1] -> in[0, 0] : -10 <= in_cc_0 <= 521 and -10 <= in_cc_1 <= 1033 }
  // read map: { in[0, 0] -> in_cc_update_0[root = 0, in_cc_0, in_cc_1] : -10 <= in_cc_0 <= 521 and -10 <= in_cc_1 <= 1033 }
  // rng     : { in_cc_update_0[root = 0, in_cc_0, in_cc_1] : -10 <= in_cc_0 <= 521 and -10 <= in_cc_1 <= 1033 }
  for (int i = 0; i < 555408; i++) {
    hw_uint<64> in_val;
    set_at<0*32, 64, 32>(in_val, 2*i + 0);
    in_pix << in_val << endl;
    set_at<1*32, 64, 32>(in_val, 2*i + 1);
    in_pix << in_val << endl;
    in_cc_update_0_read.write(in_val);
  }

  h10_1_300MHz_2_opt(in_cc_update_0_read, h10_1_300MHz_2_update_0_write);

  for (int i = 0; i < 524288; i++) {
    hw_uint<64> actual = h10_1_300MHz_2_update_0_write.read();
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
  }

  in_pix.close();
  fout.close();
  return 0;
}
