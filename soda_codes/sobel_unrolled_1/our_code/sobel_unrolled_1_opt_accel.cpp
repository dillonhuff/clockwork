#include "sobel_unrolled_1_opt.h"

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

void sobel_unrolled_1_opt_accel(int* img_update_0_read_arg, int* sobel_unrolled_1_update_0_write_arg, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = img_update_0_read offset = slave bundle = gmem
#pragma HLS INTERFACE m_axi port = sobel_unrolled_1_update_0_write offset = slave bundle = gmem

#pragma HLS INTERFACE s_axilite port = img_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = sobel_unrolled_1_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static hls::stream<hw_uint<32> > off_chip_img;
  static hls::stream<hw_uint<32> > sobel_unrolled_1;

  read_input(off_chip_img_arg, off_chip_img, size);

  sobel_unrolled_1_opt(off_chip_img, sobel_unrolled_1);

  write_output(sobel_unrolled_1_arg, sobel_unrolled_1, size);
}

}
