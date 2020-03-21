#include "conv_3x3.h"

#include "hw_classes.h"

struct I_store_I_from_in_16_merged_banks_9_cache {
	// Capacity: 67
	// # of read delays: 9
	// read delays: 0, 1, 2, 32, 33, 34, 64, 65, 66
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 32) capacity = 29
	fifo<hw_uint<32> , 29> f5;
	// Parition [32, 33) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [33, 34) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [34, 35) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [35, 64) capacity = 29
	fifo<hw_uint<32> , 29> f11;
	// Parition [64, 65) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [65, 66) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [66, 66] capacity = 1
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

	inline hw_uint<32>  peek_31() {
		return f5.back();
	}

	inline hw_uint<32>  peek_32() {
		return f6.back();
	}

	inline hw_uint<32>  peek_33() {
		return f8.back();
	}

	inline hw_uint<32>  peek_34() {
		return f10.back();
	}

	inline hw_uint<32>  peek_63() {
		return f11.back();
	}

	inline hw_uint<32>  peek_64() {
		return f12.back();
	}

	inline hw_uint<32>  peek_65() {
		return f14.back();
	}

	inline hw_uint<32>  peek_66() {
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
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_store_I_from_in_16_merged_banks_9: " << offset << endl;
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

struct I_cache {
  I_store_I_from_in_16_merged_banks_9_cache I_store_I_from_in_16_merged_banks_9;
};



inline void I_store_I_from_in_16_write(hw_uint<32> & I_store_I_from_in_16, I_cache& I, int root, int pr, int pc) {
  I.I_store_I_from_in_16_merged_banks_9.push(I_store_I_from_in_16);
}

inline hw_uint<32>  I_I_blr_conv_3_30_19_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
	// lexmax events: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> store_I_from_in[root' = 0, pr = I_blr_r, pc = I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // I_I_blr_conv_3_30_19 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[I_blr_r, I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
	auto value_I_store_I_from_in_16 = I.I_store_I_from_in_16_merged_banks_9.peek_66();
	return value_I_store_I_from_in_16;
}

inline hw_uint<32>  I_I_blr_conv_3_30_20_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
	// lexmax events: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> store_I_from_in[root' = 0, pr = I_blr_r, pc = 1 + I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // I_I_blr_conv_3_30_20 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[I_blr_r, 1 + I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
	auto value_I_store_I_from_in_16 = I.I_store_I_from_in_16_merged_banks_9.peek_65();
	return value_I_store_I_from_in_16;
}

inline hw_uint<32>  I_I_blr_conv_3_30_21_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
	// lexmax events: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> store_I_from_in[root' = 0, pr = I_blr_r, pc = 2 + I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // I_I_blr_conv_3_30_21 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[I_blr_r, 2 + I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
	auto value_I_store_I_from_in_16 = I.I_store_I_from_in_16_merged_banks_9.peek_64();
	return value_I_store_I_from_in_16;
}

inline hw_uint<32>  I_I_blr_conv_3_30_22_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
	// lexmax events: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> store_I_from_in[root' = 0, pr = 1 + I_blr_r, pc = I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // I_I_blr_conv_3_30_22 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[1 + I_blr_r, I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
	auto value_I_store_I_from_in_16 = I.I_store_I_from_in_16_merged_banks_9.peek_34();
	return value_I_store_I_from_in_16;
}

inline hw_uint<32>  I_I_blr_conv_3_30_23_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
	// lexmax events: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> store_I_from_in[root' = 0, pr = 1 + I_blr_r, pc = 1 + I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // I_I_blr_conv_3_30_23 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[1 + I_blr_r, 1 + I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
	auto value_I_store_I_from_in_16 = I.I_store_I_from_in_16_merged_banks_9.peek_33();
	return value_I_store_I_from_in_16;
}

inline hw_uint<32>  I_I_blr_conv_3_30_24_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
	// lexmax events: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> store_I_from_in[root' = 0, pr = 1 + I_blr_r, pc = 2 + I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // I_I_blr_conv_3_30_24 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[1 + I_blr_r, 2 + I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
	auto value_I_store_I_from_in_16 = I.I_store_I_from_in_16_merged_banks_9.peek_32();
	return value_I_store_I_from_in_16;
}

inline hw_uint<32>  I_I_blr_conv_3_30_25_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
	// lexmax events: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> store_I_from_in[root' = 0, pr = 2 + I_blr_r, pc = I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // I_I_blr_conv_3_30_25 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[2 + I_blr_r, I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
	auto value_I_store_I_from_in_16 = I.I_store_I_from_in_16_merged_banks_9.peek_2();
	return value_I_store_I_from_in_16;
}

inline hw_uint<32>  I_I_blr_conv_3_30_26_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
	// lexmax events: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> store_I_from_in[root' = 0, pr = 2 + I_blr_r, pc = 1 + I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // I_I_blr_conv_3_30_26 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[2 + I_blr_r, 1 + I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
	auto value_I_store_I_from_in_16 = I.I_store_I_from_in_16_merged_banks_9.peek_1();
	return value_I_store_I_from_in_16;
}

inline hw_uint<32>  I_I_blr_conv_3_30_27_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
	// lexmax events: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> store_I_from_in[root' = 0, pr = 2 + I_blr_r, pc = 2 + I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // I_I_blr_conv_3_30_27 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[2 + I_blr_r, 2 + I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
	auto value_I_store_I_from_in_16 = I.I_store_I_from_in_16_merged_banks_9.peek_0();
	return value_I_store_I_from_in_16;
}

