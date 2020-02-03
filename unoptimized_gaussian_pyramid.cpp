#include "conv_3x3.h"

#include "hw_classes.h"

struct I_store_I_from_in_0_cache {
	// Capacity: 1024
	fifo<int, 1024> f;
	inline int peek(const int offset) {
		return f.peek(1023 - offset);
	}



	inline void push(const int value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		return f.push(value);
	}

};



inline void I_store_I_from_in_0_write(int& I_store_I_from_in_0, I_store_I_from_in_0_cache& I_store_I_from_in_0_delay) {
	I_store_I_from_in_0_delay.push(I_store_I_from_in_0);
}

inline int I_I_blurred_conv_3_30_10_select(I_store_I_from_in_0_cache& I_store_I_from_in_0_delay
, int root, int I_blurred_r, int I_blurred_c) {
// Pieces...
// { I_blurred_conv_3_30[root = 0, I_blurred_r, I_blurred_c] : 0 <= I_blurred_r <= 28 and 0 <= I_blurred_c <= 29 } -> { I_blurred_conv_3_30[root, I_blurred_r, I_blurred_c] -> ((958 - 32 * I_blurred_r) - I_blurred_c) }
// 	is always true on iteration domain: 0
// { I_blurred_conv_3_30[root = 0, I_blurred_r = 29, I_blurred_c] : 0 <= I_blurred_c <= 29 } -> { I_blurred_conv_3_30[root, I_blurred_r, I_blurred_c] -> (30 - I_blurred_c) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 0
	int value_I_store_I_from_in_0 = I_store_I_from_in_0_delay.peek(((root == 0 && I_blurred_r >= 0 && 28 - I_blurred_r >= 0 && I_blurred_c >= 0 && 29 - I_blurred_c >= 0) ? (((958 - 32 * I_blurred_r) - I_blurred_c)) : (-29 + I_blurred_r == 0 && root == 0 && I_blurred_c >= 0 && 29 - I_blurred_c >= 0) ? ((30 - I_blurred_c)) : 0));
	return value_I_store_I_from_in_0;
}

inline int I_I_blurred_conv_3_30_11_select(I_store_I_from_in_0_cache& I_store_I_from_in_0_delay
, int root, int I_blurred_r, int I_blurred_c) {
// Pieces...
// { I_blurred_conv_3_30[root = 0, I_blurred_r, I_blurred_c] : 0 <= I_blurred_r <= 28 and 0 <= I_blurred_c <= 28 } -> { I_blurred_conv_3_30[root, I_blurred_r, I_blurred_c] -> ((957 - 32 * I_blurred_r) - I_blurred_c) }
// 	is always true on iteration domain: 0
// { I_blurred_conv_3_30[root = 0, I_blurred_r, I_blurred_c = 29] : 0 <= I_blurred_r <= 28 } -> { I_blurred_conv_3_30[root, I_blurred_r, I_blurred_c] -> (928 - 32 * I_blurred_r) }
// 	is always true on iteration domain: 0
// { I_blurred_conv_3_30[root = 0, I_blurred_r = 29, I_blurred_c] : 0 <= I_blurred_c <= 28 } -> { I_blurred_conv_3_30[root, I_blurred_r, I_blurred_c] -> (29 - I_blurred_c) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 0
	int value_I_store_I_from_in_0 = I_store_I_from_in_0_delay.peek(((root == 0 && I_blurred_r >= 0 && 28 - I_blurred_r >= 0 && I_blurred_c >= 0 && 28 - I_blurred_c >= 0) ? (((957 - 32 * I_blurred_r) - I_blurred_c)) : (-29 + I_blurred_c == 0 && root == 0 && I_blurred_r >= 0 && 28 - I_blurred_r >= 0) ? ((928 - 32 * I_blurred_r)) : (-29 + I_blurred_r == 0 && root == 0 && I_blurred_c >= 0 && 28 - I_blurred_c >= 0) ? ((29 - I_blurred_c)) : 0));
	return value_I_store_I_from_in_0;
}

inline int I_I_blurred_conv_3_30_3_select(I_store_I_from_in_0_cache& I_store_I_from_in_0_delay
, int root, int I_blurred_r, int I_blurred_c) {
// Pieces...
// { I_blurred_conv_3_30[root = 0, I_blurred_r, I_blurred_c] : 0 <= I_blurred_r <= 29 and 0 <= I_blurred_c <= 29 } -> { I_blurred_conv_3_30[root, I_blurred_r, I_blurred_c] -> ((1023 - 32 * I_blurred_r) - I_blurred_c) }
// 	is always true on iteration domain: 1
//	is optimizable constant: 0
	int value_I_store_I_from_in_0 = I_store_I_from_in_0_delay.peek(((1023 - 32 * I_blurred_r) - I_blurred_c));
	return value_I_store_I_from_in_0;
}

inline int I_I_blurred_conv_3_30_4_select(I_store_I_from_in_0_cache& I_store_I_from_in_0_delay
, int root, int I_blurred_r, int I_blurred_c) {
// Pieces...
// { I_blurred_conv_3_30[root = 0, I_blurred_r, I_blurred_c] : 0 <= I_blurred_r <= 29 and 0 <= I_blurred_c <= 29 } -> { I_blurred_conv_3_30[root, I_blurred_r, I_blurred_c] -> ((1022 - 32 * I_blurred_r) - I_blurred_c) }
// 	is always true on iteration domain: 1
//	is optimizable constant: 0
	int value_I_store_I_from_in_0 = I_store_I_from_in_0_delay.peek(((1022 - 32 * I_blurred_r) - I_blurred_c));
	return value_I_store_I_from_in_0;
}

inline int I_I_blurred_conv_3_30_5_select(I_store_I_from_in_0_cache& I_store_I_from_in_0_delay
, int root, int I_blurred_r, int I_blurred_c) {
// Pieces...
// { I_blurred_conv_3_30[root = 0, I_blurred_r, I_blurred_c] : 0 <= I_blurred_r <= 29 and 0 <= I_blurred_c <= 28 } -> { I_blurred_conv_3_30[root, I_blurred_r, I_blurred_c] -> ((1021 - 32 * I_blurred_r) - I_blurred_c) }
// 	is always true on iteration domain: 0
// { I_blurred_conv_3_30[root = 0, I_blurred_r, I_blurred_c = 29] : 0 <= I_blurred_r <= 29 } -> { I_blurred_conv_3_30[root, I_blurred_r, I_blurred_c] -> (992 - 32 * I_blurred_r) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 0
	int value_I_store_I_from_in_0 = I_store_I_from_in_0_delay.peek(((root == 0 && I_blurred_r >= 0 && 29 - I_blurred_r >= 0 && I_blurred_c >= 0 && 28 - I_blurred_c >= 0) ? (((1021 - 32 * I_blurred_r) - I_blurred_c)) : (-29 + I_blurred_c == 0 && root == 0 && I_blurred_r >= 0 && 29 - I_blurred_r >= 0) ? ((992 - 32 * I_blurred_r)) : 0));
	return value_I_store_I_from_in_0;
}

inline int I_I_blurred_conv_3_30_6_select(I_store_I_from_in_0_cache& I_store_I_from_in_0_delay
, int root, int I_blurred_r, int I_blurred_c) {
// Pieces...
// { I_blurred_conv_3_30[root = 0, I_blurred_r, I_blurred_c] : 0 <= I_blurred_r <= 29 and 0 <= I_blurred_c <= 29 } -> { I_blurred_conv_3_30[root, I_blurred_r, I_blurred_c] -> ((991 - 32 * I_blurred_r) - I_blurred_c) }
// 	is always true on iteration domain: 1
//	is optimizable constant: 0
	int value_I_store_I_from_in_0 = I_store_I_from_in_0_delay.peek(((991 - 32 * I_blurred_r) - I_blurred_c));
	return value_I_store_I_from_in_0;
}

