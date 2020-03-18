#include "conv_3x3.h"

#include "hw_classes.h"

struct I_I_id0_0_to_I_out_blur_270_10_cache {
	// Capacity: 2115
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<16>, 1> f0;
	// Parition [1, 2049) capacity = 2048
	fifo<hw_uint<16>, 2048> f1;
	// Parition [2049, 2049] capacity = 1
	fifo<hw_uint<16>, 1> f2;


	inline hw_uint<16> peek_0() {
		return f0.back();
	}

	inline hw_uint<16> peek_2048() {
		return f1.back();
	}

	inline hw_uint<16> peek_2049() {
		return f2.back();
	}



	inline hw_uint<16> peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 2048) {
			return f1.back();
		}
		if (offset == 2049) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_I_id0_0_to_I_out_blur_270_10: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_I_id0_0_to_I_out_blur_270_11_cache {
	// Capacity: 2115
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<16>, 1> f0;
	// Parition [1, 2048) capacity = 2047
	fifo<hw_uint<16>, 2047> f1;
	// Parition [2048, 2048] capacity = 1
	fifo<hw_uint<16>, 1> f2;


	inline hw_uint<16> peek_0() {
		return f0.back();
	}

	inline hw_uint<16> peek_2047() {
		return f1.back();
	}

	inline hw_uint<16> peek_2048() {
		return f2.back();
	}



	inline hw_uint<16> peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 2047) {
			return f1.back();
		}
		if (offset == 2048) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_I_id0_0_to_I_out_blur_270_11: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_I_id0_0_to_I_out_blur_270_12_cache {
	// Capacity: 2115
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<16>, 1> f0;
	// Parition [1, 1090) capacity = 1089
	fifo<hw_uint<16>, 1089> f1;
	// Parition [1090, 1090] capacity = 1
	fifo<hw_uint<16>, 1> f2;


	inline hw_uint<16> peek_0() {
		return f0.back();
	}

	inline hw_uint<16> peek_1089() {
		return f1.back();
	}

	inline hw_uint<16> peek_1090() {
		return f2.back();
	}



	inline hw_uint<16> peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1089) {
			return f1.back();
		}
		if (offset == 1090) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_I_id0_0_to_I_out_blur_270_12: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_I_id0_0_to_I_out_blur_270_13_cache {
	// Capacity: 2115
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<16>, 1> f0;
	// Parition [1, 1089) capacity = 1088
	fifo<hw_uint<16>, 1088> f1;
	// Parition [1089, 1089] capacity = 1
	fifo<hw_uint<16>, 1> f2;


	inline hw_uint<16> peek_0() {
		return f0.back();
	}

	inline hw_uint<16> peek_1088() {
		return f1.back();
	}

	inline hw_uint<16> peek_1089() {
		return f2.back();
	}



	inline hw_uint<16> peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1088) {
			return f1.back();
		}
		if (offset == 1089) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_I_id0_0_to_I_out_blur_270_13: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_I_id0_0_to_I_out_blur_270_14_cache {
	// Capacity: 2115
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<16>, 1> f0;
	// Parition [1, 1088) capacity = 1087
	fifo<hw_uint<16>, 1087> f1;
	// Parition [1088, 1088] capacity = 1
	fifo<hw_uint<16>, 1> f2;


	inline hw_uint<16> peek_0() {
		return f0.back();
	}

	inline hw_uint<16> peek_1087() {
		return f1.back();
	}

	inline hw_uint<16> peek_1088() {
		return f2.back();
	}



	inline hw_uint<16> peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1087) {
			return f1.back();
		}
		if (offset == 1088) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_I_id0_0_to_I_out_blur_270_14: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_I_id0_0_to_I_out_blur_270_15_cache {
	// Capacity: 2115
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<16>, 1> f0;
	// Parition [1, 1058) capacity = 1057
	fifo<hw_uint<16>, 1057> f1;
	// Parition [1058, 1058] capacity = 1
	fifo<hw_uint<16>, 1> f2;


	inline hw_uint<16> peek_0() {
		return f0.back();
	}

	inline hw_uint<16> peek_1057() {
		return f1.back();
	}

	inline hw_uint<16> peek_1058() {
		return f2.back();
	}



	inline hw_uint<16> peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1057) {
			return f1.back();
		}
		if (offset == 1058) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_I_id0_0_to_I_out_blur_270_15: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_I_id0_0_to_I_out_blur_270_16_cache {
	// Capacity: 2115
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<16>, 1> f0;
	// Parition [1, 1057) capacity = 1056
	fifo<hw_uint<16>, 1056> f1;
	// Parition [1057, 1057] capacity = 1
	fifo<hw_uint<16>, 1> f2;


	inline hw_uint<16> peek_0() {
		return f0.back();
	}

	inline hw_uint<16> peek_1056() {
		return f1.back();
	}

	inline hw_uint<16> peek_1057() {
		return f2.back();
	}



	inline hw_uint<16> peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1056) {
			return f1.back();
		}
		if (offset == 1057) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_I_id0_0_to_I_out_blur_270_16: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_I_id0_0_to_I_out_blur_270_17_cache {
	// Capacity: 2115
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<16>, 1> f0;
	// Parition [1, 1056) capacity = 1055
	fifo<hw_uint<16>, 1055> f1;
	// Parition [1056, 1056] capacity = 1
	fifo<hw_uint<16>, 1> f2;


	inline hw_uint<16> peek_0() {
		return f0.back();
	}

	inline hw_uint<16> peek_1055() {
		return f1.back();
	}

	inline hw_uint<16> peek_1056() {
		return f2.back();
	}



	inline hw_uint<16> peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1055) {
			return f1.back();
		}
		if (offset == 1056) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_I_id0_0_to_I_out_blur_270_17: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_I_id0_0_to_I_out_blur_270_18_cache {
	// Capacity: 2115
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<16>, 1> f0;
	// Parition [1, 1026) capacity = 1025
	fifo<hw_uint<16>, 1025> f1;
	// Parition [1026, 1026] capacity = 1
	fifo<hw_uint<16>, 1> f2;


	inline hw_uint<16> peek_0() {
		return f0.back();
	}

	inline hw_uint<16> peek_1025() {
		return f1.back();
	}

	inline hw_uint<16> peek_1026() {
		return f2.back();
	}



	inline hw_uint<16> peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1025) {
			return f1.back();
		}
		if (offset == 1026) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_I_id0_0_to_I_out_blur_270_18: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_I_id0_0_to_I_out_blur_270_19_cache {
	// Capacity: 2115
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<16>, 1> f0;
	// Parition [1, 1025) capacity = 1024
	fifo<hw_uint<16>, 1024> f1;
	// Parition [1025, 1025] capacity = 1
	fifo<hw_uint<16>, 1> f2;


	inline hw_uint<16> peek_0() {
		return f0.back();
	}

	inline hw_uint<16> peek_1024() {
		return f1.back();
	}

	inline hw_uint<16> peek_1025() {
		return f2.back();
	}



	inline hw_uint<16> peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1024) {
			return f1.back();
		}
		if (offset == 1025) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_I_id0_0_to_I_out_blur_270_19: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_I_id0_0_to_I_out_blur_270_20_cache {
	// Capacity: 2115
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<16>, 1> f0;
	// Parition [1, 1024) capacity = 1023
	fifo<hw_uint<16>, 1023> f1;
	// Parition [1024, 1024] capacity = 1
	fifo<hw_uint<16>, 1> f2;


	inline hw_uint<16> peek_0() {
		return f0.back();
	}

	inline hw_uint<16> peek_1023() {
		return f1.back();
	}

	inline hw_uint<16> peek_1024() {
		return f2.back();
	}



	inline hw_uint<16> peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1023) {
			return f1.back();
		}
		if (offset == 1024) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_I_id0_0_to_I_out_blur_270_20: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_I_id0_0_to_I_out_blur_270_21_cache {
	// Capacity: 2115
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<16>, 1> f0;
	// Parition [1, 66) capacity = 65
	fifo<hw_uint<16>, 65> f1;
	// Parition [66, 66] capacity = 1
	fifo<hw_uint<16>, 1> f2;


	inline hw_uint<16> peek_0() {
		return f0.back();
	}

	inline hw_uint<16> peek_65() {
		return f1.back();
	}

	inline hw_uint<16> peek_66() {
		return f2.back();
	}



	inline hw_uint<16> peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 65) {
			return f1.back();
		}
		if (offset == 66) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_I_id0_0_to_I_out_blur_270_21: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_I_id0_0_to_I_out_blur_270_22_cache {
	// Capacity: 2115
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<16>, 1> f0;
	// Parition [1, 65) capacity = 64
	fifo<hw_uint<16>, 64> f1;
	// Parition [65, 65] capacity = 1
	fifo<hw_uint<16>, 1> f2;


	inline hw_uint<16> peek_0() {
		return f0.back();
	}

	inline hw_uint<16> peek_64() {
		return f1.back();
	}

	inline hw_uint<16> peek_65() {
		return f2.back();
	}



	inline hw_uint<16> peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 64) {
			return f1.back();
		}
		if (offset == 65) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_I_id0_0_to_I_out_blur_270_22: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_I_id0_0_to_I_out_blur_270_23_cache {
	// Capacity: 2115
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<16>, 1> f0;
	// Parition [1, 64) capacity = 63
	fifo<hw_uint<16>, 63> f1;
	// Parition [64, 64] capacity = 1
	fifo<hw_uint<16>, 1> f2;


	inline hw_uint<16> peek_0() {
		return f0.back();
	}

	inline hw_uint<16> peek_63() {
		return f1.back();
	}

	inline hw_uint<16> peek_64() {
		return f2.back();
	}



	inline hw_uint<16> peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 63) {
			return f1.back();
		}
		if (offset == 64) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_I_id0_0_to_I_out_blur_270_23: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_I_id0_0_to_I_out_blur_270_24_cache {
	// Capacity: 2115
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<16>, 1> f0;
	// Parition [1, 34) capacity = 33
	fifo<hw_uint<16>, 33> f1;
	// Parition [34, 34] capacity = 1
	fifo<hw_uint<16>, 1> f2;


	inline hw_uint<16> peek_0() {
		return f0.back();
	}

	inline hw_uint<16> peek_33() {
		return f1.back();
	}

	inline hw_uint<16> peek_34() {
		return f2.back();
	}



	inline hw_uint<16> peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 33) {
			return f1.back();
		}
		if (offset == 34) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_I_id0_0_to_I_out_blur_270_24: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_I_id0_0_to_I_out_blur_270_25_cache {
	// Capacity: 2115
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<16>, 1> f0;
	// Parition [1, 33) capacity = 32
	fifo<hw_uint<16>, 32> f1;
	// Parition [33, 33] capacity = 1
	fifo<hw_uint<16>, 1> f2;


	inline hw_uint<16> peek_0() {
		return f0.back();
	}

	inline hw_uint<16> peek_32() {
		return f1.back();
	}

	inline hw_uint<16> peek_33() {
		return f2.back();
	}



	inline hw_uint<16> peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 32) {
			return f1.back();
		}
		if (offset == 33) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_I_id0_0_to_I_out_blur_270_25: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_I_id0_0_to_I_out_blur_270_26_cache {
	// Capacity: 2115
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<16>, 1> f0;
	// Parition [1, 32) capacity = 31
	fifo<hw_uint<16>, 31> f1;
	// Parition [32, 32] capacity = 1
	fifo<hw_uint<16>, 1> f2;


	inline hw_uint<16> peek_0() {
		return f0.back();
	}

	inline hw_uint<16> peek_31() {
		return f1.back();
	}

	inline hw_uint<16> peek_32() {
		return f2.back();
	}



	inline hw_uint<16> peek(const int offset) {
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
		cout << "Error: Unsupported offset in I_I_id0_0_to_I_out_blur_270_26: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_I_id0_0_to_I_out_blur_270_27_cache {
	// Capacity: 2115
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<16>, 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<16>, 1> f1;
	// Parition [2, 2] capacity = 1
	fifo<hw_uint<16>, 1> f2;


	inline hw_uint<16> peek_0() {
		return f0.back();
	}

	inline hw_uint<16> peek_1() {
		return f1.back();
	}

	inline hw_uint<16> peek_2() {
		return f2.back();
	}



	inline hw_uint<16> peek(const int offset) {
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
		cout << "Error: Unsupported offset in I_I_id0_0_to_I_out_blur_270_27: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_I_id0_0_to_I_out_blur_270_28_cache {
	// Capacity: 2115
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<16>, 1> f0;
	// Parition [1, 1] capacity = 1
	fifo<hw_uint<16>, 1> f2;


	inline hw_uint<16> peek_0() {
		return f0.back();
	}

	inline hw_uint<16> peek_1() {
		return f2.back();
	}



	inline hw_uint<16> peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_I_id0_0_to_I_out_blur_270_28: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f0.back());
		f0.push(value);
	}

};

