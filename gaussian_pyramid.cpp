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
	int value_I_store_I_from_in_18 = I_store_I_from_in_18_delay.peek_66();
	return value_I_store_I_from_in_18;
}

inline int I_I_blurred_conv_3_30_22_select(I_store_I_from_in_18_cache& I_store_I_from_in_18_delay
, int root, int I_blurred_r, int I_blurred_c) {
// Pieces...
// { I_blurred_conv_3_30[root = 0, I_blurred_r, I_blurred_c] : 0 <= I_blurred_r <= 29 and 0 <= I_blurred_c <= 29 } -> { I_blurred_conv_3_30[root, I_blurred_r, I_blurred_c] -> 65 }
// 	is always true on iteration domain: 1
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
	int value_I_store_I_from_in_18 = I_store_I_from_in_18_delay.peek(((root == 0 && I_blurred_r >= 0 && 29 - I_blurred_r >= 0 && I_blurred_c >= 0 && 28 - I_blurred_c >= 0) ? (64) : (-29 + I_blurred_c == 0 && root == 0 && I_blurred_r >= 0 && 29 - I_blurred_r >= 0) ? ((35 + I_blurred_c)) : 0));
	return value_I_store_I_from_in_18;
}

inline int I_I_blurred_conv_3_30_24_select(I_store_I_from_in_18_cache& I_store_I_from_in_18_delay
, int root, int I_blurred_r, int I_blurred_c) {
// Pieces...
// { I_blurred_conv_3_30[root = 0, I_blurred_r, I_blurred_c] : 0 <= I_blurred_r <= 29 and 0 <= I_blurred_c <= 29 } -> { I_blurred_conv_3_30[root, I_blurred_r, I_blurred_c] -> 34 }
// 	is always true on iteration domain: 1
	int value_I_store_I_from_in_18 = I_store_I_from_in_18_delay.peek_34();
	return value_I_store_I_from_in_18;
}

inline int I_I_blurred_conv_3_30_25_select(I_store_I_from_in_18_cache& I_store_I_from_in_18_delay
, int root, int I_blurred_r, int I_blurred_c) {
// Pieces...
// { I_blurred_conv_3_30[root = 0, I_blurred_r, I_blurred_c] : 0 <= I_blurred_r <= 29 and 0 <= I_blurred_c <= 29 } -> { I_blurred_conv_3_30[root, I_blurred_r, I_blurred_c] -> 33 }
// 	is always true on iteration domain: 1
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
	int value_I_store_I_from_in_18 = I_store_I_from_in_18_delay.peek(((root == 0 && I_blurred_r >= 0 && 29 - I_blurred_r >= 0 && I_blurred_c >= 0 && 28 - I_blurred_c >= 0) ? (32) : (-29 + I_blurred_c == 0 && root == 0 && I_blurred_r >= 0 && 29 - I_blurred_r >= 0) ? ((3 + I_blurred_c)) : 0));
	return value_I_store_I_from_in_18;
}

inline int I_I_blurred_conv_3_30_27_select(I_store_I_from_in_18_cache& I_store_I_from_in_18_delay
, int root, int I_blurred_r, int I_blurred_c) {
// Pieces...
// { I_blurred_conv_3_30[root = 0, I_blurred_r, I_blurred_c] : 0 <= I_blurred_r <= 29 and 0 <= I_blurred_c <= 29 } -> { I_blurred_conv_3_30[root, I_blurred_r, I_blurred_c] -> 2 }
// 	is always true on iteration domain: 1
	int value_I_store_I_from_in_18 = I_store_I_from_in_18_delay.peek_2();
	return value_I_store_I_from_in_18;
}

inline int I_I_blurred_conv_3_30_28_select(I_store_I_from_in_18_cache& I_store_I_from_in_18_delay
, int root, int I_blurred_r, int I_blurred_c) {
// Pieces...
// { I_blurred_conv_3_30[root = 0, I_blurred_r, I_blurred_c] : 0 <= I_blurred_r <= 29 and 0 <= I_blurred_c <= 29 } -> { I_blurred_conv_3_30[root, I_blurred_r, I_blurred_c] -> 1 }
// 	is always true on iteration domain: 1
	int value_I_store_I_from_in_18 = I_store_I_from_in_18_delay.peek_1();
	return value_I_store_I_from_in_18;
}

inline int I_I_blurred_conv_3_30_29_select(I_store_I_from_in_18_cache& I_store_I_from_in_18_delay
, int root, int I_blurred_r, int I_blurred_c) {
// Pieces...
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
	// Parition [0, 0] capacity = 1
	fifo<int, 1> f1;


	inline int peek_0() {
		return f1.back();
	}



	inline int peek(const int offset) {
		if (offset == 0) {
			return f1.back();
		}
		cout << "Error: Unsupported offset in I_blurred: " << offset << endl;
		assert(false);
		return 0;

	}

	inline void push(const int value) {
		f1.push(value);
	}

};



inline void I_blurred_I_blurred_conv_3_30_20_write(int& I_blurred_I_blurred_conv_3_30_20, I_blurred_I_blurred_conv_3_30_20_cache& I_blurred_I_blurred_conv_3_30_20_delay) {
	I_blurred_I_blurred_conv_3_30_20_delay.push(I_blurred_I_blurred_conv_3_30_20);
}

