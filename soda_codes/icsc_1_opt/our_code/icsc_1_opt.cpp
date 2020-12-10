#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: icsc_1_opt_compute_units.h
#include "icsc_1_opt_compute_units.h"

struct in_in_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[-10, 1929], [0, 1088]}
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

struct in_cache {
  // # of banks: 1
  in_in_update_0_write0_merged_banks_4_cache in_in_update_0_write0_merged_banks_4;
};



inline void in_in_update_0_write0_write(hw_uint<16>& in_in_update_0_write0, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write0_merged_banks_4.push(in_in_update_0_write0);
}

inline hw_uint<16> stg0_rd0_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd0 read pattern: { stg0_update_0[d0, d1] -> in[-1 + d0, d1] : -9 <= d0 <= 1928 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 1928 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 1929 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_4.peek_1942();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> stg0_rd1_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd1 read pattern: { stg0_update_0[d0, d1] -> in[d0, d1] : -9 <= d0 <= 1928 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 1928 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 1929 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_4.peek_1941();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> stg0_rd2_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd2 read pattern: { stg0_update_0[d0, d1] -> in[d0, 1 + d1] : -9 <= d0 <= 1928 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 1928 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 1929 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_4.peek_1();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> stg0_rd3_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd3 read pattern: { stg0_update_0[d0, d1] -> in[1 + d0, d1] : -9 <= d0 <= 1928 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 1928 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 1929 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_4.peek_1940();
  return value_in_in_update_0_write0;
  return 0;
}

// # of bundles = 2
// in_update_0_write
//	in_in_update_0_write0
inline void in_in_update_0_write_bundle_write(hw_uint<16>& in_update_0_write, in_cache& in, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_in_update_0_write0_res = in_update_0_write.extract<0, 15>();
	in_in_update_0_write0_write(in_in_update_0_write0_res, in, d0, d1, dynamic_address);
}

// stg0_update_0_read
//	stg0_rd0
//	stg0_rd1
//	stg0_rd2
//	stg0_rd3
inline hw_uint<64> in_stg0_update_0_read_bundle_read(in_cache& in, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg0_rd0
    // stg0_rd1
    // stg0_rd2
    // stg0_rd3

	hw_uint<64> result;
	hw_uint<16> stg0_rd0_res = stg0_rd0_select(in, d0, d1, dynamic_address);
	set_at<0, 64>(result, stg0_rd0_res);
	hw_uint<16> stg0_rd1_res = stg0_rd1_select(in, d0, d1, dynamic_address);
	set_at<16, 64>(result, stg0_rd1_res);
	hw_uint<16> stg0_rd2_res = stg0_rd2_select(in, d0, d1, dynamic_address);
	set_at<32, 64>(result, stg0_rd2_res);
	hw_uint<16> stg0_rd3_res = stg0_rd3_select(in, d0, d1, dynamic_address);
	set_at<48, 64>(result, stg0_rd3_res);
	return result;
}

struct stg0_stg0_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[-9, 1928], [0, 1087]}
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

struct stg0_cache {
  // # of banks: 1
  stg0_stg0_update_0_write0_merged_banks_4_cache stg0_stg0_update_0_write0_merged_banks_4;
};



inline void stg0_stg0_update_0_write0_write(hw_uint<16>& stg0_stg0_update_0_write0, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  stg0.stg0_stg0_update_0_write0_merged_banks_4.push(stg0_stg0_update_0_write0);
}

inline hw_uint<16> stg1_rd0_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd0 read pattern: { stg1_update_0[d0, d1] -> stg0[-1 + d0, d1] : -8 <= d0 <= 1927 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 1927 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 1928 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write0 = stg0.stg0_stg0_update_0_write0_merged_banks_4.peek_1940();
  return value_stg0_stg0_update_0_write0;
  return 0;
}

inline hw_uint<16> stg1_rd1_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd1 read pattern: { stg1_update_0[d0, d1] -> stg0[d0, d1] : -8 <= d0 <= 1927 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 1927 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 1928 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write0 = stg0.stg0_stg0_update_0_write0_merged_banks_4.peek_1939();
  return value_stg0_stg0_update_0_write0;
  return 0;
}

inline hw_uint<16> stg1_rd2_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd2 read pattern: { stg1_update_0[d0, d1] -> stg0[d0, 1 + d1] : -8 <= d0 <= 1927 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 1927 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 1928 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write0 = stg0.stg0_stg0_update_0_write0_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write0;
  return 0;
}

inline hw_uint<16> stg1_rd3_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd3 read pattern: { stg1_update_0[d0, d1] -> stg0[1 + d0, d1] : -8 <= d0 <= 1927 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 1927 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 1928 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write0 = stg0.stg0_stg0_update_0_write0_merged_banks_4.peek_1938();
  return value_stg0_stg0_update_0_write0;
  return 0;
}

// # of bundles = 2
// stg0_update_0_write
//	stg0_stg0_update_0_write0
inline void stg0_stg0_update_0_write_bundle_write(hw_uint<16>& stg0_update_0_write, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
	hw_uint<16> stg0_stg0_update_0_write0_res = stg0_update_0_write.extract<0, 15>();
	stg0_stg0_update_0_write0_write(stg0_stg0_update_0_write0_res, stg0, d0, d1, dynamic_address);
}

// stg1_update_0_read
//	stg1_rd0
//	stg1_rd1
//	stg1_rd2
//	stg1_rd3
inline hw_uint<64> stg0_stg1_update_0_read_bundle_read(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg1_rd0
    // stg1_rd1
    // stg1_rd2
    // stg1_rd3

	hw_uint<64> result;
	hw_uint<16> stg1_rd0_res = stg1_rd0_select(stg0, d0, d1, dynamic_address);
	set_at<0, 64>(result, stg1_rd0_res);
	hw_uint<16> stg1_rd1_res = stg1_rd1_select(stg0, d0, d1, dynamic_address);
	set_at<16, 64>(result, stg1_rd1_res);
	hw_uint<16> stg1_rd2_res = stg1_rd2_select(stg0, d0, d1, dynamic_address);
	set_at<32, 64>(result, stg1_rd2_res);
	hw_uint<16> stg1_rd3_res = stg1_rd3_select(stg0, d0, d1, dynamic_address);
	set_at<48, 64>(result, stg1_rd3_res);
	return result;
}

struct stg1_stg1_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[-8, 1927], [0, 1086]}
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

struct stg1_cache {
  // # of banks: 1
  stg1_stg1_update_0_write0_merged_banks_4_cache stg1_stg1_update_0_write0_merged_banks_4;
};



inline void stg1_stg1_update_0_write0_write(hw_uint<16>& stg1_stg1_update_0_write0, stg1_cache& stg1, int d0, int d1, int dynamic_address) {
  stg1.stg1_stg1_update_0_write0_merged_banks_4.push(stg1_stg1_update_0_write0);
}

inline hw_uint<16> stg2_rd0_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd0 read pattern: { stg2_update_0[d0, d1] -> stg1[-1 + d0, d1] : -7 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 1927 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write0 = stg1.stg1_stg1_update_0_write0_merged_banks_4.peek_1938();
  return value_stg1_stg1_update_0_write0;
  return 0;
}

inline hw_uint<16> stg2_rd1_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd1 read pattern: { stg2_update_0[d0, d1] -> stg1[d0, d1] : -7 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 1927 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write0 = stg1.stg1_stg1_update_0_write0_merged_banks_4.peek_1937();
  return value_stg1_stg1_update_0_write0;
  return 0;
}

inline hw_uint<16> stg2_rd2_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd2 read pattern: { stg2_update_0[d0, d1] -> stg1[d0, 1 + d1] : -7 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 1927 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write0 = stg1.stg1_stg1_update_0_write0_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write0;
  return 0;
}

inline hw_uint<16> stg2_rd3_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd3 read pattern: { stg2_update_0[d0, d1] -> stg1[1 + d0, d1] : -7 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 1927 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write0 = stg1.stg1_stg1_update_0_write0_merged_banks_4.peek_1936();
  return value_stg1_stg1_update_0_write0;
  return 0;
}

// # of bundles = 2
// stg1_update_0_write
//	stg1_stg1_update_0_write0
inline void stg1_stg1_update_0_write_bundle_write(hw_uint<16>& stg1_update_0_write, stg1_cache& stg1, int d0, int d1, int dynamic_address) {
	hw_uint<16> stg1_stg1_update_0_write0_res = stg1_update_0_write.extract<0, 15>();
	stg1_stg1_update_0_write0_write(stg1_stg1_update_0_write0_res, stg1, d0, d1, dynamic_address);
}

// stg2_update_0_read
//	stg2_rd0
//	stg2_rd1
//	stg2_rd2
//	stg2_rd3
inline hw_uint<64> stg1_stg2_update_0_read_bundle_read(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg2_rd0
    // stg2_rd1
    // stg2_rd2
    // stg2_rd3

	hw_uint<64> result;
	hw_uint<16> stg2_rd0_res = stg2_rd0_select(stg1, d0, d1, dynamic_address);
	set_at<0, 64>(result, stg2_rd0_res);
	hw_uint<16> stg2_rd1_res = stg2_rd1_select(stg1, d0, d1, dynamic_address);
	set_at<16, 64>(result, stg2_rd1_res);
	hw_uint<16> stg2_rd2_res = stg2_rd2_select(stg1, d0, d1, dynamic_address);
	set_at<32, 64>(result, stg2_rd2_res);
	hw_uint<16> stg2_rd3_res = stg2_rd3_select(stg1, d0, d1, dynamic_address);
	set_at<48, 64>(result, stg2_rd3_res);
	return result;
}

struct stg2_stg2_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[-7, 1926], [0, 1085]}
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

