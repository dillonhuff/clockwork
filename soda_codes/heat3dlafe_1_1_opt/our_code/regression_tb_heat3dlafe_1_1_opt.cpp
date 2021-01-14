#include <fstream>
#include "heat3dlafe_1_1_opt.h"
#include "clockwork_standard_compute_units.h"

int main() {
  srand(234);
  ofstream in_pix("input_pixels_regression_result_heat3dlafe_1_1_opt.txt");
  ofstream fout("regression_result_heat3dlafe_1_1_opt.txt");
  HWStream<hw_uint<32> > in_cc_update_0_read;
  HWStream<hw_uint<32> > heat3dlafe_1_1_update_0_write;


  // Loading input data
  // cmap    : { in_cc_update_0[root = 0, in_cc_0, in_cc_1, in_cc_2] -> in[0, 0] : -1 <= in_cc_0 <= 128 and -1 <= in_cc_1 <= 128 and -1 <= in_cc_2 <= 32 }
  // read map: { in[0, 0] -> in_cc_update_0[root = 0, in_cc_0, in_cc_1, in_cc_2] : -1 <= in_cc_0 <= 128 and -1 <= in_cc_1 <= 128 and -1 <= in_cc_2 <= 32 }
  // rng     : { in_cc_update_0[root = 0, in_cc_0, in_cc_1, in_cc_2] : -1 <= in_cc_0 <= 128 and -1 <= in_cc_1 <= 128 and -1 <= in_cc_2 <= 32 }
  for (int i = 0; i < 574600; i++) {
    hw_uint<32> in_val;
#ifdef __INT_OUTPUT__
    set_at<0*32, 32, 32>(in_val, (1*i + 0));
#elif defined(__FLOAT_OUTPUT__)
    set_at<0*32, 32, 32>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<0*32, 32, 32>(in_val, (1*i + 0));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
    in_cc_update_0_read.write(in_val);
  }

  heat3dlafe_1_1_opt(in_cc_update_0_read, heat3dlafe_1_1_update_0_write);

  for (int i = 0; i < 524288; i++) {
    hw_uint<32> actual = heat3dlafe_1_1_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*32, 31>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_0 << endl;
#elif defined(__FLOAT_OUTPUT__)
    fout << to_float(actual_lane_0) << endl;
#else // No specified output type
    fout << actual_lane_0 << endl;
#endif
  }

  in_pix.close();
  fout.close();
  return 0;
}
