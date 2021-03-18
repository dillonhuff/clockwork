#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: jac9_1_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h
#include "jac9_1_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

struct in_in_update_0_sm0_041_77_merged_banks_4_cache {
	// RAM Box: {[0, 1949], [0, 1093]}
	// Capacity: 1953
	// # of read delays: 5
  // 0, 1, 1950, 1951, 1952
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1948> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1949() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1950() {
		return f4;
	}

	inline hw_uint<16> peek_1951() {
		return f6;
	}

	inline hw_uint<16> peek_1952() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1948
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1948 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_cache {
  // Reader addrs...
    // { stg0_update_0_sm1_027[root = 0, stg0_0, stg0_1] -> in[stg0_1, stg0_0] : 0 <= stg0_0 <= 1093 and 0 <= stg0_1 <= 1947 }
    // { stg0_update_0_sm1_027[root = 0, stg0_0, stg0_1] -> in[1 + stg0_1, stg0_0] : 0 <= stg0_0 <= 1093 and 0 <= stg0_1 <= 1947 }
    // { stg0_update_0_sm1_027[root = 0, stg0_0, stg0_1] -> in[1 + stg0_1, 1 + stg0_0] : 0 <= stg0_0 <= 1093 and 0 <= stg0_1 <= 1947 }
    // { stg0_update_0_sm1_027[root = 0, stg0_0, stg0_1] -> in[2 + stg0_1, stg0_0] : 0 <= stg0_0 <= 1093 and 0 <= stg0_1 <= 1947 }
  // # of banks: 1
  in_in_update_0_sm0_041_77_merged_banks_4_cache in_in_update_0_sm0_041_77_merged_banks_4;
};



inline void in_in_update_0_sm0_041_77_write(hw_uint<16>& in_in_update_0_sm0_041_77, in_cache& in, int root, int in_0, int in_1, int dynamic_address) {
  in.in_in_update_0_sm0_041_77_merged_banks_4.push(in_in_update_0_sm0_041_77);
}

inline hw_uint<16> in_stg0_update_0_sm1_027_71_select(in_cache& in, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stg0_update_0_sm1_027_71 read pattern: { stg0_update_0_sm1_027[root = 0, stg0_0, stg0_1] -> in[stg0_1, stg0_0] : 0 <= stg0_0 <= 1093 and 0 <= stg0_1 <= 1947 }
  // Read schedule : { stg0_update_0_sm1_027[d0 = 0, d1, d2] -> [0, 1 + d1, 2 + d2, 1] : 0 <= d1 <= 1093 and 0 <= d2 <= 1947 }
  // Write schedule: { in_update_0_sm0_041[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1094 and 0 <= d2 <= 1949 }
  auto value_in_in_update_0_sm0_041_77 = in.in_in_update_0_sm0_041_77_merged_banks_4.peek_1952();
  return value_in_in_update_0_sm0_041_77;
  return 0;
}

inline hw_uint<16> in_stg0_update_0_sm1_027_72_select(in_cache& in, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stg0_update_0_sm1_027_72 read pattern: { stg0_update_0_sm1_027[root = 0, stg0_0, stg0_1] -> in[1 + stg0_1, stg0_0] : 0 <= stg0_0 <= 1093 and 0 <= stg0_1 <= 1947 }
  // Read schedule : { stg0_update_0_sm1_027[d0 = 0, d1, d2] -> [0, 1 + d1, 2 + d2, 1] : 0 <= d1 <= 1093 and 0 <= d2 <= 1947 }
  // Write schedule: { in_update_0_sm0_041[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1094 and 0 <= d2 <= 1949 }
  auto value_in_in_update_0_sm0_041_77 = in.in_in_update_0_sm0_041_77_merged_banks_4.peek_1951();
  return value_in_in_update_0_sm0_041_77;
  return 0;
}

inline hw_uint<16> in_stg0_update_0_sm1_027_73_select(in_cache& in, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stg0_update_0_sm1_027_73 read pattern: { stg0_update_0_sm1_027[root = 0, stg0_0, stg0_1] -> in[1 + stg0_1, 1 + stg0_0] : 0 <= stg0_0 <= 1093 and 0 <= stg0_1 <= 1947 }
  // Read schedule : { stg0_update_0_sm1_027[d0 = 0, d1, d2] -> [0, 1 + d1, 2 + d2, 1] : 0 <= d1 <= 1093 and 0 <= d2 <= 1947 }
  // Write schedule: { in_update_0_sm0_041[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1094 and 0 <= d2 <= 1949 }
  auto value_in_in_update_0_sm0_041_77 = in.in_in_update_0_sm0_041_77_merged_banks_4.peek_1();
  return value_in_in_update_0_sm0_041_77;
  return 0;
}

inline hw_uint<16> in_stg0_update_0_sm1_027_74_select(in_cache& in, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stg0_update_0_sm1_027_74 read pattern: { stg0_update_0_sm1_027[root = 0, stg0_0, stg0_1] -> in[2 + stg0_1, stg0_0] : 0 <= stg0_0 <= 1093 and 0 <= stg0_1 <= 1947 }
  // Read schedule : { stg0_update_0_sm1_027[d0 = 0, d1, d2] -> [0, 1 + d1, 2 + d2, 1] : 0 <= d1 <= 1093 and 0 <= d2 <= 1947 }
  // Write schedule: { in_update_0_sm0_041[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1094 and 0 <= d2 <= 1949 }
  auto value_in_in_update_0_sm0_041_77 = in.in_in_update_0_sm0_041_77_merged_banks_4.peek_1950();
  return value_in_in_update_0_sm0_041_77;
  return 0;
}

// # of bundles = 2
// in_update_0_sm0_041_write
//	in_in_update_0_sm0_041_77
inline void in_in_update_0_sm0_041_write_bundle_write(hw_uint<16>& in_update_0_sm0_041_write, in_cache& in, int root, int in_0, int in_1, int dynamic_address) {
	hw_uint<16> in_in_update_0_sm0_041_77_res = in_update_0_sm0_041_write.extract<0, 15>();
	in_in_update_0_sm0_041_77_write(in_in_update_0_sm0_041_77_res, in, root, in_0, in_1, dynamic_address);
}

// stg0_update_0_sm1_027_read
//	in_stg0_update_0_sm1_027_71
//	in_stg0_update_0_sm1_027_72
//	in_stg0_update_0_sm1_027_73
//	in_stg0_update_0_sm1_027_74
inline hw_uint<64> in_stg0_update_0_sm1_027_read_bundle_read(in_cache& in, int root, int stg0_0, int stg0_1, int dynamic_address) {
  // # of ports in bundle: 4
    // in_stg0_update_0_sm1_027_71
    // in_stg0_update_0_sm1_027_72
    // in_stg0_update_0_sm1_027_73
    // in_stg0_update_0_sm1_027_74

	hw_uint<64> result;
	hw_uint<16> in_stg0_update_0_sm1_027_71_res = in_stg0_update_0_sm1_027_71_select(in, root, stg0_0, stg0_1, dynamic_address);
	set_at<0, 64>(result, in_stg0_update_0_sm1_027_71_res);
	hw_uint<16> in_stg0_update_0_sm1_027_72_res = in_stg0_update_0_sm1_027_72_select(in, root, stg0_0, stg0_1, dynamic_address);
	set_at<16, 64>(result, in_stg0_update_0_sm1_027_72_res);
	hw_uint<16> in_stg0_update_0_sm1_027_73_res = in_stg0_update_0_sm1_027_73_select(in, root, stg0_0, stg0_1, dynamic_address);
	set_at<32, 64>(result, in_stg0_update_0_sm1_027_73_res);
	hw_uint<16> in_stg0_update_0_sm1_027_74_res = in_stg0_update_0_sm1_027_74_select(in, root, stg0_0, stg0_1, dynamic_address);
	set_at<48, 64>(result, in_stg0_update_0_sm1_027_74_res);
	return result;
}

struct stg0_stg0_update_0_sm1_027_70_merged_banks_4_cache {
	// RAM Box: {[0, 1947], [0, 1092]}
	// Capacity: 1951
	// # of read delays: 5
  // 0, 1, 1948, 1949, 1950
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1946> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1947() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1948() {
		return f4;
	}

	inline hw_uint<16> peek_1949() {
		return f6;
	}

	inline hw_uint<16> peek_1950() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1946
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1946 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg0_cache {
  // Reader addrs...
    // { stg1_update_0_sm2_045[root = 0, stg1_0, stg1_1] -> stg0[stg1_1, stg1_0] : 0 <= stg1_0 <= 1092 and 0 <= stg1_1 <= 1945 }
    // { stg1_update_0_sm2_045[root = 0, stg1_0, stg1_1] -> stg0[1 + stg1_1, stg1_0] : 0 <= stg1_0 <= 1092 and 0 <= stg1_1 <= 1945 }
    // { stg1_update_0_sm2_045[root = 0, stg1_0, stg1_1] -> stg0[1 + stg1_1, 1 + stg1_0] : 0 <= stg1_0 <= 1092 and 0 <= stg1_1 <= 1945 }
    // { stg1_update_0_sm2_045[root = 0, stg1_0, stg1_1] -> stg0[2 + stg1_1, stg1_0] : 0 <= stg1_0 <= 1092 and 0 <= stg1_1 <= 1945 }
  // # of banks: 1
  stg0_stg0_update_0_sm1_027_70_merged_banks_4_cache stg0_stg0_update_0_sm1_027_70_merged_banks_4;
};



inline void stg0_stg0_update_0_sm1_027_70_write(hw_uint<16>& stg0_stg0_update_0_sm1_027_70, stg0_cache& stg0, int root, int stg0_0, int stg0_1, int dynamic_address) {
  stg0.stg0_stg0_update_0_sm1_027_70_merged_banks_4.push(stg0_stg0_update_0_sm1_027_70);
}

inline hw_uint<16> stg0_stg1_update_0_sm2_045_41_select(stg0_cache& stg0, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_stg1_update_0_sm2_045_41 read pattern: { stg1_update_0_sm2_045[root = 0, stg1_0, stg1_1] -> stg0[stg1_1, stg1_0] : 0 <= stg1_0 <= 1092 and 0 <= stg1_1 <= 1945 }
  // Read schedule : { stg1_update_0_sm2_045[d0 = 0, d1, d2] -> [0, 2 + d1, 4 + d2, 2] : 0 <= d1 <= 1092 and 0 <= d2 <= 1945 }
  // Write schedule: { stg0_update_0_sm1_027[d0 = 0, d1, d2] -> [0, 1 + d1, 2 + d2, 1] : 0 <= d1 <= 1093 and 0 <= d2 <= 1947 }
  auto value_stg0_stg0_update_0_sm1_027_70 = stg0.stg0_stg0_update_0_sm1_027_70_merged_banks_4.peek_1950();
  return value_stg0_stg0_update_0_sm1_027_70;
  return 0;
}

inline hw_uint<16> stg0_stg1_update_0_sm2_045_42_select(stg0_cache& stg0, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_stg1_update_0_sm2_045_42 read pattern: { stg1_update_0_sm2_045[root = 0, stg1_0, stg1_1] -> stg0[1 + stg1_1, stg1_0] : 0 <= stg1_0 <= 1092 and 0 <= stg1_1 <= 1945 }
  // Read schedule : { stg1_update_0_sm2_045[d0 = 0, d1, d2] -> [0, 2 + d1, 4 + d2, 2] : 0 <= d1 <= 1092 and 0 <= d2 <= 1945 }
  // Write schedule: { stg0_update_0_sm1_027[d0 = 0, d1, d2] -> [0, 1 + d1, 2 + d2, 1] : 0 <= d1 <= 1093 and 0 <= d2 <= 1947 }
  auto value_stg0_stg0_update_0_sm1_027_70 = stg0.stg0_stg0_update_0_sm1_027_70_merged_banks_4.peek_1949();
  return value_stg0_stg0_update_0_sm1_027_70;
  return 0;
}

inline hw_uint<16> stg0_stg1_update_0_sm2_045_43_select(stg0_cache& stg0, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_stg1_update_0_sm2_045_43 read pattern: { stg1_update_0_sm2_045[root = 0, stg1_0, stg1_1] -> stg0[1 + stg1_1, 1 + stg1_0] : 0 <= stg1_0 <= 1092 and 0 <= stg1_1 <= 1945 }
  // Read schedule : { stg1_update_0_sm2_045[d0 = 0, d1, d2] -> [0, 2 + d1, 4 + d2, 2] : 0 <= d1 <= 1092 and 0 <= d2 <= 1945 }
  // Write schedule: { stg0_update_0_sm1_027[d0 = 0, d1, d2] -> [0, 1 + d1, 2 + d2, 1] : 0 <= d1 <= 1093 and 0 <= d2 <= 1947 }
  auto value_stg0_stg0_update_0_sm1_027_70 = stg0.stg0_stg0_update_0_sm1_027_70_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_sm1_027_70;
  return 0;
}

inline hw_uint<16> stg0_stg1_update_0_sm2_045_44_select(stg0_cache& stg0, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_stg1_update_0_sm2_045_44 read pattern: { stg1_update_0_sm2_045[root = 0, stg1_0, stg1_1] -> stg0[2 + stg1_1, stg1_0] : 0 <= stg1_0 <= 1092 and 0 <= stg1_1 <= 1945 }
  // Read schedule : { stg1_update_0_sm2_045[d0 = 0, d1, d2] -> [0, 2 + d1, 4 + d2, 2] : 0 <= d1 <= 1092 and 0 <= d2 <= 1945 }
  // Write schedule: { stg0_update_0_sm1_027[d0 = 0, d1, d2] -> [0, 1 + d1, 2 + d2, 1] : 0 <= d1 <= 1093 and 0 <= d2 <= 1947 }
  auto value_stg0_stg0_update_0_sm1_027_70 = stg0.stg0_stg0_update_0_sm1_027_70_merged_banks_4.peek_1948();
  return value_stg0_stg0_update_0_sm1_027_70;
  return 0;
}

// # of bundles = 2
// stg0_update_0_sm1_027_write
//	stg0_stg0_update_0_sm1_027_70
inline void stg0_stg0_update_0_sm1_027_write_bundle_write(hw_uint<16>& stg0_update_0_sm1_027_write, stg0_cache& stg0, int root, int stg0_0, int stg0_1, int dynamic_address) {
	hw_uint<16> stg0_stg0_update_0_sm1_027_70_res = stg0_update_0_sm1_027_write.extract<0, 15>();
	stg0_stg0_update_0_sm1_027_70_write(stg0_stg0_update_0_sm1_027_70_res, stg0, root, stg0_0, stg0_1, dynamic_address);
}

// stg1_update_0_sm2_045_read
//	stg0_stg1_update_0_sm2_045_41
//	stg0_stg1_update_0_sm2_045_42
//	stg0_stg1_update_0_sm2_045_43
//	stg0_stg1_update_0_sm2_045_44
inline hw_uint<64> stg0_stg1_update_0_sm2_045_read_bundle_read(stg0_cache& stg0, int root, int stg1_0, int stg1_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg0_stg1_update_0_sm2_045_41
    // stg0_stg1_update_0_sm2_045_42
    // stg0_stg1_update_0_sm2_045_43
    // stg0_stg1_update_0_sm2_045_44

	hw_uint<64> result;
	hw_uint<16> stg0_stg1_update_0_sm2_045_41_res = stg0_stg1_update_0_sm2_045_41_select(stg0, root, stg1_0, stg1_1, dynamic_address);
	set_at<0, 64>(result, stg0_stg1_update_0_sm2_045_41_res);
	hw_uint<16> stg0_stg1_update_0_sm2_045_42_res = stg0_stg1_update_0_sm2_045_42_select(stg0, root, stg1_0, stg1_1, dynamic_address);
	set_at<16, 64>(result, stg0_stg1_update_0_sm2_045_42_res);
	hw_uint<16> stg0_stg1_update_0_sm2_045_43_res = stg0_stg1_update_0_sm2_045_43_select(stg0, root, stg1_0, stg1_1, dynamic_address);
	set_at<32, 64>(result, stg0_stg1_update_0_sm2_045_43_res);
	hw_uint<16> stg0_stg1_update_0_sm2_045_44_res = stg0_stg1_update_0_sm2_045_44_select(stg0, root, stg1_0, stg1_1, dynamic_address);
	set_at<48, 64>(result, stg0_stg1_update_0_sm2_045_44_res);
	return result;
}

struct stg1_stg1_update_0_sm2_045_40_merged_banks_4_cache {
	// RAM Box: {[0, 1945], [0, 1091]}
	// Capacity: 1949
	// # of read delays: 5
  // 0, 1, 1946, 1947, 1948
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1944> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1945() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1946() {
		return f4;
	}

	inline hw_uint<16> peek_1947() {
		return f6;
	}

