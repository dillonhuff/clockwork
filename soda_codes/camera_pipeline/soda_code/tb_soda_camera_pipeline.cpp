// AUTO GEN SODA TB
#include "camera_pipeline_kernel.h"
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
  ap_uint<BURST_WIDTH>* hw_output_stencil_clkwrk_write_duplicate0 = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  ap_uint<BURST_WIDTH>* hw_output_stencil_clkwrk_write_duplicate1 = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  ap_uint<BURST_WIDTH>* hw_output_stencil_clkwrk_write_duplicate2 = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  ap_uint<BURST_WIDTH>* hw_input_stencil = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  fill_array_decimal<bits_per_pixel>("hw_input_stencil_input_pixel.csv", hw_input_stencil, nrows, ncols, transfer_cols);
  camera_pipeline_kernel(hw_output_stencil_clkwrk_write_duplicate0, hw_output_stencil_clkwrk_write_duplicate1, hw_output_stencil_clkwrk_write_duplicate2, hw_input_stencil, num_transfers);
  write_results_decimal<bits_per_pixel>("soda_camera_pipeline_regression_result.csv", hw_output_stencil_clkwrk_write_duplicate0, nrows, ncols, transfer_cols);
  write_results_decimal<bits_per_pixel>("soda_camera_pipeline_regression_result.csv", hw_output_stencil_clkwrk_write_duplicate1, nrows, ncols, transfer_cols);
  write_results_decimal<bits_per_pixel>("soda_camera_pipeline_regression_result.csv", hw_output_stencil_clkwrk_write_duplicate2, nrows, ncols, transfer_cols);
  free(hw_input_stencil);
  free(hw_output_stencil_clkwrk_write_duplicate0);
  free(hw_output_stencil_clkwrk_write_duplicate1);
  free(hw_output_stencil_clkwrk_write_duplicate2);
}
