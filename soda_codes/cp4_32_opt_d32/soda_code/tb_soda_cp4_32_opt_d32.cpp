// AUTO GEN SODA TB
#include "cp4_32_opt_d32_kernel.h"
#include <iostream>
#include <fstream>

#define PIXEL_WIDTH 16
#define BURST_WIDTH 512

#include "runtime/test_utils.h"

using namespace std;

int main() {
  srand(234);
  const int nrows = 1088;
  const int ncols = 2016;
  uint64_t img_pixels = nrows*ncols;
  const uint64_t bits_per_pixel = PIXEL_WIDTH;
  uint64_t img_bits = bits_per_pixel*img_pixels;
  const uint64_t num_transfers = img_bits / BURST_WIDTH;
  const uint64_t pixels_per_burst = BURST_WIDTH / bits_per_pixel;

  cout << "num transfers    : " << num_transfers << endl;
  cout << "pixels / transfer: " << pixels_per_burst << endl;

  const uint64_t transfer_cols = ncols / pixels_per_burst;
  ap_uint<BURST_WIDTH>* cp4_32 = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  ap_uint<BURST_WIDTH>* raw_oc = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  fill_array_decimal<bits_per_pixel>("raw_oc_input_pixel.csv", raw_oc, nrows, ncols, transfer_cols);
  cp4_32_opt_d32_kernel(cp4_32, raw_oc, num_transfers);
  write_results_decimal<bits_per_pixel>("soda_cp4_32_opt_d32_regression_result.csv", cp4_32, nrows, ncols, transfer_cols);
  free(raw_oc);
  free(cp4_32);
}
