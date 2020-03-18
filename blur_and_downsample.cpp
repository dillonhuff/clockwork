#include "conv_3x3.h"

#include "hw_classes.h"

struct I_store_I_from_in_12_to_I_I_blr_conv_3_30_15_cache {
	// Capacity: 33
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 32) capacity = 31
	fifo<hw_uint<32> , 31> f1;
	// Parition [32, 32] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_31() {
		return f1.back();
	}

	inline hw_uint<32>  peek_32() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 31) {
			return f1.back();
		}
		if (offset == 32) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_store_I_from_in_12_to_I_I_blr_conv_3_30_15_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_store_I_from_in_12_to_I_I_blr_conv_3_30_16_cache {
	// Capacity: 33
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 31) capacity = 30
	fifo<hw_uint<32> , 30> f1;
	// Parition [31, 31] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_30() {
		return f1.back();
	}

	inline hw_uint<32>  peek_31() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 30) {
			return f1.back();
		}
		if (offset == 31) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_store_I_from_in_12_to_I_I_blr_conv_3_30_16_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_store_I_from_in_12_to_I_I_blr_conv_3_30_17_cache {
	// Capacity: 33
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 30) capacity = 29
	fifo<hw_uint<32> , 29> f1;
	// Parition [30, 30] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_29() {
		return f1.back();
	}

	inline hw_uint<32>  peek_30() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 29) {
			return f1.back();
		}
		if (offset == 30) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_store_I_from_in_12_to_I_I_blr_conv_3_30_17_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_store_I_from_in_12_to_I_I_blr_conv_3_30_18_cache {
	// Capacity: 33
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 17) capacity = 16
	fifo<hw_uint<32> , 16> f1;
	// Parition [17, 17] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_16() {
		return f1.back();
	}

	inline hw_uint<32>  peek_17() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 16) {
			return f1.back();
		}
		if (offset == 17) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_store_I_from_in_12_to_I_I_blr_conv_3_30_18_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_store_I_from_in_12_to_I_I_blr_conv_3_30_19_cache {
	// Capacity: 33
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 16) capacity = 15
	fifo<hw_uint<32> , 15> f1;
	// Parition [16, 16] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_15() {
		return f1.back();
	}

	inline hw_uint<32>  peek_16() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 15) {
			return f1.back();
		}
		if (offset == 16) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_store_I_from_in_12_to_I_I_blr_conv_3_30_19_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_store_I_from_in_12_to_I_I_blr_conv_3_30_20_cache {
	// Capacity: 33
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 15) capacity = 14
	fifo<hw_uint<32> , 14> f1;
	// Parition [15, 15] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_14() {
		return f1.back();
	}

	inline hw_uint<32>  peek_15() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 14) {
			return f1.back();
		}
		if (offset == 15) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_store_I_from_in_12_to_I_I_blr_conv_3_30_20_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_store_I_from_in_12_to_I_I_blr_conv_3_30_21_cache {
	// Capacity: 33
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f1;
	// Parition [2, 2] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f1.back();
	}

	inline hw_uint<32>  peek_2() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f1.back();
		}
		if (offset == 2) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_store_I_from_in_12_to_I_I_blr_conv_3_30_21_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_store_I_from_in_12_to_I_I_blr_conv_3_30_22_cache {
	// Capacity: 33
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 1] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_store_I_from_in_12_to_I_I_blr_conv_3_30_22_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f0.back());
		f0.push(value);
	}

};

struct I_store_I_from_in_12_to_I_I_blr_conv_3_30_23_cache {
	// Capacity: 33
	// Parition [0, 0] capacity = 1
	fifo<hw_uint<32> , 1> f1;


	inline hw_uint<32>  peek_0() {
		return f1.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f1.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_store_I_from_in_12_to_I_I_blr_conv_3_30_23_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f1.push(value);
	}

};

struct I_cache {
  I_store_I_from_in_12_to_I_I_blr_conv_3_30_15_cache bank_I_store_I_from_in_12_to_I_I_blr_conv_3_30_15;
  I_store_I_from_in_12_to_I_I_blr_conv_3_30_16_cache bank_I_store_I_from_in_12_to_I_I_blr_conv_3_30_16;
  I_store_I_from_in_12_to_I_I_blr_conv_3_30_17_cache bank_I_store_I_from_in_12_to_I_I_blr_conv_3_30_17;
  I_store_I_from_in_12_to_I_I_blr_conv_3_30_18_cache bank_I_store_I_from_in_12_to_I_I_blr_conv_3_30_18;
  I_store_I_from_in_12_to_I_I_blr_conv_3_30_19_cache bank_I_store_I_from_in_12_to_I_I_blr_conv_3_30_19;
  I_store_I_from_in_12_to_I_I_blr_conv_3_30_20_cache bank_I_store_I_from_in_12_to_I_I_blr_conv_3_30_20;
  I_store_I_from_in_12_to_I_I_blr_conv_3_30_21_cache bank_I_store_I_from_in_12_to_I_I_blr_conv_3_30_21;
  I_store_I_from_in_12_to_I_I_blr_conv_3_30_22_cache bank_I_store_I_from_in_12_to_I_I_blr_conv_3_30_22;
  I_store_I_from_in_12_to_I_I_blr_conv_3_30_23_cache bank_I_store_I_from_in_12_to_I_I_blr_conv_3_30_23;
};



