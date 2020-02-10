#include "conv_3x3.h"

#include "hw_classes.h"

struct I_I_id0_0_cache {
	// Capacity: 2
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<16>, 1> f0;
	// Parition [1, 1] capacity = 1
	fifo<hw_uint<16>, 1> f2;


	inline hw_uint<16> peek_0() {
		return f0.back();
	}

	inline hw_uint<16> peek_1() {
		return f2.back();
	}



	inline hw_uint<16> peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
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
		f2.push(f0.back());
		f0.push(value);
	}

};

struct I_I_id1_2_cache {
	// Capacity: 2
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<16>, 1> f0;
	// Parition [1, 1] capacity = 1
	fifo<hw_uint<16>, 1> f2;


	inline hw_uint<16> peek_0() {
		return f0.back();
	}

	inline hw_uint<16> peek_1() {
		return f2.back();
	}



	inline hw_uint<16> peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
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
		f2.push(f0.back());
		f0.push(value);
	}

};



inline void I_I_id0_0_write(hw_uint<16>& I_I_id0_0, I_I_id0_0_cache& I_I_id0_0_delay) {
	I_I_id0_0_delay.push(I_I_id0_0);
}

inline void I_I_id1_2_write(hw_uint<16>& I_I_id1_2, I_I_id1_2_cache& I_I_id1_2_delay) {
	I_I_id1_2_delay.push(I_I_id1_2);
}

inline hw_uint<16> I_blur_x_blur_30_5_select(I_I_id0_0_cache& I_I_id0_0_delay
, I_I_id1_2_cache& I_I_id1_2_delay
, int root, int yr, int yc) {
// Pieces...
// { blur_x_blur_30[root = 0, yr, yc] : 0 <= yr <= 31 and 0 <= yc <= 14 } -> { blur_x_blur_30[root, yr, yc] -> 1 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	bool select_I_id0 = ((/* constraint: { blur_x_blur_30[root, yr, yc] : root = 0 } */
1*root == 0 && /* constraint: { blur_x_blur_30[root, yr, yc] : yr >= 0 } */
1*yr >= 0 && /* constraint: { blur_x_blur_30[root, yr, yc] : 31 - yr >= 0 } */
-1*yr + 31 >= 0 && /* constraint: { blur_x_blur_30[root, yr, yc] : yc >= 0 } */
1*yc >= 0 && /* constraint: { blur_x_blur_30[root, yr, yc] : 14 - yc >= 0 } */
-1*yc + 14 >= 0));
	// inpt: I_I_id0_0
	int value_I_I_id0_0 = I_I_id0_0_delay.peek(((root == 0 && yr >= 0 && 31 - yr >= 0 && yc >= 0 && 14 - yc >= 0) ? (1) : 0));
	if (select_I_id0) { return value_I_I_id0_0; }
	// inpt: I_I_id1_2
//	No key for: I_I_id1_2
	cout << "Error: Unsupported offsets: " << " root = " << root  << " yr = " << yr  << " yc = " << yc  << endl;
	assert(false);
	return 0;
}

inline hw_uint<16> I_blur_x_blur_30_6_select(I_I_id0_0_cache& I_I_id0_0_delay
, I_I_id1_2_cache& I_I_id1_2_delay
, int root, int yr, int yc) {
// Pieces...
// Always 0
//	is optimizable constant: 0
	bool select_I_id1 = ((/* constraint: { blur_x_blur_30[root, yr, yc] : root = 0 } */
1*root == 0 && /* constraint: { blur_x_blur_30[root, yr, yc] : yr >= 0 } */
1*yr >= 0 && /* constraint: { blur_x_blur_30[root, yr, yc] : 31 - yr >= 0 } */
-1*yr + 31 >= 0 && /* constraint: { blur_x_blur_30[root, yr, yc] : yc >= 0 } */
1*yc >= 0 && /* constraint: { blur_x_blur_30[root, yr, yc] : 14 - yc >= 0 } */
-1*yc + 14 >= 0));
	// inpt: I_I_id0_0
//	No key for: I_I_id0_0
	// inpt: I_I_id1_2
	int value_I_I_id1_2 = I_I_id1_2_delay.peek(((root == 0 && yr >= 0 && 31 - yr >= 0 && yc >= 0 && 14 - yc >= 0) ? (1) : 0));
	if (select_I_id1) { return value_I_I_id1_2; }
	cout << "Error: Unsupported offsets: " << " root = " << root  << " yr = " << yr  << " yc = " << yc  << endl;
	assert(false);
	return 0;
}

