#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: jacdynl2_1_opt_compute_units.h
#include "jacdynl2_1_opt_compute_units.h"

struct in_in_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[-15, 1094], [0, 1093]}
	// Capacity: 1113
	// # of read delays: 5
  // 0, 1, 1110, 1111, 1112
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1108> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1109() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1110() {
		return f4;
	}

	inline hw_uint<16> peek_1111() {
		return f6;
	}

	inline hw_uint<16> peek_1112() {
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
    // cap: 1 reading from capacity: 1108
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1108 reading from capacity: 1
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
    // { stg0_update_0[d0, d1] -> in[-1 + d0, d1] : -14 <= d0 <= 1093 and 0 <= d1 <= 1093 }
    // { stg0_update_0[d0, d1] -> in[d0, d1] : -14 <= d0 <= 1093 and 0 <= d1 <= 1093 }
    // { stg0_update_0[d0, d1] -> in[d0, 1 + d1] : -14 <= d0 <= 1093 and 0 <= d1 <= 1093 }
    // { stg0_update_0[d0, d1] -> in[1 + d0, d1] : -14 <= d0 <= 1093 and 0 <= d1 <= 1093 }
  // # of banks: 1
  in_in_update_0_write0_merged_banks_4_cache in_in_update_0_write0_merged_banks_4;
};



inline void in_in_update_0_write0_write(hw_uint<16>& in_in_update_0_write0, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write0_merged_banks_4.push(in_in_update_0_write0);
}

inline hw_uint<16> stg0_rd0_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd0 read pattern: { stg0_update_0[d0, d1] -> in[-1 + d0, d1] : -14 <= d0 <= 1093 and 0 <= d1 <= 1093 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -14 <= d0 <= 1093 and 0 <= d1 <= 1093 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -15 <= d0 <= 1094 and 0 <= d1 <= 1094 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_4.peek_1112();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> stg0_rd1_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd1 read pattern: { stg0_update_0[d0, d1] -> in[d0, d1] : -14 <= d0 <= 1093 and 0 <= d1 <= 1093 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -14 <= d0 <= 1093 and 0 <= d1 <= 1093 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -15 <= d0 <= 1094 and 0 <= d1 <= 1094 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_4.peek_1111();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> stg0_rd2_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd2 read pattern: { stg0_update_0[d0, d1] -> in[d0, 1 + d1] : -14 <= d0 <= 1093 and 0 <= d1 <= 1093 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -14 <= d0 <= 1093 and 0 <= d1 <= 1093 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -15 <= d0 <= 1094 and 0 <= d1 <= 1094 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_4.peek_1();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> stg0_rd3_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd3 read pattern: { stg0_update_0[d0, d1] -> in[1 + d0, d1] : -14 <= d0 <= 1093 and 0 <= d1 <= 1093 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -14 <= d0 <= 1093 and 0 <= d1 <= 1093 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -15 <= d0 <= 1094 and 0 <= d1 <= 1094 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_4.peek_1110();
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
	// RAM Box: {[-14, 1093], [0, 1092]}
	// Capacity: 1111
	// # of read delays: 5
  // 0, 1, 1108, 1109, 1110
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1106> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1107() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1108() {
		return f4;
	}

	inline hw_uint<16> peek_1109() {
		return f6;
	}

	inline hw_uint<16> peek_1110() {
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
    // cap: 1 reading from capacity: 1106
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1106 reading from capacity: 1
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
    // { stg1_update_0[d0, d1] -> stg0[-1 + d0, d1] : -13 <= d0 <= 1092 and 0 <= d1 <= 1092 }
    // { stg1_update_0[d0, d1] -> stg0[d0, d1] : -13 <= d0 <= 1092 and 0 <= d1 <= 1092 }
    // { stg1_update_0[d0, d1] -> stg0[d0, 1 + d1] : -13 <= d0 <= 1092 and 0 <= d1 <= 1092 }
    // { stg1_update_0[d0, d1] -> stg0[1 + d0, d1] : -13 <= d0 <= 1092 and 0 <= d1 <= 1092 }
  // # of banks: 1
  stg0_stg0_update_0_write0_merged_banks_4_cache stg0_stg0_update_0_write0_merged_banks_4;
};



inline void stg0_stg0_update_0_write0_write(hw_uint<16>& stg0_stg0_update_0_write0, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  stg0.stg0_stg0_update_0_write0_merged_banks_4.push(stg0_stg0_update_0_write0);
}

inline hw_uint<16> stg1_rd0_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd0 read pattern: { stg1_update_0[d0, d1] -> stg0[-1 + d0, d1] : -13 <= d0 <= 1092 and 0 <= d1 <= 1092 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -13 <= d0 <= 1092 and 0 <= d1 <= 1092 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -14 <= d0 <= 1093 and 0 <= d1 <= 1093 }
  auto value_stg0_stg0_update_0_write0 = stg0.stg0_stg0_update_0_write0_merged_banks_4.peek_1110();
  return value_stg0_stg0_update_0_write0;
  return 0;
}

inline hw_uint<16> stg1_rd1_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd1 read pattern: { stg1_update_0[d0, d1] -> stg0[d0, d1] : -13 <= d0 <= 1092 and 0 <= d1 <= 1092 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -13 <= d0 <= 1092 and 0 <= d1 <= 1092 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -14 <= d0 <= 1093 and 0 <= d1 <= 1093 }
  auto value_stg0_stg0_update_0_write0 = stg0.stg0_stg0_update_0_write0_merged_banks_4.peek_1109();
  return value_stg0_stg0_update_0_write0;
  return 0;
}

inline hw_uint<16> stg1_rd2_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd2 read pattern: { stg1_update_0[d0, d1] -> stg0[d0, 1 + d1] : -13 <= d0 <= 1092 and 0 <= d1 <= 1092 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -13 <= d0 <= 1092 and 0 <= d1 <= 1092 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -14 <= d0 <= 1093 and 0 <= d1 <= 1093 }
  auto value_stg0_stg0_update_0_write0 = stg0.stg0_stg0_update_0_write0_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write0;
  return 0;
}

inline hw_uint<16> stg1_rd3_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd3 read pattern: { stg1_update_0[d0, d1] -> stg0[1 + d0, d1] : -13 <= d0 <= 1092 and 0 <= d1 <= 1092 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -13 <= d0 <= 1092 and 0 <= d1 <= 1092 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -14 <= d0 <= 1093 and 0 <= d1 <= 1093 }
  auto value_stg0_stg0_update_0_write0 = stg0.stg0_stg0_update_0_write0_merged_banks_4.peek_1108();
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
	// RAM Box: {[-13, 1092], [0, 1091]}
	// Capacity: 1109
	// # of read delays: 5
  // 0, 1, 1106, 1107, 1108
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1104> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1105() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1106() {
		return f4;
	}

	inline hw_uint<16> peek_1107() {
		return f6;
	}

	inline hw_uint<16> peek_1108() {
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
    // cap: 1 reading from capacity: 1104
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1104 reading from capacity: 1
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
    // { stg2_update_0[d0, d1] -> stg1[-1 + d0, d1] : -12 <= d0 <= 1091 and 0 <= d1 <= 1091 }
    // { stg2_update_0[d0, d1] -> stg1[d0, d1] : -12 <= d0 <= 1091 and 0 <= d1 <= 1091 }
    // { stg2_update_0[d0, d1] -> stg1[d0, 1 + d1] : -12 <= d0 <= 1091 and 0 <= d1 <= 1091 }
    // { stg2_update_0[d0, d1] -> stg1[1 + d0, d1] : -12 <= d0 <= 1091 and 0 <= d1 <= 1091 }
  // # of banks: 1
  stg1_stg1_update_0_write0_merged_banks_4_cache stg1_stg1_update_0_write0_merged_banks_4;
};



inline void stg1_stg1_update_0_write0_write(hw_uint<16>& stg1_stg1_update_0_write0, stg1_cache& stg1, int d0, int d1, int dynamic_address) {
  stg1.stg1_stg1_update_0_write0_merged_banks_4.push(stg1_stg1_update_0_write0);
}

inline hw_uint<16> stg2_rd0_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd0 read pattern: { stg2_update_0[d0, d1] -> stg1[-1 + d0, d1] : -12 <= d0 <= 1091 and 0 <= d1 <= 1091 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -12 <= d0 <= 1091 and 0 <= d1 <= 1091 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -13 <= d0 <= 1092 and 0 <= d1 <= 1092 }
  auto value_stg1_stg1_update_0_write0 = stg1.stg1_stg1_update_0_write0_merged_banks_4.peek_1108();
  return value_stg1_stg1_update_0_write0;
  return 0;
}

inline hw_uint<16> stg2_rd1_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd1 read pattern: { stg2_update_0[d0, d1] -> stg1[d0, d1] : -12 <= d0 <= 1091 and 0 <= d1 <= 1091 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -12 <= d0 <= 1091 and 0 <= d1 <= 1091 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -13 <= d0 <= 1092 and 0 <= d1 <= 1092 }
  auto value_stg1_stg1_update_0_write0 = stg1.stg1_stg1_update_0_write0_merged_banks_4.peek_1107();
  return value_stg1_stg1_update_0_write0;
  return 0;
}

inline hw_uint<16> stg2_rd2_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd2 read pattern: { stg2_update_0[d0, d1] -> stg1[d0, 1 + d1] : -12 <= d0 <= 1091 and 0 <= d1 <= 1091 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -12 <= d0 <= 1091 and 0 <= d1 <= 1091 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -13 <= d0 <= 1092 and 0 <= d1 <= 1092 }
  auto value_stg1_stg1_update_0_write0 = stg1.stg1_stg1_update_0_write0_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write0;
  return 0;
}

inline hw_uint<16> stg2_rd3_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd3 read pattern: { stg2_update_0[d0, d1] -> stg1[1 + d0, d1] : -12 <= d0 <= 1091 and 0 <= d1 <= 1091 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -12 <= d0 <= 1091 and 0 <= d1 <= 1091 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -13 <= d0 <= 1092 and 0 <= d1 <= 1092 }
  auto value_stg1_stg1_update_0_write0 = stg1.stg1_stg1_update_0_write0_merged_banks_4.peek_1106();
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

struct stg10_stg10_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[-4, 1083], [0, 1082]}
	// Capacity: 1091
	// # of read delays: 5
  // 0, 1, 1088, 1089, 1090
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1086> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1087() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1088() {
		return f4;
	}

	inline hw_uint<16> peek_1089() {
		return f6;
	}

	inline hw_uint<16> peek_1090() {
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
    // cap: 1 reading from capacity: 1086
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1086 reading from capacity: 1
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
    // { stg11_update_0[d0, d1] -> stg10[-1 + d0, d1] : -3 <= d0 <= 1082 and 0 <= d1 <= 1082 }
    // { stg11_update_0[d0, d1] -> stg10[d0, d1] : -3 <= d0 <= 1082 and 0 <= d1 <= 1082 }
    // { stg11_update_0[d0, d1] -> stg10[d0, 1 + d1] : -3 <= d0 <= 1082 and 0 <= d1 <= 1082 }
    // { stg11_update_0[d0, d1] -> stg10[1 + d0, d1] : -3 <= d0 <= 1082 and 0 <= d1 <= 1082 }
  // # of banks: 1
  stg10_stg10_update_0_write0_merged_banks_4_cache stg10_stg10_update_0_write0_merged_banks_4;
};



inline void stg10_stg10_update_0_write0_write(hw_uint<16>& stg10_stg10_update_0_write0, stg10_cache& stg10, int d0, int d1, int dynamic_address) {
  stg10.stg10_stg10_update_0_write0_merged_banks_4.push(stg10_stg10_update_0_write0);
}

