#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: ic20_500MHz_1_opt_compute_units.h
#include "ic20_500MHz_1_opt_compute_units.h"

struct in_in_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[-20, 1939], [0, 1098]}
	// Capacity: 1963
	// # of read delays: 5
  // 0, 1, 1960, 1961, 1962
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1958> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1959() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1960() {
		return f4;
	}

	inline hw_uint<16> peek_1961() {
		return f6;
	}

	inline hw_uint<16> peek_1962() {
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
    // cap: 1 reading from capacity: 1958
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1958 reading from capacity: 1
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
  // stg0_rd0 read pattern: { stg0_update_0[d0, d1] -> in[-1 + d0, d1] : -19 <= d0 <= 1938 and 0 <= d1 <= 1098 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -19 <= d0 <= 1938 and 0 <= d1 <= 1098 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -20 <= d0 <= 1939 and 0 <= d1 <= 1099 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_4.peek_1962();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> stg0_rd1_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd1 read pattern: { stg0_update_0[d0, d1] -> in[d0, d1] : -19 <= d0 <= 1938 and 0 <= d1 <= 1098 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -19 <= d0 <= 1938 and 0 <= d1 <= 1098 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -20 <= d0 <= 1939 and 0 <= d1 <= 1099 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_4.peek_1961();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> stg0_rd2_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd2 read pattern: { stg0_update_0[d0, d1] -> in[d0, 1 + d1] : -19 <= d0 <= 1938 and 0 <= d1 <= 1098 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -19 <= d0 <= 1938 and 0 <= d1 <= 1098 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -20 <= d0 <= 1939 and 0 <= d1 <= 1099 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_4.peek_1();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> stg0_rd3_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd3 read pattern: { stg0_update_0[d0, d1] -> in[1 + d0, d1] : -19 <= d0 <= 1938 and 0 <= d1 <= 1098 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -19 <= d0 <= 1938 and 0 <= d1 <= 1098 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -20 <= d0 <= 1939 and 0 <= d1 <= 1099 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_4.peek_1960();
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
	// RAM Box: {[-19, 1938], [0, 1097]}
	// Capacity: 1961
	// # of read delays: 5
  // 0, 1, 1958, 1959, 1960
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1956> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1957() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1958() {
		return f4;
	}

	inline hw_uint<16> peek_1959() {
		return f6;
	}

	inline hw_uint<16> peek_1960() {
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
    // cap: 1 reading from capacity: 1956
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1956 reading from capacity: 1
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
  // stg1_rd0 read pattern: { stg1_update_0[d0, d1] -> stg0[-1 + d0, d1] : -18 <= d0 <= 1937 and 0 <= d1 <= 1097 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -18 <= d0 <= 1937 and 0 <= d1 <= 1097 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -19 <= d0 <= 1938 and 0 <= d1 <= 1098 }
  auto value_stg0_stg0_update_0_write0 = stg0.stg0_stg0_update_0_write0_merged_banks_4.peek_1960();
  return value_stg0_stg0_update_0_write0;
  return 0;
}

inline hw_uint<16> stg1_rd1_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd1 read pattern: { stg1_update_0[d0, d1] -> stg0[d0, d1] : -18 <= d0 <= 1937 and 0 <= d1 <= 1097 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -18 <= d0 <= 1937 and 0 <= d1 <= 1097 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -19 <= d0 <= 1938 and 0 <= d1 <= 1098 }
  auto value_stg0_stg0_update_0_write0 = stg0.stg0_stg0_update_0_write0_merged_banks_4.peek_1959();
  return value_stg0_stg0_update_0_write0;
  return 0;
}

inline hw_uint<16> stg1_rd2_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd2 read pattern: { stg1_update_0[d0, d1] -> stg0[d0, 1 + d1] : -18 <= d0 <= 1937 and 0 <= d1 <= 1097 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -18 <= d0 <= 1937 and 0 <= d1 <= 1097 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -19 <= d0 <= 1938 and 0 <= d1 <= 1098 }
  auto value_stg0_stg0_update_0_write0 = stg0.stg0_stg0_update_0_write0_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write0;
  return 0;
}

inline hw_uint<16> stg1_rd3_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd3 read pattern: { stg1_update_0[d0, d1] -> stg0[1 + d0, d1] : -18 <= d0 <= 1937 and 0 <= d1 <= 1097 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -18 <= d0 <= 1937 and 0 <= d1 <= 1097 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -19 <= d0 <= 1938 and 0 <= d1 <= 1098 }
  auto value_stg0_stg0_update_0_write0 = stg0.stg0_stg0_update_0_write0_merged_banks_4.peek_1958();
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
	// RAM Box: {[-18, 1937], [0, 1096]}
	// Capacity: 1959
	// # of read delays: 5
  // 0, 1, 1956, 1957, 1958
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1954> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1955() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1956() {
		return f4;
	}

	inline hw_uint<16> peek_1957() {
		return f6;
	}

	inline hw_uint<16> peek_1958() {
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
    // cap: 1 reading from capacity: 1954
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1954 reading from capacity: 1
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
  // stg2_rd0 read pattern: { stg2_update_0[d0, d1] -> stg1[-1 + d0, d1] : -17 <= d0 <= 1936 and 0 <= d1 <= 1096 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -17 <= d0 <= 1936 and 0 <= d1 <= 1096 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -18 <= d0 <= 1937 and 0 <= d1 <= 1097 }
  auto value_stg1_stg1_update_0_write0 = stg1.stg1_stg1_update_0_write0_merged_banks_4.peek_1958();
  return value_stg1_stg1_update_0_write0;
  return 0;
}

inline hw_uint<16> stg2_rd1_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd1 read pattern: { stg2_update_0[d0, d1] -> stg1[d0, d1] : -17 <= d0 <= 1936 and 0 <= d1 <= 1096 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -17 <= d0 <= 1936 and 0 <= d1 <= 1096 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -18 <= d0 <= 1937 and 0 <= d1 <= 1097 }
  auto value_stg1_stg1_update_0_write0 = stg1.stg1_stg1_update_0_write0_merged_banks_4.peek_1957();
  return value_stg1_stg1_update_0_write0;
  return 0;
}

inline hw_uint<16> stg2_rd2_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd2 read pattern: { stg2_update_0[d0, d1] -> stg1[d0, 1 + d1] : -17 <= d0 <= 1936 and 0 <= d1 <= 1096 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -17 <= d0 <= 1936 and 0 <= d1 <= 1096 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -18 <= d0 <= 1937 and 0 <= d1 <= 1097 }
  auto value_stg1_stg1_update_0_write0 = stg1.stg1_stg1_update_0_write0_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write0;
  return 0;
}

inline hw_uint<16> stg2_rd3_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd3 read pattern: { stg2_update_0[d0, d1] -> stg1[1 + d0, d1] : -17 <= d0 <= 1936 and 0 <= d1 <= 1096 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -17 <= d0 <= 1936 and 0 <= d1 <= 1096 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -18 <= d0 <= 1937 and 0 <= d1 <= 1097 }
  auto value_stg1_stg1_update_0_write0 = stg1.stg1_stg1_update_0_write0_merged_banks_4.peek_1956();
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

struct stg10_cache {
  // # of banks: 1
  stg10_stg10_update_0_write0_merged_banks_4_cache stg10_stg10_update_0_write0_merged_banks_4;
};



inline void stg10_stg10_update_0_write0_write(hw_uint<16>& stg10_stg10_update_0_write0, stg10_cache& stg10, int d0, int d1, int dynamic_address) {
  stg10.stg10_stg10_update_0_write0_merged_banks_4.push(stg10_stg10_update_0_write0);
}

inline hw_uint<16> stg11_rd0_select(stg10_cache& stg10, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_rd0 read pattern: { stg11_update_0[d0, d1] -> stg10[-1 + d0, d1] : -8 <= d0 <= 1927 and 0 <= d1 <= 1087 }
  // Read schedule : { stg11_update_0[d0, d1] -> [12 + d1, 12 + d0, 13] : -8 <= d0 <= 1927 and 0 <= d1 <= 1087 }
  // Write schedule: { stg10_update_0[d0, d1] -> [11 + d1, 11 + d0, 12] : -9 <= d0 <= 1928 and 0 <= d1 <= 1088 }
  auto value_stg10_stg10_update_0_write0 = stg10.stg10_stg10_update_0_write0_merged_banks_4.peek_1940();
  return value_stg10_stg10_update_0_write0;
  return 0;
}

inline hw_uint<16> stg11_rd1_select(stg10_cache& stg10, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_rd1 read pattern: { stg11_update_0[d0, d1] -> stg10[d0, d1] : -8 <= d0 <= 1927 and 0 <= d1 <= 1087 }
  // Read schedule : { stg11_update_0[d0, d1] -> [12 + d1, 12 + d0, 13] : -8 <= d0 <= 1927 and 0 <= d1 <= 1087 }
  // Write schedule: { stg10_update_0[d0, d1] -> [11 + d1, 11 + d0, 12] : -9 <= d0 <= 1928 and 0 <= d1 <= 1088 }
  auto value_stg10_stg10_update_0_write0 = stg10.stg10_stg10_update_0_write0_merged_banks_4.peek_1939();
  return value_stg10_stg10_update_0_write0;
  return 0;
}

inline hw_uint<16> stg11_rd2_select(stg10_cache& stg10, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_rd2 read pattern: { stg11_update_0[d0, d1] -> stg10[d0, 1 + d1] : -8 <= d0 <= 1927 and 0 <= d1 <= 1087 }
  // Read schedule : { stg11_update_0[d0, d1] -> [12 + d1, 12 + d0, 13] : -8 <= d0 <= 1927 and 0 <= d1 <= 1087 }
  // Write schedule: { stg10_update_0[d0, d1] -> [11 + d1, 11 + d0, 12] : -9 <= d0 <= 1928 and 0 <= d1 <= 1088 }
  auto value_stg10_stg10_update_0_write0 = stg10.stg10_stg10_update_0_write0_merged_banks_4.peek_1();
  return value_stg10_stg10_update_0_write0;
  return 0;
}

