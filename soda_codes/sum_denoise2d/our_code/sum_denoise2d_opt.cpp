#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: sum_denoise2d_opt_compute_units.h
#include "sum_denoise2d_opt_compute_units.h"

#include "hw_classes.h"

struct diff_d_diff_d_update_0_write0_to_g_rd0_cache {
	// RAM Box: {[-1, 30], [-1, 30]}
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

struct diff_d_cache {
  // # of banks: 1
  diff_d_diff_d_update_0_write0_to_g_rd0_cache diff_d_diff_d_update_0_write0_to_g_rd0;
};



inline void diff_d_diff_d_update_0_write0_write(hw_uint<32> & diff_d_diff_d_update_0_write0, diff_d_cache& diff_d, int d0, int d1, int dynamic_address) {
  diff_d.diff_d_diff_d_update_0_write0_to_g_rd0.push(diff_d_diff_d_update_0_write0);
}

inline hw_uint<32>  g_rd0_select(diff_d_cache& diff_d, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_rd0 read pattern: { g_update_0[d0, d1] -> diff_d[d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Read schedule : { g_update_0[d0, d1] -> [1 + d1, 1 + d0, 10] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Write schedule: { diff_d_update_0[d0, d1] -> [1 + d1, 1 + d0, 8] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  auto value_diff_d_diff_d_update_0_write0 = diff_d.diff_d_diff_d_update_0_write0_to_g_rd0.peek(/* one reader or all rams */ 0);
  return value_diff_d_diff_d_update_0_write0;
  return 0;
}

// # of bundles = 2
// diff_d_update_0_write
//	diff_d_diff_d_update_0_write0
inline void diff_d_diff_d_update_0_write_bundle_write(hw_uint<32>& diff_d_update_0_write, diff_d_cache& diff_d, int d0, int d1, int dynamic_address) {
	hw_uint<32>  diff_d_diff_d_update_0_write0_res = diff_d_update_0_write.extract<0, 31>();
	diff_d_diff_d_update_0_write0_write(diff_d_diff_d_update_0_write0_res, diff_d, d0, d1, dynamic_address);
}

// g_update_0_read
//	g_rd0
inline hw_uint<32> diff_d_g_update_0_read_bundle_read(diff_d_cache& diff_d, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // g_rd0

	hw_uint<32> result;
	hw_uint<32>  g_rd0_res = g_rd0_select(diff_d, d0, d1, dynamic_address);
	set_at<0, 32>(result, g_rd0_res);
	return result;
}

#include "hw_classes.h"

struct diff_l_diff_l_update_0_write0_to_g_rd0_cache {
	// RAM Box: {[-1, 30], [-1, 30]}
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

struct diff_l_cache {
  // # of banks: 1
  diff_l_diff_l_update_0_write0_to_g_rd0_cache diff_l_diff_l_update_0_write0_to_g_rd0;
};



inline void diff_l_diff_l_update_0_write0_write(hw_uint<32> & diff_l_diff_l_update_0_write0, diff_l_cache& diff_l, int d0, int d1, int dynamic_address) {
  diff_l.diff_l_diff_l_update_0_write0_to_g_rd0.push(diff_l_diff_l_update_0_write0);
}

inline hw_uint<32>  g_rd0_select(diff_l_cache& diff_l, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_rd0 read pattern: { g_update_0[d0, d1] -> diff_l[d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Read schedule : { g_update_0[d0, d1] -> [1 + d1, 1 + d0, 10] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Write schedule: { diff_l_update_0[d0, d1] -> [1 + d1, 1 + d0, 7] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  auto value_diff_l_diff_l_update_0_write0 = diff_l.diff_l_diff_l_update_0_write0_to_g_rd0.peek(/* one reader or all rams */ 0);
  return value_diff_l_diff_l_update_0_write0;
  return 0;
}

// # of bundles = 2
// diff_l_update_0_write
//	diff_l_diff_l_update_0_write0
inline void diff_l_diff_l_update_0_write_bundle_write(hw_uint<32>& diff_l_update_0_write, diff_l_cache& diff_l, int d0, int d1, int dynamic_address) {
	hw_uint<32>  diff_l_diff_l_update_0_write0_res = diff_l_update_0_write.extract<0, 31>();
	diff_l_diff_l_update_0_write0_write(diff_l_diff_l_update_0_write0_res, diff_l, d0, d1, dynamic_address);
}

// g_update_0_read
//	g_rd0
inline hw_uint<32> diff_l_g_update_0_read_bundle_read(diff_l_cache& diff_l, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // g_rd0

	hw_uint<32> result;
	hw_uint<32>  g_rd0_res = g_rd0_select(diff_l, d0, d1, dynamic_address);
	set_at<0, 32>(result, g_rd0_res);
	return result;
}

#include "hw_classes.h"

struct diff_qwe_diff_qwe_update_0_write0_to_g_rd0_cache {
	// RAM Box: {[-1, 30], [-1, 30]}
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

struct diff_qwe_cache {
  // # of banks: 1
  diff_qwe_diff_qwe_update_0_write0_to_g_rd0_cache diff_qwe_diff_qwe_update_0_write0_to_g_rd0;
};



inline void diff_qwe_diff_qwe_update_0_write0_write(hw_uint<32> & diff_qwe_diff_qwe_update_0_write0, diff_qwe_cache& diff_qwe, int d0, int d1, int dynamic_address) {
  diff_qwe.diff_qwe_diff_qwe_update_0_write0_to_g_rd0.push(diff_qwe_diff_qwe_update_0_write0);
}

inline hw_uint<32>  g_rd0_select(diff_qwe_cache& diff_qwe, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_rd0 read pattern: { g_update_0[d0, d1] -> diff_qwe[d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Read schedule : { g_update_0[d0, d1] -> [1 + d1, 1 + d0, 10] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Write schedule: { diff_qwe_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  auto value_diff_qwe_diff_qwe_update_0_write0 = diff_qwe.diff_qwe_diff_qwe_update_0_write0_to_g_rd0.peek(/* one reader or all rams */ 0);
  return value_diff_qwe_diff_qwe_update_0_write0;
  return 0;
}

// # of bundles = 2
// diff_qwe_update_0_write
//	diff_qwe_diff_qwe_update_0_write0
inline void diff_qwe_diff_qwe_update_0_write_bundle_write(hw_uint<32>& diff_qwe_update_0_write, diff_qwe_cache& diff_qwe, int d0, int d1, int dynamic_address) {
	hw_uint<32>  diff_qwe_diff_qwe_update_0_write0_res = diff_qwe_update_0_write.extract<0, 31>();
	diff_qwe_diff_qwe_update_0_write0_write(diff_qwe_diff_qwe_update_0_write0_res, diff_qwe, d0, d1, dynamic_address);
}

// g_update_0_read
//	g_rd0
inline hw_uint<32> diff_qwe_g_update_0_read_bundle_read(diff_qwe_cache& diff_qwe, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // g_rd0

	hw_uint<32> result;
	hw_uint<32>  g_rd0_res = g_rd0_select(diff_qwe, d0, d1, dynamic_address);
	set_at<0, 32>(result, g_rd0_res);
	return result;
}

#include "hw_classes.h"

struct diff_r_diff_r_update_0_write0_to_g_rd0_cache {
	// RAM Box: {[-1, 30], [-1, 30]}
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

struct diff_r_cache {
  // # of banks: 1
  diff_r_diff_r_update_0_write0_to_g_rd0_cache diff_r_diff_r_update_0_write0_to_g_rd0;
};



inline void diff_r_diff_r_update_0_write0_write(hw_uint<32> & diff_r_diff_r_update_0_write0, diff_r_cache& diff_r, int d0, int d1, int dynamic_address) {
  diff_r.diff_r_diff_r_update_0_write0_to_g_rd0.push(diff_r_diff_r_update_0_write0);
}

inline hw_uint<32>  g_rd0_select(diff_r_cache& diff_r, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_rd0 read pattern: { g_update_0[d0, d1] -> diff_r[d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Read schedule : { g_update_0[d0, d1] -> [1 + d1, 1 + d0, 10] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Write schedule: { diff_r_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  auto value_diff_r_diff_r_update_0_write0 = diff_r.diff_r_diff_r_update_0_write0_to_g_rd0.peek(/* one reader or all rams */ 0);
  return value_diff_r_diff_r_update_0_write0;
  return 0;
}

// # of bundles = 2
// diff_r_update_0_write
//	diff_r_diff_r_update_0_write0
inline void diff_r_diff_r_update_0_write_bundle_write(hw_uint<32>& diff_r_update_0_write, diff_r_cache& diff_r, int d0, int d1, int dynamic_address) {
	hw_uint<32>  diff_r_diff_r_update_0_write0_res = diff_r_update_0_write.extract<0, 31>();
	diff_r_diff_r_update_0_write0_write(diff_r_diff_r_update_0_write0_res, diff_r, d0, d1, dynamic_address);
}

// g_update_0_read
//	g_rd0
inline hw_uint<32> diff_r_g_update_0_read_bundle_read(diff_r_cache& diff_r, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // g_rd0

	hw_uint<32> result;
	hw_uint<32>  g_rd0_res = g_rd0_select(diff_r, d0, d1, dynamic_address);
	set_at<0, 32>(result, g_rd0_res);
	return result;
}

#include "hw_classes.h"

struct f_f_update_0_write0_merged_banks_2_cache {
	// RAM Box: {[0, 29], [0, 29]}
	// Capacity: 1
	// # of read delays: 1
  // 0
	hw_uint<32>  f1;


	inline hw_uint<32>  peek_0() {
		return f1;
	}



	inline void push(const hw_uint<32>  value) {
    // cap: 1
    f1 = value;
	}

};

struct f_cache {
  // # of banks: 1
  f_f_update_0_write0_merged_banks_2_cache f_f_update_0_write0_merged_banks_2;
};



inline void f_f_update_0_write0_write(hw_uint<32> & f_f_update_0_write0, f_cache& f, int d0, int d1, int dynamic_address) {
  f.f_f_update_0_write0_merged_banks_2.push(f_f_update_0_write0);
}

inline hw_uint<32>  r0_rd0_select(f_cache& f, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // r0_rd0 read pattern: { r0_update_0[d0, d1] -> f[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { r0_update_0[d0, d1] -> [2 + d1, 2 + d0, 4] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { f_update_0[d0, d1] -> [2 + d1, 2 + d0, 1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_f_f_update_0_write0 = f.f_f_update_0_write0_merged_banks_2.peek_0();
  return value_f_f_update_0_write0;
  return 0;
}

inline hw_uint<32>  sum_denoise2d_rd0_select(f_cache& f, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sum_denoise2d_rd0 read pattern: { sum_denoise2d_update_0[d0, d1] -> f[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { sum_denoise2d_update_0[d0, d1] -> [2 + d1, 2 + d0, 11] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { f_update_0[d0, d1] -> [2 + d1, 2 + d0, 1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_f_f_update_0_write0 = f.f_f_update_0_write0_merged_banks_2.peek_0();
  return value_f_f_update_0_write0;
  return 0;
}

// # of bundles = 3
// f_update_0_write
//	f_f_update_0_write0
inline void f_f_update_0_write_bundle_write(hw_uint<32>& f_update_0_write, f_cache& f, int d0, int d1, int dynamic_address) {
	hw_uint<32>  f_f_update_0_write0_res = f_update_0_write.extract<0, 31>();
	f_f_update_0_write0_write(f_f_update_0_write0_res, f, d0, d1, dynamic_address);
}

// r0_update_0_read
//	r0_rd0
inline hw_uint<32> f_r0_update_0_read_bundle_read(f_cache& f, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // r0_rd0

	hw_uint<32> result;
	hw_uint<32>  r0_rd0_res = r0_rd0_select(f, d0, d1, dynamic_address);
	set_at<0, 32>(result, r0_rd0_res);
	return result;
}

// sum_denoise2d_update_0_read
//	sum_denoise2d_rd0
inline hw_uint<32> f_sum_denoise2d_update_0_read_bundle_read(f_cache& f, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // sum_denoise2d_rd0

	hw_uint<32> result;
	hw_uint<32>  sum_denoise2d_rd0_res = sum_denoise2d_rd0_select(f, d0, d1, dynamic_address);
	set_at<0, 32>(result, sum_denoise2d_rd0_res);
	return result;
}

#include "hw_classes.h"

struct g_g_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[-1, 30], [0, 29]}
	// Capacity: 66
	// # of read delays: 5
  // 0, 1, 32, 34, 65
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 30> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 30> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_31() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_32() {
		return f4;
	}

	inline hw_uint<32>  peek_33() {
		return f5;
	}

	inline hw_uint<32>  peek_34() {
		return f6;
	}

	inline hw_uint<32>  peek_64() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_65() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 30
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 30 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f5;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f5 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 30
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 30 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct g_cache {
  // # of banks: 1
  g_g_update_0_write0_merged_banks_4_cache g_g_update_0_write0_merged_banks_4;
};



inline void g_g_update_0_write0_write(hw_uint<32> & g_g_update_0_write0, g_cache& g, int d0, int d1, int dynamic_address) {
  g.g_g_update_0_write0_merged_banks_4.push(g_g_update_0_write0);
}

inline hw_uint<32>  sum_denoise2d_rd0_select(g_cache& g, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sum_denoise2d_rd0 read pattern: { sum_denoise2d_update_0[d0, d1] -> g[-1 + d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { sum_denoise2d_update_0[d0, d1] -> [2 + d1, 2 + d0, 11] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { g_update_0[d0, d1] -> [1 + d1, 1 + d0, 10] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  auto value_g_g_update_0_write0 = g.g_g_update_0_write0_merged_banks_4.peek_34();
  return value_g_g_update_0_write0;
  return 0;
}

inline hw_uint<32>  sum_denoise2d_rd1_select(g_cache& g, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sum_denoise2d_rd1 read pattern: { sum_denoise2d_update_0[d0, d1] -> g[d0, -1 + d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { sum_denoise2d_update_0[d0, d1] -> [2 + d1, 2 + d0, 11] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { g_update_0[d0, d1] -> [1 + d1, 1 + d0, 10] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  auto value_g_g_update_0_write0 = g.g_g_update_0_write0_merged_banks_4.peek_65();
  return value_g_g_update_0_write0;
  return 0;
}

inline hw_uint<32>  sum_denoise2d_rd2_select(g_cache& g, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sum_denoise2d_rd2 read pattern: { sum_denoise2d_update_0[d0, d1] -> g[d0, 1 + d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { sum_denoise2d_update_0[d0, d1] -> [2 + d1, 2 + d0, 11] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { g_update_0[d0, d1] -> [1 + d1, 1 + d0, 10] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  auto value_g_g_update_0_write0 = g.g_g_update_0_write0_merged_banks_4.peek_1();
  return value_g_g_update_0_write0;
  return 0;
}

inline hw_uint<32>  sum_denoise2d_rd3_select(g_cache& g, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sum_denoise2d_rd3 read pattern: { sum_denoise2d_update_0[d0, d1] -> g[1 + d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { sum_denoise2d_update_0[d0, d1] -> [2 + d1, 2 + d0, 11] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { g_update_0[d0, d1] -> [1 + d1, 1 + d0, 10] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  auto value_g_g_update_0_write0 = g.g_g_update_0_write0_merged_banks_4.peek_32();
  return value_g_g_update_0_write0;
  return 0;
}

// # of bundles = 2
// g_update_0_write
//	g_g_update_0_write0
inline void g_g_update_0_write_bundle_write(hw_uint<32>& g_update_0_write, g_cache& g, int d0, int d1, int dynamic_address) {
	hw_uint<32>  g_g_update_0_write0_res = g_update_0_write.extract<0, 31>();
	g_g_update_0_write0_write(g_g_update_0_write0_res, g, d0, d1, dynamic_address);
}

// sum_denoise2d_update_0_read
//	sum_denoise2d_rd0
//	sum_denoise2d_rd1
//	sum_denoise2d_rd2
//	sum_denoise2d_rd3
inline hw_uint<128> g_sum_denoise2d_update_0_read_bundle_read(g_cache& g, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // sum_denoise2d_rd0
    // sum_denoise2d_rd1
    // sum_denoise2d_rd2
    // sum_denoise2d_rd3

	hw_uint<128> result;
	hw_uint<32>  sum_denoise2d_rd0_res = sum_denoise2d_rd0_select(g, d0, d1, dynamic_address);
	set_at<0, 128>(result, sum_denoise2d_rd0_res);
	hw_uint<32>  sum_denoise2d_rd1_res = sum_denoise2d_rd1_select(g, d0, d1, dynamic_address);
	set_at<32, 128>(result, sum_denoise2d_rd1_res);
	hw_uint<32>  sum_denoise2d_rd2_res = sum_denoise2d_rd2_select(g, d0, d1, dynamic_address);
	set_at<64, 128>(result, sum_denoise2d_rd2_res);
	hw_uint<32>  sum_denoise2d_rd3_res = sum_denoise2d_rd3_select(g, d0, d1, dynamic_address);
	set_at<96, 128>(result, sum_denoise2d_rd3_res);
	return result;
}

#include "hw_classes.h"

struct r0_r0_update_0_write0_to_r1_rd0_cache {
	// RAM Box: {[0, 29], [0, 29]}
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

struct r0_cache {
  // # of banks: 1
  r0_r0_update_0_write0_to_r1_rd0_cache r0_r0_update_0_write0_to_r1_rd0;
};



inline void r0_r0_update_0_write0_write(hw_uint<32> & r0_r0_update_0_write0, r0_cache& r0, int d0, int d1, int dynamic_address) {
  r0.r0_r0_update_0_write0_to_r1_rd0.push(r0_r0_update_0_write0);
}

inline hw_uint<32>  r1_rd0_select(r0_cache& r0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // r1_rd0 read pattern: { r1_update_0[d0, d1] -> r0[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { r1_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { r0_update_0[d0, d1] -> [2 + d1, 2 + d0, 4] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_r0_r0_update_0_write0 = r0.r0_r0_update_0_write0_to_r1_rd0.peek(/* one reader or all rams */ 0);
  return value_r0_r0_update_0_write0;
  return 0;
}

// # of bundles = 2
// r0_update_0_write
//	r0_r0_update_0_write0
inline void r0_r0_update_0_write_bundle_write(hw_uint<32>& r0_update_0_write, r0_cache& r0, int d0, int d1, int dynamic_address) {
	hw_uint<32>  r0_r0_update_0_write0_res = r0_update_0_write.extract<0, 31>();
	r0_r0_update_0_write0_write(r0_r0_update_0_write0_res, r0, d0, d1, dynamic_address);
}

// r1_update_0_read
//	r1_rd0
inline hw_uint<32> r0_r1_update_0_read_bundle_read(r0_cache& r0, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // r1_rd0

	hw_uint<32> result;
	hw_uint<32>  r1_rd0_res = r1_rd0_select(r0, d0, d1, dynamic_address);
	set_at<0, 32>(result, r1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct r1_r1_update_0_write0_to_sum_denoise2d_rd0_cache {
	// RAM Box: {[0, 29], [0, 29]}
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

struct r1_cache {
  // # of banks: 1
  r1_r1_update_0_write0_to_sum_denoise2d_rd0_cache r1_r1_update_0_write0_to_sum_denoise2d_rd0;
};



inline void r1_r1_update_0_write0_write(hw_uint<32> & r1_r1_update_0_write0, r1_cache& r1, int d0, int d1, int dynamic_address) {
  r1.r1_r1_update_0_write0_to_sum_denoise2d_rd0.push(r1_r1_update_0_write0);
}

inline hw_uint<32>  sum_denoise2d_rd0_select(r1_cache& r1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sum_denoise2d_rd0 read pattern: { sum_denoise2d_update_0[d0, d1] -> r1[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { sum_denoise2d_update_0[d0, d1] -> [2 + d1, 2 + d0, 11] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { r1_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_r1_r1_update_0_write0 = r1.r1_r1_update_0_write0_to_sum_denoise2d_rd0.peek(/* one reader or all rams */ 0);
  return value_r1_r1_update_0_write0;
  return 0;
}

// # of bundles = 2
// r1_update_0_write
//	r1_r1_update_0_write0
inline void r1_r1_update_0_write_bundle_write(hw_uint<32>& r1_update_0_write, r1_cache& r1, int d0, int d1, int dynamic_address) {
	hw_uint<32>  r1_r1_update_0_write0_res = r1_update_0_write.extract<0, 31>();
	r1_r1_update_0_write0_write(r1_r1_update_0_write0_res, r1, d0, d1, dynamic_address);
}

// sum_denoise2d_update_0_read
//	sum_denoise2d_rd0
inline hw_uint<32> r1_sum_denoise2d_update_0_read_bundle_read(r1_cache& r1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // sum_denoise2d_rd0

	hw_uint<32> result;
	hw_uint<32>  sum_denoise2d_rd0_res = sum_denoise2d_rd0_select(r1, d0, d1, dynamic_address);
	set_at<0, 32>(result, sum_denoise2d_rd0_res);
	return result;
}

#include "hw_classes.h"

struct u_u_update_0_write0_merged_banks_13_cache {
	// RAM Box: {[-2, 31], [-1, 30]}
	// Capacity: 105
	// # of read delays: 9
  // 0, 1, 34, 35, 36, 69, 70, 71, 104
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 32> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 32> f9;
	hw_uint<32>  f10;
	hw_uint<32>  f12;
	hw_uint<32>  f14;
	fifo<hw_uint<32> , 32> f15;
	hw_uint<32>  f16;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_33() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_34() {
		return f4;
	}

	inline hw_uint<32>  peek_35() {
		return f6;
	}

	inline hw_uint<32>  peek_36() {
		return f8;
	}

	inline hw_uint<32>  peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_69() {
		return f10;
	}

	inline hw_uint<32>  peek_70() {
		return f12;
	}

	inline hw_uint<32>  peek_71() {
		return f14;
	}

	inline hw_uint<32>  peek_103() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f15.back();
	}

	inline hw_uint<32>  peek_104() {
		return f16;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 32
    f16 = f15.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 32 reading from capacity: 1
    f15.push(f14);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f12 = f10;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 32
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 32 reading from capacity: 1
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
    // cap: 1 reading from capacity: 32
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 32 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct u_cache {
  // # of banks: 1
  u_u_update_0_write0_merged_banks_13_cache u_u_update_0_write0_merged_banks_13;
};



inline void u_u_update_0_write0_write(hw_uint<32> & u_u_update_0_write0, u_cache& u, int d0, int d1, int dynamic_address) {
  u.u_u_update_0_write0_merged_banks_13.push(u_u_update_0_write0);
}

inline hw_uint<32>  diff_d_rd0_select(u_cache& u, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_d_rd0 read pattern: { diff_d_update_0[d0, d1] -> u[d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Read schedule : { diff_d_update_0[d0, d1] -> [1 + d1, 1 + d0, 8] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Write schedule: { u_update_0[d0, d1] -> [d1, d0, 3] : -2 <= d0 <= 31 and -2 <= d1 <= 31 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_13.peek_35();
  return value_u_u_update_0_write0;
  return 0;
}

inline hw_uint<32>  diff_d_rd1_select(u_cache& u, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_d_rd1 read pattern: { diff_d_update_0[d0, d1] -> u[d0, 1 + d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Read schedule : { diff_d_update_0[d0, d1] -> [1 + d1, 1 + d0, 8] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Write schedule: { u_update_0[d0, d1] -> [d1, d0, 3] : -2 <= d0 <= 31 and -2 <= d1 <= 31 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_13.peek_1();
  return value_u_u_update_0_write0;
  return 0;
}

inline hw_uint<32>  diff_l_rd0_select(u_cache& u, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_l_rd0 read pattern: { diff_l_update_0[d0, d1] -> u[-1 + d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Read schedule : { diff_l_update_0[d0, d1] -> [1 + d1, 1 + d0, 7] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Write schedule: { u_update_0[d0, d1] -> [d1, d0, 3] : -2 <= d0 <= 31 and -2 <= d1 <= 31 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_13.peek_36();
  return value_u_u_update_0_write0;
  return 0;
}

inline hw_uint<32>  diff_l_rd1_select(u_cache& u, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_l_rd1 read pattern: { diff_l_update_0[d0, d1] -> u[d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Read schedule : { diff_l_update_0[d0, d1] -> [1 + d1, 1 + d0, 7] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Write schedule: { u_update_0[d0, d1] -> [d1, d0, 3] : -2 <= d0 <= 31 and -2 <= d1 <= 31 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_13.peek_35();
  return value_u_u_update_0_write0;
  return 0;
}

inline hw_uint<32>  diff_qwe_rd0_select(u_cache& u, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_qwe_rd0 read pattern: { diff_qwe_update_0[d0, d1] -> u[d0, -1 + d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Read schedule : { diff_qwe_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Write schedule: { u_update_0[d0, d1] -> [d1, d0, 3] : -2 <= d0 <= 31 and -2 <= d1 <= 31 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_13.peek_69();
  return value_u_u_update_0_write0;
  return 0;
}

inline hw_uint<32>  diff_qwe_rd1_select(u_cache& u, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_qwe_rd1 read pattern: { diff_qwe_update_0[d0, d1] -> u[d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Read schedule : { diff_qwe_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Write schedule: { u_update_0[d0, d1] -> [d1, d0, 3] : -2 <= d0 <= 31 and -2 <= d1 <= 31 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_13.peek_35();
  return value_u_u_update_0_write0;
  return 0;
}

inline hw_uint<32>  diff_r_rd0_select(u_cache& u, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_r_rd0 read pattern: { diff_r_update_0[d0, d1] -> u[d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Read schedule : { diff_r_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Write schedule: { u_update_0[d0, d1] -> [d1, d0, 3] : -2 <= d0 <= 31 and -2 <= d1 <= 31 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_13.peek_35();
  return value_u_u_update_0_write0;
  return 0;
}

inline hw_uint<32>  diff_r_rd1_select(u_cache& u, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_r_rd1 read pattern: { diff_r_update_0[d0, d1] -> u[1 + d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Read schedule : { diff_r_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Write schedule: { u_update_0[d0, d1] -> [d1, d0, 3] : -2 <= d0 <= 31 and -2 <= d1 <= 31 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_13.peek_34();
  return value_u_u_update_0_write0;
  return 0;
}

inline hw_uint<32>  r0_rd0_select(u_cache& u, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // r0_rd0 read pattern: { r0_update_0[d0, d1] -> u[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { r0_update_0[d0, d1] -> [2 + d1, 2 + d0, 4] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { u_update_0[d0, d1] -> [d1, d0, 3] : -2 <= d0 <= 31 and -2 <= d1 <= 31 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_13.peek_70();
  return value_u_u_update_0_write0;
  return 0;
}

inline hw_uint<32>  sum_denoise2d_rd0_select(u_cache& u, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sum_denoise2d_rd0 read pattern: { sum_denoise2d_update_0[d0, d1] -> u[-1 + d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { sum_denoise2d_update_0[d0, d1] -> [2 + d1, 2 + d0, 11] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { u_update_0[d0, d1] -> [d1, d0, 3] : -2 <= d0 <= 31 and -2 <= d1 <= 31 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_13.peek_71();
  return value_u_u_update_0_write0;
  return 0;
}

inline hw_uint<32>  sum_denoise2d_rd1_select(u_cache& u, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sum_denoise2d_rd1 read pattern: { sum_denoise2d_update_0[d0, d1] -> u[d0, -1 + d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { sum_denoise2d_update_0[d0, d1] -> [2 + d1, 2 + d0, 11] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { u_update_0[d0, d1] -> [d1, d0, 3] : -2 <= d0 <= 31 and -2 <= d1 <= 31 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_13.peek_104();
  return value_u_u_update_0_write0;
  return 0;
}

inline hw_uint<32>  sum_denoise2d_rd2_select(u_cache& u, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sum_denoise2d_rd2 read pattern: { sum_denoise2d_update_0[d0, d1] -> u[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { sum_denoise2d_update_0[d0, d1] -> [2 + d1, 2 + d0, 11] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { u_update_0[d0, d1] -> [d1, d0, 3] : -2 <= d0 <= 31 and -2 <= d1 <= 31 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_13.peek_70();
  return value_u_u_update_0_write0;
  return 0;
}

inline hw_uint<32>  sum_denoise2d_rd3_select(u_cache& u, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sum_denoise2d_rd3 read pattern: { sum_denoise2d_update_0[d0, d1] -> u[1 + d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { sum_denoise2d_update_0[d0, d1] -> [2 + d1, 2 + d0, 11] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { u_update_0[d0, d1] -> [d1, d0, 3] : -2 <= d0 <= 31 and -2 <= d1 <= 31 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_13.peek_69();
  return value_u_u_update_0_write0;
  return 0;
}

// # of bundles = 7
// diff_d_update_0_read
//	diff_d_rd0
//	diff_d_rd1
inline hw_uint<64> u_diff_d_update_0_read_bundle_read(u_cache& u, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // diff_d_rd0
    // diff_d_rd1

	hw_uint<64> result;
	hw_uint<32>  diff_d_rd0_res = diff_d_rd0_select(u, d0, d1, dynamic_address);
	set_at<0, 64>(result, diff_d_rd0_res);
	hw_uint<32>  diff_d_rd1_res = diff_d_rd1_select(u, d0, d1, dynamic_address);
	set_at<32, 64>(result, diff_d_rd1_res);
	return result;
}

// diff_l_update_0_read
//	diff_l_rd0
//	diff_l_rd1
inline hw_uint<64> u_diff_l_update_0_read_bundle_read(u_cache& u, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // diff_l_rd0
    // diff_l_rd1

	hw_uint<64> result;
	hw_uint<32>  diff_l_rd0_res = diff_l_rd0_select(u, d0, d1, dynamic_address);
	set_at<0, 64>(result, diff_l_rd0_res);
	hw_uint<32>  diff_l_rd1_res = diff_l_rd1_select(u, d0, d1, dynamic_address);
	set_at<32, 64>(result, diff_l_rd1_res);
	return result;
}

// diff_qwe_update_0_read
//	diff_qwe_rd0
//	diff_qwe_rd1
inline hw_uint<64> u_diff_qwe_update_0_read_bundle_read(u_cache& u, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // diff_qwe_rd0
    // diff_qwe_rd1

	hw_uint<64> result;
	hw_uint<32>  diff_qwe_rd0_res = diff_qwe_rd0_select(u, d0, d1, dynamic_address);
	set_at<0, 64>(result, diff_qwe_rd0_res);
	hw_uint<32>  diff_qwe_rd1_res = diff_qwe_rd1_select(u, d0, d1, dynamic_address);
	set_at<32, 64>(result, diff_qwe_rd1_res);
	return result;
}

// diff_r_update_0_read
//	diff_r_rd0
//	diff_r_rd1
inline hw_uint<64> u_diff_r_update_0_read_bundle_read(u_cache& u, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // diff_r_rd0
    // diff_r_rd1

	hw_uint<64> result;
	hw_uint<32>  diff_r_rd0_res = diff_r_rd0_select(u, d0, d1, dynamic_address);
	set_at<0, 64>(result, diff_r_rd0_res);
	hw_uint<32>  diff_r_rd1_res = diff_r_rd1_select(u, d0, d1, dynamic_address);
	set_at<32, 64>(result, diff_r_rd1_res);
	return result;
}

// r0_update_0_read
//	r0_rd0
inline hw_uint<32> u_r0_update_0_read_bundle_read(u_cache& u, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // r0_rd0

	hw_uint<32> result;
	hw_uint<32>  r0_rd0_res = r0_rd0_select(u, d0, d1, dynamic_address);
	set_at<0, 32>(result, r0_rd0_res);
	return result;
}

// sum_denoise2d_update_0_read
//	sum_denoise2d_rd0
//	sum_denoise2d_rd1
//	sum_denoise2d_rd2
//	sum_denoise2d_rd3
inline hw_uint<128> u_sum_denoise2d_update_0_read_bundle_read(u_cache& u, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // sum_denoise2d_rd0
    // sum_denoise2d_rd1
    // sum_denoise2d_rd2
    // sum_denoise2d_rd3

	hw_uint<128> result;
	hw_uint<32>  sum_denoise2d_rd0_res = sum_denoise2d_rd0_select(u, d0, d1, dynamic_address);
	set_at<0, 128>(result, sum_denoise2d_rd0_res);
	hw_uint<32>  sum_denoise2d_rd1_res = sum_denoise2d_rd1_select(u, d0, d1, dynamic_address);
	set_at<32, 128>(result, sum_denoise2d_rd1_res);
	hw_uint<32>  sum_denoise2d_rd2_res = sum_denoise2d_rd2_select(u, d0, d1, dynamic_address);
	set_at<64, 128>(result, sum_denoise2d_rd2_res);
	hw_uint<32>  sum_denoise2d_rd3_res = sum_denoise2d_rd3_select(u, d0, d1, dynamic_address);
	set_at<96, 128>(result, sum_denoise2d_rd3_res);
	return result;
}

// u_update_0_write
//	u_u_update_0_write0
inline void u_u_update_0_write_bundle_write(hw_uint<32>& u_update_0_write, u_cache& u, int d0, int d1, int dynamic_address) {
	hw_uint<32>  u_u_update_0_write0_res = u_update_0_write.extract<0, 31>();
	u_u_update_0_write0_write(u_u_update_0_write0_res, u, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 5408 bits


// Operation logic
inline void f_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */f_off_chip, f_cache& f, int d0, int d1) {
  // Dynamic address computation

	// Consume: f_off_chip
	auto f_off_chip_0_c__0_value = f_off_chip.read();
	auto compute_result = id_unrolled_1(f_off_chip_0_c__0_value);
	// Produce: f
	f_f_update_0_write_bundle_write(/* arg names */compute_result, f, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void u_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */u_off_chip, u_cache& u, int d0, int d1) {
  // Dynamic address computation

	// Consume: u_off_chip
	auto u_off_chip_0_c__0_value = u_off_chip.read();
	auto compute_result = id_unrolled_1(u_off_chip_0_c__0_value);
	// Produce: u
	u_u_update_0_write_bundle_write(/* arg names */compute_result, u, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void r0_update_0(u_cache& u, f_cache& f, r0_cache& r0, int d0, int d1) {
  // Dynamic address computation

	// Consume: u
	auto u_0_c__0_value = u_r0_update_0_read_bundle_read(u/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: f
	auto f_0_c__0_value = f_r0_update_0_read_bundle_read(f/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = fadd2_unrolled_1(u_0_c__0_value, f_0_c__0_value);
	// Produce: r0
	r0_r0_update_0_write_bundle_write(/* arg names */compute_result, r0, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void diff_r_update_0(u_cache& u, diff_r_cache& diff_r, int d0, int d1) {
  // Dynamic address computation

	// Consume: u
	auto u_0_c__0_value = u_diff_r_update_0_read_bundle_read(u/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = fadd_unrolled_1(u_0_c__0_value);
	// Produce: diff_r
	diff_r_diff_r_update_0_write_bundle_write(/* arg names */compute_result, diff_r, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void diff_qwe_update_0(u_cache& u, diff_qwe_cache& diff_qwe, int d0, int d1) {
  // Dynamic address computation

	// Consume: u
	auto u_0_c__0_value = u_diff_qwe_update_0_read_bundle_read(u/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = fadd_unrolled_1(u_0_c__0_value);
	// Produce: diff_qwe
	diff_qwe_diff_qwe_update_0_write_bundle_write(/* arg names */compute_result, diff_qwe, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void r1_update_0(r0_cache& r0, r1_cache& r1, int d0, int d1) {
  // Dynamic address computation

	// Consume: r0
	auto r0_0_c__0_value = r0_r1_update_0_read_bundle_read(r0/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(r0_0_c__0_value);
	// Produce: r1
	r1_r1_update_0_write_bundle_write(/* arg names */compute_result, r1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void g_update_0(diff_qwe_cache& diff_qwe, diff_d_cache& diff_d, diff_l_cache& diff_l, diff_r_cache& diff_r, g_cache& g, int d0, int d1) {
  // Dynamic address computation

	// Consume: diff_qwe
	auto diff_qwe_0_c__0_value = diff_qwe_g_update_0_read_bundle_read(diff_qwe/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: diff_d
	auto diff_d_0_c__0_value = diff_d_g_update_0_read_bundle_read(diff_d/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: diff_l
	auto diff_l_0_c__0_value = diff_l_g_update_0_read_bundle_read(diff_l/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: diff_r
	auto diff_r_0_c__0_value = diff_r_g_update_0_read_bundle_read(diff_r/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = fmag2d_unrolled_1(diff_qwe_0_c__0_value, diff_d_0_c__0_value, diff_l_0_c__0_value, diff_r_0_c__0_value);
	// Produce: g
	g_g_update_0_write_bundle_write(/* arg names */compute_result, g, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void sum_denoise2d_update_0(r1_cache& r1, f_cache& f, u_cache& u, g_cache& g, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */sum_denoise2d, int d0, int d1) {
  // Dynamic address computation

	// Consume: r1
	auto r1_0_c__0_value = r1_sum_denoise2d_update_0_read_bundle_read(r1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: f
	auto f_0_c__0_value = f_sum_denoise2d_update_0_read_bundle_read(f/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: u
	auto u_0_c__0_value = u_sum_denoise2d_update_0_read_bundle_read(u/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: g
	auto g_0_c__0_value = g_sum_denoise2d_update_0_read_bundle_read(g/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = out_comp_fadd_unrolled_1(r1_0_c__0_value, f_0_c__0_value, u_0_c__0_value, g_0_c__0_value);
	// Produce: sum_denoise2d
	sum_denoise2d.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void diff_l_update_0(u_cache& u, diff_l_cache& diff_l, int d0, int d1) {
  // Dynamic address computation

	// Consume: u
	auto u_0_c__0_value = u_diff_l_update_0_read_bundle_read(u/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = fadd_unrolled_1(u_0_c__0_value);
	// Produce: diff_l
	diff_l_diff_l_update_0_write_bundle_write(/* arg names */compute_result, diff_l, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void diff_d_update_0(u_cache& u, diff_d_cache& diff_d, int d0, int d1) {
  // Dynamic address computation

	// Consume: u
	auto u_0_c__0_value = u_diff_d_update_0_read_bundle_read(u/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = fadd_unrolled_1(u_0_c__0_value);
	// Produce: diff_d
	diff_d_diff_d_update_0_write_bundle_write(/* arg names */compute_result, diff_d, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void sum_denoise2d_opt(HWStream<hw_uint<32> >& /* get_args num ports = 1 */f_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 1 */u_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 1 */sum_denoise2d) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("sum_denoise2d_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  diff_d_cache diff_d;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  diff_l_cache diff_l;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  diff_qwe_cache diff_qwe;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  diff_r_cache diff_r;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  f_cache f;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  g_cache g;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  r0_cache r0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  r1_cache r1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  u_cache u;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { diff_l_update_0[d0, d1] -> [1 + d1, 1 + d0, 7] : -1 <= d0 <= 30 and -1 <= d1 <= 30; diff_d_update_0[d0, d1] -> [1 + d1, 1 + d0, 8] : -1 <= d0 <= 30 and -1 <= d1 <= 30; diff_qwe_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 30 and -1 <= d1 <= 30; g_update_0[d0, d1] -> [1 + d1, 1 + d0, 10] : -1 <= d0 <= 30 and -1 <= d1 <= 30; diff_r_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 30 and -1 <= d1 <= 30; r0_update_0[d0, d1] -> [2 + d1, 2 + d0, 4] : 0 <= d0 <= 29 and 0 <= d1 <= 29; r1_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 29 and 0 <= d1 <= 29; u_update_0[d0, d1] -> [d1, d0, 3] : -2 <= d0 <= 31 and -2 <= d1 <= 31; f_update_0[d0, d1] -> [2 + d1, 2 + d0, 1] : 0 <= d0 <= 29 and 0 <= d1 <= 29; sum_denoise2d_update_0[d0, d1] -> [2 + d1, 2 + d0, 11] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
//   { diff_l_update_0[d0, d1] -> [1 + d1, 1 + d0, 7] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
// Condition for diff_l_update_0(((-7 + i2 == 0) && (i1 >= 0) && (31 - i1 >= 0) && (i0 >= 0) && (31 - i0 >= 0)))
//   { diff_d_update_0[d0, d1] -> [1 + d1, 1 + d0, 8] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
// Condition for diff_d_update_0(((-8 + i2 == 0) && (i1 >= 0) && (31 - i1 >= 0) && (i0 >= 0) && (31 - i0 >= 0)))
//   { diff_qwe_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
// Condition for diff_qwe_update_0(((-6 + i2 == 0) && (i1 >= 0) && (31 - i1 >= 0) && (i0 >= 0) && (31 - i0 >= 0)))
//   { g_update_0[d0, d1] -> [1 + d1, 1 + d0, 10] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
// Condition for g_update_0(((-10 + i2 == 0) && (i1 >= 0) && (31 - i1 >= 0) && (i0 >= 0) && (31 - i0 >= 0)))
//   { diff_r_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
// Condition for diff_r_update_0(((-5 + i2 == 0) && (i1 >= 0) && (31 - i1 >= 0) && (i0 >= 0) && (31 - i0 >= 0)))
//   { r0_update_0[d0, d1] -> [2 + d1, 2 + d0, 4] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
// Condition for r0_update_0(((-4 + i2 == 0) && (-2 + i1 >= 0) && (31 - i1 >= 0) && (-2 + i0 >= 0) && (31 - i0 >= 0)))
//   { r1_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
// Condition for r1_update_0(((-9 + i2 == 0) && (-2 + i1 >= 0) && (31 - i1 >= 0) && (-2 + i0 >= 0) && (31 - i0 >= 0)))
//   { u_update_0[d0, d1] -> [d1, d0, 3] : -2 <= d0 <= 31 and -2 <= d1 <= 31 }
// Condition for u_update_0(((-3 + i2 == 0) && (2 + i1 >= 0) && (31 - i1 >= 0) && (2 + i0 >= 0) && (31 - i0 >= 0)))
//   { f_update_0[d0, d1] -> [2 + d1, 2 + d0, 1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
// Condition for f_update_0(((-1 + i2 == 0) && (-2 + i1 >= 0) && (31 - i1 >= 0) && (-2 + i0 >= 0) && (31 - i0 >= 0)))
//   { sum_denoise2d_update_0[d0, d1] -> [2 + d1, 2 + d0, 11] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
// Condition for sum_denoise2d_update_0(((-11 + i2 == 0) && (-2 + i1 >= 0) && (31 - i1 >= 0) && (-2 + i0 >= 0) && (31 - i0 >= 0)))

  /*
  // Schedules...
    // diff_d_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*8]
    // diff_l_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*7]
    // diff_qwe_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*6]
    // diff_r_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*5]
    // f_off_chip_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*0]
    // f_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*1]
    // g_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*10]
    // r0_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*4]
    // r1_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*9]
    // sum_denoise2d_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*11]
    // u_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*2]
    // u_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*3]
for (int c0 = -2; c0 <= 31; c0++) {
  for (int c1 = -2; c1 <= 31; c1++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

    if ((2 <= c1 && c1 <= 31) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 31) && ((c0 - 2) % 1 == 0)) {
      f_update_0((c1 - 2) / 1, (c0 - 2) / 1);
    }

    if ((-2 <= c1 && c1 <= 31) && ((c1 - 0) % 1 == 0) && (-2 <= c0 && c0 <= 31) && ((c0 - 0) % 1 == 0)) {
      u_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((2 <= c1 && c1 <= 31) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 31) && ((c0 - 2) % 1 == 0)) {
      r0_update_0((c1 - 2) / 1, (c0 - 2) / 1);
    }

    if ((0 <= c1 && c1 <= 31) && ((c1 - 1) % 1 == 0) && (0 <= c0 && c0 <= 31) && ((c0 - 1) % 1 == 0)) {
      diff_r_update_0((c1 - 1) / 1, (c0 - 1) / 1);
    }

    if ((0 <= c1 && c1 <= 31) && ((c1 - 1) % 1 == 0) && (0 <= c0 && c0 <= 31) && ((c0 - 1) % 1 == 0)) {
      diff_qwe_update_0((c1 - 1) / 1, (c0 - 1) / 1);
    }

    if ((0 <= c1 && c1 <= 31) && ((c1 - 1) % 1 == 0) && (0 <= c0 && c0 <= 31) && ((c0 - 1) % 1 == 0)) {
      diff_l_update_0((c1 - 1) / 1, (c0 - 1) / 1);
    }

    if ((0 <= c1 && c1 <= 31) && ((c1 - 1) % 1 == 0) && (0 <= c0 && c0 <= 31) && ((c0 - 1) % 1 == 0)) {
      diff_d_update_0((c1 - 1) / 1, (c0 - 1) / 1);
    }

    if ((2 <= c1 && c1 <= 31) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 31) && ((c0 - 2) % 1 == 0)) {
      r1_update_0((c1 - 2) / 1, (c0 - 2) / 1);
    }

    if ((0 <= c1 && c1 <= 31) && ((c1 - 1) % 1 == 0) && (0 <= c0 && c0 <= 31) && ((c0 - 1) % 1 == 0)) {
      g_update_0((c1 - 1) / 1, (c0 - 1) / 1);
    }

    if ((2 <= c1 && c1 <= 31) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 31) && ((c0 - 2) % 1 == 0)) {
      sum_denoise2d_update_0((c1 - 2) / 1, (c0 - 2) / 1);
    }

  }
}

  */
	  // Schedules...
	    // diff_d_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*8]
	    // diff_l_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*7]
	    // diff_qwe_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*6]
	    // diff_r_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*5]
	    // f_off_chip_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*0]
	    // f_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*1]
	    // g_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*10]
	    // r0_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*4]
	    // r1_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*9]
	    // sum_denoise2d_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*11]
	    // u_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*2]
	    // u_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*3]
	for (int c0 = -2; c0 <= 31; c0++) {
	  for (int c1 = -2; c1 <= 31; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((2 <= c1 && c1 <= 31) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 31) && ((c0 - 2) % 1 == 0)) {
	      f_update_0(f_off_chip /* buf name */, f, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((-2 <= c1 && c1 <= 31) && ((c1 - 0) % 1 == 0) && (-2 <= c0 && c0 <= 31) && ((c0 - 0) % 1 == 0)) {
	      u_update_0(u_off_chip /* buf name */, u, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 31) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 31) && ((c0 - 2) % 1 == 0)) {
	      r0_update_0(u /* buf name */, f /* buf name */, r0, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 31) && ((c1 - 1) % 1 == 0) && (0 <= c0 && c0 <= 31) && ((c0 - 1) % 1 == 0)) {
	      diff_r_update_0(u /* buf name */, diff_r, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 31) && ((c1 - 1) % 1 == 0) && (0 <= c0 && c0 <= 31) && ((c0 - 1) % 1 == 0)) {
	      diff_qwe_update_0(u /* buf name */, diff_qwe, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 31) && ((c1 - 1) % 1 == 0) && (0 <= c0 && c0 <= 31) && ((c0 - 1) % 1 == 0)) {
	      diff_l_update_0(u /* buf name */, diff_l, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 31) && ((c1 - 1) % 1 == 0) && (0 <= c0 && c0 <= 31) && ((c0 - 1) % 1 == 0)) {
	      diff_d_update_0(u /* buf name */, diff_d, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 31) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 31) && ((c0 - 2) % 1 == 0)) {
	      r1_update_0(r0 /* buf name */, r1, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 31) && ((c1 - 1) % 1 == 0) && (0 <= c0 && c0 <= 31) && ((c0 - 1) % 1 == 0)) {
	      g_update_0(diff_qwe /* buf name */, diff_d /* buf name */, diff_l /* buf name */, diff_r /* buf name */, g, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 31) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 31) && ((c0 - 2) % 1 == 0)) {
	      sum_denoise2d_update_0(r1 /* buf name */, f /* buf name */, u /* buf name */, g /* buf name */, sum_denoise2d, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void sum_denoise2d_opt_wrapper(HWStream<hw_uint<32> >& /* get_args num ports = 1 */f_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 1 */u_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 1 */sum_denoise2d, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    sum_denoise2d_opt(f_off_chip, u_off_chip, sum_denoise2d);
  }
}
#ifdef __VIVADO_SYNTH__
  // { f_update_0[root = 0, f_0, f_1] -> f_off_chip[0, 0] : 0 <= f_0 <= 29 and 0 <= f_1 <= 29 }
const int f_update_0_read_pipe0_num_transfers = 900;
  // { sum_denoise2d_update_0[root = 0, sum_denoise2d_0, sum_denoise2d_1] -> sum_denoise2d[0, 0] : 0 <= sum_denoise2d_0 <= 29 and 0 <= sum_denoise2d_1 <= 29 }
const int sum_denoise2d_update_0_write_pipe0_num_transfers = 900;
  // { u_update_0[root = 0, u_0, u_1] -> u_off_chip[0, 0] : -2 <= u_0 <= 31 and -2 <= u_1 <= 31 }
const int u_update_0_read_pipe0_num_transfers = 1156;


extern "C" {

void sum_denoise2d_opt_accel(hw_uint<32>* f_update_0_read_pipe0, hw_uint<32>* u_update_0_read_pipe0, hw_uint<32>* sum_denoise2d_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = f_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = u_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem1
#pragma HLS INTERFACE m_axi port = sum_denoise2d_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem2

#pragma HLS INTERFACE s_axilite port = f_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = u_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = sum_denoise2d_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<32> > f_update_0_read_pipe0_channel;
  static HWStream<hw_uint<32> > u_update_0_read_pipe0_channel;
  static HWStream<hw_uint<32> > sum_denoise2d_update_0_write_pipe0_channel;

  burst_read<32>(f_update_0_read_pipe0, f_update_0_read_pipe0_channel, f_update_0_read_pipe0_num_transfers*size);
  burst_read<32>(u_update_0_read_pipe0, u_update_0_read_pipe0_channel, u_update_0_read_pipe0_num_transfers*size);

  sum_denoise2d_opt_wrapper(f_update_0_read_pipe0_channel, u_update_0_read_pipe0_channel, sum_denoise2d_update_0_write_pipe0_channel, size);

  burst_write<32>(sum_denoise2d_update_0_write_pipe0, sum_denoise2d_update_0_write_pipe0_channel, sum_denoise2d_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void sum_denoise2d_opt_rdai(HWStream<hw_uint<32> >& f_update_0_read_pipe0, HWStream<hw_uint<32> >& u_update_0_read_pipe0, HWStream<hw_uint<32> >&  sum_denoise2d_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = f_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = u_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = sum_denoise2d_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  sum_denoise2d_opt(f_update_0_read_pipe0, u_update_0_read_pipe0, sum_denoise2d_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

