// AUTO GEN SODA TB
#include "llf_gs4p_kernel.h"
#include <iostream>
#include <fstream>

#define PIXEL_WIDTH 32
#define BURST_WIDTH 128

#include "runtime/test_utils.h"

using namespace std;

int main() {
  srand(234);
  const int nrows = 2055;
  const int ncols = 2076;
  uint64_t img_pixels = nrows*ncols;
  const uint64_t bits_per_pixel = PIXEL_WIDTH;
  uint64_t img_bits = bits_per_pixel*img_pixels;
  const uint64_t num_transfers = img_bits / BURST_WIDTH;
  const uint64_t pixels_per_burst = BURST_WIDTH / bits_per_pixel;

  cout << "num transfers    : " << num_transfers << endl;
  cout << "pixels / transfer: " << pixels_per_burst << endl;

  const uint64_t transfer_cols = ncols / pixels_per_burst;
  ap_uint<BURST_WIDTH>* gray_out = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  ap_uint<BURST_WIDTH>* gray_in_oc = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  fill_array_decimal<bits_per_pixel>("gray_in_oc_input_pixel.csv", gray_in_oc, nrows, ncols, transfer_cols);
  llf_gs4p_kernel(gray_out, gray_in_oc, num_transfers);
  write_results_decimal<bits_per_pixel>("soda_llf_gs4p_regression_result.csv", gray_out, nrows, ncols, transfer_cols);
  free(gray_in_oc);
  free(gray_out);
}