struct stg2_cache {
  // # of banks: 1
  stg2_stg2_update_0_write0_merged_banks_4_cache stg2_stg2_update_0_write0_merged_banks_4;
};



inline void stg2_stg2_update_0_write0_write(hw_uint<16>& stg2_stg2_update_0_write0, stg2_cache& stg2, int d0, int d1, int dynamic_address) {
  stg2.stg2_stg2_update_0_write0_merged_banks_4.push(stg2_stg2_update_0_write0);
}

inline hw_uint<16> stg3_rd0_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd0 read pattern: { stg3_update_0[d0, d1] -> stg2[-1 + d0, d1] : -6 <= d0 <= 1925 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 1925 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write0 = stg2.stg2_stg2_update_0_write0_merged_banks_4.peek_1936();
  return value_stg2_stg2_update_0_write0;
  return 0;
}

inline hw_uint<16> stg3_rd1_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd1 read pattern: { stg3_update_0[d0, d1] -> stg2[d0, d1] : -6 <= d0 <= 1925 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 1925 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write0 = stg2.stg2_stg2_update_0_write0_merged_banks_4.peek_1935();
  return value_stg2_stg2_update_0_write0;
  return 0;
}

inline hw_uint<16> stg3_rd2_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd2 read pattern: { stg3_update_0[d0, d1] -> stg2[d0, 1 + d1] : -6 <= d0 <= 1925 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 1925 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write0 = stg2.stg2_stg2_update_0_write0_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write0;
  return 0;
}

inline hw_uint<16> stg3_rd3_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd3 read pattern: { stg3_update_0[d0, d1] -> stg2[1 + d0, d1] : -6 <= d0 <= 1925 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 1925 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write0 = stg2.stg2_stg2_update_0_write0_merged_banks_4.peek_1934();
  return value_stg2_stg2_update_0_write0;
  return 0;
}

// # of bundles = 2
// stg2_update_0_write
//	stg2_stg2_update_0_write0
inline void stg2_stg2_update_0_write_bundle_write(hw_uint<16>& stg2_update_0_write, stg2_cache& stg2, int d0, int d1, int dynamic_address) {
	hw_uint<16> stg2_stg2_update_0_write0_res = stg2_update_0_write.extract<0, 15>();
	stg2_stg2_update_0_write0_write(stg2_stg2_update_0_write0_res, stg2, d0, d1, dynamic_address);
}

// stg3_update_0_read
//	stg3_rd0
//	stg3_rd1
//	stg3_rd2
//	stg3_rd3
inline hw_uint<64> stg2_stg3_update_0_read_bundle_read(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg3_rd0
    // stg3_rd1
    // stg3_rd2
    // stg3_rd3

	hw_uint<64> result;
	hw_uint<16> stg3_rd0_res = stg3_rd0_select(stg2, d0, d1, dynamic_address);
	set_at<0, 64>(result, stg3_rd0_res);
	hw_uint<16> stg3_rd1_res = stg3_rd1_select(stg2, d0, d1, dynamic_address);
	set_at<16, 64>(result, stg3_rd1_res);
	hw_uint<16> stg3_rd2_res = stg3_rd2_select(stg2, d0, d1, dynamic_address);
	set_at<32, 64>(result, stg3_rd2_res);
	hw_uint<16> stg3_rd3_res = stg3_rd3_select(stg2, d0, d1, dynamic_address);
	set_at<48, 64>(result, stg3_rd3_res);
	return result;
}

struct stg3_stg3_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[-6, 1925], [0, 1084]}
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

struct stg3_cache {
  // # of banks: 1
  stg3_stg3_update_0_write0_merged_banks_4_cache stg3_stg3_update_0_write0_merged_banks_4;
};



