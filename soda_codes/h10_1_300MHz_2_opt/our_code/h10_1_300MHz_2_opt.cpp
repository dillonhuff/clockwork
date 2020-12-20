#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: h10_1_300MHz_2_opt_compute_units.h
#include "h10_1_300MHz_2_opt_compute_units.h"

struct h3_0_h3_0_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-16, 1040], [-9, 1031]}
	// Capacity: 1062
	// # of read delays: 5
  // 0, 1, 530, 531, 1061
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 528> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 529> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_529() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_530() {
		return f4;
	}

	inline hw_uint<32>  peek_531() {
		return f6;
	}

	inline hw_uint<32>  peek_1060() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_1061() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 529
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 529 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 528
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 528 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_0_h3_0_update_0_write1_merged_banks_5_cache {
	// RAM Box: {[-17, 1039], [-8, 1032]}
	// Capacity: 1062
	// # of read delays: 5
  // 0, 1, 531, 532, 1061
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 529> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 528> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_530() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_531() {
		return f4;
	}

	inline hw_uint<32>  peek_532() {
		return f6;
	}

	inline hw_uint<32>  peek_1060() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_1061() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 528
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 528 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 529
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 529 reading from capacity: 1
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
  // # of banks: 2
  h3_0_h3_0_update_0_write0_merged_banks_5_cache h3_0_h3_0_update_0_write0_merged_banks_5;
  h3_0_h3_0_update_0_write1_merged_banks_5_cache h3_0_h3_0_update_0_write1_merged_banks_5;
};



inline void h3_0_h3_0_update_0_write0_write(hw_uint<32> & h3_0_h3_0_update_0_write0, h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write0_merged_banks_5.push(h3_0_h3_0_update_0_write0);
}

inline void h3_0_h3_0_update_0_write1_write(hw_uint<32> & h3_0_h3_0_update_0_write1, h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write1_merged_banks_5.push(h3_0_h3_0_update_0_write1);
}

