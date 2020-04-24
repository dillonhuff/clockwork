#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "blended_opt_compute_units.h"

#include "hw_classes.h"

struct blend_us_laplace_diff_0_blend_us_laplace_diff_0_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 31], [0, 31]}
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct blend_us_laplace_diff_0_cache {
  blend_us_laplace_diff_0_blend_us_laplace_diff_0_update_0_write0_merged_banks_1_cache blend_us_laplace_diff_0_blend_us_laplace_diff_0_update_0_write0_merged_banks_1;
};



inline void blend_us_laplace_diff_0_blend_us_laplace_diff_0_update_0_write0_write(hw_uint<32> & blend_us_laplace_diff_0_blend_us_laplace_diff_0_update_0_write0, blend_us_laplace_diff_0_cache& blend_us_laplace_diff_0, int d0, int d1) {
  blend_us_laplace_diff_0.blend_us_laplace_diff_0_blend_us_laplace_diff_0_update_0_write0_merged_banks_1.push(blend_us_laplace_diff_0_blend_us_laplace_diff_0_update_0_write0);
}

inline hw_uint<32>  blended_rd0_select(blend_us_laplace_diff_0_cache& blend_us_laplace_diff_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=blend_us_laplace_diff_0 inter false
#endif //__VIVADO_SYNTH__
  // blended_rd0 read pattern: { blended_update_0[d0, d1] -> blend_us_laplace_diff_0[d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { blended_update_0[d0, d1] -> [30 + d1, 30 + d0, 22] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { blend_us_laplace_diff_0_update_0[d0, d1] -> [30 + d1, 30 + d0, 21] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // DD fold: {  }
  auto value_blend_us_laplace_diff_0_blend_us_laplace_diff_0_update_0_write0 = blend_us_laplace_diff_0.blend_us_laplace_diff_0_blend_us_laplace_diff_0_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_blend_us_laplace_diff_0_blend_us_laplace_diff_0_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// blend_us_laplace_diff_0_update_0_write
//	blend_us_laplace_diff_0_blend_us_laplace_diff_0_update_0_write0
inline void blend_us_laplace_diff_0_blend_us_laplace_diff_0_update_0_write_bundle_write(hw_uint<32>& blend_us_laplace_diff_0_update_0_write, blend_us_laplace_diff_0_cache& blend_us_laplace_diff_0, int d0, int d1) {
	hw_uint<32>  blend_us_laplace_diff_0_blend_us_laplace_diff_0_update_0_write0_res = blend_us_laplace_diff_0_update_0_write.extract<0, 31>();
	blend_us_laplace_diff_0_blend_us_laplace_diff_0_update_0_write0_write(blend_us_laplace_diff_0_blend_us_laplace_diff_0_update_0_write0_res, blend_us_laplace_diff_0, d0, d1);
}

// blended_update_0_read
//	blended_rd0
inline hw_uint<32> blend_us_laplace_diff_0_blended_update_0_read_bundle_read(blend_us_laplace_diff_0_cache& blend_us_laplace_diff_0, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  blended_rd0_res = blended_rd0_select(blend_us_laplace_diff_0, d0, d1);
	set_at<0, 32>(result, blended_rd0_res);
	return result;
}

#include "hw_classes.h"

struct blend_us_laplace_diff_1_blend_us_laplace_diff_1_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 31], [0, 31]}
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct blend_us_laplace_diff_1_cache {
  blend_us_laplace_diff_1_blend_us_laplace_diff_1_update_0_write0_merged_banks_1_cache blend_us_laplace_diff_1_blend_us_laplace_diff_1_update_0_write0_merged_banks_1;
};



inline void blend_us_laplace_diff_1_blend_us_laplace_diff_1_update_0_write0_write(hw_uint<32> & blend_us_laplace_diff_1_blend_us_laplace_diff_1_update_0_write0, blend_us_laplace_diff_1_cache& blend_us_laplace_diff_1, int d0, int d1) {
  blend_us_laplace_diff_1.blend_us_laplace_diff_1_blend_us_laplace_diff_1_update_0_write0_merged_banks_1.push(blend_us_laplace_diff_1_blend_us_laplace_diff_1_update_0_write0);
}

inline hw_uint<32>  blended_rd0_select(blend_us_laplace_diff_1_cache& blend_us_laplace_diff_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=blend_us_laplace_diff_1 inter false
#endif //__VIVADO_SYNTH__
  // blended_rd0 read pattern: { blended_update_0[d0, d1] -> blend_us_laplace_diff_1[d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { blended_update_0[d0, d1] -> [30 + d1, 30 + d0, 22] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { blend_us_laplace_diff_1_update_0[d0, d1] -> [30 + d1, 30 + d0, 20] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // DD fold: {  }
  auto value_blend_us_laplace_diff_1_blend_us_laplace_diff_1_update_0_write0 = blend_us_laplace_diff_1.blend_us_laplace_diff_1_blend_us_laplace_diff_1_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_blend_us_laplace_diff_1_blend_us_laplace_diff_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// blend_us_laplace_diff_1_update_0_write
//	blend_us_laplace_diff_1_blend_us_laplace_diff_1_update_0_write0
inline void blend_us_laplace_diff_1_blend_us_laplace_diff_1_update_0_write_bundle_write(hw_uint<32>& blend_us_laplace_diff_1_update_0_write, blend_us_laplace_diff_1_cache& blend_us_laplace_diff_1, int d0, int d1) {
	hw_uint<32>  blend_us_laplace_diff_1_blend_us_laplace_diff_1_update_0_write0_res = blend_us_laplace_diff_1_update_0_write.extract<0, 31>();
	blend_us_laplace_diff_1_blend_us_laplace_diff_1_update_0_write0_write(blend_us_laplace_diff_1_blend_us_laplace_diff_1_update_0_write0_res, blend_us_laplace_diff_1, d0, d1);
}

// blended_update_0_read
//	blended_rd0
inline hw_uint<32> blend_us_laplace_diff_1_blended_update_0_read_bundle_read(blend_us_laplace_diff_1_cache& blend_us_laplace_diff_1, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  blended_rd0_res = blended_rd0_select(blend_us_laplace_diff_1, d0, d1);
	set_at<0, 32>(result, blended_rd0_res);
	return result;
}

#include "hw_classes.h"

struct blend_us_laplace_diff_2_blend_us_laplace_diff_2_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 31], [0, 31]}
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct blend_us_laplace_diff_2_cache {
  blend_us_laplace_diff_2_blend_us_laplace_diff_2_update_0_write0_merged_banks_1_cache blend_us_laplace_diff_2_blend_us_laplace_diff_2_update_0_write0_merged_banks_1;
};



inline void blend_us_laplace_diff_2_blend_us_laplace_diff_2_update_0_write0_write(hw_uint<32> & blend_us_laplace_diff_2_blend_us_laplace_diff_2_update_0_write0, blend_us_laplace_diff_2_cache& blend_us_laplace_diff_2, int d0, int d1) {
  blend_us_laplace_diff_2.blend_us_laplace_diff_2_blend_us_laplace_diff_2_update_0_write0_merged_banks_1.push(blend_us_laplace_diff_2_blend_us_laplace_diff_2_update_0_write0);
}

inline hw_uint<32>  blended_rd0_select(blend_us_laplace_diff_2_cache& blend_us_laplace_diff_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=blend_us_laplace_diff_2 inter false
#endif //__VIVADO_SYNTH__
  // blended_rd0 read pattern: { blended_update_0[d0, d1] -> blend_us_laplace_diff_2[d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { blended_update_0[d0, d1] -> [30 + d1, 30 + d0, 22] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { blend_us_laplace_diff_2_update_0[d0, d1] -> [30 + d1, 30 + d0, 19] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // DD fold: {  }
  auto value_blend_us_laplace_diff_2_blend_us_laplace_diff_2_update_0_write0 = blend_us_laplace_diff_2.blend_us_laplace_diff_2_blend_us_laplace_diff_2_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_blend_us_laplace_diff_2_blend_us_laplace_diff_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// blend_us_laplace_diff_2_update_0_write
//	blend_us_laplace_diff_2_blend_us_laplace_diff_2_update_0_write0
inline void blend_us_laplace_diff_2_blend_us_laplace_diff_2_update_0_write_bundle_write(hw_uint<32>& blend_us_laplace_diff_2_update_0_write, blend_us_laplace_diff_2_cache& blend_us_laplace_diff_2, int d0, int d1) {
	hw_uint<32>  blend_us_laplace_diff_2_blend_us_laplace_diff_2_update_0_write0_res = blend_us_laplace_diff_2_update_0_write.extract<0, 31>();
	blend_us_laplace_diff_2_blend_us_laplace_diff_2_update_0_write0_write(blend_us_laplace_diff_2_blend_us_laplace_diff_2_update_0_write0_res, blend_us_laplace_diff_2, d0, d1);
}

// blended_update_0_read
//	blended_rd0
inline hw_uint<32> blend_us_laplace_diff_2_blended_update_0_read_bundle_read(blend_us_laplace_diff_2_cache& blend_us_laplace_diff_2, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  blended_rd0_res = blended_rd0_select(blend_us_laplace_diff_2, d0, d1);
	set_at<0, 32>(result, blended_rd0_res);
	return result;
}

#include "hw_classes.h"

struct blend_us_laplace_diff_3_blend_us_laplace_diff_3_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 31], [0, 31]}
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct blend_us_laplace_diff_3_cache {
  blend_us_laplace_diff_3_blend_us_laplace_diff_3_update_0_write0_merged_banks_1_cache blend_us_laplace_diff_3_blend_us_laplace_diff_3_update_0_write0_merged_banks_1;
};



inline void blend_us_laplace_diff_3_blend_us_laplace_diff_3_update_0_write0_write(hw_uint<32> & blend_us_laplace_diff_3_blend_us_laplace_diff_3_update_0_write0, blend_us_laplace_diff_3_cache& blend_us_laplace_diff_3, int d0, int d1) {
  blend_us_laplace_diff_3.blend_us_laplace_diff_3_blend_us_laplace_diff_3_update_0_write0_merged_banks_1.push(blend_us_laplace_diff_3_blend_us_laplace_diff_3_update_0_write0);
}

inline hw_uint<32>  blended_rd0_select(blend_us_laplace_diff_3_cache& blend_us_laplace_diff_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=blend_us_laplace_diff_3 inter false
#endif //__VIVADO_SYNTH__
  // blended_rd0 read pattern: { blended_update_0[d0, d1] -> blend_us_laplace_diff_3[d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { blended_update_0[d0, d1] -> [30 + d1, 30 + d0, 22] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { blend_us_laplace_diff_3_update_0[d0, d1] -> [30 + d1, 30 + d0, 18] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // DD fold: {  }
  auto value_blend_us_laplace_diff_3_blend_us_laplace_diff_3_update_0_write0 = blend_us_laplace_diff_3.blend_us_laplace_diff_3_blend_us_laplace_diff_3_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_blend_us_laplace_diff_3_blend_us_laplace_diff_3_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// blend_us_laplace_diff_3_update_0_write
//	blend_us_laplace_diff_3_blend_us_laplace_diff_3_update_0_write0
inline void blend_us_laplace_diff_3_blend_us_laplace_diff_3_update_0_write_bundle_write(hw_uint<32>& blend_us_laplace_diff_3_update_0_write, blend_us_laplace_diff_3_cache& blend_us_laplace_diff_3, int d0, int d1) {
	hw_uint<32>  blend_us_laplace_diff_3_blend_us_laplace_diff_3_update_0_write0_res = blend_us_laplace_diff_3_update_0_write.extract<0, 31>();
	blend_us_laplace_diff_3_blend_us_laplace_diff_3_update_0_write0_write(blend_us_laplace_diff_3_blend_us_laplace_diff_3_update_0_write0_res, blend_us_laplace_diff_3, d0, d1);
}

// blended_update_0_read
//	blended_rd0
inline hw_uint<32> blend_us_laplace_diff_3_blended_update_0_read_bundle_read(blend_us_laplace_diff_3_cache& blend_us_laplace_diff_3, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  blended_rd0_res = blended_rd0_select(blend_us_laplace_diff_3, d0, d1);
	set_at<0, 32>(result, blended_rd0_res);
	return result;
}

#include "hw_classes.h"

struct gauss_blur_1_gauss_blur_1_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 44], [0, 44]}
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_blur_1_cache {
  gauss_blur_1_gauss_blur_1_update_0_write0_merged_banks_1_cache gauss_blur_1_gauss_blur_1_update_0_write0_merged_banks_1;
};



inline void gauss_blur_1_gauss_blur_1_update_0_write0_write(hw_uint<32> & gauss_blur_1_gauss_blur_1_update_0_write0, gauss_blur_1_cache& gauss_blur_1, int d0, int d1) {
  gauss_blur_1.gauss_blur_1_gauss_blur_1_update_0_write0_merged_banks_1.push(gauss_blur_1_gauss_blur_1_update_0_write0);
}

inline hw_uint<32>  gauss_ds_1_rd0_select(gauss_blur_1_cache& gauss_blur_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_blur_1 inter false
#endif //__VIVADO_SYNTH__
  // gauss_ds_1_rd0 read pattern: { gauss_ds_1_update_0[d0, d1] -> gauss_blur_1[2d0, 2d1] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
  // Read schedule : { gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 3] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
  // Write schedule: { gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : 0 <= d0 <= 44 and 0 <= d1 <= 44 }
  // DD fold: {  }
  auto value_gauss_blur_1_gauss_blur_1_update_0_write0 = gauss_blur_1.gauss_blur_1_gauss_blur_1_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_gauss_blur_1_gauss_blur_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// gauss_blur_1_update_0_write
//	gauss_blur_1_gauss_blur_1_update_0_write0
inline void gauss_blur_1_gauss_blur_1_update_0_write_bundle_write(hw_uint<32>& gauss_blur_1_update_0_write, gauss_blur_1_cache& gauss_blur_1, int d0, int d1) {
	hw_uint<32>  gauss_blur_1_gauss_blur_1_update_0_write0_res = gauss_blur_1_update_0_write.extract<0, 31>();
	gauss_blur_1_gauss_blur_1_update_0_write0_write(gauss_blur_1_gauss_blur_1_update_0_write0_res, gauss_blur_1, d0, d1);
}

// gauss_ds_1_update_0_read
//	gauss_ds_1_rd0
inline hw_uint<32> gauss_blur_1_gauss_ds_1_update_0_read_bundle_read(gauss_blur_1_cache& gauss_blur_1, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  gauss_ds_1_rd0_res = gauss_ds_1_rd0_select(gauss_blur_1, d0, d1);
	set_at<0, 32>(result, gauss_ds_1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct gauss_blur_2_gauss_blur_2_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 20], [0, 20]}
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_blur_2_cache {
  gauss_blur_2_gauss_blur_2_update_0_write0_merged_banks_1_cache gauss_blur_2_gauss_blur_2_update_0_write0_merged_banks_1;
};



inline void gauss_blur_2_gauss_blur_2_update_0_write0_write(hw_uint<32> & gauss_blur_2_gauss_blur_2_update_0_write0, gauss_blur_2_cache& gauss_blur_2, int d0, int d1) {
  gauss_blur_2.gauss_blur_2_gauss_blur_2_update_0_write0_merged_banks_1.push(gauss_blur_2_gauss_blur_2_update_0_write0);
}

inline hw_uint<32>  gauss_ds_2_rd0_select(gauss_blur_2_cache& gauss_blur_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_blur_2 inter false
#endif //__VIVADO_SYNTH__
  // gauss_ds_2_rd0 read pattern: { gauss_ds_2_update_0[d0, d1] -> gauss_blur_2[2d0, 2d1] : 0 <= d0 <= 10 and 0 <= d1 <= 10 }
  // Read schedule : { gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 5] : 0 <= d0 <= 10 and 0 <= d1 <= 10 }
  // Write schedule: { gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 4] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // DD fold: {  }
  auto value_gauss_blur_2_gauss_blur_2_update_0_write0 = gauss_blur_2.gauss_blur_2_gauss_blur_2_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_gauss_blur_2_gauss_blur_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// gauss_blur_2_update_0_write
//	gauss_blur_2_gauss_blur_2_update_0_write0
inline void gauss_blur_2_gauss_blur_2_update_0_write_bundle_write(hw_uint<32>& gauss_blur_2_update_0_write, gauss_blur_2_cache& gauss_blur_2, int d0, int d1) {
	hw_uint<32>  gauss_blur_2_gauss_blur_2_update_0_write0_res = gauss_blur_2_update_0_write.extract<0, 31>();
	gauss_blur_2_gauss_blur_2_update_0_write0_write(gauss_blur_2_gauss_blur_2_update_0_write0_res, gauss_blur_2, d0, d1);
}

// gauss_ds_2_update_0_read
//	gauss_ds_2_rd0
inline hw_uint<32> gauss_blur_2_gauss_ds_2_update_0_read_bundle_read(gauss_blur_2_cache& gauss_blur_2, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  gauss_ds_2_rd0_res = gauss_ds_2_rd0_select(gauss_blur_2, d0, d1);
	set_at<0, 32>(result, gauss_ds_2_rd0_res);
	return result;
}

#include "hw_classes.h"

struct gauss_blur_3_gauss_blur_3_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 8], [0, 8]}
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_blur_3_cache {
  gauss_blur_3_gauss_blur_3_update_0_write0_merged_banks_1_cache gauss_blur_3_gauss_blur_3_update_0_write0_merged_banks_1;
};



inline void gauss_blur_3_gauss_blur_3_update_0_write0_write(hw_uint<32> & gauss_blur_3_gauss_blur_3_update_0_write0, gauss_blur_3_cache& gauss_blur_3, int d0, int d1) {
  gauss_blur_3.gauss_blur_3_gauss_blur_3_update_0_write0_merged_banks_1.push(gauss_blur_3_gauss_blur_3_update_0_write0);
}