inline void stg3_stg3_update_0_write0_write(hw_uint<16>& stg3_stg3_update_0_write0, stg3_cache& stg3, int d0, int d1, int dynamic_address) {
  stg3.stg3_stg3_update_0_write0_merged_banks_4.push(stg3_stg3_update_0_write0);
}

inline hw_uint<16> stg4_rd0_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd0 read pattern: { stg4_update_0[d0, d1] -> stg3[-1 + d0, d1] : -5 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 1925 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write0 = stg3.stg3_stg3_update_0_write0_merged_banks_4.peek_1934();
  return value_stg3_stg3_update_0_write0;
  return 0;
}

inline hw_uint<16> stg4_rd1_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd1 read pattern: { stg4_update_0[d0, d1] -> stg3[d0, d1] : -5 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 1925 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write0 = stg3.stg3_stg3_update_0_write0_merged_banks_4.peek_1933();
  return value_stg3_stg3_update_0_write0;
  return 0;
}

inline hw_uint<16> stg4_rd2_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd2 read pattern: { stg4_update_0[d0, d1] -> stg3[d0, 1 + d1] : -5 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 1925 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write0 = stg3.stg3_stg3_update_0_write0_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write0;
  return 0;
}

inline hw_uint<16> stg4_rd3_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd3 read pattern: { stg4_update_0[d0, d1] -> stg3[1 + d0, d1] : -5 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 1925 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write0 = stg3.stg3_stg3_update_0_write0_merged_banks_4.peek_1932();
  return value_stg3_stg3_update_0_write0;
  return 0;
}

// # of bundles = 2
// stg3_update_0_write
//	stg3_stg3_update_0_write0
inline void stg3_stg3_update_0_write_bundle_write(hw_uint<16>& stg3_update_0_write, stg3_cache& stg3, int d0, int d1, int dynamic_address) {
	hw_uint<16> stg3_stg3_update_0_write0_res = stg3_update_0_write.extract<0, 15>();
	stg3_stg3_update_0_write0_write(stg3_stg3_update_0_write0_res, stg3, d0, d1, dynamic_address);
}

// stg4_update_0_read
//	stg4_rd0
//	stg4_rd1
//	stg4_rd2
//	stg4_rd3
inline hw_uint<64> stg3_stg4_update_0_read_bundle_read(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg4_rd0
    // stg4_rd1
    // stg4_rd2
    // stg4_rd3

	hw_uint<64> result;
	hw_uint<16> stg4_rd0_res = stg4_rd0_select(stg3, d0, d1, dynamic_address);
	set_at<0, 64>(result, stg4_rd0_res);
	hw_uint<16> stg4_rd1_res = stg4_rd1_select(stg3, d0, d1, dynamic_address);
	set_at<16, 64>(result, stg4_rd1_res);
	hw_uint<16> stg4_rd2_res = stg4_rd2_select(stg3, d0, d1, dynamic_address);
	set_at<32, 64>(result, stg4_rd2_res);
	hw_uint<16> stg4_rd3_res = stg4_rd3_select(stg3, d0, d1, dynamic_address);
	set_at<48, 64>(result, stg4_rd3_res);
	return result;
}

struct stg4_stg4_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[-5, 1924], [0, 1083]}
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

struct stg4_cache {
  // # of banks: 1
  stg4_stg4_update_0_write0_merged_banks_4_cache stg4_stg4_update_0_write0_merged_banks_4;
};



inline void stg4_stg4_update_0_write0_write(hw_uint<16>& stg4_stg4_update_0_write0, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write0_merged_banks_4.push(stg4_stg4_update_0_write0);
}

inline hw_uint<16> stg5_rd0_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd0 read pattern: { stg5_update_0[d0, d1] -> stg4[-1 + d0, d1] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write0 = stg4.stg4_stg4_update_0_write0_merged_banks_4.peek_1932();
  return value_stg4_stg4_update_0_write0;
  return 0;
}

inline hw_uint<16> stg5_rd1_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd1 read pattern: { stg5_update_0[d0, d1] -> stg4[d0, d1] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write0 = stg4.stg4_stg4_update_0_write0_merged_banks_4.peek_1931();
  return value_stg4_stg4_update_0_write0;
  return 0;
}

inline hw_uint<16> stg5_rd2_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd2 read pattern: { stg5_update_0[d0, d1] -> stg4[d0, 1 + d1] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write0 = stg4.stg4_stg4_update_0_write0_merged_banks_4.peek_1();
  return value_stg4_stg4_update_0_write0;
  return 0;
}

inline hw_uint<16> stg5_rd3_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd3 read pattern: { stg5_update_0[d0, d1] -> stg4[1 + d0, d1] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write0 = stg4.stg4_stg4_update_0_write0_merged_banks_4.peek_1930();
  return value_stg4_stg4_update_0_write0;
  return 0;
}

// # of bundles = 2
// stg4_update_0_write
//	stg4_stg4_update_0_write0
inline void stg4_stg4_update_0_write_bundle_write(hw_uint<16>& stg4_update_0_write, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
	hw_uint<16> stg4_stg4_update_0_write0_res = stg4_update_0_write.extract<0, 15>();
	stg4_stg4_update_0_write0_write(stg4_stg4_update_0_write0_res, stg4, d0, d1, dynamic_address);
}

// stg5_update_0_read
//	stg5_rd0
//	stg5_rd1
//	stg5_rd2
//	stg5_rd3
inline hw_uint<64> stg4_stg5_update_0_read_bundle_read(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg5_rd0
    // stg5_rd1
    // stg5_rd2
    // stg5_rd3

	hw_uint<64> result;
	hw_uint<16> stg5_rd0_res = stg5_rd0_select(stg4, d0, d1, dynamic_address);
	set_at<0, 64>(result, stg5_rd0_res);
	hw_uint<16> stg5_rd1_res = stg5_rd1_select(stg4, d0, d1, dynamic_address);
	set_at<16, 64>(result, stg5_rd1_res);
	hw_uint<16> stg5_rd2_res = stg5_rd2_select(stg4, d0, d1, dynamic_address);
	set_at<32, 64>(result, stg5_rd2_res);
	hw_uint<16> stg5_rd3_res = stg5_rd3_select(stg4, d0, d1, dynamic_address);
	set_at<48, 64>(result, stg5_rd3_res);
	return result;
}

struct stg5_stg5_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[-4, 1923], [0, 1082]}
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

struct stg5_cache {
  // # of banks: 1
  stg5_stg5_update_0_write0_merged_banks_4_cache stg5_stg5_update_0_write0_merged_banks_4;
};



inline void stg5_stg5_update_0_write0_write(hw_uint<16>& stg5_stg5_update_0_write0, stg5_cache& stg5, int d0, int d1, int dynamic_address) {
  stg5.stg5_stg5_update_0_write0_merged_banks_4.push(stg5_stg5_update_0_write0);
}

