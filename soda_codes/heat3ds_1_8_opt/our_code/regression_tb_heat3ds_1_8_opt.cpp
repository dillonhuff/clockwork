#include <fstream>
#include "heat3ds_1_8_opt.h"
#include "clockwork_standard_compute_units.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_heat3ds_1_8_opt.txt");
  ofstream fout("regression_result_heat3ds_1_8_opt.txt");
  HWStream<hw_uint<256> > in_cc_update_0_read;
  HWStream<hw_uint<256> > heat3ds_1_8_update_0_write;


  // Loading input data
  // cmap    : { in_cc_update_0[root = 0, in_cc_0, in_cc_1, in_cc_2] -> in[0, 0] : -1 <= in_cc_0 <= 4 and -1 <= in_cc_1 <= 32 and -1 <= in_cc_2 <= 32 }
  // read map: { in[0, 0] -> in_cc_update_0[root = 0, in_cc_0, in_cc_1, in_cc_2] : -1 <= in_cc_0 <= 4 and -1 <= in_cc_1 <= 32 and -1 <= in_cc_2 <= 32 }
  // rng     : { in_cc_update_0[root = 0, in_cc_0, in_cc_1, in_cc_2] : -1 <= in_cc_0 <= 4 and -1 <= in_cc_1 <= 32 and -1 <= in_cc_2 <= 32 }
  for (int i = 0; i < 6936; i++) {
    hw_uint<256> in_val;
#ifdef __INT_OUTPUT__
    set_at<0*32, 256, 32>(in_val, (8*i + 0));
#elif __FLOAT_OUTPUT__
    set_at<0*32, 256, 32>(in_val, (to_bits((float)(8*i + 0))));
#else // No specified output type
    set_at<0*32, 256, 32>(in_val, (8*i + 0));
#endif
    in_pix << in_val << endl;
#ifdef __INT_OUTPUT__
    set_at<1*32, 256, 32>(in_val, (8*i + 1));
#elif __FLOAT_OUTPUT__
    set_at<1*32, 256, 32>(in_val, (to_bits((float)(8*i + 1))));
#else // No specified output type
    set_at<1*32, 256, 32>(in_val, (8*i + 1));
#endif
    in_pix << in_val << endl;
#ifdef __INT_OUTPUT__
    set_at<2*32, 256, 32>(in_val, (8*i + 2));
#elif __FLOAT_OUTPUT__
    set_at<2*32, 256, 32>(in_val, (to_bits((float)(8*i + 2))));
#else // No specified output type
    set_at<2*32, 256, 32>(in_val, (8*i + 2));
#endif
    in_pix << in_val << endl;
#ifdef __INT_OUTPUT__
    set_at<3*32, 256, 32>(in_val, (8*i + 3));
#elif __FLOAT_OUTPUT__
    set_at<3*32, 256, 32>(in_val, (to_bits((float)(8*i + 3))));
#else // No specified output type
    set_at<3*32, 256, 32>(in_val, (8*i + 3));
#endif
    in_pix << in_val << endl;
#ifdef __INT_OUTPUT__
    set_at<4*32, 256, 32>(in_val, (8*i + 4));
#elif __FLOAT_OUTPUT__
    set_at<4*32, 256, 32>(in_val, (to_bits((float)(8*i + 4))));
#else // No specified output type
    set_at<4*32, 256, 32>(in_val, (8*i + 4));
#endif
    in_pix << in_val << endl;
#ifdef __INT_OUTPUT__
    set_at<5*32, 256, 32>(in_val, (8*i + 5));
#elif __FLOAT_OUTPUT__
    set_at<5*32, 256, 32>(in_val, (to_bits((float)(8*i + 5))));
#else // No specified output type
    set_at<5*32, 256, 32>(in_val, (8*i + 5));
#endif
    in_pix << in_val << endl;
#ifdef __INT_OUTPUT__
    set_at<6*32, 256, 32>(in_val, (8*i + 6));
#elif __FLOAT_OUTPUT__
    set_at<6*32, 256, 32>(in_val, (to_bits((float)(8*i + 6))));
#else // No specified output type
    set_at<6*32, 256, 32>(in_val, (8*i + 6));
#endif
    in_pix << in_val << endl;
#ifdef __INT_OUTPUT__
    set_at<7*32, 256, 32>(in_val, (8*i + 7));
#elif __FLOAT_OUTPUT__
    set_at<7*32, 256, 32>(in_val, (to_bits((float)(8*i + 7))));
#else // No specified output type
    set_at<7*32, 256, 32>(in_val, (8*i + 7));
#endif
    in_pix << in_val << endl;
    in_cc_update_0_read.write(in_val);
  }

  heat3ds_1_8_opt(in_cc_update_0_read, heat3ds_1_8_update_0_write);

  for (int i = 0; i < 4096; i++) {
    hw_uint<256> actual = heat3ds_1_8_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*32, 31>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_0 << endl;
#elif __FLOAT_OUTPUT__
    fout << to_float(actual_lane_0) << endl;
#else // No specified output type
    fout << actual_lane_0 << endl;
#endif
    auto actual_lane_1 = actual.extract<1*32, 63>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_1 << endl;
#elif __FLOAT_OUTPUT__
    fout << to_float(actual_lane_1) << endl;
#else // No specified output type
    fout << actual_lane_1 << endl;
#endif
    auto actual_lane_2 = actual.extract<2*32, 95>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_2 << endl;
#elif __FLOAT_OUTPUT__
    fout << to_float(actual_lane_2) << endl;
#else // No specified output type
    fout << actual_lane_2 << endl;
#endif
    auto actual_lane_3 = actual.extract<3*32, 127>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_3 << endl;
#elif __FLOAT_OUTPUT__
    fout << to_float(actual_lane_3) << endl;
#else // No specified output type
    fout << actual_lane_3 << endl;
#endif
    auto actual_lane_4 = actual.extract<4*32, 159>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_4 << endl;
#elif __FLOAT_OUTPUT__
    fout << to_float(actual_lane_4) << endl;
#else // No specified output type
    fout << actual_lane_4 << endl;
#endif
    auto actual_lane_5 = actual.extract<5*32, 191>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_5 << endl;
#elif __FLOAT_OUTPUT__
    fout << to_float(actual_lane_5) << endl;
#else // No specified output type
    fout << actual_lane_5 << endl;
#endif
    auto actual_lane_6 = actual.extract<6*32, 223>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_6 << endl;
#elif __FLOAT_OUTPUT__
    fout << to_float(actual_lane_6) << endl;
#else // No specified output type
    fout << actual_lane_6 << endl;
#endif
    auto actual_lane_7 = actual.extract<7*32, 255>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_7 << endl;
#elif __FLOAT_OUTPUT__
    fout << to_float(actual_lane_7) << endl;
#else // No specified output type
    fout << actual_lane_7 << endl;
#endif
  }

  in_pix.close();
  fout.close();
  return 0;
}
