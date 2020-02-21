#include "conv_3x3.h"

#include "hw_classes.h"

struct I_store_I_from_in_12_cache {
	// Capacity: 4096
	fifo<hw_uint<32> , 4096> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(4095 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};



inline void I_store_I_from_in_12_write(hw_uint<32> & I_store_I_from_in_12, I_store_I_from_in_12_cache& I_store_I_from_in_12_delay) {
	I_store_I_from_in_12_delay.push(I_store_I_from_in_12);
}

inline hw_uint<32>  I_warped_0_conv_3_30_10_select(I_store_I_from_in_12_cache& I_store_I_from_in_12_delay
, int root, int br, int bc) {
	hw_uint<32>  value_I_store_I_from_in_12 = I_store_I_from_in_12_delay.peek((root == 0 && br >= 0 && 60 - br >= 0 && bc >= 0 && 61 - bc >= 0) ? (((3966 - 64 * br) - bc)) : (-61 + br == 0 && root == 0 && bc >= 0 && 61 - bc >= 0) ? ((62 - bc)) : 0);
	return value_I_store_I_from_in_12;
}

inline hw_uint<32>  I_warped_0_conv_3_30_11_select(I_store_I_from_in_12_cache& I_store_I_from_in_12_delay
, int root, int br, int bc) {
	hw_uint<32>  value_I_store_I_from_in_12 = I_store_I_from_in_12_delay.peek((root == 0 && br >= 0 && 60 - br >= 0 && bc >= 0 && 60 - bc >= 0) ? (((3965 - 64 * br) - bc)) : (-61 + bc == 0 && root == 0 && br >= 0 && 60 - br >= 0) ? ((3904 - 64 * br)) : (-61 + br == 0 && root == 0 && bc >= 0 && 60 - bc >= 0) ? ((61 - bc)) : 0);
	return value_I_store_I_from_in_12;
}

inline hw_uint<32>  I_warped_0_conv_3_30_3_select(I_store_I_from_in_12_cache& I_store_I_from_in_12_delay
, int root, int br, int bc) {
	hw_uint<32>  value_I_store_I_from_in_12 = I_store_I_from_in_12_delay.peek(((4095 - 64 * br) - bc));
	return value_I_store_I_from_in_12;
}

inline hw_uint<32>  I_warped_0_conv_3_30_4_select(I_store_I_from_in_12_cache& I_store_I_from_in_12_delay
, int root, int br, int bc) {
	hw_uint<32>  value_I_store_I_from_in_12 = I_store_I_from_in_12_delay.peek(((4094 - 64 * br) - bc));
	return value_I_store_I_from_in_12;
}

inline hw_uint<32>  I_warped_0_conv_3_30_5_select(I_store_I_from_in_12_cache& I_store_I_from_in_12_delay
, int root, int br, int bc) {
	hw_uint<32>  value_I_store_I_from_in_12 = I_store_I_from_in_12_delay.peek((root == 0 && br >= 0 && 61 - br >= 0 && bc >= 0 && 60 - bc >= 0) ? (((4093 - 64 * br) - bc)) : (-61 + bc == 0 && root == 0 && br >= 0 && 61 - br >= 0) ? ((4032 - 64 * br)) : 0);
	return value_I_store_I_from_in_12;
}

inline hw_uint<32>  I_warped_0_conv_3_30_6_select(I_store_I_from_in_12_cache& I_store_I_from_in_12_delay
, int root, int br, int bc) {
	hw_uint<32>  value_I_store_I_from_in_12 = I_store_I_from_in_12_delay.peek(((4031 - 64 * br) - bc));
	return value_I_store_I_from_in_12;
}

inline hw_uint<32>  I_warped_0_conv_3_30_7_select(I_store_I_from_in_12_cache& I_store_I_from_in_12_delay
, int root, int br, int bc) {
	hw_uint<32>  value_I_store_I_from_in_12 = I_store_I_from_in_12_delay.peek(((4030 - 64 * br) - bc));
	return value_I_store_I_from_in_12;
}

inline hw_uint<32>  I_warped_0_conv_3_30_8_select(I_store_I_from_in_12_cache& I_store_I_from_in_12_delay
, int root, int br, int bc) {
	hw_uint<32>  value_I_store_I_from_in_12 = I_store_I_from_in_12_delay.peek((root == 0 && br >= 0 && 61 - br >= 0 && bc >= 0 && 60 - bc >= 0) ? (((4029 - 64 * br) - bc)) : (-61 + bc == 0 && root == 0 && br >= 0 && 61 - br >= 0) ? ((3968 - 64 * br)) : 0);
	return value_I_store_I_from_in_12;
}

inline hw_uint<32>  I_warped_0_conv_3_30_9_select(I_store_I_from_in_12_cache& I_store_I_from_in_12_delay
, int root, int br, int bc) {
	hw_uint<32>  value_I_store_I_from_in_12 = I_store_I_from_in_12_delay.peek((root == 0 && br >= 0 && 60 - br >= 0 && bc >= 0 && 61 - bc >= 0) ? (((3967 - 64 * br) - bc)) : (-61 + br == 0 && root == 0 && bc >= 0 && 61 - bc >= 0) ? ((63 - bc)) : 0);
	return value_I_store_I_from_in_12;
}

// # of bundles = 2
// store_I_from_in_write
//	I_store_I_from_in_12
inline void I_store_I_from_in_write_bundle_write(hw_uint<32> & store_I_from_in_write, I_store_I_from_in_12_cache& I_store_I_from_in_12_delay) {
	I_store_I_from_in_12_write(store_I_from_in_write, I_store_I_from_in_12_delay);
}

// warped_0_conv_3_30_read
//	I_warped_0_conv_3_30_3
//	I_warped_0_conv_3_30_4
//	I_warped_0_conv_3_30_5
//	I_warped_0_conv_3_30_6
//	I_warped_0_conv_3_30_7
//	I_warped_0_conv_3_30_8
//	I_warped_0_conv_3_30_9
//	I_warped_0_conv_3_30_10
//	I_warped_0_conv_3_30_11
inline hw_uint<288> I_warped_0_conv_3_30_read_bundle_read(I_store_I_from_in_12_cache& I_store_I_from_in_12_delay, int root, int br, int bc) {
	hw_uint<288> result;
	hw_uint<32>  I_warped_0_conv_3_30_3_res = I_warped_0_conv_3_30_3_select(I_store_I_from_in_12_delay, root, br, bc);
	set_at<0, 288>(result, I_warped_0_conv_3_30_3_res);
	hw_uint<32>  I_warped_0_conv_3_30_4_res = I_warped_0_conv_3_30_4_select(I_store_I_from_in_12_delay, root, br, bc);
	set_at<32, 288>(result, I_warped_0_conv_3_30_4_res);
	hw_uint<32>  I_warped_0_conv_3_30_5_res = I_warped_0_conv_3_30_5_select(I_store_I_from_in_12_delay, root, br, bc);
	set_at<64, 288>(result, I_warped_0_conv_3_30_5_res);
	hw_uint<32>  I_warped_0_conv_3_30_6_res = I_warped_0_conv_3_30_6_select(I_store_I_from_in_12_delay, root, br, bc);
	set_at<96, 288>(result, I_warped_0_conv_3_30_6_res);
	hw_uint<32>  I_warped_0_conv_3_30_7_res = I_warped_0_conv_3_30_7_select(I_store_I_from_in_12_delay, root, br, bc);
	set_at<128, 288>(result, I_warped_0_conv_3_30_7_res);
	hw_uint<32>  I_warped_0_conv_3_30_8_res = I_warped_0_conv_3_30_8_select(I_store_I_from_in_12_delay, root, br, bc);
	set_at<160, 288>(result, I_warped_0_conv_3_30_8_res);
	hw_uint<32>  I_warped_0_conv_3_30_9_res = I_warped_0_conv_3_30_9_select(I_store_I_from_in_12_delay, root, br, bc);
	set_at<192, 288>(result, I_warped_0_conv_3_30_9_res);
	hw_uint<32>  I_warped_0_conv_3_30_10_res = I_warped_0_conv_3_30_10_select(I_store_I_from_in_12_delay, root, br, bc);
	set_at<224, 288>(result, I_warped_0_conv_3_30_10_res);
	hw_uint<32>  I_warped_0_conv_3_30_11_res = I_warped_0_conv_3_30_11_select(I_store_I_from_in_12_delay, root, br, bc);
	set_at<256, 288>(result, I_warped_0_conv_3_30_11_res);
	return result;
}



#include "hw_classes.h"

struct warped_0_warped_0_conv_3_30_2_cache {
	// Capacity: 3844
	fifo<hw_uint<32> , 3844> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(3843 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};



inline void warped_0_warped_0_conv_3_30_2_write(hw_uint<32> & warped_0_warped_0_conv_3_30_2, warped_0_warped_0_conv_3_30_2_cache& warped_0_warped_0_conv_3_30_2_delay) {
	warped_0_warped_0_conv_3_30_2_delay.push(warped_0_warped_0_conv_3_30_2);
}

inline hw_uint<32>  warped_0_out_id0_1_select(warped_0_warped_0_conv_3_30_2_cache& warped_0_warped_0_conv_3_30_2_delay
, int root, int ur, int kr, int uc, int kc) {
	hw_uint<32>  value_warped_0_warped_0_conv_3_30_2 = warped_0_warped_0_conv_3_30_2_delay.peek((root == 0 && ur >= 0 && 60 - ur >= 0 && kr >= 0 && 1 - kr >= 0 && uc >= 0 && 60 - uc >= 0 && kc >= 0 && 1 - kc >= 0) ? (((3843 - 62 * ur) - uc)) : (-61 + uc == 0 && root == 0 && ur >= 0 && 60 - ur >= 0 && kr >= 0 && 1 - kr >= 0 && kc >= 0 && 1 - kc >= 0) ? ((3782 - 62 * ur)) : (-61 + ur == 0 && root == 0 && kc >= 0 && 1 - kc >= 0 && kr >= 0 && 1 - kr >= 0 && uc >= 0 && 60 - uc >= 0) ? ((61 - uc)) : 0);
	return value_warped_0_warped_0_conv_3_30_2;
}

// # of bundles = 2
// out_id0_read
//	warped_0_out_id0_1
inline hw_uint<32> warped_0_out_id0_read_bundle_read(warped_0_warped_0_conv_3_30_2_cache& warped_0_warped_0_conv_3_30_2_delay, int root, int ur, int kr, int uc, int kc) {
	hw_uint<32> result;
	hw_uint<32>  warped_0_out_id0_1_res = warped_0_out_id0_1_select(warped_0_warped_0_conv_3_30_2_delay, root, ur, kr, uc, kc);
	set_at<0, 32>(result, warped_0_out_id0_1_res);
	return result;
}

// warped_0_conv_3_30_write
//	warped_0_warped_0_conv_3_30_2
inline void warped_0_warped_0_conv_3_30_write_bundle_write(hw_uint<32> & warped_0_conv_3_30_write, warped_0_warped_0_conv_3_30_2_cache& warped_0_warped_0_conv_3_30_2_delay) {
	warped_0_warped_0_conv_3_30_2_write(warped_0_conv_3_30_write, warped_0_warped_0_conv_3_30_2_delay);
}





// Operation logic
inline void out_id0(warped_0_warped_0_conv_3_30_2_cache& warped_0_warped_0_conv_3_30_2, HWStream<hw_uint<32>  >& out, int root, int ur, int kr, int uc, int kc) {
	// Consume: warped_0
	auto warped_0_ur_c__uc_value = warped_0_out_id0_read_bundle_read(warped_0_warped_0_conv_3_30_2/* source_delay */, root, ur, kr, uc, kc);
	// Apply function: id
	// Arg: warped_0_ur_c__uc_value
	// Arg buf: warped_0
	auto compute_result = id(warped_0_ur_c__uc_value);
	// Produce: out
	out.write(compute_result);
}

inline void warped_0_conv_3_30(I_store_I_from_in_12_cache& I_store_I_from_in_12, warped_0_warped_0_conv_3_30_2_cache& warped_0_warped_0_conv_3_30_2, int root, int br, int bc) {
	// Consume: I
	auto I_br__p__0_c__bc__p__0_value = I_warped_0_conv_3_30_read_bundle_read(I_store_I_from_in_12/* source_delay */, root, br, bc);
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
	// Produce: warped_0
	// Buffer: warped_0, Op: warped_0_conv_3_30
	// Possible ports...
		// warped_0_warped_0_conv_3_30_2
	warped_0_warped_0_conv_3_30_write_bundle_write(compute_result, warped_0_warped_0_conv_3_30_2 /* output src_delay */);
}

inline void store_I_from_in(HWStream<hw_uint<32>  >& in, I_store_I_from_in_12_cache& I_store_I_from_in_12, int root, int pr, int pc) {
	// Consume: in
	auto in_pr_c__pc_value = in.read();
	// Produce: I
	// Buffer: I, Op: store_I_from_in
	// Possible ports...
		// I_store_I_from_in_12
	I_store_I_from_in_write_bundle_write(in_pr_c__pc_value, I_store_I_from_in_12 /* output src_delay */);
}

// Driver function
void unoptimized_warp_and_upsample(HWStream<hw_uint<32>  >& in, HWStream<hw_uint<32>  >& out) {
	I_store_I_from_in_12_cache I_store_I_from_in_12;
	warped_0_warped_0_conv_3_30_2_cache warped_0_warped_0_conv_3_30_2;
	{
	  for (int c3 = 0; c3 <= 63; c3 += 1)
	    for (int c5 = 0; c5 <= 63; c5 += 1)
	      store_I_from_in(in, I_store_I_from_in_12, 0, c3, c5);
	  for (int c3 = 0; c3 <= 61; c3 += 1)
	    for (int c5 = 0; c5 <= 61; c5 += 1)
	      warped_0_conv_3_30(I_store_I_from_in_12, warped_0_warped_0_conv_3_30_2, 0, c3, c5);
	  for (int c3 = 0; c3 <= 61; c3 += 1)
	    for (int c5 = 0; c5 <= 1; c5 += 1)
	      for (int c7 = 0; c7 <= 61; c7 += 1)
	        for (int c9 = 0; c9 <= 1; c9 += 1)
	          out_id0(warped_0_warped_0_conv_3_30_2, out, 0, c3, c5, c7, c9);
	}
	
}
