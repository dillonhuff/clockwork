#include <fstream>
#include "h3_300MHz_1_opt.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_h3_300MHz_1_opt.txt");
  ofstream fout("regression_result_h3_300MHz_1_opt.txt");
  HWStream<hw_uint<32> > h3_300MHz_1_update_0_read;
  HWStream<hw_uint<32> > h3_300MHz_1_update_0_write;


  // Loading input data
  // cmap    : { h3_300MHz_1_update_0[root = 0, h3_300MHz_1_0, h3_300MHz_1_1] -> in[0, 0] : 0 <= h3_300MHz_1_0 <= 63 and 0 <= h3_300MHz_1_1 <= 63 }
  // read map: { in[0, 0] -> h3_300MHz_1_update_0[root = 0, h3_300MHz_1_0, h3_300MHz_1_1] : 0 <= h3_300MHz_1_0 <= 63 and 0 <= h3_300MHz_1_1 <= 63 }
  // rng     : { h3_300MHz_1_update_0[root = 0, h3_300MHz_1_0, h3_300MHz_1_1] : 0 <= h3_300MHz_1_0 <= 63 and 0 <= h3_300MHz_1_1 <= 63 }
  for (int i = 0; i < 4096; i++) {
    hw_uint<32> in_val;
    set_at<0*32, 32, 32>(in_val, 1*i + 0);
    in_pix << in_val << endl;
    h3_300MHz_1_update_0_read.write(in_val);
  }

  h3_300MHz_1_opt(h3_300MHz_1_update_0_read, h3_300MHz_1_update_0_write);

  for (int i = 0; i < 4096; i++) {
    hw_uint<32> actual = h3_300MHz_1_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*32, 31>();
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