inline int I_blurred_I_blurred_downsampled_id0_1_select(I_blurred_I_blurred_conv_3_30_20_cache& I_blurred_I_blurred_conv_3_30_20_delay
, int root, int I_blurred_downsampled_r, int I_blurred_downsampled_c) {
// Pieces...
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
//	I_blurred_I_blurred_downsampled_id0_1
inline int I_blurred_I_blurred_downsampled_id0_read_bundle_read(I_blurred_I_blurred_conv_3_30_20_cache& I_blurred_I_blurred_conv_3_30_20_delay, int root, int I_blurred_downsampled_r, int I_blurred_downsampled_c) {
	int result;
	int I_blurred_I_blurred_downsampled_id0_1_res = I_blurred_I_blurred_downsampled_id0_1_select(I_blurred_I_blurred_conv_3_30_20_delay, root, I_blurred_downsampled_r, I_blurred_downsampled_c);
	set_at<0, 32>(result, I_blurred_I_blurred_downsampled_id0_1_res);
	return result;
}



#include "hw_classes.h"

struct I_blurred_downsampled_I_blurred_downsampled_id0_0_cache {
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



inline void I_blurred_downsampled_I_blurred_downsampled_id0_0_write(int& I_blurred_downsampled_I_blurred_downsampled_id0_0, I_blurred_downsampled_I_blurred_downsampled_id0_0_cache& I_blurred_downsampled_I_blurred_downsampled_id0_0_delay) {
	I_blurred_downsampled_I_blurred_downsampled_id0_0_delay.push(I_blurred_downsampled_I_blurred_downsampled_id0_0);
}

inline int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_10_select(I_blurred_downsampled_I_blurred_downsampled_id0_0_cache& I_blurred_downsampled_I_blurred_downsampled_id0_0_delay
, int root, int I_blurred_downsampled_blurred_r, int I_blurred_downsampled_blurred_c) {
// Pieces...
// { I_blurred_downsampled_blurred_conv_3_30[root = 0, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] : 0 <= I_blurred_downsampled_blurred_r <= 12 and 0 <= I_blurred_downsampled_blurred_c <= 11 } -> { I_blurred_downsampled_blurred_conv_3_30[root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] -> 15 }
// 	is always true on iteration domain: 0
// { I_blurred_downsampled_blurred_conv_3_30[root = 0, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c = 12] : 0 <= I_blurred_downsampled_blurred_r <= 12 } -> { I_blurred_downsampled_blurred_conv_3_30[root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] -> (3 + I_blurred_downsampled_blurred_c) }
// 	is always true on iteration domain: 0
	int value_I_blurred_downsampled_I_blurred_downsampled_id0_0 = I_blurred_downsampled_I_blurred_downsampled_id0_0_delay.peek(((root == 0 && I_blurred_downsampled_blurred_r >= 0 && 12 - I_blurred_downsampled_blurred_r >= 0 && I_blurred_downsampled_blurred_c >= 0 && 11 - I_blurred_downsampled_blurred_c >= 0) ? (15) : (-12 + I_blurred_downsampled_blurred_c == 0 && root == 0 && I_blurred_downsampled_blurred_r >= 0 && 12 - I_blurred_downsampled_blurred_r >= 0) ? ((3 + I_blurred_downsampled_blurred_c)) : 0));
	return value_I_blurred_downsampled_I_blurred_downsampled_id0_0;
}

inline int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_11_select(I_blurred_downsampled_I_blurred_downsampled_id0_0_cache& I_blurred_downsampled_I_blurred_downsampled_id0_0_delay
, int root, int I_blurred_downsampled_blurred_r, int I_blurred_downsampled_blurred_c) {
// Pieces...
// { I_blurred_downsampled_blurred_conv_3_30[root = 0, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] : 0 <= I_blurred_downsampled_blurred_r <= 12 and 0 <= I_blurred_downsampled_blurred_c <= 12 } -> { I_blurred_downsampled_blurred_conv_3_30[root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] -> 2 }
// 	is always true on iteration domain: 1
	int value_I_blurred_downsampled_I_blurred_downsampled_id0_0 = I_blurred_downsampled_I_blurred_downsampled_id0_0_delay.peek_2();
	return value_I_blurred_downsampled_I_blurred_downsampled_id0_0;
}

inline int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_12_select(I_blurred_downsampled_I_blurred_downsampled_id0_0_cache& I_blurred_downsampled_I_blurred_downsampled_id0_0_delay
, int root, int I_blurred_downsampled_blurred_r, int I_blurred_downsampled_blurred_c) {
// Pieces...
// { I_blurred_downsampled_blurred_conv_3_30[root = 0, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] : 0 <= I_blurred_downsampled_blurred_r <= 12 and 0 <= I_blurred_downsampled_blurred_c <= 12 } -> { I_blurred_downsampled_blurred_conv_3_30[root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] -> 1 }
// 	is always true on iteration domain: 1
	int value_I_blurred_downsampled_I_blurred_downsampled_id0_0 = I_blurred_downsampled_I_blurred_downsampled_id0_0_delay.peek_1();
	return value_I_blurred_downsampled_I_blurred_downsampled_id0_0;
}

inline int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_13_select(I_blurred_downsampled_I_blurred_downsampled_id0_0_cache& I_blurred_downsampled_I_blurred_downsampled_id0_0_delay
, int root, int I_blurred_downsampled_blurred_r, int I_blurred_downsampled_blurred_c) {
// Pieces...
	int value_I_blurred_downsampled_I_blurred_downsampled_id0_0 = I_blurred_downsampled_I_blurred_downsampled_id0_0_delay.peek_0();
	return value_I_blurred_downsampled_I_blurred_downsampled_id0_0;
}

inline int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_5_select(I_blurred_downsampled_I_blurred_downsampled_id0_0_cache& I_blurred_downsampled_I_blurred_downsampled_id0_0_delay
, int root, int I_blurred_downsampled_blurred_r, int I_blurred_downsampled_blurred_c) {
// Pieces...
// { I_blurred_downsampled_blurred_conv_3_30[root = 0, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] : 0 <= I_blurred_downsampled_blurred_r <= 12 and 0 <= I_blurred_downsampled_blurred_c <= 12 } -> { I_blurred_downsampled_blurred_conv_3_30[root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] -> 32 }
// 	is always true on iteration domain: 1
	int value_I_blurred_downsampled_I_blurred_downsampled_id0_0 = I_blurred_downsampled_I_blurred_downsampled_id0_0_delay.peek_32();
	return value_I_blurred_downsampled_I_blurred_downsampled_id0_0;
}

inline int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_6_select(I_blurred_downsampled_I_blurred_downsampled_id0_0_cache& I_blurred_downsampled_I_blurred_downsampled_id0_0_delay
, int root, int I_blurred_downsampled_blurred_r, int I_blurred_downsampled_blurred_c) {
// Pieces...
// { I_blurred_downsampled_blurred_conv_3_30[root = 0, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] : 0 <= I_blurred_downsampled_blurred_r <= 12 and 0 <= I_blurred_downsampled_blurred_c <= 12 } -> { I_blurred_downsampled_blurred_conv_3_30[root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] -> 31 }
// 	is always true on iteration domain: 1
	int value_I_blurred_downsampled_I_blurred_downsampled_id0_0 = I_blurred_downsampled_I_blurred_downsampled_id0_0_delay.peek_31();
	return value_I_blurred_downsampled_I_blurred_downsampled_id0_0;
}

inline int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_7_select(I_blurred_downsampled_I_blurred_downsampled_id0_0_cache& I_blurred_downsampled_I_blurred_downsampled_id0_0_delay
, int root, int I_blurred_downsampled_blurred_r, int I_blurred_downsampled_blurred_c) {
// Pieces...
// { I_blurred_downsampled_blurred_conv_3_30[root = 0, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] : 0 <= I_blurred_downsampled_blurred_r <= 12 and 0 <= I_blurred_downsampled_blurred_c <= 11 } -> { I_blurred_downsampled_blurred_conv_3_30[root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] -> 30 }
// 	is always true on iteration domain: 0
// { I_blurred_downsampled_blurred_conv_3_30[root = 0, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c = 12] : 0 <= I_blurred_downsampled_blurred_r <= 12 } -> { I_blurred_downsampled_blurred_conv_3_30[root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] -> (18 + I_blurred_downsampled_blurred_c) }
// 	is always true on iteration domain: 0
	int value_I_blurred_downsampled_I_blurred_downsampled_id0_0 = I_blurred_downsampled_I_blurred_downsampled_id0_0_delay.peek(((root == 0 && I_blurred_downsampled_blurred_r >= 0 && 12 - I_blurred_downsampled_blurred_r >= 0 && I_blurred_downsampled_blurred_c >= 0 && 11 - I_blurred_downsampled_blurred_c >= 0) ? (30) : (-12 + I_blurred_downsampled_blurred_c == 0 && root == 0 && I_blurred_downsampled_blurred_r >= 0 && 12 - I_blurred_downsampled_blurred_r >= 0) ? ((18 + I_blurred_downsampled_blurred_c)) : 0));
	return value_I_blurred_downsampled_I_blurred_downsampled_id0_0;
}

inline int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_8_select(I_blurred_downsampled_I_blurred_downsampled_id0_0_cache& I_blurred_downsampled_I_blurred_downsampled_id0_0_delay
, int root, int I_blurred_downsampled_blurred_r, int I_blurred_downsampled_blurred_c) {
// Pieces...
// { I_blurred_downsampled_blurred_conv_3_30[root = 0, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] : 0 <= I_blurred_downsampled_blurred_r <= 12 and 0 <= I_blurred_downsampled_blurred_c <= 12 } -> { I_blurred_downsampled_blurred_conv_3_30[root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] -> 17 }
// 	is always true on iteration domain: 1
	int value_I_blurred_downsampled_I_blurred_downsampled_id0_0 = I_blurred_downsampled_I_blurred_downsampled_id0_0_delay.peek_17();
	return value_I_blurred_downsampled_I_blurred_downsampled_id0_0;
}

inline int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_9_select(I_blurred_downsampled_I_blurred_downsampled_id0_0_cache& I_blurred_downsampled_I_blurred_downsampled_id0_0_delay
, int root, int I_blurred_downsampled_blurred_r, int I_blurred_downsampled_blurred_c) {
// Pieces...
// { I_blurred_downsampled_blurred_conv_3_30[root = 0, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] : 0 <= I_blurred_downsampled_blurred_r <= 12 and 0 <= I_blurred_downsampled_blurred_c <= 12 } -> { I_blurred_downsampled_blurred_conv_3_30[root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c] -> 16 }
// 	is always true on iteration domain: 1
	int value_I_blurred_downsampled_I_blurred_downsampled_id0_0 = I_blurred_downsampled_I_blurred_downsampled_id0_0_delay.peek_16();
	return value_I_blurred_downsampled_I_blurred_downsampled_id0_0;
}

inline int I_blurred_downsampled_store_I_blurred_downsampled_out_from_I_blurred_downsampled_3_select(I_blurred_downsampled_I_blurred_downsampled_id0_0_cache& I_blurred_downsampled_I_blurred_downsampled_id0_0_delay
, int root, int I_blurred_downsampled_out_r, int I_blurred_downsampled_out_c) {
// Pieces...
	int value_I_blurred_downsampled_I_blurred_downsampled_id0_0 = I_blurred_downsampled_I_blurred_downsampled_id0_0_delay.peek_0();
	return value_I_blurred_downsampled_I_blurred_downsampled_id0_0;
}

// Bundles...
// I_blurred_downsampled_blurred_conv_3_30_read
//	I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_5
//	I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_6
//	I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_7
//	I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_8
//	I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_9
//	I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_10
//	I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_11
//	I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_12
//	I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_13
inline hw_uint<288> I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_read_bundle_read(I_blurred_downsampled_I_blurred_downsampled_id0_0_cache& I_blurred_downsampled_I_blurred_downsampled_id0_0_delay, int root, int I_blurred_downsampled_blurred_r, int I_blurred_downsampled_blurred_c) {
	hw_uint<288> result;
	int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_5_res = I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_5_select(I_blurred_downsampled_I_blurred_downsampled_id0_0_delay, root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c);
	set_at<0, 288>(result, I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_5_res);
	int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_6_res = I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_6_select(I_blurred_downsampled_I_blurred_downsampled_id0_0_delay, root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c);
	set_at<32, 288>(result, I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_6_res);
	int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_7_res = I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_7_select(I_blurred_downsampled_I_blurred_downsampled_id0_0_delay, root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c);
	set_at<64, 288>(result, I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_7_res);
	int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_8_res = I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_8_select(I_blurred_downsampled_I_blurred_downsampled_id0_0_delay, root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c);
	set_at<96, 288>(result, I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_8_res);
	int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_9_res = I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_9_select(I_blurred_downsampled_I_blurred_downsampled_id0_0_delay, root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c);
	set_at<128, 288>(result, I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_9_res);
	int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_10_res = I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_10_select(I_blurred_downsampled_I_blurred_downsampled_id0_0_delay, root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c);
	set_at<160, 288>(result, I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_10_res);
	int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_11_res = I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_11_select(I_blurred_downsampled_I_blurred_downsampled_id0_0_delay, root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c);
	set_at<192, 288>(result, I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_11_res);
	int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_12_res = I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_12_select(I_blurred_downsampled_I_blurred_downsampled_id0_0_delay, root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c);
	set_at<224, 288>(result, I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_12_res);
	int I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_13_res = I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_13_select(I_blurred_downsampled_I_blurred_downsampled_id0_0_delay, root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c);
	set_at<256, 288>(result, I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_13_res);
	return result;
}

// I_blurred_downsampled_id0_write
//	I_blurred_downsampled_I_blurred_downsampled_id0_0
inline void I_blurred_downsampled_I_blurred_downsampled_id0_write_bundle_write(int& /* width = 32*/I_blurred_downsampled_id0_write, I_blurred_downsampled_I_blurred_downsampled_id0_0_cache& I_blurred_downsampled_I_blurred_downsampled_id0_0_delay) {
	I_blurred_downsampled_I_blurred_downsampled_id0_0_write(I_blurred_downsampled_id0_write, I_blurred_downsampled_I_blurred_downsampled_id0_0_delay);
}

// store_I_blurred_downsampled_out_from_I_blurred_downsampled_read
//	I_blurred_downsampled_store_I_blurred_downsampled_out_from_I_blurred_downsampled_3
inline int I_blurred_downsampled_store_I_blurred_downsampled_out_from_I_blurred_downsampled_read_bundle_read(I_blurred_downsampled_I_blurred_downsampled_id0_0_cache& I_blurred_downsampled_I_blurred_downsampled_id0_0_delay, int root, int I_blurred_downsampled_out_r, int I_blurred_downsampled_out_c) {
	int result;
	int I_blurred_downsampled_store_I_blurred_downsampled_out_from_I_blurred_downsampled_3_res = I_blurred_downsampled_store_I_blurred_downsampled_out_from_I_blurred_downsampled_3_select(I_blurred_downsampled_I_blurred_downsampled_id0_0_delay, root, I_blurred_downsampled_out_r, I_blurred_downsampled_out_c);
	set_at<0, 32>(result, I_blurred_downsampled_store_I_blurred_downsampled_out_from_I_blurred_downsampled_3_res);
	return result;
}



#include "hw_classes.h"

struct I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_4_cache {
	// Capacity: 39
	// Parition [0, 1) capacity = 1
	fifo<int, 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<int, 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<int, 1> f4;
	// Parition [3, 4) capacity = 1
	fifo<int, 1> f6;
	// Parition [4, 5) capacity = 1
	fifo<int, 1> f8;
	// Parition [5, 6) capacity = 1
	fifo<int, 1> f10;
	// Parition [6, 7) capacity = 1
	fifo<int, 1> f12;
	// Parition [7, 8) capacity = 1
	fifo<int, 1> f14;
	// Parition [8, 9) capacity = 1
	fifo<int, 1> f16;
	// Parition [9, 10) capacity = 1
	fifo<int, 1> f18;
	// Parition [10, 11) capacity = 1
	fifo<int, 1> f20;
	// Parition [11, 12) capacity = 1
	fifo<int, 1> f22;
	// Parition [12, 13) capacity = 1
	fifo<int, 1> f24;
	// Parition [13, 14) capacity = 1
	fifo<int, 1> f26;
	// Parition [14, 15) capacity = 1
	fifo<int, 1> f28;
	// Parition [15, 16) capacity = 1
	fifo<int, 1> f30;
	// Parition [16, 17) capacity = 1
	fifo<int, 1> f32;
	// Parition [17, 18) capacity = 1
	fifo<int, 1> f34;
	// Parition [18, 19) capacity = 1
	fifo<int, 1> f36;
	// Parition [19, 20) capacity = 1
	fifo<int, 1> f38;
	// Parition [20, 21) capacity = 1
	fifo<int, 1> f40;
	// Parition [21, 22) capacity = 1
	fifo<int, 1> f42;
	// Parition [22, 23) capacity = 1
	fifo<int, 1> f44;
	// Parition [23, 24) capacity = 1
	fifo<int, 1> f46;
	// Parition [24, 25) capacity = 1
	fifo<int, 1> f48;
	// Parition [25, 26) capacity = 1
	fifo<int, 1> f50;
	// Parition [26, 27) capacity = 1
	fifo<int, 1> f52;
	// Parition [27, 28) capacity = 1
	fifo<int, 1> f54;
	// Parition [28, 29) capacity = 1
	fifo<int, 1> f56;
	// Parition [29, 30) capacity = 1
	fifo<int, 1> f58;
	// Parition [30, 31) capacity = 1
	fifo<int, 1> f60;
	// Parition [31, 32) capacity = 1
	fifo<int, 1> f62;
	// Parition [32, 33) capacity = 1
	fifo<int, 1> f64;
	// Parition [33, 34) capacity = 1
	fifo<int, 1> f66;
	// Parition [34, 35) capacity = 1
	fifo<int, 1> f68;
	// Parition [35, 36) capacity = 1
	fifo<int, 1> f70;
	// Parition [36, 37) capacity = 1
	fifo<int, 1> f72;
	// Parition [37, 38) capacity = 1
	fifo<int, 1> f74;
	// Parition [38, 38] capacity = 1
	fifo<int, 1> f76;


	inline int peek_0() {
		return f0.back();
	}

	inline int peek_1() {
		return f2.back();
	}

	inline int peek_2() {
		return f4.back();
	}

	inline int peek_3() {
		return f6.back();
	}

	inline int peek_4() {
		return f8.back();
	}

	inline int peek_5() {
		return f10.back();
	}

	inline int peek_6() {
		return f12.back();
	}

	inline int peek_7() {
		return f14.back();
	}

	inline int peek_8() {
		return f16.back();
	}

	inline int peek_9() {
		return f18.back();
	}

	inline int peek_10() {
		return f20.back();
	}

	inline int peek_11() {
		return f22.back();
	}

	inline int peek_12() {
		return f24.back();
	}

	inline int peek_13() {
		return f26.back();
	}

	inline int peek_14() {
		return f28.back();
	}

	inline int peek_15() {
		return f30.back();
	}

	inline int peek_16() {
		return f32.back();
	}

	inline int peek_17() {
		return f34.back();
	}

	inline int peek_18() {
		return f36.back();
	}

	inline int peek_19() {
		return f38.back();
	}

	inline int peek_20() {
		return f40.back();
	}

	inline int peek_21() {
		return f42.back();
	}

	inline int peek_22() {
		return f44.back();
	}

	inline int peek_23() {
		return f46.back();
	}

	inline int peek_24() {
		return f48.back();
	}

	inline int peek_25() {
		return f50.back();
	}

	inline int peek_26() {
		return f52.back();
	}

	inline int peek_27() {
		return f54.back();
	}

	inline int peek_28() {
		return f56.back();
	}

	inline int peek_29() {
		return f58.back();
	}

	inline int peek_30() {
		return f60.back();
	}

	inline int peek_31() {
		return f62.back();
	}

	inline int peek_32() {
		return f64.back();
	}

	inline int peek_33() {
		return f66.back();
	}

	inline int peek_34() {
		return f68.back();
	}

	inline int peek_35() {
		return f70.back();
	}

	inline int peek_36() {
		return f72.back();
	}

	inline int peek_37() {
		return f74.back();
	}

	inline int peek_38() {
		return f76.back();
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
		if (offset == 3) {
			return f6.back();
		}
		if (offset == 4) {
			return f8.back();
		}
		if (offset == 5) {
			return f10.back();
		}
		if (offset == 6) {
			return f12.back();
		}
		if (offset == 7) {
			return f14.back();
		}
		if (offset == 8) {
			return f16.back();
		}
		if (offset == 9) {
			return f18.back();
		}
		if (offset == 10) {
			return f20.back();
		}
		if (offset == 11) {
			return f22.back();
		}
		if (offset == 12) {
			return f24.back();
		}
		if (offset == 13) {
			return f26.back();
		}
		if (offset == 14) {
			return f28.back();
		}
		if (offset == 15) {
			return f30.back();
		}
		if (offset == 16) {
			return f32.back();
		}
		if (offset == 17) {
			return f34.back();
		}
		if (offset == 18) {
			return f36.back();
		}
		if (offset == 19) {
			return f38.back();
		}
		if (offset == 20) {
			return f40.back();
		}
		if (offset == 21) {
			return f42.back();
		}
		if (offset == 22) {
			return f44.back();
		}
		if (offset == 23) {
			return f46.back();
		}
		if (offset == 24) {
			return f48.back();
		}
		if (offset == 25) {
			return f50.back();
		}
		if (offset == 26) {
			return f52.back();
		}
		if (offset == 27) {
			return f54.back();
		}
		if (offset == 28) {
			return f56.back();
		}
		if (offset == 29) {
			return f58.back();
		}
		if (offset == 30) {
			return f60.back();
		}
		if (offset == 31) {
			return f62.back();
		}
		if (offset == 32) {
			return f64.back();
		}
		if (offset == 33) {
			return f66.back();
		}
		if (offset == 34) {
			return f68.back();
		}
		if (offset == 35) {
			return f70.back();
		}
		if (offset == 36) {
			return f72.back();
		}
		if (offset == 37) {
			return f74.back();
		}
		if (offset == 38) {
			return f76.back();
		}
		cout << "Error: Unsupported offset in I_blurred_downsampled_blurred: " << offset << endl;
		assert(false);
		return 0;

	}

	inline void push(const int value) {
		f76.push(f74.back());
		f74.push(f72.back());
		f72.push(f70.back());
		f70.push(f68.back());
		f68.push(f66.back());
		f66.push(f64.back());
		f64.push(f62.back());
		f62.push(f60.back());
		f60.push(f58.back());
		f58.push(f56.back());
		f56.push(f54.back());
		f54.push(f52.back());
		f52.push(f50.back());
		f50.push(f48.back());
		f48.push(f46.back());
		f46.push(f44.back());
		f44.push(f42.back());
		f42.push(f40.back());
		f40.push(f38.back());
		f38.push(f36.back());
		f36.push(f34.back());
		f34.push(f32.back());
		f32.push(f30.back());
		f30.push(f28.back());
		f28.push(f26.back());
		f26.push(f24.back());
		f24.push(f22.back());
		f22.push(f20.back());
		f20.push(f18.back());
		f18.push(f16.back());
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};



inline void I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_4_write(int& I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_4, I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_4_cache& I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_4_delay) {
	I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_4_delay.push(I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_4);
}

inline int I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_downsampled_id0_15_select(I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_4_cache& I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_4_delay
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
	int value_I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_4 = I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_4_delay.peek((((-1 - I_blurred_downsampled_blurred_downsampled_c) % 2 == 0 && -5 + I_blurred_downsampled_blurred_downsampled_r == 0 && root == 0 && -1 + I_blurred_downsampled_blurred_downsampled_c >= 0 && 2 - I_blurred_downsampled_blurred_downsampled_c >= 0) ? (2) : ((-I_blurred_downsampled_blurred_downsampled_c) % 2 == 0 && -5 + I_blurred_downsampled_blurred_downsampled_r == 0 && root == 0 && I_blurred_downsampled_blurred_downsampled_c >= 0 && 2 - I_blurred_downsampled_blurred_downsampled_c >= 0) ? (((2 - I_blurred_downsampled_blurred_downsampled_c) + floord(I_blurred_downsampled_blurred_downsampled_c, 2))) : (-3 + I_blurred_downsampled_blurred_downsampled_c == 0 && -5 + I_blurred_downsampled_blurred_downsampled_r == 0 && root == 0) ? (1) : ((-1 - I_blurred_downsampled_blurred_downsampled_c) % 2 == 0 && (-1 - I_blurred_downsampled_blurred_downsampled_r) % 2 == 0 && root == 0 && -1 + I_blurred_downsampled_blurred_downsampled_r >= 0 && 2 - I_blurred_downsampled_blurred_downsampled_r >= 0 && -1 + I_blurred_downsampled_blurred_downsampled_c >= 0 && 5 - I_blurred_downsampled_blurred_downsampled_c >= 0) ? (((57 - I_blurred_downsampled_blurred_downsampled_c))/2) : ((-I_blurred_downsampled_blurred_downsampled_c) % 2 == 0 && (-1 - I_blurred_downsampled_blurred_downsampled_r) % 2 == 0 && root == 0 && -1 + I_blurred_downsampled_blurred_downsampled_r >= 0 && 2 - I_blurred_downsampled_blurred_downsampled_r >= 0 && I_blurred_downsampled_blurred_downsampled_c >= 0 && 5 - I_blurred_downsampled_blurred_downsampled_c >= 0) ? (((56 - I_blurred_downsampled_blurred_downsampled_c))/2) : ((-I_blurred_downsampled_blurred_downsampled_r) % 2 == 0 && root == 0 && I_blurred_downsampled_blurred_downsampled_r >= 0 && 2 - I_blurred_downsampled_blurred_downsampled_r >= 0 && I_blurred_downsampled_blurred_downsampled_c >= 0 && 5 - I_blurred_downsampled_blurred_downsampled_c >= 0) ? ((((76 - 13 * I_blurred_downsampled_blurred_downsampled_r) - 4 * I_blurred_downsampled_blurred_downsampled_c))/2) : ((-1 - I_blurred_downsampled_blurred_downsampled_c) % 2 == 0 && -3 + I_blurred_downsampled_blurred_downsampled_r == 0 && root == 0 && -1 + I_blurred_downsampled_blurred_downsampled_c >= 0 && 5 - I_blurred_downsampled_blurred_downsampled_c >= 0) ? (((31 - I_blurred_downsampled_blurred_downsampled_c))/2) : ((-I_blurred_downsampled_blurred_downsampled_c) % 2 == 0 && -3 + I_blurred_downsampled_blurred_downsampled_r == 0 && root == 0 && I_blurred_downsampled_blurred_downsampled_c >= 0 && 5 - I_blurred_downsampled_blurred_downsampled_c >= 0) ? (((30 - I_blurred_downsampled_blurred_downsampled_c))/2) : (((-1 - I_blurred_downsampled_blurred_downsampled_c) % 2 == 0 && -4 + I_blurred_downsampled_blurred_downsampled_r == 0 && root == 0 && I_blurred_downsampled_blurred_downsampled_c >= 0 && 5 - I_blurred_downsampled_blurred_downsampled_c >= 0) || ((-I_blurred_downsampled_blurred_downsampled_c) % 2 == 0 && -4 + I_blurred_downsampled_blurred_downsampled_r == 0 && root == 0 && I_blurred_downsampled_blurred_downsampled_c >= 0 && 5 - I_blurred_downsampled_blurred_downsampled_c >= 0)) ? ((12 - 2 * I_blurred_downsampled_blurred_downsampled_c)) : 0));
	return value_I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_4;
}

// Bundles...
// I_blurred_downsampled_blurred_conv_3_30_write
//	I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_4
inline void I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_write_bundle_write(int& /* width = 32*/I_blurred_downsampled_blurred_conv_3_30_write, I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_4_cache& I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_4_delay) {
	I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_4_write(I_blurred_downsampled_blurred_conv_3_30_write, I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_4_delay);
}

// I_blurred_downsampled_blurred_downsampled_id0_read
//	I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_downsampled_id0_15
inline int I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_downsampled_id0_read_bundle_read(I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_4_cache& I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_4_delay, int root, int I_blurred_downsampled_blurred_downsampled_r, int I_blurred_downsampled_blurred_downsampled_c) {
	int result;
	int I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_downsampled_id0_15_res = I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_downsampled_id0_15_select(I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_4_delay, root, I_blurred_downsampled_blurred_downsampled_r, I_blurred_downsampled_blurred_downsampled_c);
	set_at<0, 32>(result, I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_downsampled_id0_15_res);
	return result;
}



#include "hw_classes.h"

struct I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_14_cache {
	// Capacity: 12
	// Parition [0, 1) capacity = 1
	fifo<int, 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<int, 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<int, 1> f4;
	// Parition [3, 4) capacity = 1
	fifo<int, 1> f6;
	// Parition [4, 5) capacity = 1
	fifo<int, 1> f8;
	// Parition [5, 6) capacity = 1
	fifo<int, 1> f10;
	// Parition [6, 7) capacity = 1
	fifo<int, 1> f12;
	// Parition [7, 8) capacity = 1
	fifo<int, 1> f14;
	// Parition [8, 9) capacity = 1
	fifo<int, 1> f16;
	// Parition [9, 10) capacity = 1
	fifo<int, 1> f18;
	// Parition [10, 11) capacity = 1
	fifo<int, 1> f20;
	// Parition [11, 11] capacity = 1
	fifo<int, 1> f22;


	inline int peek_0() {
		return f0.back();
	}

	inline int peek_1() {
		return f2.back();
	}

	inline int peek_2() {
		return f4.back();
	}

	inline int peek_3() {
		return f6.back();
	}

	inline int peek_4() {
		return f8.back();
	}

	inline int peek_5() {
		return f10.back();
	}

	inline int peek_6() {
		return f12.back();
	}

	inline int peek_7() {
		return f14.back();
	}

	inline int peek_8() {
		return f16.back();
	}

	inline int peek_9() {
		return f18.back();
	}

	inline int peek_10() {
		return f20.back();
	}

	inline int peek_11() {
		return f22.back();
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
		if (offset == 3) {
			return f6.back();
		}
		if (offset == 4) {
			return f8.back();
		}
		if (offset == 5) {
			return f10.back();
		}
		if (offset == 6) {
			return f12.back();
		}
		if (offset == 7) {
			return f14.back();
		}
		if (offset == 8) {
			return f16.back();
		}
		if (offset == 9) {
			return f18.back();
		}
		if (offset == 10) {
			return f20.back();
		}
		if (offset == 11) {
			return f22.back();
		}
		cout << "Error: Unsupported offset in I_blurred_downsampled_blurred_downsampled: " << offset << endl;
		assert(false);
		return 0;

	}

	inline void push(const int value) {
		f22.push(f20.back());
		f20.push(f18.back());
		f18.push(f16.back());
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};



inline void I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_14_write(int& I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_14, I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_14_cache& I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_14_delay) {
	I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_14_delay.push(I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_14);
}

inline int I_blurred_downsampled_blurred_downsampled_store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled_17_select(I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_14_cache& I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_14_delay
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
	int value_I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_14 = I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_14_delay.peek(((-5 + I_blurred_downsampled_blurred_downsampled_out_r == 0 && root == 0 && I_blurred_downsampled_blurred_downsampled_out_c >= 0 && 1 - I_blurred_downsampled_blurred_downsampled_out_c >= 0) ? (1) : (-2 + I_blurred_downsampled_blurred_downsampled_out_c == 0 && -5 + I_blurred_downsampled_blurred_downsampled_out_r == 0 && root == 0) ? (1) : (root == 0 && I_blurred_downsampled_blurred_downsampled_out_r >= 0 && 1 - I_blurred_downsampled_blurred_downsampled_out_r >= 0 && I_blurred_downsampled_blurred_downsampled_out_c >= 0 && 4 - I_blurred_downsampled_blurred_downsampled_out_c >= 0) ? ((11 - I_blurred_downsampled_blurred_downsampled_out_c)) : (-5 + I_blurred_downsampled_blurred_downsampled_out_c == 0 && root == 0 && I_blurred_downsampled_blurred_downsampled_out_r >= 0 && 1 - I_blurred_downsampled_blurred_downsampled_out_r >= 0) ? (6) : ((-1 - I_blurred_downsampled_blurred_downsampled_out_c) % 3 == 0 && -2 + I_blurred_downsampled_blurred_downsampled_out_r == 0 && root == 0 && -2 + I_blurred_downsampled_blurred_downsampled_out_c >= 0 && 4 - I_blurred_downsampled_blurred_downsampled_out_c >= 0) ? (7) : (-5 + I_blurred_downsampled_blurred_downsampled_out_c == 0 && -2 + I_blurred_downsampled_blurred_downsampled_out_r == 0 && root == 0) ? (((8 + 2 * I_blurred_downsampled_blurred_downsampled_out_c))/3) : (-2 + I_blurred_downsampled_blurred_downsampled_out_r == 0 && root == 0 && I_blurred_downsampled_blurred_downsampled_out_c >= 0 && 4 - I_blurred_downsampled_blurred_downsampled_out_c >= 0 && I_blurred_downsampled_blurred_downsampled_out_c - 3*floord(1 + I_blurred_downsampled_blurred_downsampled_out_c, 3) >= 0) ? ((7 - floord(1 + I_blurred_downsampled_blurred_downsampled_out_c, 3))) : ((root == 0 && -3 + I_blurred_downsampled_blurred_downsampled_out_r >= 0 && 4 - I_blurred_downsampled_blurred_downsampled_out_r >= 0 && I_blurred_downsampled_blurred_downsampled_out_c >= 0 && 4 - I_blurred_downsampled_blurred_downsampled_out_c >= 0 && I_blurred_downsampled_blurred_downsampled_out_c - 3*floord(1 + I_blurred_downsampled_blurred_downsampled_out_c, 3) >= 0) || ((-1 - I_blurred_downsampled_blurred_downsampled_out_c) % 3 == 0 && root == 0 && -3 + I_blurred_downsampled_blurred_downsampled_out_r >= 0 && 4 - I_blurred_downsampled_blurred_downsampled_out_r >= 0 && I_blurred_downsampled_blurred_downsampled_out_c >= 0 && 4 - I_blurred_downsampled_blurred_downsampled_out_c >= 0)) ? ((5 - I_blurred_downsampled_blurred_downsampled_out_c)) : 0));
	return value_I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_14;
}

// Bundles...
// I_blurred_downsampled_blurred_downsampled_id0_write
//	I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_14
inline void I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_write_bundle_write(int& /* width = 32*/I_blurred_downsampled_blurred_downsampled_id0_write, I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_14_cache& I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_14_delay) {
	I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_14_write(I_blurred_downsampled_blurred_downsampled_id0_write, I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_14_delay);
}

// store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled_read
//	I_blurred_downsampled_blurred_downsampled_store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled_17
inline int I_blurred_downsampled_blurred_downsampled_store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled_read_bundle_read(I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_14_cache& I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_14_delay, int root, int I_blurred_downsampled_blurred_downsampled_out_r, int I_blurred_downsampled_blurred_downsampled_out_c) {
	int result;
	int I_blurred_downsampled_blurred_downsampled_store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled_17_res = I_blurred_downsampled_blurred_downsampled_store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled_17_select(I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_14_delay, root, I_blurred_downsampled_blurred_downsampled_out_r, I_blurred_downsampled_blurred_downsampled_out_c);
	set_at<0, 32>(result, I_blurred_downsampled_blurred_downsampled_store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled_17_res);
	return result;
}





// Operation logic
inline void I_blurred_downsampled_id0(I_blurred_I_blurred_conv_3_30_20_cache& I_blurred_I_blurred_conv_3_30_20, I_blurred_downsampled_I_blurred_downsampled_id0_0_cache& I_blurred_downsampled_I_blurred_downsampled_id0_0, int root, int I_blurred_downsampled_r, int I_blurred_downsampled_c) {
	// Consume: I_blurred
	auto I_blurred_2_m_I_blurred_downsampled_r_c__2_m_I_blurred_downsampled_c_value = I_blurred_I_blurred_downsampled_id0_read_bundle_read(I_blurred_I_blurred_conv_3_30_20/* source_delay */, root, I_blurred_downsampled_r, I_blurred_downsampled_c);
	// Apply function: id
	// Arg: I_blurred_2_m_I_blurred_downsampled_r_c__2_m_I_blurred_downsampled_c_value
	// Arg buf: I_blurred
	auto compute_result = id(I_blurred_2_m_I_blurred_downsampled_r_c__2_m_I_blurred_downsampled_c_value);
	// Produce: I_blurred_downsampled
	// Buffer: I_blurred_downsampled, Op: I_blurred_downsampled_id0
	// Possible ports...
		// I_blurred_downsampled_I_blurred_downsampled_id0_0
	I_blurred_downsampled_I_blurred_downsampled_id0_write_bundle_write(compute_result, I_blurred_downsampled_I_blurred_downsampled_id0_0 /* output src_delay */);
}

inline void store_I_blurred_downsampled_out_from_I_blurred_downsampled(I_blurred_downsampled_I_blurred_downsampled_id0_0_cache& I_blurred_downsampled_I_blurred_downsampled_id0_0, HWStream<int>& I_blurred_downsampled_out, int root, int I_blurred_downsampled_out_r, int I_blurred_downsampled_out_c) {
	// Consume: I_blurred_downsampled
	auto I_blurred_downsampled_I_blurred_downsampled_out_r_c__I_blurred_downsampled_out_c_value = I_blurred_downsampled_store_I_blurred_downsampled_out_from_I_blurred_downsampled_read_bundle_read(I_blurred_downsampled_I_blurred_downsampled_id0_0/* source_delay */, root, I_blurred_downsampled_out_r, I_blurred_downsampled_out_c);
	// Produce: I_blurred_downsampled_out
	I_blurred_downsampled_out.write(I_blurred_downsampled_I_blurred_downsampled_out_r_c__I_blurred_downsampled_out_c_value);
}

inline void I_blurred_downsampled_blurred_conv_3_30(I_blurred_downsampled_I_blurred_downsampled_id0_0_cache& I_blurred_downsampled_I_blurred_downsampled_id0_0, I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_4_cache& I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_4, int root, int I_blurred_downsampled_blurred_r, int I_blurred_downsampled_blurred_c) {
	// Consume: I_blurred_downsampled
	auto I_blurred_downsampled_I_blurred_downsampled_blurred_r__p__0_c__I_blurred_downsampled_blurred_c__p__0_value = I_blurred_downsampled_I_blurred_downsampled_blurred_conv_3_30_read_bundle_read(I_blurred_downsampled_I_blurred_downsampled_id0_0/* source_delay */, root, I_blurred_downsampled_blurred_r, I_blurred_downsampled_blurred_c);
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
		// I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_4
	I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_write_bundle_write(compute_result, I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_4 /* output src_delay */);
}

inline void I_blurred_downsampled_blurred_downsampled_id0(I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_4_cache& I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_4, I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_14_cache& I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_14, int root, int I_blurred_downsampled_blurred_downsampled_r, int I_blurred_downsampled_blurred_downsampled_c) {
	// Consume: I_blurred_downsampled_blurred
	auto I_blurred_downsampled_blurred_2_m_I_blurred_downsampled_blurred_downsampled_r_c__2_m_I_blurred_downsampled_blurred_downsampled_c_value = I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_downsampled_id0_read_bundle_read(I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_4/* source_delay */, root, I_blurred_downsampled_blurred_downsampled_r, I_blurred_downsampled_blurred_downsampled_c);
	// Apply function: id
	// Arg: I_blurred_downsampled_blurred_2_m_I_blurred_downsampled_blurred_downsampled_r_c__2_m_I_blurred_downsampled_blurred_downsampled_c_value
	// Arg buf: I_blurred_downsampled_blurred
	auto compute_result = id(I_blurred_downsampled_blurred_2_m_I_blurred_downsampled_blurred_downsampled_r_c__2_m_I_blurred_downsampled_blurred_downsampled_c_value);
	// Produce: I_blurred_downsampled_blurred_downsampled
	// Buffer: I_blurred_downsampled_blurred_downsampled, Op: I_blurred_downsampled_blurred_downsampled_id0
	// Possible ports...
		// I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_14
	I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_write_bundle_write(compute_result, I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_14 /* output src_delay */);
}

inline void store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled(I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_14_cache& I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_14, HWStream<int>& I_blurred_downsampled_blurred_downsampled_out, int root, int I_blurred_downsampled_blurred_downsampled_out_r, int I_blurred_downsampled_blurred_downsampled_out_c) {
	// Consume: I_blurred_downsampled_blurred_downsampled
	auto I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_out_r_c__I_blurred_downsampled_blurred_downsampled_out_c_value = I_blurred_downsampled_blurred_downsampled_store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled_read_bundle_read(I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_14/* source_delay */, root, I_blurred_downsampled_blurred_downsampled_out_r, I_blurred_downsampled_blurred_downsampled_out_c);
	// Produce: I_blurred_downsampled_blurred_downsampled_out
	I_blurred_downsampled_blurred_downsampled_out.write(I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_out_r_c__I_blurred_downsampled_blurred_downsampled_out_c_value);
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
	I_blurred_downsampled_I_blurred_downsampled_id0_0_cache I_blurred_downsampled_I_blurred_downsampled_id0_0;
	I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_4_cache I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_4;
	I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_14_cache I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_14;
	for (int c0 = 0; c0 <= 31; c0 += 1)
	  for (int c1 = 0; c1 <= 31; c1 += 1) {
	    store_I_from_in(in, I_store_I_from_in_18, 0, c0, c1);
	    if (c0 >= 2 && c1 >= 2) {
	      I_blurred_conv_3_30(I_store_I_from_in_18, I_blurred_I_blurred_conv_3_30_20, 0, c0 - 2, c1 - 2);
	      if (c0 % 2 == 0 && c1 % 2 == 0) {
	        I_blurred_downsampled_id0(I_blurred_I_blurred_conv_3_30_20, I_blurred_downsampled_I_blurred_downsampled_id0_0, 0, (c0 / 2) - 1, (c1 / 2) - 1);
	        if (c0 >= 6 && c1 >= 6)
	          I_blurred_downsampled_blurred_conv_3_30(I_blurred_downsampled_I_blurred_downsampled_id0_0, I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_4, 0, (c0 / 2) - 3, (c1 / 2) - 3);
	      }
	      if (c0 >= 11 && c0 <= 26 && c1 >= 11 && c1 <= 26 && (c0 + 1) % 3 == 0 && (c1 + 1) % 3 == 0)
	        I_blurred_downsampled_blurred_downsampled_id0(I_blurred_downsampled_blurred_I_blurred_downsampled_blurred_conv_3_30_4, I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_14, 0, (c0 - 11) / 3, (c1 - 11) / 3);
	      if (c0 % 2 == 0 && c1 % 2 == 0) {
	        store_I_blurred_downsampled_out_from_I_blurred_downsampled(I_blurred_downsampled_I_blurred_downsampled_id0_0, I_blurred_downsampled_out, 0, (c0 / 2) - 1, (c1 / 2) - 1);
	        if (c0 >= 16 && c0 <= 26 && c1 >= 16 && c1 <= 26)
	          store_I_blurred_downsampled_blurred_downsampled_out_from_I_blurred_downsampled_blurred_downsampled(I_blurred_downsampled_blurred_downsampled_I_blurred_downsampled_blurred_downsampled_id0_14, I_blurred_downsampled_blurred_downsampled_out, 0, (c0 / 2) - 8, (c1 / 2) - 8);
	      }
	    }
	  }
	
}