inline int I_I_blurred_conv_3_30_7_select(I_store_I_from_in_0_cache& I_store_I_from_in_0_delay
, int root, int I_blurred_r, int I_blurred_c) {
// Pieces...
// { I_blurred_conv_3_30[root = 0, I_blurred_r, I_blurred_c] : 0 <= I_blurred_r <= 29 and 0 <= I_blurred_c <= 29 } -> { I_blurred_conv_3_30[root, I_blurred_r, I_blurred_c] -> ((990 - 32 * I_blurred_r) - I_blurred_c) }
// 	is always true on iteration domain: 1
//	is optimizable constant: 0
	int value_I_store_I_from_in_0 = I_store_I_from_in_0_delay.peek(((990 - 32 * I_blurred_r) - I_blurred_c));
	return value_I_store_I_from_in_0;
}

inline int I_I_blurred_conv_3_30_8_select(I_store_I_from_in_0_cache& I_store_I_from_in_0_delay
, int root, int I_blurred_r, int I_blurred_c) {
// Pieces...
// { I_blurred_conv_3_30[root = 0, I_blurred_r, I_blurred_c] : 0 <= I_blurred_r <= 29 and 0 <= I_blurred_c <= 28 } -> { I_blurred_conv_3_30[root, I_blurred_r, I_blurred_c] -> ((989 - 32 * I_blurred_r) - I_blurred_c) }
// 	is always true on iteration domain: 0
// { I_blurred_conv_3_30[root = 0, I_blurred_r, I_blurred_c = 29] : 0 <= I_blurred_r <= 29 } -> { I_blurred_conv_3_30[root, I_blurred_r, I_blurred_c] -> (960 - 32 * I_blurred_r) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 0
	int value_I_store_I_from_in_0 = I_store_I_from_in_0_delay.peek(((root == 0 && I_blurred_r >= 0 && 29 - I_blurred_r >= 0 && I_blurred_c >= 0 && 28 - I_blurred_c >= 0) ? (((989 - 32 * I_blurred_r) - I_blurred_c)) : (-29 + I_blurred_c == 0 && root == 0 && I_blurred_r >= 0 && 29 - I_blurred_r >= 0) ? ((960 - 32 * I_blurred_r)) : 0));
	return value_I_store_I_from_in_0;
}

inline int I_I_blurred_conv_3_30_9_select(I_store_I_from_in_0_cache& I_store_I_from_in_0_delay
, int root, int I_blurred_r, int I_blurred_c) {
// Pieces...
// { I_blurred_conv_3_30[root = 0, I_blurred_r, I_blurred_c] : 0 <= I_blurred_r <= 28 and 0 <= I_blurred_c <= 29 } -> { I_blurred_conv_3_30[root, I_blurred_r, I_blurred_c] -> ((959 - 32 * I_blurred_r) - I_blurred_c) }
// 	is always true on iteration domain: 0
// { I_blurred_conv_3_30[root = 0, I_blurred_r = 29, I_blurred_c] : 0 <= I_blurred_c <= 29 } -> { I_blurred_conv_3_30[root, I_blurred_r, I_blurred_c] -> (31 - I_blurred_c) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 0
	int value_I_store_I_from_in_0 = I_store_I_from_in_0_delay.peek(((root == 0 && I_blurred_r >= 0 && 28 - I_blurred_r >= 0 && I_blurred_c >= 0 && 29 - I_blurred_c >= 0) ? (((959 - 32 * I_blurred_r) - I_blurred_c)) : (-29 + I_blurred_r == 0 && root == 0 && I_blurred_c >= 0 && 29 - I_blurred_c >= 0) ? ((31 - I_blurred_c)) : 0));
	return value_I_store_I_from_in_0;
}

// Bundles...
// I_blurred_conv_3_30_read
//	I_I_blurred_conv_3_30_3
//	I_I_blurred_conv_3_30_4
//	I_I_blurred_conv_3_30_5
//	I_I_blurred_conv_3_30_6
//	I_I_blurred_conv_3_30_7
//	I_I_blurred_conv_3_30_8
//	I_I_blurred_conv_3_30_9
//	I_I_blurred_conv_3_30_10
//	I_I_blurred_conv_3_30_11
inline hw_uint<288> I_I_blurred_conv_3_30_read_bundle_read(I_store_I_from_in_0_cache& I_store_I_from_in_0_delay, int root, int I_blurred_r, int I_blurred_c) {
	hw_uint<288> result;
	int I_I_blurred_conv_3_30_3_res = I_I_blurred_conv_3_30_3_select(I_store_I_from_in_0_delay, root, I_blurred_r, I_blurred_c);
	set_at<0, 288>(result, I_I_blurred_conv_3_30_3_res);
	int I_I_blurred_conv_3_30_4_res = I_I_blurred_conv_3_30_4_select(I_store_I_from_in_0_delay, root, I_blurred_r, I_blurred_c);
	set_at<32, 288>(result, I_I_blurred_conv_3_30_4_res);
	int I_I_blurred_conv_3_30_5_res = I_I_blurred_conv_3_30_5_select(I_store_I_from_in_0_delay, root, I_blurred_r, I_blurred_c);
	set_at<64, 288>(result, I_I_blurred_conv_3_30_5_res);
	int I_I_blurred_conv_3_30_6_res = I_I_blurred_conv_3_30_6_select(I_store_I_from_in_0_delay, root, I_blurred_r, I_blurred_c);
	set_at<96, 288>(result, I_I_blurred_conv_3_30_6_res);
	int I_I_blurred_conv_3_30_7_res = I_I_blurred_conv_3_30_7_select(I_store_I_from_in_0_delay, root, I_blurred_r, I_blurred_c);
	set_at<128, 288>(result, I_I_blurred_conv_3_30_7_res);
	int I_I_blurred_conv_3_30_8_res = I_I_blurred_conv_3_30_8_select(I_store_I_from_in_0_delay, root, I_blurred_r, I_blurred_c);
	set_at<160, 288>(result, I_I_blurred_conv_3_30_8_res);
	int I_I_blurred_conv_3_30_9_res = I_I_blurred_conv_3_30_9_select(I_store_I_from_in_0_delay, root, I_blurred_r, I_blurred_c);
	set_at<192, 288>(result, I_I_blurred_conv_3_30_9_res);
	int I_I_blurred_conv_3_30_10_res = I_I_blurred_conv_3_30_10_select(I_store_I_from_in_0_delay, root, I_blurred_r, I_blurred_c);
	set_at<224, 288>(result, I_I_blurred_conv_3_30_10_res);
	int I_I_blurred_conv_3_30_11_res = I_I_blurred_conv_3_30_11_select(I_store_I_from_in_0_delay, root, I_blurred_r, I_blurred_c);
	set_at<256, 288>(result, I_I_blurred_conv_3_30_11_res);
	return result;
}

// store_I_from_in_write
//	I_store_I_from_in_0
inline void I_store_I_from_in_write_bundle_write(int& /* width = 32*/store_I_from_in_write, I_store_I_from_in_0_cache& I_store_I_from_in_0_delay) {
	I_store_I_from_in_0_write(store_I_from_in_write, I_store_I_from_in_0_delay);
}



#include "hw_classes.h"

struct I_blurred_I_blurred_conv_3_30_2_cache {
	// Capacity: 900
	fifo<int, 900> f;
	inline int peek(const int offset) {
		return f.peek(899 - offset);
	}



