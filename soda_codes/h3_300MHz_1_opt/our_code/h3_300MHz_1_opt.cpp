#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: h3_300MHz_1_opt_compute_units.h
#include "h3_300MHz_1_opt_compute_units.h"

struct h3_0_h3_0_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-9, 1032], [-8, 1031]}
	// Capacity: 2086
	// # of read delays: 6
  // 0, 1, 1042, 1043, 1044, 2085
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 1040> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 1040> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_1041() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_1042() {
		return f4;
	}

	inline hw_uint<32>  peek_1043() {
		return f6;
	}

	inline hw_uint<32>  peek_1044() {
		return f8;
	}

	inline hw_uint<32>  peek_2084() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_2085() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1040
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1040 reading from capacity: 1
    f9.push(f8);
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
    // cap: 1 reading from capacity: 1040
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1040 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_0_cache {
  // # of banks: 1
  h3_0_h3_0_update_0_write0_merged_banks_5_cache h3_0_h3_0_update_0_write0_merged_banks_5;
};



inline void h3_0_h3_0_update_0_write0_write(hw_uint<32> & h3_0_h3_0_update_0_write0, h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write0_merged_banks_5.push(h3_0_h3_0_update_0_write0);
}

inline hw_uint<32>  h3_1_rd0_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd0 read pattern: { h3_1_update_0[d0, d1] -> h3_0[-1 + d0, d1] : -8 <= d0 <= 1031 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 1031 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 1032 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_5.peek_1044();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd1_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd1 read pattern: { h3_1_update_0[d0, d1] -> h3_0[d0, -1 + d1] : -8 <= d0 <= 1031 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 1031 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 1032 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_5.peek_2085();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd2_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd2 read pattern: { h3_1_update_0[d0, d1] -> h3_0[d0, d1] : -8 <= d0 <= 1031 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 1031 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 1032 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_5.peek_1043();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd3_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd3 read pattern: { h3_1_update_0[d0, d1] -> h3_0[d0, 1 + d1] : -8 <= d0 <= 1031 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 1031 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 1032 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_5.peek_1();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd4_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd4 read pattern: { h3_1_update_0[d0, d1] -> h3_0[1 + d0, d1] : -8 <= d0 <= 1031 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 1031 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 1032 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_5.peek_1042();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

// # of bundles = 2
// h3_0_update_0_write
//	h3_0_h3_0_update_0_write0
inline void h3_0_h3_0_update_0_write_bundle_write(hw_uint<32>& h3_0_update_0_write, h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_0_h3_0_update_0_write0_res = h3_0_update_0_write.extract<0, 31>();
	h3_0_h3_0_update_0_write0_write(h3_0_h3_0_update_0_write0_res, h3_0, d0, d1, dynamic_address);
}

// h3_1_update_0_read
//	h3_1_rd0
//	h3_1_rd1
//	h3_1_rd2
//	h3_1_rd3
//	h3_1_rd4
inline hw_uint<160> h3_0_h3_1_update_0_read_bundle_read(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 5
    // h3_1_rd0
    // h3_1_rd1
    // h3_1_rd2
    // h3_1_rd3
    // h3_1_rd4

	hw_uint<160> result;
	hw_uint<32>  h3_1_rd0_res = h3_1_rd0_select(h3_0, d0, d1, dynamic_address);
	set_at<0, 160>(result, h3_1_rd0_res);
	hw_uint<32>  h3_1_rd1_res = h3_1_rd1_select(h3_0, d0, d1, dynamic_address);
	set_at<32, 160>(result, h3_1_rd1_res);
	hw_uint<32>  h3_1_rd2_res = h3_1_rd2_select(h3_0, d0, d1, dynamic_address);
	set_at<64, 160>(result, h3_1_rd2_res);
	hw_uint<32>  h3_1_rd3_res = h3_1_rd3_select(h3_0, d0, d1, dynamic_address);
	set_at<96, 160>(result, h3_1_rd3_res);
	hw_uint<32>  h3_1_rd4_res = h3_1_rd4_select(h3_0, d0, d1, dynamic_address);
	set_at<128, 160>(result, h3_1_rd4_res);
	return result;
}

struct h3_1_h3_1_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-8, 1031], [-7, 1030]}
	// Capacity: 2082
	// # of read delays: 6
  // 0, 1, 1040, 1041, 1042, 2081
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 1038> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 1038> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_1039() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_1040() {
		return f4;
	}

	inline hw_uint<32>  peek_1041() {
		return f6;
	}

	inline hw_uint<32>  peek_1042() {
		return f8;
	}

	inline hw_uint<32>  peek_2080() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_2081() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1038
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1038 reading from capacity: 1
    f9.push(f8);
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
    // cap: 1 reading from capacity: 1038
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1038 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_1_cache {
  // # of banks: 1
  h3_1_h3_1_update_0_write0_merged_banks_5_cache h3_1_h3_1_update_0_write0_merged_banks_5;
};



inline void h3_1_h3_1_update_0_write0_write(hw_uint<32> & h3_1_h3_1_update_0_write0, h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write0_merged_banks_5.push(h3_1_h3_1_update_0_write0);
}

inline hw_uint<32>  h3_2_rd0_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd0 read pattern: { h3_2_update_0[d0, d1] -> h3_1[-1 + d0, d1] : -7 <= d0 <= 1030 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 1030 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 1031 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_5.peek_1042();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd1_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd1 read pattern: { h3_2_update_0[d0, d1] -> h3_1[d0, -1 + d1] : -7 <= d0 <= 1030 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 1030 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 1031 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_5.peek_2081();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd2_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd2 read pattern: { h3_2_update_0[d0, d1] -> h3_1[d0, d1] : -7 <= d0 <= 1030 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 1030 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 1031 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_5.peek_1041();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd3_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd3 read pattern: { h3_2_update_0[d0, d1] -> h3_1[d0, 1 + d1] : -7 <= d0 <= 1030 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 1030 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 1031 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_5.peek_1();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd4_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd4 read pattern: { h3_2_update_0[d0, d1] -> h3_1[1 + d0, d1] : -7 <= d0 <= 1030 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 1030 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 1031 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_5.peek_1040();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// h3_1_update_0_write
//	h3_1_h3_1_update_0_write0
inline void h3_1_h3_1_update_0_write_bundle_write(hw_uint<32>& h3_1_update_0_write, h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_1_h3_1_update_0_write0_res = h3_1_update_0_write.extract<0, 31>();
	h3_1_h3_1_update_0_write0_write(h3_1_h3_1_update_0_write0_res, h3_1, d0, d1, dynamic_address);
}

// h3_2_update_0_read
//	h3_2_rd0
//	h3_2_rd1
//	h3_2_rd2
//	h3_2_rd3
//	h3_2_rd4
inline hw_uint<160> h3_1_h3_2_update_0_read_bundle_read(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 5
    // h3_2_rd0
    // h3_2_rd1
    // h3_2_rd2
    // h3_2_rd3
    // h3_2_rd4

	hw_uint<160> result;
	hw_uint<32>  h3_2_rd0_res = h3_2_rd0_select(h3_1, d0, d1, dynamic_address);
	set_at<0, 160>(result, h3_2_rd0_res);
	hw_uint<32>  h3_2_rd1_res = h3_2_rd1_select(h3_1, d0, d1, dynamic_address);
	set_at<32, 160>(result, h3_2_rd1_res);
	hw_uint<32>  h3_2_rd2_res = h3_2_rd2_select(h3_1, d0, d1, dynamic_address);
	set_at<64, 160>(result, h3_2_rd2_res);
	hw_uint<32>  h3_2_rd3_res = h3_2_rd3_select(h3_1, d0, d1, dynamic_address);
	set_at<96, 160>(result, h3_2_rd3_res);
	hw_uint<32>  h3_2_rd4_res = h3_2_rd4_select(h3_1, d0, d1, dynamic_address);
	set_at<128, 160>(result, h3_2_rd4_res);
	return result;
}

struct h3_2_h3_2_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-7, 1030], [-6, 1029]}
	// Capacity: 2078
	// # of read delays: 6
  // 0, 1, 1038, 1039, 1040, 2077
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 1036> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 1036> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_1037() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_1038() {
		return f4;
	}

	inline hw_uint<32>  peek_1039() {
		return f6;
	}

	inline hw_uint<32>  peek_1040() {
		return f8;
	}

	inline hw_uint<32>  peek_2076() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_2077() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1036
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1036 reading from capacity: 1
    f9.push(f8);
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
    // cap: 1 reading from capacity: 1036
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1036 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_2_cache {
  // # of banks: 1
  h3_2_h3_2_update_0_write0_merged_banks_5_cache h3_2_h3_2_update_0_write0_merged_banks_5;
};



inline void h3_2_h3_2_update_0_write0_write(hw_uint<32> & h3_2_h3_2_update_0_write0, h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write0_merged_banks_5.push(h3_2_h3_2_update_0_write0);
}

inline hw_uint<32>  h3_3_rd0_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd0 read pattern: { h3_3_update_0[d0, d1] -> h3_2[-1 + d0, d1] : -6 <= d0 <= 1029 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 1029 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 1030 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_5.peek_1040();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd1_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd1 read pattern: { h3_3_update_0[d0, d1] -> h3_2[d0, -1 + d1] : -6 <= d0 <= 1029 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 1029 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 1030 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_5.peek_2077();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd2_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd2 read pattern: { h3_3_update_0[d0, d1] -> h3_2[d0, d1] : -6 <= d0 <= 1029 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 1029 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 1030 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_5.peek_1039();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd3_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd3 read pattern: { h3_3_update_0[d0, d1] -> h3_2[d0, 1 + d1] : -6 <= d0 <= 1029 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 1029 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 1030 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_5.peek_1();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd4_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd4 read pattern: { h3_3_update_0[d0, d1] -> h3_2[1 + d0, d1] : -6 <= d0 <= 1029 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 1029 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 1030 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_5.peek_1038();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// h3_2_update_0_write
//	h3_2_h3_2_update_0_write0
inline void h3_2_h3_2_update_0_write_bundle_write(hw_uint<32>& h3_2_update_0_write, h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_2_h3_2_update_0_write0_res = h3_2_update_0_write.extract<0, 31>();
	h3_2_h3_2_update_0_write0_write(h3_2_h3_2_update_0_write0_res, h3_2, d0, d1, dynamic_address);
}

// h3_3_update_0_read
//	h3_3_rd0
//	h3_3_rd1
//	h3_3_rd2
//	h3_3_rd3
//	h3_3_rd4
inline hw_uint<160> h3_2_h3_3_update_0_read_bundle_read(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 5
    // h3_3_rd0
    // h3_3_rd1
    // h3_3_rd2
    // h3_3_rd3
    // h3_3_rd4

	hw_uint<160> result;
	hw_uint<32>  h3_3_rd0_res = h3_3_rd0_select(h3_2, d0, d1, dynamic_address);
	set_at<0, 160>(result, h3_3_rd0_res);
	hw_uint<32>  h3_3_rd1_res = h3_3_rd1_select(h3_2, d0, d1, dynamic_address);
	set_at<32, 160>(result, h3_3_rd1_res);
	hw_uint<32>  h3_3_rd2_res = h3_3_rd2_select(h3_2, d0, d1, dynamic_address);
	set_at<64, 160>(result, h3_3_rd2_res);
	hw_uint<32>  h3_3_rd3_res = h3_3_rd3_select(h3_2, d0, d1, dynamic_address);
	set_at<96, 160>(result, h3_3_rd3_res);
	hw_uint<32>  h3_3_rd4_res = h3_3_rd4_select(h3_2, d0, d1, dynamic_address);
	set_at<128, 160>(result, h3_3_rd4_res);
	return result;
}

struct h3_3_h3_3_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-6, 1029], [-5, 1028]}
	// Capacity: 2074
	// # of read delays: 6
  // 0, 1, 1036, 1037, 1038, 2073
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 1034> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 1034> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_1035() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_1036() {
		return f4;
	}

	inline hw_uint<32>  peek_1037() {
		return f6;
	}

	inline hw_uint<32>  peek_1038() {
		return f8;
	}

	inline hw_uint<32>  peek_2072() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_2073() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1034
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1034 reading from capacity: 1
    f9.push(f8);
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
    // cap: 1 reading from capacity: 1034
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1034 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_3_cache {
  // # of banks: 1
  h3_3_h3_3_update_0_write0_merged_banks_5_cache h3_3_h3_3_update_0_write0_merged_banks_5;
};



inline void h3_3_h3_3_update_0_write0_write(hw_uint<32> & h3_3_h3_3_update_0_write0, h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write0_merged_banks_5.push(h3_3_h3_3_update_0_write0);
}

inline hw_uint<32>  h3_4_rd0_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd0 read pattern: { h3_4_update_0[d0, d1] -> h3_3[-1 + d0, d1] : -5 <= d0 <= 1028 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 1028 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 1029 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_5.peek_1038();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd1_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd1 read pattern: { h3_4_update_0[d0, d1] -> h3_3[d0, -1 + d1] : -5 <= d0 <= 1028 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 1028 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 1029 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_5.peek_2073();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd2_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd2 read pattern: { h3_4_update_0[d0, d1] -> h3_3[d0, d1] : -5 <= d0 <= 1028 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 1028 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 1029 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_5.peek_1037();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd3_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd3 read pattern: { h3_4_update_0[d0, d1] -> h3_3[d0, 1 + d1] : -5 <= d0 <= 1028 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 1028 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 1029 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_5.peek_1();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd4_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd4 read pattern: { h3_4_update_0[d0, d1] -> h3_3[1 + d0, d1] : -5 <= d0 <= 1028 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 1028 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 1029 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_5.peek_1036();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

// # of bundles = 2
// h3_3_update_0_write
//	h3_3_h3_3_update_0_write0
inline void h3_3_h3_3_update_0_write_bundle_write(hw_uint<32>& h3_3_update_0_write, h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_3_h3_3_update_0_write0_res = h3_3_update_0_write.extract<0, 31>();
	h3_3_h3_3_update_0_write0_write(h3_3_h3_3_update_0_write0_res, h3_3, d0, d1, dynamic_address);
}

// h3_4_update_0_read
//	h3_4_rd0
//	h3_4_rd1
//	h3_4_rd2
//	h3_4_rd3
//	h3_4_rd4
inline hw_uint<160> h3_3_h3_4_update_0_read_bundle_read(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 5
    // h3_4_rd0
    // h3_4_rd1
    // h3_4_rd2
    // h3_4_rd3
    // h3_4_rd4

	hw_uint<160> result;
	hw_uint<32>  h3_4_rd0_res = h3_4_rd0_select(h3_3, d0, d1, dynamic_address);
	set_at<0, 160>(result, h3_4_rd0_res);
	hw_uint<32>  h3_4_rd1_res = h3_4_rd1_select(h3_3, d0, d1, dynamic_address);
	set_at<32, 160>(result, h3_4_rd1_res);
	hw_uint<32>  h3_4_rd2_res = h3_4_rd2_select(h3_3, d0, d1, dynamic_address);
	set_at<64, 160>(result, h3_4_rd2_res);
	hw_uint<32>  h3_4_rd3_res = h3_4_rd3_select(h3_3, d0, d1, dynamic_address);
	set_at<96, 160>(result, h3_4_rd3_res);
	hw_uint<32>  h3_4_rd4_res = h3_4_rd4_select(h3_3, d0, d1, dynamic_address);
	set_at<128, 160>(result, h3_4_rd4_res);
	return result;
}

struct h3_4_h3_4_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-5, 1028], [-4, 1027]}
	// Capacity: 2070
	// # of read delays: 6
  // 0, 1, 1034, 1035, 1036, 2069
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 1032> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 1032> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_1033() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_1034() {
		return f4;
	}

	inline hw_uint<32>  peek_1035() {
		return f6;
	}

	inline hw_uint<32>  peek_1036() {
		return f8;
	}

	inline hw_uint<32>  peek_2068() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_2069() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1032
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1032 reading from capacity: 1
    f9.push(f8);
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
    // cap: 1 reading from capacity: 1032
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1032 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_4_cache {
  // # of banks: 1
  h3_4_h3_4_update_0_write0_merged_banks_5_cache h3_4_h3_4_update_0_write0_merged_banks_5;
};



inline void h3_4_h3_4_update_0_write0_write(hw_uint<32> & h3_4_h3_4_update_0_write0, h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write0_merged_banks_5.push(h3_4_h3_4_update_0_write0);
}

inline hw_uint<32>  h3_5_rd0_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd0 read pattern: { h3_5_update_0[d0, d1] -> h3_4[-1 + d0, d1] : -4 <= d0 <= 1027 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 1027 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 1028 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_5.peek_1036();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd1_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd1 read pattern: { h3_5_update_0[d0, d1] -> h3_4[d0, -1 + d1] : -4 <= d0 <= 1027 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 1027 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 1028 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_5.peek_2069();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd2_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd2 read pattern: { h3_5_update_0[d0, d1] -> h3_4[d0, d1] : -4 <= d0 <= 1027 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 1027 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 1028 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_5.peek_1035();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd3_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd3 read pattern: { h3_5_update_0[d0, d1] -> h3_4[d0, 1 + d1] : -4 <= d0 <= 1027 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 1027 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 1028 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_5.peek_1();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd4_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd4 read pattern: { h3_5_update_0[d0, d1] -> h3_4[1 + d0, d1] : -4 <= d0 <= 1027 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 1027 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 1028 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_5.peek_1034();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

// # of bundles = 2
// h3_4_update_0_write
//	h3_4_h3_4_update_0_write0
inline void h3_4_h3_4_update_0_write_bundle_write(hw_uint<32>& h3_4_update_0_write, h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_4_h3_4_update_0_write0_res = h3_4_update_0_write.extract<0, 31>();
	h3_4_h3_4_update_0_write0_write(h3_4_h3_4_update_0_write0_res, h3_4, d0, d1, dynamic_address);
}

// h3_5_update_0_read
//	h3_5_rd0
//	h3_5_rd1
//	h3_5_rd2
//	h3_5_rd3
//	h3_5_rd4
inline hw_uint<160> h3_4_h3_5_update_0_read_bundle_read(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 5
    // h3_5_rd0
    // h3_5_rd1
    // h3_5_rd2
    // h3_5_rd3
    // h3_5_rd4

	hw_uint<160> result;
	hw_uint<32>  h3_5_rd0_res = h3_5_rd0_select(h3_4, d0, d1, dynamic_address);
	set_at<0, 160>(result, h3_5_rd0_res);
	hw_uint<32>  h3_5_rd1_res = h3_5_rd1_select(h3_4, d0, d1, dynamic_address);
	set_at<32, 160>(result, h3_5_rd1_res);
	hw_uint<32>  h3_5_rd2_res = h3_5_rd2_select(h3_4, d0, d1, dynamic_address);
	set_at<64, 160>(result, h3_5_rd2_res);
	hw_uint<32>  h3_5_rd3_res = h3_5_rd3_select(h3_4, d0, d1, dynamic_address);
	set_at<96, 160>(result, h3_5_rd3_res);
	hw_uint<32>  h3_5_rd4_res = h3_5_rd4_select(h3_4, d0, d1, dynamic_address);
	set_at<128, 160>(result, h3_5_rd4_res);
	return result;
}

struct h3_5_h3_5_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-4, 1027], [-3, 1026]}
	// Capacity: 2066
	// # of read delays: 6
  // 0, 1, 1032, 1033, 1034, 2065
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 1030> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 1030> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_1031() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_1032() {
		return f4;
	}

	inline hw_uint<32>  peek_1033() {
		return f6;
	}

	inline hw_uint<32>  peek_1034() {
		return f8;
	}

	inline hw_uint<32>  peek_2064() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_2065() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1030
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1030 reading from capacity: 1
    f9.push(f8);
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
    // cap: 1 reading from capacity: 1030
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1030 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_5_cache {
  // # of banks: 1
  h3_5_h3_5_update_0_write0_merged_banks_5_cache h3_5_h3_5_update_0_write0_merged_banks_5;
};



inline void h3_5_h3_5_update_0_write0_write(hw_uint<32> & h3_5_h3_5_update_0_write0, h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write0_merged_banks_5.push(h3_5_h3_5_update_0_write0);
}

inline hw_uint<32>  h3_6_rd0_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd0 read pattern: { h3_6_update_0[d0, d1] -> h3_5[-1 + d0, d1] : -3 <= d0 <= 1026 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 1026 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 1027 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_5.peek_1034();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd1_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd1 read pattern: { h3_6_update_0[d0, d1] -> h3_5[d0, -1 + d1] : -3 <= d0 <= 1026 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 1026 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 1027 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_5.peek_2065();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd2_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd2 read pattern: { h3_6_update_0[d0, d1] -> h3_5[d0, d1] : -3 <= d0 <= 1026 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 1026 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 1027 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_5.peek_1033();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd3_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd3 read pattern: { h3_6_update_0[d0, d1] -> h3_5[d0, 1 + d1] : -3 <= d0 <= 1026 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 1026 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 1027 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_5.peek_1();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd4_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd4 read pattern: { h3_6_update_0[d0, d1] -> h3_5[1 + d0, d1] : -3 <= d0 <= 1026 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 1026 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 1027 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_5.peek_1032();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

// # of bundles = 2
// h3_5_update_0_write
//	h3_5_h3_5_update_0_write0
inline void h3_5_h3_5_update_0_write_bundle_write(hw_uint<32>& h3_5_update_0_write, h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_5_h3_5_update_0_write0_res = h3_5_update_0_write.extract<0, 31>();
	h3_5_h3_5_update_0_write0_write(h3_5_h3_5_update_0_write0_res, h3_5, d0, d1, dynamic_address);
}

// h3_6_update_0_read
//	h3_6_rd0
//	h3_6_rd1
//	h3_6_rd2
//	h3_6_rd3
//	h3_6_rd4
inline hw_uint<160> h3_5_h3_6_update_0_read_bundle_read(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 5
    // h3_6_rd0
    // h3_6_rd1
    // h3_6_rd2
    // h3_6_rd3
    // h3_6_rd4

	hw_uint<160> result;
	hw_uint<32>  h3_6_rd0_res = h3_6_rd0_select(h3_5, d0, d1, dynamic_address);
	set_at<0, 160>(result, h3_6_rd0_res);
	hw_uint<32>  h3_6_rd1_res = h3_6_rd1_select(h3_5, d0, d1, dynamic_address);
	set_at<32, 160>(result, h3_6_rd1_res);
	hw_uint<32>  h3_6_rd2_res = h3_6_rd2_select(h3_5, d0, d1, dynamic_address);
	set_at<64, 160>(result, h3_6_rd2_res);
	hw_uint<32>  h3_6_rd3_res = h3_6_rd3_select(h3_5, d0, d1, dynamic_address);
	set_at<96, 160>(result, h3_6_rd3_res);
	hw_uint<32>  h3_6_rd4_res = h3_6_rd4_select(h3_5, d0, d1, dynamic_address);
	set_at<128, 160>(result, h3_6_rd4_res);
	return result;
}

struct h3_6_h3_6_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-3, 1026], [-2, 1025]}
	// Capacity: 2062
	// # of read delays: 6
  // 0, 1, 1030, 1031, 1032, 2061
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 1028> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 1028> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_1029() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_1030() {
		return f4;
	}

	inline hw_uint<32>  peek_1031() {
		return f6;
	}

	inline hw_uint<32>  peek_1032() {
		return f8;
	}

	inline hw_uint<32>  peek_2060() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_2061() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1028
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1028 reading from capacity: 1
    f9.push(f8);
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
    // cap: 1 reading from capacity: 1028
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1028 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_6_cache {
  // # of banks: 1
  h3_6_h3_6_update_0_write0_merged_banks_5_cache h3_6_h3_6_update_0_write0_merged_banks_5;
};



inline void h3_6_h3_6_update_0_write0_write(hw_uint<32> & h3_6_h3_6_update_0_write0, h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write0_merged_banks_5.push(h3_6_h3_6_update_0_write0);
}

inline hw_uint<32>  h3_7_rd0_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd0 read pattern: { h3_7_update_0[d0, d1] -> h3_6[-1 + d0, d1] : -2 <= d0 <= 1025 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 1025 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 1026 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_5.peek_1032();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd1_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd1 read pattern: { h3_7_update_0[d0, d1] -> h3_6[d0, -1 + d1] : -2 <= d0 <= 1025 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 1025 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 1026 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_5.peek_2061();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd2_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd2 read pattern: { h3_7_update_0[d0, d1] -> h3_6[d0, d1] : -2 <= d0 <= 1025 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 1025 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 1026 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_5.peek_1031();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd3_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd3 read pattern: { h3_7_update_0[d0, d1] -> h3_6[d0, 1 + d1] : -2 <= d0 <= 1025 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 1025 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 1026 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_5.peek_1();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd4_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd4 read pattern: { h3_7_update_0[d0, d1] -> h3_6[1 + d0, d1] : -2 <= d0 <= 1025 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 1025 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 1026 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_5.peek_1030();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

// # of bundles = 2
// h3_6_update_0_write
//	h3_6_h3_6_update_0_write0
inline void h3_6_h3_6_update_0_write_bundle_write(hw_uint<32>& h3_6_update_0_write, h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_6_h3_6_update_0_write0_res = h3_6_update_0_write.extract<0, 31>();
	h3_6_h3_6_update_0_write0_write(h3_6_h3_6_update_0_write0_res, h3_6, d0, d1, dynamic_address);
}

// h3_7_update_0_read
//	h3_7_rd0
//	h3_7_rd1
//	h3_7_rd2
//	h3_7_rd3
//	h3_7_rd4
inline hw_uint<160> h3_6_h3_7_update_0_read_bundle_read(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 5
    // h3_7_rd0
    // h3_7_rd1
    // h3_7_rd2
    // h3_7_rd3
    // h3_7_rd4

	hw_uint<160> result;
	hw_uint<32>  h3_7_rd0_res = h3_7_rd0_select(h3_6, d0, d1, dynamic_address);
	set_at<0, 160>(result, h3_7_rd0_res);
	hw_uint<32>  h3_7_rd1_res = h3_7_rd1_select(h3_6, d0, d1, dynamic_address);
	set_at<32, 160>(result, h3_7_rd1_res);
	hw_uint<32>  h3_7_rd2_res = h3_7_rd2_select(h3_6, d0, d1, dynamic_address);
	set_at<64, 160>(result, h3_7_rd2_res);
	hw_uint<32>  h3_7_rd3_res = h3_7_rd3_select(h3_6, d0, d1, dynamic_address);
	set_at<96, 160>(result, h3_7_rd3_res);
	hw_uint<32>  h3_7_rd4_res = h3_7_rd4_select(h3_6, d0, d1, dynamic_address);
	set_at<128, 160>(result, h3_7_rd4_res);
	return result;
}

struct h3_7_h3_7_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-2, 1025], [-1, 1024]}
	// Capacity: 2058
	// # of read delays: 6
  // 0, 1, 1028, 1029, 1030, 2057
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 1026> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 1026> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_1027() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_1028() {
		return f4;
	}

	inline hw_uint<32>  peek_1029() {
		return f6;
	}

	inline hw_uint<32>  peek_1030() {
		return f8;
	}

	inline hw_uint<32>  peek_2056() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_2057() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1026
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1026 reading from capacity: 1
    f9.push(f8);
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
    // cap: 1 reading from capacity: 1026
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1026 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_7_cache {
  // # of banks: 1
  h3_7_h3_7_update_0_write0_merged_banks_5_cache h3_7_h3_7_update_0_write0_merged_banks_5;
};



inline void h3_7_h3_7_update_0_write0_write(hw_uint<32> & h3_7_h3_7_update_0_write0, h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write0_merged_banks_5.push(h3_7_h3_7_update_0_write0);
}

inline hw_uint<32>  h3_8_rd0_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd0 read pattern: { h3_8_update_0[d0, d1] -> h3_7[-1 + d0, d1] : -1 <= d0 <= 1024 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 1024 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 1025 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_merged_banks_5.peek_1030();
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_8_rd1_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd1 read pattern: { h3_8_update_0[d0, d1] -> h3_7[d0, -1 + d1] : -1 <= d0 <= 1024 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 1024 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 1025 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_merged_banks_5.peek_2057();
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_8_rd2_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd2 read pattern: { h3_8_update_0[d0, d1] -> h3_7[d0, d1] : -1 <= d0 <= 1024 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 1024 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 1025 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_merged_banks_5.peek_1029();
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_8_rd3_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd3 read pattern: { h3_8_update_0[d0, d1] -> h3_7[d0, 1 + d1] : -1 <= d0 <= 1024 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 1024 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 1025 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_merged_banks_5.peek_1();
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_8_rd4_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd4 read pattern: { h3_8_update_0[d0, d1] -> h3_7[1 + d0, d1] : -1 <= d0 <= 1024 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 1024 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 1025 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_merged_banks_5.peek_1028();
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

// # of bundles = 2
// h3_7_update_0_write
//	h3_7_h3_7_update_0_write0
inline void h3_7_h3_7_update_0_write_bundle_write(hw_uint<32>& h3_7_update_0_write, h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_7_h3_7_update_0_write0_res = h3_7_update_0_write.extract<0, 31>();
	h3_7_h3_7_update_0_write0_write(h3_7_h3_7_update_0_write0_res, h3_7, d0, d1, dynamic_address);
}

// h3_8_update_0_read
//	h3_8_rd0
//	h3_8_rd1
//	h3_8_rd2
//	h3_8_rd3
//	h3_8_rd4
inline hw_uint<160> h3_7_h3_8_update_0_read_bundle_read(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 5
    // h3_8_rd0
    // h3_8_rd1
    // h3_8_rd2
    // h3_8_rd3
    // h3_8_rd4

	hw_uint<160> result;
	hw_uint<32>  h3_8_rd0_res = h3_8_rd0_select(h3_7, d0, d1, dynamic_address);
	set_at<0, 160>(result, h3_8_rd0_res);
	hw_uint<32>  h3_8_rd1_res = h3_8_rd1_select(h3_7, d0, d1, dynamic_address);
	set_at<32, 160>(result, h3_8_rd1_res);
	hw_uint<32>  h3_8_rd2_res = h3_8_rd2_select(h3_7, d0, d1, dynamic_address);
	set_at<64, 160>(result, h3_8_rd2_res);
	hw_uint<32>  h3_8_rd3_res = h3_8_rd3_select(h3_7, d0, d1, dynamic_address);
	set_at<96, 160>(result, h3_8_rd3_res);
	hw_uint<32>  h3_8_rd4_res = h3_8_rd4_select(h3_7, d0, d1, dynamic_address);
	set_at<128, 160>(result, h3_8_rd4_res);
	return result;
}

struct h3_8_h3_8_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-1, 1024], [0, 1023]}
	// Capacity: 2054
	// # of read delays: 6
  // 0, 1, 1026, 1027, 1028, 2053
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 1024> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 1024> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_1025() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_1026() {
		return f4;
	}

	inline hw_uint<32>  peek_1027() {
		return f6;
	}

	inline hw_uint<32>  peek_1028() {
		return f8;
	}

	inline hw_uint<32>  peek_2052() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_2053() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1024
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1024 reading from capacity: 1
    f9.push(f8);
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
    // cap: 1 reading from capacity: 1024
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1024 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_8_cache {
  // # of banks: 1
  h3_8_h3_8_update_0_write0_merged_banks_5_cache h3_8_h3_8_update_0_write0_merged_banks_5;
};



inline void h3_8_h3_8_update_0_write0_write(hw_uint<32> & h3_8_h3_8_update_0_write0, h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
  h3_8.h3_8_h3_8_update_0_write0_merged_banks_5.push(h3_8_h3_8_update_0_write0);
}

inline hw_uint<32>  h3_9_rd0_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd0 read pattern: { h3_9_update_0[d0, d1] -> h3_8[-1 + d0, d1] : 0 <= d0 <= 1023 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 1023 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 1024 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write0 = h3_8.h3_8_h3_8_update_0_write0_merged_banks_5.peek_1028();
  return value_h3_8_h3_8_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_9_rd1_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd1 read pattern: { h3_9_update_0[d0, d1] -> h3_8[d0, -1 + d1] : 0 <= d0 <= 1023 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 1023 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 1024 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write0 = h3_8.h3_8_h3_8_update_0_write0_merged_banks_5.peek_2053();
  return value_h3_8_h3_8_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_9_rd2_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd2 read pattern: { h3_9_update_0[d0, d1] -> h3_8[d0, d1] : 0 <= d0 <= 1023 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 1023 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 1024 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write0 = h3_8.h3_8_h3_8_update_0_write0_merged_banks_5.peek_1027();
  return value_h3_8_h3_8_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_9_rd3_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd3 read pattern: { h3_9_update_0[d0, d1] -> h3_8[d0, 1 + d1] : 0 <= d0 <= 1023 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 1023 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 1024 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write0 = h3_8.h3_8_h3_8_update_0_write0_merged_banks_5.peek_1();
  return value_h3_8_h3_8_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_9_rd4_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd4 read pattern: { h3_9_update_0[d0, d1] -> h3_8[1 + d0, d1] : 0 <= d0 <= 1023 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 1023 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 1024 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write0 = h3_8.h3_8_h3_8_update_0_write0_merged_banks_5.peek_1026();
  return value_h3_8_h3_8_update_0_write0;
  return 0;
}

// # of bundles = 2
// h3_8_update_0_write
//	h3_8_h3_8_update_0_write0
inline void h3_8_h3_8_update_0_write_bundle_write(hw_uint<32>& h3_8_update_0_write, h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_8_h3_8_update_0_write0_res = h3_8_update_0_write.extract<0, 31>();
	h3_8_h3_8_update_0_write0_write(h3_8_h3_8_update_0_write0_res, h3_8, d0, d1, dynamic_address);
}

// h3_9_update_0_read
//	h3_9_rd0
//	h3_9_rd1
//	h3_9_rd2
//	h3_9_rd3
//	h3_9_rd4
inline hw_uint<160> h3_8_h3_9_update_0_read_bundle_read(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 5
    // h3_9_rd0
    // h3_9_rd1
    // h3_9_rd2
    // h3_9_rd3
    // h3_9_rd4

	hw_uint<160> result;
	hw_uint<32>  h3_9_rd0_res = h3_9_rd0_select(h3_8, d0, d1, dynamic_address);
	set_at<0, 160>(result, h3_9_rd0_res);
	hw_uint<32>  h3_9_rd1_res = h3_9_rd1_select(h3_8, d0, d1, dynamic_address);
	set_at<32, 160>(result, h3_9_rd1_res);
	hw_uint<32>  h3_9_rd2_res = h3_9_rd2_select(h3_8, d0, d1, dynamic_address);
	set_at<64, 160>(result, h3_9_rd2_res);
	hw_uint<32>  h3_9_rd3_res = h3_9_rd3_select(h3_8, d0, d1, dynamic_address);
	set_at<96, 160>(result, h3_9_rd3_res);
	hw_uint<32>  h3_9_rd4_res = h3_9_rd4_select(h3_8, d0, d1, dynamic_address);
	set_at<128, 160>(result, h3_9_rd4_res);
	return result;
}

struct h3_9_h3_9_update_0_write0_to_h3_300MHz_1_rd0_cache {
	// RAM Box: {[0, 1023], [0, 1023]}
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

struct h3_9_cache {
  // # of banks: 1
  h3_9_h3_9_update_0_write0_to_h3_300MHz_1_rd0_cache h3_9_h3_9_update_0_write0_to_h3_300MHz_1_rd0;
};



inline void h3_9_h3_9_update_0_write0_write(hw_uint<32> & h3_9_h3_9_update_0_write0, h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write0_to_h3_300MHz_1_rd0.push(h3_9_h3_9_update_0_write0);
}

inline hw_uint<32>  h3_300MHz_1_rd0_select(h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_300MHz_1_rd0 read pattern: { h3_300MHz_1_update_0[d0, d1] -> h3_9[d0, d1] : 0 <= d0 <= 1023 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_300MHz_1_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 1023 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 1023 and 0 <= d1 <= 1023 }
  auto value_h3_9_h3_9_update_0_write0 = h3_9.h3_9_h3_9_update_0_write0_to_h3_300MHz_1_rd0.peek(/* one reader or all rams */ 0);
  return value_h3_9_h3_9_update_0_write0;
  return 0;
}

// # of bundles = 2
// h3_300MHz_1_update_0_read
//	h3_300MHz_1_rd0
inline hw_uint<32> h3_9_h3_300MHz_1_update_0_read_bundle_read(h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // h3_300MHz_1_rd0

	hw_uint<32> result;
	hw_uint<32>  h3_300MHz_1_rd0_res = h3_300MHz_1_rd0_select(h3_9, d0, d1, dynamic_address);
	set_at<0, 32>(result, h3_300MHz_1_rd0_res);
	return result;
}

// h3_9_update_0_write
//	h3_9_h3_9_update_0_write0
inline void h3_9_h3_9_update_0_write_bundle_write(hw_uint<32>& h3_9_update_0_write, h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_9_h3_9_update_0_write0_res = h3_9_update_0_write.extract<0, 31>();
	h3_9_h3_9_update_0_write0_write(h3_9_h3_9_update_0_write0_res, h3_9, d0, d1, dynamic_address);
}

struct in_cc_in_cc_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-10, 1033], [-9, 1032]}
	// Capacity: 2090
	// # of read delays: 6
  // 0, 1, 1044, 1045, 1046, 2089
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 1042> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 1042> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_1043() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_1044() {
		return f4;
	}

	inline hw_uint<32>  peek_1045() {
		return f6;
	}

	inline hw_uint<32>  peek_1046() {
		return f8;
	}

	inline hw_uint<32>  peek_2088() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_2089() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1042
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1042 reading from capacity: 1
    f9.push(f8);
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
    // cap: 1 reading from capacity: 1042
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1042 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_cc_cache {
  // # of banks: 1
  in_cc_in_cc_update_0_write0_merged_banks_5_cache in_cc_in_cc_update_0_write0_merged_banks_5;
};



inline void in_cc_in_cc_update_0_write0_write(hw_uint<32> & in_cc_in_cc_update_0_write0, in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write0_merged_banks_5.push(in_cc_in_cc_update_0_write0);
}

inline hw_uint<32>  h3_0_rd0_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd0 read pattern: { h3_0_update_0[d0, d1] -> in_cc[-1 + d0, d1] : -9 <= d0 <= 1032 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 1032 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 1033 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_5.peek_1046();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd1_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd1 read pattern: { h3_0_update_0[d0, d1] -> in_cc[d0, -1 + d1] : -9 <= d0 <= 1032 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 1032 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 1033 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_5.peek_2089();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd2_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd2 read pattern: { h3_0_update_0[d0, d1] -> in_cc[d0, d1] : -9 <= d0 <= 1032 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 1032 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 1033 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_5.peek_1045();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd3_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd3 read pattern: { h3_0_update_0[d0, d1] -> in_cc[d0, 1 + d1] : -9 <= d0 <= 1032 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 1032 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 1033 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_5.peek_1();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd4_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd4 read pattern: { h3_0_update_0[d0, d1] -> in_cc[1 + d0, d1] : -9 <= d0 <= 1032 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 1032 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 1033 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_5.peek_1044();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

// # of bundles = 2
// h3_0_update_0_read
//	h3_0_rd0
//	h3_0_rd1
//	h3_0_rd2
//	h3_0_rd3
//	h3_0_rd4
inline hw_uint<160> in_cc_h3_0_update_0_read_bundle_read(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 5
    // h3_0_rd0
    // h3_0_rd1
    // h3_0_rd2
    // h3_0_rd3
    // h3_0_rd4

	hw_uint<160> result;
	hw_uint<32>  h3_0_rd0_res = h3_0_rd0_select(in_cc, d0, d1, dynamic_address);
	set_at<0, 160>(result, h3_0_rd0_res);
	hw_uint<32>  h3_0_rd1_res = h3_0_rd1_select(in_cc, d0, d1, dynamic_address);
	set_at<32, 160>(result, h3_0_rd1_res);
	hw_uint<32>  h3_0_rd2_res = h3_0_rd2_select(in_cc, d0, d1, dynamic_address);
	set_at<64, 160>(result, h3_0_rd2_res);
	hw_uint<32>  h3_0_rd3_res = h3_0_rd3_select(in_cc, d0, d1, dynamic_address);
	set_at<96, 160>(result, h3_0_rd3_res);
	hw_uint<32>  h3_0_rd4_res = h3_0_rd4_select(in_cc, d0, d1, dynamic_address);
	set_at<128, 160>(result, h3_0_rd4_res);
	return result;
}

// in_cc_update_0_write
//	in_cc_in_cc_update_0_write0
inline void in_cc_in_cc_update_0_write_bundle_write(hw_uint<32>& in_cc_update_0_write, in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
	hw_uint<32>  in_cc_in_cc_update_0_write0_res = in_cc_update_0_write.extract<0, 31>();
	in_cc_in_cc_update_0_write0_write(in_cc_in_cc_update_0_write0_res, in_cc, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 662720 bits


// Operation logic
inline void h3_1_update_0(h3_0_cache& h3_0, h3_1_cache& h3_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: h3_0
	auto h3_0_0_c__0_value = h3_0_h3_1_update_0_read_bundle_read(h3_0/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_1_generated_compute_unrolled_1(h3_0_0_c__0_value);
	// Produce: h3_1
	h3_1_h3_1_update_0_write_bundle_write(/* arg names */compute_result, h3_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_2_update_0(h3_1_cache& h3_1, h3_2_cache& h3_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: h3_1
	auto h3_1_0_c__0_value = h3_1_h3_2_update_0_read_bundle_read(h3_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_2_generated_compute_unrolled_1(h3_1_0_c__0_value);
	// Produce: h3_2
	h3_2_h3_2_update_0_write_bundle_write(/* arg names */compute_result, h3_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_cc_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in, in_cc_cache& in_cc, int d0, int d1) {
  // Dynamic address computation

	// Consume: in
	auto in_0_c__0_value = in.read();
	auto compute_result = in_cc_generated_compute_unrolled_1(in_0_c__0_value);
	// Produce: in_cc
	in_cc_in_cc_update_0_write_bundle_write(/* arg names */compute_result, in_cc, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_0_update_0(in_cc_cache& in_cc, h3_0_cache& h3_0, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_cc
	auto in_cc_0_c__0_value = in_cc_h3_0_update_0_read_bundle_read(in_cc/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_0_generated_compute_unrolled_1(in_cc_0_c__0_value);
	// Produce: h3_0
	h3_0_h3_0_update_0_write_bundle_write(/* arg names */compute_result, h3_0, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_3_update_0(h3_2_cache& h3_2, h3_3_cache& h3_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: h3_2
	auto h3_2_0_c__0_value = h3_2_h3_3_update_0_read_bundle_read(h3_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_3_generated_compute_unrolled_1(h3_2_0_c__0_value);
	// Produce: h3_3
	h3_3_h3_3_update_0_write_bundle_write(/* arg names */compute_result, h3_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_4_update_0(h3_3_cache& h3_3, h3_4_cache& h3_4, int d0, int d1) {
  // Dynamic address computation

	// Consume: h3_3
	auto h3_3_0_c__0_value = h3_3_h3_4_update_0_read_bundle_read(h3_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_4_generated_compute_unrolled_1(h3_3_0_c__0_value);
	// Produce: h3_4
	h3_4_h3_4_update_0_write_bundle_write(/* arg names */compute_result, h3_4, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_5_update_0(h3_4_cache& h3_4, h3_5_cache& h3_5, int d0, int d1) {
  // Dynamic address computation

	// Consume: h3_4
	auto h3_4_0_c__0_value = h3_4_h3_5_update_0_read_bundle_read(h3_4/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_5_generated_compute_unrolled_1(h3_4_0_c__0_value);
	// Produce: h3_5
	h3_5_h3_5_update_0_write_bundle_write(/* arg names */compute_result, h3_5, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_6_update_0(h3_5_cache& h3_5, h3_6_cache& h3_6, int d0, int d1) {
  // Dynamic address computation

	// Consume: h3_5
	auto h3_5_0_c__0_value = h3_5_h3_6_update_0_read_bundle_read(h3_5/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_6_generated_compute_unrolled_1(h3_5_0_c__0_value);
	// Produce: h3_6
	h3_6_h3_6_update_0_write_bundle_write(/* arg names */compute_result, h3_6, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_7_update_0(h3_6_cache& h3_6, h3_7_cache& h3_7, int d0, int d1) {
  // Dynamic address computation

	// Consume: h3_6
	auto h3_6_0_c__0_value = h3_6_h3_7_update_0_read_bundle_read(h3_6/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_7_generated_compute_unrolled_1(h3_6_0_c__0_value);
	// Produce: h3_7
	h3_7_h3_7_update_0_write_bundle_write(/* arg names */compute_result, h3_7, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_8_update_0(h3_7_cache& h3_7, h3_8_cache& h3_8, int d0, int d1) {
  // Dynamic address computation

	// Consume: h3_7
	auto h3_7_0_c__0_value = h3_7_h3_8_update_0_read_bundle_read(h3_7/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_8_generated_compute_unrolled_1(h3_7_0_c__0_value);
	// Produce: h3_8
	h3_8_h3_8_update_0_write_bundle_write(/* arg names */compute_result, h3_8, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_9_update_0(h3_8_cache& h3_8, h3_9_cache& h3_9, int d0, int d1) {
  // Dynamic address computation

	// Consume: h3_8
	auto h3_8_0_c__0_value = h3_8_h3_9_update_0_read_bundle_read(h3_8/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_9_generated_compute_unrolled_1(h3_8_0_c__0_value);
	// Produce: h3_9
	h3_9_h3_9_update_0_write_bundle_write(/* arg names */compute_result, h3_9, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_300MHz_1_update_0(h3_9_cache& h3_9, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */h3_300MHz_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: h3_9
	auto h3_9_0_c__0_value = h3_9_h3_300MHz_1_update_0_read_bundle_read(h3_9/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_300MHz_1_generated_compute_unrolled_1(h3_9_0_c__0_value);
	// Produce: h3_300MHz_1
	h3_300MHz_1.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void h3_300MHz_1_opt(HWStream<hw_uint<32> >& /* get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* get_args num ports = 1 */h3_300MHz_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("h3_300MHz_1_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  h3_0_cache h3_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  h3_1_cache h3_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  h3_2_cache h3_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  h3_3_cache h3_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  h3_4_cache h3_4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  h3_5_cache h3_5;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  h3_6_cache h3_6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  h3_7_cache h3_7;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  h3_8_cache h3_8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  h3_9_cache h3_9;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_cc_cache in_cc;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 1025 and -2 <= d1 <= 1025; in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 1033 and -10 <= d1 <= 1033; h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 1023 and 0 <= d1 <= 1023; h3_300MHz_1_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 1023 and 0 <= d1 <= 1023; h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 1031 and -8 <= d1 <= 1031; h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 1029 and -6 <= d1 <= 1029; h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 1027 and -4 <= d1 <= 1027; h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 1030 and -7 <= d1 <= 1030; h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 1028 and -5 <= d1 <= 1028; h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 1032 and -9 <= d1 <= 1032; h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 1024 and -1 <= d1 <= 1024; h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 1026 and -3 <= d1 <= 1026 }
//   { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 1025 and -2 <= d1 <= 1025 }
// Condition for h3_7_update_0(((-9 + i2 == 0) && (-6 + i1 >= 0) && (1033 - i1 >= 0) && (-6 + i0 >= 0) && (1033 - i0 >= 0)))
//   { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 1033 and -10 <= d1 <= 1033 }
// Condition for in_cc_update_0(((-1 + i2 == 0) && (10 + i1 >= 0) && (1033 - i1 >= 0) && (10 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 1023 and 0 <= d1 <= 1023 }
// Condition for h3_9_update_0(((-11 + i2 == 0) && (-10 + i1 >= 0) && (1033 - i1 >= 0) && (-10 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_300MHz_1_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 1023 and 0 <= d1 <= 1023 }
// Condition for h3_300MHz_1_update_0(((-12 + i2 == 0) && (-10 + i1 >= 0) && (1033 - i1 >= 0) && (-10 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 1031 and -8 <= d1 <= 1031 }
// Condition for h3_1_update_0(((-3 + i2 == 0) && (6 + i1 >= 0) && (1033 - i1 >= 0) && (6 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 1029 and -6 <= d1 <= 1029 }
// Condition for h3_3_update_0(((-5 + i2 == 0) && (2 + i1 >= 0) && (1033 - i1 >= 0) && (2 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 1027 and -4 <= d1 <= 1027 }
// Condition for h3_5_update_0(((-7 + i2 == 0) && (-2 + i1 >= 0) && (1033 - i1 >= 0) && (-2 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 1030 and -7 <= d1 <= 1030 }
// Condition for h3_2_update_0(((-4 + i2 == 0) && (4 + i1 >= 0) && (1033 - i1 >= 0) && (4 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 1028 and -5 <= d1 <= 1028 }
// Condition for h3_4_update_0(((-6 + i2 == 0) && (i1 >= 0) && (1033 - i1 >= 0) && (i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 1032 and -9 <= d1 <= 1032 }
// Condition for h3_0_update_0(((-2 + i2 == 0) && (8 + i1 >= 0) && (1033 - i1 >= 0) && (8 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 1024 and -1 <= d1 <= 1024 }
// Condition for h3_8_update_0(((-10 + i2 == 0) && (-8 + i1 >= 0) && (1033 - i1 >= 0) && (-8 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 1026 and -3 <= d1 <= 1026 }
// Condition for h3_6_update_0(((-8 + i2 == 0) && (-4 + i1 >= 0) && (1033 - i1 >= 0) && (-4 + i0 >= 0) && (1033 - i0 >= 0)))

  /*
  // Schedules...
    // h3_0_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
    // h3_1_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*3]
    // h3_2_update_0 -> [1*d1*1*1 + 1*3,1*d0*1*1 + 1*3,1*4]
    // h3_300MHz_1_update_0 -> [1*d1*1*1 + 1*10,1*d0*1*1 + 1*10,1*12]
    // h3_3_update_0 -> [1*d1*1*1 + 1*4,1*d0*1*1 + 1*4,1*5]
    // h3_4_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*6]
    // h3_5_update_0 -> [1*d1*1*1 + 1*6,1*d0*1*1 + 1*6,1*7]
    // h3_6_update_0 -> [1*d1*1*1 + 1*7,1*d0*1*1 + 1*7,1*8]
    // h3_7_update_0 -> [1*d1*1*1 + 1*8,1*d0*1*1 + 1*8,1*9]
    // h3_8_update_0 -> [1*d1*1*1 + 1*9,1*d0*1*1 + 1*9,1*10]
    // h3_9_update_0 -> [1*d1*1*1 + 1*10,1*d0*1*1 + 1*10,1*11]
    // in_cc_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
for (int c0 = -10; c0 <= 1033; c0++) {
  for (int c1 = -10; c1 <= 1033; c1++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

    if ((-10 <= c1 && c1 <= 1033) && ((c1 - 0) % 1 == 0) && (-10 <= c0 && c0 <= 1033) && ((c0 - 0) % 1 == 0)) {
      in_cc_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((-8 <= c1 && c1 <= 1033) && ((c1 - 1) % 1 == 0) && (-8 <= c0 && c0 <= 1033) && ((c0 - 1) % 1 == 0)) {
      h3_0_update_0((c1 - 1) / 1, (c0 - 1) / 1);
    }

    if ((-6 <= c1 && c1 <= 1033) && ((c1 - 2) % 1 == 0) && (-6 <= c0 && c0 <= 1033) && ((c0 - 2) % 1 == 0)) {
      h3_1_update_0((c1 - 2) / 1, (c0 - 2) / 1);
    }

    if ((-4 <= c1 && c1 <= 1033) && ((c1 - 3) % 1 == 0) && (-4 <= c0 && c0 <= 1033) && ((c0 - 3) % 1 == 0)) {
      h3_2_update_0((c1 - 3) / 1, (c0 - 3) / 1);
    }

    if ((-2 <= c1 && c1 <= 1033) && ((c1 - 4) % 1 == 0) && (-2 <= c0 && c0 <= 1033) && ((c0 - 4) % 1 == 0)) {
      h3_3_update_0((c1 - 4) / 1, (c0 - 4) / 1);
    }

    if ((0 <= c1 && c1 <= 1033) && ((c1 - 5) % 1 == 0) && (0 <= c0 && c0 <= 1033) && ((c0 - 5) % 1 == 0)) {
      h3_4_update_0((c1 - 5) / 1, (c0 - 5) / 1);
    }

    if ((2 <= c1 && c1 <= 1033) && ((c1 - 6) % 1 == 0) && (2 <= c0 && c0 <= 1033) && ((c0 - 6) % 1 == 0)) {
      h3_5_update_0((c1 - 6) / 1, (c0 - 6) / 1);
    }

    if ((4 <= c1 && c1 <= 1033) && ((c1 - 7) % 1 == 0) && (4 <= c0 && c0 <= 1033) && ((c0 - 7) % 1 == 0)) {
      h3_6_update_0((c1 - 7) / 1, (c0 - 7) / 1);
    }

    if ((6 <= c1 && c1 <= 1033) && ((c1 - 8) % 1 == 0) && (6 <= c0 && c0 <= 1033) && ((c0 - 8) % 1 == 0)) {
      h3_7_update_0((c1 - 8) / 1, (c0 - 8) / 1);
    }

    if ((8 <= c1 && c1 <= 1033) && ((c1 - 9) % 1 == 0) && (8 <= c0 && c0 <= 1033) && ((c0 - 9) % 1 == 0)) {
      h3_8_update_0((c1 - 9) / 1, (c0 - 9) / 1);
    }

    if ((10 <= c1 && c1 <= 1033) && ((c1 - 10) % 1 == 0) && (10 <= c0 && c0 <= 1033) && ((c0 - 10) % 1 == 0)) {
      h3_9_update_0((c1 - 10) / 1, (c0 - 10) / 1);
    }

    if ((10 <= c1 && c1 <= 1033) && ((c1 - 10) % 1 == 0) && (10 <= c0 && c0 <= 1033) && ((c0 - 10) % 1 == 0)) {
      h3_300MHz_1_update_0((c1 - 10) / 1, (c0 - 10) / 1);
    }

  }
}

  */
	  // Schedules...
	    // h3_0_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
	    // h3_1_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*3]
	    // h3_2_update_0 -> [1*d1*1*1 + 1*3,1*d0*1*1 + 1*3,1*4]
	    // h3_300MHz_1_update_0 -> [1*d1*1*1 + 1*10,1*d0*1*1 + 1*10,1*12]
	    // h3_3_update_0 -> [1*d1*1*1 + 1*4,1*d0*1*1 + 1*4,1*5]
	    // h3_4_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*6]
	    // h3_5_update_0 -> [1*d1*1*1 + 1*6,1*d0*1*1 + 1*6,1*7]
	    // h3_6_update_0 -> [1*d1*1*1 + 1*7,1*d0*1*1 + 1*7,1*8]
	    // h3_7_update_0 -> [1*d1*1*1 + 1*8,1*d0*1*1 + 1*8,1*9]
	    // h3_8_update_0 -> [1*d1*1*1 + 1*9,1*d0*1*1 + 1*9,1*10]
	    // h3_9_update_0 -> [1*d1*1*1 + 1*10,1*d0*1*1 + 1*10,1*11]
	    // in_cc_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	for (int c0 = -10; c0 <= 1033; c0++) {
	  for (int c1 = -10; c1 <= 1033; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-10 <= c1 && c1 <= 1033) && ((c1 - 0) % 1 == 0) && (-10 <= c0 && c0 <= 1033) && ((c0 - 0) % 1 == 0)) {
	      in_cc_update_0(in /* buf name */, in_cc, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((-8 <= c1 && c1 <= 1033) && ((c1 - 1) % 1 == 0) && (-8 <= c0 && c0 <= 1033) && ((c0 - 1) % 1 == 0)) {
	      h3_0_update_0(in_cc /* buf name */, h3_0, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((-6 <= c1 && c1 <= 1033) && ((c1 - 2) % 1 == 0) && (-6 <= c0 && c0 <= 1033) && ((c0 - 2) % 1 == 0)) {
	      h3_1_update_0(h3_0 /* buf name */, h3_1, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((-4 <= c1 && c1 <= 1033) && ((c1 - 3) % 1 == 0) && (-4 <= c0 && c0 <= 1033) && ((c0 - 3) % 1 == 0)) {
	      h3_2_update_0(h3_1 /* buf name */, h3_2, (c1 - 3) / 1, (c0 - 3) / 1);
	    }
	
	    if ((-2 <= c1 && c1 <= 1033) && ((c1 - 4) % 1 == 0) && (-2 <= c0 && c0 <= 1033) && ((c0 - 4) % 1 == 0)) {
	      h3_3_update_0(h3_2 /* buf name */, h3_3, (c1 - 4) / 1, (c0 - 4) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 1033) && ((c1 - 5) % 1 == 0) && (0 <= c0 && c0 <= 1033) && ((c0 - 5) % 1 == 0)) {
	      h3_4_update_0(h3_3 /* buf name */, h3_4, (c1 - 5) / 1, (c0 - 5) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 1033) && ((c1 - 6) % 1 == 0) && (2 <= c0 && c0 <= 1033) && ((c0 - 6) % 1 == 0)) {
	      h3_5_update_0(h3_4 /* buf name */, h3_5, (c1 - 6) / 1, (c0 - 6) / 1);
	    }
	
	    if ((4 <= c1 && c1 <= 1033) && ((c1 - 7) % 1 == 0) && (4 <= c0 && c0 <= 1033) && ((c0 - 7) % 1 == 0)) {
	      h3_6_update_0(h3_5 /* buf name */, h3_6, (c1 - 7) / 1, (c0 - 7) / 1);
	    }
	
	    if ((6 <= c1 && c1 <= 1033) && ((c1 - 8) % 1 == 0) && (6 <= c0 && c0 <= 1033) && ((c0 - 8) % 1 == 0)) {
	      h3_7_update_0(h3_6 /* buf name */, h3_7, (c1 - 8) / 1, (c0 - 8) / 1);
	    }
	
	    if ((8 <= c1 && c1 <= 1033) && ((c1 - 9) % 1 == 0) && (8 <= c0 && c0 <= 1033) && ((c0 - 9) % 1 == 0)) {
	      h3_8_update_0(h3_7 /* buf name */, h3_8, (c1 - 9) / 1, (c0 - 9) / 1);
	    }
	
	    if ((10 <= c1 && c1 <= 1033) && ((c1 - 10) % 1 == 0) && (10 <= c0 && c0 <= 1033) && ((c0 - 10) % 1 == 0)) {
	      h3_9_update_0(h3_8 /* buf name */, h3_9, (c1 - 10) / 1, (c0 - 10) / 1);
	    }
	
	    if ((10 <= c1 && c1 <= 1033) && ((c1 - 10) % 1 == 0) && (10 <= c0 && c0 <= 1033) && ((c0 - 10) % 1 == 0)) {
	      h3_300MHz_1_update_0(h3_9 /* buf name */, h3_300MHz_1, (c1 - 10) / 1, (c0 - 10) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void h3_300MHz_1_opt_wrapper(HWStream<hw_uint<32> >& /* get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* get_args num ports = 1 */h3_300MHz_1, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    h3_300MHz_1_opt(in, h3_300MHz_1);
  }
}
#ifdef __VIVADO_SYNTH__
  // { h3_300MHz_1_update_0[root = 0, h3_300MHz_1_0, h3_300MHz_1_1] -> h3_300MHz_1[0, 0] : 0 <= h3_300MHz_1_0 <= 1023 and 0 <= h3_300MHz_1_1 <= 1023 }
const int h3_300MHz_1_update_0_write_pipe0_num_transfers = 1048576;
  // { in_cc_update_0[root = 0, in_cc_0, in_cc_1] -> in[0, 0] : -10 <= in_cc_0 <= 1033 and -10 <= in_cc_1 <= 1033 }
const int in_cc_update_0_read_pipe0_num_transfers = 1089936;


extern "C" {

void h3_300MHz_1_opt_accel(hw_uint<32>* in_cc_update_0_read_pipe0, hw_uint<32>* h3_300MHz_1_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_cc_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = h3_300MHz_1_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_cc_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = h3_300MHz_1_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<32> > in_cc_update_0_read_pipe0_channel;
  static HWStream<hw_uint<32> > h3_300MHz_1_update_0_write_pipe0_channel;

  burst_read<32>(in_cc_update_0_read_pipe0, in_cc_update_0_read_pipe0_channel, in_cc_update_0_read_pipe0_num_transfers*size);

  h3_300MHz_1_opt_wrapper(in_cc_update_0_read_pipe0_channel, h3_300MHz_1_update_0_write_pipe0_channel, size);

  burst_write<32>(h3_300MHz_1_update_0_write_pipe0, h3_300MHz_1_update_0_write_pipe0_channel, h3_300MHz_1_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void h3_300MHz_1_opt_rdai(HWStream<hw_uint<32> >& in_cc_update_0_read_pipe0, HWStream<hw_uint<32> >&  h3_300MHz_1_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_cc_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = h3_300MHz_1_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  h3_300MHz_1_opt(in_cc_update_0_read_pipe0, h3_300MHz_1_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