// # of bundles = 2
// I_blr_conv_3_30_read
//	I_I_blr_conv_3_30_19
//	I_I_blr_conv_3_30_20
//	I_I_blr_conv_3_30_21
//	I_I_blr_conv_3_30_22
//	I_I_blr_conv_3_30_23
//	I_I_blr_conv_3_30_24
//	I_I_blr_conv_3_30_25
//	I_I_blr_conv_3_30_26
//	I_I_blr_conv_3_30_27
inline hw_uint<288> I_I_blr_conv_3_30_read_bundle_read(I_cache& I, int root, int I_blr_r, int I_blr_c) {
	hw_uint<288> result;
	hw_uint<32>  I_I_blr_conv_3_30_19_res = I_I_blr_conv_3_30_19_select(I, root, I_blr_r, I_blr_c);
	set_at<0, 288>(result, I_I_blr_conv_3_30_19_res);
	hw_uint<32>  I_I_blr_conv_3_30_20_res = I_I_blr_conv_3_30_20_select(I, root, I_blr_r, I_blr_c);
	set_at<32, 288>(result, I_I_blr_conv_3_30_20_res);
	hw_uint<32>  I_I_blr_conv_3_30_21_res = I_I_blr_conv_3_30_21_select(I, root, I_blr_r, I_blr_c);
	set_at<64, 288>(result, I_I_blr_conv_3_30_21_res);
	hw_uint<32>  I_I_blr_conv_3_30_22_res = I_I_blr_conv_3_30_22_select(I, root, I_blr_r, I_blr_c);
	set_at<96, 288>(result, I_I_blr_conv_3_30_22_res);
	hw_uint<32>  I_I_blr_conv_3_30_23_res = I_I_blr_conv_3_30_23_select(I, root, I_blr_r, I_blr_c);
	set_at<128, 288>(result, I_I_blr_conv_3_30_23_res);
	hw_uint<32>  I_I_blr_conv_3_30_24_res = I_I_blr_conv_3_30_24_select(I, root, I_blr_r, I_blr_c);
	set_at<160, 288>(result, I_I_blr_conv_3_30_24_res);
	hw_uint<32>  I_I_blr_conv_3_30_25_res = I_I_blr_conv_3_30_25_select(I, root, I_blr_r, I_blr_c);
	set_at<192, 288>(result, I_I_blr_conv_3_30_25_res);
	hw_uint<32>  I_I_blr_conv_3_30_26_res = I_I_blr_conv_3_30_26_select(I, root, I_blr_r, I_blr_c);
	set_at<224, 288>(result, I_I_blr_conv_3_30_26_res);
	hw_uint<32>  I_I_blr_conv_3_30_27_res = I_I_blr_conv_3_30_27_select(I, root, I_blr_r, I_blr_c);
	set_at<256, 288>(result, I_I_blr_conv_3_30_27_res);
	return result;
}

// store_I_from_in_write
//	I_store_I_from_in_16
inline void I_store_I_from_in_write_bundle_write(hw_uint<32>& store_I_from_in_write, I_cache& I, int root, int pr, int pc) {
	hw_uint<32>  I_store_I_from_in_16_res = store_I_from_in_write.extract<0, 31>();
	I_store_I_from_in_16_write(I_store_I_from_in_16_res, I, root, pr, pc);
}



#include "hw_classes.h"

struct I_blr_I_blr_conv_3_30_18_merged_banks_1_cache {
	// Capacity: 1
	// # of read delays: 1
	// read delays: 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct I_blr_cache {
  I_blr_I_blr_conv_3_30_18_merged_banks_1_cache I_blr_I_blr_conv_3_30_18_merged_banks_1;
};



inline void I_blr_I_blr_conv_3_30_18_write(hw_uint<32> & I_blr_I_blr_conv_3_30_18, I_blr_cache& I_blr, int root, int I_blr_r, int I_blr_c) {
  I_blr.I_blr_I_blr_conv_3_30_18_merged_banks_1.push(I_blr_I_blr_conv_3_30_18);
}

inline hw_uint<32>  I_blr_I_blr_ds_id0_13_select(I_blr_cache& I_blr, int root, int I_blr_ds_r, int I_blr_ds_c) {
	// lexmax events: { I_blr_ds_id0[root = 0, I_blr_ds_r, I_blr_ds_c] -> I_blr_conv_3_30[root' = 0, I_blr_r = 2I_blr_ds_r, I_blr_c = 2I_blr_ds_c] : 0 <= I_blr_ds_r <= 14 and 0 <= I_blr_ds_c <= 14 }
  // I_blr_I_blr_ds_id0_13 read pattern: { I_blr_ds_id0[root = 0, I_blr_ds_r, I_blr_ds_c] -> I_blr[2I_blr_ds_r, 2I_blr_ds_c] : 0 <= I_blr_ds_r <= 14 and 0 <= I_blr_ds_c <= 14 }
	auto value_I_blr_I_blr_conv_3_30_18 = I_blr.I_blr_I_blr_conv_3_30_18_merged_banks_1.peek_0();
	return value_I_blr_I_blr_conv_3_30_18;
}

// # of bundles = 2
// I_blr_conv_3_30_write
//	I_blr_I_blr_conv_3_30_18
inline void I_blr_I_blr_conv_3_30_write_bundle_write(hw_uint<32>& I_blr_conv_3_30_write, I_blr_cache& I_blr, int root, int I_blr_r, int I_blr_c) {
	hw_uint<32>  I_blr_I_blr_conv_3_30_18_res = I_blr_conv_3_30_write.extract<0, 31>();
	I_blr_I_blr_conv_3_30_18_write(I_blr_I_blr_conv_3_30_18_res, I_blr, root, I_blr_r, I_blr_c);
}

// I_blr_ds_id0_read
//	I_blr_I_blr_ds_id0_13
inline hw_uint<32> I_blr_I_blr_ds_id0_read_bundle_read(I_blr_cache& I_blr, int root, int I_blr_ds_r, int I_blr_ds_c) {
	hw_uint<32> result;
	hw_uint<32>  I_blr_I_blr_ds_id0_13_res = I_blr_I_blr_ds_id0_13_select(I_blr, root, I_blr_ds_r, I_blr_ds_c);
	set_at<0, 32>(result, I_blr_I_blr_ds_id0_13_res);
	return result;
}



