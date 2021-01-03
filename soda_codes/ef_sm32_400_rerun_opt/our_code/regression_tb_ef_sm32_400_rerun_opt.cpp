#include <fstream>
#include "ef_sm32_400_rerun_opt.h"
#include "clockwork_standard_compute_units.h"

int main() {
  srand(234);
  ofstream in_pix("input_pixels_regression_result_ef_sm32_400_rerun_opt.txt");
  ofstream fout("regression_result_ef_sm32_400_rerun_opt.txt");
  HWStream<hw_uint<512> > in_update_0_read;
  HWStream<hw_uint<512> > ef_sm32_400_rerun_update_0_write;


  // Loading input data
  // cmap    : { in_update_0[root = 0, in_0, in_1] -> in_off_chip[0, 0] : -3 <= in_0 <= 36 and -7 <= in_1 <= 1919 }
  // read map: { in_off_chip[0, 0] -> in_update_0[root = 0, in_0, in_1] : -3 <= in_0 <= 36 and -7 <= in_1 <= 1919 }
  // rng     : { in_update_0[root = 0, in_0, in_1] : -3 <= in_0 <= 36 and -7 <= in_1 <= 1919 }
  for (int i = 0; i < 77080; i++) {
    hw_uint<512> in_val;
#ifdef __INT_OUTPUT__
    set_at<0*16, 512, 16>(in_val, (32*i + 0));
#elif defined(__FLOAT_OUTPUT__)
    set_at<0*16, 512, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<0*16, 512, 16>(in_val, (32*i + 0));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<1*16, 512, 16>(in_val, (32*i + 1));
#elif defined(__FLOAT_OUTPUT__)
    set_at<1*16, 512, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<1*16, 512, 16>(in_val, (32*i + 1));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<2*16, 512, 16>(in_val, (32*i + 2));
#elif defined(__FLOAT_OUTPUT__)
    set_at<2*16, 512, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<2*16, 512, 16>(in_val, (32*i + 2));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<3*16, 512, 16>(in_val, (32*i + 3));
#elif defined(__FLOAT_OUTPUT__)
    set_at<3*16, 512, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<3*16, 512, 16>(in_val, (32*i + 3));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<4*16, 512, 16>(in_val, (32*i + 4));
#elif defined(__FLOAT_OUTPUT__)
    set_at<4*16, 512, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<4*16, 512, 16>(in_val, (32*i + 4));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<5*16, 512, 16>(in_val, (32*i + 5));
#elif defined(__FLOAT_OUTPUT__)
    set_at<5*16, 512, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<5*16, 512, 16>(in_val, (32*i + 5));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<6*16, 512, 16>(in_val, (32*i + 6));
#elif defined(__FLOAT_OUTPUT__)
    set_at<6*16, 512, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<6*16, 512, 16>(in_val, (32*i + 6));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<7*16, 512, 16>(in_val, (32*i + 7));
#elif defined(__FLOAT_OUTPUT__)
    set_at<7*16, 512, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<7*16, 512, 16>(in_val, (32*i + 7));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<8*16, 512, 16>(in_val, (32*i + 8));
#elif defined(__FLOAT_OUTPUT__)
    set_at<8*16, 512, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<8*16, 512, 16>(in_val, (32*i + 8));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<9*16, 512, 16>(in_val, (32*i + 9));
#elif defined(__FLOAT_OUTPUT__)
    set_at<9*16, 512, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<9*16, 512, 16>(in_val, (32*i + 9));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<10*16, 512, 16>(in_val, (32*i + 10));
#elif defined(__FLOAT_OUTPUT__)
    set_at<10*16, 512, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<10*16, 512, 16>(in_val, (32*i + 10));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<11*16, 512, 16>(in_val, (32*i + 11));
#elif defined(__FLOAT_OUTPUT__)
    set_at<11*16, 512, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<11*16, 512, 16>(in_val, (32*i + 11));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<12*16, 512, 16>(in_val, (32*i + 12));
#elif defined(__FLOAT_OUTPUT__)
    set_at<12*16, 512, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<12*16, 512, 16>(in_val, (32*i + 12));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<13*16, 512, 16>(in_val, (32*i + 13));
#elif defined(__FLOAT_OUTPUT__)
    set_at<13*16, 512, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<13*16, 512, 16>(in_val, (32*i + 13));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<14*16, 512, 16>(in_val, (32*i + 14));
#elif defined(__FLOAT_OUTPUT__)
    set_at<14*16, 512, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<14*16, 512, 16>(in_val, (32*i + 14));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<15*16, 512, 16>(in_val, (32*i + 15));
#elif defined(__FLOAT_OUTPUT__)
    set_at<15*16, 512, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<15*16, 512, 16>(in_val, (32*i + 15));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<16*16, 512, 16>(in_val, (32*i + 16));
#elif defined(__FLOAT_OUTPUT__)
    set_at<16*16, 512, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<16*16, 512, 16>(in_val, (32*i + 16));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<17*16, 512, 16>(in_val, (32*i + 17));
#elif defined(__FLOAT_OUTPUT__)
    set_at<17*16, 512, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<17*16, 512, 16>(in_val, (32*i + 17));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<18*16, 512, 16>(in_val, (32*i + 18));
#elif defined(__FLOAT_OUTPUT__)
    set_at<18*16, 512, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<18*16, 512, 16>(in_val, (32*i + 18));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<19*16, 512, 16>(in_val, (32*i + 19));
#elif defined(__FLOAT_OUTPUT__)
    set_at<19*16, 512, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<19*16, 512, 16>(in_val, (32*i + 19));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<20*16, 512, 16>(in_val, (32*i + 20));
#elif defined(__FLOAT_OUTPUT__)
    set_at<20*16, 512, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<20*16, 512, 16>(in_val, (32*i + 20));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<21*16, 512, 16>(in_val, (32*i + 21));
#elif defined(__FLOAT_OUTPUT__)
    set_at<21*16, 512, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<21*16, 512, 16>(in_val, (32*i + 21));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<22*16, 512, 16>(in_val, (32*i + 22));
#elif defined(__FLOAT_OUTPUT__)
    set_at<22*16, 512, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<22*16, 512, 16>(in_val, (32*i + 22));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<23*16, 512, 16>(in_val, (32*i + 23));
#elif defined(__FLOAT_OUTPUT__)
    set_at<23*16, 512, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<23*16, 512, 16>(in_val, (32*i + 23));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<24*16, 512, 16>(in_val, (32*i + 24));
#elif defined(__FLOAT_OUTPUT__)
    set_at<24*16, 512, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<24*16, 512, 16>(in_val, (32*i + 24));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<25*16, 512, 16>(in_val, (32*i + 25));
#elif defined(__FLOAT_OUTPUT__)
    set_at<25*16, 512, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<25*16, 512, 16>(in_val, (32*i + 25));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<26*16, 512, 16>(in_val, (32*i + 26));
#elif defined(__FLOAT_OUTPUT__)
    set_at<26*16, 512, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<26*16, 512, 16>(in_val, (32*i + 26));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<27*16, 512, 16>(in_val, (32*i + 27));
#elif defined(__FLOAT_OUTPUT__)
    set_at<27*16, 512, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<27*16, 512, 16>(in_val, (32*i + 27));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<28*16, 512, 16>(in_val, (32*i + 28));
#elif defined(__FLOAT_OUTPUT__)
    set_at<28*16, 512, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<28*16, 512, 16>(in_val, (32*i + 28));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<29*16, 512, 16>(in_val, (32*i + 29));
#elif defined(__FLOAT_OUTPUT__)
    set_at<29*16, 512, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<29*16, 512, 16>(in_val, (32*i + 29));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<30*16, 512, 16>(in_val, (32*i + 30));
#elif defined(__FLOAT_OUTPUT__)
    set_at<30*16, 512, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<30*16, 512, 16>(in_val, (32*i + 30));
#endif
#ifdef __INT_OUTPUT__
    in_pix << in_val << endl;
#elif defined(__FLOAT_OUTPUT__)
    in_pix << to_float(in_val) << endl;
#else // No specified output type
    in_pix << in_val << endl;
#endif
#ifdef __INT_OUTPUT__
    set_at<31*16, 512, 16>(in_val, (32*i + 31));
#elif defined(__FLOAT_OUTPUT__)
    set_at<31*16, 512, 16>(in_val, (to_bits((float)static_cast <float> (rand()) / static_cast <float> (RAND_MAX))));
#else // No specified output type
    set_at<31*16, 512, 16>(in_val, (32*i + 31));
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

  ef_sm32_400_rerun_opt(in_update_0_read, ef_sm32_400_rerun_update_0_write);

  for (int i = 0; i < 65280; i++) {
    hw_uint<512> actual = ef_sm32_400_rerun_update_0_write.read();
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
    auto actual_lane_16 = actual.extract<16*16, 271>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_16 << endl;
#elif defined(__FLOAT_OUTPUT__)
    fout << to_float(actual_lane_16) << endl;
#else // No specified output type
    fout << actual_lane_16 << endl;
#endif
    auto actual_lane_17 = actual.extract<17*16, 287>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_17 << endl;
#elif defined(__FLOAT_OUTPUT__)
    fout << to_float(actual_lane_17) << endl;
#else // No specified output type
    fout << actual_lane_17 << endl;
#endif
    auto actual_lane_18 = actual.extract<18*16, 303>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_18 << endl;
#elif defined(__FLOAT_OUTPUT__)
    fout << to_float(actual_lane_18) << endl;
#else // No specified output type
    fout << actual_lane_18 << endl;
#endif
    auto actual_lane_19 = actual.extract<19*16, 319>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_19 << endl;
#elif defined(__FLOAT_OUTPUT__)
    fout << to_float(actual_lane_19) << endl;
#else // No specified output type
    fout << actual_lane_19 << endl;
#endif
    auto actual_lane_20 = actual.extract<20*16, 335>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_20 << endl;
#elif defined(__FLOAT_OUTPUT__)
    fout << to_float(actual_lane_20) << endl;
#else // No specified output type
    fout << actual_lane_20 << endl;
#endif
    auto actual_lane_21 = actual.extract<21*16, 351>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_21 << endl;
#elif defined(__FLOAT_OUTPUT__)
    fout << to_float(actual_lane_21) << endl;
#else // No specified output type
    fout << actual_lane_21 << endl;
#endif
    auto actual_lane_22 = actual.extract<22*16, 367>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_22 << endl;
#elif defined(__FLOAT_OUTPUT__)
    fout << to_float(actual_lane_22) << endl;
#else // No specified output type
    fout << actual_lane_22 << endl;
#endif
    auto actual_lane_23 = actual.extract<23*16, 383>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_23 << endl;
#elif defined(__FLOAT_OUTPUT__)
    fout << to_float(actual_lane_23) << endl;
#else // No specified output type
    fout << actual_lane_23 << endl;
#endif
    auto actual_lane_24 = actual.extract<24*16, 399>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_24 << endl;
#elif defined(__FLOAT_OUTPUT__)
    fout << to_float(actual_lane_24) << endl;
#else // No specified output type
    fout << actual_lane_24 << endl;
#endif
    auto actual_lane_25 = actual.extract<25*16, 415>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_25 << endl;
#elif defined(__FLOAT_OUTPUT__)
    fout << to_float(actual_lane_25) << endl;
#else // No specified output type
    fout << actual_lane_25 << endl;
#endif
    auto actual_lane_26 = actual.extract<26*16, 431>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_26 << endl;
#elif defined(__FLOAT_OUTPUT__)
    fout << to_float(actual_lane_26) << endl;
#else // No specified output type
    fout << actual_lane_26 << endl;
#endif
    auto actual_lane_27 = actual.extract<27*16, 447>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_27 << endl;
#elif defined(__FLOAT_OUTPUT__)
    fout << to_float(actual_lane_27) << endl;
#else // No specified output type
    fout << actual_lane_27 << endl;
#endif
    auto actual_lane_28 = actual.extract<28*16, 463>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_28 << endl;
#elif defined(__FLOAT_OUTPUT__)
    fout << to_float(actual_lane_28) << endl;
#else // No specified output type
    fout << actual_lane_28 << endl;
#endif
    auto actual_lane_29 = actual.extract<29*16, 479>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_29 << endl;
#elif defined(__FLOAT_OUTPUT__)
    fout << to_float(actual_lane_29) << endl;
#else // No specified output type
    fout << actual_lane_29 << endl;
#endif
    auto actual_lane_30 = actual.extract<30*16, 495>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_30 << endl;
#elif defined(__FLOAT_OUTPUT__)
    fout << to_float(actual_lane_30) << endl;
#else // No specified output type
    fout << actual_lane_30 << endl;
#endif
    auto actual_lane_31 = actual.extract<31*16, 511>();
#ifdef __INT_OUTPUT__
    fout << (int) actual_lane_31 << endl;
#elif defined(__FLOAT_OUTPUT__)
    fout << to_float(actual_lane_31) << endl;
#else // No specified output type
    fout << actual_lane_31 << endl;
#endif
  }

  in_pix.close();
  fout.close();
  return 0;
}