inline hw_uint<16> stg11_rd0_select(stg10_cache& stg10, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_rd0 read pattern: { stg11_update_0[d0, d1] -> stg10[-1 + d0, d1] : -3 <= d0 <= 1082 and 0 <= d1 <= 1082 }
  // Read schedule : { stg11_update_0[d0, d1] -> [12 + d1, 12 + d0, 13] : -3 <= d0 <= 1082 and 0 <= d1 <= 1082 }
  // Write schedule: { stg10_update_0[d0, d1] -> [11 + d1, 11 + d0, 12] : -4 <= d0 <= 1083 and 0 <= d1 <= 1083 }
  auto value_stg10_stg10_update_0_write0 = stg10.stg10_stg10_update_0_write0_merged_banks_4.peek_1090();
  return value_stg10_stg10_update_0_write0;
  return 0;
}

inline hw_uint<16> stg11_rd1_select(stg10_cache& stg10, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_rd1 read pattern: { stg11_update_0[d0, d1] -> stg10[d0, d1] : -3 <= d0 <= 1082 and 0 <= d1 <= 1082 }
  // Read schedule : { stg11_update_0[d0, d1] -> [12 + d1, 12 + d0, 13] : -3 <= d0 <= 1082 and 0 <= d1 <= 1082 }
  // Write schedule: { stg10_update_0[d0, d1] -> [11 + d1, 11 + d0, 12] : -4 <= d0 <= 1083 and 0 <= d1 <= 1083 }
  auto value_stg10_stg10_update_0_write0 = stg10.stg10_stg10_update_0_write0_merged_banks_4.peek_1089();
  return value_stg10_stg10_update_0_write0;
  return 0;
}

inline hw_uint<16> stg11_rd2_select(stg10_cache& stg10, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_rd2 read pattern: { stg11_update_0[d0, d1] -> stg10[d0, 1 + d1] : -3 <= d0 <= 1082 and 0 <= d1 <= 1082 }
  // Read schedule : { stg11_update_0[d0, d1] -> [12 + d1, 12 + d0, 13] : -3 <= d0 <= 1082 and 0 <= d1 <= 1082 }
  // Write schedule: { stg10_update_0[d0, d1] -> [11 + d1, 11 + d0, 12] : -4 <= d0 <= 1083 and 0 <= d1 <= 1083 }
  auto value_stg10_stg10_update_0_write0 = stg10.stg10_stg10_update_0_write0_merged_banks_4.peek_1();
  return value_stg10_stg10_update_0_write0;
  return 0;
}

inline hw_uint<16> stg11_rd3_select(stg10_cache& stg10, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_rd3 read pattern: { stg11_update_0[d0, d1] -> stg10[1 + d0, d1] : -3 <= d0 <= 1082 and 0 <= d1 <= 1082 }
  // Read schedule : { stg11_update_0[d0, d1] -> [12 + d1, 12 + d0, 13] : -3 <= d0 <= 1082 and 0 <= d1 <= 1082 }
  // Write schedule: { stg10_update_0[d0, d1] -> [11 + d1, 11 + d0, 12] : -4 <= d0 <= 1083 and 0 <= d1 <= 1083 }
  auto value_stg10_stg10_update_0_write0 = stg10.stg10_stg10_update_0_write0_merged_banks_4.peek_1088();
  return value_stg10_stg10_update_0_write0;
  return 0;
}

// # of bundles = 2
// stg10_update_0_write
//	stg10_stg10_update_0_write0
inline void stg10_stg10_update_0_write_bundle_write(hw_uint<16>& stg10_update_0_write, stg10_cache& stg10, int d0, int d1, int dynamic_address) {
	hw_uint<16> stg10_stg10_update_0_write0_res = stg10_update_0_write.extract<0, 15>();
	stg10_stg10_update_0_write0_write(stg10_stg10_update_0_write0_res, stg10, d0, d1, dynamic_address);
}

// stg11_update_0_read
//	stg11_rd0
//	stg11_rd1
//	stg11_rd2
//	stg11_rd3
inline hw_uint<64> stg10_stg11_update_0_read_bundle_read(stg10_cache& stg10, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg11_rd0
    // stg11_rd1
    // stg11_rd2
    // stg11_rd3

	hw_uint<64> result;
	hw_uint<16> stg11_rd0_res = stg11_rd0_select(stg10, d0, d1, dynamic_address);
	set_at<0, 64>(result, stg11_rd0_res);
	hw_uint<16> stg11_rd1_res = stg11_rd1_select(stg10, d0, d1, dynamic_address);
	set_at<16, 64>(result, stg11_rd1_res);
	hw_uint<16> stg11_rd2_res = stg11_rd2_select(stg10, d0, d1, dynamic_address);
	set_at<32, 64>(result, stg11_rd2_res);
	hw_uint<16> stg11_rd3_res = stg11_rd3_select(stg10, d0, d1, dynamic_address);
	set_at<48, 64>(result, stg11_rd3_res);
	return result;
}

struct stg11_stg11_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[-3, 1082], [0, 1081]}
	// Capacity: 1089
	// # of read delays: 5
  // 0, 1, 1086, 1087, 1088
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1084> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1085() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1086() {
		return f4;
	}

	inline hw_uint<16> peek_1087() {
		return f6;
	}

	inline hw_uint<16> peek_1088() {
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
    // cap: 1 reading from capacity: 1084
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1084 reading from capacity: 1
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
    // { stg12_update_0[d0, d1] -> stg11[-1 + d0, d1] : -2 <= d0 <= 1081 and 0 <= d1 <= 1081 }
    // { stg12_update_0[d0, d1] -> stg11[d0, d1] : -2 <= d0 <= 1081 and 0 <= d1 <= 1081 }
    // { stg12_update_0[d0, d1] -> stg11[d0, 1 + d1] : -2 <= d0 <= 1081 and 0 <= d1 <= 1081 }
    // { stg12_update_0[d0, d1] -> stg11[1 + d0, d1] : -2 <= d0 <= 1081 and 0 <= d1 <= 1081 }
  // # of banks: 1
  stg11_stg11_update_0_write0_merged_banks_4_cache stg11_stg11_update_0_write0_merged_banks_4;
};



inline void stg11_stg11_update_0_write0_write(hw_uint<16>& stg11_stg11_update_0_write0, stg11_cache& stg11, int d0, int d1, int dynamic_address) {
  stg11.stg11_stg11_update_0_write0_merged_banks_4.push(stg11_stg11_update_0_write0);
}

inline hw_uint<16> stg12_rd0_select(stg11_cache& stg11, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_rd0 read pattern: { stg12_update_0[d0, d1] -> stg11[-1 + d0, d1] : -2 <= d0 <= 1081 and 0 <= d1 <= 1081 }
  // Read schedule : { stg12_update_0[d0, d1] -> [13 + d1, 13 + d0, 14] : -2 <= d0 <= 1081 and 0 <= d1 <= 1081 }
  // Write schedule: { stg11_update_0[d0, d1] -> [12 + d1, 12 + d0, 13] : -3 <= d0 <= 1082 and 0 <= d1 <= 1082 }
  auto value_stg11_stg11_update_0_write0 = stg11.stg11_stg11_update_0_write0_merged_banks_4.peek_1088();
  return value_stg11_stg11_update_0_write0;
  return 0;
}

inline hw_uint<16> stg12_rd1_select(stg11_cache& stg11, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_rd1 read pattern: { stg12_update_0[d0, d1] -> stg11[d0, d1] : -2 <= d0 <= 1081 and 0 <= d1 <= 1081 }
  // Read schedule : { stg12_update_0[d0, d1] -> [13 + d1, 13 + d0, 14] : -2 <= d0 <= 1081 and 0 <= d1 <= 1081 }
  // Write schedule: { stg11_update_0[d0, d1] -> [12 + d1, 12 + d0, 13] : -3 <= d0 <= 1082 and 0 <= d1 <= 1082 }
  auto value_stg11_stg11_update_0_write0 = stg11.stg11_stg11_update_0_write0_merged_banks_4.peek_1087();
  return value_stg11_stg11_update_0_write0;
  return 0;
}

inline hw_uint<16> stg12_rd2_select(stg11_cache& stg11, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_rd2 read pattern: { stg12_update_0[d0, d1] -> stg11[d0, 1 + d1] : -2 <= d0 <= 1081 and 0 <= d1 <= 1081 }
  // Read schedule : { stg12_update_0[d0, d1] -> [13 + d1, 13 + d0, 14] : -2 <= d0 <= 1081 and 0 <= d1 <= 1081 }
  // Write schedule: { stg11_update_0[d0, d1] -> [12 + d1, 12 + d0, 13] : -3 <= d0 <= 1082 and 0 <= d1 <= 1082 }
  auto value_stg11_stg11_update_0_write0 = stg11.stg11_stg11_update_0_write0_merged_banks_4.peek_1();
  return value_stg11_stg11_update_0_write0;
  return 0;
}

inline hw_uint<16> stg12_rd3_select(stg11_cache& stg11, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_rd3 read pattern: { stg12_update_0[d0, d1] -> stg11[1 + d0, d1] : -2 <= d0 <= 1081 and 0 <= d1 <= 1081 }
  // Read schedule : { stg12_update_0[d0, d1] -> [13 + d1, 13 + d0, 14] : -2 <= d0 <= 1081 and 0 <= d1 <= 1081 }
  // Write schedule: { stg11_update_0[d0, d1] -> [12 + d1, 12 + d0, 13] : -3 <= d0 <= 1082 and 0 <= d1 <= 1082 }
  auto value_stg11_stg11_update_0_write0 = stg11.stg11_stg11_update_0_write0_merged_banks_4.peek_1086();
  return value_stg11_stg11_update_0_write0;
  return 0;
}

// # of bundles = 2
// stg11_update_0_write
//	stg11_stg11_update_0_write0
inline void stg11_stg11_update_0_write_bundle_write(hw_uint<16>& stg11_update_0_write, stg11_cache& stg11, int d0, int d1, int dynamic_address) {
	hw_uint<16> stg11_stg11_update_0_write0_res = stg11_update_0_write.extract<0, 15>();
	stg11_stg11_update_0_write0_write(stg11_stg11_update_0_write0_res, stg11, d0, d1, dynamic_address);
}

// stg12_update_0_read
//	stg12_rd0
//	stg12_rd1
//	stg12_rd2
//	stg12_rd3
inline hw_uint<64> stg11_stg12_update_0_read_bundle_read(stg11_cache& stg11, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg12_rd0
    // stg12_rd1
    // stg12_rd2
    // stg12_rd3

	hw_uint<64> result;
	hw_uint<16> stg12_rd0_res = stg12_rd0_select(stg11, d0, d1, dynamic_address);
	set_at<0, 64>(result, stg12_rd0_res);
	hw_uint<16> stg12_rd1_res = stg12_rd1_select(stg11, d0, d1, dynamic_address);
	set_at<16, 64>(result, stg12_rd1_res);
	hw_uint<16> stg12_rd2_res = stg12_rd2_select(stg11, d0, d1, dynamic_address);
	set_at<32, 64>(result, stg12_rd2_res);
	hw_uint<16> stg12_rd3_res = stg12_rd3_select(stg11, d0, d1, dynamic_address);
	set_at<48, 64>(result, stg12_rd3_res);
	return result;
}

struct stg12_stg12_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[-2, 1081], [0, 1080]}
	// Capacity: 1087
	// # of read delays: 5
  // 0, 1, 1084, 1085, 1086
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1082> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1083() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1084() {
		return f4;
	}

	inline hw_uint<16> peek_1085() {
		return f6;
	}

	inline hw_uint<16> peek_1086() {
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
    // cap: 1 reading from capacity: 1082
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1082 reading from capacity: 1
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
    // { stg13_update_0[d0, d1] -> stg12[-1 + d0, d1] : -1 <= d0 <= 1080 and 0 <= d1 <= 1080 }
    // { stg13_update_0[d0, d1] -> stg12[d0, d1] : -1 <= d0 <= 1080 and 0 <= d1 <= 1080 }
    // { stg13_update_0[d0, d1] -> stg12[d0, 1 + d1] : -1 <= d0 <= 1080 and 0 <= d1 <= 1080 }
    // { stg13_update_0[d0, d1] -> stg12[1 + d0, d1] : -1 <= d0 <= 1080 and 0 <= d1 <= 1080 }
  // # of banks: 1
  stg12_stg12_update_0_write0_merged_banks_4_cache stg12_stg12_update_0_write0_merged_banks_4;
};