inline hw_uint<16> stg6_rd0_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd0 read pattern: { stg6_update_0[d0, d1] -> stg5[-1 + d0, d1] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write0 = stg5.stg5_stg5_update_0_write0_merged_banks_4.peek_1930();
  return value_stg5_stg5_update_0_write0;
  return 0;
}

inline hw_uint<16> stg6_rd1_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd1 read pattern: { stg6_update_0[d0, d1] -> stg5[d0, d1] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write0 = stg5.stg5_stg5_update_0_write0_merged_banks_4.peek_1929();
  return value_stg5_stg5_update_0_write0;
  return 0;
}

inline hw_uint<16> stg6_rd2_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd2 read pattern: { stg6_update_0[d0, d1] -> stg5[d0, 1 + d1] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write0 = stg5.stg5_stg5_update_0_write0_merged_banks_4.peek_1();
  return value_stg5_stg5_update_0_write0;
  return 0;
}

inline hw_uint<16> stg6_rd3_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd3 read pattern: { stg6_update_0[d0, d1] -> stg5[1 + d0, d1] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write0 = stg5.stg5_stg5_update_0_write0_merged_banks_4.peek_1928();
  return value_stg5_stg5_update_0_write0;
  return 0;
}

// # of bundles = 2
// stg5_update_0_write
//	stg5_stg5_update_0_write0
inline void stg5_stg5_update_0_write_bundle_write(hw_uint<16>& stg5_update_0_write, stg5_cache& stg5, int d0, int d1, int dynamic_address) {
	hw_uint<16> stg5_stg5_update_0_write0_res = stg5_update_0_write.extract<0, 15>();
	stg5_stg5_update_0_write0_write(stg5_stg5_update_0_write0_res, stg5, d0, d1, dynamic_address);
}

// stg6_update_0_read
//	stg6_rd0
//	stg6_rd1
//	stg6_rd2
//	stg6_rd3
inline hw_uint<64> stg5_stg6_update_0_read_bundle_read(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg6_rd0
    // stg6_rd1
    // stg6_rd2
    // stg6_rd3

	hw_uint<64> result;
	hw_uint<16> stg6_rd0_res = stg6_rd0_select(stg5, d0, d1, dynamic_address);
	set_at<0, 64>(result, stg6_rd0_res);
	hw_uint<16> stg6_rd1_res = stg6_rd1_select(stg5, d0, d1, dynamic_address);
	set_at<16, 64>(result, stg6_rd1_res);
	hw_uint<16> stg6_rd2_res = stg6_rd2_select(stg5, d0, d1, dynamic_address);
	set_at<32, 64>(result, stg6_rd2_res);
	hw_uint<16> stg6_rd3_res = stg6_rd3_select(stg5, d0, d1, dynamic_address);
	set_at<48, 64>(result, stg6_rd3_res);
	return result;
}

struct stg6_stg6_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[-3, 1922], [0, 1081]}
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

struct stg6_cache {
  // # of banks: 1
  stg6_stg6_update_0_write0_merged_banks_4_cache stg6_stg6_update_0_write0_merged_banks_4;
};



inline void stg6_stg6_update_0_write0_write(hw_uint<16>& stg6_stg6_update_0_write0, stg6_cache& stg6, int d0, int d1, int dynamic_address) {
  stg6.stg6_stg6_update_0_write0_merged_banks_4.push(stg6_stg6_update_0_write0);
}

inline hw_uint<16> stg7_rd0_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd0 read pattern: { stg7_update_0[d0, d1] -> stg6[-1 + d0, d1] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write0 = stg6.stg6_stg6_update_0_write0_merged_banks_4.peek_1928();
  return value_stg6_stg6_update_0_write0;
  return 0;
}

inline hw_uint<16> stg7_rd1_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd1 read pattern: { stg7_update_0[d0, d1] -> stg6[d0, d1] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write0 = stg6.stg6_stg6_update_0_write0_merged_banks_4.peek_1927();
  return value_stg6_stg6_update_0_write0;
  return 0;
}

inline hw_uint<16> stg7_rd2_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd2 read pattern: { stg7_update_0[d0, d1] -> stg6[d0, 1 + d1] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write0 = stg6.stg6_stg6_update_0_write0_merged_banks_4.peek_1();
  return value_stg6_stg6_update_0_write0;
  return 0;
}

inline hw_uint<16> stg7_rd3_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd3 read pattern: { stg7_update_0[d0, d1] -> stg6[1 + d0, d1] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write0 = stg6.stg6_stg6_update_0_write0_merged_banks_4.peek_1926();
  return value_stg6_stg6_update_0_write0;
  return 0;
}

// # of bundles = 2
// stg6_update_0_write
//	stg6_stg6_update_0_write0
inline void stg6_stg6_update_0_write_bundle_write(hw_uint<16>& stg6_update_0_write, stg6_cache& stg6, int d0, int d1, int dynamic_address) {
	hw_uint<16> stg6_stg6_update_0_write0_res = stg6_update_0_write.extract<0, 15>();
	stg6_stg6_update_0_write0_write(stg6_stg6_update_0_write0_res, stg6, d0, d1, dynamic_address);
}

// stg7_update_0_read
//	stg7_rd0
//	stg7_rd1
//	stg7_rd2
//	stg7_rd3
inline hw_uint<64> stg6_stg7_update_0_read_bundle_read(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg7_rd0
    // stg7_rd1
    // stg7_rd2
    // stg7_rd3

	hw_uint<64> result;
	hw_uint<16> stg7_rd0_res = stg7_rd0_select(stg6, d0, d1, dynamic_address);
	set_at<0, 64>(result, stg7_rd0_res);
	hw_uint<16> stg7_rd1_res = stg7_rd1_select(stg6, d0, d1, dynamic_address);
	set_at<16, 64>(result, stg7_rd1_res);
	hw_uint<16> stg7_rd2_res = stg7_rd2_select(stg6, d0, d1, dynamic_address);
	set_at<32, 64>(result, stg7_rd2_res);
	hw_uint<16> stg7_rd3_res = stg7_rd3_select(stg6, d0, d1, dynamic_address);
	set_at<48, 64>(result, stg7_rd3_res);
	return result;
}

struct stg7_stg7_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[-2, 1921], [0, 1080]}
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

struct stg7_cache {
  // # of banks: 1
  stg7_stg7_update_0_write0_merged_banks_4_cache stg7_stg7_update_0_write0_merged_banks_4;
};



inline void stg7_stg7_update_0_write0_write(hw_uint<16>& stg7_stg7_update_0_write0, stg7_cache& stg7, int d0, int d1, int dynamic_address) {
  stg7.stg7_stg7_update_0_write0_merged_banks_4.push(stg7_stg7_update_0_write0);
}

