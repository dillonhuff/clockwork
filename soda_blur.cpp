#include "conv_3x3.h"

#include "hw_classes.h"

struct I_I_id0_4_cache {
	// Capacity: 33
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<16>, 1> f0;
	// Parition [1, 16) capacity = 15
	fifo<hw_uint<16>, 15> f1;
	// Parition [16, 17) capacity = 1
	fifo<hw_uint<16>, 1> f2;
	// Parition [17, 32) capacity = 15
	fifo<hw_uint<16>, 15> f3;
	// Parition [32, 32] capacity = 1
	fifo<hw_uint<16>, 1> f4;


	inline hw_uint<16> peek_0() {
		return f0.back();
	}

	inline hw_uint<16> peek_15() {
		return f1.back();
	}

	inline hw_uint<16> peek_16() {
		return f2.back();
	}

	inline hw_uint<16> peek_31() {
		return f3.back();
	}

	inline hw_uint<16> peek_32() {
		return f4.back();
	}



	inline hw_uint<16> peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 15) {
			return f1.back();
		}
		if (offset == 16) {
			return f2.back();
		}
		if (offset == 31) {
			return f3.back();
		}
		if (offset == 32) {
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
		f4.push(f3.back());
		f3.push(f2.back());
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_I_id1_10_cache {
	// Capacity: 33
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<16>, 1> f0;
	// Parition [1, 16) capacity = 15
	fifo<hw_uint<16>, 15> f1;
	// Parition [16, 17) capacity = 1
	fifo<hw_uint<16>, 1> f2;
	// Parition [17, 32) capacity = 15
	fifo<hw_uint<16>, 15> f3;
	// Parition [32, 32] capacity = 1
	fifo<hw_uint<16>, 1> f4;


	inline hw_uint<16> peek_0() {
		return f0.back();
	}

	inline hw_uint<16> peek_15() {
		return f1.back();
	}

	inline hw_uint<16> peek_16() {
		return f2.back();
	}

	inline hw_uint<16> peek_31() {
		return f3.back();
	}

	inline hw_uint<16> peek_32() {
		return f4.back();
	}



	inline hw_uint<16> peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 15) {
			return f1.back();
		}
		if (offset == 16) {
			return f2.back();
		}
		if (offset == 31) {
			return f3.back();
		}
		if (offset == 32) {
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
		f4.push(f3.back());
		f3.push(f2.back());
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};



inline void I_I_id0_4_write(hw_uint<16>& I_I_id0_4, I_I_id0_4_cache& I_I_id0_4_delay) {
	I_I_id0_4_delay.push(I_I_id0_4);
}

inline void I_I_id1_10_write(hw_uint<16>& I_I_id1_10, I_I_id1_10_cache& I_I_id1_10_delay) {
	I_I_id1_10_delay.push(I_I_id1_10);
}

inline hw_uint<16> I_out_0_blur_30_1_select(I_I_id0_4_cache& I_I_id0_4_delay
, I_I_id1_10_cache& I_I_id1_10_delay
, int root, int xr, int xc) {
// Pieces...
// { out_0_blur_30[root = 0, xr, xc] : 0 <= xr <= 29 and 0 < xc <= 14 } -> { out_0_blur_30[root, xr, xc] -> 32 }
// 	is always true on iteration domain: 0
// { out_0_blur_30[root = 0, xr, xc = 15] : 0 <= xr <= 29 } -> { out_0_blur_30[root, xr, xc] -> (17 + xc) }
// 	is always true on iteration domain: 0
// { out_0_blur_30[root = 0, xr, xc = 0] : 0 <= xr <= 29 } -> { out_0_blur_30[root, xr, xc] -> 32 }
// 	is always true on iteration domain: 0
//	is optimizable constant: 1
	bool select_I_id0 = ((/* constraint: { out_0_blur_30[root, xr, xc] : root = 0 } */
1*root == 0 && /* constraint: { out_0_blur_30[root, xr, xc] : xr >= 0 } */
1*xr >= 0 && /* constraint: { out_0_blur_30[root, xr, xc] : 29 - xr >= 0 } */
-1*xr + 29 >= 0 && /* constraint: { out_0_blur_30[root, xr, xc] : xc >= 0 } */
1*xc >= 0 && /* constraint: { out_0_blur_30[root, xr, xc] : 15 - xc >= 0 } */
-1*xc + 15 >= 0));
	// inpt: I_I_id0_4
	int value_I_I_id0_4 = I_I_id0_4_delay.peek(((root == 0 && xr >= 0 && 29 - xr >= 0 && -1 + xc >= 0 && 14 - xc >= 0) ? (32) : (-15 + xc == 0 && root == 0 && xr >= 0 && 29 - xr >= 0) ? ((17 + xc)) : (xc == 0 && root == 0 && xr >= 0 && 29 - xr >= 0) ? (32) : 0));
	if (select_I_id0) { return value_I_I_id0_4; }
	// inpt: I_I_id1_10
//	No key for: I_I_id1_10
	cout << "Error: Unsupported offsets: " << " root = " << root  << " xr = " << xr  << " xc = " << xc  << endl;
	assert(false);
	return 0;
}

inline hw_uint<16> I_out_0_blur_30_2_select(I_I_id0_4_cache& I_I_id0_4_delay
, I_I_id1_10_cache& I_I_id1_10_delay
, int root, int xr, int xc) {
// Pieces...
// { out_0_blur_30[root = 0, xr, xc] : 0 <= xr <= 29 and 0 < xc <= 14 } -> { out_0_blur_30[root, xr, xc] -> 16 }
// 	is always true on iteration domain: 0
// { out_0_blur_30[root = 0, xr, xc = 15] : 0 <= xr <= 29 } -> { out_0_blur_30[root, xr, xc] -> (1 + xc) }
// 	is always true on iteration domain: 0
// { out_0_blur_30[root = 0, xr, xc = 0] : 0 <= xr <= 29 } -> { out_0_blur_30[root, xr, xc] -> 16 }
// 	is always true on iteration domain: 0
//	is optimizable constant: 1
	bool select_I_id0 = ((/* constraint: { out_0_blur_30[root, xr, xc] : root = 0 } */
1*root == 0 && /* constraint: { out_0_blur_30[root, xr, xc] : xr >= 0 } */
1*xr >= 0 && /* constraint: { out_0_blur_30[root, xr, xc] : 29 - xr >= 0 } */
-1*xr + 29 >= 0 && /* constraint: { out_0_blur_30[root, xr, xc] : xc >= 0 } */
1*xc >= 0 && /* constraint: { out_0_blur_30[root, xr, xc] : 15 - xc >= 0 } */
-1*xc + 15 >= 0));
	// inpt: I_I_id0_4
	int value_I_I_id0_4 = I_I_id0_4_delay.peek(((root == 0 && xr >= 0 && 29 - xr >= 0 && -1 + xc >= 0 && 14 - xc >= 0) ? (16) : (-15 + xc == 0 && root == 0 && xr >= 0 && 29 - xr >= 0) ? ((1 + xc)) : (xc == 0 && root == 0 && xr >= 0 && 29 - xr >= 0) ? (16) : 0));
	if (select_I_id0) { return value_I_I_id0_4; }
	// inpt: I_I_id1_10
//	No key for: I_I_id1_10
	cout << "Error: Unsupported offsets: " << " root = " << root  << " xr = " << xr  << " xc = " << xc  << endl;
	assert(false);
	return 0;
}

inline hw_uint<16> I_out_0_blur_30_3_select(I_I_id0_4_cache& I_I_id0_4_delay
, I_I_id1_10_cache& I_I_id1_10_delay
, int root, int xr, int xc) {
// Pieces...
// Always 0
//	is optimizable constant: 0
	bool select_I_id0 = ((/* constraint: { out_0_blur_30[root, xr, xc] : root = 0 } */
1*root == 0 && /* constraint: { out_0_blur_30[root, xr, xc] : xr >= 0 } */
1*xr >= 0 && /* constraint: { out_0_blur_30[root, xr, xc] : 29 - xr >= 0 } */
-1*xr + 29 >= 0 && /* constraint: { out_0_blur_30[root, xr, xc] : xc >= 0 } */
1*xc >= 0 && /* constraint: { out_0_blur_30[root, xr, xc] : 15 - xc >= 0 } */
-1*xc + 15 >= 0));
	// inpt: I_I_id0_4
	int value_I_I_id0_4 = I_I_id0_4_delay.peek((0));
	if (select_I_id0) { return value_I_I_id0_4; }
	// inpt: I_I_id1_10
//	No key for: I_I_id1_10
	cout << "Error: Unsupported offsets: " << " root = " << root  << " xr = " << xr  << " xc = " << xc  << endl;
	assert(false);
	return 0;
}

inline hw_uint<16> I_out_1_blur_31_7_select(I_I_id0_4_cache& I_I_id0_4_delay
, I_I_id1_10_cache& I_I_id1_10_delay
, int root, int xr, int xc) {
// Pieces...
// Always 0
//	is optimizable constant: 0
	bool select_I_id1 = ((/* constraint: { out_1_blur_31[root, xr, xc] : root = 0 } */
1*root == 0 && /* constraint: { out_1_blur_31[root, xr, xc] : xr >= 0 } */
1*xr >= 0 && /* constraint: { out_1_blur_31[root, xr, xc] : 29 - xr >= 0 } */
-1*xr + 29 >= 0 && /* constraint: { out_1_blur_31[root, xr, xc] : xc >= 0 } */
1*xc >= 0 && /* constraint: { out_1_blur_31[root, xr, xc] : 15 - xc >= 0 } */
-1*xc + 15 >= 0));
	// inpt: I_I_id0_4
//	No key for: I_I_id0_4
	// inpt: I_I_id1_10
	int value_I_I_id1_10 = I_I_id1_10_delay.peek(((root == 0 && xr >= 0 && 29 - xr >= 0 && -1 + xc >= 0 && 14 - xc >= 0) ? (32) : (-15 + xc == 0 && root == 0 && xr >= 0 && 29 - xr >= 0) ? ((17 + xc)) : (xc == 0 && root == 0 && xr >= 0 && 29 - xr >= 0) ? (32) : 0));
	if (select_I_id1) { return value_I_I_id1_10; }
	cout << "Error: Unsupported offsets: " << " root = " << root  << " xr = " << xr  << " xc = " << xc  << endl;
	assert(false);
	return 0;
}

inline hw_uint<16> I_out_1_blur_31_8_select(I_I_id0_4_cache& I_I_id0_4_delay
, I_I_id1_10_cache& I_I_id1_10_delay
, int root, int xr, int xc) {
// Pieces...
// Always 0
//	is optimizable constant: 0
	bool select_I_id1 = ((/* constraint: { out_1_blur_31[root, xr, xc] : root = 0 } */
1*root == 0 && /* constraint: { out_1_blur_31[root, xr, xc] : xr >= 0 } */
1*xr >= 0 && /* constraint: { out_1_blur_31[root, xr, xc] : 29 - xr >= 0 } */
-1*xr + 29 >= 0 && /* constraint: { out_1_blur_31[root, xr, xc] : xc >= 0 } */
1*xc >= 0 && /* constraint: { out_1_blur_31[root, xr, xc] : 15 - xc >= 0 } */
-1*xc + 15 >= 0));
	// inpt: I_I_id0_4
//	No key for: I_I_id0_4
	// inpt: I_I_id1_10
	int value_I_I_id1_10 = I_I_id1_10_delay.peek(((root == 0 && xr >= 0 && 29 - xr >= 0 && -1 + xc >= 0 && 14 - xc >= 0) ? (16) : (-15 + xc == 0 && root == 0 && xr >= 0 && 29 - xr >= 0) ? ((1 + xc)) : (xc == 0 && root == 0 && xr >= 0 && 29 - xr >= 0) ? (16) : 0));
	if (select_I_id1) { return value_I_I_id1_10; }
	cout << "Error: Unsupported offsets: " << " root = " << root  << " xr = " << xr  << " xc = " << xc  << endl;
	assert(false);
	return 0;
}

inline hw_uint<16> I_out_1_blur_31_9_select(I_I_id0_4_cache& I_I_id0_4_delay
, I_I_id1_10_cache& I_I_id1_10_delay
, int root, int xr, int xc) {
// Pieces...
// Always 0
//	is optimizable constant: 0
	bool select_I_id1 = ((/* constraint: { out_1_blur_31[root, xr, xc] : root = 0 } */
1*root == 0 && /* constraint: { out_1_blur_31[root, xr, xc] : xr >= 0 } */
1*xr >= 0 && /* constraint: { out_1_blur_31[root, xr, xc] : 29 - xr >= 0 } */
-1*xr + 29 >= 0 && /* constraint: { out_1_blur_31[root, xr, xc] : xc >= 0 } */
1*xc >= 0 && /* constraint: { out_1_blur_31[root, xr, xc] : 15 - xc >= 0 } */
-1*xc + 15 >= 0));
	// inpt: I_I_id0_4
//	No key for: I_I_id0_4
	// inpt: I_I_id1_10
	int value_I_I_id1_10 = I_I_id1_10_delay.peek((0));
	if (select_I_id1) { return value_I_I_id1_10; }
	cout << "Error: Unsupported offsets: " << " root = " << root  << " xr = " << xr  << " xc = " << xc  << endl;
	assert(false);
	return 0;
}

// Bundles...
// I_id0_write
//	I_I_id0_4
inline void I_I_id0_write_bundle_write(hw_uint<16>& /* width = 16*/I_id0_write, I_I_id0_4_cache& I_I_id0_4_delay) {
	I_I_id0_4_write(I_id0_write, I_I_id0_4_delay);
}

// I_id1_write
//	I_I_id1_10
inline void I_I_id1_write_bundle_write(hw_uint<16>& /* width = 16*/I_id1_write, I_I_id1_10_cache& I_I_id1_10_delay) {
	I_I_id1_10_write(I_id1_write, I_I_id1_10_delay);
}

// out_0_blur_30_read
//	I_out_0_blur_30_1
//	I_out_0_blur_30_2
//	I_out_0_blur_30_3
inline hw_uint<48> I_out_0_blur_30_read_bundle_read(I_I_id0_4_cache& I_I_id0_4_delay, I_I_id1_10_cache& I_I_id1_10_delay, int root, int xr, int xc) {
	hw_uint<48> result;
	hw_uint<16> I_out_0_blur_30_1_res = I_out_0_blur_30_1_select(I_I_id0_4_delay, I_I_id1_10_delay, root, xr, xc);
	set_at<0, 48>(result, I_out_0_blur_30_1_res);
	hw_uint<16> I_out_0_blur_30_2_res = I_out_0_blur_30_2_select(I_I_id0_4_delay, I_I_id1_10_delay, root, xr, xc);
	set_at<16, 48>(result, I_out_0_blur_30_2_res);
	hw_uint<16> I_out_0_blur_30_3_res = I_out_0_blur_30_3_select(I_I_id0_4_delay, I_I_id1_10_delay, root, xr, xc);
	set_at<32, 48>(result, I_out_0_blur_30_3_res);
	return result;
}

// out_1_blur_31_read
//	I_out_1_blur_31_7
//	I_out_1_blur_31_8
//	I_out_1_blur_31_9
inline hw_uint<48> I_out_1_blur_31_read_bundle_read(I_I_id0_4_cache& I_I_id0_4_delay, I_I_id1_10_cache& I_I_id1_10_delay, int root, int xr, int xc) {
	hw_uint<48> result;
	hw_uint<16> I_out_1_blur_31_7_res = I_out_1_blur_31_7_select(I_I_id0_4_delay, I_I_id1_10_delay, root, xr, xc);
	set_at<0, 48>(result, I_out_1_blur_31_7_res);
	hw_uint<16> I_out_1_blur_31_8_res = I_out_1_blur_31_8_select(I_I_id0_4_delay, I_I_id1_10_delay, root, xr, xc);
	set_at<16, 48>(result, I_out_1_blur_31_8_res);
	hw_uint<16> I_out_1_blur_31_9_res = I_out_1_blur_31_9_select(I_I_id0_4_delay, I_I_id1_10_delay, root, xr, xc);
	set_at<32, 48>(result, I_out_1_blur_31_9_res);
	return result;
}





// Operation logic
inline void out_0_blur_30(I_I_id0_4_cache& I_I_id0_4, I_I_id1_10_cache& I_I_id1_10, HWStream<hw_uint<16> >& out_0, int root, int xr, int xc) {
	// Consume: I
	auto I_xr__p__0_c__2_m_xc__p__0__p__0_value = I_out_0_blur_30_read_bundle_read(I_I_id0_4, I_I_id1_10/* source_delay */, root, xr, xc);
	// Apply function: blur_3
	// Arg: I_xr__p__0_c__2_m_xc__p__0__p__0_value
	// Arg buf: I
	// Arg: I_xr__p__1_c__2_m_xc__p__0__p__0_value
	// Arg buf: I
	// Arg: I_xr__p__2_c__2_m_xc__p__0__p__0_value
	// Arg buf: I
	 /* comma list args */ auto compute_result = blur_3(I_xr__p__0_c__2_m_xc__p__0__p__0_value);
	// Produce: out_0
	out_0.write(compute_result);
}

inline void I_id0(HWStream<hw_uint<16> >& in_0, I_I_id0_4_cache& I_I_id0_4, I_I_id1_10_cache& I_I_id1_10, int root, int ir, int ic) {
	// Consume: in_0
	auto in_0_ir_c__ic_value = in_0.read();
	// Apply function: id
	// Arg: in_0_ir_c__ic_value
	// Arg buf: in_0
	 /* comma list args */ auto compute_result = id(in_0_ir_c__ic_value);
	// Produce: I
	// Buffer: I, Op: I_id0
	// Possible ports...
		// I_I_id0_4
	I_I_id0_write_bundle_write(compute_result, I_I_id0_4 /* output src_delay */);
}

inline void out_1_blur_31(I_I_id0_4_cache& I_I_id0_4, I_I_id1_10_cache& I_I_id1_10, HWStream<hw_uint<16> >& out_1, int root, int xr, int xc) {
	// Consume: I
	auto I_xr__p__0_c__2_m_xc__p__1__p__0_value = I_out_1_blur_31_read_bundle_read(I_I_id0_4, I_I_id1_10/* source_delay */, root, xr, xc);
	// Apply function: blur_3
	// Arg: I_xr__p__0_c__2_m_xc__p__1__p__0_value
	// Arg buf: I
	// Arg: I_xr__p__1_c__2_m_xc__p__1__p__0_value
	// Arg buf: I
	// Arg: I_xr__p__2_c__2_m_xc__p__1__p__0_value
	// Arg buf: I
	 /* comma list args */ auto compute_result = blur_3(I_xr__p__0_c__2_m_xc__p__1__p__0_value);
	// Produce: out_1
	out_1.write(compute_result);
}

inline void I_id1(HWStream<hw_uint<16> >& in_1, I_I_id0_4_cache& I_I_id0_4, I_I_id1_10_cache& I_I_id1_10, int root, int ir, int ic) {
	// Consume: in_1
	auto in_1_ir_c__ic_value = in_1.read();
	// Apply function: id
	// Arg: in_1_ir_c__ic_value
	// Arg buf: in_1
	 /* comma list args */ auto compute_result = id(in_1_ir_c__ic_value);
	// Produce: I
	// Buffer: I, Op: I_id1
	// Possible ports...
		// I_I_id0_4
		// I_I_id1_10
	I_I_id1_write_bundle_write(compute_result, I_I_id1_10 /* output src_delay */);
}

// Driver function
void soda_blur(HWStream<hw_uint<16> >& in_0, HWStream<hw_uint<16> >& in_1, HWStream<hw_uint<16> >& out_0, HWStream<hw_uint<16> >& out_1) {
	I_I_id0_4_cache I_I_id0_4;
	I_I_id1_10_cache I_I_id1_10;
	{
	  for (int c1 = 0; c1 <= 31; c1 += 1)
	    for (int c2 = 0; c2 <= 15; c2 += 1) {
	      I_id0(in_0, I_I_id0_4, I_I_id1_10, 0, c1, c2);
	      if (c1 >= 2)
	        out_0_blur_30(I_I_id0_4, I_I_id1_10, out_0, 0, c1 - 2, c2);
	    }
	  for (int c1 = 0; c1 <= 31; c1 += 1)
	    for (int c2 = 0; c2 <= 15; c2 += 1) {
	      I_id1(in_1, I_I_id0_4, I_I_id1_10, 0, c1, c2);
	      if (c1 >= 2)
	        out_1_blur_31(I_I_id0_4, I_I_id1_10, out_1, 0, c1 - 2, c2);
	    }
	}
	
}
