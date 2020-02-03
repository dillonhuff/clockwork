#include "conv_3x3.h"

#include "hw_classes.h"

struct I_store_I_from_in_12_cache {
	// Capacity: 131
	// Parition [0, 1) capacity = 1
	fifo<int, 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<int, 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<int, 1> f4;
	// Parition [3, 64) capacity = 61
	fifo<int, 61> f5;
	// Parition [64, 65) capacity = 1
	fifo<int, 1> f6;
	// Parition [65, 66) capacity = 1
	fifo<int, 1> f8;
	// Parition [66, 67) capacity = 1
	fifo<int, 1> f10;
	// Parition [67, 128) capacity = 61
	fifo<int, 61> f11;
	// Parition [128, 129) capacity = 1
	fifo<int, 1> f12;
	// Parition [129, 130) capacity = 1
	fifo<int, 1> f14;
	// Parition [130, 130] capacity = 1
	fifo<int, 1> f16;


	inline int peek_0() {
		return f0.back();
	}

	inline int peek_1() {
		return f2.back();
	}

	inline int peek_2() {
		return f4.back();
	}

	inline int peek_63() {
		return f5.back();
	}

	inline int peek_64() {
		return f6.back();
	}

	inline int peek_65() {
		return f8.back();
	}

	inline int peek_66() {
		return f10.back();
	}

	inline int peek_127() {
		return f11.back();
	}

	inline int peek_128() {
		return f12.back();
	}

	inline int peek_129() {
		return f14.back();
	}

	inline int peek_130() {
		return f16.back();
	}



	inline int peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 2) {
			return f4.back();
		}
		if (offset == 63) {
			return f5.back();
		}
		if (offset == 64) {
			return f6.back();
		}
		if (offset == 65) {
			return f8.back();
		}
		if (offset == 66) {
			return f10.back();
		}
		if (offset == 127) {
			return f11.back();
		}
		if (offset == 128) {
			return f12.back();
		}
		if (offset == 129) {
			return f14.back();
		}
		if (offset == 130) {
			return f16.back();
		}
		cout << "Error: Unsupported offset in I: " << offset << endl;
		assert(false);
		return 0;

	}

	inline void push(const int value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f11.back());
		f11.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f5.back());
		f5.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};



inline void I_store_I_from_in_12_write(int& I_store_I_from_in_12, I_store_I_from_in_12_cache& I_store_I_from_in_12_delay) {
	I_store_I_from_in_12_delay.push(I_store_I_from_in_12);
}

inline int I_blurred_0_conv_3_30_1_select(I_store_I_from_in_12_cache& I_store_I_from_in_12_delay
, int root, int br, int bc) {
// Pieces...
// { blurred_0_conv_3_30[root = 0, br, bc] : 0 <= br <= 61 and 0 <= bc <= 61 } -> { blurred_0_conv_3_30[root, br, bc] -> 130 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_store_I_from_in_12 = I_store_I_from_in_12_delay.peek_130();
	return value_I_store_I_from_in_12;
}

inline int I_blurred_0_conv_3_30_2_select(I_store_I_from_in_12_cache& I_store_I_from_in_12_delay
, int root, int br, int bc) {
// Pieces...
// { blurred_0_conv_3_30[root = 0, br, bc] : 0 <= br <= 61 and 0 <= bc <= 61 } -> { blurred_0_conv_3_30[root, br, bc] -> 129 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_store_I_from_in_12 = I_store_I_from_in_12_delay.peek_129();
	return value_I_store_I_from_in_12;
}

inline int I_blurred_0_conv_3_30_3_select(I_store_I_from_in_12_cache& I_store_I_from_in_12_delay
, int root, int br, int bc) {
// Pieces...
// { blurred_0_conv_3_30[root = 0, br, bc] : 0 <= br <= 61 and 0 <= bc <= 60 } -> { blurred_0_conv_3_30[root, br, bc] -> 128 }
// 	is always true on iteration domain: 0
// { blurred_0_conv_3_30[root = 0, br, bc = 61] : 0 <= br <= 61 } -> { blurred_0_conv_3_30[root, br, bc] -> (67 + bc) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 1
	int value_I_store_I_from_in_12 = I_store_I_from_in_12_delay.peek_128();
	return value_I_store_I_from_in_12;
}

