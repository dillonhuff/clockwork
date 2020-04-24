#include "blended_naive.h"

extern "C" {

void blended_naive_accel(int* in_update_0_read_arg, int* blended_update_0_write_arg, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = int* in_update_0_read_arg offset = slave bundle = gmem
#pragma HLS INTERFACE m_axi port = int* blended_update_0_write_arg offset = slave bundle = gmem
#pragma HLS INTERFACE m_axilite port = int* in_update_0_read_arg offset = slave bundle = control
#pragma HLS INTERFACE m_axilite port = int* blended_update_0_write_arg offset = slave bundle = control
#pragma HLS INTERFACE m_axilite port = const int size offset = slave bundle = control

  hls::stream<int> in_off_chip;
  hls::stream<int> blended;

  read_input(in_off_chip_arg, in_off_chip, size);

  blended_naive(in_off_chip, blended);

  write_output(blended_arg, blended, size);
}