	inline void push(const int value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		return f.push(value);
	}

};



inline void I_blurred_I_blurred_conv_3_30_2_write(int& I_blurred_I_blurred_conv_3_30_2, I_blurred_I_blurred_conv_3_30_2_cache& I_blurred_I_blurred_conv_3_30_2_delay) {
	I_blurred_I_blurred_conv_3_30_2_delay.push(I_blurred_I_blurred_conv_3_30_2);
}

inline int I_blurred_I_blurred_downsampled_id0_29_select(I_blurred_I_blurred_conv_3_30_2_cache& I_blurred_I_blurred_conv_3_30_2_delay
, int root, int I_blurred_downsampled_r, int I_blurred_downsampled_c) {
// Pieces...
// { I_blurred_downsampled_id0[root = 0, I_blurred_downsampled_r, I_blurred_downsampled_c] : 0 <= I_blurred_downsampled_r <= 14 and 0 <= I_blurred_downsampled_c <= 14 } -> { I_blurred_downsampled_id0[root, I_blurred_downsampled_r, I_blurred_downsampled_c] -> ((899 - 60 * I_blurred_downsampled_r) - 2 * I_blurred_downsampled_c) }
// 	is always true on iteration domain: 1
//	is optimizable constant: 0
	int value_I_blurred_I_blurred_conv_3_30_2 = I_blurred_I_blurred_conv_3_30_2_delay.peek(((899 - 60 * I_blurred_downsampled_r) - 2 * I_blurred_downsampled_c));
	return value_I_blurred_I_blurred_conv_3_30_2;
}

// Bundles...
// I_blurred_conv_3_30_write
//	I_blurred_I_blurred_conv_3_30_2
inline void I_blurred_I_blurred_conv_3_30_write_bundle_write(int& /* width = 32*/I_blurred_conv_3_30_write, I_blurred_I_blurred_conv_3_30_2_cache& I_blurred_I_blurred_conv_3_30_2_delay) {
	I_blurred_I_blurred_conv_3_30_2_write(I_blurred_conv_3_30_write, I_blurred_I_blurred_conv_3_30_2_delay);
}

// I_blurred_downsampled_id0_read
//	I_blurred_I_blurred_downsampled_id0_29
inline int I_blurred_I_blurred_downsampled_id0_read_bundle_read(I_blurred_I_blurred_conv_3_30_2_cache& I_blurred_I_blurred_conv_3_30_2_delay, int root, int I_blurred_downsampled_r, int I_blurred_downsampled_c) {
	int result;
	int I_blurred_I_blurred_downsampled_id0_29_res = I_blurred_I_blurred_downsampled_id0_29_select(I_blurred_I_blurred_conv_3_30_2_delay, root, I_blurred_downsampled_r, I_blurred_downsampled_c);
	set_at<0, 32>(result, I_blurred_I_blurred_downsampled_id0_29_res);
	return result;
}



#include "hw_classes.h"

struct I_blurred_downsampled_I_blurred_downsampled_id0_28_cache {
	// Capacity: 225
	fifo<int, 225> f;
	inline int peek(const int offset) {
		return f.peek(224 - offset);
	}



	inline void push(const int value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		return f.push(value);
	}

};



inline void I_blurred_downsampled_I_blurred_downsampled_id0_28_write(int& I_blurred_downsampled_I_blurred_downsampled_id0_28, I_blurred_downsampled_I_blurred_downsampled_id0_28_cache& I_blurred_downsampled_I_blurred_downsampled_id0_28_delay) {
	I_blurred_downsampled_I_blurred_downsampled_id0_28_delay.push(I_blurred_downsampled_I_blurred_downsampled_id0_28);
}

inline int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_19_select(I_blurred_downsampled_I_blurred_downsampled_id0_28_cache& I_blurred_downsampled_I_blurred_downsampled_id0_28_delay
, int root, int I_blurred_downsampled_blurred_r, int I_blurred_downsampled_blurred_c) {
// Pieces...
// { I_blurred_downsampled_blurred_conv_3_30[root = 0, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] : 0 <= I_blurred_downsampled_blurred_r <= 12 and 0 <= I_blurred_downsampled_blurred_c <= 12 } -> { I_blurred_downsampled_blurred_conv_3_30[root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] -> ((224 - 15 * I_blurred_downsampled_blurred_r) - I_blurred_downsampled_blurred_c) }
// 	is always true on iteration domain: 1
//	is optimizable constant: 0
	int value_I_blurred_downsampled_I_blurred_downsampled_id0_28 = I_blurred_downsampled_I_blurred_downsampled_id0_28_delay.peek(((224 - 15 * I_blurred_downsampled_blurred_r) - I_blurred_downsampled_blurred_c));
	return value_I_blurred_downsampled_I_blurred_downsampled_id0_28;
}

inline int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_20_select(I_blurred_downsampled_I_blurred_downsampled_id0_28_cache& I_blurred_downsampled_I_blurred_downsampled_id0_28_delay
, int root, int I_blurred_downsampled_blurred_r, int I_blurred_downsampled_blurred_c) {
// Pieces...
// { I_blurred_downsampled_blurred_conv_3_30[root = 0, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] : 0 <= I_blurred_downsampled_blurred_r <= 12 and 0 <= I_blurred_downsampled_blurred_c <= 12 } -> { I_blurred_downsampled_blurred_conv_3_30[root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] -> ((223 - 15 * I_blurred_downsampled_blurred_r) - I_blurred_downsampled_blurred_c) }
// 	is always true on iteration domain: 1
//	is optimizable constant: 0
	int value_I_blurred_downsampled_I_blurred_downsampled_id0_28 = I_blurred_downsampled_I_blurred_downsampled_id0_28_delay.peek(((223 - 15 * I_blurred_downsampled_blurred_r) - I_blurred_downsampled_blurred_c));
	return value_I_blurred_downsampled_I_blurred_downsampled_id0_28;
}

inline int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_21_select(I_blurred_downsampled_I_blurred_downsampled_id0_28_cache& I_blurred_downsampled_I_blurred_downsampled_id0_28_delay
, int root, int I_blurred_downsampled_blurred_r, int I_blurred_downsampled_blurred_c) {
// Pieces...
// { I_blurred_downsampled_blurred_conv_3_30[root = 0, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] : 0 <= I_blurred_downsampled_blurred_r <= 12 and 0 <= I_blurred_downsampled_blurred_c <= 11 } -> { I_blurred_downsampled_blurred_conv_3_30[root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] -> ((222 - 15 * I_blurred_downsampled_blurred_r) - I_blurred_downsampled_blurred_c) }
// 	is always true on iteration domain: 0
// { I_blurred_downsampled_blurred_conv_3_30[root = 0, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c = 12] : 0 <= I_blurred_downsampled_blurred_r <= 12 } -> { I_blurred_downsampled_blurred_conv_3_30[root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] -> (210 - 15 * I_blurred_downsampled_blurred_r) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 0
	int value_I_blurred_downsampled_I_blurred_downsampled_id0_28 = I_blurred_downsampled_I_blurred_downsampled_id0_28_delay.peek(((root == 0 && I_blurred_downsampled_blurred_r >= 0 && 12 - I_blurred_downsampled_blurred_r >= 0 && I_blurred_downsampled_blurred_c >= 0 && 11 - I_blurred_downsampled_blurred_c >= 0) ? (((222 - 15 * I_blurred_downsampled_blurred_r) - I_blurred_downsampled_blurred_c)) : (-12 + I_blurred_downsampled_blurred_c == 0 && root == 0 && I_blurred_downsampled_blurred_r >= 0 && 12 - I_blurred_downsampled_blurred_r >= 0) ? ((210 - 15 * I_blurred_downsampled_blurred_r)) : 0));
	return value_I_blurred_downsampled_I_blurred_downsampled_id0_28;
}