inline int I_blurred_0_conv_3_30_4_select(I_store_I_from_in_12_cache& I_store_I_from_in_12_delay
, int root, int br, int bc) {
// Pieces...
// { blurred_0_conv_3_30[root = 0, br, bc] : 0 <= br <= 61 and 0 <= bc <= 61 } -> { blurred_0_conv_3_30[root, br, bc] -> 66 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_store_I_from_in_12 = I_store_I_from_in_12_delay.peek_66();
	return value_I_store_I_from_in_12;
}

inline int I_blurred_0_conv_3_30_5_select(I_store_I_from_in_12_cache& I_store_I_from_in_12_delay
, int root, int br, int bc) {
// Pieces...
// { blurred_0_conv_3_30[root = 0, br, bc] : 0 <= br <= 61 and 0 <= bc <= 61 } -> { blurred_0_conv_3_30[root, br, bc] -> 65 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_store_I_from_in_12 = I_store_I_from_in_12_delay.peek_65();
	return value_I_store_I_from_in_12;
}

inline int I_blurred_0_conv_3_30_6_select(I_store_I_from_in_12_cache& I_store_I_from_in_12_delay
, int root, int br, int bc) {
// Pieces...
// { blurred_0_conv_3_30[root = 0, br, bc] : 0 <= br <= 61 and 0 <= bc <= 60 } -> { blurred_0_conv_3_30[root, br, bc] -> 64 }
// 	is always true on iteration domain: 0
// { blurred_0_conv_3_30[root = 0, br, bc = 61] : 0 <= br <= 61 } -> { blurred_0_conv_3_30[root, br, bc] -> (3 + bc) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 1
	int value_I_store_I_from_in_12 = I_store_I_from_in_12_delay.peek_64();
	return value_I_store_I_from_in_12;
}

inline int I_blurred_0_conv_3_30_7_select(I_store_I_from_in_12_cache& I_store_I_from_in_12_delay
, int root, int br, int bc) {
// Pieces...
// { blurred_0_conv_3_30[root = 0, br, bc] : 0 <= br <= 61 and 0 <= bc <= 61 } -> { blurred_0_conv_3_30[root, br, bc] -> 2 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_store_I_from_in_12 = I_store_I_from_in_12_delay.peek_2();
	return value_I_store_I_from_in_12;
}

inline int I_blurred_0_conv_3_30_8_select(I_store_I_from_in_12_cache& I_store_I_from_in_12_delay
, int root, int br, int bc) {
// Pieces...
// { blurred_0_conv_3_30[root = 0, br, bc] : 0 <= br <= 61 and 0 <= bc <= 61 } -> { blurred_0_conv_3_30[root, br, bc] -> 1 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_store_I_from_in_12 = I_store_I_from_in_12_delay.peek_1();
	return value_I_store_I_from_in_12;
}

inline int I_blurred_0_conv_3_30_9_select(I_store_I_from_in_12_cache& I_store_I_from_in_12_delay
, int root, int br, int bc) {
// Pieces...
//	is optimizable constant: 0
	int value_I_store_I_from_in_12 = I_store_I_from_in_12_delay.peek_0();
	return value_I_store_I_from_in_12;
}

