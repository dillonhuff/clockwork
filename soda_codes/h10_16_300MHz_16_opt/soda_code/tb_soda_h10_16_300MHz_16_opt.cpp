// AUTO GEN SODA TB
#include "h10_16_300MHz_16_opt_kernel.h"
#include <iostream>
#include <fstream>

#define PIXEL_WIDTH 32
#define BURST_WIDTH 512

#include "runtime/test_utils.h"

using namespace std;

int main() {
  srand(234);
  const int nrows = 1044;
  const int ncols = 1344;
  uint64_t img_pixels = nrows*ncols;
  const uint64_t bits_per_pixel = PIXEL_WIDTH;
  uint64_t img_bits = bits_per_pixel*img_pixels;
  const uint64_t num_transfers = img_bits / BURST_WIDTH;
  const uint64_t pixels_per_burst = BURST_WIDTH / bits_per_pixel;

  cout << "num transfers    : " << num_transfers << endl;
  cout << "pixels / transfer: " << pixels_per_burst << endl;

  const uint64_t transfer_cols = ncols / pixels_per_burst;
  ap_uint<BURST_WIDTH>* h10_16_300MHz_16 = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  ap_uint<BURST_WIDTH>* in = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  fill_array_decimal<bits_per_pixel>("in_input_pixel.csv", in, nrows, ncols, transfer_cols);
  h10_16_300MHz_16_opt_kernel(h10_16_300MHz_16, in, num_transfers);
  write_results_decimal<bits_per_pixel>("soda_h10_16_300MHz_16_opt_regression_result.csv", h10_16_300MHz_16, nrows, ncols, transfer_cols);
  free(in);
  free(h10_16_300MHz_16);
}
