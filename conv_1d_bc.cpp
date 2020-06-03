#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "accumulate_3.h"

#include "hw_classes.h"

struct M_get_input_0_to_M_compute_output_3_cache {
	// RAM Box: {[0, 9]}
	// Capacity: 3
	// # of read delays: 3
	fifo<hw_uint<32> , 3> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(2 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct M_get_input_0_merged_banks_3_cache {
	// RAM Box: {[0, 9]}
	// Capacity: 3
	// # of read delays: 3
	 f0;
	 f2;
	 f4;


	inline  peek_0() {
		return f0;
	}

	inline  peek_1() {
		return f2;
	}

	inline  peek_2() {
		return f4;
	}



	inline void push(const  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct M_cache {
  M_get_input_0_to_M_compute_output_3_cache M_get_input_0_to_M_compute_output_3;
  M_get_input_0_merged_banks_3_cache M_get_input_0_merged_banks_3;
};



inline void M_get_input_0_write(hw_uint<32> & M_get_input_0, M_cache& M, int root, int p) {
  M.M_get_input_0_to_M_compute_output_3.push(M_get_input_0);
  M.M_get_input_0_merged_banks_3.push(M_get_input_0);
}

inline hw_uint<32>  M_compute_output_3_select(M_cache& M, int root, int c) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // M_compute_output_3 read pattern: { compute_output[root = 0, c] -> M[c] : 0 <= c <= 8; compute_output[root = 0, c = 9] -> M[9] }
  // Read schedule : { compute_output[root = 0, c] -> [2 + c, 1] : 0 <= c <= 9 }
  // Write schedule: { get_input[root = 0, p] -> [p, 0] : 0 <= p <= 9 }
  // DD fold: { compute_output[root, c] -> 2 : root = 0 and 0 <= c <= 7; compute_output[root, c] -> 1 : root = 0 and c = 8 }
  auto value_M_get_input_0 = M.M_get_input_0_to_M_compute_output_3.peek(/* one reader or all rams */ (-8 + c == 0) ? (1) : (7 - c >= 0) ? (2) : 0);
  return value_M_get_input_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " c = " << c  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  M_compute_output_4_select(M_cache& M, int root, int c) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // M_compute_output_4 read pattern: { compute_output[root = 0, c] -> M[9] : 8 <= c <= 9; compute_output[root = 0, c] -> M[1 + c] : 0 <= c <= 7 }
  // Read schedule : { compute_output[root = 0, c] -> [2 + c, 1] : 0 <= c <= 9 }
  // Write schedule: { get_input[root = 0, p] -> [p, 0] : 0 <= p <= 9 }
  // DD fold: { compute_output[root, c] -> 1 : root = 0 and 0 <= c <= 7 }
  auto value_M_get_input_0 = M.M_get_input_0_merged_banks_3.peek(/* Needs general delay string */ (7 - c >= 0) ? (1) : 0);
  return value_M_get_input_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " c = " << c  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  M_compute_output_5_select(M_cache& M, int root, int c) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // M_compute_output_5 read pattern: { compute_output[root = 0, c] -> M[9] : 7 <= c <= 9; compute_output[root = 0, c] -> M[2 + c] : 0 <= c <= 6 }
  // Read schedule : { compute_output[root = 0, c] -> [2 + c, 1] : 0 <= c <= 9 }
  // Write schedule: { get_input[root = 0, p] -> [p, 0] : 0 <= p <= 9 }
  // DD fold: {  }
  auto value_M_get_input_0 = M.M_get_input_0_merged_banks_3.peek_0();
  return value_M_get_input_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " c = " << c  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 3
// M_get_input_0
//	M_get_input_0
inline void M_M_get_input_0_bundle_write(hw_uint<32>& M_get_input_0, M_cache& M, int root, int p) {
	hw_uint<32>  M_get_input_0_res = M_get_input_0.extract<0, 31>();
	M_get_input_0_write(M_get_input_0_res, M, root, p);
}

// compute_output_read
//	M_compute_output_3
//	M_compute_output_4
//	M_compute_output_5
inline hw_uint<96> M_compute_output_read_bundle_read(M_cache& M, int root, int c) {
  // # of ports in bundle: 3
    // M_compute_output_3
    // M_compute_output_4
    // M_compute_output_5

	hw_uint<96> result;
	hw_uint<32>  M_compute_output_3_res = M_compute_output_3_select(M, root, c);
	set_at<0, 96>(result, M_compute_output_3_res);
	hw_uint<32>  M_compute_output_4_res = M_compute_output_4_select(M, root, c);
	set_at<32, 96>(result, M_compute_output_4_res);
	hw_uint<32>  M_compute_output_5_res = M_compute_output_5_select(M, root, c);
	set_at<64, 96>(result, M_compute_output_5_res);
	return result;
}

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
	for (int c0 = 0; c0 <= 11; c0 += 1) {
	  if (c0 <= 9)
	get_input(in, M, 0, c0);
	  if (c0 >= 2)
	compute_output(M, out, 0, c0 - 2);
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