inline void I_store_I_from_in_12_write(hw_uint<32> & I_store_I_from_in_12, I_cache& I, int root, int pr, int pc) {
  I.bank_I_store_I_from_in_12_to_I_I_blr_conv_3_30_15.push(I_store_I_from_in_12);
  I.bank_I_store_I_from_in_12_to_I_I_blr_conv_3_30_16.push(I_store_I_from_in_12);
  I.bank_I_store_I_from_in_12_to_I_I_blr_conv_3_30_17.push(I_store_I_from_in_12);
  I.bank_I_store_I_from_in_12_to_I_I_blr_conv_3_30_18.push(I_store_I_from_in_12);
  I.bank_I_store_I_from_in_12_to_I_I_blr_conv_3_30_19.push(I_store_I_from_in_12);
  I.bank_I_store_I_from_in_12_to_I_I_blr_conv_3_30_20.push(I_store_I_from_in_12);
  I.bank_I_store_I_from_in_12_to_I_I_blr_conv_3_30_21.push(I_store_I_from_in_12);
  I.bank_I_store_I_from_in_12_to_I_I_blr_conv_3_30_22.push(I_store_I_from_in_12);
  I.bank_I_store_I_from_in_12_to_I_I_blr_conv_3_30_23.push(I_store_I_from_in_12);
}

inline hw_uint<32>  I_I_blr_conv_3_30_15_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
	// lexmax events: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> store_I_from_in[root' = 0, pr = I_blr_r, pc = I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 }
  // I_I_blr_conv_3_30_15 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[I_blr_r, I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 }
	auto value_I_store_I_from_in_12 = I.bank_I_store_I_from_in_12_to_I_I_blr_conv_3_30_15.peek_32();
	return value_I_store_I_from_in_12;
}

inline hw_uint<32>  I_I_blr_conv_3_30_16_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
	// lexmax events: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> store_I_from_in[root' = 0, pr = I_blr_r, pc = 1 + I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 }
  // I_I_blr_conv_3_30_16 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[I_blr_r, 1 + I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 }
	auto value_I_store_I_from_in_12 = I.bank_I_store_I_from_in_12_to_I_I_blr_conv_3_30_16.peek_31();
	return value_I_store_I_from_in_12;
}

inline hw_uint<32>  I_I_blr_conv_3_30_17_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
	// lexmax events: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> store_I_from_in[root' = 0, pr = I_blr_r, pc = 2 + I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 }
  // I_I_blr_conv_3_30_17 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[I_blr_r, 2 + I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 }
	auto value_I_store_I_from_in_12 = I.bank_I_store_I_from_in_12_to_I_I_blr_conv_3_30_17.peek_30();
	return value_I_store_I_from_in_12;
}

inline hw_uint<32>  I_I_blr_conv_3_30_18_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
	// lexmax events: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> store_I_from_in[root' = 0, pr = 1 + I_blr_r, pc = I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 }
  // I_I_blr_conv_3_30_18 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[1 + I_blr_r, I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 }
	auto value_I_store_I_from_in_12 = I.bank_I_store_I_from_in_12_to_I_I_blr_conv_3_30_18.peek_17();
	return value_I_store_I_from_in_12;
}

inline hw_uint<32>  I_I_blr_conv_3_30_19_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
	// lexmax events: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> store_I_from_in[root' = 0, pr = 1 + I_blr_r, pc = 1 + I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 }
  // I_I_blr_conv_3_30_19 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[1 + I_blr_r, 1 + I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 }
	auto value_I_store_I_from_in_12 = I.bank_I_store_I_from_in_12_to_I_I_blr_conv_3_30_19.peek_16();
	return value_I_store_I_from_in_12;
}

inline hw_uint<32>  I_I_blr_conv_3_30_20_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
	// lexmax events: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> store_I_from_in[root' = 0, pr = 1 + I_blr_r, pc = 2 + I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 }
  // I_I_blr_conv_3_30_20 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[1 + I_blr_r, 2 + I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 }
	auto value_I_store_I_from_in_12 = I.bank_I_store_I_from_in_12_to_I_I_blr_conv_3_30_20.peek_15();
	return value_I_store_I_from_in_12;
}

