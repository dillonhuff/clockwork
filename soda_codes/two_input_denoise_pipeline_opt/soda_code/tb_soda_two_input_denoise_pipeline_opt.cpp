#include "two_input_denoise_pipeline_opt.h"
#include <iostream>
#include <fstream>
#define PIXEL_WIDTH 32
#define BURST_WIDTH 32
#include "runtime/test_utils.h"

using namespace std;

int main() {
  ap_uint<BURST_WIDTH>* y_res = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  write_results<bits_per_pixel>("soda_two_input_denoise_pipeline_opt_regression_result.csv", y_res, nrows, ncols, transfer_cols);
  free(y_res);
}
