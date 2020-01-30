#include "accumulate_3.h"

#include "hw_classes.h"

struct M_get_input_0_cache {
	// Capacity: 10
	// Parition [0, 1) capacity = 1
	fifo<int, 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<int, 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<int, 1> f4;
	// Parition [3, 4) capacity = 1
	fifo<int, 1> f6;
	// Parition [4, 5) capacity = 1
	fifo<int, 1> f8;
	// Parition [5, 6) capacity = 1
	fifo<int, 1> f10;
	// Parition [6, 7) capacity = 1
	fifo<int, 1> f12;
	// Parition [7, 8) capacity = 1
	fifo<int, 1> f14;
	// Parition [8, 9) capacity = 1
	fifo<int, 1> f16;
	// Parition [9, 9] capacity = 1
	fifo<int, 1> f18;


	inline int peek_0() {
		return f0.back();
	}

	inline int peek_1() {
		return f2.back();
	}

	inline int peek_2() {
		return f4.back();
	}

	inline int peek_3() {
		return f6.back();
	}

	inline int peek_4() {
		return f8.back();
	}

	inline int peek_5() {
		return f10.back();
	}

	inline int peek_6() {
		return f12.back();
	}

	inline int peek_7() {
		return f14.back();
	}

	inline int peek_8() {
		return f16.back();
	}

	inline int peek_9() {
		return f18.back();
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
		if (offset == 3) {
			return f6.back();
		}
		if (offset == 4) {
			return f8.back();
		}
		if (offset == 5) {
			return f10.back();
		}
		if (offset == 6) {
			return f12.back();
		}
		if (offset == 7) {
			return f14.back();
		}
		if (offset == 8) {
			return f16.back();
		}
		if (offset == 9) {
			return f18.back();
		}
		cout << "Error: Unsupported offset in M: " << offset << endl;
		assert(false);
		return 0;

	}

	inline void push(const int value) {
		f18.push(f16.back());
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};



inline void M_get_input_0_write(int& M_get_input_0, M_get_input_0_cache& M_get_input_0_delay) {
	M_get_input_0_delay.push(M_get_input_0);
}

// Select if: { compute_output[root = 0, c] -> get_input[root' = 0, p = c] : 0 <= c <= 7 }
inline int M_compute_output_3_select(M_get_input_0_cache& M_get_input_0_delay
, int root, int c) {
// Pieces...
// { compute_output[root = 0, c] : 0 <= c <= 7 } -> { compute_output[root, c] -> (9 - c) }
// 	is always true on iteration domain: 1
	int value_M_get_input_0 = M_get_input_0_delay.peek_(9 - c)();
	return value_M_get_input_0;
}

// Select if: { compute_output[root = 0, c] -> get_input[root' = 0, p = 1 + c] : 0 <= c <= 7 }
inline int M_compute_output_4_select(M_get_input_0_cache& M_get_input_0_delay
, int root, int c) {
// Pieces...
// { compute_output[root = 0, c] : 0 <= c <= 7 } -> { compute_output[root, c] -> (8 - c) }
// 	is always true on iteration domain: 1
	int value_M_get_input_0 = M_get_input_0_delay.peek_(8 - c)();
	return value_M_get_input_0;
}

// Select if: { compute_output[root = 0, c] -> get_input[root' = 0, p = 2 + c] : 0 <= c <= 7 }
inline int M_compute_output_5_select(M_get_input_0_cache& M_get_input_0_delay
, int root, int c) {
// Pieces...
// { compute_output[root = 0, c] : 0 <= c <= 6 } -> { compute_output[root, c] -> (7 - c) }
// 	is always true on iteration domain: 0
	int value_M_get_input_0 = M_get_input_0_delay.peek(((root == 0 && c >= 0 && 6 - c >= 0) ? ((7 - c)) : 0));
	return value_M_get_input_0;
}

// Bundles...
// compute_output_read
//	M_compute_output_3
//	M_compute_output_4
//	M_compute_output_5
inline hw_uint<96> M_compute_output_read_bundle_read(M_get_input_0_cache& M_get_input_0_delay, int root, int c) {
	hw_uint<96> result;
	int M_compute_output_3_res = M_compute_output_3_select(M_get_input_0_delay, root, c);
	set_at<0, 96>(result, M_compute_output_3_res);
	int M_compute_output_4_res = M_compute_output_4_select(M_get_input_0_delay, root, c);
	set_at<32, 96>(result, M_compute_output_4_res);
	int M_compute_output_5_res = M_compute_output_5_select(M_get_input_0_delay, root, c);
	set_at<64, 96>(result, M_compute_output_5_res);
	return result;
}

// get_input_write
//	M_get_input_0
inline void M_get_input_write_bundle_write(int& /* width = 32*/get_input_write, M_get_input_0_cache& M_get_input_0_delay) {
	M_get_input_0_write(get_input_write, M_get_input_0_delay);
}





// Operation logic
inline void get_input(HWStream<int>& in, M_get_input_0_cache& M_get_input_0, int root, int p) {
	// Consume: in
	auto in_p_value = in.read();
	// Produce: M
	// Buffer: M, Op: get_input
	// Possible ports...
		// M_get_input_0
	M_get_input_write_bundle_write(in_p_value, M_get_input_0 /* output src_delay */);
}

inline void compute_output(M_get_input_0_cache& M_get_input_0, HWStream<int>& out, int root, int c) {
	// Consume: M
	auto M_c_value = M_compute_output_read_bundle_read(M_get_input_0/* source_delay */, root, c);
	// Apply function: accumulate_3
	auto compute_result = accumulate_3(M_c_value);
	// Produce: out
	out.write(compute_result);
}

// Driver function
void conv_1d(HWStream<int>& in, HWStream<int>& out) {
	M_get_input_0_cache M_get_input_0;
	{
	  for (int c3 = 0; c3 <= 9; c3 += 1)
	    get_input(in, M_get_input_0, 0, c3);
	  for (int c3 = 0; c3 <= 7; c3 += 1)
	    compute_output(M_get_input_0, out, 0, c3);
	}
	
}
