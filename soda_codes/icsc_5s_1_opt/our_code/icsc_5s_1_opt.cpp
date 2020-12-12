#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: icsc_5s_1_opt_compute_units.h
#include "icsc_5s_1_opt_compute_units.h"

struct in_in_update_0_write0_merged_banks_4_cache {
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
  // stg0_rd0 read pattern: { stg0_update_0[d0, d1] -> in[-1 + d0, d1] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_4.peek_1932();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> stg0_rd1_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd1 read pattern: { stg0_update_0[d0, d1] -> in[d0, d1] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_4.peek_1931();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> stg0_rd2_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd2 read pattern: { stg0_update_0[d0, d1] -> in[d0, 1 + d1] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_4.peek_1();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> stg0_rd3_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd3 read pattern: { stg0_update_0[d0, d1] -> in[1 + d0, d1] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_4.peek_1930();
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
  // stg1_rd0 read pattern: { stg1_update_0[d0, d1] -> stg0[-1 + d0, d1] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write0 = stg0.stg0_stg0_update_0_write0_merged_banks_4.peek_1930();
  return value_stg0_stg0_update_0_write0;
  return 0;
}

inline hw_uint<16> stg1_rd1_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd1 read pattern: { stg1_update_0[d0, d1] -> stg0[d0, d1] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write0 = stg0.stg0_stg0_update_0_write0_merged_banks_4.peek_1929();
  return value_stg0_stg0_update_0_write0;
  return 0;
}

inline hw_uint<16> stg1_rd2_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd2 read pattern: { stg1_update_0[d0, d1] -> stg0[d0, 1 + d1] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write0 = stg0.stg0_stg0_update_0_write0_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write0;
  return 0;
}

inline hw_uint<16> stg1_rd3_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd3 read pattern: { stg1_update_0[d0, d1] -> stg0[1 + d0, d1] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write0 = stg0.stg0_stg0_update_0_write0_merged_banks_4.peek_1928();
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
  // stg2_rd0 read pattern: { stg2_update_0[d0, d1] -> stg1[-1 + d0, d1] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write0 = stg1.stg1_stg1_update_0_write0_merged_banks_4.peek_1928();
  return value_stg1_stg1_update_0_write0;
  return 0;
}

inline hw_uint<16> stg2_rd1_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd1 read pattern: { stg2_update_0[d0, d1] -> stg1[d0, d1] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write0 = stg1.stg1_stg1_update_0_write0_merged_banks_4.peek_1927();
  return value_stg1_stg1_update_0_write0;
  return 0;
}

inline hw_uint<16> stg2_rd2_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd2 read pattern: { stg2_update_0[d0, d1] -> stg1[d0, 1 + d1] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write0 = stg1.stg1_stg1_update_0_write0_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write0;
  return 0;
}

inline hw_uint<16> stg2_rd3_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd3 read pattern: { stg2_update_0[d0, d1] -> stg1[1 + d0, d1] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write0 = stg1.stg1_stg1_update_0_write0_merged_banks_4.peek_1926();
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
  // stg3_rd0 read pattern: { stg3_update_0[d0, d1] -> stg2[-1 + d0, d1] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write0 = stg2.stg2_stg2_update_0_write0_merged_banks_4.peek_1926();
  return value_stg2_stg2_update_0_write0;
  return 0;
}

inline hw_uint<16> stg3_rd1_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd1 read pattern: { stg3_update_0[d0, d1] -> stg2[d0, d1] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write0 = stg2.stg2_stg2_update_0_write0_merged_banks_4.peek_1925();
  return value_stg2_stg2_update_0_write0;
  return 0;
}

inline hw_uint<16> stg3_rd2_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd2 read pattern: { stg3_update_0[d0, d1] -> stg2[d0, 1 + d1] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write0 = stg2.stg2_stg2_update_0_write0_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write0;
  return 0;
}

