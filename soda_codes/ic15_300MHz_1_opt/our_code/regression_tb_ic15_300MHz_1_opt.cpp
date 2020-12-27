#include <fstream>
#include "ic15_300MHz_1_opt.h"
#include "clockwork_standard_compute_units.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_ic15_300MHz_1_opt.txt");
  ofstream fout("regression_result_ic15_300MHz_1_opt.txt");
  HWStream<hw_uint<16> > in_update_0_read;
  HWStream<hw_uint<16> > ic15_300MHz_1_update_0_write;


  // Loading input data
  // cmap    : { in_update_0[root = 0, in_0, in_1] -> in_off_chip[0, 0] : -15 <= in_0 <= 1934 and 0 <= in_1 <= 1094 }
  // read map: { in_off_chip[0, 0] -> in_update_0[root = 0, in_0, in_1] : -15 <= in_0 <= 1934 and 0 <= in_1 <= 1094 }
  // rng     : { in_update_0[root = 0, in_0, in_1] : -15 <= in_0 <= 1934 and 0 <= in_1 <= 1094 }
  for (int i = 0; i < 2135250; i++) {
    hw_uint<16> in_val;
#ifdef __INT_OUTPUT__
    set_at<0*16, 16, 16>(in_val, (1*i + 0));
#elif __FLOAT_OUTPUT__
    set_at<0*16, 16, 16>(in_val, (to_bits((float)(1*i + 0))));
#else // No specified output type
    set_at<0*16, 16, 16>(in_val, (1*i + 0));
#endif
    in_pix << in_val << endl;
    in_update_0_read.write(in_val);
  }

  ic15_300MHz_1_opt(in_update_0_read, ic15_300MHz_1_update_0_write);

  for (int i = 0; i < 2073600; i++) {
    hw_uint<16> actual = ic15_300MHz_1_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*16, 15>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_0 << endl;
#elif __FLOAT_OUTPUT__
    fout << to_float(actual_lane_0) << endl;
#else // No specified output type
    fout << actual_lane_0 << endl;
#endif
  }

  in_pix.close();
  fout.close();
  return 0;
}
