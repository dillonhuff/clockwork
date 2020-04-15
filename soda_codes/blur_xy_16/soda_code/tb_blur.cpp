#include "blur.h"

#include <iostream>

#define BURST_WIDTH 256

using namespace std;

int main() {
  uint64_t img_pixels=
    32*32;

  uint64_t img_bits =
    16*img_pixels;

  const uint64_t num_transfers =
    img_bits / BURST_WIDTH;

  ap_uint<256> y_res[num_transfers];
  ap_uint<256> input[num_transfers];

  blur_kernel(y_res,
      input,
      num_transfers);

  cout << "Done" << endl;

}