	inline hw_uint<16> peek_1948() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1944
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1944 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg1_cache {
  // Reader addrs...
    // { stg2_update_0_sm3_047[root = 0, stg2_0, stg2_1] -> stg1[stg2_1, stg2_0] : 0 <= stg2_0 <= 1091 and 0 <= stg2_1 <= 1943 }
    // { stg2_update_0_sm3_047[root = 0, stg2_0, stg2_1] -> stg1[1 + stg2_1, stg2_0] : 0 <= stg2_0 <= 1091 and 0 <= stg2_1 <= 1943 }
    // { stg2_update_0_sm3_047[root = 0, stg2_0, stg2_1] -> stg1[1 + stg2_1, 1 + stg2_0] : 0 <= stg2_0 <= 1091 and 0 <= stg2_1 <= 1943 }
    // { stg2_update_0_sm3_047[root = 0, stg2_0, stg2_1] -> stg1[2 + stg2_1, stg2_0] : 0 <= stg2_0 <= 1091 and 0 <= stg2_1 <= 1943 }
  // # of banks: 1
  stg1_stg1_update_0_sm2_045_40_merged_banks_4_cache stg1_stg1_update_0_sm2_045_40_merged_banks_4;
};



inline void stg1_stg1_update_0_sm2_045_40_write(hw_uint<16>& stg1_stg1_update_0_sm2_045_40, stg1_cache& stg1, int root, int stg1_0, int stg1_1, int dynamic_address) {
  stg1.stg1_stg1_update_0_sm2_045_40_merged_banks_4.push(stg1_stg1_update_0_sm2_045_40);
}

inline hw_uint<16> stg1_stg2_update_0_sm3_047_36_select(stg1_cache& stg1, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_stg2_update_0_sm3_047_36 read pattern: { stg2_update_0_sm3_047[root = 0, stg2_0, stg2_1] -> stg1[stg2_1, stg2_0] : 0 <= stg2_0 <= 1091 and 0 <= stg2_1 <= 1943 }
  // Read schedule : { stg2_update_0_sm3_047[d0 = 0, d1, d2] -> [0, 3 + d1, 6 + d2, 3] : 0 <= d1 <= 1091 and 0 <= d2 <= 1943 }
  // Write schedule: { stg1_update_0_sm2_045[d0 = 0, d1, d2] -> [0, 2 + d1, 4 + d2, 2] : 0 <= d1 <= 1092 and 0 <= d2 <= 1945 }
  auto value_stg1_stg1_update_0_sm2_045_40 = stg1.stg1_stg1_update_0_sm2_045_40_merged_banks_4.peek_1948();
  return value_stg1_stg1_update_0_sm2_045_40;
  return 0;
}

inline hw_uint<16> stg1_stg2_update_0_sm3_047_37_select(stg1_cache& stg1, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_stg2_update_0_sm3_047_37 read pattern: { stg2_update_0_sm3_047[root = 0, stg2_0, stg2_1] -> stg1[1 + stg2_1, stg2_0] : 0 <= stg2_0 <= 1091 and 0 <= stg2_1 <= 1943 }
  // Read schedule : { stg2_update_0_sm3_047[d0 = 0, d1, d2] -> [0, 3 + d1, 6 + d2, 3] : 0 <= d1 <= 1091 and 0 <= d2 <= 1943 }
  // Write schedule: { stg1_update_0_sm2_045[d0 = 0, d1, d2] -> [0, 2 + d1, 4 + d2, 2] : 0 <= d1 <= 1092 and 0 <= d2 <= 1945 }
  auto value_stg1_stg1_update_0_sm2_045_40 = stg1.stg1_stg1_update_0_sm2_045_40_merged_banks_4.peek_1947();
  return value_stg1_stg1_update_0_sm2_045_40;
  return 0;
}

inline hw_uint<16> stg1_stg2_update_0_sm3_047_38_select(stg1_cache& stg1, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_stg2_update_0_sm3_047_38 read pattern: { stg2_update_0_sm3_047[root = 0, stg2_0, stg2_1] -> stg1[1 + stg2_1, 1 + stg2_0] : 0 <= stg2_0 <= 1091 and 0 <= stg2_1 <= 1943 }
  // Read schedule : { stg2_update_0_sm3_047[d0 = 0, d1, d2] -> [0, 3 + d1, 6 + d2, 3] : 0 <= d1 <= 1091 and 0 <= d2 <= 1943 }
  // Write schedule: { stg1_update_0_sm2_045[d0 = 0, d1, d2] -> [0, 2 + d1, 4 + d2, 2] : 0 <= d1 <= 1092 and 0 <= d2 <= 1945 }
  auto value_stg1_stg1_update_0_sm2_045_40 = stg1.stg1_stg1_update_0_sm2_045_40_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_sm2_045_40;
  return 0;
}

inline hw_uint<16> stg1_stg2_update_0_sm3_047_39_select(stg1_cache& stg1, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_stg2_update_0_sm3_047_39 read pattern: { stg2_update_0_sm3_047[root = 0, stg2_0, stg2_1] -> stg1[2 + stg2_1, stg2_0] : 0 <= stg2_0 <= 1091 and 0 <= stg2_1 <= 1943 }
  // Read schedule : { stg2_update_0_sm3_047[d0 = 0, d1, d2] -> [0, 3 + d1, 6 + d2, 3] : 0 <= d1 <= 1091 and 0 <= d2 <= 1943 }
  // Write schedule: { stg1_update_0_sm2_045[d0 = 0, d1, d2] -> [0, 2 + d1, 4 + d2, 2] : 0 <= d1 <= 1092 and 0 <= d2 <= 1945 }
  auto value_stg1_stg1_update_0_sm2_045_40 = stg1.stg1_stg1_update_0_sm2_045_40_merged_banks_4.peek_1946();
  return value_stg1_stg1_update_0_sm2_045_40;
  return 0;
}

// # of bundles = 2
// stg1_update_0_sm2_045_write
//	stg1_stg1_update_0_sm2_045_40
inline void stg1_stg1_update_0_sm2_045_write_bundle_write(hw_uint<16>& stg1_update_0_sm2_045_write, stg1_cache& stg1, int root, int stg1_0, int stg1_1, int dynamic_address) {
	hw_uint<16> stg1_stg1_update_0_sm2_045_40_res = stg1_update_0_sm2_045_write.extract<0, 15>();
	stg1_stg1_update_0_sm2_045_40_write(stg1_stg1_update_0_sm2_045_40_res, stg1, root, stg1_0, stg1_1, dynamic_address);
}

// stg2_update_0_sm3_047_read
//	stg1_stg2_update_0_sm3_047_36
//	stg1_stg2_update_0_sm3_047_37
//	stg1_stg2_update_0_sm3_047_38
//	stg1_stg2_update_0_sm3_047_39
inline hw_uint<64> stg1_stg2_update_0_sm3_047_read_bundle_read(stg1_cache& stg1, int root, int stg2_0, int stg2_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg1_stg2_update_0_sm3_047_36
    // stg1_stg2_update_0_sm3_047_37
    // stg1_stg2_update_0_sm3_047_38
    // stg1_stg2_update_0_sm3_047_39

	hw_uint<64> result;
	hw_uint<16> stg1_stg2_update_0_sm3_047_36_res = stg1_stg2_update_0_sm3_047_36_select(stg1, root, stg2_0, stg2_1, dynamic_address);
	set_at<0, 64>(result, stg1_stg2_update_0_sm3_047_36_res);
	hw_uint<16> stg1_stg2_update_0_sm3_047_37_res = stg1_stg2_update_0_sm3_047_37_select(stg1, root, stg2_0, stg2_1, dynamic_address);
	set_at<16, 64>(result, stg1_stg2_update_0_sm3_047_37_res);
	hw_uint<16> stg1_stg2_update_0_sm3_047_38_res = stg1_stg2_update_0_sm3_047_38_select(stg1, root, stg2_0, stg2_1, dynamic_address);
	set_at<32, 64>(result, stg1_stg2_update_0_sm3_047_38_res);
	hw_uint<16> stg1_stg2_update_0_sm3_047_39_res = stg1_stg2_update_0_sm3_047_39_select(stg1, root, stg2_0, stg2_1, dynamic_address);
	set_at<48, 64>(result, stg1_stg2_update_0_sm3_047_39_res);
	return result;
}

struct stg10_stg10_update_0_sm11_049_65_merged_banks_4_cache {
	// RAM Box: {[0, 1927], [0, 1082]}
	// Capacity: 1931
	// # of read delays: 5
  // 0, 1, 1928, 1929, 1930
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1926> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1927() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1928() {
		return f4;
	}

	inline hw_uint<16> peek_1929() {
		return f6;
	}

	inline hw_uint<16> peek_1930() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1926
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1926 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg10_cache {
  // Reader addrs...
    // { stg11_update_0_sm12_017[root = 0, stg11_0, stg11_1] -> stg10[stg11_1, stg11_0] : 0 <= stg11_0 <= 1082 and 0 <= stg11_1 <= 1925 }
    // { stg11_update_0_sm12_017[root = 0, stg11_0, stg11_1] -> stg10[1 + stg11_1, stg11_0] : 0 <= stg11_0 <= 1082 and 0 <= stg11_1 <= 1925 }
    // { stg11_update_0_sm12_017[root = 0, stg11_0, stg11_1] -> stg10[1 + stg11_1, 1 + stg11_0] : 0 <= stg11_0 <= 1082 and 0 <= stg11_1 <= 1925 }
    // { stg11_update_0_sm12_017[root = 0, stg11_0, stg11_1] -> stg10[2 + stg11_1, stg11_0] : 0 <= stg11_0 <= 1082 and 0 <= stg11_1 <= 1925 }
  // # of banks: 1
  stg10_stg10_update_0_sm11_049_65_merged_banks_4_cache stg10_stg10_update_0_sm11_049_65_merged_banks_4;
};



inline void stg10_stg10_update_0_sm11_049_65_write(hw_uint<16>& stg10_stg10_update_0_sm11_049_65, stg10_cache& stg10, int root, int stg10_0, int stg10_1, int dynamic_address) {
  stg10.stg10_stg10_update_0_sm11_049_65_merged_banks_4.push(stg10_stg10_update_0_sm11_049_65);
}

inline hw_uint<16> stg10_stg11_update_0_sm12_017_61_select(stg10_cache& stg10, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_stg11_update_0_sm12_017_61 read pattern: { stg11_update_0_sm12_017[root = 0, stg11_0, stg11_1] -> stg10[stg11_1, stg11_0] : 0 <= stg11_0 <= 1082 and 0 <= stg11_1 <= 1925 }
  // Read schedule : { stg11_update_0_sm12_017[d0 = 0, d1, d2] -> [0, 12 + d1, 24 + d2, 12] : 0 <= d1 <= 1082 and 0 <= d2 <= 1925 }
  // Write schedule: { stg10_update_0_sm11_049[d0 = 0, d1, d2] -> [0, 11 + d1, 22 + d2, 11] : 0 <= d1 <= 1083 and 0 <= d2 <= 1927 }
  auto value_stg10_stg10_update_0_sm11_049_65 = stg10.stg10_stg10_update_0_sm11_049_65_merged_banks_4.peek_1930();
  return value_stg10_stg10_update_0_sm11_049_65;
  return 0;
}

inline hw_uint<16> stg10_stg11_update_0_sm12_017_62_select(stg10_cache& stg10, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_stg11_update_0_sm12_017_62 read pattern: { stg11_update_0_sm12_017[root = 0, stg11_0, stg11_1] -> stg10[1 + stg11_1, stg11_0] : 0 <= stg11_0 <= 1082 and 0 <= stg11_1 <= 1925 }
  // Read schedule : { stg11_update_0_sm12_017[d0 = 0, d1, d2] -> [0, 12 + d1, 24 + d2, 12] : 0 <= d1 <= 1082 and 0 <= d2 <= 1925 }
  // Write schedule: { stg10_update_0_sm11_049[d0 = 0, d1, d2] -> [0, 11 + d1, 22 + d2, 11] : 0 <= d1 <= 1083 and 0 <= d2 <= 1927 }
  auto value_stg10_stg10_update_0_sm11_049_65 = stg10.stg10_stg10_update_0_sm11_049_65_merged_banks_4.peek_1929();
  return value_stg10_stg10_update_0_sm11_049_65;
  return 0;
}

inline hw_uint<16> stg10_stg11_update_0_sm12_017_63_select(stg10_cache& stg10, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_stg11_update_0_sm12_017_63 read pattern: { stg11_update_0_sm12_017[root = 0, stg11_0, stg11_1] -> stg10[1 + stg11_1, 1 + stg11_0] : 0 <= stg11_0 <= 1082 and 0 <= stg11_1 <= 1925 }
  // Read schedule : { stg11_update_0_sm12_017[d0 = 0, d1, d2] -> [0, 12 + d1, 24 + d2, 12] : 0 <= d1 <= 1082 and 0 <= d2 <= 1925 }
  // Write schedule: { stg10_update_0_sm11_049[d0 = 0, d1, d2] -> [0, 11 + d1, 22 + d2, 11] : 0 <= d1 <= 1083 and 0 <= d2 <= 1927 }
  auto value_stg10_stg10_update_0_sm11_049_65 = stg10.stg10_stg10_update_0_sm11_049_65_merged_banks_4.peek_1();
  return value_stg10_stg10_update_0_sm11_049_65;
  return 0;
}

inline hw_uint<16> stg10_stg11_update_0_sm12_017_64_select(stg10_cache& stg10, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_stg11_update_0_sm12_017_64 read pattern: { stg11_update_0_sm12_017[root = 0, stg11_0, stg11_1] -> stg10[2 + stg11_1, stg11_0] : 0 <= stg11_0 <= 1082 and 0 <= stg11_1 <= 1925 }
  // Read schedule : { stg11_update_0_sm12_017[d0 = 0, d1, d2] -> [0, 12 + d1, 24 + d2, 12] : 0 <= d1 <= 1082 and 0 <= d2 <= 1925 }
  // Write schedule: { stg10_update_0_sm11_049[d0 = 0, d1, d2] -> [0, 11 + d1, 22 + d2, 11] : 0 <= d1 <= 1083 and 0 <= d2 <= 1927 }
  auto value_stg10_stg10_update_0_sm11_049_65 = stg10.stg10_stg10_update_0_sm11_049_65_merged_banks_4.peek_1928();
  return value_stg10_stg10_update_0_sm11_049_65;
  return 0;
}

// # of bundles = 2
// stg10_update_0_sm11_049_write
//	stg10_stg10_update_0_sm11_049_65
inline void stg10_stg10_update_0_sm11_049_write_bundle_write(hw_uint<16>& stg10_update_0_sm11_049_write, stg10_cache& stg10, int root, int stg10_0, int stg10_1, int dynamic_address) {
	hw_uint<16> stg10_stg10_update_0_sm11_049_65_res = stg10_update_0_sm11_049_write.extract<0, 15>();
	stg10_stg10_update_0_sm11_049_65_write(stg10_stg10_update_0_sm11_049_65_res, stg10, root, stg10_0, stg10_1, dynamic_address);
}

// stg11_update_0_sm12_017_read
//	stg10_stg11_update_0_sm12_017_61
//	stg10_stg11_update_0_sm12_017_62
//	stg10_stg11_update_0_sm12_017_63
//	stg10_stg11_update_0_sm12_017_64
inline hw_uint<64> stg10_stg11_update_0_sm12_017_read_bundle_read(stg10_cache& stg10, int root, int stg11_0, int stg11_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg10_stg11_update_0_sm12_017_61
    // stg10_stg11_update_0_sm12_017_62
    // stg10_stg11_update_0_sm12_017_63
    // stg10_stg11_update_0_sm12_017_64

	hw_uint<64> result;
	hw_uint<16> stg10_stg11_update_0_sm12_017_61_res = stg10_stg11_update_0_sm12_017_61_select(stg10, root, stg11_0, stg11_1, dynamic_address);
	set_at<0, 64>(result, stg10_stg11_update_0_sm12_017_61_res);
	hw_uint<16> stg10_stg11_update_0_sm12_017_62_res = stg10_stg11_update_0_sm12_017_62_select(stg10, root, stg11_0, stg11_1, dynamic_address);
	set_at<16, 64>(result, stg10_stg11_update_0_sm12_017_62_res);
	hw_uint<16> stg10_stg11_update_0_sm12_017_63_res = stg10_stg11_update_0_sm12_017_63_select(stg10, root, stg11_0, stg11_1, dynamic_address);
	set_at<32, 64>(result, stg10_stg11_update_0_sm12_017_63_res);
	hw_uint<16> stg10_stg11_update_0_sm12_017_64_res = stg10_stg11_update_0_sm12_017_64_select(stg10, root, stg11_0, stg11_1, dynamic_address);
	set_at<48, 64>(result, stg10_stg11_update_0_sm12_017_64_res);
	return result;
}

struct stg11_stg11_update_0_sm12_017_60_merged_banks_4_cache {
	// RAM Box: {[0, 1925], [0, 1081]}
	// Capacity: 1929
	// # of read delays: 5
  // 0, 1, 1926, 1927, 1928
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1924> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1925() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1926() {
		return f4;
	}

	inline hw_uint<16> peek_1927() {
		return f6;
	}

	inline hw_uint<16> peek_1928() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1924
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1924 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg11_cache {
  // Reader addrs...
    // { stg12_update_0_sm13_019[root = 0, stg12_0, stg12_1] -> stg11[stg12_1, stg12_0] : 0 <= stg12_0 <= 1081 and 0 <= stg12_1 <= 1923 }
    // { stg12_update_0_sm13_019[root = 0, stg12_0, stg12_1] -> stg11[1 + stg12_1, stg12_0] : 0 <= stg12_0 <= 1081 and 0 <= stg12_1 <= 1923 }
    // { stg12_update_0_sm13_019[root = 0, stg12_0, stg12_1] -> stg11[1 + stg12_1, 1 + stg12_0] : 0 <= stg12_0 <= 1081 and 0 <= stg12_1 <= 1923 }
    // { stg12_update_0_sm13_019[root = 0, stg12_0, stg12_1] -> stg11[2 + stg12_1, stg12_0] : 0 <= stg12_0 <= 1081 and 0 <= stg12_1 <= 1923 }
  // # of banks: 1
  stg11_stg11_update_0_sm12_017_60_merged_banks_4_cache stg11_stg11_update_0_sm12_017_60_merged_banks_4;
};



inline void stg11_stg11_update_0_sm12_017_60_write(hw_uint<16>& stg11_stg11_update_0_sm12_017_60, stg11_cache& stg11, int root, int stg11_0, int stg11_1, int dynamic_address) {
  stg11.stg11_stg11_update_0_sm12_017_60_merged_banks_4.push(stg11_stg11_update_0_sm12_017_60);
}

inline hw_uint<16> stg11_stg12_update_0_sm13_019_56_select(stg11_cache& stg11, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_stg12_update_0_sm13_019_56 read pattern: { stg12_update_0_sm13_019[root = 0, stg12_0, stg12_1] -> stg11[stg12_1, stg12_0] : 0 <= stg12_0 <= 1081 and 0 <= stg12_1 <= 1923 }
  // Read schedule : { stg12_update_0_sm13_019[d0 = 0, d1, d2] -> [0, 13 + d1, 26 + d2, 13] : 0 <= d1 <= 1081 and 0 <= d2 <= 1923 }
  // Write schedule: { stg11_update_0_sm12_017[d0 = 0, d1, d2] -> [0, 12 + d1, 24 + d2, 12] : 0 <= d1 <= 1082 and 0 <= d2 <= 1925 }
  auto value_stg11_stg11_update_0_sm12_017_60 = stg11.stg11_stg11_update_0_sm12_017_60_merged_banks_4.peek_1928();
  return value_stg11_stg11_update_0_sm12_017_60;
  return 0;
}

inline hw_uint<16> stg11_stg12_update_0_sm13_019_57_select(stg11_cache& stg11, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_stg12_update_0_sm13_019_57 read pattern: { stg12_update_0_sm13_019[root = 0, stg12_0, stg12_1] -> stg11[1 + stg12_1, stg12_0] : 0 <= stg12_0 <= 1081 and 0 <= stg12_1 <= 1923 }
  // Read schedule : { stg12_update_0_sm13_019[d0 = 0, d1, d2] -> [0, 13 + d1, 26 + d2, 13] : 0 <= d1 <= 1081 and 0 <= d2 <= 1923 }
  // Write schedule: { stg11_update_0_sm12_017[d0 = 0, d1, d2] -> [0, 12 + d1, 24 + d2, 12] : 0 <= d1 <= 1082 and 0 <= d2 <= 1925 }
  auto value_stg11_stg11_update_0_sm12_017_60 = stg11.stg11_stg11_update_0_sm12_017_60_merged_banks_4.peek_1927();
  return value_stg11_stg11_update_0_sm12_017_60;
  return 0;
}

inline hw_uint<16> stg11_stg12_update_0_sm13_019_58_select(stg11_cache& stg11, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_stg12_update_0_sm13_019_58 read pattern: { stg12_update_0_sm13_019[root = 0, stg12_0, stg12_1] -> stg11[1 + stg12_1, 1 + stg12_0] : 0 <= stg12_0 <= 1081 and 0 <= stg12_1 <= 1923 }
  // Read schedule : { stg12_update_0_sm13_019[d0 = 0, d1, d2] -> [0, 13 + d1, 26 + d2, 13] : 0 <= d1 <= 1081 and 0 <= d2 <= 1923 }
  // Write schedule: { stg11_update_0_sm12_017[d0 = 0, d1, d2] -> [0, 12 + d1, 24 + d2, 12] : 0 <= d1 <= 1082 and 0 <= d2 <= 1925 }
  auto value_stg11_stg11_update_0_sm12_017_60 = stg11.stg11_stg11_update_0_sm12_017_60_merged_banks_4.peek_1();
  return value_stg11_stg11_update_0_sm12_017_60;
  return 0;
}

inline hw_uint<16> stg11_stg12_update_0_sm13_019_59_select(stg11_cache& stg11, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_stg12_update_0_sm13_019_59 read pattern: { stg12_update_0_sm13_019[root = 0, stg12_0, stg12_1] -> stg11[2 + stg12_1, stg12_0] : 0 <= stg12_0 <= 1081 and 0 <= stg12_1 <= 1923 }
  // Read schedule : { stg12_update_0_sm13_019[d0 = 0, d1, d2] -> [0, 13 + d1, 26 + d2, 13] : 0 <= d1 <= 1081 and 0 <= d2 <= 1923 }
  // Write schedule: { stg11_update_0_sm12_017[d0 = 0, d1, d2] -> [0, 12 + d1, 24 + d2, 12] : 0 <= d1 <= 1082 and 0 <= d2 <= 1925 }
  auto value_stg11_stg11_update_0_sm12_017_60 = stg11.stg11_stg11_update_0_sm12_017_60_merged_banks_4.peek_1926();
  return value_stg11_stg11_update_0_sm12_017_60;
  return 0;
}

// # of bundles = 2
// stg11_update_0_sm12_017_write
//	stg11_stg11_update_0_sm12_017_60
inline void stg11_stg11_update_0_sm12_017_write_bundle_write(hw_uint<16>& stg11_update_0_sm12_017_write, stg11_cache& stg11, int root, int stg11_0, int stg11_1, int dynamic_address) {
	hw_uint<16> stg11_stg11_update_0_sm12_017_60_res = stg11_update_0_sm12_017_write.extract<0, 15>();
	stg11_stg11_update_0_sm12_017_60_write(stg11_stg11_update_0_sm12_017_60_res, stg11, root, stg11_0, stg11_1, dynamic_address);
}

// stg12_update_0_sm13_019_read
//	stg11_stg12_update_0_sm13_019_56
//	stg11_stg12_update_0_sm13_019_57
//	stg11_stg12_update_0_sm13_019_58
//	stg11_stg12_update_0_sm13_019_59
inline hw_uint<64> stg11_stg12_update_0_sm13_019_read_bundle_read(stg11_cache& stg11, int root, int stg12_0, int stg12_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg11_stg12_update_0_sm13_019_56
    // stg11_stg12_update_0_sm13_019_57
    // stg11_stg12_update_0_sm13_019_58
    // stg11_stg12_update_0_sm13_019_59

	hw_uint<64> result;
	hw_uint<16> stg11_stg12_update_0_sm13_019_56_res = stg11_stg12_update_0_sm13_019_56_select(stg11, root, stg12_0, stg12_1, dynamic_address);
	set_at<0, 64>(result, stg11_stg12_update_0_sm13_019_56_res);
	hw_uint<16> stg11_stg12_update_0_sm13_019_57_res = stg11_stg12_update_0_sm13_019_57_select(stg11, root, stg12_0, stg12_1, dynamic_address);
	set_at<16, 64>(result, stg11_stg12_update_0_sm13_019_57_res);
	hw_uint<16> stg11_stg12_update_0_sm13_019_58_res = stg11_stg12_update_0_sm13_019_58_select(stg11, root, stg12_0, stg12_1, dynamic_address);
	set_at<32, 64>(result, stg11_stg12_update_0_sm13_019_58_res);
	hw_uint<16> stg11_stg12_update_0_sm13_019_59_res = stg11_stg12_update_0_sm13_019_59_select(stg11, root, stg12_0, stg12_1, dynamic_address);
	set_at<48, 64>(result, stg11_stg12_update_0_sm13_019_59_res);
	return result;
}

struct stg12_stg12_update_0_sm13_019_55_merged_banks_4_cache {
	// RAM Box: {[0, 1923], [0, 1080]}
	// Capacity: 1927
	// # of read delays: 5
  // 0, 1, 1924, 1925, 1926
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1922> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1923() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1924() {
		return f4;
	}