inline hw_uint<32>  I_I_blr_conv_3_30_21_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
	// lexmax events: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> store_I_from_in[root' = 0, pr = 2 + I_blr_r, pc = I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 }
  // I_I_blr_conv_3_30_21 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[2 + I_blr_r, I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 }
	auto value_I_store_I_from_in_12 = I.bank_I_store_I_from_in_12_to_I_I_blr_conv_3_30_21.peek_2();
	return value_I_store_I_from_in_12;
}

inline hw_uint<32>  I_I_blr_conv_3_30_22_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
	// lexmax events: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> store_I_from_in[root' = 0, pr = 2 + I_blr_r, pc = 1 + I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 }
  // I_I_blr_conv_3_30_22 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[2 + I_blr_r, 1 + I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 }
	auto value_I_store_I_from_in_12 = I.bank_I_store_I_from_in_12_to_I_I_blr_conv_3_30_22.peek_1();
	return value_I_store_I_from_in_12;
}

inline hw_uint<32>  I_I_blr_conv_3_30_23_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
	// lexmax events: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> store_I_from_in[root' = 0, pr = 2 + I_blr_r, pc = 2 + I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 }
  // I_I_blr_conv_3_30_23 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[2 + I_blr_r, 2 + I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 }
	auto value_I_store_I_from_in_12 = I.bank_I_store_I_from_in_12_to_I_I_blr_conv_3_30_23.peek_0();
	return value_I_store_I_from_in_12;
}

// # of bundles = 2
// I_blr_conv_3_30_read
//	I_I_blr_conv_3_30_15
//	I_I_blr_conv_3_30_16
//	I_I_blr_conv_3_30_17
//	I_I_blr_conv_3_30_18
//	I_I_blr_conv_3_30_19
//	I_I_blr_conv_3_30_20
//	I_I_blr_conv_3_30_21
//	I_I_blr_conv_3_30_22
//	I_I_blr_conv_3_30_23
inline hw_uint<288> I_I_blr_conv_3_30_read_bundle_read(I_cache& I, int root, int I_blr_r, int I_blr_c) {
	hw_uint<288> result;
	hw_uint<32>  I_I_blr_conv_3_30_15_res = I_I_blr_conv_3_30_15_select(I, root, I_blr_r, I_blr_c);
	set_at<0, 288>(result, I_I_blr_conv_3_30_15_res);
	hw_uint<32>  I_I_blr_conv_3_30_16_res = I_I_blr_conv_3_30_16_select(I, root, I_blr_r, I_blr_c);
	set_at<32, 288>(result, I_I_blr_conv_3_30_16_res);
	hw_uint<32>  I_I_blr_conv_3_30_17_res = I_I_blr_conv_3_30_17_select(I, root, I_blr_r, I_blr_c);
	set_at<64, 288>(result, I_I_blr_conv_3_30_17_res);
	hw_uint<32>  I_I_blr_conv_3_30_18_res = I_I_blr_conv_3_30_18_select(I, root, I_blr_r, I_blr_c);
	set_at<96, 288>(result, I_I_blr_conv_3_30_18_res);
	hw_uint<32>  I_I_blr_conv_3_30_19_res = I_I_blr_conv_3_30_19_select(I, root, I_blr_r, I_blr_c);
	set_at<128, 288>(result, I_I_blr_conv_3_30_19_res);
	hw_uint<32>  I_I_blr_conv_3_30_20_res = I_I_blr_conv_3_30_20_select(I, root, I_blr_r, I_blr_c);
	set_at<160, 288>(result, I_I_blr_conv_3_30_20_res);
	hw_uint<32>  I_I_blr_conv_3_30_21_res = I_I_blr_conv_3_30_21_select(I, root, I_blr_r, I_blr_c);
	set_at<192, 288>(result, I_I_blr_conv_3_30_21_res);
	hw_uint<32>  I_I_blr_conv_3_30_22_res = I_I_blr_conv_3_30_22_select(I, root, I_blr_r, I_blr_c);
	set_at<224, 288>(result, I_I_blr_conv_3_30_22_res);
	hw_uint<32>  I_I_blr_conv_3_30_23_res = I_I_blr_conv_3_30_23_select(I, root, I_blr_r, I_blr_c);
	set_at<256, 288>(result, I_I_blr_conv_3_30_23_res);
	return result;
}