inline hw_uint<16> stg11_rd3_select(stg10_cache& stg10, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_rd3 read pattern: { stg11_update_0[d0, d1] -> stg10[1 + d0, d1] : -8 <= d0 <= 1927 and 0 <= d1 <= 1087 }
  // Read schedule : { stg11_update_0[d0, d1] -> [12 + d1, 12 + d0, 13] : -8 <= d0 <= 1927 and 0 <= d1 <= 1087 }
  // Write schedule: { stg10_update_0[d0, d1] -> [11 + d1, 11 + d0, 12] : -9 <= d0 <= 1928 and 0 <= d1 <= 1088 }
  auto value_stg10_stg10_update_0_write0 = stg10.stg10_stg10_update_0_write0_merged_banks_4.peek_1938();
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

struct stg11_cache {
  // # of banks: 1
  stg11_stg11_update_0_write0_merged_banks_4_cache stg11_stg11_update_0_write0_merged_banks_4;
};



inline void stg11_stg11_update_0_write0_write(hw_uint<16>& stg11_stg11_update_0_write0, stg11_cache& stg11, int d0, int d1, int dynamic_address) {
  stg11.stg11_stg11_update_0_write0_merged_banks_4.push(stg11_stg11_update_0_write0);
}

inline hw_uint<16> stg12_rd0_select(stg11_cache& stg11, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_rd0 read pattern: { stg12_update_0[d0, d1] -> stg11[-1 + d0, d1] : -7 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  // Read schedule : { stg12_update_0[d0, d1] -> [13 + d1, 13 + d0, 14] : -7 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  // Write schedule: { stg11_update_0[d0, d1] -> [12 + d1, 12 + d0, 13] : -8 <= d0 <= 1927 and 0 <= d1 <= 1087 }
  auto value_stg11_stg11_update_0_write0 = stg11.stg11_stg11_update_0_write0_merged_banks_4.peek_1938();
  return value_stg11_stg11_update_0_write0;
  return 0;
}

inline hw_uint<16> stg12_rd1_select(stg11_cache& stg11, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_rd1 read pattern: { stg12_update_0[d0, d1] -> stg11[d0, d1] : -7 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  // Read schedule : { stg12_update_0[d0, d1] -> [13 + d1, 13 + d0, 14] : -7 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  // Write schedule: { stg11_update_0[d0, d1] -> [12 + d1, 12 + d0, 13] : -8 <= d0 <= 1927 and 0 <= d1 <= 1087 }
  auto value_stg11_stg11_update_0_write0 = stg11.stg11_stg11_update_0_write0_merged_banks_4.peek_1937();
  return value_stg11_stg11_update_0_write0;
  return 0;
}

inline hw_uint<16> stg12_rd2_select(stg11_cache& stg11, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_rd2 read pattern: { stg12_update_0[d0, d1] -> stg11[d0, 1 + d1] : -7 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  // Read schedule : { stg12_update_0[d0, d1] -> [13 + d1, 13 + d0, 14] : -7 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  // Write schedule: { stg11_update_0[d0, d1] -> [12 + d1, 12 + d0, 13] : -8 <= d0 <= 1927 and 0 <= d1 <= 1087 }
  auto value_stg11_stg11_update_0_write0 = stg11.stg11_stg11_update_0_write0_merged_banks_4.peek_1();
  return value_stg11_stg11_update_0_write0;
  return 0;
}

inline hw_uint<16> stg12_rd3_select(stg11_cache& stg11, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_rd3 read pattern: { stg12_update_0[d0, d1] -> stg11[1 + d0, d1] : -7 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  // Read schedule : { stg12_update_0[d0, d1] -> [13 + d1, 13 + d0, 14] : -7 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  // Write schedule: { stg11_update_0[d0, d1] -> [12 + d1, 12 + d0, 13] : -8 <= d0 <= 1927 and 0 <= d1 <= 1087 }
  auto value_stg11_stg11_update_0_write0 = stg11.stg11_stg11_update_0_write0_merged_banks_4.peek_1936();
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

struct stg12_cache {
  // # of banks: 1
  stg12_stg12_update_0_write0_merged_banks_4_cache stg12_stg12_update_0_write0_merged_banks_4;
};



inline void stg12_stg12_update_0_write0_write(hw_uint<16>& stg12_stg12_update_0_write0, stg12_cache& stg12, int d0, int d1, int dynamic_address) {
  stg12.stg12_stg12_update_0_write0_merged_banks_4.push(stg12_stg12_update_0_write0);
}

inline hw_uint<16> stg13_rd0_select(stg12_cache& stg12, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_rd0 read pattern: { stg13_update_0[d0, d1] -> stg12[-1 + d0, d1] : -6 <= d0 <= 1925 and 0 <= d1 <= 1085 }
  // Read schedule : { stg13_update_0[d0, d1] -> [14 + d1, 14 + d0, 15] : -6 <= d0 <= 1925 and 0 <= d1 <= 1085 }
  // Write schedule: { stg12_update_0[d0, d1] -> [13 + d1, 13 + d0, 14] : -7 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  auto value_stg12_stg12_update_0_write0 = stg12.stg12_stg12_update_0_write0_merged_banks_4.peek_1936();
  return value_stg12_stg12_update_0_write0;
  return 0;
}

inline hw_uint<16> stg13_rd1_select(stg12_cache& stg12, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_rd1 read pattern: { stg13_update_0[d0, d1] -> stg12[d0, d1] : -6 <= d0 <= 1925 and 0 <= d1 <= 1085 }
  // Read schedule : { stg13_update_0[d0, d1] -> [14 + d1, 14 + d0, 15] : -6 <= d0 <= 1925 and 0 <= d1 <= 1085 }
  // Write schedule: { stg12_update_0[d0, d1] -> [13 + d1, 13 + d0, 14] : -7 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  auto value_stg12_stg12_update_0_write0 = stg12.stg12_stg12_update_0_write0_merged_banks_4.peek_1935();
  return value_stg12_stg12_update_0_write0;
  return 0;
}

inline hw_uint<16> stg13_rd2_select(stg12_cache& stg12, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_rd2 read pattern: { stg13_update_0[d0, d1] -> stg12[d0, 1 + d1] : -6 <= d0 <= 1925 and 0 <= d1 <= 1085 }
  // Read schedule : { stg13_update_0[d0, d1] -> [14 + d1, 14 + d0, 15] : -6 <= d0 <= 1925 and 0 <= d1 <= 1085 }
  // Write schedule: { stg12_update_0[d0, d1] -> [13 + d1, 13 + d0, 14] : -7 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  auto value_stg12_stg12_update_0_write0 = stg12.stg12_stg12_update_0_write0_merged_banks_4.peek_1();
  return value_stg12_stg12_update_0_write0;
  return 0;
}

inline hw_uint<16> stg13_rd3_select(stg12_cache& stg12, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_rd3 read pattern: { stg13_update_0[d0, d1] -> stg12[1 + d0, d1] : -6 <= d0 <= 1925 and 0 <= d1 <= 1085 }
  // Read schedule : { stg13_update_0[d0, d1] -> [14 + d1, 14 + d0, 15] : -6 <= d0 <= 1925 and 0 <= d1 <= 1085 }
  // Write schedule: { stg12_update_0[d0, d1] -> [13 + d1, 13 + d0, 14] : -7 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  auto value_stg12_stg12_update_0_write0 = stg12.stg12_stg12_update_0_write0_merged_banks_4.peek_1934();
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

struct stg13_cache {
  // # of banks: 1
  stg13_stg13_update_0_write0_merged_banks_4_cache stg13_stg13_update_0_write0_merged_banks_4;
};



inline void stg13_stg13_update_0_write0_write(hw_uint<16>& stg13_stg13_update_0_write0, stg13_cache& stg13, int d0, int d1, int dynamic_address) {
  stg13.stg13_stg13_update_0_write0_merged_banks_4.push(stg13_stg13_update_0_write0);
}

inline hw_uint<16> stg14_rd0_select(stg13_cache& stg13, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg14_rd0 read pattern: { stg14_update_0[d0, d1] -> stg13[-1 + d0, d1] : -5 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { stg14_update_0[d0, d1] -> [15 + d1, 15 + d0, 16] : -5 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Write schedule: { stg13_update_0[d0, d1] -> [14 + d1, 14 + d0, 15] : -6 <= d0 <= 1925 and 0 <= d1 <= 1085 }
  auto value_stg13_stg13_update_0_write0 = stg13.stg13_stg13_update_0_write0_merged_banks_4.peek_1934();
  return value_stg13_stg13_update_0_write0;
  return 0;
}

inline hw_uint<16> stg14_rd1_select(stg13_cache& stg13, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg14_rd1 read pattern: { stg14_update_0[d0, d1] -> stg13[d0, d1] : -5 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { stg14_update_0[d0, d1] -> [15 + d1, 15 + d0, 16] : -5 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Write schedule: { stg13_update_0[d0, d1] -> [14 + d1, 14 + d0, 15] : -6 <= d0 <= 1925 and 0 <= d1 <= 1085 }
  auto value_stg13_stg13_update_0_write0 = stg13.stg13_stg13_update_0_write0_merged_banks_4.peek_1933();
  return value_stg13_stg13_update_0_write0;
  return 0;
}

inline hw_uint<16> stg14_rd2_select(stg13_cache& stg13, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg14_rd2 read pattern: { stg14_update_0[d0, d1] -> stg13[d0, 1 + d1] : -5 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { stg14_update_0[d0, d1] -> [15 + d1, 15 + d0, 16] : -5 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Write schedule: { stg13_update_0[d0, d1] -> [14 + d1, 14 + d0, 15] : -6 <= d0 <= 1925 and 0 <= d1 <= 1085 }
  auto value_stg13_stg13_update_0_write0 = stg13.stg13_stg13_update_0_write0_merged_banks_4.peek_1();
  return value_stg13_stg13_update_0_write0;
  return 0;
}

inline hw_uint<16> stg14_rd3_select(stg13_cache& stg13, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg14_rd3 read pattern: { stg14_update_0[d0, d1] -> stg13[1 + d0, d1] : -5 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { stg14_update_0[d0, d1] -> [15 + d1, 15 + d0, 16] : -5 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Write schedule: { stg13_update_0[d0, d1] -> [14 + d1, 14 + d0, 15] : -6 <= d0 <= 1925 and 0 <= d1 <= 1085 }
  auto value_stg13_stg13_update_0_write0 = stg13.stg13_stg13_update_0_write0_merged_banks_4.peek_1932();
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

struct stg14_stg14_update_0_write0_merged_banks_4_cache {
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

struct stg14_cache {
  // # of banks: 1
  stg14_stg14_update_0_write0_merged_banks_4_cache stg14_stg14_update_0_write0_merged_banks_4;
};



inline void stg14_stg14_update_0_write0_write(hw_uint<16>& stg14_stg14_update_0_write0, stg14_cache& stg14, int d0, int d1, int dynamic_address) {
  stg14.stg14_stg14_update_0_write0_merged_banks_4.push(stg14_stg14_update_0_write0);
}

inline hw_uint<16> stg15_rd0_select(stg14_cache& stg14, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg15_rd0 read pattern: { stg15_update_0[d0, d1] -> stg14[-1 + d0, d1] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083 }
  // Read schedule : { stg15_update_0[d0, d1] -> [16 + d1, 16 + d0, 17] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083 }
  // Write schedule: { stg14_update_0[d0, d1] -> [15 + d1, 15 + d0, 16] : -5 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_stg14_stg14_update_0_write0 = stg14.stg14_stg14_update_0_write0_merged_banks_4.peek_1932();
  return value_stg14_stg14_update_0_write0;
  return 0;
}

inline hw_uint<16> stg15_rd1_select(stg14_cache& stg14, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg15_rd1 read pattern: { stg15_update_0[d0, d1] -> stg14[d0, d1] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083 }
  // Read schedule : { stg15_update_0[d0, d1] -> [16 + d1, 16 + d0, 17] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083 }
  // Write schedule: { stg14_update_0[d0, d1] -> [15 + d1, 15 + d0, 16] : -5 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_stg14_stg14_update_0_write0 = stg14.stg14_stg14_update_0_write0_merged_banks_4.peek_1931();
  return value_stg14_stg14_update_0_write0;
  return 0;
}

inline hw_uint<16> stg15_rd2_select(stg14_cache& stg14, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg15_rd2 read pattern: { stg15_update_0[d0, d1] -> stg14[d0, 1 + d1] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083 }
  // Read schedule : { stg15_update_0[d0, d1] -> [16 + d1, 16 + d0, 17] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083 }
  // Write schedule: { stg14_update_0[d0, d1] -> [15 + d1, 15 + d0, 16] : -5 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_stg14_stg14_update_0_write0 = stg14.stg14_stg14_update_0_write0_merged_banks_4.peek_1();
  return value_stg14_stg14_update_0_write0;
  return 0;
}

inline hw_uint<16> stg15_rd3_select(stg14_cache& stg14, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg15_rd3 read pattern: { stg15_update_0[d0, d1] -> stg14[1 + d0, d1] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083 }
  // Read schedule : { stg15_update_0[d0, d1] -> [16 + d1, 16 + d0, 17] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083 }
  // Write schedule: { stg14_update_0[d0, d1] -> [15 + d1, 15 + d0, 16] : -5 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_stg14_stg14_update_0_write0 = stg14.stg14_stg14_update_0_write0_merged_banks_4.peek_1930();
  return value_stg14_stg14_update_0_write0;
  return 0;
}

// # of bundles = 2
// stg14_update_0_write
//	stg14_stg14_update_0_write0
inline void stg14_stg14_update_0_write_bundle_write(hw_uint<16>& stg14_update_0_write, stg14_cache& stg14, int d0, int d1, int dynamic_address) {
	hw_uint<16> stg14_stg14_update_0_write0_res = stg14_update_0_write.extract<0, 15>();
	stg14_stg14_update_0_write0_write(stg14_stg14_update_0_write0_res, stg14, d0, d1, dynamic_address);
}

// stg15_update_0_read
//	stg15_rd0
//	stg15_rd1
//	stg15_rd2
//	stg15_rd3
inline hw_uint<64> stg14_stg15_update_0_read_bundle_read(stg14_cache& stg14, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg15_rd0
    // stg15_rd1
    // stg15_rd2
    // stg15_rd3

	hw_uint<64> result;
	hw_uint<16> stg15_rd0_res = stg15_rd0_select(stg14, d0, d1, dynamic_address);
	set_at<0, 64>(result, stg15_rd0_res);
	hw_uint<16> stg15_rd1_res = stg15_rd1_select(stg14, d0, d1, dynamic_address);
	set_at<16, 64>(result, stg15_rd1_res);
	hw_uint<16> stg15_rd2_res = stg15_rd2_select(stg14, d0, d1, dynamic_address);
	set_at<32, 64>(result, stg15_rd2_res);
	hw_uint<16> stg15_rd3_res = stg15_rd3_select(stg14, d0, d1, dynamic_address);
	set_at<48, 64>(result, stg15_rd3_res);
	return result;
}

struct stg15_stg15_update_0_write0_merged_banks_4_cache {
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

struct stg15_cache {
  // # of banks: 1
  stg15_stg15_update_0_write0_merged_banks_4_cache stg15_stg15_update_0_write0_merged_banks_4;
};



inline void stg15_stg15_update_0_write0_write(hw_uint<16>& stg15_stg15_update_0_write0, stg15_cache& stg15, int d0, int d1, int dynamic_address) {
  stg15.stg15_stg15_update_0_write0_merged_banks_4.push(stg15_stg15_update_0_write0);
}

inline hw_uint<16> stg16_rd0_select(stg15_cache& stg15, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg16_rd0 read pattern: { stg16_update_0[d0, d1] -> stg15[-1 + d0, d1] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
  // Read schedule : { stg16_update_0[d0, d1] -> [17 + d1, 17 + d0, 18] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
  // Write schedule: { stg15_update_0[d0, d1] -> [16 + d1, 16 + d0, 17] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083 }
  auto value_stg15_stg15_update_0_write0 = stg15.stg15_stg15_update_0_write0_merged_banks_4.peek_1930();
  return value_stg15_stg15_update_0_write0;
  return 0;
}

inline hw_uint<16> stg16_rd1_select(stg15_cache& stg15, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg16_rd1 read pattern: { stg16_update_0[d0, d1] -> stg15[d0, d1] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
  // Read schedule : { stg16_update_0[d0, d1] -> [17 + d1, 17 + d0, 18] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
  // Write schedule: { stg15_update_0[d0, d1] -> [16 + d1, 16 + d0, 17] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083 }
  auto value_stg15_stg15_update_0_write0 = stg15.stg15_stg15_update_0_write0_merged_banks_4.peek_1929();
  return value_stg15_stg15_update_0_write0;
  return 0;
}

inline hw_uint<16> stg16_rd2_select(stg15_cache& stg15, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg16_rd2 read pattern: { stg16_update_0[d0, d1] -> stg15[d0, 1 + d1] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
  // Read schedule : { stg16_update_0[d0, d1] -> [17 + d1, 17 + d0, 18] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
  // Write schedule: { stg15_update_0[d0, d1] -> [16 + d1, 16 + d0, 17] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083 }
  auto value_stg15_stg15_update_0_write0 = stg15.stg15_stg15_update_0_write0_merged_banks_4.peek_1();
  return value_stg15_stg15_update_0_write0;
  return 0;
}

inline hw_uint<16> stg16_rd3_select(stg15_cache& stg15, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg16_rd3 read pattern: { stg16_update_0[d0, d1] -> stg15[1 + d0, d1] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
  // Read schedule : { stg16_update_0[d0, d1] -> [17 + d1, 17 + d0, 18] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
  // Write schedule: { stg15_update_0[d0, d1] -> [16 + d1, 16 + d0, 17] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083 }
  auto value_stg15_stg15_update_0_write0 = stg15.stg15_stg15_update_0_write0_merged_banks_4.peek_1928();
  return value_stg15_stg15_update_0_write0;
  return 0;
}

// # of bundles = 2
// stg15_update_0_write
//	stg15_stg15_update_0_write0
inline void stg15_stg15_update_0_write_bundle_write(hw_uint<16>& stg15_update_0_write, stg15_cache& stg15, int d0, int d1, int dynamic_address) {
	hw_uint<16> stg15_stg15_update_0_write0_res = stg15_update_0_write.extract<0, 15>();
	stg15_stg15_update_0_write0_write(stg15_stg15_update_0_write0_res, stg15, d0, d1, dynamic_address);
}

// stg16_update_0_read
//	stg16_rd0
//	stg16_rd1
//	stg16_rd2
//	stg16_rd3
inline hw_uint<64> stg15_stg16_update_0_read_bundle_read(stg15_cache& stg15, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg16_rd0
    // stg16_rd1
    // stg16_rd2
    // stg16_rd3

	hw_uint<64> result;
	hw_uint<16> stg16_rd0_res = stg16_rd0_select(stg15, d0, d1, dynamic_address);
	set_at<0, 64>(result, stg16_rd0_res);
	hw_uint<16> stg16_rd1_res = stg16_rd1_select(stg15, d0, d1, dynamic_address);
	set_at<16, 64>(result, stg16_rd1_res);
	hw_uint<16> stg16_rd2_res = stg16_rd2_select(stg15, d0, d1, dynamic_address);
	set_at<32, 64>(result, stg16_rd2_res);
	hw_uint<16> stg16_rd3_res = stg16_rd3_select(stg15, d0, d1, dynamic_address);
	set_at<48, 64>(result, stg16_rd3_res);
	return result;
}

struct stg16_stg16_update_0_write0_merged_banks_4_cache {
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

struct stg16_cache {
  // # of banks: 1
  stg16_stg16_update_0_write0_merged_banks_4_cache stg16_stg16_update_0_write0_merged_banks_4;
};



inline void stg16_stg16_update_0_write0_write(hw_uint<16>& stg16_stg16_update_0_write0, stg16_cache& stg16, int d0, int d1, int dynamic_address) {
  stg16.stg16_stg16_update_0_write0_merged_banks_4.push(stg16_stg16_update_0_write0);
}

inline hw_uint<16> stg17_rd0_select(stg16_cache& stg16, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg17_rd0 read pattern: { stg17_update_0[d0, d1] -> stg16[-1 + d0, d1] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Read schedule : { stg17_update_0[d0, d1] -> [18 + d1, 18 + d0, 19] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Write schedule: { stg16_update_0[d0, d1] -> [17 + d1, 17 + d0, 18] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
  auto value_stg16_stg16_update_0_write0 = stg16.stg16_stg16_update_0_write0_merged_banks_4.peek_1928();
  return value_stg16_stg16_update_0_write0;
  return 0;
}

inline hw_uint<16> stg17_rd1_select(stg16_cache& stg16, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg17_rd1 read pattern: { stg17_update_0[d0, d1] -> stg16[d0, d1] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Read schedule : { stg17_update_0[d0, d1] -> [18 + d1, 18 + d0, 19] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Write schedule: { stg16_update_0[d0, d1] -> [17 + d1, 17 + d0, 18] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
  auto value_stg16_stg16_update_0_write0 = stg16.stg16_stg16_update_0_write0_merged_banks_4.peek_1927();
  return value_stg16_stg16_update_0_write0;
  return 0;
}

inline hw_uint<16> stg17_rd2_select(stg16_cache& stg16, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg17_rd2 read pattern: { stg17_update_0[d0, d1] -> stg16[d0, 1 + d1] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Read schedule : { stg17_update_0[d0, d1] -> [18 + d1, 18 + d0, 19] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Write schedule: { stg16_update_0[d0, d1] -> [17 + d1, 17 + d0, 18] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
  auto value_stg16_stg16_update_0_write0 = stg16.stg16_stg16_update_0_write0_merged_banks_4.peek_1();
  return value_stg16_stg16_update_0_write0;
  return 0;
}

inline hw_uint<16> stg17_rd3_select(stg16_cache& stg16, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg17_rd3 read pattern: { stg17_update_0[d0, d1] -> stg16[1 + d0, d1] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Read schedule : { stg17_update_0[d0, d1] -> [18 + d1, 18 + d0, 19] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Write schedule: { stg16_update_0[d0, d1] -> [17 + d1, 17 + d0, 18] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
  auto value_stg16_stg16_update_0_write0 = stg16.stg16_stg16_update_0_write0_merged_banks_4.peek_1926();
  return value_stg16_stg16_update_0_write0;
  return 0;
}

// # of bundles = 2
// stg16_update_0_write
//	stg16_stg16_update_0_write0
inline void stg16_stg16_update_0_write_bundle_write(hw_uint<16>& stg16_update_0_write, stg16_cache& stg16, int d0, int d1, int dynamic_address) {
	hw_uint<16> stg16_stg16_update_0_write0_res = stg16_update_0_write.extract<0, 15>();
	stg16_stg16_update_0_write0_write(stg16_stg16_update_0_write0_res, stg16, d0, d1, dynamic_address);
}

// stg17_update_0_read
//	stg17_rd0
//	stg17_rd1
//	stg17_rd2
//	stg17_rd3
inline hw_uint<64> stg16_stg17_update_0_read_bundle_read(stg16_cache& stg16, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg17_rd0
    // stg17_rd1
    // stg17_rd2
    // stg17_rd3

	hw_uint<64> result;
	hw_uint<16> stg17_rd0_res = stg17_rd0_select(stg16, d0, d1, dynamic_address);
	set_at<0, 64>(result, stg17_rd0_res);
	hw_uint<16> stg17_rd1_res = stg17_rd1_select(stg16, d0, d1, dynamic_address);
	set_at<16, 64>(result, stg17_rd1_res);
	hw_uint<16> stg17_rd2_res = stg17_rd2_select(stg16, d0, d1, dynamic_address);
	set_at<32, 64>(result, stg17_rd2_res);
	hw_uint<16> stg17_rd3_res = stg17_rd3_select(stg16, d0, d1, dynamic_address);
	set_at<48, 64>(result, stg17_rd3_res);
	return result;
}

struct stg17_stg17_update_0_write0_merged_banks_4_cache {
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

struct stg17_cache {
  // # of banks: 1
  stg17_stg17_update_0_write0_merged_banks_4_cache stg17_stg17_update_0_write0_merged_banks_4;
};



inline void stg17_stg17_update_0_write0_write(hw_uint<16>& stg17_stg17_update_0_write0, stg17_cache& stg17, int d0, int d1, int dynamic_address) {
  stg17.stg17_stg17_update_0_write0_merged_banks_4.push(stg17_stg17_update_0_write0);
}

inline hw_uint<16> stg18_rd0_select(stg17_cache& stg17, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg18_rd0 read pattern: { stg18_update_0[d0, d1] -> stg17[-1 + d0, d1] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080 }
  // Read schedule : { stg18_update_0[d0, d1] -> [19 + d1, 19 + d0, 20] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080 }
  // Write schedule: { stg17_update_0[d0, d1] -> [18 + d1, 18 + d0, 19] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  auto value_stg17_stg17_update_0_write0 = stg17.stg17_stg17_update_0_write0_merged_banks_4.peek_1926();
  return value_stg17_stg17_update_0_write0;
  return 0;
}

inline hw_uint<16> stg18_rd1_select(stg17_cache& stg17, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg18_rd1 read pattern: { stg18_update_0[d0, d1] -> stg17[d0, d1] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080 }
  // Read schedule : { stg18_update_0[d0, d1] -> [19 + d1, 19 + d0, 20] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080 }
  // Write schedule: { stg17_update_0[d0, d1] -> [18 + d1, 18 + d0, 19] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  auto value_stg17_stg17_update_0_write0 = stg17.stg17_stg17_update_0_write0_merged_banks_4.peek_1925();
  return value_stg17_stg17_update_0_write0;
  return 0;
}

inline hw_uint<16> stg18_rd2_select(stg17_cache& stg17, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg18_rd2 read pattern: { stg18_update_0[d0, d1] -> stg17[d0, 1 + d1] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080 }
  // Read schedule : { stg18_update_0[d0, d1] -> [19 + d1, 19 + d0, 20] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080 }
  // Write schedule: { stg17_update_0[d0, d1] -> [18 + d1, 18 + d0, 19] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  auto value_stg17_stg17_update_0_write0 = stg17.stg17_stg17_update_0_write0_merged_banks_4.peek_1();
  return value_stg17_stg17_update_0_write0;
  return 0;
}

inline hw_uint<16> stg18_rd3_select(stg17_cache& stg17, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg18_rd3 read pattern: { stg18_update_0[d0, d1] -> stg17[1 + d0, d1] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080 }
  // Read schedule : { stg18_update_0[d0, d1] -> [19 + d1, 19 + d0, 20] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080 }
  // Write schedule: { stg17_update_0[d0, d1] -> [18 + d1, 18 + d0, 19] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  auto value_stg17_stg17_update_0_write0 = stg17.stg17_stg17_update_0_write0_merged_banks_4.peek_1924();
  return value_stg17_stg17_update_0_write0;
  return 0;
}

// # of bundles = 2
// stg17_update_0_write
//	stg17_stg17_update_0_write0
inline void stg17_stg17_update_0_write_bundle_write(hw_uint<16>& stg17_update_0_write, stg17_cache& stg17, int d0, int d1, int dynamic_address) {
	hw_uint<16> stg17_stg17_update_0_write0_res = stg17_update_0_write.extract<0, 15>();
	stg17_stg17_update_0_write0_write(stg17_stg17_update_0_write0_res, stg17, d0, d1, dynamic_address);
}

// stg18_update_0_read
//	stg18_rd0
//	stg18_rd1
//	stg18_rd2
//	stg18_rd3
inline hw_uint<64> stg17_stg18_update_0_read_bundle_read(stg17_cache& stg17, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg18_rd0
    // stg18_rd1
    // stg18_rd2
    // stg18_rd3

	hw_uint<64> result;
	hw_uint<16> stg18_rd0_res = stg18_rd0_select(stg17, d0, d1, dynamic_address);
	set_at<0, 64>(result, stg18_rd0_res);
	hw_uint<16> stg18_rd1_res = stg18_rd1_select(stg17, d0, d1, dynamic_address);
	set_at<16, 64>(result, stg18_rd1_res);
	hw_uint<16> stg18_rd2_res = stg18_rd2_select(stg17, d0, d1, dynamic_address);
	set_at<32, 64>(result, stg18_rd2_res);
	hw_uint<16> stg18_rd3_res = stg18_rd3_select(stg17, d0, d1, dynamic_address);
	set_at<48, 64>(result, stg18_rd3_res);
	return result;
}

struct stg18_stg18_update_0_write0_merged_banks_4_cache {
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

struct stg18_cache {
  // # of banks: 1
  stg18_stg18_update_0_write0_merged_banks_4_cache stg18_stg18_update_0_write0_merged_banks_4;
};



inline void stg18_stg18_update_0_write0_write(hw_uint<16>& stg18_stg18_update_0_write0, stg18_cache& stg18, int d0, int d1, int dynamic_address) {
  stg18.stg18_stg18_update_0_write0_merged_banks_4.push(stg18_stg18_update_0_write0);
}

inline hw_uint<16> stg19_rd0_select(stg18_cache& stg18, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg19_rd0 read pattern: { stg19_update_0[d0, d1] -> stg18[-1 + d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { stg19_update_0[d0, d1] -> [20 + d1, 20 + d0, 21] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { stg18_update_0[d0, d1] -> [19 + d1, 19 + d0, 20] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080 }
  auto value_stg18_stg18_update_0_write0 = stg18.stg18_stg18_update_0_write0_merged_banks_4.peek_1924();
  return value_stg18_stg18_update_0_write0;
  return 0;
}

inline hw_uint<16> stg19_rd1_select(stg18_cache& stg18, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg19_rd1 read pattern: { stg19_update_0[d0, d1] -> stg18[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { stg19_update_0[d0, d1] -> [20 + d1, 20 + d0, 21] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { stg18_update_0[d0, d1] -> [19 + d1, 19 + d0, 20] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080 }
  auto value_stg18_stg18_update_0_write0 = stg18.stg18_stg18_update_0_write0_merged_banks_4.peek_1923();
  return value_stg18_stg18_update_0_write0;
  return 0;
}

inline hw_uint<16> stg19_rd2_select(stg18_cache& stg18, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg19_rd2 read pattern: { stg19_update_0[d0, d1] -> stg18[d0, 1 + d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { stg19_update_0[d0, d1] -> [20 + d1, 20 + d0, 21] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { stg18_update_0[d0, d1] -> [19 + d1, 19 + d0, 20] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080 }
  auto value_stg18_stg18_update_0_write0 = stg18.stg18_stg18_update_0_write0_merged_banks_4.peek_1();
  return value_stg18_stg18_update_0_write0;
  return 0;
}

inline hw_uint<16> stg19_rd3_select(stg18_cache& stg18, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg19_rd3 read pattern: { stg19_update_0[d0, d1] -> stg18[1 + d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { stg19_update_0[d0, d1] -> [20 + d1, 20 + d0, 21] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { stg18_update_0[d0, d1] -> [19 + d1, 19 + d0, 20] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080 }
  auto value_stg18_stg18_update_0_write0 = stg18.stg18_stg18_update_0_write0_merged_banks_4.peek_1922();
  return value_stg18_stg18_update_0_write0;
  return 0;
}

// # of bundles = 2
// stg18_update_0_write
//	stg18_stg18_update_0_write0
inline void stg18_stg18_update_0_write_bundle_write(hw_uint<16>& stg18_update_0_write, stg18_cache& stg18, int d0, int d1, int dynamic_address) {
	hw_uint<16> stg18_stg18_update_0_write0_res = stg18_update_0_write.extract<0, 15>();
	stg18_stg18_update_0_write0_write(stg18_stg18_update_0_write0_res, stg18, d0, d1, dynamic_address);
}

// stg19_update_0_read
//	stg19_rd0
//	stg19_rd1
//	stg19_rd2
//	stg19_rd3
inline hw_uint<64> stg18_stg19_update_0_read_bundle_read(stg18_cache& stg18, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg19_rd0
    // stg19_rd1
    // stg19_rd2
    // stg19_rd3

	hw_uint<64> result;
	hw_uint<16> stg19_rd0_res = stg19_rd0_select(stg18, d0, d1, dynamic_address);
	set_at<0, 64>(result, stg19_rd0_res);
	hw_uint<16> stg19_rd1_res = stg19_rd1_select(stg18, d0, d1, dynamic_address);
	set_at<16, 64>(result, stg19_rd1_res);
	hw_uint<16> stg19_rd2_res = stg19_rd2_select(stg18, d0, d1, dynamic_address);
	set_at<32, 64>(result, stg19_rd2_res);
	hw_uint<16> stg19_rd3_res = stg19_rd3_select(stg18, d0, d1, dynamic_address);
	set_at<48, 64>(result, stg19_rd3_res);
	return result;
}

struct stg19_stg19_update_0_write0_to_ic20_500MHz_1_rd0_cache {
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

struct stg19_cache {
  // # of banks: 1
  stg19_stg19_update_0_write0_to_ic20_500MHz_1_rd0_cache stg19_stg19_update_0_write0_to_ic20_500MHz_1_rd0;
};



inline void stg19_stg19_update_0_write0_write(hw_uint<16>& stg19_stg19_update_0_write0, stg19_cache& stg19, int d0, int d1, int dynamic_address) {
  stg19.stg19_stg19_update_0_write0_to_ic20_500MHz_1_rd0.push(stg19_stg19_update_0_write0);
}

inline hw_uint<16> ic20_500MHz_1_rd0_select(stg19_cache& stg19, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // ic20_500MHz_1_rd0 read pattern: { ic20_500MHz_1_update_0[d0, d1] -> stg19[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { ic20_500MHz_1_update_0[d0, d1] -> [20 + d1, 20 + d0, 22] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { stg19_update_0[d0, d1] -> [20 + d1, 20 + d0, 21] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  auto value_stg19_stg19_update_0_write0 = stg19.stg19_stg19_update_0_write0_to_ic20_500MHz_1_rd0.peek(/* one reader or all rams */ 0);
  return value_stg19_stg19_update_0_write0;
  return 0;
}

// # of bundles = 2
// ic20_500MHz_1_update_0_read
//	ic20_500MHz_1_rd0
inline hw_uint<16> stg19_ic20_500MHz_1_update_0_read_bundle_read(stg19_cache& stg19, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // ic20_500MHz_1_rd0

	hw_uint<16> result;
	hw_uint<16> ic20_500MHz_1_rd0_res = ic20_500MHz_1_rd0_select(stg19, d0, d1, dynamic_address);
	set_at<0, 16>(result, ic20_500MHz_1_rd0_res);
	return result;
}

// stg19_update_0_write
//	stg19_stg19_update_0_write0
inline void stg19_stg19_update_0_write_bundle_write(hw_uint<16>& stg19_update_0_write, stg19_cache& stg19, int d0, int d1, int dynamic_address) {
	hw_uint<16> stg19_stg19_update_0_write0_res = stg19_update_0_write.extract<0, 15>();
	stg19_stg19_update_0_write0_write(stg19_stg19_update_0_write0_res, stg19, d0, d1, dynamic_address);
}

struct stg2_stg2_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[-17, 1936], [0, 1095]}
	// Capacity: 1957
	// # of read delays: 5
  // 0, 1, 1954, 1955, 1956
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1952> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1953() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1954() {
		return f4;
	}

	inline hw_uint<16> peek_1955() {
		return f6;
	}

	inline hw_uint<16> peek_1956() {
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
    // cap: 1 reading from capacity: 1952
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1952 reading from capacity: 1
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
  // stg3_rd0 read pattern: { stg3_update_0[d0, d1] -> stg2[-1 + d0, d1] : -16 <= d0 <= 1935 and 0 <= d1 <= 1095 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -16 <= d0 <= 1935 and 0 <= d1 <= 1095 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -17 <= d0 <= 1936 and 0 <= d1 <= 1096 }
  auto value_stg2_stg2_update_0_write0 = stg2.stg2_stg2_update_0_write0_merged_banks_4.peek_1956();
  return value_stg2_stg2_update_0_write0;
  return 0;
}

inline hw_uint<16> stg3_rd1_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd1 read pattern: { stg3_update_0[d0, d1] -> stg2[d0, d1] : -16 <= d0 <= 1935 and 0 <= d1 <= 1095 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -16 <= d0 <= 1935 and 0 <= d1 <= 1095 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -17 <= d0 <= 1936 and 0 <= d1 <= 1096 }
  auto value_stg2_stg2_update_0_write0 = stg2.stg2_stg2_update_0_write0_merged_banks_4.peek_1955();
  return value_stg2_stg2_update_0_write0;
  return 0;
}

inline hw_uint<16> stg3_rd2_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd2 read pattern: { stg3_update_0[d0, d1] -> stg2[d0, 1 + d1] : -16 <= d0 <= 1935 and 0 <= d1 <= 1095 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -16 <= d0 <= 1935 and 0 <= d1 <= 1095 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -17 <= d0 <= 1936 and 0 <= d1 <= 1096 }
  auto value_stg2_stg2_update_0_write0 = stg2.stg2_stg2_update_0_write0_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write0;
  return 0;
}

inline hw_uint<16> stg3_rd3_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd3 read pattern: { stg3_update_0[d0, d1] -> stg2[1 + d0, d1] : -16 <= d0 <= 1935 and 0 <= d1 <= 1095 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -16 <= d0 <= 1935 and 0 <= d1 <= 1095 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -17 <= d0 <= 1936 and 0 <= d1 <= 1096 }
  auto value_stg2_stg2_update_0_write0 = stg2.stg2_stg2_update_0_write0_merged_banks_4.peek_1954();
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
	// RAM Box: {[-16, 1935], [0, 1094]}
	// Capacity: 1955
	// # of read delays: 5
  // 0, 1, 1952, 1953, 1954
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1950> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1951() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1952() {
		return f4;
	}

	inline hw_uint<16> peek_1953() {
		return f6;
	}

	inline hw_uint<16> peek_1954() {
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
    // cap: 1 reading from capacity: 1950
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1950 reading from capacity: 1
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
  // stg4_rd0 read pattern: { stg4_update_0[d0, d1] -> stg3[-1 + d0, d1] : -15 <= d0 <= 1934 and 0 <= d1 <= 1094 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -15 <= d0 <= 1934 and 0 <= d1 <= 1094 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -16 <= d0 <= 1935 and 0 <= d1 <= 1095 }
  auto value_stg3_stg3_update_0_write0 = stg3.stg3_stg3_update_0_write0_merged_banks_4.peek_1954();
  return value_stg3_stg3_update_0_write0;
  return 0;
}

inline hw_uint<16> stg4_rd1_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd1 read pattern: { stg4_update_0[d0, d1] -> stg3[d0, d1] : -15 <= d0 <= 1934 and 0 <= d1 <= 1094 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -15 <= d0 <= 1934 and 0 <= d1 <= 1094 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -16 <= d0 <= 1935 and 0 <= d1 <= 1095 }
  auto value_stg3_stg3_update_0_write0 = stg3.stg3_stg3_update_0_write0_merged_banks_4.peek_1953();
  return value_stg3_stg3_update_0_write0;
  return 0;
}

inline hw_uint<16> stg4_rd2_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd2 read pattern: { stg4_update_0[d0, d1] -> stg3[d0, 1 + d1] : -15 <= d0 <= 1934 and 0 <= d1 <= 1094 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -15 <= d0 <= 1934 and 0 <= d1 <= 1094 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -16 <= d0 <= 1935 and 0 <= d1 <= 1095 }
  auto value_stg3_stg3_update_0_write0 = stg3.stg3_stg3_update_0_write0_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write0;
  return 0;
}

inline hw_uint<16> stg4_rd3_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd3 read pattern: { stg4_update_0[d0, d1] -> stg3[1 + d0, d1] : -15 <= d0 <= 1934 and 0 <= d1 <= 1094 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -15 <= d0 <= 1934 and 0 <= d1 <= 1094 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -16 <= d0 <= 1935 and 0 <= d1 <= 1095 }
  auto value_stg3_stg3_update_0_write0 = stg3.stg3_stg3_update_0_write0_merged_banks_4.peek_1952();
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
	// RAM Box: {[-15, 1934], [0, 1093]}
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
  // stg5_rd0 read pattern: { stg5_update_0[d0, d1] -> stg4[-1 + d0, d1] : -14 <= d0 <= 1933 and 0 <= d1 <= 1093 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -14 <= d0 <= 1933 and 0 <= d1 <= 1093 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -15 <= d0 <= 1934 and 0 <= d1 <= 1094 }
  auto value_stg4_stg4_update_0_write0 = stg4.stg4_stg4_update_0_write0_merged_banks_4.peek_1952();
  return value_stg4_stg4_update_0_write0;
  return 0;
}

inline hw_uint<16> stg5_rd1_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd1 read pattern: { stg5_update_0[d0, d1] -> stg4[d0, d1] : -14 <= d0 <= 1933 and 0 <= d1 <= 1093 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -14 <= d0 <= 1933 and 0 <= d1 <= 1093 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -15 <= d0 <= 1934 and 0 <= d1 <= 1094 }
  auto value_stg4_stg4_update_0_write0 = stg4.stg4_stg4_update_0_write0_merged_banks_4.peek_1951();
  return value_stg4_stg4_update_0_write0;
  return 0;
}

inline hw_uint<16> stg5_rd2_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd2 read pattern: { stg5_update_0[d0, d1] -> stg4[d0, 1 + d1] : -14 <= d0 <= 1933 and 0 <= d1 <= 1093 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -14 <= d0 <= 1933 and 0 <= d1 <= 1093 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -15 <= d0 <= 1934 and 0 <= d1 <= 1094 }
  auto value_stg4_stg4_update_0_write0 = stg4.stg4_stg4_update_0_write0_merged_banks_4.peek_1();
  return value_stg4_stg4_update_0_write0;
  return 0;
}

inline hw_uint<16> stg5_rd3_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd3 read pattern: { stg5_update_0[d0, d1] -> stg4[1 + d0, d1] : -14 <= d0 <= 1933 and 0 <= d1 <= 1093 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -14 <= d0 <= 1933 and 0 <= d1 <= 1093 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -15 <= d0 <= 1934 and 0 <= d1 <= 1094 }
  auto value_stg4_stg4_update_0_write0 = stg4.stg4_stg4_update_0_write0_merged_banks_4.peek_1950();
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
	// RAM Box: {[-14, 1933], [0, 1092]}
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
  // stg6_rd0 read pattern: { stg6_update_0[d0, d1] -> stg5[-1 + d0, d1] : -13 <= d0 <= 1932 and 0 <= d1 <= 1092 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -13 <= d0 <= 1932 and 0 <= d1 <= 1092 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -14 <= d0 <= 1933 and 0 <= d1 <= 1093 }
  auto value_stg5_stg5_update_0_write0 = stg5.stg5_stg5_update_0_write0_merged_banks_4.peek_1950();
  return value_stg5_stg5_update_0_write0;
  return 0;
}

inline hw_uint<16> stg6_rd1_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd1 read pattern: { stg6_update_0[d0, d1] -> stg5[d0, d1] : -13 <= d0 <= 1932 and 0 <= d1 <= 1092 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -13 <= d0 <= 1932 and 0 <= d1 <= 1092 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -14 <= d0 <= 1933 and 0 <= d1 <= 1093 }
  auto value_stg5_stg5_update_0_write0 = stg5.stg5_stg5_update_0_write0_merged_banks_4.peek_1949();
  return value_stg5_stg5_update_0_write0;
  return 0;
}

inline hw_uint<16> stg6_rd2_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd2 read pattern: { stg6_update_0[d0, d1] -> stg5[d0, 1 + d1] : -13 <= d0 <= 1932 and 0 <= d1 <= 1092 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -13 <= d0 <= 1932 and 0 <= d1 <= 1092 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -14 <= d0 <= 1933 and 0 <= d1 <= 1093 }
  auto value_stg5_stg5_update_0_write0 = stg5.stg5_stg5_update_0_write0_merged_banks_4.peek_1();
  return value_stg5_stg5_update_0_write0;
  return 0;
}

inline hw_uint<16> stg6_rd3_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd3 read pattern: { stg6_update_0[d0, d1] -> stg5[1 + d0, d1] : -13 <= d0 <= 1932 and 0 <= d1 <= 1092 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -13 <= d0 <= 1932 and 0 <= d1 <= 1092 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -14 <= d0 <= 1933 and 0 <= d1 <= 1093 }
  auto value_stg5_stg5_update_0_write0 = stg5.stg5_stg5_update_0_write0_merged_banks_4.peek_1948();
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
	// RAM Box: {[-13, 1932], [0, 1091]}
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
  // stg7_rd0 read pattern: { stg7_update_0[d0, d1] -> stg6[-1 + d0, d1] : -12 <= d0 <= 1931 and 0 <= d1 <= 1091 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -12 <= d0 <= 1931 and 0 <= d1 <= 1091 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -13 <= d0 <= 1932 and 0 <= d1 <= 1092 }
  auto value_stg6_stg6_update_0_write0 = stg6.stg6_stg6_update_0_write0_merged_banks_4.peek_1948();
  return value_stg6_stg6_update_0_write0;
  return 0;
}

inline hw_uint<16> stg7_rd1_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd1 read pattern: { stg7_update_0[d0, d1] -> stg6[d0, d1] : -12 <= d0 <= 1931 and 0 <= d1 <= 1091 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -12 <= d0 <= 1931 and 0 <= d1 <= 1091 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -13 <= d0 <= 1932 and 0 <= d1 <= 1092 }
  auto value_stg6_stg6_update_0_write0 = stg6.stg6_stg6_update_0_write0_merged_banks_4.peek_1947();
  return value_stg6_stg6_update_0_write0;
  return 0;
}

inline hw_uint<16> stg7_rd2_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd2 read pattern: { stg7_update_0[d0, d1] -> stg6[d0, 1 + d1] : -12 <= d0 <= 1931 and 0 <= d1 <= 1091 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -12 <= d0 <= 1931 and 0 <= d1 <= 1091 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -13 <= d0 <= 1932 and 0 <= d1 <= 1092 }
  auto value_stg6_stg6_update_0_write0 = stg6.stg6_stg6_update_0_write0_merged_banks_4.peek_1();
  return value_stg6_stg6_update_0_write0;
  return 0;
}

inline hw_uint<16> stg7_rd3_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd3 read pattern: { stg7_update_0[d0, d1] -> stg6[1 + d0, d1] : -12 <= d0 <= 1931 and 0 <= d1 <= 1091 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -12 <= d0 <= 1931 and 0 <= d1 <= 1091 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -13 <= d0 <= 1932 and 0 <= d1 <= 1092 }
  auto value_stg6_stg6_update_0_write0 = stg6.stg6_stg6_update_0_write0_merged_banks_4.peek_1946();
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
	// RAM Box: {[-12, 1931], [0, 1090]}
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
  // stg8_rd0 read pattern: { stg8_update_0[d0, d1] -> stg7[-1 + d0, d1] : -11 <= d0 <= 1930 and 0 <= d1 <= 1090 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -11 <= d0 <= 1930 and 0 <= d1 <= 1090 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -12 <= d0 <= 1931 and 0 <= d1 <= 1091 }
  auto value_stg7_stg7_update_0_write0 = stg7.stg7_stg7_update_0_write0_merged_banks_4.peek_1946();
  return value_stg7_stg7_update_0_write0;
  return 0;
}

inline hw_uint<16> stg8_rd1_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd1 read pattern: { stg8_update_0[d0, d1] -> stg7[d0, d1] : -11 <= d0 <= 1930 and 0 <= d1 <= 1090 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -11 <= d0 <= 1930 and 0 <= d1 <= 1090 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -12 <= d0 <= 1931 and 0 <= d1 <= 1091 }
  auto value_stg7_stg7_update_0_write0 = stg7.stg7_stg7_update_0_write0_merged_banks_4.peek_1945();
  return value_stg7_stg7_update_0_write0;
  return 0;
}

inline hw_uint<16> stg8_rd2_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd2 read pattern: { stg8_update_0[d0, d1] -> stg7[d0, 1 + d1] : -11 <= d0 <= 1930 and 0 <= d1 <= 1090 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -11 <= d0 <= 1930 and 0 <= d1 <= 1090 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -12 <= d0 <= 1931 and 0 <= d1 <= 1091 }
  auto value_stg7_stg7_update_0_write0 = stg7.stg7_stg7_update_0_write0_merged_banks_4.peek_1();
  return value_stg7_stg7_update_0_write0;
  return 0;
}

inline hw_uint<16> stg8_rd3_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd3 read pattern: { stg8_update_0[d0, d1] -> stg7[1 + d0, d1] : -11 <= d0 <= 1930 and 0 <= d1 <= 1090 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -11 <= d0 <= 1930 and 0 <= d1 <= 1090 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -12 <= d0 <= 1931 and 0 <= d1 <= 1091 }
  auto value_stg7_stg7_update_0_write0 = stg7.stg7_stg7_update_0_write0_merged_banks_4.peek_1944();
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
	// RAM Box: {[-11, 1930], [0, 1089]}
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
  // stg9_rd0 read pattern: { stg9_update_0[d0, d1] -> stg8[-1 + d0, d1] : -10 <= d0 <= 1929 and 0 <= d1 <= 1089 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : -10 <= d0 <= 1929 and 0 <= d1 <= 1089 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -11 <= d0 <= 1930 and 0 <= d1 <= 1090 }
  auto value_stg8_stg8_update_0_write0 = stg8.stg8_stg8_update_0_write0_merged_banks_4.peek_1944();
  return value_stg8_stg8_update_0_write0;
  return 0;
}

inline hw_uint<16> stg9_rd1_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd1 read pattern: { stg9_update_0[d0, d1] -> stg8[d0, d1] : -10 <= d0 <= 1929 and 0 <= d1 <= 1089 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : -10 <= d0 <= 1929 and 0 <= d1 <= 1089 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -11 <= d0 <= 1930 and 0 <= d1 <= 1090 }
  auto value_stg8_stg8_update_0_write0 = stg8.stg8_stg8_update_0_write0_merged_banks_4.peek_1943();
  return value_stg8_stg8_update_0_write0;
  return 0;
}

inline hw_uint<16> stg9_rd2_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd2 read pattern: { stg9_update_0[d0, d1] -> stg8[d0, 1 + d1] : -10 <= d0 <= 1929 and 0 <= d1 <= 1089 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : -10 <= d0 <= 1929 and 0 <= d1 <= 1089 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -11 <= d0 <= 1930 and 0 <= d1 <= 1090 }
  auto value_stg8_stg8_update_0_write0 = stg8.stg8_stg8_update_0_write0_merged_banks_4.peek_1();
  return value_stg8_stg8_update_0_write0;
  return 0;
}

inline hw_uint<16> stg9_rd3_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd3 read pattern: { stg9_update_0[d0, d1] -> stg8[1 + d0, d1] : -10 <= d0 <= 1929 and 0 <= d1 <= 1089 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : -10 <= d0 <= 1929 and 0 <= d1 <= 1089 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -11 <= d0 <= 1930 and 0 <= d1 <= 1090 }
  auto value_stg8_stg8_update_0_write0 = stg8.stg8_stg8_update_0_write0_merged_banks_4.peek_1942();
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

struct stg9_cache {
  // # of banks: 1
  stg9_stg9_update_0_write0_merged_banks_4_cache stg9_stg9_update_0_write0_merged_banks_4;
};



inline void stg9_stg9_update_0_write0_write(hw_uint<16>& stg9_stg9_update_0_write0, stg9_cache& stg9, int d0, int d1, int dynamic_address) {
  stg9.stg9_stg9_update_0_write0_merged_banks_4.push(stg9_stg9_update_0_write0);
}

inline hw_uint<16> stg10_rd0_select(stg9_cache& stg9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_rd0 read pattern: { stg10_update_0[d0, d1] -> stg9[-1 + d0, d1] : -9 <= d0 <= 1928 and 0 <= d1 <= 1088 }
  // Read schedule : { stg10_update_0[d0, d1] -> [11 + d1, 11 + d0, 12] : -9 <= d0 <= 1928 and 0 <= d1 <= 1088 }
  // Write schedule: { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : -10 <= d0 <= 1929 and 0 <= d1 <= 1089 }
  auto value_stg9_stg9_update_0_write0 = stg9.stg9_stg9_update_0_write0_merged_banks_4.peek_1942();
  return value_stg9_stg9_update_0_write0;
  return 0;
}

inline hw_uint<16> stg10_rd1_select(stg9_cache& stg9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_rd1 read pattern: { stg10_update_0[d0, d1] -> stg9[d0, d1] : -9 <= d0 <= 1928 and 0 <= d1 <= 1088 }
  // Read schedule : { stg10_update_0[d0, d1] -> [11 + d1, 11 + d0, 12] : -9 <= d0 <= 1928 and 0 <= d1 <= 1088 }
  // Write schedule: { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : -10 <= d0 <= 1929 and 0 <= d1 <= 1089 }
  auto value_stg9_stg9_update_0_write0 = stg9.stg9_stg9_update_0_write0_merged_banks_4.peek_1941();
  return value_stg9_stg9_update_0_write0;
  return 0;
}

inline hw_uint<16> stg10_rd2_select(stg9_cache& stg9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_rd2 read pattern: { stg10_update_0[d0, d1] -> stg9[d0, 1 + d1] : -9 <= d0 <= 1928 and 0 <= d1 <= 1088 }
  // Read schedule : { stg10_update_0[d0, d1] -> [11 + d1, 11 + d0, 12] : -9 <= d0 <= 1928 and 0 <= d1 <= 1088 }
  // Write schedule: { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : -10 <= d0 <= 1929 and 0 <= d1 <= 1089 }
  auto value_stg9_stg9_update_0_write0 = stg9.stg9_stg9_update_0_write0_merged_banks_4.peek_1();
  return value_stg9_stg9_update_0_write0;
  return 0;
}

inline hw_uint<16> stg10_rd3_select(stg9_cache& stg9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_rd3 read pattern: { stg10_update_0[d0, d1] -> stg9[1 + d0, d1] : -9 <= d0 <= 1928 and 0 <= d1 <= 1088 }
  // Read schedule : { stg10_update_0[d0, d1] -> [11 + d1, 11 + d0, 12] : -9 <= d0 <= 1928 and 0 <= d1 <= 1088 }
  // Write schedule: { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : -10 <= d0 <= 1929 and 0 <= d1 <= 1089 }
  auto value_stg9_stg9_update_0_write0 = stg9.stg9_stg9_update_0_write0_merged_banks_4.peek_1940();
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

// Total re-use buffer capacity: 621760 bits


// Operation logic
inline void stg16_update_0(stg15_cache& stg15, stg16_cache& stg16, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg15
	auto stg15_0_c__0_value = stg15_stg16_update_0_read_bundle_read(stg15/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg16_generated_compute_unrolled_1(stg15_0_c__0_value);
	// Produce: stg16
	stg16_stg16_update_0_write_bundle_write(/* arg names */compute_result, stg16, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

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

inline void stg18_update_0(stg17_cache& stg17, stg18_cache& stg18, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg17
	auto stg17_0_c__0_value = stg17_stg18_update_0_read_bundle_read(stg17/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg18_generated_compute_unrolled_1(stg17_0_c__0_value);
	// Produce: stg18
	stg18_stg18_update_0_write_bundle_write(/* arg names */compute_result, stg18, d0, d1, 0);

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

inline void ic20_500MHz_1_update_0(stg19_cache& stg19, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */ic20_500MHz_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg19
	auto stg19_0_c__0_value = stg19_ic20_500MHz_1_update_0_read_bundle_read(stg19/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = ic20_500MHz_1_generated_compute_unrolled_1(stg19_0_c__0_value);
	// Produce: ic20_500MHz_1
	ic20_500MHz_1.write(compute_result);

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

inline void stg10_update_0(stg9_cache& stg9, stg10_cache& stg10, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg9
	auto stg9_0_c__0_value = stg9_stg10_update_0_read_bundle_read(stg9/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg10_generated_compute_unrolled_1(stg9_0_c__0_value);
	// Produce: stg10
	stg10_stg10_update_0_write_bundle_write(/* arg names */compute_result, stg10, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg11_update_0(stg10_cache& stg10, stg11_cache& stg11, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg10
	auto stg10_0_c__0_value = stg10_stg11_update_0_read_bundle_read(stg10/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg11_generated_compute_unrolled_1(stg10_0_c__0_value);
	// Produce: stg11
	stg11_stg11_update_0_write_bundle_write(/* arg names */compute_result, stg11, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg12_update_0(stg11_cache& stg11, stg12_cache& stg12, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg11
	auto stg11_0_c__0_value = stg11_stg12_update_0_read_bundle_read(stg11/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg12_generated_compute_unrolled_1(stg11_0_c__0_value);
	// Produce: stg12
	stg12_stg12_update_0_write_bundle_write(/* arg names */compute_result, stg12, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg13_update_0(stg12_cache& stg12, stg13_cache& stg13, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg12
	auto stg12_0_c__0_value = stg12_stg13_update_0_read_bundle_read(stg12/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg13_generated_compute_unrolled_1(stg12_0_c__0_value);
	// Produce: stg13
	stg13_stg13_update_0_write_bundle_write(/* arg names */compute_result, stg13, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg14_update_0(stg13_cache& stg13, stg14_cache& stg14, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg13
	auto stg13_0_c__0_value = stg13_stg14_update_0_read_bundle_read(stg13/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg14_generated_compute_unrolled_1(stg13_0_c__0_value);
	// Produce: stg14
	stg14_stg14_update_0_write_bundle_write(/* arg names */compute_result, stg14, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg15_update_0(stg14_cache& stg14, stg15_cache& stg15, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg14
	auto stg14_0_c__0_value = stg14_stg15_update_0_read_bundle_read(stg14/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg15_generated_compute_unrolled_1(stg14_0_c__0_value);
	// Produce: stg15
	stg15_stg15_update_0_write_bundle_write(/* arg names */compute_result, stg15, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg17_update_0(stg16_cache& stg16, stg17_cache& stg17, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg16
	auto stg16_0_c__0_value = stg16_stg17_update_0_read_bundle_read(stg16/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg17_generated_compute_unrolled_1(stg16_0_c__0_value);
	// Produce: stg17
	stg17_stg17_update_0_write_bundle_write(/* arg names */compute_result, stg17, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg19_update_0(stg18_cache& stg18, stg19_cache& stg19, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg18
	auto stg18_0_c__0_value = stg18_stg19_update_0_read_bundle_read(stg18/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg19_generated_compute_unrolled_1(stg18_0_c__0_value);
	// Produce: stg19
	stg19_stg19_update_0_write_bundle_write(/* arg names */compute_result, stg19, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void ic20_500MHz_1_opt(HWStream<hw_uint<16> >& /* get_args num ports = 1 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */ic20_500MHz_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("ic20_500MHz_1_opt_debug.csv");
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
  stg15_cache stg15;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg16_cache stg16;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg17_cache stg17;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg18_cache stg18;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg19_cache stg19;
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

// schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -12 <= d0 <= 1931 and 0 <= d1 <= 1091; stg14_update_0[d0, d1] -> [15 + d1, 15 + d0, 16] : -5 <= d0 <= 1924 and 0 <= d1 <= 1084; stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -11 <= d0 <= 1930 and 0 <= d1 <= 1090; ic20_500MHz_1_update_0[d0, d1] -> [20 + d1, 20 + d0, 22] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079; stg11_update_0[d0, d1] -> [12 + d1, 12 + d0, 13] : -8 <= d0 <= 1927 and 0 <= d1 <= 1087; stg15_update_0[d0, d1] -> [16 + d1, 16 + d0, 17] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083; stg19_update_0[d0, d1] -> [20 + d1, 20 + d0, 21] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079; stg13_update_0[d0, d1] -> [14 + d1, 14 + d0, 15] : -6 <= d0 <= 1925 and 0 <= d1 <= 1085; stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -14 <= d0 <= 1933 and 0 <= d1 <= 1093; stg18_update_0[d0, d1] -> [19 + d1, 19 + d0, 20] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080; stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : -10 <= d0 <= 1929 and 0 <= d1 <= 1089; stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -16 <= d0 <= 1935 and 0 <= d1 <= 1095; stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -17 <= d0 <= 1936 and 0 <= d1 <= 1096; stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -13 <= d0 <= 1932 and 0 <= d1 <= 1092; stg10_update_0[d0, d1] -> [11 + d1, 11 + d0, 12] : -9 <= d0 <= 1928 and 0 <= d1 <= 1088; stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -15 <= d0 <= 1934 and 0 <= d1 <= 1094; stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -19 <= d0 <= 1938 and 0 <= d1 <= 1098; stg12_update_0[d0, d1] -> [13 + d1, 13 + d0, 14] : -7 <= d0 <= 1926 and 0 <= d1 <= 1086; stg17_update_0[d0, d1] -> [18 + d1, 18 + d0, 19] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081; stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -18 <= d0 <= 1937 and 0 <= d1 <= 1097; in_update_0[d0, d1] -> [d1, d0, 1] : -20 <= d0 <= 1939 and 0 <= d1 <= 1099; stg16_update_0[d0, d1] -> [17 + d1, 17 + d0, 18] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
//   { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -12 <= d0 <= 1931 and 0 <= d1 <= 1091 }
// Condition for stg7_update_0(((-9 + i2 == 0) && (4 + i1 >= 0) && (1939 - i1 >= 0) && (-8 + i0 >= 0) && (1099 - i0 >= 0)))
//   { stg14_update_0[d0, d1] -> [15 + d1, 15 + d0, 16] : -5 <= d0 <= 1924 and 0 <= d1 <= 1084 }
// Condition for stg14_update_0(((-16 + i2 == 0) && (-10 + i1 >= 0) && (1939 - i1 >= 0) && (-15 + i0 >= 0) && (1099 - i0 >= 0)))
//   { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -11 <= d0 <= 1930 and 0 <= d1 <= 1090 }
// Condition for stg8_update_0(((-10 + i2 == 0) && (2 + i1 >= 0) && (1939 - i1 >= 0) && (-9 + i0 >= 0) && (1099 - i0 >= 0)))
//   { ic20_500MHz_1_update_0[d0, d1] -> [20 + d1, 20 + d0, 22] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
// Condition for ic20_500MHz_1_update_0(((-22 + i2 == 0) && (-20 + i1 >= 0) && (1939 - i1 >= 0) && (-20 + i0 >= 0) && (1099 - i0 >= 0)))
//   { stg11_update_0[d0, d1] -> [12 + d1, 12 + d0, 13] : -8 <= d0 <= 1927 and 0 <= d1 <= 1087 }
// Condition for stg11_update_0(((-13 + i2 == 0) && (-4 + i1 >= 0) && (1939 - i1 >= 0) && (-12 + i0 >= 0) && (1099 - i0 >= 0)))
//   { stg15_update_0[d0, d1] -> [16 + d1, 16 + d0, 17] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083 }
// Condition for stg15_update_0(((-17 + i2 == 0) && (-12 + i1 >= 0) && (1939 - i1 >= 0) && (-16 + i0 >= 0) && (1099 - i0 >= 0)))
//   { stg19_update_0[d0, d1] -> [20 + d1, 20 + d0, 21] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
// Condition for stg19_update_0(((-21 + i2 == 0) && (-20 + i1 >= 0) && (1939 - i1 >= 0) && (-20 + i0 >= 0) && (1099 - i0 >= 0)))
//   { stg13_update_0[d0, d1] -> [14 + d1, 14 + d0, 15] : -6 <= d0 <= 1925 and 0 <= d1 <= 1085 }
// Condition for stg13_update_0(((-15 + i2 == 0) && (-8 + i1 >= 0) && (1939 - i1 >= 0) && (-14 + i0 >= 0) && (1099 - i0 >= 0)))
//   { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -14 <= d0 <= 1933 and 0 <= d1 <= 1093 }
// Condition for stg5_update_0(((-7 + i2 == 0) && (8 + i1 >= 0) && (1939 - i1 >= 0) && (-6 + i0 >= 0) && (1099 - i0 >= 0)))
//   { stg18_update_0[d0, d1] -> [19 + d1, 19 + d0, 20] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080 }
// Condition for stg18_update_0(((-20 + i2 == 0) && (-18 + i1 >= 0) && (1939 - i1 >= 0) && (-19 + i0 >= 0) && (1099 - i0 >= 0)))
//   { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : -10 <= d0 <= 1929 and 0 <= d1 <= 1089 }
// Condition for stg9_update_0(((-11 + i2 == 0) && (i1 >= 0) && (1939 - i1 >= 0) && (-10 + i0 >= 0) && (1099 - i0 >= 0)))
//   { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -16 <= d0 <= 1935 and 0 <= d1 <= 1095 }
// Condition for stg3_update_0(((-5 + i2 == 0) && (12 + i1 >= 0) && (1939 - i1 >= 0) && (-4 + i0 >= 0) && (1099 - i0 >= 0)))
//   { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -17 <= d0 <= 1936 and 0 <= d1 <= 1096 }
// Condition for stg2_update_0(((-4 + i2 == 0) && (14 + i1 >= 0) && (1939 - i1 >= 0) && (-3 + i0 >= 0) && (1099 - i0 >= 0)))
//   { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -13 <= d0 <= 1932 and 0 <= d1 <= 1092 }
// Condition for stg6_update_0(((-8 + i2 == 0) && (6 + i1 >= 0) && (1939 - i1 >= 0) && (-7 + i0 >= 0) && (1099 - i0 >= 0)))
//   { stg10_update_0[d0, d1] -> [11 + d1, 11 + d0, 12] : -9 <= d0 <= 1928 and 0 <= d1 <= 1088 }
// Condition for stg10_update_0(((-12 + i2 == 0) && (-2 + i1 >= 0) && (1939 - i1 >= 0) && (-11 + i0 >= 0) && (1099 - i0 >= 0)))
//   { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -15 <= d0 <= 1934 and 0 <= d1 <= 1094 }
// Condition for stg4_update_0(((-6 + i2 == 0) && (10 + i1 >= 0) && (1939 - i1 >= 0) && (-5 + i0 >= 0) && (1099 - i0 >= 0)))
//   { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -19 <= d0 <= 1938 and 0 <= d1 <= 1098 }
// Condition for stg0_update_0(((-2 + i2 == 0) && (18 + i1 >= 0) && (1939 - i1 >= 0) && (-1 + i0 >= 0) && (1099 - i0 >= 0)))
//   { stg12_update_0[d0, d1] -> [13 + d1, 13 + d0, 14] : -7 <= d0 <= 1926 and 0 <= d1 <= 1086 }
// Condition for stg12_update_0(((-14 + i2 == 0) && (-6 + i1 >= 0) && (1939 - i1 >= 0) && (-13 + i0 >= 0) && (1099 - i0 >= 0)))
//   { stg17_update_0[d0, d1] -> [18 + d1, 18 + d0, 19] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081 }
// Condition for stg17_update_0(((-19 + i2 == 0) && (-16 + i1 >= 0) && (1939 - i1 >= 0) && (-18 + i0 >= 0) && (1099 - i0 >= 0)))
//   { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -18 <= d0 <= 1937 and 0 <= d1 <= 1097 }
// Condition for stg1_update_0(((-3 + i2 == 0) && (16 + i1 >= 0) && (1939 - i1 >= 0) && (-2 + i0 >= 0) && (1099 - i0 >= 0)))
//   { in_update_0[d0, d1] -> [d1, d0, 1] : -20 <= d0 <= 1939 and 0 <= d1 <= 1099 }
// Condition for in_update_0(((-1 + i2 == 0) && (20 + i1 >= 0) && (1939 - i1 >= 0) && (i0 >= 0) && (1099 - i0 >= 0)))
//   { stg16_update_0[d0, d1] -> [17 + d1, 17 + d0, 18] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
// Condition for stg16_update_0(((-18 + i2 == 0) && (-14 + i1 >= 0) && (1939 - i1 >= 0) && (-17 + i0 >= 0) && (1099 - i0 >= 0)))

  /*
  // Schedules...
    // ic20_500MHz_1_update_0 -> [1*d1*1*1 + 1*20,1*d0*1*1 + 1*20,1*22]
    // in_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
    // stg0_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
    // stg10_update_0 -> [1*d1*1*1 + 1*11,1*d0*1*1 + 1*11,1*12]
    // stg11_update_0 -> [1*d1*1*1 + 1*12,1*d0*1*1 + 1*12,1*13]
    // stg12_update_0 -> [1*d1*1*1 + 1*13,1*d0*1*1 + 1*13,1*14]
    // stg13_update_0 -> [1*d1*1*1 + 1*14,1*d0*1*1 + 1*14,1*15]
    // stg14_update_0 -> [1*d1*1*1 + 1*15,1*d0*1*1 + 1*15,1*16]
    // stg15_update_0 -> [1*d1*1*1 + 1*16,1*d0*1*1 + 1*16,1*17]
    // stg16_update_0 -> [1*d1*1*1 + 1*17,1*d0*1*1 + 1*17,1*18]
    // stg17_update_0 -> [1*d1*1*1 + 1*18,1*d0*1*1 + 1*18,1*19]
    // stg18_update_0 -> [1*d1*1*1 + 1*19,1*d0*1*1 + 1*19,1*20]
    // stg19_update_0 -> [1*d1*1*1 + 1*20,1*d0*1*1 + 1*20,1*21]
    // stg1_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*3]
    // stg2_update_0 -> [1*d1*1*1 + 1*3,1*d0*1*1 + 1*3,1*4]
    // stg3_update_0 -> [1*d1*1*1 + 1*4,1*d0*1*1 + 1*4,1*5]
    // stg4_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*6]
    // stg5_update_0 -> [1*d1*1*1 + 1*6,1*d0*1*1 + 1*6,1*7]
    // stg6_update_0 -> [1*d1*1*1 + 1*7,1*d0*1*1 + 1*7,1*8]
    // stg7_update_0 -> [1*d1*1*1 + 1*8,1*d0*1*1 + 1*8,1*9]
    // stg8_update_0 -> [1*d1*1*1 + 1*9,1*d0*1*1 + 1*9,1*10]
    // stg9_update_0 -> [1*d1*1*1 + 1*10,1*d0*1*1 + 1*10,1*11]
for (int c0 = 0; c0 <= 1099; c0++) {
  for (int c1 = -20; c1 <= 1939; c1++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

    if ((-20 <= c1 && c1 <= 1939) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1099) && ((c0 - 0) % 1 == 0)) {
      in_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((-18 <= c1 && c1 <= 1939) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1099) && ((c0 - 1) % 1 == 0)) {
      stg0_update_0((c1 - 1) / 1, (c0 - 1) / 1);
    }

    if ((-16 <= c1 && c1 <= 1939) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 1099) && ((c0 - 2) % 1 == 0)) {
      stg1_update_0((c1 - 2) / 1, (c0 - 2) / 1);
    }

    if ((-14 <= c1 && c1 <= 1939) && ((c1 - 3) % 1 == 0) && (3 <= c0 && c0 <= 1099) && ((c0 - 3) % 1 == 0)) {
      stg2_update_0((c1 - 3) / 1, (c0 - 3) / 1);
    }

    if ((-12 <= c1 && c1 <= 1939) && ((c1 - 4) % 1 == 0) && (4 <= c0 && c0 <= 1099) && ((c0 - 4) % 1 == 0)) {
      stg3_update_0((c1 - 4) / 1, (c0 - 4) / 1);
    }

    if ((-10 <= c1 && c1 <= 1939) && ((c1 - 5) % 1 == 0) && (5 <= c0 && c0 <= 1099) && ((c0 - 5) % 1 == 0)) {
      stg4_update_0((c1 - 5) / 1, (c0 - 5) / 1);
    }

    if ((-8 <= c1 && c1 <= 1939) && ((c1 - 6) % 1 == 0) && (6 <= c0 && c0 <= 1099) && ((c0 - 6) % 1 == 0)) {
      stg5_update_0((c1 - 6) / 1, (c0 - 6) / 1);
    }

    if ((-6 <= c1 && c1 <= 1939) && ((c1 - 7) % 1 == 0) && (7 <= c0 && c0 <= 1099) && ((c0 - 7) % 1 == 0)) {
      stg6_update_0((c1 - 7) / 1, (c0 - 7) / 1);
    }

    if ((-4 <= c1 && c1 <= 1939) && ((c1 - 8) % 1 == 0) && (8 <= c0 && c0 <= 1099) && ((c0 - 8) % 1 == 0)) {
      stg7_update_0((c1 - 8) / 1, (c0 - 8) / 1);
    }

    if ((-2 <= c1 && c1 <= 1939) && ((c1 - 9) % 1 == 0) && (9 <= c0 && c0 <= 1099) && ((c0 - 9) % 1 == 0)) {
      stg8_update_0((c1 - 9) / 1, (c0 - 9) / 1);
    }

    if ((0 <= c1 && c1 <= 1939) && ((c1 - 10) % 1 == 0) && (10 <= c0 && c0 <= 1099) && ((c0 - 10) % 1 == 0)) {
      stg9_update_0((c1 - 10) / 1, (c0 - 10) / 1);
    }

    if ((2 <= c1 && c1 <= 1939) && ((c1 - 11) % 1 == 0) && (11 <= c0 && c0 <= 1099) && ((c0 - 11) % 1 == 0)) {
      stg10_update_0((c1 - 11) / 1, (c0 - 11) / 1);
    }

    if ((4 <= c1 && c1 <= 1939) && ((c1 - 12) % 1 == 0) && (12 <= c0 && c0 <= 1099) && ((c0 - 12) % 1 == 0)) {
      stg11_update_0((c1 - 12) / 1, (c0 - 12) / 1);
    }

    if ((6 <= c1 && c1 <= 1939) && ((c1 - 13) % 1 == 0) && (13 <= c0 && c0 <= 1099) && ((c0 - 13) % 1 == 0)) {
      stg12_update_0((c1 - 13) / 1, (c0 - 13) / 1);
    }

    if ((8 <= c1 && c1 <= 1939) && ((c1 - 14) % 1 == 0) && (14 <= c0 && c0 <= 1099) && ((c0 - 14) % 1 == 0)) {
      stg13_update_0((c1 - 14) / 1, (c0 - 14) / 1);
    }

    if ((10 <= c1 && c1 <= 1939) && ((c1 - 15) % 1 == 0) && (15 <= c0 && c0 <= 1099) && ((c0 - 15) % 1 == 0)) {
      stg14_update_0((c1 - 15) / 1, (c0 - 15) / 1);
    }

    if ((12 <= c1 && c1 <= 1939) && ((c1 - 16) % 1 == 0) && (16 <= c0 && c0 <= 1099) && ((c0 - 16) % 1 == 0)) {
      stg15_update_0((c1 - 16) / 1, (c0 - 16) / 1);
    }

    if ((14 <= c1 && c1 <= 1939) && ((c1 - 17) % 1 == 0) && (17 <= c0 && c0 <= 1099) && ((c0 - 17) % 1 == 0)) {
      stg16_update_0((c1 - 17) / 1, (c0 - 17) / 1);
    }

    if ((16 <= c1 && c1 <= 1939) && ((c1 - 18) % 1 == 0) && (18 <= c0 && c0 <= 1099) && ((c0 - 18) % 1 == 0)) {
      stg17_update_0((c1 - 18) / 1, (c0 - 18) / 1);
    }

    if ((18 <= c1 && c1 <= 1939) && ((c1 - 19) % 1 == 0) && (19 <= c0 && c0 <= 1099) && ((c0 - 19) % 1 == 0)) {
      stg18_update_0((c1 - 19) / 1, (c0 - 19) / 1);
    }

    if ((20 <= c1 && c1 <= 1939) && ((c1 - 20) % 1 == 0) && (20 <= c0 && c0 <= 1099) && ((c0 - 20) % 1 == 0)) {
      stg19_update_0((c1 - 20) / 1, (c0 - 20) / 1);
    }

    if ((20 <= c1 && c1 <= 1939) && ((c1 - 20) % 1 == 0) && (20 <= c0 && c0 <= 1099) && ((c0 - 20) % 1 == 0)) {
      ic20_500MHz_1_update_0((c1 - 20) / 1, (c0 - 20) / 1);
    }

  }
}

  */
	  // Schedules...
	    // ic20_500MHz_1_update_0 -> [1*d1*1*1 + 1*20,1*d0*1*1 + 1*20,1*22]
	    // in_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	    // stg0_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
	    // stg10_update_0 -> [1*d1*1*1 + 1*11,1*d0*1*1 + 1*11,1*12]
	    // stg11_update_0 -> [1*d1*1*1 + 1*12,1*d0*1*1 + 1*12,1*13]
	    // stg12_update_0 -> [1*d1*1*1 + 1*13,1*d0*1*1 + 1*13,1*14]
	    // stg13_update_0 -> [1*d1*1*1 + 1*14,1*d0*1*1 + 1*14,1*15]
	    // stg14_update_0 -> [1*d1*1*1 + 1*15,1*d0*1*1 + 1*15,1*16]
	    // stg15_update_0 -> [1*d1*1*1 + 1*16,1*d0*1*1 + 1*16,1*17]
	    // stg16_update_0 -> [1*d1*1*1 + 1*17,1*d0*1*1 + 1*17,1*18]
	    // stg17_update_0 -> [1*d1*1*1 + 1*18,1*d0*1*1 + 1*18,1*19]
	    // stg18_update_0 -> [1*d1*1*1 + 1*19,1*d0*1*1 + 1*19,1*20]
	    // stg19_update_0 -> [1*d1*1*1 + 1*20,1*d0*1*1 + 1*20,1*21]
	    // stg1_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*3]
	    // stg2_update_0 -> [1*d1*1*1 + 1*3,1*d0*1*1 + 1*3,1*4]
	    // stg3_update_0 -> [1*d1*1*1 + 1*4,1*d0*1*1 + 1*4,1*5]
	    // stg4_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*6]
	    // stg5_update_0 -> [1*d1*1*1 + 1*6,1*d0*1*1 + 1*6,1*7]
	    // stg6_update_0 -> [1*d1*1*1 + 1*7,1*d0*1*1 + 1*7,1*8]
	    // stg7_update_0 -> [1*d1*1*1 + 1*8,1*d0*1*1 + 1*8,1*9]
	    // stg8_update_0 -> [1*d1*1*1 + 1*9,1*d0*1*1 + 1*9,1*10]
	    // stg9_update_0 -> [1*d1*1*1 + 1*10,1*d0*1*1 + 1*10,1*11]
	for (int c0 = 0; c0 <= 1099; c0++) {
	  for (int c1 = -20; c1 <= 1939; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-20 <= c1 && c1 <= 1939) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1099) && ((c0 - 0) % 1 == 0)) {
	      in_update_0(in_off_chip /* buf name */, in, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((-18 <= c1 && c1 <= 1939) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1099) && ((c0 - 1) % 1 == 0)) {
	      stg0_update_0(in /* buf name */, stg0, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((-16 <= c1 && c1 <= 1939) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 1099) && ((c0 - 2) % 1 == 0)) {
	      stg1_update_0(stg0 /* buf name */, stg1, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((-14 <= c1 && c1 <= 1939) && ((c1 - 3) % 1 == 0) && (3 <= c0 && c0 <= 1099) && ((c0 - 3) % 1 == 0)) {
	      stg2_update_0(stg1 /* buf name */, stg2, (c1 - 3) / 1, (c0 - 3) / 1);
	    }
	
	    if ((-12 <= c1 && c1 <= 1939) && ((c1 - 4) % 1 == 0) && (4 <= c0 && c0 <= 1099) && ((c0 - 4) % 1 == 0)) {
	      stg3_update_0(stg2 /* buf name */, stg3, (c1 - 4) / 1, (c0 - 4) / 1);
	    }
	
	    if ((-10 <= c1 && c1 <= 1939) && ((c1 - 5) % 1 == 0) && (5 <= c0 && c0 <= 1099) && ((c0 - 5) % 1 == 0)) {
	      stg4_update_0(stg3 /* buf name */, stg4, (c1 - 5) / 1, (c0 - 5) / 1);
	    }
	
	    if ((-8 <= c1 && c1 <= 1939) && ((c1 - 6) % 1 == 0) && (6 <= c0 && c0 <= 1099) && ((c0 - 6) % 1 == 0)) {
	      stg5_update_0(stg4 /* buf name */, stg5, (c1 - 6) / 1, (c0 - 6) / 1);
	    }
	
	    if ((-6 <= c1 && c1 <= 1939) && ((c1 - 7) % 1 == 0) && (7 <= c0 && c0 <= 1099) && ((c0 - 7) % 1 == 0)) {
	      stg6_update_0(stg5 /* buf name */, stg6, (c1 - 7) / 1, (c0 - 7) / 1);
	    }
	
	    if ((-4 <= c1 && c1 <= 1939) && ((c1 - 8) % 1 == 0) && (8 <= c0 && c0 <= 1099) && ((c0 - 8) % 1 == 0)) {
	      stg7_update_0(stg6 /* buf name */, stg7, (c1 - 8) / 1, (c0 - 8) / 1);
	    }
	
	    if ((-2 <= c1 && c1 <= 1939) && ((c1 - 9) % 1 == 0) && (9 <= c0 && c0 <= 1099) && ((c0 - 9) % 1 == 0)) {
	      stg8_update_0(stg7 /* buf name */, stg8, (c1 - 9) / 1, (c0 - 9) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 1939) && ((c1 - 10) % 1 == 0) && (10 <= c0 && c0 <= 1099) && ((c0 - 10) % 1 == 0)) {
	      stg9_update_0(stg8 /* buf name */, stg9, (c1 - 10) / 1, (c0 - 10) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 1939) && ((c1 - 11) % 1 == 0) && (11 <= c0 && c0 <= 1099) && ((c0 - 11) % 1 == 0)) {
	      stg10_update_0(stg9 /* buf name */, stg10, (c1 - 11) / 1, (c0 - 11) / 1);
	    }
	
	    if ((4 <= c1 && c1 <= 1939) && ((c1 - 12) % 1 == 0) && (12 <= c0 && c0 <= 1099) && ((c0 - 12) % 1 == 0)) {
	      stg11_update_0(stg10 /* buf name */, stg11, (c1 - 12) / 1, (c0 - 12) / 1);
	    }
	
	    if ((6 <= c1 && c1 <= 1939) && ((c1 - 13) % 1 == 0) && (13 <= c0 && c0 <= 1099) && ((c0 - 13) % 1 == 0)) {
	      stg12_update_0(stg11 /* buf name */, stg12, (c1 - 13) / 1, (c0 - 13) / 1);
	    }
	
	    if ((8 <= c1 && c1 <= 1939) && ((c1 - 14) % 1 == 0) && (14 <= c0 && c0 <= 1099) && ((c0 - 14) % 1 == 0)) {
	      stg13_update_0(stg12 /* buf name */, stg13, (c1 - 14) / 1, (c0 - 14) / 1);
	    }
	
	    if ((10 <= c1 && c1 <= 1939) && ((c1 - 15) % 1 == 0) && (15 <= c0 && c0 <= 1099) && ((c0 - 15) % 1 == 0)) {
	      stg14_update_0(stg13 /* buf name */, stg14, (c1 - 15) / 1, (c0 - 15) / 1);
	    }
	
	    if ((12 <= c1 && c1 <= 1939) && ((c1 - 16) % 1 == 0) && (16 <= c0 && c0 <= 1099) && ((c0 - 16) % 1 == 0)) {
	      stg15_update_0(stg14 /* buf name */, stg15, (c1 - 16) / 1, (c0 - 16) / 1);
	    }
	
	    if ((14 <= c1 && c1 <= 1939) && ((c1 - 17) % 1 == 0) && (17 <= c0 && c0 <= 1099) && ((c0 - 17) % 1 == 0)) {
	      stg16_update_0(stg15 /* buf name */, stg16, (c1 - 17) / 1, (c0 - 17) / 1);
	    }
	
	    if ((16 <= c1 && c1 <= 1939) && ((c1 - 18) % 1 == 0) && (18 <= c0 && c0 <= 1099) && ((c0 - 18) % 1 == 0)) {
	      stg17_update_0(stg16 /* buf name */, stg17, (c1 - 18) / 1, (c0 - 18) / 1);
	    }
	
	    if ((18 <= c1 && c1 <= 1939) && ((c1 - 19) % 1 == 0) && (19 <= c0 && c0 <= 1099) && ((c0 - 19) % 1 == 0)) {
	      stg18_update_0(stg17 /* buf name */, stg18, (c1 - 19) / 1, (c0 - 19) / 1);
	    }
	
	    if ((20 <= c1 && c1 <= 1939) && ((c1 - 20) % 1 == 0) && (20 <= c0 && c0 <= 1099) && ((c0 - 20) % 1 == 0)) {
	      stg19_update_0(stg18 /* buf name */, stg19, (c1 - 20) / 1, (c0 - 20) / 1);
	    }
	
	    if ((20 <= c1 && c1 <= 1939) && ((c1 - 20) % 1 == 0) && (20 <= c0 && c0 <= 1099) && ((c0 - 20) % 1 == 0)) {
	      ic20_500MHz_1_update_0(stg19 /* buf name */, ic20_500MHz_1, (c1 - 20) / 1, (c0 - 20) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void ic20_500MHz_1_opt_wrapper(HWStream<hw_uint<16> >& /* get_args num ports = 1 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */ic20_500MHz_1, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    ic20_500MHz_1_opt(in_off_chip, ic20_500MHz_1);
  }
}
#ifdef __VIVADO_SYNTH__
  // { ic20_500MHz_1_update_0[root = 0, ic20_500MHz_1_0, ic20_500MHz_1_1] -> ic20_500MHz_1[0, 0] : 0 <= ic20_500MHz_1_0 <= 1919 and 0 <= ic20_500MHz_1_1 <= 1079 }
const int ic20_500MHz_1_update_0_write_pipe0_num_transfers = 2073600;
  // { in_update_0[root = 0, in_0, in_1] -> in_off_chip[0, 0] : -20 <= in_0 <= 1939 and 0 <= in_1 <= 1099 }
const int in_update_0_read_pipe0_num_transfers = 2156000;


extern "C" {

void ic20_500MHz_1_opt_accel(hw_uint<16>* in_update_0_read_pipe0, hw_uint<16>* ic20_500MHz_1_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = ic20_500MHz_1_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = ic20_500MHz_1_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > in_update_0_read_pipe0_channel;
  static HWStream<hw_uint<16> > ic20_500MHz_1_update_0_write_pipe0_channel;

  burst_read<16>(in_update_0_read_pipe0, in_update_0_read_pipe0_channel, in_update_0_read_pipe0_num_transfers*size);

  ic20_500MHz_1_opt_wrapper(in_update_0_read_pipe0_channel, ic20_500MHz_1_update_0_write_pipe0_channel, size);

  burst_write<16>(ic20_500MHz_1_update_0_write_pipe0, ic20_500MHz_1_update_0_write_pipe0_channel, ic20_500MHz_1_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void ic20_500MHz_1_opt_rdai(HWStream<hw_uint<16> >& in_update_0_read_pipe0, HWStream<hw_uint<16> >&  ic20_500MHz_1_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = ic20_500MHz_1_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  ic20_500MHz_1_opt(in_update_0_read_pipe0, ic20_500MHz_1_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

