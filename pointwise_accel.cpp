#include "pointwise.h"

extern "C" {

void pointwise_accel(int* I_id0_read_arg, int* out_plus_one0_write_arg, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = int* I_id0_read_arg offset = slave bundle = gmem
#pragma HLS INTERFACE m_axi port = int* out_plus_one0_write_arg offset = slave bundle = gmem
#pragma HLS INTERFACE m_axilite port = int* I_id0_read_arg offset = slave bundle = control
#pragma HLS INTERFACE m_axilite port = int* out_plus_one0_write_arg offset = slave bundle = control
#pragma HLS INTERFACE m_axilite port = const int size offset = slave bundle = control

  hls::stream<int> in;
  hls::stream<int> out;

  read_input(in_arg, in, size);

  pointwise(in, out);

  write_output(out_arg, out, size);
}