// store_I_from_in_write
//	I_store_I_from_in_12
inline void I_store_I_from_in_write_bundle_write(hw_uint<32>& store_I_from_in_write, I_cache& I, int root, int pr, int pc) {
	hw_uint<32>  I_store_I_from_in_12_res = store_I_from_in_write.extract<0, 31>();
	I_store_I_from_in_12_write(I_store_I_from_in_12_res, I, root, pr, pc);
}



#include "hw_classes.h"

struct I_blr_I_blr_conv_3_30_14_to_I_blr_I_blr_ds_id0_1_cache {
	// Capacity: 1
	// Parition [0, 0] capacity = 1
	fifo<hw_uint<32> , 1> f1;


	inline hw_uint<32>  peek_0() {
		return f1.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f1.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_blr_I_blr_conv_3_30_14_to_I_blr_I_blr_ds_id0_1_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f1.push(value);
	}

};

struct I_blr_cache {
  I_blr_I_blr_conv_3_30_14_to_I_blr_I_blr_ds_id0_1_cache bank_I_blr_I_blr_conv_3_30_14_to_I_blr_I_blr_ds_id0_1;
};



inline void I_blr_I_blr_conv_3_30_14_write(hw_uint<32> & I_blr_I_blr_conv_3_30_14, I_blr_cache& I_blr, int root, int I_blr_r, int I_blr_c) {
  I_blr.bank_I_blr_I_blr_conv_3_30_14_to_I_blr_I_blr_ds_id0_1.push(I_blr_I_blr_conv_3_30_14);
}

inline hw_uint<32>  I_blr_I_blr_ds_id0_1_select(I_blr_cache& I_blr, int root, int I_blr_ds_r, int I_blr_ds_c) {
	// lexmax events: { I_blr_ds_id0[root = 0, I_blr_ds_r, I_blr_ds_c] -> I_blr_conv_3_30[root' = 0, I_blr_r = 2I_blr_ds_r, I_blr_c = 2I_blr_ds_c] : 0 <= I_blr_ds_r <= 5 and 0 <= I_blr_ds_c <= 5 }
  // I_blr_I_blr_ds_id0_1 read pattern: { I_blr_ds_id0[root = 0, I_blr_ds_r, I_blr_ds_c] -> I_blr[2I_blr_ds_r, 2I_blr_ds_c] : 0 <= I_blr_ds_r <= 5 and 0 <= I_blr_ds_c <= 5 }
	auto value_I_blr_I_blr_conv_3_30_14 = I_blr.bank_I_blr_I_blr_conv_3_30_14_to_I_blr_I_blr_ds_id0_1.peek_0();
	return value_I_blr_I_blr_conv_3_30_14;
}

// # of bundles = 2
// I_blr_conv_3_30_write
//	I_blr_I_blr_conv_3_30_14
inline void I_blr_I_blr_conv_3_30_write_bundle_write(hw_uint<32>& I_blr_conv_3_30_write, I_blr_cache& I_blr, int root, int I_blr_r, int I_blr_c) {
	hw_uint<32>  I_blr_I_blr_conv_3_30_14_res = I_blr_conv_3_30_write.extract<0, 31>();
	I_blr_I_blr_conv_3_30_14_write(I_blr_I_blr_conv_3_30_14_res, I_blr, root, I_blr_r, I_blr_c);
}

// I_blr_ds_id0_read
//	I_blr_I_blr_ds_id0_1
inline hw_uint<32> I_blr_I_blr_ds_id0_read_bundle_read(I_blr_cache& I_blr, int root, int I_blr_ds_r, int I_blr_ds_c) {
	hw_uint<32> result;
	hw_uint<32>  I_blr_I_blr_ds_id0_1_res = I_blr_I_blr_ds_id0_1_select(I_blr, root, I_blr_ds_r, I_blr_ds_c);
	set_at<0, 32>(result, I_blr_I_blr_ds_id0_1_res);
	return result;
}



#include "hw_classes.h"

struct I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_10_cache {
	// Capacity: 15
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 1] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_10_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f0.back());
		f0.push(value);
	}

};

struct I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_11_cache {
	// Capacity: 15
	// Parition [0, 0] capacity = 1
	fifo<hw_uint<32> , 1> f1;


	inline hw_uint<32>  peek_0() {
		return f1.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f1.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_11_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f1.push(value);
	}

};

