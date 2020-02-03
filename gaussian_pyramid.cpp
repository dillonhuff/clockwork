#include "conv_3x3.h"

#include "hw_classes.h"

struct I_store_I_from_in_18_cache {
	// Capacity: 67
	// Parition [0, 1) capacity = 1
	fifo<int, 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<int, 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<int, 1> f4;
	// Parition [3, 32) capacity = 29
	fifo<int, 29> f5;
	// Parition [32, 33) capacity = 1
	fifo<int, 1> f6;
	// Parition [33, 34) capacity = 1
	fifo<int, 1> f8;
	// Parition [34, 35) capacity = 1
	fifo<int, 1> f10;
	// Parition [35, 64) capacity = 29
	fifo<int, 29> f11;
	// Parition [64, 65) capacity = 1
	fifo<int, 1> f12;
	// Parition [65, 66) capacity = 1
	fifo<int, 1> f14;
	// Parition [66, 66] capacity = 1
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

	inline int peek_31() {
		return f5.back();
	}

	inline int peek_32() {
		return f6.back();
	}

	inline int peek_33() {
		return f8.back();
	}

	inline int peek_34() {
		return f10.back();
	}

	inline int peek_63() {
		return f11.back();
	}

	inline int peek_64() {
		return f12.back();
	}

	inline int peek_65() {
		return f14.back();
	}

