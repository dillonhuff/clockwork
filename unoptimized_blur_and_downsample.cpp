#include "conv_3x3.h"

#include "hw_classes.h"

struct I_store_I_from_in_12_cache {
	// Capacity: 4096
	fifo<int, 4096> f;
	inline int peek(const int offset) {
		return f.peek(4095 - offset);
	}



	inline void push(const int value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		return f.push(value);
	}

};



inline void I_store_I_from_in_12_write(int& I_store_I_from_in_12, I_store_I_from_in_12_cache& I_store_I_from_in_12_delay) {
	I_store_I_from_in_12_delay.push(I_store_I_from_in_12);
}

inline int I_blurred_0_conv_3_30_1_select(I_store_I_from_in_12_cache& I_store_I_from_in_12_delay
, int root, int br, int bc) {
// Pieces...
// { blurred_0_conv_3_30[root = 0, br, bc] : 0 <= br <= 61 and 0 <= bc <= 61 } -> { blurred_0_conv_3_30[root, br, bc] -> ((4095 - 64 * br) - bc) }
// 	is always true on iteration domain: 1
//	is optimizable constant: 0
	int value_I_store_I_from_in_12 = I_store_I_from_in_12_delay.peek(((4095 - 64 * br) - bc));
	return value_I_store_I_from_in_12;
}

inline int I_blurred_0_conv_3_30_2_select(I_store_I_from_in_12_cache& I_store_I_from_in_12_delay
, int root, int br, int bc) {
// Pieces...
// { blurred_0_conv_3_30[root = 0, br, bc] : 0 <= br <= 61 and 0 <= bc <= 61 } -> { blurred_0_conv_3_30[root, br, bc] -> ((4094 - 64 * br) - bc) }
// 	is always true on iteration domain: 1
//	is optimizable constant: 0
	int value_I_store_I_from_in_12 = I_store_I_from_in_12_delay.peek(((4094 - 64 * br) - bc));
	return value_I_store_I_from_in_12;
}

inline int I_blurred_0_conv_3_30_3_select(I_store_I_from_in_12_cache& I_store_I_from_in_12_delay
, int root, int br, int bc) {
// Pieces...
// { blurred_0_conv_3_30[root = 0, br, bc] : 0 <= br <= 61 and 0 <= bc <= 60 } -> { blurred_0_conv_3_30[root, br, bc] -> ((4093 - 64 * br) - bc) }
// 	is always true on iteration domain: 0
// { blurred_0_conv_3_30[root = 0, br, bc = 61] : 0 <= br <= 61 } -> { blurred_0_conv_3_30[root, br, bc] -> (4032 - 64 * br) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 0
	int value_I_store_I_from_in_12 = I_store_I_from_in_12_delay.peek(((root == 0 && br >= 0 && 61 - br >= 0 && bc >= 0 && 60 - bc >= 0) ? (((4093 - 64 * br) - bc)) : (-61 + bc == 0 && root == 0 && br >= 0 && 61 - br >= 0) ? ((4032 - 64 * br)) : 0));
	return value_I_store_I_from_in_12;
}

inline int I_blurred_0_conv_3_30_4_select(I_store_I_from_in_12_cache& I_store_I_from_in_12_delay
, int root, int br, int bc) {
// Pieces...
// { blurred_0_conv_3_30[root = 0, br, bc] : 0 <= br <= 61 and 0 <= bc <= 61 } -> { blurred_0_conv_3_30[root, br, bc] -> ((4031 - 64 * br) - bc) }
// 	is always true on iteration domain: 1
//	is optimizable constant: 0
	int value_I_store_I_from_in_12 = I_store_I_from_in_12_delay.peek(((4031 - 64 * br) - bc));
	return value_I_store_I_from_in_12;
}

inline int I_blurred_0_conv_3_30_5_select(I_store_I_from_in_12_cache& I_store_I_from_in_12_delay
, int root, int br, int bc) {
// Pieces...
// { blurred_0_conv_3_30[root = 0, br, bc] : 0 <= br <= 61 and 0 <= bc <= 61 } -> { blurred_0_conv_3_30[root, br, bc] -> ((4030 - 64 * br) - bc) }
// 	is always true on iteration domain: 1
//	is optimizable constant: 0
	int value_I_store_I_from_in_12 = I_store_I_from_in_12_delay.peek(((4030 - 64 * br) - bc));
	return value_I_store_I_from_in_12;
}

inline int I_blurred_0_conv_3_30_6_select(I_store_I_from_in_12_cache& I_store_I_from_in_12_delay
, int root, int br, int bc) {
// Pieces...
// { blurred_0_conv_3_30[root = 0, br, bc] : 0 <= br <= 61 and 0 <= bc <= 60 } -> { blurred_0_conv_3_30[root, br, bc] -> ((4029 - 64 * br) - bc) }
// 	is always true on iteration domain: 0
// { blurred_0_conv_3_30[root = 0, br, bc = 61] : 0 <= br <= 61 } -> { blurred_0_conv_3_30[root, br, bc] -> (3968 - 64 * br) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 0
	int value_I_store_I_from_in_12 = I_store_I_from_in_12_delay.peek(((root == 0 && br >= 0 && 61 - br >= 0 && bc >= 0 && 60 - bc >= 0) ? (((4029 - 64 * br) - bc)) : (-61 + bc == 0 && root == 0 && br >= 0 && 61 - br >= 0) ? ((3968 - 64 * br)) : 0));
	return value_I_store_I_from_in_12;
}

