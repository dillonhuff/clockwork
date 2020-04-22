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
      set_at<0, 64, 32>(in, v0);
      set_at<32, 64, 32>(in, v1);

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
    for (int c = 0; c < COLS; c += 2) {

    //}ceil(COLS / 2.0); c++) {

      hw_uint<32> expected0;
      expected0 = 0;
      for (int ri = 0; ri < 3; ri++) {
        for (int ci = 0; ci < 3; ci++) {
          auto next = values.at((r + ri) * IN_COLS + c + ci);
          cout << "next = " << next.to_int() << endl;
          expected0 = expected0 + next;
        }
      }
      
      hw_uint<32> expected1;
      expected1 = 0;
      for (int ri = 0; ri < 3; ri++) {
        for (int ci = 0; ci < 3; ci++) {
          auto next = values.at((r + ri) * IN_COLS + c + 1 + ci);
          cout << "next = " << next.to_int() << endl;
          expected1 = expected1 + next;
        }
      }

      hw_uint<64> out = conv3x3_out.read();
      hw_uint<32> out0 = out.extract<0, 31>();
      hw_uint<32> out1 = out.extract<32, 63>();

      cout << "Out  = " << out << ", as int: " << out.to_int() << endl;
      cout << "Next = " << expected0 << ", as int: " << expected0.to_int() << endl;
      cout << "Next = " << expected1 << ", as int: " << expected1.to_int() << endl;
      assert(out0 == expected0);
      assert(out1 == expected1);
    }
  }

  return 0;
}
