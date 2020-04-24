#include "soda_blur.h"

extern "C" {

void soda_blur_accel(int* I_id0_read_arg, int* I_id1_read_arg, int* out_0_blur_30_write_arg, int* out_1_blur_31_write_arg, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = int* I_id0_read_arg offset = slave bundle = gmem
#pragma HLS INTERFACE m_axi port = int* I_id1_read_arg offset = slave bundle = gmem
#pragma HLS INTERFACE m_axi port = int* out_0_blur_30_write_arg offset = slave bundle = gmem
#pragma HLS INTERFACE m_axi port = int* out_1_blur_31_write_arg offset = slave bundle = gmem
#pragma HLS INTERFACE m_axilite port = int* I_id0_read_arg offset = slave bundle = control
#pragma HLS INTERFACE m_axilite port = int* I_id1_read_arg offset = slave bundle = control
#pragma HLS INTERFACE m_axilite port = int* out_0_blur_30_write_arg offset = slave bundle = control
#pragma HLS INTERFACE m_axilite port = int* out_1_blur_31_write_arg offset = slave bundle = control
#pragma HLS INTERFACE m_axilite port = const int size offset = slave bundle = control

  hls::stream<int> in_0;
  hls::stream<int> in_1;
  hls::stream<int> out_0;
  hls::stream<int> out_1;

  read_input(in_0_arg, in_0, size);
  read_input(in_1_arg, in_1, size);

  soda_blur(in_0, in_1, out_0, out_1);

  write_output(out_0_arg, out_0, size);
  write_output(out_1_arg, out_1, size);
}
