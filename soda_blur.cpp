#include "conv_3x3.h"

#include "hw_classes.h"

struct I_I_id0_0_cache {
	// Capacity: 3
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<16>, 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<16>, 1> f2;
	// Parition [2, 2] capacity = 1
	fifo<hw_uint<16>, 1> f4;


	inline hw_uint<16> peek_0() {
		return f0.back();
	}

	inline hw_uint<16> peek_1() {
		return f2.back();
	}

	inline hw_uint<16> peek_2() {
		return f4.back();
	}



	inline hw_uint<16> peek(const int offset) {
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
		cout << "Error: Unsupported offset in I: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};



inline void I_I_id0_0_write(hw_uint<16>& I_I_id0_0, I_I_id0_0_cache& I_I_id0_0_delay) {
	I_I_id0_0_delay.push(I_I_id0_0);
}

inline hw_uint<16> I_blur_x_blur_30_3_select(I_I_id0_0_cache& I_I_id0_0_delay
, int root, int yr, int yc) {
// Pieces...
// { blur_x_blur_30[root = 0, yr, yc] : 0 <= yr <= 31 and 0 <= yc <= 29 } -> { blur_x_blur_30[root, yr, yc] -> 2 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_I_id0_0 = I_I_id0_0_delay.peek_2();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_blur_x_blur_30_4_select(I_I_id0_0_cache& I_I_id0_0_delay
, int root, int yr, int yc) {
// Pieces...
// { blur_x_blur_30[root = 0, yr, yc] : 0 <= yr <= 31 and 0 <= yc <= 29 } -> { blur_x_blur_30[root, yr, yc] -> 1 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_I_id0_0 = I_I_id0_0_delay.peek_1();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_blur_x_blur_30_5_select(I_I_id0_0_cache& I_I_id0_0_delay
, int root, int yr, int yc) {
// Pieces...
// Always 0
//	is optimizable constant: 0
	hw_uint<16> value_I_I_id0_0 = I_I_id0_0_delay.peek_0();
	return value_I_I_id0_0;
}

// Bundles...
// I_id0_write
//	I_I_id0_0
inline void I_I_id0_write_bundle_write(hw_uint<16>& /* width = 16*/I_id0_write, I_I_id0_0_cache& I_I_id0_0_delay) {
	I_I_id0_0_write(I_id0_write, I_I_id0_0_delay);
}

// blur_x_blur_30_read
//	I_blur_x_blur_30_3
//	I_blur_x_blur_30_4
//	I_blur_x_blur_30_5
inline hw_uint<48> I_blur_x_blur_30_read_bundle_read(I_I_id0_0_cache& I_I_id0_0_delay, int root, int yr, int yc) {
	hw_uint<48> result;
	hw_uint<16> I_blur_x_blur_30_3_res = I_blur_x_blur_30_3_select(I_I_id0_0_delay, root, yr, yc);
	set_at<0, 48>(result, I_blur_x_blur_30_3_res);
	hw_uint<16> I_blur_x_blur_30_4_res = I_blur_x_blur_30_4_select(I_I_id0_0_delay, root, yr, yc);
	set_at<16, 48>(result, I_blur_x_blur_30_4_res);
	hw_uint<16> I_blur_x_blur_30_5_res = I_blur_x_blur_30_5_select(I_I_id0_0_delay, root, yr, yc);
	set_at<32, 48>(result, I_blur_x_blur_30_5_res);
	return result;
}



#include "hw_classes.h"

struct blur_x_blur_x_blur_30_2_cache {
	// Capacity: 61
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<16>, 1> f0;
	// Parition [1, 30) capacity = 29
	fifo<hw_uint<16>, 29> f1;
	// Parition [30, 31) capacity = 1
	fifo<hw_uint<16>, 1> f2;
	// Parition [31, 60) capacity = 29
	fifo<hw_uint<16>, 29> f3;
	// Parition [60, 60] capacity = 1
	fifo<hw_uint<16>, 1> f4;


	inline hw_uint<16> peek_0() {
		return f0.back();
	}

	inline hw_uint<16> peek_29() {
		return f1.back();
	}

	inline hw_uint<16> peek_30() {
		return f2.back();
	}

	inline hw_uint<16> peek_59() {
		return f3.back();
	}

	inline hw_uint<16> peek_60() {
		return f4.back();
	}



	inline hw_uint<16> peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 29) {
			return f1.back();
		}
		if (offset == 30) {
			return f2.back();
		}
		if (offset == 59) {
			return f3.back();
		}
		if (offset == 60) {
			return f4.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in blur_x: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f4.push(f3.back());
		f3.push(f2.back());
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};



inline void blur_x_blur_x_blur_30_2_write(hw_uint<16>& blur_x_blur_x_blur_30_2, blur_x_blur_x_blur_30_2_cache& blur_x_blur_x_blur_30_2_delay) {
	blur_x_blur_x_blur_30_2_delay.push(blur_x_blur_x_blur_30_2);
}

inline hw_uint<16> blur_x_out_blur_30_7_select(blur_x_blur_x_blur_30_2_cache& blur_x_blur_x_blur_30_2_delay
, int root, int xr, int xc) {
// Pieces...
// { out_blur_30[root = 0, xr, xc] : 0 <= xr <= 29 and 0 < xc <= 28 } -> { out_blur_30[root, xr, xc] -> 60 }
// 	is always true on iteration domain: 0
// { out_blur_30[root = 0, xr, xc = 29] : 0 <= xr <= 29 } -> { out_blur_30[root, xr, xc] -> (31 + xc) }
// 	is always true on iteration domain: 0
// { out_blur_30[root = 0, xr, xc = 0] : 0 <= xr <= 29 } -> { out_blur_30[root, xr, xc] -> 60 }
// 	is always true on iteration domain: 0
//	is optimizable constant: 1
	int value_blur_x_blur_x_blur_30_2 = blur_x_blur_x_blur_30_2_delay.peek_60();
	return value_blur_x_blur_x_blur_30_2;
}

inline hw_uint<16> blur_x_out_blur_30_8_select(blur_x_blur_x_blur_30_2_cache& blur_x_blur_x_blur_30_2_delay
, int root, int xr, int xc) {
// Pieces...
// { out_blur_30[root = 0, xr, xc] : 0 <= xr <= 29 and 0 < xc <= 28 } -> { out_blur_30[root, xr, xc] -> 30 }
// 	is always true on iteration domain: 0
// { out_blur_30[root = 0, xr, xc = 29] : 0 <= xr <= 29 } -> { out_blur_30[root, xr, xc] -> (1 + xc) }
// 	is always true on iteration domain: 0
// { out_blur_30[root = 0, xr, xc = 0] : 0 <= xr <= 29 } -> { out_blur_30[root, xr, xc] -> 30 }
// 	is always true on iteration domain: 0
//	is optimizable constant: 1
	int value_blur_x_blur_x_blur_30_2 = blur_x_blur_x_blur_30_2_delay.peek_30();
	return value_blur_x_blur_x_blur_30_2;
}

inline hw_uint<16> blur_x_out_blur_30_9_select(blur_x_blur_x_blur_30_2_cache& blur_x_blur_x_blur_30_2_delay
, int root, int xr, int xc) {
// Pieces...
// Always 0
//	is optimizable constant: 0
	hw_uint<16> value_blur_x_blur_x_blur_30_2 = blur_x_blur_x_blur_30_2_delay.peek_0();
	return value_blur_x_blur_x_blur_30_2;
}

// Bundles...
// blur_x_blur_30_write
//	blur_x_blur_x_blur_30_2
inline void blur_x_blur_x_blur_30_write_bundle_write(hw_uint<16>& /* width = 16*/blur_x_blur_30_write, blur_x_blur_x_blur_30_2_cache& blur_x_blur_x_blur_30_2_delay) {
	blur_x_blur_x_blur_30_2_write(blur_x_blur_30_write, blur_x_blur_x_blur_30_2_delay);
}

// out_blur_30_read
//	blur_x_out_blur_30_7
//	blur_x_out_blur_30_8
//	blur_x_out_blur_30_9
inline hw_uint<48> blur_x_out_blur_30_read_bundle_read(blur_x_blur_x_blur_30_2_cache& blur_x_blur_x_blur_30_2_delay, int root, int xr, int xc) {
	hw_uint<48> result;
	hw_uint<16> blur_x_out_blur_30_7_res = blur_x_out_blur_30_7_select(blur_x_blur_x_blur_30_2_delay, root, xr, xc);
	set_at<0, 48>(result, blur_x_out_blur_30_7_res);
	hw_uint<16> blur_x_out_blur_30_8_res = blur_x_out_blur_30_8_select(blur_x_blur_x_blur_30_2_delay, root, xr, xc);
	set_at<16, 48>(result, blur_x_out_blur_30_8_res);
	hw_uint<16> blur_x_out_blur_30_9_res = blur_x_out_blur_30_9_select(blur_x_blur_x_blur_30_2_delay, root, xr, xc);
	set_at<32, 48>(result, blur_x_out_blur_30_9_res);
	return result;
}





// Operation logic
inline void I_id0(HWStream<hw_uint<16>>& in, I_I_id0_0_cache& I_I_id0_0, int root, int ir, int ic) {
	// Consume: in
	auto in_ir_c__ic_value = in.read();
	// Apply function: id
	// Arg: in_ir_c__ic_value
	// Arg buf: in
	auto compute_result = id(in_ir_c__ic_value);
	// Produce: I
	// Buffer: I, Op: I_id0
	// Possible ports...
		// I_I_id0_0
	I_I_id0_write_bundle_write(compute_result, I_I_id0_0 /* output src_delay */);
}

inline void blur_x_blur_30(I_I_id0_0_cache& I_I_id0_0, blur_x_blur_x_blur_30_2_cache& blur_x_blur_x_blur_30_2, int root, int yr, int yc) {
	// Consume: I
	auto I_yr__p__0_c__yc__p__0_value = I_blur_x_blur_30_read_bundle_read(I_I_id0_0/* source_delay */, root, yr, yc);
	// Apply function: blur_3
	// Arg: I_yr__p__0_c__yc__p__0_value
	// Arg buf: I
	// Arg: I_yr__p__0_c__yc__p__1_value
	// Arg buf: I
	// Arg: I_yr__p__0_c__yc__p__2_value
	// Arg buf: I
	auto compute_result = blur_3(I_yr__p__0_c__yc__p__0_value);
	// Produce: blur_x
	// Buffer: blur_x, Op: blur_x_blur_30
	// Possible ports...
		// blur_x_blur_x_blur_30_2
	blur_x_blur_x_blur_30_write_bundle_write(compute_result, blur_x_blur_x_blur_30_2 /* output src_delay */);
}

inline void out_blur_30(blur_x_blur_x_blur_30_2_cache& blur_x_blur_x_blur_30_2, HWStream<hw_uint<16>>& out, int root, int xr, int xc) {
	// Consume: blur_x
	auto blur_x_xr__p__0_c__xc__p__0_value = blur_x_out_blur_30_read_bundle_read(blur_x_blur_x_blur_30_2/* source_delay */, root, xr, xc);
	// Apply function: blur_3
	// Arg: blur_x_xr__p__0_c__xc__p__0_value
	// Arg buf: blur_x
	// Arg: blur_x_xr__p__1_c__xc__p__0_value
	// Arg buf: blur_x
	// Arg: blur_x_xr__p__2_c__xc__p__0_value
	// Arg buf: blur_x
	auto compute_result = blur_3(blur_x_xr__p__0_c__xc__p__0_value);
	// Produce: out
	out.write(compute_result);
}

// Driver function
void soda_blur(HWStream<hw_uint<16>>& in, HWStream<hw_uint<16>>& out) {
	I_I_id0_0_cache I_I_id0_0;
	blur_x_blur_x_blur_30_2_cache blur_x_blur_x_blur_30_2;
	for (int c0 = 0; c0 <= 31; c0 += 1)
	  for (int c1 = 0; c1 <= 31; c1 += 1) {
	    I_id0(in, I_I_id0_0, 0, c0, c1);
	    if (c1 >= 2) {
	      blur_x_blur_30(I_I_id0_0, blur_x_blur_x_blur_30_2, 0, c0, c1 - 2);
	      if (c0 >= 2)
	        out_blur_30(blur_x_blur_x_blur_30_2, out, 0, c0 - 2, c1 - 2);
	    }
	  }
	
}
