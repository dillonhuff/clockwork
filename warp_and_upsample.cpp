#include "conv_3x3.h"

#include "hw_classes.h"

struct I_store_I_from_in_0_merged_banks_9_cache {
	// Capacity: 131
	// # of read delays: 9
	// read delays: 0, 1, 2, 64, 65, 66, 128, 129, 130
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 64) capacity = 61
	fifo<hw_uint<32> , 61> f5;
	// Parition [64, 65) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [65, 66) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [66, 67) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [67, 128) capacity = 61
	fifo<hw_uint<32> , 61> f11;
	// Parition [128, 129) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [129, 130) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [130, 130] capacity = 1
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

	inline hw_uint<32>  peek_63() {
		return f5.back();
	}

	inline hw_uint<32>  peek_64() {
		return f6.back();
	}

	inline hw_uint<32>  peek_65() {
		return f8.back();
	}

	inline hw_uint<32>  peek_66() {
		return f10.back();
	}

	inline hw_uint<32>  peek_127() {
		return f11.back();
	}

	inline hw_uint<32>  peek_128() {
		return f12.back();
	}

	inline hw_uint<32>  peek_129() {
		return f14.back();
	}

	inline hw_uint<32>  peek_130() {
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
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_store_I_from_in_0_merged_banks_9: " << offset << endl;
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
  I_store_I_from_in_0_merged_banks_9_cache I_store_I_from_in_0_merged_banks_9;
};



inline void I_store_I_from_in_0_write(hw_uint<32> & I_store_I_from_in_0, I_cache& I, int root, int pr, int pc) {
  I.I_store_I_from_in_0_merged_banks_9.push(I_store_I_from_in_0);
}

inline hw_uint<32>  I_warped_0_conv_3_30_10_select(I_cache& I, int root, int br, int bc) {
	// lexmax events: { warped_0_conv_3_30[root = 0, br, bc] -> store_I_from_in[root' = 0, pr = 2 + br, pc = 1 + bc] : 0 <= br <= 61 and 0 <= bc <= 61 }
  // I_warped_0_conv_3_30_10 read pattern: { warped_0_conv_3_30[root = 0, br, bc] -> I[2 + br, 1 + bc] : 0 <= br <= 61 and 0 <= bc <= 61 }
	auto value_I_store_I_from_in_0 = I.I_store_I_from_in_0_merged_banks_9.peek_1();
	return value_I_store_I_from_in_0;
}

inline hw_uint<32>  I_warped_0_conv_3_30_11_select(I_cache& I, int root, int br, int bc) {
	// lexmax events: { warped_0_conv_3_30[root = 0, br, bc] -> store_I_from_in[root' = 0, pr = 2 + br, pc = 2 + bc] : 0 <= br <= 61 and 0 <= bc <= 61 }
  // I_warped_0_conv_3_30_11 read pattern: { warped_0_conv_3_30[root = 0, br, bc] -> I[2 + br, 2 + bc] : 0 <= br <= 61 and 0 <= bc <= 61 }
	auto value_I_store_I_from_in_0 = I.I_store_I_from_in_0_merged_banks_9.peek_0();
	return value_I_store_I_from_in_0;
}

inline hw_uint<32>  I_warped_0_conv_3_30_3_select(I_cache& I, int root, int br, int bc) {
	// lexmax events: { warped_0_conv_3_30[root = 0, br, bc] -> store_I_from_in[root' = 0, pr = br, pc = bc] : 0 <= br <= 61 and 0 <= bc <= 61 }
  // I_warped_0_conv_3_30_3 read pattern: { warped_0_conv_3_30[root = 0, br, bc] -> I[br, bc] : 0 <= br <= 61 and 0 <= bc <= 61 }
	auto value_I_store_I_from_in_0 = I.I_store_I_from_in_0_merged_banks_9.peek_130();
	return value_I_store_I_from_in_0;
}

inline hw_uint<32>  I_warped_0_conv_3_30_4_select(I_cache& I, int root, int br, int bc) {
	// lexmax events: { warped_0_conv_3_30[root = 0, br, bc] -> store_I_from_in[root' = 0, pr = br, pc = 1 + bc] : 0 <= br <= 61 and 0 <= bc <= 61 }
  // I_warped_0_conv_3_30_4 read pattern: { warped_0_conv_3_30[root = 0, br, bc] -> I[br, 1 + bc] : 0 <= br <= 61 and 0 <= bc <= 61 }
	auto value_I_store_I_from_in_0 = I.I_store_I_from_in_0_merged_banks_9.peek_129();
	return value_I_store_I_from_in_0;
}

