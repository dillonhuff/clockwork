#include "jacobi2d_unrolled_1_opt.h"

extern "C" {

void jacobi2d_unrolled_1_opt_accel(int* t1_update_0_read_arg, int* jacobi2d_unrolled_1_update_0_write_arg, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = int* t1_update_0_read_arg offset = slave bundle = gmem
#pragma HLS INTERFACE m_axi port = int* jacobi2d_unrolled_1_update_0_write_arg offset = slave bundle = gmem
#pragma HLS INTERFACE m_axilite port = int* t1_update_0_read_arg offset = slave bundle = control
#pragma HLS INTERFACE m_axilite port = int* jacobi2d_unrolled_1_update_0_write_arg offset = slave bundle = control
#pragma HLS INTERFACE m_axilite port = const int size offset = slave bundle = control

  hls::stream<int> t1_arg;
  hls::stream<int> jacobi2d_unrolled_1;

  read_input(t1_arg_arg, t1_arg, size);

  jacobi2d_unrolled_1_opt(t1_arg, jacobi2d_unrolled_1);

  write_output(jacobi2d_unrolled_1_arg, jacobi2d_unrolled_1, size);
}