inline hw_uint<16> I_blur_x_blur_30_7_select(I_I_id0_0_cache& I_I_id0_0_delay
, I_I_id1_2_cache& I_I_id1_2_delay
, int root, int yr, int yc) {
// Pieces...
// Always 0
//	is optimizable constant: 0
	bool select_I_id0 = ((/* constraint: { blur_x_blur_30[root, yr, yc] : root = 0 } */
1*root == 0 && /* constraint: { blur_x_blur_30[root, yr, yc] : yr >= 0 } */
1*yr >= 0 && /* constraint: { blur_x_blur_30[root, yr, yc] : 31 - yr >= 0 } */
-1*yr + 31 >= 0 && /* constraint: { blur_x_blur_30[root, yr, yc] : yc >= 0 } */
1*yc >= 0 && /* constraint: { blur_x_blur_30[root, yr, yc] : 14 - yc >= 0 } */
-1*yc + 14 >= 0));
	// inpt: I_I_id0_0
	int value_I_I_id0_0 = I_I_id0_0_delay.peek((0));
	if (select_I_id0) { return value_I_I_id0_0; }
	// inpt: I_I_id1_2
//	No key for: I_I_id1_2
	cout << "Error: Unsupported offsets: " << " root = " << root  << " yr = " << yr  << " yc = " << yc  << endl;
	assert(false);
	return 0;
}

inline hw_uint<16> I_blur_x_blur_31_10_select(I_I_id0_0_cache& I_I_id0_0_delay
, I_I_id1_2_cache& I_I_id1_2_delay
, int root, int yr, int yc) {
// Pieces...
// Always 0
//	is optimizable constant: 0
	bool select_I_id0 = ((/* constraint: { blur_x_blur_31[root, yr, yc] : root = 0 } */
1*root == 0 && /* constraint: { blur_x_blur_31[root, yr, yc] : yr >= 0 } */
1*yr >= 0 && /* constraint: { blur_x_blur_31[root, yr, yc] : 31 - yr >= 0 } */
-1*yr + 31 >= 0 && /* constraint: { blur_x_blur_31[root, yr, yc] : yc >= 0 } */
1*yc >= 0 && /* constraint: { blur_x_blur_31[root, yr, yc] : 14 - yc >= 0 } */
-1*yc + 14 >= 0));
	// inpt: I_I_id0_0
	int value_I_I_id0_0 = I_I_id0_0_delay.peek((0));
	if (select_I_id0) { return value_I_I_id0_0; }
	// inpt: I_I_id1_2
//	No key for: I_I_id1_2
	cout << "Error: Unsupported offsets: " << " root = " << root  << " yr = " << yr  << " yc = " << yc  << endl;
	assert(false);
	return 0;
}

inline hw_uint<16> I_blur_x_blur_31_11_select(I_I_id0_0_cache& I_I_id0_0_delay
, I_I_id1_2_cache& I_I_id1_2_delay
, int root, int yr, int yc) {
// Pieces...
// Always 0
//	is optimizable constant: 0
	bool select_I_id1 = ((/* constraint: { blur_x_blur_31[root, yr, yc] : root = 0 } */
1*root == 0 && /* constraint: { blur_x_blur_31[root, yr, yc] : yr >= 0 } */
1*yr >= 0 && /* constraint: { blur_x_blur_31[root, yr, yc] : 31 - yr >= 0 } */
-1*yr + 31 >= 0 && /* constraint: { blur_x_blur_31[root, yr, yc] : yc >= 0 } */
1*yc >= 0 && /* constraint: { blur_x_blur_31[root, yr, yc] : 14 - yc >= 0 } */
-1*yc + 14 >= 0));
	// inpt: I_I_id0_0
//	No key for: I_I_id0_0
	// inpt: I_I_id1_2
	int value_I_I_id1_2 = I_I_id1_2_delay.peek((0));
	if (select_I_id1) { return value_I_I_id1_2; }
	cout << "Error: Unsupported offsets: " << " root = " << root  << " yr = " << yr  << " yc = " << yc  << endl;
	assert(false);
	return 0;
}

