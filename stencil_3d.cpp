#include "conv_3x3.h"

#include "hw_classes.h"

struct I_I_id0_0_cache {
	// Capacity: 2115
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<16>, 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<16>, 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<16>, 1> f4;
	// Parition [3, 32) capacity = 29
	fifo<hw_uint<16>, 29> f5;
	// Parition [32, 33) capacity = 1
	fifo<hw_uint<16>, 1> f6;
	// Parition [33, 34) capacity = 1
	fifo<hw_uint<16>, 1> f8;
	// Parition [34, 35) capacity = 1
	fifo<hw_uint<16>, 1> f10;
	// Parition [35, 64) capacity = 29
	fifo<hw_uint<16>, 29> f11;
	// Parition [64, 65) capacity = 1
	fifo<hw_uint<16>, 1> f12;
	// Parition [65, 66) capacity = 1
	fifo<hw_uint<16>, 1> f14;
	// Parition [66, 67) capacity = 1
	fifo<hw_uint<16>, 1> f16;
	// Parition [67, 1024) capacity = 957
	fifo<hw_uint<16>, 957> f17;
	// Parition [1024, 1025) capacity = 1
	fifo<hw_uint<16>, 1> f18;
	// Parition [1025, 1026) capacity = 1
	fifo<hw_uint<16>, 1> f20;
	// Parition [1026, 1027) capacity = 1
	fifo<hw_uint<16>, 1> f22;
	// Parition [1027, 1056) capacity = 29
	fifo<hw_uint<16>, 29> f23;
	// Parition [1056, 1057) capacity = 1
	fifo<hw_uint<16>, 1> f24;
	// Parition [1057, 1058) capacity = 1
	fifo<hw_uint<16>, 1> f26;
	// Parition [1058, 1059) capacity = 1
	fifo<hw_uint<16>, 1> f28;
	// Parition [1059, 1088) capacity = 29
	fifo<hw_uint<16>, 29> f29;
	// Parition [1088, 1089) capacity = 1
	fifo<hw_uint<16>, 1> f30;
	// Parition [1089, 1090) capacity = 1
	fifo<hw_uint<16>, 1> f32;
	// Parition [1090, 1091) capacity = 1
	fifo<hw_uint<16>, 1> f34;
	// Parition [1091, 2048) capacity = 957
	fifo<hw_uint<16>, 957> f35;
	// Parition [2048, 2049) capacity = 1
	fifo<hw_uint<16>, 1> f36;
	// Parition [2049, 2050) capacity = 1
	fifo<hw_uint<16>, 1> f38;
	// Parition [2050, 2051) capacity = 1
	fifo<hw_uint<16>, 1> f40;
	// Parition [2051, 2080) capacity = 29
	fifo<hw_uint<16>, 29> f41;
	// Parition [2080, 2081) capacity = 1
	fifo<hw_uint<16>, 1> f42;
	// Parition [2081, 2082) capacity = 1
	fifo<hw_uint<16>, 1> f44;
	// Parition [2082, 2083) capacity = 1
	fifo<hw_uint<16>, 1> f46;
	// Parition [2083, 2112) capacity = 29
	fifo<hw_uint<16>, 29> f47;
	// Parition [2112, 2113) capacity = 1
	fifo<hw_uint<16>, 1> f48;
	// Parition [2113, 2114) capacity = 1
	fifo<hw_uint<16>, 1> f50;
	// Parition [2114, 2114] capacity = 1
	fifo<hw_uint<16>, 1> f52;


	inline hw_uint<16> peek_0() {
		return f0.back();
	}

	inline hw_uint<16> peek_1() {
		return f2.back();
	}

	inline hw_uint<16> peek_2() {
		return f4.back();
	}

	inline hw_uint<16> peek_31() {
		return f5.back();
	}

	inline hw_uint<16> peek_32() {
		return f6.back();
	}

	inline hw_uint<16> peek_33() {
		return f8.back();
	}

	inline hw_uint<16> peek_34() {
		return f10.back();
	}

	inline hw_uint<16> peek_63() {
		return f11.back();
	}

	inline hw_uint<16> peek_64() {
		return f12.back();
	}

	inline hw_uint<16> peek_65() {
		return f14.back();
	}

	inline hw_uint<16> peek_66() {
		return f16.back();
	}

	inline hw_uint<16> peek_1023() {
		return f17.back();
	}

	inline hw_uint<16> peek_1024() {
		return f18.back();
	}