inline hw_uint<16> stg3_rd3_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd3 read pattern: { stg3_update_0[d0, d1] -> stg2[1 + d0, d1] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write0 = stg2.stg2_stg2_update_0_write0_merged_banks_4.peek_1924();
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
  // stg4_rd0 read pattern: { stg4_update_0[d0, d1] -> stg3[-1 + d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write0 = stg3.stg3_stg3_update_0_write0_merged_banks_4.peek_1924();
  return value_stg3_stg3_update_0_write0;
  return 0;
}

inline hw_uint<16> stg4_rd1_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd1 read pattern: { stg4_update_0[d0, d1] -> stg3[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write0 = stg3.stg3_stg3_update_0_write0_merged_banks_4.peek_1923();
  return value_stg3_stg3_update_0_write0;
  return 0;
}

inline hw_uint<16> stg4_rd2_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd2 read pattern: { stg4_update_0[d0, d1] -> stg3[d0, 1 + d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write0 = stg3.stg3_stg3_update_0_write0_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write0;
  return 0;
}

inline hw_uint<16> stg4_rd3_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd3 read pattern: { stg4_update_0[d0, d1] -> stg3[1 + d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write0 = stg3.stg3_stg3_update_0_write0_merged_banks_4.peek_1922();
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

struct stg4_stg4_update_0_write0_to_icsc_5s_1_rd0_cache {
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

struct stg4_cache {
  // # of banks: 1
  stg4_stg4_update_0_write0_to_icsc_5s_1_rd0_cache stg4_stg4_update_0_write0_to_icsc_5s_1_rd0;
};



inline void stg4_stg4_update_0_write0_write(hw_uint<16>& stg4_stg4_update_0_write0, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write0_to_icsc_5s_1_rd0.push(stg4_stg4_update_0_write0);
}

inline hw_uint<16> icsc_5s_1_rd0_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_5s_1_rd0 read pattern: { icsc_5s_1_update_0[d0, d1] -> stg4[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_5s_1_update_0[d0, d1] -> [5 + d1, 5 + d0, 7] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  auto value_stg4_stg4_update_0_write0 = stg4.stg4_stg4_update_0_write0_to_icsc_5s_1_rd0.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_update_0_write0;
  return 0;
}

// # of bundles = 2
// icsc_5s_1_update_0_read
//	icsc_5s_1_rd0
inline hw_uint<16> stg4_icsc_5s_1_update_0_read_bundle_read(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // icsc_5s_1_rd0

	hw_uint<16> result;
	hw_uint<16> icsc_5s_1_rd0_res = icsc_5s_1_rd0_select(stg4, d0, d1, dynamic_address);
	set_at<0, 16>(result, icsc_5s_1_rd0_res);
	return result;
}

// stg4_update_0_write
//	stg4_stg4_update_0_write0
inline void stg4_stg4_update_0_write_bundle_write(hw_uint<16>& stg4_update_0_write, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
	hw_uint<16> stg4_stg4_update_0_write0_res = stg4_update_0_write.extract<0, 15>();
	stg4_stg4_update_0_write0_write(stg4_stg4_update_0_write0_res, stg4, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 154240 bits


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

inline void icsc_5s_1_update_0(stg4_cache& stg4, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */icsc_5s_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg4
	auto stg4_0_c__0_value = stg4_icsc_5s_1_update_0_read_bundle_read(stg4/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = icsc_5s_1_generated_compute_unrolled_1(stg4_0_c__0_value);
	// Produce: icsc_5s_1
	icsc_5s_1.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void icsc_5s_1_opt(HWStream<hw_uint<16> >& /* get_args num ports = 1 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */icsc_5s_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("icsc_5s_1_opt_debug.csv");
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
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082; stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081; stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083; stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079; stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080; icsc_5s_1_update_0[d0, d1] -> [5 + d1, 5 + d0, 7] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079; in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 1924 and 0 <= d1 <= 1084 }
//   { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 1922 and 0 <= d1 <= 1082 }
// Condition for stg1_update_0(((-3 + i2 == 0) && (1 + i1 >= 0) && (1924 - i1 >= 0) && (-2 + i0 >= 0) && (1084 - i0 >= 0)))
//   { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 1921 and 0 <= d1 <= 1081 }
// Condition for stg2_update_0(((-4 + i2 == 0) && (-1 + i1 >= 0) && (1924 - i1 >= 0) && (-3 + i0 >= 0) && (1084 - i0 >= 0)))
//   { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 1923 and 0 <= d1 <= 1083 }
// Condition for stg0_update_0(((-2 + i2 == 0) && (3 + i1 >= 0) && (1924 - i1 >= 0) && (-1 + i0 >= 0) && (1084 - i0 >= 0)))
//   { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
// Condition for stg4_update_0(((-6 + i2 == 0) && (-5 + i1 >= 0) && (1924 - i1 >= 0) && (-5 + i0 >= 0) && (1084 - i0 >= 0)))
//   { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 1920 and 0 <= d1 <= 1080 }
// Condition for stg3_update_0(((-5 + i2 == 0) && (-3 + i1 >= 0) && (1924 - i1 >= 0) && (-4 + i0 >= 0) && (1084 - i0 >= 0)))
//   { icsc_5s_1_update_0[d0, d1] -> [5 + d1, 5 + d0, 7] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
// Condition for icsc_5s_1_update_0(((-7 + i2 == 0) && (-5 + i1 >= 0) && (1924 - i1 >= 0) && (-5 + i0 >= 0) && (1084 - i0 >= 0)))
//   { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 1924 and 0 <= d1 <= 1084 }
// Condition for in_update_0(((-1 + i2 == 0) && (5 + i1 >= 0) && (1924 - i1 >= 0) && (i0 >= 0) && (1084 - i0 >= 0)))

  /*
  // Schedules...
    // icsc_5s_1_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*7]
    // in_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
    // stg0_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
    // stg1_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*3]
    // stg2_update_0 -> [1*d1*1*1 + 1*3,1*d0*1*1 + 1*3,1*4]
    // stg3_update_0 -> [1*d1*1*1 + 1*4,1*d0*1*1 + 1*4,1*5]
    // stg4_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*6]
for (int c0 = 0; c0 <= 1084; c0++) {
  for (int c1 = -5; c1 <= 1924; c1++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

    if ((-5 <= c1 && c1 <= 1924) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1084) && ((c0 - 0) % 1 == 0)) {
      in_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((-3 <= c1 && c1 <= 1924) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1084) && ((c0 - 1) % 1 == 0)) {
      stg0_update_0((c1 - 1) / 1, (c0 - 1) / 1);
    }

    if ((-1 <= c1 && c1 <= 1924) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 1084) && ((c0 - 2) % 1 == 0)) {
      stg1_update_0((c1 - 2) / 1, (c0 - 2) / 1);
    }

    if ((1 <= c1 && c1 <= 1924) && ((c1 - 3) % 1 == 0) && (3 <= c0 && c0 <= 1084) && ((c0 - 3) % 1 == 0)) {
      stg2_update_0((c1 - 3) / 1, (c0 - 3) / 1);
    }

    if ((3 <= c1 && c1 <= 1924) && ((c1 - 4) % 1 == 0) && (4 <= c0 && c0 <= 1084) && ((c0 - 4) % 1 == 0)) {
      stg3_update_0((c1 - 4) / 1, (c0 - 4) / 1);
    }

    if ((5 <= c1 && c1 <= 1924) && ((c1 - 5) % 1 == 0) && (5 <= c0 && c0 <= 1084) && ((c0 - 5) % 1 == 0)) {
      stg4_update_0((c1 - 5) / 1, (c0 - 5) / 1);
    }

    if ((5 <= c1 && c1 <= 1924) && ((c1 - 5) % 1 == 0) && (5 <= c0 && c0 <= 1084) && ((c0 - 5) % 1 == 0)) {
      icsc_5s_1_update_0((c1 - 5) / 1, (c0 - 5) / 1);
    }

  }
}

  */
	  // Schedules...
	    // icsc_5s_1_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*7]
	    // in_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	    // stg0_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
	    // stg1_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*3]
	    // stg2_update_0 -> [1*d1*1*1 + 1*3,1*d0*1*1 + 1*3,1*4]
	    // stg3_update_0 -> [1*d1*1*1 + 1*4,1*d0*1*1 + 1*4,1*5]
	    // stg4_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*6]
	for (int c0 = 0; c0 <= 1084; c0++) {
	  for (int c1 = -5; c1 <= 1924; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-5 <= c1 && c1 <= 1924) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1084) && ((c0 - 0) % 1 == 0)) {
	      in_update_0(in_off_chip /* buf name */, in, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((-3 <= c1 && c1 <= 1924) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1084) && ((c0 - 1) % 1 == 0)) {
	      stg0_update_0(in /* buf name */, stg0, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((-1 <= c1 && c1 <= 1924) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 1084) && ((c0 - 2) % 1 == 0)) {
	      stg1_update_0(stg0 /* buf name */, stg1, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 1924) && ((c1 - 3) % 1 == 0) && (3 <= c0 && c0 <= 1084) && ((c0 - 3) % 1 == 0)) {
	      stg2_update_0(stg1 /* buf name */, stg2, (c1 - 3) / 1, (c0 - 3) / 1);
	    }
	
	    if ((3 <= c1 && c1 <= 1924) && ((c1 - 4) % 1 == 0) && (4 <= c0 && c0 <= 1084) && ((c0 - 4) % 1 == 0)) {
	      stg3_update_0(stg2 /* buf name */, stg3, (c1 - 4) / 1, (c0 - 4) / 1);
	    }
	
	    if ((5 <= c1 && c1 <= 1924) && ((c1 - 5) % 1 == 0) && (5 <= c0 && c0 <= 1084) && ((c0 - 5) % 1 == 0)) {
	      stg4_update_0(stg3 /* buf name */, stg4, (c1 - 5) / 1, (c0 - 5) / 1);
	    }
	
	    if ((5 <= c1 && c1 <= 1924) && ((c1 - 5) % 1 == 0) && (5 <= c0 && c0 <= 1084) && ((c0 - 5) % 1 == 0)) {
	      icsc_5s_1_update_0(stg4 /* buf name */, icsc_5s_1, (c1 - 5) / 1, (c0 - 5) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void icsc_5s_1_opt_wrapper(HWStream<hw_uint<16> >& /* get_args num ports = 1 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */icsc_5s_1, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    icsc_5s_1_opt(in_off_chip, icsc_5s_1);
  }
}
#ifdef __VIVADO_SYNTH__
  // { icsc_5s_1_update_0[root = 0, icsc_5s_1_0, icsc_5s_1_1] -> icsc_5s_1[0, 0] : 0 <= icsc_5s_1_0 <= 1919 and 0 <= icsc_5s_1_1 <= 1079 }
const int icsc_5s_1_update_0_write_pipe0_num_transfers = 2073600;
  // { in_update_0[root = 0, in_0, in_1] -> in_off_chip[0, 0] : -5 <= in_0 <= 1924 and 0 <= in_1 <= 1084 }
const int in_update_0_read_pipe0_num_transfers = 2094050;


extern "C" {

void icsc_5s_1_opt_accel(hw_uint<16>* in_update_0_read_pipe0, hw_uint<16>* icsc_5s_1_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = icsc_5s_1_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = icsc_5s_1_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > in_update_0_read_pipe0_channel;
  static HWStream<hw_uint<16> > icsc_5s_1_update_0_write_pipe0_channel;

  burst_read<16>(in_update_0_read_pipe0, in_update_0_read_pipe0_channel, in_update_0_read_pipe0_num_transfers*size);

  icsc_5s_1_opt_wrapper(in_update_0_read_pipe0_channel, icsc_5s_1_update_0_write_pipe0_channel, size);

  burst_write<16>(icsc_5s_1_update_0_write_pipe0, icsc_5s_1_update_0_write_pipe0_channel, icsc_5s_1_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void icsc_5s_1_opt_rdai(HWStream<hw_uint<16> >& in_update_0_read_pipe0, HWStream<hw_uint<16> >&  icsc_5s_1_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = icsc_5s_1_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  icsc_5s_1_opt(in_update_0_read_pipe0, icsc_5s_1_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