inline hw_uint<32>  gauss_ds_3_rd0_select(gauss_blur_3_cache& gauss_blur_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_blur_3 inter false
#endif //__VIVADO_SYNTH__
  // gauss_ds_3_rd0 read pattern: { gauss_ds_3_update_0[d0, d1] -> gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 4 and 0 <= d1 <= 4 }
  // Read schedule : { gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 14 + 8d0, 7] : 0 <= d0 <= 4 and 0 <= d1 <= 4 }
  // Write schedule: { gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 6] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // DD fold: {  }
  auto value_gauss_blur_3_gauss_blur_3_update_0_write0 = gauss_blur_3.gauss_blur_3_gauss_blur_3_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_gauss_blur_3_gauss_blur_3_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// gauss_blur_3_update_0_write
//	gauss_blur_3_gauss_blur_3_update_0_write0
inline void gauss_blur_3_gauss_blur_3_update_0_write_bundle_write(hw_uint<32>& gauss_blur_3_update_0_write, gauss_blur_3_cache& gauss_blur_3, int d0, int d1) {
	hw_uint<32>  gauss_blur_3_gauss_blur_3_update_0_write0_res = gauss_blur_3_update_0_write.extract<0, 31>();
	gauss_blur_3_gauss_blur_3_update_0_write0_write(gauss_blur_3_gauss_blur_3_update_0_write0_res, gauss_blur_3, d0, d1);
}

// gauss_ds_3_update_0_read
//	gauss_ds_3_rd0
inline hw_uint<32> gauss_blur_3_gauss_ds_3_update_0_read_bundle_read(gauss_blur_3_cache& gauss_blur_3, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  gauss_ds_3_rd0_res = gauss_ds_3_rd0_select(gauss_blur_3, d0, d1);
	set_at<0, 32>(result, gauss_ds_3_rd0_res);
	return result;
}

#include "hw_classes.h"

struct gauss_blur_4_gauss_blur_4_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 2], [0, 2]}
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_blur_4_cache {
  gauss_blur_4_gauss_blur_4_update_0_write0_merged_banks_1_cache gauss_blur_4_gauss_blur_4_update_0_write0_merged_banks_1;
};



inline void gauss_blur_4_gauss_blur_4_update_0_write0_write(hw_uint<32> & gauss_blur_4_gauss_blur_4_update_0_write0, gauss_blur_4_cache& gauss_blur_4, int d0, int d1) {
  gauss_blur_4.gauss_blur_4_gauss_blur_4_update_0_write0_merged_banks_1.push(gauss_blur_4_gauss_blur_4_update_0_write0);
}