	inline hw_uint<16> peek_1925() {
		return f6;
	}

	inline hw_uint<16> peek_1926() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1922
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1922 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg12_cache {
  // Reader addrs...
    // { stg13_update_0_sm14_021[root = 0, stg13_0, stg13_1] -> stg12[stg13_1, stg13_0] : 0 <= stg13_0 <= 1080 and 0 <= stg13_1 <= 1921 }
    // { stg13_update_0_sm14_021[root = 0, stg13_0, stg13_1] -> stg12[1 + stg13_1, stg13_0] : 0 <= stg13_0 <= 1080 and 0 <= stg13_1 <= 1921 }
    // { stg13_update_0_sm14_021[root = 0, stg13_0, stg13_1] -> stg12[1 + stg13_1, 1 + stg13_0] : 0 <= stg13_0 <= 1080 and 0 <= stg13_1 <= 1921 }
    // { stg13_update_0_sm14_021[root = 0, stg13_0, stg13_1] -> stg12[2 + stg13_1, stg13_0] : 0 <= stg13_0 <= 1080 and 0 <= stg13_1 <= 1921 }
  // # of banks: 1
  stg12_stg12_update_0_sm13_019_55_merged_banks_4_cache stg12_stg12_update_0_sm13_019_55_merged_banks_4;
};



inline void stg12_stg12_update_0_sm13_019_55_write(hw_uint<16>& stg12_stg12_update_0_sm13_019_55, stg12_cache& stg12, int root, int stg12_0, int stg12_1, int dynamic_address) {
  stg12.stg12_stg12_update_0_sm13_019_55_merged_banks_4.push(stg12_stg12_update_0_sm13_019_55);
}

inline hw_uint<16> stg12_stg13_update_0_sm14_021_51_select(stg12_cache& stg12, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_stg13_update_0_sm14_021_51 read pattern: { stg13_update_0_sm14_021[root = 0, stg13_0, stg13_1] -> stg12[stg13_1, stg13_0] : 0 <= stg13_0 <= 1080 and 0 <= stg13_1 <= 1921 }
  // Read schedule : { stg13_update_0_sm14_021[d0 = 0, d1, d2] -> [0, 14 + d1, 28 + d2, 14] : 0 <= d1 <= 1080 and 0 <= d2 <= 1921 }
  // Write schedule: { stg12_update_0_sm13_019[d0 = 0, d1, d2] -> [0, 13 + d1, 26 + d2, 13] : 0 <= d1 <= 1081 and 0 <= d2 <= 1923 }
  auto value_stg12_stg12_update_0_sm13_019_55 = stg12.stg12_stg12_update_0_sm13_019_55_merged_banks_4.peek_1926();
  return value_stg12_stg12_update_0_sm13_019_55;
  return 0;
}

inline hw_uint<16> stg12_stg13_update_0_sm14_021_52_select(stg12_cache& stg12, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_stg13_update_0_sm14_021_52 read pattern: { stg13_update_0_sm14_021[root = 0, stg13_0, stg13_1] -> stg12[1 + stg13_1, stg13_0] : 0 <= stg13_0 <= 1080 and 0 <= stg13_1 <= 1921 }
  // Read schedule : { stg13_update_0_sm14_021[d0 = 0, d1, d2] -> [0, 14 + d1, 28 + d2, 14] : 0 <= d1 <= 1080 and 0 <= d2 <= 1921 }
  // Write schedule: { stg12_update_0_sm13_019[d0 = 0, d1, d2] -> [0, 13 + d1, 26 + d2, 13] : 0 <= d1 <= 1081 and 0 <= d2 <= 1923 }
  auto value_stg12_stg12_update_0_sm13_019_55 = stg12.stg12_stg12_update_0_sm13_019_55_merged_banks_4.peek_1925();
  return value_stg12_stg12_update_0_sm13_019_55;
  return 0;
}

inline hw_uint<16> stg12_stg13_update_0_sm14_021_53_select(stg12_cache& stg12, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_stg13_update_0_sm14_021_53 read pattern: { stg13_update_0_sm14_021[root = 0, stg13_0, stg13_1] -> stg12[1 + stg13_1, 1 + stg13_0] : 0 <= stg13_0 <= 1080 and 0 <= stg13_1 <= 1921 }
  // Read schedule : { stg13_update_0_sm14_021[d0 = 0, d1, d2] -> [0, 14 + d1, 28 + d2, 14] : 0 <= d1 <= 1080 and 0 <= d2 <= 1921 }
  // Write schedule: { stg12_update_0_sm13_019[d0 = 0, d1, d2] -> [0, 13 + d1, 26 + d2, 13] : 0 <= d1 <= 1081 and 0 <= d2 <= 1923 }
  auto value_stg12_stg12_update_0_sm13_019_55 = stg12.stg12_stg12_update_0_sm13_019_55_merged_banks_4.peek_1();
  return value_stg12_stg12_update_0_sm13_019_55;
  return 0;
}

inline hw_uint<16> stg12_stg13_update_0_sm14_021_54_select(stg12_cache& stg12, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_stg13_update_0_sm14_021_54 read pattern: { stg13_update_0_sm14_021[root = 0, stg13_0, stg13_1] -> stg12[2 + stg13_1, stg13_0] : 0 <= stg13_0 <= 1080 and 0 <= stg13_1 <= 1921 }
  // Read schedule : { stg13_update_0_sm14_021[d0 = 0, d1, d2] -> [0, 14 + d1, 28 + d2, 14] : 0 <= d1 <= 1080 and 0 <= d2 <= 1921 }
  // Write schedule: { stg12_update_0_sm13_019[d0 = 0, d1, d2] -> [0, 13 + d1, 26 + d2, 13] : 0 <= d1 <= 1081 and 0 <= d2 <= 1923 }
  auto value_stg12_stg12_update_0_sm13_019_55 = stg12.stg12_stg12_update_0_sm13_019_55_merged_banks_4.peek_1924();
  return value_stg12_stg12_update_0_sm13_019_55;
  return 0;
}

// # of bundles = 2
// stg12_update_0_sm13_019_write
//	stg12_stg12_update_0_sm13_019_55
inline void stg12_stg12_update_0_sm13_019_write_bundle_write(hw_uint<16>& stg12_update_0_sm13_019_write, stg12_cache& stg12, int root, int stg12_0, int stg12_1, int dynamic_address) {
	hw_uint<16> stg12_stg12_update_0_sm13_019_55_res = stg12_update_0_sm13_019_write.extract<0, 15>();
	stg12_stg12_update_0_sm13_019_55_write(stg12_stg12_update_0_sm13_019_55_res, stg12, root, stg12_0, stg12_1, dynamic_address);
}

// stg13_update_0_sm14_021_read
//	stg12_stg13_update_0_sm14_021_51
//	stg12_stg13_update_0_sm14_021_52
//	stg12_stg13_update_0_sm14_021_53
//	stg12_stg13_update_0_sm14_021_54
inline hw_uint<64> stg12_stg13_update_0_sm14_021_read_bundle_read(stg12_cache& stg12, int root, int stg13_0, int stg13_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg12_stg13_update_0_sm14_021_51
    // stg12_stg13_update_0_sm14_021_52
    // stg12_stg13_update_0_sm14_021_53
    // stg12_stg13_update_0_sm14_021_54

	hw_uint<64> result;
	hw_uint<16> stg12_stg13_update_0_sm14_021_51_res = stg12_stg13_update_0_sm14_021_51_select(stg12, root, stg13_0, stg13_1, dynamic_address);
	set_at<0, 64>(result, stg12_stg13_update_0_sm14_021_51_res);
	hw_uint<16> stg12_stg13_update_0_sm14_021_52_res = stg12_stg13_update_0_sm14_021_52_select(stg12, root, stg13_0, stg13_1, dynamic_address);
	set_at<16, 64>(result, stg12_stg13_update_0_sm14_021_52_res);
	hw_uint<16> stg12_stg13_update_0_sm14_021_53_res = stg12_stg13_update_0_sm14_021_53_select(stg12, root, stg13_0, stg13_1, dynamic_address);
	set_at<32, 64>(result, stg12_stg13_update_0_sm14_021_53_res);
	hw_uint<16> stg12_stg13_update_0_sm14_021_54_res = stg12_stg13_update_0_sm14_021_54_select(stg12, root, stg13_0, stg13_1, dynamic_address);
	set_at<48, 64>(result, stg12_stg13_update_0_sm14_021_54_res);
	return result;
}

struct stg13_stg13_update_0_sm14_021_50_merged_banks_4_cache {
	// RAM Box: {[0, 1921], [0, 1079]}
	// Capacity: 1925
	// # of read delays: 5
  // 0, 1, 1922, 1923, 1924
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1920> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1921() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1922() {
		return f4;
	}

	inline hw_uint<16> peek_1923() {
		return f6;
	}

	inline hw_uint<16> peek_1924() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1920
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1920 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg13_cache {
  // Reader addrs...
    // { stg14_update_0_sm15_023[root = 0, stg14_0, stg14_1] -> stg13[stg14_1, stg14_0] : 0 <= stg14_0 <= 1079 and 0 <= stg14_1 <= 1919 }
    // { stg14_update_0_sm15_023[root = 0, stg14_0, stg14_1] -> stg13[1 + stg14_1, stg14_0] : 0 <= stg14_0 <= 1079 and 0 <= stg14_1 <= 1919 }
    // { stg14_update_0_sm15_023[root = 0, stg14_0, stg14_1] -> stg13[1 + stg14_1, 1 + stg14_0] : 0 <= stg14_0 <= 1079 and 0 <= stg14_1 <= 1919 }
    // { stg14_update_0_sm15_023[root = 0, stg14_0, stg14_1] -> stg13[2 + stg14_1, stg14_0] : 0 <= stg14_0 <= 1079 and 0 <= stg14_1 <= 1919 }
  // # of banks: 1
  stg13_stg13_update_0_sm14_021_50_merged_banks_4_cache stg13_stg13_update_0_sm14_021_50_merged_banks_4;
};



inline void stg13_stg13_update_0_sm14_021_50_write(hw_uint<16>& stg13_stg13_update_0_sm14_021_50, stg13_cache& stg13, int root, int stg13_0, int stg13_1, int dynamic_address) {
  stg13.stg13_stg13_update_0_sm14_021_50_merged_banks_4.push(stg13_stg13_update_0_sm14_021_50);
}

inline hw_uint<16> stg13_stg14_update_0_sm15_023_46_select(stg13_cache& stg13, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_stg14_update_0_sm15_023_46 read pattern: { stg14_update_0_sm15_023[root = 0, stg14_0, stg14_1] -> stg13[stg14_1, stg14_0] : 0 <= stg14_0 <= 1079 and 0 <= stg14_1 <= 1919 }
  // Read schedule : { stg14_update_0_sm15_023[d0 = 0, d1, d2] -> [0, 15 + d1, 30 + d2, 15] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { stg13_update_0_sm14_021[d0 = 0, d1, d2] -> [0, 14 + d1, 28 + d2, 14] : 0 <= d1 <= 1080 and 0 <= d2 <= 1921 }
  auto value_stg13_stg13_update_0_sm14_021_50 = stg13.stg13_stg13_update_0_sm14_021_50_merged_banks_4.peek_1924();
  return value_stg13_stg13_update_0_sm14_021_50;
  return 0;
}

inline hw_uint<16> stg13_stg14_update_0_sm15_023_47_select(stg13_cache& stg13, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_stg14_update_0_sm15_023_47 read pattern: { stg14_update_0_sm15_023[root = 0, stg14_0, stg14_1] -> stg13[1 + stg14_1, stg14_0] : 0 <= stg14_0 <= 1079 and 0 <= stg14_1 <= 1919 }
  // Read schedule : { stg14_update_0_sm15_023[d0 = 0, d1, d2] -> [0, 15 + d1, 30 + d2, 15] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { stg13_update_0_sm14_021[d0 = 0, d1, d2] -> [0, 14 + d1, 28 + d2, 14] : 0 <= d1 <= 1080 and 0 <= d2 <= 1921 }
  auto value_stg13_stg13_update_0_sm14_021_50 = stg13.stg13_stg13_update_0_sm14_021_50_merged_banks_4.peek_1923();
  return value_stg13_stg13_update_0_sm14_021_50;
  return 0;
}

inline hw_uint<16> stg13_stg14_update_0_sm15_023_48_select(stg13_cache& stg13, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_stg14_update_0_sm15_023_48 read pattern: { stg14_update_0_sm15_023[root = 0, stg14_0, stg14_1] -> stg13[1 + stg14_1, 1 + stg14_0] : 0 <= stg14_0 <= 1079 and 0 <= stg14_1 <= 1919 }
  // Read schedule : { stg14_update_0_sm15_023[d0 = 0, d1, d2] -> [0, 15 + d1, 30 + d2, 15] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { stg13_update_0_sm14_021[d0 = 0, d1, d2] -> [0, 14 + d1, 28 + d2, 14] : 0 <= d1 <= 1080 and 0 <= d2 <= 1921 }
  auto value_stg13_stg13_update_0_sm14_021_50 = stg13.stg13_stg13_update_0_sm14_021_50_merged_banks_4.peek_1();
  return value_stg13_stg13_update_0_sm14_021_50;
  return 0;
}

inline hw_uint<16> stg13_stg14_update_0_sm15_023_49_select(stg13_cache& stg13, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_stg14_update_0_sm15_023_49 read pattern: { stg14_update_0_sm15_023[root = 0, stg14_0, stg14_1] -> stg13[2 + stg14_1, stg14_0] : 0 <= stg14_0 <= 1079 and 0 <= stg14_1 <= 1919 }
  // Read schedule : { stg14_update_0_sm15_023[d0 = 0, d1, d2] -> [0, 15 + d1, 30 + d2, 15] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { stg13_update_0_sm14_021[d0 = 0, d1, d2] -> [0, 14 + d1, 28 + d2, 14] : 0 <= d1 <= 1080 and 0 <= d2 <= 1921 }
  auto value_stg13_stg13_update_0_sm14_021_50 = stg13.stg13_stg13_update_0_sm14_021_50_merged_banks_4.peek_1922();
  return value_stg13_stg13_update_0_sm14_021_50;
  return 0;
}

// # of bundles = 2
// stg13_update_0_sm14_021_write
//	stg13_stg13_update_0_sm14_021_50
inline void stg13_stg13_update_0_sm14_021_write_bundle_write(hw_uint<16>& stg13_update_0_sm14_021_write, stg13_cache& stg13, int root, int stg13_0, int stg13_1, int dynamic_address) {
	hw_uint<16> stg13_stg13_update_0_sm14_021_50_res = stg13_update_0_sm14_021_write.extract<0, 15>();
	stg13_stg13_update_0_sm14_021_50_write(stg13_stg13_update_0_sm14_021_50_res, stg13, root, stg13_0, stg13_1, dynamic_address);
}

// stg14_update_0_sm15_023_read
//	stg13_stg14_update_0_sm15_023_46
//	stg13_stg14_update_0_sm15_023_47
//	stg13_stg14_update_0_sm15_023_48
//	stg13_stg14_update_0_sm15_023_49
inline hw_uint<64> stg13_stg14_update_0_sm15_023_read_bundle_read(stg13_cache& stg13, int root, int stg14_0, int stg14_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg13_stg14_update_0_sm15_023_46
    // stg13_stg14_update_0_sm15_023_47
    // stg13_stg14_update_0_sm15_023_48
    // stg13_stg14_update_0_sm15_023_49

	hw_uint<64> result;
	hw_uint<16> stg13_stg14_update_0_sm15_023_46_res = stg13_stg14_update_0_sm15_023_46_select(stg13, root, stg14_0, stg14_1, dynamic_address);
	set_at<0, 64>(result, stg13_stg14_update_0_sm15_023_46_res);
	hw_uint<16> stg13_stg14_update_0_sm15_023_47_res = stg13_stg14_update_0_sm15_023_47_select(stg13, root, stg14_0, stg14_1, dynamic_address);
	set_at<16, 64>(result, stg13_stg14_update_0_sm15_023_47_res);
	hw_uint<16> stg13_stg14_update_0_sm15_023_48_res = stg13_stg14_update_0_sm15_023_48_select(stg13, root, stg14_0, stg14_1, dynamic_address);
	set_at<32, 64>(result, stg13_stg14_update_0_sm15_023_48_res);
	hw_uint<16> stg13_stg14_update_0_sm15_023_49_res = stg13_stg14_update_0_sm15_023_49_select(stg13, root, stg14_0, stg14_1, dynamic_address);
	set_at<48, 64>(result, stg13_stg14_update_0_sm15_023_49_res);
	return result;
}

struct stg14_stg14_update_0_sm15_023_45_to_stg14_jac9_1_update_0_sm16_025_76_cache {
	// RAM Box: {[0, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct stg14_cache {
  // Reader addrs...
    // { jac9_1_update_0_sm16_025[root = 0, jac9_1_0, jac9_1_1] -> stg14[jac9_1_1, jac9_1_0] : 0 <= jac9_1_0 <= 1079 and 0 <= jac9_1_1 <= 1919 }
  // # of banks: 1
  stg14_stg14_update_0_sm15_023_45_to_stg14_jac9_1_update_0_sm16_025_76_cache stg14_stg14_update_0_sm15_023_45_to_stg14_jac9_1_update_0_sm16_025_76;
};



inline void stg14_stg14_update_0_sm15_023_45_write(hw_uint<16>& stg14_stg14_update_0_sm15_023_45, stg14_cache& stg14, int root, int stg14_0, int stg14_1, int dynamic_address) {
  stg14.stg14_stg14_update_0_sm15_023_45_to_stg14_jac9_1_update_0_sm16_025_76.push(stg14_stg14_update_0_sm15_023_45);
}

inline hw_uint<16> stg14_jac9_1_update_0_sm16_025_76_select(stg14_cache& stg14, int root, int jac9_1_0, int jac9_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg14_jac9_1_update_0_sm16_025_76 read pattern: { jac9_1_update_0_sm16_025[root = 0, jac9_1_0, jac9_1_1] -> stg14[jac9_1_1, jac9_1_0] : 0 <= jac9_1_0 <= 1079 and 0 <= jac9_1_1 <= 1919 }
  // Read schedule : { jac9_1_update_0_sm16_025[d0 = 0, d1, d2] -> [0, 15 + d1, 30 + d2, 16] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { stg14_update_0_sm15_023[d0 = 0, d1, d2] -> [0, 15 + d1, 30 + d2, 15] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  auto value_stg14_stg14_update_0_sm15_023_45 = stg14.stg14_stg14_update_0_sm15_023_45_to_stg14_jac9_1_update_0_sm16_025_76.peek(/* one reader or all rams */ 0);
  return value_stg14_stg14_update_0_sm15_023_45;
  return 0;
}

// # of bundles = 2
// jac9_1_update_0_sm16_025_read
//	stg14_jac9_1_update_0_sm16_025_76
inline hw_uint<16> stg14_jac9_1_update_0_sm16_025_read_bundle_read(stg14_cache& stg14, int root, int jac9_1_0, int jac9_1_1, int dynamic_address) {
  // # of ports in bundle: 1
    // stg14_jac9_1_update_0_sm16_025_76

	hw_uint<16> result;
	hw_uint<16> stg14_jac9_1_update_0_sm16_025_76_res = stg14_jac9_1_update_0_sm16_025_76_select(stg14, root, jac9_1_0, jac9_1_1, dynamic_address);
	set_at<0, 16>(result, stg14_jac9_1_update_0_sm16_025_76_res);
	return result;
}

// stg14_update_0_sm15_023_write
//	stg14_stg14_update_0_sm15_023_45
inline void stg14_stg14_update_0_sm15_023_write_bundle_write(hw_uint<16>& stg14_update_0_sm15_023_write, stg14_cache& stg14, int root, int stg14_0, int stg14_1, int dynamic_address) {
	hw_uint<16> stg14_stg14_update_0_sm15_023_45_res = stg14_update_0_sm15_023_write.extract<0, 15>();
	stg14_stg14_update_0_sm15_023_45_write(stg14_stg14_update_0_sm15_023_45_res, stg14, root, stg14_0, stg14_1, dynamic_address);
}

struct stg2_stg2_update_0_sm3_047_35_merged_banks_4_cache {
	// RAM Box: {[0, 1943], [0, 1090]}
	// Capacity: 1947
	// # of read delays: 5
  // 0, 1, 1944, 1945, 1946
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1942> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1943() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1944() {
		return f4;
	}