inline hw_uint<32>  I_warped_0_conv_3_30_5_select(I_cache& I, int root, int br, int bc) {
	// lexmax events: { warped_0_conv_3_30[root = 0, br, bc] -> store_I_from_in[root' = 0, pr = br, pc = 2 + bc] : 0 <= br <= 61 and 0 <= bc <= 61 }
  // I_warped_0_conv_3_30_5 read pattern: { warped_0_conv_3_30[root = 0, br, bc] -> I[br, 2 + bc] : 0 <= br <= 61 and 0 <= bc <= 61 }
	auto value_I_store_I_from_in_0 = I.I_store_I_from_in_0_merged_banks_9.peek_128();
	return value_I_store_I_from_in_0;
}

inline hw_uint<32>  I_warped_0_conv_3_30_6_select(I_cache& I, int root, int br, int bc) {
	// lexmax events: { warped_0_conv_3_30[root = 0, br, bc] -> store_I_from_in[root' = 0, pr = 1 + br, pc = bc] : 0 <= br <= 61 and 0 <= bc <= 61 }
  // I_warped_0_conv_3_30_6 read pattern: { warped_0_conv_3_30[root = 0, br, bc] -> I[1 + br, bc] : 0 <= br <= 61 and 0 <= bc <= 61 }
	auto value_I_store_I_from_in_0 = I.I_store_I_from_in_0_merged_banks_9.peek_66();
	return value_I_store_I_from_in_0;
}

inline hw_uint<32>  I_warped_0_conv_3_30_7_select(I_cache& I, int root, int br, int bc) {
	// lexmax events: { warped_0_conv_3_30[root = 0, br, bc] -> store_I_from_in[root' = 0, pr = 1 + br, pc = 1 + bc] : 0 <= br <= 61 and 0 <= bc <= 61 }
  // I_warped_0_conv_3_30_7 read pattern: { warped_0_conv_3_30[root = 0, br, bc] -> I[1 + br, 1 + bc] : 0 <= br <= 61 and 0 <= bc <= 61 }
	auto value_I_store_I_from_in_0 = I.I_store_I_from_in_0_merged_banks_9.peek_65();
	return value_I_store_I_from_in_0;
}

inline hw_uint<32>  I_warped_0_conv_3_30_8_select(I_cache& I, int root, int br, int bc) {
	// lexmax events: { warped_0_conv_3_30[root = 0, br, bc] -> store_I_from_in[root' = 0, pr = 1 + br, pc = 2 + bc] : 0 <= br <= 61 and 0 <= bc <= 61 }
  // I_warped_0_conv_3_30_8 read pattern: { warped_0_conv_3_30[root = 0, br, bc] -> I[1 + br, 2 + bc] : 0 <= br <= 61 and 0 <= bc <= 61 }
	auto value_I_store_I_from_in_0 = I.I_store_I_from_in_0_merged_banks_9.peek_64();
	return value_I_store_I_from_in_0;
}

inline hw_uint<32>  I_warped_0_conv_3_30_9_select(I_cache& I, int root, int br, int bc) {
	// lexmax events: { warped_0_conv_3_30[root = 0, br, bc] -> store_I_from_in[root' = 0, pr = 2 + br, pc = bc] : 0 <= br <= 61 and 0 <= bc <= 61 }
  // I_warped_0_conv_3_30_9 read pattern: { warped_0_conv_3_30[root = 0, br, bc] -> I[2 + br, bc] : 0 <= br <= 61 and 0 <= bc <= 61 }
	auto value_I_store_I_from_in_0 = I.I_store_I_from_in_0_merged_banks_9.peek_2();
	return value_I_store_I_from_in_0;
}

