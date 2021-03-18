#include <fstream>
#include "blur9_16_opt.h"

int main() {
  srand(234);
  ofstream fout("regression_result_blur9_16_opt.txt");
  HWStream<hw_uint<16 > > input_arg;
  HWStream<hw_uint<16 > > blur9_16;


  // Loading input data
  srand(1);
  // cmap    : { input_update_0[root = 0, input_0, input_1] -> input_arg[input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 1921 }
  // read map: { input_arg[i0, i1] -> input_update_0[root = 0, input_0 = i1, input_1 = i0] : 0 <= i0 <= 1921 and 0 <= i1 <= 1081 }
  // rng     : { input_update_0[root = 0, input_0, input_1] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 1921 }
  // rng card: { 2079604 }
  for (int i = 0; i < 2079604; i++) {
    hw_uint<16 > value;
    set_at<0, 16, 16>(value, rand() % 256);
    input_arg.write(value);
  }

  blur9_16_opt(input_arg, blur9_16);
  for (int i = 0; i < 2073600; i++) {
    auto actual = blur9_16.read();
    hw_uint<16> actual_lane_0 = actual.extract<0, 15>();
    fout << actual_lane_0 << endl;
  }

  assert(input_arg.is_empty());
  assert(blur9_16.is_empty());
  return 0;
}