struct I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_3_cache {
	// Capacity: 15
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 14) capacity = 13
	fifo<hw_uint<32> , 13> f1;
	// Parition [14, 14] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_13() {
		return f1.back();
	}

	inline hw_uint<32>  peek_14() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 13) {
			return f1.back();
		}
		if (offset == 14) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_3_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_4_cache {
	// Capacity: 15
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 13) capacity = 12
	fifo<hw_uint<32> , 12> f1;
	// Parition [13, 13] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_12() {
		return f1.back();
	}

	inline hw_uint<32>  peek_13() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 12) {
			return f1.back();
		}
		if (offset == 13) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_4_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_5_cache {
	// Capacity: 15
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 12) capacity = 11
	fifo<hw_uint<32> , 11> f1;
	// Parition [12, 12] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_11() {
		return f1.back();
	}

	inline hw_uint<32>  peek_12() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 11) {
			return f1.back();
		}
		if (offset == 12) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_5_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_6_cache {
	// Capacity: 15
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 8) capacity = 7
	fifo<hw_uint<32> , 7> f1;
	// Parition [8, 8] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_7() {
		return f1.back();
	}

	inline hw_uint<32>  peek_8() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 7) {
			return f1.back();
		}
		if (offset == 8) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_6_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_7_cache {
	// Capacity: 15
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 7) capacity = 6
	fifo<hw_uint<32> , 6> f1;
	// Parition [7, 7] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_6() {
		return f1.back();
	}

	inline hw_uint<32>  peek_7() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 6) {
			return f1.back();
		}
		if (offset == 7) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_7_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_8_cache {
	// Capacity: 15
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 6) capacity = 5
	fifo<hw_uint<32> , 5> f1;
	// Parition [6, 6] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_5() {
		return f1.back();
	}

	inline hw_uint<32>  peek_6() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 5) {
			return f1.back();
		}
		if (offset == 6) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_8_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_9_cache {
	// Capacity: 15
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f1;
	// Parition [2, 2] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f1.back();
	}

	inline hw_uint<32>  peek_2() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f1.back();
		}
		if (offset == 2) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_9_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_blr_ds_cache {
  I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_10_cache bank_I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_10;
  I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_11_cache bank_I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_11;
  I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_3_cache bank_I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_3;
  I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_4_cache bank_I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_4;
  I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_5_cache bank_I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_5;
  I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_6_cache bank_I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_6;
  I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_7_cache bank_I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_7;
  I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_8_cache bank_I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_8;
  I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_9_cache bank_I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_9;
};