inline hw_uint<16> I_blur_x_blur_31_9_select(I_I_id0_0_cache& I_I_id0_0_delay
, I_I_id1_2_cache& I_I_id1_2_delay
, int root, int yr, int yc) {
// Pieces...
// Always 0
//	is optimizable constant: 0
	bool select_I_id1 = ((/* constraint: { blur_x_blur_31[root, yr, yc] : root = 0 } */
1*root == 0 && /* constraint: { blur_x_blur_31[root, yr, yc] : yr >= 0 } */
1*yr >= 0 && /* constraint: { blur_x_blur_31[root, yr, yc] : 31 - yr >= 0 } */
-1*yr + 31 >= 0 && /* constraint: { blur_x_blur_31[root, yr, yc] : yc >= 0 } */
1*yc >= 0 && /* constraint: { blur_x_blur_31[root, yr, yc] : 14 - yc >= 0 } */
-1*yc + 14 >= 0));
	// inpt: I_I_id0_0
//	No key for: I_I_id0_0
	// inpt: I_I_id1_2
	int value_I_I_id1_2 = I_I_id1_2_delay.peek(((root == 0 && yr >= 0 && 31 - yr >= 0 && yc >= 0 && 14 - yc >= 0) ? (1) : 0));
	if (select_I_id1) { return value_I_I_id1_2; }
	cout << "Error: Unsupported offsets: " << " root = " << root  << " yr = " << yr  << " yc = " << yc  << endl;
	assert(false);
	return 0;
}

// Bundles...
// I_id0_write
//	I_I_id0_0
inline void I_I_id0_write_bundle_write(hw_uint<16>& /* width = 16*/I_id0_write, I_I_id0_0_cache& I_I_id0_0_delay) {
	I_I_id0_0_write(I_id0_write, I_I_id0_0_delay);
}

// I_id1_write
//	I_I_id1_2
inline void I_I_id1_write_bundle_write(hw_uint<16>& /* width = 16*/I_id1_write, I_I_id1_2_cache& I_I_id1_2_delay) {
	I_I_id1_2_write(I_id1_write, I_I_id1_2_delay);
}

// blur_x_blur_30_read
//	I_blur_x_blur_30_5
//	I_blur_x_blur_30_6
//	I_blur_x_blur_30_7
inline hw_uint<48> I_blur_x_blur_30_read_bundle_read(I_I_id0_0_cache& I_I_id0_0_delay, I_I_id1_2_cache& I_I_id1_2_delay, int root, int yr, int yc) {
	hw_uint<48> result;
	hw_uint<16> I_blur_x_blur_30_5_res = I_blur_x_blur_30_5_select(I_I_id0_0_delay, I_I_id1_2_delay, root, yr, yc);
	set_at<0, 48>(result, I_blur_x_blur_30_5_res);
	hw_uint<16> I_blur_x_blur_30_6_res = I_blur_x_blur_30_6_select(I_I_id0_0_delay, I_I_id1_2_delay, root, yr, yc);
	set_at<16, 48>(result, I_blur_x_blur_30_6_res);
	hw_uint<16> I_blur_x_blur_30_7_res = I_blur_x_blur_30_7_select(I_I_id0_0_delay, I_I_id1_2_delay, root, yr, yc);
	set_at<32, 48>(result, I_blur_x_blur_30_7_res);
	return result;
}

// blur_x_blur_31_read
//	I_blur_x_blur_31_9
//	I_blur_x_blur_31_10
//	I_blur_x_blur_31_11
inline hw_uint<48> I_blur_x_blur_31_read_bundle_read(I_I_id0_0_cache& I_I_id0_0_delay, I_I_id1_2_cache& I_I_id1_2_delay, int root, int yr, int yc) {
	hw_uint<48> result;
	hw_uint<16> I_blur_x_blur_31_9_res = I_blur_x_blur_31_9_select(I_I_id0_0_delay, I_I_id1_2_delay, root, yr, yc);
	set_at<0, 48>(result, I_blur_x_blur_31_9_res);
	hw_uint<16> I_blur_x_blur_31_10_res = I_blur_x_blur_31_10_select(I_I_id0_0_delay, I_I_id1_2_delay, root, yr, yc);
	set_at<16, 48>(result, I_blur_x_blur_31_10_res);
	hw_uint<16> I_blur_x_blur_31_11_res = I_blur_x_blur_31_11_select(I_I_id0_0_delay, I_I_id1_2_delay, root, yr, yc);
	set_at<32, 48>(result, I_blur_x_blur_31_11_res);
	return result;
}



