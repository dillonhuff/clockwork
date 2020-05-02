#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "two_input_denoise_pipeline_opt_compute_units.h"

#include "hw_classes.h"

struct diff_d_diff_d_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 29], [0, 29]}
	// Capacity: 1
	// # of read delays: 1
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
  diff_d_diff_d_update_0_write0_merged_banks_1_cache diff_d_diff_d_update_0_write0_merged_banks_1;
};



inline void diff_d_diff_d_update_0_write0_write(hw_uint<32> & diff_d_diff_d_update_0_write0, diff_d_cache& diff_d, int d0, int d1) {
  diff_d.diff_d_diff_d_update_0_write0_merged_banks_1.push(diff_d_diff_d_update_0_write0);
}

inline hw_uint<32>  diff_sums_rd0_select(diff_d_cache& diff_d, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_sums_rd0 read pattern: { diff_sums_update_0[d0, d1] -> diff_d[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { diff_sums_update_0[d0, d1] -> [1 + d1, 1 + d0, 9] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { diff_d_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // DD fold: {  }
  auto value_diff_d_diff_d_update_0_write0 = diff_d.diff_d_diff_d_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_diff_d_diff_d_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// diff_d_update_0_write
//	diff_d_diff_d_update_0_write0
inline void diff_d_diff_d_update_0_write_bundle_write(hw_uint<32>& diff_d_update_0_write, diff_d_cache& diff_d, int d0, int d1) {
	hw_uint<32>  diff_d_diff_d_update_0_write0_res = diff_d_update_0_write.extract<0, 31>();
	diff_d_diff_d_update_0_write0_write(diff_d_diff_d_update_0_write0_res, diff_d, d0, d1);
}

// diff_sums_update_0_read
//	diff_sums_rd0
inline hw_uint<32> diff_d_diff_sums_update_0_read_bundle_read(diff_d_cache& diff_d, int d0, int d1) {
  // # of ports in bundle: 1
    // diff_sums_rd0

	hw_uint<32> result;
	hw_uint<32>  diff_sums_rd0_res = diff_sums_rd0_select(diff_d, d0, d1);
	set_at<0, 32>(result, diff_sums_rd0_res);
	return result;
}

#include "hw_classes.h"

struct diff_l_diff_l_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 29], [0, 29]}
	// Capacity: 1
	// # of read delays: 1
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
  diff_l_diff_l_update_0_write0_merged_banks_1_cache diff_l_diff_l_update_0_write0_merged_banks_1;
};



inline void diff_l_diff_l_update_0_write0_write(hw_uint<32> & diff_l_diff_l_update_0_write0, diff_l_cache& diff_l, int d0, int d1) {
  diff_l.diff_l_diff_l_update_0_write0_merged_banks_1.push(diff_l_diff_l_update_0_write0);
}

inline hw_uint<32>  diff_sums_rd0_select(diff_l_cache& diff_l, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_sums_rd0 read pattern: { diff_sums_update_0[d0, d1] -> diff_l[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { diff_sums_update_0[d0, d1] -> [1 + d1, 1 + d0, 9] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { diff_l_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // DD fold: {  }
  auto value_diff_l_diff_l_update_0_write0 = diff_l.diff_l_diff_l_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_diff_l_diff_l_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// diff_l_update_0_write
//	diff_l_diff_l_update_0_write0
inline void diff_l_diff_l_update_0_write_bundle_write(hw_uint<32>& diff_l_update_0_write, diff_l_cache& diff_l, int d0, int d1) {
	hw_uint<32>  diff_l_diff_l_update_0_write0_res = diff_l_update_0_write.extract<0, 31>();
	diff_l_diff_l_update_0_write0_write(diff_l_diff_l_update_0_write0_res, diff_l, d0, d1);
}

// diff_sums_update_0_read
//	diff_sums_rd0
inline hw_uint<32> diff_l_diff_sums_update_0_read_bundle_read(diff_l_cache& diff_l, int d0, int d1) {
  // # of ports in bundle: 1
    // diff_sums_rd0

	hw_uint<32> result;
	hw_uint<32>  diff_sums_rd0_res = diff_sums_rd0_select(diff_l, d0, d1);
	set_at<0, 32>(result, diff_sums_rd0_res);
	return result;
}

#include "hw_classes.h"

struct diff_r_diff_r_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 29], [0, 29]}
	// Capacity: 1
	// # of read delays: 1
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
  diff_r_diff_r_update_0_write0_merged_banks_1_cache diff_r_diff_r_update_0_write0_merged_banks_1;
};



inline void diff_r_diff_r_update_0_write0_write(hw_uint<32> & diff_r_diff_r_update_0_write0, diff_r_cache& diff_r, int d0, int d1) {
  diff_r.diff_r_diff_r_update_0_write0_merged_banks_1.push(diff_r_diff_r_update_0_write0);
}

inline hw_uint<32>  diff_sums_rd0_select(diff_r_cache& diff_r, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_sums_rd0 read pattern: { diff_sums_update_0[d0, d1] -> diff_r[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { diff_sums_update_0[d0, d1] -> [1 + d1, 1 + d0, 9] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { diff_r_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // DD fold: {  }
  auto value_diff_r_diff_r_update_0_write0 = diff_r.diff_r_diff_r_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_diff_r_diff_r_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// diff_r_update_0_write
//	diff_r_diff_r_update_0_write0
inline void diff_r_diff_r_update_0_write_bundle_write(hw_uint<32>& diff_r_update_0_write, diff_r_cache& diff_r, int d0, int d1) {
	hw_uint<32>  diff_r_diff_r_update_0_write0_res = diff_r_update_0_write.extract<0, 31>();
	diff_r_diff_r_update_0_write0_write(diff_r_diff_r_update_0_write0_res, diff_r, d0, d1);
}

// diff_sums_update_0_read
//	diff_sums_rd0
inline hw_uint<32> diff_r_diff_sums_update_0_read_bundle_read(diff_r_cache& diff_r, int d0, int d1) {
  // # of ports in bundle: 1
    // diff_sums_rd0

	hw_uint<32> result;
	hw_uint<32>  diff_sums_rd0_res = diff_sums_rd0_select(diff_r, d0, d1);
	set_at<0, 32>(result, diff_sums_rd0_res);
	return result;
}

#include "hw_classes.h"

struct diff_sums_diff_sums_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 29], [0, 29]}
	// Capacity: 1
	// # of read delays: 1
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

struct diff_sums_cache {
  diff_sums_diff_sums_update_0_write0_merged_banks_1_cache diff_sums_diff_sums_update_0_write0_merged_banks_1;
};



inline void diff_sums_diff_sums_update_0_write0_write(hw_uint<32> & diff_sums_diff_sums_update_0_write0, diff_sums_cache& diff_sums, int d0, int d1) {
  diff_sums.diff_sums_diff_sums_update_0_write0_merged_banks_1.push(diff_sums_diff_sums_update_0_write0);
}

inline hw_uint<32>  g_rd0_select(diff_sums_cache& diff_sums, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_rd0 read pattern: { g_update_0[d0, d1] -> diff_sums[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { g_update_0[d0, d1] -> [1 + d1, 1 + d0, 11] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { diff_sums_update_0[d0, d1] -> [1 + d1, 1 + d0, 9] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // DD fold: {  }
  auto value_diff_sums_diff_sums_update_0_write0 = diff_sums.diff_sums_diff_sums_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_diff_sums_diff_sums_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// diff_sums_update_0_write
//	diff_sums_diff_sums_update_0_write0
inline void diff_sums_diff_sums_update_0_write_bundle_write(hw_uint<32>& diff_sums_update_0_write, diff_sums_cache& diff_sums, int d0, int d1) {
	hw_uint<32>  diff_sums_diff_sums_update_0_write0_res = diff_sums_update_0_write.extract<0, 31>();
	diff_sums_diff_sums_update_0_write0_write(diff_sums_diff_sums_update_0_write0_res, diff_sums, d0, d1);
}

// g_update_0_read
//	g_rd0
inline hw_uint<32> diff_sums_g_update_0_read_bundle_read(diff_sums_cache& diff_sums, int d0, int d1) {
  // # of ports in bundle: 1
    // g_rd0

	hw_uint<32> result;
	hw_uint<32>  g_rd0_res = g_rd0_select(diff_sums, d0, d1);
	set_at<0, 32>(result, g_rd0_res);
	return result;
}

#include "hw_classes.h"

struct diff_u_diff_u_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 29], [0, 29]}
	// Capacity: 1
	// # of read delays: 1
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

struct diff_u_cache {
  diff_u_diff_u_update_0_write0_merged_banks_1_cache diff_u_diff_u_update_0_write0_merged_banks_1;
};



inline void diff_u_diff_u_update_0_write0_write(hw_uint<32> & diff_u_diff_u_update_0_write0, diff_u_cache& diff_u, int d0, int d1) {
  diff_u.diff_u_diff_u_update_0_write0_merged_banks_1.push(diff_u_diff_u_update_0_write0);
}

inline hw_uint<32>  diff_sums_rd0_select(diff_u_cache& diff_u, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_sums_rd0 read pattern: { diff_sums_update_0[d0, d1] -> diff_u[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { diff_sums_update_0[d0, d1] -> [1 + d1, 1 + d0, 9] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { diff_u_update_0[d0, d1] -> [1 + d1, 1 + d0, 8] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // DD fold: {  }
  auto value_diff_u_diff_u_update_0_write0 = diff_u.diff_u_diff_u_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_diff_u_diff_u_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// diff_sums_update_0_read
//	diff_sums_rd0
inline hw_uint<32> diff_u_diff_sums_update_0_read_bundle_read(diff_u_cache& diff_u, int d0, int d1) {
  // # of ports in bundle: 1
    // diff_sums_rd0

	hw_uint<32> result;
	hw_uint<32>  diff_sums_rd0_res = diff_sums_rd0_select(diff_u, d0, d1);
	set_at<0, 32>(result, diff_sums_rd0_res);
	return result;
}

// diff_u_update_0_write
//	diff_u_diff_u_update_0_write0
inline void diff_u_diff_u_update_0_write_bundle_write(hw_uint<32>& diff_u_update_0_write, diff_u_cache& diff_u, int d0, int d1) {
	hw_uint<32>  diff_u_diff_u_update_0_write0_res = diff_u_update_0_write.extract<0, 31>();
	diff_u_diff_u_update_0_write0_write(diff_u_diff_u_update_0_write0_res, diff_u, d0, d1);
}

#include "hw_classes.h"

struct f_f_update_0_write0_merged_banks_7_cache {
	// RAM Box: {[-1, 30], [-1, 30]}
	// Capacity: 66
	// # of read delays: 6
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 30> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 30> f9;
	hw_uint<32>  f10;


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
		return f6;
	}

	inline hw_uint<32>  peek_34() {
		return f8;
	}

	inline hw_uint<32>  peek_64() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_65() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 30
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 30 reading from capacity: 1
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

struct f_cache {
  f_f_update_0_write0_merged_banks_7_cache f_f_update_0_write0_merged_banks_7;
};



inline void f_f_update_0_write0_write(hw_uint<32> & f_f_update_0_write0, f_cache& f, int d0, int d1) {
  f.f_f_update_0_write0_merged_banks_7.push(f_f_update_0_write0);
}

inline hw_uint<32>  g_rd0_select(f_cache& f, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_rd0 read pattern: { g_update_0[d0, d1] -> f[-1 + d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { g_update_0[d0, d1] -> [1 + d1, 1 + d0, 11] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { f_update_0[d0, d1] -> [d1, d0, 3] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // DD fold: { g_update_0[d0, d1] -> 34 : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_f_f_update_0_write0 = f.f_f_update_0_write0_merged_banks_7.peek_34();
  return value_f_f_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  g_rd1_select(f_cache& f, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_rd1 read pattern: { g_update_0[d0, d1] -> f[d0, -1 + d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { g_update_0[d0, d1] -> [1 + d1, 1 + d0, 11] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { f_update_0[d0, d1] -> [d1, d0, 3] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // DD fold: { g_update_0[d0, d1] -> 65 : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_f_f_update_0_write0 = f.f_f_update_0_write0_merged_banks_7.peek_65();
  return value_f_f_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  g_rd2_select(f_cache& f, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_rd2 read pattern: { g_update_0[d0, d1] -> f[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { g_update_0[d0, d1] -> [1 + d1, 1 + d0, 11] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { f_update_0[d0, d1] -> [d1, d0, 3] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // DD fold: { g_update_0[d0, d1] -> 33 : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_f_f_update_0_write0 = f.f_f_update_0_write0_merged_banks_7.peek_33();
  return value_f_f_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  g_rd3_select(f_cache& f, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_rd3 read pattern: { g_update_0[d0, d1] -> f[d0, 1 + d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { g_update_0[d0, d1] -> [1 + d1, 1 + d0, 11] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { f_update_0[d0, d1] -> [d1, d0, 3] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // DD fold: { g_update_0[d0, d1] -> 1 : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_f_f_update_0_write0 = f.f_f_update_0_write0_merged_banks_7.peek_1();
  return value_f_f_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  g_rd4_select(f_cache& f, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_rd4 read pattern: { g_update_0[d0, d1] -> f[1 + d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { g_update_0[d0, d1] -> [1 + d1, 1 + d0, 11] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { f_update_0[d0, d1] -> [d1, d0, 3] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // DD fold: { g_update_0[d0, d1] -> 32 : 0 <= d0 <= 28 and 0 <= d1 <= 29; g_update_0[d0, d1] -> (3 + d0) : d0 = 29 and 0 <= d1 <= 29 }
  auto value_f_f_update_0_write0 = f.f_f_update_0_write0_merged_banks_7.peek_32();
  return value_f_f_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  r0_rd0_select(f_cache& f, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // r0_rd0 read pattern: { r0_update_0[d0, d1] -> f[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { r0_update_0[d0, d1] -> [1 + d1, 1 + d0, 7] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { f_update_0[d0, d1] -> [d1, d0, 3] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // DD fold: { r0_update_0[d0, d1] -> 33 : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_f_f_update_0_write0 = f.f_f_update_0_write0_merged_banks_7.peek_33();
  return value_f_f_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  two_input_denoise_pipeline_rd0_select(f_cache& f, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // two_input_denoise_pipeline_rd0 read pattern: { two_input_denoise_pipeline_update_0[d0, d1] -> f[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { two_input_denoise_pipeline_update_0[d0, d1] -> [1 + d1, 1 + d0, 12] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { f_update_0[d0, d1] -> [d1, d0, 3] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // DD fold: { two_input_denoise_pipeline_update_0[d0, d1] -> 33 : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_f_f_update_0_write0 = f.f_f_update_0_write0_merged_banks_7.peek_33();
  return value_f_f_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 4
// f_update_0_write
//	f_f_update_0_write0
inline void f_f_update_0_write_bundle_write(hw_uint<32>& f_update_0_write, f_cache& f, int d0, int d1) {
	hw_uint<32>  f_f_update_0_write0_res = f_update_0_write.extract<0, 31>();
	f_f_update_0_write0_write(f_f_update_0_write0_res, f, d0, d1);
}

// g_update_0_read
//	g_rd0
//	g_rd1
//	g_rd2
//	g_rd3
//	g_rd4
inline hw_uint<160> f_g_update_0_read_bundle_read(f_cache& f, int d0, int d1) {
  // # of ports in bundle: 5
    // g_rd0
    // g_rd1
    // g_rd2
    // g_rd3
    // g_rd4

	hw_uint<160> result;
	hw_uint<32>  g_rd0_res = g_rd0_select(f, d0, d1);
	set_at<0, 160>(result, g_rd0_res);
	hw_uint<32>  g_rd1_res = g_rd1_select(f, d0, d1);
	set_at<32, 160>(result, g_rd1_res);
	hw_uint<32>  g_rd2_res = g_rd2_select(f, d0, d1);
	set_at<64, 160>(result, g_rd2_res);
	hw_uint<32>  g_rd3_res = g_rd3_select(f, d0, d1);
	set_at<96, 160>(result, g_rd3_res);
	hw_uint<32>  g_rd4_res = g_rd4_select(f, d0, d1);
	set_at<128, 160>(result, g_rd4_res);
	return result;
}

// r0_update_0_read
//	r0_rd0
inline hw_uint<32> f_r0_update_0_read_bundle_read(f_cache& f, int d0, int d1) {
  // # of ports in bundle: 1
    // r0_rd0

	hw_uint<32> result;
	hw_uint<32>  r0_rd0_res = r0_rd0_select(f, d0, d1);
	set_at<0, 32>(result, r0_rd0_res);
	return result;
}

// two_input_denoise_pipeline_update_0_read
//	two_input_denoise_pipeline_rd0
inline hw_uint<32> f_two_input_denoise_pipeline_update_0_read_bundle_read(f_cache& f, int d0, int d1) {
  // # of ports in bundle: 1
    // two_input_denoise_pipeline_rd0

	hw_uint<32> result;
	hw_uint<32>  two_input_denoise_pipeline_rd0_res = two_input_denoise_pipeline_rd0_select(f, d0, d1);
	set_at<0, 32>(result, two_input_denoise_pipeline_rd0_res);
	return result;
}

#include "hw_classes.h"

struct g_g_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 29], [0, 29]}
	// Capacity: 1
	// # of read delays: 1
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

struct g_cache {
  g_g_update_0_write0_merged_banks_1_cache g_g_update_0_write0_merged_banks_1;
};



inline void g_g_update_0_write0_write(hw_uint<32> & g_g_update_0_write0, g_cache& g, int d0, int d1) {
  g.g_g_update_0_write0_merged_banks_1.push(g_g_update_0_write0);
}

inline hw_uint<32>  two_input_denoise_pipeline_rd0_select(g_cache& g, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // two_input_denoise_pipeline_rd0 read pattern: { two_input_denoise_pipeline_update_0[d0, d1] -> g[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { two_input_denoise_pipeline_update_0[d0, d1] -> [1 + d1, 1 + d0, 12] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { g_update_0[d0, d1] -> [1 + d1, 1 + d0, 11] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // DD fold: {  }
  auto value_g_g_update_0_write0 = g.g_g_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_g_g_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// g_update_0_write
//	g_g_update_0_write0
inline void g_g_update_0_write_bundle_write(hw_uint<32>& g_update_0_write, g_cache& g, int d0, int d1) {
	hw_uint<32>  g_g_update_0_write0_res = g_update_0_write.extract<0, 31>();
	g_g_update_0_write0_write(g_g_update_0_write0_res, g, d0, d1);
}

// two_input_denoise_pipeline_update_0_read
//	two_input_denoise_pipeline_rd0
inline hw_uint<32> g_two_input_denoise_pipeline_update_0_read_bundle_read(g_cache& g, int d0, int d1) {
  // # of ports in bundle: 1
    // two_input_denoise_pipeline_rd0

	hw_uint<32> result;
	hw_uint<32>  two_input_denoise_pipeline_rd0_res = two_input_denoise_pipeline_rd0_select(g, d0, d1);
	set_at<0, 32>(result, two_input_denoise_pipeline_rd0_res);
	return result;
}

#include "hw_classes.h"

struct r0_r0_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 29], [0, 29]}
	// Capacity: 1
	// # of read delays: 1
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
  r0_r0_update_0_write0_merged_banks_1_cache r0_r0_update_0_write0_merged_banks_1;
};



inline void r0_r0_update_0_write0_write(hw_uint<32> & r0_r0_update_0_write0, r0_cache& r0, int d0, int d1) {
  r0.r0_r0_update_0_write0_merged_banks_1.push(r0_r0_update_0_write0);
}

inline hw_uint<32>  r1_rd0_select(r0_cache& r0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // r1_rd0 read pattern: { r1_update_0[d0, d1] -> r0[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { r1_update_0[d0, d1] -> [1 + d1, 1 + d0, 10] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { r0_update_0[d0, d1] -> [1 + d1, 1 + d0, 7] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // DD fold: {  }
  auto value_r0_r0_update_0_write0 = r0.r0_r0_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_r0_r0_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// r0_update_0_write
//	r0_r0_update_0_write0
inline void r0_r0_update_0_write_bundle_write(hw_uint<32>& r0_update_0_write, r0_cache& r0, int d0, int d1) {
	hw_uint<32>  r0_r0_update_0_write0_res = r0_update_0_write.extract<0, 31>();
	r0_r0_update_0_write0_write(r0_r0_update_0_write0_res, r0, d0, d1);
}

// r1_update_0_read
//	r1_rd0
inline hw_uint<32> r0_r1_update_0_read_bundle_read(r0_cache& r0, int d0, int d1) {
  // # of ports in bundle: 1
    // r1_rd0

	hw_uint<32> result;
	hw_uint<32>  r1_rd0_res = r1_rd0_select(r0, d0, d1);
	set_at<0, 32>(result, r1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct r1_r1_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 29], [0, 29]}
	// Capacity: 1
	// # of read delays: 1
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
  r1_r1_update_0_write0_merged_banks_1_cache r1_r1_update_0_write0_merged_banks_1;
};



inline void r1_r1_update_0_write0_write(hw_uint<32> & r1_r1_update_0_write0, r1_cache& r1, int d0, int d1) {
  r1.r1_r1_update_0_write0_merged_banks_1.push(r1_r1_update_0_write0);
}

inline hw_uint<32>  two_input_denoise_pipeline_rd0_select(r1_cache& r1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // two_input_denoise_pipeline_rd0 read pattern: { two_input_denoise_pipeline_update_0[d0, d1] -> r1[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { two_input_denoise_pipeline_update_0[d0, d1] -> [1 + d1, 1 + d0, 12] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { r1_update_0[d0, d1] -> [1 + d1, 1 + d0, 10] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // DD fold: {  }
  auto value_r1_r1_update_0_write0 = r1.r1_r1_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_r1_r1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// r1_update_0_write
//	r1_r1_update_0_write0
inline void r1_r1_update_0_write_bundle_write(hw_uint<32>& r1_update_0_write, r1_cache& r1, int d0, int d1) {
	hw_uint<32>  r1_r1_update_0_write0_res = r1_update_0_write.extract<0, 31>();
	r1_r1_update_0_write0_write(r1_r1_update_0_write0_res, r1, d0, d1);
}

// two_input_denoise_pipeline_update_0_read
//	two_input_denoise_pipeline_rd0
inline hw_uint<32> r1_two_input_denoise_pipeline_update_0_read_bundle_read(r1_cache& r1, int d0, int d1) {
  // # of ports in bundle: 1
    // two_input_denoise_pipeline_rd0

	hw_uint<32> result;
	hw_uint<32>  two_input_denoise_pipeline_rd0_res = two_input_denoise_pipeline_rd0_select(r1, d0, d1);
	set_at<0, 32>(result, two_input_denoise_pipeline_rd0_res);
	return result;
}

#include "hw_classes.h"

struct u_u_update_0_write0_merged_banks_10_cache {
	// RAM Box: {[-1, 30], [-1, 30]}
	// Capacity: 66
	// # of read delays: 6
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 30> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 30> f9;
	hw_uint<32>  f10;


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
		return f6;
	}

	inline hw_uint<32>  peek_34() {
		return f8;
	}

	inline hw_uint<32>  peek_64() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_65() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 30
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 30 reading from capacity: 1
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

struct u_cache {
  u_u_update_0_write0_merged_banks_10_cache u_u_update_0_write0_merged_banks_10;
};



inline void u_u_update_0_write0_write(hw_uint<32> & u_u_update_0_write0, u_cache& u, int d0, int d1) {
  u.u_u_update_0_write0_merged_banks_10.push(u_u_update_0_write0);
}

inline hw_uint<32>  diff_d_rd0_select(u_cache& u, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_d_rd0 read pattern: { diff_d_update_0[d0, d1] -> u[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { diff_d_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { u_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // DD fold: { diff_d_update_0[d0, d1] -> 33 : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_10.peek_33();
  return value_u_u_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  diff_d_rd1_select(u_cache& u, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_d_rd1 read pattern: { diff_d_update_0[d0, d1] -> u[d0, 1 + d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { diff_d_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { u_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // DD fold: { diff_d_update_0[d0, d1] -> 1 : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_10.peek_1();
  return value_u_u_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  diff_l_rd0_select(u_cache& u, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_l_rd0 read pattern: { diff_l_update_0[d0, d1] -> u[-1 + d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { diff_l_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { u_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // DD fold: { diff_l_update_0[d0, d1] -> 34 : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_10.peek_34();
  return value_u_u_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  diff_l_rd1_select(u_cache& u, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_l_rd1 read pattern: { diff_l_update_0[d0, d1] -> u[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { diff_l_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { u_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // DD fold: { diff_l_update_0[d0, d1] -> 33 : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_10.peek_33();
  return value_u_u_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  diff_r_rd0_select(u_cache& u, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_r_rd0 read pattern: { diff_r_update_0[d0, d1] -> u[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { diff_r_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { u_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // DD fold: { diff_r_update_0[d0, d1] -> 33 : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_10.peek_33();
  return value_u_u_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  diff_r_rd1_select(u_cache& u, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_r_rd1 read pattern: { diff_r_update_0[d0, d1] -> u[1 + d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { diff_r_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { u_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // DD fold: { diff_r_update_0[d0, d1] -> 32 : 0 <= d0 <= 28 and 0 <= d1 <= 29; diff_r_update_0[d0, d1] -> (3 + d0) : d0 = 29 and 0 <= d1 <= 29 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_10.peek_32();
  return value_u_u_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  diff_u_rd0_select(u_cache& u, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_u_rd0 read pattern: { diff_u_update_0[d0, d1] -> u[d0, -1 + d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { diff_u_update_0[d0, d1] -> [1 + d1, 1 + d0, 8] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { u_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // DD fold: { diff_u_update_0[d0, d1] -> 65 : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_10.peek_65();
  return value_u_u_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  diff_u_rd1_select(u_cache& u, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_u_rd1 read pattern: { diff_u_update_0[d0, d1] -> u[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { diff_u_update_0[d0, d1] -> [1 + d1, 1 + d0, 8] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { u_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // DD fold: { diff_u_update_0[d0, d1] -> 33 : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_10.peek_33();
  return value_u_u_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  r0_rd0_select(u_cache& u, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // r0_rd0 read pattern: { r0_update_0[d0, d1] -> u[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { r0_update_0[d0, d1] -> [1 + d1, 1 + d0, 7] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { u_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // DD fold: { r0_update_0[d0, d1] -> 33 : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_10.peek_33();
  return value_u_u_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  two_input_denoise_pipeline_rd0_select(u_cache& u, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // two_input_denoise_pipeline_rd0 read pattern: { two_input_denoise_pipeline_update_0[d0, d1] -> u[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { two_input_denoise_pipeline_update_0[d0, d1] -> [1 + d1, 1 + d0, 12] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { u_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // DD fold: { two_input_denoise_pipeline_update_0[d0, d1] -> 33 : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_10.peek_33();
  return value_u_u_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 7
// diff_d_update_0_read
//	diff_d_rd0
//	diff_d_rd1
inline hw_uint<64> u_diff_d_update_0_read_bundle_read(u_cache& u, int d0, int d1) {
  // # of ports in bundle: 2
    // diff_d_rd0
    // diff_d_rd1

	hw_uint<64> result;
	hw_uint<32>  diff_d_rd0_res = diff_d_rd0_select(u, d0, d1);
	set_at<0, 64>(result, diff_d_rd0_res);
	hw_uint<32>  diff_d_rd1_res = diff_d_rd1_select(u, d0, d1);
	set_at<32, 64>(result, diff_d_rd1_res);
	return result;
}

// diff_l_update_0_read
//	diff_l_rd0
//	diff_l_rd1
inline hw_uint<64> u_diff_l_update_0_read_bundle_read(u_cache& u, int d0, int d1) {
  // # of ports in bundle: 2
    // diff_l_rd0
    // diff_l_rd1

	hw_uint<64> result;
	hw_uint<32>  diff_l_rd0_res = diff_l_rd0_select(u, d0, d1);
	set_at<0, 64>(result, diff_l_rd0_res);
	hw_uint<32>  diff_l_rd1_res = diff_l_rd1_select(u, d0, d1);
	set_at<32, 64>(result, diff_l_rd1_res);
	return result;
}

// diff_r_update_0_read
//	diff_r_rd0
//	diff_r_rd1
inline hw_uint<64> u_diff_r_update_0_read_bundle_read(u_cache& u, int d0, int d1) {
  // # of ports in bundle: 2
    // diff_r_rd0
    // diff_r_rd1

	hw_uint<64> result;
	hw_uint<32>  diff_r_rd0_res = diff_r_rd0_select(u, d0, d1);
	set_at<0, 64>(result, diff_r_rd0_res);
	hw_uint<32>  diff_r_rd1_res = diff_r_rd1_select(u, d0, d1);
	set_at<32, 64>(result, diff_r_rd1_res);
	return result;
}

// diff_u_update_0_read
//	diff_u_rd0
//	diff_u_rd1
inline hw_uint<64> u_diff_u_update_0_read_bundle_read(u_cache& u, int d0, int d1) {
  // # of ports in bundle: 2
    // diff_u_rd0
    // diff_u_rd1

	hw_uint<64> result;
	hw_uint<32>  diff_u_rd0_res = diff_u_rd0_select(u, d0, d1);
	set_at<0, 64>(result, diff_u_rd0_res);
	hw_uint<32>  diff_u_rd1_res = diff_u_rd1_select(u, d0, d1);
	set_at<32, 64>(result, diff_u_rd1_res);
	return result;
}

// r0_update_0_read
//	r0_rd0
inline hw_uint<32> u_r0_update_0_read_bundle_read(u_cache& u, int d0, int d1) {
  // # of ports in bundle: 1
    // r0_rd0

	hw_uint<32> result;
	hw_uint<32>  r0_rd0_res = r0_rd0_select(u, d0, d1);
	set_at<0, 32>(result, r0_rd0_res);
	return result;
}

// two_input_denoise_pipeline_update_0_read
//	two_input_denoise_pipeline_rd0
inline hw_uint<32> u_two_input_denoise_pipeline_update_0_read_bundle_read(u_cache& u, int d0, int d1) {
  // # of ports in bundle: 1
    // two_input_denoise_pipeline_rd0

	hw_uint<32> result;
	hw_uint<32>  two_input_denoise_pipeline_rd0_res = two_input_denoise_pipeline_rd0_select(u, d0, d1);
	set_at<0, 32>(result, two_input_denoise_pipeline_rd0_res);
	return result;
}

// u_update_0_write
//	u_u_update_0_write0
inline void u_u_update_0_write_bundle_write(hw_uint<32>& u_update_0_write, u_cache& u, int d0, int d1) {
	hw_uint<32>  u_u_update_0_write0_res = u_update_0_write.extract<0, 31>();
	u_u_update_0_write0_write(u_u_update_0_write0_res, u, d0, d1);
}



// Operation logic
inline void f_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */f_off_chip, f_cache& f, int d0, int d1) {
	// Consume: f_off_chip
	auto f_off_chip_0_c__0_value = f_off_chip.read();
	auto compute_result = id_unrolled_1(f_off_chip_0_c__0_value);
	// Produce: f
	f_f_update_0_write_bundle_write(compute_result, f, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "f_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void u_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */u_off_chip, u_cache& u, int d0, int d1) {
	// Consume: u_off_chip
	auto u_off_chip_0_c__0_value = u_off_chip.read();
	auto compute_result = id_unrolled_1(u_off_chip_0_c__0_value);
	// Produce: u
	u_u_update_0_write_bundle_write(compute_result, u, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "u_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void diff_r_update_0(u_cache& u, diff_r_cache& diff_r, int d0, int d1) {
	// Consume: u
	auto u_0_c__0_value = u_diff_r_update_0_read_bundle_read(u/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "diff_r_update_0_u," << d0<< "," << d1<< "," <<  u_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_r_generated_compute_unrolled_1(u_0_c__0_value);
	// Produce: diff_r
	diff_r_diff_r_update_0_write_bundle_write(compute_result, diff_r, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "diff_r_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void diff_l_update_0(u_cache& u, diff_l_cache& diff_l, int d0, int d1) {
	// Consume: u
	auto u_0_c__0_value = u_diff_l_update_0_read_bundle_read(u/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "diff_l_update_0_u," << d0<< "," << d1<< "," <<  u_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_l_generated_compute_unrolled_1(u_0_c__0_value);
	// Produce: diff_l
	diff_l_diff_l_update_0_write_bundle_write(compute_result, diff_l, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "diff_l_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void diff_d_update_0(u_cache& u, diff_d_cache& diff_d, int d0, int d1) {
	// Consume: u
	auto u_0_c__0_value = u_diff_d_update_0_read_bundle_read(u/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "diff_d_update_0_u," << d0<< "," << d1<< "," <<  u_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_d_generated_compute_unrolled_1(u_0_c__0_value);
	// Produce: diff_d
	diff_d_diff_d_update_0_write_bundle_write(compute_result, diff_d, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "diff_d_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void r0_update_0(f_cache& f, u_cache& u, r0_cache& r0, int d0, int d1) {
	// Consume: f
	auto f_0_c__0_value = f_r0_update_0_read_bundle_read(f/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "r0_update_0_f," << d0<< "," << d1<< "," <<  f_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: u
	auto u_0_c__0_value = u_r0_update_0_read_bundle_read(u/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "r0_update_0_u," << d0<< "," << d1<< "," <<  u_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = r0_generated_compute_unrolled_1(f_0_c__0_value, u_0_c__0_value);
	// Produce: r0
	r0_r0_update_0_write_bundle_write(compute_result, r0, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "r0_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void diff_u_update_0(u_cache& u, diff_u_cache& diff_u, int d0, int d1) {
	// Consume: u
	auto u_0_c__0_value = u_diff_u_update_0_read_bundle_read(u/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "diff_u_update_0_u," << d0<< "," << d1<< "," <<  u_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_u_generated_compute_unrolled_1(u_0_c__0_value);
	// Produce: diff_u
	diff_u_diff_u_update_0_write_bundle_write(compute_result, diff_u, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "diff_u_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void diff_sums_update_0(diff_d_cache& diff_d, diff_l_cache& diff_l, diff_r_cache& diff_r, diff_u_cache& diff_u, diff_sums_cache& diff_sums, int d0, int d1) {
	// Consume: diff_d
	auto diff_d_0_c__0_value = diff_d_diff_sums_update_0_read_bundle_read(diff_d/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "diff_sums_update_0_diff_d," << d0<< "," << d1<< "," <<  diff_d_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: diff_l
	auto diff_l_0_c__0_value = diff_l_diff_sums_update_0_read_bundle_read(diff_l/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "diff_sums_update_0_diff_l," << d0<< "," << d1<< "," <<  diff_l_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: diff_r
	auto diff_r_0_c__0_value = diff_r_diff_sums_update_0_read_bundle_read(diff_r/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "diff_sums_update_0_diff_r," << d0<< "," << d1<< "," <<  diff_r_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: diff_u
	auto diff_u_0_c__0_value = diff_u_diff_sums_update_0_read_bundle_read(diff_u/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "diff_sums_update_0_diff_u," << d0<< "," << d1<< "," <<  diff_u_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_sums_generated_compute_unrolled_1(diff_d_0_c__0_value, diff_l_0_c__0_value, diff_r_0_c__0_value, diff_u_0_c__0_value);
	// Produce: diff_sums
	diff_sums_diff_sums_update_0_write_bundle_write(compute_result, diff_sums, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "diff_sums_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void r1_update_0(r0_cache& r0, r1_cache& r1, int d0, int d1) {
	// Consume: r0
	auto r0_0_c__0_value = r0_r1_update_0_read_bundle_read(r0/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "r1_update_0_r0," << d0<< "," << d1<< "," <<  r0_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = r1_generated_compute_unrolled_1(r0_0_c__0_value);
	// Produce: r1
	r1_r1_update_0_write_bundle_write(compute_result, r1, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "r1_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void g_update_0(diff_sums_cache& diff_sums, f_cache& f, g_cache& g, int d0, int d1) {
	// Consume: diff_sums
	auto diff_sums_0_c__0_value = diff_sums_g_update_0_read_bundle_read(diff_sums/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "g_update_0_diff_sums," << d0<< "," << d1<< "," <<  diff_sums_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: f
	auto f_0_c__0_value = f_g_update_0_read_bundle_read(f/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "g_update_0_f," << d0<< "," << d1<< "," <<  f_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = g_generated_compute_unrolled_1(diff_sums_0_c__0_value, f_0_c__0_value);
	// Produce: g
	g_g_update_0_write_bundle_write(compute_result, g, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "g_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void two_input_denoise_pipeline_update_0(f_cache& f, g_cache& g, r1_cache& r1, u_cache& u, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */two_input_denoise_pipeline, int d0, int d1) {
	// Consume: f
	auto f_0_c__0_value = f_two_input_denoise_pipeline_update_0_read_bundle_read(f/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "two_input_denoise_pipeline_update_0_f," << d0<< "," << d1<< "," <<  f_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: g
	auto g_0_c__0_value = g_two_input_denoise_pipeline_update_0_read_bundle_read(g/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "two_input_denoise_pipeline_update_0_g," << d0<< "," << d1<< "," <<  g_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: r1
	auto r1_0_c__0_value = r1_two_input_denoise_pipeline_update_0_read_bundle_read(r1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "two_input_denoise_pipeline_update_0_r1," << d0<< "," << d1<< "," <<  r1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: u
	auto u_0_c__0_value = u_two_input_denoise_pipeline_update_0_read_bundle_read(u/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "two_input_denoise_pipeline_update_0_u," << d0<< "," << d1<< "," <<  u_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = two_input_denoise_pipeline_generated_compute_unrolled_1(f_0_c__0_value, g_0_c__0_value, r1_0_c__0_value, u_0_c__0_value);
	// Produce: two_input_denoise_pipeline
	two_input_denoise_pipeline.write(compute_result);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "two_input_denoise_pipeline_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

// Driver function
void two_input_denoise_pipeline_opt(HWStream<hw_uint<32> >& /* get_args num ports = 1 */f_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 1 */u_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 1 */two_input_denoise_pipeline) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("two_input_denoise_pipeline_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  diff_d_cache diff_d;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  diff_l_cache diff_l;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  diff_r_cache diff_r;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  diff_sums_cache diff_sums;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  diff_u_cache diff_u;
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
	
	for (int c0 = -1; c0 <= 30; c0++) {
	  for (int c1 = -1; c1 <= 30; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-1 <= c1 && c1 <= 30) && ((c1 - 0) % 1 == 0) && (-1 <= c0 && c0 <= 30) && ((c0 - 0) % 1 == 0)) {
	u_update_0(u_off_chip, u, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((-1 <= c1 && c1 <= 30) && ((c1 - 0) % 1 == 0) && (-1 <= c0 && c0 <= 30) && ((c0 - 0) % 1 == 0)) {
	f_update_0(f_off_chip, f, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 30) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 30) && ((c0 - 1) % 1 == 0)) {
	diff_r_update_0(u, diff_r, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 30) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 30) && ((c0 - 1) % 1 == 0)) {
	diff_l_update_0(u, diff_l, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 30) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 30) && ((c0 - 1) % 1 == 0)) {
	diff_d_update_0(u, diff_d, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 30) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 30) && ((c0 - 1) % 1 == 0)) {
	r0_update_0(f, u, r0, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 30) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 30) && ((c0 - 1) % 1 == 0)) {
	diff_u_update_0(u, diff_u, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 30) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 30) && ((c0 - 1) % 1 == 0)) {
	diff_sums_update_0(diff_d, diff_l, diff_r, diff_u, diff_sums, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 30) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 30) && ((c0 - 1) % 1 == 0)) {
	r1_update_0(r0, r1, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 30) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 30) && ((c0 - 1) % 1 == 0)) {
	g_update_0(diff_sums, f, g, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 30) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 30) && ((c0 - 1) % 1 == 0)) {
	two_input_denoise_pipeline_update_0(f, g, r1, u, two_input_denoise_pipeline, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

#ifdef __VIVADO_SYNTH__
#include "two_input_denoise_pipeline_opt.h"

#define INPUT_SIZE 1024
#define OUTPUT_SIZE 900
extern "C" {

static void read_input(hw_uint<32>* input, HWStream<hw_uint<32> >& v, const int size) {
  for (int i = 0; i < INPUT_SIZE; i++) {
    #pragma HLS pipeline II=1
    v.write(input[i]);
  }
}

static void write_output(hw_uint<32>* output, HWStream<hw_uint<32> >& v, const int size) {
  for (int i = 0; i < OUTPUT_SIZE; i++) {
    #pragma HLS pipeline II=1
    output[i] = v.read();
  }
}

void two_input_denoise_pipeline_opt_accel(hw_uint<32>* f_update_0_read, hw_uint<32>* u_update_0_read, hw_uint<32>* two_input_denoise_pipeline_update_0_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = f_update_0_read offset = slave bundle = gmem
#pragma HLS INTERFACE m_axi port = u_update_0_read offset = slave bundle = gmem
#pragma HLS INTERFACE m_axi port = two_input_denoise_pipeline_update_0_write offset = slave bundle = gmem

#pragma HLS INTERFACE s_axilite port = f_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = u_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = two_input_denoise_pipeline_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<32> > f_update_0_read_channel;
  static HWStream<hw_uint<32> > u_update_0_read_channel;
  static HWStream<hw_uint<32> > two_input_denoise_pipeline_update_0_write_channel;

  read_input(f_update_0_read, f_update_0_read_channel, size);
  read_input(u_update_0_read, u_update_0_read_channel, size);

  two_input_denoise_pipeline_opt(f_update_0_read_channel, u_update_0_read_channel, two_input_denoise_pipeline_update_0_write_channel);

  write_output(two_input_denoise_pipeline_update_0_write, two_input_denoise_pipeline_update_0_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