inline void I_blr_ds_I_blr_ds_id0_0_write(hw_uint<32> & I_blr_ds_I_blr_ds_id0_0, I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_r, int I_blr_ds_c) {
  I_blr_ds.bank_I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_10.push(I_blr_ds_I_blr_ds_id0_0);
  I_blr_ds.bank_I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_11.push(I_blr_ds_I_blr_ds_id0_0);
  I_blr_ds.bank_I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_3.push(I_blr_ds_I_blr_ds_id0_0);
  I_blr_ds.bank_I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_4.push(I_blr_ds_I_blr_ds_id0_0);
  I_blr_ds.bank_I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_5.push(I_blr_ds_I_blr_ds_id0_0);
  I_blr_ds.bank_I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_6.push(I_blr_ds_I_blr_ds_id0_0);
  I_blr_ds.bank_I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_7.push(I_blr_ds_I_blr_ds_id0_0);
  I_blr_ds.bank_I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_8.push(I_blr_ds_I_blr_ds_id0_0);
  I_blr_ds.bank_I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_9.push(I_blr_ds_I_blr_ds_id0_0);
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_10_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	// lexmax events: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds_id0[root' = 0, I_blr_ds_r = 2 + I_blr_ds_blr_r, I_blr_ds_c = 1 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 }
  // I_blr_ds_I_blr_ds_blr_conv_3_30_10 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[2 + I_blr_ds_blr_r, 1 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 }
	auto value_I_blr_ds_I_blr_ds_id0_0 = I_blr_ds.bank_I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_10.peek_1();
	return value_I_blr_ds_I_blr_ds_id0_0;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_11_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	// lexmax events: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds_id0[root' = 0, I_blr_ds_r = 2 + I_blr_ds_blr_r, I_blr_ds_c = 2 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 }
  // I_blr_ds_I_blr_ds_blr_conv_3_30_11 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[2 + I_blr_ds_blr_r, 2 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 }
	auto value_I_blr_ds_I_blr_ds_id0_0 = I_blr_ds.bank_I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_11.peek_0();
	return value_I_blr_ds_I_blr_ds_id0_0;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_3_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	// lexmax events: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds_id0[root' = 0, I_blr_ds_r = I_blr_ds_blr_r, I_blr_ds_c = I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 }
  // I_blr_ds_I_blr_ds_blr_conv_3_30_3 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 }
	auto value_I_blr_ds_I_blr_ds_id0_0 = I_blr_ds.bank_I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_3.peek_14();
	return value_I_blr_ds_I_blr_ds_id0_0;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_4_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	// lexmax events: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds_id0[root' = 0, I_blr_ds_r = I_blr_ds_blr_r, I_blr_ds_c = 1 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 }
  // I_blr_ds_I_blr_ds_blr_conv_3_30_4 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[I_blr_ds_blr_r, 1 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 }
	auto value_I_blr_ds_I_blr_ds_id0_0 = I_blr_ds.bank_I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_4.peek_13();
	return value_I_blr_ds_I_blr_ds_id0_0;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_5_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	// lexmax events: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds_id0[root' = 0, I_blr_ds_r = I_blr_ds_blr_r, I_blr_ds_c = 2 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 }
  // I_blr_ds_I_blr_ds_blr_conv_3_30_5 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[I_blr_ds_blr_r, 2 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 }
	auto value_I_blr_ds_I_blr_ds_id0_0 = I_blr_ds.bank_I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_5.peek_12();
	return value_I_blr_ds_I_blr_ds_id0_0;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_6_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	// lexmax events: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds_id0[root' = 0, I_blr_ds_r = 1 + I_blr_ds_blr_r, I_blr_ds_c = I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 }
  // I_blr_ds_I_blr_ds_blr_conv_3_30_6 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[1 + I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 }
	auto value_I_blr_ds_I_blr_ds_id0_0 = I_blr_ds.bank_I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_6.peek_8();
	return value_I_blr_ds_I_blr_ds_id0_0;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_7_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	// lexmax events: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds_id0[root' = 0, I_blr_ds_r = 1 + I_blr_ds_blr_r, I_blr_ds_c = 1 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 }
  // I_blr_ds_I_blr_ds_blr_conv_3_30_7 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[1 + I_blr_ds_blr_r, 1 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 }
	auto value_I_blr_ds_I_blr_ds_id0_0 = I_blr_ds.bank_I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_7.peek_7();
	return value_I_blr_ds_I_blr_ds_id0_0;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_8_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	// lexmax events: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds_id0[root' = 0, I_blr_ds_r = 1 + I_blr_ds_blr_r, I_blr_ds_c = 2 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 }
  // I_blr_ds_I_blr_ds_blr_conv_3_30_8 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[1 + I_blr_ds_blr_r, 2 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 }
	auto value_I_blr_ds_I_blr_ds_id0_0 = I_blr_ds.bank_I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_8.peek_6();
	return value_I_blr_ds_I_blr_ds_id0_0;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_9_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	// lexmax events: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds_id0[root' = 0, I_blr_ds_r = 2 + I_blr_ds_blr_r, I_blr_ds_c = I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 }
  // I_blr_ds_I_blr_ds_blr_conv_3_30_9 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[2 + I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 }
	auto value_I_blr_ds_I_blr_ds_id0_0 = I_blr_ds.bank_I_blr_ds_I_blr_ds_id0_0_to_I_blr_ds_I_blr_ds_blr_conv_3_30_9.peek_2();
	return value_I_blr_ds_I_blr_ds_id0_0;
}

// # of bundles = 2
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
inline hw_uint<288> I_blr_ds_I_blr_ds_blr_conv_3_30_read_bundle_read(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	hw_uint<288> result;
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_3_res = I_blr_ds_I_blr_ds_blr_conv_3_30_3_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<0, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_3_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_4_res = I_blr_ds_I_blr_ds_blr_conv_3_30_4_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<32, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_4_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_5_res = I_blr_ds_I_blr_ds_blr_conv_3_30_5_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<64, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_5_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_6_res = I_blr_ds_I_blr_ds_blr_conv_3_30_6_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<96, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_6_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_7_res = I_blr_ds_I_blr_ds_blr_conv_3_30_7_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<128, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_7_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_8_res = I_blr_ds_I_blr_ds_blr_conv_3_30_8_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<160, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_8_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_9_res = I_blr_ds_I_blr_ds_blr_conv_3_30_9_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<192, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_9_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_10_res = I_blr_ds_I_blr_ds_blr_conv_3_30_10_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<224, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_10_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_11_res = I_blr_ds_I_blr_ds_blr_conv_3_30_11_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<256, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_11_res);
	return result;
}

// I_blr_ds_id0_write
//	I_blr_ds_I_blr_ds_id0_0
inline void I_blr_ds_I_blr_ds_id0_write_bundle_write(hw_uint<32>& I_blr_ds_id0_write, I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_r, int I_blr_ds_c) {
	hw_uint<32>  I_blr_ds_I_blr_ds_id0_0_res = I_blr_ds_id0_write.extract<0, 31>();
	I_blr_ds_I_blr_ds_id0_0_write(I_blr_ds_I_blr_ds_id0_0_res, I_blr_ds, root, I_blr_ds_r, I_blr_ds_c);
}