inline int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_22_select(I_blurred_downsampled_I_blurred_downsampled_id0_28_cache& I_blurred_downsampled_I_blurred_downsampled_id0_28_delay
, int root, int I_blurred_downsampled_blurred_r, int I_blurred_downsampled_blurred_c) {
// Pieces...
// { I_blurred_downsampled_blurred_conv_3_30[root = 0, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] : 0 <= I_blurred_downsampled_blurred_r <= 12 and 0 <= I_blurred_downsampled_blurred_c <= 12 } -> { I_blurred_downsampled_blurred_conv_3_30[root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] -> ((209 - 15 * I_blurred_downsampled_blurred_r) - I_blurred_downsampled_blurred_c) }
// 	is always true on iteration domain: 1
//	is optimizable constant: 0
	int value_I_blurred_downsampled_I_blurred_downsampled_id0_28 = I_blurred_downsampled_I_blurred_downsampled_id0_28_delay.peek(((209 - 15 * I_blurred_downsampled_blurred_r) - I_blurred_downsampled_blurred_c));
	return value_I_blurred_downsampled_I_blurred_downsampled_id0_28;
}

inline int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_23_select(I_blurred_downsampled_I_blurred_downsampled_id0_28_cache& I_blurred_downsampled_I_blurred_downsampled_id0_28_delay
, int root, int I_blurred_downsampled_blurred_r, int I_blurred_downsampled_blurred_c) {
// Pieces...
// { I_blurred_downsampled_blurred_conv_3_30[root = 0, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] : 0 <= I_blurred_downsampled_blurred_r <= 12 and 0 <= I_blurred_downsampled_blurred_c <= 12 } -> { I_blurred_downsampled_blurred_conv_3_30[root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] -> ((208 - 15 * I_blurred_downsampled_blurred_r) - I_blurred_downsampled_blurred_c) }
// 	is always true on iteration domain: 1
//	is optimizable constant: 0
	int value_I_blurred_downsampled_I_blurred_downsampled_id0_28 = I_blurred_downsampled_I_blurred_downsampled_id0_28_delay.peek(((208 - 15 * I_blurred_downsampled_blurred_r) - I_blurred_downsampled_blurred_c));
	return value_I_blurred_downsampled_I_blurred_downsampled_id0_28;
}

inline int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_24_select(I_blurred_downsampled_I_blurred_downsampled_id0_28_cache& I_blurred_downsampled_I_blurred_downsampled_id0_28_delay
, int root, int I_blurred_downsampled_blurred_r, int I_blurred_downsampled_blurred_c) {
// Pieces...
// { I_blurred_downsampled_blurred_conv_3_30[root = 0, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] : 0 <= I_blurred_downsampled_blurred_r <= 12 and 0 <= I_blurred_downsampled_blurred_c <= 11 } -> { I_blurred_downsampled_blurred_conv_3_30[root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] -> ((207 - 15 * I_blurred_downsampled_blurred_r) - I_blurred_downsampled_blurred_c) }
// 	is always true on iteration domain: 0
// { I_blurred_downsampled_blurred_conv_3_30[root = 0, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c = 12] : 0 <= I_blurred_downsampled_blurred_r <= 12 } -> { I_blurred_downsampled_blurred_conv_3_30[root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] -> (195 - 15 * I_blurred_downsampled_blurred_r) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 0
	int value_I_blurred_downsampled_I_blurred_downsampled_id0_28 = I_blurred_downsampled_I_blurred_downsampled_id0_28_delay.peek(((root == 0 && I_blurred_downsampled_blurred_r >= 0 && 12 - I_blurred_downsampled_blurred_r >= 0 && I_blurred_downsampled_blurred_c >= 0 && 11 - I_blurred_downsampled_blurred_c >= 0) ? (((207 - 15 * I_blurred_downsampled_blurred_r) - I_blurred_downsampled_blurred_c)) : (-12 + I_blurred_downsampled_blurred_c == 0 && root == 0 && I_blurred_downsampled_blurred_r >= 0 && 12 - I_blurred_downsampled_blurred_r >= 0) ? ((195 - 15 * I_blurred_downsampled_blurred_r)) : 0));
	return value_I_blurred_downsampled_I_blurred_downsampled_id0_28;
}

inline int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_25_select(I_blurred_downsampled_I_blurred_downsampled_id0_28_cache& I_blurred_downsampled_I_blurred_downsampled_id0_28_delay
, int root, int I_blurred_downsampled_blurred_r, int I_blurred_downsampled_blurred_c) {
// Pieces...
// { I_blurred_downsampled_blurred_conv_3_30[root = 0, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] : 0 <= I_blurred_downsampled_blurred_r <= 11 and 0 <= I_blurred_downsampled_blurred_c <= 12 } -> { I_blurred_downsampled_blurred_conv_3_30[root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] -> ((194 - 15 * I_blurred_downsampled_blurred_r) - I_blurred_downsampled_blurred_c) }
// 	is always true on iteration domain: 0
// { I_blurred_downsampled_blurred_conv_3_30[root = 0, I_blurred_downsampled_blurred_r = 12, I_blurred_downsampled_blurred_c] : 0 <= I_blurred_downsampled_blurred_c <= 12 } -> { I_blurred_downsampled_blurred_conv_3_30[root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] -> (14 - I_blurred_downsampled_blurred_c) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 0
	int value_I_blurred_downsampled_I_blurred_downsampled_id0_28 = I_blurred_downsampled_I_blurred_downsampled_id0_28_delay.peek(((root == 0 && I_blurred_downsampled_blurred_r >= 0 && 11 - I_blurred_downsampled_blurred_r >= 0 && I_blurred_downsampled_blurred_c >= 0 && 12 - I_blurred_downsampled_blurred_c >= 0) ? (((194 - 15 * I_blurred_downsampled_blurred_r) - I_blurred_downsampled_blurred_c)) : (-12 + I_blurred_downsampled_blurred_r == 0 && root == 0 && I_blurred_downsampled_blurred_c >= 0 && 12 - I_blurred_downsampled_blurred_c >= 0) ? ((14 - I_blurred_downsampled_blurred_c)) : 0));
	return value_I_blurred_downsampled_I_blurred_downsampled_id0_28;
}

inline int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_26_select(I_blurred_downsampled_I_blurred_downsampled_id0_28_cache& I_blurred_downsampled_I_blurred_downsampled_id0_28_delay
, int root, int I_blurred_downsampled_blurred_r, int I_blurred_downsampled_blurred_c) {
// Pieces...
// { I_blurred_downsampled_blurred_conv_3_30[root = 0, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] : 0 <= I_blurred_downsampled_blurred_r <= 11 and 0 <= I_blurred_downsampled_blurred_c <= 12 } -> { I_blurred_downsampled_blurred_conv_3_30[root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] -> ((193 - 15 * I_blurred_downsampled_blurred_r) - I_blurred_downsampled_blurred_c) }
// 	is always true on iteration domain: 0
// { I_blurred_downsampled_blurred_conv_3_30[root = 0, I_blurred_downsampled_blurred_r = 12, I_blurred_downsampled_blurred_c] : 0 <= I_blurred_downsampled_blurred_c <= 12 } -> { I_blurred_downsampled_blurred_conv_3_30[root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] -> (13 - I_blurred_downsampled_blurred_c) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 0
	int value_I_blurred_downsampled_I_blurred_downsampled_id0_28 = I_blurred_downsampled_I_blurred_downsampled_id0_28_delay.peek(((root == 0 && I_blurred_downsampled_blurred_r >= 0 && 11 - I_blurred_downsampled_blurred_r >= 0 && I_blurred_downsampled_blurred_c >= 0 && 12 - I_blurred_downsampled_blurred_c >= 0) ? (((193 - 15 * I_blurred_downsampled_blurred_r) - I_blurred_downsampled_blurred_c)) : (-12 + I_blurred_downsampled_blurred_r == 0 && root == 0 && I_blurred_downsampled_blurred_c >= 0 && 12 - I_blurred_downsampled_blurred_c >= 0) ? ((13 - I_blurred_downsampled_blurred_c)) : 0));
	return value_I_blurred_downsampled_I_blurred_downsampled_id0_28;
}

