#include "conv3x3_app_opt.h"

#define ROWS 30
#define COLS 30

#define IN_ROWS (ROWS + 2)
#define IN_COLS (COLS + 2)

#include <vector>

using namespace std;

int main() {

  HWStream<hw_uint<32> > off_chip_img,
    conv3x3_out;

  vector<hw_uint<32> > values;
  for (int r = 0; r < ROWS + 2; r++) {
    for (int c = 0; c < COLS + 2; c++) {
      values.push_back(r*IN_COLS + c);
      off_chip_img.write(values.back());
    }
  }

  conv3x3_app_opt(off_chip_img, conv3x3_out);

  for (int r = 0; r < ROWS; r++) {
    for (int c = 0; c < COLS; c++) {

      hw_uint<32> expected;
      expected = 0;
      for (int ri = 0; ri < 3; ri++) {
        for (int ci = 0; ci < 3; ci++) {
          auto next = values.at((r + ri) * IN_COLS + c + ci);
          expected = expected + next;
        }
      }
      auto out = conv3x3_out.read();
      cout << "Out  = " << out << endl;
      cout << "Next = " << expected << endl;
      assert(out == expected);
    }
  }

  //assert(false);

  return 0;
}
