#include "conv_3x3.h"

#include "hw_classes.h"

struct I_I_id0_6_to_I_out_jacobi2d_compute0_1_cache {
	// Capacity: 65
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
		cout << "Error: Unsupported offset in I_I_id0_6_to_I_out_jacobi2d_compute0_1_cache: " << offset << endl;
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

struct I_I_id0_6_to_I_out_jacobi2d_compute0_2_cache {
	// Capacity: 65
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 31) capacity = 30
	fifo<hw_uint<32> , 30> f1;
	// Parition [31, 31] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_30() {
		return f1.back();
	}

	inline hw_uint<32>  peek_31() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 30) {
			return f1.back();
		}
		if (offset == 31) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_I_id0_6_to_I_out_jacobi2d_compute0_2_cache: " << offset << endl;
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

struct I_I_id0_6_to_I_out_jacobi2d_compute0_3_cache {
	// Capacity: 65
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 32) capacity = 31
	fifo<hw_uint<32> , 31> f1;
	// Parition [32, 32] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_31() {
		return f1.back();
	}

	inline hw_uint<32>  peek_32() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 31) {
			return f1.back();
		}
		if (offset == 32) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_I_id0_6_to_I_out_jacobi2d_compute0_3_cache: " << offset << endl;
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

struct I_I_id0_6_to_I_out_jacobi2d_compute0_4_cache {
	// Capacity: 65
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 64) capacity = 63
	fifo<hw_uint<32> , 63> f1;
	// Parition [64, 64] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_63() {
		return f1.back();
	}

	inline hw_uint<32>  peek_64() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 63) {
			return f1.back();
		}
		if (offset == 64) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_I_id0_6_to_I_out_jacobi2d_compute0_4_cache: " << offset << endl;
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

struct I_I_id0_6_to_I_out_jacobi2d_compute0_5_cache {
	// Capacity: 65
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 33) capacity = 32
	fifo<hw_uint<32> , 32> f1;
	// Parition [33, 33] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_32() {
		return f1.back();
	}

	inline hw_uint<32>  peek_33() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 32) {
			return f1.back();
		}
		if (offset == 33) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_I_id0_6_to_I_out_jacobi2d_compute0_5_cache: " << offset << endl;
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

struct I_cache {
  I_I_id0_6_to_I_out_jacobi2d_compute0_1_cache bank_I_I_id0_6_to_I_out_jacobi2d_compute0_1;
  I_I_id0_6_to_I_out_jacobi2d_compute0_2_cache bank_I_I_id0_6_to_I_out_jacobi2d_compute0_2;
  I_I_id0_6_to_I_out_jacobi2d_compute0_3_cache bank_I_I_id0_6_to_I_out_jacobi2d_compute0_3;
  I_I_id0_6_to_I_out_jacobi2d_compute0_4_cache bank_I_I_id0_6_to_I_out_jacobi2d_compute0_4;
  I_I_id0_6_to_I_out_jacobi2d_compute0_5_cache bank_I_I_id0_6_to_I_out_jacobi2d_compute0_5;
};



inline void I_I_id0_6_write(hw_uint<32> & I_I_id0_6, I_cache& I, int root, int id1, int id0) {
  I.bank_I_I_id0_6_to_I_out_jacobi2d_compute0_1.push(I_I_id0_6);
  I.bank_I_I_id0_6_to_I_out_jacobi2d_compute0_2.push(I_I_id0_6);
  I.bank_I_I_id0_6_to_I_out_jacobi2d_compute0_3.push(I_I_id0_6);
  I.bank_I_I_id0_6_to_I_out_jacobi2d_compute0_4.push(I_I_id0_6);
  I.bank_I_I_id0_6_to_I_out_jacobi2d_compute0_5.push(I_I_id0_6);
}

