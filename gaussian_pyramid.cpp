#include "conv_3x3.h"

#include "hw_classes.h"

struct I_store_I_from_in_10_cache {
	// Capacity: 67
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

struct I_cache {
  I_store_I_from_in_10_cache I_store_I_from_in_10;
};



inline void I_store_I_from_in_10_write(hw_uint<32> & I_store_I_from_in_10, I_cache& I) {
	I.I_store_I_from_in_10.push(I_store_I_from_in_10);
}

inline hw_uint<32>  I_I_blr_conv_3_30_19_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
  // qpd = { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 66 : root = 0 and 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
	hw_uint<32>  value_I_store_I_from_in_10 = I.I_store_I_from_in_10.peek_66();
	return value_I_store_I_from_in_10;
}

inline hw_uint<32>  I_I_blr_conv_3_30_20_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
  // qpd = { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 65 : root = 0 and 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
	hw_uint<32>  value_I_store_I_from_in_10 = I.I_store_I_from_in_10.peek_65();
	return value_I_store_I_from_in_10;
}

inline hw_uint<32>  I_I_blr_conv_3_30_21_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
  // qpd = { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 64 : root = 0 and 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 28; I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> (35 + I_blr_c) : root = 0 and I_blr_c = 29 and 0 <= I_blr_r <= 29 }
	hw_uint<32>  value_I_store_I_from_in_10 = I.I_store_I_from_in_10.peek_64();
	return value_I_store_I_from_in_10;
}

inline hw_uint<32>  I_I_blr_conv_3_30_22_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
  // qpd = { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 34 : root = 0 and 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
	hw_uint<32>  value_I_store_I_from_in_10 = I.I_store_I_from_in_10.peek_34();
	return value_I_store_I_from_in_10;
}

inline hw_uint<32>  I_I_blr_conv_3_30_23_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
  // qpd = { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 33 : root = 0 and 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
	hw_uint<32>  value_I_store_I_from_in_10 = I.I_store_I_from_in_10.peek_33();
	return value_I_store_I_from_in_10;
}

inline hw_uint<32>  I_I_blr_conv_3_30_24_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
  // qpd = { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 32 : root = 0 and 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 28; I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> (3 + I_blr_c) : root = 0 and I_blr_c = 29 and 0 <= I_blr_r <= 29 }
	hw_uint<32>  value_I_store_I_from_in_10 = I.I_store_I_from_in_10.peek_32();
	return value_I_store_I_from_in_10;
}

inline hw_uint<32>  I_I_blr_conv_3_30_25_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
  // qpd = { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 2 : root = 0 and 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
	hw_uint<32>  value_I_store_I_from_in_10 = I.I_store_I_from_in_10.peek_2();
	return value_I_store_I_from_in_10;
}

inline hw_uint<32>  I_I_blr_conv_3_30_26_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
  // qpd = { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 1 : root = 0 and 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
	hw_uint<32>  value_I_store_I_from_in_10 = I.I_store_I_from_in_10.peek_1();
	return value_I_store_I_from_in_10;
}

inline hw_uint<32>  I_I_blr_conv_3_30_27_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
  // qpd = {  }
	hw_uint<32>  value_I_store_I_from_in_10 = I.I_store_I_from_in_10.peek_0();
	return value_I_store_I_from_in_10;
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
//	I_store_I_from_in_10
inline void I_store_I_from_in_write_bundle_write(hw_uint<32>& store_I_from_in_write, I_cache& I) {
	hw_uint<32>  I_store_I_from_in_10_res = store_I_from_in_write.extract<0, 31>();
	I_store_I_from_in_10_write(I_store_I_from_in_10_res, I);
}



#include "hw_classes.h"