#include "hw_classes.h"

struct I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_to_I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_25_cache {
	// Capacity: 8
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
	// Parition [7, 7] capacity = 1
	fifo<hw_uint<32> , 1> f14;


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
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_to_I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_25_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
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
  I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_to_I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_25_cache bank_I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_to_I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_25;
};



inline void I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_write(hw_uint<32> & I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2, I_blr_ds_blr_cache& I_blr_ds_blr, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
  I_blr_ds_blr.bank_I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_to_I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_25.push(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2);
}

inline hw_uint<32>  I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_25_select(I_blr_ds_blr_cache& I_blr_ds_blr, int root, int I_blr_ds_blr_out_r, int I_blr_ds_blr_out_c) {
	// lexmax events: { store_I_blr_ds_blr_out_from_I_blr_ds_blr[root = 0, I_blr_ds_blr_out_r, I_blr_ds_blr_out_c] -> I_blr_ds_blr_conv_3_30[root' = 0, I_blr_ds_blr_r = I_blr_ds_blr_out_r, I_blr_ds_blr_c = I_blr_ds_blr_out_c] : 0 <= I_blr_ds_blr_out_r <= 2 and 0 <= I_blr_ds_blr_out_c <= 3; store_I_blr_ds_blr_out_from_I_blr_ds_blr[root = 0, I_blr_ds_blr_out_r = 3, I_blr_ds_blr_out_c] -> I_blr_ds_blr_conv_3_30[root' = 0, I_blr_ds_blr_r = 3, I_blr_ds_blr_c = I_blr_ds_blr_out_c] : 0 <= I_blr_ds_blr_out_c <= 2; store_I_blr_ds_blr_out_from_I_blr_ds_blr[root = 0, I_blr_ds_blr_out_r = 3, I_blr_ds_blr_out_c = 3] -> I_blr_ds_blr_conv_3_30[root' = 0, I_blr_ds_blr_r = 3, I_blr_ds_blr_c = 3] }
  // I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_25 read pattern: { store_I_blr_ds_blr_out_from_I_blr_ds_blr[root = 0, I_blr_ds_blr_out_r, I_blr_ds_blr_out_c] -> I_blr_ds_blr[I_blr_ds_blr_out_r, I_blr_ds_blr_out_c] : 0 <= I_blr_ds_blr_out_r <= 3 and 0 <= I_blr_ds_blr_out_c <= 3 }
	auto value_I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2 = I_blr_ds_blr.bank_I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_to_I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_25.peek(/* Needs general delay string */ (I_blr_ds_blr_out_c == 0 && -3 + I_blr_ds_blr_out_r == 0 && root == 0) ? (1) : (-1 + I_blr_ds_blr_out_c == 0 && -3 + I_blr_ds_blr_out_r == 0 && root == 0) ? (1) : (I_blr_ds_blr_out_r == 0 && root == 0 && I_blr_ds_blr_out_c >= 0 && 2 - I_blr_ds_blr_out_c >= 0) ? ((7 - I_blr_ds_blr_out_c)) : (-3 + I_blr_ds_blr_out_c == 0 && I_blr_ds_blr_out_r == 0 && root == 0) ? (4) : ((-1 - I_blr_ds_blr_out_c) % 2 == 0 && -1 + I_blr_ds_blr_out_r == 0 && root == 0 && -1 + I_blr_ds_blr_out_c >= 0 && 2 - I_blr_ds_blr_out_c >= 0) ? (5) : (-3 + I_blr_ds_blr_out_c == 0 && -1 + I_blr_ds_blr_out_r == 0 && root == 0) ? (((5 + I_blr_ds_blr_out_c))/2) : ((-I_blr_ds_blr_out_c) % 2 == 0 && -1 + I_blr_ds_blr_out_r == 0 && root == 0 && I_blr_ds_blr_out_c >= 0 && 2 - I_blr_ds_blr_out_c >= 0) ? (((10 - I_blr_ds_blr_out_c))/2) : (((-I_blr_ds_blr_out_c) % 2 == 0 && -2 + I_blr_ds_blr_out_r == 0 && root == 0 && I_blr_ds_blr_out_c >= 0 && 2 - I_blr_ds_blr_out_c >= 0) || ((-1 - I_blr_ds_blr_out_c) % 2 == 0 && -2 + I_blr_ds_blr_out_r == 0 && root == 0 && I_blr_ds_blr_out_c >= 0 && 2 - I_blr_ds_blr_out_c >= 0)) ? ((3 - I_blr_ds_blr_out_c)) : 0);
	return value_I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2;
}

