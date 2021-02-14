// AUTO GEN SODA TB
#include "resnet88_kernel.h"
#include <iostream>
#include <fstream>

#define PIXEL_WIDTH 16
#define BURST_WIDTH 16

#include "runtime/test_utils.h"

using namespace std;

int main() {
  srand(234);
  const int nrows = -1;
  const int ncols = -1;
  uint64_t img_pixels = nrows*ncols;
  const uint64_t bits_per_pixel = PIXEL_WIDTH;
  uint64_t img_bits = bits_per_pixel*img_pixels;
  const uint64_t num_transfers = img_bits / BURST_WIDTH;
  const uint64_t pixels_per_burst = BURST_WIDTH / bits_per_pixel;

  cout << "num transfers    : " << num_transfers << endl;
  cout << "pixels / transfer: " << pixels_per_burst << endl;

  const uint64_t transfer_cols = ncols / pixels_per_burst;
  ap_uint<BURST_WIDTH>* hw_output_stencil_clkwrk_10 = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  ap_uint<BURST_WIDTH>* hw_output_stencil_clkwrk_11 = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  ap_uint<BURST_WIDTH>* hw_output_stencil_clkwrk_12 = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  ap_uint<BURST_WIDTH>* hw_output_stencil_clkwrk_13 = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  ap_uint<BURST_WIDTH>* hw_output_stencil_clkwrk_14 = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  ap_uint<BURST_WIDTH>* hw_output_stencil_clkwrk_15 = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  ap_uint<BURST_WIDTH>* hw_output_stencil_clkwrk_8 = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  ap_uint<BURST_WIDTH>* hw_output_stencil_clkwrk_9 = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  ap_uint<BURST_WIDTH>* hw_input_stencil_clkwrk_0 = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  fill_array_decimal<bits_per_pixel>("hw_input_stencil_clkwrk_0_input_pixel.csv", hw_input_stencil_clkwrk_0, nrows, ncols, transfer_cols);
  ap_uint<BURST_WIDTH>* hw_input_stencil_clkwrk_1 = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  fill_array_decimal<bits_per_pixel>("hw_input_stencil_clkwrk_1_input_pixel.csv", hw_input_stencil_clkwrk_1, nrows, ncols, transfer_cols);
  ap_uint<BURST_WIDTH>* hw_input_stencil_clkwrk_2 = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  fill_array_decimal<bits_per_pixel>("hw_input_stencil_clkwrk_2_input_pixel.csv", hw_input_stencil_clkwrk_2, nrows, ncols, transfer_cols);
  ap_uint<BURST_WIDTH>* hw_input_stencil_clkwrk_3 = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  fill_array_decimal<bits_per_pixel>("hw_input_stencil_clkwrk_3_input_pixel.csv", hw_input_stencil_clkwrk_3, nrows, ncols, transfer_cols);
  ap_uint<BURST_WIDTH>* hw_input_stencil_clkwrk_4 = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  fill_array_decimal<bits_per_pixel>("hw_input_stencil_clkwrk_4_input_pixel.csv", hw_input_stencil_clkwrk_4, nrows, ncols, transfer_cols);
  ap_uint<BURST_WIDTH>* hw_input_stencil_clkwrk_5 = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  fill_array_decimal<bits_per_pixel>("hw_input_stencil_clkwrk_5_input_pixel.csv", hw_input_stencil_clkwrk_5, nrows, ncols, transfer_cols);
  ap_uint<BURST_WIDTH>* hw_input_stencil_clkwrk_6 = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  fill_array_decimal<bits_per_pixel>("hw_input_stencil_clkwrk_6_input_pixel.csv", hw_input_stencil_clkwrk_6, nrows, ncols, transfer_cols);
  ap_uint<BURST_WIDTH>* hw_input_stencil_clkwrk_7 = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  fill_array_decimal<bits_per_pixel>("hw_input_stencil_clkwrk_7_input_pixel.csv", hw_input_stencil_clkwrk_7, nrows, ncols, transfer_cols);
  ap_uint<BURST_WIDTH>* hw_kernel_stencil = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  fill_array_decimal<bits_per_pixel>("hw_kernel_stencil_input_pixel.csv", hw_kernel_stencil, nrows, ncols, transfer_cols);
  resnet88_kernel(hw_output_stencil_clkwrk_10, hw_output_stencil_clkwrk_11, hw_output_stencil_clkwrk_12, hw_output_stencil_clkwrk_13, hw_output_stencil_clkwrk_14, hw_output_stencil_clkwrk_15, hw_output_stencil_clkwrk_8, hw_output_stencil_clkwrk_9, hw_input_stencil_clkwrk_0, hw_input_stencil_clkwrk_1, hw_input_stencil_clkwrk_2, hw_input_stencil_clkwrk_3, hw_input_stencil_clkwrk_4, hw_input_stencil_clkwrk_5, hw_input_stencil_clkwrk_6, hw_input_stencil_clkwrk_7, hw_kernel_stencil, num_transfers);
  write_results_decimal<bits_per_pixel>("soda_resnet88_regression_result.csv", hw_output_stencil_clkwrk_10, nrows, ncols, transfer_cols);
  write_results_decimal<bits_per_pixel>("soda_resnet88_regression_result.csv", hw_output_stencil_clkwrk_11, nrows, ncols, transfer_cols);
  write_results_decimal<bits_per_pixel>("soda_resnet88_regression_result.csv", hw_output_stencil_clkwrk_12, nrows, ncols, transfer_cols);
  write_results_decimal<bits_per_pixel>("soda_resnet88_regression_result.csv", hw_output_stencil_clkwrk_13, nrows, ncols, transfer_cols);
  write_results_decimal<bits_per_pixel>("soda_resnet88_regression_result.csv", hw_output_stencil_clkwrk_14, nrows, ncols, transfer_cols);
  write_results_decimal<bits_per_pixel>("soda_resnet88_regression_result.csv", hw_output_stencil_clkwrk_15, nrows, ncols, transfer_cols);
  write_results_decimal<bits_per_pixel>("soda_resnet88_regression_result.csv", hw_output_stencil_clkwrk_8, nrows, ncols, transfer_cols);
  write_results_decimal<bits_per_pixel>("soda_resnet88_regression_result.csv", hw_output_stencil_clkwrk_9, nrows, ncols, transfer_cols);
  free(hw_input_stencil_clkwrk_0);
  free(hw_input_stencil_clkwrk_1);
  free(hw_input_stencil_clkwrk_2);
  free(hw_input_stencil_clkwrk_3);
  free(hw_input_stencil_clkwrk_4);
  free(hw_input_stencil_clkwrk_5);
  free(hw_input_stencil_clkwrk_6);
  free(hw_input_stencil_clkwrk_7);
  free(hw_kernel_stencil);
  free(hw_output_stencil_clkwrk_10);
  free(hw_output_stencil_clkwrk_11);
  free(hw_output_stencil_clkwrk_12);
  free(hw_output_stencil_clkwrk_13);
  free(hw_output_stencil_clkwrk_14);
  free(hw_output_stencil_clkwrk_15);
  free(hw_output_stencil_clkwrk_8);
  free(hw_output_stencil_clkwrk_9);
}
