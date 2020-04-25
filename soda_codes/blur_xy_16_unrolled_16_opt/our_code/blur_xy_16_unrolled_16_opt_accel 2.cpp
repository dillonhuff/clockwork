#include "blur_xy_16_unrolled_16_opt.h"

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

void blur_xy_16_unrolled_16_opt_accel(int* input_update_0_read_arg, int* blur_xy_16_unrolled_16_update_0_write_arg, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = input_update_0_read offset = slave bundle = gmem
#pragma HLS INTERFACE m_axi port = blur_xy_16_unrolled_16_update_0_write offset = slave bundle = gmem

#pragma HLS INTERFACE s_axilite port = input_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = blur_xy_16_unrolled_16_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static hls::stream<hw_uint<32> > input_arg;
  static hls::stream<hw_uint<32> > blur_xy_16_unrolled_16;

  read_input(input_arg_arg, input_arg, size);

  blur_xy_16_unrolled_16_opt(input_arg, blur_xy_16_unrolled_16);

  write_output(blur_xy_16_unrolled_16_arg, blur_xy_16_unrolled_16, size);
}

}
