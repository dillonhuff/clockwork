#include "C_opt_compute_units.h"

#include "hw_classes.h"

struct A_A_comp_write0_cache {
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

struct A_cache {
  A_A_comp_write0_cache A_A_comp_write0;
};



inline void A_A_comp_write0_write(hw_uint<32> & A_A_comp_write0, A_cache& A) {
	A.A_A_comp_write0.push(A_A_comp_write0);
}

inline hw_uint<32>  C_rd0_select(A_cache& A, int d0, int d1) {
  // qpd = {  }
	hw_uint<32>  value_A_A_comp_write0 = A.A_A_comp_write0.peek_0();
	return value_A_A_comp_write0;
}

// # of bundles = 2
// A_comp_write
//	A_A_comp_write0
inline void A_A_comp_write_bundle_write(hw_uint<32>& A_comp_write, A_cache& A) {
	hw_uint<32>  A_A_comp_write0_res = A_comp_write.extract<0, 31>();
	A_A_comp_write0_write(A_A_comp_write0_res, A);
}

// C_comp_read
//	C_rd0
inline hw_uint<32> A_C_comp_read_bundle_read(A_cache& A, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  C_rd0_res = C_rd0_select(A, d0, d1);
	set_at<0, 32>(result, C_rd0_res);
	return result;
}



#include "hw_classes.h"

struct B_B_comp_write0_cache {
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

struct B_cache {
  B_B_comp_write0_cache B_B_comp_write0;
};



inline void B_B_comp_write0_write(hw_uint<32> & B_B_comp_write0, B_cache& B) {
	B.B_B_comp_write0.push(B_B_comp_write0);
}

inline hw_uint<32>  C_rd0_select(B_cache& B, int d0, int d1) {
  // qpd = {  }
	hw_uint<32>  value_B_B_comp_write0 = B.B_B_comp_write0.peek_0();
	return value_B_B_comp_write0;
}

// # of bundles = 2
// B_comp_write
//	B_B_comp_write0
inline void B_B_comp_write_bundle_write(hw_uint<32>& B_comp_write, B_cache& B) {
	hw_uint<32>  B_B_comp_write0_res = B_comp_write.extract<0, 31>();
	B_B_comp_write0_write(B_B_comp_write0_res, B);
}

// C_comp_read
//	C_rd0
inline hw_uint<32> B_C_comp_read_bundle_read(B_cache& B, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  C_rd0_res = C_rd0_select(B, d0, d1);
	set_at<0, 32>(result, C_rd0_res);
	return result;
}





// Operation logic
inline void C_comp(A_cache& A, B_cache& B, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */C, int d0, int d1) {
	// Consume: A
	auto A_0_c__0_value = A_C_comp_read_bundle_read(A/* source_delay */, d0, d1);
	// Consume: B
	auto B_0_c__0_value = B_C_comp_read_bundle_read(B/* source_delay */, d0, d1);
	auto compute_result = diff(A_0_c__0_value, B_0_c__0_value);
	// Produce: C
	C.write(compute_result);
}

inline void B_comp(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */B_off, B_cache& B, int d0, int d1) {
	// Consume: B_off
	auto B_off_0_c__0_value = B_off.read();
	auto compute_result = id(B_off_0_c__0_value);
	// Produce: B
	B_B_comp_write_bundle_write(compute_result, B);
}

inline void A_comp(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */A_off, A_cache& A, int d0, int d1) {
	// Consume: A_off
	auto A_off_0_c__0_value = A_off.read();
	auto compute_result = id(A_off_0_c__0_value);
	// Produce: A
	A_A_comp_write_bundle_write(compute_result, A);
}

// Driver function
void C_opt(HWStream<hw_uint<32> >& /* get_args num ports = 1 */A_off, HWStream<hw_uint<32> >& /* get_args num ports = 1 */B_off, HWStream<hw_uint<32> >& /* get_args num ports = 1 */C) {
  A_cache A;
  B_cache B;
	for (int c0 = 0; c0 <= 27; c0 += 1)
	  for (int c1 = 0; c1 <= 36; c1 += 1) {
	    B_comp(B_off, B, c1, c0);
	    if (c0 % 15 == 0 && c1 % 8 == 0)
	      A_comp(A_off, A, c1 / 8, c0 / 15);
	    if (c0 % 3 == 0 && c1 % 4 == 0)
	      C_comp(A, B, C, c1 / 4, c0 / 3);
	  }
	
}