inline int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_27_select(I_blurred_downsampled_I_blurred_downsampled_id0_28_cache& I_blurred_downsampled_I_blurred_downsampled_id0_28_delay
, int root, int I_blurred_downsampled_blurred_r, int I_blurred_downsampled_blurred_c) {
// Pieces...
// { I_blurred_downsampled_blurred_conv_3_30[root = 0, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] : 0 <= I_blurred_downsampled_blurred_r <= 11 and 0 <= I_blurred_downsampled_blurred_c <= 11 } -> { I_blurred_downsampled_blurred_conv_3_30[root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] -> ((192 - 15 * I_blurred_downsampled_blurred_r) - I_blurred_downsampled_blurred_c) }
// 	is always true on iteration domain: 0
// { I_blurred_downsampled_blurred_conv_3_30[root = 0, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c = 12] : 0 <= I_blurred_downsampled_blurred_r <= 11 } -> { I_blurred_downsampled_blurred_conv_3_30[root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] -> (180 - 15 * I_blurred_downsampled_blurred_r) }
// 	is always true on iteration domain: 0
// { I_blurred_downsampled_blurred_conv_3_30[root = 0, I_blurred_downsampled_blurred_r = 12, I_blurred_downsampled_blurred_c] : 0 <= I_blurred_downsampled_blurred_c <= 11 } -> { I_blurred_downsampled_blurred_conv_3_30[root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] -> (12 - I_blurred_downsampled_blurred_c) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 0
	int value_I_blurred_downsampled_I_blurred_downsampled_id0_28 = I_blurred_downsampled_I_blurred_downsampled_id0_28_delay.peek(((root == 0 && I_blurred_downsampled_blurred_r >= 0 && 11 - I_blurred_downsampled_blurred_r >= 0 && I_blurred_downsampled_blurred_c >= 0 && 11 - I_blurred_downsampled_blurred_c >= 0) ? (((192 - 15 * I_blurred_downsampled_blurred_r) - I_blurred_downsampled_blurred_c)) : (-12 + I_blurred_downsampled_blurred_c == 0 && root == 0 && I_blurred_downsampled_blurred_r >= 0 && 11 - I_blurred_downsampled_blurred_r >= 0) ? ((180 - 15 * I_blurred_downsampled_blurred_r)) : (-12 + I_blurred_downsampled_blurred_r == 0 && root == 0 && I_blurred_downsampled_blurred_c >= 0 && 11 - I_blurred_downsampled_blurred_c >= 0) ? ((12 - I_blurred_downsampled_blurred_c)) : 0));
	return value_I_blurred_downsampled_I_blurred_downsampled_id0_28;
}

inline int I_blurred_downsampled_store_I_blurred_downsampled_out_from_I_blurred_downsampled_15_select(I_blurred_downsampled_I_blurred_downsampled_id0_28_cache& I_blurred_downsampled_I_blurred_downsampled_id0_28_delay
, int root, int I_blurred_downsampled_out_r, int I_blurred_downsampled_out_c) {
// Pieces...
// { store_I_blurred_downsampled_out_from_I_blurred_downsampled[root = 0, I_blurred_downsampled_out_r, I_blurred_downsampled_out_c] : 0 <= I_blurred_downsampled_out_r <= 13 and 0 <= I_blurred_downsampled_out_c <= 13 } -> { store_I_blurred_downsampled_out_from_I_blurred_downsampled[root, I_blurred_downsampled_out_r, I_blurred_downsampled_out_c] -> ((224 - 15 * I_blurred_downsampled_out_r) - I_blurred_downsampled_out_c) }
// 	is always true on iteration domain: 0
// { store_I_blurred_downsampled_out_from_I_blurred_downsampled[root = 0, I_blurred_downsampled_out_r, I_blurred_downsampled_out_c = 14] : 0 <= I_blurred_downsampled_out_r <= 13 } -> { store_I_blurred_downsampled_out_from_I_blurred_downsampled[root, I_blurred_downsampled_out_r, I_blurred_downsampled_out_c] -> (210 - 15 * I_blurred_downsampled_out_r) }
// 	is always true on iteration domain: 0
// { store_I_blurred_downsampled_out_from_I_blurred_downsampled[root = 0, I_blurred_downsampled_out_r = 14, I_blurred_downsampled_out_c] : 0 <= I_blurred_downsampled_out_c <= 13 } -> { store_I_blurred_downsampled_out_from_I_blurred_downsampled[root, I_blurred_downsampled_out_r, I_blurred_downsampled_out_c] -> (14 - I_blurred_downsampled_out_c) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 0
	int value_I_blurred_downsampled_I_blurred_downsampled_id0_28 = I_blurred_downsampled_I_blurred_downsampled_id0_28_delay.peek(((root == 0 && I_blurred_downsampled_out_r >= 0 && 13 - I_blurred_downsampled_out_r >= 0 && I_blurred_downsampled_out_c >= 0 && 13 - I_blurred_downsampled_out_c >= 0) ? (((224 - 15 * I_blurred_downsampled_out_r) - I_blurred_downsampled_out_c)) : (-14 + I_blurred_downsampled_out_c == 0 && root == 0 && I_blurred_downsampled_out_r >= 0 && 13 - I_blurred_downsampled_out_r >= 0) ? ((210 - 15 * I_blurred_downsampled_out_r)) : (-14 + I_blurred_downsampled_out_r == 0 && root == 0 && I_blurred_downsampled_out_c >= 0 && 13 - I_blurred_downsampled_out_c >= 0) ? ((14 - I_blurred_downsampled_out_c)) : 0));
	return value_I_blurred_downsampled_I_blurred_downsampled_id0_28;
}

// Bundles...
// I_blurred_downsampled_blurred_conv_3_30_read
//	I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_19
//	I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_20
//	I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_21
//	I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_22
//	I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_23
//	I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_24
//	I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_25
//	I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_26
//	I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_27
inline hw_uint<288> I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_read_bundle_read(I_blurred_downsampled_I_blurred_downsampled_id0_28_cache& I_blurred_downsampled_I_blurred_downsampled_id0_28_delay, int root, int I_blurred_downsampled_blurred_r, int I_blurred_downsampled_blurred_c) {
	hw_uint<288> result;
	int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_19_res = I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_19_select(I_blurred_downsampled_I_blurred_downsampled_id0_28_delay, root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c);
	set_at<0, 288>(result, I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_19_res);
	int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_20_res = I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_20_select(I_blurred_downsampled_I_blurred_downsampled_id0_28_delay, root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c);
	set_at<32, 288>(result, I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_20_res);
	int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_21_res = I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_21_select(I_blurred_downsampled_I_blurred_downsampled_id0_28_delay, root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c);
	set_at<64, 288>(result, I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_21_res);
	int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_22_res = I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_22_select(I_blurred_downsampled_I_blurred_downsampled_id0_28_delay, root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c);
	set_at<96, 288>(result, I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_22_res);
	int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_23_res = I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_23_select(I_blurred_downsampled_I_blurred_downsampled_id0_28_delay, root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c);
	set_at<128, 288>(result, I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_23_res);
	int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_24_res = I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_24_select(I_blurred_downsampled_I_blurred_downsampled_id0_28_delay, root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c);
	set_at<160, 288>(result, I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_24_res);
	int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_25_res = I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_25_select(I_blurred_downsampled_I_blurred_downsampled_id0_28_delay, root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c);
	set_at<192, 288>(result, I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_25_res);
	int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_26_res = I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_26_select(I_blurred_downsampled_I_blurred_downsampled_id0_28_delay, root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c);
	set_at<224, 288>(result, I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_26_res);
	int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_27_res = I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_27_select(I_blurred_downsampled_I_blurred_downsampled_id0_28_delay, root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c);
	set_at<256, 288>(result, I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_27_res);
	return result;
}