inline int I_blurred_0_conv_3_30_7_select(I_store_I_from_in_12_cache& I_store_I_from_in_12_delay
, int root, int br, int bc) {
// Pieces...
// { blurred_0_conv_3_30[root = 0, br, bc] : 0 <= br <= 60 and 0 <= bc <= 61 } -> { blurred_0_conv_3_30[root, br, bc] -> ((3967 - 64 * br) - bc) }
// 	is always true on iteration domain: 0
// { blurred_0_conv_3_30[root = 0, br = 61, bc] : 0 <= bc <= 61 } -> { blurred_0_conv_3_30[root, br, bc] -> (63 - bc) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 0
	int value_I_store_I_from_in_12 = I_store_I_from_in_12_delay.peek(((root == 0 && br >= 0 && 60 - br >= 0 && bc >= 0 && 61 - bc >= 0) ? (((3967 - 64 * br) - bc)) : (-61 + br == 0 && root == 0 && bc >= 0 && 61 - bc >= 0) ? ((63 - bc)) : 0));
	return value_I_store_I_from_in_12;
}

inline int I_blurred_0_conv_3_30_8_select(I_store_I_from_in_12_cache& I_store_I_from_in_12_delay
, int root, int br, int bc) {
// Pieces...
// { blurred_0_conv_3_30[root = 0, br, bc] : 0 <= br <= 60 and 0 <= bc <= 61 } -> { blurred_0_conv_3_30[root, br, bc] -> ((3966 - 64 * br) - bc) }
// 	is always true on iteration domain: 0
// { blurred_0_conv_3_30[root = 0, br = 61, bc] : 0 <= bc <= 61 } -> { blurred_0_conv_3_30[root, br, bc] -> (62 - bc) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 0
	int value_I_store_I_from_in_12 = I_store_I_from_in_12_delay.peek(((root == 0 && br >= 0 && 60 - br >= 0 && bc >= 0 && 61 - bc >= 0) ? (((3966 - 64 * br) - bc)) : (-61 + br == 0 && root == 0 && bc >= 0 && 61 - bc >= 0) ? ((62 - bc)) : 0));
	return value_I_store_I_from_in_12;
}

inline int I_blurred_0_conv_3_30_9_select(I_store_I_from_in_12_cache& I_store_I_from_in_12_delay
, int root, int br, int bc) {
// Pieces...
// { blurred_0_conv_3_30[root = 0, br, bc] : 0 <= br <= 60 and 0 <= bc <= 60 } -> { blurred_0_conv_3_30[root, br, bc] -> ((3965 - 64 * br) - bc) }
// 	is always true on iteration domain: 0
// { blurred_0_conv_3_30[root = 0, br, bc = 61] : 0 <= br <= 60 } -> { blurred_0_conv_3_30[root, br, bc] -> (3904 - 64 * br) }
// 	is always true on iteration domain: 0
// { blurred_0_conv_3_30[root = 0, br = 61, bc] : 0 <= bc <= 60 } -> { blurred_0_conv_3_30[root, br, bc] -> (61 - bc) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 0
	int value_I_store_I_from_in_12 = I_store_I_from_in_12_delay.peek(((root == 0 && br >= 0 && 60 - br >= 0 && bc >= 0 && 60 - bc >= 0) ? (((3965 - 64 * br) - bc)) : (-61 + bc == 0 && root == 0 && br >= 0 && 60 - br >= 0) ? ((3904 - 64 * br)) : (-61 + br == 0 && root == 0 && bc >= 0 && 60 - bc >= 0) ? ((61 - bc)) : 0));
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
	// Capacity: 3844
	fifo<int, 3844> f;
	inline int peek(const int offset) {
		return f.peek(3843 - offset);
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
// { out_id0[root = 0, dr, dc] : 0 <= dr <= 30 and 0 <= dc <= 30 } -> { out_id0[root, dr, dc] -> ((3843 - 124 * dr) - 2 * dc) }
// 	is always true on iteration domain: 1
//	is optimizable constant: 0
	int value_blurred_0_blurred_0_conv_3_30_0 = blurred_0_blurred_0_conv_3_30_0_delay.peek(((3843 - 124 * dr) - 2 * dc));
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
void unoptimized_blur_and_downsample(HWStream<int>& in, HWStream<int>& out) {
	I_store_I_from_in_12_cache I_store_I_from_in_12;
	blurred_0_blurred_0_conv_3_30_0_cache blurred_0_blurred_0_conv_3_30_0;
	{
	  for (int c3 = 0; c3 <= 63; c3 += 1)
	    for (int c5 = 0; c5 <= 63; c5 += 1)
	      store_I_from_in(in, I_store_I_from_in_12, 0, c3, c5);
	  for (int c3 = 0; c3 <= 61; c3 += 1)
	    for (int c5 = 0; c5 <= 61; c5 += 1)
	      blurred_0_conv_3_30(I_store_I_from_in_12, blurred_0_blurred_0_conv_3_30_0, 0, c3, c5);
	  for (int c3 = 0; c3 <= 30; c3 += 1)
	    for (int c5 = 0; c5 <= 30; c5 += 1)
	      out_id0(blurred_0_blurred_0_conv_3_30_0, out, 0, c3, c5);
	}
	
}
