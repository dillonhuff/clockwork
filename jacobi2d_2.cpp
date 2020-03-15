#include "conv_3x3.h"

#include "hw_classes.h"

struct I_store_I_from_in_0_8_cache {
	// Capacity: 33
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 16) capacity = 15
	fifo<hw_uint<32> , 15> f1;
	// Parition [16, 17) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [17, 18) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [18, 19) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [19, 20) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [20, 21) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [21, 22) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [22, 23) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [23, 24) capacity = 1
	fifo<hw_uint<32> , 1> f16;
	// Parition [24, 25) capacity = 1
	fifo<hw_uint<32> , 1> f18;
	// Parition [25, 26) capacity = 1
	fifo<hw_uint<32> , 1> f20;
	// Parition [26, 27) capacity = 1
	fifo<hw_uint<32> , 1> f22;
	// Parition [27, 28) capacity = 1
	fifo<hw_uint<32> , 1> f24;
	// Parition [28, 29) capacity = 1
	fifo<hw_uint<32> , 1> f26;
	// Parition [29, 30) capacity = 1
	fifo<hw_uint<32> , 1> f28;
	// Parition [30, 31) capacity = 1
	fifo<hw_uint<32> , 1> f30;
	// Parition [31, 32) capacity = 1
	fifo<hw_uint<32> , 1> f32;
	// Parition [32, 32] capacity = 1
	fifo<hw_uint<32> , 1> f34;


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

	inline hw_uint<32>  peek_18() {
		return f6.back();
	}

	inline hw_uint<32>  peek_19() {
		return f8.back();
	}

	inline hw_uint<32>  peek_20() {
		return f10.back();
	}

	inline hw_uint<32>  peek_21() {
		return f12.back();
	}

	inline hw_uint<32>  peek_22() {
		return f14.back();
	}

	inline hw_uint<32>  peek_23() {
		return f16.back();
	}

	inline hw_uint<32>  peek_24() {
		return f18.back();
	}

	inline hw_uint<32>  peek_25() {
		return f20.back();
	}

	inline hw_uint<32>  peek_26() {
		return f22.back();
	}

	inline hw_uint<32>  peek_27() {
		return f24.back();
	}

	inline hw_uint<32>  peek_28() {
		return f26.back();
	}

	inline hw_uint<32>  peek_29() {
		return f28.back();
	}

	inline hw_uint<32>  peek_30() {
		return f30.back();
	}

	inline hw_uint<32>  peek_31() {
		return f32.back();
	}

	inline hw_uint<32>  peek_32() {
		return f34.back();
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
		if (offset == 18) {
			return f6.back();
		}
		if (offset == 19) {
			return f8.back();
		}
		if (offset == 20) {
			return f10.back();
		}
		if (offset == 21) {
			return f12.back();
		}
		if (offset == 22) {
			return f14.back();
		}
		if (offset == 23) {
			return f16.back();
		}
		if (offset == 24) {
			return f18.back();
		}
		if (offset == 25) {
			return f20.back();
		}
		if (offset == 26) {
			return f22.back();
		}
		if (offset == 27) {
			return f24.back();
		}
		if (offset == 28) {
			return f26.back();
		}
		if (offset == 29) {
			return f28.back();
		}
		if (offset == 30) {
			return f30.back();
		}
		if (offset == 31) {
			return f32.back();
		}
		if (offset == 32) {
			return f34.back();
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
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_store_I_from_in_1_6_cache {
	// Capacity: 33
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
	// Parition [17, 32) capacity = 15
	fifo<hw_uint<32> , 15> f33;
	// Parition [32, 32] capacity = 1
	fifo<hw_uint<32> , 1> f34;


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

	inline hw_uint<32>  peek_31() {
		return f33.back();
	}

	inline hw_uint<32>  peek_32() {
		return f34.back();
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
		if (offset == 31) {
			return f33.back();
		}
		if (offset == 32) {
			return f34.back();
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
		f34.push(f33.back());
		f33.push(f32.back());
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

struct I_cache {
  I_store_I_from_in_0_8_cache I_store_I_from_in_0_8;
  I_store_I_from_in_1_6_cache I_store_I_from_in_1_6;
};



inline void I_store_I_from_in_0_8_write(hw_uint<32> & I_store_I_from_in_0_8, I_cache& I, int root, int id1, int id0) {
	I.I_store_I_from_in_0_8.push(I_store_I_from_in_0_8);
}

inline void I_store_I_from_in_1_6_write(hw_uint<32> & I_store_I_from_in_1_6, I_cache& I, int root, int id1, int id0) {
	I.I_store_I_from_in_1_6.push(I_store_I_from_in_1_6);
}

inline hw_uint<32>  I_out_0_jacobi2d_compute0_11_select(I_cache& I, int root, int d1, int d0) {
  // qpd = {  }
	// lexmax events: { out_0_jacobi2d_compute0[root = 0, d1, d0] -> store_I_from_in_1[root' = 0, id1 = 1 + d1, id0 = -1 + d0] : 0 < d1 <= 30 and 0 < d0 <= 14 }
  // I_out_0_jacobi2d_compute0_11 read pattern: { out_0_jacobi2d_compute0[root = 0, d1, d0] -> I[-1 + 2d0, 1 + d1] : 0 < d1 <= 30 and 0 < d0 <= 14 }
  // I_store_I_from_in_0_8 stores range: { I[i0, i1] : (i0) mod 2 = 0 and 0 <= i0 <= 30 and 0 <= i1 <= 31 }
    // overlap with reads : {  }
  // I_store_I_from_in_1_6 stores range: { I[i0, i1] : (1 + i0) mod 2 = 0 and 0 < i0 <= 31 and 0 <= i1 <= 31 }
    // overlap with reads : { I[i0, i1] : (1 + i0) mod 2 = 0 and 0 < i0 <= 27 and 2 <= i1 <= 31 }
	auto value_I_store_I_from_in_1_6 = I.I_store_I_from_in_1_6.peek_0();
	return value_I_store_I_from_in_1_6;
}

inline hw_uint<32>  I_out_0_jacobi2d_compute0_12_select(I_cache& I, int root, int d1, int d0) {
  // qpd = { out_0_jacobi2d_compute0[root, d1, d0] -> (31 - d0) : root = 0 and 0 < d1 <= 30 and 0 < d0 <= 14 }
	// lexmax events: { out_0_jacobi2d_compute0[root = 0, d1, d0] -> store_I_from_in_0[root' = 0, id1 = d1, id0 = d0] : 0 < d1 <= 30 and 0 < d0 <= 14 }
  // I_out_0_jacobi2d_compute0_12 read pattern: { out_0_jacobi2d_compute0[root = 0, d1, d0] -> I[2d0, d1] : 0 < d1 <= 30 and 0 < d0 <= 14 }
  // I_store_I_from_in_0_8 stores range: { I[i0, i1] : (i0) mod 2 = 0 and 0 <= i0 <= 30 and 0 <= i1 <= 31 }
    // overlap with reads : { I[i0, i1] : (i0) mod 2 = 0 and 2 <= i0 <= 28 and 0 < i1 <= 30 }
  // I_store_I_from_in_1_6 stores range: { I[i0, i1] : (1 + i0) mod 2 = 0 and 0 < i0 <= 31 and 0 <= i1 <= 31 }
    // overlap with reads : {  }
	auto value_I_store_I_from_in_0_8 = I.I_store_I_from_in_0_8.peek(/* is one piece but not a number */(31 - d0));
	return value_I_store_I_from_in_0_8;
}

inline hw_uint<32>  I_out_0_jacobi2d_compute0_13_select(I_cache& I, int root, int d1, int d0) {
  // qpd = {  }
	// lexmax events: { out_0_jacobi2d_compute0[root = 0, d1, d0] -> store_I_from_in_1[root' = 0, id1 = d1, id0 = -1 + d0] : 0 < d1 <= 30 and 0 < d0 <= 14 }
  // I_out_0_jacobi2d_compute0_13 read pattern: { out_0_jacobi2d_compute0[root = 0, d1, d0] -> I[-1 + 2d0, d1] : 0 < d1 <= 30 and 0 < d0 <= 14 }
  // I_store_I_from_in_0_8 stores range: { I[i0, i1] : (i0) mod 2 = 0 and 0 <= i0 <= 30 and 0 <= i1 <= 31 }
    // overlap with reads : {  }
  // I_store_I_from_in_1_6 stores range: { I[i0, i1] : (1 + i0) mod 2 = 0 and 0 < i0 <= 31 and 0 <= i1 <= 31 }
    // overlap with reads : { I[i0, i1] : (1 + i0) mod 2 = 0 and 0 < i0 <= 27 and 0 < i1 <= 30 }
	auto value_I_store_I_from_in_1_6 = I.I_store_I_from_in_1_6.peek_16();
	return value_I_store_I_from_in_1_6;
}

inline hw_uint<32>  I_out_0_jacobi2d_compute0_14_select(I_cache& I, int root, int d1, int d0) {
  // qpd = {  }
	// lexmax events: { out_0_jacobi2d_compute0[root = 0, d1, d0] -> store_I_from_in_1[root' = 0, id1 = -1 + d1, id0 = -1 + d0] : 0 < d1 <= 30 and 0 < d0 <= 14 }
  // I_out_0_jacobi2d_compute0_14 read pattern: { out_0_jacobi2d_compute0[root = 0, d1, d0] -> I[-1 + 2d0, -1 + d1] : 0 < d1 <= 30 and 0 < d0 <= 14 }
  // I_store_I_from_in_0_8 stores range: { I[i0, i1] : (i0) mod 2 = 0 and 0 <= i0 <= 30 and 0 <= i1 <= 31 }
    // overlap with reads : {  }
  // I_store_I_from_in_1_6 stores range: { I[i0, i1] : (1 + i0) mod 2 = 0 and 0 < i0 <= 31 and 0 <= i1 <= 31 }
    // overlap with reads : { I[i0, i1] : (1 + i0) mod 2 = 0 and 0 < i0 <= 27 and 0 <= i1 <= 29 }
	auto value_I_store_I_from_in_1_6 = I.I_store_I_from_in_1_6.peek_32();
	return value_I_store_I_from_in_1_6;
}

inline hw_uint<32>  I_out_0_jacobi2d_compute0_15_select(I_cache& I, int root, int d1, int d0) {
  // qpd = { out_0_jacobi2d_compute0[root, d1, d0] -> (32 - d0) : root = 0 and 0 < d1 <= 30 and 0 < d0 <= 14 }
	// lexmax events: { out_0_jacobi2d_compute0[root = 0, d1, d0] -> store_I_from_in_0[root' = 0, id1 = d1, id0 = -1 + d0] : 0 < d1 <= 30 and 0 < d0 <= 14 }
  // I_out_0_jacobi2d_compute0_15 read pattern: { out_0_jacobi2d_compute0[root = 0, d1, d0] -> I[-2 + 2d0, d1] : 0 < d1 <= 30 and 0 < d0 <= 14 }
  // I_store_I_from_in_0_8 stores range: { I[i0, i1] : (i0) mod 2 = 0 and 0 <= i0 <= 30 and 0 <= i1 <= 31 }
    // overlap with reads : { I[i0, i1] : (i0) mod 2 = 0 and 0 <= i0 <= 26 and 0 < i1 <= 30 }
  // I_store_I_from_in_1_6 stores range: { I[i0, i1] : (1 + i0) mod 2 = 0 and 0 < i0 <= 31 and 0 <= i1 <= 31 }
    // overlap with reads : {  }
	auto value_I_store_I_from_in_0_8 = I.I_store_I_from_in_0_8.peek(/* is one piece but not a number */(32 - d0));
	return value_I_store_I_from_in_0_8;
}

inline hw_uint<32>  I_out_1_jacobi2d_compute1_1_select(I_cache& I, int root, int d1, int d0) {
  // qpd = {  }
	// lexmax events: { out_1_jacobi2d_compute1[root = 0, d1, d0] -> store_I_from_in_0[root' = 0, id1 = 1 + d1, id0 = d0] : 0 < d1 <= 30 and 0 < d0 <= 14 }
  // I_out_1_jacobi2d_compute1_1 read pattern: { out_1_jacobi2d_compute1[root = 0, d1, d0] -> I[2d0, 1 + d1] : 0 < d1 <= 30 and 0 < d0 <= 14 }
  // I_store_I_from_in_0_8 stores range: { I[i0, i1] : (i0) mod 2 = 0 and 0 <= i0 <= 30 and 0 <= i1 <= 31 }
    // overlap with reads : { I[i0, i1] : (i0) mod 2 = 0 and 2 <= i0 <= 28 and 2 <= i1 <= 31 }
  // I_store_I_from_in_1_6 stores range: { I[i0, i1] : (1 + i0) mod 2 = 0 and 0 < i0 <= 31 and 0 <= i1 <= 31 }
    // overlap with reads : {  }
	auto value_I_store_I_from_in_0_8 = I.I_store_I_from_in_0_8.peek_0();
	return value_I_store_I_from_in_0_8;
}

inline hw_uint<32>  I_out_1_jacobi2d_compute1_2_select(I_cache& I, int root, int d1, int d0) {
  // qpd = {  }
	// lexmax events: { out_1_jacobi2d_compute1[root = 0, d1, d0] -> store_I_from_in_1[root' = 0, id1 = d1, id0 = d0] : 0 < d1 <= 30 and 0 < d0 <= 14 }
  // I_out_1_jacobi2d_compute1_2 read pattern: { out_1_jacobi2d_compute1[root = 0, d1, d0] -> I[1 + 2d0, d1] : 0 < d1 <= 30 and 0 < d0 <= 14 }
  // I_store_I_from_in_0_8 stores range: { I[i0, i1] : (i0) mod 2 = 0 and 0 <= i0 <= 30 and 0 <= i1 <= 31 }
    // overlap with reads : {  }
  // I_store_I_from_in_1_6 stores range: { I[i0, i1] : (1 + i0) mod 2 = 0 and 0 < i0 <= 31 and 0 <= i1 <= 31 }
    // overlap with reads : { I[i0, i1] : (1 + i0) mod 2 = 0 and 3 <= i0 <= 29 and 0 < i1 <= 30 }
	auto value_I_store_I_from_in_1_6 = I.I_store_I_from_in_1_6.peek(/* is one piece but not a number */(15 - d0));
	return value_I_store_I_from_in_1_6;
}

inline hw_uint<32>  I_out_1_jacobi2d_compute1_3_select(I_cache& I, int root, int d1, int d0) {
  // qpd = { out_1_jacobi2d_compute1[root, d1, d0] -> 16 : root = 0 and 0 < d1 <= 30 and 0 < d0 <= 14 }
	// lexmax events: { out_1_jacobi2d_compute1[root = 0, d1, d0] -> store_I_from_in_0[root' = 0, id1 = d1, id0 = d0] : 0 < d1 <= 30 and 0 < d0 <= 14 }
  // I_out_1_jacobi2d_compute1_3 read pattern: { out_1_jacobi2d_compute1[root = 0, d1, d0] -> I[2d0, d1] : 0 < d1 <= 30 and 0 < d0 <= 14 }
  // I_store_I_from_in_0_8 stores range: { I[i0, i1] : (i0) mod 2 = 0 and 0 <= i0 <= 30 and 0 <= i1 <= 31 }
    // overlap with reads : { I[i0, i1] : (i0) mod 2 = 0 and 2 <= i0 <= 28 and 0 < i1 <= 30 }
  // I_store_I_from_in_1_6 stores range: { I[i0, i1] : (1 + i0) mod 2 = 0 and 0 < i0 <= 31 and 0 <= i1 <= 31 }
    // overlap with reads : {  }
	auto value_I_store_I_from_in_0_8 = I.I_store_I_from_in_0_8.peek_16();
	return value_I_store_I_from_in_0_8;
}

inline hw_uint<32>  I_out_1_jacobi2d_compute1_4_select(I_cache& I, int root, int d1, int d0) {
  // qpd = { out_1_jacobi2d_compute1[root, d1, d0] -> 32 : root = 0 and 0 < d1 <= 30 and 0 < d0 <= 14 }
	// lexmax events: { out_1_jacobi2d_compute1[root = 0, d1, d0] -> store_I_from_in_0[root' = 0, id1 = -1 + d1, id0 = d0] : 0 < d1 <= 30 and 0 < d0 <= 14 }
  // I_out_1_jacobi2d_compute1_4 read pattern: { out_1_jacobi2d_compute1[root = 0, d1, d0] -> I[2d0, -1 + d1] : 0 < d1 <= 30 and 0 < d0 <= 14 }
  // I_store_I_from_in_0_8 stores range: { I[i0, i1] : (i0) mod 2 = 0 and 0 <= i0 <= 30 and 0 <= i1 <= 31 }
    // overlap with reads : { I[i0, i1] : (i0) mod 2 = 0 and 2 <= i0 <= 28 and 0 <= i1 <= 29 }
  // I_store_I_from_in_1_6 stores range: { I[i0, i1] : (1 + i0) mod 2 = 0 and 0 < i0 <= 31 and 0 <= i1 <= 31 }
    // overlap with reads : {  }
	auto value_I_store_I_from_in_0_8 = I.I_store_I_from_in_0_8.peek_32();
	return value_I_store_I_from_in_0_8;
}

inline hw_uint<32>  I_out_1_jacobi2d_compute1_5_select(I_cache& I, int root, int d1, int d0) {
  // qpd = {  }
	// lexmax events: { out_1_jacobi2d_compute1[root = 0, d1, d0] -> store_I_from_in_1[root' = 0, id1 = d1, id0 = -1 + d0] : 0 < d1 <= 30 and 0 < d0 <= 14 }
  // I_out_1_jacobi2d_compute1_5 read pattern: { out_1_jacobi2d_compute1[root = 0, d1, d0] -> I[-1 + 2d0, d1] : 0 < d1 <= 30 and 0 < d0 <= 14 }
  // I_store_I_from_in_0_8 stores range: { I[i0, i1] : (i0) mod 2 = 0 and 0 <= i0 <= 30 and 0 <= i1 <= 31 }
    // overlap with reads : {  }
  // I_store_I_from_in_1_6 stores range: { I[i0, i1] : (1 + i0) mod 2 = 0 and 0 < i0 <= 31 and 0 <= i1 <= 31 }
    // overlap with reads : { I[i0, i1] : (1 + i0) mod 2 = 0 and 0 < i0 <= 27 and 0 < i1 <= 30 }
	auto value_I_store_I_from_in_1_6 = I.I_store_I_from_in_1_6.peek(/* is one piece but not a number */(16 - d0));
	return value_I_store_I_from_in_1_6;
}

// # of bundles = 4
// out_0_jacobi2d_compute0_read
//	I_out_0_jacobi2d_compute0_11
//	I_out_0_jacobi2d_compute0_12
//	I_out_0_jacobi2d_compute0_13
//	I_out_0_jacobi2d_compute0_14
//	I_out_0_jacobi2d_compute0_15
inline hw_uint<160> I_out_0_jacobi2d_compute0_read_bundle_read(I_cache& I, int root, int d1, int d0) {
	hw_uint<160> result;
	hw_uint<32>  I_out_0_jacobi2d_compute0_11_res = I_out_0_jacobi2d_compute0_11_select(I, root, d1, d0);
	set_at<0, 160>(result, I_out_0_jacobi2d_compute0_11_res);
	hw_uint<32>  I_out_0_jacobi2d_compute0_12_res = I_out_0_jacobi2d_compute0_12_select(I, root, d1, d0);
	set_at<32, 160>(result, I_out_0_jacobi2d_compute0_12_res);
	hw_uint<32>  I_out_0_jacobi2d_compute0_13_res = I_out_0_jacobi2d_compute0_13_select(I, root, d1, d0);
	set_at<64, 160>(result, I_out_0_jacobi2d_compute0_13_res);
	hw_uint<32>  I_out_0_jacobi2d_compute0_14_res = I_out_0_jacobi2d_compute0_14_select(I, root, d1, d0);
	set_at<96, 160>(result, I_out_0_jacobi2d_compute0_14_res);
	hw_uint<32>  I_out_0_jacobi2d_compute0_15_res = I_out_0_jacobi2d_compute0_15_select(I, root, d1, d0);
	set_at<128, 160>(result, I_out_0_jacobi2d_compute0_15_res);
	return result;
}

// out_1_jacobi2d_compute1_read
//	I_out_1_jacobi2d_compute1_1
//	I_out_1_jacobi2d_compute1_2
//	I_out_1_jacobi2d_compute1_3
//	I_out_1_jacobi2d_compute1_4
//	I_out_1_jacobi2d_compute1_5
inline hw_uint<160> I_out_1_jacobi2d_compute1_read_bundle_read(I_cache& I, int root, int d1, int d0) {
	hw_uint<160> result;
	hw_uint<32>  I_out_1_jacobi2d_compute1_1_res = I_out_1_jacobi2d_compute1_1_select(I, root, d1, d0);
	set_at<0, 160>(result, I_out_1_jacobi2d_compute1_1_res);
	hw_uint<32>  I_out_1_jacobi2d_compute1_2_res = I_out_1_jacobi2d_compute1_2_select(I, root, d1, d0);
	set_at<32, 160>(result, I_out_1_jacobi2d_compute1_2_res);
	hw_uint<32>  I_out_1_jacobi2d_compute1_3_res = I_out_1_jacobi2d_compute1_3_select(I, root, d1, d0);
	set_at<64, 160>(result, I_out_1_jacobi2d_compute1_3_res);
	hw_uint<32>  I_out_1_jacobi2d_compute1_4_res = I_out_1_jacobi2d_compute1_4_select(I, root, d1, d0);
	set_at<96, 160>(result, I_out_1_jacobi2d_compute1_4_res);
	hw_uint<32>  I_out_1_jacobi2d_compute1_5_res = I_out_1_jacobi2d_compute1_5_select(I, root, d1, d0);
	set_at<128, 160>(result, I_out_1_jacobi2d_compute1_5_res);
	return result;
}

// store_I_from_in_0_write
//	I_store_I_from_in_0_8
inline void I_store_I_from_in_0_write_bundle_write(hw_uint<32>& store_I_from_in_0_write, I_cache& I, int root, int id1, int id0) {
	hw_uint<32>  I_store_I_from_in_0_8_res = store_I_from_in_0_write.extract<0, 31>();
	I_store_I_from_in_0_8_write(I_store_I_from_in_0_8_res, I, root, id1, id0);
}

// store_I_from_in_1_write
//	I_store_I_from_in_1_6
inline void I_store_I_from_in_1_write_bundle_write(hw_uint<32>& store_I_from_in_1_write, I_cache& I, int root, int id1, int id0) {
	hw_uint<32>  I_store_I_from_in_1_6_res = store_I_from_in_1_write.extract<0, 31>();
	I_store_I_from_in_1_6_write(I_store_I_from_in_1_6_res, I, root, id1, id0);
}





// Operation logic
inline void out_1_jacobi2d_compute1(I_cache& I, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */out_1, int root, int d1, int d0) {
	// Consume: I
	auto I_2_m__lp_d0_rp___p__1__m__1__p__0_c__d1__p__1_value = I_out_1_jacobi2d_compute1_read_bundle_read(I/* source_delay */, root, d1, d0);
	auto compute_result = jacobi2d_compute(I_2_m__lp_d0_rp___p__1__m__1__p__0_c__d1__p__1_value);
	// Produce: out_1
	out_1.write(compute_result);
}

inline void store_I_from_in_1(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in_1, I_cache& I, int root, int id1, int id0) {
	// Consume: in_1
	auto in_1_id0_c__id1_value = in_1.read();
	// Produce: I
	I_store_I_from_in_1_write_bundle_write(in_1_id0_c__id1_value, I, root, id1, id0);
}

inline void store_I_from_in_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in_0, I_cache& I, int root, int id1, int id0) {
	// Consume: in_0
	auto in_0_id0_c__id1_value = in_0.read();
	// Produce: I
	I_store_I_from_in_0_write_bundle_write(in_0_id0_c__id1_value, I, root, id1, id0);
}

inline void out_0_jacobi2d_compute0(I_cache& I, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */out_0, int root, int d1, int d0) {
	// Consume: I
	auto I_2_m_d0__m__1__p__0_c__d1__p__1_value = I_out_0_jacobi2d_compute0_read_bundle_read(I/* source_delay */, root, d1, d0);
	auto compute_result = jacobi2d_compute(I_2_m_d0__m__1__p__0_c__d1__p__1_value);
	// Produce: out_0
	out_0.write(compute_result);
}

// Driver function
void jacobi2d_2(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in_0, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in_1, HWStream<hw_uint<32> >& /* get_args num ports = 1 */out_0, HWStream<hw_uint<32> >& /* get_args num ports = 1 */out_1) {
  I_cache I;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif // __VIVADO_SYNTH__

/* CUSTOM CODE STRING

*/
	for (int c0 = 0; c0 <= 31; c0 += 1) {
	  for (int c2 = 0; c2 <= 15; c2 += 1) {
	    store_I_from_in_0(in_0, I, 0, c0, c2);
	    if (c0 >= 2 && c2 >= 1 && c2 <= 14)
	      out_1_jacobi2d_compute1(I, out_1, 0, c0 - 1, c2);
	  }
	  for (int c2 = 1; c2 <= 16; c2 += 1) {
	    store_I_from_in_1(in_1, I, 0, c0, c2 - 1);
	    if (c0 >= 2 && c2 <= 14)
	      out_0_jacobi2d_compute0(I, out_0, 0, c0 - 1, c2);
	  }
	}
	
}
