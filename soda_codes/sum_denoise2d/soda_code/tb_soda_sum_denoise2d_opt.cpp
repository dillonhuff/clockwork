// AUTO GEN SODA TB
#include "sum_denoise2d_opt_kernel.h"
#include <iostream>
#include <fstream>

#define PIXEL_WIDTH 32
#define BURST_WIDTH 32

#include "runtime/test_utils.h"

using namespace std;

int main() {
  srand(234);
  const int nrows = 30;
  const int ncols = 30;
  uint64_t img_pixels = nrows*ncols;
  const uint64_t bits_per_pixel = PIXEL_WIDTH;
  uint64_t img_bits = bits_per_pixel*img_pixels;
  const uint64_t num_transfers = img_bits / BURST_WIDTH;
  const uint64_t pixels_per_burst = BURST_WIDTH / bits_per_pixel;

  cout << "num transfers    : " << num_transfers << endl;
  cout << "pixels / transfer: " << pixels_per_burst << endl;

  const uint64_t transfer_cols = ncols / pixels_per_burst;
  ap_uint<BURST_WIDTH>* sum_denoise2d = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  ap_uint<BURST_WIDTH>* f_off_chip = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  fill_array_decimal<bits_per_pixel>("f_off_chip_input_pixel.csv", f_off_chip, nrows, ncols, transfer_cols);
  ap_uint<BURST_WIDTH>* u_off_chip = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  fill_array_decimal<bits_per_pixel>("u_off_chip_input_pixel.csv", u_off_chip, nrows, ncols, transfer_cols);
  sum_denoise2d_opt_kernel(sum_denoise2d, f_off_chip, u_off_chip, num_transfers);
  write_results_decimal<bits_per_pixel>("soda_sum_denoise2d_opt_regression_result.csv", sum_denoise2d, nrows, ncols, transfer_cols);
  free(f_off_chip);
  free(u_off_chip);
  free(sum_denoise2d);
}