// # of bundles = 2
// I_blr_ds_blr_conv_3_30_write
//	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2
inline void I_blr_ds_blr_I_blr_ds_blr_conv_3_30_write_bundle_write(hw_uint<32>& I_blr_ds_blr_conv_3_30_write, I_blr_ds_blr_cache& I_blr_ds_blr, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	hw_uint<32>  I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_res = I_blr_ds_blr_conv_3_30_write.extract<0, 31>();
	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_write(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_2_res, I_blr_ds_blr, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
}

// store_I_blr_ds_blr_out_from_I_blr_ds_blr_read
//	I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_25
inline hw_uint<32> I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_read_bundle_read(I_blr_ds_blr_cache& I_blr_ds_blr, int root, int I_blr_ds_blr_out_r, int I_blr_ds_blr_out_c) {
	hw_uint<32> result;
	hw_uint<32>  I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_25_res = I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_25_select(I_blr_ds_blr, root, I_blr_ds_blr_out_r, I_blr_ds_blr_out_c);
	set_at<0, 32>(result, I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_25_res);
	return result;
}





// Operation logic
inline void I_blr_ds_id0(I_blr_cache& I_blr, I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_r, int I_blr_ds_c) {
	// Consume: I_blr
	auto I_blr_2_m_I_blr_ds_r_c__2_m_I_blr_ds_c_value = I_blr_I_blr_ds_id0_read_bundle_read(I_blr/* source_delay */, root, I_blr_ds_r, I_blr_ds_c);
	auto compute_result = id(I_blr_2_m_I_blr_ds_r_c__2_m_I_blr_ds_c_value);
	// Produce: I_blr_ds
	I_blr_ds_I_blr_ds_id0_write_bundle_write(compute_result, I_blr_ds, root, I_blr_ds_r, I_blr_ds_c);
}

inline void I_blr_ds_blr_conv_3_30(I_blr_ds_cache& I_blr_ds, I_blr_ds_blr_cache& I_blr_ds_blr, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	// Consume: I_blr_ds
	auto I_blr_ds_I_blr_ds_blr_r__p__0_c__I_blr_ds_blr_c__p__0_value = I_blr_ds_I_blr_ds_blr_conv_3_30_read_bundle_read(I_blr_ds/* source_delay */, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	auto compute_result = conv_3_3(I_blr_ds_I_blr_ds_blr_r__p__0_c__I_blr_ds_blr_c__p__0_value);
	// Produce: I_blr_ds_blr
	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_write_bundle_write(compute_result, I_blr_ds_blr, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
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

inline void store_I_blr_ds_blr_out_from_I_blr_ds_blr(I_blr_ds_blr_cache& I_blr_ds_blr, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */I_blr_ds_blr_out, int root, int I_blr_ds_blr_out_r, int I_blr_ds_blr_out_c) {
	// Consume: I_blr_ds_blr
	auto I_blr_ds_blr_I_blr_ds_blr_out_r_c__I_blr_ds_blr_out_c_value = I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_read_bundle_read(I_blr_ds_blr/* source_delay */, root, I_blr_ds_blr_out_r, I_blr_ds_blr_out_c);
	// Produce: I_blr_ds_blr_out
	I_blr_ds_blr_out.write(I_blr_ds_blr_I_blr_ds_blr_out_r_c__I_blr_ds_blr_out_c_value);
}

// Driver function
void blur_and_downsample(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */I_blr_ds_blr_out) {
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

/* CUSTOM CODE STRING

*/
	for (int c0 = 0; c0 <= 14; c0 += 1)
	  for (int c1 = 0; c1 <= 14; c1 += 1) {
	    store_I_from_in(in, I, 0, c0, c1);
	    if (c0 >= 2 && c1 >= 2) {
	      I_blr_conv_3_30(I, I_blr, 0, c0 - 2, c1 - 2);
	      if (c0 <= 12 && c1 <= 12 && c0 % 2 == 0 && c1 % 2 == 0) {
	        I_blr_ds_id0(I_blr, I_blr_ds, 0, (c0 / 2) - 1, (c1 / 2) - 1);
	        if (c0 >= 6 && c1 >= 6)
	          I_blr_ds_blr_conv_3_30(I_blr_ds, I_blr_ds_blr, 0, (c0 / 2) - 3, (c1 / 2) - 3);
	      }
	      if (c0 >= 9 && c0 <= 12 && c1 >= 9 && c1 <= 12)
	        store_I_blr_ds_blr_out_from_I_blr_ds_blr(I_blr_ds_blr, I_blr_ds_blr_out, 0, c0 - 9, c1 - 9);
	    }
	  }
	
}
