#ifndef __SYNTHESIS__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__SYNTHESIS__
// compute file: D_opt_compute_units.h
#include "D_opt_compute_units.h"

struct A_A_update_0_write0_to_D_rd0_cache {
	// RAM Box: {[0, 9], [0, 0]}
	// Capacity: 3
	// # of read delays: 2
  // 0, 2
	fifo<hw_uint<32> , 3> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(2 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct A_A_update_0_write0_to_D_rd1_cache {
	// RAM Box: {[1, 10], [0, 0]}
	// Capacity: 2
	// # of read delays: 2
  // 0, 1
	fifo<hw_uint<32> , 2> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(1 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct A_A_update_0_write0_to_D_rd2_cache {
	// RAM Box: {[2, 11], [0, 0]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct A_cache {
  // Reader addrs...
    // { D_update_0[d0, d1 = 0] -> A[d0, 0] : 0 <= d0 <= 9 }
    // { D_update_0[d0, d1 = 0] -> A[1 + d0, 0] : 0 <= d0 <= 9 }
    // { D_update_0[d0, d1 = 0] -> A[2 + d0, 0] : 0 <= d0 <= 9 }
  // # of banks: 3
  A_A_update_0_write0_to_D_rd0_cache A_A_update_0_write0_to_D_rd0;
  A_A_update_0_write0_to_D_rd1_cache A_A_update_0_write0_to_D_rd1;
  A_A_update_0_write0_to_D_rd2_cache A_A_update_0_write0_to_D_rd2;
};



inline void A_A_update_0_write0_write(hw_uint<32> & A_A_update_0_write0, A_cache& A, int d0, int d1, int dynamic_address) {
  A.A_A_update_0_write0_to_D_rd0.push(A_A_update_0_write0);
  A.A_A_update_0_write0_to_D_rd1.push(A_A_update_0_write0);
  A.A_A_update_0_write0_to_D_rd2.push(A_A_update_0_write0);
}

inline hw_uint<32>  D_rd0_select(A_cache& A, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // D_rd0 read pattern: { D_update_0[d0, d1 = 0] -> A[d0, 0] : 0 <= d0 <= 9 }
  // Read schedule : { D_update_0[d0, d1 = 0] -> [0, 6 + d0, 4] : 0 <= d0 <= 9 }
  // Write schedule: { A_update_0[d0, d1 = 0] -> [0, 4 + d0, 3] : 0 <= d0 <= 11 }
  auto value_A_A_update_0_write0 = A.A_A_update_0_write0_to_D_rd0.peek(/* one reader or all rams */ 2);
  return value_A_A_update_0_write0;
  return 0;
}

inline hw_uint<32>  D_rd1_select(A_cache& A, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // D_rd1 read pattern: { D_update_0[d0, d1 = 0] -> A[1 + d0, 0] : 0 <= d0 <= 9 }
  // Read schedule : { D_update_0[d0, d1 = 0] -> [0, 6 + d0, 4] : 0 <= d0 <= 9 }
  // Write schedule: { A_update_0[d0, d1 = 0] -> [0, 4 + d0, 3] : 0 <= d0 <= 11 }
  auto value_A_A_update_0_write0 = A.A_A_update_0_write0_to_D_rd1.peek(/* one reader or all rams */ 1);
  return value_A_A_update_0_write0;
  return 0;
}

inline hw_uint<32>  D_rd2_select(A_cache& A, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // D_rd2 read pattern: { D_update_0[d0, d1 = 0] -> A[2 + d0, 0] : 0 <= d0 <= 9 }
  // Read schedule : { D_update_0[d0, d1 = 0] -> [0, 6 + d0, 4] : 0 <= d0 <= 9 }
  // Write schedule: { A_update_0[d0, d1 = 0] -> [0, 4 + d0, 3] : 0 <= d0 <= 11 }
  auto value_A_A_update_0_write0 = A.A_A_update_0_write0_to_D_rd2.peek(/* one reader or all rams */ 0);
  return value_A_A_update_0_write0;
  return 0;
}

// # of bundles = 2
// A_update_0_write
//	A_A_update_0_write0
inline void A_A_update_0_write_bundle_write(hw_uint<32>& A_update_0_write, A_cache& A, int d0, int d1, int dynamic_address) {
	hw_uint<32>  A_A_update_0_write0_res = A_update_0_write.extract<0, 31>();
	A_A_update_0_write0_write(A_A_update_0_write0_res, A, d0, d1, dynamic_address);
}

// D_update_0_read
//	D_rd0
//	D_rd1
//	D_rd2
inline hw_uint<96> A_D_update_0_read_bundle_read(A_cache& A, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 3
    // D_rd0
    // D_rd1
    // D_rd2

	hw_uint<96> result;
	hw_uint<32>  D_rd0_res = D_rd0_select(A, d0, d1, dynamic_address);
	set_at<0, 96>(result, D_rd0_res);
	hw_uint<32>  D_rd1_res = D_rd1_select(A, d0, d1, dynamic_address);
	set_at<32, 96>(result, D_rd1_res);
	hw_uint<32>  D_rd2_res = D_rd2_select(A, d0, d1, dynamic_address);
	set_at<64, 96>(result, D_rd2_res);
	return result;
}

struct B_B_update_0_write0_to_D_rd0_cache {
	// RAM Box: {[0, 9], [0, 0]}
	// Capacity: 3
	// # of read delays: 2
  // 0, 2
	fifo<hw_uint<32> , 3> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(2 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct B_B_update_0_write0_to_D_rd1_cache {
	// RAM Box: {[1, 10], [0, 0]}
	// Capacity: 2
	// # of read delays: 2
  // 0, 1
	fifo<hw_uint<32> , 2> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(1 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct B_B_update_0_write0_to_D_rd2_cache {
	// RAM Box: {[2, 11], [0, 0]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct B_cache {
  // Reader addrs...
    // { D_update_0[d0, d1 = 0] -> B[d0, 0] : 0 <= d0 <= 9 }
    // { D_update_0[d0, d1 = 0] -> B[1 + d0, 0] : 0 <= d0 <= 9 }
    // { D_update_0[d0, d1 = 0] -> B[2 + d0, 0] : 0 <= d0 <= 9 }
  // # of banks: 3
  B_B_update_0_write0_to_D_rd0_cache B_B_update_0_write0_to_D_rd0;
  B_B_update_0_write0_to_D_rd1_cache B_B_update_0_write0_to_D_rd1;
  B_B_update_0_write0_to_D_rd2_cache B_B_update_0_write0_to_D_rd2;
};



inline void B_B_update_0_write0_write(hw_uint<32> & B_B_update_0_write0, B_cache& B, int d0, int d1, int dynamic_address) {
  B.B_B_update_0_write0_to_D_rd0.push(B_B_update_0_write0);
  B.B_B_update_0_write0_to_D_rd1.push(B_B_update_0_write0);
  B.B_B_update_0_write0_to_D_rd2.push(B_B_update_0_write0);
}

inline hw_uint<32>  D_rd0_select(B_cache& B, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // D_rd0 read pattern: { D_update_0[d0, d1 = 0] -> B[d0, 0] : 0 <= d0 <= 9 }
  // Read schedule : { D_update_0[d0, d1 = 0] -> [0, 6 + d0, 4] : 0 <= d0 <= 9 }
  // Write schedule: { B_update_0[d0, d1 = 0] -> [0, 4 + d0, 2] : 0 <= d0 <= 11 }
  auto value_B_B_update_0_write0 = B.B_B_update_0_write0_to_D_rd0.peek(/* one reader or all rams */ 2);
  return value_B_B_update_0_write0;
  return 0;
}

inline hw_uint<32>  D_rd1_select(B_cache& B, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // D_rd1 read pattern: { D_update_0[d0, d1 = 0] -> B[1 + d0, 0] : 0 <= d0 <= 9 }
  // Read schedule : { D_update_0[d0, d1 = 0] -> [0, 6 + d0, 4] : 0 <= d0 <= 9 }
  // Write schedule: { B_update_0[d0, d1 = 0] -> [0, 4 + d0, 2] : 0 <= d0 <= 11 }
  auto value_B_B_update_0_write0 = B.B_B_update_0_write0_to_D_rd1.peek(/* one reader or all rams */ 1);
  return value_B_B_update_0_write0;
  return 0;
}

inline hw_uint<32>  D_rd2_select(B_cache& B, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // D_rd2 read pattern: { D_update_0[d0, d1 = 0] -> B[2 + d0, 0] : 0 <= d0 <= 9 }
  // Read schedule : { D_update_0[d0, d1 = 0] -> [0, 6 + d0, 4] : 0 <= d0 <= 9 }
  // Write schedule: { B_update_0[d0, d1 = 0] -> [0, 4 + d0, 2] : 0 <= d0 <= 11 }
  auto value_B_B_update_0_write0 = B.B_B_update_0_write0_to_D_rd2.peek(/* one reader or all rams */ 0);
  return value_B_B_update_0_write0;
  return 0;
}

// # of bundles = 2
// B_update_0_write
//	B_B_update_0_write0
inline void B_B_update_0_write_bundle_write(hw_uint<32>& B_update_0_write, B_cache& B, int d0, int d1, int dynamic_address) {
	hw_uint<32>  B_B_update_0_write0_res = B_update_0_write.extract<0, 31>();
	B_B_update_0_write0_write(B_B_update_0_write0_res, B, d0, d1, dynamic_address);
}

// D_update_0_read
//	D_rd0
//	D_rd1
//	D_rd2
inline hw_uint<96> B_D_update_0_read_bundle_read(B_cache& B, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 3
    // D_rd0
    // D_rd1
    // D_rd2

	hw_uint<96> result;
	hw_uint<32>  D_rd0_res = D_rd0_select(B, d0, d1, dynamic_address);
	set_at<0, 96>(result, D_rd0_res);
	hw_uint<32>  D_rd1_res = D_rd1_select(B, d0, d1, dynamic_address);
	set_at<32, 96>(result, D_rd1_res);
	hw_uint<32>  D_rd2_res = D_rd2_select(B, d0, d1, dynamic_address);
	set_at<64, 96>(result, D_rd2_res);
	return result;
}

struct C_C_update_0_write0_merged_banks_6_cache {
	// RAM Box: {[-2, 15], [0, 0]}
	// Capacity: 7
	// # of read delays: 6
  // 0, 1, 2, 4, 5, 6
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	hw_uint<32>  f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_2() {
		return f4;
	}

	inline hw_uint<32>  peek_3() {
		return f5;
	}

	inline hw_uint<32>  peek_4() {
		return f6;
	}

	inline hw_uint<32>  peek_5() {
		return f8;
	}

	inline hw_uint<32>  peek_6() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f6 = f5;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f5 = f4;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct C_cache {
  // Reader addrs...
    // { A_update_0[d0, d1 = 0] -> C[2 + d0, 0] : 0 <= d0 <= 11 }
    // { A_update_0[d0, d1 = 0] -> C[3 + d0, 0] : 0 <= d0 <= 11 }
    // { A_update_0[d0, d1 = 0] -> C[4 + d0, 0] : 0 <= d0 <= 11 }
    // { B_update_0[d0, d1 = 0] -> C[-2 + d0, 0] : 0 <= d0 <= 11 }
    // { B_update_0[d0, d1 = 0] -> C[-1 + d0, 0] : 0 <= d0 <= 11 }
    // { B_update_0[d0, d1 = 0] -> C[d0, 0] : 0 <= d0 <= 11 }
  // # of banks: 1
  C_C_update_0_write0_merged_banks_6_cache C_C_update_0_write0_merged_banks_6;
};



inline void C_C_update_0_write0_write(hw_uint<32> & C_C_update_0_write0, C_cache& C, int d0, int d1, int dynamic_address) {
  C.C_C_update_0_write0_merged_banks_6.push(C_C_update_0_write0);
}

inline hw_uint<32>  A_rd0_select(C_cache& C, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // A_rd0 read pattern: { A_update_0[d0, d1 = 0] -> C[2 + d0, 0] : 0 <= d0 <= 11 }
  // Read schedule : { A_update_0[d0, d1 = 0] -> [0, 4 + d0, 3] : 0 <= d0 <= 11 }
  // Write schedule: { C_update_0[d0, d1 = 0] -> [0, d0, 1] : -2 <= d0 <= 15 }
  auto value_C_C_update_0_write0 = C.C_C_update_0_write0_merged_banks_6.peek_2();
  return value_C_C_update_0_write0;
  return 0;
}

inline hw_uint<32>  A_rd1_select(C_cache& C, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // A_rd1 read pattern: { A_update_0[d0, d1 = 0] -> C[3 + d0, 0] : 0 <= d0 <= 11 }
  // Read schedule : { A_update_0[d0, d1 = 0] -> [0, 4 + d0, 3] : 0 <= d0 <= 11 }
  // Write schedule: { C_update_0[d0, d1 = 0] -> [0, d0, 1] : -2 <= d0 <= 15 }
  auto value_C_C_update_0_write0 = C.C_C_update_0_write0_merged_banks_6.peek_1();
  return value_C_C_update_0_write0;
  return 0;
}

inline hw_uint<32>  A_rd2_select(C_cache& C, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // A_rd2 read pattern: { A_update_0[d0, d1 = 0] -> C[4 + d0, 0] : 0 <= d0 <= 11 }
  // Read schedule : { A_update_0[d0, d1 = 0] -> [0, 4 + d0, 3] : 0 <= d0 <= 11 }
  // Write schedule: { C_update_0[d0, d1 = 0] -> [0, d0, 1] : -2 <= d0 <= 15 }
  auto value_C_C_update_0_write0 = C.C_C_update_0_write0_merged_banks_6.peek_0();
  return value_C_C_update_0_write0;
  return 0;
}

inline hw_uint<32>  B_rd0_select(C_cache& C, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // B_rd0 read pattern: { B_update_0[d0, d1 = 0] -> C[-2 + d0, 0] : 0 <= d0 <= 11 }
  // Read schedule : { B_update_0[d0, d1 = 0] -> [0, 4 + d0, 2] : 0 <= d0 <= 11 }
  // Write schedule: { C_update_0[d0, d1 = 0] -> [0, d0, 1] : -2 <= d0 <= 15 }
  auto value_C_C_update_0_write0 = C.C_C_update_0_write0_merged_banks_6.peek_6();
  return value_C_C_update_0_write0;
  return 0;
}

inline hw_uint<32>  B_rd1_select(C_cache& C, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // B_rd1 read pattern: { B_update_0[d0, d1 = 0] -> C[-1 + d0, 0] : 0 <= d0 <= 11 }
  // Read schedule : { B_update_0[d0, d1 = 0] -> [0, 4 + d0, 2] : 0 <= d0 <= 11 }
  // Write schedule: { C_update_0[d0, d1 = 0] -> [0, d0, 1] : -2 <= d0 <= 15 }
  auto value_C_C_update_0_write0 = C.C_C_update_0_write0_merged_banks_6.peek_5();
  return value_C_C_update_0_write0;
  return 0;
}

inline hw_uint<32>  B_rd2_select(C_cache& C, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // B_rd2 read pattern: { B_update_0[d0, d1 = 0] -> C[d0, 0] : 0 <= d0 <= 11 }
  // Read schedule : { B_update_0[d0, d1 = 0] -> [0, 4 + d0, 2] : 0 <= d0 <= 11 }
  // Write schedule: { C_update_0[d0, d1 = 0] -> [0, d0, 1] : -2 <= d0 <= 15 }
  auto value_C_C_update_0_write0 = C.C_C_update_0_write0_merged_banks_6.peek_4();
  return value_C_C_update_0_write0;
  return 0;
}

// # of bundles = 3
// A_update_0_read
//	A_rd0
//	A_rd1
//	A_rd2
inline hw_uint<96> C_A_update_0_read_bundle_read(C_cache& C, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 3
    // A_rd0
    // A_rd1
    // A_rd2

	hw_uint<96> result;
	hw_uint<32>  A_rd0_res = A_rd0_select(C, d0, d1, dynamic_address);
	set_at<0, 96>(result, A_rd0_res);
	hw_uint<32>  A_rd1_res = A_rd1_select(C, d0, d1, dynamic_address);
	set_at<32, 96>(result, A_rd1_res);
	hw_uint<32>  A_rd2_res = A_rd2_select(C, d0, d1, dynamic_address);
	set_at<64, 96>(result, A_rd2_res);
	return result;
}

// B_update_0_read
//	B_rd0
//	B_rd1
//	B_rd2
inline hw_uint<96> C_B_update_0_read_bundle_read(C_cache& C, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 3
    // B_rd0
    // B_rd1
    // B_rd2

	hw_uint<96> result;
	hw_uint<32>  B_rd0_res = B_rd0_select(C, d0, d1, dynamic_address);
	set_at<0, 96>(result, B_rd0_res);
	hw_uint<32>  B_rd1_res = B_rd1_select(C, d0, d1, dynamic_address);
	set_at<32, 96>(result, B_rd1_res);
	hw_uint<32>  B_rd2_res = B_rd2_select(C, d0, d1, dynamic_address);
	set_at<64, 96>(result, B_rd2_res);
	return result;
}

// C_update_0_write
//	C_C_update_0_write0
inline void C_C_update_0_write_bundle_write(hw_uint<32>& C_update_0_write, C_cache& C, int d0, int d1, int dynamic_address) {
	hw_uint<32>  C_C_update_0_write0_res = C_update_0_write.extract<0, 31>();
	C_C_update_0_write0_write(C_C_update_0_write0_res, C, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 384 bits


// Operation logic
inline void C_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */C_oc, C_cache& C, int d0, int d1) {
  // Dynamic address computation

	// Consume: C_oc
	auto C_oc_1_m_C_1__p__0_c__1_m_C_0__p__0_value = C_oc.read();
	auto compute_result = C_generated_compute_unrolled_1(C_oc_1_m_C_1__p__0_c__1_m_C_0__p__0_value);
	// Produce: C
	C_C_update_0_write_bundle_write(/* arg names */compute_result, C, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void B_update_0(C_cache& C, B_cache& B, int d0, int d1) {
  // Dynamic address computation

	// Consume: C
	auto C_1_m_B_1__p___m_2_c__1_m_B_0__p__0_value = C_B_update_0_read_bundle_read(C/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = B_generated_compute_unrolled_1(C_1_m_B_1__p___m_2_c__1_m_B_0__p__0_value);
	// Produce: B
	B_B_update_0_write_bundle_write(/* arg names */compute_result, B, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void A_update_0(C_cache& C, A_cache& A, int d0, int d1) {
  // Dynamic address computation

	// Consume: C
	auto C_1_m_A_1__p__2_c__1_m_A_0__p__0_value = C_A_update_0_read_bundle_read(C/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = A_generated_compute_unrolled_1(C_1_m_A_1__p__2_c__1_m_A_0__p__0_value);
	// Produce: A
	A_A_update_0_write_bundle_write(/* arg names */compute_result, A, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void D_update_0(A_cache& A, B_cache& B, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */D, int d0, int d1) {
  // Dynamic address computation

	// Consume: A
	auto A_1_m_D_1__p__0_c__1_m_D_0__p__0_value = A_D_update_0_read_bundle_read(A/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: B
	auto B_1_m_D_1__p__0_c__1_m_D_0__p__0_value = B_D_update_0_read_bundle_read(B/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = D_generated_compute_unrolled_1(A_1_m_D_1__p__0_c__1_m_D_0__p__0_value, B_1_m_D_1__p__0_c__1_m_D_0__p__0_value);
	// Produce: D
	D.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

// Driver function
void D_opt(HWStream<hw_uint<32> >& /* get_args num ports = 1 */C_oc, HWStream<hw_uint<32> >& /* get_args num ports = 1 */D) {

#ifndef __SYNTHESIS__
  ofstream debug_file("D_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__SYNTHESIS__
  A_cache A;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  B_cache B;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  C_cache C;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
#ifdef __SYNTHESIS__
#pragma HLS inline recursive
#endif // __SYNTHESIS__

// schedule: { B_update_0[d0, d1 = 0] -> [0, 4 + d0, 2] : 0 <= d0 <= 11; D_update_0[d0, d1 = 0] -> [0, 6 + d0, 4] : 0 <= d0 <= 9; A_update_0[d0, d1 = 0] -> [0, 4 + d0, 3] : 0 <= d0 <= 11; C_update_0[d0, d1 = 0] -> [0, d0, 1] : -2 <= d0 <= 15 }
//   { B_update_0[d0, d1 = 0] -> [0, 4 + d0, 2] : 0 <= d0 <= 11 }
// Condition for B_update_0(((((-2 + 1*i2)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((15 + -1*i1)) >= 0)))
//   { D_update_0[d0, d1 = 0] -> [0, 6 + d0, 4] : 0 <= d0 <= 9 }
// Condition for D_update_0(((((-4 + 1*i2)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((15 + -1*i1)) >= 0)))
//   { A_update_0[d0, d1 = 0] -> [0, 4 + d0, 3] : 0 <= d0 <= 11 }
// Condition for A_update_0(((((-3 + 1*i2)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((15 + -1*i1)) >= 0)))
//   { C_update_0[d0, d1 = 0] -> [0, d0, 1] : -2 <= d0 <= 15 }
// Condition for C_update_0(((((-1 + 1*i2)) == 0) && (((1*i0)) == 0) && (((2 + 1*i1)) >= 0) && (((15 + -1*i1)) >= 0)))

	  // Schedules...
	    // A_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*4,1*3]
	    // B_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*4,1*2]
	    // C_oc_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // C_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	    // D_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*6,1*4]
	for (int c0 = 0; c0 <= 0; c0++) {
	  for (int c1 = -2; c1 <= 15; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-2 <= c1 && c1 <= 15) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 0) && ((c0 - 0) % 1 == 0)) {
	      C_update_0(C_oc /* buf name */, C, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((4 <= c1 && c1 <= 15) && ((c1 - 4) % 1 == 0) && (0 <= c0 && c0 <= 0) && ((c0 - 0) % 1 == 0)) {
	      B_update_0(C /* buf name */, B, (c1 - 4) / 1, (c0 - 0) / 1);
	    }
	
	    if ((4 <= c1 && c1 <= 15) && ((c1 - 4) % 1 == 0) && (0 <= c0 && c0 <= 0) && ((c0 - 0) % 1 == 0)) {
	      A_update_0(C /* buf name */, A, (c1 - 4) / 1, (c0 - 0) / 1);
	    }
	
	    if ((6 <= c1 && c1 <= 15) && ((c1 - 6) % 1 == 0) && (0 <= c0 && c0 <= 0) && ((c0 - 0) % 1 == 0)) {
	      D_update_0(A /* buf name */, B /* buf name */, D, (c1 - 6) / 1, (c0 - 0) / 1);
	    }
	
	  }
	}
	
#ifndef __SYNTHESIS__
  debug_file.close();
#endif //__SYNTHESIS__
}

void D_opt_wrapper(HWStream<hw_uint<32> >& /* get_args num ports = 1 */C_oc, HWStream<hw_uint<32> >& /* get_args num ports = 1 */D, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    D_opt(C_oc, D);
  }
}
#ifdef __SYNTHESIS__
  // { C_update_0[root = 0, C_0 = 0, C_1] -> C_oc[C_1, 0] : -2 <= C_1 <= 15 }
const int C_update_0_read_pipe0_num_transfers = 18;
  // { D_update_0[root = 0, D_0 = 0, D_1] -> D[D_1, 0] : 0 <= D_1 <= 9 }
const int D_update_0_write_pipe0_num_transfers = 10;


extern "C" {

void D_opt_accel(hw_uint<32>* C_update_0_read_pipe0, hw_uint<32>* D_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = C_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = D_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = C_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = D_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<32> > C_update_0_read_pipe0_channel;
  static HWStream<hw_uint<32> > D_update_0_write_pipe0_channel;

  burst_read<32>(C_update_0_read_pipe0, C_update_0_read_pipe0_channel, C_update_0_read_pipe0_num_transfers*size);

  D_opt_wrapper(C_update_0_read_pipe0_channel, D_update_0_write_pipe0_channel, size);

  burst_write<32>(D_update_0_write_pipe0, D_update_0_write_pipe0_channel, D_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void D_opt_rdai(HWStream<hw_uint<32> >& C_update_0_read_pipe0, HWStream<hw_uint<32> >&  D_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = C_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = D_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  D_opt(C_update_0_read_pipe0, D_update_0_write_pipe0);

}

}
#endif //__SYNTHESIS__