#include "hw_classes.h"

struct I_blr_ds_I_blr_ds_id0_12_merged_banks_9_cache {
	// Capacity: 33
	// # of read delays: 9
	// read delays: 0, 1, 2, 15, 16, 17, 30, 31, 32
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
		cout << "Error: Unsupported offset in I_blr_ds_I_blr_ds_id0_12_merged_banks_9: " << offset << endl;
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

struct I_blr_ds_cache {
  I_blr_ds_I_blr_ds_id0_12_merged_banks_9_cache I_blr_ds_I_blr_ds_id0_12_merged_banks_9;
};



inline void I_blr_ds_I_blr_ds_id0_12_write(hw_uint<32> & I_blr_ds_I_blr_ds_id0_12, I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_r, int I_blr_ds_c) {
  I_blr_ds.I_blr_ds_I_blr_ds_id0_12_merged_banks_9.push(I_blr_ds_I_blr_ds_id0_12);
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_1_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	// lexmax events: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds_id0[root' = 0, I_blr_ds_r = I_blr_ds_blr_r, I_blr_ds_c = I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // I_blr_ds_I_blr_ds_blr_conv_3_30_1 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
	auto value_I_blr_ds_I_blr_ds_id0_12 = I_blr_ds.I_blr_ds_I_blr_ds_id0_12_merged_banks_9.peek_32();
	return value_I_blr_ds_I_blr_ds_id0_12;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_2_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	// lexmax events: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds_id0[root' = 0, I_blr_ds_r = I_blr_ds_blr_r, I_blr_ds_c = 1 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // I_blr_ds_I_blr_ds_blr_conv_3_30_2 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[I_blr_ds_blr_r, 1 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
	auto value_I_blr_ds_I_blr_ds_id0_12 = I_blr_ds.I_blr_ds_I_blr_ds_id0_12_merged_banks_9.peek_31();
	return value_I_blr_ds_I_blr_ds_id0_12;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_3_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	// lexmax events: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds_id0[root' = 0, I_blr_ds_r = I_blr_ds_blr_r, I_blr_ds_c = 2 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // I_blr_ds_I_blr_ds_blr_conv_3_30_3 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[I_blr_ds_blr_r, 2 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
	auto value_I_blr_ds_I_blr_ds_id0_12 = I_blr_ds.I_blr_ds_I_blr_ds_id0_12_merged_banks_9.peek_30();
	return value_I_blr_ds_I_blr_ds_id0_12;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_4_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	// lexmax events: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds_id0[root' = 0, I_blr_ds_r = 1 + I_blr_ds_blr_r, I_blr_ds_c = I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // I_blr_ds_I_blr_ds_blr_conv_3_30_4 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[1 + I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
	auto value_I_blr_ds_I_blr_ds_id0_12 = I_blr_ds.I_blr_ds_I_blr_ds_id0_12_merged_banks_9.peek_17();
	return value_I_blr_ds_I_blr_ds_id0_12;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_5_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	// lexmax events: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds_id0[root' = 0, I_blr_ds_r = 1 + I_blr_ds_blr_r, I_blr_ds_c = 1 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // I_blr_ds_I_blr_ds_blr_conv_3_30_5 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[1 + I_blr_ds_blr_r, 1 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
	auto value_I_blr_ds_I_blr_ds_id0_12 = I_blr_ds.I_blr_ds_I_blr_ds_id0_12_merged_banks_9.peek_16();
	return value_I_blr_ds_I_blr_ds_id0_12;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_6_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	// lexmax events: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds_id0[root' = 0, I_blr_ds_r = 1 + I_blr_ds_blr_r, I_blr_ds_c = 2 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // I_blr_ds_I_blr_ds_blr_conv_3_30_6 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[1 + I_blr_ds_blr_r, 2 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
	auto value_I_blr_ds_I_blr_ds_id0_12 = I_blr_ds.I_blr_ds_I_blr_ds_id0_12_merged_banks_9.peek_15();
	return value_I_blr_ds_I_blr_ds_id0_12;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_7_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	// lexmax events: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds_id0[root' = 0, I_blr_ds_r = 2 + I_blr_ds_blr_r, I_blr_ds_c = I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // I_blr_ds_I_blr_ds_blr_conv_3_30_7 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[2 + I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
	auto value_I_blr_ds_I_blr_ds_id0_12 = I_blr_ds.I_blr_ds_I_blr_ds_id0_12_merged_banks_9.peek_2();
	return value_I_blr_ds_I_blr_ds_id0_12;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_8_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	// lexmax events: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds_id0[root' = 0, I_blr_ds_r = 2 + I_blr_ds_blr_r, I_blr_ds_c = 1 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // I_blr_ds_I_blr_ds_blr_conv_3_30_8 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[2 + I_blr_ds_blr_r, 1 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
	auto value_I_blr_ds_I_blr_ds_id0_12 = I_blr_ds.I_blr_ds_I_blr_ds_id0_12_merged_banks_9.peek_1();
	return value_I_blr_ds_I_blr_ds_id0_12;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_9_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	// lexmax events: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds_id0[root' = 0, I_blr_ds_r = 2 + I_blr_ds_blr_r, I_blr_ds_c = 2 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // I_blr_ds_I_blr_ds_blr_conv_3_30_9 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[2 + I_blr_ds_blr_r, 2 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
	auto value_I_blr_ds_I_blr_ds_id0_12 = I_blr_ds.I_blr_ds_I_blr_ds_id0_12_merged_banks_9.peek_0();
	return value_I_blr_ds_I_blr_ds_id0_12;
}

// # of bundles = 2
// I_blr_ds_blr_conv_3_30_read
//	I_blr_ds_I_blr_ds_blr_conv_3_30_1
//	I_blr_ds_I_blr_ds_blr_conv_3_30_2
//	I_blr_ds_I_blr_ds_blr_conv_3_30_3
//	I_blr_ds_I_blr_ds_blr_conv_3_30_4
//	I_blr_ds_I_blr_ds_blr_conv_3_30_5
//	I_blr_ds_I_blr_ds_blr_conv_3_30_6
//	I_blr_ds_I_blr_ds_blr_conv_3_30_7
//	I_blr_ds_I_blr_ds_blr_conv_3_30_8
//	I_blr_ds_I_blr_ds_blr_conv_3_30_9
inline hw_uint<288> I_blr_ds_I_blr_ds_blr_conv_3_30_read_bundle_read(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	hw_uint<288> result;
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_1_res = I_blr_ds_I_blr_ds_blr_conv_3_30_1_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<0, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_1_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_2_res = I_blr_ds_I_blr_ds_blr_conv_3_30_2_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<32, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_2_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_3_res = I_blr_ds_I_blr_ds_blr_conv_3_30_3_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<64, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_3_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_4_res = I_blr_ds_I_blr_ds_blr_conv_3_30_4_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<96, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_4_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_5_res = I_blr_ds_I_blr_ds_blr_conv_3_30_5_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<128, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_5_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_6_res = I_blr_ds_I_blr_ds_blr_conv_3_30_6_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<160, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_6_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_7_res = I_blr_ds_I_blr_ds_blr_conv_3_30_7_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<192, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_7_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_8_res = I_blr_ds_I_blr_ds_blr_conv_3_30_8_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<224, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_8_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_9_res = I_blr_ds_I_blr_ds_blr_conv_3_30_9_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<256, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_9_res);
	return result;
}