inline void stg12_stg12_update_0_write0_write(hw_uint<16>& stg12_stg12_update_0_write0, stg12_cache& stg12, int d0, int d1, int dynamic_address) {
  stg12.stg12_stg12_update_0_write0_merged_banks_4.push(stg12_stg12_update_0_write0);
}

inline hw_uint<16> stg13_rd0_select(stg12_cache& stg12, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_rd0 read pattern: { stg13_update_0[d0, d1] -> stg12[-1 + d0, d1] : -1 <= d0 <= 1080 and 0 <= d1 <= 1080 }
  // Read schedule : { stg13_update_0[d0, d1] -> [14 + d1, 14 + d0, 15] : -1 <= d0 <= 1080 and 0 <= d1 <= 1080 }
  // Write schedule: { stg12_update_0[d0, d1] -> [13 + d1, 13 + d0, 14] : -2 <= d0 <= 1081 and 0 <= d1 <= 1081 }
  auto value_stg12_stg12_update_0_write0 = stg12.stg12_stg12_update_0_write0_merged_banks_4.peek_1086();
  return value_stg12_stg12_update_0_write0;
  return 0;
}

inline hw_uint<16> stg13_rd1_select(stg12_cache& stg12, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_rd1 read pattern: { stg13_update_0[d0, d1] -> stg12[d0, d1] : -1 <= d0 <= 1080 and 0 <= d1 <= 1080 }
  // Read schedule : { stg13_update_0[d0, d1] -> [14 + d1, 14 + d0, 15] : -1 <= d0 <= 1080 and 0 <= d1 <= 1080 }
  // Write schedule: { stg12_update_0[d0, d1] -> [13 + d1, 13 + d0, 14] : -2 <= d0 <= 1081 and 0 <= d1 <= 1081 }
  auto value_stg12_stg12_update_0_write0 = stg12.stg12_stg12_update_0_write0_merged_banks_4.peek_1085();
  return value_stg12_stg12_update_0_write0;
  return 0;
}

inline hw_uint<16> stg13_rd2_select(stg12_cache& stg12, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_rd2 read pattern: { stg13_update_0[d0, d1] -> stg12[d0, 1 + d1] : -1 <= d0 <= 1080 and 0 <= d1 <= 1080 }
  // Read schedule : { stg13_update_0[d0, d1] -> [14 + d1, 14 + d0, 15] : -1 <= d0 <= 1080 and 0 <= d1 <= 1080 }
  // Write schedule: { stg12_update_0[d0, d1] -> [13 + d1, 13 + d0, 14] : -2 <= d0 <= 1081 and 0 <= d1 <= 1081 }
  auto value_stg12_stg12_update_0_write0 = stg12.stg12_stg12_update_0_write0_merged_banks_4.peek_1();
  return value_stg12_stg12_update_0_write0;
  return 0;
}

inline hw_uint<16> stg13_rd3_select(stg12_cache& stg12, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_rd3 read pattern: { stg13_update_0[d0, d1] -> stg12[1 + d0, d1] : -1 <= d0 <= 1080 and 0 <= d1 <= 1080 }
  // Read schedule : { stg13_update_0[d0, d1] -> [14 + d1, 14 + d0, 15] : -1 <= d0 <= 1080 and 0 <= d1 <= 1080 }
  // Write schedule: { stg12_update_0[d0, d1] -> [13 + d1, 13 + d0, 14] : -2 <= d0 <= 1081 and 0 <= d1 <= 1081 }
  auto value_stg12_stg12_update_0_write0 = stg12.stg12_stg12_update_0_write0_merged_banks_4.peek_1084();
  return value_stg12_stg12_update_0_write0;
  return 0;
}

// # of bundles = 2
// stg12_update_0_write
//	stg12_stg12_update_0_write0
inline void stg12_stg12_update_0_write_bundle_write(hw_uint<16>& stg12_update_0_write, stg12_cache& stg12, int d0, int d1, int dynamic_address) {
	hw_uint<16> stg12_stg12_update_0_write0_res = stg12_update_0_write.extract<0, 15>();
	stg12_stg12_update_0_write0_write(stg12_stg12_update_0_write0_res, stg12, d0, d1, dynamic_address);
}

// stg13_update_0_read
//	stg13_rd0
//	stg13_rd1
//	stg13_rd2
//	stg13_rd3
inline hw_uint<64> stg12_stg13_update_0_read_bundle_read(stg12_cache& stg12, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg13_rd0
    // stg13_rd1
    // stg13_rd2
    // stg13_rd3

	hw_uint<64> result;
	hw_uint<16> stg13_rd0_res = stg13_rd0_select(stg12, d0, d1, dynamic_address);
	set_at<0, 64>(result, stg13_rd0_res);
	hw_uint<16> stg13_rd1_res = stg13_rd1_select(stg12, d0, d1, dynamic_address);
	set_at<16, 64>(result, stg13_rd1_res);
	hw_uint<16> stg13_rd2_res = stg13_rd2_select(stg12, d0, d1, dynamic_address);
	set_at<32, 64>(result, stg13_rd2_res);
	hw_uint<16> stg13_rd3_res = stg13_rd3_select(stg12, d0, d1, dynamic_address);
	set_at<48, 64>(result, stg13_rd3_res);
	return result;
}

struct stg13_stg13_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[-1, 1080], [0, 1079]}
	// Capacity: 1085
	// # of read delays: 5
  // 0, 1, 1082, 1083, 1084
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1080> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1081() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1082() {
		return f4;
	}

	inline hw_uint<16> peek_1083() {
		return f6;
	}

	inline hw_uint<16> peek_1084() {
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
    // cap: 1 reading from capacity: 1080
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1080 reading from capacity: 1
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
    // { stg14_update_0[d0, d1] -> stg13[-1 + d0, d1] : 0 <= d0 <= 1079 and 0 <= d1 <= 1079 }
    // { stg14_update_0[d0, d1] -> stg13[d0, d1] : 0 <= d0 <= 1079 and 0 <= d1 <= 1079 }
    // { stg14_update_0[d0, d1] -> stg13[d0, 1 + d1] : 0 <= d0 <= 1079 and 0 <= d1 <= 1079 }
    // { stg14_update_0[d0, d1] -> stg13[1 + d0, d1] : 0 <= d0 <= 1079 and 0 <= d1 <= 1079 }
  // # of banks: 1
  stg13_stg13_update_0_write0_merged_banks_4_cache stg13_stg13_update_0_write0_merged_banks_4;
};



inline void stg13_stg13_update_0_write0_write(hw_uint<16>& stg13_stg13_update_0_write0, stg13_cache& stg13, int d0, int d1, int dynamic_address) {
  stg13.stg13_stg13_update_0_write0_merged_banks_4.push(stg13_stg13_update_0_write0);
}

inline hw_uint<16> stg14_rd0_select(stg13_cache& stg13, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg14_rd0 read pattern: { stg14_update_0[d0, d1] -> stg13[-1 + d0, d1] : 0 <= d0 <= 1079 and 0 <= d1 <= 1079 }
  // Read schedule : { stg14_update_0[d0, d1] -> [15 + d1, 15 + d0, 16] : 0 <= d0 <= 1079 and 0 <= d1 <= 1079 }
  // Write schedule: { stg13_update_0[d0, d1] -> [14 + d1, 14 + d0, 15] : -1 <= d0 <= 1080 and 0 <= d1 <= 1080 }
  auto value_stg13_stg13_update_0_write0 = stg13.stg13_stg13_update_0_write0_merged_banks_4.peek_1084();
  return value_stg13_stg13_update_0_write0;
  return 0;
}

inline hw_uint<16> stg14_rd1_select(stg13_cache& stg13, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg14_rd1 read pattern: { stg14_update_0[d0, d1] -> stg13[d0, d1] : 0 <= d0 <= 1079 and 0 <= d1 <= 1079 }
  // Read schedule : { stg14_update_0[d0, d1] -> [15 + d1, 15 + d0, 16] : 0 <= d0 <= 1079 and 0 <= d1 <= 1079 }
  // Write schedule: { stg13_update_0[d0, d1] -> [14 + d1, 14 + d0, 15] : -1 <= d0 <= 1080 and 0 <= d1 <= 1080 }
  auto value_stg13_stg13_update_0_write0 = stg13.stg13_stg13_update_0_write0_merged_banks_4.peek_1083();
  return value_stg13_stg13_update_0_write0;
  return 0;
}

inline hw_uint<16> stg14_rd2_select(stg13_cache& stg13, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg14_rd2 read pattern: { stg14_update_0[d0, d1] -> stg13[d0, 1 + d1] : 0 <= d0 <= 1079 and 0 <= d1 <= 1079 }
  // Read schedule : { stg14_update_0[d0, d1] -> [15 + d1, 15 + d0, 16] : 0 <= d0 <= 1079 and 0 <= d1 <= 1079 }
  // Write schedule: { stg13_update_0[d0, d1] -> [14 + d1, 14 + d0, 15] : -1 <= d0 <= 1080 and 0 <= d1 <= 1080 }
  auto value_stg13_stg13_update_0_write0 = stg13.stg13_stg13_update_0_write0_merged_banks_4.peek_1();
  return value_stg13_stg13_update_0_write0;
  return 0;
}

inline hw_uint<16> stg14_rd3_select(stg13_cache& stg13, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg14_rd3 read pattern: { stg14_update_0[d0, d1] -> stg13[1 + d0, d1] : 0 <= d0 <= 1079 and 0 <= d1 <= 1079 }
  // Read schedule : { stg14_update_0[d0, d1] -> [15 + d1, 15 + d0, 16] : 0 <= d0 <= 1079 and 0 <= d1 <= 1079 }
  // Write schedule: { stg13_update_0[d0, d1] -> [14 + d1, 14 + d0, 15] : -1 <= d0 <= 1080 and 0 <= d1 <= 1080 }
  auto value_stg13_stg13_update_0_write0 = stg13.stg13_stg13_update_0_write0_merged_banks_4.peek_1082();
  return value_stg13_stg13_update_0_write0;
  return 0;
}

// # of bundles = 2
// stg13_update_0_write
//	stg13_stg13_update_0_write0
inline void stg13_stg13_update_0_write_bundle_write(hw_uint<16>& stg13_update_0_write, stg13_cache& stg13, int d0, int d1, int dynamic_address) {
	hw_uint<16> stg13_stg13_update_0_write0_res = stg13_update_0_write.extract<0, 15>();
	stg13_stg13_update_0_write0_write(stg13_stg13_update_0_write0_res, stg13, d0, d1, dynamic_address);
}

// stg14_update_0_read
//	stg14_rd0
//	stg14_rd1
//	stg14_rd2
//	stg14_rd3
inline hw_uint<64> stg13_stg14_update_0_read_bundle_read(stg13_cache& stg13, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg14_rd0
    // stg14_rd1
    // stg14_rd2
    // stg14_rd3

	hw_uint<64> result;
	hw_uint<16> stg14_rd0_res = stg14_rd0_select(stg13, d0, d1, dynamic_address);
	set_at<0, 64>(result, stg14_rd0_res);
	hw_uint<16> stg14_rd1_res = stg14_rd1_select(stg13, d0, d1, dynamic_address);
	set_at<16, 64>(result, stg14_rd1_res);
	hw_uint<16> stg14_rd2_res = stg14_rd2_select(stg13, d0, d1, dynamic_address);
	set_at<32, 64>(result, stg14_rd2_res);
	hw_uint<16> stg14_rd3_res = stg14_rd3_select(stg13, d0, d1, dynamic_address);
	set_at<48, 64>(result, stg14_rd3_res);
	return result;
}