#include "hw_classes.h"

struct blur_x_blur_x_blur_30_4_cache {
	// Capacity: 1
	// Parition [0, 0] capacity = 1
	fifo<hw_uint<16>, 1> f1;


	inline hw_uint<16> peek_0() {
		return f1.back();
	}



	inline hw_uint<16> peek(const int offset) {
		if (offset == 0) {
			return f1.back();
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
		f1.push(value);
	}

};

struct blur_x_blur_x_blur_31_8_cache {
	// Capacity: 1
	// Parition [0, 0] capacity = 1
	fifo<hw_uint<16>, 1> f1;


	inline hw_uint<16> peek_0() {
		return f1.back();
	}



	inline hw_uint<16> peek(const int offset) {
		if (offset == 0) {
			return f1.back();
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
		f1.push(value);
	}

};



inline void blur_x_blur_x_blur_30_4_write(hw_uint<16>& blur_x_blur_x_blur_30_4, blur_x_blur_x_blur_30_4_cache& blur_x_blur_x_blur_30_4_delay) {
	blur_x_blur_x_blur_30_4_delay.push(blur_x_blur_x_blur_30_4);
}

inline void blur_x_blur_x_blur_31_8_write(hw_uint<16>& blur_x_blur_x_blur_31_8, blur_x_blur_x_blur_31_8_cache& blur_x_blur_x_blur_31_8_delay) {
	blur_x_blur_x_blur_31_8_delay.push(blur_x_blur_x_blur_31_8);
}

// Bundles...
// blur_x_blur_30_write
//	blur_x_blur_x_blur_30_4
inline void blur_x_blur_x_blur_30_write_bundle_write(hw_uint<16>& /* width = 16*/blur_x_blur_30_write, blur_x_blur_x_blur_30_4_cache& blur_x_blur_x_blur_30_4_delay) {
	blur_x_blur_x_blur_30_4_write(blur_x_blur_30_write, blur_x_blur_x_blur_30_4_delay);
}

// blur_x_blur_31_write
//	blur_x_blur_x_blur_31_8
inline void blur_x_blur_x_blur_31_write_bundle_write(hw_uint<16>& /* width = 16*/blur_x_blur_31_write, blur_x_blur_x_blur_31_8_cache& blur_x_blur_x_blur_31_8_delay) {
	blur_x_blur_x_blur_31_8_write(blur_x_blur_31_write, blur_x_blur_x_blur_31_8_delay);
}





// Operation logic
inline void I_id0(HWStream<hw_uint<16>>& in_0, I_I_id0_0_cache& I_I_id0_0, I_I_id1_2_cache& I_I_id1_2, int root, int ir, int ic) {
	// Consume: in_0
	auto in_0_ir_c__ic_value = in_0.read();
	// Apply function: id
	// Arg: in_0_ir_c__ic_value
	// Arg buf: in_0
	auto compute_result = id(in_0_ir_c__ic_value);
	// Produce: I
	// Buffer: I, Op: I_id0
	// Possible ports...
		// I_I_id0_0
	I_I_id0_write_bundle_write(compute_result, I_I_id0_0 /* output src_delay */);
}

inline void I_id1(HWStream<hw_uint<16>>& in_1, I_I_id0_0_cache& I_I_id0_0, I_I_id1_2_cache& I_I_id1_2, int root, int ir, int ic) {
	// Consume: in_1
	auto in_1_ir_c__ic_value = in_1.read();
	// Apply function: id
	// Arg: in_1_ir_c__ic_value
	// Arg buf: in_1
	auto compute_result = id(in_1_ir_c__ic_value);
	// Produce: I
	// Buffer: I, Op: I_id1
	// Possible ports...
		// I_I_id0_0
		// I_I_id1_2
	I_I_id1_write_bundle_write(compute_result, I_I_id1_2 /* output src_delay */);
}

inline void blur_x_blur_30(I_I_id0_0_cache& I_I_id0_0, I_I_id1_2_cache& I_I_id1_2, blur_x_blur_x_blur_30_4_cache& blur_x_blur_x_blur_30_4, blur_x_blur_x_blur_31_8_cache& blur_x_blur_x_blur_31_8, int root, int yr, int yc) {
	// Consume: I
	auto I_yr__p__0_c__2_m_yc__p__0__p__0_value = I_blur_x_blur_30_read_bundle_read(I_I_id0_0, I_I_id1_2/* source_delay */, root, yr, yc);
	// Apply function: blur_3
	// Arg: I_yr__p__0_c__2_m_yc__p__0__p__0_value
	// Arg buf: I
	// Arg: I_yr__p__0_c__2_m_yc__p__0__p__1_value
	// Arg buf: I
	// Arg: I_yr__p__0_c__2_m_yc__p__0__p__2_value
	// Arg buf: I
	auto compute_result = blur_3(I_yr__p__0_c__2_m_yc__p__0__p__0_value);
	// Produce: blur_x
	// Buffer: blur_x, Op: blur_x_blur_30
	// Possible ports...
		// blur_x_blur_x_blur_30_4
	blur_x_blur_x_blur_30_write_bundle_write(compute_result, blur_x_blur_x_blur_30_4 /* output src_delay */);
}

inline void blur_x_blur_31(I_I_id0_0_cache& I_I_id0_0, I_I_id1_2_cache& I_I_id1_2, blur_x_blur_x_blur_30_4_cache& blur_x_blur_x_blur_30_4, blur_x_blur_x_blur_31_8_cache& blur_x_blur_x_blur_31_8, int root, int yr, int yc) {
	// Consume: I
	auto I_yr__p__0_c__2_m_yc__p__1__p__0_value = I_blur_x_blur_31_read_bundle_read(I_I_id0_0, I_I_id1_2/* source_delay */, root, yr, yc);
	// Apply function: blur_3
	// Arg: I_yr__p__0_c__2_m_yc__p__1__p__0_value
	// Arg buf: I
	// Arg: I_yr__p__0_c__2_m_yc__p__1__p__1_value
	// Arg buf: I
	// Arg: I_yr__p__0_c__2_m_yc__p__1__p__2_value
	// Arg buf: I
	auto compute_result = blur_3(I_yr__p__0_c__2_m_yc__p__1__p__0_value);
	// Produce: blur_x
	// Buffer: blur_x, Op: blur_x_blur_31
	// Possible ports...
		// blur_x_blur_x_blur_30_4
		// blur_x_blur_x_blur_31_8
	blur_x_blur_x_blur_31_write_bundle_write(compute_result, blur_x_blur_x_blur_31_8 /* output src_delay */);
}

// Driver function
void soda_blur(HWStream<hw_uint<16>>& in_0, HWStream<hw_uint<16>>& in_1, HWStream<hw_uint<16>>& out_0, HWStream<hw_uint<16>>& out_1) {
	I_I_id0_0_cache I_I_id0_0;
	I_I_id1_2_cache I_I_id1_2;
	blur_x_blur_x_blur_30_4_cache blur_x_blur_x_blur_30_4;
	blur_x_blur_x_blur_31_8_cache blur_x_blur_x_blur_31_8;
	for (int c0 = 0; c0 <= 31; c0 += 1)
	  for (int c1 = 0; c1 <= 15; c1 += 1) {
	    I_id0(in_0, I_I_id0_0, I_I_id1_2, 0, c0, c1);
	    I_id1(in_1, I_I_id0_0, I_I_id1_2, 0, c0, c1);
	    if (c1 >= 1) {
	      blur_x_blur_31(I_I_id0_0, I_I_id1_2, blur_x_blur_x_blur_30_4, blur_x_blur_x_blur_31_8, 0, c0, c1 - 1);
	      blur_x_blur_30(I_I_id0_0, I_I_id1_2, blur_x_blur_x_blur_30_4, blur_x_blur_x_blur_31_8, 0, c0, c1 - 1);
	    }
	  }
	
}