struct I_I_id0_0_to_I_out_blur_270_29_cache {
	// Capacity: 2115
	// Parition [0, 0] capacity = 1
	fifo<hw_uint<16>, 1> f1;


	inline hw_uint<16> peek_0() {
		return f1.back();
	}



	inline hw_uint<16> peek(const int offset) {
		if (offset == 0) {
			return f1.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_I_id0_0_to_I_out_blur_270_29: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f1.push(value);
	}

};

struct I_I_id0_0_to_I_out_blur_270_3_cache {
	// Capacity: 2115
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<16>, 1> f0;
	// Parition [1, 2114) capacity = 2113
	fifo<hw_uint<16>, 2113> f1;
	// Parition [2114, 2114] capacity = 1
	fifo<hw_uint<16>, 1> f2;


	inline hw_uint<16> peek_0() {
		return f0.back();
	}

	inline hw_uint<16> peek_2113() {
		return f1.back();
	}

	inline hw_uint<16> peek_2114() {
		return f2.back();
	}



	inline hw_uint<16> peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 2113) {
			return f1.back();
		}
		if (offset == 2114) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_I_id0_0_to_I_out_blur_270_3: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_I_id0_0_to_I_out_blur_270_4_cache {
	// Capacity: 2115
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<16>, 1> f0;
	// Parition [1, 2113) capacity = 2112
	fifo<hw_uint<16>, 2112> f1;
	// Parition [2113, 2113] capacity = 1
	fifo<hw_uint<16>, 1> f2;


	inline hw_uint<16> peek_0() {
		return f0.back();
	}

	inline hw_uint<16> peek_2112() {
		return f1.back();
	}

	inline hw_uint<16> peek_2113() {
		return f2.back();
	}



	inline hw_uint<16> peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 2112) {
			return f1.back();
		}
		if (offset == 2113) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_I_id0_0_to_I_out_blur_270_4: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_I_id0_0_to_I_out_blur_270_5_cache {
	// Capacity: 2115
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<16>, 1> f0;
	// Parition [1, 2112) capacity = 2111
	fifo<hw_uint<16>, 2111> f1;
	// Parition [2112, 2112] capacity = 1
	fifo<hw_uint<16>, 1> f2;


	inline hw_uint<16> peek_0() {
		return f0.back();
	}

	inline hw_uint<16> peek_2111() {
		return f1.back();
	}

	inline hw_uint<16> peek_2112() {
		return f2.back();
	}



	inline hw_uint<16> peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 2111) {
			return f1.back();
		}
		if (offset == 2112) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_I_id0_0_to_I_out_blur_270_5: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_I_id0_0_to_I_out_blur_270_6_cache {
	// Capacity: 2115
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<16>, 1> f0;
	// Parition [1, 2082) capacity = 2081
	fifo<hw_uint<16>, 2081> f1;
	// Parition [2082, 2082] capacity = 1
	fifo<hw_uint<16>, 1> f2;


	inline hw_uint<16> peek_0() {
		return f0.back();
	}

	inline hw_uint<16> peek_2081() {
		return f1.back();
	}

	inline hw_uint<16> peek_2082() {
		return f2.back();
	}



	inline hw_uint<16> peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 2081) {
			return f1.back();
		}
		if (offset == 2082) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_I_id0_0_to_I_out_blur_270_6: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_I_id0_0_to_I_out_blur_270_7_cache {
	// Capacity: 2115
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<16>, 1> f0;
	// Parition [1, 2081) capacity = 2080
	fifo<hw_uint<16>, 2080> f1;
	// Parition [2081, 2081] capacity = 1
	fifo<hw_uint<16>, 1> f2;


	inline hw_uint<16> peek_0() {
		return f0.back();
	}

	inline hw_uint<16> peek_2080() {
		return f1.back();
	}

	inline hw_uint<16> peek_2081() {
		return f2.back();
	}



	inline hw_uint<16> peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 2080) {
			return f1.back();
		}
		if (offset == 2081) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_I_id0_0_to_I_out_blur_270_7: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_I_id0_0_to_I_out_blur_270_8_cache {
	// Capacity: 2115
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<16>, 1> f0;
	// Parition [1, 2080) capacity = 2079
	fifo<hw_uint<16>, 2079> f1;
	// Parition [2080, 2080] capacity = 1
	fifo<hw_uint<16>, 1> f2;


	inline hw_uint<16> peek_0() {
		return f0.back();
	}

	inline hw_uint<16> peek_2079() {
		return f1.back();
	}

	inline hw_uint<16> peek_2080() {
		return f2.back();
	}



	inline hw_uint<16> peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 2079) {
			return f1.back();
		}
		if (offset == 2080) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_I_id0_0_to_I_out_blur_270_8: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_I_id0_0_to_I_out_blur_270_9_cache {
	// Capacity: 2115
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<16>, 1> f0;
	// Parition [1, 2050) capacity = 2049
	fifo<hw_uint<16>, 2049> f1;
	// Parition [2050, 2050] capacity = 1
	fifo<hw_uint<16>, 1> f2;


	inline hw_uint<16> peek_0() {
		return f0.back();
	}

	inline hw_uint<16> peek_2049() {
		return f1.back();
	}

	inline hw_uint<16> peek_2050() {
		return f2.back();
	}



	inline hw_uint<16> peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 2049) {
			return f1.back();
		}
		if (offset == 2050) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I_I_id0_0_to_I_out_blur_270_9: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_cache {
  I_I_id0_0_to_I_out_blur_270_10_cache I_I_id0_0_to_I_out_blur_270_10;
  I_I_id0_0_to_I_out_blur_270_11_cache I_I_id0_0_to_I_out_blur_270_11;
  I_I_id0_0_to_I_out_blur_270_12_cache I_I_id0_0_to_I_out_blur_270_12;
  I_I_id0_0_to_I_out_blur_270_13_cache I_I_id0_0_to_I_out_blur_270_13;
  I_I_id0_0_to_I_out_blur_270_14_cache I_I_id0_0_to_I_out_blur_270_14;
  I_I_id0_0_to_I_out_blur_270_15_cache I_I_id0_0_to_I_out_blur_270_15;
  I_I_id0_0_to_I_out_blur_270_16_cache I_I_id0_0_to_I_out_blur_270_16;
  I_I_id0_0_to_I_out_blur_270_17_cache I_I_id0_0_to_I_out_blur_270_17;
  I_I_id0_0_to_I_out_blur_270_18_cache I_I_id0_0_to_I_out_blur_270_18;
  I_I_id0_0_to_I_out_blur_270_19_cache I_I_id0_0_to_I_out_blur_270_19;
  I_I_id0_0_to_I_out_blur_270_20_cache I_I_id0_0_to_I_out_blur_270_20;
  I_I_id0_0_to_I_out_blur_270_21_cache I_I_id0_0_to_I_out_blur_270_21;
  I_I_id0_0_to_I_out_blur_270_22_cache I_I_id0_0_to_I_out_blur_270_22;
  I_I_id0_0_to_I_out_blur_270_23_cache I_I_id0_0_to_I_out_blur_270_23;
  I_I_id0_0_to_I_out_blur_270_24_cache I_I_id0_0_to_I_out_blur_270_24;
  I_I_id0_0_to_I_out_blur_270_25_cache I_I_id0_0_to_I_out_blur_270_25;
  I_I_id0_0_to_I_out_blur_270_26_cache I_I_id0_0_to_I_out_blur_270_26;
  I_I_id0_0_to_I_out_blur_270_27_cache I_I_id0_0_to_I_out_blur_270_27;
  I_I_id0_0_to_I_out_blur_270_28_cache I_I_id0_0_to_I_out_blur_270_28;
  I_I_id0_0_to_I_out_blur_270_29_cache I_I_id0_0_to_I_out_blur_270_29;
  I_I_id0_0_to_I_out_blur_270_3_cache I_I_id0_0_to_I_out_blur_270_3;
  I_I_id0_0_to_I_out_blur_270_4_cache I_I_id0_0_to_I_out_blur_270_4;
  I_I_id0_0_to_I_out_blur_270_5_cache I_I_id0_0_to_I_out_blur_270_5;
  I_I_id0_0_to_I_out_blur_270_6_cache I_I_id0_0_to_I_out_blur_270_6;
  I_I_id0_0_to_I_out_blur_270_7_cache I_I_id0_0_to_I_out_blur_270_7;
  I_I_id0_0_to_I_out_blur_270_8_cache I_I_id0_0_to_I_out_blur_270_8;
  I_I_id0_0_to_I_out_blur_270_9_cache I_I_id0_0_to_I_out_blur_270_9;
};



inline void I_I_id0_0_write(hw_uint<16>& I_I_id0_0, I_cache& I, int root, int ir, int ic, int ib) {
  I.I_I_id0_0_to_I_out_blur_270_10.push(I_I_id0_0);
  I.I_I_id0_0_to_I_out_blur_270_11.push(I_I_id0_0);
  I.I_I_id0_0_to_I_out_blur_270_12.push(I_I_id0_0);
  I.I_I_id0_0_to_I_out_blur_270_13.push(I_I_id0_0);
  I.I_I_id0_0_to_I_out_blur_270_14.push(I_I_id0_0);
  I.I_I_id0_0_to_I_out_blur_270_15.push(I_I_id0_0);
  I.I_I_id0_0_to_I_out_blur_270_16.push(I_I_id0_0);
  I.I_I_id0_0_to_I_out_blur_270_17.push(I_I_id0_0);
  I.I_I_id0_0_to_I_out_blur_270_18.push(I_I_id0_0);
  I.I_I_id0_0_to_I_out_blur_270_19.push(I_I_id0_0);
  I.I_I_id0_0_to_I_out_blur_270_20.push(I_I_id0_0);
  I.I_I_id0_0_to_I_out_blur_270_21.push(I_I_id0_0);
  I.I_I_id0_0_to_I_out_blur_270_22.push(I_I_id0_0);
  I.I_I_id0_0_to_I_out_blur_270_23.push(I_I_id0_0);
  I.I_I_id0_0_to_I_out_blur_270_24.push(I_I_id0_0);
  I.I_I_id0_0_to_I_out_blur_270_25.push(I_I_id0_0);
  I.I_I_id0_0_to_I_out_blur_270_26.push(I_I_id0_0);
  I.I_I_id0_0_to_I_out_blur_270_27.push(I_I_id0_0);
  I.I_I_id0_0_to_I_out_blur_270_28.push(I_I_id0_0);
  I.I_I_id0_0_to_I_out_blur_270_29.push(I_I_id0_0);
  I.I_I_id0_0_to_I_out_blur_270_3.push(I_I_id0_0);
  I.I_I_id0_0_to_I_out_blur_270_4.push(I_I_id0_0);
  I.I_I_id0_0_to_I_out_blur_270_5.push(I_I_id0_0);
  I.I_I_id0_0_to_I_out_blur_270_6.push(I_I_id0_0);
  I.I_I_id0_0_to_I_out_blur_270_7.push(I_I_id0_0);
  I.I_I_id0_0_to_I_out_blur_270_8.push(I_I_id0_0);
  I.I_I_id0_0_to_I_out_blur_270_9.push(I_I_id0_0);
}

inline hw_uint<16> I_out_blur_270_10_select(I_cache& I, int root, int xr, int xc, int xb) {
	// lexmax events: { out_blur_270[root = 0, xr, xc, xb] -> I_id0[root' = 0, ir = xr, ic = 2 + xc, ib = 1 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // I_out_blur_270_10 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[xr, 2 + xc, 1 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	auto value_I_I_id0_0 = I.I_I_id0_0_to_I_out_blur_270_10.peek_2049();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_11_select(I_cache& I, int root, int xr, int xc, int xb) {
	// lexmax events: { out_blur_270[root = 0, xr, xc, xb] -> I_id0[root' = 0, ir = xr, ic = 2 + xc, ib = 2 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // I_out_blur_270_11 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[xr, 2 + xc, 2 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	auto value_I_I_id0_0 = I.I_I_id0_0_to_I_out_blur_270_11.peek_2048();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_12_select(I_cache& I, int root, int xr, int xc, int xb) {
	// lexmax events: { out_blur_270[root = 0, xr, xc, xb] -> I_id0[root' = 0, ir = 1 + xr, ic = xc, ib = xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // I_out_blur_270_12 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[1 + xr, xc, xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	auto value_I_I_id0_0 = I.I_I_id0_0_to_I_out_blur_270_12.peek_1090();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_13_select(I_cache& I, int root, int xr, int xc, int xb) {
	// lexmax events: { out_blur_270[root = 0, xr, xc, xb] -> I_id0[root' = 0, ir = 1 + xr, ic = xc, ib = 1 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // I_out_blur_270_13 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[1 + xr, xc, 1 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	auto value_I_I_id0_0 = I.I_I_id0_0_to_I_out_blur_270_13.peek_1089();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_14_select(I_cache& I, int root, int xr, int xc, int xb) {
	// lexmax events: { out_blur_270[root = 0, xr, xc, xb] -> I_id0[root' = 0, ir = 1 + xr, ic = xc, ib = 2 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // I_out_blur_270_14 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[1 + xr, xc, 2 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	auto value_I_I_id0_0 = I.I_I_id0_0_to_I_out_blur_270_14.peek_1088();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_15_select(I_cache& I, int root, int xr, int xc, int xb) {
	// lexmax events: { out_blur_270[root = 0, xr, xc, xb] -> I_id0[root' = 0, ir = 1 + xr, ic = 1 + xc, ib = xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // I_out_blur_270_15 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[1 + xr, 1 + xc, xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	auto value_I_I_id0_0 = I.I_I_id0_0_to_I_out_blur_270_15.peek_1058();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_16_select(I_cache& I, int root, int xr, int xc, int xb) {
	// lexmax events: { out_blur_270[root = 0, xr, xc, xb] -> I_id0[root' = 0, ir = 1 + xr, ic = 1 + xc, ib = 1 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // I_out_blur_270_16 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[1 + xr, 1 + xc, 1 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	auto value_I_I_id0_0 = I.I_I_id0_0_to_I_out_blur_270_16.peek_1057();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_17_select(I_cache& I, int root, int xr, int xc, int xb) {
	// lexmax events: { out_blur_270[root = 0, xr, xc, xb] -> I_id0[root' = 0, ir = 1 + xr, ic = 1 + xc, ib = 2 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // I_out_blur_270_17 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[1 + xr, 1 + xc, 2 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	auto value_I_I_id0_0 = I.I_I_id0_0_to_I_out_blur_270_17.peek_1056();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_18_select(I_cache& I, int root, int xr, int xc, int xb) {
	// lexmax events: { out_blur_270[root = 0, xr, xc, xb] -> I_id0[root' = 0, ir = 1 + xr, ic = 2 + xc, ib = xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // I_out_blur_270_18 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[1 + xr, 2 + xc, xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	auto value_I_I_id0_0 = I.I_I_id0_0_to_I_out_blur_270_18.peek_1026();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_19_select(I_cache& I, int root, int xr, int xc, int xb) {
	// lexmax events: { out_blur_270[root = 0, xr, xc, xb] -> I_id0[root' = 0, ir = 1 + xr, ic = 2 + xc, ib = 1 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // I_out_blur_270_19 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[1 + xr, 2 + xc, 1 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	auto value_I_I_id0_0 = I.I_I_id0_0_to_I_out_blur_270_19.peek_1025();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_20_select(I_cache& I, int root, int xr, int xc, int xb) {
	// lexmax events: { out_blur_270[root = 0, xr, xc, xb] -> I_id0[root' = 0, ir = 1 + xr, ic = 2 + xc, ib = 2 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // I_out_blur_270_20 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[1 + xr, 2 + xc, 2 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	auto value_I_I_id0_0 = I.I_I_id0_0_to_I_out_blur_270_20.peek_1024();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_21_select(I_cache& I, int root, int xr, int xc, int xb) {
	// lexmax events: { out_blur_270[root = 0, xr, xc, xb] -> I_id0[root' = 0, ir = 2 + xr, ic = xc, ib = xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // I_out_blur_270_21 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[2 + xr, xc, xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	auto value_I_I_id0_0 = I.I_I_id0_0_to_I_out_blur_270_21.peek_66();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_22_select(I_cache& I, int root, int xr, int xc, int xb) {
	// lexmax events: { out_blur_270[root = 0, xr, xc, xb] -> I_id0[root' = 0, ir = 2 + xr, ic = xc, ib = 1 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // I_out_blur_270_22 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[2 + xr, xc, 1 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	auto value_I_I_id0_0 = I.I_I_id0_0_to_I_out_blur_270_22.peek_65();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_23_select(I_cache& I, int root, int xr, int xc, int xb) {
	// lexmax events: { out_blur_270[root = 0, xr, xc, xb] -> I_id0[root' = 0, ir = 2 + xr, ic = xc, ib = 2 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // I_out_blur_270_23 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[2 + xr, xc, 2 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	auto value_I_I_id0_0 = I.I_I_id0_0_to_I_out_blur_270_23.peek_64();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_24_select(I_cache& I, int root, int xr, int xc, int xb) {
	// lexmax events: { out_blur_270[root = 0, xr, xc, xb] -> I_id0[root' = 0, ir = 2 + xr, ic = 1 + xc, ib = xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // I_out_blur_270_24 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[2 + xr, 1 + xc, xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	auto value_I_I_id0_0 = I.I_I_id0_0_to_I_out_blur_270_24.peek_34();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_25_select(I_cache& I, int root, int xr, int xc, int xb) {
	// lexmax events: { out_blur_270[root = 0, xr, xc, xb] -> I_id0[root' = 0, ir = 2 + xr, ic = 1 + xc, ib = 1 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // I_out_blur_270_25 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[2 + xr, 1 + xc, 1 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	auto value_I_I_id0_0 = I.I_I_id0_0_to_I_out_blur_270_25.peek_33();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_26_select(I_cache& I, int root, int xr, int xc, int xb) {
	// lexmax events: { out_blur_270[root = 0, xr, xc, xb] -> I_id0[root' = 0, ir = 2 + xr, ic = 1 + xc, ib = 2 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // I_out_blur_270_26 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[2 + xr, 1 + xc, 2 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	auto value_I_I_id0_0 = I.I_I_id0_0_to_I_out_blur_270_26.peek_32();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_27_select(I_cache& I, int root, int xr, int xc, int xb) {
	// lexmax events: { out_blur_270[root = 0, xr, xc, xb] -> I_id0[root' = 0, ir = 2 + xr, ic = 2 + xc, ib = xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // I_out_blur_270_27 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[2 + xr, 2 + xc, xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	auto value_I_I_id0_0 = I.I_I_id0_0_to_I_out_blur_270_27.peek_2();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_28_select(I_cache& I, int root, int xr, int xc, int xb) {
	// lexmax events: { out_blur_270[root = 0, xr, xc, xb] -> I_id0[root' = 0, ir = 2 + xr, ic = 2 + xc, ib = 1 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // I_out_blur_270_28 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[2 + xr, 2 + xc, 1 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	auto value_I_I_id0_0 = I.I_I_id0_0_to_I_out_blur_270_28.peek_1();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_29_select(I_cache& I, int root, int xr, int xc, int xb) {
	// lexmax events: { out_blur_270[root = 0, xr, xc, xb] -> I_id0[root' = 0, ir = 2 + xr, ic = 2 + xc, ib = 2 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // I_out_blur_270_29 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[2 + xr, 2 + xc, 2 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	auto value_I_I_id0_0 = I.I_I_id0_0_to_I_out_blur_270_29.peek_0();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_3_select(I_cache& I, int root, int xr, int xc, int xb) {
	// lexmax events: { out_blur_270[root = 0, xr, xc, xb] -> I_id0[root' = 0, ir = xr, ic = xc, ib = xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // I_out_blur_270_3 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[xr, xc, xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	auto value_I_I_id0_0 = I.I_I_id0_0_to_I_out_blur_270_3.peek_2114();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_4_select(I_cache& I, int root, int xr, int xc, int xb) {
	// lexmax events: { out_blur_270[root = 0, xr, xc, xb] -> I_id0[root' = 0, ir = xr, ic = xc, ib = 1 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // I_out_blur_270_4 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[xr, xc, 1 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	auto value_I_I_id0_0 = I.I_I_id0_0_to_I_out_blur_270_4.peek_2113();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_5_select(I_cache& I, int root, int xr, int xc, int xb) {
	// lexmax events: { out_blur_270[root = 0, xr, xc, xb] -> I_id0[root' = 0, ir = xr, ic = xc, ib = 2 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // I_out_blur_270_5 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[xr, xc, 2 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	auto value_I_I_id0_0 = I.I_I_id0_0_to_I_out_blur_270_5.peek_2112();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_6_select(I_cache& I, int root, int xr, int xc, int xb) {
	// lexmax events: { out_blur_270[root = 0, xr, xc, xb] -> I_id0[root' = 0, ir = xr, ic = 1 + xc, ib = xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // I_out_blur_270_6 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[xr, 1 + xc, xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	auto value_I_I_id0_0 = I.I_I_id0_0_to_I_out_blur_270_6.peek_2082();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_7_select(I_cache& I, int root, int xr, int xc, int xb) {
	// lexmax events: { out_blur_270[root = 0, xr, xc, xb] -> I_id0[root' = 0, ir = xr, ic = 1 + xc, ib = 1 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // I_out_blur_270_7 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[xr, 1 + xc, 1 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	auto value_I_I_id0_0 = I.I_I_id0_0_to_I_out_blur_270_7.peek_2081();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_8_select(I_cache& I, int root, int xr, int xc, int xb) {
	// lexmax events: { out_blur_270[root = 0, xr, xc, xb] -> I_id0[root' = 0, ir = xr, ic = 1 + xc, ib = 2 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // I_out_blur_270_8 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[xr, 1 + xc, 2 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	auto value_I_I_id0_0 = I.I_I_id0_0_to_I_out_blur_270_8.peek_2080();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_blur_270_9_select(I_cache& I, int root, int xr, int xc, int xb) {
	// lexmax events: { out_blur_270[root = 0, xr, xc, xb] -> I_id0[root' = 0, ir = xr, ic = 2 + xc, ib = xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // I_out_blur_270_9 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[xr, 2 + xc, xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
	auto value_I_I_id0_0 = I.I_I_id0_0_to_I_out_blur_270_9.peek_2050();
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
