#include "accumulate_3.h"

#include "hw_classes.h"

struct M_get_input_0_cache {
	// Capacity: 1
	// Parition [0, 0] capacity = 1
	fifo<int, 1> f1;


	inline int peek_0() {
		return f1.back();
	}



	inline int peek(const int offset) {
		if (offset == 0) {
			return f1.back();
		}
		cout << "Error: Unsupported offset in M: " << offset << endl;
		assert(false);
		return 0;

	}

	inline void push(const int value) {
		f1.push(value);
	}

};



inline void M_get_input_0_write(int& M_get_input_0, M_get_input_0_cache& M_get_input_0_delay) {
	M_get_input_0_delay.push(M_get_input_0);
}

// Select if: {  }
inline int M_compute_output_3_select(M_get_input_0_cache& M_get_input_0_delay
, int root, int c) {
// Pieces...
	int value_M_get_input_0 = M_get_input_0_delay.peek_0();
	return value_M_get_input_0;
}

// Select if: {  }
inline int M_compute_output_4_select(M_get_input_0_cache& M_get_input_0_delay
, int root, int c) {
// Pieces...
	int value_M_get_input_0 = M_get_input_0_delay.peek_0();
	return value_M_get_input_0;
}

// Select if: {  }
inline int M_compute_output_5_select(M_get_input_0_cache& M_get_input_0_delay
, int root, int c) {
// Pieces...
	int value_M_get_input_0 = M_get_input_0_delay.peek_0();
	return value_M_get_input_0;
}

// Bundles...
// M_get_input_0
//	M_get_input_0
inline void M_M_get_input_0_bundle_action(int& /* width = 32*/M_get_input_0, M_get_input_0_cache& M_get_input_0_delay) {
	M_get_input_0_write(M_get_input_0, M_get_input_0_delay);
}

// compute_output
//	M_compute_output_3
//	M_compute_output_4
//	M_compute_output_5
inline hw_uint<96> M_compute_output_bundle_action(M_get_input_0_cache& M_get_input_0_delay, int root, int c) {
	hw_uint<96> result;
	int M_compute_output_3_res = M_compute_output_3_select(M_get_input_0_delay, root, c);
	set_at<0, 96>(result, M_compute_output_3_res);
	int M_compute_output_4_res = M_compute_output_4_select(M_get_input_0_delay, root, c);
	set_at<32, 96>(result, M_compute_output_4_res);
	int M_compute_output_5_res = M_compute_output_5_select(M_get_input_0_delay, root, c);
	set_at<64, 96>(result, M_compute_output_5_res);
	return result;
}

// get_input
//	M_get_input_0
inline void M_get_input_bundle_action(int& /* width = 32*/get_input, M_get_input_0_cache& M_get_input_0_delay) {
	M_get_input_0_write(get_input, M_get_input_0_delay);
}





// Operation logic
inline void get_input(HWStream<int>& in, M_get_input_0_cache& M_get_input_0, int root, int p) {
	// Consume: in
	auto in_val = in.read();
	// Produce: M
	M_get_input_bundle_action(in_val, M_get_input_0);
}

inline void compute_output(M_get_input_0_cache& M_get_input_0, HWStream<int>& out, int root, int c) {
	// Consume: M
	auto M_val = M_compute_output_bundle_action(M_get_input_0, root, c);
	// Apply function: accumulate_3
	auto compute_result = accumulate_3(M_val);
	// Produce: out
	out.write(compute_result);
}

// Driver function
void conv_1d_bc(HWStream<int>& in, HWStream<int>& out) {
	M_get_input_0_cache M_get_input_0;
	for (int c0 = 0; c0 <= 11; c0 += 1) {
#pragma HLS pipeline
	  if (c0 <= 9)
	    get_input(in, M_get_input_0, 0, c0);
	  if (c0 >= 2)
	    compute_output(M_get_input_0, out, 0, c0 - 2);
	}
	
}
