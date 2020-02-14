#include "conv_3x3.h"

#include "hw_classes.h"

struct I_store_I_from_in_0_cache {
	// Capacity: 225
	fifo<hw_uint<32> , 225> f;
	inline hw_uint<32>  peek(const int offset) {
		return f.peek(224 - offset);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		return f.push(value);
	}

};



inline void I_store_I_from_in_0_write(hw_uint<32> & I_store_I_from_in_0, I_store_I_from_in_0_cache& I_store_I_from_in_0_delay) {
	I_store_I_from_in_0_delay.push(I_store_I_from_in_0);
}

inline hw_uint<32>  I_I_blr_conv_3_30_17_select(I_store_I_from_in_0_cache& I_store_I_from_in_0_delay
, int root, int I_blr_r, int I_blr_c) {
// Pieces...
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> ((224 - 15 * I_blr_r) - I_blr_c) }
// 	is always true on iteration domain: 1
//	is optimizable constant: 0
	hw_uint<32>  value_I_store_I_from_in_0 = I_store_I_from_in_0_delay.peek(((224 - 15 * I_blr_r) - I_blr_c));
	return value_I_store_I_from_in_0;
}

inline hw_uint<32>  I_I_blr_conv_3_30_18_select(I_store_I_from_in_0_cache& I_store_I_from_in_0_delay
, int root, int I_blr_r, int I_blr_c) {
// Pieces...
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> ((223 - 15 * I_blr_r) - I_blr_c) }
// 	is always true on iteration domain: 1
//	is optimizable constant: 0
	hw_uint<32>  value_I_store_I_from_in_0 = I_store_I_from_in_0_delay.peek(((223 - 15 * I_blr_r) - I_blr_c));
	return value_I_store_I_from_in_0;
}

inline hw_uint<32>  I_I_blr_conv_3_30_19_select(I_store_I_from_in_0_cache& I_store_I_from_in_0_delay
, int root, int I_blr_r, int I_blr_c) {
// Pieces...
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 11 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> ((222 - 15 * I_blr_r) - I_blr_c) }
// 	is always true on iteration domain: 0
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c = 12] : 0 <= I_blr_r <= 12 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> (210 - 15 * I_blr_r) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 0
	hw_uint<32>  value_I_store_I_from_in_0 = I_store_I_from_in_0_delay.peek((root == 0 && I_blr_r >= 0 && 12 - I_blr_r >= 0 && I_blr_c >= 0 && 11 - I_blr_c >= 0) ? (((222 - 15 * I_blr_r) - I_blr_c)) : (-12 + I_blr_c == 0 && root == 0 && I_blr_r >= 0 && 12 - I_blr_r >= 0) ? ((210 - 15 * I_blr_r)) : 0);
	return value_I_store_I_from_in_0;
}

inline hw_uint<32>  I_I_blr_conv_3_30_20_select(I_store_I_from_in_0_cache& I_store_I_from_in_0_delay
, int root, int I_blr_r, int I_blr_c) {
// Pieces...
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> ((209 - 15 * I_blr_r) - I_blr_c) }
// 	is always true on iteration domain: 1
//	is optimizable constant: 0
	hw_uint<32>  value_I_store_I_from_in_0 = I_store_I_from_in_0_delay.peek(((209 - 15 * I_blr_r) - I_blr_c));
	return value_I_store_I_from_in_0;
}

inline hw_uint<32>  I_I_blr_conv_3_30_21_select(I_store_I_from_in_0_cache& I_store_I_from_in_0_delay
, int root, int I_blr_r, int I_blr_c) {
// Pieces...
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> ((208 - 15 * I_blr_r) - I_blr_c) }
// 	is always true on iteration domain: 1
//	is optimizable constant: 0
	hw_uint<32>  value_I_store_I_from_in_0 = I_store_I_from_in_0_delay.peek(((208 - 15 * I_blr_r) - I_blr_c));
	return value_I_store_I_from_in_0;
}

inline hw_uint<32>  I_I_blr_conv_3_30_22_select(I_store_I_from_in_0_cache& I_store_I_from_in_0_delay
, int root, int I_blr_r, int I_blr_c) {
// Pieces...
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 11 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> ((207 - 15 * I_blr_r) - I_blr_c) }
// 	is always true on iteration domain: 0
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c = 12] : 0 <= I_blr_r <= 12 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> (195 - 15 * I_blr_r) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 0
	hw_uint<32>  value_I_store_I_from_in_0 = I_store_I_from_in_0_delay.peek((root == 0 && I_blr_r >= 0 && 12 - I_blr_r >= 0 && I_blr_c >= 0 && 11 - I_blr_c >= 0) ? (((207 - 15 * I_blr_r) - I_blr_c)) : (-12 + I_blr_c == 0 && root == 0 && I_blr_r >= 0 && 12 - I_blr_r >= 0) ? ((195 - 15 * I_blr_r)) : 0);
	return value_I_store_I_from_in_0;
}

