#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "denoise2d_naive_compute_units.h"

#include "hw_classes.h"

struct diff_d_diff_d_update_0_write0_to_g_rd0_cache {
	// RAM Box: {[-1, 30], [-1, 30]}
	// Capacity: 1024
	// # of read delays: 1024
	fifo<hw_uint<32> , 1024> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1023 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct diff_d_cache {
  diff_d_diff_d_update_0_write0_to_g_rd0_cache diff_d_diff_d_update_0_write0_to_g_rd0;
};



inline void diff_d_diff_d_update_0_write0_write(hw_uint<32> & diff_d_diff_d_update_0_write0, diff_d_cache& diff_d, int d0, int d1) {
  diff_d.diff_d_diff_d_update_0_write0_to_g_rd0.push(diff_d_diff_d_update_0_write0);
}

inline hw_uint<32>  g_rd0_select(diff_d_cache& diff_d, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_rd0 read pattern: { g_update_0[d0, d1] -> diff_d[d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Read schedule : { g_update_0[d0, d1] -> [10, d1, d0] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Write schedule: { diff_d_update_0[d0, d1] -> [8, d1, d0] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // DD fold: { g_update_0[d0, d1] -> ((990 - d0) - 32 * d1) : -1 <= d0 <= 29 and -1 <= d1 <= 29; g_update_0[d0, d1] -> (960 - 32 * d1) : d0 = 30 and -1 <= d1 <= 29; g_update_0[d0, d1] -> (30 - d0) : d1 = 30 and -1 <= d0 <= 29 }
  auto value_diff_d_diff_d_update_0_write0 = diff_d.diff_d_diff_d_update_0_write0_to_g_rd0.peek(/* one reader or all rams */ (-30 + d1 == 0 && 29 - d0 >= 0) ? ((30 - d0)) : (-30 + d0 == 0 && 29 - d1 >= 0) ? ((960 - 32 * d1)) : (29 - d1 >= 0 && 29 - d0 >= 0) ? (((990 - d0) - 32 * d1)) : 0);
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

// g_update_0_read
//	g_rd0
inline hw_uint<32> diff_d_g_update_0_read_bundle_read(diff_d_cache& diff_d, int d0, int d1) {
  // # of ports in bundle: 1
    // g_rd0

	hw_uint<32> result;
	hw_uint<32>  g_rd0_res = g_rd0_select(diff_d, d0, d1);
	set_at<0, 32>(result, g_rd0_res);
	return result;
}

#include "hw_classes.h"

struct diff_l_diff_l_update_0_write0_to_g_rd0_cache {
	// RAM Box: {[-1, 30], [-1, 30]}
	// Capacity: 1024
	// # of read delays: 1024
	fifo<hw_uint<32> , 1024> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1023 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct diff_l_cache {
  diff_l_diff_l_update_0_write0_to_g_rd0_cache diff_l_diff_l_update_0_write0_to_g_rd0;
};



inline void diff_l_diff_l_update_0_write0_write(hw_uint<32> & diff_l_diff_l_update_0_write0, diff_l_cache& diff_l, int d0, int d1) {
  diff_l.diff_l_diff_l_update_0_write0_to_g_rd0.push(diff_l_diff_l_update_0_write0);
}

inline hw_uint<32>  g_rd0_select(diff_l_cache& diff_l, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_rd0 read pattern: { g_update_0[d0, d1] -> diff_l[d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Read schedule : { g_update_0[d0, d1] -> [10, d1, d0] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Write schedule: { diff_l_update_0[d0, d1] -> [7, d1, d0] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // DD fold: { g_update_0[d0, d1] -> ((990 - d0) - 32 * d1) : -1 <= d0 <= 29 and -1 <= d1 <= 29; g_update_0[d0, d1] -> (960 - 32 * d1) : d0 = 30 and -1 <= d1 <= 29; g_update_0[d0, d1] -> (30 - d0) : d1 = 30 and -1 <= d0 <= 29 }
  auto value_diff_l_diff_l_update_0_write0 = diff_l.diff_l_diff_l_update_0_write0_to_g_rd0.peek(/* one reader or all rams */ (-30 + d1 == 0 && 29 - d0 >= 0) ? ((30 - d0)) : (-30 + d0 == 0 && 29 - d1 >= 0) ? ((960 - 32 * d1)) : (29 - d1 >= 0 && 29 - d0 >= 0) ? (((990 - d0) - 32 * d1)) : 0);
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

// g_update_0_read
//	g_rd0
inline hw_uint<32> diff_l_g_update_0_read_bundle_read(diff_l_cache& diff_l, int d0, int d1) {
  // # of ports in bundle: 1
    // g_rd0

	hw_uint<32> result;
	hw_uint<32>  g_rd0_res = g_rd0_select(diff_l, d0, d1);
	set_at<0, 32>(result, g_rd0_res);
	return result;
}

#include "hw_classes.h"

struct diff_qwe_diff_qwe_update_0_write0_to_g_rd0_cache {
	// RAM Box: {[-1, 30], [-1, 30]}
	// Capacity: 1024
	// # of read delays: 1024
	fifo<hw_uint<32> , 1024> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1023 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct diff_qwe_cache {
  diff_qwe_diff_qwe_update_0_write0_to_g_rd0_cache diff_qwe_diff_qwe_update_0_write0_to_g_rd0;
};



inline void diff_qwe_diff_qwe_update_0_write0_write(hw_uint<32> & diff_qwe_diff_qwe_update_0_write0, diff_qwe_cache& diff_qwe, int d0, int d1) {
  diff_qwe.diff_qwe_diff_qwe_update_0_write0_to_g_rd0.push(diff_qwe_diff_qwe_update_0_write0);
}

inline hw_uint<32>  g_rd0_select(diff_qwe_cache& diff_qwe, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_rd0 read pattern: { g_update_0[d0, d1] -> diff_qwe[d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Read schedule : { g_update_0[d0, d1] -> [10, d1, d0] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Write schedule: { diff_qwe_update_0[d0, d1] -> [6, d1, d0] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // DD fold: { g_update_0[d0, d1] -> ((990 - d0) - 32 * d1) : -1 <= d0 <= 29 and -1 <= d1 <= 29; g_update_0[d0, d1] -> (960 - 32 * d1) : d0 = 30 and -1 <= d1 <= 29; g_update_0[d0, d1] -> (30 - d0) : d1 = 30 and -1 <= d0 <= 29 }
  auto value_diff_qwe_diff_qwe_update_0_write0 = diff_qwe.diff_qwe_diff_qwe_update_0_write0_to_g_rd0.peek(/* one reader or all rams */ (-30 + d1 == 0 && 29 - d0 >= 0) ? ((30 - d0)) : (-30 + d0 == 0 && 29 - d1 >= 0) ? ((960 - 32 * d1)) : (29 - d1 >= 0 && 29 - d0 >= 0) ? (((990 - d0) - 32 * d1)) : 0);
  return value_diff_qwe_diff_qwe_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// diff_qwe_update_0_write
//	diff_qwe_diff_qwe_update_0_write0
inline void diff_qwe_diff_qwe_update_0_write_bundle_write(hw_uint<32>& diff_qwe_update_0_write, diff_qwe_cache& diff_qwe, int d0, int d1) {
	hw_uint<32>  diff_qwe_diff_qwe_update_0_write0_res = diff_qwe_update_0_write.extract<0, 31>();
	diff_qwe_diff_qwe_update_0_write0_write(diff_qwe_diff_qwe_update_0_write0_res, diff_qwe, d0, d1);
}

// g_update_0_read
//	g_rd0
inline hw_uint<32> diff_qwe_g_update_0_read_bundle_read(diff_qwe_cache& diff_qwe, int d0, int d1) {
  // # of ports in bundle: 1
    // g_rd0

	hw_uint<32> result;
	hw_uint<32>  g_rd0_res = g_rd0_select(diff_qwe, d0, d1);
	set_at<0, 32>(result, g_rd0_res);
	return result;
}

#include "hw_classes.h"

struct diff_r_diff_r_update_0_write0_to_g_rd0_cache {
	// RAM Box: {[-1, 30], [-1, 30]}
	// Capacity: 1024
	// # of read delays: 1024
	fifo<hw_uint<32> , 1024> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1023 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct diff_r_cache {
  diff_r_diff_r_update_0_write0_to_g_rd0_cache diff_r_diff_r_update_0_write0_to_g_rd0;
};



inline void diff_r_diff_r_update_0_write0_write(hw_uint<32> & diff_r_diff_r_update_0_write0, diff_r_cache& diff_r, int d0, int d1) {
  diff_r.diff_r_diff_r_update_0_write0_to_g_rd0.push(diff_r_diff_r_update_0_write0);
}

inline hw_uint<32>  g_rd0_select(diff_r_cache& diff_r, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_rd0 read pattern: { g_update_0[d0, d1] -> diff_r[d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Read schedule : { g_update_0[d0, d1] -> [10, d1, d0] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Write schedule: { diff_r_update_0[d0, d1] -> [5, d1, d0] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // DD fold: { g_update_0[d0, d1] -> ((990 - d0) - 32 * d1) : -1 <= d0 <= 29 and -1 <= d1 <= 29; g_update_0[d0, d1] -> (960 - 32 * d1) : d0 = 30 and -1 <= d1 <= 29; g_update_0[d0, d1] -> (30 - d0) : d1 = 30 and -1 <= d0 <= 29 }
  auto value_diff_r_diff_r_update_0_write0 = diff_r.diff_r_diff_r_update_0_write0_to_g_rd0.peek(/* one reader or all rams */ (-30 + d1 == 0 && 29 - d0 >= 0) ? ((30 - d0)) : (-30 + d0 == 0 && 29 - d1 >= 0) ? ((960 - 32 * d1)) : (29 - d1 >= 0 && 29 - d0 >= 0) ? (((990 - d0) - 32 * d1)) : 0);
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

// g_update_0_read
//	g_rd0
inline hw_uint<32> diff_r_g_update_0_read_bundle_read(diff_r_cache& diff_r, int d0, int d1) {
  // # of ports in bundle: 1
    // g_rd0

	hw_uint<32> result;
	hw_uint<32>  g_rd0_res = g_rd0_select(diff_r, d0, d1);
	set_at<0, 32>(result, g_rd0_res);
	return result;
}

#include "hw_classes.h"

struct f_f_update_0_write0_to_denoise2d_rd0_cache {
	// RAM Box: {[0, 29], [0, 29]}
	// Capacity: 900
	// # of read delays: 900
	fifo<hw_uint<32> , 900> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(899 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct f_f_update_0_write0_to_r0_rd0_cache {
	// RAM Box: {[0, 29], [0, 29]}
	// Capacity: 900
	// # of read delays: 900
	fifo<hw_uint<32> , 900> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(899 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct f_cache {
  f_f_update_0_write0_to_denoise2d_rd0_cache f_f_update_0_write0_to_denoise2d_rd0;
  f_f_update_0_write0_to_r0_rd0_cache f_f_update_0_write0_to_r0_rd0;
};



inline void f_f_update_0_write0_write(hw_uint<32> & f_f_update_0_write0, f_cache& f, int d0, int d1) {
  f.f_f_update_0_write0_to_denoise2d_rd0.push(f_f_update_0_write0);
  f.f_f_update_0_write0_to_r0_rd0.push(f_f_update_0_write0);
}

inline hw_uint<32>  denoise2d_rd0_select(f_cache& f, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise2d_rd0 read pattern: { denoise2d_update_0[d0, d1] -> f[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { denoise2d_update_0[d0, d1] -> [11, d1, d0] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { f_update_0[d0, d1] -> [1, d1, d0] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // DD fold: { denoise2d_update_0[d0, d1] -> ((899 - d0) - 30 * d1) : 0 <= d0 <= 28 and 0 <= d1 <= 28; denoise2d_update_0[d0, d1] -> (870 - 30 * d1) : d0 = 29 and 0 <= d1 <= 28; denoise2d_update_0[d0, d1] -> (29 - d0) : d1 = 29 and 0 <= d0 <= 28 }
  auto value_f_f_update_0_write0 = f.f_f_update_0_write0_to_denoise2d_rd0.peek(/* one reader or all rams */ (-29 + d1 == 0 && 28 - d0 >= 0) ? ((29 - d0)) : (-29 + d0 == 0 && 28 - d1 >= 0) ? ((870 - 30 * d1)) : (28 - d1 >= 0 && 28 - d0 >= 0) ? (((899 - d0) - 30 * d1)) : 0);
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
  // Read schedule : { r0_update_0[d0, d1] -> [4, d1, d0] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { f_update_0[d0, d1] -> [1, d1, d0] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // DD fold: { r0_update_0[d0, d1] -> ((899 - d0) - 30 * d1) : 0 <= d0 <= 28 and 0 <= d1 <= 28; r0_update_0[d0, d1] -> (870 - 30 * d1) : d0 = 29 and 0 <= d1 <= 28; r0_update_0[d0, d1] -> (29 - d0) : d1 = 29 and 0 <= d0 <= 28 }
  auto value_f_f_update_0_write0 = f.f_f_update_0_write0_to_r0_rd0.peek(/* one reader or all rams */ (-29 + d1 == 0 && 28 - d0 >= 0) ? ((29 - d0)) : (-29 + d0 == 0 && 28 - d1 >= 0) ? ((870 - 30 * d1)) : (28 - d1 >= 0 && 28 - d0 >= 0) ? (((899 - d0) - 30 * d1)) : 0);
  return value_f_f_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 3
// denoise2d_update_0_read
//	denoise2d_rd0
inline hw_uint<32> f_denoise2d_update_0_read_bundle_read(f_cache& f, int d0, int d1) {
  // # of ports in bundle: 1
    // denoise2d_rd0

	hw_uint<32> result;
	hw_uint<32>  denoise2d_rd0_res = denoise2d_rd0_select(f, d0, d1);
	set_at<0, 32>(result, denoise2d_rd0_res);
	return result;
}

// f_update_0_write
//	f_f_update_0_write0
inline void f_f_update_0_write_bundle_write(hw_uint<32>& f_update_0_write, f_cache& f, int d0, int d1) {
	hw_uint<32>  f_f_update_0_write0_res = f_update_0_write.extract<0, 31>();
	f_f_update_0_write0_write(f_f_update_0_write0_res, f, d0, d1);
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

#include "hw_classes.h"

struct g_g_update_0_write0_to_denoise2d_rd0_cache {
	// RAM Box: {[-1, 30], [-1, 30]}
	// Capacity: 992
	// # of read delays: 959
	fifo<hw_uint<32> , 992> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(991 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct g_g_update_0_write0_to_denoise2d_rd1_cache {
	// RAM Box: {[-1, 30], [-1, 30]}
	// Capacity: 1023
	// # of read delays: 959
	fifo<hw_uint<32> , 1023> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1022 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct g_g_update_0_write0_to_denoise2d_rd2_cache {
	// RAM Box: {[-1, 30], [-1, 30]}
	// Capacity: 959
	// # of read delays: 959
	fifo<hw_uint<32> , 959> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(958 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct g_g_update_0_write0_to_denoise2d_rd3_cache {
	// RAM Box: {[-1, 30], [-1, 30]}
	// Capacity: 990
	// # of read delays: 959
	fifo<hw_uint<32> , 990> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(989 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct g_cache {
  g_g_update_0_write0_to_denoise2d_rd0_cache g_g_update_0_write0_to_denoise2d_rd0;
  g_g_update_0_write0_to_denoise2d_rd1_cache g_g_update_0_write0_to_denoise2d_rd1;
  g_g_update_0_write0_to_denoise2d_rd2_cache g_g_update_0_write0_to_denoise2d_rd2;
  g_g_update_0_write0_to_denoise2d_rd3_cache g_g_update_0_write0_to_denoise2d_rd3;
};



inline void g_g_update_0_write0_write(hw_uint<32> & g_g_update_0_write0, g_cache& g, int d0, int d1) {
  g.g_g_update_0_write0_to_denoise2d_rd0.push(g_g_update_0_write0);
  g.g_g_update_0_write0_to_denoise2d_rd1.push(g_g_update_0_write0);
  g.g_g_update_0_write0_to_denoise2d_rd2.push(g_g_update_0_write0);
  g.g_g_update_0_write0_to_denoise2d_rd3.push(g_g_update_0_write0);
}

inline hw_uint<32>  denoise2d_rd0_select(g_cache& g, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise2d_rd0 read pattern: { denoise2d_update_0[d0, d1] -> g[-1 + d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { denoise2d_update_0[d0, d1] -> [11, d1, d0] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { g_update_0[d0, d1] -> [10, d1, d0] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // DD fold: { denoise2d_update_0[d0, d1] -> ((991 - d0) - 32 * d1) : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_g_g_update_0_write0 = g.g_g_update_0_write0_to_denoise2d_rd0.peek(/* one reader or all rams */ ((991 - d0) - 32 * d1));
  return value_g_g_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  denoise2d_rd1_select(g_cache& g, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise2d_rd1 read pattern: { denoise2d_update_0[d0, d1] -> g[d0, -1 + d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { denoise2d_update_0[d0, d1] -> [11, d1, d0] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { g_update_0[d0, d1] -> [10, d1, d0] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // DD fold: { denoise2d_update_0[d0, d1] -> ((1022 - d0) - 32 * d1) : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_g_g_update_0_write0 = g.g_g_update_0_write0_to_denoise2d_rd1.peek(/* one reader or all rams */ ((1022 - d0) - 32 * d1));
  return value_g_g_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  denoise2d_rd2_select(g_cache& g, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise2d_rd2 read pattern: { denoise2d_update_0[d0, d1] -> g[d0, 1 + d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { denoise2d_update_0[d0, d1] -> [11, d1, d0] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { g_update_0[d0, d1] -> [10, d1, d0] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // DD fold: { denoise2d_update_0[d0, d1] -> ((958 - d0) - 32 * d1) : 0 <= d0 <= 29 and 0 <= d1 <= 28; denoise2d_update_0[d0, d1] -> (30 - d0) : d1 = 29 and 0 <= d0 <= 29 }
  auto value_g_g_update_0_write0 = g.g_g_update_0_write0_to_denoise2d_rd2.peek(/* one reader or all rams */ (-29 + d1 == 0) ? ((30 - d0)) : (28 - d1 >= 0) ? (((958 - d0) - 32 * d1)) : 0);
  return value_g_g_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  denoise2d_rd3_select(g_cache& g, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise2d_rd3 read pattern: { denoise2d_update_0[d0, d1] -> g[1 + d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { denoise2d_update_0[d0, d1] -> [11, d1, d0] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { g_update_0[d0, d1] -> [10, d1, d0] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // DD fold: { denoise2d_update_0[d0, d1] -> ((989 - d0) - 32 * d1) : 0 <= d0 <= 28 and 0 <= d1 <= 29; denoise2d_update_0[d0, d1] -> (960 - 32 * d1) : d0 = 29 and 0 <= d1 <= 29 }
  auto value_g_g_update_0_write0 = g.g_g_update_0_write0_to_denoise2d_rd3.peek(/* one reader or all rams */ (-29 + d0 == 0) ? ((960 - 32 * d1)) : (28 - d0 >= 0) ? (((989 - d0) - 32 * d1)) : 0);
  return value_g_g_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// denoise2d_update_0_read
//	denoise2d_rd0
//	denoise2d_rd1
//	denoise2d_rd2
//	denoise2d_rd3
inline hw_uint<128> g_denoise2d_update_0_read_bundle_read(g_cache& g, int d0, int d1) {
  // # of ports in bundle: 4
    // denoise2d_rd0
    // denoise2d_rd1
    // denoise2d_rd2
    // denoise2d_rd3

	hw_uint<128> result;
	hw_uint<32>  denoise2d_rd0_res = denoise2d_rd0_select(g, d0, d1);
	set_at<0, 128>(result, denoise2d_rd0_res);
	hw_uint<32>  denoise2d_rd1_res = denoise2d_rd1_select(g, d0, d1);
	set_at<32, 128>(result, denoise2d_rd1_res);
	hw_uint<32>  denoise2d_rd2_res = denoise2d_rd2_select(g, d0, d1);
	set_at<64, 128>(result, denoise2d_rd2_res);
	hw_uint<32>  denoise2d_rd3_res = denoise2d_rd3_select(g, d0, d1);
	set_at<96, 128>(result, denoise2d_rd3_res);
	return result;
}

// g_update_0_write
//	g_g_update_0_write0
inline void g_g_update_0_write_bundle_write(hw_uint<32>& g_update_0_write, g_cache& g, int d0, int d1) {
	hw_uint<32>  g_g_update_0_write0_res = g_update_0_write.extract<0, 31>();
	g_g_update_0_write0_write(g_g_update_0_write0_res, g, d0, d1);
}

#include "hw_classes.h"

struct r0_r0_update_0_write0_to_r1_rd0_cache {
	// RAM Box: {[0, 29], [0, 29]}
	// Capacity: 900
	// # of read delays: 900
	fifo<hw_uint<32> , 900> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(899 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct r0_cache {
  r0_r0_update_0_write0_to_r1_rd0_cache r0_r0_update_0_write0_to_r1_rd0;
};



inline void r0_r0_update_0_write0_write(hw_uint<32> & r0_r0_update_0_write0, r0_cache& r0, int d0, int d1) {
  r0.r0_r0_update_0_write0_to_r1_rd0.push(r0_r0_update_0_write0);
}

inline hw_uint<32>  r1_rd0_select(r0_cache& r0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // r1_rd0 read pattern: { r1_update_0[d0, d1] -> r0[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { r1_update_0[d0, d1] -> [9, d1, d0] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { r0_update_0[d0, d1] -> [4, d1, d0] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // DD fold: { r1_update_0[d0, d1] -> ((899 - d0) - 30 * d1) : 0 <= d0 <= 28 and 0 <= d1 <= 28; r1_update_0[d0, d1] -> (870 - 30 * d1) : d0 = 29 and 0 <= d1 <= 28; r1_update_0[d0, d1] -> (29 - d0) : d1 = 29 and 0 <= d0 <= 28 }
  auto value_r0_r0_update_0_write0 = r0.r0_r0_update_0_write0_to_r1_rd0.peek(/* one reader or all rams */ (-29 + d1 == 0 && 28 - d0 >= 0) ? ((29 - d0)) : (-29 + d0 == 0 && 28 - d1 >= 0) ? ((870 - 30 * d1)) : (28 - d1 >= 0 && 28 - d0 >= 0) ? (((899 - d0) - 30 * d1)) : 0);
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

struct r1_r1_update_0_write0_to_denoise2d_rd0_cache {
	// RAM Box: {[0, 29], [0, 29]}
	// Capacity: 900
	// # of read delays: 900
	fifo<hw_uint<32> , 900> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(899 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct r1_cache {
  r1_r1_update_0_write0_to_denoise2d_rd0_cache r1_r1_update_0_write0_to_denoise2d_rd0;
};



inline void r1_r1_update_0_write0_write(hw_uint<32> & r1_r1_update_0_write0, r1_cache& r1, int d0, int d1) {
  r1.r1_r1_update_0_write0_to_denoise2d_rd0.push(r1_r1_update_0_write0);
}

inline hw_uint<32>  denoise2d_rd0_select(r1_cache& r1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise2d_rd0 read pattern: { denoise2d_update_0[d0, d1] -> r1[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { denoise2d_update_0[d0, d1] -> [11, d1, d0] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { r1_update_0[d0, d1] -> [9, d1, d0] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // DD fold: { denoise2d_update_0[d0, d1] -> ((899 - d0) - 30 * d1) : 0 <= d0 <= 28 and 0 <= d1 <= 28; denoise2d_update_0[d0, d1] -> (870 - 30 * d1) : d0 = 29 and 0 <= d1 <= 28; denoise2d_update_0[d0, d1] -> (29 - d0) : d1 = 29 and 0 <= d0 <= 28 }
  auto value_r1_r1_update_0_write0 = r1.r1_r1_update_0_write0_to_denoise2d_rd0.peek(/* one reader or all rams */ (-29 + d1 == 0 && 28 - d0 >= 0) ? ((29 - d0)) : (-29 + d0 == 0 && 28 - d1 >= 0) ? ((870 - 30 * d1)) : (28 - d1 >= 0 && 28 - d0 >= 0) ? (((899 - d0) - 30 * d1)) : 0);
  return value_r1_r1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// denoise2d_update_0_read
//	denoise2d_rd0
inline hw_uint<32> r1_denoise2d_update_0_read_bundle_read(r1_cache& r1, int d0, int d1) {
  // # of ports in bundle: 1
    // denoise2d_rd0

	hw_uint<32> result;
	hw_uint<32>  denoise2d_rd0_res = denoise2d_rd0_select(r1, d0, d1);
	set_at<0, 32>(result, denoise2d_rd0_res);
	return result;
}

// r1_update_0_write
//	r1_r1_update_0_write0
inline void r1_r1_update_0_write_bundle_write(hw_uint<32>& r1_update_0_write, r1_cache& r1, int d0, int d1) {
	hw_uint<32>  r1_r1_update_0_write0_res = r1_update_0_write.extract<0, 31>();
	r1_r1_update_0_write0_write(r1_r1_update_0_write0_res, r1, d0, d1);
}

#include "hw_classes.h"

struct u_u_update_0_write0_to_denoise2d_rd0_cache {
	// RAM Box: {[-2, 31], [-2, 31]}
	// Capacity: 1087
	// # of read delays: 1017
	fifo<hw_uint<32> , 1087> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1086 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct u_u_update_0_write0_to_denoise2d_rd1_cache {
	// RAM Box: {[-2, 31], [-2, 31]}
	// Capacity: 1120
	// # of read delays: 1017
	fifo<hw_uint<32> , 1120> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1119 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct u_u_update_0_write0_to_denoise2d_rd2_cache {
	// RAM Box: {[-2, 31], [-2, 31]}
	// Capacity: 1086
	// # of read delays: 1017
	fifo<hw_uint<32> , 1086> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1085 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct u_u_update_0_write0_to_denoise2d_rd3_cache {
	// RAM Box: {[-2, 31], [-2, 31]}
	// Capacity: 1085
	// # of read delays: 1017
	fifo<hw_uint<32> , 1085> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1084 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct u_u_update_0_write0_to_diff_d_rd0_cache {
	// RAM Box: {[-2, 31], [-2, 31]}
	// Capacity: 1121
	// # of read delays: 1087
	fifo<hw_uint<32> , 1121> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1120 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct u_u_update_0_write0_to_diff_d_rd1_cache {
	// RAM Box: {[-2, 31], [-2, 31]}
	// Capacity: 1087
	// # of read delays: 1087
	fifo<hw_uint<32> , 1087> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1086 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct u_u_update_0_write0_to_diff_l_rd0_cache {
	// RAM Box: {[-2, 31], [-2, 31]}
	// Capacity: 1122
	// # of read delays: 1087
	fifo<hw_uint<32> , 1122> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1121 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct u_u_update_0_write0_to_diff_l_rd1_cache {
	// RAM Box: {[-2, 31], [-2, 31]}
	// Capacity: 1121
	// # of read delays: 1087
	fifo<hw_uint<32> , 1121> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1120 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct u_u_update_0_write0_to_diff_qwe_rd0_cache {
	// RAM Box: {[-2, 31], [-2, 31]}
	// Capacity: 1155
	// # of read delays: 1087
	fifo<hw_uint<32> , 1155> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1154 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct u_u_update_0_write0_to_diff_qwe_rd1_cache {
	// RAM Box: {[-2, 31], [-2, 31]}
	// Capacity: 1121
	// # of read delays: 1087
	fifo<hw_uint<32> , 1121> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1120 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct u_u_update_0_write0_to_diff_r_rd0_cache {
	// RAM Box: {[-2, 31], [-2, 31]}
	// Capacity: 1121
	// # of read delays: 1087
	fifo<hw_uint<32> , 1121> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1120 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct u_u_update_0_write0_to_diff_r_rd1_cache {
	// RAM Box: {[-2, 31], [-2, 31]}
	// Capacity: 1120
	// # of read delays: 1087
	fifo<hw_uint<32> , 1120> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1119 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct u_u_update_0_write0_to_r0_rd0_cache {
	// RAM Box: {[-2, 31], [-2, 31]}
	// Capacity: 1086
	// # of read delays: 1017
	fifo<hw_uint<32> , 1086> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1085 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct u_cache {
  u_u_update_0_write0_to_denoise2d_rd0_cache u_u_update_0_write0_to_denoise2d_rd0;
  u_u_update_0_write0_to_denoise2d_rd1_cache u_u_update_0_write0_to_denoise2d_rd1;
  u_u_update_0_write0_to_denoise2d_rd2_cache u_u_update_0_write0_to_denoise2d_rd2;
  u_u_update_0_write0_to_denoise2d_rd3_cache u_u_update_0_write0_to_denoise2d_rd3;
  u_u_update_0_write0_to_diff_d_rd0_cache u_u_update_0_write0_to_diff_d_rd0;
  u_u_update_0_write0_to_diff_d_rd1_cache u_u_update_0_write0_to_diff_d_rd1;
  u_u_update_0_write0_to_diff_l_rd0_cache u_u_update_0_write0_to_diff_l_rd0;
  u_u_update_0_write0_to_diff_l_rd1_cache u_u_update_0_write0_to_diff_l_rd1;
  u_u_update_0_write0_to_diff_qwe_rd0_cache u_u_update_0_write0_to_diff_qwe_rd0;
  u_u_update_0_write0_to_diff_qwe_rd1_cache u_u_update_0_write0_to_diff_qwe_rd1;
  u_u_update_0_write0_to_diff_r_rd0_cache u_u_update_0_write0_to_diff_r_rd0;
  u_u_update_0_write0_to_diff_r_rd1_cache u_u_update_0_write0_to_diff_r_rd1;
  u_u_update_0_write0_to_r0_rd0_cache u_u_update_0_write0_to_r0_rd0;
};



inline void u_u_update_0_write0_write(hw_uint<32> & u_u_update_0_write0, u_cache& u, int d0, int d1) {
  u.u_u_update_0_write0_to_denoise2d_rd0.push(u_u_update_0_write0);
  u.u_u_update_0_write0_to_denoise2d_rd1.push(u_u_update_0_write0);
  u.u_u_update_0_write0_to_denoise2d_rd2.push(u_u_update_0_write0);
  u.u_u_update_0_write0_to_denoise2d_rd3.push(u_u_update_0_write0);
  u.u_u_update_0_write0_to_diff_d_rd0.push(u_u_update_0_write0);
  u.u_u_update_0_write0_to_diff_d_rd1.push(u_u_update_0_write0);
  u.u_u_update_0_write0_to_diff_l_rd0.push(u_u_update_0_write0);
  u.u_u_update_0_write0_to_diff_l_rd1.push(u_u_update_0_write0);
  u.u_u_update_0_write0_to_diff_qwe_rd0.push(u_u_update_0_write0);
  u.u_u_update_0_write0_to_diff_qwe_rd1.push(u_u_update_0_write0);
  u.u_u_update_0_write0_to_diff_r_rd0.push(u_u_update_0_write0);
  u.u_u_update_0_write0_to_diff_r_rd1.push(u_u_update_0_write0);
  u.u_u_update_0_write0_to_r0_rd0.push(u_u_update_0_write0);
}

inline hw_uint<32>  denoise2d_rd0_select(u_cache& u, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise2d_rd0 read pattern: { denoise2d_update_0[d0, d1] -> u[-1 + d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { denoise2d_update_0[d0, d1] -> [11, d1, d0] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { u_update_0[d0, d1] -> [3, d1, d0] : -2 <= d0 <= 31 and -2 <= d1 <= 31 }
  // DD fold: { denoise2d_update_0[d0, d1] -> ((1086 - d0) - 34 * d1) : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_to_denoise2d_rd0.peek(/* one reader or all rams */ ((1086 - d0) - 34 * d1));
  return value_u_u_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  denoise2d_rd1_select(u_cache& u, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise2d_rd1 read pattern: { denoise2d_update_0[d0, d1] -> u[d0, -1 + d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { denoise2d_update_0[d0, d1] -> [11, d1, d0] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { u_update_0[d0, d1] -> [3, d1, d0] : -2 <= d0 <= 31 and -2 <= d1 <= 31 }
  // DD fold: { denoise2d_update_0[d0, d1] -> ((1119 - d0) - 34 * d1) : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_to_denoise2d_rd1.peek(/* one reader or all rams */ ((1119 - d0) - 34 * d1));
  return value_u_u_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  denoise2d_rd2_select(u_cache& u, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise2d_rd2 read pattern: { denoise2d_update_0[d0, d1] -> u[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { denoise2d_update_0[d0, d1] -> [11, d1, d0] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { u_update_0[d0, d1] -> [3, d1, d0] : -2 <= d0 <= 31 and -2 <= d1 <= 31 }
  // DD fold: { denoise2d_update_0[d0, d1] -> ((1085 - d0) - 34 * d1) : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_to_denoise2d_rd2.peek(/* one reader or all rams */ ((1085 - d0) - 34 * d1));
  return value_u_u_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  denoise2d_rd3_select(u_cache& u, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise2d_rd3 read pattern: { denoise2d_update_0[d0, d1] -> u[1 + d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { denoise2d_update_0[d0, d1] -> [11, d1, d0] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { u_update_0[d0, d1] -> [3, d1, d0] : -2 <= d0 <= 31 and -2 <= d1 <= 31 }
  // DD fold: { denoise2d_update_0[d0, d1] -> ((1084 - d0) - 34 * d1) : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_to_denoise2d_rd3.peek(/* one reader or all rams */ ((1084 - d0) - 34 * d1));
  return value_u_u_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  diff_d_rd0_select(u_cache& u, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_d_rd0 read pattern: { diff_d_update_0[d0, d1] -> u[d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Read schedule : { diff_d_update_0[d0, d1] -> [8, d1, d0] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Write schedule: { u_update_0[d0, d1] -> [3, d1, d0] : -2 <= d0 <= 31 and -2 <= d1 <= 31 }
  // DD fold: { diff_d_update_0[d0, d1] -> ((1085 - d0) - 34 * d1) : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_to_diff_d_rd0.peek(/* one reader or all rams */ ((1085 - d0) - 34 * d1));
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
  // diff_d_rd1 read pattern: { diff_d_update_0[d0, d1] -> u[d0, 1 + d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Read schedule : { diff_d_update_0[d0, d1] -> [8, d1, d0] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Write schedule: { u_update_0[d0, d1] -> [3, d1, d0] : -2 <= d0 <= 31 and -2 <= d1 <= 31 }
  // DD fold: { diff_d_update_0[d0, d1] -> ((1051 - d0) - 34 * d1) : -1 <= d0 <= 30 and -1 <= d1 <= 29; diff_d_update_0[d0, d1] -> (31 - d0) : d1 = 30 and -1 <= d0 <= 30 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_to_diff_d_rd1.peek(/* one reader or all rams */ (-30 + d1 == 0) ? ((31 - d0)) : (29 - d1 >= 0) ? (((1051 - d0) - 34 * d1)) : 0);
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
  // diff_l_rd0 read pattern: { diff_l_update_0[d0, d1] -> u[-1 + d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Read schedule : { diff_l_update_0[d0, d1] -> [7, d1, d0] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Write schedule: { u_update_0[d0, d1] -> [3, d1, d0] : -2 <= d0 <= 31 and -2 <= d1 <= 31 }
  // DD fold: { diff_l_update_0[d0, d1] -> ((1086 - d0) - 34 * d1) : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_to_diff_l_rd0.peek(/* one reader or all rams */ ((1086 - d0) - 34 * d1));
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
  // diff_l_rd1 read pattern: { diff_l_update_0[d0, d1] -> u[d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Read schedule : { diff_l_update_0[d0, d1] -> [7, d1, d0] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Write schedule: { u_update_0[d0, d1] -> [3, d1, d0] : -2 <= d0 <= 31 and -2 <= d1 <= 31 }
  // DD fold: { diff_l_update_0[d0, d1] -> ((1085 - d0) - 34 * d1) : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_to_diff_l_rd1.peek(/* one reader or all rams */ ((1085 - d0) - 34 * d1));
  return value_u_u_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  diff_qwe_rd0_select(u_cache& u, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_qwe_rd0 read pattern: { diff_qwe_update_0[d0, d1] -> u[d0, -1 + d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Read schedule : { diff_qwe_update_0[d0, d1] -> [6, d1, d0] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Write schedule: { u_update_0[d0, d1] -> [3, d1, d0] : -2 <= d0 <= 31 and -2 <= d1 <= 31 }
  // DD fold: { diff_qwe_update_0[d0, d1] -> ((1119 - d0) - 34 * d1) : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_to_diff_qwe_rd0.peek(/* one reader or all rams */ ((1119 - d0) - 34 * d1));
  return value_u_u_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  diff_qwe_rd1_select(u_cache& u, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // diff_qwe_rd1 read pattern: { diff_qwe_update_0[d0, d1] -> u[d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Read schedule : { diff_qwe_update_0[d0, d1] -> [6, d1, d0] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Write schedule: { u_update_0[d0, d1] -> [3, d1, d0] : -2 <= d0 <= 31 and -2 <= d1 <= 31 }
  // DD fold: { diff_qwe_update_0[d0, d1] -> ((1085 - d0) - 34 * d1) : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_to_diff_qwe_rd1.peek(/* one reader or all rams */ ((1085 - d0) - 34 * d1));
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
  // diff_r_rd0 read pattern: { diff_r_update_0[d0, d1] -> u[d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Read schedule : { diff_r_update_0[d0, d1] -> [5, d1, d0] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Write schedule: { u_update_0[d0, d1] -> [3, d1, d0] : -2 <= d0 <= 31 and -2 <= d1 <= 31 }
  // DD fold: { diff_r_update_0[d0, d1] -> ((1085 - d0) - 34 * d1) : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_to_diff_r_rd0.peek(/* one reader or all rams */ ((1085 - d0) - 34 * d1));
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
  // diff_r_rd1 read pattern: { diff_r_update_0[d0, d1] -> u[1 + d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Read schedule : { diff_r_update_0[d0, d1] -> [5, d1, d0] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // Write schedule: { u_update_0[d0, d1] -> [3, d1, d0] : -2 <= d0 <= 31 and -2 <= d1 <= 31 }
  // DD fold: { diff_r_update_0[d0, d1] -> ((1084 - d0) - 34 * d1) : -1 <= d0 <= 29 and -1 <= d1 <= 30; diff_r_update_0[d0, d1] -> (1054 - 34 * d1) : d0 = 30 and -1 <= d1 <= 30 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_to_diff_r_rd1.peek(/* one reader or all rams */ (-30 + d0 == 0) ? ((1054 - 34 * d1)) : (29 - d0 >= 0) ? (((1084 - d0) - 34 * d1)) : 0);
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
  // Read schedule : { r0_update_0[d0, d1] -> [4, d1, d0] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { u_update_0[d0, d1] -> [3, d1, d0] : -2 <= d0 <= 31 and -2 <= d1 <= 31 }
  // DD fold: { r0_update_0[d0, d1] -> ((1085 - d0) - 34 * d1) : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_to_r0_rd0.peek(/* one reader or all rams */ ((1085 - d0) - 34 * d1));
  return value_u_u_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 7
// denoise2d_update_0_read
//	denoise2d_rd0
//	denoise2d_rd1
//	denoise2d_rd2
//	denoise2d_rd3
inline hw_uint<128> u_denoise2d_update_0_read_bundle_read(u_cache& u, int d0, int d1) {
  // # of ports in bundle: 4
    // denoise2d_rd0
    // denoise2d_rd1
    // denoise2d_rd2
    // denoise2d_rd3

	hw_uint<128> result;
	hw_uint<32>  denoise2d_rd0_res = denoise2d_rd0_select(u, d0, d1);
	set_at<0, 128>(result, denoise2d_rd0_res);
	hw_uint<32>  denoise2d_rd1_res = denoise2d_rd1_select(u, d0, d1);
	set_at<32, 128>(result, denoise2d_rd1_res);
	hw_uint<32>  denoise2d_rd2_res = denoise2d_rd2_select(u, d0, d1);
	set_at<64, 128>(result, denoise2d_rd2_res);
	hw_uint<32>  denoise2d_rd3_res = denoise2d_rd3_select(u, d0, d1);
	set_at<96, 128>(result, denoise2d_rd3_res);
	return result;
}

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

// diff_qwe_update_0_read
//	diff_qwe_rd0
//	diff_qwe_rd1
inline hw_uint<64> u_diff_qwe_update_0_read_bundle_read(u_cache& u, int d0, int d1) {
  // # of ports in bundle: 2
    // diff_qwe_rd0
    // diff_qwe_rd1

	hw_uint<64> result;
	hw_uint<32>  diff_qwe_rd0_res = diff_qwe_rd0_select(u, d0, d1);
	set_at<0, 64>(result, diff_qwe_rd0_res);
	hw_uint<32>  diff_qwe_rd1_res = diff_qwe_rd1_select(u, d0, d1);
	set_at<32, 64>(result, diff_qwe_rd1_res);
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
	auto compute_result = f_generated_compute_unrolled_1(f_off_chip_0_c__0_value);
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
	auto compute_result = u_generated_compute_unrolled_1(u_off_chip_0_c__0_value);
	// Produce: u
	u_u_update_0_write_bundle_write(compute_result, u, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "u_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void r0_update_0(u_cache& u, f_cache& f, r0_cache& r0, int d0, int d1) {
	// Consume: u
	auto u_0_c__0_value = u_r0_update_0_read_bundle_read(u/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "r0_update_0_u," << d0<< "," << d1<< "," <<  u_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: f
	auto f_0_c__0_value = f_r0_update_0_read_bundle_read(f/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "r0_update_0_f," << d0<< "," << d1<< "," <<  f_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = comp_r02d_unrolled_1(u_0_c__0_value, f_0_c__0_value);
	// Produce: r0
	r0_r0_update_0_write_bundle_write(compute_result, r0, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "r0_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void diff_r_update_0(u_cache& u, diff_r_cache& diff_r, int d0, int d1) {
	// Consume: u
	auto u_0_c__0_value = u_diff_r_update_0_read_bundle_read(u/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "diff_r_update_0_u," << d0<< "," << d1<< "," <<  u_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_r2d_unrolled_1(u_0_c__0_value);
	// Produce: diff_r
	diff_r_diff_r_update_0_write_bundle_write(compute_result, diff_r, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "diff_r_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void diff_qwe_update_0(u_cache& u, diff_qwe_cache& diff_qwe, int d0, int d1) {
	// Consume: u
	auto u_0_c__0_value = u_diff_qwe_update_0_read_bundle_read(u/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "diff_qwe_update_0_u," << d0<< "," << d1<< "," <<  u_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_qwe_generated_compute_unrolled_1(u_0_c__0_value);
	// Produce: diff_qwe
	diff_qwe_diff_qwe_update_0_write_bundle_write(compute_result, diff_qwe, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "diff_qwe_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void diff_l_update_0(u_cache& u, diff_l_cache& diff_l, int d0, int d1) {
	// Consume: u
	auto u_0_c__0_value = u_diff_l_update_0_read_bundle_read(u/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "diff_l_update_0_u," << d0<< "," << d1<< "," <<  u_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_l2d_unrolled_1(u_0_c__0_value);
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

	auto compute_result = diff_d2d_unrolled_1(u_0_c__0_value);
	// Produce: diff_d
	diff_d_diff_d_update_0_write_bundle_write(compute_result, diff_d, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "diff_d_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void r1_update_0(r0_cache& r0, r1_cache& r1, int d0, int d1) {
	// Consume: r0
	auto r0_0_c__0_value = r0_r1_update_0_read_bundle_read(r0/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "r1_update_0_r0," << d0<< "," << d1<< "," <<  r0_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = r1_comp2d_unrolled_1(r0_0_c__0_value);
	// Produce: r1
	r1_r1_update_0_write_bundle_write(compute_result, r1, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "r1_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void g_update_0(diff_d_cache& diff_d, diff_l_cache& diff_l, diff_qwe_cache& diff_qwe, diff_r_cache& diff_r, g_cache& g, int d0, int d1) {
	// Consume: diff_d
	auto diff_d_0_c__0_value = diff_d_g_update_0_read_bundle_read(diff_d/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "g_update_0_diff_d," << d0<< "," << d1<< "," <<  diff_d_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: diff_l
	auto diff_l_0_c__0_value = diff_l_g_update_0_read_bundle_read(diff_l/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "g_update_0_diff_l," << d0<< "," << d1<< "," <<  diff_l_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: diff_qwe
	auto diff_qwe_0_c__0_value = diff_qwe_g_update_0_read_bundle_read(diff_qwe/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "g_update_0_diff_qwe," << d0<< "," << d1<< "," <<  diff_qwe_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: diff_r
	auto diff_r_0_c__0_value = diff_r_g_update_0_read_bundle_read(diff_r/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "g_update_0_diff_r," << d0<< "," << d1<< "," <<  diff_r_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = g_generated_compute_unrolled_1(diff_d_0_c__0_value, diff_l_0_c__0_value, diff_qwe_0_c__0_value, diff_r_0_c__0_value);
	// Produce: g
	g_g_update_0_write_bundle_write(compute_result, g, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "g_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void denoise2d_update_0(r1_cache& r1, f_cache& f, u_cache& u, g_cache& g, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */denoise2d, int d0, int d1) {
	// Consume: r1
	auto r1_0_c__0_value = r1_denoise2d_update_0_read_bundle_read(r1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "denoise2d_update_0_r1," << d0<< "," << d1<< "," <<  r1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: f
	auto f_0_c__0_value = f_denoise2d_update_0_read_bundle_read(f/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "denoise2d_update_0_f," << d0<< "," << d1<< "," <<  f_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: u
	auto u_0_c__0_value = u_denoise2d_update_0_read_bundle_read(u/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "denoise2d_update_0_u," << d0<< "," << d1<< "," <<  u_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: g
	auto g_0_c__0_value = g_denoise2d_update_0_read_bundle_read(g/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "denoise2d_update_0_g," << d0<< "," << d1<< "," <<  g_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = out_comp_dn2d_unrolled_1(r1_0_c__0_value, f_0_c__0_value, u_0_c__0_value, g_0_c__0_value);
	// Produce: denoise2d
	denoise2d.write(compute_result);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "denoise2d_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

// Driver function
void denoise2d_naive(HWStream<hw_uint<32> >& /* get_args num ports = 1 */f_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 1 */u_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 1 */denoise2d, int num_epochs) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("denoise2d_naive_debug.csv");
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
  for (int epoch = 0; epoch < num_epochs; epoch++) {
	{
	  for (int c1 = 0; c1 <= 29; c1 += 1)
	    for (int c2 = 0; c2 <= 29; c2 += 1)
	f_update_0(f_off_chip, f, c2, c1);
	  for (int c1 = -2; c1 <= 31; c1 += 1)
	    for (int c2 = -2; c2 <= 31; c2 += 1)
	u_update_0(u_off_chip, u, c2, c1);
	  for (int c1 = 0; c1 <= 29; c1 += 1)
	    for (int c2 = 0; c2 <= 29; c2 += 1)
	r0_update_0(u, f, r0, c2, c1);
	  for (int c1 = -1; c1 <= 30; c1 += 1)
	    for (int c2 = -1; c2 <= 30; c2 += 1)
	diff_r_update_0(u, diff_r, c2, c1);
	  for (int c1 = -1; c1 <= 30; c1 += 1)
	    for (int c2 = -1; c2 <= 30; c2 += 1)
	diff_qwe_update_0(u, diff_qwe, c2, c1);
	  for (int c1 = -1; c1 <= 30; c1 += 1)
	    for (int c2 = -1; c2 <= 30; c2 += 1)
	diff_l_update_0(u, diff_l, c2, c1);
	  for (int c1 = -1; c1 <= 30; c1 += 1)
	    for (int c2 = -1; c2 <= 30; c2 += 1)
	diff_d_update_0(u, diff_d, c2, c1);
	  for (int c1 = 0; c1 <= 29; c1 += 1)
	    for (int c2 = 0; c2 <= 29; c2 += 1)
	r1_update_0(r0, r1, c2, c1);
	  for (int c1 = -1; c1 <= 30; c1 += 1)
	    for (int c2 = -1; c2 <= 30; c2 += 1)
	g_update_0(diff_d, diff_l, diff_qwe, diff_r, g, c2, c1);
	  for (int c1 = 0; c1 <= 29; c1 += 1)
	    for (int c2 = 0; c2 <= 29; c2 += 1)
	denoise2d_update_0(r1, f, u, g, denoise2d, c2, c1);
	}
	
  }

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void denoise2d_naive(HWStream<hw_uint<32> >& /* get_args num ports = 1 */f_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 1 */u_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 1 */denoise2d) {

  denoise2d_naive(f_off_chip, u_off_chip, denoise2d, 1);
}
#ifdef __VIVADO_SYNTH__
#include "denoise2d_naive.h"

const int denoise2d_update_0_write_num_transfers = 900;
const int f_update_0_read_num_transfers = 900;
const int u_update_0_read_num_transfers = 1156;

// TODO: Adapt to have one size for each edge buffer
#define INPUT_SIZE 900
#define OUTPUT_SIZE 900
extern "C" {

static void read_f_update_0_read(hw_uint<32>* input, HWStream<hw_uint<32> >& v, const int size) {
  hw_uint<32> burst_reg;
  for (int i = 0; i < f_update_0_read_num_transfers*size; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void read_u_update_0_read(hw_uint<32>* input, HWStream<hw_uint<32> >& v, const int size) {
  hw_uint<32> burst_reg;
  for (int i = 0; i < u_update_0_read_num_transfers*size; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void write_denoise2d_update_0_write(hw_uint<32>* output, HWStream<hw_uint<32> >& v, const int size) {
  hw_uint<32> burst_reg;
  for (int i = 0; i < denoise2d_update_0_write_num_transfers*size; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

void denoise2d_naive_accel(hw_uint<32>* f_update_0_read, hw_uint<32>* u_update_0_read, hw_uint<32>* denoise2d_update_0_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = f_update_0_read offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = u_update_0_read offset = slave depth = 65536 bundle = gmem1
#pragma HLS INTERFACE m_axi port = denoise2d_update_0_write offset = slave depth = 65536 bundle = gmem2

#pragma HLS INTERFACE s_axilite port = f_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = u_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = denoise2d_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<32> > f_update_0_read_channel;
  static HWStream<hw_uint<32> > u_update_0_read_channel;
  static HWStream<hw_uint<32> > denoise2d_update_0_write_channel;

  read_f_update_0_read(f_update_0_read, f_update_0_read_channel, size);
  read_u_update_0_read(u_update_0_read, u_update_0_read_channel, size);

  denoise2d_naive(f_update_0_read_channel, u_update_0_read_channel, denoise2d_update_0_write_channel, size);

  write_denoise2d_update_0_write(denoise2d_update_0_write, denoise2d_update_0_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