	inline hw_uint<16> peek_1945() {
		return f6;
	}

	inline hw_uint<16> peek_1946() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1942
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1942 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg2_cache {
  // Reader addrs...
    // { stg3_update_0_sm4_043[root = 0, stg3_0, stg3_1] -> stg2[stg3_1, stg3_0] : 0 <= stg3_0 <= 1090 and 0 <= stg3_1 <= 1941 }
    // { stg3_update_0_sm4_043[root = 0, stg3_0, stg3_1] -> stg2[1 + stg3_1, stg3_0] : 0 <= stg3_0 <= 1090 and 0 <= stg3_1 <= 1941 }
    // { stg3_update_0_sm4_043[root = 0, stg3_0, stg3_1] -> stg2[1 + stg3_1, 1 + stg3_0] : 0 <= stg3_0 <= 1090 and 0 <= stg3_1 <= 1941 }
    // { stg3_update_0_sm4_043[root = 0, stg3_0, stg3_1] -> stg2[2 + stg3_1, stg3_0] : 0 <= stg3_0 <= 1090 and 0 <= stg3_1 <= 1941 }
  // # of banks: 1
  stg2_stg2_update_0_sm3_047_35_merged_banks_4_cache stg2_stg2_update_0_sm3_047_35_merged_banks_4;
};



inline void stg2_stg2_update_0_sm3_047_35_write(hw_uint<16>& stg2_stg2_update_0_sm3_047_35, stg2_cache& stg2, int root, int stg2_0, int stg2_1, int dynamic_address) {
  stg2.stg2_stg2_update_0_sm3_047_35_merged_banks_4.push(stg2_stg2_update_0_sm3_047_35);
}

inline hw_uint<16> stg2_stg3_update_0_sm4_043_31_select(stg2_cache& stg2, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_stg3_update_0_sm4_043_31 read pattern: { stg3_update_0_sm4_043[root = 0, stg3_0, stg3_1] -> stg2[stg3_1, stg3_0] : 0 <= stg3_0 <= 1090 and 0 <= stg3_1 <= 1941 }
  // Read schedule : { stg3_update_0_sm4_043[d0 = 0, d1, d2] -> [0, 4 + d1, 8 + d2, 4] : 0 <= d1 <= 1090 and 0 <= d2 <= 1941 }
  // Write schedule: { stg2_update_0_sm3_047[d0 = 0, d1, d2] -> [0, 3 + d1, 6 + d2, 3] : 0 <= d1 <= 1091 and 0 <= d2 <= 1943 }
  auto value_stg2_stg2_update_0_sm3_047_35 = stg2.stg2_stg2_update_0_sm3_047_35_merged_banks_4.peek_1946();
  return value_stg2_stg2_update_0_sm3_047_35;
  return 0;
}

inline hw_uint<16> stg2_stg3_update_0_sm4_043_32_select(stg2_cache& stg2, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_stg3_update_0_sm4_043_32 read pattern: { stg3_update_0_sm4_043[root = 0, stg3_0, stg3_1] -> stg2[1 + stg3_1, stg3_0] : 0 <= stg3_0 <= 1090 and 0 <= stg3_1 <= 1941 }
  // Read schedule : { stg3_update_0_sm4_043[d0 = 0, d1, d2] -> [0, 4 + d1, 8 + d2, 4] : 0 <= d1 <= 1090 and 0 <= d2 <= 1941 }
  // Write schedule: { stg2_update_0_sm3_047[d0 = 0, d1, d2] -> [0, 3 + d1, 6 + d2, 3] : 0 <= d1 <= 1091 and 0 <= d2 <= 1943 }
  auto value_stg2_stg2_update_0_sm3_047_35 = stg2.stg2_stg2_update_0_sm3_047_35_merged_banks_4.peek_1945();
  return value_stg2_stg2_update_0_sm3_047_35;
  return 0;
}

inline hw_uint<16> stg2_stg3_update_0_sm4_043_33_select(stg2_cache& stg2, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_stg3_update_0_sm4_043_33 read pattern: { stg3_update_0_sm4_043[root = 0, stg3_0, stg3_1] -> stg2[1 + stg3_1, 1 + stg3_0] : 0 <= stg3_0 <= 1090 and 0 <= stg3_1 <= 1941 }
  // Read schedule : { stg3_update_0_sm4_043[d0 = 0, d1, d2] -> [0, 4 + d1, 8 + d2, 4] : 0 <= d1 <= 1090 and 0 <= d2 <= 1941 }
  // Write schedule: { stg2_update_0_sm3_047[d0 = 0, d1, d2] -> [0, 3 + d1, 6 + d2, 3] : 0 <= d1 <= 1091 and 0 <= d2 <= 1943 }
  auto value_stg2_stg2_update_0_sm3_047_35 = stg2.stg2_stg2_update_0_sm3_047_35_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_sm3_047_35;
  return 0;
}

inline hw_uint<16> stg2_stg3_update_0_sm4_043_34_select(stg2_cache& stg2, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_stg3_update_0_sm4_043_34 read pattern: { stg3_update_0_sm4_043[root = 0, stg3_0, stg3_1] -> stg2[2 + stg3_1, stg3_0] : 0 <= stg3_0 <= 1090 and 0 <= stg3_1 <= 1941 }
  // Read schedule : { stg3_update_0_sm4_043[d0 = 0, d1, d2] -> [0, 4 + d1, 8 + d2, 4] : 0 <= d1 <= 1090 and 0 <= d2 <= 1941 }
  // Write schedule: { stg2_update_0_sm3_047[d0 = 0, d1, d2] -> [0, 3 + d1, 6 + d2, 3] : 0 <= d1 <= 1091 and 0 <= d2 <= 1943 }
  auto value_stg2_stg2_update_0_sm3_047_35 = stg2.stg2_stg2_update_0_sm3_047_35_merged_banks_4.peek_1944();
  return value_stg2_stg2_update_0_sm3_047_35;
  return 0;
}

// # of bundles = 2
// stg2_update_0_sm3_047_write
//	stg2_stg2_update_0_sm3_047_35
inline void stg2_stg2_update_0_sm3_047_write_bundle_write(hw_uint<16>& stg2_update_0_sm3_047_write, stg2_cache& stg2, int root, int stg2_0, int stg2_1, int dynamic_address) {
	hw_uint<16> stg2_stg2_update_0_sm3_047_35_res = stg2_update_0_sm3_047_write.extract<0, 15>();
	stg2_stg2_update_0_sm3_047_35_write(stg2_stg2_update_0_sm3_047_35_res, stg2, root, stg2_0, stg2_1, dynamic_address);
}

// stg3_update_0_sm4_043_read
//	stg2_stg3_update_0_sm4_043_31
//	stg2_stg3_update_0_sm4_043_32
//	stg2_stg3_update_0_sm4_043_33
//	stg2_stg3_update_0_sm4_043_34
inline hw_uint<64> stg2_stg3_update_0_sm4_043_read_bundle_read(stg2_cache& stg2, int root, int stg3_0, int stg3_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg2_stg3_update_0_sm4_043_31
    // stg2_stg3_update_0_sm4_043_32
    // stg2_stg3_update_0_sm4_043_33
    // stg2_stg3_update_0_sm4_043_34

	hw_uint<64> result;
	hw_uint<16> stg2_stg3_update_0_sm4_043_31_res = stg2_stg3_update_0_sm4_043_31_select(stg2, root, stg3_0, stg3_1, dynamic_address);
	set_at<0, 64>(result, stg2_stg3_update_0_sm4_043_31_res);
	hw_uint<16> stg2_stg3_update_0_sm4_043_32_res = stg2_stg3_update_0_sm4_043_32_select(stg2, root, stg3_0, stg3_1, dynamic_address);
	set_at<16, 64>(result, stg2_stg3_update_0_sm4_043_32_res);
	hw_uint<16> stg2_stg3_update_0_sm4_043_33_res = stg2_stg3_update_0_sm4_043_33_select(stg2, root, stg3_0, stg3_1, dynamic_address);
	set_at<32, 64>(result, stg2_stg3_update_0_sm4_043_33_res);
	hw_uint<16> stg2_stg3_update_0_sm4_043_34_res = stg2_stg3_update_0_sm4_043_34_select(stg2, root, stg3_0, stg3_1, dynamic_address);
	set_at<48, 64>(result, stg2_stg3_update_0_sm4_043_34_res);
	return result;
}

struct stg3_stg3_update_0_sm4_043_30_merged_banks_4_cache {
	// RAM Box: {[0, 1941], [0, 1089]}
	// Capacity: 1945
	// # of read delays: 5
  // 0, 1, 1942, 1943, 1944
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1940> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1941() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1942() {
		return f4;
	}

	inline hw_uint<16> peek_1943() {
		return f6;
	}

	inline hw_uint<16> peek_1944() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1940
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1940 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg3_cache {
  // Reader addrs...
    // { stg4_update_0_sm5_029[root = 0, stg4_0, stg4_1] -> stg3[stg4_1, stg4_0] : 0 <= stg4_0 <= 1089 and 0 <= stg4_1 <= 1939 }
    // { stg4_update_0_sm5_029[root = 0, stg4_0, stg4_1] -> stg3[1 + stg4_1, stg4_0] : 0 <= stg4_0 <= 1089 and 0 <= stg4_1 <= 1939 }
    // { stg4_update_0_sm5_029[root = 0, stg4_0, stg4_1] -> stg3[1 + stg4_1, 1 + stg4_0] : 0 <= stg4_0 <= 1089 and 0 <= stg4_1 <= 1939 }
    // { stg4_update_0_sm5_029[root = 0, stg4_0, stg4_1] -> stg3[2 + stg4_1, stg4_0] : 0 <= stg4_0 <= 1089 and 0 <= stg4_1 <= 1939 }
  // # of banks: 1
  stg3_stg3_update_0_sm4_043_30_merged_banks_4_cache stg3_stg3_update_0_sm4_043_30_merged_banks_4;
};



inline void stg3_stg3_update_0_sm4_043_30_write(hw_uint<16>& stg3_stg3_update_0_sm4_043_30, stg3_cache& stg3, int root, int stg3_0, int stg3_1, int dynamic_address) {
  stg3.stg3_stg3_update_0_sm4_043_30_merged_banks_4.push(stg3_stg3_update_0_sm4_043_30);
}

inline hw_uint<16> stg3_stg4_update_0_sm5_029_26_select(stg3_cache& stg3, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_stg4_update_0_sm5_029_26 read pattern: { stg4_update_0_sm5_029[root = 0, stg4_0, stg4_1] -> stg3[stg4_1, stg4_0] : 0 <= stg4_0 <= 1089 and 0 <= stg4_1 <= 1939 }
  // Read schedule : { stg4_update_0_sm5_029[d0 = 0, d1, d2] -> [0, 5 + d1, 10 + d2, 5] : 0 <= d1 <= 1089 and 0 <= d2 <= 1939 }
  // Write schedule: { stg3_update_0_sm4_043[d0 = 0, d1, d2] -> [0, 4 + d1, 8 + d2, 4] : 0 <= d1 <= 1090 and 0 <= d2 <= 1941 }
  auto value_stg3_stg3_update_0_sm4_043_30 = stg3.stg3_stg3_update_0_sm4_043_30_merged_banks_4.peek_1944();
  return value_stg3_stg3_update_0_sm4_043_30;
  return 0;
}

inline hw_uint<16> stg3_stg4_update_0_sm5_029_27_select(stg3_cache& stg3, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_stg4_update_0_sm5_029_27 read pattern: { stg4_update_0_sm5_029[root = 0, stg4_0, stg4_1] -> stg3[1 + stg4_1, stg4_0] : 0 <= stg4_0 <= 1089 and 0 <= stg4_1 <= 1939 }
  // Read schedule : { stg4_update_0_sm5_029[d0 = 0, d1, d2] -> [0, 5 + d1, 10 + d2, 5] : 0 <= d1 <= 1089 and 0 <= d2 <= 1939 }
  // Write schedule: { stg3_update_0_sm4_043[d0 = 0, d1, d2] -> [0, 4 + d1, 8 + d2, 4] : 0 <= d1 <= 1090 and 0 <= d2 <= 1941 }
  auto value_stg3_stg3_update_0_sm4_043_30 = stg3.stg3_stg3_update_0_sm4_043_30_merged_banks_4.peek_1943();
  return value_stg3_stg3_update_0_sm4_043_30;
  return 0;
}

inline hw_uint<16> stg3_stg4_update_0_sm5_029_28_select(stg3_cache& stg3, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_stg4_update_0_sm5_029_28 read pattern: { stg4_update_0_sm5_029[root = 0, stg4_0, stg4_1] -> stg3[1 + stg4_1, 1 + stg4_0] : 0 <= stg4_0 <= 1089 and 0 <= stg4_1 <= 1939 }
  // Read schedule : { stg4_update_0_sm5_029[d0 = 0, d1, d2] -> [0, 5 + d1, 10 + d2, 5] : 0 <= d1 <= 1089 and 0 <= d2 <= 1939 }
  // Write schedule: { stg3_update_0_sm4_043[d0 = 0, d1, d2] -> [0, 4 + d1, 8 + d2, 4] : 0 <= d1 <= 1090 and 0 <= d2 <= 1941 }
  auto value_stg3_stg3_update_0_sm4_043_30 = stg3.stg3_stg3_update_0_sm4_043_30_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_sm4_043_30;
  return 0;
}

inline hw_uint<16> stg3_stg4_update_0_sm5_029_29_select(stg3_cache& stg3, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_stg4_update_0_sm5_029_29 read pattern: { stg4_update_0_sm5_029[root = 0, stg4_0, stg4_1] -> stg3[2 + stg4_1, stg4_0] : 0 <= stg4_0 <= 1089 and 0 <= stg4_1 <= 1939 }
  // Read schedule : { stg4_update_0_sm5_029[d0 = 0, d1, d2] -> [0, 5 + d1, 10 + d2, 5] : 0 <= d1 <= 1089 and 0 <= d2 <= 1939 }
  // Write schedule: { stg3_update_0_sm4_043[d0 = 0, d1, d2] -> [0, 4 + d1, 8 + d2, 4] : 0 <= d1 <= 1090 and 0 <= d2 <= 1941 }
  auto value_stg3_stg3_update_0_sm4_043_30 = stg3.stg3_stg3_update_0_sm4_043_30_merged_banks_4.peek_1942();
  return value_stg3_stg3_update_0_sm4_043_30;
  return 0;
}

// # of bundles = 2
// stg3_update_0_sm4_043_write
//	stg3_stg3_update_0_sm4_043_30
inline void stg3_stg3_update_0_sm4_043_write_bundle_write(hw_uint<16>& stg3_update_0_sm4_043_write, stg3_cache& stg3, int root, int stg3_0, int stg3_1, int dynamic_address) {
	hw_uint<16> stg3_stg3_update_0_sm4_043_30_res = stg3_update_0_sm4_043_write.extract<0, 15>();
	stg3_stg3_update_0_sm4_043_30_write(stg3_stg3_update_0_sm4_043_30_res, stg3, root, stg3_0, stg3_1, dynamic_address);
}

// stg4_update_0_sm5_029_read
//	stg3_stg4_update_0_sm5_029_26
//	stg3_stg4_update_0_sm5_029_27
//	stg3_stg4_update_0_sm5_029_28
//	stg3_stg4_update_0_sm5_029_29
inline hw_uint<64> stg3_stg4_update_0_sm5_029_read_bundle_read(stg3_cache& stg3, int root, int stg4_0, int stg4_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg3_stg4_update_0_sm5_029_26
    // stg3_stg4_update_0_sm5_029_27
    // stg3_stg4_update_0_sm5_029_28
    // stg3_stg4_update_0_sm5_029_29

	hw_uint<64> result;
	hw_uint<16> stg3_stg4_update_0_sm5_029_26_res = stg3_stg4_update_0_sm5_029_26_select(stg3, root, stg4_0, stg4_1, dynamic_address);
	set_at<0, 64>(result, stg3_stg4_update_0_sm5_029_26_res);
	hw_uint<16> stg3_stg4_update_0_sm5_029_27_res = stg3_stg4_update_0_sm5_029_27_select(stg3, root, stg4_0, stg4_1, dynamic_address);
	set_at<16, 64>(result, stg3_stg4_update_0_sm5_029_27_res);
	hw_uint<16> stg3_stg4_update_0_sm5_029_28_res = stg3_stg4_update_0_sm5_029_28_select(stg3, root, stg4_0, stg4_1, dynamic_address);
	set_at<32, 64>(result, stg3_stg4_update_0_sm5_029_28_res);
	hw_uint<16> stg3_stg4_update_0_sm5_029_29_res = stg3_stg4_update_0_sm5_029_29_select(stg3, root, stg4_0, stg4_1, dynamic_address);
	set_at<48, 64>(result, stg3_stg4_update_0_sm5_029_29_res);
	return result;
}

struct stg4_stg4_update_0_sm5_029_25_merged_banks_4_cache {
	// RAM Box: {[0, 1939], [0, 1088]}
	// Capacity: 1943
	// # of read delays: 5
  // 0, 1, 1940, 1941, 1942
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1938> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1939() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1940() {
		return f4;
	}

	inline hw_uint<16> peek_1941() {
		return f6;
	}