inline hw_uint<32>  I_out_jacobi2d_compute0_1_select(I_cache& I, int root, int d1, int d0) {
	// lexmax events: { out_jacobi2d_compute0[root = 0, d1, d0] -> I_id0[root' = 0, id1 = 1 + d1, id0 = d0] : 0 < d1 <= 30 and 0 < d0 <= 30 }
  // I_out_jacobi2d_compute0_1 read pattern: { out_jacobi2d_compute0[root = 0, d1, d0] -> I[d0, 1 + d1] : 0 < d1 <= 30 and 0 < d0 <= 30 }
  // I_I_id0_6 stores range: { I[i0, i1] : 0 <= i0 <= 31 and 0 <= i1 <= 31 }
    // overlap with reads : { I[i0, i1] : 0 < i0 <= 30 and 2 <= i1 <= 31 }
	auto value_I_I_id0_6 = I.bank_I_I_id0_6_to_I_out_jacobi2d_compute0_1.peek_0();
	return value_I_I_id0_6;
}

inline hw_uint<32>  I_out_jacobi2d_compute0_2_select(I_cache& I, int root, int d1, int d0) {
	// lexmax events: { out_jacobi2d_compute0[root = 0, d1, d0] -> I_id0[root' = 0, id1 = d1, id0 = 1 + d0] : 0 < d1 <= 30 and 0 < d0 <= 30 }
  // I_out_jacobi2d_compute0_2 read pattern: { out_jacobi2d_compute0[root = 0, d1, d0] -> I[1 + d0, d1] : 0 < d1 <= 30 and 0 < d0 <= 30 }
  // I_I_id0_6 stores range: { I[i0, i1] : 0 <= i0 <= 31 and 0 <= i1 <= 31 }
    // overlap with reads : { I[i0, i1] : 2 <= i0 <= 31 and 0 < i1 <= 30 }
	auto value_I_I_id0_6 = I.bank_I_I_id0_6_to_I_out_jacobi2d_compute0_2.peek_31();
	return value_I_I_id0_6;
}

inline hw_uint<32>  I_out_jacobi2d_compute0_3_select(I_cache& I, int root, int d1, int d0) {
	// lexmax events: { out_jacobi2d_compute0[root = 0, d1, d0] -> I_id0[root' = 0, id1 = d1, id0 = d0] : 0 < d1 <= 30 and 0 < d0 <= 30 }
  // I_out_jacobi2d_compute0_3 read pattern: { out_jacobi2d_compute0[root = 0, d1, d0] -> I[d0, d1] : 0 < d1 <= 30 and 0 < d0 <= 30 }
  // I_I_id0_6 stores range: { I[i0, i1] : 0 <= i0 <= 31 and 0 <= i1 <= 31 }
    // overlap with reads : { I[i0, i1] : 0 < i0 <= 30 and 0 < i1 <= 30 }
	auto value_I_I_id0_6 = I.bank_I_I_id0_6_to_I_out_jacobi2d_compute0_3.peek_32();
	return value_I_I_id0_6;
}

inline hw_uint<32>  I_out_jacobi2d_compute0_4_select(I_cache& I, int root, int d1, int d0) {
	// lexmax events: { out_jacobi2d_compute0[root = 0, d1, d0] -> I_id0[root' = 0, id1 = -1 + d1, id0 = d0] : 0 < d1 <= 30 and 0 < d0 <= 30 }
  // I_out_jacobi2d_compute0_4 read pattern: { out_jacobi2d_compute0[root = 0, d1, d0] -> I[d0, -1 + d1] : 0 < d1 <= 30 and 0 < d0 <= 30 }
  // I_I_id0_6 stores range: { I[i0, i1] : 0 <= i0 <= 31 and 0 <= i1 <= 31 }
    // overlap with reads : { I[i0, i1] : 0 < i0 <= 30 and 0 <= i1 <= 29 }
	auto value_I_I_id0_6 = I.bank_I_I_id0_6_to_I_out_jacobi2d_compute0_4.peek_64();
	return value_I_I_id0_6;
}

