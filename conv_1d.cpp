#include "accumulate_3.h"

#include "hw_classes.h"

struct M_get_input_0_cache {
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



inline void M_get_input_0_write(hw_uint<32> & M_get_input_0, M_get_input_0_cache& M_get_input_0_delay) {
	M_get_input_0_delay.push(M_get_input_0);
}

inline hw_uint<32>  M_compute_output_3_select(M_get_input_0_cache& M_get_input_0_delay
, int root, int c) {
// Pieces...
// { compute_output[root = 0, c] : 0 <= c <= 7 } -> { compute_output[root, c] -> 2 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	hw_uint<32>  value_M_get_input_0 = M_get_input_0_delay.peek_2();
	return value_M_get_input_0;
}

inline hw_uint<32>  M_compute_output_4_select(M_get_input_0_cache& M_get_input_0_delay
, int root, int c) {
// Pieces...
// { compute_output[root = 0, c] : 0 <= c <= 7 } -> { compute_output[root, c] -> 1 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	hw_uint<32>  value_M_get_input_0 = M_get_input_0_delay.peek_1();
	return value_M_get_input_0;
}

inline hw_uint<32>  M_compute_output_5_select(M_get_input_0_cache& M_get_input_0_delay
, int root, int c) {
// Pieces...
// Always 0
//	is optimizable constant: 0
	hw_uint<32>  value_M_get_input_0 = M_get_input_0_delay.peek_0();
	return value_M_get_input_0;
}

// Bundles...
// compute_output_read
//	M_compute_output_3
//	M_compute_output_4
//	M_compute_output_5
inline hw_uint<96> M_compute_output_read_bundle_read(M_get_input_0_cache& M_get_input_0_delay, int root, int c) {
	hw_uint<96> result;
	hw_uint<32>  M_compute_output_3_res = M_compute_output_3_select(M_get_input_0_delay, root, c);
	set_at<0, 96>(result, M_compute_output_3_res);
	hw_uint<32>  M_compute_output_4_res = M_compute_output_4_select(M_get_input_0_delay, root, c);
	set_at<32, 96>(result, M_compute_output_4_res);
	hw_uint<32>  M_compute_output_5_res = M_compute_output_5_select(M_get_input_0_delay, root, c);
	set_at<64, 96>(result, M_compute_output_5_res);
	return result;
}

// get_input_write
//	M_get_input_0
inline void M_get_input_write_bundle_write(hw_uint<32> & /* width = 32*/get_input_write, M_get_input_0_cache& M_get_input_0_delay) {
	M_get_input_0_write(get_input_write, M_get_input_0_delay);
}





// Operation logic
inline void get_input(HWStream<hw_uint<32>  >& in, M_get_input_0_cache& M_get_input_0, int root, int p) {
	// Consume: in
	auto in_p_value = in.read();
	// Produce: M
	// Buffer: M, Op: get_input
	// Possible ports...
		// M_get_input_0
	M_get_input_write_bundle_write(in_p_value, M_get_input_0 /* output src_delay */);
}

inline void compute_output(M_get_input_0_cache& M_get_input_0, HWStream<hw_uint<32>  >& out, int root, int c) {
	// Consume: M
	auto M_c_value = M_compute_output_read_bundle_read(M_get_input_0/* source_delay */, root, c);
	// Apply function: accumulate_3
	/* No args */ auto compute_result = accumulate_3(M_c_value);
	// Produce: out
	out.write(compute_result);
}

// Driver function
void conv_1d(HWStream<hw_uint<32>  >& in, HWStream<hw_uint<32> >& out) {
	M_get_input_0_cache M_get_input_0;
	for (int c0 = 0; c0 <= 9; c0 += 1) {
	  get_input(in, M_get_input_0, 0, c0);
	  if (c0 >= 2)
	    compute_output(M_get_input_0, out, 0, c0 - 2);
	}
	
}