inline hw_uint<32>  I_I_blr_conv_3_30_23_select(I_store_I_from_in_0_cache& I_store_I_from_in_0_delay
, int root, int I_blr_r, int I_blr_c) {
// Pieces...
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] : 0 <= I_blr_r <= 11 and 0 <= I_blr_c <= 12 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> ((194 - 15 * I_blr_r) - I_blr_c) }
// 	is always true on iteration domain: 0
// { I_blr_conv_3_30[root = 0, I_blr_r = 12, I_blr_c] : 0 <= I_blr_c <= 12 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> (14 - I_blr_c) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 0
	hw_uint<32>  value_I_store_I_from_in_0 = I_store_I_from_in_0_delay.peek((root == 0 && I_blr_r >= 0 && 11 - I_blr_r >= 0 && I_blr_c >= 0 && 12 - I_blr_c >= 0) ? (((194 - 15 * I_blr_r) - I_blr_c)) : (-12 + I_blr_r == 0 && root == 0 && I_blr_c >= 0 && 12 - I_blr_c >= 0) ? ((14 - I_blr_c)) : 0);
	return value_I_store_I_from_in_0;
}

inline hw_uint<32>  I_I_blr_conv_3_30_24_select(I_store_I_from_in_0_cache& I_store_I_from_in_0_delay
, int root, int I_blr_r, int I_blr_c) {
// Pieces...
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] : 0 <= I_blr_r <= 11 and 0 <= I_blr_c <= 12 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> ((193 - 15 * I_blr_r) - I_blr_c) }
// 	is always true on iteration domain: 0
// { I_blr_conv_3_30[root = 0, I_blr_r = 12, I_blr_c] : 0 <= I_blr_c <= 12 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> (13 - I_blr_c) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 0
	hw_uint<32>  value_I_store_I_from_in_0 = I_store_I_from_in_0_delay.peek((root == 0 && I_blr_r >= 0 && 11 - I_blr_r >= 0 && I_blr_c >= 0 && 12 - I_blr_c >= 0) ? (((193 - 15 * I_blr_r) - I_blr_c)) : (-12 + I_blr_r == 0 && root == 0 && I_blr_c >= 0 && 12 - I_blr_c >= 0) ? ((13 - I_blr_c)) : 0);
	return value_I_store_I_from_in_0;
}

inline hw_uint<32>  I_I_blr_conv_3_30_25_select(I_store_I_from_in_0_cache& I_store_I_from_in_0_delay
, int root, int I_blr_r, int I_blr_c) {
// Pieces...
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] : 0 <= I_blr_r <= 11 and 0 <= I_blr_c <= 11 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> ((192 - 15 * I_blr_r) - I_blr_c) }
// 	is always true on iteration domain: 0
// { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c = 12] : 0 <= I_blr_r <= 11 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> (180 - 15 * I_blr_r) }
// 	is always true on iteration domain: 0
// { I_blr_conv_3_30[root = 0, I_blr_r = 12, I_blr_c] : 0 <= I_blr_c <= 11 } -> { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> (12 - I_blr_c) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 0
	hw_uint<32>  value_I_store_I_from_in_0 = I_store_I_from_in_0_delay.peek((root == 0 && I_blr_r >= 0 && 11 - I_blr_r >= 0 && I_blr_c >= 0 && 11 - I_blr_c >= 0) ? (((192 - 15 * I_blr_r) - I_blr_c)) : (-12 + I_blr_c == 0 && root == 0 && I_blr_r >= 0 && 11 - I_blr_r >= 0) ? ((180 - 15 * I_blr_r)) : (-12 + I_blr_r == 0 && root == 0 && I_blr_c >= 0 && 11 - I_blr_c >= 0) ? ((12 - I_blr_c)) : 0);
	return value_I_store_I_from_in_0;
}

