#include "conv_3x3.h"

#include "hw_classes.h"

struct I_store_I_from_in_0_0_cache {
	// Capacity: 33
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 16) capacity = 15
	fifo<hw_uint<32> , 15> f1;
	// Parition [16, 17) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [17, 18) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [18, 32) capacity = 14
	fifo<hw_uint<32> , 14> f5;
	// Parition [32, 32] capacity = 1
	fifo<hw_uint<32> , 1> f6;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_15() {
		return f1.back();
	}

	inline hw_uint<32>  peek_16() {
		return f2.back();
	}

	inline hw_uint<32>  peek_17() {
		return f4.back();
	}

	inline hw_uint<32>  peek_31() {
		return f5.back();
	}

	inline hw_uint<32>  peek_32() {
		return f6.back();
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
		if (offset == 17) {
			return f4.back();
		}
		if (offset == 31) {
			return f5.back();
		}
		if (offset == 32) {
			return f6.back();
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
		f6.push(f5.back());
		f5.push(f4.back());
		f4.push(f2.back());
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_store_I_from_in_1_14_cache {
	// Capacity: 34
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 16) capacity = 14
	fifo<hw_uint<32> , 14> f3;
	// Parition [16, 17) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [17, 18) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [18, 33) capacity = 15
	fifo<hw_uint<32> , 15> f7;
	// Parition [33, 33] capacity = 1
	fifo<hw_uint<32> , 1> f8;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_15() {
		return f3.back();
	}

	inline hw_uint<32>  peek_16() {
		return f4.back();
	}

	inline hw_uint<32>  peek_17() {
		return f6.back();
	}

	inline hw_uint<32>  peek_32() {
		return f7.back();
	}

	inline hw_uint<32>  peek_33() {
		return f8.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 15) {
			return f3.back();
		}
		if (offset == 16) {
			return f4.back();
		}
		if (offset == 17) {
			return f6.back();
		}
		if (offset == 32) {
			return f7.back();
		}
		if (offset == 33) {
			return f8.back();
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
		f8.push(f7.back());
		f7.push(f6.back());
		f6.push(f4.back());
		f4.push(f3.back());
		f3.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};



inline void I_store_I_from_in_0_0_write(hw_uint<32> & I_store_I_from_in_0_0, I_store_I_from_in_0_0_cache& I_store_I_from_in_0_0_delay) {
	I_store_I_from_in_0_0_delay.push(I_store_I_from_in_0_0);
}

inline void I_store_I_from_in_1_14_write(hw_uint<32> & I_store_I_from_in_1_14, I_store_I_from_in_1_14_cache& I_store_I_from_in_1_14_delay) {
	I_store_I_from_in_1_14_delay.push(I_store_I_from_in_1_14);
}

inline hw_uint<32>  I_out_0_jacobi2d_compute0_3_select(I_store_I_from_in_0_0_cache& I_store_I_from_in_0_0_delay
, I_store_I_from_in_1_14_cache& I_store_I_from_in_1_14_delay
, int root, int d1, int d0) {
	// lexmax events: { out_0_jacobi2d_compute0[root = 0, d1, d0] -> store_I_from_in_0[root' = 0, id1 = d1, id0 = -1 + d0] : 0 < d1 <= 30 and 0 < d0 <= 14 }
	bool select_store_I_from_in_0 = ((/* constraint: { out_0_jacobi2d_compute0[root, d1, d0] : root = 0 } */
1*root == 0 && /* constraint: { out_0_jacobi2d_compute0[root, d1, d0] : -1 + d1 >= 0 } */
1*d1 + -1 >= 0 && /* constraint: { out_0_jacobi2d_compute0[root, d1, d0] : 30 - d1 >= 0 } */
-1*d1 + 30 >= 0 && /* constraint: { out_0_jacobi2d_compute0[root, d1, d0] : -1 + d0 >= 0 } */
1*d0 + -1 >= 0 && /* constraint: { out_0_jacobi2d_compute0[root, d1, d0] : 14 - d0 >= 0 } */
-1*d0 + 14 >= 0));
	// inpt: I_store_I_from_in_0_0
	// k = store_I_from_in_0
	int value_I_store_I_from_in_0_0 = I_store_I_from_in_0_0_delay.peek_17();
	if (select_store_I_from_in_0) { return value_I_store_I_from_in_0_0; }
	// inpt: I_store_I_from_in_1_14
	// k = store_I_from_in_0
//	No key for: I_store_I_from_in_1_14
	cout << "Error: Unsupported offsets: " << " root = " << root  << " d1 = " << d1  << " d0 = " << d0  << endl;
	assert(false);
	return 0;
}

inline hw_uint<32>  I_out_0_jacobi2d_compute0_4_select(I_store_I_from_in_0_0_cache& I_store_I_from_in_0_0_delay
, I_store_I_from_in_1_14_cache& I_store_I_from_in_1_14_delay
, int root, int d1, int d0) {
	// lexmax events: { out_0_jacobi2d_compute0[root = 0, d1, d0] -> store_I_from_in_1[root' = 0, id1 = -1 + d1, id0 = -1 + d0] : 0 < d1 <= 30 and 0 < d0 <= 14 }
	bool select_store_I_from_in_1 = ((/* constraint: { out_0_jacobi2d_compute0[root, d1, d0] : root = 0 } */
1*root == 0 && /* constraint: { out_0_jacobi2d_compute0[root, d1, d0] : -1 + d1 >= 0 } */
1*d1 + -1 >= 0 && /* constraint: { out_0_jacobi2d_compute0[root, d1, d0] : 30 - d1 >= 0 } */
-1*d1 + 30 >= 0 && /* constraint: { out_0_jacobi2d_compute0[root, d1, d0] : -1 + d0 >= 0 } */
1*d0 + -1 >= 0 && /* constraint: { out_0_jacobi2d_compute0[root, d1, d0] : 14 - d0 >= 0 } */
-1*d0 + 14 >= 0));
	// inpt: I_store_I_from_in_0_0
	// k = store_I_from_in_1
//	No key for: I_store_I_from_in_0_0
	// inpt: I_store_I_from_in_1_14
	// k = store_I_from_in_1
	int value_I_store_I_from_in_1_14 = I_store_I_from_in_1_14_delay.peek_33();
	if (select_store_I_from_in_1) { return value_I_store_I_from_in_1_14; }
	cout << "Error: Unsupported offsets: " << " root = " << root  << " d1 = " << d1  << " d0 = " << d0  << endl;
	assert(false);
	return 0;
}

inline hw_uint<32>  I_out_0_jacobi2d_compute0_5_select(I_store_I_from_in_0_0_cache& I_store_I_from_in_0_0_delay
, I_store_I_from_in_1_14_cache& I_store_I_from_in_1_14_delay
, int root, int d1, int d0) {
	// lexmax events: { out_0_jacobi2d_compute0[root = 0, d1, d0] -> store_I_from_in_1[root' = 0, id1 = d1, id0 = -1 + d0] : 0 < d1 <= 30 and 0 < d0 <= 14 }
	bool select_store_I_from_in_1 = ((/* constraint: { out_0_jacobi2d_compute0[root, d1, d0] : root = 0 } */
1*root == 0 && /* constraint: { out_0_jacobi2d_compute0[root, d1, d0] : -1 + d1 >= 0 } */
1*d1 + -1 >= 0 && /* constraint: { out_0_jacobi2d_compute0[root, d1, d0] : 30 - d1 >= 0 } */
-1*d1 + 30 >= 0 && /* constraint: { out_0_jacobi2d_compute0[root, d1, d0] : -1 + d0 >= 0 } */
1*d0 + -1 >= 0 && /* constraint: { out_0_jacobi2d_compute0[root, d1, d0] : 14 - d0 >= 0 } */
-1*d0 + 14 >= 0));
	// inpt: I_store_I_from_in_0_0
	// k = store_I_from_in_1
//	No key for: I_store_I_from_in_0_0
	// inpt: I_store_I_from_in_1_14
	// k = store_I_from_in_1
	int value_I_store_I_from_in_1_14 = I_store_I_from_in_1_14_delay.peek_17();
	if (select_store_I_from_in_1) { return value_I_store_I_from_in_1_14; }
	cout << "Error: Unsupported offsets: " << " root = " << root  << " d1 = " << d1  << " d0 = " << d0  << endl;
	assert(false);
	return 0;
}

inline hw_uint<32>  I_out_0_jacobi2d_compute0_6_select(I_store_I_from_in_0_0_cache& I_store_I_from_in_0_0_delay
, I_store_I_from_in_1_14_cache& I_store_I_from_in_1_14_delay
, int root, int d1, int d0) {
	// lexmax events: { out_0_jacobi2d_compute0[root = 0, d1, d0] -> store_I_from_in_1[root' = 0, id1 = 1 + d1, id0 = -1 + d0] : 0 < d1 <= 30 and 0 < d0 <= 14 }
	bool select_store_I_from_in_1 = ((/* constraint: { out_0_jacobi2d_compute0[root, d1, d0] : root = 0 } */
1*root == 0 && /* constraint: { out_0_jacobi2d_compute0[root, d1, d0] : -1 + d1 >= 0 } */
1*d1 + -1 >= 0 && /* constraint: { out_0_jacobi2d_compute0[root, d1, d0] : 30 - d1 >= 0 } */
-1*d1 + 30 >= 0 && /* constraint: { out_0_jacobi2d_compute0[root, d1, d0] : -1 + d0 >= 0 } */
1*d0 + -1 >= 0 && /* constraint: { out_0_jacobi2d_compute0[root, d1, d0] : 14 - d0 >= 0 } */
-1*d0 + 14 >= 0));
	// inpt: I_store_I_from_in_0_0
	// k = store_I_from_in_1
//	No key for: I_store_I_from_in_0_0
	// inpt: I_store_I_from_in_1_14
	// k = store_I_from_in_1
	int value_I_store_I_from_in_1_14 = I_store_I_from_in_1_14_delay.peek_1();
	if (select_store_I_from_in_1) { return value_I_store_I_from_in_1_14; }
	cout << "Error: Unsupported offsets: " << " root = " << root  << " d1 = " << d1  << " d0 = " << d0  << endl;
	assert(false);
	return 0;
}

inline hw_uint<32>  I_out_0_jacobi2d_compute0_7_select(I_store_I_from_in_0_0_cache& I_store_I_from_in_0_0_delay
, I_store_I_from_in_1_14_cache& I_store_I_from_in_1_14_delay
, int root, int d1, int d0) {
	// lexmax events: { out_0_jacobi2d_compute0[root = 0, d1, d0] -> store_I_from_in_0[root' = 0, id1 = d1, id0 = d0] : 0 < d1 <= 30 and 0 < d0 <= 14 }
	bool select_store_I_from_in_0 = ((/* constraint: { out_0_jacobi2d_compute0[root, d1, d0] : root = 0 } */
1*root == 0 && /* constraint: { out_0_jacobi2d_compute0[root, d1, d0] : -1 + d1 >= 0 } */
1*d1 + -1 >= 0 && /* constraint: { out_0_jacobi2d_compute0[root, d1, d0] : 30 - d1 >= 0 } */
-1*d1 + 30 >= 0 && /* constraint: { out_0_jacobi2d_compute0[root, d1, d0] : -1 + d0 >= 0 } */
1*d0 + -1 >= 0 && /* constraint: { out_0_jacobi2d_compute0[root, d1, d0] : 14 - d0 >= 0 } */
-1*d0 + 14 >= 0));
	// inpt: I_store_I_from_in_0_0
	// k = store_I_from_in_0
	int value_I_store_I_from_in_0_0 = I_store_I_from_in_0_0_delay.peek_16();
	if (select_store_I_from_in_0) { return value_I_store_I_from_in_0_0; }
	// inpt: I_store_I_from_in_1_14
	// k = store_I_from_in_0
//	No key for: I_store_I_from_in_1_14
	cout << "Error: Unsupported offsets: " << " root = " << root  << " d1 = " << d1  << " d0 = " << d0  << endl;
	assert(false);
	return 0;
}

inline hw_uint<32>  I_out_1_jacobi2d_compute1_10_select(I_store_I_from_in_0_0_cache& I_store_I_from_in_0_0_delay
, I_store_I_from_in_1_14_cache& I_store_I_from_in_1_14_delay
, int root, int d1, int d0) {
	// lexmax events: { out_1_jacobi2d_compute1[root = 0, d1, d0] -> store_I_from_in_0[root' = 0, id1 = -1 + d1, id0 = d0] : 0 < d1 <= 30 and 0 < d0 <= 14 }
	bool select_store_I_from_in_0 = ((/* constraint: { out_1_jacobi2d_compute1[root, d1, d0] : root = 0 } */
1*root == 0 && /* constraint: { out_1_jacobi2d_compute1[root, d1, d0] : -1 + d1 >= 0 } */
1*d1 + -1 >= 0 && /* constraint: { out_1_jacobi2d_compute1[root, d1, d0] : 30 - d1 >= 0 } */
-1*d1 + 30 >= 0 && /* constraint: { out_1_jacobi2d_compute1[root, d1, d0] : -1 + d0 >= 0 } */
1*d0 + -1 >= 0 && /* constraint: { out_1_jacobi2d_compute1[root, d1, d0] : 14 - d0 >= 0 } */
-1*d0 + 14 >= 0));
	// inpt: I_store_I_from_in_0_0
	// k = store_I_from_in_0
	int value_I_store_I_from_in_0_0 = I_store_I_from_in_0_0_delay.peek_32();
	if (select_store_I_from_in_0) { return value_I_store_I_from_in_0_0; }
	// inpt: I_store_I_from_in_1_14
	// k = store_I_from_in_0
//	No key for: I_store_I_from_in_1_14
	cout << "Error: Unsupported offsets: " << " root = " << root  << " d1 = " << d1  << " d0 = " << d0  << endl;
	assert(false);
	return 0;
}

inline hw_uint<32>  I_out_1_jacobi2d_compute1_11_select(I_store_I_from_in_0_0_cache& I_store_I_from_in_0_0_delay
, I_store_I_from_in_1_14_cache& I_store_I_from_in_1_14_delay
, int root, int d1, int d0) {
	// lexmax events: { out_1_jacobi2d_compute1[root = 0, d1, d0] -> store_I_from_in_0[root' = 0, id1 = d1, id0 = d0] : 0 < d1 <= 30 and 0 < d0 <= 14 }
	bool select_store_I_from_in_0 = ((/* constraint: { out_1_jacobi2d_compute1[root, d1, d0] : root = 0 } */
1*root == 0 && /* constraint: { out_1_jacobi2d_compute1[root, d1, d0] : -1 + d1 >= 0 } */
1*d1 + -1 >= 0 && /* constraint: { out_1_jacobi2d_compute1[root, d1, d0] : 30 - d1 >= 0 } */
-1*d1 + 30 >= 0 && /* constraint: { out_1_jacobi2d_compute1[root, d1, d0] : -1 + d0 >= 0 } */
1*d0 + -1 >= 0 && /* constraint: { out_1_jacobi2d_compute1[root, d1, d0] : 14 - d0 >= 0 } */
-1*d0 + 14 >= 0));
	// inpt: I_store_I_from_in_0_0
	// k = store_I_from_in_0
	int value_I_store_I_from_in_0_0 = I_store_I_from_in_0_0_delay.peek_16();
	if (select_store_I_from_in_0) { return value_I_store_I_from_in_0_0; }
	// inpt: I_store_I_from_in_1_14
	// k = store_I_from_in_0
//	No key for: I_store_I_from_in_1_14
	cout << "Error: Unsupported offsets: " << " root = " << root  << " d1 = " << d1  << " d0 = " << d0  << endl;
	assert(false);
	return 0;
}

inline hw_uint<32>  I_out_1_jacobi2d_compute1_12_select(I_store_I_from_in_0_0_cache& I_store_I_from_in_0_0_delay
, I_store_I_from_in_1_14_cache& I_store_I_from_in_1_14_delay
, int root, int d1, int d0) {
	// lexmax events: { out_1_jacobi2d_compute1[root = 0, d1, d0] -> store_I_from_in_0[root' = 0, id1 = 1 + d1, id0 = d0] : 0 < d1 <= 30 and 0 < d0 <= 14 }
	bool select_store_I_from_in_0 = ((/* constraint: { out_1_jacobi2d_compute1[root, d1, d0] : root = 0 } */
1*root == 0 && /* constraint: { out_1_jacobi2d_compute1[root, d1, d0] : -1 + d1 >= 0 } */
1*d1 + -1 >= 0 && /* constraint: { out_1_jacobi2d_compute1[root, d1, d0] : 30 - d1 >= 0 } */
-1*d1 + 30 >= 0 && /* constraint: { out_1_jacobi2d_compute1[root, d1, d0] : -1 + d0 >= 0 } */
1*d0 + -1 >= 0 && /* constraint: { out_1_jacobi2d_compute1[root, d1, d0] : 14 - d0 >= 0 } */
-1*d0 + 14 >= 0));
	// inpt: I_store_I_from_in_0_0
	// k = store_I_from_in_0
	int value_I_store_I_from_in_0_0 = I_store_I_from_in_0_0_delay.peek_0();
	if (select_store_I_from_in_0) { return value_I_store_I_from_in_0_0; }
	// inpt: I_store_I_from_in_1_14
	// k = store_I_from_in_0
//	No key for: I_store_I_from_in_1_14
	cout << "Error: Unsupported offsets: " << " root = " << root  << " d1 = " << d1  << " d0 = " << d0  << endl;
	assert(false);
	return 0;
}

inline hw_uint<32>  I_out_1_jacobi2d_compute1_13_select(I_store_I_from_in_0_0_cache& I_store_I_from_in_0_0_delay
, I_store_I_from_in_1_14_cache& I_store_I_from_in_1_14_delay
, int root, int d1, int d0) {
	// lexmax events: { out_1_jacobi2d_compute1[root = 0, d1, d0] -> store_I_from_in_1[root' = 0, id1 = d1, id0 = d0] : 0 < d1 <= 30 and 0 < d0 <= 14 }
	bool select_store_I_from_in_1 = ((/* constraint: { out_1_jacobi2d_compute1[root, d1, d0] : root = 0 } */
1*root == 0 && /* constraint: { out_1_jacobi2d_compute1[root, d1, d0] : -1 + d1 >= 0 } */
1*d1 + -1 >= 0 && /* constraint: { out_1_jacobi2d_compute1[root, d1, d0] : 30 - d1 >= 0 } */
-1*d1 + 30 >= 0 && /* constraint: { out_1_jacobi2d_compute1[root, d1, d0] : -1 + d0 >= 0 } */
1*d0 + -1 >= 0 && /* constraint: { out_1_jacobi2d_compute1[root, d1, d0] : 14 - d0 >= 0 } */
-1*d0 + 14 >= 0));
	// inpt: I_store_I_from_in_0_0
	// k = store_I_from_in_1
//	No key for: I_store_I_from_in_0_0
	// inpt: I_store_I_from_in_1_14
	// k = store_I_from_in_1
	int value_I_store_I_from_in_1_14 = I_store_I_from_in_1_14_delay.peek_16();
	if (select_store_I_from_in_1) { return value_I_store_I_from_in_1_14; }
	cout << "Error: Unsupported offsets: " << " root = " << root  << " d1 = " << d1  << " d0 = " << d0  << endl;
	assert(false);
	return 0;
}

inline hw_uint<32>  I_out_1_jacobi2d_compute1_9_select(I_store_I_from_in_0_0_cache& I_store_I_from_in_0_0_delay
, I_store_I_from_in_1_14_cache& I_store_I_from_in_1_14_delay
, int root, int d1, int d0) {
	// lexmax events: { out_1_jacobi2d_compute1[root = 0, d1, d0] -> store_I_from_in_1[root' = 0, id1 = d1, id0 = -1 + d0] : 0 < d1 <= 30 and 0 < d0 <= 14 }
	bool select_store_I_from_in_1 = ((/* constraint: { out_1_jacobi2d_compute1[root, d1, d0] : root = 0 } */
1*root == 0 && /* constraint: { out_1_jacobi2d_compute1[root, d1, d0] : -1 + d1 >= 0 } */
1*d1 + -1 >= 0 && /* constraint: { out_1_jacobi2d_compute1[root, d1, d0] : 30 - d1 >= 0 } */
-1*d1 + 30 >= 0 && /* constraint: { out_1_jacobi2d_compute1[root, d1, d0] : -1 + d0 >= 0 } */
1*d0 + -1 >= 0 && /* constraint: { out_1_jacobi2d_compute1[root, d1, d0] : 14 - d0 >= 0 } */
-1*d0 + 14 >= 0));
	// inpt: I_store_I_from_in_0_0
	// k = store_I_from_in_1
//	No key for: I_store_I_from_in_0_0
	// inpt: I_store_I_from_in_1_14
	// k = store_I_from_in_1
	int value_I_store_I_from_in_1_14 = I_store_I_from_in_1_14_delay.peek_17();
	if (select_store_I_from_in_1) { return value_I_store_I_from_in_1_14; }
	cout << "Error: Unsupported offsets: " << " root = " << root  << " d1 = " << d1  << " d0 = " << d0  << endl;
	assert(false);
	return 0;
}

// Bundles...
// out_0_jacobi2d_compute0_read
//	I_out_0_jacobi2d_compute0_3
//	I_out_0_jacobi2d_compute0_4
//	I_out_0_jacobi2d_compute0_5
//	I_out_0_jacobi2d_compute0_6
//	I_out_0_jacobi2d_compute0_7
inline hw_uint<160> I_out_0_jacobi2d_compute0_read_bundle_read(I_store_I_from_in_0_0_cache& I_store_I_from_in_0_0_delay, I_store_I_from_in_1_14_cache& I_store_I_from_in_1_14_delay, int root, int d1, int d0) {
	hw_uint<160> result;
	hw_uint<32>  I_out_0_jacobi2d_compute0_3_res = I_out_0_jacobi2d_compute0_3_select(I_store_I_from_in_0_0_delay, I_store_I_from_in_1_14_delay, root, d1, d0);
	set_at<0, 160>(result, I_out_0_jacobi2d_compute0_3_res);
	hw_uint<32>  I_out_0_jacobi2d_compute0_4_res = I_out_0_jacobi2d_compute0_4_select(I_store_I_from_in_0_0_delay, I_store_I_from_in_1_14_delay, root, d1, d0);
	set_at<32, 160>(result, I_out_0_jacobi2d_compute0_4_res);
	hw_uint<32>  I_out_0_jacobi2d_compute0_5_res = I_out_0_jacobi2d_compute0_5_select(I_store_I_from_in_0_0_delay, I_store_I_from_in_1_14_delay, root, d1, d0);
	set_at<64, 160>(result, I_out_0_jacobi2d_compute0_5_res);
	hw_uint<32>  I_out_0_jacobi2d_compute0_6_res = I_out_0_jacobi2d_compute0_6_select(I_store_I_from_in_0_0_delay, I_store_I_from_in_1_14_delay, root, d1, d0);
	set_at<96, 160>(result, I_out_0_jacobi2d_compute0_6_res);
	hw_uint<32>  I_out_0_jacobi2d_compute0_7_res = I_out_0_jacobi2d_compute0_7_select(I_store_I_from_in_0_0_delay, I_store_I_from_in_1_14_delay, root, d1, d0);
	set_at<128, 160>(result, I_out_0_jacobi2d_compute0_7_res);
	return result;
}

// out_1_jacobi2d_compute1_read
//	I_out_1_jacobi2d_compute1_9
//	I_out_1_jacobi2d_compute1_10
//	I_out_1_jacobi2d_compute1_11
//	I_out_1_jacobi2d_compute1_12
//	I_out_1_jacobi2d_compute1_13
inline hw_uint<160> I_out_1_jacobi2d_compute1_read_bundle_read(I_store_I_from_in_0_0_cache& I_store_I_from_in_0_0_delay, I_store_I_from_in_1_14_cache& I_store_I_from_in_1_14_delay, int root, int d1, int d0) {
	hw_uint<160> result;
	hw_uint<32>  I_out_1_jacobi2d_compute1_9_res = I_out_1_jacobi2d_compute1_9_select(I_store_I_from_in_0_0_delay, I_store_I_from_in_1_14_delay, root, d1, d0);
	set_at<0, 160>(result, I_out_1_jacobi2d_compute1_9_res);
	hw_uint<32>  I_out_1_jacobi2d_compute1_10_res = I_out_1_jacobi2d_compute1_10_select(I_store_I_from_in_0_0_delay, I_store_I_from_in_1_14_delay, root, d1, d0);
	set_at<32, 160>(result, I_out_1_jacobi2d_compute1_10_res);
	hw_uint<32>  I_out_1_jacobi2d_compute1_11_res = I_out_1_jacobi2d_compute1_11_select(I_store_I_from_in_0_0_delay, I_store_I_from_in_1_14_delay, root, d1, d0);
	set_at<64, 160>(result, I_out_1_jacobi2d_compute1_11_res);
	hw_uint<32>  I_out_1_jacobi2d_compute1_12_res = I_out_1_jacobi2d_compute1_12_select(I_store_I_from_in_0_0_delay, I_store_I_from_in_1_14_delay, root, d1, d0);
	set_at<96, 160>(result, I_out_1_jacobi2d_compute1_12_res);
	hw_uint<32>  I_out_1_jacobi2d_compute1_13_res = I_out_1_jacobi2d_compute1_13_select(I_store_I_from_in_0_0_delay, I_store_I_from_in_1_14_delay, root, d1, d0);
	set_at<128, 160>(result, I_out_1_jacobi2d_compute1_13_res);
	return result;
}

// store_I_from_in_0_write
//	I_store_I_from_in_0_0
inline void I_store_I_from_in_0_write_bundle_write(hw_uint<32> & /* width = 32*/store_I_from_in_0_write, I_store_I_from_in_0_0_cache& I_store_I_from_in_0_0_delay) {
	I_store_I_from_in_0_0_write(store_I_from_in_0_write, I_store_I_from_in_0_0_delay);
}

// store_I_from_in_1_write
//	I_store_I_from_in_1_14
inline void I_store_I_from_in_1_write_bundle_write(hw_uint<32> & /* width = 32*/store_I_from_in_1_write, I_store_I_from_in_1_14_cache& I_store_I_from_in_1_14_delay) {
	I_store_I_from_in_1_14_write(store_I_from_in_1_write, I_store_I_from_in_1_14_delay);
}





// Operation logic
inline void store_I_from_in_0(HWStream<hw_uint<32>  >& in_0, I_store_I_from_in_0_0_cache& I_store_I_from_in_0_0, I_store_I_from_in_1_14_cache& I_store_I_from_in_1_14, int root, int id1, int id0) {
	// Consume: in_0
	auto in_0_id0_c__id1_value = in_0.read();
	// Produce: I
	// Buffer: I, Op: store_I_from_in_0
	// Possible ports...
		// I_store_I_from_in_0_0
	I_store_I_from_in_0_write_bundle_write(in_0_id0_c__id1_value, I_store_I_from_in_0_0 /* output src_delay */);
}

inline void out_0_jacobi2d_compute0(I_store_I_from_in_0_0_cache& I_store_I_from_in_0_0, I_store_I_from_in_1_14_cache& I_store_I_from_in_1_14, HWStream<hw_uint<32>  >& out_0, int root, int d1, int d0) {
	// Consume: I
	auto I_2_m_d0__m__1__p___m_1_c__d1__p__0_value = I_out_0_jacobi2d_compute0_read_bundle_read(I_store_I_from_in_0_0, I_store_I_from_in_1_14/* source_delay */, root, d1, d0);
	// Apply function: jacobi2d_compute
	// Arg: I_2_m_d0__m__1__p__0_c__d1__p__1_value
	// Arg buf: I
	// Arg: I_2_m_d0__m__1__p__1_c__d1__p__0_value
	// Arg buf: I
	// Arg: I_2_m_d0__m__1__p__0_c__d1__p__0_value
	// Arg buf: I
	// Arg: I_2_m_d0__m__1__p__0_c__d1__p___m_1_value
	// Arg buf: I
	// Arg: I_2_m_d0__m__1__p___m_1_c__d1__p__0_value
	// Arg buf: I
	 /* comma list args */ auto compute_result = jacobi2d_compute(I_2_m_d0__m__1__p___m_1_c__d1__p__0_value);
	// Produce: out_0
	out_0.write(compute_result);
}

inline void out_1_jacobi2d_compute1(I_store_I_from_in_0_0_cache& I_store_I_from_in_0_0, I_store_I_from_in_1_14_cache& I_store_I_from_in_1_14, HWStream<hw_uint<32>  >& out_1, int root, int d1, int d0) {
	// Consume: I
	auto I_2_m__lp_d0_rp___p__1__m__1__p___m_1_c__d1__p__0_value = I_out_1_jacobi2d_compute1_read_bundle_read(I_store_I_from_in_0_0, I_store_I_from_in_1_14/* source_delay */, root, d1, d0);
	// Apply function: jacobi2d_compute
	// Arg: I_2_m__lp_d0_rp___p__1__m__1__p__0_c__d1__p__1_value
	// Arg buf: I
	// Arg: I_2_m__lp_d0_rp___p__1__m__1__p__1_c__d1__p__0_value
	// Arg buf: I
	// Arg: I_2_m__lp_d0_rp___p__1__m__1__p__0_c__d1__p__0_value
	// Arg buf: I
	// Arg: I_2_m__lp_d0_rp___p__1__m__1__p__0_c__d1__p___m_1_value
	// Arg buf: I
	// Arg: I_2_m__lp_d0_rp___p__1__m__1__p___m_1_c__d1__p__0_value
	// Arg buf: I
	 /* comma list args */ auto compute_result = jacobi2d_compute(I_2_m__lp_d0_rp___p__1__m__1__p___m_1_c__d1__p__0_value);
	// Produce: out_1
	out_1.write(compute_result);
}

inline void store_I_from_in_1(HWStream<hw_uint<32>  >& in_1, I_store_I_from_in_0_0_cache& I_store_I_from_in_0_0, I_store_I_from_in_1_14_cache& I_store_I_from_in_1_14, int root, int id1, int id0) {
	// Consume: in_1
	auto in_1_id0_c__id1_value = in_1.read();
	// Produce: I
	// Buffer: I, Op: store_I_from_in_1
	// Possible ports...
		// I_store_I_from_in_0_0
		// I_store_I_from_in_1_14
	I_store_I_from_in_1_write_bundle_write(in_1_id0_c__id1_value, I_store_I_from_in_1_14 /* output src_delay */);
}

// Driver function
void jacobi2d_2(HWStream<hw_uint<32>  >& in_0, HWStream<hw_uint<32>  >& in_1, HWStream<hw_uint<32> >& out_0, HWStream<hw_uint<32> >& out_1) {
	I_store_I_from_in_0_0_cache I_store_I_from_in_0_0;
	I_store_I_from_in_1_14_cache I_store_I_from_in_1_14;
	for (int c0 = 0; c0 <= 31; c0 += 1)
	  for (int c1 = 0; c1 <= 15; c1 += 1) {
	    store_I_from_in_1(in_1, I_store_I_from_in_0_0, I_store_I_from_in_1_14, 0, c0, c1);
	    store_I_from_in_0(in_0, I_store_I_from_in_0_0, I_store_I_from_in_1_14, 0, c0, c1);
	    if (c0 >= 2 && c1 >= 1 && c1 <= 14) {
	      out_1_jacobi2d_compute1(I_store_I_from_in_0_0, I_store_I_from_in_1_14, out_1, 0, c0 - 1, c1);
	      out_0_jacobi2d_compute0(I_store_I_from_in_0_0, I_store_I_from_in_1_14, out_0, 0, c0 - 1, c1);
	    }
	  }
	
}