	inline hw_uint<16> peek_1025() {
		return f20.back();
	}

	inline hw_uint<16> peek_1026() {
		return f22.back();
	}

	inline hw_uint<16> peek_1055() {
		return f23.back();
	}

	inline hw_uint<16> peek_1056() {
		return f24.back();
	}

	inline hw_uint<16> peek_1057() {
		return f26.back();
	}

	inline hw_uint<16> peek_1058() {
		return f28.back();
	}

	inline hw_uint<16> peek_1087() {
		return f29.back();
	}

	inline hw_uint<16> peek_1088() {
		return f30.back();
	}

	inline hw_uint<16> peek_1089() {
		return f32.back();
	}

	inline hw_uint<16> peek_1090() {
		return f34.back();
	}

	inline hw_uint<16> peek_2047() {
		return f35.back();
	}

	inline hw_uint<16> peek_2048() {
		return f36.back();
	}

	inline hw_uint<16> peek_2049() {
		return f38.back();
	}

	inline hw_uint<16> peek_2050() {
		return f40.back();
	}

	inline hw_uint<16> peek_2079() {
		return f41.back();
	}

	inline hw_uint<16> peek_2080() {
		return f42.back();
	}

	inline hw_uint<16> peek_2081() {
		return f44.back();
	}

	inline hw_uint<16> peek_2082() {
		return f46.back();
	}

	inline hw_uint<16> peek_2111() {
		return f47.back();
	}

	inline hw_uint<16> peek_2112() {
		return f48.back();
	}

	inline hw_uint<16> peek_2113() {
		return f50.back();
	}

	inline hw_uint<16> peek_2114() {
		return f52.back();
	}