// Bundles...
// I_blr_conv_3_30_read
//	I_I_blr_conv_3_30_17
//	I_I_blr_conv_3_30_18
//	I_I_blr_conv_3_30_19
//	I_I_blr_conv_3_30_20
//	I_I_blr_conv_3_30_21
//	I_I_blr_conv_3_30_22
//	I_I_blr_conv_3_30_23
//	I_I_blr_conv_3_30_24
//	I_I_blr_conv_3_30_25
inline hw_uint<288> I_I_blr_conv_3_30_read_bundle_read(I_store_I_from_in_0_cache& I_store_I_from_in_0_delay, int root, int I_blr_r, int I_blr_c) {
	hw_uint<288> result;
	hw_uint<32>  I_I_blr_conv_3_30_17_res = I_I_blr_conv_3_30_17_select(I_store_I_from_in_0_delay, root, I_blr_r, I_blr_c);
	set_at<0, 288>(result, I_I_blr_conv_3_30_17_res);
	hw_uint<32>  I_I_blr_conv_3_30_18_res = I_I_blr_conv_3_30_18_select(I_store_I_from_in_0_delay, root, I_blr_r, I_blr_c);
	set_at<32, 288>(result, I_I_blr_conv_3_30_18_res);
	hw_uint<32>  I_I_blr_conv_3_30_19_res = I_I_blr_conv_3_30_19_select(I_store_I_from_in_0_delay, root, I_blr_r, I_blr_c);
	set_at<64, 288>(result, I_I_blr_conv_3_30_19_res);
	hw_uint<32>  I_I_blr_conv_3_30_20_res = I_I_blr_conv_3_30_20_select(I_store_I_from_in_0_delay, root, I_blr_r, I_blr_c);
	set_at<96, 288>(result, I_I_blr_conv_3_30_20_res);
	hw_uint<32>  I_I_blr_conv_3_30_21_res = I_I_blr_conv_3_30_21_select(I_store_I_from_in_0_delay, root, I_blr_r, I_blr_c);
	set_at<128, 288>(result, I_I_blr_conv_3_30_21_res);
	hw_uint<32>  I_I_blr_conv_3_30_22_res = I_I_blr_conv_3_30_22_select(I_store_I_from_in_0_delay, root, I_blr_r, I_blr_c);
	set_at<160, 288>(result, I_I_blr_conv_3_30_22_res);
	hw_uint<32>  I_I_blr_conv_3_30_23_res = I_I_blr_conv_3_30_23_select(I_store_I_from_in_0_delay, root, I_blr_r, I_blr_c);
	set_at<192, 288>(result, I_I_blr_conv_3_30_23_res);
	hw_uint<32>  I_I_blr_conv_3_30_24_res = I_I_blr_conv_3_30_24_select(I_store_I_from_in_0_delay, root, I_blr_r, I_blr_c);
	set_at<224, 288>(result, I_I_blr_conv_3_30_24_res);
	hw_uint<32>  I_I_blr_conv_3_30_25_res = I_I_blr_conv_3_30_25_select(I_store_I_from_in_0_delay, root, I_blr_r, I_blr_c);
	set_at<256, 288>(result, I_I_blr_conv_3_30_25_res);
	return result;
}

// store_I_from_in_write
//	I_store_I_from_in_0
inline void I_store_I_from_in_write_bundle_write(hw_uint<32> & /* width = 32*/store_I_from_in_write, I_store_I_from_in_0_cache& I_store_I_from_in_0_delay) {
	I_store_I_from_in_0_write(store_I_from_in_write, I_store_I_from_in_0_delay);
}



#include "hw_classes.h"

struct I_blr_I_blr_conv_3_30_16_cache {
	// Capacity: 169
	fifo<hw_uint<32> , 169> f;
	inline hw_uint<32>  peek(const int offset) {
		return f.peek(168 - offset);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		return f.push(value);
	}

};



inline void I_blr_I_blr_conv_3_30_16_write(hw_uint<32> & I_blr_I_blr_conv_3_30_16, I_blr_I_blr_conv_3_30_16_cache& I_blr_I_blr_conv_3_30_16_delay) {
	I_blr_I_blr_conv_3_30_16_delay.push(I_blr_I_blr_conv_3_30_16);
}

inline hw_uint<32>  I_blr_I_blr_ds_id0_13_select(I_blr_I_blr_conv_3_30_16_cache& I_blr_I_blr_conv_3_30_16_delay
, int root, int I_blr_ds_r, int I_blr_ds_c) {
// Pieces...
// { I_blr_ds_id0[root = 0, I_blr_ds_r, I_blr_ds_c] : 0 <= I_blr_ds_r <= 5 and 0 <= I_blr_ds_c <= 5 } -> { I_blr_ds_id0[root, I_blr_ds_r, I_blr_ds_c] -> ((168 - 26 * I_blr_ds_r) - 2 * I_blr_ds_c) }
// 	is always true on iteration domain: 1
//	is optimizable constant: 0
	hw_uint<32>  value_I_blr_I_blr_conv_3_30_16 = I_blr_I_blr_conv_3_30_16_delay.peek(((168 - 26 * I_blr_ds_r) - 2 * I_blr_ds_c));
	return value_I_blr_I_blr_conv_3_30_16;
}

// Bundles...
// I_blr_conv_3_30_write
//	I_blr_I_blr_conv_3_30_16
inline void I_blr_I_blr_conv_3_30_write_bundle_write(hw_uint<32> & /* width = 32*/I_blr_conv_3_30_write, I_blr_I_blr_conv_3_30_16_cache& I_blr_I_blr_conv_3_30_16_delay) {
	I_blr_I_blr_conv_3_30_16_write(I_blr_conv_3_30_write, I_blr_I_blr_conv_3_30_16_delay);
}