struct stg14_stg14_update_0_write0_to_jacdynl2_1_rd0_cache {
	// RAM Box: {[0, 1079], [0, 1079]}
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
    // { jacdynl2_1_update_0[d0, d1] -> stg14[d0, d1] : 0 <= d0 <= 1079 and 0 <= d1 <= 1079 }
  // # of banks: 1
  stg14_stg14_update_0_write0_to_jacdynl2_1_rd0_cache stg14_stg14_update_0_write0_to_jacdynl2_1_rd0;
};



inline void stg14_stg14_update_0_write0_write(hw_uint<16>& stg14_stg14_update_0_write0, stg14_cache& stg14, int d0, int d1, int dynamic_address) {
  stg14.stg14_stg14_update_0_write0_to_jacdynl2_1_rd0.push(stg14_stg14_update_0_write0);
}

inline hw_uint<16> jacdynl2_1_rd0_select(stg14_cache& stg14, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // jacdynl2_1_rd0 read pattern: { jacdynl2_1_update_0[d0, d1] -> stg14[d0, d1] : 0 <= d0 <= 1079 and 0 <= d1 <= 1079 }
  // Read schedule : { jacdynl2_1_update_0[d0, d1] -> [15 + d1, 15 + d0, 17] : 0 <= d0 <= 1079 and 0 <= d1 <= 1079 }
  // Write schedule: { stg14_update_0[d0, d1] -> [15 + d1, 15 + d0, 16] : 0 <= d0 <= 1079 and 0 <= d1 <= 1079 }
  auto value_stg14_stg14_update_0_write0 = stg14.stg14_stg14_update_0_write0_to_jacdynl2_1_rd0.peek(/* one reader or all rams */ 0);
  return value_stg14_stg14_update_0_write0;
  return 0;
}

// # of bundles = 2
// jacdynl2_1_update_0_read
//	jacdynl2_1_rd0
inline hw_uint<16> stg14_jacdynl2_1_update_0_read_bundle_read(stg14_cache& stg14, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // jacdynl2_1_rd0

	hw_uint<16> result;
	hw_uint<16> jacdynl2_1_rd0_res = jacdynl2_1_rd0_select(stg14, d0, d1, dynamic_address);
	set_at<0, 16>(result, jacdynl2_1_rd0_res);
	return result;
}

// stg14_update_0_write
//	stg14_stg14_update_0_write0
inline void stg14_stg14_update_0_write_bundle_write(hw_uint<16>& stg14_update_0_write, stg14_cache& stg14, int d0, int d1, int dynamic_address) {
	hw_uint<16> stg14_stg14_update_0_write0_res = stg14_update_0_write.extract<0, 15>();
	stg14_stg14_update_0_write0_write(stg14_stg14_update_0_write0_res, stg14, d0, d1, dynamic_address);
}

struct stg2_stg2_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[-12, 1091], [0, 1090]}
	// Capacity: 1107
	// # of read delays: 5
  // 0, 1, 1104, 1105, 1106
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1102> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1103() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1104() {
		return f4;
	}

	inline hw_uint<16> peek_1105() {
		return f6;
	}

	inline hw_uint<16> peek_1106() {
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
    // cap: 1 reading from capacity: 1102
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1102 reading from capacity: 1
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
    // { stg3_update_0[d0, d1] -> stg2[-1 + d0, d1] : -11 <= d0 <= 1090 and 0 <= d1 <= 1090 }
    // { stg3_update_0[d0, d1] -> stg2[d0, d1] : -11 <= d0 <= 1090 and 0 <= d1 <= 1090 }
    // { stg3_update_0[d0, d1] -> stg2[d0, 1 + d1] : -11 <= d0 <= 1090 and 0 <= d1 <= 1090 }
    // { stg3_update_0[d0, d1] -> stg2[1 + d0, d1] : -11 <= d0 <= 1090 and 0 <= d1 <= 1090 }
  // # of banks: 1
  stg2_stg2_update_0_write0_merged_banks_4_cache stg2_stg2_update_0_write0_merged_banks_4;
};



inline void stg2_stg2_update_0_write0_write(hw_uint<16>& stg2_stg2_update_0_write0, stg2_cache& stg2, int d0, int d1, int dynamic_address) {
  stg2.stg2_stg2_update_0_write0_merged_banks_4.push(stg2_stg2_update_0_write0);
}

inline hw_uint<16> stg3_rd0_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd0 read pattern: { stg3_update_0[d0, d1] -> stg2[-1 + d0, d1] : -11 <= d0 <= 1090 and 0 <= d1 <= 1090 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -11 <= d0 <= 1090 and 0 <= d1 <= 1090 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -12 <= d0 <= 1091 and 0 <= d1 <= 1091 }
  auto value_stg2_stg2_update_0_write0 = stg2.stg2_stg2_update_0_write0_merged_banks_4.peek_1106();
  return value_stg2_stg2_update_0_write0;
  return 0;
}

inline hw_uint<16> stg3_rd1_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd1 read pattern: { stg3_update_0[d0, d1] -> stg2[d0, d1] : -11 <= d0 <= 1090 and 0 <= d1 <= 1090 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -11 <= d0 <= 1090 and 0 <= d1 <= 1090 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -12 <= d0 <= 1091 and 0 <= d1 <= 1091 }
  auto value_stg2_stg2_update_0_write0 = stg2.stg2_stg2_update_0_write0_merged_banks_4.peek_1105();
  return value_stg2_stg2_update_0_write0;
  return 0;
}

inline hw_uint<16> stg3_rd2_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd2 read pattern: { stg3_update_0[d0, d1] -> stg2[d0, 1 + d1] : -11 <= d0 <= 1090 and 0 <= d1 <= 1090 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -11 <= d0 <= 1090 and 0 <= d1 <= 1090 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -12 <= d0 <= 1091 and 0 <= d1 <= 1091 }
  auto value_stg2_stg2_update_0_write0 = stg2.stg2_stg2_update_0_write0_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write0;
  return 0;
}

inline hw_uint<16> stg3_rd3_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd3 read pattern: { stg3_update_0[d0, d1] -> stg2[1 + d0, d1] : -11 <= d0 <= 1090 and 0 <= d1 <= 1090 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -11 <= d0 <= 1090 and 0 <= d1 <= 1090 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -12 <= d0 <= 1091 and 0 <= d1 <= 1091 }
  auto value_stg2_stg2_update_0_write0 = stg2.stg2_stg2_update_0_write0_merged_banks_4.peek_1104();
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
	// RAM Box: {[-11, 1090], [0, 1089]}
	// Capacity: 1105
	// # of read delays: 5
  // 0, 1, 1102, 1103, 1104
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1100> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1101() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1102() {
		return f4;
	}

	inline hw_uint<16> peek_1103() {
		return f6;
	}

	inline hw_uint<16> peek_1104() {
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
    // cap: 1 reading from capacity: 1100
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1100 reading from capacity: 1
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
    // { stg4_update_0[d0, d1] -> stg3[-1 + d0, d1] : -10 <= d0 <= 1089 and 0 <= d1 <= 1089 }
    // { stg4_update_0[d0, d1] -> stg3[d0, d1] : -10 <= d0 <= 1089 and 0 <= d1 <= 1089 }
    // { stg4_update_0[d0, d1] -> stg3[d0, 1 + d1] : -10 <= d0 <= 1089 and 0 <= d1 <= 1089 }
    // { stg4_update_0[d0, d1] -> stg3[1 + d0, d1] : -10 <= d0 <= 1089 and 0 <= d1 <= 1089 }
  // # of banks: 1
  stg3_stg3_update_0_write0_merged_banks_4_cache stg3_stg3_update_0_write0_merged_banks_4;
};



inline void stg3_stg3_update_0_write0_write(hw_uint<16>& stg3_stg3_update_0_write0, stg3_cache& stg3, int d0, int d1, int dynamic_address) {
  stg3.stg3_stg3_update_0_write0_merged_banks_4.push(stg3_stg3_update_0_write0);
}

inline hw_uint<16> stg4_rd0_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd0 read pattern: { stg4_update_0[d0, d1] -> stg3[-1 + d0, d1] : -10 <= d0 <= 1089 and 0 <= d1 <= 1089 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -10 <= d0 <= 1089 and 0 <= d1 <= 1089 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -11 <= d0 <= 1090 and 0 <= d1 <= 1090 }
  auto value_stg3_stg3_update_0_write0 = stg3.stg3_stg3_update_0_write0_merged_banks_4.peek_1104();
  return value_stg3_stg3_update_0_write0;
  return 0;
}

inline hw_uint<16> stg4_rd1_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd1 read pattern: { stg4_update_0[d0, d1] -> stg3[d0, d1] : -10 <= d0 <= 1089 and 0 <= d1 <= 1089 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -10 <= d0 <= 1089 and 0 <= d1 <= 1089 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -11 <= d0 <= 1090 and 0 <= d1 <= 1090 }
  auto value_stg3_stg3_update_0_write0 = stg3.stg3_stg3_update_0_write0_merged_banks_4.peek_1103();
  return value_stg3_stg3_update_0_write0;
  return 0;
}

inline hw_uint<16> stg4_rd2_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd2 read pattern: { stg4_update_0[d0, d1] -> stg3[d0, 1 + d1] : -10 <= d0 <= 1089 and 0 <= d1 <= 1089 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -10 <= d0 <= 1089 and 0 <= d1 <= 1089 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -11 <= d0 <= 1090 and 0 <= d1 <= 1090 }
  auto value_stg3_stg3_update_0_write0 = stg3.stg3_stg3_update_0_write0_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write0;
  return 0;
}

inline hw_uint<16> stg4_rd3_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd3 read pattern: { stg4_update_0[d0, d1] -> stg3[1 + d0, d1] : -10 <= d0 <= 1089 and 0 <= d1 <= 1089 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -10 <= d0 <= 1089 and 0 <= d1 <= 1089 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -11 <= d0 <= 1090 and 0 <= d1 <= 1090 }
  auto value_stg3_stg3_update_0_write0 = stg3.stg3_stg3_update_0_write0_merged_banks_4.peek_1102();
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
	// RAM Box: {[-10, 1089], [0, 1088]}
	// Capacity: 1103
	// # of read delays: 5
  // 0, 1, 1100, 1101, 1102
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1098> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1099() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1100() {
		return f4;
	}

	inline hw_uint<16> peek_1101() {
		return f6;
	}

	inline hw_uint<16> peek_1102() {
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
    // cap: 1 reading from capacity: 1098
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1098 reading from capacity: 1
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
    // { stg5_update_0[d0, d1] -> stg4[-1 + d0, d1] : -9 <= d0 <= 1088 and 0 <= d1 <= 1088 }
    // { stg5_update_0[d0, d1] -> stg4[d0, d1] : -9 <= d0 <= 1088 and 0 <= d1 <= 1088 }
    // { stg5_update_0[d0, d1] -> stg4[d0, 1 + d1] : -9 <= d0 <= 1088 and 0 <= d1 <= 1088 }
    // { stg5_update_0[d0, d1] -> stg4[1 + d0, d1] : -9 <= d0 <= 1088 and 0 <= d1 <= 1088 }
  // # of banks: 1
  stg4_stg4_update_0_write0_merged_banks_4_cache stg4_stg4_update_0_write0_merged_banks_4;
};



inline void stg4_stg4_update_0_write0_write(hw_uint<16>& stg4_stg4_update_0_write0, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write0_merged_banks_4.push(stg4_stg4_update_0_write0);
}

