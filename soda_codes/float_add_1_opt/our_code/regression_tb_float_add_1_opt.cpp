#include <fstream>
#include "float_add_1_opt.h"
#include "clockwork_standard_compute_units.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_float_add_1_opt.txt");
  ofstream fout("regression_result_float_add_1_opt.txt");
  HWStream<hw_uint<32> > in_cc_update_0_read;
  HWStream<hw_uint<32> > float_add_1_update_0_write;


  // Loading input data
  // cmap    : { in_cc_update_0[root = 0, in_cc_0, in_cc_1] -> in[0, 0] : 0 <= in_cc_0 <= 31 and 0 <= in_cc_1 <= 31 }
  // read map: { in[0, 0] -> in_cc_update_0[root = 0, in_cc_0, in_cc_1] : 0 <= in_cc_0 <= 31 and 0 <= in_cc_1 <= 31 }
  // rng     : { in_cc_update_0[root = 0, in_cc_0, in_cc_1] : 0 <= in_cc_0 <= 31 and 0 <= in_cc_1 <= 31 }
  for (int i = 0; i < 1024; i++) {
    hw_uint<32> in_val;
    hw_uint<32> v = to_bits(((float) i));
    //set_at<0*32, 32, 32>(in_val, 1*i + 0);
    set_at<0*32, 32, 32>(in_val, v);
    in_pix << in_val << endl;
    in_cc_update_0_read.write(in_val);
  }

  float_add_1_opt(in_cc_update_0_read, float_add_1_update_0_write);

  for (int i = 0; i < 1024; i++) {
    hw_uint<32> actual = float_add_1_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*32, 31>();
#ifdef __INT_OUTPUT__
    //fout << (int) actual_lane_0 << endl;
    fout << to_float(actual_lane_0) << endl;
#else // __INT_OUTPUT__
    fout << actual_lane_0 << endl;
#endif // __INT_OUTPUT__
  }

  in_pix.close();
  fout.close();
  return 0;
}