// I_blr_ds_id0_write
//	I_blr_ds_I_blr_ds_id0_12
inline void I_blr_ds_I_blr_ds_id0_write_bundle_write(hw_uint<32>& I_blr_ds_id0_write, I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_r, int I_blr_ds_c) {
	hw_uint<32>  I_blr_ds_I_blr_ds_id0_12_res = I_blr_ds_id0_write.extract<0, 31>();
	I_blr_ds_I_blr_ds_id0_12_write(I_blr_ds_I_blr_ds_id0_12_res, I_blr_ds, root, I_blr_ds_r, I_blr_ds_c);
}



#include "hw_classes.h"

struct I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0_to_I_blr_ds_blr_I_blr_ds_blr_ds_id0_11_cache {
	// Capacity: 39
	// # of read delays: 39
	// read delays: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 4) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [4, 5) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [5, 6) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [6, 7) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [7, 8) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [8, 9) capacity = 1
	fifo<hw_uint<32> , 1> f16;
	// Parition [9, 10) capacity = 1
	fifo<hw_uint<32> , 1> f18;
	// Parition [10, 11) capacity = 1
	fifo<hw_uint<32> , 1> f20;
	// Parition [11, 12) capacity = 1
	fifo<hw_uint<32> , 1> f22;
	// Parition [12, 13) capacity = 1
	fifo<hw_uint<32> , 1> f24;
	// Parition [13, 14) capacity = 1
	fifo<hw_uint<32> , 1> f26;
	// Parition [14, 15) capacity = 1
	fifo<hw_uint<32> , 1> f28;
	// Parition [15, 16) capacity = 1
	fifo<hw_uint<32> , 1> f30;
	// Parition [16, 17) capacity = 1
	fifo<hw_uint<32> , 1> f32;
	// Parition [17, 18) capacity = 1
	fifo<hw_uint<32> , 1> f34;
	// Parition [18, 19) capacity = 1
	fifo<hw_uint<32> , 1> f36;
	// Parition [19, 20) capacity = 1
	fifo<hw_uint<32> , 1> f38;
	// Parition [20, 21) capacity = 1
	fifo<hw_uint<32> , 1> f40;
	// Parition [21, 22) capacity = 1
	fifo<hw_uint<32> , 1> f42;
	// Parition [22, 23) capacity = 1
	fifo<hw_uint<32> , 1> f44;
	// Parition [23, 24) capacity = 1
	fifo<hw_uint<32> , 1> f46;
	// Parition [24, 25) capacity = 1
	fifo<hw_uint<32> , 1> f48;
	// Parition [25, 26) capacity = 1
	fifo<hw_uint<32> , 1> f50;
	// Parition [26, 27) capacity = 1
	fifo<hw_uint<32> , 1> f52;
	// Parition [27, 28) capacity = 1
	fifo<hw_uint<32> , 1> f54;
	// Parition [28, 29) capacity = 1
	fifo<hw_uint<32> , 1> f56;
	// Parition [29, 30) capacity = 1
	fifo<hw_uint<32> , 1> f58;
	// Parition [30, 31) capacity = 1
	fifo<hw_uint<32> , 1> f60;
	// Parition [31, 32) capacity = 1
	fifo<hw_uint<32> , 1> f62;
	// Parition [32, 33) capacity = 1
	fifo<hw_uint<32> , 1> f64;
	// Parition [33, 34) capacity = 1
	fifo<hw_uint<32> , 1> f66;
	// Parition [34, 35) capacity = 1
	fifo<hw_uint<32> , 1> f68;
	// Parition [35, 36) capacity = 1
	fifo<hw_uint<32> , 1> f70;
	// Parition [36, 37) capacity = 1
	fifo<hw_uint<32> , 1> f72;
	// Parition [37, 38) capacity = 1
	fifo<hw_uint<32> , 1> f74;
	// Parition [38, 38] capacity = 1
	fifo<hw_uint<32> , 1> f76;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_3() {
		return f6.back();
	}

	inline hw_uint<32>  peek_4() {
		return f8.back();
	}

	inline hw_uint<32>  peek_5() {
		return f10.back();
	}

