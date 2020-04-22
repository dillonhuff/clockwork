#include "two_input_mag_opt_kernel.h"
#include <iostream>
#include <fstream>
#define PIXEL_WIDTH 32
#define BURST_WIDTH 32
#include "runtime/test_utils.h"

using namespace std;

int main() {
  const int nrows = 32;
  const int ncols = 32;
  uint64_t img_pixels = nrows*ncols;
  const uint64_t bits_per_pixel = PIXEL_WIDTH;
  uint64_t img_bits = bits_per_pixel*img_pixels;
const uint64_t num_transfers = img_bits / BURST_WIDTH;
const uint64_t pixels_per_burst = BURST_WIDTH / bits_per_pixel;
  cout << "num transfers    : " << num_transfers << endl;
cout << "pixels / transfer: " << pixels_per_burst << endl;
const uint64_t transfer_cols = ncols / pixels_per_burst;
  ap_uint<BURST_WIDTH>* y_res = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
ap_uint<BURST_WIDTH>* u = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>) * num_transfers);
ap_uint<BURST_WIDTH>* f = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>) * num_transfers);
fill_array<bits_per_pixel>("u_input_pixel.csv", u, nrows, ncols, transfer_cols);
fill_array<bits_per_pixel>("f_input_pixel.csv", f, nrows, ncols, transfer_cols);
two_input_mag_opt_kernel(y_res, f, u, num_transfers);
  write_results<bits_per_pixel>("soda_two_input_mag_opt_regression_result.csv", y_res, nrows, ncols, transfer_cols);
  free(y_res);
}
