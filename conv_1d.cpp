#include "accumulate_3.h"

#include "hw_classes.h"

struct M_get_input_0_to_M_compute_output_3_cache {
	// Capacity: 3
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f1;
	// Parition [2, 2] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f1.back();
	}

	inline hw_uint<32>  peek_2() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f1.back();
		}
		if (offset == 2) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in M_get_input_0_to_M_compute_output_3_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct M_get_input_0_to_M_compute_output_4_cache {
	// Capacity: 3
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
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in M_get_input_0_to_M_compute_output_4_cache: " << offset << endl;
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

struct M_get_input_0_to_M_compute_output_5_cache {
	// Capacity: 3
	// Parition [0, 0] capacity = 1
	fifo<hw_uint<32> , 1> f1;


	inline hw_uint<32>  peek_0() {
		return f1.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f1.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in M_get_input_0_to_M_compute_output_5_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f1.push(value);
	}

};

struct M_cache {
  M_get_input_0_to_M_compute_output_3_cache bank_M_get_input_0_to_M_compute_output_3;
  M_get_input_0_to_M_compute_output_4_cache bank_M_get_input_0_to_M_compute_output_4;
  M_get_input_0_to_M_compute_output_5_cache bank_M_get_input_0_to_M_compute_output_5;
};



inline void M_get_input_0_write(hw_uint<32> & M_get_input_0, M_cache& M, int root, int p) {
  M.bank_M_get_input_0_to_M_compute_output_3.push(M_get_input_0);
  M.bank_M_get_input_0_to_M_compute_output_4.push(M_get_input_0);
  M.bank_M_get_input_0_to_M_compute_output_5.push(M_get_input_0);
}

inline hw_uint<32>  M_compute_output_3_select(M_cache& M, int root, int c) {
  // qpd = { compute_output[root, c] -> 2 : root = 0 and 0 <= c <= 7 }
	// lexmax events: { compute_output[root = 0, c] -> get_input[root' = 0, p = c] : 0 <= c <= 7 }
  // M_compute_output_3 read pattern: { compute_output[root = 0, c] -> M[c] : 0 <= c <= 7 }
  // M_get_input_0 stores range: { M[i0] : 0 <= i0 <= 9 }
    // overlap with reads : { M[i0] : 0 <= i0 <= 7 }
	auto value_M_get_input_0 = M.bank_M_get_input_0_to_M_compute_output_3.peek_2();
	return value_M_get_input_0;
}

inline hw_uint<32>  M_compute_output_4_select(M_cache& M, int root, int c) {
  // qpd = { compute_output[root, c] -> 1 : root = 0 and 0 <= c <= 7 }
	// lexmax events: { compute_output[root = 0, c] -> get_input[root' = 0, p = 1 + c] : 0 <= c <= 7 }
  // M_compute_output_4 read pattern: { compute_output[root = 0, c] -> M[1 + c] : 0 <= c <= 7 }
  // M_get_input_0 stores range: { M[i0] : 0 <= i0 <= 9 }
    // overlap with reads : { M[i0] : 0 < i0 <= 8 }
	auto value_M_get_input_0 = M.bank_M_get_input_0_to_M_compute_output_4.peek_1();
	return value_M_get_input_0;
}

inline hw_uint<32>  M_compute_output_5_select(M_cache& M, int root, int c) {
  // qpd = {  }
	// lexmax events: { compute_output[root = 0, c] -> get_input[root' = 0, p = 2 + c] : 0 <= c <= 7 }
  // M_compute_output_5 read pattern: { compute_output[root = 0, c] -> M[2 + c] : 0 <= c <= 7 }
  // M_get_input_0 stores range: { M[i0] : 0 <= i0 <= 9 }
    // overlap with reads : { M[i0] : 2 <= i0 <= 9 }
	auto value_M_get_input_0 = M.bank_M_get_input_0_to_M_compute_output_5.peek_0();
	return value_M_get_input_0;
}

// # of bundles = 2
// compute_output_read
//	M_compute_output_3
//	M_compute_output_4
//	M_compute_output_5
inline hw_uint<96> M_compute_output_read_bundle_read(M_cache& M, int root, int c) {
	hw_uint<96> result;
	hw_uint<32>  M_compute_output_3_res = M_compute_output_3_select(M, root, c);
	set_at<0, 96>(result, M_compute_output_3_res);
	hw_uint<32>  M_compute_output_4_res = M_compute_output_4_select(M, root, c);
	set_at<32, 96>(result, M_compute_output_4_res);
	hw_uint<32>  M_compute_output_5_res = M_compute_output_5_select(M, root, c);
	set_at<64, 96>(result, M_compute_output_5_res);
	return result;
}

// get_input_write
//	M_get_input_0
inline void M_get_input_write_bundle_write(hw_uint<32>& get_input_write, M_cache& M, int root, int p) {
	hw_uint<32>  M_get_input_0_res = get_input_write.extract<0, 31>();
	M_get_input_0_write(M_get_input_0_res, M, root, p);
}





// Operation logic
inline void get_input(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in, M_cache& M, int root, int p) {
	// Consume: in
	auto in_p_value = in.read();
	// Produce: M
	M_get_input_write_bundle_write(in_p_value, M, root, p);
}

inline void compute_output(M_cache& M, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */out, int root, int c) {
	// Consume: M
	auto M_c_value = M_compute_output_read_bundle_read(M/* source_delay */, root, c);
	auto compute_result = accumulate_3(M_c_value);
	// Produce: out
	out.write(compute_result);
}

// Driver function
void conv_1d(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out) {
  M_cache M;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=M inter false
#endif // __VIVADO_SYNTH__

/* CUSTOM CODE STRING

*/
	for (int c0 = 0; c0 <= 9; c0 += 1) {
	  get_input(in, M, 0, c0);
	  if (c0 >= 2)
	    compute_output(M, out, 0, c0 - 2);
	}
	
}