	inline int peek_66() {
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
		if (offset == 31) {
			return f5.back();
		}
		if (offset == 32) {
			return f6.back();
		}
		if (offset == 33) {
			return f8.back();
		}
		if (offset == 34) {
			return f10.back();
		}
		if (offset == 63) {
			return f11.back();
		}
		if (offset == 64) {
			return f12.back();
		}
		if (offset == 65) {
			return f14.back();
		}
		if (offset == 66) {
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



inline void I_store_I_from_in_18_write(int& I_store_I_from_in_18, I_store_I_from_in_18_cache& I_store_I_from_in_18_delay) {
	I_store_I_from_in_18_delay.push(I_store_I_from_in_18);
}

inline int I_I_blurred_conv_3_30_21_select(I_store_I_from_in_18_cache& I_store_I_from_in_18_delay
, int root, int I_blurred_r, int I_blurred_c) {
// Pieces...
// { I_blurred_conv_3_30[root = 0, I_blurred_r, I_blurred_c] : 0 <= I_blurred_r <= 29 and 0 <= I_blurred_c <= 29 } -> { I_blurred_conv_3_30[root, I_blurred_r, I_blurred_c] -> 66 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_store_I_from_in_18 = I_store_I_from_in_18_delay.peek_66();
	return value_I_store_I_from_in_18;
}

inline int I_I_blurred_conv_3_30_22_select(I_store_I_from_in_18_cache& I_store_I_from_in_18_delay
, int root, int I_blurred_r, int I_blurred_c) {
// Pieces...
// { I_blurred_conv_3_30[root = 0, I_blurred_r, I_blurred_c] : 0 <= I_blurred_r <= 29 and 0 <= I_blurred_c <= 29 } -> { I_blurred_conv_3_30[root, I_blurred_r, I_blurred_c] -> 65 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_store_I_from_in_18 = I_store_I_from_in_18_delay.peek_65();
	return value_I_store_I_from_in_18;
}

inline int I_I_blurred_conv_3_30_23_select(I_store_I_from_in_18_cache& I_store_I_from_in_18_delay
, int root, int I_blurred_r, int I_blurred_c) {
// Pieces...
// { I_blurred_conv_3_30[root = 0, I_blurred_r, I_blurred_c] : 0 <= I_blurred_r <= 29 and 0 <= I_blurred_c <= 28 } -> { I_blurred_conv_3_30[root, I_blurred_r, I_blurred_c] -> 64 }
// 	is always true on iteration domain: 0
// { I_blurred_conv_3_30[root = 0, I_blurred_r, I_blurred_c = 29] : 0 <= I_blurred_r <= 29 } -> { I_blurred_conv_3_30[root, I_blurred_r, I_blurred_c] -> (35 + I_blurred_c) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 1
	int value_I_store_I_from_in_18 = I_store_I_from_in_18_delay.peek_64();
	return value_I_store_I_from_in_18;
}

inline int I_I_blurred_conv_3_30_24_select(I_store_I_from_in_18_cache& I_store_I_from_in_18_delay
, int root, int I_blurred_r, int I_blurred_c) {
// Pieces...
// { I_blurred_conv_3_30[root = 0, I_blurred_r, I_blurred_c] : 0 <= I_blurred_r <= 29 and 0 <= I_blurred_c <= 29 } -> { I_blurred_conv_3_30[root, I_blurred_r, I_blurred_c] -> 34 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_store_I_from_in_18 = I_store_I_from_in_18_delay.peek_34();
	return value_I_store_I_from_in_18;
}

inline int I_I_blurred_conv_3_30_25_select(I_store_I_from_in_18_cache& I_store_I_from_in_18_delay
, int root, int I_blurred_r, int I_blurred_c) {
// Pieces...
// { I_blurred_conv_3_30[root = 0, I_blurred_r, I_blurred_c] : 0 <= I_blurred_r <= 29 and 0 <= I_blurred_c <= 29 } -> { I_blurred_conv_3_30[root, I_blurred_r, I_blurred_c] -> 33 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_store_I_from_in_18 = I_store_I_from_in_18_delay.peek_33();
	return value_I_store_I_from_in_18;
}

inline int I_I_blurred_conv_3_30_26_select(I_store_I_from_in_18_cache& I_store_I_from_in_18_delay
, int root, int I_blurred_r, int I_blurred_c) {
// Pieces...
// { I_blurred_conv_3_30[root = 0, I_blurred_r, I_blurred_c] : 0 <= I_blurred_r <= 29 and 0 <= I_blurred_c <= 28 } -> { I_blurred_conv_3_30[root, I_blurred_r, I_blurred_c] -> 32 }
// 	is always true on iteration domain: 0
// { I_blurred_conv_3_30[root = 0, I_blurred_r, I_blurred_c = 29] : 0 <= I_blurred_r <= 29 } -> { I_blurred_conv_3_30[root, I_blurred_r, I_blurred_c] -> (3 + I_blurred_c) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 1
	int value_I_store_I_from_in_18 = I_store_I_from_in_18_delay.peek_32();
	return value_I_store_I_from_in_18;
}

inline int I_I_blurred_conv_3_30_27_select(I_store_I_from_in_18_cache& I_store_I_from_in_18_delay
, int root, int I_blurred_r, int I_blurred_c) {
// Pieces...
// { I_blurred_conv_3_30[root = 0, I_blurred_r, I_blurred_c] : 0 <= I_blurred_r <= 29 and 0 <= I_blurred_c <= 29 } -> { I_blurred_conv_3_30[root, I_blurred_r, I_blurred_c] -> 2 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_store_I_from_in_18 = I_store_I_from_in_18_delay.peek_2();
	return value_I_store_I_from_in_18;
}

inline int I_I_blurred_conv_3_30_28_select(I_store_I_from_in_18_cache& I_store_I_from_in_18_delay
, int root, int I_blurred_r, int I_blurred_c) {
// Pieces...
// { I_blurred_conv_3_30[root = 0, I_blurred_r, I_blurred_c] : 0 <= I_blurred_r <= 29 and 0 <= I_blurred_c <= 29 } -> { I_blurred_conv_3_30[root, I_blurred_r, I_blurred_c] -> 1 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_store_I_from_in_18 = I_store_I_from_in_18_delay.peek_1();
	return value_I_store_I_from_in_18;
}

inline int I_I_blurred_conv_3_30_29_select(I_store_I_from_in_18_cache& I_store_I_from_in_18_delay
, int root, int I_blurred_r, int I_blurred_c) {
// Pieces...
//	is optimizable constant: 0
	int value_I_store_I_from_in_18 = I_store_I_from_in_18_delay.peek_0();
	return value_I_store_I_from_in_18;
}

// Bundles...
// I_blurred_conv_3_30_read
//	I_I_blurred_conv_3_30_21
//	I_I_blurred_conv_3_30_22
//	I_I_blurred_conv_3_30_23
//	I_I_blurred_conv_3_30_24
//	I_I_blurred_conv_3_30_25
//	I_I_blurred_conv_3_30_26
//	I_I_blurred_conv_3_30_27
//	I_I_blurred_conv_3_30_28
//	I_I_blurred_conv_3_30_29
inline hw_uint<288> I_I_blurred_conv_3_30_read_bundle_read(I_store_I_from_in_18_cache& I_store_I_from_in_18_delay, int root, int I_blurred_r, int I_blurred_c) {
	hw_uint<288> result;
	int I_I_blurred_conv_3_30_21_res = I_I_blurred_conv_3_30_21_select(I_store_I_from_in_18_delay, root, I_blurred_r, I_blurred_c);
	set_at<0, 288>(result, I_I_blurred_conv_3_30_21_res);
	int I_I_blurred_conv_3_30_22_res = I_I_blurred_conv_3_30_22_select(I_store_I_from_in_18_delay, root, I_blurred_r, I_blurred_c);
	set_at<32, 288>(result, I_I_blurred_conv_3_30_22_res);
	int I_I_blurred_conv_3_30_23_res = I_I_blurred_conv_3_30_23_select(I_store_I_from_in_18_delay, root, I_blurred_r, I_blurred_c);
	set_at<64, 288>(result, I_I_blurred_conv_3_30_23_res);
	int I_I_blurred_conv_3_30_24_res = I_I_blurred_conv_3_30_24_select(I_store_I_from_in_18_delay, root, I_blurred_r, I_blurred_c);
	set_at<96, 288>(result, I_I_blurred_conv_3_30_24_res);
	int I_I_blurred_conv_3_30_25_res = I_I_blurred_conv_3_30_25_select(I_store_I_from_in_18_delay, root, I_blurred_r, I_blurred_c);
	set_at<128, 288>(result, I_I_blurred_conv_3_30_25_res);
	int I_I_blurred_conv_3_30_26_res = I_I_blurred_conv_3_30_26_select(I_store_I_from_in_18_delay, root, I_blurred_r, I_blurred_c);
	set_at<160, 288>(result, I_I_blurred_conv_3_30_26_res);
	int I_I_blurred_conv_3_30_27_res = I_I_blurred_conv_3_30_27_select(I_store_I_from_in_18_delay, root, I_blurred_r, I_blurred_c);
	set_at<192, 288>(result, I_I_blurred_conv_3_30_27_res);
	int I_I_blurred_conv_3_30_28_res = I_I_blurred_conv_3_30_28_select(I_store_I_from_in_18_delay, root, I_blurred_r, I_blurred_c);
	set_at<224, 288>(result, I_I_blurred_conv_3_30_28_res);
	int I_I_blurred_conv_3_30_29_res = I_I_blurred_conv_3_30_29_select(I_store_I_from_in_18_delay, root, I_blurred_r, I_blurred_c);
	set_at<256, 288>(result, I_I_blurred_conv_3_30_29_res);
	return result;
}

// store_I_from_in_write
//	I_store_I_from_in_18
inline void I_store_I_from_in_write_bundle_write(int& /* width = 32*/store_I_from_in_write, I_store_I_from_in_18_cache& I_store_I_from_in_18_delay) {
	I_store_I_from_in_18_write(store_I_from_in_write, I_store_I_from_in_18_delay);
}



#include "hw_classes.h"

struct I_blurred_I_blurred_conv_3_30_20_cache {
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



inline void I_blurred_I_blurred_conv_3_30_20_write(int& I_blurred_I_blurred_conv_3_30_20, I_blurred_I_blurred_conv_3_30_20_cache& I_blurred_I_blurred_conv_3_30_20_delay) {
	I_blurred_I_blurred_conv_3_30_20_delay.push(I_blurred_I_blurred_conv_3_30_20);
}

inline int I_blurred_I_blurred_downsampled_id0_17_select(I_blurred_I_blurred_conv_3_30_20_cache& I_blurred_I_blurred_conv_3_30_20_delay
, int root, int I_blurred_downsampled_r, int I_blurred_downsampled_c) {
// Pieces...
//	is optimizable constant: 0
	int value_I_blurred_I_blurred_conv_3_30_20 = I_blurred_I_blurred_conv_3_30_20_delay.peek_0();
	return value_I_blurred_I_blurred_conv_3_30_20;
}

// Bundles...
// I_blurred_conv_3_30_write
//	I_blurred_I_blurred_conv_3_30_20
inline void I_blurred_I_blurred_conv_3_30_write_bundle_write(int& /* width = 32*/I_blurred_conv_3_30_write, I_blurred_I_blurred_conv_3_30_20_cache& I_blurred_I_blurred_conv_3_30_20_delay) {
	I_blurred_I_blurred_conv_3_30_20_write(I_blurred_conv_3_30_write, I_blurred_I_blurred_conv_3_30_20_delay);
}

// I_blurred_downsampled_id0_read
//	I_blurred_I_blurred_downsampled_id0_17
inline int I_blurred_I_blurred_downsampled_id0_read_bundle_read(I_blurred_I_blurred_conv_3_30_20_cache& I_blurred_I_blurred_conv_3_30_20_delay, int root, int I_blurred_downsampled_r, int I_blurred_downsampled_c) {
	int result;
	int I_blurred_I_blurred_downsampled_id0_17_res = I_blurred_I_blurred_downsampled_id0_17_select(I_blurred_I_blurred_conv_3_30_20_delay, root, I_blurred_downsampled_r, I_blurred_downsampled_c);
	set_at<0, 32>(result, I_blurred_I_blurred_downsampled_id0_17_res);
	return result;
}



#include "hw_classes.h"

struct I_blurred_downsampled_I_blurred_downsampled_id0_16_cache {
	// Capacity: 33
	// Parition [0, 1) capacity = 1
	fifo<int, 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<int, 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<int, 1> f4;
	// Parition [3, 15) capacity = 12
	fifo<int, 12> f5;
	// Parition [15, 16) capacity = 1
	fifo<int, 1> f6;
	// Parition [16, 17) capacity = 1
	fifo<int, 1> f8;
	// Parition [17, 18) capacity = 1
	fifo<int, 1> f10;
	// Parition [18, 30) capacity = 12
	fifo<int, 12> f11;
	// Parition [30, 31) capacity = 1
	fifo<int, 1> f12;
	// Parition [31, 32) capacity = 1
	fifo<int, 1> f14;
	// Parition [32, 32] capacity = 1
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

	inline int peek_14() {
		return f5.back();
	}

	inline int peek_15() {
		return f6.back();
	}

	inline int peek_16() {
		return f8.back();
	}

	inline int peek_17() {
		return f10.back();
	}

	inline int peek_29() {
		return f11.back();
	}

	inline int peek_30() {
		return f12.back();
	}

	inline int peek_31() {
		return f14.back();
	}

	inline int peek_32() {
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
		if (offset == 14) {
			return f5.back();
		}
		if (offset == 15) {
			return f6.back();
		}
		if (offset == 16) {
			return f8.back();
		}
		if (offset == 17) {
			return f10.back();
		}
		if (offset == 29) {
			return f11.back();
		}
		if (offset == 30) {
			return f12.back();
		}
		if (offset == 31) {
			return f14.back();
		}
		if (offset == 32) {
			return f16.back();
		}
		cout << "Error: Unsupported offset in I_blurred_downsampled: " << offset << endl;
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



inline void I_blurred_downsampled_I_blurred_downsampled_id0_16_write(int& I_blurred_downsampled_I_blurred_downsampled_id0_16, I_blurred_downsampled_I_blurred_downsampled_id0_16_cache& I_blurred_downsampled_I_blurred_downsampled_id0_16_delay) {
	I_blurred_downsampled_I_blurred_downsampled_id0_16_delay.push(I_blurred_downsampled_I_blurred_downsampled_id0_16);
}

inline int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_10_select(I_blurred_downsampled_I_blurred_downsampled_id0_16_cache& I_blurred_downsampled_I_blurred_downsampled_id0_16_delay
, int root, int I_blurred_downsampled_blurred_r, int I_blurred_downsampled_blurred_c) {
// Pieces...
// { I_blurred_downsampled_blurred_conv_3_30[root = 0, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] : 0 <= I_blurred_downsampled_blurred_r <= 12 and 0 <= I_blurred_downsampled_blurred_c <= 12 } -> { I_blurred_downsampled_blurred_conv_3_30[root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] -> 17 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_blurred_downsampled_I_blurred_downsampled_id0_16 = I_blurred_downsampled_I_blurred_downsampled_id0_16_delay.peek_17();
	return value_I_blurred_downsampled_I_blurred_downsampled_id0_16;
}

inline int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_11_select(I_blurred_downsampled_I_blurred_downsampled_id0_16_cache& I_blurred_downsampled_I_blurred_downsampled_id0_16_delay
, int root, int I_blurred_downsampled_blurred_r, int I_blurred_downsampled_blurred_c) {
// Pieces...
// { I_blurred_downsampled_blurred_conv_3_30[root = 0, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] : 0 <= I_blurred_downsampled_blurred_r <= 12 and 0 <= I_blurred_downsampled_blurred_c <= 12 } -> { I_blurred_downsampled_blurred_conv_3_30[root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] -> 16 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_blurred_downsampled_I_blurred_downsampled_id0_16 = I_blurred_downsampled_I_blurred_downsampled_id0_16_delay.peek_16();
	return value_I_blurred_downsampled_I_blurred_downsampled_id0_16;
}

inline int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_12_select(I_blurred_downsampled_I_blurred_downsampled_id0_16_cache& I_blurred_downsampled_I_blurred_downsampled_id0_16_delay
, int root, int I_blurred_downsampled_blurred_r, int I_blurred_downsampled_blurred_c) {
// Pieces...
// { I_blurred_downsampled_blurred_conv_3_30[root = 0, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] : 0 <= I_blurred_downsampled_blurred_r <= 12 and 0 <= I_blurred_downsampled_blurred_c <= 11 } -> { I_blurred_downsampled_blurred_conv_3_30[root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] -> 15 }
// 	is always true on iteration domain: 0
// { I_blurred_downsampled_blurred_conv_3_30[root = 0, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c = 12] : 0 <= I_blurred_downsampled_blurred_r <= 12 } -> { I_blurred_downsampled_blurred_conv_3_30[root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] -> (3 + I_blurred_downsampled_blurred_c) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 1
	int value_I_blurred_downsampled_I_blurred_downsampled_id0_16 = I_blurred_downsampled_I_blurred_downsampled_id0_16_delay.peek_15();
	return value_I_blurred_downsampled_I_blurred_downsampled_id0_16;
}

inline int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_13_select(I_blurred_downsampled_I_blurred_downsampled_id0_16_cache& I_blurred_downsampled_I_blurred_downsampled_id0_16_delay
, int root, int I_blurred_downsampled_blurred_r, int I_blurred_downsampled_blurred_c) {
// Pieces...
// { I_blurred_downsampled_blurred_conv_3_30[root = 0, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] : 0 <= I_blurred_downsampled_blurred_r <= 12 and 0 <= I_blurred_downsampled_blurred_c <= 12 } -> { I_blurred_downsampled_blurred_conv_3_30[root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] -> 2 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_blurred_downsampled_I_blurred_downsampled_id0_16 = I_blurred_downsampled_I_blurred_downsampled_id0_16_delay.peek_2();
	return value_I_blurred_downsampled_I_blurred_downsampled_id0_16;
}

inline int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_14_select(I_blurred_downsampled_I_blurred_downsampled_id0_16_cache& I_blurred_downsampled_I_blurred_downsampled_id0_16_delay
, int root, int I_blurred_downsampled_blurred_r, int I_blurred_downsampled_blurred_c) {
// Pieces...
// { I_blurred_downsampled_blurred_conv_3_30[root = 0, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] : 0 <= I_blurred_downsampled_blurred_r <= 12 and 0 <= I_blurred_downsampled_blurred_c <= 12 } -> { I_blurred_downsampled_blurred_conv_3_30[root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] -> 1 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_blurred_downsampled_I_blurred_downsampled_id0_16 = I_blurred_downsampled_I_blurred_downsampled_id0_16_delay.peek_1();
	return value_I_blurred_downsampled_I_blurred_downsampled_id0_16;
}

inline int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_15_select(I_blurred_downsampled_I_blurred_downsampled_id0_16_cache& I_blurred_downsampled_I_blurred_downsampled_id0_16_delay
, int root, int I_blurred_downsampled_blurred_r, int I_blurred_downsampled_blurred_c) {
// Pieces...
//	is optimizable constant: 0
	int value_I_blurred_downsampled_I_blurred_downsampled_id0_16 = I_blurred_downsampled_I_blurred_downsampled_id0_16_delay.peek_0();
	return value_I_blurred_downsampled_I_blurred_downsampled_id0_16;
}

inline int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_7_select(I_blurred_downsampled_I_blurred_downsampled_id0_16_cache& I_blurred_downsampled_I_blurred_downsampled_id0_16_delay
, int root, int I_blurred_downsampled_blurred_r, int I_blurred_downsampled_blurred_c) {
// Pieces...
// { I_blurred_downsampled_blurred_conv_3_30[root = 0, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] : 0 <= I_blurred_downsampled_blurred_r <= 12 and 0 <= I_blurred_downsampled_blurred_c <= 12 } -> { I_blurred_downsampled_blurred_conv_3_30[root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] -> 32 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_blurred_downsampled_I_blurred_downsampled_id0_16 = I_blurred_downsampled_I_blurred_downsampled_id0_16_delay.peek_32();
	return value_I_blurred_downsampled_I_blurred_downsampled_id0_16;
}

inline int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_8_select(I_blurred_downsampled_I_blurred_downsampled_id0_16_cache& I_blurred_downsampled_I_blurred_downsampled_id0_16_delay
, int root, int I_blurred_downsampled_blurred_r, int I_blurred_downsampled_blurred_c) {
// Pieces...
// { I_blurred_downsampled_blurred_conv_3_30[root = 0, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] : 0 <= I_blurred_downsampled_blurred_r <= 12 and 0 <= I_blurred_downsampled_blurred_c <= 12 } -> { I_blurred_downsampled_blurred_conv_3_30[root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] -> 31 }
// 	is always true on iteration domain: 1
//	is optimizable constant: 1
	int value_I_blurred_downsampled_I_blurred_downsampled_id0_16 = I_blurred_downsampled_I_blurred_downsampled_id0_16_delay.peek_31();
	return value_I_blurred_downsampled_I_blurred_downsampled_id0_16;
}

inline int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_9_select(I_blurred_downsampled_I_blurred_downsampled_id0_16_cache& I_blurred_downsampled_I_blurred_downsampled_id0_16_delay
, int root, int I_blurred_downsampled_blurred_r, int I_blurred_downsampled_blurred_c) {
// Pieces...
// { I_blurred_downsampled_blurred_conv_3_30[root = 0, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] : 0 <= I_blurred_downsampled_blurred_r <= 12 and 0 <= I_blurred_downsampled_blurred_c <= 11 } -> { I_blurred_downsampled_blurred_conv_3_30[root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] -> 30 }
// 	is always true on iteration domain: 0
// { I_blurred_downsampled_blurred_conv_3_30[root = 0, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c = 12] : 0 <= I_blurred_downsampled_blurred_r <= 12 } -> { I_blurred_downsampled_blurred_conv_3_30[root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] -> (18 + I_blurred_downsampled_blurred_c) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 1
	int value_I_blurred_downsampled_I_blurred_downsampled_id0_16 = I_blurred_downsampled_I_blurred_downsampled_id0_16_delay.peek_30();
	return value_I_blurred_downsampled_I_blurred_downsampled_id0_16;
}

inline int I_blurred_downsampled_store_I_blurred_downsampled_out_from_I_blurred_downsampled_1_select(I_blurred_downsampled_I_blurred_downsampled_id0_16_cache& I_blurred_downsampled_I_blurred_downsampled_id0_16_delay
, int root, int I_blurred_downsampled_out_r, int I_blurred_downsampled_out_c) {
// Pieces...
//	is optimizable constant: 0
	int value_I_blurred_downsampled_I_blurred_downsampled_id0_16 = I_blurred_downsampled_I_blurred_downsampled_id0_16_delay.peek_0();
	return value_I_blurred_downsampled_I_blurred_downsampled_id0_16;
}

// Bundles...
// I_blurred_downsampled_blurred_conv_3_30_read
//	I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_7
//	I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_8
//	I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_9
//	I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_10
//	I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_11
//	I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_12
//	I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_13
//	I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_14
//	I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_15
inline hw_uint<288> I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_read_bundle_read(I_blurred_downsampled_I_blurred_downsampled_id0_16_cache& I_blurred_downsampled_I_blurred_downsampled_id0_16_delay, int root, int I_blurred_downsampled_blurred_r, int I_blurred_downsampled_blurred_c) {
	hw_uint<288> result;
	int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_7_res = I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_7_select(I_blurred_downsampled_I_blurred_downsampled_id0_16_delay, root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c);
	set_at<0, 288>(result, I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_7_res);
	int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_8_res = I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_8_select(I_blurred_downsampled_I_blurred_downsampled_id0_16_delay, root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c);
	set_at<32, 288>(result, I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_8_res);
	int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_9_res = I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_9_select(I_blurred_downsampled_I_blurred_downsampled_id0_16_delay, root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c);
	set_at<64, 288>(result, I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_9_res);
	int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_10_res = I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_10_select(I_blurred_downsampled_I_blurred_downsampled_id0_16_delay, root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c);
	set_at<96, 288>(result, I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_10_res);
	int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_11_res = I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_11_select(I_blurred_downsampled_I_blurred_downsampled_id0_16_delay, root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c);
	set_at<128, 288>(result, I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_11_res);
	int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_12_res = I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_12_select(I_blurred_downsampled_I_blurred_downsampled_id0_16_delay, root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c);
	set_at<160, 288>(result, I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_12_res);
	int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_13_res = I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_13_select(I_blurred_downsampled_I_blurred_downsampled_id0_16_delay, root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c);
	set_at<192, 288>(result, I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_13_res);
	int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_14_res = I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_14_select(I_blurred_downsampled_I_blurred_downsampled_id0_16_delay, root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c);
	set_at<224, 288>(result, I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_14_res);
	int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_15_res = I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_15_select(I_blurred_downsampled_I_blurred_downsampled_id0_16_delay, root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c);
	set_at<256, 288>(result, I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_15_res);
	return result;
}

// I_blurred_downsampled_id0_write
//	I_blurred_downsampled_I_blurred_downsampled_id0_16
inline void I_blurred_downsampled_I_blurred_downsampled_id0_write_bundle_write(int& /* width = 32*/I_blurred_downsampled_id0_write, I_blurred_downsampled_I_blurred_downsampled_id0_16_cache& I_blurred_downsampled_I_blurred_downsampled_id0_16_delay) {
	I_blurred_downsampled_I_blurred_downsampled_id0_16_write(I_blurred_downsampled_id0_write, I_blurred_downsampled_I_blurred_downsampled_id0_16_delay);
}

// store_I_blurred_downsampled_out_from_I_blurred_downsampled_read
//	I_blurred_downsampled_store_I_blurred_downsampled_out_from_I_blurred_downsampled_1
inline int I_blurred_downsampled_store_I_blurred_downsampled_out_from_I_blurred_downsampled_read_bundle_read(I_blurred_downsampled_I_blurred_downsampled_id0_16_cache& I_blurred_downsampled_I_blurred_downsampled_id0_16_delay, int root, int I_blurred_downsampled_out_r, int I_blurred_downsampled_out_c) {
	int result;
	int I_blurred_downsampled_store_I_blurred_downsampled_out_from_I_blurred_downsampled_1_res = I_blurred_downsampled_store_I_blurred_downsampled_out_from_I_blurred_downsampled_1_select(I_blurred_downsampled_I_blurred_downsampled_id0_16_delay, root, I_blurred_downsampled_out_r, I_blurred_downsampled_out_c);
	set_at<0, 32>(result, I_blurred_downsampled_store_I_blurred_downsampled_out_from_I_blurred_downsampled_1_res);
	return result;
}



#include "hw_classes.h"

struct I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_6_cache {
	// Capacity: 39
	fifo<int, 39> f;
	inline int peek(const int offset) {
		return f.peek(38 - offset);
	}

	inline int peek_0() {
		return f.peek(0);
	}

	inline int peek_1() {
		return f.peek(1);
	}

	inline int peek_2() {
		return f.peek(2);
	}

	inline int peek_3() {
		return f.peek(3);
	}

	inline int peek_4() {
		return f.peek(4);
	}

	inline int peek_5() {
		return f.peek(5);
	}

	inline int peek_6() {
		return f.peek(6);
	}

	inline int peek_7() {
		return f.peek(7);
	}

	inline int peek_8() {
		return f.peek(8);
	}

	inline int peek_9() {
		return f.peek(9);
	}

	inline int peek_10() {
		return f.peek(10);
	}

	inline int peek_11() {
		return f.peek(11);
	}

	inline int peek_12() {
		return f.peek(12);
	}

	inline int peek_13() {
		return f.peek(13);
	}

	inline int peek_14() {
		return f.peek(14);
	}

	inline int peek_15() {
		return f.peek(15);
	}

	inline int peek_16() {
		return f.peek(16);
	}

	inline int peek_17() {
		return f.peek(17);
	}

	inline int peek_18() {
		return f.peek(18);
	}

	inline int peek_19() {
		return f.peek(19);
	}

	inline int peek_20() {
		return f.peek(20);
	}

	inline int peek_21() {
		return f.peek(21);
	}

	inline int peek_22() {
		return f.peek(22);
	}

	inline int peek_23() {
		return f.peek(23);
	}

	inline int peek_24() {
		return f.peek(24);
	}

	inline int peek_25() {
		return f.peek(25);
	}

	inline int peek_26() {
		return f.peek(26);
	}

	inline int peek_27() {
		return f.peek(27);
	}

	inline int peek_28() {
		return f.peek(28);
	}

	inline int peek_29() {
		return f.peek(29);
	}

	inline int peek_30() {
		return f.peek(30);
	}

	inline int peek_31() {
		return f.peek(31);
	}

	inline int peek_32() {
		return f.peek(32);
	}

	inline int peek_33() {
		return f.peek(33);
	}

	inline int peek_34() {
		return f.peek(34);
	}

	inline int peek_35() {
		return f.peek(35);
	}

	inline int peek_36() {
		return f.peek(36);
	}

	inline int peek_37() {
		return f.peek(37);
	}

	inline int peek_38() {
		return f.peek(38);
	}



	inline void push(const int value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		return f.push(value);
	}

};



inline void I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_6_write(int& I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_6, I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_6_cache& I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_6_delay) {
	I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_6_delay.push(I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_6);
}

inline int I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_downsampled_id0_3_select(I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_6_cache& I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_6_delay
, int root, int I_blurred_downsampled_blurred_downsampled_r, int I_blurred_downsampled_blurred_downsampled_c) {
// Pieces...
// { I_blurred_downsampled_blurred_downsampled_id0[root = 0, I_blurred_downsampled_blurred_downsampled_r = 5, I_blurred_downsampled_blurred_downsampled_c] : (1 + I_blurred_downsampled_blurred_downsampled_c) mod 2 = 0 and 0 < I_blurred_downsampled_blurred_downsampled_c <= 2 } -> { I_blurred_downsampled_blurred_downsampled_id0[root, I_blurred_downsampled_blurred_downsampled_r, I_blurred_downsampled_blurred_downsampled_c] -> 2 }
// 	is always true on iteration domain: 0
// { I_blurred_downsampled_blurred_downsampled_id0[root = 0, I_blurred_downsampled_blurred_downsampled_r = 5, I_blurred_downsampled_blurred_downsampled_c] : (I_blurred_downsampled_blurred_downsampled_c) mod 2 = 0 and 0 <= I_blurred_downsampled_blurred_downsampled_c <= 2 } -> { I_blurred_downsampled_blurred_downsampled_id0[root, I_blurred_downsampled_blurred_downsampled_r, I_blurred_downsampled_blurred_downsampled_c] -> ((2 - I_blurred_downsampled_blurred_downsampled_c) + floor((I_blurred_downsampled_blurred_downsampled_c)/2)) }
// 	is always true on iteration domain: 0
// { I_blurred_downsampled_blurred_downsampled_id0[root = 0, I_blurred_downsampled_blurred_downsampled_r = 5, I_blurred_downsampled_blurred_downsampled_c = 3] } -> { I_blurred_downsampled_blurred_downsampled_id0[root, I_blurred_downsampled_blurred_downsampled_r, I_blurred_downsampled_blurred_downsampled_c] -> 1 }
// 	is always true on iteration domain: 0
// { I_blurred_downsampled_blurred_downsampled_id0[root = 0, I_blurred_downsampled_blurred_downsampled_r, I_blurred_downsampled_blurred_downsampled_c] : (1 + I_blurred_downsampled_blurred_downsampled_r) mod 2 = 0 and (1 + I_blurred_downsampled_blurred_downsampled_c) mod 2 = 0 and 0 < I_blurred_downsampled_blurred_downsampled_r <= 2 and 0 < I_blurred_downsampled_blurred_downsampled_c <= 5 } -> { I_blurred_downsampled_blurred_downsampled_id0[root, I_blurred_downsampled_blurred_downsampled_r, I_blurred_downsampled_blurred_downsampled_c] -> (57/2 - 1/2 * I_blurred_downsampled_blurred_downsampled_c) }
// 	is always true on iteration domain: 0
// { I_blurred_downsampled_blurred_downsampled_id0[root = 0, I_blurred_downsampled_blurred_downsampled_r, I_blurred_downsampled_blurred_downsampled_c] : (1 + I_blurred_downsampled_blurred_downsampled_r) mod 2 = 0 and (I_blurred_downsampled_blurred_downsampled_c) mod 2 = 0 and 0 < I_blurred_downsampled_blurred_downsampled_r <= 2 and 0 <= I_blurred_downsampled_blurred_downsampled_c <= 5 } -> { I_blurred_downsampled_blurred_downsampled_id0[root, I_blurred_downsampled_blurred_downsampled_r, I_blurred_downsampled_blurred_downsampled_c] -> (28 - 1/2 * I_blurred_downsampled_blurred_downsampled_c) }
// 	is always true on iteration domain: 0
// { I_blurred_downsampled_blurred_downsampled_id0[root = 0, I_blurred_downsampled_blurred_downsampled_r, I_blurred_downsampled_blurred_downsampled_c] : (I_blurred_downsampled_blurred_downsampled_r) mod 2 = 0 and 0 <= I_blurred_downsampled_blurred_downsampled_r <= 2 and 0 <= I_blurred_downsampled_blurred_downsampled_c <= 5 } -> { I_blurred_downsampled_blurred_downsampled_id0[root, I_blurred_downsampled_blurred_downsampled_r, I_blurred_downsampled_blurred_downsampled_c] -> ((38 - 13/2 * I_blurred_downsampled_blurred_downsampled_r) - 2 * I_blurred_downsampled_blurred_downsampled_c) }
// 	is always true on iteration domain: 0
// { I_blurred_downsampled_blurred_downsampled_id0[root = 0, I_blurred_downsampled_blurred_downsampled_r = 3, I_blurred_downsampled_blurred_downsampled_c] : (1 + I_blurred_downsampled_blurred_downsampled_c) mod 2 = 0 and 0 < I_blurred_downsampled_blurred_downsampled_c <= 5 } -> { I_blurred_downsampled_blurred_downsampled_id0[root, I_blurred_downsampled_blurred_downsampled_r, I_blurred_downsampled_blurred_downsampled_c] -> (31/2 - 1/2 * I_blurred_downsampled_blurred_downsampled_c) }
// 	is always true on iteration domain: 0
// { I_blurred_downsampled_blurred_downsampled_id0[root = 0, I_blurred_downsampled_blurred_downsampled_r = 3, I_blurred_downsampled_blurred_downsampled_c] : (I_blurred_downsampled_blurred_downsampled_c) mod 2 = 0 and 0 <= I_blurred_downsampled_blurred_downsampled_c <= 5 } -> { I_blurred_downsampled_blurred_downsampled_id0[root, I_blurred_downsampled_blurred_downsampled_r, I_blurred_downsampled_blurred_downsampled_c] -> (15 - 1/2 * I_blurred_downsampled_blurred_downsampled_c) }
// 	is always true on iteration domain: 0
// { I_blurred_downsampled_blurred_downsampled_id0[root = 0, I_blurred_downsampled_blurred_downsampled_r = 4, I_blurred_downsampled_blurred_downsampled_c] : 0 <= I_blurred_downsampled_blurred_downsampled_c <= 5 and ((1 + I_blurred_downsampled_blurred_downsampled_c) mod 2 = 0 or (I_blurred_downsampled_blurred_downsampled_c) mod 2 = 0) } -> { I_blurred_downsampled_blurred_downsampled_id0[root, I_blurred_downsampled_blurred_downsampled_r, I_blurred_downsampled_blurred_downsampled_c] -> (12 - 2 * I_blurred_downsampled_blurred_downsampled_c) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 0
	int value_I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_6 = I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_6_delay.peek((((-1 - I_blurred_downsampled_blurred_downsampled_c) % 2 == 0 && -5 + I_blurred_downsampled_blurred_downsampled_r == 0 && root == 0 && -1 + I_blurred_downsampled_blurred_downsampled_c >= 0 && 2 - I_blurred_downsampled_blurred_downsampled_c >= 0) ? (2) : ((-I_blurred_downsampled_blurred_downsampled_c) % 2 == 0 && -5 + I_blurred_downsampled_blurred_downsampled_r == 0 && root == 0 && I_blurred_downsampled_blurred_downsampled_c >= 0 && 2 - I_blurred_downsampled_blurred_downsampled_c >= 0) ? (((2 - I_blurred_downsampled_blurred_downsampled_c) + floord(I_blurred_downsampled_blurred_downsampled_c, 2))) : (-3 + I_blurred_downsampled_blurred_downsampled_c == 0 && -5 + I_blurred_downsampled_blurred_downsampled_r == 0 && root == 0) ? (1) : ((-1 - I_blurred_downsampled_blurred_downsampled_c) % 2 == 0 && (-1 - I_blurred_downsampled_blurred_downsampled_r) % 2 == 0 && root == 0 && -1 + I_blurred_downsampled_blurred_downsampled_r >= 0 && 2 - I_blurred_downsampled_blurred_downsampled_r >= 0 && -1 + I_blurred_downsampled_blurred_downsampled_c >= 0 && 5 - I_blurred_downsampled_blurred_downsampled_c >= 0) ? (((57 - I_blurred_downsampled_blurred_downsampled_c))/2) : ((-I_blurred_downsampled_blurred_downsampled_c) % 2 == 0 && (-1 - I_blurred_downsampled_blurred_downsampled_r) % 2 == 0 && root == 0 && -1 + I_blurred_downsampled_blurred_downsampled_r >= 0 && 2 - I_blurred_downsampled_blurred_downsampled_r >= 0 && I_blurred_downsampled_blurred_downsampled_c >= 0 && 5 - I_blurred_downsampled_blurred_downsampled_c >= 0) ? (((56 - I_blurred_downsampled_blurred_downsampled_c))/2) : ((-I_blurred_downsampled_blurred_downsampled_r) % 2 == 0 && root == 0 && I_blurred_downsampled_blurred_downsampled_r >= 0 && 2 - I_blurred_downsampled_blurred_downsampled_r >= 0 && I_blurred_downsampled_blurred_downsampled_c >= 0 && 5 - I_blurred_downsampled_blurred_downsampled_c >= 0) ? ((((76 - 13 * I_blurred_downsampled_blurred_downsampled_r) - 4 * I_blurred_downsampled_blurred_downsampled_c))/2) : ((-1 - I_blurred_downsampled_blurred_downsampled_c) % 2 == 0 && -3 + I_blurred_downsampled_blurred_downsampled_r == 0 && root == 0 && -1 + I_blurred_downsampled_blurred_downsampled_c >= 0 && 5 - I_blurred_downsampled_blurred_downsampled_c >= 0) ? (((31 - I_blurred_downsampled_blurred_downsampled_c))/2) : ((-I_blurred_downsampled_blurred_downsampled_c) % 2 == 0 && -3 + I_blurred_downsampled_blurred_downsampled_r == 0 && root == 0 && I_blurred_downsampled_blurred_downsampled_c >= 0 && 5 - I_blurred_downsampled_blurred_downsampled_c >= 0) ? (((30 - I_blurred_downsampled_blurred_downsampled_c))/2) : (((-1 - I_blurred_downsampled_blurred_downsampled_c) % 2 == 0 && -4 + I_blurred_downsampled_blurred_downsampled_r == 0 && root == 0 && I_blurred_downsampled_blurred_downsampled_c >= 0 && 5 - I_blurred_downsampled_blurred_downsampled_c >= 0) || ((-I_blurred_downsampled_blurred_downsampled_c) % 2 == 0 && -4 + I_blurred_downsampled_blurred_downsampled_r == 0 && root == 0 && I_blurred_downsampled_blurred_downsampled_c >= 0 && 5 - I_blurred_downsampled_blurred_downsampled_c >= 0)) ? ((12 - 2 * I_blurred_downsampled_blurred_downsampled_c)) : 0));
	return value_I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_6;
}

// Bundles...
// I_blurred_downsampled_blurred_conv_3_30_write
//	I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_6
inline void I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_write_bundle_write(int& /* width = 32*/I_blurred_downsampled_blurred_conv_3_30_write, I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_6_cache& I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_6_delay) {
	I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_6_write(I_blurred_downsampled_blurred_conv_3_30_write, I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_6_delay);
}

// I_blurred_downsampled_blurred_downsampled_id0_read
//	I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_downsampled_id0_3
inline int I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_downsampled_id0_read_bundle_read(I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_6_cache& I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_6_delay, int root, int I_blurred_downsampled_blurred_downsampled_r, int I_blurred_downsampled_blurred_downsampled_c) {
	int result;
	int I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_downsampled_id0_3_res = I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_downsampled_id0_3_select(I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_6_delay, root, I_blurred_downsampled_blurred_downsampled_r, I_blurred_downsampled_blurred_downsampled_c);
	set_at<0, 32>(result, I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_downsampled_id0_3_res);
	return result;
}



#include "hw_classes.h"

struct I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_2_cache {
	// Capacity: 12
	fifo<int, 12> f;
	inline int peek(const int offset) {
		return f.peek(11 - offset);
	}

	inline int peek_0() {
		return f.peek(0);
	}

	inline int peek_1() {
		return f.peek(1);
	}

	inline int peek_2() {
		return f.peek(2);
	}

	inline int peek_3() {
		return f.peek(3);
	}

	inline int peek_4() {
		return f.peek(4);
	}

	inline int peek_5() {
		return f.peek(5);
	}

	inline int peek_6() {
		return f.peek(6);
	}

	inline int peek_7() {
		return f.peek(7);
	}

	inline int peek_8() {
		return f.peek(8);
	}

	inline int peek_9() {
		return f.peek(9);
	}

	inline int peek_10() {
		return f.peek(10);
	}

	inline int peek_11() {
		return f.peek(11);
	}



	inline void push(const int value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		return f.push(value);
	}

};



inline void I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_2_write(int& I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_2, I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_2_cache& I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_2_delay) {
	I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_2_delay.push(I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_2);
}

inline int I_blurred_downsampled_blurred_downsampled_store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled_5_select(I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_2_cache& I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_2_delay
, int root, int I_blurred_downsampled_blurred_downsampled_out_r, int I_blurred_downsampled_blurred_downsampled_out_c) {
// Pieces...
// { store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled[root = 0, I_blurred_downsampled_blurred_downsampled_out_r = 5, I_blurred_downsampled_blurred_downsampled_out_c] : 0 <= I_blurred_downsampled_blurred_downsampled_out_c <= 1 } -> { store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled[root, I_blurred_downsampled_blurred_downsampled_out_r, I_blurred_downsampled_blurred_downsampled_out_c] -> 1 }
// 	is always true on iteration domain: 0
// { store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled[root = 0, I_blurred_downsampled_blurred_downsampled_out_r = 5, I_blurred_downsampled_blurred_downsampled_out_c = 2] } -> { store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled[root, I_blurred_downsampled_blurred_downsampled_out_r, I_blurred_downsampled_blurred_downsampled_out_c] -> 1 }
// 	is always true on iteration domain: 0
// { store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled[root = 0, I_blurred_downsampled_blurred_downsampled_out_r, I_blurred_downsampled_blurred_downsampled_out_c] : 0 <= I_blurred_downsampled_blurred_downsampled_out_r <= 1 and 0 <= I_blurred_downsampled_blurred_downsampled_out_c <= 4 } -> { store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled[root, I_blurred_downsampled_blurred_downsampled_out_r, I_blurred_downsampled_blurred_downsampled_out_c] -> (11 - I_blurred_downsampled_blurred_downsampled_out_c) }
// 	is always true on iteration domain: 0
// { store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled[root = 0, I_blurred_downsampled_blurred_downsampled_out_r, I_blurred_downsampled_blurred_downsampled_out_c = 5] : 0 <= I_blurred_downsampled_blurred_downsampled_out_r <= 1 } -> { store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled[root, I_blurred_downsampled_blurred_downsampled_out_r, I_blurred_downsampled_blurred_downsampled_out_c] -> 6 }
// 	is always true on iteration domain: 0
// { store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled[root = 0, I_blurred_downsampled_blurred_downsampled_out_r = 2, I_blurred_downsampled_blurred_downsampled_out_c] : (1 + I_blurred_downsampled_blurred_downsampled_out_c) mod 3 = 0 and 2 <= I_blurred_downsampled_blurred_downsampled_out_c <= 4 } -> { store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled[root, I_blurred_downsampled_blurred_downsampled_out_r, I_blurred_downsampled_blurred_downsampled_out_c] -> 7 }
// 	is always true on iteration domain: 0
// { store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled[root = 0, I_blurred_downsampled_blurred_downsampled_out_r = 2, I_blurred_downsampled_blurred_downsampled_out_c = 5] } -> { store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled[root, I_blurred_downsampled_blurred_downsampled_out_r, I_blurred_downsampled_blurred_downsampled_out_c] -> (8/3 + 2/3 * I_blurred_downsampled_blurred_downsampled_out_c) }
// 	is always true on iteration domain: 0
// { store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled[root = 0, I_blurred_downsampled_blurred_downsampled_out_r = 2, I_blurred_downsampled_blurred_downsampled_out_c] : 0 <= I_blurred_downsampled_blurred_downsampled_out_c <= 4 and 3*floor((1 + I_blurred_downsampled_blurred_downsampled_out_c)/3) <= I_blurred_downsampled_blurred_downsampled_out_c } -> { store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled[root, I_blurred_downsampled_blurred_downsampled_out_r, I_blurred_downsampled_blurred_downsampled_out_c] -> (7 - floor((1 + I_blurred_downsampled_blurred_downsampled_out_c)/3)) }
// 	is always true on iteration domain: 0
// { store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled[root = 0, I_blurred_downsampled_blurred_downsampled_out_r, I_blurred_downsampled_blurred_downsampled_out_c] : 3 <= I_blurred_downsampled_blurred_downsampled_out_r <= 4 and 0 <= I_blurred_downsampled_blurred_downsampled_out_c <= 4 and ((3*floor((1 + I_blurred_downsampled_blurred_downsampled_out_c)/3) <= I_blurred_downsampled_blurred_downsampled_out_c) or (1 + I_blurred_downsampled_blurred_downsampled_out_c) mod 3 = 0) } -> { store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled[root, I_blurred_downsampled_blurred_downsampled_out_r, I_blurred_downsampled_blurred_downsampled_out_c] -> (5 - I_blurred_downsampled_blurred_downsampled_out_c) }
// 	is always true on iteration domain: 0
//	is optimizable constant: 0
	int value_I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_2 = I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_2_delay.peek(((-5 + I_blurred_downsampled_blurred_downsampled_out_r == 0 && root == 0 && I_blurred_downsampled_blurred_downsampled_out_c >= 0 && 1 - I_blurred_downsampled_blurred_downsampled_out_c >= 0) ? (1) : (-2 + I_blurred_downsampled_blurred_downsampled_out_c == 0 && -5 + I_blurred_downsampled_blurred_downsampled_out_r == 0 && root == 0) ? (1) : (root == 0 && I_blurred_downsampled_blurred_downsampled_out_r >= 0 && 1 - I_blurred_downsampled_blurred_downsampled_out_r >= 0 && I_blurred_downsampled_blurred_downsampled_out_c >= 0 && 4 - I_blurred_downsampled_blurred_downsampled_out_c >= 0) ? ((11 - I_blurred_downsampled_blurred_downsampled_out_c)) : (-5 + I_blurred_downsampled_blurred_downsampled_out_c == 0 && root == 0 && I_blurred_downsampled_blurred_downsampled_out_r >= 0 && 1 - I_blurred_downsampled_blurred_downsampled_out_r >= 0) ? (6) : ((-1 - I_blurred_downsampled_blurred_downsampled_out_c) % 3 == 0 && -2 + I_blurred_downsampled_blurred_downsampled_out_r == 0 && root == 0 && -2 + I_blurred_downsampled_blurred_downsampled_out_c >= 0 && 4 - I_blurred_downsampled_blurred_downsampled_out_c >= 0) ? (7) : (-5 + I_blurred_downsampled_blurred_downsampled_out_c == 0 && -2 + I_blurred_downsampled_blurred_downsampled_out_r == 0 && root == 0) ? (((8 + 2 * I_blurred_downsampled_blurred_downsampled_out_c))/3) : (-2 + I_blurred_downsampled_blurred_downsampled_out_r == 0 && root == 0 && I_blurred_downsampled_blurred_downsampled_out_c >= 0 && 4 - I_blurred_downsampled_blurred_downsampled_out_c >= 0 && I_blurred_downsampled_blurred_downsampled_out_c - 3*floord(1 + I_blurred_downsampled_blurred_downsampled_out_c, 3) >= 0) ? ((7 - floord(1 + I_blurred_downsampled_blurred_downsampled_out_c, 3))) : ((root == 0 && -3 + I_blurred_downsampled_blurred_downsampled_out_r >= 0 && 4 - I_blurred_downsampled_blurred_downsampled_out_r >= 0 && I_blurred_downsampled_blurred_downsampled_out_c >= 0 && 4 - I_blurred_downsampled_blurred_downsampled_out_c >= 0 && I_blurred_downsampled_blurred_downsampled_out_c - 3*floord(1 + I_blurred_downsampled_blurred_downsampled_out_c, 3) >= 0) || ((-1 - I_blurred_downsampled_blurred_downsampled_out_c) % 3 == 0 && root == 0 && -3 + I_blurred_downsampled_blurred_downsampled_out_r >= 0 && 4 - I_blurred_downsampled_blurred_downsampled_out_r >= 0 && I_blurred_downsampled_blurred_downsampled_out_c >= 0 && 4 - I_blurred_downsampled_blurred_downsampled_out_c >= 0)) ? ((5 - I_blurred_downsampled_blurred_downsampled_out_c)) : 0));
	return value_I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_2;
}

// Bundles...
// I_blurred_downsampled_blurred_downsampled_id0_write
//	I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_2
inline void I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_write_bundle_write(int& /* width = 32*/I_blurred_downsampled_blurred_downsampled_id0_write, I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_2_cache& I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_2_delay) {
	I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_2_write(I_blurred_downsampled_blurred_downsampled_id0_write, I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_2_delay);
}

// store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled_read
//	I_blurred_downsampled_blurred_downsampled_store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled_5
inline int I_blurred_downsampled_blurred_downsampled_store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled_read_bundle_read(I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_2_cache& I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_2_delay, int root, int I_blurred_downsampled_blurred_downsampled_out_r, int I_blurred_downsampled_blurred_downsampled_out_c) {
	int result;
	int I_blurred_downsampled_blurred_downsampled_store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled_5_res = I_blurred_downsampled_blurred_downsampled_store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled_5_select(I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_2_delay, root, I_blurred_downsampled_blurred_downsampled_out_r, I_blurred_downsampled_blurred_downsampled_out_c);
	set_at<0, 32>(result, I_blurred_downsampled_blurred_downsampled_store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled_5_res);
	return result;
}





// Operation logic
inline void store_I_blurred_downsampled_out_from_I_blurred_downsampled(I_blurred_downsampled_I_blurred_downsampled_id0_16_cache& I_blurred_downsampled_I_blurred_downsampled_id0_16, HWStream<int>& I_blurred_downsampled_out, int root, int I_blurred_downsampled_out_r, int I_blurred_downsampled_out_c) {
	// Consume: I_blurred_downsampled
	auto I_blurred_downsampled_I_blurred_downsampled_out_r_c__I_blurred_downsampled_out_c_value = I_blurred_downsampled_store_I_blurred_downsampled_out_from_I_blurred_downsampled_read_bundle_read(I_blurred_downsampled_I_blurred_downsampled_id0_16/* source_delay */, root, I_blurred_downsampled_out_r, I_blurred_downsampled_out_c);
	// Produce: I_blurred_downsampled_out
	I_blurred_downsampled_out.write(I_blurred_downsampled_I_blurred_downsampled_out_r_c__I_blurred_downsampled_out_c_value);
}

inline void I_blurred_downsampled_blurred_downsampled_id0(I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_6_cache& I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_6, I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_2_cache& I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_2, int root, int I_blurred_downsampled_blurred_downsampled_r, int I_blurred_downsampled_blurred_downsampled_c) {
	// Consume: I_blurred_downsampled_blurred
	auto I_blurred_downsampled_blurred_2_m_I_blurred_downsampled_blurred_downsampled_r_c__2_m_I_blurred_downsampled_blurred_downsampled_c_value = I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_downsampled_id0_read_bundle_read(I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_6/* source_delay */, root, I_blurred_downsampled_blurred_downsampled_r, I_blurred_downsampled_blurred_downsampled_c);
	// Apply function: id
	// Arg: I_blurred_downsampled_blurred_2_m_I_blurred_downsampled_blurred_downsampled_r_c__2_m_I_blurred_downsampled_blurred_downsampled_c_value
	// Arg buf: I_blurred_downsampled_blurred
	auto compute_result = id(I_blurred_downsampled_blurred_2_m_I_blurred_downsampled_blurred_downsampled_r_c__2_m_I_blurred_downsampled_blurred_downsampled_c_value);
	// Produce: I_blurred_downsampled_blurred_downsampled
	// Buffer: I_blurred_downsampled_blurred_downsampled, Op: I_blurred_downsampled_blurred_downsampled_id0
	// Possible ports...
		// I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_2
	I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_write_bundle_write(compute_result, I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_2 /* output src_delay */);
}

inline void store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled(I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_2_cache& I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_2, HWStream<int>& I_blurred_downsampled_blurred_downsampled_out, int root, int I_blurred_downsampled_blurred_downsampled_out_r, int I_blurred_downsampled_blurred_downsampled_out_c) {
	// Consume: I_blurred_downsampled_blurred_downsampled
	auto I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_out_r_c__I_blurred_downsampled_blurred_downsampled_out_c_value = I_blurred_downsampled_blurred_downsampled_store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled_read_bundle_read(I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_2/* source_delay */, root, I_blurred_downsampled_blurred_downsampled_out_r, I_blurred_downsampled_blurred_downsampled_out_c);
	// Produce: I_blurred_downsampled_blurred_downsampled_out
	I_blurred_downsampled_blurred_downsampled_out.write(I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_out_r_c__I_blurred_downsampled_blurred_downsampled_out_c_value);
}

inline void I_blurred_downsampled_blurred_conv_3_30(I_blurred_downsampled_I_blurred_downsampled_id0_16_cache& I_blurred_downsampled_I_blurred_downsampled_id0_16, I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_6_cache& I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_6, int root, int I_blurred_downsampled_blurred_r, int I_blurred_downsampled_blurred_c) {
	// Consume: I_blurred_downsampled
	auto I_blurred_downsampled_I_blurred_downsampled_blurred_r__p__0_c__I_blurred_downsampled_blurred_c__p__0_value = I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_read_bundle_read(I_blurred_downsampled_I_blurred_downsampled_id0_16/* source_delay */, root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c);
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
		// I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_6
	I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_write_bundle_write(compute_result, I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_6 /* output src_delay */);
}

inline void I_blurred_downsampled_id0(I_blurred_I_blurred_conv_3_30_20_cache& I_blurred_I_blurred_conv_3_30_20, I_blurred_downsampled_I_blurred_downsampled_id0_16_cache& I_blurred_downsampled_I_blurred_downsampled_id0_16, int root, int I_blurred_downsampled_r, int I_blurred_downsampled_c) {
	// Consume: I_blurred
	auto I_blurred_2_m_I_blurred_downsampled_r_c__2_m_I_blurred_downsampled_c_value = I_blurred_I_blurred_downsampled_id0_read_bundle_read(I_blurred_I_blurred_conv_3_30_20/* source_delay */, root, I_blurred_downsampled_r, I_blurred_downsampled_c);
	// Apply function: id
	// Arg: I_blurred_2_m_I_blurred_downsampled_r_c__2_m_I_blurred_downsampled_c_value
	// Arg buf: I_blurred
	auto compute_result = id(I_blurred_2_m_I_blurred_downsampled_r_c__2_m_I_blurred_downsampled_c_value);
	// Produce: I_blurred_downsampled
	// Buffer: I_blurred_downsampled, Op: I_blurred_downsampled_id0
	// Possible ports...
		// I_blurred_downsampled_I_blurred_downsampled_id0_16
	I_blurred_downsampled_I_blurred_downsampled_id0_write_bundle_write(compute_result, I_blurred_downsampled_I_blurred_downsampled_id0_16 /* output src_delay */);
}

inline void store_I_from_in(HWStream<int>& in, I_store_I_from_in_18_cache& I_store_I_from_in_18, int root, int pr, int pc) {
	// Consume: in
	auto in_pr_c__pc_value = in.read();
	// Produce: I
	// Buffer: I, Op: store_I_from_in
	// Possible ports...
		// I_store_I_from_in_18
	I_store_I_from_in_write_bundle_write(in_pr_c__pc_value, I_store_I_from_in_18 /* output src_delay */);
}

inline void I_blurred_conv_3_30(I_store_I_from_in_18_cache& I_store_I_from_in_18, I_blurred_I_blurred_conv_3_30_20_cache& I_blurred_I_blurred_conv_3_30_20, int root, int I_blurred_r, int I_blurred_c) {
	// Consume: I
	auto I_I_blurred_r__p__0_c__I_blurred_c__p__0_value = I_I_blurred_conv_3_30_read_bundle_read(I_store_I_from_in_18/* source_delay */, root, I_blurred_r, I_blurred_c);
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
		// I_blurred_I_blurred_conv_3_30_20
	I_blurred_I_blurred_conv_3_30_write_bundle_write(compute_result, I_blurred_I_blurred_conv_3_30_20 /* output src_delay */);
}

// Driver function
void gaussian_pyramid(HWStream<int>& in, HWStream<int>& I_blurred_downsampled_blurred_downsampled_out, HWStream<int>& I_blurred_downsampled_out) {
	I_store_I_from_in_18_cache I_store_I_from_in_18;
	I_blurred_I_blurred_conv_3_30_20_cache I_blurred_I_blurred_conv_3_30_20;
	I_blurred_downsampled_I_blurred_downsampled_id0_16_cache I_blurred_downsampled_I_blurred_downsampled_id0_16;
	I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_6_cache I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_6;
	I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_2_cache I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_2;
	for (int c0 = 0; c0 <= 31; c0 += 1)
	  for (int c1 = 0; c1 <= 31; c1 += 1) {
	    store_I_from_in(in, I_store_I_from_in_18, 0, c0, c1);
	    if (c0 >= 2 && c1 >= 2) {
	      I_blurred_conv_3_30(I_store_I_from_in_18, I_blurred_I_blurred_conv_3_30_20, 0, c0 - 2, c1 - 2);
	      if (c0 % 2 == 0 && c1 % 2 == 0) {
	        I_blurred_downsampled_id0(I_blurred_I_blurred_conv_3_30_20, I_blurred_downsampled_I_blurred_downsampled_id0_16, 0, (c0 / 2) - 1, (c1 / 2) - 1);
	        if (c0 >= 6 && c1 >= 6)
	          I_blurred_downsampled_blurred_conv_3_30(I_blurred_downsampled_I_blurred_downsampled_id0_16, I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_6, 0, (c0 / 2) - 3, (c1 / 2) - 3);
	      }
	      if (c0 >= 11 && c0 <= 26 && c1 >= 11 && c1 <= 26 && (c0 + 1) % 3 == 0 && (c1 + 1) % 3 == 0)
	        I_blurred_downsampled_blurred_downsampled_id0(I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_6, I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_2, 0, (c0 - 11) / 3, (c1 - 11) / 3);
	      if (c0 % 2 == 0 && c1 % 2 == 0) {
	        store_I_blurred_downsampled_out_from_I_blurred_downsampled(I_blurred_downsampled_I_blurred_downsampled_id0_16, I_blurred_downsampled_out, 0, (c0 / 2) - 1, (c1 / 2) - 1);
	        if (c0 >= 16 && c0 <= 26 && c1 >= 16 && c1 <= 26)
	          store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled(I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_2, I_blurred_downsampled_blurred_downsampled_out, 0, (c0 / 2) - 8, (c1 / 2) - 8);
	      }
	    }
	  }
	
}
