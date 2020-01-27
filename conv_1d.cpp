#include "accumulate_3.h"

#include "hw_classes.h"

struct M_write_6_cache {
	// Capacity: 3
	// DD expr = 2
	// DD expr = 1
	// DD expr = 0
	// Peak points
	// DD = 0
	// DD = 1
	// DD = 2
	// Break points in parition
	// BP = 0
	// BP = 1
	// BP = 1
	// BP = 2
	// BP = 2
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
		cout << "Error: Unsupported offset: " << offset << endl;
		assert(false);
		return 0;

	}

	inline void push(const int value) {
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};



inline void M_write_6_write(int& M_write_6, M_write_6_cache& M_write_6_delay) {
	M_write_6_delay.push(M_write_6);
}

// Select if: { read0[root = 0, c] -> write[root' = 0, p = c] : 0 <= c <= 7 }
inline int M_read0_1_select(M_write_6_cache& M_write_6_delay
, int root, int c) {
// Pieces...
// { read0[root = 0, c] : 0 <= c <= 7 } -> { read0[root, c] -> 2 }
// 	is always true on iteration domain: 1
	int value_M_write_6 = M_write_6_delay.peek_2();
	return value_M_write_6;
}

// Select if: { read0[root = 0, c] -> write[root' = 0, p = 1 + c] : 0 <= c <= 7 }
inline int M_read0_2_select(M_write_6_cache& M_write_6_delay
, int root, int c) {
// Pieces...
// { read0[root = 0, c] : 0 <= c <= 7 } -> { read0[root, c] -> 1 }
// 	is always true on iteration domain: 1
	int value_M_write_6 = M_write_6_delay.peek_1();
	return value_M_write_6;
}

// Select if: { read0[root = 0, c] -> write[root' = 0, p = 2 + c] : 0 <= c <= 7 }
inline int M_read0_3_select(M_write_6_cache& M_write_6_delay
, int root, int c) {
// Pieces...
	int value_M_write_6 = M_write_6_delay.peek_0();
	return value_M_write_6;
}

// Bundles...
// read0
//	M_read0_1
//	M_read0_2
//	M_read0_3
inline hw_uint<96> M_read0_bundle_action(M_write_6_cache& M_write_6_delay, int root, int c) {
	hw_uint<96> result;
	int M_read0_1_res = M_read0_1_select(M_write_6_delay, root, c);
	set_at<0, 96>(result, M_read0_1_res);
	int M_read0_2_res = M_read0_2_select(M_write_6_delay, root, c);
	set_at<32, 96>(result, M_read0_2_res);
	int M_read0_3_res = M_read0_3_select(M_write_6_delay, root, c);
	set_at<64, 96>(result, M_read0_3_res);
	return result;
}

// write
//	M_write_6
inline void M_write_bundle_action(int& /* width = 32*/write, M_write_6_cache& M_write_6_delay) {
	M_write_6_write(write, M_write_6_delay);
}



#include "hw_classes.h"

struct T_read0_0_cache {
	// Capacity: 1
	// DD expr = 0
	// Peak points
	// DD = 0
	// Break points in parition
	// BP = 0
	// BP = 0
	// Parition [0, 0] capacity = 1
	fifo<hw_uint<96>, 1> f1;


	inline hw_uint<96> peek_0() {
		return f1.back();
	}



	inline hw_uint<96> peek(const int offset) {
		if (offset == 0) {
			return f1.back();
		}
		cout << "Error: Unsupported offset: " << offset << endl;
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

// Select if: { compute_out[root = 0, c] -> read0[root' = 0, c' = c] : 0 <= c <= 7 }
inline hw_uint<96> T_compute_out_5_select(T_read0_0_cache& T_read0_0_delay
, int root, int c) {
// Pieces...
	hw_uint<96> value_T_read0_0 = T_read0_0_delay.peek_0();
	return value_T_read0_0;
}

// Bundles...
// compute_out
//	T_compute_out_5
inline hw_uint<96> T_compute_out_bundle_action(T_read0_0_cache& T_read0_0_delay, int root, int c) {
	hw_uint<96> result;
	hw_uint<96> T_compute_out_5_res = T_compute_out_5_select(T_read0_0_delay, root, c);
	set_at<0, 96>(result, T_compute_out_5_res);
	return result;
}

// read0
//	T_read0_0
inline void T_read0_bundle_action(hw_uint<96>& /* width = 96*/read0, T_read0_0_cache& T_read0_0_delay) {
	T_read0_0_write(read0, T_read0_0_delay);
}





// Operation logic
inline void read0(M_write_6_cache& M_write_6, T_read0_0_cache& T_read0_0, int root, int c) {
	// Consume: M
	auto M_val = M_read0_bundle_action(M_write_6, root, c);
	// Produce: T
	T_read0_bundle_action(M_val, T_read0_0);
}

inline void compute_out(T_read0_0_cache& T_read0_0, HWStream<int>& out, int root, int c) {
	// Consume: T
	auto T_val = T_compute_out_bundle_action(T_read0_0, root, c);
	// Apply function: accumulate_3
	auto compute_result = accumulate_3(T_val);
	// Produce: out
	out.write(compute_result);
}

inline void write(HWStream<int>& in, M_write_6_cache& M_write_6, int root, int p) {
	// Consume: in
	auto in_val = in.read();
	// Produce: M
	M_write_bundle_action(in_val, M_write_6);
}

// Driver function
void conv_1d(HWStream<int>& in, HWStream<int>& out) {
	M_write_6_cache M_write_6;
	T_read0_0_cache T_read0_0;
	for (int c0 = 0; c0 <= 9; c0 += 1) {
	  write(in, M_write_6, 0, c0);
	  if (c0 >= 2) {
	    read0(M_write_6, T_read0_0, 0, c0 - 2);
	    compute_out(T_read0_0, out, 0, c0 - 2);
	  }
	}
	
}
