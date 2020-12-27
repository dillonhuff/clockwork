#include <fstream>
#include "heat2d_1_1_opt.h"
#include "clockwork_standard_compute_units.h"

int main() {
  srand(234);

  ofstream in_pix("input_pixels_regression_result_heat2d_1_1_opt.txt");
  ofstream fout("regression_result_heat2d_1_1_opt.txt");
  HWStream<hw_uint<32> > in_cc_update_0_read;
  HWStream<hw_uint<32> > heat2d_1_1_update_0_write;


  // Loading input data
  // cmap    : { in_cc_update_0[root = 0, in_cc_0, in_cc_1] -> in[0, 0] : -1 <= in_cc_0 <= 32 and -1 <= in_cc_1 <= 32 }
  // read map: { in[0, 0] -> in_cc_update_0[root = 0, in_cc_0, in_cc_1] : -1 <= in_cc_0 <= 32 and -1 <= in_cc_1 <= 32 }
  // rng     : { in_cc_update_0[root = 0, in_cc_0, in_cc_1] : -1 <= in_cc_0 <= 32 and -1 <= in_cc_1 <= 32 }
  for (int i = 0; i < 1156; i++) {
    hw_uint<32> in_val;
#ifdef __INT_OUTPUT__
    set_at<0*32, 32, 32>(in_val, (1*i + 0));
#elif __FLOAT_OUTPUT__
    //set_at<0*32, 32, 32>(in_val, (to_bits((float)(1*i + 0))));
    set_at<0*32, 32, 32>(in_val, (to_bits(
            static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
            //(float)(1*i + 0))));
      //(rand() % 256);
#else // No specified output type
    set_at<0*32, 32, 32>(in_val, (1*i + 0));
#endif
    in_pix << in_val << endl;
    in_cc_update_0_read.write(in_val);
  }

  heat2d_1_1_opt(in_cc_update_0_read, heat2d_1_1_update_0_write);

  for (int i = 0; i < 1024; i++) {
    hw_uint<32> actual = heat2d_1_1_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*32, 31>();
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
