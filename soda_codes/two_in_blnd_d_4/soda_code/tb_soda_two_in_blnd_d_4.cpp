// AUTO GEN SODA TB
#include "two_in_blnd_d_4_kernel.h"
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
  ap_uint<BURST_WIDTH>* out = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  ap_uint<BURST_WIDTH>* in0_oc = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  fill_array_decimal<bits_per_pixel>("in0_oc_input_pixel.csv", in0_oc, nrows, ncols, transfer_cols);
  ap_uint<BURST_WIDTH>* in1_oc = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  fill_array_decimal<bits_per_pixel>("in1_oc_input_pixel.csv", in1_oc, nrows, ncols, transfer_cols);
  two_in_blnd_d_4_kernel(out, in0_oc, in1_oc, num_transfers);
  write_results_decimal<bits_per_pixel>("soda_two_in_blnd_d_4_regression_result.csv", out, nrows, ncols, transfer_cols);
  free(in0_oc);
  free(in1_oc);
  free(out);
}
