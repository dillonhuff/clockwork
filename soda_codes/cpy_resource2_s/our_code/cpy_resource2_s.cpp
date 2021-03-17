#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: clockwork_standard_compute_units.h_merged_compute_units.h
#include "clockwork_standard_compute_units.h_merged_compute_units.h"

struct A_pw_math_in03_0_to_A_load_to_A_to_comp2023_19_cache {
	// RAM Box: {[0, 7], [0, 7]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct A_cache {
  // Reader addrs...
    // { load_to_A_to_comp2023[root = 0, A_ld22, A_ld21] -> A[A_ld21, A_ld22] : 0 <= A_ld22 <= 7 and 0 <= A_ld21 <= 7 }
  // # of banks: 1
  A_pw_math_in03_0_to_A_load_to_A_to_comp2023_19_cache A_pw_math_in03_0_to_A_load_to_A_to_comp2023_19;
};



inline void A_pw_math_in03_0_write(hw_uint<32> & A_pw_math_in03_0, A_cache& A, int root, int pw_math_in01, int pw_math_in02, int dynamic_address) {
  A.A_pw_math_in03_0_to_A_load_to_A_to_comp2023_19.push(A_pw_math_in03_0);
}

inline hw_uint<32>  A_load_to_A_to_comp2023_19_select(A_cache& A, int root, int A_ld22, int A_ld21, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // A_load_to_A_to_comp2023_19 read pattern: { load_to_A_to_comp2023[root = 0, A_ld22, A_ld21] -> A[A_ld21, A_ld22] : 0 <= A_ld22 <= 7 and 0 <= A_ld21 <= 7 }
  // Read schedule : { load_to_A_to_comp2023[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Write schedule: { pw_math_in03[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  auto value_A_pw_math_in03_0 = A.A_pw_math_in03_0_to_A_load_to_A_to_comp2023_19.peek(/* one reader or all rams */ 0);
  return value_A_pw_math_in03_0;
  return 0;
}

// # of bundles = 2
// load_to_A_to_comp2023_read
//	A_load_to_A_to_comp2023_19
inline hw_uint<32> A_load_to_A_to_comp2023_read_bundle_read(A_cache& A, int root, int A_ld22, int A_ld21, int dynamic_address) {
  // # of ports in bundle: 1
    // A_load_to_A_to_comp2023_19

	hw_uint<32> result;
	hw_uint<32>  A_load_to_A_to_comp2023_19_res = A_load_to_A_to_comp2023_19_select(A, root, A_ld22, A_ld21, dynamic_address);
	set_at<0, 32>(result, A_load_to_A_to_comp2023_19_res);
	return result;
}

// pw_math_in03_write
//	A_pw_math_in03_0
inline void A_pw_math_in03_write_bundle_write(hw_uint<32>& pw_math_in03_write, A_cache& A, int root, int pw_math_in01, int pw_math_in02, int dynamic_address) {
	hw_uint<32>  A_pw_math_in03_0_res = pw_math_in03_write.extract<0, 31>();
	A_pw_math_in03_0_write(A_pw_math_in03_0_res, A, root, pw_math_in01, pw_math_in02, dynamic_address);
}

struct A_FIFO_buf24_load_to_A_FIFO_buf2427_20_to_A_FIFO_buf24_pw_math_A47_9_cache {
	// RAM Box: {[0, 7], [0, 7]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct A_FIFO_buf24_cache {
  // Reader addrs...
    // { pw_math_A47[root = 0, pw_math_A45, pw_math_A46] -> A_FIFO_buf24[pw_math_A46, pw_math_A45] : 0 <= pw_math_A45 <= 7 and 0 <= pw_math_A46 <= 7 }
  // # of banks: 1
  A_FIFO_buf24_load_to_A_FIFO_buf2427_20_to_A_FIFO_buf24_pw_math_A47_9_cache A_FIFO_buf24_load_to_A_FIFO_buf2427_20_to_A_FIFO_buf24_pw_math_A47_9;
};



inline void A_FIFO_buf24_load_to_A_FIFO_buf2427_20_write(hw_uint<32> & A_FIFO_buf24_load_to_A_FIFO_buf2427_20, A_FIFO_buf24_cache& A_FIFO_buf24, int root, int A_to_comp20_ld26, int A_to_comp20_ld25, int dynamic_address) {
  A_FIFO_buf24.A_FIFO_buf24_load_to_A_FIFO_buf2427_20_to_A_FIFO_buf24_pw_math_A47_9.push(A_FIFO_buf24_load_to_A_FIFO_buf2427_20);
}

inline hw_uint<32>  A_FIFO_buf24_pw_math_A47_9_select(A_FIFO_buf24_cache& A_FIFO_buf24, int root, int pw_math_A45, int pw_math_A46, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // A_FIFO_buf24_pw_math_A47_9 read pattern: { pw_math_A47[root = 0, pw_math_A45, pw_math_A46] -> A_FIFO_buf24[pw_math_A46, pw_math_A45] : 0 <= pw_math_A45 <= 7 and 0 <= pw_math_A46 <= 7 }
  // Read schedule : { pw_math_A47[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Write schedule: { load_to_A_FIFO_buf2427[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  auto value_A_FIFO_buf24_load_to_A_FIFO_buf2427_20 = A_FIFO_buf24.A_FIFO_buf24_load_to_A_FIFO_buf2427_20_to_A_FIFO_buf24_pw_math_A47_9.peek(/* one reader or all rams */ 0);
  return value_A_FIFO_buf24_load_to_A_FIFO_buf2427_20;
  return 0;
}

