#include <fstream>
#include "pyramid_synthetic_exposure_fusion_opt.h"

int main() {
  ofstream in_pix("input_pixels_regression_result_pyramid_synthetic_exposure_fusion_opt.txt");
  ofstream fout("regression_result_pyramid_synthetic_exposure_fusion_opt.txt");
  HWStream<hw_uint<32> > in_update_0_read;
  HWStream<hw_uint<32> > pyramid_synthetic_exposure_fusion_update_0_write;


  // Loading input data
  // cmap    : { in_update_0[root = 0, in_0, in_1] -> in_off_chip[0, 0] : 0 <= in_0 <= 1262 and 0 <= in_1 <= 1262 }
  // read map: { in_off_chip[0, 0] -> in_update_0[root = 0, in_0, in_1] : 0 <= in_0 <= 1262 and 0 <= in_1 <= 1262 }
  // rng     : { in_update_0[root = 0, in_0, in_1] : 0 <= in_0 <= 1262 and 0 <= in_1 <= 1262 }
  for (int i = 0; i < 1595169; i++) {
    hw_uint<32> in_val;
    set_at<0*32, 32, 32>(in_val, 1*i + 0);
    in_pix << in_val << endl;
    in_update_0_read.write(in_val);
  }

  pyramid_synthetic_exposure_fusion_opt(in_update_0_read, pyramid_synthetic_exposure_fusion_update_0_write);

  for (int i = 0; i < 1562500; i++) {
    hw_uint<32> actual = pyramid_synthetic_exposure_fusion_update_0_write.read();
    auto actual_lane_0 = actual.extract<0*32, 31>();
    fout << actual_lane_0 << endl;
  }

  in_pix.close();
  fout.close();
  return 0;
}
