#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "conv_3x3.h"

#include "hw_classes.h"

struct blend_us_laplace_diff_0_blend_us_laplace_diff_0_update_0_write0_to_blended_rd0_cache {
	// RAM Box: {[0, 31], [0, 31]}
	// Capacity: 1024
	// # of read delays: 1024
	fifo<hw_uint<32> , 1024> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(1023 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct blend_us_laplace_diff_0_cache {
  blend_us_laplace_diff_0_blend_us_laplace_diff_0_update_0_write0_to_blended_rd0_cache blend_us_laplace_diff_0_blend_us_laplace_diff_0_update_0_write0_to_blended_rd0;
};



inline void blend_us_laplace_diff_0_blend_us_laplace_diff_0_update_0_write0_write(hw_uint<32> & blend_us_laplace_diff_0_blend_us_laplace_diff_0_update_0_write0, blend_us_laplace_diff_0_cache& blend_us_laplace_diff_0, int d0, int d1) {
  blend_us_laplace_diff_0.blend_us_laplace_diff_0_blend_us_laplace_diff_0_update_0_write0_to_blended_rd0.push(blend_us_laplace_diff_0_blend_us_laplace_diff_0_update_0_write0);
}

inline hw_uint<32>  blended_rd0_select(blend_us_laplace_diff_0_cache& blend_us_laplace_diff_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=blend_us_laplace_diff_0 inter false
#endif //__VIVADO_SYNTH__
  // blended_rd0 read pattern: { blended_update_0[d0, d1] -> blend_us_laplace_diff_0[d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { blended_update_0[i0, i1] -> [3, i1, i0, 5, 0, 0, 0] : 0 <= i0 <= 31 and 0 <= i1 <= 31 }
  // Write schedule: { blend_us_laplace_diff_0_update_0[i0, i1] -> [2, 1, i1, i0, 2, 0, 0] : 0 <= i0 <= 31 and 0 <= i1 <= 31 }
  // DD fold: { blended_update_0[d0, d1] -> ((1023 - d0) - 32 * d1) : 0 <= d0 <= 30 and 0 <= d1 <= 30; blended_update_0[d0, d1] -> (992 - 32 * d1) : d0 = 31 and 0 <= d1 <= 30; blended_update_0[d0, d1] -> (31 - d0) : d1 = 31 and 0 <= d0 <= 30 }
  auto value_blend_us_laplace_diff_0_blend_us_laplace_diff_0_update_0_write0 = blend_us_laplace_diff_0.blend_us_laplace_diff_0_blend_us_laplace_diff_0_update_0_write0_to_blended_rd0.peek(/* one reader or all rams */ (-31 + d1 == 0 && 30 - d0 >= 0) ? ((31 - d0)) : (-31 + d0 == 0 && 30 - d1 >= 0) ? ((992 - 32 * d1)) : (30 - d1 >= 0 && 30 - d0 >= 0) ? (((1023 - d0) - 32 * d1)) : 0);
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
  // Read schedule : { blended_update_0[i0, i1] -> [3, i1, i0, 5, 0, 0, 0] : 0 <= i0 <= 31 and 0 <= i1 <= 31 }
  // Write schedule: { blend_us_laplace_diff_1_update_0[i0, i1] -> [3, i1, i0, 2, 0, 0, 0] : 0 <= i0 <= 31 and 0 <= i1 <= 31 }
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
  // Read schedule : { blended_update_0[i0, i1] -> [3, i1, i0, 5, 0, 0, 0] : 0 <= i0 <= 31 and 0 <= i1 <= 31 }
  // Write schedule: { blend_us_laplace_diff_2_update_0[i0, i1] -> [3, i1, i0, 3, 0, 0, 0] : 0 <= i0 <= 31 and 0 <= i1 <= 31 }
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
  // Read schedule : { blended_update_0[i0, i1] -> [3, i1, i0, 5, 0, 0, 0] : 0 <= i0 <= 31 and 0 <= i1 <= 31 }
  // Write schedule: { blend_us_laplace_diff_3_update_0[i0, i1] -> [3, i1, i0, 4, 0, 0, 0] : 0 <= i0 <= 31 and 0 <= i1 <= 31 }
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
  // Read schedule : { gauss_ds_1_update_0[i0, i1] -> [0, 2 + 2i1, 2 + 2i0, 3, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // Write schedule: { gauss_blur_1_update_0[i0, i1] -> [0, 2 + i1, 2 + i0, 2, 0, 0, 0] : 0 <= i0 <= 44 and 0 <= i1 <= 44 }
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
  // Read schedule : { gauss_ds_2_update_0[i0, i1] -> [1, 2i1, 2i0, 1, 0, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // Write schedule: { gauss_blur_2_update_0[i0, i1] -> [1, i1, i0, 0, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
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
  // Read schedule : { gauss_ds_3_update_0[i0, i1] -> [2, 0, 0, 2i1, 2i0, 1, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // Write schedule: { gauss_blur_3_update_0[i0, i1] -> [2, 0, 0, i1, i0, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
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

struct gauss_blur_4_gauss_blur_4_update_0_write0_to_gauss_ds_4_rd0_cache {
	// RAM Box: {[0, 2], [0, 2]}
	// Capacity: 9
	// # of read delays: 8
	fifo<hw_uint<32> , 9> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(8 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_blur_4_cache {
  gauss_blur_4_gauss_blur_4_update_0_write0_to_gauss_ds_4_rd0_cache gauss_blur_4_gauss_blur_4_update_0_write0_to_gauss_ds_4_rd0;
};



inline void gauss_blur_4_gauss_blur_4_update_0_write0_write(hw_uint<32> & gauss_blur_4_gauss_blur_4_update_0_write0, gauss_blur_4_cache& gauss_blur_4, int d0, int d1) {
  gauss_blur_4.gauss_blur_4_gauss_blur_4_update_0_write0_to_gauss_ds_4_rd0.push(gauss_blur_4_gauss_blur_4_update_0_write0);
}

inline hw_uint<32>  gauss_ds_4_rd0_select(gauss_blur_4_cache& gauss_blur_4, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_blur_4 inter false
#endif //__VIVADO_SYNTH__
  // gauss_ds_4_rd0 read pattern: { gauss_ds_4_update_0[d0, d1] -> gauss_blur_4[2d0, 2d1] : 0 <= d0 <= 1 and 0 <= d1 <= 1 }
  // Read schedule : { gauss_ds_4_update_0[i0, i1] -> [2, 0, 1, 1, 1, i1, i0] : 0 <= i0 <= 1 and 0 <= i1 <= 1 }
  // Write schedule: { gauss_blur_4_update_0[i0, i1] -> [2, 0, 1, 1, 0, i1, i0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // DD fold: { gauss_ds_4_update_0[d0, d1] -> 8 : d0 = 0 and d1 = 0; gauss_ds_4_update_0[d0, d1] -> 6 : d0 = 1 and d1 = 0; gauss_ds_4_update_0[d0, d1] -> 2 : d0 = 0 and d1 = 1 }
  auto value_gauss_blur_4_gauss_blur_4_update_0_write0 = gauss_blur_4.gauss_blur_4_gauss_blur_4_update_0_write0_to_gauss_ds_4_rd0.peek(/* one reader or all rams */ (-1 + d1 == 0 && d0 == 0) ? (2) : (d1 == 0 && -1 + d0 == 0) ? (6) : (d1 == 0 && d0 == 0) ? (8) : 0);
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

struct gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd0_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 529
	// # of read delays: 482
	fifo<hw_uint<32> , 529> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(528 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd1_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 506
	// # of read delays: 482
	fifo<hw_uint<32> , 506> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(505 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd2_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 483
	// # of read delays: 482
	fifo<hw_uint<32> , 483> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(482 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd3_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 528
	// # of read delays: 482
	fifo<hw_uint<32> , 528> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(527 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd4_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 505
	// # of read delays: 482
	fifo<hw_uint<32> , 505> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(504 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd5_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 482
	// # of read delays: 482
	fifo<hw_uint<32> , 482> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(481 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd6_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 527
	// # of read delays: 482
	fifo<hw_uint<32> , 527> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(526 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd7_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 504
	// # of read delays: 482
	fifo<hw_uint<32> , 504> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(503 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd8_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 481
	// # of read delays: 481
	fifo<hw_uint<32> , 481> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(480 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_ds_1_gauss_ds_1_update_0_write0_to_laplace_diff_1_rd0_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 529
	// # of read delays: 362
	fifo<hw_uint<32> , 529> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(528 - offset);
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
	// Capacity: 529
	// # of read delays: 374
	fifo<hw_uint<32> , 529> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(528 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_ds_1_cache {
  gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd0_cache gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd0;
  gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd1_cache gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd1;
  gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd2_cache gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd2;
  gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd3_cache gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd3;
  gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd4_cache gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd4;
  gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd5_cache gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd5;
  gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd6_cache gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd6;
  gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd7_cache gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd7;
  gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd8_cache gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd8;
  gauss_ds_1_gauss_ds_1_update_0_write0_to_laplace_diff_1_rd0_cache gauss_ds_1_gauss_ds_1_update_0_write0_to_laplace_diff_1_rd0;
  gauss_ds_1_gauss_ds_1_update_0_write0_to_laplace_us_0_rd0_cache gauss_ds_1_gauss_ds_1_update_0_write0_to_laplace_us_0_rd0;
};



inline void gauss_ds_1_gauss_ds_1_update_0_write0_write(hw_uint<32> & gauss_ds_1_gauss_ds_1_update_0_write0, gauss_ds_1_cache& gauss_ds_1, int d0, int d1) {
  gauss_ds_1.gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd0.push(gauss_ds_1_gauss_ds_1_update_0_write0);
  gauss_ds_1.gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd1.push(gauss_ds_1_gauss_ds_1_update_0_write0);
  gauss_ds_1.gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd2.push(gauss_ds_1_gauss_ds_1_update_0_write0);
  gauss_ds_1.gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd3.push(gauss_ds_1_gauss_ds_1_update_0_write0);
  gauss_ds_1.gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd4.push(gauss_ds_1_gauss_ds_1_update_0_write0);
  gauss_ds_1.gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd5.push(gauss_ds_1_gauss_ds_1_update_0_write0);
  gauss_ds_1.gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd6.push(gauss_ds_1_gauss_ds_1_update_0_write0);
  gauss_ds_1.gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd7.push(gauss_ds_1_gauss_ds_1_update_0_write0);
  gauss_ds_1.gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd8.push(gauss_ds_1_gauss_ds_1_update_0_write0);
  gauss_ds_1.gauss_ds_1_gauss_ds_1_update_0_write0_to_laplace_diff_1_rd0.push(gauss_ds_1_gauss_ds_1_update_0_write0);
  gauss_ds_1.gauss_ds_1_gauss_ds_1_update_0_write0_to_laplace_us_0_rd0.push(gauss_ds_1_gauss_ds_1_update_0_write0);
}

inline hw_uint<32>  gauss_blur_2_rd0_select(gauss_ds_1_cache& gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_1 inter false
#endif //__VIVADO_SYNTH__
  // gauss_blur_2_rd0 read pattern: { gauss_blur_2_update_0[d0, d1] -> gauss_ds_1[d0, d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { gauss_blur_2_update_0[i0, i1] -> [1, i1, i0, 0, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { gauss_ds_1_update_0[i0, i1] -> [0, 2 + 2i1, 2 + 2i0, 3, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { gauss_blur_2_update_0[d0, d1] -> ((528 - d0) - 23 * d1) : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  auto value_gauss_ds_1_gauss_ds_1_update_0_write0 = gauss_ds_1.gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd0.peek(/* one reader or all rams */ ((528 - d0) - 23 * d1));
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
  // Read schedule : { gauss_blur_2_update_0[i0, i1] -> [1, i1, i0, 0, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { gauss_ds_1_update_0[i0, i1] -> [0, 2 + 2i1, 2 + 2i0, 3, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { gauss_blur_2_update_0[d0, d1] -> ((505 - d0) - 23 * d1) : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  auto value_gauss_ds_1_gauss_ds_1_update_0_write0 = gauss_ds_1.gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd1.peek(/* one reader or all rams */ ((505 - d0) - 23 * d1));
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
  // Read schedule : { gauss_blur_2_update_0[i0, i1] -> [1, i1, i0, 0, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { gauss_ds_1_update_0[i0, i1] -> [0, 2 + 2i1, 2 + 2i0, 3, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { gauss_blur_2_update_0[d0, d1] -> ((482 - d0) - 23 * d1) : 0 <= d0 <= 20 and 0 <= d1 <= 19; gauss_blur_2_update_0[d0, d1] -> (22 - d0) : d1 = 20 and 0 <= d0 <= 20 }
  auto value_gauss_ds_1_gauss_ds_1_update_0_write0 = gauss_ds_1.gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd2.peek(/* one reader or all rams */ (-20 + d1 == 0) ? ((22 - d0)) : (19 - d1 >= 0) ? (((482 - d0) - 23 * d1)) : 0);
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
  // Read schedule : { gauss_blur_2_update_0[i0, i1] -> [1, i1, i0, 0, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { gauss_ds_1_update_0[i0, i1] -> [0, 2 + 2i1, 2 + 2i0, 3, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { gauss_blur_2_update_0[d0, d1] -> ((527 - d0) - 23 * d1) : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  auto value_gauss_ds_1_gauss_ds_1_update_0_write0 = gauss_ds_1.gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd3.peek(/* one reader or all rams */ ((527 - d0) - 23 * d1));
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
  // Read schedule : { gauss_blur_2_update_0[i0, i1] -> [1, i1, i0, 0, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { gauss_ds_1_update_0[i0, i1] -> [0, 2 + 2i1, 2 + 2i0, 3, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { gauss_blur_2_update_0[d0, d1] -> ((504 - d0) - 23 * d1) : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  auto value_gauss_ds_1_gauss_ds_1_update_0_write0 = gauss_ds_1.gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd4.peek(/* one reader or all rams */ ((504 - d0) - 23 * d1));
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
  // Read schedule : { gauss_blur_2_update_0[i0, i1] -> [1, i1, i0, 0, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { gauss_ds_1_update_0[i0, i1] -> [0, 2 + 2i1, 2 + 2i0, 3, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { gauss_blur_2_update_0[d0, d1] -> ((481 - d0) - 23 * d1) : 0 <= d0 <= 20 and 0 <= d1 <= 19; gauss_blur_2_update_0[d0, d1] -> (21 - d0) : d1 = 20 and 0 <= d0 <= 20 }
  auto value_gauss_ds_1_gauss_ds_1_update_0_write0 = gauss_ds_1.gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd5.peek(/* one reader or all rams */ (-20 + d1 == 0) ? ((21 - d0)) : (19 - d1 >= 0) ? (((481 - d0) - 23 * d1)) : 0);
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
  // Read schedule : { gauss_blur_2_update_0[i0, i1] -> [1, i1, i0, 0, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { gauss_ds_1_update_0[i0, i1] -> [0, 2 + 2i1, 2 + 2i0, 3, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { gauss_blur_2_update_0[d0, d1] -> ((526 - d0) - 23 * d1) : 0 <= d0 <= 19 and 0 <= d1 <= 20; gauss_blur_2_update_0[d0, d1] -> (506 - 23 * d1) : d0 = 20 and 0 <= d1 <= 20 }
  auto value_gauss_ds_1_gauss_ds_1_update_0_write0 = gauss_ds_1.gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd6.peek(/* one reader or all rams */ (-20 + d0 == 0) ? ((506 - 23 * d1)) : (19 - d0 >= 0) ? (((526 - d0) - 23 * d1)) : 0);
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
  // Read schedule : { gauss_blur_2_update_0[i0, i1] -> [1, i1, i0, 0, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { gauss_ds_1_update_0[i0, i1] -> [0, 2 + 2i1, 2 + 2i0, 3, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { gauss_blur_2_update_0[d0, d1] -> ((503 - d0) - 23 * d1) : 0 <= d0 <= 19 and 0 <= d1 <= 20; gauss_blur_2_update_0[d0, d1] -> (483 - 23 * d1) : d0 = 20 and 0 <= d1 <= 20 }
  auto value_gauss_ds_1_gauss_ds_1_update_0_write0 = gauss_ds_1.gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd7.peek(/* one reader or all rams */ (-20 + d0 == 0) ? ((483 - 23 * d1)) : (19 - d0 >= 0) ? (((503 - d0) - 23 * d1)) : 0);
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
  // Read schedule : { gauss_blur_2_update_0[i0, i1] -> [1, i1, i0, 0, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { gauss_ds_1_update_0[i0, i1] -> [0, 2 + 2i1, 2 + 2i0, 3, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { gauss_blur_2_update_0[d0, d1] -> ((480 - d0) - 23 * d1) : 0 <= d0 <= 19 and 0 <= d1 <= 19; gauss_blur_2_update_0[d0, d1] -> (460 - 23 * d1) : d0 = 20 and 0 <= d1 <= 19; gauss_blur_2_update_0[d0, d1] -> (20 - d0) : d1 = 20 and 0 <= d0 <= 19 }
  auto value_gauss_ds_1_gauss_ds_1_update_0_write0 = gauss_ds_1.gauss_ds_1_gauss_ds_1_update_0_write0_to_gauss_blur_2_rd8.peek(/* one reader or all rams */ (-20 + d1 == 0 && 19 - d0 >= 0) ? ((20 - d0)) : (-20 + d0 == 0 && 19 - d1 >= 0) ? ((460 - 23 * d1)) : (19 - d1 >= 0 && 19 - d0 >= 0) ? (((480 - d0) - 23 * d1)) : 0);
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
  // Read schedule : { laplace_diff_1_update_0[i0, i1] -> [3, 2i1, 2i0, 1, 0, 0, 0] : 0 <= i0 <= 15 and 0 <= i1 <= 15 }
  // Write schedule: { gauss_ds_1_update_0[i0, i1] -> [0, 2 + 2i1, 2 + 2i0, 3, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { laplace_diff_1_update_0[d0, d1] -> ((528 - d0) - 23 * d1) : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  auto value_gauss_ds_1_gauss_ds_1_update_0_write0 = gauss_ds_1.gauss_ds_1_gauss_ds_1_update_0_write0_to_laplace_diff_1_rd0.peek(/* one reader or all rams */ ((528 - d0) - 23 * d1));
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
  // Read schedule : { laplace_us_0_update_0[i0, i1] -> [2, 1, i1, i0, 0, 0, 0] : 0 <= i0 <= 31 and 0 <= i1 <= 31 }
  // Write schedule: { gauss_ds_1_update_0[i0, i1] -> [0, 2 + 2i1, 2 + 2i0, 3, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { laplace_us_0_update_0[d0, d1] -> ((528 - floor((d0)/2)) - 23 * floor((d1)/2)) : 0 <= d0 <= 31 and 2 <= d1 <= 31; laplace_us_0_update_0[d0, d1] -> (528 - floor((d0)/2)) : 0 <= d0 <= 31 and 0 <= d1 <= 1 }
  auto value_gauss_ds_1_gauss_ds_1_update_0_write0 = gauss_ds_1.gauss_ds_1_gauss_ds_1_update_0_write0_to_laplace_us_0_rd0.peek(/* one reader or all rams */ (1 - d1 >= 0) ? ((528 - floord(d0, 2))) : (-2 + d1 >= 0) ? (((528 - floord(d0, 2)) - 23 * floord(d1, 2))) : 0);
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

struct gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd0_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 121
	// # of read delays: 98
	fifo<hw_uint<32> , 121> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(120 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd1_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 110
	// # of read delays: 98
	fifo<hw_uint<32> , 110> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(109 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd2_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 99
	// # of read delays: 98
	fifo<hw_uint<32> , 99> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(98 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd3_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 120
	// # of read delays: 98
	fifo<hw_uint<32> , 120> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(119 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd4_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 109
	// # of read delays: 98
	fifo<hw_uint<32> , 109> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(108 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd5_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 98
	// # of read delays: 98
	fifo<hw_uint<32> , 98> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(97 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd6_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 119
	// # of read delays: 98
	fifo<hw_uint<32> , 119> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(118 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd7_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 108
	// # of read delays: 98
	fifo<hw_uint<32> , 108> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(107 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd8_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 97
	// # of read delays: 97
	fifo<hw_uint<32> , 97> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(96 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_ds_2_gauss_ds_2_update_0_write0_to_laplace_diff_2_rd0_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 121
	// # of read delays: 86
	fifo<hw_uint<32> , 121> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(120 - offset);
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
	// Capacity: 121
	// # of read delays: 92
	fifo<hw_uint<32> , 121> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(120 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_ds_2_cache {
  gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd0_cache gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd0;
  gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd1_cache gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd1;
  gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd2_cache gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd2;
  gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd3_cache gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd3;
  gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd4_cache gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd4;
  gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd5_cache gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd5;
  gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd6_cache gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd6;
  gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd7_cache gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd7;
  gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd8_cache gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd8;
  gauss_ds_2_gauss_ds_2_update_0_write0_to_laplace_diff_2_rd0_cache gauss_ds_2_gauss_ds_2_update_0_write0_to_laplace_diff_2_rd0;
  gauss_ds_2_gauss_ds_2_update_0_write0_to_laplace_us_1_rd0_cache gauss_ds_2_gauss_ds_2_update_0_write0_to_laplace_us_1_rd0;
};



inline void gauss_ds_2_gauss_ds_2_update_0_write0_write(hw_uint<32> & gauss_ds_2_gauss_ds_2_update_0_write0, gauss_ds_2_cache& gauss_ds_2, int d0, int d1) {
  gauss_ds_2.gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd0.push(gauss_ds_2_gauss_ds_2_update_0_write0);
  gauss_ds_2.gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd1.push(gauss_ds_2_gauss_ds_2_update_0_write0);
  gauss_ds_2.gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd2.push(gauss_ds_2_gauss_ds_2_update_0_write0);
  gauss_ds_2.gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd3.push(gauss_ds_2_gauss_ds_2_update_0_write0);
  gauss_ds_2.gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd4.push(gauss_ds_2_gauss_ds_2_update_0_write0);
  gauss_ds_2.gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd5.push(gauss_ds_2_gauss_ds_2_update_0_write0);
  gauss_ds_2.gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd6.push(gauss_ds_2_gauss_ds_2_update_0_write0);
  gauss_ds_2.gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd7.push(gauss_ds_2_gauss_ds_2_update_0_write0);
  gauss_ds_2.gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd8.push(gauss_ds_2_gauss_ds_2_update_0_write0);
  gauss_ds_2.gauss_ds_2_gauss_ds_2_update_0_write0_to_laplace_diff_2_rd0.push(gauss_ds_2_gauss_ds_2_update_0_write0);
  gauss_ds_2.gauss_ds_2_gauss_ds_2_update_0_write0_to_laplace_us_1_rd0.push(gauss_ds_2_gauss_ds_2_update_0_write0);
}

inline hw_uint<32>  gauss_blur_3_rd0_select(gauss_ds_2_cache& gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_2 inter false
#endif //__VIVADO_SYNTH__
  // gauss_blur_3_rd0 read pattern: { gauss_blur_3_update_0[d0, d1] -> gauss_ds_2[d0, d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { gauss_blur_3_update_0[i0, i1] -> [2, 0, 0, i1, i0, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { gauss_ds_2_update_0[i0, i1] -> [1, 2i1, 2i0, 1, 0, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { gauss_blur_3_update_0[d0, d1] -> ((120 - d0) - 11 * d1) : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  auto value_gauss_ds_2_gauss_ds_2_update_0_write0 = gauss_ds_2.gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd0.peek(/* one reader or all rams */ ((120 - d0) - 11 * d1));
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
  // Read schedule : { gauss_blur_3_update_0[i0, i1] -> [2, 0, 0, i1, i0, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { gauss_ds_2_update_0[i0, i1] -> [1, 2i1, 2i0, 1, 0, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { gauss_blur_3_update_0[d0, d1] -> ((109 - d0) - 11 * d1) : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  auto value_gauss_ds_2_gauss_ds_2_update_0_write0 = gauss_ds_2.gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd1.peek(/* one reader or all rams */ ((109 - d0) - 11 * d1));
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
  // Read schedule : { gauss_blur_3_update_0[i0, i1] -> [2, 0, 0, i1, i0, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { gauss_ds_2_update_0[i0, i1] -> [1, 2i1, 2i0, 1, 0, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { gauss_blur_3_update_0[d0, d1] -> ((98 - d0) - 11 * d1) : 0 <= d0 <= 8 and 0 <= d1 <= 7; gauss_blur_3_update_0[d0, d1] -> (10 - d0) : d1 = 8 and 0 <= d0 <= 8 }
  auto value_gauss_ds_2_gauss_ds_2_update_0_write0 = gauss_ds_2.gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd2.peek(/* one reader or all rams */ (-8 + d1 == 0) ? ((10 - d0)) : (7 - d1 >= 0) ? (((98 - d0) - 11 * d1)) : 0);
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
  // Read schedule : { gauss_blur_3_update_0[i0, i1] -> [2, 0, 0, i1, i0, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { gauss_ds_2_update_0[i0, i1] -> [1, 2i1, 2i0, 1, 0, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { gauss_blur_3_update_0[d0, d1] -> ((119 - d0) - 11 * d1) : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  auto value_gauss_ds_2_gauss_ds_2_update_0_write0 = gauss_ds_2.gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd3.peek(/* one reader or all rams */ ((119 - d0) - 11 * d1));
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
  // Read schedule : { gauss_blur_3_update_0[i0, i1] -> [2, 0, 0, i1, i0, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { gauss_ds_2_update_0[i0, i1] -> [1, 2i1, 2i0, 1, 0, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { gauss_blur_3_update_0[d0, d1] -> ((108 - d0) - 11 * d1) : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  auto value_gauss_ds_2_gauss_ds_2_update_0_write0 = gauss_ds_2.gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd4.peek(/* one reader or all rams */ ((108 - d0) - 11 * d1));
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
  // Read schedule : { gauss_blur_3_update_0[i0, i1] -> [2, 0, 0, i1, i0, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { gauss_ds_2_update_0[i0, i1] -> [1, 2i1, 2i0, 1, 0, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { gauss_blur_3_update_0[d0, d1] -> ((97 - d0) - 11 * d1) : 0 <= d0 <= 8 and 0 <= d1 <= 7; gauss_blur_3_update_0[d0, d1] -> (9 - d0) : d1 = 8 and 0 <= d0 <= 8 }
  auto value_gauss_ds_2_gauss_ds_2_update_0_write0 = gauss_ds_2.gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd5.peek(/* one reader or all rams */ (-8 + d1 == 0) ? ((9 - d0)) : (7 - d1 >= 0) ? (((97 - d0) - 11 * d1)) : 0);
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
  // Read schedule : { gauss_blur_3_update_0[i0, i1] -> [2, 0, 0, i1, i0, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { gauss_ds_2_update_0[i0, i1] -> [1, 2i1, 2i0, 1, 0, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { gauss_blur_3_update_0[d0, d1] -> ((118 - d0) - 11 * d1) : 0 <= d0 <= 7 and 0 <= d1 <= 8; gauss_blur_3_update_0[d0, d1] -> (110 - 11 * d1) : d0 = 8 and 0 <= d1 <= 8 }
  auto value_gauss_ds_2_gauss_ds_2_update_0_write0 = gauss_ds_2.gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd6.peek(/* one reader or all rams */ (-8 + d0 == 0) ? ((110 - 11 * d1)) : (7 - d0 >= 0) ? (((118 - d0) - 11 * d1)) : 0);
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
  // Read schedule : { gauss_blur_3_update_0[i0, i1] -> [2, 0, 0, i1, i0, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { gauss_ds_2_update_0[i0, i1] -> [1, 2i1, 2i0, 1, 0, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { gauss_blur_3_update_0[d0, d1] -> ((107 - d0) - 11 * d1) : 0 <= d0 <= 7 and 0 <= d1 <= 8; gauss_blur_3_update_0[d0, d1] -> (99 - 11 * d1) : d0 = 8 and 0 <= d1 <= 8 }
  auto value_gauss_ds_2_gauss_ds_2_update_0_write0 = gauss_ds_2.gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd7.peek(/* one reader or all rams */ (-8 + d0 == 0) ? ((99 - 11 * d1)) : (7 - d0 >= 0) ? (((107 - d0) - 11 * d1)) : 0);
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
  // Read schedule : { gauss_blur_3_update_0[i0, i1] -> [2, 0, 0, i1, i0, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { gauss_ds_2_update_0[i0, i1] -> [1, 2i1, 2i0, 1, 0, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { gauss_blur_3_update_0[d0, d1] -> ((96 - d0) - 11 * d1) : 0 <= d0 <= 7 and 0 <= d1 <= 7; gauss_blur_3_update_0[d0, d1] -> (88 - 11 * d1) : d0 = 8 and 0 <= d1 <= 7; gauss_blur_3_update_0[d0, d1] -> (8 - d0) : d1 = 8 and 0 <= d0 <= 7 }
  auto value_gauss_ds_2_gauss_ds_2_update_0_write0 = gauss_ds_2.gauss_ds_2_gauss_ds_2_update_0_write0_to_gauss_blur_3_rd8.peek(/* one reader or all rams */ (-8 + d1 == 0 && 7 - d0 >= 0) ? ((8 - d0)) : (-8 + d0 == 0 && 7 - d1 >= 0) ? ((88 - 11 * d1)) : (7 - d1 >= 0 && 7 - d0 >= 0) ? (((96 - d0) - 11 * d1)) : 0);
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
  // Read schedule : { laplace_diff_2_update_0[i0, i1] -> [2, 0, 1, 0, i1, i0, 1] : 0 <= i0 <= 7 and 0 <= i1 <= 7 }
  // Write schedule: { gauss_ds_2_update_0[i0, i1] -> [1, 2i1, 2i0, 1, 0, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { laplace_diff_2_update_0[d0, d1] -> ((120 - d0) - 11 * d1) : 0 <= d0 <= 7 and 0 <= d1 <= 7 }
  auto value_gauss_ds_2_gauss_ds_2_update_0_write0 = gauss_ds_2.gauss_ds_2_gauss_ds_2_update_0_write0_to_laplace_diff_2_rd0.peek(/* one reader or all rams */ ((120 - d0) - 11 * d1));
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
  // Read schedule : { laplace_us_1_update_0[i0, i1] -> [3, 2i1, 2i0, 0, 0, 0, 0] : 0 <= i0 <= 15 and 0 <= i1 <= 15 }
  // Write schedule: { gauss_ds_2_update_0[i0, i1] -> [1, 2i1, 2i0, 1, 0, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { laplace_us_1_update_0[d0, d1] -> ((120 - floor((d0)/2)) - 11 * floor((d1)/2)) : 0 <= d0 <= 15 and 2 <= d1 <= 15; laplace_us_1_update_0[d0, d1] -> (120 - floor((d0)/2)) : 0 <= d0 <= 15 and 0 <= d1 <= 1 }
  auto value_gauss_ds_2_gauss_ds_2_update_0_write0 = gauss_ds_2.gauss_ds_2_gauss_ds_2_update_0_write0_to_laplace_us_1_rd0.peek(/* one reader or all rams */ (1 - d1 >= 0) ? ((120 - floord(d0, 2))) : (-2 + d1 >= 0) ? (((120 - floord(d0, 2)) - 11 * floord(d1, 2))) : 0);
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

struct gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd0_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 25
	// # of read delays: 14
	fifo<hw_uint<32> , 25> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(24 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd1_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 20
	// # of read delays: 14
	fifo<hw_uint<32> , 20> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(19 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd2_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 15
	// # of read delays: 14
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

struct gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd3_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 24
	// # of read delays: 14
	fifo<hw_uint<32> , 24> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(23 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd4_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 19
	// # of read delays: 14
	fifo<hw_uint<32> , 19> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(18 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd5_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 14
	// # of read delays: 14
	fifo<hw_uint<32> , 14> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(13 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd6_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 23
	// # of read delays: 14
	fifo<hw_uint<32> , 23> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(22 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd7_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 18
	// # of read delays: 14
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

struct gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd8_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 13
	// # of read delays: 13
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

struct gauss_ds_3_gauss_ds_3_update_0_write0_to_laplace_diff_3_rd0_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 25
	// # of read delays: 20
	fifo<hw_uint<32> , 25> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(24 - offset);
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
	// Capacity: 25
	// # of read delays: 23
	fifo<hw_uint<32> , 25> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(24 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_ds_3_cache {
  gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd0_cache gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd0;
  gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd1_cache gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd1;
  gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd2_cache gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd2;
  gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd3_cache gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd3;
  gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd4_cache gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd4;
  gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd5_cache gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd5;
  gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd6_cache gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd6;
  gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd7_cache gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd7;
  gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd8_cache gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd8;
  gauss_ds_3_gauss_ds_3_update_0_write0_to_laplace_diff_3_rd0_cache gauss_ds_3_gauss_ds_3_update_0_write0_to_laplace_diff_3_rd0;
  gauss_ds_3_gauss_ds_3_update_0_write0_to_laplace_us_2_rd0_cache gauss_ds_3_gauss_ds_3_update_0_write0_to_laplace_us_2_rd0;
};



inline void gauss_ds_3_gauss_ds_3_update_0_write0_write(hw_uint<32> & gauss_ds_3_gauss_ds_3_update_0_write0, gauss_ds_3_cache& gauss_ds_3, int d0, int d1) {
  gauss_ds_3.gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd0.push(gauss_ds_3_gauss_ds_3_update_0_write0);
  gauss_ds_3.gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd1.push(gauss_ds_3_gauss_ds_3_update_0_write0);
  gauss_ds_3.gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd2.push(gauss_ds_3_gauss_ds_3_update_0_write0);
  gauss_ds_3.gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd3.push(gauss_ds_3_gauss_ds_3_update_0_write0);
  gauss_ds_3.gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd4.push(gauss_ds_3_gauss_ds_3_update_0_write0);
  gauss_ds_3.gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd5.push(gauss_ds_3_gauss_ds_3_update_0_write0);
  gauss_ds_3.gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd6.push(gauss_ds_3_gauss_ds_3_update_0_write0);
  gauss_ds_3.gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd7.push(gauss_ds_3_gauss_ds_3_update_0_write0);
  gauss_ds_3.gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd8.push(gauss_ds_3_gauss_ds_3_update_0_write0);
  gauss_ds_3.gauss_ds_3_gauss_ds_3_update_0_write0_to_laplace_diff_3_rd0.push(gauss_ds_3_gauss_ds_3_update_0_write0);
  gauss_ds_3.gauss_ds_3_gauss_ds_3_update_0_write0_to_laplace_us_2_rd0.push(gauss_ds_3_gauss_ds_3_update_0_write0);
}

inline hw_uint<32>  gauss_blur_4_rd0_select(gauss_ds_3_cache& gauss_ds_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_3 inter false
#endif //__VIVADO_SYNTH__
  // gauss_blur_4_rd0 read pattern: { gauss_blur_4_update_0[d0, d1] -> gauss_ds_3[d0, d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { gauss_blur_4_update_0[i0, i1] -> [2, 0, 1, 1, 0, i1, i0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { gauss_ds_3_update_0[i0, i1] -> [2, 0, 0, 2i1, 2i0, 1, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { gauss_blur_4_update_0[d0, d1] -> ((24 - d0) - 5 * d1) : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  auto value_gauss_ds_3_gauss_ds_3_update_0_write0 = gauss_ds_3.gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd0.peek(/* one reader or all rams */ ((24 - d0) - 5 * d1));
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
  // Read schedule : { gauss_blur_4_update_0[i0, i1] -> [2, 0, 1, 1, 0, i1, i0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { gauss_ds_3_update_0[i0, i1] -> [2, 0, 0, 2i1, 2i0, 1, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { gauss_blur_4_update_0[d0, d1] -> ((19 - d0) - 5 * d1) : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  auto value_gauss_ds_3_gauss_ds_3_update_0_write0 = gauss_ds_3.gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd1.peek(/* one reader or all rams */ ((19 - d0) - 5 * d1));
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
  // Read schedule : { gauss_blur_4_update_0[i0, i1] -> [2, 0, 1, 1, 0, i1, i0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { gauss_ds_3_update_0[i0, i1] -> [2, 0, 0, 2i1, 2i0, 1, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { gauss_blur_4_update_0[d0, d1] -> ((14 - d0) - 5 * d1) : 0 <= d0 <= 2 and 0 <= d1 <= 1; gauss_blur_4_update_0[d0, d1] -> (4 - d0) : d1 = 2 and 0 <= d0 <= 2 }
  auto value_gauss_ds_3_gauss_ds_3_update_0_write0 = gauss_ds_3.gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd2.peek(/* one reader or all rams */ (-2 + d1 == 0) ? ((4 - d0)) : (1 - d1 >= 0) ? (((14 - d0) - 5 * d1)) : 0);
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
  // Read schedule : { gauss_blur_4_update_0[i0, i1] -> [2, 0, 1, 1, 0, i1, i0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { gauss_ds_3_update_0[i0, i1] -> [2, 0, 0, 2i1, 2i0, 1, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { gauss_blur_4_update_0[d0, d1] -> ((23 - d0) - 5 * d1) : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  auto value_gauss_ds_3_gauss_ds_3_update_0_write0 = gauss_ds_3.gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd3.peek(/* one reader or all rams */ ((23 - d0) - 5 * d1));
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
  // Read schedule : { gauss_blur_4_update_0[i0, i1] -> [2, 0, 1, 1, 0, i1, i0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { gauss_ds_3_update_0[i0, i1] -> [2, 0, 0, 2i1, 2i0, 1, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { gauss_blur_4_update_0[d0, d1] -> ((18 - d0) - 5 * d1) : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  auto value_gauss_ds_3_gauss_ds_3_update_0_write0 = gauss_ds_3.gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd4.peek(/* one reader or all rams */ ((18 - d0) - 5 * d1));
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
  // Read schedule : { gauss_blur_4_update_0[i0, i1] -> [2, 0, 1, 1, 0, i1, i0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { gauss_ds_3_update_0[i0, i1] -> [2, 0, 0, 2i1, 2i0, 1, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { gauss_blur_4_update_0[d0, d1] -> ((13 - d0) - 5 * d1) : 0 <= d0 <= 2 and 0 <= d1 <= 1; gauss_blur_4_update_0[d0, d1] -> (3 - d0) : d1 = 2 and 0 <= d0 <= 2 }
  auto value_gauss_ds_3_gauss_ds_3_update_0_write0 = gauss_ds_3.gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd5.peek(/* one reader or all rams */ (-2 + d1 == 0) ? ((3 - d0)) : (1 - d1 >= 0) ? (((13 - d0) - 5 * d1)) : 0);
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
  // Read schedule : { gauss_blur_4_update_0[i0, i1] -> [2, 0, 1, 1, 0, i1, i0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { gauss_ds_3_update_0[i0, i1] -> [2, 0, 0, 2i1, 2i0, 1, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { gauss_blur_4_update_0[d0, d1] -> ((22 - d0) - 5 * d1) : 0 <= d0 <= 1 and 0 <= d1 <= 2; gauss_blur_4_update_0[d0, d1] -> (20 - 5 * d1) : d0 = 2 and 0 <= d1 <= 2 }
  auto value_gauss_ds_3_gauss_ds_3_update_0_write0 = gauss_ds_3.gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd6.peek(/* one reader or all rams */ (-2 + d0 == 0) ? ((20 - 5 * d1)) : (1 - d0 >= 0) ? (((22 - d0) - 5 * d1)) : 0);
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
  // Read schedule : { gauss_blur_4_update_0[i0, i1] -> [2, 0, 1, 1, 0, i1, i0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { gauss_ds_3_update_0[i0, i1] -> [2, 0, 0, 2i1, 2i0, 1, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { gauss_blur_4_update_0[d0, d1] -> ((17 - d0) - 5 * d1) : 0 <= d0 <= 1 and 0 <= d1 <= 2; gauss_blur_4_update_0[d0, d1] -> (15 - 5 * d1) : d0 = 2 and 0 <= d1 <= 2 }
  auto value_gauss_ds_3_gauss_ds_3_update_0_write0 = gauss_ds_3.gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd7.peek(/* one reader or all rams */ (-2 + d0 == 0) ? ((15 - 5 * d1)) : (1 - d0 >= 0) ? (((17 - d0) - 5 * d1)) : 0);
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
  // Read schedule : { gauss_blur_4_update_0[i0, i1] -> [2, 0, 1, 1, 0, i1, i0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { gauss_ds_3_update_0[i0, i1] -> [2, 0, 0, 2i1, 2i0, 1, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { gauss_blur_4_update_0[d0, d1] -> ((12 - d0) - 5 * d1) : 0 <= d0 <= 1 and 0 <= d1 <= 1; gauss_blur_4_update_0[d0, d1] -> (10 - 5 * d1) : d0 = 2 and 0 <= d1 <= 1; gauss_blur_4_update_0[d0, d1] -> (2 - d0) : d1 = 2 and 0 <= d0 <= 1 }
  auto value_gauss_ds_3_gauss_ds_3_update_0_write0 = gauss_ds_3.gauss_ds_3_gauss_ds_3_update_0_write0_to_gauss_blur_4_rd8.peek(/* one reader or all rams */ (-2 + d1 == 0 && 1 - d0 >= 0) ? ((2 - d0)) : (-2 + d0 == 0 && 1 - d1 >= 0) ? ((10 - 5 * d1)) : (1 - d1 >= 0 && 1 - d0 >= 0) ? (((12 - d0) - 5 * d1)) : 0);
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
  // Read schedule : { laplace_diff_3_update_0[i0, i1] -> [2, 0, 1, 1, 3, i1, i0] : 0 <= i0 <= 3 and 0 <= i1 <= 3 }
  // Write schedule: { gauss_ds_3_update_0[i0, i1] -> [2, 0, 0, 2i1, 2i0, 1, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { laplace_diff_3_update_0[d0, d1] -> ((24 - d0) - 5 * d1) : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  auto value_gauss_ds_3_gauss_ds_3_update_0_write0 = gauss_ds_3.gauss_ds_3_gauss_ds_3_update_0_write0_to_laplace_diff_3_rd0.peek(/* one reader or all rams */ ((24 - d0) - 5 * d1));
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
  // Read schedule : { laplace_us_2_update_0[i0, i1] -> [2, 0, 1, 0, i1, i0, 0] : 0 <= i0 <= 7 and 0 <= i1 <= 7 }
  // Write schedule: { gauss_ds_3_update_0[i0, i1] -> [2, 0, 0, 2i1, 2i0, 1, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { laplace_us_2_update_0[d0, d1] -> ((24 - floor((d0)/2)) - 5 * floor((d1)/2)) : 0 <= d0 <= 7 and 2 <= d1 <= 7; laplace_us_2_update_0[d0, d1] -> (24 - floor((d0)/2)) : 0 <= d0 <= 7 and 0 <= d1 <= 1 }
  auto value_gauss_ds_3_gauss_ds_3_update_0_write0 = gauss_ds_3.gauss_ds_3_gauss_ds_3_update_0_write0_to_laplace_us_2_rd0.peek(/* one reader or all rams */ (1 - d1 >= 0) ? ((24 - floord(d0, 2))) : (-2 + d1 >= 0) ? (((24 - floord(d0, 2)) - 5 * floord(d1, 2))) : 0);
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

struct gauss_ds_4_gauss_ds_4_update_0_write0_to_laplace_us_3_rd0_cache {
	// RAM Box: {[0, 1], [0, 1]}
	// Capacity: 4
	// # of read delays: 4
	fifo<hw_uint<32> , 4> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(3 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gauss_ds_4_cache {
  gauss_ds_4_gauss_ds_4_update_0_write0_to_laplace_us_3_rd0_cache gauss_ds_4_gauss_ds_4_update_0_write0_to_laplace_us_3_rd0;
};



inline void gauss_ds_4_gauss_ds_4_update_0_write0_write(hw_uint<32> & gauss_ds_4_gauss_ds_4_update_0_write0, gauss_ds_4_cache& gauss_ds_4, int d0, int d1) {
  gauss_ds_4.gauss_ds_4_gauss_ds_4_update_0_write0_to_laplace_us_3_rd0.push(gauss_ds_4_gauss_ds_4_update_0_write0);
}

inline hw_uint<32>  laplace_us_3_rd0_select(gauss_ds_4_cache& gauss_ds_4, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=gauss_ds_4 inter false
#endif //__VIVADO_SYNTH__
  // laplace_us_3_rd0 read pattern: { laplace_us_3_update_0[d0, d1] -> gauss_ds_4[o0, o1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { laplace_us_3_update_0[i0, i1] -> [2, 0, 1, 1, 2, i1, i0] : 0 <= i0 <= 3 and 0 <= i1 <= 3 }
  // Write schedule: { gauss_ds_4_update_0[i0, i1] -> [2, 0, 1, 1, 1, i1, i0] : 0 <= i0 <= 1 and 0 <= i1 <= 1 }
  // DD fold: { laplace_us_3_update_0[d0, d1] -> 1 : d1 = 3 and 0 <= d0 <= 1; laplace_us_3_update_0[d0, d1] -> 3 : 0 <= d0 <= 1 and 0 <= d1 <= 1; laplace_us_3_update_0[d0, d1] -> 1 : d1 = 2 and 0 <= d0 <= 1; laplace_us_3_update_0[d0, d1] -> 2 : 2 <= d0 <= 3 and 0 <= d1 <= 1 }
  auto value_gauss_ds_4_gauss_ds_4_update_0_write0 = gauss_ds_4.gauss_ds_4_gauss_ds_4_update_0_write0_to_laplace_us_3_rd0.peek(/* one reader or all rams */ (-2 + d1 >= 0 && 1 - d0 >= 0) ? (1) : (-2 + d0 >= 0 && 1 - d1 >= 0) ? (2) : (1 - d1 >= 0 && 1 - d0 >= 0) ? (3) : 0);
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
	fifo<hw_uint<32> , 97> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(96 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct in_in_update_0_write0_to_laplace_diff_0_rd0_cache {
	// RAM Box: {[0, 46], [0, 46]}
	// Capacity: 2209
	// # of read delays: 1490
	fifo<hw_uint<32> , 2209> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(2208 - offset);
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
  // Read schedule : { gauss_blur_1_update_0[i0, i1] -> [0, 2 + i1, 2 + i0, 2, 0, 0, 0] : 0 <= i0 <= 44 and 0 <= i1 <= 44 }
  // Write schedule: { in_update_0[i0, i1] -> [0, i1, i0, 1, 0, 0, 0] : 0 <= i0 <= 46 and 0 <= i1 <= 46 }
  // DD fold: { gauss_blur_1_update_0[d0, d1] -> 96 : 0 <= d0 <= 44 and 0 <= d1 <= 44 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek(/* one reader or all rams */ 96);
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
  // Read schedule : { gauss_blur_1_update_0[i0, i1] -> [0, 2 + i1, 2 + i0, 2, 0, 0, 0] : 0 <= i0 <= 44 and 0 <= i1 <= 44 }
  // Write schedule: { in_update_0[i0, i1] -> [0, i1, i0, 1, 0, 0, 0] : 0 <= i0 <= 46 and 0 <= i1 <= 46 }
  // DD fold: { gauss_blur_1_update_0[d0, d1] -> 49 : 0 <= d0 <= 44 and 0 <= d1 <= 44 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek(/* one reader or all rams */ 49);
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
  // Read schedule : { gauss_blur_1_update_0[i0, i1] -> [0, 2 + i1, 2 + i0, 2, 0, 0, 0] : 0 <= i0 <= 44 and 0 <= i1 <= 44 }
  // Write schedule: { in_update_0[i0, i1] -> [0, i1, i0, 1, 0, 0, 0] : 0 <= i0 <= 46 and 0 <= i1 <= 46 }
  // DD fold: { gauss_blur_1_update_0[d0, d1] -> 2 : 0 <= d0 <= 44 and 0 <= d1 <= 44 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek(/* one reader or all rams */ 2);
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
  // Read schedule : { gauss_blur_1_update_0[i0, i1] -> [0, 2 + i1, 2 + i0, 2, 0, 0, 0] : 0 <= i0 <= 44 and 0 <= i1 <= 44 }
  // Write schedule: { in_update_0[i0, i1] -> [0, i1, i0, 1, 0, 0, 0] : 0 <= i0 <= 46 and 0 <= i1 <= 46 }
  // DD fold: { gauss_blur_1_update_0[d0, d1] -> 95 : 0 <= d0 <= 44 and 0 <= d1 <= 44 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek(/* one reader or all rams */ 95);
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
  // Read schedule : { gauss_blur_1_update_0[i0, i1] -> [0, 2 + i1, 2 + i0, 2, 0, 0, 0] : 0 <= i0 <= 44 and 0 <= i1 <= 44 }
  // Write schedule: { in_update_0[i0, i1] -> [0, i1, i0, 1, 0, 0, 0] : 0 <= i0 <= 46 and 0 <= i1 <= 46 }
  // DD fold: { gauss_blur_1_update_0[d0, d1] -> 48 : 0 <= d0 <= 44 and 0 <= d1 <= 44 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek(/* one reader or all rams */ 48);
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
  // Read schedule : { gauss_blur_1_update_0[i0, i1] -> [0, 2 + i1, 2 + i0, 2, 0, 0, 0] : 0 <= i0 <= 44 and 0 <= i1 <= 44 }
  // Write schedule: { in_update_0[i0, i1] -> [0, i1, i0, 1, 0, 0, 0] : 0 <= i0 <= 46 and 0 <= i1 <= 46 }
  // DD fold: { gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 44 and 0 <= d1 <= 44 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek(/* one reader or all rams */ 1);
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
  // Read schedule : { gauss_blur_1_update_0[i0, i1] -> [0, 2 + i1, 2 + i0, 2, 0, 0, 0] : 0 <= i0 <= 44 and 0 <= i1 <= 44 }
  // Write schedule: { in_update_0[i0, i1] -> [0, i1, i0, 1, 0, 0, 0] : 0 <= i0 <= 46 and 0 <= i1 <= 46 }
  // DD fold: { gauss_blur_1_update_0[d0, d1] -> 94 : 0 <= d0 <= 43 and 0 <= d1 <= 44; gauss_blur_1_update_0[d0, d1] -> (50 + d0) : d0 = 44 and 0 <= d1 <= 44 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek(/* one reader or all rams */ (43 - d0 >= 0) ? (94) : (-44 + d0 == 0) ? (94) : 0);
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
  // Read schedule : { gauss_blur_1_update_0[i0, i1] -> [0, 2 + i1, 2 + i0, 2, 0, 0, 0] : 0 <= i0 <= 44 and 0 <= i1 <= 44 }
  // Write schedule: { in_update_0[i0, i1] -> [0, i1, i0, 1, 0, 0, 0] : 0 <= i0 <= 46 and 0 <= i1 <= 46 }
  // DD fold: { gauss_blur_1_update_0[d0, d1] -> 47 : 0 <= d0 <= 43 and 0 <= d1 <= 44; gauss_blur_1_update_0[d0, d1] -> (3 + d0) : d0 = 44 and 0 <= d1 <= 44 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek(/* one reader or all rams */ (43 - d0 >= 0) ? (47) : (-44 + d0 == 0) ? (47) : 0);
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
  // Read schedule : { gauss_blur_1_update_0[i0, i1] -> [0, 2 + i1, 2 + i0, 2, 0, 0, 0] : 0 <= i0 <= 44 and 0 <= i1 <= 44 }
  // Write schedule: { in_update_0[i0, i1] -> [0, i1, i0, 1, 0, 0, 0] : 0 <= i0 <= 46 and 0 <= i1 <= 46 }
  // DD fold: {  }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek(/* one reader or all rams */ 0);
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
  // Read schedule : { laplace_diff_0_update_0[i0, i1] -> [2, 1, i1, i0, 1, 0, 0] : 0 <= i0 <= 31 and 0 <= i1 <= 31 }
  // Write schedule: { in_update_0[i0, i1] -> [0, i1, i0, 1, 0, 0, 0] : 0 <= i0 <= 46 and 0 <= i1 <= 46 }
  // DD fold: { laplace_diff_0_update_0[d0, d1] -> ((2208 - d0) - 47 * d1) : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_to_laplace_diff_0_rd0.peek(/* one reader or all rams */ ((2208 - d0) - 47 * d1));
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
  // Read schedule : { blend_us_laplace_diff_0_update_0[i0, i1] -> [2, 1, i1, i0, 2, 0, 0] : 0 <= i0 <= 31 and 0 <= i1 <= 31 }
  // Write schedule: { laplace_diff_0_update_0[i0, i1] -> [2, 1, i1, i0, 1, 0, 0] : 0 <= i0 <= 31 and 0 <= i1 <= 31 }
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
  // Read schedule : { blend_us_laplace_diff_1_update_0[i0, i1] -> [3, i1, i0, 2, 0, 0, 0] : 0 <= i0 <= 31 and 0 <= i1 <= 31 }
  // Write schedule: { laplace_diff_1_update_0[i0, i1] -> [3, 2i1, 2i0, 1, 0, 0, 0] : 0 <= i0 <= 15 and 0 <= i1 <= 15 }
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
	// Capacity: 64
	// # of read delays: 65
	fifo<hw_uint<32> , 64> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(63 - offset);
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
  // Read schedule : { blend_us_laplace_diff_2_update_0[i0, i1] -> [3, i1, i0, 3, 0, 0, 0] : 0 <= i0 <= 31 and 0 <= i1 <= 31 }
  // Write schedule: { laplace_diff_2_update_0[i0, i1] -> [2, 0, 1, 0, i1, i0, 1] : 0 <= i0 <= 7 and 0 <= i1 <= 7 }
  // DD fold: { blend_us_laplace_diff_2_update_0[d0, d1] -> ((63 - floor((d0)/4)) - 8 * floor((d1)/4)) : 0 <= d0 <= 27 and 4 <= d1 <= 27; blend_us_laplace_diff_2_update_0[d0, d1] -> (63 - floor((d0)/4)) : 0 <= d0 <= 27 and 0 <= d1 <= 3; blend_us_laplace_diff_2_update_0[d0, d1] -> (56 - 8 * floor((d1)/4)) : 28 <= d0 <= 31 and 0 <= d1 <= 27; blend_us_laplace_diff_2_update_0[d0, d1] -> (7 - floor((d0)/4)) : 0 <= d0 <= 27 and 29 <= d1 <= 31; blend_us_laplace_diff_2_update_0[d0, d1] -> (7 - floor((d0)/4)) : d1 = 28 and 0 <= d0 <= 27 }
  auto value_laplace_diff_2_laplace_diff_2_update_0_write0 = laplace_diff_2.laplace_diff_2_laplace_diff_2_update_0_write0_to_blend_us_laplace_diff_2_rd0.peek(/* one reader or all rams */ (-28 + d1 >= 0 && 27 - d0 >= 0) ? ((7 - floord(d0, 4))) : (-28 + d0 >= 0 && 27 - d1 >= 0) ? ((56 - 8 * floord(d1, 4))) : (3 - d1 >= 0 && 27 - d0 >= 0) ? ((63 - floord(d0, 4))) : (27 - d1 >= 0 && 27 - d0 >= 0 && -4 + d1 >= 0) ? (((63 - floord(d0, 4)) - 8 * floord(d1, 4))) : 0);
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
  // Read schedule : { blend_us_laplace_diff_3_update_0[i0, i1] -> [3, i1, i0, 4, 0, 0, 0] : 0 <= i0 <= 31 and 0 <= i1 <= 31 }
  // Write schedule: { laplace_diff_3_update_0[i0, i1] -> [2, 0, 1, 1, 3, i1, i0] : 0 <= i0 <= 3 and 0 <= i1 <= 3 }
  // DD fold: { blend_us_laplace_diff_3_update_0[d0, d1] -> ((15 - floor((d0)/8)) - 4 * floor((d1)/8)) : 0 <= d0 <= 23 and 8 <= d1 <= 23; blend_us_laplace_diff_3_update_0[d0, d1] -> (15 - floor((d0)/8)) : 0 <= d0 <= 23 and 0 <= d1 <= 7; blend_us_laplace_diff_3_update_0[d0, d1] -> (12 - 4 * floor((d1)/8)) : 24 <= d0 <= 31 and 0 <= d1 <= 23; blend_us_laplace_diff_3_update_0[d0, d1] -> (3 - floor((d0)/8)) : 0 <= d0 <= 23 and 25 <= d1 <= 31; blend_us_laplace_diff_3_update_0[d0, d1] -> (3 - floor((d0)/8)) : d1 = 24 and 0 <= d0 <= 23 }
  auto value_laplace_diff_3_laplace_diff_3_update_0_write0 = laplace_diff_3.laplace_diff_3_laplace_diff_3_update_0_write0_to_blend_us_laplace_diff_3_rd0.peek(/* one reader or all rams */ (-24 + d1 >= 0 && 23 - d0 >= 0) ? ((3 - floord(d0, 8))) : (-24 + d0 >= 0 && 23 - d1 >= 0) ? ((12 - 4 * floord(d1, 8))) : (7 - d1 >= 0 && 23 - d0 >= 0) ? ((15 - floord(d0, 8))) : (23 - d1 >= 0 && 23 - d0 >= 0 && -8 + d1 >= 0) ? (((15 - floord(d0, 8)) - 4 * floord(d1, 8))) : 0);
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
  // Read schedule : { laplace_diff_0_update_0[i0, i1] -> [2, 1, i1, i0, 1, 0, 0] : 0 <= i0 <= 31 and 0 <= i1 <= 31 }
  // Write schedule: { laplace_us_0_update_0[i0, i1] -> [2, 1, i1, i0, 0, 0, 0] : 0 <= i0 <= 31 and 0 <= i1 <= 31 }
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
  // Read schedule : { laplace_diff_1_update_0[i0, i1] -> [3, 2i1, 2i0, 1, 0, 0, 0] : 0 <= i0 <= 15 and 0 <= i1 <= 15 }
  // Write schedule: { laplace_us_1_update_0[i0, i1] -> [3, 2i1, 2i0, 0, 0, 0, 0] : 0 <= i0 <= 15 and 0 <= i1 <= 15 }
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
  // Read schedule : { laplace_diff_2_update_0[i0, i1] -> [2, 0, 1, 0, i1, i0, 1] : 0 <= i0 <= 7 and 0 <= i1 <= 7 }
  // Write schedule: { laplace_us_2_update_0[i0, i1] -> [2, 0, 1, 0, i1, i0, 0] : 0 <= i0 <= 7 and 0 <= i1 <= 7 }
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

struct laplace_us_3_laplace_us_3_update_0_write0_to_laplace_diff_3_rd0_cache {
	// RAM Box: {[0, 3], [0, 3]}
	// Capacity: 16
	// # of read delays: 16
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

struct laplace_us_3_cache {
  laplace_us_3_laplace_us_3_update_0_write0_to_laplace_diff_3_rd0_cache laplace_us_3_laplace_us_3_update_0_write0_to_laplace_diff_3_rd0;
};



inline void laplace_us_3_laplace_us_3_update_0_write0_write(hw_uint<32> & laplace_us_3_laplace_us_3_update_0_write0, laplace_us_3_cache& laplace_us_3, int d0, int d1) {
  laplace_us_3.laplace_us_3_laplace_us_3_update_0_write0_to_laplace_diff_3_rd0.push(laplace_us_3_laplace_us_3_update_0_write0);
}

inline hw_uint<32>  laplace_diff_3_rd0_select(laplace_us_3_cache& laplace_us_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=laplace_us_3 inter false
#endif //__VIVADO_SYNTH__
  // laplace_diff_3_rd0 read pattern: { laplace_diff_3_update_0[d0, d1] -> laplace_us_3[d0, d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // Read schedule : { laplace_diff_3_update_0[i0, i1] -> [2, 0, 1, 1, 3, i1, i0] : 0 <= i0 <= 3 and 0 <= i1 <= 3 }
  // Write schedule: { laplace_us_3_update_0[i0, i1] -> [2, 0, 1, 1, 2, i1, i0] : 0 <= i0 <= 3 and 0 <= i1 <= 3 }
  // DD fold: { laplace_diff_3_update_0[d0, d1] -> ((15 - d0) - 4 * d1) : 0 <= d0 <= 2 and 0 <= d1 <= 2; laplace_diff_3_update_0[d0, d1] -> (12 - 4 * d1) : d0 = 3 and 0 <= d1 <= 2; laplace_diff_3_update_0[d0, d1] -> (3 - d0) : d1 = 3 and 0 <= d0 <= 2 }
  auto value_laplace_us_3_laplace_us_3_update_0_write0 = laplace_us_3.laplace_us_3_laplace_us_3_update_0_write0_to_laplace_diff_3_rd0.peek(/* one reader or all rams */ (-3 + d1 == 0 && 2 - d0 >= 0) ? ((3 - d0)) : (-3 + d0 == 0 && 2 - d1 >= 0) ? ((12 - 4 * d1)) : (2 - d1 >= 0 && 2 - d0 >= 0) ? (((15 - d0) - 4 * d1)) : 0);
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

// Driver function
void blended_naive(HWStream<hw_uint<32> >& /* get_args num ports = 1 */in_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 1 */blended) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("blended_naive_debug.csv");
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
	{
	  for (int c1 = 0; c1 <= 46; c1 += 1)
	    for (int c2 = 0; c2 <= 46; c2 += 1) {
	in_update_0(in_off_chip, in, c2, c1);
	      if (c1 >= 2 && c2 >= 2) {
	gauss_blur_1_update_0(in, gauss_blur_1, c2 - 2, c1 - 2);
	        if (c1 % 2 == 0 && c2 % 2 == 0)
	gauss_ds_1_update_0(gauss_blur_1, gauss_ds_1, (c2 / 2) - 1, (c1 / 2) - 1);
	      }
	    }
	  for (int c1 = 0; c1 <= 20; c1 += 1)
	    for (int c2 = 0; c2 <= 20; c2 += 1) {
	gauss_blur_2_update_0(gauss_ds_1, gauss_blur_2, c2, c1);
	      if (c1 % 2 == 0 && c2 % 2 == 0)
	gauss_ds_2_update_0(gauss_blur_2, gauss_ds_2, c2 / 2, c1 / 2);
	    }
	  for (int c3 = 0; c3 <= 8; c3 += 1)
	    for (int c4 = 0; c4 <= 8; c4 += 1) {
	gauss_blur_3_update_0(gauss_ds_2, gauss_blur_3, c4, c3);
	      if (c3 % 2 == 0 && c4 % 2 == 0)
	gauss_ds_3_update_0(gauss_blur_3, gauss_ds_3, c4 / 2, c3 / 2);
	    }
	  for (int c4 = 0; c4 <= 7; c4 += 1)
	    for (int c5 = 0; c5 <= 7; c5 += 1) {
	laplace_us_2_update_0(gauss_ds_3, laplace_us_2, c5, c4);
	laplace_diff_2_update_0(gauss_ds_2, laplace_us_2, laplace_diff_2, c5, c4);
	    }
	  for (int c5 = 0; c5 <= 2; c5 += 1)
	    for (int c6 = 0; c6 <= 2; c6 += 1)
	gauss_blur_4_update_0(gauss_ds_3, gauss_blur_4, c6, c5);
	  for (int c5 = 0; c5 <= 1; c5 += 1)
	    for (int c6 = 0; c6 <= 1; c6 += 1)
	gauss_ds_4_update_0(gauss_blur_4, gauss_ds_4, c6, c5);
	  for (int c5 = 0; c5 <= 3; c5 += 1)
	    for (int c6 = 0; c6 <= 3; c6 += 1)
	laplace_us_3_update_0(gauss_ds_4, laplace_us_3, c6, c5);
	  for (int c5 = 0; c5 <= 3; c5 += 1)
	    for (int c6 = 0; c6 <= 3; c6 += 1)
	laplace_diff_3_update_0(gauss_ds_3, laplace_us_3, laplace_diff_3, c6, c5);
	  for (int c2 = 0; c2 <= 31; c2 += 1)
	    for (int c3 = 0; c3 <= 31; c3 += 1) {
	laplace_us_0_update_0(gauss_ds_1, laplace_us_0, c3, c2);
	laplace_diff_0_update_0(in, laplace_us_0, laplace_diff_0, c3, c2);
	blend_us_laplace_diff_0_update_0(laplace_diff_0, blend_us_laplace_diff_0, c3, c2);
	    }
	  for (int c1 = 0; c1 <= 31; c1 += 1)
	    for (int c2 = 0; c2 <= 31; c2 += 1) {
	      if (c1 % 2 == 0 && c2 % 2 == 0) {
	laplace_us_1_update_0(gauss_ds_2, laplace_us_1, c2 / 2, c1 / 2);
	laplace_diff_1_update_0(gauss_ds_1, laplace_us_1, laplace_diff_1, c2 / 2, c1 / 2);
	      }
	blend_us_laplace_diff_1_update_0(laplace_diff_1, blend_us_laplace_diff_1, c2, c1);
	blend_us_laplace_diff_2_update_0(laplace_diff_2, blend_us_laplace_diff_2, c2, c1);
	blend_us_laplace_diff_3_update_0(laplace_diff_3, blend_us_laplace_diff_3, c2, c1);
	blended_update_0(blend_us_laplace_diff_0, blend_us_laplace_diff_1, blend_us_laplace_diff_2, blend_us_laplace_diff_3, blended, c2, c1);
	    }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}
