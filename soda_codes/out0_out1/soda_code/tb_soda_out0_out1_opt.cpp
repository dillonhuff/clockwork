// AUTO GEN SODA TB
#include "out0_out1_opt_kernel.h"
#include <iostream>
#include <fstream>

#define PIXEL_WIDTH 16
#define BURST_WIDTH 512

#include "runtime/test_utils.h"

using namespace std;

int main() {
  srand(234);
  const int nrows = 1920;
  const int ncols = 1088;
  uint64_t img_pixels = nrows*ncols;
  const uint64_t bits_per_pixel = PIXEL_WIDTH;
  uint64_t img_bits = bits_per_pixel*img_pixels;
  const uint64_t num_transfers = img_bits / BURST_WIDTH;
  const uint64_t pixels_per_burst = BURST_WIDTH / bits_per_pixel;

  cout << "num transfers    : " << num_transfers << endl;
  cout << "pixels / transfer: " << pixels_per_burst << endl;

  const uint64_t transfer_cols = ncols / pixels_per_burst;
  ap_uint<BURST_WIDTH>* out0 = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  ap_uint<BURST_WIDTH>* out1 = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  ap_uint<BURST_WIDTH>* in0_oc = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  fill_array_decimal<bits_per_pixel>("in0_oc_input_pixel.csv", in0_oc, nrows, ncols, transfer_cols);
  ap_uint<BURST_WIDTH>* in1_oc = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  fill_array_decimal<bits_per_pixel>("in1_oc_input_pixel.csv", in1_oc, nrows, ncols, transfer_cols);
  out0_out1_opt_kernel(out0, out1, in0_oc, in1_oc, num_transfers);
  write_results_decimal<bits_per_pixel>("soda_out0_out1_opt_regression_result.csv", out0, nrows, ncols, transfer_cols);
  write_results_decimal<bits_per_pixel>("soda_out0_out1_opt_regression_result.csv", out1, nrows, ncols, transfer_cols);
  free(in0_oc);
  free(in1_oc);
  free(out0);
  free(out1);
}