	inline hw_uint<16> peek_1942() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1938
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1938 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg4_cache {
  // Reader addrs...
    // { stg5_update_0_sm6_031[root = 0, stg5_0, stg5_1] -> stg4[stg5_1, stg5_0] : 0 <= stg5_0 <= 1088 and 0 <= stg5_1 <= 1937 }
    // { stg5_update_0_sm6_031[root = 0, stg5_0, stg5_1] -> stg4[1 + stg5_1, stg5_0] : 0 <= stg5_0 <= 1088 and 0 <= stg5_1 <= 1937 }
    // { stg5_update_0_sm6_031[root = 0, stg5_0, stg5_1] -> stg4[1 + stg5_1, 1 + stg5_0] : 0 <= stg5_0 <= 1088 and 0 <= stg5_1 <= 1937 }
    // { stg5_update_0_sm6_031[root = 0, stg5_0, stg5_1] -> stg4[2 + stg5_1, stg5_0] : 0 <= stg5_0 <= 1088 and 0 <= stg5_1 <= 1937 }
  // # of banks: 1
  stg4_stg4_update_0_sm5_029_25_merged_banks_4_cache stg4_stg4_update_0_sm5_029_25_merged_banks_4;
};



inline void stg4_stg4_update_0_sm5_029_25_write(hw_uint<16>& stg4_stg4_update_0_sm5_029_25, stg4_cache& stg4, int root, int stg4_0, int stg4_1, int dynamic_address) {
  stg4.stg4_stg4_update_0_sm5_029_25_merged_banks_4.push(stg4_stg4_update_0_sm5_029_25);
}

inline hw_uint<16> stg4_stg5_update_0_sm6_031_21_select(stg4_cache& stg4, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_stg5_update_0_sm6_031_21 read pattern: { stg5_update_0_sm6_031[root = 0, stg5_0, stg5_1] -> stg4[stg5_1, stg5_0] : 0 <= stg5_0 <= 1088 and 0 <= stg5_1 <= 1937 }
  // Read schedule : { stg5_update_0_sm6_031[d0 = 0, d1, d2] -> [0, 6 + d1, 12 + d2, 6] : 0 <= d1 <= 1088 and 0 <= d2 <= 1937 }
  // Write schedule: { stg4_update_0_sm5_029[d0 = 0, d1, d2] -> [0, 5 + d1, 10 + d2, 5] : 0 <= d1 <= 1089 and 0 <= d2 <= 1939 }
  auto value_stg4_stg4_update_0_sm5_029_25 = stg4.stg4_stg4_update_0_sm5_029_25_merged_banks_4.peek_1942();
  return value_stg4_stg4_update_0_sm5_029_25;
  return 0;
}

inline hw_uint<16> stg4_stg5_update_0_sm6_031_22_select(stg4_cache& stg4, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_stg5_update_0_sm6_031_22 read pattern: { stg5_update_0_sm6_031[root = 0, stg5_0, stg5_1] -> stg4[1 + stg5_1, stg5_0] : 0 <= stg5_0 <= 1088 and 0 <= stg5_1 <= 1937 }
  // Read schedule : { stg5_update_0_sm6_031[d0 = 0, d1, d2] -> [0, 6 + d1, 12 + d2, 6] : 0 <= d1 <= 1088 and 0 <= d2 <= 1937 }
  // Write schedule: { stg4_update_0_sm5_029[d0 = 0, d1, d2] -> [0, 5 + d1, 10 + d2, 5] : 0 <= d1 <= 1089 and 0 <= d2 <= 1939 }
  auto value_stg4_stg4_update_0_sm5_029_25 = stg4.stg4_stg4_update_0_sm5_029_25_merged_banks_4.peek_1941();
  return value_stg4_stg4_update_0_sm5_029_25;
  return 0;
}

inline hw_uint<16> stg4_stg5_update_0_sm6_031_23_select(stg4_cache& stg4, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_stg5_update_0_sm6_031_23 read pattern: { stg5_update_0_sm6_031[root = 0, stg5_0, stg5_1] -> stg4[1 + stg5_1, 1 + stg5_0] : 0 <= stg5_0 <= 1088 and 0 <= stg5_1 <= 1937 }
  // Read schedule : { stg5_update_0_sm6_031[d0 = 0, d1, d2] -> [0, 6 + d1, 12 + d2, 6] : 0 <= d1 <= 1088 and 0 <= d2 <= 1937 }
  // Write schedule: { stg4_update_0_sm5_029[d0 = 0, d1, d2] -> [0, 5 + d1, 10 + d2, 5] : 0 <= d1 <= 1089 and 0 <= d2 <= 1939 }
  auto value_stg4_stg4_update_0_sm5_029_25 = stg4.stg4_stg4_update_0_sm5_029_25_merged_banks_4.peek_1();
  return value_stg4_stg4_update_0_sm5_029_25;
  return 0;
}

inline hw_uint<16> stg4_stg5_update_0_sm6_031_24_select(stg4_cache& stg4, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_stg5_update_0_sm6_031_24 read pattern: { stg5_update_0_sm6_031[root = 0, stg5_0, stg5_1] -> stg4[2 + stg5_1, stg5_0] : 0 <= stg5_0 <= 1088 and 0 <= stg5_1 <= 1937 }
  // Read schedule : { stg5_update_0_sm6_031[d0 = 0, d1, d2] -> [0, 6 + d1, 12 + d2, 6] : 0 <= d1 <= 1088 and 0 <= d2 <= 1937 }
  // Write schedule: { stg4_update_0_sm5_029[d0 = 0, d1, d2] -> [0, 5 + d1, 10 + d2, 5] : 0 <= d1 <= 1089 and 0 <= d2 <= 1939 }
  auto value_stg4_stg4_update_0_sm5_029_25 = stg4.stg4_stg4_update_0_sm5_029_25_merged_banks_4.peek_1940();
  return value_stg4_stg4_update_0_sm5_029_25;
  return 0;
}

// # of bundles = 2
// stg4_update_0_sm5_029_write
//	stg4_stg4_update_0_sm5_029_25
inline void stg4_stg4_update_0_sm5_029_write_bundle_write(hw_uint<16>& stg4_update_0_sm5_029_write, stg4_cache& stg4, int root, int stg4_0, int stg4_1, int dynamic_address) {
	hw_uint<16> stg4_stg4_update_0_sm5_029_25_res = stg4_update_0_sm5_029_write.extract<0, 15>();
	stg4_stg4_update_0_sm5_029_25_write(stg4_stg4_update_0_sm5_029_25_res, stg4, root, stg4_0, stg4_1, dynamic_address);
}

// stg5_update_0_sm6_031_read
//	stg4_stg5_update_0_sm6_031_21
//	stg4_stg5_update_0_sm6_031_22
//	stg4_stg5_update_0_sm6_031_23
//	stg4_stg5_update_0_sm6_031_24
inline hw_uint<64> stg4_stg5_update_0_sm6_031_read_bundle_read(stg4_cache& stg4, int root, int stg5_0, int stg5_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg4_stg5_update_0_sm6_031_21
    // stg4_stg5_update_0_sm6_031_22
    // stg4_stg5_update_0_sm6_031_23
    // stg4_stg5_update_0_sm6_031_24

	hw_uint<64> result;
	hw_uint<16> stg4_stg5_update_0_sm6_031_21_res = stg4_stg5_update_0_sm6_031_21_select(stg4, root, stg5_0, stg5_1, dynamic_address);
	set_at<0, 64>(result, stg4_stg5_update_0_sm6_031_21_res);
	hw_uint<16> stg4_stg5_update_0_sm6_031_22_res = stg4_stg5_update_0_sm6_031_22_select(stg4, root, stg5_0, stg5_1, dynamic_address);
	set_at<16, 64>(result, stg4_stg5_update_0_sm6_031_22_res);
	hw_uint<16> stg4_stg5_update_0_sm6_031_23_res = stg4_stg5_update_0_sm6_031_23_select(stg4, root, stg5_0, stg5_1, dynamic_address);
	set_at<32, 64>(result, stg4_stg5_update_0_sm6_031_23_res);
	hw_uint<16> stg4_stg5_update_0_sm6_031_24_res = stg4_stg5_update_0_sm6_031_24_select(stg4, root, stg5_0, stg5_1, dynamic_address);
	set_at<48, 64>(result, stg4_stg5_update_0_sm6_031_24_res);
	return result;
}

struct stg5_stg5_update_0_sm6_031_20_merged_banks_4_cache {
	// RAM Box: {[0, 1937], [0, 1087]}
	// Capacity: 1941
	// # of read delays: 5
  // 0, 1, 1938, 1939, 1940
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1936> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1937() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1938() {
		return f4;
	}

	inline hw_uint<16> peek_1939() {
		return f6;
	}

	inline hw_uint<16> peek_1940() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1936
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1936 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg5_cache {
  // Reader addrs...
    // { stg6_update_0_sm7_033[root = 0, stg6_0, stg6_1] -> stg5[stg6_1, stg6_0] : 0 <= stg6_0 <= 1087 and 0 <= stg6_1 <= 1935 }
    // { stg6_update_0_sm7_033[root = 0, stg6_0, stg6_1] -> stg5[1 + stg6_1, stg6_0] : 0 <= stg6_0 <= 1087 and 0 <= stg6_1 <= 1935 }
    // { stg6_update_0_sm7_033[root = 0, stg6_0, stg6_1] -> stg5[1 + stg6_1, 1 + stg6_0] : 0 <= stg6_0 <= 1087 and 0 <= stg6_1 <= 1935 }
    // { stg6_update_0_sm7_033[root = 0, stg6_0, stg6_1] -> stg5[2 + stg6_1, stg6_0] : 0 <= stg6_0 <= 1087 and 0 <= stg6_1 <= 1935 }
  // # of banks: 1
  stg5_stg5_update_0_sm6_031_20_merged_banks_4_cache stg5_stg5_update_0_sm6_031_20_merged_banks_4;
};



inline void stg5_stg5_update_0_sm6_031_20_write(hw_uint<16>& stg5_stg5_update_0_sm6_031_20, stg5_cache& stg5, int root, int stg5_0, int stg5_1, int dynamic_address) {
  stg5.stg5_stg5_update_0_sm6_031_20_merged_banks_4.push(stg5_stg5_update_0_sm6_031_20);
}

inline hw_uint<16> stg5_stg6_update_0_sm7_033_16_select(stg5_cache& stg5, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_stg6_update_0_sm7_033_16 read pattern: { stg6_update_0_sm7_033[root = 0, stg6_0, stg6_1] -> stg5[stg6_1, stg6_0] : 0 <= stg6_0 <= 1087 and 0 <= stg6_1 <= 1935 }
  // Read schedule : { stg6_update_0_sm7_033[d0 = 0, d1, d2] -> [0, 7 + d1, 14 + d2, 7] : 0 <= d1 <= 1087 and 0 <= d2 <= 1935 }
  // Write schedule: { stg5_update_0_sm6_031[d0 = 0, d1, d2] -> [0, 6 + d1, 12 + d2, 6] : 0 <= d1 <= 1088 and 0 <= d2 <= 1937 }
  auto value_stg5_stg5_update_0_sm6_031_20 = stg5.stg5_stg5_update_0_sm6_031_20_merged_banks_4.peek_1940();
  return value_stg5_stg5_update_0_sm6_031_20;
  return 0;
}

inline hw_uint<16> stg5_stg6_update_0_sm7_033_17_select(stg5_cache& stg5, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_stg6_update_0_sm7_033_17 read pattern: { stg6_update_0_sm7_033[root = 0, stg6_0, stg6_1] -> stg5[1 + stg6_1, stg6_0] : 0 <= stg6_0 <= 1087 and 0 <= stg6_1 <= 1935 }
  // Read schedule : { stg6_update_0_sm7_033[d0 = 0, d1, d2] -> [0, 7 + d1, 14 + d2, 7] : 0 <= d1 <= 1087 and 0 <= d2 <= 1935 }
  // Write schedule: { stg5_update_0_sm6_031[d0 = 0, d1, d2] -> [0, 6 + d1, 12 + d2, 6] : 0 <= d1 <= 1088 and 0 <= d2 <= 1937 }
  auto value_stg5_stg5_update_0_sm6_031_20 = stg5.stg5_stg5_update_0_sm6_031_20_merged_banks_4.peek_1939();
  return value_stg5_stg5_update_0_sm6_031_20;
  return 0;
}

inline hw_uint<16> stg5_stg6_update_0_sm7_033_18_select(stg5_cache& stg5, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_stg6_update_0_sm7_033_18 read pattern: { stg6_update_0_sm7_033[root = 0, stg6_0, stg6_1] -> stg5[1 + stg6_1, 1 + stg6_0] : 0 <= stg6_0 <= 1087 and 0 <= stg6_1 <= 1935 }
  // Read schedule : { stg6_update_0_sm7_033[d0 = 0, d1, d2] -> [0, 7 + d1, 14 + d2, 7] : 0 <= d1 <= 1087 and 0 <= d2 <= 1935 }
  // Write schedule: { stg5_update_0_sm6_031[d0 = 0, d1, d2] -> [0, 6 + d1, 12 + d2, 6] : 0 <= d1 <= 1088 and 0 <= d2 <= 1937 }
  auto value_stg5_stg5_update_0_sm6_031_20 = stg5.stg5_stg5_update_0_sm6_031_20_merged_banks_4.peek_1();
  return value_stg5_stg5_update_0_sm6_031_20;
  return 0;
}

inline hw_uint<16> stg5_stg6_update_0_sm7_033_19_select(stg5_cache& stg5, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_stg6_update_0_sm7_033_19 read pattern: { stg6_update_0_sm7_033[root = 0, stg6_0, stg6_1] -> stg5[2 + stg6_1, stg6_0] : 0 <= stg6_0 <= 1087 and 0 <= stg6_1 <= 1935 }
  // Read schedule : { stg6_update_0_sm7_033[d0 = 0, d1, d2] -> [0, 7 + d1, 14 + d2, 7] : 0 <= d1 <= 1087 and 0 <= d2 <= 1935 }
  // Write schedule: { stg5_update_0_sm6_031[d0 = 0, d1, d2] -> [0, 6 + d1, 12 + d2, 6] : 0 <= d1 <= 1088 and 0 <= d2 <= 1937 }
  auto value_stg5_stg5_update_0_sm6_031_20 = stg5.stg5_stg5_update_0_sm6_031_20_merged_banks_4.peek_1938();
  return value_stg5_stg5_update_0_sm6_031_20;
  return 0;
}

// # of bundles = 2
// stg5_update_0_sm6_031_write
//	stg5_stg5_update_0_sm6_031_20
inline void stg5_stg5_update_0_sm6_031_write_bundle_write(hw_uint<16>& stg5_update_0_sm6_031_write, stg5_cache& stg5, int root, int stg5_0, int stg5_1, int dynamic_address) {
	hw_uint<16> stg5_stg5_update_0_sm6_031_20_res = stg5_update_0_sm6_031_write.extract<0, 15>();
	stg5_stg5_update_0_sm6_031_20_write(stg5_stg5_update_0_sm6_031_20_res, stg5, root, stg5_0, stg5_1, dynamic_address);
}

// stg6_update_0_sm7_033_read
//	stg5_stg6_update_0_sm7_033_16
//	stg5_stg6_update_0_sm7_033_17
//	stg5_stg6_update_0_sm7_033_18
//	stg5_stg6_update_0_sm7_033_19
inline hw_uint<64> stg5_stg6_update_0_sm7_033_read_bundle_read(stg5_cache& stg5, int root, int stg6_0, int stg6_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg5_stg6_update_0_sm7_033_16
    // stg5_stg6_update_0_sm7_033_17
    // stg5_stg6_update_0_sm7_033_18
    // stg5_stg6_update_0_sm7_033_19

	hw_uint<64> result;
	hw_uint<16> stg5_stg6_update_0_sm7_033_16_res = stg5_stg6_update_0_sm7_033_16_select(stg5, root, stg6_0, stg6_1, dynamic_address);
	set_at<0, 64>(result, stg5_stg6_update_0_sm7_033_16_res);
	hw_uint<16> stg5_stg6_update_0_sm7_033_17_res = stg5_stg6_update_0_sm7_033_17_select(stg5, root, stg6_0, stg6_1, dynamic_address);
	set_at<16, 64>(result, stg5_stg6_update_0_sm7_033_17_res);
	hw_uint<16> stg5_stg6_update_0_sm7_033_18_res = stg5_stg6_update_0_sm7_033_18_select(stg5, root, stg6_0, stg6_1, dynamic_address);
	set_at<32, 64>(result, stg5_stg6_update_0_sm7_033_18_res);
	hw_uint<16> stg5_stg6_update_0_sm7_033_19_res = stg5_stg6_update_0_sm7_033_19_select(stg5, root, stg6_0, stg6_1, dynamic_address);
	set_at<48, 64>(result, stg5_stg6_update_0_sm7_033_19_res);
	return result;
}

struct stg6_stg6_update_0_sm7_033_15_merged_banks_4_cache {
	// RAM Box: {[0, 1935], [0, 1086]}
	// Capacity: 1939
	// # of read delays: 5
  // 0, 1, 1936, 1937, 1938
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1934> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1935() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1936() {
		return f4;
	}

	inline hw_uint<16> peek_1937() {
		return f6;
	}

	inline hw_uint<16> peek_1938() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1934
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1934 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg6_cache {
  // Reader addrs...
    // { stg7_update_0_sm8_035[root = 0, stg7_0, stg7_1] -> stg6[stg7_1, stg7_0] : 0 <= stg7_0 <= 1086 and 0 <= stg7_1 <= 1933 }
    // { stg7_update_0_sm8_035[root = 0, stg7_0, stg7_1] -> stg6[1 + stg7_1, stg7_0] : 0 <= stg7_0 <= 1086 and 0 <= stg7_1 <= 1933 }
    // { stg7_update_0_sm8_035[root = 0, stg7_0, stg7_1] -> stg6[1 + stg7_1, 1 + stg7_0] : 0 <= stg7_0 <= 1086 and 0 <= stg7_1 <= 1933 }
    // { stg7_update_0_sm8_035[root = 0, stg7_0, stg7_1] -> stg6[2 + stg7_1, stg7_0] : 0 <= stg7_0 <= 1086 and 0 <= stg7_1 <= 1933 }
  // # of banks: 1
  stg6_stg6_update_0_sm7_033_15_merged_banks_4_cache stg6_stg6_update_0_sm7_033_15_merged_banks_4;
};



inline void stg6_stg6_update_0_sm7_033_15_write(hw_uint<16>& stg6_stg6_update_0_sm7_033_15, stg6_cache& stg6, int root, int stg6_0, int stg6_1, int dynamic_address) {
  stg6.stg6_stg6_update_0_sm7_033_15_merged_banks_4.push(stg6_stg6_update_0_sm7_033_15);
}

inline hw_uint<16> stg6_stg7_update_0_sm8_035_11_select(stg6_cache& stg6, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_stg7_update_0_sm8_035_11 read pattern: { stg7_update_0_sm8_035[root = 0, stg7_0, stg7_1] -> stg6[stg7_1, stg7_0] : 0 <= stg7_0 <= 1086 and 0 <= stg7_1 <= 1933 }
  // Read schedule : { stg7_update_0_sm8_035[d0 = 0, d1, d2] -> [0, 8 + d1, 16 + d2, 8] : 0 <= d1 <= 1086 and 0 <= d2 <= 1933 }
  // Write schedule: { stg6_update_0_sm7_033[d0 = 0, d1, d2] -> [0, 7 + d1, 14 + d2, 7] : 0 <= d1 <= 1087 and 0 <= d2 <= 1935 }
  auto value_stg6_stg6_update_0_sm7_033_15 = stg6.stg6_stg6_update_0_sm7_033_15_merged_banks_4.peek_1938();
  return value_stg6_stg6_update_0_sm7_033_15;
  return 0;
}

inline hw_uint<16> stg6_stg7_update_0_sm8_035_12_select(stg6_cache& stg6, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_stg7_update_0_sm8_035_12 read pattern: { stg7_update_0_sm8_035[root = 0, stg7_0, stg7_1] -> stg6[1 + stg7_1, stg7_0] : 0 <= stg7_0 <= 1086 and 0 <= stg7_1 <= 1933 }
  // Read schedule : { stg7_update_0_sm8_035[d0 = 0, d1, d2] -> [0, 8 + d1, 16 + d2, 8] : 0 <= d1 <= 1086 and 0 <= d2 <= 1933 }
  // Write schedule: { stg6_update_0_sm7_033[d0 = 0, d1, d2] -> [0, 7 + d1, 14 + d2, 7] : 0 <= d1 <= 1087 and 0 <= d2 <= 1935 }
  auto value_stg6_stg6_update_0_sm7_033_15 = stg6.stg6_stg6_update_0_sm7_033_15_merged_banks_4.peek_1937();
  return value_stg6_stg6_update_0_sm7_033_15;
  return 0;
}

inline hw_uint<16> stg6_stg7_update_0_sm8_035_13_select(stg6_cache& stg6, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_stg7_update_0_sm8_035_13 read pattern: { stg7_update_0_sm8_035[root = 0, stg7_0, stg7_1] -> stg6[1 + stg7_1, 1 + stg7_0] : 0 <= stg7_0 <= 1086 and 0 <= stg7_1 <= 1933 }
  // Read schedule : { stg7_update_0_sm8_035[d0 = 0, d1, d2] -> [0, 8 + d1, 16 + d2, 8] : 0 <= d1 <= 1086 and 0 <= d2 <= 1933 }
  // Write schedule: { stg6_update_0_sm7_033[d0 = 0, d1, d2] -> [0, 7 + d1, 14 + d2, 7] : 0 <= d1 <= 1087 and 0 <= d2 <= 1935 }
  auto value_stg6_stg6_update_0_sm7_033_15 = stg6.stg6_stg6_update_0_sm7_033_15_merged_banks_4.peek_1();
  return value_stg6_stg6_update_0_sm7_033_15;
  return 0;
}

inline hw_uint<16> stg6_stg7_update_0_sm8_035_14_select(stg6_cache& stg6, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_stg7_update_0_sm8_035_14 read pattern: { stg7_update_0_sm8_035[root = 0, stg7_0, stg7_1] -> stg6[2 + stg7_1, stg7_0] : 0 <= stg7_0 <= 1086 and 0 <= stg7_1 <= 1933 }
  // Read schedule : { stg7_update_0_sm8_035[d0 = 0, d1, d2] -> [0, 8 + d1, 16 + d2, 8] : 0 <= d1 <= 1086 and 0 <= d2 <= 1933 }
  // Write schedule: { stg6_update_0_sm7_033[d0 = 0, d1, d2] -> [0, 7 + d1, 14 + d2, 7] : 0 <= d1 <= 1087 and 0 <= d2 <= 1935 }
  auto value_stg6_stg6_update_0_sm7_033_15 = stg6.stg6_stg6_update_0_sm7_033_15_merged_banks_4.peek_1936();
  return value_stg6_stg6_update_0_sm7_033_15;
  return 0;
}

// # of bundles = 2
// stg6_update_0_sm7_033_write
//	stg6_stg6_update_0_sm7_033_15
inline void stg6_stg6_update_0_sm7_033_write_bundle_write(hw_uint<16>& stg6_update_0_sm7_033_write, stg6_cache& stg6, int root, int stg6_0, int stg6_1, int dynamic_address) {
	hw_uint<16> stg6_stg6_update_0_sm7_033_15_res = stg6_update_0_sm7_033_write.extract<0, 15>();
	stg6_stg6_update_0_sm7_033_15_write(stg6_stg6_update_0_sm7_033_15_res, stg6, root, stg6_0, stg6_1, dynamic_address);
}

// stg7_update_0_sm8_035_read
//	stg6_stg7_update_0_sm8_035_11
//	stg6_stg7_update_0_sm8_035_12
//	stg6_stg7_update_0_sm8_035_13
//	stg6_stg7_update_0_sm8_035_14
inline hw_uint<64> stg6_stg7_update_0_sm8_035_read_bundle_read(stg6_cache& stg6, int root, int stg7_0, int stg7_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg6_stg7_update_0_sm8_035_11
    // stg6_stg7_update_0_sm8_035_12
    // stg6_stg7_update_0_sm8_035_13
    // stg6_stg7_update_0_sm8_035_14

	hw_uint<64> result;
	hw_uint<16> stg6_stg7_update_0_sm8_035_11_res = stg6_stg7_update_0_sm8_035_11_select(stg6, root, stg7_0, stg7_1, dynamic_address);
	set_at<0, 64>(result, stg6_stg7_update_0_sm8_035_11_res);
	hw_uint<16> stg6_stg7_update_0_sm8_035_12_res = stg6_stg7_update_0_sm8_035_12_select(stg6, root, stg7_0, stg7_1, dynamic_address);
	set_at<16, 64>(result, stg6_stg7_update_0_sm8_035_12_res);
	hw_uint<16> stg6_stg7_update_0_sm8_035_13_res = stg6_stg7_update_0_sm8_035_13_select(stg6, root, stg7_0, stg7_1, dynamic_address);
	set_at<32, 64>(result, stg6_stg7_update_0_sm8_035_13_res);
	hw_uint<16> stg6_stg7_update_0_sm8_035_14_res = stg6_stg7_update_0_sm8_035_14_select(stg6, root, stg7_0, stg7_1, dynamic_address);
	set_at<48, 64>(result, stg6_stg7_update_0_sm8_035_14_res);
	return result;
}

struct stg7_stg7_update_0_sm8_035_10_merged_banks_4_cache {
	// RAM Box: {[0, 1933], [0, 1085]}
	// Capacity: 1937
	// # of read delays: 5
  // 0, 1, 1934, 1935, 1936
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1932> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1933() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1934() {
		return f4;
	}

