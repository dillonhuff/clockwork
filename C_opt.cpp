#include "C_opt_compute_units.h"

#include "hw_classes.h"

struct A_A_update_0_write0_to_C_rd0_cache {
	// Capacity: 5
	// # of read delays: 6
	// read delays: 0, 0, 1, 2, 3, 4
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 4) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [4, 4] capacity = 1
	fifo<hw_uint<32> , 1> f8;


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
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in A_A_update_0_write0_to_C_rd0: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f8.push(f6.back());
		f6.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct A_cache {
  A_A_update_0_write0_to_C_rd0_cache A_A_update_0_write0_to_C_rd0;
};



inline void A_A_update_0_write0_write(hw_uint<32> & A_A_update_0_write0, A_cache& A, int d0, int d1) {
  A.A_A_update_0_write0_to_C_rd0.push(A_A_update_0_write0);
}

inline hw_uint<32>  C_rd0_select(A_cache& A, int d0, int d1) {
	// lexmax events: { C_update_0[d0, d1] -> A_update_0[d0', d1'] : (d1) mod 5 = 0 and 0 <= d0 <= 9 and 0 <= d1 <= 5 and -2 + d0 <= 2d0' <= d0 and -4 + d1 <= 5d1' <= d1 and (((d0) mod 2 = 0 and d0 <= 8 and 2d0' >= -1 + d0) or ((1 + d0) mod 2 = 0 and d0 > 0 and 2d0' < d0)); C_update_0[d0, d1] -> A_update_0[d0' = 4, d1' = 0] : 8 <= d0 <= 9 and 0 < d1 <= 4; C_update_0[d0, d1] -> A_update_0[d0', d1' = 1] : 0 <= d0 <= 7 and 6 <= d1 <= 9 and 0 <= d0' <= 4 and -1 + d0 <= 2d0' <= d0; C_update_0[d0, d1] -> A_update_0[d0', d1' = 0] : 0 <= d0 <= 7 and 0 < d1 <= 4 and 0 <= d0' <= 4 and -1 + d0 <= 2d0' <= d0; C_update_0[d0, d1] -> A_update_0[d0' = 4, d1' = 1] : 8 <= d0 <= 9 and 6 <= d1 <= 9 and 5*floor((d1)/5) < d1 }
  // C_rd0 read pattern: { C_update_0[d0, d1] -> A[o0, o1] : 0 <= d0 <= 9 and 0 <= d1 <= 9 and -1 + d0 <= 2o0 <= d0 and -4 + d1 <= 5o1 <= d1 }
	auto value_A_A_update_0_write0 = A.A_A_update_0_write0_to_C_rd0.peek(/* Needs general delay string */ (d0 >= 0 && 7 - d0 >= 0 && -1 + d1 >= 0 && 4 - d1 >= 0) ? ((4 - floord(d0, 2))) : (d0 >= 0 && 7 - d0 >= 0 && -6 + d1 >= 0 && 9 - d1 >= 0) ? ((4 - floord(d0, 2))) : 0);
	return value_A_A_update_0_write0;
}

// # of bundles = 2
// A_update_0_write
//	A_A_update_0_write0
inline void A_A_update_0_write_bundle_write(hw_uint<32>& A_update_0_write, A_cache& A, int d0, int d1) {
	hw_uint<32>  A_A_update_0_write0_res = A_update_0_write.extract<0, 31>();
	A_A_update_0_write0_write(A_A_update_0_write0_res, A, d0, d1);
}

// C_update_0_read
//	C_rd0
inline hw_uint<32> A_C_update_0_read_bundle_read(A_cache& A, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  C_rd0_res = C_rd0_select(A, d0, d1);
	set_at<0, 32>(result, C_rd0_res);
	return result;
}



#include "hw_classes.h"

struct B_B_update_0_write0_merged_banks_1_cache {
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

struct B_cache {
  B_B_update_0_write0_merged_banks_1_cache B_B_update_0_write0_merged_banks_1;
};



inline void B_B_update_0_write0_write(hw_uint<32> & B_B_update_0_write0, B_cache& B, int d0, int d1) {
  B.B_B_update_0_write0_merged_banks_1.push(B_B_update_0_write0);
}

inline hw_uint<32>  C_rd0_select(B_cache& B, int d0, int d1) {
	// lexmax events: { C_update_0[d0, d1] -> B_update_0[d0' = 4d0, d1' = 3d1] : 0 <= d0 <= 9 and 0 <= d1 <= 9 }
  // C_rd0 read pattern: { C_update_0[d0, d1] -> B[4d0, 3d1] : 0 <= d0 <= 9 and 0 <= d1 <= 9 }
	auto value_B_B_update_0_write0 = B.B_B_update_0_write0_merged_banks_1.peek_0();
	return value_B_B_update_0_write0;
}

// # of bundles = 2
// B_update_0_write
//	B_B_update_0_write0
inline void B_B_update_0_write_bundle_write(hw_uint<32>& B_update_0_write, B_cache& B, int d0, int d1) {
	hw_uint<32>  B_B_update_0_write0_res = B_update_0_write.extract<0, 31>();
	B_B_update_0_write0_write(B_B_update_0_write0_res, B, d0, d1);
}

// C_update_0_read
//	C_rd0
inline hw_uint<32> B_C_update_0_read_bundle_read(B_cache& B, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  C_rd0_res = C_rd0_select(B, d0, d1);
	set_at<0, 32>(result, C_rd0_res);
	return result;
}





// Operation logic
inline void C_update_0(A_cache& A, B_cache& B, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */C, int d0, int d1) {
	// Consume: A
	auto A_0_c__0_value = A_C_update_0_read_bundle_read(A/* source_delay */, d0, d1);
	// Consume: B
	auto B_0_c__0_value = B_C_update_0_read_bundle_read(B/* source_delay */, d0, d1);
	auto compute_result = diff(A_0_c__0_value, B_0_c__0_value);
	// Produce: C
	C.write(compute_result);
}

inline void B_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */B_off, B_cache& B, int d0, int d1) {
	// Consume: B_off
	auto B_off_0_c__0_value = B_off.read();
	auto compute_result = id(B_off_0_c__0_value);
	// Produce: B
	B_B_update_0_write_bundle_write(compute_result, B, d0, d1);
}

inline void A_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */A_off, A_cache& A, int d0, int d1) {
	// Consume: A_off
	auto A_off_0_c__0_value = A_off.read();
	auto compute_result = id(A_off_0_c__0_value);
	// Produce: A
	A_A_update_0_write_bundle_write(compute_result, A, d0, d1);
}

// Driver function
void C_opt(HWStream<hw_uint<32> >& /* get_args num ports = 1 */A_off, HWStream<hw_uint<32> >& /* get_args num ports = 1 */B_off, HWStream<hw_uint<32> >& /* get_args num ports = 1 */C) {
  A_cache A;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=A inter false
#endif // __VIVADO_SYNTH__

  B_cache B;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=B inter false
#endif // __VIVADO_SYNTH__

/* CUSTOM CODE STRING

*/
	for (int c0 = 0; c0 <= 27; c0 += 1)
	  for (int c1 = 0; c1 <= 36; c1 += 1) {
	    B_update_0(B_off, B, c1, c0);
	    if (c0 % 15 == 0 && c1 % 8 == 0)
	      A_update_0(A_off, A, c1 / 8, c0 / 15);
	    if (c0 % 3 == 0 && c1 % 4 == 0)
	      C_update_0(A, B, C, c1 / 4, c0 / 3);
	  }
	
}
