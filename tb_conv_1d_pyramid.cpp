#include "conv_1d_pyramid.h"

#include <vector>

int main() {

  cout << "Time sharing pyramid test" << endl;

  HWStream<hw_uint<32> > in, out;
  vector<int> stage0;
  for (int i = 0; i < 10; i++) {
    in.write(i);
    stage0.push_back(i);
  }

  vector<int> stage1;
  for (int i = 0; i < 8; i++) {
    stage1.push_back(stage0.at(i) + stage0.at(i + 1) + stage0.at(i + 2));
  }

  vector<int> stage2;
  for (int i = 0; i < 6; i++) {
    stage2.push_back(stage1.at(i) + stage1.at(i + 1) + stage1.at(i + 2));
  }

  conv_1d_pyramid(in, out);

  for (int i = 0; i < 6; i++) {
    int v = out.read();
    cout << "v[" << i << "] = " << v << endl;
    cout << "\texpected = " << stage2.at(i) << endl;
    assert(v == stage2.at(i));
  }

  return 0;
}