// # of bundles = 2
// load_to_A_FIFO_buf2427_write
//	A_FIFO_buf24_load_to_A_FIFO_buf2427_20
inline void A_FIFO_buf24_load_to_A_FIFO_buf2427_write_bundle_write(hw_uint<32>& load_to_A_FIFO_buf2427_write, A_FIFO_buf24_cache& A_FIFO_buf24, int root, int A_to_comp20_ld26, int A_to_comp20_ld25, int dynamic_address) {
	hw_uint<32>  A_FIFO_buf24_load_to_A_FIFO_buf2427_20_res = load_to_A_FIFO_buf2427_write.extract<0, 31>();
	A_FIFO_buf24_load_to_A_FIFO_buf2427_20_write(A_FIFO_buf24_load_to_A_FIFO_buf2427_20_res, A_FIFO_buf24, root, A_to_comp20_ld26, A_to_comp20_ld25, dynamic_address);
}

// pw_math_A47_read
//	A_FIFO_buf24_pw_math_A47_9
inline hw_uint<32> A_FIFO_buf24_pw_math_A47_read_bundle_read(A_FIFO_buf24_cache& A_FIFO_buf24, int root, int pw_math_A45, int pw_math_A46, int dynamic_address) {
  // # of ports in bundle: 1
    // A_FIFO_buf24_pw_math_A47_9

	hw_uint<32> result;
	hw_uint<32>  A_FIFO_buf24_pw_math_A47_9_res = A_FIFO_buf24_pw_math_A47_9_select(A_FIFO_buf24, root, pw_math_A45, pw_math_A46, dynamic_address);
	set_at<0, 32>(result, A_FIFO_buf24_pw_math_A47_9_res);
	return result;
}

struct Ac_pw_math_A47_8_to_Ac_load_to_Ac_to_ldb2831_15_cache {
	// RAM Box: {[0, 7], [0, 7]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct Ac_cache {
  // Reader addrs...
    // { load_to_Ac_to_ldb2831[root = 0, Ac_ld30, Ac_ld29] -> Ac[Ac_ld29, Ac_ld30] : 0 <= Ac_ld30 <= 7 and 0 <= Ac_ld29 <= 7 }
  // # of banks: 1
  Ac_pw_math_A47_8_to_Ac_load_to_Ac_to_ldb2831_15_cache Ac_pw_math_A47_8_to_Ac_load_to_Ac_to_ldb2831_15;
};



inline void Ac_pw_math_A47_8_write(hw_uint<32> & Ac_pw_math_A47_8, Ac_cache& Ac, int root, int pw_math_A45, int pw_math_A46, int dynamic_address) {
  Ac.Ac_pw_math_A47_8_to_Ac_load_to_Ac_to_ldb2831_15.push(Ac_pw_math_A47_8);
}

inline hw_uint<32>  Ac_load_to_Ac_to_ldb2831_15_select(Ac_cache& Ac, int root, int Ac_ld30, int Ac_ld29, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // Ac_load_to_Ac_to_ldb2831_15 read pattern: { load_to_Ac_to_ldb2831[root = 0, Ac_ld30, Ac_ld29] -> Ac[Ac_ld29, Ac_ld30] : 0 <= Ac_ld30 <= 7 and 0 <= Ac_ld29 <= 7 }
  // Read schedule : { load_to_Ac_to_ldb2831[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Write schedule: { pw_math_A47[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  auto value_Ac_pw_math_A47_8 = Ac.Ac_pw_math_A47_8_to_Ac_load_to_Ac_to_ldb2831_15.peek(/* one reader or all rams */ 0);
  return value_Ac_pw_math_A47_8;
  return 0;
}

// # of bundles = 2
// load_to_Ac_to_ldb2831_read
//	Ac_load_to_Ac_to_ldb2831_15
inline hw_uint<32> Ac_load_to_Ac_to_ldb2831_read_bundle_read(Ac_cache& Ac, int root, int Ac_ld30, int Ac_ld29, int dynamic_address) {
  // # of ports in bundle: 1
    // Ac_load_to_Ac_to_ldb2831_15

	hw_uint<32> result;
	hw_uint<32>  Ac_load_to_Ac_to_ldb2831_15_res = Ac_load_to_Ac_to_ldb2831_15_select(Ac, root, Ac_ld30, Ac_ld29, dynamic_address);
	set_at<0, 32>(result, Ac_load_to_Ac_to_ldb2831_15_res);
	return result;
}

// pw_math_A47_write
//	Ac_pw_math_A47_8
inline void Ac_pw_math_A47_write_bundle_write(hw_uint<32>& pw_math_A47_write, Ac_cache& Ac, int root, int pw_math_A45, int pw_math_A46, int dynamic_address) {
	hw_uint<32>  Ac_pw_math_A47_8_res = pw_math_A47_write.extract<0, 31>();
	Ac_pw_math_A47_8_write(Ac_pw_math_A47_8_res, Ac, root, pw_math_A45, pw_math_A46, dynamic_address);
}

struct Ac_FIFO_buf32_load_to_Ac_FIFO_buf3235_16_to_Ac_FIFO_buf32_pw_math_Ac811_7_cache {
	// RAM Box: {[0, 7], [0, 7]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct Ac_FIFO_buf32_cache {
  // Reader addrs...
    // { pw_math_Ac811[root = 0, pw_math_Ac89, pw_math_Ac810] -> Ac_FIFO_buf32[pw_math_Ac810, pw_math_Ac89] : 0 <= pw_math_Ac89 <= 7 and 0 <= pw_math_Ac810 <= 7 }
  // # of banks: 1
  Ac_FIFO_buf32_load_to_Ac_FIFO_buf3235_16_to_Ac_FIFO_buf32_pw_math_Ac811_7_cache Ac_FIFO_buf32_load_to_Ac_FIFO_buf3235_16_to_Ac_FIFO_buf32_pw_math_Ac811_7;
};



