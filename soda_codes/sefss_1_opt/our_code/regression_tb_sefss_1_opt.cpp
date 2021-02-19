#include <fstream>
#include "sefss_1_opt.h"

int main() {
  srand(234);
  ofstream fout("regression_result_sefss_1_opt.txt");
  HWStream<hw_uint<16 > > in_off_chip;
  HWStream<hw_uint<16 > > sefss_1;


  // Loading input data
  srand(1);
  // cmap    : { in_update_0[root = 0, in_0, in_1] -> in_off_chip[in_1, in_0] : -7 <= in_0 <= 1079 and -7 <= in_1 <= 1079 }
  // read map: { in_off_chip[i0, i1] -> in_update_0[root = 0, in_0 = i1, in_1 = i0] : -7 <= i0 <= 1079 and -7 <= i1 <= 1079 }
  // rng     : { in_update_0[root = 0, in_0, in_1] : -7 <= in_0 <= 1079 and -7 <= in_1 <= 1079 }
  // rng card: { 1181569 }
  for (int i = 0; i < 1181569; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    in_off_chip.write(value);
  }

  sefss_1_opt(in_off_chip, sefss_1);
  for (int i = 0; i < 1166400; i++) {
    auto actual = sefss_1.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  assert(in_off_chip.is_empty());
  assert(sefss_1.is_empty());
  return 0;
}
