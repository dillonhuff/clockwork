#include <fstream>
#include "jacdynl_2_opt.h"

int main() {
  srand(234);
  ofstream fout("regression_result_jacdynl_2_opt.txt");
  HWStream<hw_uint<16 > > in_off_chip;
  HWStream<hw_uint<16 > > jacdynl_2;


  // Loading input data
  srand(1);
  // cmap    : { in_update_0[root = 0, in_0, in_1] -> in_off_chip[in_1, in_0] : -15 <= in_0 <= 974 and 0 <= in_1 <= 1094 }
  // read map: { in_off_chip[i0, i1] -> in_update_0[root = 0, in_0 = i1, in_1 = i0] : 0 <= i0 <= 1094 and -15 <= i1 <= 974 }
  // rng     : { in_update_0[root = 0, in_0, in_1] : -15 <= in_0 <= 974 and 0 <= in_1 <= 1094 }
  // rng card: { 1084050 }
  for (int i = 0; i < 1084050; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    in_off_chip.write(value);
  }

  jacdynl_2_opt(in_off_chip, jacdynl_2);
  for (int i = 0; i < 1036800; i++) {
    auto actual = jacdynl_2.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  return 0;
}