inline void Ac_FIFO_buf32_load_to_Ac_FIFO_buf3235_16_write(hw_uint<32> & Ac_FIFO_buf32_load_to_Ac_FIFO_buf3235_16, Ac_FIFO_buf32_cache& Ac_FIFO_buf32, int root, int Ac_to_ldb28_ld34, int Ac_to_ldb28_ld33, int dynamic_address) {
  Ac_FIFO_buf32.Ac_FIFO_buf32_load_to_Ac_FIFO_buf3235_16_to_Ac_FIFO_buf32_pw_math_Ac811_7.push(Ac_FIFO_buf32_load_to_Ac_FIFO_buf3235_16);
}

inline hw_uint<32>  Ac_FIFO_buf32_pw_math_Ac811_7_select(Ac_FIFO_buf32_cache& Ac_FIFO_buf32, int root, int pw_math_Ac89, int pw_math_Ac810, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // Ac_FIFO_buf32_pw_math_Ac811_7 read pattern: { pw_math_Ac811[root = 0, pw_math_Ac89, pw_math_Ac810] -> Ac_FIFO_buf32[pw_math_Ac810, pw_math_Ac89] : 0 <= pw_math_Ac89 <= 7 and 0 <= pw_math_Ac810 <= 7 }
  // Read schedule : { pw_math_Ac811[d0 = 0, d1, d2] -> [0, d1, d2, 6] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Write schedule: { load_to_Ac_FIFO_buf3235[d0 = 0, d1, d2] -> [0, d1, d2, 5] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  auto value_Ac_FIFO_buf32_load_to_Ac_FIFO_buf3235_16 = Ac_FIFO_buf32.Ac_FIFO_buf32_load_to_Ac_FIFO_buf3235_16_to_Ac_FIFO_buf32_pw_math_Ac811_7.peek(/* one reader or all rams */ 0);
  return value_Ac_FIFO_buf32_load_to_Ac_FIFO_buf3235_16;
  return 0;
}

// # of bundles = 2
// load_to_Ac_FIFO_buf3235_write
//	Ac_FIFO_buf32_load_to_Ac_FIFO_buf3235_16
inline void Ac_FIFO_buf32_load_to_Ac_FIFO_buf3235_write_bundle_write(hw_uint<32>& load_to_Ac_FIFO_buf3235_write, Ac_FIFO_buf32_cache& Ac_FIFO_buf32, int root, int Ac_to_ldb28_ld34, int Ac_to_ldb28_ld33, int dynamic_address) {
	hw_uint<32>  Ac_FIFO_buf32_load_to_Ac_FIFO_buf3235_16_res = load_to_Ac_FIFO_buf3235_write.extract<0, 31>();
	Ac_FIFO_buf32_load_to_Ac_FIFO_buf3235_16_write(Ac_FIFO_buf32_load_to_Ac_FIFO_buf3235_16_res, Ac_FIFO_buf32, root, Ac_to_ldb28_ld34, Ac_to_ldb28_ld33, dynamic_address);
}

// pw_math_Ac811_read
//	Ac_FIFO_buf32_pw_math_Ac811_7
inline hw_uint<32> Ac_FIFO_buf32_pw_math_Ac811_read_bundle_read(Ac_FIFO_buf32_cache& Ac_FIFO_buf32, int root, int pw_math_Ac89, int pw_math_Ac810, int dynamic_address) {
  // # of ports in bundle: 1
    // Ac_FIFO_buf32_pw_math_Ac811_7

	hw_uint<32> result;
	hw_uint<32>  Ac_FIFO_buf32_pw_math_Ac811_7_res = Ac_FIFO_buf32_pw_math_Ac811_7_select(Ac_FIFO_buf32, root, pw_math_Ac89, pw_math_Ac810, dynamic_address);
	set_at<0, 32>(result, Ac_FIFO_buf32_pw_math_Ac811_7_res);
	return result;
}

struct B_pw_math_Ac811_6_to_B_load_to_B_to_comp3639_11_cache {
	// RAM Box: {[0, 7], [0, 7]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct B_cache {
  // Reader addrs...
    // { load_to_B_to_comp3639[root = 0, B_ld38, B_ld37] -> B[B_ld37, B_ld38] : 0 <= B_ld38 <= 7 and 0 <= B_ld37 <= 7 }
  // # of banks: 1
  B_pw_math_Ac811_6_to_B_load_to_B_to_comp3639_11_cache B_pw_math_Ac811_6_to_B_load_to_B_to_comp3639_11;
};



inline void B_pw_math_Ac811_6_write(hw_uint<32> & B_pw_math_Ac811_6, B_cache& B, int root, int pw_math_Ac89, int pw_math_Ac810, int dynamic_address) {
  B.B_pw_math_Ac811_6_to_B_load_to_B_to_comp3639_11.push(B_pw_math_Ac811_6);
}

inline hw_uint<32>  B_load_to_B_to_comp3639_11_select(B_cache& B, int root, int B_ld38, int B_ld37, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // B_load_to_B_to_comp3639_11 read pattern: { load_to_B_to_comp3639[root = 0, B_ld38, B_ld37] -> B[B_ld37, B_ld38] : 0 <= B_ld38 <= 7 and 0 <= B_ld37 <= 7 }
  // Read schedule : { load_to_B_to_comp3639[d0 = 0, d1, d2] -> [0, d1, d2, 7] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Write schedule: { pw_math_Ac811[d0 = 0, d1, d2] -> [0, d1, d2, 6] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  auto value_B_pw_math_Ac811_6 = B.B_pw_math_Ac811_6_to_B_load_to_B_to_comp3639_11.peek(/* one reader or all rams */ 0);
  return value_B_pw_math_Ac811_6;
  return 0;
}