inline hw_uint<32>  I_out_jacobi2d_compute0_5_select(I_cache& I, int root, int d1, int d0) {
	// lexmax events: { out_jacobi2d_compute0[root = 0, d1, d0] -> I_id0[root' = 0, id1 = d1, id0 = -1 + d0] : 0 < d1 <= 30 and 0 < d0 <= 30 }
  // I_out_jacobi2d_compute0_5 read pattern: { out_jacobi2d_compute0[root = 0, d1, d0] -> I[-1 + d0, d1] : 0 < d1 <= 30 and 0 < d0 <= 30 }
  // I_I_id0_6 stores range: { I[i0, i1] : 0 <= i0 <= 31 and 0 <= i1 <= 31 }
    // overlap with reads : { I[i0, i1] : 0 <= i0 <= 29 and 0 < i1 <= 30 }
	auto value_I_I_id0_6 = I.bank_I_I_id0_6_to_I_out_jacobi2d_compute0_5.peek_33();
	return value_I_I_id0_6;
}

// # of bundles = 2
// I_id0_write
//	I_I_id0_6
inline void I_I_id0_write_bundle_write(hw_uint<32>& I_id0_write, I_cache& I, int root, int id1, int id0) {
	hw_uint<32>  I_I_id0_6_res = I_id0_write.extract<0, 31>();
	I_I_id0_6_write(I_I_id0_6_res, I, root, id1, id0);
}

// out_jacobi2d_compute0_read
//	I_out_jacobi2d_compute0_1
//	I_out_jacobi2d_compute0_2
//	I_out_jacobi2d_compute0_3
//	I_out_jacobi2d_compute0_4
//	I_out_jacobi2d_compute0_5
inline hw_uint<160> I_out_jacobi2d_compute0_read_bundle_read(I_cache& I, int root, int d1, int d0) {
	hw_uint<160> result;
	hw_uint<32>  I_out_jacobi2d_compute0_1_res = I_out_jacobi2d_compute0_1_select(I, root, d1, d0);
	set_at<0, 160>(result, I_out_jacobi2d_compute0_1_res);
	hw_uint<32>  I_out_jacobi2d_compute0_2_res = I_out_jacobi2d_compute0_2_select(I, root, d1, d0);
	set_at<32, 160>(result, I_out_jacobi2d_compute0_2_res);
	hw_uint<32>  I_out_jacobi2d_compute0_3_res = I_out_jacobi2d_compute0_3_select(I, root, d1, d0);
	set_at<64, 160>(result, I_out_jacobi2d_compute0_3_res);
	hw_uint<32>  I_out_jacobi2d_compute0_4_res = I_out_jacobi2d_compute0_4_select(I, root, d1, d0);
	set_at<96, 160>(result, I_out_jacobi2d_compute0_4_res);
	hw_uint<32>  I_out_jacobi2d_compute0_5_res = I_out_jacobi2d_compute0_5_select(I, root, d1, d0);
	set_at<128, 160>(result, I_out_jacobi2d_compute0_5_res);
	return result;
}





// Operation logic
inline void out_jacobi2d_compute0(I_cache& I, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */out, int root, int d1, int d0) {
	// Consume: I
	auto I_d0__p__0_c__d1__p__1_value = I_out_jacobi2d_compute0_read_bundle_read(I/* source_delay */, root, d1, d0);
	auto compute_result = jacobi2d_compute(I_d0__p__0_c__d1__p__1_value);
	// Produce: out
	out.write(compute_result);
}

inline void I_id0(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in, I_cache& I, int root, int id1, int id0) {
	// Consume: in
	auto in_id0_c__id1_value = in.read();
	auto compute_result = id(in_id0_c__id1_value);
	// Produce: I
	I_I_id0_write_bundle_write(compute_result, I, root, id1, id0);
}

// Driver function
void jacobi2d(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* get_args num ports = 1 */out) {
  I_cache I;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif // __VIVADO_SYNTH__

/* CUSTOM CODE STRING

*/
	for (int c0 = 0; c0 <= 31; c0 += 1)
	  for (int c1 = 0; c1 <= 31; c1 += 1) {
	    I_id0(in, I, 0, c0, c1);
	    if (c0 >= 2 && c1 >= 1 && c1 <= 30)
	      out_jacobi2d_compute0(I, out, 0, c0 - 1, c1);
	  }
	
}
