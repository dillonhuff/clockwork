#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: sum_diffs_opt_compute_units.h
#include "sum_diffs_opt_compute_units.h"

#include "hw_classes.h"

struct diff_d_diff_d_update_0_write0_to_magval_rd0_cache {
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

struct diff_d_cache {
  // # of banks: 1
  diff_d_diff_d_update_0_write0_to_magval_rd0_cache diff_d_diff_d_update_0_write0_to_magval_rd0;
};



inline void diff_d_diff_d_update_0_write0_write(hw_uint<32> & diff_d_diff_d_update_0_write0, diff_d_cache& diff_d, int d0, int d1, int dynamic_address) {
  diff_d.diff_d_diff_d_update_0_write0_to_magval_rd0.push(diff_d_diff_d_update_0_write0);
}

inline hw_uint<32>  magval_rd0_select(diff_d_cache& diff_d, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // magval_rd0 read pattern: { magval_update_0[d0, d1] -> diff_d[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { magval_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { diff_d_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_diff_d_diff_d_update_0_write0 = diff_d.diff_d_diff_d_update_0_write0_to_magval_rd0.peek(/* one reader or all rams */ 0);
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

// magval_update_0_read
//	magval_rd0
inline hw_uint<32> diff_d_magval_update_0_read_bundle_read(diff_d_cache& diff_d, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // magval_rd0

	hw_uint<32> result;
	hw_uint<32>  magval_rd0_res = magval_rd0_select(diff_d, d0, d1, dynamic_address);
	set_at<0, 32>(result, magval_rd0_res);
	return result;
}

#include "hw_classes.h"

struct diff_l_diff_l_update_0_write0_to_magval_rd0_cache {
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

struct diff_l_cache {
  // # of banks: 1
  diff_l_diff_l_update_0_write0_to_magval_rd0_cache diff_l_diff_l_update_0_write0_to_magval_rd0;
};



inline void diff_l_diff_l_update_0_write0_write(hw_uint<32> & diff_l_diff_l_update_0_write0, diff_l_cache& diff_l, int d0, int d1, int dynamic_address) {
  diff_l.diff_l_diff_l_update_0_write0_to_magval_rd0.push(diff_l_diff_l_update_0_write0);
}

inline hw_uint<32>  magval_rd0_select(diff_l_cache& diff_l, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // magval_rd0 read pattern: { magval_update_0[d0, d1] -> diff_l[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { magval_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { diff_l_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_diff_l_diff_l_update_0_write0 = diff_l.diff_l_diff_l_update_0_write0_to_magval_rd0.peek(/* one reader or all rams */ 0);
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

// magval_update_0_read
//	magval_rd0
inline hw_uint<32> diff_l_magval_update_0_read_bundle_read(diff_l_cache& diff_l, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // magval_rd0

	hw_uint<32> result;
	hw_uint<32>  magval_rd0_res = magval_rd0_select(diff_l, d0, d1, dynamic_address);
	set_at<0, 32>(result, magval_rd0_res);
	return result;
}

#include "hw_classes.h"

struct diff_qwe_diff_qwe_update_0_write0_to_magval_rd0_cache {
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

struct diff_qwe_cache {
  // # of banks: 1
  diff_qwe_diff_qwe_update_0_write0_to_magval_rd0_cache diff_qwe_diff_qwe_update_0_write0_to_magval_rd0;
};



inline void diff_qwe_diff_qwe_update_0_write0_write(hw_uint<32> & diff_qwe_diff_qwe_update_0_write0, diff_qwe_cache& diff_qwe, int d0, int d1, int dynamic_address) {
  diff_qwe.diff_qwe_diff_qwe_update_0_write0_to_magval_rd0.push(diff_qwe_diff_qwe_update_0_write0);
}

inline hw_uint<32>  magval_rd0_select(diff_qwe_cache& diff_qwe, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // magval_rd0 read pattern: { magval_update_0[d0, d1] -> diff_qwe[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { magval_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { diff_qwe_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_diff_qwe_diff_qwe_update_0_write0 = diff_qwe.diff_qwe_diff_qwe_update_0_write0_to_magval_rd0.peek(/* one reader or all rams */ 0);
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

// magval_update_0_read
//	magval_rd0
inline hw_uint<32> diff_qwe_magval_update_0_read_bundle_read(diff_qwe_cache& diff_qwe, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // magval_rd0

	hw_uint<32> result;
	hw_uint<32>  magval_rd0_res = magval_rd0_select(diff_qwe, d0, d1, dynamic_address);
	set_at<0, 32>(result, magval_rd0_res);
	return result;
}

#include "hw_classes.h"

struct diff_r_diff_r_update_0_write0_to_magval_rd0_cache {
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

struct diff_r_cache {
  // # of banks: 1
  diff_r_diff_r_update_0_write0_to_magval_rd0_cache diff_r_diff_r_update_0_write0_to_magval_rd0;
};



inline void diff_r_diff_r_update_0_write0_write(hw_uint<32> & diff_r_diff_r_update_0_write0, diff_r_cache& diff_r, int d0, int d1, int dynamic_address) {
  diff_r.diff_r_diff_r_update_0_write0_to_magval_rd0.push(diff_r_diff_r_update_0_write0);
}

inline hw_uint<32>  magval_rd0_select(diff_r_cache& diff_r, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // magval_rd0 read pattern: { magval_update_0[d0, d1] -> diff_r[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { magval_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { diff_r_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_diff_r_diff_r_update_0_write0 = diff_r.diff_r_diff_r_update_0_write0_to_magval_rd0.peek(/* one reader or all rams */ 0);
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

// magval_update_0_read
//	magval_rd0
inline hw_uint<32> diff_r_magval_update_0_read_bundle_read(diff_r_cache& diff_r, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // magval_rd0

	hw_uint<32> result;
	hw_uint<32>  magval_rd0_res = magval_rd0_select(diff_r, d0, d1, dynamic_address);
	set_at<0, 32>(result, magval_rd0_res);
	return result;
}

#include "hw_classes.h"

struct f_f_update_0_write0_to_sum_diffs_rd0_cache {
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

struct f_cache {
  // # of banks: 1
  f_f_update_0_write0_to_sum_diffs_rd0_cache f_f_update_0_write0_to_sum_diffs_rd0;
};



inline void f_f_update_0_write0_write(hw_uint<32> & f_f_update_0_write0, f_cache& f, int d0, int d1, int dynamic_address) {
  f.f_f_update_0_write0_to_sum_diffs_rd0.push(f_f_update_0_write0);
}

inline hw_uint<32>  sum_diffs_rd0_select(f_cache& f, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sum_diffs_rd0 read pattern: { sum_diffs_update_0[d0, d1] -> f[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { sum_diffs_update_0[d0, d1] -> [1 + d1, 1 + d0, 9] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { f_update_0[d0, d1] -> [1 + d1, 1 + d0, 8] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_f_f_update_0_write0 = f.f_f_update_0_write0_to_sum_diffs_rd0.peek(/* one reader or all rams */ 0);
  return value_f_f_update_0_write0;
  return 0;
}

// # of bundles = 2
// f_update_0_write
//	f_f_update_0_write0
inline void f_f_update_0_write_bundle_write(hw_uint<32>& f_update_0_write, f_cache& f, int d0, int d1, int dynamic_address) {
	hw_uint<32>  f_f_update_0_write0_res = f_update_0_write.extract<0, 31>();
	f_f_update_0_write0_write(f_f_update_0_write0_res, f, d0, d1, dynamic_address);
}

// sum_diffs_update_0_read
//	sum_diffs_rd0
inline hw_uint<32> f_sum_diffs_update_0_read_bundle_read(f_cache& f, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // sum_diffs_rd0

	hw_uint<32> result;
	hw_uint<32>  sum_diffs_rd0_res = sum_diffs_rd0_select(f, d0, d1, dynamic_address);
	set_at<0, 32>(result, sum_diffs_rd0_res);
	return result;
}

#include "hw_classes.h"

struct magval_magval_update_0_write0_to_sum_diffs_rd0_cache {
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

struct magval_cache {
  // # of banks: 1
  magval_magval_update_0_write0_to_sum_diffs_rd0_cache magval_magval_update_0_write0_to_sum_diffs_rd0;
};



inline void magval_magval_update_0_write0_write(hw_uint<32> & magval_magval_update_0_write0, magval_cache& magval, int d0, int d1, int dynamic_address) {
  magval.magval_magval_update_0_write0_to_sum_diffs_rd0.push(magval_magval_update_0_write0);
}

inline hw_uint<32>  sum_diffs_rd0_select(magval_cache& magval, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sum_diffs_rd0 read pattern: { sum_diffs_update_0[d0, d1] -> magval[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { sum_diffs_update_0[d0, d1] -> [1 + d1, 1 + d0, 9] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { magval_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_magval_magval_update_0_write0 = magval.magval_magval_update_0_write0_to_sum_diffs_rd0.peek(/* one reader or all rams */ 0);
  return value_magval_magval_update_0_write0;
  return 0;
}

// # of bundles = 2
// magval_update_0_write
//	magval_magval_update_0_write0
inline void magval_magval_update_0_write_bundle_write(hw_uint<32>& magval_update_0_write, magval_cache& magval, int d0, int d1, int dynamic_address) {
	hw_uint<32>  magval_magval_update_0_write0_res = magval_update_0_write.extract<0, 31>();
	magval_magval_update_0_write0_write(magval_magval_update_0_write0_res, magval, d0, d1, dynamic_address);
}

// sum_diffs_update_0_read
//	sum_diffs_rd0
inline hw_uint<32> magval_sum_diffs_update_0_read_bundle_read(magval_cache& magval, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // sum_diffs_rd0

	hw_uint<32> result;
	hw_uint<32>  sum_diffs_rd0_res = sum_diffs_rd0_select(magval, d0, d1, dynamic_address);
	set_at<0, 32>(result, sum_diffs_rd0_res);
	return result;
}

#include "hw_classes.h"

struct u_u_update_0_write0_merged_banks_8_cache {
	// RAM Box: {[-1, 30], [0, 29]}
	// Capacity: 66
	// # of read delays: 6
  // 0, 1, 32, 33, 34, 65
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
  // # of banks: 1
  u_u_update_0_write0_merged_banks_8_cache u_u_update_0_write0_merged_banks_8;
};



inline void u_u_update_0_write0_write(hw_uint<32> & u_u_update_0_write0, u_cache& u, int d0, int d1, int dynamic_address) {
  u.u_u_update_0_write0_merged_banks_8.push(u_u_update_0_write0);
}

inline hw_uint<32>  diff_d_rd0_select(u_cache& u, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_d_rd0 read pattern: { diff_d_update_0[d0, d1] -> u[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { diff_d_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { u_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_8.peek_33();
  return value_u_u_update_0_write0;
  return 0;
}

inline hw_uint<32>  diff_d_rd1_select(u_cache& u, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_d_rd1 read pattern: { diff_d_update_0[d0, d1] -> u[d0, 1 + d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { diff_d_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { u_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_8.peek_1();
  return value_u_u_update_0_write0;
  return 0;
}

inline hw_uint<32>  diff_l_rd0_select(u_cache& u, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_l_rd0 read pattern: { diff_l_update_0[d0, d1] -> u[-1 + d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { diff_l_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { u_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_8.peek_34();
  return value_u_u_update_0_write0;
  return 0;
}

inline hw_uint<32>  diff_l_rd1_select(u_cache& u, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_l_rd1 read pattern: { diff_l_update_0[d0, d1] -> u[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { diff_l_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { u_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_8.peek_33();
  return value_u_u_update_0_write0;
  return 0;
}

inline hw_uint<32>  diff_qwe_rd0_select(u_cache& u, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_qwe_rd0 read pattern: { diff_qwe_update_0[d0, d1] -> u[d0, -1 + d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { diff_qwe_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { u_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_8.peek_65();
  return value_u_u_update_0_write0;
  return 0;
}

inline hw_uint<32>  diff_qwe_rd1_select(u_cache& u, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_qwe_rd1 read pattern: { diff_qwe_update_0[d0, d1] -> u[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { diff_qwe_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { u_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_8.peek_33();
  return value_u_u_update_0_write0;
  return 0;
}

inline hw_uint<32>  diff_r_rd0_select(u_cache& u, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_r_rd0 read pattern: { diff_r_update_0[d0, d1] -> u[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { diff_r_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { u_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_8.peek_33();
  return value_u_u_update_0_write0;
  return 0;
}

inline hw_uint<32>  diff_r_rd1_select(u_cache& u, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_r_rd1 read pattern: { diff_r_update_0[d0, d1] -> u[1 + d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { diff_r_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { u_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_8.peek_32();
  return value_u_u_update_0_write0;
  return 0;
}

// # of bundles = 5
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

// u_update_0_write
//	u_u_update_0_write0
inline void u_u_update_0_write_bundle_write(hw_uint<32>& u_update_0_write, u_cache& u, int d0, int d1, int dynamic_address) {
	hw_uint<32>  u_u_update_0_write0_res = u_update_0_write.extract<0, 31>();
	u_u_update_0_write0_write(u_u_update_0_write0_res, u, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 2080 bits


// Operation logic
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

inline void magval_update_0(diff_qwe_cache& diff_qwe, diff_d_cache& diff_d, diff_l_cache& diff_l, diff_r_cache& diff_r, magval_cache& magval, int d0, int d1) {
  // Dynamic address computation

	// Consume: diff_qwe
	auto diff_qwe_0_c__0_value = diff_qwe_magval_update_0_read_bundle_read(diff_qwe/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: diff_d
	auto diff_d_0_c__0_value = diff_d_magval_update_0_read_bundle_read(diff_d/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: diff_l
	auto diff_l_0_c__0_value = diff_l_magval_update_0_read_bundle_read(diff_l/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: diff_r
	auto diff_r_0_c__0_value = diff_r_magval_update_0_read_bundle_read(diff_r/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = fmag2d_unrolled_1(diff_qwe_0_c__0_value, diff_d_0_c__0_value, diff_l_0_c__0_value, diff_r_0_c__0_value);
	// Produce: magval
	magval_magval_update_0_write_bundle_write(/* arg names */compute_result, magval, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

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

inline void sum_diffs_update_0(magval_cache& magval, f_cache& f, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */sum_diffs, int d0, int d1) {
  // Dynamic address computation

	// Consume: magval
	auto magval_0_c__0_value = magval_sum_diffs_update_0_read_bundle_read(magval/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: f
	auto f_0_c__0_value = f_sum_diffs_update_0_read_bundle_read(f/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = fadd2_unrolled_1(magval_0_c__0_value, f_0_c__0_value);
	// Produce: sum_diffs
	sum_diffs.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void sum_diffs_opt(HWStream<hw_uint<32> >& /* get_args num ports = 1 */f_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 1 */u_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 1 */sum_diffs) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("sum_diffs_opt_debug.csv");
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
  magval_cache magval;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  u_cache u;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { diff_d_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : 0 <= d0 <= 29 and 0 <= d1 <= 29; diff_l_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 29 and 0 <= d1 <= 29; f_update_0[d0, d1] -> [1 + d1, 1 + d0, 8] : 0 <= d0 <= 29 and 0 <= d1 <= 29; diff_r_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 29 and 0 <= d1 <= 29; magval_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : 0 <= d0 <= 29 and 0 <= d1 <= 29; u_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 30 and -1 <= d1 <= 30; diff_qwe_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 29 and 0 <= d1 <= 29; sum_diffs_update_0[d0, d1] -> [1 + d1, 1 + d0, 9] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
//   { diff_d_update_0[d0, d1] -> [1 + d1, 1 + d0, 5] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
// Condition for diff_d_update_0(((-5 + i2 == 0) && (-1 + i1 >= 0) && (30 - i1 >= 0) && (-1 + i0 >= 0) && (30 - i0 >= 0)))
//   { diff_l_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
// Condition for diff_l_update_0(((-4 + i2 == 0) && (-1 + i1 >= 0) && (30 - i1 >= 0) && (-1 + i0 >= 0) && (30 - i0 >= 0)))
//   { f_update_0[d0, d1] -> [1 + d1, 1 + d0, 8] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
// Condition for f_update_0(((-8 + i2 == 0) && (-1 + i1 >= 0) && (30 - i1 >= 0) && (-1 + i0 >= 0) && (30 - i0 >= 0)))
//   { diff_r_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
// Condition for diff_r_update_0(((-2 + i2 == 0) && (-1 + i1 >= 0) && (30 - i1 >= 0) && (-1 + i0 >= 0) && (30 - i0 >= 0)))
//   { magval_update_0[d0, d1] -> [1 + d1, 1 + d0, 6] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
// Condition for magval_update_0(((-6 + i2 == 0) && (-1 + i1 >= 0) && (30 - i1 >= 0) && (-1 + i0 >= 0) && (30 - i0 >= 0)))
//   { u_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
// Condition for u_update_0(((-1 + i2 == 0) && (1 + i1 >= 0) && (30 - i1 >= 0) && (1 + i0 >= 0) && (30 - i0 >= 0)))
//   { diff_qwe_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
// Condition for diff_qwe_update_0(((-3 + i2 == 0) && (-1 + i1 >= 0) && (30 - i1 >= 0) && (-1 + i0 >= 0) && (30 - i0 >= 0)))
//   { sum_diffs_update_0[d0, d1] -> [1 + d1, 1 + d0, 9] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
// Condition for sum_diffs_update_0(((-9 + i2 == 0) && (-1 + i1 >= 0) && (30 - i1 >= 0) && (-1 + i0 >= 0) && (30 - i0 >= 0)))

  /*
  // Schedules...
    // diff_d_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*5]
    // diff_l_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*4]
    // diff_qwe_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*3]
    // diff_r_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
    // f_off_chip_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*7]
    // f_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*8]
    // magval_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*6]
    // sum_diffs_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*9]
    // u_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
    // u_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
for (int c0 = -1; c0 <= 30; c0++) {
  for (int c1 = -1; c1 <= 30; c1++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

    if ((-1 <= c1 && c1 <= 30) && ((c1 - 0) % 1 == 0) && (-1 <= c0 && c0 <= 30) && ((c0 - 0) % 1 == 0)) {
      u_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((1 <= c1 && c1 <= 30) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 30) && ((c0 - 1) % 1 == 0)) {
      diff_r_update_0((c1 - 1) / 1, (c0 - 1) / 1);
    }

    if ((1 <= c1 && c1 <= 30) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 30) && ((c0 - 1) % 1 == 0)) {
      diff_qwe_update_0((c1 - 1) / 1, (c0 - 1) / 1);
    }

    if ((1 <= c1 && c1 <= 30) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 30) && ((c0 - 1) % 1 == 0)) {
      diff_l_update_0((c1 - 1) / 1, (c0 - 1) / 1);
    }

    if ((1 <= c1 && c1 <= 30) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 30) && ((c0 - 1) % 1 == 0)) {
      diff_d_update_0((c1 - 1) / 1, (c0 - 1) / 1);
    }

    if ((1 <= c1 && c1 <= 30) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 30) && ((c0 - 1) % 1 == 0)) {
      magval_update_0((c1 - 1) / 1, (c0 - 1) / 1);
    }

    if ((1 <= c1 && c1 <= 30) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 30) && ((c0 - 1) % 1 == 0)) {
      f_update_0((c1 - 1) / 1, (c0 - 1) / 1);
    }

    if ((1 <= c1 && c1 <= 30) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 30) && ((c0 - 1) % 1 == 0)) {
      sum_diffs_update_0((c1 - 1) / 1, (c0 - 1) / 1);
    }

  }
}

  */
	  // Schedules...
	    // diff_d_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*5]
	    // diff_l_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*4]
	    // diff_qwe_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*3]
	    // diff_r_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
	    // f_off_chip_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*7]
	    // f_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*8]
	    // magval_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*6]
	    // sum_diffs_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*9]
	    // u_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // u_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	for (int c0 = -1; c0 <= 30; c0++) {
	  for (int c1 = -1; c1 <= 30; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-1 <= c1 && c1 <= 30) && ((c1 - 0) % 1 == 0) && (-1 <= c0 && c0 <= 30) && ((c0 - 0) % 1 == 0)) {
	      u_update_0(u_off_chip /* buf name */, u, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 30) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 30) && ((c0 - 1) % 1 == 0)) {
	      diff_r_update_0(u /* buf name */, diff_r, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 30) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 30) && ((c0 - 1) % 1 == 0)) {
	      diff_qwe_update_0(u /* buf name */, diff_qwe, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 30) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 30) && ((c0 - 1) % 1 == 0)) {
	      diff_l_update_0(u /* buf name */, diff_l, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 30) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 30) && ((c0 - 1) % 1 == 0)) {
	      diff_d_update_0(u /* buf name */, diff_d, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 30) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 30) && ((c0 - 1) % 1 == 0)) {
	      magval_update_0(diff_qwe /* buf name */, diff_d /* buf name */, diff_l /* buf name */, diff_r /* buf name */, magval, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 30) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 30) && ((c0 - 1) % 1 == 0)) {
	      f_update_0(f_off_chip /* buf name */, f, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 30) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 30) && ((c0 - 1) % 1 == 0)) {
	      sum_diffs_update_0(magval /* buf name */, f /* buf name */, sum_diffs, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void sum_diffs_opt_wrapper(HWStream<hw_uint<32> >& /* get_args num ports = 1 */f_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 1 */u_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 1 */sum_diffs, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    sum_diffs_opt(f_off_chip, u_off_chip, sum_diffs);
  }
}
#ifdef __VIVADO_SYNTH__
  // { f_update_0[root = 0, f_0, f_1] -> f_off_chip[0, 0] : 0 <= f_0 <= 29 and 0 <= f_1 <= 29 }
const int f_update_0_read_pipe0_num_transfers = 900;
  // { sum_diffs_update_0[root = 0, sum_diffs_0, sum_diffs_1] -> sum_diffs[0, 0] : 0 <= sum_diffs_0 <= 29 and 0 <= sum_diffs_1 <= 29 }
const int sum_diffs_update_0_write_pipe0_num_transfers = 900;
  // { u_update_0[root = 0, u_0, u_1] -> u_off_chip[0, 0] : -1 <= u_0 <= 30 and -1 <= u_1 <= 30 }
const int u_update_0_read_pipe0_num_transfers = 1024;


extern "C" {

void sum_diffs_opt_accel(hw_uint<32>* f_update_0_read_pipe0, hw_uint<32>* u_update_0_read_pipe0, hw_uint<32>* sum_diffs_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = f_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = u_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem1
#pragma HLS INTERFACE m_axi port = sum_diffs_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem2

#pragma HLS INTERFACE s_axilite port = f_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = u_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = sum_diffs_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<32> > f_update_0_read_pipe0_channel;
  static HWStream<hw_uint<32> > u_update_0_read_pipe0_channel;
  static HWStream<hw_uint<32> > sum_diffs_update_0_write_pipe0_channel;

  burst_read<32>(f_update_0_read_pipe0, f_update_0_read_pipe0_channel, f_update_0_read_pipe0_num_transfers*size);
  burst_read<32>(u_update_0_read_pipe0, u_update_0_read_pipe0_channel, u_update_0_read_pipe0_num_transfers*size);

  sum_diffs_opt_wrapper(f_update_0_read_pipe0_channel, u_update_0_read_pipe0_channel, sum_diffs_update_0_write_pipe0_channel, size);

  burst_write<32>(sum_diffs_update_0_write_pipe0, sum_diffs_update_0_write_pipe0_channel, sum_diffs_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void sum_diffs_opt_rdai(HWStream<hw_uint<32> >& f_update_0_read_pipe0, HWStream<hw_uint<32> >& u_update_0_read_pipe0, HWStream<hw_uint<32> >&  sum_diffs_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = f_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = u_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = sum_diffs_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  sum_diffs_opt(f_update_0_read_pipe0, u_update_0_read_pipe0, sum_diffs_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

