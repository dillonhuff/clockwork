#include "accumulate_3.h"

#include "hw_classes.h"

struct M_get_input_4_cache {
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



inline void M_get_input_4_write(int& M_get_input_4, M_get_input_4_cache& M_get_input_4_delay) {
	M_get_input_4_delay.push(M_get_input_4);
}

inline int M_compute_output_1_select(M_get_input_4_cache& M_get_input_4_delay
, int root, int c) {
// Pieces...
// { compute_output[root = 0, c] : 0 <= c <= 7 } -> { compute_output[root, c] -> 2 }
// 	is always true on iteration domain: 1
	int value_M_get_input_4 = M_get_input_4_delay.peek_2();
	return value_M_get_input_4;
}

inline int M_compute_output_2_select(M_get_input_4_cache& M_get_input_4_delay
, int root, int c) {
// Pieces...
// { compute_output[root = 0, c] : 0 <= c <= 7 } -> { compute_output[root, c] -> 1 }
// 	is always true on iteration domain: 1
	int value_M_get_input_4 = M_get_input_4_delay.peek_1();
	return value_M_get_input_4;
}

inline int M_compute_output_3_select(M_get_input_4_cache& M_get_input_4_delay
, int root, int c) {
// Pieces...
	int value_M_get_input_4 = M_get_input_4_delay.peek_0();
	return value_M_get_input_4;
}

// Bundles...
// compute_output_read
//	M_compute_output_1
//	M_compute_output_2
//	M_compute_output_3
inline hw_uint<96> M_compute_output_read_bundle_read(M_get_input_4_cache& M_get_input_4_delay, int root, int c) {
	hw_uint<96> result;
	int M_compute_output_1_res = M_compute_output_1_select(M_get_input_4_delay, root, c);
	set_at<0, 96>(result, M_compute_output_1_res);
	int M_compute_output_2_res = M_compute_output_2_select(M_get_input_4_delay, root, c);
	set_at<32, 96>(result, M_compute_output_2_res);
	int M_compute_output_3_res = M_compute_output_3_select(M_get_input_4_delay, root, c);
	set_at<64, 96>(result, M_compute_output_3_res);
	return result;
}

// get_input_write
//	M_get_input_4
inline void M_get_input_write_bundle_write(int& /* width = 32*/get_input_write, M_get_input_4_cache& M_get_input_4_delay) {
	M_get_input_4_write(get_input_write, M_get_input_4_delay);
}





// Operation logic
inline void compute_output(M_get_input_4_cache& M_get_input_4, HWStream<int>& out, int root, int c) {
	// Consume: M
	auto M_c_value = M_compute_output_read_bundle_read(M_get_input_4/* source_delay */, root, c);
	// Apply function: accumulate_3
	auto compute_result = accumulate_3(M_c_value);
	// Produce: out
	out.write(compute_result);
}

inline void get_input(HWStream<int>& in, M_get_input_4_cache& M_get_input_4, int root, int p) {
	// Consume: in
	auto in_p_value = in.read();
	// Produce: M
	// Buffer: M, Op: get_input
	// Possible ports...
		// M_get_input_4
	M_get_input_write_bundle_write(in_p_value, M_get_input_4 /* output src_delay */);
}

// Driver function
void conv_1d(HWStream<int>& in, HWStream<int>& out) {
	M_get_input_4_cache M_get_input_4;
	for (int c0 = 0; c0 <= 9; c0 += 1) {
<<<<<<< HEAD
<<<<<<< HEAD
#pragma HLS pipeline
	  get_input(in, M_get_input_4, 0, c0);
=======
	  get_input(in, M_get_input_0, 0, c0);
>>>>>>> origin/master
=======
	  get_input(in, M_get_input_4, 0, c0);
>>>>>>> origin/master
	  if (c0 >= 2)
	    compute_output(M_get_input_4, out, 0, c0 - 2);
	}
	
}
