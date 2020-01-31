#include "accumulate_3.h"

#include "hw_classes.h"

struct M_write_4_cache {
	// Capacity: 3
	// Parition [0, 1) capacity = 1
	fifo<int, 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<int, 1> f2;
	// Parition [2, 2] capacity = 1
	fifo<int, 1> f4;


	inline int peek_0() {
		return f0.back();
	}

	inline int peek_1() {
		return f2.back();
	}

	inline int peek_2() {
		return f4.back();
	}



	inline int peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 2) {
			return f4.back();
		}
		cout << "Error: Unsupported offset in M: " << offset << endl;
		assert(false);
		return 0;

	}

	inline void push(const int value) {
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};



inline void M_write_4_write(int& M_write_4, M_write_4_cache& M_write_4_delay) {
	M_write_4_delay.push(M_write_4);
}

// Select if: { read0[root = 0, c] -> write[root' = 0, p = 1 + c] : 0 <= c <= 8; read0[root = 0, c = 9] -> write[root' = 0, p = 9] }
inline int M_read0_1_select(M_write_4_cache& M_write_4_delay
, int root, int c) {
// Pieces...
// { read0[root = 0, c] : 0 <= c <= 7 } -> { read0[root, c] -> 1 }
// 	is always true on iteration domain: 0
	int value_M_write_4 = M_write_4_delay.peek(((root == 0 && c >= 0 && 7 - c >= 0) ? (1) : 0));
	return value_M_write_4;
}

// Select if: { read0[root = 0, c] -> write[root' = 0, p = 9] : 8 <= c <= 9; read0[root = 0, c] -> write[root' = 0, p = 2 + c] : 0 <= c <= 7 }
inline int M_read0_2_select(M_write_4_cache& M_write_4_delay
, int root, int c) {
// Pieces...
	int value_M_write_4 = M_write_4_delay.peek_0();
	return value_M_write_4;
}

// Select if: { read0[root = 0, c] -> write[root' = 0, p = c] : 0 <= c <= 9 }
inline int M_read0_3_select(M_write_4_cache& M_write_4_delay
, int root, int c) {
// Pieces...
// { read0[root = 0, c] : 0 <= c <= 7 } -> { read0[root, c] -> 2 }
// 	is always true on iteration domain: 0
// { read0[root = 0, c = 8] } -> { read0[root, c] -> 1 }
// 	is always true on iteration domain: 0
	int value_M_write_4 = M_write_4_delay.peek(((root == 0 && c >= 0 && 7 - c >= 0) ? (2) : (-8 + c == 0 && root == 0) ? (1) : 0));
	return value_M_write_4;
}

// Bundles...
// read0_read
//	M_read0_1
//	M_read0_2
//	M_read0_3
inline hw_uint<96> M_read0_read_bundle_read(M_write_4_cache& M_write_4_delay, int root, int c) {
	hw_uint<96> result;
	int M_read0_1_res = M_read0_1_select(M_write_4_delay, root, c);
	set_at<0, 96>(result, M_read0_1_res);
	int M_read0_2_res = M_read0_2_select(M_write_4_delay, root, c);
	set_at<32, 96>(result, M_read0_2_res);
	int M_read0_3_res = M_read0_3_select(M_write_4_delay, root, c);
	set_at<64, 96>(result, M_read0_3_res);
	return result;
}

// write_write
//	M_write_4
inline void M_write_write_bundle_write(int& /* width = 32*/write_write, M_write_4_cache& M_write_4_delay) {
	M_write_4_write(write_write, M_write_4_delay);
}



#include "hw_classes.h"

struct T_read0_0_cache {
	// Capacity: 1
	// Parition [0, 0] capacity = 1
	fifo<hw_uint<96>, 1> f1;


	inline hw_uint<96> peek_0() {
		return f1.back();
	}



	inline hw_uint<96> peek(const int offset) {
		if (offset == 0) {
			return f1.back();
		}
		cout << "Error: Unsupported offset in T: " << offset << endl;
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<96> value) {
		f1.push(value);
	}

};



inline void T_read0_0_write(hw_uint<96>& T_read0_0, T_read0_0_cache& T_read0_0_delay) {
	T_read0_0_delay.push(T_read0_0);
}

// Select if: { compute_out[root = 0, c] -> read0[root' = 0, c' = c] : 0 <= c <= 9 }
inline hw_uint<96> T_compute_out_7_select(T_read0_0_cache& T_read0_0_delay
, int root, int c) {
// Pieces...
	hw_uint<96> value_T_read0_0 = T_read0_0_delay.peek_0();
	return value_T_read0_0;
}

// Bundles...
// compute_out_read
//	T_compute_out_7
inline hw_uint<96> T_compute_out_read_bundle_read(T_read0_0_cache& T_read0_0_delay, int root, int c) {
	hw_uint<96> result;
	hw_uint<96> T_compute_out_7_res = T_compute_out_7_select(T_read0_0_delay, root, c);
	set_at<0, 96>(result, T_compute_out_7_res);
	return result;
}

// read0_write
//	T_read0_0
inline void T_read0_write_bundle_write(hw_uint<96>& /* width = 96*/read0_write, T_read0_0_cache& T_read0_0_delay) {
	T_read0_0_write(read0_write, T_read0_0_delay);
}





// Operation logic
inline void read0(M_write_4_cache& M_write_4, T_read0_0_cache& T_read0_0, int root, int c) {
	// Consume: M
	auto M_min_lp_c__p__1_c__9_rp__value = M_read0_read_bundle_read(M_write_4/* source_delay */, root, c);
	// Produce: T
	// Buffer: T, Op: read0
	// Possible ports...
		// T_read0_0
	T_read0_write_bundle_write(M_min_lp_c__p__1_c__9_rp__value, T_read0_0 /* output src_delay */);
}

inline void write(HWStream<int>& in, M_write_4_cache& M_write_4, int root, int p) {
	// Consume: in
	auto in_p_value = in.read();
	// Produce: M
	// Buffer: M, Op: write
	// Possible ports...
		// M_write_4
	M_write_write_bundle_write(in_p_value, M_write_4 /* output src_delay */);
}

inline void compute_out(T_read0_0_cache& T_read0_0, HWStream<int>& out, int root, int c) {
	// Consume: T
	auto T_c_value = T_compute_out_read_bundle_read(T_read0_0/* source_delay */, root, c);
	// Apply function: accumulate_3
	auto compute_result = accumulate_3(T_c_value);
	// Produce: out
	out.write(compute_result);
}

// Driver function
void conv_1d_bc(HWStream<int>& in, HWStream<int>& out) {
	M_write_4_cache M_write_4;
	T_read0_0_cache T_read0_0;
	for (int c0 = 0; c0 <= 11; c0 += 1) {
	  if (c0 <= 9)
	    write(in, M_write_4, 0, c0);
	  if (c0 >= 2) {
	    read0(M_write_4, T_read0_0, 0, c0 - 2);
	    compute_out(T_read0_0, out, 0, c0 - 2);
	  }
	}
	
}
