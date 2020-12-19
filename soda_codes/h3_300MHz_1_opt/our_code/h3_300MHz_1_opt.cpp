#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: h3_300MHz_1_opt_compute_units.h
#include "h3_300MHz_1_opt_compute_units.h"

// Total re-use buffer capacity: 0 bits


// Operation logic
inline void h3_300MHz_1_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */h3_300MHz_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: in
	auto in_0_c__0_value = in.read();
	auto compute_result = h3_300MHz_1_generated_compute_unrolled_1(in_0_c__0_value);
	// Produce: h3_300MHz_1
	h3_300MHz_1.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void h3_300MHz_1_opt(HWStream<hw_uint<32> >& /* get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* get_args num ports = 1 */h3_300MHz_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("h3_300MHz_1_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { h3_300MHz_1_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
//   { h3_300MHz_1_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
// Condition for h3_300MHz_1_update_0(((-1 + i2 == 0) && (i1 >= 0) && (63 - i1 >= 0) && (i0 >= 0) && (63 - i0 >= 0)))

  /*
  // Schedules...
    // h3_300MHz_1_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
for (int c0 = 0; c0 <= 63; c0++) {
  for (int c1 = 0; c1 <= 63; c1++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

    if ((0 <= c1 && c1 <= 63) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 63) && ((c0 - 0) % 1 == 0)) {
      h3_300MHz_1_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

  }
}

  */
	  // Schedules...
	    // h3_300MHz_1_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	for (int c0 = 0; c0 <= 63; c0++) {
	  for (int c1 = 0; c1 <= 63; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((0 <= c1 && c1 <= 63) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 63) && ((c0 - 0) % 1 == 0)) {
	      h3_300MHz_1_update_0(in /* buf name */, h3_300MHz_1, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void h3_300MHz_1_opt_wrapper(HWStream<hw_uint<32> >& /* get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* get_args num ports = 1 */h3_300MHz_1, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    h3_300MHz_1_opt(in, h3_300MHz_1);
  }
}
#ifdef __VIVADO_SYNTH__
  // { h3_300MHz_1_update_0[root = 0, h3_300MHz_1_0, h3_300MHz_1_1] -> h3_300MHz_1[0, 0] : 0 <= h3_300MHz_1_0 <= 63 and 0 <= h3_300MHz_1_1 <= 63 }
const int h3_300MHz_1_update_0_write_pipe0_num_transfers = 4096;
  // { h3_300MHz_1_update_0[root = 0, h3_300MHz_1_0, h3_300MHz_1_1] -> in[0, 0] : 0 <= h3_300MHz_1_0 <= 63 and 0 <= h3_300MHz_1_1 <= 63 }
const int h3_300MHz_1_update_0_read_pipe0_num_transfers = 4096;


extern "C" {

void h3_300MHz_1_opt_accel(hw_uint<32>* h3_300MHz_1_update_0_read_pipe0, hw_uint<32>* h3_300MHz_1_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = h3_300MHz_1_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = h3_300MHz_1_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = h3_300MHz_1_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = h3_300MHz_1_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<32> > h3_300MHz_1_update_0_read_pipe0_channel;
  static HWStream<hw_uint<32> > h3_300MHz_1_update_0_write_pipe0_channel;

  burst_read<32>(h3_300MHz_1_update_0_read_pipe0, h3_300MHz_1_update_0_read_pipe0_channel, h3_300MHz_1_update_0_read_pipe0_num_transfers*size);

  h3_300MHz_1_opt_wrapper(h3_300MHz_1_update_0_read_pipe0_channel, h3_300MHz_1_update_0_write_pipe0_channel, size);

  burst_write<32>(h3_300MHz_1_update_0_write_pipe0, h3_300MHz_1_update_0_write_pipe0_channel, h3_300MHz_1_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void h3_300MHz_1_opt_rdai(HWStream<hw_uint<32> >& h3_300MHz_1_update_0_read_pipe0, HWStream<hw_uint<32> >&  h3_300MHz_1_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = h3_300MHz_1_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = h3_300MHz_1_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  h3_300MHz_1_opt(h3_300MHz_1_update_0_read_pipe0, h3_300MHz_1_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