// I_blurred_downsampled_id0_write
//	I_blurred_downsampled_I_blurred_downsampled_id0_28
inline void I_blurred_downsampled_I_blurred_downsampled_id0_write_bundle_write(int& /* width = 32*/I_blurred_downsampled_id0_write, I_blurred_downsampled_I_blurred_downsampled_id0_28_cache& I_blurred_downsampled_I_blurred_downsampled_id0_28_delay) {
	I_blurred_downsampled_I_blurred_downsampled_id0_28_write(I_blurred_downsampled_id0_write, I_blurred_downsampled_I_blurred_downsampled_id0_28_delay);
}

// store_I_blurred_downsampled_out_from_I_blurred_downsampled_read
//	I_blurred_downsampled_store_I_blurred_downsampled_out_from_I_blurred_downsampled_15
inline int I_blurred_downsampled_store_I_blurred_downsampled_out_from_I_blurred_downsampled_read_bundle_read(I_blurred_downsampled_I_blurred_downsampled_id0_28_cache& I_blurred_downsampled_I_blurred_downsampled_id0_28_delay, int root, int I_blurred_downsampled_out_r, int I_blurred_downsampled_out_c) {
	int result;
	int I_blurred_downsampled_store_I_blurred_downsampled_out_from_I_blurred_downsampled_15_res = I_blurred_downsampled_store_I_blurred_downsampled_out_from_I_blurred_downsampled_15_select(I_blurred_downsampled_I_blurred_downsampled_id0_28_delay, root, I_blurred_downsampled_out_r, I_blurred_downsampled_out_c);
	set_at<0, 32>(result, I_blurred_downsampled_store_I_blurred_downsampled_out_from_I_blurred_downsampled_15_res);
	return result;
}



#include "hw_classes.h"

struct I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_18_cache {
	// Capacity: 169
	fifo<int, 169> f;
	inline int peek(const int offset) {
		return f.peek(168 - offset);
	}



	inline void push(const int value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		return f.push(value);
	}

};



inline void I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_18_write(int& I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_18, I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_18_cache& I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_18_delay) {
	I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_18_delay.push(I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_18);
}

inline int I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_downsampled_id0_13_select(I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_18_cache& I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_18_delay
, int root, int I_blurred_downsampled_blurred_downsampled_r, int I_blurred_downsampled_blurred_downsampled_c) {
// Pieces...
// { I_blurred_downsampled_blurred_downsampled_id0[root = 0, I_blurred_downsampled_blurred_downsampled_r, I_blurred_downsampled_blurred_downsampled_c] : 0 <= I_blurred_downsampled_blurred_downsampled_r <= 5 and 0 <= I_blurred_downsampled_blurred_downsampled_c <= 5 } -> { I_blurred_downsampled_blurred_downsampled_id0[root, I_blurred_downsampled_blurred_downsampled_r, I_blurred_downsampled_blurred_downsampled_c] -> ((168 - 26 * I_blurred_downsampled_blurred_downsampled_r) - 2 * I_blurred_downsampled_blurred_downsampled_c) }
// 	is always true on iteration domain: 1
//	is optimizable constant: 0
	int value_I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_18 = I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_18_delay.peek(((168 - 26 * I_blurred_downsampled_blurred_downsampled_r) - 2 * I_blurred_downsampled_blurred_downsampled_c));
	return value_I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_18;
}

// Bundles...
// I_blurred_downsampled_blurred_conv_3_30_write
//	I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_18
inline void I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_write_bundle_write(int& /* width = 32*/I_blurred_downsampled_blurred_conv_3_30_write, I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_18_cache& I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_18_delay) {
	I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_18_write(I_blurred_downsampled_blurred_conv_3_30_write, I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_18_delay);
}

// I_blurred_downsampled_blurred_downsampled_id0_read
//	I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_downsampled_id0_13
inline int I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_downsampled_id0_read_bundle_read(I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_18_cache& I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_18_delay, int root, int I_blurred_downsampled_blurred_downsampled_r, int I_blurred_downsampled_blurred_downsampled_c) {
	int result;
	int I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_downsampled_id0_13_res = I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_downsampled_id0_13_select(I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_18_delay, root, I_blurred_downsampled_blurred_downsampled_r, I_blurred_downsampled_blurred_downsampled_c);
	set_at<0, 32>(result, I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_downsampled_id0_13_res);
	return result;
}



#include "hw_classes.h"

struct I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_12_cache {
	// Capacity: 36
	fifo<int, 36> f;
	inline int peek(const int offset) {
		return f.peek(35 - offset);
	}



	inline void push(const int value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		return f.push(value);
	}

};



inline void I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_12_write(int& I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_12, I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_12_cache& I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_12_delay) {
	I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_12_delay.push(I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_12);
}

inline int I_blurred_downsampled_blurred_downsampled_store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled_17_select(I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_12_cache& I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_12_delay
, int root, int I_blurred_downsampled_blurred_downsampled_out_r, int I_blurred_downsampled_blurred_downsampled_out_c) {
// Pieces...
// { store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled[root = 0, I_blurred_downsampled_blurred_downsampled_out_r, I_blurred_downsampled_blurred_downsampled_out_c] : 0 <= I_blurred_downsampled_blurred_downsampled_out_r <= 4 and 0 <= I_blurred_downsampled_blurred_downsampled_out_c <= 4 } -> { store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled[root, I_blurred_downsampled_blurred_downsampled_out_r, I_blurred_downsampled_blurred_downsampled_out_c] -> ((35 - 6 * I_blurred_downsampled_blurred_downsampled_out_r) - I_blurred_downsampled_blurred_downsampled_out_c) }
// 	is always true on iteration domain: 0
// { store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled[root = 0, I_blurred_downsampled_blurred_downsampled_out_r, I_blurred_downsampled_blurred_downsampled_out_c = 5] : 0 <= I_blurred_downsampled_blurred_downsampled_out_r <= 4 } -> { store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled[root, I_blurred_downsampled_blurred_downsampled_out_r, I_blurred_downsampled_blurred_downsampled_out_c] -> (30 - 6 * I_blurred_downsampled_blurred_downsampled_out_r) }
// 	is always true on iteration domain: 0
// { store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled[root = 0, I_blurred_downsampled_blurred_downsampled_out_r = 5, I_blurred_downsampled_blurred_downsampled_out_c] : 0 <= I_blurred_downsampled_blurred_downsampled_out_c <= 4 } -> { store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled[root, I_blurred_downsampled_blurred_downsampled_out_r, I_blurred_downsampled_blurred_downsampled_out_c] -> (5 - I_blurred_downsampled_blurred_downsampled_out_c) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 0
	int value_I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_12 = I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_12_delay.peek(((root == 0 && I_blurred_downsampled_blurred_downsampled_out_r >= 0 && 4 - I_blurred_downsampled_blurred_downsampled_out_r >= 0 && I_blurred_downsampled_blurred_downsampled_out_c >= 0 && 4 - I_blurred_downsampled_blurred_downsampled_out_c >= 0) ? (((35 - 6 * I_blurred_downsampled_blurred_downsampled_out_r) - I_blurred_downsampled_blurred_downsampled_out_c)) : (-5 + I_blurred_downsampled_blurred_downsampled_out_c == 0 && root == 0 && I_blurred_downsampled_blurred_downsampled_out_r >= 0 && 4 - I_blurred_downsampled_blurred_downsampled_out_r >= 0) ? ((30 - 6 * I_blurred_downsampled_blurred_downsampled_out_r)) : (-5 + I_blurred_downsampled_blurred_downsampled_out_r == 0 && root == 0 && I_blurred_downsampled_blurred_downsampled_out_c >= 0 && 4 - I_blurred_downsampled_blurred_downsampled_out_c >= 0) ? ((5 - I_blurred_downsampled_blurred_downsampled_out_c)) : 0));
	return value_I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_12;
}