	inline hw_uint<16> peek(const int offset) {
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
		if (offset == 1023) {
			return f17.back();
		}
		if (offset == 1024) {
			return f18.back();
		}
		if (offset == 1025) {
			return f20.back();
		}
		if (offset == 1026) {
			return f22.back();
		}
		if (offset == 1055) {
			return f23.back();
		}
		if (offset == 1056) {
			return f24.back();
		}
		if (offset == 1057) {
			return f26.back();
		}
		if (offset == 1058) {
			return f28.back();
		}
		if (offset == 1087) {
			return f29.back();
		}
		if (offset == 1088) {
			return f30.back();
		}
		if (offset == 1089) {
			return f32.back();
		}
		if (offset == 1090) {
			return f34.back();
		}
		if (offset == 2047) {
			return f35.back();
		}
		if (offset == 2048) {
			return f36.back();
		}
		if (offset == 2049) {
			return f38.back();
		}
		if (offset == 2050) {
			return f40.back();
		}
		if (offset == 2079) {
			return f41.back();
		}
		if (offset == 2080) {
			return f42.back();
		}
		if (offset == 2081) {
			return f44.back();
		}
		if (offset == 2082) {
			return f46.back();
		}
		if (offset == 2111) {
			return f47.back();
		}
		if (offset == 2112) {
			return f48.back();
		}
		if (offset == 2113) {
			return f50.back();
		}
		if (offset == 2114) {
			return f52.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f52.push(f50.back());
		f50.push(f48.back());
		f48.push(f47.back());
		f47.push(f46.back());
		f46.push(f44.back());
		f44.push(f42.back());
		f42.push(f41.back());
		f41.push(f40.back());
		f40.push(f38.back());
		f38.push(f36.back());
		f36.push(f35.back());
		f35.push(f34.back());
		f34.push(f32.back());
		f32.push(f30.back());
		f30.push(f29.back());
		f29.push(f28.back());
		f28.push(f26.back());
		f26.push(f24.back());
		f24.push(f23.back());
		f23.push(f22.back());
		f22.push(f20.back());
		f20.push(f18.back());
		f18.push(f17.back());
		f17.push(f16.back());
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
  I_I_id0_0_cache I_I_id0_0;
};



inline void I_I_id0_0_write(hw_uint<16>& I_I_id0_0, I_cache& I, int root, int ir, int ic, int ib) {
	I.I_I_id0_0.push(I_I_id0_0);
}

inline hw_uint<16> I_out_blur_270_10_select(I_cache& I, int root, int xr, int xc, int xb) {
  // qpd = { out_blur_270[root, xr, xc, xb] -> 2049 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 28 and 0 <= xb <= 29; out_blur_270[root, xr, xc, xb] -> 2049 : root = 0 and xc = 29 and 0 <= xr <= 29 and 0 <= xb <= 29 }
	hw_uint<16> value_I_I_id0_0 = I.I_I_id0_0.peek_2049();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_11_select(I_cache& I, int root, int xr, int xc, int xb) {
  // qpd = { out_blur_270[root, xr, xc, xb] -> 2048 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 28 and 0 <= xb <= 28; out_blur_270[root, xr, xc, xb] -> (2019 + xb) : root = 0 and xb = 29 and 0 <= xr <= 29 and 0 <= xc <= 28; out_blur_270[root, xr, xc, xb] -> 2048 : root = 0 and xc = 29 and 0 <= xr <= 29 and 0 <= xb <= 28; out_blur_270[root, xr, xc, xb] -> ((1091 + 32 * xc) + xb) : root = 0 and xc = 29 and xb = 29 and 0 <= xr <= 29 }
	hw_uint<16> value_I_I_id0_0 = I.I_I_id0_0.peek_2048();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_12_select(I_cache& I, int root, int xr, int xc, int xb) {
  // qpd = { out_blur_270[root, xr, xc, xb] -> 1090 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	hw_uint<16> value_I_I_id0_0 = I.I_I_id0_0.peek_1090();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_13_select(I_cache& I, int root, int xr, int xc, int xb) {
  // qpd = { out_blur_270[root, xr, xc, xb] -> 1089 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	hw_uint<16> value_I_I_id0_0 = I.I_I_id0_0.peek_1089();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_14_select(I_cache& I, int root, int xr, int xc, int xb) {
  // qpd = { out_blur_270[root, xr, xc, xb] -> 1088 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 28; out_blur_270[root, xr, xc, xb] -> (1059 + xb) : root = 0 and xb = 29 and 0 <= xr <= 29 and 0 <= xc <= 29 }
	hw_uint<16> value_I_I_id0_0 = I.I_I_id0_0.peek_1088();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_15_select(I_cache& I, int root, int xr, int xc, int xb) {
  // qpd = { out_blur_270[root, xr, xc, xb] -> 1058 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	hw_uint<16> value_I_I_id0_0 = I.I_I_id0_0.peek_1058();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_16_select(I_cache& I, int root, int xr, int xc, int xb) {
  // qpd = { out_blur_270[root, xr, xc, xb] -> 1057 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	hw_uint<16> value_I_I_id0_0 = I.I_I_id0_0.peek_1057();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_17_select(I_cache& I, int root, int xr, int xc, int xb) {
  // qpd = { out_blur_270[root, xr, xc, xb] -> 1056 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 28; out_blur_270[root, xr, xc, xb] -> (1027 + xb) : root = 0 and xb = 29 and 0 <= xr <= 29 and 0 <= xc <= 29 }
	hw_uint<16> value_I_I_id0_0 = I.I_I_id0_0.peek_1056();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_18_select(I_cache& I, int root, int xr, int xc, int xb) {
  // qpd = { out_blur_270[root, xr, xc, xb] -> 1026 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 28 and 0 <= xb <= 29; out_blur_270[root, xr, xc, xb] -> 1026 : root = 0 and xc = 29 and 0 <= xr <= 29 and 0 <= xb <= 29 }
	hw_uint<16> value_I_I_id0_0 = I.I_I_id0_0.peek_1026();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_19_select(I_cache& I, int root, int xr, int xc, int xb) {
  // qpd = { out_blur_270[root, xr, xc, xb] -> 1025 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 28 and 0 <= xb <= 29; out_blur_270[root, xr, xc, xb] -> 1025 : root = 0 and xc = 29 and 0 <= xr <= 29 and 0 <= xb <= 29 }
	hw_uint<16> value_I_I_id0_0 = I.I_I_id0_0.peek_1025();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_20_select(I_cache& I, int root, int xr, int xc, int xb) {
  // qpd = { out_blur_270[root, xr, xc, xb] -> 1024 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 28 and 0 <= xb <= 28; out_blur_270[root, xr, xc, xb] -> (995 + xb) : root = 0 and xb = 29 and 0 <= xr <= 29 and 0 <= xc <= 28; out_blur_270[root, xr, xc, xb] -> 1024 : root = 0 and xc = 29 and 0 <= xr <= 29 and 0 <= xb <= 28; out_blur_270[root, xr, xc, xb] -> ((67 + 32 * xc) + xb) : root = 0 and xc = 29 and xb = 29 and 0 <= xr <= 29 }
	hw_uint<16> value_I_I_id0_0 = I.I_I_id0_0.peek_1024();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_21_select(I_cache& I, int root, int xr, int xc, int xb) {
  // qpd = { out_blur_270[root, xr, xc, xb] -> 66 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	hw_uint<16> value_I_I_id0_0 = I.I_I_id0_0.peek_66();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_22_select(I_cache& I, int root, int xr, int xc, int xb) {
  // qpd = { out_blur_270[root, xr, xc, xb] -> 65 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	hw_uint<16> value_I_I_id0_0 = I.I_I_id0_0.peek_65();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_23_select(I_cache& I, int root, int xr, int xc, int xb) {
  // qpd = { out_blur_270[root, xr, xc, xb] -> 64 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 28; out_blur_270[root, xr, xc, xb] -> (35 + xb) : root = 0 and xb = 29 and 0 <= xr <= 29 and 0 <= xc <= 29 }
	hw_uint<16> value_I_I_id0_0 = I.I_I_id0_0.peek_64();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_24_select(I_cache& I, int root, int xr, int xc, int xb) {
  // qpd = { out_blur_270[root, xr, xc, xb] -> 34 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	hw_uint<16> value_I_I_id0_0 = I.I_I_id0_0.peek_34();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_25_select(I_cache& I, int root, int xr, int xc, int xb) {
  // qpd = { out_blur_270[root, xr, xc, xb] -> 33 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	hw_uint<16> value_I_I_id0_0 = I.I_I_id0_0.peek_33();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_26_select(I_cache& I, int root, int xr, int xc, int xb) {
  // qpd = { out_blur_270[root, xr, xc, xb] -> 32 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 28; out_blur_270[root, xr, xc, xb] -> (3 + xb) : root = 0 and xb = 29 and 0 <= xr <= 29 and 0 <= xc <= 29 }
	hw_uint<16> value_I_I_id0_0 = I.I_I_id0_0.peek_32();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_27_select(I_cache& I, int root, int xr, int xc, int xb) {
  // qpd = { out_blur_270[root, xr, xc, xb] -> 2 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	hw_uint<16> value_I_I_id0_0 = I.I_I_id0_0.peek_2();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_28_select(I_cache& I, int root, int xr, int xc, int xb) {
  // qpd = { out_blur_270[root, xr, xc, xb] -> 1 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	hw_uint<16> value_I_I_id0_0 = I.I_I_id0_0.peek_1();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_29_select(I_cache& I, int root, int xr, int xc, int xb) {
  // qpd = {  }
	hw_uint<16> value_I_I_id0_0 = I.I_I_id0_0.peek_0();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_3_select(I_cache& I, int root, int xr, int xc, int xb) {
  // qpd = { out_blur_270[root, xr, xc, xb] -> 2114 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	hw_uint<16> value_I_I_id0_0 = I.I_I_id0_0.peek_2114();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_4_select(I_cache& I, int root, int xr, int xc, int xb) {
  // qpd = { out_blur_270[root, xr, xc, xb] -> 2113 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	hw_uint<16> value_I_I_id0_0 = I.I_I_id0_0.peek_2113();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_5_select(I_cache& I, int root, int xr, int xc, int xb) {
  // qpd = { out_blur_270[root, xr, xc, xb] -> 2112 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 28; out_blur_270[root, xr, xc, xb] -> (2083 + xb) : root = 0 and xb = 29 and 0 <= xr <= 29 and 0 <= xc <= 29 }
	hw_uint<16> value_I_I_id0_0 = I.I_I_id0_0.peek_2112();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_6_select(I_cache& I, int root, int xr, int xc, int xb) {
  // qpd = { out_blur_270[root, xr, xc, xb] -> 2082 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	hw_uint<16> value_I_I_id0_0 = I.I_I_id0_0.peek_2082();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_7_select(I_cache& I, int root, int xr, int xc, int xb) {
  // qpd = { out_blur_270[root, xr, xc, xb] -> 2081 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	hw_uint<16> value_I_I_id0_0 = I.I_I_id0_0.peek_2081();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_8_select(I_cache& I, int root, int xr, int xc, int xb) {
  // qpd = { out_blur_270[root, xr, xc, xb] -> 2080 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 28; out_blur_270[root, xr, xc, xb] -> (2051 + xb) : root = 0 and xb = 29 and 0 <= xr <= 29 and 0 <= xc <= 29 }
	hw_uint<16> value_I_I_id0_0 = I.I_I_id0_0.peek_2080();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_9_select(I_cache& I, int root, int xr, int xc, int xb) {
  // qpd = { out_blur_270[root, xr, xc, xb] -> 2050 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 28 and 0 <= xb <= 29; out_blur_270[root, xr, xc, xb] -> 2050 : root = 0 and xc = 29 and 0 <= xr <= 29 and 0 <= xb <= 29 }
	hw_uint<16> value_I_I_id0_0 = I.I_I_id0_0.peek_2050();
	return value_I_I_id0_0;
}

// # of bundles = 2
// I_id0_write
//	I_I_id0_0
inline void I_I_id0_write_bundle_write(hw_uint<16>& I_id0_write, I_cache& I, int root, int ir, int ic, int ib) {
	hw_uint<16> I_I_id0_0_res = I_id0_write.extract<0, 15>();
	I_I_id0_0_write(I_I_id0_0_res, I, root, ir, ic, ib);
}

// out_blur_270_read
//	I_out_blur_270_3
//	I_out_blur_270_4
//	I_out_blur_270_5
//	I_out_blur_270_6
//	I_out_blur_270_7
//	I_out_blur_270_8
//	I_out_blur_270_9
//	I_out_blur_270_10
//	I_out_blur_270_11
//	I_out_blur_270_12
//	I_out_blur_270_13
//	I_out_blur_270_14
//	I_out_blur_270_15
//	I_out_blur_270_16
//	I_out_blur_270_17
//	I_out_blur_270_18
//	I_out_blur_270_19
//	I_out_blur_270_20
//	I_out_blur_270_21
//	I_out_blur_270_22
//	I_out_blur_270_23
//	I_out_blur_270_24
//	I_out_blur_270_25
//	I_out_blur_270_26
//	I_out_blur_270_27
//	I_out_blur_270_28
//	I_out_blur_270_29
inline hw_uint<432> I_out_blur_270_read_bundle_read(I_cache& I, int root, int xr, int xc, int xb) {
	hw_uint<432> result;
	hw_uint<16> I_out_blur_270_3_res = I_out_blur_270_3_select(I, root, xr, xc, xb);
	set_at<0, 432>(result, I_out_blur_270_3_res);
	hw_uint<16> I_out_blur_270_4_res = I_out_blur_270_4_select(I, root, xr, xc, xb);
	set_at<16, 432>(result, I_out_blur_270_4_res);
	hw_uint<16> I_out_blur_270_5_res = I_out_blur_270_5_select(I, root, xr, xc, xb);
	set_at<32, 432>(result, I_out_blur_270_5_res);
	hw_uint<16> I_out_blur_270_6_res = I_out_blur_270_6_select(I, root, xr, xc, xb);
	set_at<48, 432>(result, I_out_blur_270_6_res);
	hw_uint<16> I_out_blur_270_7_res = I_out_blur_270_7_select(I, root, xr, xc, xb);
	set_at<64, 432>(result, I_out_blur_270_7_res);
	hw_uint<16> I_out_blur_270_8_res = I_out_blur_270_8_select(I, root, xr, xc, xb);
	set_at<80, 432>(result, I_out_blur_270_8_res);
	hw_uint<16> I_out_blur_270_9_res = I_out_blur_270_9_select(I, root, xr, xc, xb);
	set_at<96, 432>(result, I_out_blur_270_9_res);
	hw_uint<16> I_out_blur_270_10_res = I_out_blur_270_10_select(I, root, xr, xc, xb);
	set_at<112, 432>(result, I_out_blur_270_10_res);
	hw_uint<16> I_out_blur_270_11_res = I_out_blur_270_11_select(I, root, xr, xc, xb);
	set_at<128, 432>(result, I_out_blur_270_11_res);
	hw_uint<16> I_out_blur_270_12_res = I_out_blur_270_12_select(I, root, xr, xc, xb);
	set_at<144, 432>(result, I_out_blur_270_12_res);
	hw_uint<16> I_out_blur_270_13_res = I_out_blur_270_13_select(I, root, xr, xc, xb);
	set_at<160, 432>(result, I_out_blur_270_13_res);
	hw_uint<16> I_out_blur_270_14_res = I_out_blur_270_14_select(I, root, xr, xc, xb);
	set_at<176, 432>(result, I_out_blur_270_14_res);
	hw_uint<16> I_out_blur_270_15_res = I_out_blur_270_15_select(I, root, xr, xc, xb);
	set_at<192, 432>(result, I_out_blur_270_15_res);
	hw_uint<16> I_out_blur_270_16_res = I_out_blur_270_16_select(I, root, xr, xc, xb);
	set_at<208, 432>(result, I_out_blur_270_16_res);
	hw_uint<16> I_out_blur_270_17_res = I_out_blur_270_17_select(I, root, xr, xc, xb);
	set_at<224, 432>(result, I_out_blur_270_17_res);
	hw_uint<16> I_out_blur_270_18_res = I_out_blur_270_18_select(I, root, xr, xc, xb);
	set_at<240, 432>(result, I_out_blur_270_18_res);
	hw_uint<16> I_out_blur_270_19_res = I_out_blur_270_19_select(I, root, xr, xc, xb);
	set_at<256, 432>(result, I_out_blur_270_19_res);
	hw_uint<16> I_out_blur_270_20_res = I_out_blur_270_20_select(I, root, xr, xc, xb);
	set_at<272, 432>(result, I_out_blur_270_20_res);
	hw_uint<16> I_out_blur_270_21_res = I_out_blur_270_21_select(I, root, xr, xc, xb);
	set_at<288, 432>(result, I_out_blur_270_21_res);
	hw_uint<16> I_out_blur_270_22_res = I_out_blur_270_22_select(I, root, xr, xc, xb);
	set_at<304, 432>(result, I_out_blur_270_22_res);
	hw_uint<16> I_out_blur_270_23_res = I_out_blur_270_23_select(I, root, xr, xc, xb);
	set_at<320, 432>(result, I_out_blur_270_23_res);
	hw_uint<16> I_out_blur_270_24_res = I_out_blur_270_24_select(I, root, xr, xc, xb);
	set_at<336, 432>(result, I_out_blur_270_24_res);
	hw_uint<16> I_out_blur_270_25_res = I_out_blur_270_25_select(I, root, xr, xc, xb);
	set_at<352, 432>(result, I_out_blur_270_25_res);
	hw_uint<16> I_out_blur_270_26_res = I_out_blur_270_26_select(I, root, xr, xc, xb);
	set_at<368, 432>(result, I_out_blur_270_26_res);
	hw_uint<16> I_out_blur_270_27_res = I_out_blur_270_27_select(I, root, xr, xc, xb);
	set_at<384, 432>(result, I_out_blur_270_27_res);
	hw_uint<16> I_out_blur_270_28_res = I_out_blur_270_28_select(I, root, xr, xc, xb);
	set_at<400, 432>(result, I_out_blur_270_28_res);
	hw_uint<16> I_out_blur_270_29_res = I_out_blur_270_29_select(I, root, xr, xc, xb);
	set_at<416, 432>(result, I_out_blur_270_29_res);
	return result;
}





// Operation logic
inline void I_id0(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */in, I_cache& I, int root, int ir, int ic, int ib) {
	// Consume: in
	auto in_ir_c__ic_c__ib_value = in.read();
	auto compute_result = id(in_ir_c__ic_c__ib_value);
	// Produce: I
	I_I_id0_write_bundle_write(compute_result, I, root, ir, ic, ib);
}

inline void out_blur_270(I_cache& I, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */out, int root, int xr, int xc, int xb) {
	// Consume: I
	auto I_xr__p__0_c__xc__p__0_c__xb__p__0_value = I_out_blur_270_read_bundle_read(I/* source_delay */, root, xr, xc, xb);
	auto compute_result = blur_27(I_xr__p__0_c__xc__p__0_c__xb__p__0_value);
	// Produce: out
	out.write(compute_result);
}

// Driver function
void stencil_3d(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<16> >& /* get_args num ports = 1 */out) {
  I_cache I;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif // __VIVADO_SYNTH__

/* CUSTOM CODE STRING

*/
	for (int c0 = 0; c0 <= 31; c0 += 1)
	  for (int c1 = 0; c1 <= 31; c1 += 1)
	    for (int c2 = 0; c2 <= 31; c2 += 1) {
	      I_id0(in, I, 0, c0, c1, c2);
	      if (c0 >= 2 && c1 >= 2 && c2 >= 2)
	        out_blur_270(I, out, 0, c0 - 2, c1 - 2, c2 - 2);
	    }
	
}