// I_blr_ds_id0_read
//	I_blr_I_blr_ds_id0_13
inline hw_uint<32> I_blr_I_blr_ds_id0_read_bundle_read(I_blr_I_blr_conv_3_30_16_cache& I_blr_I_blr_conv_3_30_16_delay, int root, int I_blr_ds_r, int I_blr_ds_c) {
	hw_uint<32> result;
	hw_uint<32>  I_blr_I_blr_ds_id0_13_res = I_blr_I_blr_ds_id0_13_select(I_blr_I_blr_conv_3_30_16_delay, root, I_blr_ds_r, I_blr_ds_c);
	set_at<0, 32>(result, I_blr_I_blr_ds_id0_13_res);
	return result;
}



#include "hw_classes.h"

struct I_blr_ds_I_blr_ds_id0_12_cache {
	// Capacity: 36
	fifo<hw_uint<32> , 36> f;
	inline hw_uint<32>  peek(const int offset) {
		return f.peek(35 - offset);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		return f.push(value);
	}

};



inline void I_blr_ds_I_blr_ds_id0_12_write(hw_uint<32> & I_blr_ds_I_blr_ds_id0_12, I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12_delay) {
	I_blr_ds_I_blr_ds_id0_12_delay.push(I_blr_ds_I_blr_ds_id0_12);
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_10_select(I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
// Pieces...
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 2 and 0 <= I_blr_ds_blr_c <= 3 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> ((22 - 6 * I_blr_ds_blr_r) - I_blr_ds_blr_c) }
// 	is always true on iteration domain: 0
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r = 3, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_c <= 3 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> (4 - I_blr_ds_blr_c) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 0
	hw_uint<32>  value_I_blr_ds_I_blr_ds_id0_12 = I_blr_ds_I_blr_ds_id0_12_delay.peek((root == 0 && I_blr_ds_blr_r >= 0 && 2 - I_blr_ds_blr_r >= 0 && I_blr_ds_blr_c >= 0 && 3 - I_blr_ds_blr_c >= 0) ? (((22 - 6 * I_blr_ds_blr_r) - I_blr_ds_blr_c)) : (-3 + I_blr_ds_blr_r == 0 && root == 0 && I_blr_ds_blr_c >= 0 && 3 - I_blr_ds_blr_c >= 0) ? ((4 - I_blr_ds_blr_c)) : 0);
	return value_I_blr_ds_I_blr_ds_id0_12;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_11_select(I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
// Pieces...
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 2 and 0 <= I_blr_ds_blr_c <= 2 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> ((21 - 6 * I_blr_ds_blr_r) - I_blr_ds_blr_c) }
// 	is always true on iteration domain: 0
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c = 3] : 0 <= I_blr_ds_blr_r <= 2 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> (18 - 6 * I_blr_ds_blr_r) }
// 	is always true on iteration domain: 0
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r = 3, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_c <= 2 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> (3 - I_blr_ds_blr_c) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 0
	hw_uint<32>  value_I_blr_ds_I_blr_ds_id0_12 = I_blr_ds_I_blr_ds_id0_12_delay.peek((root == 0 && I_blr_ds_blr_r >= 0 && 2 - I_blr_ds_blr_r >= 0 && I_blr_ds_blr_c >= 0 && 2 - I_blr_ds_blr_c >= 0) ? (((21 - 6 * I_blr_ds_blr_r) - I_blr_ds_blr_c)) : (-3 + I_blr_ds_blr_c == 0 && root == 0 && I_blr_ds_blr_r >= 0 && 2 - I_blr_ds_blr_r >= 0) ? ((18 - 6 * I_blr_ds_blr_r)) : (-3 + I_blr_ds_blr_r == 0 && root == 0 && I_blr_ds_blr_c >= 0 && 2 - I_blr_ds_blr_c >= 0) ? ((3 - I_blr_ds_blr_c)) : 0);
	return value_I_blr_ds_I_blr_ds_id0_12;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_3_select(I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
// Pieces...
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> ((35 - 6 * I_blr_ds_blr_r) - I_blr_ds_blr_c) }
// 	is always true on iteration domain: 1
//	is optimizable constant: 0
	hw_uint<32>  value_I_blr_ds_I_blr_ds_id0_12 = I_blr_ds_I_blr_ds_id0_12_delay.peek(((35 - 6 * I_blr_ds_blr_r) - I_blr_ds_blr_c));
	return value_I_blr_ds_I_blr_ds_id0_12;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_4_select(I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
// Pieces...
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> ((34 - 6 * I_blr_ds_blr_r) - I_blr_ds_blr_c) }
// 	is always true on iteration domain: 1
//	is optimizable constant: 0
	hw_uint<32>  value_I_blr_ds_I_blr_ds_id0_12 = I_blr_ds_I_blr_ds_id0_12_delay.peek(((34 - 6 * I_blr_ds_blr_r) - I_blr_ds_blr_c));
	return value_I_blr_ds_I_blr_ds_id0_12;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_5_select(I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
// Pieces...
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 2 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> ((33 - 6 * I_blr_ds_blr_r) - I_blr_ds_blr_c) }
// 	is always true on iteration domain: 0
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c = 3] : 0 <= I_blr_ds_blr_r <= 3 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> (30 - 6 * I_blr_ds_blr_r) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 0
	hw_uint<32>  value_I_blr_ds_I_blr_ds_id0_12 = I_blr_ds_I_blr_ds_id0_12_delay.peek((root == 0 && I_blr_ds_blr_r >= 0 && 3 - I_blr_ds_blr_r >= 0 && I_blr_ds_blr_c >= 0 && 2 - I_blr_ds_blr_c >= 0) ? (((33 - 6 * I_blr_ds_blr_r) - I_blr_ds_blr_c)) : (-3 + I_blr_ds_blr_c == 0 && root == 0 && I_blr_ds_blr_r >= 0 && 3 - I_blr_ds_blr_r >= 0) ? ((30 - 6 * I_blr_ds_blr_r)) : 0);
	return value_I_blr_ds_I_blr_ds_id0_12;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_6_select(I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
// Pieces...
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> ((29 - 6 * I_blr_ds_blr_r) - I_blr_ds_blr_c) }
// 	is always true on iteration domain: 1
//	is optimizable constant: 0
	hw_uint<32>  value_I_blr_ds_I_blr_ds_id0_12 = I_blr_ds_I_blr_ds_id0_12_delay.peek(((29 - 6 * I_blr_ds_blr_r) - I_blr_ds_blr_c));
	return value_I_blr_ds_I_blr_ds_id0_12;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_7_select(I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
// Pieces...
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> ((28 - 6 * I_blr_ds_blr_r) - I_blr_ds_blr_c) }
// 	is always true on iteration domain: 1
//	is optimizable constant: 0
	hw_uint<32>  value_I_blr_ds_I_blr_ds_id0_12 = I_blr_ds_I_blr_ds_id0_12_delay.peek(((28 - 6 * I_blr_ds_blr_r) - I_blr_ds_blr_c));
	return value_I_blr_ds_I_blr_ds_id0_12;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_8_select(I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
// Pieces...
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 2 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> ((27 - 6 * I_blr_ds_blr_r) - I_blr_ds_blr_c) }
// 	is always true on iteration domain: 0
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c = 3] : 0 <= I_blr_ds_blr_r <= 3 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> (24 - 6 * I_blr_ds_blr_r) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 0
	hw_uint<32>  value_I_blr_ds_I_blr_ds_id0_12 = I_blr_ds_I_blr_ds_id0_12_delay.peek((root == 0 && I_blr_ds_blr_r >= 0 && 3 - I_blr_ds_blr_r >= 0 && I_blr_ds_blr_c >= 0 && 2 - I_blr_ds_blr_c >= 0) ? (((27 - 6 * I_blr_ds_blr_r) - I_blr_ds_blr_c)) : (-3 + I_blr_ds_blr_c == 0 && root == 0 && I_blr_ds_blr_r >= 0 && 3 - I_blr_ds_blr_r >= 0) ? ((24 - 6 * I_blr_ds_blr_r)) : 0);
	return value_I_blr_ds_I_blr_ds_id0_12;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_9_select(I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
// Pieces...
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 2 and 0 <= I_blr_ds_blr_c <= 3 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> ((23 - 6 * I_blr_ds_blr_r) - I_blr_ds_blr_c) }
// 	is always true on iteration domain: 0
// { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r = 3, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_c <= 3 } -> { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> (5 - I_blr_ds_blr_c) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 0
	hw_uint<32>  value_I_blr_ds_I_blr_ds_id0_12 = I_blr_ds_I_blr_ds_id0_12_delay.peek((root == 0 && I_blr_ds_blr_r >= 0 && 2 - I_blr_ds_blr_r >= 0 && I_blr_ds_blr_c >= 0 && 3 - I_blr_ds_blr_c >= 0) ? (((23 - 6 * I_blr_ds_blr_r) - I_blr_ds_blr_c)) : (-3 + I_blr_ds_blr_r == 0 && root == 0 && I_blr_ds_blr_c >= 0 && 3 - I_blr_ds_blr_c >= 0) ? ((5 - I_blr_ds_blr_c)) : 0);
	return value_I_blr_ds_I_blr_ds_id0_12;
}

