// AUTO GEN SODA TB
#include "mp25_8_opt_kernel.h"
#include <iostream>
#include <fstream>

#define PIXEL_WIDTH 32
#define BURST_WIDTH 256

#include "runtime/test_utils.h"

using namespace std;

int main() {
  srand(234);
  const int nrows = 128;
  const int ncols = 128;
  uint64_t img_pixels = nrows*ncols;
  const uint64_t bits_per_pixel = PIXEL_WIDTH;
  uint64_t img_bits = bits_per_pixel*img_pixels;
  const uint64_t num_transfers = img_bits / BURST_WIDTH;
  const uint64_t pixels_per_burst = BURST_WIDTH / bits_per_pixel;

  cout << "num transfers    : " << num_transfers << endl;
  cout << "pixels / transfer: " << pixels_per_burst << endl;

  const uint64_t transfer_cols = ncols / pixels_per_burst;
  ap_uint<BURST_WIDTH>* mp25_8 = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  ap_uint<BURST_WIDTH>* in_oc = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  fill_array_decimal<bits_per_pixel>("in_oc_input_pixel.csv", in_oc, nrows, ncols, transfer_cols);
  mp25_8_opt_kernel(mp25_8, in_oc, num_transfers);
  write_results_decimal<bits_per_pixel>("soda_mp25_8_opt_regression_result.csv", mp25_8, nrows, ncols, transfer_cols);
  free(in_oc);
  free(mp25_8);
}