	inline hw_uint<16> peek_1935() {
		return f6;
	}

	inline hw_uint<16> peek_1936() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1932
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1932 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg7_cache {
  // Reader addrs...
    // { stg8_update_0_sm9_037[root = 0, stg8_0, stg8_1] -> stg7[stg8_1, stg8_0] : 0 <= stg8_0 <= 1085 and 0 <= stg8_1 <= 1931 }
    // { stg8_update_0_sm9_037[root = 0, stg8_0, stg8_1] -> stg7[1 + stg8_1, stg8_0] : 0 <= stg8_0 <= 1085 and 0 <= stg8_1 <= 1931 }
    // { stg8_update_0_sm9_037[root = 0, stg8_0, stg8_1] -> stg7[1 + stg8_1, 1 + stg8_0] : 0 <= stg8_0 <= 1085 and 0 <= stg8_1 <= 1931 }
    // { stg8_update_0_sm9_037[root = 0, stg8_0, stg8_1] -> stg7[2 + stg8_1, stg8_0] : 0 <= stg8_0 <= 1085 and 0 <= stg8_1 <= 1931 }
  // # of banks: 1
  stg7_stg7_update_0_sm8_035_10_merged_banks_4_cache stg7_stg7_update_0_sm8_035_10_merged_banks_4;
};



inline void stg7_stg7_update_0_sm8_035_10_write(hw_uint<16>& stg7_stg7_update_0_sm8_035_10, stg7_cache& stg7, int root, int stg7_0, int stg7_1, int dynamic_address) {
  stg7.stg7_stg7_update_0_sm8_035_10_merged_banks_4.push(stg7_stg7_update_0_sm8_035_10);
}

inline hw_uint<16> stg7_stg8_update_0_sm9_037_6_select(stg7_cache& stg7, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_stg8_update_0_sm9_037_6 read pattern: { stg8_update_0_sm9_037[root = 0, stg8_0, stg8_1] -> stg7[stg8_1, stg8_0] : 0 <= stg8_0 <= 1085 and 0 <= stg8_1 <= 1931 }
  // Read schedule : { stg8_update_0_sm9_037[d0 = 0, d1, d2] -> [0, 9 + d1, 18 + d2, 9] : 0 <= d1 <= 1085 and 0 <= d2 <= 1931 }
  // Write schedule: { stg7_update_0_sm8_035[d0 = 0, d1, d2] -> [0, 8 + d1, 16 + d2, 8] : 0 <= d1 <= 1086 and 0 <= d2 <= 1933 }
  auto value_stg7_stg7_update_0_sm8_035_10 = stg7.stg7_stg7_update_0_sm8_035_10_merged_banks_4.peek_1936();
  return value_stg7_stg7_update_0_sm8_035_10;
  return 0;
}

inline hw_uint<16> stg7_stg8_update_0_sm9_037_7_select(stg7_cache& stg7, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_stg8_update_0_sm9_037_7 read pattern: { stg8_update_0_sm9_037[root = 0, stg8_0, stg8_1] -> stg7[1 + stg8_1, stg8_0] : 0 <= stg8_0 <= 1085 and 0 <= stg8_1 <= 1931 }
  // Read schedule : { stg8_update_0_sm9_037[d0 = 0, d1, d2] -> [0, 9 + d1, 18 + d2, 9] : 0 <= d1 <= 1085 and 0 <= d2 <= 1931 }
  // Write schedule: { stg7_update_0_sm8_035[d0 = 0, d1, d2] -> [0, 8 + d1, 16 + d2, 8] : 0 <= d1 <= 1086 and 0 <= d2 <= 1933 }
  auto value_stg7_stg7_update_0_sm8_035_10 = stg7.stg7_stg7_update_0_sm8_035_10_merged_banks_4.peek_1935();
  return value_stg7_stg7_update_0_sm8_035_10;
  return 0;
}

inline hw_uint<16> stg7_stg8_update_0_sm9_037_8_select(stg7_cache& stg7, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_stg8_update_0_sm9_037_8 read pattern: { stg8_update_0_sm9_037[root = 0, stg8_0, stg8_1] -> stg7[1 + stg8_1, 1 + stg8_0] : 0 <= stg8_0 <= 1085 and 0 <= stg8_1 <= 1931 }
  // Read schedule : { stg8_update_0_sm9_037[d0 = 0, d1, d2] -> [0, 9 + d1, 18 + d2, 9] : 0 <= d1 <= 1085 and 0 <= d2 <= 1931 }
  // Write schedule: { stg7_update_0_sm8_035[d0 = 0, d1, d2] -> [0, 8 + d1, 16 + d2, 8] : 0 <= d1 <= 1086 and 0 <= d2 <= 1933 }
  auto value_stg7_stg7_update_0_sm8_035_10 = stg7.stg7_stg7_update_0_sm8_035_10_merged_banks_4.peek_1();
  return value_stg7_stg7_update_0_sm8_035_10;
  return 0;
}

inline hw_uint<16> stg7_stg8_update_0_sm9_037_9_select(stg7_cache& stg7, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_stg8_update_0_sm9_037_9 read pattern: { stg8_update_0_sm9_037[root = 0, stg8_0, stg8_1] -> stg7[2 + stg8_1, stg8_0] : 0 <= stg8_0 <= 1085 and 0 <= stg8_1 <= 1931 }
  // Read schedule : { stg8_update_0_sm9_037[d0 = 0, d1, d2] -> [0, 9 + d1, 18 + d2, 9] : 0 <= d1 <= 1085 and 0 <= d2 <= 1931 }
  // Write schedule: { stg7_update_0_sm8_035[d0 = 0, d1, d2] -> [0, 8 + d1, 16 + d2, 8] : 0 <= d1 <= 1086 and 0 <= d2 <= 1933 }
  auto value_stg7_stg7_update_0_sm8_035_10 = stg7.stg7_stg7_update_0_sm8_035_10_merged_banks_4.peek_1934();
  return value_stg7_stg7_update_0_sm8_035_10;
  return 0;
}

// # of bundles = 2
// stg7_update_0_sm8_035_write
//	stg7_stg7_update_0_sm8_035_10
inline void stg7_stg7_update_0_sm8_035_write_bundle_write(hw_uint<16>& stg7_update_0_sm8_035_write, stg7_cache& stg7, int root, int stg7_0, int stg7_1, int dynamic_address) {
	hw_uint<16> stg7_stg7_update_0_sm8_035_10_res = stg7_update_0_sm8_035_write.extract<0, 15>();
	stg7_stg7_update_0_sm8_035_10_write(stg7_stg7_update_0_sm8_035_10_res, stg7, root, stg7_0, stg7_1, dynamic_address);
}

// stg8_update_0_sm9_037_read
//	stg7_stg8_update_0_sm9_037_6
//	stg7_stg8_update_0_sm9_037_7
//	stg7_stg8_update_0_sm9_037_8
//	stg7_stg8_update_0_sm9_037_9
inline hw_uint<64> stg7_stg8_update_0_sm9_037_read_bundle_read(stg7_cache& stg7, int root, int stg8_0, int stg8_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg7_stg8_update_0_sm9_037_6
    // stg7_stg8_update_0_sm9_037_7
    // stg7_stg8_update_0_sm9_037_8
    // stg7_stg8_update_0_sm9_037_9

	hw_uint<64> result;
	hw_uint<16> stg7_stg8_update_0_sm9_037_6_res = stg7_stg8_update_0_sm9_037_6_select(stg7, root, stg8_0, stg8_1, dynamic_address);
	set_at<0, 64>(result, stg7_stg8_update_0_sm9_037_6_res);
	hw_uint<16> stg7_stg8_update_0_sm9_037_7_res = stg7_stg8_update_0_sm9_037_7_select(stg7, root, stg8_0, stg8_1, dynamic_address);
	set_at<16, 64>(result, stg7_stg8_update_0_sm9_037_7_res);
	hw_uint<16> stg7_stg8_update_0_sm9_037_8_res = stg7_stg8_update_0_sm9_037_8_select(stg7, root, stg8_0, stg8_1, dynamic_address);
	set_at<32, 64>(result, stg7_stg8_update_0_sm9_037_8_res);
	hw_uint<16> stg7_stg8_update_0_sm9_037_9_res = stg7_stg8_update_0_sm9_037_9_select(stg7, root, stg8_0, stg8_1, dynamic_address);
	set_at<48, 64>(result, stg7_stg8_update_0_sm9_037_9_res);
	return result;
}

struct stg8_stg8_update_0_sm9_037_5_merged_banks_4_cache {
	// RAM Box: {[0, 1931], [0, 1084]}
	// Capacity: 1935
	// # of read delays: 5
  // 0, 1, 1932, 1933, 1934
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1930> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1931() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1932() {
		return f4;
	}

	inline hw_uint<16> peek_1933() {
		return f6;
	}

	inline hw_uint<16> peek_1934() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1930
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1930 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg8_cache {
  // Reader addrs...
    // { stg9_update_0_sm10_039[root = 0, stg9_0, stg9_1] -> stg8[stg9_1, stg9_0] : 0 <= stg9_0 <= 1084 and 0 <= stg9_1 <= 1929 }
    // { stg9_update_0_sm10_039[root = 0, stg9_0, stg9_1] -> stg8[1 + stg9_1, stg9_0] : 0 <= stg9_0 <= 1084 and 0 <= stg9_1 <= 1929 }
    // { stg9_update_0_sm10_039[root = 0, stg9_0, stg9_1] -> stg8[1 + stg9_1, 1 + stg9_0] : 0 <= stg9_0 <= 1084 and 0 <= stg9_1 <= 1929 }
    // { stg9_update_0_sm10_039[root = 0, stg9_0, stg9_1] -> stg8[2 + stg9_1, stg9_0] : 0 <= stg9_0 <= 1084 and 0 <= stg9_1 <= 1929 }
  // # of banks: 1
  stg8_stg8_update_0_sm9_037_5_merged_banks_4_cache stg8_stg8_update_0_sm9_037_5_merged_banks_4;
};



inline void stg8_stg8_update_0_sm9_037_5_write(hw_uint<16>& stg8_stg8_update_0_sm9_037_5, stg8_cache& stg8, int root, int stg8_0, int stg8_1, int dynamic_address) {
  stg8.stg8_stg8_update_0_sm9_037_5_merged_banks_4.push(stg8_stg8_update_0_sm9_037_5);
}

inline hw_uint<16> stg8_stg9_update_0_sm10_039_1_select(stg8_cache& stg8, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_stg9_update_0_sm10_039_1 read pattern: { stg9_update_0_sm10_039[root = 0, stg9_0, stg9_1] -> stg8[stg9_1, stg9_0] : 0 <= stg9_0 <= 1084 and 0 <= stg9_1 <= 1929 }
  // Read schedule : { stg9_update_0_sm10_039[d0 = 0, d1, d2] -> [0, 10 + d1, 20 + d2, 10] : 0 <= d1 <= 1084 and 0 <= d2 <= 1929 }
  // Write schedule: { stg8_update_0_sm9_037[d0 = 0, d1, d2] -> [0, 9 + d1, 18 + d2, 9] : 0 <= d1 <= 1085 and 0 <= d2 <= 1931 }
  auto value_stg8_stg8_update_0_sm9_037_5 = stg8.stg8_stg8_update_0_sm9_037_5_merged_banks_4.peek_1934();
  return value_stg8_stg8_update_0_sm9_037_5;
  return 0;
}

inline hw_uint<16> stg8_stg9_update_0_sm10_039_2_select(stg8_cache& stg8, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_stg9_update_0_sm10_039_2 read pattern: { stg9_update_0_sm10_039[root = 0, stg9_0, stg9_1] -> stg8[1 + stg9_1, stg9_0] : 0 <= stg9_0 <= 1084 and 0 <= stg9_1 <= 1929 }
  // Read schedule : { stg9_update_0_sm10_039[d0 = 0, d1, d2] -> [0, 10 + d1, 20 + d2, 10] : 0 <= d1 <= 1084 and 0 <= d2 <= 1929 }
  // Write schedule: { stg8_update_0_sm9_037[d0 = 0, d1, d2] -> [0, 9 + d1, 18 + d2, 9] : 0 <= d1 <= 1085 and 0 <= d2 <= 1931 }
  auto value_stg8_stg8_update_0_sm9_037_5 = stg8.stg8_stg8_update_0_sm9_037_5_merged_banks_4.peek_1933();
  return value_stg8_stg8_update_0_sm9_037_5;
  return 0;
}

inline hw_uint<16> stg8_stg9_update_0_sm10_039_3_select(stg8_cache& stg8, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_stg9_update_0_sm10_039_3 read pattern: { stg9_update_0_sm10_039[root = 0, stg9_0, stg9_1] -> stg8[1 + stg9_1, 1 + stg9_0] : 0 <= stg9_0 <= 1084 and 0 <= stg9_1 <= 1929 }
  // Read schedule : { stg9_update_0_sm10_039[d0 = 0, d1, d2] -> [0, 10 + d1, 20 + d2, 10] : 0 <= d1 <= 1084 and 0 <= d2 <= 1929 }
  // Write schedule: { stg8_update_0_sm9_037[d0 = 0, d1, d2] -> [0, 9 + d1, 18 + d2, 9] : 0 <= d1 <= 1085 and 0 <= d2 <= 1931 }
  auto value_stg8_stg8_update_0_sm9_037_5 = stg8.stg8_stg8_update_0_sm9_037_5_merged_banks_4.peek_1();
  return value_stg8_stg8_update_0_sm9_037_5;
  return 0;
}

inline hw_uint<16> stg8_stg9_update_0_sm10_039_4_select(stg8_cache& stg8, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_stg9_update_0_sm10_039_4 read pattern: { stg9_update_0_sm10_039[root = 0, stg9_0, stg9_1] -> stg8[2 + stg9_1, stg9_0] : 0 <= stg9_0 <= 1084 and 0 <= stg9_1 <= 1929 }
  // Read schedule : { stg9_update_0_sm10_039[d0 = 0, d1, d2] -> [0, 10 + d1, 20 + d2, 10] : 0 <= d1 <= 1084 and 0 <= d2 <= 1929 }
  // Write schedule: { stg8_update_0_sm9_037[d0 = 0, d1, d2] -> [0, 9 + d1, 18 + d2, 9] : 0 <= d1 <= 1085 and 0 <= d2 <= 1931 }
  auto value_stg8_stg8_update_0_sm9_037_5 = stg8.stg8_stg8_update_0_sm9_037_5_merged_banks_4.peek_1932();
  return value_stg8_stg8_update_0_sm9_037_5;
  return 0;
}

// # of bundles = 2
// stg8_update_0_sm9_037_write
//	stg8_stg8_update_0_sm9_037_5
inline void stg8_stg8_update_0_sm9_037_write_bundle_write(hw_uint<16>& stg8_update_0_sm9_037_write, stg8_cache& stg8, int root, int stg8_0, int stg8_1, int dynamic_address) {
	hw_uint<16> stg8_stg8_update_0_sm9_037_5_res = stg8_update_0_sm9_037_write.extract<0, 15>();
	stg8_stg8_update_0_sm9_037_5_write(stg8_stg8_update_0_sm9_037_5_res, stg8, root, stg8_0, stg8_1, dynamic_address);
}

// stg9_update_0_sm10_039_read
//	stg8_stg9_update_0_sm10_039_1
//	stg8_stg9_update_0_sm10_039_2
//	stg8_stg9_update_0_sm10_039_3
//	stg8_stg9_update_0_sm10_039_4
inline hw_uint<64> stg8_stg9_update_0_sm10_039_read_bundle_read(stg8_cache& stg8, int root, int stg9_0, int stg9_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg8_stg9_update_0_sm10_039_1
    // stg8_stg9_update_0_sm10_039_2
    // stg8_stg9_update_0_sm10_039_3
    // stg8_stg9_update_0_sm10_039_4

	hw_uint<64> result;
	hw_uint<16> stg8_stg9_update_0_sm10_039_1_res = stg8_stg9_update_0_sm10_039_1_select(stg8, root, stg9_0, stg9_1, dynamic_address);
	set_at<0, 64>(result, stg8_stg9_update_0_sm10_039_1_res);
	hw_uint<16> stg8_stg9_update_0_sm10_039_2_res = stg8_stg9_update_0_sm10_039_2_select(stg8, root, stg9_0, stg9_1, dynamic_address);
	set_at<16, 64>(result, stg8_stg9_update_0_sm10_039_2_res);
	hw_uint<16> stg8_stg9_update_0_sm10_039_3_res = stg8_stg9_update_0_sm10_039_3_select(stg8, root, stg9_0, stg9_1, dynamic_address);
	set_at<32, 64>(result, stg8_stg9_update_0_sm10_039_3_res);
	hw_uint<16> stg8_stg9_update_0_sm10_039_4_res = stg8_stg9_update_0_sm10_039_4_select(stg8, root, stg9_0, stg9_1, dynamic_address);
	set_at<48, 64>(result, stg8_stg9_update_0_sm10_039_4_res);
	return result;
}

struct stg9_stg9_update_0_sm10_039_0_merged_banks_4_cache {
	// RAM Box: {[0, 1929], [0, 1083]}
	// Capacity: 1933
	// # of read delays: 5
  // 0, 1, 1930, 1931, 1932
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1928> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1929() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1930() {
		return f4;
	}

	inline hw_uint<16> peek_1931() {
		return f6;
	}

