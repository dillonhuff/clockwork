#include "conv_3x3.h"

#include "hw_classes.h"

struct I_I_id0_6_cache {
	// Capacity: 65
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 31) capacity = 30
	fifo<hw_uint<32> , 30> f1;
	// Parition [31, 32) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [32, 33) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [33, 34) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [34, 64) capacity = 30
	fifo<hw_uint<32> , 30> f7;
	// Parition [64, 64] capacity = 1
	fifo<hw_uint<32> , 1> f8;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_30() {
		return f1.back();
	}

	inline hw_uint<32>  peek_31() {
		return f2.back();
	}

	inline hw_uint<32>  peek_32() {
		return f4.back();
	}

	inline hw_uint<32>  peek_33() {
		return f6.back();
	}

	inline hw_uint<32>  peek_63() {
		return f7.back();
	}

	inline hw_uint<32>  peek_64() {
		return f8.back();
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
		if (offset == 32) {
			return f4.back();
		}
		if (offset == 33) {
			return f6.back();
		}
		if (offset == 63) {
			return f7.back();
		}
		if (offset == 64) {
			return f8.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f8.push(f7.back());
		f7.push(f6.back());
		f6.push(f4.back());
		f4.push(f2.back());
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};



inline void I_I_id0_6_write(hw_uint<32> & I_I_id0_6, I_I_id0_6_cache& I_I_id0_6_delay) {
	I_I_id0_6_delay.push(I_I_id0_6);
}

inline hw_uint<32>  I_out_jacobi2d_compute0_1_select(I_I_id0_6_cache& I_I_id0_6_delay
, int root, int d1, int d0) {
	hw_uint<32>  value_I_I_id0_6 = I_I_id0_6_delay.peek_0();
	return value_I_I_id0_6;
}

inline hw_uint<32>  I_out_jacobi2d_compute0_2_select(I_I_id0_6_cache& I_I_id0_6_delay
, int root, int d1, int d0) {
	hw_uint<32>  value_I_I_id0_6 = I_I_id0_6_delay.peek_31();
	return value_I_I_id0_6;
}

inline hw_uint<32>  I_out_jacobi2d_compute0_3_select(I_I_id0_6_cache& I_I_id0_6_delay
, int root, int d1, int d0) {
	hw_uint<32>  value_I_I_id0_6 = I_I_id0_6_delay.peek_32();
	return value_I_I_id0_6;
}

inline hw_uint<32>  I_out_jacobi2d_compute0_4_select(I_I_id0_6_cache& I_I_id0_6_delay
, int root, int d1, int d0) {
	hw_uint<32>  value_I_I_id0_6 = I_I_id0_6_delay.peek_64();
	return value_I_I_id0_6;
}

inline hw_uint<32>  I_out_jacobi2d_compute0_5_select(I_I_id0_6_cache& I_I_id0_6_delay
, int root, int d1, int d0) {
	hw_uint<32>  value_I_I_id0_6 = I_I_id0_6_delay.peek_33();
	return value_I_I_id0_6;
}

// # of bundles = 2
// I_id0_write
//	I_I_id0_6
inline void I_I_id0_write_bundle_write(hw_uint<32>& I_id0_write, I_I_id0_6_cache& I_I_id0_6_delay) {
	hw_uint<32>  I_I_id0_6_res = I_id0_write.extract<0, 31>();
	I_I_id0_6_write(I_I_id0_6_res, I_I_id0_6_delay);
}

// out_jacobi2d_compute0_read
//	I_out_jacobi2d_compute0_1
//	I_out_jacobi2d_compute0_2
//	I_out_jacobi2d_compute0_3
//	I_out_jacobi2d_compute0_4
//	I_out_jacobi2d_compute0_5
inline hw_uint<160> I_out_jacobi2d_compute0_read_bundle_read(I_I_id0_6_cache& I_I_id0_6_delay, int root, int d1, int d0) {
	hw_uint<160> result;
	hw_uint<32>  I_out_jacobi2d_compute0_1_res = I_out_jacobi2d_compute0_1_select(I_I_id0_6_delay, root, d1, d0);
	set_at<0, 160>(result, I_out_jacobi2d_compute0_1_res);
	hw_uint<32>  I_out_jacobi2d_compute0_2_res = I_out_jacobi2d_compute0_2_select(I_I_id0_6_delay, root, d1, d0);
	set_at<32, 160>(result, I_out_jacobi2d_compute0_2_res);
	hw_uint<32>  I_out_jacobi2d_compute0_3_res = I_out_jacobi2d_compute0_3_select(I_I_id0_6_delay, root, d1, d0);
	set_at<64, 160>(result, I_out_jacobi2d_compute0_3_res);
	hw_uint<32>  I_out_jacobi2d_compute0_4_res = I_out_jacobi2d_compute0_4_select(I_I_id0_6_delay, root, d1, d0);
	set_at<96, 160>(result, I_out_jacobi2d_compute0_4_res);
	hw_uint<32>  I_out_jacobi2d_compute0_5_res = I_out_jacobi2d_compute0_5_select(I_I_id0_6_delay, root, d1, d0);
	set_at<128, 160>(result, I_out_jacobi2d_compute0_5_res);
	return result;
}





// Operation logic
inline void out_jacobi2d_compute0(I_I_id0_6_cache& I_I_id0_6, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */out, int root, int d1, int d0) {
	// Consume: I
	auto I_d0__p__0_c__d1__p__1_value = I_out_jacobi2d_compute0_read_bundle_read(I_I_id0_6/* source_delay */, root, d1, d0);
	auto compute_result = jacobi2d_compute(I_d0__p__0_c__d1__p__1_value);
	// Produce: out
	out.write(compute_result);
}

inline void I_id0(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in, I_I_id0_6_cache& I_I_id0_6, int root, int id1, int id0) {
	// Consume: in
	auto in_id0_c__id1_value = in.read();
	auto compute_result = id(in_id0_c__id1_value);
	// Produce: I
	I_I_id0_write_bundle_write(compute_result, I_I_id0_6);
}

// Driver function
void jacobi2d(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* get_args num ports = 1 */out) {
	I_I_id0_6_cache I_I_id0_6;
	for (int c0 = 0; c0 <= 31; c0 += 1)
	  for (int c1 = 0; c1 <= 31; c1 += 1) {
	    I_id0(in, I_I_id0_6, 0, c0, c1);
	    if (c0 >= 2 && c1 >= 1 && c1 <= 30)
	      out_jacobi2d_compute0(I_I_id0_6, out, 0, c0 - 1, c1);
	  }
	
}