inline hw_uint<16> stg8_rd0_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd0 read pattern: { stg8_update_0[d0, d1] -> stg7[-1 + d0, d1] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write0 = stg7.stg7_stg7_update_0_write0_merged_banks_4.peek_1926();
  return value_stg7_stg7_update_0_write0;
  return 0;
}

inline hw_uint<16> stg8_rd1_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd1 read pattern: { stg8_update_0[d0, d1] -> stg7[d0, d1] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write0 = stg7.stg7_stg7_update_0_write0_merged_banks_4.peek_1925();
  return value_stg7_stg7_update_0_write0;
  return 0;
}

inline hw_uint<16> stg8_rd2_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd2 read pattern: { stg8_update_0[d0, d1] -> stg7[d0, 1 + d1] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write0 = stg7.stg7_stg7_update_0_write0_merged_banks_4.peek_1();
  return value_stg7_stg7_update_0_write0;
  return 0;
}

inline hw_uint<16> stg8_rd3_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd3 read pattern: { stg8_update_0[d0, d1] -> stg7[1 + d0, d1] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write0 = stg7.stg7_stg7_update_0_write0_merged_banks_4.peek_1924();
  return value_stg7_stg7_update_0_write0;
  return 0;
}

// # of bundles = 2
// stg7_update_0_write
//	stg7_stg7_update_0_write0
inline void stg7_stg7_update_0_write_bundle_write(hw_uint<16>& stg7_update_0_write, stg7_cache& stg7, int d0, int d1, int dynamic_address) {
	hw_uint<16> stg7_stg7_update_0_write0_res = stg7_update_0_write.extract<0, 15>();
	stg7_stg7_update_0_write0_write(stg7_stg7_update_0_write0_res, stg7, d0, d1, dynamic_address);
}

// stg8_update_0_read
//	stg8_rd0
//	stg8_rd1
//	stg8_rd2
//	stg8_rd3
inline hw_uint<64> stg7_stg8_update_0_read_bundle_read(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg8_rd0
    // stg8_rd1
    // stg8_rd2
    // stg8_rd3

	hw_uint<64> result;
	hw_uint<16> stg8_rd0_res = stg8_rd0_select(stg7, d0, d1, dynamic_address);
	set_at<0, 64>(result, stg8_rd0_res);
	hw_uint<16> stg8_rd1_res = stg8_rd1_select(stg7, d0, d1, dynamic_address);
	set_at<16, 64>(result, stg8_rd1_res);
	hw_uint<16> stg8_rd2_res = stg8_rd2_select(stg7, d0, d1, dynamic_address);
	set_at<32, 64>(result, stg8_rd2_res);
	hw_uint<16> stg8_rd3_res = stg8_rd3_select(stg7, d0, d1, dynamic_address);
	set_at<48, 64>(result, stg8_rd3_res);
	return result;
}

struct stg8_stg8_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[-1, 1920], [0, 1079]}
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

struct stg8_cache {
  // # of banks: 1
  stg8_stg8_update_0_write0_merged_banks_4_cache stg8_stg8_update_0_write0_merged_banks_4;
};



inline void stg8_stg8_update_0_write0_write(hw_uint<16>& stg8_stg8_update_0_write0, stg8_cache& stg8, int d0, int d1, int dynamic_address) {
  stg8.stg8_stg8_update_0_write0_merged_banks_4.push(stg8_stg8_update_0_write0);
}