inline hw_uint<16> stg5_rd0_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd0 read pattern: { stg5_update_0[d0, d1] -> stg4[-1 + d0, d1] : -9 <= d0 <= 1088 and 0 <= d1 <= 1088 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -9 <= d0 <= 1088 and 0 <= d1 <= 1088 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -10 <= d0 <= 1089 and 0 <= d1 <= 1089 }
  auto value_stg4_stg4_update_0_write0 = stg4.stg4_stg4_update_0_write0_merged_banks_4.peek_1102();
  return value_stg4_stg4_update_0_write0;
  return 0;
}

inline hw_uint<16> stg5_rd1_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd1 read pattern: { stg5_update_0[d0, d1] -> stg4[d0, d1] : -9 <= d0 <= 1088 and 0 <= d1 <= 1088 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -9 <= d0 <= 1088 and 0 <= d1 <= 1088 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -10 <= d0 <= 1089 and 0 <= d1 <= 1089 }
  auto value_stg4_stg4_update_0_write0 = stg4.stg4_stg4_update_0_write0_merged_banks_4.peek_1101();
  return value_stg4_stg4_update_0_write0;
  return 0;
}

inline hw_uint<16> stg5_rd2_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd2 read pattern: { stg5_update_0[d0, d1] -> stg4[d0, 1 + d1] : -9 <= d0 <= 1088 and 0 <= d1 <= 1088 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -9 <= d0 <= 1088 and 0 <= d1 <= 1088 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -10 <= d0 <= 1089 and 0 <= d1 <= 1089 }
  auto value_stg4_stg4_update_0_write0 = stg4.stg4_stg4_update_0_write0_merged_banks_4.peek_1();
  return value_stg4_stg4_update_0_write0;
  return 0;
}

inline hw_uint<16> stg5_rd3_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd3 read pattern: { stg5_update_0[d0, d1] -> stg4[1 + d0, d1] : -9 <= d0 <= 1088 and 0 <= d1 <= 1088 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -9 <= d0 <= 1088 and 0 <= d1 <= 1088 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -10 <= d0 <= 1089 and 0 <= d1 <= 1089 }
  auto value_stg4_stg4_update_0_write0 = stg4.stg4_stg4_update_0_write0_merged_banks_4.peek_1100();
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
	// RAM Box: {[-9, 1088], [0, 1087]}
	// Capacity: 1101
	// # of read delays: 5
  // 0, 1, 1098, 1099, 1100
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1096> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1097() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1098() {
		return f4;
	}

	inline hw_uint<16> peek_1099() {
		return f6;
	}

	inline hw_uint<16> peek_1100() {
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
    // cap: 1 reading from capacity: 1096
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1096 reading from capacity: 1
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
    // { stg6_update_0[d0, d1] -> stg5[-1 + d0, d1] : -8 <= d0 <= 1087 and 0 <= d1 <= 1087 }
    // { stg6_update_0[d0, d1] -> stg5[d0, d1] : -8 <= d0 <= 1087 and 0 <= d1 <= 1087 }
    // { stg6_update_0[d0, d1] -> stg5[d0, 1 + d1] : -8 <= d0 <= 1087 and 0 <= d1 <= 1087 }
    // { stg6_update_0[d0, d1] -> stg5[1 + d0, d1] : -8 <= d0 <= 1087 and 0 <= d1 <= 1087 }
  // # of banks: 1
  stg5_stg5_update_0_write0_merged_banks_4_cache stg5_stg5_update_0_write0_merged_banks_4;
};



inline void stg5_stg5_update_0_write0_write(hw_uint<16>& stg5_stg5_update_0_write0, stg5_cache& stg5, int d0, int d1, int dynamic_address) {
  stg5.stg5_stg5_update_0_write0_merged_banks_4.push(stg5_stg5_update_0_write0);
}

inline hw_uint<16> stg6_rd0_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd0 read pattern: { stg6_update_0[d0, d1] -> stg5[-1 + d0, d1] : -8 <= d0 <= 1087 and 0 <= d1 <= 1087 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -8 <= d0 <= 1087 and 0 <= d1 <= 1087 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -9 <= d0 <= 1088 and 0 <= d1 <= 1088 }
  auto value_stg5_stg5_update_0_write0 = stg5.stg5_stg5_update_0_write0_merged_banks_4.peek_1100();
  return value_stg5_stg5_update_0_write0;
  return 0;
}

inline hw_uint<16> stg6_rd1_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd1 read pattern: { stg6_update_0[d0, d1] -> stg5[d0, d1] : -8 <= d0 <= 1087 and 0 <= d1 <= 1087 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -8 <= d0 <= 1087 and 0 <= d1 <= 1087 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -9 <= d0 <= 1088 and 0 <= d1 <= 1088 }
  auto value_stg5_stg5_update_0_write0 = stg5.stg5_stg5_update_0_write0_merged_banks_4.peek_1099();
  return value_stg5_stg5_update_0_write0;
  return 0;
}

inline hw_uint<16> stg6_rd2_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd2 read pattern: { stg6_update_0[d0, d1] -> stg5[d0, 1 + d1] : -8 <= d0 <= 1087 and 0 <= d1 <= 1087 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -8 <= d0 <= 1087 and 0 <= d1 <= 1087 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -9 <= d0 <= 1088 and 0 <= d1 <= 1088 }
  auto value_stg5_stg5_update_0_write0 = stg5.stg5_stg5_update_0_write0_merged_banks_4.peek_1();
  return value_stg5_stg5_update_0_write0;
  return 0;
}

inline hw_uint<16> stg6_rd3_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd3 read pattern: { stg6_update_0[d0, d1] -> stg5[1 + d0, d1] : -8 <= d0 <= 1087 and 0 <= d1 <= 1087 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -8 <= d0 <= 1087 and 0 <= d1 <= 1087 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -9 <= d0 <= 1088 and 0 <= d1 <= 1088 }
  auto value_stg5_stg5_update_0_write0 = stg5.stg5_stg5_update_0_write0_merged_banks_4.peek_1098();
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
	// RAM Box: {[-8, 1087], [0, 1086]}
	// Capacity: 1099
	// # of read delays: 5
  // 0, 1, 1096, 1097, 1098
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1094> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1095() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1096() {
		return f4;
	}

	inline hw_uint<16> peek_1097() {
		return f6;
	}

	inline hw_uint<16> peek_1098() {
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
    // cap: 1 reading from capacity: 1094
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1094 reading from capacity: 1
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
    // { stg7_update_0[d0, d1] -> stg6[-1 + d0, d1] : -7 <= d0 <= 1086 and 0 <= d1 <= 1086 }
    // { stg7_update_0[d0, d1] -> stg6[d0, d1] : -7 <= d0 <= 1086 and 0 <= d1 <= 1086 }
    // { stg7_update_0[d0, d1] -> stg6[d0, 1 + d1] : -7 <= d0 <= 1086 and 0 <= d1 <= 1086 }
    // { stg7_update_0[d0, d1] -> stg6[1 + d0, d1] : -7 <= d0 <= 1086 and 0 <= d1 <= 1086 }
  // # of banks: 1
  stg6_stg6_update_0_write0_merged_banks_4_cache stg6_stg6_update_0_write0_merged_banks_4;
};



inline void stg6_stg6_update_0_write0_write(hw_uint<16>& stg6_stg6_update_0_write0, stg6_cache& stg6, int d0, int d1, int dynamic_address) {
  stg6.stg6_stg6_update_0_write0_merged_banks_4.push(stg6_stg6_update_0_write0);
}

inline hw_uint<16> stg7_rd0_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd0 read pattern: { stg7_update_0[d0, d1] -> stg6[-1 + d0, d1] : -7 <= d0 <= 1086 and 0 <= d1 <= 1086 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -7 <= d0 <= 1086 and 0 <= d1 <= 1086 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -8 <= d0 <= 1087 and 0 <= d1 <= 1087 }
  auto value_stg6_stg6_update_0_write0 = stg6.stg6_stg6_update_0_write0_merged_banks_4.peek_1098();
  return value_stg6_stg6_update_0_write0;
  return 0;
}

inline hw_uint<16> stg7_rd1_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd1 read pattern: { stg7_update_0[d0, d1] -> stg6[d0, d1] : -7 <= d0 <= 1086 and 0 <= d1 <= 1086 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -7 <= d0 <= 1086 and 0 <= d1 <= 1086 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -8 <= d0 <= 1087 and 0 <= d1 <= 1087 }
  auto value_stg6_stg6_update_0_write0 = stg6.stg6_stg6_update_0_write0_merged_banks_4.peek_1097();
  return value_stg6_stg6_update_0_write0;
  return 0;
}

inline hw_uint<16> stg7_rd2_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd2 read pattern: { stg7_update_0[d0, d1] -> stg6[d0, 1 + d1] : -7 <= d0 <= 1086 and 0 <= d1 <= 1086 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -7 <= d0 <= 1086 and 0 <= d1 <= 1086 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -8 <= d0 <= 1087 and 0 <= d1 <= 1087 }
  auto value_stg6_stg6_update_0_write0 = stg6.stg6_stg6_update_0_write0_merged_banks_4.peek_1();
  return value_stg6_stg6_update_0_write0;
  return 0;
}

inline hw_uint<16> stg7_rd3_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd3 read pattern: { stg7_update_0[d0, d1] -> stg6[1 + d0, d1] : -7 <= d0 <= 1086 and 0 <= d1 <= 1086 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -7 <= d0 <= 1086 and 0 <= d1 <= 1086 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -8 <= d0 <= 1087 and 0 <= d1 <= 1087 }
  auto value_stg6_stg6_update_0_write0 = stg6.stg6_stg6_update_0_write0_merged_banks_4.peek_1096();
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
	// RAM Box: {[-7, 1086], [0, 1085]}
	// Capacity: 1097
	// # of read delays: 5
  // 0, 1, 1094, 1095, 1096
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1092> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1093() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1094() {
		return f4;
	}

	inline hw_uint<16> peek_1095() {
		return f6;
	}

	inline hw_uint<16> peek_1096() {
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
    // cap: 1 reading from capacity: 1092
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1092 reading from capacity: 1
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
    // { stg8_update_0[d0, d1] -> stg7[-1 + d0, d1] : -6 <= d0 <= 1085 and 0 <= d1 <= 1085 }
    // { stg8_update_0[d0, d1] -> stg7[d0, d1] : -6 <= d0 <= 1085 and 0 <= d1 <= 1085 }
    // { stg8_update_0[d0, d1] -> stg7[d0, 1 + d1] : -6 <= d0 <= 1085 and 0 <= d1 <= 1085 }
    // { stg8_update_0[d0, d1] -> stg7[1 + d0, d1] : -6 <= d0 <= 1085 and 0 <= d1 <= 1085 }
  // # of banks: 1
  stg7_stg7_update_0_write0_merged_banks_4_cache stg7_stg7_update_0_write0_merged_banks_4;
};



inline void stg7_stg7_update_0_write0_write(hw_uint<16>& stg7_stg7_update_0_write0, stg7_cache& stg7, int d0, int d1, int dynamic_address) {
  stg7.stg7_stg7_update_0_write0_merged_banks_4.push(stg7_stg7_update_0_write0);
}

inline hw_uint<16> stg8_rd0_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd0 read pattern: { stg8_update_0[d0, d1] -> stg7[-1 + d0, d1] : -6 <= d0 <= 1085 and 0 <= d1 <= 1085 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -6 <= d0 <= 1085 and 0 <= d1 <= 1085 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -7 <= d0 <= 1086 and 0 <= d1 <= 1086 }
  auto value_stg7_stg7_update_0_write0 = stg7.stg7_stg7_update_0_write0_merged_banks_4.peek_1096();
  return value_stg7_stg7_update_0_write0;
  return 0;
}

inline hw_uint<16> stg8_rd1_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd1 read pattern: { stg8_update_0[d0, d1] -> stg7[d0, d1] : -6 <= d0 <= 1085 and 0 <= d1 <= 1085 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -6 <= d0 <= 1085 and 0 <= d1 <= 1085 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -7 <= d0 <= 1086 and 0 <= d1 <= 1086 }
  auto value_stg7_stg7_update_0_write0 = stg7.stg7_stg7_update_0_write0_merged_banks_4.peek_1095();
  return value_stg7_stg7_update_0_write0;
  return 0;
}

