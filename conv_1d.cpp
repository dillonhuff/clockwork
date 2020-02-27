#include "accumulate_3.h"

#include "hw_classes.h"

struct M_get_input_4_cache {
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



inline void M_get_input_4_write(hw_uint<32> & M_get_input_4, M_get_input_4_cache& M_get_input_4_delay) {
	M_get_input_4_delay.push(M_get_input_4);
}

inline hw_uint<32>  M_compute_output_1_select(M_get_input_4_cache& M_get_input_4_delay
, int root, int c) {
	hw_uint<32>  value_M_get_input_4 = M_get_input_4_delay.peek_2();
	return value_M_get_input_4;
}

inline hw_uint<32>  M_compute_output_2_select(M_get_input_4_cache& M_get_input_4_delay
, int root, int c) {
	hw_uint<32>  value_M_get_input_4 = M_get_input_4_delay.peek_1();
	return value_M_get_input_4;
}

inline hw_uint<32>  M_compute_output_3_select(M_get_input_4_cache& M_get_input_4_delay
, int root, int c) {
	hw_uint<32>  value_M_get_input_4 = M_get_input_4_delay.peek_0();
	return value_M_get_input_4;
}

// # of bundles = 2
// compute_output_read
//	M_compute_output_1
//	M_compute_output_2
//	M_compute_output_3
inline hw_uint<96> M_compute_output_read_bundle_read(M_get_input_4_cache& M_get_input_4_delay, int root, int c) {
	hw_uint<96> result;
	hw_uint<32>  M_compute_output_1_res = M_compute_output_1_select(M_get_input_4_delay, root, c);
	set_at<0, 96>(result, M_compute_output_1_res);
	hw_uint<32>  M_compute_output_2_res = M_compute_output_2_select(M_get_input_4_delay, root, c);
	set_at<32, 96>(result, M_compute_output_2_res);
	hw_uint<32>  M_compute_output_3_res = M_compute_output_3_select(M_get_input_4_delay, root, c);
	set_at<64, 96>(result, M_compute_output_3_res);
	return result;
}

// get_input_write
//	M_get_input_4
inline void M_get_input_write_bundle_write(hw_uint<32>& get_input_write, M_get_input_4_cache& M_get_input_4_delay) {
	hw_uint<32>  M_get_input_4_res = get_input_write.extract<0, 31>();
	M_get_input_4_write(M_get_input_4_res, M_get_input_4_delay);
}





// Operation logic
inline void compute_output(M_get_input_4_cache& M_get_input_4, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */out, int root, int c) {
	// Consume: M
	auto M_c_value = M_compute_output_read_bundle_read(M_get_input_4/* source_delay */, root, c);
	auto compute_result = accumulate_3(M_c_value);
	// Produce: out
	out.write(compute_result);
}

inline void get_input(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in, M_get_input_4_cache& M_get_input_4, int root, int p) {
	// Consume: in
	auto in_p_value = in.read();
	// Produce: M
	M_get_input_write_bundle_write(in_p_value, M_get_input_4);
}

// Driver function
void conv_1d(HWStream<hw_uint<32> >& /* get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* get_args num ports = 1 */out) {
	M_get_input_4_cache M_get_input_4;
	for (int c0 = 0; c0 <= 9; c0 += 1) {
	  get_input(in, M_get_input_4, 0, c0);
	  if (c0 >= 2)
	    compute_output(M_get_input_4, out, 0, c0 - 2);
	}
	
}
