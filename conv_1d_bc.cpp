#include "accumulate_3.h"

#include "hw_classes.h"

struct M_write_0_cache {
	// Capacity: 3
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 2] capacity = 1
	fifo<hw_uint<32> , 1> f4;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 2) {
			return f4.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in M: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};



inline void M_write_0_write(hw_uint<32> & M_write_0, M_write_0_cache& M_write_0_delay) {
	M_write_0_delay.push(M_write_0);
}

inline hw_uint<32>  M_read0_5_select(M_write_0_cache& M_write_0_delay
, int root, int c) {
	hw_uint<32>  value_M_write_0 = M_write_0_delay.peek((root == 0 && c >= 0 && 7 - c >= 0) ? (2) : (-8 + c == 0 && root == 0) ? (1) : 0);
	return value_M_write_0;
}

inline hw_uint<32>  M_read0_6_select(M_write_0_cache& M_write_0_delay
, int root, int c) {
	hw_uint<32>  value_M_write_0 = M_write_0_delay.peek((root == 0 && c >= 0 && 7 - c >= 0) ? (1) : 0);
	return value_M_write_0;
}

inline hw_uint<32>  M_read0_7_select(M_write_0_cache& M_write_0_delay
, int root, int c) {
	hw_uint<32>  value_M_write_0 = M_write_0_delay.peek_0();
	return value_M_write_0;
}

// # of bundles = 2
// read0_read
//	M_read0_5
//	M_read0_6
//	M_read0_7
inline hw_uint<96> M_read0_read_bundle_read(M_write_0_cache& M_write_0_delay, int root, int c) {
	hw_uint<96> result;
	hw_uint<32>  M_read0_5_res = M_read0_5_select(M_write_0_delay, root, c);
	set_at<0, 96>(result, M_read0_5_res);
	hw_uint<32>  M_read0_6_res = M_read0_6_select(M_write_0_delay, root, c);
	set_at<32, 96>(result, M_read0_6_res);
	hw_uint<32>  M_read0_7_res = M_read0_7_select(M_write_0_delay, root, c);
	set_at<64, 96>(result, M_read0_7_res);
	return result;
}

// write_write
//	M_write_0
inline void M_write_write_bundle_write(hw_uint<32> & write_write, M_write_0_cache& M_write_0_delay) {
	M_write_0_write(write_write, M_write_0_delay);
}



#include "hw_classes.h"

struct T_read0_4_cache {
	// Capacity: 1
	fifo<hw_uint<96>, 1> f;
	inline hw_uint<96> peek(const int offset) {
    return f.peek(0 - offset);
  }

	inline hw_uint<96> peek_0() {
		return f.peek(0);
	}



	inline void push(const hw_uint<96> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};



inline void T_read0_4_write(hw_uint<96>& T_read0_4, T_read0_4_cache& T_read0_4_delay) {
	T_read0_4_delay.push(T_read0_4);
}

inline hw_uint<96> T_compute_out_3_select(T_read0_4_cache& T_read0_4_delay
, int root, int c) {
	hw_uint<96> value_T_read0_4 = T_read0_4_delay.peek_0();
	return value_T_read0_4;
}

// # of bundles = 2
// compute_out_read
//	T_compute_out_3
inline hw_uint<96> T_compute_out_read_bundle_read(T_read0_4_cache& T_read0_4_delay, int root, int c) {
	hw_uint<96> result;
	hw_uint<96> T_compute_out_3_res = T_compute_out_3_select(T_read0_4_delay, root, c);
	set_at<0, 96>(result, T_compute_out_3_res);
	return result;
}

// read0_write
//	T_read0_4
inline void T_read0_write_bundle_write(hw_uint<96>& read0_write, T_read0_4_cache& T_read0_4_delay) {
	T_read0_4_write(read0_write, T_read0_4_delay);
}





// Operation logic
inline void write(HWStream<hw_uint<32>  >& in, M_write_0_cache& M_write_0, int root, int p) {
	// Consume: in
	auto in_p_value = in.read();
	// Produce: M
	// Buffer: M, Op: write
	// Possible ports...
		// M_write_0
	M_write_write_bundle_write(in_p_value, M_write_0 /* output src_delay */);
}

inline void compute_out(T_read0_4_cache& T_read0_4, HWStream<hw_uint<32>  >& out, int root, int c) {
	// Consume: T
	auto T_c_value = T_compute_out_read_bundle_read(T_read0_4/* source_delay */, root, c);
	// Apply function: accumulate_3
	auto compute_result = accumulate_3(T_c_value);
	// Produce: out
	out.write(compute_result);
}

inline void read0(M_write_0_cache& M_write_0, T_read0_4_cache& T_read0_4, int root, int c) {
	// Consume: M
	auto M_min_lp_c_c__9_rp__value = M_read0_read_bundle_read(M_write_0/* source_delay */, root, c);
	// Produce: T
	// Buffer: T, Op: read0
	// Possible ports...
		// T_read0_4
	T_read0_write_bundle_write(M_min_lp_c_c__9_rp__value, T_read0_4 /* output src_delay */);
}

// Driver function
void conv_1d_bc(HWStream<hw_uint<32>  >& in, HWStream<hw_uint<32> >& out) {
	M_write_0_cache M_write_0;
	T_read0_4_cache T_read0_4;
	for (int c0 = 0; c0 <= 11; c0 += 1) {
	  if (c0 <= 9)
	    write(in, M_write_0, 0, c0);
	  if (c0 >= 2) {
	    read0(M_write_0, T_read0_4, 0, c0 - 2);
	    compute_out(T_read0_4, out, 0, c0 - 2);
	  }
	}
	
}