// # of bundles = 2
// load_to_B_to_comp3639_read
//	B_load_to_B_to_comp3639_11
inline hw_uint<32> B_load_to_B_to_comp3639_read_bundle_read(B_cache& B, int root, int B_ld38, int B_ld37, int dynamic_address) {
  // # of ports in bundle: 1
    // B_load_to_B_to_comp3639_11

	hw_uint<32> result;
	hw_uint<32>  B_load_to_B_to_comp3639_11_res = B_load_to_B_to_comp3639_11_select(B, root, B_ld38, B_ld37, dynamic_address);
	set_at<0, 32>(result, B_load_to_B_to_comp3639_11_res);
	return result;
}

// pw_math_Ac811_write
//	B_pw_math_Ac811_6
inline void B_pw_math_Ac811_write_bundle_write(hw_uint<32>& pw_math_Ac811_write, B_cache& B, int root, int pw_math_Ac89, int pw_math_Ac810, int dynamic_address) {
	hw_uint<32>  B_pw_math_Ac811_6_res = pw_math_Ac811_write.extract<0, 31>();
	B_pw_math_Ac811_6_write(B_pw_math_Ac811_6_res, B, root, pw_math_Ac89, pw_math_Ac810, dynamic_address);
}

struct B_FIFO_buf40_load_to_B_FIFO_buf4043_12_to_B_FIFO_buf40_pw_math_B1215_5_cache {
	// RAM Box: {[0, 7], [0, 7]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct B_FIFO_buf40_cache {
  // Reader addrs...
    // { pw_math_B1215[root = 0, pw_math_B1213, pw_math_B1214] -> B_FIFO_buf40[pw_math_B1214, pw_math_B1213] : 0 <= pw_math_B1213 <= 7 and 0 <= pw_math_B1214 <= 7 }
  // # of banks: 1
  B_FIFO_buf40_load_to_B_FIFO_buf4043_12_to_B_FIFO_buf40_pw_math_B1215_5_cache B_FIFO_buf40_load_to_B_FIFO_buf4043_12_to_B_FIFO_buf40_pw_math_B1215_5;
};



inline void B_FIFO_buf40_load_to_B_FIFO_buf4043_12_write(hw_uint<32> & B_FIFO_buf40_load_to_B_FIFO_buf4043_12, B_FIFO_buf40_cache& B_FIFO_buf40, int root, int B_to_comp36_ld42, int B_to_comp36_ld41, int dynamic_address) {
  B_FIFO_buf40.B_FIFO_buf40_load_to_B_FIFO_buf4043_12_to_B_FIFO_buf40_pw_math_B1215_5.push(B_FIFO_buf40_load_to_B_FIFO_buf4043_12);
}

inline hw_uint<32>  B_FIFO_buf40_pw_math_B1215_5_select(B_FIFO_buf40_cache& B_FIFO_buf40, int root, int pw_math_B1213, int pw_math_B1214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // B_FIFO_buf40_pw_math_B1215_5 read pattern: { pw_math_B1215[root = 0, pw_math_B1213, pw_math_B1214] -> B_FIFO_buf40[pw_math_B1214, pw_math_B1213] : 0 <= pw_math_B1213 <= 7 and 0 <= pw_math_B1214 <= 7 }
  // Read schedule : { pw_math_B1215[d0 = 0, d1, d2] -> [0, d1, d2, 9] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Write schedule: { load_to_B_FIFO_buf4043[d0 = 0, d1, d2] -> [0, d1, d2, 8] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  auto value_B_FIFO_buf40_load_to_B_FIFO_buf4043_12 = B_FIFO_buf40.B_FIFO_buf40_load_to_B_FIFO_buf4043_12_to_B_FIFO_buf40_pw_math_B1215_5.peek(/* one reader or all rams */ 0);
  return value_B_FIFO_buf40_load_to_B_FIFO_buf4043_12;
  return 0;
}

// # of bundles = 2
// load_to_B_FIFO_buf4043_write
//	B_FIFO_buf40_load_to_B_FIFO_buf4043_12
inline void B_FIFO_buf40_load_to_B_FIFO_buf4043_write_bundle_write(hw_uint<32>& load_to_B_FIFO_buf4043_write, B_FIFO_buf40_cache& B_FIFO_buf40, int root, int B_to_comp36_ld42, int B_to_comp36_ld41, int dynamic_address) {
	hw_uint<32>  B_FIFO_buf40_load_to_B_FIFO_buf4043_12_res = load_to_B_FIFO_buf4043_write.extract<0, 31>();
	B_FIFO_buf40_load_to_B_FIFO_buf4043_12_write(B_FIFO_buf40_load_to_B_FIFO_buf4043_12_res, B_FIFO_buf40, root, B_to_comp36_ld42, B_to_comp36_ld41, dynamic_address);
}

