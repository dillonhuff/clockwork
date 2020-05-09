#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "pw16_opt_compute_units.h"

#include "hw_classes.h"

struct input_input_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 299], [0, 299]}
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct input_cache {
  input_input_update_0_write0_merged_banks_1_cache input_input_update_0_write0_merged_banks_1;
};



inline void input_input_update_0_write0_write(hw_uint<16>& input_input_update_0_write0, input_cache& input, int d0, int d1) {
  input.input_input_update_0_write0_merged_banks_1.push(input_input_update_0_write0);
}

inline hw_uint<16> pw16_rd0_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // pw16_rd0 read pattern: { pw16_update_0[d0, d1] -> input[d0, d1] : 0 <= d0 <= 299 and 0 <= d1 <= 299 }
  // Read schedule : { pw16_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 299 and 0 <= d1 <= 299 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 299 and 0 <= d1 <= 299 }
  // DD fold: {  }
  auto value_input_input_update_0_write0 = input.input_input_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_input_input_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// input_update_0_write
//	input_input_update_0_write0
inline void input_input_update_0_write_bundle_write(hw_uint<16>& input_update_0_write, input_cache& input, int d0, int d1) {
	hw_uint<16> input_input_update_0_write0_res = input_update_0_write.extract<0, 15>();
	input_input_update_0_write0_write(input_input_update_0_write0_res, input, d0, d1);
}

// pw16_update_0_read
//	pw16_rd0
inline hw_uint<16> input_pw16_update_0_read_bundle_read(input_cache& input, int d0, int d1) {
  // # of ports in bundle: 1
    // pw16_rd0

	hw_uint<16> result;
	hw_uint<16> pw16_rd0_res = pw16_rd0_select(input, d0, d1);
	set_at<0, 16>(result, pw16_rd0_res);
	return result;
}



// Operation logic
inline void input_update_0(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */input_arg, input_cache& input, int d0, int d1) {
	// Consume: input_arg
	auto input_arg_0_c__0_value = input_arg.read();
	auto compute_result = input_generated_compute_unrolled_1(input_arg_0_c__0_value);
	// Produce: input
	input_input_update_0_write_bundle_write(compute_result, input, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "input_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void pw16_update_0(input_cache& input, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */pw16, int d0, int d1) {
	// Consume: input
	auto input_0_c__0_value = input_pw16_update_0_read_bundle_read(input/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "pw16_update_0_input," << d0<< "," << d1<< "," <<  input_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = pw16_generated_compute_unrolled_1(input_0_c__0_value);
	// Produce: pw16
	pw16.write(compute_result);

#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "pw16_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

// Driver function
void pw16_opt(HWStream<hw_uint<16> >& /* get_args num ports = 1 */input_arg, HWStream<hw_uint<16> >& /* get_args num ports = 1 */pw16, uint64_t num_epochs) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("pw16_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  input_cache input;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
	#ifdef __VIVADO_SYNTH__
	#pragma HLS inline recursive
	#endif // __VIVADO_SYNTH__
	
	for (int c0 = 0; c0 <= 299; c0++) {
	  for (int c1 = 0; c1 <= 299; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((0 <= c1 && c1 <= 299) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 299) && ((c0 - 0) % 1 == 0)) {
	input_update_0(input_arg, input, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 299) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 299) && ((c0 - 0) % 1 == 0)) {
	pw16_update_0(input, pw16, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void pw16_opt(HWStream<hw_uint<16> >& /* get_args num ports = 1 */input_arg, HWStream<hw_uint<16> >& /* get_args num ports = 1 */pw16) {

  pw16_opt(input_arg, pw16, 1);
}
#ifdef __VIVADO_SYNTH__
#include "pw16_opt.h"

#define INPUT_SIZE 90000
#define OUTPUT_SIZE 90000
extern "C" {

static void read_input(hw_uint<16>* input, HWStream<hw_uint<16> >& v, const int size) {
  hw_uint<16> burst_reg;
  for (int i = 0; i < INPUT_SIZE; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void write_output(hw_uint<16>* output, HWStream<hw_uint<16> >& v, const int size) {
  hw_uint<16> burst_reg;
  for (int i = 0; i < OUTPUT_SIZE; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

void pw16_opt_accel(hw_uint<16>* input_update_0_read, hw_uint<16>* pw16_update_0_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = input_update_0_read offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = pw16_update_0_write offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = input_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = pw16_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<16> > input_update_0_read_channel;
  static HWStream<hw_uint<16> > pw16_update_0_write_channel;

  read_input(input_update_0_read, input_update_0_read_channel, size);

  pw16_opt(input_update_0_read_channel, pw16_update_0_write_channel);

  write_output(pw16_update_0_write, pw16_update_0_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

