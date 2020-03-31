#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#include "accumulate_3.h"

#include "hw_classes.h"

struct M_write_6_to_M_read0_3_cache {
	// RAM Box: {[0, 9]}
	// Capacity: 3
	// # of read delays: 3
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  M_write_6_to_M_read0_3_store[10];

#else
  hw_uint<32> * M_write_6_to_M_read0_3_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0) {    return M_write_6_to_M_read0_3_store[(d0)];  }

  void write(hw_uint<32> & value, int d0) {
    M_write_6_to_M_read0_3_store[(d0)] = value;
  }

	fifo<hw_uint<32> , 3> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(2 - offset);
  }

	inline hw_uint<32>  peek_0() {
		return peek(0);
	}

	inline hw_uint<32>  peek_1() {
		return peek(1);
	}

	inline hw_uint<32>  peek_2() {
		return peek(2);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct M_write_6_merged_banks_2_cache {
	// RAM Box: {[0, 9]}
	// Capacity: 3
	// # of read delays: 2
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  M_write_6_merged_banks_2_store[10];

#else
  hw_uint<32> * M_write_6_merged_banks_2_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0) {    return M_write_6_merged_banks_2_store[(d0)];  }

  void write(hw_uint<32> & value, int d0) {
    M_write_6_merged_banks_2_store[(d0)] = value;
  }

	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 1] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in M_write_6_merged_banks_2: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f0.back());
		f0.push(value);
	}

};

struct M_cache {
  M_write_6_to_M_read0_3_cache M_write_6_to_M_read0_3;
  M_write_6_merged_banks_2_cache M_write_6_merged_banks_2;
};



inline void M_write_6_write(hw_uint<32> & M_write_6, M_cache& M, int root, int p) {
  M.M_write_6_to_M_read0_3.push(M_write_6);
  M.M_write_6_merged_banks_2.push(M_write_6);
}

inline hw_uint<32>  M_read0_3_select(M_cache& M, int root, int c) {
  // M_read0_3 read pattern: { read0[root = 0, c] -> M[c] : 0 <= c <= 9 }
	auto value_M_write_6 = M.M_write_6_to_M_read0_3.peek(/* Needs general delay string */ (-8 + c == 0) ? (1) : (7 - c >= 0) ? (2) : 0);
	return value_M_write_6;
}

inline hw_uint<32>  M_read0_4_select(M_cache& M, int root, int c) {
  // M_read0_4 read pattern: { read0[root = 0, c] -> M[1 + c] : 0 <= c <= 8; read0[root = 0, c = 9] -> M[9] }
	auto value_M_write_6 = M.M_write_6_merged_banks_2.peek(/* Needs general delay string */ (7 - c >= 0) ? (1) : 0);
	return value_M_write_6;
}

inline hw_uint<32>  M_read0_5_select(M_cache& M, int root, int c) {
  // M_read0_5 read pattern: { read0[root = 0, c] -> M[9] : 8 <= c <= 9; read0[root = 0, c] -> M[2 + c] : 0 <= c <= 7 }
	auto value_M_write_6 = M.M_write_6_merged_banks_2.peek_0();
	return value_M_write_6;
}

// # of bundles = 2
// read0_read
//	M_read0_3
//	M_read0_4
//	M_read0_5
inline hw_uint<96> M_read0_read_bundle_read(M_cache& M, int root, int c) {
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
//	M_write_6
inline void M_write_write_bundle_write(hw_uint<32>& write_write, M_cache& M, int root, int p) {
	hw_uint<32>  M_write_6_res = write_write.extract<0, 31>();
	M_write_6_write(M_write_6_res, M, root, p);
}

#include "hw_classes.h"

struct T_read0_2_merged_banks_1_cache {
	// RAM Box: {[0, 9]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<96> T_read0_2_merged_banks_1_store[10];

#else
  hw_uint<96>* T_read0_2_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<96> read(int d0) {    return T_read0_2_merged_banks_1_store[(d0)];  }

  void write(hw_uint<96>& value, int d0) {
    T_read0_2_merged_banks_1_store[(d0)] = value;
  }

	fifo<hw_uint<96>, 1> f;
	inline hw_uint<96> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }

	inline hw_uint<96> peek_0() {
		return peek(0);
	}



	inline void push(const hw_uint<96> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
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

inline hw_uint<96> T_compute_out_1_select(T_cache& T, int root, int c) {
  // T_compute_out_1 read pattern: { compute_out[root = 0, c] -> T[c] : 0 <= c <= 9 }
	auto value_T_read0_2 = T.T_read0_2_merged_banks_1.peek_0();
	return value_T_read0_2;
}

// # of bundles = 2
// compute_out_read
//	T_compute_out_1
inline hw_uint<96> T_compute_out_read_bundle_read(T_cache& T, int root, int c) {
	hw_uint<96> result;
	hw_uint<96> T_compute_out_1_res = T_compute_out_1_select(T, root, c);
	set_at<0, 96>(result, T_compute_out_1_res);
	return result;
}

// read0_write
//	T_read0_2
inline void T_read0_write_bundle_write(hw_uint<96>& read0_write, T_cache& T, int root, int c) {
	hw_uint<96> T_read0_2_res = read0_write.extract<0, 95>();
	T_read0_2_write(T_read0_2_res, T, root, c);
}



// Operation logic
inline void compute_out(T_cache& T, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */out, int root, int c) {
	// Consume: T
	auto T_c_value = T_compute_out_read_bundle_read(T/* source_delay */, root, c);
  *global_debug_handle << "compute_out_T," << root<< "," << c<< "," <<  T_c_value << endl;
	auto compute_result = accumulate_3(T_c_value);
	// Produce: out
	out.write(compute_result);
  *global_debug_handle << "compute_out," << root<< "," << c<< "," <<  compute_result << endl;
}

inline void read0(M_cache& M, T_cache& T, int root, int c) {
	// Consume: M
	auto M_min_lp_c_c__9_rp__value = M_read0_read_bundle_read(M/* source_delay */, root, c);
  *global_debug_handle << "read0_M," << root<< "," << c<< "," <<  M_min_lp_c_c__9_rp__value << endl;
	// Produce: T
	T_read0_write_bundle_write(M_min_lp_c_c__9_rp__value, T, root, c);
  *global_debug_handle << "read0," << root<< "," << c<< "," <<  M_min_lp_c_c__9_rp__value << endl;
}

inline void write(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in, M_cache& M, int root, int p) {
	// Consume: in
	auto in_p_value = in.read();
	// Produce: M
	M_write_write_bundle_write(in_p_value, M, root, p);
  *global_debug_handle << "write," << root<< "," << p<< "," <<  in_p_value << endl;
}

// Driver function
void conv_1d_bc(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out) {

  ofstream debug_file("conv_1d_bc_debug.csv");
  global_debug_handle = &debug_file;
  M_cache M;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=M inter false
#endif // __VIVADO_SYNTH__

  T_cache T;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=T inter false
#endif // __VIVADO_SYNTH__

	for (int c0 = 0; c0 <= 11; c0 += 1) {
	  if (c0 <= 9)
	write(in, M, 0, c0);
	  if (c0 >= 2) {
	read0(M, T, 0, c0 - 2);
	compute_out(T, out, 0, c0 - 2);
	  }
	}
	
  debug_file.close();
}