// Bundles...
// blurred_0_conv_3_30_read
//	I_blurred_0_conv_3_30_1
//	I_blurred_0_conv_3_30_2
//	I_blurred_0_conv_3_30_3
//	I_blurred_0_conv_3_30_4
//	I_blurred_0_conv_3_30_5
//	I_blurred_0_conv_3_30_6
//	I_blurred_0_conv_3_30_7
//	I_blurred_0_conv_3_30_8
//	I_blurred_0_conv_3_30_9
inline hw_uint<288> I_blurred_0_conv_3_30_read_bundle_read(I_store_I_from_in_12_cache& I_store_I_from_in_12_delay, int root, int br, int bc) {
	hw_uint<288> result;
	int I_blurred_0_conv_3_30_1_res = I_blurred_0_conv_3_30_1_select(I_store_I_from_in_12_delay, root, br, bc);
	set_at<0, 288>(result, I_blurred_0_conv_3_30_1_res);
	int I_blurred_0_conv_3_30_2_res = I_blurred_0_conv_3_30_2_select(I_store_I_from_in_12_delay, root, br, bc);
	set_at<32, 288>(result, I_blurred_0_conv_3_30_2_res);
	int I_blurred_0_conv_3_30_3_res = I_blurred_0_conv_3_30_3_select(I_store_I_from_in_12_delay, root, br, bc);
	set_at<64, 288>(result, I_blurred_0_conv_3_30_3_res);
	int I_blurred_0_conv_3_30_4_res = I_blurred_0_conv_3_30_4_select(I_store_I_from_in_12_delay, root, br, bc);
	set_at<96, 288>(result, I_blurred_0_conv_3_30_4_res);
	int I_blurred_0_conv_3_30_5_res = I_blurred_0_conv_3_30_5_select(I_store_I_from_in_12_delay, root, br, bc);
	set_at<128, 288>(result, I_blurred_0_conv_3_30_5_res);
	int I_blurred_0_conv_3_30_6_res = I_blurred_0_conv_3_30_6_select(I_store_I_from_in_12_delay, root, br, bc);
	set_at<160, 288>(result, I_blurred_0_conv_3_30_6_res);
	int I_blurred_0_conv_3_30_7_res = I_blurred_0_conv_3_30_7_select(I_store_I_from_in_12_delay, root, br, bc);
	set_at<192, 288>(result, I_blurred_0_conv_3_30_7_res);
	int I_blurred_0_conv_3_30_8_res = I_blurred_0_conv_3_30_8_select(I_store_I_from_in_12_delay, root, br, bc);
	set_at<224, 288>(result, I_blurred_0_conv_3_30_8_res);
	int I_blurred_0_conv_3_30_9_res = I_blurred_0_conv_3_30_9_select(I_store_I_from_in_12_delay, root, br, bc);
	set_at<256, 288>(result, I_blurred_0_conv_3_30_9_res);
	return result;
}

// store_I_from_in_write
//	I_store_I_from_in_12
inline void I_store_I_from_in_write_bundle_write(int& /* width = 32*/store_I_from_in_write, I_store_I_from_in_12_cache& I_store_I_from_in_12_delay) {
	I_store_I_from_in_12_write(store_I_from_in_write, I_store_I_from_in_12_delay);
}



#include "hw_classes.h"

struct blurred_0_blurred_0_conv_3_30_0_cache {
	// Capacity: 1
	fifo<int, 1> f;
	inline int peek(const int offset) {
		return f.peek(0 - offset);
	}

	inline int peek_0() {
		return f.peek(0);
	}



	inline void push(const int value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		return f.push(value);
	}

};



inline void blurred_0_blurred_0_conv_3_30_0_write(int& blurred_0_blurred_0_conv_3_30_0, blurred_0_blurred_0_conv_3_30_0_cache& blurred_0_blurred_0_conv_3_30_0_delay) {
	blurred_0_blurred_0_conv_3_30_0_delay.push(blurred_0_blurred_0_conv_3_30_0);
}

inline int blurred_0_out_id0_11_select(blurred_0_blurred_0_conv_3_30_0_cache& blurred_0_blurred_0_conv_3_30_0_delay
, int root, int dr, int dc) {
// Pieces...
//	is optimizable constant: 0
	int value_blurred_0_blurred_0_conv_3_30_0 = blurred_0_blurred_0_conv_3_30_0_delay.peek_0();
	return value_blurred_0_blurred_0_conv_3_30_0;
}

// Bundles...
// blurred_0_conv_3_30_write
//	blurred_0_blurred_0_conv_3_30_0
inline void blurred_0_blurred_0_conv_3_30_write_bundle_write(int& /* width = 32*/blurred_0_conv_3_30_write, blurred_0_blurred_0_conv_3_30_0_cache& blurred_0_blurred_0_conv_3_30_0_delay) {
	blurred_0_blurred_0_conv_3_30_0_write(blurred_0_conv_3_30_write, blurred_0_blurred_0_conv_3_30_0_delay);
}

// out_id0_read
//	blurred_0_out_id0_11
inline int blurred_0_out_id0_read_bundle_read(blurred_0_blurred_0_conv_3_30_0_cache& blurred_0_blurred_0_conv_3_30_0_delay, int root, int dr, int dc) {
	int result;
	int blurred_0_out_id0_11_res = blurred_0_out_id0_11_select(blurred_0_blurred_0_conv_3_30_0_delay, root, dr, dc);
	set_at<0, 32>(result, blurred_0_out_id0_11_res);
	return result;
}