// Bundles...
// I_blurred_downsampled_blurred_downsampled_id0_write
//	I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_12
inline void I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_write_bundle_write(int& /* width = 32*/I_blurred_downsampled_blurred_downsampled_id0_write, I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_12_cache& I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_12_delay) {
	I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_12_write(I_blurred_downsampled_blurred_downsampled_id0_write, I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_12_delay);
}

// store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled_read
//	I_blurred_downsampled_blurred_downsampled_store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled_17
inline int I_blurred_downsampled_blurred_downsampled_store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled_read_bundle_read(I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_12_cache& I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_12_delay, int root, int I_blurred_downsampled_blurred_downsampled_out_r, int I_blurred_downsampled_blurred_downsampled_out_c) {
	int result;
	int I_blurred_downsampled_blurred_downsampled_store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled_17_res = I_blurred_downsampled_blurred_downsampled_store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled_17_select(I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_12_delay, root, I_blurred_downsampled_blurred_downsampled_out_r, I_blurred_downsampled_blurred_downsampled_out_c);
	set_at<0, 32>(result, I_blurred_downsampled_blurred_downsampled_store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled_17_res);
	return result;
}





// Operation logic
inline void store_I_from_in(HWStream<int>& in, I_store_I_from_in_0_cache& I_store_I_from_in_0, int root, int pr, int pc) {
	// Consume: in
	auto in_pr_c__pc_value = in.read();
	// Produce: I
	// Buffer: I, Op: store_I_from_in
	// Possible ports...
		// I_store_I_from_in_0
	I_store_I_from_in_write_bundle_write(in_pr_c__pc_value, I_store_I_from_in_0 /* output src_delay */);
}

inline void I_blurred_conv_3_30(I_store_I_from_in_0_cache& I_store_I_from_in_0, I_blurred_I_blurred_conv_3_30_2_cache& I_blurred_I_blurred_conv_3_30_2, int root, int I_blurred_r, int I_blurred_c) {
	// Consume: I
	auto I_I_blurred_r__p__0_c__I_blurred_c__p__0_value = I_I_blurred_conv_3_30_read_bundle_read(I_store_I_from_in_0/* source_delay */, root, I_blurred_r, I_blurred_c);
	// Apply function: conv_3_3
	// Arg: I_I_blurred_r__p__0_c__I_blurred_c__p__0_value
	// Arg buf: I
	// Arg: I_I_blurred_r__p__0_c__I_blurred_c__p__1_value
	// Arg buf: I
	// Arg: I_I_blurred_r__p__0_c__I_blurred_c__p__2_value
	// Arg buf: I
	// Arg: I_I_blurred_r__p__1_c__I_blurred_c__p__0_value
	// Arg buf: I
	// Arg: I_I_blurred_r__p__1_c__I_blurred_c__p__1_value
	// Arg buf: I
	// Arg: I_I_blurred_r__p__1_c__I_blurred_c__p__2_value
	// Arg buf: I
	// Arg: I_I_blurred_r__p__2_c__I_blurred_c__p__0_value
	// Arg buf: I
	// Arg: I_I_blurred_r__p__2_c__I_blurred_c__p__1_value
	// Arg buf: I
	// Arg: I_I_blurred_r__p__2_c__I_blurred_c__p__2_value
	// Arg buf: I
	auto compute_result = conv_3_3(I_I_blurred_r__p__0_c__I_blurred_c__p__0_value);
	// Produce: I_blurred
	// Buffer: I_blurred, Op: I_blurred_conv_3_30
	// Possible ports...
		// I_blurred_I_blurred_conv_3_30_2
	I_blurred_I_blurred_conv_3_30_write_bundle_write(compute_result, I_blurred_I_blurred_conv_3_30_2 /* output src_delay */);
}

inline void I_blurred_downsampled_blurred_downsampled_id0(I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_18_cache& I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_18, I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_12_cache& I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_12, int root, int I_blurred_downsampled_blurred_downsampled_r, int I_blurred_downsampled_blurred_downsampled_c) {
	// Consume: I_blurred_downsampled_blurred
	auto I_blurred_downsampled_blurred_2_m_I_blurred_downsampled_blurred_downsampled_r_c__2_m_I_blurred_downsampled_blurred_downsampled_c_value = I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_downsampled_id0_read_bundle_read(I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_18/* source_delay */, root, I_blurred_downsampled_blurred_downsampled_r, I_blurred_downsampled_blurred_downsampled_c);
	// Apply function: id
	// Arg: I_blurred_downsampled_blurred_2_m_I_blurred_downsampled_blurred_downsampled_r_c__2_m_I_blurred_downsampled_blurred_downsampled_c_value
	// Arg buf: I_blurred_downsampled_blurred
	auto compute_result = id(I_blurred_downsampled_blurred_2_m_I_blurred_downsampled_blurred_downsampled_r_c__2_m_I_blurred_downsampled_blurred_downsampled_c_value);
	// Produce: I_blurred_downsampled_blurred_downsampled
	// Buffer: I_blurred_downsampled_blurred_downsampled, Op: I_blurred_downsampled_blurred_downsampled_id0
	// Possible ports...
		// I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_12
	I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_write_bundle_write(compute_result, I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_12 /* output src_delay */);
}

inline void store_I_blurred_downsampled_out_from_I_blurred_downsampled(I_blurred_downsampled_I_blurred_downsampled_id0_28_cache& I_blurred_downsampled_I_blurred_downsampled_id0_28, HWStream<int>& I_blurred_downsampled_out, int root, int I_blurred_downsampled_out_r, int I_blurred_downsampled_out_c) {
	// Consume: I_blurred_downsampled
	auto I_blurred_downsampled_I_blurred_downsampled_out_r_c__I_blurred_downsampled_out_c_value = I_blurred_downsampled_store_I_blurred_downsampled_out_from_I_blurred_downsampled_read_bundle_read(I_blurred_downsampled_I_blurred_downsampled_id0_28/* source_delay */, root, I_blurred_downsampled_out_r, I_blurred_downsampled_out_c);
	// Produce: I_blurred_downsampled_out
	I_blurred_downsampled_out.write(I_blurred_downsampled_I_blurred_downsampled_out_r_c__I_blurred_downsampled_out_c_value);
}