// pw_math_B1215_read
//	B_FIFO_buf40_pw_math_B1215_5
inline hw_uint<32> B_FIFO_buf40_pw_math_B1215_read_bundle_read(B_FIFO_buf40_cache& B_FIFO_buf40, int root, int pw_math_B1213, int pw_math_B1214, int dynamic_address) {
  // # of ports in bundle: 1
    // B_FIFO_buf40_pw_math_B1215_5

	hw_uint<32> result;
	hw_uint<32>  B_FIFO_buf40_pw_math_B1215_5_res = B_FIFO_buf40_pw_math_B1215_5_select(B_FIFO_buf40, root, pw_math_B1213, pw_math_B1214, dynamic_address);
	set_at<0, 32>(result, B_FIFO_buf40_pw_math_B1215_5_res);
	return result;
}

struct Bc_pw_math_B1215_4_to_Bc_pw_math_Bc1619_3_cache {
	// RAM Box: {[0, 7], [0, 7]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct Bc_cache {
  // Reader addrs...
    // { pw_math_Bc1619[root = 0, pw_math_Bc1617, pw_math_Bc1618] -> Bc[pw_math_Bc1618, pw_math_Bc1617] : 0 <= pw_math_Bc1617 <= 7 and 0 <= pw_math_Bc1618 <= 7 }
  // # of banks: 1
  Bc_pw_math_B1215_4_to_Bc_pw_math_Bc1619_3_cache Bc_pw_math_B1215_4_to_Bc_pw_math_Bc1619_3;
};



inline void Bc_pw_math_B1215_4_write(hw_uint<32> & Bc_pw_math_B1215_4, Bc_cache& Bc, int root, int pw_math_B1213, int pw_math_B1214, int dynamic_address) {
  Bc.Bc_pw_math_B1215_4_to_Bc_pw_math_Bc1619_3.push(Bc_pw_math_B1215_4);
}

inline hw_uint<32>  Bc_pw_math_Bc1619_3_select(Bc_cache& Bc, int root, int pw_math_Bc1617, int pw_math_Bc1618, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // Bc_pw_math_Bc1619_3 read pattern: { pw_math_Bc1619[root = 0, pw_math_Bc1617, pw_math_Bc1618] -> Bc[pw_math_Bc1618, pw_math_Bc1617] : 0 <= pw_math_Bc1617 <= 7 and 0 <= pw_math_Bc1618 <= 7 }
  // Read schedule : { pw_math_Bc1619[d0 = 0, d1, d2] -> [0, d1, d2, 10] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Write schedule: { pw_math_B1215[d0 = 0, d1, d2] -> [0, d1, d2, 9] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  auto value_Bc_pw_math_B1215_4 = Bc.Bc_pw_math_B1215_4_to_Bc_pw_math_Bc1619_3.peek(/* one reader or all rams */ 0);
  return value_Bc_pw_math_B1215_4;
  return 0;
}

// # of bundles = 2
// pw_math_B1215_write
//	Bc_pw_math_B1215_4
inline void Bc_pw_math_B1215_write_bundle_write(hw_uint<32>& pw_math_B1215_write, Bc_cache& Bc, int root, int pw_math_B1213, int pw_math_B1214, int dynamic_address) {
	hw_uint<32>  Bc_pw_math_B1215_4_res = pw_math_B1215_write.extract<0, 31>();
	Bc_pw_math_B1215_4_write(Bc_pw_math_B1215_4_res, Bc, root, pw_math_B1213, pw_math_B1214, dynamic_address);
}

// pw_math_Bc1619_read
//	Bc_pw_math_Bc1619_3
inline hw_uint<32> Bc_pw_math_Bc1619_read_bundle_read(Bc_cache& Bc, int root, int pw_math_Bc1617, int pw_math_Bc1618, int dynamic_address) {
  // # of ports in bundle: 1
    // Bc_pw_math_Bc1619_3

	hw_uint<32> result;
	hw_uint<32>  Bc_pw_math_Bc1619_3_res = Bc_pw_math_Bc1619_3_select(Bc, root, pw_math_Bc1617, pw_math_Bc1618, dynamic_address);
	set_at<0, 32>(result, Bc_pw_math_Bc1619_3_res);
	return result;
}