inline hw_uint<16> stg9_rd0_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd0 read pattern: { stg9_update_0[d0, d1] -> stg8[-1 + d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write0 = stg8.stg8_stg8_update_0_write0_merged_banks_4.peek_1924();
  return value_stg8_stg8_update_0_write0;
  return 0;
}

inline hw_uint<16> stg9_rd1_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd1 read pattern: { stg9_update_0[d0, d1] -> stg8[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write0 = stg8.stg8_stg8_update_0_write0_merged_banks_4.peek_1923();
  return value_stg8_stg8_update_0_write0;
  return 0;
}

inline hw_uint<16> stg9_rd2_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd2 read pattern: { stg9_update_0[d0, d1] -> stg8[d0, 1 + d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write0 = stg8.stg8_stg8_update_0_write0_merged_banks_4.peek_1();
  return value_stg8_stg8_update_0_write0;
  return 0;
}

inline hw_uint<16> stg9_rd3_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd3 read pattern: { stg9_update_0[d0, d1] -> stg8[1 + d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write0 = stg8.stg8_stg8_update_0_write0_merged_banks_4.peek_1922();
  return value_stg8_stg8_update_0_write0;
  return 0;
}

// # of bundles = 2
// stg8_update_0_write
//	stg8_stg8_update_0_write0
inline void stg8_stg8_update_0_write_bundle_write(hw_uint<16>& stg8_update_0_write, stg8_cache& stg8, int d0, int d1, int dynamic_address) {
	hw_uint<16> stg8_stg8_update_0_write0_res = stg8_update_0_write.extract<0, 15>();
	stg8_stg8_update_0_write0_write(stg8_stg8_update_0_write0_res, stg8, d0, d1, dynamic_address);
}

// stg9_update_0_read
//	stg9_rd0
//	stg9_rd1
//	stg9_rd2
//	stg9_rd3
inline hw_uint<64> stg8_stg9_update_0_read_bundle_read(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg9_rd0
    // stg9_rd1
    // stg9_rd2
    // stg9_rd3

	hw_uint<64> result;
	hw_uint<16> stg9_rd0_res = stg9_rd0_select(stg8, d0, d1, dynamic_address);
	set_at<0, 64>(result, stg9_rd0_res);
	hw_uint<16> stg9_rd1_res = stg9_rd1_select(stg8, d0, d1, dynamic_address);
	set_at<16, 64>(result, stg9_rd1_res);
	hw_uint<16> stg9_rd2_res = stg9_rd2_select(stg8, d0, d1, dynamic_address);
	set_at<32, 64>(result, stg9_rd2_res);
	hw_uint<16> stg9_rd3_res = stg9_rd3_select(stg8, d0, d1, dynamic_address);
	set_at<48, 64>(result, stg9_rd3_res);
	return result;
}

struct stg9_stg9_update_0_write0_to_icsc_1_rd0_cache {
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

struct stg9_cache {
  // # of banks: 1
  stg9_stg9_update_0_write0_to_icsc_1_rd0_cache stg9_stg9_update_0_write0_to_icsc_1_rd0;
};



inline void stg9_stg9_update_0_write0_write(hw_uint<16>& stg9_stg9_update_0_write0, stg9_cache& stg9, int d0, int d1, int dynamic_address) {
  stg9.stg9_stg9_update_0_write0_to_icsc_1_rd0.push(stg9_stg9_update_0_write0);
}

inline hw_uint<16> icsc_1_rd0_select(stg9_cache& stg9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_1_rd0 read pattern: { icsc_1_update_0[d0, d1] -> stg9[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_1_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  auto value_stg9_stg9_update_0_write0 = stg9.stg9_stg9_update_0_write0_to_icsc_1_rd0.peek(/* one reader or all rams */ 0);
  return value_stg9_stg9_update_0_write0;
  return 0;
}

// # of bundles = 2
// icsc_1_update_0_read
//	icsc_1_rd0
inline hw_uint<16> stg9_icsc_1_update_0_read_bundle_read(stg9_cache& stg9, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // icsc_1_rd0

	hw_uint<16> result;
	hw_uint<16> icsc_1_rd0_res = icsc_1_rd0_select(stg9, d0, d1, dynamic_address);
	set_at<0, 16>(result, icsc_1_rd0_res);
	return result;
}

// stg9_update_0_write
//	stg9_stg9_update_0_write0
inline void stg9_stg9_update_0_write_bundle_write(hw_uint<16>& stg9_update_0_write, stg9_cache& stg9, int d0, int d1, int dynamic_address) {
	hw_uint<16> stg9_stg9_update_0_write0_res = stg9_update_0_write.extract<0, 15>();
	stg9_stg9_update_0_write0_write(stg9_stg9_update_0_write0_res, stg9, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 309280 bits


// Operation logic
inline void in_update_0(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */in_off_chip, in_cache& in, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_off_chip
	auto in_off_chip_0_c__0_value = in_off_chip.read();
	auto compute_result = in_generated_compute_unrolled_1(in_off_chip_0_c__0_value);
	// Produce: in
	in_in_update_0_write_bundle_write(/* arg names */compute_result, in, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg0_update_0(in_cache& in, stg0_cache& stg0, int d0, int d1) {
  // Dynamic address computation

	// Consume: in
	auto in_0_c__0_value = in_stg0_update_0_read_bundle_read(in/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg0_generated_compute_unrolled_1(in_0_c__0_value);
	// Produce: stg0
	stg0_stg0_update_0_write_bundle_write(/* arg names */compute_result, stg0, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg3_update_0(stg2_cache& stg2, stg3_cache& stg3, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg2
	auto stg2_0_c__0_value = stg2_stg3_update_0_read_bundle_read(stg2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg3_generated_compute_unrolled_1(stg2_0_c__0_value);
	// Produce: stg3
	stg3_stg3_update_0_write_bundle_write(/* arg names */compute_result, stg3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg1_update_0(stg0_cache& stg0, stg1_cache& stg1, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg0
	auto stg0_0_c__0_value = stg0_stg1_update_0_read_bundle_read(stg0/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg1_generated_compute_unrolled_1(stg0_0_c__0_value);
	// Produce: stg1
	stg1_stg1_update_0_write_bundle_write(/* arg names */compute_result, stg1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg8_update_0(stg7_cache& stg7, stg8_cache& stg8, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg7
	auto stg7_0_c__0_value = stg7_stg8_update_0_read_bundle_read(stg7/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg8_generated_compute_unrolled_1(stg7_0_c__0_value);
	// Produce: stg8
	stg8_stg8_update_0_write_bundle_write(/* arg names */compute_result, stg8, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void icsc_1_update_0(stg9_cache& stg9, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */icsc_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg9
	auto stg9_0_c__0_value = stg9_icsc_1_update_0_read_bundle_read(stg9/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = icsc_1_generated_compute_unrolled_1(stg9_0_c__0_value);
	// Produce: icsc_1
	icsc_1.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg5_update_0(stg4_cache& stg4, stg5_cache& stg5, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg4
	auto stg4_0_c__0_value = stg4_stg5_update_0_read_bundle_read(stg4/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg5_generated_compute_unrolled_1(stg4_0_c__0_value);
	// Produce: stg5
	stg5_stg5_update_0_write_bundle_write(/* arg names */compute_result, stg5, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg6_update_0(stg5_cache& stg5, stg6_cache& stg6, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg5
	auto stg5_0_c__0_value = stg5_stg6_update_0_read_bundle_read(stg5/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg6_generated_compute_unrolled_1(stg5_0_c__0_value);
	// Produce: stg6
	stg6_stg6_update_0_write_bundle_write(/* arg names */compute_result, stg6, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg7_update_0(stg6_cache& stg6, stg7_cache& stg7, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg6
	auto stg6_0_c__0_value = stg6_stg7_update_0_read_bundle_read(stg6/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg7_generated_compute_unrolled_1(stg6_0_c__0_value);
	// Produce: stg7
	stg7_stg7_update_0_write_bundle_write(/* arg names */compute_result, stg7, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg9_update_0(stg8_cache& stg8, stg9_cache& stg9, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg8
	auto stg8_0_c__0_value = stg8_stg9_update_0_read_bundle_read(stg8/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg9_generated_compute_unrolled_1(stg8_0_c__0_value);
	// Produce: stg9
	stg9_stg9_update_0_write_bundle_write(/* arg names */compute_result, stg9, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg2_update_0(stg1_cache& stg1, stg2_cache& stg2, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg1
	auto stg1_0_c__0_value = stg1_stg2_update_0_read_bundle_read(stg1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg2_generated_compute_unrolled_1(stg1_0_c__0_value);
	// Produce: stg2
	stg2_stg2_update_0_write_bundle_write(/* arg names */compute_result, stg2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg4_update_0(stg3_cache& stg3, stg4_cache& stg4, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg3
	auto stg3_0_c__0_value = stg3_stg4_update_0_read_bundle_read(stg3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg4_generated_compute_unrolled_1(stg3_0_c__0_value);
	// Produce: stg4
	stg4_stg4_update_0_write_bundle_write(/* arg names */compute_result, stg4, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void icsc_1_opt(HWStream<hw_uint<16> >& /* get_args num ports = 1 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */icsc_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("icsc_1_opt_debug.csv");
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

// schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081; stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080; stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083; stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079; stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 1925 and 0 <= d1 <= 1085; stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 1926 and 0 <= d1 <= 1086; stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082; stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 1924 and 0 <= d1 <= 1084; stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 1928 and 0 <= d1 <= 1088; stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 1927 and 0 <= d1 <= 1087; icsc_1_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079; in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 1929 and 0 <= d1 <= 1089 }
//   { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081 }
// Condition for stg7_update_0(((-9 + i2 == 0) && (-6 + i1 >= 0) && (1929 - i1 >= 0) && (-8 + i0 >= 0) && (1089 - i0 >= 0)))
//   { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080 }
// Condition for stg8_update_0(((-10 + i2 == 0) && (-8 + i1 >= 0) && (1929 - i1 >= 0) && (-9 + i0 >= 0) && (1089 - i0 >= 0)))
//   { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083 }
// Condition for stg5_update_0(((-7 + i2 == 0) && (-2 + i1 >= 0) && (1929 - i1 >= 0) && (-6 + i0 >= 0) && (1089 - i0 >= 0)))
//   { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
// Condition for stg9_update_0(((-11 + i2 == 0) && (-10 + i1 >= 0) && (1929 - i1 >= 0) && (-10 + i0 >= 0) && (1089 - i0 >= 0)))
//   { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 1925 and 0 <= d1 <= 1085 }
// Condition for stg3_update_0(((-5 + i2 == 0) && (2 + i1 >= 0) && (1929 - i1 >= 0) && (-4 + i0 >= 0) && (1089 - i0 >= 0)))
//   { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 1926 and 0 <= d1 <= 1086 }
// Condition for stg2_update_0(((-4 + i2 == 0) && (4 + i1 >= 0) && (1929 - i1 >= 0) && (-3 + i0 >= 0) && (1089 - i0 >= 0)))
//   { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
// Condition for stg6_update_0(((-8 + i2 == 0) && (-4 + i1 >= 0) && (1929 - i1 >= 0) && (-7 + i0 >= 0) && (1089 - i0 >= 0)))
//   { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 1924 and 0 <= d1 <= 1084 }
// Condition for stg4_update_0(((-6 + i2 == 0) && (i1 >= 0) && (1929 - i1 >= 0) && (-5 + i0 >= 0) && (1089 - i0 >= 0)))
//   { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 1928 and 0 <= d1 <= 1088 }
// Condition for stg0_update_0(((-2 + i2 == 0) && (8 + i1 >= 0) && (1929 - i1 >= 0) && (-1 + i0 >= 0) && (1089 - i0 >= 0)))
//   { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 1927 and 0 <= d1 <= 1087 }
// Condition for stg1_update_0(((-3 + i2 == 0) && (6 + i1 >= 0) && (1929 - i1 >= 0) && (-2 + i0 >= 0) && (1089 - i0 >= 0)))
//   { icsc_1_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
// Condition for icsc_1_update_0(((-12 + i2 == 0) && (-10 + i1 >= 0) && (1929 - i1 >= 0) && (-10 + i0 >= 0) && (1089 - i0 >= 0)))
//   { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 1929 and 0 <= d1 <= 1089 }
// Condition for in_update_0(((-1 + i2 == 0) && (10 + i1 >= 0) && (1929 - i1 >= 0) && (i0 >= 0) && (1089 - i0 >= 0)))

  /*
  // Schedules...
    // icsc_1_update_0 -> [1*d1*1*1 + 1*10,1*d0*1*1 + 1*10,1*12]
    // in_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
    // stg0_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
    // stg1_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*3]
    // stg2_update_0 -> [1*d1*1*1 + 1*3,1*d0*1*1 + 1*3,1*4]
    // stg3_update_0 -> [1*d1*1*1 + 1*4,1*d0*1*1 + 1*4,1*5]
    // stg4_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*6]
    // stg5_update_0 -> [1*d1*1*1 + 1*6,1*d0*1*1 + 1*6,1*7]
    // stg6_update_0 -> [1*d1*1*1 + 1*7,1*d0*1*1 + 1*7,1*8]
    // stg7_update_0 -> [1*d1*1*1 + 1*8,1*d0*1*1 + 1*8,1*9]
    // stg8_update_0 -> [1*d1*1*1 + 1*9,1*d0*1*1 + 1*9,1*10]
    // stg9_update_0 -> [1*d1*1*1 + 1*10,1*d0*1*1 + 1*10,1*11]
for (int c0 = 0; c0 <= 1089; c0++) {
  for (int c1 = -10; c1 <= 1929; c1++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

    if ((-10 <= c1 && c1 <= 1929) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1089) && ((c0 - 0) % 1 == 0)) {
      in_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((-8 <= c1 && c1 <= 1929) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1089) && ((c0 - 1) % 1 == 0)) {
      stg0_update_0((c1 - 1) / 1, (c0 - 1) / 1);
    }

    if ((-6 <= c1 && c1 <= 1929) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 1089) && ((c0 - 2) % 1 == 0)) {
      stg1_update_0((c1 - 2) / 1, (c0 - 2) / 1);
    }

    if ((-4 <= c1 && c1 <= 1929) && ((c1 - 3) % 1 == 0) && (3 <= c0 && c0 <= 1089) && ((c0 - 3) % 1 == 0)) {
      stg2_update_0((c1 - 3) / 1, (c0 - 3) / 1);
    }

    if ((-2 <= c1 && c1 <= 1929) && ((c1 - 4) % 1 == 0) && (4 <= c0 && c0 <= 1089) && ((c0 - 4) % 1 == 0)) {
      stg3_update_0((c1 - 4) / 1, (c0 - 4) / 1);
    }

    if ((0 <= c1 && c1 <= 1929) && ((c1 - 5) % 1 == 0) && (5 <= c0 && c0 <= 1089) && ((c0 - 5) % 1 == 0)) {
      stg4_update_0((c1 - 5) / 1, (c0 - 5) / 1);
    }

    if ((2 <= c1 && c1 <= 1929) && ((c1 - 6) % 1 == 0) && (6 <= c0 && c0 <= 1089) && ((c0 - 6) % 1 == 0)) {
      stg5_update_0((c1 - 6) / 1, (c0 - 6) / 1);
    }

    if ((4 <= c1 && c1 <= 1929) && ((c1 - 7) % 1 == 0) && (7 <= c0 && c0 <= 1089) && ((c0 - 7) % 1 == 0)) {
      stg6_update_0((c1 - 7) / 1, (c0 - 7) / 1);
    }

    if ((6 <= c1 && c1 <= 1929) && ((c1 - 8) % 1 == 0) && (8 <= c0 && c0 <= 1089) && ((c0 - 8) % 1 == 0)) {
      stg7_update_0((c1 - 8) / 1, (c0 - 8) / 1);
    }

    if ((8 <= c1 && c1 <= 1929) && ((c1 - 9) % 1 == 0) && (9 <= c0 && c0 <= 1089) && ((c0 - 9) % 1 == 0)) {
      stg8_update_0((c1 - 9) / 1, (c0 - 9) / 1);
    }

    if ((10 <= c1 && c1 <= 1929) && ((c1 - 10) % 1 == 0) && (10 <= c0 && c0 <= 1089) && ((c0 - 10) % 1 == 0)) {
      stg9_update_0((c1 - 10) / 1, (c0 - 10) / 1);
    }

    if ((10 <= c1 && c1 <= 1929) && ((c1 - 10) % 1 == 0) && (10 <= c0 && c0 <= 1089) && ((c0 - 10) % 1 == 0)) {
      icsc_1_update_0((c1 - 10) / 1, (c0 - 10) / 1);
    }

  }
}

  */
	  // Schedules...
	    // icsc_1_update_0 -> [1*d1*1*1 + 1*10,1*d0*1*1 + 1*10,1*12]
	    // in_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	    // stg0_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
	    // stg1_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*3]
	    // stg2_update_0 -> [1*d1*1*1 + 1*3,1*d0*1*1 + 1*3,1*4]
	    // stg3_update_0 -> [1*d1*1*1 + 1*4,1*d0*1*1 + 1*4,1*5]
	    // stg4_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*6]
	    // stg5_update_0 -> [1*d1*1*1 + 1*6,1*d0*1*1 + 1*6,1*7]
	    // stg6_update_0 -> [1*d1*1*1 + 1*7,1*d0*1*1 + 1*7,1*8]
	    // stg7_update_0 -> [1*d1*1*1 + 1*8,1*d0*1*1 + 1*8,1*9]
	    // stg8_update_0 -> [1*d1*1*1 + 1*9,1*d0*1*1 + 1*9,1*10]
	    // stg9_update_0 -> [1*d1*1*1 + 1*10,1*d0*1*1 + 1*10,1*11]
	for (int c0 = 0; c0 <= 1089; c0++) {
	  for (int c1 = -10; c1 <= 1929; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-10 <= c1 && c1 <= 1929) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1089) && ((c0 - 0) % 1 == 0)) {
	      in_update_0(in_off_chip /* buf name */, in, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((-8 <= c1 && c1 <= 1929) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1089) && ((c0 - 1) % 1 == 0)) {
	      stg0_update_0(in /* buf name */, stg0, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((-6 <= c1 && c1 <= 1929) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 1089) && ((c0 - 2) % 1 == 0)) {
	      stg1_update_0(stg0 /* buf name */, stg1, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((-4 <= c1 && c1 <= 1929) && ((c1 - 3) % 1 == 0) && (3 <= c0 && c0 <= 1089) && ((c0 - 3) % 1 == 0)) {
	      stg2_update_0(stg1 /* buf name */, stg2, (c1 - 3) / 1, (c0 - 3) / 1);
	    }
	
	    if ((-2 <= c1 && c1 <= 1929) && ((c1 - 4) % 1 == 0) && (4 <= c0 && c0 <= 1089) && ((c0 - 4) % 1 == 0)) {
	      stg3_update_0(stg2 /* buf name */, stg3, (c1 - 4) / 1, (c0 - 4) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 1929) && ((c1 - 5) % 1 == 0) && (5 <= c0 && c0 <= 1089) && ((c0 - 5) % 1 == 0)) {
	      stg4_update_0(stg3 /* buf name */, stg4, (c1 - 5) / 1, (c0 - 5) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 1929) && ((c1 - 6) % 1 == 0) && (6 <= c0 && c0 <= 1089) && ((c0 - 6) % 1 == 0)) {
	      stg5_update_0(stg4 /* buf name */, stg5, (c1 - 6) / 1, (c0 - 6) / 1);
	    }
	
	    if ((4 <= c1 && c1 <= 1929) && ((c1 - 7) % 1 == 0) && (7 <= c0 && c0 <= 1089) && ((c0 - 7) % 1 == 0)) {
	      stg6_update_0(stg5 /* buf name */, stg6, (c1 - 7) / 1, (c0 - 7) / 1);
	    }
	
	    if ((6 <= c1 && c1 <= 1929) && ((c1 - 8) % 1 == 0) && (8 <= c0 && c0 <= 1089) && ((c0 - 8) % 1 == 0)) {
	      stg7_update_0(stg6 /* buf name */, stg7, (c1 - 8) / 1, (c0 - 8) / 1);
	    }
	
	    if ((8 <= c1 && c1 <= 1929) && ((c1 - 9) % 1 == 0) && (9 <= c0 && c0 <= 1089) && ((c0 - 9) % 1 == 0)) {
	      stg8_update_0(stg7 /* buf name */, stg8, (c1 - 9) / 1, (c0 - 9) / 1);
	    }
	
	    if ((10 <= c1 && c1 <= 1929) && ((c1 - 10) % 1 == 0) && (10 <= c0 && c0 <= 1089) && ((c0 - 10) % 1 == 0)) {
	      stg9_update_0(stg8 /* buf name */, stg9, (c1 - 10) / 1, (c0 - 10) / 1);
	    }
	
	    if ((10 <= c1 && c1 <= 1929) && ((c1 - 10) % 1 == 0) && (10 <= c0 && c0 <= 1089) && ((c0 - 10) % 1 == 0)) {
	      icsc_1_update_0(stg9 /* buf name */, icsc_1, (c1 - 10) / 1, (c0 - 10) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void icsc_1_opt_wrapper(HWStream<hw_uint<16> >& /* get_args num ports = 1 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */icsc_1, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    icsc_1_opt(in_off_chip, icsc_1);
  }
}
#ifdef __VIVADO_SYNTH__
  // { icsc_1_update_0[root = 0, icsc_1_0, icsc_1_1] -> icsc_1[0, 0] : 0 <= icsc_1_0 <= 1919 and 0 <= icsc_1_1 <= 1079 }
const int icsc_1_update_0_write_pipe0_num_transfers = 2073600;
  // { in_update_0[root = 0, in_0, in_1] -> in_off_chip[0, 0] : -10 <= in_0 <= 1929 and 0 <= in_1 <= 1089 }
const int in_update_0_read_pipe0_num_transfers = 2114600;


extern "C" {

void icsc_1_opt_accel(hw_uint<16>* in_update_0_read_pipe0, hw_uint<16>* icsc_1_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = icsc_1_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = icsc_1_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > in_update_0_read_pipe0_channel;
  static HWStream<hw_uint<16> > icsc_1_update_0_write_pipe0_channel;

  burst_read<16>(in_update_0_read_pipe0, in_update_0_read_pipe0_channel, in_update_0_read_pipe0_num_transfers*size);

  icsc_1_opt_wrapper(in_update_0_read_pipe0_channel, icsc_1_update_0_write_pipe0_channel, size);

  burst_write<16>(icsc_1_update_0_write_pipe0, icsc_1_update_0_write_pipe0_channel, icsc_1_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void icsc_1_opt_rdai(HWStream<hw_uint<16> >& in_update_0_read_pipe0, HWStream<hw_uint<16> >&  icsc_1_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = icsc_1_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  icsc_1_opt(in_update_0_read_pipe0, icsc_1_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