inline void store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled(I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_12_cache& I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_12, HWStream<int>& I_blurred_downsampled_blurred_downsampled_out, int root, int I_blurred_downsampled_blurred_downsampled_out_r, int I_blurred_downsampled_blurred_downsampled_out_c) {
	// Consume: I_blurred_downsampled_blurred_downsampled
	auto I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_out_r_c__I_blurred_downsampled_blurred_downsampled_out_c_value = I_blurred_downsampled_blurred_downsampled_store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled_read_bundle_read(I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_12/* source_delay */, root, I_blurred_downsampled_blurred_downsampled_out_r, I_blurred_downsampled_blurred_downsampled_out_c);
	// Produce: I_blurred_downsampled_blurred_downsampled_out
	I_blurred_downsampled_blurred_downsampled_out.write(I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_out_r_c__I_blurred_downsampled_blurred_downsampled_out_c_value);
}

inline void I_blurred_downsampled_blurred_conv_3_30(I_blurred_downsampled_I_blurred_downsampled_id0_28_cache& I_blurred_downsampled_I_blurred_downsampled_id0_28, I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_18_cache& I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_18, int root, int I_blurred_downsampled_blurred_r, int I_blurred_downsampled_blurred_c) {
	// Consume: I_blurred_downsampled
	auto I_blurred_downsampled_I_blurred_downsampled_blurred_r__p__0_c__I_blurred_downsampled_blurred_c__p__0_value = I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_read_bundle_read(I_blurred_downsampled_I_blurred_downsampled_id0_28/* source_delay */, root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c);
	// Apply function: conv_3_3
	// Arg: I_blurred_downsampled_I_blurred_downsampled_blurred_r__p__0_c__I_blurred_downsampled_blurred_c__p__0_value
	// Arg buf: I_blurred_downsampled
	// Arg: I_blurred_downsampled_I_blurred_downsampled_blurred_r__p__0_c__I_blurred_downsampled_blurred_c__p__1_value
	// Arg buf: I_blurred_downsampled
	// Arg: I_blurred_downsampled_I_blurred_downsampled_blurred_r__p__0_c__I_blurred_downsampled_blurred_c__p__2_value
	// Arg buf: I_blurred_downsampled
	// Arg: I_blurred_downsampled_I_blurred_downsampled_blurred_r__p__1_c__I_blurred_downsampled_blurred_c__p__0_value
	// Arg buf: I_blurred_downsampled
	// Arg: I_blurred_downsampled_I_blurred_downsampled_blurred_r__p__1_c__I_blurred_downsampled_blurred_c__p__1_value
	// Arg buf: I_blurred_downsampled
	// Arg: I_blurred_downsampled_I_blurred_downsampled_blurred_r__p__1_c__I_blurred_downsampled_blurred_c__p__2_value
	// Arg buf: I_blurred_downsampled
	// Arg: I_blurred_downsampled_I_blurred_downsampled_blurred_r__p__2_c__I_blurred_downsampled_blurred_c__p__0_value
	// Arg buf: I_blurred_downsampled
	// Arg: I_blurred_downsampled_I_blurred_downsampled_blurred_r__p__2_c__I_blurred_downsampled_blurred_c__p__1_value
	// Arg buf: I_blurred_downsampled
	// Arg: I_blurred_downsampled_I_blurred_downsampled_blurred_r__p__2_c__I_blurred_downsampled_blurred_c__p__2_value
	// Arg buf: I_blurred_downsampled
	auto compute_result = conv_3_3(I_blurred_downsampled_I_blurred_downsampled_blurred_r__p__0_c__I_blurred_downsampled_blurred_c__p__0_value);
	// Produce: I_blurred_downsampled_blurred
	// Buffer: I_blurred_downsampled_blurred, Op: I_blurred_downsampled_blurred_conv_3_30
	// Possible ports...
		// I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_18
	I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_write_bundle_write(compute_result, I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_18 /* output src_delay */);
}

inline void I_blurred_downsampled_id0(I_blurred_I_blurred_conv_3_30_2_cache& I_blurred_I_blurred_conv_3_30_2, I_blurred_downsampled_I_blurred_downsampled_id0_28_cache& I_blurred_downsampled_I_blurred_downsampled_id0_28, int root, int I_blurred_downsampled_r, int I_blurred_downsampled_c) {
	// Consume: I_blurred
	auto I_blurred_2_m_I_blurred_downsampled_r_c__2_m_I_blurred_downsampled_c_value = I_blurred_I_blurred_downsampled_id0_read_bundle_read(I_blurred_I_blurred_conv_3_30_2/* source_delay */, root, I_blurred_downsampled_r, I_blurred_downsampled_c);
	// Apply function: id
	// Arg: I_blurred_2_m_I_blurred_downsampled_r_c__2_m_I_blurred_downsampled_c_value
	// Arg buf: I_blurred
	auto compute_result = id(I_blurred_2_m_I_blurred_downsampled_r_c__2_m_I_blurred_downsampled_c_value);
	// Produce: I_blurred_downsampled
	// Buffer: I_blurred_downsampled, Op: I_blurred_downsampled_id0
	// Possible ports...
		// I_blurred_downsampled_I_blurred_downsampled_id0_28
	I_blurred_downsampled_I_blurred_downsampled_id0_write_bundle_write(compute_result, I_blurred_downsampled_I_blurred_downsampled_id0_28 /* output src_delay */);
}

// Driver function
void unoptimized_gaussian_pyramid(HWStream<int>& in, HWStream<int>& I_blurred_downsampled_blurred_downsampled_out, HWStream<int>& I_blurred_downsampled_out) {
	I_store_I_from_in_0_cache I_store_I_from_in_0;
	I_blurred_I_blurred_conv_3_30_2_cache I_blurred_I_blurred_conv_3_30_2;
	I_blurred_downsampled_I_blurred_downsampled_id0_28_cache I_blurred_downsampled_I_blurred_downsampled_id0_28;
	I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_18_cache I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_18;
	I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_12_cache I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_12;
	{
	  for (int c3 = 0; c3 <= 31; c3 += 1)
	    for (int c5 = 0; c5 <= 31; c5 += 1)
	      store_I_from_in(in, I_store_I_from_in_0, 0, c3, c5);
	  for (int c3 = 0; c3 <= 29; c3 += 1)
	    for (int c5 = 0; c5 <= 29; c5 += 1)
	      I_blurred_conv_3_30(I_store_I_from_in_0, I_blurred_I_blurred_conv_3_30_2, 0, c3, c5);
	  for (int c3 = 0; c3 <= 14; c3 += 1)
	    for (int c5 = 0; c5 <= 14; c5 += 1)
	      I_blurred_downsampled_id0(I_blurred_I_blurred_conv_3_30_2, I_blurred_downsampled_I_blurred_downsampled_id0_28, 0, c3, c5);
	  for (int c3 = 0; c3 <= 12; c3 += 1)
	    for (int c5 = 0; c5 <= 12; c5 += 1)
	      I_blurred_downsampled_blurred_conv_3_30(I_blurred_downsampled_I_blurred_downsampled_id0_28, I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_18, 0, c3, c5);
	  for (int c3 = 0; c3 <= 5; c3 += 1)
	    for (int c5 = 0; c5 <= 5; c5 += 1)
	      I_blurred_downsampled_blurred_downsampled_id0(I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_18, I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_12, 0, c3, c5);
	  for (int c3 = 0; c3 <= 14; c3 += 1)
	    for (int c5 = 0; c5 <= 14; c5 += 1)
	      store_I_blurred_downsampled_out_from_I_blurred_downsampled(I_blurred_downsampled_I_blurred_downsampled_id0_28, I_blurred_downsampled_out, 0, c3, c5);
	  for (int c3 = 0; c3 <= 5; c3 += 1)
	    for (int c5 = 0; c5 <= 5; c5 += 1)
	      store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled(I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_12, I_blurred_downsampled_blurred_downsampled_out, 0, c3, c5);
	}
	
}
