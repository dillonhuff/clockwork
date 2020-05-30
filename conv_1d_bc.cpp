#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "accumulate_3.h"

#include "hw_classes.h"

struct M_cache {
};



inline void M_get_input_0_write(hw_uint<32> & M_get_input_0, M_cache& M, int root, int p) {
}

// # of bundles = 1
// get_input_write
//	M_get_input_0
inline void M_get_input_write_bundle_write(hw_uint<32>& get_input_write, M_cache& M, int root, int p) {
	hw_uint<32>  M_get_input_0_res = get_input_write.extract<0, 31>();
	M_get_input_0_write(M_get_input_0_res, M, root, p);
}



// Operation logic
inline void get_input(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in, M_cache& M, int root, int p) {
	// Consume: in
	auto in_p_value = in.read();
	// Produce: M
	M_get_input_write_bundle_write(in_p_value, M, root, p);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void compute_output(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */out, int root, int c) {
	auto compute_result = accumulate_3();
	// Produce: out
	out.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void conv_1d_bc(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out, int num_epochs) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("conv_1d_bc_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  M_cache M;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

  for (int epoch = 0; epoch < num_epochs; epoch++) {
	for (int c0 = 0; c0 <= 10; c0 += 1) {
	  if (c0 <= 9)
	get_input(in, M, 0, c0);
	  if (c0 >= 1)
	compute_output(out, 0, c0 - 1);
	}
	
  }

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void conv_1d_bc(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out) {

  conv_1d_bc(in, out, 1);
}
#ifdef __VIVADO_SYNTH__
#include "conv_1d_bc.h"

const int get_input_read_num_transfers = 0;
const int compute_output_write_num_transfers = 0;


extern "C" {

static void read_get_input_read(hw_uint<32>* input, HWStream<hw_uint<32> >& v, const int size) {
  hw_uint<32> burst_reg;
  int num_transfers = get_input_read_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void write_compute_output_write(hw_uint<32>* output, HWStream<hw_uint<32> >& v, const int size) {
  hw_uint<32> burst_reg;
  int num_transfers = compute_output_write_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

void conv_1d_bc_accel(hw_uint<32>* get_input_read, hw_uint<32>* compute_output_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = get_input_read offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = compute_output_write offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = get_input_read bundle = control
#pragma HLS INTERFACE s_axilite port = compute_output_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<32> > get_input_read_channel;
  static HWStream<hw_uint<32> > compute_output_write_channel;

  read_get_input_read(get_input_read, get_input_read_channel, size);

  conv_1d_bc(get_input_read_channel, compute_output_write_channel, size);

  write_compute_output_write(compute_output_write, compute_output_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

