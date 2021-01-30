#include <fstream>
#include "jacdyn_1_opt.h"

int main() {
  srand(234);
  ofstream fout("regression_result_jacdyn_1_opt.txt");
  HWStream<hw_uint<16 > > in_off_chip;
  HWStream<hw_uint<16 > > jacdyn_1;


  // Loading input data
  srand(1);
  // cmap    : { in_update_0[root = 0, in_0, in_1] -> in_off_chip[in_1, in_0] : -15 <= in_0 <= 33 and 0 <= in_1 <= 24 }
  // read map: { in_off_chip[i0, i1] -> in_update_0[root = 0, in_0 = i1, in_1 = i0] : 0 <= i0 <= 24 and -15 <= i1 <= 33 }
  // rng     : { in_update_0[root = 0, in_0, in_1] : -15 <= in_0 <= 33 and 0 <= in_1 <= 24 }
  // rng card: { 1225 }
  for (int i = 0; i < 1225; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    in_off_chip.write(value);
  }

  jacdyn_1_opt(in_off_chip, jacdyn_1);
  for (int i = 0; i < 190; i++) {
    auto actual = jacdyn_1.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  return 0;
}