// Total re-use buffer capacity: 0 bits
// Operation logic
inline void load_to_A_FIFO_buf2427(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */A_to_comp20, A_FIFO_buf24_cache& A_FIFO_buf24, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: A_to_comp20
	auto A_to_comp20_A_to_comp20_ld25_c__A_to_comp20_ld26_value = A_to_comp20.read();
	// Produce: A_FIFO_buf24
	A_FIFO_buf24_load_to_A_FIFO_buf2427_write_bundle_write(/* arg names */A_to_comp20_A_to_comp20_ld25_c__A_to_comp20_ld26_value, A_FIFO_buf24, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_A47(A_FIFO_buf24_cache& A_FIFO_buf24, Ac_cache& Ac, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: A_FIFO_buf24
	auto A_FIFO_buf24_pw_math_A46_c__pw_math_A45_value = A_FIFO_buf24_pw_math_A47_read_bundle_read(A_FIFO_buf24/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = plus_one(A_FIFO_buf24_pw_math_A46_c__pw_math_A45_value);
	// Produce: Ac
	Ac_pw_math_A47_write_bundle_write(/* arg names */compute_result, Ac, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_Ac_to_ldb2831(Ac_cache& Ac, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */Ac_to_ldb28, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: Ac
	auto Ac_Ac_ld29_c__Ac_ld30_value = Ac_load_to_Ac_to_ldb2831_read_bundle_read(Ac/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: Ac_to_ldb28
	Ac_to_ldb28.write(Ac_Ac_ld29_c__Ac_ld30_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_B_FIFO_buf4043(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */B_to_comp36, B_FIFO_buf40_cache& B_FIFO_buf40, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: B_to_comp36
	auto B_to_comp36_B_to_comp36_ld41_c__B_to_comp36_ld42_value = B_to_comp36.read();
	// Produce: B_FIFO_buf40
	B_FIFO_buf40_load_to_B_FIFO_buf4043_write_bundle_write(/* arg names */B_to_comp36_B_to_comp36_ld41_c__B_to_comp36_ld42_value, B_FIFO_buf40, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_B1215(B_FIFO_buf40_cache& B_FIFO_buf40, Bc_cache& Bc, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: B_FIFO_buf40
	auto B_FIFO_buf40_pw_math_B1214_c__pw_math_B1213_value = B_FIFO_buf40_pw_math_B1215_read_bundle_read(B_FIFO_buf40/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = plus_one(B_FIFO_buf40_pw_math_B1214_c__pw_math_B1213_value);
	// Produce: Bc
	Bc_pw_math_B1215_write_bundle_write(/* arg names */compute_result, Bc, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_Bc1619(Bc_cache& Bc, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */out, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: Bc
	auto Bc_pw_math_Bc1618_c__pw_math_Bc1617_value = Bc_pw_math_Bc1619_read_bundle_read(Bc/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id(Bc_pw_math_Bc1618_c__pw_math_Bc1617_value);
	// Produce: out
	out.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_A_to_comp20_ld26_Ac_ld30_B_to_comp36_ld42_pw_math_A45_pw_math_B1213_pw_math_Bc1617_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */A_to_comp20, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */B_to_comp36, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */Ac_to_ldb28, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_A_to_comp20_ld26_Ac_ld30_B_to_comp36_ld42_pw_math_A45_pw_math_B1213_pw_math_Bc1617__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  A_FIFO_buf24_cache A_FIFO_buf24;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  Ac_cache Ac;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  B_FIFO_buf40_cache B_FIFO_buf40;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  Bc_cache Bc;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_Ac_to_ldb2831[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 7 and 0 <= d2 <= 7; pw_math_Bc1619[d0 = 0, d1, d2] -> [0, d1, d2, 10] : 0 <= d1 <= 7 and 0 <= d2 <= 7; pw_math_A47[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 7 and 0 <= d2 <= 7; load_to_B_FIFO_buf4043[d0 = 0, d1, d2] -> [0, d1, d2, 8] : 0 <= d1 <= 7 and 0 <= d2 <= 7; pw_math_B1215[d0 = 0, d1, d2] -> [0, d1, d2, 9] : 0 <= d1 <= 7 and 0 <= d2 <= 7; load_to_A_FIFO_buf2427[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
//   { load_to_Ac_to_ldb2831[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
// Condition for load_to_Ac_to_ldb2831(((((-4 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((7 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((7 + -1*i2)) >= 0)))
//   { pw_math_Bc1619[d0 = 0, d1, d2] -> [0, d1, d2, 10] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
// Condition for pw_math_Bc1619(((((-10 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((7 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((7 + -1*i2)) >= 0)))
//   { pw_math_A47[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
// Condition for pw_math_A47(((((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((7 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((7 + -1*i2)) >= 0)))
//   { load_to_B_FIFO_buf4043[d0 = 0, d1, d2] -> [0, d1, d2, 8] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
// Condition for load_to_B_FIFO_buf4043(((((-8 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((7 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((7 + -1*i2)) >= 0)))
//   { pw_math_B1215[d0 = 0, d1, d2] -> [0, d1, d2, 9] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
// Condition for pw_math_B1215(((((-9 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((7 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((7 + -1*i2)) >= 0)))
//   { load_to_A_FIFO_buf2427[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
// Condition for load_to_A_FIFO_buf2427(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((7 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((7 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 0 <= i1 <= 7 and 0 <= i2 <= 7 and 2 <= i3 <= 10 and (i3 >= 8 or i3 <= 4) }
	// # sets: 1
	  int current_stmt = 0;int i0 = 0;
	  int i1 = 0;
	  while (i1 <= 7) {
	    int i2 = 0;
	    while (i2 <= 7) {
	#pragma HLS pipeline II=1
	    if (current_stmt == 6) { current_stmt = 0; }
	
	        if (current_stmt == 0 && !(true)) {
	          current_stmt++;
	        } else if (current_stmt == 0 && (true && !(A_to_comp20.is_empty())) && (true)) {
	          load_to_A_FIFO_buf2427(A_to_comp20 /* buf name */, A_FIFO_buf24, 0, ((1*i1)), ((1*i2)));
	          current_stmt++;
	        }
	        if (current_stmt == 1 && !(true)) {
	          current_stmt++;
	        } else if (current_stmt == 1 && (true) && (true)) {
	          pw_math_A47(A_FIFO_buf24 /* buf name */, Ac, 0, ((1*i1)), ((1*i2)));
	          current_stmt++;
	        }
	        if (current_stmt == 2 && !(true)) {
	          current_stmt++;
	        } else if (current_stmt == 2 && (true) && (true)) {
	          load_to_Ac_to_ldb2831(Ac /* buf name */, Ac_to_ldb28, 0, ((1*i1)), ((1*i2)));
	          current_stmt++;
	        }
	        if (current_stmt == 3 && !(true)) {
	          current_stmt++;
	        } else if (current_stmt == 3 && (true && !(B_to_comp36.is_empty())) && (true)) {
	          load_to_B_FIFO_buf4043(B_to_comp36 /* buf name */, B_FIFO_buf40, 0, ((1*i1)), ((1*i2)));
	          current_stmt++;
	        }
	        if (current_stmt == 4 && !(true)) {
	          current_stmt++;
	        } else if (current_stmt == 4 && (true) && (true)) {
	          pw_math_B1215(B_FIFO_buf40 /* buf name */, Bc, 0, ((1*i1)), ((1*i2)));
	          current_stmt++;
	        }
	        if (current_stmt == 5 && !(true)) {
	          current_stmt++;
	        } else if (current_stmt == 5 && (true) && (true)) {
	          pw_math_Bc1619(Bc /* buf name */, out, 0, ((1*i1)), ((1*i2)));
	          current_stmt++;
	        }
	      i2 = current_stmt == 6 ? i2 + 1 : i2;
	    }
	    i1 = current_stmt == 6 ? i1 + 1 : i1;
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void pw_math_in03(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in, A_cache& A, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in
	auto in_pw_math_in02_c__pw_math_in01_value = in.read();
	auto compute_result = id(in_pw_math_in02_c__pw_math_in01_value);
	// Produce: A
	A_pw_math_in03_write_bundle_write(/* arg names */compute_result, A, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_A_to_comp2023(A_cache& A, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */A_to_comp20, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: A
	auto A_A_ld21_c__A_ld22_value = A_load_to_A_to_comp2023_read_bundle_read(A/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: A_to_comp20
	A_to_comp20.write(A_A_ld21_c__A_ld22_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_A_ld22_pw_math_in01_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */A_to_comp20) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_A_ld22_pw_math_in01__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  A_cache A;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_A_to_comp2023[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 7 and 0 <= d2 <= 7; pw_math_in03[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
//   { load_to_A_to_comp2023[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
// Condition for load_to_A_to_comp2023(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((7 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((7 + -1*i2)) >= 0)))
//   { pw_math_in03[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
// Condition for pw_math_in03(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((7 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((7 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 0 <= i1 <= 7 and 0 <= i2 <= 7 and 0 <= i3 <= 1 }
	// # sets: 1
	  int current_stmt = 0;int i0 = 0;
	  int i1 = 0;
	  while (i1 <= 7) {
	    int i2 = 0;
	    while (i2 <= 7) {
	#pragma HLS pipeline II=1
	    if (current_stmt == 2) { current_stmt = 0; }
	
	        if (current_stmt == 0 && !(true)) {
	          current_stmt++;
	        } else if (current_stmt == 0 && (true && !(in.is_empty())) && (true)) {
	          pw_math_in03(in /* buf name */, A, 0, ((1*i1)), ((1*i2)));
	          current_stmt++;
	        }
	        if (current_stmt == 1 && !(true)) {
	          current_stmt++;
	        } else if (current_stmt == 1 && (true) && (true)) {
	          load_to_A_to_comp2023(A /* buf name */, A_to_comp20, 0, ((1*i1)), ((1*i2)));
	          current_stmt++;
	        }
	      i2 = current_stmt == 2 ? i2 + 1 : i2;
	    }
	    i1 = current_stmt == 2 ? i1 + 1 : i1;
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_Ac_FIFO_buf3235(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */Ac_to_ldb28, Ac_FIFO_buf32_cache& Ac_FIFO_buf32, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: Ac_to_ldb28
	auto Ac_to_ldb28_Ac_to_ldb28_ld33_c__Ac_to_ldb28_ld34_value = Ac_to_ldb28.read();
	// Produce: Ac_FIFO_buf32
	Ac_FIFO_buf32_load_to_Ac_FIFO_buf3235_write_bundle_write(/* arg names */Ac_to_ldb28_Ac_to_ldb28_ld33_c__Ac_to_ldb28_ld34_value, Ac_FIFO_buf32, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_Ac811(Ac_FIFO_buf32_cache& Ac_FIFO_buf32, B_cache& B, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: Ac_FIFO_buf32
	auto Ac_FIFO_buf32_pw_math_Ac810_c__pw_math_Ac89_value = Ac_FIFO_buf32_pw_math_Ac811_read_bundle_read(Ac_FIFO_buf32/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id(Ac_FIFO_buf32_pw_math_Ac810_c__pw_math_Ac89_value);
	// Produce: B
	B_pw_math_Ac811_write_bundle_write(/* arg names */compute_result, B, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_B_to_comp3639(B_cache& B, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */B_to_comp36, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: B
	auto B_B_ld37_c__B_ld38_value = B_load_to_B_to_comp3639_read_bundle_read(B/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: B_to_comp36
	B_to_comp36.write(B_B_ld37_c__B_ld38_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_Ac_to_ldb28_ld34_B_ld38_pw_math_Ac89_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */Ac_to_ldb28, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */B_to_comp36) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_Ac_to_ldb28_ld34_B_ld38_pw_math_Ac89__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  Ac_FIFO_buf32_cache Ac_FIFO_buf32;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  B_cache B;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_B_to_comp3639[d0 = 0, d1, d2] -> [0, d1, d2, 7] : 0 <= d1 <= 7 and 0 <= d2 <= 7; load_to_Ac_FIFO_buf3235[d0 = 0, d1, d2] -> [0, d1, d2, 5] : 0 <= d1 <= 7 and 0 <= d2 <= 7; pw_math_Ac811[d0 = 0, d1, d2] -> [0, d1, d2, 6] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
//   { load_to_B_to_comp3639[d0 = 0, d1, d2] -> [0, d1, d2, 7] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
// Condition for load_to_B_to_comp3639(((((-7 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((7 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((7 + -1*i2)) >= 0)))
//   { load_to_Ac_FIFO_buf3235[d0 = 0, d1, d2] -> [0, d1, d2, 5] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
// Condition for load_to_Ac_FIFO_buf3235(((((-5 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((7 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((7 + -1*i2)) >= 0)))
//   { pw_math_Ac811[d0 = 0, d1, d2] -> [0, d1, d2, 6] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
// Condition for pw_math_Ac811(((((-6 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((7 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((7 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 0 <= i1 <= 7 and 0 <= i2 <= 7 and 5 <= i3 <= 7 }
	// # sets: 1
	  int current_stmt = 0;int i0 = 0;
	  int i1 = 0;
	  while (i1 <= 7) {
	    int i2 = 0;
	    while (i2 <= 7) {
	#pragma HLS pipeline II=1
	    if (current_stmt == 3) { current_stmt = 0; }
	
	        if (current_stmt == 0 && !(true)) {
	          current_stmt++;
	        } else if (current_stmt == 0 && (true && !(Ac_to_ldb28.is_empty())) && (true)) {
	          load_to_Ac_FIFO_buf3235(Ac_to_ldb28 /* buf name */, Ac_FIFO_buf32, 0, ((1*i1)), ((1*i2)));
	          current_stmt++;
	        }
	        if (current_stmt == 1 && !(true)) {
	          current_stmt++;
	        } else if (current_stmt == 1 && (true) && (true)) {
	          pw_math_Ac811(Ac_FIFO_buf32 /* buf name */, B, 0, ((1*i1)), ((1*i2)));
	          current_stmt++;
	        }
	        if (current_stmt == 2 && !(true)) {
	          current_stmt++;
	        } else if (current_stmt == 2 && (true) && (true)) {
	          load_to_B_to_comp3639(B /* buf name */, B_to_comp36, 0, ((1*i1)), ((1*i2)));
	          current_stmt++;
	        }
	      i2 = current_stmt == 3 ? i2 + 1 : i2;
	    }
	    i1 = current_stmt == 3 ? i1 + 1 : i1;
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Driver function
void cpy_resource2_s(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("cpy_resource2_s_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__

#ifdef __VIVADO_SYNTH__
#pragma HLS dataflow
#endif //__VIVADO_SYNTH__

  // channel width: 1
  // port width   : 32
  // dag size     : 250
// Bits to slack match A_to_comp20 = 8000
// Bits to slack match A_to_comp20 = 8000
  // channel width: 1
  // port width   : 32
  // dag size     : 250
// Bits to slack match Ac_to_ldb28 = 8000
// Bits to slack match Ac_to_ldb28 = 8000
  // channel width: 1
  // port width   : 32
  // dag size     : 250
// Bits to slack match B_to_comp36 = 8000
// Bits to slack match B_to_comp36 = 8000
// Bits in internal re-use buffers               : 0 bits
// Bits in channels needed to guarantee causality: 0
// Bits in channels needed to match slack        : 24000
  HWStream< hw_uint<32> > A_to_comp20;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=A_to_comp20.values depth=250
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > B_to_comp36;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=B_to_comp36.values depth=250
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > Ac_to_ldb28;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=Ac_to_ldb28.values depth=250
#endif //__VIVADO_SYNTH__


  Extracted_A_to_comp20_ld26_Ac_ld30_B_to_comp36_ld42_pw_math_A45_pw_math_B1213_pw_math_Bc1617_(A_to_comp20, B_to_comp36, Ac_to_ldb28, out);
  Extracted_A_ld22_pw_math_in01_(in, A_to_comp20);
  Extracted_Ac_to_ldb28_ld34_B_ld38_pw_math_Ac89_(Ac_to_ldb28, B_to_comp36);

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void cpy_resource2_s_wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    cpy_resource2_s(in, out);
  }
}
#ifdef __VIVADO_SYNTH__
  // { pw_math_in03[root = 0, pw_math_in01, pw_math_in02] -> in[pw_math_in02, pw_math_in01] : 0 <= pw_math_in01 <= 7 and 0 <= pw_math_in02 <= 7 }
const int pw_math_in03_read_pipe0_num_transfers = 64;
  // { pw_math_Bc1619[root = 0, pw_math_Bc1617, pw_math_Bc1618] -> out[pw_math_Bc1618, pw_math_Bc1617] : 0 <= pw_math_Bc1617 <= 7 and 0 <= pw_math_Bc1618 <= 7 }
const int pw_math_Bc1619_write_pipe0_num_transfers = 64;


extern "C" {

void cpy_resource2_s_accel(hw_uint<32>* pw_math_in03_read_pipe0, hw_uint<32>* pw_math_Bc1619_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = pw_math_in03_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = pw_math_Bc1619_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = pw_math_in03_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = pw_math_Bc1619_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<32> > pw_math_in03_read_pipe0_channel;
  static HWStream<hw_uint<32> > pw_math_Bc1619_write_pipe0_channel;

  burst_read<32>(pw_math_in03_read_pipe0, pw_math_in03_read_pipe0_channel, pw_math_in03_read_pipe0_num_transfers*size);

  cpy_resource2_s_wrapper(pw_math_in03_read_pipe0_channel, pw_math_Bc1619_write_pipe0_channel, size);

  burst_write<32>(pw_math_Bc1619_write_pipe0, pw_math_Bc1619_write_pipe0_channel, pw_math_Bc1619_write_pipe0_num_transfers*size);
}

}
extern "C" {

void cpy_resource2_s_rdai(HWStream<hw_uint<32> >& pw_math_in03_read_pipe0, HWStream<hw_uint<32> >&  pw_math_Bc1619_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = pw_math_in03_read_pipe0
#pragma HLS INTERFACE axis register port = pw_math_Bc1619_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  cpy_resource2_s(pw_math_in03_read_pipe0, pw_math_Bc1619_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