	inline hw_uint<32>  peek_6() {
		return f12.back();
	}

	inline hw_uint<32>  peek_7() {
		return f14.back();
	}

	inline hw_uint<32>  peek_8() {
		return f16.back();
	}

	inline hw_uint<32>  peek_9() {
		return f18.back();
	}

	inline hw_uint<32>  peek_10() {
		return f20.back();
	}

	inline hw_uint<32>  peek_11() {
		return f22.back();
	}

	inline hw_uint<32>  peek_12() {
		return f24.back();
	}

	inline hw_uint<32>  peek_13() {
		return f26.back();
	}

	inline hw_uint<32>  peek_14() {
		return f28.back();
	}

	inline hw_uint<32>  peek_15() {
		return f30.back();
	}

	inline hw_uint<32>  peek_16() {
		return f32.back();
	}

	inline hw_uint<32>  peek_17() {
		return f34.back();
	}

	inline hw_uint<32>  peek_18() {
		return f36.back();
	}

	inline hw_uint<32>  peek_19() {
		return f38.back();
	}

	inline hw_uint<32>  peek_20() {
		return f40.back();
	}

	inline hw_uint<32>  peek_21() {
		return f42.back();
	}

	inline hw_uint<32>  peek_22() {
		return f44.back();
	}

	inline hw_uint<32>  peek_23() {
		return f46.back();
	}

	inline hw_uint<32>  peek_24() {
		return f48.back();
	}

	inline hw_uint<32>  peek_25() {
		return f50.back();
	}

	inline hw_uint<32>  peek_26() {
		return f52.back();
	}

	inline hw_uint<32>  peek_27() {
		return f54.back();
	}

	inline hw_uint<32>  peek_28() {
		return f56.back();
	}

	inline hw_uint<32>  peek_29() {
		return f58.back();
	}

	inline hw_uint<32>  peek_30() {
		return f60.back();
	}

	inline hw_uint<32>  peek_31() {
		return f62.back();
	}

	inline hw_uint<32>  peek_32() {
		return f64.back();
	}

	inline hw_uint<32>  peek_33() {
		return f66.back();
	}

	inline hw_uint<32>  peek_34() {
		return f68.back();
	}

	inline hw_uint<32>  peek_35() {
		return f70.back();
	}

	inline hw_uint<32>  peek_36() {
		return f72.back();
	}

	inline hw_uint<32>  peek_37() {
		return f74.back();
	}

