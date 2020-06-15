#include "unoptimized_histogram.h"

#define IMG_SIZE 20

#include <vector>

using namespace std;

int main() {

  HWStream<hw_uint<32> > off_chip_img;

  HWStream<hw_uint<32> > color_counts;

  vector<hw_uint<32> > values{1, 1, 4, 7, 1, 3, 4, 8, 11, 8, 3, 2, 4, 5, 1, 0, 4, 14, 3, 5};
  for (auto v : values) {
    off_chip_img.write(v);
  }

  unoptimized_histogram(off_chip_img, color_counts);

  cout << "Done with histogram" << endl;
  for (int i = 0; i < 20; i++) {
    cout << "count " << i << " = " << color_counts.read() << endl;
  }

  return 0;
}
