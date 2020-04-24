#include "gray_naive.h"

extern "C" {

void gray_naive_accel(int* Img_update_0_read_arg, int* gray_update_0_write_arg, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = int* Img_update_0_read_arg offset = slave bundle = gmem
#pragma HLS INTERFACE m_axi port = int* gray_update_0_write_arg offset = slave bundle = gmem
#pragma HLS INTERFACE m_axilite port = int* Img_update_0_read_arg offset = slave bundle = control
#pragma HLS INTERFACE m_axilite port = int* gray_update_0_write_arg offset = slave bundle = control
#pragma HLS INTERFACE m_axilite port = const int size offset = slave bundle = control

  hls::stream<int> Img_off;
  hls::stream<int> gray;

  read_input(Img_off_arg, Img_off, size);

  gray_naive(Img_off, gray);

  write_output(gray_arg, gray, size);
}
