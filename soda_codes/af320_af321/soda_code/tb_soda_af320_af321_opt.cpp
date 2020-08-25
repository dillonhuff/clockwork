// AUTO GEN SODA TB
#include "af320_af321_opt_kernel.h"
#include <iostream>
#include <fstream>

#define PIXEL_WIDTH 16
#define BURST_WIDTH 512

#include "runtime/test_utils.h"

using namespace std;

int main() {
  srand(234);
  const int nrows = 1080;
  const int ncols = 960;
  uint64_t img_pixels = nrows*ncols;
  const uint64_t bits_per_pixel = PIXEL_WIDTH;
  uint64_t img_bits = bits_per_pixel*img_pixels;
  const uint64_t num_transfers = img_bits / BURST_WIDTH;
  const uint64_t pixels_per_burst = BURST_WIDTH / bits_per_pixel;

  cout << "num transfers    : " << num_transfers << endl;
  cout << "pixels / transfer: " << pixels_per_burst << endl;

  const uint64_t transfer_cols = ncols / pixels_per_burst;
  ap_uint<BURST_WIDTH>* af320 = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  ap_uint<BURST_WIDTH>* af321 = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  ap_uint<BURST_WIDTH>* in_off_chip0_oc = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  fill_array_decimal<bits_per_pixel>("in_off_chip0_oc_input_pixel.csv", in_off_chip0_oc, nrows, ncols, transfer_cols);
  ap_uint<BURST_WIDTH>* in_off_chip1_oc = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  fill_array_decimal<bits_per_pixel>("in_off_chip1_oc_input_pixel.csv", in_off_chip1_oc, nrows, ncols, transfer_cols);
  af320_af321_opt_kernel(af320, af321, in_off_chip0_oc, in_off_chip1_oc, num_transfers);
  write_results_decimal<bits_per_pixel>("soda_af320_af321_opt_regression_result.csv", af320, nrows, ncols, transfer_cols);
  write_results_decimal<bits_per_pixel>("soda_af320_af321_opt_regression_result.csv", af321, nrows, ncols, transfer_cols);
  free(in_off_chip0_oc);
  free(in_off_chip1_oc);
  free(af320);
  free(af321);
}