struct I_blr_I_blr_conv_3_30_18_cache {
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

struct I_blr_cache {
  I_blr_I_blr_conv_3_30_18_cache I_blr_I_blr_conv_3_30_18;
};



inline void I_blr_I_blr_conv_3_30_18_write(hw_uint<32> & I_blr_I_blr_conv_3_30_18, I_blr_cache& I_blr) {
	I_blr.I_blr_I_blr_conv_3_30_18.push(I_blr_I_blr_conv_3_30_18);
}

inline hw_uint<32>  I_blr_I_blr_ds_id0_15_select(I_blr_cache& I_blr, int root, int I_blr_ds_r, int I_blr_ds_c) {
  // qpd = {  }
	hw_uint<32>  value_I_blr_I_blr_conv_3_30_18 = I_blr.I_blr_I_blr_conv_3_30_18.peek_0();
	return value_I_blr_I_blr_conv_3_30_18;
}

// # of bundles = 2
// I_blr_conv_3_30_write
//	I_blr_I_blr_conv_3_30_18
inline void I_blr_I_blr_conv_3_30_write_bundle_write(hw_uint<32>& I_blr_conv_3_30_write, I_blr_cache& I_blr) {
	hw_uint<32>  I_blr_I_blr_conv_3_30_18_res = I_blr_conv_3_30_write.extract<0, 31>();
	I_blr_I_blr_conv_3_30_18_write(I_blr_I_blr_conv_3_30_18_res, I_blr);
}

// I_blr_ds_id0_read
//	I_blr_I_blr_ds_id0_15
inline hw_uint<32> I_blr_I_blr_ds_id0_read_bundle_read(I_blr_cache& I_blr, int root, int I_blr_ds_r, int I_blr_ds_c) {
	hw_uint<32> result;
	hw_uint<32>  I_blr_I_blr_ds_id0_15_res = I_blr_I_blr_ds_id0_15_select(I_blr, root, I_blr_ds_r, I_blr_ds_c);
	set_at<0, 32>(result, I_blr_I_blr_ds_id0_15_res);
	return result;
}



#include "hw_classes.h"

struct I_blr_ds_I_blr_ds_id0_14_cache {
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

struct I_blr_ds_cache {
  I_blr_ds_I_blr_ds_id0_14_cache I_blr_ds_I_blr_ds_id0_14;
};



inline void I_blr_ds_I_blr_ds_id0_14_write(hw_uint<32> & I_blr_ds_I_blr_ds_id0_14, I_blr_ds_cache& I_blr_ds) {
	I_blr_ds.I_blr_ds_I_blr_ds_id0_14.push(I_blr_ds_I_blr_ds_id0_14);
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_1_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
  // qpd = { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 32 : root = 0 and 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
	hw_uint<32>  value_I_blr_ds_I_blr_ds_id0_14 = I_blr_ds.I_blr_ds_I_blr_ds_id0_14.peek_32();
	return value_I_blr_ds_I_blr_ds_id0_14;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_2_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
  // qpd = { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 31 : root = 0 and 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
	hw_uint<32>  value_I_blr_ds_I_blr_ds_id0_14 = I_blr_ds.I_blr_ds_I_blr_ds_id0_14.peek_31();
	return value_I_blr_ds_I_blr_ds_id0_14;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_3_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
  // qpd = { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 30 : root = 0 and 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 11; I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> (18 + I_blr_ds_blr_c) : root = 0 and I_blr_ds_blr_c = 12 and 0 <= I_blr_ds_blr_r <= 12 }
	hw_uint<32>  value_I_blr_ds_I_blr_ds_id0_14 = I_blr_ds.I_blr_ds_I_blr_ds_id0_14.peek_30();
	return value_I_blr_ds_I_blr_ds_id0_14;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_4_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
  // qpd = { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 17 : root = 0 and 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
	hw_uint<32>  value_I_blr_ds_I_blr_ds_id0_14 = I_blr_ds.I_blr_ds_I_blr_ds_id0_14.peek_17();
	return value_I_blr_ds_I_blr_ds_id0_14;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_5_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
  // qpd = { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 16 : root = 0 and 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
	hw_uint<32>  value_I_blr_ds_I_blr_ds_id0_14 = I_blr_ds.I_blr_ds_I_blr_ds_id0_14.peek_16();
	return value_I_blr_ds_I_blr_ds_id0_14;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_6_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
  // qpd = { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 15 : root = 0 and 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 11; I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> (3 + I_blr_ds_blr_c) : root = 0 and I_blr_ds_blr_c = 12 and 0 <= I_blr_ds_blr_r <= 12 }
	hw_uint<32>  value_I_blr_ds_I_blr_ds_id0_14 = I_blr_ds.I_blr_ds_I_blr_ds_id0_14.peek_15();
	return value_I_blr_ds_I_blr_ds_id0_14;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_7_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
  // qpd = { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 2 : root = 0 and 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
	hw_uint<32>  value_I_blr_ds_I_blr_ds_id0_14 = I_blr_ds.I_blr_ds_I_blr_ds_id0_14.peek_2();
	return value_I_blr_ds_I_blr_ds_id0_14;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_8_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
  // qpd = { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 1 : root = 0 and 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
	hw_uint<32>  value_I_blr_ds_I_blr_ds_id0_14 = I_blr_ds.I_blr_ds_I_blr_ds_id0_14.peek_1();
	return value_I_blr_ds_I_blr_ds_id0_14;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_9_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
  // qpd = {  }
	hw_uint<32>  value_I_blr_ds_I_blr_ds_id0_14 = I_blr_ds.I_blr_ds_I_blr_ds_id0_14.peek_0();
	return value_I_blr_ds_I_blr_ds_id0_14;
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
//	I_blr_ds_I_blr_ds_id0_14
inline void I_blr_ds_I_blr_ds_id0_write_bundle_write(hw_uint<32>& I_blr_ds_id0_write, I_blr_ds_cache& I_blr_ds) {
	hw_uint<32>  I_blr_ds_I_blr_ds_id0_14_res = I_blr_ds_id0_write.extract<0, 31>();
	I_blr_ds_I_blr_ds_id0_14_write(I_blr_ds_I_blr_ds_id0_14_res, I_blr_ds);
}



#include "hw_classes.h"

struct I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0_cache {
	// Capacity: 39
	fifo<hw_uint<32> , 39> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(38 - offset);
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

	inline hw_uint<32>  peek_8() {
		return f.peek(8);
	}

	inline hw_uint<32>  peek_9() {
		return f.peek(9);
	}

	inline hw_uint<32>  peek_10() {
		return f.peek(10);
	}

	inline hw_uint<32>  peek_11() {
		return f.peek(11);
	}

	inline hw_uint<32>  peek_12() {
		return f.peek(12);
	}

	inline hw_uint<32>  peek_13() {
		return f.peek(13);
	}

	inline hw_uint<32>  peek_14() {
		return f.peek(14);
	}

	inline hw_uint<32>  peek_15() {
		return f.peek(15);
	}

	inline hw_uint<32>  peek_16() {
		return f.peek(16);
	}

	inline hw_uint<32>  peek_17() {
		return f.peek(17);
	}

	inline hw_uint<32>  peek_18() {
		return f.peek(18);
	}

	inline hw_uint<32>  peek_19() {
		return f.peek(19);
	}

	inline hw_uint<32>  peek_20() {
		return f.peek(20);
	}

	inline hw_uint<32>  peek_21() {
		return f.peek(21);
	}

	inline hw_uint<32>  peek_22() {
		return f.peek(22);
	}

	inline hw_uint<32>  peek_23() {
		return f.peek(23);
	}

	inline hw_uint<32>  peek_24() {
		return f.peek(24);
	}

	inline hw_uint<32>  peek_25() {
		return f.peek(25);
	}

	inline hw_uint<32>  peek_26() {
		return f.peek(26);
	}

	inline hw_uint<32>  peek_27() {
		return f.peek(27);
	}

	inline hw_uint<32>  peek_28() {
		return f.peek(28);
	}

	inline hw_uint<32>  peek_29() {
		return f.peek(29);
	}

	inline hw_uint<32>  peek_30() {
		return f.peek(30);
	}

	inline hw_uint<32>  peek_31() {
		return f.peek(31);
	}

	inline hw_uint<32>  peek_32() {
		return f.peek(32);
	}

	inline hw_uint<32>  peek_33() {
		return f.peek(33);
	}

	inline hw_uint<32>  peek_34() {
		return f.peek(34);
	}

	inline hw_uint<32>  peek_35() {
		return f.peek(35);
	}

	inline hw_uint<32>  peek_36() {
		return f.peek(36);
	}

	inline hw_uint<32>  peek_37() {
		return f.peek(37);
	}

	inline hw_uint<32>  peek_38() {
		return f.peek(38);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct I_blr_ds_blr_cache {
  I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0_cache I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0;
};



inline void I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0_write(hw_uint<32> & I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0, I_blr_ds_blr_cache& I_blr_ds_blr) {
	I_blr_ds_blr.I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0.push(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0);
}

inline hw_uint<32>  I_blr_ds_blr_I_blr_ds_blr_ds_id0_13_select(I_blr_ds_blr_cache& I_blr_ds_blr, int root, int I_blr_ds_blr_ds_r, int I_blr_ds_blr_ds_c) {
  // qpd = { I_blr_ds_blr_ds_id0[root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c] -> 2 : root = 0 and I_blr_ds_blr_ds_r = 5 and (1 + I_blr_ds_blr_ds_c) mod 2 = 0 and 0 < I_blr_ds_blr_ds_c <= 2; I_blr_ds_blr_ds_id0[root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c] -> ((2 - I_blr_ds_blr_ds_c) + floor((I_blr_ds_blr_ds_c)/2)) : root = 0 and I_blr_ds_blr_ds_r = 5 and (I_blr_ds_blr_ds_c) mod 2 = 0 and 0 <= I_blr_ds_blr_ds_c <= 2; I_blr_ds_blr_ds_id0[root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c] -> 1 : root = 0 and I_blr_ds_blr_ds_r = 5 and I_blr_ds_blr_ds_c = 3; I_blr_ds_blr_ds_id0[root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c] -> (57/2 - 1/2 * I_blr_ds_blr_ds_c) : root = 0 and (1 + I_blr_ds_blr_ds_r) mod 2 = 0 and (1 + I_blr_ds_blr_ds_c) mod 2 = 0 and 0 < I_blr_ds_blr_ds_r <= 2 and 0 < I_blr_ds_blr_ds_c <= 5; I_blr_ds_blr_ds_id0[root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c] -> (28 - 1/2 * I_blr_ds_blr_ds_c) : root = 0 and (1 + I_blr_ds_blr_ds_r) mod 2 = 0 and (I_blr_ds_blr_ds_c) mod 2 = 0 and 0 < I_blr_ds_blr_ds_r <= 2 and 0 <= I_blr_ds_blr_ds_c <= 5; I_blr_ds_blr_ds_id0[root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c] -> ((38 - 13/2 * I_blr_ds_blr_ds_r) - 2 * I_blr_ds_blr_ds_c) : root = 0 and (I_blr_ds_blr_ds_r) mod 2 = 0 and 0 <= I_blr_ds_blr_ds_r <= 2 and 0 <= I_blr_ds_blr_ds_c <= 5; I_blr_ds_blr_ds_id0[root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c] -> (31/2 - 1/2 * I_blr_ds_blr_ds_c) : root = 0 and I_blr_ds_blr_ds_r = 3 and (1 + I_blr_ds_blr_ds_c) mod 2 = 0 and 0 < I_blr_ds_blr_ds_c <= 5; I_blr_ds_blr_ds_id0[root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c] -> (15 - 1/2 * I_blr_ds_blr_ds_c) : root = 0 and I_blr_ds_blr_ds_r = 3 and (I_blr_ds_blr_ds_c) mod 2 = 0 and 0 <= I_blr_ds_blr_ds_c <= 5; I_blr_ds_blr_ds_id0[root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c] -> (12 - 2 * I_blr_ds_blr_ds_c) : I_blr_ds_blr_ds_r = 4 and root = 0 and 0 <= I_blr_ds_blr_ds_c <= 5 and ((root = 0 and (1 + I_blr_ds_blr_ds_c) mod 2 = 0) or (root = 0 and (I_blr_ds_blr_ds_c) mod 2 = 0)) }
	hw_uint<32>  value_I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0 = I_blr_ds_blr.I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0.peek(/* Needs general delay string */ ((-1 - I_blr_ds_blr_ds_c) % 2 == 0 && -5 + I_blr_ds_blr_ds_r == 0 && root == 0 && -1 + I_blr_ds_blr_ds_c >= 0 && 2 - I_blr_ds_blr_ds_c >= 0) ? (2) : ((-I_blr_ds_blr_ds_c) % 2 == 0 && -5 + I_blr_ds_blr_ds_r == 0 && root == 0 && I_blr_ds_blr_ds_c >= 0 && 2 - I_blr_ds_blr_ds_c >= 0) ? (((2 - I_blr_ds_blr_ds_c) + floord(I_blr_ds_blr_ds_c, 2))) : (-3 + I_blr_ds_blr_ds_c == 0 && -5 + I_blr_ds_blr_ds_r == 0 && root == 0) ? (1) : ((-1 - I_blr_ds_blr_ds_c) % 2 == 0 && (-1 - I_blr_ds_blr_ds_r) % 2 == 0 && root == 0 && -1 + I_blr_ds_blr_ds_r >= 0 && 2 - I_blr_ds_blr_ds_r >= 0 && -1 + I_blr_ds_blr_ds_c >= 0 && 5 - I_blr_ds_blr_ds_c >= 0) ? (((57 - I_blr_ds_blr_ds_c))/2) : ((-I_blr_ds_blr_ds_c) % 2 == 0 && (-1 - I_blr_ds_blr_ds_r) % 2 == 0 && root == 0 && -1 + I_blr_ds_blr_ds_r >= 0 && 2 - I_blr_ds_blr_ds_r >= 0 && I_blr_ds_blr_ds_c >= 0 && 5 - I_blr_ds_blr_ds_c >= 0) ? (((56 - I_blr_ds_blr_ds_c))/2) : ((-I_blr_ds_blr_ds_r) % 2 == 0 && root == 0 && I_blr_ds_blr_ds_r >= 0 && 2 - I_blr_ds_blr_ds_r >= 0 && I_blr_ds_blr_ds_c >= 0 && 5 - I_blr_ds_blr_ds_c >= 0) ? ((((76 - 13 * I_blr_ds_blr_ds_r) - 4 * I_blr_ds_blr_ds_c))/2) : ((-1 - I_blr_ds_blr_ds_c) % 2 == 0 && -3 + I_blr_ds_blr_ds_r == 0 && root == 0 && -1 + I_blr_ds_blr_ds_c >= 0 && 5 - I_blr_ds_blr_ds_c >= 0) ? (((31 - I_blr_ds_blr_ds_c))/2) : ((-I_blr_ds_blr_ds_c) % 2 == 0 && -3 + I_blr_ds_blr_ds_r == 0 && root == 0 && I_blr_ds_blr_ds_c >= 0 && 5 - I_blr_ds_blr_ds_c >= 0) ? (((30 - I_blr_ds_blr_ds_c))/2) : (((-1 - I_blr_ds_blr_ds_c) % 2 == 0 && -4 + I_blr_ds_blr_ds_r == 0 && root == 0 && I_blr_ds_blr_ds_c >= 0 && 5 - I_blr_ds_blr_ds_c >= 0) || ((-I_blr_ds_blr_ds_c) % 2 == 0 && -4 + I_blr_ds_blr_ds_r == 0 && root == 0 && I_blr_ds_blr_ds_c >= 0 && 5 - I_blr_ds_blr_ds_c >= 0)) ? ((12 - 2 * I_blr_ds_blr_ds_c)) : 0);
	return value_I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0;
}

// # of bundles = 2
// I_blr_ds_blr_conv_3_30_write
//	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0
inline void I_blr_ds_blr_I_blr_ds_blr_conv_3_30_write_bundle_write(hw_uint<32>& I_blr_ds_blr_conv_3_30_write, I_blr_ds_blr_cache& I_blr_ds_blr) {
	hw_uint<32>  I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0_res = I_blr_ds_blr_conv_3_30_write.extract<0, 31>();
	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0_write(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0_res, I_blr_ds_blr);
}

// I_blr_ds_blr_ds_id0_read
//	I_blr_ds_blr_I_blr_ds_blr_ds_id0_13
inline hw_uint<32> I_blr_ds_blr_I_blr_ds_blr_ds_id0_read_bundle_read(I_blr_ds_blr_cache& I_blr_ds_blr, int root, int I_blr_ds_blr_ds_r, int I_blr_ds_blr_ds_c) {
	hw_uint<32> result;
	hw_uint<32>  I_blr_ds_blr_I_blr_ds_blr_ds_id0_13_res = I_blr_ds_blr_I_blr_ds_blr_ds_id0_13_select(I_blr_ds_blr, root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c);
	set_at<0, 32>(result, I_blr_ds_blr_I_blr_ds_blr_ds_id0_13_res);
	return result;
}



#include "hw_classes.h"

struct I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_12_cache {
	// Capacity: 12
	fifo<hw_uint<32> , 12> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(11 - offset);
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

	inline hw_uint<32>  peek_8() {
		return f.peek(8);
	}

	inline hw_uint<32>  peek_9() {
		return f.peek(9);
	}

	inline hw_uint<32>  peek_10() {
		return f.peek(10);
	}

	inline hw_uint<32>  peek_11() {
		return f.peek(11);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct I_blr_ds_blr_ds_cache {
  I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_12_cache I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_12;
};



inline void I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_12_write(hw_uint<32> & I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_12, I_blr_ds_blr_ds_cache& I_blr_ds_blr_ds) {
	I_blr_ds_blr_ds.I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_12.push(I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_12);
}

inline hw_uint<32>  I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_17_select(I_blr_ds_blr_ds_cache& I_blr_ds_blr_ds, int root, int I_blr_ds_blr_ds_out_r, int I_blr_ds_blr_ds_out_c) {
  // qpd = { store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds[root, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c] -> 1 : root = 0 and I_blr_ds_blr_ds_out_r = 5 and 0 <= I_blr_ds_blr_ds_out_c <= 1; store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds[root, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c] -> 1 : root = 0 and I_blr_ds_blr_ds_out_r = 5 and I_blr_ds_blr_ds_out_c = 2; store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds[root, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c] -> (11 - I_blr_ds_blr_ds_out_c) : root = 0 and 0 <= I_blr_ds_blr_ds_out_r <= 1 and 0 <= I_blr_ds_blr_ds_out_c <= 4; store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds[root, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c] -> 6 : root = 0 and I_blr_ds_blr_ds_out_c = 5 and 0 <= I_blr_ds_blr_ds_out_r <= 1; store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds[root, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c] -> 7 : root = 0 and I_blr_ds_blr_ds_out_r = 2 and (1 + I_blr_ds_blr_ds_out_c) mod 3 = 0 and 2 <= I_blr_ds_blr_ds_out_c <= 4; store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds[root, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c] -> (8/3 + 2/3 * I_blr_ds_blr_ds_out_c) : root = 0 and I_blr_ds_blr_ds_out_r = 2 and I_blr_ds_blr_ds_out_c = 5; store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds[root, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c] -> (7 - floor((1 + I_blr_ds_blr_ds_out_c)/3)) : root = 0 and I_blr_ds_blr_ds_out_r = 2 and 0 <= I_blr_ds_blr_ds_out_c <= 4 and 3*floor((1 + I_blr_ds_blr_ds_out_c)/3) <= I_blr_ds_blr_ds_out_c; store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds[root, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c] -> (5 - I_blr_ds_blr_ds_out_c) : root = 0 and 3 <= I_blr_ds_blr_ds_out_r <= 4 and 0 <= I_blr_ds_blr_ds_out_c <= 4 and ((3*floor((1 + I_blr_ds_blr_ds_out_c)/3) <= I_blr_ds_blr_ds_out_c) or (1 + I_blr_ds_blr_ds_out_c) mod 3 = 0) }
	hw_uint<32>  value_I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_12 = I_blr_ds_blr_ds.I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_12.peek(/* Needs general delay string */ (-5 + I_blr_ds_blr_ds_out_r == 0 && root == 0 && I_blr_ds_blr_ds_out_c >= 0 && 1 - I_blr_ds_blr_ds_out_c >= 0) ? (1) : (-2 + I_blr_ds_blr_ds_out_c == 0 && -5 + I_blr_ds_blr_ds_out_r == 0 && root == 0) ? (1) : (root == 0 && I_blr_ds_blr_ds_out_r >= 0 && 1 - I_blr_ds_blr_ds_out_r >= 0 && I_blr_ds_blr_ds_out_c >= 0 && 4 - I_blr_ds_blr_ds_out_c >= 0) ? ((11 - I_blr_ds_blr_ds_out_c)) : (-5 + I_blr_ds_blr_ds_out_c == 0 && root == 0 && I_blr_ds_blr_ds_out_r >= 0 && 1 - I_blr_ds_blr_ds_out_r >= 0) ? (6) : ((-1 - I_blr_ds_blr_ds_out_c) % 3 == 0 && -2 + I_blr_ds_blr_ds_out_r == 0 && root == 0 && -2 + I_blr_ds_blr_ds_out_c >= 0 && 4 - I_blr_ds_blr_ds_out_c >= 0) ? (7) : (-5 + I_blr_ds_blr_ds_out_c == 0 && -2 + I_blr_ds_blr_ds_out_r == 0 && root == 0) ? (((8 + 2 * I_blr_ds_blr_ds_out_c))/3) : (-2 + I_blr_ds_blr_ds_out_r == 0 && root == 0 && I_blr_ds_blr_ds_out_c >= 0 && 4 - I_blr_ds_blr_ds_out_c >= 0 && I_blr_ds_blr_ds_out_c - 3*floord(1 + I_blr_ds_blr_ds_out_c, 3) >= 0) ? ((7 - floord(1 + I_blr_ds_blr_ds_out_c, 3))) : ((root == 0 && -3 + I_blr_ds_blr_ds_out_r >= 0 && 4 - I_blr_ds_blr_ds_out_r >= 0 && I_blr_ds_blr_ds_out_c >= 0 && 4 - I_blr_ds_blr_ds_out_c >= 0 && I_blr_ds_blr_ds_out_c - 3*floord(1 + I_blr_ds_blr_ds_out_c, 3) >= 0) || ((-1 - I_blr_ds_blr_ds_out_c) % 3 == 0 && root == 0 && -3 + I_blr_ds_blr_ds_out_r >= 0 && 4 - I_blr_ds_blr_ds_out_r >= 0 && I_blr_ds_blr_ds_out_c >= 0 && 4 - I_blr_ds_blr_ds_out_c >= 0)) ? ((5 - I_blr_ds_blr_ds_out_c)) : 0);
	return value_I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_12;
}

// # of bundles = 2
// I_blr_ds_blr_ds_id0_write
//	I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_12
inline void I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_write_bundle_write(hw_uint<32>& I_blr_ds_blr_ds_id0_write, I_blr_ds_blr_ds_cache& I_blr_ds_blr_ds) {
	hw_uint<32>  I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_12_res = I_blr_ds_blr_ds_id0_write.extract<0, 31>();
	I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_12_write(I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_12_res, I_blr_ds_blr_ds);
}

// store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_read
//	I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_17
inline hw_uint<32> I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_read_bundle_read(I_blr_ds_blr_ds_cache& I_blr_ds_blr_ds, int root, int I_blr_ds_blr_ds_out_r, int I_blr_ds_blr_ds_out_c) {
	hw_uint<32> result;
	hw_uint<32>  I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_17_res = I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_17_select(I_blr_ds_blr_ds, root, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c);
	set_at<0, 32>(result, I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_17_res);
	return result;
}





// Operation logic
inline void I_blr_ds_blr_conv_3_30(I_blr_ds_cache& I_blr_ds, I_blr_ds_blr_cache& I_blr_ds_blr, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	// Consume: I_blr_ds
	auto I_blr_ds_I_blr_ds_blr_r__p__0_c__I_blr_ds_blr_c__p__0_value = I_blr_ds_I_blr_ds_blr_conv_3_30_read_bundle_read(I_blr_ds/* source_delay */, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	auto compute_result = conv_3_3(I_blr_ds_I_blr_ds_blr_r__p__0_c__I_blr_ds_blr_c__p__0_value);
	// Produce: I_blr_ds_blr
	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_write_bundle_write(compute_result, I_blr_ds_blr);
}

inline void store_I_from_in(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in, I_cache& I, int root, int pr, int pc) {
	// Consume: in
	auto in_pr_c__pc_value = in.read();
	// Produce: I
	I_store_I_from_in_write_bundle_write(in_pr_c__pc_value, I);
}

inline void I_blr_ds_blr_ds_id0(I_blr_ds_blr_cache& I_blr_ds_blr, I_blr_ds_blr_ds_cache& I_blr_ds_blr_ds, int root, int I_blr_ds_blr_ds_r, int I_blr_ds_blr_ds_c) {
	// Consume: I_blr_ds_blr
	auto I_blr_ds_blr_2_m_I_blr_ds_blr_ds_r_c__2_m_I_blr_ds_blr_ds_c_value = I_blr_ds_blr_I_blr_ds_blr_ds_id0_read_bundle_read(I_blr_ds_blr/* source_delay */, root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c);
	auto compute_result = id(I_blr_ds_blr_2_m_I_blr_ds_blr_ds_r_c__2_m_I_blr_ds_blr_ds_c_value);
	// Produce: I_blr_ds_blr_ds
	I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_write_bundle_write(compute_result, I_blr_ds_blr_ds);
}

inline void I_blr_ds_id0(I_blr_cache& I_blr, I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_r, int I_blr_ds_c) {
	// Consume: I_blr
	auto I_blr_2_m_I_blr_ds_r_c__2_m_I_blr_ds_c_value = I_blr_I_blr_ds_id0_read_bundle_read(I_blr/* source_delay */, root, I_blr_ds_r, I_blr_ds_c);
	auto compute_result = id(I_blr_2_m_I_blr_ds_r_c__2_m_I_blr_ds_c_value);
	// Produce: I_blr_ds
	I_blr_ds_I_blr_ds_id0_write_bundle_write(compute_result, I_blr_ds);
}

inline void store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds(I_blr_ds_blr_ds_cache& I_blr_ds_blr_ds, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */I_blr_ds_blr_ds_out, int root, int I_blr_ds_blr_ds_out_r, int I_blr_ds_blr_ds_out_c) {
	// Consume: I_blr_ds_blr_ds
	auto I_blr_ds_blr_ds_I_blr_ds_blr_ds_out_r_c__I_blr_ds_blr_ds_out_c_value = I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_read_bundle_read(I_blr_ds_blr_ds/* source_delay */, root, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c);
	// Produce: I_blr_ds_blr_ds_out
	I_blr_ds_blr_ds_out.write(I_blr_ds_blr_ds_I_blr_ds_blr_ds_out_r_c__I_blr_ds_blr_ds_out_c_value);
}

inline void I_blr_conv_3_30(I_cache& I, I_blr_cache& I_blr, int root, int I_blr_r, int I_blr_c) {
	// Consume: I
	auto I_I_blr_r__p__0_c__I_blr_c__p__0_value = I_I_blr_conv_3_30_read_bundle_read(I/* source_delay */, root, I_blr_r, I_blr_c);
	auto compute_result = conv_3_3(I_I_blr_r__p__0_c__I_blr_c__p__0_value);
	// Produce: I_blr
	I_blr_I_blr_conv_3_30_write_bundle_write(compute_result, I_blr);
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