inline hw_uint<32>  gauss_ds_4_rd0_select(gauss_blur_4_cache& gauss_blur_4, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_blur_4 inter false
#endif //__VIVADO_SYNTH__
  // gauss_ds_4_rd0 read pattern: { gauss_ds_4_update_0[d0, d1] -> gauss_blur_4[2d0, 2d1] : 0 <= d0 <= 1 and 0 <= d1 <= 1 }
  // Read schedule : { gauss_ds_4_update_0[d0, d1] -> [30 + 16d1, 30 + 16d0, 9] : 0 <= d0 <= 1 and 0 <= d1 <= 1 }
  // Write schedule: { gauss_blur_4_update_0[d0, d1] -> [30 + 8d1, 30 + 8d0, 8] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // DD fold: {  }
  auto value_gauss_blur_4_gauss_blur_4_update_0_write0 = gauss_blur_4.gauss_blur_4_gauss_blur_4_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_gauss_blur_4_gauss_blur_4_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// gauss_blur_4_update_0_write
//	gauss_blur_4_gauss_blur_4_update_0_write0
inline void gauss_blur_4_gauss_blur_4_update_0_write_bundle_write(hw_uint<32>& gauss_blur_4_update_0_write, gauss_blur_4_cache& gauss_blur_4, int d0, int d1) {
	hw_uint<32>  gauss_blur_4_gauss_blur_4_update_0_write0_res = gauss_blur_4_update_0_write.extract<0, 31>();
	gauss_blur_4_gauss_blur_4_update_0_write0_write(gauss_blur_4_gauss_blur_4_update_0_write0_res, gauss_blur_4, d0, d1);
}

// gauss_ds_4_update_0_read
//	gauss_ds_4_rd0
inline hw_uint<32> gauss_blur_4_gauss_ds_4_update_0_read_bundle_read(gauss_blur_4_cache& gauss_blur_4, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  gauss_ds_4_rd0_res = gauss_ds_4_rd0_select(gauss_blur_4, d0, d1);
	set_at<0, 32>(result, gauss_ds_4_rd0_res);
	return result;
}

#include "hw_classes.h"

struct gauss_ds_1_gauss_ds_1_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 49
	// # of read delays: 9
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 20> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 20> f11;
	hw_uint<32>  f12;
	hw_uint<32>  f14;
	hw_uint<32>  f16;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_2() {
		return f4;
	}

	inline hw_uint<32>  peek_22() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f5 inter false
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_23() {
		return f6;
	}

	inline hw_uint<32>  peek_24() {
		return f8;
	}

	inline hw_uint<32>  peek_25() {
		return f10;
	}

	inline hw_uint<32>  peek_45() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f11 inter false
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_46() {
		return f12;
	}

	inline hw_uint<32>  peek_47() {
		return f14;
	}

	inline hw_uint<32>  peek_48() {
		return f16;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f16 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f14 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f12 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 20
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f11 inter false
#endif //__VIVADO_SYNTH__
    // cap: 20 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f10 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f8 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f6 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 20
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f5 inter false
#endif //__VIVADO_SYNTH__
    // cap: 20 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f4 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f2 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct gauss_ds_1_gauss_ds_1_update_0_write0_to_laplace_diff_1_rd0_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 337
	// # of read delays: 170
	fifo<hw_uint<32> , 337> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(336 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_ds_1_gauss_ds_1_update_0_write0_to_laplace_us_0_rd0_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 345
	// # of read delays: 190
	fifo<hw_uint<32> , 345> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(344 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_ds_1_cache {
  gauss_ds_1_gauss_ds_1_update_0_write0_merged_banks_9_cache gauss_ds_1_gauss_ds_1_update_0_write0_merged_banks_9;
  gauss_ds_1_gauss_ds_1_update_0_write0_to_laplace_diff_1_rd0_cache gauss_ds_1_gauss_ds_1_update_0_write0_to_laplace_diff_1_rd0;
  gauss_ds_1_gauss_ds_1_update_0_write0_to_laplace_us_0_rd0_cache gauss_ds_1_gauss_ds_1_update_0_write0_to_laplace_us_0_rd0;
};



inline void gauss_ds_1_gauss_ds_1_update_0_write0_write(hw_uint<32> & gauss_ds_1_gauss_ds_1_update_0_write0, gauss_ds_1_cache& gauss_ds_1, int d0, int d1) {
  gauss_ds_1.gauss_ds_1_gauss_ds_1_update_0_write0_merged_banks_9.push(gauss_ds_1_gauss_ds_1_update_0_write0);
  gauss_ds_1.gauss_ds_1_gauss_ds_1_update_0_write0_to_laplace_diff_1_rd0.push(gauss_ds_1_gauss_ds_1_update_0_write0);
  gauss_ds_1.gauss_ds_1_gauss_ds_1_update_0_write0_to_laplace_us_0_rd0.push(gauss_ds_1_gauss_ds_1_update_0_write0);
}

inline hw_uint<32>  gauss_blur_2_rd0_select(gauss_ds_1_cache& gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_1 inter false
#endif //__VIVADO_SYNTH__
  // gauss_blur_2_rd0 read pattern: { gauss_blur_2_update_0[d0, d1] -> gauss_ds_1[d0, d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 4] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Write schedule: { gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 3] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
  // DD fold: { gauss_blur_2_update_0[d0, d1] -> 48 : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  auto value_gauss_ds_1_gauss_ds_1_update_0_write0 = gauss_ds_1.gauss_ds_1_gauss_ds_1_update_0_write0_merged_banks_9.peek_48();
  return value_gauss_ds_1_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  gauss_blur_2_rd1_select(gauss_ds_1_cache& gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_1 inter false
#endif //__VIVADO_SYNTH__
  // gauss_blur_2_rd1 read pattern: { gauss_blur_2_update_0[d0, d1] -> gauss_ds_1[d0, 1 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 4] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Write schedule: { gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 3] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
  // DD fold: { gauss_blur_2_update_0[d0, d1] -> 25 : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  auto value_gauss_ds_1_gauss_ds_1_update_0_write0 = gauss_ds_1.gauss_ds_1_gauss_ds_1_update_0_write0_merged_banks_9.peek_25();
  return value_gauss_ds_1_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  gauss_blur_2_rd2_select(gauss_ds_1_cache& gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_1 inter false
#endif //__VIVADO_SYNTH__
  // gauss_blur_2_rd2 read pattern: { gauss_blur_2_update_0[d0, d1] -> gauss_ds_1[d0, 2 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 4] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Write schedule: { gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 3] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
  // DD fold: { gauss_blur_2_update_0[d0, d1] -> 2 : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  auto value_gauss_ds_1_gauss_ds_1_update_0_write0 = gauss_ds_1.gauss_ds_1_gauss_ds_1_update_0_write0_merged_banks_9.peek_2();
  return value_gauss_ds_1_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  gauss_blur_2_rd3_select(gauss_ds_1_cache& gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_1 inter false
#endif //__VIVADO_SYNTH__
  // gauss_blur_2_rd3 read pattern: { gauss_blur_2_update_0[d0, d1] -> gauss_ds_1[1 + d0, d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 4] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Write schedule: { gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 3] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
  // DD fold: { gauss_blur_2_update_0[d0, d1] -> 47 : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  auto value_gauss_ds_1_gauss_ds_1_update_0_write0 = gauss_ds_1.gauss_ds_1_gauss_ds_1_update_0_write0_merged_banks_9.peek_47();
  return value_gauss_ds_1_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  gauss_blur_2_rd4_select(gauss_ds_1_cache& gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_1 inter false
#endif //__VIVADO_SYNTH__
  // gauss_blur_2_rd4 read pattern: { gauss_blur_2_update_0[d0, d1] -> gauss_ds_1[1 + d0, 1 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 4] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Write schedule: { gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 3] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
  // DD fold: { gauss_blur_2_update_0[d0, d1] -> 24 : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  auto value_gauss_ds_1_gauss_ds_1_update_0_write0 = gauss_ds_1.gauss_ds_1_gauss_ds_1_update_0_write0_merged_banks_9.peek_24();
  return value_gauss_ds_1_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  gauss_blur_2_rd5_select(gauss_ds_1_cache& gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_1 inter false
#endif //__VIVADO_SYNTH__
  // gauss_blur_2_rd5 read pattern: { gauss_blur_2_update_0[d0, d1] -> gauss_ds_1[1 + d0, 2 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 4] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Write schedule: { gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 3] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
  // DD fold: { gauss_blur_2_update_0[d0, d1] -> 1 : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  auto value_gauss_ds_1_gauss_ds_1_update_0_write0 = gauss_ds_1.gauss_ds_1_gauss_ds_1_update_0_write0_merged_banks_9.peek_1();
  return value_gauss_ds_1_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  gauss_blur_2_rd6_select(gauss_ds_1_cache& gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_1 inter false
#endif //__VIVADO_SYNTH__
  // gauss_blur_2_rd6 read pattern: { gauss_blur_2_update_0[d0, d1] -> gauss_ds_1[2 + d0, d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 4] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Write schedule: { gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 3] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
  // DD fold: { gauss_blur_2_update_0[d0, d1] -> 46 : 0 <= d0 <= 19 and 0 <= d1 <= 20; gauss_blur_2_update_0[d0, d1] -> (26 + d0) : d0 = 20 and 0 <= d1 <= 20 }
  auto value_gauss_ds_1_gauss_ds_1_update_0_write0 = gauss_ds_1.gauss_ds_1_gauss_ds_1_update_0_write0_merged_banks_9.peek_46();
  return value_gauss_ds_1_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  gauss_blur_2_rd7_select(gauss_ds_1_cache& gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_1 inter false
#endif //__VIVADO_SYNTH__
  // gauss_blur_2_rd7 read pattern: { gauss_blur_2_update_0[d0, d1] -> gauss_ds_1[2 + d0, 1 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 4] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Write schedule: { gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 3] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
  // DD fold: { gauss_blur_2_update_0[d0, d1] -> 23 : 0 <= d0 <= 19 and 0 <= d1 <= 20; gauss_blur_2_update_0[d0, d1] -> (3 + d0) : d0 = 20 and 0 <= d1 <= 20 }
  auto value_gauss_ds_1_gauss_ds_1_update_0_write0 = gauss_ds_1.gauss_ds_1_gauss_ds_1_update_0_write0_merged_banks_9.peek_23();
  return value_gauss_ds_1_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  gauss_blur_2_rd8_select(gauss_ds_1_cache& gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_1 inter false
#endif //__VIVADO_SYNTH__
  // gauss_blur_2_rd8 read pattern: { gauss_blur_2_update_0[d0, d1] -> gauss_ds_1[2 + d0, 2 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 4] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Write schedule: { gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 3] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
  // DD fold: {  }
  auto value_gauss_ds_1_gauss_ds_1_update_0_write0 = gauss_ds_1.gauss_ds_1_gauss_ds_1_update_0_write0_merged_banks_9.peek_0();
  return value_gauss_ds_1_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  laplace_diff_1_rd0_select(gauss_ds_1_cache& gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_1 inter false
#endif //__VIVADO_SYNTH__
  // laplace_diff_1_rd0 read pattern: { laplace_diff_1_update_0[d0, d1] -> gauss_ds_1[d0, d1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  // Read schedule : { laplace_diff_1_update_0[d0, d1] -> [30 + 2d1, 30 + 2d0, 16] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  // Write schedule: { gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 3] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
  // DD fold: { laplace_diff_1_update_0[d0, d1] -> ((528 - d0) - 23 * d1) : 0 <= d0 <= 15 and 10 <= d1 <= 15; laplace_diff_1_update_0[d0, d1] -> (344 - d0) : 10 <= d0 <= 15 and 0 <= d1 <= 8; laplace_diff_1_update_0[d0, d1] -> 336 : 0 <= d0 <= 8 and 0 <= d1 <= 8; laplace_diff_1_update_0[d0, d1] -> 335 : d0 = 9 and 0 <= d1 <= 8; laplace_diff_1_update_0[d0, d1] -> (321 - d0) : d1 = 9 and 0 <= d0 <= 15 and (d0 >= 10 or d0 <= 9) }
  auto value_gauss_ds_1_gauss_ds_1_update_0_write0 = gauss_ds_1.gauss_ds_1_gauss_ds_1_update_0_write0_to_laplace_diff_1_rd0.peek(/* one reader or all rams */ (-9 + d0 == 0 && 8 - d1 >= 0) ? (335) : (8 - d1 >= 0 && 8 - d0 >= 0) ? (336) : (-9 + d1 == 0) ? ((321 - d0)) : (-10 + d0 >= 0 && 8 - d1 >= 0) ? ((344 - d0)) : (-10 + d1 >= 0) ? (((528 - d0) - 23 * d1)) : 0);
  return value_gauss_ds_1_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  laplace_us_0_rd0_select(gauss_ds_1_cache& gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_1 inter false
#endif //__VIVADO_SYNTH__
  // laplace_us_0_rd0 read pattern: { laplace_us_0_update_0[d0, d1] -> gauss_ds_1[o0, o1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { laplace_us_0_update_0[d0, d1] -> [30 + d1, 30 + d0, 13] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 3] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
  // DD fold: { laplace_us_0_update_0[d0, d1] -> ((528 - floor((d0)/2)) - 23 * floor((d1)/2)) : 0 <= d0 <= 31 and 18 <= d1 <= 31; laplace_us_0_update_0[d0, d1] -> (344 - floor((d0)/2)) : (d1) mod 2 = 0 and 18 <= d0 <= 31 and 2 <= d1 <= 16; laplace_us_0_update_0[d0, d1] -> (344 - floor((d0)/2)) : (d1) mod 2 = 0 and 18 <= d0 <= 31 and 0 <= d1 <= 1; laplace_us_0_update_0[d0, d1] -> 336 : (d0) mod 2 = 0 and (d1) mod 2 = 0 and 0 <= d0 <= 16 and 2 <= d1 <= 16; laplace_us_0_update_0[d0, d1] -> 336 : (d0) mod 2 = 0 and (d1) mod 2 = 0 and 0 <= d0 <= 16 and 0 <= d1 <= 1; laplace_us_0_update_0[d0, d1] -> 336 : (1 + d0) mod 2 = 0 and (d1) mod 2 = 0 and 0 <= d0 <= 17 and 2 <= d1 <= 16; laplace_us_0_update_0[d0, d1] -> 336 : (1 + d0) mod 2 = 0 and (d1) mod 2 = 0 and 0 <= d0 <= 17 and 0 <= d1 <= 1; laplace_us_0_update_0[d0, d1] -> (344 - floor((d0)/2)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 31 and 2 <= d1 <= 17; laplace_us_0_update_0[d0, d1] -> (344 - floor((d0)/2)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 31 and 0 <= d1 <= 1 }
  auto value_gauss_ds_1_gauss_ds_1_update_0_write0 = gauss_ds_1.gauss_ds_1_gauss_ds_1_update_0_write0_to_laplace_us_0_rd0.peek(/* one reader or all rams */ ((d1 == 0 && -18 + d0 >= 0) || (-1 + d1 == 0)) ? ((344 - floord(d0, 2))) : (d1 == 0 && 17 - d0 >= 0) ? (336) : (((-d1) % 2 == 0 && -18 + d0 >= 0 && -2 + d1 >= 0 && 16 - d1 >= 0) || ((-1 - d1) % 2 == 0 && -3 + d1 >= 0 && 17 - d1 >= 0)) ? ((344 - floord(d0, 2))) : (-18 + d1 >= 0) ? (((528 - floord(d0, 2)) - 23 * floord(d1, 2))) : ((-d1) % 2 == 0 && 17 - d0 >= 0 && -2 + d1 >= 0 && 16 - d1 >= 0) ? (336) : 0);
  return value_gauss_ds_1_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 4
// gauss_blur_2_update_0_read
//	gauss_blur_2_rd0
//	gauss_blur_2_rd1
//	gauss_blur_2_rd2
//	gauss_blur_2_rd3
//	gauss_blur_2_rd4
//	gauss_blur_2_rd5
//	gauss_blur_2_rd6
//	gauss_blur_2_rd7
//	gauss_blur_2_rd8
inline hw_uint<288> gauss_ds_1_gauss_blur_2_update_0_read_bundle_read(gauss_ds_1_cache& gauss_ds_1, int d0, int d1) {
	hw_uint<288> result;
	hw_uint<32>  gauss_blur_2_rd0_res = gauss_blur_2_rd0_select(gauss_ds_1, d0, d1);
	set_at<0, 288>(result, gauss_blur_2_rd0_res);
	hw_uint<32>  gauss_blur_2_rd1_res = gauss_blur_2_rd1_select(gauss_ds_1, d0, d1);
	set_at<32, 288>(result, gauss_blur_2_rd1_res);
	hw_uint<32>  gauss_blur_2_rd2_res = gauss_blur_2_rd2_select(gauss_ds_1, d0, d1);
	set_at<64, 288>(result, gauss_blur_2_rd2_res);
	hw_uint<32>  gauss_blur_2_rd3_res = gauss_blur_2_rd3_select(gauss_ds_1, d0, d1);
	set_at<96, 288>(result, gauss_blur_2_rd3_res);
	hw_uint<32>  gauss_blur_2_rd4_res = gauss_blur_2_rd4_select(gauss_ds_1, d0, d1);
	set_at<128, 288>(result, gauss_blur_2_rd4_res);
	hw_uint<32>  gauss_blur_2_rd5_res = gauss_blur_2_rd5_select(gauss_ds_1, d0, d1);
	set_at<160, 288>(result, gauss_blur_2_rd5_res);
	hw_uint<32>  gauss_blur_2_rd6_res = gauss_blur_2_rd6_select(gauss_ds_1, d0, d1);
	set_at<192, 288>(result, gauss_blur_2_rd6_res);
	hw_uint<32>  gauss_blur_2_rd7_res = gauss_blur_2_rd7_select(gauss_ds_1, d0, d1);
	set_at<224, 288>(result, gauss_blur_2_rd7_res);
	hw_uint<32>  gauss_blur_2_rd8_res = gauss_blur_2_rd8_select(gauss_ds_1, d0, d1);
	set_at<256, 288>(result, gauss_blur_2_rd8_res);
	return result;
}

// gauss_ds_1_update_0_write
//	gauss_ds_1_gauss_ds_1_update_0_write0
inline void gauss_ds_1_gauss_ds_1_update_0_write_bundle_write(hw_uint<32>& gauss_ds_1_update_0_write, gauss_ds_1_cache& gauss_ds_1, int d0, int d1) {
	hw_uint<32>  gauss_ds_1_gauss_ds_1_update_0_write0_res = gauss_ds_1_update_0_write.extract<0, 31>();
	gauss_ds_1_gauss_ds_1_update_0_write0_write(gauss_ds_1_gauss_ds_1_update_0_write0_res, gauss_ds_1, d0, d1);
}

// laplace_diff_1_update_0_read
//	laplace_diff_1_rd0
inline hw_uint<32> gauss_ds_1_laplace_diff_1_update_0_read_bundle_read(gauss_ds_1_cache& gauss_ds_1, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  laplace_diff_1_rd0_res = laplace_diff_1_rd0_select(gauss_ds_1, d0, d1);
	set_at<0, 32>(result, laplace_diff_1_rd0_res);
	return result;
}

// laplace_us_0_update_0_read
//	laplace_us_0_rd0
inline hw_uint<32> gauss_ds_1_laplace_us_0_update_0_read_bundle_read(gauss_ds_1_cache& gauss_ds_1, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  laplace_us_0_rd0_res = laplace_us_0_rd0_select(gauss_ds_1, d0, d1);
	set_at<0, 32>(result, laplace_us_0_rd0_res);
	return result;
}

#include "hw_classes.h"

struct gauss_ds_2_gauss_ds_2_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 25
	// # of read delays: 9
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 8> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 8> f11;
	hw_uint<32>  f12;
	hw_uint<32>  f14;
	hw_uint<32>  f16;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_2() {
		return f4;
	}

	inline hw_uint<32>  peek_10() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f5 inter false
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_11() {
		return f6;
	}

	inline hw_uint<32>  peek_12() {
		return f8;
	}

	inline hw_uint<32>  peek_13() {
		return f10;
	}

	inline hw_uint<32>  peek_21() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f11 inter false
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_22() {
		return f12;
	}

	inline hw_uint<32>  peek_23() {
		return f14;
	}

	inline hw_uint<32>  peek_24() {
		return f16;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f16 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f14 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f12 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 8
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f11 inter false
#endif //__VIVADO_SYNTH__
    // cap: 8 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f10 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f8 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f6 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 8
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f5 inter false
#endif //__VIVADO_SYNTH__
    // cap: 8 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f4 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f2 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct gauss_ds_2_gauss_ds_2_update_0_write0_to_laplace_diff_2_rd0_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 73
	// # of read delays: 38
	fifo<hw_uint<32> , 73> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(72 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_ds_2_gauss_ds_2_update_0_write0_to_laplace_us_1_rd0_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 77
	// # of read delays: 48
	fifo<hw_uint<32> , 77> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(76 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_ds_2_cache {
  gauss_ds_2_gauss_ds_2_update_0_write0_merged_banks_9_cache gauss_ds_2_gauss_ds_2_update_0_write0_merged_banks_9;
  gauss_ds_2_gauss_ds_2_update_0_write0_to_laplace_diff_2_rd0_cache gauss_ds_2_gauss_ds_2_update_0_write0_to_laplace_diff_2_rd0;
  gauss_ds_2_gauss_ds_2_update_0_write0_to_laplace_us_1_rd0_cache gauss_ds_2_gauss_ds_2_update_0_write0_to_laplace_us_1_rd0;
};



inline void gauss_ds_2_gauss_ds_2_update_0_write0_write(hw_uint<32> & gauss_ds_2_gauss_ds_2_update_0_write0, gauss_ds_2_cache& gauss_ds_2, int d0, int d1) {
  gauss_ds_2.gauss_ds_2_gauss_ds_2_update_0_write0_merged_banks_9.push(gauss_ds_2_gauss_ds_2_update_0_write0);
  gauss_ds_2.gauss_ds_2_gauss_ds_2_update_0_write0_to_laplace_diff_2_rd0.push(gauss_ds_2_gauss_ds_2_update_0_write0);
  gauss_ds_2.gauss_ds_2_gauss_ds_2_update_0_write0_to_laplace_us_1_rd0.push(gauss_ds_2_gauss_ds_2_update_0_write0);
}

inline hw_uint<32>  gauss_blur_3_rd0_select(gauss_ds_2_cache& gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_2 inter false
#endif //__VIVADO_SYNTH__
  // gauss_blur_3_rd0 read pattern: { gauss_blur_3_update_0[d0, d1] -> gauss_ds_2[d0, d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 6] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Write schedule: { gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 5] : 0 <= d0 <= 10 and 0 <= d1 <= 10 }
  // DD fold: { gauss_blur_3_update_0[d0, d1] -> 24 : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  auto value_gauss_ds_2_gauss_ds_2_update_0_write0 = gauss_ds_2.gauss_ds_2_gauss_ds_2_update_0_write0_merged_banks_9.peek_24();
  return value_gauss_ds_2_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  gauss_blur_3_rd1_select(gauss_ds_2_cache& gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_2 inter false
#endif //__VIVADO_SYNTH__
  // gauss_blur_3_rd1 read pattern: { gauss_blur_3_update_0[d0, d1] -> gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 6] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Write schedule: { gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 5] : 0 <= d0 <= 10 and 0 <= d1 <= 10 }
  // DD fold: { gauss_blur_3_update_0[d0, d1] -> 13 : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  auto value_gauss_ds_2_gauss_ds_2_update_0_write0 = gauss_ds_2.gauss_ds_2_gauss_ds_2_update_0_write0_merged_banks_9.peek_13();
  return value_gauss_ds_2_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  gauss_blur_3_rd2_select(gauss_ds_2_cache& gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_2 inter false
#endif //__VIVADO_SYNTH__
  // gauss_blur_3_rd2 read pattern: { gauss_blur_3_update_0[d0, d1] -> gauss_ds_2[d0, 2 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 6] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Write schedule: { gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 5] : 0 <= d0 <= 10 and 0 <= d1 <= 10 }
  // DD fold: { gauss_blur_3_update_0[d0, d1] -> 2 : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  auto value_gauss_ds_2_gauss_ds_2_update_0_write0 = gauss_ds_2.gauss_ds_2_gauss_ds_2_update_0_write0_merged_banks_9.peek_2();
  return value_gauss_ds_2_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  gauss_blur_3_rd3_select(gauss_ds_2_cache& gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_2 inter false
#endif //__VIVADO_SYNTH__
  // gauss_blur_3_rd3 read pattern: { gauss_blur_3_update_0[d0, d1] -> gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 6] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Write schedule: { gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 5] : 0 <= d0 <= 10 and 0 <= d1 <= 10 }
  // DD fold: { gauss_blur_3_update_0[d0, d1] -> 23 : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  auto value_gauss_ds_2_gauss_ds_2_update_0_write0 = gauss_ds_2.gauss_ds_2_gauss_ds_2_update_0_write0_merged_banks_9.peek_23();
  return value_gauss_ds_2_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  gauss_blur_3_rd4_select(gauss_ds_2_cache& gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_2 inter false
#endif //__VIVADO_SYNTH__
  // gauss_blur_3_rd4 read pattern: { gauss_blur_3_update_0[d0, d1] -> gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 6] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Write schedule: { gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 5] : 0 <= d0 <= 10 and 0 <= d1 <= 10 }
  // DD fold: { gauss_blur_3_update_0[d0, d1] -> 12 : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  auto value_gauss_ds_2_gauss_ds_2_update_0_write0 = gauss_ds_2.gauss_ds_2_gauss_ds_2_update_0_write0_merged_banks_9.peek_12();
  return value_gauss_ds_2_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  gauss_blur_3_rd5_select(gauss_ds_2_cache& gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_2 inter false
#endif //__VIVADO_SYNTH__
  // gauss_blur_3_rd5 read pattern: { gauss_blur_3_update_0[d0, d1] -> gauss_ds_2[1 + d0, 2 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 6] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Write schedule: { gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 5] : 0 <= d0 <= 10 and 0 <= d1 <= 10 }
  // DD fold: { gauss_blur_3_update_0[d0, d1] -> 1 : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  auto value_gauss_ds_2_gauss_ds_2_update_0_write0 = gauss_ds_2.gauss_ds_2_gauss_ds_2_update_0_write0_merged_banks_9.peek_1();
  return value_gauss_ds_2_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  gauss_blur_3_rd6_select(gauss_ds_2_cache& gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_2 inter false
#endif //__VIVADO_SYNTH__
  // gauss_blur_3_rd6 read pattern: { gauss_blur_3_update_0[d0, d1] -> gauss_ds_2[2 + d0, d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 6] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Write schedule: { gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 5] : 0 <= d0 <= 10 and 0 <= d1 <= 10 }
  // DD fold: { gauss_blur_3_update_0[d0, d1] -> 22 : 0 <= d0 <= 7 and 0 <= d1 <= 8; gauss_blur_3_update_0[d0, d1] -> (14 + d0) : d0 = 8 and 0 <= d1 <= 8 }
  auto value_gauss_ds_2_gauss_ds_2_update_0_write0 = gauss_ds_2.gauss_ds_2_gauss_ds_2_update_0_write0_merged_banks_9.peek_22();
  return value_gauss_ds_2_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  gauss_blur_3_rd7_select(gauss_ds_2_cache& gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_2 inter false
#endif //__VIVADO_SYNTH__
  // gauss_blur_3_rd7 read pattern: { gauss_blur_3_update_0[d0, d1] -> gauss_ds_2[2 + d0, 1 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 6] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Write schedule: { gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 5] : 0 <= d0 <= 10 and 0 <= d1 <= 10 }
  // DD fold: { gauss_blur_3_update_0[d0, d1] -> 11 : 0 <= d0 <= 7 and 0 <= d1 <= 8; gauss_blur_3_update_0[d0, d1] -> (3 + d0) : d0 = 8 and 0 <= d1 <= 8 }
  auto value_gauss_ds_2_gauss_ds_2_update_0_write0 = gauss_ds_2.gauss_ds_2_gauss_ds_2_update_0_write0_merged_banks_9.peek_11();
  return value_gauss_ds_2_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  gauss_blur_3_rd8_select(gauss_ds_2_cache& gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_2 inter false
#endif //__VIVADO_SYNTH__
  // gauss_blur_3_rd8 read pattern: { gauss_blur_3_update_0[d0, d1] -> gauss_ds_2[2 + d0, 2 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 6] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Write schedule: { gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 5] : 0 <= d0 <= 10 and 0 <= d1 <= 10 }
  // DD fold: {  }
  auto value_gauss_ds_2_gauss_ds_2_update_0_write0 = gauss_ds_2.gauss_ds_2_gauss_ds_2_update_0_write0_merged_banks_9.peek_0();
  return value_gauss_ds_2_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  laplace_diff_2_rd0_select(gauss_ds_2_cache& gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_2 inter false
#endif //__VIVADO_SYNTH__
  // laplace_diff_2_rd0 read pattern: { laplace_diff_2_update_0[d0, d1] -> gauss_ds_2[d0, d1] : 0 <= d0 <= 7 and 0 <= d1 <= 7 }
  // Read schedule : { laplace_diff_2_update_0[d0, d1] -> [30 + 4d1, 30 + 4d0, 15] : 0 <= d0 <= 7 and 0 <= d1 <= 7 }
  // Write schedule: { gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 5] : 0 <= d0 <= 10 and 0 <= d1 <= 10 }
  // DD fold: { laplace_diff_2_update_0[d0, d1] -> ((120 - d0) - 11 * d1) : 0 <= d0 <= 7 and 6 <= d1 <= 7; laplace_diff_2_update_0[d0, d1] -> (76 - d0) : 6 <= d0 <= 7 and 0 <= d1 <= 4; laplace_diff_2_update_0[d0, d1] -> 72 : 0 <= d0 <= 4 and 0 <= d1 <= 4; laplace_diff_2_update_0[d0, d1] -> 71 : d0 = 5 and 0 <= d1 <= 4; laplace_diff_2_update_0[d0, d1] -> (65 - d0) : d1 = 5 and 0 <= d0 <= 7 and (d0 >= 6 or d0 <= 5) }
  auto value_gauss_ds_2_gauss_ds_2_update_0_write0 = gauss_ds_2.gauss_ds_2_gauss_ds_2_update_0_write0_to_laplace_diff_2_rd0.peek(/* one reader or all rams */ (-5 + d0 == 0 && 4 - d1 >= 0) ? (71) : (4 - d1 >= 0 && 4 - d0 >= 0) ? (72) : (-5 + d1 == 0) ? ((65 - d0)) : (-6 + d0 >= 0 && 4 - d1 >= 0) ? ((76 - d0)) : (-6 + d1 >= 0) ? (((120 - d0) - 11 * d1)) : 0);
  return value_gauss_ds_2_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  laplace_us_1_rd0_select(gauss_ds_2_cache& gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_2 inter false
#endif //__VIVADO_SYNTH__
  // laplace_us_1_rd0 read pattern: { laplace_us_1_update_0[d0, d1] -> gauss_ds_2[o0, o1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { laplace_us_1_update_0[d0, d1] -> [30 + 2d1, 30 + 2d0, 12] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  // Write schedule: { gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 5] : 0 <= d0 <= 10 and 0 <= d1 <= 10 }
  // DD fold: { laplace_us_1_update_0[d0, d1] -> ((120 - floor((d0)/2)) - 11 * floor((d1)/2)) : 0 <= d0 <= 15 and 10 <= d1 <= 15; laplace_us_1_update_0[d0, d1] -> (76 - floor((d0)/2)) : (d1) mod 2 = 0 and 10 <= d0 <= 15 and 2 <= d1 <= 8; laplace_us_1_update_0[d0, d1] -> (76 - floor((d0)/2)) : (d1) mod 2 = 0 and 10 <= d0 <= 15 and 0 <= d1 <= 1; laplace_us_1_update_0[d0, d1] -> 72 : (d0) mod 2 = 0 and (d1) mod 2 = 0 and 0 <= d0 <= 8 and 2 <= d1 <= 8; laplace_us_1_update_0[d0, d1] -> 72 : (d0) mod 2 = 0 and (d1) mod 2 = 0 and 0 <= d0 <= 8 and 0 <= d1 <= 1; laplace_us_1_update_0[d0, d1] -> 72 : (1 + d0) mod 2 = 0 and (d1) mod 2 = 0 and 0 <= d0 <= 9 and 2 <= d1 <= 8; laplace_us_1_update_0[d0, d1] -> 72 : (1 + d0) mod 2 = 0 and (d1) mod 2 = 0 and 0 <= d0 <= 9 and 0 <= d1 <= 1; laplace_us_1_update_0[d0, d1] -> (76 - floor((d0)/2)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 15 and 2 <= d1 <= 9; laplace_us_1_update_0[d0, d1] -> (76 - floor((d0)/2)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 15 and 0 <= d1 <= 1 }
  auto value_gauss_ds_2_gauss_ds_2_update_0_write0 = gauss_ds_2.gauss_ds_2_gauss_ds_2_update_0_write0_to_laplace_us_1_rd0.peek(/* one reader or all rams */ ((d1 == 0 && -10 + d0 >= 0) || (-1 + d1 == 0)) ? ((76 - floord(d0, 2))) : (d1 == 0 && 9 - d0 >= 0) ? (72) : (((-d1) % 2 == 0 && -10 + d0 >= 0 && -2 + d1 >= 0 && 8 - d1 >= 0) || ((-1 - d1) % 2 == 0 && -3 + d1 >= 0 && 9 - d1 >= 0)) ? ((76 - floord(d0, 2))) : (-10 + d1 >= 0) ? (((120 - floord(d0, 2)) - 11 * floord(d1, 2))) : ((-d1) % 2 == 0 && 9 - d0 >= 0 && -2 + d1 >= 0 && 8 - d1 >= 0) ? (72) : 0);
  return value_gauss_ds_2_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 4
// gauss_blur_3_update_0_read
//	gauss_blur_3_rd0
//	gauss_blur_3_rd1
//	gauss_blur_3_rd2
//	gauss_blur_3_rd3
//	gauss_blur_3_rd4
//	gauss_blur_3_rd5
//	gauss_blur_3_rd6
//	gauss_blur_3_rd7
//	gauss_blur_3_rd8
inline hw_uint<288> gauss_ds_2_gauss_blur_3_update_0_read_bundle_read(gauss_ds_2_cache& gauss_ds_2, int d0, int d1) {
	hw_uint<288> result;
	hw_uint<32>  gauss_blur_3_rd0_res = gauss_blur_3_rd0_select(gauss_ds_2, d0, d1);
	set_at<0, 288>(result, gauss_blur_3_rd0_res);
	hw_uint<32>  gauss_blur_3_rd1_res = gauss_blur_3_rd1_select(gauss_ds_2, d0, d1);
	set_at<32, 288>(result, gauss_blur_3_rd1_res);
	hw_uint<32>  gauss_blur_3_rd2_res = gauss_blur_3_rd2_select(gauss_ds_2, d0, d1);
	set_at<64, 288>(result, gauss_blur_3_rd2_res);
	hw_uint<32>  gauss_blur_3_rd3_res = gauss_blur_3_rd3_select(gauss_ds_2, d0, d1);
	set_at<96, 288>(result, gauss_blur_3_rd3_res);
	hw_uint<32>  gauss_blur_3_rd4_res = gauss_blur_3_rd4_select(gauss_ds_2, d0, d1);
	set_at<128, 288>(result, gauss_blur_3_rd4_res);
	hw_uint<32>  gauss_blur_3_rd5_res = gauss_blur_3_rd5_select(gauss_ds_2, d0, d1);
	set_at<160, 288>(result, gauss_blur_3_rd5_res);
	hw_uint<32>  gauss_blur_3_rd6_res = gauss_blur_3_rd6_select(gauss_ds_2, d0, d1);
	set_at<192, 288>(result, gauss_blur_3_rd6_res);
	hw_uint<32>  gauss_blur_3_rd7_res = gauss_blur_3_rd7_select(gauss_ds_2, d0, d1);
	set_at<224, 288>(result, gauss_blur_3_rd7_res);
	hw_uint<32>  gauss_blur_3_rd8_res = gauss_blur_3_rd8_select(gauss_ds_2, d0, d1);
	set_at<256, 288>(result, gauss_blur_3_rd8_res);
	return result;
}

// gauss_ds_2_update_0_write
//	gauss_ds_2_gauss_ds_2_update_0_write0
inline void gauss_ds_2_gauss_ds_2_update_0_write_bundle_write(hw_uint<32>& gauss_ds_2_update_0_write, gauss_ds_2_cache& gauss_ds_2, int d0, int d1) {
	hw_uint<32>  gauss_ds_2_gauss_ds_2_update_0_write0_res = gauss_ds_2_update_0_write.extract<0, 31>();
	gauss_ds_2_gauss_ds_2_update_0_write0_write(gauss_ds_2_gauss_ds_2_update_0_write0_res, gauss_ds_2, d0, d1);
}

// laplace_diff_2_update_0_read
//	laplace_diff_2_rd0
inline hw_uint<32> gauss_ds_2_laplace_diff_2_update_0_read_bundle_read(gauss_ds_2_cache& gauss_ds_2, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  laplace_diff_2_rd0_res = laplace_diff_2_rd0_select(gauss_ds_2, d0, d1);
	set_at<0, 32>(result, laplace_diff_2_rd0_res);
	return result;
}

// laplace_us_1_update_0_read
//	laplace_us_1_rd0
inline hw_uint<32> gauss_ds_2_laplace_us_1_update_0_read_bundle_read(gauss_ds_2_cache& gauss_ds_2, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  laplace_us_1_rd0_res = laplace_us_1_rd0_select(gauss_ds_2, d0, d1);
	set_at<0, 32>(result, laplace_us_1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct gauss_ds_3_gauss_ds_3_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 13
	// # of read delays: 9
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 2> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 2> f11;
	hw_uint<32>  f12;
	hw_uint<32>  f14;
	hw_uint<32>  f16;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_2() {
		return f4;
	}

	inline hw_uint<32>  peek_4() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f5 inter false
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_5() {
		return f6;
	}

	inline hw_uint<32>  peek_6() {
		return f8;
	}

	inline hw_uint<32>  peek_7() {
		return f10;
	}

	inline hw_uint<32>  peek_9() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f11 inter false
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_10() {
		return f12;
	}

	inline hw_uint<32>  peek_11() {
		return f14;
	}

	inline hw_uint<32>  peek_12() {
		return f16;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f16 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f14 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f12 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f11 inter false
#endif //__VIVADO_SYNTH__
    // cap: 2 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f10 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f8 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f6 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f5 inter false
#endif //__VIVADO_SYNTH__
    // cap: 2 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f4 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f2 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct gauss_ds_3_gauss_ds_3_update_0_write0_to_laplace_diff_3_rd0_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 13
	// # of read delays: 8
	fifo<hw_uint<32> , 13> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(12 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_ds_3_gauss_ds_3_update_0_write0_to_laplace_us_2_rd0_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 15
	// # of read delays: 11
	fifo<hw_uint<32> , 15> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(14 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_ds_3_cache {
  gauss_ds_3_gauss_ds_3_update_0_write0_merged_banks_9_cache gauss_ds_3_gauss_ds_3_update_0_write0_merged_banks_9;
  gauss_ds_3_gauss_ds_3_update_0_write0_to_laplace_diff_3_rd0_cache gauss_ds_3_gauss_ds_3_update_0_write0_to_laplace_diff_3_rd0;
  gauss_ds_3_gauss_ds_3_update_0_write0_to_laplace_us_2_rd0_cache gauss_ds_3_gauss_ds_3_update_0_write0_to_laplace_us_2_rd0;
};



inline void gauss_ds_3_gauss_ds_3_update_0_write0_write(hw_uint<32> & gauss_ds_3_gauss_ds_3_update_0_write0, gauss_ds_3_cache& gauss_ds_3, int d0, int d1) {
  gauss_ds_3.gauss_ds_3_gauss_ds_3_update_0_write0_merged_banks_9.push(gauss_ds_3_gauss_ds_3_update_0_write0);
  gauss_ds_3.gauss_ds_3_gauss_ds_3_update_0_write0_to_laplace_diff_3_rd0.push(gauss_ds_3_gauss_ds_3_update_0_write0);
  gauss_ds_3.gauss_ds_3_gauss_ds_3_update_0_write0_to_laplace_us_2_rd0.push(gauss_ds_3_gauss_ds_3_update_0_write0);
}

inline hw_uint<32>  gauss_blur_4_rd0_select(gauss_ds_3_cache& gauss_ds_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_3 inter false
#endif //__VIVADO_SYNTH__
  // gauss_blur_4_rd0 read pattern: { gauss_blur_4_update_0[d0, d1] -> gauss_ds_3[d0, d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { gauss_blur_4_update_0[d0, d1] -> [30 + 8d1, 30 + 8d0, 8] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Write schedule: { gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 14 + 8d0, 7] : 0 <= d0 <= 4 and 0 <= d1 <= 4 }
  // DD fold: { gauss_blur_4_update_0[d0, d1] -> 12 : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  auto value_gauss_ds_3_gauss_ds_3_update_0_write0 = gauss_ds_3.gauss_ds_3_gauss_ds_3_update_0_write0_merged_banks_9.peek_12();
  return value_gauss_ds_3_gauss_ds_3_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  gauss_blur_4_rd1_select(gauss_ds_3_cache& gauss_ds_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_3 inter false
#endif //__VIVADO_SYNTH__
  // gauss_blur_4_rd1 read pattern: { gauss_blur_4_update_0[d0, d1] -> gauss_ds_3[d0, 1 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { gauss_blur_4_update_0[d0, d1] -> [30 + 8d1, 30 + 8d0, 8] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Write schedule: { gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 14 + 8d0, 7] : 0 <= d0 <= 4 and 0 <= d1 <= 4 }
  // DD fold: { gauss_blur_4_update_0[d0, d1] -> 7 : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  auto value_gauss_ds_3_gauss_ds_3_update_0_write0 = gauss_ds_3.gauss_ds_3_gauss_ds_3_update_0_write0_merged_banks_9.peek_7();
  return value_gauss_ds_3_gauss_ds_3_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  gauss_blur_4_rd2_select(gauss_ds_3_cache& gauss_ds_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_3 inter false
#endif //__VIVADO_SYNTH__
  // gauss_blur_4_rd2 read pattern: { gauss_blur_4_update_0[d0, d1] -> gauss_ds_3[d0, 2 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { gauss_blur_4_update_0[d0, d1] -> [30 + 8d1, 30 + 8d0, 8] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Write schedule: { gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 14 + 8d0, 7] : 0 <= d0 <= 4 and 0 <= d1 <= 4 }
  // DD fold: { gauss_blur_4_update_0[d0, d1] -> 2 : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  auto value_gauss_ds_3_gauss_ds_3_update_0_write0 = gauss_ds_3.gauss_ds_3_gauss_ds_3_update_0_write0_merged_banks_9.peek_2();
  return value_gauss_ds_3_gauss_ds_3_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  gauss_blur_4_rd3_select(gauss_ds_3_cache& gauss_ds_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_3 inter false
#endif //__VIVADO_SYNTH__
  // gauss_blur_4_rd3 read pattern: { gauss_blur_4_update_0[d0, d1] -> gauss_ds_3[1 + d0, d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { gauss_blur_4_update_0[d0, d1] -> [30 + 8d1, 30 + 8d0, 8] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Write schedule: { gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 14 + 8d0, 7] : 0 <= d0 <= 4 and 0 <= d1 <= 4 }
  // DD fold: { gauss_blur_4_update_0[d0, d1] -> 11 : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  auto value_gauss_ds_3_gauss_ds_3_update_0_write0 = gauss_ds_3.gauss_ds_3_gauss_ds_3_update_0_write0_merged_banks_9.peek_11();
  return value_gauss_ds_3_gauss_ds_3_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  gauss_blur_4_rd4_select(gauss_ds_3_cache& gauss_ds_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_3 inter false
#endif //__VIVADO_SYNTH__
  // gauss_blur_4_rd4 read pattern: { gauss_blur_4_update_0[d0, d1] -> gauss_ds_3[1 + d0, 1 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { gauss_blur_4_update_0[d0, d1] -> [30 + 8d1, 30 + 8d0, 8] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Write schedule: { gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 14 + 8d0, 7] : 0 <= d0 <= 4 and 0 <= d1 <= 4 }
  // DD fold: { gauss_blur_4_update_0[d0, d1] -> 6 : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  auto value_gauss_ds_3_gauss_ds_3_update_0_write0 = gauss_ds_3.gauss_ds_3_gauss_ds_3_update_0_write0_merged_banks_9.peek_6();
  return value_gauss_ds_3_gauss_ds_3_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  gauss_blur_4_rd5_select(gauss_ds_3_cache& gauss_ds_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_3 inter false
#endif //__VIVADO_SYNTH__
  // gauss_blur_4_rd5 read pattern: { gauss_blur_4_update_0[d0, d1] -> gauss_ds_3[1 + d0, 2 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { gauss_blur_4_update_0[d0, d1] -> [30 + 8d1, 30 + 8d0, 8] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Write schedule: { gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 14 + 8d0, 7] : 0 <= d0 <= 4 and 0 <= d1 <= 4 }
  // DD fold: { gauss_blur_4_update_0[d0, d1] -> 1 : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  auto value_gauss_ds_3_gauss_ds_3_update_0_write0 = gauss_ds_3.gauss_ds_3_gauss_ds_3_update_0_write0_merged_banks_9.peek_1();
  return value_gauss_ds_3_gauss_ds_3_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  gauss_blur_4_rd6_select(gauss_ds_3_cache& gauss_ds_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_3 inter false
#endif //__VIVADO_SYNTH__
  // gauss_blur_4_rd6 read pattern: { gauss_blur_4_update_0[d0, d1] -> gauss_ds_3[2 + d0, d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { gauss_blur_4_update_0[d0, d1] -> [30 + 8d1, 30 + 8d0, 8] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Write schedule: { gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 14 + 8d0, 7] : 0 <= d0 <= 4 and 0 <= d1 <= 4 }
  // DD fold: { gauss_blur_4_update_0[d0, d1] -> 10 : 0 <= d0 <= 1 and 0 <= d1 <= 2; gauss_blur_4_update_0[d0, d1] -> (8 + d0) : d0 = 2 and 0 <= d1 <= 2 }
  auto value_gauss_ds_3_gauss_ds_3_update_0_write0 = gauss_ds_3.gauss_ds_3_gauss_ds_3_update_0_write0_merged_banks_9.peek_10();
  return value_gauss_ds_3_gauss_ds_3_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  gauss_blur_4_rd7_select(gauss_ds_3_cache& gauss_ds_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_3 inter false
#endif //__VIVADO_SYNTH__
  // gauss_blur_4_rd7 read pattern: { gauss_blur_4_update_0[d0, d1] -> gauss_ds_3[2 + d0, 1 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { gauss_blur_4_update_0[d0, d1] -> [30 + 8d1, 30 + 8d0, 8] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Write schedule: { gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 14 + 8d0, 7] : 0 <= d0 <= 4 and 0 <= d1 <= 4 }
  // DD fold: { gauss_blur_4_update_0[d0, d1] -> 5 : 0 <= d0 <= 1 and 0 <= d1 <= 2; gauss_blur_4_update_0[d0, d1] -> (3 + d0) : d0 = 2 and 0 <= d1 <= 2 }
  auto value_gauss_ds_3_gauss_ds_3_update_0_write0 = gauss_ds_3.gauss_ds_3_gauss_ds_3_update_0_write0_merged_banks_9.peek_5();
  return value_gauss_ds_3_gauss_ds_3_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  gauss_blur_4_rd8_select(gauss_ds_3_cache& gauss_ds_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_3 inter false
#endif //__VIVADO_SYNTH__
  // gauss_blur_4_rd8 read pattern: { gauss_blur_4_update_0[d0, d1] -> gauss_ds_3[2 + d0, 2 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { gauss_blur_4_update_0[d0, d1] -> [30 + 8d1, 30 + 8d0, 8] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Write schedule: { gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 14 + 8d0, 7] : 0 <= d0 <= 4 and 0 <= d1 <= 4 }
  // DD fold: {  }
  auto value_gauss_ds_3_gauss_ds_3_update_0_write0 = gauss_ds_3.gauss_ds_3_gauss_ds_3_update_0_write0_merged_banks_9.peek_0();
  return value_gauss_ds_3_gauss_ds_3_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  laplace_diff_3_rd0_select(gauss_ds_3_cache& gauss_ds_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_3 inter false
#endif //__VIVADO_SYNTH__
  // laplace_diff_3_rd0 read pattern: { laplace_diff_3_update_0[d0, d1] -> gauss_ds_3[d0, d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // Read schedule : { laplace_diff_3_update_0[d0, d1] -> [30 + 8d1, 30 + 8d0, 14] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // Write schedule: { gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 14 + 8d0, 7] : 0 <= d0 <= 4 and 0 <= d1 <= 4 }
  // DD fold: { laplace_diff_3_update_0[d0, d1] -> 12 : 0 <= d0 <= 2 and 0 <= d1 <= 2; laplace_diff_3_update_0[d0, d1] -> 11 : d0 = 3 and 0 <= d1 <= 2; laplace_diff_3_update_0[d0, d1] -> (9 - d0) : d1 = 3 and 0 <= d0 <= 3 }
  auto value_gauss_ds_3_gauss_ds_3_update_0_write0 = gauss_ds_3.gauss_ds_3_gauss_ds_3_update_0_write0_to_laplace_diff_3_rd0.peek(/* one reader or all rams */ (-3 + d0 == 0 && 2 - d1 >= 0) ? (11) : (2 - d1 >= 0 && 2 - d0 >= 0) ? (12) : (-3 + d1 == 0) ? ((9 - d0)) : 0);
  return value_gauss_ds_3_gauss_ds_3_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  laplace_us_2_rd0_select(gauss_ds_3_cache& gauss_ds_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_3 inter false
#endif //__VIVADO_SYNTH__
  // laplace_us_2_rd0 read pattern: { laplace_us_2_update_0[d0, d1] -> gauss_ds_3[o0, o1] : 0 <= d0 <= 7 and 0 <= d1 <= 7 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { laplace_us_2_update_0[d0, d1] -> [30 + 4d1, 30 + 4d0, 11] : 0 <= d0 <= 7 and 0 <= d1 <= 7 }
  // Write schedule: { gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 14 + 8d0, 7] : 0 <= d0 <= 4 and 0 <= d1 <= 4 }
  // DD fold: { laplace_us_2_update_0[d0, d1] -> (9 - floor((d0)/2)) : 0 <= d0 <= 7 and 6 <= d1 <= 7; laplace_us_2_update_0[d0, d1] -> 11 : (d1) mod 2 = 0 and 6 <= d0 <= 7 and 2 <= d1 <= 4; laplace_us_2_update_0[d0, d1] -> 11 : (d1) mod 2 = 0 and 6 <= d0 <= 7 and 0 <= d1 <= 1; laplace_us_2_update_0[d0, d1] -> 12 : (d0) mod 2 = 0 and (d1) mod 2 = 0 and 0 <= d0 <= 4 and 2 <= d1 <= 4; laplace_us_2_update_0[d0, d1] -> 12 : (d0) mod 2 = 0 and (d1) mod 2 = 0 and 0 <= d0 <= 4 and 0 <= d1 <= 1; laplace_us_2_update_0[d0, d1] -> 12 : (1 + d0) mod 2 = 0 and (d1) mod 2 = 0 and 0 <= d0 <= 5 and 2 <= d1 <= 4; laplace_us_2_update_0[d0, d1] -> 12 : (1 + d0) mod 2 = 0 and (d1) mod 2 = 0 and 0 <= d0 <= 5 and 0 <= d1 <= 1; laplace_us_2_update_0[d0, d1] -> (14 - floor((d0)/2)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 7 and 2 <= d1 <= 5; laplace_us_2_update_0[d0, d1] -> (14 - floor((d0)/2)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 7 and 0 <= d1 <= 1 }
  auto value_gauss_ds_3_gauss_ds_3_update_0_write0 = gauss_ds_3.gauss_ds_3_gauss_ds_3_update_0_write0_to_laplace_us_2_rd0.peek(/* one reader or all rams */ (d1 == 0 && -6 + d0 >= 0) ? (11) : (-6 + d1 >= 0) ? ((9 - floord(d0, 2))) : (-1 + d1 == 0) ? ((14 - floord(d0, 2))) : (d1 == 0 && 5 - d0 >= 0) ? (12) : ((-d1) % 2 == 0 && -6 + d0 >= 0 && -2 + d1 >= 0 && 4 - d1 >= 0) ? (11) : ((-1 - d1) % 2 == 0 && -3 + d1 >= 0 && 5 - d1 >= 0) ? ((14 - floord(d0, 2))) : ((-d1) % 2 == 0 && 5 - d0 >= 0 && -2 + d1 >= 0 && 4 - d1 >= 0) ? (12) : 0);
  return value_gauss_ds_3_gauss_ds_3_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 4
// gauss_blur_4_update_0_read
//	gauss_blur_4_rd0
//	gauss_blur_4_rd1
//	gauss_blur_4_rd2
//	gauss_blur_4_rd3
//	gauss_blur_4_rd4
//	gauss_blur_4_rd5
//	gauss_blur_4_rd6
//	gauss_blur_4_rd7
//	gauss_blur_4_rd8
inline hw_uint<288> gauss_ds_3_gauss_blur_4_update_0_read_bundle_read(gauss_ds_3_cache& gauss_ds_3, int d0, int d1) {
	hw_uint<288> result;
	hw_uint<32>  gauss_blur_4_rd0_res = gauss_blur_4_rd0_select(gauss_ds_3, d0, d1);
	set_at<0, 288>(result, gauss_blur_4_rd0_res);
	hw_uint<32>  gauss_blur_4_rd1_res = gauss_blur_4_rd1_select(gauss_ds_3, d0, d1);
	set_at<32, 288>(result, gauss_blur_4_rd1_res);
	hw_uint<32>  gauss_blur_4_rd2_res = gauss_blur_4_rd2_select(gauss_ds_3, d0, d1);
	set_at<64, 288>(result, gauss_blur_4_rd2_res);
	hw_uint<32>  gauss_blur_4_rd3_res = gauss_blur_4_rd3_select(gauss_ds_3, d0, d1);
	set_at<96, 288>(result, gauss_blur_4_rd3_res);
	hw_uint<32>  gauss_blur_4_rd4_res = gauss_blur_4_rd4_select(gauss_ds_3, d0, d1);
	set_at<128, 288>(result, gauss_blur_4_rd4_res);
	hw_uint<32>  gauss_blur_4_rd5_res = gauss_blur_4_rd5_select(gauss_ds_3, d0, d1);
	set_at<160, 288>(result, gauss_blur_4_rd5_res);
	hw_uint<32>  gauss_blur_4_rd6_res = gauss_blur_4_rd6_select(gauss_ds_3, d0, d1);
	set_at<192, 288>(result, gauss_blur_4_rd6_res);
	hw_uint<32>  gauss_blur_4_rd7_res = gauss_blur_4_rd7_select(gauss_ds_3, d0, d1);
	set_at<224, 288>(result, gauss_blur_4_rd7_res);
	hw_uint<32>  gauss_blur_4_rd8_res = gauss_blur_4_rd8_select(gauss_ds_3, d0, d1);
	set_at<256, 288>(result, gauss_blur_4_rd8_res);
	return result;
}

// gauss_ds_3_update_0_write
//	gauss_ds_3_gauss_ds_3_update_0_write0
inline void gauss_ds_3_gauss_ds_3_update_0_write_bundle_write(hw_uint<32>& gauss_ds_3_update_0_write, gauss_ds_3_cache& gauss_ds_3, int d0, int d1) {
	hw_uint<32>  gauss_ds_3_gauss_ds_3_update_0_write0_res = gauss_ds_3_update_0_write.extract<0, 31>();
	gauss_ds_3_gauss_ds_3_update_0_write0_write(gauss_ds_3_gauss_ds_3_update_0_write0_res, gauss_ds_3, d0, d1);
}

// laplace_diff_3_update_0_read
//	laplace_diff_3_rd0
inline hw_uint<32> gauss_ds_3_laplace_diff_3_update_0_read_bundle_read(gauss_ds_3_cache& gauss_ds_3, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  laplace_diff_3_rd0_res = laplace_diff_3_rd0_select(gauss_ds_3, d0, d1);
	set_at<0, 32>(result, laplace_diff_3_rd0_res);
	return result;
}

// laplace_us_2_update_0_read
//	laplace_us_2_rd0
inline hw_uint<32> gauss_ds_3_laplace_us_2_update_0_read_bundle_read(gauss_ds_3_cache& gauss_ds_3, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  laplace_us_2_rd0_res = laplace_us_2_rd0_select(gauss_ds_3, d0, d1);
	set_at<0, 32>(result, laplace_us_2_rd0_res);
	return result;
}

#include "hw_classes.h"

struct gauss_ds_4_gauss_ds_4_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 1], [0, 1]}
	// Capacity: 2
	// # of read delays: 2
	fifo<hw_uint<32> , 2> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(1 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_ds_4_cache {
  gauss_ds_4_gauss_ds_4_update_0_write0_merged_banks_1_cache gauss_ds_4_gauss_ds_4_update_0_write0_merged_banks_1;
};



inline void gauss_ds_4_gauss_ds_4_update_0_write0_write(hw_uint<32> & gauss_ds_4_gauss_ds_4_update_0_write0, gauss_ds_4_cache& gauss_ds_4, int d0, int d1) {
  gauss_ds_4.gauss_ds_4_gauss_ds_4_update_0_write0_merged_banks_1.push(gauss_ds_4_gauss_ds_4_update_0_write0);
}

inline hw_uint<32>  laplace_us_3_rd0_select(gauss_ds_4_cache& gauss_ds_4, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_4 inter false
#endif //__VIVADO_SYNTH__
  // laplace_us_3_rd0 read pattern: { laplace_us_3_update_0[d0, d1] -> gauss_ds_4[o0, o1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { laplace_us_3_update_0[d0, d1] -> [30 + 8d1, 30 + 8d0, 10] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // Write schedule: { gauss_ds_4_update_0[d0, d1] -> [30 + 16d1, 30 + 16d0, 9] : 0 <= d0 <= 1 and 0 <= d1 <= 1 }
  // DD fold: { laplace_us_3_update_0[d0, d1] -> 1 : (1 + d1) mod 2 = 0 and 0 <= d0 <= 1 and 0 < d1 <= 3 }
  auto value_gauss_ds_4_gauss_ds_4_update_0_write0 = gauss_ds_4.gauss_ds_4_gauss_ds_4_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 1 - d0 >= 0) ? (1) : 0);
  return value_gauss_ds_4_gauss_ds_4_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// gauss_ds_4_update_0_write
//	gauss_ds_4_gauss_ds_4_update_0_write0
inline void gauss_ds_4_gauss_ds_4_update_0_write_bundle_write(hw_uint<32>& gauss_ds_4_update_0_write, gauss_ds_4_cache& gauss_ds_4, int d0, int d1) {
	hw_uint<32>  gauss_ds_4_gauss_ds_4_update_0_write0_res = gauss_ds_4_update_0_write.extract<0, 31>();
	gauss_ds_4_gauss_ds_4_update_0_write0_write(gauss_ds_4_gauss_ds_4_update_0_write0_res, gauss_ds_4, d0, d1);
}

// laplace_us_3_update_0_read
//	laplace_us_3_rd0
inline hw_uint<32> gauss_ds_4_laplace_us_3_update_0_read_bundle_read(gauss_ds_4_cache& gauss_ds_4, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  laplace_us_3_rd0_res = laplace_us_3_rd0_select(gauss_ds_4, d0, d1);
	set_at<0, 32>(result, laplace_us_3_rd0_res);
	return result;
}

#include "hw_classes.h"

struct in_in_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 46], [0, 46]}
	// Capacity: 97
	// # of read delays: 9
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 44> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 44> f11;
	hw_uint<32>  f12;
	hw_uint<32>  f14;
	hw_uint<32>  f16;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_2() {
		return f4;
	}

	inline hw_uint<32>  peek_46() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f5 inter false
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_47() {
		return f6;
	}

	inline hw_uint<32>  peek_48() {
		return f8;
	}

	inline hw_uint<32>  peek_49() {
		return f10;
	}

	inline hw_uint<32>  peek_93() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f11 inter false
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_94() {
		return f12;
	}

	inline hw_uint<32>  peek_95() {
		return f14;
	}

	inline hw_uint<32>  peek_96() {
		return f16;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f16 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f14 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f12 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 44
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f11 inter false
#endif //__VIVADO_SYNTH__
    // cap: 44 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f10 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f8 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f6 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 44
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f5 inter false
#endif //__VIVADO_SYNTH__
    // cap: 44 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f4 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f2 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write0_to_laplace_diff_0_rd0_cache {
	// RAM Box: {[0, 46], [0, 46]}
	// Capacity: 1441
	// # of read delays: 722
	fifo<hw_uint<32> , 1441> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(1440 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct in_cache {
  in_in_update_0_write0_merged_banks_9_cache in_in_update_0_write0_merged_banks_9;
  in_in_update_0_write0_to_laplace_diff_0_rd0_cache in_in_update_0_write0_to_laplace_diff_0_rd0;
};



inline void in_in_update_0_write0_write(hw_uint<32> & in_in_update_0_write0, in_cache& in, int d0, int d1) {
  in.in_in_update_0_write0_merged_banks_9.push(in_in_update_0_write0);
  in.in_in_update_0_write0_to_laplace_diff_0_rd0.push(in_in_update_0_write0);
}

inline hw_uint<32>  gauss_blur_1_rd0_select(in_cache& in, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=in inter false
#endif //__VIVADO_SYNTH__
  // gauss_blur_1_rd0 read pattern: { gauss_blur_1_update_0[d0, d1] -> in[d0, d1] : 0 <= d0 <= 44 and 0 <= d1 <= 44 }
  // Read schedule : { gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : 0 <= d0 <= 44 and 0 <= d1 <= 44 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 46 and 0 <= d1 <= 46 }
  // DD fold: { gauss_blur_1_update_0[d0, d1] -> 96 : 0 <= d0 <= 44 and 0 <= d1 <= 44 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_96();
  return value_in_in_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  gauss_blur_1_rd1_select(in_cache& in, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=in inter false
#endif //__VIVADO_SYNTH__
  // gauss_blur_1_rd1 read pattern: { gauss_blur_1_update_0[d0, d1] -> in[d0, 1 + d1] : 0 <= d0 <= 44 and 0 <= d1 <= 44 }
  // Read schedule : { gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : 0 <= d0 <= 44 and 0 <= d1 <= 44 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 46 and 0 <= d1 <= 46 }
  // DD fold: { gauss_blur_1_update_0[d0, d1] -> 49 : 0 <= d0 <= 44 and 0 <= d1 <= 44 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_49();
  return value_in_in_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  gauss_blur_1_rd2_select(in_cache& in, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=in inter false
#endif //__VIVADO_SYNTH__
  // gauss_blur_1_rd2 read pattern: { gauss_blur_1_update_0[d0, d1] -> in[d0, 2 + d1] : 0 <= d0 <= 44 and 0 <= d1 <= 44 }
  // Read schedule : { gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : 0 <= d0 <= 44 and 0 <= d1 <= 44 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 46 and 0 <= d1 <= 46 }
  // DD fold: { gauss_blur_1_update_0[d0, d1] -> 2 : 0 <= d0 <= 44 and 0 <= d1 <= 44 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_2();
  return value_in_in_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  gauss_blur_1_rd3_select(in_cache& in, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=in inter false
#endif //__VIVADO_SYNTH__
  // gauss_blur_1_rd3 read pattern: { gauss_blur_1_update_0[d0, d1] -> in[1 + d0, d1] : 0 <= d0 <= 44 and 0 <= d1 <= 44 }
  // Read schedule : { gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : 0 <= d0 <= 44 and 0 <= d1 <= 44 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 46 and 0 <= d1 <= 46 }
  // DD fold: { gauss_blur_1_update_0[d0, d1] -> 95 : 0 <= d0 <= 44 and 0 <= d1 <= 44 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_95();
  return value_in_in_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  gauss_blur_1_rd4_select(in_cache& in, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=in inter false
#endif //__VIVADO_SYNTH__
  // gauss_blur_1_rd4 read pattern: { gauss_blur_1_update_0[d0, d1] -> in[1 + d0, 1 + d1] : 0 <= d0 <= 44 and 0 <= d1 <= 44 }
  // Read schedule : { gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : 0 <= d0 <= 44 and 0 <= d1 <= 44 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 46 and 0 <= d1 <= 46 }
  // DD fold: { gauss_blur_1_update_0[d0, d1] -> 48 : 0 <= d0 <= 44 and 0 <= d1 <= 44 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_48();
  return value_in_in_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  gauss_blur_1_rd5_select(in_cache& in, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=in inter false
#endif //__VIVADO_SYNTH__
  // gauss_blur_1_rd5 read pattern: { gauss_blur_1_update_0[d0, d1] -> in[1 + d0, 2 + d1] : 0 <= d0 <= 44 and 0 <= d1 <= 44 }
  // Read schedule : { gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : 0 <= d0 <= 44 and 0 <= d1 <= 44 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 46 and 0 <= d1 <= 46 }
  // DD fold: { gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 44 and 0 <= d1 <= 44 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_1();
  return value_in_in_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  gauss_blur_1_rd6_select(in_cache& in, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=in inter false
#endif //__VIVADO_SYNTH__
  // gauss_blur_1_rd6 read pattern: { gauss_blur_1_update_0[d0, d1] -> in[2 + d0, d1] : 0 <= d0 <= 44 and 0 <= d1 <= 44 }
  // Read schedule : { gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : 0 <= d0 <= 44 and 0 <= d1 <= 44 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 46 and 0 <= d1 <= 46 }
  // DD fold: { gauss_blur_1_update_0[d0, d1] -> 94 : 0 <= d0 <= 43 and 0 <= d1 <= 44; gauss_blur_1_update_0[d0, d1] -> (50 + d0) : d0 = 44 and 0 <= d1 <= 44 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_94();
  return value_in_in_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  gauss_blur_1_rd7_select(in_cache& in, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=in inter false
#endif //__VIVADO_SYNTH__
  // gauss_blur_1_rd7 read pattern: { gauss_blur_1_update_0[d0, d1] -> in[2 + d0, 1 + d1] : 0 <= d0 <= 44 and 0 <= d1 <= 44 }
  // Read schedule : { gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : 0 <= d0 <= 44 and 0 <= d1 <= 44 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 46 and 0 <= d1 <= 46 }
  // DD fold: { gauss_blur_1_update_0[d0, d1] -> 47 : 0 <= d0 <= 43 and 0 <= d1 <= 44; gauss_blur_1_update_0[d0, d1] -> (3 + d0) : d0 = 44 and 0 <= d1 <= 44 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_47();
  return value_in_in_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  gauss_blur_1_rd8_select(in_cache& in, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=in inter false
#endif //__VIVADO_SYNTH__
  // gauss_blur_1_rd8 read pattern: { gauss_blur_1_update_0[d0, d1] -> in[2 + d0, 2 + d1] : 0 <= d0 <= 44 and 0 <= d1 <= 44 }
  // Read schedule : { gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : 0 <= d0 <= 44 and 0 <= d1 <= 44 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 46 and 0 <= d1 <= 46 }
  // DD fold: {  }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_0();
  return value_in_in_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  laplace_diff_0_rd0_select(in_cache& in, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=in inter false
#endif //__VIVADO_SYNTH__
  // laplace_diff_0_rd0 read pattern: { laplace_diff_0_update_0[d0, d1] -> in[d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { laplace_diff_0_update_0[d0, d1] -> [30 + d1, 30 + d0, 17] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 46 and 0 <= d1 <= 46 }
  // DD fold: { laplace_diff_0_update_0[d0, d1] -> ((2208 - d0) - 47 * d1) : 0 <= d0 <= 31 and 18 <= d1 <= 31; laplace_diff_0_update_0[d0, d1] -> (1456 - d0) : 18 <= d0 <= 31 and 0 <= d1 <= 16; laplace_diff_0_update_0[d0, d1] -> 1440 : 0 <= d0 <= 16 and 0 <= d1 <= 16; laplace_diff_0_update_0[d0, d1] -> 1439 : d0 = 17 and 0 <= d1 <= 16; laplace_diff_0_update_0[d0, d1] -> (1409 - d0) : d1 = 17 and 0 <= d0 <= 31 and (d0 >= 18 or d0 <= 17) }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_to_laplace_diff_0_rd0.peek(/* one reader or all rams */ (-17 + d0 == 0 && 16 - d1 >= 0) ? (1439) : (16 - d1 >= 0 && 16 - d0 >= 0) ? (1440) : (-17 + d1 == 0) ? ((1409 - d0)) : (-18 + d0 >= 0 && 16 - d1 >= 0) ? ((1456 - d0)) : (-18 + d1 >= 0) ? (((2208 - d0) - 47 * d1)) : 0);
  return value_in_in_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 3
// gauss_blur_1_update_0_read
//	gauss_blur_1_rd0
//	gauss_blur_1_rd1
//	gauss_blur_1_rd2
//	gauss_blur_1_rd3
//	gauss_blur_1_rd4
//	gauss_blur_1_rd5
//	gauss_blur_1_rd6
//	gauss_blur_1_rd7
//	gauss_blur_1_rd8
inline hw_uint<288> in_gauss_blur_1_update_0_read_bundle_read(in_cache& in, int d0, int d1) {
	hw_uint<288> result;
	hw_uint<32>  gauss_blur_1_rd0_res = gauss_blur_1_rd0_select(in, d0, d1);
	set_at<0, 288>(result, gauss_blur_1_rd0_res);
	hw_uint<32>  gauss_blur_1_rd1_res = gauss_blur_1_rd1_select(in, d0, d1);
	set_at<32, 288>(result, gauss_blur_1_rd1_res);
	hw_uint<32>  gauss_blur_1_rd2_res = gauss_blur_1_rd2_select(in, d0, d1);
	set_at<64, 288>(result, gauss_blur_1_rd2_res);
	hw_uint<32>  gauss_blur_1_rd3_res = gauss_blur_1_rd3_select(in, d0, d1);
	set_at<96, 288>(result, gauss_blur_1_rd3_res);
	hw_uint<32>  gauss_blur_1_rd4_res = gauss_blur_1_rd4_select(in, d0, d1);
	set_at<128, 288>(result, gauss_blur_1_rd4_res);
	hw_uint<32>  gauss_blur_1_rd5_res = gauss_blur_1_rd5_select(in, d0, d1);
	set_at<160, 288>(result, gauss_blur_1_rd5_res);
	hw_uint<32>  gauss_blur_1_rd6_res = gauss_blur_1_rd6_select(in, d0, d1);
	set_at<192, 288>(result, gauss_blur_1_rd6_res);
	hw_uint<32>  gauss_blur_1_rd7_res = gauss_blur_1_rd7_select(in, d0, d1);
	set_at<224, 288>(result, gauss_blur_1_rd7_res);
	hw_uint<32>  gauss_blur_1_rd8_res = gauss_blur_1_rd8_select(in, d0, d1);
	set_at<256, 288>(result, gauss_blur_1_rd8_res);
	return result;
}

// in_update_0_write
//	in_in_update_0_write0
inline void in_in_update_0_write_bundle_write(hw_uint<32>& in_update_0_write, in_cache& in, int d0, int d1) {
	hw_uint<32>  in_in_update_0_write0_res = in_update_0_write.extract<0, 31>();
	in_in_update_0_write0_write(in_in_update_0_write0_res, in, d0, d1);
}

// laplace_diff_0_update_0_read
//	laplace_diff_0_rd0
inline hw_uint<32> in_laplace_diff_0_update_0_read_bundle_read(in_cache& in, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  laplace_diff_0_rd0_res = laplace_diff_0_rd0_select(in, d0, d1);
	set_at<0, 32>(result, laplace_diff_0_rd0_res);
	return result;
}

#include "hw_classes.h"

struct laplace_diff_0_laplace_diff_0_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 31], [0, 31]}
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct laplace_diff_0_cache {
  laplace_diff_0_laplace_diff_0_update_0_write0_merged_banks_1_cache laplace_diff_0_laplace_diff_0_update_0_write0_merged_banks_1;
};



inline void laplace_diff_0_laplace_diff_0_update_0_write0_write(hw_uint<32> & laplace_diff_0_laplace_diff_0_update_0_write0, laplace_diff_0_cache& laplace_diff_0, int d0, int d1) {
  laplace_diff_0.laplace_diff_0_laplace_diff_0_update_0_write0_merged_banks_1.push(laplace_diff_0_laplace_diff_0_update_0_write0);
}

inline hw_uint<32>  blend_us_laplace_diff_0_rd0_select(laplace_diff_0_cache& laplace_diff_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=laplace_diff_0 inter false
#endif //__VIVADO_SYNTH__
  // blend_us_laplace_diff_0_rd0 read pattern: { blend_us_laplace_diff_0_update_0[d0, d1] -> laplace_diff_0[d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { blend_us_laplace_diff_0_update_0[d0, d1] -> [30 + d1, 30 + d0, 21] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { laplace_diff_0_update_0[d0, d1] -> [30 + d1, 30 + d0, 17] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // DD fold: {  }
  auto value_laplace_diff_0_laplace_diff_0_update_0_write0 = laplace_diff_0.laplace_diff_0_laplace_diff_0_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_laplace_diff_0_laplace_diff_0_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// blend_us_laplace_diff_0_update_0_read
//	blend_us_laplace_diff_0_rd0
inline hw_uint<32> laplace_diff_0_blend_us_laplace_diff_0_update_0_read_bundle_read(laplace_diff_0_cache& laplace_diff_0, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  blend_us_laplace_diff_0_rd0_res = blend_us_laplace_diff_0_rd0_select(laplace_diff_0, d0, d1);
	set_at<0, 32>(result, blend_us_laplace_diff_0_rd0_res);
	return result;
}

// laplace_diff_0_update_0_write
//	laplace_diff_0_laplace_diff_0_update_0_write0
inline void laplace_diff_0_laplace_diff_0_update_0_write_bundle_write(hw_uint<32>& laplace_diff_0_update_0_write, laplace_diff_0_cache& laplace_diff_0, int d0, int d1) {
	hw_uint<32>  laplace_diff_0_laplace_diff_0_update_0_write0_res = laplace_diff_0_update_0_write.extract<0, 31>();
	laplace_diff_0_laplace_diff_0_update_0_write0_write(laplace_diff_0_laplace_diff_0_update_0_write0_res, laplace_diff_0, d0, d1);
}

#include "hw_classes.h"

struct laplace_diff_1_laplace_diff_1_update_0_write0_to_blend_us_laplace_diff_1_rd0_cache {
	// RAM Box: {[0, 15], [0, 15]}
	// Capacity: 16
	// # of read delays: 17
	fifo<hw_uint<32> , 16> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(15 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct laplace_diff_1_cache {
  laplace_diff_1_laplace_diff_1_update_0_write0_to_blend_us_laplace_diff_1_rd0_cache laplace_diff_1_laplace_diff_1_update_0_write0_to_blend_us_laplace_diff_1_rd0;
};



inline void laplace_diff_1_laplace_diff_1_update_0_write0_write(hw_uint<32> & laplace_diff_1_laplace_diff_1_update_0_write0, laplace_diff_1_cache& laplace_diff_1, int d0, int d1) {
  laplace_diff_1.laplace_diff_1_laplace_diff_1_update_0_write0_to_blend_us_laplace_diff_1_rd0.push(laplace_diff_1_laplace_diff_1_update_0_write0);
}

inline hw_uint<32>  blend_us_laplace_diff_1_rd0_select(laplace_diff_1_cache& laplace_diff_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=laplace_diff_1 inter false
#endif //__VIVADO_SYNTH__
  // blend_us_laplace_diff_1_rd0 read pattern: { blend_us_laplace_diff_1_update_0[d0, d1] -> laplace_diff_1[o0, o1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { blend_us_laplace_diff_1_update_0[d0, d1] -> [30 + d1, 30 + d0, 20] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { laplace_diff_1_update_0[d0, d1] -> [30 + 2d1, 30 + 2d0, 16] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  // DD fold: { blend_us_laplace_diff_1_update_0[d0, d1] -> (15 - floor((2d0)/4)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 29 and 0 < d1 <= 31 }
  auto value_laplace_diff_1_laplace_diff_1_update_0_write0 = laplace_diff_1.laplace_diff_1_laplace_diff_1_update_0_write0_to_blend_us_laplace_diff_1_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 29 - d0 >= 0) ? ((15 - floord(2*d0, 4))) : 0);
  return value_laplace_diff_1_laplace_diff_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// blend_us_laplace_diff_1_update_0_read
//	blend_us_laplace_diff_1_rd0
inline hw_uint<32> laplace_diff_1_blend_us_laplace_diff_1_update_0_read_bundle_read(laplace_diff_1_cache& laplace_diff_1, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  blend_us_laplace_diff_1_rd0_res = blend_us_laplace_diff_1_rd0_select(laplace_diff_1, d0, d1);
	set_at<0, 32>(result, blend_us_laplace_diff_1_rd0_res);
	return result;
}

// laplace_diff_1_update_0_write
//	laplace_diff_1_laplace_diff_1_update_0_write0
inline void laplace_diff_1_laplace_diff_1_update_0_write_bundle_write(hw_uint<32>& laplace_diff_1_update_0_write, laplace_diff_1_cache& laplace_diff_1, int d0, int d1) {
	hw_uint<32>  laplace_diff_1_laplace_diff_1_update_0_write0_res = laplace_diff_1_update_0_write.extract<0, 31>();
	laplace_diff_1_laplace_diff_1_update_0_write0_write(laplace_diff_1_laplace_diff_1_update_0_write0_res, laplace_diff_1, d0, d1);
}

#include "hw_classes.h"

struct laplace_diff_2_laplace_diff_2_update_0_write0_to_blend_us_laplace_diff_2_rd0_cache {
	// RAM Box: {[0, 7], [0, 7]}
	// Capacity: 18
	// # of read delays: 19
	fifo<hw_uint<32> , 18> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(17 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct laplace_diff_2_cache {
  laplace_diff_2_laplace_diff_2_update_0_write0_to_blend_us_laplace_diff_2_rd0_cache laplace_diff_2_laplace_diff_2_update_0_write0_to_blend_us_laplace_diff_2_rd0;
};



inline void laplace_diff_2_laplace_diff_2_update_0_write0_write(hw_uint<32> & laplace_diff_2_laplace_diff_2_update_0_write0, laplace_diff_2_cache& laplace_diff_2, int d0, int d1) {
  laplace_diff_2.laplace_diff_2_laplace_diff_2_update_0_write0_to_blend_us_laplace_diff_2_rd0.push(laplace_diff_2_laplace_diff_2_update_0_write0);
}

inline hw_uint<32>  blend_us_laplace_diff_2_rd0_select(laplace_diff_2_cache& laplace_diff_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=laplace_diff_2 inter false
#endif //__VIVADO_SYNTH__
  // blend_us_laplace_diff_2_rd0 read pattern: { blend_us_laplace_diff_2_update_0[d0, d1] -> laplace_diff_2[o0, o1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and -3 + d0 <= 4o0 <= d0 and -3 + d1 <= 4o1 <= d1 }
  // Read schedule : { blend_us_laplace_diff_2_update_0[d0, d1] -> [30 + d1, 30 + d0, 19] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { laplace_diff_2_update_0[d0, d1] -> [30 + 4d1, 30 + 4d0, 15] : 0 <= d0 <= 7 and 0 <= d1 <= 7 }
  // DD fold: { blend_us_laplace_diff_2_update_0[d0, d1] -> ((-7 + floor((d0)/4)) * floor((d1)/4) + (7 - floor((d0)/4)) * floor((3 + d1)/4)) : 0 <= d0 <= 27 and 30 <= d1 <= 31; blend_us_laplace_diff_2_update_0[d0, d1] -> ((7 - floor((d0)/4)) * floor((d1)/4)^2 + (-14 + 2 * floor((d0)/4)) * floor((d1)/4) * floor((3 + d1)/4) + (7 - floor((d0)/4)) * floor((3 + d1)/4)^2) : 0 <= d0 <= 27 and 4 <= d1 <= 29; blend_us_laplace_diff_2_update_0[d0, d1] -> ((-7 + floor((d0)/4)) * floor((d1)/4) + (7 - floor((d0)/4)) * floor((3 + d1)/4)) : 0 <= d0 <= 27 and 0 < d1 <= 3 }
  auto value_laplace_diff_2_laplace_diff_2_update_0_write0 = laplace_diff_2.laplace_diff_2_laplace_diff_2_update_0_write0_to_blend_us_laplace_diff_2_rd0.peek(/* one reader or all rams */ ((-30 + d1 >= 0 && 27 - d0 >= 0) || (3 - d1 >= 0 && 27 - d0 >= 0 && -1 + d1 >= 0)) ? ((7 - floord(d0, 4))) : (29 - d1 >= 0 && 27 - d0 >= 0 && -4 + d1 >= 0) ? (((7 - floord(d0, 4)) * floord(d1, 4)*floord(d1, 4) + (-14 + 2 * floord(d0, 4)) * floord(d1, 4) * floord(3 + d1, 4) + (7 - floord(d0, 4)) * floord(3 + d1, 4)*floord(3 + d1, 4))) : 0);
  return value_laplace_diff_2_laplace_diff_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// blend_us_laplace_diff_2_update_0_read
//	blend_us_laplace_diff_2_rd0
inline hw_uint<32> laplace_diff_2_blend_us_laplace_diff_2_update_0_read_bundle_read(laplace_diff_2_cache& laplace_diff_2, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  blend_us_laplace_diff_2_rd0_res = blend_us_laplace_diff_2_rd0_select(laplace_diff_2, d0, d1);
	set_at<0, 32>(result, blend_us_laplace_diff_2_rd0_res);
	return result;
}

// laplace_diff_2_update_0_write
//	laplace_diff_2_laplace_diff_2_update_0_write0
inline void laplace_diff_2_laplace_diff_2_update_0_write_bundle_write(hw_uint<32>& laplace_diff_2_update_0_write, laplace_diff_2_cache& laplace_diff_2, int d0, int d1) {
	hw_uint<32>  laplace_diff_2_laplace_diff_2_update_0_write0_res = laplace_diff_2_update_0_write.extract<0, 31>();
	laplace_diff_2_laplace_diff_2_update_0_write0_write(laplace_diff_2_laplace_diff_2_update_0_write0_res, laplace_diff_2, d0, d1);
}

#include "hw_classes.h"

struct laplace_diff_3_laplace_diff_3_update_0_write0_to_blend_us_laplace_diff_3_rd0_cache {
	// RAM Box: {[0, 3], [0, 3]}
	// Capacity: 12
	// # of read delays: 13
	fifo<hw_uint<32> , 12> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(11 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct laplace_diff_3_cache {
  laplace_diff_3_laplace_diff_3_update_0_write0_to_blend_us_laplace_diff_3_rd0_cache laplace_diff_3_laplace_diff_3_update_0_write0_to_blend_us_laplace_diff_3_rd0;
};



inline void laplace_diff_3_laplace_diff_3_update_0_write0_write(hw_uint<32> & laplace_diff_3_laplace_diff_3_update_0_write0, laplace_diff_3_cache& laplace_diff_3, int d0, int d1) {
  laplace_diff_3.laplace_diff_3_laplace_diff_3_update_0_write0_to_blend_us_laplace_diff_3_rd0.push(laplace_diff_3_laplace_diff_3_update_0_write0);
}

inline hw_uint<32>  blend_us_laplace_diff_3_rd0_select(laplace_diff_3_cache& laplace_diff_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=laplace_diff_3 inter false
#endif //__VIVADO_SYNTH__
  // blend_us_laplace_diff_3_rd0 read pattern: { blend_us_laplace_diff_3_update_0[d0, d1] -> laplace_diff_3[o0, o1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and -7 + d0 <= 8o0 <= d0 and -7 + d1 <= 8o1 <= d1 }
  // Read schedule : { blend_us_laplace_diff_3_update_0[d0, d1] -> [30 + d1, 30 + d0, 18] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { laplace_diff_3_update_0[d0, d1] -> [30 + 8d1, 30 + 8d0, 14] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // DD fold: { blend_us_laplace_diff_3_update_0[d0, d1] -> ((-3 + floor((d0)/8)) * floor((d1)/8) + (3 - floor((d0)/8)) * floor((7 + d1)/8)) : 0 <= d0 <= 23 and 26 <= d1 <= 31; blend_us_laplace_diff_3_update_0[d0, d1] -> ((3 - floor((d0)/8)) * floor((d1)/8)^2 + (-6 + 2 * floor((d0)/8)) * floor((d1)/8) * floor((7 + d1)/8) + (3 - floor((d0)/8)) * floor((7 + d1)/8)^2) : 0 <= d0 <= 23 and 8 <= d1 <= 25; blend_us_laplace_diff_3_update_0[d0, d1] -> ((-3 + floor((d0)/8)) * floor((d1)/8) + (3 - floor((d0)/8)) * floor((7 + d1)/8)) : 0 <= d0 <= 23 and 0 < d1 <= 7 }
  auto value_laplace_diff_3_laplace_diff_3_update_0_write0 = laplace_diff_3.laplace_diff_3_laplace_diff_3_update_0_write0_to_blend_us_laplace_diff_3_rd0.peek(/* one reader or all rams */ ((-26 + d1 >= 0 && 23 - d0 >= 0) || (7 - d1 >= 0 && 23 - d0 >= 0 && -1 + d1 >= 0)) ? ((3 - floord(d0, 8))) : (25 - d1 >= 0 && 23 - d0 >= 0 && -8 + d1 >= 0) ? (((3 - floord(d0, 8)) * floord(d1, 8)*floord(d1, 8) + (-6 + 2 * floord(d0, 8)) * floord(d1, 8) * floord(7 + d1, 8) + (3 - floord(d0, 8)) * floord(7 + d1, 8)*floord(7 + d1, 8))) : 0);
  return value_laplace_diff_3_laplace_diff_3_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// blend_us_laplace_diff_3_update_0_read
//	blend_us_laplace_diff_3_rd0
inline hw_uint<32> laplace_diff_3_blend_us_laplace_diff_3_update_0_read_bundle_read(laplace_diff_3_cache& laplace_diff_3, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  blend_us_laplace_diff_3_rd0_res = blend_us_laplace_diff_3_rd0_select(laplace_diff_3, d0, d1);
	set_at<0, 32>(result, blend_us_laplace_diff_3_rd0_res);
	return result;
}

// laplace_diff_3_update_0_write
//	laplace_diff_3_laplace_diff_3_update_0_write0
inline void laplace_diff_3_laplace_diff_3_update_0_write_bundle_write(hw_uint<32>& laplace_diff_3_update_0_write, laplace_diff_3_cache& laplace_diff_3, int d0, int d1) {
	hw_uint<32>  laplace_diff_3_laplace_diff_3_update_0_write0_res = laplace_diff_3_update_0_write.extract<0, 31>();
	laplace_diff_3_laplace_diff_3_update_0_write0_write(laplace_diff_3_laplace_diff_3_update_0_write0_res, laplace_diff_3, d0, d1);
}

#include "hw_classes.h"

struct laplace_us_0_laplace_us_0_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 31], [0, 31]}
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct laplace_us_0_cache {
  laplace_us_0_laplace_us_0_update_0_write0_merged_banks_1_cache laplace_us_0_laplace_us_0_update_0_write0_merged_banks_1;
};



inline void laplace_us_0_laplace_us_0_update_0_write0_write(hw_uint<32> & laplace_us_0_laplace_us_0_update_0_write0, laplace_us_0_cache& laplace_us_0, int d0, int d1) {
  laplace_us_0.laplace_us_0_laplace_us_0_update_0_write0_merged_banks_1.push(laplace_us_0_laplace_us_0_update_0_write0);
}

inline hw_uint<32>  laplace_diff_0_rd0_select(laplace_us_0_cache& laplace_us_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=laplace_us_0 inter false
#endif //__VIVADO_SYNTH__
  // laplace_diff_0_rd0 read pattern: { laplace_diff_0_update_0[d0, d1] -> laplace_us_0[d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { laplace_diff_0_update_0[d0, d1] -> [30 + d1, 30 + d0, 17] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { laplace_us_0_update_0[d0, d1] -> [30 + d1, 30 + d0, 13] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // DD fold: {  }
  auto value_laplace_us_0_laplace_us_0_update_0_write0 = laplace_us_0.laplace_us_0_laplace_us_0_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_laplace_us_0_laplace_us_0_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// laplace_diff_0_update_0_read
//	laplace_diff_0_rd0
inline hw_uint<32> laplace_us_0_laplace_diff_0_update_0_read_bundle_read(laplace_us_0_cache& laplace_us_0, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  laplace_diff_0_rd0_res = laplace_diff_0_rd0_select(laplace_us_0, d0, d1);
	set_at<0, 32>(result, laplace_diff_0_rd0_res);
	return result;
}

// laplace_us_0_update_0_write
//	laplace_us_0_laplace_us_0_update_0_write0
inline void laplace_us_0_laplace_us_0_update_0_write_bundle_write(hw_uint<32>& laplace_us_0_update_0_write, laplace_us_0_cache& laplace_us_0, int d0, int d1) {
	hw_uint<32>  laplace_us_0_laplace_us_0_update_0_write0_res = laplace_us_0_update_0_write.extract<0, 31>();
	laplace_us_0_laplace_us_0_update_0_write0_write(laplace_us_0_laplace_us_0_update_0_write0_res, laplace_us_0, d0, d1);
}

#include "hw_classes.h"

struct laplace_us_1_laplace_us_1_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 15], [0, 15]}
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct laplace_us_1_cache {
  laplace_us_1_laplace_us_1_update_0_write0_merged_banks_1_cache laplace_us_1_laplace_us_1_update_0_write0_merged_banks_1;
};



inline void laplace_us_1_laplace_us_1_update_0_write0_write(hw_uint<32> & laplace_us_1_laplace_us_1_update_0_write0, laplace_us_1_cache& laplace_us_1, int d0, int d1) {
  laplace_us_1.laplace_us_1_laplace_us_1_update_0_write0_merged_banks_1.push(laplace_us_1_laplace_us_1_update_0_write0);
}

inline hw_uint<32>  laplace_diff_1_rd0_select(laplace_us_1_cache& laplace_us_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=laplace_us_1 inter false
#endif //__VIVADO_SYNTH__
  // laplace_diff_1_rd0 read pattern: { laplace_diff_1_update_0[d0, d1] -> laplace_us_1[d0, d1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  // Read schedule : { laplace_diff_1_update_0[d0, d1] -> [30 + 2d1, 30 + 2d0, 16] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  // Write schedule: { laplace_us_1_update_0[d0, d1] -> [30 + 2d1, 30 + 2d0, 12] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  // DD fold: {  }
  auto value_laplace_us_1_laplace_us_1_update_0_write0 = laplace_us_1.laplace_us_1_laplace_us_1_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_laplace_us_1_laplace_us_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// laplace_diff_1_update_0_read
//	laplace_diff_1_rd0
inline hw_uint<32> laplace_us_1_laplace_diff_1_update_0_read_bundle_read(laplace_us_1_cache& laplace_us_1, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  laplace_diff_1_rd0_res = laplace_diff_1_rd0_select(laplace_us_1, d0, d1);
	set_at<0, 32>(result, laplace_diff_1_rd0_res);
	return result;
}

// laplace_us_1_update_0_write
//	laplace_us_1_laplace_us_1_update_0_write0
inline void laplace_us_1_laplace_us_1_update_0_write_bundle_write(hw_uint<32>& laplace_us_1_update_0_write, laplace_us_1_cache& laplace_us_1, int d0, int d1) {
	hw_uint<32>  laplace_us_1_laplace_us_1_update_0_write0_res = laplace_us_1_update_0_write.extract<0, 31>();
	laplace_us_1_laplace_us_1_update_0_write0_write(laplace_us_1_laplace_us_1_update_0_write0_res, laplace_us_1, d0, d1);
}

#include "hw_classes.h"

struct laplace_us_2_laplace_us_2_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 7], [0, 7]}
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct laplace_us_2_cache {
  laplace_us_2_laplace_us_2_update_0_write0_merged_banks_1_cache laplace_us_2_laplace_us_2_update_0_write0_merged_banks_1;
};



inline void laplace_us_2_laplace_us_2_update_0_write0_write(hw_uint<32> & laplace_us_2_laplace_us_2_update_0_write0, laplace_us_2_cache& laplace_us_2, int d0, int d1) {
  laplace_us_2.laplace_us_2_laplace_us_2_update_0_write0_merged_banks_1.push(laplace_us_2_laplace_us_2_update_0_write0);
}

inline hw_uint<32>  laplace_diff_2_rd0_select(laplace_us_2_cache& laplace_us_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=laplace_us_2 inter false
#endif //__VIVADO_SYNTH__
  // laplace_diff_2_rd0 read pattern: { laplace_diff_2_update_0[d0, d1] -> laplace_us_2[d0, d1] : 0 <= d0 <= 7 and 0 <= d1 <= 7 }
  // Read schedule : { laplace_diff_2_update_0[d0, d1] -> [30 + 4d1, 30 + 4d0, 15] : 0 <= d0 <= 7 and 0 <= d1 <= 7 }
  // Write schedule: { laplace_us_2_update_0[d0, d1] -> [30 + 4d1, 30 + 4d0, 11] : 0 <= d0 <= 7 and 0 <= d1 <= 7 }
  // DD fold: {  }
  auto value_laplace_us_2_laplace_us_2_update_0_write0 = laplace_us_2.laplace_us_2_laplace_us_2_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_laplace_us_2_laplace_us_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// laplace_diff_2_update_0_read
//	laplace_diff_2_rd0
inline hw_uint<32> laplace_us_2_laplace_diff_2_update_0_read_bundle_read(laplace_us_2_cache& laplace_us_2, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  laplace_diff_2_rd0_res = laplace_diff_2_rd0_select(laplace_us_2, d0, d1);
	set_at<0, 32>(result, laplace_diff_2_rd0_res);
	return result;
}

// laplace_us_2_update_0_write
//	laplace_us_2_laplace_us_2_update_0_write0
inline void laplace_us_2_laplace_us_2_update_0_write_bundle_write(hw_uint<32>& laplace_us_2_update_0_write, laplace_us_2_cache& laplace_us_2, int d0, int d1) {
	hw_uint<32>  laplace_us_2_laplace_us_2_update_0_write0_res = laplace_us_2_update_0_write.extract<0, 31>();
	laplace_us_2_laplace_us_2_update_0_write0_write(laplace_us_2_laplace_us_2_update_0_write0_res, laplace_us_2, d0, d1);
}

#include "hw_classes.h"

struct laplace_us_3_laplace_us_3_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 3], [0, 3]}
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct laplace_us_3_cache {
  laplace_us_3_laplace_us_3_update_0_write0_merged_banks_1_cache laplace_us_3_laplace_us_3_update_0_write0_merged_banks_1;
};



inline void laplace_us_3_laplace_us_3_update_0_write0_write(hw_uint<32> & laplace_us_3_laplace_us_3_update_0_write0, laplace_us_3_cache& laplace_us_3, int d0, int d1) {
  laplace_us_3.laplace_us_3_laplace_us_3_update_0_write0_merged_banks_1.push(laplace_us_3_laplace_us_3_update_0_write0);
}

inline hw_uint<32>  laplace_diff_3_rd0_select(laplace_us_3_cache& laplace_us_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=laplace_us_3 inter false
#endif //__VIVADO_SYNTH__
  // laplace_diff_3_rd0 read pattern: { laplace_diff_3_update_0[d0, d1] -> laplace_us_3[d0, d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // Read schedule : { laplace_diff_3_update_0[d0, d1] -> [30 + 8d1, 30 + 8d0, 14] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // Write schedule: { laplace_us_3_update_0[d0, d1] -> [30 + 8d1, 30 + 8d0, 10] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // DD fold: {  }
  auto value_laplace_us_3_laplace_us_3_update_0_write0 = laplace_us_3.laplace_us_3_laplace_us_3_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_laplace_us_3_laplace_us_3_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// laplace_diff_3_update_0_read
//	laplace_diff_3_rd0
inline hw_uint<32> laplace_us_3_laplace_diff_3_update_0_read_bundle_read(laplace_us_3_cache& laplace_us_3, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  laplace_diff_3_rd0_res = laplace_diff_3_rd0_select(laplace_us_3, d0, d1);
	set_at<0, 32>(result, laplace_diff_3_rd0_res);
	return result;
}

// laplace_us_3_update_0_write
//	laplace_us_3_laplace_us_3_update_0_write0
inline void laplace_us_3_laplace_us_3_update_0_write_bundle_write(hw_uint<32>& laplace_us_3_update_0_write, laplace_us_3_cache& laplace_us_3, int d0, int d1) {
	hw_uint<32>  laplace_us_3_laplace_us_3_update_0_write0_res = laplace_us_3_update_0_write.extract<0, 31>();
	laplace_us_3_laplace_us_3_update_0_write0_write(laplace_us_3_laplace_us_3_update_0_write0_res, laplace_us_3, d0, d1);
}



// Operation logic
inline void in_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in_off_chip, in_cache& in, int d0, int d1) {
	// Consume: in_off_chip
	auto in_off_chip_0_c__0_value = in_off_chip.read();
	auto compute_result = id(in_off_chip_0_c__0_value);
	// Produce: in
	in_in_update_0_write_bundle_write(compute_result, in, d0, d1);
#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "in_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

inline void gauss_blur_1_update_0(in_cache& in, gauss_blur_1_cache& gauss_blur_1, int d0, int d1) {
	// Consume: in
	auto in_0_c__0_value = in_gauss_blur_1_update_0_read_bundle_read(in/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "gauss_blur_1_update_0_in," << d0<< "," << d1<< "," <<  in_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = reduce_gauss(in_0_c__0_value);
	// Produce: gauss_blur_1
	gauss_blur_1_gauss_blur_1_update_0_write_bundle_write(compute_result, gauss_blur_1, d0, d1);
#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "gauss_blur_1_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

inline void gauss_ds_1_update_0(gauss_blur_1_cache& gauss_blur_1, gauss_ds_1_cache& gauss_ds_1, int d0, int d1) {
	// Consume: gauss_blur_1
	auto gauss_blur_1_0_c__0_value = gauss_blur_1_gauss_ds_1_update_0_read_bundle_read(gauss_blur_1/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "gauss_ds_1_update_0_gauss_blur_1," << d0<< "," << d1<< "," <<  gauss_blur_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = id(gauss_blur_1_0_c__0_value);
	// Produce: gauss_ds_1
	gauss_ds_1_gauss_ds_1_update_0_write_bundle_write(compute_result, gauss_ds_1, d0, d1);
#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "gauss_ds_1_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

inline void gauss_blur_2_update_0(gauss_ds_1_cache& gauss_ds_1, gauss_blur_2_cache& gauss_blur_2, int d0, int d1) {
	// Consume: gauss_ds_1
	auto gauss_ds_1_0_c__0_value = gauss_ds_1_gauss_blur_2_update_0_read_bundle_read(gauss_ds_1/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "gauss_blur_2_update_0_gauss_ds_1," << d0<< "," << d1<< "," <<  gauss_ds_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = reduce_gauss(gauss_ds_1_0_c__0_value);
	// Produce: gauss_blur_2
	gauss_blur_2_gauss_blur_2_update_0_write_bundle_write(compute_result, gauss_blur_2, d0, d1);
#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "gauss_blur_2_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

inline void gauss_ds_2_update_0(gauss_blur_2_cache& gauss_blur_2, gauss_ds_2_cache& gauss_ds_2, int d0, int d1) {
	// Consume: gauss_blur_2
	auto gauss_blur_2_0_c__0_value = gauss_blur_2_gauss_ds_2_update_0_read_bundle_read(gauss_blur_2/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "gauss_ds_2_update_0_gauss_blur_2," << d0<< "," << d1<< "," <<  gauss_blur_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = id(gauss_blur_2_0_c__0_value);
	// Produce: gauss_ds_2
	gauss_ds_2_gauss_ds_2_update_0_write_bundle_write(compute_result, gauss_ds_2, d0, d1);
#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "gauss_ds_2_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

inline void gauss_blur_3_update_0(gauss_ds_2_cache& gauss_ds_2, gauss_blur_3_cache& gauss_blur_3, int d0, int d1) {
	// Consume: gauss_ds_2
	auto gauss_ds_2_0_c__0_value = gauss_ds_2_gauss_blur_3_update_0_read_bundle_read(gauss_ds_2/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "gauss_blur_3_update_0_gauss_ds_2," << d0<< "," << d1<< "," <<  gauss_ds_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = reduce_gauss(gauss_ds_2_0_c__0_value);
	// Produce: gauss_blur_3
	gauss_blur_3_gauss_blur_3_update_0_write_bundle_write(compute_result, gauss_blur_3, d0, d1);
#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "gauss_blur_3_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

inline void gauss_ds_3_update_0(gauss_blur_3_cache& gauss_blur_3, gauss_ds_3_cache& gauss_ds_3, int d0, int d1) {
	// Consume: gauss_blur_3
	auto gauss_blur_3_0_c__0_value = gauss_blur_3_gauss_ds_3_update_0_read_bundle_read(gauss_blur_3/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "gauss_ds_3_update_0_gauss_blur_3," << d0<< "," << d1<< "," <<  gauss_blur_3_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = id(gauss_blur_3_0_c__0_value);
	// Produce: gauss_ds_3
	gauss_ds_3_gauss_ds_3_update_0_write_bundle_write(compute_result, gauss_ds_3, d0, d1);
#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "gauss_ds_3_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

inline void gauss_blur_4_update_0(gauss_ds_3_cache& gauss_ds_3, gauss_blur_4_cache& gauss_blur_4, int d0, int d1) {
	// Consume: gauss_ds_3
	auto gauss_ds_3_0_c__0_value = gauss_ds_3_gauss_blur_4_update_0_read_bundle_read(gauss_ds_3/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "gauss_blur_4_update_0_gauss_ds_3," << d0<< "," << d1<< "," <<  gauss_ds_3_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = reduce_gauss(gauss_ds_3_0_c__0_value);
	// Produce: gauss_blur_4
	gauss_blur_4_gauss_blur_4_update_0_write_bundle_write(compute_result, gauss_blur_4, d0, d1);
#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "gauss_blur_4_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

inline void gauss_ds_4_update_0(gauss_blur_4_cache& gauss_blur_4, gauss_ds_4_cache& gauss_ds_4, int d0, int d1) {
	// Consume: gauss_blur_4
	auto gauss_blur_4_0_c__0_value = gauss_blur_4_gauss_ds_4_update_0_read_bundle_read(gauss_blur_4/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "gauss_ds_4_update_0_gauss_blur_4," << d0<< "," << d1<< "," <<  gauss_blur_4_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = id(gauss_blur_4_0_c__0_value);
	// Produce: gauss_ds_4
	gauss_ds_4_gauss_ds_4_update_0_write_bundle_write(compute_result, gauss_ds_4, d0, d1);
#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "gauss_ds_4_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

inline void laplace_us_3_update_0(gauss_ds_4_cache& gauss_ds_4, laplace_us_3_cache& laplace_us_3, int d0, int d1) {
	// Consume: gauss_ds_4
	auto gauss_ds_4_0_c__0_value = gauss_ds_4_laplace_us_3_update_0_read_bundle_read(gauss_ds_4/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "laplace_us_3_update_0_gauss_ds_4," << d0<< "," << d1<< "," <<  gauss_ds_4_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = id(gauss_ds_4_0_c__0_value);
	// Produce: laplace_us_3
	laplace_us_3_laplace_us_3_update_0_write_bundle_write(compute_result, laplace_us_3, d0, d1);
#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "laplace_us_3_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

inline void laplace_us_2_update_0(gauss_ds_3_cache& gauss_ds_3, laplace_us_2_cache& laplace_us_2, int d0, int d1) {
	// Consume: gauss_ds_3
	auto gauss_ds_3_0_c__0_value = gauss_ds_3_laplace_us_2_update_0_read_bundle_read(gauss_ds_3/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "laplace_us_2_update_0_gauss_ds_3," << d0<< "," << d1<< "," <<  gauss_ds_3_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = id(gauss_ds_3_0_c__0_value);
	// Produce: laplace_us_2
	laplace_us_2_laplace_us_2_update_0_write_bundle_write(compute_result, laplace_us_2, d0, d1);
#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "laplace_us_2_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

inline void laplace_us_1_update_0(gauss_ds_2_cache& gauss_ds_2, laplace_us_1_cache& laplace_us_1, int d0, int d1) {
	// Consume: gauss_ds_2
	auto gauss_ds_2_0_c__0_value = gauss_ds_2_laplace_us_1_update_0_read_bundle_read(gauss_ds_2/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "laplace_us_1_update_0_gauss_ds_2," << d0<< "," << d1<< "," <<  gauss_ds_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = id(gauss_ds_2_0_c__0_value);
	// Produce: laplace_us_1
	laplace_us_1_laplace_us_1_update_0_write_bundle_write(compute_result, laplace_us_1, d0, d1);
#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "laplace_us_1_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

inline void laplace_us_0_update_0(gauss_ds_1_cache& gauss_ds_1, laplace_us_0_cache& laplace_us_0, int d0, int d1) {
	// Consume: gauss_ds_1
	auto gauss_ds_1_0_c__0_value = gauss_ds_1_laplace_us_0_update_0_read_bundle_read(gauss_ds_1/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "laplace_us_0_update_0_gauss_ds_1," << d0<< "," << d1<< "," <<  gauss_ds_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = id(gauss_ds_1_0_c__0_value);
	// Produce: laplace_us_0
	laplace_us_0_laplace_us_0_update_0_write_bundle_write(compute_result, laplace_us_0, d0, d1);
#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "laplace_us_0_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

inline void laplace_diff_3_update_0(gauss_ds_3_cache& gauss_ds_3, laplace_us_3_cache& laplace_us_3, laplace_diff_3_cache& laplace_diff_3, int d0, int d1) {
	// Consume: gauss_ds_3
	auto gauss_ds_3_0_c__0_value = gauss_ds_3_laplace_diff_3_update_0_read_bundle_read(gauss_ds_3/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "laplace_diff_3_update_0_gauss_ds_3," << d0<< "," << d1<< "," <<  gauss_ds_3_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	// Consume: laplace_us_3
	auto laplace_us_3_0_c__0_value = laplace_us_3_laplace_diff_3_update_0_read_bundle_read(laplace_us_3/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "laplace_diff_3_update_0_laplace_us_3," << d0<< "," << d1<< "," <<  laplace_us_3_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = diff(gauss_ds_3_0_c__0_value, laplace_us_3_0_c__0_value);
	// Produce: laplace_diff_3
	laplace_diff_3_laplace_diff_3_update_0_write_bundle_write(compute_result, laplace_diff_3, d0, d1);
#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "laplace_diff_3_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

inline void laplace_diff_2_update_0(gauss_ds_2_cache& gauss_ds_2, laplace_us_2_cache& laplace_us_2, laplace_diff_2_cache& laplace_diff_2, int d0, int d1) {
	// Consume: gauss_ds_2
	auto gauss_ds_2_0_c__0_value = gauss_ds_2_laplace_diff_2_update_0_read_bundle_read(gauss_ds_2/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "laplace_diff_2_update_0_gauss_ds_2," << d0<< "," << d1<< "," <<  gauss_ds_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	// Consume: laplace_us_2
	auto laplace_us_2_0_c__0_value = laplace_us_2_laplace_diff_2_update_0_read_bundle_read(laplace_us_2/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "laplace_diff_2_update_0_laplace_us_2," << d0<< "," << d1<< "," <<  laplace_us_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = diff(gauss_ds_2_0_c__0_value, laplace_us_2_0_c__0_value);
	// Produce: laplace_diff_2
	laplace_diff_2_laplace_diff_2_update_0_write_bundle_write(compute_result, laplace_diff_2, d0, d1);
#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "laplace_diff_2_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

inline void laplace_diff_1_update_0(gauss_ds_1_cache& gauss_ds_1, laplace_us_1_cache& laplace_us_1, laplace_diff_1_cache& laplace_diff_1, int d0, int d1) {
	// Consume: gauss_ds_1
	auto gauss_ds_1_0_c__0_value = gauss_ds_1_laplace_diff_1_update_0_read_bundle_read(gauss_ds_1/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "laplace_diff_1_update_0_gauss_ds_1," << d0<< "," << d1<< "," <<  gauss_ds_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	// Consume: laplace_us_1
	auto laplace_us_1_0_c__0_value = laplace_us_1_laplace_diff_1_update_0_read_bundle_read(laplace_us_1/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "laplace_diff_1_update_0_laplace_us_1," << d0<< "," << d1<< "," <<  laplace_us_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = diff(gauss_ds_1_0_c__0_value, laplace_us_1_0_c__0_value);
	// Produce: laplace_diff_1
	laplace_diff_1_laplace_diff_1_update_0_write_bundle_write(compute_result, laplace_diff_1, d0, d1);
#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "laplace_diff_1_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

inline void laplace_diff_0_update_0(in_cache& in, laplace_us_0_cache& laplace_us_0, laplace_diff_0_cache& laplace_diff_0, int d0, int d1) {
	// Consume: in
	auto in_0_c__0_value = in_laplace_diff_0_update_0_read_bundle_read(in/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "laplace_diff_0_update_0_in," << d0<< "," << d1<< "," <<  in_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	// Consume: laplace_us_0
	auto laplace_us_0_0_c__0_value = laplace_us_0_laplace_diff_0_update_0_read_bundle_read(laplace_us_0/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "laplace_diff_0_update_0_laplace_us_0," << d0<< "," << d1<< "," <<  laplace_us_0_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = diff(in_0_c__0_value, laplace_us_0_0_c__0_value);
	// Produce: laplace_diff_0
	laplace_diff_0_laplace_diff_0_update_0_write_bundle_write(compute_result, laplace_diff_0, d0, d1);
#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "laplace_diff_0_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

inline void blend_us_laplace_diff_3_update_0(laplace_diff_3_cache& laplace_diff_3, blend_us_laplace_diff_3_cache& blend_us_laplace_diff_3, int d0, int d1) {
	// Consume: laplace_diff_3
	auto laplace_diff_3_0_c__0_value = laplace_diff_3_blend_us_laplace_diff_3_update_0_read_bundle_read(laplace_diff_3/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "blend_us_laplace_diff_3_update_0_laplace_diff_3," << d0<< "," << d1<< "," <<  laplace_diff_3_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = id(laplace_diff_3_0_c__0_value);
	// Produce: blend_us_laplace_diff_3
	blend_us_laplace_diff_3_blend_us_laplace_diff_3_update_0_write_bundle_write(compute_result, blend_us_laplace_diff_3, d0, d1);
#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "blend_us_laplace_diff_3_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

inline void blend_us_laplace_diff_2_update_0(laplace_diff_2_cache& laplace_diff_2, blend_us_laplace_diff_2_cache& blend_us_laplace_diff_2, int d0, int d1) {
	// Consume: laplace_diff_2
	auto laplace_diff_2_0_c__0_value = laplace_diff_2_blend_us_laplace_diff_2_update_0_read_bundle_read(laplace_diff_2/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "blend_us_laplace_diff_2_update_0_laplace_diff_2," << d0<< "," << d1<< "," <<  laplace_diff_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = id(laplace_diff_2_0_c__0_value);
	// Produce: blend_us_laplace_diff_2
	blend_us_laplace_diff_2_blend_us_laplace_diff_2_update_0_write_bundle_write(compute_result, blend_us_laplace_diff_2, d0, d1);
#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "blend_us_laplace_diff_2_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

inline void blend_us_laplace_diff_1_update_0(laplace_diff_1_cache& laplace_diff_1, blend_us_laplace_diff_1_cache& blend_us_laplace_diff_1, int d0, int d1) {
	// Consume: laplace_diff_1
	auto laplace_diff_1_0_c__0_value = laplace_diff_1_blend_us_laplace_diff_1_update_0_read_bundle_read(laplace_diff_1/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "blend_us_laplace_diff_1_update_0_laplace_diff_1," << d0<< "," << d1<< "," <<  laplace_diff_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = id(laplace_diff_1_0_c__0_value);
	// Produce: blend_us_laplace_diff_1
	blend_us_laplace_diff_1_blend_us_laplace_diff_1_update_0_write_bundle_write(compute_result, blend_us_laplace_diff_1, d0, d1);
#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "blend_us_laplace_diff_1_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

inline void blend_us_laplace_diff_0_update_0(laplace_diff_0_cache& laplace_diff_0, blend_us_laplace_diff_0_cache& blend_us_laplace_diff_0, int d0, int d1) {
	// Consume: laplace_diff_0
	auto laplace_diff_0_0_c__0_value = laplace_diff_0_blend_us_laplace_diff_0_update_0_read_bundle_read(laplace_diff_0/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "blend_us_laplace_diff_0_update_0_laplace_diff_0," << d0<< "," << d1<< "," <<  laplace_diff_0_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = id(laplace_diff_0_0_c__0_value);
	// Produce: blend_us_laplace_diff_0
	blend_us_laplace_diff_0_blend_us_laplace_diff_0_update_0_write_bundle_write(compute_result, blend_us_laplace_diff_0, d0, d1);
#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "blend_us_laplace_diff_0_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

inline void blended_update_0(blend_us_laplace_diff_0_cache& blend_us_laplace_diff_0, blend_us_laplace_diff_1_cache& blend_us_laplace_diff_1, blend_us_laplace_diff_2_cache& blend_us_laplace_diff_2, blend_us_laplace_diff_3_cache& blend_us_laplace_diff_3, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */blended, int d0, int d1) {
	// Consume: blend_us_laplace_diff_0
	auto blend_us_laplace_diff_0_0_c__0_value = blend_us_laplace_diff_0_blended_update_0_read_bundle_read(blend_us_laplace_diff_0/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "blended_update_0_blend_us_laplace_diff_0," << d0<< "," << d1<< "," <<  blend_us_laplace_diff_0_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	// Consume: blend_us_laplace_diff_1
	auto blend_us_laplace_diff_1_0_c__0_value = blend_us_laplace_diff_1_blended_update_0_read_bundle_read(blend_us_laplace_diff_1/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "blended_update_0_blend_us_laplace_diff_1," << d0<< "," << d1<< "," <<  blend_us_laplace_diff_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	// Consume: blend_us_laplace_diff_2
	auto blend_us_laplace_diff_2_0_c__0_value = blend_us_laplace_diff_2_blended_update_0_read_bundle_read(blend_us_laplace_diff_2/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "blended_update_0_blend_us_laplace_diff_2," << d0<< "," << d1<< "," <<  blend_us_laplace_diff_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	// Consume: blend_us_laplace_diff_3
	auto blend_us_laplace_diff_3_0_c__0_value = blend_us_laplace_diff_3_blended_update_0_read_bundle_read(blend_us_laplace_diff_3/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "blended_update_0_blend_us_laplace_diff_3," << d0<< "," << d1<< "," <<  blend_us_laplace_diff_3_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = blend_levels(blend_us_laplace_diff_0_0_c__0_value, blend_us_laplace_diff_1_0_c__0_value, blend_us_laplace_diff_2_0_c__0_value, blend_us_laplace_diff_3_0_c__0_value);
	// Produce: blended
	blended.write(compute_result);
#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "blended_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

// Driver function
void blended_opt(HWStream<hw_uint<32> >& /* get_args num ports = 1 */in_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 1 */blended) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("blended_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  blend_us_laplace_diff_0_cache blend_us_laplace_diff_0;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=blend_us_laplace_diff_0 inter false
#endif //__VIVADO_SYNTH__
  blend_us_laplace_diff_1_cache blend_us_laplace_diff_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=blend_us_laplace_diff_1 inter false
#endif //__VIVADO_SYNTH__
  blend_us_laplace_diff_2_cache blend_us_laplace_diff_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=blend_us_laplace_diff_2 inter false
#endif //__VIVADO_SYNTH__
  blend_us_laplace_diff_3_cache blend_us_laplace_diff_3;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=blend_us_laplace_diff_3 inter false
#endif //__VIVADO_SYNTH__
  gauss_blur_1_cache gauss_blur_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_blur_1 inter false
#endif //__VIVADO_SYNTH__
  gauss_blur_2_cache gauss_blur_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_blur_2 inter false
#endif //__VIVADO_SYNTH__
  gauss_blur_3_cache gauss_blur_3;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_blur_3 inter false
#endif //__VIVADO_SYNTH__
  gauss_blur_4_cache gauss_blur_4;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_blur_4 inter false
#endif //__VIVADO_SYNTH__
  gauss_ds_1_cache gauss_ds_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_1 inter false
#endif //__VIVADO_SYNTH__
  gauss_ds_2_cache gauss_ds_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_2 inter false
#endif //__VIVADO_SYNTH__
  gauss_ds_3_cache gauss_ds_3;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_3 inter false
#endif //__VIVADO_SYNTH__
  gauss_ds_4_cache gauss_ds_4;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_4 inter false
#endif //__VIVADO_SYNTH__
  in_cache in;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=in inter false
#endif //__VIVADO_SYNTH__
  laplace_diff_0_cache laplace_diff_0;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=laplace_diff_0 inter false
#endif //__VIVADO_SYNTH__
  laplace_diff_1_cache laplace_diff_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=laplace_diff_1 inter false
#endif //__VIVADO_SYNTH__
  laplace_diff_2_cache laplace_diff_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=laplace_diff_2 inter false
#endif //__VIVADO_SYNTH__
  laplace_diff_3_cache laplace_diff_3;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=laplace_diff_3 inter false
#endif //__VIVADO_SYNTH__
  laplace_us_0_cache laplace_us_0;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=laplace_us_0 inter false
#endif //__VIVADO_SYNTH__
  laplace_us_1_cache laplace_us_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=laplace_us_1 inter false
#endif //__VIVADO_SYNTH__
  laplace_us_2_cache laplace_us_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=laplace_us_2 inter false
#endif //__VIVADO_SYNTH__
  laplace_us_3_cache laplace_us_3;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=laplace_us_3 inter false
#endif //__VIVADO_SYNTH__
	#ifdef __VIVADO_SYNTH__
	#pragma HLS inline recursive
	#endif // __VIVADO_SYNTH__
	
	for (int c0 = 0; c0 <= 61; c0++) {
	  for (int c1 = 0; c1 <= 61; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS dependence inter false
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((0 <= c1 && c1 <= 46) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 46) && ((c0 - 0) % 1 == 0)) {
	in_update_0(in_off_chip, in, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 46) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 46) && ((c0 - 2) % 1 == 0)) {
	gauss_blur_1_update_0(in, gauss_blur_1, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 46) && ((c1 - 2) % 2 == 0) && (2 <= c0 && c0 <= 46) && ((c0 - 2) % 2 == 0)) {
	gauss_ds_1_update_0(gauss_blur_1, gauss_ds_1, (c1 - 2) / 2, (c0 - 2) / 2);
	    }
	
	    if ((6 <= c1 && c1 <= 46) && ((c1 - 6) % 2 == 0) && (6 <= c0 && c0 <= 46) && ((c0 - 6) % 2 == 0)) {
	gauss_blur_2_update_0(gauss_ds_1, gauss_blur_2, (c1 - 6) / 2, (c0 - 6) / 2);
	    }
	
	    if ((6 <= c1 && c1 <= 46) && ((c1 - 6) % 4 == 0) && (6 <= c0 && c0 <= 46) && ((c0 - 6) % 4 == 0)) {
	gauss_ds_2_update_0(gauss_blur_2, gauss_ds_2, (c1 - 6) / 4, (c0 - 6) / 4);
	    }
	
	    if ((14 <= c1 && c1 <= 46) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 46) && ((c0 - 14) % 4 == 0)) {
	gauss_blur_3_update_0(gauss_ds_2, gauss_blur_3, (c1 - 14) / 4, (c0 - 14) / 4);
	    }
	
	    if ((14 <= c1 && c1 <= 46) && ((c1 - 14) % 8 == 0) && (14 <= c0 && c0 <= 46) && ((c0 - 14) % 8 == 0)) {
	gauss_ds_3_update_0(gauss_blur_3, gauss_ds_3, (c1 - 14) / 8, (c0 - 14) / 8);
	    }
	
	    if ((30 <= c1 && c1 <= 46) && ((c1 - 30) % 8 == 0) && (30 <= c0 && c0 <= 46) && ((c0 - 30) % 8 == 0)) {
	gauss_blur_4_update_0(gauss_ds_3, gauss_blur_4, (c1 - 30) / 8, (c0 - 30) / 8);
	    }
	
	    if ((30 <= c1 && c1 <= 46) && ((c1 - 30) % 16 == 0) && (30 <= c0 && c0 <= 46) && ((c0 - 30) % 16 == 0)) {
	gauss_ds_4_update_0(gauss_blur_4, gauss_ds_4, (c1 - 30) / 16, (c0 - 30) / 16);
	    }
	
	    if ((30 <= c1 && c1 <= 54) && ((c1 - 30) % 8 == 0) && (30 <= c0 && c0 <= 54) && ((c0 - 30) % 8 == 0)) {
	laplace_us_3_update_0(gauss_ds_4, laplace_us_3, (c1 - 30) / 8, (c0 - 30) / 8);
	    }
	
	    if ((30 <= c1 && c1 <= 58) && ((c1 - 30) % 4 == 0) && (30 <= c0 && c0 <= 58) && ((c0 - 30) % 4 == 0)) {
	laplace_us_2_update_0(gauss_ds_3, laplace_us_2, (c1 - 30) / 4, (c0 - 30) / 4);
	    }
	
	    if ((30 <= c1 && c1 <= 60) && ((c1 - 30) % 2 == 0) && (30 <= c0 && c0 <= 60) && ((c0 - 30) % 2 == 0)) {
	laplace_us_1_update_0(gauss_ds_2, laplace_us_1, (c1 - 30) / 2, (c0 - 30) / 2);
	    }
	
	    if ((30 <= c1 && c1 <= 61) && ((c1 - 30) % 1 == 0) && (30 <= c0 && c0 <= 61) && ((c0 - 30) % 1 == 0)) {
	laplace_us_0_update_0(gauss_ds_1, laplace_us_0, (c1 - 30) / 1, (c0 - 30) / 1);
	    }
	
	    if ((30 <= c1 && c1 <= 54) && ((c1 - 30) % 8 == 0) && (30 <= c0 && c0 <= 54) && ((c0 - 30) % 8 == 0)) {
	laplace_diff_3_update_0(gauss_ds_3, laplace_us_3, laplace_diff_3, (c1 - 30) / 8, (c0 - 30) / 8);
	    }
	
	    if ((30 <= c1 && c1 <= 58) && ((c1 - 30) % 4 == 0) && (30 <= c0 && c0 <= 58) && ((c0 - 30) % 4 == 0)) {
	laplace_diff_2_update_0(gauss_ds_2, laplace_us_2, laplace_diff_2, (c1 - 30) / 4, (c0 - 30) / 4);
	    }
	
	    if ((30 <= c1 && c1 <= 60) && ((c1 - 30) % 2 == 0) && (30 <= c0 && c0 <= 60) && ((c0 - 30) % 2 == 0)) {
	laplace_diff_1_update_0(gauss_ds_1, laplace_us_1, laplace_diff_1, (c1 - 30) / 2, (c0 - 30) / 2);
	    }
	
	    if ((30 <= c1 && c1 <= 61) && ((c1 - 30) % 1 == 0) && (30 <= c0 && c0 <= 61) && ((c0 - 30) % 1 == 0)) {
	laplace_diff_0_update_0(in, laplace_us_0, laplace_diff_0, (c1 - 30) / 1, (c0 - 30) / 1);
	    }
	
	    if ((30 <= c1 && c1 <= 61) && ((c1 - 30) % 1 == 0) && (30 <= c0 && c0 <= 61) && ((c0 - 30) % 1 == 0)) {
	blend_us_laplace_diff_3_update_0(laplace_diff_3, blend_us_laplace_diff_3, (c1 - 30) / 1, (c0 - 30) / 1);
	    }
	
	    if ((30 <= c1 && c1 <= 61) && ((c1 - 30) % 1 == 0) && (30 <= c0 && c0 <= 61) && ((c0 - 30) % 1 == 0)) {
	blend_us_laplace_diff_2_update_0(laplace_diff_2, blend_us_laplace_diff_2, (c1 - 30) / 1, (c0 - 30) / 1);
	    }
	
	    if ((30 <= c1 && c1 <= 61) && ((c1 - 30) % 1 == 0) && (30 <= c0 && c0 <= 61) && ((c0 - 30) % 1 == 0)) {
	blend_us_laplace_diff_1_update_0(laplace_diff_1, blend_us_laplace_diff_1, (c1 - 30) / 1, (c0 - 30) / 1);
	    }
	
	    if ((30 <= c1 && c1 <= 61) && ((c1 - 30) % 1 == 0) && (30 <= c0 && c0 <= 61) && ((c0 - 30) % 1 == 0)) {
	blend_us_laplace_diff_0_update_0(laplace_diff_0, blend_us_laplace_diff_0, (c1 - 30) / 1, (c0 - 30) / 1);
	    }
	
	    if ((30 <= c1 && c1 <= 61) && ((c1 - 30) % 1 == 0) && (30 <= c0 && c0 <= 61) && ((c0 - 30) % 1 == 0)) {
	blended_update_0(blend_us_laplace_diff_0, blend_us_laplace_diff_1, blend_us_laplace_diff_2, blend_us_laplace_diff_3, blended, (c1 - 30) / 1, (c0 - 30) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}
