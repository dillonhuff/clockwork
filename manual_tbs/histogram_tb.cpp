#include "unoptimized_histogram.h"

#define IMG_SIZE 20

#include <vector>

using namespace std;

int main() {

  HWStream<hw_uint<32> > off_chip_img;

  HWStream<hw_uint<32> > color_counts;

  vector<hw_uint<32> > values{1, 1, 4, 7, 1, 3, 4, 8, 11, 8, 3, 2, 4, 5, 1, 0, 4, 14, 3, 5};
  vector<hw_uint<32> > expected;
  for (int i = 0; i < (int) values.size(); i++) {
    expected.push_back(0);
  }
  cout << "set expected" << endl;
  for (int i = 0; i < 20; i++) {
    auto v = values.at(i);
    expected[v.to_int()] = expected[v.to_int()] + 1;
  }

  cout << "writing values" << endl;
  for (auto v : values) {
    off_chip_img.write(v);
  }

  unoptimized_histogram(off_chip_img, color_counts);

  cout << "Done with histogram" << endl;
  for (int i = 0; i < 20; i++) {
    auto cnt = color_counts.read();
    cout << "count " << i << " = " << cnt.to_int() << endl;
    //cout << "expec " << i << " = " << expected.at(i).to_int() << endl;
    assert(cnt == expected.at(i));
  }

  return 0;
}