// # of bundles = 2
// store_I_from_in_write
//	I_store_I_from_in_0
inline void I_store_I_from_in_write_bundle_write(hw_uint<32>& store_I_from_in_write, I_cache& I, int root, int pr, int pc) {
	hw_uint<32>  I_store_I_from_in_0_res = store_I_from_in_write.extract<0, 31>();
	I_store_I_from_in_0_write(I_store_I_from_in_0_res, I, root, pr, pc);
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
inline hw_uint<288> I_warped_0_conv_3_30_read_bundle_read(I_cache& I, int root, int br, int bc) {
	hw_uint<288> result;
	hw_uint<32>  I_warped_0_conv_3_30_3_res = I_warped_0_conv_3_30_3_select(I, root, br, bc);
	set_at<0, 288>(result, I_warped_0_conv_3_30_3_res);
	hw_uint<32>  I_warped_0_conv_3_30_4_res = I_warped_0_conv_3_30_4_select(I, root, br, bc);
	set_at<32, 288>(result, I_warped_0_conv_3_30_4_res);
	hw_uint<32>  I_warped_0_conv_3_30_5_res = I_warped_0_conv_3_30_5_select(I, root, br, bc);
	set_at<64, 288>(result, I_warped_0_conv_3_30_5_res);
	hw_uint<32>  I_warped_0_conv_3_30_6_res = I_warped_0_conv_3_30_6_select(I, root, br, bc);
	set_at<96, 288>(result, I_warped_0_conv_3_30_6_res);
	hw_uint<32>  I_warped_0_conv_3_30_7_res = I_warped_0_conv_3_30_7_select(I, root, br, bc);
	set_at<128, 288>(result, I_warped_0_conv_3_30_7_res);
	hw_uint<32>  I_warped_0_conv_3_30_8_res = I_warped_0_conv_3_30_8_select(I, root, br, bc);
	set_at<160, 288>(result, I_warped_0_conv_3_30_8_res);
	hw_uint<32>  I_warped_0_conv_3_30_9_res = I_warped_0_conv_3_30_9_select(I, root, br, bc);
	set_at<192, 288>(result, I_warped_0_conv_3_30_9_res);
	hw_uint<32>  I_warped_0_conv_3_30_10_res = I_warped_0_conv_3_30_10_select(I, root, br, bc);
	set_at<224, 288>(result, I_warped_0_conv_3_30_10_res);
	hw_uint<32>  I_warped_0_conv_3_30_11_res = I_warped_0_conv_3_30_11_select(I, root, br, bc);
	set_at<256, 288>(result, I_warped_0_conv_3_30_11_res);
	return result;
}



#include "hw_classes.h"

struct warped_0_warped_0_conv_3_30_2_to_warped_0_out_id0_13_cache {
	// Capacity: 62
	// # of read delays: 62
	// read delays: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61
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
	// Parition [38, 39) capacity = 1
	fifo<hw_uint<32> , 1> f76;
	// Parition [39, 40) capacity = 1
	fifo<hw_uint<32> , 1> f78;
	// Parition [40, 41) capacity = 1
	fifo<hw_uint<32> , 1> f80;
	// Parition [41, 42) capacity = 1
	fifo<hw_uint<32> , 1> f82;
	// Parition [42, 43) capacity = 1
	fifo<hw_uint<32> , 1> f84;
	// Parition [43, 44) capacity = 1
	fifo<hw_uint<32> , 1> f86;
	// Parition [44, 45) capacity = 1
	fifo<hw_uint<32> , 1> f88;
	// Parition [45, 46) capacity = 1
	fifo<hw_uint<32> , 1> f90;
	// Parition [46, 47) capacity = 1
	fifo<hw_uint<32> , 1> f92;
	// Parition [47, 48) capacity = 1
	fifo<hw_uint<32> , 1> f94;
	// Parition [48, 49) capacity = 1
	fifo<hw_uint<32> , 1> f96;
	// Parition [49, 50) capacity = 1
	fifo<hw_uint<32> , 1> f98;
	// Parition [50, 51) capacity = 1
	fifo<hw_uint<32> , 1> f100;
	// Parition [51, 52) capacity = 1
	fifo<hw_uint<32> , 1> f102;
	// Parition [52, 53) capacity = 1
	fifo<hw_uint<32> , 1> f104;
	// Parition [53, 54) capacity = 1
	fifo<hw_uint<32> , 1> f106;
	// Parition [54, 55) capacity = 1
	fifo<hw_uint<32> , 1> f108;
	// Parition [55, 56) capacity = 1
	fifo<hw_uint<32> , 1> f110;
	// Parition [56, 57) capacity = 1
	fifo<hw_uint<32> , 1> f112;
	// Parition [57, 58) capacity = 1
	fifo<hw_uint<32> , 1> f114;
	// Parition [58, 59) capacity = 1
	fifo<hw_uint<32> , 1> f116;
	// Parition [59, 60) capacity = 1
	fifo<hw_uint<32> , 1> f118;
	// Parition [60, 61) capacity = 1
	fifo<hw_uint<32> , 1> f120;
	// Parition [61, 61] capacity = 1
	fifo<hw_uint<32> , 1> f122;


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

	inline hw_uint<32>  peek_39() {
		return f78.back();
	}

	inline hw_uint<32>  peek_40() {
		return f80.back();
	}

	inline hw_uint<32>  peek_41() {
		return f82.back();
	}

	inline hw_uint<32>  peek_42() {
		return f84.back();
	}

	inline hw_uint<32>  peek_43() {
		return f86.back();
	}

	inline hw_uint<32>  peek_44() {
		return f88.back();
	}

	inline hw_uint<32>  peek_45() {
		return f90.back();
	}

	inline hw_uint<32>  peek_46() {
		return f92.back();
	}

	inline hw_uint<32>  peek_47() {
		return f94.back();
	}

	inline hw_uint<32>  peek_48() {
		return f96.back();
	}

	inline hw_uint<32>  peek_49() {
		return f98.back();
	}

	inline hw_uint<32>  peek_50() {
		return f100.back();
	}

	inline hw_uint<32>  peek_51() {
		return f102.back();
	}

	inline hw_uint<32>  peek_52() {
		return f104.back();
	}

	inline hw_uint<32>  peek_53() {
		return f106.back();
	}

	inline hw_uint<32>  peek_54() {
		return f108.back();
	}

	inline hw_uint<32>  peek_55() {
		return f110.back();
	}

	inline hw_uint<32>  peek_56() {
		return f112.back();
	}

	inline hw_uint<32>  peek_57() {
		return f114.back();
	}

	inline hw_uint<32>  peek_58() {
		return f116.back();
	}

	inline hw_uint<32>  peek_59() {
		return f118.back();
	}

	inline hw_uint<32>  peek_60() {
		return f120.back();
	}

	inline hw_uint<32>  peek_61() {
		return f122.back();
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
		if (offset == 39) {
			return f78.back();
		}
		if (offset == 40) {
			return f80.back();
		}
		if (offset == 41) {
			return f82.back();
		}
		if (offset == 42) {
			return f84.back();
		}
		if (offset == 43) {
			return f86.back();
		}
		if (offset == 44) {
			return f88.back();
		}
		if (offset == 45) {
			return f90.back();
		}
		if (offset == 46) {
			return f92.back();
		}
		if (offset == 47) {
			return f94.back();
		}
		if (offset == 48) {
			return f96.back();
		}
		if (offset == 49) {
			return f98.back();
		}
		if (offset == 50) {
			return f100.back();
		}
		if (offset == 51) {
			return f102.back();
		}
		if (offset == 52) {
			return f104.back();
		}
		if (offset == 53) {
			return f106.back();
		}
		if (offset == 54) {
			return f108.back();
		}
		if (offset == 55) {
			return f110.back();
		}
		if (offset == 56) {
			return f112.back();
		}
		if (offset == 57) {
			return f114.back();
		}
		if (offset == 58) {
			return f116.back();
		}
		if (offset == 59) {
			return f118.back();
		}
		if (offset == 60) {
			return f120.back();
		}
		if (offset == 61) {
			return f122.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in warped_0_warped_0_conv_3_30_2_to_warped_0_out_id0_13: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f122.push(f120.back());
		f120.push(f118.back());
		f118.push(f116.back());
		f116.push(f114.back());
		f114.push(f112.back());
		f112.push(f110.back());
		f110.push(f108.back());
		f108.push(f106.back());
		f106.push(f104.back());
		f104.push(f102.back());
		f102.push(f100.back());
		f100.push(f98.back());
		f98.push(f96.back());
		f96.push(f94.back());
		f94.push(f92.back());
		f92.push(f90.back());
		f90.push(f88.back());
		f88.push(f86.back());
		f86.push(f84.back());
		f84.push(f82.back());
		f82.push(f80.back());
		f80.push(f78.back());
		f78.push(f76.back());
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

struct warped_0_cache {
  warped_0_warped_0_conv_3_30_2_to_warped_0_out_id0_13_cache warped_0_warped_0_conv_3_30_2_to_warped_0_out_id0_13;
};



inline void warped_0_warped_0_conv_3_30_2_write(hw_uint<32> & warped_0_warped_0_conv_3_30_2, warped_0_cache& warped_0, int root, int br, int bc) {
  warped_0.warped_0_warped_0_conv_3_30_2_to_warped_0_out_id0_13.push(warped_0_warped_0_conv_3_30_2);
}

inline hw_uint<32>  warped_0_out_id0_13_select(warped_0_cache& warped_0, int root, int ur, int kr, int uc, int kc) {
	// lexmax events: { out_id0[root = 0, ur, kr = 1, uc, kc] -> warped_0_conv_3_30[root' = 0, br = ur, bc = uc] : 0 <= ur <= 61 and 0 <= uc <= 61 and 0 <= kc <= 1; out_id0[root = 0, ur, kr = 0, uc, kc = 1] -> warped_0_conv_3_30[root' = 0, br = ur, bc = uc] : 0 <= ur <= 61 and 0 <= uc <= 61; out_id0[root = 0, ur, kr = 0, uc, kc = 0] -> warped_0_conv_3_30[root' = 0, br = ur, bc = uc] : 0 <= ur <= 61 and 0 <= uc <= 61 }
  // warped_0_out_id0_13 read pattern: { out_id0[root = 0, ur, kr, uc, kc] -> warped_0[ur, uc] : 0 <= ur <= 61 and 0 <= kr <= 1 and 0 <= uc <= 61 and 0 <= kc <= 1 }
	auto value_warped_0_warped_0_conv_3_30_2 = warped_0.warped_0_warped_0_conv_3_30_2_to_warped_0_out_id0_13.peek(/* Needs general delay string */ (-1 + kr == 0 && root == 0 && ur >= 0 && 61 - ur >= 0 && uc >= 0 && 60 - uc >= 0 && kc >= 0 && 1 - kc >= 0) ? ((61 - uc)) : 0);
	return value_warped_0_warped_0_conv_3_30_2;
}

// # of bundles = 2
// out_id0_read
//	warped_0_out_id0_13
inline hw_uint<32> warped_0_out_id0_read_bundle_read(warped_0_cache& warped_0, int root, int ur, int kr, int uc, int kc) {
	hw_uint<32> result;
	hw_uint<32>  warped_0_out_id0_13_res = warped_0_out_id0_13_select(warped_0, root, ur, kr, uc, kc);
	set_at<0, 32>(result, warped_0_out_id0_13_res);
	return result;
}

// warped_0_conv_3_30_write
//	warped_0_warped_0_conv_3_30_2
inline void warped_0_warped_0_conv_3_30_write_bundle_write(hw_uint<32>& warped_0_conv_3_30_write, warped_0_cache& warped_0, int root, int br, int bc) {
	hw_uint<32>  warped_0_warped_0_conv_3_30_2_res = warped_0_conv_3_30_write.extract<0, 31>();
	warped_0_warped_0_conv_3_30_2_write(warped_0_warped_0_conv_3_30_2_res, warped_0, root, br, bc);
}





// Operation logic
inline void store_I_from_in(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in, I_cache& I, int root, int pr, int pc) {
	// Consume: in
	auto in_pr_c__pc_value = in.read();
	// Produce: I
	I_store_I_from_in_write_bundle_write(in_pr_c__pc_value, I, root, pr, pc);
}

inline void warped_0_conv_3_30(I_cache& I, warped_0_cache& warped_0, int root, int br, int bc) {
	// Consume: I
	auto I_br__p__0_c__bc__p__0_value = I_warped_0_conv_3_30_read_bundle_read(I/* source_delay */, root, br, bc);
	auto compute_result = conv_3_3(I_br__p__0_c__bc__p__0_value);
	// Produce: warped_0
	warped_0_warped_0_conv_3_30_write_bundle_write(compute_result, warped_0, root, br, bc);
}

inline void out_id0(warped_0_cache& warped_0, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */out, int root, int ur, int kr, int uc, int kc) {
	// Consume: warped_0
	auto warped_0_ur_c__uc_value = warped_0_out_id0_read_bundle_read(warped_0/* source_delay */, root, ur, kr, uc, kc);
	auto compute_result = id(warped_0_ur_c__uc_value);
	// Produce: out
	out.write(compute_result);
}

// Driver function
void warp_and_upsample(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* get_args num ports = 1 */out) {
  I_cache I;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif // __VIVADO_SYNTH__

  warped_0_cache warped_0;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=warped_0 inter false
#endif // __VIVADO_SYNTH__

/* CUSTOM CODE STRING

*/
	for (int c0 = 0; c0 <= 63; c0 += 1) {
	  if (c0 >= 2) {
	    for (int c1 = 0; c1 <= 1; c1 += 1) {
	      if (c1 == 0)
	        for (int c2 = 0; c2 <= 1; c2 += 1)
	          store_I_from_in(in, I, 0, c0, c2);
	      for (int c2 = 2; c2 <= 63; c2 += 1) {
	        if (c1 == 0) {
	          store_I_from_in(in, I, 0, c0, c2);
	          warped_0_conv_3_30(I, warped_0, 0, c0 - 2, c2 - 2);
	        }
	        for (int c3 = 0; c3 <= 1; c3 += 1)
	          out_id0(warped_0, out, 0, c0 - 2, c1, c2 - 2, c3);
	      }
	    }
	  } else {
	    for (int c2 = 0; c2 <= 63; c2 += 1)
	      store_I_from_in(in, I, 0, c0, c2);
	  }
	}
	
}
