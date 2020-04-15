#include "blur.h"

#include <iostream>

#define BURST_WIDTH 256

using namespace std;

int main() {
  const int nrows = 32;
  const int ncols = 32;
  uint64_t img_pixels=
    nrows*ncols;

  uint64_t img_bits =
    16*img_pixels;

  const uint64_t num_transfers =
    img_bits / BURST_WIDTH;

  cout << "num transfers: " << num_transfers << endl;

  const uint64_t transfer_cols = ncols / (BURST_WIDTH / 16);
  ap_uint<256> y_res[num_transfers];
  ap_uint<256> input[num_transfers];
  for (int r = 0; r < nrows; r++) {
    for (int c = 0; c < transfer_cols; c++) {

      cout << "r = " << r << ", c = " << c << endl;
      auto offset = r*transfer_cols + c;
      cout << "offset = " << offset << endl;

      ap_uint<256>* val = &(input[offset]);
      for (int l = 0; l < (BURST_WIDTH / 16); l++) {
        (*val)(l*16 + 15, l*16) = 1;
      }
    }
  }

  blur_kernel(y_res,
      input,
      num_transfers);

  cout << "Results..." << endl;
  for (int r = 0; r < nrows; r++) {
    for (int c = 0; c < transfer_cols; c++) {

      cout << "r = " << r << ", c = " << c << endl;
      auto offset = r*transfer_cols + c;
      cout << "offset = " << offset << endl;

      ap_uint<256>* val = &(y_res[offset]);
      for (int l = 0; l < (BURST_WIDTH / 16); l++) {
        cout << (*val)(l*16 + 15, l*16) << " ";
      }

    }
    cout << endl;
  }
  cout << "Done" << endl;

}