	inline hw_uint<32>  peek_38() {
		return f76.back();
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
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0_to_I_blr_ds_blr_I_blr_ds_blr_ds_id0_11: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
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

struct I_blr_ds_blr_cache {
  I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0_to_I_blr_ds_blr_I_blr_ds_blr_ds_id0_11_cache I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0_to_I_blr_ds_blr_I_blr_ds_blr_ds_id0_11;
};



inline void I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0_write(hw_uint<32> & I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0, I_blr_ds_blr_cache& I_blr_ds_blr, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
  I_blr_ds_blr.I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0_to_I_blr_ds_blr_I_blr_ds_blr_ds_id0_11.push(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0);
}

inline hw_uint<32>  I_blr_ds_blr_I_blr_ds_blr_ds_id0_11_select(I_blr_ds_blr_cache& I_blr_ds_blr, int root, int I_blr_ds_blr_ds_r, int I_blr_ds_blr_ds_c) {
	// lexmax events: { I_blr_ds_blr_ds_id0[root = 0, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c] -> I_blr_ds_blr_conv_3_30[root' = 0, I_blr_ds_blr_r = 2I_blr_ds_blr_ds_r, I_blr_ds_blr_c = 2I_blr_ds_blr_ds_c] : 0 <= I_blr_ds_blr_ds_r <= 4 and 0 <= I_blr_ds_blr_ds_c <= 5; I_blr_ds_blr_ds_id0[root = 0, I_blr_ds_blr_ds_r = 5, I_blr_ds_blr_ds_c] -> I_blr_ds_blr_conv_3_30[root' = 0, I_blr_ds_blr_r = 10, I_blr_ds_blr_c = 2I_blr_ds_blr_ds_c] : 0 <= I_blr_ds_blr_ds_c <= 4; I_blr_ds_blr_ds_id0[root = 0, I_blr_ds_blr_ds_r = 5, I_blr_ds_blr_ds_c = 5] -> I_blr_ds_blr_conv_3_30[root' = 0, I_blr_ds_blr_r = 10, I_blr_ds_blr_c = 10] }
  // I_blr_ds_blr_I_blr_ds_blr_ds_id0_11 read pattern: { I_blr_ds_blr_ds_id0[root = 0, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c] -> I_blr_ds_blr[2I_blr_ds_blr_ds_r, 2I_blr_ds_blr_ds_c] : 0 <= I_blr_ds_blr_ds_r <= 5 and 0 <= I_blr_ds_blr_ds_c <= 5 }
	auto value_I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0 = I_blr_ds_blr.I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0_to_I_blr_ds_blr_I_blr_ds_blr_ds_id0_11.peek(/* Needs general delay string */ ((-1 - I_blr_ds_blr_ds_c) % 2 == 0 && -5 + I_blr_ds_blr_ds_r == 0 && root == 0 && -1 + I_blr_ds_blr_ds_c >= 0 && 2 - I_blr_ds_blr_ds_c >= 0) ? (2) : ((-I_blr_ds_blr_ds_c) % 2 == 0 && -5 + I_blr_ds_blr_ds_r == 0 && root == 0 && I_blr_ds_blr_ds_c >= 0 && 2 - I_blr_ds_blr_ds_c >= 0) ? (((2 - I_blr_ds_blr_ds_c) + floord(I_blr_ds_blr_ds_c, 2))) : (-3 + I_blr_ds_blr_ds_c == 0 && -5 + I_blr_ds_blr_ds_r == 0 && root == 0) ? (1) : ((-1 - I_blr_ds_blr_ds_c) % 2 == 0 && (-1 - I_blr_ds_blr_ds_r) % 2 == 0 && root == 0 && -1 + I_blr_ds_blr_ds_r >= 0 && 2 - I_blr_ds_blr_ds_r >= 0 && -1 + I_blr_ds_blr_ds_c >= 0 && 5 - I_blr_ds_blr_ds_c >= 0) ? (((57 - I_blr_ds_blr_ds_c))/2) : ((-I_blr_ds_blr_ds_c) % 2 == 0 && (-1 - I_blr_ds_blr_ds_r) % 2 == 0 && root == 0 && -1 + I_blr_ds_blr_ds_r >= 0 && 2 - I_blr_ds_blr_ds_r >= 0 && I_blr_ds_blr_ds_c >= 0 && 5 - I_blr_ds_blr_ds_c >= 0) ? (((56 - I_blr_ds_blr_ds_c))/2) : ((-I_blr_ds_blr_ds_r) % 2 == 0 && root == 0 && I_blr_ds_blr_ds_r >= 0 && 2 - I_blr_ds_blr_ds_r >= 0 && I_blr_ds_blr_ds_c >= 0 && 5 - I_blr_ds_blr_ds_c >= 0) ? ((((76 - 13 * I_blr_ds_blr_ds_r) - 4 * I_blr_ds_blr_ds_c))/2) : ((-1 - I_blr_ds_blr_ds_c) % 2 == 0 && -3 + I_blr_ds_blr_ds_r == 0 && root == 0 && -1 + I_blr_ds_blr_ds_c >= 0 && 5 - I_blr_ds_blr_ds_c >= 0) ? (((31 - I_blr_ds_blr_ds_c))/2) : ((-I_blr_ds_blr_ds_c) % 2 == 0 && -3 + I_blr_ds_blr_ds_r == 0 && root == 0 && I_blr_ds_blr_ds_c >= 0 && 5 - I_blr_ds_blr_ds_c >= 0) ? (((30 - I_blr_ds_blr_ds_c))/2) : (((-1 - I_blr_ds_blr_ds_c) % 2 == 0 && -4 + I_blr_ds_blr_ds_r == 0 && root == 0 && I_blr_ds_blr_ds_c >= 0 && 5 - I_blr_ds_blr_ds_c >= 0) || ((-I_blr_ds_blr_ds_c) % 2 == 0 && -4 + I_blr_ds_blr_ds_r == 0 && root == 0 && I_blr_ds_blr_ds_c >= 0 && 5 - I_blr_ds_blr_ds_c >= 0)) ? ((12 - 2 * I_blr_ds_blr_ds_c)) : 0);
	return value_I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0;
}

// # of bundles = 2
// I_blr_ds_blr_conv_3_30_write
//	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0
inline void I_blr_ds_blr_I_blr_ds_blr_conv_3_30_write_bundle_write(hw_uint<32>& I_blr_ds_blr_conv_3_30_write, I_blr_ds_blr_cache& I_blr_ds_blr, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	hw_uint<32>  I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0_res = I_blr_ds_blr_conv_3_30_write.extract<0, 31>();
	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0_write(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0_res, I_blr_ds_blr, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
}

// I_blr_ds_blr_ds_id0_read
//	I_blr_ds_blr_I_blr_ds_blr_ds_id0_11
inline hw_uint<32> I_blr_ds_blr_I_blr_ds_blr_ds_id0_read_bundle_read(I_blr_ds_blr_cache& I_blr_ds_blr, int root, int I_blr_ds_blr_ds_r, int I_blr_ds_blr_ds_c) {
	hw_uint<32> result;
	hw_uint<32>  I_blr_ds_blr_I_blr_ds_blr_ds_id0_11_res = I_blr_ds_blr_I_blr_ds_blr_ds_id0_11_select(I_blr_ds_blr, root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c);
	set_at<0, 32>(result, I_blr_ds_blr_I_blr_ds_blr_ds_id0_11_res);
	return result;
}



#include "hw_classes.h"

struct I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_10_to_I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_15_cache {
	// Capacity: 12
	// # of read delays: 12
	// read delays: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 4) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [4, 5) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [5, 6) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [6, 7) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [7, 8) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [8, 9) capacity = 1
	fifo<hw_uint<32> , 1> f16;
	// Parition [9, 10) capacity = 1
	fifo<hw_uint<32> , 1> f18;
	// Parition [10, 11) capacity = 1
	fifo<hw_uint<32> , 1> f20;
	// Parition [11, 11] capacity = 1
	fifo<hw_uint<32> , 1> f22;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_3() {
		return f6.back();
	}

	inline hw_uint<32>  peek_4() {
		return f8.back();
	}

	inline hw_uint<32>  peek_5() {
		return f10.back();
	}

	inline hw_uint<32>  peek_6() {
		return f12.back();
	}

	inline hw_uint<32>  peek_7() {
		return f14.back();
	}

	inline hw_uint<32>  peek_8() {
		return f16.back();
	}

	inline hw_uint<32>  peek_9() {
		return f18.back();
	}

	inline hw_uint<32>  peek_10() {
		return f20.back();
	}

	inline hw_uint<32>  peek_11() {
		return f22.back();
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
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_10_to_I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_15: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
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

struct I_blr_ds_blr_ds_cache {
  I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_10_to_I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_15_cache I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_10_to_I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_15;
};



inline void I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_10_write(hw_uint<32> & I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_10, I_blr_ds_blr_ds_cache& I_blr_ds_blr_ds, int root, int I_blr_ds_blr_ds_r, int I_blr_ds_blr_ds_c) {
  I_blr_ds_blr_ds.I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_10_to_I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_15.push(I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_10);
}

inline hw_uint<32>  I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_15_select(I_blr_ds_blr_ds_cache& I_blr_ds_blr_ds, int root, int I_blr_ds_blr_ds_out_r, int I_blr_ds_blr_ds_out_c) {
	// lexmax events: { store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds[root = 0, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c] -> I_blr_ds_blr_ds_id0[root' = 0, I_blr_ds_blr_ds_r = I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_c = I_blr_ds_blr_ds_out_c] : 0 <= I_blr_ds_blr_ds_out_r <= 4 and 0 <= I_blr_ds_blr_ds_out_c <= 5; store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds[root = 0, I_blr_ds_blr_ds_out_r = 5, I_blr_ds_blr_ds_out_c] -> I_blr_ds_blr_ds_id0[root' = 0, I_blr_ds_blr_ds_r = 5, I_blr_ds_blr_ds_c = I_blr_ds_blr_ds_out_c] : 0 <= I_blr_ds_blr_ds_out_c <= 4; store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds[root = 0, I_blr_ds_blr_ds_out_r = 5, I_blr_ds_blr_ds_out_c = 5] -> I_blr_ds_blr_ds_id0[root' = 0, I_blr_ds_blr_ds_r = 5, I_blr_ds_blr_ds_c = 5] }
  // I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_15 read pattern: { store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds[root = 0, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c] -> I_blr_ds_blr_ds[I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c] : 0 <= I_blr_ds_blr_ds_out_r <= 5 and 0 <= I_blr_ds_blr_ds_out_c <= 5 }
	auto value_I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_10 = I_blr_ds_blr_ds.I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_10_to_I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_15.peek(/* Needs general delay string */ (-5 + I_blr_ds_blr_ds_out_r == 0 && root == 0 && I_blr_ds_blr_ds_out_c >= 0 && 1 - I_blr_ds_blr_ds_out_c >= 0) ? (1) : (-2 + I_blr_ds_blr_ds_out_c == 0 && -5 + I_blr_ds_blr_ds_out_r == 0 && root == 0) ? (1) : (root == 0 && I_blr_ds_blr_ds_out_r >= 0 && 1 - I_blr_ds_blr_ds_out_r >= 0 && I_blr_ds_blr_ds_out_c >= 0 && 4 - I_blr_ds_blr_ds_out_c >= 0) ? ((11 - I_blr_ds_blr_ds_out_c)) : (-5 + I_blr_ds_blr_ds_out_c == 0 && root == 0 && I_blr_ds_blr_ds_out_r >= 0 && 1 - I_blr_ds_blr_ds_out_r >= 0) ? (6) : ((-1 - I_blr_ds_blr_ds_out_c) % 3 == 0 && -2 + I_blr_ds_blr_ds_out_r == 0 && root == 0 && -2 + I_blr_ds_blr_ds_out_c >= 0 && 4 - I_blr_ds_blr_ds_out_c >= 0) ? (7) : (-5 + I_blr_ds_blr_ds_out_c == 0 && -2 + I_blr_ds_blr_ds_out_r == 0 && root == 0) ? (((8 + 2 * I_blr_ds_blr_ds_out_c))/3) : (-2 + I_blr_ds_blr_ds_out_r == 0 && root == 0 && I_blr_ds_blr_ds_out_c >= 0 && 4 - I_blr_ds_blr_ds_out_c >= 0 && I_blr_ds_blr_ds_out_c - 3*floord(1 + I_blr_ds_blr_ds_out_c, 3) >= 0) ? ((7 - floord(1 + I_blr_ds_blr_ds_out_c, 3))) : ((root == 0 && -3 + I_blr_ds_blr_ds_out_r >= 0 && 4 - I_blr_ds_blr_ds_out_r >= 0 && I_blr_ds_blr_ds_out_c >= 0 && 4 - I_blr_ds_blr_ds_out_c >= 0 && I_blr_ds_blr_ds_out_c - 3*floord(1 + I_blr_ds_blr_ds_out_c, 3) >= 0) || ((-1 - I_blr_ds_blr_ds_out_c) % 3 == 0 && root == 0 && -3 + I_blr_ds_blr_ds_out_r >= 0 && 4 - I_blr_ds_blr_ds_out_r >= 0 && I_blr_ds_blr_ds_out_c >= 0 && 4 - I_blr_ds_blr_ds_out_c >= 0)) ? ((5 - I_blr_ds_blr_ds_out_c)) : 0);
	return value_I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_10;
}

// # of bundles = 2
// I_blr_ds_blr_ds_id0_write
//	I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_10
inline void I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_write_bundle_write(hw_uint<32>& I_blr_ds_blr_ds_id0_write, I_blr_ds_blr_ds_cache& I_blr_ds_blr_ds, int root, int I_blr_ds_blr_ds_r, int I_blr_ds_blr_ds_c) {
	hw_uint<32>  I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_10_res = I_blr_ds_blr_ds_id0_write.extract<0, 31>();
	I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_10_write(I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_10_res, I_blr_ds_blr_ds, root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c);
}

// store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_read
//	I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_15
inline hw_uint<32> I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_read_bundle_read(I_blr_ds_blr_ds_cache& I_blr_ds_blr_ds, int root, int I_blr_ds_blr_ds_out_r, int I_blr_ds_blr_ds_out_c) {
	hw_uint<32> result;
	hw_uint<32>  I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_15_res = I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_15_select(I_blr_ds_blr_ds, root, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c);
	set_at<0, 32>(result, I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_15_res);
	return result;
}





// Operation logic
inline void I_blr_ds_blr_conv_3_30(I_blr_ds_cache& I_blr_ds, I_blr_ds_blr_cache& I_blr_ds_blr, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	// Consume: I_blr_ds
	auto I_blr_ds_I_blr_ds_blr_r__p__0_c__I_blr_ds_blr_c__p__0_value = I_blr_ds_I_blr_ds_blr_conv_3_30_read_bundle_read(I_blr_ds/* source_delay */, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	auto compute_result = conv_3_3(I_blr_ds_I_blr_ds_blr_r__p__0_c__I_blr_ds_blr_c__p__0_value);
	// Produce: I_blr_ds_blr
	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_write_bundle_write(compute_result, I_blr_ds_blr, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
}

inline void I_blr_ds_blr_ds_id0(I_blr_ds_blr_cache& I_blr_ds_blr, I_blr_ds_blr_ds_cache& I_blr_ds_blr_ds, int root, int I_blr_ds_blr_ds_r, int I_blr_ds_blr_ds_c) {
	// Consume: I_blr_ds_blr
	auto I_blr_ds_blr_2_m_I_blr_ds_blr_ds_r_c__2_m_I_blr_ds_blr_ds_c_value = I_blr_ds_blr_I_blr_ds_blr_ds_id0_read_bundle_read(I_blr_ds_blr/* source_delay */, root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c);
	auto compute_result = id(I_blr_ds_blr_2_m_I_blr_ds_blr_ds_r_c__2_m_I_blr_ds_blr_ds_c_value);
	// Produce: I_blr_ds_blr_ds
	I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_write_bundle_write(compute_result, I_blr_ds_blr_ds, root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c);
}

inline void I_blr_ds_id0(I_blr_cache& I_blr, I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_r, int I_blr_ds_c) {
	// Consume: I_blr
	auto I_blr_2_m_I_blr_ds_r_c__2_m_I_blr_ds_c_value = I_blr_I_blr_ds_id0_read_bundle_read(I_blr/* source_delay */, root, I_blr_ds_r, I_blr_ds_c);
	auto compute_result = id(I_blr_2_m_I_blr_ds_r_c__2_m_I_blr_ds_c_value);
	// Produce: I_blr_ds
	I_blr_ds_I_blr_ds_id0_write_bundle_write(compute_result, I_blr_ds, root, I_blr_ds_r, I_blr_ds_c);
}

inline void store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds(I_blr_ds_blr_ds_cache& I_blr_ds_blr_ds, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */I_blr_ds_blr_ds_out, int root, int I_blr_ds_blr_ds_out_r, int I_blr_ds_blr_ds_out_c) {
	// Consume: I_blr_ds_blr_ds
	auto I_blr_ds_blr_ds_I_blr_ds_blr_ds_out_r_c__I_blr_ds_blr_ds_out_c_value = I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_read_bundle_read(I_blr_ds_blr_ds/* source_delay */, root, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c);
	// Produce: I_blr_ds_blr_ds_out
	I_blr_ds_blr_ds_out.write(I_blr_ds_blr_ds_I_blr_ds_blr_ds_out_r_c__I_blr_ds_blr_ds_out_c_value);
}

inline void store_I_from_in(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in, I_cache& I, int root, int pr, int pc) {
	// Consume: in
	auto in_pr_c__pc_value = in.read();
	// Produce: I
	I_store_I_from_in_write_bundle_write(in_pr_c__pc_value, I, root, pr, pc);
}

inline void I_blr_conv_3_30(I_cache& I, I_blr_cache& I_blr, int root, int I_blr_r, int I_blr_c) {
	// Consume: I
	auto I_I_blr_r__p__0_c__I_blr_c__p__0_value = I_I_blr_conv_3_30_read_bundle_read(I/* source_delay */, root, I_blr_r, I_blr_c);
	auto compute_result = conv_3_3(I_I_blr_r__p__0_c__I_blr_c__p__0_value);
	// Produce: I_blr
	I_blr_I_blr_conv_3_30_write_bundle_write(compute_result, I_blr, root, I_blr_r, I_blr_c);
}

// Driver function
void gaussian_pyramid(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */I_blr_ds_blr_ds_out) {
  I_cache I;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif // __VIVADO_SYNTH__

  I_blr_cache I_blr;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I_blr inter false
#endif // __VIVADO_SYNTH__

  I_blr_ds_cache I_blr_ds;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I_blr_ds inter false
#endif // __VIVADO_SYNTH__

  I_blr_ds_blr_cache I_blr_ds_blr;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I_blr_ds_blr inter false
#endif // __VIVADO_SYNTH__

  I_blr_ds_blr_ds_cache I_blr_ds_blr_ds;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I_blr_ds_blr_ds inter false
#endif // __VIVADO_SYNTH__

/* CUSTOM CODE STRING

*/
	for (int c0 = 0; c0 <= 31; c0 += 1)
	  for (int c1 = 0; c1 <= 31; c1 += 1) {
	    store_I_from_in(in, I, 0, c0, c1);
	    if (c0 >= 2 && c1 >= 2) {
	      I_blr_conv_3_30(I, I_blr, 0, c0 - 2, c1 - 2);
	      if (c0 % 2 == 0 && c1 % 2 == 0) {
	        I_blr_ds_id0(I_blr, I_blr_ds, 0, (c0 / 2) - 1, (c1 / 2) - 1);
	        if (c0 >= 6 && c1 >= 6)
	          I_blr_ds_blr_conv_3_30(I_blr_ds, I_blr_ds_blr, 0, (c0 / 2) - 3, (c1 / 2) - 3);
	      }
	      if (c0 >= 11 && c0 <= 26 && c1 >= 11 && c1 <= 26 && (c0 + 1) % 3 == 0 && (c1 + 1) % 3 == 0)
	        I_blr_ds_blr_ds_id0(I_blr_ds_blr, I_blr_ds_blr_ds, 0, (c0 - 11) / 3, (c1 - 11) / 3);
	      if (c0 >= 16 && c0 <= 26 && c1 >= 16 && c1 <= 26 && c0 % 2 == 0 && c1 % 2 == 0)
	        store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds(I_blr_ds_blr_ds, I_blr_ds_blr_ds_out, 0, (c0 / 2) - 8, (c1 / 2) - 8);
	    }
	  }
	
}
