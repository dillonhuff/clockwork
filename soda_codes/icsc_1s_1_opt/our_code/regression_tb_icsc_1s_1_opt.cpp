#include <fstream>
#include "icsc_1s_1_opt.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_icsc_1s_1_opt.txt");
  ofstream fout("regression_result_icsc_1s_1_opt.txt");
  HWStream<hw_uint<16> > in_update_0_read;
  HWStream<hw_uint<16> > icsc_1s_1_update_0_write;


  // Loading input data
  // cmap    : { in_update_0[root = 0, in_0, in_1] -> in_off_chip[0, 0] : 0 <= in_0 <= 1919 and 0 <= in_1 <= 1079 }
  // read map: { in_off_chip[0, 0] -> in_update_0[root = 0, in_0, in_1] : 0 <= in_0 <= 1919 and 0 <= in_1 <= 1079 }
  // rng     : { in_update_0[root = 0, in_0, in_1] : 0 <= in_0 <= 1919 and 0 <= in_1 <= 1079 }
  for (int i = 0; i < 2073600; i++) {
    hw_uint<16> in_val;
    set_at<0*16, 16, 16>(in_val, 1*i + 0);
    in_pix << in_val << endl;
    in_update_0_read.write(in_val);
  }

  icsc_1s_1_opt(in_update_0_read, icsc_1s_1_update_0_write);

  for (int i = 0; i < 2073600; i++) {
    hw_uint<16> actual = icsc_1s_1_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*16, 15>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_0 << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_0 << endl;
#endif // __INT_OUTPUT__
  }

  in_pix.close();
  fout.close();
  return 0;
}