inline hw_uint<32>  h3_1_rd0_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd0 read pattern: { h3_1_update_0[d0, d1] -> h3_0[-1 + 2d0, d1] : -8 <= d0 <= 519 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 519 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 520 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write1 = h3_0.h3_0_h3_0_update_0_write1_merged_banks_5.peek_532();
  return value_h3_0_h3_0_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_1_rd1_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd1 read pattern: { h3_1_update_0[d0, d1] -> h3_0[2d0, -1 + d1] : -8 <= d0 <= 519 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 519 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 520 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_5.peek_1061();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd2_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd2 read pattern: { h3_1_update_0[d0, d1] -> h3_0[2d0, d1] : -8 <= d0 <= 519 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 519 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 520 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_5.peek_531();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd3_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd3 read pattern: { h3_1_update_0[d0, d1] -> h3_0[2d0, 1 + d1] : -8 <= d0 <= 519 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 519 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 520 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_5.peek_1();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd4_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd4 read pattern: { h3_1_update_0[d0, d1] -> h3_0[1 + 2d0, d1] : -8 <= d0 <= 519 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 519 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 520 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write1 = h3_0.h3_0_h3_0_update_0_write1_merged_banks_5.peek_531();
  return value_h3_0_h3_0_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_1_rd5_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd5 read pattern: { h3_1_update_0[d0, d1] -> h3_0[2d0, d1] : -8 <= d0 <= 519 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 519 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 520 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_5.peek_531();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd6_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd6 read pattern: { h3_1_update_0[d0, d1] -> h3_0[1 + 2d0, -1 + d1] : -8 <= d0 <= 519 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 519 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 520 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write1 = h3_0.h3_0_h3_0_update_0_write1_merged_banks_5.peek_1061();
  return value_h3_0_h3_0_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_1_rd7_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd7 read pattern: { h3_1_update_0[d0, d1] -> h3_0[1 + 2d0, d1] : -8 <= d0 <= 519 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 519 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 520 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write1 = h3_0.h3_0_h3_0_update_0_write1_merged_banks_5.peek_531();
  return value_h3_0_h3_0_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_1_rd8_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd8 read pattern: { h3_1_update_0[d0, d1] -> h3_0[1 + 2d0, 1 + d1] : -8 <= d0 <= 519 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 519 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 520 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write1 = h3_0.h3_0_h3_0_update_0_write1_merged_banks_5.peek_1();
  return value_h3_0_h3_0_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_1_rd9_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd9 read pattern: { h3_1_update_0[d0, d1] -> h3_0[2 + 2d0, d1] : -8 <= d0 <= 519 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 519 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 520 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_5.peek_530();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

// # of bundles = 2
// h3_0_update_0_write
//	h3_0_h3_0_update_0_write0
//	h3_0_h3_0_update_0_write1
inline void h3_0_h3_0_update_0_write_bundle_write(hw_uint<64>& h3_0_update_0_write, h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_0_h3_0_update_0_write0_res = h3_0_update_0_write.extract<0, 31>();
	h3_0_h3_0_update_0_write0_write(h3_0_h3_0_update_0_write0_res, h3_0, d0, d1, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write1_res = h3_0_update_0_write.extract<32, 63>();
	h3_0_h3_0_update_0_write1_write(h3_0_h3_0_update_0_write1_res, h3_0, d0, d1, dynamic_address);
}

// h3_1_update_0_read
//	h3_1_rd0
//	h3_1_rd1
//	h3_1_rd2
//	h3_1_rd3
//	h3_1_rd4
//	h3_1_rd5
//	h3_1_rd6
//	h3_1_rd7
//	h3_1_rd8
//	h3_1_rd9
inline hw_uint<320> h3_0_h3_1_update_0_read_bundle_read(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 10
    // h3_1_rd0
    // h3_1_rd1
    // h3_1_rd2
    // h3_1_rd3
    // h3_1_rd4
    // h3_1_rd5
    // h3_1_rd6
    // h3_1_rd7
    // h3_1_rd8
    // h3_1_rd9

	hw_uint<320> result;
	hw_uint<32>  h3_1_rd0_res = h3_1_rd0_select(h3_0, d0, d1, dynamic_address);
	set_at<0, 320>(result, h3_1_rd0_res);
	hw_uint<32>  h3_1_rd1_res = h3_1_rd1_select(h3_0, d0, d1, dynamic_address);
	set_at<32, 320>(result, h3_1_rd1_res);
	hw_uint<32>  h3_1_rd2_res = h3_1_rd2_select(h3_0, d0, d1, dynamic_address);
	set_at<64, 320>(result, h3_1_rd2_res);
	hw_uint<32>  h3_1_rd3_res = h3_1_rd3_select(h3_0, d0, d1, dynamic_address);
	set_at<96, 320>(result, h3_1_rd3_res);
	hw_uint<32>  h3_1_rd4_res = h3_1_rd4_select(h3_0, d0, d1, dynamic_address);
	set_at<128, 320>(result, h3_1_rd4_res);
	hw_uint<32>  h3_1_rd5_res = h3_1_rd5_select(h3_0, d0, d1, dynamic_address);
	set_at<160, 320>(result, h3_1_rd5_res);
	hw_uint<32>  h3_1_rd6_res = h3_1_rd6_select(h3_0, d0, d1, dynamic_address);
	set_at<192, 320>(result, h3_1_rd6_res);
	hw_uint<32>  h3_1_rd7_res = h3_1_rd7_select(h3_0, d0, d1, dynamic_address);
	set_at<224, 320>(result, h3_1_rd7_res);
	hw_uint<32>  h3_1_rd8_res = h3_1_rd8_select(h3_0, d0, d1, dynamic_address);
	set_at<256, 320>(result, h3_1_rd8_res);
	hw_uint<32>  h3_1_rd9_res = h3_1_rd9_select(h3_0, d0, d1, dynamic_address);
	set_at<288, 320>(result, h3_1_rd9_res);
	return result;
}

struct h3_1_h3_1_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-14, 1038], [-8, 1030]}
	// Capacity: 1058
	// # of read delays: 5
  // 0, 1, 528, 529, 1057
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 526> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 527> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_527() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_528() {
		return f4;
	}

	inline hw_uint<32>  peek_529() {
		return f6;
	}

	inline hw_uint<32>  peek_1056() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_1057() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 527
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 527 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 526
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 526 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_1_h3_1_update_0_write1_merged_banks_5_cache {
	// RAM Box: {[-15, 1037], [-7, 1031]}
	// Capacity: 1058
	// # of read delays: 5
  // 0, 1, 529, 530, 1057
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 527> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 526> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_528() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_529() {
		return f4;
	}

	inline hw_uint<32>  peek_530() {
		return f6;
	}

	inline hw_uint<32>  peek_1056() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_1057() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 526
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 526 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 527
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 527 reading from capacity: 1
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
  // # of banks: 2
  h3_1_h3_1_update_0_write0_merged_banks_5_cache h3_1_h3_1_update_0_write0_merged_banks_5;
  h3_1_h3_1_update_0_write1_merged_banks_5_cache h3_1_h3_1_update_0_write1_merged_banks_5;
};



inline void h3_1_h3_1_update_0_write0_write(hw_uint<32> & h3_1_h3_1_update_0_write0, h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write0_merged_banks_5.push(h3_1_h3_1_update_0_write0);
}

inline void h3_1_h3_1_update_0_write1_write(hw_uint<32> & h3_1_h3_1_update_0_write1, h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write1_merged_banks_5.push(h3_1_h3_1_update_0_write1);
}

inline hw_uint<32>  h3_2_rd0_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd0 read pattern: { h3_2_update_0[d0, d1] -> h3_1[-1 + 2d0, d1] : -7 <= d0 <= 518 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 518 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 519 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write1 = h3_1.h3_1_h3_1_update_0_write1_merged_banks_5.peek_530();
  return value_h3_1_h3_1_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_2_rd1_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd1 read pattern: { h3_2_update_0[d0, d1] -> h3_1[2d0, -1 + d1] : -7 <= d0 <= 518 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 518 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 519 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_5.peek_1057();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd2_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd2 read pattern: { h3_2_update_0[d0, d1] -> h3_1[2d0, d1] : -7 <= d0 <= 518 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 518 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 519 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_5.peek_529();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd3_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd3 read pattern: { h3_2_update_0[d0, d1] -> h3_1[2d0, 1 + d1] : -7 <= d0 <= 518 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 518 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 519 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_5.peek_1();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd4_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd4 read pattern: { h3_2_update_0[d0, d1] -> h3_1[1 + 2d0, d1] : -7 <= d0 <= 518 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 518 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 519 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write1 = h3_1.h3_1_h3_1_update_0_write1_merged_banks_5.peek_529();
  return value_h3_1_h3_1_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_2_rd5_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd5 read pattern: { h3_2_update_0[d0, d1] -> h3_1[2d0, d1] : -7 <= d0 <= 518 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 518 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 519 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_5.peek_529();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd6_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd6 read pattern: { h3_2_update_0[d0, d1] -> h3_1[1 + 2d0, -1 + d1] : -7 <= d0 <= 518 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 518 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 519 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write1 = h3_1.h3_1_h3_1_update_0_write1_merged_banks_5.peek_1057();
  return value_h3_1_h3_1_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_2_rd7_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd7 read pattern: { h3_2_update_0[d0, d1] -> h3_1[1 + 2d0, d1] : -7 <= d0 <= 518 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 518 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 519 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write1 = h3_1.h3_1_h3_1_update_0_write1_merged_banks_5.peek_529();
  return value_h3_1_h3_1_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_2_rd8_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd8 read pattern: { h3_2_update_0[d0, d1] -> h3_1[1 + 2d0, 1 + d1] : -7 <= d0 <= 518 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 518 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 519 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write1 = h3_1.h3_1_h3_1_update_0_write1_merged_banks_5.peek_1();
  return value_h3_1_h3_1_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_2_rd9_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd9 read pattern: { h3_2_update_0[d0, d1] -> h3_1[2 + 2d0, d1] : -7 <= d0 <= 518 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 518 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 519 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_5.peek_528();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// h3_1_update_0_write
//	h3_1_h3_1_update_0_write0
//	h3_1_h3_1_update_0_write1
inline void h3_1_h3_1_update_0_write_bundle_write(hw_uint<64>& h3_1_update_0_write, h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_1_h3_1_update_0_write0_res = h3_1_update_0_write.extract<0, 31>();
	h3_1_h3_1_update_0_write0_write(h3_1_h3_1_update_0_write0_res, h3_1, d0, d1, dynamic_address);
	hw_uint<32>  h3_1_h3_1_update_0_write1_res = h3_1_update_0_write.extract<32, 63>();
	h3_1_h3_1_update_0_write1_write(h3_1_h3_1_update_0_write1_res, h3_1, d0, d1, dynamic_address);
}

// h3_2_update_0_read
//	h3_2_rd0
//	h3_2_rd1
//	h3_2_rd2
//	h3_2_rd3
//	h3_2_rd4
//	h3_2_rd5
//	h3_2_rd6
//	h3_2_rd7
//	h3_2_rd8
//	h3_2_rd9
inline hw_uint<320> h3_1_h3_2_update_0_read_bundle_read(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 10
    // h3_2_rd0
    // h3_2_rd1
    // h3_2_rd2
    // h3_2_rd3
    // h3_2_rd4
    // h3_2_rd5
    // h3_2_rd6
    // h3_2_rd7
    // h3_2_rd8
    // h3_2_rd9

	hw_uint<320> result;
	hw_uint<32>  h3_2_rd0_res = h3_2_rd0_select(h3_1, d0, d1, dynamic_address);
	set_at<0, 320>(result, h3_2_rd0_res);
	hw_uint<32>  h3_2_rd1_res = h3_2_rd1_select(h3_1, d0, d1, dynamic_address);
	set_at<32, 320>(result, h3_2_rd1_res);
	hw_uint<32>  h3_2_rd2_res = h3_2_rd2_select(h3_1, d0, d1, dynamic_address);
	set_at<64, 320>(result, h3_2_rd2_res);
	hw_uint<32>  h3_2_rd3_res = h3_2_rd3_select(h3_1, d0, d1, dynamic_address);
	set_at<96, 320>(result, h3_2_rd3_res);
	hw_uint<32>  h3_2_rd4_res = h3_2_rd4_select(h3_1, d0, d1, dynamic_address);
	set_at<128, 320>(result, h3_2_rd4_res);
	hw_uint<32>  h3_2_rd5_res = h3_2_rd5_select(h3_1, d0, d1, dynamic_address);
	set_at<160, 320>(result, h3_2_rd5_res);
	hw_uint<32>  h3_2_rd6_res = h3_2_rd6_select(h3_1, d0, d1, dynamic_address);
	set_at<192, 320>(result, h3_2_rd6_res);
	hw_uint<32>  h3_2_rd7_res = h3_2_rd7_select(h3_1, d0, d1, dynamic_address);
	set_at<224, 320>(result, h3_2_rd7_res);
	hw_uint<32>  h3_2_rd8_res = h3_2_rd8_select(h3_1, d0, d1, dynamic_address);
	set_at<256, 320>(result, h3_2_rd8_res);
	hw_uint<32>  h3_2_rd9_res = h3_2_rd9_select(h3_1, d0, d1, dynamic_address);
	set_at<288, 320>(result, h3_2_rd9_res);
	return result;
}

struct h3_2_h3_2_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-12, 1036], [-7, 1029]}
	// Capacity: 1054
	// # of read delays: 5
  // 0, 1, 526, 527, 1053
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 524> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 525> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_525() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_526() {
		return f4;
	}

	inline hw_uint<32>  peek_527() {
		return f6;
	}

	inline hw_uint<32>  peek_1052() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_1053() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 525
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 525 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 524
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 524 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_2_h3_2_update_0_write1_merged_banks_5_cache {
	// RAM Box: {[-13, 1035], [-6, 1030]}
	// Capacity: 1054
	// # of read delays: 5
  // 0, 1, 527, 528, 1053
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 525> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 524> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_526() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_527() {
		return f4;
	}

	inline hw_uint<32>  peek_528() {
		return f6;
	}

	inline hw_uint<32>  peek_1052() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_1053() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 524
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 524 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 525
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 525 reading from capacity: 1
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
  // # of banks: 2
  h3_2_h3_2_update_0_write0_merged_banks_5_cache h3_2_h3_2_update_0_write0_merged_banks_5;
  h3_2_h3_2_update_0_write1_merged_banks_5_cache h3_2_h3_2_update_0_write1_merged_banks_5;
};



inline void h3_2_h3_2_update_0_write0_write(hw_uint<32> & h3_2_h3_2_update_0_write0, h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write0_merged_banks_5.push(h3_2_h3_2_update_0_write0);
}

inline void h3_2_h3_2_update_0_write1_write(hw_uint<32> & h3_2_h3_2_update_0_write1, h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write1_merged_banks_5.push(h3_2_h3_2_update_0_write1);
}

inline hw_uint<32>  h3_3_rd0_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd0 read pattern: { h3_3_update_0[d0, d1] -> h3_2[-1 + 2d0, d1] : -6 <= d0 <= 517 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 517 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 518 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write1 = h3_2.h3_2_h3_2_update_0_write1_merged_banks_5.peek_528();
  return value_h3_2_h3_2_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_3_rd1_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd1 read pattern: { h3_3_update_0[d0, d1] -> h3_2[2d0, -1 + d1] : -6 <= d0 <= 517 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 517 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 518 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_5.peek_1053();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd2_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd2 read pattern: { h3_3_update_0[d0, d1] -> h3_2[2d0, d1] : -6 <= d0 <= 517 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 517 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 518 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_5.peek_527();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd3_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd3 read pattern: { h3_3_update_0[d0, d1] -> h3_2[2d0, 1 + d1] : -6 <= d0 <= 517 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 517 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 518 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_5.peek_1();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd4_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd4 read pattern: { h3_3_update_0[d0, d1] -> h3_2[1 + 2d0, d1] : -6 <= d0 <= 517 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 517 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 518 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write1 = h3_2.h3_2_h3_2_update_0_write1_merged_banks_5.peek_527();
  return value_h3_2_h3_2_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_3_rd5_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd5 read pattern: { h3_3_update_0[d0, d1] -> h3_2[2d0, d1] : -6 <= d0 <= 517 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 517 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 518 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_5.peek_527();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd6_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd6 read pattern: { h3_3_update_0[d0, d1] -> h3_2[1 + 2d0, -1 + d1] : -6 <= d0 <= 517 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 517 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 518 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write1 = h3_2.h3_2_h3_2_update_0_write1_merged_banks_5.peek_1053();
  return value_h3_2_h3_2_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_3_rd7_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd7 read pattern: { h3_3_update_0[d0, d1] -> h3_2[1 + 2d0, d1] : -6 <= d0 <= 517 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 517 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 518 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write1 = h3_2.h3_2_h3_2_update_0_write1_merged_banks_5.peek_527();
  return value_h3_2_h3_2_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_3_rd8_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd8 read pattern: { h3_3_update_0[d0, d1] -> h3_2[1 + 2d0, 1 + d1] : -6 <= d0 <= 517 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 517 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 518 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write1 = h3_2.h3_2_h3_2_update_0_write1_merged_banks_5.peek_1();
  return value_h3_2_h3_2_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_3_rd9_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd9 read pattern: { h3_3_update_0[d0, d1] -> h3_2[2 + 2d0, d1] : -6 <= d0 <= 517 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 517 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 518 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_5.peek_526();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// h3_2_update_0_write
//	h3_2_h3_2_update_0_write0
//	h3_2_h3_2_update_0_write1
inline void h3_2_h3_2_update_0_write_bundle_write(hw_uint<64>& h3_2_update_0_write, h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_2_h3_2_update_0_write0_res = h3_2_update_0_write.extract<0, 31>();
	h3_2_h3_2_update_0_write0_write(h3_2_h3_2_update_0_write0_res, h3_2, d0, d1, dynamic_address);
	hw_uint<32>  h3_2_h3_2_update_0_write1_res = h3_2_update_0_write.extract<32, 63>();
	h3_2_h3_2_update_0_write1_write(h3_2_h3_2_update_0_write1_res, h3_2, d0, d1, dynamic_address);
}

// h3_3_update_0_read
//	h3_3_rd0
//	h3_3_rd1
//	h3_3_rd2
//	h3_3_rd3
//	h3_3_rd4
//	h3_3_rd5
//	h3_3_rd6
//	h3_3_rd7
//	h3_3_rd8
//	h3_3_rd9
inline hw_uint<320> h3_2_h3_3_update_0_read_bundle_read(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 10
    // h3_3_rd0
    // h3_3_rd1
    // h3_3_rd2
    // h3_3_rd3
    // h3_3_rd4
    // h3_3_rd5
    // h3_3_rd6
    // h3_3_rd7
    // h3_3_rd8
    // h3_3_rd9

	hw_uint<320> result;
	hw_uint<32>  h3_3_rd0_res = h3_3_rd0_select(h3_2, d0, d1, dynamic_address);
	set_at<0, 320>(result, h3_3_rd0_res);
	hw_uint<32>  h3_3_rd1_res = h3_3_rd1_select(h3_2, d0, d1, dynamic_address);
	set_at<32, 320>(result, h3_3_rd1_res);
	hw_uint<32>  h3_3_rd2_res = h3_3_rd2_select(h3_2, d0, d1, dynamic_address);
	set_at<64, 320>(result, h3_3_rd2_res);
	hw_uint<32>  h3_3_rd3_res = h3_3_rd3_select(h3_2, d0, d1, dynamic_address);
	set_at<96, 320>(result, h3_3_rd3_res);
	hw_uint<32>  h3_3_rd4_res = h3_3_rd4_select(h3_2, d0, d1, dynamic_address);
	set_at<128, 320>(result, h3_3_rd4_res);
	hw_uint<32>  h3_3_rd5_res = h3_3_rd5_select(h3_2, d0, d1, dynamic_address);
	set_at<160, 320>(result, h3_3_rd5_res);
	hw_uint<32>  h3_3_rd6_res = h3_3_rd6_select(h3_2, d0, d1, dynamic_address);
	set_at<192, 320>(result, h3_3_rd6_res);
	hw_uint<32>  h3_3_rd7_res = h3_3_rd7_select(h3_2, d0, d1, dynamic_address);
	set_at<224, 320>(result, h3_3_rd7_res);
	hw_uint<32>  h3_3_rd8_res = h3_3_rd8_select(h3_2, d0, d1, dynamic_address);
	set_at<256, 320>(result, h3_3_rd8_res);
	hw_uint<32>  h3_3_rd9_res = h3_3_rd9_select(h3_2, d0, d1, dynamic_address);
	set_at<288, 320>(result, h3_3_rd9_res);
	return result;
}

struct h3_3_h3_3_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-10, 1034], [-6, 1028]}
	// Capacity: 1050
	// # of read delays: 5
  // 0, 1, 524, 525, 1049
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 522> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 523> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_523() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_524() {
		return f4;
	}

	inline hw_uint<32>  peek_525() {
		return f6;
	}

	inline hw_uint<32>  peek_1048() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_1049() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 523
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 523 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 522
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 522 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_3_h3_3_update_0_write1_merged_banks_5_cache {
	// RAM Box: {[-11, 1033], [-5, 1029]}
	// Capacity: 1050
	// # of read delays: 5
  // 0, 1, 525, 526, 1049
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 523> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 522> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_524() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_525() {
		return f4;
	}

	inline hw_uint<32>  peek_526() {
		return f6;
	}

	inline hw_uint<32>  peek_1048() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_1049() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 522
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 522 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 523
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 523 reading from capacity: 1
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
  // # of banks: 2
  h3_3_h3_3_update_0_write0_merged_banks_5_cache h3_3_h3_3_update_0_write0_merged_banks_5;
  h3_3_h3_3_update_0_write1_merged_banks_5_cache h3_3_h3_3_update_0_write1_merged_banks_5;
};



inline void h3_3_h3_3_update_0_write0_write(hw_uint<32> & h3_3_h3_3_update_0_write0, h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write0_merged_banks_5.push(h3_3_h3_3_update_0_write0);
}

inline void h3_3_h3_3_update_0_write1_write(hw_uint<32> & h3_3_h3_3_update_0_write1, h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write1_merged_banks_5.push(h3_3_h3_3_update_0_write1);
}

inline hw_uint<32>  h3_4_rd0_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd0 read pattern: { h3_4_update_0[d0, d1] -> h3_3[-1 + 2d0, d1] : -5 <= d0 <= 516 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 516 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 517 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write1 = h3_3.h3_3_h3_3_update_0_write1_merged_banks_5.peek_526();
  return value_h3_3_h3_3_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_4_rd1_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd1 read pattern: { h3_4_update_0[d0, d1] -> h3_3[2d0, -1 + d1] : -5 <= d0 <= 516 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 516 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 517 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_5.peek_1049();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd2_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd2 read pattern: { h3_4_update_0[d0, d1] -> h3_3[2d0, d1] : -5 <= d0 <= 516 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 516 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 517 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_5.peek_525();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd3_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd3 read pattern: { h3_4_update_0[d0, d1] -> h3_3[2d0, 1 + d1] : -5 <= d0 <= 516 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 516 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 517 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_5.peek_1();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd4_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd4 read pattern: { h3_4_update_0[d0, d1] -> h3_3[1 + 2d0, d1] : -5 <= d0 <= 516 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 516 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 517 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write1 = h3_3.h3_3_h3_3_update_0_write1_merged_banks_5.peek_525();
  return value_h3_3_h3_3_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_4_rd5_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd5 read pattern: { h3_4_update_0[d0, d1] -> h3_3[2d0, d1] : -5 <= d0 <= 516 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 516 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 517 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_5.peek_525();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd6_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd6 read pattern: { h3_4_update_0[d0, d1] -> h3_3[1 + 2d0, -1 + d1] : -5 <= d0 <= 516 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 516 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 517 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write1 = h3_3.h3_3_h3_3_update_0_write1_merged_banks_5.peek_1049();
  return value_h3_3_h3_3_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_4_rd7_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd7 read pattern: { h3_4_update_0[d0, d1] -> h3_3[1 + 2d0, d1] : -5 <= d0 <= 516 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 516 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 517 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write1 = h3_3.h3_3_h3_3_update_0_write1_merged_banks_5.peek_525();
  return value_h3_3_h3_3_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_4_rd8_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd8 read pattern: { h3_4_update_0[d0, d1] -> h3_3[1 + 2d0, 1 + d1] : -5 <= d0 <= 516 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 516 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 517 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write1 = h3_3.h3_3_h3_3_update_0_write1_merged_banks_5.peek_1();
  return value_h3_3_h3_3_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_4_rd9_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd9 read pattern: { h3_4_update_0[d0, d1] -> h3_3[2 + 2d0, d1] : -5 <= d0 <= 516 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 516 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 517 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_5.peek_524();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

// # of bundles = 2
// h3_3_update_0_write
//	h3_3_h3_3_update_0_write0
//	h3_3_h3_3_update_0_write1
inline void h3_3_h3_3_update_0_write_bundle_write(hw_uint<64>& h3_3_update_0_write, h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_3_h3_3_update_0_write0_res = h3_3_update_0_write.extract<0, 31>();
	h3_3_h3_3_update_0_write0_write(h3_3_h3_3_update_0_write0_res, h3_3, d0, d1, dynamic_address);
	hw_uint<32>  h3_3_h3_3_update_0_write1_res = h3_3_update_0_write.extract<32, 63>();
	h3_3_h3_3_update_0_write1_write(h3_3_h3_3_update_0_write1_res, h3_3, d0, d1, dynamic_address);
}

// h3_4_update_0_read
//	h3_4_rd0
//	h3_4_rd1
//	h3_4_rd2
//	h3_4_rd3
//	h3_4_rd4
//	h3_4_rd5
//	h3_4_rd6
//	h3_4_rd7
//	h3_4_rd8
//	h3_4_rd9
inline hw_uint<320> h3_3_h3_4_update_0_read_bundle_read(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 10
    // h3_4_rd0
    // h3_4_rd1
    // h3_4_rd2
    // h3_4_rd3
    // h3_4_rd4
    // h3_4_rd5
    // h3_4_rd6
    // h3_4_rd7
    // h3_4_rd8
    // h3_4_rd9

	hw_uint<320> result;
	hw_uint<32>  h3_4_rd0_res = h3_4_rd0_select(h3_3, d0, d1, dynamic_address);
	set_at<0, 320>(result, h3_4_rd0_res);
	hw_uint<32>  h3_4_rd1_res = h3_4_rd1_select(h3_3, d0, d1, dynamic_address);
	set_at<32, 320>(result, h3_4_rd1_res);
	hw_uint<32>  h3_4_rd2_res = h3_4_rd2_select(h3_3, d0, d1, dynamic_address);
	set_at<64, 320>(result, h3_4_rd2_res);
	hw_uint<32>  h3_4_rd3_res = h3_4_rd3_select(h3_3, d0, d1, dynamic_address);
	set_at<96, 320>(result, h3_4_rd3_res);
	hw_uint<32>  h3_4_rd4_res = h3_4_rd4_select(h3_3, d0, d1, dynamic_address);
	set_at<128, 320>(result, h3_4_rd4_res);
	hw_uint<32>  h3_4_rd5_res = h3_4_rd5_select(h3_3, d0, d1, dynamic_address);
	set_at<160, 320>(result, h3_4_rd5_res);
	hw_uint<32>  h3_4_rd6_res = h3_4_rd6_select(h3_3, d0, d1, dynamic_address);
	set_at<192, 320>(result, h3_4_rd6_res);
	hw_uint<32>  h3_4_rd7_res = h3_4_rd7_select(h3_3, d0, d1, dynamic_address);
	set_at<224, 320>(result, h3_4_rd7_res);
	hw_uint<32>  h3_4_rd8_res = h3_4_rd8_select(h3_3, d0, d1, dynamic_address);
	set_at<256, 320>(result, h3_4_rd8_res);
	hw_uint<32>  h3_4_rd9_res = h3_4_rd9_select(h3_3, d0, d1, dynamic_address);
	set_at<288, 320>(result, h3_4_rd9_res);
	return result;
}

struct h3_4_h3_4_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-8, 1032], [-5, 1027]}
	// Capacity: 1046
	// # of read delays: 5
  // 0, 1, 522, 523, 1045
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 520> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 521> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_521() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_522() {
		return f4;
	}

	inline hw_uint<32>  peek_523() {
		return f6;
	}

	inline hw_uint<32>  peek_1044() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_1045() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 521
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 521 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 520
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 520 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_4_h3_4_update_0_write1_merged_banks_5_cache {
	// RAM Box: {[-9, 1031], [-4, 1028]}
	// Capacity: 1046
	// # of read delays: 5
  // 0, 1, 523, 524, 1045
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 521> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 520> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_522() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_523() {
		return f4;
	}

	inline hw_uint<32>  peek_524() {
		return f6;
	}

	inline hw_uint<32>  peek_1044() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_1045() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 520
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 520 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 521
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 521 reading from capacity: 1
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
  // # of banks: 2
  h3_4_h3_4_update_0_write0_merged_banks_5_cache h3_4_h3_4_update_0_write0_merged_banks_5;
  h3_4_h3_4_update_0_write1_merged_banks_5_cache h3_4_h3_4_update_0_write1_merged_banks_5;
};



inline void h3_4_h3_4_update_0_write0_write(hw_uint<32> & h3_4_h3_4_update_0_write0, h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write0_merged_banks_5.push(h3_4_h3_4_update_0_write0);
}

inline void h3_4_h3_4_update_0_write1_write(hw_uint<32> & h3_4_h3_4_update_0_write1, h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write1_merged_banks_5.push(h3_4_h3_4_update_0_write1);
}

inline hw_uint<32>  h3_5_rd0_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd0 read pattern: { h3_5_update_0[d0, d1] -> h3_4[-1 + 2d0, d1] : -4 <= d0 <= 515 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 515 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 516 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write1 = h3_4.h3_4_h3_4_update_0_write1_merged_banks_5.peek_524();
  return value_h3_4_h3_4_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_5_rd1_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd1 read pattern: { h3_5_update_0[d0, d1] -> h3_4[2d0, -1 + d1] : -4 <= d0 <= 515 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 515 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 516 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_5.peek_1045();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd2_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd2 read pattern: { h3_5_update_0[d0, d1] -> h3_4[2d0, d1] : -4 <= d0 <= 515 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 515 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 516 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_5.peek_523();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd3_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd3 read pattern: { h3_5_update_0[d0, d1] -> h3_4[2d0, 1 + d1] : -4 <= d0 <= 515 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 515 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 516 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_5.peek_1();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd4_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd4 read pattern: { h3_5_update_0[d0, d1] -> h3_4[1 + 2d0, d1] : -4 <= d0 <= 515 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 515 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 516 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write1 = h3_4.h3_4_h3_4_update_0_write1_merged_banks_5.peek_523();
  return value_h3_4_h3_4_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_5_rd5_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd5 read pattern: { h3_5_update_0[d0, d1] -> h3_4[2d0, d1] : -4 <= d0 <= 515 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 515 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 516 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_5.peek_523();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd6_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd6 read pattern: { h3_5_update_0[d0, d1] -> h3_4[1 + 2d0, -1 + d1] : -4 <= d0 <= 515 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 515 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 516 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write1 = h3_4.h3_4_h3_4_update_0_write1_merged_banks_5.peek_1045();
  return value_h3_4_h3_4_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_5_rd7_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd7 read pattern: { h3_5_update_0[d0, d1] -> h3_4[1 + 2d0, d1] : -4 <= d0 <= 515 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 515 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 516 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write1 = h3_4.h3_4_h3_4_update_0_write1_merged_banks_5.peek_523();
  return value_h3_4_h3_4_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_5_rd8_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd8 read pattern: { h3_5_update_0[d0, d1] -> h3_4[1 + 2d0, 1 + d1] : -4 <= d0 <= 515 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 515 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 516 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write1 = h3_4.h3_4_h3_4_update_0_write1_merged_banks_5.peek_1();
  return value_h3_4_h3_4_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_5_rd9_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd9 read pattern: { h3_5_update_0[d0, d1] -> h3_4[2 + 2d0, d1] : -4 <= d0 <= 515 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 515 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 516 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_5.peek_522();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

// # of bundles = 2
// h3_4_update_0_write
//	h3_4_h3_4_update_0_write0
//	h3_4_h3_4_update_0_write1
inline void h3_4_h3_4_update_0_write_bundle_write(hw_uint<64>& h3_4_update_0_write, h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_4_h3_4_update_0_write0_res = h3_4_update_0_write.extract<0, 31>();
	h3_4_h3_4_update_0_write0_write(h3_4_h3_4_update_0_write0_res, h3_4, d0, d1, dynamic_address);
	hw_uint<32>  h3_4_h3_4_update_0_write1_res = h3_4_update_0_write.extract<32, 63>();
	h3_4_h3_4_update_0_write1_write(h3_4_h3_4_update_0_write1_res, h3_4, d0, d1, dynamic_address);
}

// h3_5_update_0_read
//	h3_5_rd0
//	h3_5_rd1
//	h3_5_rd2
//	h3_5_rd3
//	h3_5_rd4
//	h3_5_rd5
//	h3_5_rd6
//	h3_5_rd7
//	h3_5_rd8
//	h3_5_rd9
inline hw_uint<320> h3_4_h3_5_update_0_read_bundle_read(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 10
    // h3_5_rd0
    // h3_5_rd1
    // h3_5_rd2
    // h3_5_rd3
    // h3_5_rd4
    // h3_5_rd5
    // h3_5_rd6
    // h3_5_rd7
    // h3_5_rd8
    // h3_5_rd9

	hw_uint<320> result;
	hw_uint<32>  h3_5_rd0_res = h3_5_rd0_select(h3_4, d0, d1, dynamic_address);
	set_at<0, 320>(result, h3_5_rd0_res);
	hw_uint<32>  h3_5_rd1_res = h3_5_rd1_select(h3_4, d0, d1, dynamic_address);
	set_at<32, 320>(result, h3_5_rd1_res);
	hw_uint<32>  h3_5_rd2_res = h3_5_rd2_select(h3_4, d0, d1, dynamic_address);
	set_at<64, 320>(result, h3_5_rd2_res);
	hw_uint<32>  h3_5_rd3_res = h3_5_rd3_select(h3_4, d0, d1, dynamic_address);
	set_at<96, 320>(result, h3_5_rd3_res);
	hw_uint<32>  h3_5_rd4_res = h3_5_rd4_select(h3_4, d0, d1, dynamic_address);
	set_at<128, 320>(result, h3_5_rd4_res);
	hw_uint<32>  h3_5_rd5_res = h3_5_rd5_select(h3_4, d0, d1, dynamic_address);
	set_at<160, 320>(result, h3_5_rd5_res);
	hw_uint<32>  h3_5_rd6_res = h3_5_rd6_select(h3_4, d0, d1, dynamic_address);
	set_at<192, 320>(result, h3_5_rd6_res);
	hw_uint<32>  h3_5_rd7_res = h3_5_rd7_select(h3_4, d0, d1, dynamic_address);
	set_at<224, 320>(result, h3_5_rd7_res);
	hw_uint<32>  h3_5_rd8_res = h3_5_rd8_select(h3_4, d0, d1, dynamic_address);
	set_at<256, 320>(result, h3_5_rd8_res);
	hw_uint<32>  h3_5_rd9_res = h3_5_rd9_select(h3_4, d0, d1, dynamic_address);
	set_at<288, 320>(result, h3_5_rd9_res);
	return result;
}

struct h3_5_h3_5_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-6, 1030], [-4, 1026]}
	// Capacity: 1042
	// # of read delays: 5
  // 0, 1, 520, 521, 1041
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 518> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 519> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_519() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_520() {
		return f4;
	}

	inline hw_uint<32>  peek_521() {
		return f6;
	}

	inline hw_uint<32>  peek_1040() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_1041() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 519
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 519 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 518
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 518 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_5_h3_5_update_0_write1_merged_banks_5_cache {
	// RAM Box: {[-7, 1029], [-3, 1027]}
	// Capacity: 1042
	// # of read delays: 5
  // 0, 1, 521, 522, 1041
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 519> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 518> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_520() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_521() {
		return f4;
	}

	inline hw_uint<32>  peek_522() {
		return f6;
	}

	inline hw_uint<32>  peek_1040() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_1041() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 518
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 518 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 519
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 519 reading from capacity: 1
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
  // # of banks: 2
  h3_5_h3_5_update_0_write0_merged_banks_5_cache h3_5_h3_5_update_0_write0_merged_banks_5;
  h3_5_h3_5_update_0_write1_merged_banks_5_cache h3_5_h3_5_update_0_write1_merged_banks_5;
};



inline void h3_5_h3_5_update_0_write0_write(hw_uint<32> & h3_5_h3_5_update_0_write0, h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write0_merged_banks_5.push(h3_5_h3_5_update_0_write0);
}

inline void h3_5_h3_5_update_0_write1_write(hw_uint<32> & h3_5_h3_5_update_0_write1, h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write1_merged_banks_5.push(h3_5_h3_5_update_0_write1);
}

inline hw_uint<32>  h3_6_rd0_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd0 read pattern: { h3_6_update_0[d0, d1] -> h3_5[-1 + 2d0, d1] : -3 <= d0 <= 514 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 514 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 515 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write1 = h3_5.h3_5_h3_5_update_0_write1_merged_banks_5.peek_522();
  return value_h3_5_h3_5_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_6_rd1_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd1 read pattern: { h3_6_update_0[d0, d1] -> h3_5[2d0, -1 + d1] : -3 <= d0 <= 514 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 514 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 515 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_5.peek_1041();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd2_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd2 read pattern: { h3_6_update_0[d0, d1] -> h3_5[2d0, d1] : -3 <= d0 <= 514 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 514 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 515 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_5.peek_521();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd3_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd3 read pattern: { h3_6_update_0[d0, d1] -> h3_5[2d0, 1 + d1] : -3 <= d0 <= 514 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 514 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 515 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_5.peek_1();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd4_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd4 read pattern: { h3_6_update_0[d0, d1] -> h3_5[1 + 2d0, d1] : -3 <= d0 <= 514 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 514 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 515 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write1 = h3_5.h3_5_h3_5_update_0_write1_merged_banks_5.peek_521();
  return value_h3_5_h3_5_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_6_rd5_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd5 read pattern: { h3_6_update_0[d0, d1] -> h3_5[2d0, d1] : -3 <= d0 <= 514 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 514 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 515 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_5.peek_521();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd6_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd6 read pattern: { h3_6_update_0[d0, d1] -> h3_5[1 + 2d0, -1 + d1] : -3 <= d0 <= 514 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 514 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 515 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write1 = h3_5.h3_5_h3_5_update_0_write1_merged_banks_5.peek_1041();
  return value_h3_5_h3_5_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_6_rd7_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd7 read pattern: { h3_6_update_0[d0, d1] -> h3_5[1 + 2d0, d1] : -3 <= d0 <= 514 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 514 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 515 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write1 = h3_5.h3_5_h3_5_update_0_write1_merged_banks_5.peek_521();
  return value_h3_5_h3_5_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_6_rd8_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd8 read pattern: { h3_6_update_0[d0, d1] -> h3_5[1 + 2d0, 1 + d1] : -3 <= d0 <= 514 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 514 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 515 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write1 = h3_5.h3_5_h3_5_update_0_write1_merged_banks_5.peek_1();
  return value_h3_5_h3_5_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_6_rd9_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd9 read pattern: { h3_6_update_0[d0, d1] -> h3_5[2 + 2d0, d1] : -3 <= d0 <= 514 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 514 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 515 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_5.peek_520();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

// # of bundles = 2
// h3_5_update_0_write
//	h3_5_h3_5_update_0_write0
//	h3_5_h3_5_update_0_write1
inline void h3_5_h3_5_update_0_write_bundle_write(hw_uint<64>& h3_5_update_0_write, h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_5_h3_5_update_0_write0_res = h3_5_update_0_write.extract<0, 31>();
	h3_5_h3_5_update_0_write0_write(h3_5_h3_5_update_0_write0_res, h3_5, d0, d1, dynamic_address);
	hw_uint<32>  h3_5_h3_5_update_0_write1_res = h3_5_update_0_write.extract<32, 63>();
	h3_5_h3_5_update_0_write1_write(h3_5_h3_5_update_0_write1_res, h3_5, d0, d1, dynamic_address);
}

// h3_6_update_0_read
//	h3_6_rd0
//	h3_6_rd1
//	h3_6_rd2
//	h3_6_rd3
//	h3_6_rd4
//	h3_6_rd5
//	h3_6_rd6
//	h3_6_rd7
//	h3_6_rd8
//	h3_6_rd9
inline hw_uint<320> h3_5_h3_6_update_0_read_bundle_read(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 10
    // h3_6_rd0
    // h3_6_rd1
    // h3_6_rd2
    // h3_6_rd3
    // h3_6_rd4
    // h3_6_rd5
    // h3_6_rd6
    // h3_6_rd7
    // h3_6_rd8
    // h3_6_rd9

	hw_uint<320> result;
	hw_uint<32>  h3_6_rd0_res = h3_6_rd0_select(h3_5, d0, d1, dynamic_address);
	set_at<0, 320>(result, h3_6_rd0_res);
	hw_uint<32>  h3_6_rd1_res = h3_6_rd1_select(h3_5, d0, d1, dynamic_address);
	set_at<32, 320>(result, h3_6_rd1_res);
	hw_uint<32>  h3_6_rd2_res = h3_6_rd2_select(h3_5, d0, d1, dynamic_address);
	set_at<64, 320>(result, h3_6_rd2_res);
	hw_uint<32>  h3_6_rd3_res = h3_6_rd3_select(h3_5, d0, d1, dynamic_address);
	set_at<96, 320>(result, h3_6_rd3_res);
	hw_uint<32>  h3_6_rd4_res = h3_6_rd4_select(h3_5, d0, d1, dynamic_address);
	set_at<128, 320>(result, h3_6_rd4_res);
	hw_uint<32>  h3_6_rd5_res = h3_6_rd5_select(h3_5, d0, d1, dynamic_address);
	set_at<160, 320>(result, h3_6_rd5_res);
	hw_uint<32>  h3_6_rd6_res = h3_6_rd6_select(h3_5, d0, d1, dynamic_address);
	set_at<192, 320>(result, h3_6_rd6_res);
	hw_uint<32>  h3_6_rd7_res = h3_6_rd7_select(h3_5, d0, d1, dynamic_address);
	set_at<224, 320>(result, h3_6_rd7_res);
	hw_uint<32>  h3_6_rd8_res = h3_6_rd8_select(h3_5, d0, d1, dynamic_address);
	set_at<256, 320>(result, h3_6_rd8_res);
	hw_uint<32>  h3_6_rd9_res = h3_6_rd9_select(h3_5, d0, d1, dynamic_address);
	set_at<288, 320>(result, h3_6_rd9_res);
	return result;
}

struct h3_6_h3_6_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-4, 1028], [-3, 1025]}
	// Capacity: 1038
	// # of read delays: 5
  // 0, 1, 518, 519, 1037
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 516> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 517> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_517() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_518() {
		return f4;
	}

	inline hw_uint<32>  peek_519() {
		return f6;
	}

	inline hw_uint<32>  peek_1036() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_1037() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 517
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 517 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 516
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 516 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_6_h3_6_update_0_write1_merged_banks_5_cache {
	// RAM Box: {[-5, 1027], [-2, 1026]}
	// Capacity: 1038
	// # of read delays: 5
  // 0, 1, 519, 520, 1037
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 517> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 516> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_518() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_519() {
		return f4;
	}

	inline hw_uint<32>  peek_520() {
		return f6;
	}

	inline hw_uint<32>  peek_1036() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_1037() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 516
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 516 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 517
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 517 reading from capacity: 1
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
  // # of banks: 2
  h3_6_h3_6_update_0_write0_merged_banks_5_cache h3_6_h3_6_update_0_write0_merged_banks_5;
  h3_6_h3_6_update_0_write1_merged_banks_5_cache h3_6_h3_6_update_0_write1_merged_banks_5;
};



inline void h3_6_h3_6_update_0_write0_write(hw_uint<32> & h3_6_h3_6_update_0_write0, h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write0_merged_banks_5.push(h3_6_h3_6_update_0_write0);
}

inline void h3_6_h3_6_update_0_write1_write(hw_uint<32> & h3_6_h3_6_update_0_write1, h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write1_merged_banks_5.push(h3_6_h3_6_update_0_write1);
}

inline hw_uint<32>  h3_7_rd0_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd0 read pattern: { h3_7_update_0[d0, d1] -> h3_6[-1 + 2d0, d1] : -2 <= d0 <= 513 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 513 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 514 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write1 = h3_6.h3_6_h3_6_update_0_write1_merged_banks_5.peek_520();
  return value_h3_6_h3_6_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_7_rd1_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd1 read pattern: { h3_7_update_0[d0, d1] -> h3_6[2d0, -1 + d1] : -2 <= d0 <= 513 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 513 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 514 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_5.peek_1037();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd2_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd2 read pattern: { h3_7_update_0[d0, d1] -> h3_6[2d0, d1] : -2 <= d0 <= 513 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 513 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 514 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_5.peek_519();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd3_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd3 read pattern: { h3_7_update_0[d0, d1] -> h3_6[2d0, 1 + d1] : -2 <= d0 <= 513 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 513 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 514 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_5.peek_1();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd4_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd4 read pattern: { h3_7_update_0[d0, d1] -> h3_6[1 + 2d0, d1] : -2 <= d0 <= 513 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 513 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 514 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write1 = h3_6.h3_6_h3_6_update_0_write1_merged_banks_5.peek_519();
  return value_h3_6_h3_6_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_7_rd5_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd5 read pattern: { h3_7_update_0[d0, d1] -> h3_6[2d0, d1] : -2 <= d0 <= 513 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 513 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 514 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_5.peek_519();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd6_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd6 read pattern: { h3_7_update_0[d0, d1] -> h3_6[1 + 2d0, -1 + d1] : -2 <= d0 <= 513 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 513 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 514 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write1 = h3_6.h3_6_h3_6_update_0_write1_merged_banks_5.peek_1037();
  return value_h3_6_h3_6_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_7_rd7_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd7 read pattern: { h3_7_update_0[d0, d1] -> h3_6[1 + 2d0, d1] : -2 <= d0 <= 513 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 513 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 514 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write1 = h3_6.h3_6_h3_6_update_0_write1_merged_banks_5.peek_519();
  return value_h3_6_h3_6_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_7_rd8_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd8 read pattern: { h3_7_update_0[d0, d1] -> h3_6[1 + 2d0, 1 + d1] : -2 <= d0 <= 513 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 513 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 514 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write1 = h3_6.h3_6_h3_6_update_0_write1_merged_banks_5.peek_1();
  return value_h3_6_h3_6_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_7_rd9_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd9 read pattern: { h3_7_update_0[d0, d1] -> h3_6[2 + 2d0, d1] : -2 <= d0 <= 513 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 513 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 514 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_5.peek_518();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

// # of bundles = 2
// h3_6_update_0_write
//	h3_6_h3_6_update_0_write0
//	h3_6_h3_6_update_0_write1
inline void h3_6_h3_6_update_0_write_bundle_write(hw_uint<64>& h3_6_update_0_write, h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_6_h3_6_update_0_write0_res = h3_6_update_0_write.extract<0, 31>();
	h3_6_h3_6_update_0_write0_write(h3_6_h3_6_update_0_write0_res, h3_6, d0, d1, dynamic_address);
	hw_uint<32>  h3_6_h3_6_update_0_write1_res = h3_6_update_0_write.extract<32, 63>();
	h3_6_h3_6_update_0_write1_write(h3_6_h3_6_update_0_write1_res, h3_6, d0, d1, dynamic_address);
}

// h3_7_update_0_read
//	h3_7_rd0
//	h3_7_rd1
//	h3_7_rd2
//	h3_7_rd3
//	h3_7_rd4
//	h3_7_rd5
//	h3_7_rd6
//	h3_7_rd7
//	h3_7_rd8
//	h3_7_rd9
inline hw_uint<320> h3_6_h3_7_update_0_read_bundle_read(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 10
    // h3_7_rd0
    // h3_7_rd1
    // h3_7_rd2
    // h3_7_rd3
    // h3_7_rd4
    // h3_7_rd5
    // h3_7_rd6
    // h3_7_rd7
    // h3_7_rd8
    // h3_7_rd9

	hw_uint<320> result;
	hw_uint<32>  h3_7_rd0_res = h3_7_rd0_select(h3_6, d0, d1, dynamic_address);
	set_at<0, 320>(result, h3_7_rd0_res);
	hw_uint<32>  h3_7_rd1_res = h3_7_rd1_select(h3_6, d0, d1, dynamic_address);
	set_at<32, 320>(result, h3_7_rd1_res);
	hw_uint<32>  h3_7_rd2_res = h3_7_rd2_select(h3_6, d0, d1, dynamic_address);
	set_at<64, 320>(result, h3_7_rd2_res);
	hw_uint<32>  h3_7_rd3_res = h3_7_rd3_select(h3_6, d0, d1, dynamic_address);
	set_at<96, 320>(result, h3_7_rd3_res);
	hw_uint<32>  h3_7_rd4_res = h3_7_rd4_select(h3_6, d0, d1, dynamic_address);
	set_at<128, 320>(result, h3_7_rd4_res);
	hw_uint<32>  h3_7_rd5_res = h3_7_rd5_select(h3_6, d0, d1, dynamic_address);
	set_at<160, 320>(result, h3_7_rd5_res);
	hw_uint<32>  h3_7_rd6_res = h3_7_rd6_select(h3_6, d0, d1, dynamic_address);
	set_at<192, 320>(result, h3_7_rd6_res);
	hw_uint<32>  h3_7_rd7_res = h3_7_rd7_select(h3_6, d0, d1, dynamic_address);
	set_at<224, 320>(result, h3_7_rd7_res);
	hw_uint<32>  h3_7_rd8_res = h3_7_rd8_select(h3_6, d0, d1, dynamic_address);
	set_at<256, 320>(result, h3_7_rd8_res);
	hw_uint<32>  h3_7_rd9_res = h3_7_rd9_select(h3_6, d0, d1, dynamic_address);
	set_at<288, 320>(result, h3_7_rd9_res);
	return result;
}

struct h3_7_h3_7_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-2, 1026], [-2, 1024]}
	// Capacity: 1034
	// # of read delays: 5
  // 0, 1, 516, 517, 1033
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 514> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 515> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_515() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_516() {
		return f4;
	}

	inline hw_uint<32>  peek_517() {
		return f6;
	}

	inline hw_uint<32>  peek_1032() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_1033() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 515
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 515 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 514
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 514 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_7_h3_7_update_0_write1_merged_banks_5_cache {
	// RAM Box: {[-3, 1025], [-1, 1025]}
	// Capacity: 1034
	// # of read delays: 5
  // 0, 1, 517, 518, 1033
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 515> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 514> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_516() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_517() {
		return f4;
	}

	inline hw_uint<32>  peek_518() {
		return f6;
	}

	inline hw_uint<32>  peek_1032() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_1033() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 514
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 514 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 515
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 515 reading from capacity: 1
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
  // # of banks: 2
  h3_7_h3_7_update_0_write0_merged_banks_5_cache h3_7_h3_7_update_0_write0_merged_banks_5;
  h3_7_h3_7_update_0_write1_merged_banks_5_cache h3_7_h3_7_update_0_write1_merged_banks_5;
};



inline void h3_7_h3_7_update_0_write0_write(hw_uint<32> & h3_7_h3_7_update_0_write0, h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write0_merged_banks_5.push(h3_7_h3_7_update_0_write0);
}

inline void h3_7_h3_7_update_0_write1_write(hw_uint<32> & h3_7_h3_7_update_0_write1, h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write1_merged_banks_5.push(h3_7_h3_7_update_0_write1);
}

inline hw_uint<32>  h3_8_rd0_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd0 read pattern: { h3_8_update_0[d0, d1] -> h3_7[-1 + 2d0, d1] : -1 <= d0 <= 512 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 512 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 513 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write1 = h3_7.h3_7_h3_7_update_0_write1_merged_banks_5.peek_518();
  return value_h3_7_h3_7_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_8_rd1_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd1 read pattern: { h3_8_update_0[d0, d1] -> h3_7[2d0, -1 + d1] : -1 <= d0 <= 512 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 512 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 513 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_merged_banks_5.peek_1033();
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_8_rd2_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd2 read pattern: { h3_8_update_0[d0, d1] -> h3_7[2d0, d1] : -1 <= d0 <= 512 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 512 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 513 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_merged_banks_5.peek_517();
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_8_rd3_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd3 read pattern: { h3_8_update_0[d0, d1] -> h3_7[2d0, 1 + d1] : -1 <= d0 <= 512 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 512 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 513 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_merged_banks_5.peek_1();
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_8_rd4_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd4 read pattern: { h3_8_update_0[d0, d1] -> h3_7[1 + 2d0, d1] : -1 <= d0 <= 512 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 512 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 513 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write1 = h3_7.h3_7_h3_7_update_0_write1_merged_banks_5.peek_517();
  return value_h3_7_h3_7_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_8_rd5_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd5 read pattern: { h3_8_update_0[d0, d1] -> h3_7[2d0, d1] : -1 <= d0 <= 512 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 512 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 513 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_merged_banks_5.peek_517();
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_8_rd6_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd6 read pattern: { h3_8_update_0[d0, d1] -> h3_7[1 + 2d0, -1 + d1] : -1 <= d0 <= 512 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 512 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 513 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write1 = h3_7.h3_7_h3_7_update_0_write1_merged_banks_5.peek_1033();
  return value_h3_7_h3_7_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_8_rd7_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd7 read pattern: { h3_8_update_0[d0, d1] -> h3_7[1 + 2d0, d1] : -1 <= d0 <= 512 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 512 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 513 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write1 = h3_7.h3_7_h3_7_update_0_write1_merged_banks_5.peek_517();
  return value_h3_7_h3_7_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_8_rd8_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd8 read pattern: { h3_8_update_0[d0, d1] -> h3_7[1 + 2d0, 1 + d1] : -1 <= d0 <= 512 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 512 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 513 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write1 = h3_7.h3_7_h3_7_update_0_write1_merged_banks_5.peek_1();
  return value_h3_7_h3_7_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_8_rd9_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd9 read pattern: { h3_8_update_0[d0, d1] -> h3_7[2 + 2d0, d1] : -1 <= d0 <= 512 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 512 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 513 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_merged_banks_5.peek_516();
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

// # of bundles = 2
// h3_7_update_0_write
//	h3_7_h3_7_update_0_write0
//	h3_7_h3_7_update_0_write1
inline void h3_7_h3_7_update_0_write_bundle_write(hw_uint<64>& h3_7_update_0_write, h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_7_h3_7_update_0_write0_res = h3_7_update_0_write.extract<0, 31>();
	h3_7_h3_7_update_0_write0_write(h3_7_h3_7_update_0_write0_res, h3_7, d0, d1, dynamic_address);
	hw_uint<32>  h3_7_h3_7_update_0_write1_res = h3_7_update_0_write.extract<32, 63>();
	h3_7_h3_7_update_0_write1_write(h3_7_h3_7_update_0_write1_res, h3_7, d0, d1, dynamic_address);
}

// h3_8_update_0_read
//	h3_8_rd0
//	h3_8_rd1
//	h3_8_rd2
//	h3_8_rd3
//	h3_8_rd4
//	h3_8_rd5
//	h3_8_rd6
//	h3_8_rd7
//	h3_8_rd8
//	h3_8_rd9
inline hw_uint<320> h3_7_h3_8_update_0_read_bundle_read(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 10
    // h3_8_rd0
    // h3_8_rd1
    // h3_8_rd2
    // h3_8_rd3
    // h3_8_rd4
    // h3_8_rd5
    // h3_8_rd6
    // h3_8_rd7
    // h3_8_rd8
    // h3_8_rd9

	hw_uint<320> result;
	hw_uint<32>  h3_8_rd0_res = h3_8_rd0_select(h3_7, d0, d1, dynamic_address);
	set_at<0, 320>(result, h3_8_rd0_res);
	hw_uint<32>  h3_8_rd1_res = h3_8_rd1_select(h3_7, d0, d1, dynamic_address);
	set_at<32, 320>(result, h3_8_rd1_res);
	hw_uint<32>  h3_8_rd2_res = h3_8_rd2_select(h3_7, d0, d1, dynamic_address);
	set_at<64, 320>(result, h3_8_rd2_res);
	hw_uint<32>  h3_8_rd3_res = h3_8_rd3_select(h3_7, d0, d1, dynamic_address);
	set_at<96, 320>(result, h3_8_rd3_res);
	hw_uint<32>  h3_8_rd4_res = h3_8_rd4_select(h3_7, d0, d1, dynamic_address);
	set_at<128, 320>(result, h3_8_rd4_res);
	hw_uint<32>  h3_8_rd5_res = h3_8_rd5_select(h3_7, d0, d1, dynamic_address);
	set_at<160, 320>(result, h3_8_rd5_res);
	hw_uint<32>  h3_8_rd6_res = h3_8_rd6_select(h3_7, d0, d1, dynamic_address);
	set_at<192, 320>(result, h3_8_rd6_res);
	hw_uint<32>  h3_8_rd7_res = h3_8_rd7_select(h3_7, d0, d1, dynamic_address);
	set_at<224, 320>(result, h3_8_rd7_res);
	hw_uint<32>  h3_8_rd8_res = h3_8_rd8_select(h3_7, d0, d1, dynamic_address);
	set_at<256, 320>(result, h3_8_rd8_res);
	hw_uint<32>  h3_8_rd9_res = h3_8_rd9_select(h3_7, d0, d1, dynamic_address);
	set_at<288, 320>(result, h3_8_rd9_res);
	return result;
}

struct h3_8_h3_8_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[0, 1024], [-1, 1023]}
	// Capacity: 1030
	// # of read delays: 5
  // 0, 1, 514, 515, 1029
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 512> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 513> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_513() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_514() {
		return f4;
	}

	inline hw_uint<32>  peek_515() {
		return f6;
	}

	inline hw_uint<32>  peek_1028() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_1029() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 513
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 513 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 512
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 512 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_8_h3_8_update_0_write1_merged_banks_5_cache {
	// RAM Box: {[-1, 1023], [0, 1024]}
	// Capacity: 1030
	// # of read delays: 5
  // 0, 1, 515, 516, 1029
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 513> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 512> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_514() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_515() {
		return f4;
	}

	inline hw_uint<32>  peek_516() {
		return f6;
	}

	inline hw_uint<32>  peek_1028() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_1029() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 512
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 512 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 513
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 513 reading from capacity: 1
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
  // # of banks: 2
  h3_8_h3_8_update_0_write0_merged_banks_5_cache h3_8_h3_8_update_0_write0_merged_banks_5;
  h3_8_h3_8_update_0_write1_merged_banks_5_cache h3_8_h3_8_update_0_write1_merged_banks_5;
};



inline void h3_8_h3_8_update_0_write0_write(hw_uint<32> & h3_8_h3_8_update_0_write0, h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
  h3_8.h3_8_h3_8_update_0_write0_merged_banks_5.push(h3_8_h3_8_update_0_write0);
}

inline void h3_8_h3_8_update_0_write1_write(hw_uint<32> & h3_8_h3_8_update_0_write1, h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
  h3_8.h3_8_h3_8_update_0_write1_merged_banks_5.push(h3_8_h3_8_update_0_write1);
}

inline hw_uint<32>  h3_9_rd0_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd0 read pattern: { h3_9_update_0[d0, d1] -> h3_8[-1 + 2d0, d1] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 512 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write1 = h3_8.h3_8_h3_8_update_0_write1_merged_banks_5.peek_516();
  return value_h3_8_h3_8_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_9_rd1_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd1 read pattern: { h3_9_update_0[d0, d1] -> h3_8[2d0, -1 + d1] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 512 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write0 = h3_8.h3_8_h3_8_update_0_write0_merged_banks_5.peek_1029();
  return value_h3_8_h3_8_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_9_rd2_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd2 read pattern: { h3_9_update_0[d0, d1] -> h3_8[2d0, d1] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 512 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write0 = h3_8.h3_8_h3_8_update_0_write0_merged_banks_5.peek_515();
  return value_h3_8_h3_8_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_9_rd3_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd3 read pattern: { h3_9_update_0[d0, d1] -> h3_8[2d0, 1 + d1] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 512 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write0 = h3_8.h3_8_h3_8_update_0_write0_merged_banks_5.peek_1();
  return value_h3_8_h3_8_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_9_rd4_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd4 read pattern: { h3_9_update_0[d0, d1] -> h3_8[1 + 2d0, d1] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 512 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write1 = h3_8.h3_8_h3_8_update_0_write1_merged_banks_5.peek_515();
  return value_h3_8_h3_8_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_9_rd5_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd5 read pattern: { h3_9_update_0[d0, d1] -> h3_8[2d0, d1] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 512 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write0 = h3_8.h3_8_h3_8_update_0_write0_merged_banks_5.peek_515();
  return value_h3_8_h3_8_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_9_rd6_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd6 read pattern: { h3_9_update_0[d0, d1] -> h3_8[1 + 2d0, -1 + d1] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 512 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write1 = h3_8.h3_8_h3_8_update_0_write1_merged_banks_5.peek_1029();
  return value_h3_8_h3_8_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_9_rd7_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd7 read pattern: { h3_9_update_0[d0, d1] -> h3_8[1 + 2d0, d1] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 512 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write1 = h3_8.h3_8_h3_8_update_0_write1_merged_banks_5.peek_515();
  return value_h3_8_h3_8_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_9_rd8_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd8 read pattern: { h3_9_update_0[d0, d1] -> h3_8[1 + 2d0, 1 + d1] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 512 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write1 = h3_8.h3_8_h3_8_update_0_write1_merged_banks_5.peek_1();
  return value_h3_8_h3_8_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_9_rd9_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd9 read pattern: { h3_9_update_0[d0, d1] -> h3_8[2 + 2d0, d1] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 512 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write0 = h3_8.h3_8_h3_8_update_0_write0_merged_banks_5.peek_514();
  return value_h3_8_h3_8_update_0_write0;
  return 0;
}

// # of bundles = 2
// h3_8_update_0_write
//	h3_8_h3_8_update_0_write0
//	h3_8_h3_8_update_0_write1
inline void h3_8_h3_8_update_0_write_bundle_write(hw_uint<64>& h3_8_update_0_write, h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_8_h3_8_update_0_write0_res = h3_8_update_0_write.extract<0, 31>();
	h3_8_h3_8_update_0_write0_write(h3_8_h3_8_update_0_write0_res, h3_8, d0, d1, dynamic_address);
	hw_uint<32>  h3_8_h3_8_update_0_write1_res = h3_8_update_0_write.extract<32, 63>();
	h3_8_h3_8_update_0_write1_write(h3_8_h3_8_update_0_write1_res, h3_8, d0, d1, dynamic_address);
}

// h3_9_update_0_read
//	h3_9_rd0
//	h3_9_rd1
//	h3_9_rd2
//	h3_9_rd3
//	h3_9_rd4
//	h3_9_rd5
//	h3_9_rd6
//	h3_9_rd7
//	h3_9_rd8
//	h3_9_rd9
inline hw_uint<320> h3_8_h3_9_update_0_read_bundle_read(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 10
    // h3_9_rd0
    // h3_9_rd1
    // h3_9_rd2
    // h3_9_rd3
    // h3_9_rd4
    // h3_9_rd5
    // h3_9_rd6
    // h3_9_rd7
    // h3_9_rd8
    // h3_9_rd9

	hw_uint<320> result;
	hw_uint<32>  h3_9_rd0_res = h3_9_rd0_select(h3_8, d0, d1, dynamic_address);
	set_at<0, 320>(result, h3_9_rd0_res);
	hw_uint<32>  h3_9_rd1_res = h3_9_rd1_select(h3_8, d0, d1, dynamic_address);
	set_at<32, 320>(result, h3_9_rd1_res);
	hw_uint<32>  h3_9_rd2_res = h3_9_rd2_select(h3_8, d0, d1, dynamic_address);
	set_at<64, 320>(result, h3_9_rd2_res);
	hw_uint<32>  h3_9_rd3_res = h3_9_rd3_select(h3_8, d0, d1, dynamic_address);
	set_at<96, 320>(result, h3_9_rd3_res);
	hw_uint<32>  h3_9_rd4_res = h3_9_rd4_select(h3_8, d0, d1, dynamic_address);
	set_at<128, 320>(result, h3_9_rd4_res);
	hw_uint<32>  h3_9_rd5_res = h3_9_rd5_select(h3_8, d0, d1, dynamic_address);
	set_at<160, 320>(result, h3_9_rd5_res);
	hw_uint<32>  h3_9_rd6_res = h3_9_rd6_select(h3_8, d0, d1, dynamic_address);
	set_at<192, 320>(result, h3_9_rd6_res);
	hw_uint<32>  h3_9_rd7_res = h3_9_rd7_select(h3_8, d0, d1, dynamic_address);
	set_at<224, 320>(result, h3_9_rd7_res);
	hw_uint<32>  h3_9_rd8_res = h3_9_rd8_select(h3_8, d0, d1, dynamic_address);
	set_at<256, 320>(result, h3_9_rd8_res);
	hw_uint<32>  h3_9_rd9_res = h3_9_rd9_select(h3_8, d0, d1, dynamic_address);
	set_at<288, 320>(result, h3_9_rd9_res);
	return result;
}

struct h3_9_h3_9_update_0_write0_to_h10_1_300MHz_2_rd0_cache {
	// RAM Box: {[0, 1022], [0, 1023]}
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

struct h3_9_h3_9_update_0_write1_to_h10_1_300MHz_2_rd1_cache {
	// RAM Box: {[1, 1023], [0, 1023]}
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
  // # of banks: 2
  h3_9_h3_9_update_0_write0_to_h10_1_300MHz_2_rd0_cache h3_9_h3_9_update_0_write0_to_h10_1_300MHz_2_rd0;
  h3_9_h3_9_update_0_write1_to_h10_1_300MHz_2_rd1_cache h3_9_h3_9_update_0_write1_to_h10_1_300MHz_2_rd1;
};



inline void h3_9_h3_9_update_0_write0_write(hw_uint<32> & h3_9_h3_9_update_0_write0, h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write0_to_h10_1_300MHz_2_rd0.push(h3_9_h3_9_update_0_write0);
}

inline void h3_9_h3_9_update_0_write1_write(hw_uint<32> & h3_9_h3_9_update_0_write1, h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write1_to_h10_1_300MHz_2_rd1.push(h3_9_h3_9_update_0_write1);
}

inline hw_uint<32>  h10_1_300MHz_2_rd0_select(h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h10_1_300MHz_2_rd0 read pattern: { h10_1_300MHz_2_update_0[d0, d1] -> h3_9[2d0, d1] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // Read schedule : { h10_1_300MHz_2_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  auto value_h3_9_h3_9_update_0_write0 = h3_9.h3_9_h3_9_update_0_write0_to_h10_1_300MHz_2_rd0.peek(/* one reader or all rams */ 0);
  return value_h3_9_h3_9_update_0_write0;
  return 0;
}

inline hw_uint<32>  h10_1_300MHz_2_rd1_select(h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h10_1_300MHz_2_rd1 read pattern: { h10_1_300MHz_2_update_0[d0, d1] -> h3_9[1 + 2d0, d1] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // Read schedule : { h10_1_300MHz_2_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  auto value_h3_9_h3_9_update_0_write1 = h3_9.h3_9_h3_9_update_0_write1_to_h10_1_300MHz_2_rd1.peek(/* one reader or all rams */ 0);
  return value_h3_9_h3_9_update_0_write1;
  return 0;
}

// # of bundles = 2
// h10_1_300MHz_2_update_0_read
//	h10_1_300MHz_2_rd0
//	h10_1_300MHz_2_rd1
inline hw_uint<64> h3_9_h10_1_300MHz_2_update_0_read_bundle_read(h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // h10_1_300MHz_2_rd0
    // h10_1_300MHz_2_rd1

	hw_uint<64> result;
	hw_uint<32>  h10_1_300MHz_2_rd0_res = h10_1_300MHz_2_rd0_select(h3_9, d0, d1, dynamic_address);
	set_at<0, 64>(result, h10_1_300MHz_2_rd0_res);
	hw_uint<32>  h10_1_300MHz_2_rd1_res = h10_1_300MHz_2_rd1_select(h3_9, d0, d1, dynamic_address);
	set_at<32, 64>(result, h10_1_300MHz_2_rd1_res);
	return result;
}

// h3_9_update_0_write
//	h3_9_h3_9_update_0_write0
//	h3_9_h3_9_update_0_write1
inline void h3_9_h3_9_update_0_write_bundle_write(hw_uint<64>& h3_9_update_0_write, h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_9_h3_9_update_0_write0_res = h3_9_update_0_write.extract<0, 31>();
	h3_9_h3_9_update_0_write0_write(h3_9_h3_9_update_0_write0_res, h3_9, d0, d1, dynamic_address);
	hw_uint<32>  h3_9_h3_9_update_0_write1_res = h3_9_update_0_write.extract<32, 63>();
	h3_9_h3_9_update_0_write1_write(h3_9_h3_9_update_0_write1_res, h3_9, d0, d1, dynamic_address);
}

struct in_cc_in_cc_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-18, 1042], [-10, 1032]}
	// Capacity: 1066
	// # of read delays: 5
  // 0, 1, 532, 533, 1065
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 530> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 531> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_531() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_532() {
		return f4;
	}

	inline hw_uint<32>  peek_533() {
		return f6;
	}

	inline hw_uint<32>  peek_1064() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_1065() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 531
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 531 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 530
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 530 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_cc_in_cc_update_0_write1_merged_banks_5_cache {
	// RAM Box: {[-19, 1041], [-9, 1033]}
	// Capacity: 1066
	// # of read delays: 5
  // 0, 1, 533, 534, 1065
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 531> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 530> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_532() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_533() {
		return f4;
	}

	inline hw_uint<32>  peek_534() {
		return f6;
	}

	inline hw_uint<32>  peek_1064() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_1065() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 530
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 530 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 531
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 531 reading from capacity: 1
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
  // # of banks: 2
  in_cc_in_cc_update_0_write0_merged_banks_5_cache in_cc_in_cc_update_0_write0_merged_banks_5;
  in_cc_in_cc_update_0_write1_merged_banks_5_cache in_cc_in_cc_update_0_write1_merged_banks_5;
};



inline void in_cc_in_cc_update_0_write0_write(hw_uint<32> & in_cc_in_cc_update_0_write0, in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write0_merged_banks_5.push(in_cc_in_cc_update_0_write0);
}

inline void in_cc_in_cc_update_0_write1_write(hw_uint<32> & in_cc_in_cc_update_0_write1, in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write1_merged_banks_5.push(in_cc_in_cc_update_0_write1);
}

inline hw_uint<32>  h3_0_rd0_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd0 read pattern: { h3_0_update_0[d0, d1] -> in_cc[-1 + 2d0, d1] : -9 <= d0 <= 520 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 520 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 521 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_5.peek_534();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_0_rd1_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd1 read pattern: { h3_0_update_0[d0, d1] -> in_cc[2d0, -1 + d1] : -9 <= d0 <= 520 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 520 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 521 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_5.peek_1065();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd2_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd2 read pattern: { h3_0_update_0[d0, d1] -> in_cc[2d0, d1] : -9 <= d0 <= 520 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 520 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 521 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_5.peek_533();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd3_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd3 read pattern: { h3_0_update_0[d0, d1] -> in_cc[2d0, 1 + d1] : -9 <= d0 <= 520 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 520 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 521 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_5.peek_1();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd4_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd4 read pattern: { h3_0_update_0[d0, d1] -> in_cc[1 + 2d0, d1] : -9 <= d0 <= 520 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 520 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 521 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_5.peek_533();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_0_rd5_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd5 read pattern: { h3_0_update_0[d0, d1] -> in_cc[2d0, d1] : -9 <= d0 <= 520 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 520 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 521 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_5.peek_533();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd6_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd6 read pattern: { h3_0_update_0[d0, d1] -> in_cc[1 + 2d0, -1 + d1] : -9 <= d0 <= 520 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 520 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 521 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_5.peek_1065();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_0_rd7_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd7 read pattern: { h3_0_update_0[d0, d1] -> in_cc[1 + 2d0, d1] : -9 <= d0 <= 520 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 520 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 521 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_5.peek_533();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_0_rd8_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd8 read pattern: { h3_0_update_0[d0, d1] -> in_cc[1 + 2d0, 1 + d1] : -9 <= d0 <= 520 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 520 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 521 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_5.peek_1();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_0_rd9_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd9 read pattern: { h3_0_update_0[d0, d1] -> in_cc[2 + 2d0, d1] : -9 <= d0 <= 520 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 520 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 521 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_5.peek_532();
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
//	h3_0_rd5
//	h3_0_rd6
//	h3_0_rd7
//	h3_0_rd8
//	h3_0_rd9
inline hw_uint<320> in_cc_h3_0_update_0_read_bundle_read(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 10
    // h3_0_rd0
    // h3_0_rd1
    // h3_0_rd2
    // h3_0_rd3
    // h3_0_rd4
    // h3_0_rd5
    // h3_0_rd6
    // h3_0_rd7
    // h3_0_rd8
    // h3_0_rd9

	hw_uint<320> result;
	hw_uint<32>  h3_0_rd0_res = h3_0_rd0_select(in_cc, d0, d1, dynamic_address);
	set_at<0, 320>(result, h3_0_rd0_res);
	hw_uint<32>  h3_0_rd1_res = h3_0_rd1_select(in_cc, d0, d1, dynamic_address);
	set_at<32, 320>(result, h3_0_rd1_res);
	hw_uint<32>  h3_0_rd2_res = h3_0_rd2_select(in_cc, d0, d1, dynamic_address);
	set_at<64, 320>(result, h3_0_rd2_res);
	hw_uint<32>  h3_0_rd3_res = h3_0_rd3_select(in_cc, d0, d1, dynamic_address);
	set_at<96, 320>(result, h3_0_rd3_res);
	hw_uint<32>  h3_0_rd4_res = h3_0_rd4_select(in_cc, d0, d1, dynamic_address);
	set_at<128, 320>(result, h3_0_rd4_res);
	hw_uint<32>  h3_0_rd5_res = h3_0_rd5_select(in_cc, d0, d1, dynamic_address);
	set_at<160, 320>(result, h3_0_rd5_res);
	hw_uint<32>  h3_0_rd6_res = h3_0_rd6_select(in_cc, d0, d1, dynamic_address);
	set_at<192, 320>(result, h3_0_rd6_res);
	hw_uint<32>  h3_0_rd7_res = h3_0_rd7_select(in_cc, d0, d1, dynamic_address);
	set_at<224, 320>(result, h3_0_rd7_res);
	hw_uint<32>  h3_0_rd8_res = h3_0_rd8_select(in_cc, d0, d1, dynamic_address);
	set_at<256, 320>(result, h3_0_rd8_res);
	hw_uint<32>  h3_0_rd9_res = h3_0_rd9_select(in_cc, d0, d1, dynamic_address);
	set_at<288, 320>(result, h3_0_rd9_res);
	return result;
}

// in_cc_update_0_write
//	in_cc_in_cc_update_0_write0
//	in_cc_in_cc_update_0_write1
inline void in_cc_in_cc_update_0_write_bundle_write(hw_uint<64>& in_cc_update_0_write, in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
	hw_uint<32>  in_cc_in_cc_update_0_write0_res = in_cc_update_0_write.extract<0, 31>();
	in_cc_in_cc_update_0_write0_write(in_cc_in_cc_update_0_write0_res, in_cc, d0, d1, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write1_res = in_cc_update_0_write.extract<32, 63>();
	in_cc_in_cc_update_0_write1_write(in_cc_in_cc_update_0_write1_res, in_cc, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 670080 bits


// Operation logic
inline void h3_6_update_0(h3_5_cache& h3_5, h3_6_cache& h3_6, int d0, int d1) {
  // Dynamic address computation

	// Consume: h3_5
	auto h3_5_0_c__0_value = h3_5_h3_6_update_0_read_bundle_read(h3_5/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_6_generated_compute_unrolled_2(h3_5_0_c__0_value);
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

	auto compute_result = h3_7_generated_compute_unrolled_2(h3_6_0_c__0_value);
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

	auto compute_result = h3_8_generated_compute_unrolled_2(h3_7_0_c__0_value);
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

	auto compute_result = h3_9_generated_compute_unrolled_2(h3_8_0_c__0_value);
	// Produce: h3_9
	h3_9_h3_9_update_0_write_bundle_write(/* arg names */compute_result, h3_9, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h10_1_300MHz_2_update_0(h3_9_cache& h3_9, HWStream<hw_uint<64> >& /* buffer_args num ports = 2 */h10_1_300MHz_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: h3_9
	auto h3_9_0_c__0_value = h3_9_h10_1_300MHz_2_update_0_read_bundle_read(h3_9/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h10_1_300MHz_2_generated_compute_unrolled_2(h3_9_0_c__0_value);
	// Produce: h10_1_300MHz_2
	h10_1_300MHz_2.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_cc_update_0(HWStream<hw_uint<64> >& /* buffer_args num ports = 2 */in, in_cc_cache& in_cc, int d0, int d1) {
  // Dynamic address computation

	// Consume: in
	auto in_0_c__0_value = in.read();
	auto compute_result = in_cc_generated_compute_unrolled_2(in_0_c__0_value);
	// Produce: in_cc
	in_cc_in_cc_update_0_write_bundle_write(/* arg names */compute_result, in_cc, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_1_update_0(h3_0_cache& h3_0, h3_1_cache& h3_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: h3_0
	auto h3_0_0_c__0_value = h3_0_h3_1_update_0_read_bundle_read(h3_0/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_1_generated_compute_unrolled_2(h3_0_0_c__0_value);
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

	auto compute_result = h3_2_generated_compute_unrolled_2(h3_1_0_c__0_value);
	// Produce: h3_2
	h3_2_h3_2_update_0_write_bundle_write(/* arg names */compute_result, h3_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_3_update_0(h3_2_cache& h3_2, h3_3_cache& h3_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: h3_2
	auto h3_2_0_c__0_value = h3_2_h3_3_update_0_read_bundle_read(h3_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_3_generated_compute_unrolled_2(h3_2_0_c__0_value);
	// Produce: h3_3
	h3_3_h3_3_update_0_write_bundle_write(/* arg names */compute_result, h3_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_5_update_0(h3_4_cache& h3_4, h3_5_cache& h3_5, int d0, int d1) {
  // Dynamic address computation

	// Consume: h3_4
	auto h3_4_0_c__0_value = h3_4_h3_5_update_0_read_bundle_read(h3_4/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_5_generated_compute_unrolled_2(h3_4_0_c__0_value);
	// Produce: h3_5
	h3_5_h3_5_update_0_write_bundle_write(/* arg names */compute_result, h3_5, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_0_update_0(in_cc_cache& in_cc, h3_0_cache& h3_0, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_cc
	auto in_cc_0_c__0_value = in_cc_h3_0_update_0_read_bundle_read(in_cc/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_0_generated_compute_unrolled_2(in_cc_0_c__0_value);
	// Produce: h3_0
	h3_0_h3_0_update_0_write_bundle_write(/* arg names */compute_result, h3_0, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_4_update_0(h3_3_cache& h3_3, h3_4_cache& h3_4, int d0, int d1) {
  // Dynamic address computation

	// Consume: h3_3
	auto h3_3_0_c__0_value = h3_3_h3_4_update_0_read_bundle_read(h3_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_4_generated_compute_unrolled_2(h3_3_0_c__0_value);
	// Produce: h3_4
	h3_4_h3_4_update_0_write_bundle_write(/* arg names */compute_result, h3_4, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void h10_1_300MHz_2_opt(HWStream<hw_uint<64> >& /* get_args num ports = 2 */in, HWStream<hw_uint<64> >& /* get_args num ports = 2 */h10_1_300MHz_2) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("h10_1_300MHz_2_opt_debug.csv");
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

// schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 513 and -2 <= d1 <= 1025; h10_1_300MHz_2_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 511 and 0 <= d1 <= 1023; in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 521 and -10 <= d1 <= 1033; h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 511 and 0 <= d1 <= 1023; h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 519 and -8 <= d1 <= 1031; h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 517 and -6 <= d1 <= 1029; h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 515 and -4 <= d1 <= 1027; h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 518 and -7 <= d1 <= 1030; h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 516 and -5 <= d1 <= 1028; h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 520 and -9 <= d1 <= 1032; h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 512 and -1 <= d1 <= 1024; h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 514 and -3 <= d1 <= 1026 }
//   { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 513 and -2 <= d1 <= 1025 }
// Condition for h3_7_update_0(((-9 + i2 == 0) && (-6 + i1 >= 0) && (521 - i1 >= 0) && (-6 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h10_1_300MHz_2_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
// Condition for h10_1_300MHz_2_update_0(((-12 + i2 == 0) && (-10 + i1 >= 0) && (521 - i1 >= 0) && (-10 + i0 >= 0) && (1033 - i0 >= 0)))
//   { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 521 and -10 <= d1 <= 1033 }
// Condition for in_cc_update_0(((-1 + i2 == 0) && (10 + i1 >= 0) && (521 - i1 >= 0) && (10 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
// Condition for h3_9_update_0(((-11 + i2 == 0) && (-10 + i1 >= 0) && (521 - i1 >= 0) && (-10 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 519 and -8 <= d1 <= 1031 }
// Condition for h3_1_update_0(((-3 + i2 == 0) && (6 + i1 >= 0) && (521 - i1 >= 0) && (6 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 517 and -6 <= d1 <= 1029 }
// Condition for h3_3_update_0(((-5 + i2 == 0) && (2 + i1 >= 0) && (521 - i1 >= 0) && (2 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 515 and -4 <= d1 <= 1027 }
// Condition for h3_5_update_0(((-7 + i2 == 0) && (-2 + i1 >= 0) && (521 - i1 >= 0) && (-2 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 518 and -7 <= d1 <= 1030 }
// Condition for h3_2_update_0(((-4 + i2 == 0) && (4 + i1 >= 0) && (521 - i1 >= 0) && (4 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 516 and -5 <= d1 <= 1028 }
// Condition for h3_4_update_0(((-6 + i2 == 0) && (i1 >= 0) && (521 - i1 >= 0) && (i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 520 and -9 <= d1 <= 1032 }
// Condition for h3_0_update_0(((-2 + i2 == 0) && (8 + i1 >= 0) && (521 - i1 >= 0) && (8 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 512 and -1 <= d1 <= 1024 }
// Condition for h3_8_update_0(((-10 + i2 == 0) && (-8 + i1 >= 0) && (521 - i1 >= 0) && (-8 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 514 and -3 <= d1 <= 1026 }
// Condition for h3_6_update_0(((-8 + i2 == 0) && (-4 + i1 >= 0) && (521 - i1 >= 0) && (-4 + i0 >= 0) && (1033 - i0 >= 0)))

  /*
  // Schedules...
    // h10_1_300MHz_2_update_0 -> [1*d1*1*1 + 1*10,1*d0*1*1 + 1*10,1*12]
    // h3_0_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
    // h3_1_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*3]
    // h3_2_update_0 -> [1*d1*1*1 + 1*3,1*d0*1*1 + 1*3,1*4]
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
  for (int c1 = -10; c1 <= 521; c1++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

    if ((-10 <= c1 && c1 <= 521) && ((c1 - 0) % 1 == 0) && (-10 <= c0 && c0 <= 1033) && ((c0 - 0) % 1 == 0)) {
      in_cc_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((-8 <= c1 && c1 <= 521) && ((c1 - 1) % 1 == 0) && (-8 <= c0 && c0 <= 1033) && ((c0 - 1) % 1 == 0)) {
      h3_0_update_0((c1 - 1) / 1, (c0 - 1) / 1);
    }

    if ((-6 <= c1 && c1 <= 521) && ((c1 - 2) % 1 == 0) && (-6 <= c0 && c0 <= 1033) && ((c0 - 2) % 1 == 0)) {
      h3_1_update_0((c1 - 2) / 1, (c0 - 2) / 1);
    }

    if ((-4 <= c1 && c1 <= 521) && ((c1 - 3) % 1 == 0) && (-4 <= c0 && c0 <= 1033) && ((c0 - 3) % 1 == 0)) {
      h3_2_update_0((c1 - 3) / 1, (c0 - 3) / 1);
    }

    if ((-2 <= c1 && c1 <= 521) && ((c1 - 4) % 1 == 0) && (-2 <= c0 && c0 <= 1033) && ((c0 - 4) % 1 == 0)) {
      h3_3_update_0((c1 - 4) / 1, (c0 - 4) / 1);
    }

    if ((0 <= c1 && c1 <= 521) && ((c1 - 5) % 1 == 0) && (0 <= c0 && c0 <= 1033) && ((c0 - 5) % 1 == 0)) {
      h3_4_update_0((c1 - 5) / 1, (c0 - 5) / 1);
    }

    if ((2 <= c1 && c1 <= 521) && ((c1 - 6) % 1 == 0) && (2 <= c0 && c0 <= 1033) && ((c0 - 6) % 1 == 0)) {
      h3_5_update_0((c1 - 6) / 1, (c0 - 6) / 1);
    }

    if ((4 <= c1 && c1 <= 521) && ((c1 - 7) % 1 == 0) && (4 <= c0 && c0 <= 1033) && ((c0 - 7) % 1 == 0)) {
      h3_6_update_0((c1 - 7) / 1, (c0 - 7) / 1);
    }

    if ((6 <= c1 && c1 <= 521) && ((c1 - 8) % 1 == 0) && (6 <= c0 && c0 <= 1033) && ((c0 - 8) % 1 == 0)) {
      h3_7_update_0((c1 - 8) / 1, (c0 - 8) / 1);
    }

    if ((8 <= c1 && c1 <= 521) && ((c1 - 9) % 1 == 0) && (8 <= c0 && c0 <= 1033) && ((c0 - 9) % 1 == 0)) {
      h3_8_update_0((c1 - 9) / 1, (c0 - 9) / 1);
    }

    if ((10 <= c1 && c1 <= 521) && ((c1 - 10) % 1 == 0) && (10 <= c0 && c0 <= 1033) && ((c0 - 10) % 1 == 0)) {
      h3_9_update_0((c1 - 10) / 1, (c0 - 10) / 1);
    }

    if ((10 <= c1 && c1 <= 521) && ((c1 - 10) % 1 == 0) && (10 <= c0 && c0 <= 1033) && ((c0 - 10) % 1 == 0)) {
      h10_1_300MHz_2_update_0((c1 - 10) / 1, (c0 - 10) / 1);
    }

  }
}

  */
	  // Schedules...
	    // h10_1_300MHz_2_update_0 -> [1*d1*1*1 + 1*10,1*d0*1*1 + 1*10,1*12]
	    // h3_0_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
	    // h3_1_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*3]
	    // h3_2_update_0 -> [1*d1*1*1 + 1*3,1*d0*1*1 + 1*3,1*4]
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
	  for (int c1 = -10; c1 <= 521; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-10 <= c1 && c1 <= 521) && ((c1 - 0) % 1 == 0) && (-10 <= c0 && c0 <= 1033) && ((c0 - 0) % 1 == 0)) {
	      in_cc_update_0(in /* buf name */, in_cc, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((-8 <= c1 && c1 <= 521) && ((c1 - 1) % 1 == 0) && (-8 <= c0 && c0 <= 1033) && ((c0 - 1) % 1 == 0)) {
	      h3_0_update_0(in_cc /* buf name */, h3_0, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((-6 <= c1 && c1 <= 521) && ((c1 - 2) % 1 == 0) && (-6 <= c0 && c0 <= 1033) && ((c0 - 2) % 1 == 0)) {
	      h3_1_update_0(h3_0 /* buf name */, h3_1, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((-4 <= c1 && c1 <= 521) && ((c1 - 3) % 1 == 0) && (-4 <= c0 && c0 <= 1033) && ((c0 - 3) % 1 == 0)) {
	      h3_2_update_0(h3_1 /* buf name */, h3_2, (c1 - 3) / 1, (c0 - 3) / 1);
	    }
	
	    if ((-2 <= c1 && c1 <= 521) && ((c1 - 4) % 1 == 0) && (-2 <= c0 && c0 <= 1033) && ((c0 - 4) % 1 == 0)) {
	      h3_3_update_0(h3_2 /* buf name */, h3_3, (c1 - 4) / 1, (c0 - 4) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 521) && ((c1 - 5) % 1 == 0) && (0 <= c0 && c0 <= 1033) && ((c0 - 5) % 1 == 0)) {
	      h3_4_update_0(h3_3 /* buf name */, h3_4, (c1 - 5) / 1, (c0 - 5) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 521) && ((c1 - 6) % 1 == 0) && (2 <= c0 && c0 <= 1033) && ((c0 - 6) % 1 == 0)) {
	      h3_5_update_0(h3_4 /* buf name */, h3_5, (c1 - 6) / 1, (c0 - 6) / 1);
	    }
	
	    if ((4 <= c1 && c1 <= 521) && ((c1 - 7) % 1 == 0) && (4 <= c0 && c0 <= 1033) && ((c0 - 7) % 1 == 0)) {
	      h3_6_update_0(h3_5 /* buf name */, h3_6, (c1 - 7) / 1, (c0 - 7) / 1);
	    }
	
	    if ((6 <= c1 && c1 <= 521) && ((c1 - 8) % 1 == 0) && (6 <= c0 && c0 <= 1033) && ((c0 - 8) % 1 == 0)) {
	      h3_7_update_0(h3_6 /* buf name */, h3_7, (c1 - 8) / 1, (c0 - 8) / 1);
	    }
	
	    if ((8 <= c1 && c1 <= 521) && ((c1 - 9) % 1 == 0) && (8 <= c0 && c0 <= 1033) && ((c0 - 9) % 1 == 0)) {
	      h3_8_update_0(h3_7 /* buf name */, h3_8, (c1 - 9) / 1, (c0 - 9) / 1);
	    }
	
	    if ((10 <= c1 && c1 <= 521) && ((c1 - 10) % 1 == 0) && (10 <= c0 && c0 <= 1033) && ((c0 - 10) % 1 == 0)) {
	      h3_9_update_0(h3_8 /* buf name */, h3_9, (c1 - 10) / 1, (c0 - 10) / 1);
	    }
	
	    if ((10 <= c1 && c1 <= 521) && ((c1 - 10) % 1 == 0) && (10 <= c0 && c0 <= 1033) && ((c0 - 10) % 1 == 0)) {
	      h10_1_300MHz_2_update_0(h3_9 /* buf name */, h10_1_300MHz_2, (c1 - 10) / 1, (c0 - 10) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void h10_1_300MHz_2_opt_wrapper(HWStream<hw_uint<64> >& /* get_args num ports = 2 */in, HWStream<hw_uint<64> >& /* get_args num ports = 2 */h10_1_300MHz_2, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    h10_1_300MHz_2_opt(in, h10_1_300MHz_2);
  }
}
#ifdef __VIVADO_SYNTH__
  // { h10_1_300MHz_2_update_0[root = 0, h10_1_300MHz_2_0, h10_1_300MHz_2_1] -> h10_1_300MHz_2[0, 0] : 0 <= h10_1_300MHz_2_0 <= 511 and 0 <= h10_1_300MHz_2_1 <= 1023 }
const int h10_1_300MHz_2_update_0_write_pipe0_num_transfers = 524288;
  // { in_cc_update_0[root = 0, in_cc_0, in_cc_1] -> in[0, 0] : -10 <= in_cc_0 <= 521 and -10 <= in_cc_1 <= 1033 }
const int in_cc_update_0_read_pipe0_num_transfers = 555408;


extern "C" {

void h10_1_300MHz_2_opt_accel(hw_uint<64>* in_cc_update_0_read_pipe0, hw_uint<64>* h10_1_300MHz_2_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_cc_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = h10_1_300MHz_2_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_cc_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = h10_1_300MHz_2_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<64> > in_cc_update_0_read_pipe0_channel;
  static HWStream<hw_uint<64> > h10_1_300MHz_2_update_0_write_pipe0_channel;

  burst_read<64>(in_cc_update_0_read_pipe0, in_cc_update_0_read_pipe0_channel, in_cc_update_0_read_pipe0_num_transfers*size);

  h10_1_300MHz_2_opt_wrapper(in_cc_update_0_read_pipe0_channel, h10_1_300MHz_2_update_0_write_pipe0_channel, size);

  burst_write<64>(h10_1_300MHz_2_update_0_write_pipe0, h10_1_300MHz_2_update_0_write_pipe0_channel, h10_1_300MHz_2_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void h10_1_300MHz_2_opt_rdai(HWStream<hw_uint<64> >& in_cc_update_0_read_pipe0, HWStream<hw_uint<64> >&  h10_1_300MHz_2_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_cc_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = h10_1_300MHz_2_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  h10_1_300MHz_2_opt(in_cc_update_0_read_pipe0, h10_1_300MHz_2_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