inline hw_uint<16> stg8_rd2_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd2 read pattern: { stg8_update_0[d0, d1] -> stg7[d0, 1 + d1] : -6 <= d0 <= 1085 and 0 <= d1 <= 1085 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -6 <= d0 <= 1085 and 0 <= d1 <= 1085 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -7 <= d0 <= 1086 and 0 <= d1 <= 1086 }
  auto value_stg7_stg7_update_0_write0 = stg7.stg7_stg7_update_0_write0_merged_banks_4.peek_1();
  return value_stg7_stg7_update_0_write0;
  return 0;
}

inline hw_uint<16> stg8_rd3_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd3 read pattern: { stg8_update_0[d0, d1] -> stg7[1 + d0, d1] : -6 <= d0 <= 1085 and 0 <= d1 <= 1085 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -6 <= d0 <= 1085 and 0 <= d1 <= 1085 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -7 <= d0 <= 1086 and 0 <= d1 <= 1086 }
  auto value_stg7_stg7_update_0_write0 = stg7.stg7_stg7_update_0_write0_merged_banks_4.peek_1094();
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
	// RAM Box: {[-6, 1085], [0, 1084]}
	// Capacity: 1095
	// # of read delays: 5
  // 0, 1, 1092, 1093, 1094
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1090> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1091() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1092() {
		return f4;
	}

	inline hw_uint<16> peek_1093() {
		return f6;
	}

	inline hw_uint<16> peek_1094() {
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
    // cap: 1 reading from capacity: 1090
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1090 reading from capacity: 1
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
    // { stg9_update_0[d0, d1] -> stg8[-1 + d0, d1] : -5 <= d0 <= 1084 and 0 <= d1 <= 1084 }
    // { stg9_update_0[d0, d1] -> stg8[d0, d1] : -5 <= d0 <= 1084 and 0 <= d1 <= 1084 }
    // { stg9_update_0[d0, d1] -> stg8[d0, 1 + d1] : -5 <= d0 <= 1084 and 0 <= d1 <= 1084 }
    // { stg9_update_0[d0, d1] -> stg8[1 + d0, d1] : -5 <= d0 <= 1084 and 0 <= d1 <= 1084 }
  // # of banks: 1
  stg8_stg8_update_0_write0_merged_banks_4_cache stg8_stg8_update_0_write0_merged_banks_4;
};



inline void stg8_stg8_update_0_write0_write(hw_uint<16>& stg8_stg8_update_0_write0, stg8_cache& stg8, int d0, int d1, int dynamic_address) {
  stg8.stg8_stg8_update_0_write0_merged_banks_4.push(stg8_stg8_update_0_write0);
}

inline hw_uint<16> stg9_rd0_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd0 read pattern: { stg9_update_0[d0, d1] -> stg8[-1 + d0, d1] : -5 <= d0 <= 1084 and 0 <= d1 <= 1084 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : -5 <= d0 <= 1084 and 0 <= d1 <= 1084 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -6 <= d0 <= 1085 and 0 <= d1 <= 1085 }
  auto value_stg8_stg8_update_0_write0 = stg8.stg8_stg8_update_0_write0_merged_banks_4.peek_1094();
  return value_stg8_stg8_update_0_write0;
  return 0;
}

inline hw_uint<16> stg9_rd1_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd1 read pattern: { stg9_update_0[d0, d1] -> stg8[d0, d1] : -5 <= d0 <= 1084 and 0 <= d1 <= 1084 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : -5 <= d0 <= 1084 and 0 <= d1 <= 1084 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -6 <= d0 <= 1085 and 0 <= d1 <= 1085 }
  auto value_stg8_stg8_update_0_write0 = stg8.stg8_stg8_update_0_write0_merged_banks_4.peek_1093();
  return value_stg8_stg8_update_0_write0;
  return 0;
}

inline hw_uint<16> stg9_rd2_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd2 read pattern: { stg9_update_0[d0, d1] -> stg8[d0, 1 + d1] : -5 <= d0 <= 1084 and 0 <= d1 <= 1084 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : -5 <= d0 <= 1084 and 0 <= d1 <= 1084 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -6 <= d0 <= 1085 and 0 <= d1 <= 1085 }
  auto value_stg8_stg8_update_0_write0 = stg8.stg8_stg8_update_0_write0_merged_banks_4.peek_1();
  return value_stg8_stg8_update_0_write0;
  return 0;
}

inline hw_uint<16> stg9_rd3_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd3 read pattern: { stg9_update_0[d0, d1] -> stg8[1 + d0, d1] : -5 <= d0 <= 1084 and 0 <= d1 <= 1084 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : -5 <= d0 <= 1084 and 0 <= d1 <= 1084 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -6 <= d0 <= 1085 and 0 <= d1 <= 1085 }
  auto value_stg8_stg8_update_0_write0 = stg8.stg8_stg8_update_0_write0_merged_banks_4.peek_1092();
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

struct stg9_stg9_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[-5, 1084], [0, 1083]}
	// Capacity: 1093
	// # of read delays: 5
  // 0, 1, 1090, 1091, 1092
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1088> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1089() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1090() {
		return f4;
	}

	inline hw_uint<16> peek_1091() {
		return f6;
	}

	inline hw_uint<16> peek_1092() {
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
    // cap: 1 reading from capacity: 1088
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1088 reading from capacity: 1
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
    // { stg10_update_0[d0, d1] -> stg9[-1 + d0, d1] : -4 <= d0 <= 1083 and 0 <= d1 <= 1083 }
    // { stg10_update_0[d0, d1] -> stg9[d0, d1] : -4 <= d0 <= 1083 and 0 <= d1 <= 1083 }
    // { stg10_update_0[d0, d1] -> stg9[d0, 1 + d1] : -4 <= d0 <= 1083 and 0 <= d1 <= 1083 }
    // { stg10_update_0[d0, d1] -> stg9[1 + d0, d1] : -4 <= d0 <= 1083 and 0 <= d1 <= 1083 }
  // # of banks: 1
  stg9_stg9_update_0_write0_merged_banks_4_cache stg9_stg9_update_0_write0_merged_banks_4;
};



inline void stg9_stg9_update_0_write0_write(hw_uint<16>& stg9_stg9_update_0_write0, stg9_cache& stg9, int d0, int d1, int dynamic_address) {
  stg9.stg9_stg9_update_0_write0_merged_banks_4.push(stg9_stg9_update_0_write0);
}

inline hw_uint<16> stg10_rd0_select(stg9_cache& stg9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_rd0 read pattern: { stg10_update_0[d0, d1] -> stg9[-1 + d0, d1] : -4 <= d0 <= 1083 and 0 <= d1 <= 1083 }
  // Read schedule : { stg10_update_0[d0, d1] -> [11 + d1, 11 + d0, 12] : -4 <= d0 <= 1083 and 0 <= d1 <= 1083 }
  // Write schedule: { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : -5 <= d0 <= 1084 and 0 <= d1 <= 1084 }
  auto value_stg9_stg9_update_0_write0 = stg9.stg9_stg9_update_0_write0_merged_banks_4.peek_1092();
  return value_stg9_stg9_update_0_write0;
  return 0;
}

inline hw_uint<16> stg10_rd1_select(stg9_cache& stg9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_rd1 read pattern: { stg10_update_0[d0, d1] -> stg9[d0, d1] : -4 <= d0 <= 1083 and 0 <= d1 <= 1083 }
  // Read schedule : { stg10_update_0[d0, d1] -> [11 + d1, 11 + d0, 12] : -4 <= d0 <= 1083 and 0 <= d1 <= 1083 }
  // Write schedule: { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : -5 <= d0 <= 1084 and 0 <= d1 <= 1084 }
  auto value_stg9_stg9_update_0_write0 = stg9.stg9_stg9_update_0_write0_merged_banks_4.peek_1091();
  return value_stg9_stg9_update_0_write0;
  return 0;
}

inline hw_uint<16> stg10_rd2_select(stg9_cache& stg9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_rd2 read pattern: { stg10_update_0[d0, d1] -> stg9[d0, 1 + d1] : -4 <= d0 <= 1083 and 0 <= d1 <= 1083 }
  // Read schedule : { stg10_update_0[d0, d1] -> [11 + d1, 11 + d0, 12] : -4 <= d0 <= 1083 and 0 <= d1 <= 1083 }
  // Write schedule: { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : -5 <= d0 <= 1084 and 0 <= d1 <= 1084 }
  auto value_stg9_stg9_update_0_write0 = stg9.stg9_stg9_update_0_write0_merged_banks_4.peek_1();
  return value_stg9_stg9_update_0_write0;
  return 0;
}

inline hw_uint<16> stg10_rd3_select(stg9_cache& stg9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_rd3 read pattern: { stg10_update_0[d0, d1] -> stg9[1 + d0, d1] : -4 <= d0 <= 1083 and 0 <= d1 <= 1083 }
  // Read schedule : { stg10_update_0[d0, d1] -> [11 + d1, 11 + d0, 12] : -4 <= d0 <= 1083 and 0 <= d1 <= 1083 }
  // Write schedule: { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : -5 <= d0 <= 1084 and 0 <= d1 <= 1084 }
  auto value_stg9_stg9_update_0_write0 = stg9.stg9_stg9_update_0_write0_merged_banks_4.peek_1090();
  return value_stg9_stg9_update_0_write0;
  return 0;
}

// # of bundles = 2
// stg10_update_0_read
//	stg10_rd0
//	stg10_rd1
//	stg10_rd2
//	stg10_rd3
inline hw_uint<64> stg9_stg10_update_0_read_bundle_read(stg9_cache& stg9, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg10_rd0
    // stg10_rd1
    // stg10_rd2
    // stg10_rd3

	hw_uint<64> result;
	hw_uint<16> stg10_rd0_res = stg10_rd0_select(stg9, d0, d1, dynamic_address);
	set_at<0, 64>(result, stg10_rd0_res);
	hw_uint<16> stg10_rd1_res = stg10_rd1_select(stg9, d0, d1, dynamic_address);
	set_at<16, 64>(result, stg10_rd1_res);
	hw_uint<16> stg10_rd2_res = stg10_rd2_select(stg9, d0, d1, dynamic_address);
	set_at<32, 64>(result, stg10_rd2_res);
	hw_uint<16> stg10_rd3_res = stg10_rd3_select(stg9, d0, d1, dynamic_address);
	set_at<48, 64>(result, stg10_rd3_res);
	return result;
}

