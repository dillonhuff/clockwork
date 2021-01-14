#include <fstream>
#include "ef_16_opt.h"
#include "clockwork_standard_compute_units.h"

int main() {
  srand(234);
  ofstream in_pix("input_pixels_regression_result_ef_16_opt.txt");
  ofstream fout("regression_result_ef_16_opt.txt");
  HWStream<hw_uint<256> > in_update_0_read;
  HWStream<hw_uint<256> > ef_16_update_0_write;


  // Loading input data
  // cmap    : { in_update_0[root = 0, in_0, in_1] -> in_off_chip[0, 0] : -3 <= in_0 <= 70 and -7 <= in_1 <= 1919 }
  // read map: { in_off_chip[0, 0] -> in_update_0[root = 0, in_0, in_1] : -3 <= in_0 <= 70 and -7 <= in_1 <= 1919 }
  // rng     : { in_update_0[root = 0, in_0, in_1] : -3 <= in_0 <= 70 and -7 <= in_1 <= 1919 }
  for (int i = 0; i < 142598; i++) {
    hw_uint<256> in_val;
#ifdef __INT_OUTPUT__
    set_at<0*16, 256, 16>(in_val, (16*i + 0));
#elif defined(__FLOAT_OUTPUT__)
    set_at<0*16, 256, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<0*16, 256, 16>(in_val, (16*i + 0));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<1*16, 256, 16>(in_val, (16*i + 1));
#elif defined(__FLOAT_OUTPUT__)
    set_at<1*16, 256, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<1*16, 256, 16>(in_val, (16*i + 1));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<2*16, 256, 16>(in_val, (16*i + 2));
#elif defined(__FLOAT_OUTPUT__)
    set_at<2*16, 256, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<2*16, 256, 16>(in_val, (16*i + 2));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<3*16, 256, 16>(in_val, (16*i + 3));
#elif defined(__FLOAT_OUTPUT__)
    set_at<3*16, 256, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<3*16, 256, 16>(in_val, (16*i + 3));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<4*16, 256, 16>(in_val, (16*i + 4));
#elif defined(__FLOAT_OUTPUT__)
    set_at<4*16, 256, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<4*16, 256, 16>(in_val, (16*i + 4));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<5*16, 256, 16>(in_val, (16*i + 5));
#elif defined(__FLOAT_OUTPUT__)
    set_at<5*16, 256, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<5*16, 256, 16>(in_val, (16*i + 5));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<6*16, 256, 16>(in_val, (16*i + 6));
#elif defined(__FLOAT_OUTPUT__)
    set_at<6*16, 256, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<6*16, 256, 16>(in_val, (16*i + 6));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<7*16, 256, 16>(in_val, (16*i + 7));
#elif defined(__FLOAT_OUTPUT__)
    set_at<7*16, 256, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<7*16, 256, 16>(in_val, (16*i + 7));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<8*16, 256, 16>(in_val, (16*i + 8));
#elif defined(__FLOAT_OUTPUT__)
    set_at<8*16, 256, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<8*16, 256, 16>(in_val, (16*i + 8));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<9*16, 256, 16>(in_val, (16*i + 9));
#elif defined(__FLOAT_OUTPUT__)
    set_at<9*16, 256, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<9*16, 256, 16>(in_val, (16*i + 9));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<10*16, 256, 16>(in_val, (16*i + 10));
#elif defined(__FLOAT_OUTPUT__)
    set_at<10*16, 256, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<10*16, 256, 16>(in_val, (16*i + 10));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<11*16, 256, 16>(in_val, (16*i + 11));
#elif defined(__FLOAT_OUTPUT__)
    set_at<11*16, 256, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<11*16, 256, 16>(in_val, (16*i + 11));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<12*16, 256, 16>(in_val, (16*i + 12));
#elif defined(__FLOAT_OUTPUT__)
    set_at<12*16, 256, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<12*16, 256, 16>(in_val, (16*i + 12));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<13*16, 256, 16>(in_val, (16*i + 13));
#elif defined(__FLOAT_OUTPUT__)
    set_at<13*16, 256, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<13*16, 256, 16>(in_val, (16*i + 13));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<14*16, 256, 16>(in_val, (16*i + 14));
#elif defined(__FLOAT_OUTPUT__)
    set_at<14*16, 256, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<14*16, 256, 16>(in_val, (16*i + 14));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<15*16, 256, 16>(in_val, (16*i + 15));
#elif defined(__FLOAT_OUTPUT__)
    set_at<15*16, 256, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<15*16, 256, 16>(in_val, (16*i + 15));
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

  ef_16_opt(in_update_0_read, ef_16_update_0_write);

  for (int i = 0; i < 130560; i++) {
    hw_uint<256> actual = ef_16_update_0_write.read();
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
    auto actual_lane_4 = actual.extract<4*16, 79>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_4 << endl;
#elif defined(__FLOAT_OUTPUT__)
    fout << to_float(actual_lane_4) << endl;
#else // No specified output type
    fout << actual_lane_4 << endl;
#endif
    auto actual_lane_5 = actual.extract<5*16, 95>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_5 << endl;
#elif defined(__FLOAT_OUTPUT__)
    fout << to_float(actual_lane_5) << endl;
#else // No specified output type
    fout << actual_lane_5 << endl;
#endif
    auto actual_lane_6 = actual.extract<6*16, 111>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_6 << endl;
#elif defined(__FLOAT_OUTPUT__)
    fout << to_float(actual_lane_6) << endl;
#else // No specified output type
    fout << actual_lane_6 << endl;
#endif
    auto actual_lane_7 = actual.extract<7*16, 127>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_7 << endl;
#elif defined(__FLOAT_OUTPUT__)
    fout << to_float(actual_lane_7) << endl;
#else // No specified output type
    fout << actual_lane_7 << endl;
#endif
    auto actual_lane_8 = actual.extract<8*16, 143>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_8 << endl;
#elif defined(__FLOAT_OUTPUT__)
    fout << to_float(actual_lane_8) << endl;
#else // No specified output type
    fout << actual_lane_8 << endl;
#endif
    auto actual_lane_9 = actual.extract<9*16, 159>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_9 << endl;
#elif defined(__FLOAT_OUTPUT__)
    fout << to_float(actual_lane_9) << endl;
#else // No specified output type
    fout << actual_lane_9 << endl;
#endif
    auto actual_lane_10 = actual.extract<10*16, 175>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_10 << endl;
#elif defined(__FLOAT_OUTPUT__)
    fout << to_float(actual_lane_10) << endl;
#else // No specified output type
    fout << actual_lane_10 << endl;
#endif
    auto actual_lane_11 = actual.extract<11*16, 191>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_11 << endl;
#elif defined(__FLOAT_OUTPUT__)
    fout << to_float(actual_lane_11) << endl;
#else // No specified output type
    fout << actual_lane_11 << endl;
#endif
    auto actual_lane_12 = actual.extract<12*16, 207>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_12 << endl;
#elif defined(__FLOAT_OUTPUT__)
    fout << to_float(actual_lane_12) << endl;
#else // No specified output type
    fout << actual_lane_12 << endl;
#endif
    auto actual_lane_13 = actual.extract<13*16, 223>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_13 << endl;
#elif defined(__FLOAT_OUTPUT__)
    fout << to_float(actual_lane_13) << endl;
#else // No specified output type
    fout << actual_lane_13 << endl;
#endif
    auto actual_lane_14 = actual.extract<14*16, 239>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_14 << endl;
#elif defined(__FLOAT_OUTPUT__)
    fout << to_float(actual_lane_14) << endl;
#else // No specified output type
    fout << actual_lane_14 << endl;
#endif
    auto actual_lane_15 = actual.extract<15*16, 255>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_15 << endl;
#elif defined(__FLOAT_OUTPUT__)
    fout << to_float(actual_lane_15) << endl;
#else // No specified output type
    fout << actual_lane_15 << endl;
#endif
  }

  in_pix.close();
  fout.close();
  return 0;
}
