#include <fstream>
#include "ef_cartoon_opt.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_ef_cartoon_opt.txt");
  ofstream fout("regression_result_ef_cartoon_opt.txt");
  HWStream<hw_uint<16> > in_update_0_read;
  HWStream<hw_uint<16> > ef_cartoon_update_0_write;


  // Loading input data
  // cmap    : { in_update_0[root = 0, in_0, in_1] -> in_off_chip[0, 0] : 0 <= in_0 <= 206 and 0 <= in_1 <= 206 }
  // read map: { in_off_chip[0, 0] -> in_update_0[root = 0, in_0, in_1] : 0 <= in_0 <= 206 and 0 <= in_1 <= 206 }
  // rng     : { in_update_0[root = 0, in_0, in_1] : 0 <= in_0 <= 206 and 0 <= in_1 <= 206 }
  for (int i = 0; i < 42849; i++) {
    hw_uint<16> in_val;
    set_at<0*16, 16, 16>(in_val, 1*i + 0);
    in_pix << in_val << endl;
    in_update_0_read.write(in_val);
  }

  ef_cartoon_opt(in_update_0_read, ef_cartoon_update_0_write);

  for (int i = 0; i < 40000; i++) {
    hw_uint<16> actual = ef_cartoon_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*16, 15>();
    fout << actual_lane_0 << endl;
  }

  in_pix.close();
  fout.close();
  return 0;
}
