#include <fstream>
#include "psefn_4_opt.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_psefn_4_opt.txt");
  ofstream fout("regression_result_psefn_4_opt.txt");
  HWStream<hw_uint<64> > in_update_0_read;
  HWStream<hw_uint<64> > psefn_4_update_0_write;


  // Loading input data
  // cmap    : { in_update_0[root = 0, in_0, in_1] -> in_off_chip[0, 0] : 0 <= in_0 <= 316 and 0 <= in_1 <= 1262 }
  // read map: { in_off_chip[0, 0] -> in_update_0[root = 0, in_0, in_1] : 0 <= in_0 <= 316 and 0 <= in_1 <= 1262 }
  // rng     : { in_update_0[root = 0, in_0, in_1] : 0 <= in_0 <= 316 and 0 <= in_1 <= 1262 }
  for (int i = 0; i < 400371; i++) {
    hw_uint<64> in_val;
    set_at<0*16, 64, 16>(in_val, 4*i + 0);
    in_pix << in_val << endl;
    set_at<1*16, 64, 16>(in_val, 4*i + 1);
    in_pix << in_val << endl;
    set_at<2*16, 64, 16>(in_val, 4*i + 2);
    in_pix << in_val << endl;
    set_at<3*16, 64, 16>(in_val, 4*i + 3);
    in_pix << in_val << endl;
    in_update_0_read.write(in_val);
  }

  psefn_4_opt(in_update_0_read, psefn_4_update_0_write);

  for (int i = 0; i < 391250; i++) {
    hw_uint<64> actual = psefn_4_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*16, 15>();
    fout << actual_lane_0 << endl;
    auto actual_lane_1 = actual.extract<1*16, 31>();
    fout << actual_lane_1 << endl;
    auto actual_lane_2 = actual.extract<2*16, 47>();
    fout << actual_lane_2 << endl;
    auto actual_lane_3 = actual.extract<3*16, 63>();
    fout << actual_lane_3 << endl;
  }

  in_pix.close();
  fout.close();
  return 0;
}
