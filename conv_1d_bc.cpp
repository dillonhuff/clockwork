#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "accumulate_3.h"

#include "hw_classes.h"

struct M_write_0_to_M_read0_3_cache {
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

struct M_write_0_merged_banks_2_cache {
	// RAM Box: {[0, 9]}
	// Capacity: 2
	// # of read delays: 2
	hw_uint<32>  f0;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct M_cache {
  M_write_0_to_M_read0_3_cache M_write_0_to_M_read0_3;
  M_write_0_merged_banks_2_cache M_write_0_merged_banks_2;
};



inline void M_write_0_write(hw_uint<32> & M_write_0, M_cache& M, int root, int p) {
  M.M_write_0_to_M_read0_3.push(M_write_0);
  M.M_write_0_merged_banks_2.push(M_write_0);
}

inline hw_uint<32>  M_read0_3_select(M_cache& M, int root, int c) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // M_read0_3 read pattern: { read0[root = 0, c] -> M[c] : 0 <= c <= 9 }
  // Read schedule : { read0[root = 0, c] -> [2 + c, 1] : 0 <= c <= 9 }
  // Write schedule: { write[root = 0, p] -> [p, 0] : 0 <= p <= 9 }
  // DD fold: { read0[root, c] -> 2 : root = 0 and 0 <= c <= 7; read0[root, c] -> 1 : root = 0 and c = 8 }
  auto value_M_write_0 = M.M_write_0_to_M_read0_3.peek(/* one reader or all rams */ (-8 + c == 0) ? (1) : (7 - c >= 0) ? (2) : 0);
  return value_M_write_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " c = " << c  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  M_read0_4_select(M_cache& M, int root, int c) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // M_read0_4 read pattern: { read0[root = 0, c] -> M[1 + c] : 0 <= c <= 8; read0[root = 0, c = 9] -> M[9] }
  // Read schedule : { read0[root = 0, c] -> [2 + c, 1] : 0 <= c <= 9 }
  // Write schedule: { write[root = 0, p] -> [p, 0] : 0 <= p <= 9 }
  // DD fold: { read0[root, c] -> 1 : root = 0 and 0 <= c <= 7 }
  auto value_M_write_0 = M.M_write_0_merged_banks_2.peek(/* Needs general delay string */ (7 - c >= 0) ? (1) : 0);
  return value_M_write_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " c = " << c  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  M_read0_5_select(M_cache& M, int root, int c) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // M_read0_5 read pattern: { read0[root = 0, c] -> M[9] : 8 <= c <= 9; read0[root = 0, c] -> M[2 + c] : 0 <= c <= 7 }
  // Read schedule : { read0[root = 0, c] -> [2 + c, 1] : 0 <= c <= 9 }
  // Write schedule: { write[root = 0, p] -> [p, 0] : 0 <= p <= 9 }
  // DD fold: {  }
  auto value_M_write_0 = M.M_write_0_merged_banks_2.peek_0();
  return value_M_write_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " c = " << c  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// read0_read
//	M_read0_3
//	M_read0_4
//	M_read0_5
inline hw_uint<96> M_read0_read_bundle_read(M_cache& M, int root, int c) {
  // # of ports in bundle: 3
    // M_read0_3
    // M_read0_4
    // M_read0_5

	hw_uint<96> result;
	hw_uint<32>  M_read0_3_res = M_read0_3_select(M, root, c);
	set_at<0, 96>(result, M_read0_3_res);
	hw_uint<32>  M_read0_4_res = M_read0_4_select(M, root, c);
	set_at<32, 96>(result, M_read0_4_res);
	hw_uint<32>  M_read0_5_res = M_read0_5_select(M, root, c);
	set_at<64, 96>(result, M_read0_5_res);
	return result;
}

// write_write
//	M_write_0
inline void M_write_write_bundle_write(hw_uint<32>& write_write, M_cache& M, int root, int p) {
	hw_uint<32>  M_write_0_res = write_write.extract<0, 31>();
	M_write_0_write(M_write_0_res, M, root, p);
}

#include "hw_classes.h"

struct T_read0_2_merged_banks_1_cache {
	// RAM Box: {[0, 9]}
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<96>, 1> f;
	inline hw_uint<96> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<96> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct T_cache {
  T_read0_2_merged_banks_1_cache T_read0_2_merged_banks_1;
};



inline void T_read0_2_write(hw_uint<96>& T_read0_2, T_cache& T, int root, int c) {
  T.T_read0_2_merged_banks_1.push(T_read0_2);
}

inline hw_uint<96> T_compute_out_7_select(T_cache& T, int root, int c) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // T_compute_out_7 read pattern: { compute_out[root = 0, c] -> T[c] : 0 <= c <= 9 }
  // Read schedule : { compute_out[root = 0, c] -> [2 + c, 2] : 0 <= c <= 9 }
  // Write schedule: { read0[root = 0, c] -> [2 + c, 1] : 0 <= c <= 9 }
  // DD fold: {  }
  auto value_T_read0_2 = T.T_read0_2_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_T_read0_2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " c = " << c  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// compute_out_read
//	T_compute_out_7
inline hw_uint<96> T_compute_out_read_bundle_read(T_cache& T, int root, int c) {
  // # of ports in bundle: 1
    // T_compute_out_7

	hw_uint<96> result;
	hw_uint<96> T_compute_out_7_res = T_compute_out_7_select(T, root, c);
	set_at<0, 96>(result, T_compute_out_7_res);
	return result;
}

// read0_write
//	T_read0_2
inline void T_read0_write_bundle_write(hw_uint<96>& read0_write, T_cache& T, int root, int c) {
	hw_uint<96> T_read0_2_res = read0_write.extract<0, 95>();
	T_read0_2_write(T_read0_2_res, T, root, c);
}



// Operation logic
inline void write(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in, M_cache& M, int root, int p) {
	// Consume: in
	auto in_p_value = in.read();
	// Produce: M
	M_write_write_bundle_write(in_p_value, M, root, p);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void read0(M_cache& M, T_cache& T, int root, int c) {
	// Consume: M
	auto M_min_lp_c_c__9_rp__value = M_read0_read_bundle_read(M/* source_delay */, root, c);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: T
	T_read0_write_bundle_write(M_min_lp_c_c__9_rp__value, T, root, c);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void compute_out(T_cache& T, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */out, int root, int c) {
	// Consume: T
	auto T_c_value = T_compute_out_read_bundle_read(T/* source_delay */, root, c);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = accumulate_3(T_c_value);
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
  T_cache T;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

  for (int epoch = 0; epoch < num_epochs; epoch++) {
	for (int c0 = 0; c0 <= 11; c0 += 1) {
	  if (c0 <= 9)
	write(in, M, 0, c0);
	  if (c0 >= 2) {
	read0(M, T, 0, c0 - 2);
	compute_out(T, out, 0, c0 - 2);
	  }
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

const int write_read_num_transfers = 0;
const int compute_out_write_num_transfers = 900;


extern "C" {

static void read_write_read(hw_uint<32>* input, HWStream<hw_uint<32> >& v, const int size) {
  hw_uint<32> burst_reg;
  int num_transfers = write_read_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void write_compute_out_write(hw_uint<32>* output, HWStream<hw_uint<32> >& v, const int size) {
  hw_uint<32> burst_reg;
  int num_transfers = compute_out_write_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

void conv_1d_bc_accel(hw_uint<32>* write_read, hw_uint<32>* compute_out_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = write_read offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = compute_out_write offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = write_read bundle = control
#pragma HLS INTERFACE s_axilite port = compute_out_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<32> > write_read_channel;
  static HWStream<hw_uint<32> > compute_out_write_channel;

  read_write_read(write_read, write_read_channel, size);

  conv_1d_bc(write_read_channel, compute_out_write_channel, size);

  write_compute_out_write(compute_out_write, compute_out_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

