#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: icfo_1_opt_compute_units.h
#include "icfo_1_opt_compute_units.h"

struct f00_f00_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-4, 1923], [-3, 1082]}
	// Capacity: 3858
	// # of read delays: 6
  // 0, 1, 1928, 1929, 1930, 3857
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1926> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 1926> f9;
	hw_uint<16> f10;


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

	inline hw_uint<16> peek_3856() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_3857() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1926
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1926 reading from capacity: 1
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

struct f00_cache {
  // # of banks: 1
  f00_f00_update_0_write0_merged_banks_5_cache f00_f00_update_0_write0_merged_banks_5;
};



inline void f00_f00_update_0_write0_write(hw_uint<16>& f00_f00_update_0_write0, f00_cache& f00, int d0, int d1, int dynamic_address) {
  f00.f00_f00_update_0_write0_merged_banks_5.push(f00_f00_update_0_write0);
}

inline hw_uint<16> f01_rd0_select(f00_cache& f00, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f01_rd0 read pattern: { f01_update_0[d0, d1] -> f00[-1 + d0, d1] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  // Read schedule : { f01_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  // Write schedule: { f00_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  auto value_f00_f00_update_0_write0 = f00.f00_f00_update_0_write0_merged_banks_5.peek_1930();
  return value_f00_f00_update_0_write0;
  return 0;
}

inline hw_uint<16> f01_rd1_select(f00_cache& f00, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f01_rd1 read pattern: { f01_update_0[d0, d1] -> f00[d0, -1 + d1] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  // Read schedule : { f01_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  // Write schedule: { f00_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  auto value_f00_f00_update_0_write0 = f00.f00_f00_update_0_write0_merged_banks_5.peek_3857();
  return value_f00_f00_update_0_write0;
  return 0;
}

inline hw_uint<16> f01_rd2_select(f00_cache& f00, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f01_rd2 read pattern: { f01_update_0[d0, d1] -> f00[d0, d1] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  // Read schedule : { f01_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  // Write schedule: { f00_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  auto value_f00_f00_update_0_write0 = f00.f00_f00_update_0_write0_merged_banks_5.peek_1929();
  return value_f00_f00_update_0_write0;
  return 0;
}

inline hw_uint<16> f01_rd3_select(f00_cache& f00, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f01_rd3 read pattern: { f01_update_0[d0, d1] -> f00[d0, 1 + d1] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  // Read schedule : { f01_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  // Write schedule: { f00_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  auto value_f00_f00_update_0_write0 = f00.f00_f00_update_0_write0_merged_banks_5.peek_1();
  return value_f00_f00_update_0_write0;
  return 0;
}

inline hw_uint<16> f01_rd4_select(f00_cache& f00, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f01_rd4 read pattern: { f01_update_0[d0, d1] -> f00[1 + d0, d1] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  // Read schedule : { f01_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  // Write schedule: { f00_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  auto value_f00_f00_update_0_write0 = f00.f00_f00_update_0_write0_merged_banks_5.peek_1928();
  return value_f00_f00_update_0_write0;
  return 0;
}

// # of bundles = 2
// f00_update_0_write
//	f00_f00_update_0_write0
inline void f00_f00_update_0_write_bundle_write(hw_uint<16>& f00_update_0_write, f00_cache& f00, int d0, int d1, int dynamic_address) {
	hw_uint<16> f00_f00_update_0_write0_res = f00_update_0_write.extract<0, 15>();
	f00_f00_update_0_write0_write(f00_f00_update_0_write0_res, f00, d0, d1, dynamic_address);
}

// f01_update_0_read
//	f01_rd0
//	f01_rd1
//	f01_rd2
//	f01_rd3
//	f01_rd4
inline hw_uint<80> f00_f01_update_0_read_bundle_read(f00_cache& f00, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 5
    // f01_rd0
    // f01_rd1
    // f01_rd2
    // f01_rd3
    // f01_rd4

	hw_uint<80> result;
	hw_uint<16> f01_rd0_res = f01_rd0_select(f00, d0, d1, dynamic_address);
	set_at<0, 80>(result, f01_rd0_res);
	hw_uint<16> f01_rd1_res = f01_rd1_select(f00, d0, d1, dynamic_address);
	set_at<16, 80>(result, f01_rd1_res);
	hw_uint<16> f01_rd2_res = f01_rd2_select(f00, d0, d1, dynamic_address);
	set_at<32, 80>(result, f01_rd2_res);
	hw_uint<16> f01_rd3_res = f01_rd3_select(f00, d0, d1, dynamic_address);
	set_at<48, 80>(result, f01_rd3_res);
	hw_uint<16> f01_rd4_res = f01_rd4_select(f00, d0, d1, dynamic_address);
	set_at<64, 80>(result, f01_rd4_res);
	return result;
}

struct f01_f01_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-3, 1922], [-2, 1081]}
	// Capacity: 3854
	// # of read delays: 6
  // 0, 1, 1926, 1927, 1928, 3853
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1924> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 1924> f9;
	hw_uint<16> f10;


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

	inline hw_uint<16> peek_3852() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_3853() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1924
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1924 reading from capacity: 1
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

struct f01_cache {
  // # of banks: 1
  f01_f01_update_0_write0_merged_banks_5_cache f01_f01_update_0_write0_merged_banks_5;
};



inline void f01_f01_update_0_write0_write(hw_uint<16>& f01_f01_update_0_write0, f01_cache& f01, int d0, int d1, int dynamic_address) {
  f01.f01_f01_update_0_write0_merged_banks_5.push(f01_f01_update_0_write0);
}

inline hw_uint<16> f02_rd0_select(f01_cache& f01, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f02_rd0 read pattern: { f02_update_0[d0, d1] -> f01[-1 + d0, d1] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  // Read schedule : { f02_update_0[d0, d1] -> [3 + d1, 3 + d0, 10] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  // Write schedule: { f01_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  auto value_f01_f01_update_0_write0 = f01.f01_f01_update_0_write0_merged_banks_5.peek_1928();
  return value_f01_f01_update_0_write0;
  return 0;
}

inline hw_uint<16> f02_rd1_select(f01_cache& f01, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f02_rd1 read pattern: { f02_update_0[d0, d1] -> f01[d0, -1 + d1] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  // Read schedule : { f02_update_0[d0, d1] -> [3 + d1, 3 + d0, 10] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  // Write schedule: { f01_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  auto value_f01_f01_update_0_write0 = f01.f01_f01_update_0_write0_merged_banks_5.peek_3853();
  return value_f01_f01_update_0_write0;
  return 0;
}

inline hw_uint<16> f02_rd2_select(f01_cache& f01, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f02_rd2 read pattern: { f02_update_0[d0, d1] -> f01[d0, d1] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  // Read schedule : { f02_update_0[d0, d1] -> [3 + d1, 3 + d0, 10] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  // Write schedule: { f01_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  auto value_f01_f01_update_0_write0 = f01.f01_f01_update_0_write0_merged_banks_5.peek_1927();
  return value_f01_f01_update_0_write0;
  return 0;
}

inline hw_uint<16> f02_rd3_select(f01_cache& f01, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f02_rd3 read pattern: { f02_update_0[d0, d1] -> f01[d0, 1 + d1] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  // Read schedule : { f02_update_0[d0, d1] -> [3 + d1, 3 + d0, 10] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  // Write schedule: { f01_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  auto value_f01_f01_update_0_write0 = f01.f01_f01_update_0_write0_merged_banks_5.peek_1();
  return value_f01_f01_update_0_write0;
  return 0;
}

inline hw_uint<16> f02_rd4_select(f01_cache& f01, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f02_rd4 read pattern: { f02_update_0[d0, d1] -> f01[1 + d0, d1] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  // Read schedule : { f02_update_0[d0, d1] -> [3 + d1, 3 + d0, 10] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  // Write schedule: { f01_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  auto value_f01_f01_update_0_write0 = f01.f01_f01_update_0_write0_merged_banks_5.peek_1926();
  return value_f01_f01_update_0_write0;
  return 0;
}

// # of bundles = 2
// f01_update_0_write
//	f01_f01_update_0_write0
inline void f01_f01_update_0_write_bundle_write(hw_uint<16>& f01_update_0_write, f01_cache& f01, int d0, int d1, int dynamic_address) {
	hw_uint<16> f01_f01_update_0_write0_res = f01_update_0_write.extract<0, 15>();
	f01_f01_update_0_write0_write(f01_f01_update_0_write0_res, f01, d0, d1, dynamic_address);
}

// f02_update_0_read
//	f02_rd0
//	f02_rd1
//	f02_rd2
//	f02_rd3
//	f02_rd4
inline hw_uint<80> f01_f02_update_0_read_bundle_read(f01_cache& f01, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 5
    // f02_rd0
    // f02_rd1
    // f02_rd2
    // f02_rd3
    // f02_rd4

	hw_uint<80> result;
	hw_uint<16> f02_rd0_res = f02_rd0_select(f01, d0, d1, dynamic_address);
	set_at<0, 80>(result, f02_rd0_res);
	hw_uint<16> f02_rd1_res = f02_rd1_select(f01, d0, d1, dynamic_address);
	set_at<16, 80>(result, f02_rd1_res);
	hw_uint<16> f02_rd2_res = f02_rd2_select(f01, d0, d1, dynamic_address);
	set_at<32, 80>(result, f02_rd2_res);
	hw_uint<16> f02_rd3_res = f02_rd3_select(f01, d0, d1, dynamic_address);
	set_at<48, 80>(result, f02_rd3_res);
	hw_uint<16> f02_rd4_res = f02_rd4_select(f01, d0, d1, dynamic_address);
	set_at<64, 80>(result, f02_rd4_res);
	return result;
}

struct f02_f02_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-2, 1921], [-1, 1080]}
	// Capacity: 3850
	// # of read delays: 6
  // 0, 1, 1924, 1925, 1926, 3849
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1922> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 1922> f9;
	hw_uint<16> f10;


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

	inline hw_uint<16> peek_3848() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_3849() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1922
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1922 reading from capacity: 1
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

struct f02_cache {
  // # of banks: 1
  f02_f02_update_0_write0_merged_banks_5_cache f02_f02_update_0_write0_merged_banks_5;
};



inline void f02_f02_update_0_write0_write(hw_uint<16>& f02_f02_update_0_write0, f02_cache& f02, int d0, int d1, int dynamic_address) {
  f02.f02_f02_update_0_write0_merged_banks_5.push(f02_f02_update_0_write0);
}

inline hw_uint<16> f03_rd0_select(f02_cache& f02, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f03_rd0 read pattern: { f03_update_0[d0, d1] -> f02[-1 + d0, d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // Read schedule : { f03_update_0[d0, d1] -> [4 + d1, 4 + d0, 13] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // Write schedule: { f02_update_0[d0, d1] -> [3 + d1, 3 + d0, 10] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  auto value_f02_f02_update_0_write0 = f02.f02_f02_update_0_write0_merged_banks_5.peek_1926();
  return value_f02_f02_update_0_write0;
  return 0;
}

inline hw_uint<16> f03_rd1_select(f02_cache& f02, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f03_rd1 read pattern: { f03_update_0[d0, d1] -> f02[d0, -1 + d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // Read schedule : { f03_update_0[d0, d1] -> [4 + d1, 4 + d0, 13] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // Write schedule: { f02_update_0[d0, d1] -> [3 + d1, 3 + d0, 10] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  auto value_f02_f02_update_0_write0 = f02.f02_f02_update_0_write0_merged_banks_5.peek_3849();
  return value_f02_f02_update_0_write0;
  return 0;
}

inline hw_uint<16> f03_rd2_select(f02_cache& f02, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f03_rd2 read pattern: { f03_update_0[d0, d1] -> f02[d0, d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // Read schedule : { f03_update_0[d0, d1] -> [4 + d1, 4 + d0, 13] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // Write schedule: { f02_update_0[d0, d1] -> [3 + d1, 3 + d0, 10] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  auto value_f02_f02_update_0_write0 = f02.f02_f02_update_0_write0_merged_banks_5.peek_1925();
  return value_f02_f02_update_0_write0;
  return 0;
}

inline hw_uint<16> f03_rd3_select(f02_cache& f02, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f03_rd3 read pattern: { f03_update_0[d0, d1] -> f02[d0, 1 + d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // Read schedule : { f03_update_0[d0, d1] -> [4 + d1, 4 + d0, 13] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // Write schedule: { f02_update_0[d0, d1] -> [3 + d1, 3 + d0, 10] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  auto value_f02_f02_update_0_write0 = f02.f02_f02_update_0_write0_merged_banks_5.peek_1();
  return value_f02_f02_update_0_write0;
  return 0;
}

inline hw_uint<16> f03_rd4_select(f02_cache& f02, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f03_rd4 read pattern: { f03_update_0[d0, d1] -> f02[1 + d0, d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // Read schedule : { f03_update_0[d0, d1] -> [4 + d1, 4 + d0, 13] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // Write schedule: { f02_update_0[d0, d1] -> [3 + d1, 3 + d0, 10] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  auto value_f02_f02_update_0_write0 = f02.f02_f02_update_0_write0_merged_banks_5.peek_1924();
  return value_f02_f02_update_0_write0;
  return 0;
}

// # of bundles = 2
// f02_update_0_write
//	f02_f02_update_0_write0
inline void f02_f02_update_0_write_bundle_write(hw_uint<16>& f02_update_0_write, f02_cache& f02, int d0, int d1, int dynamic_address) {
	hw_uint<16> f02_f02_update_0_write0_res = f02_update_0_write.extract<0, 15>();
	f02_f02_update_0_write0_write(f02_f02_update_0_write0_res, f02, d0, d1, dynamic_address);
}

// f03_update_0_read
//	f03_rd0
//	f03_rd1
//	f03_rd2
//	f03_rd3
//	f03_rd4
inline hw_uint<80> f02_f03_update_0_read_bundle_read(f02_cache& f02, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 5
    // f03_rd0
    // f03_rd1
    // f03_rd2
    // f03_rd3
    // f03_rd4

	hw_uint<80> result;
	hw_uint<16> f03_rd0_res = f03_rd0_select(f02, d0, d1, dynamic_address);
	set_at<0, 80>(result, f03_rd0_res);
	hw_uint<16> f03_rd1_res = f03_rd1_select(f02, d0, d1, dynamic_address);
	set_at<16, 80>(result, f03_rd1_res);
	hw_uint<16> f03_rd2_res = f03_rd2_select(f02, d0, d1, dynamic_address);
	set_at<32, 80>(result, f03_rd2_res);
	hw_uint<16> f03_rd3_res = f03_rd3_select(f02, d0, d1, dynamic_address);
	set_at<48, 80>(result, f03_rd3_res);
	hw_uint<16> f03_rd4_res = f03_rd4_select(f02, d0, d1, dynamic_address);
	set_at<64, 80>(result, f03_rd4_res);
	return result;
}

struct f03_f03_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-1, 1920], [0, 1079]}
	// Capacity: 3846
	// # of read delays: 6
  // 0, 1, 1922, 1923, 1924, 3845
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1920> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 1920> f9;
	hw_uint<16> f10;


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

	inline hw_uint<16> peek_3844() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_3845() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1920
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1920 reading from capacity: 1
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

struct f03_cache {
  // # of banks: 1
  f03_f03_update_0_write0_merged_banks_5_cache f03_f03_update_0_write0_merged_banks_5;
};



inline void f03_f03_update_0_write0_write(hw_uint<16>& f03_f03_update_0_write0, f03_cache& f03, int d0, int d1, int dynamic_address) {
  f03.f03_f03_update_0_write0_merged_banks_5.push(f03_f03_update_0_write0);
}

inline hw_uint<16> f04_rd0_select(f03_cache& f03, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f04_rd0 read pattern: { f04_update_0[d0, d1] -> f03[-1 + d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { f04_update_0[d0, d1] -> [5 + d1, 5 + d0, 16] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { f03_update_0[d0, d1] -> [4 + d1, 4 + d0, 13] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  auto value_f03_f03_update_0_write0 = f03.f03_f03_update_0_write0_merged_banks_5.peek_1924();
  return value_f03_f03_update_0_write0;
  return 0;
}

inline hw_uint<16> f04_rd1_select(f03_cache& f03, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f04_rd1 read pattern: { f04_update_0[d0, d1] -> f03[d0, -1 + d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { f04_update_0[d0, d1] -> [5 + d1, 5 + d0, 16] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { f03_update_0[d0, d1] -> [4 + d1, 4 + d0, 13] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  auto value_f03_f03_update_0_write0 = f03.f03_f03_update_0_write0_merged_banks_5.peek_3845();
  return value_f03_f03_update_0_write0;
  return 0;
}

inline hw_uint<16> f04_rd2_select(f03_cache& f03, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f04_rd2 read pattern: { f04_update_0[d0, d1] -> f03[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { f04_update_0[d0, d1] -> [5 + d1, 5 + d0, 16] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { f03_update_0[d0, d1] -> [4 + d1, 4 + d0, 13] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  auto value_f03_f03_update_0_write0 = f03.f03_f03_update_0_write0_merged_banks_5.peek_1923();
  return value_f03_f03_update_0_write0;
  return 0;
}

inline hw_uint<16> f04_rd3_select(f03_cache& f03, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f04_rd3 read pattern: { f04_update_0[d0, d1] -> f03[d0, 1 + d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { f04_update_0[d0, d1] -> [5 + d1, 5 + d0, 16] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { f03_update_0[d0, d1] -> [4 + d1, 4 + d0, 13] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  auto value_f03_f03_update_0_write0 = f03.f03_f03_update_0_write0_merged_banks_5.peek_1();
  return value_f03_f03_update_0_write0;
  return 0;
}

inline hw_uint<16> f04_rd4_select(f03_cache& f03, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f04_rd4 read pattern: { f04_update_0[d0, d1] -> f03[1 + d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { f04_update_0[d0, d1] -> [5 + d1, 5 + d0, 16] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { f03_update_0[d0, d1] -> [4 + d1, 4 + d0, 13] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  auto value_f03_f03_update_0_write0 = f03.f03_f03_update_0_write0_merged_banks_5.peek_1922();
  return value_f03_f03_update_0_write0;
  return 0;
}

// # of bundles = 2
// f03_update_0_write
//	f03_f03_update_0_write0
inline void f03_f03_update_0_write_bundle_write(hw_uint<16>& f03_update_0_write, f03_cache& f03, int d0, int d1, int dynamic_address) {
	hw_uint<16> f03_f03_update_0_write0_res = f03_update_0_write.extract<0, 15>();
	f03_f03_update_0_write0_write(f03_f03_update_0_write0_res, f03, d0, d1, dynamic_address);
}

// f04_update_0_read
//	f04_rd0
//	f04_rd1
//	f04_rd2
//	f04_rd3
//	f04_rd4
inline hw_uint<80> f03_f04_update_0_read_bundle_read(f03_cache& f03, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 5
    // f04_rd0
    // f04_rd1
    // f04_rd2
    // f04_rd3
    // f04_rd4

	hw_uint<80> result;
	hw_uint<16> f04_rd0_res = f04_rd0_select(f03, d0, d1, dynamic_address);
	set_at<0, 80>(result, f04_rd0_res);
	hw_uint<16> f04_rd1_res = f04_rd1_select(f03, d0, d1, dynamic_address);
	set_at<16, 80>(result, f04_rd1_res);
	hw_uint<16> f04_rd2_res = f04_rd2_select(f03, d0, d1, dynamic_address);
	set_at<32, 80>(result, f04_rd2_res);
	hw_uint<16> f04_rd3_res = f04_rd3_select(f03, d0, d1, dynamic_address);
	set_at<48, 80>(result, f04_rd3_res);
	hw_uint<16> f04_rd4_res = f04_rd4_select(f03, d0, d1, dynamic_address);
	set_at<64, 80>(result, f04_rd4_res);
	return result;
}

struct f04_f04_update_0_write0_to_final_rd0_cache {
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

struct f04_cache {
  // # of banks: 1
  f04_f04_update_0_write0_to_final_rd0_cache f04_f04_update_0_write0_to_final_rd0;
};



inline void f04_f04_update_0_write0_write(hw_uint<16>& f04_f04_update_0_write0, f04_cache& f04, int d0, int d1, int dynamic_address) {
  f04.f04_f04_update_0_write0_to_final_rd0.push(f04_f04_update_0_write0);
}

inline hw_uint<16> final_rd0_select(f04_cache& f04, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_rd0 read pattern: { final_update_0[d0, d1] -> f04[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { final_update_0[d0, d1] -> [5 + d1, 5 + d0, 17] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { f04_update_0[d0, d1] -> [5 + d1, 5 + d0, 16] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  auto value_f04_f04_update_0_write0 = f04.f04_f04_update_0_write0_to_final_rd0.peek(/* one reader or all rams */ 0);
  return value_f04_f04_update_0_write0;
  return 0;
}

// # of bundles = 2
// f04_update_0_write
//	f04_f04_update_0_write0
inline void f04_f04_update_0_write_bundle_write(hw_uint<16>& f04_update_0_write, f04_cache& f04, int d0, int d1, int dynamic_address) {
	hw_uint<16> f04_f04_update_0_write0_res = f04_update_0_write.extract<0, 15>();
	f04_f04_update_0_write0_write(f04_f04_update_0_write0_res, f04, d0, d1, dynamic_address);
}

// final_update_0_read
//	final_rd0
inline hw_uint<16> f04_final_update_0_read_bundle_read(f04_cache& f04, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // final_rd0

	hw_uint<16> result;
	hw_uint<16> final_rd0_res = final_rd0_select(f04, d0, d1, dynamic_address);
	set_at<0, 16>(result, final_rd0_res);
	return result;
}

struct f10_f10_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-4, 1923], [-3, 1082]}
	// Capacity: 3858
	// # of read delays: 6
  // 0, 1, 1928, 1929, 1930, 3857
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1926> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 1926> f9;
	hw_uint<16> f10;


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

	inline hw_uint<16> peek_3856() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_3857() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1926
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1926 reading from capacity: 1
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

struct f10_cache {
  // # of banks: 1
  f10_f10_update_0_write0_merged_banks_5_cache f10_f10_update_0_write0_merged_banks_5;
};



inline void f10_f10_update_0_write0_write(hw_uint<16>& f10_f10_update_0_write0, f10_cache& f10, int d0, int d1, int dynamic_address) {
  f10.f10_f10_update_0_write0_merged_banks_5.push(f10_f10_update_0_write0);
}

inline hw_uint<16> f11_rd0_select(f10_cache& f10, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f11_rd0 read pattern: { f11_update_0[d0, d1] -> f10[-1 + d0, d1] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  // Read schedule : { f11_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  // Write schedule: { f10_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  auto value_f10_f10_update_0_write0 = f10.f10_f10_update_0_write0_merged_banks_5.peek_1930();
  return value_f10_f10_update_0_write0;
  return 0;
}

inline hw_uint<16> f11_rd1_select(f10_cache& f10, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f11_rd1 read pattern: { f11_update_0[d0, d1] -> f10[d0, -1 + d1] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  // Read schedule : { f11_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  // Write schedule: { f10_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  auto value_f10_f10_update_0_write0 = f10.f10_f10_update_0_write0_merged_banks_5.peek_3857();
  return value_f10_f10_update_0_write0;
  return 0;
}

inline hw_uint<16> f11_rd2_select(f10_cache& f10, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f11_rd2 read pattern: { f11_update_0[d0, d1] -> f10[d0, d1] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  // Read schedule : { f11_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  // Write schedule: { f10_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  auto value_f10_f10_update_0_write0 = f10.f10_f10_update_0_write0_merged_banks_5.peek_1929();
  return value_f10_f10_update_0_write0;
  return 0;
}

inline hw_uint<16> f11_rd3_select(f10_cache& f10, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f11_rd3 read pattern: { f11_update_0[d0, d1] -> f10[d0, 1 + d1] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  // Read schedule : { f11_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  // Write schedule: { f10_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  auto value_f10_f10_update_0_write0 = f10.f10_f10_update_0_write0_merged_banks_5.peek_1();
  return value_f10_f10_update_0_write0;
  return 0;
}

inline hw_uint<16> f11_rd4_select(f10_cache& f10, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f11_rd4 read pattern: { f11_update_0[d0, d1] -> f10[1 + d0, d1] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  // Read schedule : { f11_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  // Write schedule: { f10_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  auto value_f10_f10_update_0_write0 = f10.f10_f10_update_0_write0_merged_banks_5.peek_1928();
  return value_f10_f10_update_0_write0;
  return 0;
}

// # of bundles = 2
// f10_update_0_write
//	f10_f10_update_0_write0
inline void f10_f10_update_0_write_bundle_write(hw_uint<16>& f10_update_0_write, f10_cache& f10, int d0, int d1, int dynamic_address) {
	hw_uint<16> f10_f10_update_0_write0_res = f10_update_0_write.extract<0, 15>();
	f10_f10_update_0_write0_write(f10_f10_update_0_write0_res, f10, d0, d1, dynamic_address);
}

// f11_update_0_read
//	f11_rd0
//	f11_rd1
//	f11_rd2
//	f11_rd3
//	f11_rd4
inline hw_uint<80> f10_f11_update_0_read_bundle_read(f10_cache& f10, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 5
    // f11_rd0
    // f11_rd1
    // f11_rd2
    // f11_rd3
    // f11_rd4

	hw_uint<80> result;
	hw_uint<16> f11_rd0_res = f11_rd0_select(f10, d0, d1, dynamic_address);
	set_at<0, 80>(result, f11_rd0_res);
	hw_uint<16> f11_rd1_res = f11_rd1_select(f10, d0, d1, dynamic_address);
	set_at<16, 80>(result, f11_rd1_res);
	hw_uint<16> f11_rd2_res = f11_rd2_select(f10, d0, d1, dynamic_address);
	set_at<32, 80>(result, f11_rd2_res);
	hw_uint<16> f11_rd3_res = f11_rd3_select(f10, d0, d1, dynamic_address);
	set_at<48, 80>(result, f11_rd3_res);
	hw_uint<16> f11_rd4_res = f11_rd4_select(f10, d0, d1, dynamic_address);
	set_at<64, 80>(result, f11_rd4_res);
	return result;
}

struct f11_f11_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-3, 1922], [-2, 1081]}
	// Capacity: 3854
	// # of read delays: 6
  // 0, 1, 1926, 1927, 1928, 3853
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1924> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 1924> f9;
	hw_uint<16> f10;


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

	inline hw_uint<16> peek_3852() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_3853() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1924
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1924 reading from capacity: 1
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

struct f11_cache {
  // # of banks: 1
  f11_f11_update_0_write0_merged_banks_5_cache f11_f11_update_0_write0_merged_banks_5;
};



inline void f11_f11_update_0_write0_write(hw_uint<16>& f11_f11_update_0_write0, f11_cache& f11, int d0, int d1, int dynamic_address) {
  f11.f11_f11_update_0_write0_merged_banks_5.push(f11_f11_update_0_write0);
}

inline hw_uint<16> f12_rd0_select(f11_cache& f11, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f12_rd0 read pattern: { f12_update_0[d0, d1] -> f11[-1 + d0, d1] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  // Read schedule : { f12_update_0[d0, d1] -> [3 + d1, 3 + d0, 9] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  // Write schedule: { f11_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  auto value_f11_f11_update_0_write0 = f11.f11_f11_update_0_write0_merged_banks_5.peek_1928();
  return value_f11_f11_update_0_write0;
  return 0;
}

inline hw_uint<16> f12_rd1_select(f11_cache& f11, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f12_rd1 read pattern: { f12_update_0[d0, d1] -> f11[d0, -1 + d1] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  // Read schedule : { f12_update_0[d0, d1] -> [3 + d1, 3 + d0, 9] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  // Write schedule: { f11_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  auto value_f11_f11_update_0_write0 = f11.f11_f11_update_0_write0_merged_banks_5.peek_3853();
  return value_f11_f11_update_0_write0;
  return 0;
}

inline hw_uint<16> f12_rd2_select(f11_cache& f11, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f12_rd2 read pattern: { f12_update_0[d0, d1] -> f11[d0, d1] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  // Read schedule : { f12_update_0[d0, d1] -> [3 + d1, 3 + d0, 9] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  // Write schedule: { f11_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  auto value_f11_f11_update_0_write0 = f11.f11_f11_update_0_write0_merged_banks_5.peek_1927();
  return value_f11_f11_update_0_write0;
  return 0;
}

inline hw_uint<16> f12_rd3_select(f11_cache& f11, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f12_rd3 read pattern: { f12_update_0[d0, d1] -> f11[d0, 1 + d1] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  // Read schedule : { f12_update_0[d0, d1] -> [3 + d1, 3 + d0, 9] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  // Write schedule: { f11_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  auto value_f11_f11_update_0_write0 = f11.f11_f11_update_0_write0_merged_banks_5.peek_1();
  return value_f11_f11_update_0_write0;
  return 0;
}

inline hw_uint<16> f12_rd4_select(f11_cache& f11, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f12_rd4 read pattern: { f12_update_0[d0, d1] -> f11[1 + d0, d1] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  // Read schedule : { f12_update_0[d0, d1] -> [3 + d1, 3 + d0, 9] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  // Write schedule: { f11_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  auto value_f11_f11_update_0_write0 = f11.f11_f11_update_0_write0_merged_banks_5.peek_1926();
  return value_f11_f11_update_0_write0;
  return 0;
}

// # of bundles = 2
// f11_update_0_write
//	f11_f11_update_0_write0
inline void f11_f11_update_0_write_bundle_write(hw_uint<16>& f11_update_0_write, f11_cache& f11, int d0, int d1, int dynamic_address) {
	hw_uint<16> f11_f11_update_0_write0_res = f11_update_0_write.extract<0, 15>();
	f11_f11_update_0_write0_write(f11_f11_update_0_write0_res, f11, d0, d1, dynamic_address);
}

// f12_update_0_read
//	f12_rd0
//	f12_rd1
//	f12_rd2
//	f12_rd3
//	f12_rd4
inline hw_uint<80> f11_f12_update_0_read_bundle_read(f11_cache& f11, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 5
    // f12_rd0
    // f12_rd1
    // f12_rd2
    // f12_rd3
    // f12_rd4

	hw_uint<80> result;
	hw_uint<16> f12_rd0_res = f12_rd0_select(f11, d0, d1, dynamic_address);
	set_at<0, 80>(result, f12_rd0_res);
	hw_uint<16> f12_rd1_res = f12_rd1_select(f11, d0, d1, dynamic_address);
	set_at<16, 80>(result, f12_rd1_res);
	hw_uint<16> f12_rd2_res = f12_rd2_select(f11, d0, d1, dynamic_address);
	set_at<32, 80>(result, f12_rd2_res);
	hw_uint<16> f12_rd3_res = f12_rd3_select(f11, d0, d1, dynamic_address);
	set_at<48, 80>(result, f12_rd3_res);
	hw_uint<16> f12_rd4_res = f12_rd4_select(f11, d0, d1, dynamic_address);
	set_at<64, 80>(result, f12_rd4_res);
	return result;
}

struct f12_f12_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-2, 1921], [-1, 1080]}
	// Capacity: 3850
	// # of read delays: 6
  // 0, 1, 1924, 1925, 1926, 3849
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1922> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 1922> f9;
	hw_uint<16> f10;


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

	inline hw_uint<16> peek_3848() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_3849() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1922
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1922 reading from capacity: 1
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

struct f12_cache {
  // # of banks: 1
  f12_f12_update_0_write0_merged_banks_5_cache f12_f12_update_0_write0_merged_banks_5;
};



inline void f12_f12_update_0_write0_write(hw_uint<16>& f12_f12_update_0_write0, f12_cache& f12, int d0, int d1, int dynamic_address) {
  f12.f12_f12_update_0_write0_merged_banks_5.push(f12_f12_update_0_write0);
}

inline hw_uint<16> f13_rd0_select(f12_cache& f12, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f13_rd0 read pattern: { f13_update_0[d0, d1] -> f12[-1 + d0, d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // Read schedule : { f13_update_0[d0, d1] -> [4 + d1, 4 + d0, 12] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // Write schedule: { f12_update_0[d0, d1] -> [3 + d1, 3 + d0, 9] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  auto value_f12_f12_update_0_write0 = f12.f12_f12_update_0_write0_merged_banks_5.peek_1926();
  return value_f12_f12_update_0_write0;
  return 0;
}

inline hw_uint<16> f13_rd1_select(f12_cache& f12, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f13_rd1 read pattern: { f13_update_0[d0, d1] -> f12[d0, -1 + d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // Read schedule : { f13_update_0[d0, d1] -> [4 + d1, 4 + d0, 12] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // Write schedule: { f12_update_0[d0, d1] -> [3 + d1, 3 + d0, 9] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  auto value_f12_f12_update_0_write0 = f12.f12_f12_update_0_write0_merged_banks_5.peek_3849();
  return value_f12_f12_update_0_write0;
  return 0;
}

inline hw_uint<16> f13_rd2_select(f12_cache& f12, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f13_rd2 read pattern: { f13_update_0[d0, d1] -> f12[d0, d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // Read schedule : { f13_update_0[d0, d1] -> [4 + d1, 4 + d0, 12] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // Write schedule: { f12_update_0[d0, d1] -> [3 + d1, 3 + d0, 9] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  auto value_f12_f12_update_0_write0 = f12.f12_f12_update_0_write0_merged_banks_5.peek_1925();
  return value_f12_f12_update_0_write0;
  return 0;
}

inline hw_uint<16> f13_rd3_select(f12_cache& f12, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f13_rd3 read pattern: { f13_update_0[d0, d1] -> f12[d0, 1 + d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // Read schedule : { f13_update_0[d0, d1] -> [4 + d1, 4 + d0, 12] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // Write schedule: { f12_update_0[d0, d1] -> [3 + d1, 3 + d0, 9] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  auto value_f12_f12_update_0_write0 = f12.f12_f12_update_0_write0_merged_banks_5.peek_1();
  return value_f12_f12_update_0_write0;
  return 0;
}

inline hw_uint<16> f13_rd4_select(f12_cache& f12, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f13_rd4 read pattern: { f13_update_0[d0, d1] -> f12[1 + d0, d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // Read schedule : { f13_update_0[d0, d1] -> [4 + d1, 4 + d0, 12] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // Write schedule: { f12_update_0[d0, d1] -> [3 + d1, 3 + d0, 9] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  auto value_f12_f12_update_0_write0 = f12.f12_f12_update_0_write0_merged_banks_5.peek_1924();
  return value_f12_f12_update_0_write0;
  return 0;
}

// # of bundles = 2
// f12_update_0_write
//	f12_f12_update_0_write0
inline void f12_f12_update_0_write_bundle_write(hw_uint<16>& f12_update_0_write, f12_cache& f12, int d0, int d1, int dynamic_address) {
	hw_uint<16> f12_f12_update_0_write0_res = f12_update_0_write.extract<0, 15>();
	f12_f12_update_0_write0_write(f12_f12_update_0_write0_res, f12, d0, d1, dynamic_address);
}

// f13_update_0_read
//	f13_rd0
//	f13_rd1
//	f13_rd2
//	f13_rd3
//	f13_rd4
inline hw_uint<80> f12_f13_update_0_read_bundle_read(f12_cache& f12, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 5
    // f13_rd0
    // f13_rd1
    // f13_rd2
    // f13_rd3
    // f13_rd4

	hw_uint<80> result;
	hw_uint<16> f13_rd0_res = f13_rd0_select(f12, d0, d1, dynamic_address);
	set_at<0, 80>(result, f13_rd0_res);
	hw_uint<16> f13_rd1_res = f13_rd1_select(f12, d0, d1, dynamic_address);
	set_at<16, 80>(result, f13_rd1_res);
	hw_uint<16> f13_rd2_res = f13_rd2_select(f12, d0, d1, dynamic_address);
	set_at<32, 80>(result, f13_rd2_res);
	hw_uint<16> f13_rd3_res = f13_rd3_select(f12, d0, d1, dynamic_address);
	set_at<48, 80>(result, f13_rd3_res);
	hw_uint<16> f13_rd4_res = f13_rd4_select(f12, d0, d1, dynamic_address);
	set_at<64, 80>(result, f13_rd4_res);
	return result;
}

struct f13_f13_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-1, 1920], [0, 1079]}
	// Capacity: 3846
	// # of read delays: 6
  // 0, 1, 1922, 1923, 1924, 3845
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1920> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 1920> f9;
	hw_uint<16> f10;


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

	inline hw_uint<16> peek_3844() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_3845() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1920
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1920 reading from capacity: 1
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

struct f13_cache {
  // # of banks: 1
  f13_f13_update_0_write0_merged_banks_5_cache f13_f13_update_0_write0_merged_banks_5;
};



inline void f13_f13_update_0_write0_write(hw_uint<16>& f13_f13_update_0_write0, f13_cache& f13, int d0, int d1, int dynamic_address) {
  f13.f13_f13_update_0_write0_merged_banks_5.push(f13_f13_update_0_write0);
}

inline hw_uint<16> f14_rd0_select(f13_cache& f13, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f14_rd0 read pattern: { f14_update_0[d0, d1] -> f13[-1 + d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { f14_update_0[d0, d1] -> [5 + d1, 5 + d0, 15] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { f13_update_0[d0, d1] -> [4 + d1, 4 + d0, 12] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  auto value_f13_f13_update_0_write0 = f13.f13_f13_update_0_write0_merged_banks_5.peek_1924();
  return value_f13_f13_update_0_write0;
  return 0;
}

inline hw_uint<16> f14_rd1_select(f13_cache& f13, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f14_rd1 read pattern: { f14_update_0[d0, d1] -> f13[d0, -1 + d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { f14_update_0[d0, d1] -> [5 + d1, 5 + d0, 15] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { f13_update_0[d0, d1] -> [4 + d1, 4 + d0, 12] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  auto value_f13_f13_update_0_write0 = f13.f13_f13_update_0_write0_merged_banks_5.peek_3845();
  return value_f13_f13_update_0_write0;
  return 0;
}

inline hw_uint<16> f14_rd2_select(f13_cache& f13, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f14_rd2 read pattern: { f14_update_0[d0, d1] -> f13[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { f14_update_0[d0, d1] -> [5 + d1, 5 + d0, 15] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { f13_update_0[d0, d1] -> [4 + d1, 4 + d0, 12] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  auto value_f13_f13_update_0_write0 = f13.f13_f13_update_0_write0_merged_banks_5.peek_1923();
  return value_f13_f13_update_0_write0;
  return 0;
}

inline hw_uint<16> f14_rd3_select(f13_cache& f13, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f14_rd3 read pattern: { f14_update_0[d0, d1] -> f13[d0, 1 + d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { f14_update_0[d0, d1] -> [5 + d1, 5 + d0, 15] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { f13_update_0[d0, d1] -> [4 + d1, 4 + d0, 12] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  auto value_f13_f13_update_0_write0 = f13.f13_f13_update_0_write0_merged_banks_5.peek_1();
  return value_f13_f13_update_0_write0;
  return 0;
}

inline hw_uint<16> f14_rd4_select(f13_cache& f13, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f14_rd4 read pattern: { f14_update_0[d0, d1] -> f13[1 + d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { f14_update_0[d0, d1] -> [5 + d1, 5 + d0, 15] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { f13_update_0[d0, d1] -> [4 + d1, 4 + d0, 12] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  auto value_f13_f13_update_0_write0 = f13.f13_f13_update_0_write0_merged_banks_5.peek_1922();
  return value_f13_f13_update_0_write0;
  return 0;
}

// # of bundles = 2
// f13_update_0_write
//	f13_f13_update_0_write0
inline void f13_f13_update_0_write_bundle_write(hw_uint<16>& f13_update_0_write, f13_cache& f13, int d0, int d1, int dynamic_address) {
	hw_uint<16> f13_f13_update_0_write0_res = f13_update_0_write.extract<0, 15>();
	f13_f13_update_0_write0_write(f13_f13_update_0_write0_res, f13, d0, d1, dynamic_address);
}

// f14_update_0_read
//	f14_rd0
//	f14_rd1
//	f14_rd2
//	f14_rd3
//	f14_rd4
inline hw_uint<80> f13_f14_update_0_read_bundle_read(f13_cache& f13, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 5
    // f14_rd0
    // f14_rd1
    // f14_rd2
    // f14_rd3
    // f14_rd4

	hw_uint<80> result;
	hw_uint<16> f14_rd0_res = f14_rd0_select(f13, d0, d1, dynamic_address);
	set_at<0, 80>(result, f14_rd0_res);
	hw_uint<16> f14_rd1_res = f14_rd1_select(f13, d0, d1, dynamic_address);
	set_at<16, 80>(result, f14_rd1_res);
	hw_uint<16> f14_rd2_res = f14_rd2_select(f13, d0, d1, dynamic_address);
	set_at<32, 80>(result, f14_rd2_res);
	hw_uint<16> f14_rd3_res = f14_rd3_select(f13, d0, d1, dynamic_address);
	set_at<48, 80>(result, f14_rd3_res);
	hw_uint<16> f14_rd4_res = f14_rd4_select(f13, d0, d1, dynamic_address);
	set_at<64, 80>(result, f14_rd4_res);
	return result;
}

struct f14_f14_update_0_write0_to_final_rd0_cache {
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

struct f14_cache {
  // # of banks: 1
  f14_f14_update_0_write0_to_final_rd0_cache f14_f14_update_0_write0_to_final_rd0;
};



inline void f14_f14_update_0_write0_write(hw_uint<16>& f14_f14_update_0_write0, f14_cache& f14, int d0, int d1, int dynamic_address) {
  f14.f14_f14_update_0_write0_to_final_rd0.push(f14_f14_update_0_write0);
}

inline hw_uint<16> final_rd0_select(f14_cache& f14, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_rd0 read pattern: { final_update_0[d0, d1] -> f14[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { final_update_0[d0, d1] -> [5 + d1, 5 + d0, 17] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { f14_update_0[d0, d1] -> [5 + d1, 5 + d0, 15] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  auto value_f14_f14_update_0_write0 = f14.f14_f14_update_0_write0_to_final_rd0.peek(/* one reader or all rams */ 0);
  return value_f14_f14_update_0_write0;
  return 0;
}

// # of bundles = 2
// f14_update_0_write
//	f14_f14_update_0_write0
inline void f14_f14_update_0_write_bundle_write(hw_uint<16>& f14_update_0_write, f14_cache& f14, int d0, int d1, int dynamic_address) {
	hw_uint<16> f14_f14_update_0_write0_res = f14_update_0_write.extract<0, 15>();
	f14_f14_update_0_write0_write(f14_f14_update_0_write0_res, f14, d0, d1, dynamic_address);
}

// final_update_0_read
//	final_rd0
inline hw_uint<16> f14_final_update_0_read_bundle_read(f14_cache& f14, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // final_rd0

	hw_uint<16> result;
	hw_uint<16> final_rd0_res = final_rd0_select(f14, d0, d1, dynamic_address);
	set_at<0, 16>(result, final_rd0_res);
	return result;
}

struct f20_f20_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-4, 1923], [-3, 1082]}
	// Capacity: 3858
	// # of read delays: 6
  // 0, 1, 1928, 1929, 1930, 3857
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1926> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 1926> f9;
	hw_uint<16> f10;


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

	inline hw_uint<16> peek_3856() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_3857() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1926
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1926 reading from capacity: 1
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

struct f20_cache {
  // # of banks: 1
  f20_f20_update_0_write0_merged_banks_5_cache f20_f20_update_0_write0_merged_banks_5;
};



inline void f20_f20_update_0_write0_write(hw_uint<16>& f20_f20_update_0_write0, f20_cache& f20, int d0, int d1, int dynamic_address) {
  f20.f20_f20_update_0_write0_merged_banks_5.push(f20_f20_update_0_write0);
}

inline hw_uint<16> f21_rd0_select(f20_cache& f20, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f21_rd0 read pattern: { f21_update_0[d0, d1] -> f20[-1 + d0, d1] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  // Read schedule : { f21_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  // Write schedule: { f20_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  auto value_f20_f20_update_0_write0 = f20.f20_f20_update_0_write0_merged_banks_5.peek_1930();
  return value_f20_f20_update_0_write0;
  return 0;
}

inline hw_uint<16> f21_rd1_select(f20_cache& f20, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f21_rd1 read pattern: { f21_update_0[d0, d1] -> f20[d0, -1 + d1] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  // Read schedule : { f21_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  // Write schedule: { f20_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  auto value_f20_f20_update_0_write0 = f20.f20_f20_update_0_write0_merged_banks_5.peek_3857();
  return value_f20_f20_update_0_write0;
  return 0;
}

inline hw_uint<16> f21_rd2_select(f20_cache& f20, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f21_rd2 read pattern: { f21_update_0[d0, d1] -> f20[d0, d1] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  // Read schedule : { f21_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  // Write schedule: { f20_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  auto value_f20_f20_update_0_write0 = f20.f20_f20_update_0_write0_merged_banks_5.peek_1929();
  return value_f20_f20_update_0_write0;
  return 0;
}

inline hw_uint<16> f21_rd3_select(f20_cache& f20, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f21_rd3 read pattern: { f21_update_0[d0, d1] -> f20[d0, 1 + d1] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  // Read schedule : { f21_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  // Write schedule: { f20_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  auto value_f20_f20_update_0_write0 = f20.f20_f20_update_0_write0_merged_banks_5.peek_1();
  return value_f20_f20_update_0_write0;
  return 0;
}

inline hw_uint<16> f21_rd4_select(f20_cache& f20, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f21_rd4 read pattern: { f21_update_0[d0, d1] -> f20[1 + d0, d1] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  // Read schedule : { f21_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  // Write schedule: { f20_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  auto value_f20_f20_update_0_write0 = f20.f20_f20_update_0_write0_merged_banks_5.peek_1928();
  return value_f20_f20_update_0_write0;
  return 0;
}

// # of bundles = 2
// f20_update_0_write
//	f20_f20_update_0_write0
inline void f20_f20_update_0_write_bundle_write(hw_uint<16>& f20_update_0_write, f20_cache& f20, int d0, int d1, int dynamic_address) {
	hw_uint<16> f20_f20_update_0_write0_res = f20_update_0_write.extract<0, 15>();
	f20_f20_update_0_write0_write(f20_f20_update_0_write0_res, f20, d0, d1, dynamic_address);
}

// f21_update_0_read
//	f21_rd0
//	f21_rd1
//	f21_rd2
//	f21_rd3
//	f21_rd4
inline hw_uint<80> f20_f21_update_0_read_bundle_read(f20_cache& f20, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 5
    // f21_rd0
    // f21_rd1
    // f21_rd2
    // f21_rd3
    // f21_rd4

	hw_uint<80> result;
	hw_uint<16> f21_rd0_res = f21_rd0_select(f20, d0, d1, dynamic_address);
	set_at<0, 80>(result, f21_rd0_res);
	hw_uint<16> f21_rd1_res = f21_rd1_select(f20, d0, d1, dynamic_address);
	set_at<16, 80>(result, f21_rd1_res);
	hw_uint<16> f21_rd2_res = f21_rd2_select(f20, d0, d1, dynamic_address);
	set_at<32, 80>(result, f21_rd2_res);
	hw_uint<16> f21_rd3_res = f21_rd3_select(f20, d0, d1, dynamic_address);
	set_at<48, 80>(result, f21_rd3_res);
	hw_uint<16> f21_rd4_res = f21_rd4_select(f20, d0, d1, dynamic_address);
	set_at<64, 80>(result, f21_rd4_res);
	return result;
}

struct f21_f21_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-3, 1922], [-2, 1081]}
	// Capacity: 3854
	// # of read delays: 6
  // 0, 1, 1926, 1927, 1928, 3853
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1924> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 1924> f9;
	hw_uint<16> f10;


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

	inline hw_uint<16> peek_3852() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_3853() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1924
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1924 reading from capacity: 1
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

struct f21_cache {
  // # of banks: 1
  f21_f21_update_0_write0_merged_banks_5_cache f21_f21_update_0_write0_merged_banks_5;
};



inline void f21_f21_update_0_write0_write(hw_uint<16>& f21_f21_update_0_write0, f21_cache& f21, int d0, int d1, int dynamic_address) {
  f21.f21_f21_update_0_write0_merged_banks_5.push(f21_f21_update_0_write0);
}

inline hw_uint<16> f22_rd0_select(f21_cache& f21, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f22_rd0 read pattern: { f22_update_0[d0, d1] -> f21[-1 + d0, d1] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  // Read schedule : { f22_update_0[d0, d1] -> [3 + d1, 3 + d0, 8] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  // Write schedule: { f21_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  auto value_f21_f21_update_0_write0 = f21.f21_f21_update_0_write0_merged_banks_5.peek_1928();
  return value_f21_f21_update_0_write0;
  return 0;
}

inline hw_uint<16> f22_rd1_select(f21_cache& f21, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f22_rd1 read pattern: { f22_update_0[d0, d1] -> f21[d0, -1 + d1] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  // Read schedule : { f22_update_0[d0, d1] -> [3 + d1, 3 + d0, 8] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  // Write schedule: { f21_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  auto value_f21_f21_update_0_write0 = f21.f21_f21_update_0_write0_merged_banks_5.peek_3853();
  return value_f21_f21_update_0_write0;
  return 0;
}

inline hw_uint<16> f22_rd2_select(f21_cache& f21, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f22_rd2 read pattern: { f22_update_0[d0, d1] -> f21[d0, d1] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  // Read schedule : { f22_update_0[d0, d1] -> [3 + d1, 3 + d0, 8] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  // Write schedule: { f21_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  auto value_f21_f21_update_0_write0 = f21.f21_f21_update_0_write0_merged_banks_5.peek_1927();
  return value_f21_f21_update_0_write0;
  return 0;
}

inline hw_uint<16> f22_rd3_select(f21_cache& f21, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f22_rd3 read pattern: { f22_update_0[d0, d1] -> f21[d0, 1 + d1] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  // Read schedule : { f22_update_0[d0, d1] -> [3 + d1, 3 + d0, 8] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  // Write schedule: { f21_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  auto value_f21_f21_update_0_write0 = f21.f21_f21_update_0_write0_merged_banks_5.peek_1();
  return value_f21_f21_update_0_write0;
  return 0;
}

inline hw_uint<16> f22_rd4_select(f21_cache& f21, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f22_rd4 read pattern: { f22_update_0[d0, d1] -> f21[1 + d0, d1] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  // Read schedule : { f22_update_0[d0, d1] -> [3 + d1, 3 + d0, 8] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  // Write schedule: { f21_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
  auto value_f21_f21_update_0_write0 = f21.f21_f21_update_0_write0_merged_banks_5.peek_1926();
  return value_f21_f21_update_0_write0;
  return 0;
}

// # of bundles = 2
// f21_update_0_write
//	f21_f21_update_0_write0
inline void f21_f21_update_0_write_bundle_write(hw_uint<16>& f21_update_0_write, f21_cache& f21, int d0, int d1, int dynamic_address) {
	hw_uint<16> f21_f21_update_0_write0_res = f21_update_0_write.extract<0, 15>();
	f21_f21_update_0_write0_write(f21_f21_update_0_write0_res, f21, d0, d1, dynamic_address);
}

// f22_update_0_read
//	f22_rd0
//	f22_rd1
//	f22_rd2
//	f22_rd3
//	f22_rd4
inline hw_uint<80> f21_f22_update_0_read_bundle_read(f21_cache& f21, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 5
    // f22_rd0
    // f22_rd1
    // f22_rd2
    // f22_rd3
    // f22_rd4

	hw_uint<80> result;
	hw_uint<16> f22_rd0_res = f22_rd0_select(f21, d0, d1, dynamic_address);
	set_at<0, 80>(result, f22_rd0_res);
	hw_uint<16> f22_rd1_res = f22_rd1_select(f21, d0, d1, dynamic_address);
	set_at<16, 80>(result, f22_rd1_res);
	hw_uint<16> f22_rd2_res = f22_rd2_select(f21, d0, d1, dynamic_address);
	set_at<32, 80>(result, f22_rd2_res);
	hw_uint<16> f22_rd3_res = f22_rd3_select(f21, d0, d1, dynamic_address);
	set_at<48, 80>(result, f22_rd3_res);
	hw_uint<16> f22_rd4_res = f22_rd4_select(f21, d0, d1, dynamic_address);
	set_at<64, 80>(result, f22_rd4_res);
	return result;
}

struct f22_f22_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-2, 1921], [-1, 1080]}
	// Capacity: 3850
	// # of read delays: 6
  // 0, 1, 1924, 1925, 1926, 3849
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1922> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 1922> f9;
	hw_uint<16> f10;


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

	inline hw_uint<16> peek_3848() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_3849() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1922
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1922 reading from capacity: 1
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

struct f22_cache {
  // # of banks: 1
  f22_f22_update_0_write0_merged_banks_5_cache f22_f22_update_0_write0_merged_banks_5;
};



inline void f22_f22_update_0_write0_write(hw_uint<16>& f22_f22_update_0_write0, f22_cache& f22, int d0, int d1, int dynamic_address) {
  f22.f22_f22_update_0_write0_merged_banks_5.push(f22_f22_update_0_write0);
}

inline hw_uint<16> f23_rd0_select(f22_cache& f22, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f23_rd0 read pattern: { f23_update_0[d0, d1] -> f22[-1 + d0, d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // Read schedule : { f23_update_0[d0, d1] -> [4 + d1, 4 + d0, 11] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // Write schedule: { f22_update_0[d0, d1] -> [3 + d1, 3 + d0, 8] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  auto value_f22_f22_update_0_write0 = f22.f22_f22_update_0_write0_merged_banks_5.peek_1926();
  return value_f22_f22_update_0_write0;
  return 0;
}

inline hw_uint<16> f23_rd1_select(f22_cache& f22, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f23_rd1 read pattern: { f23_update_0[d0, d1] -> f22[d0, -1 + d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // Read schedule : { f23_update_0[d0, d1] -> [4 + d1, 4 + d0, 11] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // Write schedule: { f22_update_0[d0, d1] -> [3 + d1, 3 + d0, 8] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  auto value_f22_f22_update_0_write0 = f22.f22_f22_update_0_write0_merged_banks_5.peek_3849();
  return value_f22_f22_update_0_write0;
  return 0;
}

inline hw_uint<16> f23_rd2_select(f22_cache& f22, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f23_rd2 read pattern: { f23_update_0[d0, d1] -> f22[d0, d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // Read schedule : { f23_update_0[d0, d1] -> [4 + d1, 4 + d0, 11] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // Write schedule: { f22_update_0[d0, d1] -> [3 + d1, 3 + d0, 8] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  auto value_f22_f22_update_0_write0 = f22.f22_f22_update_0_write0_merged_banks_5.peek_1925();
  return value_f22_f22_update_0_write0;
  return 0;
}

inline hw_uint<16> f23_rd3_select(f22_cache& f22, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f23_rd3 read pattern: { f23_update_0[d0, d1] -> f22[d0, 1 + d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // Read schedule : { f23_update_0[d0, d1] -> [4 + d1, 4 + d0, 11] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // Write schedule: { f22_update_0[d0, d1] -> [3 + d1, 3 + d0, 8] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  auto value_f22_f22_update_0_write0 = f22.f22_f22_update_0_write0_merged_banks_5.peek_1();
  return value_f22_f22_update_0_write0;
  return 0;
}

inline hw_uint<16> f23_rd4_select(f22_cache& f22, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f23_rd4 read pattern: { f23_update_0[d0, d1] -> f22[1 + d0, d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // Read schedule : { f23_update_0[d0, d1] -> [4 + d1, 4 + d0, 11] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // Write schedule: { f22_update_0[d0, d1] -> [3 + d1, 3 + d0, 8] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
  auto value_f22_f22_update_0_write0 = f22.f22_f22_update_0_write0_merged_banks_5.peek_1924();
  return value_f22_f22_update_0_write0;
  return 0;
}

// # of bundles = 2
// f22_update_0_write
//	f22_f22_update_0_write0
inline void f22_f22_update_0_write_bundle_write(hw_uint<16>& f22_update_0_write, f22_cache& f22, int d0, int d1, int dynamic_address) {
	hw_uint<16> f22_f22_update_0_write0_res = f22_update_0_write.extract<0, 15>();
	f22_f22_update_0_write0_write(f22_f22_update_0_write0_res, f22, d0, d1, dynamic_address);
}

// f23_update_0_read
//	f23_rd0
//	f23_rd1
//	f23_rd2
//	f23_rd3
//	f23_rd4
inline hw_uint<80> f22_f23_update_0_read_bundle_read(f22_cache& f22, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 5
    // f23_rd0
    // f23_rd1
    // f23_rd2
    // f23_rd3
    // f23_rd4

	hw_uint<80> result;
	hw_uint<16> f23_rd0_res = f23_rd0_select(f22, d0, d1, dynamic_address);
	set_at<0, 80>(result, f23_rd0_res);
	hw_uint<16> f23_rd1_res = f23_rd1_select(f22, d0, d1, dynamic_address);
	set_at<16, 80>(result, f23_rd1_res);
	hw_uint<16> f23_rd2_res = f23_rd2_select(f22, d0, d1, dynamic_address);
	set_at<32, 80>(result, f23_rd2_res);
	hw_uint<16> f23_rd3_res = f23_rd3_select(f22, d0, d1, dynamic_address);
	set_at<48, 80>(result, f23_rd3_res);
	hw_uint<16> f23_rd4_res = f23_rd4_select(f22, d0, d1, dynamic_address);
	set_at<64, 80>(result, f23_rd4_res);
	return result;
}

struct f23_f23_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-1, 1920], [0, 1079]}
	// Capacity: 3846
	// # of read delays: 6
  // 0, 1, 1922, 1923, 1924, 3845
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1920> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 1920> f9;
	hw_uint<16> f10;


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

	inline hw_uint<16> peek_3844() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_3845() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1920
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1920 reading from capacity: 1
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

struct f23_cache {
  // # of banks: 1
  f23_f23_update_0_write0_merged_banks_5_cache f23_f23_update_0_write0_merged_banks_5;
};



inline void f23_f23_update_0_write0_write(hw_uint<16>& f23_f23_update_0_write0, f23_cache& f23, int d0, int d1, int dynamic_address) {
  f23.f23_f23_update_0_write0_merged_banks_5.push(f23_f23_update_0_write0);
}

inline hw_uint<16> f24_rd0_select(f23_cache& f23, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f24_rd0 read pattern: { f24_update_0[d0, d1] -> f23[-1 + d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { f24_update_0[d0, d1] -> [5 + d1, 5 + d0, 14] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { f23_update_0[d0, d1] -> [4 + d1, 4 + d0, 11] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  auto value_f23_f23_update_0_write0 = f23.f23_f23_update_0_write0_merged_banks_5.peek_1924();
  return value_f23_f23_update_0_write0;
  return 0;
}

inline hw_uint<16> f24_rd1_select(f23_cache& f23, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f24_rd1 read pattern: { f24_update_0[d0, d1] -> f23[d0, -1 + d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { f24_update_0[d0, d1] -> [5 + d1, 5 + d0, 14] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { f23_update_0[d0, d1] -> [4 + d1, 4 + d0, 11] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  auto value_f23_f23_update_0_write0 = f23.f23_f23_update_0_write0_merged_banks_5.peek_3845();
  return value_f23_f23_update_0_write0;
  return 0;
}

inline hw_uint<16> f24_rd2_select(f23_cache& f23, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f24_rd2 read pattern: { f24_update_0[d0, d1] -> f23[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { f24_update_0[d0, d1] -> [5 + d1, 5 + d0, 14] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { f23_update_0[d0, d1] -> [4 + d1, 4 + d0, 11] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  auto value_f23_f23_update_0_write0 = f23.f23_f23_update_0_write0_merged_banks_5.peek_1923();
  return value_f23_f23_update_0_write0;
  return 0;
}

inline hw_uint<16> f24_rd3_select(f23_cache& f23, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f24_rd3 read pattern: { f24_update_0[d0, d1] -> f23[d0, 1 + d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { f24_update_0[d0, d1] -> [5 + d1, 5 + d0, 14] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { f23_update_0[d0, d1] -> [4 + d1, 4 + d0, 11] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  auto value_f23_f23_update_0_write0 = f23.f23_f23_update_0_write0_merged_banks_5.peek_1();
  return value_f23_f23_update_0_write0;
  return 0;
}

inline hw_uint<16> f24_rd4_select(f23_cache& f23, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f24_rd4 read pattern: { f24_update_0[d0, d1] -> f23[1 + d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { f24_update_0[d0, d1] -> [5 + d1, 5 + d0, 14] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { f23_update_0[d0, d1] -> [4 + d1, 4 + d0, 11] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  auto value_f23_f23_update_0_write0 = f23.f23_f23_update_0_write0_merged_banks_5.peek_1922();
  return value_f23_f23_update_0_write0;
  return 0;
}

// # of bundles = 2
// f23_update_0_write
//	f23_f23_update_0_write0
inline void f23_f23_update_0_write_bundle_write(hw_uint<16>& f23_update_0_write, f23_cache& f23, int d0, int d1, int dynamic_address) {
	hw_uint<16> f23_f23_update_0_write0_res = f23_update_0_write.extract<0, 15>();
	f23_f23_update_0_write0_write(f23_f23_update_0_write0_res, f23, d0, d1, dynamic_address);
}

// f24_update_0_read
//	f24_rd0
//	f24_rd1
//	f24_rd2
//	f24_rd3
//	f24_rd4
inline hw_uint<80> f23_f24_update_0_read_bundle_read(f23_cache& f23, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 5
    // f24_rd0
    // f24_rd1
    // f24_rd2
    // f24_rd3
    // f24_rd4

	hw_uint<80> result;
	hw_uint<16> f24_rd0_res = f24_rd0_select(f23, d0, d1, dynamic_address);
	set_at<0, 80>(result, f24_rd0_res);
	hw_uint<16> f24_rd1_res = f24_rd1_select(f23, d0, d1, dynamic_address);
	set_at<16, 80>(result, f24_rd1_res);
	hw_uint<16> f24_rd2_res = f24_rd2_select(f23, d0, d1, dynamic_address);
	set_at<32, 80>(result, f24_rd2_res);
	hw_uint<16> f24_rd3_res = f24_rd3_select(f23, d0, d1, dynamic_address);
	set_at<48, 80>(result, f24_rd3_res);
	hw_uint<16> f24_rd4_res = f24_rd4_select(f23, d0, d1, dynamic_address);
	set_at<64, 80>(result, f24_rd4_res);
	return result;
}

struct f24_f24_update_0_write0_to_final_rd0_cache {
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

struct f24_cache {
  // # of banks: 1
  f24_f24_update_0_write0_to_final_rd0_cache f24_f24_update_0_write0_to_final_rd0;
};



inline void f24_f24_update_0_write0_write(hw_uint<16>& f24_f24_update_0_write0, f24_cache& f24, int d0, int d1, int dynamic_address) {
  f24.f24_f24_update_0_write0_to_final_rd0.push(f24_f24_update_0_write0);
}

inline hw_uint<16> final_rd0_select(f24_cache& f24, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_rd0 read pattern: { final_update_0[d0, d1] -> f24[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { final_update_0[d0, d1] -> [5 + d1, 5 + d0, 17] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { f24_update_0[d0, d1] -> [5 + d1, 5 + d0, 14] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  auto value_f24_f24_update_0_write0 = f24.f24_f24_update_0_write0_to_final_rd0.peek(/* one reader or all rams */ 0);
  return value_f24_f24_update_0_write0;
  return 0;
}

// # of bundles = 2
// f24_update_0_write
//	f24_f24_update_0_write0
inline void f24_f24_update_0_write_bundle_write(hw_uint<16>& f24_update_0_write, f24_cache& f24, int d0, int d1, int dynamic_address) {
	hw_uint<16> f24_f24_update_0_write0_res = f24_update_0_write.extract<0, 15>();
	f24_f24_update_0_write0_write(f24_f24_update_0_write0_res, f24, d0, d1, dynamic_address);
}

// final_update_0_read
//	final_rd0
inline hw_uint<16> f24_final_update_0_read_bundle_read(f24_cache& f24, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // final_rd0

	hw_uint<16> result;
	hw_uint<16> final_rd0_res = final_rd0_select(f24, d0, d1, dynamic_address);
	set_at<0, 16>(result, final_rd0_res);
	return result;
}

struct final_final_update_0_write0_to_icfo_1_rd0_cache {
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

struct final_cache {
  // # of banks: 1
  final_final_update_0_write0_to_icfo_1_rd0_cache final_final_update_0_write0_to_icfo_1_rd0;
};



inline void final_final_update_0_write0_write(hw_uint<16>& final_final_update_0_write0, final_cache& final, int d0, int d1, int dynamic_address) {
  final.final_final_update_0_write0_to_icfo_1_rd0.push(final_final_update_0_write0);
}

inline hw_uint<16> icfo_1_rd0_select(final_cache& final, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icfo_1_rd0 read pattern: { icfo_1_update_0[d0, d1] -> final[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { icfo_1_update_0[d0, d1] -> [5 + d1, 5 + d0, 18] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { final_update_0[d0, d1] -> [5 + d1, 5 + d0, 17] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  auto value_final_final_update_0_write0 = final.final_final_update_0_write0_to_icfo_1_rd0.peek(/* one reader or all rams */ 0);
  return value_final_final_update_0_write0;
  return 0;
}

// # of bundles = 2
// final_update_0_write
//	final_final_update_0_write0
inline void final_final_update_0_write_bundle_write(hw_uint<16>& final_update_0_write, final_cache& final, int d0, int d1, int dynamic_address) {
	hw_uint<16> final_final_update_0_write0_res = final_update_0_write.extract<0, 15>();
	final_final_update_0_write0_write(final_final_update_0_write0_res, final, d0, d1, dynamic_address);
}

// icfo_1_update_0_read
//	icfo_1_rd0
inline hw_uint<16> final_icfo_1_update_0_read_bundle_read(final_cache& final, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // icfo_1_rd0

	hw_uint<16> result;
	hw_uint<16> icfo_1_rd0_res = icfo_1_rd0_select(final, d0, d1, dynamic_address);
	set_at<0, 16>(result, icfo_1_rd0_res);
	return result;
}

struct in_in_update_0_write0_merged_banks_15_cache {
	// RAM Box: {[-5, 1924], [-4, 1083]}
	// Capacity: 3862
	// # of read delays: 6
  // 0, 1, 1930, 1931, 1932, 3861
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1928> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 1928> f9;
	hw_uint<16> f10;


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

	inline hw_uint<16> peek_3860() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_3861() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1928
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1928 reading from capacity: 1
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

struct in_cache {
  // # of banks: 1
  in_in_update_0_write0_merged_banks_15_cache in_in_update_0_write0_merged_banks_15;
};



inline void in_in_update_0_write0_write(hw_uint<16>& in_in_update_0_write0, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write0_merged_banks_15.push(in_in_update_0_write0);
}

inline hw_uint<16> f00_rd0_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f00_rd0 read pattern: { f00_update_0[d0, d1] -> in[-1 + d0, d1] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  // Read schedule : { f00_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 1924 and -5 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_15.peek_1932();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> f00_rd1_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f00_rd1 read pattern: { f00_update_0[d0, d1] -> in[d0, -1 + d1] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  // Read schedule : { f00_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 1924 and -5 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_15.peek_3861();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> f00_rd2_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f00_rd2 read pattern: { f00_update_0[d0, d1] -> in[d0, d1] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  // Read schedule : { f00_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 1924 and -5 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_15.peek_1931();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> f00_rd3_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f00_rd3 read pattern: { f00_update_0[d0, d1] -> in[d0, 1 + d1] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  // Read schedule : { f00_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 1924 and -5 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_15.peek_1();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> f00_rd4_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f00_rd4 read pattern: { f00_update_0[d0, d1] -> in[1 + d0, d1] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  // Read schedule : { f00_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 1924 and -5 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_15.peek_1930();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> f10_rd0_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f10_rd0 read pattern: { f10_update_0[d0, d1] -> in[-1 + d0, d1] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  // Read schedule : { f10_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 1924 and -5 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_15.peek_1932();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> f10_rd1_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f10_rd1 read pattern: { f10_update_0[d0, d1] -> in[d0, -1 + d1] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  // Read schedule : { f10_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 1924 and -5 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_15.peek_3861();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> f10_rd2_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f10_rd2 read pattern: { f10_update_0[d0, d1] -> in[d0, d1] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  // Read schedule : { f10_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 1924 and -5 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_15.peek_1931();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> f10_rd3_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f10_rd3 read pattern: { f10_update_0[d0, d1] -> in[d0, 1 + d1] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  // Read schedule : { f10_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 1924 and -5 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_15.peek_1();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> f10_rd4_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f10_rd4 read pattern: { f10_update_0[d0, d1] -> in[1 + d0, d1] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  // Read schedule : { f10_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 1924 and -5 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_15.peek_1930();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> f20_rd0_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f20_rd0 read pattern: { f20_update_0[d0, d1] -> in[-1 + d0, d1] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  // Read schedule : { f20_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 1924 and -5 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_15.peek_1932();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> f20_rd1_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f20_rd1 read pattern: { f20_update_0[d0, d1] -> in[d0, -1 + d1] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  // Read schedule : { f20_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 1924 and -5 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_15.peek_3861();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> f20_rd2_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f20_rd2 read pattern: { f20_update_0[d0, d1] -> in[d0, d1] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  // Read schedule : { f20_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 1924 and -5 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_15.peek_1931();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> f20_rd3_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f20_rd3 read pattern: { f20_update_0[d0, d1] -> in[d0, 1 + d1] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  // Read schedule : { f20_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 1924 and -5 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_15.peek_1();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> f20_rd4_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // f20_rd4 read pattern: { f20_update_0[d0, d1] -> in[1 + d0, d1] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  // Read schedule : { f20_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 1924 and -5 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_15.peek_1930();
  return value_in_in_update_0_write0;
  return 0;
}

// # of bundles = 4
// f00_update_0_read
//	f00_rd0
//	f00_rd1
//	f00_rd2
//	f00_rd3
//	f00_rd4
inline hw_uint<80> in_f00_update_0_read_bundle_read(in_cache& in, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 5
    // f00_rd0
    // f00_rd1
    // f00_rd2
    // f00_rd3
    // f00_rd4

	hw_uint<80> result;
	hw_uint<16> f00_rd0_res = f00_rd0_select(in, d0, d1, dynamic_address);
	set_at<0, 80>(result, f00_rd0_res);
	hw_uint<16> f00_rd1_res = f00_rd1_select(in, d0, d1, dynamic_address);
	set_at<16, 80>(result, f00_rd1_res);
	hw_uint<16> f00_rd2_res = f00_rd2_select(in, d0, d1, dynamic_address);
	set_at<32, 80>(result, f00_rd2_res);
	hw_uint<16> f00_rd3_res = f00_rd3_select(in, d0, d1, dynamic_address);
	set_at<48, 80>(result, f00_rd3_res);
	hw_uint<16> f00_rd4_res = f00_rd4_select(in, d0, d1, dynamic_address);
	set_at<64, 80>(result, f00_rd4_res);
	return result;
}

// f10_update_0_read
//	f10_rd0
//	f10_rd1
//	f10_rd2
//	f10_rd3
//	f10_rd4
inline hw_uint<80> in_f10_update_0_read_bundle_read(in_cache& in, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 5
    // f10_rd0
    // f10_rd1
    // f10_rd2
    // f10_rd3
    // f10_rd4

	hw_uint<80> result;
	hw_uint<16> f10_rd0_res = f10_rd0_select(in, d0, d1, dynamic_address);
	set_at<0, 80>(result, f10_rd0_res);
	hw_uint<16> f10_rd1_res = f10_rd1_select(in, d0, d1, dynamic_address);
	set_at<16, 80>(result, f10_rd1_res);
	hw_uint<16> f10_rd2_res = f10_rd2_select(in, d0, d1, dynamic_address);
	set_at<32, 80>(result, f10_rd2_res);
	hw_uint<16> f10_rd3_res = f10_rd3_select(in, d0, d1, dynamic_address);
	set_at<48, 80>(result, f10_rd3_res);
	hw_uint<16> f10_rd4_res = f10_rd4_select(in, d0, d1, dynamic_address);
	set_at<64, 80>(result, f10_rd4_res);
	return result;
}

// f20_update_0_read
//	f20_rd0
//	f20_rd1
//	f20_rd2
//	f20_rd3
//	f20_rd4
inline hw_uint<80> in_f20_update_0_read_bundle_read(in_cache& in, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 5
    // f20_rd0
    // f20_rd1
    // f20_rd2
    // f20_rd3
    // f20_rd4

	hw_uint<80> result;
	hw_uint<16> f20_rd0_res = f20_rd0_select(in, d0, d1, dynamic_address);
	set_at<0, 80>(result, f20_rd0_res);
	hw_uint<16> f20_rd1_res = f20_rd1_select(in, d0, d1, dynamic_address);
	set_at<16, 80>(result, f20_rd1_res);
	hw_uint<16> f20_rd2_res = f20_rd2_select(in, d0, d1, dynamic_address);
	set_at<32, 80>(result, f20_rd2_res);
	hw_uint<16> f20_rd3_res = f20_rd3_select(in, d0, d1, dynamic_address);
	set_at<48, 80>(result, f20_rd3_res);
	hw_uint<16> f20_rd4_res = f20_rd4_select(in, d0, d1, dynamic_address);
	set_at<64, 80>(result, f20_rd4_res);
	return result;
}

// in_update_0_write
//	in_in_update_0_write0
inline void in_in_update_0_write_bundle_write(hw_uint<16>& in_update_0_write, in_cache& in, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_in_update_0_write0_res = in_update_0_write.extract<0, 15>();
	in_in_update_0_write0_write(in_in_update_0_write0_res, in, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 801168 bits


// Operation logic
inline void f01_update_0(f00_cache& f00, f01_cache& f01, int d0, int d1) {
  // Dynamic address computation

	// Consume: f00
	auto f00_0_c__0_value = f00_f01_update_0_read_bundle_read(f00/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = f01_generated_compute_unrolled_1(f00_0_c__0_value);
	// Produce: f01
	f01_f01_update_0_write_bundle_write(/* arg names */compute_result, f01, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void f22_update_0(f21_cache& f21, f22_cache& f22, int d0, int d1) {
  // Dynamic address computation

	// Consume: f21
	auto f21_0_c__0_value = f21_f22_update_0_read_bundle_read(f21/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = f22_generated_compute_unrolled_1(f21_0_c__0_value);
	// Produce: f22
	f22_f22_update_0_write_bundle_write(/* arg names */compute_result, f22, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void icfo_1_update_0(final_cache& final, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */icfo_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: final
	auto final_0_c__0_value = final_icfo_1_update_0_read_bundle_read(final/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = icfo_1_generated_compute_unrolled_1(final_0_c__0_value);
	// Produce: icfo_1
	icfo_1.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void f21_update_0(f20_cache& f20, f21_cache& f21, int d0, int d1) {
  // Dynamic address computation

	// Consume: f20
	auto f20_0_c__0_value = f20_f21_update_0_read_bundle_read(f20/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = f21_generated_compute_unrolled_1(f20_0_c__0_value);
	// Produce: f21
	f21_f21_update_0_write_bundle_write(/* arg names */compute_result, f21, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void f11_update_0(f10_cache& f10, f11_cache& f11, int d0, int d1) {
  // Dynamic address computation

	// Consume: f10
	auto f10_0_c__0_value = f10_f11_update_0_read_bundle_read(f10/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = f11_generated_compute_unrolled_1(f10_0_c__0_value);
	// Produce: f11
	f11_f11_update_0_write_bundle_write(/* arg names */compute_result, f11, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void f12_update_0(f11_cache& f11, f12_cache& f12, int d0, int d1) {
  // Dynamic address computation

	// Consume: f11
	auto f11_0_c__0_value = f11_f12_update_0_read_bundle_read(f11/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = f12_generated_compute_unrolled_1(f11_0_c__0_value);
	// Produce: f12
	f12_f12_update_0_write_bundle_write(/* arg names */compute_result, f12, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void f02_update_0(f01_cache& f01, f02_cache& f02, int d0, int d1) {
  // Dynamic address computation

	// Consume: f01
	auto f01_0_c__0_value = f01_f02_update_0_read_bundle_read(f01/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = f02_generated_compute_unrolled_1(f01_0_c__0_value);
	// Produce: f02
	f02_f02_update_0_write_bundle_write(/* arg names */compute_result, f02, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void f23_update_0(f22_cache& f22, f23_cache& f23, int d0, int d1) {
  // Dynamic address computation

	// Consume: f22
	auto f22_0_c__0_value = f22_f23_update_0_read_bundle_read(f22/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = f23_generated_compute_unrolled_1(f22_0_c__0_value);
	// Produce: f23
	f23_f23_update_0_write_bundle_write(/* arg names */compute_result, f23, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void f13_update_0(f12_cache& f12, f13_cache& f13, int d0, int d1) {
  // Dynamic address computation

	// Consume: f12
	auto f12_0_c__0_value = f12_f13_update_0_read_bundle_read(f12/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = f13_generated_compute_unrolled_1(f12_0_c__0_value);
	// Produce: f13
	f13_f13_update_0_write_bundle_write(/* arg names */compute_result, f13, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void f03_update_0(f02_cache& f02, f03_cache& f03, int d0, int d1) {
  // Dynamic address computation

	// Consume: f02
	auto f02_0_c__0_value = f02_f03_update_0_read_bundle_read(f02/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = f03_generated_compute_unrolled_1(f02_0_c__0_value);
	// Produce: f03
	f03_f03_update_0_write_bundle_write(/* arg names */compute_result, f03, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void f24_update_0(f23_cache& f23, f24_cache& f24, int d0, int d1) {
  // Dynamic address computation

	// Consume: f23
	auto f23_0_c__0_value = f23_f24_update_0_read_bundle_read(f23/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = f24_generated_compute_unrolled_1(f23_0_c__0_value);
	// Produce: f24
	f24_f24_update_0_write_bundle_write(/* arg names */compute_result, f24, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void f14_update_0(f13_cache& f13, f14_cache& f14, int d0, int d1) {
  // Dynamic address computation

	// Consume: f13
	auto f13_0_c__0_value = f13_f14_update_0_read_bundle_read(f13/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = f14_generated_compute_unrolled_1(f13_0_c__0_value);
	// Produce: f14
	f14_f14_update_0_write_bundle_write(/* arg names */compute_result, f14, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void f04_update_0(f03_cache& f03, f04_cache& f04, int d0, int d1) {
  // Dynamic address computation

	// Consume: f03
	auto f03_0_c__0_value = f03_f04_update_0_read_bundle_read(f03/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = f04_generated_compute_unrolled_1(f03_0_c__0_value);
	// Produce: f04
	f04_f04_update_0_write_bundle_write(/* arg names */compute_result, f04, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void final_update_0(f04_cache& f04, f14_cache& f14, f24_cache& f24, final_cache& final, int d0, int d1) {
  // Dynamic address computation

	// Consume: f04
	auto f04_0_c__0_value = f04_final_update_0_read_bundle_read(f04/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: f14
	auto f14_0_c__0_value = f14_final_update_0_read_bundle_read(f14/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: f24
	auto f24_0_c__0_value = f24_final_update_0_read_bundle_read(f24/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = final_generated_compute_unrolled_1(f04_0_c__0_value, f14_0_c__0_value, f24_0_c__0_value);
	// Produce: final
	final_final_update_0_write_bundle_write(/* arg names */compute_result, final, d0, d1, 0);

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

inline void f20_update_0(in_cache& in, f20_cache& f20, int d0, int d1) {
  // Dynamic address computation

	// Consume: in
	auto in_0_c__0_value = in_f20_update_0_read_bundle_read(in/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = f20_generated_compute_unrolled_1(in_0_c__0_value);
	// Produce: f20
	f20_f20_update_0_write_bundle_write(/* arg names */compute_result, f20, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void f10_update_0(in_cache& in, f10_cache& f10, int d0, int d1) {
  // Dynamic address computation

	// Consume: in
	auto in_0_c__0_value = in_f10_update_0_read_bundle_read(in/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = f10_generated_compute_unrolled_1(in_0_c__0_value);
	// Produce: f10
	f10_f10_update_0_write_bundle_write(/* arg names */compute_result, f10, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void f00_update_0(in_cache& in, f00_cache& f00, int d0, int d1) {
  // Dynamic address computation

	// Consume: in
	auto in_0_c__0_value = in_f00_update_0_read_bundle_read(in/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = f00_generated_compute_unrolled_1(in_0_c__0_value);
	// Produce: f00
	f00_f00_update_0_write_bundle_write(/* arg names */compute_result, f00, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void icfo_1_opt(HWStream<hw_uint<16> >& /* get_args num ports = 1 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */icfo_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("icfo_1_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  f00_cache f00;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  f01_cache f01;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  f02_cache f02;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  f03_cache f03;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  f04_cache f04;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  f10_cache f10;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  f11_cache f11;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  f12_cache f12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  f13_cache f13;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  f14_cache f14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  f20_cache f20;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  f21_cache f21;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  f22_cache f22;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  f23_cache f23;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  f24_cache f24;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  final_cache final;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_cache in;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { f02_update_0[d0, d1] -> [3 + d1, 3 + d0, 10] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081; f11_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082; icfo_1_update_0[d0, d1] -> [5 + d1, 5 + d0, 18] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079; f10_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083; f04_update_0[d0, d1] -> [5 + d1, 5 + d0, 16] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079; f03_update_0[d0, d1] -> [4 + d1, 4 + d0, 13] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080; f01_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082; f12_update_0[d0, d1] -> [3 + d1, 3 + d0, 9] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081; f23_update_0[d0, d1] -> [4 + d1, 4 + d0, 11] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080; f21_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082; f00_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083; f14_update_0[d0, d1] -> [5 + d1, 5 + d0, 15] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079; f20_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083; f22_update_0[d0, d1] -> [3 + d1, 3 + d0, 8] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081; f24_update_0[d0, d1] -> [5 + d1, 5 + d0, 14] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079; final_update_0[d0, d1] -> [5 + d1, 5 + d0, 17] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079; f13_update_0[d0, d1] -> [4 + d1, 4 + d0, 12] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080; in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 1924 and -5 <= d1 <= 1084 }
//   { f02_update_0[d0, d1] -> [3 + d1, 3 + d0, 10] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
// Condition for f02_update_0(((-10 + i2 == 0) && (-1 + i1 >= 0) && (1924 - i1 >= 0) && (-1 + i0 >= 0) && (1084 - i0 >= 0)))
//   { f11_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
// Condition for f11_update_0(((-6 + i2 == 0) && (1 + i1 >= 0) && (1924 - i1 >= 0) && (1 + i0 >= 0) && (1084 - i0 >= 0)))
//   { icfo_1_update_0[d0, d1] -> [5 + d1, 5 + d0, 18] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
// Condition for icfo_1_update_0(((-18 + i2 == 0) && (-5 + i1 >= 0) && (1924 - i1 >= 0) && (-5 + i0 >= 0) && (1084 - i0 >= 0)))
//   { f10_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
// Condition for f10_update_0(((-3 + i2 == 0) && (3 + i1 >= 0) && (1924 - i1 >= 0) && (3 + i0 >= 0) && (1084 - i0 >= 0)))
//   { f04_update_0[d0, d1] -> [5 + d1, 5 + d0, 16] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
// Condition for f04_update_0(((-16 + i2 == 0) && (-5 + i1 >= 0) && (1924 - i1 >= 0) && (-5 + i0 >= 0) && (1084 - i0 >= 0)))
//   { f03_update_0[d0, d1] -> [4 + d1, 4 + d0, 13] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
// Condition for f03_update_0(((-13 + i2 == 0) && (-3 + i1 >= 0) && (1924 - i1 >= 0) && (-3 + i0 >= 0) && (1084 - i0 >= 0)))
//   { f01_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
// Condition for f01_update_0(((-7 + i2 == 0) && (1 + i1 >= 0) && (1924 - i1 >= 0) && (1 + i0 >= 0) && (1084 - i0 >= 0)))
//   { f12_update_0[d0, d1] -> [3 + d1, 3 + d0, 9] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
// Condition for f12_update_0(((-9 + i2 == 0) && (-1 + i1 >= 0) && (1924 - i1 >= 0) && (-1 + i0 >= 0) && (1084 - i0 >= 0)))
//   { f23_update_0[d0, d1] -> [4 + d1, 4 + d0, 11] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
// Condition for f23_update_0(((-11 + i2 == 0) && (-3 + i1 >= 0) && (1924 - i1 >= 0) && (-3 + i0 >= 0) && (1084 - i0 >= 0)))
//   { f21_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : -3 <= d0 <= 1922 and -3 <= d1 <= 1082 }
// Condition for f21_update_0(((-5 + i2 == 0) && (1 + i1 >= 0) && (1924 - i1 >= 0) && (1 + i0 >= 0) && (1084 - i0 >= 0)))
//   { f00_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
// Condition for f00_update_0(((-4 + i2 == 0) && (3 + i1 >= 0) && (1924 - i1 >= 0) && (3 + i0 >= 0) && (1084 - i0 >= 0)))
//   { f14_update_0[d0, d1] -> [5 + d1, 5 + d0, 15] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
// Condition for f14_update_0(((-15 + i2 == 0) && (-5 + i1 >= 0) && (1924 - i1 >= 0) && (-5 + i0 >= 0) && (1084 - i0 >= 0)))
//   { f20_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 1923 and -4 <= d1 <= 1083 }
// Condition for f20_update_0(((-2 + i2 == 0) && (3 + i1 >= 0) && (1924 - i1 >= 0) && (3 + i0 >= 0) && (1084 - i0 >= 0)))
//   { f22_update_0[d0, d1] -> [3 + d1, 3 + d0, 8] : -2 <= d0 <= 1921 and -2 <= d1 <= 1081 }
// Condition for f22_update_0(((-8 + i2 == 0) && (-1 + i1 >= 0) && (1924 - i1 >= 0) && (-1 + i0 >= 0) && (1084 - i0 >= 0)))
//   { f24_update_0[d0, d1] -> [5 + d1, 5 + d0, 14] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
// Condition for f24_update_0(((-14 + i2 == 0) && (-5 + i1 >= 0) && (1924 - i1 >= 0) && (-5 + i0 >= 0) && (1084 - i0 >= 0)))
//   { final_update_0[d0, d1] -> [5 + d1, 5 + d0, 17] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
// Condition for final_update_0(((-17 + i2 == 0) && (-5 + i1 >= 0) && (1924 - i1 >= 0) && (-5 + i0 >= 0) && (1084 - i0 >= 0)))
//   { f13_update_0[d0, d1] -> [4 + d1, 4 + d0, 12] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
// Condition for f13_update_0(((-12 + i2 == 0) && (-3 + i1 >= 0) && (1924 - i1 >= 0) && (-3 + i0 >= 0) && (1084 - i0 >= 0)))
//   { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 1924 and -5 <= d1 <= 1084 }
// Condition for in_update_0(((-1 + i2 == 0) && (5 + i1 >= 0) && (1924 - i1 >= 0) && (5 + i0 >= 0) && (1084 - i0 >= 0)))

  /*
  // Schedules...
    // f00_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*4]
    // f01_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*7]
    // f02_update_0 -> [1*d1*1*1 + 1*3,1*d0*1*1 + 1*3,1*10]
    // f03_update_0 -> [1*d1*1*1 + 1*4,1*d0*1*1 + 1*4,1*13]
    // f04_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*16]
    // f10_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*3]
    // f11_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*6]
    // f12_update_0 -> [1*d1*1*1 + 1*3,1*d0*1*1 + 1*3,1*9]
    // f13_update_0 -> [1*d1*1*1 + 1*4,1*d0*1*1 + 1*4,1*12]
    // f14_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*15]
    // f20_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
    // f21_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*5]
    // f22_update_0 -> [1*d1*1*1 + 1*3,1*d0*1*1 + 1*3,1*8]
    // f23_update_0 -> [1*d1*1*1 + 1*4,1*d0*1*1 + 1*4,1*11]
    // f24_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*14]
    // final_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*17]
    // icfo_1_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*18]
    // in_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
for (int c0 = -5; c0 <= 1084; c0++) {
  for (int c1 = -5; c1 <= 1924; c1++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

    if ((-5 <= c1 && c1 <= 1924) && ((c1 - 0) % 1 == 0) && (-5 <= c0 && c0 <= 1084) && ((c0 - 0) % 1 == 0)) {
      in_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((-3 <= c1 && c1 <= 1924) && ((c1 - 1) % 1 == 0) && (-3 <= c0 && c0 <= 1084) && ((c0 - 1) % 1 == 0)) {
      f20_update_0((c1 - 1) / 1, (c0 - 1) / 1);
    }

    if ((-3 <= c1 && c1 <= 1924) && ((c1 - 1) % 1 == 0) && (-3 <= c0 && c0 <= 1084) && ((c0 - 1) % 1 == 0)) {
      f10_update_0((c1 - 1) / 1, (c0 - 1) / 1);
    }

    if ((-3 <= c1 && c1 <= 1924) && ((c1 - 1) % 1 == 0) && (-3 <= c0 && c0 <= 1084) && ((c0 - 1) % 1 == 0)) {
      f00_update_0((c1 - 1) / 1, (c0 - 1) / 1);
    }

    if ((-1 <= c1 && c1 <= 1924) && ((c1 - 2) % 1 == 0) && (-1 <= c0 && c0 <= 1084) && ((c0 - 2) % 1 == 0)) {
      f21_update_0((c1 - 2) / 1, (c0 - 2) / 1);
    }

    if ((-1 <= c1 && c1 <= 1924) && ((c1 - 2) % 1 == 0) && (-1 <= c0 && c0 <= 1084) && ((c0 - 2) % 1 == 0)) {
      f11_update_0((c1 - 2) / 1, (c0 - 2) / 1);
    }

    if ((-1 <= c1 && c1 <= 1924) && ((c1 - 2) % 1 == 0) && (-1 <= c0 && c0 <= 1084) && ((c0 - 2) % 1 == 0)) {
      f01_update_0((c1 - 2) / 1, (c0 - 2) / 1);
    }

    if ((1 <= c1 && c1 <= 1924) && ((c1 - 3) % 1 == 0) && (1 <= c0 && c0 <= 1084) && ((c0 - 3) % 1 == 0)) {
      f22_update_0((c1 - 3) / 1, (c0 - 3) / 1);
    }

    if ((1 <= c1 && c1 <= 1924) && ((c1 - 3) % 1 == 0) && (1 <= c0 && c0 <= 1084) && ((c0 - 3) % 1 == 0)) {
      f12_update_0((c1 - 3) / 1, (c0 - 3) / 1);
    }

    if ((1 <= c1 && c1 <= 1924) && ((c1 - 3) % 1 == 0) && (1 <= c0 && c0 <= 1084) && ((c0 - 3) % 1 == 0)) {
      f02_update_0((c1 - 3) / 1, (c0 - 3) / 1);
    }

    if ((3 <= c1 && c1 <= 1924) && ((c1 - 4) % 1 == 0) && (3 <= c0 && c0 <= 1084) && ((c0 - 4) % 1 == 0)) {
      f23_update_0((c1 - 4) / 1, (c0 - 4) / 1);
    }

    if ((3 <= c1 && c1 <= 1924) && ((c1 - 4) % 1 == 0) && (3 <= c0 && c0 <= 1084) && ((c0 - 4) % 1 == 0)) {
      f13_update_0((c1 - 4) / 1, (c0 - 4) / 1);
    }

    if ((3 <= c1 && c1 <= 1924) && ((c1 - 4) % 1 == 0) && (3 <= c0 && c0 <= 1084) && ((c0 - 4) % 1 == 0)) {
      f03_update_0((c1 - 4) / 1, (c0 - 4) / 1);
    }

    if ((5 <= c1 && c1 <= 1924) && ((c1 - 5) % 1 == 0) && (5 <= c0 && c0 <= 1084) && ((c0 - 5) % 1 == 0)) {
      f24_update_0((c1 - 5) / 1, (c0 - 5) / 1);
    }

    if ((5 <= c1 && c1 <= 1924) && ((c1 - 5) % 1 == 0) && (5 <= c0 && c0 <= 1084) && ((c0 - 5) % 1 == 0)) {
      f14_update_0((c1 - 5) / 1, (c0 - 5) / 1);
    }

    if ((5 <= c1 && c1 <= 1924) && ((c1 - 5) % 1 == 0) && (5 <= c0 && c0 <= 1084) && ((c0 - 5) % 1 == 0)) {
      f04_update_0((c1 - 5) / 1, (c0 - 5) / 1);
    }

    if ((5 <= c1 && c1 <= 1924) && ((c1 - 5) % 1 == 0) && (5 <= c0 && c0 <= 1084) && ((c0 - 5) % 1 == 0)) {
      final_update_0((c1 - 5) / 1, (c0 - 5) / 1);
    }

    if ((5 <= c1 && c1 <= 1924) && ((c1 - 5) % 1 == 0) && (5 <= c0 && c0 <= 1084) && ((c0 - 5) % 1 == 0)) {
      icfo_1_update_0((c1 - 5) / 1, (c0 - 5) / 1);
    }

  }
}

  */
	  // Schedules...
	    // f00_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*4]
	    // f01_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*7]
	    // f02_update_0 -> [1*d1*1*1 + 1*3,1*d0*1*1 + 1*3,1*10]
	    // f03_update_0 -> [1*d1*1*1 + 1*4,1*d0*1*1 + 1*4,1*13]
	    // f04_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*16]
	    // f10_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*3]
	    // f11_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*6]
	    // f12_update_0 -> [1*d1*1*1 + 1*3,1*d0*1*1 + 1*3,1*9]
	    // f13_update_0 -> [1*d1*1*1 + 1*4,1*d0*1*1 + 1*4,1*12]
	    // f14_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*15]
	    // f20_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
	    // f21_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*5]
	    // f22_update_0 -> [1*d1*1*1 + 1*3,1*d0*1*1 + 1*3,1*8]
	    // f23_update_0 -> [1*d1*1*1 + 1*4,1*d0*1*1 + 1*4,1*11]
	    // f24_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*14]
	    // final_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*17]
	    // icfo_1_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*18]
	    // in_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	for (int c0 = -5; c0 <= 1084; c0++) {
	  for (int c1 = -5; c1 <= 1924; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-5 <= c1 && c1 <= 1924) && ((c1 - 0) % 1 == 0) && (-5 <= c0 && c0 <= 1084) && ((c0 - 0) % 1 == 0)) {
	      in_update_0(in_off_chip /* buf name */, in, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((-3 <= c1 && c1 <= 1924) && ((c1 - 1) % 1 == 0) && (-3 <= c0 && c0 <= 1084) && ((c0 - 1) % 1 == 0)) {
	      f20_update_0(in /* buf name */, f20, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((-3 <= c1 && c1 <= 1924) && ((c1 - 1) % 1 == 0) && (-3 <= c0 && c0 <= 1084) && ((c0 - 1) % 1 == 0)) {
	      f10_update_0(in /* buf name */, f10, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((-3 <= c1 && c1 <= 1924) && ((c1 - 1) % 1 == 0) && (-3 <= c0 && c0 <= 1084) && ((c0 - 1) % 1 == 0)) {
	      f00_update_0(in /* buf name */, f00, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((-1 <= c1 && c1 <= 1924) && ((c1 - 2) % 1 == 0) && (-1 <= c0 && c0 <= 1084) && ((c0 - 2) % 1 == 0)) {
	      f21_update_0(f20 /* buf name */, f21, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((-1 <= c1 && c1 <= 1924) && ((c1 - 2) % 1 == 0) && (-1 <= c0 && c0 <= 1084) && ((c0 - 2) % 1 == 0)) {
	      f11_update_0(f10 /* buf name */, f11, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((-1 <= c1 && c1 <= 1924) && ((c1 - 2) % 1 == 0) && (-1 <= c0 && c0 <= 1084) && ((c0 - 2) % 1 == 0)) {
	      f01_update_0(f00 /* buf name */, f01, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 1924) && ((c1 - 3) % 1 == 0) && (1 <= c0 && c0 <= 1084) && ((c0 - 3) % 1 == 0)) {
	      f22_update_0(f21 /* buf name */, f22, (c1 - 3) / 1, (c0 - 3) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 1924) && ((c1 - 3) % 1 == 0) && (1 <= c0 && c0 <= 1084) && ((c0 - 3) % 1 == 0)) {
	      f12_update_0(f11 /* buf name */, f12, (c1 - 3) / 1, (c0 - 3) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 1924) && ((c1 - 3) % 1 == 0) && (1 <= c0 && c0 <= 1084) && ((c0 - 3) % 1 == 0)) {
	      f02_update_0(f01 /* buf name */, f02, (c1 - 3) / 1, (c0 - 3) / 1);
	    }
	
	    if ((3 <= c1 && c1 <= 1924) && ((c1 - 4) % 1 == 0) && (3 <= c0 && c0 <= 1084) && ((c0 - 4) % 1 == 0)) {
	      f23_update_0(f22 /* buf name */, f23, (c1 - 4) / 1, (c0 - 4) / 1);
	    }
	
	    if ((3 <= c1 && c1 <= 1924) && ((c1 - 4) % 1 == 0) && (3 <= c0 && c0 <= 1084) && ((c0 - 4) % 1 == 0)) {
	      f13_update_0(f12 /* buf name */, f13, (c1 - 4) / 1, (c0 - 4) / 1);
	    }
	
	    if ((3 <= c1 && c1 <= 1924) && ((c1 - 4) % 1 == 0) && (3 <= c0 && c0 <= 1084) && ((c0 - 4) % 1 == 0)) {
	      f03_update_0(f02 /* buf name */, f03, (c1 - 4) / 1, (c0 - 4) / 1);
	    }
	
	    if ((5 <= c1 && c1 <= 1924) && ((c1 - 5) % 1 == 0) && (5 <= c0 && c0 <= 1084) && ((c0 - 5) % 1 == 0)) {
	      f24_update_0(f23 /* buf name */, f24, (c1 - 5) / 1, (c0 - 5) / 1);
	    }
	
	    if ((5 <= c1 && c1 <= 1924) && ((c1 - 5) % 1 == 0) && (5 <= c0 && c0 <= 1084) && ((c0 - 5) % 1 == 0)) {
	      f14_update_0(f13 /* buf name */, f14, (c1 - 5) / 1, (c0 - 5) / 1);
	    }
	
	    if ((5 <= c1 && c1 <= 1924) && ((c1 - 5) % 1 == 0) && (5 <= c0 && c0 <= 1084) && ((c0 - 5) % 1 == 0)) {
	      f04_update_0(f03 /* buf name */, f04, (c1 - 5) / 1, (c0 - 5) / 1);
	    }
	
	    if ((5 <= c1 && c1 <= 1924) && ((c1 - 5) % 1 == 0) && (5 <= c0 && c0 <= 1084) && ((c0 - 5) % 1 == 0)) {
	      final_update_0(f04 /* buf name */, f14 /* buf name */, f24 /* buf name */, final, (c1 - 5) / 1, (c0 - 5) / 1);
	    }
	
	    if ((5 <= c1 && c1 <= 1924) && ((c1 - 5) % 1 == 0) && (5 <= c0 && c0 <= 1084) && ((c0 - 5) % 1 == 0)) {
	      icfo_1_update_0(final /* buf name */, icfo_1, (c1 - 5) / 1, (c0 - 5) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void icfo_1_opt_wrapper(HWStream<hw_uint<16> >& /* get_args num ports = 1 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */icfo_1, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    icfo_1_opt(in_off_chip, icfo_1);
  }
}
#ifdef __VIVADO_SYNTH__
  // { icfo_1_update_0[root = 0, icfo_1_0, icfo_1_1] -> icfo_1[0, 0] : 0 <= icfo_1_0 <= 1919 and 0 <= icfo_1_1 <= 1079 }
const int icfo_1_update_0_write_pipe0_num_transfers = 2073600;
  // { in_update_0[root = 0, in_0, in_1] -> in_off_chip[0, 0] : -5 <= in_0 <= 1924 and -5 <= in_1 <= 1084 }
const int in_update_0_read_pipe0_num_transfers = 2103700;


extern "C" {

void icfo_1_opt_accel(hw_uint<16>* in_update_0_read_pipe0, hw_uint<16>* icfo_1_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = icfo_1_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = icfo_1_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > in_update_0_read_pipe0_channel;
  static HWStream<hw_uint<16> > icfo_1_update_0_write_pipe0_channel;

  burst_read<16>(in_update_0_read_pipe0, in_update_0_read_pipe0_channel, in_update_0_read_pipe0_num_transfers*size);

  icfo_1_opt_wrapper(in_update_0_read_pipe0_channel, icfo_1_update_0_write_pipe0_channel, size);

  burst_write<16>(icfo_1_update_0_write_pipe0, icfo_1_update_0_write_pipe0_channel, icfo_1_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void icfo_1_opt_rdai(HWStream<hw_uint<16> >& in_update_0_read_pipe0, HWStream<hw_uint<16> >&  icfo_1_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = icfo_1_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  icfo_1_opt(in_update_0_read_pipe0, icfo_1_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