// Operation logic
inline void blurred_0_conv_3_30(I_store_I_from_in_12_cache& I_store_I_from_in_12, blurred_0_blurred_0_conv_3_30_0_cache& blurred_0_blurred_0_conv_3_30_0, int root, int br, int bc) {
	// Consume: I
	auto I_br__p__0_c__bc__p__0_value = I_blurred_0_conv_3_30_read_bundle_read(I_store_I_from_in_12/* source_delay */, root, br, bc);
	// Apply function: conv_3_3
	// Arg: I_br__p__0_c__bc__p__0_value
	// Arg buf: I
	// Arg: I_br__p__0_c__bc__p__1_value
	// Arg buf: I
	// Arg: I_br__p__0_c__bc__p__2_value
	// Arg buf: I
	// Arg: I_br__p__1_c__bc__p__0_value
	// Arg buf: I
	// Arg: I_br__p__1_c__bc__p__1_value
	// Arg buf: I
	// Arg: I_br__p__1_c__bc__p__2_value
	// Arg buf: I
	// Arg: I_br__p__2_c__bc__p__0_value
	// Arg buf: I
	// Arg: I_br__p__2_c__bc__p__1_value
	// Arg buf: I
	// Arg: I_br__p__2_c__bc__p__2_value
	// Arg buf: I
	auto compute_result = conv_3_3(I_br__p__0_c__bc__p__0_value);
	// Produce: blurred_0
	// Buffer: blurred_0, Op: blurred_0_conv_3_30
	// Possible ports...
		// blurred_0_blurred_0_conv_3_30_0
	blurred_0_blurred_0_conv_3_30_write_bundle_write(compute_result, blurred_0_blurred_0_conv_3_30_0 /* output src_delay */);
}

inline void out_id0(blurred_0_blurred_0_conv_3_30_0_cache& blurred_0_blurred_0_conv_3_30_0, HWStream<int>& out, int root, int dr, int dc) {
	// Consume: blurred_0
	auto blurred_0_2_m_dr_c__2_m_dc_value = blurred_0_out_id0_read_bundle_read(blurred_0_blurred_0_conv_3_30_0/* source_delay */, root, dr, dc);
	// Apply function: id
	// Arg: blurred_0_2_m_dr_c__2_m_dc_value
	// Arg buf: blurred_0
	auto compute_result = id(blurred_0_2_m_dr_c__2_m_dc_value);
	// Produce: out
	out.write(compute_result);
}

inline void store_I_from_in(HWStream<int>& in, I_store_I_from_in_12_cache& I_store_I_from_in_12, int root, int pr, int pc) {
	// Consume: in
	auto in_pr_c__pc_value = in.read();
	// Produce: I
	// Buffer: I, Op: store_I_from_in
	// Possible ports...
		// I_store_I_from_in_12
	I_store_I_from_in_write_bundle_write(in_pr_c__pc_value, I_store_I_from_in_12 /* output src_delay */);
}

// Driver function
void blur_and_downsample(HWStream<int>& in, HWStream<int>& out) {
#pragma HLS dependence array inter false

	I_store_I_from_in_12_cache I_store_I_from_in_12;
	blurred_0_blurred_0_conv_3_30_0_cache blurred_0_blurred_0_conv_3_30_0;
	for (int c0 = 0; c0 <= 63; c0 += 1)
	  for (int c1 = 0; c1 <= 63; c1 += 1) {
#pragma HLS pipeline
	    store_I_from_in(in, I_store_I_from_in_12, 0, c0, c1);
	    if (c0 >= 2 && c1 >= 2) {
	      blurred_0_conv_3_30(I_store_I_from_in_12, blurred_0_blurred_0_conv_3_30_0, 0, c0 - 2, c1 - 2);
	      if (c0 % 2 == 0 && c1 % 2 == 0)
	        out_id0(blurred_0_blurred_0_conv_3_30_0, out, 0, (c0 / 2) - 1, (c1 / 2) - 1);
	    }
	  }
	
}
