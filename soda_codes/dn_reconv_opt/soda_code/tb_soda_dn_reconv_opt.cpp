// AUTO GEN SODA TB
#include "dn_reconv_opt_kernel.h"
#include <iostream>
#include <fstream>

#define PIXEL_WIDTH 16
#define BURST_WIDTH 16

#include "runtime/test_utils.h"

using namespace std;

int main() {
  srand(234);
  const int nrows = 8;
  const int ncols = 8;
  uint64_t img_pixels = nrows*ncols;
  const uint64_t bits_per_pixel = PIXEL_WIDTH;
  uint64_t img_bits = bits_per_pixel*img_pixels;
  const uint64_t num_transfers = img_bits / BURST_WIDTH;
  const uint64_t pixels_per_burst = BURST_WIDTH / bits_per_pixel;

  cout << "num transfers    : " << num_transfers << endl;
  cout << "pixels / transfer: " << pixels_per_burst << endl;

  const uint64_t transfer_cols = ncols / pixels_per_burst;
  ap_uint<BURST_WIDTH>* dn_reconv = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  ap_uint<BURST_WIDTH>* f_oc = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  fill_array_decimal<bits_per_pixel>("f_oc_input_pixel.csv", f_oc, nrows, ncols, transfer_cols);
  ap_uint<BURST_WIDTH>* u_oc = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  fill_array_decimal<bits_per_pixel>("u_oc_input_pixel.csv", u_oc, nrows, ncols, transfer_cols);
  dn_reconv_opt_kernel(dn_reconv, f_oc, u_oc, num_transfers);
  write_results_decimal<bits_per_pixel>("soda_dn_reconv_opt_regression_result.csv", dn_reconv, nrows, ncols, transfer_cols);
  free(f_oc);
  free(u_oc);
  free(dn_reconv);
}
