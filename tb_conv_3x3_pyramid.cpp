#include "conv_3x3_pyramid.h"

#include <vector>

using namespace std;

int main() {
  HWStream<hw_uint<32> > in, out;

  vector<int> input;
  for (int r = 0; r < 10; r++) {
    for (int c = 0; c < 10; c++) {
      in.write(r*10 + c);
      input.push_back(r*10 + c);
    }
  }

  vector<int> conv0;
  for (int r = 0; r < 10 - 2; r++) {
    for (int c = 0; c < 10 - 2; c++) {

      int res = 0;
      for (int ri = 0; ri < 3; ri++) {
        for (int ci = 0; ci < 3; ci++) {
          res += input.at((r + ri)*10 + c + ci);
        }
      }
      conv0.push_back(res);
    }
  }

  assert(conv0.size() == 8*8);

  vector<int> ds;
  for (int r = 0; r < 4; r++) {
    for (int c = 0; c < 4; c++) {
      ds.push_back(conv0.at((2*r)*8 + 2*c));
    }
  }

  assert(ds.size() == 4*4);

  vector<int> conv1;
  for (int r = 0; r < 4 - 2; r++) {
    for (int c = 0; c < 4 - 2; c++) {

      int res = 0;
      for (int ri = 0; ri < 3; ri++) {
        for (int ci = 0; ci < 3; ci++) {
          res += ds.at((r + ri)*4 + c + ci);
        }
      }
      conv1.push_back(res);
    }
  }

  assert(conv1.size() == 4);

  cout << "Writing data" << endl;
  // 10x10 in
  // 8x8 out of c0
  // 4x4 out of downsample
  // 2x2 output

  conv_3x3_pyramid(in, out);

  cout << "reading output" << endl;

  for (int r = 0; r < 2; r++) {
    for (int c = 0; c < 2; c++) {
      int v = out.read();
      cout << "v[" << r << ", " << c << "] = " << v << endl;
      cout << "\texpect: " << conv1.at(r*2 + c) << endl;
      assert(v == conv1.at(r*2 + c));
    }
  }
}
