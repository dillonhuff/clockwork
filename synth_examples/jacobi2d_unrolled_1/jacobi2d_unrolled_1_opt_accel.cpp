#include "jacobi2d_unrolled_1_opt.h"

#define INPUT_SIZE (18*18)
#define OUTPUT_SIZE (16*16)

extern "C" {

static void read_input(int* input, hls::stream<hw_uint<32> >& v, const int size) {
  for (int i = 0; i < INPUT_SIZE; i++) {
    #pragma HLS pipeline II=1
    v.write(input[i]);
  }
}

static void write_output(int* output, hls::stream<hw_uint<32> >& v, const int size) {
  for (int i = 0; i < OUTPUT_SIZE; i++) {
    #pragma HLS pipeline II=1
    output[i] = v.read();
  }
}

void jacobi2d_unrolled_1_opt_accel(int* t1_update_0_read_arg, int* jacobi2d_unrolled_1_update_0_write_arg, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = t1_update_0_read offset = slave bundle = gmem
#pragma HLS INTERFACE m_axi port = jacobi2d_unrolled_1_update_0_write offset = slave bundle = gmem

#pragma HLS INTERFACE s_axilite port = t1_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = jacobi2d_unrolled_1_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static hls::stream<hw_uint<32> > t1_arg;
  static hls::stream<hw_uint<32> > jacobi2d_unrolled_1;

  read_input(t1_arg_arg, t1_arg, size);

  jacobi2d_unrolled_1_opt(t1_arg, jacobi2d_unrolled_1);

  write_output(jacobi2d_unrolled_1_arg, jacobi2d_unrolled_1, size);
}

}
