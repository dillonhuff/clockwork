#include "gaussian_pyramid.h"

extern "C" {

void gaussian_pyramid_accel(int* store_I_from_in_read_arg, int* store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_write_arg, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = int* store_I_from_in_read_arg offset = slave bundle = gmem
#pragma HLS INTERFACE m_axi port = int* store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_write_arg offset = slave bundle = gmem
#pragma HLS INTERFACE m_axilite port = int* store_I_from_in_read_arg offset = slave bundle = control
#pragma HLS INTERFACE m_axilite port = int* store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_write_arg offset = slave bundle = control
#pragma HLS INTERFACE m_axilite port = const int size offset = slave bundle = control

  hls::stream<int> in;
  hls::stream<int> I_blr_ds_blr_ds_out;

  read_input(in_arg, in, size);

  gaussian_pyramid(in, I_blr_ds_blr_ds_out);

  write_output(I_blr_ds_blr_ds_out_arg, I_blr_ds_blr_ds_out, size);
}
