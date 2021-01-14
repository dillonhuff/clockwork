#include <fstream>
#include "ef_4_opt.h"
#include "clockwork_standard_compute_units.h"

int main() {
  srand(234);
  ofstream in_pix("input_pixels_regression_result_ef_4_opt.txt");
  ofstream fout("regression_result_ef_4_opt.txt");
  HWStream<hw_uint<64> > in_update_0_read;
  HWStream<hw_uint<64> > ef_4_update_0_write;


  // Loading input data
  // cmap    : { in_update_0[root = 0, in_0, in_1] -> in_off_chip[0, 0] : -3 <= in_0 <= 271 and -7 <= in_1 <= 1919 }
  // read map: { in_off_chip[0, 0] -> in_update_0[root = 0, in_0, in_1] : -3 <= in_0 <= 271 and -7 <= in_1 <= 1919 }
  // rng     : { in_update_0[root = 0, in_0, in_1] : -3 <= in_0 <= 271 and -7 <= in_1 <= 1919 }
  for (int i = 0; i < 529925; i++) {
    hw_uint<64> in_val;
#ifdef __INT_OUTPUT__
    set_at<0*16, 64, 16>(in_val, (4*i + 0));
#elif defined(__FLOAT_OUTPUT__)
    set_at<0*16, 64, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<0*16, 64, 16>(in_val, (4*i + 0));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<1*16, 64, 16>(in_val, (4*i + 1));
#elif defined(__FLOAT_OUTPUT__)
    set_at<1*16, 64, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<1*16, 64, 16>(in_val, (4*i + 1));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<2*16, 64, 16>(in_val, (4*i + 2));
#elif defined(__FLOAT_OUTPUT__)
    set_at<2*16, 64, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<2*16, 64, 16>(in_val, (4*i + 2));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<3*16, 64, 16>(in_val, (4*i + 3));
#elif defined(__FLOAT_OUTPUT__)
    set_at<3*16, 64, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<3*16, 64, 16>(in_val, (4*i + 3));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
    in_update_0_read.write(in_val);
  }

  ef_4_opt(in_update_0_read, ef_4_update_0_write);

  for (int i = 0; i < 518400; i++) {
    hw_uint<64> actual = ef_4_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*16, 15>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_0 << endl;
#elif defined(__FLOAT_OUTPUT__)
    fout << to_float(actual_lane_0) << endl;
#else // No specified output type
    fout << actual_lane_0 << endl;
#endif
    auto actual_lane_1 = actual.extract<1*16, 31>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_1 << endl;
#elif defined(__FLOAT_OUTPUT__)
    fout << to_float(actual_lane_1) << endl;
#else // No specified output type
    fout << actual_lane_1 << endl;
#endif
    auto actual_lane_2 = actual.extract<2*16, 47>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_2 << endl;
#elif defined(__FLOAT_OUTPUT__)
    fout << to_float(actual_lane_2) << endl;
#else // No specified output type
    fout << actual_lane_2 << endl;
#endif
    auto actual_lane_3 = actual.extract<3*16, 63>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_3 << endl;
#elif defined(__FLOAT_OUTPUT__)
    fout << to_float(actual_lane_3) << endl;
#else // No specified output type
    fout << actual_lane_3 << endl;
#endif
  }

  in_pix.close();
  fout.close();
  return 0;
}
