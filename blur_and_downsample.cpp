#include "conv_3x3.h"

#include "hw_classes.h"

struct I_store_I_from_in_4_cache {
	// Capacity: 33
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 15) capacity = 12
	fifo<hw_uint<32> , 12> f5;
	// Parition [15, 16) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [16, 17) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [17, 18) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [18, 30) capacity = 12
	fifo<hw_uint<32> , 12> f11;
	// Parition [30, 31) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [31, 32) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [32, 32] capacity = 1
	fifo<hw_uint<32> , 1> f16;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_14() {
		return f5.back();
	}

	inline hw_uint<32>  peek_15() {
		return f6.back();
	}

	inline hw_uint<32>  peek_16() {
		return f8.back();
	}

	inline hw_uint<32>  peek_17() {
		return f10.back();
	}

	inline hw_uint<32>  peek_29() {
		return f11.back();
	}

	inline hw_uint<32>  peek_30() {
		return f12.back();
	}

	inline hw_uint<32>  peek_31() {
		return f14.back();
	}

	inline hw_uint<32>  peek_32() {
		return f16.back();
	}



	inline hw_uint<32>  peek(const int offset) {
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
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
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



inline void I_store_I_from_in_4_write(hw_uint<32> & I_store_I_from_in_4, I_store_I_from_in_4_cache& I_store_I_from_in_4_delay) {
	I_store_I_from_in_4_delay.push(I_store_I_from_in_4);
}

inline hw_uint<32>  I_I_blr_conv_3_30_10_select(I_store_I_from_in_4_cache& I_store_I_from_in_4_delay
, int root, int I_blr_r, int I_blr_c) {
	hw_uint<32>  value_I_store_I_from_in_4 = I_store_I_from_in_4_delay.peek_17();
	return value_I_store_I_from_in_4;
}

inline hw_uint<32>  I_I_blr_conv_3_30_11_select(I_store_I_from_in_4_cache& I_store_I_from_in_4_delay
, int root, int I_blr_r, int I_blr_c) {
	hw_uint<32>  value_I_store_I_from_in_4 = I_store_I_from_in_4_delay.peek_16();
	return value_I_store_I_from_in_4;
}

inline hw_uint<32>  I_I_blr_conv_3_30_12_select(I_store_I_from_in_4_cache& I_store_I_from_in_4_delay
, int root, int I_blr_r, int I_blr_c) {
	hw_uint<32>  value_I_store_I_from_in_4 = I_store_I_from_in_4_delay.peek_15();
	return value_I_store_I_from_in_4;
}

inline hw_uint<32>  I_I_blr_conv_3_30_13_select(I_store_I_from_in_4_cache& I_store_I_from_in_4_delay
, int root, int I_blr_r, int I_blr_c) {
	hw_uint<32>  value_I_store_I_from_in_4 = I_store_I_from_in_4_delay.peek_2();
	return value_I_store_I_from_in_4;
}

inline hw_uint<32>  I_I_blr_conv_3_30_14_select(I_store_I_from_in_4_cache& I_store_I_from_in_4_delay
, int root, int I_blr_r, int I_blr_c) {
	hw_uint<32>  value_I_store_I_from_in_4 = I_store_I_from_in_4_delay.peek_1();
	return value_I_store_I_from_in_4;
}

inline hw_uint<32>  I_I_blr_conv_3_30_15_select(I_store_I_from_in_4_cache& I_store_I_from_in_4_delay
, int root, int I_blr_r, int I_blr_c) {
	hw_uint<32>  value_I_store_I_from_in_4 = I_store_I_from_in_4_delay.peek_0();
	return value_I_store_I_from_in_4;
}

inline hw_uint<32>  I_I_blr_conv_3_30_7_select(I_store_I_from_in_4_cache& I_store_I_from_in_4_delay
, int root, int I_blr_r, int I_blr_c) {
	hw_uint<32>  value_I_store_I_from_in_4 = I_store_I_from_in_4_delay.peek_32();
	return value_I_store_I_from_in_4;
}

inline hw_uint<32>  I_I_blr_conv_3_30_8_select(I_store_I_from_in_4_cache& I_store_I_from_in_4_delay
, int root, int I_blr_r, int I_blr_c) {
	hw_uint<32>  value_I_store_I_from_in_4 = I_store_I_from_in_4_delay.peek_31();
	return value_I_store_I_from_in_4;
}

inline hw_uint<32>  I_I_blr_conv_3_30_9_select(I_store_I_from_in_4_cache& I_store_I_from_in_4_delay
, int root, int I_blr_r, int I_blr_c) {
	hw_uint<32>  value_I_store_I_from_in_4 = I_store_I_from_in_4_delay.peek_30();
	return value_I_store_I_from_in_4;
}

// Bundles...
// I_blr_conv_3_30_read
//	I_I_blr_conv_3_30_7
//	I_I_blr_conv_3_30_8
//	I_I_blr_conv_3_30_9
//	I_I_blr_conv_3_30_10
//	I_I_blr_conv_3_30_11
//	I_I_blr_conv_3_30_12
//	I_I_blr_conv_3_30_13
//	I_I_blr_conv_3_30_14
//	I_I_blr_conv_3_30_15
inline hw_uint<288> I_I_blr_conv_3_30_read_bundle_read(I_store_I_from_in_4_cache& I_store_I_from_in_4_delay, int root, int I_blr_r, int I_blr_c) {
	hw_uint<288> result;
	hw_uint<32>  I_I_blr_conv_3_30_7_res = I_I_blr_conv_3_30_7_select(I_store_I_from_in_4_delay, root, I_blr_r, I_blr_c);
	set_at<0, 288>(result, I_I_blr_conv_3_30_7_res);
	hw_uint<32>  I_I_blr_conv_3_30_8_res = I_I_blr_conv_3_30_8_select(I_store_I_from_in_4_delay, root, I_blr_r, I_blr_c);
	set_at<32, 288>(result, I_I_blr_conv_3_30_8_res);
	hw_uint<32>  I_I_blr_conv_3_30_9_res = I_I_blr_conv_3_30_9_select(I_store_I_from_in_4_delay, root, I_blr_r, I_blr_c);
	set_at<64, 288>(result, I_I_blr_conv_3_30_9_res);
	hw_uint<32>  I_I_blr_conv_3_30_10_res = I_I_blr_conv_3_30_10_select(I_store_I_from_in_4_delay, root, I_blr_r, I_blr_c);
	set_at<96, 288>(result, I_I_blr_conv_3_30_10_res);
	hw_uint<32>  I_I_blr_conv_3_30_11_res = I_I_blr_conv_3_30_11_select(I_store_I_from_in_4_delay, root, I_blr_r, I_blr_c);
	set_at<128, 288>(result, I_I_blr_conv_3_30_11_res);
	hw_uint<32>  I_I_blr_conv_3_30_12_res = I_I_blr_conv_3_30_12_select(I_store_I_from_in_4_delay, root, I_blr_r, I_blr_c);
	set_at<160, 288>(result, I_I_blr_conv_3_30_12_res);
	hw_uint<32>  I_I_blr_conv_3_30_13_res = I_I_blr_conv_3_30_13_select(I_store_I_from_in_4_delay, root, I_blr_r, I_blr_c);
	set_at<192, 288>(result, I_I_blr_conv_3_30_13_res);
	hw_uint<32>  I_I_blr_conv_3_30_14_res = I_I_blr_conv_3_30_14_select(I_store_I_from_in_4_delay, root, I_blr_r, I_blr_c);
	set_at<224, 288>(result, I_I_blr_conv_3_30_14_res);
	hw_uint<32>  I_I_blr_conv_3_30_15_res = I_I_blr_conv_3_30_15_select(I_store_I_from_in_4_delay, root, I_blr_r, I_blr_c);
	set_at<256, 288>(result, I_I_blr_conv_3_30_15_res);
	return result;
}

// store_I_from_in_write
//	I_store_I_from_in_4
inline void I_store_I_from_in_write_bundle_write(hw_uint<32> & store_I_from_in_write, I_store_I_from_in_4_cache& I_store_I_from_in_4_delay) {
	I_store_I_from_in_4_write(store_I_from_in_write, I_store_I_from_in_4_delay);
}



#include "hw_classes.h"

struct I_blr_I_blr_conv_3_30_6_cache {
	// Capacity: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};



inline void I_blr_I_blr_conv_3_30_6_write(hw_uint<32> & I_blr_I_blr_conv_3_30_6, I_blr_I_blr_conv_3_30_6_cache& I_blr_I_blr_conv_3_30_6_delay) {
	I_blr_I_blr_conv_3_30_6_delay.push(I_blr_I_blr_conv_3_30_6);
}

inline hw_uint<32>  I_blr_I_blr_ds_id0_3_select(I_blr_I_blr_conv_3_30_6_cache& I_blr_I_blr_conv_3_30_6_delay
, int root, int I_blr_ds_r, int I_blr_ds_c) {
	hw_uint<32>  value_I_blr_I_blr_conv_3_30_6 = I_blr_I_blr_conv_3_30_6_delay.peek_0();
	return value_I_blr_I_blr_conv_3_30_6;
}

// Bundles...
// I_blr_conv_3_30_write
//	I_blr_I_blr_conv_3_30_6
inline void I_blr_I_blr_conv_3_30_write_bundle_write(hw_uint<32> & I_blr_conv_3_30_write, I_blr_I_blr_conv_3_30_6_cache& I_blr_I_blr_conv_3_30_6_delay) {
	I_blr_I_blr_conv_3_30_6_write(I_blr_conv_3_30_write, I_blr_I_blr_conv_3_30_6_delay);
}

// I_blr_ds_id0_read
//	I_blr_I_blr_ds_id0_3
inline hw_uint<32> I_blr_I_blr_ds_id0_read_bundle_read(I_blr_I_blr_conv_3_30_6_cache& I_blr_I_blr_conv_3_30_6_delay, int root, int I_blr_ds_r, int I_blr_ds_c) {
	hw_uint<32> result;
	hw_uint<32>  I_blr_I_blr_ds_id0_3_res = I_blr_I_blr_ds_id0_3_select(I_blr_I_blr_conv_3_30_6_delay, root, I_blr_ds_r, I_blr_ds_c);
	set_at<0, 32>(result, I_blr_I_blr_ds_id0_3_res);
	return result;
}



#include "hw_classes.h"

struct I_blr_ds_I_blr_ds_id0_2_cache {
	// Capacity: 15
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 6) capacity = 3
	fifo<hw_uint<32> , 3> f5;
	// Parition [6, 7) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [7, 8) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [8, 9) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [9, 12) capacity = 3
	fifo<hw_uint<32> , 3> f11;
	// Parition [12, 13) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [13, 14) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [14, 14] capacity = 1
	fifo<hw_uint<32> , 1> f16;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_5() {
		return f5.back();
	}

	inline hw_uint<32>  peek_6() {
		return f6.back();
	}

	inline hw_uint<32>  peek_7() {
		return f8.back();
	}

	inline hw_uint<32>  peek_8() {
		return f10.back();
	}

	inline hw_uint<32>  peek_11() {
		return f11.back();
	}

	inline hw_uint<32>  peek_12() {
		return f12.back();
	}

	inline hw_uint<32>  peek_13() {
		return f14.back();
	}

	inline hw_uint<32>  peek_14() {
		return f16.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 2) {
			return f4.back();
		}
		if (offset == 5) {
			return f5.back();
		}
		if (offset == 6) {
			return f6.back();
		}
		if (offset == 7) {
			return f8.back();
		}
		if (offset == 8) {
			return f10.back();
		}
		if (offset == 11) {
			return f11.back();
		}
		if (offset == 12) {
			return f12.back();
		}
		if (offset == 13) {
			return f14.back();
		}
		if (offset == 14) {
			return f16.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_blr_ds: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
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



inline void I_blr_ds_I_blr_ds_id0_2_write(hw_uint<32> & I_blr_ds_I_blr_ds_id0_2, I_blr_ds_I_blr_ds_id0_2_cache& I_blr_ds_I_blr_ds_id0_2_delay) {
	I_blr_ds_I_blr_ds_id0_2_delay.push(I_blr_ds_I_blr_ds_id0_2);
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_17_select(I_blr_ds_I_blr_ds_id0_2_cache& I_blr_ds_I_blr_ds_id0_2_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	hw_uint<32>  value_I_blr_ds_I_blr_ds_id0_2 = I_blr_ds_I_blr_ds_id0_2_delay.peek_14();
	return value_I_blr_ds_I_blr_ds_id0_2;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_18_select(I_blr_ds_I_blr_ds_id0_2_cache& I_blr_ds_I_blr_ds_id0_2_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	hw_uint<32>  value_I_blr_ds_I_blr_ds_id0_2 = I_blr_ds_I_blr_ds_id0_2_delay.peek_13();
	return value_I_blr_ds_I_blr_ds_id0_2;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_19_select(I_blr_ds_I_blr_ds_id0_2_cache& I_blr_ds_I_blr_ds_id0_2_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	hw_uint<32>  value_I_blr_ds_I_blr_ds_id0_2 = I_blr_ds_I_blr_ds_id0_2_delay.peek_12();
	return value_I_blr_ds_I_blr_ds_id0_2;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_20_select(I_blr_ds_I_blr_ds_id0_2_cache& I_blr_ds_I_blr_ds_id0_2_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	hw_uint<32>  value_I_blr_ds_I_blr_ds_id0_2 = I_blr_ds_I_blr_ds_id0_2_delay.peek_8();
	return value_I_blr_ds_I_blr_ds_id0_2;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_21_select(I_blr_ds_I_blr_ds_id0_2_cache& I_blr_ds_I_blr_ds_id0_2_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	hw_uint<32>  value_I_blr_ds_I_blr_ds_id0_2 = I_blr_ds_I_blr_ds_id0_2_delay.peek_7();
	return value_I_blr_ds_I_blr_ds_id0_2;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_22_select(I_blr_ds_I_blr_ds_id0_2_cache& I_blr_ds_I_blr_ds_id0_2_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	hw_uint<32>  value_I_blr_ds_I_blr_ds_id0_2 = I_blr_ds_I_blr_ds_id0_2_delay.peek_6();
	return value_I_blr_ds_I_blr_ds_id0_2;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_23_select(I_blr_ds_I_blr_ds_id0_2_cache& I_blr_ds_I_blr_ds_id0_2_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	hw_uint<32>  value_I_blr_ds_I_blr_ds_id0_2 = I_blr_ds_I_blr_ds_id0_2_delay.peek_2();
	return value_I_blr_ds_I_blr_ds_id0_2;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_24_select(I_blr_ds_I_blr_ds_id0_2_cache& I_blr_ds_I_blr_ds_id0_2_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	hw_uint<32>  value_I_blr_ds_I_blr_ds_id0_2 = I_blr_ds_I_blr_ds_id0_2_delay.peek_1();
	return value_I_blr_ds_I_blr_ds_id0_2;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_25_select(I_blr_ds_I_blr_ds_id0_2_cache& I_blr_ds_I_blr_ds_id0_2_delay
, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	hw_uint<32>  value_I_blr_ds_I_blr_ds_id0_2 = I_blr_ds_I_blr_ds_id0_2_delay.peek_0();
	return value_I_blr_ds_I_blr_ds_id0_2;
}

// Bundles...
// I_blr_ds_blr_conv_3_30_read
//	I_blr_ds_I_blr_ds_blr_conv_3_30_17
//	I_blr_ds_I_blr_ds_blr_conv_3_30_18
//	I_blr_ds_I_blr_ds_blr_conv_3_30_19
//	I_blr_ds_I_blr_ds_blr_conv_3_30_20
//	I_blr_ds_I_blr_ds_blr_conv_3_30_21
//	I_blr_ds_I_blr_ds_blr_conv_3_30_22
//	I_blr_ds_I_blr_ds_blr_conv_3_30_23
//	I_blr_ds_I_blr_ds_blr_conv_3_30_24
//	I_blr_ds_I_blr_ds_blr_conv_3_30_25
inline hw_uint<288> I_blr_ds_I_blr_ds_blr_conv_3_30_read_bundle_read(I_blr_ds_I_blr_ds_id0_2_cache& I_blr_ds_I_blr_ds_id0_2_delay, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	hw_uint<288> result;
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_17_res = I_blr_ds_I_blr_ds_blr_conv_3_30_17_select(I_blr_ds_I_blr_ds_id0_2_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<0, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_17_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_18_res = I_blr_ds_I_blr_ds_blr_conv_3_30_18_select(I_blr_ds_I_blr_ds_id0_2_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<32, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_18_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_19_res = I_blr_ds_I_blr_ds_blr_conv_3_30_19_select(I_blr_ds_I_blr_ds_id0_2_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<64, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_19_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_20_res = I_blr_ds_I_blr_ds_blr_conv_3_30_20_select(I_blr_ds_I_blr_ds_id0_2_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<96, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_20_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_21_res = I_blr_ds_I_blr_ds_blr_conv_3_30_21_select(I_blr_ds_I_blr_ds_id0_2_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<128, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_21_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_22_res = I_blr_ds_I_blr_ds_blr_conv_3_30_22_select(I_blr_ds_I_blr_ds_id0_2_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<160, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_22_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_23_res = I_blr_ds_I_blr_ds_blr_conv_3_30_23_select(I_blr_ds_I_blr_ds_id0_2_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<192, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_23_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_24_res = I_blr_ds_I_blr_ds_blr_conv_3_30_24_select(I_blr_ds_I_blr_ds_id0_2_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<224, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_24_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_25_res = I_blr_ds_I_blr_ds_blr_conv_3_30_25_select(I_blr_ds_I_blr_ds_id0_2_delay, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<256, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_25_res);
	return result;
}

// I_blr_ds_id0_write
//	I_blr_ds_I_blr_ds_id0_2
inline void I_blr_ds_I_blr_ds_id0_write_bundle_write(hw_uint<32> & I_blr_ds_id0_write, I_blr_ds_I_blr_ds_id0_2_cache& I_blr_ds_I_blr_ds_id0_2_delay) {
	I_blr_ds_I_blr_ds_id0_2_write(I_blr_ds_id0_write, I_blr_ds_I_blr_ds_id0_2_delay);
}



#include "hw_classes.h"

struct I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16_cache {
	// Capacity: 8
	fifo<hw_uint<32> , 8> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(7 - offset);
  }

	inline hw_uint<32>  peek_0() {
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
		return f.peek(1);
	}

	inline hw_uint<32>  peek_2() {
		return f.peek(2);
	}

	inline hw_uint<32>  peek_3() {
		return f.peek(3);
	}

	inline hw_uint<32>  peek_4() {
		return f.peek(4);
	}

	inline hw_uint<32>  peek_5() {
		return f.peek(5);
	}

	inline hw_uint<32>  peek_6() {
		return f.peek(6);
	}

	inline hw_uint<32>  peek_7() {
		return f.peek(7);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};



inline void I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16_write(hw_uint<32> & I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16, I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16_cache& I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16_delay) {
	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16_delay.push(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16);
}

inline hw_uint<32>  I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_1_select(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16_cache& I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16_delay
, int root, int I_blr_ds_blr_out_r, int I_blr_ds_blr_out_c) {
	hw_uint<32>  value_I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16 = I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16_delay.peek((I_blr_ds_blr_out_c == 0 && -3 + I_blr_ds_blr_out_r == 0 && root == 0) ? (1) : (-1 + I_blr_ds_blr_out_c == 0 && -3 + I_blr_ds_blr_out_r == 0 && root == 0) ? (1) : (I_blr_ds_blr_out_r == 0 && root == 0 && I_blr_ds_blr_out_c >= 0 && 2 - I_blr_ds_blr_out_c >= 0) ? ((7 - I_blr_ds_blr_out_c)) : (-3 + I_blr_ds_blr_out_c == 0 && I_blr_ds_blr_out_r == 0 && root == 0) ? (4) : ((-1 - I_blr_ds_blr_out_c) % 2 == 0 && -1 + I_blr_ds_blr_out_r == 0 && root == 0 && -1 + I_blr_ds_blr_out_c >= 0 && 2 - I_blr_ds_blr_out_c >= 0) ? (5) : (-3 + I_blr_ds_blr_out_c == 0 && -1 + I_blr_ds_blr_out_r == 0 && root == 0) ? (((5 + I_blr_ds_blr_out_c))/2) : ((-I_blr_ds_blr_out_c) % 2 == 0 && -1 + I_blr_ds_blr_out_r == 0 && root == 0 && I_blr_ds_blr_out_c >= 0 && 2 - I_blr_ds_blr_out_c >= 0) ? (((10 - I_blr_ds_blr_out_c))/2) : (((-I_blr_ds_blr_out_c) % 2 == 0 && -2 + I_blr_ds_blr_out_r == 0 && root == 0 && I_blr_ds_blr_out_c >= 0 && 2 - I_blr_ds_blr_out_c >= 0) || ((-1 - I_blr_ds_blr_out_c) % 2 == 0 && -2 + I_blr_ds_blr_out_r == 0 && root == 0 && I_blr_ds_blr_out_c >= 0 && 2 - I_blr_ds_blr_out_c >= 0)) ? ((3 - I_blr_ds_blr_out_c)) : 0);
	return value_I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16;
}

// Bundles...
// I_blr_ds_blr_conv_3_30_write
//	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16
inline void I_blr_ds_blr_I_blr_ds_blr_conv_3_30_write_bundle_write(hw_uint<32> & I_blr_ds_blr_conv_3_30_write, I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16_cache& I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16_delay) {
	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16_write(I_blr_ds_blr_conv_3_30_write, I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16_delay);
}

// store_I_blr_ds_blr_out_from_I_blr_ds_blr_read
//	I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_1
inline hw_uint<32> I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_read_bundle_read(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16_cache& I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16_delay, int root, int I_blr_ds_blr_out_r, int I_blr_ds_blr_out_c) {
	hw_uint<32> result;
	hw_uint<32>  I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_1_res = I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_1_select(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16_delay, root, I_blr_ds_blr_out_r, I_blr_ds_blr_out_c);
	set_at<0, 32>(result, I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_1_res);
	return result;
}





// Operation logic
inline void store_I_blr_ds_blr_out_from_I_blr_ds_blr(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16_cache& I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16, HWStream<hw_uint<32>  >& I_blr_ds_blr_out, int root, int I_blr_ds_blr_out_r, int I_blr_ds_blr_out_c) {
	// Consume: I_blr_ds_blr
	auto I_blr_ds_blr_I_blr_ds_blr_out_r_c__I_blr_ds_blr_out_c_value = I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_read_bundle_read(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16/* source_delay */, root, I_blr_ds_blr_out_r, I_blr_ds_blr_out_c);
	// Produce: I_blr_ds_blr_out
	I_blr_ds_blr_out.write(I_blr_ds_blr_I_blr_ds_blr_out_r_c__I_blr_ds_blr_out_c_value);
}

inline void I_blr_ds_id0(I_blr_I_blr_conv_3_30_6_cache& I_blr_I_blr_conv_3_30_6, I_blr_ds_I_blr_ds_id0_2_cache& I_blr_ds_I_blr_ds_id0_2, int root, int I_blr_ds_r, int I_blr_ds_c) {
	// Consume: I_blr
	auto I_blr_2_m_I_blr_ds_r_c__2_m_I_blr_ds_c_value = I_blr_I_blr_ds_id0_read_bundle_read(I_blr_I_blr_conv_3_30_6/* source_delay */, root, I_blr_ds_r, I_blr_ds_c);
	// Apply function: id
	// Arg: I_blr_2_m_I_blr_ds_r_c__2_m_I_blr_ds_c_value
	// Arg buf: I_blr
	auto compute_result = id(I_blr_2_m_I_blr_ds_r_c__2_m_I_blr_ds_c_value);
	// Produce: I_blr_ds
	// Buffer: I_blr_ds, Op: I_blr_ds_id0
	// Possible ports...
		// I_blr_ds_I_blr_ds_id0_2
	I_blr_ds_I_blr_ds_id0_write_bundle_write(compute_result, I_blr_ds_I_blr_ds_id0_2 /* output src_delay */);
}

inline void store_I_from_in(HWStream<hw_uint<32>  >& in, I_store_I_from_in_4_cache& I_store_I_from_in_4, int root, int pr, int pc) {
	// Consume: in
	auto in_pr_c__pc_value = in.read();
	// Produce: I
	// Buffer: I, Op: store_I_from_in
	// Possible ports...
		// I_store_I_from_in_4
	I_store_I_from_in_write_bundle_write(in_pr_c__pc_value, I_store_I_from_in_4 /* output src_delay */);
}

inline void I_blr_conv_3_30(I_store_I_from_in_4_cache& I_store_I_from_in_4, I_blr_I_blr_conv_3_30_6_cache& I_blr_I_blr_conv_3_30_6, int root, int I_blr_r, int I_blr_c) {
	// Consume: I
	auto I_I_blr_r__p__0_c__I_blr_c__p__0_value = I_I_blr_conv_3_30_read_bundle_read(I_store_I_from_in_4/* source_delay */, root, I_blr_r, I_blr_c);
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
	auto compute_result = conv_3_3(I_I_blr_r__p__0_c__I_blr_c__p__0_value);
	// Produce: I_blr
	// Buffer: I_blr, Op: I_blr_conv_3_30
	// Possible ports...
		// I_blr_I_blr_conv_3_30_6
	I_blr_I_blr_conv_3_30_write_bundle_write(compute_result, I_blr_I_blr_conv_3_30_6 /* output src_delay */);
}

inline void I_blr_ds_blr_conv_3_30(I_blr_ds_I_blr_ds_id0_2_cache& I_blr_ds_I_blr_ds_id0_2, I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16_cache& I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	// Consume: I_blr_ds
	auto I_blr_ds_I_blr_ds_blr_r__p__0_c__I_blr_ds_blr_c__p__0_value = I_blr_ds_I_blr_ds_blr_conv_3_30_read_bundle_read(I_blr_ds_I_blr_ds_id0_2/* source_delay */, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
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
	auto compute_result = conv_3_3(I_blr_ds_I_blr_ds_blr_r__p__0_c__I_blr_ds_blr_c__p__0_value);
	// Produce: I_blr_ds_blr
	// Buffer: I_blr_ds_blr, Op: I_blr_ds_blr_conv_3_30
	// Possible ports...
		// I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16
	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_write_bundle_write(compute_result, I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16 /* output src_delay */);
}

// Driver function
void blur_and_downsample(HWStream<hw_uint<32>  >& in, HWStream<hw_uint<32> >& I_blr_ds_blr_out, HWStream<hw_uint<32>  >& out) {
	I_store_I_from_in_4_cache I_store_I_from_in_4;
	I_blr_I_blr_conv_3_30_6_cache I_blr_I_blr_conv_3_30_6;
	I_blr_ds_I_blr_ds_id0_2_cache I_blr_ds_I_blr_ds_id0_2;
	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16_cache I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16;
	for (int c0 = 0; c0 <= 14; c0 += 1)
	  for (int c1 = 0; c1 <= 14; c1 += 1) {
	    store_I_from_in(in, I_store_I_from_in_4, 0, c0, c1);
	    if (c0 >= 2 && c1 >= 2) {
	      I_blr_conv_3_30(I_store_I_from_in_4, I_blr_I_blr_conv_3_30_6, 0, c0 - 2, c1 - 2);
	      if (c0 <= 12 && c1 <= 12 && c0 % 2 == 0 && c1 % 2 == 0) {
	        I_blr_ds_id0(I_blr_I_blr_conv_3_30_6, I_blr_ds_I_blr_ds_id0_2, 0, (c0 / 2) - 1, (c1 / 2) - 1);
	        if (c0 >= 6 && c1 >= 6)
	          I_blr_ds_blr_conv_3_30(I_blr_ds_I_blr_ds_id0_2, I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16, 0, (c0 / 2) - 3, (c1 / 2) - 3);
	      }
	      if (c0 >= 9 && c0 <= 12 && c1 >= 9 && c1 <= 12)
	        store_I_blr_ds_blr_out_from_I_blr_ds_blr(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_16, I_blr_ds_blr_out, 0, c0 - 9, c1 - 9);
	    }
	  }
	
}
