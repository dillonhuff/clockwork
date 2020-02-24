#include "conv_3x3.h"

#include "hw_classes.h"

struct I_I_id0_0_cache {
	// Capacity: 1
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
    return f.peek(0 - offset);
  }

	inline hw_uint<16> peek_0() {
		return f.peek(0);
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};



inline void I_I_id0_0_write(hw_uint<16>& I_I_id0_0, I_I_id0_0_cache& I_I_id0_0_delay) {
	I_I_id0_0_delay.push(I_I_id0_0);
}

inline hw_uint<16> I_out_plus_one0_3_select(I_I_id0_0_cache& I_I_id0_0_delay
, int root, int d1, int d0) {
	hw_uint<16> value_I_I_id0_0 = I_I_id0_0_delay.peek_0();
	return value_I_I_id0_0;
}

// # of bundles = 2
// I_id0_write
//	I_I_id0_0
inline void I_I_id0_write_bundle_write(hw_uint<16>& I_id0_write, I_I_id0_0_cache& I_I_id0_0_delay) {
	I_I_id0_0_write(I_id0_write, I_I_id0_0_delay);
}

// out_plus_one0_read
//	I_out_plus_one0_3
inline hw_uint<16> I_out_plus_one0_read_bundle_read(I_I_id0_0_cache& I_I_id0_0_delay, int root, int d1, int d0) {
	hw_uint<16> result;
	hw_uint<16> I_out_plus_one0_3_res = I_out_plus_one0_3_select(I_I_id0_0_delay, root, d1, d0);
	set_at<0, 16>(result, I_out_plus_one0_3_res);
	return result;
}





// Operation logic
inline void I_id0(HWStream<hw_uint<16> >& in, I_I_id0_0_cache& I_I_id0_0, int root, int id1, int id0) {
	// Consume: in
	auto in_id0_c__id1_value = in.read();
	auto compute_result = id(in_id0_c__id1_value);
	// Produce: I
	// Buffer: I, Op: I_id0
	// Possible ports...
		// I_I_id0_0
	I_I_id0_write_bundle_write(compute_result, I_I_id0_0 /* output src_delay */);
}

inline void out_plus_one0(I_I_id0_0_cache& I_I_id0_0, HWStream<hw_uint<16> >& out, int root, int d1, int d0) {
	// Consume: I
	auto I_d0_c__d1_value = I_out_plus_one0_read_bundle_read(I_I_id0_0/* source_delay */, root, d1, d0);
	auto compute_result = plus_one(I_d0_c__d1_value);
	// Produce: out
	out.write(compute_result);
}

// Driver function
void pointwise(HWStream<hw_uint<16> >& in, HWStream<hw_uint<16> >& out) {
	I_I_id0_0_cache I_I_id0_0;
	for (int c0 = 0; c0 <= 31; c0 += 1)
	  for (int c1 = 0; c1 <= 7; c1 += 1) {
	    I_id0(in, I_I_id0_0, 0, c0, c1);
	    out_plus_one0(I_I_id0_0, out, 0, c0, c1);
	  }
	
}