// Bundles...
// I_blr_ds_blr_conv_3_30_read
//	I_blr_ds_I_blr_ds_blr_conv_3_30_3
//	I_blr_ds_I_blr_ds_blr_conv_3_30_4
//	I_blr_ds_I_blr_ds_blr_conv_3_30_5
//	I_blr_ds_I_blr_ds_blr_conv_3_30_6
//	I_blr_ds_I_blr_ds_blr_conv_3_30_7
//	I_blr_ds_I_blr_ds_blr_conv_3_30_8
//	I_blr_ds_I_blr_ds_blr_conv_3_30_9
//	I_blr_ds_I_blr_ds_blr_conv_3_30_10
//	I_blr_ds_I_blr_ds_blr_conv_3_30_11
inline hw_uint<288> I_blr_ds_I_blr_ds_blr_conv_3_30_read_bundle_read(I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12_delay, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	hw_uint<288> result;
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_3_res = I_blr_ds_I_blr_ds_blr_conv_3_30_3_select(I_blr_ds_I_blr_ds_id0_12_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<0, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_3_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_4_res = I_blr_ds_I_blr_ds_blr_conv_3_30_4_select(I_blr_ds_I_blr_ds_id0_12_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<32, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_4_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_5_res = I_blr_ds_I_blr_ds_blr_conv_3_30_5_select(I_blr_ds_I_blr_ds_id0_12_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<64, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_5_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_6_res = I_blr_ds_I_blr_ds_blr_conv_3_30_6_select(I_blr_ds_I_blr_ds_id0_12_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<96, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_6_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_7_res = I_blr_ds_I_blr_ds_blr_conv_3_30_7_select(I_blr_ds_I_blr_ds_id0_12_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<128, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_7_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_8_res = I_blr_ds_I_blr_ds_blr_conv_3_30_8_select(I_blr_ds_I_blr_ds_id0_12_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<160, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_8_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_9_res = I_blr_ds_I_blr_ds_blr_conv_3_30_9_select(I_blr_ds_I_blr_ds_id0_12_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<192, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_9_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_10_res = I_blr_ds_I_blr_ds_blr_conv_3_30_10_select(I_blr_ds_I_blr_ds_id0_12_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<224, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_10_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_11_res = I_blr_ds_I_blr_ds_blr_conv_3_30_11_select(I_blr_ds_I_blr_ds_id0_12_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<256, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_11_res);
	return result;
}

// I_blr_ds_id0_write
//	I_blr_ds_I_blr_ds_id0_12
inline void I_blr_ds_I_blr_ds_id0_write_bundle_write(hw_uint<32> & /* width = 32*/I_blr_ds_id0_write, I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12_delay) {
	I_blr_ds_I_blr_ds_id0_12_write(I_blr_ds_id0_write, I_blr_ds_I_blr_ds_id0_12_delay);
}



#include "hw_classes.h"

struct I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_cache {
	// Capacity: 16
	fifo<hw_uint<32> , 16> f;
	inline hw_uint<32>  peek(const int offset) {
		return f.peek(15 - offset);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		return f.push(value);
	}

};



inline void I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_write(hw_uint<32> & I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2, I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_cache& I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_delay) {
	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_delay.push(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2);
}

inline hw_uint<32>  I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_15_select(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_cache& I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_delay
, int root, int I_blr_ds_blr_out_r, int I_blr_ds_blr_out_c) {
// Pieces...
// { store_I_blr_ds_blr_out_from_I_blr_ds_blr[root = 0, I_blr_ds_blr_out_r, I_blr_ds_blr_out_c] : 0 <= I_blr_ds_blr_out_r <= 2 and 0 <= I_blr_ds_blr_out_c <= 2 } -> { store_I_blr_ds_blr_out_from_I_blr_ds_blr[root, I_blr_ds_blr_out_r, I_blr_ds_blr_out_c] -> ((15 - 4 * I_blr_ds_blr_out_r) - I_blr_ds_blr_out_c) }
// 	is always true on iteration domain: 0
// { store_I_blr_ds_blr_out_from_I_blr_ds_blr[root = 0, I_blr_ds_blr_out_r, I_blr_ds_blr_out_c = 3] : 0 <= I_blr_ds_blr_out_r <= 2 } -> { store_I_blr_ds_blr_out_from_I_blr_ds_blr[root, I_blr_ds_blr_out_r, I_blr_ds_blr_out_c] -> (12 - 4 * I_blr_ds_blr_out_r) }
// 	is always true on iteration domain: 0
// { store_I_blr_ds_blr_out_from_I_blr_ds_blr[root = 0, I_blr_ds_blr_out_r = 3, I_blr_ds_blr_out_c] : 0 <= I_blr_ds_blr_out_c <= 2 } -> { store_I_blr_ds_blr_out_from_I_blr_ds_blr[root, I_blr_ds_blr_out_r, I_blr_ds_blr_out_c] -> (3 - I_blr_ds_blr_out_c) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 0
	hw_uint<32>  value_I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2 = I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_delay.peek((root == 0 && I_blr_ds_blr_out_r >= 0 && 2 - I_blr_ds_blr_out_r >= 0 && I_blr_ds_blr_out_c >= 0 && 2 - I_blr_ds_blr_out_c >= 0) ? (((15 - 4 * I_blr_ds_blr_out_r) - I_blr_ds_blr_out_c)) : (-3 + I_blr_ds_blr_out_c == 0 && root == 0 && I_blr_ds_blr_out_r >= 0 && 2 - I_blr_ds_blr_out_r >= 0) ? ((12 - 4 * I_blr_ds_blr_out_r)) : (-3 + I_blr_ds_blr_out_r == 0 && root == 0 && I_blr_ds_blr_out_c >= 0 && 2 - I_blr_ds_blr_out_c >= 0) ? ((3 - I_blr_ds_blr_out_c)) : 0);
	return value_I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2;
}

// Bundles...
// I_blr_ds_blr_conv_3_30_write
//	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2
inline void I_blr_ds_blr_I_blr_ds_blr_conv_3_30_write_bundle_write(hw_uint<32> & /* width = 32*/I_blr_ds_blr_conv_3_30_write, I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_cache& I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_delay) {
	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_write(I_blr_ds_blr_conv_3_30_write, I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_delay);
}

// store_I_blr_ds_blr_out_from_I_blr_ds_blr_read
//	I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_15
inline hw_uint<32> I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_read_bundle_read(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_cache& I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_delay, int root, int I_blr_ds_blr_out_r, int I_blr_ds_blr_out_c) {
	hw_uint<32> result;
	hw_uint<32>  I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_15_res = I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_15_select(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_delay, root, I_blr_ds_blr_out_r, I_blr_ds_blr_out_c);
	set_at<0, 32>(result, I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_15_res);
	return result;
}





// Operation logic
inline void store_I_from_in(HWStream<hw_uint<32>  >& in, I_store_I_from_in_0_cache& I_store_I_from_in_0, int root, int pr, int pc) {
	// Consume: in
	auto in_pr_c__pc_value = in.read();
	// Produce: I
	// Buffer: I, Op: store_I_from_in
	// Possible ports...
		// I_store_I_from_in_0
	I_store_I_from_in_write_bundle_write(in_pr_c__pc_value, I_store_I_from_in_0 /* output src_delay */);
}

inline void I_blr_ds_blr_conv_3_30(I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12, I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_cache& I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	// Consume: I_blr_ds
	auto I_blr_ds_I_blr_ds_blr_r__p__0_c__I_blr_ds_blr_c__p__0_value = I_blr_ds_I_blr_ds_blr_conv_3_30_read_bundle_read(I_blr_ds_I_blr_ds_id0_12/* source_delay */, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	// Apply function: conv_3_3
	// Arg: I_blr_ds_I_blr_ds_blr_r__p__0_c__I_blr_ds_blr_c__p__0_value
	// Arg buf: I_blr_ds
	// Arg: I_blr_ds_I_blr_ds_blr_r__p__0_c__I_blr_ds_blr_c__p__1_value
	// Arg buf: I_blr_ds
	// Arg: I_blr_ds_I_blr_ds_blr_r__p__0_c__I_blr_ds_blr_c__p__2_value
	// Arg buf: I_blr_ds
	// Arg: I_blr_ds_I_blr_ds_blr_r__p__1_c__I_blr_ds_blr_c__p__0_value
	// Arg buf: I_blr_ds
	// Arg: I_blr_ds_I_blr_ds_blr_r__p__1_c__I_blr_ds_blr_c__p__1_value
	// Arg buf: I_blr_ds
	// Arg: I_blr_ds_I_blr_ds_blr_r__p__1_c__I_blr_ds_blr_c__p__2_value
	// Arg buf: I_blr_ds
	// Arg: I_blr_ds_I_blr_ds_blr_r__p__2_c__I_blr_ds_blr_c__p__0_value
	// Arg buf: I_blr_ds
	// Arg: I_blr_ds_I_blr_ds_blr_r__p__2_c__I_blr_ds_blr_c__p__1_value
	// Arg buf: I_blr_ds
	// Arg: I_blr_ds_I_blr_ds_blr_r__p__2_c__I_blr_ds_blr_c__p__2_value
	// Arg buf: I_blr_ds
	 /* comma list args */ auto compute_result = conv_3_3(I_blr_ds_I_blr_ds_blr_r__p__0_c__I_blr_ds_blr_c__p__0_value);
	// Produce: I_blr_ds_blr
	// Buffer: I_blr_ds_blr, Op: I_blr_ds_blr_conv_3_30
	// Possible ports...
		// I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2
	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_write_bundle_write(compute_result, I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2 /* output src_delay */);
}

inline void I_blr_ds_id0(I_blr_I_blr_conv_3_30_16_cache& I_blr_I_blr_conv_3_30_16, I_blr_ds_I_blr_ds_id0_12_cache& I_blr_ds_I_blr_ds_id0_12, int root, int I_blr_ds_r, int I_blr_ds_c) {
	// Consume: I_blr
	auto I_blr_2_m_I_blr_ds_r_c__2_m_I_blr_ds_c_value = I_blr_I_blr_ds_id0_read_bundle_read(I_blr_I_blr_conv_3_30_16/* source_delay */, root, I_blr_ds_r, I_blr_ds_c);
	// Apply function: id
	// Arg: I_blr_2_m_I_blr_ds_r_c__2_m_I_blr_ds_c_value
	// Arg buf: I_blr
	 /* comma list args */ auto compute_result = id(I_blr_2_m_I_blr_ds_r_c__2_m_I_blr_ds_c_value);
	// Produce: I_blr_ds
	// Buffer: I_blr_ds, Op: I_blr_ds_id0
	// Possible ports...
		// I_blr_ds_I_blr_ds_id0_12
	I_blr_ds_I_blr_ds_id0_write_bundle_write(compute_result, I_blr_ds_I_blr_ds_id0_12 /* output src_delay */);
}

inline void store_I_blr_ds_blr_out_from_I_blr_ds_blr(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_cache& I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2, HWStream<hw_uint<32>  >& I_blr_ds_blr_out, int root, int I_blr_ds_blr_out_r, int I_blr_ds_blr_out_c) {
	// Consume: I_blr_ds_blr
	auto I_blr_ds_blr_I_blr_ds_blr_out_r_c__I_blr_ds_blr_out_c_value = I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_read_bundle_read(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2/* source_delay */, root, I_blr_ds_blr_out_r, I_blr_ds_blr_out_c);
	// Produce: I_blr_ds_blr_out
	I_blr_ds_blr_out.write(I_blr_ds_blr_I_blr_ds_blr_out_r_c__I_blr_ds_blr_out_c_value);
}

inline void I_blr_conv_3_30(I_store_I_from_in_0_cache& I_store_I_from_in_0, I_blr_I_blr_conv_3_30_16_cache& I_blr_I_blr_conv_3_30_16, int root, int I_blr_r, int I_blr_c) {
	// Consume: I
	auto I_I_blr_r__p__0_c__I_blr_c__p__0_value = I_I_blr_conv_3_30_read_bundle_read(I_store_I_from_in_0/* source_delay */, root, I_blr_r, I_blr_c);
	// Apply function: conv_3_3
	// Arg: I_I_blr_r__p__0_c__I_blr_c__p__0_value
	// Arg buf: I
	// Arg: I_I_blr_r__p__0_c__I_blr_c__p__1_value
	// Arg buf: I
	// Arg: I_I_blr_r__p__0_c__I_blr_c__p__2_value
	// Arg buf: I
	// Arg: I_I_blr_r__p__1_c__I_blr_c__p__0_value
	// Arg buf: I
	// Arg: I_I_blr_r__p__1_c__I_blr_c__p__1_value
	// Arg buf: I
	// Arg: I_I_blr_r__p__1_c__I_blr_c__p__2_value
	// Arg buf: I
	// Arg: I_I_blr_r__p__2_c__I_blr_c__p__0_value
	// Arg buf: I
	// Arg: I_I_blr_r__p__2_c__I_blr_c__p__1_value
	// Arg buf: I
	// Arg: I_I_blr_r__p__2_c__I_blr_c__p__2_value
	// Arg buf: I
	 /* comma list args */ auto compute_result = conv_3_3(I_I_blr_r__p__0_c__I_blr_c__p__0_value);
	// Produce: I_blr
	// Buffer: I_blr, Op: I_blr_conv_3_30
	// Possible ports...
		// I_blr_I_blr_conv_3_30_16
	I_blr_I_blr_conv_3_30_write_bundle_write(compute_result, I_blr_I_blr_conv_3_30_16 /* output src_delay */);
}

// Driver function
void unoptimized_blur_and_downsample(HWStream<hw_uint<32>  >& in, HWStream<hw_uint<32> >& I_blr_ds_blr_out, HWStream<hw_uint<32>  >& out) {
	I_store_I_from_in_0_cache I_store_I_from_in_0;
	I_blr_I_blr_conv_3_30_16_cache I_blr_I_blr_conv_3_30_16;
	I_blr_ds_I_blr_ds_id0_12_cache I_blr_ds_I_blr_ds_id0_12;
	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_cache I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2;
	{
	  for (int c3 = 0; c3 <= 14; c3 += 1)
	    for (int c5 = 0; c5 <= 14; c5 += 1)
	      store_I_from_in(in, I_store_I_from_in_0, 0, c3, c5);
	  for (int c3 = 0; c3 <= 12; c3 += 1)
	    for (int c5 = 0; c5 <= 12; c5 += 1)
	      I_blr_conv_3_30(I_store_I_from_in_0, I_blr_I_blr_conv_3_30_16, 0, c3, c5);
	  for (int c3 = 0; c3 <= 5; c3 += 1)
	    for (int c5 = 0; c5 <= 5; c5 += 1)
	      I_blr_ds_id0(I_blr_I_blr_conv_3_30_16, I_blr_ds_I_blr_ds_id0_12, 0, c3, c5);
	  for (int c3 = 0; c3 <= 3; c3 += 1)
	    for (int c5 = 0; c5 <= 3; c5 += 1)
	      I_blr_ds_blr_conv_3_30(I_blr_ds_I_blr_ds_id0_12, I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2, 0, c3, c5);
	  for (int c3 = 0; c3 <= 3; c3 += 1)
	    for (int c5 = 0; c5 <= 3; c5 += 1)
	      store_I_blr_ds_blr_out_from_I_blr_ds_blr(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2, I_blr_ds_blr_out, 0, c3, c5);
	}
	
}
