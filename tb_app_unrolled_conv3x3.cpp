#include "conv3x3_app_unrolled_opt.h"

#define ROWS 30
#define COLS 30

#define IN_ROWS (ROWS + 2)
#define IN_COLS (COLS + 2)

#include <vector>

using namespace std;

int main() {

  HWStream<hw_uint<64> > off_chip_img;

  HWStream<hw_uint<64> > conv3x3_out;

  vector<hw_uint<64> > values;
  for (int r = 0; r < IN_ROWS; r++) {
    for (int c = 0; c < IN_ROWS; c += 2) {
      hw_uint<64> in;
      int v0 =
        r*IN_COLS + c + 0;
      int v1 =
        r*IN_COLS + c + 1;
      set_at<0, 64>(in, v0);
      set_at<32, 64>(in, v1);

      cout << "Writing to accelerator: " << in << endl;

      values.push_back(v0);
      values.push_back(v1);
      off_chip_img.write((hw_uint<64>) in);

      //hw_uint<64> v = off_chip_img.read();
      //cout << "v  = " << v << endl;
      //cout << "in = " << in << endl;
      //assert(v == in);
      //cout << "Are equal!" << endl;
    }
  }

  //assert(false);
  conv3x3_app_unrolled_opt(off_chip_img, conv3x3_out);

  for (int r = 0; r < ROWS; r++) {
    for (int c = 0; c < ceil(COLS / 2.0); c++) {

      hw_uint<32> expected;
      expected = 0;
      for (int ri = 0; ri < 3; ri++) {
        for (int ci = 0; ci < 3; ci++) {
          auto next = values.at((r + ri) * IN_COLS + c + ci);
          cout << "next = " << next.to_int() << endl;
          expected = expected + next;
        }
      }
      auto out = conv3x3_out.read();
      cout << "Out  = " << out << ", as int: " << out.to_int() << endl;
      cout << "Next = " << expected << ", as int: " << expected.to_int() << endl;
      assert(out == expected);
    }
  }

  return 0;
}
