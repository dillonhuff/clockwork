#include "unsharp.h"

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

void unsharp_accel(int* store_I_from_in_read_arg, int* store_out_from_Diff_write_arg, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = store_I_from_in_read offset = slave bundle = gmem
#pragma HLS INTERFACE m_axi port = store_out_from_Diff_write offset = slave bundle = gmem

#pragma HLS INTERFACE s_axilite port = store_I_from_in_read bundle = control
#pragma HLS INTERFACE s_axilite port = store_out_from_Diff_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static hls::stream<hw_uint<32> > in;
  static hls::stream<hw_uint<32> > out;

  read_input(in_arg, in, size);

  unsharp(in, out);

  write_output(out_arg, out, size);
}

}