// stg9_update_0_write
//	stg9_stg9_update_0_write0
inline void stg9_stg9_update_0_write_bundle_write(hw_uint<16>& stg9_update_0_write, stg9_cache& stg9, int d0, int d1, int dynamic_address) {
	hw_uint<16> stg9_stg9_update_0_write0_res = stg9_update_0_write.extract<0, 15>();
	stg9_stg9_update_0_write0_write(stg9_stg9_update_0_write0_res, stg9, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 263520 bits


// Operation logic
inline void in_update_0(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */in_off_chip, in_cache& in, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_off_chip
	auto in_off_chip_1_m_in_1__p__0_c__1_m_in_0__p__0_value = in_off_chip.read();
	auto compute_result = in_generated_compute_unrolled_1(in_off_chip_1_m_in_1__p__0_c__1_m_in_0__p__0_value);
	// Produce: in
	in_in_update_0_write_bundle_write(/* arg names */compute_result, in, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg0_update_0(in_cache& in, stg0_cache& stg0, int d0, int d1) {
  // Dynamic address computation

	// Consume: in
	auto in_1_m_stg0_1__p__0_c__1_m_stg0_0__p___m_1_value = in_stg0_update_0_read_bundle_read(in/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg0_generated_compute_unrolled_1(in_1_m_stg0_1__p__0_c__1_m_stg0_0__p___m_1_value);
	// Produce: stg0
	stg0_stg0_update_0_write_bundle_write(/* arg names */compute_result, stg0, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg1_update_0(stg0_cache& stg0, stg1_cache& stg1, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg0
	auto stg0_1_m_stg1_1__p__0_c__1_m_stg1_0__p___m_1_value = stg0_stg1_update_0_read_bundle_read(stg0/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg1_generated_compute_unrolled_1(stg0_1_m_stg1_1__p__0_c__1_m_stg1_0__p___m_1_value);
	// Produce: stg1
	stg1_stg1_update_0_write_bundle_write(/* arg names */compute_result, stg1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg2_update_0(stg1_cache& stg1, stg2_cache& stg2, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg1
	auto stg1_1_m_stg2_1__p__0_c__1_m_stg2_0__p___m_1_value = stg1_stg2_update_0_read_bundle_read(stg1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg2_generated_compute_unrolled_1(stg1_1_m_stg2_1__p__0_c__1_m_stg2_0__p___m_1_value);
	// Produce: stg2
	stg2_stg2_update_0_write_bundle_write(/* arg names */compute_result, stg2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg3_update_0(stg2_cache& stg2, stg3_cache& stg3, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg2
	auto stg2_1_m_stg3_1__p__0_c__1_m_stg3_0__p___m_1_value = stg2_stg3_update_0_read_bundle_read(stg2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg3_generated_compute_unrolled_1(stg2_1_m_stg3_1__p__0_c__1_m_stg3_0__p___m_1_value);
	// Produce: stg3
	stg3_stg3_update_0_write_bundle_write(/* arg names */compute_result, stg3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg4_update_0(stg3_cache& stg3, stg4_cache& stg4, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg3
	auto stg3_1_m_stg4_1__p__0_c__1_m_stg4_0__p___m_1_value = stg3_stg4_update_0_read_bundle_read(stg3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg4_generated_compute_unrolled_1(stg3_1_m_stg4_1__p__0_c__1_m_stg4_0__p___m_1_value);
	// Produce: stg4
	stg4_stg4_update_0_write_bundle_write(/* arg names */compute_result, stg4, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg5_update_0(stg4_cache& stg4, stg5_cache& stg5, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg4
	auto stg4_1_m_stg5_1__p__0_c__1_m_stg5_0__p___m_1_value = stg4_stg5_update_0_read_bundle_read(stg4/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg5_generated_compute_unrolled_1(stg4_1_m_stg5_1__p__0_c__1_m_stg5_0__p___m_1_value);
	// Produce: stg5
	stg5_stg5_update_0_write_bundle_write(/* arg names */compute_result, stg5, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg6_update_0(stg5_cache& stg5, stg6_cache& stg6, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg5
	auto stg5_1_m_stg6_1__p__0_c__1_m_stg6_0__p___m_1_value = stg5_stg6_update_0_read_bundle_read(stg5/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg6_generated_compute_unrolled_1(stg5_1_m_stg6_1__p__0_c__1_m_stg6_0__p___m_1_value);
	// Produce: stg6
	stg6_stg6_update_0_write_bundle_write(/* arg names */compute_result, stg6, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg7_update_0(stg6_cache& stg6, stg7_cache& stg7, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg6
	auto stg6_1_m_stg7_1__p__0_c__1_m_stg7_0__p___m_1_value = stg6_stg7_update_0_read_bundle_read(stg6/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg7_generated_compute_unrolled_1(stg6_1_m_stg7_1__p__0_c__1_m_stg7_0__p___m_1_value);
	// Produce: stg7
	stg7_stg7_update_0_write_bundle_write(/* arg names */compute_result, stg7, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg8_update_0(stg7_cache& stg7, stg8_cache& stg8, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg7
	auto stg7_1_m_stg8_1__p__0_c__1_m_stg8_0__p___m_1_value = stg7_stg8_update_0_read_bundle_read(stg7/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg8_generated_compute_unrolled_1(stg7_1_m_stg8_1__p__0_c__1_m_stg8_0__p___m_1_value);
	// Produce: stg8
	stg8_stg8_update_0_write_bundle_write(/* arg names */compute_result, stg8, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg9_update_0(stg8_cache& stg8, stg9_cache& stg9, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg8
	auto stg8_1_m_stg9_1__p__0_c__1_m_stg9_0__p___m_1_value = stg8_stg9_update_0_read_bundle_read(stg8/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg9_generated_compute_unrolled_1(stg8_1_m_stg9_1__p__0_c__1_m_stg9_0__p___m_1_value);
	// Produce: stg9
	stg9_stg9_update_0_write_bundle_write(/* arg names */compute_result, stg9, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg10_update_0(stg9_cache& stg9, stg10_cache& stg10, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg9
	auto stg9_1_m_stg10_1__p__0_c__1_m_stg10_0__p___m_1_value = stg9_stg10_update_0_read_bundle_read(stg9/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg10_generated_compute_unrolled_1(stg9_1_m_stg10_1__p__0_c__1_m_stg10_0__p___m_1_value);
	// Produce: stg10
	stg10_stg10_update_0_write_bundle_write(/* arg names */compute_result, stg10, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg11_update_0(stg10_cache& stg10, stg11_cache& stg11, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg10
	auto stg10_1_m_stg11_1__p__0_c__1_m_stg11_0__p___m_1_value = stg10_stg11_update_0_read_bundle_read(stg10/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg11_generated_compute_unrolled_1(stg10_1_m_stg11_1__p__0_c__1_m_stg11_0__p___m_1_value);
	// Produce: stg11
	stg11_stg11_update_0_write_bundle_write(/* arg names */compute_result, stg11, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg12_update_0(stg11_cache& stg11, stg12_cache& stg12, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg11
	auto stg11_1_m_stg12_1__p__0_c__1_m_stg12_0__p___m_1_value = stg11_stg12_update_0_read_bundle_read(stg11/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg12_generated_compute_unrolled_1(stg11_1_m_stg12_1__p__0_c__1_m_stg12_0__p___m_1_value);
	// Produce: stg12
	stg12_stg12_update_0_write_bundle_write(/* arg names */compute_result, stg12, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg13_update_0(stg12_cache& stg12, stg13_cache& stg13, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg12
	auto stg12_1_m_stg13_1__p__0_c__1_m_stg13_0__p___m_1_value = stg12_stg13_update_0_read_bundle_read(stg12/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg13_generated_compute_unrolled_1(stg12_1_m_stg13_1__p__0_c__1_m_stg13_0__p___m_1_value);
	// Produce: stg13
	stg13_stg13_update_0_write_bundle_write(/* arg names */compute_result, stg13, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg14_update_0(stg13_cache& stg13, stg14_cache& stg14, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg13
	auto stg13_1_m_stg14_1__p__0_c__1_m_stg14_0__p___m_1_value = stg13_stg14_update_0_read_bundle_read(stg13/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg14_generated_compute_unrolled_1(stg13_1_m_stg14_1__p__0_c__1_m_stg14_0__p___m_1_value);
	// Produce: stg14
	stg14_stg14_update_0_write_bundle_write(/* arg names */compute_result, stg14, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void jacdynl2_1_update_0(stg14_cache& stg14, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */jacdynl2_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg14
	auto stg14_1_m_jacdynl2_1_1__p__0_c__1_m_jacdynl2_1_0__p__0_value = stg14_jacdynl2_1_update_0_read_bundle_read(stg14/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = jacdynl2_1_generated_compute_unrolled_1(stg14_1_m_jacdynl2_1_1__p__0_c__1_m_jacdynl2_1_0__p__0_value);
	// Produce: jacdynl2_1
	jacdynl2_1.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void jacdynl2_1_opt(HWStream<hw_uint<16> >& /* get_args num ports = 1 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */jacdynl2_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("jacdynl2_1_opt_debug.csv");
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

// schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -7 <= d0 <= 1086 and 0 <= d1 <= 1086; stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -6 <= d0 <= 1085 and 0 <= d1 <= 1085; stg11_update_0[d0, d1] -> [12 + d1, 12 + d0, 13] : -3 <= d0 <= 1082 and 0 <= d1 <= 1082; stg13_update_0[d0, d1] -> [14 + d1, 14 + d0, 15] : -1 <= d0 <= 1080 and 0 <= d1 <= 1080; stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -9 <= d0 <= 1088 and 0 <= d1 <= 1088; stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : -5 <= d0 <= 1084 and 0 <= d1 <= 1084; stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -11 <= d0 <= 1090 and 0 <= d1 <= 1090; stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -12 <= d0 <= 1091 and 0 <= d1 <= 1091; stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -8 <= d0 <= 1087 and 0 <= d1 <= 1087; stg10_update_0[d0, d1] -> [11 + d1, 11 + d0, 12] : -4 <= d0 <= 1083 and 0 <= d1 <= 1083; jacdynl2_1_update_0[d0, d1] -> [15 + d1, 15 + d0, 17] : 0 <= d0 <= 1079 and 0 <= d1 <= 1079; stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -10 <= d0 <= 1089 and 0 <= d1 <= 1089; stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -14 <= d0 <= 1093 and 0 <= d1 <= 1093; stg12_update_0[d0, d1] -> [13 + d1, 13 + d0, 14] : -2 <= d0 <= 1081 and 0 <= d1 <= 1081; stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -13 <= d0 <= 1092 and 0 <= d1 <= 1092; in_update_0[d0, d1] -> [d1, d0, 1] : -15 <= d0 <= 1094 and 0 <= d1 <= 1094; stg14_update_0[d0, d1] -> [15 + d1, 15 + d0, 16] : 0 <= d0 <= 1079 and 0 <= d1 <= 1079 }
//   { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -7 <= d0 <= 1086 and 0 <= d1 <= 1086 }
// Condition for stg7_update_0(((((-9 + 1*i2)) == 0) && (((-1 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-8 + 1*i0)) >= 0) && (((1094 + -1*i0)) >= 0)))
//   { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -6 <= d0 <= 1085 and 0 <= d1 <= 1085 }
// Condition for stg8_update_0(((((-10 + 1*i2)) == 0) && (((-3 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-9 + 1*i0)) >= 0) && (((1094 + -1*i0)) >= 0)))
//   { stg11_update_0[d0, d1] -> [12 + d1, 12 + d0, 13] : -3 <= d0 <= 1082 and 0 <= d1 <= 1082 }
// Condition for stg11_update_0(((((-13 + 1*i2)) == 0) && (((-9 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-12 + 1*i0)) >= 0) && (((1094 + -1*i0)) >= 0)))
//   { stg13_update_0[d0, d1] -> [14 + d1, 14 + d0, 15] : -1 <= d0 <= 1080 and 0 <= d1 <= 1080 }
// Condition for stg13_update_0(((((-15 + 1*i2)) == 0) && (((-13 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-14 + 1*i0)) >= 0) && (((1094 + -1*i0)) >= 0)))
//   { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -9 <= d0 <= 1088 and 0 <= d1 <= 1088 }
// Condition for stg5_update_0(((((-7 + 1*i2)) == 0) && (((3 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-6 + 1*i0)) >= 0) && (((1094 + -1*i0)) >= 0)))
//   { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : -5 <= d0 <= 1084 and 0 <= d1 <= 1084 }
// Condition for stg9_update_0(((((-11 + 1*i2)) == 0) && (((-5 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-10 + 1*i0)) >= 0) && (((1094 + -1*i0)) >= 0)))
//   { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -11 <= d0 <= 1090 and 0 <= d1 <= 1090 }
// Condition for stg3_update_0(((((-5 + 1*i2)) == 0) && (((7 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-4 + 1*i0)) >= 0) && (((1094 + -1*i0)) >= 0)))
//   { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -12 <= d0 <= 1091 and 0 <= d1 <= 1091 }
// Condition for stg2_update_0(((((-4 + 1*i2)) == 0) && (((9 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-3 + 1*i0)) >= 0) && (((1094 + -1*i0)) >= 0)))
//   { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -8 <= d0 <= 1087 and 0 <= d1 <= 1087 }
// Condition for stg6_update_0(((((-8 + 1*i2)) == 0) && (((1 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-7 + 1*i0)) >= 0) && (((1094 + -1*i0)) >= 0)))
//   { stg10_update_0[d0, d1] -> [11 + d1, 11 + d0, 12] : -4 <= d0 <= 1083 and 0 <= d1 <= 1083 }
// Condition for stg10_update_0(((((-12 + 1*i2)) == 0) && (((-7 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-11 + 1*i0)) >= 0) && (((1094 + -1*i0)) >= 0)))
//   { jacdynl2_1_update_0[d0, d1] -> [15 + d1, 15 + d0, 17] : 0 <= d0 <= 1079 and 0 <= d1 <= 1079 }
// Condition for jacdynl2_1_update_0(((((-17 + 1*i2)) == 0) && (((-15 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-15 + 1*i0)) >= 0) && (((1094 + -1*i0)) >= 0)))
//   { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -10 <= d0 <= 1089 and 0 <= d1 <= 1089 }
// Condition for stg4_update_0(((((-6 + 1*i2)) == 0) && (((5 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-5 + 1*i0)) >= 0) && (((1094 + -1*i0)) >= 0)))
//   { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -14 <= d0 <= 1093 and 0 <= d1 <= 1093 }
// Condition for stg0_update_0(((((-2 + 1*i2)) == 0) && (((13 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-1 + 1*i0)) >= 0) && (((1094 + -1*i0)) >= 0)))
//   { stg12_update_0[d0, d1] -> [13 + d1, 13 + d0, 14] : -2 <= d0 <= 1081 and 0 <= d1 <= 1081 }
// Condition for stg12_update_0(((((-14 + 1*i2)) == 0) && (((-11 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-13 + 1*i0)) >= 0) && (((1094 + -1*i0)) >= 0)))
//   { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -13 <= d0 <= 1092 and 0 <= d1 <= 1092 }
// Condition for stg1_update_0(((((-3 + 1*i2)) == 0) && (((11 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-2 + 1*i0)) >= 0) && (((1094 + -1*i0)) >= 0)))
//   { in_update_0[d0, d1] -> [d1, d0, 1] : -15 <= d0 <= 1094 and 0 <= d1 <= 1094 }
// Condition for in_update_0(((((-1 + 1*i2)) == 0) && (((15 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((1*i0)) >= 0) && (((1094 + -1*i0)) >= 0)))
//   { stg14_update_0[d0, d1] -> [15 + d1, 15 + d0, 16] : 0 <= d0 <= 1079 and 0 <= d1 <= 1079 }
// Condition for stg14_update_0(((((-16 + 1*i2)) == 0) && (((-15 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-15 + 1*i0)) >= 0) && (((1094 + -1*i0)) >= 0)))

	  // Schedules...
	    // in_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	    // jacdynl2_1_update_0 -> [1*d1*1*1 + 1*15,1*d0*1*1 + 1*15,1*17]
	    // stg0_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
	    // stg10_update_0 -> [1*d1*1*1 + 1*11,1*d0*1*1 + 1*11,1*12]
	    // stg11_update_0 -> [1*d1*1*1 + 1*12,1*d0*1*1 + 1*12,1*13]
	    // stg12_update_0 -> [1*d1*1*1 + 1*13,1*d0*1*1 + 1*13,1*14]
	    // stg13_update_0 -> [1*d1*1*1 + 1*14,1*d0*1*1 + 1*14,1*15]
	    // stg14_update_0 -> [1*d1*1*1 + 1*15,1*d0*1*1 + 1*15,1*16]
	    // stg1_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*3]
	    // stg2_update_0 -> [1*d1*1*1 + 1*3,1*d0*1*1 + 1*3,1*4]
	    // stg3_update_0 -> [1*d1*1*1 + 1*4,1*d0*1*1 + 1*4,1*5]
	    // stg4_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*6]
	    // stg5_update_0 -> [1*d1*1*1 + 1*6,1*d0*1*1 + 1*6,1*7]
	    // stg6_update_0 -> [1*d1*1*1 + 1*7,1*d0*1*1 + 1*7,1*8]
	    // stg7_update_0 -> [1*d1*1*1 + 1*8,1*d0*1*1 + 1*8,1*9]
	    // stg8_update_0 -> [1*d1*1*1 + 1*9,1*d0*1*1 + 1*9,1*10]
	    // stg9_update_0 -> [1*d1*1*1 + 1*10,1*d0*1*1 + 1*10,1*11]
	for (int c0 = 0; c0 <= 1094; c0++) {
	  for (int c1 = -15; c1 <= 1094; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-15 <= c1 && c1 <= 1094) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1094) && ((c0 - 0) % 1 == 0)) {
	      in_update_0(in_off_chip /* buf name */, in, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((-13 <= c1 && c1 <= 1094) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1094) && ((c0 - 1) % 1 == 0)) {
	      stg0_update_0(in /* buf name */, stg0, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((-11 <= c1 && c1 <= 1094) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 1094) && ((c0 - 2) % 1 == 0)) {
	      stg1_update_0(stg0 /* buf name */, stg1, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((-9 <= c1 && c1 <= 1094) && ((c1 - 3) % 1 == 0) && (3 <= c0 && c0 <= 1094) && ((c0 - 3) % 1 == 0)) {
	      stg2_update_0(stg1 /* buf name */, stg2, (c1 - 3) / 1, (c0 - 3) / 1);
	    }
	
	    if ((-7 <= c1 && c1 <= 1094) && ((c1 - 4) % 1 == 0) && (4 <= c0 && c0 <= 1094) && ((c0 - 4) % 1 == 0)) {
	      stg3_update_0(stg2 /* buf name */, stg3, (c1 - 4) / 1, (c0 - 4) / 1);
	    }
	
	    if ((-5 <= c1 && c1 <= 1094) && ((c1 - 5) % 1 == 0) && (5 <= c0 && c0 <= 1094) && ((c0 - 5) % 1 == 0)) {
	      stg4_update_0(stg3 /* buf name */, stg4, (c1 - 5) / 1, (c0 - 5) / 1);
	    }
	
	    if ((-3 <= c1 && c1 <= 1094) && ((c1 - 6) % 1 == 0) && (6 <= c0 && c0 <= 1094) && ((c0 - 6) % 1 == 0)) {
	      stg5_update_0(stg4 /* buf name */, stg5, (c1 - 6) / 1, (c0 - 6) / 1);
	    }
	
	    if ((-1 <= c1 && c1 <= 1094) && ((c1 - 7) % 1 == 0) && (7 <= c0 && c0 <= 1094) && ((c0 - 7) % 1 == 0)) {
	      stg6_update_0(stg5 /* buf name */, stg6, (c1 - 7) / 1, (c0 - 7) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 1094) && ((c1 - 8) % 1 == 0) && (8 <= c0 && c0 <= 1094) && ((c0 - 8) % 1 == 0)) {
	      stg7_update_0(stg6 /* buf name */, stg7, (c1 - 8) / 1, (c0 - 8) / 1);
	    }
	
	    if ((3 <= c1 && c1 <= 1094) && ((c1 - 9) % 1 == 0) && (9 <= c0 && c0 <= 1094) && ((c0 - 9) % 1 == 0)) {
	      stg8_update_0(stg7 /* buf name */, stg8, (c1 - 9) / 1, (c0 - 9) / 1);
	    }
	
	    if ((5 <= c1 && c1 <= 1094) && ((c1 - 10) % 1 == 0) && (10 <= c0 && c0 <= 1094) && ((c0 - 10) % 1 == 0)) {
	      stg9_update_0(stg8 /* buf name */, stg9, (c1 - 10) / 1, (c0 - 10) / 1);
	    }
	
	    if ((7 <= c1 && c1 <= 1094) && ((c1 - 11) % 1 == 0) && (11 <= c0 && c0 <= 1094) && ((c0 - 11) % 1 == 0)) {
	      stg10_update_0(stg9 /* buf name */, stg10, (c1 - 11) / 1, (c0 - 11) / 1);
	    }
	
	    if ((9 <= c1 && c1 <= 1094) && ((c1 - 12) % 1 == 0) && (12 <= c0 && c0 <= 1094) && ((c0 - 12) % 1 == 0)) {
	      stg11_update_0(stg10 /* buf name */, stg11, (c1 - 12) / 1, (c0 - 12) / 1);
	    }
	
	    if ((11 <= c1 && c1 <= 1094) && ((c1 - 13) % 1 == 0) && (13 <= c0 && c0 <= 1094) && ((c0 - 13) % 1 == 0)) {
	      stg12_update_0(stg11 /* buf name */, stg12, (c1 - 13) / 1, (c0 - 13) / 1);
	    }
	
	    if ((13 <= c1 && c1 <= 1094) && ((c1 - 14) % 1 == 0) && (14 <= c0 && c0 <= 1094) && ((c0 - 14) % 1 == 0)) {
	      stg13_update_0(stg12 /* buf name */, stg13, (c1 - 14) / 1, (c0 - 14) / 1);
	    }
	
	    if ((15 <= c1 && c1 <= 1094) && ((c1 - 15) % 1 == 0) && (15 <= c0 && c0 <= 1094) && ((c0 - 15) % 1 == 0)) {
	      stg14_update_0(stg13 /* buf name */, stg14, (c1 - 15) / 1, (c0 - 15) / 1);
	    }
	
	    if ((15 <= c1 && c1 <= 1094) && ((c1 - 15) % 1 == 0) && (15 <= c0 && c0 <= 1094) && ((c0 - 15) % 1 == 0)) {
	      jacdynl2_1_update_0(stg14 /* buf name */, jacdynl2_1, (c1 - 15) / 1, (c0 - 15) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void jacdynl2_1_opt_wrapper(HWStream<hw_uint<16> >& /* get_args num ports = 1 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */jacdynl2_1, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    jacdynl2_1_opt(in_off_chip, jacdynl2_1);
  }
}
#ifdef __VIVADO_SYNTH__
  // { in_update_0[root = 0, in_0, in_1] -> in_off_chip[in_1, in_0] : -15 <= in_0 <= 1094 and 0 <= in_1 <= 1094 }
const int in_update_0_read_pipe0_num_transfers = 1215450;
  // { jacdynl2_1_update_0[root = 0, jacdynl2_1_0, jacdynl2_1_1] -> jacdynl2_1[jacdynl2_1_1, jacdynl2_1_0] : 0 <= jacdynl2_1_0 <= 1079 and 0 <= jacdynl2_1_1 <= 1079 }
const int jacdynl2_1_update_0_write_pipe0_num_transfers = 1166400;


extern "C" {

void jacdynl2_1_opt_accel(hw_uint<16>* in_update_0_read_pipe0, hw_uint<16>* jacdynl2_1_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = jacdynl2_1_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = jacdynl2_1_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > in_update_0_read_pipe0_channel;
  static HWStream<hw_uint<16> > jacdynl2_1_update_0_write_pipe0_channel;

  burst_read<16>(in_update_0_read_pipe0, in_update_0_read_pipe0_channel, in_update_0_read_pipe0_num_transfers*size);

  jacdynl2_1_opt_wrapper(in_update_0_read_pipe0_channel, jacdynl2_1_update_0_write_pipe0_channel, size);

  burst_write<16>(jacdynl2_1_update_0_write_pipe0, jacdynl2_1_update_0_write_pipe0_channel, jacdynl2_1_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void jacdynl2_1_opt_rdai(HWStream<hw_uint<16> >& in_update_0_read_pipe0, HWStream<hw_uint<16> >&  jacdynl2_1_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = jacdynl2_1_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  jacdynl2_1_opt(in_update_0_read_pipe0, jacdynl2_1_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