	inline hw_uint<16> peek_1932() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1928
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1928 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg9_cache {
  // Reader addrs...
    // { stg10_update_0_sm11_049[root = 0, stg10_0, stg10_1] -> stg9[stg10_1, stg10_0] : 0 <= stg10_0 <= 1083 and 0 <= stg10_1 <= 1927 }
    // { stg10_update_0_sm11_049[root = 0, stg10_0, stg10_1] -> stg9[1 + stg10_1, stg10_0] : 0 <= stg10_0 <= 1083 and 0 <= stg10_1 <= 1927 }
    // { stg10_update_0_sm11_049[root = 0, stg10_0, stg10_1] -> stg9[1 + stg10_1, 1 + stg10_0] : 0 <= stg10_0 <= 1083 and 0 <= stg10_1 <= 1927 }
    // { stg10_update_0_sm11_049[root = 0, stg10_0, stg10_1] -> stg9[2 + stg10_1, stg10_0] : 0 <= stg10_0 <= 1083 and 0 <= stg10_1 <= 1927 }
  // # of banks: 1
  stg9_stg9_update_0_sm10_039_0_merged_banks_4_cache stg9_stg9_update_0_sm10_039_0_merged_banks_4;
};



inline void stg9_stg9_update_0_sm10_039_0_write(hw_uint<16>& stg9_stg9_update_0_sm10_039_0, stg9_cache& stg9, int root, int stg9_0, int stg9_1, int dynamic_address) {
  stg9.stg9_stg9_update_0_sm10_039_0_merged_banks_4.push(stg9_stg9_update_0_sm10_039_0);
}

inline hw_uint<16> stg9_stg10_update_0_sm11_049_66_select(stg9_cache& stg9, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_stg10_update_0_sm11_049_66 read pattern: { stg10_update_0_sm11_049[root = 0, stg10_0, stg10_1] -> stg9[stg10_1, stg10_0] : 0 <= stg10_0 <= 1083 and 0 <= stg10_1 <= 1927 }
  // Read schedule : { stg10_update_0_sm11_049[d0 = 0, d1, d2] -> [0, 11 + d1, 22 + d2, 11] : 0 <= d1 <= 1083 and 0 <= d2 <= 1927 }
  // Write schedule: { stg9_update_0_sm10_039[d0 = 0, d1, d2] -> [0, 10 + d1, 20 + d2, 10] : 0 <= d1 <= 1084 and 0 <= d2 <= 1929 }
  auto value_stg9_stg9_update_0_sm10_039_0 = stg9.stg9_stg9_update_0_sm10_039_0_merged_banks_4.peek_1932();
  return value_stg9_stg9_update_0_sm10_039_0;
  return 0;
}

inline hw_uint<16> stg9_stg10_update_0_sm11_049_67_select(stg9_cache& stg9, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_stg10_update_0_sm11_049_67 read pattern: { stg10_update_0_sm11_049[root = 0, stg10_0, stg10_1] -> stg9[1 + stg10_1, stg10_0] : 0 <= stg10_0 <= 1083 and 0 <= stg10_1 <= 1927 }
  // Read schedule : { stg10_update_0_sm11_049[d0 = 0, d1, d2] -> [0, 11 + d1, 22 + d2, 11] : 0 <= d1 <= 1083 and 0 <= d2 <= 1927 }
  // Write schedule: { stg9_update_0_sm10_039[d0 = 0, d1, d2] -> [0, 10 + d1, 20 + d2, 10] : 0 <= d1 <= 1084 and 0 <= d2 <= 1929 }
  auto value_stg9_stg9_update_0_sm10_039_0 = stg9.stg9_stg9_update_0_sm10_039_0_merged_banks_4.peek_1931();
  return value_stg9_stg9_update_0_sm10_039_0;
  return 0;
}

inline hw_uint<16> stg9_stg10_update_0_sm11_049_68_select(stg9_cache& stg9, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_stg10_update_0_sm11_049_68 read pattern: { stg10_update_0_sm11_049[root = 0, stg10_0, stg10_1] -> stg9[1 + stg10_1, 1 + stg10_0] : 0 <= stg10_0 <= 1083 and 0 <= stg10_1 <= 1927 }
  // Read schedule : { stg10_update_0_sm11_049[d0 = 0, d1, d2] -> [0, 11 + d1, 22 + d2, 11] : 0 <= d1 <= 1083 and 0 <= d2 <= 1927 }
  // Write schedule: { stg9_update_0_sm10_039[d0 = 0, d1, d2] -> [0, 10 + d1, 20 + d2, 10] : 0 <= d1 <= 1084 and 0 <= d2 <= 1929 }
  auto value_stg9_stg9_update_0_sm10_039_0 = stg9.stg9_stg9_update_0_sm10_039_0_merged_banks_4.peek_1();
  return value_stg9_stg9_update_0_sm10_039_0;
  return 0;
}

inline hw_uint<16> stg9_stg10_update_0_sm11_049_69_select(stg9_cache& stg9, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_stg10_update_0_sm11_049_69 read pattern: { stg10_update_0_sm11_049[root = 0, stg10_0, stg10_1] -> stg9[2 + stg10_1, stg10_0] : 0 <= stg10_0 <= 1083 and 0 <= stg10_1 <= 1927 }
  // Read schedule : { stg10_update_0_sm11_049[d0 = 0, d1, d2] -> [0, 11 + d1, 22 + d2, 11] : 0 <= d1 <= 1083 and 0 <= d2 <= 1927 }
  // Write schedule: { stg9_update_0_sm10_039[d0 = 0, d1, d2] -> [0, 10 + d1, 20 + d2, 10] : 0 <= d1 <= 1084 and 0 <= d2 <= 1929 }
  auto value_stg9_stg9_update_0_sm10_039_0 = stg9.stg9_stg9_update_0_sm10_039_0_merged_banks_4.peek_1930();
  return value_stg9_stg9_update_0_sm10_039_0;
  return 0;
}

// # of bundles = 2
// stg10_update_0_sm11_049_read
//	stg9_stg10_update_0_sm11_049_66
//	stg9_stg10_update_0_sm11_049_67
//	stg9_stg10_update_0_sm11_049_68
//	stg9_stg10_update_0_sm11_049_69
inline hw_uint<64> stg9_stg10_update_0_sm11_049_read_bundle_read(stg9_cache& stg9, int root, int stg10_0, int stg10_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg9_stg10_update_0_sm11_049_66
    // stg9_stg10_update_0_sm11_049_67
    // stg9_stg10_update_0_sm11_049_68
    // stg9_stg10_update_0_sm11_049_69

	hw_uint<64> result;
	hw_uint<16> stg9_stg10_update_0_sm11_049_66_res = stg9_stg10_update_0_sm11_049_66_select(stg9, root, stg10_0, stg10_1, dynamic_address);
	set_at<0, 64>(result, stg9_stg10_update_0_sm11_049_66_res);
	hw_uint<16> stg9_stg10_update_0_sm11_049_67_res = stg9_stg10_update_0_sm11_049_67_select(stg9, root, stg10_0, stg10_1, dynamic_address);
	set_at<16, 64>(result, stg9_stg10_update_0_sm11_049_67_res);
	hw_uint<16> stg9_stg10_update_0_sm11_049_68_res = stg9_stg10_update_0_sm11_049_68_select(stg9, root, stg10_0, stg10_1, dynamic_address);
	set_at<32, 64>(result, stg9_stg10_update_0_sm11_049_68_res);
	hw_uint<16> stg9_stg10_update_0_sm11_049_69_res = stg9_stg10_update_0_sm11_049_69_select(stg9, root, stg10_0, stg10_1, dynamic_address);
	set_at<48, 64>(result, stg9_stg10_update_0_sm11_049_69_res);
	return result;
}

// stg9_update_0_sm10_039_write
//	stg9_stg9_update_0_sm10_039_0
inline void stg9_stg9_update_0_sm10_039_write_bundle_write(hw_uint<16>& stg9_update_0_sm10_039_write, stg9_cache& stg9, int root, int stg9_0, int stg9_1, int dynamic_address) {
	hw_uint<16> stg9_stg9_update_0_sm10_039_0_res = stg9_update_0_sm10_039_write.extract<0, 15>();
	stg9_stg9_update_0_sm10_039_0_write(stg9_stg9_update_0_sm10_039_0_res, stg9, root, stg9_0, stg9_1, dynamic_address);
}

// Total re-use buffer capacity: 465120 bits


// Operation logic
inline void stg11_update_0_sm12_017(stg10_cache& stg10, stg11_cache& stg11, int root, int stg11_0, int stg11_1) {
  // Dynamic address computation

	// Consume: stg10
	auto stg10_1_m__lp__lp_1_m_stg11_1__p__0_rp___p___m_3_rp___p___m_1_p_4_c______1_m_stg11_0__p__0_p_0_value = stg10_stg11_update_0_sm12_017_read_bundle_read(stg10/* source_delay */, root, stg11_0, stg11_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg11_generated_compute_unrolled_1(stg10_1_m__lp__lp_1_m_stg11_1__p__0_rp___p___m_3_rp___p___m_1_p_4_c______1_m_stg11_0__p__0_p_0_value);
	// Produce: stg11
	stg11_stg11_update_0_sm12_017_write_bundle_write(/* arg names */compute_result, stg11, root, stg11_0, stg11_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg12_update_0_sm13_019(stg11_cache& stg11, stg12_cache& stg12, int root, int stg12_0, int stg12_1) {
  // Dynamic address computation

	// Consume: stg11
	auto stg11_1_m__lp__lp_1_m_stg12_1__p__0_rp___p___m_2_rp___p___m_1_p_3_c______1_m_stg12_0__p__0_p_0_value = stg11_stg12_update_0_sm13_019_read_bundle_read(stg11/* source_delay */, root, stg12_0, stg12_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg12_generated_compute_unrolled_1(stg11_1_m__lp__lp_1_m_stg12_1__p__0_rp___p___m_2_rp___p___m_1_p_3_c______1_m_stg12_0__p__0_p_0_value);
	// Produce: stg12
	stg12_stg12_update_0_sm13_019_write_bundle_write(/* arg names */compute_result, stg12, root, stg12_0, stg12_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg14_update_0_sm15_023(stg13_cache& stg13, stg14_cache& stg14, int root, int stg14_0, int stg14_1) {
  // Dynamic address computation

	// Consume: stg13
	auto stg13_1_m__lp_1_m_stg14_1__p__0_rp___p___m_1_p_1_c_____1_m_stg14_0__p__0_p_0_value = stg13_stg14_update_0_sm15_023_read_bundle_read(stg13/* source_delay */, root, stg14_0, stg14_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg14_generated_compute_unrolled_1(stg13_1_m__lp_1_m_stg14_1__p__0_rp___p___m_1_p_1_c_____1_m_stg14_0__p__0_p_0_value);
	// Produce: stg14
	stg14_stg14_update_0_sm15_023_write_bundle_write(/* arg names */compute_result, stg14, root, stg14_0, stg14_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg13_update_0_sm14_021(stg12_cache& stg12, stg13_cache& stg13, int root, int stg13_0, int stg13_1) {
  // Dynamic address computation

	// Consume: stg12
	auto stg12_1_m__lp__lp_1_m_stg13_1__p__0_rp___p___m_1_rp___p___m_1_p_2_c______1_m_stg13_0__p__0_p_0_value = stg12_stg13_update_0_sm14_021_read_bundle_read(stg12/* source_delay */, root, stg13_0, stg13_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg13_generated_compute_unrolled_1(stg12_1_m__lp__lp_1_m_stg13_1__p__0_rp___p___m_1_rp___p___m_1_p_2_c______1_m_stg13_0__p__0_p_0_value);
	// Produce: stg13
	stg13_stg13_update_0_sm14_021_write_bundle_write(/* arg names */compute_result, stg13, root, stg13_0, stg13_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void jac9_1_update_0_sm16_025(stg14_cache& stg14, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */jac9_1, int root, int jac9_1_0, int jac9_1_1) {
  // Dynamic address computation

	// Consume: stg14
	auto stg14_1_m__lp_1_m_jac9_1_1__p__0_rp___p__0_p_0_c_____1_m_jac9_1_0__p__0_p_0_value = stg14_jac9_1_update_0_sm16_025_read_bundle_read(stg14/* source_delay */, root, jac9_1_0, jac9_1_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = jac9_1_generated_compute_unrolled_1(stg14_1_m__lp_1_m_jac9_1_1__p__0_rp___p__0_p_0_c_____1_m_jac9_1_0__p__0_p_0_value);
	// Produce: jac9_1
	jac9_1.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg0_update_0_sm1_027(in_cache& in, stg0_cache& stg0, int root, int stg0_0, int stg0_1) {
  // Dynamic address computation

	// Consume: in
	auto in_1_m__lp__lp_1_m_stg0_1__p__0_rp___p___m_14_rp___p___m_1_p_15_c______1_m_stg0_0__p__0_p_0_value = in_stg0_update_0_sm1_027_read_bundle_read(in/* source_delay */, root, stg0_0, stg0_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg0_generated_compute_unrolled_1(in_1_m__lp__lp_1_m_stg0_1__p__0_rp___p___m_14_rp___p___m_1_p_15_c______1_m_stg0_0__p__0_p_0_value);
	// Produce: stg0
	stg0_stg0_update_0_sm1_027_write_bundle_write(/* arg names */compute_result, stg0, root, stg0_0, stg0_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg4_update_0_sm5_029(stg3_cache& stg3, stg4_cache& stg4, int root, int stg4_0, int stg4_1) {
  // Dynamic address computation

	// Consume: stg3
	auto stg3_1_m__lp__lp_1_m_stg4_1__p__0_rp___p___m_10_rp___p___m_1_p_11_c______1_m_stg4_0__p__0_p_0_value = stg3_stg4_update_0_sm5_029_read_bundle_read(stg3/* source_delay */, root, stg4_0, stg4_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg4_generated_compute_unrolled_1(stg3_1_m__lp__lp_1_m_stg4_1__p__0_rp___p___m_10_rp___p___m_1_p_11_c______1_m_stg4_0__p__0_p_0_value);
	// Produce: stg4
	stg4_stg4_update_0_sm5_029_write_bundle_write(/* arg names */compute_result, stg4, root, stg4_0, stg4_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg5_update_0_sm6_031(stg4_cache& stg4, stg5_cache& stg5, int root, int stg5_0, int stg5_1) {
  // Dynamic address computation

	// Consume: stg4
	auto stg4_1_m__lp__lp_1_m_stg5_1__p__0_rp___p___m_9_rp___p___m_1_p_10_c______1_m_stg5_0__p__0_p_0_value = stg4_stg5_update_0_sm6_031_read_bundle_read(stg4/* source_delay */, root, stg5_0, stg5_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg5_generated_compute_unrolled_1(stg4_1_m__lp__lp_1_m_stg5_1__p__0_rp___p___m_9_rp___p___m_1_p_10_c______1_m_stg5_0__p__0_p_0_value);
	// Produce: stg5
	stg5_stg5_update_0_sm6_031_write_bundle_write(/* arg names */compute_result, stg5, root, stg5_0, stg5_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg6_update_0_sm7_033(stg5_cache& stg5, stg6_cache& stg6, int root, int stg6_0, int stg6_1) {
  // Dynamic address computation

	// Consume: stg5
	auto stg5_1_m__lp__lp_1_m_stg6_1__p__0_rp___p___m_8_rp___p___m_1_p_9_c______1_m_stg6_0__p__0_p_0_value = stg5_stg6_update_0_sm7_033_read_bundle_read(stg5/* source_delay */, root, stg6_0, stg6_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg6_generated_compute_unrolled_1(stg5_1_m__lp__lp_1_m_stg6_1__p__0_rp___p___m_8_rp___p___m_1_p_9_c______1_m_stg6_0__p__0_p_0_value);
	// Produce: stg6
	stg6_stg6_update_0_sm7_033_write_bundle_write(/* arg names */compute_result, stg6, root, stg6_0, stg6_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg7_update_0_sm8_035(stg6_cache& stg6, stg7_cache& stg7, int root, int stg7_0, int stg7_1) {
  // Dynamic address computation

	// Consume: stg6
	auto stg6_1_m__lp__lp_1_m_stg7_1__p__0_rp___p___m_7_rp___p___m_1_p_8_c______1_m_stg7_0__p__0_p_0_value = stg6_stg7_update_0_sm8_035_read_bundle_read(stg6/* source_delay */, root, stg7_0, stg7_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg7_generated_compute_unrolled_1(stg6_1_m__lp__lp_1_m_stg7_1__p__0_rp___p___m_7_rp___p___m_1_p_8_c______1_m_stg7_0__p__0_p_0_value);
	// Produce: stg7
	stg7_stg7_update_0_sm8_035_write_bundle_write(/* arg names */compute_result, stg7, root, stg7_0, stg7_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg8_update_0_sm9_037(stg7_cache& stg7, stg8_cache& stg8, int root, int stg8_0, int stg8_1) {
  // Dynamic address computation

	// Consume: stg7
	auto stg7_1_m__lp__lp_1_m_stg8_1__p__0_rp___p___m_6_rp___p___m_1_p_7_c______1_m_stg8_0__p__0_p_0_value = stg7_stg8_update_0_sm9_037_read_bundle_read(stg7/* source_delay */, root, stg8_0, stg8_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg8_generated_compute_unrolled_1(stg7_1_m__lp__lp_1_m_stg8_1__p__0_rp___p___m_6_rp___p___m_1_p_7_c______1_m_stg8_0__p__0_p_0_value);
	// Produce: stg8
	stg8_stg8_update_0_sm9_037_write_bundle_write(/* arg names */compute_result, stg8, root, stg8_0, stg8_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg9_update_0_sm10_039(stg8_cache& stg8, stg9_cache& stg9, int root, int stg9_0, int stg9_1) {
  // Dynamic address computation

	// Consume: stg8
	auto stg8_1_m__lp__lp_1_m_stg9_1__p__0_rp___p___m_5_rp___p___m_1_p_6_c______1_m_stg9_0__p__0_p_0_value = stg8_stg9_update_0_sm10_039_read_bundle_read(stg8/* source_delay */, root, stg9_0, stg9_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg9_generated_compute_unrolled_1(stg8_1_m__lp__lp_1_m_stg9_1__p__0_rp___p___m_5_rp___p___m_1_p_6_c______1_m_stg9_0__p__0_p_0_value);
	// Produce: stg9
	stg9_stg9_update_0_sm10_039_write_bundle_write(/* arg names */compute_result, stg9, root, stg9_0, stg9_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_update_0_sm0_041(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */in_off_chip, in_cache& in, int root, int in_0, int in_1) {
  // Dynamic address computation

	// Consume: in_off_chip
	auto in_off_chip_1_m__lp__lp_1_m_in_1__p__0_rp___p___m_15_rp___p__0_p_15_c______1_m_in_0__p__0_p_0_value = in_off_chip.read();
	auto compute_result = in_generated_compute_unrolled_1(in_off_chip_1_m__lp__lp_1_m_in_1__p__0_rp___p___m_15_rp___p__0_p_15_c______1_m_in_0__p__0_p_0_value);
	// Produce: in
	in_in_update_0_sm0_041_write_bundle_write(/* arg names */compute_result, in, root, in_0, in_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg3_update_0_sm4_043(stg2_cache& stg2, stg3_cache& stg3, int root, int stg3_0, int stg3_1) {
  // Dynamic address computation

	// Consume: stg2
	auto stg2_1_m__lp__lp_1_m_stg3_1__p__0_rp___p___m_11_rp___p___m_1_p_12_c______1_m_stg3_0__p__0_p_0_value = stg2_stg3_update_0_sm4_043_read_bundle_read(stg2/* source_delay */, root, stg3_0, stg3_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg3_generated_compute_unrolled_1(stg2_1_m__lp__lp_1_m_stg3_1__p__0_rp___p___m_11_rp___p___m_1_p_12_c______1_m_stg3_0__p__0_p_0_value);
	// Produce: stg3
	stg3_stg3_update_0_sm4_043_write_bundle_write(/* arg names */compute_result, stg3, root, stg3_0, stg3_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg1_update_0_sm2_045(stg0_cache& stg0, stg1_cache& stg1, int root, int stg1_0, int stg1_1) {
  // Dynamic address computation

	// Consume: stg0
	auto stg0_1_m__lp__lp_1_m_stg1_1__p__0_rp___p___m_13_rp___p___m_1_p_14_c______1_m_stg1_0__p__0_p_0_value = stg0_stg1_update_0_sm2_045_read_bundle_read(stg0/* source_delay */, root, stg1_0, stg1_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg1_generated_compute_unrolled_1(stg0_1_m__lp__lp_1_m_stg1_1__p__0_rp___p___m_13_rp___p___m_1_p_14_c______1_m_stg1_0__p__0_p_0_value);
	// Produce: stg1
	stg1_stg1_update_0_sm2_045_write_bundle_write(/* arg names */compute_result, stg1, root, stg1_0, stg1_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg2_update_0_sm3_047(stg1_cache& stg1, stg2_cache& stg2, int root, int stg2_0, int stg2_1) {
  // Dynamic address computation

	// Consume: stg1
	auto stg1_1_m__lp__lp_1_m_stg2_1__p__0_rp___p___m_12_rp___p___m_1_p_13_c______1_m_stg2_0__p__0_p_0_value = stg1_stg2_update_0_sm3_047_read_bundle_read(stg1/* source_delay */, root, stg2_0, stg2_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg2_generated_compute_unrolled_1(stg1_1_m__lp__lp_1_m_stg2_1__p__0_rp___p___m_12_rp___p___m_1_p_13_c______1_m_stg2_0__p__0_p_0_value);
	// Produce: stg2
	stg2_stg2_update_0_sm3_047_write_bundle_write(/* arg names */compute_result, stg2, root, stg2_0, stg2_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg10_update_0_sm11_049(stg9_cache& stg9, stg10_cache& stg10, int root, int stg10_0, int stg10_1) {
  // Dynamic address computation

	// Consume: stg9
	auto stg9_1_m__lp__lp_1_m_stg10_1__p__0_rp___p___m_4_rp___p___m_1_p_5_c______1_m_stg10_0__p__0_p_0_value = stg9_stg10_update_0_sm11_049_read_bundle_read(stg9/* source_delay */, root, stg10_0, stg10_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg10_generated_compute_unrolled_1(stg9_1_m__lp__lp_1_m_stg10_1__p__0_rp___p___m_4_rp___p___m_1_p_5_c______1_m_stg10_0__p__0_p_0_value);
	// Produce: stg10
	stg10_stg10_update_0_sm11_049_write_bundle_write(/* arg names */compute_result, stg10, root, stg10_0, stg10_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void jac9_1_opt(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */jac9_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("jac9_1_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_cache in;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg0_cache stg0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg1_cache stg1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg10_cache stg10;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg11_cache stg11;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg12_cache stg12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg13_cache stg13;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg14_cache stg14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg2_cache stg2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg3_cache stg3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg4_cache stg4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg5_cache stg5;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg6_cache stg6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg7_cache stg7;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg8_cache stg8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg9_cache stg9;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { stg10_update_0_sm11_049[d0 = 0, d1, d2] -> [0, 11 + d1, 22 + d2, 11] : 0 <= d1 <= 1083 and 0 <= d2 <= 1927; stg5_update_0_sm6_031[d0 = 0, d1, d2] -> [0, 6 + d1, 12 + d2, 6] : 0 <= d1 <= 1088 and 0 <= d2 <= 1937; stg8_update_0_sm9_037[d0 = 0, d1, d2] -> [0, 9 + d1, 18 + d2, 9] : 0 <= d1 <= 1085 and 0 <= d2 <= 1931; jac9_1_update_0_sm16_025[d0 = 0, d1, d2] -> [0, 15 + d1, 30 + d2, 16] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919; stg12_update_0_sm13_019[d0 = 0, d1, d2] -> [0, 13 + d1, 26 + d2, 13] : 0 <= d1 <= 1081 and 0 <= d2 <= 1923; stg6_update_0_sm7_033[d0 = 0, d1, d2] -> [0, 7 + d1, 14 + d2, 7] : 0 <= d1 <= 1087 and 0 <= d2 <= 1935; stg1_update_0_sm2_045[d0 = 0, d1, d2] -> [0, 2 + d1, 4 + d2, 2] : 0 <= d1 <= 1092 and 0 <= d2 <= 1945; stg0_update_0_sm1_027[d0 = 0, d1, d2] -> [0, 1 + d1, 2 + d2, 1] : 0 <= d1 <= 1093 and 0 <= d2 <= 1947; stg9_update_0_sm10_039[d0 = 0, d1, d2] -> [0, 10 + d1, 20 + d2, 10] : 0 <= d1 <= 1084 and 0 <= d2 <= 1929; stg4_update_0_sm5_029[d0 = 0, d1, d2] -> [0, 5 + d1, 10 + d2, 5] : 0 <= d1 <= 1089 and 0 <= d2 <= 1939; stg14_update_0_sm15_023[d0 = 0, d1, d2] -> [0, 15 + d1, 30 + d2, 15] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919; stg3_update_0_sm4_043[d0 = 0, d1, d2] -> [0, 4 + d1, 8 + d2, 4] : 0 <= d1 <= 1090 and 0 <= d2 <= 1941; stg7_update_0_sm8_035[d0 = 0, d1, d2] -> [0, 8 + d1, 16 + d2, 8] : 0 <= d1 <= 1086 and 0 <= d2 <= 1933; stg11_update_0_sm12_017[d0 = 0, d1, d2] -> [0, 12 + d1, 24 + d2, 12] : 0 <= d1 <= 1082 and 0 <= d2 <= 1925; stg2_update_0_sm3_047[d0 = 0, d1, d2] -> [0, 3 + d1, 6 + d2, 3] : 0 <= d1 <= 1091 and 0 <= d2 <= 1943; in_update_0_sm0_041[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1094 and 0 <= d2 <= 1949; stg13_update_0_sm14_021[d0 = 0, d1, d2] -> [0, 14 + d1, 28 + d2, 14] : 0 <= d1 <= 1080 and 0 <= d2 <= 1921 }
//   { stg10_update_0_sm11_049[d0 = 0, d1, d2] -> [0, 11 + d1, 22 + d2, 11] : 0 <= d1 <= 1083 and 0 <= d2 <= 1927 }
// Condition for stg10_update_0_sm11_049(((((-11 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-11 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-22 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { stg5_update_0_sm6_031[d0 = 0, d1, d2] -> [0, 6 + d1, 12 + d2, 6] : 0 <= d1 <= 1088 and 0 <= d2 <= 1937 }
// Condition for stg5_update_0_sm6_031(((((-6 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-12 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { stg8_update_0_sm9_037[d0 = 0, d1, d2] -> [0, 9 + d1, 18 + d2, 9] : 0 <= d1 <= 1085 and 0 <= d2 <= 1931 }
// Condition for stg8_update_0_sm9_037(((((-9 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-9 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-18 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { jac9_1_update_0_sm16_025[d0 = 0, d1, d2] -> [0, 15 + d1, 30 + d2, 16] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for jac9_1_update_0_sm16_025(((((-16 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-15 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-30 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { stg12_update_0_sm13_019[d0 = 0, d1, d2] -> [0, 13 + d1, 26 + d2, 13] : 0 <= d1 <= 1081 and 0 <= d2 <= 1923 }
// Condition for stg12_update_0_sm13_019(((((-13 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-13 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-26 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { stg6_update_0_sm7_033[d0 = 0, d1, d2] -> [0, 7 + d1, 14 + d2, 7] : 0 <= d1 <= 1087 and 0 <= d2 <= 1935 }
// Condition for stg6_update_0_sm7_033(((((-7 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-7 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { stg1_update_0_sm2_045[d0 = 0, d1, d2] -> [0, 2 + d1, 4 + d2, 2] : 0 <= d1 <= 1092 and 0 <= d2 <= 1945 }
// Condition for stg1_update_0_sm2_045(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { stg0_update_0_sm1_027[d0 = 0, d1, d2] -> [0, 1 + d1, 2 + d2, 1] : 0 <= d1 <= 1093 and 0 <= d2 <= 1947 }
// Condition for stg0_update_0_sm1_027(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-1 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { stg9_update_0_sm10_039[d0 = 0, d1, d2] -> [0, 10 + d1, 20 + d2, 10] : 0 <= d1 <= 1084 and 0 <= d2 <= 1929 }
// Condition for stg9_update_0_sm10_039(((((-10 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-20 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { stg4_update_0_sm5_029[d0 = 0, d1, d2] -> [0, 5 + d1, 10 + d2, 5] : 0 <= d1 <= 1089 and 0 <= d2 <= 1939 }
// Condition for stg4_update_0_sm5_029(((((-5 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-5 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { stg14_update_0_sm15_023[d0 = 0, d1, d2] -> [0, 15 + d1, 30 + d2, 15] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for stg14_update_0_sm15_023(((((-15 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-15 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-30 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { stg3_update_0_sm4_043[d0 = 0, d1, d2] -> [0, 4 + d1, 8 + d2, 4] : 0 <= d1 <= 1090 and 0 <= d2 <= 1941 }
// Condition for stg3_update_0_sm4_043(((((-4 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { stg7_update_0_sm8_035[d0 = 0, d1, d2] -> [0, 8 + d1, 16 + d2, 8] : 0 <= d1 <= 1086 and 0 <= d2 <= 1933 }
// Condition for stg7_update_0_sm8_035(((((-8 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-16 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { stg11_update_0_sm12_017[d0 = 0, d1, d2] -> [0, 12 + d1, 24 + d2, 12] : 0 <= d1 <= 1082 and 0 <= d2 <= 1925 }
// Condition for stg11_update_0_sm12_017(((((-12 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-12 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-24 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { stg2_update_0_sm3_047[d0 = 0, d1, d2] -> [0, 3 + d1, 6 + d2, 3] : 0 <= d1 <= 1091 and 0 <= d2 <= 1943 }
// Condition for stg2_update_0_sm3_047(((((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { in_update_0_sm0_041[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1094 and 0 <= d2 <= 1949 }
// Condition for in_update_0_sm0_041(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { stg13_update_0_sm14_021[d0 = 0, d1, d2] -> [0, 14 + d1, 28 + d2, 14] : 0 <= d1 <= 1080 and 0 <= d2 <= 1921 }
// Condition for stg13_update_0_sm14_021(((((-14 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-28 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 15 <= i1 <= 1094 and 30 <= i2 <= 1949 and 15 <= i3 <= 16; [0, i1, i2, 14] : 14 <= i1 <= 1094 and 28 <= i2 <= 1949; [0, i1, i2, 13] : 13 <= i1 <= 1094 and 26 <= i2 <= 1949; [0, i1, i2, 12] : 12 <= i1 <= 1094 and 24 <= i2 <= 1949; [0, i1, i2, 11] : 11 <= i1 <= 1094 and 22 <= i2 <= 1949; [0, i1, i2, 10] : 10 <= i1 <= 1094 and 20 <= i2 <= 1949; [0, i1, i2, 9] : 9 <= i1 <= 1094 and 18 <= i2 <= 1949; [0, i1, i2, 8] : 8 <= i1 <= 1094 and 16 <= i2 <= 1949; [0, i1, i2, 7] : 7 <= i1 <= 1094 and 14 <= i2 <= 1949; [0, i1, i2, 6] : 6 <= i1 <= 1094 and 12 <= i2 <= 1949; [0, i1, i2, 5] : 5 <= i1 <= 1094 and 10 <= i2 <= 1949; [0, i1, i2, 4] : 4 <= i1 <= 1094 and 8 <= i2 <= 1949; [0, i1, i2, 3] : 3 <= i1 <= 1094 and 6 <= i2 <= 1949; [0, i1, i2, 2] : 2 <= i1 <= 1094 and 4 <= i2 <= 1949; [0, i1, i2, 1] : 0 < i1 <= 1094 and 2 <= i2 <= 1949; [0, i1, i2, 0] : 0 <= i1 <= 1094 and 0 <= i2 <= 1949 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 1094; i1++) {
	    for (int i2 = 0; i2 <= 1949; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          in_update_0_sm0_041(in_off_chip /* buf name */, in, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i1 > 0 and i2 >= 2 }
	        // { [i0, i1, i2] : i1 > 0 and i2 >= 2 }
	          // { [i0, i1, i2] : -1 + i1 >= 0 }
	          // { [i0, i1, i2] : -2 + i2 >= 0 }
	        if ((((((-1 + 1*i1)) >= 0) && (((-2 + 1*i2)) >= 0)))) {
	          stg0_update_0_sm1_027(in /* buf name */, stg0, 0, ((-1 + 1*i1)), ((-2 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 2 and i2 >= 4 }
	        // { [i0, i1, i2] : i1 >= 2 and i2 >= 4 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	        if ((((((-2 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0)))) {
	          stg1_update_0_sm2_045(stg0 /* buf name */, stg1, 0, ((-2 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 3 and i2 >= 6 }
	        // { [i0, i1, i2] : i1 >= 3 and i2 >= 6 }
	          // { [i0, i1, i2] : -3 + i1 >= 0 }
	          // { [i0, i1, i2] : -6 + i2 >= 0 }
	        if ((((((-3 + 1*i1)) >= 0) && (((-6 + 1*i2)) >= 0)))) {
	          stg2_update_0_sm3_047(stg1 /* buf name */, stg2, 0, ((-3 + 1*i1)), ((-6 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 4 and i2 >= 8 }
	        // { [i0, i1, i2] : i1 >= 4 and i2 >= 8 }
	          // { [i0, i1, i2] : -4 + i1 >= 0 }
	          // { [i0, i1, i2] : -8 + i2 >= 0 }
	        if ((((((-4 + 1*i1)) >= 0) && (((-8 + 1*i2)) >= 0)))) {
	          stg3_update_0_sm4_043(stg2 /* buf name */, stg3, 0, ((-4 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 5 and i2 >= 10 }
	        // { [i0, i1, i2] : i1 >= 5 and i2 >= 10 }
	          // { [i0, i1, i2] : -5 + i1 >= 0 }
	          // { [i0, i1, i2] : -10 + i2 >= 0 }
	        if ((((((-5 + 1*i1)) >= 0) && (((-10 + 1*i2)) >= 0)))) {
	          stg4_update_0_sm5_029(stg3 /* buf name */, stg4, 0, ((-5 + 1*i1)), ((-10 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 12 }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 12 }
	          // { [i0, i1, i2] : -6 + i1 >= 0 }
	          // { [i0, i1, i2] : -12 + i2 >= 0 }
	        if ((((((-6 + 1*i1)) >= 0) && (((-12 + 1*i2)) >= 0)))) {
	          stg5_update_0_sm6_031(stg4 /* buf name */, stg5, 0, ((-6 + 1*i1)), ((-12 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 7 and i2 >= 14 }
	        // { [i0, i1, i2] : i1 >= 7 and i2 >= 14 }
	          // { [i0, i1, i2] : -7 + i1 >= 0 }
	          // { [i0, i1, i2] : -14 + i2 >= 0 }
	        if ((((((-7 + 1*i1)) >= 0) && (((-14 + 1*i2)) >= 0)))) {
	          stg6_update_0_sm7_033(stg5 /* buf name */, stg6, 0, ((-7 + 1*i1)), ((-14 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 8 and i2 >= 16 }
	        // { [i0, i1, i2] : i1 >= 8 and i2 >= 16 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	          // { [i0, i1, i2] : -16 + i2 >= 0 }
	        if ((((((-8 + 1*i1)) >= 0) && (((-16 + 1*i2)) >= 0)))) {
	          stg7_update_0_sm8_035(stg6 /* buf name */, stg7, 0, ((-8 + 1*i1)), ((-16 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 9 and i2 >= 18 }
	        // { [i0, i1, i2] : i1 >= 9 and i2 >= 18 }
	          // { [i0, i1, i2] : -9 + i1 >= 0 }
	          // { [i0, i1, i2] : -18 + i2 >= 0 }
	        if ((((((-9 + 1*i1)) >= 0) && (((-18 + 1*i2)) >= 0)))) {
	          stg8_update_0_sm9_037(stg7 /* buf name */, stg8, 0, ((-9 + 1*i1)), ((-18 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 10 and i2 >= 20 }
	        // { [i0, i1, i2] : i1 >= 10 and i2 >= 20 }
	          // { [i0, i1, i2] : -10 + i1 >= 0 }
	          // { [i0, i1, i2] : -20 + i2 >= 0 }
	        if ((((((-10 + 1*i1)) >= 0) && (((-20 + 1*i2)) >= 0)))) {
	          stg9_update_0_sm10_039(stg8 /* buf name */, stg9, 0, ((-10 + 1*i1)), ((-20 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 11 and i2 >= 22 }
	        // { [i0, i1, i2] : i1 >= 11 and i2 >= 22 }
	          // { [i0, i1, i2] : -11 + i1 >= 0 }
	          // { [i0, i1, i2] : -22 + i2 >= 0 }
	        if ((((((-11 + 1*i1)) >= 0) && (((-22 + 1*i2)) >= 0)))) {
	          stg10_update_0_sm11_049(stg9 /* buf name */, stg10, 0, ((-11 + 1*i1)), ((-22 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 12 and i2 >= 24 }
	        // { [i0, i1, i2] : i1 >= 12 and i2 >= 24 }
	          // { [i0, i1, i2] : -12 + i1 >= 0 }
	          // { [i0, i1, i2] : -24 + i2 >= 0 }
	        if ((((((-12 + 1*i1)) >= 0) && (((-24 + 1*i2)) >= 0)))) {
	          stg11_update_0_sm12_017(stg10 /* buf name */, stg11, 0, ((-12 + 1*i1)), ((-24 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 13 and i2 >= 26 }
	        // { [i0, i1, i2] : i1 >= 13 and i2 >= 26 }
	          // { [i0, i1, i2] : -13 + i1 >= 0 }
	          // { [i0, i1, i2] : -26 + i2 >= 0 }
	        if ((((((-13 + 1*i1)) >= 0) && (((-26 + 1*i2)) >= 0)))) {
	          stg12_update_0_sm13_019(stg11 /* buf name */, stg12, 0, ((-13 + 1*i1)), ((-26 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 14 and i2 >= 28 }
	        // { [i0, i1, i2] : i1 >= 14 and i2 >= 28 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -28 + i2 >= 0 }
	        if ((((((-14 + 1*i1)) >= 0) && (((-28 + 1*i2)) >= 0)))) {
	          stg13_update_0_sm14_021(stg12 /* buf name */, stg13, 0, ((-14 + 1*i1)), ((-28 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 15 and i2 >= 30 }
	        // { [i0, i1, i2] : i1 >= 15 and i2 >= 30 }
	          // { [i0, i1, i2] : -15 + i1 >= 0 }
	          // { [i0, i1, i2] : -30 + i2 >= 0 }
	        if ((((((-15 + 1*i1)) >= 0) && (((-30 + 1*i2)) >= 0)))) {
	          stg14_update_0_sm15_023(stg13 /* buf name */, stg14, 0, ((-15 + 1*i1)), ((-30 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 15 and i2 >= 30 }
	        // { [i0, i1, i2] : i1 >= 15 and i2 >= 30 }
	          // { [i0, i1, i2] : -15 + i1 >= 0 }
	          // { [i0, i1, i2] : -30 + i2 >= 0 }
	        if ((((((-15 + 1*i1)) >= 0) && (((-30 + 1*i2)) >= 0)))) {
	          jac9_1_update_0_sm16_025(stg14 /* buf name */, jac9_1, 0, ((-15 + 1*i1)), ((-30 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void jac9_1_opt_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */jac9_1, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    jac9_1_opt(in_off_chip, jac9_1);
  }
}
#ifdef __VIVADO_SYNTH__
  // { in_update_0_sm0_041[root = 0, in_0, in_1] -> in_off_chip[in_1, in_0] : 0 <= in_0 <= 1094 and 0 <= in_1 <= 1949 }
const int in_update_0_sm0_041_read_pipe0_num_transfers = 2135250;
  // { jac9_1_update_0_sm16_025[root = 0, jac9_1_0, jac9_1_1] -> jac9_1[jac9_1_1, jac9_1_0] : 0 <= jac9_1_0 <= 1079 and 0 <= jac9_1_1 <= 1919 }
const int jac9_1_update_0_sm16_025_write_pipe0_num_transfers = 2073600;


extern "C" {

void jac9_1_opt_accel(hw_uint<16>* in_update_0_sm0_041_read_pipe0, hw_uint<16>* jac9_1_update_0_sm16_025_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_update_0_sm0_041_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = jac9_1_update_0_sm16_025_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_update_0_sm0_041_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = jac9_1_update_0_sm16_025_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > in_update_0_sm0_041_read_pipe0_channel;
  static HWStream<hw_uint<16> > jac9_1_update_0_sm16_025_write_pipe0_channel;

  burst_read<16>(in_update_0_sm0_041_read_pipe0, in_update_0_sm0_041_read_pipe0_channel, in_update_0_sm0_041_read_pipe0_num_transfers*size);

  jac9_1_opt_wrapper(in_update_0_sm0_041_read_pipe0_channel, jac9_1_update_0_sm16_025_write_pipe0_channel, size);

  burst_write<16>(jac9_1_update_0_sm16_025_write_pipe0, jac9_1_update_0_sm16_025_write_pipe0_channel, jac9_1_update_0_sm16_025_write_pipe0_num_transfers*size);
}

}
extern "C" {

void jac9_1_opt_rdai(HWStream<hw_uint<16> >& in_update_0_sm0_041_read_pipe0, HWStream<hw_uint<16> >&  jac9_1_update_0_sm16_025_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_update_0_sm0_041_read_pipe0
#pragma HLS INTERFACE axis register port = jac9_1_update_0_sm16_025_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  jac9_1_opt(in_update_0_sm0_041_read_pipe0, jac9_1_update_0_sm16_025_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

